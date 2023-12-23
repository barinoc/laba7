#include "zadacha_2.h"
#include <cmath>
// ����������� ������� ��� ���������� ����� ����
double sumOfSeries(double x, double epsilon, int& iterations) {
    double sum = 0.0;  // ���������� ��� �������� ����� ����
    double term = 1.0;  // ���������� ��� �������� �������� ����� ����
    iterations = 0;  // ���������� ��� �������� ���������� ��������

    // ���� ���������� ����� ���� �� ���������� �������� �������� epsilon
    while (fabs(term) > epsilon) {
        sum += term;  // ����������� �������� ����� � �����
        term = 1.0 / pow(x, ++iterations);  // ���������� ���������� ����� ����
    }

    return sum;  // ������� ������������ ����� ����
}