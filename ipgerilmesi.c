#include<stdio.h>
/*m ve v kullanıcıdan verilen Ip uzunluğu 1 m olan O etrafında dairesel hareket yapan bir cismin 
Tip max ve T ip mini yazdıran ve bunu döngüyü kapatmak istenene kadar yazan bir kod.*/
float fonk11(int g,int v,int m,int r)
{
    float tmax;
    g=10;
    r=1;
    tmax=(m*g)+(m*v*v)/r;
    return tmax;
}
float fonk12(int g,int v,int m,int r)
{
    float tmin;
    g=10;
    r=1;
    tmin=((m*v*v))/r-(m*g);
    return tmin;
}
int main()
{
    int m,g,v,r;
    printf("cismin kutlesini kg cinsinden giriniz:");
    scanf("%d",&m);
    printf("cismin hızını giriniz:");
    scanf("%d",&v);

    float max=fonk11(g,v,m,r);
    printf("t ip gerilmesinin maksimum degeri:%.2f N\n",max);

    float min=fonk12(g,v,m,r);
    printf("t ip gerilmesinin minimum degeri:%.2f N",min);

    return 0;
}