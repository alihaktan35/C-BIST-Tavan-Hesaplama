// github.com/alihaktan35

#include <stdio.h>

void degerleriAl();
void tavanHesapla(float maliyet, int tavanMax);

int main()
{
    degerleriAl();
    return 0;
}

void degerleriAl()
{
    printf("Hissenin maliyetini giriniz: (XXX.XX TL)");
    float maliyet;
    scanf("%f",&maliyet);
    printf("Gormek istediginiz tavan miktarini giriniz: ");
    int tavanMax=0;
    scanf("%d",&tavanMax);
    tavanHesapla(maliyet,tavanMax);
}

void tavanHesapla(float maliyet, int tavanMax)
{
    printf("\nHisse maliyeti: %.2f TL",maliyet);
    float tavanHesap = maliyet;
    for (int i = 0; i < tavanMax; ++i)
    {
        tavanHesap = tavanHesap * (1.1);
        printf("\n%d. Tavan: %.2f TL",i+1,tavanHesap);
    }
}
