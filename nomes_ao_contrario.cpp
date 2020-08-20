/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Nomes ao Contrario
*/

#include <iostream>
#include <string>

using namespace std;

int main(){
    string nome;
    getline(cin,nome);
    for(int i=nome.size()-1;i>=0;i--){
        cout << nome.at(i);
    }
    cout << endl;
}
