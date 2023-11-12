#include <stdio.h>

int main() {
    long long int broj1, broj2;

    printf("Unesite prvi broj: ");
    scanf("%lld", &broj1);

    printf("Unesite drugi broj: ");
    scanf("%lld", &broj2);

    int cifre_broj1 = 0;
    long long int temp_broj1 = broj1;
    while (temp_broj1 != 0) {
        temp_broj1 /= 10;
        cifre_broj1++;
    }

    int cifre_broj2 = 0;
    long long int temp_broj2 = broj2;
    while (temp_broj2 != 0) {
        temp_broj2 /= 10;
        cifre_broj2++;
    }

    if (broj1 > broj2)
    {
        printf("broj1 je veci od broja 2\n");

        int cifra_jedinice_broj1 = broj1 % 10;
        int cifra_jedinice_broj2 = broj2 % 10;

        if (cifra_jedinice_broj1 == cifra_jedinice_broj2) {
            long long int broj3 = broj1;
            int manja_cifra_jedinice = (broj1 % 10 < broj2 % 10) ? broj1 % 10 : broj2 % 10;

            broj3 = broj3 / 10 * 10 + manja_cifra_jedinice;

            printf("Broj sa vecim ciframa jedinice: %lld\n", broj3);
        } else {
            int nova_cifra_jedinice = (cifra_jedinice_broj1 > cifra_jedinice_broj2) ? cifra_jedinice_broj1 : cifra_jedinice_broj2;
            long long int broj3 = (broj1 / 10) * 10 + nova_cifra_jedinice;

            printf("Broj3: %lld\n", broj3);
        }
    }
    else if (broj1 < broj2)
    {
        printf("broj1 je manji od broja 2\n");

        int cifra_jedinice_broj1 = broj1 % 10;
        int cifra_jedinice_broj2 = broj2 % 10;

        if (cifra_jedinice_broj1 == cifra_jedinice_broj2) {
            long long int broj3 = broj2;

            int manja_cifra_jedinice = (broj1 % 10 < broj2 % 10) ? broj1 % 10 : broj2 % 10;

            broj3 = broj3 / 10 * 10 + manja_cifra_jedinice;

            printf("Broj sa vecim ciframa jedinice: %lld\n", broj3);
        } else {
            int nova_cifra_jedinice = (cifra_jedinice_broj1 > cifra_jedinice_broj2) ? cifra_jedinice_broj1 : cifra_jedinice_broj2;
            long long int broj3 = (broj2 / 10) * 10 + nova_cifra_jedinice;

            printf("Broj3: %lld\n", broj3);
        }
    }
    else
    {
        long long int vecibr = broj1;

        int cifra_jedinice_broj1 = broj1 % 10;
        int cifra_jedinice_broj2 = broj2 % 10;
        int cifra_jedinice_vb = vecibr % 10;

        long long int broj3 = vecibr % 10 + cifra_jedinice_vb * 10 + cifra_jedinice_vb;
        printf(broj3);
    }

    printf("Prvi broj ima %d cifara.\n", cifre_broj1);
    printf("Drugi broj ima %d cifara.\n", cifre_broj2);

    return 0;
}
