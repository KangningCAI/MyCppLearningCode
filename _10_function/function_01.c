#include <stdio.h>

// 函数声明
int max(int,int);
int min(int num1,int num2);

int main()
{
	//定义局部变量
	int a=100;
	int b=200;
	int ret;
	
	//调用函数获取最大值
	ret = max(a,b);
	printf("Max value is: %d\n",ret);
	
	ret = min(a,b);
	printf("Min value is: %d\n",ret);
	return 0; 
}

int max(int num1,int num2)
{
	if (num1>num2) return num1;
	else return num2; 
}

int min(int num1,int num2)
{
	int result;//局部变量声明
	
	if (num1>num2)
		result=num2;
	else
		result=num1;
	return result; 
}

