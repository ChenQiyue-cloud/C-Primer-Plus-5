 /*3．编写一个程序，该程序要求用户输入天数，然后将该值转换为周数和天数。
 例如，此程序将把18天转换成2周4天。用下面的格式显示结果：
 18 days are 2 weeks,4 days.
 使用一个while循环让用户重复输入天数；当用户输入一个非正数（如0或-20）
 时，程序将终止循环。*/
 #include<stdio.h>
int main()
{
    int days_input,days_output,weeks;

    printf("Please enter the number of days:");
    scanf("%d",&days_input);

    while ( days_input > 0 )
    {
        weeks = days_input / 7;
        days_output = days_input % 7;
        printf("%d days are %d weeks,%d days.\n",days_input,weeks,days_output);

        printf("Please enter the number of days:");
        scanf("%d",&days_input);
    }
    return 0;
}
