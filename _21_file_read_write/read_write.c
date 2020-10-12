#include <stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("./tmp/test.txt","w+");
	/*
	注意：请确保您有可用的 tmp 目录，如果不存在该目录，
		则需要在您的计算机上先创建该目录。
	
	/tmp 一般是 Linux 系统上的临时目录，如果你在 Windows 系统上运行，
	则需要修改为本地环境中已存在的目录，例如: C:\tmp、D:\tmp等。
	*/
	fprintf(fp,"This is testing for fprintf ...\n");
	fputs("This is testing for fputs ...\n",fp);
	fclose(fp);
	/*
	下面是把字符写入到流中的最简单的函数：

	int fputc( int c, FILE *fp );
		函数 fputc() 把参数 c 的字符值写入到 fp 所指向的输出流中。
		如果写入成功，它会返回写入的字符，如果发生错误，则会返回 EOF。
	int fputs( const char *s, FILE *fp );
		函数 fputs() 把字符串 s 写入到 fp 所指向的输出流中。如果写入成功，它会返回一个非负值，如果发生错误，则会返回 EOF。
	int fprintf(FILE *fp,const char *format, ...) 
		函数来写把一个字符串写入到文件中。
	
	
	
	
	*/
	
	char buff[255];
	
	fp = fopen("./tmp/test.txt","r");
	fscanf(fp,"%s",buff);
	printf("1:%s\n",buff);
	
	fgets(buff,255,(FILE*)fp);
	printf("2:%s\n",buff);

	fgets(buff,255,(FILE*)fp);
	printf("3:%s\n",buff);
	fclose(fp);

	
	
	return 0;
} 





