#include<stdio.h>

int main(){
	
	int a =10;
	int *p; //wild pointer
	p = &a;
	
	printf("address of p is %d \n ",p);
	printf("value of a is %d \n ",*p); //10
	
	int **q;
	q = &p;
	
	**q = *p + 2; // //increamet value of a by 2
	
	printf("address of q is %d \n ",*q);
	printf("value of a is %d \n ",*(*q)); // 12
	
	int ***r;
	r = &q;
	
	***r = **q + 2; //increamet value of a by 2
	
	
	
	printf("address of r is %d \n ",**r);
	printf("value of a is %d \n ",*(**r)); // 14
	
	
	
	return 0;
}
