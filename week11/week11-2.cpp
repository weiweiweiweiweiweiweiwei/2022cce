#include <stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    ///��"�洫"��j������k��A�p���N�쥪��F
    if( a>b ){/// a vs. b => b�j
        int temp=a;
        a=b;
        b=temp;
    }
    if( b>c ){/// b vs. c => c�̤j
        int temp=b;
        b=c;
        c=temp;
    }
    if( a>b ){/// a vs. b => a,b,c ��n�F
        int temp=a;
        a=b;
        b=temp;
    }
    printf("%d %d %d",a,b,c);
}
