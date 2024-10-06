#include<iostream>
#include<array>

using namespace std;

int main(){
    array < int, 5 > nilai;

    for (int i = 0; i <= 4; i++)
    {
        nilai[i] = i+1;
        cout << "Nilai [" << i << "] = " << nilai[i];
        cout << " adress: " << &nilai[i] << endl;
    }

    cout << "jumlah array: " << nilai.size() << endl;
    cout << "adress awal: " << nilai.begin() << endl;
    cout << "adress akhir: " << nilai.end() << endl;   

    return 0;
}

