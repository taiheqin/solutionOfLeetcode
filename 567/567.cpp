#include<iostream>
#include<string.h>
using namespace std;
bool checkArray(int a1[],int a2[]){
    for (int i = 0; i < 26; i++)
        if (a1[i]!=a2[i])
            return false;
    return true;    
}
int main(){
    string  s1= "ab", s2 = "abdbaooo";
    int s1len=s1.length(),s2len=s2.length();
    int a1[26],a2[26];
    if (s1len>s2len)
        cout<< "1";
    for(int i=0;i<s1len;i++){
        a1[s1[i]-'a']++;
        a2[s2[i]-'a']++;
    }
    if (checkArray(a1,a2))
         cout<< "2";
    for (int i = s1len; i < s2len; i++){
        a2[s2[i]-'a']++;
        a2[s2[i-s1len]-'a']--;
        if (checkArray(a1,a2))
            cout<< "3";
    }
    cout<< "4";
    return 0;
}