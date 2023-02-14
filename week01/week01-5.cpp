#include <stdio.h>
#include <string.h>
int main()
{
    char line[30];

    scanf("%s",line);
    int N = strlen(line);

    int ans=0; ///迴圈前面ans=0
    for(int i=0; i<N; i++){
        if(line[i]=='2') ans++;
    }///迴圈中間 ans++
    printf("%d\n",ans);
    ///迴圈後面,印出ans
}
