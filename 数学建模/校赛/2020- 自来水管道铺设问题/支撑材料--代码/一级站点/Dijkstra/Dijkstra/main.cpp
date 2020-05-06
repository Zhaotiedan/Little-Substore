#define _CRT_SECURE_NO_WARNINGS 1

 /*
 该算法求有向图G的某顶点到其余节点的最短路径pre以及长度dist
 主程序循环主要做两件事：首先找出dist数组中的最小值，并记录下标，说明找到初始点到该下标的最短路径。
 然后要比价初始点到该点的最短路径加上这点到其他初始点需要到的点的距离是否比初始点直接到这些点的距离短
 如果要短，那么就更新dist数组，并且这些点的前驱节点就会变为v而不是开始的v0点。下一次主循环再去从dist中找
 最小的值并且未求过的点，就是该点的最短路径。
 */
 #include<iostream>
#include<string>
#include<vector>
#include <algorithm>   
#include <fstream>     
#include <iomanip> 
 using namespace std;
 int matrix[100][100];//邻接矩阵
 bool visited[100];//标记数组,是否已经求过最短路径
 int dist[100];//原点到i顶点的最短距离
 int pre[100];//记录最短路径的下标。pre[i]放的是i的前驱节点
 int source;//第一个节点
 int VStation_num;//顶点数
 int I_num;//边数
 
 void Dijkstra(int source)
 {
     //初始化
     memset(visited,0,sizeof(visited));
     visited[source] = true;
     for (int i = 0; i < VStation_num; i++)
     {
         dist[i] = matrix[source][i];
         pre[i] = source;
     }
 
     int min_cost;//最短距离
     int min_cost_index;//权值最小的那个顶点的下标。（求好了）
     //主循环
     for (int i = 1; i < VStation_num; i++)
     {
         min_cost = INT_MAX;
         for (int j = 0; j < VStation_num; j++)
         {
             //注意要确保这个点没有找过。
             if (visited[j]==false&&dist[j] < min_cost)
             {
                 min_cost_index = j;
                 min_cost = dist[j];
             }
         }
 
         visited[min_cost_index] = true;//找到某一个点的最短距离
         //利用该点进行dist的更新，并且调整前驱。
         for (int j = 0; j < VStation_num; j++)
         {
             //确保有连接
             if (visited[j] == false && matrix[min_cost_index][j] != INT_MAX&&min_cost+ matrix[min_cost_index][j] < dist[j])
             {
                 dist[j] = min_cost + matrix[min_cost_index][j];
                 pre[j] = min_cost_index;
             }
         }
     }
 }
 
 void FileRead_P()
 {
	 vector<double> V;
	 vector<double>::iterator it;
	 ifstream data("二级供水点数据分析.txt");
	 double d;
	 while (data >> d)
	 {
		 V.push_back(d);//将数据存入数组V
	 }
	 data.close();
	 int i = 0;
	 it = V.begin();
	 for (int _pindex = 1; _pindex <= 2; _pindex++)
	 {
		 cout << "二级供水站P" << _pindex << "到一级供水站的距离：" << endl;
		 for (; it != V.end(); it++)
		 {
			 cout << "到V" << i << " 的距离：" << setprecision(16) << *it << endl;
			 i++;
			 if (i == 12)
			 {
				 i = 0;
				 it++;

				 cout << endl;
				 break;
			 }
		 }
	 }

 }
 int main()
 {
     cout << "请输入一级供水站+中心站点总数目:";
     cin >> VStation_num;
     cout << "请输入I型管道最大数目: ";//图的边
     cin >> I_num;
     for (int i = 0; i < VStation_num; i++)
     {
         for (int j = 0; j < VStation_num; j++)
         {
             matrix[i][j] = (i != j) ? INT_MAX : 0;
         }
     }
     cout << "请输入每两个相邻一级站点的欧氏距离信息：\n";
     int u, v, w;
     for (int i = 0; i < I_num; i++)
     {
         cin >> u >> v >> w;
         matrix[u][v] = matrix[v][u] = w;
     }
 
     cout << "请输入v1(<" << VStation_num << "): ";
     cin >> source;
     Dijkstra(source);
     for (int i = 0; i < VStation_num; i++)
     {
         if (i != source)
         {
             //路径是反的，从目标点向前不断找前驱的过程。
             cout << source << "到" << i << "最短距离： " << dist[i] << ",路径是：" << i;
             int t = pre[i];
             while (t != source)
             {
                 cout << "--" << t;
                 t = pre[t];
             }
             cout << "--" << source << endl;
         }
     }

	 //二级
	 FileRead_P();
	 Dijkstra(source);
	 system("pause");
     return 0;
 }