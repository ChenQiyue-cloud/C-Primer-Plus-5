/*1。编写一个程序，把用分钟表示的时间转换成以小时和分钟
表示的时间。使用#define来创建一个代表60的符号常量或
const变量。使用while循环让用户重复输入值，直到用户
输入一个小于或等于0的值才停止循环。*/
#include<stdio.h>
#define SECONDS_PER_MIN 60
int main()
{
    int hours,min1,min2;

    printf("Please enter a time(minutes):");
    scanf("%d",&min1);

    while ( min1 > 0 )
    {
        hours = min1 / SECONDS_PER_MIN;
        min2 = min1 % SECONDS_PER_MIN;
        printf("%d minutes = %d hours and %d minutes.\n",min1,hours,min2);

        printf("Please enter a time(minutes):");
        scanf("%d",&min1);
    }
    return 0;
}
