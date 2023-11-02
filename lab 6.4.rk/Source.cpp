#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

void create(double* array, int index, int n) {
    if (index == n) {
        return;
    }

    double num;
    cout << "Enter the element at index " << index << ": ";
    cin >> num;
    array[index] = num;

    create(array, index + 1, n);
}

int calculate_negative_count(const double* array, int index, int n, int count) {
    if (index == n) {
        return count;
    }

    if (array[index] < 0) {
        count++;
    }

    return calculate_negative_count(array, index + 1, n, count);
}

double calculate_sum_of_modulus(const double* array, int index, int n, double sum) {
    if (index == n) {
        return sum;
    }

    sum += abs(array[index]);

    return calculate_sum_of_modulus(array, index + 1, n, sum);
}

void replace_elements_with_squares(double* array, int index, int n) {
    if (index == n) {
        return;
    }

    if (array[index] < 0) {
        array[index] = pow(array[index], 2);
    }

    replace_elements_with_squares(array, index + 1, n);
}

void recursive_sort(double* array, int n) {
    if (n == 1) {
        return;
    }

    for (int i = 0; i < n - 1; i++) {
        if (array[i] > array[i + 1]) {
            swap(array[i], array[i + 1]);
        }
    }

    recursive_sort(array, n - 1);
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    double* array = new double[n];
    create(array, 0, n);

    int negative_count = calculate_negative_count(array, 0, n, 0);
    double sum_of_modulus = calculate_sum_of_modulus(array, 0, n, 0);
    replace_elements_with_squares(array, 0, n);
    recursive_sort(array, n);

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
