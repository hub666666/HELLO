#include<stdio.h>
int main(){
	int a[10],i;
	int max=0;
	for (i=0;i<10;i++)
	{
	   scanf("%d",&a[i]);
	   if(a[i]==-1)  break;
	     else  if(a[i]>max)
	        {
	            max=a[i];
	            i+=1;
	        }
	      else 
	        {
	            max=max;
	            i+=1;
	        }
	}
	printf("%d",max);
	return 0;
}

