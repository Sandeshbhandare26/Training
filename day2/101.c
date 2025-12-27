#include<stdio.h>
int main(){
	int val=100;
	printf("%d\n",val);
	{
		val++;
		printf("%d\n",val);
	}
	printf("%d\n",val);
	{
		int val=200;
		printf("%d\n",val);
	}
	printf("%d",val);
	
	return 0;
}
