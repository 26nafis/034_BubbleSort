#include <iostream>
#include <string>
using namespace std;

int arr{20};        //deklarasi variable global array a dengan ukuran 20
int n;           //deklarasi variable global n untuk menyimpan banyaknya elemen pada array

void input (){   //procedur untuk input
    int d;
    while (true) {
        cout << "masukan banyaknya elemen pada array : ";  //output ke layar
        cin >> n;    //input dari pengguna
        if (n<=20)  //jika n kurang dari atau sama dengan 20
            break;    // keluar dari loop
        else {        //jika n lebih dari 20
             cout << "\nArray dapat mempunyai maksimal 20 elemen.\n";  //output ke layar
        }
    }
    cout << endl;
    cout << "===================" << endl;
    cout << "Masukan Elemen Array" << endl;
    cout << "===================" << endl;

    for (int i = 0; i <n; i++){
        cout << "Data ke-" << (i+1) << ";";
        cin >> arr[i];
    }
}
void bubblesortArray(){
    int pass = 1;  //step 1

    do
    {
        for (int j = 0; j <= n - 1 - pass; j++)
        {//step 2
            if (arr[j] > arr[j + 1]) //step 3
            {
                int temp;
                temp = arr [j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass = pass + 1; //step 4
    } while (pass <= n - 1);// step 5
    
}
