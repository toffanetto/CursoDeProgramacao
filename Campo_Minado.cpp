/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Campo Minado
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<int> campo;
    vector<int> resp;
    campo.push_back(0);
    cin >> n;
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        campo.push_back(aux);
    }
    campo.push_back(0);

    for(int i=1;i<=n;i++){
        resp.push_back(campo.at(i-1)+campo.at(i)+campo.at(i+1));
    }

    for(auto& pos : resp)
        cout << pos << endl;

}