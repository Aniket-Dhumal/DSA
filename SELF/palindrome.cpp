#include<iostream>
using namespace std;

bool isPalindrome(int num){
   int rev = 0;
   int temp = num;
   while(temp !=0){
    int ld = temp%10;
    rev = rev*10+ld;
    temp = temp/10;
   }
   return (rev == num);
}

int getNum(){
   int num;
   cout<<"Enter a Number : "<<endl;
   cin>>num;
   return num;

}
void result(bool res){
   if(res == true){
      cout<<"Given Number is Palindrome"<<endl;

   }else{cout<<"Given number is not palindrome"<<endl;}
}

int main(){
   result(isPalindrome(getNum()));
   return 0;
}