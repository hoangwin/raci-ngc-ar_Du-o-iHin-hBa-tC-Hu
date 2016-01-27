#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.Int32[]
struct Int32U5BU5D_t1496069209_0;
// System.Collections.Generic.Link[]
struct LinkU5BU5D_t_2114406969_0;
// UnityEngine.Canvas[]
struct CanvasU5BU5D_t_386220411_0;
// UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>[]
struct IndexedSet_1U5BU5D_t992861775_0;
// System.Collections.Generic.IEqualityComparer`1<UnityEngine.Canvas>
struct IEqualityComparer_1_t_1844767683_0;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t_2018490193_0;
// System.Collections.Generic.Dictionary`2/Transform`1<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>,System.Collections.DictionaryEntry>
struct Transform_1_t714114651_0;

#include "mscorlib_System_Object_1786876978.h"

// System.Collections.Generic.Dictionary`2<UnityEngine.Canvas,UnityEngine.UI.Collections.IndexedSet`1<UnityEngine.UI.Graphic>>
struct  Dictionary_2_t382357409_0  : public Object_t
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::table
	Int32U5BU5D_t1496069209_0* ___table_4;
	// System.Collections.Generic.Link[] System.Collections.Generic.Dictionary`2::linkSlots
	LinkU5BU5D_t_2114406969_0* ___linkSlots_5;
	// TKey[] System.Collections.Generic.Dictionary`2::keySlots
	CanvasU5BU5D_t_386220411_0* ___keySlots_6;
	// TValue[] System.Collections.Generic.Dictionary`2::valueSlots
	IndexedSet_1U5BU5D_t992861775_0* ___valueSlots_7;
	// System.Int32 System.Collections.Generic.Dictionary`2::touchedSlots
	int32_t ___touchedSlots_8;
	// System.Int32 System.Collections.Generic.Dictionary`2::emptySlot
	int32_t ___emptySlot_9;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_10;
	// System.Int32 System.Collections.Generic.Dictionary`2::threshold
	int32_t ___threshold_11;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::hcp
	Object_t* ___hcp_12;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.Dictionary`2::serialization_info
	SerializationInfo_t_2018490193_0 * ___serialization_info_13;
	// System.Int32 System.Collections.Generic.Dictionary`2::generation
	int32_t ___generation_14;
};
struct Dictionary_2_t382357409_0_StaticFields{
	// System.Collections.Generic.Dictionary`2/Transform`1<TKey,TValue,System.Collections.DictionaryEntry> System.Collections.Generic.Dictionary`2::<>f__am$cacheB
	Transform_1_t714114651_0 * ___U3CU3Ef__amU24cacheB_15;
};
