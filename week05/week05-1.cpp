///了解address位址 &a
///變數的4個特質

#include <stdio.h>

int main()
{
    int a = 10;
    printf("a:%d 放在%d\n", a, &a);
    int b = 20;
    printf("b:%d 放在%d\n", b, &b);
    int c = 30;
    printf("c:%d 放在%d\n", c, &c);
}
