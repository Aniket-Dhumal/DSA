#include<iostream>
using namespace std;

int getNum(){
   int temp;
   cout<<"Enter a Number";
   cin>>temp;
   return temp;
}
 void print_1_to_n(int a){
   int temp = 1;
   if (a==0) return;
   print_1_to_n(a-1);
   cout<<a<<endl;

 }


int main(){

print_1_to_n(getNum());

   return 0;
}