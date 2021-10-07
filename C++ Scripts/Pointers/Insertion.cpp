#include <iostream>
using namespace std;

int main(){
    int *vet;//armazenamento
    int *p;//pointer p vetor
    int tam;//tamanho vetor
    int i;//aux
    int x;//num a inserir
    //input
    cin >> tam;
    vet = new int[tam];//alocando
    for(i = 0; i < tam; i ++){
        cin >> x;
        p = &x;
        vet[i] = *p;
    }
    //output
    for(i = 0; i < tam; i ++)
        cout << vet[i] << " ";

    delete [] vet;

    return 0;
}