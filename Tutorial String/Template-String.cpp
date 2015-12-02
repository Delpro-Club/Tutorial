#include <bits/stdc++.h>
using namespace std;


inline string IntToString(int a)
{
    char x[100];
    sprintf(x,"%d",a);
    string s = x;
    return s;
}

inline int StringToInt(string a)
{
    char x[100];
    int res;
    strcpy(x,a.c_str());
    sscanf(x,"%d",&res);
    return res;
}

inline string GetString(void)
{
    char x[1000005];
    scanf("%s",x);
    string s = x;
    return s;
}


int main()
{
    string kata = "makan";
    reverse(kata.begin(), kata.end());

    printf("%s\n",kata.c_str());

    string angka = "12345";
    int nilai = StringToInt(angka);

    printf("Nilainya adalah : %d\n",nilai);

    return 0;
}
