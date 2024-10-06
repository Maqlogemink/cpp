#include <iostream>
using namespace std;

int Pang(int bil, int pang){
    if (pang == 1) {return bil;}
    return bil*Pang(bil,(pang-1));
    
}

int main()
{
    int bil,pang;cin >>bil;cin>>pang;
    cout << Pang(bil,pang);


    return 0;
}