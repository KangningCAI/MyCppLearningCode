#include <stdio.h>

// ��������
int max(int,int);
int min(int num1,int num2);

int main()
{
	//����ֲ�����
	int a=100;
	int b=200;
	int ret;
	
	//���ú�����ȡ���ֵ
	ret = max(a,b);
	printf("Max value is: %d\n",ret);
	
	ret = min(a,b);
	printf("Min value is: %d\n",ret);
	return 0; 
}

int max(int num1,int num2)
{
	if (num1>num2) return num1;
	else return num2; 
}

int min(int num1,int num2)
{
	int result;//�ֲ���������
	
	if (num1>num2)
		result=num2;
	else
		result=num1;
	return result; 
}

