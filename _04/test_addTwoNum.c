#include <stdio.h>
#include "MyHeader.h"
// ���������ֲ�����
int x=1;
int y=2;
int addTwoNum();

int main(void)
{
	int result;
	result = addTwoNum();
	printf("result: %d \n",result);
	return 0;
	
 } 
