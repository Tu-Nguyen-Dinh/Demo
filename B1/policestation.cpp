#include<bits/stdc++.h>

using namespace std;
int n,m; 
int k;
int g[10004][10004];
bool visisted[10004][10004];
int mX[4]={-1,1,0,0};
int mY[4]={0,0,-1,1};
struct p
{
    int f,s,m;
};

bool  check(int x,int y)
{
    return  x>=1 && x<=m && y>=1 && y<=n;
}
void bfs(){
    deque<p> q;
    q.push_back({1,1,0});
    while(!q.empty())
    {
        int x=q.front().f;
        int y=q.front().s;
        int coin= q.front().m;
        q.pop_front();
        for(int i=0; i<4; i++)
        {
          
                if(check(x+mX[i],y+mY[x]) && !visisted[x+mX[i]][y+mY[i]])
                {   
                    visisted[x+mX[i]][y+mY[i]]=true;


                }
            
        }
    
    }
}
main()
{
    cin>>n>>m;
    cin>>k;
    memset(g,0,sizeof(g));
    for( int i=1 ;i<=k;i++)
    {
        int x,y; cin>>x>>y;
        g[x][y]=1;
    }
    bfs();
    
}