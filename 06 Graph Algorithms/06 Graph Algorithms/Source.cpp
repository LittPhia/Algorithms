#include "list.h"
#include <iostream>

using namespace std;

int main() {
	phia::List<int> t;
	t.debugbuild();
	t.debugprint();
	phia::List<int> t2(t);

	t2.debugbuild();
	t2.debugprint();

	system("pause");
}