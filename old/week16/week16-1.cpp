///複習 scanf()
#include <stdio.h>
/// stdio.h 是呼叫一個檔案

int main()
{
    printf("請輸入數字、一個字母\n");
    int a;
    scanf("%d", &a);

    char c;
    scanf("%c", &c);

    printf("數字是:%d 字母是:%c", a,c);
}

