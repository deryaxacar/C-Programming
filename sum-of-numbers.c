#include <stdio.h>

int main(){
	int x, y, result;
	
	printf("Birinci sayiyi girin: ");
	scanf("%d", &x);
	printf("Ikinci sayiyi girin: ");
	scanf("%d", &y);
	result = x + y;
	printf("Toplam: %d\n", result);
    return 0;
}

//----Not----
//Scanf, standart giriş fonksiyonudur. Klavyeden kullanıcıdan veri almak için kullanılır.
//Format belirteçleri (%d, %.2f, %lf vs) kullanılarak veri tipine göre giriş alır.
