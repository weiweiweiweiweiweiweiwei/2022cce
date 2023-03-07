///step1:Input & Output OK (with while - loop)
#include <stdio.h>
int main()
{
    char line[50];

    while( scanf("%s", line)==1 ){
        printf("%s -- ",line);

        ///your code here¡I

        printf("is not a palindrome.\n\n");
    }
}
