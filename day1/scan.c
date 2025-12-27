#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	printf("num=%d",n);
	printf("num=%d",++n);
	printf("num=%d",n);
	printf("\n--------------------\n");
	scanf("%d",&n);
	printf("num=%d",n);
	printf("num=%d",n++);
	printf("num=%d",n);
	
	printf("\n--------------------\n");
	scanf("%d",&n);
	printf("num=%d",n);
	printf("num=%d",--n);
	printf("num=%d",n);
	
	printf("\n--------------------\n");
	scanf("%d",&n);
	printf("num=%d",n);
	printf("num=%d",n--);
	printf("num=%d",n);
	
}
