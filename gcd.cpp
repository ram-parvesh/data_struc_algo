#include<iostream>

using namespace std;

int gcd(int a,int b){
    if((a==0) && (b!=0))
    return b;
    if((a!=0) && (b==0))
    return a;
    else
    return gcd(b,a%b);
}

int main(int argc, char *argv[]){
    int n1,n2;
    cout<<"enter two numbers whose GCD has to be found"<<endl;
    cin>>n1>>n2;
    cout<<"\n GCD of"<< n1 <<" and" <<n2<<"is "<<gcd(n1,n2)<<endl;
    return 0;
    
}
