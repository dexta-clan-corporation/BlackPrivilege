#pragma once

#include <vector>

namespace Dexta
{

	template <typename T>
	class Vector
	{
	public:
		Vector() {}

		Vector(size_t size)
			: m_vItems(size)
		{}

		Vector(size_t size, const T& initValue)
			: m_vItems(size, initValue)
		{}

		virtual ~Vector() {}

		const T* getData() const { return m_vItems.data(); }

		T* getData() { return m_vItems.data(); }

		const T* getFront() const { return m_vItems.front(); }

		T* getFront() { return m_vItems.front(); }

		const T* getBack() const { return m_vItems.back(); }

		T* getBack() { return m_vItems.back(); }

		size_t getSize() const { return m_vItems.size(); }

		size_t getCapacity() const { return m_vItems.capacity(); }

		size_t isEmpty() const { return m_vItems.empty(); }

		void resize(size_t size)
		{
			m_vItems.resize(size);
		}

		void resize(size_t size, const T& initValue)
		{
			m_vItems.resize(size, initValue);
		}

		void reserve(size_t capacity)
		{
			m_vItems.reserve(capacity);
		}

		void pushBack(const T& t)
		{
			m_vItems.push_back(t);
		}

		void popBack()
		{
			m_vItems.pop_back();
		}

		const T& operator[](size_t index) const { return m_vItems[index]; }

		T& operator[](size_t index) { return m_vItems[index]; }

		void erase(size_t index)
		{
			m_vItems.erase(m_vItems.begin() + index);
		}

		void erase(size_t startIndex, size_t stopIndex)
		{
			m_vItems.erase(m_vItems.begin() + startIndex, m_vItems.begin() + stopIndex);
		}
	private:
#pragma warning ( push )
#pragma warning ( disable : 4251 )
		std::vector<T> m_vItems;
#pragma warning ( pop )
	};

}