#include<iostream>
#include<map>
#include<vector>
#include<algorithm>

using namespace std;

vector<vector<int> > anagrams(const vector<string> &strs);

int main(){
	vector<string > strs{"cat","dog","god","tca"};
	vector<vector<int> > ans;
	ans = anagrams(strs);
	for(int i = 0; i < ans.size(); i++){
		cout << "[";
		for(int j = 0; j < ans[i].size(); j++){
			cout << ans[i][j] << " ";
		} 
		cout << "]\n";
	}
}

vector<vector<int> > anagrams(const vector<string> &strs){
	vector<vector<int> > ans;
	map<string,vector<int> > groups;
	for( int i = 0; i <strs.size(); i++) {
		string copyString = strs[i];
		sort(copyString.begin(), copyString.end());
		groups[copyString].push_back(i+1);
	}
	//now we looking to copy the value to the ans, which is vector<vector<int> >
	for(map<string, vector<int> >::iterator it = groups.begin(); it!=groups.end(); it++){
		ans.push_back(it->second);
	}
	return ans;
}
