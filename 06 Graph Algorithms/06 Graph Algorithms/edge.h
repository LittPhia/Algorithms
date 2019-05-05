#pragma once

namespace phia {
	////////// DECLARATION //////////
	template <class T> class Vertex;
	template <class T> class Edge;
	template <class T> class List;
	template <class T> class Tree;
	template <class T> class Graph;
	/////////////////////////////////


	template <class T>
	class Edge {
		friend class List<T>;
		friend class Tree<T>;
		friend class Graph<T>;

	public:
		Edge() { from = to = nullptr; }
		~Edge() { from = to = nullptr; }

	private:
		Vertex<T> *from, *to;
	};
}
