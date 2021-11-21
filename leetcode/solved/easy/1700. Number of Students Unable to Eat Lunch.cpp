class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
        int cnt = 0;
        while(1){
            if(sandwiches[0] ==students[0]){
                sandwiches.erase(sandwiches.begin());
                students.erase(students.begin());
                cnt = 0;
            }
            else{
                students.push_back(students[0]);
                students.erase(students.begin());
                cnt++;
            }
            if(cnt == students.size()) break;
            
        }
        return students.size();
    }
};
