#include <stdio.h>
/*
所有的 C 语言程序都需要包含 main() 函数。 代码从 main() 函数开始执行。
printf() 用于格式化输出到屏幕。printf() 函数在 "stdio.h" 头文件中声明。
stdio.h 是一个头文件 (标准输入输出头文件) and #include 是一个预处理命令，用来引入头文件。 当编译器遇到 printf() 函数时，如果没有找到 stdio.h 头文件，会发生编译错误。
return 0; 语句用于表示退出程序。
*/
int main()
{
	int c;
	printf("单一字符 enter a value: ");
	c=getchar();//当您输入一个文本并按下回车键时，程序会继续并只会读取一个单一的字符，
	
	printf("\nYou entered: ");
	putchar(c);
	printf("\n");
	

	
	char str[100];

	printf("多字符：enter a value:");
	gets(str);
	printf("\nyou entered: ");
	puts(str);
	
	
	char str2[100];
	int j;
	printf("字符 数字：enter a value:");
	scanf("%s %d",str2,j);
	printf("you entered: %s %d",str2,&j);
	printf("\n");
	
	return 0;
	
}

