#include <stdio.h>
//using namespace std;
int main()
{
    int a, b, c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    int sum=(a*b*c*d)%100;
    printf("%d\n",sum);
    return 0;
}