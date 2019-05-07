#pragma once
#include "declarations.h"
#include "edge.h"

namespace phia {
	template <class V, class W>
	class Edge {
	public:
		Edge() {
			this->to_ = nullptr;
		}

		~Edge() {
			this->to_ = nullptr;
		}

		const W &weight() const {
			return this->weight_;
		}

		void set_weight(const W &new_weight) {
			this->weight_ = new_weight;
		}

		const V *to() const {
			return this-to_;
		}

		void redirect(V *to) {
			this->to_ = to;
		}


	private:
		V *to_;
		W weight_;
	};
}
