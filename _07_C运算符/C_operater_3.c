#include <stdio.h>
int print_sizeof(void);
int main()
{
	unsigned int a=60; // 60 = 0011 1100
	unsigned int b=13; // 13 = 0000 1101
	int c=0;
	
	c = a & b; // 12 = 0000 1100
	printf("a & b = %d\n",c);
	
	c = a | b; // 61 = 0011 1101
	printf("a | b = %d\n",c);
	
	c = a ^ b; // 49 = 0011 0001
	printf("a ^ b = %d\n",c);
	
	c = ~a; // -61 = 1100 0011
	printf("~a = %d\n",c);
	
	c = a<<2; // 240 = 1111 0000
	printf("a<<2 = %d\n",c);
	
	c = a>>2; // 240 = 0000 1111
	printf("a>>2 = %d\n",c);
	
	
	printf("a=%d\n",a);
	
	c=a;
	c+=a;
	printf("c+=a: %d\n",c);
	
	c=a;
	c-=a;
	printf("c-=a: %d\n",c);
	
	c=a;
	c*=a;
	printf("c*=a: %d\n",c);
	
	c=a;
	c/=a;
	printf("c/=a: %d\n",c);
	
	c=200;
	c &=2;// c = c&2 
	printf("c&=2: %d\n",c);
	
	print_sizeof();
	
	
	
	
	
	
}

int print_sizeof(void)
{
	printf("this is function: printf_sizeof()\n");
	int a=4;
	short b;
	double c;
	int * ptr;
	
	printf("sizeof(a):%lu\n",sizeof(a));
	printf("sizeof(b):%lu\n",sizeof(b));
	printf("sizeof(c):%lu\n",sizeof(c));
	
	ptr = &a;
	printf("a=%d\n",a);
	printf("ptr=%d\n",ptr);
	printf("*ptr=%d\n",*ptr);
	
	//三元运算符实例
	a = 10;
	b = (a==1) ? 20:30;
	printf("b=%d\n",b);
	
	b = (a==10) ? 20:30;
	printf("b=%d\n",b);
	
	
	
	return 0;
}
