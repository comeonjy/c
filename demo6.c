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
1	strcpy(s1, s2);复制字符串 s2 到字符串 s1。
2	strcat(s1, s2);连接字符串 s2 到字符串 s1 的末尾。
3	strlen(s1);返回字符串 s1 的长度。
4	strcmp(s1, s2);如果 s1 和 s2 是相同的，则返回 0；如果 s1<s2 则返回小于 0；如果 s1>s2 则返回大于 0。
5	strchr(s1, ch);返回一个指针，指向字符串 s1 中字符 ch 的第一次出现的位置。
6	strstr(s1, s2);返回一个指针，指向字符串 s1 中字符串 s2 的第一次出现的位置。
*/
