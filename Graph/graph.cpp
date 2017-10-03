/*

Author: Luzenildo de Sousa Batista Junior
E-Mail: luzejunior94@gmail.com

License:

MIT License

Copyright (c) 2017 Luzenildo de Sousa Batista Junior

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

*/

#include "graph.h"

//Graph::Graph(){
//  createGraph();
//}

void Graph::createGraph(Node* node){
  this->nodeVector.push_back(node);
}

int Graph::getNodeByName(string name){
  for(int i=0; i<this->nodeVector.size(); i++){
    if(!name.compare(this->nodeVector[i]->name)){
      return i;
    }
  }
  return -1;
}

int Graph::findNodeOnVector(Node* node){
  if(find(this->visitedNodes.begin(), this->visitedNodes.end(), node) != this->visitedNodes.end()){
    return 0;
  }else{
    return 1;
  }
}

int Graph::getMinorValueFromGraphList(int* i){
  int minorValue = 999999999;
  int index = 0;

  //for(int j=0; j<this->nodeVector[i]->vVector.size(); j++){
  //  if(findNodeOnVector(this->nodeVector[i]->vVector[j].nextNode)){
  //    if(this->nodeVector[i]->vVector[j].value < minorValue){
  //      cout << "Vector name: " << this->nodeVector[i]->vVector[j].nextNode->name << " Vector to compare: " << endl;
  //      minorValue = this->nodeVector[i]->vVector[j].value;
  //      index = j;
  //    }
  //  }
  //}

  for(int k=0; k<this->visitedNodes.size(); k++){
    for(int j=0; j<this->visitedNodes[k]->vVector.size(); j++){
      if(findNodeOnVector(this->visitedNodes[k]->vVector[j].nextNode)){
        if(this->visitedNodes[k]->vVector[j].value < minorValue){
          cout << "k Value: " << k << endl;
          cout << "j Value: " << j << endl;
          cout << "Vector name: " << this->visitedNodes[k]->name << " Going to: " << this->visitedNodes[k]->vVector[j].nextNode->name << endl;
          minorValue = this->visitedNodes[k]->vVector[j].value;
          index = j;
          *i = k;
        }
      }
    }
  }
  cout << "index Value: " << index << endl;
  return index;
}

void Graph::upgradeNodeWeight(Node* node){
  for(int i=0; i<node->vVector.size(); i++){
    int sumWeight = node->weight + node->vVector[i].value;
    if(sumWeight < node->vVector[i].nextNode->weight){
      node->vVector[i].nextNode->weight = sumWeight;
    }
  }
}

void Graph::PrimAlgorithm(){
  //for(int i=0; i<this->nodeVector.size(); i++){
  //  for(int j=0; j<this->nodeVector[i]->vVector.size(); j++){
  //    cout << "The vector " << this->nodeVector[i]->name << " has " <<
  //    this->nodeVector[i]->vVector[j].nextNode->name << " neighboor with value: " << this->nodeVector[i]->vVector[j].value << endl;
  //  }
  //}

  int i = 0;
  int auxindex = 0;
  int sum = 0;
  this->visitedNodes.push_back(this->nodeVector[i]);

  while(this->visitedNodes.size() < this->nodeVector.size()){
    int minorIndex = getMinorValueFromGraphList(&i);
    cout << "i Value: " << i << endl;
    auxindex = getNodeByName(this->visitedNodes[i]->vVector[minorIndex].nextNode->name);
    cout << "Value: " << this->visitedNodes[i]->vVector[minorIndex].value << endl;
    sum += this->visitedNodes[i]->vVector[minorIndex].value;
    i = auxindex;
    this->visitedNodes.push_back(this->nodeVector[i]);
  }

  cout << "Sum of everything: " << sum << endl;
  for(int i=0; i<this->visitedNodes.size(); i++){
    //for(int j=0; j<visitedNodes[i]->vVector.size(); j++){
      cout << "The vector " << this->visitedNodes[i]->name << endl;
      //visitedNodes[i]->vVector[j].nextNode->name << " neighboor with value: " << visitedNodes[i]->vVector[j].value << endl;
    //}
  }
}

void Graph::DijkstraAlgorihm(){
  int i = 0;
  this->visitedNodes.push_back(this->nodeVector[i]);
  this->visitedNodes[i]->weight = 0;
  upgradeNodeWeight(this->visitedNodes[i]);

  for(int j=0; j<this->visitedNodes[i]->vVector.size(); j++){
    cout << "Node: " << this->visitedNodes[i]->name << " Going to " << this->visitedNodes[i]->vVector[j].nextNode->name << " which has weight: " << this->visitedNodes[i]->vVector[j].nextNode->weight << endl;
  }
  //while(this->visitedNodes.size() < this->nodeVector.size()){
  //}
}
