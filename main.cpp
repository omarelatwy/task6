#include <iostream>
using namespace std;

// Question 1
int sum(int a, int b) {
    return a + b;
}

// Question 2
long long factorial(int n) {
    long long fact = 1;
    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Question 3
void checkPrime(int n) {
    if (n <= 1) {
        cout << "Not Prime" << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "Not Prime" << endl;
            return;
        }
    }
    cout << "Prime" << endl;
}

// Question 4
double findAverage(int arr[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total / size;
}

// Question 5
string evenOrOdd(int n) {
    if (n % 2 == 0) {
        return "even";
    } else {
        return "odd";
    }
}

// Question 6
int greaterNumber(int a, int b) {
    return (a > b) ? a : b;
}

// Question 7
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Question 8
int largestElement(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

// Question 9
int sumArray(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;
}

// Question 10
void multiplicationTable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " * " << i << " = " << (n * i) << endl;
    }
}

int main() {
    int myArr[] = {5, 10, 15, 20};
    int size = 4;

    cout << "Average: " << findAverage(myArr, size) << endl;

    return 0;
}
