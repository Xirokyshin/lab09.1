#include <iostream>
#include <cmath>
using namespace std;

// Макроси для основних операцій
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define SQUARE(a) ((a) * (a))

// Макрос для виведення результату
#define PRINT(w) puts("rezult:"); printf("w = %f\n", (float)(w))

// Умовна компіляція для включення/виключення формули 1
#define USE_FORMULA1 // коментуєм для використання іншої формули

// Макрос для умовної компіляції
#ifdef USE_FORMULA1
// Функції для обчислення w з різними формулами
double calculateWFormula1(double x, double y, double z) {
    return MIN(SQUARE(x - z), x - y);
}
#endif

double calculateWFormula2(double x, double y, double z) {
    return MAX(x - y, y - z);
}

// Функція для обчислення w на основі значення z
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

    // Введення значень змінних від користувача
    cout << "Enter values for x, y, and z: ";
    cin >> x >> y >> z;

    // Обчислення w
    double w = calculateW(x, y, z);

    // Виведення результату
    PRINT(w);

    return 0;
}
