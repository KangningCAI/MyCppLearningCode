#include <stdio.h>
#include <string.h>

struct bs{
    int a:8;
    int b:2;
    int c:6;
}data;




struct packed_struct {
  unsigned int f1:1;
  unsigned int f2:1;
  unsigned int f3:1;
  unsigned int f4:1;
  unsigned int type:4;
  unsigned int my_int:9;
} pack;


struct bs{
    unsigned a:4;
    unsigned  :4;    /* ���� */
    unsigned b:4;    /* ����һ��Ԫ��ʼ��� */
    unsigned c:4
}


struct k{
    int a:1;
    int  :2;    /* �� 2 λ����ʹ�� */
    int b:3;
    int c:2;
};

int main(){
    struct bs{
        unsigned a:1;
        unsigned b:3;
        unsigned c:4;
    } bit,*pbit;
    bit.a=1;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.b=7;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    bit.c=15;    /* ��λ��ֵ��Ӧע�⸳ֵ���ܳ�����λ�������Χ�� */
    printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* ����������ʽ�������������� */
    pbit=&bit;    /* ��λ����� bit �ĵ�ַ�͸�ָ����� pbit */
    pbit->a=0;    /* ��ָ�뷽ʽ��λ�� a ���¸�ֵ����Ϊ 0 */
    pbit->b&=3;    /* ʹ���˸��ϵ�λ����� "&="���൱�ڣ�pbit->b=pbit->b&3��λ�� b ��ԭ��ֵΪ 7���� 3 ����λ������Ľ��Ϊ 3��111&011=011��ʮ����ֵΪ 3�� */
    pbit->c|=1;    /* ʹ���˸���λ�����"|="���൱�ڣ�pbit->c=pbit->c|1������Ϊ 15 */
    printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* ��ָ�뷽ʽ��������������ֵ */
}
