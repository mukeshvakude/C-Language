#include<stdio.h>

int main(){
	
	int a =10 ;
	int *intPointer; // int pointer declaration
	intPointer = &a; // &a = address of a
	
	char b = 'A';
	char *charPointer; // char pointer declaration
	charPointer = &b; // &b = address of b
	
	float floatValue = 65.34;
	float *floatPointer; // float pointer declaration
	floatPointer = &floatValue; // &floatValue = address of floatValue


	printf("Size of int = %d  \n",sizeof(int)); // this is compiler dependent size for my compiler it's 4 bytes
	printf("address of (intPointer) = %d \n",intPointer); //suppose the address of intPointer is 1004 
	printf("address of (intPointer + 1) = %d \n",intPointer+1); // address of (intPointer + 1) is  1004 + 4 = 1008 because int size is 4 byte
	printf("value at *(intPointer ) = %d \n",*intPointer); //10
	printf("value at *(intPointer + 1) = %d \n",*(intPointer+1)); // value of (intPointer + 1) is  some garbage value
	
	printf("\n");

	printf("Size of char = %d  \n",sizeof(char)); // this is compiler dependent size for my compiler it's 1 bytes
	printf("address of (charPointer) = %d \n",charPointer); //suppose the address of charPointer is 2001
	printf("address of (charPointer + 1) = %d \n",charPointer+1); // address of (charPointer +1 ) is  2001 + 1 = 2002 because char size is 1 byte
	printf("value at *(charPointer ) = %c \n",*charPointer); // A for %c and 65(ASCII value) for %d
	printf("value at *(charPointer + 1) = %d \n",*(charPointer+1)); // value of (charPointer + 1) is  some garbage value

	printf("\n");

	printf("Size of float = %d  \n",sizeof(float)); // this is compiler dependent size for my compiler it's 4 bytes
	printf("address of (floatValue) = %d \n",floatPointer); //suppose the address of c is 3000
	printf("address of (floatValue + 1) = %d \n",floatPointer+1); // address of (p+1) is  3000 + 4 = 3004 because float size is 4 byte
	printf("value at *(floatValue ) = %f \n",*floatPointer); // 65.34
	printf("value at *(floatValue + 1) = %d \n",*(floatPointer+1)); // value of (floatPointer + 1) is  some garbage value

	printf("\n");

	return 0;
}
