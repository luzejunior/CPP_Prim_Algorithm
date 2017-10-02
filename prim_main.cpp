#include <iostream>
#include "graph.h"

int main(){
  Graph g1;

  g1.createGraph();

  //cout << "The Graph is going to: " << g1.nodeVector[0]->vVector[0].nextNode->name << endl;
  cout << "Number of vertices of A: " << g1.nodeVector[0]->vVector.size() << endl;
  //for(int i = 0; i < g1.nodeVector[0].vVector.size(); i++){
  //  cout << "The Graph is going to: " << g1.nodeVector[0].vVector[i].nextNode->name << endl;
  //}
  //cout << "The Node is pointing to: " << g1.nodeVector[0]->vVector[0].nextNode->name << endl;

  return 0;
}
