#include "compute.h"

double computeSum(int n) {
    double s = 0.0;
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
        s += cos(sum);
    }
    return s;
}