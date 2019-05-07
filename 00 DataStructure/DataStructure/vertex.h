#pragma once
#include "declarations.h"
#include "edge.h"

namespace phia {
	enum { EDGE_IN, EDGE_OUT, EDGE_TYPENUM};

	template <class T, class W>
	class Vertex {
	public:
		Vertex() {
			this->edges_ = new Edge<Vertex, W>[EDGE_TYPENUM];
			this->in_size_ = this->in_capacity_ = 0;
			this->out_size_ = this->out_capacity_ = 0;
		}

		Vertex(const T &value) {
			this->edges_ = new Edge<Vertex, W>[EDGE_TYPENUM];
			this->value_ = value;
			this->in_size_ = this->in_capacity_ = 0;
			this->out_size_ = this->out_capacity_ = 0;
		}

		Vertex(const Vertex &V2) {
			this->edges_ = new Edge<Vertex, W>[EDGE_TYPENUM];

		}

		~Vertex() {

		}

		const Vertex &operator=(const Vertex V2) {

		}

		size_t in_size() const {
			return this->in_size_;
		}

		size_t out_size() const {
			return this->out_size_;
		}

		void in_resize(size_t new_size) {

		}

		void out_resize(size_t new_size) {

		}

		void in_reserve(size_t new_capacity) {

		}

		void in_reserve(size_t new_capacity) {

		}

		const Edge<Vertex, W> in_edge(size_t index) const {
			return this->edges_[EDGE_IN][index];
		}

		const Edge<Vertex, W> out_edge(size_t index) const {
			return this->edges_[EDGE_OUT][index];
		}

		void add_in_edge_to(Vertex *v2) {

		}

		void add_out_edge_to(Vertex *v2) {

		}

		void remove_in_edge_to(Vertex *v2) {

		}

		void remove_in_edge_index(size_t index) {

		}

		void remove_out_edge_to(Vertex *v2) {

		}

		void remove_out_edge_index(size_t index) {

		}


	private:
		T value_;
		Edge<Vertex, W> **edges_;
		size_t in_size_, in_capacity_;
		size_t out_size_, out_capacity_;
	};
}
