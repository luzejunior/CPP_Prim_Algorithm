#include <iostream>
#include <fstream>
#include <sstream>
#include "Graph/graph.h"

using namespace std;

int main(int argc, char* argv[]){
  Graph g1;
  
  //Use archive input to create graph
  ifstream file("Samples/dij10.txt");
  string line;
  getline(file, line);
  stringstream ss(line);

  int i;
  ss >> i;

  for(int j=0; j<i; j++){
    g1.createGraph(new Node(to_string(j)));
  }

  int lineCounter = 0;
  int columnCounter = 1;
  while(getline(file, line)){
    int value;
    int auxiliaryColumnCounter = columnCounter;
    stringstream ss1(line);
    while(ss1 >> value){
      g1.nodeVector[lineCounter]->createVertice(value, g1.nodeVector[auxiliaryColumnCounter]);
      g1.nodeVector[auxiliaryColumnCounter]->createVertice(value, g1.nodeVector[lineCounter]);
      auxiliaryColumnCounter++;
    }
    columnCounter++;
    lineCounter++;
  }

  if(string(argv[1]).compare("prim") == 0){
    g1.PrimAlgorithm();
  }
  else if(string(argv[1]).compare("dijkstra") == 0){
    g1.DijkstraAlgorihm();
  }
  else{
    cout << "Command not found" << endl;
  }

  return 0;
}
