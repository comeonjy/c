#include <stdio.h>
#include <string.h>
struct Book{
	char title[50];
	char auther[10];
	int page;
};
int main(){
	struct Book book1,book2;
	strcpy(book1.auther,"jy");
	printf("book1.auther:%s\n",book1.auther);
	struct Book *p;
	p=&book1;
	printf("p->auther:%s\n",p->auther); 
	return 0;
} 

/*
1	strcpy(s1, s2);�����ַ��� s2 ���ַ��� s1��
2	strcat(s1, s2);�����ַ��� s2 ���ַ��� s1 ��ĩβ��
3	strlen(s1);�����ַ��� s1 �ĳ��ȡ�
4	strcmp(s1, s2);��� s1 �� s2 ����ͬ�ģ��򷵻� 0����� s1<s2 �򷵻�С�� 0����� s1>s2 �򷵻ش��� 0��
5	strchr(s1, ch);����һ��ָ�룬ָ���ַ��� s1 ���ַ� ch �ĵ�һ�γ��ֵ�λ�á�
6	strstr(s1, s2);����һ��ָ�룬ָ���ַ��� s1 ���ַ��� s2 �ĵ�һ�γ��ֵ�λ�á�
*/
