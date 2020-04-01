/*6.现在修改编程练习5中的程序，使它能够计算整数平方的和（可以认为第一天得到
$l，第二天得到$4，第三天得到$9，以此类推，这看起来很不错）。C没有平方函数，
但是您可以利用n的平方是n*n的平方。*/
#include<stdio.h>
int main()
{
    int count = 0,sum = 0;
    int days;

    printf("Please enter the number of days:");
    scanf("%d",&days);
    while ( count++ < days )
    {
        sum += count * count;
    }
    printf("sum = %d\n",sum);

    return 0;
}
