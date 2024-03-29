#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<vector<int>> grid1 = {
        {0,0,0,0},
        {1,0,1,0},
        {0,1,1,0},
        {0,0,0,0}
    };

    vector<vector<int>> grid2 = {
        {0,1,1,0},
        {0,0,1,0},
        {0,0,1,0},
        {0,0,0,0}
    };

    cout<<"Grid 1: " << numEnclaves(grid1) << '\n'; //Result: 3
    cout<<"Grid 2: " << numEnclaves(grid2) << '\n'; //Result: 0
}
