#include<bits/stdc++.h>
#include<stack>
using namespace std;
#define int long long 
int32_t main(){

    ios_base::sync_with_stdio(0);
    cin.tie(0);
 stack<int>s;
 s.push(10);
 s.push(20);
 s.push(30);
 s.pop();
    cout<<"Size = "<<s.size()<<endl;
    cout<<"top value = "<<s.top()<<endl;

    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<"Not empty"<<endl;
    }



return 0;

}
