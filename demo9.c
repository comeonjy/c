#include <stdio.h>
void func();
int loop(int);
int monkey(int);
int main(){
	printf("%d",monkey(10));
	printf("%d",loop(6));
	func(); 
	return 0;
} 
/*
题目:有6个人坐在一起,
问第6个人有多少岁,他说比第5个人大3岁;问第5个人有多少岁,他说比第4个人大3岁;
问第4个人有多少岁,他说比第3个人大3岁;问第3个人有多少岁,他说比第2个人大3岁;
问第2个人有多少岁,他说比第2个人大3岁;问最后1个人,他说是15岁.那么,第6个人多少岁?
*/
int loop(int n){
	if(n>1){
		return loop(n-1)+3; 
	}
	return 15;
}
/*
题目：猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。
第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半零一个。
到第10天在想吃的时候就剩一个桃子了,
问第一天共摘下来多少个桃子？并反向打印每天所剩桃子数。
*/
int monkey(int n){
	if(n>1){
		int m=(monkey(n-1)+1)*2;
		printf("m=%d,n=%d\n",m,n);
		return m;
	}	
	return 1;

}
/*
题目：有1、2、3、4个数字，能组成多少个互不相同且无重复数字的三位数？都是多少？
程序分析：可填在百位、十位、个位的数字都是1、2、3、4。组成所有的排列后再去 掉不满足条件的排列。
*/
void func(){
	int arr[]={1,2,3,4};
	int i=0;
	int j=0;
	int k=0;
	int num=4;
	int ex=3;
	int count=0;
	for(i=0;i<num;i++){
		for(j=0;j<num;j++){
			for(k=0;k<num;k++){
				if(arr[i]!=arr[j]&&arr[i]!=arr[k]&&arr[j]!=arr[k]){
					printf("%d,%d,%d\n",arr[i],arr[j],arr[k]);
					count++;
				}
			}
		}
	} 
	printf("count:%d",count);	
}
