#include <stdio.h>
int main(){
    int x = 4;
    int y = 5;
    int z = 7;
    int k = x+y+z;
    int h = 85000;
    int hasil = k * h;
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", x, y, z);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", k);
    printf("Harga tanah Per Meter adalah %d\n", h);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah %d", hasil);
    return 0;
}