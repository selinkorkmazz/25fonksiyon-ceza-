#include<stdio.h>
/*Dönme hızı ve öteleme hızı kullanıcıdan alınan bir cismin toplam kinetik enerjisi bulan 
ve 350 jouleden fazla mı az mı eşit mi olduğunu ifle belirten bir kod.(I=10)*/
float fonk20(int dv,int ov,int m)
{
    float enerji;
    int i;
    i=10;
    enerji=1/2*((m*ov*ov)+(i*dv*dv));
    return enerji;
}
int main()
{
    int dv,ov,m;
    printf("cismin kutlesini giriniz:");
    scanf("%d",&m);
    printf("cismin donme hizini giriniz:");
    scanf("%d",&dv);
    printf("cismin oteleme hizini giriniz:");
    scanf("%d",&ov);

    float ke=fonk20(dv,ov,m);
    if(ke>350)
    {
        printf("kinetik enerji 350 j'den fazladir.");
    }
    if(ke==350)
    {
        printf("kinetik enerji 350 j'e esittir.");
    }
    else
    {
        printf("kinetik enerji 350 j'den azdir.");
    }
    return 0;
}