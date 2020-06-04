#include <stdio.h>
void zy1(){
	int s[]={1,9,21,34};
	int n=sizeof(s)/sizeof(s[0]),i;
	s[n]=9;//s[n]=key
	while(s[i]!=s[n])  ++i;
	if(i<n) 	printf("第%d个数的值为所求",i+1);
}
void zy2(){
	int a[5]={9,3,2,11,11};//a[n-1]=key
	int n=sizeof(a)/sizeof(a[0]);//n-1 原数组长度
	int i=0;
//	第一种
	while(a[i]!=a[n-1])++i;
	if(i<n-1) 
	//第二种,关键字是下面的
/*	for(i=0;i<n;i++)
	   if(a[i]==9)//关键字为9          */
		printf("\n第%d个数的值为所求",i+1);
}
void main() {
	zy1(); 
	zy2();//原数组{9,3,2,11}，a[4]（即key)在原数组中 ,程序较稳定 
}
