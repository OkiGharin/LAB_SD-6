#include<iostream>
using namespace std;

int main(){
    int m1[2][3][4];
    for(int i = 0; i < 2; i++){
        cout << "Mahasiswa Ke- : " << i+1 << endl;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                cin >> m1[i][j][k] ;
            }
            cout << "\n";
        }
        
    }
    
    for(int i = 0; i < 2; i++){
        cout << "Mahasiswa Ke- : " << i+1 << endl;
        for(int j = 0; j < 3; j++){
            for(int k = 0; k < 3; k++){
                cout << m1[i][j][k] ;
            }
            cout << "\n";
        }
        
    }
}