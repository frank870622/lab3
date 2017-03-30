#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;
int main(){
	int n;
	ifstream infile("file.in",ios::in);
	infile >> n;
	vector <int> v1(n);
	if ((n<5)||(n>10000)){
		cout << "wrong number" << endl;
		return 0;
	}
	for(int i=0;i<n;i++){
		int temp = 0;
		infile >> v1.at(i);
	}
	sort(v1.begin(),v1.end());
	int ans = 0;
	for(int i=n-1;i>n-6;--i) ans += v1.at(i);
	cout << ans << endl;
	return 0;
}
