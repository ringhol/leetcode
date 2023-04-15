/*
 * @lc app=leetcode.cn id=535 lang=cpp
 *
 * [535] TinyURL 的加密与解密
 */
#include<string>
#include<unordered_map>
using namespace std;
// @lc code=start
class Solution {
private:
    unordered_map<int,string> data;
    int id;
public:
    Solution(){id=0;}
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        data[id] = longUrl;
        int tmpId = id++;
        return "http://tinyurl.com/"+to_string(tmpId);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        auto idx = shortUrl.rfind("/")+1;
        return data[stoi(shortUrl.substr(idx,shortUrl.size()-idx))];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
// @lc code=end

