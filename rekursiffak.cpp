#include <iostream>
using namespace std;

double fak(int x){
    if (x==0){return 1;}
    return x*fak(x-1);
}

int main()
{
    int x;cin>>x;
    cout << fak(x);

    return 0;
}
