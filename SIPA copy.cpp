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
        cout<< "\n Masukkan nim mahasiswa: "; cin >> nim;
    }
    void get_data(){
        cout<< "Masukkan nim mahasiswa: "; cin >> nim;
        
        if (nim=2301020084)
        {
        cout << "LIHS Matakuliah" << endl;
        cout << "Nama Mahasiswa: " << "Indra Sugara" << endl;
        cout << "NIM: " << "2301020084" << endl;
        cout << "Matakuliah: " << "" << endl;
        cout << "Kode mk: " << kd_mk << endl;
        cout << "Dosen pengampu: " << nama << endl;
        cout << "NIP: " << nip << endl;
            
        }
        
    }
};

int main(int argc, char const *argv[])
{
    LIHS SIPA1;
    LIHS SIPA2;
    LIHS SIPA3;
    LIHS SIPA4;

    SIPA.set_data();
    SIPA.get_data();
    return 0;
}

