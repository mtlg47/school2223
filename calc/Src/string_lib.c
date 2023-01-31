#include "../Inc/string_lib.h"

void start_msg(void)
{
    printf("____________________\nSelect number type:\n1: Two unsignet integer nubers\n2: Two signet integer numbers\n9: Exit\n");
}

void operation_msg(void)
{
    printf("____________________\nSelect operation type\n1: Adding\n2: Subtracting\n3: Division\n4: Multiplication\n");
}

void int_add_msg(void)
{
    int x,y;
    printf("____________________\nAdding operation\nType first number\n");
    scanf("%d",&x);
    printf("____________________\nType second number\n");
    scanf("%d",&y);
    int res = sint_two_num(x,y);
    printf("____________________\nResult = %d\n", res);
}
