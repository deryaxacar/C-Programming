#include <stdio.h>

int binarySearch(int arr[], int index, int dest) 
{
    int middle, start = 0;
    int end = index - 1;

    while (start <= end) 
    {
        middle = (start + end) / 2;

        if (arr[middle] == dest)
            return middle; // Eleman bulunduğunda indeksi döndür
        else if (arr[middle] > dest)
            end = middle - 1; // Hedef eleman, ortadaki elemandan küçükse, aramanın devam edeceği alt aralığı güncelle
        else
            start = middle + 1; // Hedef eleman, ortadaki elemandan büyükse, aramanın devam edeceği üst aralığı güncelle
    }

    return -1; // Hedef eleman bulunamadığında -1 döndür (hata durumudur return 1 den farkı belirli bir koşulu karşılamamış olması)
}

int main() 
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int index = sizeof(arr) / sizeof(arr[0]);
    int dest = 7;

    // Binary Search fonksiyonunu çağırarak hedef elemanı ara
    int result = binarySearch(arr, index, dest);

    // Sonucu ekrana yazdır
    if (result != -1)
        printf("%d sayisi dizinin %d. indeksindedir.\n", dest, result);
    else
        printf("%d sayi bulunamadi\n", dest);

    return 0;
}


//binarySearch, sıralı dizide belirli bir elemanı hızlı bir şekilde bulan arama algoritmasıdır.
//Her adımda arama aralığı yarıya indirilir, böylece arama süresi logaritmik olarak azalır. 
//Hedef eleman bulunduğunda algoritma sona erer.
