#include <stdio.h>

#include <string.h>
 
typedef struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} Book;

#typedef �ؼ��֣�������ʹ������Ϊ����ȡһ���µ�����
 
int main( )
{
   Book book;
 
   strcpy( book.title, "C �̳�");
   strcpy( book.author, "Runoob"); 
   strcpy( book.subject, "�������");
   book.book_id = 12345;
 
   printf( "����� : %s\n", book.title);
   printf( "������ : %s\n", book.author);
   printf( "����Ŀ : %s\n", book.subject);
   printf( "�� ID : %d\n", book.book_id);
 
   return 0;
}
/*
#define �� C ָ�����Ϊ�����������Ͷ���������� typedef ���ƣ��������������¼��㲻ͬ��

typedef ������Ϊ���Ͷ���������ƣ�#define ��������Ϊ���Ͷ��������Ҳ��Ϊ��ֵ������������������Զ��� 1 Ϊ ONE��
typedef ���ɱ�����ִ�н��͵ģ�#define �������Ԥ���������д���ġ�

*/
