/*******************************************************************/
/*                                                                 */
/*  A1 Part 2: SortedList starter file                             */
/*                                                                 */
/*  version 1.1: fixed class declaration to include merge          */
/*                                                                 */
/*  Author1 Name: <name here>                                      */
/*      - class/function list                                      */
/*  Author2 Name: <name here>                                      */
/*      - class/function list                                      */
/*                                                                 */
/*******************************************************************/


template <typename T>

class SortedList{
	struct Node{

		Node(const T& data=T{},Node* nx=nullptr,Node* pr=nullptr){
			
		}
	};

public:
	class const_iterator{
	public:
		const_iterator(){}
		const_iterator& operator++(){}
		const_iterator operator++(int){}
		const_iterator& operator--(){}
		const_iterator operator--(int){}
		bool operator==(const_iterator rhs){}
		bool operator!=(const_iterator rhs){}
		const T& operator*()const{}
	};
	class iterator:public const_iterator{
	public:
		iterator(){}
		iterator& operator++(){}
		iterator operator++(int){}
		iterator& operator--(){}
		iterator operator--(int){}
		T& operator*(){}
		const T& operator*()const{}
	};
	SortedList();
	~SortedList();
	SortedList(const SortedList& rhs);
	SortedList& operator=(const SortedList& rhs);
	SortedList(SortedList&& rhs);
	SortedList& operator=(SortedList&& rhs);
	iterator begin(){}
	iterator end(){}
	const_iterator cbegin() const{}
	const_iterator cend() const{}
	iterator insert(const T& data);
	iterator search(const T& data);
	const_iterator search(const T& data) const;
	iterator erase(iterator it);
	void merge(SortedList& other);
	bool empty() const;
	int size() const;
};

template <typename T>
SortedList<T>::SortedList(){

}
template <typename T>
SortedList<T>::~SortedList(){

}
template <typename T>
SortedList<T>::SortedList(const SortedList& rhs){

}
template <typename T>
SortedList<T>& SortedList<T>::operator=(const SortedList& rhs){

}
template <typename T>
SortedList<T>::SortedList(SortedList&& rhs){

}

template <typename T>
SortedList<T>& SortedList<T>::operator=(SortedList&& rhs){

}


template <typename T>
typename SortedList<T>::iterator SortedList<T>::insert(const T& data){

}

template <typename T>
typename SortedList<T>::iterator SortedList<T>::search(const T& data){

}

template <typename T>
typename SortedList<T>::const_iterator SortedList<T>::search(const T& data) const{

}

template <typename T>
typename SortedList<T>::iterator SortedList<T>::erase(iterator it){

}

template <typename T>
void SortedList<T>::merge(SortedList& other){

}
template <typename T>
bool SortedList<T>::empty() const{

}
template <typename T>
int SortedList<T>::size() const{

}
