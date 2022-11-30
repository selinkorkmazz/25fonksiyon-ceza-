#include<stdio.h>
/*1'den 999'a kadar olan tam sayılar içeresinden basamaklarının küp değeri toplamı kendisine eşit olan program*/
int fonk23(int sayi,int on,int yuz,int bir)
{
    int kup;
    bir=sayi%10;
    on=(sayi%100-bir)/10;
    yuz=(sayi%1000-on%100)/100;
    kup=(bir*bir*bir)+(on*on*on)+(yuz*yuz*yuz);
    return kup;
}
int main ()
{
    int sayi,on,bir,yuz;
    printf("uc basamakli bir sayi giriniz:");
    scanf("%d",sayi);

    int kuptoplam=fonk23(sayi,on,bir,yuz);

    if(kuptoplam==sayi)
    {
        printf("%d",sayi);
    }
    else
    {
        printf("sayinin basamaklarinin kupleri toplami kendisine esit degildir.");
    }
    return 0;
}