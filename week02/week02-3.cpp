///改用 c++來寫
#include <iostream>

int main()
{///很長的數
    long long int a, b;///64位元

    while( std::cin >> a >> b ){
        long long int ans = a - b;
        if( ans<0 )ans = b - a;
        std::cout << ans << std::endl;
        ///printf("lld\n",ans);
    }
}
