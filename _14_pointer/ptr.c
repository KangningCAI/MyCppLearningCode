#include <stdio.h>

int main()
{
	//part1
	int var1;
	char var2[10];
	
	printf("var1 �����ĵ�ַ��%p\n",&var1);
	printf("var2 �����ĵ�ַ��%p\n",&var2);
	
	//part2
	int *ip; //����ָ��
	double *dp;//double��ָ�� 
	float *fp;//������ָ��
	char *cp;//�ַ���ָ��
	
	int var = 20;
	
	
	ip = &var;
	printf("Address of var: %p\n",&var); 
	printf("Address in ip: %p\n",ip);
	printf("value in pointer ip: %d\n",*ip);
	
	/*
	�ڱ���������ʱ�����û��ȷ�еĵ�ַ���Ը�ֵ��
	Ϊָ�������һ�� NULL ֵ��һ�����õı��ϰ�ߡ�
	��Ϊ NULL ֵ��ָ�뱻��Ϊ��ָ�롣
	*/
	int *ptr = NULL;
	printf("ptr�ĵ�ַ%p\n",ptr);
	
	if (ptr){
	}

	return 0;
}
