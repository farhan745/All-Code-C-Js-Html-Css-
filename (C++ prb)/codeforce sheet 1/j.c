#include <bits/stdc++.h>
// using namespace std;
int main()
{
    int a, b, c, d;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    a=a%100;
    b=b%100;
    c=c%100;
    d=d%100;
    int sum=(a*b*c*d)%100;
    if(sum<10){ 
        printf( "0 %d\n" , sum );
        }
    else {
        printf("%d\n", sum);
    }
    return 0;
}