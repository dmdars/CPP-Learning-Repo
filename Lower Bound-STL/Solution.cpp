#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int N, Q, L;
    cin >> N;
    vector<int> X;
    // vector<int>::iterator L;                                                      
    for (int i = 0; i < N; i++){
        int I;
        cin >> I;
        X.push_back(I);
    }
    sort(X.begin(), X.end());
    cin >> Q;
    for (int i = 0; i < Q; i++){
        int Y;
        cin >> Y;
        int L = lower_bound(X.begin(), X.end(), Y) - X.begin();
        if (X[L] == Y){
            cout << "Yes " << (L + 1) << endl;
        }
        else {
            cout << "No " << (L + 1) << endl;
        }
    }   
    return 0;
}   