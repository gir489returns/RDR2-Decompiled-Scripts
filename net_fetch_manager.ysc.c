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
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	func_1();
	while (!func_2())
	{
		func_3();
		BUILTIN::WAIT(0);
	}
	func_4();
	while (!SCRIPTS::HAVE_ALL_CHILD_SCRIPTS_TERMINATED(1440))
	{
		BUILTIN::WAIT(0);
	}
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
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	bool bVar0;

	bVar0 = func_12();
	if (!bVar0)
	{
	}
	if (func_13())
	{
		func_14(bVar0);
	}
	func_15(bVar0);
}

void func_4()
{
	func_16();
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
		if (func_17() == 0)
		{
			if (func_18())
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
	func_19(&Global_1225084);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Global_1225084, 588, 47);
	func_20(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Global_1225084), 588, "g_mpFetchManagerHostData");
	if (func_21())
	{
		Global_1235369 = { Global_1225672[func_22() /*303*/] };
	}
	func_23(&Global_1225672);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Global_1225672, 9697, 48);
	func_24(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Global_1225672[0 /*303*/])), 9697, "g_mpFetchManagerPlayerData");
	if (!func_21())
	{
		func_25(&Global_1235672);
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

bool func_11(bool bParam0, bool bParam1)
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

bool func_12()
{
	if (func_26())
	{
		return false;
	}
	return true;
}

bool func_13()
{
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[13], false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch_manager", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[13]);
}

void func_14(bool bParam0)
{
	switch (Global_1225084.f_584)
	{
		case 0:
			func_27();
			break;
		case 1:
			func_28();
			break;
		case 2:
			func_29(bParam0);
			break;
	}
}

void func_15(bool bParam0)
{
	switch (Global_1235672.f_9080)
	{
		case 0:
			func_30();
			break;
		case 1:
			func_31();
			break;
		case 2:
			func_32(bParam0);
			break;
	}
}

void func_16()
{
	int iVar0;

	Global_1235672.f_9080 = 0;
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1235672[iVar0 /*697*/].f_567 != -1)
		{
			func_33(iVar0, 1);
			func_34(iVar0);
		}
		iVar0++;
	}
}

int func_17()
{
	return Global_1572887.f_14;
}

bool func_18()
{
	return Global_1051645.f_8;
}

void func_19(var uParam0)
{
	struct<23> Var0;
	int iVar28;
	var uVar29;
	int iVar30;
	var uVar31;
	int iVar33;
	struct<4> Var34;
	var uVar238;
	var uVar239;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_9 = -1;
	Var0.f_15 = 255;
	Var0.f_16 = 255;
	Var0.f_17 = 255;
	Var0.f_18 = 255;
	Var0.f_22.f_1 = -1;
	iVar28 = 0;
	while (iVar28 <= 12)
	{
		MISC::COPY_SCRIPT_STRUCT(uParam0[iVar28 /*28*/], &Var0, 28);
		iVar28++;
	}
	iVar30 = 0;
	while (iVar30 <= (3 - 1))
	{
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_365[iVar30]), &uVar29, 1);
		iVar30++;
	}
	uVar31 = -1;
	iVar33 = 0;
	while (iVar33 <= 4)
	{
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_369[iVar33 /*2*/]), &uVar31, 2);
		iVar33++;
	}
	Var34.f_2 = 5;
	Var34.f_3 = 5;
	Var34.f_3.f_1 = -1;
	Var34.f_3.f_1.f_1 = -1;
	Var34.f_3.f_1.f_2 = -1;
	Var34.f_3.f_1.f_3 = 255;
	Var34.f_3.f_1.f_4 = -1;
	Var34.f_3.f_1.f_5 = -1;
	Var34.f_3.f_1.f_6 = -1;
	Var34.f_3.f_1.f_8 = 2;
	Var34.f_3.f_1.f_8.f_1 = -1;
	Var34.f_3.f_1.f_8.f_5 = -1;
	Var34.f_3.f_1.f_8.f_5.f_1 = -1;
	Var34.f_3.f_1.f_8.f_5.f_3 = -1;
	Var34.f_3.f_1.f_8.f_5.f_4 = -1;
	Var34.f_3.f_1.f_8.f_5.f_5 = -1;
	Var34.f_3.f_1.f_8.f_5.f_6 = -1;
	Var34.f_3.f_1.f_8.f_5.f_6.f_1 = -1;
	Var34.f_3.f_1.f_8.f_5.f_9 = 2;
	Var34.f_3.f_1.f_23.f_1 = 1024;
	Var34.f_3.f_1.f_23.f_4 = -15;
	Var34.f_3.f_1.f_23.f_5 = 255;
	Var34.f_3.f_1.f_23.f_8 = 1;
	Var34.f_3.f_1.f_23.f_8.f_1.f_1 = NaNf;
	Var34.f_3.f_1.f_23.f_13 = -1;
	Var34.f_3.f_1.f_40 = -1;
	Var34.f_3.f_1.f_40.f_1 = -1;
	Var34.f_3.f_1.f_40.f_2 = -1;
	Var34.f_3.f_1.f_40.f_3 = 255;
	Var34.f_3.f_1.f_40.f_4 = -1;
	Var34.f_3.f_1.f_40.f_5 = -1;
	Var34.f_3.f_1.f_40.f_6 = -1;
	Var34.f_3.f_1.f_40.f_8 = 2;
	Var34.f_3.f_1.f_40.f_8.f_1 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_1 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_3 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_4 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_5 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_6 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_6.f_1 = -1;
	Var34.f_3.f_1.f_40.f_8.f_5.f_9 = 2;
	Var34.f_3.f_1.f_40.f_23.f_1 = 1024;
	Var34.f_3.f_1.f_40.f_23.f_4 = -15;
	Var34.f_3.f_1.f_40.f_23.f_5 = 255;
	Var34.f_3.f_1.f_40.f_23.f_8 = 1;
	Var34.f_3.f_1.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var34.f_3.f_1.f_40.f_23.f_13 = -1;
	Var34.f_3.f_1.f_40.f_40 = -1;
	Var34.f_3.f_1.f_40.f_40.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_2 = -1;
	Var34.f_3.f_1.f_40.f_40.f_3 = 255;
	Var34.f_3.f_1.f_40.f_40.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8 = 2;
	Var34.f_3.f_1.f_40.f_40.f_8.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_3 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_8.f_5.f_9 = 2;
	Var34.f_3.f_1.f_40.f_40.f_23.f_1 = 1024;
	Var34.f_3.f_1.f_40.f_40.f_23.f_4 = -15;
	Var34.f_3.f_1.f_40.f_40.f_23.f_5 = 255;
	Var34.f_3.f_1.f_40.f_40.f_23.f_8 = 1;
	Var34.f_3.f_1.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var34.f_3.f_1.f_40.f_40.f_23.f_13 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_2 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_3 = 255;
	Var34.f_3.f_1.f_40.f_40.f_40.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8 = 2;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_4 = -15;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_5 = 255;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_8 = 1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var34.f_3.f_1.f_40.f_40.f_40.f_23.f_13 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_2 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_3 = 255;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8 = 2;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_3 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_4 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_5 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_6.f_1 = -1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_8.f_5.f_9 = 2;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_1 = 1024;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_4 = -15;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_5 = 255;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8 = 1;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_8.f_1.f_1 = NaNf;
	Var34.f_3.f_1.f_40.f_40.f_40.f_40.f_23.f_13 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_380), &Var34, 204);
	uParam0->f_584 = uVar238;
	uParam0->f_585 = uVar239;
	uParam0->f_587 = 0;
}

int func_20(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

bool func_21()
{
	return !Global_1572887.f_10;
}

int func_22()
{
	return Global_1102813.f_3672;
}

void func_23(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_35(uParam0[iVar0 /*303*/]);
		iVar0++;
	}
}

int func_24(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(var uParam0)
{
	struct<697> Var0;
	struct<4> Var697;
	var uVar701;
	struct<123> Var702;
	struct<8> Var825;
	int iVar833;
	int iVar834;

	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_86 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_89 = -1;
	Var0.f_19.f_1.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_87 = -1;
	Var0.f_554 = 4;
	Var0.f_567 = -1;
	Var0.f_572 = 25;
	Var0.f_598 = -1;
	Var0.f_598.f_1 = -1;
	Var0.f_601 = -1f;
	Var0.f_604 = -1;
	Var0.f_610 = 255;
	Var0.f_617 = 9;
	Var0.f_648 = 6;
	Var0.f_657 = 6;
	Var0.f_657.f_1.f_1 = -1;
	Var0.f_657.f_1.f_2 = -1;
	Var0.f_657.f_1.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_38 = -1;
	Var697 = -1;
	Var697.f_1 = -1;
	Var702.f_2 = -1;
	Var702.f_9 = 1;
	Var702.f_16 = 10;
	Var702.f_104 = 11;
	Var702.f_116 = 255;
	Var825.f_3 = 2;
	uParam0->f_9208 = { Var825 };
	iVar833 = 0;
	while (iVar833 <= (3 - 1))
	{
		uParam0->f_9081[iVar833] = 0;
		iVar833++;
	}
	uParam0->f_9085 = { Var702 };
	iVar834 = 0;
	while (iVar834 <= 12)
	{
		*(uParam0[iVar834 /*697*/]) = { Var0 };
		iVar834++;
	}
	iVar833 = 0;
	while (iVar833 <= 3)
	{
		uParam0->f_9062[iVar833 /*4*/] = { Var697 };
		iVar833++;
	}
	uParam0->f_9079 = uVar701;
	uParam0->f_9080 = 0;
	uParam0->f_9476 = -1;
	uParam0->f_9483 = 1;
}

bool func_26()
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
	if (!func_36(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_27()
{
	func_37(1);
}

void func_28()
{
	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1245159.f_9818))
	{
		func_37(2);
	}
}

void func_29(bool bParam0)
{
	func_38(bParam0);
	func_39(&(Global_1225084.f_380), &(Global_1235672.f_9079));
}

void func_30()
{
	int iVar0;

	if (Global_1225084.f_584 > 0)
	{
		if (func_21())
		{
			iVar0 = 0;
			while (iVar0 <= 12)
			{
				if (func_40(iVar0, 4))
				{
					Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iVar0 /*23*/] = { Global_1235369[iVar0 /*23*/] };
				}
				iVar0++;
			}
		}
		func_41(1);
	}
}

void func_31()
{
	if ((DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1245159.f_9818) && Global_1225084.f_584 > 1) && Global_1245159.f_9816 > 1)
	{
		func_42("FETCH", 30, -1, 0, 0);
		func_41(2);
	}
}

void func_32(bool bParam0)
{
	func_43(bParam0);
	func_44(bParam0);
	func_45();
	if (bParam0)
	{
		func_46();
		func_47();
		func_48();
	}
}

bool func_33(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1235672[iParam0 /*697*/].f_604;
	if (func_49(iVar0))
	{
		if (bParam1)
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1235672.f_9062[iVar0 /*4*/].f_3);
		}
		return false;
	}
	return true;
}

void func_34(int iParam0)
{
	struct<697> Var0;
	int iVar697;
	int iVar698;
	struct<23> Var699;

	if (func_50(Global_1235672[iParam0 /*697*/].f_598) != -1 || func_51(Global_1235672[iParam0 /*697*/].f_598))
	{
		func_52(iParam0);
	}
	func_53(iParam0);
	if (Global_1235672[iParam0 /*697*/].f_604 != -1)
	{
		func_54(Global_1235672[iParam0 /*697*/].f_604, iParam0, 0, 0);
	}
	func_55(iParam0);
	Var0 = 6;
	Var0.f_19 = 6;
	Var0.f_19.f_1 = -1;
	Var0.f_19.f_1.f_5 = 16;
	Var0.f_19.f_1.f_77 = -1;
	Var0.f_19.f_1.f_82 = -1;
	Var0.f_19.f_1.f_86 = -1;
	Var0.f_19.f_1.f_87 = -1;
	Var0.f_19.f_1.f_89 = -1;
	Var0.f_19.f_1.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_87 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_5 = 16;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_77 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_82 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_86 = -1;
	Var0.f_19.f_1.f_89.f_89.f_89.f_89.f_89.f_87 = -1;
	Var0.f_554 = 4;
	Var0.f_567 = -1;
	Var0.f_572 = 25;
	Var0.f_598 = -1;
	Var0.f_598.f_1 = -1;
	Var0.f_601 = -1f;
	Var0.f_604 = -1;
	Var0.f_610 = 255;
	Var0.f_617 = 9;
	Var0.f_648 = 6;
	Var0.f_657 = 6;
	Var0.f_657.f_1.f_1 = -1;
	Var0.f_657.f_1.f_2 = -1;
	Var0.f_657.f_1.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_1 = -1;
	Var0.f_657.f_1.f_6.f_6.f_6.f_6.f_6.f_2 = -1;
	Var0.f_657.f_38 = -1;
	Global_1235672[iParam0 /*697*/] = { Var0 };
	func_56(iParam0);
	iVar697 = PLAYER::PLAYER_ID();
	if (((iVar697 >= 0 && iVar697 < 32) && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar698 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar698 >= 0 && iVar698 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
		{
			Var699 = 6;
			Var699.f_21 = -1;
			Var699.f_22 = -1;
			Global_1225672[iVar698 /*303*/][iParam0 /*23*/] = { Var699 };
		}
	}
}

void func_35(var uParam0)
{
	struct<303> Var0;

	Var0 = 13;
	Var0.f_1 = 6;
	Var0.f_1.f_21 = -1;
	Var0.f_1.f_22 = -1;
	Var0.f_1.f_23 = 6;
	Var0.f_1.f_23.f_21 = -1;
	Var0.f_1.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23 = 6;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_21 = -1;
	Var0.f_1.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_23.f_22 = -1;
	Var0.f_300.f_1 = 255;
	*uParam0 = { Var0 };
}

bool func_36(struct<2> Param0)
{
	if (!func_57(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_58(Param0))
	{
		return false;
	}
	return true;
}

void func_37(int iParam0)
{
	if (Global_1225084.f_584 != iParam0)
	{
		Global_1225084.f_584 = iParam0;
	}
}

void func_38(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (Global_1225084.f_587 <= 0)
	{
		return;
	}
	iVar1 = Global_1235672.f_9081[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar1 || (Global_1225084[iVar0 /*28*/].f_2 > -1 && Global_1225084[iVar0 /*28*/].f_2 < 2))
		{
			func_59(Global_1235672.f_9081[0], bParam0);
		}
		iVar0++;
	}
	func_60(Global_1235672.f_9081[1]);
}

void func_39(var uParam0, var uParam1)
{
	int iVar0;
	struct<40> Var1;

	if (*uParam0 == 0)
	{
		return;
	}
	*uParam1++;
	if (*uParam1 >= *uParam0)
	{
		*uParam1 = 0;
	}
	iVar0 = ((uParam0->f_1 + *uParam1) % uParam0->f_2);
	Var1 = -1;
	Var1.f_2 = -1;
	Var1.f_3 = 255;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_8 = 2;
	Var1.f_8.f_1 = -1;
	Var1.f_8.f_5 = -1;
	Var1.f_8.f_5.f_1 = -1;
	Var1.f_8.f_5.f_3 = -1;
	Var1.f_8.f_5.f_4 = -1;
	Var1.f_8.f_5.f_5 = -1;
	Var1.f_8.f_5.f_6 = -1;
	Var1.f_8.f_5.f_6.f_1 = -1;
	Var1.f_8.f_5.f_9 = 2;
	Var1.f_23.f_1 = 1024;
	Var1.f_23.f_4 = -15;
	Var1.f_23.f_5 = 255;
	Var1.f_23.f_8 = 1;
	Var1.f_23.f_8.f_1.f_1 = NaNf;
	Var1.f_23.f_13 = -1;
	if (uParam0->f_3[iVar0 /*40*/].f_2 != -1)
	{
		Var1 = { func_61(&(Global_1207465.f_28), uParam0->f_3[iVar0 /*40*/]) };
		func_62(Var1, uParam0, &(uParam0->f_3[iVar0 /*40*/]));
	}
}

bool func_40(int iParam0, int iParam1)
{
	return (func_63(iParam0) && func_64(Global_1235672[iParam0 /*697*/].f_568, iParam1));
}

void func_41(int iParam0)
{
	if (Global_1235672.f_9080 != iParam0)
	{
		Global_1235672.f_9080 = iParam0;
	}
}

int func_42(char* sParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
		return 0;
	}
	bVar1 = false;
	while ((HUD::TEXT_BLOCK_REQUEST(sParam0) == 0 && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	while ((!HUD::TEXT_BLOCK_IS_LOADED(sParam0) && iVar0 < iParam1) && !bVar1)
	{
		bVar1 = func_11(bParam3, bParam4);
		iVar0++;
		BUILTIN::WAIT(0);
	}
	bVar1 = func_11(bParam3, bParam4);
	if (bVar1)
	{
		func_5();
	}
	if (iVar0 >= iParam1)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_43(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_65(2))
	{
		return;
	}
	if (bParam0 && Global_1225084.f_587 > 0)
	{
		iVar1 = 0;
		while (iVar1 <= 12)
		{
			if (func_66(iVar1, 8192, 255))
			{
				bVar0 = true;
			}
			else
			{
				iVar1++;
			}
		}
	}
	if (bVar0)
	{
		if (!func_67(1, 255))
		{
			LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(true);
			func_68(1, 1);
		}
	}
	else if (func_67(1, 255))
	{
		LAW::_SET_ALLOW_DISABLED_LAW_RESPONSES(false);
		func_69(1, 1);
	}
}

void func_44(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1225084.f_587 <= 0)
	{
		return;
	}
	iVar1 = -1;
	iVar2 = Global_1235672.f_9081[0];
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (iVar0 == iVar2 || (Global_1225084[iVar0 /*28*/].f_2 > -1 && !func_66(iVar0, 1048576, 255)))
		{
			func_70(iVar0, bParam0);
		}
		func_71(iVar0);
		func_72(iVar0);
		func_73(iVar0);
		func_74(iVar0, Global_1235672[iVar0 /*697*/].f_571);
		if (Global_1225084[iVar0 /*28*/].f_2 < 3)
		{
			func_75(iVar0);
		}
		if ((Global_1225084[iVar0 /*28*/].f_2 > 0 && func_76(Global_1235672[iVar0 /*697*/].f_571)) && func_77(iVar0))
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	Global_1235672.f_9081[0]++;
	Global_1235672.f_9081[1]++;
	if (Global_1235672.f_9081[0] >= 13)
	{
		Global_1235672.f_9081[0] = 0;
	}
	if (Global_1235672.f_9081[1] >= 5)
	{
		Global_1235672.f_9081[1] = 0;
	}
	if (iVar1 != -1)
	{
		func_78(iVar1);
	}
	else
	{
		func_79();
	}
}

void func_45()
{
	int iVar0;

	if (!func_80(1))
	{
		func_81();
	}
	if (Global_1235672.f_9085.f_97 <= 0)
	{
		return;
	}
	iVar0 = Global_1235672.f_9085.f_98;
	if (func_82(iVar0))
	{
		func_83(iVar0);
		iVar0 = (iVar0 + 1 % 10);
		Global_1235672.f_9085.f_98 = iVar0;
		Global_1235672.f_9085.f_97 = (Global_1235672.f_9085.f_97 - 1);
	}
}

void func_46()
{
	int iVar0;

	if (func_13())
	{
		func_84(Global_1235672.f_9085.f_122);
		Global_1235672.f_9085.f_122 = (Global_1235672.f_9085.f_122 + 1 % 32);
	}
	iVar0 = PLAYER::PLAYER_ID();
	func_85();
	Global_1235672.f_9085.f_6 = func_86(iVar0);
	if (Global_1235672.f_9085.f_6 == -0.002629748f)
	{
		Global_1235672.f_9085.f_6 = func_87();
		if (!func_88(2, 255) && Global_1235672.f_9085.f_6 == -0.002629748f)
		{
			func_89(2);
		}
		else if (func_88(2, 255) && Global_1235672.f_9085.f_6 != -0.002629748f)
		{
			func_90(2);
		}
		func_91(Global_1235672.f_9085.f_121, iVar0);
	}
	else if (func_88(2, 255))
	{
		func_90(2);
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_92(Global_1235672.f_9085.f_121, iVar0);
		func_93(Global_1235672.f_9085.f_121, iVar0);
	}
	if (func_94() && (!func_88(5, Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1)))
	{
		func_95();
	}
	Global_1235672.f_9085.f_121 = (Global_1235672.f_9085.f_121 + 1 % 32);
}

void func_47()
{
	func_96();
	func_97();
}

void func_48()
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;

	Var0 = { func_98(1.314062E-19f) };
	bVar2 = func_99(Var0);
	if (!bVar2)
	{
		return;
	}
	if (!func_100(Var0))
	{
		return;
	}
	func_101(Var0);
	func_102();
	if (Global_1235672.f_9208.f_6 == 0)
	{
		return;
	}
	iVar3 = func_103();
	if (!func_104(iVar3))
	{
		return;
	}
	func_105(iVar3);
}

bool func_49(int iParam0)
{
	return ((func_106(iParam0) && SCRIPTS::DOES_THREAD_EXIST(Global_1235672.f_9062[iParam0 /*4*/].f_3)) && SCRIPTS::IS_THREAD_ACTIVE(Global_1235672.f_9062[iParam0 /*4*/].f_3, false));
}

int func_50(struct<2> Param0)
{
	return func_107(Param0);
}

bool func_51(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_108(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

void func_52(int iParam0)
{
	struct<2> Var0;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6;

	if (!func_63(iParam0))
	{
		return;
	}
	if (Global_1235672[iParam0 /*697*/].f_571 == 2.684408E+23f)
	{
		return;
	}
	if (func_40(iParam0, 128))
	{
		func_109(0);
		func_110(iParam0, 128);
	}
	if (func_66(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { Global_1235672[iParam0 /*697*/].f_598 };
	bVar2 = func_40(iParam0, 9.403955E-38f);
	func_110(iParam0, 9.403955E-38f);
	func_53(iParam0);
	func_111(iParam0);
	if (!func_112(Var0) && !func_51(Var0))
	{
		return;
	}
	iVar3 = func_113(Global_1235672[iParam0 /*697*/].f_571);
	if (iVar3 != 0 && iVar3 != 6)
	{
		func_114(0);
	}
	func_110(iParam0, 16);
	func_115(iParam0, 32);
	func_115(iParam0, 16);
	if ((!bVar2 && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), Global_1295619)) && !func_40(iParam0, 65536))
	{
		iVar5 = Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_21;
		if (iVar5 == 1)
		{
			iVar4 = 1;
		}
	}
	func_116(Var0, 0, 2, iVar4, 0);
	Var6.f_1 = -1;
	Var6.f_1.f_1 = -1;
	func_117(Global_1235672[iParam0 /*697*/].f_598, &Var6);
	if (Global_1235672[iParam0 /*697*/].f_571 == -1.07135E+22f)
	{
		func_118(0);
	}
	if (Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f)
	{
		if (Global_1225084[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
		{
			func_90(4);
		}
		func_119(1, 0, 0);
	}
	if (func_120(Global_1235672[iParam0 /*697*/].f_571))
	{
		func_121(1, 0, 0);
	}
	if (func_122(iParam0) && Global_1225084[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
	{
		func_123(0);
		func_124(0);
	}
	func_125(Global_1235672[iParam0 /*697*/].f_571);
}

void func_53(int iParam0)
{
	int iVar0;

	if (!func_40(iParam0, 3.85186E-34f))
	{
		return;
	}
	iVar0 = Global_1225084[iParam0 /*28*/].f_5;
	if (!func_126(iVar0))
	{
		return;
	}
	func_127(iVar0);
	func_110(iParam0, 3.85186E-34f);
}

void func_54(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_106(iParam0))
	{
		return;
	}
	if (!func_128(iParam0, iParam1))
	{
		Global_1235672[iParam1 /*697*/].f_604 = -1;
		return;
	}
	if (Global_1235672.f_9062[iParam0 /*4*/] != -1)
	{
		Global_1235672[Global_1235672.f_9062[iParam0 /*4*/] /*697*/].f_604 = -1;
		if (bParam3 && NETWORK::NETWORK_IS_SESSION_ACTIVE())
		{
			func_115(Global_1235672.f_9062[iParam0 /*4*/], 2);
		}
	}
	if (bParam2)
	{
		Global_1235672.f_9062[iParam0 /*4*/].f_1 = -1;
	}
	Global_1235672.f_9062[iParam0 /*4*/] = -1;
	Global_1235672.f_9062[iParam0 /*4*/].f_2 = 0;
}

void func_55(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (Global_1235672[iParam0 /*697*/].f_572[iVar0] == 0)
		{
		}
		else
		{
			PED::REMOVE_RELATIONSHIP_GROUP(Global_1235672[iParam0 /*697*/].f_572[iVar0]);
		}
		iVar0++;
	}
}

void func_56(int iParam0)
{
	if (iParam0 != -1 && iParam0 == Global_1235672.f_9479)
	{
		Global_1235672.f_9479 = -1;
		Global_1235672.f_9480 = -1;
	}
}

bool func_57(int iParam0)
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

int func_58(int iParam0)
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

void func_59(int iParam0, bool bParam1)
{
	if (Global_1225084[iParam0 /*28*/].f_2 == -1)
	{
		return;
	}
	if (Global_1225084[iParam0 /*28*/].f_2 != 3)
	{
		if (!bParam1)
		{
			func_129(iParam0, 3);
		}
		else if (Global_1235672[iParam0 /*697*/].f_571 != 0 && !func_130(Global_1235672[iParam0 /*697*/].f_571))
		{
			func_129(iParam0, 3);
		}
	}
	func_131(iParam0);
	func_132(iParam0);
	switch (Global_1225084[iParam0 /*28*/].f_2)
	{
		case 0:
			func_133(iParam0);
			break;
		case 1:
			func_134(iParam0);
			break;
		case 2:
			func_135(iParam0);
			break;
		case 3:
			func_136(iParam0);
			break;
	}
}

void func_60(int iParam0)
{
	if ((Global_1225084.f_369[iParam0 /*2*/].f_1 && Global_1225084.f_369[iParam0 /*2*/] != -1) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE(func_137(), iParam0, false, 0))
	{
		func_138(iParam0);
	}
}

struct<40> func_61(var uParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40)
{
	struct<40> Var0;
	int iVar40;
	int iVar41;

	if (Param1.f_1 != -1)
	{
		return uParam0->f_2[Param1.f_1 /*40*/];
	}
	Var0 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	iVar40 = 0;
	while (iVar40 < *uParam0)
	{
		iVar41 = ((uParam0->f_1 + iVar40) % 5);
		if (uParam0->f_2[iVar41 /*40*/].f_2 != Param1.f_2)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_3 != Param1.f_3)
		{
		}
		else if (uParam0->f_2[iVar41 /*40*/].f_4 != Param1.f_4)
		{
		}
		else
		{
			return uParam0->f_2[iVar41 /*40*/];
		}
		iVar40++;
	}
	return Var0;
}

void func_62(struct<7> Param0, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41)
{
	switch (func_139(uParam41))
	{
		case -1:
			func_140(uParam40, uParam41->f_4);
			break;
		case 0:
			if (!func_141(&Param0, uParam41))
			{
				if ((NETWORK::GET_NETWORK_TIME_ACCURATE() - uParam41->f_7) > 120000)
				{
					uParam41->f_6 = 2;
					func_142(uParam41, 3);
				}
				return;
			}
			if (func_143(&Param0) < 0)
			{
				return;
			}
			uParam41->f_1 = Param0.f_1;
			func_142(uParam41, 1);
			break;
		case 1:
			if (!func_141(&Param0, uParam41))
			{
				uParam41->f_6 = 2;
				func_142(uParam41, 3);
				return;
			}
			if (func_143(&Param0) < 1)
			{
				return;
			}
			uParam41->f_6 = Param0.f_6;
			func_142(uParam41, 2);
			break;
		case 2:
			if (!func_141(&Param0, uParam41))
			{
				if (uParam41->f_6 == -1)
				{
					uParam41->f_6 = 2;
				}
				func_142(uParam41, 3);
				return;
			}
			if (func_143(&Param0) < 3)
			{
				return;
			}
			func_142(uParam41, 3);
			break;
		case 3:
			func_142(uParam41, -1);
			break;
	}
}

bool func_63(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_64(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_65(int iParam0)
{
	if (Global_1235672.f_9081[iParam0] < func_144(iParam0))
	{
		Global_1235672.f_9081[iParam0]++;
		return false;
	}
	Global_1235672.f_9081[iParam0] = 0;
	return true;
}

bool func_66(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_63(iParam0) && func_64(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_67(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return func_64(Global_1225672[iParam1 /*303*/].f_302, iParam0);
}

void func_68(int iParam0, bool bParam1)
{
	if (!func_67(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_145(&(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}
}

void func_69(int iParam0, bool bParam1)
{
	if (func_67(iParam0, 255))
	{
		if (bParam1)
		{
		}
		func_146(&(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_302), iParam0);
	}
}

void func_70(int iParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = Global_1235672[iParam0 /*697*/].f_567 == -1;
	bVar1 = Global_1225084[iParam0 /*28*/].f_2 == -1;
	if (bVar0 && bVar1)
	{
		return;
	}
	if (!func_147(iParam0, 0f))
	{
		if (func_148())
		{
			if (func_147(iParam0, 32) || (((((((((Global_1235672[iParam0 /*697*/].f_571 != 1.056303E+17f && Global_1235672[iParam0 /*697*/].f_571 != -6.576586E+14f) && Global_1235672[iParam0 /*697*/].f_571 != -0.7269232f) && Global_1235672[iParam0 /*697*/].f_571 != -4.007869E-37f) && Global_1235672[iParam0 /*697*/].f_571 != -6.391861E-27f) && Global_1235672[iParam0 /*697*/].f_571 != 5.878796E-06f) && Global_1235672[iParam0 /*697*/].f_571 != -3.863288E-07f) && Global_1235672[iParam0 /*697*/].f_571 != -1.07135E+22f) && Global_1235672[iParam0 /*697*/].f_571 != -6.393201E+13f) && Global_1235672[iParam0 /*697*/].f_571 != 0))
			{
				if (!func_40(iParam0, 2f) && !func_149())
				{
					func_150(iParam0, 2f);
					func_151(2);
					return;
				}
			}
		}
	}
	if (Global_1225084[iParam0 /*28*/].f_4 != -1)
	{
		func_152(Global_1225084[iParam0 /*28*/].f_4, -1);
	}
	func_153(iParam0);
	func_154(iParam0);
	func_155(iParam0);
	func_156(iParam0);
	if (func_157(iParam0, bParam1))
	{
		if (Global_1235672[iParam0 /*697*/].f_567 != 3 && Global_1235672[iParam0 /*697*/].f_567 != -1)
		{
			func_158(iParam0, 3);
		}
	}
	else if (func_159(iParam0, bVar0, bVar1))
	{
		func_158(iParam0, 0);
	}
	switch (Global_1235672[iParam0 /*697*/].f_567)
	{
		case 0:
			func_160(iParam0);
			break;
		case 1:
			func_161(iParam0);
			break;
		case 2:
			func_162(iParam0);
			break;
		case 3:
			func_163(iParam0);
			break;
	}
}

void func_71(int iParam0)
{
	switch (Global_1235672[iParam0 /*697*/].f_571)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("BOUNTY_PLAYER"):
		case joaat("CAMP_SELL"):
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
			{
				func_164();
			}
			break;
	}
}

void func_72(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (Global_1235672[iParam0 /*697*/].f_554[iVar0 /*3*/].f_2 == 0)
		{
		}
		else
		{
			func_165(iParam0, iVar0);
		}
		iVar0++;
	}
}

void func_73(int iParam0)
{
	if (func_66(iParam0, 32, 255) && !func_40(iParam0, 4194304))
	{
		func_166();
	}
}

void func_74(int iParam0, int iParam1)
{
	if (func_66(iParam0, 32, 255))
	{
		switch (iParam1)
		{
			case joaat("GUN_FOR_HIRE"):
				if (func_40(iParam0, 4194304))
				{
					func_168(func_167(), Global_1235672[iParam0 /*697*/].f_598, 1, 1);
				}
				break;
			case joaat("BOUNTY_PLAYER"):
				if (func_40(iParam0, 4194304) && func_66(iParam0, 32, func_167()))
				{
					func_168(func_167(), Global_1235672[iParam0 /*697*/].f_598, 1, 0);
				}
				break;
			case joaat("CAMP_SELL"):
				if (func_40(iParam0, 4194304))
				{
					func_168(func_167(), Global_1235672[iParam0 /*697*/].f_598, 1, 1);
				}
				break;
		}
	}
}

void func_75(int iParam0)
{
	if ((Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f && Global_1225084[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID()) && func_170(func_169(Global_1225084[iParam0 /*28*/]), Global_1235672[iParam0 /*697*/].f_603) == 6.627404E-05f)
	{
		func_171(4);
	}
}

bool func_76(int iParam0)
{
	switch (iParam0)
	{
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
		case 918897273:
		case joaat("DYNAMIC"):
			return true;
	}
	return false;
}

bool func_77(int iParam0)
{
	float fVar0;
	float fVar1;
	int iVar2;

	fVar0 = Global_1235672[iParam0 /*697*/].f_655;
	fVar1 = func_173(Global_34, func_172(iParam0));
	iVar2 = 4000;
	Global_1235672[iParam0 /*697*/].f_655 = fVar1;
	if (fVar1 < 1120403456)
	{
		return true;
	}
	else if (fVar1 < 1132068864)
	{
		if (fVar1 < fVar0)
		{
			if (!func_40(iParam0, 1024))
			{
				if (!func_40(iParam0, 2048))
				{
					func_174(&(Global_1235672[iParam0 /*697*/].f_656));
					func_150(iParam0, 2048);
				}
				if (func_175(Global_1235672[iParam0 /*697*/].f_656) < iVar2)
				{
					return false;
				}
			}
			func_150(iParam0, 1024);
			return true;
		}
		else
		{
			if (func_40(iParam0, 1024))
			{
				if (func_40(iParam0, 2048))
				{
					func_174(&(Global_1235672[iParam0 /*697*/].f_656));
					func_110(iParam0, 2048);
				}
				if (func_175(Global_1235672[iParam0 /*697*/].f_656) < iVar2)
				{
					return true;
				}
			}
			func_110(iParam0, 1024);
			return false;
		}
	}
	return false;
}

void func_78(int iParam0)
{
	if (Global_1235672.f_9478 != iParam0)
	{
		Global_1235672.f_9478 = iParam0;
	}
}

void func_79()
{
	if (Global_1235672.f_9478 != -1)
	{
		Global_1235672.f_9478 = -1;
	}
}

bool func_80(int iParam0)
{
	return (Global_1235672.f_9085 && iParam0) != 0;
}

void func_81()
{
	int iVar0;
	struct<2> Var2;

	if (!func_176(255))
	{
		return;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(4.240444E+13f))
	{
		Var2 = { func_177(PLAYER::PLAYER_ID()) };
		BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var2, &iVar0);
		if (func_178(iVar0))
		{
			func_179(MISC::VAR_STRING(2, "JAIL_BOUNTY_REMOVE", iVar0), 10000, 0, 0, 0, 1);
		}
		else if (func_178(1))
		{
			func_179(MISC::VAR_STRING(2, "JAIL_BOUNTY_REMOVE", func_180()), 10000, 0, 0, 0, 1);
		}
		func_181(-4810532f, 0, 0);
	}
	func_171(1);
}

bool func_82(int iParam0)
{
	bool bVar0;
	bool bVar1;

	bVar0 = false;
	if (!func_182(iParam0, 64))
	{
		func_183(iParam0, 64);
	}
	if (func_182(iParam0, 32))
	{
		bVar1 = false;
		switch (Global_1235672.f_9085.f_16[iParam0 /*8*/])
		{
			case 509970874:
				bVar1 = func_184(8, 16);
				break;
			case -1141463485:
				bVar1 = func_185(16, 8);
				break;
			case -649633548:
				bVar1 = func_184(32, 64);
				break;
			case 504244707:
				bVar1 = func_185(64, 32);
				break;
		}
		if (bVar1)
		{
			func_186(iParam0, 32);
		}
	}
	if (!func_187(iParam0))
	{
		switch (Global_1235672.f_9085.f_16[iParam0 /*8*/])
		{
			case 355060119:
				bVar0 = func_188(iParam0);
				break;
			case 1393257577:
				bVar0 = func_189(iParam0);
				break;
			case -896348601:
				bVar0 = func_190(iParam0);
				break;
			case -179235043:
				bVar0 = func_191(iParam0);
				break;
			case 509970874:
				bVar0 = func_192(iParam0);
				break;
			case -1141463485:
				bVar0 = func_193(iParam0);
				break;
			case -1454491980:
				bVar0 = func_194(iParam0);
				break;
			case -649633548:
				bVar0 = func_195(iParam0, Global_1235672.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
			case 504244707:
				bVar0 = func_196(iParam0);
				break;
			case -1473321380:
				bVar0 = func_197(iParam0, Global_1235672.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
			case 1265908607:
				bVar0 = func_198(iParam0);
				break;
			case -1729966722:
				bVar0 = func_199(iParam0);
				break;
			case -1228177771:
				bVar0 = func_200(iParam0, Global_1235672.f_9085.f_16[iParam0 /*8*/].f_6);
				break;
			case -506555739:
				bVar0 = func_201(iParam0);
				break;
			case 1244342493:
				bVar0 = func_202(iParam0);
				break;
			case -1303136:
				bVar0 = func_203(iParam0);
				break;
			case -1555147881:
				bVar0 = func_204(iParam0);
				break;
			case 607258092:
				bVar0 = func_205(iParam0);
				break;
		}
		if (bVar0)
		{
			func_183(iParam0, 1);
		}
		else
		{
			func_183(iParam0, 1);
			func_183(iParam0, 4);
		}
	}
	return func_182(iParam0, 24);
}

void func_83(int iParam0)
{
	struct<8> Var0;

	switch (Global_1235672.f_9085.f_16[iParam0 /*8*/])
	{
		case 509970874:
			func_90(8);
			break;
		case -1141463485:
			func_90(16);
			break;
		case -649633548:
			func_90(32);
			break;
		case 504244707:
			func_90(64);
			break;
	}
	Global_1235672.f_9085.f_16[iParam0 /*8*/] = { Var0 };
}

void func_84(int iParam0)
{
	if (func_88(1, iParam0))
	{
		if (func_88(4, iParam0))
		{
			if (!func_206(iParam0))
			{
				func_207(iParam0);
				return;
			}
		}
		else
		{
			if (!func_208(iParam0))
			{
				func_209(iParam0);
				return;
			}
			func_207(iParam0);
		}
	}
	else
	{
		func_209(iParam0);
	}
}

void func_85()
{
	int iVar0;
	var uVar1;
	int iVar2;
	struct<2> Var4;

	if (func_80(2) && (MISC::GET_GAME_TIMER() - Global_1235672.f_9085.f_15) > 600000)
	{
		func_210(2);
	}
	if (Global_1235672.f_9085.f_14 <= 0)
	{
		return;
	}
	iVar0 = (Global_1235672.f_9085.f_14 - 1);
	while (iVar0 >= 0)
	{
		if (!func_211(&(Global_1235672.f_9085.f_9[iVar0 /*4*/]), &uVar1))
		{
			if (Global_1235672.f_9085.f_9[iVar0 /*4*/].f_3 || uVar1)
			{
				func_171(2);
				Global_1235672.f_9085.f_15 = MISC::GET_GAME_TIMER();
				Var4 = { func_177(Global_1235672.f_9085.f_9[iVar0 /*4*/]) };
				BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var4, &iVar2);
				func_212(Global_1235672.f_9085.f_9[iVar0 /*4*/], iVar2);
			}
			if (Global_1235672.f_9085.f_14 > 1)
			{
				SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_8), Global_1235672.f_9085.f_9[iVar0 /*4*/]);
				Global_1235672.f_9085.f_9[iVar0 /*4*/] = { Global_1235672.f_9085.f_9[(Global_1235672.f_9085.f_14 - 1) /*4*/] };
			}
			else
			{
				SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1235672.f_9085.f_8));
				Global_1235672.f_9085.f_9[iVar0 /*4*/].f_1 = 0;
				Global_1235672.f_9085.f_9[iVar0 /*4*/] = 255;
				Global_1235672.f_9085.f_9[iVar0 /*4*/].f_2 = 0;
				Global_1235672.f_9085.f_9[iVar0 /*4*/].f_3 = 0;
				Global_1235672.f_9085.f_14 = 0;
				return;
			}
			if (Global_1235672.f_9085.f_14 > 0)
			{
				Global_1235672.f_9085.f_14 = (Global_1235672.f_9085.f_14 - 1);
			}
		}
		iVar0 = (iVar0 + -1);
	}
}

float func_86(int iParam0)
{
	vector3 vVar0;

	if (!func_176(255))
	{
		return 2.134111E+24f;
	}
	if (func_213(255))
	{
		return 2.134111E+24f;
	}
	if (BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&vVar0))
	{
		Global_1245159.f_9807.f_4 = vVar0.z;
	}
	if (Global_1295619.f_16 < Global_1245159.f_9807.f_4)
	{
		return -3.188857E+30f;
	}
	if (Global_1245159.f_9807.f_5 == -1)
	{
		Global_1245159.f_9807.f_5 = Global_1295619.f_16 + 30;
	}
	if (Global_1295619.f_16 < Global_1245159.f_9807.f_5)
	{
		return -1.384382E+08f;
	}
	if (func_214(iParam0, 1, 0, 1))
	{
		return -1.947292E-27f;
	}
	if (func_215(1114112, iParam0))
	{
		return 1.772026E-22f;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -5.627609E+35f;
	}
	if (func_217(func_216(), func_216(), 0, 0))
	{
		return -1.105648E+32f;
	}
	return -0.002629748f;
}

float func_87()
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.156977E+34f))
	{
		return 3.206836E+38f;
	}
	if (func_80(2))
	{
		return 1.523265E+10f;
	}
	if (func_218())
	{
		return -1.182636E+36f;
	}
	return -0.002629748f;
}

bool func_88(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam1)) && (Global_1225672[iParam1 /*303*/].f_300 && iParam0) != 0);
}

void func_89(int iParam0)
{
	Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = (Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 || iParam0);
}

void func_90(int iParam0)
{
	Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 = (Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 - (Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300 && iParam0));
}

void func_91(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_206(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	Global_1235672.f_9085.f_7 = func_219(iVar0, iParam1);
	iVar1 = 0;
	if (Global_1235672.f_9085.f_7 == -1.326161E+17f)
	{
		switch (func_220(&uVar2, iVar0, 1))
		{
			case 4:
				iVar1 = MISC::GET_HASH_KEY(&uVar2);
				break;
			case 1:
				iVar1 = 0;
				break;
			case 2:
				iVar1 = 0;
				break;
			case 0:
			case 3:
				Global_1235672.f_9085.f_7 = 7.27039E-13f;
				return;
		}
	}
	else
	{
		return;
	}
	func_221(iVar0, iVar1);
}

void func_92(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_88(2, iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_120), iParam0);
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (iParam1 == iVar0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_120), iParam0);
		return;
	}
	if (GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(iParam1), iVar0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_120), iParam0);
		return;
	}
	if (BUILTIN::VDIST(func_222(iVar0), func_222(iParam1)) <= (Global_1901671.f_170.f_23 * Global_1155135[iParam0 /*30*/].f_29))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_120), iParam0);
	}
	else
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_120), iParam0);
	}
}

void func_93(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (func_94())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		return;
	}
	if (!GANG::NETWORK_IS_IN_SAME_GANG(iParam1, PLAYER::INT_TO_PLAYERINDEX(iParam0)))
	{
		return;
	}
	iVar0 = Global_1225672[iParam0 /*303*/].f_300.f_1;
	if (iVar0 == 255)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	if (!func_88(4, iVar0))
	{
		return;
	}
	bVar2 = false;
	iVar1 = 0;
	while (iVar1 < 13)
	{
		if (Global_1225084[iVar1 /*28*/].f_16 == iVar0 && Global_1235672[iVar1 /*697*/].f_571 == 1.038497E+13f)
		{
			if (!func_36(Global_1235672[iVar1 /*697*/].f_598))
			{
				Jump @214; //curOff = 178
			}
			else
			{
				STATS::STAT_ADD_BOUNTY_TARGET(Global_1235672[iVar1 /*697*/].f_598.f_1, PLAYER::GET_PLAYER_PED(iVar0));
				bVar2 = true;
			}
			else
			{
				iVar1++;
			}
			if (!bVar2)
			{
				return;
			}
			func_224(iVar0, func_223(iVar0));
		}
	}
}

bool func_94()
{
	return Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 != 255;
}

void func_95()
{
	Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = 255;
	Global_1245159.f_9807.f_5 = -1;
}

void func_96()
{
	int iVar0;

	switch (Global_1235672.f_9085.f_1)
	{
		case 0:
			if (func_225())
			{
				func_226(1);
			}
			break;
		case 1:
			if (func_182(Global_1235672.f_9085.f_100, 32))
			{
				if (func_182(Global_1235672.f_9085.f_100, 2))
				{
					func_226(2);
				}
				else if (func_182(Global_1235672.f_9085.f_100, 4))
				{
					if (func_227(Global_1235672.f_9085.f_100))
					{
						func_228(1);
						func_226(0);
						func_229();
					}
				}
				func_186(Global_1235672.f_9085.f_100, 32);
			}
			break;
		case 2:
			iVar0 = func_231(Global_1235672.f_9085.f_2, func_230(func_169(Global_1235672.f_9085.f_2), Global_1235672.f_9085.f_3), 1.038497E+13f, ENTITY::GET_ENTITY_COORDS(Global_33, true, false), 1, 0, 0, -1f);
			if (iVar0 != 0 || func_232(PLAYER::PLAYER_ID(), 1))
			{
				func_228(1);
				func_226(0);
				func_229();
				return;
			}
			func_89(4);
			func_233(Global_1235672.f_9085.f_2, Global_1235672.f_9085.f_3, 0);
			func_228(0);
			func_226(0);
			break;
	}
}

void func_97()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	var uVar4;
	int iVar5;

	iVar0 = Global_1245159.f_9807.f_6;
	iVar1 = func_234();
	iVar2 = func_235(0);
	Global_1245159.f_9807.f_6 = iVar1;
	Global_1235672.f_9085.f_5 = func_236(iVar2, iVar0, iVar1, &bVar3);
	if (Global_1235672.f_9085.f_5 != 1.96379E+16f)
	{
		if (bVar3)
		{
			func_237();
		}
		return;
	}
	if (!func_238(iVar2))
	{
		func_237();
		return;
	}
	iVar5 = -1;
	if (!func_239(1.038497E+13f, iVar2, &uVar4, &iVar5, 1, Global_1901671.f_170.f_24))
	{
		func_237();
		return;
	}
	func_233(uVar4, iVar5, 0);
	func_237();
}

struct<2> func_98(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_99(var uParam0, var uParam1)
{
	int iVar0;

	if ((Global_1295619.f_16 - Global_1245159.f_9814) > 60)
	{
		STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
		STATS::STAT_ID_SET_INT(&uParam0, iVar0 + 1, true);
		Global_1245159.f_9814 = Global_1295619.f_16;
		return 1;
	}
	return 0;
}

bool func_100(var uParam0, var uParam1)
{
	int iVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &iVar0);
	return iVar0 >= 600;
}

void func_101(var uParam0, var uParam1)
{
	STATS::STAT_ID_SET_INT(&uParam0, 0, true);
}

void func_102()
{
	int iVar0;

	func_240();
	Global_1235672.f_9208.f_6 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_241(iVar0))
		{
			Global_1235672.f_9208.f_3[iVar0] = 0;
		}
		else
		{
			func_242(&(Global_1235672.f_9208.f_6), iVar0);
			switch (iVar0)
			{
				case 0:
					Global_1235672.f_9208.f_3[iVar0] = func_243();
					break;
				case 1:
					Global_1235672.f_9208.f_3[iVar0] = func_244();
					break;
			}
		}
		iVar0++;
	}
}

int func_103()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		iVar0 = (iVar0 + func_245(iVar1));
		iVar1++;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(1, iVar0 + 1);
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (func_245(iVar1) == 0)
		{
		}
		else
		{
			iVar2 = (iVar2 - func_245(iVar1));
			if (iVar2 <= 0)
			{
				return iVar1;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_104(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_246();
		case 1:
			return func_247();
	}
	return false;
}

void func_105(int iParam0)
{
	var uVar0;
	int iVar1;
	struct<2> Var2;

	switch (iParam0)
	{
		case 0:
			func_239(2.584403E+29f, 0, &uVar0, &iVar1, 0, -1f);
			func_233(uVar0, iVar1, 0);
			func_248(1048576);
			func_248(524288);
			break;
		case 1:
			func_250(-6.309104E-26f, 0, &uVar0, &iVar1, func_249(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12), 0, Global_1901671.f_170.f_42);
			func_233(uVar0, iVar1, 0);
			break;
	}
	Var2 = { func_98(-5.15191E+16f) };
	STATS::STAT_ID_SET_INT(&Var2, iParam0, true);
}

bool func_106(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 4);
}

int func_107(struct<2> Param0)
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
		if (func_251(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_108(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = func_252(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

int func_109(bool bParam0)
{
	if (!func_253(-251222f, bParam0))
	{
		return 0;
	}
	return 1;
}

void func_110(int iParam0, int iParam1)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (func_40(iParam0, iParam1))
	{
		func_146(&(Global_1235672[iParam0 /*697*/].f_568), iParam1);
	}
}

void func_111(int iParam0)
{
	if (Global_1235672[iParam0 /*697*/].f_571 != -1.115319E-25f)
	{
		return;
	}
	if (!func_40(iParam0, 2.524355E-29f))
	{
		return;
	}
	if (func_40(iParam0, 1.084202E-19f))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_181(3.860261E-17f, 0, 0);
}

bool func_112(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_108(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_113(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GUN_FOR_HIRE"):
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("DYNAMIC"):
			return 6;
		case joaat("HIDEOUT"):
			return 5;
	}
	return 0;
}

void func_114(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_254(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_255();
		Global_1900412.f_9 = func_256(Global_1893611.f_2);
		Global_1900412.f_11 = func_257(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

void func_115(int iParam0, int iParam1)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (func_66(iParam0, iParam1, 255))
	{
		func_146(&(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);
	}
}

void func_116(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_36(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_112(Param0) && !func_51(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_259(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_108(Param0) == 3)
		{
			func_260(1, -4.059512E-23f);
		}
		else if (func_108(Param0) == 4)
		{
			func_260(0, -4.059512E-23f);
		}
	}
	if ((func_108(Param0) == 3 || func_108(Param0) == 1) || ((bParam5 && func_108(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_259(Param0))))
	{
		if (iParam3 != -1)
		{
			func_261(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_261(Param0, 2, iParam4, 255, 0);
		}
	}
	func_262(Param0, 0);
	if (func_251(func_263(0), Param0))
	{
		func_264(1);
		func_265(0);
		func_266(0);
		func_267(1);
	}
	func_268(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_269(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

int func_117(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_107(Param0);
	if (func_107(Param0) < 0)
	{
		return 0;
	}
	func_270(iVar0, uParam2);
	return 1;
}

void func_118(bool bParam0)
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

void func_119(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	iVar0 = func_235(0);
	if (iVar0 == 0)
	{
		return;
	}
	bVar1 = func_271(bParam2);
	if (bParam2)
	{
		iVar3 = (Global_1901671.f_170.f_18 / 1000);
		bVar2 = true;
	}
	else if (bVar1)
	{
		iVar3 = (func_272(iVar0) / 1000);
	}
	else if (bParam1)
	{
		iVar3 = (func_273(iVar0) / 1000);
	}
	else
	{
		iVar3 = (func_274(iVar0) / 1000);
	}
	if (bParam0 || bParam2)
	{
		Global_1245159.f_9807.f_1 = (Global_1295619.f_16 + iVar3);
		func_275(2, 1);
	}
	else
	{
		Global_1245159.f_9807.f_1 = 0;
		func_276(2, 1);
	}
	if (bVar2 && Global_1245159.f_9807 > Global_1295619.f_16)
	{
		Global_1245159.f_9807 = (Global_1245159.f_9807 + iVar3);
	}
	else
	{
		Global_1245159.f_9807 = (Global_1295619.f_16 + iVar3);
	}
}

bool func_120(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("CAMP_RAID"):
			return true;
		default:
			break;
	}
	return false;
}

void func_121(int iParam0, int iParam1, int iParam2)
{
	struct<2> Var0;

	Var0 = { func_98(1.314062E-19f) };
	STATS::STAT_ID_SET_INT(&Var0, 0, true);
}

bool func_122(int iParam0)
{
	if (Global_1235672[iParam0 /*697*/].f_571 != 4.213218E+30f)
	{
		return false;
	}
	return func_277(Global_1225084[iParam0 /*28*/], Global_1225084[iParam0 /*28*/].f_6, Global_1225084[iParam0 /*28*/].f_19);
}

void func_123(bool bParam0)
{
	struct<2> Var0;

	Var0 = { func_278(1.360973E+30f) };
	STATS::STAT_ID_SET_BOOL(&Var0, bParam0, true);
}

void func_124(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_98(3.570843E+36f) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

void func_125(int iParam0)
{
	if (func_279(iParam0))
	{
		func_280(1);
	}
	if (func_281(iParam0))
	{
		func_280(2);
	}
	if (func_282(iParam0))
	{
		func_280(3);
	}
	if (func_283(iParam0))
	{
		func_280(4);
	}
}

bool func_126(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_127(int iParam0)
{
	int iVar0;

	if (!func_126(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

bool func_128(int iParam0, int iParam1)
{
	return (func_106(iParam0) && (Global_1235672.f_9062[iParam0 /*4*/] == -1 || Global_1235672.f_9062[iParam0 /*4*/] == iParam1));
}

void func_129(int iParam0, int iParam1)
{
	if (Global_1225084[iParam0 /*28*/].f_2 != iParam1)
	{
		Global_1225084[iParam0 /*28*/].f_2 = iParam1;
	}
}

bool func_130(int iParam0)
{
	int iVar0;

	iVar0 = func_284(iParam0);
	if (iVar0 != 0 && func_285(iVar0))
	{
		return false;
	}
	if (iParam0 == 2.684408E+23f)
	{
		return func_286();
	}
	return true;
}

void func_131(int iParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (!func_147(iParam0, 2f))
	{
		if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1225084[iParam0 /*28*/].f_13))
		{
			if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1225084[iParam0 /*28*/].f_13) > 0)
			{
				iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1225084[iParam0 /*28*/].f_13);
				if (Global_1225084[iParam0 /*28*/].f_15 != iVar1)
				{
					Global_1225084[iParam0 /*28*/].f_15 = iVar1;
				}
			}
			iVar2 = 0;
			while (iVar2 <= 31)
			{
				iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
				{
					if (GANG::_NETWORK_IS_GANG_MEMBER(Global_1225084[iParam0 /*28*/].f_13, iVar1))
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
					}
					else if (Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f && Global_1225084[iParam0 /*28*/].f_16 == iVar1)
					{
						Global_1225084[iParam0 /*28*/].f_13 = GANG::NETWORK_GET_GANG_ID(iVar1);
						Global_1225084[iParam0 /*28*/].f_15 = iVar1;
						SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&uVar0);
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iVar2);
					}
				}
				iVar2++;
			}
		}
		else if (Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f && func_287(Global_1225084[iParam0 /*28*/].f_16, 0, 1))
		{
			Global_1225084[iParam0 /*28*/].f_13 = GANG::NETWORK_GET_GANG_ID(Global_1225084[iParam0 /*28*/].f_16);
			Global_1225084[iParam0 /*28*/].f_15 = Global_1225084[iParam0 /*28*/].f_16;
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, Global_1225084[iParam0 /*28*/].f_16);
		}
	}
	Global_1225084[iParam0 /*28*/].f_14 = uVar0;
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_288(iParam0);
	iVar1 = Global_1225084[iParam0 /*28*/].f_1;
	if (iVar1 != iVar0)
	{
		if (iVar1 != -1)
		{
			Global_1225084.f_365[iVar1] = (Global_1225084.f_365[iVar1] - 1);
		}
		if (iVar0 != -1)
		{
			Global_1225084.f_365[iVar0]++;
		}
		Global_1225084[iParam0 /*28*/].f_1 = iVar0;
	}
}

void func_133(int iParam0)
{
	if (func_40(iParam0, 1))
	{
		func_129(iParam0, 2);
	}
}

void func_134(int iParam0)
{
	bool bVar0;
	bool bVar1;

	if (func_289(iParam0, &bVar1))
	{
		bVar0 = true;
	}
	if (!func_290(Global_1225084[iParam0 /*28*/].f_10))
	{
		func_174(&(Global_1225084[iParam0 /*28*/].f_10));
	}
	else if (func_175(Global_1225084[iParam0 /*28*/].f_10) > 45000 && !bVar0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (func_291(Global_1235672[iParam0 /*697*/].f_571, 0) && !func_147(iParam0, 524288))
		{
			func_292(Global_1225084[iParam0 /*28*/].f_13, Global_1235672[iParam0 /*697*/].f_598, func_40(iParam0, 1.504633E-36f));
		}
		func_293(&(Global_1225084[iParam0 /*28*/].f_10));
		func_129(iParam0, 3);
	}
	else if (bVar0)
	{
		func_293(&(Global_1225084[iParam0 /*28*/].f_10));
		func_129(iParam0, 2);
	}
}

void func_135(int iParam0)
{
	if (!func_147(iParam0, 32) && func_294(iParam0, 32, 0))
	{
		func_295(iParam0);
		func_296(iParam0, 32);
	}
	else if (!func_147(iParam0, 16) && func_294(iParam0, 16, 0))
	{
		func_295(iParam0);
		func_296(iParam0, 16);
	}
	if (!func_147(iParam0, 4096) && func_294(iParam0, 4096, 0))
	{
		func_296(iParam0, 4096);
	}
	if (func_297(iParam0))
	{
		func_129(iParam0, 3);
	}
}

void func_136(int iParam0)
{
	if (func_298(iParam0))
	{
		func_299(iParam0);
	}
}

char* func_137()
{
	return "net_fetch_hideout_leader";
}

void func_138(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Global_1225084.f_369[iParam0 /*2*/] = { Var0 };
}

int func_139(var uParam0)
{
	return *uParam0;
}

struct<40> func_140(var uParam0, int iParam1)
{
	struct<40> Var0;

	Var0 = { func_300(uParam0, iParam1) };
	func_301(uParam0, iParam1);
	return Var0;
}

bool func_141(var uParam0, var uParam1)
{
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 != uParam1->f_2)
	{
		return false;
	}
	if (uParam0->f_3 != uParam1->f_3)
	{
		return false;
	}
	if (uParam0->f_4 != -1 && uParam1->f_1 != -1)
	{
		if (uParam0->f_1 == uParam1->f_1 && uParam0->f_4 == uParam1->f_4)
		{
			return true;
		}
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 != uParam1->f_5)
	{
		return false;
	}
	if (uParam0->f_7 != uParam1->f_7)
	{
		return false;
	}
	if (uParam0->f_8 != uParam1->f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_1 != uParam1->f_8.f_1)
	{
		return false;
	}
	if (!func_251(uParam0->f_8.f_5, uParam1->f_8.f_5))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_2 != uParam1->f_8.f_5.f_2)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_3 != uParam1->f_8.f_5.f_3)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_4 != uParam1->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_5 != uParam1->f_8.f_5.f_5)
	{
		return false;
	}
	if (!func_251(uParam0->f_8.f_5.f_6, uParam1->f_8.f_5.f_6))
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_8 != uParam1->f_8.f_5.f_8)
	{
		return false;
	}
	if (uParam0->f_8.f_5.f_9 != uParam1->f_8.f_5.f_9)
	{
		return false;
	}
	return true;
}

void func_142(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_143(var uParam0)
{
	return *uParam0;
}

int func_144(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 10;
		default:
			break;
	}
	return 1;
}

void func_145(var uParam0, float fParam1)
{
	*uParam0 = (*uParam0 || fParam1);
}

void func_146(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_147(int iParam0, float fParam1)
{
	return (func_63(iParam0) && func_64(Global_1225084[iParam0 /*28*/].f_3, fParam1));
}

bool func_148()
{
	return (func_302() != 0 || func_303(1));
}

bool func_149()
{
	return func_304() != 0;
}

void func_150(int iParam0, int iParam1)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (!func_40(iParam0, iParam1))
	{
		func_145(&(Global_1235672[iParam0 /*697*/].f_568), iParam1);
	}
}

int func_151(int iParam0)
{
	if (func_149())
	{
		return 0;
	}
	if (!func_148())
	{
		return 0;
	}
	if (func_305())
	{
		func_306(2);
	}
	else
	{
		func_306(1);
	}
	func_307(iParam0);
	return 1;
}

void func_152(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_308(iParam0, 1))
	{
		return;
	}
	bVar0 = func_309();
	func_310(iParam0);
	if (iParam1 == -1)
	{
		iVar1 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_7;
		if (iVar1 > 1)
		{
			iVar1 = 1;
		}
		iParam1 = 0;
		while (iParam1 < iVar1)
		{
			func_311(iParam0, iParam1, bVar0);
			iParam1++;
		}
	}
	else
	{
		func_311(iParam0, iParam1, bVar0);
	}
	if (bVar0)
	{
		func_312(iParam0);
	}
}

void func_153(int iParam0)
{
	var uVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	while (iVar2 <= 31)
	{
		iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3) && Global_1225672[iVar2 /*303*/][iParam0 /*23*/].f_22 == Global_1225084[iParam0 /*28*/].f_9)
		{
			uVar0 = (uVar0 || Global_1225672[iVar2 /*303*/][iParam0 /*23*/].f_19);
			if (GANG::NETWORK_GET_GANG_ID(iVar3) == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
			{
				uVar1 = (uVar1 || Global_1225672[iVar2 /*303*/][iParam0 /*23*/].f_19);
			}
		}
		iVar2++;
	}
	Global_1235672[iParam0 /*697*/].f_569 = uVar0;
	Global_1235672[iParam0 /*697*/].f_570 = uVar1;
}

void func_154(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1235672[iParam0 /*697*/].f_567 < 0 || Global_1235672[iParam0 /*697*/].f_567 >= 3)
	{
		return;
	}
	if (func_66(iParam0, 8388608, 255))
	{
		return;
	}
	if (func_314(func_313(Global_1225084[iParam0 /*28*/])) && Global_1235672[iParam0 /*697*/].f_567 < 2)
	{
		return;
	}
	iVar0 = func_315(iParam0);
	func_316(iParam0, iVar0);
	switch (iVar0)
	{
		case 2:
			iVar1 = Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_21;
			if (iVar1 != -1)
			{
				iVar2 = Global_1235672[iParam0 /*697*/].f_611;
			}
			func_317(iParam0, iVar2);
			break;
		case 1:
			func_318(iParam0);
			break;
		case 17:
			break;
		case 3:
			if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				if (func_51(Global_1235672[iParam0 /*697*/].f_598) || func_112(Global_1235672[iParam0 /*697*/].f_598))
				{
					func_52(iParam0);
				}
			}
			else
			{
				func_317(iParam0, iVar2);
			}
			break;
		default:
			if (func_51(Global_1235672[iParam0 /*697*/].f_598) || func_112(Global_1235672[iParam0 /*697*/].f_598))
			{
				func_52(iParam0);
			}
			break;
	}
}

void func_155(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if (func_294(iParam0, 8388608, 0))
	{
		return;
	}
	if (func_147(iParam0, 131072))
	{
		func_319(iParam0, 3.85186E-34f);
		return;
	}
	if ((func_294(iParam0, 1.504633E-36f, 1) && !func_294(iParam0, 2, 1)) && !func_294(iParam0, 3.85186E-34f, 1))
	{
		func_320(5.286867E-36f, 0, 1);
		func_319(iParam0, 3.85186E-34f);
	}
}

void func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	if (Global_1225084[iParam0 /*28*/].f_2 == 3 || Global_1235672[iParam0 /*697*/].f_567 == 3)
	{
		return;
	}
	if (Global_1225084[iParam0 /*28*/].f_12 != 0 && Global_1225084[iParam0 /*28*/].f_12 != Global_1235672[iParam0 /*697*/].f_605)
	{
		Global_1235672[iParam0 /*697*/].f_605 = Global_1225084[iParam0 /*28*/].f_12;
	}
	if (Global_1235672[iParam0 /*697*/].f_605 == Global_1235672[iParam0 /*697*/].f_606)
	{
		return;
	}
	Global_1235672[iParam0 /*697*/].f_606 = Global_1235672[iParam0 /*697*/].f_605;
	iVar0 = 0;
	while (iVar0 <= 24)
	{
		if (!MISC::IS_BIT_SET(Global_1235672[iParam0 /*697*/].f_605, iVar0))
		{
		}
		else
		{
			iVar1 = uVar2;
			Var3 = { func_321(iParam0, iVar0) };
			if (PED::ADD_RELATIONSHIP_GROUP(&Var3, &iVar1))
			{
				func_322(iParam0, iVar0, iVar1);
				func_323(iParam0, iVar0, iVar1);
			}
		}
		iVar0++;
	}
}

bool func_157(int iParam0, bool bParam1)
{
	int iVar0;

	if (!bParam1)
	{
		return true;
	}
	iVar0 = Global_1225084[iParam0 /*28*/].f_2;
	if (iVar0 == 3 || iVar0 == -1)
	{
		return true;
	}
	if (Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != -1 && Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 != Global_1225084[iParam0 /*28*/].f_9)
	{
		return true;
	}
	return false;
}

void func_158(int iParam0, int iParam1)
{
	if (Global_1235672[iParam0 /*697*/].f_567 != iParam1)
	{
		Global_1235672[iParam0 /*697*/].f_567 = iParam1;
	}
}

bool func_159(int iParam0, bool bParam1, bool bParam2)
{
	if (func_147(iParam0, 64))
	{
		return false;
	}
	return (bParam1 && !bParam2);
}

void func_160(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_40(iParam0, 1))
	{
		iVar0 = Global_1225084[iParam0 /*28*/];
		iVar1 = func_169(iVar0);
		iVar2 = Global_1225084[iParam0 /*28*/].f_6;
		Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_22 = Global_1225084[iParam0 /*28*/].f_9;
		Global_1235672[iParam0 /*697*/].f_602 = func_324(iVar1, iVar2);
		Global_1235672[iParam0 /*697*/].f_603 = func_230(iVar1, iVar2);
		Global_1235672[iParam0 /*697*/].f_571 = func_313(iVar0);
		Global_1235672[iParam0 /*697*/].f_598 = { func_325(iParam0) };
		Global_1235672[iParam0 /*697*/].f_612 = func_326(iVar0, iVar2);
		Global_1235672[iParam0 /*697*/].f_613 = func_327(iVar0, iVar2);
		Global_1235672[iParam0 /*697*/].f_609 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		iVar4 = func_328(iVar1, iVar2);
		iVar3 = 0;
		while (iVar3 <= (iVar4 - 1))
		{
			Global_1235672[iParam0 /*697*/].f_554[iVar3 /*3*/] = func_329(iVar1, iVar2, iVar3);
			Global_1235672[iParam0 /*697*/].f_554[iVar3 /*3*/].f_1 = func_330(iVar1, iVar2, iVar3);
			Global_1235672[iParam0 /*697*/].f_554[iVar3 /*3*/].f_2 = func_331(iVar1, iVar2, iVar3);
			iVar3++;
		}
		if (Global_1235672[iParam0 /*697*/].f_571 == 2.584403E+29f)
		{
			Global_1235672[iParam0 /*697*/].f_614 = { Global_1225084[iParam0 /*28*/].f_19 };
		}
		else
		{
			Global_1235672[iParam0 /*697*/].f_614 = { func_332(iVar0, iVar2) };
		}
		if (Global_1225084[iParam0 /*28*/].f_22 != 0)
		{
			func_333(&(Global_1225084[iParam0 /*28*/].f_22), &(Global_1235672[iParam0 /*697*/].f_657), 0);
		}
		iVar5 = func_334(iVar0, iVar2);
		if (iVar5 > 0)
		{
			iVar6 = 0;
			while (iVar6 <= (iVar5 - 1))
			{
				Global_1235672[iParam0 /*697*/].f_617[iVar6 /*3*/] = { func_335(iVar1, iVar2, iVar6) };
				iVar6++;
			}
		}
		if (func_336(iVar1, iVar2))
		{
			func_150(iParam0, 4096);
		}
		if (func_337(iVar1, iVar2))
		{
			func_150(iParam0, 8192);
		}
		if (func_338(iVar1, iVar2))
		{
			func_150(iParam0, 16384);
		}
		if (func_339(iVar1, iVar2) && PLAYER::PLAYER_ID() != Global_1225084[iParam0 /*28*/].f_16)
		{
			func_150(iParam0, 32768);
		}
		if (func_340(iVar1, iVar2))
		{
			func_150(iParam0, 131072);
		}
		if (func_341(iVar1, iVar2))
		{
			func_150(iParam0, 262144);
		}
		if (func_342(iVar1, iVar2))
		{
			func_150(iParam0, 1.504633E-36f);
		}
		func_150(iParam0, 1);
	}
	if (Global_1225084[iParam0 /*28*/].f_2 == 3)
	{
		func_158(iParam0, 3);
	}
	else if (Global_1225084[iParam0 /*28*/].f_2 > 0 && Global_1225084[iParam0 /*28*/].f_2 <= 1)
	{
		func_158(iParam0, 1);
	}
	else if (Global_1225084[iParam0 /*28*/].f_2 >= 2)
	{
		func_158(iParam0, 2);
	}
}

void func_161(int iParam0)
{
	if (!func_314(Global_1235672[iParam0 /*697*/].f_571))
	{
		func_343(iParam0);
		func_344(iParam0);
	}
	if (Global_1225084[iParam0 /*28*/].f_2 != 1)
	{
		func_158(iParam0, Global_1225084[iParam0 /*28*/].f_2);
	}
}

void func_162(int iParam0)
{
	if (!func_40(iParam0, 131072) && (func_147(iParam0, 4096) || func_147(iParam0, 16)))
	{
		func_345(Global_1235672[iParam0 /*697*/].f_598);
	}
	func_343(iParam0);
	func_344(iParam0);
	func_346(iParam0);
}

void func_163(int iParam0)
{
	if (func_347(iParam0))
	{
		func_34(iParam0);
	}
}

void func_164()
{
	func_348(1);
}

void func_165(int iParam0, int iParam1)
{
	switch (Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_1)
	{
		case -476186606:
			if (!func_40(iParam0, 16))
			{
				return;
			}
		case joaat("DISABLE"):
			switch (Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/])
			{
				case joaat("SHOP"):
					func_350(func_349(Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 1, 1112014848 /* Float: 50f */);
					break;
				case joaat("SHOP_TYPE"):
					func_352(func_351(Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 1, 1112014848 /* Float: 50f */);
					break;
				case joaat("MINIGAME"):
					func_354(func_353(Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2));
					break;
			}
			break;
		case joaat("COWER_ON_AGGRO"):
			if (func_147(iParam0, 1))
			{
				switch (Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/])
				{
					case joaat("SHOP"):
						func_350(func_349(Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 2, 1112014848 /* Float: 50f */);
						break;
					case joaat("SHOP_TYPE"):
						func_352(func_351(Global_1235672[iParam0 /*697*/].f_554[iParam1 /*3*/].f_2), 2, 1112014848 /* Float: 50f */);
						break;
					case joaat("MINIGAME"):
						break;
				}
			}
			break;
	}
}

void func_166()
{
	Global_1149417.f_5568.f_22 = MISC::GET_FRAME_COUNT();
}

int func_167()
{
	return Global_1108965.f_34.f_612;
}

void func_168(int iParam0, struct<2> Param1, bool bParam3, bool bParam4)
{
	int iVar0;

	if (bParam3)
	{
		if (!func_36(Param1))
		{
			return;
		}
		if (func_355(Param1, 1))
		{
			return;
		}
		if (func_356(Param1))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	func_357(iVar0);
	if (Global_1108965.f_34.f_353[iVar0 /*6*/] && Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 == -1)
	{
		return;
	}
	if (!func_112(Param1) || !bParam3)
	{
		Global_1108965.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 = 5;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_4 = Global_1295619.f_16;
		if (bParam4)
		{
			Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
		if (bParam3)
		{
			Global_1108965.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		}
		Global_1108965.f_34.f_546[iVar0 /*2*/] = { func_177(iParam0) };
	}
	else
	{
		Global_1108965.f_34.f_353[iVar0 /*6*/] = 1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_1 = iParam0;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_2 = { Param1 };
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_5 = -1;
		Global_1108965.f_34.f_353[iVar0 /*6*/].f_4 = Global_1295619.f_16;
		Global_1108965.f_34.f_546[iVar0 /*2*/] = { func_177(iParam0) };
		if (bParam4)
		{
			Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 1;
		}
	}
	if (Global_1108965.f_34[iVar0 /*11*/].f_6)
	{
		func_358(iVar0);
	}
}

int func_169(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_170(int iParam0, var uParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_359(&Var1, iParam0) && func_360(&Var1, uParam1))
	{
		func_361(Var1, -2.913395E-35f, &iVar0, 0);
	}
	return iVar0;
}

void func_171(int iParam0)
{
	Global_1235672.f_9085 = (Global_1235672.f_9085 || iParam0);
}

Vector3 func_172(int iParam0)
{
	return Global_1235672[iParam0 /*697*/].f_614;
}

float func_173(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_174(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_175(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_176(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return Global_1101558[iParam0 /*38*/].f_16;
}

struct<2> func_177(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_178(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_17() == 0)
	{
		return func_362(iParam0);
	}
	return iParam0 <= func_180();
}

int func_179(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_180()
{
	if (func_17() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_181(int iParam0, int iParam1, int iParam2)
{
	return func_363(iParam0, iParam1, iParam2);
}

bool func_182(int iParam0, int iParam1)
{
	return (Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 && iParam1) != 0;
}

void func_183(int iParam0, int iParam1)
{
	Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 = (Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 || iParam1);
}

int func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_88(iParam0, 255))
	{
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
		iVar1 = 1;
		iVar3 = func_364();
		iVar0 = 0;
		while (iVar0 < iVar3)
		{
			iVar2 = func_365(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
			{
			}
			else if (!func_88(iParam1, iVar2))
			{
				iVar1 = 0;
			}
			iVar0++;
		}
		return iVar1;
	}
	return 0;
}

bool func_185(int iParam0, int iParam1)
{
	int iVar0;

	if (func_88(iParam0, 255))
	{
		iVar0 = func_366();
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return true;
		}
		return !func_88(iParam1, iVar0);
	}
	return false;
}

void func_186(int iParam0, int iParam1)
{
	Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 = (Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 - (Global_1235672.f_9085.f_16[iParam0 /*8*/].f_5 && iParam1));
}

bool func_187(int iParam0)
{
	if (func_182(iParam0, 1))
	{
		if (func_182(iParam0, 32))
		{
			return true;
		}
		if (func_182(iParam0, 2))
		{
			if (func_182(iParam0, 128))
			{
				func_186(iParam0, 128);
			}
			else
			{
				func_183(iParam0, 8);
			}
		}
		else if (func_182(iParam0, 4))
		{
			if (!func_227(iParam0))
			{
				func_186(iParam0, 4);
				func_186(iParam0, 1);
				Global_1235672.f_9085.f_16[iParam0 /*8*/].f_7 = 0;
				return false;
			}
			else if (func_182(iParam0, 128))
			{
				func_186(iParam0, 128);
			}
			else
			{
				func_183(iParam0, 8);
			}
		}
		return true;
	}
	return false;
}

bool func_188(int iParam0)
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(4.240444E+13f))
	{
		func_367(2.498545E-12f, 0, 255, 0, 0);
	}
	return BOUNTY::_BOUNTY_REQUEST_BECOME_TARGET_OF_CHARACTER_BOUNTY_HUNT(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

int func_189(int iParam0)
{
	var uVar0;
	var uVar1;

	SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Global_1235672.f_9085.f_118), &(Global_1235672.f_9085.f_119), &uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Global_1235672.f_9085.f_118), &uVar1);
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar1))
	{
		if (BOUNTY::_0x27D3A0E1FE090A43(&uVar1))
		{
			SCRIPTS::_0xFFDDF802279BE128(&uVar1, &uVar0, &(Global_1235672.f_9085.f_119));
			func_183(iParam0, 8);
			return 1;
		}
	}
	else
	{
		func_183(iParam0, 8);
		return 1;
	}
	return 0;
}

bool func_190(int iParam0)
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(4.240444E+13f))
	{
		func_367(1.571999E+07f, 0, 255, 0, 0);
	}
	return BOUNTY::_BOUNTY_REQUEST_SELF_REPORT_KILLED_BY_BOUNTY_HUNTER(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

int func_191(int iParam0)
{
	if (UNLOCK::UNLOCK_IS_UNLOCKED(4.240444E+13f))
	{
		func_367(1.571999E+07f, 0, 255, 0, 0);
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Global_1235672.f_9085.f_119));
	func_183(iParam0, 8);
	return 1;
}

bool func_192(int iParam0)
{
	return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

bool func_193(int iParam0)
{
	int iVar0;

	iVar0 = func_366();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_183(iParam0, 8);
		return false;
	}
	if (!func_88(8, iVar0))
	{
		return false;
	}
	return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

bool func_194(int iParam0)
{
	return BOUNTY::_BOUNTY_REQUEST_ESCAPED_CHARACTER_BOUNTY_HUNT(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

bool func_195(int iParam0, int iParam1)
{
	return BOUNTY::_BOUNTY_REQUEST_POSSE_LEADER_CLAIM_CHARACTER_BOUNTY(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), iParam1, &(Global_1235672.f_9085.f_104));
}

bool func_196(int iParam0)
{
	int iVar0;

	iVar0 = func_366();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_183(iParam0, 8);
		return false;
	}
	if (!func_88(32, iVar0))
	{
		return false;
	}
	return BOUNTY::_BOUNTY_REQUEST_POSSE_MEMBER_CLAIM_CHARACTER_BOUNTY_SHARE(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235672.f_9085.f_104));
}

bool func_197(int iParam0, int iParam1)
{
	return BOUNTY::_BOUNTY_REQUEST_CLAIM_CHARACTER_BOUNTY(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), iParam1, &(Global_1235672.f_9085.f_104));
}

int func_198(int iParam0)
{
	BOUNTY::_BOUNTY_CLEAR_BEING_BOUNTY_HUNTER();
	func_183(iParam0, 8);
	return 1;
}

int func_199(int iParam0)
{
	BOUNTY::_BOUNTY_CLEAR_BEING_TARGET();
	func_183(iParam0, 8);
	return 1;
}

bool func_200(int iParam0, int iParam1)
{
	return BOUNTY::_BOUNTY_REQUEST_BRIBE_JAIL_GUARD(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), iParam1);
}

bool func_201(int iParam0)
{
	return BOUNTY::_BOUNTY_REQUEST_SERVED_FULL_JAIL_SENTENCE(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1));
}

bool func_202(int iParam0)
{
	func_183(iParam0, 8);
	return BOUNTY::_BOUNTY_REQUEST_BEGIN_WANTED_POSTER(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235672.f_9085.f_101));
}

bool func_203(int iParam0)
{
	int iVar0;

	iVar0 = Global_1235672.f_9085.f_16[iParam0 /*8*/].f_6;
	func_183(iParam0, 8);
	if (func_368(iVar0))
	{
		return BOUNTY::_0x81847C2134039BDC(&(Global_1225084[iVar0 /*28*/].f_14));
	}
	return false;
}

bool func_204(int iParam0)
{
	bool bVar0;

	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
	{
		bVar0 = BOUNTY::_BOUNTY_REQUEST_COMPLETE_SPLIT_WANTED_POSTER(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235672.f_9085.f_104));
	}
	else
	{
		bVar0 = BOUNTY::_BOUNTY_REQUEST_COMPLETE_WANTED_POSTER(&(Global_1235672.f_9085.f_16[iParam0 /*8*/].f_1), &(Global_1235672.f_9085.f_104));
	}
	if (!bVar0)
	{
		func_181(3.860261E-17f, 0, 0);
	}
	return bVar0;
}

int func_205(int iParam0)
{
	func_183(iParam0, 8);
	BOUNTY::_BOUNTY_CANCEL_WANTED_POSTER();
	return 1;
}

bool func_206(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084.f_586), iParam0);
}

void func_207(int iParam0)
{
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1225084.f_586), iParam0);
}

bool func_208(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;

	iVar2 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	vVar3 = { func_222(iVar2) };
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (iVar0 == iParam0)
		{
		}
		else if (!func_206(iVar0) || func_88(4, iParam0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (GANG::NETWORK_IS_IN_SAME_GANG(iVar2, iVar1))
			{
				return false;
			}
			if (BUILTIN::VDIST(vVar3, func_222(iVar1)) <= Global_1901671.f_170.f_25)
			{
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

void func_209(int iParam0)
{
	if (!func_206(iParam0))
	{
		return;
	}
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1225084.f_586), iParam0);
}

void func_210(int iParam0)
{
	Global_1235672.f_9085 = (Global_1235672.f_9085 - (Global_1235672.f_9085 && iParam0));
}

bool func_211(var uParam0, var uParam1)
{
	*uParam1 = 0;
	if (func_218())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return false;
	}
	if ((MISC::GET_GAME_TIMER() - uParam0->f_1) > 300000)
	{
		*uParam1 = 1;
		return false;
	}
	if (uParam0->f_2)
	{
		return false;
	}
	return true;
}

void func_212(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_369(1257.992f, 4) };
	func_370(Var0);
	func_261(Var0, -1, 0, iParam0, iParam1);
}

bool func_213(int iParam0)
{
	return func_371(1, iParam0);
}

bool func_214(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_372(bParam1, bParam2, bParam3);
	}
	if (Global_1572887.f_14 != -1)
	{
		if (iParam0 == Global_1295619.f_5)
		{
			if (!Global_1295619.f_6)
			{
				return false;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return false;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return false;
	}
	if (LAW::IS_LAW_INCIDENT_ACTIVE(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((bParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return true;
		}
	}
	else if (bParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 9.534398E+10f)
	{
		return false;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::GET_PLAYER_REGISTERED_CRIME(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (bParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return true;
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
				return true;
			}
		}
	}
	return false;
}

bool func_215(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

struct<2> func_216()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_217(struct<2> Param0, struct<2> Param2, bool bParam4, bool bParam5)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!bParam4)
	{
		if (func_26())
		{
			return true;
		}
	}
	Var0 = -1;
	Var0.f_1 = -1;
	if (!func_36(Param2))
	{
		Var0 = { func_373() };
	}
	else
	{
		Var0 = { Param2 };
	}
	if ((!bParam5 && func_36(Var0)) && !func_251(Var0, Param0))
	{
		return true;
	}
	Var2 = { func_374() };
	if (func_36(Var2) && (!func_36(Var2) || !func_251(Param0, Var2)))
	{
		return true;
	}
	return false;
}

bool func_218()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

float func_219(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (func_80(2))
	{
		return 5.462576E-27f;
	}
	if (func_94())
	{
		return -57.54781f;
	}
	if (!func_88(2, 255))
	{
		return 8.279942E+27f;
	}
	if (func_375(iParam0))
	{
		return -0.1119227f;
	}
	if (Global_1235672.f_9085.f_14 >= 1)
	{
		return 2.484775E-11f;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1.769149E+29f;
	}
	if (iParam0 == iParam1)
	{
		return -1.785733E-22f;
	}
	if (GANG::NETWORK_IS_IN_SAME_GANG(iParam1, iParam0))
	{
		return -2.183215E-13f;
	}
	Var0 = { func_177(iParam0) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var0, &iVar2);
	if (iVar2 < BOUNTY::_0xD6A67E2FF373D0E3(func_376(7)))
	{
		return -9.407104E+35f;
	}
	if (BUILTIN::VDIST(func_222(iParam0), func_222(iParam1)) > (Global_1901671.f_170.f_23 * Global_1149417.f_4786))
	{
		return -4.285363E+16f;
	}
	return -1.326161E+17f;
}

int func_220(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	char* sVar7;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_377(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar5 = func_378(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_379(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_379(iParam1, iParam2, 3);
					}
					else
					{
						func_379(iParam1, iParam2, 4);
					}
					func_380(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_381(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_379(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_379(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_379(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_381(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_379(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_379(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_381(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_379(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_221(int iParam0, int iParam1)
{
	struct<55> Var0;
	struct<2> Var55;
	char* sVar57;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_18 = 27.64779f;
	Var0.f_19 = 27.64779f;
	Var0.f_25 = 300;
	Var0.f_33.f_8 = 27.64779f;
	Var0.f_33.f_11 = 27.64779f;
	Var0.f_33.f_12 = 8000;
	Var0.f_33.f_13 = 1.051843E+16f;
	Var0.f_33.f_15 = 1.608566E+13f;
	Var0.f_33.f_21 = 1;
	Var0.f_24 = 1;
	Var0.f_26 = 21;
	Var0.f_27 = iParam0;
	Var0.f_16 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var55 = { func_177(iParam0) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var55, &sVar57);
	Var0.f_17 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar57);
	Var0.f_33.f_2 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_TITLE");
	Var0.f_33.f_3 = MISC::VAR_STRING(2, "FETCH_PLAYER_BOUNTY_REQUEST_BODY", sVar57);
	if (iParam1 != 0)
	{
		Var0.f_33.f_6 = iParam1;
		Var0.f_33.f_7 = iParam1;
		Var0.f_33.f_21 = 0;
		Var0.f_20 = iParam1;
		Var0.f_21 = iParam1;
	}
	else
	{
		Var0.f_33.f_6 = 6.522135E+22f;
		Var0.f_33.f_7 = 1.749576E+13f;
		Var0.f_20 = 6.522135E+22f;
		Var0.f_21 = 1.749576E+13f;
	}
	Var0.f_33.f_17 = "HUD_Toast_Soundset";
	Var0.f_33.f_18 = "Toast_On";
	func_382(Var0);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_8), iParam0);
	Global_1235672.f_9085.f_9[Global_1235672.f_9085.f_14 /*4*/] = iParam0;
	Global_1235672.f_9085.f_9[Global_1235672.f_9085.f_14 /*4*/].f_1 = MISC::GET_GAME_TIMER();
	Global_1235672.f_9085.f_14++;
}

Vector3 func_222(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_223(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (func_66(iVar0, 32, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_224(int iParam0, int iParam1)
{
	func_383(iParam0, 0);
	Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = iParam0;
	if (iParam1 != -1)
	{
		Global_1225084[iParam1 /*28*/].f_18 = iParam0;
	}
}

bool func_225()
{
	bool bVar0;
	int iVar1;

	iVar1 = func_235(1);
	Global_1235672.f_9085.f_4 = func_384(iVar1, &bVar0);
	if (Global_1235672.f_9085.f_4 != 1.96379E+16f)
	{
		if (bVar0)
		{
			func_228(!func_88(4, 255));
		}
		return false;
	}
	if (!func_88(1, 255))
	{
		func_89(1);
	}
	if (!func_385())
	{
		Global_1235672.f_9085.f_4 = -6.545523E+35f;
		return false;
	}
	if (!func_239(1.038497E+13f, iVar1, &(Global_1235672.f_9085.f_2), &(Global_1235672.f_9085.f_3), 1, Global_1901671.f_170.f_24))
	{
		func_228(1);
		return false;
	}
	Global_1235672.f_9085.f_4 = -9238908f;
	Global_1235672.f_9085.f_100 = func_181(3.42883E-26f, 0, 0);
	return true;
}

void func_226(int iParam0)
{
	Global_1235672.f_9085.f_1 = iParam0;
}

bool func_227(int iParam0)
{
	return Global_1235672.f_9085.f_16[iParam0 /*8*/].f_7 != -8.809272E-09f;
}

void func_228(bool bParam0)
{
	if (Global_1245159.f_9807.f_2 != 0)
	{
		Global_1245159.f_9807.f_2 = 0;
	}
	if (bParam0)
	{
		if (func_88(1, 255))
		{
			func_90(1);
		}
	}
}

void func_229()
{
	struct<19> Var0;
	var uVar19;
	int iVar20;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_4 = 108;
	iVar20 = 0;
	while (iVar20 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar20)))
		{
		}
		else if (func_386(iVar20) == PLAYER::PLAYER_ID())
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar19, iVar20);
		}
		iVar20++;
	}
	if (SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar19))
	{
		func_387(Var0, uVar19, 0, 0);
	}
}

int func_230(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, uParam1))
	{
		func_361(Var1, -1.432632E-25f, &uVar0, 0);
	}
	return uVar0;
}

int func_231(int iParam0, int iParam1, int iParam2, vector3 vParam3, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	int iVar7;
	vector3 vVar8;
	int iVar11;
	bool bVar12;
	int iVar13;
	int iVar14;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 112)
	{
		return 11;
	}
	if (!func_12())
	{
		return 2;
	}
	iVar1 = func_169(iParam0);
	iVar2 = func_389(iVar1, iParam1);
	if (iVar2 < 0 || iVar2 >= 55)
	{
		return 11;
	}
	if (!bParam7 && func_390(iParam0, iVar2, bParam8, &bVar3))
	{
		if (bVar3)
		{
			return 1;
		}
		else
		{
			return 4;
		}
	}
	if (func_391(iVar1, iParam1) && !bParam7)
	{
		vVar4 = { func_392(iVar1, iParam1) };
		iVar7 = func_393(iVar1, iVar2);
		if (!func_394(iVar7, vVar4))
		{
			return 5;
		}
	}
	if (func_395(iParam2) == -1)
	{
		return 6;
	}
	if (bParam9 >= 0f && !func_396(vParam3))
	{
		vVar8 = { func_332(iParam0, iVar2) };
		if (BUILTIN::VDIST(vParam3, vVar8) > bParam9)
		{
			return 12;
		}
	}
	if (func_397(iParam2))
	{
		iVar11 = func_398(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		if (!func_126(iVar11))
		{
			return 13;
		}
		if (func_399(iVar11))
		{
			return 14;
		}
	}
	if (func_400(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return 15;
	}
	if (bParam6)
	{
		if (iParam2 != 2.684408E+23f && func_217(func_216(), func_216(), 0, bParam7))
		{
			return 3;
		}
		bVar12 = false;
		if (!bVar12)
		{
			iVar13 = func_326(iParam0, iVar2);
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
			{
				return 8;
			}
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar13))
			{
				return 7;
			}
			iVar14 = func_327(iParam0, iVar2);
			if (iVar14 != 0)
			{
				if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar14))
				{
					return 10;
				}
				if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar14))
				{
					return 9;
				}
			}
		}
	}
	return 0;
}

bool func_232(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_401(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

void func_233(var uParam0, int iParam1, int iParam2)
{
	struct<22> Var0;

	Var0.f_5 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_14.f_1 = -1;
	Var0.f_21 = 6;
	func_402(&Var0, uParam0, iParam1, iParam2, -1);
	func_403(&Var0);
}

var func_234()
{
	return Global_1939089.f_4;
}

int func_235(bool bParam0)
{
	struct<2> Var0;
	var uVar2;
	int iVar4;

	Var0 = { func_177(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var0, &uVar2);
	iVar4 = uVar2;
	if (bParam0)
	{
		if (iVar4 >= BOUNTY::_0xF8BCC5ECA33AC9C1())
		{
			return 6.627404E-05f;
		}
		return 0;
	}
	if (iVar4 >= Global_1901671.f_170.f_4)
	{
		return 0.0007410035f;
	}
	else if (iVar4 >= Global_1901671.f_170.f_3)
	{
		return 1.422534E+32f;
	}
	else if (iVar4 >= Global_1901671.f_170.f_2)
	{
		return 1.973923E-31f;
	}
	return 0;
}

float func_236(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_404(iParam0, uParam3);
	if (iVar0 != 1.96379E+16f)
	{
		return iVar0;
	}
	if (Global_1245159.f_9807 == 0)
	{
		func_119(0, 0, 0);
	}
	if (Global_1245159.f_9807.f_1 != 0 && Global_1295619.f_16 > Global_1245159.f_9807.f_1)
	{
		func_276(2, 1);
		Global_1245159.f_9807.f_1 = 0;
	}
	if ((((func_405(iParam0) && !func_406(2)) && iParam1 != iParam2) && iParam1 != -1) && iParam2 != -1)
	{
		return 1.96379E+16f;
	}
	if (Global_1295619.f_16 > Global_1245159.f_9807)
	{
		return 1.96379E+16f;
	}
	else
	{
		return 4.382566E+30f;
	}
	return -702871.4f;
}

void func_237()
{
	if (func_406(2))
	{
		return;
	}
	if (Global_1245159.f_9807 != 0 || Global_1245159.f_9807.f_6 != -1)
	{
		Global_1245159.f_9807 = 0;
		Global_1245159.f_9807.f_6 = -1;
	}
}

bool func_238(int iParam0)
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= func_407(iParam0);
}

bool func_239(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, float fParam5)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	float fVar59;
	vector3 vVar60;
	vector3 vVar63;
	bool bVar66;
	bool bVar67;
	float fVar68;

	*uParam2 = func_408(iParam0);
	if (*uParam2 == -1)
	{
		return false;
	}
	iVar56 = func_409(func_169(*uParam2));
	vVar63 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
	fVar68 = 1190789120; /* Float: 32000f */
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_410(func_169(*uParam2), iVar58) == iParam1 && func_411(*uParam2, iVar58, -1) == -1) && func_231(*uParam2, func_326(*uParam2, iVar58), iParam0, vVar63, 1, 0, 0, -1f) == 0)
		{
			if (bParam4)
			{
				vVar60 = { func_412(func_169(*uParam2), iVar58, &bVar66) };
				if (bVar66)
				{
					if (func_396(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						fVar59 = BUILTIN::VDIST(vVar60, vVar63);
						if (fParam5 != -1f && fVar59 > fParam5)
						{
						}
						else
						{
							if (fVar59 < fVar68)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								fVar68 = fVar59;
								iVar0[0] = iVar58;
								bVar67 = true;
							}
							Jump @308; //curOff = 291
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam4)
							{
								if (bVar67)
								{
									*iParam3 = iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return false;
								}
							}
							else
							{
								*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return false;
						}
						return true;
					}
				}
			}
		}
	}
}

void func_240()
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_98(-5.15191E+16f) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	Global_1235672.f_9208.f_2 = uVar0;
}

bool func_241(int iParam0)
{
	int iVar0;

	if (!func_176(255))
	{
		return false;
	}
	if (func_213(255))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (func_215(65536, PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_413(Global_34))
	{
		return false;
	}
	if (func_214(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		return false;
	}
	if (func_414())
	{
		return false;
	}
	if (func_217(func_216(), func_216(), 0, 0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1225084[iVar0 /*28*/].f_13 == Global_1295619.f_10)
		{
			return false;
		}
		iVar0++;
	}
	switch (iParam0)
	{
		case 0:
			if (!func_415())
			{
				return false;
			}
			break;
		case 1:
			if (!func_416())
			{
				return false;
			}
			break;
	}
	return true;
}

void func_242(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_243()
{
	int iVar0;

	iVar0 = Global_1901671.f_170.f_38;
	if (func_418(-2.933081E+12f, func_417(1), 6.727819E+25f, 1, 0, 0) >= Global_1901671.f_170.f_49)
	{
		iVar0 = (iVar0 + Global_1901671.f_170.f_45);
	}
	if (Global_1235672.f_9208.f_2 == 0)
	{
		iVar0 = (iVar0 - Global_1901671.f_170.f_37);
	}
	return iVar0;
}

int func_244()
{
	int iVar0;

	iVar0 = Global_1901671.f_170.f_39;
	if ((func_418(-1.787514E+19f, func_417(1), 6.727819E+25f, 1, 0, 0) > Global_1901671.f_170.f_41 || func_418(6.166539E+16f, func_417(1), 6.727819E+25f, 1, 0, 0) > Global_1901671.f_170.f_41) || func_418(1.255573E+28f, func_417(1), 6.727819E+25f, 1, 0, 0) > Global_1901671.f_170.f_41)
	{
		iVar0 = (iVar0 + Global_1901671.f_170.f_45);
	}
	if (Global_1235672.f_9208.f_2 == 1)
	{
		iVar0 = (iVar0 - Global_1901671.f_170.f_37);
	}
	return iVar0;
}

int func_245(int iParam0)
{
	return Global_1235672.f_9208.f_3[iParam0];
}

bool func_246()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_419();
}

bool func_247()
{
	return MISC::GET_RANDOM_FLOAT_IN_RANGE(0.01f, 1f) <= func_420();
}

void func_248(int iParam0)
{
	if (func_421(iParam0))
	{
		func_422(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

Vector3 func_249(int iParam0)
{
	return Global_1297394.f_6.f_1[iParam0 /*3*/];
}

int func_250(int iParam0, int iParam1, var uParam2, int iParam3, vector3 vParam4, bool bParam7, bool bParam8)
{
	int iVar0[55];
	int iVar56;
	int iVar57;
	int iVar58;
	bool bVar59;
	vector3 vVar60;
	bool bVar63;
	bool bVar64;
	bool bVar65;

	*uParam2 = func_408(iParam0);
	if (*uParam2 == -1)
	{
		return 0;
	}
	iVar56 = func_409(func_169(*uParam2));
	bVar65 = 1190789120; /* Float: 32000f */
	iVar58 = 0;
	while (iVar58 <= (iVar56 - 1))
	{
		if ((func_410(func_169(*uParam2), iVar58) == iParam1 && func_411(*uParam2, iVar58, -1) == -1) && func_231(*uParam2, func_326(*uParam2, iVar58), iParam0, vParam4, 1, 0, 0, bParam8) == 0)
		{
			if (bParam7)
			{
				vVar60 = { func_412(func_169(*uParam2), iVar58, &bVar63) };
				if (bVar63)
				{
					if (func_396(vVar60))
					{
						if (iVar57 == 0)
						{
							iVar57++;
						}
						iVar0[iVar57] = iVar58;
						iVar57++;
					}
					else
					{
						bVar59 = BUILTIN::VDIST(vVar60, vParam4);
						if (bParam8 != -1f && bVar59 > bParam8)
						{
						}
						else
						{
							if (bVar59 < bVar65)
							{
								if (iVar57 == 0)
								{
									iVar57++;
								}
								bVar65 = bVar59;
								iVar0[0] = iVar58;
								bVar64 = true;
							}
							Jump @287; //curOff = 270
							iVar0[iVar57] = iVar58;
							iVar57++;
						}
						iVar58++;
						if (iVar57 > 0)
						{
							if (bParam7)
							{
								if (bVar64)
								{
									*iParam3 = iVar0[0];
								}
								else if (iVar57 > 1)
								{
									*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(1, iVar57)];
								}
								else
								{
									return 0;
								}
							}
							else
							{
								*iParam3 = iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar57)];
							}
						}
						else
						{
							return 0;
						}
						return 1;
					}
				}
			}
		}
	}
}

bool func_251(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

int func_252(struct<2> Param0)
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
	if (!func_423(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_423(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

bool func_253(int iParam0, bool bParam1)
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
		iVar2 = func_424(iVar4, 1);
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
				func_425(iVar2, bVar3, bParam1);
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
					Global_1149417.f_3876.f_2[func_426(iVar2, 1) /*4*/].f_1 = bVar3;
				}
			}
		}
		iVar4++;
	}
	return true;
}

void func_254(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_255()
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

int func_256(int iParam0)
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

int func_257(int iParam0)
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

void func_258(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

int func_259(struct<2> Param0)
{
	return func_427(Param0);
}

int func_260(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_21())
	{
		return 0;
	}
	if (!func_428())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_429(&Global_0, 8);
	}
	func_429(&Global_0, 1);
	return 1;
}

void func_261(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_430(func_269(Param0));
	iVar1 = func_259(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_17() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_431(Param0, &Var2, iParam2);
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
	STATS::_STATSTRACKER_DEED_STATUS(iVar0, iVar1, iParam2, &Var2);
}

void func_262(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_432(Param0);
	}
	else
	{
		func_433(Param0, iParam2);
	}
	func_434();
}

struct<2> func_263(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_264(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_435(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_436(&Global_1940186, 8388608);
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

void func_265(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_437(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_438(cVar2);
			}
			else
			{
				func_439();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_266(bool bParam0)
{
	if (!bParam0 && func_440(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_267(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_268(struct<2> Param0)
{
	return func_442(func_441(Param0));
}

int func_269(var uParam0, var uParam1)
{
	return uParam0;
}

void func_270(int iParam0, var uParam1)
{
	func_443(uParam1, iParam0);
	if (Global_1205789.f_129 > 0)
	{
		if (Global_1205789.f_130 == iParam0)
		{
			func_444(0);
		}
	}
	func_445();
}

bool func_271(bool bParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0)
	{
		return false;
	}
	Var0 = { func_177(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var0, &iVar2);
	if (iVar2 < Global_1901671.f_170.f_2)
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 <= 32)
	{
		iVar6 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar6) && GANG::_NETWORK_IS_IN_MY_GANG(iVar6))
		{
			if (iVar6 == PLAYER::PLAYER_ID())
			{
				iVar5++;
			}
			else
			{
				Var0 = { func_177(iVar6) };
				BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var0, &iVar2);
				if (iVar2 >= Global_1901671.f_170.f_2)
				{
					iVar5++;
				}
			}
		}
		iVar4++;
	}
	return iVar5 > 1;
}

int func_272(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_170.f_14;
		case joaat("MEDIUM"):
			return Global_1901671.f_170.f_15;
		case joaat("HIGH"):
			return Global_1901671.f_170.f_16;
		case joaat("VERY_HIGH"):
			return Global_1901671.f_170.f_17;
		default:
			break;
	}
	return 0;
}

int func_273(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_170.f_10;
		case joaat("MEDIUM"):
			return Global_1901671.f_170.f_11;
		case joaat("HIGH"):
			return Global_1901671.f_170.f_12;
		case joaat("VERY_HIGH"):
			return Global_1901671.f_170.f_13;
		default:
			break;
	}
	return 0;
}

int func_274(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_170.f_6;
		case joaat("MEDIUM"):
			return Global_1901671.f_170.f_7;
		case joaat("HIGH"):
			return Global_1901671.f_170.f_8;
		case joaat("VERY_HIGH"):
			return Global_1901671.f_170.f_9;
		default:
			break;
	}
	return 0;
}

void func_275(float fParam0, bool bParam1)
{
	if (!func_406(fParam0))
	{
		if (bParam1)
		{
		}
		func_145(&(Global_1245159.f_9817), fParam0);
	}
}

void func_276(int iParam0, bool bParam1)
{
	if (func_406(iParam0))
	{
		if (bParam1)
		{
		}
		func_146(&(Global_1245159.f_9817), iParam0);
	}
}

bool func_277(int iParam0, int iParam1, vector3 vParam2)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { func_332(iParam0, iParam1) };
	fVar3 = BUILTIN::VDIST(vVar0, vParam2);
	return fVar3 > 1159479296;
}

struct<2> func_278(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

bool func_279(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MOONSHINE_RAID"):
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
			return true;
		default:
			break;
	}
	return false;
}

void func_280(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_428())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_446(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_281(int iParam0)
{
	switch (iParam0)
	{
		case -1086711901:
		case -697789102:
		case 195932838:
			return true;
	}
	return false;
}

bool func_282(int iParam0)
{
	switch (iParam0)
	{
		case -2096602762:
		case joaat("BOUNTY_BOARD"):
		case joaat("BOUNTY_PLAYER"):
			return true;
	}
	return false;
}

bool func_283(int iParam0)
{
	switch (iParam0)
	{
		case -1812122325:
		case joaat("OUTLAW"):
		case 918897273:
			return true;
	}
	return false;
}

int func_284(int iParam0)
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
		case joaat("BOUNTY_PLAYER"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("DYNAMIC"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return 1;
		case -2096602762:
		case -1812122325:
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
		case 918897273:
			return 8;
		default:
			break;
	}
	return 0;
}

bool func_285(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_286()
{
	return func_447(func_263(0));
}

bool func_287(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (bParam1)
	{
		if (!PLAYER::IS_PLAYER_PLAYING(iParam0))
		{
			return false;
		}
	}
	if (bParam2)
	{
		if (NETWORK::NETWORK_IS_IN_SESSION())
		{
			iVar0 = iParam0;
			if (iVar0 < 0 || iVar0 >= 32)
			{
				return false;
			}
			if (!Global_1051608.f_1[iVar0])
			{
				return false;
			}
		}
	}
	return true;
}

int func_288(int iParam0)
{
	int iVar0;

	if (Global_1225084[iParam0 /*28*/].f_2 == -1 || Global_1225084[iParam0 /*28*/].f_2 == 3)
	{
		return -1;
	}
	iVar0 = func_313(Global_1225084[iParam0 /*28*/]);
	if (func_76(iVar0) && !func_147(iParam0, 131072))
	{
		return 1;
	}
	return 0;
}

bool func_289(int iParam0, var uParam1)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	int iVar26;

	if (!func_314(Global_1235672[iParam0 /*697*/].f_571))
	{
		return true;
	}
	if (!func_448(iParam0, uParam1))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_6.f_1 = -1;
	Var0.f_9 = 2;
	Var10 = 2;
	Var10.f_1 = -1;
	Var10.f_5 = -1;
	Var10.f_5.f_1 = -1;
	Var10.f_5.f_3 = -1;
	Var10.f_5.f_4 = -1;
	Var10.f_5.f_5 = -1;
	Var10.f_5.f_6 = -1;
	Var10.f_5.f_6.f_1 = -1;
	Var10.f_5.f_9 = 2;
	iVar25 = func_449(func_313(Global_1225084[iParam0 /*28*/]));
	func_450(iParam0, &Var0);
	iVar26 = func_451(&Var0);
	if (func_452(iVar26))
	{
		Var10 = { func_453(iVar26) };
		if (Var10 == iVar25)
		{
			Global_1225084[iParam0 /*28*/].f_4 = iVar26;
			return true;
		}
		else
		{
			*uParam1 = 1;
			return true;
		}
	}
	return false;
}

bool func_290(int iParam0)
{
	return iParam0 != 0;
}

bool func_291(int iParam0, int iParam1)
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

int func_292(int iParam0, struct<2> Param1, bool bParam3)
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
	if (!func_36(Param1))
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
	uVar31 = func_454(iParam0);
	if (SCRIPTS::COUNT_PLAYER_BITS(&uVar31) <= 0)
	{
		return 0;
	}
	func_455(&Var0, uVar31);
	Var0.f_4 = 14;
	func_456(&Var0);
	return 1;
}

void func_293(var uParam0)
{
	*uParam0 = 0;
}

bool func_294(int iParam0, int iParam1, bool bParam2)
{
	if (!func_63(iParam0))
	{
		return false;
	}
	if (bParam2)
	{
		return func_64(Global_1235672[iParam0 /*697*/].f_570, iParam1);
	}
	return func_64(Global_1235672[iParam0 /*697*/].f_569, iParam1);
}

void func_295(int iParam0)
{
	int iVar0;

	iVar0 = func_457(Global_1225084[iParam0 /*28*/], Global_1225084[iParam0 /*28*/].f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_458(iVar0);
}

void func_296(int iParam0, float fParam1)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (!func_147(iParam0, fParam1))
	{
		func_145(&(Global_1225084[iParam0 /*28*/].f_3), fParam1);
	}
}

bool func_297(int iParam0)
{
	if ((!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_fetch", iParam0, false, 0) && func_459(iParam0, 1048576)) && func_459(iParam0, 512))
	{
		if (!func_290(Global_1235672[iParam0 /*697*/].f_607))
		{
			func_174(&(Global_1235672[iParam0 /*697*/].f_607));
		}
		else if (func_175(Global_1235672[iParam0 /*697*/].f_607) > 6000)
		{
			return true;
		}
	}
	if (func_294(iParam0, 8388608, 0))
	{
		return true;
	}
	else if ((Global_1235672[iParam0 /*697*/].f_571 != 2.684408E+23f && (!func_76(Global_1235672[iParam0 /*697*/].f_571) || func_147(iParam0, 131072))) && !func_460(iParam0))
	{
		return true;
	}
	else if (func_76(Global_1235672[iParam0 /*697*/].f_571) && func_461(iParam0))
	{
		return true;
	}
	else if (func_147(iParam0, 32) && !func_294(iParam0, 32, 0))
	{
		func_296(iParam0, 9.403955E-38f);
		return true;
	}
	return false;
}

bool func_298(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && Global_1225672[iVar0 /*303*/][iParam0 /*23*/].f_22 != -1)
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_299(int iParam0)
{
	int iVar0;
	struct<28> Var1;

	if (Global_1225084.f_587 == 0)
	{
	}
	else
	{
		Global_1225084.f_587 = (Global_1225084.f_587 - 1);
	}
	if (func_314(func_313(Global_1225084[iParam0 /*28*/])))
	{
		func_462(iParam0);
	}
	iVar0 = func_463(iParam0);
	if (iVar0 != -1)
	{
		func_464(iVar0);
	}
	Global_1225084[iParam0 /*28*/].f_2 = -1;
	func_132(iParam0);
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_7 = -1;
	Var1.f_8 = -1;
	Var1.f_9 = -1;
	Var1.f_15 = 255;
	Var1.f_16 = 255;
	Var1.f_17 = 255;
	Var1.f_18 = 255;
	Var1.f_22.f_1 = -1;
	Global_1225084[iParam0 /*28*/] = { Var1 };
}

struct<40> func_300(var uParam0, int iParam1)
{
	struct<40> Var0;
	struct<40> Var40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	if (!func_465(uParam0, iParam1))
	{
		return Var0;
	}
	Var40 = { uParam0->f_3[iParam1 /*40*/] };
	uParam0->f_3[iParam1 /*40*/] = { Var0 };
	return Var40;
}

void func_301(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = (((uParam0->f_1 + *uParam0) - 1) % uParam0->f_2);
	if (uParam0->f_1 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar3 = ((uParam0->f_1 + iVar1) % uParam0->f_2);
			if (uParam0->f_3[iVar3 /*40*/] != -1)
			{
			}
			else
			{
				if (uParam0->f_3[iVar3 /*40*/].f_4 != -1)
				{
					func_300(uParam0, iVar3);
				}
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		uParam0->f_1 = iVar3;
		*uParam0 = iVar2;
	}
	else if (iVar0 == iParam1)
	{
		iVar2 = *uParam0;
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			iVar4 = ((iVar0 - iVar1) + 5 % uParam0->f_2);
			if (uParam0->f_3[iVar4 /*40*/] != -1)
			{
			}
			else
			{
				func_300(uParam0, iVar4);
				iVar2 = (iVar2 - 1);
				iVar1++;
			}
		}
		*uParam0 = iVar2;
	}
}

int func_302()
{
	return Global_1300340.f_150;
}

bool func_303(int iParam0)
{
	return (Global_1300340.f_288.f_2 && iParam0) != 0;
}

int func_304()
{
	return Global_1300340.f_288;
}

bool func_305()
{
	int iVar0;

	iVar0 = func_466();
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_306(int iParam0)
{
	Global_1300340.f_288 = iParam0;
}

void func_307(int iParam0)
{
	Global_1300340.f_288.f_1 = iParam0;
}

bool func_308(int iParam0, int iParam1)
{
	return (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_6 && iParam1) != 0;
}

bool func_309()
{
	if (!Global_1072759.f_3)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_IN_SESSION() || func_18())
	{
		return false;
	}
	if (!SCRIPTS::IS_THREAD_ACTIVE(Global_1219580, false))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE("net_ambient_content_evaluator", -1, true, 0))
	{
		return false;
	}
	return PLAYER::PLAYER_ID() == NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1219580);
}

void func_310(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = PLAYER::PLAYER_ID();
	Var1 = { func_467(iParam0) };
	if (func_468(iParam0) <= 0)
	{
		Var1 = { func_469(iParam0) };
		if (func_36(Var1))
		{
			func_470(iParam0);
			return;
		}
		return;
	}
	if (!func_36(Var1))
	{
		Var1 = { func_469(iParam0) };
		if (func_36(Var1))
		{
			func_470(iParam0);
			return;
		}
	}
	if (func_36(Var1))
	{
		if (!func_471(iParam0, iVar0, 0))
		{
			func_472(iParam0, Var1);
			func_473(iParam0, 0);
			if (func_308(iParam0, 256))
			{
				func_473(iParam0, 1);
			}
		}
		if (func_112(Var1))
		{
			if (func_474(iParam0, 4))
			{
				func_475(iParam0, 0, 0);
				return;
			}
			else if (func_474(iParam0, 5))
			{
				func_476(iParam0, 0);
				return;
			}
		}
	}
	switch (func_477(iParam0))
	{
		case 1:
			break;
		case 2:
			if (!func_308(iParam0, 2))
			{
				return;
			}
			if (!func_478(iParam0))
			{
				func_479(iParam0, 0);
				return;
			}
			if (!func_51(Var1) && !func_112(Var1))
			{
				if (!func_471(iParam0, iVar0, 2) && !func_471(iParam0, iVar0, 3))
				{
					if (func_474(iParam0, 3) || func_480(iParam0) == Global_1295619.f_10)
					{
						func_481(iParam0);
					}
				}
			}
			else if (!func_474(iParam0, 3) && func_480(iParam0) != Global_1295619.f_10)
			{
				func_479(iParam0, 0);
			}
			break;
		case 4:
			if (!func_308(iParam0, 2))
			{
				if (func_308(iParam0, 2048))
				{
					func_482(iParam0);
				}
				return;
			}
			if (func_51(Var1))
			{
				if (func_474(iParam0, 4))
				{
					func_483(iParam0, 0, 1, 1);
					func_475(iParam0, 0, 0);
				}
				else
				{
					func_483(iParam0, 0, 1, 1);
					func_476(iParam0, 0);
				}
			}
			else if (func_112(Var1))
			{
				func_476(iParam0, 0);
			}
			else
			{
				func_473(iParam0, 6);
			}
			if (func_484(iParam0))
			{
				func_482(iParam0);
			}
			break;
		case 5:
		case 6:
			if (func_471(iParam0, iVar0, 0))
			{
				func_470(iParam0);
			}
			break;
	}
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	func_485(iParam0, iParam1);
	if (!bParam2)
	{
		func_486(iParam0, iParam1);
	}
	else
	{
		func_487(iParam0, iParam1);
		func_488(iParam0, iParam1);
	}
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = func_477(iParam0);
	if (iVar0 > -1 && iVar0 < 5)
	{
		if (!func_36(func_467(iParam0)))
		{
			func_489(iParam0, 5);
			return;
		}
	}
	if (!func_490(iParam0) && iVar0 < 5)
	{
		func_491(iParam0);
		func_489(iParam0, 5);
		return;
	}
	switch (iVar0)
	{
		case -1:
			if (!func_36(func_467(iParam0)))
			{
				return;
			}
			if (func_308(iParam0, 32))
			{
				Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[0 /*4*/].f_1 = iParam0;
			}
			if (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_5 != 255)
			{
				func_492(iParam0, Global_1207465.f_231.f_1066[iParam0 /*17*/].f_5);
				func_489(iParam0, 2);
			}
			else
			{
				func_489(iParam0, 1);
			}
			break;
		case 0:
			break;
		case 1:
			if (func_493(iParam0) != 255)
			{
				func_489(iParam0, 2);
				return;
			}
			if (func_494(iParam0, 3))
			{
				func_489(iParam0, 2);
				return;
			}
			if (func_495(iParam0))
			{
				func_489(iParam0, 5);
				return;
			}
			break;
		case 2:
			if (func_493(iParam0) == 255 && !func_494(iParam0, 3))
			{
				func_489(iParam0, 4);
				return;
			}
			if (func_496(iParam0))
			{
				func_489(iParam0, 5);
				return;
			}
			if (func_494(iParam0, 4) || func_494(iParam0, 5))
			{
				func_489(iParam0, 3);
				return;
			}
			func_497(iParam0);
			break;
		case 3:
			if (func_498(iParam0))
			{
				return;
			}
			func_489(iParam0, 4);
			break;
		case 4:
			if (!func_496(iParam0))
			{
				return;
			}
			func_489(iParam0, 5);
			break;
		case 5:
			if (!func_496(iParam0))
			{
				return;
			}
			if (func_468(iParam0) > 1)
			{
				func_499(iParam0, 1);
			}
			func_489(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_313(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_314(int iParam0)
{
	return false;
}

int func_315(int iParam0)
{
	int iVar0;

	iVar0 = func_500(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (func_76(Global_1235672[iParam0 /*697*/].f_571) && !func_147(iParam0, 131072))
	{
		iVar0 = func_501(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		iVar0 = func_502(iParam0);
		if (iVar0 != 0)
		{
			return iVar0;
		}
	}
	return 1;
}

void func_316(int iParam0, int iParam1)
{
	if (func_503(iParam0, 255) != iParam1)
	{
		Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_20 = iParam1;
	}
}

void func_317(int iParam0, int iParam1)
{
	var uVar0;
	bool bVar1;
	struct<2> Var2;
	int iVar4;
	bool bVar5;

	if (!func_63(iParam0))
	{
		return;
	}
	if (iParam1 != 0 && !func_40(iParam0, 128))
	{
		func_253(iParam1, 0);
		func_150(iParam0, 128);
	}
	if (func_66(iParam0, 32, 255))
	{
		return;
	}
	if (func_66(iParam0, 64, 255))
	{
		return;
	}
	func_504(iParam0, &uVar0);
	func_505(iParam0);
	bVar1 = Global_1235672[iParam0 /*697*/].f_571 != 2.684408E+23f;
	Var2 = { Global_1235672[iParam0 /*697*/].f_598 };
	if (bVar1)
	{
		if (!func_51(Var2) && !func_112(Var2))
		{
			func_318(iParam0);
		}
	}
	func_319(iParam0, 32);
	func_150(iParam0, 16);
	iVar4 = func_113(Global_1235672[iParam0 /*697*/].f_571);
	if (iVar4 != 0)
	{
		func_506(iVar4);
	}
	if (func_397(Global_1235672[iParam0 /*697*/].f_571) && SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
	{
		func_507(iParam0);
	}
	if (Global_1235672[iParam0 /*697*/].f_571 == 4.213218E+30f && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()))
	{
		func_508();
	}
	if (func_122(iParam0) && Global_1225084[iParam0 /*28*/].f_16 == PLAYER::PLAYER_ID())
	{
		func_123(1);
		func_124(func_509(iParam0));
	}
	if (((Global_1235672[iParam0 /*697*/].f_571 == 3.926894E-36f || Global_1235672[iParam0 /*697*/].f_571 == 0.0005551571f) || Global_1235672[iParam0 /*697*/].f_571 == -3.261523E+30f) || Global_1235672[iParam0 /*697*/].f_571 == 6.220999E+16f)
	{
		func_68(2, 1);
	}
	if (bVar1)
	{
		if (func_112(Var2))
		{
			return;
		}
		bVar5 = !func_510(func_169(Global_1225084[iParam0 /*28*/]), Global_1225084[iParam0 /*28*/].f_6);
		func_511(Var2, 1, bVar5, 0);
		func_512(Global_1235672[iParam0 /*697*/].f_598, 1, 0, -1);
		if (Global_1235672[iParam0 /*697*/].f_571 == -1.07135E+22f)
		{
			func_513(4);
		}
	}
}

void func_318(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_63(iParam0))
	{
		return;
	}
	if (Global_1235672[iParam0 /*697*/].f_571 == 2.684408E+23f)
	{
		return;
	}
	if (func_66(iParam0, 64, 255))
	{
		return;
	}
	Var0 = { Global_1235672[iParam0 /*697*/].f_598 };
	if (func_112(Var0))
	{
		return;
	}
	if (func_51(Var0))
	{
		return;
	}
	func_514(Var0);
	if (!func_291(Global_1235672[iParam0 /*697*/].f_571, 0))
	{
		iVar2 = func_515(Var0);
		if (iVar2 != -1)
		{
			func_516(iVar2);
		}
	}
}

void func_319(int iParam0, int iParam1)
{
	if (!func_63(iParam0))
	{
		return;
	}
	if (!func_66(iParam0, iParam1, 255))
	{
		func_145(&(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/][iParam0 /*23*/].f_19), iParam1);
	}
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_17() != 0)
	{
		return;
	}
	if (func_517())
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
	if (func_426(iParam0, 1) < 0)
	{
		return;
	}
	if (func_426(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_426(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_426(iParam0, 1) /*4*/].f_2++;
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
	func_518(&Var0, uVar7);
}

struct<8> func_321(int iParam0, int iParam1)
{
	char cVar0[64];

	switch (iParam1)
	{
		case 1:
			StringCopy(&cVar0, "fetch_friend", 64);
			break;
		case 2:
			StringCopy(&cVar0, "fetch_fake_friend", 64);
			break;
		case 3:
			StringCopy(&cVar0, "fetch_vip", 64);
			break;
		case 4:
			StringCopy(&cVar0, "fetch_friend_primary", 64);
			break;
		case 5:
			StringCopy(&cVar0, "fetch_friend_secondary", 64);
			break;
		case 6:
			StringCopy(&cVar0, "fetch_friend_secondary_and_inactive", 64);
			break;
		case 22:
			StringCopy(&cVar0, "fetch_friend_to_all", 64);
			break;
		case 13:
			StringCopy(&cVar0, "fetch_prisoner_vip_friendly", 64);
			break;
		case 14:
			StringCopy(&cVar0, "fetch_prisoner_vip_enemy", 64);
			break;
		case 7:
			StringCopy(&cVar0, "fetch_law_friendly_to_primary", 64);
			break;
		case 8:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary", 64);
			break;
		case 9:
			StringCopy(&cVar0, "fetch_law_friendly_to_secondary_none_to_inactive", 64);
			break;
		case 10:
			StringCopy(&cVar0, "fetch_law_hate_secondary_pvp_active", 64);
			break;
		case 11:
			StringCopy(&cVar0, "fetch_enemy_team_1", 64);
			break;
		case 12:
			StringCopy(&cVar0, "fetch_enemy_team_2", 64);
			break;
		case 15:
			StringCopy(&cVar0, "fetch_enemy_vip_killer", 64);
			break;
		case 16:
			StringCopy(&cVar0, "fetch_enemy_to_active_players", 64);
			break;
		case 17:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_only", 64);
			break;
		case 18:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_likes_inactive_aggro", 64);
			break;
		case 19:
			StringCopy(&cVar0, "fetch_enemy_to_active_players_and_peds", 64);
			break;
		case 20:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active", 64);
			break;
		case 21:
			StringCopy(&cVar0, "fetch_hate_secondary_pvp_active_dislike_inactive", 64);
			break;
		case 23:
			StringCopy(&cVar0, "fetch_objective_draft_horse", 64);
			break;
		case 24:
			StringCopy(&cVar0, "fetch_hostile_animal", 64);
			break;
	}
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0, 64);
	return cVar0;
}

void func_322(int iParam0, int iParam1, var uParam2)
{
	if (!func_519(iParam1))
	{
		return;
	}
	Global_1235672[iParam0 /*697*/].f_572[iParam1] = uParam2;
}

void func_323(int iParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 1:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			break;
		case 2:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			break;
		case 3:
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			break;
		case 4:
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			break;
		case 5:
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 3);
			break;
		case 6:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 3);
			break;
		case 7:
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			break;
		case 8:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			break;
		case 9:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			break;
		case 10:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			break;
		case 11:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 8);
			func_525(iParam0, 6, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			break;
		case 12:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 8);
			func_525(iParam0, 6, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 6, iParam2, 11);
			break;
		case 13:
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 0, iParam2, 8);
			func_525(iParam0, 0, iParam2, 9);
			func_525(iParam0, 0, iParam2, 10);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			break;
		case 14:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_526(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 0, iParam2, 8);
			func_525(iParam0, 0, iParam2, 9);
			func_525(iParam0, 0, iParam2, 10);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			break;
		case 15:
			func_520(0, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			func_525(iParam0, 6, iParam2, 3);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 14);
			func_525(iParam0, 0, iParam2, 7);
			func_525(iParam0, 0, iParam2, 8);
			func_525(iParam0, 0, iParam2, 9);
			func_525(iParam0, 0, iParam2, 10);
			break;
		case 16:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 6, iParam2, 8);
			func_525(iParam0, 6, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 14);
			break;
		case 17:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 2, iParam2, 10);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 2, iParam2, 13);
			func_525(iParam0, 2, iParam2, 14);
			break;
		case 18:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 14);
			func_525(iParam0, 2, iParam2, 16);
			break;
		case 19:
			func_520(6, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 6, iParam2, 8);
			func_525(iParam0, 6, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 6, iParam2, 1);
			func_525(iParam0, 6, iParam2, 2);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 14);
			func_525(iParam0, 6, iParam2, 20);
			func_525(iParam0, 6, iParam2, 21);
			break;
		case 20:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 11);
			func_525(iParam0, 6, iParam2, 12);
			break;
		case 21:
			func_520(0, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 11);
			func_525(iParam0, 6, iParam2, 12);
			func_525(iParam0, 6, iParam2, 15);
			break;
		case 22:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(2, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 2, iParam2, 13);
			func_525(iParam0, 2, iParam2, 14);
			func_525(iParam0, 2, iParam2, 16);
			func_525(iParam0, 2, iParam2, 18);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 2, iParam2, 10);
			break;
		case 23:
			func_520(2, iParam2);
			func_521(2, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(2, iParam2);
			func_525(iParam0, 2, iParam2, 11);
			func_525(iParam0, 2, iParam2, 12);
			func_525(iParam0, 2, iParam2, 1);
			func_525(iParam0, 2, iParam2, 2);
			func_525(iParam0, 2, iParam2, 3);
			func_525(iParam0, 2, iParam2, 4);
			func_525(iParam0, 2, iParam2, 5);
			func_525(iParam0, 2, iParam2, 6);
			func_525(iParam0, 2, iParam2, 13);
			func_525(iParam0, 2, iParam2, 14);
			func_525(iParam0, 2, iParam2, 16);
			func_525(iParam0, 2, iParam2, 18);
			func_525(iParam0, 2, iParam2, 7);
			func_525(iParam0, 2, iParam2, 8);
			func_525(iParam0, 2, iParam2, 9);
			func_525(iParam0, 2, iParam2, 10);
			break;
		case 24:
			func_520(6, iParam2);
			func_521(0, iParam2);
			func_522(0, iParam2);
			func_523(0, iParam2);
			func_524(0, iParam2);
			func_525(iParam0, 6, iParam2, 11);
			func_525(iParam0, 6, iParam2, 12);
			func_525(iParam0, 0, iParam2, 1);
			func_525(iParam0, 0, iParam2, 2);
			func_525(iParam0, 6, iParam2, 3);
			func_525(iParam0, 6, iParam2, 4);
			func_525(iParam0, 6, iParam2, 5);
			func_525(iParam0, 6, iParam2, 6);
			func_525(iParam0, 6, iParam2, 13);
			func_525(iParam0, 6, iParam2, 14);
			func_525(iParam0, 6, iParam2, 16);
			func_525(iParam0, 6, iParam2, 18);
			func_525(iParam0, 6, iParam2, 7);
			func_525(iParam0, 6, iParam2, 8);
			func_525(iParam0, 6, iParam2, 9);
			func_525(iParam0, 6, iParam2, 10);
			break;
	}
}

var func_324(int iParam0, var uParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, uParam1))
	{
		func_361(Var1, -1.199521E-08f, &uVar0, 1);
	}
	return uVar0;
}

struct<2> func_325(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1225084[iParam0 /*28*/];
	uVar1 = Global_1225084[iParam0 /*28*/].f_6;
	return func_527(iVar0, uVar1);
}

int func_326(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_528(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

int func_327(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_528(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_1;
}

int func_328(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_359(&vVar1, iParam0) && func_388(&vVar1, iParam1))
	{
		vVar1.f_2 = -12.54947f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

var func_329(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_359(&Var1, iParam0) && func_388(&Var1, iParam1)) && func_529(&Var1, iParam2))
	{
		func_361(Var1, 3.520859E+19f, &uVar0, 0);
	}
	return uVar0;
}

var func_330(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_359(&Var1, iParam0) && func_388(&Var1, iParam1)) && func_529(&Var1, iParam2))
	{
		func_361(Var1, -5.623385E-23f, &uVar0, 0);
	}
	return uVar0;
}

var func_331(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	struct<5> Var1;

	if ((func_359(&Var1, iParam0) && func_388(&Var1, iParam1)) && func_529(&Var1, iParam2))
	{
		func_361(Var1, -1.199521E-08f, &uVar0, 0);
	}
	return uVar0;
}

Vector3 func_332(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_528(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

int func_333(var uParam0, var uParam1, int iParam2)
{
	return func_530(uParam1, *uParam0, uParam0->f_1, iParam2, 1);
}

int func_334(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = func_528(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_6;
}

Vector3 func_335(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	if ((func_359(&Var3, iParam0) && func_388(&Var3, iParam1)) && func_531(&Var3, iParam2))
	{
		func_532(Var3, 7.506326E+22f, &vVar0, 0);
	}
	return vVar0;
}

bool func_336(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, 7190.922f, &bVar0, 0);
	}
	return bVar0;
}

bool func_337(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, -2.432002E+19f, &bVar0, 0);
	}
	return bVar0;
}

bool func_338(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, -8.701693E+14f, &bVar0, 0);
	}
	return bVar0;
}

bool func_339(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, -8.90229E-17f, &bVar0, 0);
	}
	return bVar0;
}

bool func_340(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, -7.137819E-25f, &bVar0, 0);
	}
	return bVar0;
}

bool func_341(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, 9.179555E-28f, &bVar0, 0);
	}
	return bVar0;
}

bool func_342(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (func_359(&Var1, iParam0) && func_360(&Var1, iParam1))
	{
		func_533(Var1, 3.073122E-20f, &bVar0, 0);
	}
	return bVar0;
}

void func_343(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	float fVar6;
	bool bVar7;
	bool bVar8;

	fVar6 = 1137999872; /* Float: 425f */
	bVar7 = func_147(iParam0, 16);
	if (!bVar7)
	{
		fVar6 = Global_1901671.f_242.f_64;
	}
	if (func_66(iParam0, 2, 255))
	{
		fVar6 = (fVar6 + 1112014848);
	}
	switch (Global_1235672[iParam0 /*697*/].f_571)
	{
		case -2096602762:
		case -1812122325:
		case joaat("BOUNTY_BOARD"):
		case joaat("GUN_FOR_HIRE"):
		case -697789102:
		case joaat("CAMP_RESUPPLY"):
		case joaat("MOONSHINE_SETUP_GET_SUPPLIES"):
		case joaat("MOONSHINE_MARKETING"):
		case 195932838:
		case joaat("OUTLAW"):
		case joaat("CAMP_SETUP"):
		case 918897273:
		case joaat("MOONSHINE_SELL"):
		case joaat("MOONSHINE_SETUP_RESCUE_COOK"):
		case joaat("CAMP_SELL"):
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255))
			{
				if (!bVar7 || func_40(iParam0, 4096))
				{
					iVar1 = 1;
				}
				bVar0 = true;
				iVar2 = 1;
			}
			break;
		case joaat("CAMP_RAID"):
			if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255))
			{
				bVar0 = true;
				iVar5 = 1;
			}
			break;
		case joaat("DYNAMIC"):
			bVar0 = true;
			iVar2 = 1;
			if (!func_147(iParam0, 131072))
			{
				iVar1 = 1;
				bVar4 = true;
			}
			break;
		case joaat("AMBUSH"):
		case -1086711901:
		case joaat("MOONSHINE_DYNAMIC"):
		case joaat("HIDEOUT"):
			bVar0 = true;
			iVar1 = 1;
			bVar4 = true;
			fVar6 = (Global_1901671.f_242.f_64 + 1112014848);
			break;
		case joaat("BOUNTY_PLAYER"):
			if ((!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) && !func_66(iParam0, 32, 255)) && !func_88(4, 255))
			{
				bVar0 = true;
				iVar3 = 1;
			}
			break;
	}
	if (bVar0)
	{
		Global_1235672[iParam0 /*697*/].f_600 = fVar6;
		func_150(iParam0, 524288);
		if (func_534(iParam0, 255, 0, 0) && func_40(iParam0, 512))
		{
			bVar8 = true;
		}
		if (!bVar8 && !func_535(iParam0, fVar6, iVar1, iVar2, iVar3, bVar4, iVar5))
		{
			func_319(iParam0, 1024);
		}
		else
		{
			func_115(iParam0, 1024);
		}
		func_319(iParam0, 512);
	}
	else
	{
		func_110(iParam0, 524288);
		func_115(iParam0, 1024);
		func_319(iParam0, 512);
	}
}

void func_344(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_536(iParam0);
	if (iVar0 == 0)
	{
		func_537(iParam0);
	}
	else
	{
		iVar1 = Global_1235672[iParam0 /*697*/].f_604;
		if (iVar1 == -1)
		{
			iVar1 = func_538(iVar0);
		}
		if (iVar1 != -1)
		{
			if (Global_1235672[iParam0 /*697*/].f_604 != iVar1)
			{
				if (Global_1235672[iParam0 /*697*/].f_604 == -1)
				{
					func_115(iParam0, 2);
				}
				Global_1235672[iParam0 /*697*/].f_604 = iVar1;
			}
			if (Global_1235672.f_9062[iVar1 /*4*/] != -1 && Global_1235672.f_9062[iVar1 /*4*/] != iParam0)
			{
				func_539(iVar1, iParam0);
				return;
			}
			if (Global_1235672.f_9062[iVar1 /*4*/].f_1 != -1 && Global_1235672.f_9062[iVar1 /*4*/].f_1 != iParam0)
			{
				func_537(iParam0);
				return;
			}
			func_540(iVar1, iParam0, iParam0);
			func_541(iVar1, iParam0, iVar0);
			if (func_542(iParam0, iVar1, &bVar2))
			{
				if (bVar2)
				{
					func_319(iParam0, 1048576);
				}
				func_319(iParam0, 2);
			}
		}
		else
		{
			func_537(iParam0);
		}
	}
}

void func_345(struct<2> Param0)
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	if (!func_251(Param0, func_373()))
	{
		return;
	}
	iVar0 = func_543(iVar1);
	if (!func_544(iVar0))
	{
		return;
	}
	func_545(iVar0);
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (func_546(1) && func_547(iVar0, 1))
		{
			func_548();
		}
		if (func_546(0) && NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS() & 9 != 0)
		{
			func_549();
		}
	}
}

void func_346(int iParam0)
{
	if (Global_1235672[iParam0 /*697*/].f_571 != -1.115319E-25f)
	{
		return;
	}
	if (!func_66(iParam0, 4096, 255) && !func_147(iParam0, 4096))
	{
		return;
	}
	if (!func_66(iParam0, 32, 255))
	{
		return;
	}
	if (func_66(iParam0, 64, 255))
	{
		return;
	}
	func_550(iParam0);
}

bool func_347(int iParam0)
{
	if (!func_33(iParam0, 0))
	{
		return false;
	}
	return true;
}

void func_348(int iParam0)
{
	func_551(&(Global_1142409.f_2040), iParam0);
}

int func_349(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SHOP_BLK_GENERAL_STORE"):
			return 6;
		case joaat("SHOP_BLK_GUNSMITH"):
			return 7;
		case joaat("SHOP_BLK_BARBER"):
			return 8;
		case joaat("SHOP_BLK_TAILOR"):
			return 19;
		case joaat("SHOP_BLK_HORSE_SHOP"):
			return 13;
		case joaat("SHOP_BLK_POST_OFFICE"):
			return 14;
		case joaat("SHOP_BLK_TRAIN_STATION"):
			return 15;
		case joaat("SHOP_BLK_PHOTO_STUDIO"):
			return 12;
		case joaat("SHOP_BLK_BOUNTYHUNTING_MP_RETURN"):
			return 122;
		case joaat("SHOP_BLK_COACH"):
			return 123;
		case joaat("SHOP_BLK_BANK"):
			return 5;
		case joaat("SHOP_BLK_BUTCHER"):
			return 9;
		case joaat("SHOP_BLK_BARTENDER"):
			return 10;
		case joaat("SHOP_BLK_PIANIST"):
			return 11;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_FIRST"):
			return 16;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_SECOND"):
			return 17;
		case joaat("SHOP_BLK_MUSICIAN_GUITARIST_THIRD"):
			return 18;
		case joaat("SHOP_BUT_MUSICIAN_BANJO"):
			return 132;
		case joaat("SHOP_EMR_GENERAL_STORE"):
			return 23;
		case joaat("SHOP_EMR_POST_OFFICE"):
			return 24;
		case joaat("SHOP_EMR_TRAIN_STATION"):
			return 25;
		case joaat("SHOP_EMR_FENCE"):
			return 22;
		case joaat("SHOP_LAG_BAIT_STORE"):
			return 26;
		case joaat("SHOP_SDN_BANK"):
			return 42;
		case joaat("SHOP_SDN_BARBER"):
			return 43;
		case joaat("SHOP_SDN_BUTCHER"):
			return 44;
		case joaat("SHOP_SDN_DOCTOR"):
			return 45;
		case joaat("SHOP_SDN_FENCE"):
			return 46;
		case joaat("SHOP_SDN_GENERAL_STORE"):
			return 48;
		case joaat("SHOP_SDN_GUNSMITH"):
			return 49;
		case joaat("SHOP_SDN_HORSE_SHOP"):
			return 50;
		case joaat("SHOP_SDN_POST_OFFICE"):
			return 51;
		case joaat("SHOP_SDN_TRAIN_STATION"):
			return 52;
		case joaat("SHOP_SDN_TAILOR"):
			return 53;
		case joaat("SHOP_SDN_TRAPPER"):
			return 63;
		case joaat("SHOP_SDN_BARTENDER_SLUM"):
			return 56;
		case joaat("SHOP_SDN_PIANIST"):
			return 55;
		case joaat("SHOP_SDN_PHOTO_STUDIO"):
			return 60;
		case joaat("SHOP_SDN_BOUNTYHUNTING_MP_RETURN"):
			return 124;
		case joaat("SHOP_SDN_COACH"):
			return 125;
		case joaat("SHOP_SDN_BARTENDER"):
			return 54;
		case joaat("SHOP_SDN_PIANIST_SLUM"):
			return 57;
		case joaat("SHOP_SDN_MUSICIAN_BANJO"):
			return 59;
		case joaat("SHOP_SDN_MUSICIAN_GUITARIST"):
			return 58;
		case joaat("SHOP_SDN_THEATER_MP"):
			return 61;
		case joaat("SHOP_SDN_THEATER_MAGIC_MP"):
			return 62;
		case joaat("SHOP_RGG_POST_OFFICE"):
			return 27;
		case joaat("SHOP_RGG_TRAIN_STATION"):
			return 28;
		case joaat("SHOP_RHO_GENERAL_STORE"):
			return 33;
		case joaat("SHOP_RHO_FENCE"):
			return 31;
		case joaat("SHOP_RHO_GUNSMITH"):
			return 34;
		case joaat("SHOP_RHO_POST_OFFICE"):
			return 35;
		case joaat("SHOP_RHO_BUTCHER"):
			return 30;
		case joaat("SHOP_RHO_TRAIN_STATION"):
			return 39;
		case joaat("SHOP_RHO_BOUNTYHUNTING_MP_RETURN"):
			return 126;
		case joaat("SHOP_RHO_BANK"):
			return 29;
		case joaat("SHOP_RHO_BARTENDER"):
			return 36;
		case joaat("SHOP_RHO_PIANIST"):
			return 37;
		case joaat("SHOP_RHO_MUSICIAN_BANJO"):
			return 38;
		case joaat("SHOP_STR_BUTCHER"):
			return 68;
		case joaat("SHOP_STR_GENERAL_STORE"):
			return 69;
		case joaat("RAGE_P2_3"):
			return 70;
		case joaat("SHOP_STR_HORSE_SHOP"):
			return 71;
		case joaat("SHOP_STR_POST_OFFICE"):
			return 74;
		case joaat("SHOP_STR_BOUNTYHUNTING_MP_RETURN"):
			return 127;
		case joaat("SHOP_STR_BARTENDER"):
			return 75;
		case joaat("SHOP_STR_MUSICIAN_BANJO"):
			return 72;
		case joaat("SHOP_STR_MUSICIAN_GUITARIST"):
			return 73;
		case joaat("SHOP_VAL_DOCTOR"):
			return 83;
		case joaat("SHOP_VAL_GENERAL_STORE"):
			return 84;
		case joaat("SHOP_VAL_GUNSMITH"):
			return 85;
		case joaat("SHOP_VAL_BARBER"):
			return 78;
		case joaat("SHOP_VAL_POST_OFFICE"):
			return 87;
		case joaat("SHOP_VAL_HORSE_SHOP"):
			return 86;
		case joaat("SHOP_VAL_BARTENDER_KEANE"):
			return 81;
		case joaat("SHOP_VAL_BARTENDER_SLUM"):
			return 91;
		case joaat("SHOP_VAL_BUTCHER"):
			return 82;
		case joaat("SHOP_VAL_HOTEL"):
			return 90;
		case joaat("SHOP_VAL_BOUNTYHUNTING_MP_RETURN"):
			return 120;
		case joaat("SHOP_VAL_COACH"):
			return 121;
		case joaat("SHOP_VAL_TRAIN_STATION"):
			return 88;
		case joaat("SHOP_VAL_BARTENDER"):
			return 79;
		case joaat("SHOP_VAL_PIANIST"):
			return 80;
		case joaat("SHOP_VAL_BANK"):
			return 77;
		case joaat("SHOP_VAL_THEATER_MAGIC_MP"):
			return 89;
		case joaat("SHOP_SCM_HORSE_SHOP"):
			return 41;
		case joaat("SHOP_ASB_BOUNTYHUNTING_MP_RETURN"):
			return 129;
		case joaat("SHOP_ASB_GUNSMITH"):
			return 0;
		case joaat("SHOP_ASB_POST_OFFICE"):
			return 1;
		case joaat("SHOP_ASB_TRAIN_STATION"):
			return 2;
		case joaat("SHOP_VAN_POST_OFFICE"):
			return 98;
		case joaat("SHOP_VAN_TRAIN_STATION"):
			return 97;
		case joaat("SHOP_VAN_FENCE"):
			return 93;
		case joaat("SHOP_VAN_HORSE_SHOP"):
			return 96;
		case joaat("SHOP_VAN_BARTENDER"):
			return 94;
		case joaat("SHOP_VAN_PIANIST"):
			return 95;
		case joaat("SHOP_VAN_COACH"):
			return 128;
		case joaat("SHOP_WAL_POST_OFFICE"):
			return 101;
		case joaat("SHOP_WAL_GENERAL_STORE"):
			return 99;
		case joaat("SHOP_WAL_TRAIN_STATION"):
			return 100;
		case joaat("SHOP_DYNAMIC"):
			return 119;
		case joaat("SHOP_WILDERNESS_SUPPLIES"):
			return 133;
		case joaat("SHOP_ANYWHERE_HANDHELD"):
			return 152;
		case joaat("SHOP_WEAPON_MOD_STORE"):
			return 176;
		case joaat("SHOP_CLOTHING"):
			return 177;
		case joaat("SHOP_CAMP_SHAVING"):
			return 178;
		case joaat("SHOP_WARDROBE"):
			return 179;
		case joaat("SHOP_CAMP_LOCKBOX"):
			return 153;
		case joaat("SHOP_CAMP_TRAVELLING_SALESMAN"):
			return 147;
		case joaat("SHOP_RIO_TRAVELLING_SALESMAN"):
			return 135;
		case joaat("SHOP_CHO_TRAVELLING_SALESMAN"):
			return 136;
		case joaat("SHOP_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case joaat("SHOP_TAL_TRAVELLING_SALESMAN"):
			return 138;
		case joaat("SHOP_BGV_TRAVELLING_SALESMAN"):
			return 139;
		case joaat("SHOP_HRT_E_TRAVELLING_SALESMAN"):
			return 140;
		case joaat("SHOP_HRT_W_TRAVELLING_SALESMAN"):
			return 141;
		case joaat("SHOP_GRZ_TRAVELLING_SALESMAN"):
			return 142;
		case joaat("SHOP_SCM_TRAVELLING_SALESMAN"):
			return 143;
		case joaat("SHOP_BLU_TRAVELLING_SALESMAN"):
			return 144;
		case joaat("SHOP_DER_TRAVELLING_SALESMAN"):
			return 145;
		case joaat("SHOP_BBR_TRAVELLING_SALESMAN"):
			return 146;
		case joaat("SHOP_CAMP_BUTCHERTABLE"):
			return 154;
		case -765151559:
			return 134;
		case joaat("SHOP_MOONSHINE_STILL"):
			return 20;
		case joaat("SHOP_BVH_DOCTOR"):
			return 155;
		case joaat("SHOP_BVH_GENERAL_STORE"):
			return 156;
		case joaat("SHOP_BVH_GUNSMITH"):
			return 157;
		case joaat("SHOP_BVH_HORSE_TRAINER"):
			return 158;
		case 1529797091:
			return 67;
		case joaat("SHOP_CLM_DOCTOR"):
			return 159;
		case joaat("SHOP_CLM_GENERAL_STORE"):
			return 160;
		case joaat("SHOP_CLM_GUNSMITH"):
			return 161;
		case joaat("SHOP_CLM_HORSE_TRAINER"):
			return 162;
		case 1388932648:
			return 65;
		case joaat("SHOP_HSO_DOCTOR"):
			return 164;
		case joaat("SHOP_HSO_GENERAL_STORE"):
			return 165;
		case joaat("SHOP_HSO_GUNSMITH"):
			return 166;
		case joaat("SHOP_HSO_HORSE_TRAINER"):
			return 167;
		case 878376253:
			return 64;
		case joaat("SHOP_LAK_DOCTOR"):
			return 168;
		case joaat("SHOP_LAK_GENERAL_STORE"):
			return 169;
		case joaat("SHOP_LAK_GUNSMITH"):
			return 170;
		case joaat("SHOP_LAK_HORSE_TRAINER"):
			return 171;
		case joaat("SHOP_SHB_DOCTOR"):
			return 172;
		case joaat("SHOP_SHB_GENERAL_STORE"):
			return 173;
		case joaat("SHOP_SHB_GUNSMITH"):
			return 174;
		case joaat("SHOP_SHB_HORSE_TRAINER"):
			return 175;
		case -2076086367:
			return 66;
		case joaat("SHOP_CLM_HORSE_FENCE"):
			return 163;
		case joaat("SHOP_AMD_GENERAL_STORE"):
			return 108;
		case joaat("SHOP_AMD_BARTENDER"):
			return 110;
		case joaat("SHOP_AMD_HONOR_MP"):
			return 109;
		case joaat("SHOP_AMD_POST_OFFICE"):
			return 111;
		case joaat("SHOP_AMD_TRAIN_STATION"):
			return 112;
		case joaat("SHOP_ROJ_HONOR_MP"):
			return 113;
		case joaat("SHOP_BOJ_HONOR_MP"):
			return 114;
		case joaat("SHOP_TBL_GENERAL_STORE"):
			return 102;
		case joaat("SHOP_TBL_BARTENDER"):
			return 105;
		case joaat("SHOP_TBL_PIANIST"):
			return 106;
		case joaat("SHOP_TBL_GUNSMITH"):
			return 103;
		case joaat("SHOP_TBL_BUTCHER"):
			return 104;
		case joaat("SHOP_TBL_HORSE_SHOP"):
			return 107;
		case joaat("SHOP_RYC_FENCE"):
			return 116;
		case joaat("SHOP_THL_FENCE"):
			return 130;
		case joaat("SHOP_BEN_POST_OFFICE"):
			return 117;
		case joaat("SHOP_BEN_TRAIN_STATION"):
			return 118;
		case 548657065:
			return 3;
		case 243086140:
			return 4;
		case -305029900:
			return 40;
		case 1008537949:
			return 76;
		case 1239556700:
			return 148;
		case 1968750441:
			return 149;
		case 317019665:
			return 150;
		case 1421441577:
			return 151;
		default:
			break;
	}
	return -1;
}

void func_350(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1051832.f_4702[iVar0 /*5*/] == iParam0 || Global_1051832.f_4702[iVar0 /*5*/].f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051832.f_4702[iVar0 /*5*/] = iParam0;
			Global_1051832.f_4702[iVar0 /*5*/].f_1 = -1;
			Global_1051832.f_4702[iVar0 /*5*/].f_2 = iParam1;
			Global_1051832.f_4702[iVar0 /*5*/].f_4 = (fParam2 * fParam2);
			Global_1051832.f_4702[iVar0 /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_351(int iParam0)
{
	switch (iParam0)
	{
		case joaat("ST_DOCTOR"):
			return 0;
		case joaat("ST_GENERAL"):
			return 3;
		case joaat("ST_FENCE"):
			return 4;
		case joaat("ST_MOONSHINE_STILL"):
			return 33;
		case joaat("ST_GUNSMITH"):
			return 6;
		case joaat("ST_TAILOR"):
			return 7;
		case joaat("ST_BARBER"):
			return 8;
		case joaat("ST_TRAIN_STATION"):
			return 1;
		case joaat("ST_POST_OFFICE"):
			return 2;
		case joaat("ST_HORSE_SHOP"):
			return 9;
		case joaat("ST_BUTCHER"):
			return 10;
		case joaat("ST_DYNAMIC"):
			return 11;
		case joaat("ST_QUARTERMASTER"):
			return 22;
		case joaat("ST_HORSE_TRAINER"):
			return 23;
		case joaat("ST_BLACKSMITH"):
			return 24;
		case joaat("ST_BOUNTYHUNTING_MP_RETURN"):
			return 25;
		case joaat("ST_COACH"):
			return 26;
		case joaat("ST_BANK"):
			return 12;
		case joaat("ST_BAIT"):
			return 14;
		case joaat("ST_BARTENDER"):
			return 30;
		case joaat("ST_PIANIST"):
			return 31;
		case joaat("ST_MUSICIAN"):
			return 32;
		case joaat("ST_HORSE_FENCE"):
			return 5;
		case joaat("ST_TRAPPER"):
			return 15;
		case joaat("ST_PEARSON"):
			return 16;
		case joaat("ST_HOTEL"):
			return 17;
		case joaat("ST_WILDERNESS_SUPPLIES"):
			return 27;
		case joaat("ST_CAMP_LOCKBOX"):
			return 28;
		case joaat("ST_CAMP_BUTCHERTABLE"):
			return 29;
		case joaat("ST_HANDHELD"):
			return 34;
		case joaat("ST_WEAPON_MOD_STORE"):
			return 19;
		case joaat("ST_CLOTHING"):
			return 20;
		case joaat("ST_CAMP_SHAVING"):
			return 21;
		case joaat("ST_PHOTO_STUDIO"):
			return 18;
		case joaat("ST_HONOR_MP"):
			return 35;
		case joaat("ST_THEATER_MP"):
			return 36;
		case joaat("ST_TRAVELLING_SALESMAN"):
			return 38;
		case joaat("ST_MOONSHINE_PROPERTY"):
			return 37;
		case 374439621:
			return 39;
		default:
			break;
	}
	return -1;
}

void func_352(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1051832.f_4702[iVar0 /*5*/].f_1 == iParam0 || Global_1051832.f_4702[iVar0 /*5*/].f_3 < (MISC::GET_FRAME_COUNT() - 1))
		{
			Global_1051832.f_4702[iVar0 /*5*/].f_1 = iParam0;
			Global_1051832.f_4702[iVar0 /*5*/] = -1;
			Global_1051832.f_4702[iVar0 /*5*/].f_2 = iParam1;
			Global_1051832.f_4702[iVar0 /*5*/].f_4 = (fParam2 * fParam2);
			Global_1051832.f_4702[iVar0 /*5*/].f_3 = MISC::GET_FRAME_COUNT();
			return;
		}
		iVar0++;
	}
}

int func_353(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MINIGAME_MP_POKER_BLACKWATER"):
			return 0;
		case joaat("MINIGAME_MP_POKER_SAINT_DENIS"):
			return 1;
		case joaat("MINIGAME_MP_POKER_SWANSONS_STATION"):
			return 2;
		case joaat("MINIGAME_MP_POKER_TUMBLEWEED"):
			return 3;
		case joaat("MINIGAME_MP_POKER_VALENTINE"):
			return 4;
		default:
			break;
	}
	return 4;
}

void func_354(int iParam0)
{
	Global_1149157.f_1[iParam0 /*27*/].f_26 = MISC::GET_FRAME_COUNT();
}

bool func_355(struct<2> Param0, bool bParam2)
{
	int iVar0;

	iVar0 = func_108(Param0);
	return (iVar0 == 5 || (iVar0 == 6 && bParam2));
}

bool func_356(struct<2> Param0)
{
	return func_108(Param0) == 7;
}

void func_357(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1108965.f_34.f_353[iParam0 /*6*/].f_1))
	{
		return;
	}
	if (!Global_1108965.f_34.f_353[iParam0 /*6*/])
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1108965.f_34.f_353[iParam0 /*6*/].f_1))
	{
		func_552(iParam0);
		return;
	}
	if (Global_1108965.f_34.f_353[iParam0 /*6*/].f_5 != -1)
	{
		if ((Global_1295619.f_16 - Global_1108965.f_34.f_353[iParam0 /*6*/].f_4) > Global_1108965.f_34.f_353[iParam0 /*6*/].f_5)
		{
			func_552(iParam0);
		}
		return;
	}
	if (func_112(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		return;
	}
	if (!func_36(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_552(iParam0);
		return;
	}
	if (!func_112(Global_1108965.f_34.f_353[iParam0 /*6*/].f_2))
	{
		func_552(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iParam0 /*2*/])) != Global_1108965.f_34.f_353[iParam0 /*6*/].f_1)
	{
		func_552(iParam0);
		return;
	}
}

void func_358(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (Global_1108965.f_34.f_353[iParam0 /*6*/])
	{
		func_357(iParam0);
	}
	if (!Global_1108965.f_34[iParam0 /*11*/].f_6)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_553(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		func_553(iParam0);
		return;
	}
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iParam0 /*2*/])) != iVar0)
	{
		func_553(iParam0);
		return;
	}
	if (GANG::_NETWORK_IS_IN_MY_GANG(iVar0))
	{
		func_554(iVar0, 0);
		return;
	}
	if (Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		func_554(iVar0, 0);
		return;
	}
	if (Global_1287258[iParam0 /*67*/].f_66)
	{
		func_554(iVar0, 0);
		return;
	}
	if (func_555(iParam0))
	{
		func_554(iVar0, 0);
		return;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Global_1108965.f_34[iParam0 /*11*/].f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 600000)
	{
		func_554(iVar0, 0);
		return;
	}
}

bool func_359(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_360(bool bParam0, int iParam1)
{
	bParam0->f_2 = 4.206815E-11f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_361(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *iParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*iParam6 = uVar0;
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_362(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iParam0, 0);
}

int func_363(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1235672.f_9085.f_97 >= 10)
	{
		return -1;
	}
	if (iParam0 == 5.988193E+11f)
	{
		iVar0 = Global_1235672.f_9085.f_99;
		iVar1 = Global_1235672.f_9085.f_97;
		while (iVar1 > 0)
		{
			iVar0 = (iVar0 - 1);
			if (iVar0 < 0)
			{
				iVar0 = 9;
			}
			if (Global_1235672.f_9085.f_16[iVar0 /*8*/] == iParam0)
			{
				return -1;
			}
			iVar1 = (iVar1 - 1);
		}
	}
	iVar2 = Global_1235672.f_9085.f_99;
	Global_1235672.f_9085.f_16[iVar2 /*8*/] = iParam0;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_5 = iParam2;
	Global_1235672.f_9085.f_16[iVar2 /*8*/].f_6 = iParam1;
	Global_1235672.f_9085.f_97++;
	Global_1235672.f_9085.f_99 = (Global_1235672.f_9085.f_99 + 1 % 10);
	return iVar2;
}

int func_364()
{
	return Global_1102813.f_3673;
}

int func_365(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102813.f_3675[iParam0];
}

var func_366()
{
	return Global_1102813.f_3674;
}

int func_367(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_556(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_368(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

struct<2> func_369(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573), func_58(iParam1));
			break;
		case 3:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_602), func_58(iParam1));
			break;
		case 4:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_2104), func_58(iParam1));
			break;
		case 5:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_12606), func_58(iParam1));
			break;
		case 6:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_12908), func_58(iParam1));
			break;
		case 7:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_15910), func_58(iParam1));
			break;
		case 8:
			Var0.f_1 = func_557(iParam0, &(Global_1072759.f_573.f_16512), func_58(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_216();
	}
	return Var0;
}

void func_370(struct<2> Param0)
{
	if (func_259(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_259(Param0)))
	{
		STATS::_0x99230691875FC218(func_269(Param0), func_259(Param0), Global_34);
	}
}

bool func_371(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_558(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_22())
	{
		return func_558(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_558(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

int func_372(bool bParam0, bool bParam1, bool bParam2)
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

struct<2> func_373()
{
	return Global_1051268;
}

struct<2> func_374()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_263(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_263(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_375(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1235672.f_9085.f_8), iParam0);
}

int func_376(int iParam0)
{
	int iVar0;

	if (!func_559(iParam0))
	{
		return 0;
	}
	iVar0 = func_560(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_561(iParam0, 1);
	}
	return 0;
}

int func_377(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1];
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_379(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/].f_5[iParam1] = iParam2;
}

void func_380(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	Global_1149417.f_5087[iParam0 /*10*/][iParam1] = iParam2;
}

int func_381(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	return Global_1149417.f_5087[iParam0 /*10*/][iParam1];
}

var func_382(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_562();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_25);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940239.f_245.f_1308++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940239.f_245.f_1308, 64);
	func_563(&(Global_1940239.f_245.f_14[iVar0 /*43*/]), Global_1940239.f_245.f_4, cVar3, Param0);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(88), Global_1940239.f_245.f_1308);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(89), true);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(90), false);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(78), Param0.f_32);
	if (Param0.f_32)
	{
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(76), Param0.f_31);
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(79), Param0.f_30);
	}
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(91), Param0.f_26);
	bVar15 = false;
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/], 1.46912E-13f, bVar15);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(53), Param0.f_27);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(54), Param0.f_27.f_1);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(92), Param0.f_27.f_2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(93), iVar2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(94), Param0.f_24);
	func_565(Global_1940239.f_245.f_1306 + 1);
	if (Global_1940239.f_245.f_1308 == NaNf)
	{
		Global_1940239.f_245.f_1308 = 0;
	}
	if (func_566(Param0.f_26))
	{
		Param0.f_33 = 5;
		Param0.f_33.f_1 = 1;
		Param0.f_33.f_13 = 5.395881E-11f;
		Param0.f_33.f_14 = Global_1940239.f_245.f_14[iVar0 /*43*/];
		iVar16 = func_567(&(Param0.f_33));
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_564(95), iVar16);
	}
	iVar17 = func_568();
	if (iVar17 == 0 || Param0.f_24 == iVar17)
	{
		Global_1940239.f_245.f_1307++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, 0, "pm_invite_item", Global_1940239.f_245.f_14[iVar0 /*43*/]);
	}
	return Global_1940239.f_245.f_14[iVar0 /*43*/];
}

void func_383(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_8), iParam0);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1235672.f_9085.f_14)
	{
		if (Global_1235672.f_9085.f_9[iVar1 /*4*/] == iVar0)
		{
			Global_1235672.f_9085.f_9[iVar1 /*4*/].f_2 = 1;
			Global_1235672.f_9085.f_9[iVar1 /*4*/].f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

float func_384(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	iVar0 = func_404(iParam0, uParam1);
	if (iVar0 != 1.96379E+16f)
	{
		return iVar0;
	}
	if (BOUNTY::BOUNTY_GET_COOLDOWN_COLLECTION(&Var1))
	{
		Global_1245159.f_9807.f_3 = Var1.f_1;
	}
	if (Global_1295619.f_16 < Global_1245159.f_9807.f_3)
	{
		return 9.32659E-18f;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(133.4424f))
	{
		return -1.053971E+18f;
	}
	if (func_400(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return 6.322354E+12f;
	}
	if (Global_1245159.f_9807.f_2 == 0)
	{
		iVar4 = ((func_274(iParam0) / 1000) + func_569(60));
		Global_1245159.f_9807.f_2 = (Global_1295619.f_16 + iVar4);
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Global_1235672.f_9085.f_120)))
	{
		return -1.316151E+09f;
	}
	if (Global_1295619.f_16 > Global_1245159.f_9807.f_2)
	{
		return 1.96379E+16f;
	}
	return 4.382566E+30f;
}

bool func_385()
{
	int iVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_ID();
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)))
		{
		}
		else if (Global_1225672[iVar0 /*303*/].f_300.f_1 == iVar1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_386(int iParam0)
{
	return Global_1225672[iParam0 /*303*/].f_300.f_1;
}

void func_387(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_570(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 11, &uParam19);
}

bool func_388(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_389(int iParam0, int iParam1)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_359(&Var1, iParam0) && func_360(&Var1, iParam1))
	{
		iVar0 = ((func_409(iParam0) - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

bool func_390(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	vector3 vVar1;
	float fVar4;

	bVar0 = func_571(iParam0, iParam1, 2);
	if (func_572(iParam0, iParam1, bVar0))
	{
		return true;
	}
	vVar1 = { func_332(iParam0, iParam1) };
	if (func_396(vVar1))
	{
		return false;
	}
	fVar4 = func_573(func_169(iParam0), iParam1);
	if ((bParam2 && func_571(iParam0, iParam1, 1)) && func_574(vVar1, fVar4))
	{
		*bParam3 = 1;
		return true;
	}
	return func_575(vVar1, fVar4, bVar0);
}

bool func_391(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (func_359(&Var1, iParam0) && func_360(&Var1, iParam1))
	{
		func_533(Var1, -7.526388E+19f, &bVar0, 0);
	}
	return bVar0;
}

Vector3 func_392(int iParam0, int iParam1)
{
	vector3 vVar0;
	struct<5> Var3;

	if (func_359(&Var3, iParam0) && func_360(&Var3, iParam1))
	{
		func_532(Var3, -3.659237E+25f, &vVar0, 1);
	}
	return vVar0;
}

int func_393(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;

	iVar0 = 0;
	if (func_359(&Var1, iParam0))
	{
		if (func_388(&Var1, iParam1))
		{
			func_361(Var1, 8.85758E+09f, &iVar0, 0);
		}
	}
	iVar6 = 0;
	if (iVar0 != 0)
	{
		iVar6 = func_576(iVar0);
	}
	return iVar6;
}

bool func_394(int iParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;

	if (func_396(vParam1))
	{
		return false;
	}
	if (func_577(iParam0))
	{
		return false;
	}
	if (func_578(iParam0))
	{
		return false;
	}
	fVar0 = 5f;
	fVar1 = func_579(iParam0);
	if (fVar1 > 1133903872)
	{
		fVar1 = 1133903872; /* Float: 300f */
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::PLAYER_ID(), vParam1, fVar0, fVar1))
	{
		return false;
	}
	if (NETWORK::IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(vParam1, fVar0, fVar1))
	{
		return false;
	}
	fVar1 = (fVar1 * 1061158912);
	if (fVar1 < 1125515264)
	{
		fVar1 = 1125515264; /* Float: 150f */
	}
	iVar5 = 0;
	iVar5 = 0;
	while (iVar5 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar5);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				fVar4 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, false, false), vParam1);
				if (fVar4 < fVar1 && !func_580(iParam0))
				{
					return false;
				}
			}
		}
		iVar5++;
	}
	return true;
}

int func_395(int iParam0)
{
	int iVar0;

	if (!func_130(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (func_581(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_396(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_397(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_RAID"):
		case joaat("CAMP_SELL"):
			return true;
		default:
			break;
	}
	return false;
}

int func_398(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

bool func_399(int iParam0)
{
	if (!func_126(iParam0))
	{
		return false;
	}
	return (func_582(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

bool func_400(int iParam0)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_215(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_401(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_402(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4)
{
	uParam0->f_4 = 1;
	uParam0->f_6 = uParam1;
	uParam0->f_10 = iParam2;
	uParam0->f_11 = iParam4;
	uParam0->f_13 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	uParam0->f_21[0 /*3*/] = { Global_34 };
	uParam0->f_7 = iParam3;
}

void func_403(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[13] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[13]))
	{
		return;
	}
	*uParam0 = 178;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 40, 5, Global_1051645.f_16[13]);
	func_583(uParam0, uParam0->f_1);
}

float func_404(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		*uParam1 = 1;
		return -7.02841E+07f;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (func_232(iVar0, 1))
	{
		*uParam1 = 1;
		return -7.354192E-11f;
	}
	if (func_584())
	{
		return -1.412499E+12f;
	}
	if (!func_176(255))
	{
		return 5.298768E+12f;
	}
	if (func_213(255))
	{
		return 6.7452E-37f;
	}
	if (func_214(iVar0, 1, 0, 1))
	{
		return -2.930248E-05f;
	}
	if (func_215(65536, iVar0))
	{
		return 7.489184E+09f;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return -2.768422E+23f;
	}
	if (func_413(Global_34))
	{
		return 1.607387E-12f;
	}
	if (func_217(func_216(), func_216(), 0, 0))
	{
		*uParam1 = 1;
		return -4.66885E+17f;
	}
	if (func_218())
	{
		*uParam1 = 1;
		return -8.460584E-30f;
	}
	return 1.96379E+16f;
}

bool func_405(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_170.f_27;
		case joaat("MEDIUM"):
			return Global_1901671.f_170.f_28;
		case joaat("HIGH"):
			return Global_1901671.f_170.f_29;
		case joaat("VERY_HIGH"):
			return Global_1901671.f_170.f_30;
		default:
			break;
	}
	return false;
}

bool func_406(int iParam0)
{
	return func_64(Global_1245159.f_9817, iParam0);
}

float func_407(int iParam0)
{
	switch (iParam0)
	{
		case joaat("LOW"):
			return Global_1901671.f_170.f_19;
		case joaat("MEDIUM"):
			return Global_1901671.f_170.f_20;
		case joaat("HIGH"):
			return Global_1901671.f_170.f_21;
		case joaat("VERY_HIGH"):
			return Global_1901671.f_170.f_22;
		default:
			break;
	}
	return 0f;
}

int func_408(int iParam0)
{
	int iVar0[113];
	int iVar114;
	int iVar115;

	iVar115 = 0;
	while (iVar115 <= 112)
	{
		if (func_313(iVar115) == iParam0)
		{
			iVar0[iVar114] = iVar115;
			iVar114++;
		}
		iVar115++;
	}
	if (iVar114 > 0)
	{
		return iVar0[MISC::GET_RANDOM_INT_IN_RANGE(0, iVar114)];
	}
	return -1;
}

int func_409(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	if (func_359(&vVar1, iParam0))
	{
		vVar1.f_2 = 8.002737E-08f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(vVar1.f_1), &vVar1))
		{
			iVar0 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(vVar1.x, vVar1.y);
		}
	}
	return iVar0;
}

int func_410(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_361(Var1, -2.913395E-35f, &iVar0, 0);
	}
	return iVar0;
}

int func_411(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if ((Global_1225084[iVar0 /*28*/] == iParam0 && Global_1225084[iVar0 /*28*/].f_6 == iParam1) && (iParam2 == -1 || Global_1225084[iVar0 /*28*/].f_9 == iParam2))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_412(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0;
	struct<5> Var3;

	*bParam2 = 0;
	if (func_359(&Var3, iParam0) && func_388(&Var3, iParam1))
	{
		if (func_532(Var3, 7.506326E+22f, &vVar0, 1))
		{
			*bParam2 = 1;
		}
	}
	return vVar0;
}

bool func_413(vector3 vParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;

	fVar0 = 1125515264; /* Float: 150f */
	fVar1 = (fVar0 * 1069547520);
	fVar1 = (fVar1 + 1036831949);
	vVar2.x = (vParam0.x - fVar1);
	vVar2.f_1 = (vParam0.y - fVar1);
	vVar2.f_2 = (vParam0.z - fVar1);
	vVar5.x = (vParam0.x + fVar1);
	vVar5.f_1 = (vParam0.y + fVar1);
	vVar5.f_2 = (vParam0.z + fVar1);
	iVar8 = PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(vVar2, vVar5);
	if (iVar8 < 16)
	{
		return true;
	}
	return false;
}

bool func_414()
{
	int iVar0;

	iVar0 = func_398(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	if (func_399(iVar0))
	{
		return true;
	}
	return false;
}

bool func_415()
{
	int iVar0;
	vector3 vVar1;

	if (!func_585(-2.919324E+23f, 1))
	{
		return false;
	}
	iVar0 = func_398(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
	if (!func_126(iVar0))
	{
		return false;
	}
	vVar1 = { func_586(iVar0) };
	if (func_396(vVar1))
	{
		return false;
	}
	if (func_173(Global_34, vVar1) > Global_1901671.f_170.f_58)
	{
		return false;
	}
	if (func_398(PLAYER::GET_PLAYER_INDEX()) == -1)
	{
		return false;
	}
	if (func_418(-2.933081E+12f, func_417(1), 6.727819E+25f, 1, 0, 0) < Global_1901671.f_170.f_48)
	{
		return false;
	}
	return true;
}

bool func_416()
{
	vector3 vVar0;

	if (Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	vVar0 = { func_249(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_5.f_12) };
	if (func_173(Global_34, vVar0) > Global_1901671.f_170.f_58)
	{
		return false;
	}
	return true;
}

struct<4> func_417(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_587(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_589(2.982335E+09f, func_588(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_589(2.982335E+09f, func_588(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_589(2.982335E+09f, func_588(), -5.45926E-19f, bParam0);
}

int func_418(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_590(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_591(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_589(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_587(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_587(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

float func_419()
{
	float fVar0;

	fVar0 = 0f;
	if (func_418(-2.933081E+12f, func_417(1), 6.727819E+25f, 1, 0, 0) >= Global_1901671.f_170.f_48)
	{
		fVar0 = (Global_1901671.f_170.f_50 * (1f - func_592()));
	}
	if (func_418(-2.933081E+12f, func_417(1), 6.727819E+25f, 1, 0, 0) >= Global_1901671.f_170.f_48)
	{
		fVar0 = (Global_1901671.f_170.f_51 * (1f - func_592()));
	}
	return fVar0;
}

float func_420()
{
	float fVar0;
	int iVar1;

	fVar0 = 0f;
	iVar1 = 0;
	if (func_418(-1.787514E+19f, func_417(1), 6.727819E+25f, 1, 0, 0) > 0)
	{
		iVar1 = func_418(-1.787514E+19f, func_417(1), 6.727819E+25f, 1, 0, 0);
	}
	else if (func_418(6.166539E+16f, func_417(1), 6.727819E+25f, 1, 0, 0) > 0)
	{
		iVar1 = func_418(6.166539E+16f, func_417(1), 6.727819E+25f, 1, 0, 0);
	}
	else if (func_418(1.255573E+28f, func_417(1), 6.727819E+25f, 1, 0, 0) > 0)
	{
		iVar1 = func_418(1.255573E+28f, func_417(1), 6.727819E+25f, 1, 0, 0);
	}
	if (iVar1 >= Global_1901671.f_170.f_40)
	{
		fVar0 = (Global_1901671.f_170.f_43 * (1f - func_593()));
	}
	if (iVar1 >= Global_1901671.f_170.f_41)
	{
		fVar0 = (Global_1901671.f_170.f_44 * (1f - func_593()));
	}
	return fVar0;
}

bool func_421(int iParam0)
{
	return func_401(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

void func_422(var uParam0, int iParam1)
{
	func_594(uParam0, iParam1);
}

bool func_423(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return false;
	}
	func_595(bParam2);
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

int func_424(int iParam0, int iParam1)
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

void func_425(int iParam0, int iParam1, bool bParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1149417.f_3876.f_2[func_426(iParam0, 1) /*4*/] == iParam1)
	{
		return;
	}
	if (bParam2)
	{
		func_596(iParam0);
	}
	Global_1149417.f_3876.f_2[func_426(iParam0, 1) /*4*/] = iParam1;
}

int func_426(int iParam0, int iParam1)
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

int func_427(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_423(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_428()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_429(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_430(int iParam0)
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

void func_431(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_269(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_598(func_597(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_169(iVar5) == func_597(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_313(iVar4);
			if (!func_291(iVar6, 0))
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
	iParam2->f_2 = Global_1114878[iVar0 /*70*/];
}

int func_432(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_252(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_599(iVar0);
}

int func_433(struct<2> Param0, int iParam2)
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
	if (!func_423(Param0, &vVar0))
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
		func_423(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
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
			func_600(iVar9);
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

void func_434()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_423(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_435(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_436(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_437(int iParam0, int iParam1)
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

void func_438(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_439()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_601(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_602(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_603(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_441(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_251(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_442(int iParam0)
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
		func_604(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_604(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_605(iParam0, Global_1900460.f_66);
	return 1;
}

void func_443(var uParam0, int iParam1)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (Global_1205789.f_129 <= 0)
	{
		Global_1205789.f_129 = 0;
		return;
	}
	if (iParam1 >= Global_1205789.f_129)
	{
		iParam1 = 0;
	}
	if (iParam1 >= 32)
	{
		iParam1 = (Global_1205789.f_129 - 1);
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	if (Global_1205789.f_129 == 1)
	{
		*uParam0 = { Global_1205789[0 /*4*/] };
		Global_1205789[0 /*4*/] = { Var0 };
		Global_1205789.f_129 = 0;
		return;
	}
	*uParam0 = { Global_1205789[iParam1 /*4*/] };
	Global_1205789.f_129 = (Global_1205789.f_129 - 1);
	iVar4 = (Global_1205789.f_129 - 1);
	iVar5 = iParam1;
	while (iVar5 <= iVar4)
	{
		Global_1205789[iVar5 /*4*/] = { Global_1205789[iVar5 + 1 /*4*/] };
		Global_1205789[iVar5 + 1 /*4*/] = { Var0 };
		iVar5++;
	}
}

void func_444(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_445()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_606(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

struct<2> func_446(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_98(-1.11244E+21f);
		case 2:
			return func_98(-0.03766548f);
		case 3:
			return func_98(20967.98f);
		case 4:
			return func_98(20967.98f);
	}
	return Var0;
}

bool func_447(struct<2> Param0)
{
	return func_607(Param0, 1, 4);
}

bool func_448(int iParam0, var uParam1)
{
	struct<24> Var0;
	int iVar40;
	int iVar41;
	int iVar42;

	if (func_147(iParam0, 1.084202E-19f))
	{
		return true;
	}
	if (func_608(&(Global_1225084.f_380)))
	{
		return false;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	iVar40 = func_313(Global_1225084[iParam0 /*28*/]);
	iVar41 = func_449(iVar40);
	iVar42 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (Global_1207465.f_13[iVar41] >= Global_1207465.f_3[iVar41])
	{
		*uParam1 = 1;
		return false;
	}
	Var0.f_2 = 2;
	Var0.f_5 = 0;
	Var0.f_7 = iVar42;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_449(iVar40);
	Var0.f_8.f_5.f_9 = iVar41;
	Var0.f_8.f_5 = { func_325(iParam0) };
	Var0.f_8.f_2 = { func_332(Global_1225084[iParam0 /*28*/], Global_1225084[iParam0 /*28*/].f_6) };
	func_609(&Var0);
	func_610(&(Global_1225084.f_380), &Var0, 1, 15, 6, 24, 0);
	func_296(iParam0, 1.084202E-19f);
	return true;
}

int func_449(int iParam0)
{
	return 2;
}

void func_450(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = func_313(Global_1225084[iParam0 /*28*/]);
	*uParam1 = { func_325(iParam0) };
	uParam1->f_9 = func_449(iVar0);
}

int func_451(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_611(uParam0))
	{
		return -1;
	}
	iVar0 = func_612(uParam0, uParam0->f_9);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 == uParam0->f_9)
		{
		}
		else
		{
			iVar0 = func_612(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

bool func_452(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<15> func_453(int iParam0)
{
	struct<15> Var0;

	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	if (!func_452(iParam0))
	{
		return Var0;
	}
	return Global_1207465.f_231[iParam0 /*15*/];
}

var func_454(int iParam0)
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

void func_455(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 31, 28, &uParam1);
}

void func_456(var uParam0)
{
	if (Global_1051645.f_16[0] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0]))
	{
		return;
	}
	*uParam0 = 9;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 31, 28, Global_1051645.f_16[0]);
}

int func_457(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_613(iParam0);
	if (iVar0 == 0)
	{
		return -1;
	}
	if (iParam1 == -1)
	{
		return -1;
	}
	return func_614(iVar0, iParam1);
}

void func_458(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_615(&Var0);
}

bool func_459(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_63(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (Global_1225672[iVar0 /*303*/][iParam0 /*23*/].f_22 != Global_1225084[iParam0 /*28*/].f_9 || !func_66(iParam0, iParam1, iVar0)))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_460(int iParam0)
{
	int iVar0;

	if (!func_63(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && (Global_1225672[iVar0 /*303*/][iParam0 /*23*/].f_22 != Global_1225084[iParam0 /*28*/].f_9 || func_534(iParam0, iVar0, 1, 0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_461(int iParam0)
{
	return func_459(iParam0, 1024);
}

void func_462(int iParam0)
{
	struct<24> Var0;
	int iVar40;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = 255;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_8 = 2;
	Var0.f_8.f_1 = -1;
	Var0.f_8.f_5 = -1;
	Var0.f_8.f_5.f_1 = -1;
	Var0.f_8.f_5.f_3 = -1;
	Var0.f_8.f_5.f_4 = -1;
	Var0.f_8.f_5.f_5 = -1;
	Var0.f_8.f_5.f_6 = -1;
	Var0.f_8.f_5.f_6.f_1 = -1;
	Var0.f_8.f_5.f_9 = 2;
	Var0.f_23.f_1 = 1024;
	Var0.f_23.f_4 = -15;
	Var0.f_23.f_5 = 255;
	Var0.f_23.f_8 = 1;
	Var0.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_23.f_13 = -1;
	iVar40 = func_313(Global_1225084[iParam0 /*28*/]);
	Var0.f_2 = 2;
	Var0.f_5 = 7;
	Var0.f_8.f_1 = 2;
	Var0.f_8 = func_449(iVar40);
	Var0.f_8.f_5.f_9 = func_449(iVar40);
	Var0.f_8.f_5 = { func_325(iParam0) };
	Var0.f_8.f_2 = { func_332(Global_1225084[iParam0 /*28*/], Global_1225084[iParam0 /*28*/].f_6) };
	func_610(&(Global_1225084.f_380), &Var0, 0, 0, 0, 0, 0);
}

int func_463(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1225084.f_369[iVar0 /*2*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_464(int iParam0)
{
	Global_1225084.f_369[iParam0 /*2*/].f_1 = 1;
}

bool func_465(var uParam0, int iParam1)
{
	return (iParam1 >= 0 && iParam1 < uParam0->f_2);
}

int func_466()
{
	return Global_1300340.f_150.f_4;
}

struct<2> func_467(int iParam0)
{
	if (iParam0 < 0)
	{
		return func_216();
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_5;
}

int func_468(int iParam0)
{
	if (!func_452(iParam0))
	{
		return -1;
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_1;
}

struct<2> func_469(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

void func_470(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_7;
	if (iVar1 > 1)
	{
		iVar1 = 1;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		func_616(iParam0, iVar0);
		func_617(iParam0, iVar0);
		iVar0++;
	}
	func_479(iParam0, 0);
	func_618(iParam0);
	func_482(iParam0);
}

bool func_471(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_472(int iParam0, struct<2> Param1)
{
	Global_1219580.f_1[iParam0 /*10*/].f_4 = { Param1 };
	Global_1219580.f_1[iParam0 /*10*/].f_6 = func_427(Param1);
}

void func_473(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_471(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

bool func_474(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < func_364())
	{
		iVar0 = func_365(iVar1);
		if (func_471(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return func_471(iParam0, PLAYER::PLAYER_ID(), iParam1);
}

void func_475(int iParam0, bool bParam1, int iParam2)
{
	struct<2> Var0;
	bool bVar2;

	Var0 = { func_469(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_51(Var0))
	{
		return;
	}
	if (!func_112(Var0))
	{
		return;
	}
	if (func_471(iParam0, PLAYER::PLAYER_ID(), 5))
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
	func_116(Var0, 0, bVar2, iParam2, 0);
	func_473(iParam0, 4);
}

void func_476(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_469(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_51(Var0))
	{
		return;
	}
	if (!func_112(Var0))
	{
		return;
	}
	if (func_471(iParam0, PLAYER::PLAYER_ID(), 5))
	{
		return;
	}
	func_116(Var0, 0, 1, iParam1, 0);
	func_473(iParam0, 5);
}

int func_477(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_13;
}

bool func_478(int iParam0)
{
	if (!func_490(iParam0))
	{
		return false;
	}
	if (func_477(iParam0) >= 5)
	{
		return false;
	}
	if (func_477(iParam0) <= 0)
	{
		return false;
	}
	if (!func_471(iParam0, PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

void func_479(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_469(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_51(Var0) && !func_112(Var0))
	{
		return;
	}
	func_619(iParam0, 2);
	func_619(iParam0, 3);
	func_473(iParam0, 6);
	func_116(Var0, 0, 2, iParam1, 0);
}

int func_480(int iParam0)
{
	return Global_1207465.f_2505[iParam0 /*6*/].f_4;
}

void func_481(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_469(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (func_51(Var0))
	{
		return;
	}
	if (func_112(Var0))
	{
		return;
	}
	func_473(iParam0, 2);
	func_619(iParam0, 3);
	func_619(iParam0, 6);
	func_514(Var0);
}

void func_482(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	Global_1217203[iVar0 /*72*/][iParam0] = 0;
}

void func_483(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0;

	Var0 = { func_469(iParam0) };
	if (!func_36(Var0))
	{
		return;
	}
	if (!func_51(Var0))
	{
		return;
	}
	if (func_112(Var0))
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
	func_473(iParam0, 3);
	func_511(Var0, 1, bParam2, bParam3);
}

bool func_484(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	iVar1 = 0;
	while (iVar1 < func_364())
	{
		iVar0 = func_365(iVar1);
		if (func_471(iParam0, iVar0, 2) && !((func_471(iParam0, iVar0, 4) || func_471(iParam0, iVar0, 5)) || func_471(iParam0, iVar0, 6)))
		{
			return false;
		}
		iVar1++;
	}
	Var2 = { func_469(iParam0) };
	return !(func_51(Var2) || func_112(Var2));
}

void func_485(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_620(iParam0);
	iVar1 = func_621(iParam0, iParam1);
	iVar2 = func_622(iParam0, iParam1);
	iVar3 = func_477(iParam0);
	switch (func_623(iParam0, iParam1))
	{
		case -1:
			if (!func_478(iParam0))
			{
				return;
			}
			func_624(iParam0, iParam1, 1);
			break;
		case 0:
			if (!func_478(iParam0))
			{
				return;
			}
			func_624(iParam0, iParam1, 1);
			break;
		case 1:
			if (!func_478(iParam0))
			{
				func_625(iParam0, iParam1);
				func_624(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				return;
			}
			if (iVar2 >= 3)
			{
				return;
			}
			func_624(iParam0, iParam1, 2);
			break;
		case 2:
			if (!func_478(iParam0))
			{
				func_625(iParam0, iParam1);
				func_624(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_624(iParam0, iParam1, 1);
				return;
			}
			if (iVar2 >= 3)
			{
				func_624(iParam0, iParam1, 6);
				return;
			}
			if (!func_626(iParam0, iParam1))
			{
				return;
			}
			func_627(iParam0, iParam1, 0);
			func_624(iParam0, iParam1, 3);
			break;
		case 3:
			if (!func_478(iParam0))
			{
				func_625(iParam0, iParam1);
				func_624(iParam0, iParam1, 0);
				return;
			}
			if (iVar2 < 1)
			{
				func_624(iParam0, iParam1, 7);
				return;
			}
			if (iVar2 >= 3)
			{
				func_624(iParam0, iParam1, 6);
				return;
			}
			if (!func_628(iParam0, iParam1))
			{
				return;
			}
			func_624(iParam0, iParam1, 4);
			break;
		case 4:
			if (!NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, true, 0))
			{
				if (!func_629(iParam0, iParam1))
				{
					func_630(iParam0, iParam1, 0);
					func_631(iParam0, iParam1, 0);
					func_624(iParam0, iParam1, 2);
				}
				return;
			}
			func_624(iParam0, iParam1, 5);
			break;
		case 5:
			if ((func_468(iParam0) <= 0 || iVar3 >= 5) || iVar3 < 1)
			{
				func_616(iParam0, iParam1);
			}
			if (func_632(iParam0, iParam1))
			{
				func_616(iParam0, iParam1);
			}
			if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, true, 0))
			{
				return;
			}
			if (func_629(iParam0, iParam1))
			{
				return;
			}
			func_630(iParam0, iParam1, 0);
			if ((func_494(iParam0, 4) || func_494(iParam0, 5)) || (func_477(iParam0) > 2 && iVar2 == 3))
			{
				func_624(iParam0, iParam1, 6);
			}
			else
			{
				func_631(iParam0, iParam1, 0);
				func_624(iParam0, iParam1, 8);
			}
			break;
		case 6:
			if (!func_484(iParam0))
			{
				return;
			}
			func_624(iParam0, iParam1, 7);
			break;
		case 7:
			func_625(iParam0, iParam1);
			func_624(iParam0, iParam1, 8);
			break;
		case 8:
			func_473(iParam0, 7);
			if (iVar2 == 2 || iVar2 == 3)
			{
				return;
			}
			func_624(iParam0, iParam1, 1);
			func_619(iParam0, 7);
			break;
	}
}

bool func_486(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_633(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return true;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iVar0))
	{
		func_634(iParam0, iParam1, 0);
		return true;
	}
	func_634(iParam0, iParam1, 0);
	return true;
}

void func_487(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_308(iParam0, 8))
	{
		return;
	}
	iVar0 = func_635(iParam0, iParam1);
	iVar1 = func_468(iParam0);
	if (!func_490(iParam0) || func_477(iParam0) >= 5)
	{
		if (iVar0 != 1)
		{
			func_636(iParam0, iParam1);
			func_637(iParam0, iParam1, 1);
		}
		return;
	}
	switch (iVar0)
	{
		case -2:
			break;
		case -1:
			if (!func_36(func_467(iParam0)))
			{
				return;
			}
			if (func_638(iParam0, iParam1) <= 0)
			{
				func_637(iParam0, iParam1, 0);
				return;
			}
			else
			{
				if (iVar1 == 1)
				{
					func_637(iParam0, iParam1, 5);
				}
				else
				{
					func_637(iParam0, iParam1, 2);
				}
				return;
			}
			break;
		case 0:
			if (func_638(iParam0, iParam1) > 0)
			{
				func_637(iParam0, iParam1, 2);
				return;
			}
			break;
		case 1:
			func_637(iParam0, iParam1, -1);
			break;
		case 2:
			if (func_639(iParam0, iParam1) != 0)
			{
				func_637(iParam0, iParam1, 4);
				return;
			}
			func_640(iParam0, iParam1, 0);
			func_637(iParam0, iParam1, 3);
			break;
		case 3:
			if (func_633(iParam0, iParam1) == 0)
			{
				func_637(iParam0, iParam1, 2);
				return;
			}
			if (func_641(iParam0, iParam1))
			{
				func_637(iParam0, iParam1, 4);
				return;
			}
			break;
		case 4:
			if (iVar1 == 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_639(iParam0, iParam1), 160);
				func_637(iParam0, iParam1, 7);
				return;
			}
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_639(iParam0, iParam1)))
			{
				func_642(iParam0, iParam1);
				func_637(iParam0, iParam1, 2);
				return;
			}
			break;
		case 5:
			if ((func_622(iParam0, iParam1) == 2 || func_477(iParam0) == 2) || iVar1 > 1)
			{
				func_637(iParam0, iParam1, 2);
				return;
			}
			break;
		case 6:
			if (func_633(iParam0, iParam1) == 0)
			{
				func_637(iParam0, iParam1, 5);
				return;
			}
			if ((func_622(iParam0, iParam1) == 2 || func_477(iParam0) == 2) || iVar1 > 1)
			{
				func_486(iParam0, iParam1);
				func_637(iParam0, iParam1, 2);
				return;
			}
			if (func_641(iParam0, iParam1))
			{
				func_637(iParam0, iParam1, 7);
				return;
			}
			break;
		case 7:
			if ((func_622(iParam0, iParam1) == 2 || func_477(iParam0) == 2) || iVar1 > 1)
			{
				VOLUME::_0xD4FA73FE628FEC63(func_639(iParam0, iParam1), 32);
				func_637(iParam0, iParam1, 4);
				return;
			}
			if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(func_639(iParam0, iParam1)))
			{
				func_642(iParam0, iParam1);
				func_637(iParam0, iParam1, 5);
				return;
			}
			break;
	}
}

void func_488(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_308(iParam0, 16))
	{
		return;
	}
	iVar0 = func_620(iParam0);
	iVar1 = func_621(iParam0, iParam1);
	iVar3 = func_622(iParam0, iParam1);
	if (iVar3 > 0)
	{
		if (!func_490(iParam0))
		{
			func_643(iParam0, iParam1, 0);
			return;
		}
	}
	switch (iVar3)
	{
		case -1:
			if (!func_36(func_467(iParam0)))
			{
				return;
			}
			if (func_644(iParam0, iParam1) <= 0)
			{
				func_643(iParam0, iParam1, 0);
				return;
			}
			else
			{
				func_643(iParam0, iParam1, 1);
				return;
			}
			break;
		case 0:
			if (!func_490(iParam0))
			{
				return;
			}
			if (func_644(iParam0, iParam1) <= 0)
			{
				return;
			}
			iVar2 = func_645(iParam0);
			if (iVar2 != -15 && func_646(iVar2))
			{
				return;
			}
			func_643(iParam0, iParam1, 1);
			break;
		case 1:
			if (func_647(iParam0, iParam1, 0))
			{
				func_643(iParam0, iParam1, 2);
				func_499(iParam0, 3);
				return;
			}
			break;
		case 2:
			if (!func_647(iParam0, iParam1, 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar0, iVar1, false, 0))
			{
				func_643(iParam0, iParam1, 3);
				return;
			}
			if (func_477(iParam0) >= 3)
			{
				func_643(iParam0, iParam1, 3);
				return;
			}
			break;
		case 3:
			if (func_477(iParam0) >= 3)
			{
				return;
			}
			if (!func_648(iParam0, iParam1))
			{
				func_643(iParam0, iParam1, 2);
				return;
			}
			if (func_493(iParam0) != 255)
			{
				func_499(iParam0, 2);
			}
			else
			{
				func_499(iParam0, 1);
			}
			iVar2 = func_645(iParam0);
			if (iVar2 != -15 && func_646(iVar2))
			{
				func_643(iParam0, iParam1, 0);
				return;
			}
			if (func_477(iParam0) >= 4)
			{
				return;
			}
			if (func_649(iParam0, 7))
			{
				return;
			}
			func_643(iParam0, iParam1, 1);
			break;
	}
}

void func_489(int iParam0, int iParam1)
{
	Global_1207465.f_231.f_1066[iParam0 /*17*/].f_13 = iParam1;
}

bool func_490(int iParam0)
{
	bool bVar0;

	bVar0 = !func_651(func_469(iParam0), func_650(iParam0), 0);
	return bVar0;
}

int func_491(int iParam0)
{
	struct<15> Var0;
	struct<15> Var15;
	int iVar30;
	int iVar31;

	if (!func_452(iParam0))
	{
		return 0;
	}
	Var0 = 2;
	Var0.f_1 = -1;
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var15 = { Global_1207465.f_231[iParam0 /*15*/] };
	Var0.f_1 = 0;
	Global_1207465.f_231[iParam0 /*15*/] = { Var0 };
	iVar30 = Var15;
	iVar31 = Var15.f_5.f_9;
	Global_1207465.f_13[iVar31] = (Global_1207465.f_13[iVar31] - 1);
	Global_1207465.f_8[iVar30] = (Global_1207465.f_8[iVar30] - 1);
	if (iVar30 != iVar31)
	{
		Global_1207465.f_18[iVar30] = (Global_1207465.f_18[iVar30] - 1);
	}
	if (func_652(iParam0))
	{
		Global_1207465.f_23[iVar30] = (Global_1207465.f_23[iVar30] - 1);
	}
	return 1;
}

void func_492(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return;
	}
	Global_1207465.f_2505[iParam0 /*6*/].f_4 = GANG::NETWORK_GET_GANG_ID(iParam1);
	Global_1207465.f_2505[iParam0 /*6*/].f_5 = iParam1;
}

int func_493(int iParam0)
{
	return Global_1207465.f_2505[iParam0 /*6*/].f_5;
}

bool func_494(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_471(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_495(int iParam0)
{
	int iVar0;
	var uVar1;

	if (!func_308(iParam0, 512))
	{
		return false;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	uVar1 = func_655(func_654(iParam0, 0), 0f, 0f, 0f, IntToFloat(iVar0), IntToFloat(iVar0), IntToFloat(iVar0 * 2), -2.19652E+23f, 0, 8);
	return SCRIPTS::COUNT_PLAYER_BITS(&uVar1) <= 0;
}

bool func_496(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_656(iParam0, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_497(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (Global_1207465.f_231.f_1066[iParam0 /*17*/].f_6 & 4096 != 0)
	{
		return;
	}
	iVar0 = Global_1207465.f_2505[iParam0 /*6*/].f_5;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar2 = GANG::NETWORK_GET_GANG_ID(iVar0);
		if (Global_1207465.f_2505[iParam0 /*6*/].f_4 != iVar2)
		{
			if ((GANG::NETWORK_IS_GANG_ID_VALID(Global_1207465.f_2505[iParam0 /*6*/].f_4) && GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207465.f_2505[iParam0 /*6*/].f_4)) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1207465.f_2505[iParam0 /*6*/].f_4) > 0)
			{
				iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1207465.f_2505[iParam0 /*6*/].f_4);
				func_492(iParam0, iVar1);
			}
			else if (GANG::NETWORK_GET_GANG_LEADER(iVar2) == iVar0)
			{
				Global_1207465.f_2505[iParam0 /*6*/].f_4 = iVar2;
			}
			else
			{
				func_657(iParam0);
			}
		}
		return;
	}
	if (Global_1207465.f_2505[iParam0 /*6*/].f_4 == 0)
	{
		func_657(iParam0);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(Global_1207465.f_2505[iParam0 /*6*/].f_4))
	{
		func_657(iParam0);
		return;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(Global_1207465.f_2505[iParam0 /*6*/].f_4);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		func_657(iParam0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		func_657(iParam0);
		return;
	}
	func_492(iParam0, iVar1);
}

bool func_498(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (Global_1217203[iVar0 /*72*/][iParam0] > 127)
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_499(int iParam0, int iParam1)
{
	Global_1207465.f_231[iParam0 /*15*/].f_1 = iParam1;
}

int func_500(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Global_1235672[iParam0 /*697*/].f_612))
	{
		return 4;
	}
	if (func_66(iParam0, 8, 255))
	{
		return 5;
	}
	if (func_218())
	{
		return 26;
	}
	if (func_66(iParam0, 64, 255) && (func_503(iParam0, 255) == 16 || !func_40(iParam0, 32)))
	{
		return 16;
	}
	if (func_217(Global_1235672[iParam0 /*697*/].f_598, func_216(), 0, 0) && Global_1235672[iParam0 /*697*/].f_571 != 2.684408E+23f)
	{
		return 7;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_658(Global_1235672[iParam0 /*697*/].f_598))
	{
		if (func_66(iParam0, 32, 255) && !func_40(iParam0, 256))
		{
			func_659();
			func_150(iParam0, 256);
		}
		return 8;
	}
	if (Global_1235672[iParam0 /*697*/].f_571 != 1.038497E+13f || Global_1225084[iParam0 /*28*/].f_16 != PLAYER::PLAYER_ID())
	{
		if (func_40(iParam0, 8388608) || (func_66(iParam0, 32, 255) && func_504(iParam0, &bVar1)))
		{
			func_150(iParam0, 8388608);
			if (bVar1)
			{
				func_150(iParam0, 2.350989E-38f);
			}
			return 17;
		}
	}
	bVar2 = func_660(iParam0, 255);
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		if (func_120(Global_1235672[iParam0 /*697*/].f_571))
		{
			if (!func_66(iParam0, 16, 255) && !func_147(iParam0, 16))
			{
				return 21;
			}
		}
		if (bVar2 && func_40(iParam0, 262144))
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	iVar3 = func_661(iParam0);
	if (iVar3 != 255)
	{
		if (iVar3 != PLAYER::PLAYER_ID())
		{
			func_319(iParam0, 2.350989E-38f);
		}
		return 2;
	}
	if (func_400(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return 23;
	}
	if (Global_1235672[iParam0 /*697*/].f_613 != 0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Global_1235672[iParam0 /*697*/].f_613))
	{
		return 24;
	}
	if (bVar2)
	{
		return 15;
	}
	return 0;
}

int func_501(int iParam0)
{
	if (func_662(Global_1225084[iParam0 /*28*/]))
	{
		return 12;
	}
	if (func_214(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 13;
	}
	return 0;
}

int func_502(int iParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_VISIBLE(Global_1235672[iParam0 /*697*/].f_612))
	{
		return 4;
	}
	bVar1 = func_534(iParam0, 255, 0, 0);
	bVar2 = func_40(iParam0, 512);
	fVar3 = Global_1901671.f_316.f_170;
	if (Global_1235672[iParam0 /*697*/].f_571 == 4.213218E+30f)
	{
		fVar3 = (fVar3 + (fVar3 * func_663()));
	}
	if (Global_1235672[iParam0 /*697*/].f_571 != 1.038497E+13f && !func_664(Global_1235672[iParam0 /*697*/].f_601, bVar1, bVar2, fVar3))
	{
		return 9;
	}
	if (!func_147(iParam0, 2097152) && !func_66(iParam0, 32, 255))
	{
		return 10;
	}
	if (Global_1235672[iParam0 /*697*/].f_571 == 4.213218E+30f)
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.546423E-19f))
		{
			return 18;
		}
		iVar4 = func_665();
		if (func_290(iVar4) && func_175(iVar4) < Global_1901671.f_170.f_59)
		{
			return 19;
		}
		if (func_666(iParam0, 1))
		{
			return 20;
		}
	}
	else if (Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1225084[iParam0 /*28*/].f_16) && Global_1225084[iParam0 /*28*/].f_16 == Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1)
		{
			return 2;
		}
		else
		{
			return 22;
		}
	}
	if (func_147(iParam0, 2f))
	{
		return 25;
	}
	if (func_667(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 11;
	}
	return 0;
}

int func_503(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return Global_1225672[iParam1 /*303*/][iParam0 /*23*/].f_20;
}

bool func_504(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iVar0 != Global_1235672[iParam0 /*697*/].f_609)
	{
		bVar1 = GANG::NETWORK_IS_GANG_ID_VALID(Global_1235672[iParam0 /*697*/].f_609);
		if (((Global_1235672[iParam0 /*697*/].f_608 > 1 && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1235672[iParam0 /*697*/].f_609) > 0) && GANG::NETWORK_GET_GANG_LEADER(Global_1235672[iParam0 /*697*/].f_609) != 255) && GANG::NETWORK_GET_GANG_LEADER(Global_1235672[iParam0 /*697*/].f_609) == Global_1235672[iParam0 /*697*/].f_610)
		{
			*uParam1 = 1;
		}
		Global_1235672[iParam0 /*697*/].f_609 = iVar0;
		return bVar1;
	}
	Global_1235672[iParam0 /*697*/].f_608 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1235672[iParam0 /*697*/].f_609);
	Global_1235672[iParam0 /*697*/].f_610 = GANG::NETWORK_GET_GANG_LEADER(Global_1235672[iParam0 /*697*/].f_609);
	return false;
}

void func_505(int iParam0)
{
	int iVar0;

	iVar0 = func_457(Global_1225084[iParam0 /*28*/], Global_1225084[iParam0 /*28*/].f_6);
	if (iVar0 == -1)
	{
		return;
	}
	func_668(iVar0);
}

void func_506(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_17() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_256(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_258(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

void func_507(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (func_40(iParam0, 3.85186E-34f))
	{
		return;
	}
	iVar0 = Global_1225084[iParam0 /*28*/].f_5;
	if (!func_126(iVar0))
	{
		return;
	}
	switch (Global_1235672[iParam0 /*697*/].f_571)
	{
		case joaat("CAMP_RAID"):
			bVar1 = true;
			iVar2 = 3;
			break;
		case joaat("CAMP_RESUPPLY"):
		case joaat("CAMP_SETUP"):
		case joaat("CAMP_SELL"):
			bVar1 = true;
			iVar2 = 3;
			break;
	}
	func_669(iVar0, iVar2, bVar1);
	func_150(iParam0, 3.85186E-34f);
}

void func_508()
{
	struct<2> Var0;

	Var0 = { func_98(-0.01179246f) };
	STATS::STAT_ID_SET_INT(&Var0, Global_1295619.f_16, true);
}

int func_509(int iParam0)
{
	return Global_1225084[iParam0 /*28*/].f_26.f_1;
}

bool func_510(int iParam0, int iParam1)
{
	bool bVar0;
	struct<5> Var1;

	bVar0 = false;
	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_533(Var1, 2.118935E-18f, &bVar0, 0);
	}
	return bVar0;
}

void func_511(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_36(Param0))
	{
		return;
	}
	if (!func_51(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_670(Param0);
	}
	if (!func_36(func_263(0)))
	{
		func_262(Param0, 3);
		func_264(bParam3);
		func_265(!bParam4);
		func_671(Param0, -1);
		if (bParam2 && !func_672(2))
		{
			func_429(&Global_0, 1024);
		}
		func_267(1);
	}
	else
	{
		func_671(Param0, -1);
		func_262(Param0, 4);
		func_673(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_269(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_674(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_512(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_107(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_427(Param0);
	Var0.f_3 = iParam3;
	func_675(&Var0, bParam2, iParam4);
	return 1;
}

void func_513(int iParam0)
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

int func_514(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 == 15)
	{
		return -1;
	}
	if (!func_676(Param0))
	{
		return -1;
	}
	iVar1 = func_677(Param0);
	if (iVar1 >= 0)
	{
		func_678(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900530;
		Global_1900531[iVar0 /*2*/] = { Param0 };
		Global_1900562[iVar0 /*2*/] = { Var2 };
		func_678(Param0, 1);
		Global_1900530++;
		if (Global_1900530 > 15)
		{
			Global_1900530 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_515(struct<2> Param0)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_251(Param0, func_679(iVar0)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_516(int iParam0)
{
	if (Global_1110244.f_17)
	{
		func_680(iParam0);
	}
	else
	{
		func_681(iParam0);
	}
}

bool func_517()
{
	if (func_17() != 0)
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

void func_518(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 188;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 14, &uParam1);
}

bool func_519(int iParam0)
{
	return iParam0 != -1;
}

void func_520(int iParam0, int iParam1)
{
	func_682(iParam0, iParam1, 1.155403E+37f, 0);
	func_682(iParam0, iParam1, -0.001804403f, 0);
	func_682(iParam0, iParam1, 4.457278E-26f, 0);
	func_682(iParam0, iParam1, 1.405172E-36f, 0);
	func_682(iParam0, iParam1, 1.014458E-09f, 0);
	func_682(iParam0, iParam1, 2.634154E-20f, 0);
	func_682(iParam0, iParam1, -2.575919E-20f, 0);
	func_682(iParam0, iParam1, 4.630567E+07f, 0);
	func_682(iParam0, iParam1, 8.502138E+34f, 0);
	func_682(iParam0, iParam1, 2.081225E+24f, 0);
	func_682(iParam0, iParam1, -404.1522f, 0);
	func_682(iParam0, iParam1, 3.017142E-15f, 0);
	func_682(iParam0, iParam1, -9.616156E-08f, 0);
	func_682(iParam0, iParam1, -3.847611E+20f, 0);
	func_682(iParam0, iParam1, -5.020987E+30f, 0);
	func_682(iParam0, iParam1, 5.23669E+37f, 0);
	func_682(iParam0, iParam1, 2.960705E+15f, 0);
	func_682(iParam0, iParam1, 57000.35f, 0);
	func_682(iParam0, iParam1, 0.01703773f, 0);
	func_682(iParam0, iParam1, -4.796311E-08f, 0);
	func_682(iParam0, iParam1, -7.935022E-22f, 0);
	func_682(iParam0, iParam1, -8.708554E+23f, 0);
	func_682(iParam0, iParam1, -3.064678E-05f, 0);
	func_682(iParam0, iParam1, 4.50876E-21f, 0);
	func_682(iParam0, iParam1, 3.942434E-13f, 0);
	func_682(iParam0, iParam1, 2.2867E-37f, 0);
	func_682(iParam0, iParam1, 2.830387E-11f, 0);
	func_682(iParam0, iParam1, 3.354086E-38f, 0);
	func_682(iParam0, iParam1, 7.486236E-28f, 0);
	func_682(iParam0, iParam1, 5.08311E+19f, 0);
	func_682(iParam0, iParam1, 3.577089E+22f, 0);
	func_682(iParam0, iParam1, 251.6366f, 0);
	func_682(iParam0, iParam1, 9.686418E-08f, 0);
}

void func_521(int iParam0, int iParam1)
{
	func_682(iParam0, iParam1, 4.101503E-35f, 0);
	func_682(iParam0, iParam1, -1.059077E+37f, 0);
	func_682(iParam0, iParam1, 459146.8f, 0);
	func_682(iParam0, iParam1, -1.933807E+26f, 0);
	func_682(iParam0, iParam1, 0.0589133f, 0);
	func_682(iParam0, iParam1, -5.446338E-17f, 0);
	func_682(iParam0, iParam1, -7.673307E-14f, 0);
	func_682(iParam0, iParam1, 2.19083E-29f, 0);
	func_682(iParam0, iParam1, 5.223972E-19f, 0);
	func_682(iParam0, iParam1, -1.4958E-33f, 0);
	func_682(iParam0, iParam1, 3.125337f, 0);
}

void func_522(int iParam0, int iParam1)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, -8.657245E-33f);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, 9.369474E-09f);
}

void func_523(int iParam0, int iParam1)
{
	func_682(iParam0, iParam1, 4.966513E-07f, 0);
	func_682(iParam0, iParam1, -2100.026f, 0);
}

void func_524(int iParam0, int iParam1)
{
	func_682(iParam0, iParam1, -2.055955E+11f, 0);
	func_682(iParam0, iParam1, -2.712685E-22f, 0);
	func_682(iParam0, iParam1, 1.182823E+33f, 0);
	func_682(iParam0, iParam1, -2.365252E+27f, 0);
	func_682(iParam0, iParam1, -1.391038E-09f, 0);
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_682(iParam1, iParam2, func_683(iParam0, iParam3), 0);
}

void func_526(int iParam0, int iParam1)
{
	func_682(iParam0, iParam1, 1.576726E-13f, 0);
}

struct<2> func_527(int iParam0, var uParam1)
{
	var uVar0;
	struct<33> Var1;
	struct<2> Var34;

	uVar0 = func_230(func_169(iParam0), uParam1);
	Var1 = { func_684(uVar0, 1, iParam0, uParam1) };
	if (Var1.f_3 != 0)
	{
		Var34 = { func_369(Var1.f_3, 4) };
		if (!func_36(Var34))
		{
			return func_216();
		}
		return Var34;
	}
	return func_216();
}

int func_528(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

bool func_529(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5502.255f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_530(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;

	iVar8 = func_685(iParam1);
	if (iVar8 == -1)
	{
		return 0;
	}
	if (!func_686(&Var0))
	{
		return 0;
	}
	if (!func_687(&Var0, 5, 0, 0, 1))
	{
		return 0;
	}
	if (!func_687(&Var0, 6, 0, 0, 1))
	{
		return 0;
	}
	if (!func_687(&Var0, 8, func_688(iVar8), 0, 1))
	{
		return 0;
	}
	if (!func_687(&Var0, 9, 0, 0, 1))
	{
		return 0;
	}
	if (!func_687(&Var0, 10, iParam1, 0, 1))
	{
		return 0;
	}
	uVar7 = Var0.f_1;
	if (iVar8 != 4)
	{
		if (!func_687(&Var0, 20, 0, 0, 1))
		{
			return 0;
		}
		if (!func_687(&Var0, 21, func_689(iParam4), 0, 1))
		{
			return 0;
		}
		if (!func_687(&Var0, 22, func_690(4), 0, 1))
		{
			return 0;
		}
		if (!func_687(&Var0, 23, iParam2, 0, 1))
		{
			return 0;
		}
		uParam0->f_39 = func_691(&Var0, 1);
	}
	Var0.f_1 = uVar7;
	if (func_687(&Var0, 17, 0, 0, 0))
	{
		uParam0->f_37 = func_692(&Var0, 0);
		uVar6 = Var0.f_1;
	}
	uParam0->f_37++;
	iVar9 = 0;
	while (iVar9 <= (uParam0->f_37 - 1))
	{
		Var0.f_1 = uVar6;
		if (iVar9 == 0)
		{
			iVar5 = iParam1;
		}
		else
		{
			if (!func_687(&Var0, 11, (iVar9 - 1), 0, 1))
			{
				return 0;
			}
			iVar5 = func_693(&Var0, 1);
		}
		if (!func_694(uParam0[iVar9 /*6*/], iVar5, iParam2, iParam3, iParam4))
		{
			return 0;
		}
		iVar9++;
	}
	return 1;
}

bool func_531(bool bParam0, int iParam1)
{
	bParam0->f_2 = 6.31371E+22f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_532(vector3 vParam0, int iParam3, var uParam4, float fParam5, Vector3* vParam6, bool bParam7)
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

int func_533(vector3 vParam0, int iParam3, var uParam4, float fParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = fParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_BOOL(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	iVar0 = func_503(iParam0, iParam1);
	if (bParam2 && iVar0 == 0)
	{
		return true;
	}
	if (bParam3 && iVar0 == 21)
	{
		return true;
	}
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
		case 21:
			return true;
		default:
			break;
	}
	return false;
}

bool func_535(int iParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (iParam2 && func_695(iParam0, fParam1, bParam5))
	{
		return true;
	}
	if (iParam3 && func_696(iParam0, fParam1))
	{
		return true;
	}
	if (iParam4 && func_697(iParam0, fParam1))
	{
		return true;
	}
	if (iParam6 && func_698(iParam0, fParam1))
	{
		return true;
	}
	return false;
}

int func_536(int iParam0)
{
	if (func_36(Global_1235672[iParam0 /*697*/].f_598) && func_651(Global_1235672[iParam0 /*697*/].f_598, func_284(Global_1235672[iParam0 /*697*/].f_571), 0))
	{
		return 0;
	}
	if (func_699())
	{
		return 2;
	}
	if ((Global_1235672[iParam0 /*697*/].f_571 == 1.038497E+13f && func_40(iParam0, 65536)) && func_147(iParam0, 2f))
	{
		return 2;
	}
	if ((func_660(iParam0, 255) && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID())) || !func_66(iParam0, 512, 255))
	{
		if (!func_700(4, Global_1225084[iParam0 /*28*/].f_13, Global_1225084[iParam0 /*28*/].f_15) && NETWORK::NETWORK_GET_HOST_OF_SCRIPT("net_fetch", iParam0, 0) == PLAYER::PLAYER_ID())
		{
			return 2;
		}
		return 0;
	}
	if (func_66(iParam0, 8388608, 255))
	{
		return 0;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), PLAYER::PLAYER_ID()) || func_66(iParam0, 32, 255))
	{
		return 3;
	}
	if (func_76(Global_1235672[iParam0 /*697*/].f_571) && !func_147(iParam0, 131072))
	{
		return 2;
	}
	return 1;
}

void func_537(int iParam0)
{
	int iVar0;

	iVar0 = Global_1235672[iParam0 /*697*/].f_604;
	if (!func_49(iVar0))
	{
		func_115(iParam0, 2);
		if (func_106(iVar0))
		{
			func_54(iVar0, iParam0, 0, 0);
		}
	}
	else
	{
		func_541(iVar0, iParam0, 0);
	}
	func_319(iParam0, 1048576);
}

int func_538(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (func_701(iVar0))
		{
			return iVar0;
		}
		else if ((iVar1 == -1 && !func_702(iVar0)) && Global_1235672.f_9062[iVar0 /*4*/].f_2 < iParam0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	return iVar1;
}

void func_539(int iParam0, int iParam1)
{
	if (Global_1235672.f_9062[iParam0 /*4*/].f_1 != iParam1)
	{
		Global_1235672.f_9062[iParam0 /*4*/].f_1 = iParam1;
	}
}

void func_540(int iParam0, int iParam1, int iParam2)
{
	if (Global_1235672.f_9062[iParam0 /*4*/] != iParam2)
	{
		if (!func_128(iParam0, iParam1))
		{
			return;
		}
		Global_1235672.f_9062[iParam0 /*4*/] = iParam2;
		Global_1235672.f_9062[iParam0 /*4*/].f_1 = -1;
	}
}

void func_541(int iParam0, int iParam1, int iParam2)
{
	if (Global_1235672.f_9062[iParam0 /*4*/].f_2 != iParam2)
	{
		if (!func_128(iParam0, iParam1))
		{
			return;
		}
		Global_1235672.f_9062[iParam0 /*4*/].f_2 = iParam2;
	}
}

bool func_542(int iParam0, int iParam1, var uParam2)
{
	char cVar0[64];
	int iVar8;
	struct<10> Var9;

	StringCopy(&cVar0, "net_fetch", 64);
	iVar8 = iParam0;
	if (iVar8 != -1)
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(10000) <= 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE(&cVar0, iVar8, true, 0))
		{
			*uParam2 = 1;
			return true;
		}
		if (func_66(iParam0, 2, 255))
		{
			return true;
		}
		SCRIPTS::REQUEST_SCRIPT(&cVar0);
		if (SCRIPTS::HAS_SCRIPT_LOADED(&cVar0))
		{
			Var9.f_7 = -1;
			Var9.f_7.f_1 = -1;
			Var9.f_9 = 255;
			Var9.f_7 = { Global_1235672[iParam0 /*697*/].f_598 };
			Var9.f_6 = iParam0;
			Var9 = iVar8;
			Global_1235672.f_9062[iParam1 /*4*/].f_3 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(&cVar0, &Var9, 10, 10000);
			SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(&cVar0);
			func_703(&cVar0, iVar8);
			return true;
		}
	}
	return false;
}

int func_543(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_704(iParam0);
	iVar1 = func_705(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_544(iVar1))
		{
			func_706(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_544(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

void func_545(int iParam0)
{
	if (!func_707(PLAYER::PLAYER_ID(), iParam0, 8))
	{
		return;
	}
	func_708();
	Global_1110244.f_15 = 1;
	func_709(iParam0, 8);
}

bool func_546(int iParam0)
{
	if (!func_710(iParam0))
	{
		return true;
	}
	return (MISC::GET_GAME_TIMER() - func_711(iParam0)) >= func_712(iParam0);
}

bool func_547(int iParam0, int iParam1)
{
	return (Global_1107816.f_33[iParam0 /*16*/].f_3.f_8 && iParam1) != 0;
}

void func_548()
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
	func_713(1);
	func_456(&Var0);
}

void func_549()
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
	func_713(0);
	func_455(&Var0, uVar31);
}

void func_550(int iParam0)
{
	vector3 vVar0;

	if (Global_1235672[iParam0 /*697*/].f_571 != -1.115319E-25f)
	{
		return;
	}
	if (func_40(iParam0, 2.524355E-29f))
	{
		return;
	}
	if (Global_1225084[iParam0 /*28*/].f_7 == -1)
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		func_150(iParam0, 2.524355E-29f);
		return;
	}
	vVar0.x = func_715(func_714(Global_1225084[iParam0 /*28*/].f_7));
	vVar0.f_1 = Global_1225084[iParam0 /*28*/].f_22.f_3;
	vVar0.f_2 = Global_1225084[iParam0 /*28*/].f_22.f_2;
	func_716(2804279f, &vVar0, 0, 0);
	func_150(iParam0, 2.524355E-29f);
}

void func_551(var uParam0, int iParam1)
{
	func_717(uParam0, iParam1);
}

void func_552(int iParam0)
{
	struct<6> Var0;

	Var0.f_1 = 255;
	Var0.f_2 = -1;
	Var0.f_2.f_1 = -1;
	Var0.f_5 = -1;
	Global_1108965.f_34.f_353[iParam0 /*6*/] = { Var0 };
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66 = 0;
}

void func_553(int iParam0)
{
	struct<11> Var0;
	struct<2> Var11;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
	Global_1108965.f_34[iParam0 /*11*/].f_6 = 0;
	Var0 = 4;
	Global_1108965.f_34[iParam0 /*11*/] = { Var0 };
	func_718(iParam0);
	Var11 = 255;
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iParam0 /*2*/] = { Var11 };
	if ((!func_719() || !func_720()) || Global_1572887.f_7)
	{
		func_721(MISC::VAR_STRING(2, "PARLEY_TICKER_END_DC"), -2, 0, 0, 0, 1);
	}
	if (!func_722(&(Global_1108965.f_34[iParam0 /*11*/].f_8), 256))
	{
		if (func_723(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
		{
			func_724(&(Global_1108965.f_34.f_613), 64);
		}
		else
		{
			func_724(&(Global_1108965.f_34.f_613), 32);
		}
		Global_1108965.f_34.f_614 = Global_1295619.f_16;
	}
}

void func_554(int iParam0, bool bParam1)
{
	int iVar0;
	struct<11> Var1;
	struct<2> Var12;
	int iVar14;
	struct<6> Var15;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return;
	}
	iVar0 = iParam0;
	if (!Global_1108965.f_34[iVar0 /*11*/].f_6)
	{
		return;
	}
	func_725(iParam0);
	func_726(iParam0);
	func_727(iParam0);
	func_728(&(Global_1108965.f_34[iVar0 /*11*/].f_8), 2);
	func_718(iVar0);
	if (NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1108965.f_34.f_546[iVar0 /*2*/])) == iParam0 && !func_722(&(Global_1108965.f_34[iVar0 /*11*/].f_8), 256))
	{
		if (func_723(Global_1108965.f_34.f_614) < 2 || Global_1108965.f_34.f_618 != 255)
		{
			func_724(&(Global_1108965.f_34.f_613), 64);
		}
		else
		{
			func_724(&(Global_1108965.f_34.f_613), 32);
			Global_1108965.f_34.f_618 = iParam0;
		}
		Global_1108965.f_34.f_614 = Global_1295619.f_16;
		func_721(MISC::VAR_STRING(10, "PARLEY_TICKER_END", func_730(PLAYER::GET_PLAYER_NAME(iParam0), func_729(iParam0, 1, -1, 0))), -2, 0, 0, 0, 1);
	}
	Var1 = 4;
	Global_1108965.f_34[iVar0 /*11*/] = { Var1 };
	Var12 = 255;
	Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/][iVar0 /*2*/] = { Var12 };
	if (!bParam1)
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&iVar14, iVar0);
	Var15.f_5 = PLAYER::PLAYER_ID();
	Var15.f_4 = 5;
	func_731(&Var15, &iVar14);
}

bool func_555(int iParam0)
{
	if (Global_1287258[iParam0 /*67*/].f_66)
	{
		return Global_1287258[iParam0 /*67*/].f_66;
	}
	return Global_1108965.f_34.f_353[iParam0 /*6*/];
}

int func_556(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_732(iParam2, -3.005759E+25f);
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
	Var3.f_13 = iParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_733(uParam1, bParam0, Var3);
	return 1;
}

int func_557(int iParam0, var uParam1, int iParam2)
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

bool func_558(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_559(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_560(int iParam0)
{
	if (!func_559(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_561(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_559(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_734(iParam0);
		if (func_590(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_735(255);
			}
			else
			{
				iVar1 = func_418(bVar0, func_417(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_3024[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		bVar0 = func_736(iParam0);
		if (func_590(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_418(bVar0, func_417(1), -2.696814E-33f, 1, 0, 0);
			}
			Global_1292096.f_2986[iParam0] = iVar1;
			return iVar1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_562()
{
	int iVar0;
	int iVar1;
	struct<43> Var2;
	int iVar45;

	iVar1 = Global_1295619.f_16;
	iVar0 = 0;
	while (iVar0 < 30)
	{
		Var2 = { Global_1940239.f_245.f_14[iVar0 /*43*/] };
		iVar45 = DATABINDING::DATABINDING_READ_INT(Var2.f_29);
		if (iVar45 < iVar1)
		{
			if (func_737(Var2))
			{
				func_738(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_739();
}

void func_563(var uParam0, int iParam1, char[32] cParam2, struct<24> Param10)
{
	func_740(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_564(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_564(17), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(3), Param10.f_18);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(4), Param10.f_19);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(5), Param10.f_20);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(6), Param10.f_21);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(98), Param10.f_22);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(99), Param10.f_23);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(100), Param10.f_23);
}

char* func_564(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_end_img_left_texture_dic";
		case 25:
			return "dynamic_list_item_end_img_left_texture";
		case 26:
			return "dynamic_list_item_end_img_left_visible";
		case 27:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 28:
			return "dynamic_list_item_corner_end_img_texture";
		case 29:
			return "dynamic_list_item_corner_end_img_visible";
		case 30:
			return "dynamic_list_item_entry_player_index";
		case 31:
			return "dynamic_list_item_entry_friend_index";
		case 32:
			return "dynamic_list_item_player_gamer_handle";
		case 33:
			return "dynamic_list_item_option_stepper_visible";
		case 34:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 35:
			return "dynamic_list_item_option_stepper_items";
		case 36:
			return "dynamic_list_item_option_stepper_current_hash";
		case 37:
			return "dynamic_list_item_option_stepper_current_index";
		case 38:
			return "dynamic_list_item_option_stepper_max_index";
		case 39:
			return "dynamic_list_item_left_chevron_enabled";
		case 40:
			return "dynamic_list_item_right_chevron_enabled";
		case 41:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 42:
			return "dynamic_list_item_main_fill_maximum";
		case 43:
			return "dynamic_list_item_main_fill_value";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 47:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 48:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 49:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 50:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 51:
			return "dynamic_list_item_extra_img_one_texture";
		case 52:
			return "dynamic_list_item_extra_img_one_visible";
		case 53:
			return "dynamic_list_item_extra_int_field_one_value";
		case 54:
			return "dynamic_list_item_extra_int_field_two_value";
		case 55:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 56:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 57:
			return "dynamic_list_item_link";
		case 58:
			return "dynamic_list_item_event_channel_hash";
		case 59:
			return "dynamic_list_item_focus_hash";
		case 60:
			return "dynamic_list_item_select_hash";
		case 61:
			return "dynamic_list_item_prompt_text";
		case 62:
			return "dynamic_list_item_prompt_text_raw";
		case 63:
			return "dynamic_list_item_prompt_enabled";
		case 64:
			return "dynamic_list_item_prompt_visible";
		case 68:
			return "dynamic_list_item_prompt_option_text";
		case 69:
			return "dynamic_list_item_prompt_option_enabled";
		case 70:
			return "dynamic_list_item_prompt_option_visible";
		case 71:
			return "dynamic_list_item_prompt_option_select_hash";
		case 72:
			return "dynamic_list_item_prompt_toggle_text";
		case 73:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 74:
			return "dynamic_list_item_prompt_toggle_visible";
		case 75:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 76:
			return "dynamic_list_item_prompt_r3_text";
		case 77:
			return "dynamic_list_item_prompt_r3_enabled";
		case 78:
			return "dynamic_list_item_prompt_r3_visible";
		case 79:
			return "dynamic_list_item_select_r3_select_hash";
		case 80:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 81:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 82:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 83:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 84:
			return "mount_collection_index";
		case 85:
			return "dynamic_list_item_rename_prompt_enabled";
		case 86:
			return "dynamic_list_item_rename_prompt_visible";
		case 87:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 88:
			return "invite_unique_id";
		case 89:
			return "invite_tracked";
		case 90:
			return "invite_processed";
		case 91:
			return "invite_script_type";
		case 92:
			return "invite_gang_id";
		case 93:
			return "invite_expiration_time";
		case 94:
			return "invite_filter_type";
		case 95:
			return "invite_feed_message_id";
		case 96:
			return "invite_all_enabled";
		case 97:
			return "invite_all_visible";
		case 98:
			return "dynamic_list_item_overlay_tick_visible";
		case 99:
			return "dynamic_list_item_overlay_time_visible";
		case 100:
			return "dynamic_list_item_overlay_new_visible";
		default:
			break;
	}
	return "null";
}

void func_565(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

bool func_566(var uParam0)
{
	return true;
}

int func_567(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_2))
	{
		return 0;
	}
	else if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_3))
	{
		return 0;
	}
	else if (uParam0->f_6 == 0)
	{
		return 0;
	}
	else if (uParam0->f_7 == 0)
	{
		return 0;
	}
	if (uParam0->f_13 == 5.395881E-11f)
	{
		if (Global_1896762.f_354)
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE");
		}
		else
		{
			uParam0->f_4 = MISC::VAR_STRING(2, "NM_TI_ACCEPT_INVITE");
		}
	}
	if (*uParam0 == 5)
	{
		return func_742(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_743(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_744(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_745(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_746(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_747(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_748(func_741(uParam0->f_2, 4.808429E-35f), func_741(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

var func_568()
{
	return Global_1940239.f_245.f_1305;
}

int func_569(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 <= 0)
	{
		return 0;
	}
	CLOCK::GET_POSIX_TIME(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_570(var uParam0, struct<21> Param1)
{
	if (!func_749(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_571(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	iVar0 = func_528(iParam0, iParam1);
	return func_401(Global_1245159.f_566[iVar0 /*7*/].f_2, iParam2);
}

bool func_572(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;

	iVar0 = 0;
	while (iVar0 <= (func_334(iParam0, iParam1) - 1))
	{
		vVar1 = { func_335(func_169(iParam0), iParam1, iVar0) };
		fVar4 = func_750(func_169(iParam0), iParam1, iVar0);
		if (func_396(vVar1))
		{
		}
		else
		{
			if (func_575(vVar1, fVar4, bParam2))
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

float func_573(int iParam0, int iParam1)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_34;
	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_751(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

bool func_574(vector3 vParam0, float fParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false), vParam0) < fParam3)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_575(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;

	if (!bParam4)
	{
		fVar0 = 2.706126E-18f;
	}
	return VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam0, fParam3, false, 0, fVar0);
}

int func_576(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PRIMARY"):
			return 0;
		case joaat("SECONDARY"):
			return 1;
		case joaat("TROLLEY"):
			return 2;
	}
	return 0;
}

int func_577(int iParam0)
{
	return func_752(iParam0, 4);
}

bool func_578(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_11 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_11 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

int func_579(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1138819072 /* Float: 450f */;
		case 1:
			return 1138819072 /* Float: 450f */;
		case 2:
			return 1132068864 /* Float: 250f */;
		default:
			break;
	}
	return 1138819072 /* Float: 450f */;
}

bool func_580(int iParam0)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (Global_1149020.f_2[iParam0 /*43*/].f_9 == iVar0 || Global_1149020.f_2[iParam0 /*43*/].f_9 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_581(int iParam0)
{
	return Global_1225084[iParam0 /*28*/] == -1;
}

bool func_582(int iParam0)
{
	int iVar0;

	if (!func_126(iParam0))
	{
		return false;
	}
	iVar0 = func_753(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

void func_583(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_754(iVar0);
		if (func_64(uParam0->f_7, iVar1))
		{
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 5)
	{
		iVar2++;
	}
}

bool func_584()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_585(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_590(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_755(bParam0);
	switch (iVar0)
	{
		case joaat("WEAPON"):
			if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("AMMO"):
			if (!func_756(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_757(bParam0))
			{
				return true;
			}
			break;
	}
	return func_758(bParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_586(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

int func_587(bool bParam0)
{
	if (func_17() == -1)
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

struct<4> func_588()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_589(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_590(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_587(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_590(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_591(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_760(func_759(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

float func_592()
{
	return Global_1156096.f_2169[85 /*205*/].f_201;
}

float func_593()
{
	return Global_1156096.f_2169[86 /*205*/].f_201;
}

void func_594(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_595(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

void func_596(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_761(&(Global_1149417.f_3876.f_2[func_426(iParam0, 1) /*4*/]));
}

int func_597(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_423(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_598(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_359(&Var1, iParam0))
	{
		iVar0 = ((func_762() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_599(int iParam0)
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

int func_600(int iParam0)
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

int func_601(int iParam0, int iParam1)
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

bool func_602(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_603(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

void func_604(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_605(int iParam0, int iParam1)
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
			func_764((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_764(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_36(Global_1900460.f_1[0 /*2*/]))
	{
		func_262(Global_1900460.f_1[0 /*2*/], 3);
	}
}

int func_606(int iParam0)
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

bool func_607(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_765(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_608(var uParam0)
{
	return *uParam0 == uParam0->f_2;
}

void func_609(var uParam0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_2 = -1;
	Var0.f_5.f_3 = 255;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_8 = 2;
	Var0.f_5.f_8.f_1 = -1;
	Var0.f_5.f_8.f_5 = -1;
	Var0.f_5.f_8.f_5.f_1 = -1;
	Var0.f_5.f_8.f_5.f_3 = -1;
	Var0.f_5.f_8.f_5.f_4 = -1;
	Var0.f_5.f_8.f_5.f_5 = -1;
	Var0.f_5.f_8.f_5.f_6 = -1;
	Var0.f_5.f_8.f_5.f_6.f_1 = -1;
	Var0.f_5.f_8.f_5.f_9 = 2;
	Var0.f_5.f_23.f_1 = 1024;
	Var0.f_5.f_23.f_4 = -15;
	Var0.f_5.f_23.f_5 = 255;
	Var0.f_5.f_23.f_8 = 1;
	Var0.f_5.f_23.f_8.f_1.f_1 = NaNf;
	Var0.f_5.f_23.f_13 = -1;
	Var0.f_5 = { *uParam0 };
	Var0.f_4 = 0;
	func_767(&Var0, func_766(0, 8));
}

int func_610(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;

	if (func_608(uParam0))
	{
		return 0;
	}
	if (!func_768(&(uParam1->f_8)))
	{
		return 0;
	}
	if (uParam1->f_2 == -1)
	{
		return 0;
	}
	if (uParam1->f_2 == 5)
	{
		uParam1->f_3 = PLAYER::PLAYER_ID();
	}
	if (uParam1->f_5 == -1)
	{
		return 0;
	}
	if (uParam1->f_8 != uParam1->f_8.f_5.f_9)
	{
		return 0;
	}
	iVar0 = func_769(uParam0, uParam1);
	if (iVar0 >= 0)
	{
		return 0;
	}
	switch (uParam1->f_5)
	{
		case 0:
		case 1:
		case 3:
		default:
			break;
			if (!func_770(uParam1, bParam2, iParam3, iParam4, iParam5, iParam6))
			{
				return 0;
			}
			break;
	}
	uParam1->f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar1 = ((uParam0->f_1 + *uParam0) % uParam0->f_2);
	uParam1->f_4 = iVar1;
	uParam0->f_3[iVar1 /*40*/] = { *uParam1 };
	func_142(&(uParam0->f_3[iVar1 /*40*/]), 0);
	*uParam0++;
	return 1;
}

bool func_611(var uParam0)
{
	if (func_36(*uParam0))
	{
		return true;
	}
	if (uParam0->f_2 != 0)
	{
		if (uParam0->f_3 != -1)
		{
			return true;
		}
		if (uParam0->f_4 != -1)
		{
			return true;
		}
		if (uParam0->f_5 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_612(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_771(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_772(iParam1)) - 1);
	}
	bVar2 = func_36(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_251(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
			{
				return iVar6;
			}
		}
		if (bVar3)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_3 == uParam0->f_3)
			{
				return iVar6;
			}
		}
		if (bVar4)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_4 == uParam0->f_4)
			{
				return iVar6;
			}
		}
		if (bVar5)
		{
			if (Global_1207465.f_231[iVar6 /*15*/].f_5.f_2 == uParam0->f_2 && Global_1207465.f_231[iVar6 /*15*/].f_5.f_5 == uParam0->f_5)
			{
				return iVar6;
			}
		}
		iVar6++;
	}
	return -1;
}

int func_613(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 46)
	{
		if (Global_1260791.f_3432[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_614(int iParam0, int iParam1)
{
	int iVar0;
	struct<29> Var1;
	int iVar32;
	int iVar33;

	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	iVar33 = 1;
	while (iVar33 <= 46)
	{
		iVar32 = iVar33;
		if (iVar32 == iParam0)
		{
			return (iVar0 + iParam1);
		}
		else
		{
			func_773(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_615(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[15] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[15]))
	{
		return;
	}
	*uParam0 = 183;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 39, Global_1051645.f_16[15]);
	func_774(uParam0, uParam0->f_1);
}

void func_616(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_629(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_775(iParam0, iParam1);
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		return;
	}
	SCRIPTS::_REQUEST_THREAD_EXIT(iVar0);
}

void func_617(int iParam0, int iParam1)
{
	func_625(iParam0, iParam1);
	func_624(iParam0, iParam1, -1);
}

void func_618(int iParam0)
{
	func_604(&(Global_1219580.f_1[iParam0 /*10*/].f_4));
	Global_1219580.f_1[iParam0 /*10*/].f_6 = 0;
}

void func_619(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	MISC::CLEAR_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

var func_620(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/];
}

var func_621(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_1;
}

int func_622(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/];
}

int func_623(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/];
}

void func_624(int iParam0, int iParam1, int iParam2)
{
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/] = iParam2;
}

void func_625(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_631(iParam0, iParam1, iVar0);
		iVar0++;
	}
}

bool func_626(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_644(iParam0, iParam1);
	if (iVar0 == NaNf)
	{
		return true;
	}
	vVar1 = { func_222(PLAYER::PLAYER_ID()) };
	if (func_396(vVar1))
	{
		return false;
	}
	return func_173(vVar1, func_654(iParam0, iParam1)) < IntToFloat(iVar0);
}

void func_627(int iParam0, int iParam1, int iParam2)
{
	func_473(iParam0, func_776(iParam1, iParam2));
}

bool func_628(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	struct<5> Var13;
	var uVar18;

	iVar0 = func_621(iParam0, iParam1);
	iVar1 = func_620(iParam0);
	if (func_629(iParam0, iParam1))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(iVar1, iVar0, true, 0))
	{
		return false;
	}
	if (func_308(iParam0, 8))
	{
		if (func_635(iParam0, iParam1) != 4)
		{
			return false;
		}
	}
	SCRIPTS::REQUEST_SCRIPT_WITH_NAME_HASH(iVar1);
	if (SCRIPTS::HAS_SCRIPT_WITH_NAME_HASH_LOADED(iVar1))
	{
		if (MISC::GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(func_777(iParam0)) <= 0)
		{
			return false;
		}
		if (func_308(iParam0, 64))
		{
			Var3.f_7 = -1;
			Var3.f_7.f_1 = -1;
			Var3.f_9 = 255;
			Var3 = iVar0;
			Var3.f_9 = func_493(iParam0);
			Var3.f_1 = { func_654(iParam0, iParam1) };
			Var3.f_5 = iParam0;
			Var3.f_7 = { func_469(iParam0) };
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var3, 10, func_777(iParam0));
		}
		else if (func_308(iParam0, 128))
		{
			Var13 = iVar0;
			Var13.f_1 = func_778(iVar1);
			Var13.f_2 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_14;
			Var13.f_3 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_15;
			Var13.f_4 = Global_1207465.f_231.f_1066[iParam0 /*17*/].f_16;
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &Var13, 5, func_777(iParam0));
		}
		else
		{
			iVar2 = SCRIPTS::START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(iVar1, &uVar18, 1, func_777(iParam0));
		}
		func_630(iParam0, iParam1, iVar2);
		SCRIPTS::SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(iVar1);
		func_779(iVar1, iVar0);
		return true;
	}
	return false;
}

bool func_629(int iParam0, int iParam1)
{
	return SCRIPTS::DOES_THREAD_EXIST(Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2);
}

void func_630(int iParam0, int iParam1, int iParam2)
{
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2 = iParam2;
}

void func_631(int iParam0, int iParam1, int iParam2)
{
	func_619(iParam0, func_776(iParam1, iParam2));
}

bool func_632(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_308(iParam0, 1024))
	{
		return false;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 <= 0)
	{
		return false;
	}
	return func_173(Global_34, func_654(iParam0, iParam1)) > IntToFloat(iVar0);
}

int func_633(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1;
}

void func_634(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam2))
	{
		Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = 0;
		return;
	}
	Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_635(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1;
}

void func_636(int iParam0, int iParam1)
{
	func_642(iParam0, iParam1);
	func_486(iParam0, iParam1);
}

void func_637(int iParam0, int iParam1, int iParam2)
{
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_1 = iParam2;
}

int func_638(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_2;
}

int func_639(int iParam0, int iParam1)
{
	return Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2;
}

void func_640(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	struct<8> Var1;
	struct<2> Var10;
	int iVar12;

	if (func_633(iParam0, iParam1) != 0 && !func_780(func_633(iParam0, iParam1)))
	{
		return;
	}
	iVar0 = 96;
	if (!bParam2)
	{
		iVar0 += 128;
	}
	if (func_486(iParam0, iParam1))
	{
		Var1 = { func_654(iParam0, iParam1) };
		Var1.f_4 = BUILTIN::TO_FLOAT(func_638(iParam0, iParam1));
		Var1.f_5 = iVar0;
		Var1.f_6 = func_781(iParam0);
		Var10 = { func_469(iParam0) };
		iVar12 = 0;
		if (func_36(Var10))
		{
			iVar12 = func_427(Var10);
		}
		if (iVar12 != 0)
		{
			Var1.f_7 = iVar12;
		}
		else
		{
			Var1.f_7 = -2.230381E-17f;
		}
		func_634(iParam0, iParam1, VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&Var1));
	}
}

bool func_641(int iParam0, int iParam1)
{
	int iVar0;

	if (func_639(iParam0, iParam1) != 0)
	{
		return true;
	}
	func_782(iParam0, iParam1);
	func_640(iParam0, iParam1, 1);
	iVar0 = func_633(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_783(iVar0))
	{
		return false;
	}
	func_784(iParam0, iParam1, VOLUME::_0x351D71B8B72B858B(func_633(iParam0, iParam1)));
	return true;
}

void func_642(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_639(iParam0, iParam1);
	if (iVar0 == 0)
	{
		return;
	}
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iVar0))
	{
		func_784(iParam0, iParam1, 0);
		return;
	}
	VOLUME::_RELEASE_LOCK_VOLUME(iVar0);
	func_784(iParam0, iParam1, 0);
	func_486(iParam0, iParam1);
}

void func_643(int iParam0, int iParam1, int iParam2)
{
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/] = iParam2;
}

int func_644(int iParam0, int iParam1)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/].f_3;
}

int func_645(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_4;
}

bool func_646(int iParam0)
{
	return Global_1902565 > iParam0;
}

bool func_647(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (func_785(iParam0, iParam1, iVar0, iParam2))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

bool func_648(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_786(iParam0, iParam1, iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_649(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else if (!func_471(iParam0, iVar0, 2))
		{
		}
		else if (!func_471(iParam0, iVar0, iParam1))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_650(int iParam0)
{
	if (!func_452(iParam0))
	{
		return 0;
	}
	return Global_1207465.f_231[iParam0 /*15*/].f_5.f_8;
}

bool func_651(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_36(Global_1051268) && !func_251(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_285(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_787(iParam3, 255))
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
	if (func_26())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_36(Global_1051268))
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

bool func_652(int iParam0)
{
	if (iParam0 < 3)
	{
		return false;
	}
	if (iParam0 < (3 + Global_1207465.f_3[1]))
	{
		return false;
	}
	if (iParam0 < 35)
	{
		return true;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]))
	{
		return false;
	}
	if (iParam0 < (35 + Global_1207465.f_3[2]) + 16)
	{
		return false;
	}
	return true;
}

var func_653(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_2;
}

Vector3 func_654(int iParam0, int iParam1)
{
	return func_788(Global_1207465.f_231.f_1066[iParam0 /*17*/].f_8[iParam1 /*4*/]);
}

var func_655(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_789() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_790());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_790());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_790());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_791(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_792(iVar2))
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
				if (iVar9 & 8192 != 0 && func_793(iVar2) != 1)
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
					if (!func_794(iVar10))
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

bool func_656(int iParam0, int iParam1)
{
	return Global_1217203[iParam1 /*72*/][iParam0] == 0;
}

void func_657(int iParam0)
{
	Global_1207465.f_2505[iParam0 /*6*/].f_4 = 0;
	Global_1207465.f_2505[iParam0 /*6*/].f_5 = 255;
}

bool func_658(struct<2> Param0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return false;
	}
	if (!func_36(Global_1056554[iVar0 /*491*/].f_2))
	{
		return false;
	}
	if (!func_251(Global_1235672.f_9481, Global_1056554[iVar0 /*491*/].f_2))
	{
		if (!func_57(Global_1056554[iVar0 /*491*/].f_2))
		{
			return false;
		}
		Global_1235672.f_9481 = { Global_1056554[iVar0 /*491*/].f_2 };
	}
	return func_217(Param0, Global_1235672.f_9481, 1, 0);
}

void func_659()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (iVar0 == 255)
	{
		return;
	}
	func_179(MISC::VAR_STRING(10, "GFH_HELP_POSSE_LEADER_CANCELLED", func_730(PLAYER::GET_PLAYER_NAME(iVar0), -18751.78f)), 10000, 0, 0, 0, 1);
}

bool func_660(int iParam0, int iParam1)
{
	return func_66(iParam0, 1024, iParam1);
}

int func_661(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_66(iParam0, 32, 255))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if ((NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1) && GANG::_NETWORK_IS_IN_MY_GANG(iVar1)) && func_66(iParam0, 32, iVar0))
		{
			return iVar1;
		}
		iVar0++;
	}
	return 255;
}

bool func_662(var uParam0)
{
	return false;
}

float func_663()
{
	return Global_1156096.f_2169[84 /*205*/].f_201;
}

bool func_664(float fParam0, bool bParam1, bool bParam2, float fParam3)
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

var func_665()
{
	return func_795(func_98(-0.01179246f));
}

bool func_666(int iParam0, int iParam1)
{
	return func_64(Global_1225084[iParam0 /*28*/].f_26, iParam1);
}

bool func_667(int iParam0, bool bParam1, bool bParam2)
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

void func_668(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_796(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_797(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_773(&Var2, iVar0, iVar1, -1, 255);
	func_798(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_98(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_98(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_98(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_98(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

int func_669(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_126(iParam0))
	{
		return 0;
	}
	iVar0 = func_799(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_551(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_422(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_670(struct<2> Param0)
{
	struct<32> Var0;

	if (func_259(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_259(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_259(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_674(Param0, &Var0))
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

int func_671(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_441(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_800(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_605(iVar0, iParam2);
	return iParam2;
}

bool func_672(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_673(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_36(Param0))
	{
		return 0;
	}
	iVar0 = func_441(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_801(Param0, func_263(0), iParam2))
	{
		func_262(func_263(0), 3);
		func_262(func_263(iVar0), 4);
		return 0;
	}
	func_605(iVar0, 0);
	func_262(func_263(0), 3);
	func_262(func_263(1), 4);
	return 1;
}

bool func_674(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_423(Param0, &vVar0);
	if (func_802(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_675(var uParam0, bool bParam1, int iParam2)
{
	func_803(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_444(func_107(uParam0->f_1));
	}
	else
	{
		func_445();
	}
}

bool func_676(struct<2> Param0)
{
	return func_108(Param0) == 0;
}

int func_677(struct<2> Param0)
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
		if (func_251(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_678(struct<2> Param0, bool bParam2)
{
	if (!func_36(Param0))
	{
		return;
	}
	if (!func_676(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_370(Param0);
	}
	func_262(Param0, 1);
	bParam2 = bParam2;
}

struct<2> func_679(int iParam0)
{
	if (!func_804(iParam0))
	{
		return func_216();
	}
	return Global_1107816.f_33[iParam0 /*16*/].f_3.f_5;
}

void func_680(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_543(iVar0);
	if (!func_544(iVar1))
	{
		return;
	}
	if (iVar1 != iParam0)
	{
		func_709(iParam0, 7);
		func_709(iParam0, 8);
	}
	Var2 = { func_805(iVar1) };
	switch (func_806(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_707(iVar0, iVar1, 8) && func_547(iVar1, 1))
				{
					func_807(Var2.f_5);
					func_808(iVar1, 8);
				}
				if (func_112(Var2.f_5))
				{
					func_808(iVar1, 2);
					func_709(iVar1, 5);
				}
				else if (func_51(Var2.f_5))
				{
					func_808(iVar1, 1);
					func_709(iVar1, 6);
				}
				else
				{
					func_809(Var2);
					func_808(iVar1, 4);
					func_709(iVar1, 3);
				}
			}
			else
			{
				func_709(iVar1, 7);
			}
			break;
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_547(iVar1, 4))
				{
				}
				else
				{
					func_810();
				}
				func_545(iVar1);
				func_811(1);
				func_811(0);
			}
			else
			{
				func_810();
				func_545(iVar1);
				func_811(1);
				func_811(0);
			}
			break;
	}
}

void func_681(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<13> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = func_543(iVar0);
	if (!func_544(iVar1))
	{
		return;
	}
	Var2 = { func_805(iParam0) };
	switch (func_806(iVar1))
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			if (func_36(Var2.f_5))
			{
				if (!func_707(iVar0, iParam0, 8) && func_547(iParam0, 1))
				{
					func_807(Var2.f_5);
					func_808(iParam0, 8);
				}
				if (func_112(Var2.f_5))
				{
					func_808(iParam0, 2);
					func_709(iParam0, 5);
				}
				else if (func_51(Var2.f_5))
				{
					func_808(iParam0, 1);
					func_709(iParam0, 6);
				}
				else
				{
					func_809(Var2);
					func_808(iParam0, 4);
					func_709(iParam0, 3);
				}
			}
			else
			{
				func_709(iParam0, 7);
			}
			break;
		case 8:
			if (Global_1110244.f_19)
			{
				if (func_547(iVar1, 4))
				{
				}
				else
				{
					func_810();
				}
				func_545(iVar1);
				func_811(1);
				func_811(0);
			}
			else
			{
				func_810();
				func_545(iVar1);
				func_811(1);
				func_811(0);
			}
			break;
	}
}

void func_682(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 == 0 || iParam2 == 0)
	{
		return;
	}
	if (PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, iParam2) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	}
	if (!bParam3 && PED::GET_RELATIONSHIP_BETWEEN_GROUPS(iParam2, iParam1) != iParam0)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
	}
}

int func_683(int iParam0, int iParam1)
{
	if (!func_519(iParam1))
	{
		return 1.526336E-16f;
	}
	return Global_1235672[iParam0 /*697*/].f_572[iParam1];
}

struct<33> func_684(int iParam0, int iParam1, int iParam2, var uParam3)
{
	struct<33> Var0;

	if (!func_802(4, iParam0, &Var0))
	{
	}
	return Var0;
}

int func_685(int iParam0)
{
	var uVar0;

	if (!func_686(&uVar0))
	{
		return -1;
	}
	if (!func_687(&uVar0, 5, 0, 0, 1))
	{
		return -1;
	}
	if (!func_687(&uVar0, 7, 0, 0, 1))
	{
		return -1;
	}
	if (!func_687(&uVar0, 9, 0, 0, 1))
	{
		return -1;
	}
	if (!func_687(&uVar0, 10, iParam0, 0, 1))
	{
		return -1;
	}
	return func_812(&uVar0, 1);
}

bool func_686(bool bParam0)
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

bool func_687(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_688(int iParam0)
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

int func_689(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6101652f;
		case 1:
			return -1.238837E-34f;
		default:
			break;
	}
	return 0;
}

int func_690(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.241192E-29f;
		case 0:
			return 6.959811E+35f;
		case 1:
			return 0.008961897f;
		case 3:
			return -2787.5f;
		case 4:
			return 1.752895E+14f;
		default:
			break;
	}
	return 0;
}

int func_691(bool bParam0, int iParam1)
{
	return func_813(bParam0, 37, iParam1);
}

int func_692(bool bParam0, int iParam1)
{
	int iVar0;

	bParam0->f_2 = iParam1;
	iVar0 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
	return iVar0;
}

int func_693(bool bParam0, int iParam1)
{
	return func_813(bParam0, 31, iParam1);
}

bool func_694(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<2> Var0;
	var uVar5;
	int iVar6;
	bool bVar7;

	iVar6 = func_685(iParam1);
	if (iVar6 == -1)
	{
		return false;
	}
	if (!func_686(&Var0))
	{
		return false;
	}
	if (!func_687(&Var0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 6, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 8, func_688(iVar6), 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 9, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 10, iParam1, 0, 1))
	{
		return false;
	}
	uVar5 = Var0.f_1;
	if (!func_687(&Var0, 16, 0, 0, 1))
	{
		return false;
	}
	*uParam0 = iParam1;
	bVar7 = iVar6 != 4;
	uParam0->f_3 = func_814(&Var0, bVar7);
	uParam0->f_1 = func_815(&Var0, bVar7);
	if (iVar6 == 0 || iVar6 == 1)
	{
		bVar7 = true;
	}
	else
	{
		bVar7 = false;
	}
	uParam0->f_2 = func_816(&Var0, bVar7);
	Var0.f_1 = uVar5;
	if (!func_687(&Var0, 20, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 21, func_689(iParam4), 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 22, func_690(1), 0, 1))
	{
		return false;
	}
	if (!func_687(&Var0, 23, iParam2, 0, 1))
	{
		return false;
	}
	uParam0->f_5 = func_691(&Var0, 1);
	uVar5 = Var0.f_1;
	if (!func_817(uParam0, iParam3))
	{
		return false;
	}
	return func_818(iVar6, uParam0);
}

int func_695(int iParam0, float fParam1, bool bParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	vVar0 = { func_172(iParam0) };
	iVar3 = Global_1225084[iParam0 /*28*/];
	iVar4 = Global_1225084[iParam0 /*28*/].f_6;
	iVar5 = func_334(iVar3, iVar4);
	if (!func_396(vVar0) && func_173(Global_34, vVar0) < fParam1)
	{
		return 1;
	}
	else if (bParam2 && iVar5 > 0)
	{
		iVar6 = 0;
		while (iVar6 <= (iVar5 - 1))
		{
			if (!func_396(Global_1235672[iParam0 /*697*/].f_617[iVar6 /*3*/]) && func_173(Global_34, Global_1235672[iParam0 /*697*/].f_617[iVar6 /*3*/]) < fParam1)
			{
				return 1;
			}
			iVar6++;
		}
	}
	return 0;
}

int func_696(int iParam0, float fParam1)
{
	int iVar0;

	if (func_40(iParam0, 1048576))
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (!func_396(Global_1235672[iParam0 /*697*/][iVar0 /*3*/]) && func_173(Global_34, Global_1235672[iParam0 /*697*/][iVar0 /*3*/]) < fParam1)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_697(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1225084[iParam0 /*28*/].f_16;
	if (iVar0 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && func_173(Global_34, ENTITY::GET_ENTITY_COORDS(iVar1, false, false)) < fParam1)
		{
			return 1;
		}
	}
	return 0;
}

int func_698(int iParam0, float fParam1)
{
	if (!func_396(Global_1225084[iParam0 /*28*/].f_19) && func_173(Global_34, Global_1225084[iParam0 /*28*/].f_19) < fParam1)
	{
		return 1;
	}
	return 0;
}

bool func_699()
{
	if (Global_1235672.f_9479 != -1)
	{
		return true;
	}
	return false;
}

bool func_700(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[7];
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam1))
	{
		return func_67(iParam0, iParam2);
	}
	iVar0 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam1, &Var2);
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var2[iVar1 /*2*/]));
		if (!func_67(iParam0, iVar17))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

bool func_701(int iParam0)
{
	return (Global_1235672.f_9062[iParam0 /*4*/] == -1 && Global_1235672.f_9062[iParam0 /*4*/].f_1 == -1);
}

bool func_702(int iParam0)
{
	return Global_1235672.f_9062[iParam0 /*4*/].f_1 != -1;
}

void func_703(char* sParam0, int iParam1)
{
	int iVar0;

	if (Global_1051645.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_819(sParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/]), sParam0, 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = MISC::GET_HASH_KEY(sParam0);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101++;
	Global_1051645.f_45.f_1 = 1;
}

var func_704(int iParam0)
{
	return Global_1138658[iParam0 /*56*/];
}

int func_705(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_544(iParam1))
	{
		if (iVar0 == func_820(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_820(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_706(int iParam0)
{
	if (!func_544(iParam0))
	{
		return;
	}
	Global_1138658[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*56*/] = iParam0;
}

bool func_707(int iParam0, int iParam1, int iParam2)
{
	return (Global_1138658[iParam0 /*56*/].f_1[iParam1] && iParam2) != 0;
}

void func_708()
{
	if (!func_821())
	{
		return;
	}
	if (!func_36(Global_1051268))
	{
		return;
	}
	func_604(&Global_1051268);
}

void func_709(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_1[iParam0] = (Global_1138658[iVar0 /*56*/].f_1[iParam0] - (Global_1138658[iVar0 /*56*/].f_1[iParam0] && iParam1));
}

bool func_710(int iParam0)
{
	return func_558(&Global_1140708, iParam0, 1);
}

int func_711(int iParam0)
{
	return Global_1140708.f_2[iParam0];
}

int func_712(int iParam0)
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

void func_713(int iParam0)
{
	func_822(iParam0);
	func_823(iParam0, MISC::GET_GAME_TIMER());
}

int func_714(int iParam0)
{
	return Global_1114878[iParam0 /*70*/];
}

int func_715(int iParam0)
{
	return func_824(iParam0);
}

int func_716(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_363(iParam0, iParam2, iParam3);
	if (iVar0 != -1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(Global_1235672.f_9085.f_101), bParam1, 3);
	}
	return iVar0;
}

void func_717(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_718(int iParam0)
{
	if (Global_1072759.f_21626[iParam0 /*8*/].f_5 != 0)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1072759.f_21626[iParam0 /*8*/]))
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1072759.f_21626[iParam0 /*8*/], Global_1072759.f_21626[iParam0 /*8*/].f_5);
		}
		Global_1072759.f_21626[iParam0 /*8*/].f_5 = 0;
		func_825(iParam0);
	}
}

bool func_719()
{
	return func_64(Global_1572887.f_8, 1);
}

bool func_720()
{
	return (Global_1572887.f_72.f_40 >= 14 && Global_1572887.f_72.f_40 < 21);
}

int func_721(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_722(var uParam0, int iParam1)
{
	return func_401(*uParam0, iParam1);
}

int func_723(int iParam0)
{
	return (Global_1295619.f_16 - iParam0);
}

void func_724(var uParam0, int iParam1)
{
	if (func_722(uParam0, iParam1))
	{
		return;
	}
	func_551(uParam0, iParam1);
}

void func_725(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	Global_1108965.f_34[iVar0 /*11*/].f_10 = 0;
}

void func_726(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28302), iParam0);
		if (func_794(iParam0))
		{
			func_826(iParam0);
		}
	}
}

void func_727(int iParam0)
{
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_28306), iParam0);
}

void func_728(var uParam0, int iParam1)
{
	func_422(uParam0, iParam1);
}

float func_729(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return 5.316992E+14f;
		}
		else
		{
			return 4.279651E-16f;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 4.279651E-16f;
	}
	iVar2 = iParam0;
	if (func_112(func_263(0)) && func_269(func_263(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_827(iParam0);
			if (iVar6 == -64.26542f && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return 27.64779f;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_828(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_401(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_829(iParam0, 1);
	if (!bVar0)
	{
		if (func_830(iParam0, bParam1))
		{
			return func_828(iParam0);
		}
		else if (func_831(iParam0, bParam1))
		{
			if (func_832(iParam0, bParam1))
			{
				return 4.709691E+29f;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 3)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 1)
				{
					return 80048.15f;
				}
				return 1.150299E-36f;
			}
		}
	}
	else if (bVar1)
	{
		return func_827(iParam0);
	}
	else if (func_830(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_833(func_597(func_263(0)), 1) == 9.256025E-25f)
		{
			return func_828(iParam0);
		}
		else
		{
			return func_828(iParam0);
		}
	}
	else if (func_831(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_730(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_834(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

void func_731(var uParam0, int* iParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 17, iParam1);
}

void func_732(int iParam0, int iParam1)
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

void func_733(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_835(uParam0))
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

int func_734(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6.681918E+13f;
		case 7:
			return -946.1746f;
		case 12:
			return 2.49117E-34f;
		case 11:
			return -4.236482E-12f;
		case 13:
			return 1.219836E-13f;
		case 14:
			return -8.626482E+21f;
		case 15:
			return 9.89104E+10f;
		case 16:
			return 7.705457E+14f;
		case 17:
			return -5.487948E+32f;
		case 18:
			return -1.680517E+28f;
		case 19:
			return -1.650525E+18f;
		case 20:
			return 5.588182E+10f;
		case 21:
			return 1.849123E+31f;
		case 22:
			return -7.550397E+25f;
		case 23:
			return -2.852199E+07f;
		case 24:
			return -1.371075E-22f;
		case 25:
			return -4.225895E-11f;
		case 26:
			return -8.368383E+34f;
		case 27:
			return -2.806178E+34f;
		case 28:
			return -5.453132E-37f;
		case 29:
			return -6.749805E+25f;
		case 30:
			return -1.188034E+30f;
		case 31:
			return 9.316118E+08f;
		case 32:
			return -1.309857E+19f;
		case 33:
			return 4.886178E-05f;
		case 34:
			return 6.747306E+18f;
		case 35:
			return 4.66604E-13f;
		case 36:
			return 1.182982E+08f;
		default:
			break;
	}
	return 0;
}

int func_735(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_736(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1387.259f;
		case 7:
			return -7.269578E+24f;
		case 12:
			return -0.1123552f;
		case 11:
			return -1.825874E+15f;
		case 13:
			return -7.688707E+33f;
		case 14:
			return -1.036406E-27f;
		case 15:
			return -1.593099E-34f;
		case 16:
			return 2.135512E-13f;
		case 17:
			return -1.266827E+21f;
		case 18:
			return -3.254795E+24f;
		case 19:
			return 1.097937E+13f;
		case 20:
			return -3.331883E-09f;
		case 21:
			return 7.472092E-07f;
		case 22:
			return -1.384808E+32f;
		case 23:
			return 1.187948E-35f;
		case 24:
			return NaNf;
		case 25:
			return 0.02791043f;
		case 26:
			return 9.834264E-23f;
		case 27:
			return -1.650117E+25f;
		case 28:
			return -2.281791E-36f;
		case 29:
			return -3.724133E+22f;
		case 30:
			return -6.204737E-11f;
		case 31:
			return -1.286095E+12f;
		case 32:
			return 9.732989E-28f;
		case 33:
			return -4.955405f;
		case 34:
			return 3.41779E-37f;
		case 35:
			return -4.213494E-08f;
		case 36:
			return 0.04164011f;
		default:
			break;
	}
	return 0;
}

bool func_737(struct<42> Param0, var uParam42)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0.f_41))
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_41);
}

void func_738(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_836(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_565((Global_1940239.f_245.f_1306 - 1));
}

int func_739()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar4 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_29);
	iVar5 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[0 /*43*/].f_39);
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_29);
		iVar2 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_39);
		if (iVar1 < iVar4)
		{
			iVar3 = iVar0;
			iVar4 = iVar1;
			iVar5 = iVar2;
		}
		else if (iVar1 == iVar4)
		{
			if (iVar2 < iVar5)
			{
				iVar3 = iVar0;
				iVar4 = iVar1;
				iVar5 = iVar2;
			}
		}
		iVar0++;
	}
	func_738(Global_1940239.f_245.f_14[iVar3 /*43*/]);
	return iVar3;
}

void func_740(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_564(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_564(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_564(70), Param10.f_15);
}

char* func_741(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_834(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_742(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
{
	struct<10> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_9 = uParam4;
	Var0.f_9.f_1 = uParam5;
	Var0.f_9.f_2 = uParam6;
	Var0.f_9.f_3 = uParam7;
	Var0.f_4.f_2 = uParam15;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = uParam16;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_743(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
{
	struct<10> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam11;
	Var0.f_1 = uParam12;
	Var0.f_2 = uParam13;
	Var0.f_3 = iParam15;
	Var0.f_9 = uParam7;
	Var0.f_9.f_1 = uParam8;
	Var0.f_9.f_2 = uParam9;
	Var0.f_9.f_3 = uParam10;
	Var0.f_4.f_2 = uParam18;
	Var13.f_9 = 1;
	Var13 = uParam14;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = uParam19;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam16, iParam17);
	return iVar23;
}

int func_744(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam7;
	Var0.f_1 = uParam8;
	Var0.f_2 = uParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = uParam4;
	Var0.f_4.f_1 = uParam6;
	Var0.f_4.f_2 = uParam5;
	Var13.f_7 = 1;
	Var13 = uParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam12, bParam13);
	return iVar21;
}

int func_745(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
{
	struct<5> Var0;
	struct<10> Var13;
	int iVar23;

	Var0 = -2;
	Var0 = uParam10;
	Var0.f_1 = uParam11;
	Var0.f_2 = uParam12;
	Var0.f_3 = iParam14;
	Var0.f_4 = uParam7;
	Var0.f_4.f_1 = uParam9;
	Var0.f_4.f_2 = uParam8;
	Var13.f_9 = 1;
	Var13 = uParam13;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = uParam5;
	Var13.f_8 = uParam6;
	Var13.f_9 = 1;
	iVar23 = UIFEED::_UI_FEED_POST_SAMPLE_NOTIFICATION(&Var0, &Var13, iParam15, iParam16);
	return iVar23;
}

int func_746(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_6 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam13, bParam14);
	return iVar21;
}

int func_747(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam8;
	Var0.f_1 = uParam9;
	Var0.f_2 = uParam10;
	Var0.f_3 = iParam12;
	Var0.f_4 = uParam5;
	Var0.f_4.f_1 = uParam7;
	Var0.f_4.f_2 = uParam6;
	Var13.f_7 = 1;
	Var13 = uParam11;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = uParam2;
	Var13.f_4 = uParam3;
	Var13.f_5 = uParam4;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_RANKUP_TOAST(&Var0, &Var13, iParam13, iParam14);
	return iVar21;
}

int func_748(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = uParam4;
	Var0.f_1 = uParam5;
	Var0.f_2 = uParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = uParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = uParam2;
	Var13.f_5 = uParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

bool func_749(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

float func_750(int iParam0, int iParam1, int iParam2)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = Global_1901671.f_170.f_35;
	if ((func_359(&Var1, iParam0) && func_388(&Var1, iParam1)) && func_531(&Var1, iParam2))
	{
		func_751(Var1, -6.034118E+25f, &fVar0, 0);
	}
	return fVar0;
}

int func_751(vector3 vParam0, int iParam3, var uParam4, float fParam5, float* fParam6, bool bParam7)
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

int func_752(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar0)) && func_401(Global_1148603[iVar0 /*13*/][iParam0 /*4*/], iParam1))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_753(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

int func_754(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

int func_755(bool bParam0)
{
	vector3 vVar0;

	if (!func_590(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_756(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_590(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_837(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_838("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_839(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_840(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_841(iVar1);
				return true;
			}
			iVar3++;
		}
		func_841(iVar1);
	}
	return false;
}

bool func_757(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_590(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_842(bParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1115104855:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_843(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_844(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_845(bParam0);
	iVar2 = func_844(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_758(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_590(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_755(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_837(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_846(bParam0, 0);
	}
	if (func_591(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_587(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_847(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_587(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_759(bool bParam0)
{
	return bParam0;
}

bool func_760(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_761(var uParam0)
{
	struct<4> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	*uParam0 = { Var0 };
}

int func_762()
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

int func_763(int iParam0)
{
	return func_848(iParam0) + 30;
}

void func_764(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

int func_765(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_597(Param0);
	}
	return -1;
}

var func_766(int iParam0, int iParam1)
{
	return func_655(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_767(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 4;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 45, 37, &uParam1);
}

bool func_768(var uParam0)
{
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	if (!func_611(&(uParam0->f_5)))
	{
		return false;
	}
	return true;
}

int func_769(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		iVar1 = ((uParam0->f_1 + iVar0) % uParam0->f_2);
		if (func_849(uParam1, &(uParam0->f_3[iVar1 /*40*/])))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_770(var uParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<29> Var0;
	struct<2> Var33;
	bool bVar35;
	int iVar36[4];
	int iVar41;
	int iVar42;
	int iVar43;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Var33 = -1;
	Var33.f_1 = -1;
	if (func_36(uParam0->f_8.f_5))
	{
		Var33 = { uParam0->f_8.f_5 };
	}
	else if (func_36(uParam0->f_8.f_5.f_6))
	{
		Var33 = { uParam0->f_8.f_5.f_6 };
	}
	else
	{
		return true;
	}
	bVar35 = false;
	if (func_396(uParam0->f_8.f_2))
	{
		bVar35 = true;
	}
	else
	{
		bVar35 = false;
	}
	if (bParam1)
	{
		Var0.f_25 = iParam2;
		Var0.f_26 = iParam3;
		Var0.f_27 = iParam4;
		Var0.f_28 = iParam5;
	}
	else if (!func_850(func_427(Var33), &Var0))
	{
		return false;
	}
	if (Var0.f_25 <= 0 || Var0.f_25 > 50)
	{
		if (Var0.f_25 != 0)
		{
		}
		iVar36[0] = 0;
	}
	else
	{
		iVar36[0] = 1;
	}
	if (Var0.f_26 <= 0 || Var0.f_26 > 10)
	{
		if (Var0.f_26 != 0)
		{
		}
		iVar36[1] = 0;
	}
	else
	{
		iVar36[1] = 1;
	}
	if (Var0.f_27 <= 0 || Var0.f_27 > 25)
	{
		if (Var0.f_27 != 0)
		{
		}
		iVar36[2] = 0;
	}
	else
	{
		iVar36[2] = 1;
	}
	if (Var0.f_28 <= 0 || Var0.f_28 > 10)
	{
		if (Var0.f_28 != 0)
		{
		}
		iVar36[3] = 0;
	}
	else
	{
		iVar36[3] = 1;
	}
	if (bVar35)
	{
		iVar43 = NETWORK::GET_NUM_RESERVED_MISSION_PEDS(true);
		iVar44 = NETWORK::GET_NUM_RESERVED_MISSION_VEHICLES(true);
		iVar45 = NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(true);
		iVar46 = NETWORK::_GET_NUM_RESERVED_MISSION_PICKUPS(true);
	}
	else
	{
		NETWORK::GET_RESERVED_MISSION_ENTITIES_IN_AREA(uParam0->f_8.f_2, false, &iVar43, &iVar44, &iVar45, &iVar46);
	}
	iVar41 = 0;
	while (iVar41 < 4)
	{
		iVar47 = iVar41;
		if (iVar47 == -1)
		{
		}
		else if (!iVar36[iVar41])
		{
		}
		else
		{
			switch (iVar47)
			{
				case 0:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PEDS() - iVar43);
					if (iVar42 < Var0.f_25)
					{
						return false;
					}
					break;
					break;
				case 1:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_VEHICLES() - iVar44);
					if (iVar42 < Var0.f_26)
					{
						return false;
					}
					break;
					break;
				case 2:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_OBJECTS() - iVar45);
					if (iVar42 < Var0.f_27)
					{
						return false;
					}
					break;
					break;
				case 3:
					iVar42 = (NETWORK::GET_MAX_NUM_NETWORK_PICKUPS() - iVar46);
					if (iVar42 < Var0.f_28)
					{
						return false;
					}
					break;
					break;
			}
		}
		iVar41++;
	}
	return true;
}

int func_771(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 3;
		case 2:
			return 35;
		case 3:
			return 55;
		default:
			break;
	}
	return 0;
}

int func_772(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			if (Global_1207465.f_3[iParam0] * 2 <= 32)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 32;
		case 2:
			if (Global_1207465.f_3[iParam0] * 2 <= 20)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 20;
		case 3:
			if (Global_1207465.f_3[iParam0] * 2 <= 16)
			{
				return Global_1207465.f_3[iParam0] * 2;
			}
			return 16;
		default:
			break;
	}
	return 0;
}

void func_773(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 31);
	iVar31 = 0;
	while (iVar31 < 2)
	{
		bParam0->f_28[iVar31] = 0;
		iVar31++;
	}
	if (iParam4 == 255)
	{
		iParam4 = PLAYER::PLAYER_ID();
	}
	switch (iParam1)
	{
		case 0:
			*bParam0 = 0;
			bParam0->f_1 = 0;
			bParam0->f_2 = 0;
			break;
		case 1:
			func_851(bParam0, iParam2);
			break;
		case 2:
			func_852(bParam0, iParam2);
			break;
		case 3:
			func_853(bParam0, iParam2);
			break;
		case 4:
			func_854(bParam0, iParam2);
			break;
		case 12:
			func_855(bParam0, iParam2);
			break;
		case 6:
			func_856(bParam0, iParam2);
			break;
		case 7:
			func_857(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_858(bParam0, iParam2);
			break;
		case 11:
			func_859(bParam0, iParam2);
			break;
		case 9:
			func_860(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_861(bParam0, iParam2);
			break;
		case 8:
			func_862(bParam0, iParam2);
			break;
		case 13:
			func_863(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_864(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_865(bParam0, iParam2);
			break;
		case 16:
			func_866(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_867(bParam0, iParam2);
			break;
		case 21:
			func_868(bParam0, iParam2);
			break;
		case 28:
			func_869(bParam0, iParam2);
			break;
		case 25:
			func_870(bParam0, iParam2);
			break;
		case 24:
			func_871(bParam0, iParam2);
			break;
		case 22:
			func_872(bParam0, iParam2);
			break;
		case 23:
			func_873(bParam0, iParam2);
			break;
		case 29:
			func_874(bParam0, iParam2);
			break;
		case 26:
			func_875(bParam0, iParam2);
			break;
		case 30:
			func_876(bParam0, iParam2);
			break;
		case 27:
			func_877(bParam0, iParam2);
			break;
		case 32:
			func_878(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_879(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_880(bParam0, iParam2);
			break;
		case 17:
			func_881(bParam0, iParam2);
			break;
		case 18:
			func_882(bParam0, iParam2);
			break;
		case 19:
			func_883(bParam0, iParam2);
			break;
		case 20:
			func_884(bParam0, iParam2);
			break;
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
			func_885(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

void func_774(var uParam0, var uParam1)
{
}

var func_775(int iParam0, int iParam1)
{
	return Global_1219580.f_1[iParam0 /*10*/][iParam1 /*3*/].f_2;
}

int func_776(int iParam0, int iParam1)
{
	return (8 + (iParam0 * 2 + iParam1));
}

var func_777(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_1;
}

int func_778(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case joaat("NB_ANIMAL_ATTACK"):
			return 1;
		case joaat("NB_ARROWHEAD_INJURY"):
			return 2;
		case joaat("NB_EGG_PROTECTOR"):
			return 3;
		case joaat("NB_GRAVEROBBER"):
			return 4;
		case joaat("NB_KIDNAPPED"):
			return 6;
		case joaat("NB_PHOTOGRAPHY"):
			return 7;
		case joaat("NB_RIVAL_COLLECTOR"):
			return 5;
		case joaat("NB_RUNAWAY_WAGON"):
			return 11;
		case joaat("NB_TIED_UP_PED"):
			return 8;
		case joaat("NB_TREASURE_HUNTER"):
			return 9;
		case joaat("NB_TREE_MAP"):
			return 10;
		case joaat("NB_HOBO_DOG"):
			return 12;
		case joaat("NB_WILDMAN"):
			return 13;
		case joaat("NB_DUEL"):
			return 14;
		case joaat("NB_MOONSHINE_CAMP"):
			return 15;
		case joaat("NB_BEGGAR"):
			return 16;
		case joaat("NB_STALKING_HUNTER"):
			return 17;
		case joaat("NB_SLUMPED_HUNTER"):
			return 18;
		case joaat("NB_CRASHED_WAGON"):
			return 19;
		case joaat("NB_SUSPENSION_TRAP"):
			return 20;
		case joaat("LA_ALLIGATOR"):
			return 31;
		case joaat("LA_BEAR"):
			return 21;
		case joaat("LA_BEAVER"):
			return 28;
		case joaat("LA_BOAR"):
			return 24;
		case joaat("LA_BISON"):
			return 25;
		case joaat("LA_COUGAR"):
			return 22;
		case 569695338:
			return 23;
		case joaat("LA_COYOTE"):
			return 29;
		case joaat("LA_FOX"):
			return 26;
		case joaat("LA_MOOSE"):
			return 30;
		case joaat("LA_WOLF"):
			return 27;
		case 1773252799:
			return 32;
		case -1209093440:
			return 33;
		case 901959776:
			return 34;
		default:
			break;
	}
	return 0;
}

void func_779(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051645.f_80.f_101 >= 10)
	{
		return;
	}
	iVar0 = func_886(iParam0, iParam1);
	if (iVar0 != -1)
	{
		return;
	}
	StringCopy(&(Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/]), "HashOnlyScript", 64);
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_8 = iParam0;
	Global_1051645.f_80[Global_1051645.f_80.f_101 /*10*/].f_9 = iParam1;
	Global_1051645.f_80.f_101++;
	Global_1051645.f_45.f_1 = 1;
}

bool func_780(int iParam0)
{
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
	{
		return true;
	}
	if (VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0) == 4)
	{
		return true;
	}
	return false;
}

var func_781(int iParam0)
{
	return Global_1207465.f_231.f_1066[iParam0 /*17*/].f_3;
}

void func_782(int iParam0, int iParam1)
{
	if (func_633(iParam0, iParam1) != 0)
	{
		if (func_780(func_633(iParam0, iParam1)))
		{
			func_642(iParam0, iParam1);
			func_486(iParam0, iParam1);
		}
	}
}

bool func_783(int iParam0)
{
	int iVar0;

	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(iParam0))
	{
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(iParam0);
	if (iVar0 == 3)
	{
		return true;
	}
	return false;
}

void func_784(int iParam0, int iParam1, int iParam2)
{
	if (!VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(iParam2))
	{
		Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = 0;
		return;
	}
	Global_1207465.f_2505[iParam0 /*6*/][iParam1 /*3*/].f_2 = iParam2;
}

bool func_785(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return func_471(iParam0, iParam2, func_776(iParam1, iParam3));
}

bool func_786(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_785(iParam0, iParam1, iParam2, iVar0))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_787(int iParam0, int iParam1)
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

Vector3 func_788(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if ((iParam0 && 2f) == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if ((iParam0 && 0f) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_789()
{
	return Global_1051645.f_12;
}

char* func_790()
{
	return "unnamed";
}

int func_791(int iParam0)
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

bool func_792(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_371(36, iParam0);
}

int func_793(int iParam0)
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

bool func_794(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_887(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_888(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

var func_795(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

bool func_796(int iParam0)
{
	return iParam0 != 0;
}

int func_797(int iParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;

	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	iVar1 = 1;
	while (iVar1 <= 46)
	{
		*uParam1 = iVar1;
		func_773(&Var2, *uParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*uParam2 = 0;
			while (*uParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*uParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

void func_798(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_799(int iParam0)
{
	if (!func_126(iParam0))
	{
		return 0;
	}
	if (!func_582(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_800(struct<2> Param0, int iParam2)
{
	if (!func_36(Param0))
	{
		func_604(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_512(Param0, 0, 1, -1);
}

bool func_801(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_36(Param0))
	{
		return false;
	}
	if (!func_36(Param2))
	{
		return true;
	}
	iVar0 = func_269(Param0);
	iVar1 = func_269(Param2);
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

bool func_802(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (!func_889(iParam0))
	{
		return false;
	}
	if (func_890(iParam0, iParam1, &uVar0))
	{
		func_891(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_803(var uParam0, int iParam1)
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

bool func_804(int iParam0)
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

struct<13> func_805(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_3;
}

int func_806(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return func_892(iParam0);
}

int func_807(struct<2> Param0)
{
	if (func_821())
	{
		return 0;
	}
	if (!func_36(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_808(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	Global_1138658[iVar0 /*56*/].f_1[iParam0] = (Global_1138658[iVar0 /*56*/].f_1[iParam0] || iParam1);
}

void func_809(int iParam0)
{
	func_893(iParam0);
}

void func_810()
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST())
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS();
	iVar1 |= 8;
	if (NETWORK::_NETWORK_AUTO_SESSION_IS_INSTANCED_SESSION())
	{
		NETWORK::NETWORK_AUTO_SESSION_FINISH_INSTANCE();
	}
	if ((iVar0 && iVar1) != 0)
	{
		iVar1 = (iVar1 && iVar0);
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(iVar1);
	}
}

void func_811(int iParam0)
{
	func_894(iParam0);
	func_823(iParam0, 0);
}

int func_812(bool bParam0, int iParam1)
{
	return func_895(func_813(bParam0, 40, iParam1));
}

int func_813(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_814(bool bParam0, bool bParam1)
{
	return func_813(bParam0, 32, bParam1);
}

int func_815(bool bParam0, bool bParam1)
{
	return func_896(func_813(bParam0, 38, bParam1));
}

int func_816(bool bParam0, bool bParam1)
{
	return func_897(func_813(bParam0, 39, bParam1));
}

bool func_817(var uParam0, int iParam1)
{
	var uVar0;
	int iVar5;

	iVar5 = func_685(*uParam0);
	if (iVar5 == -1)
	{
		return false;
	}
	if (!func_686(&uVar0))
	{
		return false;
	}
	if (!func_687(&uVar0, 5, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&uVar0, 6, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&uVar0, 8, func_688(iVar5), 0, 1))
	{
		return false;
	}
	if (!func_687(&uVar0, 9, 0, 0, 1))
	{
		return false;
	}
	if (!func_687(&uVar0, 10, *uParam0, 0, 1))
	{
		return false;
	}
	if (!func_687(&uVar0, 18, 0, 0, 0))
	{
		return false;
	}
	if (!func_687(&uVar0, 19, func_898(iParam1), 0, 1))
	{
		return false;
	}
	uParam0->f_4 = func_899(&uVar0, 1);
	return true;
}

int func_818(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return func_900(uParam1);
		case 2:
			return func_901(uParam1);
		case 4:
			return func_902(uParam1);
		default:
			break;
	}
	return 0;
}

int func_819(char* sParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (Global_1051645.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = MISC::GET_HASH_KEY(sParam0);
	iVar0 = 0;
	while (iVar0 <= (Global_1051645.f_80.f_101 - 1))
	{
		if (Global_1051645.f_80[iVar0 /*10*/].f_8 == iVar1 && Global_1051645.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_820(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

bool func_821()
{
	return func_36(Global_1051268);
}

void func_822(int iParam0)
{
	if (func_903(&Global_1140708, iParam0, 1))
	{
	}
}

void func_823(int iParam0, int iParam1)
{
	Global_1140708.f_2[iParam0] = iParam1;
}

int func_824(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GFH_BOUNTY_BOARD_ANNESBURG_SHERIFF"):
			return 1.949879E-20f;
		case joaat("GFH_BOUNTY_BOARD_ARMADILLO_SHERIFF"):
			return 7.083137E-25f;
		case joaat("GFH_BOUNTY_BOARD_BENEDICT_POINT_STATION"):
			return -1.957789E-16f;
		case joaat("GFH_BOUNTY_BOARD_BLACKWATER_SHERIFF"):
			return 2.823215E-22f;
		case joaat("GFH_BOUNTY_BOARD_EMERALD_RANCH_STATION"):
			return 1.638145E+22f;
		case joaat("GFH_BOUNTY_BOARD_RHODES_SHERIFF"):
			return -3.095662E+18f;
		case joaat("GFH_BOUNTY_BOARD_RIGGS_STATION"):
			return 7.13322E+24f;
		case joaat("GFH_BOUNTY_BOARD_SAINT_DENIS_SHERIFF"):
			return 1.819777E+22f;
		case joaat("GFH_BOUNTY_BOARD_STRAWBERRY_SHERIFF"):
			return -56125.96f;
		case joaat("GFH_BOUNTY_BOARD_TUMBLEWEED_SHERIFF"):
			return 4.244674E-15f;
		case joaat("GFH_BOUNTY_BOARD_VALENTINE_SHERIFF"):
			return -8.339605E+17f;
		case joaat("GFH_BOUNTY_BOARD_VAN_HORN_POST_OFFICE"):
			return -2.609032E+35f;
		case joaat("GFH_BOUNTY_BOARD_WALLACE_STATION"):
			return 5.521273E+35f;
		default:
			break;
	}
	return 0;
}

void func_825(int iParam0)
{
	if (!func_904(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
	}
}

void func_826(int iParam0)
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
	func_905(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

float func_827(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -8.998766E+28f;
		case 1:
			return -6.580683E-18f;
		case 2:
			return -2.691543E+12f;
		case 3:
			return 2.986218E-33f;
		case 4:
			return 8.281546E-06f;
		case 5:
			return -2.792393E+27f;
		case 6:
			return 2.121323E-22f;
		case 7:
			return 6.18127E+26f;
		case 8:
			return 1.990545E+23f;
		default:
			break;
	}
	return -64.26542f;
}

float func_828(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_26())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

int func_829(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_906(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1101558[iVar3 /*38*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901671.f_737.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901671.f_737.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901671.f_737.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901671.f_737.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901671.f_737.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901671.f_737.f_36)
	{
		return 5;
	}
	return 6;
}

bool func_830(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_5)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1295619.f_17[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1295619.f_5);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return true;
	}
	return false;
}

bool func_831(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_907(iParam0))
	{
		return true;
	}
	return !func_830(iParam0, 0);
}

bool func_832(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_887(iParam0))
	{
		return false;
	}
	if (func_907(iParam0))
	{
		return false;
	}
	if (func_908(iParam0))
	{
		return true;
	}
	return func_909(iParam0);
}

int func_833(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -5.544348E+20f;
		case 1:
			return 9.256025E-25f;
		case 2:
			return -218565.1f;
		case 3:
			return 1.294398E-25f;
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

char* func_834(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_835(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_836(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_564(95));
	if (func_910(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

bool func_837(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_590(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_755(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_911(bParam0, 9.811189E+11f))
	{
		func_912(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_838(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_587(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_839(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iParam2, iParam1, iParam0))
	{
		return false;
	}
	return true;
}

bool func_840(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_841(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_842(bool bParam0)
{
	struct<2> Var0;

	if (!func_590(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_843(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_BLEND_FRECKLES_NONE"):
			return 2.772874E-30f;
		case joaat("CLOTHING_BLEND_MOLES_NONE"):
			return 2.355696E+27f;
		case joaat("CLOTHING_BLEND_SPOTS_NONE"):
			return 3.107044E+08f;
		case joaat("CLOTHING_BLEND_FOUNDATION_NONE"):
			return -1.10511E-35f;
		case joaat("CLOTHING_BLEND_BLUSHER_NONE"):
			return 0.01603136f;
		case joaat("CLOTHING_BLEND_EYELINER_NONE"):
			return -4.314404E+26f;
		case joaat("CLOTHING_BLEND_EYESHADOW_NONE"):
			return -2.677414E+07f;
		case joaat("CLOTHING_BLEND_LIPSTICK_NONE"):
			return -1.864473E+11f;
		case -28107610:
			return -7.008358E-38f;
		case joaat("CLOTHING_BLEND_GRIME_NONE"):
			return 8.452614E+07f;
		case -643819742:
			return -6.237061E+18f;
		case joaat("CLOTHING_BLEND_COMPLEXION_NONE"):
			return -0.0003051266f;
		case joaat("CLOTHING_BLEND_COMPLEXION_2_NONE"):
			return -2.292356E+21f;
		case 1687431937:
			return -6.600012E-27f;
		case joaat("CLOTHING_BLEND_SCAR_NONE"):
			return 3.05881E+28f;
		default:
			break;
	}
	return 0;
}

int func_844(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((uParam0[iVar0 /*17*/])->f_1 == -1)
		{
		}
		else
		{
			if ((uParam0[iVar0 /*17*/])->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_845(bool bParam0)
{
	int iVar0;

	iVar0 = func_842(bParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -1.10511E-35f;
		case 1216664798:
			return 0.01603136f;
		case 829857647:
			return -4.314404E+26f;
		case -636562458:
			return -2.677414E+07f;
		case 252325943:
			return -1.864473E+11f;
		case 1115104855:
			return -7.008358E-38f;
		default:
			break;
	}
	return 0;
}

int func_846(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_913(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_915(&Var0, func_914(0));
	}
	if (!func_916(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_841(iVar18);
	return iVar19;
}

struct<4> func_847(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_917(bParam0, bParam1, 0) };
	return func_589(bParam0, Var0, Var0.f_4, bParam1);
}

int func_848(int iParam0)
{
	return iParam0 * 31;
}

bool func_849(var uParam0, var uParam1)
{
	if (uParam1->f_2 == -1)
	{
		return false;
	}
	if (uParam0->f_2 == -1)
	{
		return false;
	}
	if (uParam1->f_2 != uParam0->f_2)
	{
		return false;
	}
	if (uParam1->f_5 == -1)
	{
		return false;
	}
	if (uParam0->f_5 == -1)
	{
		return false;
	}
	if (uParam1->f_5 != uParam0->f_5)
	{
		return false;
	}
	if (uParam1->f_8 != uParam0->f_8)
	{
		return false;
	}
	if (uParam1->f_8.f_1 != uParam0->f_8.f_1)
	{
		return false;
	}
	if (!func_251(uParam1->f_8.f_5, uParam0->f_8.f_5))
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_4 != uParam0->f_8.f_5.f_4)
	{
		return false;
	}
	if (uParam1->f_8.f_5.f_2 != uParam0->f_8.f_5.f_2)
	{
		return false;
	}
	return true;
}

bool func_850(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = { func_918(iParam0) };
	if (!func_36(Var0))
	{
		return false;
	}
	func_802(Var0, iParam0, uParam1);
	return true;
}

void func_851(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_919(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -9.014004E-27f;
			bParam0->f_11 = { 1158047227, 1155008223, 1123710573 };
			break;
		case 1:
			bParam0->f_5 = -5.520074E-18f;
			bParam0->f_11 = { 1158164914, -1043662687, 1112372884 };
			break;
		case 2:
			bParam0->f_5 = -1.289561E+13f;
			bParam0->f_11 = { -997982511, -1002007626, 1114441436 };
			break;
		case 3:
			bParam0->f_5 = -3.198053E-35f;
			bParam0->f_11 = { -997145985, -1021633233, 1118947115 };
			break;
		case 4:
			bParam0->f_5 = -2.764777E-05f;
			bParam0->f_11 = { -995404091, -1006571710, 1123715252 };
			break;
		case 5:
			bParam0->f_5 = 2.06353E+23f;
			bParam0->f_11 = { -998199583, -1007274928, 1120542589 };
			break;
		case 6:
			bParam0->f_5 = 2.336091E+07f;
			bParam0->f_11 = { -1012939165, 1129044142, 1115189962 };
			break;
		case 7:
			bParam0->f_5 = 4.413785E-13f;
			bParam0->f_11 = { -1006603469, 1135384986 /* Float: 345.2f */, 1111987192 };
			break;
		case 8:
			bParam0->f_5 = 3.850579E+15f;
			bParam0->f_11 = { -996518584, -995395355, 1117886349 };
			break;
		case 9:
			bParam0->f_5 = -4.036937E-17f;
			bParam0->f_11 = { -994138817, 1154964357, 1131357929 };
			break;
	}
}

void func_852(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_921(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_921(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_921(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_921(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_921(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_921(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_921(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_921(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_921(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_853(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			func_922(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_854(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_920(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_855(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_921(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_921(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_921(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_921(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_856(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_923(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_922(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_922(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_922(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_922(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_922(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_922(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_922(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_922(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_922(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_922(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_922(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_922(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_922(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_922(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_922(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_857(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 8);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 7);
			func_922(bParam0, 8);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			func_922(bParam0, 6);
			func_922(bParam0, 7);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			func_922(bParam0, 6);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			func_922(bParam0, 5);
			func_922(bParam0, 9);
			func_922(bParam0, 10);
			func_922(bParam0, 11);
			func_924(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_858(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_921(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_921(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_921(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_921(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_921(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_921(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_921(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_921(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_921(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_921(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_859(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_920(bParam0);
	func_925(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_860(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_926(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_926(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_926(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_926(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_926(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_861(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_921(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_921(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_921(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_921(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_921(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_921(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_921(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_921(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_921(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_862(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_920(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_863(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_920(bParam0);
	func_925(bParam0, 1);
	func_925(bParam0, 4);
	func_925(bParam0, 8);
	func_925(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_586(func_398(iParam2)) };
			break;
	}
}

void func_864(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_927(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_927(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_927(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_927(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_865(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_921(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_866(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_928(bParam0, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.240641f;
			bParam0->f_11 = { 1160773263, -996614562, 1111104160 };
			break;
		case 1:
			bParam0->f_5 = -2.133177E-08f;
			bParam0->f_11 = { 1159898907, -996093376, 1112344284 };
			break;
		case 2:
			bParam0->f_5 = -3.522412E-21f;
			bParam0->f_11 = { 1160139780, -996781261, 1112612091 };
			break;
		case 3:
			bParam0->f_5 = -9.385189E-33f;
			bParam0->f_11 = { 1160505455, -996751008, 1111589310 };
			break;
		case 4:
			bParam0->f_5 = 6.306923E+32f;
			bParam0->f_11 = { 1159605792, -997217284, 1111754067 };
			break;
		case 5:
			bParam0->f_5 = 1.74872E+24f;
			bParam0->f_11 = { 1160357417, -996531233, 1111797793 };
			break;
		case 6:
			bParam0->f_5 = -7.354034E+10f;
			bParam0->f_11 = { 1160051872, -995023864, 1110802694 };
			break;
		case 7:
			bParam0->f_5 = -204.3683f;
			bParam0->f_11 = { 1160311874, -996925759, 1112241603 };
			break;
		case 8:
			bParam0->f_5 = -3.486445E-08f;
			bParam0->f_11 = { 1160632394, -996158104, 1111078732 };
			break;
		case 9:
			bParam0->f_5 = -7.297855E-22f;
			bParam0->f_11 = { 1159860898, -996741247, 1112620715 };
			break;
		case 10:
			bParam0->f_5 = 353.0674f;
			bParam0->f_11 = { 1160175944, -997513355, 1111897407 };
			break;
		case 11:
			bParam0->f_5 = -6.366626E-31f;
			bParam0->f_11 = { 1159405928, -994625864, 1110753988 };
			break;
		case 12:
			bParam0->f_5 = -0.3776834f;
			bParam0->f_11 = { -1002048438, -995892453, 1110081012 };
			break;
		case 13:
			bParam0->f_5 = -5.704767E+10f;
			bParam0->f_11 = { -1002259038, -996310237, 1110086255 };
			break;
		case 14:
			bParam0->f_5 = 1.236228E-14f;
			bParam0->f_11 = { -1001197103, -996125378, 1110012959 };
			break;
	}
}

void func_867(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -0.8817953f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 8;
	}
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_929(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_929(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_929(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_868(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 13;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 8.004635E-22f;
	if (iParam1 > 7)
	{
		bParam0->f_27 = 18;
		bParam0->f_20[0] = 4.27551E+12f;
	}
	else
	{
		bParam0->f_27 = 1;
		bParam0->f_20[0] = 1.124298E+33f;
	}
	switch (iParam1)
	{
		case 0:
			func_930(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			Jump @710; //curOff = 215
			func_930(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			Jump @710; //curOff = 256
			func_930(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			Jump @710; //curOff = 297
			func_930(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			Jump @710; //curOff = 338
			func_930(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			Jump @710; //curOff = 379
			func_930(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			Jump @710; //curOff = 420
			func_930(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			Jump @710; //curOff = 461
			func_930(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			Jump @710; //curOff = 502
			func_930(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			Jump @710; //curOff = 543
			func_930(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			Jump @710; //curOff = 584
			func_930(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			Jump @710; //curOff = 625
			func_930(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			Jump @710; //curOff = 666
			func_930(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
		}

void func_869(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 1.825672E+26f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 18;
	}
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_922(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_922(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_870(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_920(bParam0);
	if (iParam1 > 4)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_922(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_922(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_922(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_922(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_922(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_922(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_922(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_922(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_922(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_871(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_920(bParam0);
	if (iParam1 > 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 18;
	}
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_922(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_922(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_922(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_922(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_922(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_922(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_922(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_922(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_922(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_922(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_872(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 1.777506E-22f;
	switch (iParam1)
	{
		case 0:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_931(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_931(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_873(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 15;
	bParam0->f_1 = 5;
	bParam0->f_2 = 2;
	bParam0->f_28[0] = 4.242694E-36f;
	switch (iParam1)
	{
		case 0:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_932(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_932(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_932(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_932(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_932(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_932(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_932(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_874(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_920(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 0;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 9;
	}
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_922(bParam0, 3);
			func_922(bParam0, 4);
			func_922(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_875(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 20;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.631132E+22f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = -3.665985E+37f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_933(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_933(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_876(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_920(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 0;
	}
	switch (iParam1)
	{
		case 0:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_922(bParam0, 2);
			func_922(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_922(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_922(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_877(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 25;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -4.400322E+15f;
	if (iParam1 < 10)
	{
		bParam0->f_20[0] = -7.232669E-38f;
		bParam0->f_20[1] = 4.27551E+12f;
		bParam0->f_27 = 18;
	}
	else
	{
		bParam0->f_20[0] = 4.27551E+12f;
		bParam0->f_27 = 57;
	}
	switch (iParam1)
	{
		case 0:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_934(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_934(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_878(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -6.410587E+31f;
	bVar0 = iParam1 >= 5;
	if (!bVar0)
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_27 = 1;
	}
	else
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_27 = 1;
	}
	func_935(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -8.485796E-24f;
			bParam0->f_11 = { 1132641849, -1005864187, 1114940268 };
			break;
		case 1:
			bParam0->f_5 = -2.34139E-33f;
			bParam0->f_11 = { 1139713409, -1014549655, 1125059997 };
			break;
		case 2:
			bParam0->f_5 = 7.108457E+35f;
			bParam0->f_11 = { 1127372406, -1019166966, 1123884849 };
			break;
		case 3:
			bParam0->f_5 = 9.424543E+32f;
			bParam0->f_11 = { -1022746812, -1045739062, 1119759685 };
			break;
		case 4:
			bParam0->f_5 = 2.14284E+19f;
			bParam0->f_11 = { 1145380361, -1011643053, 1118834350 };
			break;
		case 5:
			bParam0->f_5 = 7.742558E+18f;
			bParam0->f_11 = { -989618530, -993044008, 1124809462 };
			break;
		case 6:
			bParam0->f_5 = 2.403053E+11f;
			bParam0->f_11 = { -988729976, -993469028, 1125354812 };
			break;
		case 7:
			bParam0->f_5 = -4.366903E-09f;
			bParam0->f_11 = { -988712577, -995155559, 1125018469 };
			break;
		case 8:
			bParam0->f_5 = 9.101715E-25f;
			bParam0->f_11 = { -990212108, -995766511, 1122424082 };
			break;
		case 9:
			bParam0->f_5 = 9.554399E-36f;
			bParam0->f_11 = { -987869409, -995083456, 1125213686 };
			break;
	}
}

void func_879(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 3;
	bParam0->f_2 = 2;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = 0.0004024806f;
	if (iParam1 < 5)
	{
		bParam0->f_20[0] = -3.665985E+37f;
		bParam0->f_20[1] = 1.124298E+33f;
		bParam0->f_27 = 57;
	}
	else
	{
		bParam0->f_20[0] = 1.124298E+33f;
		bParam0->f_20[1] = -7.232669E-38f;
		bParam0->f_27 = 57;
	}
	func_936(bParam0, iParam1, iParam2);
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -1.847485E+37f;
			bParam0->f_11 = { -979847736, -983254584, 1102849880 };
			break;
		case 1:
			bParam0->f_5 = -2.051303E-29f;
			bParam0->f_11 = { -983064392, -983656830, 1111283728 };
			break;
		case 2:
			bParam0->f_5 = -8.891987E-14f;
			bParam0->f_11 = { -981869006, -982910158, 1109234549 };
			break;
		case 3:
			bParam0->f_5 = -0.002836091f;
			bParam0->f_11 = { -980572006, -982838118, 1096614098 };
			break;
		case 4:
			bParam0->f_5 = 1.590995E-26f;
			bParam0->f_11 = { -981324875, -983440745, 1111891876 };
			break;
		case 5:
			bParam0->f_5 = -1.540604E-29f;
			bParam0->f_11 = { 1154057929, 1157898625, 1134404600 };
			break;
		case 6:
			bParam0->f_5 = 6.382076E+10f;
			bParam0->f_11 = { 1156246072, 1157637798, 1132918646 };
			break;
		case 7:
			bParam0->f_5 = 1.774902E+24f;
			bParam0->f_11 = { 1153322754, 1158221229, 1135011758 };
			break;
		case 8:
			bParam0->f_5 = -8.16591E+23f;
			bParam0->f_11 = { 1143828549, 1158343595, 1130284253 };
			break;
		case 9:
			bParam0->f_5 = -0.0002165433f;
			bParam0->f_11 = { 1144859700, 1157515820, 1132803552 };
			break;
	}
}

void func_880(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_920(bParam0);
	if (iParam1 < 5)
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = -1.674072E+32f;
	}
	else
	{
		bParam0->f_27 = 24;
		bParam0->f_20[0] = 3.441672E-37f;
		bParam0->f_20[1] = -6.738816E-37f;
	}
	switch (iParam1)
	{
		case 0:
			bParam0->f_5 = -4.178853E+33f;
			bParam0->f_11 = { 1138874207, 1149483180, 1128618223 };
			func_922(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_922(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_922(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_922(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_922(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_922(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_922(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_922(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_922(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_922(bParam0, 1);
			break;
	}
}

void func_881(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_921(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_882(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_921(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_921(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_921(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_921(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_921(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_921(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_883(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_920(bParam0);
	switch (iParam1)
	{
		case 0:
			func_921(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_921(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_921(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_921(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_922(bParam0, 0);
			func_922(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_884(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_937(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_937(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_937(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_885(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	switch (iParam1)
	{
		case 35:
			bParam0->f_8 = -1.07135E+22f;
			break;
		case 36:
			bParam0->f_8 = 50.20924f;
			break;
		case 37:
			bParam0->f_8 = 3.224022E-15f;
			break;
		case 38:
			bParam0->f_8 = 1.124335E-06f;
			break;
		case 39:
			bParam0->f_8 = 0.001659534f;
			break;
		case 40:
			bParam0->f_8 = -3.304058E+27f;
			break;
		case 41:
			bParam0->f_8 = -7.373806E+33f;
			break;
		case 42:
			bParam0->f_8 = 2.287571E+19f;
			break;
		case 43:
			bParam0->f_8 = 6.454911E-26f;
			break;
		case 44:
			bParam0->f_8 = -4.007869E-37f;
			break;
		case 45:
			bParam0->f_8 = -6.391861E-27f;
			break;
		case 46:
			bParam0->f_8 = 5.878796E-06f;
			break;
	}
	iVar0 = func_938(iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	if ((iParam1 == 41 || iParam1 == 42) || iParam1 == 40)
	{
		bParam0->f_7 = 1;
	}
	else if (iParam1 == 43)
	{
		bParam0->f_7 = 2;
	}
	else if (iParam1 == 44)
	{
		bParam0->f_7 = 3;
	}
	else if (iParam1 == 45 || iParam1 == 46)
	{
		bParam0->f_7 = 4;
	}
	*bParam0 = func_939(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_925(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_940(func_169(iVar0), iParam2);
		bParam0->f_15[0] = func_941(func_169(iVar0), iParam2);
		bParam0->f_5 = func_326(iVar0, iParam2);
		bParam0->f_11 = { func_332(iVar0, iParam2) };
	}
}

int func_886(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051645.f_80.f_101 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (Global_1051645.f_80.f_101 - 1))
	{
		if (Global_1051645.f_80[iVar0 /*10*/].f_8 == iParam0 && Global_1051645.f_80[iVar0 /*10*/].f_9 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_887(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_888(int iParam0)
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
		func_826(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_905(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_889(int iParam0)
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

bool func_890(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_942(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_891(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_943(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_944(iVar0);
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
			uParam2->f_5 = func_945(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_946(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_947(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_948(iVar0);
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

var func_892(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/].f_2;
}

void func_893(int iParam0)
{
	if (!func_949(iParam0))
	{
		return;
	}
	func_950(iParam0);
}

void func_894(int iParam0)
{
	if (func_951(&Global_1140708, iParam0, 1))
	{
	}
}

int func_895(int iParam0)
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

int func_896(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MALE"):
			return 0;
		case joaat("FEMALE"):
			return 1;
		default:
			break;
	}
	return -1;
}

int func_897(int iParam0)
{
	switch (iParam0)
	{
		case joaat("TOWNSFOLK"):
			return 0;
		case joaat("AGGRESSIVE"):
			return 1;
		case joaat("UNI_CRIMINAL"):
			return 2;
		default:
			break;
	}
	return -1;
}

int func_898(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -3.294982E+22f;
		case 1:
			return 8.359682E+33f;
		default:
			break;
	}
	return 0;
}

int func_899(bool bParam0, bool bParam1)
{
	return func_813(bParam0, 33, bParam1);
}

int func_900(var uParam0)
{
	if (*uParam0 == 0)
	{
		return 0;
	}
	if (func_952(uParam0->f_2) == 0)
	{
		return 0;
	}
	if (uParam0->f_3 == 0)
	{
		return 0;
	}
	if (uParam0->f_5 == 0)
	{
		return 0;
	}
	return 1;
}

int func_901(var uParam0)
{
	return 1;
}

int func_902(var uParam0)
{
	return 1;
}

bool func_903(var uParam0, int iParam1, int iParam2)
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

bool func_904(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

void func_905(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

float func_906(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0)) > 1 && bParam1) && Global_1101558[iVar0 /*38*/].f_18 >= Global_1101558[iVar0 /*38*/].f_30)
	{
		return Global_1101558[iVar0 /*38*/].f_18;
	}
	return Global_1101558[iVar0 /*38*/].f_30;
}

bool func_907(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_908(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_909(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_826(iParam0);
		return false;
	}
	if (func_908(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_953(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

bool func_910(int iParam0)
{
	return iParam0 != 0;
}

int func_911(bool bParam0, int iParam1)
{
	if (!func_590(bParam0, 0))
	{
		return func_954(func_759(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

void func_912(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*uParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*uParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*uParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*uParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*uParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*uParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*uParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*uParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*uParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*uParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*uParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*uParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*uParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*uParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*uParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*uParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*uParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

struct<18> func_913(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	struct<18> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	Var0.f_14 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	if (bParam0 != 0)
	{
		Var0 = bParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -5.45926E-19f)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -5.45926E-19f)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

struct<4> func_914(bool bParam0)
{
	int iVar0;

	iVar0 = func_587(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_589(8.681942E-06f, func_417(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_589(8.681942E-06f, func_417(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_589(8.681942E-06f, func_417(bParam0), -1.942248E+12f, 0);
}

void func_915(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_916(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_587(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<5> func_917(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_417(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_755(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_589(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_914(bParam1) };
			if (iParam2 && func_955(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_956(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_956(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_957(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_958(bParam1) };
			switch (func_842(bParam0))
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
			if (func_959(bParam0, -2.580501E-27f))
			{
				Var0 = { func_589(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_959(bParam0, -4.220332E-15f))
			{
				Var0 = { func_589(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_589(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_959(bParam0, -3.171238E-21f))
			{
				Var0 = { func_589(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_960(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_959(bParam0, -3.171238E-21f))
			{
				Var0 = { func_589(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<2> func_918(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_369(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_369(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_216();
}

void func_919(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_961(bParam0);
			break;
		case 1:
			func_961(bParam0);
			break;
		case 2:
			func_961(bParam0);
			break;
		case 3:
			func_962(bParam0);
			break;
		case 4:
			func_961(bParam0);
			break;
		case 5:
			func_961(bParam0);
			break;
		case 6:
			func_962(bParam0);
			break;
		case 7:
			func_962(bParam0);
			break;
		case 8:
			func_962(bParam0);
			break;
		case 9:
			func_961(bParam0);
			break;
		default:
			func_921(bParam0);
			func_920(bParam0);
			break;
	}
}

void func_920(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_963(bParam0, iVar0);
		iVar0++;
	}
}

void func_921(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_922(bParam0, iVar0);
		iVar0++;
	}
}

void func_922(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_923(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 8:
		case 10:
		case 12:
		case 14:
			func_964(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_965(bParam0);
			break;
		default:
			func_921(bParam0);
			func_920(bParam0);
			break;
	}
}

void func_924(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_963(bParam0, 0);
			break;
		case 1:
		case 2:
			func_963(bParam0, 1);
			func_963(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_963(bParam0, 0);
			func_963(bParam0, 2);
			break;
		case 8:
			func_963(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_963(bParam0, 1);
			break;
		default:
			func_920(bParam0);
			break;
	}
}

void func_925(bool bParam0, int iParam1)
{
	func_551(&(bParam0->f_25), iParam1);
}

void func_926(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_966(bParam0);
			break;
		case 1:
			func_967(bParam0);
			break;
		case 2:
			func_968(bParam0);
			break;
		case 3:
			func_969(bParam0);
			break;
		default:
			func_921(bParam0);
			func_920(bParam0);
			break;
	}
}

void func_927(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_970(bParam0);
			break;
		case 1:
		case 2:
			func_971(bParam0);
			break;
		case 3:
		case 4:
			func_972(bParam0);
			break;
		default:
			func_920(bParam0);
			break;
	}
	func_921(bParam0);
}

void func_928(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_963(bParam0, 0);
			func_963(bParam0, 2);
			break;
		case 1:
			func_963(bParam0, 1);
			func_963(bParam0, 3);
			break;
		default:
			func_921(bParam0);
			func_920(bParam0);
			break;
	}
}

void func_929(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_922(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_922(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_922(bParam0, 0);
			break;
		default:
			func_922(bParam0, 0);
			break;
	}
	func_920(bParam0);
}

void func_930(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_922(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_922(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_922(bParam0, 2);
			break;
		default:
			func_921(bParam0);
			break;
	}
	func_920(bParam0);
}

void func_931(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_922(bParam0, 0);
			func_963(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_922(bParam0, 1);
			func_963(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_922(bParam0, 2);
			func_963(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_922(bParam0, 3);
			func_963(bParam0, 0);
			break;
	}
}

void func_932(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_922(bParam0, 0);
			func_963(bParam0, 0);
			break;
		case 2:
			func_922(bParam0, 1);
			func_963(bParam0, 0);
			break;
		case 3:
		case 4:
			func_922(bParam0, 2);
			func_963(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_922(bParam0, 3);
			func_963(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_922(bParam0, 4);
			func_963(bParam0, 1);
			break;
	}
}

void func_933(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_922(bParam0, 3);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			break;
		default:
			func_921(bParam0);
			break;
	}
	func_920(bParam0);
}

void func_934(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_922(bParam0, 3);
			break;
		case 10:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 20:
		case 21:
		case 24:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			break;
		default:
			func_921(bParam0);
			break;
	}
	func_920(bParam0);
}

void func_935(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_963(bParam0, 0);
			func_922(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_963(bParam0, 1);
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			func_922(bParam0, 2);
			break;
		default:
			func_963(bParam0, 0);
			func_922(bParam0, 0);
			break;
	}
}

void func_936(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_963(bParam0, 0);
			func_922(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_963(bParam0, 1);
			func_922(bParam0, 0);
			func_922(bParam0, 1);
			break;
		default:
			func_963(bParam0, 0);
			func_922(bParam0, 0);
			break;
	}
}

void func_937(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_920(bParam0);
			func_921(bParam0);
			break;
		default:
			func_920(bParam0);
			func_921(bParam0);
			break;
	}
}

int func_938(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_939(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

var func_940(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_361(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_941(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_359(&Var1, iParam0) && func_388(&Var1, iParam1))
	{
		func_361(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_942(int iParam0)
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

int func_943(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_973(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_944(int iParam0)
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

int func_945(int iParam0)
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

int func_946(int iParam0)
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

int func_947(int iParam0)
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

int func_948(int iParam0)
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

bool func_949(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 36);
}

void func_950(int iParam0)
{
	func_604(&(Global_1119220[iParam0 /*35*/].f_16));
}

bool func_951(var uParam0, int iParam1, int iParam2)
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

int func_952(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.11373E-33f;
		case 1:
			return -645296.4f;
		case 2:
			return 1.822933E+29f;
		default:
			break;
	}
	return 0;
}

void func_953(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_974(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_826(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1072759.f_21353.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1295619 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_953(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_975(&Var6, uVar4);
		}
	}
}

int func_954(bool bParam0, int iParam1)
{
	if (!func_760(bParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_BUNDLE_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return 1;
	}
	return 0;
}

int func_955(bool bParam0, bool bParam1)
{
	if (func_842(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_976();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_956(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_418(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_957(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_977(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_958(bool bParam0)
{
	int iVar0;

	iVar0 = func_587(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_589(3.507197E-29f, func_417(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_589(3.507197E-29f, func_417(bParam0), 12999093, 0);
}

bool func_959(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_842(bParam0);
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
			if (func_978(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_960(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_979(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_961(bool bParam0)
{
	func_922(bParam0, 0);
	func_922(bParam0, 1);
	func_922(bParam0, 3);
	func_920(bParam0);
}

void func_962(bool bParam0)
{
	func_921(bParam0);
	func_980(bParam0, 0, 3);
}

void func_963(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_964(bool bParam0)
{
	func_922(bParam0, 0);
	func_963(bParam0, 0);
	func_963(bParam0, 1);
	func_963(bParam0, 4);
	func_963(bParam0, 5);
}

void func_965(bool bParam0)
{
	func_922(bParam0, 1);
	func_963(bParam0, 2);
	func_963(bParam0, 3);
	func_963(bParam0, 6);
	func_963(bParam0, 7);
	func_925(bParam0, 2);
}

void func_966(bool bParam0)
{
	func_922(bParam0, 0);
	func_963(bParam0, 0);
	func_963(bParam0, 1);
	func_963(bParam0, 2);
}

void func_967(bool bParam0)
{
	func_922(bParam0, 1);
	func_920(bParam0);
}

void func_968(bool bParam0)
{
	func_922(bParam0, 2);
	func_963(bParam0, 3);
}

void func_969(bool bParam0)
{
	func_922(bParam0, 3);
	func_963(bParam0, 4);
}

void func_970(bool bParam0)
{
	func_963(bParam0, 0);
	func_963(bParam0, 1);
}

void func_971(bool bParam0)
{
	func_963(bParam0, 2);
	func_963(bParam0, 3);
}

void func_972(bool bParam0)
{
	func_963(bParam0, 4);
	func_963(bParam0, 5);
}

bool func_973(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_981(iParam0, uParam1, &uVar0))
	{
		func_982(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_974(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		}
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		return true;
	}
	return false;
}

void func_975(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_983(*uParam0);
}

int func_976()
{
	if (func_984(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_977(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_587(0);
	*iParam1 = { func_589(bParam0, func_914(0), fParam3, 0) };
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

bool func_978(bool bParam0, int iParam1, int iParam2)
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

int func_979(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_587(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_980(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	if (iParam2 < iParam1)
	{
		iParam2 = (bParam0->f_2 - 1);
	}
	iVar0 = iParam1;
	while (iVar0 <= iParam2)
	{
		func_963(bParam0, iVar0);
		iVar0++;
	}
}

bool func_981(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_942(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_982(bool bParam0, int iParam1, var uParam2)
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

void func_983(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

int func_984(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_985(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_587(bParam1), iParam0, bParam3);
}

bool func_985(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

