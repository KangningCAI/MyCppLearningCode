#include <stdio.h>

int max_byVal(int,int);
int * max_byRef(int *,int *);

int main()
{
	int a=100;
	int b=200;
	printf("max_byVal()=%d\n",max_byVal(a,b));
	printf("max_byRef()=%d\n",max_byRef(&a,&b));
	printf("* max_byRef()=%d\n", * max_byRef(&a,&b));
	return 0;
}


//传值调用 
int max_byVal(int num1,int num2)
{
	//将参数的实际值复制给形参，修改函数内的形参不会影响实际参数 
	int result;
	if (num1>num2)
		result=num1;
	else
		result=num2;
	
	return result;
}


//引用调用 
int * max_byRef(int *num1,int * num2)
{
	//形参为指向实参的指针，对形参的指向操作时，就相当于对实参本身操作
	int * result;
	if (*num1>*num2)
		result = num1; //如果num1的数值更大，将num1在内存中的地址赋给result 
	else
		result=num2;//如果num2的数值更大，将num1在内存中的地址赋给result
	return result; //result中记录了较大值在内存中的地址，将该地址返回给主函数 
		 
	
}
