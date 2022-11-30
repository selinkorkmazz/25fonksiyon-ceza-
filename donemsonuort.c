#include<stdio.h>
/*30 Akts ile dönem sonu ortalama hesaplama fonksiyonu ders ders notlar alınıp.
(4 lük sistemde sonuç verecek 100 lük sistemde veri alıp)*/

float fonk9(float dortluksistem,int k)
{
    float sonuc,t;
    sonuc=dortluksistem*k;
    t=sonuc/8;
    return t;
}
int main()
{
    int not,k;
    
    printf("Fizik-1 ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Fizik Laboratuvar ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Matematik-1 ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Lineer Cebir ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Turk Dili-1 ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Ataturk Ilkeleri ve Inkılap Tarihi-1 ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Ingilizce-1 ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    printf("Algoritma ve Proglamaya Giris ders ortalamanizi ve kredisini giriniz:");
    scanf("%d,%d",&not,&k);
    float ort;
    ort=not/4;

    float dortluksistem;
    dortluksistem=ort/4;
    float donemsonuort=fonk9(dortluksistem,k);

    printf("Donem sonu ortalamaniz:%f",donemsonuort);
    return 0;

}