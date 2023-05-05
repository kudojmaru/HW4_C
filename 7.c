#include <stdio.h>

int main(){
    int n, num, zero = 0, negative = 0, positive = 0;
    scanf("%d\n", &n);
    int mas[n];

    // заполняем массив
    for (int i = 0; i < n; i++) {
        scanf("%d", &num);
        mas[i] = num;
    }

    // проверяем числа на условия
    for (int i = 0; i < n; i++) {
        if (mas[i] == 0) {
            zero++;
        } else if (mas[i] > 0) {
            positive++;
        } else {
            negative++;
        }
    }
    
    printf("%d %d %d\n", zero, positive, negative);
    return 0;
}