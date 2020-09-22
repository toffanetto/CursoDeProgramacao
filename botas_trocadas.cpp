/*  @toffanetto
*   Gabriel Toffanetto França da Rocha
*   Universidade Federal de Itajubá - Campus Itabira
*   Botas Trocadas
*/

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n;
    vector<pair<int,char>> botas;
    cin >> n;
    for(int i=0;i<n;i++){
        int x;
        char t;
        cin >> x >> t;
        botas.push_back(make_pair(x,t));
    }
    sort(botas.begin(),botas.end(), [](auto& a, auto& b){ if(a.first==b.first) return a.second<b.second; else return a.first<b.first;}); 
    
    int pares=0;
    auto& bota = botas.at(0);
    for(auto& par:botas){
        //comparar os pares de botas
    }
}