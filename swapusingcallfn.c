#include<stdio.h>
int swap(int,int);
void main(){
	int a,b;
	printf("enter first value =");
	scanf("%d",&a);
	printf("enter second value =");
	scanf("%d",&b);
	swap(a,b);
}
int swap(int c,int d){
	int temp;
	temp=c;
	c=d;
	d=temp;
	printf("after swapping %d and %d ",c,d);
}
