template<class T>
class Queue
{
public:
	Queue() {
		front = 0;
		rear = -1;
		counter = 0
		maxSize = 0;
}
	void push(T t) {
		rear++;
		counter;
		value[rear] = t;
	}
	T pop(){
		T t;
		t = value[front];
		front++;
		counter--;
		return t;
	}
private:
	
	T front;		
	T rear;		
	T counter;	
	int maxSize;	
	T values[maxSize];
};

