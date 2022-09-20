#include<iostream>
#include<vector>
#include<regex>
#include<algorithm>
#include<string.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int len;
    string cad;
    vector<string> white;
    vector<int> black;
    cin>>len;
    while (len--)
    {
        cin>>cad;
        if(regex_match(cad, regex("[A-Z]"))){
            white.push_back(cad);
        }else{
            black.push_back(stoi(cad));
        }
    }
    sort(white.begin(),white.end());
    sort(black.begin(),black.end());
    for(string x : white){
        cout<<x<<" ";
    }
    for(int x :black){
        cout<<x<<" ";
    }
    return 0;
}
