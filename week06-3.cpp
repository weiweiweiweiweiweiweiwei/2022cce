///���ƷQ�n���� 51/68
/// �ե������Ʀr�A�ݯण��㰣
#include <stdio.h>
int main()
{
    printf("�п�J2�Ӿ�ơA�n�����G");
    int a,b;
    scanf("%d %d", &a,&b); ///51 68

    int ans; ///����������(�̤j���]��)
    for(int i=1; i<=a; i++){ ///1.....51��������
        if( a%i==0 && b%i==0 ){ ///���㰣
            ans = i; ///�O�U�o�ӼƦr
        }
    }
    printf("ans:%d �i����",ans);
    ///�⵪�L�X��
}
