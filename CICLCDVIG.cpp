#include <iostream>
#include <vector>
//реализован сдвиг вправо 
int main(){
    int n;
    int f;
    std:: cin >> n;
    std::vector<int>vector1(n);
    for (int i =0; i < n; i++) {
        std::cin >> vector1[i];
    }
    std::cout << std::endl;
    int k;
    std::cin >> k;
    k = k % n;
    while (k !=0) {
        f = n-1;
        while(f != 0) {
            //std::swap(vector1[f-1],vector1[f]);
            vector1[f-1] ^= vector1[f];
            vector1[f] ^= vector1[f-1];
            vector1[f-1] ^= vector1[f];
            f=f-1;
        }
        k = k-1;
    }
    for (int i =0; i < n; i++) {
        std::cout << vector1[i] << " " ;
    }
    return 0 ;

}