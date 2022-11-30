#include<stdio.h>
fonk31(s1,s2,s3)
{
    if(s1>s2&&s1>s2)
    {
        printf("girilen en buyuk sayi:%d",s1);
    }
    if(s2>s1&&s2>s3)
    {
        printf("girilen en buyuk sayi:%d",s2);
    }
    else
    {
        printf("girilen en buyuk sayi:%d",s3);
    }
}
int main()
{
    int s1,s2,s3;
    printf("lutfen birinci sayiyi giriniz:");
    scanf("%d",&s1);
    printf("lutfen birinci sayiyi giriniz:");
    scanf("%d",&s2);
    printf("lutfen birinci sayiyi giriniz:");
    scanf("%d",&s3);

    fonk31(s1,s2,s3);
    return 0;
}