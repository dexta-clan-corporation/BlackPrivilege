#pragma once

#include <array>

namespace Dexta
{

	template <typename T, size_t SIZE>
	class Array
	{
	public:
		Array() {}

		virtual ~Array() {}

		const T* getData() const { return m_vItems.data(); }

		T* getData() { return m_vItems.data(); }

		const T* getFront() const { return m_vItems.front(); }

		T* getFront() { return m_vItems.front(); }

		const T* getBack() const { return m_vItems.back(); }

		T* getBack() { return m_vItems.back(); }

		size_t size() const { return m_vItems.size(); }

		size_t isEmpty() const { return m_vItems.empty(); }

		const T& operator[](size_t index) const { return m_vItems[index]; }

		T& operator[](size_t index) { return m_vItems[index]; }
	private:
#pragma warning ( push )
#pragma warning ( disable : 4251 )
		std::array<T, SIZE> m_vItems;
#pragma warning ( pop )
	};

}