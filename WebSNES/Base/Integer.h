#pragma once

template <size_t Size, bool Signed>
struct Integer;

template <size_t Size>
struct Integer<Size, true>
{
	static_assert(Size >= 1 && Size <= 64)

	using BaseType = std::conditional_t<Size <
};

template <size_t Size>
struct Integer<Size, false>
{
	static_assert(Size >= 1 && Size <= 64)

	
};