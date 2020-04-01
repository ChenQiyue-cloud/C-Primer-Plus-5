/*编写一个程序,提示用户输入一个整数，然后打印从该数到比该数达10的所有
整数（例如，用户输入5，则打印5~15的所有整数，包括5和15）。要求打印的
各值之间用一个空格、制表符或换行符分开。*/
#include<stdio.h>
int main()
{
    int input;

    printf("Please enter an integer:");
    scanf("%d",&input);

    int i;
    for ( i=input; i <= input + 10; i++ )
    {
        printf("%d\t",i);
    }
    return 0;
}
