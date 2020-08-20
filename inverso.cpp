/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Inverso
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    vector<int> lista;
    
    for(int i=0;i<10;i++){
        int aux;
        cin >> aux;
        lista.push_back(aux);
    }

    reverse(lista.begin(),lista.end());
    
    for(auto& num: lista)
        cout << num << endl;

    return 0;
}

