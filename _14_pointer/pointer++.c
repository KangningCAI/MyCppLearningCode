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
		printf("¥Ê¥¢µÿ÷∑£∫ var[%d]=%d\n",i,ptr_0);
		printf("¥Ê¥¢÷µ£∫ var[%d]=%d\n",i,*ptr_0);
		
		ptr_0++;
	}
	/*
	¥Ê¥¢µÿ÷∑£∫ var[0]=6487584
	¥Ê¥¢÷µ£∫ var[0]=10
	¥Ê¥¢µÿ÷∑£∫ var[1]=6487588
	¥Ê¥¢÷µ£∫ var[1]=100
	¥Ê¥¢µÿ÷∑£∫ var[2]=6487592
	¥Ê¥¢÷µ£∫ var[2]=1000
	*/
	
	printf("============ pointer-- =========\n"); 
	int * ptr = &var[MAX-1];
	for(i=MAX-1;i>=0;i--)
	{
		printf("¥Ê¥¢µÿ÷∑£∫ var[%d]=%d\n ",i,ptr);
		printf("¥Ê¥¢÷µ£∫ var[%d]=%d\n",i,*ptr);
		ptr--;
	}
	
	printf("============ compare pointer =========\n"); 
	ptr_0 = &var;
	i=0;
	while(ptr_0 <= &var[MAX-1])
	{
		printf("¥Ê¥¢µÿ÷∑£∫ var[%d]=%d\n",i,ptr_0);
		printf("¥Ê¥¢÷µ£∫ var[%d]=%d\n",i,*ptr_0);
		i++;
		ptr_0++;
	}

	

}

