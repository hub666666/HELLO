#include <stdio.h>
void zy1(){
	int s[]={1,9,21,34};
	int n=sizeof(s)/sizeof(s[0]),i;
	s[n]=9;//s[n]=key
	while(s[i]!=s[n])  ++i;
	if(i<n) 	printf("��%d������ֵΪ����",i+1);
}
void zy2(){
	int a[5]={9,3,2,11,11};//a[n-1]=key
	int n=sizeof(a)/sizeof(a[0]);//n-1 ԭ���鳤��
	int i=0;
//	��һ��
	while(a[i]!=a[n-1])++i;
	if(i<n-1) 
	//�ڶ���,�ؼ����������
/*	for(i=0;i<n;i++)
	   if(a[i]==9)//�ؼ���Ϊ9          */
		printf("\n��%d������ֵΪ����",i+1);
}
void main() {
	zy1(); 
	zy2();//ԭ����{9,3,2,11}��a[4]����key)��ԭ������ ,������ȶ� 
}
