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
һ��λ��洢��ͬһ���ֽ��У���һ���ֽ���ʣ�ռ䲻�������һλ��ʱ��
������һ��Ԫ���Ÿ�λ��Ҳ��������ʹĳλ�����һ��Ԫ��ʼ
*/
struct BitField2{
	unsigned a:4;//һ��λ�� 
	unsigned :4; //����
	unsigned b:4; //����һ����Ԫ��ʼ��� 
	unsigned c:4; 	
}; 
struct K{
	int a:1;
	int :2; //����λ���ܹ�ʹ��
	int b:3;
	int c:2; 
}; 

/*
����λ������������ֽڣ����λ��ĳ��Ȳ��ܴ���һ���ֽڵĳ��ȣ�
Ҳ����˵���ܳ���8λ����λ�������󳤶ȴ��ڼ�����������ֳ���
һЩ���������ܻ���������ڴ��ص�������һЩ���������ܻ�Ѵ���һ����
�Ĳ��ִ洢����һ�����С�
*/ 
int main(void)
{
	struct BS{
		unsigned a:1;
		unsigned b:3;
		unsigned c:4;
	} bit, *pbit;
	
	bit.a=1;
	bit.b=7;/* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
	bit.c=15;
	
	printf("%d,%d,%d\n",bit.a,bit.b,bit.c);//�����͵ĸ�ʽ��������������
	
	pbit=&bit;
	pbit->a=0;
	pbit->b &= 3;
	pbit->c |= 1;
	
	printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);
	 
	
	
}

