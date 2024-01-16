#include <stdio.h>

int main()
{

    for (int i = 1; i <= 10; i++) 
    {
        printf("\n");
        for (int j = 1; j <= 10; j++)
            printf("%d x %d = %d\n", i, j, i * j);
    }
    return 0;
}

//----Not----
//for döngüsü, başlangıç değeri, koşul ifadesi ve artış ifadesi ile birlikte kullanılır.
