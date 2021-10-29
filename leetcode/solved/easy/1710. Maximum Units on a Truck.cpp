//2021 Jan

class Solution {
public:
	static bool mycomp(vector<int> &a,vector<int> &b){
		return a[1] >= b[1];
	}

	int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

		sort(boxTypes.begin(), boxTypes.end(), mycomp);

		long long int ans = 0;

		for(int i=0;i<boxTypes.size();i++){

			ans += min(truckSize,boxTypes[i][0]) * boxTypes[i][1];

			truckSize -= min(truckSize,boxTypes[i][0]);

			if(truckSize == 0) break;

		}

		return ans;
	}
};




//2021 Oct

class Solution {
public:
    
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),[] (const auto &l, const auto &r) {return l[1] > r[1];});
        int res=0;
        for(int i =0; i<boxTypes.size(); i++){
            while(1){
                truckSize--;
                boxTypes[i][0]--;
                res+=boxTypes[i][1];
                if(truckSize==0) return res;
                if(boxTypes[i][0]==0) break;
            }
        }
        return res;
    }
};
