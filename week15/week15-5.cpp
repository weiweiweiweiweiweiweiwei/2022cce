///�r��i��ܪ�, �i��ܵu, �����D���׬O�h��, ���ΰj��H
///�r��̫᭱, �@�w�O 0 �� �S�s�� NULL ��, �S�s�� '\0'

#include <stdio.h>
int main()
{
    char line[3000]; ///�ܤj���r�ꪺ�Ŷ����A��

    printf("�п�J�ܪ��ܪ����r��,���n���Ů�,���� Enter\n");

    scanf("%s",line );
    printf("�����X�Ӧr���O�H\n");
    printf("%s\n",line);
    int count=0;
    for(int i=0; line[i]!=0; i++){
        count++;
    }
    printf("count:%d\n",count);
}
