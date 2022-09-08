#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <iostream>
#include <exception>

template<typename T>
class Array{
	private:
		unsigned int capacity;
		T *value;
		bool check;
	public:
		Array(){
			capacity = 0;
			check = false;
		}

		Array(unsigned int capacity){
			this->capacity = capacity;
			if (capacity > 0)
			{
				check = true;
				value = new T[this->capacity];
			}
			else
			{
				check = false;
				throw OutOfRange();
			}
		}

		Array(const Array<T> &other){
			this->capacity = other.capacity;
			if (other.capacity > 0)
			{
				check = true;
				this->value = new T[other.capacity];
			}
			else
			{
				check = false;
				throw OutOfRange();
			}
		}

		virtual ~Array(){
			if (check)
				delete [] value;
		}

		Array& operator=(const Array& other){
			this->capacity = other.capacity;
			this->value = new T(other.capacity);
			this->check = other.check;
			return *this;
		}

		T &operator[](unsigned int index){
			if (index >= capacity)
				throw OutOfRange();
			return value[index];
		}

		class OutOfRange: public std::exception
		{
			const char* what() const throw(){
				return "out of range index";
			}
		};

		int size(){
			return this->capacity;
		}
};

#endif