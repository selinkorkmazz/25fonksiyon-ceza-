#include<stdio.h>
//rakamlari birbirinden farkli sayilari yazdıran faonksiyon
void fonk28(int sayi,int birler,int onlar,int yuzler)
{
    for(sayi=100;sayi<=999;sayi++)
    {
        birler=sayi%10;
        onlar=((sayi%100)-birler)/10;
        yuzler=(sayi%1000-sayi%100)/100;

        if (birler!=onlar&&onlar!=yuzler&&birler!=yuzler)
        {
            printf("%5d",sayi);
        }
        
    }
}
int main ()
{
    int sayi,birler,onlar,yuzler;

    fonk28(sayi,birler,onlar,yuzler);

    return 0;
}