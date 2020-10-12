#include <stdio.h>

int main()
{
	//part1
	int var1;
	char var2[10];
	
	printf("var1 变量的地址：%p\n",&var1);
	printf("var2 变量的地址：%p\n",&var2);
	
	//part2
	int *ip; //整型指针
	double *dp;//double型指针 
	float *fp;//浮点型指针
	char *cp;//字符型指针
	
	int var = 20;
	
	
	ip = &var;
	printf("Address of var: %p\n",&var); 
	printf("Address in ip: %p\n",ip);
	printf("value in pointer ip: %d\n",*ip);
	
	/*
	在变量声明的时候，如果没有确切的地址可以赋值，
	为指针变量赋一个 NULL 值是一个良好的编程习惯。
	赋为 NULL 值的指针被称为空指针。
	*/
	int *ptr = NULL;
	printf("ptr的地址%p\n",ptr);
	
	if (ptr){
	}

	return 0;
}
