#include <iostream>

using namespace std;

int itFibo(int n, int acc1, int acc2) {
    if (n == 1 || n == 2) {
        return acc2;
    } else {
        return itFibo(n-1, acc2, acc1 + acc2);
    }
}

int recFibo(int n) {
    if (n == 1 || n==2) {
        return 1;
    } else {
        return recFibo(n-1) + recFibo(n-2);
    }
}





int main() {
    cout << "Fibonacci Iterative" << endl;
    cout << itFibo(5, 1, 1) << endl;
    cout << itFibo(8, 1, 1) << endl;
    cout << itFibo(9, 1, 1) << endl;
    cout << "Fibonacci Recursive" << endl;
    cout << recFibo(5) << endl;
    cout << recFibo(8) << endl;
    cout << recFibo(9) << endl;
    cout << recFibo(12) << endl;
    return 0;
}