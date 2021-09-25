#include<bits/stdc++.h>
using namespace std;

class Computer: public Board{
    public:
        void Play(){
            int p=0;
            while(not check(p%2)){
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
                    cout<<"Taking Input from Computer: ";
                    a=rand()%3;
                    b=rand()%3;
                    cout<<a<<" "<<b<<endl;
                    while(not Valid(a,b)){
                        cout<<"That Spot is Already filled/Invalid Box\n";
                        cout<<"Re-taking Input from Computer: ";
                        a=rand()%3;
                        b=rand()%3;
                        cout<<a<<" "<<b<<endl;
                    }
                    matrix[a][b]='o';
                    break;
                }
                printBoard();
            }
            if(p<9){
                if(p%2) cout<<"Player 1 Won"<<endl;
                else cout<<"Computer Won"<<endl;
            }
            else{
                if(check(p%2)){
                    cout<<"Player 1 Won"<<endl;
                }
                else cout<<"Game Tied"<<endl;
            }
        }
};