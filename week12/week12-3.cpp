#include <stdio.h>
int main()
{
    int a[3]={7,8,9};///�}�C���ŧi,�õ���l��
    int b[2][3]={ {4,5,6} , {7,8,9} };
    ///�G���}�C�ŧi,�õ���l��
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            printf("%d ",b[i][j]);
        }///�}�C���ϥ�,�n�t�Xfor�j��
        printf("\n");
    }
}
