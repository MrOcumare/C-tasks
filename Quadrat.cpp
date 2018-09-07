#include <iostream>
#include <vector>
#include <cmath>

int main() {
   
    int n;
    int l,r;
    std::cin >> n;
    std::vector <int> vs(n);
    std::vector <int> vs1;
    for (int i =0; i < n ; i++) {
        std::cin >> vs[i];
    }
    for (int i =0; i < n - 1  ; i++) {
        if (vs[i] * vs[i+1] <= 0) {
            l = i;
            r = i + 1;
        }
    }

    while ((l != -1) && (r != n) ) {
        if (vs[l]*vs[l] < vs[r]*vs[r]) {
            
            vs1.push_back(vs[l]*vs[l]);
            l = l - 1;
        } else {
            
            vs1.push_back(vs[r]*vs[r]);
            r++;
        }
    }
   if (l == -1) {
       for (int i = r; i < n; i++) {
           vs1.push_back(vs[i]*vs[i]);
       }
   } else if (r == n) {
       for (int i = l; i > -1; i--) {
           vs1.push_back(vs[i]*vs[i]);
       }
   }

    for (int i =0; i <n ; i++) {
        std::cout << vs1[i] << " " ;
    }

    return 0;
} 