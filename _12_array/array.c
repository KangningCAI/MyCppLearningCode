#include <stdio.h>

int show_1d_array(void);
int show_2d_array(void);

int main (void)
{
	show_1d_array();
	show_2d_array();
	

	return 0; 
} 


int show_2d_array(void)
{
	//5行两列的数组
	int a[5][2] = { {0,0}, {1,2}, {2,4}, {3,6}, {4,8} };
	int i,j;
	
	//printf
	
	for (i=0;i<5;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("____a[%d][%d]=%d_________\n",i,j,a[i][j]);
		}
	}
	
   return 0;
}


int show_1d_array(void)
{
	double balance[5] = {1000.0, 2.0, 3.4, 7.0, 50.0};
	
	int i,j;
	for(i=0;i<5;i++) 
	{
		printf("balance[%d]=%f\n",i,balance[i]);	
	}
	
	for(j=0;j<5;j++) 
	{	
		balance[j] = balance[j]+100;
		printf("balance[%d]=%f\n",j,balance[j]);	
	}
	return 0;
}
