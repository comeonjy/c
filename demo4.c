#include <stdio.h>
#include <unistd.h>
void int_reverse(int *,int);
void char_reverse1(char *);
void char_reverse2(char *);
int main(){
	int n;
	int i=0;
	int a[30];
	char c[]={'a','b','c','d','a','b','c','d','a','b','c','d','a','b','c','d'};
	printf("������ʮ��������"); 
	scanf("%d",&n);
	while(n){
	a[i]=n%2;
	printf("a[%d]=%d\n",i,a[i]);
	n/=2;
	i++;	
	}
	printf("�������鵹����Ϊ��");
	int_reverse(a,i);
	printf("\n");
	printf("�ַ����鵹����Ϊ��");
	char_reverse2(c);
	return 0;
} 

/*
��������ʹ�������鵹�����
�����������׵�ַ�����鳤�� 
*/
void int_reverse(int * p,int len){
	while(len--){
	printf("%d",*(p+len));
	}
}

/*
������������char���鳤�ȣ���ʹchar���鵹����� 
�����������׵�ַ 
���壺������������ 
*/
void char_reverse1(char * p){
	int len=0;
	while(*p++!='\0'){	//p++Ϊ��ʹ�ú����� ���˳�ѭ����pָ�������'\0'����һλ 
		len++;
	}
	p-=2;				//c�������Զ�Ϊ������Ͻ�����char c[]={'a','b','c','d','\0'}
	printf("len:%d\n",len); 
	while(len--){
		printf("%c",*(p--));
	}
}

/*
������������char���鳤�ȣ���ʹchar���鵹�����
�����������׵�ַ  
*/
void char_reverse2(char * p){
	int len=0;
	char *q;
	q=p;
	while(*q++!='\0'){
		len++;
	}
	printf("len:%d\n",len);
	while(len--){
	printf("%c",*(p+len));
	}
}
/**************************************************************
1.��������û�н�����'\0'
2.����������������������������޷���ȡ���鳤�ȵ� 
3.NULL��ָ������
4.��ȡ���鳤��ͨ�÷��� length=sizeof(a)/sizeof(a[0]);�õ������������Ԫ�صĸ��� 
***************************************************************/


