#pragma once
#include "vertex.h"
#include "edge.h"

namespace phia {
	////////// DECLARATION //////////
	template <class T> class Vertex;
	template <class T> class Edge;
	template <class T> class List;
	template <class T> class Tree;
	template <class T> class Graph;
	/////////////////////////////////


	template <class T>
	class Tree {
	public:
		enum TreeType { ADJLISTS, ADJMAT };


	public:
		explicit Tree(Vertex<T> *start = nullptr) {
			this->type_ = type;
			this->root_ = start;
		}
		~Tree() {
			
		}

	public:
		TreeType type_;
		Vertex<T> *root_;
	};
}
