#include <bits/stdc++.h>
using namespace std;

int main()
{
    char x,y;
    int green=0,yellow=0;
    map<char,int>map1;
    map<char,int>map2;
    vector<vector<char>> ans(3 , vector<char> (3));
    vector<vector<char>>guess(3, vector<char>(3));
    ios_base::sync_with_stdio(0);cin.tie(0);
    for(int i=0; i<3;i++){
        for(int j =0; j< 3;j++){
            cin>> x;
            ans[i][j]=x;
        }
    }
    for(int i=0; i<3;i++){
        for(int j =0; j< 3;j++){
            cin>> x;
            guess[i][j]=x;
        }
    }
    for (int a = 0;a<3;a++){
        for (int b = 0;b<3;b++){
            char x = ans[a][b];
            char y= guess[a][b];
            if (x==y){
                    green++;
                }
            else{
                map1[x]++;
                map2[y]++;
            }
        }
    }

    int z = 0;
    for (const auto& kv: map1){
        z=0;
        z = map2[kv.first];
        if ( z > 0){
            yellow += min(kv.second,z);
        } 
    }
    cout<< green<<endl;
    cout<< yellow<<endl;
    return 0;
}
