#include <stdio.h>

int main()
{
	int c; 
	int a=10;
	c=a++;
	printf("=====�ȸ�ֵ��������==========");
	printf("c=a++ \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
	a=10;
	c=a--;
	printf("c=a-- \n");
	printf("c=%d\n",c);
	printf("a=%d\n",a);
	
	
	printf("=====�����㣬��ֵ==========");
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
