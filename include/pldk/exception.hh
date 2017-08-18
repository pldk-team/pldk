#ifndef PLDK_HEADER_EXCEPTION_HH
#define PLDK_HEADER_EXCEPTION_HH

#include <pldk/config/linking.hh>

#include <cstdint>
#include <exception>
#include <string>

namespace pldk
{
	class PLDK_EXPORT exception : public std::exception
	{
	public:
		exception(std::uintmax_t line, const char* function) noexcept;
		exception(const char* message, std::uintmax_t line, const char* function) noexcept;
		~exception() = default;

	public:
		exception& operator=(const exception& exception) noexcept;
		bool operator==(const exception& exception) const noexcept = delete;
		bool operator!=(const exception& exception) const noexcept = delete;

	public:
		virtual const char* what() const noexcept override;
		std::uintmax_t line() const noexcept;
		const char* function() const noexcept;

	private:
		const char* message_;
		std::uintmax_t line_;
		const char* function_;
	};
}

#endif