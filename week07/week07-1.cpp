///long long int?
///很長 很長 的整數
#include <stdio.h>
int main()
{///在x86的電腦架構下 int 是32位元 可裝 9-10位數
    int n=9876543210;
    printf("int 印出來 %d\n", n);///所以印錯了

    ///可裝19-20位數
    long long int a=9876543210;///10位數
    printf("long long int 印出來 %lld\n",a);
                                ///英文的long long d
}
