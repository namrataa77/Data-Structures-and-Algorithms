#include<iostream>
#include<vector>
#include<string>
#include<stack>
using namespace std;

int main()
{
    string path = "/home/./a//b//.././";
   
        vector<string> s;
         
            string temp;
            for(int i = 0; i < path.size(); i++){                
                if( path[i] != '/'){
                    temp.push_back( path[i]);
                    
                }
                else {
                    if(temp.size() != 0) s.push_back(temp), temp = "";
                }
                if(i == (int)path.size() - 1){
                      if(temp.size() != 0) s.push_back(temp);

                }
            }   
        for(auto x: s){
            cout << x << " ";
        }
        
        stack<string> stk;
        int flag  = 0;
        for( auto x : s){
            
            if( x == ".") continue;
            else if( x == ".."){
                if( !stk.empty())
               stk.pop(); 
            }
            else stk.push(x);
        }
        while(!stk.empty()){
            cout<< stk.top() << " ";
            stk.pop();
        }
        
        // if( stk.empty()) {
        //     flag = 1;
        //     cout << endl << "empty";
            
        // }
        
        
        
        
         string ans = "";
        
        while(!stk.empty()){
            if( ans.empty())
                ans = ans + "/";
            ans = ans + stk.top();
            stk.pop();
        }

        cout << ans;

        
 
    }

    

    

