#include<stdio.h>   
int main()
{
	int n,i;
	long s=0;
	scanf("%d",&n);
	printf("%d*%d*%d=%d=",n,n,n,n*n*n);
	for(i=(n*n-n+1);;i=i+2)                     //�м���Կ���   �Ȳʽ n*(a1+2*(n-1)+a1)/n==m*m*m---->a1=i 
	{
		s+=i;
		if(s==n*n*n)
		    {
		      printf("%d",i);
		      break;                          //////�����break ���ظ�ѭ�������������������� 
		    }
		  //  else continue;
		else 
		  printf("%d+",i);                       //���ʱ��+�� 
	}
	
	return 0;
}
