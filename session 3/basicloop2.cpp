/*
1 
1 2  
1 2 3  
1 2 3 4 
1 2 3 4 5 

*/



#include <iostream>
using namespace std;

void print1_to_i(int num){
	for (int i = 1; i <= num; ++i)
	{
		cout<<i<<" ";
	}
}



int main(){
	for (int i = 1; i <= 5; ++i)
	{
		print1_to_i(i);
		cout<<endl;
	}
}





