#include <stdio.h>

int max(int a, int b)
{
	return a>b?a:b;
}

int main(void)
{
	int (*p)(int, int) = &max;
	int a,b,c;
	int result;
	
	printf("请输出三个数字：\n");
	scanf("%d %d %d",&a,&b,&c);
	
	
	result = p(p(a,b),c);
	printf("最大的数字：%d",result);
	
	return 0;
	
}
