#include <iostream>
#include <list>

using namespace std;

int f[100];//topological sorting vector

void cria_aresta(list<int>adj[], int u, int v, int orientado){
    int aux;//auxiliar
    //criando arestas
    aux = v;
    adj[u].push_back(aux);
    //rota inversa(nao orientado)
    if(orientado == 0){
        aux = u;
        adj[v].push_back(aux);
    }
}
void dfs_visit(list<int>adj[], int u){
    int t = 0;//time
    int pi[100];//parent
    int d[100];//instante em que vertice foi descoberto
    char color[100];//g = gray, w = white, b = black
    list<int>::iterator p;
    color[u] = 'g';// White vertex u has just been discovered.
    t += 1;
    d[u] = t;
    for(p = adj[u].begin(); p != adj[u].end(); p ++){ // Explore edge (u, v).
        if(color[*p] == 'w'){
            pi[*p] = u;
            dfs_visit(adj, u);
        }
    }
    color[u] = 'b'; // Blacken u; it is finished.
    f[u] = t = t + 1;
}
void dfs(list<int>adj[], int nVertices){
    int u;//aux
    int t;//time
    int pi[100];//parent
    char color[100];//discovery state
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
void ordenacao_topologica(int f[], int nVertices){
    int ordem[100];//vetor ordenado
    int maior = 0;//maior num de f[]
    for(int j = 0; j < nVertices; j ++){
        for(int i = 0; i < nVertices; i ++){
            if(f[i] > maior)
                ordem[j] = i;
        }
    }
    for(int j = 0; j < nVertices; j ++)
        cout << ordem[j] << " ";
    cout << endl;
}

int main(){
    list<int> adj[100];
    int nvertices;
    int orientado;//1 = orientado
    int u, v;//vertice de origem e destino

    //input
    cin >> nvertices >> orientado;
    cin >> u >> v;
    while(u != -1 && v != -1){
        cria_aresta(adj, u, v, orientado);
        cin >> u >> v;
    }
    dfs(adj, nvertices);
    ordenacao_topologica(f, nvertices);

    return 0;
}