#pragma once

#include <type_traits>
#include <cstdint>

template <size_t Size, bool Signed>
struct Integer;

template <size_t Size>
struct Integer<Size, true>
{
	static_assert(Size >= 1 && Size <= 64, "Integer size must be within 1 and 64");

	using BaseType =
		std::conditional_t<Size <= 8, std::int8_t,
		std::conditional_t<Size <= 16, std::int16_t,
		std::conditional_t<Size <= 32, std::int32_t,
		std::int64_t>>>;

public:
	BaseType Data = 0;

	constexpr auto Mask() const noexcept
	{
		return ~0ull >> 64 - Size;
	}

	constexpr auto Sign() const noexcept
	{
		return 1ull << Size - 1;
	}

	constexpr auto Cast(BaseType Value) const noexcept
	{
		return (Value & Mask() ^ Sign()) - Sign();
	}

public:
	template <typename T>
	constexpr Integer(T Value) : Data(Cast(Value)) {}
	constexpr Integer() = default;
	constexpr Integer(const Integer&) = default;
	constexpr Integer(Integer&&) noexcept = default;

	constexpr operator BaseType() const noexcept
	{
		return Data;
	}

	template <typename T>
	constexpr auto& operator=(T Value)
	{
		Data = Cast(Value);
		return *this;
	}

	template <typename T>
	constexpr auto operator+(T Value)
	{
		return Integer{ Cast(Data + Value) };
	}

	template <typename T>
	constexpr auto operator-(T Value)
	{
		return Integer{ Cast(Data - Value) };
	}

	template <typename T>
	constexpr auto operator*(T Value)
	{
		return Integer{ Cast(Data * Value) };
	}

	template <typename T>
	constexpr auto operator/(T Value)
	{
		return Integer{ Cast(Data / Value) };
	}

	template <typename T>
	constexpr auto operator%(T Value)
	{
		return Integer{ Cast(Data % Value) };
	}

	template <typename T>
	constexpr auto operator<<(T Value)
	{
		return Integer{ Cast(Data << Value) };
	}

	template <typename T>
	constexpr auto operator>>(T Value)
	{
		return Integer{ Cast(Data >> Value) };
	}

	template <typename T>
	constexpr auto operator&(T Value)
	{
		return Integer{ Cast(Data & Value) };
	}

	template <typename T>
	constexpr auto operator^(T Value)
	{
		return Integer{ Cast(Data ^ Value) };
	}

	template <typename T>
	constexpr auto operator|(T Value)
	{
		return Integer{ Cast(Data | Value) };
	}

	template <typename T>
	constexpr auto& operator+=(T Value)
	{
		*this = *this + Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator-=(T Value)
	{
		*this = *this - Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator*=(T Value)
	{
		*this = *this * Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator/=(T Value)
	{
		*this = *this / Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator%=(T Value)
	{
		*this = *this % Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator<<=(T Value)
	{
		*this = *this << Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator>>=(T Value)
	{
		*this = *this >> Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator&=(T Value)
	{
		*this = *this & Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator^=(T Value)
	{
		*this = *this ^ Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator|=(T Value)
	{
		*this = *this | Value;
		return *this;
	}

	constexpr auto& operator++()
	{
		Data = Cast(Data + 1);
		return *this;
	}

	constexpr auto& operator--()
	{
		Data = Cast(Data - 1);
		return *this;
	}
};

template <size_t Size>
struct Integer<Size, false>
{
	static_assert(Size >= 1 && Size <= 64, "Integer size must be within 1 and 64");

	using BaseType =
		std::conditional_t<Size <= 8, std::uint8_t,
		std::conditional_t<Size <= 16, std::uint16_t,
		std::conditional_t<Size <= 32, std::uint32_t,
		std::uint64_t>>>;

public:
	BaseType Data = 0;

	constexpr auto Mask() const noexcept
	{
		return ~0ull >> 64 - Size;
	}

	constexpr auto Cast(BaseType Value) const noexcept
	{
		return Value & Mask();
	}

public:
	template <typename T>
	constexpr Integer(T Value) : Data(Cast(Value)) {}
	constexpr Integer() = default;
	constexpr Integer(const Integer&) = default;
	constexpr Integer(Integer&&) noexcept = default;

	constexpr operator BaseType() const noexcept
	{
		return Data;
	}

	template <typename T>
	constexpr auto& operator=(T Value)
	{
		Data = Cast(Value);
		return *this;
	}

	template <typename T>
	constexpr auto operator+(T Value)
	{
		return Integer{ Cast(Data + Value) };
	}

	template <typename T>
	constexpr auto operator-(T Value)
	{
		return Integer{ Cast(Data - Value) };
	}

	template <typename T>
	constexpr auto operator*(T Value)
	{
		return Integer{ Cast(Data * Value) };
	}

	template <typename T>
	constexpr auto operator/(T Value)
	{
		return Integer{ Cast(Data / Value) };
	}

	template <typename T>
	constexpr auto operator%(T Value)
	{
		return Integer{ Cast(Data % Value) };
	}

	template <typename T>
	constexpr auto operator<<(T Value)
	{
		return Integer{ Cast(Data << Value) };
	}

	template <typename T>
	constexpr auto operator>>(T Value)
	{
		return Integer{ Cast(Data >> Value) };
	}

	template <typename T>
	constexpr auto operator&(T Value)
	{
		return Integer{ Cast(Data & Value) };
	}

	template <typename T>
	constexpr auto operator^(T Value)
	{
		return Integer{ Cast(Data ^ Value) };
	}

	template <typename T>
	constexpr auto operator|(T Value)
	{
		return Integer{ Cast(Data | Value) };
	}

	template <typename T>
	constexpr auto& operator+=(T Value)
	{
		*this = *this + Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator-=(T Value)
	{
		*this = *this - Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator*=(T Value)
	{
		*this = *this * Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator/=(T Value)
	{
		*this = *this / Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator%=(T Value)
	{
		*this = *this % Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator<<=(T Value)
	{
		*this = *this << Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator>>=(T Value)
	{
		*this = *this >> Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator&=(T Value)
	{
		*this = *this & Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator^=(T Value)
	{
		*this = *this ^ Value;
		return *this;
	}

	template <typename T>
	constexpr auto& operator|=(T Value)
	{
		*this = *this | Value;
		return *this;
	}

	constexpr auto& operator++()
	{
		Data = Cast(Data + 1);
		return *this;
	}

	constexpr auto& operator--()
	{
		Data = Cast(Data - 1);
		return *this;
	}
};