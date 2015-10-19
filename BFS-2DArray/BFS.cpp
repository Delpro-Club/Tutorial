#include <cstdio>
#include <string>
#include <queue>

using namespace std;

string peta [1005];
int row,column;

// Penyingkat untuk Bawah, Atas, Kanan, dan Kiri. :D
int dr[8] = {1,-1,0,0};
int dc[8] = {0,0,1,-1};


inline string GetString(void)
{
    char x[1000005];
    scanf("%s",x);
    string s = x;
    return s;
}

inline string IntToString(int a)
{
    char x[100];
    sprintf(x,"%d",a);
    string s = x;
    return s;
}

int BFS(pair <int,int> S, pair <int,int> D){

    // Queue untuk menyimpan Posisi mana yang diproses di setiap langkah
    queue <pair <int,int> > Q;
    int langkah = 0;

    // Mulai dari Source
    Q.push(S);

    while(!Q.empty()){
        langkah++;

        printf("Langkah yang Diproses : %d\n",langkah);

        // Ambil semua Posisi di Langkah yang akan diproses
        int sizey = Q.size();

        for(int i = 1; i <= sizey; i++){
            pair <int,int> posNow = Q.front();
            Q.pop();

            printf("--Posisi yang Diproses : (%d,%d)\n",posNow.first,posNow.second);


            // Coba Semua langkah (Atas, Bawah, Kiri, Kanan)
            for(int i = 0; i < 4; i++){
                int tempR = posNow.first + dr[i];
                int tempC = posNow.second + dc[i];

                // Tandai Sudah Diproses

                // Cek Jangan sampai Keluar Peta.
                if(tempR < 0 || tempR >= row || tempC < 0 || tempC >= column) continue;

                else{
                    // Ketemu Destinasi, Langkah Return jumlah langkah
                    if(peta[tempR][tempC] == 'D') return langkah;

                    // Simpan Posisi langkahnya ke Queue, untuk Diproses ke Langkah Berikutnya.
                    else if(peta[tempR][tempC] == '.') Q.push(make_pair(tempR,tempC));
                }

                peta[tempR][tempC] = '#';
            }
        }
    }


}

int main(){

    scanf("%d %d",&row,&column);

    // Input Data
    for(int i = 0; i < row; i++){
        string baris = GetString();

        peta[i] = baris;
    }

    // Cari posisi Awal dan Akhir, Lalu simpan di Pair.
    pair <int, int> Source,Dest;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            if(peta[i][j] == 'S') Source = make_pair(i,j);
            if(peta[i][j] == 'D') Dest = make_pair(i,j);
        }
    }

    printf("Posisi Source : (%d,%d) \n",Source.first,Source.second);
    printf("Posisi Dest : (%d,%d) \n\n",Dest.first,Dest.second);

    printf("\n\nLangkah Minimal yang dibutuhkan : %d\n",BFS(Source,Dest));

    return 0;
}
