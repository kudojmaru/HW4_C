#include <stdio.h>


int main() {
    int n, k, result;
    scanf("%d %d", &n, &k);
    // печатем пробелы для первой строки (вместо чисел, если первая неделя началась не с пн)
    for (int i = 1; i < n; i++) {
        printf("   ");
    }

    // выводим основные числа
    for (int i = 1; i <= k; i++) {
        // максимум в строке 7 чисел
        if (n == 8) {
            printf("\n");
            n = 1;
        }
        // разделения чисел - если 2-значное, то нет пробела перед числом
        // в противном случае ставим пробел перед числом
        if (i / 10 != 0) {
            printf("%d ", i);
        } else {
            printf(" %d ", i);
        }

        n += 1;
    }

    printf("\n");
    return 0;
}