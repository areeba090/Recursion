#include <stdio.h>
int fact (int num)
{
	if (num==1)
	{
		return 1;
	}
	return num*fact (num-1);
	
}
int main ()
{
	int num=5;
	int factorial=fact(num);
	printf ("%d",factorial);
}
