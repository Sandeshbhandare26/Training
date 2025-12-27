  #include<stdio.h>

int func(int arr[],int size){
	int temp;
	int i;
	int j=size-1;
	
	for(i=0;i<size/2;i++){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		--j;
	}
	for(i=0;i<size;i++){
		printf("%d",arr[i]);
	}
}
void main(){
	int arr[5]={1,2,3,4,5};
	int size=sizeof(arr)/sizeof(arr[0]);
	int x=func(arr,size);
} 

