#include<stdio.h>
/*girilen sayıya kadarki sayıların toplamı*/
int fonk13(int n)
{
    int i,toplam;
    for(i=1;i<=n;i++)
    {
        toplam+=i;
    }
    return toplam;
}
int main ()
{
    int n;
    printf("bir n degeri giriniz:");
    scanf("%d",&n);

    int t;
    t=fonk13(n);
    printf("toplam deger:%d",t);

    return 0;
}