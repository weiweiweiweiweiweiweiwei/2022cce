///檔案的Input / Output
#include <stdio.h>
int main()
{
        FILE * fout = fopen("file.txt", "w");
        ///pirntf("Hello World\n");
        fprintf(fout, "Hello World\n");

        printf("檔案就出現了喔,請檢察檔案總管\n");


}
