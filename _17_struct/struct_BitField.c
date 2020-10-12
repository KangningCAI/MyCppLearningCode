#include <stdio.h>
struct BitField{
	int a:8;
	int b:2;
	int c:6;
};

struct PackedStruct{
	unsigned int f1:1;
	unsigned int f2:1;
	unsigned int f3:1;
	unsigned int f4:1;
	unsigned int type:4;
	unsigned int my_int:9;
}pack;
/*
一个位域存储在同一个字节中，如一个字节所剩空间不够存放另一位域时，
则会从下一单元起存放该位域。也可以有意使某位域从下一单元开始
*/
struct BitField2{
	unsigned a:4;//一个位域 
	unsigned :4; //空域
	unsigned b:4; //从下一个单元开始存放 
	unsigned c:4; 	
}; 
struct K{
	int a:1;
	int :2; //该两位不能够使用
	int b:3;
	int c:2; 
}; 

/*
由于位域不允许跨两个字节，因此位域的长度不能大于一个字节的长度，
也就是说不能超过8位二进位。如果最大长度大于计算机的整数字长，
一些编译器可能会允许域的内存重叠，另外一些编译器可能会把大于一个域
的部分存储在下一个字中。
*/ 
int main(void)
{
	struct BS{
		unsigned a:1;
		unsigned b:3;
		unsigned c:4;
	} bit, *pbit;
	
	bit.a=1;
	bit.b=7;/* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
	bit.c=15;
	
	printf("%d,%d,%d\n",bit.a,bit.b,bit.c);//以整型的格式输出三个域的内容
	
	pbit=&bit;
	pbit->a=0;
	pbit->b &= 3;
	pbit->c |= 1;
	
	printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
	 
	
	
}

