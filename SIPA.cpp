#include <iostream>

using namespace std;

class Dosen
{
    protected:
    int nip;
    string nama;
};
class Matakuliah : public Dosen
{
protected:
     string nama_mk;
     int kd_mk;
};
class Mahasiswa
{
    protected:
    int nim;
    string _nama;
};
class LIHS : public Mahasiswa, public Matakuliah
{ public:
    void set_data () {
        cout << "Masukkan nama mata kuliah: "; getline(cin, nama_mk);
        cout<< "\n Masukkan kode matakuliah: "; cin >> kd_mk; cin.ignore();
        cout<< "\n Masukkan nama dosen pengampu: "; getline(cin, nama);
        cout<< "\n Masukkan nip dosen: "; cin >> nip; cin.ignore();
        cout<< "\n Masukkan nama mahasiswa: "; getline(cin, _nama);
        cout<< "\n Masukkan nim mahasiswa: "; cin >> nim;
    }
    void get_data(){
        cout << "LIHS Matakuliah" << endl;
        cout << "Nama Mahasiswa: " << _nama << endl;
        cout << "NIM: " << nim << endl;
        cout << "Matakuliah: " << nama_mk << endl;
        cout << "Kode mk: " << kd_mk << endl;
        cout << "Dosen pengampu: " << nama << endl;
        cout << "NIP: " << nip << endl;
    }
};

int main(int argc, char const *argv[])
{
    LIHS SIPA;

    SIPA.set_data();
    SIPA.get_data();
    return 0;
}

