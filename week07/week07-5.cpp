///用c++的方法來排
#include <stdio.h>
#include <algorithm>///沒有.h為了std::sort()

int main()
{
    int a[10] = {9, 8, 7, 5, 4, 6, 2, 3, 1, 0};
    std::sort(a, a+10);

    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }
}
