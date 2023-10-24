#include <stdio.h>

int main() {
    int n1,n2;
    char c1, c2;

    scanf("%c%c", &c1, &c2);
    scanf("%d %d", &n1, &n2);

    if (n1 == n2) {
        for (int i = 0; i < n1; i++)
        {
            printf("%c%c", c1, c2);
        }
    }

    else if ((n1 > n2) && (n1 == n2 + 1)) {
        for (int i = 0; i < n2; i++)
        {
            printf("%c%c", c1, c2);
        }
        printf("%c", c1);
    }

    else if ((n2 > n1) && (n2 == n1 + 1)) {
        for (int i = 0; i < n1; i++)
        {
            printf("%c%c", c2, c1);
        }
        printf("%c", c2);
    }

    else {
        printf("Nemoguce");
    }

    return 0;
}
