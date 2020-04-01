/*4．编写一个程序让用户按厘米输入一个高度值，然后，程序按照厘米和英尺英寸显示
这个高度值。允许厘米和英寸的值出现小数部分。程序允许用户继续输入，直到用户输
入一个非正的数值。程序运行的示例如下面所示：
Enter a height in centimeters: 182
182.0 cm = 5 feet, 11.7 inches
Enter a height in centimeters(<=O to quit): 168
168.0 cm = 5 feet, 6.1 inches
Enter a height in centimeters(<=O to quit): 0
bye
*/
#include<stdio.h>
int main()
{
    float height_cm,height_inch;
    int height_feet;

    printf("Enter a height in centimeters:");
    scanf("%f",&height_cm);

    while ( height_cm > 0 )
    {
        height_feet = height_cm / 30.48;
        height_inch = (height_cm - 30.48 * height_feet) / 2.54;  //1 feet=2.54cm,1 inch=30.48cm
        printf("%.1f cm = %d feet, %.1f inches\n", height_cm, height_feet, height_inch);

        printf("Enter a height in centimeters(<=0 to quit): ");
        scanf("%f", &height_cm);
    }
    return 0;
}
