#include <iostream>
#include <math.h>
using namespace std;
int factors(long long);
int main()
{
	long long n=0;long long q;
	for(long long i=2;;i++)
		{	
			
			q=((pow(i,2)+i)/2); 
     // cout<<endl<<factors(q);
      if(factors(q)>500)
				{
          cout<<q;
          return 0;
        }
    }
}


int factors(long long n)
{	
	int k=0;
	for(long long i=2;i<=sqrt(n);i++)
		{
	
			if(n%i==0&&n/i!=i)
				k=k+2;
			else if(n%i==0)
			    k++;
		}

	return k;
}
