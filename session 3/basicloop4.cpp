 
/*
    *
   ***
  *****
 *******
*********

*/



#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

void print_i_stars(int num){
	for (int i = 0; i < num; ++i)
	{
		cout<<"*";
	}
}


void print_some_spaces(int number){
	for (int i = 0; i < number; ++i)
	{
		cout<<" ";
	}
}

int main(){
	int n  = 5;
	for (int i = 1; i <= n; ++i)
	{
		// print n-i space
		print_some_spaces(n-i);
		//print 2*i -1 stars
		print_i_stars(2*i-1);
		cout<<endl;
	}
}









