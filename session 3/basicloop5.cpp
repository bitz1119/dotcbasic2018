
/*
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15

*/


#include <iostream>
using namespace std;

void printfrom_t_to_t_plus_i(int kaha_se,int num){
	for (int i = kaha_se; i < kaha_se+num; ++i)
	{
		cout<<i<<" ";
	}
}

int main(){
	int n = 5;
	int kaha_tak_print_ho_gaya = 0;
	for (int i = 1; i <= n; ++i)
	{
		printfrom_t_to_t_plus_i(kaha_tak_print_ho_gaya+1,i);
		kaha_tak_print_ho_gaya = kaha_tak_print_ho_gaya+i;
		cout<<endl;
	}
}





