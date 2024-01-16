#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++) //Bu döngü, 1'den 10'a kadar olan sayıları temsil eden i' yi artırarak çalışır
    {
        printf("\n");
        for (int j = 1; j <= 10; j++) //Her bir i değeri için, 1'den 10'a kadar olan sayıları temsil eden j'yi artırarak çalışır.
            printf("%d x %d = %d\n", i, j, i * j); //çarpımı ekrana yazdırılır.
    }
    return 0;
}

//----Not----
//for döngüsü, başlangıç değeri, koşul ifadesi ve artış ifadesi ile birlikte kullanılır.
