#include <stdio.h>

int main() {
    int note1, note2, note3;
    float result;

    printf("1. not: ");
    scanf("%d", &note1);

    printf("2. not: ");
    scanf("%d", &note2);

    printf("3. not: ");
    scanf("%d", &note3);

    result = (note1 + note2 + note3) / 3.0;

    printf("Ortalama: %.2f\n", result);

    if (result >= 90)
        printf("Harf notu: AA\n");
    else if (result >= 80)
        printf("Harf notu: BA\n");
    else if (result >= 70)
        printf("Harf notu: BB\n");
    else if (result >= 60)
        printf("Harf notu: CB\n");
    else if (result >= 50)
        printf("Harf notu: CC\n");
    else
        printf("Harf notu: FF\n");

    return 0;
}
