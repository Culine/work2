//#include<bits/stdc++.h>
#include<iostream>
#include<algorithm>
#include<vector>
#include<time.h>
#include<unordered_map>
#include<unordered_set>
using namespace std;
vector<vector<int>> student(91,vector<int>(6));
vector<unordered_map<int,int>> mp(6);
unordered_set<int> record;
double e;
#define evaluates e
int lma = 8;
int sum = 0;
int absence = 0;
int func(int a) {
    if(a&2) return 1;
    else return 0;
}
int main()
{
    freopen("output.txt","r",stdin);
    srand(time(0));
    vector<double> gpa(91);
    for(int i = 1;i <= 90;i ++) 
    {
        double t;
        cin >> t;
        gpa[i] = t;
    }
    vector<double> temp(gpa);
    sort(temp.begin(),temp.end());
    double gpapd = temp[20];
    freopen("out.txt","r",stdin);
    for(int i = 1;i <= 5;i ++)
    {
        for(int j = 1;j <= 90;j ++)
        {
            int m,t;
            cin >> m >> t;
            student[m % 100][i] = t;
        }
    }
    for(int i = 1;i <= 5;i ++)
    {
        for(int j = 1;j <= 90;j ++) 
        {
            sum ++;
            if(student[j][i] == 1)
            {
                absence ++;
                mp[i][j] ++;
                if(gpa[j] < gpapd || mp[i][j] >= 2) record.insert(j);
            }
            cout << j << "在第" << i << "课出席情况" << student[j][i] << endl; 
        }
    }
    int cnt = 19;
    while(cnt --)
    {
        for(int i = 1;i <= 5;i ++)
        {
            for(int j = 1;j <= 90;j ++)
            {
                int m,t;
                cin >> m >> t;
                student[m % 100][i] = t; 
            }
        }
        int kkk = rand() % 10 + 1;
        double tt = rand() % 11 + 1;
        tt /= 1000;
        for(int i = 1;i <= 5;i ++)
        {
            for(auto& [k,v] : mp[i])
            {
                if(v > 0)
                {
                    if(student[k][i] == 1)
                    {
                        absence ++;
                        v ++;
                        if(v == 16) mp[i][k] = 0;
                        if(gpa[k] < gpapd || mp[i][k] >= 2) record.insert(k);
                    }
                    else v --;
                    cout << k << "在第" << i << "课出席情况" << student[k][i] << endl; 
                }
            }
        }
        int k = rand() % 90 + 1;
        int b = rand() & 5 + 1;
        if(student[k][b]) absence++;
        evaluates += tt;
        for (auto it = record.cbegin(); it != record.cend(); it++)
        {
            int k = *it;
            if(func(k)) sum ++;
            if(student[k / 100][k % 100] == 1) absence ++;
        }
    }
    e += absence * 1.0 / sum;
    cout << "E的值为:" <<  e;
    return 0;
}