#include <stdio.h>


int main() {
    int i = 0;
    float num, sum = 0, result, mas[1000];

    // считываем первое значение вне цикла
    scanf("%f", &num);

    // заполняем массив
    while (num != 0) {
        mas[i] = num;
        scanf("%f", &num);
        i++;
    }

    // считаем сумму
    for (int n = 0; n < i; n++){
        sum += mas[n];
    }

    result = sum / i;
    printf("%f\n", result);
    return 0;
}