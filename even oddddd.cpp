#include <stdio.h>
int n (int num)
{
	if (num<=0)
	{
		return 1;
	}
	n (num-2);
	printf ("%d ",num);
	
}
int main ()
{
	int num=49;
	n (num);
}
