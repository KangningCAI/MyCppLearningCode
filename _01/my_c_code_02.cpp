#include <stdio.h>

//�����ⶨ����� x,y
int x;
int y;
int addTwoNum()
{
	//�����ڲ��������� x,yΪ�ⲿ���� 
	extern int x;
	extern int y;
	//���ⲿ������ȫ�ֱ�����x,y ��ֵ
	x=1;
	y=2;
	return x+y;
	
} 

int main()
{
	int result;
	printf("x=%d, y=%d\n",x,y);
	result = addTwoNum();
	printf("add finished\n");
	printf("x=%d, y=%d\n",x,y);
	printf("result=%d \n",result);
	return 0;
}

