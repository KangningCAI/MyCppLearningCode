#include <stdio.h>
int printf_switchcase(void); 
int main()
{
	//�ֲ���������
	int a=30;
	
	//ʹ��if��鲼������
	if(a<20)
	{
		printf("aС��20\n");
	 } 
	else if(a>100)
	 {
	 	printf("a����100\n");
	 }
	 else
	 {
	 	printf("a���ڵ���20��С�ڵ���100\n");
	 }
	 
	printf("a=%d\n",a);
	//int tmp;
	//int tmp = print_switchcase();//չʾswitch�����÷� 
	//(tmp==111)?printf("return 111\n"):printf("return not 111\n");
	
	(print_switchcase()==111)?printf("return 111\n"):printf("return not 111\n");
 } 
 
int print_switchcase(void)
{
	/*��չʾǶ��switch���÷�*/ 
	//�ֲ���������
	char grade = 'B';
	
	switch(grade)
	{
		case 'A':
			printf("A\n");
			break;
		case 'B':
			printf("B\n");
			break;
		case 'C':
			printf("C\n");
			break;
		default:
			printf("No result!\n");
			break;
			
	 } 
	 
	 printf("grade=%c\n",grade);
	 printf("grade=%d\n",grade);
	 return 111;
}

