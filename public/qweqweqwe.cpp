#include<bits/stdc++.h>
using namespace std;

int main() {

    int space = 4;

    for(int i = 1 ;i < 10; i+=2) {
        for(int j = 0; j < space; j++){
            cout << " ";
        }
        for(int j = 0; j < i; j++)
        {
            cout << i;
        }
        space--;
        cout << endl;
    }
}