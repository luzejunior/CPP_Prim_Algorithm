#include <vector>
#include <string>
#include <algorithm>
#include "node.h"

using namespace std;

class Graph{
  public:
    vector<Node*> nodeVector;
    vector<Node*> visitedNodes;
    //Graph();
    void createGraph(Node*);
    int findNodeOnVector(Node*);
    int getNodeByName(string);
    int getMinorValueFromGraphList(int*);
    void PrimAlgorithm();
};
