#include <stdio.h>

int main() {
    char format;
    double x, y;

    printf("İlk sayiyi girin: ");
    scanf("%lf", &x); // lf (float veya double türündeki değişkenler)

    printf("İkinci sayiyi girin: ");
    scanf("%lf", &y); 

    printf("İşlem türünü seçin (+, -, *, /): ");
    scanf(" %c", &format);

    switch (format) {
        case '+':
            printf("%.2f + %.2f = %.2f\n", x, y, x + y);
            break;
        case '-':
            printf("%.2f - %.2f = %.2f\n", x, y, x - y);
            break;
        case '*':
            printf("%.2f * %.2f = %.2f\n", x, y, x * y);
            break;
        case '/':
            if (y != 0)
                printf("%.2f / %.2f = %.2f\n", x, y, x / y);
            else
                printf("Bir sayiyi sıfıra bölemezsiniz.\n");
            break;
        default:
            printf("Geçersiz işlem!\n");
    }

    return 0;
}

/*----Not----
%f ondalık sayıyı olduğu gibi yazdırırken, %.2f ondalık sayının ondalık kısmını en fazla iki basamak olarak sınırlar.
switch-case, programın belirli bir değerin farklı koşullarına göre farklı blokları çalıştırmasını sağlayan bir kontrol yapısıdır. if-else gibidir.*\