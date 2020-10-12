#include <stdio.h>

// 定义两个局部变量
int x=1;
int y=2;
int addTwoNum();

int main(void)
{
	int result;
	result = addTwoNum();
	printf("result: %d \n",result);
	return 0;
	/*
	C 中的左值（Lvalues）和右值（Rvalues）
	C 中有两种类型的表达式：

	左值（lvalue）：指向内存位置的表达式被称为左值（lvalue）表达式。左值可以出现在赋值号的左边或右边。
	右值（rvalue）：术语右值（rvalue）指的是存储在内存中某些地址的数值。右值是不能对其进行赋值的表达式，
		也就是说，右值可以出现在赋值号的右边，但不能出现在赋值号的左边。
	*/
	
 } 
