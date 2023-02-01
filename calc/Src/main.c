#include "../Inc/main.h"

int oprt_ty, math_ty, shutdown;

int main(void)
{
    while(1)
    {
        start_msg();
        scanf("%d",&oprt_ty);
        if (oprt_ty == 9) break;
        operation_msg();
        scanf("%d",&math_ty);

        switch(oprt_ty)
        {
            case 1:
                switch(math_ty)
                {
                    case 1:
                        sint_add_msg();
                        break;
                    case 2:
                        sint_sub_msg();
                        break;
                    case 3:
                        sint_div_msg();
                        break;
                    case 4:
                        sint_mul_msg();
                        break;
                    default:
                        printf("Wrong input!\n");
                        break;
                }
                break;
            case 2:
                switch(math_ty)
                {
                    case 1:
                        uint_add_msg();
                        break;
                    case 2:
                        uint_sub_msg();
                        break;
                    case 3:
                        uint_div_msg();
                        break;
                    case 4:
                        uint_mul_msg();
                        break;
                    default:
                        printf("Wrong input!\n");
                        break;
                }
                break;
            default:
                printf("Wrong input\n");
                break;
        }
    }

    return 0;
}
