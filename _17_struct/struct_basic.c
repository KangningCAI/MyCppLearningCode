#include <stdio.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;

}; 


//��������ӵ��������Ա�Ľṹ�壬�ֱ�Ϊ����a���ַ���b, ˫����c
// ���������˽ṹ�����s1�����ǲ�û�����ýṹ��ı�ǩ 
struct
{
	int a;
	char b;
	double c;
} s1;

//��������ӵ��������Ա�Ľṹ�壬�ֱ�Ϊ����a���ַ���b, ˫����c
//�����˸ýṹ��ı�ǩΪSIMPLE�����ǲ�û�������ýṹ��ı��� 
struct SIMPLE
{
	int a;
	char b;
	double c;
};

//����SIMPLE�ṹ����� t1,t2,t3 
struct SIMPLE t1,t2,*t3;

//(attention: t3=&s1 ����Ϊ�ǷǷ��ģ���Ϊt3��s1����Ϊ�ǲ�ͬ������)

//ʹ��typedef����������
typedef struct
{
	int a;
	char b;
	double c; 
} Simple2;
Simple2 u1,u2[20],*u3;

//�ṹ���Ա�а��������ṹ��
struct COMPLEX
{
	char string[100];
	struct SIMPLE a;
};

//�ṹ���Ա�а�����ָ���Լ����͵�ָ��
struct NODE
{
	char string[100];
	struct NODE *next_node;	
};


//��������ṹ���໥��������ô��Ҫ������һ���ṹ����в���������
struct B;
//�ṹ��A�а���ָ��ṹ��B��ָ��
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
 
 



