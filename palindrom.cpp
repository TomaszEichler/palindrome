#include <iostream>
#include <array>
//#include <string>

std::array<std::string, 6> testStrings {{
    "",
    "a",
    "ala",
    "kajak",
    "neveroddoreven",
    "abacada"
}}; 

bool isPalindrome(const std::string &text){

    if((text.length() < 2) || text.empty()){
        return false;
    }

    for(auto iBegin{ text.begin() }, iEnd{ text.end() - 1 }; iBegin < iEnd; ++iBegin, --iEnd){
        if(*iBegin != *iEnd){
            return false;
        }
    }

    return true;
}

int main(){
    for(auto & elem : testStrings){
        std::cout << std::boolalpha << isPalindrome(elem) << '\n';
    }

    return 0;
}