#include <stdio.h>
int main()
{
    int N=7;
    for( int i=0; i<N; i++ ){
        printf("出現 i:%d \n", i);
    }
    ///城市的重點，N是多少就幾次
    for( int i=0; i<=N; i++ ){
        printf("接下來 i:%d \n", i);
    }
}
