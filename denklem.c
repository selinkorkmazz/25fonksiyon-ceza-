#include<stdio.h>
/*Birinci dereceden bir bilinmeyenli denklemin kökünü bulup yazdırıp 
kök negatif mi pozitif mi 0 mı onu da if ile yazdıran bir kod.*/
int fonk7(int x)
{
    int c;
    c=(4*x-13);
    return c;
}
int main()
{
    int x;
    printf("bilinmeyen degerini giriniz:");
    scanf("%d",&x);

    int y;
    y=fonk7(x);
    printf("sonuc:%d\n",y);

    if(y<0)
    {
        printf("y degeri negatiftir.");
    }
    if(y==0)
    {
        printf("y degeri sifirdir.");
    }
    if(y>0)
    {
        printf("y degeri pozitiftir.");
    }
    return 0;
}