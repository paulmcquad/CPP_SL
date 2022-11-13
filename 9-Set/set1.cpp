#include <iostream>
#include <set>
#include <vector>

using namespace std;

class Student{
public:
    int id;
    string name;
    
    void print_student() const {
        cout << "[ name = " << name << ", id = " << id << "]\n";
    }
    
    bool operator < (const Student& other) const {
        return (this->id > other.id);
    }
};

int main() {
    set<int> s = {10, 20, 5, 10, 15, 20, 4};
    cout << "size = " << s.size() << endl;
    s.insert(100);
    s.insert(10);
    cout << "size = " << s.size() << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //auto it = s.erase(s.find(10));
    //cout << *it << endl;
    int num_erased = s.erase(10);
    cout << "num_erased = " << num_erased << endl;
    
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    auto ub = s.upper_bound(10);
    auto lb = s.lower_bound(10);
    cout << "ub = " << *ub << endl;
    cout << "lb = " << *lb << endl;
    
    s.insert({-10, -30, -20});
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    vector<int> v = {10, 20, 15, 5, 4};
    s.insert(v.begin(), v.end());
    for(auto& el: s)
        cout << el << " ";
    cout << endl;
    
    //------------
    set<Student> sst = {{50, "Simon"}, {20, "Thomas"}};
    for(auto& st: sst)
        st.print_student();
    

    return 0;
}
