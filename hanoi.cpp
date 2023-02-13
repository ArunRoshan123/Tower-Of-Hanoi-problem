# Tower-Of-Hanoi-problem
#include <bits/stdc++.h>
using namespace std;
void TowerOfHanoi(int n,char Start,char End,char Mid)
{
    if(n==0)
    {
        return;
    }
    TowerOfHanoi(n-1,Start,Mid,End);
    cout<<"move "<<n<<" from start "<<Start<<" to end "<<End<<endl;
    TowerOfHanoi(n-1,Mid,End,Start);
}
int main()
{
    int n;
    cin>>n;
    TowerOfHanoi(n,'A','C','B');

    return 0;
}
