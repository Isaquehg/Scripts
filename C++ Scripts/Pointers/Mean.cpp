#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int *vet = NULL;//vetor p armazenar
    int *p;//pointer p varrer
    int tam;//tamanho vet
    int i;//aux
    double med = 0.0;//media dos valores
    //input
    cin >> tam;
    vet = new int[tam];//alocando
    for(i = 0; i < tam; i ++)
        cin >> vet[i];
    //media
    for(i = 0; i < tam; i ++){
        p = &vet[i];
        med += *p;
    }
    med /= tam * 1.0;
    //output
    cout << fixed << setprecision(2);
    cout << med << endl;

    delete [] vet;
    delete p;
    
    return 0;
}