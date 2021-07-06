#include <iostream>
#include <fstream>

using namespace std;

struct dados{
    int nprocesso;//P1 a Pn
    int prioridade;//maxima = 1
    int time;//tempo de execução em ms
};
double mtime(dados cpu[], int n){
    double soma1 = 0.0, soma2 = 0.0;//somas p calc media
    //tempo medio
    for(int i = 1; i < n; i ++){//numero a analisar t de espera
        soma1 = 0;//zerando somatoria a cada numero
        for(int j = 0; j < i; j ++){ //soma dos anteriores
            soma1 += cpu[j].time;
        }
        soma2 += soma1;//soma dos anteriores com o atual
    }
    return soma2 / (n) * 1.0;
}
void sorting(dados cpu[], int n){
    int y, z;//contadores
    dados transicao;
    for(y = 0; y < n; y ++){
        for(z = y + 1; z < n; z ++){
            if(cpu[y].prioridade > cpu[z].prioridade){
                //reordenando elementos
                transicao = cpu[z];
                cpu[z] = cpu[y];
                cpu[y] = transicao;
            }
        }
    }
}
int main(){
    //DECLARAÇÕES
    ifstream arq;//var p arquivo
    dados cpu[100];//estrutura p dados base
    char narq[100];//nome do arquivo de entrada
    int x;//numero de entradas
    int y, z;//contadores
    double tespera;//atribuicao da func mtime

    //INPUT
    cin.getline(narq, 100);
    //abertura do arquivo
    arq.open(narq, ifstream::in);
    x = 0;
    while(!arq.eof()){ //iterar por td o arquivo e receber seus dados
        arq >> cpu[x].nprocesso;
        arq >> cpu[x].time;
        arq >> cpu[x].prioridade;
        x ++;
    }
    //PROCESSAMENTO
    //ordenando processos por prioridade e realocando seu dados
    sorting(cpu, x);
    //calculando tempo medio
    tespera = mtime(cpu, x);
    
    //OUTPUT
    //imprimindo tracos por ms
    for(y = 0; y < x; y ++){
        cout << "P" << cpu[y].nprocesso;
        for(z = 0; z < cpu[y].time; z ++){
            cout << "-";
        }
    }
    cout << endl;
    cout << "Tempo medio de espera: " << tespera << " ms" << endl;
    //fechamento do arquivo
    arq.close();

    return 0;
}