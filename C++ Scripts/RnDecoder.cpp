#include <iostream>

using namespace std;

int main(){
    int n;//numero de repeticoes
    int bit[100];//bits inseridos
    int bitrec[100]; //bits recuperados
    int cont1 = 0, cont2 = 0, cont3 = 0;//contadores
    int zeros = 0, ums = 0; //numero de 0 e 1
    int numbit = 0;//numero total de bits entrados
    int seq = 0;//quantidade de sequencias

    //entrar com o numero de repetições
    cin >> n;
    //entrar com os bits até -1
    bit[0] = 0;
    while(bit[cont1] != -1){
        cin >> bit[cont1];
        numbit ++;
        if(bit[cont1] != -1)
            cont1 ++;
    }
    //dividir a sequencia em n partes
    seq = numbit / n;//quantidade de sequencias
    while(cont2 < seq){ //enquanto contador for menor que a quantidade de sequencias   
        for(cont1 = 0; cont1 < n; cont1 ++){//identintificar se é 0 ou 1 dentro da sequencia n
            if(bit[cont3] == 0)
                zeros ++;
            else
                ums ++;
            cont3 ++;
        }
        //atribuindo o bit original a bitrec
        if(zeros > ums)
            bitrec[cont2] = 0;
        else
            bitrec[cont2] = 1;
        cont2 ++;
        zeros = 0;
        ums = 0;
    }
    //output
    for(cont2 = 0; cont2 < seq; cont2 ++){
        cout << bitrec[cont2] << " ";
    }

    return 0;
}