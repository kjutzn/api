#include <stdio.h>

int main(){
    int a,b;
    int x,y;

    //a b konacan rezultat
    //x y trenutan

    scanf("%d %d", &a, &b);
    scanf("%d %d", &a, &b);

    printf("a = %d b = %d\n", a,b);
    printf("x = %d y = %d\n", a,b);

    if (a == x && b == y)
    {
    printf("nijedan");
    }

    if (b == y)
    {
    printf("prvi");
    }

    if(a == x)
    {
    printf("drugi");
    }

    else
    {
    printf("?");
    }
    
    return 0;
}
