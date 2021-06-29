#include <iostream>

using namespace std;

int main(){
    int foto[100][100];//foto da lesão
    int nlinhas, ncolunas;//numero de linhas e colunas
    int dim;//dimensão dos pixels
    int lesoes = 0;
    int l, c;//contadores
    //input
    cin >> nlinhas >> ncolunas >> dim;
    for(l = 0; l < nlinhas; l ++){
        for(c = 0; c < ncolunas; c ++){
            cin >> foto[l][c];
        }
    }
    //calculando quantidade de pixels com lesão
    for(l = 0; l < nlinhas; l ++){
        for(c = 0; c < ncolunas; c ++){
            if(foto[l][c] == 1)
                lesoes ++;
        }
    }
    //output
    cout << "AREA = " << lesoes * (dim * dim) << " mm^2" << endl;

    return 0;
}