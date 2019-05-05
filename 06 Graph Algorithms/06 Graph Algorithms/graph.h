#pragma once
#include "list.h"
#include "tree.h"

namespace phia {
	////////// DECLARATION //////////
	template <class T> class Vertex;
	template <class T> class Edge;
	template <class T> class List;
	template <class T> class Tree;
	template <class T> class Graph;
	/////////////////////////////////


	template <class T>
	class Graph {
	public:
		enum GraphType { ADJLISTS, ADJMAT };


	public:
		explicit Graph(GraphType type = ADJLISTS) {
			this->type_ = type;
			vlist_ = mat_ = nullptr;
			vnum_ = 0;
		}
		Graph(const Graph &G2) {
			
		}
		~Graph() {
			if (mat_) delete mat_;
			mat_ = nullptr;

			if (vlist_) delete vlist_;
			vlist_ = nullptr;

			vnum_ = 0;
		}

		Tree<T> breadth_first_search(const Vertex<T> *start) const {
			enum Status { UNDISCOVERED, DISCOVERED };
			Status *status = new Status[vnum_];
			Tree<T> t(new Vertex<T>(*start));
			List<T> queue;

			if (this.type == ADJLISTS) {
				for (size_t i = 0; i < vnum_; i++) status[i] = UNDISCOVERED;
				queue.push_front()
			}


			delete status;
		}
		Tree<T> depth_first_search(const Vertex<T> *start) const {

		}

	public:
		GraphType type_;
		Vertex *vlist_;
		int *mat_;
		size_t vnum_;
	};
}
