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
      g1.nodeVector[lineCounter]->createEdge(value, g1.nodeVector[auxiliaryColumnCounter]);
      g1.nodeVector[auxiliaryColumnCounter]->createEdge(value, g1.nodeVector[lineCounter]);
      auxiliaryColumnCounter++;
    }
    columnCounter++;
    lineCounter++;
  }

  if(string(argv[1]).compare("prim") == 0){
    cout << "Running Prim Algorithm.... " << endl;
    g1.PrimAlgorithm();
  }
  else if(string(argv[1]).compare("dijkstra") == 0){
    cout << "Running Dijkstra Algorithm.... " << endl;
    g1.DijkstraAlgorihm();
  }
  else{
    cout << "Command not found" << endl;
  }

  return 0;
}
