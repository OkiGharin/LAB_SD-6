#include<iostream>
#include<stack>
using namespace std;

int main(){
    system("cls");
    stack<float> stck;
    float input;

    while(cin>>input){
        stck.push(input);
    }

    do{
        cout << stck.top() << " ";
        stck.pop();
    }while (stck.size() != 0);

    cout << endl;
    system("pause");
    return 0;;
}