#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define erro pow(10,-7)

int main()
{
	double x0, x, y, k;
	
	printf("insira o valor de x: ");
	scanf("%lf", &x);
	
	x0=x;
	do
	{
		y=cos(x);
		k=fabs(x-y);
		x=y;
		
	}while(k>erro);
	
	printf("O valor de cos(x) é %lf: ", cos(x));
	
}
