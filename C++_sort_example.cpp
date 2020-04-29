#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int i;
	int data_list[7] = {6, 2, 5, 1, 10, 4, 9};
	
	sort(data_list, data_list + 7);
	
	for(i=0; i<7; i++){
		cout << data_list[i] << " ";
	}
	
	cout << endl;
	return 0;
}
