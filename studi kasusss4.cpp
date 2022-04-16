#include <iostream>
using namespace std;

class Fibonacci {  
public:
    int a, b, c;
    void generate(int);

};
  
void Fibonacci::generate(int n)
{
    a = 0;
    b = 1;
  
    cout << a << " " << b;
  
    
    for (int i = 1; i <= n - 2; i++) {
        c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
}
int fibonacci(int n) 
{
	 if (n == 0) return 0; 
	 if (n == 1) return 1; 
 	return (fibonacci(n-1) + fibonacci(n-2)); 
 
}
int main()
{
    int n;
  	cout<<"Masukan angka = ";
  	cin>>n;
    Fibonacci fib;
  
    cout<<"Fibonacci dengan iteratif :";
    fib.generate(n);
    cout<<endl;
    cout<<"Fibonacci dengan rekursif :";
   for(int i=0;i<n;i++){
   	cout<< fibonacci ( i)<<" ";
   }
    return 0;
}
