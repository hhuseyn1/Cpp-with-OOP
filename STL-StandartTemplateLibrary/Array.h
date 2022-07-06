#pragma once

template<typename T, size_t size>
class Array
{
private:
	T* _data;

public:
	Array() { _data = new T[size]{}; }

	void fill(const T& value)
	{
		for (size_t i = 0; i < size; i++)
			_data[i] = value;
	}

	T& at(size_t pos) {
		if (pos < 0 || pos >= size)
			throw range_error("range_error");

		return _data[pos];
	}
	const T& at(size_t pos) const
	{
		if (pos < 0 || pos >= size)
			throw range_error("range_error");

		return _data[pos];
	}

	T& operator[](size_t pos)
	{
		if (pos < 0 || pos >= size)
			throw range_error("range_error");

		return _data[pos];
	}
	const T& operator[](size_t pos) const
	{
		if (pos < 0 || pos >= size)
			throw range_error("range_error");

		return _data[pos];
	}

	T* data() { return _data; };
	const T* data() const { return _data; };


	class Iterator {
		T* _ptr;

	public:
		Iterator(T* ptr) : _ptr(ptr) { }

		Iterator& operator++()
		{
			++_ptr;
			return *this;
		}

		Iterator& operator++(int)
		{
			_ptr++;
			return *this;
		}

		T& operator*() { return *_ptr; }


		bool operator!=(const Iterator& other) {
			return other._ptr != _ptr;
		}

		bool operator==(const Iterator& other) {
			return other._ptr == _ptr;
		}


		Iterator& operator-(size_t value) {
			_ptr -= value;
			return *this;
		}


		Iterator& operator+(size_t value) {
			_ptr += value;
			return *this;
		}
	};

	Iterator begin() { return Iterator(_data); };
	const Iterator begin() const { return Iterator(_data); };

	Iterator end() { return Iterator(_data + size); };
	const Iterator end() const { return Iterator(_data + size); };
};
