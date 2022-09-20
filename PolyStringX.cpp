#include<iostream>
#include<vector>
#include<regex>

using namespace std;

int main(int argc, char const *argv[])
{
    string cad;
    char l1,l2;
    int cant = 0;
    cin>>cad>>l1>>l2;
    for (int i = 0; i < cad.length(); i++)
    {
        if(cad[i] == l1){
            for (int j = cad.length()-1; j > i; j--)
            {
                if(cad[j] == l2){
                    cant ++;
                }
            }
            
        }
    }
    cout<<cant;
    return 0;
}
