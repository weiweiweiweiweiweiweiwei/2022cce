///��ƧP�O
///����Q ���� ���Ʀr
///�u��Q 1 �٦� n �����㰣
///�ɤO�k �������h��
#include <stdio.h>
int main()
{///�f�Z:�˹L�ӷQ(�}����,����n�Q)
    int n;
    scanf("%d",&n);///�Q�ո� n �O���O���
    int bad=0;///�@�}�l �٨S��bad�a��
    for(int i=2; i<n;i++){///�u��Q 1 �٦� n �����㰣
        if( n%i==0 ) bad=1;///�� �������I�a�a��
    }
    if(bad==0) printf("%d�O���",n);
    else printf("%d ���n�A���O���",n);
}
