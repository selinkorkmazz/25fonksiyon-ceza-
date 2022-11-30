#include<stdio.h>
//kendisi hariç pozitif çarpanlarının toplamı kendisine eşit olan sayılara mükemmel sayı denir 
int fonk27(int sayi,int i)
{
    int toplam=0;
    i=1;
    while(i<sayi)
    {
        if(sayi%i==0)
        {
            toplam+=i;
        }
        i++;
    }
    return i;
}
int main()
{
    int sayi,i;
    printf("bir sayi giriniz:");
    scanf("%d",&sayi);

    int mukemmelsayi=fonk27(sayi,i);

    if(mukemmelsayi==sayi)
    {
        printf("%d mukemmel sayidir.",sayi);
    }
    else{
        printf("%d mukemmel sayi degildir.",sayi);
    }
    return 0;
}