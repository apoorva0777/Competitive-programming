#include<iostream>
using namespace std;

int main(){
    int x;
    cin>>x;
    int cnt=0;
    if(x>5||x==5){
        cnt=x/5;
        if(x%5!=0){
            cnt=cnt+1;
        }
    }else{
        cnt=1;
    }
    cout<<cnt;
}