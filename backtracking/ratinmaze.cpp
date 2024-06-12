//One jump based solution
#include<bits/stdc++.h>
using namespace std;
#define N 4

bool isSafe(int maze[N][N],int i,int j)
{
    if(i<N&&j<N&&maze[i][j]==1)
    return true;

    return false;
}

bool solveMazeRec(int maze[N][N],vector<vector<int>>&sol,int i,int j)
{
    if(i==N-1&&j==N-1&&maze[i][j]==1)
    {
        sol[i][j]=1;
        return true;
    }
    if(isSafe(maze,i,j))
    {
        sol[i][j]=1;
        if(solveMazeRec(maze,sol,i+1,j))
        return true;
        else if(solveMazeRec(maze,sol,i,j+1))
        return true;
        sol[i][j]=0;
    }
    return false;
}