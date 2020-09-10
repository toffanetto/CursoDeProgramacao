/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Código
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    int cod[] = {1,0,0}; 
    int n;
    cin >> n;
    int estado=0,padrao=0;;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        if(cod[estado]==x){
            if(estado==2){
                padrao++;
                estado=0;
            }
                else 
                    estado++;
        }
            else{
                estado=0;
                if(x==1)
                    estado++;
            }
    }
    cout << padrao << endl;
}