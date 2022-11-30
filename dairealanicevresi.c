#include<stdio.h>
float fonk21(int r)
{
    float pi;
    pi=3.14;
    float alan=pi*r*r;
    return alan;
}
int fonk22(int r)
{
    int cevre;
    float pi;
    pi=3.14;
    cevre=2*pi*r;
    return cevre;
}
int main ()
{
    int r;
    printf("dairenin yaricapini giriniz:"),
    scanf("%d",&r);

    float a=fonk21(r);
    printf("dairenin alani:%.2f\n",a);
    int c=fonk22(r);
    printf("dairenin cevresi:%d",c);

    return 0;
}