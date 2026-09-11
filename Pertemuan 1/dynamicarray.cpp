#include<iostream>
using namespace std;


int main(){
    int n;

    cout << "Masuka Jumlah Data : ";
    cin >> n;

    int*arra = new int[n];
    
    cout << "imputasi data\n";
    for(int i = 0; i < n; i++){
        cout << "data ke : " << i+1 << " : ";
        cin >> arra[i];
    }

    cout << "output data\n";
    for(int i = 0; i < n; i++){
        cout << "data ke : " << i+1 << " : ";
        
    }
    delete[] arra;
    return 0;
}
