///�|�~ ���B 4�~�@��
///�p�G�G�a�y¶�Ӷ�����@��365.25��
///365 365 365 365+1 2��29��
///���O 365.24219 �ҥH�Ӧh�n�b���^��
///�C400�~�n���} �C400�~�n�A�ɦ^

///�f�Z�G4 100 400(�}��) �˹L�ӷQ
#include <stdio.h>
int main()
{
    printf("�п�J�褸�~���G");

    int n;
    scanf("%d",&n);

    if( n%400==0 ) printf("�|�~");///�̵}��
    else if( n%100==0 )printf("���q�~/���~");
    else if( n%4==0 ) printf("�|�~");
    else printf("���q�~/���~");
}