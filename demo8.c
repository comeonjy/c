#include <stdio.h>
#include <stdarg.h>
double average(int n,...){
	int i;
	int sum=0;
	//������� 
	va_list valist;
	//��ʼ�����в��� 
	va_start(valist,n);
	//��ȡÿ������ֵ 
	for(i=0;i<n;i++){
		sum+=va_arg(valist,int);	
	}
	return sum/n;
}
int main(){
	printf("average:%f",average(0,5,2,3,4,5,6));
	return 0; 
} 
/***********************************************************
1.va_arg()����һ�Σ�ָ����� 
2....ǰ�������һ�����Ͳ�������ʾ�������� 
************************************************************/
