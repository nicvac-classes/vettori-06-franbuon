#include <iostream>
using namespace std;

int main() {
    int N, i;
    cout<<"Quanti sono gli atleti?"<<endl;
    cin>>N;
    string nomi[N], nazioni[N];
    float tempi[N];
    i=0;
    while(i<N)
    {
        cout<<"Come ti chiami?"<<endl;
        cin>>nomi[i];
        cout<<"Di che nazione sei?"<<endl;
        cin>>nazioni[i];
        cout<<"Che tempo hai fatto?"<<endl;
        cin>>tempi[i];
        i=i+1;
    }
    i=0;
    while(i<N)
    {
        cout<<"Il "<<i+1<<"° atleta si chiama "<<nomi[i]<<", viene dall'/dalla "<<nazioni[i]<<" e il suo tempo è "<<tempi[i]<<"s"<<endl;
        i=i+1;
    }
    int imin;
    float tempomin;
    imin=0;
    tempomin=tempi[imin];
    i=0;
    while(i<N)
    {
        if(tempi[i]<tempomin)
        {
            tempomin=tempi[i];
            imin=i;
        }
        i=i+1;
    }
    cout<<"Il "<<imin+1<<"° atleta, di nome "<<nomi[imin]<<" proveniente da/dall' "<<nazioni[imin]<<" e che ha avuto un tempo di "<<tempi[imin]<<"s, ha vinto la gara!";
}

//LEGGERE LE ISTRUZIONI NEL FILE README.md
