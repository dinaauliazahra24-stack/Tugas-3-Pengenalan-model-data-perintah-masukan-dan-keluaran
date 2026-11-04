#include <iostream>
using namespace std;

int main() {
    string npm, nama;
    float tugas1, tugas2, tugas3, rata;

    cout << "PROGRAM HITUNG NILAI RATA-RATA" << endl;
    cout << "NPM Siswa = ";
    cin >> npm;

    cin.ignore();
    cout << "Nama Siswa = ";
    getline(cin, nama);

    cout << "Nilai Tugas I = ";
    cin >> tugas1;

    cout << "Nilai Tugas II = ";
    cin >> tugas2;

    cout << "Nilai Tugas III = ";
    cin >> tugas3;

    rata = (tugas1 + tugas2 + tugas3) / 3;

    cout << endl;
    cout << "NPM " << npm << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Memperoleh nilai rata-rata dari hasil tugas yang diikutinya = "
         << rata << endl;

    return 0;
}
