/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Lista e números primos
*/

#include <iostream>
#include <list>

using namespace std;

bool primo (int n1){
    int d=0;

    if(n1==0)
        return false;

    for(int i=1;i<n1 && d<=1;i++){
        d = (n1%i==0) ? d+1 : d;
    }

    return (d==1) ? true : false;
}

int main(){
    int x,n;
    list<int> primos;

    cin >> n;

    for(int j=0;j<n;j++){
        cin >> x;
        if(primo(x)){
            primos.push_front(x);
        }
            else{
                primos.push_back(x);
            }
    }
    string space = "";
    for(auto& numero:primos){
        cout << space << numero;
        space=" ";
    }
    cout << endl;
}