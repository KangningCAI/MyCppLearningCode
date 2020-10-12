#include <stdio.h>

//函数声明
double getAverage(int array[], int size);

int main()
{
	int balance[5] = {1000,2,3,17,50};
	double avg;
	
	printf("%d\n",balance);
	printf("%d\n",*balance);
	
	//传递一个指向数组的指针作为参数
	avg = getAverage(balance,5);
	printf("avg=%f",avg); 
	
	
	
	return 0;
} 

double getAverage(int array[], int size)
{
	int i;
	double avg;
	double sum=0;
	
	for(i=0;i<size;i++)
	{
		sum+=array[i];
	 } 
	
	avg = sum/size;
	return avg;
}

