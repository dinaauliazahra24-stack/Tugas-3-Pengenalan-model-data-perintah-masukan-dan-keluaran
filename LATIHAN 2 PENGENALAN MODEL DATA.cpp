#include <iostream>
using namespace std;

int main() {
    string nama;
    float aktif, tugas, ujian;
    float murniAktif, murniTugas, murniUjian, akhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;

    cout << "Nama Siswa = ";
    getline(cin, nama);

    cout << "Nilai Keaktifan = ";
    cin >> aktif;

    cout << "Nilai Tugas = ";
    cin >> tugas;

    cout << "Nilai Ujian = ";
    cin >> ujian;

    murniAktif = aktif * 20 / 100;
    murniTugas = tugas * 30 / 100;
    murniUjian = ujian * 50 / 100;

    akhir = murniAktif + murniTugas + murniUjian;

    cout << endl;
    cout << "Siswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:" << endl;
    cout << "Nilai Keaktifan * 20% = " << murniAktif << endl;
    cout << "Nilai Tugas * 30% = " << murniTugas << endl;
    cout << "Nilai Ujian * 50% = " << murniUjian << endl;

    cout << "Jadi Siswa yang bernama " << nama
         << " memperoleh nilai akhir sebesar "
         << akhir << endl;

    return 0;
}
