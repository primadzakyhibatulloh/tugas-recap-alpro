#include <stdio.h>

int kelilingPersegi(int sisi){
    return 4 * sisi ;
}

int luasPersegi(int sisi){
    return sisi * sisi ;
}

int volumeKubus(int sisi){
    return sisi * sisi * sisi;
}

int main (){
    int sisi ;
    
    do {
        printf("sisi persegi: ");
        scanf("%d", &sisi) ;
    } while (sisi <= 0) ;

    printf("Keliling persegi: %d\n", kelilingPersegi(sisi));
    printf("Luas persegi: %d\n", luasPersegi(sisi));
    printf("Volume kubus: %d\n", volumeKubus(sisi));
    
    return 0;
}