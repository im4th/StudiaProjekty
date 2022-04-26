#include <iostream>
#include <vector>

using namespace std;

int makeHash(string pattern, int podstawa, int offset);

int updateHash(int hash, char s_prev, char s_next, int offset, int podstawa, int exp);

int pow(int p, int exp);

vector<int> krPatternMatch(string pattern, string text);

vector<int> naivePatternMatch(string text, string pattern);

int main()
{
    string w ="ABAB11234efa";
    // for(unsigned char i = 0; i< 255;i++)
    //     cout << "znak: " << i << " liczba: " <<(int)i << endl;
    int old_hash = makeHash(w.substr(0,4), 2, 'A');
    int new_hash = updateHash(old_hash, 'A', 'A', 'A',2,3);
    cout << old_hash << " " << new_hash;
    return 0;
}

int makeHash(string pattern, int podstawa, int offset)
{
    int result = 0, p_power = 1;
    for(int i = pattern.length()-1; i>=0; i--)
    {
        result += ((int)pattern[i]-offset)*p_power;
        p_power *= podstawa;
    }
    return result;
}

int updateHash(int hash, char s_prev, char s_next, int offset, int podstawa, int exp)
{
    hash-=((int)s_prev-offset)*pow(podstawa,exp);
    hash*=podstawa;
    hash +=(int)s_next - offset;
    return hash;
}

int pow(int p, int exp)
{
    int result =1;
    for(int i=0; i<exp; i++)
        result *=p;
    return result;
}

vector<int> krPatternMatch(string pattern, string text)
{
    vector<int> result;
    const int podstawa = 10;
    int hashPattern = 0, hashText = 0, i;
        hashPattern = makeHash(pattern, 'A', podstawa);
        hashText = makeHash(text.substr(0,pattern.length()), 'A', podstawa);
    i = pattern.length();
    int j;
    for(i=0; i <text.length(); i++)
    {
        if(hashPattern==hashText)
        {

        }
        if(i<text.length())
        {
            hashText=updateHash(hashText, text[j],text[i],offset,podstawa, pattern.length());
        }
        j++;
    }
    return result;
}

vector<int> naivePatternMatch(string text, string pattern)
{
    vector<int> result;
    for(int i=0; i<=text.length()-pattern.length(); i++)
    {
        int j;
        for(j=0; text[i+j]==pattern[j] && j < pattern.length(); j++)
        {}
        if(j==pattern.length())
            result.push_back(i);
    }
    return result;
}
