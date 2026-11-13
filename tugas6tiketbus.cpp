
#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama;
    string tujuan[3] = {"surabaya", "pasuruan", "jombang"};
    int harga[3] = {35000, 20000, 25000};
    int pilih, jumlah, total;

    cout << "-------------TIKET BUS----------------" << endl;
    cout << "1. Malang ke Surabaya Rp35.000" << endl;
    cout << "2. Malang ke Pasuruan Rp20.000" << endl;
    cout << "3. Malang ke Jombang Rp25.000" << endl;
    cout << "--------------------------------------" << endl;

    cout << "Pilih tujuan: ";
    cin >> pilih;

    if (pilih == 1) {
        cout << "Malang ke " << tujuan[0] << endl;
    }
    else if (pilih == 2) {
        cout << "Malang ke " << tujuan[1] << endl;
    }
    else if (pilih == 3) {
        cout << "Malang ke " << tujuan[2] << endl;
    }
    else {
        cout << "Tujuan tidak tersedia" << endl;
        return 0;
    }

    cout << "Nama penumpang: ";
    cin >> nama;

    cout << "Jumlah penumpang: ";
    cin >> jumlah;

    total = harga[pilih - 1] * jumlah;

    cout << "========= TOTAL =========" << endl;
    cout << "Nama: " << nama << endl;
    cout << "Tujuan: " << tujuan[pilih - 1] << endl;
    cout << "Jumlah penumpang: " << jumlah << endl;
    cout << "Total harga: Rp" << total << endl;
    cout << "=========================" << endl;

    system("pause");

    return 0;
}
