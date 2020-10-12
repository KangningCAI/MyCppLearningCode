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
	//1. 定义枚举体变量 
	enum DAY day;
	day=Sat;
	printf("day: %d\n",day);
	
	//2. 遍历枚举
	for(day=Mon;day<=Sun;day++)
	{
		printf("data struct enum: day=%d\n",day);
	}
	//attention: 枚举类型不连续，这种枚举无法遍历。eg: seanson,实际上只有4个变量，遍历循环了6个
	
	enum season sea_0;
	for(sea_0=spring;sea_0<=winter;sea_0++)
	{
		printf("data struct enum: sea_0=%d\n", sea_0);
	} 

	//3. 枚举在 switch 中的使用 
	enum Color favorite_color;
	// ask user to choose color
	printf("请输入你喜欢的颜色的数字：（1. red; 2. green; 3. blue;）");
	scanf("%d",&favorite_color);
	
	//输出结果
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
	
	//4. 整数转换为枚举：
	int a=1,b=2;
	enum Color col_1,col_2,col_3;
	col_1 = (enum Color) a;//类型转换
	col_2 = b;//这个语法是错误的,但是实际运行是没有问题得呀 
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









