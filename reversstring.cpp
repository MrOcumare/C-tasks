#include <iostream>
#include <string>

int main(){
    std::string str;
    int n;
    std::getline(std::cin,str);
    n = str.length() ;
    for (int i = 0; i < (n/2); i++ ) {
        std::swap(str[i],str[n-i-1]);
    }
    std::cout << str;







    return 0;
}