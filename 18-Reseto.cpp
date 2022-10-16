#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> input1;
    int input , a ,b,last;
    cin >> input >> a;
    for(int x = 2; x<=input; x++) input1.push_back(x);
while(a != 0 && a != 1){
        b = input1.size();
            if(a == 1) last = *(input1.begin());
            a--;
            if(a==0) break;
            for(int i = 1; i < b; i ++){
                if((*(input1.begin() + i)) % (*(input1.begin())) == 0){
                    if(a == 1) last = *(input1.begin() + i);
                    *(input1.begin() + i) = 0;
                    a--;
                    if(a == 0) break;
                }
            }
            *(input1.begin()) = 0;
        
        for(int i = 0;i<input1.size();i++){
            if(input1[i] == 0){
                input1.erase(input1.begin()+i);
            }
        }
}
if(a == 1) last = *(input1.begin());
cout << last;
}