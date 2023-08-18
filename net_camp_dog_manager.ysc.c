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
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	func_1();
	while (!func_2(0, 0))
	{
		func_3(&Global_1147570, &Global_1147579, &Global_1147572, &Global_1147964);
		BUILTIN::WAIT(0);
	}
	func_4(&Global_1147570, &Global_1147579, &Global_1147572);
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		func_5();
		BUILTIN::WAIT(0);
	}
	func_6();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_7(32, -1);
	func_8();
	if (func_9())
	{
		func_6();
	}
	func_10();
	func_11(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

bool func_2(bool bParam0, bool bParam1)
{
	int iVar0;

	if (Global_1572887.f_13)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (bParam1 && NETWORK::NETWORK_SESSION_IS_TRANSITIONING())
		{
		}
		else if (bParam1 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
		}
		else if (bParam1 && Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) == 5.152806E+32f)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_3(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0, uParam1, uParam2);
	}
	func_13(uParam0, uParam1, uParam2, uParam3);
	func_14(uParam0, uParam1, uParam2, uParam3);
	func_15(uParam0, uParam1, uParam2, uParam3);
	return 1;
}

int func_4(var uParam0, var uParam1, var uParam2)
{
	return 1;
}

void func_5()
{
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1147572.f_2))
	{
		return;
	}
	if (!Global_1147572.f_3)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1147572.f_2))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1147572.f_2);
		}
		Global_1147572.f_3 = 1;
	}
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_7(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_8()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	iVar1 = MISC::GET_GAME_TIMER();
	iVar2 = NETWORK::NETWORK_GET_TIMEOUT_TIME();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (MISC::GET_GAME_TIMER() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((MISC::GET_GAME_TIMER() - iVar1) > 300000)
		{
			func_6();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_6();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_6();
		}
		if (func_16() == 0)
		{
			if (func_17())
			{
				func_6();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_6();
	}
	return 1;
}

bool func_9()
{
	if (Global_1572887.f_10)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return true;
	}
	return false;
}

void func_10()
{
	func_18(&Global_1147570);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1147570, 2, 48);
	func_19(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1147570), 2, "g_mpNetCampDogManagerHost");
	func_20(&Global_1147579);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1147579, 385, 49);
	func_21(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1147579[0 /*12*/])), 385, "g_mpNetCampDogManagerPlayer");
	func_22(&Global_1147572);
}

void func_11(bool bParam0)
{
	int iVar0;
	struct<8> Var1;
	int iVar9;

	iVar0 = (MISC::GET_SYSTEM_TIME() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_6();
					break;
				case 2:
					func_6();
					break;
				case 4:
					func_6();
					break;
				case 3:
					func_6();
					break;
				default:
					break;
			}
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (NETWORK::NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA())
		{
			return;
		}
		if (MISC::GET_SYSTEM_TIME() >= iVar0)
		{
			func_6();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_12(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = func_23(*uParam0);
	switch (iVar0)
	{
		case 0:
			func_24(uParam0, 1);
			break;
		case 1:
			break;
		case 2:
			func_24(uParam0, 3);
			break;
		case 3:
			break;
	}
}

int func_13(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	iVar2 = func_25(*(uParam1[iVar1 /*12*/]));
	switch (iVar2)
	{
		case 0:
			func_26(uParam1[iVar1 /*12*/]);
			func_27(uParam1[iVar1 /*12*/]);
			func_28(uParam1[iVar1 /*12*/], 1);
		case 1:
			iVar3 = func_29(uParam0, uParam1, uParam2, uParam3);
			if (iVar3 != iVar2)
			{
				func_28(uParam1[iVar1 /*12*/], iVar3);
			}
			break;
	}
	return 0;
}

int func_14(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = 1;
	iVar1 = func_30(*uParam2);
	switch (iVar1)
	{
		case 0:
			if (func_31(uParam0, uParam1, uParam2))
			{
				func_32(uParam2, 1);
			}
			break;
		case 1:
			bVar2 = true;
			if (bVar2)
			{
				if (!func_33())
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_34(uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				if (!func_35(uParam0, uParam1, uParam2))
				{
					bVar2 = false;
				}
			}
			if (bVar2)
			{
				func_32(uParam2, 2);
			}
			break;
		case 2:
			if (func_36(uParam0, uParam1, uParam2))
			{
				func_32(uParam2, 3);
			}
			break;
		case 3:
			if (func_37(uParam0, uParam1, uParam2))
			{
				func_32(uParam2, 4);
			}
			break;
		case 4:
			if (func_38(uParam0, uParam1, uParam2))
			{
				func_32(uParam2, 5);
			}
			break;
		case 5:
			iVar3 = func_39(uParam0, uParam1, uParam2);
			if (iVar3 == 1)
			{
				func_32(uParam2, 0);
			}
			else if (iVar3 == 2)
			{
				func_32(uParam2, 6);
			}
			break;
		case 6:
			if (func_40(uParam0, uParam1, uParam2))
			{
				func_32(uParam2, 1);
			}
			break;
		case 7:
			break;
	}
	return iVar0;
}

void func_15(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -507840394:
				func_41(uParam0, uParam1, uParam2, uParam3, iVar0);
				break;
		}
		iVar0++;
	}
}

int func_16()
{
	return Global_1572887.f_14;
}

bool func_17()
{
	return Global_1051645.f_8;
}

void func_18(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

int func_19(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_20(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_26(uParam0[iVar0 /*12*/]);
		iVar0++;
	}
}

int func_21(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_22(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
}

var func_23(var uParam0, var uParam1)
{
	return uParam0;
}

void func_24(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

var func_25(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	return uParam0;
}

void func_26(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	StringCopy(&(uParam0->f_2), "", 64);
	uParam0->f_10 = 0;
}

void func_27(var uParam0)
{
	bool bVar0;
	int iVar1;
	struct<8> Var2;
	bool bVar10;

	bVar0 = func_42();
	iVar1 = func_43();
	func_44(uParam0, bVar0);
	if (func_45(&Var2))
	{
		func_46(uParam0, Var2);
		func_47(PLAYER::PLAYER_ID(), Var2);
	}
	bVar10 = false;
	if (func_48(bVar0, 0))
	{
		if (bVar0 == iVar1)
		{
			bVar10 = true;
		}
	}
	if (bVar10)
	{
		func_49(uParam0, 0);
	}
	else
	{
		func_50(uParam0, 0);
	}
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_29(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	func_51(uParam1[iVar1 /*12*/], uParam3);
	func_52(uParam1[iVar1 /*12*/], uParam2);
	func_53(uParam1[iVar1 /*12*/], uParam2);
	return 1;
}

var func_30(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return uParam0;
}

bool func_31(var uParam0, var uParam1, var uParam2)
{
	Global_1147572.f_6 = 0;
	return true;
}

void func_32(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_33()
{
	return true;
}

bool func_34(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	switch (uParam0->f_5)
	{
		case 1:
			iVar0 = 1;
			break;
	}
	iVar1 = uParam0->f_5;
	iVar1++;
	if (iVar1 >= 10)
	{
		uParam0->f_5 = 0;
	}
	else
	{
		uParam0->f_5 = iVar1;
	}
	return iVar0;
}

bool func_35(var uParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_54(uParam0, uParam1, uParam2, &uVar0))
	{
		return false;
	}
	uParam2->f_1 = uVar0;
	return true;
}

bool func_36(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::DOES_SCRIPT_EXIST(func_55()))
	{
		return false;
	}
	SCRIPTS::REQUEST_SCRIPT(func_55());
	return true;
}

bool func_37(var uParam0, var uParam1, var uParam2)
{
	if (!SCRIPTS::HAS_SCRIPT_LOADED(func_55()))
	{
		SCRIPTS::REQUEST_SCRIPT(func_55());
		return false;
	}
	return true;
}

bool func_38(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	iVar0 = uParam2->f_1;
	iVar1 = iVar0;
	func_56(&vVar2);
	vVar2.x = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	vVar2.f_1 = iVar0;
	vVar2.f_2 = (uParam1[iVar1 /*12*/])->f_1;
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(600) <= 0)
	{
		return false;
	}
	Global_1147572.f_2 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_55(), &vVar2, 3, 600);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_55());
	return true;
}

int func_39(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iVar0);
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), iVar1, true, 0))
	{
		return 1;
	}
	return 0;
}

bool func_40(var uParam0, var uParam1, var uParam2)
{
	return true;
}

void func_41(var uParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam4, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 11:
			func_57(iParam4);
			break;
	}
}

int func_42()
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_59(-7.437896E-28f, func_58(0), 4.978612f, 1) };
	iVar4 = func_60(Var0, -1.856312E-30f, 0, 1);
	return iVar4;
}

int func_43()
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_59(-7.437896E-28f, func_58(0), 4.978612f, 1) };
	iVar4 = func_61(Var0, -1.856312E-30f, 1, -1);
	return iVar4;
}

void func_44(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

bool func_45(var uParam0)
{
	struct<15> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_62(&Var0))
	{
		return false;
	}
	*uParam0 = { Var0.f_14 };
	return true;
}

void func_46(var uParam0, struct<8> Param1)
{
	uParam0->f_2 = { Param1 };
}

void func_47(int iParam0, struct<8> Param1)
{
	struct<20> Var0;

	Var0.f_4 = 1;
	Var0.f_8 = { Param1 };
	Var0.f_7 = iParam0;
	func_64(Var0, func_63(0, 8));
}

bool func_48(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_49(var uParam0, int iParam1)
{
	if (func_65(uParam0->f_10, iParam1))
	{
		return;
	}
	func_66(&(uParam0->f_10), iParam1);
}

void func_50(var uParam0, int iParam1)
{
	if (!func_65(uParam0->f_10, iParam1))
	{
		return;
	}
	func_67(&(uParam0->f_10), iParam1);
}

void func_51(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_68(uParam0, 1);
	bVar1 = func_69(uParam1, 0);
	if (iVar0 != bVar1)
	{
		if (bVar1)
		{
			func_49(uParam0, 1);
		}
		else
		{
			func_50(uParam0, 1);
		}
	}
}

void func_52(var uParam0, var uParam1)
{
	if (!func_70(uParam1, 0))
	{
		return;
	}
	func_27(uParam0);
	func_71(uParam1, 0);
}

void func_53(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = func_72(2.584403E+29f, PLAYER::PLAYER_ID(), 0, 1);
	if (!func_73(iVar0))
	{
		func_50(uParam0, 2);
		func_50(uParam0, 3);
		func_50(uParam0, 4);
		return;
	}
	bVar1 = func_74(iVar0, 1);
	bVar2 = func_75(iVar0, 16, 255);
	bVar3 = func_75(iVar0, 32, 255);
	if (bVar1 && !bVar2)
	{
		func_49(uParam0, 2);
	}
	else
	{
		func_50(uParam0, 2);
	}
	if (bVar1 && (bVar2 || bVar3))
	{
		func_49(uParam0, 4);
	}
	else
	{
		func_50(uParam0, 4);
	}
	if (!bVar1)
	{
		func_50(uParam0, 3);
	}
}

bool func_54(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_76(iVar2, 0, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar2);
			iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			if (!GANG::NETWORK_IS_GANG_LEADER(iVar0))
			{
			}
			else if (!func_77(uParam0, uParam1, uParam2, iVar0))
			{
			}
			else
			{
				*uParam3 = iVar0;
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

char* func_55()
{
	return "net_camp_dog";
}

void func_56(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 255;
	uParam0->f_2 = 0;
}

void func_57(int iParam0)
{
	struct<5> Var0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 20))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			break;
	}
}

struct<4> func_58(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_78(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_59(2.982335E+09f, func_79(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_59(2.982335E+09f, func_79(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_59(2.982335E+09f, func_79(), -5.45926E-19f, bParam0);
}

struct<4> func_59(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_48(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_78(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_60(struct<4> Param0, float fParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_80(Param0, fParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_61(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_81(&uParam0, iParam4, bParam5, iParam6);
}

bool func_62(bool bParam0)
{
	bool bVar0;
	struct<4> Var1;
	struct<4> Var5;
	int iVar9;
	struct<4> Var10;
	struct<10> Var14;

	bVar0 = func_43();
	if (!func_48(bVar0, 0))
	{
		return false;
	}
	Var1 = { func_58(1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
	{
		return false;
	}
	Var5 = { func_59(-7.437896E-28f, Var1, 4.978612f, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return false;
	}
	iVar9 = func_78(1);
	Var10 = { func_59(bVar0, Var5, -1.856312E-30f, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return false;
	}
	Var14.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar9, &Var10, &Var14, 22, 1))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var14, 22);
	return true;
}

var func_63(int iParam0, int iParam1)
{
	return func_82(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_64(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam20))
	{
		return;
	}
	vParam0.x = 11;
	vParam0.f_1 = iVar0;
	vParam0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vParam0, 20, 6, &uParam20);
}

bool func_65(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_66(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_67(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

bool func_68(var uParam0, int iParam1)
{
	if (func_65(uParam0->f_10, iParam1))
	{
		return true;
	}
	return false;
}

int func_69(var uParam0, int iParam1)
{
	if (func_65(*uParam0, iParam1))
	{
		return 1;
	}
	return 0;
}

bool func_70(var uParam0, int iParam1)
{
	if (func_65(uParam0->f_4, iParam1))
	{
		return true;
	}
	return false;
}

void func_71(var uParam0, int iParam1)
{
	if (!func_65(uParam0->f_4, iParam1))
	{
		return;
	}
	func_67(&(uParam0->f_4), iParam1);
}

int func_72(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1235672[iVar0 /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_75(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1225084[iVar0 /*28*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_73(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_74(int iParam0, int iParam1)
{
	return (func_83(iParam0) && func_84(Global_1235672[iParam0 /*697*/].f_568, iParam1));
}

bool func_75(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_83(iParam0) && func_84(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_76(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (iVar0 != 255)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			return false;
		}
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
	if (bParam2 && !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	if (bParam1 && PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	return true;
}

bool func_77(var uParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;
	bool bVar9;
	var uVar10;
	vector3 vVar11;
	var uVar14;
	bool bVar15;

	iVar0 = iParam3;
	bVar1 = func_85(uParam1[iVar0 /*12*/]);
	if (!func_48(bVar1, 0))
	{
		return false;
	}
	if (!func_68(uParam1[iVar0 /*12*/], 0))
	{
		return false;
	}
	if (func_68(uParam1[iVar0 /*12*/], 1))
	{
		return false;
	}
	iVar2 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(iParam3);
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_55(), iVar2, true, 0))
	{
		return false;
	}
	iVar3 = PLAYER::PLAYER_ID();
	iVar4 = PLAYER::GET_PLAYER_PED(iVar3);
	iVar5 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
	bVar9 = false;
	if (func_68(uParam1[iVar0 /*12*/], 2) && !func_68(uParam1[iVar0 /*12*/], 3))
	{
		bVar9 = true;
	}
	if (bVar9)
	{
		if (iVar0 == iVar5)
		{
			bVar9 = true;
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(iParam3, func_55(), iVar2))
		{
			bVar9 = true;
		}
	}
	else
	{
		bVar15 = func_86(iParam3, &uVar10, &vVar11, &uVar14);
		if (!bVar15)
		{
			return false;
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar6, vVar11, true) > 1120403456)
		{
			return false;
		}
	}
	return true;
}

int func_78(bool bParam0)
{
	if (func_16() == -1)
	{
		if (!bParam0 && INVENTORY::_INVENTORY_USE_SP_BACKUP())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

struct<4> func_79()
{
	struct<4> Var0;

	return Var0;
}

bool func_80(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_78(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, iParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, iParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_81(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_87(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

var func_82(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;

	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_88() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1295619.f_5;
	iVar6 = Global_1295619.f_10;
	bVar7 = true;
	iVar9 = iParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case joaat("VOLCYLINDER"):
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_89());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_90(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar2]))
		{
			iVar10 = Global_1295619.f_149[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_91(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (Global_1295619.f_83[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_92(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::IS_PED_INCAPACITATED(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (GANG::NETWORK_GET_GANG_ID(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_93(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::IS_POINT_IN_VOLUME(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::DELETE_VOLUME(iVar8);
	}
	return uVar0;
}

bool func_83(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_84(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

var func_85(var uParam0)
{
	return uParam0->f_1;
}

int func_86(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_94(iParam0, &iVar0))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iVar0))
	{
	}
	*uParam1 = iVar0;
	*uParam2 = { TASK::_GET_SCENARIO_POINT_COORDS(*uParam1, true) };
	*uParam3 = TASK::_GET_SCENARIO_POINT_HEADING(*uParam1, true);
	return 1;
}

bool func_87(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_78(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_95(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_88()
{
	return Global_1051645.f_12;
}

char* func_89()
{
	return "unnamed";
}

int func_90(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_91(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_96(36, iParam0);
}

int func_92(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1295619.f_17[iParam0])
	{
		return Global_1101558[iParam0 /*38*/].f_1;
	}
	return 26;
}

bool func_93(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_97(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_98(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_94(int iParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_99(iParam0, &vVar0))
	{
		return false;
	}
	if (func_100(vVar0))
	{
		return false;
	}
	iVar3 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vVar0, 2.849701E+18f, 5.5f, 0, false);
	if (TASK::DOES_SCENARIO_POINT_EXIST(iVar3))
	{
		*uParam1 = iVar3;
		return true;
	}
	return false;
}

bool func_95(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_78(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_96(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_101(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_102())
	{
		return func_101(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_101(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_97(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_98(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!Global_1295619.f_17[iVar0])
	{
		func_103(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_104(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_99(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	*uParam1 = { Global_1144511[iVar0 /*83*/].f_38.f_8 };
	return true;
}

bool func_100(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_101(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_102()
{
	return Global_1102813.f_3672;
}

void func_103(int iParam0)
{
	int iVar0;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 0)
	{
		return;
	}
	func_104(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_104(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

