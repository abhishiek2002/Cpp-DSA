# Rat In a Maze

👉 <a href="https://www.naukri.com/code360/problems/rat-in-a-maze-all-paths_758966">Coding Ninja Problem Statement</a>

---
## MyCode:

```cpp
#include <bits/stdc++.h> 
void solve(vector<vector<int> > maze, vector<int> visitedArray, vector<vector<int> > &ans, int i, int j, int n){

    // base condition 1 ( reach at destination )
    if(i == n-1 && j == n-1){
        visitedArray[n*i + j] = 1;
        ans.push_back(visitedArray);
        return ;
    }

    // recurrence relation
    // left side
    if( j!=0 && maze[i][j-1] == 1){
        visitedArray[n*i + j] = 1;
        maze[i][j] = 0;
        solve(maze, visitedArray, ans, i, j-1, n);
    }

    // right side
    if( j!=n-1 && maze[i][j+1] == 1){
        visitedArray[n*i + j] = 1;
        maze[i][j] = 0;
        solve(maze, visitedArray, ans, i, j+1, n);
    }

    // up
    if( i != 0 && maze[i-1][j] == 1){
        visitedArray[n*i + j] = 1;
        maze[i][j] = 0;
        solve(maze, visitedArray, ans, i-1, j, n);
    }

    // down
    if( i != n-1 && maze[i+1][j] == 1){
        visitedArray[n*i + j] = 1;
        maze[i][j] = 0;
        solve(maze, visitedArray, ans, i+1, j, n);
    }

    // base condition 3 (no place to go any side)

    else{
        return ;
    }

}
vector<vector<int> > ratInAMaze(vector<vector<int> > &maze, int n){
    vector< vector<int> > ans;
    vector<int> visitedArray(n*n,0);

    solve( maze, visitedArray, ans, 0, 0, n);
    return ans;
}
```
---

## Input:
```txt
1 1 0
0 1 1
0 1 1
```

## Output
```txt
1 1 0 0 1 1 0 0 1 
1 1 0 0 1 0 0 1 1
```
---
