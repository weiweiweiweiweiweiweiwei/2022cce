///��߽Ҫ����T����
///(1)�[�N�[
#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<=n;i++){///�N�[(�Ӽh)
        ///(3)�Ů�� + �Ӽh �O n, �Ů� = n-i
        for(int k=1;k<=n-i;k++) printf(" ");
        ///(2)�Ӽh,�P�P�P�ƶq�@��
        for(int k=1;k<=i;k++) printf("*");
        ///printf("%d\n",i);///(1)�N�[(�Ӽh)
        printf("\n");
    }

}
