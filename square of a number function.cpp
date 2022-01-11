#include <stdio.h>

int sq(int a);

int main(){
	int x,y;
	printf("Enter a number :");
	scanf("%d",&x);
	y=sq(x);
	printf("%d", y);
}

int sq(int a){
	int c;
	c= a*a;
	return c;
}