#include<iostream>
using namespace std;
int cnt=0, i=0, f=0;
void state3(string s)
{
    if(i>=s.size()) return;
    else if(s[i]-'0'>=0 and s[i]-'0'<=9)
    {
        cnt++;
        i++;
        state3(s);
    }
}
void state2(string s)
{
    f=1;
    if(i>=s.size()) return;
    else if(s[i]-'0'>=0 and s[i]-'0'<=9)
    {
        cnt++;
        i++;
        state3(s);
    }
}
void state1(string s)
{
    if(i>=s.size()) return;
    else if(s[i]-'0'>=0 and s[i]-'0'<=9)
    {
        cnt++;
        i++;
        state1(s);
    }
    else if(s[i]=='.')
    {
        cnt++;
        i++;
        state2(s);
    }
}
void state0(string s)
{
    if(i>=s.size())
        return;
    else if(s[i]-'0'>=0 and s[i]-'0'<=9)
    {
        cnt++;
        i++;
        state1(s);
    }
    else if(s[i]=='.')
    {
        cnt++;
        i++;
        state2(s);
    }
}
int main()
{
    string s; cin>>s;
    state0(s);
    if(cnt==s.size() and f==1)
        cout<<"Valid";
    else
        cout<<"Invalid";
}

