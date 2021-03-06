#include <iostream>
#include <vector>
#include <set>
using namespace std;


int main() {
    set<vector<bool> > states;
    
    vector<bool> state;
    
    int n, num;
    cin >> n;
    state.resize(n);
    for ( int i = 0; i <n; i++ )
    {
        cin >> num;
        state[i] = num;
    }
    
    vector<bool> temp;
    temp.resize(n);
    temp[0] = state[0];
    temp[n-1] = state[n-1];
    std::pair<std::set<vector<bool> >::iterator, bool> ret;
    int count = 0;
    int flag = 0;
    while(1)
    {
        for ( int i = 1; i < n-1; i++)
        {
            temp[0] = state[0];
            temp[n-1] = state[n-1];
            int sum = state[i-1] + state[i] + state[i+1];
            if (sum == 0 || sum == 1)
                temp[i] = 0;
            else if ( sum == 2 || sum == 3)
                temp[i] = 1;
        }
        ret = states.insert(temp);
        
        if ( ret.second == false || temp == state)
        {
            break;
            flag = 1;
        }
        count++;
        state = temp;
    }
    if ( flag == 1)
    {
        cout << -1;
        return 0;
    }
    cout << count << endl;
    for ( int i = 0 ; i < n; i++ )
    {   
        cout << temp[i] << ' ';
    }
    return 0;
}
