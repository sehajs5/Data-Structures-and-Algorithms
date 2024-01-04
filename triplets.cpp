#include<iostream>
#include<vector>
using namespace std;
vector<vector<int> > findTriplets(vector<int>arr, int n, int K) {
	// Write your code here.
	vector<vector<int> > pair;
	sort(arr.begin(),arr.end());
	for(int i=0;i<n-2;i++){
		for(int j=i+1;j<n-1;j++){
			if((arr[i]+arr[j])>K){
				continue;
			}
			for(int k=j+1;k<n;k++){
				if((arr[i]+arr[k]+arr[j])==K){
					vector <int> temp;
					temp.push_back(arr[i]);
					temp.push_back(arr[j]);
					temp.push_back(arr[k]);
					bool isDuplicate= false;
					for(int l=0;l<pair.size();l++){
						if(temp==pair[l]){
							isDuplicate= true;
							break;
						}
					}
					if(!isDuplicate)
						pair.push_back(temp);
				}
			}
		}
	}
	return pair;
}
int main(){
    vector<int> sample1;
    sample1.push_back(10);
    sample1.push_back(5);
    sample1.push_back(5);
    sample1.push_back(5);
    sample1.push_back(2);
    vector <vector<int> > answer= findTriplets(sample1,sample1.size(),12);
    for (int i = 0; i < answer.size(); i++) {
        for (int j = 0; j < answer[i].size(); j++) {
            cout << answer[i][j] << "\t";
        }
        cout << endl;
    }
}