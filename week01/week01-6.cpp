#include <stdio.h>
int main()
{
    char line[30];
    int Total=0;
    while(scanf("%s", line)==1){
        int ans=0;///�j��e�� ans=0
        for(int i=0; line[i]!=0; i++){
            if(line[i]=='2') ans++;
        }///�j�餤�� ans++
        printf("%d\n",ans);
        ///�j��᭱,��ans �L�X��
        Total += ans;
    }
    printf("Total: %d\n", Total);
}
