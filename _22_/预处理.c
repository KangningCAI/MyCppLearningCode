#include <stdio.h>
//#include "myheader.h"
//��Щָ����� CPP ��ϵͳ���л�ȡ stdio.h��������ı�����ǰ��Դ�ļ��С�
//��һ�и��� CPP �ӱ���Ŀ¼�л�ȡ myheader.h����������ݵ���ǰ��Դ�ļ��С�

#undef  FILE_SIZE
#define FILE_SIZE 42
//���ָ����� CPP ȡ���Ѷ���� FILE_SIZE����������Ϊ 42��
#ifdef DEBUG
   /* Your debugging statements here */
#endif

#ifndef MESSAGE
   #define MESSAGE "You wish!"
#endif
//���ָ����� CPP ֻ�е� MESSAGE δ����ʱ���Ŷ��� MESSAGE��

#define  message_for(a, b)  \
    printf(#a " and " #b ": We love you!\n")
    
#define square(x) ((x) * (x))
main()
{
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
   printf("%s\n",MESSAGE);
   
   message_for(xiaoming,xiaoli);
   printf("square of 5 = %d",square(5));
   
   


}
/*
__DATE__	��ǰ���ڣ�һ���� "MMM DD YYYY" ��ʽ��ʾ���ַ�������
__TIME__	��ǰʱ�䣬һ���� "HH:MM:SS" ��ʽ��ʾ���ַ�������
__FILE__	��������ǰ�ļ�����һ���ַ���������
__LINE__	��������ǰ�кţ�һ��ʮ���Ƴ�����
__STDC__	���������� ANSI ��׼����ʱ������Ϊ 1��
*/


/*
C Ԥ���������Ǳ���������ɲ��֣��������Ǳ��������һ�������Ĳ��衣
����֮��C Ԥ������ֻ������һ���ı��滻���߶��ѣ����ǻ�ָʾ��������ʵ�ʱ���֮ǰ��������Ԥ����
���ǽ��� C Ԥ��������C Preprocessor����дΪ CPP��

���е�Ԥ������������Ծ��ţ�#����ͷ��
�������ǵ�һ���ǿ��ַ���Ϊ����ǿ�ɶ��ԣ�Ԥ������ָ��Ӧ�ӵ�һ�п�ʼ��
�����г���������Ҫ��Ԥ������ָ�

ָ��	����
#define	�����
#include	����һ��Դ�����ļ�
#undef	ȡ���Ѷ���ĺ�
#ifdef	������Ѿ����壬�򷵻���
#ifndef	�����û�ж��壬�򷵻���
#if	�����������Ϊ�棬������������
#else	#if ���������
#elif	���ǰ��� #if ����������Ϊ�棬��ǰ����Ϊ�棬������������
#endif	����һ�� #if����#else ���������
#error	��������׼����ʱ�����������Ϣ
#pragma	ʹ�ñ�׼�����������������������������������
*/






