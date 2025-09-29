#include <iostream>
using namespace std;

void tampilkanNilai(int arr[], int ukuran) {
    for (int i = 0; i < ukuran; i++) {
        cout << arr[i] << " ";
    }
    cout << endl; 
}

int main() {
    int nilaiMahasiswa[] = {75, 90, 60, 85, 70, 95, 80, 55};
    int n = sizeof(nilaiMahasiswa) / sizeof(nilaiMahasiswa[0]);
    
    cout << "Nilai Awal Mahasiswa (Belum Diurutkan): " << endl;
    tampilkanNilai(nilaiMahasiswa, n);
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (nilaiMahasiswa[j] > nilaiMahasiswa[j + 1]) {
                int temp = nilaiMahasiswa[j];
                nilaiMahasiswa[j] = nilaiMahasiswa[j + 1];
                nilaiMahasiswa[j + 1] = temp;
            }
        }
    }

    cout << "\nNilai Mahasiswa Setelah Diurutkan (Terkecil ke Terbesar): " << endl;
    tampilkanNilai(nilaiMahasiswa, n);
    
    return 0;
}
