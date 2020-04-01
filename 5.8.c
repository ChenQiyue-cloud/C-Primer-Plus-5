#include<stdio.h>
int main()
{
    int input1,input2,output;

    printf("This program computes moduli.\n");
    printf("Enter an integer to serve as second operand: ");
    scanf("%d",&input1);
    printf("Now enter the first operand: ");
    scanf("%d",&input2);

    while ( input2 > 0 )
    {
        output = input2 % input1;
        printf("%d %% %d is %d\n",input2,input1,output);

        printf("Enter next numble for first operand (<= to quit): ");
        scanf("%d",&input2);
    }
    return 0;
}
