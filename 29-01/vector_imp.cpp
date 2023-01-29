#include<iostream>
using namespace std;
template <typename T>
class vector_custom{
	int sz;
	int cap;
	T *arr;
public:
	vector_custom(){
		arr = NULL;
		sz = 0;
		cap = 0;
	}
	vector_custom(int s, T n = 0){
		arr = new T [s];
		sz = s;
		cap = s;
		for(int i = 0; i < s; i++){
			arr[i] = n;
		}
	}
	void push_back(T t){
		if(cap == 0){
			arr = new T;
			cap++;
		}else if(sz == cap){
			int oc = cap;
			T * ov = arr;
			cap *= 2;
			arr = new T[cap];
			for(int i = 0; i < oc; i++){
				arr[i] = ov[i];
			}
		}
		arr[sz++] = t;
	}
	void reserve(int nc){
		if(nc > cap){
			int oc = cap;
			T * ov = arr;
			cap = nc;
			arr = new T[cap];
			if(oc){
				for(int i = 0; i < oc; i++){
					arr[i] = ov[i];
				}
			}
		}
	}
	void pop_back(){
		if(sz) sz--;
	}
	int capacity(){
		return cap;
	}
	bool empty(){
		return sz == 0;
	}
	int size(){
		return sz;
	}
	// syntax
	// return_type operator [] (parameter){

	// }
	T operator [] (int i){
		return arr[i];
	}
};
int main(){
	vector_custom<int> v(10);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	v.reserve(12);
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	cout<<v.size()<<endl;
	cout<<v.capacity()<<endl;
	for(int i = 0; i < v.size(); i++){
		cout<<v[i]<<" ";
	}cout<<endl;
	return 0;
}