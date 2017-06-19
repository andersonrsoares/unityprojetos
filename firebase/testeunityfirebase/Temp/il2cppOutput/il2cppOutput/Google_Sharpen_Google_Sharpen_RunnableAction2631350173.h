#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object2689449295.h"

// System.Action
struct Action_t3226471752;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Google.Sharpen.RunnableAction
struct  RunnableAction_t2631350173  : public Il2CppObject
{
public:
	// System.Action Google.Sharpen.RunnableAction::_action
	Action_t3226471752 * ____action_0;

public:
	inline static int32_t get_offset_of__action_0() { return static_cast<int32_t>(offsetof(RunnableAction_t2631350173, ____action_0)); }
	inline Action_t3226471752 * get__action_0() const { return ____action_0; }
	inline Action_t3226471752 ** get_address_of__action_0() { return &____action_0; }
	inline void set__action_0(Action_t3226471752 * value)
	{
		____action_0 = value;
		Il2CppCodeGenWriteBarrier(&____action_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
