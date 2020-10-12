#include <stdio.h>

int main()
{
	int i,j;//定义局部变量
	
	for(i=2;i<100;i++)
	{
		for(j=2;j<=(i/j);j++)
		{
			if(!(i%j)) break; 
		}
		
		if(j>(i/j)) printf("%d 是质数\n",i);
		
	 } 
	 
	return 0;
 } 
 
 //break,continue,goto 语句不在这里演示
  
