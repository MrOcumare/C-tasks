#include <iostream>
#include  <vector>

int main() {
    std::vector<int>vs;
    std::vector<int>vs1;
    std::vector<int>vsresult;


    int n,m,l;
    std:: cin >>n >>m;
    for (int i =0 ; i <n ; i++){
        std::cin >> l;
        vs.push_back(l);
    } 
    for (int i =0 ; i <m ; i++){
        std::cin >> l;
        vs1.push_back(l);
    } 
    
    int i = 0;
    int j = 0;
    while (i < n && j < m) {
        if (vs[i] < vs1[j] ) {
            
            vsresult.push_back(vs[i]);
            i++;
        } else{
            vsresult.push_back(vs1[j]);
            j++;
        }
    }
    if (i == n) {
        for (int k = j; k  < m ; k++ ) {
             vsresult.push_back(vs1[j]);
        }
    } else if( j == m) {
         for (int k = i; k  < n ; k++ ) {
             vsresult.push_back(vs[i]);
        }

    }
    for (int i = 0; i < vsresult.size() ; i++){
        std::cout << vsresult[i] << " ";

    }
    


}