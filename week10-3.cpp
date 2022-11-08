#include <stdio.h>
int main()
{
    int a[4] = {10, 20, 30, 40};

    for(int i=0; i<4; i++){ ///i:0 1 2 3因為<4
        printf("%d ", a[i] );
    }
    printf("\n上面正的印，下面倒的印\n");
    for(int i=3; i>=0; i--){ ///i:3 2 1 0因為>=0
        printf("%d ", a[i]);
    }
}
