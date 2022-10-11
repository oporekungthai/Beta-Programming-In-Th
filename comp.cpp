#include <bits/stdc++.h>
using namespace std;

bool checkprime(int x){
    bool cp = true;
    if(x == 1 || x == 0) cp = false;
    for(int i = 2; i<=x/2;i++) if(x%i == 0) cp = false;
    return cp;
}
int main(){
    int a;
    cin >> a;
    cout << checkprime(a);
}