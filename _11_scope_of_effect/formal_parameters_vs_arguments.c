#include <stdio.h>
 
 
//����ȫ�ֱ���
int a = 20;

int main()
{
	//���������еľֲ���������
	int a = 10;
	int b = 20;
	int c = 0;
	
	int sum(int,int);
	
	printf ("value a in main(): %d\n",a);
	printf ("value b in main(): %d\n",b);
	
	c = sum(a,b);
	printf ("value of c in main(): %d\n",c);
	
	
	return 0; 
 } 


// define function: sum
int sum(int a, int b)
{
	printf ("value a in sum(): %d\n",a);
	printf ("value b in sum(): %d\n",b);
	return a+b;
}

 
