#include<bits/stdc++.h>
using namespace std;
void print(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        for(int k=0; k<(2*i+1); k++){
            cout << "*";
        }
        for(int l=0; l<n-i-1; l++){
            cout << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cout << "Enter the  size of pyramid:";
    cin >> n;
    //for(int i=0; i<5; i++){
        print(n);
    //}
    return 0;
}
