///龟策揭àà
///(1)琜芅琜
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){///芅琜(加糷)
        ///(3)计 + 加糷 琌 n,  = n-i
        for(int k=1;k<=n-i;k++) printf(" ");
        ///(2)加糷,籔琍琍计秖妓
        for(int k=1;k<=i;k++) printf("*");
        ///printf("%d\n",i);///(1)芅琜(加糷)
        printf("\n");
    }

}
