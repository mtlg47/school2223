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
                        int_add_msg();
                        break;
                    case 2:
                        printf("Wrong 2 input\n");
                        break;
                    case 3:
                        printf("Wrong 3 input\n");
                        break;
                    case 4:
                        printf("Wrong 4 input\n");
                        break;
                    default:
                        printf("WronfdgS\n");
                        break;
                }
                break;
            case 2:
                switch(math_ty)
                {
                    case 1:
                        printf("testinput\n");
                        break;
                    case 2:
                        printf("Wrong 2 input\n");
                        break;
                    case 3:
                        printf("Wrong 3 input\n");
                        break;
                    case 4:
                        printf("Wrong 4 input\n");
                        break;
                    default:
                        printf("WronfdgS\n");
                        break;
                }
                break;
            default:
                printf("Wrong input\n");
                break;
        }
        if (shutdown == 9) break;
    }

    return 0;
}
