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
	struct<341> Local_16 = { 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 4, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 0, 0, -1, 255, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 7, 255, 255, 255, 255, 255, 255, 255, -1, -1, -1, 4 } ;
	var uLocal_357 = 0;
	var uLocal_358 = 0;
	var uLocal_359 = 0;
	var uLocal_360 = 0;
	var uLocal_361 = 0;
	var uLocal_362 = 0;
	struct<52> Local_363[32];
	struct<640> Local_2028 = { 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, -1, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1082130432, 0, 0, 0, 0, -1, 1, 0, 4, 0, 0, 0, 0, 4, 0, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 0, 1, 0, 1, 0, 1, 0, 1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_2668 = 0;
	var uLocal_2669 = 0;
	var uLocal_2670 = 0;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = -1;
	var uScriptParam_8 = -1;
	var uScriptParam_9 = 255;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1(&uScriptParam_0);
	while (!func_2(Local_2028.f_2))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4(uScriptParam_0);
	func_5();
}

void func_1(var uParam0)
{
	func_6(32, *uParam0);
	func_7();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_16, 347, 44);
	func_8(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_16), 347, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_363, 1665, 45);
	func_9(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_363[0 /*52*/])), 1665, "m_clientData");
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	func_11(uParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_12(uParam0);
	}
}

bool func_2(struct<2> Param0)
{
	if (func_13(0, 0))
	{
		return true;
	}
	else if (func_14(Param0, 1, 0))
	{
		return true;
	}
	else if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return true;
	}
	else if (Local_363[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/] == 4)
	{
		return true;
	}
	return false;
}

void func_3()
{
	Local_2028.f_634 = NETWORK::PARTICIPANT_ID_TO_INT();
	func_15(&Local_16, &Local_363, &Local_2028);
	func_16(&Local_16, &Local_363, &Local_2028);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_17(&Local_16, &Local_363, &Local_2028);
	}
}

void func_4(var uParam0)
{
	func_18();
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
	{
		func_19();
	}
	func_20();
}

void func_5()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_6(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(iParam0, false, iParam1);
}

int func_7()
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
			func_5();
		}
		if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
		{
			switch (SCRIPTS::_GET_THREAD_EXIT_REASON())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			func_5();
		}
		if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
		{
			func_5();
		}
		if (func_21() == 0)
		{
			if (func_22())
			{
				func_5();
			}
		}
		BUILTIN::WAIT(0);
		iVar0 = NETWORK::NETWORK_GET_SCRIPT_STATUS();
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_5();
	}
	return 1;
}

int func_8(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_9(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_10(bool bParam0)
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
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
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
			func_5();
			return;
		}
		BUILTIN::WAIT(0);
	}
}

void func_11(var uParam0)
{
	int iVar0;

	Local_2028 = *uParam0;
	Local_2028.f_1 = uParam0->f_5;
	Local_2028.f_2 = { uParam0->f_7 };
	Local_2028.f_4.f_1 = func_23(Local_2028.f_2);
	Local_2028.f_10 = func_26(func_25(func_24(-1.484548E+24f), Local_2028.f_4.f_1));
	Local_2028.f_10.f_1 = func_24(Local_2028.f_10);
	Local_2028.f_550.f_1 = TASK::_0xE1C105E6BBA48270();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		Local_2028.f_202.f_30[iVar0] = 255;
		iVar0++;
	}
}

void func_12(var uParam0)
{
	Local_16.f_316 = GANG::NETWORK_GET_GANG_ID(uParam0->f_9);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Local_16.f_316))
	{
		func_27(&Local_16, 7);
		return;
	}
	Local_16.f_315 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Local_16.f_316);
}

bool func_13(bool bParam0, bool bParam1)
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

bool func_14(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_28(Global_1051268) && !func_29(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_30(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_31(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return true;
	}
	if (Global_263042[Global_1295619 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return true;
	}
	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return true;
	}
	if (func_32())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_28(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return true;
		}
	}
	if (Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return true;
	}
	Global_1072759.f_28307 = 0;
	return false;
}

void func_15(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_33(1);
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0);
		switch (iVar1)
		{
			case -885048077:
				func_34(iVar0, uParam0, uParam1, uParam2);
				break;
			case -1315570756:
				func_35(iVar0, uParam0, uParam1, uParam2, bVar2);
				break;
			case -507840394:
				func_36(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0))
		{
			case joaat("EVENT_ENTITY_DAMAGED"):
				func_37(iVar0, uParam0, uParam1, uParam2);
				break;
		}
		iVar0++;
	}
}

void func_16(var uParam0, var uParam1, float fParam2)
{
	if (func_38(uParam0, uParam1, fParam2))
	{
		func_39(uParam1[Local_2028.f_634 /*52*/], 16);
	}
	if (func_40(uParam1[Local_2028.f_634 /*52*/]) != 4 && func_41(uParam1[Local_2028.f_634 /*52*/], 16))
	{
		func_42(uParam1[Local_2028.f_634 /*52*/], 4);
		if (func_41(uParam1[Local_2028.f_634 /*52*/], 32) || func_41(uParam1[Local_2028.f_634 /*52*/], 64))
		{
			func_43(fParam2, uParam1);
		}
	}
	switch (func_40(uParam1[Local_2028.f_634 /*52*/]))
	{
		case 0:
			func_44(uParam0, uParam1, fParam2);
			if (func_45(fParam2) != 8)
			{
				return;
			}
			func_42(uParam1[Local_2028.f_634 /*52*/], 1);
			break;
		case 1:
			func_46(uParam0, uParam1, fParam2);
			if (!func_41(uParam1[Local_2028.f_634 /*52*/], 1) || func_47(uParam0) < 3)
			{
				return;
			}
			func_42(uParam1[Local_2028.f_634 /*52*/], 2);
			break;
		case 2:
			func_48(uParam0, uParam1, fParam2);
			if (func_47(uParam0) != 5)
			{
				return;
			}
			func_42(uParam1[Local_2028.f_634 /*52*/], 3);
			break;
		case 3:
			func_49(uParam0, uParam1, fParam2);
			break;
		case 4:
			func_50(uParam0, uParam1, fParam2);
			break;
	}
}

void func_17(var uParam0, int iParam1, bool bParam2)
{
	switch (func_47(uParam0))
	{
		case 0:
			func_51(uParam0, iParam1, bParam2);
			func_27(uParam0, 1);
			break;
		case 1:
			if (!func_52())
			{
				return;
			}
			func_27(uParam0, 2);
			break;
		case 2:
			func_53(uParam0, iParam1, bParam2);
			if (!func_54(iParam1, 1))
			{
				return;
			}
			if (!func_55(uParam0, 1))
			{
				return;
			}
			func_27(uParam0, 3);
			break;
		case 3:
			if (!func_55(uParam0, 8))
			{
				func_56(uParam0);
			}
			func_27(uParam0, 4);
			break;
		case 4:
			func_57(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 2))
			{
				return;
			}
			if (!func_55(uParam0, 4))
			{
				return;
			}
			uParam0->f_321 = bParam2->f_10.f_13;
			func_27(uParam0, 5);
			break;
		case 5:
			func_58(uParam0, iParam1, bParam2);
			if (!func_55(uParam0, 32768))
			{
				if (func_59(&Local_363, 1.504633E-36f, 0))
				{
					func_60(uParam0);
				}
			}
			if (!func_61(uParam0, iParam1, bParam2))
			{
				if (!func_55(&Local_16, 1.084202E-19f) && func_62())
				{
					func_63(&Local_16, 1.084202E-19f);
				}
				return;
			}
			func_64(uParam0, iParam1, bParam2);
			if (Local_16.f_299 != 0 && Local_16.f_299.f_1 < 3)
			{
				return;
			}
			func_65(uParam0);
			if (!func_66(uParam0, bParam2))
			{
				return;
			}
			func_27(uParam0, 6);
			break;
		case 6:
			func_67(uParam0, iParam1, bParam2);
			break;
		case 7:
			func_68(uParam0, iParam1, bParam2);
			break;
	}
}

void func_18()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_33(1.504633E-36f))
	{
		func_69(0);
	}
	func_70();
	func_71();
	func_72(0);
	func_73();
	func_74();
	func_75();
	func_76(0);
	func_77(0);
	iVar0 = 0;
	while (iVar0 < 12)
	{
		func_78(&(Local_2028.f_189[iVar0]), 1);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		func_79(iVar1);
		if (func_80(iVar1, 16) && func_81(iVar1, &iVar2))
		{
			NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(iVar2, false);
		}
		iVar1++;
	}
	func_82(0);
	func_83();
	func_84(0);
	func_85(0);
	func_86(1);
	func_87(0);
	func_88(0, 0);
	if (CAM::DOES_CAM_EXIST(Local_2028.f_559))
	{
		CAM::DESTROY_CAM(Local_2028.f_559, false);
	}
	if (CAM::DOES_CAM_EXIST(Local_2028.f_560))
	{
		CAM::DESTROY_CAM(Local_2028.f_560, false);
	}
	func_89();
	func_90();
	func_91(Local_2028.f_619);
	func_91(Local_2028.f_620);
	func_91(Local_2028.f_625);
	func_91(Local_2028.f_626);
	func_91(Local_2028.f_627);
	func_91(Local_2028.f_627.f_2);
	func_91(Local_2028.f_627.f_1);
	func_91(Local_2028.f_627.f_3);
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_91(Local_2028.f_621[iVar3]);
		if (func_92(iVar3, 32))
		{
			EVENT::REMOVE_SHOCKING_EVENT(Local_2028.f_29[iVar3 /*5*/].f_4);
		}
		iVar3++;
	}
	func_93(&(Local_2028.f_548));
	func_94(&(Local_2028.f_550), 1, 0);
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	func_95();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/].f_5))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[iVar0 /*12*/].f_5));
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 10)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_278[iVar1 /*2*/]))
		{
		}
		else if (func_96(iVar1, 1))
		{
			iVar3 = NETWORK::_NET_TO_PROPSET(Local_16.f_278[iVar1 /*2*/]);
			PROPSET::_SET_PROP_SET_AS_NO_LONGER_NEEDED(iVar3);
		}
		else
		{
			iVar2 = NETWORK::NET_TO_OBJ(Local_16.f_278[iVar1 /*2*/]);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
	func_97(&Local_16);
	func_98(&Local_16, &Local_2028);
	func_99(&Local_16, &Local_2028);
	func_100(&Local_2028);
}

void func_20()
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Local_2028.f_4) && DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2028.f_4))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Local_2028.f_4);
	}
	if (HUD::TEXT_BLOCK_IS_LOADED(func_101()) || HUD::_TEXT_BLOCK_IS_STREAMED(func_101()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_101());
	}
	func_102(&Local_2028);
	func_103();
	if (func_55(&Local_16, 524288))
	{
		func_104(&Local_16);
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	func_105(Local_16.f_299);
}

int func_21()
{
	return Global_1572887.f_14;
}

bool func_22()
{
	return Global_1051645.f_8;
}

int func_23(struct<2> Param0)
{
	return func_106(Param0);
}

var func_24(float fParam0)
{
	int iVar0;

	iVar0 = func_108(0, (func_107() - 1), &fParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_109(iVar0);
}

int func_25(int iParam0, var uParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<5> Var7;
	var uVar12;

	if (!func_110(iParam0, &Var0))
	{
		return 0;
	}
	iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		Var7 = { Var0 };
		Var7.f_2 = 7.595256f;
		Var7.f_3 = iVar6;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var7.f_1), &Var7))
		{
		}
		else
		{
			Var7.f_2 = 9.586579E+20f;
			DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar12, &Var7);
			Var7.f_2 = 52855.35f;
			Var7.f_3 = uParam1;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var7.f_1), &Var7))
			{
			}
			else
			{
				return uVar12;
			}
		}
		iVar6++;
	}
	return 0;
}

int func_26(int iParam0)
{
	switch (iParam0)
	{
		case joaat("COACH_HOLDUP_KIDNAP_INTRO"):
			return -1.398992E+38f;
		case joaat("COACH_HOLDUP_ROBBERY_INTRO"):
			return -1.484548E+24f;
		default:
			break;
	}
	return iParam0;
}

void func_27(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

bool func_28(struct<2> Param0)
{
	if (!func_111(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_112(Param0))
	{
		return false;
	}
	return true;
}

bool func_29(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_30(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_31(int iParam0, int iParam1)
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (Global_1206939[iParam1 /*12*/] && iParam0) != 0;
}

bool func_32()
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (Global_2883584)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (!func_28(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_33(int iParam0)
{
	return func_113(Local_2028.f_7, iParam0);
}

void func_34(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar3;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 3))
	{
		return;
	}
	if (!func_114(Var0.f_1, uParam1, &uVar3))
	{
		return;
	}
	if (Var0 == PLAYER::PLAYER_PED_ID())
	{
		func_115(uParam2[Local_2028.f_634 /*52*/], uParam3);
	}
}

void func_35(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4)
{
	struct<25> Var0;
	var uVar32;
	int iVar33;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!func_116(Var0.f_3, bParam4))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (!func_41(uParam2[Local_2028.f_634 /*52*/], 2) && func_114(Var0, uParam1, &uVar32))
	{
		func_115(uParam2[Local_2028.f_634 /*52*/], uParam3);
		return;
	}
	if (func_118(Var0, uParam1, &iVar33))
	{
		if ((Var0.f_3 && !Var0.f_24) && uParam1->f_16[iVar33 /*12*/].f_2 == 13.22463f)
		{
			func_119(iVar33);
		}
		if (uParam1->f_16[iVar33 /*12*/].f_2 != 9.716892E+17f && !func_41(uParam2[Local_2028.f_634 /*52*/], 2))
		{
			func_115(uParam2[Local_2028.f_634 /*52*/], uParam3);
		}
		if (uParam1->f_16[iVar33 /*12*/].f_2 == 13.22463f)
		{
			if (!func_41(uParam2[Local_2028.f_634 /*52*/], 262144) && Local_16.f_321 > 1)
			{
				func_39(uParam2[Local_2028.f_634 /*52*/], 262144);
			}
		}
		else if (uParam1->f_16[iVar33 /*12*/].f_2 != 9.716892E+17f)
		{
			func_39(uParam2[Local_2028.f_634 /*52*/], 524288);
		}
	}
}

void func_36(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar0, 4))
	{
		return;
	}
	switch (iVar0)
	{
		case 52:
			func_120(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_37(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<2> Var0;
	var uVar9;

	if (func_41(uParam2[Local_2028.f_634 /*52*/], 2))
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &Var0, 9))
	{
		return;
	}
	if (!func_117(Var0.f_1))
	{
		return;
	}
	if (func_121(Var0, uParam1, &uVar9))
	{
		func_115(uParam2[Local_2028.f_634 /*52*/], uParam3);
		return;
	}
}

bool func_38(var uParam0, var uParam1, var uParam2)
{
	if (func_47(uParam0) == 6 || func_47(uParam0) == 7)
	{
		return true;
	}
	return false;
}

void func_39(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

int func_40(var uParam0)
{
	return *uParam0;
}

bool func_41(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_42(var uParam0, int iParam1)
{
	if (*uParam0 == iParam1)
	{
		return;
	}
	*uParam0 = iParam1;
}

void func_43(float fParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	var uVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41(uParam1[iVar1 /*52*/], 32) && !func_41(uParam1[iVar1 /*52*/], 64))
		{
		}
		else if (!func_123(iVar1, 0, 1))
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		iVar1++;
	}
	SCRIPTS::_0xFFDDF802279BE128(&(fParam0->f_561), &uVar0, &uVar2);
	func_124(uVar0);
}

void func_44(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;

	switch (func_45(uParam2))
	{
		case 0:
			if ((Local_16.f_315 == -1 && func_47(&Local_16) != 6) && func_47(&Local_16) != 7)
			{
				return;
			}
			if (func_125(Local_16.f_316))
			{
				func_126(2097152);
				if (GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) == Local_16.f_316)
				{
					func_127();
				}
			}
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					iVar0 = 20;
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					iVar0 = 4;
					break;
				default:
					iVar0 = 0;
					break;
			}
			iVar1 = 0;
			while (iVar1 < iVar0)
			{
				if (func_128(iVar1))
				{
					func_129(iVar1, 0);
				}
				iVar1++;
			}
			(uParam1[Local_2028.f_634 /*52*/])->f_1 = 0;
			func_130(uParam2);
			if (func_131())
			{
				func_132(1);
			}
			func_133(uParam2, 1);
			break;
		case 1:
			if (!func_135(func_134(), &(uParam2->f_4), 600, Local_2028, 0, 0))
			{
				func_39(uParam1[Local_2028.f_634 /*52*/], 16);
				return;
			}
			if (!func_136(func_101(), 30, Local_2028, 0, 0))
			{
				func_39(uParam1[Local_2028.f_634 /*52*/], 16);
				return;
			}
			func_137(uParam2);
			func_133(uParam2, 2);
			break;
		case 2:
			func_138(uParam2);
			func_133(uParam2, 3);
			break;
		case 3:
			iVar2 = 0;
			while (iVar2 < uParam2->f_10.f_7)
			{
				func_139(iVar2, uParam2);
				iVar2++;
			}
			func_133(uParam2, 4);
			break;
		case 4:
			iVar3 = 0;
			while (iVar3 < uParam2->f_10.f_8)
			{
				func_140(&Var4);
				if (!func_141(&Local_2028, &Var4, iVar3) || !func_142(Var4))
				{
				}
				else
				{
					func_143(iVar3, uParam2);
					if (uParam2->f_45[iVar3 /*6*/] == 13.22463f)
					{
						uParam2->f_10.f_13++;
					}
					if (func_113(uParam2->f_45[iVar3 /*6*/].f_1, 4))
					{
						uParam2->f_10.f_14++;
					}
				}
				iVar3++;
			}
			func_133(uParam2, 5);
			break;
		case 5:
			func_144(uParam2);
			func_145();
			func_146();
			func_133(uParam2, 7);
			break;
		case 6:
			if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(uParam2->f_4))
			{
				DATAFILE::_PARSEDDATA_UNLOAD_FILE(uParam2->f_4);
				return;
			}
			func_133(uParam2, 7);
			break;
		case 7:
			func_147(uParam2, uParam0);
			func_148();
			func_133(uParam2, 8);
			break;
		case 8:
			break;
	}
}

int func_45(var uParam0)
{
	return uParam0->f_6;
}

void func_46(var uParam0, var uParam1, var uParam2)
{
	if (func_41(uParam1[Local_2028.f_634 /*52*/], 1))
	{
		return;
	}
	if (!func_149())
	{
		return;
	}
	if (!func_55(uParam0, 1))
	{
		return;
	}
	if (Local_16.f_338 > NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_16.f_338);
	}
	if (Local_16.f_337 > NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_16.f_337);
	}
	if (Local_16.f_339 > NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false))
	{
		NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_16.f_339);
	}
	func_39(uParam1[Local_2028.f_634 /*52*/], 1);
}

int func_47(var uParam0)
{
	return *uParam0;
}

void func_48(var uParam0, var uParam1, var uParam2)
{
	func_39(uParam1[Local_2028.f_634 /*52*/], 4);
}

void func_49(var uParam0, var uParam1, float fParam2)
{
	func_150();
	func_151(uParam0, uParam1, fParam2);
	func_152();
	func_153(uParam0, uParam1, fParam2);
	func_154(uParam0, uParam1, fParam2);
	func_155();
	func_156(fParam2, uParam1);
	func_157(fParam2, uParam1, uParam0);
	func_158();
	func_159();
	func_160();
	func_161();
	func_162();
	func_163();
	func_164(uParam0, uParam1, fParam2);
}

void func_50(var uParam0, var uParam1, float fParam2)
{
}

void func_51(var uParam0, var uParam1, var uParam2)
{
	uParam0->f_1 = 0;
}

bool func_52()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	bool bVar5;
	int iVar6;

	iVar0 = func_165();
	iVar1 = func_166(iVar0, Local_2028.f_4.f_1);
	if (Local_16.f_340.f_6 >= iVar1 || Local_16.f_340.f_6 >= 4)
	{
		return true;
	}
	iVar6 = Local_16.f_340.f_6;
	vVar2 = { func_167(iVar0, Local_2028.f_4.f_1, iVar6) };
	if (!func_168(iVar6, vVar2, 1101004800 /* Float: 20f */, -1.946968E-24f, &bVar5))
	{
		if (bVar5)
		{
			func_63(&Local_16, 2097152);
			func_63(&Local_16, 524288);
			func_27(&Local_16, 7);
			if (!func_33(2097152))
			{
				func_169(Local_16.f_316, Local_2028.f_2, 0);
			}
			return false;
		}
	}
	else
	{
		Local_16.f_340.f_6++;
		Local_16.f_340.f_5 = 0;
	}
	return false;
}

void func_53(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	struct<5> Var12;
	int iVar17;

	if (func_45(uParam2) != 8)
	{
		return;
	}
	if (func_55(uParam0, 1))
	{
		return;
	}
	if (STREAMING::IS_MODEL_VALID(func_170()) && !func_171(func_170()))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_140(&Var1);
		if (!func_172(&Local_2028, &Var1, iVar0) || !func_142(Var1))
		{
		}
		else
		{
			iVar6 = func_173(uParam2, iVar0);
			if (!STREAMING::IS_MODEL_VALID(iVar6))
			{
			}
			else if (func_171(iVar6))
			{
			}
			else
			{
				return;
			}
		}
		iVar0++;
	}
	iVar9 = func_174();
	iVar7 = 0;
	while (iVar7 < iVar9)
	{
		func_140(&Var12);
		if (!func_175(&Var12, iVar7) || !func_142(Var12))
		{
		}
		else if (!func_176(Var12, 7.02692E+09f, &iVar8, 0))
		{
		}
		else
		{
			if (!func_177(Var12, 1.308819E-07f, &bVar11, 0) || !bVar11)
			{
				iVar6 = iVar8;
				if (!STREAMING::IS_MODEL_VALID(iVar6))
				{
				}
				else if (func_171(iVar6))
				{
				}
				else
				{
					Jump @314; //curOff = 288
					iVar10 = iVar8;
					PROPSET::_REQUEST_PROP_SET_2(iVar10);
					if (PROPSET::_HAS_PROP_SET_LOADED_2(iVar10))
					{
					}
					else
					{
						return;
					}
				}
				iVar7++;
				iVar17 = 0;
				while (iVar17 < uParam2->f_10.f_8)
				{
					func_140(&Var1);
					if (!func_141(&Local_2028, &Var1, iVar7) || !func_142(Var1))
					{
					}
					else
					{
						iVar6 = func_178(uParam2, iVar17);
						if (!STREAMING::IS_MODEL_VALID(iVar6))
						{
							iVar6 = func_179(uParam2->f_45[iVar17 /*6*/]);
						}
						if ((func_171(iVar6) && func_171(func_180(uParam2->f_45[iVar17 /*6*/]))) && func_182(func_181(&Local_2028, iVar17)))
						{
						}
						else
						{
							return;
						}
					}
					iVar17++;
				}
				if (uParam2->f_10.f_14 > 0)
				{
					if (!func_171(func_183()))
					{
						return;
					}
				}
				Local_16.f_339 = func_184();
				NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(Local_16.f_339);
				if (NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(false) < Local_16.f_339)
				{
					func_39(uParam1[Local_2028.f_634 /*52*/], 16);
					func_63(&Local_16, 2097152);
					func_63(&Local_16, 524288);
					func_27(&Local_16, 7);
					if (!func_33(2097152))
					{
						func_169(Local_16.f_316, Local_2028.f_2, 0);
					}
					return;
				}
				Local_16.f_338 = func_185();
				NETWORK::RESERVE_NETWORK_MISSION_PEDS(Local_16.f_338);
				if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < Local_16.f_338)
				{
					func_39(uParam1[Local_2028.f_634 /*52*/], 16);
					func_63(&Local_16, 2097152);
					func_63(&Local_16, 524288);
					func_27(&Local_16, 7);
					if (!func_33(2097152))
					{
						func_169(Local_16.f_316, Local_2028.f_2, 0);
					}
					return;
				}
				Local_16.f_337 = func_186();
				NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(Local_16.f_337);
				if (NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) < Local_16.f_337)
				{
					func_39(uParam1[Local_2028.f_634 /*52*/], 16);
					func_63(&Local_16, 2097152);
					func_63(&Local_16, 524288);
					func_27(&Local_16, 7);
					if (!func_33(2097152))
					{
						func_169(Local_16.f_316, Local_2028.f_2, 0);
					}
					return;
				}
				func_187();
				func_63(uParam0, 1);
			}
		}
	}
}

bool func_54(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (func_113((uParam0[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_55(var uParam0, int iParam1)
{
	return func_113(uParam0->f_1, iParam1);
}

void func_56(var uParam0)
{
	uParam0->f_317 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 8);
}

void func_57(var uParam0, var uParam1, var uParam2)
{
	if (!func_188())
	{
		return;
	}
	if (!func_55(uParam0, 2))
	{
		if (!func_189(uParam0, uParam2))
		{
			return;
		}
		func_63(uParam0, 2);
	}
	if (func_55(uParam0, 4))
	{
		return;
	}
	if (!func_190(uParam0, uParam2))
	{
		return;
	}
	if (!func_191(uParam0))
	{
		return;
	}
	func_63(uParam0, 4);
}

void func_58(var uParam0, int iParam1, bool bParam2)
{
	func_192(uParam0, iParam1, bParam2);
	func_193(uParam0, iParam1, bParam2);
	func_194(uParam0, iParam1, bParam2);
	func_195(uParam0, iParam1, bParam2);
	func_196();
	func_197(uParam0, iParam1, bParam2);
	func_198();
}

bool func_59(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_113((iParam0[iVar0 /*52*/])->f_1, iParam1))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (bParam2 && !GANG::_NETWORK_IS_IN_MY_GANG(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0))))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_60(var uParam0)
{
	if (func_55(uParam0, 32768))
	{
		return;
	}
	uParam0->f_319 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32768);
}

bool func_61(var uParam0, int iParam1, bool bParam2)
{
	if (func_55(&Local_16, 1.504633E-36f))
	{
		return true;
	}
	if (func_55(&Local_16, 524288))
	{
		return true;
	}
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (func_55(uParam0, 4096))
			{
				return true;
			}
			if (func_55(uParam0, 1024))
			{
				return true;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (func_55(uParam0, 16384))
			{
				return true;
			}
			break;
	}
	return func_200(uParam0, bParam2);
}

bool func_62()
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_16, 1.504633E-36f))
	{
		return false;
	}
	if (func_55(&Local_16, 524288))
	{
		return false;
	}
	if (Local_2028.f_10 == -1.398992E+38f)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
			{
			}
			else if (func_201(iVar0, &Local_16, 32) || func_201(iVar0, &Local_16, 1.504633E-36f))
			{
			}
			else
			{
				return false;
			}
			iVar0++;
		}
	}
	else if (Local_2028.f_10 == -1.484548E+24f)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!func_202(iVar1, &Local_16, 128))
			{
			}
			else if ((func_202(iVar1, &Local_16, 2) || func_202(iVar1, &Local_16, 16)) || func_202(iVar1, &Local_16, 4096))
			{
			}
			else
			{
				return false;
			}
			iVar1++;
		}
	}
	return true;
}

void func_63(var uParam0, int iParam1)
{
	func_122(&(uParam0->f_1), iParam1);
}

void func_64(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_55(uParam0, 524288))
	{
		return;
	}
	func_63(uParam0, 524288);
	if (func_200(uParam0, bParam2))
	{
		func_63(&Local_16, 64);
	}
	iVar0 = func_203(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 1048576);
			break;
		case 2:
			func_63(uParam0, 2097152);
			break;
	}
	iVar0 = func_204(uParam0, bParam2);
	switch (iVar0)
	{
		case 1:
			func_63(uParam0, 4194304);
			break;
		case 2:
			func_63(uParam0, 8388608);
			break;
	}
}

void func_65(var uParam0)
{
	if (func_55(uParam0, 32))
	{
		return;
	}
	uParam0->f_318 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_63(uParam0, 32);
}

bool func_66(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32))
	{
		return false;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_318, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 8000;
}

void func_67(var uParam0, int iParam1, bool bParam2)
{
}

void func_68(var uParam0, int iParam1, bool bParam2)
{
}

void func_69(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	var uVar15;
	struct<2> Var19;
	struct<2> Var32;
	struct<2> Var45;

	iVar0 = func_205();
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		func_206(iVar1, bParam0);
		iVar1++;
	}
	if (bParam0)
	{
		func_126(1.504633E-36f);
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < Local_2028.f_635)
		{
			func_207();
			iVar2++;
		}
		Local_2028.f_635 = 0;
		bVar3 = (func_33(1) && !func_33(8192));
		func_208(&iVar4, &iVar5);
		if (func_33(8192) && func_33(1))
		{
			iVar7 = PLAYER::PLAYER_ID();
			iVar8 = GANG::NETWORK_GET_GANG_ID(iVar7);
			iVar9 = Local_363[Local_2028.f_634 /*52*/].f_48;
			if (((GANG::NETWORK_IS_GANG_ID_VALID(iVar8) && GANG::NETWORK_IS_GANG_ACTIVE(iVar8)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(iVar8))) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(GANG::NETWORK_GET_GANG_LEADER(iVar8)))
			{
				iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(GANG::NETWORK_GET_GANG_LEADER(iVar8));
				if (Local_363[iVar10 /*52*/].f_48 != -1)
				{
					iVar9 = Local_363[iVar10 /*52*/].f_48;
				}
			}
			if (iVar9 != -1)
			{
				iVar6 = func_209(iVar9);
			}
		}
		else
		{
			iVar6 = func_210(&Local_16);
		}
		Var19.f_1 = 11;
		Var32.f_1 = 11;
		Var45.f_1 = -1;
		func_212(&uVar11, &uVar15, &Var19, &Var32, -2.622373E-16f, -1.217072E-13f, func_211(255), bVar3, 1, GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())), iVar4, iVar5, iVar6, Local_2028.f_2, &Var45);
		func_213(1.504633E-36f);
	}
}

void func_70()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			func_214(iVar0);
		}
		iVar0++;
	}
}

void func_71()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]) || !NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_PED(Local_16.f_16[iVar0 /*12*/]);
			if (PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1) == 0)
			{
			}
			else
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iVar1));
			}
		}
		iVar0++;
	}
	func_215(Local_2028.f_10.f_16);
	func_215(Local_2028.f_10.f_17);
	func_215(Local_2028.f_10.f_18);
	func_215(Local_2028.f_10.f_15);
}

void func_72(bool bParam0)
{
	if (func_33(2.350989E-38f) && !bParam0)
	{
		func_216(1);
		func_213(2.350989E-38f);
	}
	else if (!func_33(2.350989E-38f) && bParam0)
	{
		func_216(0);
		func_126(2.350989E-38f);
	}
}

void func_73()
{
	if (!func_33(262144))
	{
		return;
	}
	func_217(Local_2028.f_2, 0);
	if (!func_218(PLAYER::PLAYER_ID()))
	{
		func_213(262144);
	}
}

void func_74()
{
	if (!func_33(524288))
	{
		return;
	}
	func_219(Local_2028.f_2, 0);
	if (!func_220(PLAYER::PLAYER_ID()))
	{
		func_213(524288);
	}
}

void func_75()
{
	if (!func_33(2.524355E-29f))
	{
		return;
	}
	func_221(4);
	func_213(2.524355E-29f);
}

void func_76(bool bParam0)
{
	if (func_33(32768) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_222(1);
		func_126(32768);
	}
	else
	{
		func_222(0);
		func_213(32768);
	}
}

void func_77(bool bParam0)
{
	if (func_33(131072) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		LAW::_SET_CUSTOM_LAW_DISPATCH_RESPONSE(1.280613E-22f);
		func_126(131072);
	}
	else
	{
		LAW::_SET_CUSTOM_LAW_DISPATCH_RESPONSE(0);
		func_213(131072);
	}
}

void func_78(int iParam0, int iParam1)
{
	if (func_223(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

void func_79(int iParam0)
{
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(Local_2028.f_202.f_319[iParam0]))
	{
		return;
	}
	HUD::REMOVE_MP_GAMER_TAG(&(Local_2028.f_202.f_319[iParam0]));
}

bool func_80(int iParam0, int iParam1)
{
	return func_113(Local_2028.f_166[iParam0], iParam1);
}

bool func_81(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iParam0 /*5*/]))
	{
		return false;
	}
	*uParam1 = NETWORK::NET_TO_OBJ(Local_16.f_257[iParam0 /*5*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

void func_82(bool bParam0)
{
	if (bParam0)
	{
		if (!func_33(4194304))
		{
			func_224(1, 1);
			func_126(4194304);
		}
	}
	else if (func_33(4194304))
	{
		func_225(1, 1, 0);
		func_213(4194304);
	}
}

void func_83()
{
	char* sVar0;

	if (!func_33(8388608))
	{
		return;
	}
	sVar0 = func_226();
	CAM::_UNLOAD_CINEMATIC_CAMERA_LOCATION(sVar0);
	func_213(8388608);
}

void func_84(bool bParam0)
{
	if (func_227(1048576) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_132(1048576);
		HUD::_ENABLE_HUD_CONTEXT(-3.83483E-22f);
	}
	else
	{
		func_228(1048576);
		HUD::_DISABLE_HUD_CONTEXT(-3.83483E-22f);
	}
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		if (CAM::DOES_CAM_EXIST(Local_2028.f_559))
		{
			CAM::SET_CAM_ACTIVE(Local_2028.f_559, false);
		}
		if (CAM::DOES_CAM_EXIST(Local_2028.f_560))
		{
			CAM::SET_CAM_ACTIVE(Local_2028.f_560, false);
		}
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_213(8);
		return;
	}
	if (CAM::DOES_CAM_EXIST(Local_2028.f_559))
	{
		CAM::SET_CAM_ACTIVE(Local_2028.f_559, true);
	}
	if (CAM::DOES_CAM_EXIST(Local_2028.f_560))
	{
		CAM::SET_CAM_ACTIVE(Local_2028.f_560, true);
	}
	CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
	func_126(8);
}

void func_86(bool bParam0)
{
	if (func_33(32) == !bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), bParam0, 0, false);
	func_229(bParam0);
	if (bParam0)
	{
		func_213(32);
	}
	else
	{
		func_126(32);
	}
}

void func_87(bool bParam0)
{
	if (func_33(64) == bParam0)
	{
		return;
	}
	PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), bParam0);
	if (bParam0)
	{
		func_126(64);
	}
	else
	{
		func_213(64);
	}
}

void func_88(bool bParam0, int iParam1)
{
	if (func_33(16) == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_126(16);
		if (CAM::IS_SCREEN_FADING_OUT())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_OUT(iParam1);
	}
	else
	{
		func_213(16);
		if (CAM::IS_SCREEN_FADING_IN())
		{
			return;
		}
		if (CAM::IS_SCREEN_FADED_IN())
		{
			return;
		}
		CAM::DO_SCREEN_FADE_IN(iParam1);
	}
}

void func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_230(iVar0, 1);
		STREAMING::REMOVE_ANIM_DICT(func_231(iVar1));
		iVar0++;
	}
}

void func_90()
{
	if (!func_33(4))
	{
		return;
	}
	func_232(0);
	func_213(4);
}

void func_91(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

bool func_92(int iParam0, int iParam1)
{
	return func_113(Local_2028.f_29[iParam0 /*5*/], iParam1);
}

void func_93(var uParam0)
{
	if (!func_233(*uParam0))
	{
		return;
	}
	GRAPHICS::DESTROY_TRACKED_POINT(*uParam0);
	*uParam0 = -1;
}

void func_94(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && TASK::_0x1AC5A8AB50CFAA33(uParam0->f_1))
	{
		TASK::_0x0365000D8BF86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_95()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_16.f_340.f_6)
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_16.f_340[iVar0]))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_16.f_340[iVar0]);
		}
		iVar0++;
	}
}

bool func_96(int iParam0, int iParam1)
{
	return func_113(Local_16.f_278[iParam0 /*2*/].f_1, iParam1);
}

void func_97(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
			iVar1 = NETWORK::NET_TO_OBJ(uParam0->f_257[iVar0 /*5*/]);
			GRAPHICS::SET_PICKUP_LIGHT(iVar1, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, false);
			ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar1);
		}
		iVar0++;
	}
}

void func_98(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam1->f_10.f_7)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar0 /*4*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar0 /*4*/]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar1, 2, true);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
}

void func_99(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_2 == 0)
		{
		}
		else
		{
			func_234(iVar0);
		}
		iVar0++;
	}
}

void func_100(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<5> Var3;
	bool bVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<5> Var12;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Local_2028.f_4) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2028.f_4))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < uParam0->f_10.f_7)
	{
		func_235(func_173(uParam0, iVar0));
		iVar0++;
	}
	func_235(func_170());
	iVar1 = 0;
	while (iVar1 < uParam0->f_10.f_8)
	{
		func_140(&Var3);
		if (!func_141(&Local_2028, &Var3, iVar1))
		{
		}
		else if (!func_176(Var3, 7.02692E+09f, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
				bVar9 = func_179(uParam0->f_45[iVar1 /*6*/]);
			}
			func_235(bVar9);
			func_235(func_180(uParam0->f_45[iVar1 /*6*/]));
			if (!func_176(Var3, 2.119798E+09f, &bVar2, 0))
			{
			}
			else if (!func_236(bVar8))
			{
			}
			else
			{
				bVar8 = bVar2;
				func_235(WEAPON::_GET_WEAPONTYPE_MODEL(bVar8));
			}
		}
		iVar1++;
	}
	iVar11 = func_174();
	iVar10 = 0;
	while (iVar10 < iVar11)
	{
		func_140(&Var12);
		if (!func_175(&Var12, iVar10))
		{
		}
		else if (!func_176(Var12, 7.02692E+09f, &bVar2, 0))
		{
		}
		else
		{
			bVar9 = bVar2;
			if (!STREAMING::IS_MODEL_VALID(bVar9))
			{
			}
			else
			{
				func_235(bVar9);
			}
		}
		iVar10++;
	}
	func_235(func_237());
	func_235(func_238());
	if (uParam0->f_10.f_14 > 0)
	{
		func_235(func_183());
	}
}

char* func_101()
{
	return "NCHU";
}

void func_102(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_239(iVar0);
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_240(iVar1);
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 4)
	{
		func_241(iVar2);
		iVar2++;
	}
	func_242();
	func_243(&(fParam0->f_202.f_51));
	func_244();
	func_245(fParam0);
	if (func_246(Local_2028.f_202.f_55))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_2028.f_202.f_55, false);
		Local_2028.f_202.f_55 = 0;
	}
	func_247(&(fParam0->f_202.f_77), 0, 0);
	func_248(&(Local_2028.f_202.f_62), 1);
}

void func_103()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (func_33(1))
	{
		func_249(0);
		func_250(0);
		if (!func_33(2))
		{
			func_252(func_251(), 1);
		}
		func_208(&bVar0, &bVar1);
		bVar2 = func_33(8192);
		if (!func_33(3.85186E-34f) && !func_55(&Local_16, 524288))
		{
			func_253(bVar2);
		}
		else if (bVar0 > 0)
		{
			func_254(bVar2, bVar0 != bVar1);
		}
		else
		{
			func_255(bVar2);
		}
		Var3.f_1 = -1;
		if (func_33(2))
		{
			func_256(Local_2028.f_2, func_33(8192), bVar0, bVar1, &Var3, 0, 255);
		}
		return;
	}
	Local_363[Local_2028.f_634 /*52*/].f_48 = -1;
	func_253(0);
}

void func_104(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else
		{
			iVar1 = NETWORK::NET_TO_OBJ(uParam0->f_257[iVar0 /*5*/]);
			TASK::_0xA21AA2F0C2180125(iVar1, 0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_257[iVar0 /*5*/]))
			{
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, false);
			}
		}
		iVar0++;
	}
}

void func_105(int iParam0)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (!func_257(2, 255) || func_257(512, 255))
	{
		return;
	}
	func_83();
	func_258();
	if (func_257(1, 255))
	{
		func_85(0);
		func_86(1);
		func_87(0);
		func_84(0);
		func_88(0, 1000);
		func_259(iParam0);
		AUDIO::_STOP_AUDIO_SCENESET("RDRO_Scripted_Cutscene_Scenes");
		func_260();
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
	}
	func_261(512);
}

int func_106(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_107()
{
	return Global_1110244.f_3667.f_938;
}

int func_108(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*fParam2 < Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_108(iParam0, (iVar0 - 1), fParam2);
	}
	if (*fParam2 > Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_108(iVar0 + 1, iParam1, fParam2);
	}
	return iVar0;
}

var func_109(int iParam0)
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

bool func_110(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (!func_263(iParam0))
	{
		return false;
	}
	iVar0 = func_264(iParam0);
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	*bParam1 = iVar0;
	bParam1->f_2 = -3.06566E+14f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1))
	{
		return false;
	}
	return true;
}

bool func_111(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1072759.f_573.f_601;
		case 3:
			return Global_1072759.f_573.f_2103;
		case 4:
			return Global_1072759.f_573.f_12605;
		case 5:
			return Global_1072759.f_573.f_12907;
		case 6:
			return Global_1072759.f_573.f_15909;
		case 7:
			return Global_1072759.f_573.f_16511;
		case 8:
			return Global_1072759.f_573.f_18913;
		default:
			break;
	}
	return -1;
}

bool func_113(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_114(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return false;
	}
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (uParam1->f_3[*uParam2 /*4*/] != iVar0)
		{
		}
		else
		{
			return true;
		}
		*uParam2++;
	}
	return false;
}

void func_115(var uParam0, var uParam1)
{
	if (func_41(uParam0, 2))
	{
		return;
	}
	func_266(6, uParam1->f_10.f_15, func_265(), 1);
	func_39(uParam0, 2);
}

bool func_116(bool bParam0, bool bParam1)
{
	if ((!bParam1 && !func_41(&(Local_363[Local_2028.f_634 /*52*/]), 262144)) && !func_41(&(Local_363[Local_2028.f_634 /*52*/]), 524288))
	{
		return true;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2) && !bParam0)
	{
		return false;
	}
	return true;
}

bool func_117(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam0 == func_267(iVar0))
	{
		return true;
	}
	iVar1 = PED::GET_MOUNT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iParam0 == func_267(iVar1))
	{
		return true;
	}
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	iVar2 = PED::GET_VEHICLE_PED_IS_IN(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2) && iParam0 == func_267(iVar2))
	{
		return true;
	}
	return false;
}

bool func_118(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*iParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (PED::IS_PED_A_PLAYER(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iParam0))
	{
		return false;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return false;
	}
	*iParam2 = 0;
	while (*iParam2 < 20)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[*iParam2 /*12*/]))
		{
		}
		else if (uParam1->f_16[*iParam2 /*12*/] != iVar1)
		{
			iVar2 = NETWORK::NET_TO_PED(uParam1->f_16[*iParam2 /*12*/]);
			if ((ENTITY::DOES_ENTITY_EXIST(iVar2) && PED::IS_PED_ON_MOUNT(iVar2)) && PED::GET_MOUNT(iVar2) == iVar0)
			{
				return true;
			}
		}
		else
		{
			return true;
		}
		*iParam2++;
	}
	return false;
}

void func_119(int iParam0)
{
	var uVar0;

	if (!func_33(1))
	{
		return;
	}
	BOUNTY::_BOUNTY_REQUEST_SELF_REPORT_CRIME(&uVar0, -1.317158E+21f, false);
	func_268(8.381184E-22f, 1, 0);
}

void func_120(int iParam0, var uParam1, var uParam2, var uParam3)
{
	struct<8> Var0;
	bool bVar8;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 8))
	{
		return;
	}
	if (Local_2028 != Var0.f_5)
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 2:
		case 3:
			if (func_199(uParam3) == -1.484548E+24f)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41(uParam2[Local_2028.f_634 /*52*/], 32) && !func_41(uParam2[Local_2028.f_634 /*52*/], 64))
			{
				return;
			}
			if (Var0.f_4 == 3)
			{
				func_132(1024);
			}
			else
			{
				func_132(512);
			}
			break;
		case 4:
		case 5:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID())
			{
				func_39(&(Local_363[Local_2028.f_634 /*52*/]), 4194304);
				AUDIO::PLAY_SOUND(func_269(), func_270(), false, 0, true, 0);
			}
			if (uParam3->f_10 == -1.398992E+38f)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -1.484548E+24f)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if (Var0.f_6 == 255)
			{
				return;
			}
			if (Local_2028.f_10 == -1.398992E+38f)
			{
				if (func_271(Var0.f_7, 8388608) && !func_271(Var0.f_7, 2.350989E-38f))
				{
					return;
				}
			}
			else if (Local_2028.f_10 == -1.484548E+24f)
			{
				if (func_80(Var0.f_7, 16) && !func_80(Var0.f_7, 32))
				{
					return;
				}
			}
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			if (!func_33(1))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || GANG::NETWORK_IS_IN_SAME_GANG(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				func_132(8192);
			}
			else
			{
				func_132(4096);
			}
			Local_2028.f_202.f_52 = Var0.f_6;
			break;
		case 8:
			if (Var0.f_7 < 0)
			{
				return;
			}
			if (uParam3->f_10 == -1.398992E+38f)
			{
				if (Var0.f_7 > 20)
				{
					return;
				}
			}
			else if (uParam3->f_10 == -1.484548E+24f)
			{
				if (Var0.f_7 > 4)
				{
					return;
				}
			}
			if ((Var0.f_6 == 255 || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_6)) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if (Var0.f_6 == PLAYER::PLAYER_ID() || GANG::NETWORK_IS_IN_SAME_GANG(Var0.f_6, PLAYER::PLAYER_ID()))
			{
				bVar8 = true;
				if (Local_2028.f_10 == -1.398992E+38f)
				{
					func_272(Var0.f_7, 2.350989E-38f);
				}
				else if (Local_2028.f_10 == -1.484548E+24f)
				{
					func_273(Var0.f_7, 32);
				}
			}
			if (Local_2028.f_10 == -1.398992E+38f)
			{
				func_272(Var0.f_7, 8388608);
			}
			else if (Local_2028.f_10 == -1.484548E+24f)
			{
				func_273(Var0.f_7, 16);
			}
			if (bVar8)
			{
				return;
			}
			func_129(Var0.f_7, 0);
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			func_132(4096);
			Local_2028.f_202.f_52 = Var0.f_6;
			break;
		case 1:
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 32))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			if (!func_41(uParam2[Local_2028.f_634 /*52*/], 32) && !func_41(uParam2[Local_2028.f_634 /*52*/], 64))
			{
				return;
			}
			func_132(2048);
			break;
		case 6:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return;
			}
			if (func_199(uParam3) != -1.484548E+24f)
			{
				return;
			}
			if (Var0.f_7 < 0 || Var0.f_7 > 20)
			{
				return;
			}
			if (!func_201(Var0.f_7, uParam1, 1))
			{
				return;
			}
			if (func_201(Var0.f_7, uParam1, 2))
			{
				return;
			}
			func_274(Var0.f_7, uParam1, 2);
			break;
		case 7:
			if (Var0.f_6 == 255 || Var0.f_6 == PLAYER::PLAYER_ID())
			{
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var0.f_6))
			{
				return;
			}
			if ((func_227(16384) || func_227(4096)) || func_227(8192))
			{
				return;
			}
			Local_2028.f_202.f_52 = Var0.f_6;
			func_132(16384);
			break;
	}
}

bool func_121(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	*uParam2 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	*uParam2 = 0;
	while (*uParam2 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[*uParam2 /*4*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_VEH(uParam1->f_3[*uParam2 /*4*/]);
			if (ENTITY::IS_ENTITY_DEAD(iVar2))
			{
			}
			else
			{
				iVar1 = 0;
				while (iVar1 < 2)
				{
					if (VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar2, iVar1) != iVar0)
					{
					}
					else
					{
						return true;
					}
					iVar1++;
				}
			}
		}
		*uParam2++;
	}
	return false;
}

void func_122(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_123(int iParam0, bool bParam1, bool bParam2)
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

void func_124(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uParam0, iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar2 == iVar1)
			{
			}
			else
			{
				NETWORK::_NETWORK_ADD_PLAYER_TO_RECENT_GAMERS_LIST(iVar1, 0);
			}
		}
		iVar0++;
	}
}

bool func_125(int iParam0)
{
	int iVar0;

	iVar0 = func_275(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return func_276(iVar0, 2);
}

void func_126(int iParam0)
{
	func_122(&(Local_2028.f_7), iParam0);
}

void func_127()
{
	func_277(512);
}

bool func_128(int iParam0)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_201(iParam0, &Local_16, 32);
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_202(iParam0, &Local_16, 2);
		default:
			break;
	}
	return false;
}

void func_129(int iParam0, bool bParam1)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_278(iParam0, bParam1);
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_279(iParam0, bParam1);
			break;
		default:
			return;
	}
}

void func_130(var uParam0)
{
	func_280("REL_CHU_ALLY_", &(uParam0->f_10.f_17));
	func_280("REL_CHU_ENEMY_", &(uParam0->f_10.f_16));
	func_280("REL_CHU_PRIMARY_", &(uParam0->f_10.f_15));
	func_280("REL_CHU_KIDNAP_", &(uParam0->f_10.f_18));
	func_266(4, uParam0->f_10.f_15, func_265(), 1);
	func_266(2, uParam0->f_10.f_18, func_265(), 1);
	func_266(2, uParam0->f_10.f_15, -2.055955E+11f, 1);
	func_266(2, uParam0->f_10.f_15, 1.182823E+33f, 1);
	func_266(2, uParam0->f_10.f_15, -2100.026f, 1);
	func_266(2, uParam0->f_10.f_15, 4.966513E-07f, 1);
	func_266(2, uParam0->f_10.f_15, -2.365252E+27f, 1);
	func_266(1, uParam0->f_10.f_15, -8.657245E-33f, 1);
	func_266(1, uParam0->f_10.f_15, 9.369474E-09f, 1);
	func_266(2, uParam0->f_10.f_15, 1.576726E-13f, 1);
	func_266(2, uParam0->f_10.f_17, 1.576726E-13f, 1);
	func_266(2, uParam0->f_10.f_16, 1.576726E-13f, 1);
	func_266(2, uParam0->f_10.f_17, func_265(), 1);
	func_266(2, uParam0->f_10.f_16, func_265(), 1);
}

bool func_131()
{
	int iVar0;

	iVar0 = func_281(Local_2028.f_10.f_1, 0);
	if (iVar0 <= 3)
	{
		return true;
	}
	return false;
}

void func_132(int iParam0)
{
	func_122(&(Local_2028.f_8), iParam0);
}

void func_133(var uParam0, int iParam1)
{
	if (uParam0->f_6 == iParam1)
	{
		return;
	}
	uParam0->f_6 = iParam1;
}

int func_134()
{
	return 0.009585854f;
}

bool func_135(int iParam0, var uParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_14 != -1)
		{
			bVar1 = func_13(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_14 != -1)
	{
		bVar1 = func_13(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

bool func_136(char* sParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam1 < 1)
	{
		iParam1 = 10;
	}
	if (!HUD::_DOES_TEXT_BLOCK_EXIST(sParam0))
	{
		iVar0 = 0;
		return false;
	}
	bVar1 = false;
	while ((HUD::TEXT_BLOCK_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	while ((!HUD::TEXT_BLOCK_IS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_13(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_13(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return false;
	}
	iVar0 = 0;
	return true;
}

void func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 78)
	{
		iVar1 = func_282(iVar0, 1);
		func_284(&(uParam0->f_4), iVar1, func_283(iVar1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iVar2 = func_285(iVar0, 1);
		func_284(&(uParam0->f_4), iVar2, func_286(iVar2));
		iVar0++;
	}
}

void func_138(var uParam0)
{
	struct<5> Var0;
	bool bVar5;

	uParam0->f_10.f_6 = func_287(uParam0);
	uParam0->f_10.f_2 = { func_288(uParam0) };
	uParam0->f_10.f_7 = func_289(uParam0);
	uParam0->f_10.f_8 = func_290(uParam0);
	uParam0->f_10.f_9 = 0;
	uParam0->f_10.f_5 = func_291(5.670503E+15f);
	if ((func_292(uParam0, &Var0) && func_177(Var0, 9.429216E+18f, &bVar5, 0)) && bVar5)
	{
		func_126(256);
	}
	if (func_293())
	{
		func_126(16384);
	}
	if (func_294())
	{
		func_126(65536);
	}
	if (func_295())
	{
		func_126(1048576);
	}
}

void func_139(int iParam0, var uParam1)
{
	uParam1->f_29[iParam0 /*5*/].f_1 = { func_296(uParam1, iParam0) };
	if (func_297(uParam1, iParam0))
	{
		func_122(&(uParam1->f_29[iParam0 /*5*/]), 2);
	}
	if (func_298(uParam1, iParam0))
	{
		func_122(&(uParam1->f_29[iParam0 /*5*/]), 4);
	}
}

void func_140(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_2 = 0;
	uParam0->f_1 = 0;
}

bool func_141(var uParam0, bool bParam1, int iParam2)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = -3.598827E+10f;
		bParam1->f_3 = iParam2;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

bool func_142(struct<5> Param0)
{
	int iVar0;
	int iVar1;

	if (func_299(Param0, -4.276434E+20f, &iVar0, 0) && Local_16.f_315 < iVar0)
	{
		return false;
	}
	if (func_299(Param0, 845.8469f, &iVar1, 0) && Local_16.f_315 > iVar1)
	{
		return false;
	}
	return true;
}

void func_143(int iParam0, var uParam1)
{
	struct<5> Var0;

	uParam1->f_45[iParam0 /*6*/].f_1 = 0;
	uParam1->f_45[iParam0 /*6*/] = func_300(uParam1, iParam0);
	uParam1->f_45[iParam0 /*6*/].f_2 = { func_301(uParam1, iParam0) };
	uParam1->f_45[iParam0 /*6*/].f_5 = func_302(uParam1, iParam0);
	if (func_303(uParam1, iParam0))
	{
		func_272(iParam0, 1);
	}
	if (uParam1->f_45[iParam0 /*6*/] == 7.426754E-29f)
	{
		func_272(iParam0, 8);
		uParam1->f_45[iParam0 /*6*/] = 9.716892E+17f;
	}
	if (uParam1->f_45[iParam0 /*6*/] != 9.716892E+17f && func_33(256))
	{
		func_272(iParam0, 8192);
	}
	else if (uParam1->f_45[iParam0 /*6*/] == 2.418248E-09f || uParam1->f_45[iParam0 /*6*/] == 1.020647E+37f)
	{
		func_272(iParam0, 8192);
	}
	if (func_304(iParam0, 1.845172E+09f, 0))
	{
		func_272(iParam0, 2);
		uParam1->f_10.f_9++;
	}
	if (((func_305(uParam1, iParam0) && uParam1->f_10.f_14 < 4) && func_141(&Local_2028, &Var0, iParam0)) && func_142(Var0))
	{
		func_272(iParam0, 4);
	}
	func_306(iParam0, -3.801179E+11f, 16, 0);
	func_306(iParam0, 7.107604E-18f, 65536, 0);
	func_306(iParam0, 2.713495E-37f, 32768, 0);
	func_306(iParam0, -6.448304E+13f, 9.403955E-38f, 0);
}

void func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_307(uParam0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar3 = func_308(uParam0, iVar1, &bVar2);
		if (!VOLUME::DOES_VOLUME_EXIST(iVar3))
		{
		}
		else if (bVar2)
		{
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_620))
			{
				uParam0->f_620 = VOLUME::CREATE_VOLUME_AGGREGATE();
				if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_620))
				{
				}
				else
				{
					VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(uParam0->f_620, iVar3);
					Jump @166; //curOff = 114
					if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_619))
					{
						uParam0->f_619 = VOLUME::CREATE_VOLUME_AGGREGATE();
						if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_619))
						{
						}
						else
						{
							VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(uParam0->f_619, iVar3);
						}
						iVar1++;
					}
				}
			}
		}
	}
}

void func_145()
{
	vector3 vVar0;

	if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
		Local_2028.f_625 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_PRIMARY");
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_620))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_620) };
		Local_2028.f_626 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar0, 0f, 0f, 0f, 25f, 25f, 20f, "GHOST_VOL_SECONDARY");
	}
}

void func_146()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	struct<5> Var6;
	bool bVar11;
	vector3 vVar12;

	fVar0 = 1112014848; /* Float: 50f */
	fVar1 = 1112014848; /* Float: 50f */
	fVar2 = 1120403456; /* Float: 100f */
	fVar3 = 1120403456; /* Float: 100f */
	iVar4 = func_307(&Local_2028);
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		if (!func_309(&Local_2028, &Var6, iVar5))
		{
		}
		else
		{
			bVar11 = false;
			if (func_177(Var6, 5.126199E+12f, &bVar11, 0) && bVar11)
			{
				func_310(Var6, -1.770405E+07f, &fVar1, 0);
				func_310(Var6, 1.553555E-06f, &fVar3, 0);
			}
			else
			{
				func_310(Var6, -1.770405E+07f, &fVar0, 0);
				func_310(Var6, 1.553555E-06f, &fVar2, 0);
			}
		}
		iVar5++;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
	{
		vVar12 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
		Local_2028.f_627 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar0, fVar0, fVar0, "AVOID_VOL_PRIMARY");
		Local_2028.f_627.f_2 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar2, fVar2, fVar2, "AVOID_LAW_VOL_PRIMARY");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2028.f_627, 12288, 0, 0, -1, -1, 16);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2028.f_627.f_2, 16384, 0, 0, -1, -1, 16);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_620))
	{
		vVar12 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_620) };
		Local_2028.f_627.f_1 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar1, fVar1, fVar1, "AVOID_VOL_SECONDARY");
		Local_2028.f_627.f_3 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vVar12, 0f, 0f, 0f, fVar3, fVar3, fVar3, "AVOID_LAW_VOL_SECONDARY");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2028.f_627.f_1, 12288, 0, 0, -1, -1, 16);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_2028.f_627.f_3, 16384, 0, 0, -1, -1, 16);
	}
}

void func_147(var uParam0, var uParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(iVar2) != uParam1->f_316)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar1);
		}
		iVar1++;
	}
	uParam0->f_561 = uVar0;
	uParam0->f_561.f_52 = { Local_2028.f_2 };
	uParam0->f_561.f_54 = func_311(uParam0);
}

void func_148()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	float fVar11;
	struct<5> Var12;

	if (!func_292(&Local_2028, &Var1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		Var12 = { Var1 };
		if (!func_312(&Var12, 1.204317E-18f, iVar0, 0))
		{
		}
		else if (!func_176(Var12, -3.564253E+19f, &iVar7, 0))
		{
		}
		else
		{
			switch (iVar7)
			{
				case joaat("CULL"):
					iVar6 = 1;
					break;
				case joaat("FLATTEN"):
					iVar6 = 2;
					break;
				case joaat("FLATTEN_DEEP_SURFACE"):
					iVar6 = 4;
					break;
				case joaat("EXPLODE"):
					iVar6 = 8;
					break;
				case joaat("PUSH"):
					iVar6 = 16;
					break;
				case joaat("DECAL"):
					iVar6 = 32;
					break;
				default:
					Jump @243; //curOff = 168
					if (!func_313(Var12, 7.93606E-16f, &vVar8, 0))
					{
					}
					else if (!func_310(Var12, 3.057722E+10f, &fVar11, 0))
					{
					}
					else
					{
						Local_2028.f_189[iVar0] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vVar8, fVar11, iVar6, -1, 0);
					}
				}
				iVar0++;
			}
		}

bool func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = func_230(iVar0, 1);
		STREAMING::REQUEST_ANIM_DICT(func_231(iVar1));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_231(iVar1)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_150()
{
	int iVar0;
	int iVar1;

	func_314(&(Local_2028.f_174.f_6), 100);
	if ((func_33(1) && !func_33(8192)) && func_33(2))
	{
		func_315(Local_2028.f_2);
	}
	if (Local_2028.f_174.f_6 != 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (!func_33(1))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (iVar1 == iVar0)
		{
		}
		else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_2028.f_618), iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar1)))
		{
			NETWORK::_0x5A91BCEF74944E93(PLAYER::INT_TO_PLAYERINDEX(iVar1), 30f);
		}
		iVar1++;
	}
}

void func_151(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;

	iVar0 = Local_2028.f_174.f_1;
	func_314(&(Local_2028.f_174.f_1), 32);
	iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (func_316(iVar1))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_2028.f_618), iVar0);
	}
	else
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_2028.f_618), iVar0);
	}
	if (func_317(16384))
	{
		if (Local_2028.f_638 == 0)
		{
			Local_2028.f_638 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else
		{
			Local_363[Local_2028.f_634 /*52*/].f_47 = func_209(Local_2028.f_638);
			if (Local_363[Local_2028.f_634 /*52*/].f_47 > 45000 && !func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2))
			{
				func_39(&(Local_363[Local_2028.f_634 /*52*/]), 2);
			}
		}
	}
	else
	{
		Local_363[Local_2028.f_634 /*52*/].f_47 = 0;
		Local_2028.f_638 = 0;
	}
	if (func_318(uParam0, uParam2))
	{
		func_39(uParam1[Local_2028.f_634 /*52*/], 8);
	}
	else
	{
		func_319(uParam1[Local_2028.f_634 /*52*/], 8);
	}
	bVar2 = func_41(uParam1[Local_2028.f_634 /*52*/], 32);
	func_320(Local_2028.f_174.f_3);
	func_321();
	func_322();
	func_323();
	func_324();
	if (func_33(1) && !func_33(2))
	{
		if (func_325())
		{
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 2.350989E-38f);
		}
		if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2.350989E-38f) && func_326())
		{
			func_252(func_251(), 0);
		}
	}
	if (!func_55(&Local_16, 16))
	{
		if (func_327(uParam0, uParam2, &iVar3))
		{
			Local_363[Local_2028.f_634 /*52*/].f_45 = iVar3;
			if (func_328(Local_16.f_16[iVar3 /*12*/].f_2))
			{
				if (Local_2028.f_171 != 0)
				{
					Local_2028.f_171.f_1 = (Local_2028.f_171.f_1 + NETWORK::GET_TIME_DIFFERENCE(Local_2028.f_171, NETWORK::GET_NETWORK_TIME_ACCURATE()));
				}
				Local_2028.f_171 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else
			{
				Local_2028.f_171 = 0;
			}
		}
		else
		{
			(uParam1[Local_2028.f_634 /*52*/])->f_45 = -1;
			Local_2028.f_171 = 0;
		}
	}
	else
	{
		(uParam1[Local_2028.f_634 /*52*/])->f_45 = -1;
		Local_2028.f_171 = 0;
	}
	if (bVar2)
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_316) || !GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2.350989E-38f))
			{
				func_103();
				func_319(uParam1[Local_2028.f_634 /*52*/], 32);
				func_213(1);
				func_43(uParam2, uParam1);
				func_39(uParam1[Local_2028.f_634 /*52*/], 8388608);
				if ((!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_316) || !GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_316)) || (GANG::NETWORK_GET_NUM_GANG_MEMBERS(uParam0->f_316) <= 1 && !GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_316, PLAYER::PLAYER_ID())))
				{
					func_126(2048);
				}
				else if (!GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_316, PLAYER::PLAYER_ID()))
				{
					func_126(4096);
				}
				else
				{
					func_126(512);
				}
			}
		}
	}
	else if (((!func_41(uParam1[Local_2028.f_634 /*52*/], 8388608) && !func_55(&Local_16, 1.084202E-19f)) && !func_33(1)) && !func_55(&Local_16, 524288))
	{
		if (GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_316) && GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_316, PLAYER::PLAYER_ID()))
		{
			func_329(1);
		}
	}
	func_330();
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32) && func_331(Local_2028.f_619, Global_34))
	{
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 65536);
		bVar4 = true;
	}
	else
	{
		func_319(&(Local_363[Local_2028.f_634 /*52*/]), 65536);
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64) && func_331(Local_2028.f_620, Global_34))
	{
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 131072);
		bVar4 = true;
	}
	else
	{
		func_319(&(Local_363[Local_2028.f_634 /*52*/]), 131072);
	}
	if ((bVar4 && func_33(1)) && func_332(255))
	{
		func_72(1);
	}
	else
	{
		func_72(0);
	}
	if (func_33(1) && func_332(255))
	{
		func_333();
	}
	if (func_334(&iVar5))
	{
		func_335(iVar5);
	}
}

void func_152()
{
	if (Local_2028.f_174.f_7 == 0)
	{
		if (func_336())
		{
			func_82(1);
		}
		else
		{
			func_82(0);
		}
	}
	func_314(&(Local_2028.f_174.f_7), 5);
}

void func_153(var uParam0, var uParam1, var uParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	char cVar7[64];
	vector3 vVar15;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;

	bVar0 = !func_41(uParam1[Local_2028.f_634 /*52*/], 2);
	iVar1 = uParam2->f_174.f_2;
	func_314(&(uParam2->f_174.f_2), 3);
	iVar3 = PLAYER::PLAYER_PED_ID();
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar1 /*4*/]))
	{
		return;
	}
	iVar2 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar1 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	if (!func_92(iVar1, 8))
	{
		VEHICLE::_0xCBF88256E44D5D39(iVar2, true);
		func_337(iVar1, 8);
	}
	if (!func_92(iVar1, 32) && func_338(iVar1, &Local_16, 1))
	{
		Local_2028.f_29[iVar1 /*5*/].f_4 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1.718269E-05f, iVar2, -1f, 90f, 40f, -1f, -1f, 180f, false, true, -1, -1);
		func_337(iVar1, 32);
	}
	if ((!func_92(iVar1, 64) && func_338(iVar1, &Local_16, 1)) && func_209(Local_16.f_3[iVar1 /*4*/].f_2) > 60000)
	{
		vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
		if (!func_33(1))
		{
		}
		else if (BUILTIN::VDIST(vVar4, Global_34) > 1120403456)
		{
		}
		func_337(iVar1, 64);
	}
	if (!func_92(iVar1, 16))
	{
		StringCopy(&cVar7, "VEH_DEFENSIVE_VOL_", 64);
		StringIntConCat(&cVar7, iVar1, 64);
		vVar15 = { Vector(1f, 1f, 1f) * Vector(1101004800, 1101004800, 1101004800) };
		Local_2028.f_621[iVar1] = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 0f, 0f, 0f, vVar15, func_339(cVar7));
		PED::_ATTACH_VOLUME_TO_ENTITY(Local_2028.f_621[iVar1], iVar2, 0f, 0f, 0f, 0f, 0f, 0f, 2, true);
		if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_621[iVar1]))
		{
			func_337(iVar1, 16);
		}
	}
	if (bVar0 && PED::IS_PED_IN_VEHICLE(iVar3, iVar2, true))
	{
		func_115(uParam1[Local_2028.f_634 /*52*/], uParam2);
	}
	if (!VEHICLE::IS_DRAFT_VEHICLE(iVar2))
	{
		return;
	}
	if (!VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar2, &uVar19, &iVar18))
	{
		return;
	}
	iVar20 = 0;
	while (iVar20 < iVar18)
	{
		iVar21 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar2, iVar20);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
		{
		}
		else if (PED::IS_PED_DEAD_OR_DYING(iVar21, true))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
		{
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iVar21, 294, true);
		}
		iVar20++;
	}
}

void func_154(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	func_340(fParam2->f_174, uParam0, uParam1, fParam2);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_341(iVar0);
		func_342(iVar0);
		func_343(iVar0);
		iVar0++;
	}
	func_314(&(fParam2->f_174), fParam2->f_10.f_8);
}

void func_155()
{
	func_344(Local_2028.f_174.f_4);
	func_314(&(Local_2028.f_174.f_4), 4);
}

void func_156(float fParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = fParam0->f_174.f_3;
	if (!func_123(iVar0, 1, 1))
	{
		func_314(&(fParam0->f_174.f_3), 32);
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		func_314(&(fParam0->f_174.f_3), 32);
		return;
	}
	func_266(2, fParam0->f_10.f_18, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	if (func_41(uParam1[iVar0 /*52*/], 2))
	{
		func_266(6, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	else
	{
		func_266(4, fParam0->f_10.f_15, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar2), 1);
	}
	func_314(&(fParam0->f_174.f_3), 32);
}

void func_157(float fParam0, var uParam1, var uParam2)
{
	bool bVar0;
	var uVar1;

	if (fParam0->f_561.f_54 == 3.006576E-21f)
	{
		return;
	}
	if (!func_345())
	{
		return;
	}
	if (!func_33(128))
	{
		func_126(128);
	}
	if (func_41(uParam1[Local_2028.f_634 /*52*/], 32))
	{
		return;
	}
	if (func_41(uParam1[Local_2028.f_634 /*52*/], 8388608))
	{
		return;
	}
	Local_2028.f_561.f_1 = Local_2028.f_618;
	func_346(fParam0, uParam1, uParam2, fParam0->f_561.f_55);
	if (func_41(uParam1[Local_2028.f_634 /*52*/], 64))
	{
		if (Local_2028.f_631 == 255)
		{
			return;
		}
		if (!func_347(&(fParam0->f_561), Local_2028.f_632))
		{
			return;
		}
		func_103();
		func_319(uParam1[Local_2028.f_634 /*52*/], 64);
		func_213(1);
		func_213(8192);
		func_39(uParam1[Local_2028.f_634 /*52*/], 8388608);
		func_43(fParam0, uParam1);
		if (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
		{
			func_126(1024);
		}
		else
		{
			func_126(512);
		}
		return;
	}
	if (func_348(PLAYER::PLAYER_ID(), 1, 1))
	{
		return;
	}
	if (func_349(&(fParam0->f_561), &bVar0, &uVar1, 0))
	{
		func_329(2);
		if (!bVar0)
		{
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 32768);
		}
	}
	else if (func_350(fParam0, uParam1, uParam2))
	{
		func_329(2);
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 32768);
	}
}

void func_158()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	bool bVar4;

	if (Local_16.f_305 != 5)
	{
		func_93(&(Local_2028.f_548));
	}
	if (Local_16.f_305 != 4)
	{
		Local_2028.f_549 = 0;
	}
	switch (Local_16.f_305)
	{
		case 0:
		case 1:
			return;
		case 3:
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 1024);
			break;
		case 4:
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2048))
			{
				return;
			}
			if (func_351(Local_16.f_305.f_1, &iVar0))
			{
				iVar1 = PED::_GET_CARRIER_AS_HUMAN(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					Local_2028.f_550.f_6 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iVar1) };
				}
			}
			if (!func_352(Local_16.f_305.f_2, &(Local_2028.f_550), &bVar2, 42, 1, 1119092736 /* Float: 90f */, 20f, 1117782016 /* Float: 80f */, 1123024896 /* Float: 120f */, 3f))
			{
				if (!bVar2)
				{
					return;
				}
			}
			else
			{
				Local_2028.f_550.f_3.f_2 = (Local_2028.f_550.f_3.f_2 + 1092616192);
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Local_2028.f_550.f_3, &fVar3, false) && fVar3 != 0f)
				{
					if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
					{
						Local_2028.f_550.f_3.f_2 = fVar3;
						Local_363[Local_2028.f_634 /*52*/].f_49 = { Local_2028.f_550.f_3 };
						func_39(&(Local_363[Local_2028.f_634 /*52*/]), 4096);
					}
					else if (MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(Local_2028.f_619), Local_2028.f_550.f_3, true) > 1124204544 || MISC::GET_DISTANCE_BETWEEN_COORDS(VOLUME::GET_VOLUME_COORDS(Local_2028.f_620), Local_2028.f_550.f_3, true) > 1124204544)
					{
						Local_2028.f_550.f_3.f_2 = fVar3;
						Local_363[Local_2028.f_634 /*52*/].f_49 = { Local_2028.f_550.f_3 };
						func_39(&(Local_363[Local_2028.f_634 /*52*/]), 4096);
					}
				}
			}
			if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 4096) && Local_2028.f_549 < 2)
			{
				func_94(&(Local_2028.f_550), 1, 0);
				Local_2028.f_549++;
				return;
			}
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 2048);
			break;
		case 5:
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8192))
			{
				return;
			}
			if (!func_353(Local_16.f_305.f_2, &bVar4))
			{
				return;
			}
			if (bVar4)
			{
				func_39(&(Local_363[Local_2028.f_634 /*52*/]), 16384);
			}
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 8192);
			break;
		case 6:
			break;
		case 2:
			if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 1024))
			{
				return;
			}
			func_94(&(Local_2028.f_550), 1, 0);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 1024);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 2048);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 4096);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 8192);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 16384);
			break;
	}
}

void func_159()
{
	int iVar0;
	bool bVar1;
	struct<30> Var2;
	struct<9> Var32;

	if (func_354(&iVar0, &bVar1))
	{
		func_355(1);
	}
	else
	{
		func_355(0);
	}
	if ((func_33(4) && func_356(255)) && func_357(255))
	{
		func_358(&Var2, &Var32, iVar0, bVar1);
		func_359(Var2, Var32, 1, 1, 1);
	}
}

void func_160()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	var uVar4;

	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2097152))
	{
		if (func_33(1.504633E-36f) && func_257(512, 255))
		{
			func_69(0);
		}
		return;
	}
	iVar0 = func_360();
	func_206(iVar0, func_55(&Local_16, 524288));
	if (!func_33(1))
	{
		return;
	}
	if (!func_55(&Local_16, 524288) && !func_33(3.85186E-34f))
	{
		return;
	}
	if (func_361())
	{
		return;
	}
	iVar1 = func_362(255);
	if (Local_16.f_299 != 0 && iVar1 != 3)
	{
		if (iVar1 == 0)
		{
			return;
		}
		if (func_257(1, 255) && iVar1 == 1)
		{
			return;
		}
	}
	bVar2 = func_257(1, 255);
	func_69(bVar2);
	func_208(&iVar3, &uVar4);
	if (iVar3 > 0)
	{
		func_363(func_257(1, 255));
	}
	func_39(&(Local_363[Local_2028.f_634 /*52*/]), 2097152);
}

void func_161()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = func_33(1);
	if ((((bVar0 && !func_33(8192)) && func_33(16384)) && !func_55(&Local_16, 512)) && !func_33(9.403955E-38f))
	{
		if (func_364(0, 0, 0))
		{
			if (Local_2028.f_639 == 0)
			{
				Local_2028.f_639 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_33(32768))
				{
					func_222(1);
				}
			}
			bVar1 = func_33(8192);
			if (((Local_2028.f_639 != 0 && func_209(Local_2028.f_639) < 45000) && !(!bVar1 && func_331(Local_2028.f_627.f_2, Global_34))) && !(bVar1 && func_331(Local_2028.f_627.f_3, Global_34)))
			{
				LAW::_0xBD944A3D36E992DE();
				PLAYER::REPORT_POLICE_SPOTTED_PLAYER(PLAYER::GET_PLAYER_INDEX());
			}
		}
		else
		{
			Local_2028.f_639 = 0;
		}
	}
	if (bVar0 && !func_33(9.403955E-38f))
	{
		func_76(1);
	}
	else
	{
		func_76(0);
	}
	if (bVar0 && !func_33(9.403955E-38f))
	{
		func_77(1);
	}
	else
	{
		func_77(0);
	}
	if ((bVar0 && !func_33(8192)) && Local_2028.f_10.f_5 != 0)
	{
		iVar2 = PLAYER::PLAYER_ID();
		switch (Local_2028.f_10.f_5)
		{
			case joaat("SUPPRESS_LAW_CRIMES"):
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, -2.181735E+14f, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 1.225001E-21f, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, 6.165362E+33f, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, NaNf, 0, 0, -1);
				LAW::SUPPRESS_CRIME_THIS_FRAME(iVar2, NaNf, 0, 0, -1);
				break;
		}
	}
}

void func_162()
{
	int iVar0;

	if (func_33(1))
	{
		iVar0 = func_251();
		func_365(1, 0);
		switch (Local_16.f_2)
		{
			case 1:
				if (iVar0 == 1 && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8))
				{
					func_365(2, 0);
				}
				break;
			case 2:
				if (iVar0 == 1)
				{
					if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2) || func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8))
					{
						func_365(2, 0);
					}
				}
				break;
			case 3:
			case 4:
			case 5:
				func_365(4, 0);
				break;
		}
		if (func_55(&Local_16, 524288) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2097152))
		{
			if (func_366(1) > 0)
			{
				func_365(8, 1);
			}
			else
			{
				func_365(16, 1);
			}
		}
	}
	else
	{
		if ((!func_367(1) || func_367(16)) || func_367(8))
		{
			return;
		}
		func_365(16, 1);
	}
}

void func_163()
{
	func_368();
}

void func_164(var uParam0, var uParam1, float fParam2)
{
	if (func_369())
	{
		func_102(fParam2);
		return;
	}
	func_370(uParam0, uParam1, fParam2);
	func_371(uParam0, uParam1, fParam2);
	func_372(uParam0, uParam1, fParam2);
	func_373(uParam0, uParam1, fParam2);
	func_374();
	func_375();
	func_376(uParam0, uParam1, fParam2);
	func_377();
	func_378(fParam2);
	func_379(uParam0, uParam1, fParam2);
}

var func_165()
{
	return Local_2028.f_10.f_1;
}

int func_166(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_381(func_380(iParam0, uParam1)))
	{
		return 0;
	}
	if (!func_382(iParam0, &vVar0, uParam1))
	{
		return 1;
	}
	vVar0.f_2 = -3.972855E+33f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar0.f_1), &vVar0))
	{
		return 1;
	}
	return DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar0.x, vVar0.y) + 1;
}

Vector3 func_167(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	struct<4> Var3;

	if (iParam2 == 0)
	{
		return func_380(iParam0, uParam1);
	}
	iParam2 = (iParam2 - 1);
	if (!func_382(iParam0, &Var3, uParam1))
	{
		return vVar0;
	}
	Var3.f_2 = -3.972855E+33f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -3.382021E+12f;
	Var3.f_3 = iParam2;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var3.f_1), &Var3))
	{
		return vVar0;
	}
	Var3.f_2 = -9.954428E+33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &Var3);
	return vVar0;
}

bool func_168(int iParam0, vector3 vParam1, float fParam4, float fParam5, var uParam6)
{
	int iVar0;
	struct<8> Var1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_16.f_340[iParam0]))
	{
		return true;
	}
	if (func_381(vParam1))
	{
		return true;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_16.f_340.f_5))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam1, fParam4, false, 0, 2.706126E-18f))
		{
			*uParam6 = 1;
			return false;
		}
		Var1 = { vParam1 };
		Var1.f_4 = fParam4;
		Var1.f_6 = fParam5;
		Var1.f_7 = Local_2028.f_4.f_1;
		Local_16.f_340.f_5 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var1);
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_16.f_340.f_5);
	switch (iVar0)
	{
		case 3:
			Local_16.f_340[iParam0] = VOLUME::_0x351D71B8B72B858B(Local_16.f_340.f_5);
			return true;
		case 4:
			Local_16.f_340.f_5 = 0;
			return true;
		default:
			break;
	}
	return false;
}

int func_169(int iParam0, struct<2> Param1, bool bParam3)
{
	struct<28> Var0;
	var uVar31;

	if (!Global_1901671.f_316.f_24)
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iParam0))
	{
		return 0;
	}
	if (!func_28(Param1))
	{
		return 0;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = iParam0;
	Var0.f_4 = 13;
	Var0.f_7 = { Param1 };
	if (bParam3)
	{
		Var0.f_14 |= 2;
	}
	uVar31 = func_383(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_384(&Var0, uVar31);
	Var0.f_4 = 14;
	func_385(&Var0);
	return 1;
}

int func_170()
{
	return -1.500374E+11f;
}

bool func_171(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_172(var uParam0, bool bParam1, int iParam2)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = -1440849f;
		bParam1->f_3 = iParam2;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

int func_173(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_172(uParam0, &Var0, iParam1))
	{
		func_176(Var0, 7.02692E+09f, &iVar5, 0);
	}
	return iVar5;
}

int func_174()
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_292(&Local_2028, &Var0) && func_312(&Var0, 9.863127E+35f, 0, 0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 10)
	{
		return 10;
	}
	return iVar5;
}

bool func_175(bool bParam0, int iParam1)
{
	if (func_292(&Local_2028, bParam0))
	{
		bParam0->f_2 = 1.659969E+37f;
		bParam0->f_3 = iParam1;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
	}
	return false;
}

bool func_176(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *bParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*bParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

bool func_177(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_178(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, 7.02692E+09f, &uVar5, 0);
	}
	return uVar5;
}

float func_179(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return 1.330285E-21f;
		default:
			break;
	}
	return 1.330285E-21f;
}

int func_180(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return -38.67923f;
		default:
			break;
	}
	return -38.67923f;
}

int func_181(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, 2.119798E+09f, &iVar5, 0);
	}
	return iVar5;
}

bool func_182(int iParam0)
{
	if (iParam0 == 0 || iParam0 == -3.273909E-18f)
	{
		return true;
	}
	if (!func_236(iParam0))
	{
		return true;
	}
	WEAPON::_REQUEST_WEAPON_ASSET(iParam0, -1, false);
	if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_183()
{
	return -4.243677E-35f;
}

int func_184()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_289(&Local_2028);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_172(&Local_2028, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_185()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;

	iVar2 = func_290(&Local_2028);
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_141(&Local_2028, &Var3, iVar0) || !func_142(Var3))
		{
		}
		else
		{
			iVar1++;
			if (!func_386(&Local_2028, iVar0))
			{
			}
			else
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	return iVar1;
}

int func_186()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	bool bVar8;
	int iVar9;
	int iVar10;

	iVar2 = func_174();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		func_140(&Var3);
		if (!func_175(&Var3, iVar0) || !func_142(Var3))
		{
		}
		else if (func_177(Var3, 1.308819E-07f, &bVar8, 0) && bVar8)
		{
		}
		else
		{
			iVar1++;
		}
		iVar0++;
	}
	iVar10 = func_290(&Local_2028);
	iVar9 = 0;
	while (iVar9 < iVar10)
	{
		func_140(&Var3);
		if (!func_141(&Local_2028, &Var3, iVar9) || !func_142(Var3))
		{
		}
		else if (!func_305(&Local_2028, iVar9))
		{
		}
		else
		{
			iVar1++;
		}
		iVar9++;
	}
	return iVar1;
}

void func_187()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;
	struct<5> Var5;
	bool bVar10;

	if (Local_2028.f_10.f_8 <= 0)
	{
		return;
	}
	if (!func_387(2, Local_2028.f_4.f_1))
	{
		return;
	}
	fVar0 = 0f;
	iVar1 = -1;
	iVar4 = func_290(&Local_2028);
	iVar2 = 0;
	while (iVar2 < iVar4)
	{
		if (Local_2028.f_45[iVar2 /*6*/] == 0)
		{
		}
		else
		{
			func_140(&Var5);
			if (!func_141(&Local_2028, &Var5, iVar2))
			{
			}
			else if (!func_177(Var5, -8.421554E+25f, &bVar10, 0) || !bVar10)
			{
			}
			else
			{
				fVar3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
				if (fVar3 > fVar0)
				{
					iVar1 = iVar2;
					fVar0 = fVar3;
				}
			}
		}
		iVar2++;
	}
	if (iVar1 == -1)
	{
		return;
	}
	func_274(iVar1, &Local_16, 9.403955E-38f);
}

bool func_188()
{
	int iVar0;
	struct<5> Var1;

	if (Local_2028.f_10.f_12 >= func_174())
	{
		return true;
	}
	iVar0 = Local_2028.f_10.f_12;
	if (func_175(&Var1, iVar0) && !func_142(Var1))
	{
		Local_2028.f_10.f_12++;
		return false;
	}
	if (!func_388(iVar0))
	{
		return false;
	}
	Local_2028.f_10.f_12++;
	return false;
}

bool func_189(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	vector3 vVar7;
	float fVar10;
	int iVar11;
	int iVar12;

	if (uParam1->f_10.f_10 >= uParam1->f_10.f_7)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_10;
	if (func_172(&Local_2028, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	iVar6 = func_173(&Local_2028, iVar0);
	vVar7 = { uParam1->f_29[iVar0 /*5*/].f_1 };
	fVar10 = func_389(&Local_2028, iVar0);
	if (iVar6 == 0 || !STREAMING::IS_MODEL_VALID(iVar6))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (func_381(vVar7))
	{
		uParam1->f_10.f_10++;
		return false;
	}
	if (!func_113(uParam1->f_29[iVar0 /*5*/], 4))
	{
		func_390(&vVar7, 7f);
	}
	if (!func_391(&(uParam0->f_3[iVar0 /*4*/]), iVar6, vVar7, fVar10, 1, 0, 0, 0))
	{
		return false;
	}
	iVar11 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar0 /*4*/]);
	VEHICLE::SET_VEHICLE_CAN_BREAK(iVar11, true);
	VEHICLE::_0x850CE59DEC2028F3(iVar11, 1);
	VEHICLE::SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(iVar11, true);
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar11, 3, true);
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar11, 9, true);
	if (func_299(Var1, -9.730181E-22f, &iVar12, 0))
	{
		VEHICLE::_BREAK_OFF_VEHICLE_WHEEL(iVar11, iVar12);
	}
	if (func_33(256))
	{
		VEHICLE::_0x87B974E54C71BA7B(iVar11, true);
		VEHICLE::_0xC4A2C11FC0D41916(iVar11, true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar11, true);
	}
	if (func_113(uParam1->f_29[iVar0 /*5*/], 2))
	{
		func_392(iVar0, uParam0, 2);
	}
	uParam1->f_10.f_10++;
	return false;
}

bool func_190(var uParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	if (uParam1->f_10.f_11 >= uParam1->f_10.f_8)
	{
		return true;
	}
	iVar0 = uParam1->f_10.f_11;
	if (func_141(&Local_2028, &Var1, iVar0) && !func_142(Var1))
	{
		uParam1->f_10.f_11++;
		return false;
	}
	if (!func_393(iVar0, uParam0, uParam1))
	{
		return false;
	}
	func_394();
	uParam0->f_16[iVar0 /*12*/].f_2 = uParam1->f_45[iVar0 /*6*/];
	uParam0->f_16[iVar0 /*12*/].f_8 = { uParam1->f_45[iVar0 /*6*/].f_2 };
	uParam0->f_16[iVar0 /*12*/].f_11 = uParam1->f_45[iVar0 /*6*/].f_5;
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]) && !ENTITY::IS_ENTITY_DEAD(NETWORK::NET_TO_PED(uParam0->f_16[iVar0 /*12*/])))
	{
		if (!func_395(iVar0, uParam0, uParam1, 1))
		{
			return false;
		}
	}
	uParam1->f_10.f_11++;
	return false;
}

bool func_191(var uParam0)
{
	if (uParam0->f_327 >= 20)
	{
		return true;
	}
	func_396(uParam0->f_327, uParam0);
	uParam0->f_327++;
	return false;
}

void func_192(var uParam0, int iParam1, bool bParam2)
{
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (uParam0->f_16[bParam2->f_174 /*12*/].f_2 == 13.22463f && !func_397(bParam2->f_174, 1))
			{
				func_398(bParam2->f_174, NETWORK::NET_TO_PED(uParam0->f_16[bParam2->f_174 /*12*/]), uParam0);
			}
			break;
	}
	func_399(bParam2->f_174, uParam0, iParam1, bParam2);
}

void func_193(var uParam0, int iParam1, bool bParam2)
{
	func_400(bParam2->f_174.f_2, uParam0, iParam1, bParam2);
}

void func_194(var uParam0, int iParam1, bool bParam2)
{
	if (!func_55(&Local_16, 2f) && func_59(iParam1, 32, 0))
	{
		func_63(&Local_16, 2f);
	}
	if (!func_55(&Local_16, 1.504633E-36f) && func_401(!func_55(&Local_16, 2f)))
	{
		func_63(uParam0, 1.504633E-36f);
	}
	if (!func_55(uParam0, 16) && func_59(iParam1, 2, 0))
	{
		func_63(uParam0, 16);
	}
	if ((!func_55(&Local_16, 512) && func_402(&Local_16) > 2) && func_59(&Local_363, 64, 0))
	{
		func_63(&Local_16, 512);
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 4096)) || func_55(uParam0, 16384))
	{
		return;
	}
	if (func_55(&Local_16, 3.85186E-34f) && !func_55(&Local_16, 2.524355E-29f))
	{
		if (Local_16.f_320 == 0)
		{
			Local_16.f_320 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (func_209(Local_16.f_320) > 60000)
		{
			func_63(&Local_16, 2.524355E-29f);
		}
	}
	if (func_199(bParam2) == -1.484548E+24f && uParam0->f_322 <= 0)
	{
		func_63(uParam0, 16384);
	}
	if ((func_199(bParam2) == -1.398992E+38f && !func_403(uParam0, 13.22463f)) && !func_55(uParam0, 2048))
	{
		func_63(uParam0, 1024);
	}
	if ((func_199(bParam2) == -1.398992E+38f && !func_404(uParam0)) && func_55(uParam0, 2048))
	{
		func_63(uParam0, 4096);
	}
}

void func_195(var uParam0, int iParam1, bool bParam2)
{
	func_405(Local_2028.f_174.f_4, uParam0, bParam2);
}

void func_196()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	switch (Local_16.f_305)
	{
		case 0:
			if (!func_406())
			{
				return;
			}
			func_407();
			func_408(1);
			break;
		case 1:
			if (!func_406())
			{
				func_408(0);
				return;
			}
			if (!func_409())
			{
				return;
			}
			func_63(&Local_16, 128);
			func_408(3);
			break;
		case 3:
			if (!func_54(&Local_363, 1024))
			{
				return;
			}
			if (!func_410(&uVar1, &vVar2))
			{
				switch (Local_2028.f_10)
				{
					case joaat("COACH_HOLDUP_KIDNAP"):
						if (func_411(&Local_16, 13.22463f, 262144) && func_412(&Local_16, 13.22463f, 262144))
						{
							iVar5 = 0;
							while (iVar5 < 20)
							{
								func_413(iVar5, &Local_16, 262144);
								iVar5++;
							}
							return;
						}
						break;
					case joaat("COACH_HOLDUP_ROBBERY"):
						if (func_414(&Local_16, 1024, 0) && func_415(&Local_16, 1024, 0))
						{
							iVar6 = 0;
							while (iVar6 < 4)
							{
								func_416(iVar6, &Local_16, 1024);
								iVar6++;
							}
							return;
						}
						break;
				}
				func_408(2);
				return;
			}
			Local_16.f_305.f_1 = uVar1;
			Local_16.f_305.f_2 = { vVar2 };
			func_408(4);
			break;
		case 4:
			if (!func_54(&Local_363, 2048))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(&(Local_363[iVar0 /*52*/]), 4096))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					Local_16.f_305.f_2 = { Local_363[iVar0 /*52*/].f_49 };
					func_408(5);
					return;
				}
				iVar0++;
			}
			func_63(&Local_16, 256);
			func_408(2);
			break;
		case 5:
			if (!func_54(&Local_363, 8192))
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 32)
			{
				if (!func_41(&(Local_363[iVar0 /*52*/]), 16384))
				{
				}
				else if (!func_123(iVar0, 0, 1))
				{
				}
				else
				{
					func_63(&Local_16, 256);
					func_408(2);
					return;
				}
				iVar0++;
			}
			func_408(6);
			break;
		case 6:
			if (Local_16.f_305.f_5 >= Local_16.f_305.f_6)
			{
				if (Local_16.f_305.f_1 == -1)
				{
				}
				else
				{
					switch (Local_2028.f_10)
					{
						case joaat("COACH_HOLDUP_KIDNAP"):
							func_274(Local_16.f_305.f_1, &Local_16, 262144);
							if (func_412(&Local_16, 13.22463f, 262144))
							{
								iVar7 = 0;
								while (iVar7 < 20)
								{
									func_413(iVar7, &Local_16, 262144);
									iVar7++;
								}
							}
							break;
						case joaat("COACH_HOLDUP_ROBBERY"):
							func_417(Local_16.f_305.f_1, &Local_16, 1024);
							if (func_415(&Local_16, 1024, 0))
							{
								iVar8 = 0;
								while (iVar8 < 4)
								{
									func_416(iVar8, &Local_16, 1024);
									iVar8++;
								}
							}
							break;
					}
				}
				func_418(&Local_16, 256);
				func_408(2);
				return;
			}
			if (!func_419(Local_16.f_305.f_5, Local_16.f_305.f_6, Local_16.f_305.f_2))
			{
				return;
			}
			Local_16.f_305.f_8 = -1;
			Local_16.f_305.f_5++;
			break;
		case 2:
			if (func_59(&Local_363, 1024, 0))
			{
				return;
			}
			Local_16.f_305.f_1 = -1;
			Local_16.f_305.f_2 = { 0f, 0f, 0f };
			Local_16.f_305.f_5 = 0;
			Local_16.f_305.f_6 = 0;
			Local_16.f_305.f_7 = 0;
			Local_16.f_305.f_9 = 0;
			Local_16.f_305.f_8 = -1;
			func_408(0);
			break;
	}
}

void func_197(var uParam0, int iParam1, bool bParam2)
{
	switch (func_199(bParam2))
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_420(uParam0, iParam1, bParam2);
			return;
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_421(uParam0, iParam1, bParam2);
			return;
		default:
			break;
	}
}

void func_198()
{
	func_422();
}

int func_199(bool bParam0)
{
	return bParam0->f_10;
}

bool func_200(var uParam0, bool bParam1)
{
	if (!func_55(uParam0, 32768))
	{
		return false;
	}
	return func_210(uParam0) > bParam1->f_10.f_6;
}

bool func_201(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_16[iParam0 /*12*/].f_4, iParam2);
}

bool func_202(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_257[iParam0 /*5*/].f_1, iParam2);
}

int func_203(var uParam0, bool bParam1)
{
	switch (func_199(bParam1))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_55(uParam0, 2048))
			{
				return 2;
			}
			if (uParam0->f_325 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_55(uParam0, 8192))
			{
				return 2;
			}
			if (uParam0->f_323 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_204(var uParam0, bool bParam1)
{
	switch (func_199(bParam1))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_55(uParam0, 131072))
			{
				return 2;
			}
			if (uParam0->f_326 < bParam1->f_10.f_13)
			{
				return 0;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_55(uParam0, 262144))
			{
				return 2;
			}
			if (uParam0->f_324 < bParam1->f_10.f_14)
			{
				return 0;
			}
			break;
		default:
			return 0;
	}
	return 1;
}

int func_205()
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return 20;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 4;
		default:
			break;
	}
	return 0;
}

void func_206(int iParam0, bool bParam1)
{
	if (!func_423(iParam0, 0) && func_128(iParam0))
	{
		if (func_424(iParam0))
		{
			func_129(iParam0, 1);
			if (bParam1)
			{
				Local_2028.f_635++;
			}
			else
			{
				func_207();
			}
		}
		else
		{
			func_129(iParam0, 0);
		}
	}
}

void func_207()
{
	struct<2> Var0;

	Var0.f_1 = 11;
	func_425(&Var0, 2.087847E-24f, func_211(255), func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32), GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
}

void func_208(bool bParam0, int iParam1)
{
	*bParam0 = 0;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			*iParam1 = Local_2028.f_10.f_13;
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			*iParam1 = Local_2028.f_10.f_14;
			break;
	}
	*bParam0 = func_366(1);
}

int func_209(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_210(var uParam0)
{
	if (!func_55(&Local_16, 32768))
	{
		return 0;
	}
	return NETWORK::GET_TIME_DIFFERENCE(uParam0->f_319, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_211(int iParam0)
{
	int iVar0;

	iVar0 = func_426(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_427(iVar0);
}

void func_212(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, struct<2> Param13, var uParam15)
{
	float fVar0;
	bool bVar1;
	bool bVar2;

	if (iParam10 == 0)
	{
		return;
	}
	fVar0 = func_428(((BUILTIN::TO_FLOAT(iParam12) / 1148846080) / 1114636288), 1056964608 /* Float: 0.5f */, 1106247680 /* Float: 30f */);
	func_429(iParam2, &bVar1, &bVar2, 0, fVar0);
	func_430(iParam2, &bVar2, 0, iParam4, iParam10, iParam11, bParam7);
	func_431(iParam2, 0, iParam5);
	func_432(iParam2, &bVar2, 0, bParam8, iParam9);
	func_433(iParam2, 0, Param13);
	func_434(iParam2, 0, iParam6, uParam15);
	func_435(1060.634f, uParam0, iParam2, 0, 255, 0, 1);
	func_429(iParam3, &bVar1, &bVar2, 1, fVar0);
	func_432(iParam3, &bVar2, 1, bParam8, iParam9);
	func_430(iParam3, &bVar2, 1, iParam4, iParam10, iParam11, bParam7);
	func_434(iParam3, 1, iParam6, uParam15);
	if (!bVar2 && bVar1 != 0)
	{
		func_435(bVar1, uParam1, iParam3, 0, 255, 0, 0);
	}
}

void func_213(int iParam0)
{
	func_436(&(Local_2028.f_7), iParam0);
}

void func_214(int iParam0)
{
	int iVar0;

	if (!func_271(iParam0, 64))
	{
		return;
	}
	if (func_271(iParam0, 8388608) && func_437(iParam0, &iVar0, 0, 1))
	{
		NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(iVar0, false);
	}
	func_438(iParam0, 8192);
	func_438(iParam0, 16384);
	func_439(iParam0);
	func_438(iParam0, 64);
	func_438(iParam0, 1.504633E-36f);
}

void func_215(int iParam0)
{
	if (iParam0 != 0)
	{
		PED::REMOVE_RELATIONSHIP_GROUP(iParam0);
	}
}

void func_216(bool bParam0)
{
	func_440(60, !bParam0);
}

void func_217(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_441(iVar0, 1))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_221(1);
}

bool func_218(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return Global_1138658[iParam0 /*56*/].f_48 & 1 != 0;
}

void func_219(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_441(iVar0, 2))
	{
		return;
	}
	if (!bParam2 && !func_442(iVar0))
	{
		return;
	}
	func_221(2);
}

bool func_220(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return Global_1138658[iParam0 /*56*/].f_48 & 2 != 0;
}

void func_221(int iParam0)
{
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_48 = (Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_48 - (Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_48 && iParam0));
}

void func_222(bool bParam0)
{
	if (bParam0)
	{
	}
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(15, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(6, bParam0);
	MISC::BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(1, bParam0);
}

bool func_223(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

void func_224(int iParam0, int iParam1)
{
	if (!func_443(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_444();
	}
}

void func_225(int iParam0, int iParam1, bool bParam2)
{
	if (func_443(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_444();
	}
}

char* func_226()
{
	return "mp@freemode_cams@gfh_outro_cams";
}

bool func_227(int iParam0)
{
	return func_113(Local_2028.f_8, iParam0);
}

void func_228(int iParam0)
{
	func_436(&(Local_2028.f_8), iParam0);
}

void func_229(bool bParam0)
{
	if (!bParam0)
	{
		func_445(0, 0);
	}
	Global_1940239.f_3 = bParam0;
}

int func_230(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1.617293E+23f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_231(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "script_common@wave@male@unapproved";
		default:
			break;
	}
	return "";
}

void func_232(bool bParam0)
{
	if (bParam0)
	{
		func_446(49);
	}
	else
	{
		func_447(49);
	}
}

bool func_233(int iParam0)
{
	if (iParam0 != -1 && iParam0 != 0)
	{
		return true;
	}
	return false;
}

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_5))
	{
		iVar2 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[iParam0 /*12*/].f_5);
		ANIMSCENE::_DELETE_ANIM_SCENE(iVar2);
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/]))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				PED::SET_PED_CAN_RAGDOLL(iVar0, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 137, false);
				PED::SET_PED_RESET_FLAG(iVar0, 36, false);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, true);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_1))
	{
		iVar1 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/].f_1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
}

void func_235(bool bParam0)
{
	if (!STREAMING::IS_MODEL_VALID(bParam0))
	{
		return;
	}
	STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(bParam0);
}

bool func_236(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

bool func_237()
{
	float fVar0;
	struct<5> Var1;
	var uVar6;

	fVar0 = 3.143621E+27f;
	if (!func_448(&Var1))
	{
		return fVar0;
	}
	if (!func_449(Var1, 7.02692E+09f, &uVar6))
	{
		return fVar0;
	}
	return uVar6;
}

bool func_238()
{
	float fVar0;
	struct<5> Var1;
	var uVar6;

	fVar0 = 4.531001E+34f;
	if (!func_448(&Var1))
	{
		return fVar0;
	}
	if (!func_449(Var1, -4.014181E+34f, &uVar6))
	{
		return fVar0;
	}
	return uVar6;
}

void func_239(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202[iParam0]))
	{
		return;
	}
	func_243(&(Local_2028.f_202[iParam0]));
	func_438(iParam0, 256);
	func_438(iParam0, 512);
	func_438(iParam0, 128);
	func_438(iParam0, 1024);
	func_438(iParam0, 2048);
	func_438(iParam0, 4096);
	if (Local_2028.f_10 == -1.398992E+38f)
	{
		Local_2028.f_202.f_30[iParam0] = 255;
	}
}

void func_240(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_21[iParam0]))
	{
		return;
	}
	func_243(&(Local_2028.f_202.f_21[iParam0]));
}

void func_241(int iParam0)
{
	func_243(&(Local_2028.f_202.f_25[iParam0]));
	func_450(iParam0, 2);
	func_450(iParam0, 4);
	func_450(iParam0, 1);
	func_450(iParam0, 8);
	if (Local_2028.f_10 == -1.484548E+24f)
	{
		Local_2028.f_202.f_30[iParam0] = 255;
	}
}

void func_242()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_451(iVar0, 0);
		func_452(iVar0, 0);
		iVar0++;
	}
}

void func_243(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

void func_244()
{
	func_243(&(Local_2028.f_202.f_58));
	if (!func_453(Local_2028.f_202.f_59))
	{
		return;
	}
	UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_2028.f_202.f_59, false);
}

void func_245(float fParam0)
{
	func_228(2097152);
	func_228(4194304);
	Local_2028.f_202.f_53 = 255;
	Local_2028.f_202.f_54 = 0;
	if (!func_454(fParam0))
	{
		return;
	}
	UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(fParam0->f_202.f_56, false);
	fParam0->f_202.f_56 = 0;
	fParam0->f_202.f_60 = 0;
}

bool func_246(int iParam0)
{
	return iParam0 != 0;
}

void func_247(var uParam0, bool bParam1, bool bParam2)
{
	struct<30> Var0;
	var uVar34;
	var uVar35;
	var uVar36;
	var uVar37;
	var uVar38;
	var uVar39;
	int iVar40;

	if (((*uParam0)[0 /*34*/] != 0 || bParam2) || ((uParam0[0 /*34*/])->f_23 != -1 && bParam1))
	{
		Var0.f_27 = -1;
		Var0.f_28 = -1;
		Var0.f_29 = -1f;
		iVar40 = 0;
		while (iVar40 <= 6)
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_1);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_2);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_3);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_4);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_5);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_6);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_10);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_11);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_12);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_13);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_14);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_15);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_20);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_21);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_22);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_16);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_17);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_18);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((uParam0[iVar40 /*34*/])->f_19);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY((*uParam0)[iVar40 /*34*/]);
			if (!bParam1)
			{
				uVar34 = (uParam0[iVar40 /*34*/])->f_23;
				uVar35 = (uParam0[iVar40 /*34*/])->f_25;
				uVar36 = (uParam0[iVar40 /*34*/])->f_26;
				uVar37 = (uParam0[iVar40 /*34*/])->f_27;
				uVar38 = (uParam0[iVar40 /*34*/])->f_28;
				uVar39 = (uParam0[iVar40 /*34*/])->f_29;
			}
			MISC::COPY_SCRIPT_STRUCT(uParam0[iVar40 /*34*/], &Var0, 34);
			if (!bParam1)
			{
				(uParam0[iVar40 /*34*/])->f_23 = uVar34;
				(uParam0[iVar40 /*34*/])->f_25 = uVar35;
				(uParam0[iVar40 /*34*/])->f_26 = uVar36;
				(uParam0[iVar40 /*34*/])->f_27 = uVar37;
				(uParam0[iVar40 /*34*/])->f_28 = uVar38;
				(uParam0[iVar40 /*34*/])->f_29 = uVar39;
			}
			iVar40++;
		}
	}
}

void func_248(bool bParam0, bool bParam1)
{
	struct<14> Var0;

	if (bParam0->f_2 > 0)
	{
		UIFEED::UI_FEED_CLEAR_CHANNEL(12, true, false);
		if (bParam1)
		{
			func_455(bParam0);
			func_456();
		}
		func_457(bParam0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_6);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(bParam0->f_5);
		HUD::_0xF1E6979C0B779985(&(bParam0->f_4));
		bParam0->f_9 = 0;
		func_458(0);
		func_459(0);
		UIFEED::UI_FEED_CLEAR_CHANNEL(2, true, false);
		Var0.f_11 = -1;
		Var0.f_12 = -1;
		Var0.f_13 = -1;
		MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 15);
	}
}

int func_249(bool bParam0)
{
	if (!func_460(-251222f, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_250(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_461(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_462();
		Global_1900412.f_9 = func_463(Global_1893611.f_2);
		Global_1900412.f_11 = func_464(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_465(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_465(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_465(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

int func_251()
{
	if (func_33(1))
	{
		if (func_33(8192))
		{
			return 2;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_252(int iParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1.f_1 = -1;
	if (!bParam1)
	{
		func_466(Local_2028.f_2, iParam0 != 1, &Var1);
	}
	if (iParam0 == 1 && (func_467(iVar0, 1) || func_467(iVar0, 32)))
	{
		func_468(4);
		func_468(8);
	}
	if (!bParam1)
	{
		func_126(2);
	}
	if (Local_2028.f_634 >= 32 || Local_2028.f_634 < 0)
	{
		return;
	}
	func_39(&(Local_363[Local_2028.f_634 /*52*/]), 1.504633E-36f);
}

void func_253(bool bParam0)
{
	func_469(Local_2028.f_1, bParam0);
}

void func_254(bool bParam0, bool bParam1)
{
	func_470(Local_2028.f_1, bParam1, bParam0);
}

void func_255(bool bParam0)
{
	func_471(Local_2028.f_1, bParam0);
}

void func_256(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
	{
		return;
	}
	if (bParam4 <= 0)
	{
	}
	else if (bParam3 >= bParam4)
	{
		bVar6 = true;
		bVar4 = true;
		bVar5 = true;
	}
	else
	{
		bVar6 = false;
		bVar4 = bParam3 >= true;
		fVar3 = (BUILTIN::TO_FLOAT(bParam3) / BUILTIN::TO_FLOAT(bParam4));
		bVar5 = fVar3 >= 1056964608;
	}
	bVar7 = func_478(func_427(iVar10)) == 9;
	if (bVar5)
	{
		switch (iParam6)
		{
			case 0:
			case 2:
				iVar9 = 0;
				break;
			case 1:
				iVar9 = 1;
				break;
		}
	}
	else if (bVar4)
	{
		iVar9 = 1;
	}
	else
	{
		iVar9 = 2;
	}
	iVar12 = func_479(iVar0);
	iVar13 = func_106(Param0);
	iVar10 = func_480(iVar1);
	iVar11 = func_481(iVar0);
	if (func_482())
	{
		func_483(iVar12, iVar13);
		func_484(iVar12, iVar10);
		if (func_481(iVar0) != -1.753214E+27f)
		{
			func_485(iVar12, iVar9);
		}
		func_486(iVar12, bParam2, bVar4);
		func_487(iVar12, bParam2, bVar6);
		func_488(iVar10, bParam2, bVar4, Param0, iParam5, iParam6 == 3, bParam7);
		if (bVar7)
		{
			func_489(iVar12, bVar6);
		}
		if (!bParam2)
		{
			if (bVar4)
			{
				func_490(iVar2, iVar0, 1.86278E+17f, Param0, 0);
			}
			else
			{
				func_490(iVar2, iVar0, -5.574308E+22f, Param0, 0);
			}
		}
		func_491(bVar4);
	}
	bVar8 = func_492(iVar10, 1);
	func_493(iVar11, bParam2, bVar4, bVar8);
	func_494(Param0, bVar4);
	func_495(1);
	func_495(0);
	func_496(0);
	func_497(0);
	func_221(4);
}

bool func_257(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return func_113(Local_363[iParam1 /*52*/].f_41.f_1, iParam0);
}

void func_258()
{
	float fVar0;

	if (!func_257(4096, 255))
	{
		return;
	}
	fVar0 = -3.724553E-13f;
	PED::_REMOVE_MOTION_TYPE_ASSET(fVar0, Global_33);
	func_498(4096);
}

void func_259(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_292(&Local_2028, &Var10) || !func_312(&Var10, 5.673219E-19f, iParam0, 0))
	{
		return;
	}
	iVar15 = func_499(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -7.593019E+34f, iVar17, 0))
		{
			return;
		}
		iVar20 = func_500(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_312(&Var5, 2.873931E-05f, iVar16, 0) || !func_299(Var5, 0.0001444695f, &iVar18, 0)) || !func_176(Var5, -3.564253E+19f, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_501(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iVar22, 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_260()
{
	if (!func_257(8, 255))
	{
		return;
	}
	NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
	NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(false);
	if (NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, func_502(), true);
	}
	func_498(8);
}

void func_261(int iParam0)
{
	func_122(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_1), iParam0);
}

bool func_262(struct<2> Param0, bool bParam2)
{
	if (!func_28(Param0))
	{
		return false;
	}
	func_503(bParam2);
	switch (Param0)
	{
		case 2:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573[Param0.f_1 /*3*/]), 3);
			return true;
		case 3:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_602[Param0.f_1 /*3*/]), 3);
			return true;
		case 4:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_2104[Param0.f_1 /*3*/]), 3);
			return true;
		case 5:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12606[Param0.f_1 /*3*/]), 3);
			return true;
		case 6:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_12908[Param0.f_1 /*3*/]), 3);
			return true;
		case 7:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_15910[Param0.f_1 /*3*/]), 3);
			return true;
		case 8:
			MISC::COPY_SCRIPT_STRUCT(bParam2, &(Global_1072759.f_573.f_16512[Param0.f_1 /*3*/]), 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_263(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_427(iParam0);
	if (iVar0 == -1)
	{
	}
	iVar1 = func_504(iVar0);
	switch (iVar1)
	{
		case 2:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

var func_264(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_263(iParam0))
	{
		return uVar0;
	}
	iVar1 = func_427(iParam0);
	iVar2 = func_504(iVar1);
	switch (iVar2)
	{
		case 2:
			return func_505(2);
		case 1:
			return func_505(3);
		default:
			break;
	}
	return uVar0;
}

int func_265()
{
	return PED::GET_PED_RELATIONSHIP_GROUP_HASH(PLAYER::PLAYER_PED_ID());
}

void func_266(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam2 == 0)
	{
		return;
	}
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	if (bParam3)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_267(int iParam0)
{
	return iParam0;
}

void func_268(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_21() != 0)
	{
		return;
	}
	if (func_506())
	{
		return;
	}
	if (PED::_IS_ANIMAL_CONTROLLED_BY_A_PLAYER(PLAYER::PLAYER_PED_ID()))
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (func_507(iParam0, 1) < 0)
	{
		return;
	}
	if (func_507(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_507(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_507(iParam0, 1) /*4*/].f_2++;
	if (!bParam2)
	{
		return;
	}
	if (Global_1295619.f_11 != Global_1295619)
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = iParam0;
	Var0.f_6 = bParam1;
	iVar8 = 0;
	iVar8 = 0;
	while (iVar8 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar8]))
		{
		}
		else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar8]))
		{
		}
		else if (Global_1295619.f_149[iVar8] == Global_1295619.f_5)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar7, Global_1295619.f_149[iVar8]);
		}
		iVar8++;
	}
	func_508(&Var0, uVar7);
}

char* func_269()
{
	return "supply_delivered";
}

char* func_270()
{
	return "HUD_MP_FREE_MODE";
}

bool func_271(int iParam0, int iParam1)
{
	return func_113(Local_2028.f_45[iParam0 /*6*/].f_1, iParam1);
}

void func_272(int iParam0, float fParam1)
{
	func_122(&(Local_2028.f_45[iParam0 /*6*/].f_1), fParam1);
}

void func_273(int iParam0, int iParam1)
{
	func_122(&(Local_2028.f_166[iParam0]), iParam1);
}

void func_274(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_16[iParam0 /*12*/].f_4), iParam2);
}

int func_275(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (iParam0 == func_509(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_276(int iParam0, int iParam1)
{
	return (Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_277(int iParam0)
{
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 = (Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_54.f_1 || iParam0);
}

void func_278(int iParam0, bool bParam1)
{
	MISC::_SET_BIT_FLAG(&(Local_2028.f_540), iParam0);
	if (bParam1)
	{
		MISC::_SET_BIT_FLAG(&(Local_2028.f_540.f_4), iParam0);
	}
}

void func_279(int iParam0, bool bParam1)
{
	MISC::_SET_BIT_FLAG(&(Local_2028.f_540.f_2), iParam0);
	if (bParam1)
	{
		MISC::_SET_BIT_FLAG(&(Local_2028.f_540.f_6), iParam0);
	}
}

void func_280(char* sParam0, int* iParam1)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	StringConCat(&cVar0, func_510(Local_2028), 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, iParam1);
}

var func_281(int iParam0, bool bParam1)
{
	struct<2> Var0;
	float fVar2;
	int iVar3;
	struct<2> Var4;

	Var4.f_1 = -1;
	iVar3 = func_427(iParam0);
	if (bParam1)
	{
		fVar2 = 1.606832E+27f;
	}
	else
	{
		fVar2 = 1.039154E+16f;
	}
	if (!func_511(iVar3, fVar2, &Var4, &Var0))
	{
		return -1;
	}
	return func_512(Var0, -1);
}

int func_282(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -3.564253E+19f;
		case 1:
			return 1.120494E+22f;
		case 2:
			return 7.02692E+09f;
		case 3:
			return 3.079143E+09f;
		case 4:
			return 5.908321E+30f;
		case 5:
			return -3.804531E-25f;
		case 6:
			return 4.831923E+29f;
		case 7:
			return -1.513456E-21f;
		case 8:
			return 6.175012E+16f;
		case 9:
			return 2.119798E+09f;
		case 10:
			return 1.845172E+09f;
		case 11:
			return -6.484526E-18f;
		case 12:
			return 3.660515E+28f;
		case 13:
			return 8.912961E+34f;
		case 14:
			return -5.225765E-28f;
		case 15:
			return -4.763997E-38f;
		case 16:
			return 7.93606E-16f;
		case 17:
			return 1.517024E+26f;
		case 18:
			return -6.453116E-38f;
		case 19:
			return 5.126199E+12f;
		case 20:
			return 49.68434f;
		case 21:
			return -6.692242E+07f;
		case 22:
			return -3.801179E+11f;
		case 23:
			return -8.759463E-17f;
		case 24:
			return 3.991602E+14f;
		case 25:
			return 1.308819E-07f;
		case 26:
			return -2.461478E-28f;
		case 27:
			return -1.967338E+17f;
		case 28:
			return -3.349756E-09f;
		case 29:
			return -7.022798E-15f;
		case 30:
			return NaNf;
		case 31:
			return 0.01402862f;
		case 32:
			return 0.0001444695f;
		case 33:
			return 6.537695E-13f;
		case 34:
			return -2.369356E+19f;
		case 35:
			return 1185464f;
		case 36:
			return -1.415774E+38f;
		case 37:
			return 5.821242E-12f;
		case 38:
			return -4.276434E+20f;
		case 39:
			return 845.8469f;
		case 40:
			return -7.529998E+26f;
		case 41:
			return 2.730112E-24f;
		case 42:
			return 3.057722E+10f;
		case 43:
			return -2.106759E+27f;
		case 44:
			return 5300047f;
		case 45:
			return 1.145865E-17f;
		case 46:
			return -2.679618E-09f;
		case 47:
			return 7.569863E+35f;
		case 48:
			return -4.014181E+34f;
		case 49:
			return 1.311565E-13f;
		case 50:
			return -8.232847E-29f;
		case 51:
			return -3467277f;
		case 52:
			return -8.421554E+25f;
		case 53:
			return -1.058804E-18f;
		case 54:
			return 3.615049E-32f;
		case 55:
			return 1.315272E-12f;
		case 56:
			return -1.616039E-37f;
		case 57:
			return 6.890034E+20f;
		case 58:
			return -7.513065E-38f;
		case 59:
			return 9.429216E+18f;
		case 60:
			return 2.713495E-37f;
		case 61:
			return 7.107604E-18f;
		case 62:
			return -6.089035E-10f;
		case 63:
			return -7.680243E+10f;
		case 64:
			return 2.379664E-35f;
		case 65:
			return -9.730181E-22f;
		case 66:
			return 3160159f;
		case 67:
			return -5.583206E+12f;
		case 68:
			return -3.576558E+37f;
		case 69:
			return -6.039011E+29f;
		case 70:
			return -4.054763E-14f;
		case 71:
			return 5.466562E-36f;
		case 72:
			return -1.336337E-18f;
		case 73:
			return 0.004503306f;
		case 74:
			return -1.770405E+07f;
		case 75:
			return 1.553555E-06f;
		case 76:
			return -6.448304E+13f;
		case 77:
			return -2.821826E-12f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_283(int iParam0)
{
	switch (iParam0)
	{
		case -537439784:
			return ":type";
		case 1679284980:
			return ":drive_to_coords";
		case 1339124518:
			return ":model";
		case 1323038251:
			return ":mounted";
		case 1329039358:
			return ":spawn_pos";
		case 1922377121:
			return ":spawn_heading";
		case 1891838186:
			return ":spawn_offset";
		case -1662733059:
			return ":spawn_seat";
		case 1325183772:
			return ":weapon";
		case 1532715368:
			return ":vehicle_id";
		case -1762951883:
			return ":role";
		case -1561379682:
			return ":mission_time";
		case 1860996644:
			return ":health";
		case 2039042927:
			return ":flee_chance";
		case -1843028879:
			return ":allow_use_no_wagon_nodes";
		case -2122207177:
			return ":has_money_bag";
		case 644136394:
			return ":position";
		case 1794832507:
			return ":scale";
		case -2119193689:
			return ":rotation";
		case 1419063592:
			return ":secondary_dropoff";
		case 1111932099:
			return ":no_z_probe";
		case -864073234:
			return ":box_volume";
		case -760151658:
			return ":dont_acknowledge_players";
		case -1530266946:
			return ":scenario";
		case 1471513692:
			return ":heading";
		case 873236619:
			return ":is_propset";
		case -1852046395:
			return ":end_position";
		case -600916972:
			return ":end_rotation";
		case -1318702711:
			return ":shot_duration_ms";
		case -1476590111:
			return ":fade_time_ms";
		case -1355034:
			return ":effect";
		case 1013307464:
			return ":relative_to_player";
		case 957840570:
			return ":target_index";
		case 725091599:
			return ":delete_after_shot";
		case -542873544:
			return ":fov";
		case 1234220482:
			return ":transition_to_gameplay_cam";
		case -19593823:
			return ":transition_from_gameplay_cam";
		case 751620374:
			return ":id";
		case -507939340:
			return ":min_required_players";
		case 1146320435:
			return ":max_required_players";
		case -333727878:
			return ":delete_turned_in_objectives_after_shot";
		case 408107890:
			return ":exit_instance_at_start_of_shot";
		case 1357107565:
			return ":radius";
		case -321268365:
			return ":enabled";
		case 1252114078:
			return ":min_wave_time";
		case 592666605:
			return ":max_wave_time";
		case -1321720745:
			return ":initial_delay";
		case 2064763470:
			return ":is_law";
		case -118004582:
			return ":mount_model";
		case 705932105:
			return ":weight";
		case -1865369028:
			return ":enable_law";
		case -900489166:
			return ":remove_default_weapons";
		case -359968085:
			return ":can_have_treasure_map_loot";
		case -1583595398:
			return ":chance_of_capitale";
		case 188462142:
			return ":accuracy";
		case 733551533:
			return ":primary_dropoff_name";
		case -2107902278:
			return ":secondary_dropoff_name";
		case 1645569887:
			return ":placement_type";
		case -2117302676:
			return ":hitch_pos";
		case 1594022734:
			return ":mission_is_stationary";
		case 45657025:
			return ":weapon_out";
		case 587406518:
			return ":dont_spawn_relative";
		case -1339596857:
			return ":outfit";
		case 100469918:
			return ":outfit_index";
		case -779153855:
			return ":loco_motion_type";
		case -1668085295:
			return ":break_wheel_index";
		case 1245766010:
			return ":primary_dropoff_is_near_mission_giver";
		case -727548384:
			return ":cinematic_location_position_offset";
		case -36224614:
			return ":cinematic_location_rotation_offset";
		case -252450326:
			return ":cinematic_location_focus_override";
		case -1456038853:
			return ":cinematic_location_camera_name";
		case 82347414:
			return ":scenario_pos";
		case -1580911258:
			return ":scenario_heading";
		case 999526519:
			return ":override_transition_cam";
		case -880340422:
			return ":avoidance_radius";
		case 902857663:
			return ":law_avoidance_radius";
		case -697657725:
			return ":has_discoverable_name";
		case -1404661375:
			return ":crime_config";
		default:
			break;
	}
	return "";
}

int func_284(var uParam0, int iParam1, char* sParam2)
{
	if (!DATAFILE::_PARSEDDATA_REGISTER_QUERY(*uParam0, iParam1, sParam2))
	{
		return 0;
	}
	return 1;
}

int func_285(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 11.45356f;
		case 1:
			return 9.933422E+30f;
		case 2:
			return 5.901872E-33f;
		case 3:
			return 7.567511E-17f;
		case 4:
			return -5.876624E-27f;
		case 5:
			return -3.598827E+10f;
		case 6:
			return 1.418354E+28f;
		case 7:
			return -1440849f;
		case 8:
			return -3.869369E-29f;
		case 9:
			return -1.198346E+30f;
		case 10:
			return -6.185879E-08f;
		case 11:
			return 9.863127E+35f;
		case 12:
			return 1.659969E+37f;
		case 13:
			return 2.90373E+08f;
		case 14:
			return 5.673219E-19f;
		case 15:
			return -5.630236E-31f;
		case 16:
			return -7.593019E+34f;
		case 17:
			return -7.847206E+18f;
		case 18:
			return -1.283549E-13f;
		case 19:
			return 2.873931E-05f;
		case 20:
			return 1.204317E-18f;
		case 21:
			return 5.986918E+07f;
		case 22:
			return 6.594195E-24f;
		case 23:
			return -2.953709E-36f;
		case 24:
			return -7.553798E+15f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

char* func_286(int iParam0)
{
	switch (iParam0)
	{
		case 1094140359:
			return "data";
		case 1929036093:
			return "activity/locations/location(id=%x)";
		case 167061367:
			return "activity/locations/location(%i)";
		case 615415475:
			return "activity/locations";
		case -1813459955:
			return "variations/variation(id=%x)";
		case -788131562:
			return "peds/ped(%i)";
		case 1849119077:
			return "peds";
		case -911220092:
			return "vehicles/vehicle(%i)";
		case -1874578615:
			return "vehicles";
		case -244186873:
			return "dropoff_volumes";
		case -1283139781:
			return "dropoff_volumes/volume(%i)";
		case 2067657977:
			return "props";
		case 2101858238:
			return "props/prop(%i)";
		case 1300919788:
			return "cutscenes";
		case 556233122:
			return "cutscenes/cutscene(id=%x)";
		case -110495140:
			return "shot(%i)";
		case -556151360:
			return "camera";
		case -1441758265:
			return "actors";
		case 938546485:
			return "actors/actor(%i)";
		case 565295571:
			return "veg_modifiers/veg_modifier(%i)";
		case 1281647104:
			return "veg_modifiers";
		case -1925794261:
			return "cutscenes/cutscene(%i)";
		case 419371455:
			return "chaser_waves";
		case -2072295915:
			return "weapons";
		case -640241378:
			return "weapons/weapon(%i)";
		default:
			break;
	}
	return "";
}

int func_287(var uParam0)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 600000;
	if (func_292(uParam0, &Var0))
	{
		func_299(Var0, -6.484526E-18f, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_288(var uParam0)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_292(uParam0, &Var0))
	{
		func_313(Var0, 1.120494E+22f, &vVar5, 0);
	}
	return vVar5;
}

int func_289(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_513(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 3)
	{
		return 3;
	}
	return iVar5;
}

int func_290(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_514(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 20)
	{
		return 20;
	}
	return iVar5;
}

float func_291(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_292(&Local_2028, &Var0) && func_176(Var0, -2.821826E-12f, &uVar5, 0))
	{
		return uVar5;
	}
	return fParam0;
}

bool func_292(var uParam0, bool bParam1)
{
	*bParam1 = uParam0->f_4;
	bParam1->f_2 = 9.933422E+30f;
	bParam1->f_3 = uParam0->f_4.f_1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
}

bool func_293()
{
	struct<5> Var0;
	bool bVar5;

	if (func_292(&Local_2028, &Var0) && func_177(Var0, -8.232847E-29f, &bVar5, 0))
	{
		return bVar5;
	}
	return true;
}

bool func_294()
{
	int iVar0;
	struct<5> Var1;
	bool bVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_177(Var1, -2.106759E+27f, &bVar6, 0))
	{
		return iVar0;
	}
	return bVar6;
}

bool func_295()
{
	struct<5> Var0;
	bool bVar5;

	if (!func_292(&Local_2028, &Var0))
	{
		return false;
	}
	if (!func_177(Var0, 3160159f, &bVar5, 0))
	{
		return false;
	}
	return bVar5;
}

Vector3 func_296(var uParam0, var uParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_172(uParam0, &Var0, uParam1))
	{
		func_313(Var0, 3.079143E+09f, &vVar5, 0);
	}
	return vVar5;
}

bool func_297(var uParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (func_172(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -5.225765E-28f, &bVar5, 0);
	}
	return bVar5;
}

bool func_298(var uParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (func_172(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 49.68434f, &bVar5, 0);
	}
	return bVar5;
}

bool func_299(vector3 vParam0, int iParam3, var uParam4, float fParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_300(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, -3.804531E-25f, &iVar5, 0);
	}
	return iVar5;
}

Vector3 func_301(var uParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;

	vVar5 = { 0f, 0f, 0f };
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_313(Var0, 4.831923E+29f, &vVar5, 0);
	}
	return vVar5;
}

int func_302(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_299(Var0, 6.175012E+16f, &iVar5, 0);
	}
	if (iVar5 >= 3)
	{
		iVar5 = 2;
	}
	else if (iVar5 < 0)
	{
		iVar5 = 0;
	}
	return iVar5;
}

bool func_303(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1) && func_176(Var0, -1.513456E-21f, &uVar5, 0))
	{
		return true;
	}
	return false;
}

bool func_304(int iParam0, float fParam1, int iParam2)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam2;
	if (!func_141(&Local_2028, &Var0, iParam0) || !func_177(Var0, fParam1, &bVar5, 0))
	{
		return iParam2;
	}
	return bVar5;
}

bool func_305(var uParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = false;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -4.763997E-38f, &bVar5, 0);
	}
	return bVar5;
}

void func_306(int iParam0, float fParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	bool bVar5;

	bVar5 = iParam3;
	if (func_141(&Local_2028, &Var0, iParam0))
	{
		func_177(Var0, fParam1, &bVar5, 0);
	}
	if (bVar5)
	{
		func_122(&(Local_2028.f_45[iParam0 /*6*/].f_1), iParam2);
	}
}

int func_307(var uParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_515(uParam0, &Var0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	if (iVar5 > 4)
	{
		return 4;
	}
	return iVar5;
}

int func_308(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	bool bVar14;
	int iVar15;

	if (func_309(uParam0, &Var0, iParam1) && func_313(Var0, 7.93606E-16f, &vVar5, 1))
	{
		if (!func_313(Var0, 1.517024E+26f, &vVar8, 0))
		{
			vVar8.x = 1091567616; /* Float: 9f */
			vVar8.f_1 = 1091567616; /* Float: 9f */
			vVar8.f_2 = 1092616192; /* Float: 10f */
		}
		func_313(Var0, -6.453116E-38f, &vVar11, 0);
		func_177(Var0, 5.126199E+12f, iParam2, 0);
		func_177(Var0, -6.692242E+07f, &bVar14, 0);
		if (bVar14)
		{
			iVar15 = VOLUME::CREATE_VOLUME_BOX(vVar5, vVar11, vVar8);
		}
		else
		{
			iVar15 = VOLUME::CREATE_VOLUME_CYLINDER(vVar5, vVar11, vVar8);
		}
	}
	return iVar15;
}

bool func_309(var uParam0, bool bParam1, int iParam2)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = -6.185879E-08f;
		bParam1->f_3 = iParam2;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

bool func_310(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

float func_311(var uParam0)
{
	switch (uParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
		case joaat("COACH_HOLDUP_KIDNAP"):
			return 2.087847E-24f;
		default:
			break;
	}
	return 3.006576E-21f;
}

bool func_312(bool bParam0, float fParam1, int iParam2, int iParam3)
{
	bParam0->f_2 = fParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_313(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

void func_314(var uParam0, int iParam1)
{
	*uParam0++;
	if (*uParam0 >= iParam1)
	{
		*uParam0 = 0;
	}
}

void func_315(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_29(Param0, func_516()))
	{
		return;
	}
	iVar0 = func_517(iVar1);
	if (!func_518(iVar0))
	{
		return;
	}
	func_519(iVar0);
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (func_520(1) && func_276(iVar0, 1))
		{
			func_521();
		}
		if (func_520(0) && NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
		{
			func_522();
		}
	}
}

bool func_316(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	if (!func_123(iVar0, 0, 1))
	{
		return false;
	}
	if (!func_41(&(Local_363[iVar0 /*52*/]), 32) && !func_41(&(Local_363[iVar0 /*52*/]), 64))
	{
		return false;
	}
	return true;
}

bool func_317(int iParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		uVar0 = (uVar0 || Local_2028.f_45[iVar1 /*6*/].f_1);
		iVar1++;
	}
	return func_113(uVar0, iParam0);
}

bool func_318(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar1 /*4*/]))
		{
		}
		else
		{
			iVar0 = NETWORK::NET_TO_VEH(uParam0->f_3[iVar1 /*4*/]);
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
			}
			else if (func_523(iVar0, PLAYER::PLAYER_PED_ID(), 1, 1) > 1117782016)
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_319(var uParam0, int iParam1)
{
	func_436(&(uParam0->f_1), iParam1);
}

void func_320(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iVar0 == Local_2028.f_631)
	{
		if (!func_524(iVar0, &fVar1, 1))
		{
			Local_2028.f_631 = 255;
		}
		Local_2028.f_632 = fVar1;
		return;
	}
	if (!func_524(iVar0, &fVar1, 1))
	{
		return;
	}
	if (Local_2028.f_631 != 255 && Local_2028.f_632 < fVar1)
	{
		return;
	}
	Local_2028.f_631 = iVar0;
	Local_2028.f_632 = fVar1;
}

void func_321()
{
	if (func_33(1) && func_526(func_525(&Local_16, &Local_2028), Local_2028.f_10.f_6))
	{
		func_527(Local_2028.f_2);
	}
	if (!func_33(1048576))
	{
		return;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		func_73();
		func_74();
		func_75();
		return;
	}
	func_528();
	if (func_529(255))
	{
		func_530();
	}
	else
	{
		func_73();
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619) && func_531(VOLUME::GET_VOLUME_COORDS(Local_2028.f_619), 1106247680 /* Float: 30f */, 1))
	{
		func_532();
	}
	else
	{
		func_74();
	}
}

void func_322()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!func_55(&Local_16, 1.084202E-19f) || func_55(&Local_16, 524288))
	{
		return;
	}
	if (func_33(3.85186E-34f))
	{
		if (((func_33(1) && func_227(2)) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2097152)) && func_209(Local_2028.f_633) > 8000)
		{
			func_103();
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 64);
			func_319(&(Local_363[Local_2028.f_634 /*52*/]), 32);
			func_213(1);
			func_213(8192);
			func_43(&Local_2028, &Local_363);
		}
		return;
	}
	bVar0 = func_33(1);
	bVar1 = true;
	iVar4 = PLAYER::PLAYER_ID();
	if (Local_2028.f_10 == -1.484548E+24f)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (((!func_202(iVar2, &Local_16, 4096) || !func_202(iVar2, &Local_16, 128)) || func_202(iVar2, &Local_16, 16)) || func_202(iVar2, &Local_16, 2))
			{
			}
			else if (func_80(iVar2, 16))
			{
				if (func_80(iVar2, 32))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = Local_16.f_257[iVar2 /*5*/].f_3;
				if (bVar0)
				{
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || GANG::NETWORK_IS_IN_SAME_GANG(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_273(iVar2, 32);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_273(iVar2, 16);
			}
			iVar2++;
		}
	}
	else if (Local_2028.f_10 == -1.398992E+38f)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if (Local_16.f_16[iVar2 /*12*/].f_2 != 13.22463f)
			{
			}
			else if (!func_201(iVar2, &Local_16, 1.504633E-36f) || func_201(iVar2, &Local_16, 32))
			{
			}
			else if (func_271(iVar2, 8388608))
			{
				if (func_271(iVar2, 2.350989E-38f))
				{
					bVar1 = false;
				}
			}
			else
			{
				bVar5 = false;
				iVar3 = Local_16.f_16[iVar2 /*12*/].f_7;
				if (bVar0)
				{
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
					{
						if (iVar3 == iVar4 || GANG::NETWORK_IS_IN_SAME_GANG(iVar4, iVar3))
						{
							bVar5 = true;
							bVar1 = false;
						}
					}
				}
				if (bVar5)
				{
					func_272(iVar2, 2.350989E-38f);
				}
				else
				{
					func_129(iVar2, 0);
				}
				func_272(iVar2, 8388608);
			}
			iVar2++;
		}
	}
	if (bVar1)
	{
		func_126(3.85186E-34f);
		Local_2028.f_633 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_323()
{
	float fVar0;

	if (func_533(&fVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(PED::GET_MOUNT(Global_33), fVar0);
	}
}

void func_324()
{
	int iVar0;
	int iVar1;

	if ((func_33(1) && func_534()) && func_55(&Local_16, 2.524355E-29f))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (GANG::_NETWORK_IS_IN_MY_GANG(iVar1))
			{
			}
			else
			{
				func_535(iVar1);
			}
			iVar0++;
		}
	}
	else if ((!func_33(1) && func_55(&Local_16, 2.524355E-29f)) && func_536(1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_2028.f_618), iVar0))
			{
			}
			else
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
				}
				else if (GANG::_NETWORK_IS_IN_MY_GANG(iVar1))
				{
				}
				else
				{
					func_535(iVar1);
				}
			}
			iVar0++;
		}
	}
}

bool func_325()
{
	if (func_537(255) && !func_538(255))
	{
		return false;
	}
	return true;
}

bool func_326()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !GANG::NETWORK_IS_IN_SAME_GANG(iVar0, iVar3))
		{
		}
		else
		{
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
			{
				return false;
			}
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!func_41(&(Local_363[iVar2 /*52*/]), 2.350989E-38f))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_327(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return false;
	}
	if (!func_539())
	{
		return false;
	}
	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar1) && !PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1))
	{
		return false;
	}
	if (!WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar2, false, 0, false) || !func_236(iVar2))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (func_523(iVar1, PLAYER::PLAYER_PED_ID(), 1, 0) > 1106247680)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar1))
	{
		iVar4 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
		iVar5 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iVar1));
		iVar6 = 0;
		while (iVar6 < iVar5)
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar4, -1);
			if (ENTITY::IS_ENTITY_DEAD(iVar3))
			{
			}
		else
		{
			}
			else
			{
				iVar6++;
			}
		}
	}
	else if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return false;
	}
	else
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar3))
	{
		return false;
	}
	iVar7 = NETWORK::PED_TO_NET(iVar3);
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/] != iVar7)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			*uParam2 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_328(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHASER"):
		case joaat("DROPOFF_GUARD"):
			return false;
		default:
			break;
	}
	return true;
}

void func_329(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 32);
			break;
		case 2:
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 64);
			func_126(8192);
			func_115(&(Local_363[Local_2028.f_634 /*52*/]), &Local_2028);
			if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				func_541(7, PLAYER::PLAYER_ID(), 0, func_540(0, 8));
			}
			break;
	}
	Local_363[Local_2028.f_634 /*52*/].f_48 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_542(Local_2028.f_1);
	func_543(Local_2028.f_1, 1, func_293(), 0);
	func_544(6);
	func_126(1);
	func_43(&Local_2028, &Local_363);
	func_460(-5.953573E-07f, 0);
}

void func_330()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	vector3 vVar8;

	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 1048576))
	{
		func_545();
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 128))
	{
		return;
	}
	if (Local_363[Local_2028.f_634 /*52*/].f_46 == -1)
	{
		func_546(0);
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((((((PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) || PED::IS_PED_RAGDOLL(iVar0)) || TASK::IS_PED_GETTING_UP(iVar0)) || PED::GET_PED_IS_BEING_GRAPPLED(iVar0)) || PED::GET_PED_IS_GRAPPLING(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		func_546(0);
		return;
	}
	if (Local_16.f_16[Local_363[Local_2028.f_634 /*52*/].f_46 /*12*/].f_3 != 22)
	{
		func_546(0);
		return;
	}
	if (((((!func_437(Local_363[Local_2028.f_634 /*52*/].f_46, &iVar1, 1, 0) || PED::IS_PED_BEING_STUNNED(iVar1, 0)) || PED::GET_PED_IS_BEING_GRAPPLED(iVar1)) || TASK::IS_PED_GETTING_UP(iVar1)) || PED::GET_PED_IS_GRAPPLING(iVar1)) || PED::IS_PED_RAGDOLL(iVar1))
	{
		func_546(0);
		return;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 256))
	{
		return;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 256) && !func_41(&(Local_363[Local_2028.f_634 /*52*/]), 512))
	{
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 256);
		return;
	}
	if (func_201(Local_363[Local_2028.f_634 /*52*/].f_46, &Local_16, 2))
	{
		func_546(0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[Local_363[Local_2028.f_634 /*52*/].f_46 /*12*/].f_5))
	{
		return;
	}
	iVar2 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[Local_363[Local_2028.f_634 /*52*/].f_46 /*12*/].f_5);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar2))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iVar2, false))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_547(), false)))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_548(), false)) && ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_548(), false) != iVar0)
	{
		func_546(0);
		return;
	}
	if ((ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(iVar2, func_548()) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar2, false)) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar2, false))
	{
		func_546(1);
		return;
	}
	if (Local_2028.f_636 == -1)
	{
		Local_2028.f_636 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	Var3 = { func_550(iVar2, func_548(), func_549(0)) };
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true) && !func_551(iVar0, -1.283316E+09f))
	{
		TASK::TASK_LEAVE_ANY_VEHICLE(iVar0, 0, 0);
		func_546(0);
		return;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 1048576))
	{
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 0, false) && func_236(iVar7))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(iVar0, false, false, false, false);
		return;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar7, false, 1, false) && func_236(iVar7))
	{
		WEAPON::_HOLSTER_PED_WEAPONS(iVar0, true, true, true, false);
		return;
	}
	if (Local_2028.f_636 != -1 && NETWORK::GET_TIME_DIFFERENCE(Local_2028.f_636, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 6000)
	{
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 1048576);
		return;
	}
	vVar8 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar2, func_547(), false), 0f, 0.8f, 0f) };
	if (!func_551(iVar0, 2.446422E-13f))
	{
		if (func_552(iVar0, vVar8, 0) > 1045220557)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, vVar8, 1f, 20000, 0.25f, 512, Var3.f_3);
		}
		else
		{
			func_39(&(Local_363[Local_2028.f_634 /*52*/]), 1048576);
		}
	}
	else if (func_552(iVar0, vVar8, 0) < 1045220557)
	{
		func_39(&(Local_363[Local_2028.f_634 /*52*/]), 1048576);
	}
}

bool func_331(int iParam0, vector3 vParam1)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return false;
	}
	return VOLUME::IS_POINT_IN_VOLUME(iParam0, vParam1);
}

bool func_332(int iParam0)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_553(iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_554(iParam0);
		default:
			break;
	}
	return false;
}

void func_333()
{
	Global_1051832.f_3279 = MISC::GET_FRAME_COUNT();
}

bool func_334(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32);
	bVar3 = func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64);
	if (!bVar2 && !bVar3)
	{
		return false;
	}
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_555())
			{
				return false;
			}
			*uParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return false;
			}
			if (func_55(&Local_16, 524288))
			{
				return true;
			}
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608))
			{
				return true;
			}
			if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(*uParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (Local_16.f_257[iVar0 /*5*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar0 /*5*/]))
				{
				}
				else
				{
					if (!func_202(iVar0, &Local_16, 256) && !func_202(iVar0, &Local_16, 512))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_556(1))
			{
				return false;
			}
			*uParam0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PLAYER::PLAYER_PED_ID());
			if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
			{
				return false;
			}
			if (func_55(&Local_16, 524288))
			{
				return true;
			}
			if (!NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(*uParam0))
			{
				return false;
			}
			iVar1 = NETWORK::_0xF260AF6F43953316(*uParam0);
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_16.f_16[iVar0 /*12*/] != iVar1)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]))
				{
				}
				else
				{
					if (!func_201(iVar0, &Local_16, 65536) && !func_201(iVar0, &Local_16, 131072))
					{
						return false;
					}
					return true;
				}
				iVar0++;
			}
			break;
		default:
			return false;
	}
	return false;
}

void func_335(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (func_557(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		PED::DETACH_CARRIABLE_ENTITY(iParam0, false, false);
		return;
	}
	if (func_558(iVar0, -2.350014E+31f))
	{
		return;
	}
	TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iParam0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, 1);
}

bool func_336()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1))
	{
		return false;
	}
	if (func_55(&Local_16, 524288))
	{
		return false;
	}
	if ((func_257(1, 255) && func_257(2, 255)) && !func_257(512, 255))
	{
		return false;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2028.f_626;
	}
	else
	{
		iVar0 = Local_2028.f_625;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || !func_559(Global_33, iVar0, 1, 0))
	{
		return false;
	}
	if (Local_2028.f_10 == -1.398992E+38f)
	{
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if (Local_16.f_16[iVar2 /*12*/].f_2 != 13.22463f)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar2 /*12*/]))
			{
			}
			else if (func_559(NETWORK::NET_TO_PED(Local_16.f_16[iVar2 /*12*/]), iVar0, 1, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar2++;
			}
		}
	}
	else if (Local_2028.f_10 == -1.484548E+24f)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if (!func_202(iVar3, &Local_16, 128))
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar3 /*5*/]))
			{
			}
			else if (ENTITY::IS_ENTITY_IN_VOLUME(NETWORK::NET_TO_OBJ(Local_16.f_257[iVar3 /*5*/]), iVar0, false, 0))
			{
				iVar1 = 1;
			}
			else
			{
				iVar3++;
			}
		}
	}
	return iVar1;
}

void func_337(int iParam0, int iParam1)
{
	func_122(&(Local_2028.f_29[iParam0 /*5*/]), iParam1);
}

bool func_338(int iParam0, var uParam1, int iParam2)
{
	return func_113(uParam1->f_3[iParam0 /*4*/].f_1, iParam2);
}

char* func_339(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_340(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_560(iParam0, uParam1);
	func_561(iParam0);
	if ((iVar0 == -0.6089872f || iVar0 == 0) || func_397(iParam0, 0))
	{
		func_214(iParam0);
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	func_562(iParam0, iVar1);
	func_563(iParam0, iVar1);
	func_564(iParam0, iVar1);
	func_565(iParam0, iVar1);
	func_566(iParam0, iVar1, uParam1, uParam2, fParam3);
	func_567(iParam0, iVar1);
	func_568(iParam0, iVar1);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(func_569(iParam0, uParam1)))
	{
		return;
	}
	func_570(iParam0, uParam1, uParam2, fParam3);
	func_571(iParam0, iVar1);
	switch (iVar0)
	{
		case joaat("DRIVER"):
			func_572(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("ESCORT"):
			func_573(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_574(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("PASSENGER_VIP"):
			func_575(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_576(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_577(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("DROPOFF_GUARD"):
			func_578(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("CHASER"):
			func_579(iParam0, uParam1, uParam2, fParam3);
			break;
		case joaat("STATIONARY_ESCORT"):
			func_580(iParam0, uParam1, uParam2, fParam3);
			break;
	}
}

void func_341(int iParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	switch (Local_16.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
			break;
		default:
			return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/]))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_16[iParam0 /*12*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		iVar0 = PED::GET_MOUNT(iVar0);
	}
	if (!ENTITY::IS_ENTITY_WAITING_FOR_WORLD_COLLISION(iVar0))
	{
		return;
	}
	if (!func_581(iParam0, &iVar1))
	{
		return;
	}
	if (func_582(iVar1))
	{
		return;
	}
	vVar2 = { func_583(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_HEADING(iVar1), Local_16.f_16[iParam0 /*12*/].f_8) };
	if (func_552(iVar0, vVar2, 1) < 1097859072)
	{
		ENTITY::_SET_ENTITY_COORDS_AND_HEADING_NO_OFFSET(iVar0, vVar2, ENTITY::GET_ENTITY_HEADING(iVar1), false, true);
	}
}

void func_342(int iParam0)
{
	int iVar0;

	switch (Local_16.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("PASSENGER_VIP"):
			if ((Local_16.f_16[iParam0 /*12*/].f_3 == 17 || Local_16.f_16[iParam0 /*12*/].f_3 == 25) || Local_16.f_16[iParam0 /*12*/].f_3 == 26)
			{
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_16[iParam0 /*12*/]))
			{
				if (Local_16.f_16[iParam0 /*12*/].f_3 == 19)
				{
					func_272(iParam0, 524288);
				}
				return;
			}
			if (!func_437(iParam0, &iVar0, 1, 0))
			{
				return;
			}
			if (Local_16.f_16[iParam0 /*12*/].f_3 == 19)
			{
				if (!func_271(iParam0, 262144) || func_271(iParam0, 524288))
				{
					PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iVar0, func_584());
					func_272(iParam0, 262144);
				}
			}
			else if (func_271(iParam0, 262144) || func_271(iParam0, 524288))
			{
				PED::_CLEAR_PED_DESIRED_LOCO_MOTION_TYPE(iVar0);
				func_438(iParam0, 262144);
			}
			func_438(iParam0, 524288);
			if (Local_16.f_16[iParam0 /*12*/].f_3 == 21 && func_201(iParam0, &Local_16, 4194304))
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1.5f);
			}
			else
			{
				PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 2f);
			}
			break;
	}
}

void func_343(int iParam0)
{
	int iVar0;

	if (Local_16.f_16[iParam0 /*12*/].f_2 != 13.22463f)
	{
		return;
	}
	if ((func_201(iParam0, &Local_16, 32) || func_201(iParam0, &Local_16, 65536)) || func_201(iParam0, &Local_16, 131072))
	{
		if (!func_437(iParam0, &iVar0, 1, 0))
		{
			return;
		}
		func_585(iVar0);
		return;
	}
	if (!func_271(iParam0, 8388608))
	{
		return;
	}
	if (!func_437(iParam0, &iVar0, 1, 0))
	{
		return;
	}
	if (func_271(iParam0, 2.350989E-38f))
	{
		NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(iVar0, false);
		return;
	}
	NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(iVar0, true);
	func_585(iVar0);
}

void func_344(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (!func_202(iParam0, &Local_16, 128))
	{
		return;
	}
	func_586(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iParam0 /*5*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(Local_16.f_257[iParam0 /*5*/]);
	if (func_80(iParam0, 16))
	{
		bVar1 = !func_80(iParam0, 32);
		NETWORK::_SET_ENTITY_GHOSTED_TO_LOCAL_PLAYER(iVar0, bVar1);
	}
	if ((func_202(iParam0, &Local_16, 256) || func_202(iParam0, &Local_16, 512)) || func_202(iParam0, &Local_16, 2))
	{
		bVar2 = true;
	}
	if (func_587(iParam0, bVar2))
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 1);
	}
	else
	{
		TASK::_0xA21AA2F0C2180125(iVar0, 0);
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (func_202(iParam0, &Local_16, 64))
	{
		GRAPHICS::SET_PICKUP_LIGHT(iVar0, false);
	}
	else
	{
		GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
	}
	if (func_202(iParam0, &Local_16, 16))
	{
		OBJECT::DELETE_OBJECT(&iVar0);
		return;
	}
	iVar3 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar0);
	switch (iVar3)
	{
		case 3:
			break;
		default:
			return;
	}
	if (bVar2)
	{
		if ((func_55(&Local_16, 524288) && iParam0 == Local_16.f_328) && (func_55(&Local_16, 2.350989E-38f) || func_55(&Local_16, 9.403955E-38f)))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, true);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 22, false);
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 21, false);
		}
		else
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, false);
		}
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 3, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 11, false);
	}
}

bool func_345()
{
	if (func_55(&Local_16, 524288) || func_55(&Local_16, 1.084202E-19f))
	{
		return false;
	}
	if (func_402(&Local_16) <= 2)
	{
		return false;
	}
	if (!func_55(&Local_16, 2.524355E-29f))
	{
		return false;
	}
	return true;
}

void func_346(float fParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (((iParam3 >= 4 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_257[iParam3 /*5*/])) || func_202(iParam3, uParam2, 2)) || func_202(iParam3, uParam2, 16))
			{
				return;
			}
			fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(uParam2->f_257[iParam3 /*5*/]);
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (iParam3 >= fParam0->f_10.f_8)
			{
				return;
			}
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (!func_201(iVar0, uParam2, 1024))
				{
				}
				else
				{
					if (iVar1 == iParam3)
					{
					}
					else
					{
						iVar1++;
						iVar0++;
					}
					if (((iVar0 >= 20 || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_16[iVar0 /*12*/])) || func_201(iVar0, uParam2, 32)) || uParam2->f_16[iVar0 /*12*/].f_2 == -0.6089872f)
					{
						fParam0->f_561.f_2[iParam3] = 0;
						return;
					}
					fParam0->f_561.f_2[iParam3] = NETWORK::NET_TO_ENT(uParam2->f_16[iVar0 /*12*/]);
				}
			}
			default:
				break;
	}
}

bool func_347(var uParam0, float fParam1)
{
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_1), Global_1295619))
	{
		return false;
	}
	if (fParam1 > 1145569280)
	{
		return true;
	}
	return false;
}

bool func_348(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return ((Global_17418.f_2641.f_2 == 2 || (bParam1 && Global_17418.f_2641.f_2 == 1)) || (bParam2 && Global_17418.f_2641.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1101558[iVar0 /*38*/].f_33 == 2 || (bParam1 && Global_1101558[iVar0 /*38*/].f_33 == 1)) || (bParam2 && Global_1101558[iVar0 /*38*/].f_33 == 3));
}

bool func_349(var uParam0, bool bParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	struct<2> Var1;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (uParam0->f_54 == 3.006576E-21f)
	{
		return false;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_1), Global_1295619))
	{
		return false;
	}
	bVar0 = false;
	Var1 = -1;
	Var1.f_1 = -1;
	iVar3 = 1120403456; /* Float: 100f */
	if ((func_28(Var1) && !func_29(Var1, uParam0->f_52)) && func_588(Var1))
	{
		return false;
	}
	switch (uParam0->f_54)
	{
		case joaat("ATTACK"):
		case joaat("DELIVER"):
			if (!bParam3)
			{
				bVar0 = true;
			}
			if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[uParam0->f_55]) && ENTITY::IS_ENTITY_A_PED(uParam0->f_2[uParam0->f_55])) && PED::_0x3D9F958834AB9C30(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_2[uParam0->f_55])) == Global_33)
			{
				return true;
			}
			if (func_589(uParam0, bVar0, 1, 0, iVar3, uParam2) && func_590(uParam0, PLAYER::PLAYER_PED_ID(), 1145569280 /* Float: 800f */))
			{
				return true;
			}
			break;
		case joaat("DEFEND"):
			bVar0 = true;
			if (func_589(uParam0, bVar0, 0, 1, iVar3, uParam2) && func_590(uParam0, PLAYER::PLAYER_PED_ID(), 1145569280 /* Float: 800f */))
			{
				return true;
			}
			break;
	}
	if (uParam0->f_55 == 11)
	{
		uParam0->f_55 = 0;
	}
	else
	{
		uParam0->f_55++;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_1), uParam0->f_56))
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(uParam0->f_56);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			if (GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), iVar4))
			{
				*bParam1 = 1;
				return true;
			}
			else if (bVar0)
			{
				if (PED::GET_JACK_TARGET(Global_33) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				else if (PED::_GET_PED_GRAPPLER(Global_33) == PLAYER::GET_PLAYER_PED(iVar4))
				{
					bVar5 = true;
				}
				if (bVar5 && func_590(uParam0, PLAYER::PLAYER_PED_ID(), 1145569280 /* Float: 800f */))
				{
					return true;
				}
			}
		}
	}
	if (uParam0->f_56 == 31)
	{
		uParam0->f_56 = 0;
	}
	else
	{
		uParam0->f_56++;
	}
	return false;
}

bool func_350(float fParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
			{
				return false;
			}
			iVar2 = 0;
			while (iVar2 < fParam0->f_10.f_14)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_257[iVar2 /*5*/]))
				{
				}
				else if (func_202(iVar2, uParam2, 1))
				{
				}
				else if (func_202(iVar2, uParam2, 2))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uParam2->f_257[iVar2 /*5*/]), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (func_41(uParam1[Local_2028.f_634 /*52*/], 262144) && Local_16.f_321 > 1)
			{
				return true;
			}
			else if (func_41(uParam1[Local_2028.f_634 /*52*/], 524288))
			{
				return true;
			}
			if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
			{
				return false;
			}
			iVar1 = 0;
			while (iVar1 < fParam0->f_10.f_8)
			{
				if (uParam2->f_16[iVar1 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (func_201(iVar1, uParam2, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_16[iVar1 /*12*/]))
				{
				}
				else if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uParam2->f_16[iVar1 /*12*/]), iVar0))
				{
				}
				else
				{
					return true;
				}
				iVar1++;
			}
			break;
	}
	return false;
}

bool func_351(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (!func_437(iParam0, &iVar0, 0, 1))
			{
				return false;
			}
			*uParam1 = func_267(iVar0);
			return true;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (!func_81(iParam0, &iVar1))
			{
				return false;
			}
			*uParam1 = func_267(iVar1);
			return true;
		default:
			break;
	}
	return false;
}

bool func_352(vector3 vParam0, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_591(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, iParam7, iParam8, iParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_592(&(iParam3->f_1), iParam5, vParam0);
				if (!func_381(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_593(iParam3->f_6));
				}
				TASK::_0x2B8AF29A78024BD3(iParam3->f_1);
			}
			*iParam3 = 3;
			break;
		case 3:
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = TASK::_0x0365000D8BF86531(&(iParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && iParam3->f_2 < 4)
					{
						iParam3->f_2++;
						*iParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					iParam3->f_3 = { TASK::_0x865732725536EE39(&(iParam3->f_1)) };
					*iParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_353(vector3 vParam0, var uParam3)
{
	float fVar0;
	int iVar1;

	fVar0 = BUILTIN::VDIST(Global_34, vParam0);
	if (fVar0 > 1128792064)
	{
		return true;
	}
	if (fVar0 < 1109393408)
	{
		*uParam3 = 1;
		return true;
	}
	if (!CAM::IS_SPHERE_VISIBLE(vParam0, 4f))
	{
		return true;
	}
	if (!func_233(Local_2028.f_548))
	{
		Local_2028.f_548 = GRAPHICS::CREATE_TRACKED_POINT();
		GRAPHICS::SET_TRACKED_POINT_INFO(Local_2028.f_548, vParam0 + Vector(1056964608, 0f, 0f), 3f);
		return false;
	}
	iVar1 = GRAPHICS::_0xDFE332A5DA6FE7C9(Local_2028.f_548);
	if (iVar1 == -1)
	{
		return false;
	}
	*uParam3 = GRAPHICS::IS_TRACKED_POINT_VISIBLE(Local_2028.f_548);
	return true;
}

bool func_354(var uParam0, var uParam1)
{
	bool bVar0;
	float fVar1;
	float fVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	if (!func_33(1))
	{
		return false;
	}
	bVar0 = func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64);
	fVar2 = 1132068864; /* Float: 250f */
	fVar4 = 1132068864; /* Float: 250f */
	fVar6 = 1132068864; /* Float: 250f */
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if (Local_16.f_16[iVar8 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar8 /*12*/]))
				{
				}
				else
				{
					iVar13 = NETWORK::NET_TO_PED(Local_16.f_16[iVar8 /*12*/]);
					fVar1 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iVar13, false, false));
					iVar10 = func_267(iVar13);
					bVar11 = func_201(iVar8, &Local_16, 8);
					bVar12 = func_201(iVar8, &Local_16, 16);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar8++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar9 = 0;
			while (iVar9 < 4)
			{
				if (func_202(iVar9, &Local_16, 2))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar9 /*5*/]))
				{
				}
				else
				{
					iVar14 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar9 /*5*/]);
					fVar1 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iVar14, false, false));
					iVar10 = func_267(iVar14);
					bVar11 = func_202(iVar9, &Local_16, 1);
					bVar12 = func_202(iVar9, &Local_16, 32);
					if ((bVar11 && !bVar0) || (bVar12 && bVar0))
					{
						if (fVar1 < fVar6)
						{
							fVar6 = fVar1;
							iVar7 = iVar10;
						}
					}
					else if ((bVar12 && !bVar0) || (bVar11 && bVar0))
					{
						if (fVar1 < fVar4)
						{
							fVar4 = fVar1;
							iVar5 = iVar10;
						}
					}
					else if (fVar1 < fVar2)
					{
						fVar2 = fVar1;
						iVar3 = iVar10;
					}
				}
				iVar9++;
			}
			break;
		default:
			return false;
	}
	if (fVar2 < 1132068864)
	{
		*uParam0 = iVar3;
		return true;
	}
	if (fVar4 < 1132068864)
	{
		*uParam0 = iVar5;
		*uParam1 = 1;
		return true;
	}
	if (fVar6 < 1132068864)
	{
		*uParam0 = iVar7;
		return true;
	}
	return false;
}

void func_355(bool bParam0)
{
	if (bParam0)
	{
		if (func_33(4))
		{
			return;
		}
		if (func_356(255))
		{
			return;
		}
		func_232(1);
		func_126(4);
	}
	else
	{
		if (!func_33(4))
		{
			return;
		}
		func_232(0);
		func_213(4);
	}
}

bool func_356(int iParam0)
{
	return func_594(49, iParam0);
}

bool func_357(int iParam0)
{
	return func_594(48, iParam0);
}

void func_358(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	if (!func_33(4))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return;
	}
	if (bParam3)
	{
		iVar0 = 1125515264; /* Float: 150f */
		iVar1 = 1128792064; /* Float: 200f */
		iVar2 = 1106247680; /* Float: 30f */
	}
	else if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		iVar0 = 1116471296; /* Float: 70f */
		iVar1 = 1124204544; /* Float: 130f */
		iVar2 = 1103626240; /* Float: 25f */
	}
	else
	{
		iVar0 = 1122369536; /* Float: 115f */
		iVar1 = 1127481344; /* Float: 180f */
		iVar2 = 1103626240; /* Float: 25f */
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam2, false, false) };
	if (INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vVar3))
	{
		func_390(&vVar3, 1128792064 /* Float: 200f */);
	}
	else
	{
		func_390(&vVar3, 7f);
	}
	uParam0->f_17.f_6 = { vVar3 };
	uParam0->f_17 = { iVar1, iVar1, iVar2 };
	uParam0->f_17.f_9 = -2.19652E+23f;
	uParam0->f_6.f_6 = { vVar3 };
	uParam0->f_6 = { iVar0, iVar0, iVar2 };
	uParam0->f_6.f_9 = -2.19652E+23f;
	uParam0->f_4 = iParam2;
	uParam0->f_5 = 3;
	uParam1->f_5 = 1;
	*uParam1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-180f, 180f);
	uParam1->f_6 = { vVar3 + func_595(*uParam1) * Vector(1092616192, 1092616192, 1092616192) };
	func_359(*uParam0, *uParam1, 1, 1, 1);
}

int func_359(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_357(255))
	{
		if ((Param0.f_17.f_9 != -9.406495E-20f && Param0.f_17.f_9 != -2.19652E+23f) && Param0.f_17.f_9 != 4.795139E-15f)
		{
			Param0.f_17.f_9 = -2.19652E+23f;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -9.406495E-20f && Param0.f_6.f_9 != -2.19652E+23f) && Param0.f_6.f_9 != 4.795139E-15f)
			{
				Param0.f_6.f_9 = -2.19652E+23f;
			}
		}
		func_596(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = { Param0 };
		func_597(&(Global_1102813.f_3878));
		Global_1102813.f_3878 = { Param30 };
		Global_1102813.f_3909 = iParam39;
		Global_1102813.f_3910 = iParam40;
		Global_1102813.f_3911 = iParam41;
		func_598(Global_1102813.f_3839, 36);
		func_599(Global_1102813.f_3878, 36);
		func_447(48);
		return 1;
	}
	return 0;
}

int func_360()
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return Local_2028.f_174;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return Local_2028.f_174.f_4;
		default:
			break;
	}
	return 0;
}

bool func_361()
{
	if (func_257(1, 255))
	{
		return false;
	}
	if (func_55(&Local_16, 64))
	{
		return false;
	}
	if (func_33(3.85186E-34f))
	{
		if (func_209(Local_2028.f_633) > 2000)
		{
			return false;
		}
		return true;
	}
	if (func_66(&Local_16, &Local_2028))
	{
		return false;
	}
	if (func_209(Local_16.f_318) > 2000)
	{
		return false;
	}
	return true;
}

int func_362(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Local_2028.f_634;
	}
	return Local_363[iParam0 /*52*/].f_41;
}

void func_363(bool bParam0)
{
	LAW::_SET_BOUNTY_HUNTER_PURSUIT_CLEARED();
	if (bParam0)
	{
		LAW::CLEAR_BOUNTY(PLAYER::PLAYER_ID());
	}
	func_126(9.403955E-38f);
}

bool func_364(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940186.f_12)
	{
		if ((bParam2 || Global_1940186.f_13 > 0) || Global_1940186.f_11 > 0)
		{
			return true;
		}
	}
	else if (bParam1 && !Global_1940186.f_9 == 9.534398E+10f)
	{
		return false;
	}
	if (Global_1940186.f_14 > 0 || (bParam2 && Global_1940186.f_14 > -1))
	{
		return true;
	}
	if (bParam0)
	{
		if (Global_1940186.f_7)
		{
			if (bParam2 || Global_1940186.f_15 > 0)
			{
				return true;
			}
		}
	}
	return false;
}

void func_365(int iParam0, bool bParam1)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (func_367(iParam0))
	{
		return;
	}
	if (func_601(func_600(iParam0), 1, bParam1))
	{
		func_602(iParam0);
	}
}

int func_366(bool bParam0)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_603(bParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_604(bParam0);
		default:
			break;
	}
	return 0;
}

bool func_367(int iParam0)
{
	return func_113(Local_2028.f_9, iParam0);
}

void func_368()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_362(255) == 3)
	{
		return;
	}
	if (Local_16.f_299 == 0)
	{
		if (func_605() == 3)
		{
			func_606(3);
		}
		return;
	}
	iVar0 = Local_16.f_299;
	iVar1 = func_362(255);
	if (func_257(256, 255) && func_257(1, 255))
	{
		func_607(1, 0, 1);
		func_86(0);
		func_87(1);
		func_84(1);
	}
	if ((func_257(1, 255) && !func_257(512, 255)) && iVar1 != 3)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	if (func_608(8))
	{
		func_105(iVar0);
		func_606(3);
		return;
	}
	switch (iVar1)
	{
		case 0:
			func_609(iVar0);
			func_610(iVar0);
			if (func_605() == iVar1)
			{
				return;
			}
			if (Local_2028.f_537 == 0)
			{
				func_606(3);
				return;
			}
			func_606(1);
			break;
		case 1:
			if (func_257(256, 255) && func_257(1, 255))
			{
				func_611();
			}
			if (!func_257(32, 255))
			{
				if (func_612(iVar0, Local_16.f_299.f_2))
				{
					func_260();
				}
				func_261(32);
			}
			func_613(iVar0, Local_16.f_299.f_2);
			if (func_605() == iVar1)
			{
				return;
			}
			if (func_257(1, 255))
			{
				func_614();
				func_615(iVar0, Local_16.f_299.f_2);
				func_616(iVar0, Local_16.f_299.f_2);
				if (!func_257(256, 255))
				{
					AUDIO::_START_AUDIO_SCENESET("default", "RDRO_Scripted_Cutscene_Scenes");
					func_617();
				}
			}
			func_261(256);
			func_618();
			func_606(2);
			break;
		case 2:
			if (!func_257(64, 255))
			{
				iVar2 = func_209(Local_16.f_299.f_3);
				iVar3 = func_619(iVar0, Local_16.f_299.f_2);
				if (func_257(1, 255))
				{
					func_620(iVar0, Local_16.f_299.f_2, iVar3, iVar2);
				}
				if (iVar2 < iVar3)
				{
					return;
				}
			}
			else if (func_257(1, 255))
			{
				func_611();
			}
			func_261(64);
			func_621(iVar0, Local_16.f_299.f_2);
			if (func_605() == iVar1 && !func_608(4))
			{
				return;
			}
			if (Local_16.f_299.f_2 < Local_2028.f_537 && func_605() != 3)
			{
				func_498(32);
				func_498(64);
				func_618();
				func_606(1);
				return;
			}
			func_105(iVar0);
			func_606(3);
			break;
	}
}

bool func_369()
{
	struct<2> Var0;

	if (func_32())
	{
		return true;
	}
	Var0 = { func_622() };
	if (!func_28(Var0))
	{
		return false;
	}
	if (!func_29(Local_2028.f_2, Var0))
	{
		return true;
	}
	return false;
}

void func_370(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_623(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_371(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_624(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_372(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_625(iVar0, uParam0, uParam1, fParam2);
		iVar0++;
	}
}

void func_373(var uParam0, var uParam1, float fParam2)
{
	if (func_626(uParam0, uParam1, fParam2))
	{
		func_627(uParam1, fParam2);
		func_132(131072);
	}
	else
	{
		func_243(&(fParam2->f_202.f_51));
		func_228(131072);
	}
	if (func_227(131072))
	{
		if (func_227(262144))
		{
			func_628(0);
			func_228(262144);
		}
	}
	else if (!func_227(262144))
	{
		func_628(1);
		func_132(262144);
	}
}

void func_374()
{
	int iVar0;

	iVar0 = Local_2028.f_174.f_1;
	if (func_629(iVar0))
	{
		func_451(iVar0, 1);
	}
	else
	{
		func_451(iVar0, 0);
	}
	if (func_630(iVar0))
	{
		func_452(iVar0, 1);
	}
	else
	{
		func_452(iVar0, 0);
	}
}

void func_375()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = func_631(&iVar0, &iVar1);
	func_632(iVar2, iVar0, iVar1);
}

void func_376(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	if (!func_534())
	{
		func_245(fParam2);
		return;
	}
	iVar0 = func_633(uParam0, uParam1, fParam2);
	switch (iVar0)
	{
		case 0:
			func_245(fParam2);
			return;
		case 8:
			if (func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 9;
			}
			break;
		case 1:
			if (func_635())
			{
				iVar0 = 2;
			}
			break;
		case 3:
			if (func_635())
			{
				iVar0 = 4;
			}
			break;
		case 10:
			if (func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 11;
			}
			break;
		case 12:
			if (func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 13;
			}
			break;
		case 18:
			if (!func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 19;
			}
			break;
		case 17:
			if (!func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 16;
			}
			break;
		case 21:
			if (!func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 20;
			}
			break;
		case 24:
			if (func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 25;
			}
			break;
		case 27:
			switch (func_199(&Local_2028))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					func_636(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					func_637(&bVar1, &bVar2, &iVar4, &iVar5);
					break;
			}
			if (func_634(uParam0, fParam2, 1, 0))
			{
				iVar0 = 26;
			}
			else if (bVar2)
			{
				iVar0 = 28;
			}
			if (iVar0 != 28)
			{
				bVar3 = func_638(iVar0, bVar1, iVar4, iVar5);
			}
			break;
		case 22:
			if (func_634(uParam0, fParam2, 1, 1))
			{
				iVar0 = 23;
			}
			break;
		case 14:
			if (func_634(uParam0, fParam2, 1, 1))
			{
				iVar0 = 15;
			}
			break;
		case 31:
			if (func_634(uParam0, fParam2, 1, 1))
			{
				iVar0 = 30;
			}
			break;
	}
	func_639(iVar0, fParam2, bVar3);
}

void func_377()
{
	if (func_640())
	{
		func_641();
		func_132(4);
		return;
	}
	if (func_642())
	{
		func_643();
		func_132(2);
	}
}

void func_378(float fParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;

	if (!func_227(65536))
	{
		fVar1 = func_644(fParam0);
		fVar2 = func_645(fVar1);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_646(&(Local_2028.f_202.f_77), fVar2, iVar0);
			func_647(&(Local_2028.f_202.f_77), fVar1, iVar0);
			iVar0++;
		}
		func_132(65536);
	}
}

void func_379(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if ((func_648(fParam2->f_202.f_61) && func_649(fParam2->f_202.f_61, 1)) && func_650(fParam2->f_202.f_61, 1))
	{
		iVar0 = func_651(uParam0, fParam2);
		if (iVar0 != -1)
		{
			(uParam1[Local_2028.f_634 /*52*/])->f_46 = iVar0;
			func_39(uParam1[Local_2028.f_634 /*52*/], 128);
		}
	}
	iVar1 = func_525(uParam0, fParam2);
	if (iVar1 < 0)
	{
		iVar1 = 0;
	}
	if (func_652(&bVar2))
	{
		if (bVar2)
		{
			func_653(uParam0, uParam1, fParam2);
		}
		func_654(&(Local_2028.f_202.f_62), &(fParam2->f_202.f_77), iVar1, 0, 30000, 0, 2.087847E-24f, 0, 0, 0, 0);
	}
	else
	{
		func_247(&(fParam2->f_202.f_77), 0, 0);
		func_248(&(Local_2028.f_202.f_62), 1);
	}
	if (func_655(&iVar3))
	{
		if (func_648(fParam2->f_202.f_61))
		{
			func_656(fParam2->f_202.f_61, 1, 1, 1);
			func_657(fParam2->f_202.f_61, 1, 1);
			func_658(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
		else
		{
			fParam2->f_202.f_61 = func_660(func_659(), -7.016647E-20f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_658(fParam2->f_202.f_61, iVar3, 0, 0, 0);
		}
	}
	else if (func_648(fParam2->f_202.f_61))
	{
		func_656(fParam2->f_202.f_61, 0, 1, 1);
		func_657(fParam2->f_202.f_61, 0, 1);
	}
	if (!func_33(1))
	{
		return;
	}
	if (func_661())
	{
		return;
	}
	if (func_227(512))
	{
		func_663(func_662(), 0, 0);
		func_228(512);
	}
	if (func_227(1024))
	{
		func_663(func_664(), 0, 0);
		func_228(1024);
	}
	if (func_227(2048))
	{
		func_663(func_665(), 0, 0);
		func_228(2048);
	}
	if (func_227(8192))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2028.f_202.f_52))
		{
			func_663(func_666(), 0, 0);
		}
		Local_2028.f_202.f_52 = 255;
		func_228(8192);
	}
	if (func_227(4096))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2028.f_202.f_52) && Local_2028.f_202.f_52 != PLAYER::PLAYER_ID())
		{
			func_663(func_667(), 0, 0);
		}
		Local_2028.f_202.f_52 = 255;
		func_228(4096);
	}
	if (!func_227(32768) && func_345())
	{
		func_663(func_668(), func_669(), func_670());
		func_132(32768);
	}
	if (func_227(16384))
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_2028.f_202.f_52))
		{
			func_663(func_671(), 0, 0);
		}
		Local_2028.f_202.f_52 = 255;
		func_228(16384);
	}
}

Vector3 func_380(int iParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	if (!func_382(iParam0, &vVar3, uParam1))
	{
		return vVar0;
	}
	vVar3.f_2 = -9.954428E+33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &vVar3);
	return vVar0;
}

bool func_381(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_382(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_110(iParam0, bParam1))
	{
		return false;
	}
	iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(*bParam1, bParam1->f_1);
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		Var2 = { *bParam1 };
		Var2.f_2 = 7.595256f;
		Var2.f_3 = iVar1;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
		{
		}
		else
		{
			Var2.f_2 = 52855.35f;
			Var2.f_3 = uParam2;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
			{
			}
			else
			{
				*bParam1 = { Var2 };
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

var func_383(int iParam0)
{
	struct<2> Var0[7];
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &Var0);
	if (iVar16 == 0)
	{
		return uVar15;
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 <= (iVar16 - 1))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar17 /*2*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar15, iVar18);
		}
		iVar17++;
	}
	return uVar15;
}

void func_384(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 30, &uParam1);
}

void func_385(var uParam0)
{
	if (Global_1051645.f_16[0] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 30, Global_1051645.f_16[0]);
}

bool func_386(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, 1.845172E+09f, &iVar5, 0);
	}
	return iVar5;
}

bool func_387(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	bool bVar2;

	fVar1 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	switch (iParam0)
	{
		case 0:
			fVar0 = 1036831949; /* Float: 0.1f */
			break;
		case 1:
			fVar0 = 1028443341; /* Float: 0.05f */
			break;
		case 2:
			fVar0 = 1028443341; /* Float: 0.05f */
			break;
		case 6:
			fVar0 = 1036831949; /* Float: 0.1f */
			break;
		case 3:
		case 4:
		case 5:
			fVar0 = 1f;
			break;
	}
	bVar2 = fVar1 < fVar0;
	return bVar2;
}

bool func_388(int iParam0)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	vector3 vVar8;
	vector3 vVar11;
	float fVar14;
	bool bVar15;
	int iVar16;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_278[iParam0 /*2*/]))
	{
		return true;
	}
	if (!func_175(&Var0, iParam0))
	{
		return true;
	}
	func_177(Var0, 1.308819E-07f, &bVar15, 0);
	func_313(Var0, 7.93606E-16f, &vVar8, 0);
	func_313(Var0, -6.453116E-38f, &vVar11, 0);
	func_310(Var0, 3.991602E+14f, &fVar14, 0);
	func_176(Var0, 7.02692E+09f, &uVar5, 0);
	if (bVar15)
	{
		iVar7 = uVar5;
	}
	else
	{
		iVar6 = uVar5;
	}
	if (!bVar15)
	{
		if (!STREAMING::IS_MODEL_VALID(iVar6) || iVar6 == 0)
		{
			return true;
		}
	}
	if (bVar15)
	{
		iVar16 = PROPSET::_CREATE_PROP_SET_2(iVar7, vVar8, func_672(iParam0), fVar14, 1200f, true, true);
		if (!PROPSET::DOES_PROP_SET_EXIST(iVar16))
		{
			return true;
		}
		Local_16.f_278[iParam0 /*2*/] = NETWORK::_PROPSET_TO_NET(iVar16);
		func_673(iParam0, 1);
	}
	else
	{
		if (!func_674(&(Local_16.f_278[iParam0 /*2*/]), iVar6, vVar8, 1, 0))
		{
			return false;
		}
		if (fVar14 == 0f && !func_381(vVar11))
		{
			ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_OBJ(Local_16.f_278[iParam0 /*2*/]), vVar11, 2, false);
		}
		else
		{
			ENTITY::SET_ENTITY_HEADING(NETWORK::NET_TO_OBJ(Local_16.f_278[iParam0 /*2*/]), fVar14);
		}
	}
	return true;
}

float func_389(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_172(uParam0, &Var0, iParam1))
	{
		func_310(Var0, 5.908321E+30f, &fVar5, 0);
	}
	return fVar5;
}

int func_390(var uParam0, float fParam1)
{
	vector3 vVar0;
	var uVar3;

	vVar0 = { *uParam0 };
	vVar0.f_2 = (vVar0.z + fParam1);
	if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &uVar3, false))
	{
		uParam0->f_2 = uVar3;
		return 1;
	}
	return 0;
}

bool func_391(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		return false;
	}
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (func_675(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(0.4263186f, vParam2, true, false, true, true));
	}
	else if (func_676(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(-55968.55f, vParam2, true, false, true, true));
	}
	else if (iParam8 != 0 && VEHICLE::_IS_THIS_MODEL_A_DRAFT_VEHICLE(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_DRAFT_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, iParam8, bParam9));
	}
	else
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::CREATE_VEHICLE(iParam1, vParam2, fParam5, true, bParam6, bParam7, bParam9));
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_392(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_3[iParam0 /*4*/].f_1), iParam2);
}

bool func_393(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;

	iVar0 = uParam2->f_45[iParam0 /*6*/];
	iVar1 = func_178(uParam2, iParam0);
	vVar2 = { uParam2->f_45[iParam0 /*6*/].f_2 };
	fVar5 = func_677(&Local_2028, iParam0);
	iVar6 = func_678(&Local_2028, iParam0);
	iVar7 = uParam2->f_45[iParam0 /*6*/].f_5;
	if (func_679())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/]))
		{
			iVar8 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
			PED::DELETE_PED(&iVar8);
		}
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_1))
		{
			iVar8 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/].f_1);
			PED::DELETE_PED(&iVar8);
		}
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar1 = func_179(iVar0);
	}
	if (func_201(iParam0, &Local_16, 2.350989E-38f))
	{
		return true;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar7 /*4*/]))
	{
		return true;
	}
	iVar9 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar7 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar9))
	{
		return true;
	}
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if ((!func_271(iParam0, 1) && !func_271(iParam0, 65536)) && func_680(uParam2->f_45[iParam0 /*6*/]))
	{
		if (func_381(vVar2))
		{
			return true;
		}
		fVar5 = (fVar5 + ENTITY::GET_ENTITY_HEADING(iVar9));
		vVar2 = { func_583(ENTITY::GET_ENTITY_COORDS(iVar9, false, false), fVar5, vVar2) };
		func_390(&vVar2, 7f);
	}
	if (func_271(iParam0, 2) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		if (!func_681(iParam0, &iVar10))
		{
			iVar10 = func_180(iVar0);
		}
		if (iVar10 == 0)
		{
			return true;
		}
		func_682(&(uParam1->f_16[iParam0 /*12*/].f_1), iVar10, vVar2, fVar5, 1, 0, 1, 1, 1);
		return false;
	}
	func_683(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		if (func_271(iParam0, 2))
		{
			if (!func_684(&(uParam1->f_16[iParam0 /*12*/]), uParam1->f_16[iParam0 /*12*/].f_1, iVar1, -1, 1, 1, 1, 0))
			{
				return false;
			}
		}
		else if (func_271(iParam0, 1))
		{
			if (!func_685(&(uParam1->f_16[iParam0 /*12*/]), uParam1->f_3[iVar7 /*4*/], iVar1, iVar6, 1, 1, 1))
			{
				return false;
			}
		}
		else if (!func_682(&(uParam1->f_16[iParam0 /*12*/]), iVar1, vVar2, fVar5, 1, 0, 1, 1, 1))
		{
			return false;
		}
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		NETWORK::PREVENT_NETWORK_ID_MIGRATION(uParam1->f_16[iParam0 /*12*/].f_1);
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION(uParam1->f_16[iParam0 /*12*/]);
	if (!func_686(iParam0))
	{
		return false;
	}
	if (func_271(iParam0, 2) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/].f_1), true);
	}
	else if (!func_271(iParam0, 1) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), true);
	}
	if ((func_271(iParam0, 4) && uParam1->f_322 < 4) && !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[uParam1->f_322 /*5*/]))
	{
		iVar11 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar11) && !NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar11))
		{
			return false;
		}
		if (!func_674(&(uParam1->f_257[uParam1->f_322 /*5*/]), func_183(), ENTITY::GET_ENTITY_COORDS(iVar11, true, false), 1, 0))
		{
			return false;
		}
		iVar12 = NETWORK::NET_TO_OBJ(uParam1->f_257[uParam1->f_322 /*5*/]);
		TASK::TASK_CARRIABLE(iVar12, -8.964639E-39f, iVar11, 0, 0);
		MISC::_0x7FA58CED69405F9A(iVar12, 3);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 12, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 22, true);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar12, 21, true);
		func_417(uParam1->f_322, uParam1, 8);
		Local_16.f_257[uParam1->f_322 /*5*/].f_2 = iVar7;
		func_417(uParam1->f_322, uParam1, 128);
		func_417(uParam1->f_322, uParam1, 64);
		uParam1->f_322++;
	}
	if (iVar0 == 13.22463f)
	{
		func_274(iParam0, uParam1, 1024);
	}
	if (func_271(iParam0, 8))
	{
		func_274(iParam0, uParam1, 2048);
	}
	if (func_687(&Local_2028, iParam0))
	{
		func_274(iParam0, uParam1, 3.85186E-34f);
	}
	func_274(iParam0, &Local_16, 2.350989E-38f);
	return true;
}

void func_394()
{
	Local_2028.f_637 = 0;
}

bool func_395(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	bool bVar14;

	if (bParam3 && !func_688(iParam0, uParam1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar1 = Local_16.f_16[iParam0 /*12*/].f_2 != 1.556252E-24f;
	WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar0, false);
	WEAPON::_0x431240A58484D5D0(iVar0, false);
	WEAPON::_0x45E57FDD531C9477(iVar0, false);
	if (bVar1)
	{
		if (func_689(iParam0, &uVar2))
		{
			PED::_SET_PED_DESIRED_LOCO_MOTION_TYPE(iVar0, func_690(&uVar2));
		}
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 == 13.22463f)
	{
		fVar10 = func_691(&Local_2028, iParam0);
		fVar11 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
		if (fVar10 != 0f && fVar11 <= func_428(fVar10, 0f, 1f))
		{
			func_274(iParam0, uParam1, 256);
		}
	}
	fVar12 = func_692(&Local_2028, iParam0);
	if (fVar12 > 0f)
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, BUILTIN::ROUND(fVar12));
		func_693(iVar0, 1f, 0);
	}
	if (Local_16.f_16[iParam0 /*12*/].f_2 == 1.556252E-24f && func_694(&iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else if (bVar1 && func_695(&Local_2028, iParam0, &iVar13))
	{
		PED::SET_PED_ACCURACY(iVar0, iVar13);
	}
	else
	{
		PED::SET_PED_ACCURACY(iVar0, 20);
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 != 13.22463f)
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 467, true);
	}
	PED::SET_PED_COMBAT_RANGE(iVar0, 3);
	PED::SET_PED_ID_RANGE(iVar0, 160f);
	PED::SET_PED_SEEING_RANGE(iVar0, 200f);
	PED::SET_PED_TO_PLAYER_WEAPON_DAMAGE_MODIFIER(iVar0, 0.48f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 307, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
	if (func_201(iParam0, &Local_16, 32768))
	{
		LAW::_SET_PED_LAW_BEHAVIOUR(iVar0, 7);
		PED::SET_PED_AS_COP(iVar0, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 148, false);
		PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 39, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar0, 1);
		if (Global_1901671.f_170.f_31)
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 127, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 146, true);
		}
	}
	if (func_33(256))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
	}
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("SHOTGUN_RIDER"):
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 65, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("DRIVER"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			break;
		case joaat("PASSENGER_ESCORT"):
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 52, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 53, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 89, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			bVar14 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
			if (!func_236(bVar14) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar14))
			{
				PED::_0x815C0074A1BC0D93(iVar0, 2);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 93, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 96, true);
			}
			break;
		case joaat("MOUNTED_ESCORT"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			break;
		case joaat("CHASER"):
			func_696(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iVar0, false, 1f);
			PED::_0x712B2C2B2471B493(iVar0, 4.71639E-19f);
			TASK::SET_PED_PATH_FOLIAGE_COST_MODIFIER(iVar0, 0f);
			break;
		case joaat("ESCORT"):
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case joaat("STATIONARY_ESCORT"):
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iVar0, true, 0f);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 98, true);
			break;
		case joaat("PASSENGER_VIP"):
			WEAPON::REMOVE_ALL_PED_WEAPONS(iVar0, true, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 269, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 393, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 337, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 3, false);
			if (Local_2028.f_10 == -1.484548E+24f)
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 317, true);
				PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
			}
			else if (Local_2028.f_10 == -1.398992E+38f)
			{
				LAW::_0xFFEBE5AA96BC2E4E(iVar0, -6.437393E-24f, true);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 3, false);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2048, true);
			DECORATOR::DECOR_SET_BOOL(iVar0, func_697(), true);
			if (func_199(&Local_2028) == -1.398992E+38f)
			{
				MISC::_0x7FA58CED69405F9A(iVar0, 3);
				PED::SET_PED_CONFIG_FLAG(iVar0, 277, true);
			}
			break;
		case joaat("DROPOFF_GUARD"):
			PED::SET_PED_CONFIG_FLAG(iVar0, 137, true);
			PED::SET_PED_RESET_FLAG(iVar0, 36, true);
			PED::SET_PED_CAN_RAGDOLL(iVar0, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			break;
	}
	return true;
}

void func_396(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (uParam1->f_16[iParam0 /*12*/].f_11 < 0)
	{
		return;
	}
	if (func_678(&Local_2028, iParam0) != -1)
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return;
	}
	iVar0 = uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3;
	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!func_271(iParam0, 1))
	{
		return;
	}
	if (PED::DOES_GROUP_EXIST(iVar0))
	{
		return;
	}
	uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3 = PED::CREATE_GROUP(0);
	iVar0 = uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/].f_3;
	PED::SET_GROUP_FORMATION(iVar0, 5);
	PED::_SET_FORMATION_AUTO_ASSIGN_POSITION(iVar0, false);
	PED::SET_PED_AS_GROUP_LEADER(iVar1, iVar0, false);
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (uParam1->f_16[iVar3 /*12*/].f_2 != -7.042045E+27f)
		{
		}
		else if (uParam1->f_16[iParam0 /*12*/].f_11 != uParam1->f_16[iVar3 /*12*/].f_11)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iVar3 /*12*/]))
		{
		}
		else
		{
			iVar4 = NETWORK::NET_TO_PED(uParam1->f_16[iVar3 /*12*/]);
			PED::ADD_CUSTOM_FORMATION_LOCATION(iVar0, uParam1->f_16[iVar3 /*12*/].f_8, iVar2);
			PED::SET_PED_AS_GROUP_MEMBER(iVar4, iVar0);
			PED::_SET_PED_FORMATION_POSITION(iVar4, iVar2, false);
			iVar2++;
		}
		iVar3++;
	}
}

bool func_397(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/]))
	{
		return true;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		if (!bParam1 || !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false))
		{
			return true;
		}
	}
	return false;
}

void func_398(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	vector3 vVar1;
	bool bVar4;
	bool bVar5;
	int iVar6;

	if (func_201(iParam0, uParam2, 32))
	{
		return;
	}
	if (!func_201(iParam0, uParam2, 4) && !func_201(iParam0, uParam2, 524288))
	{
		if (func_201(iParam0, uParam2, 65536) || func_201(iParam0, uParam2, 131072))
		{
			if (((Local_16.f_16[iParam0 /*12*/].f_3 != 28 && Local_16.f_16[iParam0 /*12*/].f_3 != 24) && !PED::IS_PED_HOGTIED(iParam1)) && ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam1) == 0)
			{
				func_413(iParam0, uParam2, 65536);
				func_413(iParam0, uParam2, 131072);
			}
		}
		return;
	}
	iVar0 = 255;
	if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7)) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_16.f_16[iParam0 /*12*/].f_7))
	{
		iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_16.f_16[iParam0 /*12*/].f_7);
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	bVar4 = func_201(iParam0, uParam2, 65536);
	bVar5 = func_201(iParam0, uParam2, 131072);
	if (((!bVar4 && !bVar5) && !func_201(iParam0, &Local_16, 1.504633E-36f)) && iVar0 != 255)
	{
		if ((func_41(&(Local_363[iVar0 /*52*/]), 32) && func_331(Local_2028.f_625, vVar1)) || (func_41(&(Local_363[iVar0 /*52*/]), 64) && func_331(Local_2028.f_626, vVar1)))
		{
			func_698(iParam0, Local_16.f_16[iParam0 /*12*/].f_7);
		}
	}
	iVar6 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam1);
	if ((Local_16.f_16[iParam0 /*12*/].f_7 == 255 || iVar0 == 255) || !func_699(iParam0, iVar0))
	{
		if (iVar6 != 3 && 1)
		{
			return;
		}
	}
	if (func_201(iParam0, uParam2, 65536))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_700(iParam0, uParam2, 0);
		return;
	}
	else if (func_201(iParam0, uParam2, 131072))
	{
		if (iVar6 != 3)
		{
			return;
		}
		func_700(iParam0, uParam2, 1);
		return;
	}
	if (Local_16.f_16[iParam0 /*12*/].f_7 == 255 || iVar0 == 255)
	{
		return;
	}
	if (!bVar4 && !bVar5)
	{
		if (func_41(&(Local_363[iVar0 /*52*/]), 64) && func_699(iParam0, iVar0))
		{
			func_274(iParam0, uParam2, 131072);
		}
		else if (func_41(&(Local_363[iVar0 /*52*/]), 32) && func_699(iParam0, iVar0))
		{
			func_274(iParam0, uParam2, 65536);
		}
	}
}

void func_399(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_560(iParam0, uParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (iVar0 != -0.6089872f && func_397(iParam0, func_701(iVar0)))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
		{
			iVar1 = func_702(iParam0, uParam1);
		}
		if (iVar0 == 13.22463f)
		{
			func_703(iParam0, uParam1, bParam3);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && DECORATOR::DECOR_EXIST_ON(iVar1, func_697()))
			{
				DECORATOR::DECOR_REMOVE(iVar1, func_697());
			}
		}
		func_704(iParam0, uParam1, 0, 1, 0);
		return;
	}
	if (iVar0 == -0.6089872f)
	{
		if (func_705(iParam0))
		{
			func_234(iParam0);
			func_706(iParam0);
		}
		return;
	}
	iVar1 = func_702(iParam0, uParam1);
	func_707(iParam0, uParam1, iParam2, bParam3);
	func_708(iParam0, uParam1, iParam2, bParam3);
	func_709(iParam0, iVar1);
	switch (func_560(iParam0, uParam1))
	{
		case joaat("DRIVER"):
			func_710(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("ESCORT"):
			func_711(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_712(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("PASSENGER_VIP"):
			func_713(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_714(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_715(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("DROPOFF_GUARD"):
			func_716(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("CHASER"):
			func_717(iParam0, uParam1, iParam2, bParam3);
			break;
		case joaat("STATIONARY_ESCORT"):
			func_718(iParam0, uParam1, iParam2, bParam3);
			break;
	}
}

void func_400(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_338(iParam0, uParam1, 1))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if ((func_33(256) && !func_55(uParam1, 16)) && func_552(iVar0, Local_2028.f_29[iParam0 /*5*/].f_1, 0) > 3f)
	{
		func_63(uParam1, 16);
	}
	if (func_719(iVar0) && func_55(uParam1, 16))
	{
		if (!func_33(256))
		{
			if (func_720(uParam1, 1.020647E+37f, iParam0))
			{
				return;
			}
			if (func_720(uParam1, 2.418248E-09f, iParam0))
			{
				return;
			}
		}
		func_392(iParam0, uParam1, 1);
		Local_16.f_3[iParam0 /*4*/].f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_401(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar1))
		{
			iVar2 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar1);
			if (!func_41(&(Local_363[iVar2 /*52*/]), 32) && !func_41(&(Local_363[iVar2 /*52*/]), 64))
			{
				if (!bParam0 || GANG::NETWORK_GET_GANG_ID(iVar1) != Local_16.f_316)
				{
				}
				else if (func_41(&(Local_363[iVar2 /*52*/]), 8388608))
				{
				}
				else
				{
					return false;
					Jump @170; //curOff = 141
					if (bParam0)
					{
						if (GANG::NETWORK_GET_GANG_ID(iVar1) != Local_16.f_316)
						{
						}
						else
						{
							return false;
						}
					}
				}
				iVar0++;
				return true;
			}
		}
	}
}

int func_402(var uParam0)
{
	return uParam0->f_2;
}

bool func_403(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_404(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (func_201(iVar0, uParam0, 32))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_405(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	vector3 vVar5;
	bool bVar8;
	bool bVar9;

	if (!func_202(iParam0, uParam1, 128))
	{
		return;
	}
	if (func_202(iParam0, uParam1, 16))
	{
		return;
	}
	if (func_202(iParam0, uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[iParam0 /*5*/]))
	{
		func_721(iParam0, uParam1);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_721(iParam0, uParam1);
		return;
	}
	vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	func_722(iParam0, iVar0, vVar5, &iVar1, &iVar2, &iVar3, &bVar4);
	if (iVar1 != 0)
	{
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	}
	bVar8 = func_202(iParam0, &Local_16, 256);
	bVar9 = func_202(iParam0, &Local_16, 512);
	if (iVar1 == 0 || !bVar4)
	{
		if (bVar8)
		{
			func_723(iParam0, uParam1, 0);
			return;
		}
		else if (bVar9)
		{
			func_723(iParam0, uParam1, 1);
			return;
		}
	}
	if ((Local_16.f_257[iParam0 /*5*/].f_3 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_257[iParam0 /*5*/].f_3)) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_16.f_257[iParam0 /*5*/].f_3))
	{
		return;
	}
	if ((!bVar8 && !bVar9) && !func_202(iParam0, &Local_16, 4096))
	{
		if ((iVar1 == 2 && func_331(Local_2028.f_625, vVar5)) || (iVar1 == 3 && func_331(Local_2028.f_626, vVar5)))
		{
			func_724(iParam0, Local_16.f_257[iParam0 /*5*/].f_3);
		}
	}
	if (!bVar8 && !bVar9)
	{
		if (func_725(vVar5, iVar1, iVar2, bVar4, iVar3, 0))
		{
			func_417(iParam0, &Local_16, 256);
		}
		else if (func_725(vVar5, iVar1, iVar2, bVar4, iVar3, 1))
		{
			func_417(iParam0, &Local_16, 512);
		}
	}
}

bool func_406()
{
	if (!func_33(65536))
	{
		return false;
	}
	if (func_402(&Local_16) <= 2)
	{
		return false;
	}
	if (!func_55(&Local_16, 3.85186E-34f))
	{
		return false;
	}
	if (func_55(&Local_16, 524288))
	{
		return false;
	}
	if (func_55(&Local_16, 512))
	{
		return false;
	}
	if (func_403(&Local_16, 1.556252E-24f))
	{
		return false;
	}
	return true;
}

void func_407()
{
	Local_16.f_305.f_5 = 0;
	Local_16.f_305.f_6 = func_726();
	Local_16.f_305.f_7 = func_727();
	Local_16.f_305.f_9 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_16.f_305.f_2 = { 0f, 0f, 0f };
}

void func_408(int iParam0)
{
	Local_16.f_305 = iParam0;
}

bool func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_55(&Local_16, 256))
	{
		if (func_209(Local_16.f_305.f_9) < 8000)
		{
			return false;
		}
	}
	else if (func_209(Local_16.f_305.f_9) < Local_16.f_305.f_7)
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (Local_16.f_16[iVar1 /*12*/].f_2 != 0)
		{
			if (Local_16.f_16[iVar1 /*12*/].f_2 == 1.556252E-24f)
			{
				iVar2++;
			}
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	if (iVar0 < Local_16.f_305.f_6)
	{
		return false;
	}
	if (iVar2 + Local_16.f_305.f_6) > func_728()
	{
		return false;
	}
	return true;
}

bool func_410(var uParam0, var uParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
	{
		return false;
	}
	vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
	fVar7 = -1f;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar8 = 0;
			while (iVar8 < 20)
			{
				if (Local_16.f_16[iVar8 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (func_201(iVar8, &Local_16, 32) || func_201(iVar8, &Local_16, 262144))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar8 /*12*/]))
				{
				}
				else
				{
					iVar9 = NETWORK::NET_TO_PED(Local_16.f_16[iVar8 /*12*/]);
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar9, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 1124204544 || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar8 = 0;
			while (iVar8 < 4)
			{
				if (((!func_202(iVar8, &Local_16, 128) || func_202(iVar8, &Local_16, 2)) || func_202(iVar8, &Local_16, 16)) || func_202(iVar8, &Local_16, 1024))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar8 /*5*/]))
				{
				}
				else
				{
					iVar10 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar8 /*5*/]);
					vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar10, false, false) };
					fVar6 = BUILTIN::VDIST(vVar3, vVar0);
					if (fVar6 < 1124204544 || (fVar7 > 0f && fVar6 > fVar7))
					{
					}
					else
					{
						fVar7 = fVar6;
						*uParam1 = { vVar3 };
						*uParam0 = iVar8;
					}
				}
				iVar8++;
			}
			break;
		default:
			return false;
	}
	if (fVar7 < 0f)
	{
		return false;
	}
	return true;
}

int func_411(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_412(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_413(int iParam0, var uParam1, int iParam2)
{
	func_436(&(uParam1->f_16[iParam0 /*12*/].f_4), iParam2);
}

bool func_414(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_415(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_416(int iParam0, var uParam1, int iParam2)
{
	func_436(&(uParam1->f_257[iParam0 /*5*/].f_1), iParam2);
}

void func_417(int iParam0, var uParam1, int iParam2)
{
	func_122(&(uParam1->f_257[iParam0 /*5*/].f_1), iParam2);
}

void func_418(var uParam0, int iParam1)
{
	func_436(&(uParam0->f_1), iParam1);
}

bool func_419(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	var uVar8;
	vector3 vVar9;
	bool bVar12;
	float fVar13;

	fVar0 = 1.556252E-24f;
	iVar1 = func_237();
	iVar2 = func_238();
	bVar3 = func_729();
	vParam2 = { vParam2 + func_730(iParam0, iParam1) };
	if (!func_171(iVar1))
	{
		return false;
	}
	if (!func_171(iVar2))
	{
		return false;
	}
	STREAMING::REQUEST_COLLISION_AT_COORD(vParam2);
	if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(vParam2))
	{
		return false;
	}
	if (Local_16.f_305.f_8 == -1)
	{
		if (!func_731(&iVar4))
		{
			return true;
		}
		Local_16.f_305.f_8 = iVar4;
	}
	else
	{
		iVar4 = Local_16.f_305.f_8;
	}
	iVar5 = 2;
	iVar6 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false);
	iVar7 = (iVar6 - NETWORK::GET_NUM_CREATED_MISSION_PEDS(false));
	if (iVar7 < iVar5)
	{
		NETWORK::RESERVE_NETWORK_MISSION_PEDS((iVar6 + (iVar5 - iVar7)));
		if (NETWORK::GET_NUM_RESERVED_MISSION_PEDS(false) < (iVar6 + (iVar5 - iVar7)))
		{
			return true;
		}
	}
	if (Local_16.f_305.f_1 != -1)
	{
		switch (Local_2028.f_10)
		{
			case joaat("COACH_HOLDUP_ROBBERY"):
				if (((func_202(Local_16.f_305.f_1, &Local_16, 128) && !func_202(Local_16.f_305.f_1, &Local_16, 16)) && !func_202(Local_16.f_305.f_1, &Local_16, 2)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[Local_16.f_305.f_1 /*5*/]))
				{
					bVar12 = true;
					uVar8 = Local_16.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_16.f_257[Local_16.f_305.f_1 /*5*/]), false, false) };
				}
				break;
			case joaat("COACH_HOLDUP_KIDNAP"):
				if ((func_201(Local_16.f_305.f_1, &Local_16, 1024) && !func_201(Local_16.f_305.f_1, &Local_16, 32)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[Local_16.f_305.f_1 /*12*/]))
				{
					bVar12 = true;
					uVar8 = Local_16.f_305.f_1;
					vVar9 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_16.f_16[Local_16.f_305.f_1 /*12*/]), false, false) };
				}
				break;
		}
	}
	if (!bVar12 && !func_732(vParam2, &uVar8, &vVar9, 200f))
	{
		return true;
	}
	fVar13 = func_733(vParam2, vVar9);
	if (iVar1 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		return true;
	}
	if (iVar2 == 0 || !STREAMING::IS_MODEL_VALID(iVar1))
	{
		iVar2 = func_180(fVar0);
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar4 /*12*/].f_1))
	{
		if (iVar2 == 0)
		{
			return true;
		}
		if (!func_682(&(Local_16.f_16[iVar4 /*12*/].f_1), iVar2, vParam2, fVar13, 1, 0, 1, 1, 1))
		{
			return false;
		}
		NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_16[iVar4 /*12*/].f_1);
		return false;
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_16[iVar4 /*12*/].f_1);
	func_683(iVar4);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar4 /*12*/]) && !func_684(&(Local_16.f_16[iVar4 /*12*/]), Local_16.f_16[iVar4 /*12*/].f_1, iVar1, -1, 1, 1, 1, 0))
	{
		return false;
	}
	NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_16[iVar4 /*12*/]);
	Local_16.f_16[iVar4 /*12*/].f_2 = fVar0;
	Local_16.f_16[iVar4 /*12*/].f_8 = { func_734(iParam0, iParam1) };
	Local_16.f_16[iVar4 /*12*/].f_11 = uVar8;
	if (bVar3)
	{
		func_274(iVar4, &Local_16, 32768);
	}
	if (!func_395(iVar4, &Local_16, &Local_2028, 1))
	{
		return false;
	}
	return true;
}

void func_420(var uParam0, int iParam1, bool bParam2)
{
	switch (func_402(uParam0))
	{
		case 0:
			func_735(1, uParam0);
			break;
		case 1:
			if (func_736(uParam0, 8, 1))
			{
				if (func_736(uParam0, 64, 1) || func_414(uParam0, 32, 1))
				{
					func_735(5, uParam0);
					return;
				}
				if (!func_737(-1, 1))
				{
					return;
				}
				func_735(3, uParam0);
				return;
			}
			if (!func_738(uParam0, 1))
			{
				return;
			}
			if (func_739(uParam0, -1))
			{
				func_735(2, uParam0);
				return;
			}
			func_735(3, uParam0);
			break;
		case 2:
			if (func_736(uParam0, 8, 1))
			{
				func_735(5, uParam0);
				return;
			}
			if (func_739(uParam0, -1))
			{
				return;
			}
			func_735(3, uParam0);
			break;
		case 3:
			if ((func_414(uParam0, 1, 1) || func_414(uParam0, 32, 1)) || func_736(uParam0, 64, 1))
			{
				func_735(5, uParam0);
				return;
			}
			break;
		case 5:
			if (func_736(uParam0, 8, 1))
			{
				if (func_736(uParam0, 2, 1))
				{
					return;
				}
				func_735(6, uParam0);
				return;
			}
			if (func_415(uParam0, 2, 1))
			{
				return;
			}
			if (!func_740(uParam0, 1, -1))
			{
				func_735(1, uParam0);
				return;
			}
			break;
	}
}

void func_421(var uParam0, int iParam1, bool bParam2)
{
	switch (func_402(uParam0))
	{
		case 0:
			func_735(1, uParam0);
			break;
		case 1:
			if (func_737(-1, 1))
			{
				func_735(4, uParam0);
				return;
			}
			if (!func_738(uParam0, 1))
			{
				return;
			}
			if (func_739(uParam0, -1))
			{
				func_735(2, uParam0);
				return;
			}
			func_735(4, uParam0);
			break;
		case 2:
			if (func_737(-1, 0))
			{
				func_735(4, uParam0);
				return;
			}
			if (func_739(uParam0, -1))
			{
				return;
			}
			func_735(4, uParam0);
			break;
		case 4:
			if (func_737(-1, 1))
			{
				return;
			}
			if (!func_740(uParam0, 1, -1))
			{
				func_735(1, uParam0);
				return;
			}
			if (func_404(uParam0))
			{
				return;
			}
			func_735(6, uParam0);
			break;
	}
}

void func_422()
{
	int iVar0;

	if (func_605() == 3)
	{
		return;
	}
	if (!func_608(1) && !func_741())
	{
		return;
	}
	if (Local_16.f_299 == 0)
	{
		iVar0 = func_742();
		if (iVar0 == 0)
		{
			func_743(3);
			return;
		}
		else if (func_499(iVar0) == 0)
		{
			func_743(3);
			return;
		}
	}
	else
	{
		iVar0 = Local_16.f_299;
	}
	switch (func_605())
	{
		case 0:
			if (!func_608(1))
			{
				Local_16.f_299 = iVar0;
				Local_16.f_299.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_744(1);
			}
			if (func_209(Local_16.f_299.f_4) > 20000)
			{
				func_744(8);
				func_743(3);
			}
			if (!func_745(2, 0))
			{
				return;
			}
			func_746(iVar0);
			if (!func_745(4, 0))
			{
				return;
			}
			func_743(1);
			break;
		case 1:
			if (!func_747(1, 0))
			{
				return;
			}
			if (!func_745(32, 0))
			{
				return;
			}
			if (!func_748(func_500(iVar0, Local_16.f_299.f_2)))
			{
				return;
			}
			Local_16.f_299.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_749(4);
			func_743(2);
			break;
		case 2:
			if (!func_745(64, 0))
			{
				return;
			}
			if (!func_608(4) && !func_748(func_500(iVar0, Local_16.f_299.f_2)))
			{
				return;
			}
			func_744(4);
			if (Local_16.f_299.f_2 < (Local_2028.f_537 - 1))
			{
				func_750();
				func_743(1);
				return;
			}
			Local_16.f_299.f_5 = 0;
			Local_16.f_299.f_2 = 0;
			func_743(3);
			break;
	}
}

bool func_423(int iParam0, bool bParam1)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bParam1)
			{
				return MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_4), iParam0);
			}
			return MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540), iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam1)
			{
				return MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_6), iParam0);
			}
			return MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_2), iParam0);
		default:
			break;
	}
	return false;
}

bool func_424(int iParam0)
{
	int iVar0;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = Local_16.f_16[iParam0 /*12*/].f_7;
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = Local_16.f_257[iParam0 /*5*/].f_3;
			break;
		default:
			return false;
	}
	if (iVar0 == 255)
	{
		return false;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), iVar0))
	{
		return false;
	}
	return true;
}

void func_425(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	struct<2> Var1;

	Var1.f_1 = -1;
	func_751(iParam0, 0, iParam1);
	func_432(iParam0, &uVar0, 0, bParam3, iParam4);
	func_434(iParam0, 0, iParam2, &Var1);
	func_752(8.071765E-20f, iParam0, 0, 255, 0, 1);
}

int func_426(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = func_753(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_480(iVar0);
}

int func_427(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

float func_428(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

void func_429(int iParam0, var uParam1, var uParam2, int iParam3, float fParam4)
{
	int iVar0;

	iVar0 = BUILTIN::FLOOR(fParam4);
	func_754(iVar0, 0, 30);
	if (iVar0 <= 0)
	{
		switch (iParam3)
		{
			case 0:
				func_755(iParam0, 1.74594E+20f);
				break;
			case 1:
				*uParam2 = 1;
				break;
		}
		return;
	}
	switch (iVar0)
	{
		case 1:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.86941E+08f);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 2:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 3.55909E+16f);
					break;
				case 1:
					*uParam2 = 1;
					break;
			}
			break;
		case 3:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.052562E+30f);
					break;
				case 1:
					*uParam1 = 1.084574E+23f;
					break;
			}
			break;
		case 4:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -4.175071E-34f);
					break;
				case 1:
					*uParam1 = 1.084574E+23f;
					break;
			}
			break;
		case 5:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -6.958852E-27f);
					break;
				case 1:
					*uParam1 = 1.084574E+23f;
					break;
			}
			break;
		case 6:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -1.358245E-18f);
					break;
				case 1:
					*uParam1 = -3.650431E+24f;
					break;
			}
			break;
		case 7:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -6.713774E+19f);
					break;
				case 1:
					*uParam1 = -3.650431E+24f;
					break;
			}
			break;
		case 8:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -1.54656E-10f);
					break;
				case 1:
					*uParam1 = -3.650431E+24f;
					break;
			}
			break;
		case 9:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.14358E-17f);
					break;
				case 1:
					*uParam1 = -4.777369E-05f;
					break;
			}
			break;
		case 10:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -1.936376E+36f);
					break;
				case 1:
					*uParam1 = -4.777369E-05f;
					break;
			}
			break;
		case 11:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -3.745063E+25f);
					break;
				case 1:
					*uParam1 = -4.777369E-05f;
					break;
			}
			break;
		case 12:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 3.859155E-20f);
					break;
				case 1:
					*uParam1 = 4.15455E-27f;
					break;
			}
			break;
		case 13:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 6.736253E-31f);
					break;
				case 1:
					*uParam1 = 4.15455E-27f;
					break;
			}
			break;
		case 14:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 91.01038f);
					break;
				case 1:
					*uParam1 = 4.15455E-27f;
					break;
			}
			break;
		case 15:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.639866E-09f);
					break;
				case 1:
					*uParam1 = 5.713771E+24f;
					break;
			}
			break;
		case 16:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.077958E+26f);
					break;
				case 1:
					*uParam1 = 5.713771E+24f;
					break;
			}
			break;
		case 17:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.897261E+15f);
					break;
				case 1:
					*uParam1 = 5.713771E+24f;
					break;
			}
			break;
		case 18:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -2.441907E-30f);
					break;
				case 1:
					*uParam1 = 5.713771E+24f;
					break;
			}
			break;
		case 19:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 4.371308E+36f);
					break;
				case 1:
					*uParam1 = 5.713771E+24f;
					break;
			}
			break;
		case 20:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -5.956313E+32f);
					break;
				case 1:
					*uParam1 = 2.498194E+33f;
					break;
			}
			break;
		case 21:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -1.970923E+19f);
					break;
				case 1:
					*uParam1 = 2.498194E+33f;
					break;
			}
			break;
		case 22:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -3.486971E+15f);
					break;
				case 1:
					*uParam1 = 2.498194E+33f;
					break;
			}
			break;
		case 23:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -125.5186f);
					break;
				case 1:
					*uParam1 = 2.498194E+33f;
					break;
			}
			break;
		case 24:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -0.02581654f);
					break;
				case 1:
					*uParam1 = 2.498194E+33f;
					break;
			}
			break;
		case 25:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -8.788615E-16f);
					break;
				case 1:
					*uParam1 = 112.467f;
					break;
			}
			break;
		case 26:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 5.541686E+19f);
					break;
				case 1:
					*uParam1 = 112.467f;
					break;
			}
			break;
		case 27:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -4.13851E-28f);
					break;
				case 1:
					*uParam1 = 112.467f;
					break;
			}
			break;
		case 28:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.961045f);
					break;
				case 1:
					*uParam1 = 112.467f;
					break;
			}
			break;
		case 29:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, 1.682627E+30f);
					break;
				case 1:
					*uParam1 = 112.467f;
					break;
			}
			break;
		default:
			switch (iParam3)
			{
				case 0:
					func_755(iParam0, -1.719408E-34f);
					break;
				case 1:
					*uParam1 = -1.983883E-16f;
					break;
			}
			break;
	}
}

void func_430(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	float fVar0;
	int iVar1;

	fVar0 = ((BUILTIN::TO_FLOAT(iParam4) / BUILTIN::TO_FLOAT(iParam5)) * 1120403456);
	iVar1 = BUILTIN::CEIL((fVar0 / 5f)) * 5;
	switch (iParam3)
	{
		case -1516819610:
			switch (iParam2)
			{
				case 0:
					if (iVar1 <= 0)
					{
						func_755(iParam0, 3.038311E-35f);
					}
					switch (iVar1)
					{
						case 5:
							func_755(iParam0, 2.859133E+19f);
							break;
						case 10:
							func_755(iParam0, 2.208349E+33f);
							break;
						case 15:
							func_755(iParam0, -0.04524165f);
							break;
						case 20:
							func_755(iParam0, 3.333833E+15f);
							break;
						case 25:
							func_755(iParam0, 1.764603E+14f);
							break;
						case 30:
							func_755(iParam0, 9.804753E+22f);
							break;
						case 35:
							func_755(iParam0, 7.403932E-18f);
							break;
						case 40:
							func_755(iParam0, 3.825245E-21f);
							break;
						case 45:
							func_755(iParam0, -3.293541E+38f);
							break;
						case 50:
							func_755(iParam0, -1.515398E-30f);
							break;
						case 55:
							func_755(iParam0, -0.0002023946f);
							break;
						case 60:
							func_755(iParam0, 0.1375114f);
							break;
						case 65:
							func_755(iParam0, -4.424382E-19f);
							break;
						case 70:
							func_755(iParam0, 2.042337E+27f);
							break;
						case 75:
							func_755(iParam0, -2.548992E-17f);
							break;
						case 80:
							func_755(iParam0, 4.955672E+17f);
							break;
						case 85:
							func_755(iParam0, 7.026629f);
							break;
						case 90:
							func_755(iParam0, 4.955672E+17f);
							break;
						case 95:
							func_755(iParam0, 0.0001256896f);
							break;
						default:
							func_755(iParam0, -6.115853E+10f);
							break;
					}
					break;
				case 1:
					if (iVar1 <= 0)
					{
						*uParam1 = 1;
					}
					break;
			}
			break;
		case joaat("ALL_OR_NOTHING"):
			if (bParam6)
			{
				switch (iParam2)
				{
					case 0:
						func_755(iParam0, 4.114647E-24f);
						break;
				}
			}
			else
			{
				switch (iParam2)
				{
					case 0:
						func_755(iParam0, 3.038311E-35f);
						break;
					case 1:
						*uParam1 = 1;
						break;
				}
			}
			break;
	}
}

void func_431(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("PVP"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -1.647447E+36f);
					break;
			}
			break;
		case joaat("COOP"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 7.569038E+32f);
					break;
			}
			break;
	}
}

void func_432(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	bVar0 = iParam4 <= true;
	if (bParam3)
	{
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_755(iParam0, -5.896718E+36f);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_755(iParam0, 1.560884E-20f);
					break;
			}
		}
	}
	else
	{
		*uParam1 = 1;
		if (bVar0)
		{
			switch (iParam2)
			{
				case 0:
					func_755(iParam0, -3.170792E-18f);
					break;
			}
		}
		else
		{
			switch (iParam2)
			{
				case 0:
					func_755(iParam0, -3.434084E-29f);
					break;
			}
		}
	}
}

void func_433(int iParam0, int iParam1, struct<2> Param2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_472(Param2);
	if (!func_473(iVar0))
	{
		return;
	}
	iVar1 = func_474(iVar0);
	if (func_475(iVar1))
	{
		iVar2 = func_756(func_479(iVar1));
	}
	else
	{
		return;
	}
	if (iVar2 <= 0)
	{
		switch (iParam1)
		{
			case 0:
				func_755(iParam0, 9.998134E+29f);
				break;
		}
	}
	switch (iVar2)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 1.616963E-24f);
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -0.0966837f);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -2.166225E+12f);
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 1.14001E-13f);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 0.0002240888f);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -1.038565E-24f);
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -1.050871E-16f);
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -1.452194E+22f);
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -5.839937E+30f);
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 2.886038E+37f);
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -3.942026E-28f);
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 1.480797E+32f);
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 4.226931E+23f);
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -3.886347E+15f);
					break;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -586899.1f);
					break;
			}
			break;
	}
}

void func_434(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	switch (iParam1)
	{
		case 0:
		case 1:
			if (*uParam3 == 0)
			{
				func_755(iParam0, func_757(iParam2));
			}
			else
			{
				iVar0 = func_758(*uParam3);
				if (iVar0 == 0)
				{
					func_755(iParam0, func_757(iParam2));
				}
				else
				{
					func_755(iParam0, iVar0);
				}
			}
			break;
	}
}

int func_435(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<2> Var0;

	Var0.f_1 = 10;
	return func_759(bParam0, uParam1, iParam2, &Var0, iParam3, iParam4, iParam5, bParam6);
}

void func_436(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_437(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/]))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (!bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		if (bParam3 && PED::GET_PED_CONFIG_FLAG(*iParam1, 11, false))
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_438(int iParam0, int iParam1)
{
	func_436(&(Local_2028.f_45[iParam0 /*6*/].f_1), iParam1);
}

void func_439(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_760(iParam0, &iVar1, &iVar0);
	iVar2 = 0;
	while (iVar2 < 12)
	{
		MISC::CLEAR_BIT(&(Local_363[Local_2028.f_634 /*52*/].f_16[iVar2 /*2*/][iVar1]), iVar0);
		iVar2++;
	}
}

void func_440(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_761(iParam0);
	}
	else
	{
		func_762(iParam0);
	}
}

bool func_441(int iParam0, int iParam1)
{
	return (Global_1138658[iParam0 /*56*/].f_48 && iParam1) != 0;
}

bool func_442(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_517(iParam0);
	if (!func_518(iVar0))
	{
		return false;
	}
	iVar1 = func_476(iVar0);
	if (!func_477(iVar1))
	{
		return false;
	}
	if (!func_763(iVar1, &iVar2))
	{
		return true;
	}
	if (func_764(iVar2, 2))
	{
		return false;
	}
	return true;
}

bool func_443(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_444()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

void func_445(bool bParam0, int iParam1)
{
	if (bParam0)
	{
		Global_1940239 = 1;
		Global_1940239.f_1 = iParam1;
	}
	else
	{
		Global_1940239 = 2;
	}
}

int func_446(int iParam0)
{
	if (func_765(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_447(int iParam0)
{
	if (func_766(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_448(bool bParam0)
{
	if (!func_292(&Local_2028, bParam0))
	{
		return false;
	}
	if (!func_312(bParam0, 6.594195E-24f, 0, 0))
	{
		return false;
	}
	return true;
}

bool func_449(struct<5> Param0, float fParam5, var uParam6)
{
	var uVar0;

	if (func_176(Param0, fParam5, &uVar0, 0))
	{
		*uParam6 = uVar0;
		return true;
	}
	return false;
}

void func_450(int iParam0, int iParam1)
{
	func_436(&(Local_2028.f_166[iParam0]), iParam1);
}

void func_451(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_202.f_332), iParam0))
		{
			return;
		}
		func_767(iParam0, 1);
		MISC::_SET_BIT_FLAG(&(Local_2028.f_202.f_332), iParam0);
	}
	else
	{
		if (!MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_202.f_332), iParam0))
		{
			return;
		}
		func_767(iParam0, 0);
		MISC::_CLEAR_BIT_FLAG(&(Local_2028.f_202.f_332), iParam0);
	}
}

void func_452(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (bParam1)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_202.f_329), iParam0))
		{
			return;
		}
		func_768(iVar0);
		func_769(iParam0, 1);
		MISC::_SET_BIT_FLAG(&(Local_2028.f_202.f_329), iParam0);
	}
	else
	{
		if (!MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_202.f_329), iParam0))
		{
			return;
		}
		func_770(iVar0);
		func_769(iParam0, 0);
		MISC::_CLEAR_BIT_FLAG(&(Local_2028.f_202.f_329), iParam0);
	}
}

bool func_453(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_246(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

bool func_454(float fParam0)
{
	if (func_246(fParam0->f_202.f_56))
	{
		return true;
	}
	return false;
}

void func_455(bool bParam0)
{
	if (bParam0->f_11 >= 0)
	{
		if (!AUDIO::_HAS_SOUND_ID_FINISHED(bParam0->f_11))
		{
			AUDIO::_STOP_SOUND_WITH_ID(bParam0->f_11);
		}
		AUDIO::RELEASE_SOUND_ID(bParam0->f_11);
		bParam0->f_11 = -1;
	}
}

void func_456()
{
	AUDIO::_RELEASE_SHARD_SOUNDS(func_771(), func_772());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_773(), func_772());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_774(), func_772());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_775(), func_772());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_776(), func_777());
	AUDIO::_RELEASE_SHARD_SOUNDS(func_778(), func_779());
}

void func_457(bool bParam0)
{
	if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
	{
		UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&(bParam0->f_3));
	}
	if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_DESTROY(2.040361E+17f);
	}
}

void func_458(int iParam0)
{
	if (Global_1902880.f_1 != iParam0)
	{
		Global_1902880.f_1 = iParam0;
	}
}

void func_459(int iParam0)
{
	Global_1902880 = iParam0;
}

bool func_460(int iParam0, bool bParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar4 = 0;
	if (iParam0 == 0)
	{
		return false;
	}
	if (Global_1149417.f_3876.f_711 == iParam0)
	{
		return true;
	}
	Global_1149417.f_3876.f_706.f_1 = 0;
	Global_1149417.f_3876.f_706.f_2 = 4.7458E+19f;
	Global_1149417.f_3876.f_706.f_3 = iParam0;
	Global_1149417.f_3876.f_706.f_4 = 0;
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_3876.f_706))
	{
		Global_1149417.f_3876.f_706 = Global_1149417.f_2;
	}
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar0, &(Global_1149417.f_3876.f_706)))
	{
		return false;
	}
	Global_1149417.f_3876.f_711 = iParam0;
	iVar4 = 0;
	while (iVar4 < 106)
	{
		iVar2 = func_780(iVar4, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			iVar1 = iVar2;
			if (iVar1 == 0)
			{
			}
			else
			{
				Global_1149417.f_3876.f_706.f_4 = iVar1;
				Global_1149417.f_3876.f_706.f_2 = -1.865024E+30f;
				if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&uVar0, &(Global_1149417.f_3876.f_706)))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_781(iVar2, bVar3, bParam1);
				if (!bVar3)
				{
				}
				else
				{
					Global_1149417.f_3876.f_706.f_2 = 2348876f;
					if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&bVar3, &(Global_1149417.f_3876.f_706)))
					{
					}
					else
					{
						bVar3 = true;
					}
					Global_1149417.f_3876.f_2[func_507(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_461(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_462()
{
	float fVar0;

	fVar0 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f);
	if (fVar0 < 1008981770)
	{
		return 19;
	}
	if (fVar0 < 1042536202)
	{
		return 15;
	}
	if (fVar0 < 1050589266)
	{
		return 17;
	}
	if (fVar0 < 1055622431)
	{
		return 16;
	}
	if (fVar0 < 1058810102)
	{
		return 18;
	}
	return 0;
}

int func_463(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 112;
		case 2:
			return 113;
		case 3:
			return 2;
		case 4:
			return 3;
		case 5:
			return 4;
		case 6:
			return 5;
		case 8:
			return 7;
		case 9:
			return 8;
		case 10:
			return 9;
		case 11:
			return 10;
		case 12:
			return 11;
		case 15:
			return 12;
		case 16:
			return 13;
		case 17:
			return 15;
		case 19:
			return 17;
		case 20:
			return 18;
		case 21:
			return 19;
		case 22:
			return 20;
		case 23:
			return 21;
		case 25:
			return 23;
		case 26:
			return 25;
		case 27:
			return 26;
		case 28:
			return 62;
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

int func_464(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 170;
		case 1:
			return 171;
		case 2:
			return 172;
		case 3:
			return 173;
		case 4:
			return 174;
		case 5:
			return 175;
		case 6:
			return 175;
		case 7:
			return 175;
		case 8:
			return 176;
		case 9:
			return 177;
		case 10:
			return 178;
		case 11:
			return 179;
		case 12:
			return 180;
		case 13:
			return 181;
		case 14:
			return 182;
		case 15:
			return 183;
		case 16:
			return 184;
		default:
			break;
	}
	return -1;
}

void func_465(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_466(struct<2> Param0, bool bParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	iVar2 = func_476(iVar1);
	if (!func_477(iVar2))
	{
		return;
	}
	iVar6 = func_480(iVar1);
	if (iVar6 == -1)
	{
		return;
	}
	iVar3 = func_481(iVar0);
	iVar4 = func_479(iVar0);
	iVar5 = func_427(iVar6);
	if (func_482())
	{
		if (bParam2 && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_782(iVar0, iVar2, Param0, iVar6);
		}
		if (func_783(iVar5) != -5.832918E+19f && func_481(iVar0) != -1.753214E+27f)
		{
			switch (iVar4)
			{
				case joaat("CRIPPS"):
					break;
				case joaat("MARCEL"):
					func_785(iVar4, func_784());
					func_786(iVar4, 1);
					func_787(iVar0);
					func_788(iVar0);
					func_789(2.350989E-38f);
					break;
				case joaat("MOONSHINER"):
					func_785(iVar4, func_784());
					func_786(iVar4, 1);
					func_787(iVar0);
					func_788(iVar0);
					func_789(8388608);
					break;
				default:
					if (func_504(iVar5) == 2 && bParam2)
					{
					}
					else if (func_492(iVar6, 64))
					{
					}
					else
					{
						func_785(iVar4, func_784());
						func_786(iVar4, 1);
						func_787(iVar0);
						func_788(iVar0);
					}
					break;
			}
		}
		if (func_481(iVar0) != -1.753214E+27f)
		{
			func_790(iVar4, func_784());
		}
		if (func_481(iVar0) == 2.871704E-24f)
		{
			if (!func_791(iVar4) && func_792(9))
			{
				func_793(iVar4, 1);
			}
		}
		func_794(iVar4, bParam2);
		switch (func_795(iVar5))
		{
			case 7:
				func_796(uParam3);
				break;
		}
		func_797(iVar6, Param0, bParam2, *uParam3);
		func_799(func_798(iVar0), 1);
		func_800(1);
	}
	bVar7 = func_492(iVar6, 1);
	func_801(iVar3, bParam2, bVar7);
	func_802();
}

bool func_467(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return func_803(iParam0, iParam1);
}

void func_468(int iParam0)
{
	func_804(iParam0);
}

void func_469(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_805(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_806(Var0) && !func_588(Var0))
	{
		return;
	}
	func_807(iParam0, 2);
	func_807(iParam0, 3);
	func_808(iParam0, 6);
	func_809(Var0, 0, 2, bParam1, 0);
}

void func_470(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_805(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_806(Var0))
	{
		return;
	}
	if (!func_588(Var0))
	{
		return;
	}
	if (func_810(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	if (bParam1)
	{
		bVar2 = 4;
	}
	else
	{
		bVar2 = false;
	}
	func_809(Var0, 0, bVar2, bParam2, 0);
	func_808(iParam0, 4);
}

void func_471(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_805(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_806(Var0))
	{
		return;
	}
	if (!func_588(Var0))
	{
		return;
	}
	if (func_810(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_809(Var0, 0, 1, bParam1, 0);
	func_808(iParam0, 5);
}

int func_472(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_29(Param0, func_811(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_473(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 32)
	{
		return false;
	}
	return true;
}

int func_474(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

bool func_475(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

int func_476(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_1;
}

bool func_477(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 62);
}

int func_478(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_3;
}

int func_479(int iParam0)
{
	return Global_1119220[iParam0 /*35*/];
}

int func_480(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_3;
}

int func_481(int iParam0)
{
	return Global_1119220[iParam0 /*35*/].f_1;
}

bool func_482()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_483(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(-8.871581E-27f, func_812(iParam0)) };
	func_814(Var0, iParam1);
}

void func_484(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(-1.082889E+12f, func_812(iParam0)) };
	func_815(Var0, iParam1);
}

void func_485(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(3.523874E-09f, func_812(iParam0)) };
	func_816(Var0, iParam1);
}

void func_486(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	struct<2> Var1;

	if (bParam1)
	{
		if (bParam2)
		{
			fVar0 = 1.357193E-16f;
		}
		else
		{
			fVar0 = 1.671861E-34f;
		}
	}
	else if (bParam2)
	{
		fVar0 = -8.839952E-30f;
	}
	else
	{
		fVar0 = 1.255702E+11f;
	}
	Var1 = { func_813(fVar0, func_812(iParam0)) };
	func_817(Var1);
}

void func_487(int iParam0, bool bParam1, bool bParam2)
{
	struct<2> Var0;

	if (bParam1)
	{
		return;
	}
	Var0 = { func_813(2.486129E-12f, func_812(iParam0)) };
	if (bParam2)
	{
		func_817(Var0);
	}
	else
	{
		func_818(Var0, 0);
	}
}

void func_488(int iParam0, bool bParam1, bool bParam2, struct<2> Param3, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	Var0 = -1;
	vVar2 = 3.006576E-21f;
	vVar2.f_2 = 255;
	Var0 = func_427(iParam0);
	Var0.f_1 = func_106(Param3);
	vVar2.f_2 = bParam7;
	if (bParam1)
	{
		vVar2.f_1 = 2;
	}
	else
	{
		vVar2.f_1 = 1;
	}
	iVar8 = func_795(Var0);
	iVar6 = func_783(Var0);
	iVar5 = 0;
	switch (iVar8)
	{
		case 0:
		case 9:
			if (bParam2)
			{
				vVar2.x = -6.939115E-11f;
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			break;
		case 11:
			if (bParam2)
			{
				switch (iVar6)
				{
					case joaat("SETUP"):
						vVar2.x = -6.939115E-11f;
						func_819(256);
						break;
					case joaat("RESUPPLY"):
						vVar2.x = -6.939115E-11f;
						func_819(256);
						break;
					case joaat("SELL"):
						if (func_492(iParam0, 2))
						{
							vVar2.x = -1.879765E+24f;
						}
						else
						{
							vVar2.x = -1.19795E+26f;
						}
						break;
					default:
						vVar2.x = -6.939115E-11f;
						break;
				}
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			break;
		case 7:
			if (bParam2)
			{
				iVar7 = func_820(bParam5->f_2);
				switch (iVar7)
				{
					case 0:
						vVar2.x = -4.165899E+20f;
						break;
					case 1:
						vVar2.x = 1.307674E-18f;
						break;
					case 2:
						vVar2.x = -2.170887E-29f;
						break;
					case 3:
						vVar2.x = -6.939115E-11f;
						break;
					default:
						vVar2.x = -6.939115E-11f;
						break;
				}
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			break;
		case 15:
			if (bParam2)
			{
				if (func_492(iParam0, 4))
				{
					vVar2.x = 8.409859E+24f;
				}
				else
				{
					vVar2.x = -6.939115E-11f;
				}
			}
			else if (func_492(iParam0, 4))
			{
				vVar2.x = 7.237914E-22f;
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			break;
		case 18:
			if (bParam2)
			{
				if (func_492(iParam0, 16))
				{
					if (bParam6)
					{
						vVar2.x = 8.409859E+24f;
					}
					else
					{
						vVar2.x = 6.10739E+35f;
					}
				}
				else
				{
					vVar2.x = -6.939115E-11f;
				}
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			iVar5 = func_821();
			break;
		default:
			if (bParam2)
			{
				vVar2.x = -6.939115E-11f;
			}
			else
			{
				vVar2.x = 6.667029E+30f;
			}
			break;
	}
	func_822(&Var0, &vVar2, bParam5, iVar5);
}

void func_489(int iParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = { func_813(20714.47f, func_812(iParam0)) };
	if (bParam1)
	{
		func_817(Var0);
	}
	else
	{
		func_818(Var0, 0);
	}
}

void func_490(int iParam0, int iParam1, float fParam2, struct<2> Param3, int iParam5)
{
	struct<28> Var0;
	var uVar31;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = iParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = fParam2;
	Var0.f_7 = { Param3 };
	Var0.f_15 = iParam5;
	func_384(&Var0, uVar31);
}

void func_491(bool bParam0)
{
	if (Global_1203937.f_420 != 2)
	{
		return;
	}
	if (Global_1203937.f_420.f_1 == 0)
	{
		return;
	}
	Global_1203937.f_420.f_1 = 0;
	POSSE::_0xC684FF658B2E55DA(bParam0);
}

bool func_492(int iParam0, int iParam1)
{
	return func_823(&(Global_1110244.f_3667[iParam0 /*7*/].f_2), iParam1);
}

void func_493(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;

	if (bParam2)
	{
		fVar0 = -8.839952E-30f;
	}
	else
	{
		fVar0 = 1.255702E+11f;
	}
	if (bParam1)
	{
		iVar1 = func_824(iParam0);
	}
	else
	{
		iVar1 = func_825(iParam0);
	}
	Var3 = { func_813(fVar0, iVar1) };
	func_817(Var3);
	if (func_826(iParam0) != 0)
	{
		if (bParam3)
		{
			return;
		}
		iVar2 = func_826(iParam0);
		Var5 = { func_813(fVar0, iVar2) };
		func_817(Var5);
	}
}

void func_494(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) >= 2)
		{
			func_827(17, 1);
		}
	}
	func_828(4);
	func_829(1);
	func_830(60);
	if (SAVE::SAVEGAME_IS_SAVE_PENDING())
	{
	}
	else if (SAVE::SAVEGAME_SAVE_MP(-4.059512E-23f))
	{
	}
	func_221(1);
	func_221(2);
}

void func_495(int iParam0)
{
	func_831(iParam0);
	func_832(iParam0, MISC::GET_GAME_TIMER());
}

void func_496(int iParam0)
{
	Global_1110244.f_21.f_40.f_1 = iParam0;
}

void func_497(int iParam0)
{
	Global_1110244.f_21.f_40 = iParam0;
}

void func_498(int iParam0)
{
	func_436(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_1), iParam0);
}

int func_499(int iParam0)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_292(&Local_2028, &Var0) && func_312(&Var0, 5.673219E-19f, iParam0, 0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

int func_500(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar5;

	iVar5 = 0;
	if (((func_292(&Local_2028, &Var0) && func_312(&Var0, 5.673219E-19f, iParam0, 0)) && func_312(&Var0, -7.593019E+34f, iParam1, 0)) && func_312(&Var0, -1.283549E-13f, 0, 0))
	{
		iVar5 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
	}
	return iVar5;
}

bool func_501(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case joaat("PED"):
			if (iParam1 >= 20)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam1 /*12*/]))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_16.f_16[iParam1 /*12*/]);
			break;
		case joaat("PROP"):
			if (iParam1 >= 10)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_278[iParam1 /*2*/]))
			{
				return false;
			}
			if (func_96(iParam1, 1))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_16.f_278[iParam1 /*2*/]);
			break;
		case joaat("VEHICLE"):
			if (iParam1 >= 3)
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_3[iParam1 /*4*/]))
			{
				return false;
			}
			*iParam2 = NETWORK::NET_TO_ENT(Local_16.f_3[iParam1 /*4*/]);
			break;
		case joaat("PLAYER"):
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_329[iParam1]))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(Local_16.f_329[iParam1])))
			{
				return false;
			}
			*iParam2 = func_267(PLAYER::GET_PLAYER_PED(Local_16.f_329[iParam1]));
			break;
		case joaat("PLAYER_HORSE"):
			if (iParam1 >= 7)
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_329[iParam1]))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Local_16.f_329[iParam1])))
			{
				return false;
			}
			*iParam2 = func_267(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Local_16.f_329[iParam1]));
			break;
		default:
			return false;
	}
	return true;
}

int func_502()
{
	return func_833((13 + Local_2028), 31);
}

void func_503(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

var func_504(int iParam0)
{
	return func_834(iParam0);
}

var func_505(int iParam0)
{
	return Global_1110244.f_21.f_3.f_1[iParam0];
}

bool func_506()
{
	if (func_21() != 0)
	{
		return true;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.454324E-14f))
	{
		return true;
	}
	if (Global_1149417.f_3876.f_1 & 2 != 0)
	{
		return true;
	}
	if (Global_1149417.f_3876.f_1 & 4 != 0)
	{
		return true;
	}
	if (!NETWORK::HAS_NETWORK_TIME_STARTED())
	{
		return true;
	}
	return false;
}

int func_507(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2086327823:
			return 64;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_MERCY_KILL"):
			return 98;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_RETURN"):
			return 101;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_ASSAULT"):
			return 62;
		case joaat("PERSONA_HONOR_ACTION__MURDER_PLAYER"):
			return 4;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTYFIVE"):
			return 39;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_MURDER"):
			return 56;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_PLAYER"):
			return 68;
		case joaat("PERSONA_HONOR_ACTION__NB_BEGGAR_DONATE"):
			return 102;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_KILL"):
			return 50;
		case joaat("PERSONA_HONOR_ACTION__MURDER_RAMPAGE"):
			return 5;
		case joaat("PERSONA_HONOR_ACTION__SLAUGHTER_PETS"):
			return 13;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTY"):
			return 92;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_PLAYER"):
			return 16;
		case joaat("PERSONA_HONOR_ACTION__LOOTING"):
			return 43;
		case joaat("PERSONA_HONOR_ACTION__EXECUTION_PLAYER"):
			return 10;
		case joaat("PERSONA_HONOR_ACTION__ANIMAL_CRUELTY"):
			return 45;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_POSSE"):
			return 67;
		case joaat("PERSONA_HONOR_ACTION__MURDER_BUTCHER"):
			return 1;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_NEG"):
			return 30;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_KILL"):
			return 53;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_MURDER"):
			return 59;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_KILL"):
			return 49;
		case joaat("PERSONA_HONOR_ACTION__NB_WILDMAN_FEED"):
			return 95;
		case joaat("PERSONA_HONOR_ACTION__UNPROVOKED_ANTAGONIZATION"):
			return 21;
		case joaat("PERSONA_HONOR_ACTION__WATCH_BLEED_OUT"):
			return 11;
		case joaat("PERSONA_HONOR_ACTION__NB_GRAVEROBBER_ACCEPT"):
			return 48;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTYFIVE"):
			return 37;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE_PLAYER"):
			return 18;
		case joaat("PERSONA_HONOR_ACTION__NB_ANIMAL_ATTACK_SAVE"):
			return 93;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_NEG"):
			return 32;
		case joaat("PERSONA_HONOR_ACTION__MURDER_HORSE"):
			return 12;
		case joaat("PERSONA_HONOR_ACTION__NB_HOBO_DOG_KILL"):
			return 57;
		case joaat("PERSONA_HONOR_ACTION__RESOURCEFUL"):
			return 74;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TEN"):
			return 34;
		case joaat("PERSONA_HONOR_ACTION__MISSION_OUTLAW"):
			return 31;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_PLAYER"):
			return 17;
		case joaat("PERSONA_HONOR_ACTION__INTRO_MISSION_POS"):
			return 82;
		case joaat("PERSONA_HONOR_ACTION__WAGON_THIEF_AI"):
			return 15;
		case joaat("PERSONA_HONOR_ACTION__THEFT"):
			return 44;
		case joaat("PERSONA_HONOR_ACTION__MURDER"):
			return 2;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_ALIVE"):
			return 105;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE"):
			return 70;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL_PVP"):
			return 79;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_HIDEOUT"):
			return 75;
		case joaat("PERSONA_HONOR_ACTION__NB_RUNAWAY_WAGON_ASSIST"):
			return 100;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTEEN"):
			return 35;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_PLAYER"):
			return 73;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_KILL"):
			return 51;
		case joaat("PERSONA_HONOR_ACTION__LOOTING_BODIES"):
			return 20;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE"):
			return 77;
		case joaat("PERSONA_HONOR_ACTION__NB_KIDNAPPED_RESCUE"):
			return 96;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTY"):
			return 86;
		case -29468993:
			return 103;
		case -1:
			return 0;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE"):
			return 87;
		case joaat("PERSONA_HONOR_ACTION__IGNORE_MISSION"):
			return 23;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL_PVP"):
			return 27;
		case joaat("PERSONA_HONOR_ACTION__NB_RANDOM_EVENT_MURDER"):
			return 61;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIFTY"):
			return 42;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTYFIVE"):
			return 41;
		case joaat("PERSONA_HONOR_ACTION__NB_TREASURE_HUNTER_KILL"):
			return 52;
		case joaat("PERSONA_HONOR_ACTION__REVIVE_MULTI"):
			return 69;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_KILL"):
			return 24;
		case joaat("PERSONA_HONOR_ACTION__HERDING_STEAL"):
			return 29;
		case joaat("PERSONA_HONOR_ACTION__VANDALISM_LOW"):
			return 47;
		case joaat("PERSONA_HONOR_ACTION__GRIEFING"):
			return 22;
		case joaat("PERSONA_HONOR_ACTION__NB_ARROWHEAD_INJURY_BLEED_OUT"):
			return 55;
		case joaat("PERSONA_HONOR_ACTION__MURDER_MISSION_PEDS"):
			return 6;
		case joaat("PERSONA_HONOR_ACTION__ARSON"):
			return 46;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER_UNARMED"):
			return 8;
		case joaat("PERSONA_HONOR_ACTION__MELEE_ATTACK_PLAYER"):
			return 7;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTYFIVE"):
			return 89;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_TWENTY"):
			return 36;
		case joaat("PERSONA_HONOR_ACTION__MERCY_KILL"):
			return 94;
		case 669386338:
			return 104;
		case 796310207:
			return 66;
		case joaat("PERSONA_HONOR_ACTION__FME_BOUNTY_RETURNED_DEAD"):
			return 60;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_FULL"):
			return 72;
		case joaat("PERSONA_HONOR_ACTION__CLEAR_AMBUSH"):
			return 76;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIVE"):
			return 83;
		case joaat("PERSONA_HONOR_ACTION__NB_TIED_UP_RESCUE"):
			return 97;
		case joaat("PERSONA_HONOR_ACTION__HORSE_THIEF_AI"):
			return 14;
		case joaat("PERSONA_HONOR_ACTION__MURDER_CAMP_FOLLOWER"):
			return 3;
		case joaat("PERSONA_HONOR_ACTION__GFH_CRIMINAL"):
			return 26;
		case joaat("PERSONA_HONOR_ACTION__RUSTLING"):
			return 28;
		case joaat("PERSONA_HONOR_ACTION__GFH_LAWFUL"):
			return 78;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTY"):
			return 90;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GUNSLINGER"):
			return 81;
		case joaat("PERSONA_HONOR_ACTION__NB_RIVAL_COLLECTOR_LOOT"):
			return 54;
		case 1623086000:
			return 65;
		case joaat("PERSONA_HONOR_ACTION__HORSE_CARE_CLEAN"):
			return 71;
		case 1723535349:
			return 58;
		case joaat("PERSONA_HONOR_ACTION__HOGTIE_PLAYER"):
			return 9;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FIVE"):
			return 33;
		case joaat("PERSONA_HONOR_ACTION__NB_PHOTOGRAPHY_ASSIST"):
			return 99;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_TEN"):
			return 84;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_FORTY"):
			return 40;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FIFTEEN"):
			return 85;
		case joaat("PERSONA_HONOR_ACTION__FREEROAM_HIDEOUT_SAVE_THEN_KILL"):
			return 25;
		case joaat("PERSONA_HONOR_ACTION__MISSION_NEG_THIRTY"):
			return 38;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_FORTYFIVE"):
			return 91;
		case joaat("PERSONA_HONOR_ACTION__MISSION_GVO_INTRO_POS"):
			return 80;
		case joaat("PERSONA_HONOR_ACTION__BOUNTY_BRIBE_GUARD"):
			return 63;
		case joaat("PERSONA_HONOR_ACTION__MISSION_POS_THIRTY"):
			return 88;
		case joaat("PERSONA_HONOR_ACTION__TRAMPLE"):
			return 19;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

void func_508(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 188;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 5, &uParam1);
}

int func_509(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

char* func_510(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_511(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, bParam2, 4);
	return func_835(iParam0, iParam1, &Var0, uParam3);
}

int func_512(var uParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return iParam2;
	}
	if (!STATS::STAT_ID_GET_INT(&uParam0, &uVar0))
	{
		return iParam2;
	}
	return uVar0;
}

bool func_513(var uParam0, bool bParam1)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = -3.869369E-29f;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

bool func_514(var uParam0, bool bParam1)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = 1.418354E+28f;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

bool func_515(var uParam0, bool bParam1)
{
	if (func_292(uParam0, bParam1))
	{
		bParam1->f_2 = -1.198346E+30f;
		return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam1->f_1), bParam1);
	}
	return false;
}

struct<2> func_516()
{
	return Global_1051268;
}

int func_517(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_753(iParam0);
	iVar1 = func_836(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_518(iVar1))
		{
			func_837(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_518(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_519(int iParam0)
{
	if (!func_838(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_839();
	Global_1110244.f_15 = 1;
	func_840(iParam0, 8);
}

bool func_520(int iParam0)
{
	if (!func_841(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_842(iParam0)) >= func_843(iParam0);
}

void func_521()
{
	struct<28> Var0;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(Var0.f_10);
	Var0.f_4 = 12;
	func_495(1);
	func_385(&Var0);
}

void func_522()
{
	struct<28> Var0;
	var uVar31;
	int iVar32;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	iVar32 = NETWORK::_NETWORK_GET_SESSION_HOST();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar32))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar32))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar31, iVar32);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(Var0.f_10);
	Var0.f_4 = 11;
	func_495(0);
	func_384(&Var0, uVar31);
}

float func_523(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && bParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && bParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_524(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	float fVar4;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	if (bParam2 && !GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), iParam0))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false) };
	*fParam1 = -1f;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar3 /*5*/]))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_16.f_257[iVar3 /*5*/]), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar3 = 0;
			while (iVar3 < 20)
			{
				if (Local_16.f_16[iVar3 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar3 /*12*/]))
				{
				}
				else
				{
					fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_ENT(Local_16.f_16[iVar3 /*12*/]), false, false), vVar0);
					if (*fParam1 != -1f && fVar4 > *fParam1)
					{
					}
					else
					{
						*fParam1 = fVar4;
					}
				}
				iVar3++;
			}
			break;
	}
	if (*fParam1 == -1f)
	{
		return false;
	}
	return true;
}

int func_525(var uParam0, float fParam1)
{
	return (fParam1->f_10.f_6 - func_210(uParam0));
}

bool func_526(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 2);
	iVar1 = (iParam1 / 8);
	return (iParam0 <= iVar0 && iParam0 >= iVar1);
}

void func_527(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (func_844())
	{
		if ((MISC::GET_GAME_TIMER() - func_845()) < 75000)
		{
			return;
		}
	}
	if (!func_28(Param0))
	{
		return;
	}
	iVar1 = func_472(Param0);
	if (!func_473(iVar1))
	{
		return;
	}
	iVar0 = func_474(iVar1);
	if (!func_475(iVar0))
	{
		return;
	}
	uVar2 = func_476(iVar1);
	func_846(uVar2, iVar0, Param0);
	func_496(MISC::GET_GAME_TIMER());
	func_497(1);
}

void func_528()
{
	if (func_33(2.524355E-29f))
	{
		return;
	}
	func_847(4);
	func_126(2.524355E-29f);
}

bool func_529(int iParam0)
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return func_848(iParam0);
		case joaat("COACH_HOLDUP_KIDNAP"):
			return func_849(iParam0);
		default:
			break;
	}
	return false;
}

void func_530()
{
	func_850(Local_2028.f_2);
	func_126(262144);
}

bool func_531(vector3 vParam0, float fParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Local_2028.f_10 == -1.398992E+38f)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
			{
			}
			else if (bParam4)
			{
				if ((func_201(iVar0, &Local_16, 32) || func_201(iVar0, &Local_16, 65536)) || func_201(iVar0, &Local_16, 131072))
				{
				}
				else if (!func_437(iVar0, &iVar1, 1, 0))
				{
				}
				else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0) > fParam3)
				{
				}
				else
				{
					return true;
				}
				iVar0++;
				Jump @330; //curOff = 161
				if (Local_2028.f_10 == -1.484548E+24f)
				{
					iVar2 = 0;
					while (iVar2 < 4)
					{
						if (!func_202(iVar2, &Local_16, 128))
						{
						}
						else if (bParam4)
						{
							if ((func_202(iVar2, &Local_16, 2) || func_202(iVar2, &Local_16, 256)) || func_202(iVar2, &Local_16, 512))
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar2 /*5*/]))
							{
							}
							else
							{
								iVar3 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar2 /*5*/]);
								if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam0) > fParam3)
								{
								}
								else
								{
									return true;
								}
							}
							iVar2++;
							return false;
						}
					}
				}
			}
		}
	}
}

void func_532()
{
	func_851(Local_2028.f_2);
	func_126(524288);
}

bool func_533(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar7;

	if (!func_33(1) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_33))
	{
		return false;
	}
	if (func_33(8192))
	{
		iVar0 = Local_2028.f_620;
		iVar1 = Local_2028.f_626;
	}
	else
	{
		iVar0 = Local_2028.f_619;
		iVar1 = Local_2028.f_625;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (func_331(iVar1, Global_34))
	{
		if (func_257(1, 255) && func_362(255) == 0)
		{
			*uParam0 = 0f;
			return true;
		}
		vVar2 = { VOLUME::GET_VOLUME_COORDS(iVar0) };
		fVar5 = BUILTIN::VDIST(vVar2, Global_34);
		if (func_848(255) || func_849(255))
		{
			if ((func_852(Global_33, 6) && func_853(Global_33, &uVar6, &uVar7)) && func_331(iVar0, Global_34))
			{
				*uParam0 = 0f;
				return true;
			}
			else if (fVar5 < 6f || func_331(iVar0, Global_34))
			{
				*uParam0 = 1057803469; /* Float: 0.55f */
				return true;
			}
			else if (fVar5 < 1101004800)
			{
				*uParam0 = 1067450368; /* Float: 1.25f */
				return true;
			}
		}
	}
	return false;
}

bool func_534()
{
	struct<2> Var0;

	if (func_32())
	{
		return false;
	}
	Var0 = { func_622() };
	if (!func_28(Var0))
	{
		return false;
	}
	if (!func_29(Local_2028.f_2, Var0))
	{
		return false;
	}
	return true;
}

void func_535(int iParam0)
{
	PED::SET_PED_RESET_FLAG(PLAYER::GET_PLAYER_PED(iParam0), 354, true);
	Global_1072759.f_21353.f_1[iParam0 /*8*/].f_4 = MISC::GET_FRAME_COUNT();
}

bool func_536(bool bParam0)
{
	if (func_369())
	{
		return false;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608))
	{
		return false;
	}
	if (!func_345())
	{
		return false;
	}
	if (Local_2028.f_632 < 0f)
	{
		return false;
	}
	if (!func_854(Local_2028.f_632, 0, 0, 0))
	{
		return false;
	}
	if (bParam0 && func_348(PLAYER::PLAYER_ID(), 1, 1))
	{
		return false;
	}
	return true;
}

bool func_537(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return (func_467(iParam0, 1) && !func_467(iParam0, 2));
}

bool func_538(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	return func_467(iParam0, 2);
}

bool func_539()
{
	if (func_855(4))
	{
		return Global_1940186.f_21;
	}
	return func_856();
}

var func_540(int iParam0, int iParam1)
{
	return func_857(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_541(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<8> Var0;

	Var0.f_6 = iParam1;
	Var0.f_7 = iParam2;
	Var0.f_4 = iParam0;
	Var0.f_5 = Local_2028;
	func_858(&Var0, uParam3);
}

void func_542(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_805(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (func_806(Var0))
	{
		return;
	}
	if (func_588(Var0))
	{
		return;
	}
	func_808(iParam0, 2);
	func_807(iParam0, 3);
	func_807(iParam0, 6);
	func_859(Var0);
}

void func_543(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_805(iParam0) };
	if (!func_28(Var0))
	{
		return;
	}
	if (!func_806(Var0))
	{
		return;
	}
	if (func_588(Var0))
	{
		return;
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	}
	if (bParam1)
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
	}
	func_808(iParam0, 3);
	func_860(Var0, 1, bParam2, bParam3);
}

void func_544(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_21() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_463(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_465(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_465(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

void func_545()
{
	PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
	PAD::ENABLE_CONTROL_ACTION(1, -6.00134E-14f, true);
	PAD::ENABLE_CONTROL_ACTION(1, -1.422437E+11f, true);
}

void func_546(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 1048576))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
	}
	func_319(&(Local_363[Local_2028.f_634 /*52*/]), 128);
	func_319(&(Local_363[Local_2028.f_634 /*52*/]), 1048576);
	func_319(&(Local_363[Local_2028.f_634 /*52*/]), 256);
	func_319(&(Local_363[Local_2028.f_634 /*52*/]), 512);
	iVar0 = Local_363[Local_2028.f_634 /*52*/].f_46;
	Local_363[Local_2028.f_634 /*52*/].f_46 = -1;
	Local_2028.f_636 = -1;
	if (!bParam0)
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if ((((ENTITY::DOES_ENTITY_EXIST(iVar1) && !PED::IS_PED_DEAD_OR_DYING(iVar1, true)) && iVar0 != -1) && func_861(iVar0, &iVar2)) && ENTITY::GET_ENTITY_MODEL(iVar2) == func_183())
	{
		PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
		ENTITY::DETACH_ENTITY(iVar2, true, true);
		TASK::_0x9EBD34958AB6F824(iVar2);
		TASK::TASK_CARRIABLE(iVar2, -8.964639E-39f, iVar1, 0, 0);
		ENTITY::SET_ENTITY_VISIBLE(iVar2, true);
		MISC::_0x7FA58CED69405F9A(iVar2, 3);
	}
}

char* func_547()
{
	return "giver";
}

char* func_548()
{
	return "RECIEVER";
}

char* func_549(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "";
		default:
			break;
	}
	return "";
}

struct<4> func_550(int iParam0, char* sParam1, char* sParam2)
{
	struct<4> Var0;
	struct<4> Var4;

	if (ANIMSCENE::GET_ANIM_SCENE_ENTITY_LOCATION_DATA(iParam0, sParam1, &Var4, !MISC::IS_STRING_NULL_OR_EMPTY(sParam2), sParam2, 2))
	{
		Var0 = { Var4 };
		Var0.f_3 = Var4.f_3.f_2;
	}
	return Var0;
}

bool func_551(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

float func_552(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_553(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2028.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_363[iParam0 /*52*/].f_2.f_4[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_554(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2028.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_363[iParam0 /*52*/].f_2.f_6[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_555()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_CARRYING_SOMETHING(iVar1))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_183())
		{
			return true;
		}
	}
	return false;
}

bool func_556(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_7 != iVar1)
		{
		}
		else if (func_201(iVar0, &Local_16, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_201(iVar0, &Local_16, 65536) || func_201(iVar0, &Local_16, 131072))
			{
			}
			else if (!func_862(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_557(int iParam0)
{
	return func_852(iParam0, 6);
}

bool func_558(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2.003139E+37f && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return true;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_559(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_560(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/].f_2;
}

void func_561(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (Local_2028.f_10 != -1.398992E+38f)
	{
		return;
	}
	if (!func_201(iParam0, &Local_16, 1024))
	{
		return;
	}
	if (func_201(iParam0, &Local_16, 32))
	{
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	if (((Local_16.f_16[iParam0 /*12*/].f_2 == -0.6089872f || Local_16.f_16[iParam0 /*12*/].f_2 == 0) || !func_437(iParam0, &iVar0, 1, 1)) || (!PED::IS_PED_HOGTIED(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, false)))
	{
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	iVar3 = func_866(iVar0, &uVar1, &iVar2);
	iVar5 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar0);
	if ((func_33(1) && func_867(&Local_2028, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))) && (Local_16.f_16[iParam0 /*12*/].f_7 == PLAYER::PLAYER_ID() || Local_16.f_16[iParam0 /*12*/].f_7 == 255))
	{
		if (iVar5 == 3 && PED::IS_PED_HOGTIED(iVar0))
		{
			bVar4 = PED::_0x3D9F958834AB9C30(iVar0) == Global_33;
		}
		else if (((iVar5 == 1 && !ENTITY::IS_ENTITY_DEAD(Global_33)) && PED::IS_PED_HOGTYING(Global_33)) && func_868(Global_33) == iVar0)
		{
			bVar4 = true;
		}
	}
	if (Local_16.f_16[iParam0 /*12*/].f_7 == PLAYER::PLAYER_ID())
	{
		if (((func_201(iParam0, &Local_16, 65536) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32)) || (func_201(iParam0, &Local_16, 131072) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))) || ((iVar3 == 0 && func_33(1)) && func_867(&Local_2028, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (bVar4)
	{
	}
	else if (iVar2 != PLAYER::PLAYER_ID())
	{
		if (iVar2 == 255)
		{
			iVar6 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar0);
			if (iVar6 == 8 || iVar6 == 9)
			{
				return;
			}
		}
		func_863(iParam0);
		func_864(iParam0);
		func_865(iParam0);
		return;
	}
	func_869(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_33) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_33))
	{
		func_870(iParam0);
	}
	else
	{
		func_864(iParam0);
	}
	if (((((func_33(1) && !func_862(iParam0, 255)) && func_867(&Local_2028, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_33(8192))) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar0)) && iVar5 != 9) && iVar5 != 8)
	{
		func_871(iParam0);
	}
	else
	{
		func_865(iParam0);
	}
}

void func_562(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_271(iParam0, 64))
	{
		if (Local_16.f_16[iParam0 /*12*/].f_2 != 1.556252E-24f && func_271(iParam0, 9.403955E-38f))
		{
			bVar0 = true;
		}
		if ((!bVar0 && PED::IS_PED_HUMAN(iParam1)) && !func_201(iParam0, &Local_16, 32768))
		{
			MISC::_0xF63FA29D4A9ACA86(iParam1, func_872(iParam1));
			PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_872(iParam1)));
		}
		func_272(iParam0, 64);
	}
	if (!func_271(iParam0, 1.504633E-36f) && func_33(1))
	{
		if (Local_16.f_16[iParam0 /*12*/].f_2 != 1.556252E-24f && func_271(iParam0, 9.403955E-38f))
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			iVar1 = func_873(iParam0, iParam1, 1);
			if (iVar1 != 0)
			{
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(iVar1);
			}
		}
		if (!bVar0)
		{
			switch (func_560(iParam0, &Local_16))
			{
				case joaat("PASSENGER_VIP"):
					switch (Local_2028.f_10)
					{
						case joaat("COACH_HOLDUP_ROBBERY"):
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_874());
							PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_874()));
							func_272(iParam0, 2097152);
							break;
						case joaat("COACH_HOLDUP_KIDNAP"):
							MISC::_0xF63FA29D4A9ACA86(iParam1, func_875());
							PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_875()));
							func_272(iParam0, 2097152);
							break;
					}
					break;
				default:
					if ((PED::IS_PED_HUMAN(iParam1) && Local_16.f_16[iParam0 /*12*/].f_2 != 9.716892E+17f) && !func_201(iParam0, &Local_16, 32768))
					{
						MISC::_0xF63FA29D4A9ACA86(iParam1, func_876());
						PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iParam1, MISC::GET_HASH_KEY(func_876()));
						func_272(iParam0, 2097152);
					}
					break;
			}
		}
		func_272(iParam0, 1.504633E-36f);
	}
}

void func_563(int iParam0, int iParam1)
{
}

void func_564(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	int iVar14;

	if (func_201(iParam0, &Local_16, 2))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_5) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_16[iParam0 /*12*/].f_5))
		{
			iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[iParam0 /*12*/].f_5);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
			}
		}
		return;
	}
	if (func_560(iParam0, &Local_16) != 13.22463f)
	{
		return;
	}
	if (func_877(iParam0, &Local_16) != 22)
	{
		return;
	}
	if (!func_201(iParam0, &Local_16, 1))
	{
		return;
	}
	if (func_201(iParam0, &Local_16, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[iParam0 /*12*/].f_5);
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(iVar0, false) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (func_397(iParam0, 0))
	{
		return;
	}
	sVar2 = func_547();
	if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, sVar2, false)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar2, iParam1, 0);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iVar0, func_549(0), true);
		func_878(iParam0, iVar0, iParam1);
	}
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(iVar0, &vVar3, &vVar6, 2);
	if (BUILTIN::VDIST(vVar3, ENTITY::GET_ENTITY_COORDS(iParam1, false, false)) > 1f)
	{
		func_878(iParam0, iVar0, iParam1);
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false) && !ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar0, false))
	{
		iVar9 = ANIMSCENE::_GET_ANIM_SCENE_PED(iVar0, func_548(), false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			if (!PED::IS_PED_A_PLAYER(iVar9))
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_548(), iVar9);
			}
			else if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar9) != Local_16.f_16[iParam0 /*12*/].f_7)
			{
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar0, func_548(), iVar9);
			}
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Local_16.f_16[iParam0 /*12*/].f_7))
		{
			return;
		}
		iVar10 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(Local_16.f_16[iParam0 /*12*/].f_7);
		if (func_41(&(Local_363[iVar10 /*52*/]), 256))
		{
			return;
		}
		if (!func_41(&(Local_363[iVar10 /*52*/]), 1048576))
		{
			return;
		}
		iVar1 = PLAYER::GET_PLAYER_PED(Local_16.f_16[iParam0 /*12*/].f_7);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_548(), iVar1, 0);
		vVar11 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
		func_390(&vVar11, 0f);
		vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		vVar6 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam1) };
		vVar3 = { vVar3.x, vVar3.y, vVar11.z };
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, vVar3, vVar6, 2);
		if (func_879(iParam1, &iVar14))
		{
			PED::DETACH_CARRIABLE_ENTITY(iVar14, false, false);
			ENTITY::SET_ENTITY_VISIBLE(iVar14, true);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_880(), iVar14, 0);
		}
		ANIMSCENE::START_ANIM_SCENE(iVar0);
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar0, false) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		func_541(6, PLAYER::PLAYER_ID(), iParam0, func_540(0, 8));
	}
}

void func_565(int iParam0, int iParam1)
{
	if (Local_16.f_16[iParam0 /*12*/].f_2 == -0.6089872f || Local_16.f_16[iParam0 /*12*/].f_2 == 1.556252E-24f)
	{
		return;
	}
	if (!func_201(iParam0, &Local_16, 9.403955E-38f) && !func_201(iParam0, &Local_16, 3.85186E-34f))
	{
		return;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		return;
	}
	if (func_271(iParam0, 32) || func_271(iParam0, 3.85186E-34f))
	{
		return;
	}
	if (func_201(iParam0, &Local_16, 9.403955E-38f))
	{
		func_881(iParam1, 0);
		func_272(iParam0, 32);
	}
	else if (func_201(iParam0, &Local_16, 3.85186E-34f))
	{
		func_882(iParam1, 6);
		func_272(iParam0, 3.85186E-34f);
	}
}

void func_566(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (func_41(uParam3[iVar0 /*52*/], 2))
	{
		return;
	}
	if (func_883(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_884(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_885(iParam1))
	{
		func_115(uParam3[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_886(iParam1, &(uParam4->f_171)))
	{
		func_115(uParam3[iVar0 /*52*/], uParam4);
		return;
	}
	if (func_887(uParam2, uParam3))
	{
		func_115(uParam3[iVar0 /*52*/], uParam4);
		return;
	}
}

void func_567(int iParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_271(iParam0, 8192) || func_271(iParam0, 16))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		func_438(iParam0, 16384);
		return;
	}
	fVar0 = func_552(iParam1, Global_34, 1);
	if (fVar0 > 1103626240)
	{
		func_438(iParam0, 16384);
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		func_438(iParam0, 16384);
		return;
	}
	if (!PED::IS_PED_HEADTRACKING_PED(iParam1, Global_33) || fVar0 > 1094713344)
	{
		iVar1 = 1127481344; /* Float: 180f */
		if (Local_16.f_16[iParam0 /*12*/].f_2 == 2.418248E-09f && !func_33(256))
		{
			iVar1 = 1133903872; /* Float: 300f */
		}
		if (!func_888(iParam1, Global_33, iVar1))
		{
			func_438(iParam0, 16384);
			return;
		}
		iVar2 = func_267(Global_33);
		if (AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(Global_33, false))
		{
			iVar2 = PED::_GET_TRANSPORT_PED_IS_SEATED_ON(Global_33);
		}
		if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, iVar2, 17))
		{
			func_438(iParam0, 16384);
			return;
		}
	}
	func_272(iParam0, 16384);
}

void func_568(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	float fVar2;
	bool bVar3;

	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))
		{
			bVar1 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	switch (Local_16.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("DROPOFF_GUARD"):
			if (!bVar0 && !bVar1)
			{
				return;
			}
			if (func_201(iParam0, &Local_16, 2048) != bVar1)
			{
				return;
			}
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 4194304) && !func_889(iParam0, 8, &Local_363, 1))
			{
				func_890(iParam0, iParam1, 8, &Local_363, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
				func_891(iParam0, 8, &(Local_363[Local_2028.f_634 /*52*/]));
				func_319(&(Local_363[Local_2028.f_634 /*52*/]), 4194304);
				return;
			}
			fVar2 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
			if (func_889(iParam0, 6, &Local_363, 1))
			{
				if (fVar2 > 1114636288)
				{
					func_891(iParam0, 6, &(Local_363[Local_2028.f_634 /*52*/]));
					func_891(iParam0, 9, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				else if (fVar2 < 1099956224)
				{
					switch (Local_2028.f_10)
					{
						case joaat("COACH_HOLDUP_ROBBERY"):
							bVar3 = func_555();
							break;
						case joaat("COACH_HOLDUP_KIDNAP"):
							bVar3 = func_892(1);
							break;
					}
					if (bVar3)
					{
						func_890(iParam0, iParam1, 9, &Local_363, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
					}
					return;
				}
			}
			if (fVar2 > 1101004800)
			{
				return;
			}
			func_890(iParam0, iParam1, 6, &Local_363, PLAYER::PLAYER_PED_ID(), 1, 0, 0);
			break;
		case joaat("STATIONARY_ESCORT"):
			if (Local_16.f_16[iParam0 /*12*/].f_3 == 38 || Local_16.f_16[iParam0 /*12*/].f_3 == 39)
			{
				func_891(iParam0, 6, &(Local_363[Local_2028.f_634 /*52*/]));
				func_891(iParam0, 11, &(Local_363[Local_2028.f_634 /*52*/]));
				func_891(iParam0, 1, &(Local_363[Local_2028.f_634 /*52*/]));
			}
			break;
		case joaat("SHOTGUN_RIDER"):
			if (Local_16.f_16[iParam0 /*12*/].f_3 == 7)
			{
				func_891(iParam0, 6, &(Local_363[Local_2028.f_634 /*52*/]));
				func_891(iParam0, 11, &(Local_363[Local_2028.f_634 /*52*/]));
				func_891(iParam0, 1, &(Local_363[Local_2028.f_634 /*52*/]));
			}
			break;
	}
}

int func_569(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/];
}

void func_570(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_201(iParam0, uParam1, 32))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_18);
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_2 != 9.716892E+17f)
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_15);
		return;
	}
	if (func_201(iParam0, uParam1, 2048))
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_16);
		return;
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]), uParam3->f_10.f_17);
		return;
	}
}

void func_571(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (((Local_16.f_16[iParam0 /*12*/].f_2 == 1.020647E+37f || Local_16.f_16[iParam0 /*12*/].f_2 == 2.418248E-09f) || Local_16.f_16[iParam0 /*12*/].f_2 == -8.051931E+31f) || Local_16.f_16[iParam0 /*12*/].f_2 == -1.235031E+20f)
	{
		iVar0 = Local_16.f_16[iParam0 /*12*/].f_11;
		if (iVar0 < 0 || iVar0 >= 3)
		{
			return;
		}
		iVar1 = PED::_GET_PED_DEFENSIVE_VOLUME(iParam1, 0);
		if (iVar1 == Local_2028.f_621[iVar0])
		{
			return;
		}
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(iParam1, Local_2028.f_621[iVar0], false, false, false);
	}
}

void func_572(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	iVar2 = func_702(iParam0, uParam1);
	vVar4 = { fParam3->f_10.f_2 };
	iVar7 = 1092616192; /* Float: 10f */
	if (func_582(iVar0))
	{
		return;
	}
	iVar10 = func_895(uParam1->f_16[iParam0 /*12*/].f_11, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 2:
			func_896(iVar2);
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			if (func_33(256))
			{
				return;
			}
			iVar8 = 1083179008; /* Float: 4.5f */
			if (func_897(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/].f_11 - 1) /*4*/]);
				fVar9 = func_898((uParam1->f_16[iParam0 /*12*/].f_11 - 1), uParam1->f_16[iParam0 /*12*/].f_11, fParam3);
				func_899(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, iVar3, iVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_900(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, iVar8, iVar10, fParam3);
				return;
			}
			func_901(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar0, vVar4, iVar8, iVar10, fParam3, iVar7);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar2)
			{
				return;
			}
			func_890(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			if (func_33(256))
			{
				func_902(iVar1);
				return;
			}
			iVar8 = 1092616192; /* Float: 10f */
			if (func_903(iVar0))
			{
				iVar8 = 0f;
			}
			iVar11 = func_904(iVar2, uParam2, 100f);
			if (func_897(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, fParam3))
			{
				iVar3 = NETWORK::NET_TO_VEH(uParam1->f_3[(uParam1->f_16[iParam0 /*12*/].f_11 - 1) /*4*/]);
				fVar9 = func_898((uParam1->f_16[iParam0 /*12*/].f_11 - 1), uParam1->f_16[iParam0 /*12*/].f_11, fParam3);
				func_905((uParam1->f_16[iParam0 /*12*/].f_11 - 1), iVar1, iVar11, iVar0, iVar3, iVar8, iVar10, fVar9);
				return;
			}
			if (func_55(uParam1, 65536))
			{
				func_906(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, iVar8, iVar10, fParam3);
				return;
			}
			func_907(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, vVar4, iVar8, iVar10, fParam3, iVar7);
			break;
		case 4:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			if (func_55(uParam1, 65536))
			{
				func_906(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, 1092616192 /* Float: 10f */, iVar10, fParam3);
				return;
			}
			func_907(uParam1->f_16[iParam0 /*12*/].f_11, iVar1, iVar11, iVar0, vVar4, 0f, iVar10, fParam3, iVar7);
			break;
		case 1:
			if (!func_908(iVar0, -1, 1))
			{
				return;
			}
			if (PED::IS_PED_ON_VEHICLE(iVar2, false))
			{
				func_909(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 1101004800 /* Float: 20f */, 2.350989E-38f, 4);
			}
			func_910(iVar1, iVar0, -1, 2f, -1, 1);
			break;
	}
}

void func_573(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	iVar2 = func_702(iParam0, uParam1);
	fVar4 = 2.350989E-38f;
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			break;
		case 35:
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 6, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar2, 3, true);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return;
			}
			if (VEHICLE::_IS_VEHICLE_ON_FIRE(PED::GET_VEHICLE_PED_IS_IN(iVar2, true)))
			{
				fVar4 = 4161;
			}
			iVar3 = func_904(iVar2, &Local_363, 100f);
			if (iVar3 == func_911())
			{
				iVar3 = 0;
			}
			if (func_912(iVar1, fVar4, iVar3))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			}
			break;
		case 34:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			func_913(iVar1, 0, 1);
			break;
		case 36:
			func_909(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 1120403456 /* Float: 100f */, 0, 4);
			break;
	}
}

void func_574(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_702(iParam0, uParam1);
	iVar2 = func_569(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 14:
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_910(iVar2, iVar0, -2, 2f, -1, 0);
			break;
		case 15:
			func_896(iVar1);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
			break;
		case 16:
			func_913(iVar2, 0, 0);
			break;
	}
}

void func_575(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	vector3 vVar6;

	iVar1 = func_569(iParam0, uParam1);
	func_581(iParam0, &iVar0);
	iVar2 = func_702(iParam0, uParam1);
	if (func_201(iParam0, uParam1, 32))
	{
		if ((func_55(&Local_16, 524288) && iParam0 == Local_16.f_328) && (func_55(&Local_16, 2.350989E-38f) || func_55(&Local_16, 9.403955E-38f)))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 2, true);
		}
		else
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 2, false);
		}
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 1, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 3, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 7, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 11, false);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar2, 10, false);
		if (PED::_GET_LOOTING_FLAG(iVar2, 0))
		{
			PED::SET_LOOTING_FLAG(iVar2, 0, false);
		}
		if (PED::_GET_LOOTING_FLAG(iVar2, 1))
		{
			PED::SET_LOOTING_FLAG(iVar2, 1, false);
		}
		ENTITY::SET_ENTITY_INVINCIBLE(iVar2, true);
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar2, false);
		return;
	}
	if (func_201(iParam0, &Local_16, 1.504633E-36f))
	{
		if (PED::_GET_LOOTING_FLAG(iVar2, 0))
		{
			PED::SET_LOOTING_FLAG(iVar2, 0, false);
		}
		if (PED::_GET_LOOTING_FLAG(iVar2, 1))
		{
			PED::SET_LOOTING_FLAG(iVar2, 1, false);
		}
	}
	if ((Local_16.f_16[iParam0 /*12*/].f_3 != 0 && Local_16.f_16[iParam0 /*12*/].f_3 != 17) && Local_16.f_16[iParam0 /*12*/].f_3 != 18)
	{
		if (PED::GET_PED_CONFIG_FLAG(iVar2, 277, false))
		{
			PED::SET_PED_CONFIG_FLAG(iVar2, 277, false);
		}
	}
	switch (func_877(iParam0, uParam1))
	{
		case 25:
			if (!func_558(iVar2, -0.2632248f))
			{
				iVar5 = func_914(iParam0);
				if (iVar5 != 0)
				{
					func_915(iVar1, iVar5, Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
				}
				else
				{
					func_916(iVar1, Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
				}
			}
			func_917(iParam0, uParam1, 26);
			break;
		case 26:
			func_918(iVar1);
			func_917(iParam0, uParam1, 25);
			break;
		case 17:
			func_896(iVar2);
			if (func_55(uParam1, 16))
			{
				func_890(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
				if (!func_271(iParam0, 1048576) && func_919(iVar2))
				{
					func_272(iParam0, 1048576);
				}
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
		case 18:
			func_890(iParam0, iVar2, 1, uParam2, 0, 0, 1, 0);
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar2, false))
			{
				return;
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_912(iVar1, 2.350989E-38f, 0);
			break;
		case 20:
			func_890(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_201(iParam0, &Local_16, 16384))
			{
				func_890(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_890(iParam0, iVar2, 5, uParam2, 0, 0, 1, 0);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (!func_920(uParam2, iParam0, &iVar3))
			{
				iVar3 = func_904(iVar2, uParam2, 1103626240 /* Float: 25f */);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				func_921(iVar1, iVar3);
			}
			func_921(iVar1, 0);
			break;
		case 19:
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (!func_558(iVar2, 2.40763E-20f))
			{
				iVar3 = func_904(iVar2, uParam2, 1103626240 /* Float: 25f */);
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_922(&iVar2, 10000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			if (func_909(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 1074580685 /* Float: 2.2f */, 256, 6) && func_923(iVar2, 1074580685 /* Float: 2.2f */, &iVar4))
			{
				TASK::ADD_FLEE_TARGET_PED(iVar2, iVar4, -1f);
			}
			break;
		case 21:
			if (func_201(iParam0, &Local_16, 16384) && !func_889(iParam0, 10, &Local_363, 0))
			{
				if (func_924(iVar2, 13.22463f))
				{
					func_925(iParam0, 10, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				else
				{
					func_890(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
				}
			}
			else
			{
				func_890(iParam0, iVar2, 2, uParam2, 0, 0, 1, 1);
			}
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			if (func_201(iParam0, uParam1, 4))
			{
				return;
			}
			iVar4 = func_904(iVar2, &Local_363, 100f);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
			}
			else
			{
				vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			}
			if (func_909(iVar1, vVar6, 1128792064 /* Float: 200f */, 1, 3))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					TASK::ADD_FLEE_TARGET_PED(iVar2, iVar4, -1f);
				}
			}
			break;
		case 27:
			func_926(iVar1);
			break;
		case 22:
			PED::SET_PED_CONFIG_FLAG(iVar2, 297, true);
			PED::SET_PED_COMBAT_MOVEMENT(iVar2, 0);
			PED::SET_PED_CONFIG_FLAG(iVar2, 121, true);
			PED::_CLEAR_PED_GRAPPLE_FLAG(iVar2, 29);
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
			func_890(iParam0, iVar2, 4, uParam2, 0, 0, 1, 0);
			if (func_201(iParam0, &Local_16, 16384))
			{
				func_890(iParam0, iVar2, 10, uParam2, 0, 0, 1, 0);
			}
			if (PED::_0xB7DBB2986B87E230(iVar2, 0.5f))
			{
				func_890(iParam0, iVar2, 5, uParam2, 0, 0, 1, 1);
			}
			if (uParam1->f_16[iParam0 /*12*/].f_7 != 255)
			{
				func_890(iParam0, iVar2, 3, uParam2, PLAYER::GET_PLAYER_PED(uParam1->f_16[iParam0 /*12*/].f_7), 0, 1, 0);
			}
			else if (!func_558(iVar2, -2.113872E-16f))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_5) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(NETWORK::_NET_TO_ANIM_SCENE(uParam1->f_16[iParam0 /*12*/].f_5), false))
				{
					return;
				}
				iVar3 = func_904(iVar2, uParam2, 1103626240 /* Float: 25f */);
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					func_921(iVar1, iVar3);
				}
				func_921(iVar1, 0);
				return;
			}
			break;
		case 23:
			if (!func_927(iVar2))
			{
				return;
			}
			func_890(iParam0, iVar2, 3, uParam2, 0, 0, 1, 0);
			func_928(iVar1);
			break;
		case 28:
			PED::SET_PED_CONFIG_FLAG(iVar2, 168, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, false);
			break;
	}
}

void func_576(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	iVar2 = func_702(iParam0, uParam1);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_1))
	{
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/].f_1);
	if (ENTITY::IS_ENTITY_DEAD(iVar3))
	{
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 29:
			if (func_55(uParam1, 16))
			{
				iVar4 = func_904(iVar2, uParam2, 100f);
				func_929(iVar1, iVar4);
			}
			else
			{
				iVar4 = func_930(iVar2, 100f);
				func_931(iVar1, iVar4, 5000, 0, 31, 0);
			}
			if (func_932(iParam0, iVar2, uParam1))
			{
				if (func_558(iVar2, 2.066914E+13f))
				{
					TASK::CLEAR_PED_TASKS(iVar2, true, false);
				}
			}
			else
			{
				func_933(iVar1, iVar0, uParam1->f_16[iParam0 /*12*/].f_8, 1071644672 /* Float: 1.75f */);
			}
			break;
		case 30:
			func_913(iVar1, 0, 1);
			break;
	}
}

void func_577(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	iVar2 = func_702(iParam0, uParam1);
	iVar4 = Local_16.f_16[iParam0 /*12*/].f_7;
	switch (func_877(iParam0, uParam1))
	{
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == iVar2)
			{
				return;
			}
			func_910(iVar1, iVar0, 0, 2f, -1, 1);
			break;
		case 7:
			if (!func_934(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, 9.67248E+27f, 0, false))
				{
					func_935(iParam0, 9.67248E+27f, 1);
				}
				else
				{
					func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			break;
		case 8:
			if (!func_934(iVar2))
			{
				if (WEAPON::HAS_PED_GOT_WEAPON(iVar2, 9.67248E+27f, 0, false))
				{
					func_935(iParam0, 9.67248E+27f, 1);
				}
				else
				{
					func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_889(iParam0, 9, &Local_363, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_924(iVar2, 0))
				{
					func_890(iParam0, iVar2, 9, &Local_363, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_925(iParam0, 9, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_936(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 9:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			func_918(iVar1);
			if (!func_889(iParam0, 6, &Local_363, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_924(iVar2, 0))
				{
					func_890(iParam0, iVar2, 6, &Local_363, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_925(iParam0, 6, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_922(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 10:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_558(iVar2, 2.075579E+20f))
			{
				iVar5 = PLAYER::GET_PLAYER_PED(Local_16.f_16[iParam0 /*12*/].f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar5) || func_937(iVar2, &iVar5, &uVar6, 25f))
				{
					if (func_934(iVar2))
					{
						func_938(iVar1, iVar5);
					}
					else
					{
						func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
					}
				}
				else
				{
					func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar2, false, false), 1);
				}
			}
			if (!func_889(iParam0, 11, &Local_363, 0))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (!func_924(iVar2, 0))
				{
					func_890(iParam0, iVar2, 11, &Local_363, PLAYER::GET_PLAYER_PED(iVar4), 0, 0, 0);
				}
				else
				{
					func_925(iParam0, 11, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar3))
				{
					func_922(&iVar2, 15000, iVar3, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
			{
				return;
			}
			iVar7 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (func_123(iVar7, 1, 1))
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar4);
				if (Local_363[iVar7 /*52*/].f_47 > 44000 && !func_889(iParam0, 0, &Local_363, 0))
				{
					if (!func_924(iVar2, 0))
					{
						func_890(iParam0, iVar2, 0, &Local_363, iVar3, 0, 0, 0);
					}
				}
				else if (Local_363[iVar7 /*52*/].f_47 > 35000 && !func_889(iParam0, 1, &Local_363, 0))
				{
					if (func_924(iVar2, 0))
					{
						func_925(iParam0, 1, &(Local_363[Local_2028.f_634 /*52*/]));
					}
					else
					{
						func_890(iParam0, iVar2, 1, &Local_363, iVar3, 0, 0, 0);
					}
				}
			}
			break;
		case 11:
			func_890(iParam0, iVar2, 0, uParam2, 0, 0, 1, 1);
			func_913(iVar1, 1, 0);
			break;
		case 12:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar2)
			{
				return;
			}
			func_939(iVar1, iVar0);
			break;
	}
}

void func_578(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	vector3 vVar10;
	int iVar13;
	int iVar14;
	int iVar15;

	iVar0 = func_702(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	if (func_201(iParam0, uParam1, 2048))
	{
		iVar6 = 1;
		iVar2 = fParam3->f_620;
		if (VOLUME::DOES_VOLUME_EXIST(iVar2))
		{
			vVar3 = { VOLUME::GET_VOLUME_COORDS(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	else
	{
		iVar2 = fParam3->f_619;
		if (VOLUME::DOES_VOLUME_EXIST(iVar2))
		{
			vVar3 = { VOLUME::GET_VOLUME_COORDS(iVar2) };
		}
		else
		{
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(iVar2))
	{
		PED::SET_PED_DEFENSIVE_AREA_VOLUME(iVar0, iVar2, false, false, false);
	}
	fVar8 = 1.617293E+23f;
	switch (func_877(iParam0, uParam1))
	{
		case 31:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_934(iVar0) && !func_271(iParam0, 32768))
			{
				func_896(iVar0);
				return;
			}
			if (!func_271(iParam0, 16))
			{
				if (!func_889(iParam0, 7, &Local_363, 0) && func_940(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 1117782016 /* Float: 80f */, &iVar7, 1101004800 /* Float: 20f */, iVar6, 1))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::IS_PED_EXITING_SCENARIO(iVar0, false))
					{
						PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(iVar0, func_941(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					if (func_942(iVar1, fVar8, PLAYER::GET_PLAYER_PED(iVar7), 1))
					{
						func_925(iParam0, 7, &(Local_363[Local_2028.f_634 /*52*/]));
					}
					return;
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_231(fVar8), func_943(fVar8), 1))
				{
					return;
				}
				if (func_944(iVar0, 1101004800 /* Float: 20f */, &iVar7))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::IS_PED_EXITING_SCENARIO(iVar0, false))
					{
						PED::SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(iVar0, func_941(iVar7));
						TASK::CLEAR_PED_TASKS(iVar0, true, false);
					}
					func_918(iVar1);
					return;
				}
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				return;
			}
			iVar9 = func_914(iParam0);
			if (iVar9 == 0)
			{
				func_916(iVar1, Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
			}
			else
			{
				func_915(iVar1, iVar9, Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
			}
			break;
		case 33:
			if (Local_16.f_328 == -1)
			{
				return;
			}
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::IS_PED_EXITING_SCENARIO(iVar0, true))
			{
				PED::SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(iVar0);
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				return;
			}
			if (Local_2028.f_10 == -1.398992E+38f)
			{
				if (func_437(Local_16.f_328, &iVar13, 0, 0))
				{
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar13, false, false) };
				}
			}
			else if (Local_2028.f_10 == -1.484548E+24f)
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[Local_16.f_328 /*5*/]))
				{
					iVar14 = NETWORK::NET_TO_OBJ(Local_16.f_257[Local_16.f_328 /*5*/]);
					vVar10 = { ENTITY::GET_ENTITY_COORDS(iVar14, false, false) };
				}
			}
			if (func_381(vVar10))
			{
				return;
			}
			if (func_558(iVar0, 3.034861E-30f))
			{
				return;
			}
			if (PED::IS_PED_CARRYING_SOMETHING(iVar0))
			{
				return;
			}
			TASK::OPEN_SEQUENCE_TASK(&iVar15);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar10, 1f, 20000, 2f, 1048576, 40000f);
			if (ENTITY::DOES_ENTITY_EXIST(iVar13))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar13);
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iVar14))
			{
				TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, iVar14);
			}
			func_945(iVar0, &iVar15, 0, 0, 1, 1);
			break;
		case 32:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 12, true);
			if (PED::IS_PED_USING_ANY_SCENARIO(iVar0) && !TASK::IS_PED_EXITING_SCENARIO(iVar0, false))
			{
				PED::SET_PED_PANIC_EXIT_SCENARIO(iVar0, vVar3);
			}
			break;
	}
}

void func_579(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;
	bool bVar7;

	iVar0 = func_702(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	if (!func_889(iParam0, 0, &Local_363, 0) && PED::IS_PED_IN_COMBAT(iVar0, 0))
	{
		func_890(iParam0, iVar0, 0, &Local_363, 0, 0, 1, 1);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 44:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, true);
			if (func_946(iParam0, &iVar2))
			{
				func_947(iVar1, ENTITY::GET_ENTITY_COORDS(iVar2, false, false), 1128792064 /* Float: 200f */, 0, 0);
			}
			else
			{
				func_947(iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 1128792064 /* Float: 200f */, 0, 0);
			}
			break;
		case 45:
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 168, false);
			if (func_558(iVar0, 2.40763E-20f))
			{
				return;
			}
			iVar3 = func_904(iVar0, &Local_363, 1128792064 /* Float: 200f */);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				bVar7 = func_948(iVar1, iVar3, 4, 1128792064 /* Float: 200f */, 2.938736E-38f);
			}
			else
			{
				vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
				bVar7 = func_909(iVar1, vVar4, 1128792064 /* Float: 200f */, 2.938736E-38f, 4);
			}
			if (bVar7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar3))
				{
					TASK::ADD_FLEE_TARGET_PED(iVar0, iVar3, -1f);
				}
				if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
				{
					TASK::_ADD_FLEE_TARGET_COORDS(iVar0, VOLUME::GET_VOLUME_COORDS(Local_2028.f_619), -1f);
				}
			}
			break;
	}
}

void func_580(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;
	vector3 vVar9;

	iVar0 = func_702(iParam0, uParam1);
	iVar1 = func_569(iParam0, uParam1);
	bVar3 = func_581(iParam0, &iVar2);
	switch (func_877(iParam0, uParam1))
	{
		case 38:
			if (func_558(iVar0, -0.2632248f) || PED::IS_PED_ON_MOUNT(iVar0))
			{
				return;
			}
			if (func_914(iParam0) != 0)
			{
				return;
			}
			if (func_271(iParam0, 1))
			{
				if ((!bVar3 || PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false)) || PED::IS_PED_ENTERING_ANY_TRANSPORT(iVar0))
				{
					return;
				}
				func_910(iVar1, iVar2, func_678(&Local_2028, iParam0), 2f, -1, 1);
				return;
			}
			func_916(iVar1, Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
			break;
		case 39:
			if (func_558(iVar0, -0.2632248f))
			{
				return;
			}
			if (func_934(iVar0) && !func_271(iParam0, 32768))
			{
				func_896(iVar0);
				return;
			}
			func_915(iVar1, func_914(iParam0), Local_2028.f_45[iParam0 /*6*/].f_2, func_677(&Local_2028, iParam0));
			break;
		case 40:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_889(iParam0, 9, &Local_363, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_924(iVar0, -1.891798E-38f))
				{
					func_890(iParam0, iVar0, 9, &Local_363, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
					func_918(iVar1);
				}
				else
				{
					func_925(iParam0, 9, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_936(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 41:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			func_918(iVar1);
			if (!func_889(iParam0, 6, &Local_363, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_924(iVar0, -1.891798E-38f))
				{
					func_890(iParam0, iVar0, 6, &Local_363, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_925(iParam0, 6, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_922(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
			}
			break;
		case 42:
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
			{
				return;
			}
			if (!func_558(iVar0, 2.075579E+20f))
			{
				iVar6 = PLAYER::GET_PLAYER_PED(Local_16.f_16[iParam0 /*12*/].f_7);
				if (!ENTITY::IS_ENTITY_DEAD(iVar6) || func_937(iVar0, &iVar6, &uVar7, 25f))
				{
					if (func_934(iVar0))
					{
						func_938(iVar1, iVar6);
					}
					else
					{
						func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
					}
				}
				else
				{
					func_935(iParam0, WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false), 1);
				}
			}
			if (!func_889(iParam0, 11, &Local_363, 0))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (!func_924(iVar0, -1.891798E-38f))
				{
					func_890(iParam0, iVar0, 11, &Local_363, PLAYER::GET_PLAYER_PED(iVar5), 0, 0, 0);
				}
				else
				{
					func_925(iParam0, 11, &(Local_363[Local_2028.f_634 /*52*/]));
				}
				if (!ENTITY::IS_ENTITY_DEAD(iVar4))
				{
					func_922(&iVar0, 15000, iVar4, 1, 0, 0, 0, 1);
				}
				return;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar5))
			{
				return;
			}
			iVar8 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar5);
			if (func_123(iVar8, 1, 1))
			{
				iVar4 = PLAYER::GET_PLAYER_PED(iVar5);
				if (Local_363[iVar8 /*52*/].f_47 > 44000 && !func_889(iParam0, 0, &Local_363, 0))
				{
					if (!func_924(iVar0, -1.891798E-38f))
					{
						func_890(iParam0, iVar0, 0, &Local_363, iVar4, 0, 0, 0);
					}
				}
				else if (Local_363[iVar8 /*52*/].f_47 > 35000 && !func_889(iParam0, 1, &Local_363, 0))
				{
					if (func_924(iVar0, -1.891798E-38f))
					{
						func_925(iParam0, 1, &(Local_363[Local_2028.f_634 /*52*/]));
					}
					else
					{
						func_890(iParam0, iVar0, 1, &Local_363, iVar4, 0, 0, 0);
					}
				}
			}
			break;
		case 37:
			func_890(iParam0, iVar0, 0, &Local_363, 0, 0, 1, 1);
			func_913(iVar1, 0, 0);
			break;
		case 43:
			if (bVar3)
			{
				vVar9 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			}
			else
			{
				vVar9 = { Local_2028.f_45[iParam0 /*6*/].f_2 };
			}
			func_909(iVar1, vVar9, 1120403456 /* Float: 100f */, 2.350989E-38f, 3);
			break;
	}
}

bool func_581(int iParam0, int iParam1)
{
	if (Local_16.f_16[iParam0 /*12*/].f_11 < 0 || Local_16.f_16[iParam0 /*12*/].f_11 >= 3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_3[Local_16.f_16[iParam0 /*12*/].f_11 /*4*/]))
	{
		return false;
	}
	*iParam1 = NETWORK::NET_TO_VEH(Local_16.f_3[Local_16.f_16[iParam0 /*12*/].f_11 /*4*/]);
	return true;
}

bool func_582(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

Vector3 func_583(vector3 vParam0, float fParam3, vector3 vParam4)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	float fVar5;

	fVar5 = fParam3;
	while (fVar5 > 1135869952)
	{
		fVar5 = (fVar5 - 1135869952);
	}
	while (fVar5 < 1135869952)
	{
		fVar5 = (fVar5 + 1135869952);
	}
	fVar0 = vParam4.x;
	fVar1 = vParam4.y;
	func_949(&fVar0, &fVar1, fVar5);
	vVar2 = { (fVar0 + vParam0.x), (fVar1 + vParam0.y), (vParam0.z + vParam4.z) };
	return vVar2;
}

char* func_584()
{
	return "intimidated_on_feet_tough_guy";
}

void func_585(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		ENTITY::_0xCDB682BB47C02F0A(iParam0, 1.05237E-29f);
	}
}

void func_586(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	if (Local_2028.f_10 != -1.484548E+24f)
	{
		return;
	}
	if (func_202(iParam0, &Local_16, 2) || func_202(iParam0, &Local_16, 16))
	{
		func_950(iParam0);
		func_951(iParam0);
		func_952(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iParam0 /*5*/]))
	{
		func_950(iParam0);
		func_951(iParam0);
		func_952(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(Local_16.f_257[iParam0 /*5*/]);
	iVar3 = func_866(iVar0, &iVar1, &iVar2);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_953(iParam0, 255))
	{
		if ((((iVar3 != 1 || ENTITY::IS_ENTITY_DEAD(iVar1)) || !NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1)) || !PED::IS_PED_IN_ANY_VEHICLE(iVar1, true)) || !func_114(PED::GET_VEHICLE_PED_IS_IN(iVar1, true), &Local_16, &uVar4))
		{
			func_954(iParam0);
		}
	}
	if (Local_16.f_257[iParam0 /*5*/].f_3 == PLAYER::PLAYER_ID())
	{
		if ((func_202(iParam0, &Local_16, 256) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32)) || (func_202(iParam0, &Local_16, 512) && func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64)))
		{
			iVar2 = PLAYER::PLAYER_ID();
		}
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		func_950(iParam0);
		func_951(iParam0);
		func_952(iParam0);
		return;
	}
	func_955(iParam0);
	if (!ENTITY::IS_ENTITY_DEAD(Global_33) && ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(iVar0, Global_33))
	{
		func_956(iParam0);
	}
	else
	{
		func_951(iParam0);
	}
	if ((func_33(1) && !func_957(iParam0, 255)) && func_867(&Local_2028, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64)))
	{
		func_958(iParam0);
	}
	else
	{
		func_952(iParam0);
	}
}

bool func_587(int iParam0, bool bParam1)
{
	if (func_80(iParam0, 16))
	{
		if (bParam1)
		{
			return false;
		}
		return func_80(iParam0, 32);
	}
	if (bParam1)
	{
		return false;
	}
	if (!func_33(1))
	{
		if (!func_55(&Local_16, 2.524355E-29f) || func_348(PLAYER::PLAYER_ID(), 1, 1))
		{
			return false;
		}
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608) && !func_957(iParam0, 255))
	{
		return false;
	}
	return true;
}

bool func_588(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_959(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_589(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				if (func_960(uParam0, bParam1, bParam2, bParam3, fParam4, uParam5, iVar0))
				{
					return true;
				}
				break;
		}
		iVar0++;
	}
	return false;
}

bool func_590(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	vector3 vVar1;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]) && BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(uParam0->f_2[iVar0], false, false)) < fParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_591(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_381(vParam2))
	{
		TASK::_0x2064B33F6E6B92D4(*uParam0, vParam2);
	}
	TASK::_0x9B6A58FDB0024F12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			TASK::_0xB8E3486D107F4194(*uParam0, 1119092736 /* Float: 90f */);
			TASK::_0x827A58CED9D4D5B4(*uParam0, 1127481344 /* Float: 180f */);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			break;
		case 42:
			TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			break;
		default:
			TASK::_0x827A58CED9D4D5B4(*uParam0, iParam6);
			if (fParam10 != 0f)
			{
				TASK::_0xB8E3486D107F4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 27:
		case 28:
		case 29:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			TASK::_0xE9225354FB7437A7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			TASK::_0xFF8AFCA532B500D4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			break;
	}
	if (fParam8 == -1138501878)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, ((1117782016 - 1109393408) / 2f));
				TASK::_0xB79817DB31FF72B9(*uParam0, 0f);
				break;
			case 4:
				TASK::_0x954451EA2D2120FB(*uParam0, 0.5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 2.5f);
				break;
			case 5:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 6:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 7:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 8:
				TASK::_0x954451EA2D2120FB(*uParam0, 5f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 9:
				TASK::_0x954451EA2D2120FB(*uParam0, 12f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 18f);
				break;
			case 10:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 0:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 55f);
				break;
			case 11:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				break;
			case 15:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 40f);
				break;
			case 14:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 16:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 30:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 2:
				TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 25f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 150f);
				break;
			case 18:
				TASK::_0x954451EA2D2120FB(*uParam0, 1f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 20f);
				break;
			case 20:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 21:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 22:
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				TASK::_0x954451EA2D2120FB(*uParam0, 2f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 26:
				TASK::_0x954451EA2D2120FB(*uParam0, 50f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 27:
				TASK::_0x954451EA2D2120FB(*uParam0, 3f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 6f);
				break;
			case 28:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 50f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 45f);
				break;
			case 29:
				TASK::_0x954451EA2D2120FB(*uParam0, 15f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 25f);
				TASK::_0xB79817DB31FF72B9(*uParam0, 20f);
				break;
			case 31:
				TASK::_0x954451EA2D2120FB(*uParam0, 80f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 140f);
				break;
			case 32:
				TASK::_0x954451EA2D2120FB(*uParam0, 40f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 125f);
				break;
			case 33:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 34:
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 10f);
				break;
			case 35:
				TASK::_0x954451EA2D2120FB(*uParam0, 60f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, 80f);
				break;
			case 36:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1092616192 /* Float: 10f */, 1109393408 /* Float: 40f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1112014848 /* Float: 50f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(0f, 1092616192 /* Float: 10f */, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(5f, 1097859072 /* Float: 15f */, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 1109393408 /* Float: 40f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1114636288 /* Float: 60f */, 1123024896 /* Float: 120f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1120403456 /* Float: 100f */, 1124204544 /* Float: 130f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1092616192 /* Float: 10f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 1114636288 /* Float: 60f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1114636288 /* Float: 60f */, 1117782016 /* Float: 80f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1117126656 /* Float: 75f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1115815936 /* Float: 65f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1109393408 /* Float: 40f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1090519040 /* Float: 8f */);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1109393408 /* Float: 40f */, 1120403456 /* Float: 100f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1112014848 /* Float: 50f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1115815936 /* Float: 65f */, 1118437376 /* Float: 85f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1092616192 /* Float: 10f */, 1112014848 /* Float: 50f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_961(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_961(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1123680256 /* Float: 125f */, 1122369536 /* Float: 115f */, 1120403456 /* Float: 100f */, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_962(vParam2, 1);
				iVar1 = func_963(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_961(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_961(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1121714176 /* Float: 110f */, 1126170624 /* Float: 160f */, 1095237632 /* Float: 12.5f */, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_961(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1117782016 /* Float: 80f */, 1125515264 /* Float: 150f */, 1099694080 /* Float: 17.5f */, iParam1));
				}
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x19BC99C678FBA139(*uParam0, 2, 0);
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 47:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, func_961(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_961(1125515264 /* Float: 150f */, 1128136704 /* Float: 190f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 1f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 5f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					TASK::_0x954451EA2D2120FB(*uParam0, 15f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					TASK::_0x4A7D73989F52EB37(*uParam0, 1f);
					TASK::_0xB79817DB31FF72B9(*uParam0, 65f);
					TASK::_0x954451EA2D2120FB(*uParam0, 35f);
					if (iParam5 != 19)
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 160f);
					}
					else
					{
						TASK::_0x0F4F6C4CE471259D(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		TASK::_0x954451EA2D2120FB(*uParam0, fParam8);
		TASK::_0x0F4F6C4CE471259D(*uParam0, fParam9);
	}
}

void func_592(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 2:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 3:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 73, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 7:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 8:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 9:
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 10:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 34, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			TASK::_0xBC3F847AE2C3DC65(*uParam0, 1103626240 /* Float: 25f */);
			TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
			break;
		case 11:
		case 30:
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 15:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 14:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 53:
			TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 21, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 9, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			break;
		case 16:
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 5, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 17:
			TASK::_0x2EB977293923C723(*uParam0, 1109393408 /* Float: 40f */);
			TASK::_0x764DB5A48390FBAD(*uParam0, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 18:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 21:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 22:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 23:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 24:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 25:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			break;
		case 26:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			break;
		case 27:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 31, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 74, 0);
			break;
		case 28:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 77, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 29:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 12, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			break;
		case 31:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 64, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 32:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			break;
		case 33:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 3, 0);
			break;
		case 34:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 1);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			break;
		case 35:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 68, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 1, 0);
			break;
		case 41:
			TASK::_0x19BC99C678FBA139(*uParam0, 80, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 81, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 47, 4, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 3, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 4, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 50:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 51:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_962(vParam2, 1) == 5)
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 53, 1, 0);
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 74, 1, 0);
			}
			else
			{
				TASK::_0x5D9B0BAAF04CF65B(*uParam0, 44, 1, 0);
			}
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 1, 0);
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 23, 3, 0);
			TASK::_0x19BC99C678FBA139(*uParam0, 75, 1);
			break;
		case 43:
			TASK::_0x5D9B0BAAF04CF65B(*uParam0, 50, 2, 1);
			TASK::_0x19BC99C678FBA139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

Vector3 func_593(vector3 vParam0)
{
	float fVar0;
	float fVar1;

	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

bool func_594(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_964(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_965())
	{
		return func_964(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_964(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

Vector3 func_595(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

void func_596(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_597(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_598(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_599(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

int func_600(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 953815.3f;
		case 2:
			return -3.336627E-36f;
		case 4:
			return -8.197036E+33f;
		case 8:
			return -1.014754E-12f;
		case 16:
			return 1.036268E-11f;
		default:
			break;
	}
	return 0;
}

bool func_601(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	var uVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (((iVar0 == Global_1072759.f_22943.f_1 || Global_1072759.f_22943.f_1 == 0) || iParam1 > Global_1072759.f_22943) || iParam1 == 4)
	{
		if (bParam2)
		{
			uVar1 = -1;
			MISC::COPY_SCRIPT_STRUCT(&(Global_1072759.f_22943), &uVar1, 2);
		}
		else
		{
			Global_1072759.f_22943.f_1 = iVar0;
			Global_1072759.f_22943 = iParam1;
		}
		if (AUDIO::_TRIGGER_MUSIC_EVENT_WITH_HASH(iParam0))
		{
		}
		return true;
	}
	return false;
}

void func_602(int iParam0)
{
	func_122(&(Local_2028.f_9), iParam0);
}

int func_603(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540), iVar1))
		{
			if (!bParam0 || MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_4), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_604(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_2), iVar1))
		{
			if (!bParam0 || MISC::_IS_BIT_FLAG_SET(&(Local_2028.f_540.f_6), iVar1))
			{
				iVar0++;
			}
		}
		iVar1++;
	}
	return iVar0;
}

int func_605()
{
	return Local_16.f_299.f_1;
}

void func_606(int iParam0)
{
	Local_363[Local_2028.f_634 /*52*/].f_41 = iParam0;
}

void func_607(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1072759.f_7 = 1;
	if ((Global_1295619.f_16 - Global_1072759.f_9) > 2)
	{
		if (bParam2)
		{
			func_966(1101004800 /* Float: 20f */);
		}
	}
	Global_1072759.f_9 = Global_1295619.f_16;
	if (bParam0)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_482())
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_967(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

bool func_608(int iParam0)
{
	return func_113(Local_16.f_299.f_5, iParam0);
}

void func_609(int iParam0)
{
	if (func_257(2, 255))
	{
		return;
	}
	Local_2028.f_537 = func_499(iParam0);
	if (func_968(iParam0))
	{
		func_261(1);
		NETWORK::NETWORK_SET_LOCAL_PLAYER_PENDING_FAST_INSTANCE_ID(func_502());
	}
	func_261(2);
}

void func_610(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_257(4, 255))
	{
		return;
	}
	if (func_257(1, 255))
	{
		if (!func_969())
		{
			return;
		}
	}
	if (!func_608(2))
	{
		return;
	}
	if (func_257(1, 255))
	{
		bVar0 = func_970();
		bVar1 = func_971(iParam0);
		func_261(16);
		if (!func_745(16, 1))
		{
			return;
		}
		else if (!bVar1)
		{
			return;
		}
		else if (!bVar0)
		{
			return;
		}
		else if (CAM::GET_LETTER_BOX_RATIO() < 1f)
		{
			return;
		}
		func_972(iParam0);
		func_973();
	}
	func_261(4);
}

void func_611()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_257(1024, 255))
	{
		return;
	}
	func_261(2048);
	sVar0 = func_226();
	sVar1 = func_974();
	sVar2 = func_975(Local_2028.f_537.f_2);
	CAM::CINEMATIC_LOCATION_TRIGGER_SCRIPTED_SHOT_EVENT(sVar0, sVar1, sVar2, -1);
}

bool func_612(int iParam0, int iParam1)
{
	struct<5> Var0;
	bool bVar5;

	if (((func_292(&Local_2028, &Var0) && func_312(&Var0, 5.673219E-19f, iParam0, 0)) && func_312(&Var0, -7.593019E+34f, iParam1, 0)) && func_177(Var0, 2.730112E-24f, &bVar5, 0))
	{
		return bVar5;
	}
	return false;
}

void func_613(int iParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if ((!func_292(&Local_2028, &Var0) || !func_312(&Var0, 5.673219E-19f, iParam0, 0)) || !func_312(&Var0, -7.593019E+34f, iParam1, 0))
	{
		return;
	}
	iVar5 = func_500(iParam0, iParam1);
	iVar6 = 0;
	while (iVar6 < iVar5)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_2), iVar6))
		{
		}
		else if (!func_976(Var0, iVar6))
		{
		}
		else
		{
			MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_2), iVar6);
		}
		iVar6++;
	}
}

void func_614()
{
	char* sVar0;
	char* sVar1;
	char* sVar2;

	if (!func_257(2048, 255))
	{
		return;
	}
	func_498(2048);
	sVar0 = func_226();
	sVar1 = func_974();
	sVar2 = func_975(Local_2028.f_537.f_2);
	CAM::CINEMATIC_LOCATION_STOP_SCRIPTED_SHOT_EVENT(sVar0, sVar1, sVar2);
}

void func_615(int iParam0, int iParam1)
{
	struct<5> Var0;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;
	float fVar17;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;

	func_977(iParam0, iParam1);
	if (func_257(1024, 255))
	{
		return;
	}
	if (((!func_292(&Local_2028, &Var0) || !func_312(&Var0, 5.673219E-19f, iParam0, 0)) || !func_312(&Var0, -7.593019E+34f, iParam1, 0)) || !func_312(&Var0, -7.847206E+18f, 0, 0))
	{
		return;
	}
	fVar17 = CAM::GET_GAMEPLAY_CAM_FOV();
	func_313(Var0, 7.93606E-16f, &vVar5, 0);
	func_177(Var0, 0.01402862f, &bVar18, 0);
	bVar19 = func_313(Var0, -6.453116E-38f, &vVar8, 0);
	bVar20 = func_310(Var0, -2.369356E+19f, &fVar17, 0);
	iVar21 = PLAYER::PLAYER_PED_ID();
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar5 = { func_978(vVar5, CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()) };
		vVar5 = { vVar5 + CAM::GET_GAMEPLAY_CAM_COORD() };
		vVar8 = { vVar8 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
		bVar19 = true;
	}
	if (!CAM::DOES_CAM_EXIST(Local_2028.f_559))
	{
		if (func_381(vVar5))
		{
			return;
		}
		Local_2028.f_559 = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, vVar5, vVar8, fVar17, false, 2);
	}
	else
	{
		if (!func_381(vVar5))
		{
			CAM::SET_CAM_COORD(Local_2028.f_559, vVar5);
		}
		if (bVar19)
		{
			CAM::SET_CAM_ROT(Local_2028.f_559, vVar8, 2);
		}
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2028.f_559, fVar17);
		}
	}
	if (func_177(Var0, 1185464f, &bVar22, 0) && bVar22)
	{
		return;
	}
	bVar23 = func_313(Var0, -2.461478E-28f, &vVar11, 0);
	bVar24 = func_313(Var0, -1.967338E+17f, &vVar14, 0);
	if (bVar18 && ENTITY::DOES_ENTITY_EXIST(iVar21))
	{
		vVar11 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), (ENTITY::GET_ENTITY_HEADING(iVar21) + CAM::GET_GAMEPLAY_CAM_RELATIVE_HEADING()), vVar11) };
		vVar14 = { vVar14 + CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	if (!bVar23 || func_381(vVar11))
	{
		vVar11 = { vVar5 };
	}
	if (!bVar24)
	{
		vVar14 = { vVar8 };
	}
	if (!CAM::DOES_CAM_EXIST(Local_2028.f_560))
	{
		Local_2028.f_560 = CAM::CREATE_CAMERA_WITH_PARAMS(5.382516E-38f, vVar11, vVar14, fVar17, false, 2);
		return;
	}
	else
	{
		CAM::SET_CAM_COORD(Local_2028.f_560, vVar11);
		CAM::SET_CAM_ROT(Local_2028.f_560, vVar14, 2);
		if (bVar20)
		{
			CAM::SET_CAM_FOV(Local_2028.f_560, fVar17);
		}
	}
}

void func_616(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	struct<5> Var3;
	Vector3 vVar8;
	Vector3 vVar11;

	if (func_257(1024, 255))
	{
		func_611();
		return;
	}
	iVar2 = 2000;
	if (((func_292(&Local_2028, &Var3) && func_312(&Var3, 5.673219E-19f, iParam0, 0)) && func_312(&Var3, -7.593019E+34f, iParam1, 0)) && func_312(&Var3, -7.847206E+18f, 0, 0))
	{
		func_299(Var3, -3.349756E-09f, &iVar2, 0);
		if (func_177(Var3, 1185464f, &bVar0, 0) && bVar0)
		{
			CAM::SET_CAM_ACTIVE(Local_2028.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 0, true, false, 0);
		}
		else if (func_177(Var3, -1.415774E+38f, &bVar1, 0) && bVar1)
		{
			CAM::SET_CAM_ACTIVE(Local_2028.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, true, iVar2, true, false, 0);
		}
		else if (func_313(Var3, -2.461478E-28f, &vVar8, 0) || func_313(Var3, -2.461478E-28f, &vVar11, 0))
		{
			CAM::SET_CAM_ACTIVE_WITH_INTERP(Local_2028.f_560, Local_2028.f_559, iVar2, 1, 1);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		else
		{
			CAM::SET_CAM_ACTIVE(Local_2028.f_559, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
		}
		func_126(8);
	}
}

void func_617()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if ((((ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_RAGDOLL(Global_33)) || PED::IS_PED_INJURED(Global_33)) || PED::GET_PED_IS_BEING_GRAPPLED(Global_33)) || PED::IS_PED_HOGTIED(Global_33))
	{
		return;
	}
	if (Local_16.f_328 != -1)
	{
		if (Local_2028.f_10 == -1.398992E+38f)
		{
			if (func_437(Local_16.f_328, &iVar3, 0, 0))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar3, false, false) };
			}
		}
		else if (Local_2028.f_10 == -1.484548E+24f)
		{
			if (func_81(Local_16.f_328, &iVar4))
			{
				vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar4, false, false) };
			}
		}
	}
	iVar5 = 0;
	while (iVar5 < 20)
	{
		if (Local_16.f_16[iVar5 /*12*/].f_2 != 9.716892E+17f || Local_16.f_16[iVar5 /*12*/].f_3 != 33)
		{
		}
		else if (func_437(iVar5, &iVar6, 1, 0))
		{
		}
		else
		{
			iVar5++;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar7);
	if (!func_381(vVar0))
	{
		if (PED::IS_PED_ON_MOUNT(Global_33))
		{
			TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
		}
		if (BUILTIN::VDIST(Global_34, vVar0) < 1075838976)
		{
			TASK::TASK_FLEE_COORD(0, vVar0, 6, 1, 2.5f, -1, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar6, 0, -1f, -1f, -1f);
	}
	else if (!func_381(vVar0))
	{
		TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, 0);
	}
	func_945(Global_33, &iVar7, 0, 0, 1, 1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		func_922(&Global_33, 6000, iVar6, 1, 0, 0, 0, 1);
	}
}

void func_618()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		Local_363[Local_2028.f_634 /*52*/].f_41.f_2[iVar0] = 0;
		iVar0++;
	}
}

int func_619(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	if ((((func_292(&Local_2028, &Var1) && func_312(&Var1, 5.673219E-19f, iParam0, 0)) && func_312(&Var1, -7.593019E+34f, iParam1, 0)) && func_312(&Var1, -7.847206E+18f, 0, 0)) && func_299(Var1, -3.349756E-09f, &iVar0, 0))
	{
		return iVar0;
	}
	return 2000;
}

void func_620(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (func_257(1024, 255))
	{
		func_611();
	}
	if (((!func_292(&Local_2028, &Var0) || !func_312(&Var0, 5.673219E-19f, iParam0, 0)) || !func_312(&Var0, -7.593019E+34f, iParam1, 0)) || !func_312(&Var0, -7.847206E+18f, 0, 0))
	{
		return;
	}
	func_176(Var0, NaNf, &uVar5, 0);
	iVar6 = uVar5;
	if (!func_299(Var0, -7.022798E-15f, &iVar7, 0))
	{
		iVar7 = 1000;
	}
	if (!func_257(1024, 255))
	{
		if ((func_33(8) && func_177(Var0, 1185464f, &bVar8, 0)) && bVar8)
		{
			CAM::RENDER_SCRIPT_CAMS(false, true, iParam2, true, false, 0);
			func_213(8);
		}
	}
	switch (iVar6)
	{
		case joaat("FADE_IN"):
			func_88(0, iVar7);
			break;
		case joaat("FADE_OUT"):
			if (iParam3 < func_979((iParam2 - iVar7 + 150), 0))
			{
				return;
			}
			func_88(1, iVar7);
			break;
	}
}

void func_621(int iParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;
	int iVar6;
	int iVar7;

	if ((!func_292(&Local_2028, &Var0) || !func_312(&Var0, 5.673219E-19f, iParam0, 0)) || !func_312(&Var0, -7.593019E+34f, iParam1, 0))
	{
		return;
	}
	if (func_177(Var0, -7.529998E+26f, &uVar5, 0))
	{
		func_980(iParam0);
	}
	iVar6 = func_500(iParam0, iParam1);
	iVar7 = 0;
	while (iVar7 < iVar6)
	{
		if (MISC::_IS_BIT_FLAG_SET(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_2), iVar7))
		{
		}
		else if (!func_981(Var0, iVar7))
		{
		}
		else
		{
			MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_41.f_2), iVar7);
		}
		iVar7++;
	}
}

struct<2> func_622()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_982(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_982(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

void func_623(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;

	if (!func_983(iParam0, uParam1, uParam2, fParam3, &bVar0, &bVar1, &bVar2))
	{
		func_239(iParam0);
		return;
	}
	iVar3 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar4 = MAP::DOES_BLIP_EXIST(Local_2028.f_202[iParam0]);
	if (bVar0 && !bVar4)
	{
		return;
	}
	func_984(iParam0, uParam1, uParam2, fParam3);
	if (!bVar4)
	{
		return;
	}
	iVar6 = PLAYER::PLAYER_ID();
	switch (Local_16.f_16[iParam0 /*12*/].f_2)
	{
		case joaat("CHASER"):
		case joaat("DROPOFF_GUARD"):
			func_985(iParam0, bVar0);
			break;
		case joaat("PASSENGER_VIP"):
			func_986(iParam0, bVar2);
			func_987(iParam0, !func_33(1));
			iVar5 = 255;
			if (func_271(iParam0, 1024))
			{
				func_988(iParam0);
			}
			else if (func_989(iParam0, 255))
			{
				func_990(iParam0);
				iVar5 = iVar6;
				bVar7 = false;
			}
			else if (func_991(Local_16.f_16[iParam0 /*12*/].f_7, iVar3, &bVar7, &iVar5) && iVar5 != iVar6)
			{
				func_990(iParam0);
			}
			else if (bVar7)
			{
				func_988(iParam0);
			}
			else
			{
				func_992(iParam0);
			}
			if (iVar5 == iVar6)
			{
				iVar5 = 255;
			}
			func_993(iParam0, iVar5);
			break;
		default:
			func_994(iParam0, bVar1, func_33(1));
			func_995(iParam0, func_33(1));
			break;
	}
}

void func_624(int iParam0, var uParam1, var uParam2, float fParam3)
{
	if (!func_996(iParam0, uParam1, uParam2, fParam3))
	{
		func_240(iParam0);
		return;
	}
	func_997(iParam0, uParam1, uParam2, fParam3);
	if (!MAP::DOES_BLIP_EXIST(fParam3->f_202.f_21[iParam0]))
	{
		return;
	}
	MAP::BLIP_ADD_MODIFIER(fParam3->f_202.f_21[iParam0], -1.336132E+20f);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam3->f_202.f_21[iParam0], func_998());
}

void func_625(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	if (!func_999(iParam0, uParam1, uParam2, fParam3))
	{
		func_241(iParam0);
		return;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	func_1000(iParam0, iVar0);
	if (!MAP::DOES_BLIP_EXIST(fParam3->f_202.f_25[iParam0]))
	{
		return;
	}
	bVar1 = func_33(1);
	if (bVar1 && func_80(iParam0, 8))
	{
		func_450(iParam0, 8);
		MAP::SET_BLIP_SPRITE(Local_2028.f_202.f_25[iParam0], 3.087276E-14f, false);
	}
	else if (!bVar1 && !func_80(iParam0, 8))
	{
		func_273(iParam0, 8);
		MAP::SET_BLIP_SPRITE(Local_2028.f_202.f_25[iParam0], func_1001(2), false);
	}
	iVar4 = PLAYER::PLAYER_ID();
	if (func_80(iParam0, 8))
	{
		func_1002(iParam0);
	}
	else if (func_1003(iParam0, 255))
	{
		func_1004(iParam0);
		iVar3 = iVar4;
		bVar2 = false;
	}
	else if (func_991(Local_16.f_257[iParam0 /*5*/].f_3, iVar0, &bVar2, &iVar3) && iVar3 != iVar4)
	{
		func_1004(iParam0);
	}
	else if (bVar2)
	{
		func_1002(iParam0);
	}
	else
	{
		func_1005(iParam0);
	}
	if (iVar3 == iVar4)
	{
		iVar3 = 255;
	}
	func_1006(iParam0, iVar3);
}

bool func_626(var uParam0, var uParam1, float fParam2)
{
	if (!func_534())
	{
		return false;
	}
	if (!func_41(uParam1[Local_2028.f_634 /*52*/], 32) && !func_41(uParam1[Local_2028.f_634 /*52*/], 64))
	{
		return false;
	}
	switch (fParam2->f_202.f_60)
	{
		case 14:
		case 15:
		case 22:
		case 23:
		case 24:
		case 25:
		case 29:
		case 30:
		case 31:
			break;
		default:
			return false;
	}
	return true;
}

void func_627(var uParam0, float fParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_41(uParam0[NETWORK::PARTICIPANT_ID_TO_INT() /*52*/], 64);
	if (bVar0)
	{
		iVar1 = fParam1->f_620;
	}
	else
	{
		iVar1 = fParam1->f_619;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar1))
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(fParam1->f_202.f_51))
	{
		return;
	}
	fParam1->f_202.f_51 = MAP::_BLIP_ADD_FOR_VOLUME(2.786954E-24f, iVar1);
	MAP::BLIP_ADD_MODIFIER(fParam1->f_202.f_51, -2.727505E-29f);
	MAP::BLIP_ADD_MODIFIER(fParam1->f_202.f_51, 1.231009E-30f);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam1->f_202.f_51, func_1007());
}

void func_628(bool bParam0)
{
	int iVar0;
	int iVar1;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 20;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202[iVar0]))
				{
				}
				else if (bParam0)
				{
					MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iVar0], 1.231009E-30f);
				}
				else
				{
					MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iVar0], 1.231009E-30f);
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar1 = 4;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_25[iVar0]))
				{
				}
				else if (bParam0)
				{
					MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iVar0], 1.231009E-30f);
				}
				else
				{
					MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iVar0], 1.231009E-30f);
				}
				iVar0++;
			}
			break;
	}
}

bool func_629(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_33(1) && !func_536(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_529(iVar2))
	{
		if (func_332(iVar2))
		{
			return true;
		}
		iVar3 = PLAYER::GET_PLAYER_PED(iVar0);
		if (!ENTITY::IS_ENTITY_DEAD(iVar3) && AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar3, false))
		{
			return true;
		}
	}
	return false;
}

bool func_630(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_33(1))
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar0))
	{
		return false;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	iVar2 = iVar1;
	if (func_33(1) && !GANG::NETWORK_IS_IN_SAME_GANG(iVar0, PLAYER::PLAYER_ID()))
	{
		if (func_41(&(Local_363[iVar2 /*52*/]), 64) || func_41(&(Local_363[iVar2 /*52*/]), 32))
		{
			return true;
		}
	}
	return false;
}

int func_631(int iParam0, int* iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_453(Local_2028.f_202.f_59);
	bVar1 = func_1008();
	iVar2 = func_251();
	iVar3 = 0;
	while (iVar3 < 9)
	{
		iVar4 = iVar3;
		if (iVar4 == 0)
		{
		}
		else if (func_1009(iVar4, iVar2, bVar1, bVar0, iParam0, iParam1))
		{
			return iVar4;
		}
		iVar3++;
	}
	return 0;
}

void func_632(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	char* sVar3;
	int iVar4;

	if (iParam0 == 0)
	{
		return;
	}
	func_243(&(Local_2028.f_202.f_58));
	bVar0 = func_1010(iParam0);
	bVar1 = func_1011(iParam0);
	iVar2 = func_1012(iParam0);
	sVar3 = func_1013(iParam0, iParam1, sParam2);
	Local_2028.f_202.f_58 = sParam2;
	if (bVar1)
	{
		func_1014(Local_2028.f_561.f_54, sParam2);
	}
	else
	{
		func_1015(sVar3, iVar2, bVar0);
	}
	if (func_1016(iParam0, &iVar4))
	{
		func_132(iVar4);
	}
}

int func_633(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	bVar0 = func_41(uParam1[Local_2028.f_634 /*52*/], 64);
	if (!func_41(uParam1[Local_2028.f_634 /*52*/], 32) && !bVar0)
	{
		return 0;
	}
	if (!func_33(2))
	{
		return 0;
	}
	if (func_362(255) > 0)
	{
		return 0;
	}
	if (func_227(2))
	{
		return 0;
	}
	if ((func_55(uParam0, 1024) || func_55(uParam0, 16384)) || func_200(uParam0, bParam2))
	{
		return 0;
	}
	switch (func_402(uParam0))
	{
		case 1:
			if (!func_41(uParam1[Local_2028.f_634 /*52*/], 8))
			{
				return 1;
			}
			if (func_33(256))
			{
				return 6;
			}
			return 3;
		case 2:
			if (func_33(256))
			{
				return 6;
			}
			return 5;
		case 3:
			if (!func_1017(uParam0, bParam2, 13.22463f))
			{
				return 8;
			}
			return 18;
		case 4:
			if (func_892(0))
			{
				if (func_867(&Local_2028, Global_34, bVar0))
				{
					return 29;
				}
				return 14;
			}
			if (!func_1018(uParam0, 13.22463f, 65536, 131072))
			{
				return 0;
			}
			if (func_1019(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (func_1018(uParam0, 13.22463f, 4, 524288))
			{
				if (!func_1017(uParam0, bParam2, 13.22463f))
				{
					return 8;
				}
				return 10;
			}
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Local_16.f_16[iVar2 /*12*/].f_2 != 13.22463f)
				{
				}
				else if ((func_201(iVar2, &Local_16, 32) || func_201(iVar2, &Local_16, 65536)) || func_201(iVar2, &Local_16, 131072))
				{
				}
				else
				{
					bVar5 = true;
					if (func_437(iVar2, &iVar3, 1, 1) && ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar3) == 7)
					{
						iVar4 = PED::_GET_CARRIER_AS_MOUNT(iVar3);
						if (ENTITY::DOES_ENTITY_EXIST(iVar4) && iVar4 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
						{
							return 9;
						}
					}
				}
				iVar2++;
			}
			if (bVar5)
			{
				return 12;
			}
			break;
		case 5:
			if (func_555())
			{
				if (func_867(&Local_2028, Global_34, bVar0))
				{
					if (func_557(PLAYER::PLAYER_PED_ID()))
					{
						return 0;
					}
					return 31;
				}
				return 22;
			}
			if (func_1020())
			{
				return 0;
			}
			if (func_1021(&bVar1))
			{
				return 27;
			}
			else if (bVar1)
			{
				return 24;
			}
			if (bVar0)
			{
				if (func_415(uParam0, 32, 0))
				{
					return 24;
				}
			}
			else if (func_415(uParam0, 1, 0))
			{
				return 24;
			}
			if (func_414(uParam0, 64, 0))
			{
				return 18;
			}
			return 17;
	}
	return 0;
}

bool func_634(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam3)
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return true;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return true;
			default:
				break;
		}
	}
	else if (bParam2)
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return uParam0->f_321 < 2;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return uParam0->f_322 < 2;
			default:
				break;
		}
	}
	else
	{
		switch (func_199(bParam1))
		{
			case joaat("COACH_HOLDUP_KIDNAP"):
				return Local_2028.f_10.f_13 < 2;
			case joaat("COACH_HOLDUP_ROBBERY"):
				return Local_2028.f_10.f_14 < 2;
			default:
				break;
		}
	}
	return true;
}

bool func_635()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar2 = 0;
			while (iVar2 < 20)
			{
				if (Local_16.f_16[iVar2 /*12*/].f_11 == -1)
				{
				}
				else if (bVar1 && iVar0 == Local_16.f_16[iVar2 /*12*/].f_11)
				{
				}
				else if (!func_201(iVar2, &Local_16, 1024))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = Local_16.f_16[iVar2 /*12*/].f_11;
				}
				else
				{
					return true;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (Local_16.f_257[iVar3 /*5*/].f_2 == -1)
				{
				}
				else if (bVar1 && iVar0 == Local_16.f_257[iVar3 /*5*/].f_2)
				{
				}
				else if (!func_202(iVar3, &Local_16, 8))
				{
				}
				else if (!bVar1)
				{
					bVar1 = true;
					iVar0 = Local_16.f_257[iVar3 /*5*/].f_2;
				}
				else
				{
					return true;
				}
				iVar3++;
			}
			break;
	}
	return false;
}

void func_636(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (Local_16.f_16[iVar0 /*12*/].f_7 == 255)
		{
		}
		else if ((func_201(iVar0, &Local_16, 32) || func_201(iVar0, &Local_16, 65536)) || func_201(iVar0, &Local_16, 131072))
		{
		}
		else if (!func_1022(Local_16.f_16[iVar0 /*12*/].f_7, &uVar1))
		{
		}
		else if (GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_16[iVar0 /*12*/].f_7, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = Local_16.f_16[iVar0 /*12*/].f_7;
				*iParam3 = GANG::NETWORK_GET_GANG_ID(*iParam2);
			}
			else if (GANG::NETWORK_GET_GANG_ID(Local_16.f_16[iVar0 /*12*/].f_7) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!GANG::NETWORK_IS_GANG_ID_VALID(*iParam3) || !GANG::NETWORK_IS_GANG_ACTIVE(*iParam3)) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

void func_637(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar3 = PLAYER::PLAYER_ID();
	*iParam2 = 255;
	*iParam3 = 0;
	*bParam0 = 0;
	*bParam1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!func_202(iVar0, &Local_16, 128) || func_202(iVar0, &Local_16, 2)) || func_202(iVar0, &Local_16, 16)) || func_202(iVar0, &Local_16, 256)) || func_202(iVar0, &Local_16, 512))
		{
		}
		else if (Local_16.f_257[iVar0 /*5*/].f_3 == 255)
		{
		}
		else if (!func_1022(Local_16.f_257[iVar0 /*5*/].f_3, &uVar1))
		{
		}
		else if (GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_257[iVar0 /*5*/].f_3, iVar3))
		{
		}
		else
		{
			if (iVar2 == 0)
			{
				*iParam2 = Local_16.f_257[iVar0 /*5*/].f_3;
				*iParam3 = GANG::NETWORK_GET_GANG_ID(*iParam2);
			}
			else if (GANG::NETWORK_GET_GANG_ID(Local_16.f_257[iVar0 /*5*/].f_3) != *iParam3)
			{
				*bParam1 = 1;
				return;
			}
			iVar2++;
		}
		iVar0++;
	}
	if (iVar2 == 1)
	{
		if ((!GANG::NETWORK_IS_GANG_ID_VALID(*iParam3) || !GANG::NETWORK_IS_GANG_ACTIVE(*iParam3)) || GANG::NETWORK_GET_NUM_GANG_MEMBERS(*iParam3) == 1)
		{
			*bParam0 = 1;
		}
	}
}

int func_638(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam0 != Local_2028.f_202.f_60)
	{
		return 0;
	}
	if ((bParam1 && func_227(2097152)) && Local_2028.f_202.f_53 == iParam2)
	{
		return 0;
	}
	if ((!bParam1 && func_227(4194304)) && Local_2028.f_202.f_54 == iParam3)
	{
		return 0;
	}
	if (((!func_227(2097152) && !func_227(4194304)) && iParam2 == 255) && iParam3 == 0)
	{
		return 0;
	}
	return 1;
}

void func_639(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;

	if (iParam0 == 0)
	{
		func_245(fParam1);
		return;
	}
	if (((func_246(fParam1->f_202.f_56) && func_453(fParam1->f_202.f_56)) && fParam1->f_202.f_60 == iParam0) && !bParam2)
	{
		return;
	}
	iVar0 = 255;
	iVar1 = 0;
	switch (iParam0)
	{
		case 8:
			sVar3 = func_1023(0);
			break;
		case 9:
			sVar3 = func_1023(1);
			break;
		case 1:
			sVar3 = func_1024(1);
			break;
		case 2:
			sVar3 = func_1024(0);
			break;
		case 3:
			sVar3 = func_1025(1);
			break;
		case 4:
			sVar3 = func_1025(0);
			break;
		case 5:
			sVar3 = func_1026(1);
			break;
		case 7:
			sVar3 = func_1027();
			break;
		case 10:
			sVar3 = func_1028(0);
			break;
		case 11:
			sVar3 = func_1028(1);
			break;
		case 12:
			sVar3 = func_1029(0, 0);
			break;
		case 13:
			sVar3 = func_1029(1, 0);
			break;
		case 16:
			sVar3 = func_1030(0);
			break;
		case 17:
			sVar3 = func_1030(1);
			break;
		case 20:
			sVar3 = func_1031(0, 0);
			break;
		case 21:
			sVar3 = func_1031(1, 0);
			break;
		case 26:
			sVar3 = func_1032(fParam1, 1, &iVar0, &iVar1, &bVar2);
			break;
		case 27:
			sVar3 = func_1032(fParam1, 0, &iVar0, &iVar1, &bVar2);
			break;
		case 28:
			sVar3 = func_1033();
			break;
		case 25:
			sVar3 = func_1034(fParam1, 1);
			break;
		case 24:
			sVar3 = func_1034(fParam1, 0);
			break;
		case 22:
			sVar3 = func_1031(0, 1);
			break;
		case 23:
			sVar3 = func_1031(1, 1);
			break;
		case 15:
			sVar3 = func_1029(1, 1);
			break;
		case 14:
			sVar3 = func_1029(1, 1);
			break;
		case 18:
			sVar3 = func_1035(1);
			break;
		case 19:
			sVar3 = func_1035(0);
			break;
		case 29:
			sVar3 = func_1036();
			break;
		case 30:
			sVar3 = func_1037(1);
			break;
		case 31:
			sVar3 = func_1037(0);
			break;
		case 6:
			sVar3 = func_1026(1);
			break;
		default:
			return;
	}
	if (iVar0 != 255 && bVar2)
	{
		func_132(2097152);
		func_228(4194304);
		Local_2028.f_202.f_53 = iVar0;
		Local_2028.f_202.f_54 = 0;
	}
	else if (iVar1 != 0 && !bVar2)
	{
		func_132(4194304);
		func_228(2097152);
		Local_2028.f_202.f_53 = 255;
		Local_2028.f_202.f_54 = iVar1;
	}
	else
	{
		func_228(2097152);
		func_228(4194304);
	}
	fParam1->f_202.f_56 = func_1038(sVar3, -1, 0, 0, 1);
	fParam1->f_202.f_60 = iParam0;
}

bool func_640()
{
	if (!func_534())
	{
		return false;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		return false;
	}
	if (func_227(4))
	{
		return false;
	}
	if (!func_33(2))
	{
		return false;
	}
	if (CAM::GET_LETTER_BOX_RATIO() > 0f && !CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		return false;
	}
	return true;
}

void func_641()
{
	bool bVar0;

	bVar0 = func_634(&Local_16, &Local_2028, 0, 0);
	Local_2028.f_202.f_57 = func_1041(func_1039(), func_1040(bVar0));
}

bool func_642()
{
	if (func_227(2))
	{
		return false;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608))
	{
		return true;
	}
	if (!func_33(1))
	{
		return false;
	}
	if (!func_227(4))
	{
		return false;
	}
	if (!func_55(&Local_16, 524288) && !func_33(3.85186E-34f))
	{
		return false;
	}
	if (func_361())
	{
		return false;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 2097152))
	{
		return false;
	}
	return true;
}

void func_643()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	func_208(&iVar0, &iVar1);
	bVar2 = func_634(&Local_16, &Local_2028, 0, 0);
	bVar3 = !func_33(8192);
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608))
	{
		func_1045(func_1043(func_1042(0)), func_1043(func_1039()), func_1043(func_1044(bVar2)), 0);
	}
	else
	{
		Local_2028.f_202.f_57 = func_1046(func_1039(), func_1044(bVar2), iVar0, iVar1, bVar3);
	}
}

float func_644(float fParam0)
{
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 3.087276E-14f;
		case joaat("COACH_HOLDUP_KIDNAP"):
		default:
			break;
	}
	return -0.1870042f;
}

float func_645(int iParam0)
{
	return func_1047(iParam0);
}

void func_646(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_25 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_25 = iParam1;
	}
}

void func_647(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_26 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_26 = iParam1;
	}
}

bool func_648(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 60)
	{
		return false;
	}
	if (Global_1951897[iParam0 /*23*/].f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3);
}

bool func_649(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_648(iParam0))
	{
		return false;
	}
	iVar0 = func_1048(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_650(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_648(iParam0))
	{
		return false;
	}
	iVar0 = func_1048(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

int func_651(var uParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = (1080033280 * 2f);
	iVar4 = -1;
	iVar3 = 0;
	while (iVar3 < 20)
	{
		if (uParam0->f_16[iVar3 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (uParam0->f_16[iVar3 /*12*/].f_3 != 22)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar3 /*12*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(uParam0->f_16[iVar3 /*12*/]);
			fVar0 = func_523(iVar2, PLAYER::PLAYER_PED_ID(), 1, 1);
			if (fVar0 > fVar1)
			{
			}
			else
			{
				fVar1 = fVar0;
				iVar4 = iVar3;
			}
		}
		iVar3++;
	}
	return iVar4;
}

bool func_652(bool bParam0)
{
	if (!func_534())
	{
		return false;
	}
	if (func_227(2))
	{
		return false;
	}
	if (func_362(255) > 0)
	{
		return false;
	}
	if (!func_33(1))
	{
		return false;
	}
	if (!func_227(4) || func_453(Local_2028.f_202.f_57))
	{
		return false;
	}
	*bParam0 = 0;
	if (Local_16.f_2 > 2)
	{
		*bParam0 = 1;
	}
	return true;
}

void func_653(var uParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	iVar4 = PLAYER::PLAYER_ID();
	switch (fParam2->f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (!func_202(iVar2, &Local_16, 128))
				{
				}
				else
				{
					if (func_423(iVar2, 0))
					{
						if (func_423(iVar2, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_202(iVar2, &Local_16, 2))
					{
						if (GANG::NETWORK_GET_GANG_ID(iVar4) == Local_16.f_257[iVar2 /*5*/].f_4)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_202(iVar2, uParam0, 16) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar2 /*5*/]))
					{
						iVar3 = 2;
					}
					else if (func_1003(iVar2, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_257[iVar2 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_257[iVar2 /*5*/].f_3)) && Local_16.f_257[iVar2 /*5*/].f_3 != iVar4)
					{
						if (GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_257[iVar2 /*5*/].f_3, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else
					{
						iVar3 = 1;
					}
					func_1049(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar2++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_201(iVar1, uParam0, 1024))
				{
				}
				else
				{
					if (func_423(iVar1, 0))
					{
						if (func_423(iVar1, 1))
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_201(iVar1, uParam0, 32))
					{
						if (GANG::NETWORK_GET_GANG_ID(iVar4) == Local_16.f_16[iVar1 /*12*/].f_6)
						{
							iVar3 = 7;
						}
						else
						{
							iVar3 = 8;
						}
					}
					else if (func_989(iVar1, 255))
					{
						iVar3 = 5;
					}
					else if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iVar1 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iVar1 /*12*/].f_7)) && Local_16.f_16[iVar1 /*12*/].f_7 != iVar4)
					{
						if (GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_16[iVar1 /*12*/].f_7, iVar4))
						{
							iVar3 = 5;
						}
						else
						{
							iVar3 = 6;
						}
					}
					else if (uParam0->f_16[iVar1 /*12*/].f_2 == -0.6089872f)
					{
						iVar3 = 2;
					}
					else
					{
						iVar3 = 1;
					}
					func_1049(&(fParam2->f_202.f_77), iVar3, iVar0);
					iVar0++;
				}
				iVar1++;
			}
			break;
	}
}

void func_654(bool bParam0, var uParam1, int iParam2, bool bParam3, int iParam4, char* sParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	if (iParam7 != 0)
	{
		iVar1 = -1;
	}
	if (((func_1050(bParam0, &bVar0) && func_1051(bParam0)) && func_1052(bParam0, uParam1, iParam7, 0, 0, 0, 0)) && func_1053(bParam0, -1.584563E+31f, &bVar0))
	{
		func_1054(bParam0, iParam2, bParam3, iParam4, sParam5);
		func_1055(uParam1, iParam6, bParam8, bParam9, bParam10, iVar1, 0);
	}
	if (bVar0)
	{
		func_247(uParam1, 0, 0);
		func_248(bParam0, 1);
	}
}

bool func_655(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_534())
	{
		return false;
	}
	if (func_362(255) > 0)
	{
		return false;
	}
	if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
	{
		return false;
	}
	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 128))
	{
		return false;
	}
	if (Local_2028.f_10 != -1.484548E+24f)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, false))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(iVar0))
	{
		return false;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(iVar0) || PED::GET_PED_IS_GRAPPLING(iVar0))
	{
		return false;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if ((!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iVar2, &iVar1, false, false) && !PLAYER::GET_PLAYER_TARGET_ENTITY(iVar2, &iVar1)) && !PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(iVar2, &iVar1))
	{
		return false;
	}
	if (func_523(iVar1, iVar0, 1, 1) > 1080033280)
	{
		return false;
	}
	if (!func_118(iVar1, &Local_16, &iVar3))
	{
		return false;
	}
	if (iVar3 == -1)
	{
		return false;
	}
	if (Local_16.f_16[iVar3 /*12*/].f_2 != 13.22463f)
	{
		return false;
	}
	if (Local_16.f_16[iVar3 /*12*/].f_3 != 22)
	{
		return false;
	}
	if (func_201(iVar3, &Local_16, 2))
	{
		return false;
	}
	if (Local_16.f_16[iVar3 /*12*/].f_7 != 255 && Local_16.f_16[iVar3 /*12*/].f_7 != iVar2)
	{
		return false;
	}
	*iParam0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_RAGDOLL(*iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(*iParam0))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(*iParam0))
	{
		return false;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(*iParam0))
	{
		return false;
	}
	if (!func_927(*iParam0))
	{
		return false;
	}
	return true;
}

void func_656(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_648(iParam0))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	if (bParam1)
	{
		func_1056(iParam0, 4);
		if (bParam3)
		{
			func_1057(iVar0, 1);
		}
		func_1058(iVar0, 1);
	}
	else
	{
		func_1059(iParam0, 4);
		func_1058(iVar0, 0);
	}
}

void func_657(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_648(iParam0))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	func_1057(iVar0, bParam1);
}

void func_658(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && (!func_648(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1)))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	if (iParam3 == 1)
	{
		func_1060(iParam0, 18, 0, 1);
		func_1060(iParam0, 17, 0, 1);
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam1), iParam2);
}

char* func_659()
{
	return "NET_CHU_UC_TAKE_MONEY";
}

int func_660(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_1061(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_1062(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

bool func_661()
{
	if (!func_246(Local_2028.f_202.f_55))
	{
		return false;
	}
	if (!func_453(Local_2028.f_202.f_55))
	{
		return false;
	}
	return true;
}

char* func_662()
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_KILLED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KILLED";
}

void func_663(char* sParam0, int iParam1, int iParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	Local_2028.f_202.f_55 = func_1063(sParam0, 27.64779f, -2, iParam1, iParam2, 0, 1);
}

char* func_664()
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_KNOCKEDOUT";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_KNOCKEDOUT";
}

char* func_665()
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_UPDATE_VIP_ESCAPED";
		default:
			break;
	}
	return "NET_CHU_UPDATE_PASSENGER_ESCAPED";
}

char* func_666()
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (Local_2028.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_VIP_RETURNED_YOU";
			}
			return MISC::VAR_STRING(2, "NET_CHU_UPDATE_VIP_RETURNED", Local_2028.f_202.f_52);
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (Local_2028.f_202.f_52 == PLAYER::PLAYER_ID())
			{
				return "NET_CHU_UPDATE_BAG_RETURNED_YOU";
			}
			return MISC::VAR_STRING(2, "NET_CHU_UPDATE_BAG_RETURNED", Local_2028.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_667()
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return MISC::VAR_STRING(2, "NET_CHU_UPDATE_VIP_PVP_STOLEN", Local_2028.f_202.f_52);
		case joaat("COACH_HOLDUP_ROBBERY"):
			return MISC::VAR_STRING(2, "NET_CHU_UPDATE_BAG_PVP_STOLEN", Local_2028.f_202.f_52);
		default:
			break;
	}
	return "";
}

char* func_668()
{
	bool bVar0;

	bVar0 = !func_634(&Local_16, &Local_2028, 1, 0);
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bVar0)
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_KIDNAP_PVP_ACTIVE";
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bVar0)
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE_PLURAL";
			}
			else
			{
				return "NET_CHU_UPDATE_ROBBERY_PVP_ACTIVE";
			}
			break;
	}
	return "";
}

char* func_669()
{
	return "RDRO_GFH_Sounds";
}

char* func_670()
{
	return "match_end";
}

char* func_671()
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(Local_2028.f_202.f_52)))
	{
		bVar0 = true;
	}
	iVar1 = Local_2028.f_202.f_52;
	bVar2 = !func_634(&Local_16, &Local_2028, 1, 0);
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN_PLURAL", func_1064(iVar1, NaNf));
				}
				else
				{
					return MISC::VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_POSSE_JOIN", func_1064(iVar1, NaNf));
				}
			}
			else if (bVar2)
			{
				return MISC::VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN_PLURAL", func_1064(iVar1, NaNf));
			}
			else
			{
				return MISC::VAR_STRING(10, "NET_CHU_UPDATE_KIDNAP_PVP_PLAYER_JOIN", func_1064(iVar1, NaNf));
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bVar0)
			{
				if (bVar2)
				{
					return MISC::VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN_PLURAL", func_1064(iVar1, NaNf));
				}
				else
				{
					return MISC::VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_POSSE_JOIN", func_1064(iVar1, NaNf));
				}
			}
			else if (bVar2)
			{
				return MISC::VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN_PLURAL", func_1064(iVar1, NaNf));
			}
			else
			{
				return MISC::VAR_STRING(10, "NET_CHU_UPDATE_ROBBERY_PVP_PLAYER_JOIN", func_1064(iVar1, NaNf));
			}
			break;
	}
	return "";
}

int func_672(int iParam0)
{
	struct<5> Var0;
	int iVar5;

	if (func_175(&Var0, iParam0) && func_176(Var0, 6.890034E+20f, &iVar5, 0))
	{
		switch (iVar5)
		{
			case joaat("PROPSET_SNAP_TO_GROUND"):
				return 0;
			case joaat("PROPSET_ALIGN_TO_GROUND"):
				return 1;
			case 1390021295:
				return 4;
			case -656190934:
				return 5;
			case joaat("ALIGN_AS_ONE"):
				return 7;
			default:
				break;
		}
	}
	return 1;
}

void func_673(int iParam0, int iParam1)
{
	func_122(&(Local_16.f_278[iParam0 /*2*/].f_1), iParam1);
}

bool func_674(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	*uParam0 = NETWORK::OBJ_TO_NET(OBJECT::CREATE_OBJECT(iParam1, vParam2, true, bParam5, false, false, true));
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam5)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

bool func_675(int iParam0)
{
	if ((iParam0 == 2.324436E+15f || iParam0 == 0.4263186f) || iParam0 == -1.730292E-25f)
	{
		return true;
	}
	return false;
}

bool func_676(int iParam0)
{
	return iParam0 == -556.0374f;
}

float func_677(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	fVar5 = 0f;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_310(Var0, 5.908321E+30f, &fVar5, 0);
	}
	return fVar5;
}

int func_678(var uParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;

	iVar5 = 0;
	if (func_141(uParam0, &Var0, iParam1))
	{
		func_176(Var0, -1.513456E-21f, &iVar5, 0);
		switch (iVar5)
		{
			case 500518742:
				return -2;
			case joaat("VS_DRIVER"):
				return -1;
			case joaat("VS_FRONT_RIGHT"):
				return 0;
			case joaat("VS_BACK_LEFT"):
				return 1;
			case joaat("VS_BACK_RIGHT"):
				return 2;
			case joaat("VS_EXTRA_LEFT_1"):
				return 3;
			case joaat("VS_EXTRA_RIGHT_1"):
				return 4;
			case 786089929:
				return 5;
			case 1129121707:
				return 6;
			case -534828465:
				return 7;
			case 510246373:
				return 8;
			default:
				break;
		}
	}
	return iVar5;
}

bool func_679()
{
	if (Local_2028.f_637 != 0)
	{
		if (func_209(Local_2028.f_637) > 15000)
		{
			return true;
		}
		return false;
	}
	Local_2028.f_637 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return false;
}

bool func_680(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("SECONDARY_DROPOFF_GUARD"):
		case joaat("DROPOFF_GUARD"):
			return false;
		default:
			break;
	}
	return true;
}

bool func_681(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2028, &Var0, iParam0) && func_449(Var0, -4.014181E+34f, uParam1))
	{
		return true;
	}
	return false;
}

bool func_682(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
{
	int iVar0;

	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		return false;
	}
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_171(iParam1))
	{
		return false;
	}
	iVar0 = func_1065(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7, bParam9);
	*uParam0 = NETWORK::PED_TO_NET(iVar0);
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
	{
		if (bParam9)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iVar0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (bParam10)
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		if (bParam6)
		{
			NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
		}
		return true;
	}
	return false;
}

void func_683(int iParam0)
{
	int iVar0;

	if (!func_201(iParam0, &Local_16, 512) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_1))
	{
		iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/].f_1);
		func_1066(iVar0);
		func_274(iParam0, &Local_16, 512);
	}
}

bool func_684(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_171(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		iVar1 = func_1067(iVar0, iParam2, iParam3, 1, bParam4, !bParam5, bParam7);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iVar1, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_685(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_171(iParam2))
	{
		return false;
	}
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iParam1))
	{
		iVar0 = NETWORK::NET_TO_VEH(iParam1);
		iVar1 = func_1068(iVar0, iParam2, iParam3, 1, bParam4, !bParam5);
		*uParam0 = NETWORK::PED_TO_NET(iVar1);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (bParam5)
			{
				WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iVar1, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam2));
			}
			if (bParam6)
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam2));
			}
			PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar1, 0);
			if (bParam4)
			{
				NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(*uParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_686(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (func_201(iParam0, &Local_16, 8388608))
	{
		return true;
	}
	iVar2 = -1;
	if (func_1069(iParam0, &iVar1) || func_1070(iParam0, &iVar2))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iVar0))
		{
			return false;
		}
		else
		{
			if (iVar1 != 0)
			{
				PED::_EQUIP_META_PED_OUTFIT(iVar0, iVar1);
			}
			else
			{
				PED::_EQUIP_META_PED_OUTFIT_PRESET(iVar0, iVar2, false);
			}
			PED::_UPDATE_PED_VARIATION(iVar0, false, true, true, true, false);
			func_274(iParam0, &Local_16, 8388608);
		}
	}
	return true;
}

bool func_687(var uParam0, int iParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_177(Var0, -1.058804E-18f, &uVar5, 0);
	}
	return uVar5;
}

bool func_688(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	struct<5> Var2;
	bool bVar7;
	bool bVar8;

	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (uParam1->f_16[iParam0 /*12*/].f_2 == 1.556252E-24f)
	{
		bVar0 = func_1071();
		bVar0 = func_1072(iVar1, bVar0, 1, 1, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
		return true;
	}
	if (!func_141(&Local_2028, &Var2, iParam0))
	{
		return true;
	}
	bVar7 = false;
	func_177(Var2, -3467277f, &bVar7, 0);
	if (bVar7)
	{
		WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
	}
	if (!func_1073(Var2, 2.119798E+09f, &bVar0))
	{
		return true;
	}
	if (bVar0 == -3.273909E-18f)
	{
		return true;
	}
	if (bVar0 == 0)
	{
		return true;
	}
	if (!func_236(bVar0))
	{
		return true;
	}
	bVar8 = false;
	if (uParam1->f_16[iParam0 /*12*/].f_2 == 2.418248E-09f || func_271(iParam0, 32768))
	{
		bVar8 = true;
	}
	func_1072(iVar1, bVar0, 1, 1, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
	WEAPON::_SET_PED_ALL_WEAPONS_VISIBILITY(iVar1, true);
	if (!bVar8)
	{
		WEAPON::_HOLSTER_PED_WEAPONS(iVar1, false, false, true, true);
		WEAPON::SET_CURRENT_PED_WEAPON(iVar1, bVar0, false, 0, false, false);
	}
	return true;
}

bool func_689(int iParam0, var uParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2028, &Var0, iParam0) && func_1074(Var0, -7.680243E+10f, uParam1, 0))
	{
		return true;
	}
	return false;
}

var func_690(var uParam0)
{
	return uParam0;
}

float func_691(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	if (!func_141(uParam0, &Var0, iParam1) || !func_310(Var0, 8.912961E+34f, &fVar5, 0))
	{
		return 1048576000 /* Float: 0.25f */;
	}
	return fVar5;
}

float func_692(var uParam0, int iParam1)
{
	struct<5> Var0;
	float fVar5;

	if (func_141(uParam0, &Var0, iParam1))
	{
		func_310(Var0, 3.660515E+28f, &fVar5, 0);
	}
	return fVar5;
}

void func_693(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_428(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

bool func_694(var uParam0)
{
	struct<5> Var0;

	if (!func_448(&Var0))
	{
		return false;
	}
	if (!func_299(Var0, 3.615049E-32f, uParam0, 0))
	{
		return false;
	}
	*uParam0 = func_754(*uParam0, 0, 100);
	return true;
}

bool func_695(var uParam0, int iParam1, int iParam2)
{
	struct<5> Var0;

	if (func_141(uParam0, &Var0, iParam1) && func_299(Var0, 3.615049E-32f, iParam2, 0))
	{
		return true;
	}
	return false;
}

void func_696(int iParam0)
{
	if (!PED::IS_PED_ON_MOUNT(iParam0))
	{
		return;
	}
	if ((WEAPON::_0x95CA12E2C68043E5(iParam0, 0) || WEAPON::_0x80BB243789008A82(iParam0, 0)) || WEAPON::_0x495A04CAEC263AF8(iParam0, 0))
	{
		PED::_SET_PED_COMBAT_STYLE_MOD(iParam0, -2.992781E+28f, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0xABC18A28BAD4B46F(iParam0, 0))
	{
		PED::_SET_PED_COMBAT_STYLE_MOD(iParam0, 3764.162f, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
	else if (WEAPON::_0x5B235F24472F2C3B(iParam0, 0) || WEAPON::_0xBFCA7AFABF9D7967(iParam0, 0))
	{
		PED::_SET_PED_COMBAT_STYLE_MOD(iParam0, -2.363499E+36f, -1f);
		PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 128, true);
	}
}

char* func_697()
{
	return "chu_vip_ped";
}

void func_698(int iParam0, int iParam1)
{
	if (func_201(iParam0, &Local_16, 1.504633E-36f))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_541(8, iParam1, iParam0, func_540(0, 8));
	func_274(iParam0, &Local_16, 1.504633E-36f);
}

bool func_699(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2.f_12), iParam0);
}

void func_700(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_321 = (uParam1->f_321 - 1);
	if (bParam2)
	{
		uParam1->f_326++;
		func_274(iParam0, uParam1, 64);
		func_63(uParam1, 131072);
		iVar0 = 5;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_16, 9.403955E-38f);
			Local_16.f_328 = iParam0;
		}
	}
	else
	{
		uParam1->f_325++;
		func_63(uParam1, 2048);
		iVar0 = 4;
		if (uParam1->f_321 == 0)
		{
			func_63(&Local_16, 2.350989E-38f);
			Local_16.f_328 = iParam0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iParam0 /*12*/].f_7))
	{
		Local_16.f_16[iParam0 /*12*/].f_6 = GANG::NETWORK_GET_GANG_ID(Local_16.f_16[iParam0 /*12*/].f_7);
	}
	func_541(iVar0, Local_16.f_16[iParam0 /*12*/].f_7, iParam0, func_540(0, 8));
	func_274(iParam0, uParam1, 32);
	func_413(iParam0, uParam1, 8);
	func_413(iParam0, uParam1, 16);
}

bool func_701(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PASSENGER_VIP"):
			return true;
		default:
			break;
	}
	return false;
}

int func_702(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
}

void func_703(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar1 = func_1075(iParam0, uParam1);
	if (bVar1)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (func_437(iParam0, &iVar2, 0, 0))
	{
		iVar4 = 0;
		while (iVar4 < 20)
		{
			if (iVar4 == iParam0)
			{
			}
			else if (Local_16.f_16[iVar4 /*12*/].f_2 != 13.22463f)
			{
			}
			else if (Local_16.f_16[iVar4 /*12*/].f_3 != 20 && Local_16.f_16[iVar4 /*12*/].f_3 != 22)
			{
			}
			else if (!func_437(iVar4, &iVar3, 1, 0))
			{
			}
			else if (func_523(iVar2, iVar3, 1, 1) > 1112014848)
			{
			}
			else
			{
				if (!bVar1)
				{
					func_274(iVar4, &Local_16, 256);
				}
				func_274(iVar4, &Local_16, 16384);
			}
			iVar4++;
		}
	}
	func_541(iVar0, PLAYER::PLAYER_ID(), iParam0, func_540(0, 8));
}

void func_704(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!func_201(iParam0, &Local_16, 1024))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
		{
			iVar0 = func_702(iParam0, uParam1);
			if (!PED::IS_PED_INJURED(iVar0))
			{
				PED::SET_PED_KEEP_TASK(iVar0, bParam2);
				PED::SET_PED_CONFIG_FLAG(iVar0, 168, bParam3);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam4);
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	if (((uParam1->f_16[iParam0 /*12*/].f_2 == 13.22463f && !func_201(iParam0, uParam1, 2)) && !func_201(iParam0, uParam1, 32)) && uParam1->f_321 > 0)
	{
		uParam1->f_321 = (uParam1->f_321 - 1);
		uParam1->f_16[iParam0 /*12*/].f_7 = 255;
	}
	else if (uParam1->f_16[iParam0 /*12*/].f_2 != 13.22463f)
	{
		uParam1->f_16[iParam0 /*12*/].f_7 = 255;
	}
	func_413(iParam0, uParam1, 8);
	func_413(iParam0, uParam1, 16);
	func_1076(iParam0, uParam1, -0.6089872f);
}

bool func_705(int iParam0)
{
	if (Local_16.f_16[iParam0 /*12*/].f_2 != -0.6089872f)
	{
		return false;
	}
	if (func_201(iParam0, &Local_16, 1024))
	{
		return false;
	}
	return true;
}

void func_706(int iParam0)
{
	Local_16.f_16[iParam0 /*12*/].f_11 = -1;
	Local_16.f_16[iParam0 /*12*/].f_3 = 0;
	Local_16.f_16[iParam0 /*12*/].f_2 = 0;
	Local_16.f_16[iParam0 /*12*/].f_4 = 0;
	Local_16.f_16[iParam0 /*12*/].f_1 = 0;
	Local_16.f_16[iParam0 /*12*/] = 0;
	Local_16.f_16[iParam0 /*12*/].f_5 = 0;
	Local_16.f_16[iParam0 /*12*/].f_6 = 0;
	Local_16.f_16[iParam0 /*12*/].f_7 = 255;
	Local_16.f_16[iParam0 /*12*/].f_8 = { 0f, 0f, 0f };
}

void func_707(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (func_560(iParam0, uParam1) != 13.22463f)
	{
		return;
	}
	if (func_877(iParam0, uParam1) != 22)
	{
		return;
	}
	if (func_201(iParam0, uParam1, 2))
	{
		return;
	}
	if (!func_201(iParam0, uParam1, 1))
	{
		iVar0 = ANIMSCENE::_CREATE_ANIM_SCENE(func_1077(), func_1078(), func_549(0), true, true);
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
		{
			return;
		}
		ANIMSCENE::LOAD_ANIM_SCENE(iVar0);
		uParam1->f_16[iParam0 /*12*/].f_5 = NETWORK::_ANIM_SCENE_TO_NET(iVar0);
		func_274(iParam0, uParam1, 1);
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/].f_5))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam1->f_16[iParam0 /*12*/].f_5);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar0, false))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		func_274(iParam0, uParam1, 2);
		return;
	}
}

void func_708(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_560(iParam0, uParam1);
	if (iVar0 == -0.6089872f)
	{
		return;
	}
	switch (iVar0)
	{
		case joaat("DRIVER"):
			func_1079(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("ESCORT"):
			func_1080(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("PASSENGER_ESCORT"):
			func_1081(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("MOUNTED_ESCORT"):
			func_1082(iParam0, uParam1, uParam2, uParam3);
			break;
		case joaat("SHOTGUN_RIDER"):
			func_1083(iParam0, uParam1, uParam2, uParam3);
			break;
	}
}

void func_709(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	vector3 vVar4;

	if (func_199(&Local_2028) != -1.398992E+38f)
	{
		return;
	}
	if (!func_201(iParam0, &Local_16, 1024))
	{
		return;
	}
	if (func_201(iParam0, &Local_16, 32))
	{
		return;
	}
	if (func_201(iParam0, &Local_16, 65536) || func_201(iParam0, &Local_16, 131072))
	{
		return;
	}
	if (func_1084(iParam0, &iVar3))
	{
		if (func_41(&(Local_363[iVar3 /*52*/]), 32))
		{
			iVar2 = 2;
		}
		else if (func_41(&(Local_363[iVar3 /*52*/]), 64))
		{
			iVar2 = 3;
		}
		else
		{
			iVar2 = 4;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar3));
	}
	else
	{
		iVar2 = func_866(iParam1, &uVar0, &iVar1);
		if (iVar2 == 2 || iVar2 == 3)
		{
			iVar2 = 0;
		}
	}
	switch (iVar2)
	{
		case 0:
			vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
			if (func_201(iParam0, &Local_16, 4))
			{
				if (func_867(&Local_2028, vVar4, 1) || func_867(&Local_2028, vVar4, 0))
				{
					return;
				}
			}
		case 1:
			func_413(iParam0, &Local_16, 8);
			func_413(iParam0, &Local_16, 16);
			Local_16.f_16[iParam0 /*12*/].f_7 = 255;
			break;
		case 2:
			func_274(iParam0, &Local_16, 8);
			func_413(iParam0, &Local_16, 16);
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_16, 3.85186E-34f);
			break;
		case 3:
			func_274(iParam0, &Local_16, 16);
			func_413(iParam0, &Local_16, 8);
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_16, 3.85186E-34f);
			break;
		case 4:
			func_413(iParam0, &Local_16, 8);
			func_413(iParam0, &Local_16, 16);
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_63(&Local_16, 3.85186E-34f);
			break;
	}
}

void func_710(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_702(iParam0, uParam1);
	iVar2 = 255;
	if (func_1085(iParam0, uParam1, uParam3))
	{
		func_63(uParam1, 65536);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_917(iParam0, uParam1, 1);
				return;
			}
			func_917(iParam0, uParam1, 2);
			break;
		case 2:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_917(iParam0, uParam1, 1);
				return;
			}
			if (!func_1086(iVar1, &iVar2, &uVar3, 25f))
			{
				Local_2028.f_171.f_2 = -1;
			}
			else
			{
				Local_16.f_16[iParam0 /*12*/].f_7 = iVar2;
				if (func_1087(iVar1, iVar2, &(Local_2028.f_171.f_2), 25f, 2000))
				{
					func_917(iParam0, uParam1, 3);
					func_63(&Local_16, 16);
					return;
				}
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_917(iParam0, uParam1, 3);
			break;
		case 3:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_917(iParam0, uParam1, 1);
				return;
			}
			if (!func_1088(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_917(iParam0, uParam1, 4);
			break;
		case 4:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				func_917(iParam0, uParam1, 1);
				return;
			}
			if (func_1088(iParam0, uParam1, 1, 0))
			{
				return;
			}
			func_917(iParam0, uParam1, 3);
			break;
		case 1:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) != iVar1)
			{
				return;
			}
			func_917(iParam0, uParam1, 2);
			break;
	}
}

void func_711(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_702(iParam0, uParam1);
	if (!func_893(iParam0, uParam1))
	{
		func_704(iParam0, uParam1, 0, 1, 0);
		return;
	}
	iVar1 = func_894(iParam0, uParam1);
	if (!func_338(Local_16.f_16[iParam0 /*12*/].f_11, &Local_16, 1) && func_523(iVar1, iVar0, 1, 1) > 1120403456)
	{
		func_704(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				func_917(iParam0, uParam1, 35);
				return;
			}
			func_917(iParam0, uParam1, 34);
			break;
		case 36:
			break;
		case 34:
			if (func_55(&Local_16, 32))
			{
				func_917(iParam0, uParam1, 36);
				return;
			}
			break;
		case 35:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
			{
				return;
			}
			func_917(iParam0, uParam1, 34);
			break;
	}
}

void func_712(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_702(iParam0, uParam1);
	if (func_582(iVar0))
	{
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 14);
			break;
		case 14:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				return;
			}
			func_917(iParam0, uParam1, 15);
			break;
		case 15:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_917(iParam0, uParam1, 14);
				return;
			}
			if (!func_55(uParam1, 16))
			{
				return;
			}
			func_917(iParam0, uParam1, 16);
			break;
		case 16:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, false))
			{
				func_917(iParam0, uParam1, 14);
				return;
			}
			break;
	}
}

void func_713(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_893(iParam0, uParam1))
	{
		iVar0 = func_894(iParam0, uParam1);
	}
	iVar1 = func_702(iParam0, uParam1);
	if (PED::GET_PED_CONFIG_FLAG(iVar1, 11, false))
	{
		func_274(iParam0, uParam1, 524288);
		func_917(iParam0, uParam1, 24);
		return;
	}
	else
	{
		func_413(iParam0, uParam1, 524288);
	}
	if (func_199(&Local_2028) != -1.398992E+38f && func_201(iParam0, &Local_16, 256))
	{
		if (ENTITY::GET_ENTITY_HEALTH(iVar1) < 25)
		{
			func_413(iParam0, &Local_16, 256);
		}
		else if ((PED::IS_PED_HOGTIED(iVar1) || PED::IS_PED_LASSOED(iVar1)) || PED::GET_PED_IS_BEING_GRAPPLED(iVar1))
		{
			func_413(iParam0, &Local_16, 256);
		}
	}
	if (PED::IS_PED_HOGTIED(iVar1) || (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1) && func_201(iParam0, uParam1, 4)))
	{
		func_274(iParam0, uParam1, 4);
		if (Local_16.f_16[iParam0 /*12*/].f_3 != 28)
		{
			func_917(iParam0, uParam1, 28);
		}
	}
	else
	{
		func_413(iParam0, uParam1, 4);
	}
	if (func_201(iParam0, uParam1, 32))
	{
		return;
	}
	if (Local_16.f_16[iParam0 /*12*/].f_3 != 21)
	{
		func_413(iParam0, &Local_16, 4194304);
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			if (func_33(256) && !func_271(iParam0, 1))
			{
				func_917(iParam0, uParam1, 25);
				func_274(iParam0, &Local_16, 256);
			}
			func_917(iParam0, uParam1, 17);
			break;
		case 25:
			if (func_55(&Local_16, 16))
			{
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (!func_937(iVar1, &uVar2, &fVar3, 1120403456 /* Float: 100f */))
			{
				return;
			}
			func_917(iParam0, uParam1, 26);
			break;
		case 26:
			if (func_55(&Local_16, 16))
			{
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (func_937(iVar1, &uVar2, &fVar3, 1120403456 /* Float: 100f */))
			{
				return;
			}
			func_917(iParam0, uParam1, 25);
			break;
		case 17:
			if (!func_893(iParam0, uParam1))
			{
				func_917(iParam0, uParam1, 18);
				return;
			}
			if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				func_274(iParam0, &Local_16, 256);
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return;
			}
			if (func_903(iVar0) && !func_1089(uParam1->f_16[iParam0 /*12*/].f_11))
			{
				func_917(iParam0, uParam1, 18);
				return;
			}
			if (!func_719(iVar0))
			{
				return;
			}
			if (!func_338(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1))
			{
				return;
			}
			if (func_402(&Local_16) <= 2 && func_739(uParam1, uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			func_917(iParam0, uParam1, 18);
			break;
		case 18:
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				return;
			}
			if (func_201(iParam0, uParam1, 256))
			{
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (func_199(bParam3) != -1.398992E+38f)
			{
				func_917(iParam0, uParam1, 19);
				return;
			}
			func_917(iParam0, uParam1, 21);
			break;
		case 19:
			if (func_1090(iParam0, 1074580685 /* Float: 2.2f */))
			{
				return;
			}
			if (func_55(&Local_16, 16) && func_1091(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 1103626240 /* Float: 25f */))
			{
				func_917(iParam0, uParam1, 20);
				return;
			}
			func_917(iParam0, uParam1, 21);
			break;
		case 20:
			if (func_1090(iParam0, 1074580685 /* Float: 2.2f */))
			{
				func_917(iParam0, uParam1, 19);
				return;
			}
			if ((!func_1091(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 1103626240 /* Float: 25f */) || func_201(iParam0, uParam1, 256)) || func_525(&Local_16, &Local_2028) < 6000)
			{
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (func_1092(iVar1, 1109393408 /* Float: 40f */, 1))
			{
				func_917(iParam0, uParam1, 21);
				return;
			}
			if (!func_927(iVar1))
			{
				return;
			}
			if (!func_338(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1))
			{
				return;
			}
			if (func_720(uParam1, -8.051931E+31f, uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			if (func_720(uParam1, -1.235031E+20f, uParam1->f_16[iParam0 /*12*/].f_11))
			{
				return;
			}
			if ((PED::IS_PED_RAGDOLL(iVar1) || PED::GET_PED_IS_BEING_GRAPPLED(iVar1)) || PED::IS_PED_HOGTIED(iVar1))
			{
				return;
			}
			func_917(iParam0, uParam1, 22);
			break;
		case 21:
			iVar4 = func_904(iVar1, &Local_363, 1125515264 /* Float: 150f */);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4) && func_523(iVar1, iVar4, 0, 0) < 1117782016)
			{
				func_413(iParam0, &Local_16, 4194304);
			}
			else
			{
				func_274(iParam0, &Local_16, 4194304);
			}
			if (func_525(&Local_16, &Local_2028) < 6000)
			{
				return;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_523(iVar1, iVar4, 1, 0);
				if ((((fVar3 < 1101004800 && func_55(&Local_16, 16)) && !func_201(iParam0, uParam1, 4096)) && !func_201(iParam0, uParam1, 256)) && !func_1092(iVar1, (1109393408 + 1092616192), 1))
				{
					func_413(iParam0, &Local_16, 16384);
					func_917(iParam0, uParam1, 20);
					return;
				}
				if (fVar3 < 1125515264)
				{
					return;
				}
			}
			func_917(iParam0, uParam1, 27);
			break;
		case 27:
			iVar4 = func_904(iVar1, &Local_363, 1125515264 /* Float: 150f */);
			if (ENTITY::DOES_ENTITY_EXIST(iVar4))
			{
				fVar3 = func_523(iVar1, iVar4, 1, 0);
				if ((fVar3 + 1092616192) > 1125515264)
				{
					return;
				}
			}
			else
			{
				return;
			}
			func_917(iParam0, uParam1, 21);
			break;
		case 22:
			if (uParam1->f_16[iParam0 /*12*/].f_7 == 255)
			{
				if ((PED::IS_PED_RAGDOLL(iVar1) || PED::GET_PED_IS_BEING_GRAPPLED(iVar1)) || PED::IS_PED_HOGTIED(iVar1))
				{
					func_917(iParam0, &Local_16, 20);
					return;
				}
				if ((!func_1091(iParam2, bParam3, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 1103626240 /* Float: 25f */) || func_525(&Local_16, &Local_2028) < 6000) || func_201(iParam0, &Local_16, 256))
				{
					func_917(iParam0, uParam1, 21);
					return;
				}
				if (func_1092(iVar1, 1109393408 /* Float: 40f */, 1))
				{
					func_917(iParam0, uParam1, 21);
					return;
				}
				if (func_1090(iParam0, 1074580685 /* Float: 2.2f */))
				{
					func_917(iParam0, uParam1, 19);
					return;
				}
			}
			else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam1->f_16[iParam0 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(uParam1->f_16[iParam0 /*12*/].f_7))
			{
				iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(uParam1->f_16[iParam0 /*12*/].f_7);
				if (func_41(iParam2[iVar5 /*52*/], 256))
				{
					uParam1->f_16[iParam0 /*12*/].f_7 = 255;
					func_917(iParam0, uParam1, 23);
					return;
				}
				if (func_41(iParam2[iVar5 /*52*/], 512))
				{
					return;
				}
			}
			if (!func_201(iParam0, uParam1, 2))
			{
				iVar6 = 0;
				while (iVar6 < 32)
				{
					if (!func_41(iParam2[iVar6 /*52*/], 128))
					{
					}
					else if ((iParam2[iVar6 /*52*/])->f_46 != iParam0)
					{
					}
					else if (!func_123(iVar6, 1, 1))
					{
					}
					else
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar6));
						if (func_1093(iParam0, uParam1, iVar7))
						{
						}
						else
						{
							uParam1->f_16[iParam0 /*12*/].f_7 = iVar7;
							return;
						}
					}
					iVar6++;
				}
				uParam1->f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			uParam1->f_16[iParam0 /*12*/].f_7 = 255;
			func_274(iParam0, uParam1, 4096);
			func_917(iParam0, uParam1, 21);
			break;
		case 23:
			if (func_927(iVar1))
			{
				return;
			}
			func_274(iParam0, uParam1, 4096);
			func_917(iParam0, uParam1, 21);
			break;
		case 24:
			if (func_201(iParam0, &Local_16, 524288))
			{
				return;
			}
			func_917(iParam0, &Local_16, 21);
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
			{
				func_917(iParam0, &Local_16, 18);
			}
			break;
		case 28:
			if (func_201(iParam0, &Local_16, 4))
			{
				return;
			}
			func_917(iParam0, &Local_16, 21);
			break;
	}
}

void func_714(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_702(iParam0, uParam1);
	if (!func_201(iParam0, uParam1, 128) && PED::IS_PED_IN_GROUP(iVar1))
	{
		func_274(iParam0, uParam1, 128);
	}
	if (func_55(uParam1, 16) && func_523(iVar0, iVar1, 1, 1) > 1120403456)
	{
		func_704(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 29);
			break;
		case 29:
			if (!func_55(uParam1, 16))
			{
				return;
			}
			if ((func_1094(iVar0, iParam2, 1112014848 /* Float: 50f */) && func_523(iVar0, iVar1, 1, 1) < 1109393408) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false, false))
			{
				func_917(iParam0, uParam1, 30);
				return;
			}
			break;
		case 30:
			if (func_523(iVar0, iVar1, 1, 1) > 1109393408)
			{
				func_917(iParam0, uParam1, 29);
				return;
			}
			break;
	}
}

void func_715(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	iVar1 = func_702(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 6);
			break;
		case 6:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				return;
			}
			func_917(iParam0, uParam1, 7);
			break;
		case 7:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_917(iParam0, uParam1, 11);
				return;
			}
			if (func_271(iParam0, 16))
			{
				return;
			}
			if (func_1086(iVar1, &uVar3, &iVar2, 25f))
			{
				Local_16.f_16[iParam0 /*12*/].f_7 = uVar3;
				if (func_201(iParam0, &Local_16, 2097152))
				{
					func_917(iParam0, uParam1, 10);
				}
				else
				{
					func_917(iParam0, uParam1, 8);
				}
				return;
			}
			break;
		case 8:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_917(iParam0, uParam1, 11);
				return;
			}
			if (!func_1086(iVar1, &uVar3, &iVar2, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 7);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_413(iParam0, &Local_16, 1048576);
			if (iVar2 > 15000)
			{
				func_917(iParam0, uParam1, 9);
				return;
			}
			break;
		case 9:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_917(iParam0, uParam1, 11);
				return;
			}
			if (!func_1086(iVar1, &uVar3, &iVar2, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 7);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_413(iParam0, &Local_16, 1048576);
			if (!func_201(iParam0, &Local_16, 2097152) && func_889(iParam0, 6, &Local_363, 0))
			{
				func_274(iParam0, &Local_16, 2097152);
			}
			if (iVar2 > 28000)
			{
				func_917(iParam0, uParam1, 10);
				return;
			}
			break;
		case 10:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			if (func_55(uParam1, 16))
			{
				func_917(iParam0, uParam1, 11);
				return;
			}
			if (!func_1086(iVar1, &uVar3, &iVar2, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 7);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = uVar3;
			func_413(iParam0, &Local_16, 1048576);
			if (iVar2 > 45000)
			{
				func_917(iParam0, uParam1, 11);
				func_63(&Local_16, 16);
				return;
			}
			break;
		case 11:
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) != iVar1)
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			if (((!func_33(256) && func_908(iVar0, -1, 0)) && !func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1.020647E+37f, -1)) && func_719(iVar0))
			{
				func_917(iParam0, uParam1, 12);
				return;
			}
			break;
		case 12:
			if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
			{
				func_917(iParam0, uParam1, 6);
				return;
			}
			break;
	}
}

void func_716(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_702(iParam0, uParam1);
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 31);
			break;
		case 31:
			if (!func_55(&Local_16, 524288))
			{
				return;
			}
			if (Local_16.f_328 == -1)
			{
				return;
			}
			if (func_1096(&Local_16, 9.716892E+17f, 33))
			{
				return;
			}
			if (func_55(&Local_16, 2.350989E-38f) && !func_201(iParam0, &Local_16, 2048))
			{
				func_917(iParam0, uParam1, 33);
			}
			else if (func_55(&Local_16, 9.403955E-38f) && func_201(iParam0, &Local_16, 2048))
			{
				func_917(iParam0, uParam1, 33);
			}
			break;
		case 32:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) && !PED::IS_PED_RESPONDING_TO_THREAT(iVar0)) && !PED::IS_PED_FLEEING(iVar0))
			{
				func_917(iParam0, uParam1, 31);
				return;
			}
			break;
	}
}

void func_717(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	var uVar6;
	var uVar9;

	iVar0 = func_702(iParam0, uParam1);
	if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
	{
	}
	else
	{
		vVar2 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 44);
			break;
		case 44:
			if (func_55(&Local_16, 512))
			{
				func_917(iParam0, uParam1, 45);
				return;
			}
			if (func_552(iVar0, vVar2, 0) < 1121714176)
			{
				func_917(iParam0, uParam1, 45);
				return;
			}
			if (func_946(iParam0, &iVar1))
			{
				fVar5 = func_523(iVar1, iVar0, 0, 1);
				if (fVar5 > 1133903872 && !func_1097(iVar0, &Local_363, 1128792064 /* Float: 200f */))
				{
					func_704(iParam0, &Local_16, 0, 1, 0);
					return;
				}
			}
			else
			{
				if (!func_410(&uVar9, &uVar6))
				{
					func_917(iParam0, uParam1, 45);
					return;
				}
				Local_16.f_16[iParam0 /*12*/].f_11 = uVar9;
				return;
			}
			break;
		case 45:
			if (!func_1097(iVar0, &Local_363, 1128792064 /* Float: 200f */))
			{
				func_704(iParam0, &Local_16, 0, 1, 0);
				return;
			}
			break;
	}
}

void func_718(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 255;
	iVar2 = func_702(iParam0, uParam1);
	if (Local_16.f_16[iParam0 /*12*/].f_3 != 43 && func_55(uParam1, 524288))
	{
		func_917(iParam0, uParam1, 43);
		return;
	}
	if (Local_16.f_16[iParam0 /*12*/].f_3 != 37 && func_55(uParam1, 16))
	{
		func_917(iParam0, uParam1, 37);
		return;
	}
	if ((func_55(uParam1, 16) && func_893(iParam0, &Local_16)) && func_523(func_894(iParam0, uParam1), iVar2, 1, 1) > 1120403456)
	{
		func_704(iParam0, uParam1, 1, 1, 0);
		return;
	}
	switch (func_877(iParam0, uParam1))
	{
		case 0:
			func_917(iParam0, uParam1, 38);
			break;
		case 38:
			if (func_271(iParam0, 16) || PED::IS_PED_ON_MOUNT(iVar2))
			{
				return;
			}
			func_413(iParam0, &Local_16, 1048576);
			if (func_1086(iVar2, &iVar1, &iVar0, 25f))
			{
				if (func_201(iParam0, &Local_16, 2097152))
				{
					func_917(iParam0, uParam1, 41);
				}
				else
				{
					func_917(iParam0, uParam1, 40);
				}
				return;
			}
			if (func_914(iParam0) == 0 || func_271(iParam0, 1))
			{
				return;
			}
			func_917(iParam0, uParam1, 39);
			break;
		case 39:
			if (func_271(iParam0, 16))
			{
				return;
			}
			if (PED::IS_PED_ON_MOUNT(iVar2))
			{
				func_917(iParam0, uParam1, 38);
				return;
			}
			if (func_1086(iVar2, &iVar1, &iVar0, 25f))
			{
				if (func_201(iParam0, &Local_16, 2097152))
				{
					func_917(iParam0, uParam1, 41);
				}
				else
				{
					func_917(iParam0, uParam1, 40);
				}
				Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
				return;
			}
			break;
		case 40:
			if (!func_1086(iVar2, &iVar1, &iVar0, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 38);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_413(iParam0, &Local_16, 1048576);
			if (iVar0 > 15000)
			{
				func_917(iParam0, uParam1, 41);
				return;
			}
			break;
		case 41:
			if (!func_1086(iVar2, &iVar1, &iVar0, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 38);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_413(iParam0, &Local_16, 1048576);
			if (!func_201(iParam0, &Local_16, 2097152) && func_889(iParam0, 6, &Local_363, 0))
			{
				func_274(iParam0, &Local_16, 2097152);
			}
			if (iVar0 > 28000)
			{
				func_917(iParam0, uParam1, 42);
				return;
			}
			break;
		case 42:
			if (!func_1086(iVar2, &iVar1, &iVar0, 25f))
			{
				if (!func_201(iParam0, &Local_16, 1048576))
				{
					func_274(iParam0, &Local_16, 1048576);
					return;
				}
				func_917(iParam0, uParam1, 38);
				Local_16.f_16[iParam0 /*12*/].f_7 = 255;
				return;
			}
			Local_16.f_16[iParam0 /*12*/].f_7 = iVar1;
			func_413(iParam0, &Local_16, 1048576);
			if (iVar0 > 45000)
			{
				func_917(iParam0, uParam1, 37);
				func_63(&Local_16, 16);
				return;
			}
			break;
		case 43:
			break;
		case 37:
			break;
	}
}

bool func_719(int iParam0)
{
	return ENTITY::GET_ENTITY_SPEED(iParam0) < 1056964608;
}

bool func_720(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (uParam0->f_16[iVar0 /*12*/].f_11 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_721(int iParam0, var uParam1)
{
	func_417(iParam0, uParam1, 16);
	func_416(iParam0, uParam1, 64);
	func_416(iParam0, uParam1, 32);
	func_416(iParam0, uParam1, 1);
	Local_16.f_257[iParam0 /*5*/].f_3 = 255;
	uParam1->f_322 = (uParam1->f_322 - 1);
}

void func_722(int iParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_202(iParam0, &Local_16, 2048) && func_1098(iParam0, &uVar2))
	{
		func_417(iParam0, &Local_16, 2048);
	}
	if (func_1099(iParam0, iParam7))
	{
		if (func_41(&(Local_363[*iParam7 /*52*/]), 32))
		{
			*iParam5 = 2;
		}
		else if (func_41(&(Local_363[*iParam7 /*52*/]), 64))
		{
			*iParam5 = 3;
		}
		else
		{
			*iParam5 = 4;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(*iParam7));
		*iParam6 = PLAYER::GET_PLAYER_PED(iVar0);
		*bParam8 = func_957(iParam0, *iParam7);
	}
	else
	{
		*iParam5 = func_866(iParam1, iParam6, &iVar0);
		*bParam8 = 0;
		*iParam7 = 255;
		if (*iParam5 == 2 || *iParam5 == 3)
		{
			*iParam5 = 0;
		}
	}
	if (*iParam5 == 0 && !func_202(iParam0, &Local_16, 2048))
	{
		return;
	}
	switch (*iParam5)
	{
		case 0:
			if (((func_202(iParam0, &Local_16, 256) || func_202(iParam0, &Local_16, 512)) || func_867(&Local_2028, vParam2, 1)) || func_867(&Local_2028, vParam2, 0))
			{
			}
			else
			{
				func_416(iParam0, &Local_16, 64);
				func_416(iParam0, &Local_16, 8);
				func_416(iParam0, &Local_16, 1);
				func_416(iParam0, &Local_16, 32);
				Local_16.f_257[iParam0 /*5*/].f_3 = 255;
				Local_16.f_257[iParam0 /*5*/].f_2 = -1;
			}
			break;
		case 1:
			func_417(iParam0, &Local_16, 64);
			func_416(iParam0, &Local_16, 1);
			func_416(iParam0, &Local_16, 32);
			Local_16.f_257[iParam0 /*5*/].f_3 = 255;
			if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(*iParam6) && PED::IS_PED_IN_ANY_VEHICLE(*iParam6, true)) && func_114(PED::GET_VEHICLE_PED_IS_IN(*iParam6, true), &Local_16, &uVar1))
			{
				func_417(iParam0, &Local_16, 8);
				Local_16.f_257[iParam0 /*5*/].f_2 = uVar1;
			}
			else
			{
				func_416(iParam0, &Local_16, 8);
				Local_16.f_257[iParam0 /*5*/].f_2 = -1;
			}
			break;
		case 2:
			func_417(iParam0, &Local_16, 64);
			func_417(iParam0, &Local_16, 1);
			func_416(iParam0, &Local_16, 8);
			func_416(iParam0, &Local_16, 32);
			Local_16.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_16.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_16, 3.85186E-34f);
			break;
		case 3:
			func_417(iParam0, &Local_16, 64);
			func_417(iParam0, &Local_16, 32);
			func_416(iParam0, &Local_16, 8);
			func_416(iParam0, &Local_16, 1);
			Local_16.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_16.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_16, 3.85186E-34f);
			break;
		case 4:
			func_417(iParam0, &Local_16, 64);
			func_416(iParam0, &Local_16, 1);
			func_416(iParam0, &Local_16, 32);
			Local_16.f_257[iParam0 /*5*/].f_3 = iVar0;
			Local_16.f_257[iParam0 /*5*/].f_2 = -1;
			func_63(&Local_16, 3.85186E-34f);
			break;
	}
}

void func_723(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	uParam1->f_322 = (uParam1->f_322 - 1);
	if (bParam2)
	{
		func_417(iParam0, uParam1, 4);
		func_63(uParam1, 262144);
		uParam1->f_324++;
		iVar0 = 5;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_16, 9.403955E-38f);
			Local_16.f_328 = iParam0;
		}
	}
	else
	{
		func_63(uParam1, 8192);
		uParam1->f_323++;
		iVar0 = 4;
		if (uParam1->f_322 == 0)
		{
			func_63(&Local_16, 2.350989E-38f);
			Local_16.f_328 = iParam0;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_257[iParam0 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_257[iParam0 /*5*/].f_3))
	{
		Local_16.f_257[iParam0 /*5*/].f_4 = GANG::NETWORK_GET_GANG_ID(Local_16.f_257[iParam0 /*5*/].f_3);
	}
	func_541(iVar0, Local_16.f_257[iParam0 /*5*/].f_3, iParam0, func_540(0, 8));
	func_417(iParam0, uParam1, 2);
}

void func_724(int iParam0, int iParam1)
{
	if (func_202(iParam0, &Local_16, 4096))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	func_541(8, iParam1, iParam0, func_540(0, 8));
	func_417(iParam0, &Local_16, 4096);
}

bool func_725(vector3 vParam0, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	if (bParam7)
	{
		iVar0 = 3;
	}
	else
	{
		iVar0 = 2;
	}
	if (bParam3 != iVar0)
	{
		return false;
	}
	if (iParam6 != 255)
	{
		if (bParam7)
		{
			bVar1 = (bParam5 && func_41(&(Local_363[iParam6 /*52*/]), 131072));
		}
		else
		{
			bVar1 = (bParam5 && func_41(&(Local_363[iParam6 /*52*/]), 65536));
		}
	}
	if (!bVar1 && !func_867(&Local_2028, vParam0, bParam7))
	{
		return false;
	}
	return true;
}

int func_726()
{
	int iVar0;

	if (Local_16.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_16.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_16.f_315 < 6)
	{
		iVar0 = 4;
	}
	else
	{
		iVar0 = 4;
	}
	return func_833((iVar0 + MISC::GET_RANDOM_INT_IN_RANGE(0, 2)), func_728());
}

int func_727()
{
	if (!func_55(&Local_16, 128))
	{
		return func_979(0, func_1100());
	}
	return func_979(MISC::GET_RANDOM_INT_IN_RANGE(func_1101(), func_1102() + 1), 0);
}

int func_728()
{
	int iVar0;

	if (Local_16.f_315 < 2)
	{
		iVar0 = 2;
	}
	else if (Local_16.f_315 < 3)
	{
		iVar0 = 3;
	}
	else if (Local_16.f_315 < 6)
	{
		iVar0 = 6;
	}
	else
	{
		iVar0 = 8;
	}
	return iVar0;
}

bool func_729()
{
	int iVar0;
	struct<5> Var1;
	bool bVar6;

	iVar0 = 1;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_177(Var1, 7.569863E+35f, &bVar6, 0))
	{
		return iVar0;
	}
	return bVar6;
}

Vector3 func_730(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 <= 0 || iParam1 <= 1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 1f, 0f };
	func_949(&vVar0, &(vVar0.f_1), ((1135869952 * IntToFloat((iParam0 - 1))) / IntToFloat((iParam1 - 1))));
	return vVar0;
}

bool func_731(var uParam0)
{
	*uParam0 = 0;
	while (*uParam0 < 20)
	{
		if (Local_16.f_16[*uParam0 /*12*/].f_2 != 0)
		{
		}
		else
		{
			return true;
		}
		*uParam0++;
	}
	return false;
}

bool func_732(vector3 vParam0, float fParam3, var uParam4, float fParam5)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
	{
		return false;
	}
	fVar4 = fParam5;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar5 = 0;
			while (iVar5 < 20)
			{
				if (Local_16.f_16[iVar5 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (func_201(iVar5, &Local_16, 32))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar5 /*12*/]))
				{
				}
				else
				{
					iVar6 = NETWORK::NET_TO_PED(Local_16.f_16[iVar5 /*12*/]);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar6, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*fParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar5 = 0;
			while (iVar5 < 4)
			{
				if ((!func_202(iVar5, &Local_16, 128) || func_202(iVar5, &Local_16, 2)) || func_202(iVar5, &Local_16, 16))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar5 /*5*/]))
				{
				}
				else
				{
					iVar7 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar5 /*5*/]);
					vVar0 = { ENTITY::GET_ENTITY_COORDS(iVar7, false, false) };
					fVar3 = BUILTIN::VDIST(vVar0, vParam0);
					if (fVar3 > fVar4)
					{
					}
					else
					{
						fVar4 = fVar3;
						*uParam4 = { vVar0 };
						*fParam3 = iVar5;
					}
				}
				iVar5++;
			}
			break;
		default:
			return false;
	}
	if (fVar4 == 0f)
	{
		return false;
	}
	return true;
}

float func_733(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5)
{
	return MISC::GET_HEADING_FROM_VECTOR_2D((Param3 - Param0), (Param3.f_1 - Param0.f_1));
}

Vector3 func_734(int iParam0, int iParam1)
{
	vector3 vVar0;

	vVar0 = { 0f, 4f, 0f };
	func_949(&vVar0, &(vVar0.f_1), ((1135869952 * IntToFloat(iParam0)) / IntToFloat(iParam1)));
	return vVar0;
}

void func_735(int iParam0, var uParam1)
{
	uParam1->f_2 = iParam0;
}

bool func_736(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, 128))
		{
		}
		else if (func_113(uParam0->f_257[iVar0 /*5*/].f_1, 16))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_257[iVar0 /*5*/]))
		{
		}
		else if (!bParam2 && func_113(uParam0->f_257[iVar0 /*5*/].f_1, 2))
		{
		}
		else if (!func_113(uParam0->f_257[iVar0 /*5*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_737(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (iParam0 != -1 && Local_16.f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (bParam1)
		{
			if (Local_16.f_16[iVar0 /*12*/].f_3 == 25 || Local_16.f_16[iVar0 /*12*/].f_3 == 26)
			{
			}
			else if (Local_16.f_16[iVar0 /*12*/].f_3 == 17)
			{
			}
			else if (Local_16.f_16[iVar0 /*12*/].f_3 == 0)
			{
			}
			else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_738(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_3[iVar0 /*4*/]))
		{
		}
		else if (!func_113(uParam0->f_3[iVar0 /*4*/].f_1, iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_739(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam1 != -1 && uParam0->f_16[iVar0 /*12*/].f_11 != iParam1)
		{
		}
		else if (!func_1103(uParam0->f_16[iVar0 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_740(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (iParam2 != -1 && iParam2 == iVar0)
		{
		}
		else if (func_113(uParam0->f_3[iVar0 /*4*/].f_1, iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_741()
{
	if (func_55(&Local_16, 2.350989E-38f))
	{
		return true;
	}
	else if (func_55(&Local_16, 9.403955E-38f))
	{
		return true;
	}
	return false;
}

int func_742()
{
	if (func_55(&Local_16, 2.350989E-38f))
	{
		return -2.936771E+35f;
	}
	else if (func_55(&Local_16, 9.403955E-38f))
	{
		return 2.74023E-18f;
	}
	return 0;
}

void func_743(int iParam0)
{
	Local_16.f_299.f_1 = iParam0;
}

void func_744(int iParam0)
{
	func_122(&(Local_16.f_299.f_5), iParam0);
}

bool func_745(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113(Local_363[iVar0 /*52*/].f_41.f_1, 1))
		{
		}
		else if (func_113(Local_363[iVar0 /*52*/].f_41.f_1, iParam0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_746(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (func_608(2))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		Local_16.f_329[iVar0] = 255;
		iVar0++;
	}
	bVar1 = !func_1104(iParam0);
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (!func_257(1, iVar3))
			{
			}
			else
			{
				if (!bVar1)
				{
					if (!func_41(&(Local_363[iVar3 /*52*/]), 32))
					{
					}
					else
					{
						Jump @172; //curOff = 149
						if (!func_41(&(Local_363[iVar3 /*52*/]), 64))
						{
						}
						else
						{
							Local_16.f_329[iVar0] = iVar4;
							iVar0++;
							if (iVar0 >= 7)
							{
							}
							else
							{
								iVar2++;
							}
							func_744(2);
						}
					}
				}
			}
		}
	}
}

bool func_747(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (bParam1 && !func_113(Local_363[iVar0 /*52*/].f_41.f_1, 1))
		{
		}
		else if (Local_363[iVar0 /*52*/].f_41 == iParam0)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_748(int iParam0)
{
	var uVar0[1];
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = uVar0;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar4)))
		{
		}
		else
		{
			iVar3 = 0;
			while (iVar3 < iVar2)
			{
				uVar0[iVar3] = (uVar0[iVar3] || Local_363[iVar4 /*52*/].f_41.f_2[iVar3]);
				iVar3++;
			}
		}
		iVar4++;
	}
	iVar5 = 0;
	while (iVar5 < iParam0)
	{
		if (!MISC::_IS_BIT_FLAG_SET(&uVar0, iVar5))
		{
			return false;
		}
		iVar5++;
	}
	return true;
}

void func_749(int iParam0)
{
	func_436(&(Local_16.f_299.f_5), iParam0);
}

void func_750()
{
	Local_16.f_299.f_2++;
}

void func_751(int iParam0, int iParam1, int iParam2)
{
	switch (iParam2)
	{
		case joaat("ATTACK"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, -0.2036453f);
					break;
			}
			break;
		case joaat("DEFEND"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 1.169246E+13f);
					break;
			}
			break;
		case joaat("DELIVER"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 2.658125E+32f);
					break;
			}
			break;
		case joaat("COLLECT"):
			switch (iParam1)
			{
				case 0:
					func_755(iParam0, 9.338525E+34f);
					break;
			}
			break;
	}
}

int func_752(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	var uVar0;
	struct<2> Var4;

	Var4.f_1 = 10;
	return func_759(bParam0, &uVar0, iParam1, &Var4, iParam2, iParam3, iParam4, bParam5);
}

int func_753(int iParam0)
{
	return Global_1138658[iParam0 /*56*/];
}

int func_754(int iParam0, int iParam1, int iParam2)
{
	if (iParam0 > iParam2)
	{
		return iParam2;
	}
	else if (iParam0 < iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_755(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return;
	}
	if (RDR_LOCAL_LOAD_S >= 11)
	{
		return;
	}
}

var func_756(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_813(2.486129E-12f, func_812(iParam0)) };
	return func_512(Var0, -1);
}

int func_757(int iParam0)
{
	return func_1105(iParam0, 4.344893E-07f, 1);
}

int func_758(int iParam0)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	int iVar7;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar5 = func_1106(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (iVar5 == 0)
	{
		iVar5 = 1;
	}
	if (!func_1107(&Var0))
	{
		return 0;
	}
	if (!func_1108(&Var0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&Var0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&Var0, 8, func_1109(iVar5), 0, 1))
	{
		return 0;
	}
	uVar6 = Var0.f_1;
	switch (iVar5)
	{
		case 1:
			if (!func_1108(&Var0, 30, 0, 0, 1))
			{
				return 0;
			}
			if (!func_1108(&Var0, 9, 0, 0, 1))
			{
				return 0;
			}
			if (!func_1108(&Var0, 10, iParam0, 0, 0))
			{
				return 0;
			}
			iVar7 = func_1110(&Var0, 1);
			if (iVar7 == 0)
			{
				return 0;
			}
			Var0.f_1 = uVar6;
			if (!func_1108(&Var0, 9, 0, 0, 1))
			{
				return 0;
			}
			if (!func_1108(&Var0, 10, iVar7, 0, 1))
			{
				return 0;
			}
			return func_1111(&Var0, 1);
		default:
			break;
	}
	return 0;
}

int func_759(bool bParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<17> Var3;

	if (bParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 1;
	}
	if (bParam7)
	{
		bVar0 = (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		bParam7 = bVar0;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar1);
	if (iVar1 != 0)
	{
		func_755(iParam2, -3.005759E+25f);
	}
	if (!bParam7)
	{
		if (!NETWORK::_0x64A36BA85CE01A81(&uVar2, &(uParam3->f_1), &(iParam2->f_1), uParam1))
		{
			return 0;
		}
	}
	else if (!NETWORK::_0x7A8E8DF782B47EB0(&uVar2, &(iParam2->f_1), uParam1))
	{
		return 0;
	}
	Var3.f_1 = 11;
	Var3.f_16 = 255;
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_1112(uParam1, bParam0, Var3);
	return 1;
}

void func_760(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = iParam0;
	while (*iParam2 >= 32)
	{
		*iParam2 = (*iParam2 - 32);
		*iParam1++;
	}
}

void func_761(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1113(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_762(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1113(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

bool func_763(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_482())
	{
		*iParam1 = 0;
		return true;
	}
	if (func_1114(iParam0, 2))
	{
		if (func_1114(iParam0, 3))
		{
			iVar3 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			if (func_1115(PLAYER::PLAYER_ID(), &uVar0, &iVar1, 1))
			{
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
				{
					return false;
				}
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
				{
					return false;
				}
				iVar2 = func_1116(iVar3, 1);
				if (iVar2 == iVar1)
				{
					return true;
				}
			}
		}
		else if (func_1118(func_1117(iParam0)))
		{
			return false;
		}
	}
	else
	{
		iVar4 = 0;
		while (iVar4 <= 3)
		{
			if (func_1119(iVar4) != iParam0)
			{
			}
			else if (func_1120(iVar4) != 2)
			{
			}
			else
			{
				*iParam1 = iVar4;
				return true;
			}
			iVar4++;
		}
	}
	return false;
}

bool func_764(int iParam0, int iParam1)
{
	return (Global_1120482[iParam0 /*4533*/].f_2437 && iParam1) != 0;
}

bool func_765(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::SET_BIT(uParam0[iVar0], iVar1);
	return !bVar2;
}

bool func_766(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
	MISC::CLEAR_BIT(uParam0[iVar0], iVar1);
	return bVar2;
}

void func_767(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
		}
	}
	else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
		func_1121(iParam0);
	}
}

void func_768(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28305), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28304), iParam0);
}

void func_769(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0);
		}
	}
	else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_259), iParam0);
		func_1121(iParam0);
	}
}

void func_770(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28304), iParam0);
}

char* func_771()
{
	return "Match_End_Timer";
}

char* func_772()
{
	return "RDRO_Countdown_Sounds";
}

char* func_773()
{
	return "Round_End_Timer";
}

char* func_774()
{
	return "10S";
}

char* func_775()
{
	return "Out_Of_Bounds";
}

char* func_776()
{
	return "321_Countdown";
}

char* func_777()
{
	return "HUD_MP_FREE_MODE";
}

char* func_778()
{
	return "target_spawn";
}

char* func_779()
{
	return "MP005_OBHELT_sounds";
}

int func_780(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case 1:
			return -1.650272E-15f;
		case 2:
			return -2.492079E+20f;
		case 3:
			return 8217705f;
		case 4:
			return -1.856233E-32f;
		case 5:
			return -1.911328E-28f;
		case 6:
			return 8.381184E-22f;
		case 7:
			return 9.323113E-17f;
		case 8:
			return 5.298199E-21f;
		case 9:
			return 1.251051E+26f;
		case 10:
			return -1.503106E-20f;
		case 11:
			return -2.15098E-08f;
		case 12:
			return -72.71923f;
		case 13:
			return -7.383845E-26f;
		case 14:
			return 4454179f;
		case 15:
			return -1.208705E+16f;
		case 16:
			return -3.909027E-22f;
		case 17:
			return -3.218126E+13f;
		case 18:
			return -0.003058001f;
		case 19:
			return 2.779826E+37f;
		case 20:
			return -5.414377E+35f;
		case 21:
			return -4.615115E-09f;
		case 22:
			return 8.109539E-23f;
		case 23:
			return 5.286867E-36f;
		case 24:
			return 4.065167E-25f;
		case 25:
			return 6.538902E+31f;
		case 26:
			return 1.040166E+09f;
		case 27:
			return 1.308318E-34f;
		case 28:
			return 1.238993E+10f;
		case 29:
			return 1.080873E-24f;
		case 30:
			return -1.975638E-12f;
		case 31:
			return -4.626297E+11f;
		case 32:
			return -53.98294f;
		case 33:
			return 7.823787E+27f;
		case 34:
			return -3.184162E+10f;
		case 35:
			return -1.960684E+31f;
		case 36:
			return 3.373562E-16f;
		case 37:
			return -1.63599E-05f;
		case 38:
			return 3.470325E+32f;
		case 39:
			return -2.468865E-31f;
		case 40:
			return 8.133554E+29f;
		case 41:
			return 3.60728E-28f;
		case 42:
			return 3.077905E-30f;
		case 43:
			return -4.873788E-21f;
		case 44:
			return -1.840275E+19f;
		case 45:
			return -3.014988E-19f;
		case 46:
			return 8.62953E-22f;
		case 47:
			return 4.027636E-23f;
		case 48:
			return -4.840916E-07f;
		case 49:
			return -2.809316E-11f;
		case 50:
			return -5.382291E-30f;
		case 51:
			return -5.527518E+34f;
		case 52:
			return 6.137253E-27f;
		case 53:
			return -4.438688E-12f;
		case 54:
			return 1.486411E+18f;
		case 55:
			return 1.578589E-22f;
		case 56:
			return -3.582313E-31f;
		case 57:
			return -3232.209f;
		case 58:
			return 4.416884E+23f;
		case 59:
			return -6.716894E-12f;
		case 60:
			return 1.814925E-06f;
		case 61:
			return 1.623417E-33f;
		case 62:
			return -4.608549E-33f;
		case 63:
			return 2.086966E+34f;
		case 64:
			return -9.707458E-37f;
		case 65:
			return 1.09716E+20f;
		case 66:
			return 2.243992E-10f;
		case 67:
			return -2.109824E-18f;
		case 68:
			return -3.704497E-31f;
		case 69:
			return 2.969136E-26f;
		case 70:
			return -9.545294E+21f;
		case 71:
			return 2.688847E+23f;
		case 72:
			return 3.74777E-05f;
		case 73:
			return -1.065784E+33f;
		case 74:
			return -6560485f;
		case 75:
			return -1.291883E+26f;
		case 76:
			return 5.674028E-05f;
		case 77:
			return -1.040701E+36f;
		case 78:
			return 2.42736E+11f;
		case 79:
			return -1.659076E+25f;
		case 80:
			return 1.705934E+34f;
		case 81:
			return 9.852331E+12f;
		case 82:
			return -2.318358E+14f;
		case 83:
			return 992267.5f;
		case 84:
			return 3.876603E+29f;
		case 85:
			return 4.400584E+30f;
		case 86:
			return -4.730458E+37f;
		case 87:
			return joaat("PERSONA_HONOR_ACTION__MISSION_POS_TWENTYFIVE");
		case 88:
			return 2.407677E+36f;
		case 89:
			return 2.528333E-16f;
		case 90:
			return 9.203827E+11f;
		case 91:
			return 4.345254E+33f;
		case 92:
			return -1.186832E-25f;
		case 93:
			return -0.2578058f;
		case 94:
			return 5.921011E-16f;
		case 95:
			return -1.309901E-09f;
		case 96:
			return -1.954541E+36f;
		case 97:
			return 3961451f;
		case 98:
			return -2.196854E-36f;
		case 99:
			return 9.503152E+28f;
		case 100:
			return -1.375416E+27f;
		case 101:
			return -6.915019E-36f;
		case 102:
			return -6.412489E-31f;
		case 103:
			return -6.325093E+37f;
		case 104:
			return 6.384474E-15f;
		case 105:
			return -4.258934E+21f;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_781(int iParam0, bool bParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1149417.f_3876.f_2[func_507(iParam0, 1) /*4*/] == bParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_1122(iParam0);
	}
	Global_1149417.f_3876.f_2[func_507(iParam0, 1) /*4*/] = bParam1;
}

void func_782(int iParam0, int iParam1, struct<2> Param2, int iParam4)
{
	struct<28> Var0;

	if (!Global_1110244.f_18)
	{
		return;
	}
	if (!func_28(Param2))
	{
		return;
	}
	if (!func_475(iParam0))
	{
		return;
	}
	if (!func_477(iParam1))
	{
		return;
	}
	if (!func_1123(iParam4))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	Var0.f_5 = iParam0;
	Var0.f_6 = iParam1;
	Var0.f_7 = { Param2 };
	Var0.f_9 = iParam4;
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_4 = 1;
	func_385(&Var0);
}

var func_783(int iParam0)
{
	return func_1124(iParam0);
}

int func_784()
{
	return Global_1902565;
}

void func_785(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(-9.257147E-31f, func_812(iParam0)) };
	func_1125(Var0, iParam1);
}

void func_786(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(1.341232E-09f, func_812(iParam0)) };
	func_1126(Var0, iParam1);
}

void func_787(int iParam0)
{
	if (func_765(&(Global_1110244.f_251.f_6), iParam0, 2))
	{
	}
}

void func_788(int iParam0)
{
	if (func_765(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/]), iParam0, 2))
	{
	}
}

void func_789(float fParam0)
{
	func_1127(&(Global_1297394.f_157), fParam0);
}

void func_790(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(3.958559E-23f, func_812(iParam0)) };
	func_1125(Var0, iParam1);
}

int func_791(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_813(6.884012E+23f, func_812(iParam0)) };
	return func_1128(Var0);
}

bool func_792(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	iVar0 = func_1129(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_1130(1, iParam0);
		if (bVar1 == 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
		{
			return true;
		}
	}
	return false;
}

void func_793(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(6.884012E+23f, func_812(iParam0)) };
	func_1131(Var0, iParam1);
}

void func_794(int iParam0, bool bParam1)
{
	float fVar0;
	struct<2> Var1;

	if (bParam1)
	{
		fVar0 = 1.606832E+27f;
	}
	else
	{
		fVar0 = 1.039154E+16f;
	}
	Var1 = { func_813(fVar0, func_812(iParam0)) };
	func_817(Var1);
}

int func_795(int iParam0)
{
	return func_478(iParam0);
}

void func_796(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar35;

	if (!func_1132(*uParam0))
	{
		return;
	}
	vVar3 = 10;
	vVar3.f_1.f_1 = -1;
	vVar3.f_1.f_2 = -1;
	vVar3.f_1.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_1 = -1;
	vVar3.f_1.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_3.f_2 = -1;
	vVar35.f_1 = -1;
	func_1133(&vVar3);
	iVar0 = vVar3.f_31;
	while (iVar0 >= 0)
	{
		if (iVar0 == 0)
		{
		}
		else
		{
			if (iVar0 == 10)
			{
			}
			else
			{
				iVar1 = 0;
				if (!func_1132(vVar3[(iVar0 - 1) /*3*/]))
				{
				}
				else
				{
					vVar35.x = vVar3[(iVar0 - 1) /*3*/];
					vVar35.f_1 = vVar3[(iVar0 - 1) /*3*/].f_2;
					vVar35.f_2 = func_1134(vVar3[(iVar0 - 1) /*3*/].f_1, 0);
					if (func_1135(uParam0, &vVar35))
					{
						iVar2 = func_1136((iVar0 - 1));
					}
					else
					{
						iVar1 = func_1136((iVar0 - 1));
						func_1137(iVar1, iVar0);
					}
				}
			}
			iVar0 = (iVar0 + -1);
		}
	}
	if (iVar2 == 0)
	{
		iVar2 = func_1138(uParam0);
		if (iVar2 == 0)
		{
			return;
		}
	}
	func_1137(iVar2, 0);
}

void func_797(int iParam0, struct<2> Param1, bool bParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_427(iParam0);
	iVar2 = func_821();
	iVar3 = func_106(Param1);
	iVar5 = func_795(iVar0);
	if (bParam3)
	{
		iVar1 = 2;
	}
	else
	{
		iVar1 = 1;
	}
	switch (iVar5)
	{
		case 15:
			if (func_492(iParam0, 4))
			{
				iVar4 = 1;
			}
			else
			{
				iVar4 = 0;
			}
			break;
		default:
			iVar4 = 0;
			break;
	}
	if (!func_492(iParam0, 8))
	{
		iVar2 = 0;
	}
	func_1139(iVar0, iVar1, &uParam4, iVar3, iVar2, iVar4);
	if (func_492(iParam0, 8))
	{
		if (iVar2 != 0)
		{
			func_1140(iParam0);
			func_1141(iParam0);
		}
	}
}

int func_798(int iParam0)
{
	switch (func_481(iParam0))
	{
		case joaat("BOUNTY"):
			return 1;
		case joaat("OUTLAW"):
			return 2;
		default:
			break;
	}
	return 0;
}

void func_799(int iParam0, int iParam1)
{
	Global_1110244.f_268.f_6[iParam0] = (Global_1110244.f_268.f_6[iParam0] + iParam1);
}

void func_800(int iParam0)
{
	if (Global_1203937.f_420 != 2)
	{
		return;
	}
	if (Global_1203937.f_420.f_1 != 0)
	{
		return;
	}
	Global_1203937.f_420.f_1 = iParam0;
	POSSE::_0xC584FF658B2E55DA(iParam0);
}

void func_801(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;

	if (bParam1)
	{
		fVar0 = 1.606832E+27f;
		iVar1 = func_824(iParam0);
	}
	else
	{
		fVar0 = 1.039154E+16f;
		iVar1 = func_825(iParam0);
	}
	Var3 = { func_813(fVar0, iVar1) };
	func_817(Var3);
	if (func_826(iParam0) != 0)
	{
		if (bParam2)
		{
			return;
		}
		iVar2 = func_826(iParam0);
		Var5 = { func_813(fVar0, iVar2) };
		func_817(Var5);
	}
}

void func_802()
{
	func_1142(4);
	func_829(1);
}

bool func_803(int iParam0, int iParam1)
{
	return (Global_1138658[iParam0 /*56*/].f_34 && iParam1) != 0;
}

void func_804(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_34 = (Global_1138658[iVar0 /*56*/].f_34 || iParam0);
}

struct<2> func_805(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

bool func_806(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_959(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_807(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_810(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_809(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	if (!func_28(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_588(Param0) && !func_806(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_23(Param0) == 0)
	{
	}
	if ((bParam3 == 0 || bParam3 == 1) || bParam3 == 4)
	{
		if (func_959(Param0) == 3)
		{
			func_1143(1, -4.059512E-23f);
		}
		else if (func_959(Param0) == 4)
		{
			func_1143(0, -4.059512E-23f);
		}
	}
	if ((func_959(Param0) == 3 || func_959(Param0) == 1) || ((bParam5 && func_959(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_23(Param0))))
	{
		if (bParam3 != -1)
		{
			func_1144(Param0, bParam3, bParam4, 255, 0);
		}
		else
		{
			func_1144(Param0, 2, bParam4, 255, 0);
		}
	}
	func_1145(Param0, 0);
	if (func_29(func_982(0), Param0))
	{
		func_1146(1);
		func_1147(0);
		func_1148(0);
		func_1149(1);
	}
	func_1150(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_1151(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

bool func_810(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

struct<2> func_811(int iParam0)
{
	if (!func_473(iParam0))
	{
		return func_1152();
	}
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

int func_812(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WAR_VET"):
			return 3.520701E+20f;
		case joaat("FLACO_HERNANDEZ"):
			return -8.219625E+11f;
		case joaat("JOSIAH_TRELAWNY"):
			return 5.901083E-08f;
		case joaat("JOE"):
			return -5.211906E-18f;
		case joaat("SEAN_MACQUIRE"):
			return -1.936381E+37f;
		case joaat("BLACK_BELLE"):
			return 2.007024E-07f;
		case joaat("SADIE_ADLER"):
			return -1.178164E-32f;
		case joaat("MAMMA_WATSON"):
			return 495.8183f;
		case joaat("THOMAS_SKIFF_CAPTAIN"):
			return -335807.6f;
		case joaat("OBEDIAH_HINTON"):
			return -2.406148E+28f;
		case joaat("ANTHONY_FOREMAN"):
			return 2.829673E-18f;
		case joaat("LANGTON"):
			return 3.030559E+29f;
		case joaat("BONNIE"):
			return -9.273581E-30f;
		case joaat("SHERIFF_FREEMAN"):
			return -1.826038E-16f;
		case joaat("SHAKY"):
			return 960427.1f;
		case joaat("WALLACE_TRAIN_CLERK"):
			return -6.066405E+31f;
		case joaat("ALDEN"):
			return -0.001918495f;
		case joaat("HECTOR"):
			return -1.691306E+08f;
		case joaat("THE_BOY"):
			return -6.491929f;
		case joaat("ABERDEEN_PIG_FARMERS"):
			return -2.292522E-15f;
		case joaat("SAINT_DENIS_BOUNTY_BOARD"):
			return 1.819777E+22f;
		case joaat("VALENTINE_BOUNTY_BOARD"):
			return -8.339605E+17f;
		case joaat("RHODES_BOUNTY_BOARD"):
			return -3.095662E+18f;
		case joaat("STRAWBERRY_BOUNTY_BOARD"):
			return -56125.96f;
		case joaat("TUMBLEWEED_BOUNTY_BOARD"):
			return 4.244674E-15f;
		case joaat("ANNESBURG_BOUNTY_BOARD"):
			return 1.949879E-20f;
		case joaat("ARMADILLO_BOUNTY_BOARD"):
			return 7.083137E-25f;
		case joaat("BENEDICT_POINT_BOUNTY_BOARD"):
			return -1.957789E-16f;
		case joaat("BLACKWATER_BOUNTY_BOARD"):
			return 2.823215E-22f;
		case joaat("EMERALD_RANCH_BOUNTY_BOARD"):
			return 1.638145E+22f;
		case joaat("VAN_HORN_BOUNTY_BOARD"):
			return -2.609032E+35f;
		case joaat("RIGGS_BOUNTY_BOARD"):
			return 7.13322E+24f;
		case joaat("WALLACE_BOUNTY_BOARD"):
			return 5.521273E+35f;
		case joaat("CRIPPS"):
			return -2.926106E+32f;
		case joaat("MOONSHINER"):
			return 3.54277E+13f;
		case joaat("MARCEL"):
			return 8745.245f;
		case -465704507:
			return -1.413565E-23f;
		default:
			break;
	}
	return 0;
}

struct<2> func_813(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_814(struct<2> Param0, int iParam2)
{
	func_818(Param0, iParam2);
}

void func_815(struct<2> Param0, int iParam2)
{
	func_818(Param0, func_1153(iParam2));
}

void func_816(struct<2> Param0, int iParam2)
{
	func_818(Param0, iParam2);
}

void func_817(var uParam0, var uParam1)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, 1);
}

void func_818(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&uParam0, iParam2, true))
	{
		return;
	}
}

void func_819(int iParam0)
{
	if (!func_1154(Global_1144511[Global_1295619 /*83*/].f_74, iParam0))
	{
		func_1155(&(Global_1144511[Global_1295619 /*83*/].f_74), iParam0);
		Global_1144470.f_32 = Global_1144511[Global_1295619 /*83*/].f_74;
	}
}

int func_820(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1;
		case joaat("EASY"):
			return 0;
		case joaat("MEDIUM"):
			return 1;
		case joaat("HARD"):
			return 2;
		case joaat("FLOW"):
			return 3;
		default:
			break;
	}
	return -1;
}

float func_821()
{
	return 6.226583E-26f;
}

void func_822(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	int iVar7;

	Var2.f_1 = -1;
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(fParam1->f_2))
	{
	}
	if (!func_1156(*iParam0))
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&Var2, bParam2, 4);
	Var2.f_4 = iParam0->f_1;
	iVar7 = PLAYER::PLAYER_ID();
	iVar1 |= 8;
	switch (fParam1->f_1)
	{
		case 2:
			iVar1 |= 2;
			break;
		case 1:
			iVar1 |= 1;
			break;
		default:
			break;
	}
	switch (*fParam1)
	{
		case -1365731393:
		case joaat("NONE"):
			iVar1 |= 16;
			break;
		case -508253498:
			iVar1 |= 80;
			break;
		case 566295171:
			iVar1 |= 144;
			break;
		case -1881397389:
			iVar1 |= 272;
			break;
		case -356110550:
			iVar1 |= 528;
			break;
		case -406386912:
			iVar1 |= 1040;
			break;
		case 1759419243:
			iVar1 |= 2064;
			break;
		case 2062237572:
			iVar1 |= 4112;
			break;
		case 1923632299:
			iVar1 |= 32;
			break;
		case 475709606:
			iVar1 |= 2080;
			break;
		default:
			break;
	}
	if (func_478(*iParam0) == 7 && bParam2->f_2 == 9.903063E+30f)
	{
		if (func_1157(1.853402E+37f, 1, 1, 0) == 0)
		{
		}
		else if (UNLOCK::UNLOCK_IS_UNLOCKED(2.768026E+10f) && UNLOCK::UNLOCK_IS_VISIBLE(2.768026E+10f))
		{
			iVar1 |= 256;
		}
		else if (UNLOCK::UNLOCK_IS_UNLOCKED(1.476556E+09f) && UNLOCK::UNLOCK_IS_VISIBLE(1.476556E+09f))
		{
			iVar1 |= 128;
		}
		else
		{
			iVar1 |= 64;
		}
	}
	if (GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar7)) == iVar7)
	{
		iVar1 |= 16384;
	}
	if (iVar7 == fParam1->f_2)
	{
		iVar1 |= 32768;
	}
	func_1158(*iParam0, iVar1, iParam3, &Var2);
	func_1159(*iParam0, iVar1);
	func_1160(*iParam0, iVar1, &Var2);
	switch (fParam1->f_1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 2.081675E+18f;
			break;
		case 2:
			iVar0 = 2.375164E-09f;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1161(*iParam0, iVar0, iParam0->f_1);
	}
}

bool func_823(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return 1.728604E+32f;
		case joaat("OUTLAW"):
			return 1.728604E+32f;
		case joaat("SHERIFF"):
			return 1.728604E+32f;
		case joaat("POST"):
			return 1.728604E+32f;
		case joaat("TRAIN"):
			return 1.728604E+32f;
		case joaat("TRADER"):
			return 5.468247E-24f;
		default:
			break;
	}
	return 0;
}

int func_825(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return -0.001028629f;
		case joaat("SHERIFF"):
			return -0.001028629f;
		case joaat("POST"):
			return -0.001028629f;
		case joaat("TRAIN"):
			return -0.001028629f;
		case joaat("OUTLAW"):
			return -0.001028629f;
		case joaat("BOUNTY"):
			return 8.467659E+11f;
		case joaat("TRADER"):
			return 3.721219E-34f;
		case joaat("MOONSHINER"):
			return -1.723788E+12f;
		case 1976336482:
			return -1.416347E+18f;
		default:
			break;
	}
	return 0;
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case joaat("OUTLAW"):
			return -1.24819E-23f;
		default:
			break;
	}
	return 0;
}

int func_827(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1162(iParam0, &iVar0, &iVar1))
	{
		return 0;
	}
	STATS::CHAL_ADD_GOAL_PROGRESS_INT(iVar0, iVar1, iParam1);
	return 1;
}

void func_828(int iParam0)
{
	func_1163(iParam0);
}

void func_829(int iParam0)
{
	func_1164(iParam0);
}

void func_830(int iParam0)
{
	if (func_854(0, 0, 0, 0) || iParam0 > (Global_1295619.f_16 - Global_1110244.f_3659))
	{
		Global_1110244.f_3659 = Global_1295619.f_16;
		Global_1110244.f_3659.f_1 = iParam0;
	}
}

void func_831(int iParam0)
{
	if (func_765(&Global_1140708, iParam0, 1))
	{
	}
}

void func_832(int iParam0, int iParam1)
{
	Global_1140708.f_2[iParam0] = iParam1;
}

int func_833(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

var func_834(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_2;
}

bool func_835(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;

	if (!func_1156(iParam0))
	{
		return false;
	}
	if (!func_1165(&Var0))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 18, iParam1, 0, 0))
	{
		return false;
	}
	func_1167(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	return func_1168(Var0, iParam1, bParam3, &uVar7, &uVar8);
}

int func_836(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_518(iParam1))
	{
		if (iVar0 == func_509(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_509(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_837(int iParam0)
{
	if (!func_518(iParam0))
	{
		return;
	}
	Global_1138658[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_838(int iParam0, int iParam1, int iParam2)
{
	return (Global_1138658[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

void func_839()
{
	if (!func_1169())
	{
		return;
	}
	if (!func_28(Global_1051268))
	{
		return;
	}
	func_1170(&Global_1051268);
}

void func_840(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_1[iParam0] = (Global_1138658[iVar0 /*56*/].f_1[iParam0] - (Global_1138658[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

bool func_841(int iParam0)
{
	return func_964(&Global_1140708, iParam0, 1);
}

int func_842(int iParam0)
{
	return Global_1140708.f_2[iParam0];
}

int func_843(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return Global_1901671.f_316.f_42;
		case 0:
			return Global_1901671.f_316.f_43;
		default:
			break;
	}
	return 0;
}

bool func_844()
{
	return Global_1110244.f_21.f_40;
}

int func_845()
{
	return Global_1110244.f_21.f_40.f_1;
}

void func_846(var uParam0, int iParam1, struct<2> Param2)
{
	struct<28> Var0;
	var uVar31;

	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 255;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = 7;
	Var0.f_19.f_1 = 255;
	Var0.f_19.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_19.f_1.f_1.f_1.f_1.f_1.f_1.f_1 = 255;
	Var0.f_27.f_1 = -1;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar31, PLAYER::PLAYER_ID());
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_6 = uParam0;
	Var0.f_5 = iParam1;
	Var0.f_11 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var0.f_4 = 7;
	Var0.f_16 = 5.025418E-28f;
	Var0.f_7 = { Param2 };
	func_384(&Var0, uVar31);
}

void func_847(int iParam0)
{
	Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_48 = (Global_1138658[PLAYER::PLAYER_ID() /*56*/].f_48 || iParam0);
}

int func_848(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2028.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_363[iParam0 /*52*/].f_2[iVar0] != 0)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_849(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = Local_2028.f_634;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_363[iParam0 /*52*/].f_2.f_2[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_850(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (func_441(iVar0, 1))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	func_847(1);
}

void func_851(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (func_441(iVar0, 2))
	{
		return;
	}
	if (!func_442(iVar0))
	{
		return;
	}
	func_847(2);
}

int func_852(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_853(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
	}
	else if (func_557(iParam0))
	{
		iVar0 = func_1171(iParam0, 6);
	}
	else
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || !NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::_0xF260AF6F43953316(iVar0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
	{
		return 0;
	}
	if (Local_2028.f_10 == -1.398992E+38f)
	{
		if (!ENTITY::IS_ENTITY_A_PED(iVar0))
		{
			return 0;
		}
		iVar2 = 0;
		while (iVar2 < 20)
		{
			if ((Local_16.f_16[iVar2 /*12*/] != iVar1 || Local_16.f_16[iVar2 /*12*/].f_2 != 13.22463f) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar2 /*12*/]))
			{
			}
			else
			{
				*uParam1 = iVar2;
				*uParam2 = iVar0;
				return 1;
			}
			iVar2++;
		}
	}
	else if (Local_2028.f_10 == -1.484548E+24f)
	{
		if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
		{
			return 0;
		}
		iVar3 = 0;
		while (iVar3 < 4)
		{
			if ((((Local_16.f_257[iVar3 /*5*/] != iVar1 || !func_202(iVar3, &Local_16, 128)) || func_202(iVar3, &Local_16, 2)) || func_202(iVar3, &Local_16, 16)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar3 /*5*/]))
			{
			}
			else
			{
				*uParam1 = iVar3;
				*uParam2 = iVar0;
				return 1;
			}
			iVar3++;
		}
	}
	return 0;
}

bool func_854(float fParam0, bool bParam1, bool bParam2, float fParam3)
{
	if (fParam3 == 0f)
	{
		fParam3 = Global_1901671.f_316.f_170;
	}
	if (bParam1)
	{
		fParam3 = (Global_1901671.f_316.f_170 + 1112014848);
	}
	if (bParam1 && bParam2)
	{
		return true;
	}
	return (((Global_1110244.f_3659 == 0 || (Global_1295619.f_16 - Global_1110244.f_3659) > Global_1110244.f_3659.f_1) && fParam0 >= 0f) && fParam0 < fParam3);
}

bool func_855(int iParam0)
{
	return (Global_19 && iParam0) != 0;
}

bool func_856()
{
	if (func_1172())
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		if (Global_1940186.f_38 == 3.594275E+35f)
		{
			return PAD::IS_CONTROL_PRESSED(0, 3.101329E-34f);
		}
		return PED::GET_PED_RESET_FLAG(Global_33, 311);
	}
	else
	{
		return Global_1956862.f_1716[3];
	}
	return false;
}

var func_857(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1173() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1174());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1174());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1174());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1175(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_1176(iVar2))
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
				if (iVar9 & 8192 != 0 && func_1177(iVar2) != 1)
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
					if (!func_1178(iVar10))
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

void func_858(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 52;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 43, &uParam1);
}

int func_859(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 == 15)
	{
		return -1;
	}
	if (!func_1179(Param0))
	{
		return -1;
	}
	iVar1 = func_1180(Param0);
	if (iVar1 >= 0)
	{
		func_1181(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900530;
		Global_1900531[iVar0 /*2*/] = { Param0 };
		Global_1900562[iVar0 /*2*/] = { Var2 };
		func_1181(Param0, 1);
		Global_1900530++;
		if (Global_1900530 > 15)
		{
			Global_1900530 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_860(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_28(Param0))
	{
		return;
	}
	if (!func_806(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1182(Param0);
	}
	if (!func_28(func_982(0)))
	{
		func_1145(Param0, 3);
		func_1146(bParam3);
		func_1147(!bParam4);
		func_1183(Param0, -1);
		if (bParam2 && !func_1184(2))
		{
			func_1185(&Global_0, 1024);
		}
		func_1149(1);
	}
	else
	{
		func_1183(Param0, -1);
		func_1145(Param0, 4);
		func_1186(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_1151(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_1187(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

bool func_861(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iParam0 /*12*/].f_5))
	{
		return false;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_16[iParam0 /*12*/].f_5);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return false;
	}
	*uParam1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(iVar0, func_880(), false);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_862(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2.f_6), iParam0);
}

void func_863(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_2), iParam0);
}

void func_864(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_6), iParam0);
}

void func_865(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_12), iParam0);
}

int func_866(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	*iParam1 = func_911();
	*iParam2 = 255;
	if (!func_1188(iParam0, iParam1, 1))
	{
		return 0;
	}
	if (!PED::IS_PED_A_PLAYER(*iParam1))
	{
		return 1;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(*iParam2) || !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam2))
	{
		return 4;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam2);
	if (func_41(&(Local_363[iVar0 /*52*/]), 32))
	{
		return 2;
	}
	if (func_41(&(Local_363[iVar0 /*52*/]), 64))
	{
		return 3;
	}
	return 4;
}

bool func_867(bool bParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	if (bParam4)
	{
		iVar0 = bParam0->f_620;
	}
	else
	{
		iVar0 = bParam0->f_619;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return false;
	}
	if (!VOLUME::IS_POINT_IN_VOLUME(iVar0, vParam1))
	{
		return false;
	}
	return true;
}

int func_868(int iParam0)
{
	return func_1189(iParam0, 0);
}

void func_869(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_2), iParam0);
}

void func_870(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_6), iParam0);
}

void func_871(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_12), iParam0);
}

char* func_872(int iParam0)
{
	if (PED::IS_PED_MALE(iParam0))
	{
		return "STRANGER_MALE";
	}
	return "STRANGER_FEMALE";
}

int func_873(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	var uVar2;

	if (Local_16.f_16[iParam0 /*12*/].f_2 == 1.556252E-24f)
	{
		return 0;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Local_2028.f_4))
	{
		return 0;
	}
	if (func_1069(iParam0, &bVar1))
	{
		iVar0 = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(ENTITY::GET_ENTITY_MODEL(iParam1), bVar1, false);
	}
	else if (func_1070(iParam0, &uVar2))
	{
		iVar0 = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(ENTITY::GET_ENTITY_MODEL(iParam1), PED::_0x62FDF4E678E40CC6(iParam1, uVar2), false);
	}
	else if (!bParam2)
	{
		iVar0 = PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(ENTITY::GET_ENTITY_MODEL(iParam1), false, false);
	}
	return iVar0;
}

char* func_874()
{
	return "NET_CHU_ILO_TITLE_PASSENGER";
}

char* func_875()
{
	return "NET_CHU_ILO_TITLE_VIP";
}

char* func_876()
{
	return "NET_CHU_ILO_TITLE_ENEMY";
}

bool func_877(int iParam0, var uParam1)
{
	return uParam1->f_16[iParam0 /*12*/].f_3;
}

void func_878(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam2, true, false) };
	vVar3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam2) };
	if (ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(vVar0) && func_1190(&vVar0, 50, 10, 0, 0))
	{
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iParam1, vVar0, vVar3, 2);
}

bool func_879(int iParam0, var uParam1)
{
	int iVar0;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar0 /*5*/]))
		{
		}
		else
		{
			*uParam1 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar0 /*5*/]);
			if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(*uParam1, iParam0))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

char* func_880()
{
	return "BAG";
}

void func_881(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_1191(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(iParam0, iVar3))
	{
	}
}

void func_882(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = -1;
	switch (iParam1)
	{
		case 3:
			iVar0 = -3.60825E+19f;
			break;
		case 4:
			iVar0 = 2.054472E-12f;
			break;
		case 5:
			iVar0 = 1.072915E+14f;
			break;
		case 6:
			if (func_387(iParam1, 9.27052E-12f))
			{
				iVar0 = 2.106101E+30f;
			}
			break;
	}
	if (iVar0 == -1)
	{
		return;
	}
	if (!ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(iParam0, iVar0))
	{
	}
}

bool func_883(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_HOGTIED(iParam0) && PED::_0x3D9F958834AB9C30(iParam0) == iVar0)
	{
		return true;
	}
	if (PED::IS_PED_LASSOED(iParam0) && PED::_GET_LASSOED_LASSOER(iParam0) == iVar0)
	{
		return true;
	}
	if (((PED::GET_PED_IS_BEING_GRAPPLED(iParam0) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && PED::GET_PED_IS_GRAPPLING(iVar0)) && PED::_GET_PED_GRAPPLER(iVar0) == iParam0)
	{
		return true;
	}
	return false;
}

bool func_884(int iParam0)
{
	if (!PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	if (PED::GET_PEDS_JACKER(iParam0) != PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	return true;
}

bool func_885(int iParam0)
{
	if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam0, 1000))
	{
		return true;
	}
	return false;
}

bool func_886(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;

	if (!func_1192(iParam0, 1, 1, 1, 0, 0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	fVar1 = func_1193(iVar0, iParam0);
	if (((fVar1 < 1106247680 && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar0, 180f, 30f, 180f, 30f)) && *uParam1 != 0) && uParam1->f_1 > 1000)
	{
		return true;
	}
	return false;
}

bool func_887(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (!func_55(uParam0, 16))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_123(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (!GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), iVar1))
			{
			}
			else if (!func_41(uParam1[iVar0 /*52*/], 2))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_888(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, true) };
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	if (fParam2 == 1127481344)
	{
		return func_1194(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), vVar3 - vVar0) > 0f;
	}
	fVar6 = (fParam2 * 1056964608);
	fVar7 = func_1194(ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0), func_593(vVar3 - vVar0));
	return MISC::ACOS(fVar7) < fVar6;
}

bool func_889(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_760(iParam0, &iVar1, &iVar0);
	if (bParam3)
	{
		return MISC::IS_BIT_SET((uParam2[Local_2028.f_634 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!MISC::IS_BIT_SET((uParam2[iVar2 /*52*/])->f_16[iParam1 /*2*/][iVar1], iVar0))
		{
		}
		else
		{
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_890(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	char* sVar2;

	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iParam1))
	{
		return;
	}
	if (iParam2 == 2 && PED::IS_PED_HOGTIED(iParam1))
	{
		return;
	}
	if (func_889(iParam0, iParam2, uParam3, bParam5))
	{
		return;
	}
	if (bParam7)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iParam1))
		{
			return;
		}
		if (func_924(iParam1, 0))
		{
			return;
		}
	}
	if (iParam4 == 0)
	{
		if (bParam6)
		{
			iVar0 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam1, 0, 1));
			iParam4 = PLAYER::GET_PLAYER_PED(iVar0);
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(iParam4))
	{
		iParam4 = 0;
	}
	fVar1 = func_1195(iParam2);
	sVar2 = func_1196(iParam2, Local_16.f_16[iParam0 /*12*/].f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
	{
	}
	else if (!func_1197(iParam1, sVar2, fVar1, iParam4, !bParam5, 0, 0, 1))
	{
		sVar2 = func_1198(iParam2, Local_16.f_16[iParam0 /*12*/].f_2);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1197(iParam1, sVar2, fVar1, iParam4, !bParam5, 0, 0, 1))
		{
			sVar2 = func_1199(iParam2, Local_16.f_16[iParam0 /*12*/].f_2);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && !func_1197(iParam1, sVar2, fVar1, iParam4, !bParam5, 0, 0, 1))
			{
			}
		}
	}
	func_925(iParam0, iParam2, uParam3[Local_2028.f_634 /*52*/]);
}

void func_891(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_760(iParam0, &iVar1, &iVar0);
	MISC::CLEAR_BIT(&(uParam2->f_16[iParam1 /*2*/][iVar1]), iVar0);
}

bool func_892(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_7 != iVar1)
		{
		}
		else if (func_201(iVar0, &Local_16, 32))
		{
		}
		else if (!bParam0)
		{
			if (func_201(iVar0, &Local_16, 65536) || func_201(iVar0, &Local_16, 131072))
			{
			}
			else if (!func_989(iVar0, 255))
			{
			}
			else
			{
				return true;
			}
			iVar0++;
			return false;
		}
	}
}

bool func_893(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_16[iParam0 /*12*/].f_11;
	if (iVar0 > 3 || iVar0 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar0 /*4*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

int func_894(int iParam0, var uParam1)
{
	return NETWORK::NET_TO_VEH(uParam1->f_3[uParam1->f_16[iParam0 /*12*/].f_11 /*4*/]);
}

int func_895(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	if (func_55(&Local_16, 16))
	{
		iVar1 = 524308;
	}
	else
	{
		iVar1 = 524419;
	}
	if (func_338(iParam0, uParam1, 2))
	{
		iVar0 = (iVar1 | 524288 | 4 | 16 | 32 | 2097152 || 1.504633E-36f);
	}
	else
	{
		iVar0 = iVar1 | 524288 | 4 | 16 | 32;
	}
	return iVar0;
}

void func_896(int iParam0)
{
	if (!func_934(iParam0))
	{
		return;
	}
	if (func_558(iParam0, 3.269911E-13f))
	{
		return;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iParam0, -3.273909E-18f, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iParam0, 1, 1, 0, 0);
}

bool func_897(int iParam0, var uParam1, float fParam2)
{
	int iVar0;

	if (iParam0 <= 0)
	{
		return false;
	}
	iVar0 = (iParam0 - 1);
	if (iVar0 >= fParam2->f_10.f_7)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	if (func_338(iVar0, uParam1, 1))
	{
		return false;
	}
	return true;
}

float func_898(int iParam0, int iParam1, float fParam2)
{
	if (iParam0 < 0 || iParam0 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	if (iParam1 < 0 || iParam1 >= fParam2->f_10.f_7)
	{
		return 7f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(fParam2->f_29[iParam1 /*5*/].f_1, fParam2->f_29[iParam0 /*5*/].f_1, true);
}

int func_899(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;

	if (func_1200(&iParam1, -1.481756E-07f, 1) == 2 || (Local_2028.f_182[iParam0 /*2*/].f_1 != iParam5 || Local_2028.f_182[iParam0 /*2*/] != fParam4))
	{
		if (func_582(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		Local_2028.f_182[iParam0 /*2*/] = fParam4;
		Local_2028.f_182[iParam0 /*2*/].f_1 = iParam5;
		TASK::TASK_VEHICLE_ESCORT(iVar0, iParam2, iParam3, 3, fParam4, iParam5, fParam6, 20, 20f);
		return 1;
	}
	else if (!func_582(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam4);
	}
	return 0;
}

int func_900(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (func_1200(&iParam1, -3.839713E+29f, 1) == 2 || (fParam5->f_182[iParam0 /*2*/].f_1 != iParam4 || fParam5->f_182[iParam0 /*2*/] != fParam3))
	{
		if (func_582(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			return 0;
		}
		fParam5->f_182[iParam0 /*2*/] = fParam3;
		fParam5->f_182[iParam0 /*2*/].f_1 = iParam4;
		TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iParam2, fParam3, iParam4);
		return 1;
	}
	else if (!func_582(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam3);
	}
	return 0;
}

int func_901(int iParam0, int iParam1, int iParam2, vector3 vParam3, float fParam6, int iParam7, float fParam8, float fParam9)
{
	int iVar0;

	if (func_1200(&iParam1, 66888.82f, 1) == 2 || (fParam8->f_182[iParam0 /*2*/].f_1 != iParam7 || fParam8->f_182[iParam0 /*2*/] != fParam6))
	{
		if (func_582(iParam2))
		{
			return 0;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam1);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		fParam8->f_182[iParam0 /*2*/] = fParam6;
		fParam8->f_182[iParam0 /*2*/].f_1 = iParam7;
		TASK::TASK_VEHICLE_DRIVE_TO_DESTINATION(iVar0, iParam2, vParam3, fParam6, iParam7, 6, fParam9, fParam9, false);
		return 1;
	}
	else if (!func_582(iParam2))
	{
		VEHICLE::_0x104D9A7B1C0D0783(iParam2, fParam6);
	}
	return 0;
}

int func_902(int iParam0)
{
	int iVar0;

	if (func_1200(&iParam0, -7.366091E-38f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_COMBAT_HATED_TARGETS(iVar0, 3f);
		return 1;
	}
	return 0;
}

bool func_903(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar2 = (iVar0 - 1);
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam0, iVar2))
		{
		}
		else
		{
			iVar3 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar2);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
			}
			else if (PED::IS_PED_DEAD_OR_DYING(iVar3, true))
			{
			}
			else if (!PED::IS_PED_A_PLAYER(iVar3))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_904(int iParam0, var uParam1, float fParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = fParam2;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_41(uParam1[iVar2 /*52*/], 2))
		{
		}
		else if (!func_123(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			if (PED::IS_PED_DEAD_OR_DYING(PLAYER::GET_PLAYER_PED(iVar3), true))
			{
			}
			else
			{
				fVar0 = func_552(iParam0, func_941(iVar3), 1);
				if (fVar0 < fVar1)
				{
					iVar4 = iVar3;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return func_911();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_905(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7)
{
	int iVar0;
	int iVar1;

	func_899(iParam0, iParam1, iParam3, iParam4, fParam5, iParam6, fParam7);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(iVar1))
	{
		return 0;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(iVar1))
	{
		return 0;
	}
	if (func_1201(iVar0, 0, 0, 0) != iVar1)
	{
		func_1072(iVar0, iVar1, 1, 1, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
	}
	func_1202(iVar0, iParam2, 1120403456 /* Float: 100f */, 40, 1, -6.287756E+11f);
	return 1;
}

int func_906(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4, int iParam5, float fParam6)
{
	int iVar0;
	bool bVar1;

	func_900(iParam0, iParam1, iParam3, fParam4, iParam5, fParam6);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(bVar1))
	{
		return 0;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar1))
	{
		return 0;
	}
	if (func_1201(iVar0, 0, 0, 0) != bVar1)
	{
		func_1072(iVar0, bVar1, 1, 1, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
	}
	func_1202(iVar0, iParam2, 1120403456 /* Float: 100f */, 40, 1, -6.287756E+11f);
	return 1;
}

int func_907(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, int iParam7, int iParam8, float fParam9, int iParam10)
{
	int iVar0;
	bool bVar1;

	func_901(iParam0, iParam1, iParam3, vParam4, iParam7, iParam8, fParam9, iParam10);
	iVar0 = NETWORK::NET_TO_PED(iParam1);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(bVar1))
	{
		return 0;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar1))
	{
		return 0;
	}
	if (func_1201(iVar0, 0, 0, 0) != bVar1)
	{
		func_1072(iVar0, bVar1, 1, 1, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
	}
	func_1202(iVar0, iParam2, 1120403456 /* Float: 100f */, 40, 1, -6.287756E+11f);
	return 1;
}

bool func_908(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (PED::IS_PED_A_PLAYER(iVar0) && !bParam2)
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return true;
	}
	return false;
}

bool func_909(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_1200(&iParam0, 2.40763E-20f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::TASK_FLEE_COORD(iVar0, vParam1, iParam6, iParam5, fParam4, -1, iVar1);
		return true;
	}
	return false;
}

int func_910(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (func_1200(&iParam0, -2.815016E-26f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam5)
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 9, 0);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iParam1, iParam4, iParam2, fParam3, 1, 0);
		}
		return 1;
	}
	return 0;
}

int func_911()
{
	return -1;
}

bool func_912(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (func_1200(&iParam0, -1.283316E+09f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return false;
		}
		iVar1 = PED::GET_VEHICLE_PED_IS_IN(iVar0, true);
		if (func_1203(PED::GET_SEAT_PED_IS_USING(iVar0), iVar1))
		{
			return false;
		}
		TASK::TASK_LEAVE_VEHICLE(iVar0, iVar1, iParam1, iParam2);
		return true;
	}
	return false;
}

int func_913(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (func_1200(&iParam0, 1.165701E+10f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam2)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam1);
		TASK::TASK_COMBAT_HATED_TARGETS_NO_LOS_TEST(iVar0, 200f);
		return 1;
	}
	return 0;
}

int func_914(int iParam0)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2028, &Var0, iParam0))
	{
		func_176(Var0, -8.759463E-17f, &uVar5, 0);
	}
	return uVar5;
}

int func_915(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1200(&iParam0, -0.2632248f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		func_390(&vParam2, 1f);
		func_1204(iVar0, iParam1, vParam2, fParam5, -1, 1, 0, 0, -1f);
		return 1;
	}
	return 0;
}

int func_916(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	float fVar1;

	if (func_1200(&iParam0, -0.2632248f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
		{
			return 0;
		}
		fVar1 = func_1205();
		func_390(&vParam1, 1f);
		func_1204(iVar0, fVar1, vParam1, fParam4, -1, 1, 0, 0, -1f);
		return 1;
	}
	return 0;
}

void func_917(int iParam0, var uParam1, int iParam2)
{
	if (func_877(iParam0, uParam1) == iParam2)
	{
		return;
	}
	uParam1->f_16[iParam0 /*12*/].f_3 = iParam2;
}

int func_918(int iParam0)
{
	int iVar0;

	if (func_1200(&iParam0, -2.80355E+32f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_TURN_TO_FACE_CLOSEST_PED(iVar0, 40f, 50f, 2);
		return 1;
	}
	return 0;
}

bool func_919(int iParam0)
{
	char* sVar0;

	sVar0 = "Default_Panic";
	PED::_REQUEST_PED_EMOTIONAL_PRESET(iParam0, sVar0);
	if (!PED::_HAS_PED_EMOTIONAL_PRESET_LOADED(iParam0, sVar0))
	{
		return false;
	}
	PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(iParam0, sVar0, func_904(iParam0, &Local_363, 100f), -1, 4);
	return true;
}

bool func_920(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((uParam0[iVar0 /*52*/])->f_45 != iParam1)
		{
		}
		else if (!func_41(uParam0[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			*iParam2 = PLAYER::GET_PLAYER_PED(iVar1);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_921(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1200(&iParam0, -2.113872E-16f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		TASK::TASK_HANDS_UP(iVar0, -1, iParam1, -1, 0);
		return 1;
	}
	return 0;
}

void func_922(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_33;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_1155(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1127(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*iParam0, &Var0);
	}
}

bool func_923(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	float fVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	fVar1 = iParam1;
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar2 = 0;
	while (iVar2 < 20)
	{
		if (Local_16.f_16[iVar2 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar2 /*12*/]))
		{
		}
		else
		{
			iVar6 = NETWORK::NET_TO_PED(Local_16.f_16[iVar2 /*12*/]);
			if (iVar6 == iParam0)
			{
			}
			else
			{
				fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vVar3);
				if (fVar0 < fVar1)
				{
					*iParam2 = iVar6;
					fVar1 = fVar0;
				}
			}
		}
		iVar2++;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam2);
}

bool func_924(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_2 == -0.6089872f || Local_16.f_16[iVar0 /*12*/].f_2 == 0)
		{
		}
		else if (iParam1 != 0 && Local_16.f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (!func_437(iVar0, &iVar4, 1, 0))
		{
		}
		else if (BUILTIN::VDIST(vVar1, ENTITY::GET_ENTITY_COORDS(iVar4, false, false)) > 1108082688)
		{
		}
		else if (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar4))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_925(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	func_760(iParam0, &iVar1, &iVar0);
	MISC::SET_BIT(&(uParam2->f_16[iParam1 /*2*/][iVar1]), iVar0);
}

int func_926(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1200(&iParam0, 6.48365E-22f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		PED::_PED_CLEAR_LOCO_MOTION(iVar0);
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iVar0, 0, 3));
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			TASK::TASK_COWER(iVar0, -1, PLAYER::GET_PLAYER_PED(iVar1), 0);
		}
		else
		{
			TASK::TASK_COWER(iVar0, -1, 0, 0);
		}
		return 1;
	}
	return 0;
}

bool func_927(int iParam0)
{
	int iVar0;

	if (PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iParam0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar0)) && ENTITY::GET_ENTITY_MODEL(iVar0) == func_183())
		{
			return true;
		}
	}
	return false;
}

int func_928(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_1200(&iParam0, -2.350014E+31f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (!PED::IS_PED_CARRYING_SOMETHING(iVar0))
		{
			return 0;
		}
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return 0;
		}
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar0, iVar1, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 2f, 1);
		return 1;
	}
	return 0;
}

int func_929(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = NETWORK::NET_TO_PED(iParam0);
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	bVar1 = WEAPON::GET_BEST_PED_WEAPON(iVar0, false, false);
	if (!func_236(bVar1))
	{
		return 0;
	}
	else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar1))
	{
		return 0;
	}
	func_1202(iVar0, iParam1, 1120403456 /* Float: 100f */, 40, 1, -6.287756E+11f);
	return 1;
}

int func_930(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = fParam1;
	iVar4 = 255;
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (!func_123(iVar2, 1, 1))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
			fVar0 = func_552(iParam0, func_941(iVar3), 1);
			if (fVar0 < fVar1)
			{
				iVar4 = iVar3;
				fVar1 = fVar0;
			}
		}
		iVar2++;
	}
	if (iVar4 == 255)
	{
		return func_911();
	}
	return PLAYER::GET_PLAYER_PED(iVar4);
}

int func_931(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_1200(&iParam0, 1.478669E-33f, 1) == 2 && ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_LOOK_AT_ENTITY(NETWORK::NET_TO_PED(iParam0), iParam1, iParam2, iParam3, iParam4, iParam5);
		return 1;
	}
	return 0;
}

bool func_932(int iParam0, int iParam1, var uParam2)
{
	int iVar0;

	if (uParam2->f_16[iParam0 /*12*/].f_11 < 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/]))
	{
		return false;
	}
	iVar0 = func_894(iParam0, uParam2);
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false, false))
	{
		return false;
	}
	if (!PED::DOES_GROUP_EXIST(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3))
	{
		return false;
	}
	if (!PED::_0x0455546F23FF08E4(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3))
	{
		return false;
	}
	if (!PED::IS_PED_GROUP_MEMBER(iParam1, uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3, false))
	{
		return false;
	}
	if (!PED::IS_PED_ON_MOUNT(iParam1))
	{
		return false;
	}
	if (!PED::IS_PED_IN_VEHICLE(PED::GET_PED_AS_GROUP_LEADER(uParam2->f_3[uParam2->f_16[iParam0 /*12*/].f_11 /*4*/].f_3), iVar0, true))
	{
		return false;
	}
	return true;
}

int func_933(int iParam0, int iParam1, vector3 vParam2, float fParam5)
{
	int iVar0;

	if (func_1200(&iParam0, 0.4851681f, 1) == 2 && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
		TASK::TASK_FOLLOW_TO_OFFSET_OF_ENTITY(iVar0, iParam1, vParam2, fParam5, -1, 0.1f, true, true, false, false, true, false);
		return 1;
	}
	return 0;
}

bool func_934(int iParam0)
{
	int iVar0;

	iVar0 = func_1201(iParam0, 1, 0, 0);
	if (iVar0 == 0 || iVar0 == -3.273909E-18f)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
	{
		return true;
	}
	if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
	{
		return true;
	}
	return false;
}

int func_935(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (!WEAPON::HAS_PED_GOT_WEAPON(iVar0, iParam1, 0, false))
	{
		return 0;
	}
	WEAPON::GET_CURRENT_PED_WEAPON(iVar0, &iVar1, false, 0, false);
	if (iVar1 == iParam1)
	{
		return 1;
	}
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, 3.269911E-13f, false);
	if (iVar2 == 1 || iVar2 == 0)
	{
		return 0;
	}
	if (func_1200(&(Local_16.f_16[iParam0 /*12*/]), 3.269911E-13f, 0) != 2)
	{
		return 0;
	}
	WEAPON::SET_CURRENT_PED_WEAPON(iVar0, iParam1, false, 0, false, false);
	TASK::TASK_SWAP_WEAPON(iVar0, iParam2, 0, 0, 0);
	return 1;
}

void func_936(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	struct<14> Var0;

	if (iParam2 == 0)
	{
		iParam2 = Global_33;
	}
	Var0.f_4 = -1;
	Var0.f_8 = 2;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	Var0.f_13 = 1;
	Var0.f_14 = 2;
	Var0.f_15 = 2;
	Var0.f_16 = 3;
	Var0.f_19 = 3;
	Var0.f_20 = 1;
	Var0.f_21 = 3;
	Var0.f_22 = 3;
	Var0.f_4 = 21030;
	Var0.f_3 = iParam2;
	Var0.f_8 = 4;
	if (bParam7)
	{
		Var0.f_17 = 4;
		Var0.f_18 = 1;
	}
	else
	{
		Var0.f_17 = 0;
		Var0.f_18 = 0;
	}
	Var0.f_19 = 4;
	Var0.f_20 = 2;
	Var0.f_21 = 4;
	Var0.f_22 = 3;
	Var0 = { iParam4, iParam5, iParam6 };
	Var0.f_12 = 0;
	Var0.f_9 = 1;
	Var0.f_10 = 1;
	Var0.f_11 = 1;
	if (bParam3)
	{
		func_1155(&(Var0.f_5), 1);
	}
	Var0.f_13 = 0;
	Var0.f_7 = iParam1;
	func_1127(&(Var0.f_5), 1);
	if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(*iParam0, &Var0);
	}
}

bool func_937(int iParam0, int iParam1, var uParam2, float fParam3)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;
	int iVar6;

	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*uParam2 = fParam3;
	*iParam1 = func_911();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Local_363[iVar0 /*52*/].f_47 == 0)
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar5 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			iVar6 = PLAYER::GET_PLAYER_PED(iVar5);
			fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, ENTITY::GET_ENTITY_COORDS(iVar6, false, false), true);
			if (fVar4 > *uParam2)
			{
			}
			else if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar6, 17))
			{
			}
			else
			{
				*uParam2 = fVar4;
				*iParam1 = iVar6;
			}
		}
		iVar0++;
	}
	if (*iParam1 == func_911())
	{
		return false;
	}
	return true;
}

int func_938(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1200(&iParam0, 2.075579E+20f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			return 0;
		}
		TASK::TASK_AIM_GUN_AT_ENTITY(iVar0, iParam1, -1, false, 1);
		return 1;
	}
	return 0;
}

int func_939(int iParam0, int iParam1)
{
	int iVar0;

	if (func_1200(&iParam0, 3.55571E-26f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iParam1);
		return 1;
	}
	return 0;
}

bool func_940(vector3 vParam0, float fParam3, int iParam4, float fParam5, bool bParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar2 = 255;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar4 = 0;
			while (iVar4 < 4)
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar4 /*5*/]))
				{
				}
				else
				{
					iVar0 = NETWORK::NET_TO_ENT(Local_16.f_257[iVar4 /*5*/]);
					fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
					if (fVar1 > fParam3)
					{
					}
					else if (fVar1 < fParam5)
					{
					}
					else if (!func_1206(iVar0, iParam4))
					{
					}
					else if (bParam7)
					{
						if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
						{
						}
						else
						{
							iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
							if (!(bParam6 && func_41(&(Local_363[iVar3 /*52*/]), 64)) && !(!bParam6 && func_41(&(Local_363[iVar3 /*52*/]), 32)))
							{
							}
							else
							{
								fParam3 = fVar1;
								iVar2 = *iParam4;
							}
						}
						iVar4++;
						Jump @456; //curOff = 231
						iVar5 = 0;
						while (iVar5 < 20)
						{
							if (Local_16.f_16[iVar5 /*12*/].f_2 != 13.22463f)
							{
							}
							else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar5 /*12*/]))
							{
							}
							else
							{
								iVar0 = NETWORK::NET_TO_ENT(Local_16.f_16[iVar5 /*12*/]);
								fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), vParam0);
								if (fVar1 > fParam3)
								{
								}
								else if (fVar1 < fParam5)
								{
								}
								else if (!func_1206(iVar0, iParam4))
								{
								}
								else if (bParam7)
								{
									if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(*iParam4))
									{
									}
									else
									{
										iVar3 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(*iParam4);
										if (!(bParam6 && func_41(&(Local_363[iVar3 /*52*/]), 64)) && !(!bParam6 && func_41(&(Local_363[iVar3 /*52*/]), 32)))
										{
										}
										else
										{
											fParam3 = fVar1;
											iVar2 = *iParam4;
										}
									}
									iVar5++;
									if (iVar2 != 255)
									{
										*iParam4 = iVar2;
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

Vector3 func_941(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_942(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (func_1200(&iParam0, -0.001425525f, 1) != 2)
		{
			return false;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_231(iParam1), func_943(iParam1), iParam2, -1, 8f, -8f, 0, 0f, false, false, -1f, 0, 0, -1f);
	}
	else
	{
		if (func_1200(&iParam0, -2.793181E-34f, 1) != 2)
		{
			return false;
		}
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		TASK::TASK_PLAY_ANIM(iVar0, func_231(iParam1), func_943(iParam1), 8f, -8f, -1, 0, 0f, false, 0, false, 0, false);
	}
	return true;
}

char* func_943(int iParam0)
{
	switch (iParam0)
	{
		case 1711865203:
			return "wave_idle_a";
		default:
			break;
	}
	return "";
}

bool func_944(int iParam0, float fParam1, int iParam2)
{
	int iVar0;

	iVar0 = ENTITY::GET_NEAREST_PLAYER_TO_ENTITY(iParam0, 0, 3);
	if (iVar0 == 255)
	{
		return false;
	}
	*iParam2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam2))
	{
		return false;
	}
	if (BUILTIN::VDIST(func_941(*iParam2), ENTITY::GET_ENTITY_COORDS(iParam0, true, false)) > fParam1)
	{
		return false;
	}
	return true;
}

void func_945(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

bool func_946(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = Local_16.f_16[iParam0 /*12*/].f_11;
	if (!func_1207(iParam0))
	{
		return false;
	}
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			*iParam1 = NETWORK::NET_TO_ENT(Local_16.f_16[iVar0 /*12*/]);
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			*iParam1 = NETWORK::NET_TO_ENT(Local_16.f_257[iVar0 /*5*/]);
			break;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	return true;
}

int func_947(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (func_1200(&iParam0, 102.1545f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		if (bParam6)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
		}
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, bParam5);
		TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vParam1, fParam4, 0, 0);
		return 1;
	}
	return 0;
}

int func_948(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	if (func_1200(&iParam0, 2.40763E-20f, 1) == 2)
	{
		iVar0 = NETWORK::NET_TO_PED(iParam0);
		if (PED::IS_PED_INJURED(iVar0))
		{
			return 0;
		}
		iVar1 = 0;
		if (PED::IS_PED_ON_MOUNT(iVar0))
		{
			iVar1 = PED::GET_MOUNT(iVar0);
		}
		TASK::TASK_FLEE_PED(iVar0, iParam1, iParam2, iParam4, fParam3, -1, iVar1);
		return 1;
	}
	return 0;
}

void func_949(float fParam0, float fParam1, float fParam2)
{
	float fVar0;
	float fVar1;

	fVar0 = *fParam0;
	fVar1 = *fParam1;
	*fParam0 = ((fVar0 * BUILTIN::COS(fParam2)) - (fVar1 * BUILTIN::SIN(fParam2)));
	*fParam1 = ((fVar0 * BUILTIN::SIN(fParam2)) + (fVar1 * BUILTIN::COS(fParam2)));
}

void func_950(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2), iParam0);
}

void func_951(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_4), iParam0);
}

void func_952(int iParam0)
{
	MISC::_CLEAR_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_10), iParam0);
}

bool func_953(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2.f_8), iParam0);
}

void func_954(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_8), iParam0);
}

void func_955(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2), iParam0);
}

void func_956(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_4), iParam0);
}

bool func_957(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2.f_4), iParam0);
}

void func_958(int iParam0)
{
	MISC::_SET_BIT_FLAG(&(Local_363[Local_2028.f_634 /*52*/].f_2.f_10), iParam0);
}

int func_959(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = func_1208(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

bool func_960(var uParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, var uParam5, int iParam6)
{
	struct<2> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	var uVar36;
	var uVar37;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam6, &Var0, 32))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0) || !ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return false;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return false;
	}
	iVar33 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar32);
	if (iVar33 != PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (bParam1)
	{
		if (ENTITY::IS_ENTITY_A_PED(Var0))
		{
			iVar34 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
			if (PED::IS_PED_A_PLAYER(iVar34))
			{
				iVar35 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar34);
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(uParam0, iVar35) && (!bParam3 || func_590(uParam0, Var0, fParam4)))
				{
					return true;
				}
			}
		}
	}
	if (bParam2)
	{
		if (func_1209(uParam0, &uVar37, Var0, &uVar36))
		{
			if (func_1210(&Var0))
			{
				*uParam5 = uVar37;
			}
			return true;
		}
	}
	return false;
}

float func_961(int iParam0, float fParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = iParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_962(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_1211();
	if (func_1212(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_1213(vParam0, iParam3);
}

int func_963(vector3 vParam0)
{
	return func_1214(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_964(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_965()
{
	return Global_1102813.f_3672;
}

void func_966(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

void func_967(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_968(int iParam0)
{
	vector3 vVar0;

	if (!func_33(1))
	{
		return false;
	}
	if (func_1104(iParam0))
	{
		if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32))
		{
			return false;
		}
		if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
		{
			return false;
		}
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
	}
	else
	{
		if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))
		{
			return false;
		}
		if (Local_16.f_328 == -1)
		{
			return false;
		}
		if (Local_2028.f_10 == -1.484548E+24f)
		{
			if (PLAYER::PLAYER_ID() != Local_16.f_257[Local_16.f_328 /*5*/].f_3 && GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != Local_16.f_257[Local_16.f_328 /*5*/].f_4)
			{
				return false;
			}
		}
		else if (Local_2028.f_10 == -1.398992E+38f)
		{
			if (PLAYER::PLAYER_ID() != Local_16.f_16[Local_16.f_328 /*12*/].f_7 && GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()) != Local_16.f_16[Local_16.f_328 /*12*/].f_6)
			{
				return false;
			}
		}
		if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_620))
		{
			return false;
		}
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_620) };
	}
	if (BUILTIN::VDIST(Global_34, vVar0) > 1120403456)
	{
		return false;
	}
	return true;
}

bool func_969()
{
	char* sVar0;

	sVar0 = func_226();
	if (!CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED_2(sVar0))
	{
		CAM::_LOAD_CINEMATIC_CAM_LOCATION(sVar0);
	}
	if (CAM::_IS_CINEMATIC_CAM_LOCATION_LOADED(sVar0))
	{
		func_126(8388608);
		return true;
	}
	return false;
}

int func_970()
{
	float fVar0;

	if (func_257(4096, 255))
	{
		return 1;
	}
	fVar0 = -3.724553E-13f;
	PED::_REQUEST_MOTION_TYPE_ASSET(fVar0, Global_33);
	if (!PED::HAS_MOTION_TYPE_ASSET_LOADED(fVar0, Global_33))
	{
		return 0;
	}
	func_261(4096);
	return 1;
}

bool func_971(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	int iVar29;
	int iVar30;

	if (!func_292(&Local_2028, &Var10) || !func_312(&Var10, 5.673219E-19f, iParam0, 0))
	{
		return true;
	}
	iVar15 = func_499(iParam0);
	iVar23 = PLAYER::PLAYER_ID();
	if (!func_1215(&iVar24))
	{
		return true;
	}
	bVar25 = func_1216(iVar23);
	bVar26 = (bVar25 && iVar24 == iVar23);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -7.593019E+34f, iVar17, 0))
		{
		}
		else
		{
			iVar20 = func_500(iParam0, iVar17);
			iVar16 = 0;
			while (iVar16 < iVar20)
			{
				Var5 = { Var0 };
				if ((!func_312(&Var5, 2.873931E-05f, iVar16, 0) || !func_299(Var5, 0.0001444695f, &iVar18, 0)) || !func_176(Var5, -3.564253E+19f, &uVar19, 0))
				{
				}
				else
				{
					iVar21 = uVar19;
					if (!func_501(iVar21, iVar18, &iVar22))
					{
					}
					else
					{
						func_1217(iVar22, iVar21, iVar23, bVar25, bVar26, &bVar27, iVar17, iVar16);
					}
				}
				iVar16++;
			}
		}
		iVar17++;
	}
	bVar28 = !func_1104(iParam0);
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar29 = 0;
			while (iVar29 < 20)
			{
				if ((!func_201(iVar29, &Local_16, 1024) || !func_201(iVar29, &Local_16, 32)) || func_201(iVar29, &Local_16, 64) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar29 /*12*/]))
				{
				}
				else
				{
					func_1217(NETWORK::NET_TO_ENT(Local_16.f_16[iVar29 /*12*/]), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar29++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			iVar30 = 0;
			while (iVar30 < 4)
			{
				if ((!func_202(iVar30, &Local_16, 128) || !func_202(iVar30, &Local_16, 2)) || func_202(iVar30, &Local_16, 4) != bVar28)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar30 /*5*/]))
				{
				}
				else
				{
					func_1217(NETWORK::NET_TO_ENT(Local_16.f_257[iVar30 /*5*/]), 0, iVar23, bVar25, bVar26, &bVar27, -1, -1);
				}
				iVar30++;
			}
			break;
	}
	return !bVar27;
}

void func_972(int iParam0)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;

	if (!func_292(&Local_2028, &Var10) || !func_312(&Var10, 5.673219E-19f, iParam0, 0))
	{
		return;
	}
	iVar15 = func_499(iParam0);
	iVar17 = 0;
	while (iVar17 < iVar15)
	{
		Var0 = { Var10 };
		if (!func_312(&Var0, -7.593019E+34f, iVar17, 0))
		{
			return;
		}
		iVar20 = func_500(iParam0, iVar17);
		iVar16 = 0;
		while (iVar16 < iVar20)
		{
			Var5 = { Var0 };
			if ((!func_312(&Var5, 2.873931E-05f, iVar16, 0) || !func_299(Var5, 0.0001444695f, &iVar18, 0)) || !func_176(Var5, -3.564253E+19f, &uVar19, 0))
			{
			}
			else
			{
				iVar21 = uVar19;
				if (!func_501(iVar21, iVar18, &iVar22))
				{
				}
				else
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iVar22, "RDRO_Scripted_Cutscene_Focus_Entity_Group", 0f);
				}
			}
			iVar16++;
		}
		iVar17++;
	}
}

void func_973()
{
	if (func_257(8, 255))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_IN_MP_CUTSCENE(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
		NETWORK::PREVENT_MIGRATION_OF_ENTITIES_IN_FAST_INSTANCE_FOR_LOCAL_PLAYER(true);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, func_502(), true);
		func_261(8);
	}
	NETWORK::_0xDC6AD5C046F33AB4(true, false);
}

char* func_974()
{
	return "ShotSphere";
}

char* func_975(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAM_NEAR35MM"):
			return "Cam_Near35mm";
		case joaat("CAM_NEAR50MM"):
			return "Cam_Near50mm";
		case joaat("CAM_MED35MM"):
			return "Cam_Med35mm";
		case joaat("CAM_MED50MM"):
			return "Cam_Med50mm";
		case joaat("CAM_FAR35M"):
			return "Cam_Far35m";
		case joaat("CAM_FAR50MM"):
			return "Cam_Far50mm";
		case 0:
			return "None";
		default:
			break;
	}
	return "";
}

bool func_976(struct<5> Param0, int iParam5)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	bool bVar24;
	int iVar25;
	vector3 vVar26;
	float fVar29;

	if (!func_312(&Param0, 2.873931E-05f, iParam5, 0))
	{
		return true;
	}
	bVar10 = func_313(Param0, 7.93606E-16f, &vVar0, 0);
	bVar11 = func_310(Param0, 3.991602E+14f, &fVar9, 0);
	bVar12 = func_313(Param0, -6.453116E-38f, &vVar3, 0);
	bVar13 = func_313(Param0, -7.513065E-38f, &vVar6, 0);
	func_176(Param0, -3.564253E+19f, &iVar14, 0);
	iVar15 = iVar14;
	iVar16 = -1;
	func_299(Param0, 0.0001444695f, &iVar16, 0);
	bVar17 = func_176(Param0, -8.759463E-17f, &iVar14, 0);
	iVar18 = iVar14;
	if (func_176(Param0, 0.004503306f, &iVar14, 0))
	{
		iVar19 = iVar14;
	}
	bVar20 = iVar15 == 4.194E+28f;
	if (bVar20)
	{
		bVar17 = false;
	}
	if ((((!bVar10 && !bVar12) && !bVar11) && !bVar17) && !bVar20)
	{
		return true;
	}
	if (!func_501(iVar15, iVar16, &iVar21))
	{
		if (func_1218(iVar15))
		{
			if (!bVar10)
			{
				return true;
			}
			if (!func_1219(iParam5, iVar16, iVar15, &iVar21, vVar0, fVar9))
			{
				return false;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar21))
			{
				return true;
			}
		}
		else
		{
			return true;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar21))
	{
		return false;
	}
	if (bVar10)
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar21))
		{
			iVar22 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
			if (iVar22 == PLAYER::PLAYER_PED_ID())
			{
				func_1221(func_1220(iVar19), 0);
			}
			if (AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar22, false))
			{
				AITRANSPORT::SET_PED_OFF_TRANSPORT_SEAT(iVar22, 0);
			}
		}
		ENTITY::SET_ENTITY_COORDS(iVar21, vVar0, false, false, true, true);
	}
	if (bVar11)
	{
		ENTITY::SET_ENTITY_HEADING(iVar21, fVar9);
	}
	else if (bVar12)
	{
		ENTITY::SET_ENTITY_ROTATION(iVar21, vVar3, 2, false);
	}
	if (ENTITY::IS_ENTITY_A_PED(iVar21))
	{
		bVar24 = true;
		iVar23 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar21);
	}
	if (bVar17 && bVar24)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::IS_PED_INCAPACITATED(iVar23))
		{
			if (PED::IS_PED_A_PLAYER(iVar23))
			{
				iVar25 = func_619(Local_16.f_299, Local_16.f_299.f_2);
			}
			else
			{
				iVar25 = 0;
			}
			WEAPON::_HIDE_PED_WEAPONS(iVar23, 2, true);
			if (func_313(Param0, 5.466562E-36f, &vVar26, 0))
			{
				func_310(Param0, -1.336337E-18f, &fVar29, 0);
				TASK::TASK_START_SCENARIO_AT_POSITION(iVar23, iVar18, vVar26, fVar29, iVar25, true, false, 0, -1f, false);
			}
			else
			{
				TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar23, iVar18, iVar25, false, 0, -1f, false);
			}
		}
	}
	else if ((bVar20 && bVar24) && iVar23 == Global_33)
	{
		if (((!PED::IS_PED_DEAD_OR_DYING(iVar23, true) && !PED::IS_PED_INJURED(iVar23)) && !PED::IS_PED_RAGDOLL(iVar23)) && !PED::IS_PED_INCAPACITATED(iVar23))
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iVar23, "FreeRoamSpawn", true, 20);
		}
	}
	if ((bVar24 && bVar13) && func_1222(iVar23))
	{
		PHYSICS::_HITCH_HORSE(iVar23, vVar6);
		TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar23, -1.402456E+21f, -1, false, 0, -1f, false);
	}
	return true;
}

void func_977(int iParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	bool bVar6;
	int iVar7;
	struct<5> Var8;
	bool bVar13;
	Vector3 vVar14;
	vector3 vVar17;
	vector3 vVar20;
	var uVar23;

	bVar6 = true;
	if (func_1104(iParam0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
		{
			vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
		}
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_2028.f_620))
	{
		vVar0 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_620) };
	}
	if (((func_292(&Local_2028, &Var8) && func_312(&Var8, 5.673219E-19f, iParam0, 0)) && func_312(&Var8, -7.593019E+34f, iParam1, 0)) && func_312(&Var8, -7.847206E+18f, 0, 0))
	{
		if (func_177(Var8, 1185464f, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		else if (func_177(Var8, -1.415774E+38f, &bVar13, 0) && bVar13)
		{
			bVar6 = false;
		}
		if (bVar6 && func_313(Var8, 7.93606E-16f, &vVar14, 0))
		{
			bVar6 = false;
		}
		if (bVar6)
		{
			if (func_313(Var8, -6.039011E+29f, &vVar17, 0))
			{
				vVar0 = { vVar17 };
			}
			if (func_313(Var8, -5.583206E+12f, &vVar20, 0))
			{
				vVar0 = { vVar0 + vVar20 };
			}
			if (func_313(Var8, -3.576558E+37f, &vVar20, 0))
			{
				vVar3 = { vVar3 + vVar20 };
			}
			if (func_176(Var8, -4.054763E-14f, &uVar23, 0))
			{
				iVar7 = uVar23;
			}
		}
	}
	if (bVar6 && iVar7 == 0)
	{
		bVar6 = false;
	}
	if (bVar6)
	{
		func_261(1024);
		Local_2028.f_537.f_2 = iVar7;
		func_1223(vVar0, vVar3);
	}
	else
	{
		func_498(1024);
	}
}

Vector3 func_978(vector3 vParam0, float fParam3)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;

	fVar3 = BUILTIN::SIN(fParam3);
	fVar4 = BUILTIN::COS(fParam3);
	vVar0.x = ((vParam0.x * fVar4) - (vParam0.y * fVar3));
	vVar0.f_1 = ((vParam0.x * fVar3) + (vParam0.y * fVar4));
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

int func_979(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam0;
	}
	return iParam1;
}

void func_980(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = !func_1104(iParam0);
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_201(iVar1, &Local_16, 1024))
				{
				}
				else if (!func_201(iVar1, &Local_16, 32))
				{
				}
				else if (func_201(iVar1, &Local_16, 64) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar1 /*12*/]))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_16[iVar1 /*12*/]))
				{
				}
				else
				{
					iVar2 = NETWORK::NET_TO_PED(Local_16.f_16[iVar1 /*12*/]);
					PED::DELETE_PED(&iVar2);
				}
				iVar1++;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			iVar3 = 0;
			while (iVar3 < 4)
			{
				if (!func_202(iVar3, &Local_16, 128))
				{
				}
				else if (!func_202(iVar3, &Local_16, 2))
				{
				}
				else if (func_202(iVar3, &Local_16, 4) != bVar0)
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar3 /*5*/]))
				{
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_257[iVar3 /*5*/]))
				{
				}
				else
				{
					iVar4 = NETWORK::NET_TO_OBJ(Local_16.f_257[iVar3 /*5*/]);
					OBJECT::DELETE_OBJECT(&iVar4);
				}
				iVar3++;
			}
			break;
	}
}

bool func_981(struct<5> Param0, int iParam5)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!func_312(&Param0, 2.873931E-05f, iParam5, 0))
	{
		return true;
	}
	func_177(Param0, 6.537695E-13f, &bVar0, 0);
	if (!bVar0)
	{
		return true;
	}
	func_176(Param0, -3.564253E+19f, &iVar1, 0);
	iVar2 = iVar1;
	iVar3 = -1;
	func_299(Param0, 0.0001444695f, &iVar3, 0);
	if (iVar3 < 0)
	{
		return true;
	}
	switch (iVar2)
	{
		case joaat("PROP"):
		case joaat("VEHICLE"):
		case joaat("PED"):
			if (!func_501(iVar2, iVar3, &iVar4))
			{
				return true;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
			{
				return false;
			}
			if (ENTITY::IS_ENTITY_A_PED(iVar4))
			{
				iVar5 = NETWORK::NET_TO_PED(Local_16.f_16[iVar3 /*12*/]);
				PED::DELETE_PED(&iVar5);
			}
			else if (ENTITY::IS_ENTITY_A_VEHICLE(iVar4))
			{
				iVar6 = NETWORK::NET_TO_VEH(Local_16.f_3[iVar3 /*4*/]);
				VEHICLE::DELETE_VEHICLE(&iVar6);
			}
			else if (ENTITY::IS_ENTITY_AN_OBJECT(iVar4))
			{
				iVar7 = NETWORK::NET_TO_OBJ(Local_16.f_278[iVar3 /*2*/]);
				OBJECT::DELETE_OBJECT(&iVar7);
			}
			break;
		case joaat("PLAYER"):
			return true;
		case joaat("PLAYER_HORSE"):
			return true;
		default:
			return true;
	}
	return true;
}

struct<2> func_982(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_983(int iParam0, var uParam1, var uParam2, float fParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	*bParam6 = 0;
	*bParam4 = 0;
	bVar0 = func_41(uParam2[Local_2028.f_634 /*52*/], 32);
	bVar1 = func_41(uParam2[Local_2028.f_634 /*52*/], 64);
	if (!bVar0 && !bVar1)
	{
		if (!func_536(1))
		{
			return false;
		}
	}
	else if (!func_534())
	{
		return false;
	}
	if (bVar0 && !func_227(4))
	{
		return false;
	}
	if (func_271(iParam0, 8388608) && !func_271(iParam0, 2.350989E-38f))
	{
		return false;
	}
	if (func_55(uParam1, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return false;
	}
	iVar2 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		if (!func_701(uParam1->f_16[iParam0 /*12*/].f_2) || !PED::GET_PED_CONFIG_FLAG(iVar2, 11, false))
		{
			return false;
		}
		bVar4 = true;
	}
	*bParam5 = 0;
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("CHASER"):
			if (!bVar0 && !func_41(uParam2[Local_2028.f_634 /*52*/], 2))
			{
				return false;
			}
			if (Local_16.f_16[iParam0 /*12*/].f_3 == 45)
			{
				*bParam4 = 1;
			}
			if (!*bParam4 && BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 1124859904)
			{
				*bParam4 = 1;
			}
			break;
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			*bParam5 = (func_33(256) && !func_55(&Local_16, 16));
			if ((!func_41(uParam2[Local_2028.f_634 /*52*/], 2) && fParam3->f_202.f_60 != 5) && fParam3->f_202.f_60 != 6)
			{
				return false;
			}
			break;
		case joaat("DROPOFF_GUARD"):
			if (!bVar0 && !bVar1)
			{
				return false;
			}
			else if (bVar0 && func_201(iParam0, &Local_16, 2048))
			{
				return false;
			}
			else if (bVar1 && !func_201(iParam0, &Local_16, 2048))
			{
				return false;
			}
			if (BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iVar2, false, false)) > 1112014848)
			{
				*bParam4 = 1;
			}
			return true;
		case joaat("PASSENGER_VIP"):
			if (fParam3->f_10 != -1.398992E+38f)
			{
				return false;
			}
			if ((func_201(iParam0, &Local_16, 32) || func_201(iParam0, &Local_16, 65536)) || func_201(iParam0, &Local_16, 131072))
			{
				*bParam6 = 1;
				return true;
			}
			if (func_1188(iVar2, &iVar3, 0) && iVar3 == PLAYER::PLAYER_PED_ID())
			{
				return false;
			}
			if (func_862(iParam0, 255))
			{
				return false;
			}
			switch (fParam3->f_202.f_60)
			{
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
					return false;
				default:
					break;
			}
			if ((((!bVar0 && !bVar1) && !func_227(128)) && !bVar4) && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			return true;
		default:
			return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
		case 3:
			if (!bVar4 && PED::IS_PED_IN_ANY_VEHICLE(iVar2, true))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_984(int iParam0, var uParam1, var uParam2, float fParam3)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar0 = MAP::DOES_BLIP_EXIST(fParam3->f_202[iParam0]);
	if (bVar0)
	{
		return;
	}
	iVar1 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	bVar2 = func_41(uParam2[Local_2028.f_634 /*52*/], 64);
	bVar3 = (func_33(256) && !func_55(&Local_16, 16));
	switch (uParam1->f_16[iParam0 /*12*/].f_2)
	{
		case joaat("DROPOFF_GUARD"):
			if (bVar2 != func_201(iParam0, uParam1, 2048))
			{
				func_1224(iParam0, &(fParam3->f_202[iParam0]), iVar1, 0, 0);
			}
			else
			{
				func_1225(&(fParam3->f_202[iParam0]), iVar1);
			}
			break;
		case joaat("PASSENGER_VIP"):
			if (func_199(&Local_2028) == -1.398992E+38f)
			{
				func_1226(iParam0, &(fParam3->f_202[iParam0]), iVar1);
			}
			break;
		default:
			if (func_201(iParam0, &Local_16, 32768))
			{
				func_1224(iParam0, &(fParam3->f_202[iParam0]), iVar1, 1, 0);
			}
			else
			{
				func_1224(iParam0, &(fParam3->f_202[iParam0]), iVar1, 0, bVar3);
			}
			break;
	}
}

void func_985(int iParam0, bool bParam1)
{
	if (bParam1 && !func_271(iParam0, 2048))
	{
		func_272(iParam0, 2048);
		MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 7.771716E-32f);
	}
	else if (!bParam1 && func_271(iParam0, 2048))
	{
		func_438(iParam0, 2048);
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 7.771716E-32f);
	}
}

void func_986(int iParam0, bool bParam1)
{
	if (bParam1 && !func_271(iParam0, 4194304))
	{
		func_272(iParam0, 4194304);
		MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], -0.0001894792f);
	}
	else if (!bParam1 && func_271(iParam0, 4194304))
	{
		func_438(iParam0, 4194304);
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], -0.0001894792f);
	}
}

void func_987(int iParam0, bool bParam1)
{
	if (!bParam1 && func_271(iParam0, 1024))
	{
		func_438(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(Local_2028.f_202[iParam0], -0.1870042f, false);
	}
	else if (bParam1 && !func_271(iParam0, 1024))
	{
		func_272(iParam0, 1024);
		MAP::SET_BLIP_SPRITE(Local_2028.f_202[iParam0], func_1001(3), false);
	}
}

void func_988(int iParam0)
{
	if (func_271(iParam0, 512))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 1.10574E-22f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], -1.271778E-20f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 2.204339E+31f);
	func_438(iParam0, 256);
	func_438(iParam0, 128);
	func_272(iParam0, 512);
}

bool func_989(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2.f_2), iParam0);
}

void func_990(int iParam0)
{
	if (func_271(iParam0, 256))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], -1.271778E-20f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 2.204339E+31f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 1.10574E-22f);
	func_438(iParam0, 128);
	func_438(iParam0, 512);
	func_272(iParam0, 256);
}

bool func_991(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		*iParam3 = iParam0;
		if (GANG::NETWORK_IS_IN_SAME_GANG(iParam0, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 0;
			return true;
		}
		else
		{
			*bParam2 = 1;
			return false;
		}
	}
	if (func_1188(iParam1, &iVar0, 1))
	{
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			*bParam2 = 0;
		}
		*iParam3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*iParam3))
		{
			*bParam2 = 0;
			return false;
		}
		if (!GANG::NETWORK_IS_IN_SAME_GANG(*iParam3, PLAYER::PLAYER_ID()))
		{
			*bParam2 = 1;
			return false;
		}
		*bParam2 = 0;
		return true;
	}
	*bParam2 = 0;
	return false;
}

void func_992(int iParam0)
{
	if (func_271(iParam0, 128))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 1.10574E-22f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 2.204339E+31f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], -1.271778E-20f);
	func_438(iParam0, 256);
	func_438(iParam0, 512);
	func_272(iParam0, 128);
}

void func_993(int iParam0, int iParam1)
{
	if (Local_2028.f_10 != -1.398992E+38f)
	{
		return;
	}
	if (Local_2028.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2028.f_202[iParam0], func_1227());
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 5.834141E-13f);
	}
	else
	{
		MAP::_SET_BLIP_NAME(Local_2028.f_202[iParam0], func_1228(func_1227(), iParam1));
		MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 5.834141E-13f);
	}
	Local_2028.f_202.f_30[iParam0] = iParam1;
}

void func_994(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_271(iParam0, 131072))
	{
		func_272(iParam0, 131072);
		if (bParam2)
		{
			MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 2.568537E+17f);
		}
		else
		{
			MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], -1.186158E+15f);
		}
	}
	else if (!bParam1 && func_271(iParam0, 131072))
	{
		func_438(iParam0, 131072);
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 2.568537E+17f);
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], -1.186158E+15f);
	}
}

void func_995(int iParam0, bool bParam1)
{
	if (bParam1 && func_271(iParam0, 4096))
	{
		func_438(iParam0, 4096);
		if (func_271(iParam0, 131072))
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 2.568537E+17f);
			MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], -1.186158E+15f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202[iParam0], 1.041392E+37f);
		}
	}
	else if (!bParam1 && !func_271(iParam0, 4096))
	{
		func_272(iParam0, 4096);
		if (func_271(iParam0, 131072))
		{
			MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 2.568537E+17f);
		}
		else
		{
			MAP::BLIP_ADD_MODIFIER(Local_2028.f_202[iParam0], 1.041392E+37f);
		}
	}
}

bool func_996(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_534())
	{
		return false;
	}
	if (!func_227(4))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_55(uParam1, 524288))
	{
		return false;
	}
	if ((fParam3->f_202.f_60 == 5 && func_338(iParam0, &Local_16, 1)) || fParam3->f_202.f_60 == 6)
	{
		return false;
	}
	if (func_402(&Local_16) > 2)
	{
		return false;
	}
	if (Local_2028.f_10 != -1.398992E+38f)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (Local_16.f_257[iVar1 /*5*/].f_2 != iParam0)
			{
			}
			else if (func_202(iVar1, uParam1, 16))
			{
			}
			else if (!func_202(iVar1, uParam1, 8))
			{
			}
			else
			{
				return true;
			}
			iVar1++;
		}
		return false;
	}
	switch (fParam3->f_202.f_60)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		default:
			return false;
	}
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (Local_16.f_16[iVar1 /*12*/].f_11 != iParam0)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar1 /*12*/]))
		{
		}
		else
		{
			iVar2 = NETWORK::NET_TO_PED(Local_16.f_16[iVar1 /*12*/]);
			if (PED::IS_PED_DEAD_OR_DYING(iVar2, true))
			{
			}
			else if (!PED::IS_PED_IN_VEHICLE(iVar2, iVar0, true))
			{
			}
			else
			{
				return true;
			}
		}
		iVar1++;
	}
	return false;
}

void func_997(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(fParam3->f_202.f_21[iParam0]))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iParam0 /*4*/]))
	{
		return;
	}
	iVar0 = NETWORK::NET_TO_VEH(uParam1->f_3[iParam0 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = 1;
	fParam3->f_202.f_21[iParam0] = MAP::BLIP_ADD_FOR_ENTITY(func_1229(iVar1), iVar0);
	MAP::SET_BLIP_SPRITE(fParam3->f_202.f_21[iParam0], func_1001(iVar1), false);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(fParam3->f_202.f_21[iParam0], func_998());
	MAP::BLIP_ADD_MODIFIER(fParam3->f_202.f_21[iParam0], 4.185971E-18f);
	MAP::BLIP_ADD_MODIFIER(fParam3->f_202.f_21[iParam0], 1.231009E-30f);
}

char* func_998()
{
	return "NET_CHU_BLIP_VEHICLE";
}

bool func_999(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	if (func_41(uParam2[Local_2028.f_634 /*52*/], 32))
	{
		if (!func_534())
		{
			return false;
		}
		if (!func_227(4))
		{
			return false;
		}
	}
	else if (func_41(uParam2[Local_2028.f_634 /*52*/], 64))
	{
		if (!func_534())
		{
			return false;
		}
	}
	else if (!func_536(1))
	{
		return false;
	}
	if (func_55(uParam1, 32))
	{
		return false;
	}
	if (func_80(iParam0, 16) && !func_80(iParam0, 32))
	{
		return false;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_257[iParam0 /*5*/]))
	{
		return false;
	}
	if ((func_202(iParam0, uParam1, 8) && !func_41(uParam2[Local_2028.f_634 /*52*/], 64)) && func_402(&Local_16) <= 2)
	{
		return false;
	}
	if ((func_202(iParam0, uParam1, 2) || func_202(iParam0, uParam1, 256)) || func_202(iParam0, uParam1, 512))
	{
		return false;
	}
	if (func_202(iParam0, uParam1, 16))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_OBJ(uParam1->f_257[iParam0 /*5*/]);
	if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar0) == 5 && PED::_GET_CARRIER_AS_HUMAN(iVar0) == PLAYER::PLAYER_PED_ID())
	{
		return false;
	}
	if (func_957(iParam0, 255))
	{
		return false;
	}
	return true;
}

void func_1000(int iParam0, int iParam1)
{
	if (MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_25[iParam0]))
	{
		return;
	}
	Local_2028.f_202.f_25[iParam0] = MAP::BLIP_ADD_FOR_ENTITY(-9.431136E-37f, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2028.f_202.f_25[iParam0], func_1230());
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], -1.271778E-20f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 4.185971E-18f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 1.231009E-30f);
	if (func_227(262144))
	{
		MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 1.231009E-30f);
	}
}

int func_1001(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0.01296469f;
		case 2:
		case 3:
			return 5.369151E+28f;
		case 4:
			return 1.139071E+19f;
		case 5:
			return -0.1870042f;
		default:
			break;
	}
	return 0;
}

void func_1002(int iParam0)
{
	if (func_80(iParam0, 4))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], -1.271778E-20f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], 1.10574E-22f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 2.204339E+31f);
	func_450(iParam0, 1);
	func_450(iParam0, 2);
	func_273(iParam0, 4);
}

bool func_1003(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = Local_2028.f_634;
	}
	return MISC::_IS_BIT_FLAG_SET(&(Local_363[iParam1 /*52*/].f_2), iParam0);
}

void func_1004(int iParam0)
{
	if (func_80(iParam0, 2))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], -1.271778E-20f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], 2.204339E+31f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 1.10574E-22f);
	func_450(iParam0, 1);
	func_450(iParam0, 4);
	func_273(iParam0, 2);
}

void func_1005(int iParam0)
{
	if (func_80(iParam0, 1))
	{
		return;
	}
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], 1.10574E-22f);
	MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], 2.204339E+31f);
	MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], -1.271778E-20f);
	func_450(iParam0, 2);
	func_450(iParam0, 4);
	func_273(iParam0, 1);
}

void func_1006(int iParam0, int iParam1)
{
	if (Local_2028.f_10 != -1.484548E+24f)
	{
		return;
	}
	if (Local_2028.f_202.f_30[iParam0] == iParam1)
	{
		return;
	}
	if (iParam1 == 255)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_2028.f_202.f_25[iParam0], func_1230());
		MAP::BLIP_REMOVE_MODIFIER(Local_2028.f_202.f_25[iParam0], 5.834141E-13f);
	}
	else
	{
		MAP::_SET_BLIP_NAME(Local_2028.f_202.f_25[iParam0], func_1228(func_1230(), iParam1));
		MAP::BLIP_ADD_MODIFIER(Local_2028.f_202.f_25[iParam0], 5.834141E-13f);
	}
	Local_2028.f_202.f_30[iParam0] = iParam1;
}

char* func_1007()
{
	return "NET_CHU_BLIP_DROPOFF";
}

bool func_1008()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_1009(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, int* iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	var uVar4;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	vector3 vVar11;
	bool bVar14;
	int iVar15;
	int iVar16;

	if (func_1231(iParam0) && !func_227(1))
	{
		return false;
	}
	if (func_33(1) && !func_33(2))
	{
		return false;
	}
	if (bParam2)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_227(64))
			{
				return false;
			}
			if (!func_227(4))
			{
				return false;
			}
			if (func_453(Local_2028.f_202.f_57))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_21[iVar0]))
				{
				}
				else
				{
					func_1232(1, iParam5);
					return true;
				}
				iVar0++;
			}
			return false;
		case 2:
			if (iParam1 != 1)
			{
				return false;
			}
			if (!func_227(64))
			{
				return false;
			}
			if (func_227(8))
			{
				return false;
			}
			if (func_402(&Local_16) > 1)
			{
				return false;
			}
			if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8))
			{
				return false;
			}
			if (func_33(256))
			{
				if (!func_1233(&Local_16, &Local_2028))
				{
					return false;
				}
			}
			else if (!func_1017(&Local_16, &Local_2028, 1.020647E+37f))
			{
				return false;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_21[iVar0]))
				{
				}
				else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_3[iVar0 /*4*/]))
				{
				}
				else
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_VEH(Local_16.f_3[iVar0 /*4*/]), false, false) };
					if (!func_1234(vVar5, 2f, 1117782016 /* Float: 80f */))
					{
					}
					else
					{
						func_1232(1, iParam5);
						return true;
					}
				}
				iVar0++;
			}
			return false;
		case 3:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_199(&Local_2028) != -1.484548E+24f)
			{
				return false;
			}
			if (func_227(16))
			{
				return false;
			}
			if (!func_737(-1, 1))
			{
				return false;
			}
			return true;
		case 4:
			if (iParam1 != 1)
			{
				return false;
			}
			if (func_199(&Local_2028) != -1.398992E+38f)
			{
				return false;
			}
			if (func_227(32))
			{
				return false;
			}
			if (!func_737(-1, 1))
			{
				return false;
			}
			return true;
		case 5:
			if (iParam1 != 0)
			{
				return false;
			}
			if (func_227(128) || (func_227(8388608) && func_348(PLAYER::PLAYER_ID(), 1, 1)))
			{
				return false;
			}
			if (!func_536(0))
			{
				return false;
			}
			if (!func_1235(&uVar4))
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_ID_VALID(Local_16.f_316) || !GANG::NETWORK_IS_GANG_ACTIVE(Local_16.f_316))
			{
				if (!func_59(&Local_363, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (!func_736(&Local_16, 8, 1))
					{
						return false;
					}
					func_1232(2, iParam5);
					break;
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (!func_737(-1, 1))
					{
						return false;
					}
					func_1232(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 6:
			if (iParam1 != 0)
			{
				return false;
			}
			if (func_227(256))
			{
				return false;
			}
			if (!func_227(128))
			{
				return false;
			}
			if (Local_2028.f_632 > 1112014848)
			{
				return false;
			}
			if (!func_536(1))
			{
				return false;
			}
			if ((!func_348(PLAYER::PLAYER_ID(), 1, 0) || !func_524(PLAYER::PLAYER_ID(), &fVar3, 0)) || fVar3 > 1112014848)
			{
				return false;
			}
			if (!func_1235(&uVar4))
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_ID_VALID(Local_16.f_316) || !GANG::NETWORK_IS_GANG_ACTIVE(Local_16.f_316))
			{
				if (!func_59(&Local_363, 32, 0))
				{
					return false;
				}
			}
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (!func_736(&Local_16, 8, 1))
					{
						return false;
					}
					func_1232(2, iParam5);
					break;
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (!func_737(-1, 1))
					{
						return false;
					}
					func_1232(3, iParam5);
					break;
				default:
					return false;
			}
			return true;
		case 7:
			if (func_227(4))
			{
				return false;
			}
			if (!func_41(&(Local_363[Local_2028.f_634 /*52*/]), 64))
			{
				return false;
			}
			iVar8 = PLAYER::PLAYER_ID();
			if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 32768))
			{
				*iParam4 = iVar8;
			}
			else
			{
				*iParam4 = 255;
				iVar9 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iVar8));
				iVar1 = 0;
				while (iVar1 < 32)
				{
					if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
					{
					}
					else if (!func_41(&(Local_363[iVar1 /*52*/]), 64))
					{
					}
					else
					{
						iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
						if (iVar2 == iVar8)
						{
							iVar10++;
						}
						else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
						{
						}
						else if (!GANG::NETWORK_IS_IN_SAME_GANG(iVar8, iVar2))
						{
						}
						else
						{
							iVar10++;
							if (!func_41(&(Local_363[iVar1 /*52*/]), 32768))
							{
							}
							else
							{
								*iParam4 = iVar2;
							}
							else
							{
								iVar1++;
							}
							if (iVar10 < iVar9)
							{
								return false;
							}
							else if (iVar10 == iVar9 && *iParam4 == 255)
							{
								*iParam4 = iVar8;
							}
							switch (Local_2028.f_10)
							{
								case joaat("COACH_HOLDUP_ROBBERY"):
									func_1232(4, iParam5);
									break;
								case joaat("COACH_HOLDUP_KIDNAP"):
									func_1232(5, iParam5);
									break;
								default:
									return false;
							}
							return true;
							if (func_199(&Local_2028) != -1.398992E+38f)
							{
								return false;
							}
							if (func_227(524288))
							{
								return false;
							}
							if (!func_849(255))
							{
								return false;
							}
							if (iParam1 == 1)
							{
								if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_619))
								{
									return false;
								}
								vVar11 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_619) };
							}
							else if (iParam1 == 2)
							{
								if (!VOLUME::DOES_VOLUME_EXIST(Local_2028.f_620))
								{
									return false;
								}
								vVar11 = { VOLUME::GET_VOLUME_COORDS(Local_2028.f_620) };
							}
							else
							{
								return false;
							}
							if (func_1236(Global_34, vVar11) > 1106247680)
							{
								return false;
							}
							if (ENTITY::IS_ENTITY_DEAD(Global_33))
							{
								return false;
							}
							if (!PED::IS_PED_ON_MOUNT(Global_33))
							{
								iVar15 = 0;
								while (iVar15 < 20)
								{
									if (Local_16.f_16[iVar15 /*12*/].f_2 != 13.22463f)
									{
									}
									else if (!func_989(iVar15, 255))
									{
									}
									else if (!func_437(iVar15, &iVar16, 1, 0))
									{
									}
									else if (ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar16) != 7)
									{
									}
									else
									{
										bVar14 = true;
									}
									else
									{
										iVar15++;
									}
								}
								if (!bVar14)
								{
									return false;
								}
							}
							return true;
							return false;
						}
					}
				}
			}
			default:
				break;
	}
}

int func_1010(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1011(int iParam0)
{
	switch (iParam0)
	{
		case 5:
		case 6:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1012(int iParam0)
{
	return 10000;
}

char* func_1013(int iParam0, int iParam1, char* sParam2)
{
	bool bVar0;

	bVar0 = func_33(256);
	switch (iParam0)
	{
		case 1:
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (Local_16.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_STATIONARY", sParam2);
						}
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP", sParam2);
					}
					if (bVar0)
					{
						if (func_635())
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_635())
					{
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL", sParam2);
					}
					else
					{
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_KIDNAP_PLURAL_S", sParam2);
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (Local_16.f_321 < 2)
					{
						if (bVar0)
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_STATIONARY", sParam2);
						}
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY", sParam2);
					}
					if (bVar0)
					{
						if (func_635())
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY", sParam2);
						}
						else
						{
							return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_STATIONARY_S", sParam2);
						}
					}
					if (func_635())
					{
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL", sParam2);
					}
					else
					{
						return MISC::VAR_STRING(2, "NET_CHU_HELP_INTRO_ROBBERY_PLURAL_S", sParam2);
					}
					break;
			}
			return "";
		case 2:
			if (!func_635())
			{
				if (bVar0)
				{
					return "NET_CHU_HELP_STOP_COACH_STATIONARY";
				}
				return MISC::VAR_STRING(2, "NET_CHU_HELP_STOP_COACH", sParam2);
			}
			if (bVar0)
			{
				return "NET_CHU_HELP_STOP_COACH_PLURAL_STATIONARY";
			}
			return MISC::VAR_STRING(2, "NET_CHU_HELP_STOP_COACH_PLURAL", sParam2);
		case 3:
			return "NET_CHU_HELP_ROB";
		case 4:
			if (Local_16.f_321 < 2)
			{
				return "NET_CHU_HELP_LASSO_VIP";
			}
			return "NET_CHU_HELP_LASSO_VIP_PLURAL";
		case 5:
		case 6:
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					return MISC::VAR_STRING(10, "NET_CHU_HELP_PVP_KIDNAP", func_1237(4.465091E-08f), sParam2);
				case joaat("COACH_HOLDUP_ROBBERY"):
					return MISC::VAR_STRING(10, "NET_CHU_HELP_PVP_ROBBERY", func_1237(4.465091E-08f), sParam2);
				default:
					break;
			}
			return "";
		case 7:
			switch (Local_2028.f_10)
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_16.f_321 < 2)
						{
							return MISC::VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_SELF", func_1237(4.465091E-08f), sParam2);
						}
						else
						{
							return MISC::VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL_SELF", func_1237(4.465091E-08f), sParam2);
						}
					}
					else if (Local_16.f_321 < 2)
					{
						return MISC::VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP", func_1238(iParam1, -18751.78f), func_1237(4.465091E-08f), sParam2);
					}
					else
					{
						return MISC::VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_KIDNAP_PLURAL", func_1238(iParam1, -18751.78f), func_1237(4.465091E-08f), sParam2);
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (iParam1 == PLAYER::PLAYER_ID())
					{
						if (Local_16.f_322 < 2)
						{
							return MISC::VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_SELF", func_1237(4.465091E-08f), sParam2);
						}
						else
						{
							return MISC::VAR_STRING(10, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL_SELF", func_1237(4.465091E-08f), sParam2);
						}
					}
					else if (Local_16.f_322 < 2)
					{
						return MISC::VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY", func_1238(iParam1, -18751.78f), func_1237(4.465091E-08f), sParam2);
					}
					else
					{
						return MISC::VAR_STRING(42, "NET_CHU_HELP_INTRO_SECONDARY_ROBBERY_PLURAL", func_1238(iParam1, -18751.78f), func_1237(4.465091E-08f), sParam2);
					}
					break;
			}
			return "";
		case 8:
			return "NET_CHU_HELP_DELIVER_PED_ON_MOUNT";
		default:
			break;
	}
	return "";
}

int func_1014(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	char* sVar3;

	iVar0 = func_1239(iParam0, 1);
	bVar2 = func_348(PLAYER::PLAYER_ID(), 1, 1);
	if (bVar2 || Global_1110244.f_3659.f_2[iVar0] < 5)
	{
		if (bVar2)
		{
			sVar3 = "GFH_HELP_PVP_NEARBY_DEFENSIVE";
		}
		else
		{
			switch (iParam0)
			{
				case joaat("ATTACK"):
					sVar3 = "GFH_HELP_PVP_NEARBY_ATTACK";
					break;
				case joaat("DEFEND"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DEFEND";
					break;
				case joaat("DELIVER"):
					sVar3 = "GFH_HELP_PVP_NEARBY_DELIVER";
					break;
			}
		}
		if (!MAP::DOES_BLIP_EXIST(iParam1))
		{
			iVar1 = func_1240(MISC::VAR_STRING(2, sVar3), 10000, 0, 0, 0, 1);
		}
		else
		{
			iVar1 = func_1240(MISC::VAR_STRING(2, sVar3, iParam1), 10000, 0, 0, 0, 1);
		}
		if (bVar2)
		{
		}
		else
		{
			Global_1110244.f_3659.f_2[iVar0]++;
		}
	}
	return iVar1;
}

void func_1015(char* sParam0, int iParam1, bool bParam2)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return;
	}
	if (bParam2)
	{
		func_1241(1);
	}
	Local_2028.f_202.f_59 = func_1240(sParam0, iParam1, 0, 0, 0, 1);
}

bool func_1016(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			*iParam1 = 64;
			return true;
		case 2:
			*iParam1 = 8;
			return true;
		case 4:
			*iParam1 = 32;
			return true;
		case 3:
			*iParam1 = 16;
			return true;
		case 5:
			if (func_348(PLAYER::PLAYER_ID(), 1, 1))
			{
				*iParam1 = 8388608;
			}
			else
			{
				*iParam1 = 128;
			}
			return true;
		case 6:
			*iParam1 = 256;
			return true;
		case 8:
			*iParam1 = 524288;
			return true;
		case 7:
			*iParam1 = 4;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1017(var uParam0, bool bParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_941(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (uParam0->f_16[iVar4 /*12*/].f_2 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(uParam0->f_16[iVar4 /*12*/]);
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 1117782016)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1018(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam2))
		{
		}
		else if (func_113(uParam0->f_16[iVar0 /*12*/].f_4, iParam3))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1019(bool bParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
		{
		}
		else if ((func_201(iVar0, &Local_16, 32) || func_201(iVar0, &Local_16, 65536)) || func_201(iVar0, &Local_16, 131072))
		{
		}
		else
		{
			bVar3 = false;
			if (Local_16.f_16[iVar0 /*12*/].f_7 == 255)
			{
				*bParam0 = 0;
			}
			else if (Local_16.f_16[iVar0 /*12*/].f_7 == iVar2 && !func_989(iVar0, 255))
			{
				*bParam0 = 0;
			}
			else if (!func_1022(Local_16.f_16[iVar0 /*12*/].f_7, &uVar1))
			{
				*bParam0 = 0;
			}
			else if (!GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_16[iVar0 /*12*/].f_7, iVar2))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1020()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!func_202(iVar0, &Local_16, 128))
		{
		}
		else if (func_202(iVar0, &Local_16, 2))
		{
		}
		else if (func_202(iVar0, &Local_16, 4))
		{
		}
		else if (func_202(iVar0, &Local_16, 256) || func_202(iVar0, &Local_16, 512))
		{
		}
		else
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_1021(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	bool bVar3;

	*bParam0 = 1;
	iVar1 = PLAYER::PLAYER_ID();
	bVar3 = true;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if ((((!func_202(iVar0, &Local_16, 128) || func_202(iVar0, &Local_16, 2)) || func_202(iVar0, &Local_16, 16)) || func_202(iVar0, &Local_16, 256)) || func_202(iVar0, &Local_16, 512))
		{
		}
		else
		{
			bVar3 = false;
			if (Local_16.f_257[iVar0 /*5*/].f_3 == 255)
			{
				*bParam0 = 0;
			}
			else if (!func_1022(Local_16.f_257[iVar0 /*5*/].f_3, &uVar2))
			{
				*bParam0 = 0;
			}
			else if (!GANG::NETWORK_IS_IN_SAME_GANG(Local_16.f_257[iVar0 /*5*/].f_3, iVar1))
			{
				*bParam0 = 0;
				return true;
			}
		}
		iVar0++;
	}
	if (bVar3)
	{
		*bParam0 = 0;
	}
	return false;
}

bool func_1022(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iParam0))
	{
		return false;
	}
	*uParam1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam0);
	return true;
}

char* func_1023(bool bParam0)
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam0)
			{
				return "NET_CHU_OBJ_GO_TO_VIP_S";
			}
			return "NET_CHU_OBJ_GO_TO_VIP";
		default:
			break;
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_PASSENGER_S";
	}
	return "NET_CHU_OBJ_GO_TO_PASSENGER";
}

char* func_1024(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_GO_TO_COACH";
	}
	return "NET_CHU_OBJ_GO_TO_COACH_PLURAL";
}

char* func_1025(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_STOP_COACH";
	}
	return "NET_CHU_OBJ_STOP_COACH_PLURAL";
}

char* func_1026(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_KILL_GUARDS_STATIONARY";
	}
	return "NET_CHU_OBJ_KILL_GUARDS";
}

char* func_1027()
{
	return "NET_CHU_OBJ_GET_CASH";
}

char* func_1028(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_HOGTIE_S";
	}
	return "NET_CHU_OBJ_HOGTIE";
}

char* func_1029(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return MISC::VAR_STRING(10, "NET_CHU_OBJ_DROPOFF_KIDNAP_S_CARRY", func_1242());
	}
	if (bParam0)
	{
		return "NET_CHU_OBJ_DROPOFF_KIDNAP_S";
	}
	return "NET_CHU_OBJ_DROPOFF_KIDNAP";
}

char* func_1030(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_SECURE_BAG";
	}
	return "NET_CHU_OBJ_SECURE_BAGS";
}

char* func_1031(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		if (bParam1)
		{
			return MISC::VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAG_CARRY", func_1242());
		}
		return "NET_CHU_OBJ_TURN_IN_BAG_S";
	}
	if (bParam1)
	{
		return MISC::VAR_STRING(10, "NET_CHU_OBJ_TURN_IN_BAGS_CARRY", func_1242());
	}
	return "NET_CHU_OBJ_TURN_IN_BAG";
}

char* func_1032(float fParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	var uVar0;
	char* sVar1;

	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			func_636(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1238(*iParam2, 4.808429E-35f);
			}
			else
			{
				sVar1 = func_1243(*iParam3, 4.808429E-35f);
			}
			if (iParam1 || *bParam4)
			{
				return MISC::VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP_S", sVar1);
			}
			return MISC::VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_KIDNAP", sVar1);
		case joaat("COACH_HOLDUP_ROBBERY"):
			func_637(bParam4, &uVar0, iParam2, iParam3);
			if (*bParam4)
			{
				sVar1 = func_1238(*iParam2, 4.808429E-35f);
			}
			else
			{
				sVar1 = func_1243(*iParam3, 4.808429E-35f);
			}
			if (iParam1 || *bParam4)
			{
				return MISC::VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS_S", sVar1);
			}
			return MISC::VAR_STRING(10, "NET_CHU_OBJ_PVP_STEAL_BAGS", sVar1);
		default:
			break;
	}
	return "";
}

char* func_1033()
{
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_OBJ_PVP_STEAL_KIDNAP_MULTI";
		case joaat("COACH_HOLDUP_ROBBERY"):
			return "NET_CHU_OBJ_PVP_STEAL_BAGS_MULTI";
		default:
			break;
	}
	return "";
}

char* func_1034(float fParam0, bool bParam1)
{
	switch (fParam0->f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam1)
			{
				return MISC::VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP_S", func_1242());
			}
			return MISC::VAR_STRING(10, "NET_CHU_OBJ_TEAM_DROPOFF_KIDNAP", func_1242());
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (bParam1)
			{
				return MISC::VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAG", func_1242());
			}
			return MISC::VAR_STRING(10, "NET_CHU_OBJ_TEAM_TURN_IN_BAGS", func_1242());
		default:
			break;
	}
	return "";
}

char* func_1035(bool bParam0)
{
	if (bParam0)
	{
		return "NET_CHU_OBJ_TAKE_BAG";
	}
	return "NET_CHU_OBJ_TAKE_BAGS";
}

char* func_1036()
{
	return MISC::VAR_STRING(10, "NET_CHU_OBJ_DROP_KIDNAP", func_1242());
}

char* func_1037(bool bParam0)
{
	if (bParam0)
	{
		return MISC::VAR_STRING(10, "NET_CHU_OBJ_DROP_BAG", func_1242());
	}
	return MISC::VAR_STRING(10, "NET_CHU_OBJ_DROP_BAGS", func_1242());
}

int func_1038(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(3, true, false);
	return func_1244(sParam0, iParam1, iParam2, iParam3, 0, bParam4);
}

char* func_1039()
{
	return "NET_CHU_NAME";
}

char* func_1040(bool bParam0)
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (bParam0)
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP";
			}
			if (func_635())
			{
				return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL";
			}
			return "NET_CHU_TOAST_START_BODY_KIDNAP_PLURAL_S";
		case joaat("COACH_HOLDUP_ROBBERY"):
		default:
			break;
	}
	if (func_635())
	{
		return "NET_CHU_TOAST_START_BODY_ROBBERY_PLURAL";
	}
	return "NET_CHU_TOAST_START_BODY_ROBBERY";
}

int func_1041(char* sParam0, char* sParam1)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	iVar0 = func_1247(sParam0, sParam1, 7500, func_1245(), func_1246(), 0, 1, 1);
	return iVar0;
}

char* func_1042(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "GEM_GFH_OUTRO_TITLE_OVER";
		case 1:
			return "GEM_GFH_OUTRO_TITLE_PASSED";
		case 2:
			return "GEM_GFH_OUTRO_TITLE_FAILED";
		default:
			break;
	}
	return "";
}

struct<8> func_1043(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

char* func_1044(bool bParam0)
{
	int iVar0;
	var uVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_41(&(Local_363[Local_2028.f_634 /*52*/]), 8388608))
	{
		if (func_33(2048))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_DISBAND_POSSE";
		}
		else if (func_33(4096))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_LEFT_POSSE";
		}
		else if (func_33(1024))
		{
			return "NET_CHU_TOAST_END_BODY_ABANDON_POSSE";
		}
		return "NET_CHU_TOAST_END_BODY_ABANDON";
	}
	iVar0 = func_1248();
	switch (iVar0)
	{
		case 1:
			func_208(&sVar2, &iVar3);
			switch (func_199(&Local_2028))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_KIDNAP";
					}
					return MISC::VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_KIDNAP_PLURAL", sVar2, iVar3);
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (iVar3 == 1)
					{
						return "NET_CHU_TOAST_END_BODY_WON_ROBBERY";
					}
					return MISC::VAR_STRING(2, "NET_CHU_TOAST_END_BODY_WON_ROBBERY_PLURAL", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 0:
			func_208(&sVar2, &iVar3);
			switch (func_199(&Local_2028))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					return MISC::VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_KIDNAP", sVar2, iVar3);
				case joaat("COACH_HOLDUP_ROBBERY"):
					return MISC::VAR_STRING(2, "NET_CHU_TOAST_END_BODY_OVER_ROBBERY", sVar2, iVar3);
				default:
					break;
			}
			return "";
		case 2:
			if (func_55(&Local_16, 64))
			{
				return "NET_CHU_TOAST_END_BODY_EXPIRED";
			}
			switch (func_199(&Local_2028))
			{
				case joaat("COACH_HOLDUP_KIDNAP"):
					if (func_366(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PLURAL";
						}
					}
					else if (func_1249(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP", func_1250(iVar4, iVar5, NaNf));
						}
						else
						{
							return MISC::VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_PLURAL", func_1250(iVar4, iVar5, NaNf));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_KIDNAP_PVP_R_PLUR";
					}
					break;
				case joaat("COACH_HOLDUP_ROBBERY"):
					if (func_366(0) == 0)
					{
						if (bParam0)
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY";
						}
						else
						{
							return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PLURAL";
						}
					}
					else if (func_1249(&iVar4, &iVar5, &uVar1))
					{
						if (bParam0)
						{
							return MISC::VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP", func_1250(iVar4, iVar5, NaNf));
						}
						else
						{
							return MISC::VAR_STRING(10, "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_PLURAL", func_1250(iVar4, iVar5, NaNf));
						}
					}
					else if (bParam0)
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R";
					}
					else
					{
						return "NET_CHU_TOAST_END_BODY_FAILED_ROBBERY_PVP_R_PLUR";
					}
					break;
				default:
					return "";
			}
			break;
	}
	return "";
}

void func_1045(struct<8> Param0, struct<8> Param8, struct<8> Param16, int iParam24)
{
	Global_1110244.f_21.f_85 = 1;
	Global_1110244.f_21.f_85.f_1 = { Param0 };
	Global_1110244.f_21.f_85.f_9 = { Param8 };
	Global_1110244.f_21.f_85.f_17 = { Param16 };
	Global_1110244.f_21.f_85.f_25 = iParam24;
	Global_1110244.f_21.f_85.f_26 = 0;
}

int func_1046(char* sParam0, char* sParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return 0;
	}
	UIFEED::UI_FEED_CLEAR_CHANNEL(11, true, false);
	if (iParam2 <= 0)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_FAILED";
	}
	else if (iParam2 == iParam3)
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_PASSED";
	}
	else
	{
		sVar1 = "GEM_GFH_OUTRO_TITLE_OVER";
	}
	if (bParam4)
	{
		iVar0 = func_1251(sVar1, sParam0, sParam1, 7500, func_669(), func_670(), 0, 1, 1, 1);
	}
	else
	{
		iVar0 = func_1247(sVar1, sParam1, 7500, func_669(), func_670(), 0, 1, 1);
	}
	return iVar0;
}

float func_1047(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLIP_MP_DEADEYE"):
		case joaat("BLIP_MP_MISSION_SAMSON_FINCH"):
		case joaat("BLIP_ADVERSARY_MEDIUM"):
		case joaat("BLIP_AMBIENT_HUNTER"):
		case joaat("BLIP_MP_BASE_B"):
		case joaat("BLIP_MP_BASE"):
		case joaat("BLIP_MP_BOUNTY_DEAD"):
		case joaat("BLIP_MP_LOCATION_S"):
		case joaat("BLIP_MP_GUN_FOR_HIRE"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_LOWER"):
		case joaat("BLIP_WANTED_POSTER"):
		case joaat("BLIP_MP_COACH_SMUGGLE"):
		case joaat("BLIP_MP_BASE_A"):
		case joaat("BLIP_MP_BASE_D"):
		case joaat("BLIP_PED_9"):
		case joaat("BLIP_MP_MISSION_OLD_MAN_JONES"):
		case joaat("BLIP_MP_LOCATION_M"):
		case joaat("BLIP_MP_FLAG"):
		case joaat("BLIP_MP_CASH_CHECKPOINT"):
		case joaat("BLIP_MP_MISSION_BRONTE"):
		case joaat("BLIP_PED_10"):
		case joaat("BLIP_MP_SPAWNPOINT"):
		case joaat("BLIP_MP_MISSION_HORLEY"):
		case joaat("BLIP_MP_ROUNDUP"):
		case joaat("BLIP_PED_8"):
		case joaat("BLIP_MP_BASE_C"):
		case joaat("BLIP_MP_LOCATION_E"):
		case joaat("BLIP_MP_MISSION_REVENGE"):
		case joaat("BLIP_TROPHY"):
		case joaat("BLIP_MP_COACH_INTERCEPT"):
		case joaat("BLIP_AMBIENT_HOT_TARGET"):
		case joaat("BLIP_MP_LOCATION_L"):
		case joaat("BLIP_PED_11"):
		case joaat("BLIP_MP_MISSION_TBD"):
		case joaat("BLIP_PREDATOR"):
		case joaat("BLIP_PED_7"):
		case joaat("BLIP_MP_LOCATION_D"):
		case joaat("BLIP_MP_BASE_F"):
		case joaat("BLIP_AMBIENT_VIP"):
		case joaat("BLIP_MP_BEAST"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY_SPECIAL"):
		case joaat("BLIP_MP_LOCATION_P"):
		case joaat("BLIP_MP_PLAYLIST_FREEFORALL"):
		case joaat("BLIP_BOLT"):
		case joaat("BLIP_MP_COACH_RECOVER"):
		case joaat("BLIP_MP_LOCATION_N"):
		case joaat("BLIP_MP_LOCATION_O"):
		case joaat("BLIP_MP_SUPPLIES"):
		case joaat("BLIP_PED_6"):
		case joaat("BLIP_GUNSLINGER"):
		case joaat("BLIP_MP_GAME_MAGNIFICENT_FOUR"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_LOWER"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_8"):
		case joaat("BLIP_MP_BASE_E"):
		case joaat("BLIP_MP_LOCATION_G"):
		case joaat("BLIP_MP_GAME_VIP"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY_HIGHER"):
		case joaat("BLIP_MP_MISSION_MARSHALL_TOM_DAVIES"):
		case joaat("BLIP_PED_5"):
		case joaat("BLIP_MP_LOCATION_Y"):
		case joaat("BLIP_MP_LOCATION_H"):
		case joaat("BLIP_AMBIENT_DELIVERY"):
		case joaat("BLIP_MP_LOCATION_A"):
		case joaat("BLIP_AMBIENT_BOUNTY_HUNTER_WAGON"):
		case joaat("BLIP_AMBIENT_CRATE"):
		case joaat("BLIP_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_K"):
		case joaat("BLIP_JOB_BOARD"):
		case joaat("BLIP_TEAMSTERS"):
		case joaat("BLIP_MP_BASE_H"):
		case joaat("BLIP_MP_MISSION_SEVEN"):
		case joaat("BLIP_ADVERSARY_LARGE"):
		case joaat("BLIP_MP_LOCATION_C"):
		case joaat("BLIP_PED_16"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_4"):
		case joaat("BLIP_MP_PLAYLIST_OBJECTIVE"):
		case joaat("BLIP_MP_LOCATION_J"):
		case joaat("BLIP_MP_MISSION_ROBBERY"):
		case joaat("BLIP_PED_4"):
		case joaat("BLIP_MP_BASE_G"):
		case joaat("BLIP_MP_RUSTLING"):
		case joaat("BLIP_MP_LOCATION_B"):
		case joaat("BLIP_MP_PLAYLIST_ADVERSARY"):
		case joaat("BLIP_MP_MISSION_CLAY"):
		case joaat("BLIP_PED_3"):
		case joaat("BLIP_AMBIENT_KING"):
		case joaat("BLIP_MP_GAME_ANIMAL_PROTECTION"):
		case joaat("BLIP_SPECIAL_SERIES_2"):
		case joaat("BLIP_MOONSHINE_STILL"):
		case joaat("BLIP_MP_GAME_RACE_HORSE"):
		case joaat("BLIP_MP_GAME_MULTI_TARGET"):
		case joaat("BLIP_MP_ATTACK_TARGET"):
		case joaat("BLIP_MP_LOCATION_V"):
		case joaat("BLIP_SPECIAL_SERIES_1"):
		case joaat("BLIP_MP_LOCATION_X"):
		case joaat("BLIP_PED_2"):
		case joaat("BLIP_ADVERSARY_SMALL"):
		case joaat("BLIP_MP_COACH_ESCORT"):
		case joaat("BLIP_MP_LOCATION_U"):
		case joaat("BLIP_PED_12"):
		case joaat("BLIP_OUTLAW"):
		case joaat("BLIP_AMBIENT_POSSE_DEPUTY"):
		case joaat("BLIP_MP_LOCATION_W"):
		case joaat("BLIP_MP_LOCATION_I"):
		case joaat("BLIP_BAG_CAPTURE"):
		case joaat("BLIP_MP_MISSION_JESSE"):
		case joaat("BLIP_MP_PLAYLIST_EXCLUSIVE"):
		case joaat("BLIP_MP_PLAYLIST_TEAMGAME"):
		case joaat("BLIP_HIRE_CAMP_FOLLOWER"):
		case joaat("BLIP_PED_1"):
		case joaat("BLIP_MP_GAME_RUNAWAY_TRAIN"):
		case joaat("BLIP_BAG_DEFEND"):
		case joaat("BLIP_MP_DEFEND_TARGET"):
		case joaat("BLIP_AMBIENT_MARKED_FOR_DEATH"):
		case joaat("BLIP_PED_13"):
		case joaat("BLIP_MP_LOCATION_Z"):
		case joaat("BLIP_MOONSHINE_VAT"):
		case joaat("BLIP_MP_LOCATION_R"):
		case joaat("BLIP_BALL"):
		case joaat("BLIP_HEALTH"):
		case joaat("BLIP_MP_PLAYLIST_SERIES_12"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER_HIGHER"):
		case joaat("BLIP_PED_14"):
		case joaat("BLIP_PRODUCT_MOONSHINE"):
		case joaat("BLIP_MP_LOCATION_F"):
		case joaat("BLIP_MP_GAME_TREASURE_HUNT"):
		case joaat("BLIP_MP_LOCATION_Q"):
		case joaat("BLIP_MP_BASE_J"):
		case joaat("BLIP_NED_KELLY_OUTFIT"):
		case joaat("BLIP_MP_DELIVER_TARGET"):
		case joaat("BLIP_PED_15"):
		case joaat("BLIP_MP_PLAYLIST_RACES"):
		case joaat("BLIP_BUSINESS_MOONSHINE"):
		case joaat("BLIP_AMBIENT_POSSE_LEADER"):
		case joaat("BLIP_MP_GAME_RACE_CANOE"):
		case joaat("BLIP_MP_LOCATION_T"):
		case joaat("BLIP_MP_UGC"):
		case joaat("BLIP_MP_GAME_HILL"):
		case joaat("BLIP_MP_MISSION_BRAITHWAITE"):
		case joaat("BLIP_MP_BASE_I"):
			return 8.198329E-15f;
	}
	return -1.391775E+23f;
}

int func_1048(int iParam0)
{
	return iParam0;
}

void func_1049(var uParam0, int iParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= 7)
	{
		return;
	}
	if ((uParam0[iParam2 /*34*/])->f_23 != iParam1)
	{
		(uParam0[iParam2 /*34*/])->f_23 = iParam1;
	}
}

int func_1050(bool bParam0, bool bParam1)
{
	if (!func_1252())
	{
		*bParam1 = 1;
		return 0;
	}
	switch (bParam0->f_2)
	{
		case 0:
			if (func_1253())
			{
				bParam0->f_3 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(-3.715775E+34f);
				func_459(1);
				func_1254(bParam0, 1);
			}
			return 0;
		case 1:
			if (!func_1255())
			{
				return 0;
			}
			func_1254(bParam0, 2);
			break;
	}
	Global_1940072.f_110 = 1;
	return 1;
}

int func_1051(bool bParam0)
{
	if (bParam0->f_5 == 0)
	{
		bParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "centralInfoDatastore");
		func_1256(bParam0->f_5, &(bParam0->f_6), 0);
		func_1256(bParam0->f_5, &(bParam0->f_7), 1);
		func_1256(bParam0->f_5, &(bParam0->f_8), 37);
		func_1257(bParam0->f_8, 1);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(bParam0->f_5, "timerMessageString", "");
		return 0;
	}
	return 1;
}

int func_1052(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	if (iParam2 != 0)
	{
		iParam3 = iParam2;
		iParam4 = iParam2;
	}
	if ((uParam1[0 /*34*/])->f_21 == 0)
	{
		func_1258(bParam0, uParam1, 0, "meter0", iParam3, iParam5);
		func_1258(bParam0, uParam1, 1, "meter1", iParam4, iParam6);
		func_1258(bParam0, uParam1, 2, "meter2", iParam2, 0);
		func_1258(bParam0, uParam1, 3, "meter3", iParam2, 0);
		func_1258(bParam0, uParam1, 4, "meter4", iParam2, 0);
		func_1258(bParam0, uParam1, 5, "meter5", iParam2, 0);
		func_1258(bParam0, uParam1, 6, "meter6", iParam2, 0);
		return 0;
	}
	return 1;
}

int func_1053(bool bParam0, int iParam1, bool bParam2)
{
	switch (bParam0->f_1)
	{
		case 0:
			if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(bParam0->f_3))
			{
				func_1259(bParam0, 1);
			}
			break;
		case 1:
			*bParam0 = iParam1;
			if (*bParam0 != 0)
			{
				UISTATEMACHINE::_UIFLOWBLOCK_ENTER(bParam0->f_3, *bParam0);
				UISTATEMACHINE::UI_STATE_MACHINE_CREATE(2.040361E+17f, bParam0->f_3);
			}
			func_1259(bParam0, 2);
			break;
		case 2:
			if (iParam1 != *bParam0)
			{
				func_1259(bParam0, 3);
				return 0;
			}
			return 1;
		case 3:
			if (UISTATEMACHINE::UI_STATE_MACHINE_EXISTS(2.040361E+17f) && UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(2.040361E+17f))
			{
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_EXIT(2.040361E+17f, 0);
				func_1259(bParam0, 4);
			}
			else
			{
				func_1259(bParam0, 0);
			}
			break;
		case 4:
			if (!UISTATEMACHINE::_UI_STATE_MACHINE_IS_EXITED(2.040361E+17f))
			{
				*bParam2 = 1;
				func_1259(bParam0, 0);
			}
			break;
	}
	return 0;
}

void func_1054(bool bParam0, int iParam1, bool bParam2, int iParam3, char* sParam4)
{
	char* sVar0;
	bool bVar1;

	sVar0 = func_1260(iParam1, bParam2, 3, 0, 0, 0);
	if (bParam0->f_13 != iParam1)
	{
		func_1261(bParam0->f_6, sVar0);
	}
	bVar1 = iParam1 <= iParam3;
	if (bParam0->f_14 != bVar1)
	{
		func_1257(bParam0->f_7, bVar1);
		bParam0->f_14 = bVar1;
	}
	func_1262(bParam0, iParam1, sParam4);
	func_1263(bParam0, iParam1);
	bParam0->f_13 = iParam1;
}

void func_1055(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, int iParam6)
{
	int iVar0;
	float fVar1;
	var uVar2;
	float fVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	bool bVar8;
	bool bVar9;

	func_1264(iParam1, &fVar1, &uVar2, &fVar3, &uVar4, &uVar5, &uVar6, &uVar7);
	iVar0 = 0;
	while (iVar0 <= 6)
	{
		bVar8 = MISC::IS_BIT_SET(iParam5, iVar0);
		bVar9 = MISC::IS_BIT_SET(iParam6, iVar0);
		func_1265(uParam0, iVar0, fVar1, uVar2, fVar3, uVar4, uVar5, uVar6, uVar7, bVar8, bParam2, bParam3, bParam4, bVar9);
		iVar0++;
	}
}

void func_1056(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_1057(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_1061(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_1058(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_1059(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_1060(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_648(iParam0))
	{
		return;
	}
	iVar0 = func_1048(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

bool func_1061(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_1062(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;

	Global_1951897[iParam0 /*23*/].f_4 = iParam1;
	Global_1951897[iParam0 /*23*/] = iParam4;
	Global_1951897[iParam0 /*23*/].f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Global_1951897[iParam0 /*23*/].f_2 = iParam5;
	Global_1951897[iParam0 /*23*/].f_6 = { vParam6 };
	Global_1951897[iParam0 /*23*/].f_9 = fParam9;
	Global_1951897[iParam0 /*23*/].f_10 = iParam10;
	Global_1951897[iParam0 /*23*/].f_11 = iParam11;
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_5 = iParam12;
	Global_1951897[iParam0 /*23*/].f_1 = 2;
	Global_1951897[iParam0 /*23*/].f_17 = -1;
	Global_1951897[iParam0 /*23*/].f_18 = iParam16;
	Global_1951897[iParam0 /*23*/].f_19 = iParam15;
	Global_1951897[iParam0 /*23*/].f_20 = bParam25;
	Global_1951897[iParam0 /*23*/].f_22 = 0f;
	if (bParam25)
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_GAME_TIMER();
	}
	else
	{
		Global_1951897[iParam0 /*23*/].f_21 = MISC::GET_SYSTEM_TIME();
	}
	iVar0 = HUD::_UI_PROMPT_REGISTER_BEGIN();
	HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UI_PROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UI_PROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_UI_PROMPT_CONTEXT_SET_VOLUME(iVar0, iParam11);
		HUD::_UI_PROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UI_PROMPT_CONTEXT_SET_RADIUS(iVar0, fParam9);
	}
	HUD::_UI_PROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UI_PROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 18, true);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, true);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, false);
			break;
		case 2:
			HUD::_UI_PROMPT_SET_STANDARD_MODE(iVar0, true);
			break;
		case 1:
			HUD::_UI_PROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		case 3:
			HUD::_UI_PROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		case 6:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 7:
			HUD::_UI_PROMPT_SET_HOLD_AUTO_FILL_WITH_DECAY_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 24, true);
			}
			break;
		case 8:
			HUD::_UI_PROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		case 9:
			HUD::_UI_PROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		case 14:
			HUD::_UI_PROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		case 16:
			HUD::_UI_PROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		case 10:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 4:
		case 5:
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		case 11:
			HUD::_UI_PROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, fParam18, fParam19);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 13:
			HUD::_UI_PROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), fParam18, 0f, fParam19);
			break;
		case 15:
			HUD::_UI_PROMPT_SET_ROTATE_MODE(iVar0, fParam20, bParam21);
			HUD::_UI_PROMPT_SET_ATTRIBUTE(iVar0, 10, true);
			break;
	}
	HUD::_UI_PROMPT_REGISTER_END(iVar0);
	Global_1951897[iParam0 /*23*/].f_3 = iVar0;
	func_1057(iParam0, 1);
	func_1058(iParam0, 1);
	func_1059(iParam0, 128);
}

int func_1063(char* sParam0, float fParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = fParam1;
	iVar16 = UIFEED::_UI_FEED_POST_GAME_UPDATE_SHARD(&Var0, &vVar13, bParam6);
	return iVar16;
}

char* func_1064(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar0) && GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return func_1243(iVar0, iParam1);
	}
	return func_1238(iParam0, iParam1);
}

int func_1065(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_1066(int iParam0)
{
	func_1266(iParam0);
	PED::_0xC9151483CC06A414(iParam0);
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1267(iParam0, -3.6733E-34f);
			break;
		case 1:
			func_1267(iParam0, -1.17595E+09f);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -1.108564E+29f, 0, false);
			break;
		case 1:
			func_1267(iParam0, 4.84466E-24f);
			break;
		case 2:
			func_1267(iParam0, 1.520126E-27f);
			break;
		case 3:
			func_1267(iParam0, 1.620766E-22f);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			func_1268(iParam0, 1);
			break;
		case 1:
			func_1268(iParam0, 2);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
	{
		case 0:
			func_1267(iParam0, 1.872375E+10f);
			break;
		case 1:
			func_1267(iParam0, 1.9143E+24f);
			break;
		case 2:
			func_1267(iParam0, -4.369422E+26f);
			break;
	}
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -6.346746E-39f, 0, false);
			break;
		case 1:
			func_1267(iParam0, -3.087019E+28f);
			break;
		case 2:
			func_1267(iParam0, 4.262617E-13f);
			break;
		case 3:
			func_1267(iParam0, 2.737737E-21f);
			break;
	}
	PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
}

int func_1067(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_ON_MOUNT(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6);
	return iVar0;
}

int func_1068(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam1, iParam2, bParam3, bParam4, bParam5);
	return iVar0;
}

bool func_1069(int iParam0, bool bParam1)
{
	struct<5> Var0;
	var uVar5;

	if (func_141(&Local_2028, &Var0, iParam0) && func_176(Var0, -6.089035E-10f, &uVar5, 0))
	{
		*bParam1 = uVar5;
		return true;
	}
	return false;
}

bool func_1070(int iParam0, int iParam1)
{
	struct<5> Var0;

	if (func_141(&Local_2028, &Var0, iParam0) && func_299(Var0, 2.379664E-35f, iParam1, 0))
	{
		return true;
	}
	return false;
}

float func_1071()
{
	struct<5> Var0;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	var uVar9;
	struct<5> Var10;
	int iVar15;

	if (((func_292(&Local_2028, &Var0) && func_312(&Var0, 6.594195E-24f, 0, 0)) && func_312(&Var0, -2.953709E-36f, 0, 0)) && func_1269(Var0) > 0)
	{
		iVar8 = func_1269(Var0);
		func_140(&Var0);
		func_292(&Local_2028, &Var0);
		func_312(&Var0, 6.594195E-24f, 0, 0);
		iVar7 = 0;
		while (iVar7 < iVar8)
		{
			Var10 = { Var0 };
			if (!func_312(&Var10, -7.553798E+15f, iVar7, 0))
			{
			}
			else
			{
				if (!func_310(Var10, 1.311565E-13f, &fVar6, 0))
				{
					fVar6 = 1f;
				}
				fVar6 = func_428(fVar6, 0f, 1f);
				fVar6 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fVar6);
				if (fVar6 < fVar5)
				{
				}
				else if (!func_176(Var10, 5.821242E-12f, &uVar9, 0))
				{
				}
				else
				{
					fVar5 = fVar6;
				}
			}
			iVar7++;
		}
		iVar15 = uVar9;
		if (WEAPON::IS_WEAPON_VALID(iVar15))
		{
			return iVar15;
		}
	}
	return func_1270();
}

bool func_1072(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[128];
	bool bVar21;
	bool bVar22;
	int iVar23;
	int iVar24;
	float fVar25;

	if (!bParam12 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	switch (bParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(bParam1))
			{
				return bParam1;
			}
			bVar0 = bParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(bVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26688 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					bVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_236(bVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, bVar3))
					{
						bVar21 = true;
					}
				}
				if (!bVar21)
				{
					iVar1 = WEAPON::GET_WEAPONTYPE_GROUP(bVar0);
					if (iVar1 != 0 && iVar2 != 0)
					{
						bVar4 = WEAPON::_0x9EEFD670F10656D7(iVar2, iVar1);
						if (!Global_26688)
						{
							if (func_236(bVar4) && bVar4 != bVar0)
							{
								bVar0 = bVar4;
							}
						}
						else if (bVar4 == bVar0)
						{
						}
					}
				}
			}
			break;
	}
	if (func_21() == -1 && !func_1271(bVar0))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(iParam0, bVar0, 0, false) && iParam0 != Global_33)
		{
			bVar22 = true;
		}
		else if (((bVar4 == bVar0 && !Global_26688) && iParam0 != Global_33) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
		{
			bVar22 = true;
		}
		else
		{
			bVar0 = WEAPON::_0xF8204EF17410BF43(bParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
		}
	}
	if (bVar0 == -3.273909E-18f && bParam1 == -3.273909E-18f)
	{
		return bVar0;
	}
	else if (bVar0 == -3.273909E-18f)
	{
		switch (bParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = 2.574461E-25f;
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_1271(-1.91869E+32f))
				{
					bVar0 = -1.91869E+32f;
				}
				else
				{
					bVar0 = 2.574461E-25f;
				}
				break;
			default:
				bVar0 = 2.574461E-25f;
				break;
		}
	}
	else if (bVar0 == -8.909135E+32f && iParam0 == Global_33)
	{
		bVar0 = 3569984f;
	}
	if (iParam9 < 0)
	{
		if (iParam0 != Global_33 && func_236(bVar0))
		{
			WEAPON::GET_MAX_AMMO(iParam0, &iParam9, bVar0);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else if ((!WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0) && bVar0 != -3.273909E-18f) && !WEAPON::_IS_WEAPON_LANTERN(bVar0))
		{
			iVar23 = WEAPON::GET_PED_AMMO_BY_TYPE(iParam0, WEAPON::GET_PED_AMMO_TYPE_FROM_WEAPON(iParam0, bVar0));
			iVar24 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 3;
			iParam9 = (iVar24 - iVar23);
			if (iParam9 < 0)
			{
				iParam9 = 0;
			}
		}
		else
		{
			iParam9 = 0;
		}
	}
	if (bParam6 && bParam2)
	{
		bParam5 = false;
	}
	if (iParam0 == Global_33)
	{
		func_1272(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 6.028273E-12f, 0);
	}
	else if (bParam13)
	{
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_1273(iParam0, &bVar0, &fVar25);
		if (bVar0 == -4.550719E+16f || bVar0 == 1.654772E-14f)
		{
			fVar25 = 0f;
		}
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1f, 6.028273E-12f, bVar22, fVar25, false);
	}
	if (iParam0 != Global_33)
	{
		if (func_1274(bVar0))
		{
			WEAPON::SET_PED_INFINITE_AMMO(iParam0, bParam3, bVar0);
		}
	}
	else if (bParam10)
	{
		PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), bVar0, bParam4);
	}
	return bVar0;
}

bool func_1073(struct<5> Param0, float fParam5, bool bParam6)
{
	var uVar0;

	if (func_176(Param0, fParam5, &uVar0, 0))
	{
		*bParam6 = uVar0;
		return true;
	}
	return false;
}

bool func_1074(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_1075(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_16[iParam0 /*12*/]))
	{
		return 0;
	}
	iVar0 = NETWORK::NET_TO_PED(uParam1->f_16[iParam0 /*12*/]);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
	{
		return 0;
	}
	return 1;
}

void func_1076(int iParam0, var uParam1, int iParam2)
{
	if (func_560(iParam0, uParam1) == iParam2)
	{
		return;
	}
	uParam1->f_16[iParam0 /*12*/].f_2 = iParam2;
	uParam1->f_16[iParam0 /*12*/].f_3 = 0;
}

char* func_1077()
{
	return "script@mp@common@handovers@recieve_bag_holdup";
}

int func_1078()
{
	return 64;
}

void func_1079(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	if (!func_893(iParam0, uParam1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	if (func_582(iVar0) && func_719(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (VEHICLE::_IS_VEHICLE_ON_FIRE(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_437(iParam0, &iVar1, 1, 0) && !PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_719(iVar0) && func_903(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_3 != 1)
	{
		return;
	}
	if (func_737(Local_16.f_16[iParam0 /*12*/].f_11, 1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if ((func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1.020647E+37f, 3) || func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1.020647E+37f, 2)) || func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 2.418248E-09f, 12))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
}

void func_1080(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_702(iParam0, uParam1);
	iVar1 = func_877(iParam0, uParam1);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1076(iParam0, uParam1, -7.042045E+27f);
		return;
	}
	if (!func_893(iParam0, uParam1))
	{
		return;
	}
	iVar2 = func_894(iParam0, uParam1);
	if ((PED::IS_PED_IN_VEHICLE(iVar0, iVar2, false) && iVar1 != 35) && iVar1 != 0)
	{
		func_1076(iParam0, uParam1, -1.235031E+20f);
		return;
	}
}

void func_1081(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	if (!func_893(iParam0, uParam1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	if ((!func_719(iVar0) && func_877(iParam0, uParam1) == 14) && func_523(iVar0, func_702(iParam0, uParam1), 1, 1) > 1101004800)
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_903(iVar0) && !func_1089(uParam1->f_16[iParam0 /*12*/].f_11))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (!func_719(iVar0))
	{
		return;
	}
	if (func_582(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if ((!func_582(iVar0) && !func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 1.020647E+37f, -1)) && !func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 2.418248E-09f, -1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
}

void func_1082(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_702(iParam0, uParam1);
	if (!PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
}

void func_1083(int iParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_702(iParam0, uParam1);
	if (!func_893(iParam0, uParam1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	iVar0 = func_894(iParam0, uParam1);
	if (!PED::IS_PED_IN_VEHICLE(iVar1, iVar0, true))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (VEHICLE::_IS_VEHICLE_ON_FIRE(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_877(iParam0, uParam1) == 12 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == iVar1)
	{
		func_1076(iParam0, uParam1, 1.020647E+37f);
		return;
	}
	if (func_582(iVar0) && func_719(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_719(iVar0) && func_903(iVar0))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (func_737(Local_16.f_16[iParam0 /*12*/].f_11, 1))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
		return;
	}
	if (uParam1->f_16[iParam0 /*12*/].f_3 != 6)
	{
		return;
	}
	if (func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 2.418248E-09f, 11) || func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 2.418248E-09f, 7))
	{
		func_1076(iParam0, uParam1, -8.051931E+31f);
	}
}

bool func_1084(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_IS_BIT_FLAG_SET(&(Local_363[*uParam1 /*52*/].f_2.f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1085(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = uParam1->f_16[iParam0 /*12*/].f_11;
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam1->f_3[iVar0 /*4*/]))
	{
		return false;
	}
	iVar1 = NETWORK::NET_TO_VEH(uParam1->f_3[iVar0 /*4*/]);
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (func_552(iVar1, uParam2->f_10.f_2, 1) > 1101004800)
	{
		return false;
	}
	return true;
}

bool func_1086(int iParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	float fVar5;
	int iVar6;

	vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	*iParam1 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (Local_363[iVar1 /*52*/].f_47 == 0)
		{
		}
		else if (!func_123(iVar1, 1, 1))
		{
		}
		else
		{
			iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
			fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar2, func_941(iVar6), true);
			if (fVar5 > fParam3)
			{
			}
			else if (Local_363[iVar1 /*52*/].f_47 < iVar0)
			{
			}
			else
			{
				iVar0 = Local_363[iVar1 /*52*/].f_47;
				*iParam1 = iVar6;
				*iParam2 = iVar0;
			}
		}
		iVar1++;
	}
	if (*iParam1 == 255)
	{
		return false;
	}
	return true;
}

bool func_1087(int iParam0, int iParam1, var uParam2, float fParam3, int iParam4)
{
	int iVar0;

	if (!func_1275(iParam0, PLAYER::GET_PLAYER_PED(iParam1), fParam3))
	{
		*uParam2 = -1;
		return false;
	}
	if (*uParam2 == -1)
	{
		*uParam2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return false;
	}
	iVar0 = NETWORK::GET_TIME_DIFFERENCE(*uParam2, NETWORK::GET_NETWORK_TIME_ACCURATE());
	if (iVar0 > iParam4)
	{
		return true;
	}
	return false;
}

bool func_1088(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (bParam2 && func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, 2.418248E-09f, 6))
	{
		return true;
	}
	if (bParam3 && func_1095(uParam1->f_16[iParam0 /*12*/].f_11, uParam1, -1.235031E+20f, 14))
	{
		return true;
	}
	return false;
}

bool func_1089(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iParam0 != -1 && Local_16.f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (!func_1276(Local_16.f_16[iVar0 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1090(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (func_397(iParam0, 1))
	{
		return false;
	}
	iVar0 = NETWORK::NET_TO_PED(Local_16.f_16[iParam0 /*12*/]);
	if (!func_893(iParam0, &Local_16))
	{
		return false;
	}
	iVar1 = func_894(iParam0, &Local_16);
	if (func_523(iVar0, iVar1, 1, 1) > fParam1)
	{
		return false;
	}
	return true;
}

bool func_1091(int iParam0, bool bParam1, vector3 vParam2, float fParam5)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41(iParam0[iVar0 /*52*/], 32))
		{
		}
		else if (!func_123(iVar0, 1, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_941(iVar1), vParam2, true) > fParam5)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1092(int iParam0, float fParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (Local_16.f_16[iVar4 /*12*/].f_2 == 0 || Local_16.f_16[iVar4 /*12*/].f_2 == -0.6089872f)
		{
		}
		else if (Local_16.f_16[iVar4 /*12*/].f_2 != 1.556252E-24f && !func_1103(Local_16.f_16[iVar4 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(Local_16.f_16[iVar4 /*12*/]);
			if (iVar3 == iParam0)
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > fParam1)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	if (iParam2 && func_1277(vVar0, fParam1))
	{
		return true;
	}
	return false;
}

bool func_1093(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_2 != 13.22463f)
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_7 != iParam2)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1094(int iParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_123(iVar0, 0, 1) || !func_41(iParam1[iVar0 /*52*/], 2))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_552(iParam0, func_941(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1095(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam1->f_16[iVar0 /*12*/].f_11 != iParam0)
		{
		}
		else if (uParam1->f_16[iVar0 /*12*/].f_2 != iParam2)
		{
		}
		else if (iParam3 != -1 && uParam1->f_16[iVar0 /*12*/].f_3 != iParam3)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1096(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (uParam0->f_16[iVar0 /*12*/].f_2 != iParam1)
		{
		}
		else if (uParam0->f_16[iVar0 /*12*/].f_3 != iParam2)
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar0 /*12*/]))
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1097(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_41(uParam1[iVar0 /*52*/], 32) && !func_41(uParam1[iVar0 /*52*/], 64))
		{
		}
		else if (!func_123(iVar0, 0, 1))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
			if (func_552(iParam0, func_941(iVar1), 1) > fParam2)
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1098(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = 0;
	while (*uParam1 < 32)
	{
		if (!MISC::_IS_BIT_FLAG_SET(&(Local_363[*uParam1 /*52*/].f_2.f_8), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*uParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*uParam1++;
	}
	return false;
}

bool func_1099(int iParam0, int iParam1)
{
	int iVar0;

	*iParam1 = 0;
	while (*iParam1 < 32)
	{
		if (!MISC::_IS_BIT_FLAG_SET(&(Local_363[*iParam1 /*52*/].f_2), iParam0))
		{
		}
		else
		{
			iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(*iParam1);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0)))
			{
			}
			else
			{
				return true;
			}
		}
		*iParam1++;
	}
	return false;
}

int func_1100()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 20000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, -2.679618E-09f, &iVar6, 0))
	{
		return iVar0;
	}
	return iVar6;
}

int func_1101()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 45000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, 5300047f, &iVar6, 0))
	{
		return iVar0;
	}
	return iVar6;
}

int func_1102()
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 65000;
	if (!func_448(&Var1))
	{
		return iVar0;
	}
	if (!func_299(Var1, 1.145865E-17f, &iVar6, 0))
	{
		return iVar0;
	}
	return iVar6;
}

bool func_1103(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STATIONARY_ESCORT"):
		case joaat("PASSENGER_ESCORT"):
		case joaat("MOUNTED_ESCORT"):
		case joaat("ESCORT"):
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1104(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ON_PRIMARY_FINAL_DROPOFF"):
			return true;
		case joaat("ON_SECONDARY_FINAL_DROPOFF"):
			return false;
		default:
			break;
	}
	return true;
}

var func_1105(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 22, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 23, iParam1, 0, bParam2))
	{
		return 0;
	}
	return func_1278(Var0, 53, 1);
}

int func_1106(int iParam0)
{
	var uVar0;

	if (!func_1107(&uVar0))
	{
		return -1;
	}
	if (!func_1108(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar0, 7, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar0, 9, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar0, 10, iParam0, 0, 1))
	{
		return -1;
	}
	return func_1279(&uVar0, 1);
}

bool func_1107(bool bParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = Global_1072759.f_28418[31 /*4*/].f_3;
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar5))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar5))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	*bParam0 = iVar5;
	return true;
}

bool func_1108(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	uVar0 = bParam0->f_1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_1109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.753214E+27f;
		case 1:
			return -5.320678E-10f;
		case 2:
			return 5.234738E-28f;
		case 3:
			return 1.14228E+13f;
		case 4:
			return -2.315855E+13f;
		default:
			break;
	}
	return 0;
}

int func_1110(bool bParam0, int iParam1)
{
	return func_1280(bParam0, 50, iParam1);
}

int func_1111(bool bParam0, int iParam1)
{
	return func_1280(bParam0, 53, iParam1);
}

void func_1112(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1281(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2012 < 20)
	{
		Global_1292096.f_2012++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2012.f_1[iVar0 /*24*/] = { Global_1292096.f_2012.f_1[iVar0 + 1 /*24*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_1 = 11;
	Var1.f_7.f_16 = 255;
	Var1 = { *uParam0 };
	Var1.f_4 = bParam1;
	Var1.f_7 = { Param2 };
	Var1.f_6 = 1;
	Global_1292096.f_2012.f_1[(Global_1292096.f_2012 - 1) /*24*/] = { Var1 };
}

bool func_1113(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1114(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1114878[iParam0 /*70*/].f_7.f_4, iParam1);
}

bool func_1115(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (Global_1297553[iVar0 /*87*/].f_1 == -1)
	{
		return false;
	}
	*uParam1 = Global_1297553[iVar0 /*87*/].f_1;
	*iParam2 = Global_1297553[iVar0 /*87*/].f_3;
	return true;
}

int func_1116(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/];
}

int func_1117(int iParam0)
{
	return Global_1114878[iParam0 /*70*/];
}

bool func_1118(int iParam0)
{
	switch (iParam0)
	{
		case -570188536:
		case 82232150:
		case 1456739059:
			return true;
		default:
			break;
	}
	return false;
}

int func_1119(int iParam0)
{
	return Global_1110244.f_150.f_84[iParam0 /*4*/];
}

int func_1120(int iParam0)
{
	return Global_1120482[iParam0 /*4533*/].f_2435;
}

void func_1121(int iParam0)
{
	if (!func_1282(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
	}
}

void func_1122(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_1283(&(Global_1149417.f_3876.f_2[func_507(iParam0, 1) /*4*/]));
}

bool func_1123(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 104);
}

var func_1124(int iParam0)
{
	return Global_1296597[iParam0 /*5*/].f_1;
}

void func_1125(struct<2> Param0, int iParam2)
{
	func_818(Param0, iParam2);
}

void func_1126(struct<2> Param0, int iParam2)
{
	func_818(Param0, iParam2);
}

void func_1127(var uParam0, int iParam1)
{
	func_1284(uParam0, iParam1);
}

int func_1128(var uParam0, var uParam1)
{
	var uVar0;

	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
	{
		return 0;
	}
	return uVar0;
}

int func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2.097883E-16f;
		case 2:
			return -2.718455E-10f;
		case 3:
			return -3.637621E+12f;
		case 4:
			return 3.077226E+22f;
		case 5:
			return -11903.19f;
		case 6:
			return 1.334234E-15f;
		case 7:
			return 1.464907E-27f;
		case 8:
			return 3.545345E+37f;
		case 9:
			return 4.410467E+27f;
		default:
			break;
	}
	return 0;
}

int func_1130(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -4.386831E+18f;
				case 1:
					return -7.890581E+31f;
				case 2:
					return -1.082204E-20f;
				case 3:
					return -1.844202E+19f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -9.193918E+26f;
				case 1:
					return 1.652573E+07f;
				case 2:
					return -4.584958E-10f;
				case 3:
					return -1.308009E+30f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1.522398E-23f;
				case 1:
					return 6.000514E+18f;
				case 2:
					return 6.5686E+09f;
				case 3:
					return -1.29502E+29f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 2.903373E-11f;
				case 1:
					return -1.255973E+22f;
				case 2:
					return -3.492436E+24f;
				case 3:
					return -4.323653E-06f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1.590671E-35f;
				case 1:
					return -0.005893386f;
				case 2:
					return 8.095878E-36f;
				case 3:
					return 5.308375E-24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -6.491092E+22f;
				case 1:
					return -3.39337E-34f;
				case 2:
					return -2.827399E+13f;
				case 3:
					return 2.786047E+38f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -0.003760975f;
				case 1:
					return 2.548126E-24f;
				case 2:
					return -1.797413E+11f;
				case 3:
					return -1.161223E+24f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1.154749E-17f;
				case 1:
					return 3.23344E-24f;
				case 2:
					return -5.209391E+29f;
				case 3:
					return 3.148779E+16f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1.741973E+17f;
				case 1:
					return 1.418071E+25f;
				case 2:
					return -2.259112E-30f;
				case 3:
					return 8.278385E-06f;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_1131(var uParam0, int iParam1, bool bParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_BOOL(&uParam0, bParam2, true))
	{
		return;
	}
}

bool func_1132(int iParam0)
{
	return iParam0 != 0;
}

void func_1133(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;

	vVar2.f_1 = -1;
	vVar2.f_2 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (!func_1285(iVar0, &vVar2))
		{
			MISC::COPY_SCRIPT_STRUCT(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else if (vVar2.x == 0)
		{
			MISC::COPY_SCRIPT_STRUCT(uParam0[iVar1 /*3*/], &vVar5, 3);
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(uParam0[iVar1 /*3*/], &vVar2, 3);
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_31 = iVar1;
}

int func_1134(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1.974917E+36f;
		case 1:
			return 1.422534E+32f;
		case 2:
			return -1.320612E+13f;
		case 3:
			return 9.903063E+30f;
		default:
			break;
	}
	if (bParam1)
	{
	}
	return 0;
}

bool func_1135(var uParam0, var uParam1)
{
	return (*uParam0 == *uParam1 && uParam0->f_1 == uParam1->f_1);
}

int func_1136(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_813(-2.196094E-18f, func_1286(iParam0)) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return 0;
	}
	return uVar2;
}

void func_1137(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_813(-2.196094E-18f, func_1286(iParam1)) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	if (!STATS::STAT_ID_SET_INT(&Var0, iParam0, true))
	{
		return;
	}
}

int func_1138(var uParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = func_1287(*uParam0);
	if (iVar1 == -1)
	{
		return 0;
	}
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(1, 31));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(iVar1, 20));
	uVar0 = (uVar0 || BUILTIN::SHIFT_LEFT(uParam0->f_1, 10));
	return uVar0;
}

void func_1139(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	Var2.f_1 = -1;
	if (!func_1156(iParam0))
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&Var2, bParam2, 4);
	Var2.f_4 = iParam3;
	iVar1 |= 4;
	switch (iParam1)
	{
		case 1:
			iVar1 |= 1;
			break;
		case 2:
			iVar1 |= 2;
			break;
		default:
			break;
	}
	switch (iParam5)
	{
		case 0:
			iVar1 |= 4;
			break;
		case 1:
			iVar1 |= 2052;
			break;
		default:
			break;
	}
	if (GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) == PLAYER::PLAYER_ID())
	{
		iVar1 |= 16384;
	}
	if (func_1288(iParam0))
	{
		iVar1 |= 65536;
	}
	func_1158(iParam0, iVar1, iParam4, &Var2);
	func_1159(iParam0, iVar1);
	func_1160(iParam0, iVar1, &Var2);
	func_1289(iVar1, &Var2);
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = -0.1579002f;
			break;
		case 2:
			iVar0 = -3.108915E-30f;
			break;
		default:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_1161(iParam0, iVar0, iParam3);
	}
}

void func_1140(int iParam0)
{
	if (func_765(&(Global_1110244.f_251.f_12), iParam0, 4))
	{
	}
}

void func_1141(int iParam0)
{
	if (func_765(&(Global_1140451[PLAYER::PLAYER_ID() /*8*/].f_3), iParam0, 4))
	{
	}
}

void func_1142(int iParam0)
{
	func_1290(iParam0);
}

int func_1143(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_1291())
	{
		return 0;
	}
	if (!func_482())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_1185(&Global_0, 8);
	}
	func_1185(&Global_0, 1);
	return 1;
}

void func_1144(struct<2> Param0, bool bParam2, bool bParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_1292(func_1151(Param0));
	iVar1 = func_23(Param0);
	Var2.f_1 = bParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_21() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_1293(Param0, &Var2, bParam2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam4))
	{
		Var2.f_4 = iParam4;
		Var2.f_3 = iParam5;
	}
	else
	{
		Var2.f_4 = 255;
		Var2.f_3 = 0;
	}
	if (Global_1072759.f_16.f_1)
	{
		Var2.f_6 = 1;
	}
	Var2.f_5 = Global_1072759.f_16.f_2;
	STATS::_STATSTRACKER_DEED_STATUS(iVar0, iVar1, bParam2, &Var2);
}

void func_1145(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_1294(Param0);
	}
	else
	{
		func_1295(Param0, iParam2);
	}
	func_1296();
}

void func_1146(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_1297(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_1298(&Global_1940186, 8388608);
	}
	MISC::ENABLE_DISPATCH_SERVICE(15, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(6, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(1, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(16, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(2, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(3, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(4, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(5, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(7, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(9, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(10, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(11, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(12, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(13, bParam0);
	MISC::ENABLE_DISPATCH_SERVICE(14, bParam0);
}

void func_1147(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_1299(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_1300(cVar2);
			}
			else
			{
				func_1301();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_1148(bool bParam0)
{
	if (!bParam0 && func_1302(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_1149(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_1150(struct<2> Param0)
{
	return func_1304(func_1303(Param0));
}

int func_1151(var uParam0, var uParam1)
{
	return uParam0;
}

struct<2> func_1152()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_1153(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/].f_1;
}

bool func_1154(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_1155(var uParam0, int iParam1)
{
	func_1305(uParam0, iParam1);
}

bool func_1156(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 83);
}

int func_1157(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1306(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_1307(bParam1), iParam0, bParam3);
}

void func_1158(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1308(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1309(iParam0, iVar0, &Var2, uParam3);
		if (Var2.f_2 == 0)
		{
		}
		else if ((Var2.f_3 && iParam1) != Var2.f_3)
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("COOLDOWN_TYPE"):
					break;
				case joaat("COOLDOWN"):
					if (iParam2 == 0)
					{
					}
					else
					{
						func_1310(iParam0, iParam2, uParam3, 0, 0);
						Jump @273; //curOff = 235
						if (Var2.f_4)
						{
							STATS::STAT_ID_SET_BOOL(&Var2, true, true);
						}
						Jump @273; //curOff = 257
						STATS::_STAT_ID_INCREMENT_INT(&Var2, 1);
					}
					iVar0++;
					default:
						break;
			}
		}
	}
}

void func_1159(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1311(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		func_1312(iParam0, iVar0, &Var2);
		if ((Var2.f_4 && iParam1) != Var2.f_4)
		{
		}
		else if (!STATS::CHAL_IS_GOAL_ACTIVE(Var2, Var2.f_1))
		{
		}
		else
		{
			switch (Var2.f_2)
			{
				case joaat("INT"):
					STATS::CHAL_ADD_GOAL_PROGRESS_INT(Var2, Var2.f_1, Var2.f_3);
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1160(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;
	var uVar7;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = func_1313(iParam0);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!func_1314(iParam0, iVar0, uParam2, &Var2))
		{
		}
		else if ((Var2.f_2 && iParam1) != Var2.f_2)
		{
		}
		else if (!Var2.f_4)
		{
		}
		else
		{
			func_1315(Var2.f_1, &uVar7, Var2.f_3 & 1 == 1, 255, 0, 0);
		}
		iVar0++;
	}
}

void func_1161(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	var uVar1;

	if (!func_1316(iParam0, iParam2, iParam1, &iVar0, &uVar1))
	{
		return;
	}
	func_268(iVar0, 0, 0);
}

bool func_1162(int iParam0, int iParam1, int iParam2)
{
	if (!func_1317(iParam0))
	{
		return false;
	}
	if (!func_1318())
	{
		return false;
	}
	if (!func_1319(iParam0, iParam1, iParam2))
	{
		return false;
	}
	if (*iParam1 == 4.822093E-24f && Global_1572887.f_14 != 0)
	{
		return false;
	}
	else if (*iParam1 == -3.622536E+09f && Global_1572887.f_14 != -1)
	{
		return false;
	}
	return true;
}

void func_1163(int iParam0)
{
	Global_1110244.f_268.f_2289 = (Global_1110244.f_268.f_2289 - (Global_1110244.f_268.f_2289 && iParam0));
}

void func_1164(int iParam0)
{
	Global_1110244.f_268.f_3384 = (Global_1110244.f_268.f_3384 || iParam0);
}

bool func_1165(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_1320();
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 5);
	*bParam0 = iVar0;
	return true;
}

bool func_1166(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

int func_1167(struct<5> Param0, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;

	*uParam7 = Param0.f_1;
	*uParam6 = 0;
	if (!func_1166(Param0, &(Param0.f_1), 30, 0, 0, 0))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	iVar1 = func_1321(Param0);
	switch (iVar1)
	{
		case joaat("UNLOCK"):
			iVar0 = uParam5->f_4;
			break;
		case -1503324114:
			iVar0 = *uParam5;
			break;
		case -305921044:
			iVar0 = uParam5->f_2;
			break;
		default:
			break;
	}
	if (!func_1166(Param0, &(Param0.f_1), 31, iVar0, 0, 0))
	{
		*uParam6 = *uParam7;
		return 0;
	}
	*uParam6 = Param0.f_1;
	return 1;
}

bool func_1168(struct<5> Param0, int iParam5, bool bParam6, var uParam7, var uParam8)
{
	var uVar0;
	int iVar2;
	int iVar3;

	MISC::COPY_SCRIPT_STRUCT(bParam6, &uVar0, 2);
	iVar2 = func_1322(Param0);
	if (iVar2 == 0)
	{
		return false;
	}
	iVar3 = func_1323(Param0);
	if (iVar3 == 0)
	{
		return false;
	}
	*bParam6 = { func_813(iVar3, iVar2) };
	if (!STATS::STAT_ID_IS_VALID(bParam6))
	{
		return false;
	}
	*uParam7 = func_1324(Param0, iParam5 == 12648.71f);
	*uParam8 = func_1325(Param0, iParam5 == 12648.71f);
	return true;
}

bool func_1169()
{
	return func_28(Global_1051268);
}

void func_1170(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_1171(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 0);
	if (iVar4 != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_1172()
{
	switch (Global_1940186.f_38)
	{
		case joaat("WEAPON_MELEE_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS"):
		case joaat("WEAPON_MELEE_LANTERN_ELECTRIC"):
		case joaat("WEAPON_MELEE_DAVY_LANTERN"):
		case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1173()
{
	return Global_1051645.f_12;
}

char* func_1174()
{
	return "unnamed";
}

int func_1175(int iParam0)
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

bool func_1176(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_594(36, iParam0);
}

int func_1177(int iParam0)
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

bool func_1178(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_1326(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_1327(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_1179(struct<2> Param0)
{
	return func_959(Param0) == 0;
}

int func_1180(struct<2> Param0)
{
	int iVar0;

	if (Global_1900530 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1900530 - 1))
	{
		if (func_29(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1181(struct<2> Param0, bool bParam2)
{
	if (!func_28(Param0))
	{
		return;
	}
	if (!func_1179(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_1328(Param0);
	}
	func_1145(Param0, 1);
	bParam2 = bParam2;
}

void func_1182(struct<2> Param0)
{
	struct<32> Var0;

	if (func_23(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_23(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_23(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_1187(Param0, &Var0))
		{
			if (Var0.f_29 == -2.476369E+14f)
			{
				STATS::_0xF21A5D66874FCEDD(Var0.f_2, 0, -5.802101E-13f);
			}
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_29, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_30, 0);
			STATS::_0xF21A5D66874FCEDD(Var0.f_2, Var0.f_31, 0);
		}
	}
}

int func_1183(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_1303(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_1329(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_1330(iVar0, iParam2);
	return iParam2;
}

bool func_1184(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_1185(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1186(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return 0;
	}
	iVar0 = func_1303(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_1331(Param0, func_982(0), iParam2))
	{
		func_1145(func_982(0), 3);
		func_1145(func_982(iVar0), 4);
		return 0;
	}
	func_1330(iVar0, 0);
	func_1145(func_982(0), 3);
	func_1145(func_982(1), 4);
	return 1;
}

bool func_1187(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_262(Param0, &vVar0);
	if (func_1332(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_1188(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = false;
	switch (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0))
	{
		case 4:
		case 5:
		case 6:
			*iParam1 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			break;
		case 8:
		case 9:
			*iParam1 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
			{
				*iParam1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			}
			if ((ENTITY::DOES_ENTITY_EXIST(*iParam1) && !PED::IS_PED_HUMAN(*iParam1)) && PED::CAN_PED_BE_MOUNTED(*iParam1))
			{
				bVar2 = true;
			}
			break;
		case 7:
			*iParam1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			bVar2 = true;
			break;
		case 3:
			return false;
	}
	if ((bVar2 && ENTITY::DOES_ENTITY_EXIST(*iParam1)) && !PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		iVar0 = PED::_GET_RIDER_OF_MOUNT(*iParam1, true);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && bParam2)
		{
			iVar1 = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(*iParam1);
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				iVar0 = PLAYER::GET_PLAYER_PED(iVar1);
				if (func_523(*iParam1, iVar0, 1, 1) < 1106247680 && !AITRANSPORT::_IS_PED_ON_TRANSPORT_SEAT(iVar0, false))
				{
					*iParam1 = iVar0;
				}
			}
		}
		else
		{
			*iParam1 = iVar0;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1) || PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	return true;
}

int func_1189(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1171(iParam0, iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	}
	return 0;
}

bool func_1190(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_1333(*uParam0, 0f, 0f, 0f))
	{
		return true;
	}
	iVar1 = 0;
	bVar2 = false;
	bVar3 = false;
	vVar4 = { *uParam0 };
	STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
	while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar2)
	{
		if (iVar1 < iParam2)
		{
			iVar1++;
			vVar4.f_2 = (vVar4.z + IntToFloat(iParam1));
			STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		}
		else
		{
			bVar2 = true;
		}
	}
	if (bParam4)
	{
		vVar4 = { *uParam0 };
	}
	if (bVar2)
	{
		iVar1 = 1;
		vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
		while (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar4, &uVar0, bParam3) && !bVar3)
		{
			if (iVar1 < iParam2)
			{
				iVar1++;
				vVar4.f_2 = (vVar4.z - IntToFloat(iParam1));
				STREAMING::REQUEST_COLLISION_AT_COORD(vVar4);
			}
			else
			{
				bVar3 = true;
			}
		}
	}
	else
	{
		uParam0->f_2 = uVar0;
		return true;
	}
	if (bVar2 && bVar3)
	{
		return false;
	}
	uParam0->f_2 = uVar0;
	return true;
}

int func_1191(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_963(vParam0);
	switch (iVar0)
	{
		case 5:
		case 6:
		case 7:
			switch (iParam3)
			{
				case 0:
					return -3.923918E-35f;
				case 1:
					return -2.544096E+34f;
				default:
					break;
			}
			break;
		case 3:
		case 9:
		case 10:
			switch (iParam3)
			{
				case 0:
					return -7.975966E+12f;
				case 1:
					return -1.407733E-21f;
				default:
					break;
			}
			break;
		case 0:
		case 2:
		case 11:
			switch (iParam3)
			{
				case 0:
					return -1.655034E+27f;
				case 1:
					return 1.821362E-22f;
				default:
					break;
			}
			break;
		case 1:
		case 4:
		case 12:
			switch (iParam3)
			{
				case 0:
					return 1331677f;
				case 1:
					return 3.066484E-34f;
				default:
					break;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			switch (iParam3)
			{
				case 0:
					return joaat("REWARD_FREEROAM_TREASURE_MAP_NEW_AUSTIN");
				case 1:
					return 6.527514E+19f;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_1192(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return false;
	}
	if ((WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38) || 1284.666f == Global_1940186.f_38) && Global_1940186.f_21)
	{
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (ENTITY::IS_ENTITY_A_PED(iVar2) && iParam0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2))
		{
			return false;
		}
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	if (bParam3)
	{
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_523(iVar0, iParam0, 1, 1) <= 4f)
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_1334(iVar0, 0)))
		{
			if (func_1335(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_1193(int iParam0, int iParam1)
{
	return func_523(iParam0, iParam1, 1, 1);
}

float func_1194(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

float func_1195(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			return -2.793302E-13f;
		case 7:
			return 1.296043E+33f;
		case 8:
			return -6.957326E-07f;
		case 9:
			return -2.793302E-13f;
		case 0:
			return -2.793302E-13f;
		default:
			break;
	}
	return 1.296043E+33f;
}

char* func_1196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1.556252E-24f)
			{
				if (Local_16.f_315 > 1)
				{
					iVar0 = 0;
					while (iVar0 < 20)
					{
						if (Local_16.f_16[iVar0 /*12*/].f_2 != 1.556252E-24f)
						{
						}
						else
						{
							iVar1++;
						}
						iVar0++;
					}
					if (iVar1 > 1)
					{
						return "ARRIVAL_COMBAT_NEUTRAL";
					}
				}
				if (func_729())
				{
					return "LAW_TAUNT_GEN_NEUTRAL";
				}
				return "OPENS_FIRE";
			}
			else if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "RT_LET_EM_HAVE_IT";
			}
			return "GENERIC_SHOCKED_HIGH";
		case 1:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "FINAL_WARNING";
			}
			return "GENERIC_FRIGHTENED_HIGH";
		case 2:
			return "SCARED_HELP";
		case 3:
			return "HAND_OVER_MONEY";
		case 4:
			return "GUN_BEG";
		case 5:
			return "PLEAD";
		case 6:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "TIME_TO_GO";
			}
			return "GREET_SHOUTED";
		case 7:
			if (Local_2028.f_10 == -1.398992E+38f)
			{
				return "GREET_PLAYER_CAPTURED_BOUNTY";
			}
			return "GANG_INTERACT_APPROACH_GOODS";
		case 9:
			if (iParam1 == -1.891798E-38f)
			{
				return "DISCOVERED_FAR";
			}
			else if (iParam1 == 2.418248E-09f)
			{
				if (func_1336())
				{
					return "RT_HEADS_UP_NIGHT_ROAD";
				}
				else
				{
					return "RT_HEADS_UP_WARY_ROAD";
				}
			}
			return "GREET_SHOUTED";
		case 8:
			if (Local_2028.f_10 == -1.398992E+38f)
			{
				return "GENERIC_THANKS_SHOUTED";
			}
			return "GANG_INTERACT_GOODS_TO_BOSS";
		case 10:
			return "GUN_AVOID";
		case 11:
			return "LEAVE_NOW";
		default:
			break;
	}
	return "";
}

bool func_1197(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = bParam4;
	Var0.f_6 = iParam7;
	return func_1337(iParam0, &Var0);
}

char* func_1198(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			if (iParam1 == 1.556252E-24f)
			{
				return "TAUNT_GEN_NEUTRAL";
			}
			else if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "OPENS_FIRE";
			}
			return "GENERIC_ANGRY_SHOUT";
		case 1:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "CHALLENGE_THREATEN_ARMED";
			}
			return "INTIMIDATED_GEN";
		case 6:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "GET_LOST";
			}
			return "GREET_GENERAL_STRANGER";
		case 8:
			return "GENERIC_CHEER";
		case 4:
			return "PLEAD";
		case 3:
			return "HAND_OVER_ITEM";
		case 5:
			return "GENERIC_CURSE_HIGH";
		case 2:
		case 10:
			return "PANIC_HELP";
		case 7:
		case 9:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "RT_HEADS_UP_WARY_ROAD";
			}
			return "GREET_GENERAL_FAMILIAR";
		case 11:
			return "DONT_BE_STUPID";
		default:
			break;
	}
	return "";
}

char* func_1199(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 6:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "GET_OUT";
			}
			break;
		case 1:
			return "DONT_WANT_TROUBLE";
		case 8:
			return "GENERIC_THANKS";
		case 3:
			return "SICK_BASTARD";
		case 4:
			return "SICK_BASTARD";
		case 7:
		case 9:
			if (iParam1 == -1.891798E-38f || iParam1 == 2.418248E-09f)
			{
				return "GREET_GENERAL_STRANGER";
			}
			return "GREET_RT_FRIENDLY";
		case 11:
			return "CHALLENGE_THREATEN_ARMED";
		case 10:
			return "GENERIC_FRIGHTENED_HIGH";
	}
	return "";
}

int func_1200(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_ENTITY_FROM_NETWORK_ID(*iParam0);
	if (ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0), false, false))
		{
			return 0;
		}
	}
	else if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		if (PED::IS_PED_INJURED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
		if (PED::IS_PED_RAGDOLL(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	bVar1 = (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(*iParam0) || bParam2);
	if ((iParam1 == -2.905749E-38f || ENTITY::IS_ENTITY_A_VEHICLE(iVar0)) && bVar1)
	{
		return 2;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	iVar3 = TASK::GET_SCRIPT_TASK_STATUS(iVar2, iParam1, true);
	if (iVar3 == 1 || iVar3 == 0)
	{
		return 3;
	}
	if (!bVar1)
	{
		return 1;
	}
	return 2;
}

float func_1201(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	float fVar0;

	fVar0 = -3.273909E-18f;
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return fVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &fVar0, bParam1, iParam2, bParam3))
	{
		return fVar0;
	}
	return fVar0;
}

void func_1202(int iParam0, int iParam1, float fParam2, int iParam3, bool bParam4, int iParam5)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_ON_MOUNT(iParam0) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			TASK::TASK_DRIVE_BY(iParam0, iParam1, 0, 0f, 0f, 0f, fParam2, iParam3, bParam4, iParam5);
		}
		else
		{
			TASK::TASK_COMBAT_PED(iParam0, iParam1, 0, 0);
		}
	}
}

bool func_1203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			iVar0 = 3;
			break;
		case 2:
			iVar0 = 4;
			break;
		case 3:
			iVar0 = 1;
			break;
		case 4:
			iVar0 = 2;
			break;
		default:
			return false;
	}
	iVar1 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam1));
	if (iVar1 < 5)
	{
		return false;
	}
	if (VEHICLE::IS_VEHICLE_SEAT_FREE(iParam1, iVar0))
	{
		return false;
	}
	iVar2 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam1, iVar0);
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return false;
	}
	if (!AITRANSPORT::IS_PED_EXITING_TRANSPORT(iVar2, iParam1) && !func_558(iVar2, 4.897126E+30f))
	{
		return false;
	}
	return true;
}

void func_1204(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	TASK::TASK_START_SCENARIO_AT_POSITION(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

float func_1205()
{
	int iVar0;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
	switch (iVar0)
	{
		case 0:
			return -0.03024206f;
		case 1:
			return 1.315808E+30f;
		case 2:
			return -0.03756203f;
		case 3:
			return -1.104392E+38f;
		case 4:
			return -60.48201f;
		case 5:
			return -3.768898E+29f;
		case 6:
			return 5.935004E+32f;
		case 7:
			return 8.598045E+07f;
		default:
			break;
	}
	return -3.768898E+29f;
}

bool func_1206(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam0))
	{
		case 5:
			iVar0 = PED::_GET_CARRIER_AS_HUMAN(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		case 7:
			iVar1 = PED::_GET_CARRIER_AS_MOUNT(iParam0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return false;
			}
			iVar0 = PED::_GET_RIDER_OF_MOUNT(iVar1, false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				return false;
			}
			if (!PED::IS_PED_A_PLAYER(iVar0))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				return false;
			}
			*iParam1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1207(int iParam0)
{
	int iVar0;

	if (Local_16.f_16[iParam0 /*12*/].f_2 != 1.556252E-24f)
	{
		return false;
	}
	iVar0 = Local_16.f_16[iParam0 /*12*/].f_11;
	if (iVar0 < 0)
	{
		return false;
	}
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			if (iVar0 >= 20)
			{
				return false;
			}
			if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
			{
				return false;
			}
			if (func_201(iVar0, &Local_16, 32))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_16[iVar0 /*12*/]))
			{
				return false;
			}
			break;
		case joaat("COACH_HOLDUP_ROBBERY"):
			if (iVar0 >= 4)
			{
				return false;
			}
			if ((!func_202(iVar0, &Local_16, 128) || func_202(iVar0, &Local_16, 2)) || func_202(iVar0, &Local_16, 16))
			{
				return false;
			}
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_257[iVar0 /*5*/]))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1208(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1072759.f_19487 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_262(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_262(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

bool func_1209(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = ENTITY::IS_ENTITY_A_PED(iParam2);
	iVar0 = 0;
	while (iVar0 <= 11)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_2[iVar0]))
		{
			if (uParam0->f_2[iVar0] == iParam2)
			{
				*uParam3 = iVar0;
				*uParam1 = uParam0->f_2[iVar0];
				return true;
			}
			else if (bVar1 && ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_2[iVar0]))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam2);
				if (PED::GET_PED_CONFIG_FLAG(iVar2, 140, false) && PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar2) == ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_2[iVar0]))
				{
					*uParam3 = iVar0;
					*uParam1 = uParam0->f_2[iVar0];
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1210(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_PED(*iParam0))
	{
		if (iParam0->f_3 || iParam0->f_24)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(*iParam0))
	{
		if (iParam0->f_3)
		{
			return true;
		}
	}
	return false;
}

int func_1211()
{
	return Global_1893611.f_2;
}

bool func_1212(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_1213(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_1338(vParam0);
	iVar1 = -1;
	if (Global_1893594[iVar0] > 0)
	{
		iVar2 = (Global_1893594[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = Global_1892777[iVar0 /*51*/][iVar2];
			if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar4 /*36*/].f_4))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar4 /*36*/].f_4, vParam0))
				{
					switch (Global_1887363[iVar4 /*36*/].f_21)
					{
						case 5:
							if (!bParam3)
							{
								iVar1 = iVar4;
								bVar3 = true;
							}
							break;
						default:
							iVar1 = iVar4;
							bVar3 = true;
							break;
					}
				}
			}
			iVar2 = (iVar2 - 1);
		}
	}
	if (iVar1 != -1)
	{
	}
	return iVar1;
}

int func_1214(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_1215(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_16.f_329[iVar0] == 255)
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_329[iVar0]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_329[iVar0]))
		{
		}
		else
		{
			*uParam0 = Local_16.f_329[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1216(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Local_16.f_329[iVar0] == 255)
		{
		}
		else if (Local_16.f_329[iVar0] != iParam0)
		{
		}
		else
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1217(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, var uParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iParam0, true, false, 256);
	if (iParam1 == 4.194E+28f)
	{
		iVar0 = PED::_GET_LAST_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		iVar1 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)));
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar0, true, false, 256);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, true, false, 256);
		}
		return;
	}
	else if (iParam1 == 2.997277E-34f)
	{
		return;
	}
	if (!NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0) || !NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iParam0))
	{
		return;
	}
	iVar2 = NETWORK::_0xF260AF6F43953316(iParam0);
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar2))
	{
		return;
	}
	iVar3 = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(iVar2);
	if (iVar3 == iParam2 && bParam3)
	{
		NETWORK::PREVENT_NETWORK_ID_MIGRATION(iVar2);
		return;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar3))
	{
		*uParam5 = 1;
	}
	else if (!func_1216(iVar3))
	{
		*uParam5 = 1;
	}
	if (bParam4)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
	}
}

bool func_1218(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PLAYER_HORSE"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_1219(int iParam0, int iParam1, int iParam2, int iParam3, vector3 vParam4, float fParam7)
{
	int iVar0;

	switch (iParam2)
	{
		case joaat("PLAYER_HORSE"):
			if (iParam1 >= 7 || iParam1 < 0)
			{
				return true;
			}
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_329[iParam1]) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_329[iParam1]))
			{
				return true;
			}
			if (Local_16.f_329[iParam1] != PLAYER::PLAYER_ID())
			{
				return false;
			}
			if (Local_2028.f_537.f_1 > 40)
			{
				return true;
			}
			iVar0 = func_1339(vParam4, fParam7, 0, 0, 1, 100, 0, 1);
			if (iVar0 == 0)
			{
				Local_2028.f_537.f_1++;
				return false;
			}
			*iParam3 = func_267(iVar0);
			break;
	}
	return ENTITY::DOES_ENTITY_EXIST(*iParam3);
}

int func_1220(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BEHIND_PLAYER"):
			return 0f;
		case 666862086:
			return 1132920832 /* Float: 270f */;
		case 1213581433:
			return 1119092736 /* Float: 90f */;
		case -1518250965:
			return 1127481344 /* Float: 180f */;
		default:
			break;
	}
	return 1127481344 /* Float: 180f */;
}

void func_1221(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

bool func_1222(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

void func_1223(vector3 vParam0, vector3 vParam3)
{
	char* sVar0;

	sVar0 = func_226();
	CAM::_CINEMATIC_LOCATION_SET_LOCATION_AND_ROTATION(sVar0, vParam0, vParam3);
}

void func_1224(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (bParam3)
	{
		*uParam1 = MAP::BLIP_ADD_FOR_ENTITY(4.085619E-09f, iParam2);
		MAP::BLIP_ADD_MODIFIER(*uParam1, 3.959886E-05f);
		MAP::SET_BLIP_SPRITE(*uParam1, -3.581338E-19f, true);
		return;
	}
	*uParam1 = MAP::BLIP_ADD_FOR_ENTITY(4.085619E-09f, iParam2);
	MAP::BLIP_ADD_MODIFIER(*uParam1, 1.041392E+37f);
	func_272(iParam0, 4096);
	if (bParam4)
	{
		MAP::BLIP_ADD_MODIFIER(*uParam1, -1.186158E+15f);
		func_272(iParam0, 131072);
	}
}

void func_1225(var uParam0, int iParam1)
{
	*uParam0 = MAP::BLIP_ADD_FOR_ENTITY(-4.450028E+35f, iParam1);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, func_1340());
}

void func_1226(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	*uParam1 = MAP::BLIP_ADD_FOR_ENTITY(2.786954E-24f, iParam2);
	MAP::SET_BLIP_SPRITE(*uParam1, -0.1870042f, true);
	MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_1227());
	MAP::BLIP_ADD_MODIFIER(*uParam1, -1.271778E-20f);
	MAP::BLIP_ADD_MODIFIER(*uParam1, 4.185971E-18f);
	MAP::BLIP_ADD_MODIFIER(*uParam1, 1.231009E-30f);
	if (func_227(262144))
	{
		MAP::BLIP_ADD_MODIFIER(*uParam1, 1.231009E-30f);
	}
	if (func_271(iParam0, 9.403955E-38f))
	{
		iVar0 = func_873(iParam0, iParam2, 1);
	}
	if (iVar0 != 0)
	{
		MAP::_SET_BLIP_NAME(*uParam1, HUD::GET_STRING_FROM_HASH_KEY(iVar0));
	}
}

char* func_1227()
{
	switch (func_199(&Local_2028))
	{
		case joaat("COACH_HOLDUP_KIDNAP"):
			return "NET_CHU_BLIP_VIP";
		default:
			break;
	}
	return "NET_CHU_BLIP_PASSENGER";
}

char* func_1228(char* sParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return sParam0;
	}
	return MISC::VAR_STRING(10, "NET_CHU_VAR_PLAYER_ESCORT", sParam0, iParam1);
}

int func_1229(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 2.786954E-24f;
		case 2:
			return -9.431136E-37f;
		case 3:
			return 2.786954E-24f;
		case 4:
			return -9.431136E-37f;
		case 5:
			return 2.786954E-24f;
		default:
			break;
	}
	return 0;
}

char* func_1230()
{
	return "NET_CHU_BLIP_MONEY_BAG";
}

bool func_1231(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

void func_1232(int iParam0, int* iParam1)
{
	int iVar0;
	int iVar1;

	if (MAP::DOES_BLIP_EXIST(*iParam1))
	{
		func_243(iParam1);
	}
	*iParam1 = MAP::_BLIP_ADD_FOR_STYLE(func_1229(iParam0));
	iVar0 = func_1001(iParam0);
	iVar1 = func_1341(iParam0);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_SPRITE(*iParam1, iVar0, false);
	}
	if (iVar1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(*iParam1, iVar1);
	}
}

bool func_1233(var uParam0, var uParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_941(PLAYER::PLAYER_ID()) };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (uParam0->f_16[iVar4 /*12*/].f_2 == 0 || uParam0->f_16[iVar4 /*12*/].f_2 == -0.6089872f)
		{
		}
		else if (!func_1103(uParam0->f_16[iVar4 /*12*/].f_2))
		{
		}
		else if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_16[iVar4 /*12*/]))
		{
		}
		else
		{
			iVar3 = NETWORK::NET_TO_PED(uParam0->f_16[iVar4 /*12*/]);
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vVar0) > 1117782016)
			{
			}
			else
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

bool func_1234(vector3 vParam0, float fParam3, float fParam4)
{
	if (fParam4 + fParam3) < MISC::GET_DISTANCE_BETWEEN_COORDS(vParam0, func_941(PLAYER::GET_PLAYER_INDEX()), true)
	{
		return false;
	}
	return CAM::IS_SPHERE_VISIBLE(vParam0, fParam3);
}

bool func_1235(var uParam0)
{
	int iVar0;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_25[iVar0]))
				{
				}
				else
				{
					*uParam0 = Local_2028.f_202.f_25[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202[iVar0]))
				{
				}
				else
				{
					*uParam0 = Local_2028.f_202[iVar0];
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

float func_1236(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

char* func_1237(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Local_16.f_316;
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar0) && GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return func_1243(iVar0, iParam0);
	}
	iVar2 = 255;
	iVar1 = 0;
	while (iVar1 < 32)
	{
		if (!func_41(&(Local_363[iVar1 /*52*/]), 32))
		{
		}
		else if (!func_123(iVar1, 0, 1))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == 255)
	{
		return "";
	}
	return func_1238(iVar2, iParam0);
}

char* func_1238(int iParam0, int iParam1)
{
	return func_1342(PLAYER::GET_PLAYER_NAME(iParam0), iParam1);
}

int func_1239(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			return 1;
		case joaat("COLLECT"):
			return 4;
		case joaat("DELIVER"):
			return 3;
		case joaat("NONE"):
			return 0;
		case joaat("DEFEND"):
			return 2;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_1240(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_HELP_TEXT(&Var0, &Var13, bParam5);
	return iVar15;
}

void func_1241(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

char* func_1242()
{
	var uVar0;

	switch (func_251())
	{
		case 1:
			if (func_1343(&uVar0))
			{
				return func_690(&uVar0);
			}
			break;
		case 2:
			if (func_1344(&uVar0))
			{
				return func_690(&uVar0);
			}
			break;
	}
	return "NET_CHU_LOC_DEFAULT_DROPOFF";
}

char* func_1243(int iParam0, int iParam1)
{
	return func_1346(func_1345(iParam0, 1, 0), iParam1);
}

int func_1244(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar15;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar15 = UIFEED::_UI_FEED_POST_OBJECTIVE(&Var0, &Var13, bParam5);
	return iVar15;
}

char* func_1245()
{
	return "RDRO_GFH_Sounds";
}

char* func_1246()
{
	return "match_start";
}

int func_1247(char* sParam0, char* sParam1, int iParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = sParam3;
	Var0.f_2 = sParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar20 = UIFEED::_UI_FEED_POST_TWO_TEXT_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar20;
}

int func_1248()
{
	int iVar0;
	int iVar1;

	func_208(&iVar0, &iVar1);
	if (iVar0 == 0)
	{
		return 2;
	}
	if (iVar0 == iVar1)
	{
		return 1;
	}
	return 0;
}

bool func_1249(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	int iVar1;

	*uParam2 = 0;
	*iParam0 = 255;
	*iParam1 = 0;
	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar1 = 0;
			while (iVar1 < 4)
			{
				if (!func_423(iVar1, 0) || func_423(iVar1, 1))
				{
				}
				else if (GANG::NETWORK_IS_GANG_ACTIVE(Local_16.f_257[iVar1 /*5*/].f_4))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != Local_16.f_257[iVar1 /*5*/].f_4) || (!*uParam2 && GANG::NETWORK_GET_GANG_ID(*iParam0) != Local_16.f_257[iVar1 /*5*/].f_4))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = Local_16.f_257[iVar1 /*5*/].f_4;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_257[iVar1 /*5*/].f_3) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_257[iVar1 /*5*/].f_3))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::NETWORK_GET_GANG_ID(Local_16.f_257[iVar1 /*5*/].f_3) != *iParam1) || (!*uParam2 && GANG::NETWORK_IS_IN_SAME_GANG(*iParam0, Local_16.f_257[iVar1 /*5*/].f_3)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = Local_16.f_257[iVar1 /*5*/].f_3;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (!func_423(iVar1, 0) || func_423(iVar1, 1))
				{
				}
				else if (GANG::NETWORK_IS_GANG_ACTIVE(Local_16.f_16[iVar1 /*12*/].f_6))
				{
					if (bVar0)
					{
						if ((*uParam2 && *iParam1 != Local_16.f_16[iVar1 /*12*/].f_6) || (!*uParam2 && GANG::NETWORK_GET_GANG_ID(*iParam0) != Local_16.f_16[iVar1 /*12*/].f_6))
						{
							return false;
						}
					}
					else
					{
						*iParam1 = Local_16.f_16[iVar1 /*12*/].f_6;
						*uParam2 = 1;
						bVar0 = true;
					}
				}
				else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_16[iVar1 /*12*/].f_7) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_16.f_16[iVar1 /*12*/].f_7))
				{
					if (bVar0)
					{
						if ((*uParam2 && GANG::NETWORK_GET_GANG_ID(Local_16.f_16[iVar1 /*12*/].f_7) != *iParam1) || (!*uParam2 && GANG::NETWORK_IS_IN_SAME_GANG(*iParam0, Local_16.f_16[iVar1 /*12*/].f_7)))
						{
							return false;
						}
					}
					else
					{
						*iParam0 = Local_16.f_16[iVar1 /*12*/].f_7;
						*uParam2 = 0;
						bVar0 = true;
					}
				}
				else
				{
					return false;
				}
				iVar1++;
			}
			break;
	}
	if (*uParam2)
	{
		return *iParam1 != 0;
	}
	return *iParam0 != 255;
}

char* func_1250(int iParam0, int iParam1, int iParam2)
{
	if (GANG::NETWORK_IS_GANG_ID_VALID(iParam1) && GANG::NETWORK_IS_GANG_ACTIVE(iParam1))
	{
		return func_1243(iParam1, iParam2);
	}
	return func_1238(iParam0, iParam2);
}

int func_1251(char* sParam0, char* sParam1, char* sParam2, int iParam3, char* sParam4, char* sParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9)
{
	struct<4> Var0;
	struct<4> Var13;
	int iVar20;

	Var0 = -2;
	Var0 = iParam3;
	Var0.f_1 = sParam4;
	Var0.f_2 = sParam5;
	Var0.f_3 = iParam6;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = sParam2;
	iVar20 = UIFEED::_UI_FEED_POST_THREE_TEXT_SHARD(&Var0, &Var13, bParam7, bParam8, bParam9);
	return iVar20;
}

bool func_1252()
{
	return true;
}

bool func_1253()
{
	return (!Global_1902880 && MISC::ABSI((MISC::GET_FRAME_COUNT() - Global_1902880.f_2)) >= 5);
}

void func_1254(bool bParam0, int iParam1)
{
	if (bParam0->f_2 != iParam1)
	{
		bParam0->f_2 = iParam1;
	}
}

bool func_1255()
{
	int iVar0;

	iVar0 = 1;
	if ((((((!AUDIO::PREPARE_SOUND(func_771(), func_772(), -2) || !AUDIO::PREPARE_SOUND(func_773(), func_772(), -2)) || !AUDIO::PREPARE_SOUND(func_774(), func_772(), -2)) || !AUDIO::PREPARE_SOUND(func_1347(), func_772(), -2)) || !AUDIO::PREPARE_SOUND(func_775(), func_772(), -2)) || !AUDIO::PREPARE_SOUND(func_776(), func_777(), -2)) || !AUDIO::PREPARE_SOUND(func_778(), func_779(), -2))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_1256(int iParam0, var uParam1, int iParam2)
{
	switch (func_1348(iParam2))
	{
		case 0:
			func_1349(iParam0, uParam1, iParam2, 0);
			break;
		case 1:
			func_1350(iParam0, uParam1, iParam2, 0);
			break;
		case 2:
			func_1351(iParam0, uParam1, iParam2, -1);
			break;
		case 3:
			func_1352(iParam0, uParam1, iParam2, -1f);
			break;
		case 4:
			func_1353(iParam0, uParam1, iParam2, 0, 0);
			break;
		default:
			break;
	}
}

void func_1257(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0, bParam1);
}

void func_1258(bool bParam0, var uParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	if (iParam4 == 0)
	{
		iParam4 = 4.808429E-35f;
	}
	(*uParam1)[iParam2 /*34*/] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(bParam0->f_5, sParam3);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_4), 21, 0);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_5), 20, 0);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_7), 23, 0);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_8), 22, 0);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_9), 24, 0);
	func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_2), 18, iParam4);
	if (iParam5 == 0)
	{
		func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25);
	}
	else
	{
		func_1349((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_6), 25, iParam5);
	}
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_1), 17);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_3), 19);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_10), 26);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_11), 27);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_20), 16);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_21), 14);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_22), 15);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_12), 29);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_13), 28);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_14), 30);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_15), 31);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_16), 32);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_17), 33);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_18), 34);
	func_1256((*uParam1)[iParam2 /*34*/], &((uParam1[iParam2 /*34*/])->f_19), 35);
}

void func_1259(bool bParam0, int iParam1)
{
	if (bParam0->f_1 != iParam1)
	{
		bParam0->f_1 = iParam1;
	}
}

char* func_1260(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1148846080);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_754((iVar5 / 60), 0, 180);
	iVar7 = func_754((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_GET_TEXT_SUBSTRING_2(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

void func_1261(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0, sParam1);
}

void func_1262(bool bParam0, int iParam1, char* sParam2)
{
	if (iParam1 <= 10000)
	{
		if ((bParam0->f_13 > iParam1 && bParam0->f_13 > 10000) && bParam0->f_11 < 0)
		{
			bParam0->f_11 = AUDIO::GET_SOUND_ID();
			if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2) || MISC::ARE_STRINGS_EQUAL(sParam2, func_774()))
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, func_774(), func_772(), true);
			}
			else
			{
				AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_11, sParam2, func_772(), true);
				AUDIO::_SET_VARIABLE_ON_SOUND_WITH_NAME("Time", 10f, sParam2, func_772());
			}
		}
	}
	else
	{
		func_455(bParam0);
	}
}

void func_1263(bool bParam0, int iParam1)
{
	if (iParam1 <= 0 && bParam0->f_12 < 0)
	{
		bParam0->f_12 = AUDIO::GET_SOUND_ID();
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(bParam0->f_12, func_1347(), func_772(), true);
	}
}

void func_1264(int iParam0, float fParam1, var uParam2, float fParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	switch (iParam0)
	{
		case joaat("ATTACK"):
			*fParam1 = func_1354();
			*uParam2 = func_1354();
			*fParam3 = func_1354();
			*uParam4 = func_1354();
			*uParam5 = func_1355();
			*uParam6 = func_1354();
			*uParam7 = func_1354();
			break;
		case joaat("DELIVER"):
			*fParam1 = func_1356();
			*uParam2 = func_1356();
			*fParam3 = func_1354();
			*uParam4 = func_1355();
			*uParam5 = func_1355();
			*uParam6 = func_1354();
			*uParam7 = func_1354();
			break;
		case joaat("DEFEND"):
			*fParam1 = func_1355();
			*uParam2 = func_1356();
			*fParam3 = func_1354();
			*uParam4 = func_1355();
			*uParam5 = func_1355();
			*uParam6 = func_1354();
			*uParam7 = func_1354();
			break;
		case joaat("COLLECT"):
			*fParam1 = func_1354();
			*uParam2 = func_1354();
			*fParam3 = func_1355();
			*uParam4 = func_1354();
			*uParam5 = func_1355();
			*uParam6 = func_1354();
			*uParam7 = func_1354();
			break;
	}
}

void func_1265(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4, float fParam5, float fParam6, float fParam7, float fParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	float fVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	char* sVar7;
	char* sVar8;
	int iVar9;
	float fVar10;
	char[] cVar11[8];

	bVar3 = true;
	bVar4 = true;
	iVar5 = (uParam0[iParam1 /*34*/])->f_25;
	iVar6 = (uParam0[iParam1 /*34*/])->f_26;
	iVar9 = (uParam0[iParam1 /*34*/])->f_23;
	if (bParam10)
	{
		iVar9 = 0;
	}
	switch (iVar9)
	{
		case -1:
		case 0:
			bVar3 = false;
			break;
		case 5:
			fVar0 = fParam5;
			fVar2 = fParam5;
			break;
		case 6:
			fVar0 = fParam7;
			fVar2 = fParam7;
			break;
		case 7:
			bVar4 = false;
			fVar0 = func_1356();
			fVar2 = fParam6;
			iVar1 = fParam6;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 8:
			bVar4 = false;
			fVar0 = func_1356();
			fVar2 = fParam8;
			iVar1 = fParam8;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_TICK";
			break;
		case 2:
			bVar4 = false;
			fVar0 = func_1356();
			fVar2 = func_1356();
			iVar1 = iParam3;
			sVar7 = "scoretimer_textures";
			sVar8 = "SCORETIMER_GENERIC_CROSS";
			break;
		case 3:
			bVar4 = false;
			fVar0 = fParam2;
			fVar2 = fParam2;
			break;
		case 9:
			fVar0 = func_1354();
			fVar2 = func_1354();
			break;
		case 4:
			fVar0 = fParam4;
			break;
		default:
			fVar0 = fParam2;
			fVar2 = fParam2;
			break;
	}
	func_1257((uParam0[iParam1 /*34*/])->f_21, bVar3);
	if (bVar3)
	{
		func_1357(uParam0, iParam1);
		func_1257((uParam0[iParam1 /*34*/])->f_11, bVar4);
		fVar10 = (uParam0[iParam1 /*34*/])->f_29;
		if ((uParam0[iParam1 /*34*/])->f_28 > 1)
		{
			fVar10 = (BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_27) / BUILTIN::TO_FLOAT((uParam0[iParam1 /*34*/])->f_28));
			if (bParam11 && !func_1358((uParam0[iParam1 /*34*/])->f_23))
			{
				iVar5 = 0;
				iVar6 = 0;
				StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_27, 8);
				if (bParam12)
				{
					StringConCat(&cVar11, "/", 8);
					StringIntConCat(&cVar11, (uParam0[iParam1 /*34*/])->f_28, 8);
				}
			}
			func_1261((uParam0[iParam1 /*34*/])->f_20, &cVar11);
		}
		else
		{
			func_1261((uParam0[iParam1 /*34*/])->f_20, "");
		}
		if (fVar10 >= 0f)
		{
			if (!bParam9)
			{
				func_1359((uParam0[iParam1 /*34*/])->f_2, fVar2);
			}
			func_1360((uParam0[iParam1 /*34*/])->f_1, fVar10);
			func_1257((uParam0[iParam1 /*34*/])->f_10, 0);
			func_1257((uParam0[iParam1 /*34*/])->f_3, 1);
		}
		else
		{
			func_1257((uParam0[iParam1 /*34*/])->f_10, 1);
			func_1257((uParam0[iParam1 /*34*/])->f_3, 0);
		}
		if (iVar6 != 0)
		{
			if (!bParam13)
			{
				func_1359((uParam0[iParam1 /*34*/])->f_6, fVar0);
			}
			func_1359((uParam0[iParam1 /*34*/])->f_4, iVar5);
			func_1359((uParam0[iParam1 /*34*/])->f_5, iVar6);
		}
		if (!MISC::IS_STRING_NULL(sVar8))
		{
			func_1359((uParam0[iParam1 /*34*/])->f_14, iVar1);
			func_1261((uParam0[iParam1 /*34*/])->f_12, sVar7);
			func_1261((uParam0[iParam1 /*34*/])->f_13, sVar8);
			func_1257((uParam0[iParam1 /*34*/])->f_15, 1);
		}
		else
		{
			func_1257((uParam0[iParam1 /*34*/])->f_15, 0);
		}
		func_1257((uParam0[iParam1 /*34*/])->f_16, (uParam0[iParam1 /*34*/])->f_30);
	}
}

void func_1266(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, 1.33579E-24f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -0.001280966f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, 9.237034E-36f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -1.672516E+16f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -1.108564E+29f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -6.346746E-39f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, 3.569289E-26f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.935942E+11f, 0, false);
}

void func_1267(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (iParam1 == -1.962688E+25f || iParam1 == 4.244878E-26f)
	{
		return;
	}
	iVar0 = iParam1;
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, func_21() == 0, false);
}

void func_1268(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1f);
	}
}

int func_1269(struct<2> Param0, var uParam2, var uParam3, var uParam4)
{
	int iVar0;

	iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Param0, Param0.f_1);
	return iVar0;
}

float func_1270()
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
	{
		case 0:
			return 2.574461E-25f;
		case 1:
			return -1.91869E+32f;
		default:
			break;
	}
	return 2.574461E-25f;
}

bool func_1271(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		return true;
	}
	return false;
}

int func_1272(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_1361(bParam0, 0, 1) };
		if (func_1362(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_1363(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_1364(bParam0, Var0, Var0.f_4, 0) };
				func_1365(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_1366(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return 0;
		}
		func_1367(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_1368(bParam0, iParam1);
		return 1;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return 0;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return 1;
}

void func_1273(int iParam0, bool bParam1, float fParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = true;
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	switch (iVar1)
	{
		case joaat("G_M_M_UNIDUSTER_03"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_03"):
		case joaat("G_M_M_UNIDUSTER_04"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_02"):
		case joaat("G_M_M_UNIDUSTER_02"):
		case joaat("U_M_M_FATDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERHENCHMAN_01"):
		case joaat("G_M_M_UNIDUSTER_01"):
		case joaat("CS_DISGUISEDDUSTER_01"):
		case joaat("G_F_M_UNIDUSTER_01"):
		case joaat("U_M_M_UNIDUSTERLEADER_01"):
		case joaat("CS_DISGUISEDDUSTER_03"):
		case joaat("G_M_M_UNIDUSTER_05"):
		case joaat("CS_DISGUISEDDUSTER_02"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("G_M_Y_UNIEXCONFEDS_02"):
		case joaat("G_M_Y_UNIEXCONFEDS_01"):
		case joaat("G_M_O_UNIEXCONFEDS_01"):
		case joaat("CS_EXCONFEDSLEADER_01"):
		case joaat("U_M_M_UNIEXCONFEDSBOUNTY_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.375f);
			break;
		case joaat("G_M_M_UNIINBRED_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.7f, 0.875f);
			break;
		case joaat("U_M_M_BHT_SKINNERSEARCH"):
		case joaat("G_M_M_UNIMOUNTAINMEN_01"):
		case joaat("U_M_M_BHT_SKINNERBROTHER"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.4f, 0.6f);
			break;
		case joaat("G_M_M_UNIRANCHERS_01"):
		case joaat("CS_LARAMIE"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.25f);
			break;
		case joaat("U_M_M_BHT_BANDITOSHACK"):
		case joaat("U_M_M_BHT_BANDITOMINE"):
		case joaat("G_M_M_UNIBANDITOS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.5f);
			break;
		case joaat("U_M_M_NBXBRONTEGOON_01"):
		case joaat("U_M_M_NBXBRONTESECFORM_01"):
		case joaat("U_M_M_NBXBRONTEASC_01"):
		case joaat("G_M_M_UNIBRONTEGOONS_01"):
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.125f, 0.125f);
			break;
		default:
			*fParam2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0.3f, 0.4f);
			if (PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
			{
				bVar0 = false;
			}
			break;
	}
	if (bVar0)
	{
		PED::SET_PED_CONFIG_FLAG(iParam0, 361, true);
	}
}

bool func_1274(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

bool func_1275(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;
	float fVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || PED::IS_PED_DEAD_OR_DYING(iParam0, true))
	{
		return false;
	}
	if (!ENTITY::GET_ENTITY_SPEED(iParam0) < 1056964608)
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false), true);
	if (fVar3 > fParam2)
	{
		return false;
	}
	return true;
}

bool func_1276(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SHOTGUN_RIDER"):
		case joaat("DRIVER"):
			return true;
		default:
			break;
	}
	return false;
}

int func_1277(vector3 vParam0, float fParam3)
{
	int iVar0;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	if (ITEMSET::IS_ITEMSET_VALID(iVar0))
	{
		LAW::_0x0C392DB374655176(vParam0, fParam3, iVar0);
		if (ITEMSET::GET_ITEMSET_SIZE(iVar0) > 0)
		{
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return 1;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return 0;
}

var func_1278(vector3 vParam0, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1279(bool bParam0, int iParam1)
{
	return func_1369(func_1280(bParam0, 40, iParam1));
}

int func_1280(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

bool func_1281(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_1282(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

void func_1283(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

void func_1284(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_1285(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1136(iParam0);
	if (!func_1370(iVar0))
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	iVar1 = BUILTIN::SHIFT_RIGHT(iVar0, 20) & 1023;
	*uParam1 = func_1371(0, iVar1);
	uParam1->f_2 = BUILTIN::SHIFT_RIGHT(iVar0, 10) & 1023;
	if (*uParam1 == 0)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	if (uParam1->f_2 < 0 || uParam1->f_2 >= 512)
	{
		*uParam1 = 0;
		uParam1->f_2 = -1;
		return true;
	}
	return true;
}

int func_1286(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5.03653E+36f;
		case 1:
			return 4.040398E-05f;
		case 2:
			return 9.874542E-14f;
		case 3:
			return -354.1133f;
		case 4:
			return 4.666587E-08f;
		case 5:
			return -7.284814E+17f;
		case 6:
			return -1.519535E+09f;
		case 7:
			return -7.390572E-34f;
		case 8:
			return -4.714596E+36f;
		case 9:
			return -2.503575E-16f;
		default:
			break;
	}
	return 0;
}

int func_1287(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar7;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar7 = func_1106(iParam0);
	if (iVar7 == -1)
	{
		return 0;
	}
	if (!func_1107(&uVar2))
	{
		return -1;
	}
	if (!func_1108(&uVar2, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar2, 6, 0, 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar2, 8, func_1109(iVar7), 0, 1))
	{
		return -1;
	}
	if (!func_1108(&uVar2, 9, 0, 0, 1))
	{
		return -1;
	}
	iVar0 = func_1372(&uVar2, 0);
	if (!func_1108(&uVar2, 10, iParam0, 0, 1))
	{
		return -1;
	}
	iVar1 = func_1373(&uVar2);
	return ((iVar0 - iVar1) - 1);
}

bool func_1288(int iParam0)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		return false;
	}
	if (!func_1165(&Var0))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	return func_1166(Var0, &(Var0.f_1), 48, 0, 0, 0);
}

void func_1289(int iParam0, var uParam1)
{
	func_1374(iParam0, uParam1);
}

void func_1290(int iParam0)
{
	Global_1110244.f_268.f_2289 = (Global_1110244.f_268.f_2289 || iParam0);
}

bool func_1291()
{
	return !Global_1572887.f_10;
}

int func_1292(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.517571E-22f;
		case 3:
			return 8.881306E+07f;
		case 4:
			return -3.626336E+26f;
		case 5:
			return 488.7555f;
		case 8:
			return 3.590393E-16f;
		case 7:
			return -1.702224E-36f;
		case 6:
			return -3.570683E+33f;
		default:
			break;
	}
	return 0;
}

void func_1293(struct<2> Param0, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	iVar2 = -1;
	iVar3 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iVar3 == 0)
	{
		return;
	}
	switch (func_1151(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_1376(func_1375(Param0));
			if ((iVar4 == -1 && bParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_1377(iVar5) == func_1375(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_1378(iVar4);
			if (!func_1379(iVar6, 0))
			{
				return;
			}
			break;
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1107816.f_33[iVar1 /*16*/] == iVar3)
		{
			iVar2 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	if (iVar2 == -1)
	{
		return;
	}
	iVar0 = Global_1107816.f_33[iVar2 /*16*/].f_3.f_1;
	if (iVar0 == -1)
	{
		return;
	}
	bParam2->f_2 = Global_1114878[iVar0 /*70*/];
}

int func_1294(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_1208(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1380(iVar0);
}

int func_1295(struct<2> Param0, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	int iVar9;

	if (Global_1072759.f_19487 >= 32)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_262(Param0, &vVar0))
	{
		return -1;
	}
	vVar6 = -1;
	vVar6.f_1 = -1;
	vVar6 = { Param0 };
	vVar6.f_2 = iParam2;
	if (Global_1072759.f_19487 == 0)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		return 0;
	}
	iVar9 = 0;
	while (iVar9 < Global_1072759.f_19487)
	{
		func_262(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
		if (vVar0.x == vVar3.x)
		{
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
		else if (vVar0.x > vVar3.x)
		{
			iVar9++;
		}
		else if (vVar0.x < vVar3.x)
		{
			func_1381(iVar9);
			Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
			return iVar9;
		}
	}
	if (Global_1072759.f_19487 < 31)
	{
		iVar9 = Global_1072759.f_19487;
		Global_1072759.f_19487.f_1[iVar9 /*3*/] = { vVar6 };
		Global_1072759.f_19487++;
		if (Global_1072759.f_19487 > 32)
		{
			Global_1072759.f_19487 = 32;
		}
		return iVar9;
	}
	return -1;
}

void func_1296()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_262(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_1297(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1298(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_1299(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2.78249E+24f;
		case 1:
			return 6.693887E-32f;
		case 2:
			return 5.643845E-24f;
		case 3:
			return 9.359187E+08f;
		case 4:
			return -973.5235f;
		case 5:
			return -2.181735E+14f;
		case 6:
			return -1.183841E+08f;
		case 7:
			return 4.680602E+25f;
		case 8:
			return -1.773479E-16f;
		case 9:
			return -6.913617E-18f;
		case 10:
			return 9.795292E+09f;
		case 11:
			return 0.3642137f;
		case 12:
			return -5.126168E-25f;
		case 13:
			return 8.819365E+14f;
		case 14:
			return -1.83749E+38f;
		case 15:
			return 3.763102E-35f;
		case 16:
			return -4.525156E-37f;
		case 17:
			return -3.642462E-37f;
		case 18:
			return 3.67809E+26f;
		case 19:
			return 1.223265E-27f;
		case 20:
			return -6.437393E-24f;
		case 21:
			return -2.015906E+37f;
		case 22:
			return 1.310424E+14f;
		case 23:
			return 1.225001E-21f;
		case 24:
			return 2.004928E+23f;
		case 25:
			return 2.380052E+13f;
		case 26:
			return -1.317158E+21f;
		case 27:
			return 502995.2f;
		case 28:
			return -42525.47f;
		case 29:
			return 6.165362E+33f;
		case 30:
			return -4.72096E-26f;
		case 31:
			return 8.031629E+11f;
		case 32:
			return -1.552719E+19f;
		case 33:
			return -2.069399E-17f;
		case 34:
			return -5.058464E+36f;
		case 35:
			return -6.146416E-23f;
		case 36:
			return 6.888527E+30f;
		case 37:
			return -0.1819772f;
		case 38:
			return -1.749466E-35f;
		case 39:
			return 339.8487f;
		case 40:
			return -7.906033E-27f;
		case 41:
			return NaNf;
		case 42:
			return 1.868031E+22f;
		case 43:
			return 7015.23f;
		case 44:
			return -1.772112E+29f;
		case 45:
			return -1.012065E-10f;
		case 46:
			return 2.050823E+10f;
		case 47:
			return -2.330589E-38f;
		case 48:
			return -1.505282E+35f;
		case 49:
			return 5.785034E+12f;
		case 50:
			return -2.038869E-23f;
		case 51:
			return -1.280143E+15f;
		case 52:
			return -1.23064E-10f;
		case 53:
			return -3.291576E-28f;
		case 54:
			return -4.356636E+32f;
		case 55:
			return -1.514687E+13f;
		case 56:
			return -0.05713905f;
		case 57:
			return 3.829501E+32f;
		case 58:
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_1300(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_1301()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_1302(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1382(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_1383(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_1384(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_1303(struct<2> Param0)
{
	int iVar0;

	if (!func_28(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_29(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1304(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 0)
	{
		return 0;
	}
	if (Global_1900460.f_66 == 1)
	{
		Global_1900460.f_66 = 0;
		func_1170(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_1170(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_1330(iParam0, Global_1900460.f_66);
	return 1;
}

void func_1305(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_1306(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_1307(bool bParam0)
{
	if (func_21() == -1)
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

int func_1308(int iParam0)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	return func_1385(Var0, 1);
}

int func_1309(int iParam0, int iParam1, bool bParam2, var uParam3)
{
	var uVar0;
	var uVar5;
	var uVar6;
	struct<5> Var7;
	var uVar12;
	var uVar13;
	int iVar14;

	MISC::COPY_SCRIPT_STRUCT(bParam2, &uVar0, 5);
	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var7))
	{
		return 0;
	}
	if (!func_1166(Var7, &(Var7.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var7, &(Var7.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var7, &(Var7.f_1), 16, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1166(Var7, &(Var7.f_1), 17, iParam1, 0, 0))
	{
		return 0;
	}
	iVar14 = func_1386(Var7);
	func_1167(Var7, uParam3, &uVar6, &uVar5);
	Var7.f_1 = uVar6;
	if (!func_1168(Var7, iVar14, bParam2, &uVar12, &uVar13))
	{
		return 0;
	}
	bParam2->f_4 = func_1387(Var7);
	Var7.f_1 = uVar5;
	bParam2->f_2 = iVar14;
	switch (iVar14)
	{
		case joaat("COOLDOWN_TYPE"):
			bParam2->f_3 = 0f;
			break;
		default:
			if (func_1385(Var7, 5) != 0)
			{
				bParam2->f_3 = func_1388(Var7, -351.628f);
			}
			break;
	}
	return 1;
}

void func_1310(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	bool bVar17;

	vVar2.f_2 = 4;
	Var0 = { func_1389(iParam3) };
	if (!func_1390(&Var0))
	{
		return;
	}
	if (!func_835(iParam0, Var0, uParam2, &uVar9))
	{
		return;
	}
	if (!func_835(iParam0, Var0.f_1, uParam2, &uVar11))
	{
		return;
	}
	if (!func_1391(iParam0, iParam1, Var0, uParam2, &vVar2))
	{
		return;
	}
	bVar17 = func_1392(iParam0, uParam2, &iVar14, &uVar16, 0, iParam3);
	iVar13 = func_1393(&vVar2, -15, 0, 0, 0);
	iVar15 = func_1393(&vVar2, iVar13, 1, iVar13, -1.429892E-09f);
	if (bVar17 && !bParam4)
	{
		if (iVar14 > iVar15)
		{
			return;
		}
	}
	STATS::STAT_ID_SET_INT(&uVar9, iVar13, true);
	STATS::STAT_ID_SET_INT(&uVar11, iParam1, true);
}

int func_1311(int iParam0)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	return func_1385(Var0, 7);
}

int func_1312(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	var uVar5;

	MISC::COPY_SCRIPT_STRUCT(bParam2, &uVar5, 5);
	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 37, 0, 0, 0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 38, iParam1, 0, 1))
	{
		return 0;
	}
	bParam2->f_1 = func_1394(Var0);
	*bParam2 = func_1395(Var0);
	bParam2->f_2 = func_1325(Var0, 1);
	bParam2->f_4 = func_1388(Var0, -351.628f);
	switch (bParam2->f_2)
	{
		case joaat("INT"):
			bParam2->f_3 = func_1396(Var0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_1313(int iParam0)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		return 0;
	}
	if (!func_1165(&Var0))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1166(Var0, &(Var0.f_1), 42, 0, 0, 0))
	{
		return 0;
	}
	return func_1385(Var0, 10);
}

bool func_1314(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	var uVar5;
	var uVar6;

	if (!func_1156(iParam0))
	{
		return false;
	}
	if (!func_1165(&Var0))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 42, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 43, iParam1, 0, 1))
	{
		return false;
	}
	func_1167(Var0, uParam2, &uVar6, &uVar5);
	Var0.f_1 = uVar6;
	uParam3->f_1 = func_1397(Var0);
	if (uParam3->f_1 == 0)
	{
		return false;
	}
	uParam3->f_4 = func_1387(Var0);
	Var0.f_1 = uVar5;
	*uParam3 = func_1398(Var0);
	uParam3->f_2 = func_1388(Var0, -351.628f);
	uParam3->f_3 = func_1388(Var0, -17700.48f);
	return true;
}

int func_1315(bool bParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var12;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_759(bParam0, uParam1, &Var12, &Var0, bParam2, iParam3, iParam4, bParam5);
}

bool func_1316(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;

	if (!func_1156(iParam0))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	if (!func_1165(&Var0))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 28, 0, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	if (!func_1166(Var0, &(Var0.f_1), 29, iParam2, 0, 0))
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	*iParam3 = func_1399(Var0);
	*uParam4 = func_1400(Var0);
	if (iParam1 != 0)
	{
		if (func_1166(Var0, &(Var0.f_1), 30, 0, 0, 0))
		{
			if (func_1166(Var0, &(Var0.f_1), 31, iParam1, 0, 0))
			{
				*iParam3 = func_1399(Var0);
				*uParam4 = func_1400(Var0);
			}
		}
	}
	if (*iParam3 == 0)
	{
		*iParam3 = -1;
		*uParam4 = 3.006576E-21f;
		return false;
	}
	return true;
}

bool func_1317(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 33)
	{
		return false;
	}
	return true;
}

bool func_1318()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

bool func_1319(int iParam0, int iParam1, int iParam2)
{
	if (!func_1317(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -2738.842f;
			break;
		case 1:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -2.793054E-27f;
			break;
		case 2:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -2.154776E-19f;
			break;
		case 3:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 2.123235E+29f;
			break;
		case 4:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -2.782579E-30f;
			break;
		case 5:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -4.318452E+14f;
			break;
		case 6:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -3.258318E+12f;
			break;
		case 7:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 1.519707E-29f;
			break;
		case 8:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 1.798881E+17f;
			break;
		case 9:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -1.9972E+21f;
			break;
		case 10:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 31176.88f;
			break;
		case 11:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -0.0003438628f;
			break;
		case 12:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 1667.794f;
			break;
		case 13:
			if (Global_1572887.f_14 != 0)
			{
				*iParam1 = -3.622536E+09f;
			}
			else
			{
				*iParam1 = 4.822093E-24f;
			}
			*iParam2 = -2.208067E-27f;
			break;
		case 14:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 160283f;
			break;
		case 15:
			*iParam1 = -3.622536E+09f;
			*iParam2 = -2.338619E-23f;
			break;
		case 16:
			*iParam1 = -3.622536E+09f;
			*iParam2 = 7.564774E+36f;
			break;
		case 17:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -5.511189E+35f;
			break;
		case 18:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -2.554187E+28f;
			break;
		case 19:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -2.109337E-26f;
			break;
		case 20:
			*iParam1 = 4.822093E-24f;
			*iParam2 = 2.89106E+25f;
			break;
		case 21:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -2.772947E-21f;
			break;
		case 22:
			*iParam1 = 4.822093E-24f;
			*iParam2 = 61630.95f;
			break;
		case 23:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -535961f;
			break;
		case 24:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -1.741735E-25f;
			break;
		case 25:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -1.00219E+28f;
			break;
		case 26:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -2.260616E+31f;
			break;
		case 27:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -2.214684E-34f;
			break;
		case 29:
			*iParam1 = 4.822093E-24f;
			*iParam2 = 12.06309f;
			break;
		case 28:
			*iParam1 = 4.822093E-24f;
			*iParam2 = 5.369121E-27f;
			break;
		case 30:
			*iParam1 = 4.822093E-24f;
			*iParam2 = 7.506294E+24f;
			break;
		case 31:
			*iParam1 = 4.822093E-24f;
			*iParam2 = -6.374461E+33f;
			break;
		case 32:
			if (Global_1572887.f_14 != 0)
			{
				*iParam1 = -3.622536E+09f;
			}
			else
			{
				*iParam1 = 4.822093E-24f;
			}
			*iParam2 = 2.641236E-05f;
			break;
		default:
			return false;
	}
	return true;
}

int func_1320()
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

var func_1321(struct<5> Param0)
{
	return func_1278(Param0, 49, 1);
}

var func_1322(struct<5> Param0)
{
	return func_1278(Param0, 51, 1);
}

var func_1323(struct<5> Param0)
{
	return func_1278(Param0, 50, 1);
}

var func_1324(struct<5> Param0, bool bParam5)
{
	return func_1278(Param0, 61, bParam5);
}

var func_1325(struct<5> Param0, bool bParam5)
{
	return func_1278(Param0, 59, bParam5);
}

bool func_1326(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_1327(int iParam0)
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
		func_1401(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1402(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_1328(struct<2> Param0)
{
	if (func_23(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_23(Param0)))
	{
		STATS::_0x99230691875FC218(func_1151(Param0), func_23(Param0), Global_34);
	}
}

void func_1329(struct<2> Param0, int iParam2)
{
	if (!func_28(Param0))
	{
		func_1170(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_1403(Param0, 0, 1, -1);
}

void func_1330(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == iParam1)
	{
		return;
	}
	if (iParam1 < iParam0)
	{
		iVar0 = iParam0;
		while (iVar0 > iParam1)
		{
			func_1404((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1404(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_28(Global_1900460.f_1[0 /*2*/]))
	{
		func_1145(Global_1900460.f_1[0 /*2*/], 3);
	}
}

bool func_1331(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_28(Param0))
	{
		return false;
	}
	if (!func_28(Param2))
	{
		return true;
	}
	iVar0 = func_1151(Param0);
	iVar1 = func_1151(Param2);
	if (iVar1 == iVar0)
	{
		if (bParam4)
		{
			return true;
		}
	}
	if (iVar1 == 2 || iVar1 == 7)
	{
		if (bParam4 && (iVar0 == 2 || iVar0 == 7))
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 2 || iVar0 == 7)
	{
		return true;
	}
	if (iVar1 == 6)
	{
		return false;
	}
	if (iVar0 == 6)
	{
		return true;
	}
	if (iVar1 == 5)
	{
		return false;
	}
	if (iVar0 == 5)
	{
		return true;
	}
	if (iVar1 == 3)
	{
		if (bParam4 && iVar0 == 3)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 3)
	{
		return true;
	}
	if (iVar1 == 4)
	{
		if (bParam4 && iVar0 == 4)
		{
			return true;
		}
		return false;
	}
	if (iVar0 == 4)
	{
		return true;
	}
	return false;
}

bool func_1332(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_1405(iParam0))
	{
		return false;
	}
	if (func_1406(iParam0, uParam1, &uVar0))
	{
		func_1407(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1333(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

var func_1334(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_1335(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_1408(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_1336()
{
	int iVar0;

	iVar0 = CLOCK::GET_CLOCK_HOURS();
	if (iVar0 >= 7 && iVar0 <= 19)
	{
		return false;
	}
	return true;
}

bool func_1337(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

int func_1338(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_1409(vParam0, 0f, 0f, 0, 2);
	return func_1409(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

int func_1339(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	int iVar4;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (func_1410(72))
	{
		func_1411(&(Global_1290256.f_11.f_119));
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (Global_1290256.f_782 != 0)
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			iVar2 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1);
			if (Global_1290256.f_782 == 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (iParam8 == 0)
					{
						return 0;
					}
					else if (bParam9)
					{
						if (!func_1412(1))
						{
							return 0;
						}
					}
					else if (!func_1413(1))
					{
						return 0;
					}
				}
			}
			else
			{
				func_1414(1);
				return 0;
			}
		}
	}
	if (func_1410(70))
	{
		if (!func_1415(&(Global_1290256.f_11.f_119)))
		{
			func_1416(&(Global_1290256.f_11.f_119), 0);
		}
		fVar3 = func_1417(&(Global_1290256.f_11.f_119));
		if (fVar3 > 1092616192)
		{
			func_1418(1);
			Global_1290256.f_11.f_104 = iVar0;
			return 0;
		}
		if (Global_1290256.f_11.f_70 != 0)
		{
			if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1290256.f_11.f_70, false))
			{
				func_1418(1);
				return 0;
			}
			if (Global_1290256.f_11.f_70 != iVar0)
			{
				Global_1290256.f_11.f_104 = 0;
				func_1411(&(Global_1290256.f_11.f_119));
				return 0;
			}
		}
		if (Global_1290256.f_11 != 11)
		{
			return 0;
		}
		iVar4 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar4))
		{
			return 0;
		}
		Global_1290256.f_11.f_104 = 0;
		func_1411(&(Global_1290256.f_11.f_119));
		func_761(71);
		return iVar4;
	}
	if (Global_1290256.f_11 != 1)
	{
		return 0;
	}
	if (SCRIPTS::IS_THREAD_ACTIVE(Global_1290256.f_11.f_71, false) && Global_1290256.f_11.f_71 != iVar0)
	{
		return 0;
	}
	if (func_1419(255) && func_1420(2, 255))
	{
		return 0;
	}
	Global_1290256.f_11.f_70 = iVar0;
	Global_1290256.f_11.f_73 = { vParam0 };
	Global_1290256.f_11.f_77 = iParam3;
	Global_1290256.f_11.f_72 = iParam5;
	Global_1290256.f_11.f_76 = iParam7;
	if (bParam4)
	{
		func_761(73);
	}
	else
	{
		func_762(73);
	}
	if (bParam6)
	{
		func_761(76);
	}
	else
	{
		func_762(76);
	}
	func_761(70);
	func_1421(&(Global_1290256.f_11.f_119));
	return 0;
}

char* func_1340()
{
	return "NET_CHU_BLIP_DROPOFF_GUARD";
}

int func_1341(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 1:
			return -2.616704E+24f;
		case 2:
		case 4:
			if (func_1422(&iVar0))
			{
				if (func_80(iVar0, 4))
				{
					return -2.74076E-39f;
				}
				else if (func_80(iVar0, 2))
				{
					return -9.758836E-14f;
				}
			}
			return -1.271778E-20f;
		case 3:
		case 5:
			if (func_1422(&iVar0))
			{
				if (func_271(iVar0, 512))
				{
					return -2.74076E-39f;
				}
				else if (func_271(iVar0, 256))
				{
					return -9.758836E-14f;
				}
			}
			return -1.271778E-20f;
		default:
			break;
	}
	return 0;
}

char* func_1342(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1423(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_1343(var uParam0)
{
	struct<5> Var0;

	if (func_292(&Local_2028, &Var0) && func_1074(Var0, 1.315272E-12f, uParam0, 0))
	{
		return true;
	}
	return false;
}

bool func_1344(var uParam0)
{
	struct<5> Var0;

	if (func_292(&Local_2028, &Var0) && func_1074(Var0, -1.616039E-37f, uParam0, 0))
	{
		return true;
	}
	return false;
}

char* func_1345(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<10> Var5;
	int iVar15;
	int iVar16;

	sVar0 = "Invalid Posse";
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return sVar0;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (func_1424(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102813.f_17 != Global_1101558[iVar2 /*38*/].f_17)
				{
					sVar0 = func_1425(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_1425(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_1426(iVar1) };
				iVar16 = 0;
				while (iVar16 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar16, &Var5) && Var5.f_9)
					{
						iVar15 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_1346(func_1427(Var5.f_1), 4.808429E-35f);
						}
						else
						{
							sVar0 = func_1346(func_1427(Var5.f_1), iParam2);
						}
					}
					else
					{
						iVar16++;
					}
				}
				if (iVar15 == 0)
				{
					return func_1425(iParam0, bParam1, iParam2);
				}
				if (func_1428(func_1427(Var5.f_1)))
				{
					if (bParam1 == 1 && func_1429(iVar1, sVar0))
					{
						sVar0 = func_1425(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_1425(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_1425(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

char* func_1346(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1423(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_1347()
{
	return "countdown_final_thud";
}

int func_1348(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 4;
		case 2:
			return 1;
		case 3:
			return 0;
		case 4:
			return 0;
		case 5:
			return 4;
		case 6:
			return 4;
		case 7:
			return 3;
		case 8:
			return 1;
		case 9:
			return 0;
		case 10:
			return 0;
		case 11:
			return 4;
		case 12:
			return 4;
		case 13:
			return 3;
		case 16:
			return 1;
		case 14:
			return 4;
		case 15:
			return 4;
		case 17:
			return 3;
		case 18:
			return 0;
		case 19:
			return 4;
		case 20:
			return 1;
		case 21:
			return 1;
		case 22:
			return 0;
		case 23:
			return 0;
		case 24:
			return 0;
		case 25:
			return 0;
		case 26:
			return 4;
		case 27:
			return 4;
		case 28:
			return 1;
		case 29:
			return 1;
		case 30:
			return 0;
		case 31:
			return 4;
		case 32:
			return 4;
		case 33:
			return 4;
		case 34:
			return 4;
		case 35:
			return 4;
		case 36:
			return 1;
		case 37:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_1349(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_1430(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iParam0, func_1431(iParam2), iParam3);
}

void func_1350(int iParam0, var uParam1, int iParam2, char* sParam3)
{
	if (MISC::IS_STRING_NULL(sParam3))
	{
		sParam3 = func_1432(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iParam0, func_1431(iParam2), sParam3);
}

void func_1351(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == -1)
	{
		iParam3 = func_1433(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_INT(iParam0, func_1431(iParam2), iParam3);
}

void func_1352(int iParam0, var uParam1, int iParam2, float fParam3)
{
	if (fParam3 == -1f)
	{
		fParam3 = func_1434(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_FLOAT(iParam0, func_1431(iParam2), fParam3);
}

void func_1353(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!bParam4)
	{
		bParam3 = func_1435(iParam2);
	}
	*uParam1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iParam0, func_1431(iParam2), bParam3);
}

float func_1354()
{
	return 1.958777E+31f;
}

float func_1355()
{
	return -9.513237E-21f;
}

float func_1356()
{
	return -3.842693E-13f;
}

void func_1357(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1436(&((uParam0[iParam1 /*34*/])->f_31));
	iVar1 = (uParam0[iParam1 /*34*/])->f_24;
	if (iVar1 != 0)
	{
		if (!bVar0)
		{
			func_1437(&((uParam0[iParam1 /*34*/])->f_31), 0);
		}
	}
	else if (bVar0)
	{
		if (func_1438(&((uParam0[iParam1 /*34*/])->f_31)) < 1500)
		{
			return;
		}
		func_1439(&((uParam0[iParam1 /*34*/])->f_31));
	}
	func_1257((uParam0[iParam1 /*34*/])->f_17, iVar1 == 1);
	func_1257((uParam0[iParam1 /*34*/])->f_18, iVar1 == 2);
	func_1257((uParam0[iParam1 /*34*/])->f_19, iVar1 == 3);
}

bool func_1358(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 7:
		case 8:
			return true;
	}
	return false;
}

void func_1359(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(iParam0, iParam1);
}

void func_1360(var uParam0, float fParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(uParam0, fParam1);
}

struct<5> func_1361(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1440(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_1441(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_1364(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_1442(bParam1) };
			if (iParam2 && func_1443(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_1362(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_1362(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_1363(bParam0, &Var6, 6.282013E+23f))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else
				{
					Var0.f_4 = -3.587391E+15f;
				}
			}
			else
			{
				Var0.f_4 = 6.282013E+23f;
			}
			break;
		case joaat("COACH"):
		case joaat("HORSE"):
			Var0.f_4 = 5.573986E+25f;
			break;
		case joaat("EMOTE"):
			Var0.f_4 = -5.45926E-19f;
			Var0 = { func_1444(bParam1) };
			switch (func_1445(bParam0))
			{
				case -1070622585:
					Var0.f_4 = NaNf;
					break;
				case -1057349201:
					Var0.f_4 = 4.57813E+14f;
					break;
				case 874188557:
					Var0.f_4 = -1.48142E+30f;
					break;
				case -2101244071:
					Var0.f_4 = -1.644837E+29f;
					break;
			}
			break;
		case joaat("UPGRADE"):
		case joaat("DOG"):
			if (func_1446(bParam0, -2.580501E-27f))
			{
				Var0 = { func_1364(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_1446(bParam0, -4.220332E-15f))
			{
				Var0 = { func_1364(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_1364(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_1446(bParam0, -3.171238E-21f))
			{
				Var0 = { func_1364(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			break;
		default:
			if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 4.978612f))
			{
				Var0.f_4 = 4.978612f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, 0.08386164f))
			{
				Var0.f_4 = 0.08386164f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -8.915019E+08f))
			{
				Var28.f_9 = -5.45926E-19f;
				if (!func_1447(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -8.915019E+08f;
				}
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.194466E+13f))
			{
				Var0.f_4 = -1.194466E+13f;
			}
			else if (func_1446(bParam0, -3.171238E-21f))
			{
				Var0 = { func_1364(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.884954E+11f);
			}
			else
			{
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 2.982335E+09f);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

bool func_1362(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_1448(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_1363(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_1449(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1364(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_1450(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_1307(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_1365(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_1451(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_1447(*iParam1, &Var0, bParam6, 0, -1))
	{
		return false;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_1366(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_21() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1452(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_1453(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_1307(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1366(bool bParam0)
{
	if (func_21() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_1307(bParam0));
}

int func_1367(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_1306(iParam0))
	{
		return 0;
	}
	if (!func_1366(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, iParam0, iParam1, iParam2);
	return 1;
}

void func_1368(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_833(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_1369(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BOUNTY"):
			return 0;
		case -1340981006:
			return 1;
		case joaat("MOONSHINE"):
			return 2;
		case joaat("MOONSHINE_RECIPE"):
			return 3;
		case joaat("LEGENDARY_ANIMAL"):
			return 4;
		default:
			break;
	}
	return -1;
}

bool func_1370(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 31) & 1 != 0;
}

var func_1371(int iParam0, int iParam1)
{
	var uVar0;

	if (!func_1107(&uVar0))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 8, func_1109(iParam0), 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 11, iParam1, 0, 1))
	{
		return 0;
	}
	return func_1454(&uVar0, 1);
}

int func_1372(bool bParam0, int iParam1)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
	return iVar0;
}

int func_1373(var uParam0)
{
	int iVar0;

	iVar0 = DATAFILE::_0xE13634BB6BAF0734(*uParam0, uParam0->f_1);
	return iVar0;
}

void func_1374(int iParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	struct<4> Var5;
	bool bVar9;
	bool bVar10;
	int iVar11;

	if (iParam0 & 81920 != 81920)
	{
		return;
	}
	if (*uParam1 == 0)
	{
		return;
	}
	bVar9 = func_1455(*uParam1);
	if (bVar9 == 0)
	{
		return;
	}
	bVar10 = func_1456(*uParam1);
	if (bVar10 == 0)
	{
		return;
	}
	func_1457(bVar10, &Var1);
	iVar11 = 0;
	while (iVar11 <= 5)
	{
		iVar0 = func_1458(iVar11);
		if (bVar9 != func_1459(Var1, iVar0, 0, 0))
		{
			iVar0 = 0;
		}
	else
	{
		}
		else
		{
			iVar11++;
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	Var5 = { func_1364(bVar9, Var1, iVar0, 0) };
	if (func_1460(&Var5))
	{
		return;
	}
	func_1461(&Var5, 1, 1);
}

int func_1375(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_1376(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_1462(&Var1, iParam0))
	{
		iVar0 = ((func_1463() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_1377(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_1378(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_1379(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("OUTLAW"):
		case joaat("CAMP_SETUP"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			return true;
		case joaat("DYNAMIC"):
			return iParam1;
		default:
			break;
	}
	return false;
}

int func_1380(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = iParam0;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] };
		}
		iVar0++;
	}
	vVar1 = -1;
	vVar1.f_1 = -1;
	if (Global_1072759.f_19487 < 32)
	{
		Global_1072759.f_19487.f_1[Global_1072759.f_19487 /*3*/] = { vVar1 };
	}
	Global_1072759.f_19487 = (Global_1072759.f_19487 - 1);
	if (Global_1072759.f_19487 < 0)
	{
		Global_1072759.f_19487 = 0;
	}
	return 1;
}

int func_1381(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = (Global_1072759.f_19487 - 1);
	vVar1 = -1;
	vVar1.f_1 = -1;
	while (iVar0 >= iParam0)
	{
		if (iVar0 + 1 < 32)
		{
			Global_1072759.f_19487.f_1[iVar0 + 1 /*3*/] = { Global_1072759.f_19487.f_1[iVar0 /*3*/] };
		}
		iVar0 = (iVar0 - 1);
	}
	Global_1072759.f_19487.f_1[iParam0 /*3*/] = { vVar1 };
	Global_1072759.f_19487++;
	if (Global_1072759.f_19487 > 32)
	{
		Global_1072759.f_19487 = 32;
	}
	return 1;
}

int func_1382(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

bool func_1383(int iParam0)
{
	int iVar0;

	iVar0 = func_1464(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_1384(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

int func_1385(vector3 vParam0, var uParam3, var uParam4, int iParam5)
{
	vParam0.f_2 = iParam5;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vParam0);
}

var func_1386(struct<5> Param0)
{
	return func_1278(Param0, 49, 1);
}

int func_1387(struct<5> Param0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	int iVar8;
	bool bVar9;
	bool bVar10;
	var uVar11;

	if (!func_1166(Param0, &(Param0.f_1), 45, 0, 0, 0))
	{
		return 1;
	}
	uVar11 = Param0.f_1;
	iVar1 = func_1385(Param0, 11);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar11;
		bVar10 = false;
		if (!func_1166(Param0, &(Param0.f_1), 46, iVar0, 0, 1))
		{
			return 0;
		}
		iVar8 = func_1465(Param0);
		iVar3 = func_1385(Param0, 12);
		iVar2 = 0;
		while (iVar2 <= (iVar3 - 1))
		{
			if (!func_1466(Param0, iVar2, &Var4))
			{
				return 0;
			}
			switch (Var4)
			{
				case joaat("AWARD"):
					switch (Var4.f_1)
					{
						case 1858947262:
							bVar9 = Var4.f_3 == NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Var4.f_2);
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				case -1945136514:
					switch (Var4.f_1)
					{
						case joaat("EXISTS"):
							bVar9 = false;
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				case joaat("UNLOCK"):
					switch (Var4.f_1)
					{
						case 2078976555:
							bVar9 = Var4.f_3 == (UNLOCK::UNLOCK_IS_UNLOCKED(Var4.f_2) && UNLOCK::UNLOCK_IS_VISIBLE(Var4.f_2));
							break;
						default:
							bVar9 = false;
							break;
					}
					break;
				default:
					bVar9 = false;
					break;
			}
			switch (iVar8)
			{
				case joaat("AND"):
					if (bVar9)
					{
					}
					else
					{
						bVar10 = true;
					}
					else
					{
						Jump @380; //curOff = 345
						if (bVar9)
						{
							Jump @389; //curOff = 353
						}
						else if (iVar2 == (iVar3 - 1))
						{
							bVar10 = true;
						}
						else
						{
							iVar2++;
						}
					}
					if (bVar10)
					{
						return 0;
					}
					iVar0++;
					return 1;
					default:
						break;
			}
		}
	}
}

int func_1388(struct<5> Param0, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	var uVar5;

	if (!func_1166(Param0, &(Param0.f_1), 40, iParam5, 0, iParam5 != -17700.48f))
	{
		return 0;
	}
	uVar5 = Param0.f_1;
	iVar1 = func_1385(Param0, 6);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Param0.f_1 = uVar5;
		iVar4 = 0;
		if (!func_1166(Param0, &(Param0.f_1), 41, iVar0, 0, 1))
		{
		}
		else
		{
			iVar2 = func_1467(Param0);
			switch (iParam5)
			{
				case joaat("TRIGGER"):
					iVar4 = func_1468(iVar2);
					break;
				case joaat("BEHAVIOR"):
					iVar4 = func_1469(iVar2);
					break;
			}
			uVar3 = (uVar3 || iVar4);
		}
		iVar0++;
	}
	return uVar3;
}

struct<2> func_1389(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 0:
			Var0 = 12648.71f;
			Var0.f_1 = 1.341232E-09f;
			break;
		default:
			Var0 = 0;
			Var0.f_1 = 0;
			break;
	}
	return Var0;
}

bool func_1390(var uParam0)
{
	return (*uParam0 != 0 && uParam0->f_1 != 0);
}

bool func_1391(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	struct<5> Var7;
	int iVar12;

	if (!func_1156(iParam0))
	{
		return false;
	}
	if (!func_1165(&Var7))
	{
		return false;
	}
	if (!func_1166(Var7, &(Var7.f_1), 13, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var7, &(Var7.f_1), 14, iParam0, 0, 1))
	{
		return false;
	}
	uVar3 = Var7.f_1;
	if (!func_1166(Var7, &(Var7.f_1), 16, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var7, &(Var7.f_1), 18, iParam2, 0, 1))
	{
		return false;
	}
	func_1167(Var7, uParam3, &uVar6, &uVar5);
	Var7.f_1 = uVar6;
	*uParam4 = func_1324(Var7, 1);
	uParam4->f_1 = func_1325(Var7, 1);
	Var7.f_1 = uVar3;
	if (!func_1166(Var7, &(Var7.f_1), 24, 0, 0, 1))
	{
		return false;
	}
	if (!func_1166(Var7, &(Var7.f_1), 25, iParam1, 0, 1))
	{
		return false;
	}
	uVar4 = Var7.f_1;
	iVar1 = func_1385(Var7, 3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		Var7.f_1 = uVar4;
		if (!func_1166(Var7, &(Var7.f_1), 27, iVar0, 0, 1))
		{
			return false;
		}
		iVar12 = func_1470(Var7);
		iVar2 = func_1471(iVar12, 1);
		if (iVar2 == -1)
		{
			return false;
		}
		uParam4->f_2[iVar2] = func_1472(Var7, 55, 1);
		if (uParam4->f_2[iVar2] < 0)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_1392(int iParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar9;
	var uVar11;
	int iVar13;
	struct<2> Var14;

	vVar2.f_2 = 4;
	Var14 = { func_1389(iParam5) };
	if (!func_1390(&Var14))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_835(iParam0, Var14, uParam1, &uVar11))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_835(iParam0, Var14.f_1, uParam1, &uVar9))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (iParam4 == 0)
	{
		if (!STATS::STAT_ID_GET_INT(&uVar9, &iVar1))
		{
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
		}
		iVar13 = iVar1;
	}
	else
	{
		iVar13 = iParam4;
	}
	if (iVar13 == 0)
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!STATS::STAT_ID_GET_INT(&uVar11, &iVar0))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	if (!func_1391(iParam0, iVar13, Var14, uParam1, &vVar2))
	{
		*iParam2 = 0;
		*uParam3 = 0;
		return 0;
	}
	switch (vVar2.x)
	{
		case joaat("START"):
			*iParam2 = func_1393(&vVar2, iVar0, 1, iVar0, -1.429892E-09f);
			break;
		case joaat("END"):
			if (iVar13 == 0)
			{
				*iParam2 = iVar0;
			}
			else
			{
				iVar0 = func_1473(&vVar2, iVar0);
				*iParam2 = func_1393(&vVar2, iVar0, 1, iVar0, 0);
			}
			break;
		default:
			*iParam2 = 0;
			*uParam3 = 0;
			return 0;
	}
	*uParam3 = vVar2.y;
	return 1;
}

int func_1393(int iParam0, int iParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam4 == 0)
	{
		iVar2 = *iParam0;
	}
	else
	{
		iVar2 = iParam4;
	}
	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			if (bParam2)
			{
				iVar0 = iParam3;
			}
			else
			{
				iVar0 = Global_1295619.f_16;
			}
			switch (iVar2)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = (iVar0 + iParam0->f_2[3]);
					iVar0 = (iVar0 + iParam0->f_2[2] * 60);
					iVar0 = (iVar0 + iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 + (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			if (func_1474(iParam1))
			{
				iVar1 = iParam1;
			}
			else
			{
				iVar1 = func_784();
			}
			switch (iVar2)
			{
				case joaat("START"):
					iVar0 = iVar1;
					break;
				case joaat("END"):
					func_1475(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

var func_1394(struct<5> Param0)
{
	return func_1278(Param0, 58, 1);
}

var func_1395(struct<5> Param0)
{
	return func_1278(Param0, 57, 1);
}

var func_1396(struct<5> Param0)
{
	return func_1472(Param0, 60, 1);
}

var func_1397(struct<5> Param0)
{
	return func_1278(Param0, 62, 1);
}

var func_1398(struct<5> Param0)
{
	return func_1278(Param0, 49, 1);
}

var func_1399(struct<5> Param0)
{
	return func_1278(Param0, 54, 1);
}

var func_1400(struct<5> Param0)
{
	return func_1278(Param0, 56, 1);
}

void func_1401(int iParam0)
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
	func_1402(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1402(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_1403(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_1476(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_106(Param0);
	Var0.f_3 = iParam3;
	func_1477(&Var0, bParam2, iParam4);
	return 1;
}

void func_1404(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_1405(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1406(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_1478(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1407(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_1479(iParam0, uParam2->f_1);
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_2 = iVar0;
	bParam1->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_9), bParam1);
	bParam1->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_17), bParam1);
	if (*uParam2 == 3)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1480(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1481(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1482(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_1483(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_1484(iVar0);
	bParam1->f_2 = 0.7275926f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(uParam2->f_8), bParam1);
	bParam1->f_2 = 4.168656E-33f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	bParam1->f_2 = -3.435564E+12f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_25), bParam1);
	bParam1->f_2 = 2.963616E-21f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_26), bParam1);
	bParam1->f_2 = -5.234699E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_27), bParam1);
	bParam1->f_2 = -7.178136E+15f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_28), bParam1);
	iVar0 = 0;
	bParam1->f_2 = -1.430733E-34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.513029E-27f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.293884E-33f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	bParam1->f_2 = -1.998338E+12f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_32 = iVar0;
}

bool func_1408(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
{
	float fVar0;
	float fVar1;
	int iVar2;

	iVar2 = HUD::GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(vParam0, &fVar0, &fVar1);
	if (iVar2 == 0)
	{
		if (((fVar0 > fParam3 && fVar0 < fParam4) && fVar1 > fParam5) && fVar1 < fParam6)
		{
			return true;
		}
	}
	return false;
}

int func_1409(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
{
	if (Param0 < fParam3)
	{
		if (Param0.f_1 < fParam4)
		{
			return (iParam5 + iParam6);
		}
		else
		{
			return iParam5;
		}
	}
	if (Param0.f_1 < fParam4)
	{
		return (iParam5 + iParam6) + 1;
	}
	return iParam5 + 1;
}

bool func_1410(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1903834.f_496[iVar0], iVar1);
}

void func_1411(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_1412(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1485(iVar0))
		{
			return false;
		}
	}
	func_1486();
	return true;
}

bool func_1413(bool bParam0)
{
	int iVar0;

	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!bParam0)
	{
		if (!func_1485(iVar0))
		{
			return false;
		}
	}
	func_1487();
	return true;
}

void func_1414(bool bParam0)
{
	int iVar0;

	if (!func_1410(101))
	{
		return;
	}
	if (func_1410(102))
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1290256.f_782.f_63 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_761(102);
}

bool func_1415(var uParam0)
{
	return func_1488(*uParam0, 1);
}

void func_1416(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1415(uParam0))
	{
		func_1421(uParam0);
	}
}

float func_1417(var uParam0)
{
	if (!func_1415(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1489(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1490() - uParam0->f_1);
}

void func_1418(bool bParam0)
{
	int iVar0;

	if (!func_1410(70))
	{
		return;
	}
	if (func_1410(72))
	{
		return;
	}
	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (Global_1290256.f_11.f_70 != iVar0)
	{
		if (!bParam0)
		{
			return;
		}
	}
	func_761(72);
}

bool func_1419(int iParam0)
{
	int iVar0;

	if (iParam0 == 255)
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

bool func_1420(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_9 && iParam0) != 0;
}

void func_1421(var uParam0)
{
	func_1491(uParam0, 0f);
}

bool func_1422(int iParam0)
{
	int iVar0;

	switch (Local_2028.f_10)
	{
		case joaat("COACH_HOLDUP_ROBBERY"):
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202.f_25[iVar0]))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
		case joaat("COACH_HOLDUP_KIDNAP"):
			iVar0 = 0;
			while (iVar0 < 20)
			{
				if (Local_16.f_16[iVar0 /*12*/].f_2 != 13.22463f)
				{
				}
				else if (!MAP::DOES_BLIP_EXIST(Local_2028.f_202[iVar0]))
				{
				}
				else
				{
					*iParam0 = iVar0;
					return true;
				}
				iVar0++;
			}
			break;
	}
	return false;
}

char* func_1423(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_1424(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<10> Var4;
	int iVar14;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_1426(iVar0) };
			iVar14 = 0;
			while (iVar14 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar14, &Var4) && Var4 != 0) && Var4.f_9 == 1)
				{
					return true;
				}
				iVar14++;
			}
		}
	}
	return false;
}

char* func_1425(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1342(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
		}
		else
		{
			sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_1342(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
			return func_1423(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	}
	sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	return func_1423(sVar0, iParam2);
}

struct<2> func_1426(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_1427(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_1428(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

bool func_1429(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

int func_1430(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return func_1355();
		case 4:
			return 4.808429E-35f;
		case 9:
			return func_1354();
		case 10:
			return 4.808429E-35f;
		case 23:
			return 6.6361E+21f;
		case 22:
			return -180.0783f;
		case 24:
			return NaNf;
		case 18:
			return 4.808429E-35f;
		case 25:
			return func_1354();
		case 30:
			return func_1354();
		default:
			break;
	}
	return 0;
}

char* func_1431(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "timerString";
		case 1:
			return "isTimerLow";
		case 2:
			return "leftScore";
		case 5:
			return "leftScoreVisible";
		case 3:
			return "leftScoreColor";
		case 4:
			return "leftScoreTextColor";
		case 8:
			return "rightScore";
		case 11:
			return "rightScoreVisible";
		case 9:
			return "rightScoreColor";
		case 10:
			return "rightScoreTextColor";
		case 14:
			return "visible";
		case 15:
			return "enabled";
		case 16:
			return "text";
		case 17:
			return "meterValue";
		case 18:
			return "meterColor";
		case 19:
			return "meterVisible";
		case 20:
			return "txn";
		case 21:
			return "txd";
		case 22:
			return "secondaryTxn";
		case 23:
			return "secondaryTxd";
		case 24:
			return "secondaryImgColor";
		case 25:
			return "imgColor";
		case 26:
			return "isIconBackgroundVisible";
		case 27:
			return "iconEnabled";
		case 28:
			return "overlayTxn";
		case 29:
			return "overlayTxd";
		case 30:
			return "overlayColor";
		case 31:
			return "overlayVisible";
		case 32:
			return "meterThirdsVisible";
		case 33:
			return "showAlternateIcons";
		case 34:
			return "showBlinkIcon";
		case 35:
			return "showPulse";
		case 36:
			return "countDownTimer";
		case 37:
			return "isVisible";
		default:
			break;
	}
	return "";
}

char* func_1432(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "00:00";
		case 2:
			return "0";
		case 8:
			return "0";
		case 16:
			return "";
		case 21:
			return "";
		case 20:
			return "";
		case 29:
			return "";
		case 28:
			return "";
		default:
			break;
	}
	return "";
}

int func_1433(int iParam0)
{
	return 0;
}

float func_1434(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 0f;
		case 13:
			return 0f;
		case 17:
			return 0f;
		default:
			break;
	}
	return 0f;
}

int func_1435(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 0;
		case 5:
			return 1;
		case 6:
			return 1;
		case 11:
			return 1;
		case 12:
			return 1;
		case 14:
			return 1;
		case 15:
			return 1;
		case 19:
			return 0;
		case 26:
			return 0;
		case 27:
			return 1;
		case 31:
			return 0;
		case 32:
			return 0;
		case 33:
			return 0;
		case 34:
			return 0;
		case 35:
			return 0;
		case 37:
			return 0;
		default:
			break;
	}
	return 0;
}

bool func_1436(var uParam0)
{
	return func_1488(*uParam0, 1);
}

void func_1437(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1436(uParam0))
	{
		func_1492(uParam0);
	}
}

int func_1438(var uParam0)
{
	if (!func_1436(uParam0))
	{
		return 0;
	}
	if (func_1493(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1494(uParam0->f_1);
}

void func_1439(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

struct<4> func_1440(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_1307(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_1364(2.982335E+09f, func_1495(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_1364(2.982335E+09f, func_1495(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_1364(2.982335E+09f, func_1495(), -5.45926E-19f, bParam0);
}

int func_1441(bool bParam0)
{
	vector3 vVar0;

	if (!func_1450(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_1442(bool bParam0)
{
	int iVar0;

	iVar0 = func_1307(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_1364(8.681942E-06f, func_1440(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_1364(8.681942E-06f, func_1440(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_1364(8.681942E-06f, func_1440(bParam0), -1.942248E+12f, 0);
}

int func_1443(bool bParam0, bool bParam1)
{
	if (func_1445(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_1496();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_1444(bool bParam0)
{
	int iVar0;

	iVar0 = func_1307(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_1364(3.507197E-29f, func_1440(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_1364(3.507197E-29f, func_1440(bParam0), 12999093, 0);
}

int func_1445(bool bParam0)
{
	struct<2> Var0;

	if (!func_1450(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_1446(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1445(bParam0);
	if (iVar1 == -252.4155f)
	{
		return false;
	}
	iVar3 = ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &iVar0))
		{
			if (func_1497(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_1447(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1498(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1448(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_1450(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1499(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_1364(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_1307(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_1307(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_1449(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_1307(0);
	*iParam1 = { func_1364(bParam0, func_1442(0), fParam3, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam1, iParam2, 22, 1))
	{
		return false;
	}
	return true;
}

bool func_1450(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_1451(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_1452(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1500(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_1502(func_1501(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_1503(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_1453(int iParam0, struct<17> Param1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 1 || Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == 5)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

int func_1454(bool bParam0, int iParam1)
{
	return func_1280(bParam0, 31, iParam1);
}

int func_1455(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1106(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1107(&uVar0))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 8, func_1109(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 10, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	return func_1504(&uVar0, 1);
}

int func_1456(int iParam0)
{
	var uVar0;
	int iVar5;

	iVar5 = func_1106(iParam0);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_1107(&uVar0))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 8, func_1109(iVar5), 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 10, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_1108(&uVar0, 16, 0, 0, 1))
	{
		return 0;
	}
	return func_1505(&uVar0, 1);
}

void func_1457(bool bParam0, var uParam1)
{
	struct<4> Var0;

	Var0 = { func_1440(1) };
	*uParam1 = { func_1364(bParam0, Var0, -5.45926E-19f, 1) };
}

int func_1458(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 254.7162f;
		case 1:
			return 2.196053E-12f;
		case 2:
			return 83583.11f;
		case 3:
			return 1.601222E-09f;
		case 4:
			return 2.757893E+24f;
		case 5:
			return 1.648278E+13f;
		default:
			break;
	}
	return 0;
}

int func_1459(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1506(Param0, iParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1460(var uParam0)
{
	if (!func_1507(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_1461(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<14> Var1;
	int iVar15;
	struct<29> Var16;
	struct<26> Var45;
	struct<18> Var71;
	struct<17> Var89;

	iVar0 = -1;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -5.45926E-19f;
	if (!func_1447(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_1441(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_1508(*iParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1509(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_1510(*iParam0, 1, 0) };
		Var45.f_10 = iParam1;
		iVar0 = func_1511(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_1512(*iParam0, 1, 0) };
		Var71.f_10 = iParam1;
		iVar0 = func_1513(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_1514(&Var1, 0) };
		Var89.f_10 = iParam1;
		iVar0 = func_1452(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_1462(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_1463()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.x = Global_1245159.f_9818;
	vVar1.f_2 = -28.97993f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
	{
		iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
	}
	return iVar0;
}

int func_1464(int iParam0)
{
	return func_1515(iParam0) + 30;
}

var func_1465(struct<5> Param0)
{
	return func_1278(Param0, 61, 1);
}

bool func_1466(struct<5> Param0, int iParam5, var uParam6)
{
	if (!func_1166(Param0, &(Param0.f_1), 47, iParam5, 0, 1))
	{
		return false;
	}
	*uParam6 = func_1516(Param0);
	uParam6->f_1 = func_1517(Param0);
	uParam6->f_2 = func_1518(Param0);
	uParam6->f_3 = func_1519(Param0);
	return true;
}

var func_1467(struct<5> Param0)
{
	return func_1278(Param0, 49, 1);
}

int func_1468(int iParam0)
{
	switch (iParam0)
	{
		case joaat("START"):
			return 4;
		case joaat("COMPLETE"):
			return 8;
		case joaat("PRIMARY"):
			return 1;
		case joaat("RIVAL"):
			return 2;
		case joaat("WIN"):
			return 16;
		case joaat("LOSS"):
			return 32;
		case joaat("EASY"):
			return 64;
		case joaat("MEDIUM"):
			return 128;
		case joaat("HARD"):
			return 256;
		case joaat("NEAR"):
			return 512;
		case joaat("FAR"):
			return 1024;
		case -467684650:
			return 2048;
		case 1946702493:
			return 4096;
		case joaat("POSSE_LEADER"):
			return 16384;
		case 1689792654:
			return 32768;
		case joaat("SCRIPTED"):
			return 8192;
		default:
			break;
	}
	return 0;
}

int func_1469(int iParam0)
{
	switch (iParam0)
	{
		case -1180895447:
			return 1;
		default:
			break;
	}
	return 0;
}

var func_1470(struct<5> Param0)
{
	return func_1278(Param0, 49, 1);
}

int func_1471(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HOURS"):
			return 1;
		case joaat("MINUTES"):
			return 2;
		case joaat("SECONDS"):
			return 3;
		case joaat("DAYS"):
			return 0;
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

var func_1472(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1473(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0->f_1)
	{
		case joaat("POSIX"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar0 = iParam1;
					iVar0 = (iVar0 - iParam0->f_2[3]);
					iVar0 = (iVar0 - iParam0->f_2[2] * 60);
					iVar0 = (iVar0 - iParam0->f_2[1] * 3600);
					iVar0 = (iVar0 - (iParam0->f_2[0] * 86400));
					break;
				default:
					break;
			}
			break;
		case joaat("TIMEOFDAY"):
			switch (*iParam0)
			{
				case joaat("START"):
					break;
				case joaat("END"):
					iVar1 = iParam1;
					func_1520(&iVar1, iParam0->f_2[3], iParam0->f_2[2], iParam0->f_2[1], iParam0->f_2[0], 0, 0);
					iVar0 = iVar1;
					break;
				default:
					break;
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_1474(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_1521(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1522(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1523(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1524(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1525(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1526(iParam0);
	if (iVar5 < 1 || iVar5 > func_1527(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_1475(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1524(*iParam0);
	iVar1 = func_1525(*iParam0);
	iVar2 = func_1526(*iParam0);
	iVar3 = func_1523(*iParam0);
	iVar4 = func_1522(*iParam0);
	iVar5 = func_1521(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_1527(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1527(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_1528(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1476(struct<2> Param0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (func_29(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1477(var uParam0, bool bParam1, int iParam2)
{
	func_1529(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_1530(func_1476(uParam0->f_1));
	}
	else
	{
		func_1531();
	}
}

int func_1478(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -4.585506E-21f;
			break;
		case -3:
			iVar0 = 2.741749E+08f;
			break;
		case 1:
			iVar0 = -6.049365E-28f;
			break;
		case -2:
			iVar0 = 1.540051E+08f;
			break;
		case 2:
			iVar0 = -2.882769E-19f;
			break;
		case 3:
			iVar0 = 3.67675E+19f;
			break;
		case 4:
			iVar0 = 2.694446E+36f;
			break;
		case 5:
			iVar0 = 32.15498f;
			break;
		case 6:
			iVar0 = -8.391956E-09f;
			break;
		case 7:
			iVar0 = 61686.1f;
			break;
		case 8:
			iVar0 = 5.182694E+24f;
			break;
		case 9:
			iVar0 = -5.243371E-15f;
			break;
		case 10:
			iVar0 = 5.863398E+29f;
			break;
		case 11:
			iVar0 = 6.767836E+30f;
			break;
		case 12:
			iVar0 = -1.287736E+17f;
			break;
		case 13:
			iVar0 = 5713673f;
			break;
		case 14:
			iVar0 = -3.715131E-31f;
			break;
		case 15:
			iVar0 = 3.998251E+09f;
			break;
		case 16:
			iVar0 = 2.816196E+24f;
			break;
		case 17:
			iVar0 = 3.266747E+28f;
			break;
		case 18:
			iVar0 = 1347.951f;
			break;
		case 19:
			iVar0 = -4.200322E+27f;
			break;
	}
	return iVar0;
}

int func_1479(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_1532(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_1480(int iParam0)
{
	switch (iParam0)
	{
		case 1336837986:
			return 0;
		case 2124631622:
			return 1;
		case joaat("ROBBERY_TRAIN"):
			return 2;
		case 1443764480:
			return 3;
		case -668110249:
			return 4;
		case -1381389849:
			return 5;
		case 536699577:
			return 6;
		case 541147288:
			return 7;
		case 377122918:
			return 8;
		case 1158195437:
			return 9;
		case joaat("AMBUSH"):
			return 10;
		case -621956193:
			return 11;
		case joaat("GANG_EVENT_SHOWDOWN"):
			return 12;
		case joaat("GANG_EVENT_IMPROMPTU_RACE"):
			return 13;
		case -867762478:
			return 14;
		case 602097925:
			return 15;
		case joaat("TRAIN_ESCORT"):
			return 16;
		case joaat("IWD_1V1"):
			return 17;
		case joaat("IWD_PVP"):
			return 18;
		case joaat("IWD_PF"):
			return 20;
		case joaat("IWD_PLF"):
			return 21;
		case joaat("IWD_F"):
			return 28;
		case joaat("IWD_INF"):
			return 19;
		case joaat("ASSASSINATION"):
			return 22;
		case joaat("ASSASSINATION_TRACKING"):
			return 23;
		case joaat("ASSASSINATION_PVP_PLAYER"):
			return 24;
		case joaat("ASSASSINATION_PVP_POSSE"):
			return 25;
		case joaat("COACH_HOLDUP_ROBBERY"):
			return 26;
		case joaat("COACH_HOLDUP_KIDNAPPING"):
			return 27;
		case 1518877519:
			return 30;
		default:
			break;
	}
	return -1;
}

int func_1481(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BLACKJACK"):
			return 0;
		case joaat("DOMINOES"):
			return 1;
		case joaat("POKER"):
			return 2;
		case joaat("FILLET"):
			return 3;
		case joaat("MILKING_COW"):
			return 4;
		case joaat("CLEAN_STALLS"):
			return 5;
		case joaat("FENCE_BUILDING"):
			return 6;
		default:
			break;
	}
	return -1;
}

int func_1482(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ARCHERY"):
			return 0;
		case joaat("CHALLENGES"):
			return 1;
		case joaat("DEAD_DROP"):
			return 2;
		case joaat("GOLDEN_HAT"):
			return 3;
		case joaat("HOT_PROPERTY"):
			return 4;
		case joaat("KING_OF_THE_CASTLE"):
			return 5;
		case joaat("KING_OF_THE_RAILS"):
			return 6;
		case joaat("PV_CHALLENGE_HERBALIST"):
			return 15;
		case joaat("PV_CHALLENGE_BIGGEST_FISH"):
			return 16;
		case joaat("PV_CHALLENGE_FLYING_BIRD"):
			return 17;
		case joaat("HUNT_THE_POSSE_LEADER"):
			return 18;
		case joaat("ESCAPED_CONVICTS"):
			return 8;
		case joaat("SUPPLY_TRAIN"):
			return 10;
		case joaat("ROUND_UP"):
			return 9;
		case joaat("WRECKAGE"):
			return 11;
		case joaat("CONDOR_EGG"):
			return 12;
		case -27117790:
			return 13;
		case 1653867545:
			return 14;
		case -142235487:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_1483(int iParam0)
{
	switch (iParam0)
	{
		case joaat("UGC_MAJOR_ID_DBG_VERSUS"):
			return 0;
		case joaat("UGC_MAJOR_ID_DBG_DEATHMATCH"):
			return 1;
		case joaat("UGC_MAJOR_ID_DBG_RACE"):
			return 2;
		case 2006131499:
			return 3;
		case -1641798436:
			return 4;
		case 352400957:
			return 5;
		case 1211286129:
			return 6;
		case 787592898:
			return 7;
		case joaat("UGC_MAJOR_ID_LBM"):
			return 8;
		case joaat("UGC_MAJOR_ID_MOONSHINE_COOP"):
			return 9;
		case 1039801657:
			return 10;
		case 434282564:
			return 11;
		case 1228993410:
			return 12;
		default:
			break;
	}
	return 0;
}

int func_1484(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NULL"):
			return -1;
		case joaat("NORMAL"):
			return 0;
		case joaat("INTRO_CHAR"):
			return 1;
		case joaat("INTRO_GENERIC"):
			return 2;
		case 1322114923:
			return 3;
		case joaat("INTRO_FREEMODE"):
			return 4;
		case joaat("INTRO_CLAY2"):
			return 5;
		case joaat("TEAMSTER"):
			return 6;
		case joaat("BOUNTYHUNTER"):
			return 7;
		case joaat("GUNSLINGER"):
			return 8;
		case joaat("OUTLAW"):
			return 9;
		case joaat("HUNTER"):
			return 10;
		case joaat("TRADER"):
			return 11;
		case joaat("COLLECTOR"):
			return 12;
		case joaat("SEASON005"):
			return 13;
		case joaat("VIPSEASON005"):
			return 14;
		case joaat("MOONSHINER"):
			return 15;
		case joaat("SEASON006"):
			return 16;
		case joaat("VIPSEASON006"):
			return 17;
		case 1976336482:
			return 18;
		case -713504854:
			return 19;
		case 753957709:
			return 20;
		case 1054483531:
			return 21;
		case 547199896:
			return 22;
		case -862833187:
			return 23;
		case -89188661:
			return 24;
		case 1792833819:
			return 25;
		case 696644969:
			return 26;
		case -1317631038:
			return 27;
		case 1539627774:
			return 28;
		case 591458137:
			return 29;
		case 1837071987:
			return 30;
		case 67219675:
			return 31;
		case 1885832251:
			return 32;
		case -171568028:
			return 33;
		case -1968391995:
			return 34;
		case 2042305612:
			return 35;
		case -1797632736:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_1485(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	vector3 vVar10;

	if (!ENTITY::IS_ENTITY_VISIBLE(iParam0))
	{
		return true;
	}
	vVar10 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar0, &vVar3);
	vVar6 = { MISC::ABSF(((vVar3.x - vVar0.x) / 2f)), MISC::ABSF(((vVar3.y - vVar0.y) / 2f)), MISC::ABSF(((vVar3.z - vVar0.z) / 2f)) };
	fVar9 = vVar6.x;
	if (fVar9 < vVar6.y)
	{
		fVar9 = vVar6.y;
	}
	if (fVar9 < vVar6.z)
	{
		fVar9 = vVar6.z;
	}
	if (CAM::IS_SPHERE_VISIBLE(vVar10, fVar9) || NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), fVar9, 100f))
	{
		return false;
	}
	return true;
}

void func_1486()
{
	if (func_1533(8, 255))
	{
		return;
	}
	func_1534(3);
}

void func_1487()
{
	if (func_1533(8, 255))
	{
		return;
	}
	func_1535(3);
}

bool func_1488(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1489(var uParam0)
{
	return func_1488(*uParam0, 2);
}

float func_1490()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_1491(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1490() - fParam1);
	func_1536(uParam0, 1);
	func_1537(uParam0, 2);
	uParam0->f_2 = 0f;
}

void func_1492(var uParam0)
{
	func_1538(uParam0, 0);
}

bool func_1493(var uParam0)
{
	return func_1488(*uParam0, 2);
}

int func_1494(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

struct<4> func_1495()
{
	struct<4> Var0;

	return Var0;
}

int func_1496()
{
	if (func_1157(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1497(bool bParam0, int iParam1, int iParam2)
{
	if (iParam2 == 1.821884E-21f)
	{
		if (ITEMDATABASE::_0xAA29A5F13B2C20B2(iParam1, -3.294982E+22f) == -5.586199E-31f)
		{
			return false;
		}
	}
	return ITEMDATABASE::_ITEMDATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, iParam2);
}

int func_1498(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_1307(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_1499(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_1540(func_1539(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_1500(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_1541(iParam1->f_8, iParam0, iVar0, 2048) || func_1541(iParam1->f_8, iParam0, iVar0, 32768)) || func_1541(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_1541(iParam1->f_8, iParam0, iVar0, 4) || func_1541(iParam1->f_8, iParam0, iVar0, 256)) || func_1541(iParam1->f_8, iParam0, iVar0, 65536)) || func_1541(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_1541(iParam1->f_8, iParam0, iVar0, 1) || func_1541(iParam1->f_8, iParam0, iVar0, 8)) || func_1541(iParam1->f_8, iParam0, iVar0, 65536)) || func_1541(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_1541(iParam1->f_8, iParam0, iVar0, 1) || func_1541(iParam1->f_8, iParam0, iVar0, 16)) || func_1541(iParam1->f_8, iParam0, iVar0, 2)) || func_1541(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_1541(iParam1->f_8, iParam0, iVar0, 8) || func_1541(iParam1->f_8, iParam0, iVar0, 4096)) || func_1541(iParam1->f_8, iParam0, iVar0, 256)) || func_1541(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1501(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_1502(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_1542(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_1542(iParam1, 2, 0, 0);
	return -1;
}

int func_1503(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_1542(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_1504(bool bParam0, int iParam1)
{
	return func_1280(bParam0, 42, iParam1);
}

int func_1505(bool bParam0, int iParam1)
{
	return func_1280(bParam0, 43, iParam1);
}

bool func_1506(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_1307(bParam7);
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

bool func_1507(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<29> func_1508(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<29> Var0;
	struct<29> Var29;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var29.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_1307(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1514(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_1509(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1500(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_1502(func_1543(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_1503(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_1510(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<26> Var0;
	struct<24> Var26;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var26.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_1307(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1514(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_1511(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_1502(func_1544(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_1503(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_1512(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	struct<18> Var0;
	struct<15> Var18;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return Var0;
	}
	Var18.f_9 = -5.45926E-19f;
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_1307(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1514(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_1513(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1500(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_1502(func_1545(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_1503(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_1514(var uParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *uParam0 };
	Var0.f_4 = { uParam0->f_5 };
	Var0.f_8 = uParam0->f_4;
	Var0.f_9 = uParam0->f_11;
	Var0.f_11 = uParam0->f_9;
	Var0.f_10 = uParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_1499(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_1495() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_1515(int iParam0)
{
	return iParam0 * 31;
}

var func_1516(struct<5> Param0)
{
	return func_1278(Param0, 61, 1);
}

var func_1517(struct<5> Param0)
{
	return func_1278(Param0, 64, 1);
}

var func_1518(struct<5> Param0)
{
	return func_1278(Param0, 63, 1);
}

var func_1519(struct<5> Param0)
{
	return func_1546(Param0, 65, 1);
}

void func_1520(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1524(*iParam0);
	iVar1 = func_1525(*iParam0);
	iVar2 = func_1526(*iParam0);
	iVar3 = func_1523(*iParam0);
	iVar4 = func_1522(*iParam0);
	iVar5 = func_1521(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_1527(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1528(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1521(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1522(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1523(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1524(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1547(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1525(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1526(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1527(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		default:
			break;
	}
	return 30;
}

void func_1528(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1548(iParam0, iParam6);
	func_1549(iParam0, iParam5);
	func_1550(iParam0, iParam4);
	func_1551(iParam0, iParam3);
	func_1552(iParam0, iParam2);
	func_1553(iParam0, iParam1);
}

void func_1529(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	if (Global_1205789.f_129 >= 32)
	{
		Global_1205789.f_129 = 32;
		return;
	}
	if (iParam1 >= Global_1205789.f_129)
	{
		iParam1 = -1;
	}
	if (iParam1 <= -1)
	{
		Global_1205789[Global_1205789.f_129 /*4*/] = { *uParam0 };
		Global_1205789.f_129++;
		return;
	}
	iVar0 = iParam1;
	iVar1 = (Global_1205789.f_129 - 1);
	Var2.f_1 = -1;
	Var2.f_1.f_1 = -1;
	while (iVar1 >= iVar0)
	{
		Var2 = { Global_1205789[iVar1 /*4*/] };
		Global_1205789[iVar1 /*4*/] = { Global_1205789[iVar1 + 1 /*4*/] };
		Global_1205789[iVar1 + 1 /*4*/] = { Var2 };
		iVar1 = (iVar1 - 1);
	}
	Global_1205789[iParam1 /*4*/] = { *uParam0 };
	Global_1205789.f_129++;
}

void func_1530(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_1531()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_1554(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

bool func_1532(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_1555(iParam0, uParam1, &uVar0))
	{
		func_1556(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_1533(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_10 && iParam0) != 0;
}

void func_1534(int iParam0)
{
	func_1557(3, iParam0);
}

void func_1535(int iParam0)
{
	func_1557(2, iParam0);
}

void func_1536(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_1537(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_1538(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_1536(uParam0, 1);
	func_1537(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_1539(bool bParam0)
{
	return bParam0;
}

bool func_1540(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_1541(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_1154(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_1542(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			if (Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 == iParam1)
			{
			}
			else
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_1 = iParam1;
			}
			if (iParam2 != 0 && iParam3 != 0)
			{
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_2 = iParam2;
				Global_1292096.f_20.f_1[iVar0 /*21*/].f_3 = iParam3;
			}
			return;
		}
		iVar0++;
	}
	func_1558(iParam0, iParam1, iParam2, iParam3);
}

bool func_1543(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_1544(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_1545(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

var func_1546(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	var uVar0;

	vParam0.f_2 = iParam5;
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(&uVar0, &vParam0))
	{
	}
	return uVar0;
}

int func_1547(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1548(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 = (*iParam0 || 0f);
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - (*iParam0 && 0f));
	}
}

void func_1549(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1525(*iParam0);
	iVar1 = func_1524(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1527(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1551(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1552(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1553(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_1554(int iParam0)
{
	int iVar0;

	if (Global_1205789.f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1205789.f_129)
	{
		if (Global_1205789[iVar0 /*4*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1555(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_1478(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_1556(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -9.223824E-39f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	bParam0->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1165207f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), bParam0);
}

void func_1557(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

void func_1558(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1292096.f_20 < 20)
	{
		Global_1292096.f_20++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_20.f_1[iVar0 /*21*/] = { Global_1292096.f_20.f_1[iVar0 + 1 /*21*/] };
			iVar0++;
		}
	}
	func_1559(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_1559(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1560(&(uParam0->f_4));
}

void func_1560(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = -5.149929E+33f;
	uParam0->f_8 = 0;
	uParam0->f_8.f_1 = 0;
	uParam0->f_8.f_2 = 0;
	uParam0->f_8.f_3 = 0;
	StringCopy(&(uParam0->f_12), "", 32);
	uParam0->f_16 = -1;
}

