/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Setores vs Horas
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    
    cin >> n;

    vector<int> in;
    vector<int> out;
    vector<char> setor;

    for(int i=0;i<n;i++){
        char aux;
        cin >> aux;
        setor.push_back(aux);
    }
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        in.push_back(aux);
    }
    for(int i=0;i<n;i++){
        int aux;
        cin >> aux;
        out.push_back(aux);
    }
    int contA=0, contC=0, contT=0, contL=0;
    for(int i=0;i<n;i++){
        switch(setor.at(i)){
            case 'A':
                contA+= out.at(i)-in.at(i);
                break;
            case 'C':
                contC+= out.at(i)-in.at(i);
                break;
            case 'T':
                contT+= out.at(i)-in.at(i);
                break;
            case 'L':
                contL+= out.at(i)-in.at(i);
                break;
        }
    }
    vector<pair<int,string>> saida;

    saida.push_back(make_pair(contA, "Administracao"));
    saida.push_back(make_pair(contT, "Tratamento"));
    saida.push_back(make_pair(contC, "Campo"));
    saida.push_back(make_pair(contL, "Limpeza"));

    sort(saida.begin(),saida.end(), [](auto left, auto right){if(left.first==right.first) return left.second < right.second; else return left.first > right.first;});

    for(auto& par:saida)
        cout << par.second << endl;

}