#include <stdio.h>

int *array;
int jumlahArray;
int hasil = 0;

int main()
{
    printf("Jumlah Array: ");
    scanf("%d", &jumlahArray);

    if (jumlahArray > 0)
    {
        array = (int *)malloc(jumlahArray * sizeof(int));
        for (int i = 0; i < jumlahArray; i++)
        {
            scanf("%d", &array[i]);
            hasil += array[i];
        }
        printf("Luaran penjumlahan: %d", hasil);
    } else {
        printf("Array kosong");
    }
    return 0;
}