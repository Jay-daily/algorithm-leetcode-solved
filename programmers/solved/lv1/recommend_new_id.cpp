#include <string>
#include <vector>


using namespace std;

string solution(string new_id) {
    string answer = "";

    //1단계
    for(int i = 0; i < new_id.length(); ++i){
        if((new_id[i] >= 'A' && new_id[i] <='Z'))
            new_id[i] += ('a'-'A');
    };

    //2단계
    for(int i = 0; i < new_id.length();){
        if ((new_id[i] >= 'a' && new_id[i] <='z') || ((new_id[i] >='0') && (new_id[i] <= '9')) || (new_id[i] == '-') || (new_id[i] == '_') || (new_id[i] == '.')){
            i++;
            continue;
        }
        else
            new_id.erase(new_id.begin() + i);
    };

     //3단계
    for(int i = 0; i < new_id.length();){
        if ( (new_id[i] == '.') && (new_id[i+1] == '.')){
            new_id.erase(new_id.begin() + i);
        }
        else i++;
    };

    //4단계
    if (new_id.front()=='.')
        new_id.erase(new_id.begin());
    if (new_id.back()=='.' )
        new_id.erase(new_id.end() -1 );

    //5단계
    if(new_id.length()==0) new_id.push_back('a');

    //6-1단계
    if(new_id.length() >= 16) 
        while(new_id.length() != 15) 
           new_id.erase(new_id.begin() + 15);

    //6-2단계
    if( (new_id.back())=='.')
        new_id.erase(new_id.end()-1 );

    //7단계
    if(new_id.length() <=2){
        while(new_id.length() != 3) 
           new_id.push_back(new_id[new_id.length()-1]);
    }
    return new_id;
}
