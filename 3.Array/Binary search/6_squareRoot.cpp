#include <iostream>
using namespace std;

int squareRootInteger(int a){
    int i=0, j=a-1, mid=0, ans=-1;
    while(i<=j){
        mid = i+(j-i)/2;
        if(mid*mid == a){
            return mid;
        }else if(mid*mid > a){
            j = mid-1;
        }else if(mid*mid < a){
            ans=mid;
            i=mid+1;
        }
    }
    return ans;
}

double morePrecisedAnswer(int a, int precision, int integerAns){
    double factor = 1;
    double ans = integerAns;
    for(int i=0; i<precision; i++){
        factor = factor/10;
        for(double j = ans; j*j<a; j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main(){
    int a;
    cout<<"Enter number: ";
    cin>>a;
    int ans = squareRootInteger(a);
    cout<<"Square root is: "<<ans<<endl;

    double temp = morePrecisedAnswer(a, 3, ans);
    cout<<"Square root upto 3 decimal places: "<<temp<<endl;
}