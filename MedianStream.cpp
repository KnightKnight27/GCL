class MedianFinder {
public:
    priority_queue<int,vector<int>,greater<int> > MinHeap;
    priority_queue<int,vector<int> > MaxHeap; 
    MedianFinder() 
    {
        
    }
    void Balance(priority_queue<int,vector<int> > &MaxHeap,priority_queue<int,vector<int>, greater<int> > &MinHeap)
    {
        if(MaxHeap.size()>MinHeap.size() and MaxHeap.size()-MinHeap.size()>1)
        {
            int x=MaxHeap.top();
            MaxHeap.pop();
            MinHeap.push(x);
        }
        if(MinHeap.size()>MaxHeap.size() and MinHeap.size()-MaxHeap.size()>1)
        {
            int x=MinHeap.top();
            MinHeap.pop();
            MaxHeap.push(x);
        }
    }
    void addNum(int num) 
    {
        if(MaxHeap.size()==0 or num < MaxHeap.top())
        {
            MaxHeap.push(num);
        }
        else
        {
            MinHeap.push(num);
        }
        Balance(MaxHeap,MinHeap);
    }
    
    double findMedian() 
    {
        if(MaxHeap.size()==MinHeap.size())
        {
            return (double) (MaxHeap.top()+MinHeap.top())/(2.0);
        }
        else if(MaxHeap.size()>MinHeap.size())
        {
            return MaxHeap.top();
        }
        else
        {
            return MinHeap.top();
        }
    }
};
