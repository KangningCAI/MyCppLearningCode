//
// Created by dell on 2019/8/31.
//

//#include "loop.h"
#include <stdio.h>

int func_while(void);
int func_for(void);
int func_DoWhile(void); 

int main()
{
    //func_while();
    printf("run func_for()\n");
    func_for();
    printf("run func_DoWhile()\n");
    func_DoWhile();
}



int func_while(void)
{
    int a=10;//�����ֲ����� 

    while(a<20)
    {
        printf("a=%d\n",a);
        a++;
    }
    return 0;
}

int func_for(void)
{
	int a=10;//�еı�������֧����forѭ���ڲ����������Ӣ�����ｫ ����a �Ķ������forѭ��ǰ�� 
	for(a=0;a<20;a++)
	{
		printf("a=%d\n",a);
	}
	return 0;
}

int func_DoWhile(void)
{
	int a=10;//����ֲ����� 
	
	do
	{
		printf("a=%d\n",a);
		a++;
	}while(a<20);
	
	return 0;	 
}

