#include <stdio.h>

int check(int a);

int main(){
	int x,y;
	printf("Enter the number : ");
	scanf("%d",&x);
	y=check(x);
	if(y==0){
		printf("Even number");
	}
	else printf("Odd number");
}

int check(int a){
	int c;
	c = a%2;
	return c;
}