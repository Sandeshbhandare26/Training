#include<stdio.h>
void main(){
	int arr[][3]={
				{1,2,3},
				{4,5,6}
				};
	int nele,nrows,ncols;
	nele=sizeof(arr)/sizeof(arr[0][0]);
	printf("%d \n",nele);
	nrows=sizeof(arr)/sizeof(arr[0]);
	printf("%d",nrows);
	ncols=nele/nrows;
	printf("%d",ncols);
} 
