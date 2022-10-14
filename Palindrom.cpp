#include <iostream>
#include <string>
#include <cstring>

int main()
{
    std::string wordP;
    int size;
    int i;
    int isPalindrome;
    
    std::cout << "Enter: ";
    std::cin >> wordP;
    size = wordP.length();
    char wordPArr[size + 1];
    char wordUpper[size + 1];
    std::strcpy(wordPArr, wordP.c_str());
    
    for(i = 0; i < size; i++){
        
        if(wordPArr[i] == wordPArr[size-1-i]){
            isPalindrome = 1;  
        }else{
            isPalindrome = 0;
        }
    }
    
    if(isPalindrome == 1){
        std::cout << "PALINDROME FOUND!\n" << wordP << " is a Palindrome";
    }else{
        std::cout << "NOT A PALINDROME!\n" << wordP << " is NOT a Palindrome";
    }
    
    return 0;
}
