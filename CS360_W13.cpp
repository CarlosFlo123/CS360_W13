// Initialize a Map of string & int using initializer_list
std::map<std::string, map<std::string, vector<string>>> mapOfCompany;

/*The depth level might be bigger. Use matrix concept ;)*/
mapOfCompany["Software"]["Dave"].push_back("Tom");
/*
Eg.	Dept		Mgr		Emp
	Software	Dave		[Tom, Lily]
			Ken		[Iou, Nancy]
	Marketing	Carl		[Steve, Scott]

*/

//for printing
for(auto it = mapOfCompany.begin(); it != mapOfCompany.end(); it++){
	string dept = it->first;
	map<string, vector<string>> group = it->second;
	cout << dept << ": ";
	for (auto it2 = group.begin(); it2 != group.end; it2++){
		string mgr = it2->first;
		vector<string> emps = it2->second;
		cout << mgr << ": ";
		for (auto it3 = emps.begin(), it3 != emps.end(); it3++){
			cout << it3 << ", ";
		}
	}
	
}

//function | get a map with groups and count of groups
map<string, int> getGroupCount(map<string, map<string, vector<string>>> m){
	map<string, int> m2;
	for (auto it = mapOfCompany.begin(); it != mapOfCompany.end(); it++){
		string dept = it->first;
		auto group = it-> second;
		m2[dept] = group.size();
	}
}

//function findEmp(map) -> return if employee is in the Company.
bool findEmp(map<...> m, string emp){
	book bFound = false;
	for (auto id = m.begin(); it != m.end(); it++){
		auto group = it->second;
		for (auto it2 = group.begin(); it2 != group.end(); it2++){
			string mgr = it2->first;
			if (mgr == emp){
				return true;
			}
		}
	}
}
//doesnt compare with managers who are also employees

