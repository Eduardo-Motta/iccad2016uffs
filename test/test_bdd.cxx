
//#include <inputs_generator.hpp>
//#include <verilog_parser.hpp>
//#include <graph_simulator.hpp>
//#include <verilog_simulator.hpp>
//#include <verilog_graph_adapter.hpp>

#include <bdd_model.hpp>

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <map>
#include <chrono>

#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>

using namespace verilog::bdd;
using namespace std::chrono;

int main(int nargs, char** argv){
  
  BDD a("a");
  BDD b("b");

  /**
   * tests if number of nodes of a, d, c and d are equal
   */

  if (a.size() != 3) {
    std::cerr 
      << "BDD a should have size 3 but had size: " 
      << a.size() << "\n";
    return -1;
  }
  if (b.size() != 3) {
    std::cerr 
      << "BDD b should have size 3 but had size: " 
      << b.size() << "\n";
    return -2;
  }

  BDD c = a & b;

  if (c.size() != 4) {
    std::cerr 
      << "BDD c should have size 4 but had size: " 
      << c.size() << "\n";
    return -3;
  }

/*
  convert(v, g);


  std::vector<bool> input, output1, output2;
  Generator gen;
  gen.generate_inputs(input, v.inputs.size());



  steady_clock::time_point t1 = steady_clock::now();
  simulate(input, output1, g);
  steady_clock::time_point t2 = steady_clock::now();
  simulate(input, output2, v);
  steady_clock::time_point t3 = steady_clock::now();


  std::cout << "nand    Simulation: " << std::chrono::duration_cast<std::chrono::microseconds>(t2 - t1).count() << " microseconds." << std::endl;
  std::cout << "Netlist Simulation: " << std::chrono::duration_cast<std::chrono::microseconds>(t3 - t2).count() << " microseconds." << std::endl;
  
  if (output1 == output2)
    return 0;
  else 
    return -1;

*/
}
