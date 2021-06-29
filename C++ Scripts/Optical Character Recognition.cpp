#include <iostream>

using namespace std;

int main(){
    int ocr[5][3];//vetor a entrar
    int l, c;//contadores
    int zeros = 0;
    int iguais0 = 0, iguais1 = 0, iguais2 = 0, iguais3 = 0, iguais4 = 0, iguais5 = 0, iguais6 = 0, iguais7 = 0, iguais8 = 0, iguais9 = 0;
    int zero[5][3], um[5][3], dois[5][3], tres[5][3], quatro[5][3], cinco[5][3], seis[5][3], sete[5][3], oito[5][3], nove[5][3];
    //0
    zero[0][0] = 0;
    zero[0][1] = 0;
    zero[0][2] = 0;
    zero[1][0] = 0;
    zero[1][1] = 1;
    zero[1][2] = 0;
    zero[2][0] = 0;
    zero[2][1] = 1;
    zero[2][2] = 0;
    zero[3][0] = 0;
    zero[3][1] = 1;
    zero[3][2] = 0;
    zero[4][0] = 0;
    zero[4][1] = 0;
    zero[4][2] = 0;
    //1
    um[0][0] = 1;
    um[0][1] = 1;
    um[0][2] = 0;
    um[1][0] = 1;
    um[1][1] = 1;
    um[1][2] = 0;
    um[2][0] = 1;
    um[2][1] = 1;
    um[2][2] = 0;
    um[3][0] = 1;
    um[3][1] = 1;
    um[3][2] = 0;
    um[4][0] = 1;
    um[4][1] = 1;
    um[4][2] = 0;
    //2
    dois[0][0] = 0;
    dois[0][1] = 0;
    dois[0][2] = 0;
    dois[1][0] = 1;
    dois[1][1] = 1;
    dois[1][2] = 0;
    dois[2][0] = 0;
    dois[2][1] = 0;
    dois[2][2] = 0;
    dois[3][0] = 0;
    dois[3][1] = 1;
    dois[3][2] = 1;
    dois[4][0] = 0;
    dois[4][1] = 0;
    dois[4][2] = 0;
    //3
    tres[0][0] = 0;
    tres[0][1] = 0;
    tres[0][2] = 0;
    tres[1][0] = 1;
    tres[1][1] = 1;
    tres[1][2] = 0;
    tres[2][0] = 0;
    tres[2][1] = 0;
    tres[2][2] = 0;
    tres[3][0] = 1;
    tres[3][1] = 1;
    tres[3][2] = 0;
    tres[4][0] = 0;
    tres[4][1] = 0;
    tres[4][2] = 0;
    //4
    quatro[0][0] = 0;
    quatro[0][1] = 1;
    quatro[0][2] = 0;
    quatro[1][0] = 0;
    quatro[1][1] = 1;
    quatro[1][2] = 0;
    quatro[2][0] = 0;
    quatro[2][1] = 0;
    quatro[2][2] = 0;
    quatro[3][0] = 1;
    quatro[3][1] = 1;
    quatro[3][2] = 0;
    quatro[4][0] = 1;
    quatro[4][1] = 1;
    quatro[4][2] = 0;
    //5
    cinco[0][0] = 0;
    cinco[0][1] = 0;
    cinco[0][2] = 0;
    cinco[1][0] = 0;
    cinco[1][1] = 1;
    cinco[1][2] = 1;
    cinco[2][0] = 0;
    cinco[2][1] = 0;
    cinco[2][2] = 0;
    cinco[3][0] = 1;
    cinco[3][1] = 1;
    cinco[3][2] = 0;
    cinco[4][0] = 0;
    cinco[4][1] = 0;
    cinco[4][2] = 0;
    //6
    seis[0][0] = 0;
    seis[0][1] = 0;
    seis[0][2] = 0;
    seis[1][0] = 0;
    seis[1][1] = 1;
    seis[1][2] = 1;
    seis[2][0] = 0;
    seis[2][1] = 0;
    seis[2][2] = 0;
    seis[3][0] = 0;
    seis[3][1] = 1;
    seis[3][2] = 0;
    seis[4][0] = 0;
    seis[4][1] = 0;
    seis[4][2] = 0;
    //7
    sete[0][0] = 0;
    sete[0][1] = 0;
    sete[0][2] = 0;
    sete[1][0] = 1;
    sete[1][1] = 1;
    sete[1][2] = 0;
    sete[2][0] = 1;
    sete[2][1] = 1;
    sete[2][2] = 0;
    sete[3][0] = 1;
    sete[3][1] = 1;
    sete[3][2] = 0;
    sete[4][0] = 1;
    sete[4][1] = 1;
    sete[4][2] = 0;
    //8
    oito[0][0] = 0;
    oito[0][1] = 0;
    oito[0][2] = 0;
    oito[1][0] = 0;
    oito[1][1] = 1;
    oito[1][2] = 0;
    oito[2][0] = 0;
    oito[2][1] = 0;
    oito[2][2] = 0;
    oito[3][0] = 0;
    oito[3][1] = 1;
    oito[3][2] = 0;
    oito[4][0] = 0;
    oito[4][1] = 0;
    oito[4][2] = 0;
    //9
    nove[0][0] = 0;
    nove[0][1] = 0;
    nove[0][2] = 0;
    nove[1][0] = 0;
    nove[1][1] = 1;
    nove[1][2] = 0;
    nove[2][0] = 0;
    nove[2][1] = 0;
    nove[2][2] = 0;
    nove[3][0] = 1;
    nove[3][1] = 1;
    nove[3][2] = 0;
    nove[4][0] = 1;
    nove[4][1] = 1;
    nove[4][2] = 0;

    //input
    while(true){   
        zeros = 0;
        iguais0 = 0;
        iguais1 = 0;
        iguais2 = 0;
        iguais3 = 0;
        iguais4 = 0;
        iguais5 = 0;
        iguais6 = 0;
        iguais7 = 0;
        iguais8 = 0;
        iguais9 = 0;
        for(l = 0; l < 5; l ++){
            for(c = 0; c < 3; c ++){
                cin >> ocr[l][c];
                if(ocr[l][c] == 0)
                    zeros ++;
                if(ocr[l][c] == zero[l][c])
                    iguais0 ++;
                    if(iguais0 == 15)
                        cout << "ZERO" << endl;
                if(ocr[l][c] == um[l][c]){
                    iguais1 ++;
                    if(iguais1 == 15)
                        cout << "UM" << endl;
                }
                if(ocr[l][c] == dois[l][c]){
                    iguais2 ++;
                    if(iguais2 == 15)
                        cout << "DOIS" << endl;
                }
                if(ocr[l][c] == tres[l][c]){
                    iguais3 ++;
                    if(iguais3 == 15)
                        cout << "TRES" << endl;
                }
                if(ocr[l][c] == quatro[l][c]){
                    iguais4 ++;
                    if(iguais4 == 15)
                        cout << "QUATRO" << endl;
                }
                if(ocr[l][c] == cinco[l][c]){
                    iguais5 ++;
                    if(iguais5 == 15)
                        cout << "CINCO" << endl;
                }
                if(ocr[l][c] == seis[l][c]){
                    iguais6 ++;
                    if(iguais6 == 15)
                        cout << "SEIS" << endl;
                }
                if(ocr[l][c] == sete[l][c]){
                    iguais7 ++;
                    if(iguais7 == 15)
                        cout << "SETE" << endl;
                }
                if(ocr[l][c] == oito[l][c]){
                    iguais8 ++;
                    if(iguais8 == 15)
                        cout << "OITO" << endl;
                }
                if(ocr[l][c] == nove[l][c]){
                    iguais9 ++;
                    if(iguais9 == 15)
                        cout << "NOVE" << endl;
                }
            }
        }
        if(zeros == 15)
                break;
    }

    return 0;
}