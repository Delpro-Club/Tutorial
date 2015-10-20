#include <cstdio>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){

    int N,M;                                // N adalah jumlah Node, dan M adalah jumlah edge
    scanf("%d %d",&N,&M);

    vector <int> AdjList[N+5];                   // Perbesar sedikit, agar menghindari RTE (Runtime Error)

    for(int i = 1; i <= M; i++){
        int node1,node2;
        scanf("%d %d",&node1,&node2);

        AdjList[node1].push_back(node2);          // Masukkan node2 untuk menandakan terhubung dengan node1
    }

    // Hasil setelah data dimasukkan
    for(int i = 0; i < N; i++){
        printf("Node %d : { ",i);
        for(int j = 0; j < AdjList[i].size(); j++){            // Lebih efisien, sesuai size nya saja
            printf("%d,",AdjList[i][j]);
        }
        printf("}\n");
    }

    return 0;
}

