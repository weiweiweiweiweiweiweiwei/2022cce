///�ܦh�ӫ���
#include <stdio.h>
int main()
{
    int a = 10, b = 20;
    int *p1 = &a;
    int *p2 = &b;
    printf("a: %d b:%d\n",a, b);

    *p1 = 30; ///��P1���쪺�a��,�ܦ�30
    printf("a: %d b:%d\n",a, b);

    p2 = &a; ///����@�U p2�����t�@�Ӧa��
    *p2 = 40; ///��p2�u�쪺�a��, �ܦ�40
    printf("a: %d b:%d\n",a, b);
}
