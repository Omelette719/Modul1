#include <stdio.h>
int main() {
    int o = 5;
    int k = 14;
    float r = k / (2 * 3.14 * o) ;
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %d Putaran\n", o);
    printf("Jarak tempuh Pak Dengklek = %d Kilometer\n", k);
    printf("\nJawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", r);
    return 0;
}