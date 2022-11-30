#include<stdio.h>

/*Yatay geçiş yapılabilir mi yapılamaz mı hesabı yapan (97*(Kendipuanın/gitmekistediğinokulunpuanı)+(3*ortalama(100lüksistemde))
Ve bunu ortalaması 101 yazılana kadar devam ettiren bir kod.*/

float fonk1(int p1,int p2,int ort)
{
    float sonuc;
    sonuc=(97*(p1/p2))+(3*ort);
    return sonuc;
}
int main()
{
    int i=1,j=1;
    while(i<=j)
    {
    printf("programdan cikmak icin ortalamanizi 101 giriniz.\n");
    
    int p1,p2,ort;
    printf("kendi puaninizi giriniz:\n");
    scanf("%d",&p1);
    printf("gitmek istediginiz okulun puanini giriniz:\n");
    scanf("%d",&p2);
    printf("ortalamanizi giriniz:\n");
    scanf("%d",&ort);
    if(ort==101)
    {
        break;
    }
    
  
        float s;
        s=fonk1(p1,p2,ort);
        printf("%.2f\n",s);

    if(s>200)
    {
        printf("yatay gecis yapilabilir.\n");
    }
    else
    {
        printf("yatay gecis yapilamaz.\n");
    }}  
    

    return 0;

}