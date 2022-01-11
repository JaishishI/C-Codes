#include <stdio.h>
 int prime(int a);
 
 int main(){
 	int x,b;
 	printf("Enter the number : ");
 	scanf("%d", &b);
 	x=prime(b);
 	if(x<=2){
 		printf("\nPrime number.\n");
	 }
	else printf("\nNot prime number.\n");
 }
 
 int prime(int a){
 	int i, c=0;
 	for(i=1;i<=a;i++){
 		a%i;
 		if(a%i == 0){
 			c +=1;
		 }
	 }
	 return c;
 }
 