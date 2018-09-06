//
/*for(int i = 0;i<10;i = i+1){
	cout<<"hello";
}*/
/*
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6
1 2 3 4 5 6*/



#include<iostream>
using namespace std;

void print1_to_n(int num){
	for (int i = 1; i <= num; ++i)
	{
		cout<<i<<" ";
	}
}


int main(){

	for (int i = 0; i < 5; ++i)
	{
		// line upto 5
		print1_to_n(5);
		cout<<endl;
	}

}








