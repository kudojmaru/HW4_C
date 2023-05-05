#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char password[50];
    int low, punct, alpha, digit, table = 1;
    scanf("%s", &password);

    for (int i = 0; i <= strlen(password) - 1; i++){
        // проверка на символ нижнего регистра
        if (islower(password[i])) {
            low = 1;
        }
        // проверка на символ верхнего регистра
        if (isalpha(password[i])) {
            alpha = 1;
        }
        // проверка на цифру
        if (isdigit(password[i])) {
            digit = 1;
        }
        // проверка на символ пунктуации
        if (ispunct(password[i])){
            punct = 1;
        }
        // проверка на соответствие символов заданному дипазону
        if (password[i] < 33 || password[i] > 126) {
            table = 0;
        }
    }

    //проверяем пароль на 3 ограничения
    if ( (strlen(password) < 8 || strlen(password) > 14) || (alpha + digit + low + punct < 3) || table == 0){
        printf("NO\n");
    }else{
        printf("YES\n");
    }
    return 0;
}