#pragma once
#include "declarations.h"
#include "edge.h"

namespace phia {
	template <class T, class W>
	class Vertex {
	public:
		Vertex() {

		}

		~Vertex() {

		}

	private:
		T value_;
		Edge<Vertex<T, W>, W> **edges;
		size_t size_, capacity_;
	};
}
