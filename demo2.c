#include <stdio.h>
int main (){
	char c = 'h';
	char str[]="str1";			//�����ַ��� 
	char *p="this is str2"; 	//�������ȸ��ַ���һ����ַ��Ȼ����pָ�������ַ	
	int *n,a=10; 
	double *d,b=10.2;			
	char *cc,aa='n';
	n=&a;
	d=&b;
	cc=&aa; 
	printf("str:%s\np:%s\n",str,p);
	printf("��ͬ����ָ�����Ŀռ䣺\n%d\n%d\n%d\n%d\n",sizeof(p),sizeof(n),sizeof(d),sizeof(cc));
	printf("�ռ��С��\ndouble:%d\nint:%d\nchar:%d\n",sizeof(b),sizeof(a),sizeof(aa));
	printf("��ŵ�ַ��\n char c:%p\n char str[] :%p\n char *p:%p \n int *n:%p\n",&c,&str,&p,&n); 
	printf("��ŵ�ַ��\n int a:%p\n double b :%p\n char aa:%p \n ",&a,&b,&aa); 
	return 0;
} 
/******************************************************************
1.c����ͨ�� �ַ����� �� �ַ�ָ�� �������ַ���
2.c���Ը�����ָ����ڴ�ռ��С������ͬ�ģ�����֤��
3.ָ��ֻ���ȶ����ֵ 
******************************************************************/
