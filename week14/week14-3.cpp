///�ܼƪ��d��variable scope
///�ж��̪��A�u��b�ж��̨ϥ�
///�~�����ܼơA�i�H�Q�j�a�ݨ�
///�T���B�w�� �g�������Z
#include <stdio.h>
int a=20; ///global ���y�B���@�ɳ��ݪ��쪺�Ѥ�
void funcA()
{///�s�_����
    int a=10;///local�Ѥ�
    printf("funcA�̭��La:%d\n",a);
}
void funcB()
{///��饫��
    int a=30;///local�Ѥ�
    printf("funcB�̭��La:%d\n",a);
}
int main()
{
    printf("�bmain()�ݨ쪺a�O:%d\n",a);
    funcA();
    funcB();
    printf("�bmain()�ݨ쪺a�O:%d\n",a);
}

