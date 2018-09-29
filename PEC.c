#include<stdio.h>
int 	main()
{
	float a;
	float b;
	float c;
	float result;

	a = 100;
	b = 445;
	c = 251;

	result = (a * b)/c;

	printf("(%f * %f) / %f = %f",a, b, c, result);
}
