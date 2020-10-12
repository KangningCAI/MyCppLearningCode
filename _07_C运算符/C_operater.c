#include <stdio.h>

int main()
{
	int a=21;
	int b=10;
	int c;
	
	c = a+b;
	printf("Line1: c=%d",c);
	printf("\n");
	
	c = a-b;
	printf("Line2: c=%d",c);
	printf("\n");
	
	c = a*b;
	printf("Line3: c=%d",c);
	printf("\n");
	
	c = a/b;
	printf("Line4: c=%d",c);
	printf("\n");
	
	c = a%b;
	printf("Line5: c=%d",c);
	printf("\n");
	
	c = a++;
	printf("Line6 a++: c=%d",a++);
	printf("\n");

	c = a--;
	printf("Line7: c=%d",c);
	printf("\n");
	
}
