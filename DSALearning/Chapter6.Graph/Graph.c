//
// Created by 86150 on 2023/9/11.
//
//用邻接矩阵法构造图
//比较适合用来存储稠密图
#define MaxVertexNum 100
typedef char vertexType;
typedef int edgeType;
typedef  int typeInfo;

typedef struct{
    vertexType Vex[MaxVertexNum];   //用于存储结点的数组
    edgeType  Edge[MaxVertexNum][MaxVertexNum]; //建立二阶矩阵用来存储边的信息    1表示两个顶点之间有边
    int vexNum,arcNum;  //用于存储边和顶点的个数
}MGraph;

//使用邻接表法来构造图
//邻接表法是顺序和链式存储的
typedef struct {
    int adjVex; //该弧指向的顶点
    struct ArcNode* next;  //下一个边
    typeInfo info;      //边的权值
}ArcNode;

typedef struct {            //顶点表结点
    vertexType vexData;     //顶点信息
    struct ArcNode* first;  //指向第一条依附该顶点的弧的指针
}VNode,AdjList[MaxVertexNum];

typedef struct {
    AdjList vertices;       //邻接表vertices
    int vertexNum , arcNum; //存储结点数量和边的数量
}ALGraph;