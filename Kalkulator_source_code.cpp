#include <iostream>
#include <cmath>
#include <string>
// 3 header yang akan gw masukin kedalam sini

using namespace std;

// dibawah ini adalah beberapa function aritmatika dan menggunakan metode Prototipe
long Tambah(long a, long b); // tambah
long Kurang(long a, long b); // kurang
long Kali(long a, long b); // kali
long Bagi(long a, long b); // pembagian
long Modulus(long a, long b); // modulus/sisa bagi
// Oke diatas adalah kumpulan prototipe pada function aritmatika
long NilaiPangkat(long a, long b) {
    long hasil = a;
    for( long i = 1; i < b; i++) {
        hasil *= a; // merupakan operator assignment, bisa juga hasil = hasil * a;
    }
    return hasil;
}
// diatas adalah function pangkat dengan metode rekursif

void Kuadrat(long a, long b) {
    long jumlah1 = sqrt(a);
    long jumlah2 = sqrt(b);
    cout << "- Jumlah akar kuadrat dari " << a << " adalah " << jumlah1 << endl; // ini adalah jumlahnya
    cout << "- JUmlah akar kuadrat dari " << b << " adalah " << jumlah2 << endl; // jumlah yang keduanya
}
void HasilAnd(long a, long b);
void HasilOr(long a, long b); 
// prototipe function

int main() {
    cout << "\n                    ===== MYCAL =====                    \n" << endl; // welcomes for user
    cout << "Description: Software ini merupakan alat kalkulator sederhana\n";
    cout << "Yang dilengkapi dengan komparasi perbandingan, operator logika\n";
    cout << "Kuadrat dan pangkat, oleh karena itu mengapa software ini sangat berbeda\n";
    cout << "dengan yang lainnya.\n";
    for(int garis = 1; garis <= 2; garis++) {
        for(int garis2 = 1; garis2 <= 40; garis2++) {
            cout << "-";
        }
        cout << endl;
    }

    cout << "Software ini dideveloperi oleh : " << endl;
    string nama_developer[5] = {"Dwayne bruce pras", "Dava daprot", "Diva suwaru", "Lindil L taylor", "Radit ilsky"};
    // array buat nampung ini semuanya
    for(int i = 0; i < 5; i++) {
        cout << "Nama ke -" << (i+1) << " adalah " << nama_developer[i] << endl;
        continue;
    } // diatas itu adalah nama-nama developernya
    cout << endl; // akhir dari program ini

    cout << "License: Software ini tentu saja sangatlah gratis dan open source, yang artinya\n";
    cout << "User bisa memodifikasi/merubah source code yang ada didalamnya tanpa kena tuntut\n";
    cout << "Sekalipun." << endl << endl; // endline atau akhir dari program ini
    
    long x, y, hasil; // these are also declaration variable
    char operand; // variable operator
    char pilihan; // declaration variable
    cout << "Tekan Y untuk melanjutkan program, tekan N untuk menghentikan programnya\n";
    cin >> pilihan; // inputanya
    if( pilihan == 'y' ) {
        cout << "1. Masukan angka pertama : ";
        cin >> x;
        // inputan pertamanya
        cout << "2. Masukan operator \n";
        cout << "Contoh: +,-,x,/, dan % : ";
        cin >> operand;
        // inputan operator
        cout << "3. Masukan angka kedua : ";
        cin >> y;
        // inputan ketiganya

        cout << "\n               ===== HASIL DAN INFORMASI =====               \n" << endl; // ini adalah hasilnya

        switch(operand) {
            case '+':
            cout << "Hasil dari " << x << " + " << y << " = " << Tambah(x, y) << endl;
            break; // hasil pertambahanya

            case '-':
            cout << "Hasil dari " << x << " - " << y << " = " << Kurang(x, y) << endl;
            break; // hasil penguranganya

            case 'x':
            cout << "Hasil dari " << x << " x " << y << " = " << Kali(x, y) << endl;
            break;

            case '/':
            cout << "Hasil dari " << x << " / " << y << " = " << Bagi(x, y) << endl;
            break;

            case '%':
            cout << "Hasil dari " << x << " % " << y << " = " << Modulus(x, y) << endl;
            break;

            default:
            cout << "Operator yang anda masukan tidak tersedia \n" << endl;
            int perulangan1 = 1;
            while( perulangan1 <= 500 ) {
                cout << "Error 405: kesalahan masukan user on " << perulangan1 << endl;
                perulangan1++;
                if( perulangan1 == 491 ) {
                    break;
                }
            }
        }
        cout << "Hasil pangkatnya adalah " << NilaiPangkat(x, y) << " << Nilai pangkatnya 3 kali" << endl; // ini adalah hasil pangkatnya
        Kuadrat(x, y);
    } else if( pilihan == 'n' ) {
        cout << "Oke..." << endl;
    } else  {
        cout << "\nMasukan anda tidak dapat dikenali oleh program\n" << endl;
        int perulangan2 = 50;
        do{
            if( perulangan2 == 10 ) {
                perulangan2--;
                continue;
            }
            cout << "Error based on 404: lol on " << perulangan2 << endl;
            perulangan2--;
        } while( perulangan2 >= 1 );
    }
    // diatas itu adalah aritmatika sederhana nya

    cout << "\n               ===== KOMPARASI DAN OPERATOR LOGIKA =====               \n" << endl; // segmen keduanya
    int hasil1, hasil2, hasil3, hasil4, hasil5, hasil6; // di deklarasi dulu
    hasil1 = (x > y);
    hasil2 = (x < y);
    hasil3 = (x >= y);
    hasil4 = (x <= y);
    hasil5 = (x == y);
    hasil6 = (x != y);
    cout << x << " Lebih besar dari " << y << " = " << hasil1 << endl;
    cout << x << " Lebih kecil dari " << y << " = " << hasil2 << endl;
    cout << x << " Lebih besar sama dengan dari " << y << " = " << hasil3 << endl;
    cout << x << " Lebih kecil sama dengan dari " << y << " = " << hasil4 << endl;
    cout << x << " Sama dengan " << y << " = " << hasil5 << endl;
    cout << x << " Tidak sama dengan " << y << " = " << hasil6 << endl << endl; // akhir dari program

    cout << hasil1 << " And " << hasil2 << " = ";
    HasilAnd(hasil1, hasil2);
    // And nya
    cout << hasil2 << " And " << hasil3 << " = ";
    HasilAnd(hasil2, hasil3);
    // And nya
    cout << hasil4 << " And " << hasil5 << " = ";
    HasilAnd(hasil4, hasil5);
    // And nya
    cout << hasil5 << " And " << hasil6 << " = ";
    HasilAnd(hasil5, hasil6);
    cout << endl;
    // And nya
    // ok, diatas itu adalah hasil And nya

    cout << hasil1 << " Or " << hasil2 << " = ";
    HasilOr(hasil1, hasil2);
    // Or nya
    cout << hasil2 << " Or " << hasil3 << " = ";
    HasilOr(hasil2, hasil3);
    // Or nya
    cout << hasil4 << " Or " << hasil5 << " = ";
    HasilOr(hasil4, hasil5);
    // Or nya
    cout << hasil5 << " Or " << hasil6 << " = ";
    HasilOr(hasil5, hasil6);
    // Or nya
    cout << endl;
    // akhir dari operator logikanya

    cout << "Note: 1 Merupakan boolean True yang artinya benar, sedangkan 0 \n";
    cout << "Merupakan boolean False yang artinya salah." << endl;
    cin.get();
    return 0;
}
// hasil proses function ada dibawah ini

long Tambah(long a, long b) {
    return a + b;
} // hasil tambahnya

long Kurang(long a, long b) {
    return a - b;
} // hasil penguranganya

long Kali(long a, long b) {
    return a * b;
} // hasil perkalian

long Bagi(long a, long b) {
    return a / b;
} // hasil pembagian

long Modulus(long a, long b) {
    return a % b;
} // hasil modulus atau sisa bagi

void HasilAnd(long a, long b) {
    long hasil = a and b;
    cout << hasil << endl;
} // hasil operator and nya
void HasilOr(long a, long b) {
    long hasil = a or b;
    cout << hasil << endl;
} // hasil operator or nya