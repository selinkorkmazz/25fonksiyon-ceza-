#include<stdio.h>
int fonk30(int n,int i,int toplam)
{
    int j;
    for(i=1;i<=n&&n>=1;i++)
    {
        if(i%2==0)
        {
            toplam+=i;
            j++;
        }
    }
    return toplam;
}
int main()
{
    int n,i,toplam,j;
    printf("lutfen 1'den buyuk bir n sayisi giriniz:");
    scanf("%d",&n);

    int t=fonk30(n,i,toplam);

    printf("toplam deger:%d",t);
    return 0;
}