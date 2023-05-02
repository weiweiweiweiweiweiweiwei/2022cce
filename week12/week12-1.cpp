int addDigits(int num){
    while(num>=10){ ///狦num琌2计膥尿秈︽ブ
        int ans = 0;
        while(num>0){ ///ブ猭
            ans += num%10; ///计
            num = num/10; ///计跑
        }
        num = ans; ///程氮num 獽Ωブ
    }

    return num;
}
