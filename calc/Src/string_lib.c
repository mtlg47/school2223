#include "../Inc/string_lib.h"

void start_msg(void)
{
    printf("********************\nSelect number type:\n1. Two unsignet integer numbers\n2. Two signet integer numbers\n9. Exit\nInput:");
}

void operation_msg(void)
{
    printf("____________________\nSelect operation type\n1. Adding\n2. Subtracting\n3. Dividing\n4. Multiplication\nInput:");
}

void sint_add_msg(void)
{
    int x,y;
    printf("____________________\nAdding operation\nType first number\nInput:");
    scanf("%d",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%d",&y);
    int res = sint_two_add(x,y);
    printf("____________________\nResult = %d\n", res);
}

void sint_sub_msg(void)
{
    int x,y;
    printf("____________________\nSubtracting operation\nType first number\nInput:");
    scanf("%d",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%d",&y);
    int res = sint_two_sub(x,y);
    printf("____________________\nResult = %d\n", res);
}
void sint_div_msg(void)
{
    int x,y;
    printf("____________________\nDividing operation\nType first number\nInput:");
    scanf("%d",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%d",&y);
    int res = sint_two_div(x,y);
    printf("____________________\nResult = %d\n", res);
}
void sint_mul_msg(void)
{
    int x,y;
    printf("____________________\nMultiplication operation\nType first number\nInput:");
    scanf("%d",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%d",&y);
    int res = sint_two_mul(x,y);
    printf("____________________\nResult = %d\n", res);
}

void uint_add_msg(void)
{
    uint x,y;
    printf("____________________\nAdding operation\nType first number\nInput:");
    scanf("%u",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%u",&y);
    uint res = uint_two_add(x,y);
    printf("____________________\nResult = %u\n", res);
}

void uint_sub_msg(void)
{
    uint x,y;
    printf("____________________\nSubtracting operation\nType first number\nInput:");
    scanf("%u",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%u",&y);
    uint res = uint_two_sub(x,y);
    printf("____________________\nResult = %u\n", res);
}
void uint_div_msg(void)
{
    uint x,y;
    printf("____________________\nDividing operation\nType first number\nInput:");
    scanf("%u",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%u",&y);
    uint res = uint_two_div(x,y);
    printf("____________________\nResult = %u\n", res);
}
void uint_mul_msg(void)
{
    uint x,y;
    printf("____________________\nMultiplication operation\nType first number\nInput:");
    scanf("%u",&x);
    printf("____________________\nType second number\nInput:");
    scanf("%u",&y);
    uint res = uint_two_mul(x,y);
    printf("____________________\nResult = %u\n", res);
}