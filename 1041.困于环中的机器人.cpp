/*
 * @lc app=leetcode.cn id=1041 lang=cpp
 *
 * [1041] 困于环中的机器人
 */
#include <string>
using namespace std;
// @lc code=start
class Solution {
 public:
  enum Dir {
    N = 0,  // 北
    W,      // 西
    S,      // 南
    E,      // 东

  };
  Dir getNextDir(Dir curdir, char command) {
    if (curdir == N) {
      if (command == 'L') {
        return W;
      } else if (command == 'R') {
        return E;
      }
    } else if (curdir == W) {
      if (command == 'L') {
        return S;
      } else if (command == 'R') {
        return N;
      }
    }
    if (curdir == E) {
      if (command == 'L') {
        return N;
      } else if (command == 'R') {
        return S;
      }
    }
    if (curdir == S) {
      if (command == 'L') {
        return E;
      } else if (command == 'R') {
        return W;
      }
    }
    return curdir;
  }

  bool isRobotBounded(string instructions) {
    Dir dir = N;
    int x=0;
    int y=0;
    for(char c:instructions){
        if (c == 'G') {
        switch (dir) {
          case N:
            y++;
            break;
          case W:
            x--;
            break;
          case E:
            x++;
            break;
          case S:
            y--;
            break;
        }
      }
      dir = getNextDir(dir, c);
    }
    if(!(x==0&&y==0)&&dir==N){
        return false;
    }else{
        return true;
    }
  }
};
// @lc code=end
