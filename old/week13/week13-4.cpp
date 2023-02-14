#include <stdio.h>
void display_num(int); ///宣告declare

int main()
{
    display_num(5); ///使用、呼叫他
}

void display_num(int a) ///定義 函式的細節
{
    printf("你丟給display_num()的參數引數式: %d\n", a);
    return;

}
