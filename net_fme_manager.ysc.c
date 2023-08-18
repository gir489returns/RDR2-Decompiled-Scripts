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
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2(0, 0))
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	int iVar0;

	iVar0 = MISC::GET_GAME_TIMER();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
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

void func_3()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_11();
	}
	func_12();
}

void func_4()
{
	int iVar0;

	func_13();
	if (HUD::TEXT_BLOCK_IS_LOADED(func_14()))
	{
		HUD::_TEXT_BLOCK_DELETE(func_14());
	}
	Global_1206482 = 0;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		Global_1206482.f_239[iVar0 /*26*/] = { Global_1205923.f_1[iVar0 /*26*/] };
		if (Global_1206482.f_78[iVar0 /*20*/] > 0 && Global_1206482.f_78[iVar0 /*20*/] < 4)
		{
			func_15(iVar0, 8);
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_IS_IN_SESSION())
			{
				func_16(&(Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iVar0]));
			}
			func_17(&(Global_1206482.f_78[iVar0 /*20*/]));
		}
		iVar0++;
	}
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
		if (func_18() == 0)
		{
			if (func_19())
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

bool func_8()
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

void func_9()
{
	func_20(&Global_1205923);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1205923, 228, 40);
	func_21(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1205923), 228, "g_mpFmeManagerHostData");
	if (func_22())
	{
		Global_1206472 = { Global_1206151[func_23() /*10*/] };
	}
	func_24(&Global_1206151);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1206151, 321, 41);
	func_25(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1206151[0 /*10*/])), 321, "g_mpFmeManagerPlayerData");
	if (!func_22())
	{
		func_26(&Global_1206482);
	}
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

void func_11()
{
	switch (Global_1205923)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29();
			break;
		case 3:
			func_30();
			break;
	}
}

void func_12()
{
	switch (Global_1206482)
	{
		case 0:
			func_31();
			break;
		case 1:
			func_32();
			break;
		case 2:
			func_33();
			break;
		case 3:
			func_34();
			break;
	}
}

void func_13()
{
	if (DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		DATAFILE::_PARSEDDATA_UNLOAD_FILE(Global_1206482.f_455);
	}
}

char* func_14()
{
	return "FMUI";
}

void func_15(int iParam0, int iParam1)
{
	func_35(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

void func_16(var uParam0)
{
	var uVar0;

	*uParam0 = uVar0;
}

void func_17(var uParam0)
{
	struct<20> Var0;

	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0.f_10 = 5;
	*uParam0 = { Var0 };
}

int func_18()
{
	return Global_1572887.f_14;
}

bool func_19()
{
	return Global_1051645.f_8;
}

void func_20(var uParam0)
{
	struct<228> Var0;

	Var0.f_1 = 8;
	Var0.f_1.f_1.f_1 = -1;
	Var0.f_1.f_1.f_5 = -1;
	Var0.f_1.f_1.f_5.f_1 = -1;
	Var0.f_1.f_1.f_7 = 255;
	Var0.f_1.f_1.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_1.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_21(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_22()
{
	return !Global_1572887.f_10;
}

int func_23()
{
	return Global_1102813.f_3672;
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		func_36(uParam0[iVar0 /*10*/]);
		iVar0++;
	}
}

int func_25(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_26(var uParam0)
{
	struct<456> Var0;

	Var0.f_1 = 19;
	Var0.f_78 = 8;
	Var0.f_78.f_1.f_1 = -1;
	Var0.f_78.f_1.f_3 = -1;
	Var0.f_78.f_1.f_7 = -1;
	Var0.f_78.f_1.f_7.f_1 = -1;
	Var0.f_78.f_1.f_10 = 5;
	Var0.f_78.f_1.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_3 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_7.f_1 = -1;
	Var0.f_78.f_1.f_20.f_20.f_20.f_20.f_20.f_20.f_20.f_10 = 5;
	Var0.f_239 = 8;
	Var0.f_239.f_1.f_1 = -1;
	Var0.f_239.f_1.f_5 = -1;
	Var0.f_239.f_1.f_5.f_1 = -1;
	Var0.f_239.f_1.f_7 = 255;
	Var0.f_239.f_1.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_5.f_1 = -1;
	Var0.f_239.f_1.f_26.f_26.f_26.f_26.f_26.f_26.f_26.f_7 = 255;
	Var0.f_448 = 5;
	*uParam0 = { Var0 };
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (func_38())
	{
		func_37(2);
	}
}

void func_29()
{
	if (Global_1206482 >= 2)
	{
		func_39();
		func_40();
		func_37(3);
	}
}

void func_30()
{
	func_41();
	func_42();
	func_43();
}

void func_31()
{
	int iVar0;

	if (Global_1205923 > 0)
	{
		if (func_22() && func_44())
		{
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (func_45(iVar0, 8))
				{
					if (func_45(iVar0, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iVar0 /*20*/].f_5))
					{
						func_16(&(Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iVar0]));
						func_17(&(Global_1206482.f_78[iVar0 /*20*/]));
					}
					else
					{
						Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iVar0] = Global_1206472[iVar0];
					}
				}
				iVar0++;
			}
		}
		func_46();
		func_47(1);
	}
}

void func_32()
{
	if (func_38() && Global_1205923 > 1)
	{
		func_48();
		func_47(2);
	}
}

void func_33()
{
	if (Global_1205923 > 2)
	{
		func_47(3);
	}
}

void func_34()
{
	func_49(&(Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/]));
	func_50();
}

void func_35(var uParam0, int iParam1)
{
	func_51(uParam0, iParam1);
}

void func_36(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_16(uParam0[iVar0]);
		iVar0++;
	}
}

void func_37(int iParam0)
{
	Global_1205923 = iParam0;
}

bool func_38()
{
	int iVar0;

	if (!func_52())
	{
		return false;
	}
	if (!func_53())
	{
		return false;
	}
	iVar0 = 1;
	if (!func_54())
	{
		iVar0 = 0;
	}
	HUD::TEXT_BLOCK_REQUEST(func_14());
	if (!HUD::TEXT_BLOCK_IS_LOADED(func_14()))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_39()
{
	struct<7> Var0;
	struct<7> Var7;
	struct<5> Var14;
	int iVar21;

	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	Var7 = { Var0 };
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = func_55();
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var7, &Var14, &Var7);
	iVar21 = 0;
	while (!func_56(Var7, Var0) && iVar21 < 500)
	{
		CLOCK::_ADD_TIME_TO_DATE_TIME(&Var7, &Var14, &Var7);
		iVar21++;
	}
	Global_1205923.f_226 = iVar21;
	Global_1205923.f_210 = { Var7 };
}

void func_40()
{
	var uVar0;
	struct<7> Var1;
	struct<7> Var8;
	struct<5> Var15;
	int iVar22;

	uVar0 = Global_1901671.f_316.f_185;
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var1);
	Var8 = { Var1 };
	Var8.f_3 = 0;
	Var8.f_4 = uVar0;
	Var8.f_5 = 0;
	Var8.f_6 = 0;
	Var15.f_4 = func_57();
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var8, &Var15, &Var8);
	iVar22 = 0;
	while (!func_56(Var8, Var1) && iVar22 < 500)
	{
		CLOCK::_ADD_TIME_TO_DATE_TIME(&Var8, &Var15, &Var8);
		iVar22++;
	}
	Global_1205923.f_227 = iVar22;
	Global_1205923.f_217 = { Var8 };
}

void func_41()
{
	struct<7> Var0;
	int iVar7;

	if (!func_58() || Global_1072759.f_28761)
	{
		return;
	}
	if (!func_59(2, 30))
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	if (func_56(Var0, Global_1205923.f_210))
	{
		iVar7 = 0;
		if (Global_1205923.f_1[iVar7 /*26*/] != 0 && !func_60())
		{
			func_61(0);
			return;
		}
		if (func_62(-0.02932728f))
		{
			func_39();
		}
		else
		{
			func_63(-0.02932728f);
		}
	}
}

void func_42()
{
	struct<7> Var0;
	int iVar7;

	if (!func_58() || Global_1072759.f_28761)
	{
		return;
	}
	if (!func_59(3, 30))
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	if (func_56(Var0, Global_1205923.f_217))
	{
		iVar7 = 1;
		if (Global_1205923.f_1[iVar7 /*26*/] != 0 && !func_60())
		{
			func_61(1);
			return;
		}
		if (func_62(1020553f))
		{
			func_40();
		}
		else
		{
			func_63(1020553f);
		}
	}
}

void func_43()
{
	if (Global_1206482.f_448[1] >= 8)
	{
		Global_1206482.f_448[1] = 0;
	}
	func_64(Global_1206482.f_448[1]);
	Global_1206482.f_448[1]++;
}

bool func_44()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

bool func_45(int iParam0, int iParam1)
{
	return func_65(Global_1206482.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_46()
{
	Global_1206482.f_455 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(0.03675469f);
}

void func_47(int iParam0)
{
	Global_1206482 = iParam0;
}

void func_48()
{
	func_66();
	func_67();
}

void func_49(var uParam0)
{
	Global_1206482.f_454 = (Global_1206482.f_454 + 1 % 30);
	if (Global_1206482.f_454 > 0)
	{
		return;
	}
	if (!func_68(uParam0->f_9, 1))
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, -1.197024E-12f, 0, false))
		{
			func_69(&(uParam0->f_9), 1);
		}
	}
}

void func_50()
{
	if (Global_1206482.f_448[0] >= 8)
	{
		Global_1206482.f_448[0] = 0;
	}
	func_70(Global_1206482.f_448[0]);
	Global_1206482.f_448[0]++;
}

void func_51(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_52()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_53()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_5;
}

bool func_54()
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1206482.f_455);
}

var func_55()
{
	var uVar0;

	uVar0 = Global_1901671.f_316.f_183;
	return uVar0;
}

bool func_56(struct<7> Param0, struct<7> Param7)
{
	if (Param0 > Param7)
	{
		return true;
	}
	else if (Param7 > Param0)
	{
		return false;
	}
	if (Param0.f_1 > Param7.f_1)
	{
		return true;
	}
	else if (Param7.f_1 > Param0.f_1)
	{
		return false;
	}
	if (Param0.f_2 > Param7.f_2)
	{
		return true;
	}
	else if (Param7.f_2 > Param0.f_2)
	{
		return false;
	}
	if (Param0.f_3 > Param7.f_3)
	{
		return true;
	}
	else if (Param7.f_3 > Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4 > Param7.f_4)
	{
		return true;
	}
	else if (Param7.f_4 > Param0.f_4)
	{
		return false;
	}
	if (Param0.f_5 > Param7.f_5)
	{
		return true;
	}
	else if (Param7.f_5 > Param0.f_5)
	{
		return false;
	}
	if (Param0.f_6 > Param7.f_6)
	{
		return true;
	}
	else if (Param7.f_6 > Param0.f_6)
	{
		return false;
	}
	return false;
}

var func_57()
{
	var uVar0;

	uVar0 = Global_1901671.f_316.f_184;
	return uVar0;
}

bool func_58()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_59(int iParam0, int iParam1)
{
	Global_1206482.f_448[iParam0]++;
	if (Global_1206482.f_448[iParam0] < iParam1)
	{
		return false;
	}
	Global_1206482.f_448[iParam0] = 0;
	return true;
}

bool func_60()
{
	return Global_1572887.f_72.f_40 != 1;
}

void func_61(int iParam0)
{
	if (func_71() != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_72(iParam0) != 0)
	{
		func_73(iParam0, 6);
	}
}

bool func_62(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_75(func_74(iParam0));
	MISC::SET_RANDOM_SEED(iVar0);
	switch (iParam0)
	{
		case joaat("STANDARD"):
			if (!func_76(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
		case joaat("THEMED"):
			if (!func_77(&iVar1, &iVar2, &iVar3))
			{
				MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
				return false;
			}
			break;
	}
	bVar4 = func_78(iVar1, PLAYER::PLAYER_ID(), iVar2, iVar3, iVar0, 0);
	MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
	if (bVar4)
	{
		switch (iParam0)
		{
			case joaat("STANDARD"):
				Global_1205923.f_224 = iVar1;
				break;
			case joaat("THEMED"):
				Global_1205923.f_225 = iVar1;
				break;
		}
	}
	return bVar4;
}

void func_63(int iParam0)
{
	var uVar0;
	struct<7> Var7;
	struct<5> Var14;

	CLOCK::_GET_POSIX_TIME_STRUCT(&uVar0);
	Var7.f_3 = 0;
	Var7.f_4 = 0;
	Var7.f_5 = 0;
	Var7.f_6 = 0;
	Var14.f_4 = 1;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&uVar0, &Var14, &Var7);
	switch (iParam0)
	{
		case joaat("STANDARD"):
			Global_1205923.f_210 = { Var7 };
			break;
		case joaat("THEMED"):
			Global_1205923.f_217 = { Var7 };
			break;
	}
}

void func_64(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] == 0)
	{
		return;
	}
	switch (Global_1205923.f_1[iParam0 /*26*/])
	{
		case 1:
			func_79(iParam0);
			break;
		case 5:
			func_80(iParam0);
			break;
		case 6:
			func_81(iParam0);
			break;
	}
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_66()
{
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -0.4166105f, "data/events/event(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -8.04068E-26f, "locations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.928595E+18f, "location(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.265881E-22f, "location(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -5.140563E+32f, "outro");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 6.990236E-15f, "respawn");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 6.889182E+22f, "ui");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -5.135098E+27f, "variations");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 9.249405E+14f, "variation(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.751128E-24f, "variation(id=%x)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 8.812851E+20f, "lobby_positions");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 6.184497E+31f, "lobby_position(%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -3.655605E+13f, "lobby_position(id=%i)");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 5.669141E+33f, ":ambient_blocking_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.290971E+36f, ":award_mod_promo");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.41229E+38f, ":disable_mount");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 2.216889E+18f, ":duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -4.290871E-36f, ":enable_law");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -6.862351E-12f, ":event_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -9.86382E+33f, ":spec_cam_pos");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -7.10546E-31f, ":spec_cam_rot");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.524697E+32f, ":heading");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.361417E-11f, ":id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1421.464f, ":alternative_mode");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.391285E-32f, ":inner_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 389842.2f, ":intro_shard_primary");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.650332E+22f, ":lobby_duration");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 5266.862f, ":lobby_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.968821E+09f, ":max_players");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 29615.1f, ":min_gangs");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 6.580254E-05f, ":min_players");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -7.380973E-25f, ":min_players_start");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.247822E+22f, ":relationship_type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.348491E-37f, ":name_handle");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.828277E-25f, ":name_handle_alt");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 8.537317E+15f, ":on_foot");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 7.857968E+37f, ":on_mount");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -9.198502E+23f, ":outer_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 5.3786E+35f, ":position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 5.369853E-31f, ":lobby_blip_position");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 3.753123E+25f, ":rules_help");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.527448E-33f, ":rules_secondary_help");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -3.43081E+24f, ":script");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.798442E+13f, ":shocking_event_radius");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 4.295385E+11f, ":stack_size");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 4.423604E-06f, ":stat_group");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.894266E+07f, ":text_block");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -2.193765E-07f, ":toast_icon");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -9.068753E-21f, ":toast_icon_dict");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -0.2015639f, ":tod_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 2.339867E-10f, ":tod_end_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -3.364144f, ":tod_start_hour");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -0.1289388f, ":type");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1.340638E+17f, ":unlock_id");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, -1559.469f, ":unlock_level");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.333002E-20f, ":weather");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1206482.f_455, 1.348639E-12f, ":xml");
}

void func_67()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 18)
	{
		func_82(iVar0);
		iVar0++;
	}
}

bool func_68(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_69(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_70(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] == 0 && Global_1206482.f_78[iParam0 /*20*/] == 0)
	{
		return;
	}
	if (!func_83(iParam0))
	{
		return;
	}
	switch (Global_1206482.f_78[iParam0 /*20*/])
	{
		case 0:
			func_84(iParam0);
			break;
		case 1:
			func_85(iParam0);
			break;
		case 2:
			func_86(iParam0);
			break;
		case 3:
			func_87(iParam0);
			break;
		case 4:
			func_88(iParam0);
			break;
		case 5:
			func_89(iParam0);
			break;
		case 6:
			func_90(iParam0);
			break;
	}
}

int func_71()
{
	if ((!SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[4]) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[4], false)) || !NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[4]))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[4]);
}

int func_72(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/];
}

void func_73(int iParam0, int iParam1)
{
	if (Global_1205923.f_1[iParam0 /*26*/] != iParam1)
	{
		Global_1205923.f_1[iParam0 /*26*/] = iParam1;
	}
}

struct<7> func_74(int iParam0)
{
	switch (iParam0)
	{
		case joaat("STANDARD"):
			return Global_1205923.f_210;
		case joaat("THEMED"):
			return Global_1205923.f_217;
		default:
			break;
	}
	return Global_1205923.f_210;
}

int func_75(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;

	iVar0 = (Param0 * (Param0.f_1 * (Param0.f_2 * (Param0.f_3 + 1 * Param0.f_4 + 1))));
	return iVar0;
}

bool func_76(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[21];
	struct<2> Var26[21];
	int iVar69;
	int iVar70;

	iVar0 = func_91();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1205923.f_226 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_92(iVar2);
	iVar3 = func_93(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_92(iVar2);
		if (*uParam0 == Global_1205923.f_224)
		{
		}
		else if (func_95(*uParam0, &(Var26[iVar69 /*2*/]), &(Var26[iVar69 /*2*/].f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return false;
	}
	iVar70 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return false;
	}
	*uParam0 = uVar4[iVar70];
	*uParam1 = Var26[iVar70 /*2*/];
	*uParam2 = Var26[iVar70 /*2*/].f_1;
	return true;
}

bool func_77(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4[21];
	struct<2> Var26[21];
	int iVar69;
	int iVar70;

	iVar0 = func_96();
	if (iVar0 == 0)
	{
		return false;
	}
	iVar1 = (Global_1205923.f_227 % iVar0);
	iVar2 = iVar1;
	*uParam0 = func_97(iVar2);
	iVar3 = func_98(iVar2);
	if (iVar3 > -1 && func_94(*uParam0, iVar3, uParam1, uParam2))
	{
		return true;
	}
	else if (func_95(*uParam0, uParam1, uParam2))
	{
		return true;
	}
	iVar2 = 0;
	while (iVar2 <= 20)
	{
		*uParam0 = func_97(iVar2);
		if (*uParam0 == Global_1205923.f_225)
		{
		}
		else if (func_95(*uParam0, &(Var26[iVar69 /*2*/]), &(Var26[iVar69 /*2*/].f_1)))
		{
			uVar4[iVar69] = *uParam0;
			iVar69++;
		}
		iVar2++;
	}
	if (iVar69 <= 0)
	{
		return false;
	}
	iVar70 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar69);
	if (iVar70 < 0 || iVar70 >= 21)
	{
		return false;
	}
	*uParam0 = uVar4[iVar70];
	*uParam1 = Var26[iVar70 /*2*/];
	*uParam2 = Var26[iVar70 /*2*/].f_1;
	return true;
}

int func_78(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<7> Var4;
	struct<5> Var11;
	struct<7> Var18;
	struct<5> Var25;

	if (func_71() != PLAYER::PLAYER_ID())
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = func_99(iParam0, iParam1, &iVar0);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_100(iParam0, iParam2);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_101(iParam3);
	if (iVar1 != 0)
	{
		return 0;
	}
	Var2 = { func_102(iParam0, iParam2, iParam3) };
	iVar1 = func_103(Var2);
	if (iVar1 == 14 && func_104(iParam0))
	{
		iParam2 = func_106(iParam0, func_105(iParam1));
		iParam3 = func_107(iParam0, iParam2);
		Var2 = { func_102(iParam0, iParam2, iParam3) };
		iVar1 = func_103(Var2);
	}
	if (iVar1 != 0)
	{
		return 0;
	}
	Global_1205923.f_1[iVar0 /*26*/] = 1;
	Global_1205923.f_1[iVar0 /*26*/].f_1 = iParam0;
	Global_1205923.f_1[iVar0 /*26*/].f_7 = iParam1;
	Global_1205923.f_1[iVar0 /*26*/].f_2 = iParam2;
	Global_1205923.f_1[iVar0 /*26*/].f_3 = iParam3;
	Global_1205923.f_1[iVar0 /*26*/].f_4 = iParam4;
	Global_1205923.f_1[iVar0 /*26*/].f_5 = { Var2 };
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var4);
	Var11.f_4 = 3;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var4, &Var11, &Var4);
	Global_1205923.f_1[iVar0 /*26*/].f_12 = { Var4 };
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var18);
	Var25.f_4 = 8;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var18, &Var25, &Var18);
	Global_1205923.f_1[iVar0 /*26*/].f_19 = { Var18 };
	return 1;
}

void func_79(int iParam0)
{
	bool bVar0;

	if (func_108(iParam0, 1))
	{
		if (func_109(Global_1206482.f_78[iParam0 /*20*/].f_3) != -4.537018E+10f)
		{
			func_73(iParam0, 5);
		}
		else if (func_110(iParam0, &bVar0))
		{
			if (bVar0)
			{
				func_73(iParam0, 6);
			}
			else
			{
				func_73(iParam0, 5);
			}
		}
	}
}

void func_80(int iParam0)
{
	struct<7> Var0;

	if (!func_111(iParam0, 1))
	{
		func_73(iParam0, 6);
		return;
	}
	if (func_108(iParam0, 8))
	{
		func_73(iParam0, 6);
		return;
	}
	if (!func_111(iParam0, 64))
	{
		CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
		if (func_56(Var0, Global_1205923.f_1[iParam0 /*26*/].f_19))
		{
			func_73(iParam0, 6);
		}
	}
}

void func_81(int iParam0)
{
	if (!func_111(iParam0, 1))
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1205923.f_1[iParam0 /*26*/].f_9.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Global_1205923.f_1[iParam0 /*26*/].f_9.f_1);
		}
		func_112(&(Global_1205923.f_1[iParam0 /*26*/]));
	}
}

void func_82(int iParam0)
{
	if (Global_1206482.f_1[iParam0 /*4*/] != 0)
	{
		return;
	}
	Global_1206482.f_1[iParam0 /*4*/] = func_113(iParam0);
	if (Global_1206482.f_1[iParam0 /*4*/] == 1020553f)
	{
		Global_1206482.f_1[iParam0 /*4*/].f_3 = func_114(iParam0);
	}
}

bool func_83(int iParam0)
{
	if (func_45(iParam0, 8) && Global_1206482.f_78[iParam0 /*20*/] < 6)
	{
		if (!func_115(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_116(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_117(&(Global_1206482.f_239[iParam0 /*26*/]), iParam0);
		}
		else
		{
			Global_1206482.f_78[iParam0 /*20*/].f_19++;
			if (Global_1206482.f_78[iParam0 /*20*/].f_19 > 120)
			{
				func_118(iParam0, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
				Global_1206482.f_78[iParam0 /*20*/].f_19 = 0;
			}
		}
		return false;
	}
	if (func_115(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (!func_119(Global_1205923.f_1[iParam0 /*26*/].f_5, Global_1206482.f_78[iParam0 /*20*/].f_7))
		{
			return false;
		}
		func_118(iParam0, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (func_120())
	{
		return false;
	}
	return true;
}

void func_84(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] > 0 && Global_1205923.f_1[iParam0 /*26*/] < 6)
	{
		func_121(iParam0, 1);
	}
}

void func_85(int iParam0)
{
	Vector3 vVar0;
	struct<5> Var3;
	struct<7> Var8;

	if (Global_1205923.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!func_115(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (Global_1205923.f_1[iParam0 /*26*/].f_1 != -1 && func_122(Global_1205923.f_1[iParam0 /*26*/].f_5))
		{
			if ((func_123(&Var3, Global_1205923.f_1[iParam0 /*26*/].f_1) && func_124(&Var3)) && func_125(&Var3, Global_1205923.f_1[iParam0 /*26*/].f_2))
			{
				func_126(Var3, 5.3786E+35f, &vVar0, 1);
			}
			Global_1206482.f_78[iParam0 /*20*/].f_3 = Global_1205923.f_1[iParam0 /*26*/].f_1;
			Global_1206482.f_78[iParam0 /*20*/].f_7 = { Global_1205923.f_1[iParam0 /*26*/].f_5 };
			Global_1206482.f_78[iParam0 /*20*/].f_9 = Global_1205923.f_1[iParam0 /*26*/].f_11;
			func_116(iParam0, 1, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
	}
	else if (Global_1205923.f_1[iParam0 /*26*/] > 1)
	{
		if (func_109(Global_1206482.f_78[iParam0 /*20*/].f_3) != -4.537018E+10f)
		{
			CLOCK::_GET_POSIX_TIME_STRUCT(&Var8);
			if (func_56(Var8, Global_1205923.f_1[iParam0 /*26*/].f_12))
			{
				func_121(iParam0, 6);
				return;
			}
			func_121(iParam0, 2);
		}
		else
		{
			func_15(iParam0, 1024);
			func_121(iParam0, 4);
		}
	}
}

void func_86(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && Global_1205923.f_1[iParam0 /*26*/] > 2)
	{
		func_121(iParam0, 3);
	}
}

void func_87(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] >= 6)
	{
		if (func_45(iParam0, 512))
		{
			func_127(1024);
		}
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	if (!func_45(iParam0, 512))
	{
		func_129(iParam0);
	}
	else if (!func_115(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_130())
		{
			func_116(iParam0, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_121(iParam0, 4);
		}
	}
}

void func_88(int iParam0)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;
	struct<10> Var14;
	int iVar24;
	int iVar25;

	if (Global_1205923.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
	iVar0 = Global_1205923.f_1[iParam0 /*26*/].f_1;
	if (!func_123(&Var1, iVar0))
	{
		return;
	}
	func_131(Var1, -3.43081E+24f, &uVar6, 1);
	SCRIPTS::REQUEST_SCRIPT(&uVar6);
	if (!SCRIPTS::HAS_SCRIPT_LOADED(&uVar6))
	{
		return;
	}
	Var14 = -1;
	Var14.f_1 = -1;
	Var14.f_5 = 255;
	Var14.f_7 = -1;
	Var14.f_7.f_1 = -1;
	Var14.f_1 = iVar0;
	Var14 = iParam0;
	Var14.f_5 = Global_1205923.f_1[iParam0 /*26*/].f_7;
	Var14.f_2 = Global_1205923.f_1[iParam0 /*26*/].f_2;
	Var14.f_3 = Global_1205923.f_1[iParam0 /*26*/].f_3;
	Var14.f_4 = Global_1205923.f_1[iParam0 /*26*/].f_4;
	Var14.f_7 = { Global_1206482.f_78[iParam0 /*20*/].f_7 };
	Var14.f_9 = Global_1206482.f_1[iVar0 /*4*/];
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Var14.f_5))
	{
		Var14.f_6 = GANG::NETWORK_GET_GANG_ID(Var14.f_5);
	}
	iVar24 = 1024;
	if (func_132(Var1, 4.295385E+11f, &iVar25, 0))
	{
		iVar24 = func_133(iVar25);
	}
	if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(iVar24) == 0)
	{
		return;
	}
	if (func_134(Var14.f_7, 0, 128))
	{
		return;
	}
	if (func_135(Global_1205923.f_1[iParam0 /*26*/].f_7, Global_1205923.f_1[iParam0 /*26*/].f_1))
	{
		Global_1206482.f_78[iParam0 /*20*/].f_4 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&uVar6, &Var14, 10, iVar24);
	}
	func_121(iParam0, 5);
	SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&uVar6);
}

void func_89(int iParam0)
{
	if (Global_1205923.f_1[iParam0 /*26*/] >= 6)
	{
		func_121(iParam0, 6);
		return;
	}
	if (!SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_4))
	{
		func_121(iParam0, 6);
		return;
	}
	if (func_45(iParam0, 1) && !SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_5))
	{
		func_121(iParam0, 6);
		return;
	}
	func_128(iParam0);
}

void func_90(int iParam0)
{
	if (!func_115(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_116(iParam0, 8, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_4))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1206482.f_78[iParam0 /*20*/].f_4, false))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iParam0 /*20*/].f_4);
		}
	}
	else if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iParam0 /*20*/].f_5))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(Global_1206482.f_78[iParam0 /*20*/].f_5, false))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iParam0 /*20*/].f_5);
		}
	}
	else
	{
		if (func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_118(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		}
		if (Global_1205923.f_1[iParam0 /*26*/] == 6 || !func_119(Global_1205923.f_1[iParam0 /*26*/].f_5, Global_1206482.f_78[iParam0 /*20*/].f_7))
		{
			func_16(&(Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam0]));
			func_17(&(Global_1206482.f_78[iParam0 /*20*/]));
		}
	}
}

int func_91()
{
	if (Global_1901671.f_316.f_189 == -1)
	{
		return 0;
	}
	else if (Global_1901671.f_316.f_190 == -1)
	{
		return 1;
	}
	else if (Global_1901671.f_316.f_191 == -1)
	{
		return 2;
	}
	else if (Global_1901671.f_316.f_192 == -1)
	{
		return 3;
	}
	else if (Global_1901671.f_316.f_193 == -1)
	{
		return 4;
	}
	else if (Global_1901671.f_316.f_194 == -1)
	{
		return 5;
	}
	else if (Global_1901671.f_316.f_195 == -1)
	{
		return 6;
	}
	else if (Global_1901671.f_316.f_196 == -1)
	{
		return 7;
	}
	else if (Global_1901671.f_316.f_197 == -1)
	{
		return 8;
	}
	else if (Global_1901671.f_316.f_198 == -1)
	{
		return 9;
	}
	else if (Global_1901671.f_316.f_199 == -1)
	{
		return 10;
	}
	else if (Global_1901671.f_316.f_200 == -1)
	{
		return 11;
	}
	else if (Global_1901671.f_316.f_201 == -1)
	{
		return 12;
	}
	else if (Global_1901671.f_316.f_202 == -1)
	{
		return 13;
	}
	else if (Global_1901671.f_316.f_203 == -1)
	{
		return 14;
	}
	else if (Global_1901671.f_316.f_204 == -1)
	{
		return 15;
	}
	else if (Global_1901671.f_316.f_205 == -1)
	{
		return 16;
	}
	else if (Global_1901671.f_316.f_206 == -1)
	{
		return 17;
	}
	else if (Global_1901671.f_316.f_207 == -1)
	{
		return 18;
	}
	else if (Global_1901671.f_316.f_208 == -1)
	{
		return 19;
	}
	else if (Global_1901671.f_316.f_209 == -1)
	{
		return 20;
	}
	return 21;
}

int func_92(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_316.f_189;
		case 1:
			return Global_1901671.f_316.f_190;
		case 2:
			return Global_1901671.f_316.f_191;
		case 3:
			return Global_1901671.f_316.f_192;
		case 4:
			return Global_1901671.f_316.f_193;
		case 5:
			return Global_1901671.f_316.f_194;
		case 6:
			return Global_1901671.f_316.f_195;
		case 7:
			return Global_1901671.f_316.f_196;
		case 8:
			return Global_1901671.f_316.f_197;
		case 9:
			return Global_1901671.f_316.f_198;
		case 10:
			return Global_1901671.f_316.f_199;
		case 11:
			return Global_1901671.f_316.f_200;
		case 12:
			return Global_1901671.f_316.f_201;
		case 13:
			return Global_1901671.f_316.f_202;
		case 14:
			return Global_1901671.f_316.f_203;
		case 15:
			return Global_1901671.f_316.f_204;
		case 16:
			return Global_1901671.f_316.f_205;
		case 17:
			return Global_1901671.f_316.f_206;
		case 18:
			return Global_1901671.f_316.f_207;
		case 19:
			return Global_1901671.f_316.f_208;
		case 20:
			return Global_1901671.f_316.f_209;
		default:
			break;
	}
	return -1;
}

int func_93(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_316.f_211;
		case 1:
			return Global_1901671.f_316.f_212;
		case 2:
			return Global_1901671.f_316.f_213;
		case 3:
			return Global_1901671.f_316.f_214;
		case 4:
			return Global_1901671.f_316.f_215;
		case 5:
			return Global_1901671.f_316.f_216;
		case 6:
			return Global_1901671.f_316.f_217;
		case 7:
			return Global_1901671.f_316.f_218;
		case 8:
			return Global_1901671.f_316.f_219;
		case 9:
			return Global_1901671.f_316.f_220;
		case 10:
			return Global_1901671.f_316.f_221;
		case 11:
			return Global_1901671.f_316.f_222;
		case 12:
			return Global_1901671.f_316.f_223;
		case 13:
			return Global_1901671.f_316.f_224;
		case 14:
			return Global_1901671.f_316.f_225;
		case 15:
			return Global_1901671.f_316.f_226;
		case 16:
			return Global_1901671.f_316.f_227;
		case 17:
			return Global_1901671.f_316.f_228;
		case 18:
			return Global_1901671.f_316.f_229;
		case 19:
			return Global_1901671.f_316.f_230;
		case 20:
			return Global_1901671.f_316.f_231;
		default:
			break;
	}
	return -1;
}

bool func_94(int iParam0, int iParam1, var uParam2, var uParam3)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	struct<5> Var15;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	int iVar27;
	int iVar28;

	if (func_123(&Var0, iParam0))
	{
		Var5 = { Var0 };
		if (func_136(&Var5))
		{
			if (func_137(&Var5, iParam1))
			{
				func_132(Var5, -2.361417E-11f, uParam3, 1);
				func_132(Var5, -1421.464f, &iVar27, 0);
			}
		}
	}
	if (*uParam3 == 0)
	{
		return false;
	}
	if (func_124(&Var0))
	{
		iVar21 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var0, Var0.f_1);
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -2.361417E-11f, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -1421.464f, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
		if (iVar25 == 0)
		{
			return false;
		}
		iVar26 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar25);
		iVar25 = 0;
		iVar23 = 0;
		while (iVar23 <= (iVar21 - 1))
		{
			Var15 = { Var0 };
			if (func_138(&Var15, iVar23))
			{
				Var5 = { Var15 };
				if (func_136(&Var5))
				{
					iVar20 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var5, Var5.f_1);
					if (iVar20 > 0)
					{
						iVar24 = 0;
						while (iVar24 <= (iVar20 - 1))
						{
							Var10 = { Var5 };
							if (func_137(&Var10, iVar24))
							{
								func_132(Var10, -2.361417E-11f, &iVar22, 1);
								iVar28 = 0;
								if (iVar27 != 0)
								{
									func_132(Var10, -1421.464f, &iVar28, 0);
								}
								if (iVar22 == *uParam3 || (iVar27 != 0 && iVar27 == iVar28))
								{
									if (iVar25 == iVar26)
									{
										*uParam3 = iVar22;
										func_132(Var15, -2.361417E-11f, uParam2, 1);
										return true;
									}
									iVar25++;
								}
							}
							iVar24++;
						}
					}
				}
			}
			iVar23++;
		}
	}
	return false;
}

bool func_95(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	struct<5> Var11;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	struct<2> Var21;
	bool bVar23;

	iVar0 = -1;
	if (func_99(iParam0, PLAYER::PLAYER_ID(), &iVar0) == 0)
	{
		*uParam1 = 0;
		if (func_123(&Var1, iParam0) && func_124(&Var1))
		{
			iVar16 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
			iVar17 = 0;
			iVar18 = 0;
			iVar19 = 0;
			iVar20 = 0;
			Var21 = -1;
			Var21.f_1 = -1;
			while (!bVar23)
			{
				if (iVar18 > 99)
				{
					return false;
				}
				iVar17 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar16);
				Var6 = { Var1 };
				if (func_138(&Var6, iVar17))
				{
					func_132(Var6, -2.361417E-11f, uParam1, 1);
					if (func_100(iParam0, *uParam1) == 0 && func_136(&Var6))
					{
						iVar20 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var6, Var6.f_1);
						iVar19 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar20);
						Var11 = { Var6 };
						if (func_137(&Var11, iVar19))
						{
							func_132(Var11, -2.361417E-11f, uParam2, 1);
							if (func_101(*uParam2) == 0)
							{
								Var21 = { func_102(iParam0, *uParam1, *uParam2) };
								if (func_103(Var21) == 0)
								{
									bVar23 = true;
								}
							}
						}
					}
				}
				iVar18++;
			}
		}
	}
	return true;
}

int func_96()
{
	if (Global_1901671.f_316.f_232 == -1)
	{
		return 0;
	}
	else if (Global_1901671.f_316.f_233 == -1)
	{
		return 1;
	}
	else if (Global_1901671.f_316.f_234 == -1)
	{
		return 2;
	}
	else if (Global_1901671.f_316.f_235 == -1)
	{
		return 3;
	}
	else if (Global_1901671.f_316.f_236 == -1)
	{
		return 4;
	}
	else if (Global_1901671.f_316.f_237 == -1)
	{
		return 5;
	}
	else if (Global_1901671.f_316.f_238 == -1)
	{
		return 6;
	}
	else if (Global_1901671.f_316.f_239 == -1)
	{
		return 7;
	}
	else if (Global_1901671.f_316.f_240 == -1)
	{
		return 8;
	}
	else if (Global_1901671.f_316.f_241 == -1)
	{
		return 9;
	}
	else if (Global_1901671.f_316.f_242 == -1)
	{
		return 10;
	}
	else if (Global_1901671.f_316.f_243 == -1)
	{
		return 11;
	}
	else if (Global_1901671.f_316.f_244 == -1)
	{
		return 12;
	}
	else if (Global_1901671.f_316.f_245 == -1)
	{
		return 13;
	}
	else if (Global_1901671.f_316.f_246 == -1)
	{
		return 14;
	}
	else if (Global_1901671.f_316.f_247 == -1)
	{
		return 15;
	}
	else if (Global_1901671.f_316.f_248 == -1)
	{
		return 16;
	}
	else if (Global_1901671.f_316.f_249 == -1)
	{
		return 17;
	}
	else if (Global_1901671.f_316.f_250 == -1)
	{
		return 18;
	}
	else if (Global_1901671.f_316.f_251 == -1)
	{
		return 19;
	}
	else if (Global_1901671.f_316.f_252 == -1)
	{
		return 20;
	}
	return 21;
}

int func_97(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_316.f_232 + 8;
		case 1:
			return Global_1901671.f_316.f_233 + 8;
		case 2:
			return Global_1901671.f_316.f_234 + 8;
		case 3:
			return Global_1901671.f_316.f_235 + 8;
		case 4:
			return Global_1901671.f_316.f_236 + 8;
		case 5:
			return Global_1901671.f_316.f_237 + 8;
		case 6:
			return Global_1901671.f_316.f_238 + 8;
		case 7:
			return Global_1901671.f_316.f_239 + 8;
		case 8:
			return Global_1901671.f_316.f_240 + 8;
		case 9:
			return Global_1901671.f_316.f_241 + 8;
		case 10:
			return Global_1901671.f_316.f_242 + 8;
		case 11:
			return Global_1901671.f_316.f_243 + 8;
		case 12:
			return Global_1901671.f_316.f_244 + 8;
		case 13:
			return Global_1901671.f_316.f_245 + 8;
		case 14:
			return Global_1901671.f_316.f_246 + 8;
		case 15:
			return Global_1901671.f_316.f_247 + 8;
		case 16:
			return Global_1901671.f_316.f_248 + 8;
		case 17:
			return Global_1901671.f_316.f_249 + 8;
		case 18:
			return Global_1901671.f_316.f_250 + 8;
		case 19:
			return Global_1901671.f_316.f_251 + 8;
		case 20:
			return Global_1901671.f_316.f_252 + 8;
		default:
			break;
	}
	return -1;
}

int func_98(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1901671.f_316.f_253;
		case 1:
			return Global_1901671.f_316.f_254;
		case 2:
			return Global_1901671.f_316.f_255;
		case 3:
			return Global_1901671.f_316.f_256;
		case 4:
			return Global_1901671.f_316.f_257;
		case 5:
			return Global_1901671.f_316.f_258;
		case 6:
			return Global_1901671.f_316.f_259;
		case 7:
			return Global_1901671.f_316.f_260;
		case 8:
			return Global_1901671.f_316.f_261;
		case 9:
			return Global_1901671.f_316.f_262;
		case 10:
			return Global_1901671.f_316.f_263;
		case 11:
			return Global_1901671.f_316.f_264;
		case 12:
			return Global_1901671.f_316.f_265;
		case 13:
			return Global_1901671.f_316.f_266;
		case 14:
			return Global_1901671.f_316.f_267;
		case 15:
			return Global_1901671.f_316.f_268;
		case 16:
			return Global_1901671.f_316.f_269;
		case 17:
			return Global_1901671.f_316.f_270;
		case 18:
			return Global_1901671.f_316.f_271;
		case 19:
			return Global_1901671.f_316.f_272;
		case 20:
			return Global_1901671.f_316.f_273;
		default:
			break;
	}
	return -1;
}

int func_99(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;

	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 3;
	}
	if (func_109(iParam0) == -4.537018E+10f)
	{
		if (func_139(iParam1, 1))
		{
			return 9;
		}
		iVar0 = GANG::NETWORK_GET_GANG_ID(iParam1);
		if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
		{
			return 7;
		}
		if (!func_140(iVar0))
		{
			return 8;
		}
		iVar1 = 2;
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) < iVar1)
		{
			return 10;
		}
		if (func_141(iParam1, 1, 0, 1))
		{
			return 17;
		}
	}
	*iParam2 = func_142(Global_1206482.f_1[iParam0 /*4*/]);
	if (*iParam2 == -1)
	{
		return 12;
	}
	if (Global_1205923.f_1[*iParam2 /*26*/].f_1 != -1)
	{
		return 13;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_123(&Var4, iParam0))
	{
		func_143(Var4, -3.364144f, &iVar2, 0);
		func_143(Var4, 2.339867E-10f, &iVar3, 0);
	}
	iVar9 = func_145(func_144());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 11;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 11;
	}
	return 0;
}

int func_100(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam1 == 0)
	{
		return 4;
	}
	if (func_109(iParam0) == -4.537018E+10f)
	{
		vVar0 = { func_146(iParam0, iParam1) };
		if (!func_147(vVar0) && (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar0, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vVar0, 0, 0, 0)))
		{
			return 16;
		}
	}
	return 0;
}

int func_101(int iParam0)
{
	if (iParam0 == 0)
	{
		return 5;
	}
	return 0;
}

struct<2> func_102(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;
	struct<4> Var6;

	if ((((func_123(&Var0, iParam0) && func_124(&Var0)) && func_125(&Var0, iParam1)) && func_136(&Var0)) && func_148(&Var0, iParam2))
	{
		func_132(Var0, -1.340638E+17f, &uVar5, 1);
		if (func_149(6, uVar5, &Var6))
		{
			return func_150(Var6.f_3, 6);
		}
	}
	return func_151();
}

int func_103(struct<2> Param0)
{
	if (!func_122(Param0))
	{
		func_153(func_152(Param0), 8, 6, 255);
		return 6;
	}
	else if (func_154(Param0) != -1)
	{
		func_153(func_152(Param0), 8, 14, 255);
		return 14;
	}
	else if (!func_155(Param0))
	{
		func_153(func_152(Param0), 8, 21, 255);
		return 21;
	}
	else if (!func_156(Param0))
	{
		func_153(func_152(Param0), 8, 22, 255);
		return 22;
	}
	else if (func_130())
	{
		func_153(func_152(Param0), 8, 15, 255);
		return 15;
	}
	return 0;
}

bool func_104(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

Vector3 func_105(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_106(int iParam0, vector3 vParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	iVar0 = 0;
	if (func_123(&Var1, iParam0) && func_124(&Var1))
	{
		iVar11 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
		fVar18 = 1232348158;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_138(&Var6, iVar23))
			{
				iVar20 = 0;
				func_132(Var6, -2.361417E-11f, &iVar20, 1);
				if (func_157(iParam0, iVar20) == -1 && func_100(iParam0, iVar20) == 0)
				{
					func_126(Var6, 5.3786E+35f, &vVar12, 1);
					if (func_147(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = BUILTIN::VDIST(vParam1, vVar12);
					}
					fVar15 = func_158(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 1008981770));
					}
					uVar19 = func_159(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -2.19652E+23f, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uVar19, iVar21))
						{
							iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22) && !GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_107(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	if (((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1)) && func_136(&Var1))
	{
		iVar6 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
		iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar6);
		if (func_137(&Var1, iVar7))
		{
			func_132(Var1, -2.361417E-11f, &iVar0, 1);
		}
	}
	return iVar0;
}

bool func_108(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && !func_65(Global_1206151[iVar0 /*10*/][iParam0], iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

int func_109(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

bool func_110(int iParam0, var uParam1)
{
	vector3 vVar0;
	struct<8> Var3;

	vVar0 = { func_146(Global_1205923.f_1[iParam0 /*26*/].f_1, Global_1205923.f_1[iParam0 /*26*/].f_2) };
	if (func_147(vVar0))
	{
		return true;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Global_1205923.f_1[iParam0 /*26*/].f_9))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vVar0, 100f, false, 0, MISC::GET_HASH_KEY("NET_TRAIN")))
		{
			*uParam1 = 1;
			return true;
		}
		Var3 = { vVar0 };
		Var3.f_4 = 1120403456; /* Float: 100f */
		Var3.f_6 = MISC::GET_HASH_KEY("NET_FME_MANAGER");
		Var3.f_7 = Global_1205923.f_1[iParam0 /*26*/].f_4;
		Var3.f_5 = 129;
		Global_1205923.f_1[iParam0 /*26*/].f_9 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var3);
	}
	switch (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Global_1205923.f_1[iParam0 /*26*/].f_9))
	{
		case 3:
			Global_1205923.f_1[iParam0 /*26*/].f_9.f_1 = VOLUME::_0x351D71B8B72B858B(Global_1205923.f_1[iParam0 /*26*/].f_9);
			return true;
		case 4:
			*uParam1 = 1;
			Global_1205923.f_1[iParam0 /*26*/].f_9 = 0;
			return true;
		default:
			break;
	}
	return false;
}

bool func_111(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_65(Global_1206151[iVar0 /*10*/][iParam0], iParam1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_112(var uParam0)
{
	struct<26> Var0;

	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_7 = 255;
	*uParam0 = { Var0 };
}

int func_113(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -0.1289388f, &iVar0, 1);
	}
	return iVar0;
}

int func_114(int iParam0)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 4;
	if (func_123(&Var1, iParam0))
	{
		func_132(Var1, -1559.469f, &iVar0, 0);
	}
	return iVar0;
}

bool func_115(int iParam0, int iParam1, int iParam2)
{
	return func_65(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

void func_116(int iParam0, int iParam1, int iParam2)
{
	func_35(&(Global_1206151[iParam2 /*10*/][iParam0]), iParam1);
}

void func_117(var uParam0, int iParam1)
{
	struct<12> Var0;

	if (func_71() == PLAYER::PLAYER_ID())
	{
		func_160(uParam0, iParam1, PLAYER::PLAYER_ID());
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 2;
		Var0.f_11 = { *uParam0 };
		Var0.f_9 = iParam1;
		func_162(&Var0, func_161(0, 8));
	}
}

void func_118(int iParam0, int iParam1, int iParam2)
{
	func_163(&(Global_1206151[iParam2 /*10*/][iParam0]), iParam1);
}

bool func_119(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_120()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_45(iVar0, 8))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_121(int iParam0, int iParam1)
{
	if (Global_1206482.f_78[iParam0 /*20*/] != iParam1)
	{
		Global_1206482.f_78[iParam0 /*20*/] = iParam1;
	}
}

bool func_122(struct<2> Param0)
{
	if (!func_164(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_165(Param0))
	{
		return false;
	}
	return true;
}

bool func_123(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_166(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_124(bool bParam0)
{
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -8.04068E-26f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_125(bool bParam0, int iParam1)
{
	bParam0->f_2 = 1.265881E-22f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_126(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

void func_127(int iParam0)
{
	func_69(&(Global_1572887.f_72.f_16), iParam0);
}

void func_128(int iParam0)
{
	if (!func_115(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && func_45(iParam0, 32))
	{
		func_116(iParam0, 64, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

void func_129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (func_45(iParam0, 512))
	{
		return;
	}
	if (!func_45(iParam0, 32))
	{
		return;
	}
	if (func_60())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (func_130())
	{
		func_15(iParam0, 512);
		func_15(iParam0, 1024);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
	{
		return;
	}
	iVar1 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0);
	if (iVar1 == 1)
	{
		func_167(iParam0);
	}
	else
	{
		iVar2 = func_168(iParam0, 64, iVar0);
		if (iVar2 == iVar1)
		{
			if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				func_167(iParam0);
			}
		}
		else if (!func_169(&(Global_1206482.f_78[iParam0 /*20*/].f_16)))
		{
			func_170(&(Global_1206482.f_78[iParam0 /*20*/].f_16), 1);
		}
		else if (func_171(&(Global_1206482.f_78[iParam0 /*20*/].f_16)) > 15000)
		{
			if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				iVar3 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
				if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) || !func_115(iParam0, 64, iVar3))
				{
					func_172(1);
				}
			}
			else
			{
				iVar5 = 0;
				iVar5 = 0;
				while (iVar5 <= 31)
				{
					iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
					if (((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4) && iVar4 != PLAYER::PLAYER_ID()) && GANG::_NETWORK_IS_GANG_MEMBER(iVar0, iVar4)) && !func_115(iParam0, 64, iVar5))
					{
						func_173(iVar4, 0, 120);
					}
					iVar5++;
				}
			}
		}
	}
}

bool func_130()
{
	return func_68(Global_1572887.f_8, 1);
}

int func_131(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(sParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_132(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_133(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MICRO"):
			return 128;
		case joaat("NET_FETCH_HIDEOUT_LEADER"):
			return 200;
		case joaat("STABLE_MOUNT"):
			return 400;
		case joaat("MINI"):
			return 512;
		case joaat("CAMP_DOG"):
			return 600;
		case joaat("ABILITY_CARD_EVENTS"):
			return 800;
		case joaat("DEFAULT"):
			return 1024;
		case joaat("HUB_EVENTS"):
			return 1026;
		case joaat("UPDATE"):
			return 1300;
		case joaat("MATCHMAKING"):
			return 1301;
		case joaat("PLAYER_MENU_SCRIPT"):
			return 1400;
		case joaat("POSSE_VERSUS_RACE"):
			return 1600;
		case joaat("POSSE_FEUD"):
			return 1800;
		case joaat("PAUSE_MENU_SCRIPT"):
			return 2000;
		case joaat("SAVE_MENU_EVENTS"):
			return 2024;
		case joaat("SATCHEL_EVENTS"):
			return 2025;
		case joaat("MAP_EVENTS"):
			return 2026;
		case joaat("SHOP_EVENTS"):
			return 2027;
		case joaat("BACKGROUND_SCRIPT"):
			return 2047;
		case joaat("ROLE_PROGRESSION_EVENTS"):
			return 2048;
		case joaat("REWARDS_EVENTS"):
			return 2549;
		case joaat("NET_SYSTEM_EXTENDED"):
			return 2050;
		case joaat("NET_CUTSCENE"):
			return 2051;
		case joaat("NET_BEAT"):
			return 2452;
		case joaat("COUPONS_EVENTS"):
			return 2053;
		case joaat("FME_PV_SMALL"):
			return 3000;
		case joaat("FME_THM_SMALL"):
			return 3001;
		case joaat("FME_STD_SMALL"):
			return 3002;
		case joaat("CAMPWORKS"):
			return 3081;
		case joaat("MP_MISSION_DOWNLOADER"):
			return 3088;
		case joaat("NET_GUN_FOR_HIRE_ONLINE"):
			return 3090;
		case joaat("NET_BEAT_MANAGER"):
			return 3500;
		case joaat("SCRIPT_XML"):
			return 4592;
		case joaat("PAUSE_MENU_EVENT_SCRIPT"):
			return 4700;
		case joaat("CAMP"):
			return 5000;
		case joaat("STRANGER_MISSION_NON_FETCH"):
			return 5001;
		case joaat("DB_MEGA"):
			return 5400;
		case joaat("FME_PV_MEDIUM"):
			return 5500;
		case joaat("FME_THM_MEDIUM"):
			return 5501;
		case joaat("FME_STD_MEDIUM"):
			return 5502;
		case joaat("REGION"):
			return 5503;
		case joaat("SHOWS"):
			return 5504;
		case joaat("FISHING"):
			return 5505;
		case joaat("ENDFLOW"):
			return 5506;
		case joaat("MISSION_INTRO"):
			return 6000;
		case joaat("MINIGAME_INTRO"):
			return 6001;
		case joaat("NET_MAIN"):
			return 6002;
		case joaat("SHOP"):
			return 6005;
		case joaat("NET_GUN_FOR_HIRE_OFFLINE"):
			return 6010;
		case joaat("MINIGAME"):
			return 6500;
		case joaat("CAMP_ITEM"):
			return 6700;
		case joaat("FME_PV_LARGE"):
			return 7000;
		case joaat("FME_THM_LARGE"):
			return 7001;
		case joaat("FME_STD_LARGE"):
			return 7002;
		case joaat("MISSION_TUTORIAL"):
			return 7300;
		case joaat("AUTOSTART"):
			return 7301;
		case joaat("STRANGER_MISSION_FETCH"):
			return 10000;
		case joaat("MP_MISSION_LOBBY"):
			return 10001;
		case joaat("CHARACTER_REROLL"):
			return 10003;
		case joaat("MP_UGC_TRANSITION"):
			return 14335;
		case joaat("TRANSITION"):
			return 25500;
		case joaat("MISSION_CREATOR"):
			return 40500;
		case joaat("MISSION"):
			return 45000;
		case joaat("INSTANCED_CONTENT"):
			return 75000;
		case joaat("NET_BACKGROUND"):
			return 1631;
		case joaat("NET_MOONSHINE_PROPERTY"):
			return 3982;
		case joaat("SOAK_TEST"):
			return 4088;
		case joaat("NETWORK_BOT"):
			return 4096;
			return 4080;
			return 50000;
			return 65536;
			return 32768;
			return 129;
			return 0;
		}

bool func_134(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_122(Global_1051268) && !func_119(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_174(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_175(iParam3, 255))
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
	if (func_176())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_122(Global_1051268))
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

bool func_135(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 15:
		case 16:
		case 17:
			return Global_1295619.f_10 == GANG::NETWORK_GET_GANG_ID(iParam0);
		default:
			break;
	}
	return true;
}

bool func_136(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_137(bool bParam0, int iParam1)
{
	bParam0->f_2 = 9.249405E+14f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_138(bool bParam0, int iParam1)
{
	bParam0->f_2 = 1.928595E+18f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_139(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1205923.f_1[iVar1 /*26*/].f_1 != -1 && func_115(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1206482.f_78[iVar1 /*20*/] >= 2)
					{
						return true;
					}
				}
				else if (Global_1206482.f_78[iVar1 /*20*/] >= 5)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

bool func_140(int iParam0)
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
			Var2 = { func_177(iVar0) };
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

int func_141(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_178(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::ARE_WITNESSES_ACTIVE(iParam0) || LAW::_ARE_INVESTIGATORS_ACTIVE(iParam0, false, 0))
		{
			if (bParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_142(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (iParam0)
	{
		case joaat("STANDARD"):
			iVar0 = 0;
			iVar1 = 0;
			break;
		case joaat("THEMED"):
			iVar0 = 1;
			iVar1 = 1;
			break;
		case joaat("POSSE_VERSUS"):
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (Global_1205923.f_1[iVar2 /*26*/] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_143(vector3 vParam0, int iParam3, var uParam4, float fParam5, int* iParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_144()
{
	return Global_1902565;
}

int func_145(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

Vector3 func_146(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_123(&Var3, iParam0) && func_124(&Var3)) && func_125(&Var3, iParam1))
	{
		func_126(Var3, 5.3786E+35f, &vVar0, 0);
	}
	return vVar0;
}

bool func_147(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_148(bool bParam0, int iParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_149(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_179(iParam0))
	{
		return false;
	}
	if (func_180(iParam0, uParam1, &uVar0))
	{
		func_181(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

struct<2> func_150(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573), func_165(iParam1));
			break;
		case 3:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_602), func_165(iParam1));
			break;
		case 4:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_2104), func_165(iParam1));
			break;
		case 5:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_12606), func_165(iParam1));
			break;
		case 6:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_12908), func_165(iParam1));
			break;
		case 7:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_15910), func_165(iParam1));
			break;
		case 8:
			Var0.f_1 = func_182(iParam0, &(Global_1072759.f_573.f_16512), func_165(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_151();
	}
	return Var0;
}

struct<2> func_151()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_152(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_183(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_153(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_184(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

int func_154(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119(Global_1205923.f_1[iVar0 /*26*/].f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_155(struct<2> Param0)
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_152(Param0));
}

bool func_156(struct<2> Param0)
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_152(Param0));
}

int func_157(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Global_1205923.f_1[iVar0 /*26*/].f_1 == iParam0 && Global_1205923.f_1[iVar0 /*26*/].f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

float func_158(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = 1128792064; /* Float: 200f */
	if ((func_123(&Var1, iParam0) && func_124(&Var1)) && func_125(&Var1, iParam1))
	{
		func_185(Var1, 5266.862f, &fVar0, 0);
	}
	return fVar0;
}

var func_159(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_186() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_187());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_187());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_187());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_188(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_189(iVar2))
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
				if (iVar9 & 8192 != 0 && func_190(iVar2) != 1)
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
					if (!func_191(iVar10))
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

void func_160(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_71() != PLAYER::PLAYER_ID())
	{
		return;
	}
	iVar0 = func_154(uParam0->f_5);
	if (iVar0 != -1)
	{
		func_192(uParam0, iVar0, iParam1, iParam2);
		return;
	}
	iVar0 = func_142(func_109(uParam0->f_1));
	if (iVar0 != -1)
	{
		Global_1205923.f_1[iVar0 /*26*/] = { *uParam0 };
		func_192(uParam0, iVar0, iParam1, iParam2);
	}
	else
	{
		func_192(uParam0, -1, iParam1, iParam2);
	}
}

var func_161(int iParam0, int iParam1)
{
	return func_159(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_162(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 47, 5, &uParam1);
	func_193(uParam0);
}

void func_163(var uParam0, int iParam1)
{
	func_194(uParam0, iParam1);
}

bool func_164(int iParam0)
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

int func_165(int iParam0)
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

int func_166(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.302326E+22f;
		case 1:
			return 8.819231E+30f;
		case 2:
			return -8.423986E-11f;
		case 3:
			return 2.893486E+20f;
		case 4:
			return -1.396906E+17f;
		case 5:
			return -1629.817f;
		case 6:
			return -4.788236E-29f;
		case 15:
			return -2.762819E+17f;
		case 16:
			return 8.72967E-06f;
		case 17:
			return 1.393353E+14f;
		case 18:
			return -3.120739E-36f;
		case 8:
			return -1.066212E+19f;
		case 10:
			return NaNf;
		case 9:
			return 0.003490584f;
		case 11:
			return 2.547941E+33f;
		case 12:
			return -5.747956E-23f;
		case 13:
			return -7.517295E+37f;
		case 14:
			return 1.365207E+21f;
		case 7:
			return -5.421841E+33f;
		default:
			break;
	}
	return 0;
}

void func_167(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_45(iParam0, 512))
	{
		iVar0 = func_195(Global_1206482.f_78[iParam0 /*20*/].f_3, Global_1205923.f_1[iParam0 /*26*/].f_3);
		iVar1 = func_196(iVar0);
		if (func_197(3, 32, 0, iVar1, Global_1206482.f_78[iParam0 /*20*/].f_7, 2.524355E-29f, -1, 0, 0, 0))
		{
			if (func_169(&(Global_1206482.f_78[iParam0 /*20*/].f_16)))
			{
				func_198(&(Global_1206482.f_78[iParam0 /*20*/].f_16));
			}
		}
	}
}

int func_168(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam2))
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0) && GANG::_NETWORK_IS_GANG_MEMBER(iParam2, iVar0)) && func_65(Global_1206151[iVar2 /*10*/][iParam0], iParam1))
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

bool func_169(var uParam0)
{
	return func_199(*uParam0, 1);
}

void func_170(var uParam0, bool bParam1)
{
	if (bParam1 || !func_169(uParam0))
	{
		func_200(uParam0);
	}
}

int func_171(var uParam0)
{
	if (!func_169(uParam0))
	{
		return 0;
	}
	if (func_201(uParam0))
	{
		return uParam0->f_2;
	}
	return func_202(uParam0->f_1);
}

void func_172(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_69(&(Global_1203937.f_3), 32);
		func_69(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_69(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_69(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_69(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_69(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_69(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

int func_173(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (func_140(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_177(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar4);
			if (func_203(iVar4, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		GANG::_NETWORK_KICK_GANG_MEMBER(iParam0, iParam2);
	}
	return 1;
}

bool func_174(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_175(int iParam0, int iParam1)
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

bool func_176()
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
	if (!func_122(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_177(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_178(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940186.f_12)
	{
		if ((bParam2 || Global_1940186.f_13 > 0) || Global_1940186.f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940186.f_9 == 9.534398E+10f)
	{
		return 0;
	}
	if (Global_1940186.f_14 > 0 || (bParam2 && Global_1940186.f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940186.f_7)
		{
			if (bParam2 || Global_1940186.f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_179(int iParam0)
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

bool func_180(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_204(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_181(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_205(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_206(iVar0);
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
			uParam2->f_5 = func_207(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_208(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_209(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_210(iVar0);
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

int func_182(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if ((*uParam1)[iVar2 /*3*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if ((*uParam1)[iVar2 /*3*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

bool func_183(struct<2> Param0, bool bParam2)
{
	if (!func_122(Param0))
	{
		return false;
	}
	func_211(bParam2);
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

int func_184(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f;
		case 1:
			return 2f;
		case 2:
			return 3.689349E+19f;
		case 3:
			return 1.584563E+29f;
		case 4:
			return 1.038459E+34f;
		case 5:
			return 4.656613E-10f;
		case 7:
			return 3.051758E-05f;
		case 6:
			return 2.524355E-29f;
		case 8:
			return 3.85186E-34f;
		default:
			break;
	}
	return 0;
}

int func_185(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_186()
{
	return Global_1051645.f_12;
}

char* func_187()
{
	return "unnamed";
}

int func_188(int iParam0)
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

bool func_189(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_212(36, iParam0);
}

int func_190(int iParam0)
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

bool func_191(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_213(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_214(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

void func_192(var uParam0, int iParam1, int iParam2, int iParam3)
{
	struct<12> Var0;
	var uVar47;

	if (iParam3 == PLAYER::PLAYER_ID())
	{
		func_215(uParam0, iParam1, iParam2);
	}
	else
	{
		Var0.f_5 = -1;
		Var0.f_9 = -1;
		Var0.f_10 = -1;
		Var0.f_11.f_1 = -1;
		Var0.f_11.f_5 = -1;
		Var0.f_11.f_5.f_1 = -1;
		Var0.f_11.f_7 = 255;
		Var0.f_4 = 3;
		Var0.f_11 = { *uParam0 };
		Var0.f_10 = iParam1;
		Var0.f_9 = iParam2;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar47, iParam3);
		func_162(&Var0, uVar47);
	}
}

void func_193(var uParam0)
{
	if (uParam0->f_1 != 255)
	{
	}
	if (uParam0->f_11.f_7 != 255)
	{
	}
	if (uParam0->f_37 != 255)
	{
	}
}

void func_194(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_195(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 28;
	if ((func_123(&Var1, iParam0) && func_136(&Var1)) && func_148(&Var1, uParam1))
	{
		func_143(Var1, -1.968821E+09f, &iVar0, 1);
	}
	return iVar0;
}

int func_196(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return 32;
		case 12:
			return 34;
		case 16:
			return 36;
		case 20:
			return 38;
		case 28:
			return 42;
		default:
			break;
	}
	return 42;
}

bool func_197(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, float fParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar22[64];
	struct<51> Var30;

	if (!func_216(iParam2, iParam3))
	{
		return false;
	}
	if (func_60() && Global_1572887.f_72.f_40 != 9)
	{
		return false;
	}
	if (!func_217(Global_1295619.f_5))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_218(&Var0);
	func_219(iParam10, 1);
	func_220(iParam2, iParam3, iParam7, 1);
	func_221(Param4, 1);
	func_222(fParam6);
	func_223(iParam9);
	func_224();
	if ((func_122(Param4) && !func_225()) && Global_1220744 == -1)
	{
		func_226(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_227();
	}
	if (func_225())
	{
		func_228(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_229(2.524355E-29f))
		{
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
			{
				func_230(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var30 = 255;
			Var30.f_13 = NaNf;
			Var30.f_16.f_2 = -5.544348E+20f;
			Var30.f_16.f_4 = 3;
			Var30.f_21 = -1;
			Var30.f_25 = 1;
			Var30.f_26 = 1;
			Var30.f_27 = 1;
			Var30.f_28 = 32;
			Var30.f_29 = 1;
			Var30.f_30 = -2;
			Var30.f_42.f_5 = -1;
			Var30.f_48 = -1;
			Var30.f_48.f_1 = -1;
			Var30.f_50.f_3 = -1;
			func_231(&Var30, iParam3, -1, -1, 3);
			StringCopy(&cVar22, func_232(&(Var30.f_32), 4.808429E-35f), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_233(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_235(func_234(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &cVar22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}
	if ((!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_236(255, 0)) && !bParam8)
	{
		func_237("NM_MATCHMAKING_WARNING");
	}
	func_238(10);
	return true;
}

void func_198(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_199(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_200(var uParam0)
{
	func_239(uParam0, 0);
}

bool func_201(var uParam0)
{
	return func_199(*uParam0, 2);
}

int func_202(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_203(int iParam0, struct<2> Param1)
{
	struct<23> Var0;
	struct<2> Var63;
	bool bVar65;
	int iVar66;

	Var0.f_22 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return false;
	}
	Var63 = { func_240() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var63))
	{
		return false;
	}
	if (!func_241(Param1))
	{
		return false;
	}
	iVar66 = 0;
	while (iVar66 <= (Var0.f_21 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_22[iVar66 /*4*/]), &Param1))
		{
			bVar65 = true;
		}
		else
		{
			iVar66++;
		}
	}
	if (!bVar65)
	{
		return false;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

int func_204(int iParam0)
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

int func_205(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_242(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_206(int iParam0)
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

int func_207(int iParam0)
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

int func_208(int iParam0)
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

int func_209(int iParam0)
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

int func_210(int iParam0)
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

void func_211(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_212(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_243(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_23())
	{
		return func_243(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_243(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_213(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_214(int iParam0)
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
		func_244(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_245(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_215(var uParam0, int iParam1, int iParam2)
{
	func_246(iParam2, 8);
	func_118(iParam2, 16, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	Global_1206482.f_78[iParam2 /*20*/].f_19 = 0;
	if (iParam1 == -1)
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else if (!func_119(uParam0->f_5, Global_1206482.f_239[iParam2 /*26*/].f_5))
	{
		func_118(iParam2, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
		func_121(iParam2, 6);
	}
	else
	{
		Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam1] = Global_1206472[iParam2];
		if (iParam1 != iParam2)
		{
			Global_1206482.f_78[iParam1 /*20*/] = { Global_1206482.f_78[iParam2 /*20*/] };
			func_16(&(Global_1206151[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*10*/][iParam2]));
			func_17(&(Global_1206482.f_78[iParam2 /*20*/]));
		}
		func_116(iParam1, 32, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
}

bool func_216(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_217(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && !GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	return true;
}

void func_218(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), bParam0, 22);
}

void func_219(int iParam0, bool bParam1)
{
	Global_1572887.f_72.f_39 = iParam0;
	if (bParam1)
	{
		func_247();
	}
}

void func_220(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;
	if (bParam3)
	{
		func_247();
	}
}

void func_221(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_72.f_11 = { Param0 };
	if (bParam2)
	{
		func_247();
	}
}

void func_222(float fParam0)
{
	Global_1572887.f_72.f_15 = fParam0;
}

void func_223(int iParam0)
{
	Global_1572887.f_72.f_13 = iParam0;
}

void func_224()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Global_1572887.f_72.f_49 = { vVar1 };
}

bool func_225()
{
	if (func_234() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_226(struct<2> Param0)
{
	if (func_248())
	{
		return 0;
	}
	if (!func_122(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_227()
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
}

void func_228(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	iVar0 = func_249(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_250(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_251(iVar0);
	Var3 = { func_252(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &Var3));
}

bool func_229(int iParam0)
{
	return (Global_1572887.f_72.f_15 && iParam0) != 0;
}

int func_230(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_253();
	}
	if (!func_254(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_255(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_231(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_256(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_257(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_22), {Global_265213.f_4[iVar0 /*46*/]}, 3);
	uParam0->f_32 = { Global_265213.f_4[iVar0 /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[iVar0 /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[iVar0 /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[iVar0 /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[iVar0 /*8*/];
	uParam0->f_56 = { Global_265213.f_4[iVar0 /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[iVar0 /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[iVar0 /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[iVar0 /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[iVar0 /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[iVar0 /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[iVar0 /*46*/].f_15 };
	MemCopy(&(uParam0->f_3), {Global_265213.f_4[iVar0 /*46*/].f_4}, 8);
	func_258(&(Global_265213.f_4[iVar0 /*46*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_259(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_260(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_261(Global_265213.f_57505[iVar0 /*8*/]);
	vVar2 = { func_262(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_263(iVar1) };
	}
	else if (func_264(uParam0->f_12))
	{
		uParam0->f_48 = { func_266(func_265(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_267(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_268(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_268(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_269(uParam0->f_11) };
		if (!func_122(uParam0->f_48))
		{
			uParam0->f_48 = { func_268(func_270(uParam0->f_16.f_2)) };
		}
	}
	func_271(uParam0);
	func_256(uParam0, 4194304);
	return 1;
}

char* func_232(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_272(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

char* func_233(int iParam0)
{
	int iVar0;

	iVar0 = func_273(iParam0);
	if (iVar0 == Global_265189.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265189.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265189.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265189.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265189.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265189.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265189.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265189.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265189.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_234()
{
	return Global_1572887.f_72;
}

char* func_235(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_236(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_23();
	}
	else if (iParam0 == func_23())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1295619.f_9;
		}
	}
	if (!bVar0)
	{
		if (!Global_1295619.f_17[iParam0])
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam0]))
		{
			return false;
		}
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

int func_237(char* sParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(2, sParam0);
	iVar1 = func_274(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

void func_238(int iParam0)
{
	Global_1572887.f_72.f_40 = iParam0;
}

void func_239(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_275(uParam0, 1);
	func_276(uParam0, 2);
	uParam0->f_2 = 0;
}

struct<2> func_240()
{
	struct<2> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

bool func_241(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_242(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_277(iParam0, uParam1, &uVar0))
	{
		func_278(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_243(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_244(int iParam0)
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
	func_245(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_245(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_246(int iParam0, int iParam1)
{
	func_163(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

void func_247()
{
	int iVar0;

	if (func_18() == -1)
	{
		return;
	}
	iVar0 = Global_1295619;
	if (func_68(Global_1572887.f_8, 1))
	{
		func_69(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	else
	{
		func_279(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	Global_1056554[iVar0 /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[iVar0 /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[iVar0 /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[iVar0 /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[iVar0 /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[iVar0 /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[iVar0 /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;
	if (func_229(1024))
	{
		func_69(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
	else
	{
		func_279(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
}

bool func_248()
{
	return func_122(Global_1051268);
}

int func_249(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_119(Global_1206482.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_250(int iParam0)
{
	return Global_1206482.f_78[iParam0 /*20*/].f_3;
}

var func_251(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_252(int iParam0, int iParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_123(&Var8, iParam0) && func_136(&Var8)) && func_148(&Var8, iParam1)) && func_280(&Var8))
	{
		func_131(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

void func_253()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_254(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_282(bParam2, func_281(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_255(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

void func_256(var uParam0, int iParam1)
{
	uParam0->f_15 = (uParam0->f_15 || iParam1);
}

int func_257(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265213.f_4[iVar0 /*46*/].f_23 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_258(char* sParam0)
{
	StringCopy(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
}

bool func_259(int iParam0)
{
	if (func_283(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_260(int iParam0)
{
	if (func_284(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_261(int iParam0)
{
	int iVar0;

	if (func_18() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_285(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_262(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_286(&Var0))
	{
		return vVar5;
	}
	if (!func_287(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_287(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_288(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_287(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_287(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_288(&Var0, 1);
			if (!func_287(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_263(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_151();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_264(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_265(iParam0) != -1;
}

int func_265(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_289(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_266(int iParam0)
{
	return func_290(iParam0);
}

struct<2> func_267(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_286(&uVar0))
	{
		return func_151();
	}
	if (!func_287(&uVar0, 13, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_287(&uVar0, 17, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_287(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_151();
	}
	if (!func_287(&uVar0, 20, 0, 0, 1))
	{
		return func_151();
	}
	if (!func_287(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_151();
	}
	iVar5 = func_291(&uVar0);
	return func_268(iVar5);
}

struct<2> func_268(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_150(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_150(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_151();
}

struct<2> func_269(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_151();
	}
	if (!func_292(&uVar0, 7, iParam0, 3.536333E-36f))
	{
		return func_151();
	}
	func_181(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_151();
	}
	return func_150(Var5.f_3, Var5.f_4);
}

int func_270(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 0.007354699f;
		case 395262693:
			return -1.410095E+37f;
		case -933924539:
			return 7.165112E-06f;
		default:
			break;
	}
	return 0;
}

void func_271(var uParam0)
{
	uParam0->f_15 = 0;
}

char* func_272(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_273(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13575[iVar0] == iParam0)
		{
			return Global_265213.f_107995.f_13510[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_274(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	int iVar17;

	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	iVar17 = UIFEED::_UI_FEED_POST_FEED_TICKER(&Var0, &Var13, bParam5);
	return iVar17;
}

void func_275(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_276(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_277(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_204(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_278(bool bParam0, int iParam1, var uParam2)
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

void func_279(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_280(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_281()
{
	return Global_1915643.f_20643;
}

int func_282(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (!bParam7 && UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return 0;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(-1.072798E+21f))
	{
		return 0;
	}
	iVar0 = Global_1295619.f_149[Global_1295619];
	iVar1 = Global_1295619.f_3;
	bVar2 = ENTITY::IS_ENTITY_DEAD(iVar1);
	bVar3 = PED::IS_PED_INCAPACITATED(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
			{
				return 0;
			}
			if (PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !PLAYER::IS_PLAYER_CONTROL_ON(iVar0))
		{
			if (bParam6 && Global_1102813.f_3 & 32 != 0)
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
		{
			return 0;
		}
		if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(Global_33) != 0)
		{
			return 0;
		}
	}
	if (func_293())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940072.f_10 || Global_1940072.f_11) || Global_1940072.f_12) || Global_1940072.f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (Global_1235672.f_9479 != -1)
		{
			return 0;
		}
		if (Global_1138658[iVar4 /*56*/].f_34 & 1 != 0 && Global_1138658[iVar4 /*56*/].f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1140755.f_293)
		{
			return 0;
		}
		if (Global_1572887.f_72.f_40 > 11 && Global_1572887.f_72.f_40 < 15)
		{
			return 0;
		}
		else if (Global_1572887.f_72.f_40 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(2) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(8)) && SCRIPTS::_GET_GLOBAL_BLOCK_CAN_BE_ACCESSED(9))
		{
			if (Global_1048576 || Global_2883584)
			{
				return 0;
			}
			if (Global_1048581)
			{
				return 0;
			}
			if (Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_283(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_284(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_285(int iParam0)
{
	if (!func_294(iParam0))
	{
		return 0;
	}
	if (func_18() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_286(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1072759.f_28418[29 /*4*/].f_3;
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

bool func_287(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = bParam0->f_1;
	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_288(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

int func_289(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_9;
}

struct<2> func_290(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1295802[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_291(bool bParam0)
{
	return func_295(bParam0, 67, 1);
}

bool func_292(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	*bParam0 = Global_1149417.f_7;
	bParam0->f_2 = fParam3;
	bParam0->f_3 = func_204(iParam1);
	bParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_293()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_294(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_295(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

