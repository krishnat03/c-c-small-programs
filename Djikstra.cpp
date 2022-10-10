#include<iostream>
using namespace std;
#define INF 999
//Djikstra Algorithm

int v,src,cost[100][100];
int dist[100];
bool visited[100]={0};
int parent[100];

void init()
{
    for(int i=0;i<v;i++){
        dist[i]=INF;
        parent[i]=i;
    }
    
    dist[src]=0;

}

int getNearest(){
    int minvalue=INF;
    int minnode=0;
    for(int i=0;i<v;i++){
        if(!visited[i] && dist[i]<minvalue){
            minvalue=dist[i];
            minnode=i;
        }
    }
    return minnode;
    
}

void dijkstra(){
    for(int i=0;i<v;i++){
        int nearest=getNearest();
        visited[nearest]=true;

        for(int adj=0;adj<v;adj++){
            if(cost[nearest][adj]!=INF && dist[adj]>dist[nearest]+cost[nearest][adj]){
                dist[adj]=dist[nearest]+cost[nearest][adj];
                parent[adj]=nearest;
            }

        }
    }
}

void display(){
    cout<<"Node:\t\t Cost\t\t Path:";
    for(int i=0;i<v;i++){
        cout<<i<<"\t\t "<<dist[i]<<"\t\t "<<" ";
        cout<<i<<" ";
        int parnode=parent[i];
        while(parnode!=src){
            cout<<"<-"<<parnode<<" ";
            parnode=parent[parnode];
        }
        cout<<endl;
    }
}
int main()
{
    cout<<"Enter the vertices"<<endl;
    cin>>v;
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        cin>>cost[i][j];
    }
    cout<<"ENter the source"<<endl;
    cin>>src; 
    init();
    dijkstra();
    display();
}