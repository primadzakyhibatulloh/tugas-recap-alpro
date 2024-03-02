#include <stdio.h>

int jumlahTransaksi = 0;
int totalTransaksi;

int main()
{
    printf("Jumlah transaksi: ");
    scanf("%d", &jumlahTransaksi);

    if (jumlahTransaksi > 0)
    {
        for (int i = 1; i <= jumlahTransaksi; i++)
        {
            int nominalTransaksi = 0;
            printf("Transaksi %d: ", i);
            scanf("%d", &nominalTransaksi);
            totalTransaksi += nominalTransaksi;
        }
        printf("Total pengeluaran hari ini: %d", totalTransaksi);
    }
    else
    {
        printf("Tidak ada transaksi hari ini.");
    }
    return 0;
}