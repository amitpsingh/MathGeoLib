#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#include "../src/MathGeoLib.h"
#include "../src/Math/myassert.h"
#include "TestRunner.h"

TEST(Float2FromString)
{
	const char *locales[] = { "C", "en", "fi" }; // From http://www.loc.gov/standards/iso639-2/php/code_list.php

	for(int i = -1; i < (int)(sizeof(locales)/sizeof(locales[0])); ++i)
	{
		if (i != -1)
			setlocale(LC_ALL, locales[i]);
		assert(float2::FromString("-1.0000, +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000, +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000, +2)").Equals(float2(-1.0000,2)));

		assert(float2::FromString("-1.0000 ; +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000 ; +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000 ; +2)").Equals(float2(-1.0000,2)));

		assert(float2::FromString("-1.0000,+2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000,+2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000,+2)").Equals(float2(-1.0000,2)));

		assert(float2::FromString("-1.0000 +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000 +2").Equals(float2(-1.0000,2)));
		assert(float2::FromString("(-1.0000 +2)").Equals(float2(-1.0000,2)));
	}
}

TEST(Float3FromString)
{
	const char *locales[] = { "C", "en", "fi" }; // From http://www.loc.gov/standards/iso639-2/php/code_list.php

	for(int i = -1; i < (int)(sizeof(locales)/sizeof(locales[0])); ++i)
	{
		if (i != -1)
			setlocale(LC_ALL, locales[i]);
		assert(float3::FromString("+2, 3.1, -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2, 3.1, -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2, 3.1, -4)").Equals(float3(2,3.1f,-4)));

		assert(float3::FromString("+2; 3.1; -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2; 3.1; -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2; 3.1; -4)").Equals(float3(2,3.1f,-4)));

		assert(float3::FromString("+2,3.1, -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2,3.1, -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2,3.1, -4)").Equals(float3(2,3.1f,-4)));

		assert(float3::FromString("+2 3.1  -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2 3.1  -4").Equals(float3(2,3.1f,-4)));
		assert(float3::FromString("(+2 3.1  -4)").Equals(float3(2,3.1f,-4)));
	}
}
TEST(Float4FromString)
{
	const char *locales[] = { "C", "en", "fi" }; // From http://www.loc.gov/standards/iso639-2/php/code_list.php

	for(int i = -1; i < (int)(sizeof(locales)/sizeof(locales[0])); ++i)
	{
		if (i != -1)
			setlocale(LC_ALL, locales[i]);
		assert(float4::FromString("1, +2, 3.1, -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1, +2, 3.1, -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1, +2, 3.1, -4)").Equals(float4(1,2,3.1f,-4)));

		assert(float4::FromString("1 ; +2; 3.1; -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1 ; +2; 3.1; -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1 ; +2; 3.1; -4)").Equals(float4(1,2,3.1f,-4)));

		assert(float4::FromString("1,+2,3.1, -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1,+2,3.1, -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1,+2,3.1, -4)").Equals(float4(1,2,3.1f,-4)));

		assert(float4::FromString("1 +2 3.1  -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1 +2 3.1  -4").Equals(float4(1,2,3.1f,-4)));
		assert(float4::FromString("(1 +2 3.1  -4)").Equals(float4(1,2,3.1f,-4)));
	}
}

TEST(QuatFromString)
{
	const char *locales[] = { "C", "en", "fi" }; // From http://www.loc.gov/standards/iso639-2/php/code_list.php

	for(int i = -1; i < (int)(sizeof(locales)/sizeof(locales[0])); ++i)
	{
		if (i != -1)
			setlocale(LC_ALL, locales[i]);
		assert(Quat::FromString("1, +2, 3.1, -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1, +2, 3.1, -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1, +2, 3.1, -4)").Equals(Quat(1,2,3.1f,-4)));

		assert(Quat::FromString("1 ; +2; 3.1; -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1 ; +2; 3.1; -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1 ; +2; 3.1; -4)").Equals(Quat(1,2,3.1f,-4)));

		assert(Quat::FromString("1,+2,3.1, -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1,+2,3.1, -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1,+2,3.1, -4)").Equals(Quat(1,2,3.1f,-4)));

		assert(Quat::FromString("1 +2 3.1  -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1 +2 3.1  -4").Equals(Quat(1,2,3.1f,-4)));
		assert(Quat::FromString("(1 +2 3.1  -4)").Equals(Quat(1,2,3.1f,-4)));
	}
}
