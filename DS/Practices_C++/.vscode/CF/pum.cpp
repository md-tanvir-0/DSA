#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>> n;
    int total = n * 4 -1;
    int init = 1, limit = 3;
    for(int i=1; i<=n; i++)
    {
        while(init < total)
        {
            cout << init << " ";
            init +=1;
            if(init == limit)
            {
                cout << init << " PUM\n";
                init +=1;
                break;
            }
        } 
        init += 1;
        limit += 4;
    }
}