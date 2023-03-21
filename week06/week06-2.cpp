///判斷迴文，要用到的程式技巧:使用for迴圈、if判斷、while迴圈
bool isPalindrome(int x){
    int x2 = x; ///備份x到x2
    ///很長很長的整數
    long long int r = 0; ///反過來的數字,等一下要放在r裡頭
    while( x>0 ){
        ///很長很長的整數
        r = r*10 + x%10; ///剝皮
        x = x / 10;
    }
    ///使用剝皮法
    ///最後x剝完,變成0...完蛋 x不能用
    if( x2 == r) return true;
    else return false;
}
#include <stdio.h>
int main()
{
    if( isPalindrome(123454321) )printf("123454321 Yes\n");
    else printf("123454321 No\n");
    if( isPalindrome(2345677) ) printf("2345677 Yes\n");
    else printf("2345677 No\n");
}
