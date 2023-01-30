#include "../Inc/main.h"

int opt_ty;

int main(void)
{
    start_msg();
    scanf("%d",&opt_ty);

    switch(opt_ty)
    {
        case 1:
            printf("write num: %d \n", opt_ty);
        case 2:
            printf("write num: %d \n", opt_ty);
        default:
            printf("Wrong input\n");
    }

    return(0);
}
