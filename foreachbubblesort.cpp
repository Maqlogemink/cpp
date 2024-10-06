#include <iostream>
using namespace std;

void sort(int bilangan[],int x){
    for (int i = 0; i <x ; i++)
    {
        for (int j = 0; j < x-1; j++)
        {
            if (bilangan[j]>bilangan[j+1]){
                int tamp = bilangan[j];
                bilangan[j] = bilangan[j+1];
                bilangan[j+1] = tamp;
            }
        }
    }
}

int main()
{
    int x;
    cout << "Masukkan panjang array: "; cin >> x;
    int bilangan[x];
    cout <<"Masukkan nilai array: " << endl;
    for (int &i : bilangan)
    {
        cin >> i;
    }
    cout << "==SEBELUM SORTIR==" << endl;
    for (int &i : bilangan)
    {
        cout << i << " " << &i << " ";
    }
    
    sort(bilangan,x);
    cout << endl;
    cout << "==SESUDAH SORTIR==" << endl;
    for (int i : bilangan)
    {
        cout << i << " ";
    }
    
    return 0;
}
