#include<iostream>
#include<map>

using namespace std;

bool anagrams(string str1, string str2);

int main(){
    string str1="abcd";
    string str2="dcba";
    
    cout<<anagrams(str1,str2)<<endl;
    cin.get();
    return 0;    
}

bool anagrams(string str1, string str2){
    if(str1.length()!=str2.length()) return false;
    for(int i=0;i <str1.length(); i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                str1[i]='*';
                break;
            }
        }    
    }
    for(int i=0;i<str1.length();i++){
        if(str1[i]!='*') return false;
    }
    return true;
}
