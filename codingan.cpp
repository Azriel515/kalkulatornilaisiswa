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

int main() {
    char lanjut;
    
    do {
        Siswa siswa;
        cout << "Masukkan nama siswa: ";
        getline(cin, siswa.nama); // Dapatkan nama siswa dengan getline untuk mengatasi masalah buffer
        cout << "Masukkan nilai tugas: ";
        cin >> siswa.nilaiTugas;
        cout << "Masukkan nilai kuis: ";
        cin >> siswa.nilaiKuis;
        cout << "Masukkan nilai ujian: ";
        cin >> siswa.nilaiUjian;

        cin.ignore(); // Membersihkan newline character dari buffer

        float nilaiAkhir = hitungNilaiAkhir(siswa);
        cout << "Nilai akhir " << siswa.nama << " adalah " << nilaiAkhir << endl;

        hitungRataRataBobot(siswa);
        hitungAmbangNilai(siswa, nilaiAkhir);

        cout << "Lanjutkan input data siswa? (y/n): ";
        cin >> lanjut;
        cin.ignore(); // Membersihkan newline character dari buffer
    } while (lanjut == 'y' || lanjut == 'Y');

    return 0;
}