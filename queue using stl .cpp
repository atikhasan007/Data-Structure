#include<bits/stdc++.h>
using namespace std;
int main(){
//queue back function nai

    queue<int>q;
    q.push(10);//10
    q.push(2);//10 2
    q.push(28);//10 2 28
    cout<<"size : "<<q.size()<<endl;
    cout<<q.front()<<endl;
    cout<<q.back()<<endl;
    
    while(!q.empty()){
        q.pop();
    }

    cout<<q.front()<<endl;
    return 0;

}
