#include <iostream>
#include <cstring>
#include <fstream>

using namespace std;

struct dados{
    char nome[50];//nome do produto
    double valor;//valor unitario
    int quant;//quantidade
};

void busca_produtos(dados produto[], int &quantidade_produtos){
    quantidade_produtos = 0;
    ifstream arq;

    arq.open("Supermercado.txt", ifstream::in);
    while(!arq.eof()){
        arq.getline(produto[quantidade_produtos].nome, 50);
        arq >> produto[quantidade_produtos].valor >> produto[quantidade_produtos].quant;
        arq.ignore();
        quantidade_produtos++;
    }
    arq.close();
}
int main(){
    dados produto[50];
    char yn;//presença de clientes(sim ou nao)
    char nprod[50];//nome do pedido
    int qprod;//quantidade solicitada
    double tprod = 0.0;//valor total da compra
    bool passouaq;//impedir q entre no nao encontrado dps de encontrar

    int x = 0, y = 0;//contadores
    int n = 0;//quantidade de produtos

    //RECEBENDO DADOS DE TXT
    busca_produtos(produto, n);

    //PEDIDOS
    yn = 's';
    while(yn != 'n'){
        tprod = 0.0;
        cin.getline(nprod, 50);
        while(strcmp(nprod, "sair") != 0){//pedido de nome e qt
            passouaq = false;
            cin >> qprod;
            for(y = 0; y < n; y ++){
                if(strcmp(nprod, produto[y].nome) == 0){//se achar o nome
                    if(qprod <= produto[y].quant){//se tiver disponível a quantidade qprod
                        produto[y].quant -= qprod;
                        tprod += (produto[y].valor * qprod);
                        passouaq = true;
                    }
                    else
                        cout << "Quantidade indisponivel" << endl;
                }
                else if(y == n && passouaq == false)
                    cout << "Produto nao encontrado" << endl;
            }
            cin.ignore();
            cin.getline(nprod, 50);
        }
        cout << "Total: " << tprod << endl;
        cin >> yn;
        x ++;
    }

    return 0;
}