#include <cstdio>
#include <algorithm>
#include <string.h>

using namespace std;

int main(){

    int N,M;                                // N adalah jumlah Node, dan M adalah jumlah edge
    scanf("%d %d",&N,&M);

    int AdjMat[N+5][N+5];                   // Perbesar sedikit, agar menghindari RTE (Runtime Error)

    memset(AdjMat, 0, sizeof(AdjMat));      //  Set semua kolom menjadi 0 (Belum ada Edge yang menghubungkan)

    for(int i = 1; i <= M; i++){
        int node1,node2;
        scanf("%d %d",&node1,&node2);

        AdjMat[node1][node2] = 1;           // Tandai bahwa ada Edge yang menghubungkan
    }

    // Hasil setelah data dimasukkan
    for(int i = 0; i < N; i++){
        printf("Node %d : { ",i);
        for(int j = 0; j < N; j++){
            printf("%d,",AdjMat[i][j]);
        }
        printf("}\n");
    }

    return 0;
}
