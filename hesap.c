#include <stdio.h>
#include <math.h>
int main()
{
    double yuzdeDegeri, sonuc;
    int anaPara, haftaSayisi;
    int state;
    printf("Hesaplama Tipini Seciniz:\n");
    printf("Paranin Hic Cekilmedigi Durum: 1 \n");
    printf("Haftalik Yuzde Degerine Gore Getiri: 2\n");
    scanf("%d", &state);
    switch (state)
    {
    case 1:
        // Paranın Hic Ceikilmediği Durum
        printf("Paranin Hic Cekilmedigi Durum Secildi.\n");
        printf("Bu durumda, anapara ve yuzde degeri ile hesaplama yapilacak.\n");
        printf("Lutfen Anaparayi Giriniz: ");
        scanf("%d", &anaPara);
        printf("Lutfen Haftalik Yuzde Degerini Giriniz: ");
        scanf("%lf", &yuzdeDegeri);
        printf("Lutfen Hafta Sayisini Giriniz: ");
        scanf("%d", &haftaSayisi);
        // Hesaplama işlemi
        for (int i = 0; i < haftaSayisi; i++)
        {
            sonuc = anaPara * pow((1 + yuzdeDegeri / 100), haftaSayisi);
        }
        // ve sonucu ekrana yazdırıyoruz
        printf("Hesaplanan Sonuc: %.2lf\n", sonuc);
        break;
    case 2:
        // Paranın hesaplanması işlemi
        // Anaparamızın başlangıcı
        printf("Lutfen Anaparayi Giriniz: ");
        scanf("%d", &anaPara);
        // Yüzde değerini alıyoruz
        printf("Lutfen Haftalik Yuzde Degerini Giriniz: ");
        scanf("%lf", &yuzdeDegeri);
        // Kaç hafta duracak
        printf("Lutfen Hafta Sayisini Giriniz: ");
        scanf("%d", &haftaSayisi);
        // Hesaplama işlemi
        sonuc = anaPara;
        for (int i = 0; i < haftaSayisi; i++)
        {
            sonuc += (sonuc * yuzdeDegeri / 100);
        }
        // Hesaplanan sonucu virgülden sonra iki basamak olacak şekilde yuvarlıyoruz
        sonuc = (int)(sonuc * 100 + 0.5) / 100.0;
        // ve sonucu ekrana yazdırıyoruz
        printf("Hesaplanan Sonuc: %.2lf\n", sonuc);

        break;
    default:
        printf("Gecersiz secim. Lutfen 1 veya 2 seciniz.\n");
        break;
    }

    return 0;
}