#include<iostream>
#include<math.h>
 
using namespace std;
 

int gcd(int a, int b)
{
    int temp;
    while(true)
    {
        temp = a%b;
        if(temp==0)
        return b;
        a = b;
        b = temp;
    }
}
 
int main()
{
    //2 random prime numbers
    double p = 2;
    double q = 5;
    double n=p*q;
    double count;
    double totient = (p-1)*(q-1);
 
    
    //e=encrypt
    double e=2;
 
    //to check co-prime such that e>1
    while(e<totient){
    count = gcd(e,totient);
    if(count==1)
        break;
    else
        e++;
    }
 
    
    double d;	//d=decrypt
 
    
    double x = 2;	//x is any arbitrary value
 
    //choosing d such that d*e = 1 + x * totient
    d = (1 + (x*totient))/e;
    double plain_msg = 13;
    double c = pow(plain_msg,e);
    double k = pow(c,d);
    c=fmod(c,n);
    k=fmod(k,n);
 
    cout<<"Plain message : "<<plain_msg;
    cout<<"\nCipher generated : "<<c;
    cout<<"\np : "<<p;
    cout<<"\nq : "<<q;
    cout<<"\nn = pq : "<<n;
    cout<<"\nTotient : "<<totient;
    cout<<"\nencryption key : "<<e;
    cout<<"\ndecryption key : "<<d;
    
 
    return 0;
}
