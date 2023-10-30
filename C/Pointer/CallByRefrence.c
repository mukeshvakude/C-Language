// USES of Pointer

#include<stdio.h>
void Increament(int *a){
	
	*a = *a + 1;
}

int main(){
	
	int a = 10;
	Increament(&a); // call by refrence passing address of a
	printf(" value of a = %d ", a);
	return 0;
}
