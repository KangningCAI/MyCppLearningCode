#include <stdio.h>

void func1(void);

static int count=10; //ȫ�ֱ���-static��Ĭ�ϵ�

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
	auto int month; //autoֻ�����ں����ڲ���autoֻ���ξֲ�����
	register int miles; //����洢�ڼĴ����еı�������������������ߴ���ڼĴ����Ĵ�С��
	
	/*
	thingy ��func1�ľֲ�������ֻ��ʼ��1�Σ�
	ÿ�ε���func1�� thingy����ֵ�������� 
	*/ 
	static int thingy=5;
	thingy++;
	printf("thingy: %d, count: %d\n",thingy,count);
	 
}
 
