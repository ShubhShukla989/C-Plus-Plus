// to count no. of digits in a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int count = 0;
//     while(n!=0){
//         n=n/10;
//         count++;
//     }
//     cout<<count<<endl;
    
// }

// sum of digits in a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//    while(n!=0){
//     int ld=n%10;
//     n/=10;
//     sum+=ld;
//     } cout<<sum<<endl;
   
// }
// product of digits in a number
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=1;
//    while(n!=0){
//     int ld=n%10;
//     n/=10;
//     if(ld==0){
//         continue;
//     }
//     sum*=ld;
//     } cout<<sum<<endl;
   
// }
// even digits of a number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//    while(n!=0){
//     int ld=n%10;
//     n/=10;
//             if(ld%2==0){
//        continue;
//                         }
//     sum+=ld;
// }
//         cout<<sum<<endl;
// }

// print reverse of given number

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int r=0;
//     while(n!=0){
//         int ld=n%10;
//         r*=10;
//         r+=ld;
//         n/=10;
//     }
//     cout<<r<<endl;
// }


// sum 1 to n
// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number: ";
//     cin>>n;
//     int sum=0;
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     cout<<sum<<endl;
// }


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        p*=i;
    }
    cout<<p<<endl;
}