#include <iostream>

using namespace std;

int main(){
    int *vet;//vet p armazenamento
    int *p;//pointer aux
    int i;//aux;
    int tam;//tamanho
    int pospar = 0;//numeros positivos e pares
    //input
    cin >> tam;
    vet = new int[tam];
    for(i = 0; i < tam; i ++)
        cin >> vet[i];
    //encontrando positivos e pares
    for(i = 0; i < tam; i ++){
        p = &vet[i];
        if((*p > 0) && (*p % 2 == 0))
            pospar ++;
    }
    //output
    cout << pospar << endl;

    delete [] vet;

    return 0;
}