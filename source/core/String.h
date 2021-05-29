#pragma once

#include <string>

namespace Dexta
{

	class String
	{
	public:
		String() {}

		String(const String& str)
			: m_String(str.m_String)
		{}

		virtual ~String() {}

		const char* getData() const { return m_String.data(); }

		char getFront() const { return m_String.front(); }

		char getBack() const { return m_String.back(); }

		size_t size() const { return m_String.size(); }

		inline size_t length() const { return size(); }

		size_t isEmpty() const { return m_String.empty(); }

		inline char operator[](size_t index) const { return m_String[index]; }

		inline char at(size_t index) const { return m_String.at(index); }
	private:
#pragma warning ( push )
#pragma warning ( disable : 4251 )
		std::string m_String;
#pragma warning ( pop )
	};

}