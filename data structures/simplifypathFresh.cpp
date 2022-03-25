#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string path  = "/a/./b//home/..";
    vector<string> v;
    string temp;
    for( int i = 0; i < path.size(); i++){
        
        if(path[i] != '/')
        temp.push_back(path[i]);
        else if( path[i] == '/'){
            if(temp == "") continue;
            else {
                v.push_back(temp);
                temp = "";
            }
        }
        if(( i == path.size() - 1)&&( temp.size() != 0)){
            v.push_back(temp);
        }
    }
    for(auto x: v){
            cout << x << " ";
        }



}