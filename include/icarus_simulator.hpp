#pragma once

#include <verilog_model.hpp>
#include <vector>
#include <iostream>
#include <fstream>
#include <algorithm>

namespace verilog {
  namespace icarus {
	  
	 void print_ids(std::ofstream & o, std::vector<std::string> & ids, std::string between) {
		bool f = true;
		for(auto i : ids) {
			if (f) f = false;
			else o << between;
			o << i;
		}
	 }
	 
	 
	 void print_atr(std::ofstream & o, std::vector<std::string> & names, std::vector<bool> & values){
		auto v = values.begin();
		auto n = names.begin();
		for(; n != names.end() && v != values.end(); ++n, ++v){
			int vint = *v;
			o << *n << " = " << vint << ";\n";
		}
	 }
	 
	 void print_out(std::ofstream & o, std::vector<std::string> & names){
		for(auto i : names){
			o << "$display(\"%d\", " << i << ");\n";
		}
	 }
	 
	  
    void simulate(std::ofstream & f, std::vector<bool> & inputs, std::vector<bool> & outputs, ast::Verilog & v) {
      
		std::vector<std::string> input_names = v.inputs;
        std::sort(input_names.begin(), input_names.end());

		std::vector<std::string> output_names = v.outputs;
        std::sort(output_names.begin(), output_names.end());

      
		f << "module __testbench;\n";
		f << "reg ";
		print_ids(f, input_names, ", ");
		f << ";\n";
		
		
		f << "wire ";
		print_ids(f, output_names, ", ");
		f << ";\n";
		
		f << "top X(";
		print_ids(f, v.ports, ", ");
		f << ");\n";
		
		f << "initial begin\n";
		
		print_atr(f, input_names, inputs);
		
		f << "#1\n";
		
		print_out(f, output_names);
		
		f << "end\nendmodule\n";
    }
  }
}
