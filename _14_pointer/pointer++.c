#include <stdio.h>

const int MAX = 3;

int main()
{
	int var[] = {10,100,1000};
	int i, *ptr_0, *ptr_1;
	ptr_0 = &var;
	ptr_1 = var;
	
	printf("var=%d\n",ptr_0);
	printf("&var=%d\n",ptr_1);
	/* result:
	var=6487600
	&var=6487600		
	*/
	
	for (i=0; i<MAX; i++)
	{
		printf("�洢��ַ�� var[%d]=%d\n",i,ptr_0);
		printf("�洢ֵ�� var[%d]=%d\n",i,*ptr_0);
		
		ptr_0++;
	}
	/*
	�洢��ַ�� var[0]=6487584
	�洢ֵ�� var[0]=10
	�洢��ַ�� var[1]=6487588
	�洢ֵ�� var[1]=100
	�洢��ַ�� var[2]=6487592
	�洢ֵ�� var[2]=1000
	*/
	
	printf("============ pointer-- =========\n"); 
	int * ptr = &var[MAX-1];
	for(i=MAX-1;i>=0;i--)
	{
		printf("�洢��ַ�� var[%d]=%d\n ",i,ptr);
		printf("�洢ֵ�� var[%d]=%d\n",i,*ptr);
		ptr--;
	}
	
	printf("============ compare pointer =========\n"); 
	ptr_0 = &var;
	i=0;
	while(ptr_0 <= &var[MAX-1])
	{
		printf("�洢��ַ�� var[%d]=%d\n",i,ptr_0);
		printf("�洢ֵ�� var[%d]=%d\n",i,*ptr_0);
		i++;
		ptr_0++;
	}

	

}

