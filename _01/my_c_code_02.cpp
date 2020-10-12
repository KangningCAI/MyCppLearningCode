#include <stdio.h>

//函数外定义变量 x,y
int x;
int y;
int addTwoNum()
{
	//函数内部声明变量 x,y为外部变量 
	extern int x;
	extern int y;
	//给外部变量（全局变量）x,y 赋值
	x=1;
	y=2;
	return x+y;
	
} 

int main()
{
	int result;
	printf("x=%d, y=%d\n",x,y);
	result = addTwoNum();
	printf("add finished\n");
	printf("x=%d, y=%d\n",x,y);
	printf("result=%d \n",result);
	return 0;
}

