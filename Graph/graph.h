#include <vector>
#include <string>
#include "node.h"

using namespace std;

class Graph{
  public:
    vector<Node*> nodeVector;
    //Graph();
    void createGraph(Node*);
    int getNodeByName(string);
    int getMinorValueFromGraphList(int);
    void PrimAlgorithm();
};
