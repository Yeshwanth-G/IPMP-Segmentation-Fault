class MedianFinder {
  //Time:add num-logn,find median:O(1),
public:
    priority_queue<int,vector<int>,greater<int>>more;
    priority_queue<int>less;
    MedianFinder() {
        
    }
    void addNum(int num) {
        if(less.empty()||num<=less.top())less.push(num);
        else more.push(num);
        if(!more.empty()&&more.size()>less.size()){
            less.push(more.top());
            more.pop();
        }
        else if(less.size()>more.size()+1){
            more.push(less.top());
            less.pop();
        }
    }
    double findMedian() {
        double m;
        if(more.size()==less.size()){
            m=(more.top()+less.top())/2.0;
        }
        else if(more.size()<less.size())
        m=(double)less.top();
        return m;
    }
};
