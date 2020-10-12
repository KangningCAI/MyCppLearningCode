#include <stdio.h>
int printf_switchcase(void); 
int main()
{
	//局部变量定义
	int a=30;
	
	//使用if检查布尔条件
	if(a<20)
	{
		printf("a小于20\n");
	 } 
	else if(a>100)
	 {
	 	printf("a大于100\n");
	 }
	 else
	 {
	 	printf("a大于等于20，小于等于100\n");
	 }
	 
	printf("a=%d\n",a);
	//int tmp;
	//int tmp = print_switchcase();//展示switch语句的用法 
	//(tmp==111)?printf("return 111\n"):printf("return not 111\n");
	
	(print_switchcase()==111)?printf("return 111\n"):printf("return not 111\n");
 } 
 
int print_switchcase(void)
{
	/*不展示嵌套switch的用法*/ 
	//局部变量定义
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

