/*Problem Statement -: A taxi can take multiple passengers to the railway station at the same time.On the way back to the starting point,the taxi driver may pick up additional passengers for his next trip to the airport.A map of passenger location has been created,represented as a square matrix.

The Matrix is filled with cells,and each cell will have an initial value as follows:

A value greater than or equal to zero represents a path.
A value equal to 1 represents a passenger.
A value equal to -1 represents an obstruction.
The rules of motion of taxi are as follows:

The Taxi driver starts at (0,0) and the railway station is at (n-1,n-1).Movement towards the railway station is right or down,through valid path cells.
After reaching (n-1,n-1) the taxi driver travels back to (0,0) by travelling left or up through valid path cells.
When passing through a path cell containing a passenger,the passenger is picked up.once the rider is picked up the cell becomes an empty path cell. 
If there is no valid path between (0,0) and (n-1,n-1),then no passenger can be picked.
The goal is to collect as many passengers as possible so that the driver can maximize his earnings.*/
//The driver can contain a maximum of 5 passengers by taking the following path (0,0) → (0,1) → (1,1) → (2,1) → (2,2) → (2,1) → (2,0) → (1,0) → (0,0) 

#include <bits/stdc++.h>
using namespace std;
int n, m;
int mat[105][105];
map<pair<int, pair<int, int>>, int> dp;
bool isValid(int i, int j)
{
    if (mat[i][j] == –1)
        return false;
    if (i < 0 || i >= n)
        return false;
    if (j < 0 || j >= m)
        return false;
    return true;
}
int solve(int i, int j, int x, int y)
{
    if (!isValid(i, j))
    {
        return INT_MIN;
    }
    if (!isValid(x, y))
    {
        return INT_MIN;
    }
    if (i == n – 1 && x == n – 1 && j == m – 1 && y == m – 1)
    {
        if (mat[i][j] == 1)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    if (dp.find({i, {j, x}}) != dp.end())
        return dp[{i, {j, x}}];
 
    int cur = 0;
    if (i == x && j == y)
    {
        if (mat[i][j] == 1)
            cur = 1;
    }
    else
    {
        if (mat[i][j] == 1)
            cur++;
        if (mat[x][y] == 1)
            cur++;
    }
 
    int op1 = solve(i + 1, j, x + 1, y);
    int op2 = solve(i, j + 1, x, y + 1);
    int op3 = solve(i + 1, j, x, y + 1);
    int op4 = solve(i, j + 1, x + 1, y);
 
    int ans = cur + max(op1, max(op2, max(op3, op4)));
 
    return dp[{i, {j, x}}] = ans;
}
int main()
{
    cin >> n >> m;
 
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> mat[i][j];
    int ans = solve(0, 0, 0, 0);
    if (ans >= 0)
        cout << solve(0, 0, 0, 0) << endl;
    else
        cout << –1 << endl;
 
    return 0;
}
