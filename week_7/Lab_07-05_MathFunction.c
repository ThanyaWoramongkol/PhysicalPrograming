#include <stdio.h>

double getValue();
double findMin(double array[], int size);
double findMax(double array[], int size);
double findAvg(double array[], int size);

int main(){
    int n;
    scanf("%d", &n);

    double array[n];
    for (int i = 0; i < n; ++i){
        array[i] = getValue();
    }

    double min, max, avg;
    min = findMin(array, n);
    max = findMax(array, n);
    avg = findAvg(array, n);

    printf("%d Values\nMin: %.3lf\nMax: %.3lf\nAvg: %.3lf", n, min, max, avg);

    return 0;
}

double getValue(){
    double value;
    scanf("%lf", &value);

    return value;
}

double findMin(double array[], int size){
    double value, min;
    min = array[0];
    for (int i = 0; i < size; ++i){
        value = array[i];
        if (value < min){
            min = value;
        }
    }
    // printf("%.3lf ", min);
    return min;
}

double findMax(double array[], int size){
    double value, max = 0;
    for (int i = 0; i < size; ++i){
        value = array[i];
        if (value > max){
            max = value;
        }
    }
    // printf("%.3lf ", max);
    return max;
}

double findAvg(double array[], int size){
    double sum = 0;
    for (int i = 0; i < size; ++i){
        sum += array[i];
    }
    // printf("%.3lf/%d\n", sum, size);
    return sum / size;
}
