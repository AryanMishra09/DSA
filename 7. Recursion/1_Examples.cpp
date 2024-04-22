// factorial and power of 2

#include <iostream>
using namespace std;

int factorial(int n){
    if(n==0){
        return 1;
    }
    /*
        smallerProblem = factorial(n-1);
        biggerProblem = n * smallerProblem;
        return biggerProblem;

                    or

        answer = n * factorial(n-1);
        return answer; 
    */
    return n * factorial(n-1);
}

int power(int n){
    if(n==0){
        return 1;
    }
    /*
        int smallerProblem = power(n-1);
        int biggerProblem = 2 * smallerProblem;
        return biggerProblem;
    */
    return 2 * power(n-1);
}

int main(){
    int n=8;
    int ans = factorial(n);
    cout<<"Factorial is: "<<ans<<endl;

    int p = 4;
    int ans2 = power(p);
    cout<<"Power is: "<<ans2;
}