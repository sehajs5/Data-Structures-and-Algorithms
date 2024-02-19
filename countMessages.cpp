#include <iostream>
#include <vector>
#include <map>
using namespace std; 
map <string, vector<int> > okay;
void receiveMessage(string user, int time) {
	// Write your code here
	okay[user].push_back(time);
}

vector<int> getMessageCount(int l, int r, string user, int k) {
	// Write your code here
	vector <vector<int> > chunks;
	int toBePushed=l;
	while(toBePushed<=r){
		vector<int> v1;
		if((toBePushed+k-1)<r){
			v1.push_back(toBePushed);
			toBePushed+=k-1;
			v1.push_back(toBePushed);
			toBePushed++;
		}
		else{
			v1.push_back(toBePushed);
			v1.push_back(r);
		}
		chunks.push_back(v1);
	}
	vector<int> result;
	for(const auto& pair: okay){
		int count=0;
		string user1= pair.first;
		vector<int> values= pair.second;
		if(user1==user){
			for(int i=0;i<chunks.size();i++){
				int start= chunks[i][0];
				int end= chunks[i][1];
				for(int value: values){
                                  if (value >= start && value <= end) {
                                    result.push_back(1);
                                    count = 1;
                                    break;
                                  }
                                }
                        }
                        if(count==0){
				result.push_back(0);
			}
		}
	}
	return result;
}
int main(){
    receiveMessage("abc",5);
    receiveMessage("def",7);
    receiveMessage("abc",9);
    receiveMessage("abc",3);
    vector <int> resu= getMessageCount(5, 10, "abc", 3);
    for(int i=0;i<resu.size();i++){
        cout<<resu[i];
    }

}