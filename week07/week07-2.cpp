#include <stdio.h>
int main()
{///�ɮ׫���     �ɮ׶}��("�ɦW", "�Ҧ�");
 ///FILE * fout = fopen( "file.txt", "w" ); ///�gwrite
    FILE * fin  = fopen( "file.txt", "r" ); ///Ūread

    char line[200];
    fscanf(fin, "%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n", line);

    fscanf(fin, "%s",line);
    printf("�{�b����ؿ����ɮ׸�Ū�J %s\n", line);
}

