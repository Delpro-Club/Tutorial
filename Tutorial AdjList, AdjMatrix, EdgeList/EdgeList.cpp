#include <cstdio>
#include <algorithm>
#include <string.h>
#include <vector>

using namespace std;

int main(){

    int N,M;                                // N adalah jumlah Node, dan M adalah jumlah edge
    scanf("%d %d",&N,&M);

    vector < pair <int, pair<int,int> > > EdgeList;                   // Perbesar sedikit, agar menghindari RTE (Runtime Error)

    for(int i = 1; i <= M; i++){
        int A,B,C;
        scanf("%d %d %d",&A,&B,&C);

        EdgeList.push_back(make_pair(C,make_pair(A,B)));            // Another shit code, hahhahaha
    }

    // Hasil setelah data dimasukkan
    for(int i = 0; i < M; i++){
        printf("EdgeList[%d] : %d,(%d,%d)\n",i,EdgeList[i].first, EdgeList[i].second.first,EdgeList[i].second.second);
    }

    return 0;
}


