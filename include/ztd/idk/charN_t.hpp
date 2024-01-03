// =============================================================================
//
// ztd.idk
// Copyright © JeanHeyd "ThePhD" Meneide and Shepherd's Oasis, LLC
// Contact: opensource@soasis.org
//
// Commercial License Usage
// Licensees holding valid commercial ztd.idk licenses may use this file in
// accordance with the commercial license agreement provided with the
// Software or, alternatively, in accordance with the terms contained in
// a written agreement between you and Shepherd's Oasis, LLC.
// For licensing terms and conditions see your agreement. For
// further information contact opensource@soasis.org.
//
// Apache License Version 2 Usage
// Alternatively, this file may be used under the terms of Apache License
// Version 2.0 (the "License") for non-commercial use; you may not use this
// file except in compliance with the License. You may obtain a copy of the
// License at
//
// https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
// ============================================================================ //

#pragma once

#ifndef ZTD_IDK_CHAR8_T_HPP
#define ZTD_IDK_CHAR8_T_HPP

#include <ztd/idk/version.hpp>

#include <ztd/idk/charN_t.h>

#include <ztd/prologue.hpp>

//////
/// @addtogroup ztd_idk_charN_t ztd.idk char8/16/32_t code unit type definitions
///
/// @{
//////

namespace ztd {
	ZTD_IDK_INLINE_ABI_NAMESPACE_OPEN_I_

	//////
	/// @brief An alias to a unsigned representation of an 8-bit (or greater) code unit type.
	///
	/// @remarks This alias will always point to `wchar_t`, becauuse C++ has this as a built-in type.
	using uwchar_t = wchar_t;

	//////
	/// @brief An alias to a unsigned representation of an 8-bit (or greater) code unit type.
	///
	/// @remarks This will be a type alias for the type given in the `ZTD_CHAR8_T` define if it is defined by the user.
	/// Otherwise, it will be a type alias for char8_t if present. If neither are available, it will alias `unsigned
	/// char` for the type.
	using uchar8_t = ZTD_CHAR8_T_I_;

	//////
	/// @brief An alias to a unsigned representation of an 16-bit (or greater) code unit type.
	///
	/// @remarks This alias will always point to `char16_t`, because C++ has this as a built-in type.
	using uchar16_t = char16_t;

	//////
	/// @brief An alias to a unsigned representation of an 32-bit (or greater) code unit type.
	///
	/// @remarks This alias will always point to `char32_t`, because C++ has this as a built-in type.
	using uchar32_t = char32_t;

	ZTD_IDK_INLINE_ABI_NAMESPACE_CLOSE_I_
} // namespace ztd

//////
/// @}
//////

#include <ztd/epilogue.hpp>

#endif
