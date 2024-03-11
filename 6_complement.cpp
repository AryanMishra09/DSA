#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    int complement = ~n;
    int mask=0;
    /* Coded by me
    while(n!=0){
        n=n>>1;
        i++;
    }
    for(int j=0;j<=i;j++){
        mask=mask<<1;
        mask=mask|1;
        j++;
    }
    */

   //Optimized code:
   while(n!=0){
    mask = (mask << 1) | 1;
    n = n >> 1;
   }
   
    cout<<"Complement: "<<(complement & mask);

}