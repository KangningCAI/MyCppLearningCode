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
		fprintf(stderr,"����ţ�%d\n",errno);
		perror("ͨ��perror�������\n");
		fprintf(stderr,"���ļ�����%s\n",stderror(errnum));
		 
	}
 } 
