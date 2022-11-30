#include<stdio.h>
/*Kilo,boy bilgisi alınıp beden kitle indeksi yazılan 
ve beden kitle indeksine göre vucut durumunu ifle belirten bir kod.*/
float fonk5(float boy,int kilo)
{
    float sonuc;
    sonuc=kilo/(boy*boy);
    return sonuc;
}
int main()
{
    int kilo;
    float boy;
    printf("kilonuzu giriniz:");
    scanf("%d",&kilo);
    printf("boyunuzu giriniz:");
    scanf("%f",&boy);

    float vki=fonk5(boy,kilo);

    printf("vucut kitle endeksiniz:%f\n",vki);

    if(vki<18.5){
        printf("zayif");
        }
        if(18.5<vki && vki<24.9){
            printf("normal");
        }
        if(25<vki && vki<29.9){
            printf("fazla kilolu");
        }
        if(30<vki && vki<34.9){
            printf("sisman");
        }
        if(vki>35){
            printf("obez");
        }
    return 0;

}