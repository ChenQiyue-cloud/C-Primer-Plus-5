#include<stdio.h>
void Temperatures(const double temperature)
{
    const double Fahrenheit_val = 32.0;
    const double Kelvin_val = 273.16;
    const double Fahrenheit_temp = 5.0 / 9.0 * (temperature - Fahrenheit_val);
    const double Kelvin_temp = temperature + Kelvin_val;

    printf("Celsius: %.2lf  Fahrenheit:%.2lf  Kelvin:%.2lf\n", temperature, Fahrenheit_temp, Kelvin_temp);
    return;
}
int main()
{
    double temperature;

    printf("please enter the temperature (q to quit):");
    while ( scanf("%lf", &temperature) == 1 )
    {
        Temperatures(temperature);
        printf("please enter the temperature (q to quit):");
    }

    return;
}
//此题参考csdn xiaojimmychen答案：http://blog4jimmy.com/2017/10/37.html
