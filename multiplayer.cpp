#include<bits/stdc++.h>
using namespace std;

class Multiplayer :public Board {
    public:
        void Play(){
            int p=0;
            while(p<9 and (not check(p%2))){
                int a,b;
                p++;
                switch(p%2){
                    case 1:
                    cout<<"Taking Input from Player 1: ";
                    cin>>a>>b;
                    while(not Valid(a,b)){
                        cout<<"That Spot is Already filled/Invalid Box\n";
                        cout<<"Re-taking Input from Player 1: ";
                        cin>>a>>b;
                    }
                    matrix[a][b]='x';
                    break;
                    case 0:
                    cout<<"Taking Input from Player 2: ";
                    cin>>a>>b;
                    while(not Valid(a,b)){
                        cout<<"That Spot is Already filled/Invalid Box\n";
                        cout<<"Re-taking Input from Player 2: ";
                        cin>>a>>b;
                    }
                    matrix[a][b]='o';
                    break;
                }
                printBoard();
            }
            if(p<9){
                if(p%2) p=1;
                else p=2;
                cout<<"Player "<<p<<" Won"<<endl;
            }
            else{
                if(check(p%2)){
                    cout<<"Player 1 Won"<<endl;
                }
                else cout<<"Game Tied"<<endl;
            }
        }

};
