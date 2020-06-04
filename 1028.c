#include<stdio.h>
int f(int n)
{
	if(n==1)
	  return 10;
	else
	  return (f(n-1)+2)  ;
}
int main()
{
	int n,s;
	scanf("%d",&n);
	if(n>0)
	{
		s=f(n);
		printf("%d",s); 
    }
	return 0;
}
