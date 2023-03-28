#include <stdio.h>
int main()
{///檔案指標     檔案開啟("檔名", "模式");
 ///FILE * fout = fopen( "file.txt", "w" ); ///寫write
    FILE * fin  = fopen( "file.txt", "r" ); ///讀read

    char line[200];
    fscanf(fin, "%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);

    fscanf(fin, "%s",line);
    printf("現在執行目錄的檔案裡讀入 %s\n", line);
}

