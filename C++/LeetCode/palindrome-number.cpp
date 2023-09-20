#include <string.h>

class Solution {
public:
    bool isPalindrome(int x) {
        string number = to_string(x);
        int tam = number.size();
        for(int i=0; i<(tam/2); i++){
            if (number[i] != number[tam - i - 1]){
                return false;
            } 
        }
        return true;
    }
};