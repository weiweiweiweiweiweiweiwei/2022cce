#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
        ///printf("%d�� ��%d�P\n", i,2*i-1);
        ///printf("%d�� %d�Ů�\n", i,5-i);
        int space=5-i, star=2*i-1;
        for(int k=0; k<space; k++) printf(" ");
        for(int k=0; k<star; k++) printf("*");
        printf("\n");
    }
}
