#include<iostream>
using namespace std;
bool linearsearch(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool result=linearsearch(arr+1,size-1,key);
        return result;
    }
}
int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    int key=0;
    bool ans=linearsearch(arr,size,key);
    if(ans){
    cout<<"present"<<endl;
    }
    else{
    cout<<"not present"<<endl;
    }
}