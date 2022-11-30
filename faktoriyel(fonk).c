#include<stdio.h>
/*girilen sayının faktoriyelini bulan fonksiyon*/
int fonk14(int n)
{
    int i,carpim;
    carpim=1;
    for(i=1;i<=n;i++)
    {
        carpim*=i;
    }
    return carpim;

}
int main ()
{
    int n;
    printf("bir n degeri giriniz:");
    scanf("%d",&n);

    int faktoriyel=fonk14(n);
    printf("%d!=%d",n,faktoriyel);

    return 0;
}