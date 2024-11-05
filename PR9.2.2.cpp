#include <iostream>
#include <cmath>
using namespace std;

// ������� ��� �������� ��������
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(a) ((a) * (a))

// ������ ��� ��������� ����������
#define PRINT(w) puts("rezult:"); printf("w = %f\n", (float)(w))

// ������ ��������� ��� ���������/���������� ������� 1
#define USE_FORMULA1 // �������� ��� ������������ ���� �������

// ������ ��� ������ ���������
#ifdef USE_FORMULA1
// ������� ��� ���������� w � ������ ���������
double calculateWFormula1(double x, double y, double z) {
    return MIN(SQUARE(x - z), x - y);
}
#endif

double calculateWFormula2(double x, double y, double z) {
    return MAX(x - y, y - z);
}

// ������� ��� ���������� w �� ����� �������� z
double calculateW(double x, double y, double z) {
#ifdef USE_FORMULA1
    if (z > 1) {
        return calculateWFormula1(x, y, z);
    }
#endif
    return calculateWFormula2(x, y, z);
}

int main() {
    double x, y, z;

    // �������� ������� ������ �� �����������
    cout << "Enter values for x, y, and z: ";
    cin >> x >> y >> z;

    // ���������� w
    double w = calculateW(x, y, z);

    // ��������� ����������
    PRINT(w);

    return 0;
}
