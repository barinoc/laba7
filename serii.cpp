#include "zadacha_2.h"
#include <cmath>
// Определение функции для вычисления суммы ряда
double sumOfSeries(double x, double epsilon, int& iterations) {
    double sum = 0.0;  // Переменная для хранения суммы ряда
    double term = 1.0;  // Переменная для хранения текущего члена ряда
    iterations = 0;  // Переменная для хранения количества итераций

    // Цикл вычисления суммы ряда до достижения заданной точности epsilon
    while (fabs(term) > epsilon) {
        sum += term;  // Прибавление текущего члена к сумме
        term = 1.0 / pow(x, ++iterations);  // Вычисление следующего члена ряда
    }

    return sum;  // Возврат рассчитанной суммы ряда
}