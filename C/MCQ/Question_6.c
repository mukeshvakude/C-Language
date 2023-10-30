#include <stdio.h>

int main()

{

	int a = 0, b = 0;
	
	l1: while (a < 2)
	
	{
		
		a++;
		
		while (b < 3)		
		{
			printf("find\n");			
			goto l1;
		}
	
	}

return 0;
}
