#include <iostream>
using namespace std;

// Fungsi untuk setiap operasi
double tambah(double a, double b) {
    return a + b;
}

double kurang(double a, double b) {
    return a - b;
}

double kali(double a, double b) {
    return a * b;
}

double bagi(double a, double b) {
    if (b == 0) {
        cout << "Error: Pembagian dengan nol tidak diperbolehkan!" << endl;
        return 0;
    }
    return a / b;
}

int main() {
    double num1, num2, hasil;
    char op;
    char pilihan; // untuk melanjutkan atau berhenti

    cout << "===== Kalkulator Sederhana =====" << endl;

    // Perulangan supaya bisa menghitung berkali-kali
    do {
        // Input ekspresi (contoh: 12 + 7)
        cout << "\nMasukkan perhitungan (contoh: 10 + 5): ";
        cin >> num1 >> op >> num2;

        // Pilih operasi berdasarkan operator
        switch (op) {
            case '+':
                hasil = tambah(num1, num2);
                break;
            case '-':
                hasil = kurang(num1, num2);
                break;
            case '*':
            case 'x':
            case 'X':
                hasil = kali(num1, num2);
                break;
            case '/':
                hasil = bagi(num1, num2);
                break;
            default:
                cout << "Operator tidak valid!" << endl;
                continue; // lompat ke awal loop
        }

        // Tampilkan hasil
        cout << "Hasil: " << hasil << endl;

        // Tanya user apakah mau lanjut
        cout << "Apakah ingin menghitung lagi? (y/n): ";
        cin >> pilihan;

    } while (pilihan == 'y' || pilihan == 'Y');

    cout << "Terima kasih sudah menggunakan kalkulator!" << endl;
    return 0;
}
