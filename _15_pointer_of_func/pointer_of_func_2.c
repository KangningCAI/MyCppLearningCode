#include <stdio.h>
#include <stdlib.h>

//回调函数
void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
{
	size_t i;
	for(i=0;i<arraySize;i++)
	{
		array[i] = getNextValue();
		
	}
 } 

//获取随机值
int getNextRandomValue(void)
{
	return rand();
}



int main(void)
{
	int myarray[10];
	populate_array(myarray, 10,getNextRandomValue);
	
	//print
	int i;
	for(i=0;i<10;i++)
	{
		printf("%d ",myarray[i]);
	}
	printf("\n");
	
	return 0;
 } 
