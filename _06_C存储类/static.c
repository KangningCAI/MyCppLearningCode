#include <stdio.h>

void func1(void);

static int count=10; //全局变量-static是默认的

int main()
{
	while(count--)
	{
		func1();
	}
	
	return 0;
	
 } 
 
void func1(void)
{
	int mount;
	auto int month; //auto只能用在函数内部，auto只修饰局部变量
	register int miles; //定义存储在寄存器中的变量，比如计数器，最大尺寸等于寄存器的大小；
	
	/*
	thingy 是func1的局部变量，只初始化1次；
	每次调用func1， thingy的数值不会重置 
	*/ 
	static int thingy=5;
	thingy++;
	printf("thingy: %d, count: %d\n",thingy,count);
	 
}
 
