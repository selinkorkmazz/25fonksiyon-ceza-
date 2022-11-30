#include<stdio.h>

int fonk24(int sayi)
    {
        int binler,yuzler,onlar,birler;
        int ab,cd,ba,dc;
        birler=sayi%10;
        onlar=(sayi%100-birler)/10;
        yuzler=(sayi%1000-sayi%100)/100;
        binler=sayi/1000;
        ab=binler*10+yuzler;
        cd=onlar*10+birler;
        ba=yuzler*10+binler;
        dc=birler*10+onlar;
        int carpim_abcd;
        carpim_abcd=ab*cd;
        
        return carpim_abcd;
    }
    int fonk25(int sayi)
    {
        int binler,yuzler,onlar,birler;
        int ab,cd,ba,dc;
        birler=sayi%10;
        onlar=(sayi%100-birler)/10;
        yuzler=(sayi%1000-sayi%100)/100;
        binler=sayi/1000;
        ab=binler*10+yuzler;
        cd=onlar*10+birler;
        ba=yuzler*10+binler;
        dc=birler*10+onlar;
        int carpim_badc;
        carpim_badc=ba*dc;
        return carpim_badc;

    }
    int main()
    {
        int sayi;
        printf("dort basamakli bir sayi giriniz:");
        scanf("%d",sayi);

        
        int carpim=fonk24(sayi);
        int carpim2=fonk25(sayi);
        
        if(carpim==carpim2)
    {
        printf("Tersyuz bir sayidir");
        
    }
    else
    { printf("degildir");
    
    }
    return 0;
    }