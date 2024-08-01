#include<iostream>
using namespace std;
bool checkpalindrome(string str,int i,int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        checkpalindrome(str,i+1,j-1);
    }
}
int main(){
    string str="abbccbba";
    bool ispalindrome=checkpalindrome(str,0,str.length()-1);
    if(ispalindrome ){
        cout<<"yess it is a palindrome";
    }else{
        cout<<"no it is not a palindrome";
    }
}