///�ܼƪ��d��variable scope
///�ж��̪��A�u��b�ж��̨ϥ�
///�~�����ܼơA�i�H�Q�j�a�ݨ�
#include <stdio.h>
int z=10;
void func()
{
    int y;
    printf("��i��func()��,z�O%d\n",z);
    z=2;
    printf("�bfunc()��,��z�令%d\n",z);
}
int main()
{
    int x;
    func();

    printf("�bmain()��,z���ȬO%d\n",z);
    z=1;
    printf("�bmain()�̧� z����,�{�b�O%d\n",z);
}
