// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     if (n%5==0)
//     {cout<<"n is divisible by 5";}
//     else {cout<<"n is not divisible by 5";
//     }
    
// }

#include <iostream>
using namespace std;
int main(){
    int l ,b;
    cout<<"Enter length :"<<endl;
    cin>>l;
    cout<<"Enter breadth:"<<endl;
    cin>>b;
    int A=l*b;
    int P=2*(l+b);
    if (A>P){cout<<"Area is greater than perimeter";}
    else if(P>A){cout<<"Perimeter is greater than area";}
else{cout<<"Area is equal to perimeter";
}
}