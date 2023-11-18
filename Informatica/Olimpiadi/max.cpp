#include "iostream"
#include "vector"
using namespace std;
int max(vector<int> arr){
	int m = arr[1];
	for(int i = 0; i < arr.size(); i++){
		if(arr[i] > m){
			m = arr[i];
		}
	}
	return m;

}


int main(){
	vector<int> arr = {1,2,3,4,5,6,7,8,9};
	cout << max(arr) << endl;
	return 0;

}
