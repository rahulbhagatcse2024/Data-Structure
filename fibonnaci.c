#include<stdio.h>
int main(){
	int a=0,b=1,c,n,i;
	printf("enter the limit of fibonacci series :");
	scanf("%d",&n);
	if (n==0){
		printf("Series is invalid as you entered zero:\n");
	}
	else{
		for (i=1;i<=n;i++){
		c=a+b;
		printf("for value %dth series of fibonnaci is:%d \n",i,c);
		a=b;
		b=c;
	}	
	}
	printf("the total value %dth series of fibonnaci is:%d",n,c);
}
