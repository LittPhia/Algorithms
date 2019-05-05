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
	class Vertex {
		friend class List<T>;
		friend class Tree<T>;
		friend class Graph<T>;

	public:
		Vertex() { edges_ = nullptr; }
		Vertex(const Vertex &V2) {
			this->val_ = V2.val_;
			edges_ = nullptr;
		}
		~Vertex() { edges_ = nullptr; }

		void set(const T &val) { val_ = val; }
		T get() const { return val_; }

	private:
		T val_;
		Edge<T> *edges_;
	};
}
