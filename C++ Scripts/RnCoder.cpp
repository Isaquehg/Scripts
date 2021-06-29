#include<iostream>

using namespace std;

int main(){
    int m;//numero de bits a processar
    int n;//vezes a repeti-lo
    int bit[100];//bits entrados
    int cont1, cont2, cont3;//contadores

    //entrar com o numero de bits a processar e a repetir
    cin >> m;
    cin >> n;
    //entrar comos bits
    for(cont1 = 0; cont1 < m; cont1 ++){
        cin >> bit[cont1];
    }
    //output com as repetições definidas
    cont1 = 0;
    cont2 = 0;
    cont3 = 0;
    while(cont3 < m){ //loop para o numero d bits a processar
        while(cont2 < n){ //loop para as vezez a repeti-lo
            cout << bit[cont1] << " ";
            cont2 ++;
        }
        cont1 ++;
        cont3 ++;
        cont2 = 0;
    }
    return 0;
}