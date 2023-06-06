/*
BFS는 그래프를 탐색하는 알고리즘이며 어떤 정점에서 시작해 
다음 깊이의 정점으로 이동하기전 현재 깊이의 모든 정점을 탐색하며
방문한 정점은 다시 방문하지 않는 알고리즘입니다. 
같은 가중치를 가진 그래프에서 최단거리 알고리즘으로 쓰입니다.
-> 레벨별로 탐색을 한다.   

수도 코드 : Queue 자료구조를 사용한다.
연결되어 있는 노드들을 queue에 push하고 순회한다.
BFS(G, u)
    u.visited = 1
    q.push(u);
    while(q.size())
        u = q.front()
        q.pop()
        for each v => G.Adj[u]
            if v.vistied == false
                v.visited = u.visited + 1
                q.push(v)

*/

// #include<iostream>
// #include<queue>
// using namespace std;

// const int max_n = 104;
// // top, right, down, left
// int dy[4] = {-1, 0, 1, 0 };
// int dx[4] = {0, 1, 0, -1 };
// int n, m , a[max_n][max_n], visited[max_n][max_n], y, x, sy, sx, ey, ex;
// int main()
// {
//     // 맵의 크기 입력
//     scanf("%d %d", &n, &m);
//     // 맵의 시작지점 입력
//     scanf("%d %d", &sy, &sx);
//     // 맵의 종료지점 입력
//     scanf("%d %d", &ey, &ex);

//     for(int i = 0 ; i<n ; i++){
//         for(int j=0 ; j<m ; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }

//     queue<pair<int, int>> q;
//     visited[sy][sx] = 1;
//     q.push({sy, sx});
//     while(q.size()){
//         tie(y, x) = q.front(); q.pop();
//         for(int i =0 ; i<4 ; i++){
//             int ny = y + dy[i];
//             int nx = x + dx[i];
//             // 맵의 범위를 초과하는 경우
//             if(ny < 0 || nx <0 || ny>=n || nx>=m || a[ny][nx]==0) continue;
//             // 이미 방문을 한 경우
//             if(visited[ny][nx]) continue;
//             visited[ny][nx] = visited[y][x] +1; 
//             // 범위를 초과히지 않고 방문하지 않은 정점이 경우 queue에 삽입 
//             q.push({ny, nx});
//         }
//     }

//     printf("%d\n", visited[ey][ex]);
//     // 최단거리 디버깅
//     for(int i = 0 ; i<n; i++){
//         for(int j=0; j<m; j++)
//         {
//             cout<< visited[i][j] << ' ';
//         }
//         cout<<'\n';
//     }

//     return 0;
// }

 