#include<iostream>
#include<vector>

using namespace std;

void check_anagram(string s1, string s2){
    int c=0,i;
    for (i=0; i<s1.length(); i++){
        for(int j=0; j<s2.length(); j++){
            if(tolower(s1[i])==tolower(s2[j])){
                s2[j]=' ';
                c++;
                break;

            }
        }
    }
    if(c==i)
    cout<<"\n Anagram \n";
    else
    cout<<"\n Not Anagram \n";

}

int main(){
    string s1,s2;
    cout<<"Enter two string \n";
    cin>>s1>>s2;
    if(s1.length() != s2.length())
    cout<<"Strings are not anagram";
    else
    check_anagram(s1,s2);
    return 0;
}
