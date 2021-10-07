#include <iostream>

using namespace std;

int main(){
    int *vet = NULL;//vetor
    int tam;//tamanho vetor
    int maior = -100000;//maior num
    int *p;//pointer p maior
    int i;//aux
    //input
    cin >> tam;
    vet = new int[tam];
    for(i = 0; i < tam; i ++)
        cin >> vet[i];
    //encontrando o maior
    for(i = 0; i < tam; i ++){
        p = &vet[i];
        if(maior < *p)//se for menor q o elemento atual
            maior = *p;
    }
    //output
    cout << maior << endl;
    //garbage collection
    delete [] vet;
    delete p;

    return 0;
}