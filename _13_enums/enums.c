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
//1. 声明变量类型 
enum DAY{
	MON=1, TUE, WED, THU, FRI, SAT, SUN 
};
/*
注意：
	第一个枚举成员的默认值为整型的 0，后续枚举成员的值在前一个成员上加 1。
我们在这个实例中把第一个枚举成员的值定义为 1，第二个就为 2，以此类推。
*/

enum season{ 
	spring,summer=3,autumn, winter
};
/*
没有指定值的枚举元素，其值为前一元素加 1。也就说 spring 的值为 0，
summer 的值为 3，autumn 的值为 4，winter 的值为 5
*/

//2. 定义变量
//2.1 先定义枚举类型，再定义枚举变量
enum Day1{
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
}; 

enum Day1 day;


//2.2  定义枚举类型的同时定义枚举变量
enum Day2{
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
} day2;


//2.3 省略枚举名称，直接定义枚举变量
enum {
	Mon=1,Tue,Wed,Thu,Fri,Sat,Sun
} day3;
 
int main(void)
{

	return 0;
}





