#include<iostream>
#include<string>

using std::string;

bool luckynum(string a){
    for(char c:a){
        if(c != '7' && c != '4'){
            return false;
        }
    }
    return true;
}

int main(){
    string n;
    std::cin >>n;
    bool isLucky = luckynum(n);
    std::cout << isLucky << true << "\n";
    std::cout << (isLucky ? "YES" : "NO");

    return 0;
}