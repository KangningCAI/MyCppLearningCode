#include <stdio.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;

}; 


//此声明了拥有三个成员的结构体，分别为整型a，字符型b, 双精度c
// 并且声明了结构体变量s1，但是并没声明该结构体的标签 
struct
{
	int a;
	char b;
	double c;
} s1;

//此声明了拥有三个成员的结构体，分别为整型a，字符型b, 双精度c
//声明了该结构体的标签为SIMPLE，但是并没有声明该结构体的变量 
struct SIMPLE
{
	int a;
	char b;
	double c;
};

//声明SIMPLE结构体变量 t1,t2,t3 
struct SIMPLE t1,t2,*t3;

//(attention: t3=&s1 被认为是非法的，因为t3和s1被认为是不同的类型)

//使用typedef创建新类型
typedef struct
{
	int a;
	char b;
	double c; 
} Simple2;
Simple2 u1,u2[20],*u3;

//结构体成员中包含其他结构体
struct COMPLEX
{
	char string[100];
	struct SIMPLE a;
};

//结构体成员中包含了指向自己类型的指针
struct NODE
{
	char string[100];
	struct NODE *next_node;	
};


//如果两个结构体相互包含，那么需要对其中一个结构体进行不完整声明
struct B;
//结构体A中包含指向结构体B的指针
struct A{
	struct B *partner;
	//other members;
 };
struct B{
	struct A *parter;
	//other parameters;
};

int main(void)
{
	return 0;
}
 
 



