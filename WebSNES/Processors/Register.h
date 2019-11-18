#pragma once

#include "../Base/Integer.h"

namespace Detail
{
	template <size_t Size>
	struct RegisterBase
	{
		Integer<Size, false> Data;
	};
}

template <size_t Size>
struct Register : Detail::RegisterBase<Size> {};

template <>
struct Register<16> : Detail::RegisterBase<16>
{
	// #TODO: Endianness for 2 bytes.
};

template <>
struct Register<24> : Detail::RegisterBase<24>
{
	// #TODO: Endianness for 3 bytes.
};

template <>
struct Register<32> : Detail::RegisterBase<32>
{
	// #TODO: Endianness for 4 bytes.
};