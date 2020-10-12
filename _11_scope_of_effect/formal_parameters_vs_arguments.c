#include <stdio.h>
 
 
//声明全局变量
int a = 20;

int main()
{
	//在主函数中的局部变量声明
	int a = 10;
	int b = 20;
	int c = 0;
	
	int sum(int,int);
	
	printf ("value a in main(): %d\n",a);
	printf ("value b in main(): %d\n",b);
	
	c = sum(a,b);
	printf ("value of c in main(): %d\n",c);
	
	
	return 0; 
 } 


// define function: sum
int sum(int a, int b)
{
	printf ("value a in sum(): %d\n",a);
	printf ("value b in sum(): %d\n",b);
	return a+b;
}

 
