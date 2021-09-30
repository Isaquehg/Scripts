#include <iostream>

using namespace std;

int conta(int N, int k){
    if(N == 0)//caso 1
        return 0;
    else{//caso 2
        return conta((N / 10), k) + (N % 10 == k);
    }
}

int main(){
    int N;//num natural
    int k;//digito
    int a, b;//auxiliares para N e k, respect.
    int result;//atribuicao func

    cin >> a >> b;
    while((a != -1) && (b != -1)){//input até -1 e -1
        N = a;
        k = b;
        result = conta(N, k);//recursiva
        cout << result << endl;
        cin >> a >> b;
    }

    return 0;
}