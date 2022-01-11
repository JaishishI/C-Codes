#include <stdio.h>

int fact(int a);

int main(){
	int n,r,b,c,d,com, per;
	printf("Enter a the value of 'n' : ");
	scanf("%d",&n);
	printf("Enter a the value of 'r' : ");
	scanf("%d",&r);
	b=fact(n);
	c= fact(n-r);
	d= fact(r);
	com = b/(c*d);
	printf("nCr = %d", com);
	per = b/c;
	printf("\nnPr = %d", per);
	
}

int fact(int a){
	int i=1, j=1;
	for (i=1;i<=a;i++){
		j *= i;
	}
	return j;
}