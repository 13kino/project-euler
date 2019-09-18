  #include <iostream>
using namespace std;
bool isprime(long);
int main()
{ long sum=2;
    for(long i=3;i<2000000;i=i+2)
    {
        if(isprime(i)) 
        {
            sum=sum+i;
        }
    }
    cout<<sum;
    return 0;
}

bool isprime(long n)
{   if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
	return true;   
}
