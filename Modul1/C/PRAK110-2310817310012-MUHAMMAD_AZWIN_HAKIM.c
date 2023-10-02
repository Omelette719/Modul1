#include <stdio.h>
#include <math.h>
int main(){
    int a = 12;
    int c = 5;
    double b = sqrt(pow(a, 2) + pow(c, 2));
    int k = a+b+c;
    double l = (double) (c*a) / 2;
    printf("diketahui :\n");
    printf("Alas = %d cm\n", c);
    printf("Tinggi = %d cm\n", a);
    printf("\nJawab :\n");
    printf("Sisi A = %d cm\n", a);
    printf("Sisi B = %.0lf cm\n", b);
    printf("Keliling = %d cm\n", k);
    printf("Luas = %.0lf cm", l);
    return 0;
}