#include<stdio.h>
#include<conio.h>
/*v,m,r ve bulunduğu yerin sürtünme katsayısı kullanıcıdan gelen bir arabanın virajdan çıkıp çıkmayacağını if'le yazdıran bir kod.(g=10)*/

float fonk2(int m,float k)
{
    int g=10;
    float fs;
    fs=k*m*g;
    return fs;
}
float fonk3(int m,int v,int r)
{
    float fm;
    fm=(m*v*v)/2;
    return fm;
}
int main()
{
    int v,m,r,k;
    printf("hiz degerini giriniz:\n");
    scanf("%d",&v);
    printf("kutle degerini (kg cinsinden) giriniz:\n");
    scanf("%d",&m);
    printf("yaricap degerini (metre cinsinden) giriniz:\n");
    scanf("%f",&r);
    printf("surtunme katsayisi degerini giriniz:\n");
    scanf("%f",&k);

    float surtkuv=fonk2(k,m);
    float merkuv=fonk3(m,v,r);

    if(merkuv>surtkuv)
    {
        printf("virajdan cikamaz.\n");
    }
    else
    {
        printf("virajdan cikabilir.");
    }
    getch();
    return 0;
    
}
