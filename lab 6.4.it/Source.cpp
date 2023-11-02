#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void create(double* array, int n) {
    for (int i = 0; i < n; i++) {
        double num;
        cout << "Enter the element at index " << i << ": ";
        cin >> num;
        array[i] = num;
    }
}

int calculate_negative_count(const double* array, int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            count++;
        }
    }
    return count;
}

double calculate_sum_of_modulus(const double* array, int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += abs(array[i]);
    }
    return sum;
}

void replace_and_sort(double* array, int n) {
    for (int i = 0; i < n; i++) {
        if (array[i] < 0) {
            array[i] = pow(array[i], 2);
        }
    }
    sort(array, array + n);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    double* array = new double[n];
    create(array, n);

    int negative_count = calculate_negative_count(array, n);
    double sum_of_modulus = calculate_sum_of_modulus(array, n);
    replace_and_sort(array, n);

    cout << "The number of negative elements is: " << negative_count << endl;
    cout << "The sum of the modulus of the array elements located after the minimum element is: " << sum_of_modulus << endl;
    cout << "The modified array is: ";
    for (int i = 0; i < n; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    delete[] array; 
    return 0;
}
