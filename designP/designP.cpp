
#include "main.h"

struct Journal
{
	string title;
	vector<string> entries;

	Journal(const string& title) : title(title) {}

	void add_entry(const string& entry) {
		static int count = 1;
		entries.push_back(lexical_cast<string>(count++) + ": " + entry);

	}
};

int main()
{
	return 0;
}

