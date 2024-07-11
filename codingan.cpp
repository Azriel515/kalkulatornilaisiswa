#include <iostream>
#include <string>

using namespace std;

struct Siswa {
    string nama;
    int nilaiTugas;
    int nilaiKuis;
    int nilaiUjian;
};

float hitungNilaiAkhir(Siswa siswa) {
    return (siswa.nilaiTugas * 0.3) + (siswa.nilaiKuis * 0.2) + (siswa.nilaiUjian * 0.5);
}

void hitungRataRataBobot(Siswa siswa) {
    float rataRataBobot = (siswa.nilaiTugas + siswa.nilaiKuis + siswa.nilaiUjian) / 3.0;
    cout << "Rata-rata bobot " << siswa.nama << " adalah " << rataRataBobot << endl;
}

void hitungAmbangNilai(Siswa siswa, float nilaiAkhir) {
    float ambangNilai = 60;
    if (nilaiAkhir >= ambangNilai) {
        cout << siswa.nama << " lulus dengan nilai " << nilaiAkhir << endl;
    } else {
        cout << siswa.nama << " tidak lulus dengan nilai " << nilaiAkhir << endl;
    }
}