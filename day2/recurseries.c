#include<stdio.h>
int main()
{
	int val;
	val = 10;
	print_series(val);
	printf("\n");
	return 0;
}
void print_series(int val){
	if (val <=0)
	return ;
	print_series(val-1);
	printf("%d\t",val);
	return;
}
