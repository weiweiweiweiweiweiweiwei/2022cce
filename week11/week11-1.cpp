///指標就是陣列、陣列就是指標s[i] vs. t[i]
bool isIsomorphic(char * s, char * t){
    int N1 = strlen(s);
    int N2 = strlen(t);
    if(N1!=N2) return false;///長度不一樣 結束

    char table1[256] = {};///左邊c1要對應右邊c2 對照表
    char table2[256] = {};///左邊c2要對應右邊c1 對照表

    for(int i=0; i<N1; i++){ ///2個長度都相同麻,隨便N1
        char c1 = s[i], c2 = t[i];
        if(table1[c1]==0 && table2[c2]==0){ ///這格空的
            table1[c1]=c2; ///馬上填好對照表
            table2[c2]=c1; ///馬上填好對照表
        }
        if( table1[c1]==c2 && table2[c2]==c1 ){
            ///比對合格,過關不用淘汰
        }else return false; ///不合格,就錯了結束
    }
    return true;
}
