Ϊ�˶���ṹ��������ʹ�� struct ��䡣struct ��䶨����һ�����������Ա���µ��������ͣ�struct ���ĸ�ʽ���£�

struct tag { 
    member-list
    member-list 
    member-list  
    ...
} variable-list ;

struct Books
{
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
} book;


��һ������£�tag��member-list��variable-list �� 3 ��������Ҫ���� 2 ��������Ϊʵ����

//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//ͬʱ�������˽ṹ�����s1
//����ṹ�岢û�б������ǩ
struct 
{
    int a;
    char b;
    double c;
} s1;
 
//������������ӵ��3����Ա�Ľṹ�壬�ֱ�Ϊ���͵�a���ַ��͵�b��˫���ȵ�c
//�ṹ��ı�ǩ������ΪSIMPLE,û����������
struct SIMPLE
{
    int a;
    char b;
    double c;
};
//��SIMPLE��ǩ�Ľṹ�壬���������˱���t1��t2��t3
struct SIMPLE t1, t2[20], *t3;
 
//Ҳ������typedef����������
typedef struct
{
    int a;
    char b;
    double c; 
} Simple2;
//���ڿ�����Simple2��Ϊ���������µĽṹ�����
Simple2 u1, u2[20], *u3;


������������У���һ���͵ڶ�����������������������ȫ��ͬ�����ͣ�
��ʹ���ǵĳ�Ա�б���һ���ģ������ t3=&s1�����ǷǷ��ġ�

�ṹ��ĳ�Ա���԰��������ṹ�壬Ҳ���԰���ָ���Լ��ṹ�����͵�ָ�룬
��ͨ������ָ���Ӧ����Ϊ��ʵ��һЩ���߼������ݽṹ����������ȡ�
