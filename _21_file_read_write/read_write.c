#include <stdio.h>
int main()
{
	FILE *fp=NULL;
	fp=fopen("./tmp/test.txt","w+");
	/*
	ע�⣺��ȷ�����п��õ� tmp Ŀ¼����������ڸ�Ŀ¼��
		����Ҫ�����ļ�������ȴ�����Ŀ¼��
	
	/tmp һ���� Linux ϵͳ�ϵ���ʱĿ¼��������� Windows ϵͳ�����У�
	����Ҫ�޸�Ϊ���ػ������Ѵ��ڵ�Ŀ¼������: C:\tmp��D:\tmp�ȡ�
	*/
	fprintf(fp,"This is testing for fprintf ...\n");
	fputs("This is testing for fputs ...\n",fp);
	fclose(fp);
	/*
	�����ǰ��ַ�д�뵽���е���򵥵ĺ�����

	int fputc( int c, FILE *fp );
		���� fputc() �Ѳ��� c ���ַ�ֵд�뵽 fp ��ָ���������С�
		���д��ɹ������᷵��д����ַ����������������᷵�� EOF��
	int fputs( const char *s, FILE *fp );
		���� fputs() ���ַ��� s д�뵽 fp ��ָ���������С����д��ɹ������᷵��һ���Ǹ�ֵ���������������᷵�� EOF��
	int fprintf(FILE *fp,const char *format, ...) 
		������д��һ���ַ���д�뵽�ļ��С�
	
	
	
	
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





