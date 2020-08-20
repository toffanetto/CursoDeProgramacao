/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Fita Colorida
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> fita;
    vector<int> fita_pos;
    vector<int> tom0;
    int n;
    
    cin>>n;

    for(int i=0;i<n;i++){
        int aux;
        cin>>aux;
        fita.push_back(aux);
        if(aux==0)
            tom0.push_back(i);
    }

    for(int i=0;i<n;i++){
        int cor=0;
        if(fita.at(i)==0){
            fita_pos.push_back(0);
            continue;
        }     
        cor=abs(i-tom0.at(0));
        for(int j=0;j<tom0.size();j++){            
            if(tom0.at(j)<i){
                cor=(cor<(i-tom0.at(j))) ? cor : i-tom0.at(j);
            }
                else if(i<tom0.at(j)){
                    cor=(cor<(tom0.at(j)-i)) ? cor :tom0.at(j)-i;
                }
            cor= (cor>9) ? 9 : cor;
        }
        fita_pos.push_back(cor);        
    }
    string space="";
    for(auto& color: fita_pos){
        cout << space << color;
        space=" ";
    }
    cout << endl;

    return 0;
}
