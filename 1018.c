#include<stdio.h>   
int main()
{
	int n,i;
	long s=0;
	scanf("%d",&n);
	printf("%d*%d*%d=%d=",n,n,n,n*n*n);
	for(i=(n*n-n+1);;i=i+2)                     //中间可以空着   等差公式 n*(a1+2*(n-1)+a1)/n==m*m*m---->a1=i 
	{
		s+=i;
		if(s==n*n*n)
		    {
		      printf("%d",i);
		      break;                          //////如果无break 将重复循环！！！！！！！！！ 
		    }
		  //  else continue;
		else 
		  printf("%d+",i);                       //输出时“+” 
	}
	
	return 0;
}
