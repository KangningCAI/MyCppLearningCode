#include <stdio.h>
/*
#define MON  1
#define TUE  2
#define WED  3
#define THU  4
#define FRI  5
#define SAT  6
#define SUN  7
*/
//1. ������������ 
enum DAY{
	MON=1, TUE, WED, THU, FRI, SAT, SUN 
};
/*
ע�⣺
	��һ��ö�ٳ�Ա��Ĭ��ֵΪ���͵� 0������ö�ٳ�Ա��ֵ��ǰһ����Ա�ϼ� 1��
���������ʵ���аѵ�һ��ö�ٳ�Ա��ֵ����Ϊ 1���ڶ�����Ϊ 2���Դ����ơ�
*/

enum season{ 
	spring,summer=3,autumn, winter
};
/*
û��ָ��ֵ��ö��Ԫ�أ���ֵΪǰһԪ�ؼ� 1��Ҳ��˵ spring ��ֵΪ 0��
summer ��ֵΪ 3��autumn ��ֵΪ 4��winter ��ֵΪ 5
*/

//2. �������
//2.1 �ȶ���ö�����ͣ��ٶ���ö�ٱ���
enum Day1{
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
}; 

enum Day1 day;


//2.2  ����ö�����͵�ͬʱ����ö�ٱ���
enum Day2{
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
} day2;


//2.3 ʡ��ö�����ƣ�ֱ�Ӷ���ö�ٱ���
enum {
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
} day3;
 
int main(void)
{

	return 0;
}




