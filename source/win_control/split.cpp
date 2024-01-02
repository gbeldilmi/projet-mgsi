#include win_control.hpp

void split(const string &s, char delim, vector<string> &elems) {
    stringstream ss(s);
    string item;
    while (getline(ss, item, delim)) {
        transform(item.begin(), item.end(), item.begin(), ::tolower); // On passe le texte en minuscule
        elems.push_back(item);
    }
}