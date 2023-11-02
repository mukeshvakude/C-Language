#include<stdio.h>
int factorial(int number){
	if(number <= 1 ){
		return 1;
	}
	
	return number * factorial(number -1 ); 
}

int main(){
	int n;
	printf("enter the +ve number \n");
	scanf("%d",&n);
	int fact = factorial(n);
	printf("%d",fact);
	return 0;
}
