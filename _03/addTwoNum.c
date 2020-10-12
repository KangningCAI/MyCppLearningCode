/*
如果需要在一个源文件中引用另外一个源文件中定义的变量，
我们只需在引用的文件中将变量加上 extern 关键字的声明即可。
*/ 
#include <stdio.h>
extern int x;
extern int y;

int addTwoNum()
{
	return x+y;
	
}
