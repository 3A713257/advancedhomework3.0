#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int x;
	float I;
	printf ("Please enter the profit in this month: ");
	scanf ("%d",&x);
	if (x<= 100000)
	I=x*0.1;
	else if (x>100000 && x<=200000)
	I=10000+(x-100000)*0.075;
	else if (x>200000 && x<=400000)
	I=17500+(x-200000)*0.05;
	else if (x>400000 && x<=600000)
	I=27500+(x-400000)*0.03;
	else if (x>600000 && x<=1000000)
	I=33500+(x-600000)*0.015;
	else
	I=39500+(x-1000000)*.01;
	printf ("The total amount of bonus that should be issued is: %.2f\n",I);
	
	system ("pause");
	return 0;
}
