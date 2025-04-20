#include <iostream>
#include <string.h>

using namespace std;

void RabinKarp(string text, string pattern, int q = 101){
    int d = 256;
    // int m = pattern.length();
    // int n = text.length();
    
    // Replaced .length() with a manual while loop to calculate length.
    int m = 0;
    while (pattern[m] != '\0') m++;    

    int n = 0;
    while (text[n] != '\0') n++;
    
    int p = 0;
    int t = 0;
    int h = 1;
    
    for(int i=0; i<m-1; i++){
        h = (h * d) % q;
    }
    for(int i=0; i<m; i++){
        p = (p * d + pattern[i]) % q;
        t = (t * d + text[i]) % q;
    }
    for(int i=0; i<=n-m; i++){
        if(p==t){
            if(text.substr(i,m) == pattern){
                cout << "Pattern found at index : " << i << endl;
            }
        }
    }
}
int main(){
    string text = "GEEKS FOR GEEK";
    string pattern = "GEEK";
    
    RabinKarp(text, pattern);
    return 0;
}