#include <stdio.h>
#include <string.h>
/*
共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。
您可以定义一个带有多成员的共用体，
但是任何时候只能有一个成员带有值。
共用体提供了一种使用相同的内存位置的有效方式。
*/
union Data{
	int i;
	float j;
	char str[20]; 
};
/*
现在，Data 类型的变量可以存储一个整数、一个浮点数，或者一个字符串。
这意味着一个变量（相同的内存位置）可以存储多个多种类型的数据。
您可以根据需要在一个共用体内使用任何内置的或者用户自定义的数据类型。

共用体占用的内存应足够存储共用体中最大的成员。
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




