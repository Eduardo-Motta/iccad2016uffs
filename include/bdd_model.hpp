
#pragma once

#include <data_model.hpp>

#include <iostream>
#include <string>
#include <vector>
#include <stdexcept>
#include <map>
#include <sstream>
#include <boost/graph/graph_traits.hpp>
#include <boost/graph/adjacency_list.hpp>
#include <boost/graph/copy.hpp>
#include <boost/property_map/property_map.hpp>

namespace verilog 
{
  namespace bdd {

    enum class NegP { 
      Positive, Negative   
    };

    enum class Type {
      Zero, One, Input
    };

    struct Node {
      std::string input_name;
      Type t;
    };

    typedef boost::adjacency_list<
      boost::setS, 
      boost::vecS, 
      boost::bidirectionalS, 
      Node, NegP> GD;

    typedef unsigned int hashcode;

    struct BDD {
      GD graph;

      /**
       * The node representing the sinks of the BDD
       */
      int zero, 
          one, 
          /**
           * The node representing the source of the bdd
           */
          source;
      
      std::map<hashcode, std::vector<int> > bdd_heap;

      BDD(const std::string name) { 
        zero = boost::add_vertex(graph);
        one  = boost::add_vertex(graph);
        source = add_vertex(name);
        graph[zero].t = Type::Zero;
        graph[one].t  = Type::One;
      }
      
      /**
       * Creates a copy of a,
       * merges all nodes of b into the copy.
       * calls the conjunction_internal function for the copy.
       */
      BDD conjunction(const BDD & a, const BDD & b) {

        typedef std::map<GD::vertex_descriptor, GD::vertex_descriptor> node_map_t;
        node_map_t node_map;
        boost::associative_property_map<node_map_t> mapper(node_map);

        BDD c = a;
        copy_graph(b.graph, c.graph, boost::orig_to_copy(mapper));

        int old_zero = node_map[b.zero];
        int old_one  = node_map[b.one];

        // copies the old one edges into the new graph
        auto one_edges = in_edges(old_one, c.graph);
        for (auto e = one_edges.first; e != one_edges.second; ++e) {
            int s = boost::source(*e, c.graph);
            c.add_edge(s, c.one, c.graph[*e]); 
        }

        // copies the old zero edges into the new graph
        auto zero_edges = in_edges(old_zero, c.graph);
        for (auto e = zero_edges.first; e != zero_edges.second; ++e) {
            int s = boost::source(*e, c.graph);
            c.add_edge(s, c.zero, c.graph[*e]); 
        }

        c.source = c.conjunction_internal(c.source, node_map[c.source]);
        return c;

      }

      private:
      /**
       * Internal function that checks for all the cases
       * Accepts the nodes that must be conjoined
       * and returns the new source.
       */
      int conjunction_internal(int a, int b) {
        // TODO
        return 0;
      }


      int add_vertex(const std::string name) {
        int v = boost::add_vertex(graph);
        graph[v].input_name = name;
        graph[v].t          = Type::Input;
        return v;
      }

      void add_edge(int a, int b, NegP p) {
        boost::add_edge(a, b, p, graph);
      }

      /**
       * USE WITH CAUTION, as it changes the current BDD
       * - changes zero and one
       */
      void reverse() {
        int aux = one;
        one = zero;
        zero = aux;

        graph[zero].t = Type::Zero;
        graph[one].t  = Type::One;
      }

     
      // Criar um hash o mais unico possivel para um bdd
      hashcode hash(int v) {
        // TODO
      }

      // Compares BDDs
      friend bool operator<(const BDD & bdd1, const BDD & bdd2) {
        // TODO
      }

      /**
       * USE WITH CAUTION, as it changes the current BDD
       * - minimizes the BDD
       */
      void minimize() {
        // TODO
      }
    };
  }
}

