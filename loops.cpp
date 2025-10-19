// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i < 100; i++)
//     {
//       if(i%2!=0)cout<<i<<endl;
//     }
    
// }
// #include <iostream>
// using namespace std;
// int main(){
//     for (int i = 1; i < 100; i++)
//     {
//       if(i%2==0)cout<<i<<endl;
//     }
    
// }
// #include <iostream>
// using namespace std;        
// int main(){
//     for ( int i = 19; i <= 190; i=i+19)
//     {
//         cout<<i<<endl;
//     }
// }

// #include <iostream>
// using namespace std;    
// int main(){
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     for (int i=n;i<=n*10;i=i+n) {
//         cout<<i<<endl;
//     }
// }
// #include <iostream>
// using namespace std;    
// int main(){
//     int n;
//     cout<<"Enter a number:"<<endl;
//     cin>>n;
//     int f=1;
//     for (int i = 1; i <=n; i++)
//     {
//       if (n%i==0) 
//       f=i;
//     }
//     cout<<"The largest factor of "<<n<<" is "<<f;
    
// }
#include <iostream>
using namespace std;    
int main(){
    int n;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    
    for (int i =n/2; i >=1; i++)
    {
      if (n%i==0) 
     { 
      break;}
    }
    cout<<"The largest factor of "<<n<<" is "<<f;
    
}