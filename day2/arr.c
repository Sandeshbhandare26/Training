#include<stdio.h>
void main(){
	int i;
	int integer [5] = {1,2,3,4,5};	
	int size=sizeof(integer)/sizeof(integer[0]);
	int j=size-1;
	int temp;
	for(i=0;i<size;i++){
		printf("index:%d, value:%d with address:%x \n",i,integer[i],&integer[i]);
	}
	
}
