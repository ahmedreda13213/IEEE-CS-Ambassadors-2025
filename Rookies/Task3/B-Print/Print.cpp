#include <iostream>
using namespace std;

void print(int n){
   for(int i = 1 ; i <= n; i++){
    if(i > 1){
        cout << " ";
    }
   cout << i;
   }
 cout << endl;
} 

int main(){
 int n;
 cin>> n;
  print(n);
 return 0;
}