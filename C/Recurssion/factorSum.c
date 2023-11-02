#include <stdio.h>

int sumOfFactors(int n, int i) {
    if (i == 1) {
        return 1;
    } else {
        if (n % i == 0) {
            return i + sumOfFactors(n, i - 1);
        } else {
            return sumOfFactors(n, i - 1);
        }
    }
}

int main() {
    int num;
	printf("enter the +ve number \n");
	scanf("%d",&num);
    int factorSum = sumOfFactors(num, num-1);

    printf("Sum of factors of %d is %d\n", num, factorSum);
    
    if( factorSum == num){
    	printf("Perfect Number \n");
	}else 
    {
    	printf("Not Perfect Number \n");
	}

    return 0;
}

