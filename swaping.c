#include<stdio.h>
int main(){							//main function called
	
	int a=2;						//assigned value of a
	int b=3;						//assigned value of b
	a=a+b;
	b=a-b;
	a=a-b;							//swapping done without temporary variable 
	printf("swaping value a=%d and b=%d",a,b);		//printed value after swapping
	return 0;
	
}
