// Pattern Problem 2 ~ coded by vHiren
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main(){

    // Tracks row
    for(int i=1; i<=5; i++){
        // Tracks column
        for(int j=1; j<=5; j++){
            if(j>=6-i){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}