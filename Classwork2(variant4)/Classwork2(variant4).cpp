#include<iostream>
using namespace std;
void unpair_sum();
void sum_between_min_max();
void narrow_arr();
int main() {
    narrow_arr();
}
void unpair_sum() {
    int size;
    int sum = 0;
    cout << "Enter the size of the array:";
    cin >> size;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number:";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) {
            sum += arr[i];
        }
    }
    cout << endl << "The sum of the unpair numbers is:" << sum << endl;
}

void sum_between_min_max() {
    int size, min, max;
    float sum = 0;
    cout << "Enter the size of the array:";
    cin >> size;
    float* arr = new float[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number:";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        sum += arr[i];
        if (i == 0) {
            min = arr[0];
            max = arr[0];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    if (min == max) {
        cout << "All the numbers are equal!!!";
    }
    else {
        cout << endl << "The sum of the numbers between min and max is:" << sum - min - max << endl;
    }
}

void narrow_arr() {
    int size, sum = 0, counter = 0;
    cout << "Enter the size of the array:";
    cin >> size;
    float* arr = new float[size];
    float* new_arr = new float[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter the " << i + 1 << " number:";
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++) {
        if (arr[i] > 1 || arr[i] < -1) {
            new_arr[counter] = arr[i];
            counter++;
        }
    }
    cout << endl;
    for (int i = 0; i < size; i++) {
        cout << "The " << i + 1 << " element of new array:" << new_arr[i] << endl;
    }
}
