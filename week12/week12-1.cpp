int addDigits(int num){
    while(num>=10){ ///�p�Gnum�O2��ƥH�W�A�~��i����
        int ans = 0;
        while(num>0){ ///��֪k
            ans += num%10; ///�Ӧ��
            num = num/10; ///�Ʀr�ܤp�F
        }
        num = ans; ///�̫ᵪ�ש�^num �H�K�U�@���A���
    }

    return num;
}
