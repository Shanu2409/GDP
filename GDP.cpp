// gdp 

#include <iostream>

using namespace std;

int gdp(int a, int b){		if(a==0){

		return b;

	}	

	if(b==0){

		return a;

	}

	

	while(a!=b){

		if(a>b){

			a -= b;

		}		

		if(b>a){

			b -=a;

		}

	}

	return a;

}

int main() {

      int a,b;

      

      cout<<"Enter number a and b : ";

      cin>>a>>b;

      cout<<gdp(a,b);	

}
