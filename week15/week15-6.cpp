///�U�P�Ҹ��D��:��r��ϹL�ӦL
///ABC => CBA
#include <stdio.h>
int main()
{
    char line[3000];
    printf("�п�J�r��:");///�Ҹդ��μg�o��

    scanf("%s", line);

    ///�p���D�r�����,���j��N�n�g�F
    ///�^�ЦʼƤϦL for(int i=99; i>=0; i--) printf("%d",a[i]);
    int N=0;
    for(int i=0;   ;i++){
        if( line[i]==0 ) break;
        N++;
    }///�N�|�էڭ̪�����

    for(int i=N-1; i>=0; i--){
        printf("%c", line[i]);
    }
}
