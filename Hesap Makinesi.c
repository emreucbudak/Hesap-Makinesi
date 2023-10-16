/******************************************************************************

                            Emre Üçbudak

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x , y , z , t = 0 , b = 0;
    double a;
    jump:
    printf("ISLEM NUMARALARI = \n1-Toplama\n2-Çıkarma\n3-Bölme\n4-Çarpma\n");
    printf("ISLEM SECIN = ");
    scanf("%d",&x);
    if (x<1)
    {
        printf ("İşlem Bulunamadı!");
        goto jump;
    }
    if (x>4)
    {
        printf ("İşlem Bulunamadı \n");
        goto jump;
        
    }
    printf("1. Sayiyi Giriniz = ");
    scanf("%d",&y);
    printf("2. Sayiyi Giriniz = ");
    scanf("%d", &z);
    if (x==1)
    {
        int e;
        t = y+z;
        printf("İşlem Sonucu = %d ", t);
        goto jump;
        
    }    
    if (x==2)
    {
        t = y-z;
        printf("İşlem Sonucu = %d", t);
        goto jump;
    
        
    }
    if (x==3)
    {
        t = y%z;
        printf("Kalan = %d\n",t);
        if(y<z)
        {
            printf ("Küçük Sayı Büyük Sayıya Bölünemez");
        }
        else
        {
            a = y/z;
            printf ("Bölüm = %f", a);
            
        }
    
        goto jump;
    }
    if (x==4)
    {
        t = y*z;
        printf("İşlem Sonucu = %d",t);
        goto jump;
        
    }
    return 0;
}
