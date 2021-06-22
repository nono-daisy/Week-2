#include<iostream>
#include<cctype>
using namespace std;
// This program we help user to know if letter he/she wrote is vowel , consant or something else

int main(){
    char ch;
    cout << "Enter your character"<<endl;
    cin>>ch;
    
    if(isdigit(ch))
     cout << "The letter that you enter  is digit"<<endl;
     else if(isalpha(ch)){
         if((ch=='A')||(ch=='a')||(ch=='E') ||(ch=='e')||(ch=='I')||(ch=='i')||
         (ch=='O')||(ch=='o')){
              cout << "It is Vowel "<<endl;
         }
         else{
              cout << "The letter that you enter is consonant"<<endl;
         }
      } 
     else{
          cout << "The letter that you enter  is special character "<<endl;
     }
     return 0;
}