#include<iostream>
#include<vector>
using namespace std;


vector<pair<char, int>> inputVector(vector<pair<char, int>> v, int alpha)
{
    alpha = tolower(alpha);
    if(v.size()==0)
    {
        v.push_back({alpha, 1});
        return v;
    }

    int i = 0;
    while(int(v[i].first) <= int(alpha))
    {
        if(v[i].first == alpha)
        {
            v[i].second++;

            return v;
        }
        else if(i == v.size() - 1)
        {
            v.push_back({alpha, 1});

            return v;
        }

        i++;
    }

    v.insert(v.begin() + i, {alpha, 1});
    return v;
}

int main()
{
    string s;
    cin >> s;                 // input should be a word not a line that why we are not using getline()

    vector<pair<char, int>> vals;
    for(int i=0; i < s.length(); i++)
    {
        vals = inputVector(vals, s[i]);
    }
    for(int i=0; i<vals.size(); i++)
    {
        cout << vals[i].first << ":" << vals[i].second << endl;
    }
    return 0;
}
