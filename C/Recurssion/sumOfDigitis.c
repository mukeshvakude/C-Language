#include<stdio.h>
int sumOfDigitis(int n){
	
	
	if(n == 0){
		return n;
	}else{
	    return n + sumOfDigitis(n - 1);
	}
}

int main(){
	int n;
	printf("enter the +ve number \n");
	scanf("%d",&n);
	int sum = sumOfDigitis(n);
	printf("%d",sum);
	return 0;
}
