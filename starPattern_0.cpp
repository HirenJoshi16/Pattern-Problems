// Basic & Crucial Introduction To Star Pattern Program ~ coded by vHiren
#include <bits/stdc++.h>
using namespace std;

// Driver code
int main(){
    // Displaying manually
    // cout<<"* * * * *"<<endl;
    // cout<<"* * * * *"<<endl;
    // cout<<"* * * * *"<<endl;
    // cout<<"* * * * *";

    // Displaying rows & columns
    for(int i=1; i<=4; i++){

        for(int j=1; j<=5; j++){
            cout<<i<<"'"<<j<<"  ";
        }
        cout<<endl;
    }

    cout<<endl<<endl;
    // Displaying using loop
    for(int i=1; i<=4; i++){

        for(int j=1; j<=5; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}

/* 

* * * * *
* * * * *
* * * * *
* * * * *

*/
