#include<iostream>
#include<vector>
using namespace std;

void check(string s)
{
    int special = 0, small = 0, cap = 0, digit = 0;
    if(s.length() >= 6 && s.length() <= 12)
    {
        for(int i=0; i < s.length(); i++)
        {
            if(int(s[i]) >= 97 && int(s[i]) <= 122) small++;

            if(int(s[i]) >= 65 && int(s[i]) <= 90) cap++;

            if(s[i]-'0'>=0 && s[i]-'0'<=9) digit++;

            if(s[i] == '$' || s[i] == '#' || s[i] == '@') special++;
        }

        if(small >= 1 && cap >= 1 && digit >= 1 && special >= 1) cout<<s<<endl;
    }
}

int main()
{
    vector<string> v;
    string s;
    getline(cin, s);
    string word;
    for(int i=0; i < s.length(); i++)
    {
        if(s[i] == ',')
        {
            v.push_back(word);

            word = "";
            continue;
        }
        word = word + s[i];
    }

    v.push_back(word);

    for(int i=0; i < v.size(); i++)
    {
        check(v[i]);
    }
    return 0;
}
