#include<iostream>
using namespace std;

int main()
{
    int x, y; cin >> x >> y;
    bool isNL = false;
    for(int i = x; i <= y; i++)
    {
        int temp = i; bool isL;
        while(temp > 0)
        {
            if(temp % 10 == 4 || temp % 10 == 7)
            {
                temp /= 10;
                isL = true;
            }
            else
            {
                isL = false;
                break;
            }
        }
        if(isL) 
        {
        cout << i << " "; 
        isNL = true;
        }
    }
     if(!isNL) cout << -1 ;
}