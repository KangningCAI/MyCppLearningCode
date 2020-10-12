#include <stdio.h>

int main()
{
	int c; 
	int a=10;
	c=a++;
	printf("=====先赋值，后运算==========");
	printf("c=a++ \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
	a=10;
	c=a--;
	printf("c=a-- \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
	
	printf("=====先运算，后赋值==========");
	a=10;
	c=++a;
	printf("c=++a \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
	a=10;
	c=--a;
	printf("c=--a \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
}
