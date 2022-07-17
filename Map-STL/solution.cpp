#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int Q;
    map <string, int>m;
    map<string,int>::iterator I;
    cin >> Q;
    for (int i = 0; i<Q; i++){
        string temps;
        int tempi, temp;
        cin >> temp;
        switch (temp) {
        case 1:
            cin >> temps >> tempi;
            I = m.find(temps);
            if (I != m.end())
            {
                m[temps] += tempi;
            }
            else {
                m.insert(make_pair(temps, tempi));
            }
            break;
        case 2:
            cin >> temps;
            m.erase(temps);
            break;  
        case 3:
            cin >> temps;
            cout << m[temps] << endl;
            break;
        }       
    }  
    return 0;
}