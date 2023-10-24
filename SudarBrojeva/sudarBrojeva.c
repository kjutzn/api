#include <stdio.h>

int main() {
    long long int x, y;
    long long int rez = 0;
    long long int k = 1;

    scanf("%lld", &x);
    scanf("%lld", &y);
    
    while (x > 0 || y > 0)
    {
        long long int bx = x % 10;
        long long int by = y % 10;
        
        if (bx > by)
        {
            rez = rez + (bx * k);
        }
        
        else if (bx < by)
        {
            rez = rez + (by * k);
        }
        
        else
        {
            rez = rez + (bx * k);
        }
        
        x /= 10;
        y /= 10;
        k *= 10;
    }

    printf("%lld\n", rez);
    
    return 0;
}
