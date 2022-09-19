#include <stdio.h>
#include <string.h>
#include "globals.h"


int main()
{
	printf("What do you want to calculate?\n\ninput a number:  area(1), volume(2), speed(3)\n\n");
	scanf("%d", &choice);
	printf("\n");
	if (choice==1)
	{
		area();
	}
	if (choice==2)
	{
		volume = 1;
		area();
	}
	if (choice==3)
	{
		speed();
	}
}

int area(void)
{
	printf("Enter width:  ");
	scanf("%f", &num1);

	printf("Enter height:  ");
	scanf("%f", &num2);
	if (volume==1)
	{
		float num3;
		printf("Enter depth:  ");
		scanf("%f", &num3);
		multiply();
		answer = answer * num3;
	}
	else
	{
		multiply();
	}
	printf("area:  %f \n", answer);
}

int speed(void)
{
	printf("Enter distance:  ");
	scanf("%f", &num1);

	printf("Enter time:  ");
	scanf("%f", &num2);

	divide();
	printf("speed:  %f\n", answer);
}

int divide(void)
{
	answer = num1 / num2;
}

int multiply(void)
{
	answer = num1 * num2;
}
