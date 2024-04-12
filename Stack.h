#include "LinkedList.h"


//1. 템플릿 클래스로 확장해야함
//2. Stack형식으로 Delete 함수 재정의해야함
//주의: first, current_size는 class의 멤버 변수이기 때문에 this 포인터를 사용하여 가져와야함

template <typename T>
//LinkedList class를 상속받음
class Stack : public LinkedList<T>{
	public:
		bool Delete(T& element) {
		   if (this->first == NULL) {
			return false; 
		}

		Node<T>*medium = this->first; 
		this->first = this->first->link;
		delete medium;
		this->current_size--;

		return true;
	}
};
