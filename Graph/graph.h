#include <vector>
#include "node.h"

using namespace std;

class Graph{
  public:
    vector<Node*> nodeVector;
    //Graph();
    void createGraph(Node*);
    void PrimAlgorithm();
};
