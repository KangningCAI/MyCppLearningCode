#include <stdio.h>
#include <string.h>
/*
��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡�
�����Զ���һ�����ж��Ա�Ĺ����壬
�����κ�ʱ��ֻ����һ����Ա����ֵ��
�������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��
*/
union Data{
	int i;
	float j;
	char str[20]; 
};
/*
���ڣ�Data ���͵ı������Դ洢һ��������һ��������������һ���ַ�����
����ζ��һ����������ͬ���ڴ�λ�ã����Դ洢����������͵����ݡ�
�����Ը�����Ҫ��һ����������ʹ���κ����õĻ����û��Զ�����������͡�

������ռ�õ��ڴ�Ӧ�㹻�洢�����������ĳ�Ա��
*/

int main()
{
	union Data data;
	printf("Memory occupied by Union Data data: %d\n",sizeof(data));
	
	data.i=0;
	printf("data.i=%d\n",data.i);
	data.j=3.1415;
	printf("data.j=%f\n",data.j);
	//data.str = "C programing";
	strcpy(data.str,"C programing");
	printf("data.str=%s\n",data.str);
	
	printf("data.i=%d\n",data.i);
	printf("data.j=%f\n",data.j);
	printf("data.str=%s\n",data.str);
		
	return 0;	
}




