#include <stdio.h>

void swap(int a, int b);

int main(){
	int x,y;
	printf("Enter a number : ");
	scanf("%d", &x);
	printf("Enter a number : ");
	scanf("%d", &y);
	swap(x,y);
}

void swap(int a, int b){
	int x,y,j;
	j=a;
	x=b;
	y=j;
	printf("x=%d , y=%d",x,y);
}