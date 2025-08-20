#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char str[100];
    cout<<"Enter a string";
    cin>>str;

    int len = strlen(str)-1;
    int i=0;
    bool isPalindrome = true;
    int j=len;
   while(i<len){
        if(str[i]!=str[j]){
            isPalindrome = false;
            break;
        }
        i++;
        j--;
   }

   if(isPalindrome){
    cout<<"String is Palindrome";
   }
   else{
    cout<<"String is not Palindrome";
   }

    return 0;
}