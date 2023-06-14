#include <stdio.h>
int print (int num)
{
   if (num==0)
   {
   	return 1;
	   }
	   print (num-1);
	return  num+ print (num-1);
}
int main ()
{
	int num;
	scanf ("%d",&num);
	print (num);
	int res=print (num);
	printf ("%d",res);
}
