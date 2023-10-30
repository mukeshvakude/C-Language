#include<stdio.h>

int main(){
	
	int a , b= 20 ;
	int *p; // pointer declaration
	p = &a; // &a = address of a

	printf("address of a = %d \n",&a);
	printf("address of p = %d \n",p);
	printf("value of a = %d \n",a); // print garbage value because not inialize value a 
	printf("value of p = %d \n",*p);
	
	p = &b;
	
	
	printf("address of b = %d \n",&b);
	printf("address of p = %d \n",p);
	printf("value of b = %d \n",b); // print actual value because value inialize to b = 20
	printf("value of p = %d \n",*p);
	return 0;
}
