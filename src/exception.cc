#include <pldk/exception.hh>

namespace pldk
{
	exception::exception(std::uintmax_t line, const char* function) noexcept
		: line_(line), function_(function)
	{}
	exception::exception(const char* message, std::uintmax_t line, const char* function) noexcept
		: message_(message), line_(line), function_(function)
	{}

	exception& exception::operator=(const exception& exception) noexcept
	{
		message_ = exception.message_;
		line_ = exception.line_;
		function_ = exception.function_;
		return *this;
	}

	const char* exception::what() const noexcept
	{
		return message_;
	}
	std::uintmax_t exception::line() const noexcept
	{
		return line_;
	}
	const char* exception::function() const noexcept
	{
		return function_;
	}
}