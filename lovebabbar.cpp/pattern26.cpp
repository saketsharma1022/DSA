#include<iostream>
using namespace std;
int main(){
    
    int n;
    cout<<"enter the value of n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        int space=1;
        while(space<i){
            cout<<" ";
            space=space+1;
            
            }
            
            while(j<=n-i+1){
                cout<<i;
                j=j+1;
            

        }
        cout<<endl;
            i=i+1;
    }
}