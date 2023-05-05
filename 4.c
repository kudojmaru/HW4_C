#include <stdio.h>


int main() {
    int num, i = 0;
    // массив для двоичного числа
    int mas[1000];

    scanf("%d", &num);
    if (num < 0) {
        printf("-");
    }

    // остатки от деления на 2 записываем в массив
    while (num != 0) {
        mas[i] = abs(num) % 2;
        num = abs(num) / 2;
        i++;
    }

    // переворачиваем массив
    for (int n = 0; n < i; n++) {
        printf("%d", mas[i - n - 1]);
    }
    
    printf("\n");
    return 0;

}