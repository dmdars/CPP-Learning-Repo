#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int Q;
    set<int> s;
    cin >> Q;
    for(int i=0; i < Q; i++){
        int y, x;
        cin >> y >> x;
        switch(y){
            case 1:   
                s.insert(x);
                break; 
            case 2:   
                s.erase(x);
                break;
            case 3:
                auto search = s.find(x);
                if (search != end(s)){
                    cout << "Yes" <<endl;
                }       
                else {
                    cout << "No" <<endl;
                }
                break;
        }
    }
    return 0;
}



