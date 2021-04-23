#include <iostream>
#include <string.h>
#include <string>

using namespace std;

class Method {
public:
    void dekripsi() {
        string normalteks, encrypteks;
        int i;
        char a;

        cout << "Ketikkan teks yang akan didekripsi : ";
        cin.ignore();
        getline(cin, encrypteks);

        for (i = 0; i < encrypteks.length(); i++) {
            a = encrypteks[i];
            if (isalpha(a)) {
                a = toupper(a);
                a = a - 65;
                if (a - 26 > 0) {
                    a = 26 + (a - 26);
                }
                else {
                    a = (a + 26) % 26;
                    a = a + 65;
                    a = tolower(a);
                }
                normalteks = normalteks + a;
            }
        }cout << "Hasil dekripsi : " << normalteks << endl;
    }
};

void enkripsi() {
    string normalteks, encrypteks;
    int i;
    char a;

    cout << "Ketikkan teks yang akan dienkripsi : ";
    cin.ignore();
    getline(cin, normalteks);

    for (i = 0; i < normalteks.length(); i++) {
        a = normalteks[i];
        if (isalpha(a)) {
            a = toupper(a);
            a = a - 65;
            a = (a + 26) % 26;
            a = a + 65;
        }
        encrypteks = encrypteks + a;
    }
    cout << "Hasil enkripsi teks : " << encrypteks << endl;
}

int main() {

    Method oke;
    int pil; 
    char lanjut;

    cout << " Kelompok 26 \n";
    cout << " Sift 2 \n";
    cout << " M. Yoga Ainur Rofiq - 21120120120005 \n";
    cout << " Nabila Rizqi Mahardika - 21120120120011 \n";
    cout << " Fajar Yumna Adani - 21120120130128 \n";
    cout << " Shiba Nurul Aisha - 21120120140136 \n";

    do {
        cout << "\n===== Menu =====" << endl;
        cout << "1. Enkripsi " << endl;
        cout << "2. Dekripsi " << endl;
        cout << "3. Keluar " << endl;
        cout << "Pilih Menu: "; 
        cin >> pil;
        switch (pil) {
        case 1: 
            enkripsi();
            break;
        case 2: 
            oke.dekripsi(); 
            break;
        case 3: 
            lanjut = 'n'; 
            break;
        default:
            cout << " Maaf INPUT salah, coba lagi!!" << endl;
            break;
        }
        cout << "Kembali ke MENU? (y/n) : ";
        cin >> lanjut;
    }while (lanjut == 'y');

    return 0;
}
