#include <stdio.h>

enum DAY{
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
};
enum season{ 
	spring,summer=3,autumn, winter
};

enum Color{red=1, green, blue};
 


int main()
{
	//1. ����ö������� 
	enum DAY day;
	day=Sat;
	printf("day: %d\n",day);
	
	//2. ����ö��
	for(day=Mon;day<=Sun;day++)
	{
		printf("data struct enum: day=%d\n",day);
	}
	//attention: ö�����Ͳ�����������ö���޷�������eg: seanson,ʵ����ֻ��4������������ѭ����6��
	
	enum season sea_0;
	for(sea_0=spring;sea_0<=winter;sea_0++)
	{
		printf("data struct enum: sea_0=%d\n", sea_0);
	} 

	//3. ö���� switch �е�ʹ�� 
	enum Color favorite_color;
	// ask user to choose color
	printf("��������ϲ������ɫ�����֣���1. red; 2. green; 3. blue;��");
	scanf("%d",&favorite_color);
	
	//������
	switch(favorite_color)
	{
		case red:
			printf("color:red");
			break;
		case green:
			printf("color:green");
			break;
		case blue:
			printf("color:blue");
			break;
		default:
			printf("color: NULL");

	};
	
	//4. ����ת��Ϊö�٣�
	int a=1,b=2;
	enum Color col_1,col_2,col_3;
	col_1 = (enum Color) a;//����ת��
	col_2 = b;//����﷨�Ǵ����,����ʵ��������û�������ѽ 
	col_3 = blue;
	printf("\n");
	printf("col_1=%d\n",col_1);
	printf("col_2=%d\n",col_2);
	printf("col_3=%d\n",col_3);
	
	
	return 0;
}

/*
day: 6
data struct enum: day=1
data struct enum: day=2
data struct enum: day=3
data struct enum: day=4
data struct enum: day=5
data struct enum: day=6
data struct enum: day=7
data struct enum: sea_0=0
data struct enum: sea_0=1
data struct enum: sea_0=2
data struct enum: sea_0=3
data struct enum: sea_0=4
data struct enum: sea_0=5
*/









