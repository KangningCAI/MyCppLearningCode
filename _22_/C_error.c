#include <stdio.h>
#include <errno.h>
#include <string.h>

extern int errno;

int main()
{
	FILE *pf;
	int errnum;
	pf = fopen("unexist.txt","rb");
	
	if (pf==NULL)
	{
		errnum=errno;
		fprintf(stderr,"错误号：%d\n",errno);
		perror("通过perror输出错误\n");
		fprintf(stderr,"打开文件错误：%s\n",stderror(errnum));
		 
	}
 } 
