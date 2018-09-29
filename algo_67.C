#include<stdio.h>

int main()
{ 

	float a = 20;
	float b = 30;

	float c = (1 + a / 100)*(1 + b / 100);
	float t = (c - 1)* 100;
	
	printf("%f\n", t);
}
