#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    int minSideJumps(vector<int>& obstacles) {
        int local = 2;
        int size = obstacles.size();
        int sidejump = 0;
        int i = 0;
        while (i < size-1)
        {
            if (obstacles[i + 1] != local)
            {
                i++;
            }
            else
            {
                int way1 = (local + 1) % 3, way2 = (local + 2) % 3;
                if (way1 == 0)
                    way1 = 3;
                else if (way2 == 0)
                    way2 = 3;
                int j = i, k = i;
                while (j < size-1)
                {
                    if (obstacles[j] != way1)
                    {
                        j++;
                    }
                    else {
                        break;
                    }
                }
                while (k < size-1)
                {
                    if (obstacles[k] != way2)
                    {
                        k++;
                    }
                    else
                        break;
                }
                if (k >= j)
                {
                    local = way2;
                }
                else
                {
                    local = way1;
                }
                i = max(k, j)-1;
                i = max(k, j)-1;
                i += max(k, j)-1;
                i = max(k, j)-1;
                sidejump++;
            }


        }
        return sidejump;
    }
};
int main()
{
    Solution s;
    int a[5] = { 0,1,2,3,0 };
    vector<int>b(a, a + sizeof(a) / sizeof(int));
    cout<<s.minSideJumps(b)<<endl;
}
