#include<stdio.h>

func(int a,int b,char c){
	int an;
	if(c=='+'){
		an=a+b;
	}
	else if(c=='-'){
		an==a-b;
	}
	else{
		printf("wrong input");
		return -1;
	}
	return an;
}
void main(){
	int a,b;
	char c;
	printf("Enter the opration(+ or -)");
	scanf("%c",&c);
	printf("Enter the number a ");
	scanf("%d",&a);
	printf("Enter the number b ");
	scanf("%d",&b);
	int ans=func(a,b,c);
	printf("%d",ans);
} 

