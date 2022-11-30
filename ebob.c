#include<stdio.h>
//verilen iki sayının ebob'unu bulan fonksiyon
int fonk17(int sayi1,int sayi2)
{
    int ebob;
    ebob=(sayi1%sayi2);
    return ebob;
}
int fonk18(int sayi1,int sayi2)
{
    int ebob;
    ebob=sayi2%sayi1;
    return ebob;
}
int main()
{
    int sayi1,sayi2;
    printf("ebob'unu hesaplamak istediginiz iki sayiyi giriniz:");
    scanf("%d,%d",&sayi1,&sayi2);

    if(sayi1>sayi2)
    {int e=fonk17(sayi1,sayi2);
    printf("ebob:%d",e);}
    else
    {
        int e=fonk18(sayi1,sayi2);
        printf("ebob:%d",e);
    }

    return 0;
}