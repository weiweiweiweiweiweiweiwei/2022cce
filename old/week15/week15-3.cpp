#include <stdio.h>
///49 �N�O�Ʀr '1'
///65 �N�O�j�g 'A'
///97 �N�O�p�g 'a'
int main()
{
    /// 'A'���N�O 65 �q���|���A��
    ///65 �N�O�j�g 'A'
    printf("A ���ȬO %d\n", 'A');///�L�X A ���ȬO 65
    printf("B ���ȬO %d\n", 'B');///�L�X B ���ȬO 66
    printf("C ���ȬO %d\n", 'C');///�L�X C ���ȬO 67

    for( int c = 'A'; c<='Z'; c++){
            printf("%c ���ȬO %d\n",c, c);
    }
}
