#include <stdio.h>
int main(){
    int a = 400000;
    int b = 350000;
    double da = (double) 13/100;
    double db = (double) 21/100;
    double hasil_a = a - (a * da);
    double hasil_b = b - (b * db);
    printf("Harga sepatu A adalah %d\n", a);
    printf("Harga sepatu B adalah %d\n", b);
    printf("Sepatu A mendapat diskon %.0f%% sehingga harganya menjadi %.0f\n", da * 100, hasil_a);
    printf("Sepatu B mendapat diskon %.0f%% sehingga harganya menjadi %.0f", db * 100, hasil_b);
    return 0;
}