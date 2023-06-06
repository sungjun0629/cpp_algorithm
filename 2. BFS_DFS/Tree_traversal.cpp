/*
트리 순회는 트리 구조에서 각각의 노드를 정확히 한 번만, 체계적인 방법으로 방문하는 과정을 말합니다.
이는 노드를 방문하는 순서에 따라 후위순회, 전위순회, 레벨순회가 있습니다. 
보통 설명할 때는 이진트리를 기반으로 설명하지만 *다른 모든 트리에서 일반화를 시킬 수 있습니다.

후위순회(postorder traveral) : 자식들 노드를 방문하고 자신의 노드를 방문하는 것을 말합니다.
postoder(node)
    if(node.visited == false)
        postorder(node->left)
        postorder(node->right)
        node.visited = true

전위순회(preorder traversal) : 먼저 자신의 노드를 방문하고 그 다음 노드를 방문하는 것을 말합니다. 
 => DFS와 비슷한다.
preorder(node)
    if(node.visited == false)
        node.visited = true
        preorder( node -> left )
        preorder( node -> right) 

중위순회(inorder traversal) : 왼쪽 노드를 먼저 방문하고 그 다음의 자신의 노드를 방문하고 그 다음 오른쪽 노드를 방문하는 것을 말합니다.
inorder(node)
    if(node.visited == false)
        inorder(node->left)
        node.visited = true
        inorder(node->right)


레벨순회 : BFS


*/

/* //postOrder traversal
#include<iostream>
#include<vector>
vector<int> adj[1004]; // push_back => adj[1][0] 
int visited[1004];

void postOrder(int here){
    if(visited[here] == 0){
        // 자식이 한 개일 경우 
        if(adj[here].size() == 1)postOrder(adj[here][0]);
        // 자식이 두 개인 경우(이진트리)
        if(adj[here].size() == 2){
            // left node
            postOrder(adj[here][0]); 
            // right node
            postOrder(adj[here][1]);
        }

        visited[here] = 1;
        cout<< here << ' ';
    }
}

*/

/* //preOrder traversal
#include<iostream>
#include<vector>
vector<int> adj[1004]; // push_back => adj[1][0] 
int visited[1004];

void preOrder(int here){
    if(visted[here]==0){
        visited[here] = 1;
        cout<< here << ' ';
        if(adj[here].size() == 1) preOrder(adj[here][0]);
        if(adj[here].size() == 2){
            preOrder(adj[here][0]);
            preOrder(adj[here][1]);
        }
    }
}

*/


/* //inOrder traversal
#include<iostream>
#include<vector>
vector<int> adj[1004]; // push_back => adj[1][0] 
int visited[1004];

void inOrder(int here){
    if(visited[here]==0)
    {
        if(adj[here].size() == 1)
        {
            inOrder(adj[here][0]);
            
            visited[here] = 1;
            cout << here << ' ';
        }else if(adj[here].size() == 2)
        {
            inOrder(adj[here][0]);

            visited[here] = 1;
            cout<< here << ' ';
            
            inOrder(adj[here][1]);
        }else
        {
            visited[here] = 1;
            cout<< here << ' ';
        }
    }
}

*/