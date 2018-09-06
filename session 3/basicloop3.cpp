/**                 *
* *             * *
* * *         * * *
* * * *     * * * *
* * * * * * * * * *
*/
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
		//print i stars
		print_i_stars(i);
		//print spaces 2n-2i
		print_some_spaces(2*n-2*i);
		//print i stars
		print_i_stars(i);
		cout<<endl;
	}
}





