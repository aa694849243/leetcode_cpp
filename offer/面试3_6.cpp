#include <vector>
#include <unordered_map>
#include <map>
#include <algorithm>
#include <iostream>
#include <stack>
#include <pair>
#include <queue>

using namespace std;
class AnimalShelf {
public:
    queue<pair<int,int>> cat;
    queue<pair<int,int>> dog;
    int num = 0;
    AnimalShelf() {

    }

    void enqueue(vector<int> animal) {
        if (animal[1]) {
            dog.push({animal[0], num});
        } else {
            cat.push({animal[0], num});
        }
        ++num;

    }

    vector<int> dequeueAny() {
        if (!cat.size() && !dog.size()) {
            return {-1, -1};
        }
        if(!cat.size()) return dequeueDog();
        if(!dog.size()) return dequeueCat();
        if(cat.front().second<dog.front().second) return dequeueCat();
        return dequeueDog();

    }

    vector<int> dequeueDog() {
        if(!dog.size()) return {-1, -1};
        int a = dog.front().first;
        dog.pop();
        return {a, 1};
    }

    vector<int> dequeueCat() {
        if(!cat.size()) return {-1, -1};
        int a = cat.front().first;
        cat.pop();
        return {a, 0};

    }
};

/**
 * Your AnimalShelf object will be instantiated and called as such:
 * AnimalShelf* obj = new AnimalShelf();
 * obj->enqueue(animal);
 * vector<int> param_2 = obj->dequeueAny();
 * vector<int> param_3 = obj->dequeueDog();
 * vector<int> param_4 = obj->dequeueCat();
 */