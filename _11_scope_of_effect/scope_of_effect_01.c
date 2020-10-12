#include <stdio.h>

/*
C作用域规则：
局部变量： 函数或者块内部声明的变量，只能被函数or块内部的代码使用
 
全局变量： 所有函数外部声明的变量，通常在程序的顶部，在整个程序的声明周期都是有效的，
			在任意函数内部都能够访问全局变量。声明后整个程序都可以访问。 
形式参数： 函数形式参数的定义中 

*/

int g; //声明全局变量
int get_g_value(void);
int main()
{
	//局部变量声明&定义 
	int a,b;
	int c;// 变量的声明并定义，告诉编译器，何处创建、如何创建变量的存储(指定变量的数据类型，该类型的一个或者多个变量的列表) 
	 
	int d=10; // 变量的声明、定义、并初始化，
	a=100; //变量的初始化，初始化可以在声明变量时进行，也可以后续初始化；
	// 不带初始化的定义： 带有静态存储持续时间的变量会被隐式初始化为NULL（0），所有其他变量的初始值是为定义的
	
	
	//实际初始化
	a=10;
	b=20;
	c=a+b;
	
	printf("a=%d,b=%d,c=%d\n",a,b,c);
	
	
	//访问全局变量
	g=c;
	printf("g=%d\n",g); 
	
	printf("into function: get_g_value\n");
	get_g_value();
	printf("outof function: get_g_value\n");
	
	
	
	
	
	return 0;  
 } 
 
 int get_g_value(void)
 {
 	char g[100]="Hello, this is local variable g!\n";
 	printf("%s",g);
 	return 0;
 }
