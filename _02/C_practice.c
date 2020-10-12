#include <stdio.h>
#include <limits.h>
/*
在使用标准函数库中的输入输出函数时，编译系统要求程序提供有关的信息
（例如对这些输入输出函数的声明），#include<stdio.h>的作用就是用来提供这些信息的，
stdio.h是C编译系统提供的一个文件名，stdio是“standard input & output”的缩写，
即有关标准输入输出的信息。
在程序中用到系统提供的标准函数库中的输入输出函数时，应在程序的开头写上一行：
#include"stdio.h"或者是#include<stdio.h>,这样才能调用库函数。二者主要在于查找效率上
有差别，#include<stdio.h>一般用包含系统文件，它是查找先从系统目录查找开始查找；
#include "stdio.h"一般用包含项目文件，它是查找先从项目目录查找开始查找。
在编写C语言中，常用到printf()和scanf()函数，他们就是stdio.h中的两个标准输入输出函数，
所以编程语句中如果要用到此两个函数就一定要在头文件中加入#include<stdio.h>。
*/
#include <float.h>
int main()
{
	/*My first C program*/
	printf("Hello, world!\n");
	printf("int 存储大小: %lu\n",sizeof(int));
	//%lu 为 32 位无符号整数，详细说明查看 C 库函数 - printf()。
	
	//--------------------------------------
	printf("float 最大存储字节数：%lu \n",sizeof(float));
	printf("float 最小值： %E\n",FLT_MIN);
	printf("float 最大值： %E\n",FLT_MAX);
	printf("精度值： %d\n", FLT_DIG);
	
	//________________________________________
	float f, x=3.6, y=5.2; 
	int i=4, a, b;
	a=x+y;
	b=(int)(x+y);
	f=10/i;
	
	printf("a=%d, b=%d, f=%f, x=%f\n",a,b,f,x);
	//________________________________________
	int j,k;
	char c,ch;
	float salary;
	double d;//声明也是定义 
	/*
	C 中的变量声明
	变量声明向编译器保证变量以指定的类型和名称存在，这样编译器在不需要知道变量完整细节的情况下也能继续进一步的编译。变量声明只在编译时有它的意义，在程序连接时编译器需要实际的变量声明。
	
	变量的声明有两种情况：
	
	1、一种是需要建立存储空间的。例如：int a 在声明的时候就已经建立了存储空间。
	2、另一种是不需要建立存储空间的，通过使用extern关键字声明变量名而不定义它。 例如：extern int a 其中变量 a 可以在别的文件中定义的。
	除非有extern关键字，否则都是变量的定义。
	*/
	//_________________________________________
	extern int var_ext;//声明不是定义
	 
	
	
	return 0;
 } 
