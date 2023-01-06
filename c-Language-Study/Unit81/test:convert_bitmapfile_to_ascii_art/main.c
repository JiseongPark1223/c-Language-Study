#include <stdio.h>
#include <stdlib.h>

#pragma pack(push, 1) //이미지 파일을 변환하기 때문에 1바이트로 정렬한다.

typedef struct _BITMAPFILEHEADER 
{
    unsigned short bfType;
    unsigned int   bfSize;
    unsigned short bfReserved1;
    unsigned short bfReserved2;
    unsigned int   bfOffBits;
} BITMAPFILEHEADER;

typedef struct _BITMAPINFOHEADER
{
    unsigned int   biSize;
    int            biWidth;
    int            biHeight;
    unsigned short biPlanes;
    unsigned short biBitCount;
    unsigned int   biCompression;
    unsigned int   biSizeImage;
    int            biXPelsPerMeter;
    int            biYPelsPerMeter;
    unsigned int   biClrUsed;
    unsigned int   biClrImportant;
} BITMAPINFOHEADER;

typedef struct _RGBTRIPLE
{
    unsigned char rgbtBlue;
    unsigned char rgbtGreen;
    unsigned char rgbtRed;
} RGBTRIPLE;

#pragma pack(pop)

#define PIXEL_SIZE 3
#define PIXEL_ALIGN 4

int main()
{
    FILE *fpBmp;
    FILE *fpTxt;
    BITMAPFILEHEADER fileHeader;
    BITMAPINFOHEADER infoHeader;
    
    unsigned char *image;
    int size;
    int width, height;
    int padding;
    
    char ascii[] = {'9', '8', '7', '6', '5', '4', '3', '2', '1', '0', ' '};
    
    fpBmp = fopen("sample.bmp", "rb");
    if (fpBmp == NULL)
        return 0;
        
    if (fread(&fileHeader, sizeof(BITMAPFILEHEADER), 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }
    
    if (fileHeader.bfType != 'MB') //매직넘버를 확인한다.
    {
        fclose(fpBmp);
        return 0;
    }
    
    if (fread(&infoHeader, sizeof(BITMAPINFOHEADER), 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }
    
    if (infoHeader.biBitCount != 24) //24비트인지 아닌지 확인한다.
    {
        fclose(fpBmp);
        return 0;
    }
    
    size = infoHeader.biSizeImage;
    width = infoHeader.biWidth;
    height = infoHeader.biHeight;
    
    padding = (PIXEL_ALIGN - ((width * PIXEL_SIZE) % PIXEL_ALIGN)) % PIXEL_ALIGN;
    //남는 공간을 계산한다.
    if (size == 0)
    {
        size = (width * PIXEL_SIZE + padding) * height;
    }
    
    image = malloc(size);
    
    fseek(fpBmp, fileHeader.bfOffBits, SEEK_SET);
    
    if (fread(image, size, 1, fpBmp) < 1)
    {
        fclose(fpBmp);
        return 0;
    }
    
    fclose(fpBmp);
    
    for (int y = height - 1; y >= 0; y--) 
    {
        for (int x = 0; x < width; x++)
        {
            int index = (x * PIXEL_SIZE) + (y * (width * PIXEL_SIZE)) + (padding * y);
            
            RGBTRIPLE *pixel = (RGBTRIPLE *)&image[index];
            
            unsigned char blue = pixel->rgbtBlue;
            unsigned char green = pixel->rgbtGreen;
            unsigned char red = pixel->rgbtRed;
            
            unsigned char gray = (red + green + blue) / PIXEL_SIZE;
            
            char c = ascii[gray * sizeof(ascii) / 256];
            
            printf("%c", c);
        }
        printf("\n");
    }
    
    free(image);
    
    return 0;
}