#include <stdio.h>
int main(){
	int a;
	int c=111;
	int b;
	char ch;
	char buf[255];
	char buff[255];
	FILE *p;
//�ļ�д�� 
	p=fopen("test.txt","a");
//	fputc('\n',p);					//���ַ�д�뵽pָ���������
//	fprintf(p,"this is point!\n");	//���ַ���д�뻺���� 
//	fputs("this is fputs...\n",p);	//���ַ���д�뵽pָ������������ɹ����طǸ�ֵ��ʧ�ܷ���EOF 
	c=fclose(p);					//������������д���ļ������ر��ļ��ļ��ͷŻ����� 
	
//�ļ���ȡ 
	p=fopen("test.txt","r");
	//����һ 
//	while((ch=fgetc(p))!=EOF){
//		fputc(ch,stdout);			//��ch��ʾ���ַ��͵���׼�������ȥ 
//	}

	//������ 
	fscanf(p,"%s",buf);			//��ȡp�������������Ƶ�buf�������ո���н��� 
	printf("fscanf:%s\n",buf); 
	
	//�ƶ��ļ�ָ�� 
//	int len;
//	len=ftell(p);				//����ļ�ָ��ƫ���� 
//	rewind(p);					//�ƶ��ļ�ָ�뵽�ļ�ͷ 
//	fseek(p,2L,0);				//�ƶ��ļ�ָ��(�ļ�ָ�룬ƫ����������������ֵ��0��ʾ�ļ�ͷ1��ʾ��ǰλ��2��ʾ�ļ�β) 
//	printf("%d",len);
	
	//������ 
	fgets(buff,5,p);			//��pָ����������л�ȡn-1���ַ����������з���ֹͣ��ȡ������ȡ���ַ������Ƶ�������buff�������з� 
	int i=0;
	printf("buff:%s\n",buff); 
//	printf("buff:");
//	while(*(buff+i)!='\0'){		//*(buff+i)==buff[i]���������Զ����ַ�����ĩβ����'\0'������ 
//		printf("%c",buff[i]);
//		i++;
//	}
	
	c=fclose(p);
	
	fputs("fputs:ok\n",stdout);
	fprintf(stdout,"fprintf:no\n");
	printf("a=%d\n",a);
	printf("b=%d\n",b); 
	printf("c=%d\n",c); 
	return 0;
}
/****************************************************************
1.fclose�����������ǽ�������������д���ļ�
2.fgetc()����ÿִ��һ��ָ��������һλ��ֱ��ָ��EOF������־ ,ʵ��ȡֵ����
3.fgets(buff,n,p)��ȡp��������n-1���ַ������Ƶ�buff�У��������з�ֹͣ��ȡ 
4.fputc(ch,stdout)��ʾch��ֵ 
5.fputs(s,point)��s�ַ���д�뵽pointָ���������
6.fprintf(point,s)��fputs���� 
*****************************************************************/
