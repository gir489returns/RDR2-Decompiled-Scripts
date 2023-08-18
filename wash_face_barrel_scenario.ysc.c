#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	bool bLocal_21 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	if (PED::IS_PED_INJURED(Global_33) || func_12() != 0)
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_21 && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.635461E-23f))
	{
		PED::_0xEB8886E1065654CD(Global_33, 4, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 6, "ALL", 0.5f);
		PED::_0xEB8886E1065654CD(Global_33, 1, "ALL", 0.5f);
		PED::_0xA7A806677F8DE138(Global_33);
		bLocal_21 = true;
		iLocal_13 = 0;
		if (func_13(1))
		{
			func_14(-1097229926 /* Float: -0.3f */, 0);
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		iLocal_13 = 0;
	}
}

void func_7()
{
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_15(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_16(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_17(&iVar0);
	}
}

int func_12()
{
	return Global_1572887.f_14;
}

bool func_13(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_14(float fParam0, bool bParam1)
{
	func_18((Global_1940013.f_9 + fParam0), bParam1);
}

void func_15(int iParam0)
{
}

void func_16(int iParam0)
{
}

void func_17(int iParam0)
{
}

void func_18(float fParam0, bool bParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_19())
		{
			Global_1940013.f_9 = (func_19() - 1008981770);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1940013.f_9 = 0f;
		PED::_SET_PED_MOTIVATION(Global_33, 10, Global_1940013.f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940013.f_14)
	{
		Global_1940013.f_9 = 1065185444; /* Float: 0.99f */
	}
	else if (fParam0 > 1f)
	{
		Global_1940013.f_9 = 1f;
	}
	else
	{
		Global_1940013.f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1940013.f_12 = 1;
	}
}

float func_19()
{
	return 1061158912 /* Float: 0.75f */;
}

