///����:Ū�J���(�ܦh�r��)
#include <stdio.h>
#include <string.h> ///���ܦh�r�ꪺ�u��,��strlen()�r�����
int main()
{
    char c;
    char line[30]; ///�}�C,�r�����}�C,�s�r��
    ///�}�C�n�h�j?�n���D��

    printf("�п�J�@�Ӧr��,���n�Ӫ�: "); ///���n�W�L29
    scanf("%s",line); ///Ū�J��Ӧr��,�S��&
    ///�|�H�Ů��_�r
    printf("�A��J: %s\n",line);

    int N = strlen(line);
    for(int i=0; i<N; i++){
        if( line[i] == '2'){
            printf("���2\n");
        }
    }
}

