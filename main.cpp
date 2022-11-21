#include <iostream>
using namespace std;

int main() {
   int i, n = 0, a=1, b=1, c;
   cin>>n;

   if (n>=2){
      cout<<a<<endl<<b<<endl;
      for(i=2;i<n;i++){
          c=a+b;
          a=b;
          b=c;
          cout<<c<<endl;
     }else{
       cout<<"errore"<<endl;
  }
      return 0;
}
