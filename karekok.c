#include<stdio.h>
#include<math.h>
/*101 ile kod durdurulana ve girilen değere kadarki çift sayıyı yazan bir fonksiyon 
bu fonksiyondan gelen değerin de karekökünü alıp yazdıran bir kod.*/
int fonk19(int n)
{
    int i=0;
    while(i<=n)
    {
        if(n==101){break;}
        i+=2;
        printf("deger:%d\n",i);
    }
    return i;
}
int main()
{
    int n;
    printf("bir n degeri giriniz:");
    scanf("%d",&n);
    

    int deger=fonk19(n);
    
    float sonuc;
    sonuc=sqrt(deger);
    printf("sonucunuz:%.2f",sonuc);
    
    return 0;
}