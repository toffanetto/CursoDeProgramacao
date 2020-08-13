#include <iostream>
#include <vector>
using namespace std;


int main(){
    int m,n;
    cin >> n >> m;
    vector<int> lista;
    for(int i=0;i<m;i++){
        char x;
        cin>>x;
        if(x=='C')
            lista.push_back(1);
            else if(x=='R')
                lista.pop_back();
        if(lista.size()==0)
            cout << "Lista Vazia" << endl;
            else if(lista.size()>=n)
                cout << "Lista Cheia" << endl;
    }
}