#include <stdio.h>
#include <math.h>

// É PRA SER um código pra achar o coeficiente de correlação entre n variáveis inseridas pelo user. 
// Como não tenho tanto conhecimento assim de estatística, não testei o suficiente pra saber se está certo ainda

double mean(double values[], int size) {
double sum = 0;
for (int i = 0; i < size; i++) {
sum += values[i];
}
return sum / size;
}

double variance(double values[], int size) {
double meanValue = mean(values, size);
double sum = 0;
for (int i = 0; i < size; i++) {
sum += pow(values[i] - meanValue, 2);
}
return sum / (size - 1);
}

double covariance(double x[], double y[], int size) {
double meanX = mean(x, size);
double meanY = mean(y, size);
double sum = 0;
for (int i = 0; i < size; i++) {
sum += (x[i] - meanX) * (y[i] - meanY);
}
return sum / (size - 1);
}

double correlationCoefficient(double x[], double y[], int size) {
double covarianceXY = covariance(x, y, size);
double varianceX = variance(x, size);
double varianceY = variance(y, size);
return covarianceXY / sqrt(varianceX * varianceY);
}

int main() {
int size;
printf("Insira o número de elementos: ");
scanf("%d", &size);

double x[size], y[size];
for (int i = 0; i < size; i++) {
    printf("Insira o valor de x[%d]: ", i);
    scanf("%lf", &x[i]);
    printf("Insira o valor de y[%d]: ", i);
    scanf("%lf", &y[i]);
}

double coefficient = correlationCoefficient(x, y, size);
printf("O coeficiente de correlação linear é: %lf\n", coefficient);

return 0;
}