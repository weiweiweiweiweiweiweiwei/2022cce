///�P�_�j��A�n�Ψ쪺�{���ޥ�:�ϥ�for�j��Bif�P�_�Bwhile�j��
bool isPalindrome(int x){
    int x2 = x; ///�ƥ�x��x2
    ///�ܪ��ܪ������
    long long int r = 0; ///�ϹL�Ӫ��Ʀr,���@�U�n��br���Y
    while( x>0 ){
        ///�ܪ��ܪ������
        r = r*10 + x%10; ///���
        x = x / 10;
    }
    ///�ϥέ�֪k
    ///�̫�x�駹,�ܦ�0...���J x�����
    if( x2 == r) return true;
    else return false;
}
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321) )printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(2345677) ) printf("2345677 Yes\n");
    else printf("2345677 No\n");
}
