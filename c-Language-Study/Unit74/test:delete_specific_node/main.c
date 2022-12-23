#include <stdio.h>
#include <stdlib.h>

struct NODE {
    struct NODE *next;
    int data;
};

void addFirst(struct NODE *target, int data) //노드를 추가하는 함수 선언
{
    struct NODE *newNode = malloc(sizeof(struct NODE));
    newNode->next = target->next;
    newNode->data = data;
    
    target->next = newNode;
}

void removeNode(struct NODE *target, int data) //특정 노드를 삭제하는 함수 선언
{
    struct NODE *curr = target->next;
    struct NODE *prev = NULL; //curr 이전의 노드를 선언한다.
    
    while (curr != NULL)
    {
        if (curr == NULL)
            return;
        if (curr->data == data) //특정 데이터가 있는 노드를 발견하면 prev를 이용하여 curr노드를 삭제한다.
        {
            struct NODE *remove = curr;
            prev->next = curr->next;
            free(curr);
            return;
        }
        
        prev = curr; //현제 curr노드를 prev에 저장한다.
        curr = curr->next; //curr다음 노드를 curr에 저장한다.
    }
}

int main()
{
    int numArr[10] = {0, };
    int removeNum;
    
    scanf("%d %d %d %d %d %d %d %d %d %d",
        &numArr[0], &numArr[1], &numArr[2], &numArr[3], &numArr[4],
        &numArr[5], &numArr[6], &numArr[7], &numArr[8], &numArr[9]);
        
    scanf("%d", &removeNum);
    
    struct NODE *head = malloc(sizeof(struct NODE));
    head->next = NULL;
    
    for (int i = 0; i < 10; i++) //노드를 추가한다.
    {
        addFirst(head, numArr[i]);
    }
    
    removeNode(head, removeNum);
    
    struct NODE *curr = head->next;
    while (curr != NULL)
    {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    
    curr = head->next;
    while (curr != NULL) //할당한 메모리를 해제한다.
    {
        struct NODE *next = curr->next;
        free(curr);
        curr = next;
    }
    
    free(head);
    
    return 0;
}