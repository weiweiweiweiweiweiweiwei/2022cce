#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};

    for(int i=0; i<4; i++){ ///i:0 1 2 3�]��<4
        printf("%d ", a[i] );
    }
    printf("\n�W�������L�A�U���˪��L\n");
    for(int i=3; i>=0; i--){ ///i:3 2 1 0�]��>=0
        printf("%d ", a[i]);
    }
}
