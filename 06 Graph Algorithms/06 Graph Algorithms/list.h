#pragma once
#include "vertex.h"
#include "edge.h"

#include <iostream>
#include <vector>

namespace phia {
	////////// DECLARATION //////////
	template <class T> class Vertex;
	template <class T> class Edge;
	template <class T> class List;
	template <class T> class Tree;
	template <class T> class Graph;
	/////////////////////////////////


	template <class T>
	class List {
	public:
		List() { vertices_ = nullptr; }
		List(const List &L2) {
			Vertex<T> *v2 = L2.vertices_;
			Vertex<T> *v1;
			if (v2) v1 = this->vertices_ = new Vertex<T>(*v2);
			else return;

			while (true) {
				if (v2->edges_) v1->edges_ = new Edge<T>, v2 = v2->edges_->to;
				else return;

				if (v2) v1 = v1->edges_->to = new Vertex<T>;
				else return;
			}
		}
		~List() { vertices_ = nullptr; }

		Vertex<T> pop_back() {

		}
		Vertex<T> push_back() {

		}
		Vertex<T> pop_front() {

		}
		Vertex<T> push_front() {

		}



		void debugbuild() {
			vertices_ = new Vertex<T>;
			vertices_->set(1);
			vertices_->edges_ = new Edge<T>;
			vertices_->edges_->from = vertices_;
			vertices_->edges_->to = new Vertex<T>;
			vertices_->edges_->to->set(2);
		}
		void debugprint() {
			for (Vertex<T> *v = vertices_; v; v = v->edges_->to) {
				std::cout << v->get() << std::endl;
				if (v->edges_ == nullptr) return;
			}
		}
	private:
		Vertex<T> *vertices_;
	};
}
