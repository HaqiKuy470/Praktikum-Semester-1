#include <iostream>
#include <string>
#include <iomanip>
#include <limits> 
using namespace std;

int main() {
    string namaDosen, namaMahasiswa, nim, mataKuliah;
    double nilaiKeaktifan, nilaiTugas, nilaiUjian;
    double nilaiMurniKeaktifan, nilaiMurniTugas, nilaiMurniUjian;
    double nilaiAkhir;
    char nilaiHuruf;
    string nilaiHurufLengkap, motivasi;
    
    cout << "=====================================================" << endl;
    cout << "        UNIVERSITAS NEGERI MALANG (UM)" << endl;
    cout << "           FAKULTAS TEKNIK ELEKTRO" << endl;
    cout << "       SISTEM PENILAIAN AKHIR MAHASISWA" << endl;
    cout << "=====================================================" << endl;
    cout << endl;
   
    cout << "Nama Dosen       : ";
    getline(cin, namaDosen);
    
    cout << "Mata Kuliah      : ";
    getline(cin, mataKuliah);
    
    cout << endl;
    cout << "Nama Mahasiswa   : ";
    getline(cin, namaMahasiswa);
    
    cout << "NIM              : ";
    getline(cin, nim);
    cout << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "             INPUT NILAI KOMPONEN" << endl;
    cout << "-----------------------------------------------------" << endl;
 
    cout << "Nilai Keaktifan  : ";
    cin >> nilaiKeaktifan;

    if (cin.fail()) {
        cerr << "Error: Input tidak valid untuk Nilai Keaktifan. Harap masukkan angka." << endl;
        cin.clear(); // Clear the error flag
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return 1; // Exit with an error code
    }
    
    cout << "Nilai Tugas      : ";
    cin >> nilaiTugas;
    if (cin.fail()) {
        cerr << "Error: Input tidak valid untuk Nilai Tugas. Harap masukkan angka." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }
    
    cout << "Nilai Ujian      : ";
    cin >> nilaiUjian;

    if (cin.fail()) {
        cerr << "Error: Input tidak valid untuk Nilai Ujian. Harap masukkan angka." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        return 1;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (nilaiKeaktifan < 0 || nilaiKeaktifan > 100 ||
        nilaiTugas < 0 || nilaiTugas > 100 ||
        nilaiUjian < 0 || nilaiUjian > 100) {
        cout << endl;
        cout << "Error: Nilai harus berada dalam rentang 0-100!" << endl;
        return 1;
    }
    
    cout << endl;
    cout << "=====================================================" << endl;
    
    nilaiMurniKeaktifan = nilaiKeaktifan * 0.20;  // 20%
    nilaiMurniTugas = nilaiTugas * 0.30;           // 30%
    nilaiMurniUjian = nilaiUjian * 0.50;           // 50%

    nilaiAkhir = nilaiMurniKeaktifan + nilaiMurniTugas + nilaiMurniUjian;

    if (nilaiAkhir >= 0 && nilaiAkhir <= 44) {
        nilaiHurufLengkap = "E";
    } 
    else if (nilaiAkhir >= 45 && nilaiAkhir <= 55) {
        nilaiHurufLengkap = "D";
    } 
    else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) {
        nilaiHurufLengkap = "C";
    } 
    else if (nilaiAkhir >= 66 && nilaiAkhir <= 75) {
        nilaiHurufLengkap = "B-";
    } 
    else if (nilaiAkhir >= 76 && nilaiAkhir <= 80) {
        nilaiHurufLengkap = "B";
    } 
    else if (nilaiAkhir >= 81 && nilaiAkhir <= 85) {
        nilaiHurufLengkap = "B+";
    } 
    else if (nilaiAkhir >= 86 && nilaiAkhir <= 90) {
        nilaiHurufLengkap = "A-";
    } 
    else if (nilaiAkhir >= 91 && nilaiAkhir <= 100) {
        nilaiHurufLengkap = "A";
    }
    
    if (nilaiAkhir >= 0 && nilaiAkhir <= 55) {
        motivasi = "Maaf, Anda belum dapat diluluskan.\nTingkatkan terus belajar Anda.";
    } 
    else if (nilaiAkhir >= 56 && nilaiAkhir <= 65) {
        motivasi = "Anda lulus, tingkatkan lagi pencapaian Anda.";
    } 
    else if (nilaiAkhir >= 66 && nilaiAkhir <= 85) {
        motivasi = "Anda lulus dengan baik,\ntingkatkan terus prestasi Anda.";
    } 
    else if (nilaiAkhir >= 86 && nilaiAkhir <= 100) {
        motivasi = "Selamat! Anda lulus dengan nilai yang EXCELLENT!";
    }

    cout << "           LAPORAN NILAI AKHIR MAHASISWA" << endl;
    cout << "=====================================================" << endl;
    cout << fixed << setprecision(2);
    cout << "Dosen Pengampu   : " << namaDosen << endl;
    cout << "Mata Kuliah      : " << mataKuliah << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Nama Mahasiswa   : " << namaMahasiswa << endl;
    cout << "NIM              : " << nim << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "KOMPONEN PENILAIAN:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Nilai Keaktifan  : " << setw(6) << nilaiKeaktifan << endl;
    cout << "Nilai Tugas      : " << setw(6) << nilaiTugas << endl;
    cout << "Nilai Ujian      : " << setw(6) << nilaiUjian << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "PERHITUNGAN NILAI MURNI:" << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "Keaktifan (20%)  : " << setw(6) << nilaiMurniKeaktifan << endl;
    cout << "Tugas (30%)      : " << setw(6) << nilaiMurniTugas << endl;
    cout << "Ujian (50%)      : " << setw(6) << nilaiMurniUjian << endl;
    cout << "-----------------------------------------------------" << endl;
    cout << "NILAI AKHIR      : " << setw(6) << nilaiAkhir << endl;
    cout << "NILAI HURUF      : " << nilaiHurufLengkap << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << "MOTIVASI:" << endl;
    cout << motivasi << endl;
    cout << "=====================================================" << endl;
    
    return 0;
}	