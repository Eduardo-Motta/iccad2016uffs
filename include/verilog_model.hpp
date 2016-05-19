#pragma once

#include <iostream>
#include <string>
#include <vector>

namespace verilog 
{
  namespace ast {

    enum class Opcode {
      And, Nand, Or, Nor, Xor, Xnor, Buf, Not
    };

    struct Function {
      Opcode op;
      std::vector<std::string> parameters;
      Function(Opcode op_, auto par_): op(op_), parameters(par_) {}
    };
    struct Verilog {

      std::vector<std::string> inputs, outputs, wires, ports;
      std::vector<Function> functions;

      void add_inputs(std::vector<std::string> const & vs) {
        inputs.insert(inputs.end(), vs.begin(), vs.end());
      }

      void add_outputs(std::vector<std::string> const & vs) {
        outputs.insert(outputs.end(), vs.begin(), vs.end());
      }
      
      void add_wires(std::vector<std::string> const & vs) {
        outputs.insert(outputs.end(), vs.begin(), vs.end());
      }

      void add_ports(std::vector<std::string> const & vs) {
        outputs.insert(outputs.end(), vs.begin(), vs.end());
      }

      void add_function(ast::Opcode const & op, std::vector<std::string> const & vs) {
        functions.push_back(Function(op, vs));
      }

    };
  }
}

