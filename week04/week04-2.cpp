///�� 1234321 �n�P�_�O���O�j��: �r���}�C+�j��
#include <stdio.h>
#include <string.h>

int main()
{
    char line[50];
    scanf("%s", line);

    int N = strlen(line);
    int yes = 0;
    for(int i=0; i<N; i++){
        if( line[i] == line[N-1-i] ) yes++;

    }
    if(yes==N) printf("������yes����,�O�j��\n");
    else printf("���O������yes,�N���A�j��\n");
}
