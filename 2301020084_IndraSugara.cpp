#include <iostream>
#include <conio.h>
using namespace std;

class KUCING{
    public:
        int kaki = 4;

    public: void kemampuan(int jarak){
        cout << "Bisa Berlari Sejauh: " << jarak <<" m" << endl;
    }
};

class BURUNG{
    public:
        int sayap = 2;

    public: void kemampuan(int jarak){
        cout << "Bisa Terbang Sejauh: " << jarak << " m" << endl;
    }
};

int main()
{
    KUCING kucing1;
    BURUNG burung;
    cout << "Kaki Kucing: " << kucing1.kaki << endl;
    kucing1.kemampuan(3);
    cout << "Sayap Burung: " << burung.sayap << endl;
    burung.kemampuan(5);

    return 0;
}