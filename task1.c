#include <stdio.h>
#include <math.h>


int main(){
    float s,c,x;
    scanf_s("%f%f", &c, &x);
    s = log((c * exp((-2.5 * c + x) + pow(atan(fabs(c - x)), 2)) / (pow(-1, -2.5 * c) + sqrt (fabs(log(fabs(x)) + log10(fabs(c))))))) / log(c);
    float k, m, y;
    scanf_s("%f%f", &m, &y);
    k = sqrt(pow(sin(m * y), 2) + pow(cos(y /m), 2) + 0.64) / (log10(fabs(m * y)) + log (fabs(pow(m, 2) - pow(y, 3))) + exp(-(m - y)));
}