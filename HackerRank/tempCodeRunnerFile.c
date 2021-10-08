#include <stdio.h>
#include <math.h>
int main(int argc, char const *argv[])
{
    double sqr,sqrl,sqru;
    int ans, low, upp, T;
    scanf("%d", &T);

    while ((T != 0))
    {
        ans = 0;
        scanf("%d", &low);
        scanf("%d", &upp);
        sqrl = pow(low, 0.5);
        sqru = pow(upp,0.5);
        int start = ceil(sqrl);
        int end = floor(sqru);
        ans= end-start;
        for (double i = low; i <= upp; i++)
        printf("%d\n", ans);
    
        T--;
    }

    return 0;
}
