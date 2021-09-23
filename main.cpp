#include<bits/stdc++.h>
using namespace std;
#include "board.cpp"
#include "multiplayer.cpp"
#include "computer.cpp"


int main(){
    cout<<"TIC-TAC-TOE GAME\n";
    cout<<"Enter....1 for Multiplayer Game....2 for vs Nerd Computer: ";
    int n;
    cin>>n;
    if(n-1){
        cout<<"This Game is between you and Computer\n";
        Computer obj;
        obj.makeBoard();
        obj.printBoard();
        obj.Play();
    }
    else{
        cout<<"This Game is between Player 1 and Player 2\n";
        Multiplayer obj;
        obj.makeBoard();
        obj.printBoard();
        obj.Play();
    }
}