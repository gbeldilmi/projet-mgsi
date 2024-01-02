#include win_control.hpp

vector<string> getCmd(const string &s, char delim) {
    vector<string> elems;
    split(s, delim, elems);
    return elems;
}