#include <stdio.h>
/*
���е� C ���Գ�����Ҫ���� main() ������ ����� main() ������ʼִ�С�
printf() ���ڸ�ʽ���������Ļ��printf() ������ "stdio.h" ͷ�ļ���������
stdio.h ��һ��ͷ�ļ� (��׼�������ͷ�ļ�) and #include ��һ��Ԥ���������������ͷ�ļ��� ������������ printf() ����ʱ�����û���ҵ� stdio.h ͷ�ļ����ᷢ���������
return 0; ������ڱ�ʾ�˳�����
*/
int main()
{
	int c;
	printf("��һ�ַ� enter a value: ");
	c=getchar();//��������һ���ı������»س���ʱ������������ֻ���ȡһ����һ���ַ���
	
	printf("\nYou entered: ");
	putchar(c);
	printf("\n");
	

	
	char str[100];

	printf("���ַ���enter a value:");
	gets(str);
	printf("\nyou entered: ");
	puts(str);
	
	
	char str2[100];
	int j;
	printf("�ַ� ���֣�enter a value:");
	scanf("%s %d",str2,j);
	printf("you entered: %s %d",str2,&j);
	printf("\n");
	
	return 0;
	
}

