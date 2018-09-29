#include<stdio.h>
int	main()
{
	float t;
	float y1;
	float y2;
	
	y1 = 3.6;
	y2 = 4;

	t = ((y2-y1)/y1)*100;

	printf("resultat = %f pourcent d'évolution\n",t);

	return(0);
}
