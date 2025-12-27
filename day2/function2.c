#include<stdio.h>

int func(int arr[],int size){
	int i;
	int sum=0;
	for(i=0;i<size;i++){
	sum=sum+arr[i];		
	}	
	printf("%d",sum);
	return sum;
}
void main(){
	int arr[5]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int x=func(arr,size);
} 

