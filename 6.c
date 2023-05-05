#include <stdio.h>

int main(){
    int n, num, s = 0;

    scanf("%d\n", &n);
    int mas[n];

    // заполняем массив
    for (int i=0; i < n; i++) {
        scanf("%d", &num);
        mas[i] = num;
    }

    // проверяем условия чисел
    for (int i = 0; i < n; i++) {
        if (mas[i] > 0) s++;
    }
    
    printf("%d\n", s);
    return 0;
}