///�̤j���]�� ���F����
///ex. 51/68 �i�H�����ܡH
///������۰��k �禡�I�s�禡
#include <stdio.h>
///�̤j���]�ƪ��^�� greatest common divider/divisor
int gcd(int a,int b)
{    ///�Ѥj   �ѤG
    printf("a:%d b:%d\n",a,b);///�o�u�O�L�X��,�Ҹդ��μg
    if(a==0) return b;
    if(b==0) return a;
        ///�ѤG �ѤT
    return gcd( b,a%b );
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

    int ans =gcd(a,b);
    printf("%d\n",ans);
}