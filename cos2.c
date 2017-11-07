#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#define erro pow(10,-6)

int main()
{
	double x0, x1, x, y, k, l, m;
	
	printf("insira o valor de x: ");
	scanf("%lf", &x1);
	
	m=1;
	
	do
	{
			
		x=fabs(x1 - ( ( cos(x1) - x1 ) / ( -sin(x1) -1 ) ) );
		k=fabs(cos(x)-x);
		x1=x;
		m++;
	}while(k>erro);
				
	printf("O valor de cos(x) é %lf: ", x);
	printf("\n");
	printf("m = %lf", m);
	
	
}
