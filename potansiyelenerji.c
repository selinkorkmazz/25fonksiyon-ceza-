#include<stdio.h>
float fonk29(int m,int h,int x)
{
    int k=20;
    int g=10;
    float enerji=(m*g*h)+1/2*(k*x*x);
    return enerji;
}
int main()
{
    int m,h,x,k,g;
    k=20;
    g=10;
    printf("cismin kutlesini giriniz:");
    scanf("%d",&m);
    printf("cismin yuksekligini giriniz:");
    scanf("%d",&h);
    printf("yayin sikisma miktarini giriniz:");
    scanf("%d",&x);

    float pe=fonk29(m,h,x);
    if(pe>100)
    {
        printf("cismin potansiyel enerjisi 100 j'den buyuktur.");
    }
    else
    {
        printf("cismin toplam potansiyel enerjisi 100 j'den kucuktur.");
    }
    return 0;
}