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

void Graph::createGraph(){
  Node n1("a");
  Node n2("b");
  Node n3("c");
  Node n4("d");
  Node n5("e");
  Node n6("f");
  Node n7("g");
  Node n8("h");
  Node n9("i");

  //Vertices from A:
  n1.createVertice(4, &n2);
  n1.createVertice(8, &n8);

  //Vertices from B:
  n2.createVertice(4, &n1);
  n2.createVertice(8, &n3);
  n2.createVertice(11, &n8);

  //Vertices from C:
  n3.createVertice(8, &n2);
  n3.createVertice(7, &n4);
  n3.createVertice(2, &n9);
  n3.createVertice(4, &n6);

  //Vertices from D:
  n4.createVertice(7, &n3);
  n4.createVertice(14, &n6);
  n4.createVertice(9, &n5);

  //Vertices from E:
  n5.createVertice(9, &n4);
  n5.createVertice(10, &n6);

  //Vertices from F:
  n6.createVertice(10, &n5);
  n6.createVertice(14, &n4);
  n6.createVertice(2, &n7);
  n6.createVertice(4, &n3);

  //Vertices from G:
  n7.createVertice(2, &n6);
  n7.createVertice(1, &n8);
  n7.createVertice(6, &n9);

  //Vertices from H:
  n8.createVertice(1, &n7);
  n8.createVertice(9, &n9);
  n8.createVertice(11, &n2);
  n8.createVertice(8, &n1);

  //Vertices from I:
  n9.createVertice(2, &n3);
  n9.createVertice(6, &n7);
  n9.createVertice(9, &n8);

  nodeVector.push_back(&n1);
  nodeVector.push_back(&n2);
  nodeVector.push_back(&n3);
  nodeVector.push_back(&n4);
  nodeVector.push_back(&n5);
  nodeVector.push_back(&n6);
  nodeVector.push_back(&n7);
  nodeVector.push_back(&n8);
  nodeVector.push_back(&n9);
}
