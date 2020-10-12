#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//生成和返回随机数的函数
int *getRandom()
{
	/*
	C语言不允许返回完整的数组作为函数的参数，
	但是可以返回不带索引的数组名来返回一个指向数组的指针 
	*/
	static int r[10];
	int i;
	
	//设置种子
	srand( (unsigned) time(NULL) );
	
	for(i=0;i<10;i++)
	{
		r[i] = rand();
		printf("___r[%d] = %d______\n",i,r[i]);
	}
	  
	return r;
 } 

int main()
{
	int *p;//定义一个局部变量，指向整数的指针
	int i;
	
	p=getRandom();
	for(i=0;i<10;i++)
	{
		printf("(p+%d)=%d, *(p+%d) = %d\n",i,(p+i),i,*(p+i));
	}
	return 0;
}
