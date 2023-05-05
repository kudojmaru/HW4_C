#include <stdio.h>


int main() {
    int month, year;
    scanf("%d %d", &month, &year);
    // посчитаем кол-во дней в феврале високосного года
    if ( month == 2 && year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) ){
        printf("29\n");
    }
    // если год не високосный, в феврале 28 дней
    else if (month == 2){
        printf("28\n");
    }

    // перебираем все остальные месяцы по 30 дней
    else if (month ==  4 || month == 6 || month == 9 || month == 11) {
        printf("30\n");
    }
    // оставшиеся месяца имеют по 31 дню
    else {
        printf("31\n");
    }
    return 0;
}