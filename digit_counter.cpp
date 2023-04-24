#include<iostream>
using namespace std;

long getNum(){
   long num = 0;
   cout<<"Enter a Number : "<<endl;
   cin>>num;
   return num;  
}

int digitCounter(long num){
   int count = 0;
      while(num != 0){
         num = num/10;
         ++count;
         /*if(num <=10){
            
         }*/
      }
      return count;
   
}
int main(){
   cout<<digitCounter(getNum());
   return 0;
}