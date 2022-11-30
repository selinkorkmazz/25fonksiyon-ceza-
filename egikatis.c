#include<stdio.h>
/*45 derece eğik açıyla atılan cismin hmax ve menzilini bulan fonksiyon*/
float fonk15(int vi,float t,float v,int g)
{
    float hmax;
    g=10;
    v=(vi)*(0.7); //sin45,cos45=0.7
    t=(v/g);
    hmax=((v*t)-((g*t*t)/2));
    return hmax;
}
float fonk16(int vi,float t,float v,int g)
{
    float menzil;
    g=10;
    v=(vi)*(0.7);
    t=(v/g);
    menzil=(v*t);
    return menzil;
}
int main()
{
    int vi,g;
    printf("cismin ilk hizini giriniz:");
    scanf("%d",&vi);

    float t,v;

    float dusey=fonk15(vi,t,v,g);
    printf("maksimum yukseklik:%.2f\n",dusey);

    float yatay=fonk16(vi,t,v,g);
    printf("menzil uzakligi:%.2f",yatay);

    return 0;
}