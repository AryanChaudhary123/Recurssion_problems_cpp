#include<iostream>
using namespace std;
void saydigit(int n,string str[]){
    if(n==0){
        return ;
    }
    int digit=n%10;
    n=n/10;
    saydigit(n,str);
    cout<<str[digit]<<" ";
}
int main(){
    int n=234;
    string str[10]={"zero","one","two","three","four","five","size","seven","eight","nine"};
    saydigit(n,str);
}