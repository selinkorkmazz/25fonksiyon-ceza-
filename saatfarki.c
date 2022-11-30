#include<stdio.h>
/*Meridyen derecesi bilgisi kullanıcıdan alınan 
iki meridyen arasındaki yerel saat farkını hesaplayan bir fonksiyon */
int fonk8(int x,int y)
{
    int c;
    c=(4*(x-y));
    return c;
}

int main()
{
    int x,y;
    printf("dogudaki meridyen derecesini giriniz:");
    scanf("%d",&x);
    printf("batidaki meridyen derecesini giriniz (greenwich'in farkli kisimlarindaysa negatif degerini giriniz):");
    scanf("%d",&y);

    int zamanfarki;
    zamanfarki=fonk8(x,y);
    printf("aradaki zaman farki %d dakikadir.",zamanfarki);
    return 0;

}