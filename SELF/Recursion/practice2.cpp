#include<iostream>
using namespace std;

int fun(int x){
   if(x==1){
      return 0;
   }else{
      return 1+fun(x/2);
   }
}

int main(){
    cout<<fun(100);
   return 0;
}