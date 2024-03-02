#include <stdio.h>

int kecepatan;
int jarak;
int waktu;

int main()
{
    printf("Input menghitung kecepatan: ");
    scanf("%d%d", &jarak, &waktu);
    printf("Luaran Kecepatan: %.2f\n\n", (float) jarak / waktu);

    printf("Input menghitung jarak: ");
    scanf("%d%d", &kecepatan, &waktu);
    printf("Luaran Jarak: %.2f\n\n", (float) kecepatan * waktu);

    printf("Input menghitung waktu: ");
    scanf("%d%d", &jarak, &kecepatan);
    printf("Luaran Waktu: %.2f", (float) jarak / kecepatan);
    return 0;
}