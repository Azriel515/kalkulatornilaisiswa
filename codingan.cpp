#include <iostream>
#include <string>

using namespace std;

void hitungRataRataBobot(Siswa siswa) {
    float rataRataBobot = (siswa.nilaiTugas + siswa.nilaiKuis + siswa.nilaiUjian) / 3.0;
    cout << "Rata-rata bobot " << siswa.nama << " adalah " << rataRataBobot << endl;
}