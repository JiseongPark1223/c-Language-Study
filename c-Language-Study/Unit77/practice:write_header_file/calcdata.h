#ifndef DATA_H //DATA_H매크로가 선언이 안되어 있으면 선언하고 선언 되어 있으면 하지 않아 중복을 방지한다.
#define DATA_H

typedef struct _CALC_DATA {
    int operand1;
    int operand2;
    char operator;
    int result;
} CALC_DATA;

#endif