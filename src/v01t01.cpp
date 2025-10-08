#include <iostream>
#include <cmath>
#include <iomanip>
#include <cassert>

using namespace std;

double computeSum(int n) {
    double s = 0.0;
    int sum = 0; // накапливаем 1+2+...+i
    for (int i = 1; i <= n; i++) {
        sum += i;
        s += cos(sum);
    }
    return s;
}

int main() {
    int n;
    cin >> n;
    cout << fixed << setprecision(6) << computeSum(n) << endl;
    return 0;
}

// #include <cmath>
// #include <vector>

// // Функция для вычисления суммы (предполагаемая реализация)
// double calculateCosSum(int n) {
//     if (n <= 0) return 0.0;
    
//     double total_sum = 0.0;
//     int current_sum = 0;
    
//     for (int i = 1; i <= n; ++i) {
//         current_sum += i;
//         total_sum += std::cos(current_sum);
//     }
    
//     return total_sum;
// }