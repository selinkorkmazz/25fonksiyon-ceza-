#include<stdio.h>
/*durgun halden harekete gecen cismin son hızı ve 
hareketi suresi verildiginde ivmesi veren fonksiyonla 
yer degistirmesini hesaplayan kod*/
int fonk10(int vs,int t)
{
    float a;
    a=vs/t;
    return a;
}
int main()
{
    int vs,t;
    printf("cismin son hizini giriniz:");
    scanf("%d",&vs);
    printf("hareketin suresini giriniz:");
    scanf("%d",&t);

    float ivme=fonk10(vs,t);
    float x;
    x=(ivme*t*t)/2;
    printf("yer degistirme miktari:%f",x);
    return 0;

}
