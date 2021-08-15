#include<stdio.h>
int main(){
	int a,b,result;
	char operator;
	printf("entertwo  numbers\n");
	scanf("%d,%d",&a,&b);
		printf("hello i'm here to  make your life easy\n");
		printf("enter the operator\n");
	scanf("%c",&operator);
	//to perform addition
	if(operator=='+'){
		result=a+b;
	}
	//to perform multiplication
	else if(operator=='*'){
	result=a*b;	
	}
	//to perform division
	else if(operator=='/'&& b!=0){
	result=a/b;
	if(b==0)
	printf("error");	
}
printf("result = %d",result);
}
//repeat

