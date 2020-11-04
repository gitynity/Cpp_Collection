#include<bitset>
#include<iostream>

using namespace std;

void binary(int n)
{
    string s = bitset<64>(n).to_string();
    auto loc = s.find('1');
    cout<<s.substr(loc);
}

int main()
{
    int n;
    cin>>n;
    binary(n);
    return 0;
}
