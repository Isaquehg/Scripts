#include <iostream>
#include <list>

using namespace std;

struct no{
    int v;//vertice
};

void cria_aresta(list<no>adj[], int u, int v, int orientado){
    no aux;//auxiliar
    //criando arestas
    aux.v = v;
    adj[u].push_back(aux);
    //rota inversa(nao orientado)
    if(orientado == 0){
        aux.v = u;
        adj[v].push_back(aux);
    }
}
void dfs(list<no>adj[], int nVertices){
    int u;//aux
    int t;//time
    int pi[100];
    char color[100];
    for(u = 0; u < nVertices; u ++){
        color[u] = 'w';
        pi[u] = NULL;
    }
    t = 0;
    for(u = 0; u < nVertices; u ++){
        if(color[u] == 'w'){
            dfs_visit(adj, u);
        }
    }
}
void dfs_visit(list<no>adj[], int u){
    int t = 0;//time
    int pi[100];
    int f[100];//vetor p ordenacao topologica
    int d[100];
    char color[100];//g = gray, w = white, b = black
    list<no>::iterator p;
    color[u] = 'g';// White vertex u has just been discovered.
    t += 1;
    d[u] = t;
    for(p = adj[u].begin(); p != adj[u].end(); p ++){ // Explore edge (u, v).
        if(color[v] == 'w'){
            pi[v] = u;
            dfs_visit(v);
        }
    }
    color[u] = 'b'; // Blacken u; it is finished.
    f[u] = t = t + 1;
}
void ordenacao_topologica(int f[], int nVertices){

}

int main(){
    list<no> adj[100];
    int nvertices;
    int orientado;//1 = orientado
    int u, v;//vertice de origem e destino

    //input
    cin >> u >> v;
    while(u != -1 && v != -1){
        cria_aresta(adj, u, v, orientado);
        cin >> u >> v;
    }


    return 0;
}