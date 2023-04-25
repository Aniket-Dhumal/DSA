#include<iostream>
using namespace std;
void n_to_one(int n){
    if(n<1){
      return;
   }
   cout<<n<<endl;
   n_to_one(n-1);

}
int getN(){
   int n;
   cout<<"Enter value for N"<<endl;
   cin>>n;
   return n;
}

int main(){
   n_to_one(getN());
   return 0;
}