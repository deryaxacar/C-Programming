#include <stdio.h>

int main() 
{
    long long int tcNo; // TC Kimlik Numarasını tutacak değişkeni long long olarak tanımla
    int sum = 0, control;
    int count = 0;

    // TC Kimlik Numarasını kullanıcıdan al
    printf("TC Kimlik Numarasini girin: ");
    scanf("%lld", &tcNo);
    
    // Girilen TC Kimlik Numarasının kaç haneli olduğunu kontrol et
    long long int tmp = tcNo;
    while (tmp != 0) {
        tmp /= 10;
        count++;
    }
    
    if (count != 11) {
        printf("Lutfen 11 haneli TC Numarasini girin.\n");
        return 1; // Hatalı durumu işaretle ve programı sonlandır
    }

    // TC Kimlik Numarasının son basamağını sakla
    control = tcNo % 10;
    tcNo /= 10;

    // İlk 10 hane toplamını hesapla
    for (int i = 0; i < 10; ++i) {
        sum += tcNo % 10;
        tcNo /= 10;
    }

    // Toplamanın birler basamağını kontrol et
    if (sum % 10 == control)
        printf("Girilen TC Kimlik Numarasi gecerlidir.\n");
	else
        printf("Girilen TC Kimlik Numarasi gecersizdir.\n");

    return 0;
}

//----Not----
//TC kimlik numaralarında ilk 10 hanenin toplamının birler basamağı 11. haneye eşittir. 
//Bu kod basitce bunun kontrolünü yaparak girilen
//11 heneli sayıların tc kimlik numarası olup olamayacağının kontrolünü yapmaktadır.
