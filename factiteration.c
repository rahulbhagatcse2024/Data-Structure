#include<stdio.h>
int main(){
	int i,n,result=1;
	printf("enter the value of n:");
	scanf("%d",&n);
	if (n==0){
		printf("factoial is zero");
	}
	else{
	for (i=1;i<=n;i++){
		result=i*result;
	}
	}
	printf("the factorial value is =%d",result);
}
