#include<stdio.h>
#include<conio.h>
/*10 kere okunan sayfa sayısını alıp bu verilerden 10 günlük ortalama kitap okumak miktarını bulan 
ve bu bulduğu veriye göre 500 sayfalık bir kitabı 10 günde bitirip bitiremeyeceğini belirten bir kod.*/

float fonk4(int a)
{
    float ort,toplam;
    ort=a/10;
    a+=a;
    toplam=ort*10;
    return toplam;

}
int main()
{
    int i,a;
    for(i=1;i<=10;i++)
    {
    printf("gunluk okudugunuz sayfa sayisini giriniz:\n");
    scanf("%d",&a);
    }

    float t=fonk4(a);

    if(t<500)
    {
        printf("bitiremez.\n");
    }
    else
    {
        printf("bitirebilir.\n");
    }
    getch();
    return 0;


}