//
// Created by 86150 on 2023/9/11.
//
//用邻接矩阵发构造图
#define MaxVertexNum 100
typedef char vertexType;
typedef int edgeType;

typedef struct{
    vertexType Vex[MaxVertexNum];   //用于存储结点的数组
    edgeType  Edge[MaxVertexNum][MaxVertexNum]; //建立二阶矩阵用来存储边的信息    1表示两个顶点之间有边
    int vexNum,arcNum;  //用于存储边和顶点的个数
}MGraph;
