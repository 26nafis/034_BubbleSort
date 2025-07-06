#include <iostream>
using namespace std;

int arr[20];  // deklarasi array global dengan ukuran 20
int n;        // jumlah elemen dalam array

void input() {
    while (true) {
        cout << "Masukkan banyaknya elemen pada array (maksimal 20): ";
        cin >> n;

        if (n <= 20)
            break;
        else
            cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";
    }

    cout << "\n===================\n";
    cout << "Masukkan Elemen Array\n";
    cout << "===================\n";

    for (int i = 0; i < n; i++) {
        cout << "Data ke-" << (i + 1) << ": ";
        cin >> arr[i];
    }
}

void bubblesortArray() {
    int pass = 1;

    do {
        for (int j = 0; j <= n - 1 - pass; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass++;
    } while (pass <= n - 1);
}

void display() {
    cout << "\n=================================\n";
    cout << "Elemen array yang telah tersusun\n";
    cout << "=================================\n";

    for (int j = 0; j < n; j++) {
        cout << arr[j];
        if (j < n - 1)
            cout << " --> ";
    }

    cout << "\n\nJumlah pass = " << n - 1 << "\n\n";
}

int main() {
    input();
    bubblesortArray();
    display();

    return 0;
}