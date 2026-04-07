class Robot {
public:
    int w, h;
    int x = 0, y = 0;
    string dir;
    int per;

    Robot(int width, int height) {
        w = width;
        h = height;
        dir = "East";
        per = 2 * (w + h - 2);
    }
    
    void step(int num) {
        num %= per;
        if(num==0) num = per;

        while(num--){
            int nx = x;
            int ny = y;

            if(dir == "East") nx++;
            else if(dir == "North") ny++;
            else if(dir == "West") nx--;
            else if(dir == "South") ny--;

            if(nx < 0 || nx >= w || ny < 0 || ny >= h) {
                if(dir == "East") dir = "North";
                else if(dir == "North") dir = "West";
                else if(dir == "West") dir = "South";
                else if(dir == "South") dir = "East";

                
                if(dir == "East") nx = x + 1, ny = y;
                else if(dir == "North") nx = x, ny = y + 1;
                else if(dir == "West") nx = x - 1, ny = y;
                else if(dir == "South") nx = x, ny = y - 1;
            }
            x = nx;
            y = ny;
        }
    }
    
    vector<int> getPos() {
        return {x,y};
    }
    
    string getDir() {
        return dir;
    }
};

/**
 * Your Robot object will be instantiated and called as such:
 * Robot* obj = new Robot(width, height);
 * obj->step(num);
 * vector<int> param_2 = obj->getPos();
 * string param_3 = obj->getDir();
 */