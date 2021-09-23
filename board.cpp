#include<bits/stdc++.h>
using namespace std;
class Board{
    public:
        int n=3;
        vector<vector<char>> matrix;
        void makeBoard(){
            for(int i=0;i<n;i++){
                vector<char> arr;
                for(int j=0;j<n;j++){
                    arr.push_back(' ');
                }
                matrix.push_back(arr);
            }
        }
        void printBoard(){
            cout<<"-------------\n";
            for(auto i:matrix){
                cout<<"| ";
                for(auto j:i){
                    cout<<j<<" | ";
                }
                cout<<endl;
                cout<<"-------------\n";
            }
        }
        bool check(int p){
            char c;
            if(p) c='x';
            else c='o';
            for(int i=0;i<n;i++){
                if(matrix[i][0]==c and matrix[i][1]==c and matrix[i][2]==c) return true;
                if(matrix[0][i]==c and matrix[1][i]==c and matrix[2][i]==c) return true;
            }
            if(matrix[0][0]==c and matrix[1][1]==c and matrix[2][2]==c) return true;
            if(matrix[2][0]==c and matrix[1][1]==c and matrix[0][2]==c) return true;
            return false;
        }
        bool Valid(int a,int b){
            if(a>=0 and a<n and b>=0 and b<n and matrix[a][b]==' ') return true;
            else return false;
        }
};