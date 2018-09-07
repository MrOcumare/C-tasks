#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    std::map <char,int> MyRim;
    MyRim['I'] = 1;
    MyRim['V'] = 5;
    MyRim['X'] = 10;
    MyRim['L'] = 50;
    MyRim['C'] = 100;
    string s;
    cin >> s;
    int h = 0;
    for (int i =0 ; i < s.size()-1; i ++) {
        auto it = MyRim.find(s[i]);
        auto it1 = MyRim.find(s[i+1]);
        if(it ->second < it1 -> second) {
            h = h - (it ->second);

        } else {
            h = h + (it ->second);
        }
       
    }

    h = h + MyRim.find(s[s.size()-1]) -> second;
    cout << h;
    
    




    return 0;

} 