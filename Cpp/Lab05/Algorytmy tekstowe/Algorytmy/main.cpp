#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> bmPatternMatch(string text, string pattern, vector<int> p, int begin);

vector<int> naivePatternMatch(string text, string pattern);

vector<int> makeShifttable(string pattern, int begin, int end);

vector<int> makeFittingTable(string pattern);

vector<int> kmpPatternMatch(string text, string pattern, vector<int> tablicaDopasowan);

int main()
{
    vector<int> p = makeShifttable("baac", 'a', 'd');
    for(int i = 0; i<p.size(); i++)
        cout << p[i] << " ";
    cout << endl;
    vector<int> c = bmPatternMatch("baabaaccaabaac", "baac", p, 'a');
    for(int i=0; i < c.size(); i++)
        cout << c[i] << " ";
    /*vector<int> res = naivePatternMatch("nabcaabcabca", "abca");
    for(int i=0; i < res.size(); i++)
        cout << res[i] << " ";
    vector<int> d = kmpPatternMatch("baabaaccaabaac", "baac", makeFittingTable("baac"));
    for(int i=0; i < d.size(); i++)
        cout << d[i] << " ";
    return 0;*/
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

vector<int> makeShifttable(string pattern, int begin, int end)
{
    vector<int> p;
    for(int i = 0; i<= end-begin; i++)
        p.push_back(-1);
    for(int i = 0; i < pattern.length(); i++)
        p[pattern[i] - begin] = i;
    return p;
}

vector<int> bmPatternMatch(string text, string pattern, vector<int> p, int begin)
{
    int numer =(int)begin;
    vector<int> result;
    int i;
    for(i = 0; i<=text.length() - pattern.length();)
    {
        int j;
        for(j=pattern.length()-1; j > -1 && pattern[j]==text[i + j]; j--)
        {}
        if(j==-1)
        {
            result.push_back(i);
            i++;
        }
        else
            i=i+max(1, j-p[text[i+j]-numer]);

    }
    return result;
}

vector<int> makeFittingTable(string pattern)
{
    vector<int> result;
    result.insert(result.begin(), 0);
    result.insert(result.begin()+1, 0);
    int t=0, i;
    for(i=1; i < pattern.length();i++)
    {
        while(t>0 && pattern[t]!= pattern[i])
            {
                t=result[t];
            }
        if(pattern[t]== pattern[i])
                t++;
        result.insert(result.begin()+i+1, t);
    }
    return result;
}

vector<int> kmpPatternMatch(string text, string pattern, vector<int> tablicaDopasowan)
{
    vector<int> result;
    int i, j;
    for(i=0; i<text.length()-pattern.length()+1;)
    {
        for(j=0; pattern[j]==text[i+j]&& j<pattern.length(); j++)
        {}
        if(j==pattern.length())
            result.push_back(i);
        i=i+max(1,j-tablicaDopasowan[j]);
        j=tablicaDopasowan[j];
    }
    return result;
}
