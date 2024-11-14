/*
Que 4 :
=======
Write Java Program Convert Fahrenheit To Celsius | Vice Versa
Formula :
Celsius=(Fahrenheit-32)*5/9;
Fahrenheit=((9*Celsius)/5)+32;
Note [ Write two seprate program for converting celsius into Fahrenheit and Fahrenheit into celsius ]

Example 1 :
Sample Input  : Enter temperature in Fahrenheit: 98.6
Sample Output : Temperature in Celsius: 37.0

Example 2 :
Sample Input  : Enter temperature in Celsius: 37
Sample Output : Temperature in Fahrenheit: 98.6

===========================*/
import java.util.Scanner;

class ProgramFour 
{
	public static void main(String[] agrs) 
	{
		Scanner sc=new Scanner(System.in);
		System.out.print("Enter the Fahrenheit");
		double fahrenheit=sc.nextDouble();
		double x=FahrenheitToCelsius4.fahrenheitToCelsius(fahrenheit);
		System.out.printf("Temperature in Celsius: %.1f\n",x);
		System.out.print("Enter the Celsius");
		double celsius=sc.nextDouble();
		Double y=CelsiusToFahrenheit4.celsiusToFahrenheit(celsius);
		System.out.printf("Temperature in Fahrenheit: %.1f\n",y);
	}
}
