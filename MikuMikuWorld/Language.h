#pragma once
#include <unordered_map>
#include <string>

namespace MikuMikuWorld
{
	class Language
	{
	  private:
		std::string code;
		std::unordered_map<std::string, std::string> strings;

	  public:
		Language(const char* code, const std::string& filename);
		Language(const char* code, const std::unordered_map<std::string, std::string>& strings);

		void read(const std::string& filename);
		const char* getCode() const;
		const bool containsString(const std::string& key);
		const char* getString(const std::string& key) const;
	};
}