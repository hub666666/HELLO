#include <string.h>
#include <stdio.h>//�Ӻ���ǰ 
void hq1(){ //�ַ� 
	char r[]={"0bcde"};// r[0]Ϊ�ؼ��� 
//	int i=sizeof(r)/sizeof(r[0])-1;//ԭ���鳤�� 
    int	i=strlen(r)-1;//ԭ���鳤�� ����1��ʼ 
	r[0]='c';
	while(r[i]!=r[0]) --i;
   if(i>0) printf("��%d��������ֵΪ����",i);
	else printf("��������������ؼ�Ԫ��"); 
}
void hq2(){
	int r[]={0,11,7,6,9,17};// r[0]Ϊ�ؼ��� ����ֵ0 ��ռ��λ ,ʹԭ�����1��ʼ 
	int i=sizeof(r)/sizeof(r[0])-1;//ԭ���鳤�� 
	r[0]=11; 
	while(r[i]!=r[0]) --i;
	if(i>0) printf("��%d��������ֵΪ����",i);
	else printf("��������������ؼ�Ԫ��"); 
}
void main() {
   hq1();
   hq2();
}
