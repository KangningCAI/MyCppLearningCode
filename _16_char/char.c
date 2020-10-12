#include <stdio.h>
#include <string.h>

int main(void)
{
	char hello_0[]={'h','e','l','l','o','\n'};
	char hello_1[6]={'h','e','l','l','o','\n'};
	char hello_2[]="hello";
	char hello_3[6]="hello";
	
	printf("message hello_0: %s\n",hello_0);
	printf("message hello_1: %s\n",hello_1);
	printf("message hello_2: %s\n",hello_2);
	printf("message hello_3: %s\n",hello_3);
	
	
	printf("==========part1============\n");
	char str1[12] = "Hello";
	char str2[12] = "World";
	char str3[12];
	int len;
	
	// copy str1 to str3;
	strcpy(str3, str1);
	printf("strcpy(str3,str1): %s\n",str3);
	
	// concat str1 str2;
	strcat(str1,str2);
	printf("strcat(str1,str2):%s\n",str1);
	
	//after concat, the total length of str1
	len = strlen(str1);
	printf("strlen(str1): %d",len);
	
 } 
