#include <stdio.h>
#include <iostream>
// Функция для разложения числа на простые множители
int simplefactor(int n, int* masfactor) {
    int count = 0;  // Счетчик простых множителей
    int divisor = 2;  // Начинаем с делителя 2

    while (n > 1) {
        // Если число делится на текущий делитель, то это простой множитель
        while (n % divisor == 0) {
            masfactor[count++] = divisor;
            n /= divisor;
        }
        // Переходим к следующему делителю
        divisor++;
    }

    return count;  // Возвращаем количество простых множителей
}

int main() {
    setlocale(LC_ALL, "Russian");
    int n;  // Заданное целое число
    std::cin >> n;
    int masfactor[100];  // Массив для хранения простых множителей

    // Вызываем функцию для разложения числа на простые множители
    int count = simplefactor(n, masfactor);

    // Выводим результат
    printf("Простые множители числа %d: ", n);
    for (int i = 0; i < count; i++) {
        printf("%d ", masfactor[i]);
    }

    return 0;
}
