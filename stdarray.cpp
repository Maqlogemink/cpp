#include <iostream>
#include <array>
using namespace std;

int main(int argc, char const *argv[])
{
    array <int, 5> nilai;
                //function ukuran array
    for(int i=0; i<nilai.size(); i++){
        nilai[i] = i;
        cout << "i = " << nilai[i] << endl; 
    }
    //address awal
    cout << nilai.begin() << endl;
    //address akhir
    cout << nilai.end() << endl;
    //nilai dengan index
    cout << nilai.at(3) << endl;

    return 0;
}
