#include <string.h>
#include <stdio.h>//从后往前 
void hq1(){ //字符 
	char r[]={"0bcde"};// r[0]为关键字 
//	int i=sizeof(r)/sizeof(r[0])-1;//原数组长度 
    int	i=strlen(r)-1;//原数组长度 ，从1开始 
	r[0]='c';
	while(r[i]!=r[0]) --i;
   if(i>0) printf("第%d个数的数值为所求",i);
	else printf("该数组中无所求关键元素"); 
}
void hq2(){
	int r[]={0,11,7,6,9,17};// r[0]为关键字 ，赋值0 先占个位 ,使原数组从1开始 
	int i=sizeof(r)/sizeof(r[0])-1;//原数组长度 
	r[0]=11; 
	while(r[i]!=r[0]) --i;
	if(i>0) printf("第%d个数的数值为所求",i);
	else printf("该数组中无所求关键元素"); 
}
void main() {
   hq1();
   hq2();
}
