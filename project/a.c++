#include <iostream>
using namespace std;
char occurance(string s){
    //int arr[25]={0};
    for(int i=0;i<s.length();i++){
       char ch=s[i];
       int number =0;
       if(ch>='a' && ch>='z'){
        number=ch-'a';
       }
       else{
        number=ch-'A';
       }
       //arr[number]++;
    cout<<number;
    }
}
int main(){
    string a="akash";
    occurance(a);
    return 0;
}