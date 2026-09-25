#include<iostream>
using namespace std;

struct node {
    node* kiri:
    node* kanan:
};

node* akar = NULL;

void addNote(node** akar int value){
    if(*akar == NULL){
        node* baru = new node;
        baru -> data = value;
        baru -> kanan = NULL;
        baru -> kiri = NULL;
        *akar = baru;
    }
}

void inOrder(node* akar){
    if (akar != NULL){
        inOrder(akar -> kiri);
        cout(akar -> data) << " ";
        inOrder(akar -> kanan);
    }
}

void preOrder(node* akar){
    if (akar != NULL){
        cout << akar -> data << " ";
        inOrder(akar -> kiri);
        inOrder(akar -> kanan);
    }
}

void postOrder(node* akar){
    if (akar != NULL){
        inOrder(akar -> kiri);
        inOrder(akar -> kanan);
        cout <<akar -> data << " ";
    }
}

int main(){
    system("cls");

    // membentuk sebuah tree
    addNode(&akar, 15);
    addNode(&akar, -> kiri, 27);
    addNode(&akar, -> kanan, 30);
    addNode(&akar, -> kiri -> kiri, 25);
    addNode(&akar, -> kiri -> kanan, 29);

    // traversal tree

    cout << "Tampilan InOrder : ";
    inOrder(akar);
    
    cout << "Tampilan reOrder : ";
    preOder(akar);
    
    cout << "Tampilan postOrder : ";
    PostOrder(akar);
}