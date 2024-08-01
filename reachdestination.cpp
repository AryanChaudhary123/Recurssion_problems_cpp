#include<iostream>
using namespace std;
void reachDestination(int n,int s){
    cout<<"curent: "<<s<<" destination: "<<n<<endl;
    if(n==s){
        cout<<"puchh gya!!";
        return ;
    }
    s++;
    reachDestination(n,s);
}
int main(){
    int n=10;
    int s=1;
    reachDestination(n,s);
}