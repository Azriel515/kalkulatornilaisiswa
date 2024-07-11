#include <iostream>
#include <string>

using namespace std;

float hitungNilaiAkhir(Siswa siswa) {
    return (siswa.nilaiTugas * 0.3) + (siswa.nilaiKuis * 0.2) + (siswa.nilaiUjian * 0.5);
}