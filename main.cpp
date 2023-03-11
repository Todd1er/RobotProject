#include <iostream>

using namespace std;

struct path {
    float alpha;
    float dist;
};

class BotCommands {
public:
    virtual void move() = 0;
};


class BotControl {

public:
    void forward (float t) {
        cout << "go forward " << t;
    }
    void rotate_right (float alpha) {
        cout << "rotate right " << alpha << " degrees";
    }
    void rotate_left (float alpha) {
        cout << "rotate left " << alpha << " degrees";
    }
    void stop () {
        cout << "stop";
    }
    void clean() {
        cout << "Cleaning";
    }

};
class server {
    struct crd {
        float x;
        float y;
    };

    crd find_paint() {
        crd paint_pos;
        return paint_pos;
    }
    crd find_bot() {
        crd bot_pos;
        /// обработка
        return bot_pos;
    }
    path find_path() {
        path way;
        crd pos1 = find_paint();
        crd pos2 = find_bot();

        return way;
    }
    void send() {
        path way = find_path();
        BotControl.forward(way.dist);
    }

};
int main() {

}
