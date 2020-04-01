/*7．编写一个程序，提示用户输入一个double类型的数，并打印该数的立方值。
自己设计一个函数计算并打印立方值。main()程序把输入的值传递给该函数。*/
#include<stdio.h>
void cube(double input)
{
    printf("The cube of %.3lf is %.3lf.\n",input,input*input*input);
    return;
}
int main()
{
    double input;

    printf("Please enter a numble:");
    scanf("%lf",&input);
    cube(input);

    return 0;
}
