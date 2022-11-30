#include<stdio.h>
/*Ağırlığı ve hacmi kullanıcıdan alınan bu alınan verilerle özkütle hesaplayan
ve özkütlenin su ya göre durumunu ifle belirten bir kod.*/
float fonk6(int m,int v)
{
    float d;
    d=m/v;
    return d;
}
int main()
{
    int m,v;
    printf("cismin kutlesini (kg cinsinden) giriniz:");
    scanf("%d",&m);
    printf("cismin hacmini (santimetrekup cinsinden) giriniz:");
    scanf("%d",&v);

    float ozkutle=fonk6(m,v);
    int su=1;

    if(ozkutle<su)
    {
        printf("cisim suda yuzer.");
    }
    if(ozkutle==su)
    {
        printf("cisim suda askida kalir.");
    }
    if(ozkutle>su)
    {
        printf("cisim suda batar.");
    }
    return 0;
}