#include <stdio.h>

int max_byVal(int,int);
int * max_byRef(int *,int *);

int main()
{
	int a=100;
	int b=200;
	printf("max_byVal()=%d\n",max_byVal(a,b));
	printf("max_byRef()=%d\n",max_byRef(&a,&b));
	printf("* max_byRef()=%d\n", * max_byRef(&a,&b));
	return 0;
}


//��ֵ���� 
int max_byVal(int num1,int num2)
{
	//��������ʵ��ֵ���Ƹ��βΣ��޸ĺ����ڵ��ββ���Ӱ��ʵ�ʲ��� 
	int result;
	if (num1>num2)
		result=num1;
	else
		result=num2;
	
	return result;
}


//���õ��� 
int * max_byRef(int *num1,int * num2)
{
	//�β�Ϊָ��ʵ�ε�ָ�룬���βε�ָ�����ʱ�����൱�ڶ�ʵ�α������
	int * result;
	if (*num1>*num2)
		result = num1; //���num1����ֵ���󣬽�num1���ڴ��еĵ�ַ����result 
	else
		result=num2;//���num2����ֵ���󣬽�num1���ڴ��еĵ�ַ����result
	return result; //result�м�¼�˽ϴ�ֵ���ڴ��еĵ�ַ�����õ�ַ���ظ������� 
		 
	
}
