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
	struct<51> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 255, 255, 0, 0, 0, 1, 3, 0, 0, 0, 255, 0, 6, 0, 0, 0, 0, 0, 0, 1, 4, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6 } ;
	var uLocal_64 = 0;
	var uLocal_65 = 255;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 255;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 255;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 255;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 255;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 255;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	struct<34> Local_83[32];
	struct<753> Local_1172 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1065353216, 0, 1065353216, 1077936128, 1108082688, 1113325568, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0 } ;
	var uLocal_1925 = 6;
	var uLocal_1926 = 0;
	var uLocal_1927 = 0;
	var uLocal_1928 = 0;
	var uLocal_1929 = 0;
	var uLocal_1930 = 0;
	var uLocal_1931 = 0;
	var uLocal_1932 = 6;
	var uLocal_1933 = 0;
	var uLocal_1934 = 0;
	var uLocal_1935 = 0;
	var uLocal_1936 = 0;
	var uLocal_1937 = 0;
	var uLocal_1938 = 0;
	var uLocal_1939 = 1;
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	float fLocal_1942 = 0f;
	float fLocal_1943 = 0f;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1942 = 1f;
	fLocal_1943 = 1f;
	iVar0 = iScriptParam_0;
	func_1(iVar0);
	func_2(&iScriptParam_0);
	while (!func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1(int iParam0)
{
	func_7(32, iParam0);
	func_8();
	func_9();
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 70, 42);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_13), 70, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_83, 1089, 43);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_83[0 /*34*/])), 1089, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(bool bParam0)
{
	if (Local_13 == 6)
	{
		return;
	}
	func_13(bParam0);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_14();
		func_15();
	}
}

bool func_3()
{
	if (func_16(0, 0))
	{
		return true;
	}
	else if (func_17(Local_1172.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1172.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1172.f_12), Local_1172.f_9))
	{
		return true;
	}
	else if (Local_1172.f_8 == 6)
	{
		return true;
	}
	return false;
}

void func_4()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_22();
	}
	func_23();
}

void func_5()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_24();
		func_25();
	}
	func_26();
	func_27();
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
		if (func_28() == 0)
		{
			if (func_29())
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

void func_9()
{
	func_30();
}

int func_10(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_11(int iParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_12(bool bParam0)
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

void func_13(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<29> Var3;

	iVar0 = 255;
	MISC::COPY_SCRIPT_STRUCT(&Local_1172, bParam0, 5);
	iVar2 = func_31(&bVar1, Local_1172.f_1, Local_1172.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1172.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1172.f_1, Local_1172.f_2, Local_1172.f_3, iVar0);
	Local_1172.f_9 = { func_33(Var3.f_5, 8) };
	Local_1172.f_14 = Var3.f_5;
	Local_1172.f_15 = { Var3.f_11 };
	Local_1172.f_18 = Var3.f_7;
	func_34();
	func_35();
}

void func_14()
{
	func_36();
}

void func_15()
{
	func_37();
	func_38();
	func_39();
}

bool func_16(bool bParam0, bool bParam1)
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

bool func_17(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_40(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_41(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_42(iParam3, 255))
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
	if (func_43())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_40(Global_1051268))
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

bool func_18()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_19(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 71);
}

struct<2> func_20(int iParam0)
{
	return Global_1219580.f_1[iParam0 /*10*/].f_4;
}

bool func_21(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_22()
{
	if (Local_13 <= 5)
	{
		func_44();
	}
	switch (Local_13)
	{
		case 0:
			func_45();
			break;
		case 1:
			func_46();
			break;
		case 2:
			func_47();
			break;
		case 3:
			func_48();
			break;
		case 4:
			func_49();
			break;
		case 5:
			func_50();
			break;
	}
}

void func_23()
{
	func_51();
	func_52();
	if (Local_1172.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_1172.f_8)
	{
		case 0:
			func_54();
			break;
		case 1:
			func_55();
			break;
		case 2:
			func_56();
			break;
		case 3:
			func_57();
			break;
		case 4:
			func_58();
			break;
		case 5:
			func_59();
			break;
	}
}

void func_24()
{
	func_60();
}

void func_25()
{
	if (func_61())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_13.f_3.f_1);
		}
	}
	func_62();
}

void func_26()
{
	func_63();
	func_64();
	func_65();
	func_66();
}

void func_27()
{
	if (Local_1172.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_67(Local_1172.f_12, 4);
		}
	}
	func_68();
	if (func_69(64))
	{
		func_70(Local_13.f_6);
	}
	func_71();
}

int func_28()
{
	return Global_1572887.f_14;
}

bool func_29()
{
	return Global_1051645.f_8;
}

void func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		Local_13.f_35.f_1[iVar0] = 255;
		iVar0++;
	}
}

int func_31(var uParam0, int iParam1, int iParam2)
{
	struct<10> Var0;
	struct<15> Var10;
	int iVar25;
	struct<29> Var26;

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
	Var26.f_10 = 30f;
	Var26.f_15 = 4;
	Var26.f_20 = 4;
	Var26.f_26 = -1;
	Var26.f_28 = 2;
	func_32(&Var26, iParam1, iParam2, -1, 255);
	func_72(&Var0, Var26.f_5);
	iVar25 = func_73(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_74(iVar25) };
		if (Var10 == 2)
		{
			return iVar25;
		}
		else
		{
			*uParam0 = 1;
			return -1;
		}
	}
	return -1;
}

void func_32(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_75(bParam0, iParam2);
			break;
		case 2:
			func_76(bParam0, iParam2);
			break;
		case 3:
			func_77(bParam0, iParam2);
			break;
		case 4:
			func_78(bParam0, iParam2);
			break;
		case 12:
			func_79(bParam0, iParam2);
			break;
		case 6:
			func_80(bParam0, iParam2);
			break;
		case 7:
			func_81(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_82(bParam0, iParam2);
			break;
		case 11:
			func_83(bParam0, iParam2);
			break;
		case 9:
			func_84(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_85(bParam0, iParam2);
			break;
		case 8:
			func_86(bParam0, iParam2);
			break;
		case 13:
			func_87(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_88(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_89(bParam0, iParam2);
			break;
		case 16:
			func_90(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_91(bParam0, iParam2);
			break;
		case 21:
			func_92(bParam0, iParam2);
			break;
		case 28:
			func_93(bParam0, iParam2);
			break;
		case 25:
			func_94(bParam0, iParam2);
			break;
		case 24:
			func_95(bParam0, iParam2);
			break;
		case 22:
			func_96(bParam0, iParam2);
			break;
		case 23:
			func_97(bParam0, iParam2);
			break;
		case 29:
			func_98(bParam0, iParam2);
			break;
		case 26:
			func_99(bParam0, iParam2);
			break;
		case 30:
			func_100(bParam0, iParam2);
			break;
		case 27:
			func_101(bParam0, iParam2);
			break;
		case 32:
			func_102(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_103(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_104(bParam0, iParam2);
			break;
		case 17:
			func_105(bParam0, iParam2);
			break;
		case 18:
			func_106(bParam0, iParam2);
			break;
		case 19:
			func_107(bParam0, iParam2);
			break;
		case 20:
			func_108(bParam0, iParam2);
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
			func_109(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_33(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573), func_110(iParam1));
			break;
		case 3:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_602), func_110(iParam1));
			break;
		case 4:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_2104), func_110(iParam1));
			break;
		case 5:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_12606), func_110(iParam1));
			break;
		case 6:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_12908), func_110(iParam1));
			break;
		case 7:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_15910), func_110(iParam1));
			break;
		case 8:
			Var0.f_1 = func_111(iParam0, &(Global_1072759.f_573.f_16512), func_110(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_112();
	}
	return Var0;
}

void func_34()
{
	func_113();
	func_114();
	func_115();
	func_116();
	func_117();
}

void func_35()
{
	func_118();
	func_119();
	if (!PED::ADD_RELATIONSHIP_GROUP("REL_MPREST", &(Local_1172.f_19.f_103)))
	{
	}
	else
	{
		func_120(1);
	}
}

void func_36()
{
	if (!STREAMING::_REQUEST_SCENARIO_TYPE(-1.402456E+21f, 4194319, 0, 0))
	{
	}
	else
	{
		func_121(32);
	}
}

void func_37()
{
}

void func_38()
{
}

void func_39()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_122(&(Local_13.f_50.f_19), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_123(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_110(Param0))
	{
		return false;
	}
	return true;
}

bool func_41(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_42(int iParam0, int iParam1)
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

bool func_43()
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
	if (!func_40(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_44()
{
}

void func_45()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_1172.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1172.f_1, Local_1172.f_2, Local_1172.f_3, iVar0);
	if (!func_124(&Var1, 1))
	{
		func_125(1);
		return;
	}
	Local_13.f_6 = func_126(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_127(256);
	if (func_128(Local_13.f_6))
	{
		func_129(5);
		func_125(6);
	}
	else
	{
		func_125(1);
	}
}

void func_46()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_1172.f_1, Local_1172.f_2, -1, 255);
	if (func_124(&Var0, 1))
	{
		func_125(2);
		return;
	}
	if (func_130(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_1172.f_15, Var0.f_10, 2442122);
		func_125(2);
	}
	else if (bVar31)
	{
		func_129(3);
		func_125(6);
	}
	if (!func_131(Local_13.f_3.f_2))
	{
		func_132(&(Local_13.f_3.f_2));
	}
	else if (func_133(Local_13.f_3.f_2) > 45000)
	{
		func_129(4);
		func_125(6);
	}
}

void func_47()
{
	if (func_134(1, 255))
	{
		if (!func_135(1))
		{
			if (func_136())
			{
				func_127(1);
			}
		}
		else
		{
			func_137();
			func_125(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_134(2, 255))
	{
		if (!func_135(2))
		{
			bVar0 = true;
			if (!func_138())
			{
				bVar0 = false;
			}
			if (!func_139())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_127(2);
			}
		}
		else
		{
			func_140();
			func_125(4);
		}
	}
}

void func_49()
{
	func_141();
	func_142();
	func_143();
	if (func_144() || Local_13.f_2 != 0)
	{
		func_145();
		func_125(5);
	}
}

void func_50()
{
	if (func_134(4, 255))
	{
		if (func_146())
		{
			func_127(4);
			func_125(6);
		}
	}
}

void func_51()
{
	if (!func_135(256))
	{
		return;
	}
	if (func_135(512))
	{
		if (func_69(64) && func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_70(Local_13.f_6);
			func_147(64);
		}
	}
	else if (!func_69(64))
	{
		if (func_126(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_148(Local_13.f_6, 1, 1);
			func_149(64);
		}
	}
	else if (func_126(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_70(Local_13.f_6);
		func_147(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_134(8192, 255))
		{
			func_150(8192);
		}
	}
	else if (!func_134(8192, 255))
	{
		func_151(8192);
	}
}

void func_53()
{
	func_152();
	func_153();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_154(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_154(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_154(6);
	}
	else if (Local_13 > 1)
	{
		func_154(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_134(1, 255))
	{
		bVar0 = true;
		if (!func_155())
		{
			bVar0 = false;
		}
		if (!func_156())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_151(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_131(Local_1172.f_11))
			{
				func_132(&(Local_1172.f_11));
			}
			if (func_133(Local_1172.f_11) >= iVar1)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_157(&(Local_1172.f_11));
		func_158();
		func_154(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_134(2, 255))
	{
		iVar0 = func_159();
		iVar1 = func_160();
		if (iVar0 && iVar1)
		{
			func_151(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_131(Local_1172.f_11))
			{
				func_132(&(Local_1172.f_11));
			}
			if (func_161(Local_1172.f_11) >= iVar2)
			{
				func_154(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_157(&(Local_1172.f_11));
		func_162();
		func_163();
		func_164();
		func_165();
		func_154(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_166();
		func_154(5);
		return;
	}
	func_167();
	func_168();
	func_169();
	func_170();
	func_171();
	func_172();
	func_173();
}

void func_59()
{
	if (!func_134(4, 255))
	{
		if (func_174())
		{
			func_175();
			func_67(Local_1172.f_12, 4);
			func_151(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_154(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_135(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_62()
{
}

void func_63()
{
	int iVar0;
	int iVar1;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 6)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_22[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_22[iVar1]);
				func_176(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_177(iVar0, "HAS_VOICE");
					func_177(iVar0, "HorseTeamA");
					func_177(iVar0, "HorseTeamB");
					func_177(iVar0, "HorseOwnerTeamA");
					func_177(iVar0, "HorseOwnerTeamB");
					if (!func_178(iVar1, 16))
					{
						PED::_SET_REMOVE_PED_NETWORKED(iVar0, -1);
					}
					ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
				}
			}
			iVar1++;
		}
	}
}

void func_64()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_61())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 4)
			{
				if (func_179(iVar1, iVar2))
				{
				}
				else if (func_180(iVar1, iVar2))
				{
					iVar0 = Local_1172.f_228[iVar1 /*62*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_181(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar1 /*5*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_29[iVar1 /*5*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_181(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				iVar2++;
			}
			iVar1++;
		}
	}
}

void func_65()
{
	func_182(&(Local_1172.f_473.f_13));
	if (VOLUME::DOES_VOLUME_EXIST(Local_1172.f_473.f_11))
	{
		VOLUME::DELETE_VOLUME(Local_1172.f_473.f_11);
	}
}

void func_66()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_184(func_183(iVar0), 1);
		iVar0++;
	}
}

void func_67(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_185(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_68()
{
	int iVar0;
	bool bVar1;

	if (!func_69(1))
	{
		return;
	}
	if (func_69(4))
	{
		return;
	}
	if (!func_69(2))
	{
		iVar0 = -1;
	}
	else if (!func_69(8))
	{
		iVar0 = 2;
	}
	else if (func_69(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_69(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_186(Local_1172.f_9, iVar0, 0, 255, 0);
	func_149(4);
	if (bVar1)
	{
		func_187(Local_1172.f_1, Local_1172.f_2);
		if (!func_69(256))
		{
			if (iVar0 == 1)
			{
				func_188(Local_1172.f_18, 1);
			}
			else
			{
				func_188(Local_1172.f_18, 0);
			}
			func_149(256);
		}
		func_189(Local_1172.f_18);
	}
	else
	{
		func_188(Local_1172.f_18, 2);
	}
}

bool func_69(int iParam0)
{
	return func_190(Local_1172.f_7, iParam0);
}

void func_70(int iParam0)
{
	int iVar0;

	if (!func_191(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_71()
{
	func_192(&(Local_1172.f_19.f_107), 1);
	TASK::CLEAR_SEQUENCE_TASK(&(Local_1172.f_19.f_110));
}

void func_72(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_73(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_193(uParam0))
	{
		return -1;
	}
	iVar0 = func_194(uParam0, uParam0->f_9);
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
			iVar0 = func_194(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_74(int iParam0)
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
	if (!func_19(iParam0))
	{
		return Var0;
	}
	return Global_1207465.f_231[iParam0 /*15*/];
}

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_195(bParam0, iParam1);
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

void func_76(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_197(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_197(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_197(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_197(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_197(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_197(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_197(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_197(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_197(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			func_198(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_196(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_79(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_197(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_197(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_197(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_197(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_80(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_199(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_198(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_198(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_198(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_198(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_198(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_198(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_198(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_198(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_198(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_198(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_198(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_198(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_198(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_198(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_198(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_198(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_81(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 8);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 7);
			func_198(bParam0, 8);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			func_198(bParam0, 6);
			func_198(bParam0, 7);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			func_198(bParam0, 6);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			func_198(bParam0, 5);
			func_198(bParam0, 9);
			func_198(bParam0, 10);
			func_198(bParam0, 11);
			func_200(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_82(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_197(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_197(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_197(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_197(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_197(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_197(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_197(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_197(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_197(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_197(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_83(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_196(bParam0);
	func_201(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_84(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_202(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_202(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_202(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_202(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_202(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_85(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_197(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_197(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_197(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_197(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_197(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_197(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_197(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_197(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_197(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_86(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_196(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_87(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_196(bParam0);
	func_201(bParam0, 1);
	func_201(bParam0, 4);
	func_201(bParam0, 8);
	func_201(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_203(func_126(iParam2)) };
			break;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_89(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_197(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_90(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_205(bParam0, iParam2);
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

void func_91(bool bParam0, int iParam1)
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
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_206(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_206(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_206(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
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
			func_207(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_207(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_207(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
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
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_198(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_198(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_196(bParam0);
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
			func_198(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_198(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_198(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_198(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_198(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_198(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_198(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_198(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_198(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_198(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_196(bParam0);
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
			func_198(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_198(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_198(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_198(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_198(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_198(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_198(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_198(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_198(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_198(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_198(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_96(bool bParam0, int iParam1)
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
			func_208(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_97(bool bParam0, int iParam1)
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
			func_209(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_209(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_98(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_196(bParam0);
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
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_198(bParam0, 3);
			func_198(bParam0, 4);
			func_198(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_99(bool bParam0, int iParam1)
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
			func_210(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_100(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_196(bParam0);
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
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_198(bParam0, 2);
			func_198(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_198(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_198(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_101(bool bParam0, int iParam1)
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
			func_211(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_102(bool bParam0, int iParam1, int iParam2)
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
	func_212(bParam0, iParam1, iParam2);
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

void func_103(bool bParam0, int iParam1, int iParam2)
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
	func_213(bParam0, iParam1, iParam2);
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

void func_104(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_196(bParam0);
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
			func_198(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_198(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_198(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_198(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_198(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_198(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_198(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_198(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_198(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_198(bParam0, 1);
			break;
	}
}

void func_105(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_197(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_106(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_197(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_197(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_197(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_197(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_197(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_197(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_107(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_196(bParam0);
	switch (iParam1)
	{
		case 0:
			func_197(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_197(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_197(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_197(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_198(bParam0, 0);
			func_198(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_108(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_214(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_214(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_214(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_109(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_215(iParam1);
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
	*bParam0 = func_216(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_201(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_218(func_217(iVar0), iParam2);
		bParam0->f_15[0] = func_219(func_217(iVar0), iParam2);
		bParam0->f_5 = func_220(iVar0, iParam2);
		bParam0->f_11 = { func_221(iVar0, iParam2) };
	}
}

int func_110(int iParam0)
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

int func_111(int iParam0, var uParam1, int iParam2)
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

struct<2> func_112()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_113()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(6);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 6)
		{
			Local_83[iVar1 /*34*/].f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_180(iVar1, iVar2))
			{
				Jump @49; //curOff = 37
			}
			else
			{
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(iVar0);
}

void func_115()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_222(&iVar2);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_224(func_183(iVar0), func_223(func_183(iVar0)));
		Local_1172.f_514[iVar0 /*39*/] = func_223(func_183(iVar0));
		if (bVar3)
		{
			func_122(&(Local_83[iVar2 /*34*/].f_31.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_122(&(Local_83[iVar1 /*34*/].f_31.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_225(&(Local_1172.f_291), &(Local_1172.f_291.f_32));
	bVar2 = true;
	if (!func_222(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_35.f_8[iVar0] = 0;
			Local_13.f_35.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_83[iVar1 /*34*/].f_11.f_12[iVar0] = 0;
		}
		iVar0++;
	}
	func_226(&(Local_1172.f_291.f_87), 8, -1);
	if (bVar2)
	{
		func_226(&(Local_83[iVar1 /*34*/].f_11), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_226(&(Local_83[iVar3 /*34*/].f_11), 8, -1);
			iVar3++;
		}
	}
}

void func_117()
{
}

void func_118()
{
	int iVar0;

	switch (func_227())
	{
		case 0:
			func_230(0, -Vector((1f + func_228()), 0f, 0f), func_229(), 0);
			switch (func_231())
			{
				case 0:
					func_232(0, -4.527401E+11f);
					func_233(0, -5.461043E-24f);
					func_234(0, "0726_A_M_M_GuaTownfolk_01_HISPANIC_04");
					break;
				case 1:
					func_232(0, -4.527401E+11f);
					func_233(0, -1.402582E-32f);
					break;
			}
			break;
	}
	func_235(0, 1);
	func_232(1, func_236(0.003839614f, 1));
	func_230(1, func_237(), func_238(), 1);
	if (func_239() == 1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 8);
		if (iVar0 < 2)
		{
			func_240(3, 5, -1.212915E+07f);
		}
		else if (iVar0 == 2)
		{
			func_240(3, 4, 1.059505E-35f);
		}
		else
		{
			func_240(3, 5, 1.103265E-21f);
		}
		func_230(3, 1088233144 /* Float: 6.91f */, -1082465976 /* Float: -0.98f */, -1069547520 /* Float: -3f */, 0f, 0);
		func_230(4, 1084563128 /* Float: 5.16f */, 1075377603 /* Float: 2.39f */, -1069547520 /* Float: -3f */, 0f, 0);
		func_230(5, 1077139210 /* Float: 2.81f */, -1068750602 /* Float: -3.19f */, -1069547520 /* Float: -3f */, 0f, 0);
	}
}

void func_119()
{
	func_241(1, 2.684877E+33f);
	func_242(1, 0f, 0f, 0f, 0f, 0, 0);
	func_243(1, 1);
	func_241(0, 1.96054E+33f);
	func_242(0, 0f, 0f, -func_228(), 0f, 0, 0);
	func_243(0, 1);
	func_241(2, 6.242986E+28f);
	func_242(2, 0f, 0f, 1056964608 /* Float: 0.5f */, 0f, 0, 0);
	func_241(3, 1.723235E-27f);
	if (func_244() != 4)
	{
		func_242(3, 1069547520 /* Float: 1.5f */, -1079613850 /* Float: -1.3f */, -func_245(), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
	}
	else
	{
		func_242(3, 1069547520 /* Float: 1.5f */, 1067869798 /* Float: 1.3f */, -func_245(), MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f), 1, 0);
	}
}

void func_120(int iParam0)
{
	func_246(&(Local_1172.f_19.f_2), iParam0);
}

void func_121(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_246(&(Local_13.f_7.f_1), iParam0);
	}
}

void func_122(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam2;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iVar0, 0))
	{
		MISC::SET_BIT(iParam0, iVar1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1);
	}
	if (MISC::IS_BIT_SET(iVar0, 1))
	{
		MISC::SET_BIT(iParam0, iVar1 + 1);
	}
	else
	{
		MISC::CLEAR_BIT(iParam0, iVar1 + 1);
	}
}

bool func_123(int iParam0)
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

bool func_124(var uParam0, int iParam1)
{
	return func_247(uParam0->f_25, iParam1);
}

void func_125(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_126(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_127(int iParam0)
{
	if (!func_135(iParam0))
	{
		func_246(&(Local_13.f_1), iParam0);
	}
}

bool func_128(int iParam0)
{
	if (!func_191(iParam0))
	{
		return false;
	}
	return (func_248(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_129(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_130(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_249(Local_1172.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_13.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_1172.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_250(&uVar1, Param0);
		Local_13.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_151(128);
	}
	else if (!func_134(128, 255))
	{
		Local_13.f_3.f_1 = func_251(Param0);
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_13.f_3);
	switch (iVar0)
	{
		case 3:
			Local_13.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_13.f_3);
			return true;
		case 4:
			Local_13.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_131(int iParam0)
{
	return iParam0 != 0;
}

void func_132(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_133(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_134(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_190(Local_83[iParam1 /*34*/], iParam0);
}

bool func_135(int iParam0)
{
	return func_190(Local_13.f_1, iParam0);
}

bool func_136()
{
	return true;
}

void func_137()
{
}

bool func_138()
{
	if (func_252(32))
	{
		if (!STREAMING::_HAS_SCENARIO_TYPE_LOADED(-1.402456E+21f, false))
		{
			return false;
		}
		if (!TASK::DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_2))
		{
			Local_13.f_7.f_2 = TASK::CREATE_SCENARIO_POINT_HASH(-1.402456E+21f, func_253(1) - Vector(1056964608, 0f, 0f), func_254(1), 0, 0, false);
		}
	}
	if (!func_252(128))
	{
		func_255();
	}
	return true;
}

bool func_139()
{
	bool bVar0;

	if (!func_256(&bVar0))
	{
		if (bVar0)
		{
			func_257();
		}
		return false;
	}
	if (!func_258(&bVar0))
	{
		if (bVar0)
		{
			func_257();
		}
		return false;
	}
	return true;
}

void func_140()
{
}

void func_141()
{
	if (!func_135(32) && func_259(32))
	{
		func_127(32);
	}
	if (!func_135(64) && func_259(64))
	{
		func_127(64);
	}
	if (!func_135(16) && func_260(16))
	{
		func_127(16);
	}
	if ((!func_135(2048) && func_259(2048)) && !func_259(4096))
	{
		func_127(2048);
	}
}

void func_142()
{
	bool bVar0;

	if (!bVar0 && func_135(16))
	{
		func_129(1);
		return;
	}
	if (func_135(2048) && !func_259(4096))
	{
		func_129(6);
		return;
	}
}

void func_143()
{
	func_261();
}

bool func_144()
{
	if (func_262())
	{
		return true;
	}
	if (func_263(64, 0) && PHYSICS::DOES_ROPE_EXIST(Local_1172.f_19.f_106))
	{
		PHYSICS::DELETE_ROPE(&(Local_1172.f_19.f_106));
	}
	if (PED::IS_PED_FLEEING(func_264(1)) && !func_252(8192))
	{
		func_121(8192);
	}
	if (func_263(1048576, 0))
	{
		if (func_265(0))
		{
			func_266(0, 0);
		}
		if (!func_267())
		{
			func_268();
		}
		if (func_269() != 6)
		{
			func_270(6);
		}
	}
	switch (func_239())
	{
		case 0:
			switch (func_269())
			{
				case 0:
					func_271();
					break;
				case 1:
					func_272();
					break;
				case 2:
					func_273();
					break;
				case 4:
					func_274();
					break;
				case 3:
					func_275();
					break;
			}
			break;
		case 1:
			switch (func_269())
			{
				case 0:
					func_276();
					break;
				case 1:
					func_277();
					break;
				case 2:
					func_278();
					break;
				case 4:
					func_279();
					break;
				case 3:
					func_280();
					break;
			}
			break;
	}
	return false;
}

void func_145()
{
}

bool func_146()
{
	if (TASK::DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_2))
	{
		TASK::_DELETE_SCENARIO_POINT(Local_13.f_7.f_2);
	}
	return true;
}

void func_147(int iParam0)
{
	if (func_69(iParam0))
	{
		func_281(&(Local_1172.f_7), iParam0);
	}
}

int func_148(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_191(iParam0))
	{
		return 0;
	}
	iVar0 = func_282(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_283(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_284(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_149(int iParam0)
{
	if (!func_69(iParam0))
	{
		func_246(&(Local_1172.f_7), iParam0);
	}
}

void func_150(int iParam0)
{
	if (func_190(Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/], iParam0))
	{
		func_281(&(Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), iParam0);
	}
}

void func_151(int iParam0)
{
	if (!func_134(iParam0, 255))
	{
		func_246(&(Local_83[NETWORK::PARTICIPANT_ID_TO_INT() /*34*/]), iParam0);
	}
}

void func_152()
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
				func_285(iVar0);
				break;
			case -1315570756:
				func_286(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_287(iVar0);
		iVar0++;
	}
}

void func_153()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1172.f_752 >= 6)
		{
			Local_1172.f_752 = 0;
		}
		func_289(func_288(Local_1172.f_752));
		Local_1172.f_752++;
		iVar0++;
	}
}

void func_154(int iParam0)
{
	if (Local_1172.f_8 != iParam0)
	{
		Local_1172.f_8 = iParam0;
	}
}

bool func_155()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		switch (Local_1172.f_19)
		{
			case 0:
				Local_1172.f_19.f_105 = ANIMSCENE::_CREATE_ANIM_SCENE(func_290(), 64, "PBL_TAKE_OFFER", true, true);
				Local_13.f_7.f_10 = NETWORK::_ANIM_SCENE_TO_NET(Local_1172.f_19.f_105);
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1172.f_19.f_105))
				{
					func_257();
				}
				else
				{
					ANIMSCENE::LOAD_ANIM_SCENE(Local_1172.f_19.f_105);
					Local_1172.f_19 = 1;
				}
				return false;
		}
	}
	if (!func_291())
	{
		return false;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_292()) && !HUD::TEXT_BLOCK_IS_LOADED(func_292()))
	{
		HUD::TEXT_BLOCK_REQUEST(func_292());
		return false;
	}
	return true;
}

bool func_156()
{
	bool bVar0;

	bVar0 = false;
	if (!func_293())
	{
		bVar0 = true;
	}
	if (!func_294())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_157(var uParam0)
{
	*uParam0 = 0;
}

void func_158()
{
}

int func_159()
{
	return 1;
}

int func_160()
{
	bool bVar0;

	if (!func_295())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_161(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_162()
{
	if (!func_69(1))
	{
		func_296(Local_1172.f_9);
		func_149(1);
	}
}

void func_163()
{
	func_297();
	func_298();
}

void func_164()
{
	int iVar0;
	int iVar1;

	func_299();
	func_300();
	if (func_244() == 7)
	{
		func_302(&(Local_1172.f_19.f_107), func_301() - Vector(1087373312, 0f, 0f), 1075838976 /* Float: 2.5f */, 0, 0);
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	iVar0 = func_264(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!func_252(256))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
			func_303();
			ENTITY::SET_ENTITY_COORDS(iVar0, Local_1172.f_15 - Vector((1f + func_228()), 0f, 0f), true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(iVar0, func_229());
			if (ENTITY::DOES_ENTITY_EXIST(func_304(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(0)))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(func_304(0), func_264(0), -1, PED::GET_PED_BONE_INDEX(func_264(0), 45454), 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 90f, -1f, false, true, false, false, 0, true, 1f, 1f);
			}
			else
			{
				func_257();
			}
			if (((ENTITY::DOES_ENTITY_EXIST(func_304(1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(1))) && ENTITY::DOES_ENTITY_EXIST(func_304(0))) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(0)))
			{
				func_305();
			}
			else
			{
				func_257();
			}
			func_306();
			func_121(256);
		}
	}
	iVar1 = func_264(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			if (TASK::DOES_SCENARIO_POINT_EXIST(Local_13.f_7.f_2))
			{
				PHYSICS::_HITCH_HORSE(iVar1, func_307());
				TASK::TASK_USE_SCENARIO_POINT(iVar1, Local_13.f_7.f_2, 0, 0, false, true, 0, false, -1f, false);
				if (func_308(1))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar1, Local_1172.f_19.f_103);
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_304(3)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(3)))
	{
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_304(3), func_264(3), true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_304(3), func_264(4), true);
		ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(func_304(3), func_264(5), true);
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(func_304(3), false);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_304(2)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(2)))
	{
		ENTITY::SET_ENTITY_VISIBLE(func_304(2), false);
		ENTITY::SET_ENTITY_COLLISION(func_304(2), false, false);
		ENTITY::FREEZE_ENTITY_POSITION(func_304(2), true);
	}
	if (func_239() == 1)
	{
		func_309(3);
		func_309(4);
		func_309(5);
	}
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1172.f_19.f_105))
	{
		ANIMSCENE::ATTACH_ANIM_SCENE_TO_ENTITY_PRESERVING_LOCATION(Local_1172.f_19.f_105, func_264(0), -1);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1172.f_19.f_105, 0f, 0f, -1f, 0f, 0f, 0f, 2);
	}
	if (ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(iVar0, 6.126567E-26f))
	{
	}
	if (func_231() == 1)
	{
		func_310();
	}
	func_311();
	func_312(1106247680 /* Float: 30f */);
	func_313(1108082688 /* Float: 35f */, 1117126656 /* Float: 75f */, 1, 3f, 0);
	func_314(1f, 5f);
	func_315(&(Local_1172.f_291), func_264(0), func_264(1), 0);
	func_316(-2.19652E+23f, func_301(), 0f, 0f, 0f, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */);
	func_316(-9.406495E-20f, func_301() + Vector(0f, 1092616192, 1092616192), 0f, 0f, 0f, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */);
	func_317(func_264(0));
	func_318(0, -1.840275E+19f);
	func_319(0, 0);
}

void func_165()
{
	func_320();
}

void func_166()
{
}

void func_167()
{
	float fVar0;

	if (func_249(Local_1172.f_15))
	{
		return;
	}
	if (func_267())
	{
		return;
	}
	if (func_321(Local_1172.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1172.f_15);
		if (fVar0 < 1128792064)
		{
			func_151(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_150(4096);
			func_151(2048);
		}
		else
		{
			func_150(4096);
			func_150(2048);
		}
	}
}

void func_168()
{
	func_322();
	func_323();
	func_324();
	func_325();
	func_326();
	func_327();
}

void func_169()
{
	if (func_328())
	{
		func_151(8);
	}
	else
	{
		func_150(8);
	}
}

void func_170()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if ((func_252(1024) && !func_329(1, -1, 1)) && PHYSICS::_IS_ROPE_ATTACHED_TO_ENTITY(Local_1172.f_19.f_106, func_304(1)))
	{
		func_330(1);
	}
	if (func_331(1, 0) && !func_329(2, -1, 1))
	{
		func_332();
	}
	if (!func_263(32, 0))
	{
		if (func_333())
		{
			iVar0 = PHYSICS::_ROPE_GET_BREAKER_OF_ROPE(Local_1172.f_19.f_106);
			if (iVar0 == PLAYER::PLAYER_ID())
			{
				func_330(32);
				func_330(4);
			}
		}
	}
	if ((func_252(128) && PHYSICS::_IS_ROPE_ATTACHED_TO_ENTITY(Local_1172.f_19.f_106, func_304(1))) && PHYSICS::_IS_ROPE_ATTACHED_TO_ENTITY(Local_1172.f_19.f_106, func_304(0)))
	{
		iVar1 = func_264(0);
		if (ENTITY::_IS_ENTITY_FROZEN(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
		}
		if (ENTITY::GET_ENTITY_COLLISION_DISABLED(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		}
	}
	if (func_334() < 2)
	{
		if ((ENTITY::IS_ENTITY_TOUCHING_ENTITY(func_264(0), PLAYER::PLAYER_PED_ID()) && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) || ENTITY::IS_ENTITY_TOUCHING_ENTITY(func_264(0), PED::GET_MOUNT(PLAYER::PLAYER_PED_ID())))
		{
			func_330(32);
			func_330(4);
			func_330(2f);
		}
		if ((func_263(2f, 0) && !func_263(64, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
		{
			func_330(64);
			func_335(1);
		}
	}
	if ((func_334() == 6 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0))) && func_333())
	{
		if (!func_263(64, 0) && func_335(0))
		{
			func_330(64);
		}
	}
	if (func_263(128, 0) || func_263(256, 0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(0)) && ENTITY::DOES_ENTITY_EXIST(func_304(0)))
		{
			ENTITY::DETACH_ENTITY(func_304(0), true, true);
			uVar2 = func_304(0);
			OBJECT::DELETE_OBJECT(&uVar2);
		}
	}
	if (func_334() >= 4 && (func_336(PLAYER::PLAYER_PED_ID(), 8.330918E+10f) || ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(PLAYER::PLAYER_PED_ID(), Local_1172.f_19.f_105)))
	{
		TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID(), true, false);
	}
	if ((func_263(131072, 0) && func_329(4, -1, 1)) && !func_329(262144, -1, 1))
	{
		if (Local_13.f_7.f_12 == 0 && Local_13.f_7.f_4 == PLAYER::PLAYER_ID())
		{
			func_337(1);
		}
		else
		{
			func_337(0);
		}
		func_330(262144);
	}
	func_338();
	func_339();
	func_340();
	func_341();
	if ((func_267() && !func_134(32, 255)) && func_342())
	{
		func_268();
	}
	switch (func_239())
	{
		case 0:
			switch (func_334())
			{
				case 0:
					func_343();
					break;
				case 1:
					func_344();
					break;
				case 2:
					func_345();
					break;
				case 4:
					func_346();
					break;
				case 3:
					func_347();
					break;
			}
			break;
		case 1:
			switch (func_334())
			{
				case 0:
					func_348();
					break;
				case 1:
					func_349();
					break;
				case 2:
					func_350();
					break;
				case 4:
					func_351();
					break;
				case 3:
					func_352();
					break;
			}
			break;
	}
	if (!func_308(4))
	{
		if (func_353() || func_354())
		{
			func_120(4);
			iVar3 = 3;
			while (iVar3 <= 5)
			{
				func_355(iVar3);
				func_356(iVar3);
				iVar3++;
			}
		}
	}
	else if (!(func_353() || func_354()))
	{
		func_357(4);
	}
}

void func_171()
{
	if (!func_134(8, 255))
	{
		func_151(16);
	}
	else
	{
		func_150(16);
	}
}

void func_172()
{
	int iVar0;

	Local_1172.f_6 = -1;
	Local_1172.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1172.f_5 = (Local_1172.f_5 || Local_83[iVar0 /*34*/]);
			Local_1172.f_6 = (Local_1172.f_6 && Local_83[iVar0 /*34*/]);
		}
		iVar0++;
	}
}

void func_173()
{
	if ((func_69(1024) && !func_134(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_358(&Global_0, 1)))
	{
		func_151(16384);
	}
}

bool func_174()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_264(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			PED::_SET_PED_INTERACTION_PERSONALITY(iVar0, 9.849556E+25f);
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0) && func_359(0, PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_308(256) && !func_308(8))
			{
				func_360();
				func_120(256);
			}
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(2)))
	{
		iVar1 = NETWORK::NET_TO_ENT(NETWORK::OBJ_TO_NET(func_304(2)));
		ENTITY::DELETE_ENTITY(&iVar1);
	}
	if (!func_361() && ENTITY::IS_ENTITY_DEAD(func_264(0)))
	{
		iVar2 = 3;
		while (iVar2 <= 5)
		{
			if ((ENTITY::DOES_ENTITY_EXIST(func_264(iVar2)) && !ENTITY::IS_ENTITY_DEAD(func_264(iVar2))) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(iVar2)))
			{
				func_362(iVar2, 16);
				TASK::TASK_COMBAT_HATED_TARGETS(func_264(iVar2), -1f);
			}
			iVar2++;
		}
	}
	if (func_308(1))
	{
		PED::REMOVE_RELATIONSHIP_GROUP(Local_1172.f_19.f_103);
		func_357(1);
	}
	if (((func_329(4, -1, 1) || func_329(524288, -1, 1)) || func_329(2097152, -1, 1)) && !func_263(262144, 0))
	{
		func_363();
	}
	if (MISC::_DOES_ITEM_HAVE_VALID_BASE(Local_1172.f_19.f_109))
	{
		ITEMSET::DESTROY_ITEMSET(Local_1172.f_19.f_109);
	}
	return true;
}

void func_175()
{
	func_364();
}

void func_176(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_177(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_178(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_131.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_179(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_180(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_181(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1172.f_228[iParam0 /*62*/].f_4, iParam1);
}

void func_182(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(uParam0[iVar0 /*9*/])->f_7 = 0f;
		(uParam0[iVar0 /*9*/])->f_8 = 0f;
		iVar0++;
	}
}

int func_183(int iParam0)
{
	return iParam0;
}

void func_184(int iParam0, bool bParam1)
{
	int iVar0;

	func_365(iParam0, 8);
	if (!func_366(iParam0, 1))
	{
		return;
	}
	iVar0 = func_367(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(iVar0))
		{
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_PED_CONFIG_FLAG(iVar0, 130, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 315, false);
		}
	}
	func_368(iParam0, bParam1);
	func_365(iParam0, 1);
}

bool func_185(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_186(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_370(func_369(Param0));
	iVar1 = func_371(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_372(Param0, &Var2, iParam2);
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

void func_187(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_373(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_374(iVar0);
}

void func_188(int iParam0, int iParam1)
{
	func_132(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_375(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_376(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_377(iParam0);
			break;
	}
}

void func_189(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!func_18())
	{
		return;
	}
	if (iParam0 == 0)
	{
		return;
	}
	Var0 = { func_378(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_190(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_191(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_192(int iParam0, int iParam1)
{
	if (func_379(iParam0))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(iParam0, iParam1);
	}
}

bool func_193(var uParam0)
{
	if (func_40(*uParam0))
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

int func_194(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_380(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_381(iParam1)) - 1);
	}
	bVar2 = func_40(*uParam0);
	bVar3 = (uParam0->f_2 != 0 && uParam0->f_3 != -1);
	bVar4 = (uParam0->f_2 != 0 && uParam0->f_4 != -1);
	bVar5 = (uParam0->f_2 != 0 && uParam0->f_5 != -1);
	iVar6 = iVar0;
	while (iVar6 <= iVar1)
	{
		if (bVar2)
		{
			if (func_21(Global_1207465.f_231[iVar6 /*15*/].f_5, *uParam0))
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

void func_195(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_382(bParam0);
			break;
		case 1:
			func_382(bParam0);
			break;
		case 2:
			func_382(bParam0);
			break;
		case 3:
			func_383(bParam0);
			break;
		case 4:
			func_382(bParam0);
			break;
		case 5:
			func_382(bParam0);
			break;
		case 6:
			func_383(bParam0);
			break;
		case 7:
			func_383(bParam0);
			break;
		case 8:
			func_383(bParam0);
			break;
		case 9:
			func_382(bParam0);
			break;
		default:
			func_197(bParam0);
			func_196(bParam0);
			break;
	}
}

void func_196(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_384(bParam0, iVar0);
		iVar0++;
	}
}

void func_197(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_198(bParam0, iVar0);
		iVar0++;
	}
}

void func_198(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_199(bool bParam0, int iParam1)
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
			func_385(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_386(bParam0);
			break;
		default:
			func_197(bParam0);
			func_196(bParam0);
			break;
	}
}

void func_200(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_384(bParam0, 0);
			break;
		case 1:
		case 2:
			func_384(bParam0, 1);
			func_384(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_384(bParam0, 0);
			func_384(bParam0, 2);
			break;
		case 8:
			func_384(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_384(bParam0, 1);
			break;
		default:
			func_196(bParam0);
			break;
	}
}

void func_201(bool bParam0, int iParam1)
{
	func_283(&(bParam0->f_25), iParam1);
}

void func_202(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_387(bParam0);
			break;
		case 1:
			func_388(bParam0);
			break;
		case 2:
			func_389(bParam0);
			break;
		case 3:
			func_390(bParam0);
			break;
		default:
			func_197(bParam0);
			func_196(bParam0);
			break;
	}
}

Vector3 func_203(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_204(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_391(bParam0);
			break;
		case 1:
		case 2:
			func_392(bParam0);
			break;
		case 3:
		case 4:
			func_393(bParam0);
			break;
		default:
			func_196(bParam0);
			break;
	}
	func_197(bParam0);
}

void func_205(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_384(bParam0, 0);
			func_384(bParam0, 2);
			break;
		case 1:
			func_384(bParam0, 1);
			func_384(bParam0, 3);
			break;
		default:
			func_197(bParam0);
			func_196(bParam0);
			break;
	}
}

void func_206(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_198(bParam0, 0);
			break;
		default:
			func_198(bParam0, 0);
			break;
	}
	func_196(bParam0);
}

void func_207(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_198(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_198(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_198(bParam0, 2);
			break;
		default:
			func_197(bParam0);
			break;
	}
	func_196(bParam0);
}

void func_208(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_198(bParam0, 0);
			func_384(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(bParam0, 1);
			func_384(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_198(bParam0, 2);
			func_384(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_198(bParam0, 3);
			func_384(bParam0, 0);
			break;
	}
}

void func_209(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_198(bParam0, 0);
			func_384(bParam0, 0);
			break;
		case 2:
			func_198(bParam0, 1);
			func_384(bParam0, 0);
			break;
		case 3:
		case 4:
			func_198(bParam0, 2);
			func_384(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_198(bParam0, 3);
			func_384(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_198(bParam0, 4);
			func_384(bParam0, 1);
			break;
	}
}

void func_210(bool bParam0, int iParam1)
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
			func_198(bParam0, 3);
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
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			break;
		default:
			func_197(bParam0);
			break;
	}
	func_196(bParam0);
}

void func_211(bool bParam0, int iParam1)
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
			func_198(bParam0, 3);
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
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			break;
		default:
			func_197(bParam0);
			break;
	}
	func_196(bParam0);
}

void func_212(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_384(bParam0, 0);
			func_198(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_384(bParam0, 1);
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			func_198(bParam0, 2);
			break;
		default:
			func_384(bParam0, 0);
			func_198(bParam0, 0);
			break;
	}
}

void func_213(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_384(bParam0, 0);
			func_198(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_384(bParam0, 1);
			func_198(bParam0, 0);
			func_198(bParam0, 1);
			break;
		default:
			func_384(bParam0, 0);
			func_198(bParam0, 0);
			break;
	}
}

void func_214(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_196(bParam0);
			func_197(bParam0);
			break;
		default:
			func_196(bParam0);
			func_197(bParam0);
			break;
	}
}

int func_215(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_216(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_217(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_218(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_394(&Var1, iParam0) && func_395(&Var1, iParam1))
	{
		func_396(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_219(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_394(&Var1, iParam0) && func_395(&Var1, iParam1))
	{
		func_396(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_220(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_397(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_221(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_397(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

bool func_222(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_398(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

var func_223(int iParam0)
{
	return Local_13.f_50[iParam0 /*3*/];
}

void func_224(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		func_399(iParam0, 8);
		return;
	}
	switch (func_400(uParam1))
	{
		case 0:
			func_401(iParam0, 0);
			break;
		case 1:
			func_401(iParam0, 1);
			func_402(iParam0, 5f);
			func_403(iParam0, 0);
			func_404(iParam0, 0, "GREET_POS", -9.436069E+32f, 0, 1, 0, -1, 0);
			func_404(iParam0, 1, "INTERACT_DECLINE", 1.121045E-15f, 0, 1, 0, -1, 0);
			func_405(iParam0, 0, 1, 1);
			func_405(iParam0, 1, 1, 1);
			break;
		case 2:
			func_401(iParam0, 1);
			func_405(iParam0, 0, 0, 1);
			func_405(iParam0, 1, 0, 1);
			break;
	}
}

void func_225(var uParam0, var uParam1)
{
	func_406(uParam0);
	func_407(uParam0, 1);
	func_408(uParam0, 1);
	func_409(uParam1);
	func_410(uParam1);
	func_411(uParam1);
	func_412(uParam1, 1);
	func_413(uParam1, 1);
}

int func_226(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_414(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_415(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_415(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_415(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_227()
{
	return Local_1172.f_4;
}

float func_228()
{
	switch (func_244())
	{
		case 0:
			return 2f;
		case 1:
			return 1080033280 /* Float: 3.5f */;
		case 2:
			return 1079194419 /* Float: 3.3f */;
		case 3:
			return 1079613850 /* Float: 3.4f */;
		case 4:
			return 1069547520 /* Float: 1.5f */;
		case 5:
			return 1067869798 /* Float: 1.3f */;
		case 6:
			return 1074161254 /* Float: 2.1f */;
		case 7:
			return 1077097267 /* Float: 2.8f */;
		default:
			break;
	}
	return 0f;
}

int func_229()
{
	switch (func_244())
	{
		case 0:
			return -1028784128 /* Float: -87f */;
		case 1:
			return -1046478848 /* Float: -20f */;
		case 2:
			return 1102315520 /* Float: 22.5f */;
		case 3:
			return -1038090240 /* Float: -40f */;
		case 5:
			return 1125882266 /* Float: 155.6f */;
		default:
			break;
	}
	return 1127481344 /* Float: 180f */;
}

void func_230(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1172.f_131.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_1172.f_131.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_246(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_281(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_2), 2);
	}
}

int func_231()
{
	return Local_1172.f_3;
}

void func_232(int iParam0, float fParam1)
{
	Local_1172.f_131.f_7[iParam0 /*11*/].f_3 = fParam1;
}

void func_233(int iParam0, float fParam1)
{
	Local_1172.f_131.f_7[iParam0 /*11*/].f_4 = fParam1;
}

void func_234(int iParam0, char* sParam1)
{
	Local_1172.f_131.f_7[iParam0 /*11*/].f_10 = sParam1;
}

void func_235(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_2), 128);
	}
	else
	{
		func_281(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_2), 128);
	}
}

float func_236(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(2.869977E+14f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_DRAFT"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-4.09657E+36f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_RACE"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-7.883585E+32f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WAR"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(-2.063335E-35f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		case joaat("HORSE_CLASS_WORK"):
			return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(0.001860607f, 0, -0.000127636f, bParam1, false, 0f, 0f, 0f);
		default:
			break;
	}
	return POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(2.869977E+14f, 0, -0.000127636f, true, false, 0f, 0f, 0f);
}

Vector3 func_237()
{
	switch (func_244())
	{
		case 0:
			return -989652819, -986957070, 1116630247;
		case 1:
			return -989129702, -986457761, 1099207069;
		case 2:
			return -986274149, -986773643, 1118915461;
		case 3:
			return -987621184, -986257194, 1116389048;
		case 4:
			return -988626958, -989783518, 1118330094;
		case 5:
			return -984090123, -989065835, -1067945715;
		case 6:
			return -983642725, -983285875, -1047593327;
		case 7:
			return -979114255, -981793673, -1058154113;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

float func_238()
{
	switch (func_244())
	{
		case 0:
			return 1135080181;
		case 1:
			return 1108661554;
		case 2:
			return 1127079268;
		case 3:
			return 1102410154;
		case 4:
			return 1135685524;
		case 5:
			return 1133587304;
		case 6:
			return 1104520623;
		case 7:
			return 1108634606;
		default:
			break;
	}
	return 0f;
}

int func_239()
{
	return Local_1172.f_3;
}

void func_240(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = iParam0;
	while (iVar0 <= iParam1)
	{
		func_232(func_416(iVar0), fParam2);
		iVar0++;
	}
}

void func_241(int iParam0, float fParam1)
{
	func_417(0, iParam0, fParam1);
}

void func_242(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_418(iParam0);
	}
	func_419(0, iParam0, vParam1, fParam4, iParam5);
}

void func_243(int iParam0, bool bParam1)
{
	func_420(0, iParam0, bParam1);
}

int func_244()
{
	return Local_1172.f_2;
}

float func_245()
{
	switch (func_244())
	{
		case 0:
			return 1087153111 /* Float: 6.395f */;
		case 1:
			return 1090682618 /* Float: 8.156f */;
		case 2:
			return 1089430618 /* Float: 7.481f */;
		case 3:
			return 1089459978 /* Float: 7.495f */;
		case 4:
			return 1082319176 /* Float: 4.09f */;
		case 5:
			return 1084416328 /* Float: 5.09f */;
		case 6:
			return 1084607169 /* Float: 5.181f */;
		case 7:
			return 1089640333 /* Float: 7.581f */;
		default:
			break;
	}
	return 0f;
}

void func_246(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_247(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_248(int iParam0)
{
	int iVar0;

	if (!func_191(iParam0))
	{
		return false;
	}
	iVar0 = func_421(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_249(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_250(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_251(struct<31> Param0)
{
	var uVar0;

	func_250(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_252(int iParam0)
{
	return func_190(Local_13.f_7.f_1, iParam0);
}

Vector3 func_253(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/].f_6;
}

float func_254(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/].f_5;
}

void func_255()
{
	Local_1172.f_19.f_106 = PHYSICS::_ADD_ROPE_2(func_301(), 0f, 0f, 0f, func_228(), 1, true, 1, -1f);
	Local_13.f_7.f_11 = NETWORK::NETWORK_GET_NETWORK_ID_FROM_ROPE_ID(Local_1172.f_19.f_106);
	AUDIO::_0xF092B6030D6FD49C(Local_1172.f_19.f_106, "ROPE_SETTINGS_DEFAULT");
	PHYSICS::_0xDEDE679ED29DD4E7(Local_1172.f_19.f_106, true);
	PHYSICS::_0xF1EA2A881EB7F2CD(Local_1172.f_19.f_106, true);
	PHYSICS::_0x522FA3F490E2F7AC(Local_1172.f_19.f_106, 1, 1);
	AUDIO::_0x2651DDC0EA269073(Local_1172.f_19.f_106, 1f);
	PHYSICS::_0x461FCBDEB4D06717(Local_1172.f_19.f_106, false);
	PHYSICS::_0x814D453FCFDF119F(Local_1172.f_19.f_106, 1, 1);
	PHYSICS::_ROPE_CHANGE_VISIBILITY(&(Local_1172.f_19.f_106), true);
	func_121(128);
}

bool func_256(var uParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam0 = 1;
		return false;
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 6)
	{
		if (func_178(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_422(iVar2, uParam0, &bVar1))
				{
					if (*uParam0)
					{
						return false;
					}
					if (bVar1)
					{
						bVar0 = true;
					}
				}
			}
			if (func_423(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_22[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_22[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_22[iVar2]);
					}
				}
			}
		}
		iVar2++;
	}
	if (bVar0)
	{
		return false;
	}
	return true;
}

void func_257()
{
	func_129(2);
}

bool func_258(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*bParam0 = 1;
		return false;
	}
	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_1172.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = func_424(iVar0, iVar1);
			if (func_180(iVar0, iVar1))
			{
			}
			else if (func_179(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_2, iVar1))
			{
				if (func_425(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_29[iVar0 /*5*/][iVar1]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_29[iVar0 /*5*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
				{
					if (!func_426(iVar0, iVar1))
					{
						vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_427(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_427(iVar0, iVar1) };
					}
					if (func_428(iVar0, iVar1))
					{
						if (!func_429(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_430(iVar0, iVar1))
							{
								iVar13 = PED::_CREATE_META_PED_ASSET(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, true, false, false);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_29[iVar0 /*5*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_431(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_5, Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_4, func_427(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_29[iVar0 /*5*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_29[iVar0 /*5*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1086; //curOff = 573
							}
							else if (!func_432(&(Local_13.f_29[iVar0 /*5*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_29[iVar0 /*5*/][iVar1]);
								if (func_425(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_29[iVar0 /*5*/][iVar1]))
										{
											NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_29[iVar0 /*5*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/].f_2), iVar1);
								if (func_433(iVar0, iVar1))
								{
									TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
									GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
								}
								if (func_434(iVar0, iVar1))
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
								}
								if (func_435(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_SET_ENTITY_FADE_IN(iVar13);
								}
								if (func_428(iVar0, iVar1))
								{
									ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
								}
								vVar4 = { func_436(iVar0, iVar1) };
								if (!func_249(vVar4))
								{
									if (vVar4.x == 0f && vVar4.y == 0f)
									{
										if (vVar4.z != 0f)
										{
											ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
										}
									}
									else
									{
										ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
										if (!func_437(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_438(vVar4.x)), MISC::ABSF(func_438(vVar4.y))) };
											vVar27 = { func_439(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_440(iVar0, iVar1))
								{
									func_441(iVar0, iVar1, 1);
								}
								if (func_442(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_INVINCIBLE(iVar13, true);
								}
								bVar3 = true;
							}
							else
							{
								iVar1++;
							}
							iVar0++;
							if (bVar3)
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
}

bool func_259(int iParam0)
{
	return func_190(Local_1172.f_5, iParam0);
}

bool func_260(int iParam0)
{
	return func_190(Local_1172.f_6, iParam0);
}

void func_261()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_443(&(Local_13.f_50[iVar0 /*3*/]), func_183(iVar0));
		iVar0++;
	}
}

bool func_262()
{
	vector3 vVar0;

	if (func_267() && !func_444(0, 1133903872 /* Float: 300f */, 0))
	{
		return true;
	}
	if (Local_13.f_7 == 6)
	{
		if (func_333())
		{
			if (PED::IS_PED_ON_MOUNT(func_264(0)))
			{
				return true;
			}
			if (!func_263(64, 0))
			{
				return false;
			}
			return (ENTITY::IS_ENTITY_DEAD(func_264(0)) || !func_444(0, 1124859904 /* Float: 140f */, 0));
		}
		else
		{
			vVar0 = { PED::GET_PED_BONE_COORDS(func_264(0), 45454, 0f, 0f, 0f) };
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar0, 0.1f) > 0)
			{
				func_330(64);
			}
			return !func_444(0, 1125515264 /* Float: 150f */, 0);
		}
	}
	return false;
}

bool func_263(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_190(Local_1172.f_19.f_4, iParam0);
	}
	else
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar1 = func_190(Local_1172.f_19.f_4, iParam0);
		if (bVar1 && !func_190(Local_83[iVar0 /*34*/].f_1, iParam0))
		{
			func_246(&(Local_83[iVar0 /*34*/].f_1), iParam0);
		}
		return bVar1;
	}
	return false;
}

int func_264(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/];
}

bool func_265(int iParam0)
{
	return !func_366(iParam0, 4);
}

bool func_266(int iParam0, int iParam1)
{
	return func_445(iParam0, iParam1);
}

bool func_267()
{
	return (func_135(32) || func_134(32, 255));
}

void func_268()
{
	int iVar0;

	if (!func_134(32, 255))
	{
		func_446(Local_1172.f_1, Local_1172.f_3);
		if (!func_134(1024, 255))
		{
			func_447(Local_1172.f_1);
			func_151(1024);
		}
		iVar0 = func_373(Local_1172.f_1, Local_1172.f_2);
		func_448(iVar0);
		func_449(iVar0);
		func_149(2);
		func_450(Local_1172.f_9);
		func_451(Local_1172.f_1);
		func_452(Local_1172.f_1, Local_1172.f_2, Local_1172.f_3);
		if (func_453(Local_1172.f_1))
		{
			func_454(0, 3.031687E-09f);
			func_149(1024);
		}
		func_151(32);
	}
}

int func_269()
{
	return Local_13.f_7;
}

void func_270(int iParam0)
{
	Local_13.f_7 = iParam0;
}

void func_271()
{
	if (func_267())
	{
		func_270(1);
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 3000 && !func_252(512)) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 9000) && !func_267())
	{
		if (!func_455(0) && !func_444(0, 1106247680 /* Float: 30f */, 0))
		{
			func_121(512);
			func_456(0, 2.301389E+24f, 0, Local_13.f_7.f_7);
			Local_13.f_7.f_7++;
			if (Local_13.f_7.f_7 > 3)
			{
				Local_13.f_7.f_7 = 0;
			}
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
}

void func_272()
{
	if (func_263(64, 0))
	{
		Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_270(2);
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 9500)
	{
		if (!func_455(0))
		{
			func_457();
		}
	}
}

void func_273()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
	{
		if (func_263(32, 0) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
		{
			Local_13.f_7.f_3 = func_458();
		}
	}
	if (func_263(1024, 1) && !func_252(1))
	{
		Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_121(1);
	}
	if (func_252(1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
	{
		if (func_266(0, 1))
		{
			Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_270(3);
		}
	}
	if (func_263(256, 1))
	{
		func_270(4);
	}
}

void func_274()
{
	if (func_263(512, 1) || !func_444(0, 1120403456 /* Float: 100f */, 0))
	{
		func_270(6);
	}
}

void func_275()
{
	if (!func_263(1.504633E-36f, 0))
	{
		if ((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000 && !func_455(0)) && !func_336(func_264(0), 2.380413E+37f))
		{
			if (!func_252(2))
			{
				func_456(11, -7.151378E+23f, 0, 0);
				func_121(2);
				Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else if (func_252(2))
			{
				Local_13.f_7.f_12 = 1;
				func_330(1.504633E-36f);
			}
		}
	}
	else
	{
		if (Local_13.f_7.f_4 == 255)
		{
			Local_13.f_7.f_4 = func_459(0);
		}
		if (func_263(4096, 0) && !func_252(4))
		{
			Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_121(4);
		}
		func_266(0, 0);
		func_460();
	}
	if (func_263(256, 1))
	{
		func_270(4);
	}
}

void func_276()
{
	if (func_267())
	{
		func_270(1);
		Local_13.f_7.f_9 = func_461();
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 3000 && !func_252(512)) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000) && !func_267())
	{
		if (!func_455(0) && !func_444(0, 1106247680 /* Float: 30f */, 0))
		{
			func_121(512);
			Local_13.f_7.f_7++;
			if ((Local_13.f_7.f_7 % 3) == 0)
			{
				func_456(6, 2.301389E+24f, 0, Local_13.f_7.f_7);
			}
			else
			{
				func_456(0, 2.301389E+24f, 0, Local_13.f_7.f_7);
			}
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
}

void func_277()
{
	if (func_263(64, 0))
	{
		Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_270(2);
	}
	if (func_461() == 1 && !func_462(3))
	{
		func_463(3, 1);
	}
	if ((func_461() != Local_13.f_7.f_9 && func_461() > 0) && !func_455(0))
	{
		func_456(17, 2.301389E+24f, 0, Local_13.f_7.f_8);
		Local_13.f_7.f_9 = func_461();
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (func_464() && !func_455(0))
	{
		if (!func_252(16384))
		{
			func_121(16384);
			func_456(20, 2.301389E+24f, 0, Local_13.f_7.f_8);
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (!func_252(32768) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 8000)
		{
			func_121(32768);
			func_456(20, 2.301389E+24f, 0, Local_13.f_7.f_8);
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 9000)
	{
		if (!func_455(0))
		{
			if (!func_361())
			{
				if (func_263(4, 0))
				{
					func_456(3, 2.301389E+24f, 0, Local_13.f_7.f_8);
				}
				else
				{
					func_456(2, 2.301389E+24f, 0, Local_13.f_7.f_8);
				}
			}
			else if (func_263(65536, 1))
			{
				if (!func_444(0, 1112014848 /* Float: 50f */, 0) && !func_252(65536))
				{
					func_456(23, 2.301389E+24f, 0, Local_13.f_7.f_8);
					func_121(65536);
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					return;
				}
				else if (func_252(65536))
				{
					if (func_444(0, 1108082688 /* Float: 35f */, 0))
					{
						func_456(24, 2.301389E+24f, 0, Local_13.f_7.f_8);
						func_465(65536);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						Local_13.f_7.f_8 = 2;
					}
					return;
				}
				if (Local_13.f_7.f_8 == 1)
				{
					func_456(21, 2.301389E+24f, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else if (Local_13.f_7.f_8 < 4)
				{
					func_456(22, 2.301389E+24f, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else if (Local_13.f_7.f_8 < 5)
				{
					func_456(7, 2.301389E+24f, 0, Local_13.f_7.f_8);
					Local_13.f_7.f_8++;
				}
				else
				{
					func_456(6, 2.301389E+24f, 0, Local_13.f_7.f_8);
				}
			}
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
}

void func_278()
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
	{
		if (func_263(32, 0) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
		{
			Local_13.f_7.f_3 = func_458();
		}
	}
	if (func_263(1024, 1) && !func_252(1))
	{
		Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_121(1);
	}
	if (func_252(1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
	{
		if (func_266(0, 1))
		{
			Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_270(3);
		}
	}
	if (func_263(256, 1))
	{
		func_270(4);
	}
}

void func_279()
{
	if ((func_263(512, 1) || ENTITY::IS_ENTITY_DEAD(func_264(0))) || !func_444(0, 1120403456 /* Float: 100f */, 0))
	{
		func_270(6);
	}
}

void func_280()
{
	if (!func_263(1.504633E-36f, 0))
	{
		if ((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000 && !func_455(0)) && !func_336(func_264(0), 2.380413E+37f))
		{
			if (!func_252(2))
			{
				func_456(11, -7.151378E+23f, 0, 0);
				func_121(2);
				Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			else if (func_252(2))
			{
				Local_13.f_7.f_12 = 1;
				func_330(1.504633E-36f);
			}
		}
	}
	else
	{
		if (Local_13.f_7.f_4 == 255)
		{
			Local_13.f_7.f_4 = func_459(0);
		}
		if (func_263(4096, 0) && !func_252(4))
		{
			Local_13.f_7.f_5 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_121(4);
		}
		func_266(0, 0);
		func_460();
	}
	if (func_263(256, 1))
	{
		func_270(4);
	}
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_282(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	if (!func_248(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_283(var uParam0, int iParam1)
{
	func_466(uParam0, iParam1);
}

void func_284(var uParam0, int iParam1)
{
	func_467(uParam0, iParam1);
}

void func_285(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_468(&Var0, iParam0))
			{
				func_469(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_286(int iParam0)
{
}

void func_287(int iParam0)
{
}

int func_288(int iParam0)
{
	return iParam0;
}

void func_289(int iParam0)
{
	int iVar0;

	if (func_470(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 1)
		{
			if (func_471(iParam0, func_288(iVar0)))
			{
				if (!func_472(iParam0, func_288(iVar0)))
				{
					if (func_473(iParam0, iVar0))
					{
						func_474(Local_1172.f_752.f_15[iVar0], 0, 0);
						func_475(iParam0, func_288(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

char* func_290()
{
	return "script@beat@wilderness@suspensiontrap@handover";
}

bool func_291()
{
	if (func_477(func_476(0)))
	{
		if (func_477(func_476(1)))
		{
			return func_477("script_re@suspension_trap@handover@enter");
		}
	}
	return false;
}

char* func_292()
{
	switch (func_231())
	{
		case 0:
			return "0726_a_m_m_guatownfolk_01_hispanic_04";
		case 1:
			return "0896_A_M_M_Civ_Poor_Hispanic_AVOID_01";
		default:
			break;
	}
	return "";
}

bool func_293()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (MISC::IS_BIT_SET(Local_1172.f_131.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_478(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1172.f_131.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1172.f_131.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_1172.f_131.f_3), iVar0);
				}
			}
		}
		iVar0++;
	}
	if (bVar1)
	{
		return false;
	}
	return true;
}

bool func_294()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_424(iVar0, iVar1);
				if (func_479(iVar1))
				{
					if (Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_IS_META_PED_ASSET_VALID(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_6 = PED::_REQUEST_META_PED_ASSET_BUNDLE(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_HAS_META_PED_ASSET_LOADED(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/].f_1), iVar1);
					}
				}
				else if (func_480(iVar1))
				{
					WEAPON::_REQUEST_WEAPON_ASSET(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_5, -1, false);
					if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @452; //curOff = 348
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @452; //curOff = 408
					}
					else if (!MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/].f_1), iVar1);
					}
				}
			}
			iVar1++;
		}
		iVar0++;
	}
	if (bVar2)
	{
		return false;
	}
	return true;
}

bool func_295()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	int iVar13;
	float fVar14;
	vector3 vVar15;
	vector3 vVar18;
	vector3 vVar21;
	vector3 vVar24;
	vector3 vVar27;

	bVar3 = false;
	vVar4 = { 0f, 0f, 0f };
	vVar7 = { 0f, 0f, 0f };
	vVar10 = { Local_1172.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			iVar2 = func_424(iVar0, iVar1);
			if (func_179(iVar0, iVar1))
			{
			}
			else if (!func_180(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_2, iVar1))
					{
						if (func_425(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar0 /*5*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_29[iVar0 /*5*/][iVar1]))
								{
									NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_29[iVar0 /*5*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_1172.f_228[iVar0 /*62*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_426(iVar0, iVar1))
				{
					vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_427(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_427(iVar0, iVar1) };
				}
				if (func_428(iVar0, iVar1))
				{
					if (!func_429(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_430(iVar0, iVar1))
						{
							iVar13 = PED::_CREATE_META_PED_ASSET(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, false, false, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_431(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_5, Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/].f_4, func_427(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @830; //curOff = 446
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_1172.f_228[iVar0 /*62*/].f_2), iVar1);
						if (func_433(iVar0, iVar1))
						{
							TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
							GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
						}
						if (func_434(iVar0, iVar1))
						{
							ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
						}
						if (func_435(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_SET_ENTITY_FADE_IN(iVar13);
						}
						if (func_428(iVar0, iVar1))
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
						}
						vVar4 = { func_436(iVar0, iVar1) };
						if (!func_249(vVar4))
						{
							if (vVar4.x == 0f && vVar4.y == 0f)
							{
								if (vVar4.z != 0f)
								{
									ENTITY::SET_ENTITY_HEADING(iVar13, vVar4.z);
								}
							}
							else
							{
								ENTITY::SET_ENTITY_ROTATION(iVar13, vVar4, 2, true);
								if (!func_437(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_438(vVar4.x)), MISC::ABSF(func_438(vVar4.y))) };
									vVar27 = { func_439(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_1172.f_228[iVar0 /*62*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_440(iVar0, iVar1))
						{
							func_441(iVar0, iVar1, 1);
						}
						bVar3 = true;
					}
					else
					{
						iVar1++;
					}
					iVar0++;
					if (bVar3)
					{
						return false;
					}
					return true;
				}
			}
		}
	}
}

void func_296(struct<2> Param0)
{
	if (func_371(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_371(Param0)))
	{
		STATS::_0x99230691875FC218(func_369(Param0), func_371(Param0), Global_34);
	}
}

void func_297()
{
	int iVar0;
	int iVar1;

	if (!func_222(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_481(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_298()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 4)
		{
			if (func_180(iVar1, iVar2))
			{
			}
			else if (func_179(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar1 /*5*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_29[iVar1 /*5*/][iVar2]);
				Local_1172.f_228[iVar1 /*62*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_425(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_29[iVar1 /*5*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_29[iVar1 /*5*/][iVar2]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_29[iVar1 /*5*/][iVar2]);
						}
					}
				}
				if (func_433(iVar1, iVar2))
				{
					TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
					GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
				}
			}
			else if (0 != func_424(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_299()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_10))
		{
			Local_1172.f_19.f_105 = NETWORK::_NET_TO_ANIM_SCENE(Local_13.f_7.f_10);
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1172.f_19.f_105))
			{
			}
		}
	}
}

void func_300()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (func_482(Local_13.f_7.f_11))
		{
			Local_1172.f_19.f_106 = NETWORK::NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(Local_13.f_7.f_11);
			if (!PHYSICS::DOES_ROPE_EXIST(Local_1172.f_19.f_106))
			{
			}
		}
	}
}

Vector3 func_301()
{
	return Local_1172.f_15;
}

void func_302(var uParam0, vector3 vParam1, int iParam4, var uParam5, bool bParam6)
{
	int iVar0;

	iVar0 = 61;
	if (bParam6)
	{
		iVar0 |= 2 | 256;
	}
	func_483(uParam0, vParam1, iParam4, 1, iVar0, 0);
}

void func_303()
{
	int iVar0;

	iVar0 = func_264(0);
	PED::SET_PED_CAN_BE_TARGETTED(iVar0, false);
	TASK::SET_PED_PATH_DEEP_SNOW_COST_MODIFIER(iVar0, 0f);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 0, false);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 1, false);
	PED::SET_PED_CONFIG_FLAG(iVar0, 88, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 264, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 103, false);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 512);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 262144);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 8192);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 16);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 2);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 1);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 16384);
	PED::SET_RAGDOLL_BLOCKING_FLAGS(iVar0, 32768);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 3, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 7, false);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, -8.657245E-33f);
	PED::_0xE50C9816B3F22D8B(iVar0, 1284.666f, 0f);
	func_484(iVar0, 1);
	ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, 20);
	ENTITY::SET_ENTITY_HEALTH(iVar0, 20, 0);
	ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
	PED::_0x4F27603E44A8E4C0(iVar0, 10, true);
}

var func_304(int iParam0)
{
	return func_485(0, iParam0);
}

void func_305()
{
	ENTITY::SET_ENTITY_VISIBLE(func_304(1), false);
	PHYSICS::_ATTACH_ENTITIES_TO_ROPE_2(Local_1172.f_19.f_106, func_304(1), func_304(0), 0f, 0f, 0f, 0f, 0f, 0f, 0, 0);
	func_121(1024);
}

void func_306()
{
	TASK::TASK_PLAY_ANIM(func_264(0), func_476(0), func_486(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, true);
	ENTITY::FREEZE_ENTITY_POSITION(func_264(0), false);
	ENTITY::SET_ENTITY_COLLISION(func_264(0), true, false);
}

Vector3 func_307()
{
	switch (func_244())
	{
		case 0:
			return -989656829, -986965763, 1116844274;
		case 1:
			return -989124312, -986464266, 1099921097;
		case 2:
			return -986274616, -986763967, 1119047411;
		case 3:
			return -987617724, -986268184, 1116534001;
		case 4:
			return -988628567, -989791093, 1118471219;
		case 5:
			return -984098984, -989068646, -1069160805;
		case 6:
			return -983637579, -983294240, -1048721647;
		case 7:
			return -979111495, -981801056, -1059122997;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

bool func_308(int iParam0)
{
	return func_190(Local_1172.f_19.f_2, iParam0);
}

void func_309(int iParam0)
{
	int iVar0;

	iVar0 = func_264(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::_SET_PED_CAN_BE_LASSOED(iVar0, false);
			TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 186, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 388, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			if (func_308(1))
			{
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, Local_1172.f_19.f_103);
			}
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 39, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 43, true);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 163, 3f);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			PED::SET_PED_ACCURACY(iVar0, 100);
			PED::SET_PED_COMBAT_RANGE(iVar0, 0);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 58, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
			PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
			PED::SET_COMBAT_FLOAT(iVar0, 12, 0.2f);
			switch (iParam0)
			{
				case 3:
					PED::_SET_PED_QUALITY(iVar0, 2);
					break;
				case 4:
					PED::_SET_PED_QUALITY(iVar0, 1);
					break;
				case 5:
					PED::_SET_PED_QUALITY(iVar0, 0);
					break;
			}
			PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
			ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, 200);
			ENTITY::SET_ENTITY_HEALTH(iVar0, 200, 0);
			TASK::TASK_COMBAT_ANIMAL_WARN(iVar0, func_264(0), 0);
		}
	}
}

int func_310()
{
	switch (Local_1172.f_4)
	{
		case 0:
			func_487(&(Local_1172.f_19.f_5), func_264(0), "NAT007_POACHER7", 0);
			break;
	}
	return 1;
}

void func_311()
{
	func_488();
	Local_1172.f_19.f_108 = VOLUME::CREATE_VOLUME_SPHERE(func_301(), 0f, 0f, 0f, 40f, 40f, 40f);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Local_1172.f_19.f_108, 4096, 0, 0, -1, -1, 8);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_1172.f_19.f_108, 4096, 0, 0, -1, -1, 8);
}

void func_312(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_489(func_416(iVar0), iParam0);
		iVar0++;
	}
}

void func_313(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_1172.f_473.f_2 = iParam2;
	Local_1172.f_473.f_9 = fParam0;
	Local_1172.f_473.f_10 = fParam1;
	Local_1172.f_473.f_8 = fParam3;
	if (bParam4)
	{
		func_246(&(Local_1172.f_473.f_12), 1);
	}
	else
	{
		func_281(&(Local_1172.f_473.f_12), 1);
	}
}

void func_314(float fParam0, float fParam1)
{
	func_246(&(Local_1172.f_473.f_12), 2);
	Local_1172.f_473.f_7 = fParam1;
	Local_1172.f_473.f_5 = fParam0;
}

void func_315(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_490(uParam0, iParam1, iParam3);
	func_491(uParam0, iParam2, iParam3);
}

int func_316(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(Local_1172.f_473.f_11))
	{
		Local_1172.f_473.f_11 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NB_Trigger");
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_1172.f_473.f_11))
	{
		switch (iParam0)
		{
			case joaat("VOLBOX"):
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLSPHERE"):
				VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLCYLINDER"):
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Local_1172.f_473.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_317(int iParam0)
{
	if (func_492(iParam0, &(Local_1172.f_473.f_13)))
	{
		Local_1172.f_473++;
		return 1;
	}
	return 0;
}

void func_318(int iParam0, float fParam1)
{
	Local_1172.f_752.f_15[iParam0] = fParam1;
}

void func_319(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_1172.f_752.f_1[iParam0]), iParam1);
}

void func_320()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_494(func_493(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_SET_EVENT_TRACKER_FOR_PED(Var1, "MpRandomEvent", 1);
					func_495(&(Local_1172.f_291), Var1);
					func_496(func_493(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_321(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_497(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	if (iVar2 != 0 && (Global_1295619.f_16 - iVar2) < iParam1)
	{
		return true;
	}
	return false;
}

void func_322()
{
	func_498();
	func_499();
	func_500();
}

void func_323()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_501(iVar0, bVar1, iVar2);
		func_502(iVar0, bVar1, iVar2);
		func_503(iVar0, bVar1, iVar2);
		func_504(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_324()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!func_222(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_1172.f_131.f_96)
	{
		bVar8 = true;
		Local_1172.f_131.f_96 = !Local_1172.f_131.f_96;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_1172.f_131.f_74 >= 6)
		{
			Local_1172.f_131.f_74 = 0;
		}
		iVar0 = Local_1172.f_131.f_74;
		Local_1172.f_131.f_74++;
		iVar9 = func_416(iVar0);
		iVar1 = Local_1172.f_131.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_178(iVar9, 4))
		{
			func_481(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_83[iVar3 /*34*/].f_2.f_2[iVar0] > -1f)
			{
				Local_83[iVar3 /*34*/].f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1172.f_131.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1172.f_131.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1172.f_131.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		else
		{
			bVar7 = func_505(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_1172.f_131.f_75, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_1172.f_131.f_75), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_83[iVar3 /*34*/].f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_83[iVar3 /*34*/].f_2.f_1), iVar0);
				}
				func_506(&(Local_1172.f_131.f_76[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_83[iVar3 /*34*/].f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_507(&(Local_1172.f_131.f_76[iVar0 /*3*/])) || func_508(&(Local_1172.f_131.f_76[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_509(&(Local_1172.f_131.f_76[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_83[iVar3 /*34*/].f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_178(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_1172.f_131.f_96, false, 256);
		}
		if (func_178(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_510(iVar9))
						{
							if (!func_422(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_362(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_178(iVar9, 8))
			{
				if (!func_510(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1172.f_131.f_75 != 0)
	{
		if (!func_511(1, 255))
		{
			func_512(1);
		}
	}
	else if (func_511(1, 255))
	{
		func_513(1);
	}
}

void func_325()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;
	int iVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	int iVar31;
	int iVar32;
	int iVar33;

	Var5.f_6 = 1f;
	Var5.f_7 = 1f;
	Var5.f_8 = 1f;
	Var5.f_9 = 1;
	Var5.f_12 = 8;
	iVar20 = 255;
	if (!func_222(&iVar25))
	{
		return;
	}
	func_514();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::IS_WEAPON_A_GUN(iVar26))
	{
		Local_1172.f_291.f_64 = 0;
		Local_83[iVar25 /*34*/].f_11.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == -9.675868E-11f || iVar26 == 5.763438E+22f));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1172.f_291.f_173 >= 6)
		{
			Local_1172.f_291.f_173 = 0;
		}
		iVar1 = Local_1172.f_291.f_173;
		Local_1172.f_291.f_173++;
		iVar22++;
		iVar18 = func_493(iVar1);
		if (!func_515(iVar18))
		{
		}
		else if (func_516(iVar18, &Var5))
		{
			if (func_517(&Var5, iVar18))
			{
				if (func_518(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1))
				{
					func_519(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1);
				}
			}
			else if (!func_518(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1))
			{
				func_520(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_521(iVar18);
				if (func_522(iVar18))
				{
					if (func_523(iVar18))
					{
						if (!func_524(iVar18))
						{
							func_525(iVar18);
						}
					}
					if (func_526(iVar18))
					{
						func_355(iVar18);
					}
				}
				else
				{
					if (func_527(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_528(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_495(&(Local_1172.f_291), Var5);
						}
					}
					if (!func_529(iVar18, 255))
					{
						bVar2 = false;
						bVar3 = false;
						if (func_530(iVar18))
						{
							bVar2 = true;
							bVar3 = true;
						}
						else if (func_531(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_532(Var5, Var5.f_1, &(Local_1172.f_291), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_1172.f_291.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_1172.f_291.f_64), iVar18);
									}
									break;
								case 8:
									if (bVar27)
									{
										if (!WEAPON::_IS_WEAPON_LASSO(iVar26) && !TASK::GET_IS_PED_AIMING_IN_THE_AIR(PLAYER::PLAYER_PED_ID()))
										{
											bVar2 = true;
										}
									}
									break;
								default:
									bVar2 = true;
									break;
							}
						}
						else if ((bVar29 && Var5.f_2 <= 1067450368) && func_533(PLAYER::PLAYER_PED_ID(), Var5, 0.707f) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_534(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_1172.f_291.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_535(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_SET_EVENT_TRACKER_FOR_PED(Var5, "MpRandomEvent", 1);
										func_496(iVar18);
									}
								}
								if (bVar30)
								{
									iVar31 = EVENT::_EVENT_GET_RECENT_EVENT(Var5, 1, 1);
									if (iVar31 != 0)
									{
										iVar32 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(Var5, iVar31, 1, 1);
										if (ENTITY::DOES_ENTITY_EXIST(iVar32) && ENTITY::IS_ENTITY_A_PED(iVar32))
										{
											iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar32);
											if (PED::IS_PED_A_PLAYER(iVar33) && iVar33 == PLAYER::PLAYER_PED_ID())
											{
												switch (iVar31)
												{
													case joaat("EVENT_SHOT_FIRED"):
														if (func_536(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_1172.f_291.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_1172.f_291.f_2 & 4 != 0)
														{
															iVar4 = 4;
															bVar2 = true;
														}
														break;
												}
											}
										}
										EVENT::_0x1A5C5D350068A673(Var5, 1);
									}
								}
								if (!bVar2)
								{
									if (func_537(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_1172.f_291.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_538(iVar18, iVar4, bVar3))
							{
							}
							else
							{
								if (func_518(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1))
								{
									func_519(&(Local_83[iVar25 /*34*/].f_11), 8, iVar1);
								}
								func_463(iVar18, 1);
								if (func_462(iVar18))
								{
									if (!func_539(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_540(iVar18))
											{
											}
											else
											{
												func_541(iVar18);
												func_542(iVar18);
												Jump @1397; //curOff = 1201
												if (func_543(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_1172.f_291.f_175[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1172.f_291.f_175[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_1172.f_291.f_175[iVar18];
																Local_1172.f_291.f_175[iVar18]++;
															}
															iVar24++;
															if (func_544(iVar0, &iVar21, &iVar20, &iVar19))
															{
																if (!func_545(iVar18, iVar20))
																{
																	if (func_529(iVar18, iVar0))
																	{
																		if (!func_546(iVar18, iVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_547(iVar18, iVar20);
																		}
																	}
																}
															}
														}
														iVar23++;
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_326()
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	bool bVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;

	fVar0 = func_548();
	if (Local_1172.f_473.f_4)
	{
		return;
	}
	if (!func_222(&iVar1))
	{
		return;
	}
	if (func_190(Local_83[iVar1 /*34*/].f_30, 1))
	{
		Local_1172.f_473.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_549(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_1172.f_15);
	fVar4 = Local_1172.f_473.f_9;
	fVar5 = Local_1172.f_473.f_10;
	if (func_190(Local_1172.f_473.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_1172.f_473.f_7));
		if (fVar7 > 0f)
		{
			if (func_550(Local_1172.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_1172.f_473.f_6 < 1f)
			{
				Local_1172.f_473.f_6 = (Local_1172.f_473.f_6 + fVar8);
				if (Local_1172.f_473.f_6 > 1f)
				{
					Local_1172.f_473.f_6 = 1f;
				}
			}
		}
		else if (Local_1172.f_473.f_6 > 0f)
		{
			Local_1172.f_473.f_6 = (Local_1172.f_473.f_6 - fVar8);
			if (Local_1172.f_473.f_6 < 0f)
			{
				Local_1172.f_473.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_1172.f_473.f_5) * Local_1172.f_473.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_246(&(Local_83[iVar1 /*34*/].f_30), 1);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_1172.f_473.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_1172.f_473.f_11, false, 0))
	{
		func_246(&(Local_83[iVar1 /*34*/].f_30), 1);
	}
	else if (Local_1172.f_473 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_551(&(Local_1172.f_473.f_13[iVar10 /*9*/]), fVar5, 4f, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_552(&(Local_1172.f_473.f_13), Local_1172.f_473, Local_1172.f_473.f_8))
		{
			func_246(&(Local_83[iVar1 /*34*/].f_30), 1);
		}
	}
	if (func_190(Local_83[iVar1 /*34*/].f_30, 1))
	{
		Local_1172.f_473.f_4 = 1;
	}
}

void func_327()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_553(&(Local_13.f_50[iVar0 /*3*/]), &(Local_1172.f_514[iVar0 /*39*/]), func_183(iVar0));
		iVar0++;
	}
}

bool func_328()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_1172.f_14))
	{
		return false;
	}
	if (func_554())
	{
		return false;
	}
	if (func_555(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

bool func_329(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_556(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return func_190(Local_83[iParam1 /*34*/].f_1, iParam0);
}

void func_330(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID();
	if (func_556(iVar0))
	{
		func_246(&(Local_83[iVar0 /*34*/].f_1), iParam0);
	}
}

bool func_331(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_190(Local_1172.f_19.f_3, iParam0);
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = func_190(Local_1172.f_19.f_4, iParam0);
	if (bVar1 && !func_190(Local_83[iVar0 /*34*/].f_1, iParam0))
	{
		func_246(&(Local_83[iVar0 /*34*/].f_1), iParam0);
		Local_1172.f_19.f_3 = (Local_1172.f_19.f_3 && Local_83[iVar0 /*34*/].f_1);
	}
	return func_190(Local_1172.f_19.f_3, iParam0);
}

void func_332()
{
	PHYSICS::_CREATE_ROPE_WINDING_ABILITY(Local_1172.f_19.f_106, 0, 0, func_228(), true);
	PHYSICS::_0x76BAD9D538BCA1AA(Local_1172.f_19.f_106, 0f);
	PHYSICS::_0xB40EA9E0D2E2F7F3(Local_1172.f_19.f_106, 0.5f);
	func_330(2);
}

bool func_333()
{
	if (Local_1172.f_19.f_106 == 0)
	{
		return false;
	}
	if (Local_1172.f_19.f_106 == 0 || !PHYSICS::DOES_ROPE_EXIST(Local_1172.f_19.f_106))
	{
		return true;
	}
	return PHYSICS::_IS_ROPE_BROKEN(Local_1172.f_19.f_106);
}

int func_334()
{
	return Local_1172.f_19.f_1;
}

bool func_335(bool bParam0)
{
	int iVar0;

	iVar0 = func_264(0);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 512);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 262144);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 8192);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 16);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 16384);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 32768);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 1);
	PED::CLEAR_RAGDOLL_BLOCKING_FLAGS(iVar0, 2);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 7, true);
	if (((bParam0 && !FIRE::IS_ENTITY_ON_FIRE(iVar0)) && !WEAPON::_0x0DE0944ECCB3DF5D(iVar0)) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, 125);
		ENTITY::SET_ENTITY_HEALTH(iVar0, 125, 0);
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		PED::SET_PED_TO_RAGDOLL(iVar0, 3000, 3001, 0, false, false, 0);
		func_484(iVar0, 0);
	}
	PED::SET_PED_CAN_BE_TARGETTED(iVar0, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 0, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 1, true);
	return true;
}

bool func_336(int iParam0, int iParam1)
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

void func_337(bool bParam0)
{
	func_474(-6.325093E+37f, 1, func_239() == 0);
	func_558(func_557(-8.839952E-30f, -2.940688E+24f), 1);
	func_559();
	func_363();
	func_560(1);
	func_561(-6.235462E+23f, 0, 255, 0, 0);
	if (bParam0)
	{
		func_562(6.126567E-26f, 0);
		if (ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(func_264(0), 4.703146E+11f))
		{
		}
	}
}

void func_338()
{
	int iVar0;

	Local_1172.f_19.f_3 = -1;
	Local_1172.f_19.f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1172.f_19.f_4 = (Local_1172.f_19.f_4 || Local_83[iVar0 /*34*/].f_1);
			Local_1172.f_19.f_3 = (Local_1172.f_19.f_3 && Local_83[iVar0 /*34*/].f_1);
		}
		iVar0++;
	}
}

void func_339()
{
	if (func_269() != func_334())
	{
		func_563(func_334(), func_269());
		func_564(Local_13.f_7);
	}
	if (Local_13.f_7.f_11 != 0 && Local_1172.f_19.f_106 == 0)
	{
		func_300();
	}
}

void func_340()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_565(PLAYER::PLAYER_ID()) };
	switch (func_239())
	{
		case 1:
			if (func_334() < 4)
			{
				func_566(0, vVar0, 1123680256 /* Float: 125f */, -4.450028E+35f, 4.185971E-18f, 0, "RE_INTER_STRANGER", 1, 1);
			}
			else
			{
				func_176(0);
			}
			if (func_329(8192, -1, 1) && !func_263(65536, 1))
			{
				iVar3 = 3;
				while (iVar3 <= 5)
				{
					if (!PED::GET_PED_CONFIG_FLAG(func_264(iVar3), 580, true))
					{
						func_566(iVar3, vVar0, 1123680256 /* Float: 125f */, 4.085619E-09f, 4.185971E-18f, 0, 0, 1, 1);
					}
					iVar3++;
				}
			}
			break;
		case 0:
			if (func_334() < 4)
			{
				func_566(0, vVar0, 1123680256 /* Float: 125f */, -4.450028E+35f, 4.185971E-18f, 0, "RE_INTER_STRANGER", 1, 1);
			}
			else
			{
				func_176(0);
			}
			break;
	}
}

void func_341()
{
	if (PED::IS_PED_ON_MOUNT(func_264(0)) && TASK::_IS_PED_LEADING_HORSE(PLAYER::PLAYER_PED_ID()))
	{
		TASK::TASK_STOP_LEADING_HORSE(PLAYER::PLAYER_PED_ID());
	}
}

bool func_342()
{
	return (func_567(0, 1106247680 /* Float: 30f */, 255, 0) || func_329(4, -1, 1));
}

void func_343()
{
	int iVar0;

	iVar0 = func_264(0);
	if ((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_336(iVar0, -2.793181E-34f)) && !func_263(64, 0))
	{
		TASK::TASK_PLAY_ANIM(func_264(0), func_476(0), func_486(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, false);
		PED::SET_PED_KEEP_TASK(func_264(0), true);
	}
	if (Local_13.f_7.f_7 == 1 && !func_308(128))
	{
		POPULATION::_0x2660E7720EDC4BD0(func_301());
		func_120(128);
	}
	if ((!func_267() && func_252(128)) && func_134(8, 255))
	{
		if (func_567(0, 1106247680 /* Float: 30f */, 255, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_455(0))
			{
				func_568(2);
				func_456(1, 2.301389E+24f, 0, 0);
				func_268();
			}
			else if (func_333())
			{
				func_268();
			}
		}
		else if (func_333())
		{
			func_268();
		}
	}
}

void func_344()
{
	int iVar0;
	int iVar1;

	if (func_263(2.350989E-38f, 0) && !func_263(9.403955E-38f, 0))
	{
		iVar0 = func_264(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_455(0))
		{
			func_568(10);
			func_456(4, 1.818904E-28f, 0, 0);
			func_330(9.403955E-38f);
		}
	}
	if (func_333() && !func_263(64, 0))
	{
		iVar1 = func_264(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1) && func_335(1))
		{
			func_330(64);
		}
	}
}

void func_345()
{
	int iVar0;

	if (func_263(524288, 0))
	{
		return;
	}
	if (!func_308(16) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
	{
		func_569();
		func_120(16);
		return;
	}
	if (!func_308(32))
	{
		if (func_567(0, 1112014848 /* Float: 50f */, 255, 0))
		{
			func_120(64);
		}
		func_120(32);
	}
	iVar0 = func_264(0);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!func_263(128, 1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
		{
			if (!func_570())
			{
				func_456(16, 2.301389E+24f, 0, 0);
				func_571(0);
				func_330(131072);
				func_330(128);
			}
			else
			{
				func_456(8, 1.818904E-28f, 0, 0);
			}
			func_330(128);
		}
		else if ((!func_263(1024, 1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 6500) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
		{
			if (!PED::IS_PED_FACING_PED(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3), 10f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3), 0, -1f, -1f, -1f);
				return;
			}
			if (!func_455(0))
			{
				if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3)))
				{
					func_456(10, 1.818904E-28f, 0, 0);
				}
				else
				{
					func_456(9, 1.818904E-28f, 0, 0);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_304(2), true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(func_304(2), func_264(0), PED::GET_PED_BONE_INDEX(func_264(0), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				PED::_0x4F27603E44A8E4C0(iVar0, 10, false);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_1172.f_19.f_110);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				func_330(1024);
			}
		}
	}
}

void func_346()
{
	int iVar0;

	iVar0 = func_264(0);
	if (func_572())
	{
		func_330(8);
	}
	if (!PED::IS_PED_FLEEING(iVar0) && !func_336(iVar0, 6.915501E+28f))
	{
		if (!func_570() || func_263(8, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_573();
				func_330(512);
			}
		}
		else if (func_574(0, 1) < 3f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar0, func_264(1), 20000, -1, 2f, 1, 0, 0);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!PED::IS_PED_FLEEING(iVar0))
		{
			TASK::TASK_FLEE_COORD(iVar0, func_301(), 0, 540672, -1f, -1, func_264(1));
		}
		func_330(512);
	}
}

void func_347()
{
	if (func_575())
	{
		func_576(0, 0, 1);
	}
	if (!func_577())
	{
		func_576(0, 0, 1);
		func_576(0, 1, 1);
	}
	if (!func_570())
	{
		TASK::CLEAR_PED_TASKS(func_264(0), true, false);
		func_456(16, -7.151378E+23f, 0, 0);
		func_330(131072);
		func_571(0);
	}
	if (func_263(1.504633E-36f, 0))
	{
		switch (Local_13.f_7.f_12)
		{
			case 0:
				if (Local_13.f_7.f_4 != 255)
				{
					func_578();
				}
				break;
			case 1:
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
				{
					if (!func_263(4096, 1))
					{
						TASK::TASK_PLAY_ANIM(func_264(0), func_476(1), func_486(9), 1.5f, -1.5f, -1, 26, 0f, false, 0, false, 0, false);
						PED::SET_PED_KEEP_TASK(func_264(0), true);
						func_456(14, -7.151378E+23f, 0, 0);
						func_330(4096);
						func_330(4);
						func_330(131072);
					}
					else if (((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 1000 && func_252(4)) && !func_455(0)) && !func_263(256, 0))
					{
						TASK::CLEAR_PED_TASKS(func_264(0), true, false);
						func_456(15, -7.151378E+23f, 0, 0);
						func_571(0);
					}
				}
				break;
		}
	}
}

void func_348()
{
	int iVar0;

	iVar0 = func_264(0);
	if ((NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && !func_336(iVar0, -2.793181E-34f)) && !func_263(64, 0))
	{
		TASK::TASK_PLAY_ANIM(func_264(0), func_476(0), func_486(0), 8f, -8f, -1, 8197, 0f, false, 0, false, 0, false);
		PED::SET_PED_KEEP_TASK(func_264(0), true);
	}
	func_579();
	if (Local_13.f_7.f_7 == 1 && !func_308(128))
	{
		POPULATION::_0x2660E7720EDC4BD0(func_301());
		func_120(128);
	}
	if ((!func_267() && func_252(128)) && func_134(8, 255))
	{
		if (Local_1172.f_19.f_106 == 0)
		{
			func_300();
		}
		if (func_567(0, 1106247680 /* Float: 30f */, 255, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_455(0))
			{
				func_268();
				func_456(1, 2.301389E+24f, 0, 0);
			}
			else if (func_333())
			{
				func_268();
			}
		}
		else if (func_333())
		{
			func_268();
		}
		else if (func_263(8192, 0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_455(0))
			{
				func_268();
				func_456(1, 2.301389E+24f, 0, 0);
			}
		}
	}
}

void func_349()
{
	int iVar0;

	if (func_333())
	{
		iVar0 = func_264(0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_263(64, 1) && func_335(1))
			{
				func_330(64);
				return;
			}
		}
	}
	if (((func_361() && !func_263(65536, 1)) && !func_455(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
	{
		func_456(18, 1.818904E-28f, 0, 0);
		func_330(65536);
	}
}

void func_350()
{
	int iVar0;
	int iVar1;

	if (func_263(524288, 0))
	{
		return;
	}
	iVar0 = func_264(0);
	if ((!func_361() || func_263(16384, 0)) || func_263(32768, 0))
	{
		if ((!func_263(16384, 0) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 4500) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			TASK::TASK_FLEE_COORD(iVar0, func_301(), 4, 0, 99999f, -1, func_264(1));
			PED::SET_PED_KEEP_TASK(iVar0, true);
			func_456(16, 4.986218E+26f, 0, 0);
			func_330(16384);
		}
		if (!func_263(32768, 0))
		{
			iVar1 = 3;
			while (iVar1 <= 5)
			{
				if (((ENTITY::DOES_ENTITY_EXIST(func_264(iVar1)) && !ENTITY::IS_ENTITY_DEAD(func_264(iVar1))) && func_515(iVar1)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(iVar1)))
				{
					func_580(iVar1, 0);
					PED::REGISTER_TARGET(func_264(iVar1), iVar0, true);
					TASK::TASK_COMBAT_PED(func_264(iVar1), iVar0, 2.350989E-38f, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(func_264(iVar1), 27, true);
					func_330(32768);
					return;
				}
				iVar1++;
			}
		}
		if ((func_263(16384, 0) && func_263(32768, 0)) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
		{
			func_330(256);
		}
		return;
	}
	if (!func_308(16) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
	{
		func_569();
		func_120(16);
		return;
	}
	if (!func_308(32))
	{
		if (func_567(0, 1112014848 /* Float: 50f */, 255, 0))
		{
			func_120(64);
		}
		func_120(32);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!func_263(128, 1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 2000)
		{
			if (!func_570())
			{
				func_456(16, 2.301389E+24f, 0, 0);
				func_571(0);
				func_330(131072);
				func_330(256);
			}
			else
			{
				func_456(8, 1.818904E-28f, 0, 0);
			}
			func_330(128);
		}
		else if ((!func_263(1024, 1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 6500) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_3))
		{
			if (!PED::IS_PED_FACING_PED(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3), 10f))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3), 0, -1f, -1f, -1f);
				return;
			}
			if (!func_455(0))
			{
				if (PED::IS_PED_ON_MOUNT(PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3)))
				{
					func_456(10, 1.818904E-28f, 0, 0);
				}
				else
				{
					func_456(9, 1.818904E-28f, 0, 0);
				}
				ENTITY::SET_ENTITY_VISIBLE(func_304(2), true);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(func_304(2), func_264(0), PED::GET_PED_BONE_INDEX(func_264(0), 7966), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
				PED::_0x4F27603E44A8E4C0(iVar0, 10, false);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_1172.f_19.f_110);
				PED::SET_PED_KEEP_TASK(iVar0, true);
				func_330(1024);
			}
		}
	}
}

void func_351()
{
	int iVar0;

	iVar0 = func_264(0);
	if (func_572())
	{
		func_330(8);
	}
	if (!PED::GET_PED_CONFIG_FLAG(iVar0, 488, true) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 488, true);
	}
	if (!PED::IS_PED_FLEEING(iVar0) && !func_336(iVar0, 6.915501E+28f))
	{
		if (!func_570() || func_263(8, 0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				func_573();
				func_330(512);
			}
		}
		else if (func_574(0, 1) < 3f && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar0, func_264(1), 20000, -1, 2f, 1, 0, 0);
		}
	}
	else if (PED::IS_PED_ON_MOUNT(iVar0) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (!PED::IS_PED_FLEEING(iVar0))
		{
			TASK::TASK_FLEE_COORD(iVar0, func_301(), 0, 540672, -1f, -1, func_264(1));
		}
		func_330(512);
	}
}

void func_352()
{
	if (func_575())
	{
		func_576(0, 0, 1);
	}
	if (!func_577())
	{
		func_576(0, 0, 1);
		func_576(0, 1, 1);
	}
	if (!func_570())
	{
		TASK::CLEAR_PED_TASKS(func_264(0), true, false);
		func_456(16, -7.151378E+23f, 0, 0);
		func_330(131072);
		func_571(0);
	}
	if (func_263(1.504633E-36f, 0))
	{
		switch (Local_13.f_7.f_12)
		{
			case 0:
				if (Local_13.f_7.f_4 != 255)
				{
					func_578();
				}
				break;
			case 1:
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
				{
					if (!func_263(4096, 1))
					{
						TASK::TASK_PLAY_ANIM(func_264(0), func_476(1), func_486(9), 1000f, -1.5f, -1, 26, 0f, false, 0, false, 0, false);
						PED::SET_PED_KEEP_TASK(func_264(0), true);
						func_456(14, -7.151378E+23f, 0, 0);
						func_330(4096);
						func_330(4);
						func_330(131072);
					}
					else if (((NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 1000 && func_252(4)) && !func_455(0)) && !func_263(256, 0))
					{
						TASK::CLEAR_PED_TASKS(func_264(0), true, false);
						func_456(15, -7.151378E+23f, 0, 0);
						func_571(0);
					}
				}
				break;
		}
	}
}

bool func_353()
{
	return func_581(1, 255);
}

bool func_354()
{
	if ((!PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()) || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || UISTICKYFEED::_UI_STICKY_FEED_IS_CHANNEL_ACTIVE(1))
	{
		return true;
	}
	return false;
}

void func_355(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_83[iVar0 /*34*/].f_11.f_5[iParam0]));
}

void func_356(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_519(&(Local_83[iVar0 /*34*/].f_11), 3, iParam0);
}

void func_357(int iParam0)
{
	func_281(&(Local_1172.f_19.f_2), iParam0);
}

bool func_358(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_359(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_582(iParam0))
	{
		return false;
	}
	iVar0 = func_264(iParam0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true) && !PED::GET_PED_CONFIG_FLAG(iVar0, 11, true))
	{
		iVar1 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == iParam1)
			{
				return true;
			}
		}
		if (bParam2)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, iParam1, false, false))
			{
				return true;
			}
		}
	}
	return false;
}

void func_360()
{
	if (func_329(262144, -1, 1))
	{
		func_474(6.384474E-15f, 1, 0);
	}
	else
	{
		func_474(-2.492079E+20f, 0, 0);
	}
}

bool func_361()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 3;
	while (iVar1 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_264(iVar1)) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_264(iVar1), PLAYER::PLAYER_PED_ID(), true, true))
		{
			func_330(4);
		}
		if ((!ENTITY::IS_ENTITY_DEAD(func_264(iVar1)) && !PED::GET_PED_CONFIG_FLAG(func_264(iVar1), 580, true)) && func_515(iVar1))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_362(int iParam0, int iParam1)
{
	func_281(&(Local_1172.f_131.f_7[iParam0 /*11*/].f_2), iParam1);
}

void func_363()
{
	if (!func_69(2))
	{
		return;
	}
	func_149(8);
}

void func_364()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (func_494(func_493(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(Var1);
			}
		}
		iVar0++;
	}
}

void func_365(int iParam0, int iParam1)
{
	func_281(&(Local_1172.f_514[iParam0 /*39*/].f_5), iParam1);
}

bool func_366(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_514[iParam0 /*39*/].f_5, iParam1);
}

int func_367(int iParam0)
{
	return func_264(iParam0);
}

void func_368(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_583(Local_1172.f_514[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_584(&(Local_1172.f_514[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::COPY_SCRIPT_STRUCT(&(Local_1172.f_514[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_365(iParam0, 2);
}

int func_369(var uParam0, var uParam1)
{
	return uParam0;
}

int func_370(int iParam0)
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

int func_371(struct<2> Param0)
{
	return func_585(Param0);
}

void func_372(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_369(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_587(func_586(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_217(iVar5) == func_586(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_588(iVar4);
			if (!func_589(iVar6, 0))
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

int func_373(int iParam0, int iParam1)
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
			func_32(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_374(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_590(&Var0);
}

var func_375(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_59;
		default:
			break;
	}
	return Global_1901671.f_242.f_55;
}

var func_376(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_61;
		default:
			break;
	}
	return Global_1901671.f_242.f_57;
}

var func_377(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1901671.f_242.f_60;
		default:
			break;
	}
	return Global_1901671.f_242.f_56;
}

struct<2> func_378(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_591(-1.11244E+21f);
		case 2:
			return func_591(-0.03766548f);
		case 3:
			return func_591(20967.98f);
		case 4:
			return func_591(20967.98f);
	}
	return Var0;
}

bool func_379(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

int func_380(int iParam0)
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

int func_381(int iParam0)
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

void func_382(bool bParam0)
{
	func_198(bParam0, 0);
	func_198(bParam0, 1);
	func_198(bParam0, 3);
	func_196(bParam0);
}

void func_383(bool bParam0)
{
	func_197(bParam0);
	func_592(bParam0, 0, 3);
}

void func_384(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_385(bool bParam0)
{
	func_198(bParam0, 0);
	func_384(bParam0, 0);
	func_384(bParam0, 1);
	func_384(bParam0, 4);
	func_384(bParam0, 5);
}

void func_386(bool bParam0)
{
	func_198(bParam0, 1);
	func_384(bParam0, 2);
	func_384(bParam0, 3);
	func_384(bParam0, 6);
	func_384(bParam0, 7);
	func_201(bParam0, 2);
}

void func_387(bool bParam0)
{
	func_198(bParam0, 0);
	func_384(bParam0, 0);
	func_384(bParam0, 1);
	func_384(bParam0, 2);
}

void func_388(bool bParam0)
{
	func_198(bParam0, 1);
	func_196(bParam0);
}

void func_389(bool bParam0)
{
	func_198(bParam0, 2);
	func_384(bParam0, 3);
}

void func_390(bool bParam0)
{
	func_198(bParam0, 3);
	func_384(bParam0, 4);
}

void func_391(bool bParam0)
{
	func_384(bParam0, 0);
	func_384(bParam0, 1);
}

void func_392(bool bParam0)
{
	func_384(bParam0, 2);
	func_384(bParam0, 3);
}

void func_393(bool bParam0)
{
	func_384(bParam0, 4);
	func_384(bParam0, 5);
}

bool func_394(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_395(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_396(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_397(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

bool func_398(int iParam0, bool bParam1)
{
	if (iParam0 > -1 && iParam0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!bParam1)
		{
			return true;
		}
		return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
	}
	return false;
}

void func_399(int iParam0, int iParam1)
{
	if (Local_1172.f_514[iParam0 /*39*/].f_4 == iParam1)
	{
		return;
	}
	Local_1172.f_514[iParam0 /*39*/].f_4 = iParam1;
	func_593(iParam0, 8);
}

int func_400(var uParam0)
{
	return uParam0;
}

void func_401(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_366(iParam0, 4))
		{
			func_593(iParam0, 4);
		}
	}
	else if (func_366(iParam0, 4))
	{
		func_365(iParam0, 4);
	}
}

void func_402(int iParam0, float fParam1)
{
	if (fParam1 > 0f)
	{
		Local_1172.f_514[iParam0 /*39*/].f_2 = fParam1;
	}
}

void func_403(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_593(iParam0, 16);
	}
	else
	{
		func_365(iParam0, 16);
	}
}

void func_404(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = fParam3;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_594(iParam0))
	{
		func_595(iParam0, iParam1, 16);
	}
}

void func_405(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_595(iParam0, iParam1, 1);
	}
	else
	{
		func_596(iParam0, iParam1, 1);
	}
	if (bParam3 && func_594(iParam0))
	{
		func_597(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_406(var uParam0)
{
	func_598(uParam0, 0);
	func_599(uParam0, 0);
	func_407(uParam0, 1);
	func_600(uParam0, 1);
	func_601(uParam0, 0);
	func_602(uParam0, 1);
	func_603(uParam0, 1, 1, 1);
}

void func_407(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 256);
	}
	else
	{
		func_246(&(uParam0->f_2), 256);
	}
}

void func_408(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 4);
	}
	else
	{
		func_246(&(uParam0->f_2), 4);
	}
}

void func_409(var uParam0)
{
	func_605(uParam0, (func_604(uParam0) - 6f));
	func_606(uParam0, 1);
}

void func_410(var uParam0)
{
	func_598(uParam0, 0);
	func_599(uParam0, 0);
	func_407(uParam0, 0);
	func_601(uParam0, 0);
	func_603(uParam0, 1, 1, 1);
}

void func_411(var uParam0)
{
	func_607(uParam0, 1);
	func_608(uParam0, 1);
	func_609(uParam0, 1);
}

void func_412(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 131072);
	}
	else
	{
		func_246(&(uParam0->f_2), 131072);
	}
}

void func_413(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 4);
	}
	else
	{
		func_281(uParam0, 4);
	}
}

bool func_414(int iParam0, var uParam1)
{
	int iVar0;

	*uParam1 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0 * 10) * 1023410176));
	uParam1->f_2 = (iParam0 * 10 % 32);
	iVar0 = (32 - uParam1->f_2);
	if (iVar0 < 10)
	{
		uParam1->f_1 = *uParam1 + 1;
		uParam1->f_3 = (9 - iVar0);
	}
	else
	{
		uParam1->f_1 = *uParam1;
		uParam1->f_3 = uParam1->f_2 + 9;
	}
	return (((*uParam1 > -1 && uParam1->f_1 > -1) && *uParam1 < 3) && uParam1->f_1 < 3);
}

int func_415(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

int func_416(int iParam0)
{
	return iParam0;
}

void func_417(int iParam0, int iParam1, float fParam2)
{
	Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_2 = fParam2;
}

void func_418(int iParam0)
{
	func_610(0, iParam0);
}

void func_419(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

void func_420(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_246(&(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1), 64);
	}
	else
	{
		func_281(&(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1), 64);
	}
}

int func_421(int iParam0)
{
	if (!func_191(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_422(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1172.f_15 };
	iVar7 = 0;
	iVar8 = func_478(iParam0);
	iVar9 = func_611(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_22[iParam0]))
		{
			iVar9 = func_611(iParam0);
			fVar0 = func_254(iParam0);
			if (!func_190(Local_1172.f_131.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_253(iParam0)) };
			}
			else
			{
				vVar1 = { func_253(iParam0) };
			}
			if (!func_612(&(Local_13.f_22[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_22[iParam0]);
				if (ENTITY::DOES_ENTITY_EXIST(iVar7))
				{
					ENTITY::_SET_ENTITY_FADE_IN(iVar7);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar7, true);
					PED::SET_PED_CONFIG_FLAG(iVar7, 178, false);
					if (PED::IS_PED_HUMAN(iVar7))
					{
						WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iVar7, false);
						WEAPON::_0x431240A58484D5D0(iVar7, false);
						WEAPON::_0x45E57FDD531C9477(iVar7, false);
					}
					if (iVar9 != 0)
					{
						PED::_EQUIP_META_PED_OUTFIT(iVar7, iVar9);
						PED::_UPDATE_PED_VARIATION(iVar7, func_178(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_613(iVar7, 1);
					}
					if (func_614(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_615(iParam0))
						{
							if (func_614(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_423(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_22[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_22[iParam0]);
						}
					}
					*bParam2 = 1;
					return false;
				}
				else
				{
					*iParam1 = 1;
				}
			}
		}
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_13.f_22[iParam0])))
		{
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_423(int iParam0)
{
	return func_178(iParam0, 128);
}

int func_424(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_2;
}

bool func_425(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_426(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_427(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_7;
}

bool func_428(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_13;
}

bool func_429(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_616(*uParam0, 0f, 0f, 0f))
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

bool func_430(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1172.f_228[iParam0 /*62*/].f_3, iParam1);
}

bool func_431(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_432(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_617(iParam1))
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

bool func_433(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_434(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_435(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_436(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_10;
}

bool func_437(int iParam0, int iParam1, int iParam2)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_438(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	if (fParam0 < 0f)
	{
		fVar0 = (fVar0 + 1135869952);
	}
	else if (fParam0 >= 1135869952)
	{
		fVar0 = (fVar0 - 1135869952);
	}
	return fVar0;
}

Vector3 func_439(vector3 vParam0)
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

bool func_440(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_441(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_442(int iParam0, int iParam1)
{
	return func_190(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_443(var uParam0, int iParam1)
{
	switch (uParam0->f_2)
	{
		case 0:
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
			{
				uParam0->f_2 = 1;
			}
			break;
		case 1:
			if (!func_618(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_619(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_621(iParam1, func_620(Local_13.f_50.f_19, iParam1), func_223(iParam1));
				func_122(&(Local_13.f_50.f_19), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_444(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_622(iVar0))
			{
				if (func_567(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_445(int iParam0, int iParam1)
{
	if (func_623(iParam0))
	{
		return 0;
	}
	if (Local_13.f_50[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_50[iParam0 /*3*/] = iParam1;
	return 1;
}

void func_446(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_497(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_124(&Var0, 4) && func_624(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_447(int iParam0)
{
	func_625(iParam0);
}

void func_448(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_131(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_626(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_132(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_591(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_591(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_591(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_591(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_449(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_590(&Var0);
}

void func_450(struct<2> Param0)
{
	struct<32> Var0;

	if (func_371(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_371(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_371(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_627(Param0, &Var0))
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

void func_451(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_497(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_452(int iParam0, int iParam1, int iParam2)
{
	struct<29> Var0;
	int iVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	iVar31 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (iVar31 > -1 && iVar31 < 32)
	{
		func_32(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 5 && Var0.f_7 >= 0)
		{
			Global_1257494[iVar31 /*103*/].f_97[Var0.f_7] = 0;
		}
	}
}

bool func_453(int iParam0)
{
	switch (iParam0)
	{
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

int func_454(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_628())
	{
		return 0;
	}
	if (!func_18())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_629(&Global_0, 8);
	}
	func_629(&Global_0, 1);
	return 1;
}

bool func_455(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1172.f_131.f_6, iParam0);
}

void func_456(int iParam0, float fParam1, int iParam2, int iParam3)
{
	struct<15> Var0;

	Var0 = { func_630(2.074977E-25f) };
	Var0.f_11 = iParam0;
	Var0.f_12 = fParam1;
	Var0.f_13 = iParam2;
	Var0.f_14 = iParam3;
	func_631(&Var0);
	func_632(iParam0, fParam1, iParam2, iParam3);
}

void func_457()
{
	if (Local_13.f_7.f_8 < 4)
	{
		func_456(2, 2.301389E+24f, 0, Local_13.f_7.f_8);
		Local_13.f_7.f_8++;
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (func_239() == 1)
	{
		func_456(7, 2.301389E+24f, 0, 0);
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (Local_13.f_7.f_8 < 5)
	{
		func_456(3, 2.301389E+24f, 0, 0);
		Local_13.f_7.f_8++;
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (!func_263(16, 1) && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 14000)
	{
		func_330(16);
		func_456(7, 2.301389E+24f, 0, 0);
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

int func_458()
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (func_190(Local_83[iVar0 /*34*/].f_1, 32))
			{
				iVar1 = iVar0;
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return func_633(99999f);
}

int func_459(int iParam0)
{
	return Local_13.f_50[iParam0 /*3*/].f_1;
}

void func_460()
{
	bool bVar0;
	bool bVar1;

	if (func_252(2048) || func_252(4096))
	{
		return;
	}
	if (Local_13.f_7.f_13.f_1 == 0 && Local_13.f_7.f_4 != 255)
	{
		func_634(&(Local_13.f_7.f_13), Local_13.f_7.f_4, Local_1172.f_19.f_105);
		return;
	}
	bVar1 = func_635(&(Local_13.f_7.f_13), "PBL_TAKE_OFFER", &bVar0);
	if (bVar1)
	{
		if (bVar0)
		{
			func_121(4096);
		}
		else
		{
			func_121(2048);
		}
	}
	else if (bVar0)
	{
		func_121(4096);
	}
}

int func_461()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 3;
	while (iVar1 <= 5)
	{
		if ((!ENTITY::IS_ENTITY_DEAD(func_264(iVar1)) && !PED::GET_PED_CONFIG_FLAG(func_264(iVar1), 580, true)) && func_515(iVar1))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

bool func_462(int iParam0)
{
	return func_518(&(Local_1172.f_291.f_87), 1, iParam0);
}

void func_463(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_520(&(Local_83[iVar0 /*34*/].f_11), 1, iParam0);
	if (bParam1)
	{
		Local_83[iVar0 /*34*/].f_11.f_12[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_464()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (PED::GET_PED_IS_GRAPPLING(func_264(iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_465(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_281(&(Local_13.f_7.f_1), iParam0);
	}
}

void func_466(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_467(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_468(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_1172.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_1172)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_1172.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_1172.f_3)
	{
		return false;
	}
	return true;
}

void func_469(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 377515857:
			func_632(uParam0->f_11, uParam0->f_12, uParam0->f_13, uParam0->f_14);
			break;
	}
}

bool func_470(int iParam0)
{
	return Local_1172.f_752.f_1[iParam0] != 0;
}

bool func_471(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1172.f_752.f_1[iParam0], iParam1);
}

bool func_472(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1172.f_752.f_8[iParam0], iParam1);
}

bool func_473(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (PED::_0x4B19F171450E0D4F(PLAYER::PLAYER_PED_ID()) == func_264(1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_474(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_636())
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
	if (func_637(iParam0, 1) < 0)
	{
		return;
	}
	if (func_637(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_637(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_637(iParam0, 1) /*4*/].f_2++;
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
	func_638(&Var0, uVar7);
}

void func_475(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_1172.f_752.f_8[iParam0]), iParam1);
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "script_re@suspension_trap@hanging";
		case 1:
			return "script_re@suspension_trap@handover";
		default:
			break;
	}
	return "";
}

bool func_477(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

int func_478(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/].f_3;
}

bool func_479(int iParam0)
{
	return func_430(0, iParam0);
}

bool func_480(int iParam0)
{
	return func_431(0, iParam0);
}

void func_481(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_478(iParam0);
	bVar3 = func_398(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_1172.f_131.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_22[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_22[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_1172.f_131.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_83[iParam1 /*34*/].f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_83[iParam1 /*34*/].f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_423(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_22[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_22[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_22[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_639(iVar1, 1f, 0);
					sVar0 = func_640(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_641(iVar1, sVar0, 1);
					}
				}
				if (func_614(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_615(iParam0))
					{
						if (func_614(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_1172.f_131.f_5), iParam0);
				if (bParam2)
				{
					func_642(iParam0);
				}
			}
		}
	}
}

bool func_482(int iParam0)
{
	int iVar0;

	if (iParam0 != 0)
	{
		iVar0 = NETWORK::NETWORK_GET_ROPE_ID_FROM_NETWORK_ID(iParam0);
		if (PHYSICS::DOES_ROPE_EXIST(iVar0))
		{
			return true;
		}
	}
	return false;
}

void func_483(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_379(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_379(uParam0))
		{
		}
	}
}

void func_484(int iParam0, bool bParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 263, !bParam1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 138, bParam1);
		PED::SET_PED_CONFIG_FLAG(iParam0, 488, bParam1);
	}
}

var func_485(int iParam0, int iParam1)
{
	return Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/];
}

char* func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "loop_panic_victim";
		case 1:
			return "loop_less_panic_victim";
		case 2:
			return "help_me_victim";
		case 3:
			return "anybody_there_panic_victim";
		case 4:
			return "anybody_there_victim";
		case 5:
			return "im_trapped_victim";
		case 6:
			return "take_this_offer_victim";
		case 7:
			return "offer_loop_victim";
		case 9:
			return "dont_take_offer_victim";
		case 8:
			return "take_this_offer_victim";
		case 10:
			return "player_attacks_victim";
		default:
			break;
	}
	return "";
}

void func_487(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_643(uParam0, iParam1, sParam2))
	{
		if (!PED::IS_PED_INJURED(iParam1))
		{
			if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1)))
			{
				PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(iParam1, bParam3);
			}
		}
	}
}

void func_488()
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_1172.f_19.f_108))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Local_1172.f_19.f_108);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Local_1172.f_19.f_108);
		VOLUME::DELETE_VOLUME(Local_1172.f_19.f_108);
	}
}

void func_489(int iParam0, int iParam1)
{
	Local_1172.f_131.f_7[iParam0 /*11*/].f_9 = iParam1;
}

void func_490(var uParam0, int iParam1, int iParam2)
{
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseOwnerTeamB", true);
			break;
		default:
			break;
	}
}

void func_491(var uParam0, int iParam1, int iParam2)
{
	if (PED::IS_PED_HUMAN(iParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			break;
		case 1:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		case 2:
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamA", true);
			DECORATOR::DECOR_SET_BOOL(iParam1, "HorseTeamB", true);
			break;
		default:
			break;
	}
}

bool func_492(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = iParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_493(int iParam0)
{
	return iParam0;
}

bool func_494(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_264(iParam0);
	uParam1->f_2 = func_644(iParam0, 255, 1);
	return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

void func_495(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_496(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_520(&(Local_83[iVar0 /*34*/].f_11), 0, iParam0);
}

struct<2> func_497(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_645(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_557(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_498()
{
	Local_1172.f_131.f_6 = 0;
	Local_1172.f_131.f_2 = 0;
	Local_1172.f_131.f_1 = -1;
}

void func_499()
{
	int iVar0;

	func_226(&(Local_1172.f_291.f_87), 2, 0);
	func_226(&(Local_1172.f_291.f_87), 1, 0);
	func_226(&(Local_1172.f_291.f_87), 4, 0);
	func_226(&(Local_1172.f_291.f_87), 5, 0);
	func_226(&(Local_1172.f_291.f_87), 8, -1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_1172.f_291.f_66[iVar0]));
		SCRIPTS::_SET_ALL_PLAYER_BITS(&(Local_1172.f_291.f_80[iVar0]));
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_1172.f_291.f_73[iVar0]));
		func_646(iVar0);
		iVar0++;
	}
}

void func_500()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_647(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_648();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_1172.f_514.f_235 = 0;
	Local_1172.f_514.f_236 = -1;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_649(func_183(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_648();
	}
}

void func_501(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1172.f_131.f_2 = (Local_1172.f_131.f_2 || Local_83[iParam0 /*34*/].f_2);
		Local_1172.f_131.f_1 = (Local_1172.f_131.f_1 && Local_83[iParam0 /*34*/].f_2);
		Local_1172.f_131.f_6 = (Local_1172.f_131.f_6 || Local_83[iParam0 /*34*/].f_2.f_1);
	}
}

void func_502(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 2);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 1);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 4);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 5);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 6);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 7);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 0);
		func_650(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 3);
		func_651(&(Local_1172.f_291.f_87), &(Local_83[iParam0 /*34*/].f_11), 8);
		iVar0 = 0;
		while (iVar0 < 6)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_83[iParam0 /*34*/].f_11.f_5[iVar0]), &(Local_1172.f_291.f_66[iVar0]), &(Local_1172.f_291.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_83[iParam0 /*34*/].f_11.f_5[iVar0]), &(Local_1172.f_291.f_66[iVar0]), &(Local_1172.f_291.f_73[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_83[iParam0 /*34*/].f_11.f_5[iVar0]), &(Local_1172.f_291.f_66[iVar0]), &(Local_1172.f_291.f_80[iVar0]));
			func_652(func_493(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_503(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_83[iParam2 /*34*/].f_30 = (Local_83[iParam2 /*34*/].f_30 || Local_83[iParam0 /*34*/].f_30);
	}
}

void func_504(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_1172.f_514.f_235 = (Local_1172.f_514.f_235 || Local_83[iParam0 /*34*/].f_31.f_2);
	Local_1172.f_514.f_236 = (Local_1172.f_514.f_236 && Local_83[iParam0 /*34*/].f_31.f_2);
	func_653(iParam0);
}

int func_505(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_83[iParam3 /*34*/].f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1172.f_131.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_506(var uParam0)
{
	func_654(uParam0, 0f);
}

bool func_507(var uParam0)
{
	return func_655(*uParam0, 1);
}

bool func_508(var uParam0, float fParam1)
{
	if (!func_507(uParam0))
	{
		return false;
	}
	if (func_656(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_509(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_510(int iParam0)
{
	return true;
}

bool func_511(int iParam0, int iParam1)
{
	if (!func_398(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_190(Local_83[iParam1 /*34*/].f_2, iParam0);
}

void func_512(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_246(&(Local_83[iVar0 /*34*/].f_2), iParam0);
}

void func_513(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_281(&(Local_83[iVar0 /*34*/].f_2), iParam0);
}

void func_514()
{
	int iVar0;
	struct<13> Var1;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	if (!func_222(&iVar15))
	{
		return;
	}
	iVar16 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
	{
		return;
	}
	iVar17 = PLAYER::GET_PLAYER_PED(iVar16);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar14 = func_493(iVar0);
		if (!func_515(iVar14))
		{
		}
		else if (!func_516(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_1172.f_291.f_65), iVar14);
			}
			if (func_531(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, false, false))
			{
				func_657(iVar14);
				func_658(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_515(int iParam0)
{
	return !func_518(&(Local_1172.f_291.f_87), 5, iParam0);
}

bool func_516(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_1172.f_291.f_170, iParam0))
	{
		return false;
	}
	*uParam1 = Local_1172.f_291.f_91[iParam0 /*13*/];
	uParam1->f_1 = Local_1172.f_291.f_91[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_1172.f_291.f_91[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_517(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_659(iParam1))
	{
		iVar0 = PLAYER::PLAYER_PED_ID();
		if (uParam0->f_2 <= 1103626240 && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) >= 4f)
		{
			if (PED::IS_PED_IN_COVER(iVar0, false, false) || PED::IS_PED_GOING_INTO_COVER(iVar0))
			{
			}
			else
			{
				return true;
			}
		}
	}
	if (func_660(*uParam0, &(Local_1172.f_291.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_518(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_414(iParam1, &Var0))
	{
		return false;
	}
	if (Var0 == Var0.f_1)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		return MISC::IS_BIT_SET((*uParam0)[Var0], (Var0.f_2 + iParam2));
	}
	return MISC::IS_BIT_SET((*uParam0)[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
}

int func_519(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_414(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::CLEAR_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::CLEAR_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

int func_520(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_414(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	iVar4 = (32 - Var0.f_2);
	if (iParam2 < iVar4)
	{
		MISC::SET_BIT(uParam0[Var0], (Var0.f_2 + iParam2));
		return 1;
	}
	MISC::SET_BIT(uParam0[Var0.f_1], (Var0.f_3 - (iParam2 - iVar4)));
	return 1;
}

void func_521(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_661(iParam0);
	if (iVar0 >= 3 && iVar0 <= 5)
	{
		iVar1 = func_264(iVar0);
		if (!PED::IS_PED_DEAD_OR_DYING(iVar1, true))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_CURRENT_TARGET_FOR_PED(iVar1));
				if ((!func_336(iVar1, 2.066914E+13f) || (ENTITY::IS_ENTITY_DEAD(iVar2) && !func_336(iVar1, -1.021733E-11f))) || (ENTITY::DOES_ENTITY_EXIST(iVar2) && !func_662(iVar2)))
				{
					func_663(iVar0);
					if (!func_444(0, 1109393408 /* Float: 40f */, 0))
					{
						func_664(iVar0);
					}
				}
				if (iVar2 == func_264(0))
				{
					if (func_574(0, iVar0) < 7f)
					{
						TASK::TASK_COMBAT_ANIMAL_WARN(iVar1, func_264(0), 0);
					}
					if (!func_665(iVar0) && func_666(iVar0, 1106247680 /* Float: 30f */, 1, 0) != 255)
					{
						func_663(iVar0);
					}
				}
				if (PED::GET_PED_CONFIG_FLAG(iVar1, 580, true))
				{
					func_356(iVar0);
					func_663(iVar0);
					func_580(iVar0, 0);
					PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 17, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
				}
			}
			else if (PED::GET_PED_CONFIG_FLAG(iVar1, 580, true))
			{
				func_356(iVar0);
				func_663(iVar0);
				func_580(iVar0, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		iVar3 = func_264(iVar0);
		if (ENTITY::IS_ENTITY_DEAD(iVar3) && func_359(0, PLAYER::PLAYER_PED_ID(), 0))
		{
			if (!func_308(256) && !func_308(8))
			{
				func_360();
				func_120(256);
			}
		}
	}
}

bool func_522(int iParam0)
{
	return func_518(&(Local_1172.f_291.f_87), 4, iParam0);
}

bool func_523(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_518(&(Local_83[iVar0 /*34*/].f_11), 4, iParam0);
}

bool func_524(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_1172.f_291.f_73[iParam0]));
}

void func_525(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_519(&(Local_83[iVar0 /*34*/].f_11), 4, iParam0);
}

bool func_526(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_83[iVar0 /*34*/].f_11.f_5[iParam0]));
}

bool func_527(int iParam0)
{
	return func_518(&(Local_1172.f_291.f_87), 6, iParam0);
}

bool func_528(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!EVENT::_0x83D43F0FD5276E4D(iParam0, 0))
	{
		return false;
	}
	return true;
}

bool func_529(int iParam0, int iParam1)
{
	if (!func_398(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_518(&(Local_83[iParam1 /*34*/].f_11), 1, iParam0);
}

bool func_530(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = func_661(iParam0);
	if (iVar0 == 0)
	{
		if (func_269() >= 2)
		{
			if (FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(func_667(func_264(iVar0)), 7f) > 0 || PED::IS_PED_DIVING(func_264(iVar0)))
			{
				return true;
			}
		}
	}
	if (iVar0 == 1)
	{
		iVar1 = func_264(iVar0);
		if (func_668(PLAYER::PLAYER_PED_ID(), iVar1, 0) || func_669(PLAYER::PLAYER_PED_ID(), &iVar1))
		{
			func_330(2097152);
			func_670(1024);
		}
		return false;
	}
	if (iVar0 > 3)
	{
		fVar2 = func_644(iVar0, 255, 0);
		if (fVar2 < 1106247680 && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			return true;
		}
	}
	return false;
}

bool func_531(int iParam0, int iParam1)
{
	if (!func_398(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (!func_671(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_518(&(Local_83[iParam1 /*34*/].f_11), 3, iParam0);
}

bool func_532(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_672(uParam2, 1, iVar0);
	}
	if (!Global_1940186.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam5 > 0f)
		{
			uParam2->f_13 = fParam5;
		}
		else
		{
			uParam2->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, true, false));
		}
		if (!uParam2->f_2 & 128 != 0)
		{
			if (func_673(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_674(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_675(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_676(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_677(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_678(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_674(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_679(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_680(Global_33, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_681(Global_33, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_682(Global_33, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_682(Global_33, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_674(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_683(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_684(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_685(uParam2, 4000))
				{
					if ((func_686(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_687(uParam2, iParam0)) && func_688(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_686(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_687(uParam2, iParam0)) && func_688(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_689(iParam0, Global_1940186.f_35))
					{
						func_690();
						*iParam3 = 2;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_691(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_692() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_690();
						*iParam3 = 2;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_693())
				{
					if (func_689(iParam0, Global_1940186.f_36))
					{
						func_690();
						*iParam3 = 2;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_694(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_674(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_695(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_674(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_696(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_697(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_698(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_699(uParam2, 4000))
				{
					if (func_700(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_674(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_701(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_674(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_702(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_674(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_533(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_703(iParam0, vVar0, fParam2);
}

int func_534(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_704(iParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	func_705(&iVar4, iParam1->f_12);
	func_707(Local_1172.f_131.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_706(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_708(&iVar4, &uVar0);
}

bool func_535(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return false;
	}
	return func_518(&(Local_83[iVar0 /*34*/].f_11), 0, iParam0);
}

bool func_536(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_1172.f_291.f_64, iParam0))
	{
		return false;
	}
	if (func_190(Local_1172.f_291.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_709(&(Local_1172.f_291))))
	{
		return false;
	}
	return true;
}

bool func_537(int iParam0, int iParam1, int iParam2)
{
	if (!func_536(iParam0, iParam1))
	{
		return false;
	}
	if (Local_83[iParam2 /*34*/].f_11.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_83[iParam2 /*34*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_538(int iParam0, int iParam1, bool bParam2)
{
	if (func_239() == 2)
	{
		return false;
	}
	if (func_661(iParam0) == 0)
	{
		if (func_269() < 2 || (func_269() == 2 && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000))
		{
			if (func_710(iParam1, 0, 0, 0, 0))
			{
				if ((Global_1940186.f_35 != 0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(func_264(iParam0), Global_1940186.f_35)) && !ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_264(iParam0), PLAYER::PLAYER_PED_ID(), true, true))
				{
					return false;
				}
				func_711(20, Local_1172.f_4);
				func_330(524288);
				func_712(iParam1);
				return true;
			}
			else if ((iParam1 == 8 && func_269() == 1) && !func_263(2.350989E-38f, 0))
			{
				func_330(2.350989E-38f);
				return false;
			}
			else
			{
				return false;
			}
		}
		else
		{
			if (((!func_710(iParam1, 1, 1, 0, 0) && iParam1 != 1024) && iParam1 != 256) && !bParam2)
			{
				return false;
			}
			if (iParam1 == 256 && !func_567(iParam0, 1109393408 /* Float: 40f */, 255, 0))
			{
				return false;
			}
			if (iParam1 == 1024)
			{
				func_330(0f);
			}
			func_711(20, Local_1172.f_4);
			func_330(524288);
			func_712(iParam1);
			return true;
		}
	}
	else if (func_661(iParam0) == 1)
	{
		func_711(20, Local_1172.f_4);
		if (func_670(iParam1))
		{
			func_330(2097152);
		}
		return false;
	}
	else if (func_661(iParam0) >= 3)
	{
		if ((func_665(func_661(iParam0)) && !func_710(iParam1, 0, 0, 0, 0)) || !func_134(8, 255))
		{
			return false;
		}
		func_657(iParam0);
		func_658(iParam0);
		func_330(8192);
	}
	return true;
}

bool func_539(int iParam0, int iParam1)
{
	if (!func_398(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_518(&(Local_83[iParam1 /*34*/].f_11), 2, iParam0);
}

bool func_540(int iParam0)
{
	int iVar0;

	iVar0 = func_661(iParam0);
	return true;
}

void func_541(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_264(iParam0);
	iVar1 = func_661(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 0:
			if (((func_334() > 1 && !func_263(16384, 0)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0)) && !WEAPON::_0x0DE0944ECCB3DF5D(iVar0))
			{
				if (!PED::IS_PED_RUNNING_RAGDOLL_TASK(iVar0))
				{
					TASK::CLEAR_PED_TASKS(iVar0, true, false);
				}
				if (func_263(0f, 0))
				{
					TASK::TASK_FLEE_COORD(iVar0, Local_1172.f_15, 4, 12289, 5000f, -1, 0);
				}
				else
				{
					TASK::TASK_FLEE_COORD(iVar0, Local_1172.f_15, 4, 12288, 5000f, -1, func_264(1));
				}
			}
			break;
		case 1:
			break;
	}
}

void func_542(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_520(&(Local_83[iVar0 /*34*/].f_11), 2, iParam0);
}

bool func_543(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_ALL_PLAYER_BITS(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_1172.f_291.f_80[iParam0]), &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

bool func_544(int iParam0, var uParam1, int iParam2, var uParam3)
{
	*uParam1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(*uParam1))
	{
		return false;
	}
	*iParam2 = NETWORK::NETWORK_GET_PLAYER_INDEX(*uParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(*iParam2))
	{
		return false;
	}
	*uParam3 = PLAYER::GET_PLAYER_PED(*iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam3))
	{
		return false;
	}
	return true;
}

bool func_545(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_1172.f_291.f_66[iParam0]), iParam1);
}

bool func_546(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_264(iParam0);
	iVar1 = iParam0;
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return false;
	}
	if (iVar1 == 0)
	{
		TASK::ADD_FLEE_TARGET_PED(iVar0, iParam3, -1f);
		func_456(16, 4.986218E+26f, 0, 0);
	}
	else if (iVar1 >= 3)
	{
		if (((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam2) && !PLAYER::IS_PLAYER_DEAD(iParam2)) && func_662(iParam3)) && func_531(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iParam2)))
		{
			if (func_713(iVar1))
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 2.350989E-38f, 0);
			}
		}
		else if (!func_665(iVar1) && !func_714(iVar1))
		{
			iVar2 = func_715(iVar1, 1109393408 /* Float: 40f */);
			if (func_671(iVar2))
			{
				TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar2)), 2.350989E-38f, 0);
			}
			else if (!func_716(0, 1) && func_574(iVar1, 0) < func_644(iVar1, iParam1, 1))
			{
				func_664(iVar1);
			}
			else if (func_662(iParam3))
			{
				TASK::TASK_COMBAT_PED(iVar0, iParam3, 2.350989E-38f, 0);
			}
		}
	}
	return true;
}

void func_547(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_222(&iVar0))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_83[iVar0 /*34*/].f_11.f_5[iParam0]), iParam1);
}

float func_548()
{
	int iVar0;
	float fVar1;

	if (Local_1172.f_473.f_3 == 0)
	{
		Local_1172.f_473.f_3 = MISC::GET_GAME_TIMER();
		return 1023410176;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_1172.f_473.f_3)) * 981668463);
	Local_1172.f_473.f_3 = iVar0;
	return fVar1;
}

bool func_549(int iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (bParam1)
		{
			return PED::IS_PED_DEAD_OR_DYING(iParam0, true);
		}
		else
		{
			return ENTITY::IS_ENTITY_DEAD(iParam0);
		}
	}
	return true;
}

bool func_550(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_717(vVar0, vParam0) > func_717(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_551(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
{
	float fVar0;
	bool bVar1;

	fParam2 = fParam2;
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_6) || (bParam7 && ENTITY::IS_ENTITY_DEAD(uParam0->f_6)))
	{
		return 0;
	}
	if (bParam5)
	{
		fVar0 = (fParam6 * fParam6);
	}
	else
	{
		fVar0 = BUILTIN::VDIST2(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
	}
	switch (*uParam0)
	{
		case 0:
			if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6) && !PED::_IS_PED_VISIBILITY_TRACKED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6)))
			{
				PED::REQUEST_PED_VISIBILITY_TRACKING(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
			}
			else if (func_718(uParam0, fVar0, (fParam1 * fParam1), iParam3))
			{
				*uParam0 = 1;
			}
			else
			{
				uParam0->f_8 = 0f;
			}
			break;
		case 1:
			if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
			{
				bVar1 = false;
			}
			else if (ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
			{
				if (fParam4 > 0f)
				{
					bVar1 = PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6), fParam4);
				}
				else
				{
					bVar1 = PED::IS_TRACKED_PED_VISIBLE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_6));
				}
			}
			else
			{
				bVar1 = ENTITY::_IS_TRACKED_ENTITY_VISIBLE(uParam0->f_6);
			}
			if (!bVar1)
			{
				uParam0->f_1.f_4 = 1;
			}
			if (bVar1)
			{
				if (ENTITY::IS_ENTITY_OCCLUDED(uParam0->f_6))
				{
					*uParam0 = 2;
				}
				else
				{
					if (bParam5 && !ENTITY::IS_ENTITY_A_PED(uParam0->f_6))
					{
						fVar0 = BUILTIN::VDIST2(Global_34, ENTITY::GET_ENTITY_COORDS(uParam0->f_6, false, false));
					}
					if (func_719(uParam0, fVar0, (fParam1 * fParam1), iParam3))
					{
						*uParam0 = 0;
					}
					else
					{
						*uParam0 = 2;
					}
				}
			}
			else if (uParam0->f_1.f_4)
			{
				uParam0->f_1.f_4 = 0;
				*uParam0 = 0;
				uParam0->f_8 = 0f;
			}
			break;
		case 2:
			*uParam0 = 0;
			break;
	}
	if (uParam0->f_8 != 0f)
	{
		uParam0->f_7 = (func_720() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_552(var uParam0, int iParam1, float fParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = 0;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST((uParam0[iVar0 /*9*/])->f_6) && (uParam0[iVar0 /*9*/])->f_7 > 0f) && ENTITY::IS_ENTITY_ON_SCREEN((uParam0[iVar0 /*9*/])->f_6))
		{
			iVar1++;
			fVar2 = (fVar2 + (uParam0[iVar0 /*9*/])->f_7);
		}
		iVar0++;
	}
	if (iParam1 > 1)
	{
		iParam1 = (iParam1 - 1);
	}
	if (iVar1 < iParam1)
	{
		return false;
	}
	if (fVar2 < fParam2)
	{
		return false;
	}
	func_182(uParam0);
	return true;
}

void func_553(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_367(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_721(iParam2))
		{
			func_368(iParam2, 0);
		}
		return;
	}
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	if (uParam0->f_2 != uParam1->f_1)
	{
		uParam1->f_1 = uParam0->f_2;
	}
	if (uParam1->f_1 == 0 && *uParam0 != *uParam1)
	{
		func_224(iParam2, *uParam0);
		func_722(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_723(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_366(iParam2, 1))
			{
				return;
			}
			if (func_594(iParam2))
			{
				if (!func_721(iParam2))
				{
					func_724(iParam2);
				}
				if (func_366(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
					PAD::DISABLE_CONTROL_ACTION(0, 3.360757E-18f, false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_83[iVar1 /*34*/].f_31, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_725(iParam2, iVar2, 16))
					{
						func_726(iParam2, iVar2, 1);
					}
					bVar4 = (func_725(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_725(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_725(iParam2, iVar2, 4))
						{
							if (func_727() < Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_596(iParam2, iVar2, 8);
					}
					if (!func_583(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_728(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_597(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_222(&iVar1))
							{
							}
							else
							{
								if (func_729(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_730(iParam2, iVar2, func_223(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_83[iVar1 /*34*/].f_31), iParam2);
										func_122(&(Local_83[iVar1 /*34*/].f_31.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_597(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_721(iParam2))
							{
								func_368(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_583(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_728(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_597(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_83[iVar1 /*34*/].f_31.f_2, iParam2))
							{
								func_731(iParam2, func_620(Local_13.f_50.f_19, iParam2));
								MISC::SET_BIT(&(Local_83[iVar1 /*34*/].f_31.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_583(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_728(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_597(Local_1172.f_514[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_83[iVar1 /*34*/].f_31.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_83[iVar1 /*34*/].f_31.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_83[iVar1 /*34*/].f_31), iParam2);
								func_122(&(Local_83[iVar1 /*34*/].f_31.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_554()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_555(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_732(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

int func_556(int iParam0)
{
	return func_733(iParam0);
}

struct<2> func_557(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_558(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_559()
{
	struct<2> Var0;

	if (func_69(128))
	{
		return;
	}
	Var0 = { func_497(func_734(), -8.839952E-30f) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
	func_149(128);
}

void func_560(bool bParam0)
{
	if (!func_69(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_69(256))
		{
			func_188(Local_1172.f_18, 0);
			func_149(256);
		}
	}
	func_149(16);
}

int func_561(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_735(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

int func_562(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_736(&Var4, 2.95884E+10f);
	return func_737(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_563(int iParam0, int iParam1)
{
	if (iParam0 <= 1)
	{
		func_312(1117782016 /* Float: 80f */);
	}
}

void func_564(var uParam0)
{
	Local_1172.f_19.f_1 = uParam0;
}

Vector3 func_565(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_566(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_264(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_176(iParam0);
		return;
	}
	if (!func_738(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_739(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_740(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_739(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_176(iParam0);
	}
}

bool func_567(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_398(iParam2, 0))
	{
		if (!func_222(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_83[iParam2 /*34*/].f_2.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_264(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_565(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_83[iParam2 /*34*/].f_2.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_568(int iParam0)
{
	TASK::TASK_PLAY_ANIM(func_264(0), func_476(0), func_486(iParam0), 2f, 2f, -1, 16, 0f, false, 0, false, 0, false);
}

void func_569()
{
	TASK::CLEAR_SEQUENCE_TASK(&(Local_1172.f_19.f_110));
	TASK::_0x23767D80C7EED7C6(&(Local_1172.f_19.f_110), -6.61285E-21f);
	TASK::TASK_PLAY_ANIM(0, func_476(1), func_486(6), 2f, 2f, -1, 8, 0f, false, 0, false, 0, false);
	TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_476(1), func_486(7), PLAYER::GET_PLAYER_PED(Local_13.f_7.f_3), -1, 1000f, -1.5f, 9, 0f, false, false, -1f, 0, 0, -1f);
	TASK::CLOSE_SEQUENCE_TASK(Local_1172.f_19.f_110);
}

bool func_570()
{
	int iVar0;

	iVar0 = func_264(1);
	if ((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || !PED::_IS_MOUNT_SEAT_FREE(iVar0, -1)) || func_252(8192)) || WEAPON::_0x0DE0944ECCB3DF5D(iVar0)) || FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return false;
	}
	return true;
}

void func_571(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_264(0);
	iVar1 = func_264(1);
	iVar2 = 0;
	if (!bParam0)
	{
		iVar2 = 16384;
	}
	PED::SET_PED_OWNS_ANIMAL(iVar0, iVar1, false);
	if (!func_570())
	{
		TASK::TASK_FLEE_COORD(iVar0, func_301(), 4, iVar2 | 1, 99999f, -1, 0);
	}
	else if (bParam0)
	{
		TASK::TASK_FLEE_COORD(iVar0, func_301(), 4, iVar2, 99999f, -1, func_264(1));
	}
	else
	{
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 1.5f, -1, 0.25f, 0, 40000f);
	}
	PED::SET_PED_KEEP_TASK(iVar0, true);
	func_330(256);
}

bool func_572()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!TASK::_IS_PED_LEADING_HORSE(iVar0))
	{
		return false;
	}
	iVar1 = TASK::_GET_LED_HORSE_FROM_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(iVar1))
	{
		return false;
	}
	return true;
}

void func_573()
{
	int iVar0;

	iVar0 = func_264(0);
	TASK::CLEAR_PED_TASKS(iVar0, true, false);
	TASK::TASK_FLEE_COORD(iVar0, func_301(), 4, 1, 99999f, -1, 0);
	PED::SET_PED_KEEP_TASK(iVar0, true);
}

float func_574(int iParam0, int iParam1)
{
	return BUILTIN::VDIST(func_741(iParam0), func_741(iParam1));
}

bool func_575()
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	vector3 vVar9;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	vVar6 = { 0f, 1f, 0f };
	ANIMSCENE::GET_ANIM_SCENE_ORIGIN(Local_1172.f_19.f_105, &vVar0, &vVar3, 2);
	func_742(&vVar6, vVar3);
	vVar9 = { vVar0 + vVar6 };
	if (!MISC::_DOES_ITEM_HAVE_VALID_BASE(Local_1172.f_19.f_109))
	{
		Local_1172.f_19.f_109 = ITEMSET::CREATE_ITEMSET(true);
	}
	ITEMSET::_CLEAR_ITEMSET(Local_1172.f_19.f_109);
	iVar12 = ENTITY::_GET_ENTITIES_NEAR_POINT(vVar9, 1.3f, Local_1172.f_19.f_109, 1);
	iVar13 = 0;
	while (iVar13 < iVar12)
	{
		iVar14 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar13, Local_1172.f_19.f_109);
		iVar15 = MISC::_GET_ENTITY_FROM_ITEM(iVar14);
		if (ENTITY::IS_ENTITY_DEAD(iVar15))
		{
		}
		else if (iVar15 != func_743(func_264(0)) && !(ENTITY::IS_ENTITY_A_PED(iVar15) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar15))))
		{
			return true;
		}
		iVar13++;
	}
	return false;
}

void func_576(int iParam0, int iParam1, bool bParam2)
{
	func_595(iParam0, iParam1, 8);
	if (bParam2 && func_594(iParam0))
	{
		func_597(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
	}
}

bool func_577()
{
	return (func_308(64) || func_329(4, -1, 1));
}

void func_578()
{
	if (func_263(1.084202E-19f, 0))
	{
		return;
	}
	if (func_744() && !func_263(1.084202E-19f, 0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
		{
			return;
		}
		TASK::CLEAR_PED_TASKS(func_264(0), true, false);
		if (!func_263(524288, 0))
		{
			func_456(15, -7.151378E+23f, 0, 0);
			func_571(1);
		}
		func_330(131072);
		func_330(1.084202E-19f);
		return;
	}
	if (!func_263(2.524355E-29f, 0))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1172.f_19.f_105))
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1172.f_19.f_105, "Victim", func_264(0), 0);
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1172.f_19.f_105, "NECKLACE", func_304(2), 0);
			func_330(2.524355E-29f);
		}
		return;
	}
	if (Local_13.f_7.f_13.f_1 != 0)
	{
		func_745(&(Local_13.f_7.f_13), &(Local_1172.f_19.f_111), "player", "player", "PBL_TAKE_OFFER", 63, 768, 3000, 7000);
	}
	if ((Local_13.f_7.f_4 == PLAYER::PLAYER_ID() && ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(PLAYER::PLAYER_PED_ID(), Local_1172.f_19.f_105)) && !func_263(2048, 0))
	{
		ANIMSCENE::DETACH_ANIM_SCENE_PRESERVING_LOCATION(Local_1172.f_19.f_105);
		func_456(13, -7.151378E+23f, 0, 0);
		func_330(4);
		func_330(131072);
		Local_1172.f_19.f_104 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		func_330(2048);
	}
	if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(Local_1172.f_19.f_105, "player"))
	{
		if (func_263(2048, 1) && !func_263(3.85186E-34f, 1))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_304(2)))
			{
				ENTITY::SET_ENTITY_VISIBLE(func_304(2), false);
				ENTITY::SET_ENTITY_COLLISION(func_304(2), false, false);
				func_330(3.85186E-34f);
			}
		}
		if (((func_263(3.85186E-34f, 1) && !func_263(256, 1)) && !func_455(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_264(0)))
		{
			func_456(15, -7.151378E+23f, 0, 0);
			func_571(0);
		}
	}
}

void func_579()
{
	int iVar0;

	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(func_264(iVar0)) || ENTITY::IS_ENTITY_DEAD(func_264(iVar0))) || PED::GET_PED_CONFIG_FLAG(func_264(iVar0), 580, true)) || func_263(8192, 0))
		{
			return;
		}
		if (!func_336(func_264(iVar0), -1.021733E-11f))
		{
			TASK::TASK_COMBAT_ANIMAL_WARN(func_264(iVar0), func_264(0), 0);
		}
		iVar0++;
	}
}

void func_580(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	if (bParam1)
	{
		func_519(&(Local_83[iVar0 /*34*/].f_11), 5, iParam0);
	}
	else
	{
		func_520(&(Local_83[iVar0 /*34*/].f_11), 5, iParam0);
	}
}

bool func_581(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_746(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_747())
	{
		return func_746(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_746(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_582(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/]);
}

bool func_583(int iParam0)
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

void func_584(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_583(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_748(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_749(iVar0);
	*uParam0 = 0;
}

int func_585(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_750(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_586(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_750(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_587(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_394(&Var1, iParam0))
	{
		iVar0 = ((func_751() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_588(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_589(int iParam0, int iParam1)
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

void func_590(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051645.f_16[15]);
	func_752(uParam0, uParam0->f_1);
}

struct<2> func_591(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_592(bool bParam0, int iParam1, int iParam2)
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
		func_384(bParam0, iVar0);
		iVar0++;
	}
}

void func_593(int iParam0, int iParam1)
{
	func_246(&(Local_1172.f_514[iParam0 /*39*/].f_5), iParam1);
}

bool func_594(int iParam0)
{
	if (Local_1172.f_514.f_237 == iParam0)
	{
		return true;
	}
	return false;
}

void func_595(int iParam0, int iParam1, int iParam2)
{
	func_246(&(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_596(int iParam0, int iParam1, int iParam2)
{
	func_281(&(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_597(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_583(iParam0))
	{
		return;
	}
	iVar0 = func_748(iParam0);
	if (bParam1)
	{
		func_753(iParam0, 4);
		if (bParam3)
		{
			func_754(iVar0, 1);
		}
		func_755(iVar0, 1);
	}
	else
	{
		func_756(iParam0, 4);
		func_755(iVar0, 0);
	}
}

void func_598(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 16384);
	}
	else
	{
		func_246(&(uParam0->f_2), 16384);
	}
}

void func_599(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 2048);
	}
	else
	{
		func_246(&(uParam0->f_2), 2048);
	}
}

void func_600(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 16);
	}
	else
	{
		func_281(uParam0, 1.504633E-36f);
		func_281(uParam0, 16);
	}
}

void func_601(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 128);
	}
	else
	{
		func_246(&(uParam0->f_2), 128);
	}
}

void func_602(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 256);
	}
	else
	{
		func_281(uParam0, 256);
	}
}

void func_603(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_246(uParam0, 2.524355E-29f);
	}
	else
	{
		func_281(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_246(uParam0, 2f);
	}
	else
	{
		func_281(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_246(uParam0, 1.084202E-19f);
	}
	else
	{
		func_281(uParam0, 1.084202E-19f);
	}
}

float func_604(var uParam0)
{
	return uParam0->f_26;
}

void func_605(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_606(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 1);
	}
	else
	{
		func_281(uParam0, 1);
	}
}

void func_607(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 512);
	}
	else
	{
		func_281(uParam0, 512);
	}
}

void func_608(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 2);
	}
	else
	{
		func_281(uParam0, 2);
	}
}

void func_609(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 8);
	}
	else
	{
		func_281(uParam0, 8);
	}
}

void func_610(int iParam0, int iParam1)
{
	func_246(&(Local_1172.f_228[iParam0 /*62*/].f_5[iParam1 /*14*/].f_1), 16);
}

int func_611(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/].f_4;
}

bool func_612(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_617(iParam1))
	{
		return false;
	}
	iVar0 = func_757(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_613(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, 1.977859E+07f);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_614(int iParam0)
{
	return func_178(iParam0, 32);
}

bool func_615(int iParam0)
{
	return func_178(iParam0, 64);
}

bool func_616(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_617(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_618(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1172.f_514.f_236, iParam0);
}

bool func_619(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1172.f_514.f_235, iParam0);
}

int func_620(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = iParam1 * 2;
	if (MISC::IS_BIT_SET(iParam0, iVar1))
	{
		MISC::SET_BIT(&iVar0, 0);
	}
	if (MISC::IS_BIT_SET(iParam0, iVar1 + 1))
	{
		MISC::SET_BIT(&iVar0, 1);
	}
	return iVar0;
}

int func_621(int iParam0, int iParam1, var uParam2)
{
	switch (func_400(uParam2))
	{
		case 0:
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 2:
			return 1;
	}
	return 0;
}

bool func_622(int iParam0)
{
	return func_134(8, iParam0);
}

bool func_623(int iParam0)
{
	return Local_13.f_50[iParam0 /*3*/].f_2 > 0;
}

int func_624(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

void func_625(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_497(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_626(int iParam0, var uParam1, var uParam2)
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
		func_32(&Var2, *uParam1, -1, -1, 255);
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

bool func_627(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_750(Param0, &vVar0);
	if (func_758(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_628()
{
	return !Global_1572887.f_10;
}

void func_629(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

struct<15> func_630(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_1172, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_631(var uParam0)
{
	var uVar0;

	uVar0 = func_759(5, 117);
	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&uVar0, PLAYER::PLAYER_ID());
	func_760(uParam0, uVar0);
}

void func_632(int iParam0, float fParam1, int iParam2, int iParam3)
{
	int iVar0;

	iVar0 = func_264(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	else
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iVar0, 0);
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iVar0, 0);
		if (iParam0 == 16)
		{
			func_761(1, 0, 0);
		}
	}
	if (func_644(0, 255, 1) <= 1128792064 && iParam0 == 0)
	{
		func_762(-1.679238E+28f, func_264(0), 1);
	}
	switch (func_231())
	{
		case 0:
			func_764(0, func_763(iParam0, iParam3), 0, fParam1, iParam2, 0);
			break;
		case 1:
			func_765(iParam0);
			break;
	}
}

int func_633(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_83[iVar0 /*34*/].f_2.f_2[0] > -1f && Local_83[iVar0 /*34*/].f_2.f_2[0] < fParam0)
			{
				if (iVar1 == -1 || Local_83[iVar0 /*34*/].f_2.f_2[0] < Local_83[iVar1 /*34*/].f_2.f_2[0])
				{
					iVar1 = iVar0;
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

void func_634(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = NETWORK::_ANIM_SCENE_TO_NET(iParam2);
}

int func_635(var uParam0, char* sParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	*uParam2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		*uParam2 = 1;
		return 1;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		*uParam2 = 1;
		return 1;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		*uParam2 = 1;
		return 1;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iVar0, sParam1) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
	{
		return 0;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar1, iVar0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_636()
{
	if (func_28() != 0)
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

int func_637(int iParam0, int iParam1)
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

void func_638(var uParam0, var uParam1)
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

void func_639(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_766(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_640(int iParam0)
{
	return Local_1172.f_131.f_7[iParam0 /*11*/].f_10;
}

void func_641(int iParam0, char* sParam1, bool bParam2)
{
	if (bParam2 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
		{
			DECORATOR::DECOR_SET_BOOL(iParam0, "HAS_VOICE", true);
			AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, sParam1);
		}
	}
}

void func_642(int iParam0)
{
}

bool func_643(var uParam0, int iParam1, char* sParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < uParam0->f_97 && !bVar0)
	{
		if (MISC::ARE_STRINGS_EQUAL(sParam2, &((uParam0[iVar1 /*4*/])->f_1)))
		{
			(*uParam0)[iVar1 /*4*/] = iParam1;
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		if (uParam0->f_97 < 24)
		{
			(*uParam0)[uParam0->f_97 /*4*/] = iParam1;
			StringCopy(&((uParam0[uParam0->f_97 /*4*/])->f_1), sParam2, 24);
			uParam0->f_97++;
			bVar0 = true;
		}
	}
	return bVar0;
}

float func_644(int iParam0, int iParam1, bool bParam2)
{
	if (!func_398(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_83[iParam1 /*34*/].f_2.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_83[iParam1 /*34*/].f_2.f_2[iParam0];
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -4.965126E+35f;
		case 2:
			return 8.168326E+07f;
		case 14:
			return 1.620656E+33f;
		case 4:
			return 1.244255E+11f;
		case 5:
			return 9.428104E+32f;
		case 6:
			return -3.8492E+32f;
		case 7:
			return -4.777519E-18f;
		case 8:
			return 3.851762E+09f;
		case 9:
			return 6.790077E-13f;
		case 10:
			return joaat("NET_BEAT_TREE_MAP");
		case 11:
			return -1.157693E+32f;
		case 12:
			return -1.338171E-17f;
		case 13:
			return 4.652846E+25f;
		case 3:
			return 1.196945f;
		case 15:
			return -2.378889E+11f;
		case 16:
			return 8.906811E-29f;
		case 17:
			return 23624.72f;
		case 18:
			return 5.653363E-14f;
		case 19:
			return 8.253E+18f;
		case 20:
			return 3.013693E+08f;
		case 31:
			return -1.53937E-17f;
		case 21:
			return -1.101959E-07f;
		case 28:
			return -1.452968E+38f;
		case 25:
			return 2.671046E+27f;
		case 24:
			return -1.027782E-21f;
		case 32:
			return -6.556114E+11f;
		case 22:
			return -1.11631E-37f;
		case 29:
			return -4.074666E-33f;
		case 26:
			return -1.084153E+21f;
		case 30:
			return -3.581337E-11f;
		case 27:
			return -1.713659E-35f;
		case 33:
			return -1.560962E+29f;
		case 34:
			return -2.264373E-35f;
		case 23:
			return 1.091982E-29f;
		default:
			break;
	}
	return 0;
}

void func_646(int iParam0)
{
	if (!func_494(func_493(iParam0), &(Local_1172.f_291.f_91[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_1172.f_291.f_170), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1172.f_291.f_170), iParam0);
}

int func_647(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam0, bParam1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (ENTITY::IS_ENTITY_A_PED(iVar0))
				{
					return iVar0;
				}
			}
		}
	}
	return 0;
}

void func_648()
{
	if (Local_1172.f_514.f_237 < 0)
	{
		return;
	}
	func_368(func_183(Local_1172.f_514.f_237), 0);
	Local_1172.f_514.f_237 = -1;
	func_767(func_183(Local_1172.f_514.f_237));
}

bool func_649(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_367(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_1172.f_514.f_237 != iParam0)
		{
			func_648();
			func_724(iParam0);
			Local_1172.f_514.f_237 = iParam0;
			func_768(iParam0);
		}
		return true;
	}
	return false;
}

int func_650(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_414(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_415(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_415(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_415(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_651(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_414(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_415(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_415(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_415(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_652(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_518(&(Local_83[iParam1 /*34*/].f_11), 1, iParam0))
	{
		if (Local_83[iParam1 /*34*/].f_11.f_12[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_35.f_1[iParam0]))
		{
			if (Local_13.f_35.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_35.f_8[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_83[iParam1 /*34*/].f_11.f_12[iParam0], Local_13.f_35.f_8[iParam0]))
		{
			Local_13.f_35.f_1[iParam0] = iVar0;
			Local_13.f_35.f_8[iParam0] = Local_83[iParam1 /*34*/].f_11.f_12[iParam0];
		}
	}
}

void func_653(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (Local_13.f_50[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_50[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_83[iParam0 /*34*/].f_31, iVar0))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0));
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
				Jump @155; //curOff = 109
			}
			else
			{
				Local_13.f_50[iVar0 /*3*/].f_1 = iVar1;
				func_122(&(Local_13.f_50.f_19), iVar0, func_620(Local_83[iParam0 /*34*/].f_31.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_654(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_720() - fParam1);
	func_769(uParam0, 1);
	func_770(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_655(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_656(var uParam0)
{
	if (!func_507(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_771(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_720() - uParam0->f_1);
}

void func_657(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_520(&(Local_83[iVar0 /*34*/].f_11), 3, iParam0);
}

void func_658(int iParam0)
{
	if (0 != iParam0)
	{
		if (1 != iParam0)
		{
			func_663(iParam0);
		}
	}
}

bool func_659(int iParam0)
{
	return func_518(&(Local_1172.f_291.f_87), 7, iParam0);
}

bool func_660(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_672(uParam1, 0, iVar0);
	}
	if (fParam3 > 0f)
	{
		uParam1->f_13 = fParam3;
	}
	else
	{
		uParam1->f_13 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	}
	if (!Global_1940186.f_6 && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam1->f_2 & 2 != 0)
			{
				if (func_685(uParam1, 4000))
				{
					if ((func_686(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_687(uParam1, iParam0)) && func_688(uParam1, iParam0))
					{
						func_690();
						*uParam2 = 2;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_685(uParam1, 4000))
				{
					if ((func_686(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_687(uParam1, iParam0)) && func_688(uParam1, iParam0))
					{
						func_690();
						*uParam2 = 2;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_689(iParam0, Global_1940186.f_35))
					{
						func_690();
						*uParam2 = 2;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_693())
				{
					if (func_689(iParam0, Global_1940186.f_36))
					{
						func_690();
						*uParam2 = 2;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_679(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_680(Global_33, iParam0, uParam1))
					{
						func_690();
						*uParam2 = 4;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_681(Global_33, iParam0, uParam1))
					{
						func_690();
						*uParam2 = 256;
						func_674(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_772(iParam0, uParam1))
			{
				func_690();
				*uParam2 = 131072;
				func_674(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_773(iParam0, uParam1))
			{
				func_690();
				*uParam2 = 262144;
				func_674(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_661(int iParam0)
{
	return iParam0;
}

bool func_662(int iParam0)
{
	if ((((PED::IS_PED_HOGTIED(iParam0) || PED::IS_PED_BEING_HOGTIED(iParam0)) || PED::IS_PED_BEING_DRAGGED(iParam0)) || PED::IS_PED_LASSOED(iParam0)) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
	{
		return false;
	}
	return true;
}

void func_663(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_520(&(Local_83[iVar0 /*34*/].f_11), 4, iParam0);
}

void func_664(int iParam0)
{
	if (func_334() > 1 || func_574(iParam0, 0) > 7f)
	{
		TASK::TASK_COMBAT_PED(func_264(iParam0), func_264(0), 2.350989E-38f, 0);
	}
	else
	{
		TASK::TASK_COMBAT_ANIMAL_WARN(func_264(iParam0), func_264(0), 0);
	}
}

bool func_665(int iParam0)
{
	int iVar0;

	iVar0 = func_461();
	if (iVar0 < 2 && iVar0 > -1)
	{
		return false;
	}
	if (func_462(iParam0))
	{
		return false;
	}
	if (func_774(2))
	{
		return false;
	}
	if (!func_775(iParam0))
	{
		switch (iParam0)
		{
			case 3:
				return true;
			default:
				return false;
		}
	}
	return false;
}

int func_666(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_776(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

Vector3 func_667(int iParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	MISC::GET_MODEL_DIMENSIONS(ENTITY::GET_ENTITY_MODEL(iParam0), &vVar3, &vVar6);
	fVar9 = MISC::ABSF(((vVar6.z - vVar3.z) * 1056964608));
	vVar0.f_2 = (vVar0.z - fVar9);
	return vVar0;
}

bool func_668(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

bool func_669(int iParam0, int iParam1)
{
	if (!TASK::_IS_PED_LEADING_HORSE(iParam0))
	{
		return false;
	}
	*iParam1 = TASK::_GET_LED_HORSE_FROM_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(*iParam1, true))
	{
		return false;
	}
	if (!PED::CAN_PED_BE_MOUNTED(*iParam1))
	{
		return false;
	}
	return true;
}

bool func_670(int iParam0)
{
	int iVar0;

	iVar0 = func_264(1);
	switch (iParam0)
	{
		case 1:
			func_474(-7.383845E-26f, 0, 0);
			return true;
		case 2:
			if (func_669(PLAYER::PLAYER_PED_ID(), &iVar0))
			{
				if (!func_329(4194304, -1, 1))
				{
					func_474(4454179f, 0, 0);
					func_330(4194304);
					func_456(16, 4.986218E+26f, 0, 0);
					return true;
				}
			}
			else if (!func_329(8388608, -1, 1))
			{
				func_474(-3.014988E-19f, 0, 0);
				func_330(8388608);
				if (func_269() < 2 || (func_269() == 2 && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000))
				{
					func_456(16, 4.986218E+26f, 0, 0);
				}
				return true;
			}
			break;
		case 1024:
			if (!func_329(4194304, -1, 1))
			{
				func_474(4454179f, 0, 0);
				func_330(4194304);
				if (func_269() < 2 || (func_269() == 2 && NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_5, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000))
				{
					func_456(16, 4.986218E+26f, 0, 0);
				}
				return true;
			}
			break;
	}
	return false;
}

bool func_671(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_672(var uParam0, bool bParam1, int iParam2)
{
	func_777(iParam2);
	if (Global_1572887.f_14 == -1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			return;
		}
		if (Global_1940186.f_6)
		{
			return;
		}
	}
	else
	{
		if (!Global_1295619.f_6)
		{
			return;
		}
		if (Global_1295619.f_7)
		{
			return;
		}
	}
	if (bParam1)
	{
		uParam0->f_11 = 0;
	}
	uParam0->f_6 = iParam2;
	if (Global_1572887.f_14 == -1)
	{
		uParam0->f_14 = Global_1940186.f_38;
	}
	else
	{
		uParam0->f_14 = func_778(0);
	}
	switch (uParam0->f_7)
	{
		case 0:
			if (*uParam0 & 16 != 0)
			{
				if (!(*uParam0 && 9.403955E-38f) != 0)
				{
					if (uParam0->f_14 == -7.135455E-16f)
					{
						if (PED::IS_PED_PLANTING_BOMB(Global_33))
						{
							func_246(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_779(1, 1))
						{
							func_246(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_779(1, 1) || *uParam0 & 8192 != 0))
				{
					func_281(uParam0, 9.403955E-38f);
				}
			}
			break;
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
	if (!uParam0->f_2 & 1024 != 0)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
		{
			if (func_780(uParam0))
			{
				uParam0->f_16 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
		}
		else if (uParam0->f_16 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(uParam0->f_16, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 500)
			{
				if (!PED::IS_PED_ON_MOUNT(uParam0->f_15))
				{
					uParam0->f_15 = 0;
					uParam0->f_16 = 0;
				}
			}
		}
	}
	uParam0->f_7++;
	if (uParam0->f_7 >= 4)
	{
		uParam0->f_7 = 0;
		uParam0->f_8++;
		if (uParam0->f_8 > 4)
		{
			uParam0->f_8 = 0;
		}
	}
	func_781(uParam0);
}

bool func_673(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!EVENT::_0x1D1B448D719415AB(iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar0 == 0)
	{
		return false;
	}
	switch (iVar0)
	{
		case joaat("EVENT_ACQUAINTANCE_PED_DEAD"):
		case joaat("EVENT_PED_SEEN_DEAD_PED"):
		case joaat("EVENT_SHOCKING_DEAD_BODY"):
		case joaat("EVENT_DEAD_PED_FOUND"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar0, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar1))
			{
				return false;
			}
			iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
			if (!PED::IS_PED_HUMAN(iVar2))
			{
				return false;
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar2, "bIgnoreDamageChecking"))
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_27)
			{
				return false;
			}
			if (iVar2 == Global_1940186.f_26)
			{
				return false;
			}
			if (!func_782(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_783(iParam0, iVar2) <= func_784(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_674(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_710(iParam2, 1, 1, 1, 0))
	{
		func_246(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_785(uParam1, 1);
	func_786();
}

bool func_675(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_787(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_788(uParam1);
			if (func_789(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_790(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_785(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_791(uParam1))
						{
							func_785(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_676(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	float fVar1;

	if (iParam1 == 0)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return false;
	}
	iVar0 = 1118437376; /* Float: 85f */
	if (func_792(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_788(uParam2);
		if (func_789(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_790(uParam2)
				{
					func_785(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_677(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	if (!PLAYER::GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(PLAYER::PLAYER_ID(), &iVar0))
	{
		return false;
	}
	if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar2, false, false))
	{
		if (iVar2 == iVar0)
		{
			return false;
		}
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	if (Global_1940186.f_34 != 0)
	{
		if (PED::_GET_RIDER_OF_MOUNT(Global_1940186.f_34, true) == iParam0)
		{
			return false;
		}
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_782(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_790(uParam1)
		{
			fVar3 = func_788(uParam1);
			if (uParam1->f_13 < fVar3)
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar1, 17))
				{
					if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, fVar3, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar1, -1f, fVar3, -1f, -1f))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

int func_678(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_793(bParam1, bParam2, bParam3);
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

bool func_679(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_692();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_680(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_794(uParam2);
			if (!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f)
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
			else if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_0xEA522F991E120D45(Global_1940186.f_40))
			{
				PED::_0xD355E2F1BB41087E(iParam1, 5f);
			}
			else
			{
				PED::_0xD355E2F1BB41087E(iParam1, fVar0);
			}
		}
		if ((!WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) || Global_1940186.f_40 == -3.273909E-18f) || (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)))
		{
			fVar2 = 3f;
			iVar1 = 3000;
		}
		else
		{
			fVar2 = 1f;
			iVar1 = 1000;
		}
		if (PED::_0x9C81338B2E62CE0A(PLAYER::PLAYER_ID(), iParam1, iVar1) && PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= fVar2)
		{
			if (func_688(uParam2, iParam1))
			{
				func_785(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_681(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_709(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_688(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_785(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_682(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_795(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_785(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_785(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_796(iParam1, vVar0, vVar4))
					{
						func_785(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	else
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_785(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_796(iParam1, vVar0, vVar7))
					{
						func_785(uParam2, 1);
						return true;
					}
				}
				break;
		}
	}
	if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-2.836409E+16f, vVar0, 15f) || EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-3.67506E+12f, vVar0, 15f))
	{
		return true;
	}
	return false;
}

bool func_683(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	vector3 vVar2[2];
	vector3 vVar9;
	bool bVar12;
	bool bVar13;

	vVar9 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	bVar12 = *uParam1 & 4096 != false;
	iVar0 = 0;
	while (iVar0 < Global_1940186.f_33)
	{
		if (!func_782(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_797(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_798(Global_1940186.f_28[iVar0]))
			{
				if (fVar1 < 1108082688)
				{
					if ((DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamA") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA")) || (DECORATOR::DECOR_EXIST_ON(Global_1940186.f_28[iVar0], "HorseTeamB") && DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB")))
					{
						vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
						vVar2[1 /*3*/] = { vVar9 };
						uParam1->f_11 = iParam0;
						return true;
					}
				}
			}
			if (func_799(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_800(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_801(uParam1, iParam0, fVar1, iVar0))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_684(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar5;
	vector3 vVar8;

	if (!EVENT::_0x1D1B448D719415AB(*iParam0))
	{
		return false;
	}
	iVar0 = EVENT::_EVENT_GET_RECENT_EVENT(*iParam0, 0, 0);
	switch (iVar0)
	{
		case joaat("EVENT_SHOCKING_PROPERTY_DAMAGE"):
		case joaat("EVENT_SHOCKING_WINDOW_SMASHED"):
			iVar1 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			iVar2 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(*iParam0, iVar0, 0, 0);
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
			vVar8 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
			EVENT::_0x1A5C5D350068A673(*iParam0, 0);
			return true;
	}
	return false;
}

bool func_685(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_692();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_686(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!bParam3)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iParam0) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iParam0))
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar0, true, true) || DECORATOR::DECOR_EXIST_ON(iParam0, "DamagedByPlayer"))
			{
				return 1;
			}
			iVar1 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
			if (!ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iVar1, true, true))
				{
					return 1;
				}
			}
			if (PED::IS_PED_ON_MOUNT(iVar0))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PED::GET_MOUNT(iVar0)))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PED::GET_MOUNT(iVar0), true, true))
					{
						return 1;
					}
				}
			}
			else if (ENTITY::DOES_ENTITY_EXIST(iParam1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iParam1))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
					{
						return 1;
					}
				}
			}
		}
	}
	else if (!bParam2)
	{
		if (func_669(iVar0, &iVar2))
		{
			if ((PED::IS_PED_RAGDOLL(iParam0) || PED::_0x947E43F544B6AB34(iParam0, PLAYER::PLAYER_ID(), 10, 1000)) || (!bParam4 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar2, iParam0)))
			{
				return 1;
			}
		}
	}
	if (!bParam2)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (func_802(iVar0, iParam0))
	{
		return 1;
	}
	if (PED::_GET_PED_GRAPPLER(PLAYER::PLAYER_PED_ID()) == iParam0)
	{
		if (PED::GET_PED_IS_GRAPPLING(PLAYER::PLAYER_PED_ID()))
		{
			return 1;
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (PED::IS_PED_BEING_JACKED(iParam0))
		{
			if (PED::GET_PEDS_JACKER(iParam0) == iVar0)
			{
				return 1;
			}
		}
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iVar0, 8, 0))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, true) || PED::IS_PED_BEING_STEALTH_KILLED(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_687(var uParam0, int iParam1)
{
	int iVar0;

	if (!DECORATOR::DECOR_EXIST_ON(iParam1, "iDamageFrame"))
	{
		return 1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam1, "iDamageFrame");
	if (iVar0 < 0)
	{
		if (DECORATOR::DECOR_SET_INT(iParam1, "iDamageFrame", uParam0->f_6))
		{
		}
	}
	else if (uParam0->f_6 > iVar0 + 10)
	{
		return 1;
	}
	return 0;
}

bool func_688(var uParam0, int iParam1)
{
	if (func_803(uParam0))
	{
		return true;
	}
	if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam1, 400))
	{
		return true;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if ((PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 8, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 9, true)) || PED::IS_PED_BEING_STEALTH_KILLED(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 16, 0) || PED::GET_PED_CONFIG_FLAG(iParam1, 10, true))
	{
		return false;
	}
	if (PED::_GET_LASSO_TARGET(Global_33) != 0)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(Global_33, iParam1))
	{
		return true;
	}
	if (!PED::IS_PED_RAGDOLL(iParam1))
	{
		return true;
	}
	return false;
}

bool func_689(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_804(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_690()
{
}

bool func_691(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
	if (iVar0 != 0 && !VEHICLE::IS_THIS_MODEL_A_TRAIN(ENTITY::GET_ENTITY_MODEL(iVar0)))
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
		if (func_805(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_692();
			return true;
		}
		else if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(iVar0, &iVar5, &iVar4))
		{
			if (iVar5 <= 0)
			{
				return false;
			}
			else if (iVar4 == iVar5)
			{
				iVar6 = 0;
				while (iVar6 < iVar4)
				{
					iVar7 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iVar0, iVar6);
					if (ENTITY::DOES_ENTITY_EXIST(iVar7))
					{
						if (func_806(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_692();
								return true;
							}
						}
					}
					iVar6++;
				}
			}
		}
	}
	return false;
}

int func_692()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_693()
{
	if (Global_1940186.f_36 == 0)
	{
		return false;
	}
	if (Global_1940186.f_36 == Global_1940186.f_34)
	{
		return false;
	}
	if (Global_1940186.f_37 <= 0)
	{
		return false;
	}
	if ((func_692() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_694(var uParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_15))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam1))
	{
		return false;
	}
	fVar0 = func_784(uParam0);
	if (uParam0->f_13 > func_604(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_807(iParam1);
	iVar1 = func_808(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_695(var uParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	float fVar7;
	float fVar8;

	if (!Global_1940186.f_50)
	{
		return false;
	}
	if (!uParam0->f_1 & 1 != 0)
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_533(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_739(vVar1, vVar4);
	fVar8 = MISC::ABSF((vVar1.z - vVar4.z));
	if (fVar8 >= 2f)
	{
		return false;
	}
	if (fVar7 > uParam0->f_31)
	{
		return false;
	}
	return true;
}

int func_696(int iParam0, int iParam1, var uParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (uParam2->f_13 > 4f)
	{
		return 0;
	}
	bVar0 = *uParam2 & 256 != false;
	bVar1 = *uParam2 & 524288 != false;
	bVar2 = *uParam2 & 128 != false;
	return func_809(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_697(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if ((*uParam1 && 1.504633E-36f) != 0)
	{
		return true;
	}
	if (Global_1940186.f_18)
	{
		return true;
	}
	if ((*uParam1 && 9.403955E-38f) != 0)
	{
		if (func_810(iParam0, uParam1, 1))
		{
			return true;
		}
		if ((PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17)) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_33, true, false) == 1)
		{
			return true;
		}
	}
	iVar0 = PED::GET_JACK_TARGET(Global_33);
	if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, true)) || Global_1940186.f_24)
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return true;
		}
	}
	if (!func_528(iParam0))
	{
		return false;
	}
	iVar1 = EVENT::_EVENT_GET_RECENT_EVENT(iParam0, 0, 0);
	if (iVar1 == 0)
	{
		return false;
	}
	switch (iVar1)
	{
		case joaat("EVENT_SHOCKING_SEEN_PED_ROBBED"):
		case joaat("EVENT_SHOCKING_SEEN_PED_INTIMIDATED"):
		case joaat("EVENT_SHOCKING_SEEN_CAR_STOLEN"):
		case joaat("EVENT_SHOCKING_MOUNT_STOLEN"):
			if (func_811(uParam1))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (iVar4 != Global_33)
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			return true;
		case joaat("EVENT_SHOCKING_ENTITY_HOGTIED"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) && PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!func_812(uParam1, iParam0))
					{
						if (func_806(iVar4, Global_34, 1) < 7f)
						{
							return true;
						}
					}
				}
			}
			break;
		case joaat("EVENT_SHOCKING_SEEN_MELEE_ACTION"):
			iVar2 = EVENT::_EVENT_GET_SOURCE_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			iVar3 = EVENT::_EVENT_GET_TARGET_ENTITY_FROM_EVENT(iParam0, iVar1, 0, 0);
			if (!ENTITY::IS_ENTITY_A_PED(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar3))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			iVar4 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
			iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar3);
			if (!PED::IS_PED_A_PLAYER(iVar4) || !PED::IS_PED_A_PLAYER(iVar5))
			{
				EVENT::_0x1A5C5D350068A673(iParam0, 0);
				return false;
			}
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar4, -1f, -1f, -1f, -1f) || PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, iVar5, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar4, 17) || ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, iVar5, 17))
				{
					return true;
				}
			}
			EVENT::_0x1A5C5D350068A673(iParam0, 0);
			return false;
	}
	return false;
}

bool func_698(int iParam0, var uParam1)
{
	if (!func_813(0))
	{
		return false;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

bool func_699(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_692();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_700(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_701(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_692();
	}
	else if (func_692() - uParam1->f_5) > func_814(uParam1)
	{
		return func_815(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_702(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_PED_SOURCE_OF_DEATH(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIgnoreDamageChecking"))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (Global_33 == iVar1 || Global_1940186.f_34 == iVar1)
	{
		return true;
	}
	return false;
}

int func_703(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_816(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_817(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_704(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_190(Local_1172.f_291.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_1172.f_291.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_1172.f_291.f_65), iParam0);
	if (!bParam3 && Local_83[iParam2 /*34*/].f_11.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_83[iParam2 /*34*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_OCCLUDED(*iParam1))
	{
		return false;
	}
	if (!ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), *iParam1, 17))
	{
		return false;
	}
	iVar0 = func_818(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_819(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_705(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_706(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_707(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	vector3 vVar19;
	vector3 vVar22;
	vector3 vVar25;
	vector3 vVar28;
	vector3 vVar31;
	int iVar34;
	int iVar35;
	vector3 vVar36;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	bool bVar42;
	bool bVar43;
	bool bVar44;
	int iVar45;
	int iVar46;

	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return 0;
	}
	MISC::GET_MODEL_DIMENSIONS(iVar0, &vVar1, &vVar4);
	vVar7 = { vVar4 - vVar1 * Vector(1056964608, 1056964608, 1056964608) };
	if (bParam8)
	{
		vVar7.x = ((func_820(iParam0) * 1056964608) + vParam5.x);
		vVar7.f_1 = ((func_821(iParam0) * 1056964608) + vParam5.y);
		vVar7.f_2 = ((func_822(iParam0) * 1056964608) + vParam5.z);
	}
	vVar10 = { func_439(func_823(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_824(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_824(vVar13, vVar10) };
	vVar19 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) + vParam2 };
	vVar22 = { vVar19 - vVar7 * vVar13 + vVar7 * vVar16 };
	vVar25 = { vVar19 + vVar7 * vVar13 + vVar7 * vVar16 };
	vVar28 = { vVar19 - vVar7 * vVar13 - vVar7 * vVar16 };
	vVar31 = { vVar19 + vVar7 * vVar13 - vVar7 * vVar16 };
	GRAPHICS::GET_SCREEN_RESOLUTION(&iVar34, &iVar35);
	vVar36 = { BUILTIN::TO_FLOAT(iVar34), BUILTIN::TO_FLOAT(iVar35), 0f };
	bVar39 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar19, &vVar19, &(vVar19.f_1));
	bVar40 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar22, &vVar22, &(vVar22.f_1));
	bVar41 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar25, &vVar25, &(vVar25.f_1));
	bVar42 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar28, &vVar28, &(vVar28.f_1));
	bVar43 = GRAPHICS::GET_SCREEN_COORD_FROM_WORLD_COORD(vVar31, &vVar31, &(vVar31.f_1));
	bVar44 = (((bVar40 || bVar41) || bVar42) || bVar43);
	if (bVar39)
	{
		vVar19 = { vVar19 * vVar36 };
	}
	if (bVar40)
	{
		vVar22 = { vVar22 * vVar36 };
	}
	if (bVar41)
	{
		vVar25 = { vVar25 * vVar36 };
	}
	if (bVar42)
	{
		vVar28 = { vVar28 * vVar36 };
	}
	if (bVar43)
	{
		vVar31 = { vVar31 * vVar36 };
	}
	iVar45 = (iParam9 / 2);
	iVar46 = (iParam10 / 2);
	if (!bVar39 && !bVar44)
	{
		return 0;
	}
	else if (bVar39 && !bVar44)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = iVar34;
		uParam1->f_3 = iVar35;
	}
	else if (!bVar44)
	{
		return 0;
	}
	else if (bVar40)
	{
		if (!bVar41)
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar22.x)));
		}
		else
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_825((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_825((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar22.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar22.x) - iVar45);
		uParam1->f_1 = (BUILTIN::FLOOR(vVar22.y) - iVar46);
	}
	else if (bVar41)
	{
		if (bVar43)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_825(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
		}
		else
		{
			uParam1->f_3 = (iParam10 + (iVar35 - BUILTIN::FLOOR(vVar25.y)));
		}
		if (uParam1->f_3 < 1)
		{
			uParam1->f_3 = 0;
			return 0;
		}
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_825((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = 0;
		uParam1->f_1 = (BUILTIN::FLOOR(vVar25.y) - iVar46);
	}
	else if (bVar42)
	{
		if (bVar43)
		{
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((vVar31.x - vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		else
		{
			uParam1->f_2 = (iParam9 + (iVar34 - BUILTIN::FLOOR(vVar28.x)));
			if (uParam1->f_2 < 1)
			{
				uParam1->f_2 = 0;
				return 0;
			}
		}
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
		*uParam1 = (BUILTIN::FLOOR(vVar28.x) - iVar45);
		uParam1->f_1 = 0;
	}
	else if (bVar43)
	{
		*uParam1 = 0;
		uParam1->f_1 = 0;
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(vVar31.x));
		uParam1->f_3 = (iParam10 + BUILTIN::FLOOR(vVar28.y));
		if (uParam1->f_2 < 1 || uParam1->f_3 < 1)
		{
			uParam1->f_2 = 0;
			uParam1->f_3 = 0;
			return 0;
		}
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_708(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = (uParam1->f_2 / 2);
	iVar1 = (uParam1->f_3 / 2);
	iVar2 = (*uParam1 + iVar0);
	iVar3 = (uParam1->f_1 + iVar1);
	iVar4 = MISC::ABSI((*iParam0 - iVar2));
	iVar5 = MISC::ABSI((iParam0->f_1 - iVar3));
	if (iVar4 > (iVar0 + iParam0->f_2) || iVar5 > (iVar1 + iParam0->f_2))
	{
		return 0;
	}
	if (iVar4 <= iVar0 || iVar5 <= iVar1)
	{
		return 1;
	}
	iVar6 = (iVar4 - iVar0);
	iVar7 = (iVar5 - iVar1);
	iVar6 = (iVar6 * iVar6);
	iVar7 = (iVar7 * iVar7);
	if (iVar6 + iVar7) <= (iParam0->f_2 * iParam0->f_2)
	{
		return 1;
	}
	return 0;
}

int func_709(var uParam0)
{
	return uParam0->f_23;
}

bool func_710(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 8:
			return iParam2;
		case 4:
		case 16:
			return iParam1;
		case 32:
		case 64:
		case 128:
			return iParam3;
		case 1:
		case 2:
		case 2048:
			return true;
		case 8192:
			return iParam4;
		default:
			break;
	}
	return false;
}

void func_711(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_826(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_827(iParam1);
	func_828(iVar0, iParam0);
}

void func_712(int iParam0)
{
	if (!func_329(1048576, -1, 1))
	{
		if ((ENTITY::IS_ENTITY_DEAD(func_264(0)) && func_359(0, PLAYER::PLAYER_PED_ID(), 0)) || FIRE::IS_ENTITY_ON_FIRE(func_264(0)))
		{
			func_120(8);
			func_360();
		}
		else if (iParam0 != 1024)
		{
			func_474(-4.615115E-09f, 0, 0);
		}
		func_330(1048576);
	}
}

bool func_713(int iParam0)
{
	int iVar0;

	iVar0 = func_829(func_264(iParam0));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return true;
	}
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		return true;
	}
	if (!func_671(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0)))
	{
		return true;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_CURRENT_TARGET_FOR_PED(func_264(iParam0))) == func_264(0) || func_336(func_264(iParam0), -1.021733E-11f))
	{
		return true;
	}
	if (func_644(iParam0, NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0), 1) > func_644(iParam0, 255, 1))
	{
		return true;
	}
	return false;
}

bool func_714(int iParam0)
{
	if (PED::IS_PED_IN_COMBAT(func_264(iParam0), 0))
	{
		if (PED::IS_PED_IN_COMBAT(func_264(iParam0), func_264(0)))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_715(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/]))
	{
		return 255;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (Local_83[iVar0 /*34*/].f_2.f_2[iParam0] > -1f)
			{
				if (iVar1 == -1 || Local_83[iVar0 /*34*/].f_2.f_2[iParam0] < Local_83[iVar1 /*34*/].f_2.f_2[iParam0])
				{
					if (Local_83[iVar0 /*34*/].f_2.f_2[iParam0] <= fParam1 && func_662(PLAYER::GET_PLAYER_PED(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))))
					{
						iVar1 = iVar0;
					}
				}
			}
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
			return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2);
		}
	}
	return 255;
}

bool func_716(int iParam0, bool bParam1)
{
	if (!bParam1 || func_582(iParam0))
	{
		return ENTITY::IS_ENTITY_DEAD(Local_1172.f_131.f_7[iParam0 /*11*/]);
	}
	return false;
}

float func_717(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_718(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (fParam1 > fParam2)
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(uParam0->f_6))
	{
		return false;
	}
	return true;
}

bool func_719(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_718(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_720() - 1017370378);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_720()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_721(int iParam0)
{
	if (func_366(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_722(var uParam0, var uParam1)
{
}

void func_723(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_367(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_265(iParam0))
	{
		func_184(iParam0, 0);
		return;
	}
	else if (func_366(iParam0, 8))
	{
		func_184(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_565(PLAYER::PLAYER_ID())) <= Local_1172.f_514[iParam0 /*39*/].f_2;
	if (bVar1 != func_366(iParam0, 1))
	{
		func_184(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iVar0, Local_1172.f_514[iParam0 /*39*/].f_3, Local_1172.f_514[iParam0 /*39*/].f_2, 0f, Local_1172.f_514[iParam0 /*39*/].f_4, 0f, 0f, 0, false, 3))
			{
			}
			else
			{
				if (func_594(iParam0))
				{
					func_724(iParam0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_1172.f_514[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_1172.f_514[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_593(iParam0, 1);
			}
		}
	}
}

void func_724(int iParam0)
{
	int iVar0;

	if (func_721(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_726(iParam0, iVar0, 1);
		iVar0++;
	}
	func_593(iParam0, 2);
}

bool func_725(int iParam0, int iParam1, int iParam2)
{
	return func_190(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_584(&(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_367(iParam0);
	iVar1 = func_830(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	iVar2 = func_748(iVar1);
	func_831(iVar1, 18, 0, 1);
	func_831(iVar1, 17, 0, 1);
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar2 /*23*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_725(iParam0, iParam1, 2))
	{
		func_832(iVar1, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_725(iParam0, iParam1, 1))
	{
		if (func_725(iParam0, iParam1, 4))
		{
			if (func_727() < Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_728(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_597(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_728(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_597(Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_597(iVar1, 0, 1, 1);
	}
	func_596(iParam0, iParam1, 16);
	Local_1172.f_514[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_727()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_728(int iParam0, bool bParam1)
{
	if (bParam1 && !func_583(iParam0))
	{
		return false;
	}
	return !func_833(iParam0, 4);
}

bool func_729(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_583(iParam0))
	{
		return false;
	}
	iVar0 = func_748(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_730(int iParam0, int iParam1, var uParam2)
{
	return true;
}

void func_731(int iParam0, int iParam1)
{
	func_834(0, 1);
	switch (func_400(func_223(iParam0)))
	{
		case 1:
			if (func_459(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 1:
						if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
						{
							func_835(0, 0, 3.126007E-11f, 1, 1, 0, 0);
						}
						else
						{
							func_835(0, 0, -2.573254E+15f, 1, 1, 0, 0);
						}
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_12 = iParam1;
				func_330(1.504633E-36f);
			}
			break;
	}
}

bool func_732(int iParam0, var uParam1, var uParam2, bool bParam3)
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
	*uParam2 = Global_1297553[iVar0 /*87*/].f_3;
	return true;
}

int func_733(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

int func_734()
{
	return Local_1172.f_1;
}

int func_735(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_836(iParam2, -3.005759E+25f);
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
	func_837(uParam1, bParam0, Var3);
	return 1;
}

void func_736(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == 8.967694E-17f || uParam0->f_1[iVar1] == 1.721179E-28f)
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == 2.95884E+10f || uParam0->f_1[iVar1] == 2.575707E+29f)
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == 2.770086E+17f || uParam0->f_1[iVar1] == -2.793692E-28f) || uParam0->f_1[iVar1] == 1.982896E+31f)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_737(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_838(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_839(uParam2, iParam0, Var1);
	return 1;
}

bool func_738(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/].f_1);
}

float func_739(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_740(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_176(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_1172.f_131.f_7[iParam0 /*11*/]);
	if (iParam2 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(iVar0, iParam2);
	}
	if (iParam3 != 0)
	{
		MAP::SET_BLIP_SPRITE(iVar0, iParam3, true);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(iVar0, sParam4);
	}
	Local_1172.f_131.f_7[iParam0 /*11*/].f_1 = iVar0;
}

Vector3 func_741(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_1172.f_131.f_7[iParam0 /*11*/], true, false);
}

void func_742(var uParam0, vector3 vParam1)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	fVar0 = BUILTIN::COS(vParam1.x);
	fVar1 = BUILTIN::SIN(vParam1.x);
	vVar2.x = *uParam0;
	vVar2.f_1 = ((fVar0 * uParam0->f_1) - (fVar1 * uParam0->f_2));
	vVar2.f_2 = ((fVar1 * uParam0->f_1) + (fVar0 * uParam0->f_2));
	*uParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam1.y);
	fVar1 = BUILTIN::SIN(vParam1.y);
	vVar2.x = ((fVar0 * *uParam0) + (fVar1 * uParam0->f_2));
	vVar2.f_1 = uParam0->f_1;
	vVar2.f_2 = ((fVar0 * uParam0->f_2) - (fVar1 * *uParam0));
	*uParam0 = { vVar2 };
	fVar0 = BUILTIN::COS(vParam1.z);
	fVar1 = BUILTIN::SIN(vParam1.z);
	vVar2.x = ((fVar0 * *uParam0) - (fVar1 * uParam0->f_1));
	vVar2.f_1 = ((fVar1 * *uParam0) + (fVar0 * uParam0->f_1));
	vVar2.f_2 = uParam0->f_2;
	*uParam0 = { vVar2 };
}

int func_743(int iParam0)
{
	return iParam0;
}

bool func_744()
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_4) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_4)))
	{
		return true;
	}
	if (func_252(4096) || func_840(&(Local_1172.f_19.f_111)))
	{
		return true;
	}
	return false;
}

void func_745(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	char* sVar4;
	char* sVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	if (func_190(*uParam1, 2))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		return;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar1, iVar0))
	{
		return;
	}
	bVar2 = false;
	if (!func_841(iVar0, sParam4, 0))
	{
	}
	else
	{
		bVar2 = true;
	}
	bVar3 = func_190(iParam5, 64);
	if (*uParam0 != PLAYER::PLAYER_ID())
	{
		if (!bVar3)
		{
		}
		else if (bVar2)
		{
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				return;
			}
			sVar4 = func_842(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
			if (!ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iVar0, sVar4))
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar4, iVar1, 0);
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iVar0, sParam4, true);
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
				{
					ANIMSCENE::START_ANIM_SCENE(iVar0);
				}
			}
		}
	}
	else if (func_843(iVar1))
	{
		if (func_190(*uParam1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
		}
		func_246(uParam1, 2);
	}
	else
	{
		if (!bVar3)
		{
			NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(iVar0);
		}
		if (bVar2)
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				if (func_190(*uParam1, 1))
				{
					sVar5 = func_842(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
					if (!ANIMSCENE::_HAS_ENTITY_ENTERED_ANIM_SCENE(iVar0, sVar5))
					{
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, sVar5, iVar1, 0);
						ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iVar0, sParam4, true);
						if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
						{
							ANIMSCENE::START_ANIM_SCENE(iVar0);
						}
					}
				}
			}
		}
		PAD::DISABLE_CONTROL_ACTION(0, -56359.69f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
		func_844(250);
		if (func_190(iParam5, 4) && (func_818(iVar1, 0, 1, 0) != -3.273909E-18f || func_818(iVar1, 1, 1, 0) != -3.273909E-18f))
		{
			if (func_845(iVar1, 3.269911E-13f, 0, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
			}
		}
		else if (func_190(iParam5, 1) && PED::IS_PED_FULLY_ON_MOUNT(iVar1, true))
		{
			if (PED::IS_PED_FULLY_ON_MOUNT(iVar1, false))
			{
				if (func_845(iVar1, 5.999514E-21f, 0, 0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_190(iParam5, 2) && PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				if (func_845(iVar1, -1.283316E+09f, 0, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 0);
				}
			}
		}
		else if (func_190(iParam5, 8) && PED::GET_PED_STEALTH_MOVEMENT(iVar1))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iVar1, false, 0, 0);
		}
		else if (func_190(iParam5, 16) && PED::GET_PED_CROUCH_MOVEMENT(iVar1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
		}
		else if (func_190(iParam5, 32) && PED::IS_PED_CARRYING_SOMETHING(iVar1))
		{
			if (func_845(iVar1, -2.350014E+31f, 0, 0))
			{
				iVar6 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar1);
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(iVar1, iVar6, 0f, 0f, 0f, 1f, 1);
			}
		}
		else if (bVar2)
		{
			fVar7 = 8.330918E+10f;
			if (!bVar3)
			{
				fVar7 = 3.034861E-30f;
			}
			if (func_845(iVar1, fVar7, 0, 0))
			{
				if (func_190(*uParam1, 1))
				{
					if (!func_190(*uParam1, 4))
					{
						func_246(uParam1, 2);
					}
					else if (!bVar3)
					{
						func_246(uParam1, 2);
					}
				}
				else
				{
					if (bVar3)
					{
						iParam6 |= 8;
					}
					if (!bVar3)
					{
						TASK::OPEN_SEQUENCE_TASK(&iVar8);
					}
					TASK::TASK_ENTER_ANIM_SCENE(func_846(bVar3, iVar1, 0), iVar0, func_842(PED::IS_PED_MALE(iVar1), sParam2, sParam3), sParam4, 1f, bVar3, iParam6, iParam8, -1f);
					if (!bVar3)
					{
						TASK::TASK_STAND_STILL(0, iParam7);
						func_847(iVar1, &iVar8, 0, 0, 1, 1);
					}
					func_246(uParam1, 1);
				}
			}
			else if (!func_190(*uParam1, 4))
			{
				func_246(uParam1, 4);
			}
		}
	}
}

bool func_746(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_747()
{
	return Global_1102813.f_3672;
}

int func_748(int iParam0)
{
	return iParam0;
}

void func_749(int iParam0)
{
	if (!func_848(iParam0))
	{
		return;
	}
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_DELETE(Global_1951897[iParam0 /*23*/].f_3);
	}
	Global_1951897[iParam0 /*23*/].f_4 = 0;
	Global_1951897[iParam0 /*23*/] = 1;
	Global_1951897[iParam0 /*23*/].f_16 = 0;
	Global_1951897[iParam0 /*23*/].f_1 = 0;
	Global_1951897[iParam0 /*23*/].f_6 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_12 = { 0f, 0f, 0f };
	Global_1951897[iParam0 /*23*/].f_9 = 0f;
	Global_1951897[iParam0 /*23*/].f_10 = 0;
	Global_1951897[iParam0 /*23*/].f_11 = 0;
	Global_1951897[iParam0 /*23*/].f_2 = 1;
	Global_1951897[iParam0 /*23*/].f_15 = -1f;
}

bool func_750(struct<2> Param0, bool bParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_849(bParam2);
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

int func_751()
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

void func_752(var uParam0, var uParam1)
{
}

void func_753(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_754(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_833(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_755(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_756(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_757(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_758(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_850(iParam0))
	{
		return false;
	}
	if (func_851(iParam0, uParam1, &uVar0))
	{
		func_852(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

var func_759(int iParam0, int iParam1)
{
	return func_853(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_760(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_761(bool bParam0, bool bParam1, bool bParam2)
{
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(bParam0, bParam1, bParam2);
}

void func_762(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

char* func_763(int iParam0, int iParam1)
{
	char cVar0[32];
	char* sVar4[5];
	char* sVar10[5];

	sVar4[0] = "D";
	sVar4[1] = "A";
	sVar4[2] = "B";
	sVar4[3] = "C";
	sVar4[4] = "E";
	sVar10[0] = "B";
	sVar10[1] = "D";
	sVar10[2] = "E";
	sVar10[3] = "F";
	sVar10[4] = "";
	switch (iParam0)
	{
		case 0:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_OCONVO_", 32);
			StringConCat(&cVar0, sVar4[iParam1], 32);
			break;
		case 1:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_A_MP", 32);
			break;
		case 2:
			if (Local_13.f_7.f_8 < 3)
			{
				StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_", 32);
				StringConCat(&cVar0, sVar10[iParam1], 32);
			}
			else
			{
				StringCopy(&cVar0, "RE_SUS_GUA_V1_PLYR_LEAVING_B", 32);
			}
			break;
		case 3:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_MCONVO_F", 32);
			break;
		case 7:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_PLYR_LEAVING_D", 32);
			break;
		case 4:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_DONT_SHOOT_A", 32);
			break;
		case 8:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_A", 32);
			break;
		case 9:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_C", 32);
			break;
		case 10:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_C", 32);
			break;
		case 15:
			StringCopy(&cVar0, "RE_SUS_GUA_V2_GOODBYE_A", 32);
			break;
		case 16:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_SHOT_B", 32);
			break;
		case 11:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_WAIT", 32);
			break;
		case 12:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_WAIT", 32);
			break;
		case 13:
			StringCopy(&cVar0, "RE_SUS_GUA_V2_THANK_A", 32);
			break;
		case 14:
			StringCopy(&cVar0, "RE_SUS_GUA_V1_THANK_NO", 32);
			break;
		default:
			return "";
	}
	return func_854(cVar0);
}

bool func_764(int iParam0, char* sParam1, int iParam2, float fParam3, int iParam4, int iParam5)
{
	return func_855(func_264(iParam0), sParam1, fParam3, iParam2, iParam5, func_640(iParam0), iParam4, 1);
}

void func_765(int iParam0)
{
	vector3 vVar0;

	if (func_856(iParam0, &vVar0))
	{
		if (!func_857(&(Local_1172.f_19.f_5), vVar0, 0, -1, 0, 0))
		{
		}
	}
}

float func_766(float fParam0, float fParam1, float fParam2)
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

void func_767(int iParam0)
{
}

void func_768(int iParam0)
{
}

void func_769(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_770(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_771(var uParam0)
{
	return func_655(*uParam0, 2);
}

bool func_772(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_858(uParam1);
	if (uParam1->f_13 > (fVar0 + 5f))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iParam0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	}
	if (uParam1->f_13 < fVar0 || PED::IS_TRACKED_PED_VISIBLE(iParam0))
	{
		fVar1 = -1f;
		fVar2 = func_859(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
		bVar3 = uParam1->f_1 & 2 != false;
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, fVar2, -1f, fVar1) && PED::CAN_PED_SEE_ENTITY(iParam0, Global_33, true, bVar3) == 1)
		{
			return true;
		}
		else if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
		{
			if (WEAPON::_IS_WEAPON_LANTERN(Global_1940186.f_38) || WEAPON::_IS_WEAPON_TORCH(Global_1940186.f_38))
			{
				if (uParam1->f_13 <= 5f)
				{
					if (func_860())
					{
						if (PED::IS_PED_FACING_PED(Global_33, iParam0, 110f))
						{
							if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
							{
								return true;
							}
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_773(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_861(iParam0))
	{
		PLAYER::SET_PLAYER_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.25f);
	}
	if (((PED::GET_PED_CROUCH_MOVEMENT(Global_33) || PED::IS_PED_IN_COVER(Global_33, false, false)) || PED::IS_PED_GOING_INTO_COVER(Global_33)) || *uParam1 & 2097152 != 0)
	{
		bVar1 = false;
	}
	else
	{
		bVar1 = true;
	}
	if (PED::_0x0EA9EACBA3B01601(Global_33, iParam0, bVar1) && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 4f)
	{
		if (*uParam1 & 512 != 0)
		{
			if (PED::IS_PED_IN_COVER(Global_33, false, false) || PED::IS_PED_GOING_INTO_COVER(Global_33))
			{
				return false;
			}
			if (PED::GET_PED_CROUCH_MOVEMENT(Global_33) || ((PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_33, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) < 1090519040) && *uParam1 & 2097152 != 0))
			{
				return false;
			}
		}
		if (PED::GET_PED_BLACKBOARD_SCRIPT_FLOAT(Global_33, "stealth") == 1f && PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 1090519040)
		{
		}
		iVar0 = 1;
	}
	return iVar0;
}

bool func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_264(iVar0)))
		{
			if (func_462(iVar0))
			{
				iVar1++;
			}
		}
		iVar0++;
	}
	iVar2 = func_461();
	if (iVar2 > -1 && (iVar2 - iVar1) < 2)
	{
		return iVar2 <= iParam0;
	}
	return false;
}

bool func_775(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1172.f_291.f_171, iParam0);
}

int func_776(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_1172.f_131.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam1 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_83[iVar0 /*34*/].f_2.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_622(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_83[iVar0 /*34*/].f_2.f_2[iParam0] > Local_83[iVar1 /*34*/].f_2.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_83[iVar0 /*34*/].f_2.f_2[iParam0] > fParam1)
		{
		}
		else
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 > -1 && iVar1 < 32)
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
	}
	return 255;
}

void func_777(int iParam0)
{
	int iVar0;
	bool bVar1;
	var uVar2;
	bool bVar3;

	if (Global_19 & 4 != 0)
	{
		return;
	}
	iVar0 = (iParam0 - Global_1940186.f_32);
	Global_1940186.f_21 = func_862();
	if (Global_1940186.f_21)
	{
		Global_1940186.f_22 = MISC::GET_GAME_TIMER();
	}
	bVar1 = false;
	if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
	{
		bVar1 = true;
		if (PED::IS_PED_SHOOTING(Global_33))
		{
			if (WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar2))
			{
			}
			else
			{
				uVar2 = Global_1940186.f_38;
			}
			Global_1940186.f_40 = uVar2;
		}
	}
	switch (iVar0)
	{
		case 0:
			func_863(&(Global_1940186.f_28), &(Global_1940186.f_33));
			Global_1940186.f_32 = iParam0;
			break;
		case 1:
			Global_1940186.f_24 = PLAYER::_0x72AD59F7B7FB6E24(PLAYER::PLAYER_ID(), 4000);
			if (!Global_1940186.f_24)
			{
				if (bVar1 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_38))
				{
					Global_1940186.f_24 = PED::_GET_LASSO_TARGET(Global_33) != 0;
				}
				if (Global_1940186.f_40 == 1284.666f)
				{
					Global_1940186.f_24 = WEAPON::_0x46D42883E873C1D7(Global_33) > 0;
				}
			}
			break;
		case 2:
			bVar3 = WEAPON::IS_WEAPON_VALID(Global_1940186.f_40);
			if (bVar3 && WEAPON::_IS_WEAPON_LASSO(Global_1940186.f_40))
			{
				Global_1940186.f_19 = 0;
			}
			else
			{
				if (bVar3 && WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40))
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 3f;
				}
				else
				{
					Global_1940186.f_19 = PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 1f;
				}
				if (Global_1940186.f_19)
				{
					Global_1940186.f_23 = MISC::GET_FRAME_COUNT();
				}
			}
			break;
		default:
			Global_1940186.f_32 = iParam0 + 1;
			break;
	}
	Global_19 |= 4;
}

var func_778(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_779(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_864(bParam0, &iVar0, &iVar1))
	{
		if (bParam1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::GET_PED_CONFIG_FLAG(iVar0, 6, false))
			{
				return false;
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::GET_PED_CONFIG_FLAG(iVar1, 6, false))
			{
				return false;
			}
		}
		return true;
	}
	return false;
}

bool func_780(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_865(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_865(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_808(iVar0) == -1)
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
	{
		return false;
	}
	uParam0->f_15 = iVar0;
	return true;
}

void func_781(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_866(uParam0);
	}
}

bool func_782(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(iParam2))
	{
		iVar1 = func_808(iParam2);
	}
	else
	{
		iVar1 = func_807(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_808(iParam0);
	}
	else
	{
		iVar0 = func_807(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_190(*uParam1, 8388608))
	{
		return true;
	}
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0);
	iVar3 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam2);
	switch (iVar2)
	{
		case joaat("REL_CIVMALE"):
		case joaat("REL_RE_VICTIM"):
		case joaat("REL_CIVNATIVE"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_COP"):
		case joaat("REL_CIVFEMALE"):
			switch (iVar3)
			{
				case joaat("REL_CIVMALE"):
				case joaat("REL_RE_VICTIM"):
				case joaat("REL_CIVNATIVE"):
				case joaat("REL_CIVFEMALE"):
					return true;
			}
			break;
	}
	if (iVar2 == iVar3)
	{
		return true;
	}
	return false;
}

float func_783(int iParam0, int iParam1)
{
	return func_804(iParam0, iParam1, 1, 1);
}

float func_784(var uParam0)
{
	return uParam0->f_29;
}

void func_785(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_246(uParam0, 3.85186E-34f);
	}
	else
	{
		func_281(uParam0, 3.85186E-34f);
	}
}

void func_786()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_787(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_804(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_867(iVar0, 0)))
		{
			if (func_868(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_788(var uParam0)
{
	return uParam0->f_18;
}

bool func_789(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_190(*uParam0, 4194304))
	{
		fVar0 = fParam3;
	}
	if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_33, -1f, fParam3, -1f, fVar0))
	{
		return true;
	}
	if (*uParam0 & 32768 != 0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_33, 17))
		{
			return true;
		}
	}
	return false;
}

int func_790(var uParam0)
{
	return uParam0->f_19;
}

int func_791(var uParam0)
{
	return uParam0->f_20;
}

bool func_792(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	int iVar1;

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
	if (bParam3)
	{
	}
	if (PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, false) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0))
	{
		if ((bParam1 && WEAPON::IS_PED_ARMED(iVar0, 4)) || (bParam2 && WEAPON::IS_PED_ARMED(iVar0, 2)))
		{
			return true;
		}
	}
	if (PLAYER::IS_PLAYER_FREE_AIMING(iVar1))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(func_867(iVar0, 0)))
		{
			if (func_869(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_793(bool bParam0, bool bParam1, bool bParam2)
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

float func_794(var uParam0)
{
	return uParam0->f_25;
}

int func_795(var uParam0)
{
	int iVar0;

	switch (uParam0->f_8)
	{
		case 0:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 2:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 1:
			switch (uParam0->f_7)
			{
				case 3:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
		case 2:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 1:
					iVar0 = 2;
					break;
			}
			break;
		case 3:
			switch (uParam0->f_7)
			{
				case 2:
					iVar0 = 0;
					break;
				case 1:
					iVar0 = 1;
					break;
				case 3:
					iVar0 = 2;
					break;
			}
			break;
		case 4:
			switch (uParam0->f_7)
			{
				case 1:
					iVar0 = 0;
					break;
				case 3:
					iVar0 = 1;
					break;
				case 2:
					iVar0 = 2;
					break;
			}
			break;
	}
	if ((*uParam0 && 2.350989E-38f) != 0)
	{
		if (iVar0 == 2)
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_796(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_870(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_COORD(iParam0, vParam4, 17))
		{
			return true;
		}
	}
	if (BUILTIN::VDIST(vParam1, vParam4) < 5f)
	{
		return true;
	}
	return false;
}

int func_797(int iParam0)
{
	if (PED::GET_PED_CONFIG_FLAG(iParam0, 9, false))
	{
		if (Global_1940186.f_38 == -3.273909E-18f)
		{
			return 1;
		}
		if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_40))
		{
			if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_40) || WEAPON::IS_WEAPON_BOW(Global_1940186.f_40))
			{
				return 1;
			}
		}
	}
	if (func_871(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_798(int iParam0)
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

bool func_799(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_861(iParam1))
		{
			return false;
		}
	}
	fVar0 = 5f;
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_800(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_861(iParam1))
		{
			return false;
		}
	}
	fVar0 = 1092616192; /* Float: 10f */
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
	}
	if (fParam2 < fVar0)
	{
		return true;
	}
	return false;
}

bool func_801(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_872(uParam0);
	if (func_861(iParam1))
	{
		return false;
	}
	if (*uParam0 & 65536 != 0)
	{
		fVar0 = PED::_0x2BA9D7BF629F920C(iParam1);
	}
	if (fParam2 < fVar0)
	{
		if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam1, Global_1940186.f_28[iParam3], 17))
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam1, Global_1940186.f_28[iParam3], -1f, -1f, -1f, -1f))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_802(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_873(iParam0, 1, 0, 0)) && !func_873(iParam0, 1, 0, 0) == 1284.666f)
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(iParam0, 16, 0))
	{
		if (PED::GET_MELEE_TARGET_FOR_PED(iParam0) == iParam1)
		{
			return true;
		}
	}
	return false;
}

bool func_803(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_804(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_805(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_806(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_806(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_807(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseOwnerTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseOwnerTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_808(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam0, true))
	{
		return -1;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamA") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamA"))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseTeamB") && DECORATOR::DECOR_GET_BOOL(iParam0, "HorseTeamB"))
	{
		return 1;
	}
	return -1;
}

int func_809(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (Global_1940186.f_34 != 0)
	{
		bVar0 = true;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam1, PLAYER::PLAYER_PED_ID(), true, true))
		{
			return 1;
		}
	}
	if (bVar0)
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, Global_1940186.f_34, true, true))
		{
			return 1;
		}
	}
	if (!bParam5)
	{
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 10, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (PED::_0x947E43F544B6AB34(iParam0, PLAYER::GET_PLAYER_INDEX(), 11, 400))
		{
			if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
		if (bParam3)
		{
			if (func_669(Global_33, &iVar1))
			{
				if (fParam4 < 4f)
				{
					if (PED::IS_PED_RAGDOLL(iParam0) || (!bParam2 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar1, iParam0)))
					{
						return 1;
					}
				}
			}
		}
	}
	if (bParam3)
	{
		if (PED::_HAS_PED_BEEN_SHOVED_RECENTLY(iParam0, 400))
		{
			return 1;
		}
	}
	if (fParam4 <= 0f)
	{
		fVar2 = func_804(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
	}
	else
	{
		fVar2 = fParam4;
	}
	if (fVar2 < 1f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iParam0))
		{
			if (!bParam2)
			{
				return 1;
			}
			else if (PED::IS_PED_RAGDOLL(iParam0))
			{
				return 1;
			}
		}
	}
	if (bVar0)
	{
		if (func_804(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_1940186.f_34, iParam0))
			{
				if (!bParam2)
				{
					return 1;
				}
				else if (PED::IS_PED_RAGDOLL(iParam0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

bool func_810(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_864(1, &iVar0, &iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
			{
				if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
				{
					if (!bParam2 || !func_812(uParam1, iVar0))
					{
						return true;
					}
				}
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 != iParam0)
		{
			if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f) && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(iParam0, Global_33, 17))
			{
				if (!bParam2 || !func_812(uParam1, iVar1))
				{
					if (func_806(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_811(var uParam0)
{
	return func_190(*uParam0, 131072);
}

bool func_812(var uParam0, int iParam1)
{
	int iVar0;

	if (DECORATOR::DECOR_EXIST_ON(iParam1, "bIsCriminal") && DECORATOR::DECOR_GET_BOOL(iParam1, "bIsCriminal"))
	{
		return true;
	}
	if (PED::GET_PED_CONFIG_FLAG(iParam1, 4, false))
	{
		return true;
	}
	iVar0 = PED::GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(iParam1);
	switch (iVar0)
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
			return true;
		default:
			break;
	}
	return false;
}

bool func_813(int iParam0)
{
	return false;
}

int func_814(var uParam0)
{
	return uParam0->f_22;
}

int func_815(int iParam0, var uParam1, bool bParam2, float fParam3)
{
	if (!bParam2)
	{
		if (uParam1->f_5 == 0)
		{
			return 0;
		}
	}
	if (fParam3 < 0f)
	{
		fParam3 = uParam1->f_13;
	}
	if (PED::IS_PED_FACING_PED(iParam0, Global_33, 90f))
	{
		if (PED::IS_TARGET_PED_IN_PERCEPTION_AREA(iParam0, Global_33, -1f, -1f, -1f, -1f))
		{
			return 1;
		}
	}
	else if (fParam3 < 1069547520)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, Global_33))
		{
			return 1;
		}
	}
	return 0;
}

float func_816(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_817(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_818(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_819(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_820(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.x, fVar0);
	fVar1 = func_859(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.x, fVar0);
	fVar1 = func_859(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.x, fVar0);
	fVar1 = func_859(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.x, fVar0);
	fVar1 = func_859(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.x, fVar0);
	fVar1 = func_859(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_821(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.y, fVar0);
	fVar1 = func_859(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.y, fVar0);
	fVar1 = func_859(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.y, fVar0);
	fVar1 = func_859(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.y, fVar0);
	fVar1 = func_859(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.y, fVar0);
	fVar1 = func_859(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_822(int iParam0)
{
	float fVar0;
	float fVar1;
	vector3 vVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	fVar0 = -971228160; /* Float: -9999f */
	fVar1 = 1176255488; /* Float: 9999f */
	vVar2 = { 0f, 0f, 0f };
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 21030, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.z, fVar0);
	fVar1 = func_859(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.z, fVar0);
	fVar1 = func_859(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.z, fVar0);
	fVar1 = func_859(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.z, fVar0);
	fVar1 = func_859(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_874(vVar2.z, fVar0);
	fVar1 = func_859(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_823(int iParam0)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;

	if (!CAM::DOES_CAM_EXIST(iParam0))
	{
		vVar0 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
	}
	else
	{
		vVar0 = { CAM::GET_CAM_ROT(iParam0, 2) };
	}
	fVar3 = BUILTIN::SIN(vVar0.z);
	fVar4 = BUILTIN::COS(vVar0.z);
	fVar5 = BUILTIN::SIN(vVar0.x);
	fVar6 = BUILTIN::COS(vVar0.x);
	return func_439((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_824(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_825(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

bool func_826(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_875(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_827(int iParam0)
{
	return iParam0 + 8;
}

void func_828(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_497(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::SET_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

int func_829(int iParam0)
{
	int iVar0;

	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_CURRENT_TARGET_FOR_PED(iParam0));
	if (iVar0 == 0 || !PED::IS_PED_A_PLAYER(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, iVar0))
	{
		return NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
	}
	return 0;
}

int func_830(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
	if (!ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_833(iVar0, 2))
		{
			if (bParam15)
			{
			}
			else
			{
				if (iParam2 == Global_1951897[iVar0 /*23*/].f_11 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
				{
					if (iParam3 <= Global_1951897[iVar0 /*23*/])
					{
						return iVar0;
					}
				}
				Jump @140; //curOff = 127
				if (iVar1 == 0)
				{
					iVar1 = iVar0;
				}
			}
			iVar0++;
			if (iVar1 != 0)
			{
				func_876(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_831(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_583(iParam0))
	{
		return;
	}
	iVar0 = func_748(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_832(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_583(iParam0))
	{
		return;
	}
	iVar0 = func_748(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

bool func_833(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_834(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = func_183(iVar0);
		func_405(iVar1, 0, bParam0, bParam1);
		func_405(iVar1, 1, bParam0, bParam1);
		func_405(iVar1, 2, bParam0, bParam1);
		iVar0++;
	}
}

void func_835(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		return;
	}
	if (func_818(iVar0, 0, 1, 0) != -3.273909E-18f)
	{
		return;
	}
	TASK::_TASK_PLAY_EMOTE(iVar0, iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6, false);
}

void func_836(int iParam0, int iParam1)
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

void func_837(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_877(uParam0))
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

void func_838(var uParam0)
{
	func_736(uParam0, 8.505438E-34f);
	if (func_878() == 3.272964E+34f)
	{
		func_736(uParam0, 8.967694E-17f);
	}
	else
	{
		func_736(uParam0, 1.721179E-28f);
	}
}

void func_839(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_877(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2539 < 20)
	{
		Global_1292096.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2539.f_1[iVar0 /*22*/] = { Global_1292096.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1292096.f_2539.f_1[(Global_1292096.f_2539 - 1) /*22*/] = { Var1 };
}

bool func_840(var uParam0)
{
	return func_190(*uParam0, 2);
}

bool func_841(int iParam0, char* sParam1, bool bParam2)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iParam0))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
		{
			return false;
		}
		if (bParam2)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0, sParam1))
			{
				return false;
			}
		}
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(iParam0, sParam1))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(iParam0, sParam1);
		}
	}
	if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(iParam0, sParam1))
	{
		if (bParam2)
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iParam0, sParam1))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(iParam0, sParam1, true);
				return false;
			}
		}
		return true;
	}
	return false;
}

char* func_842(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_843(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_RAGDOLL(iParam0) || PED::IS_PED_RUNNING_RAGDOLL_TASK(iParam0))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_LASSOED(iParam0))
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(iParam0))
	{
		return true;
	}
	if (PED::IS_PED_SHOOTING(iParam0))
	{
		return true;
	}
	if (func_879())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		iVar1 = SCRIPTS::GET_EVENT_AT_INDEX(0, iVar0);
		switch (iVar1)
		{
			case joaat("EVENT_KNOCKEDOUT"):
			case joaat("EVENT_DEATH"):
			case joaat("EVENT_DAMAGE"):
			case joaat("EVENT_LASSO_HIT"):
			case joaat("EVENT_ENTITY_DAMAGED"):
			case joaat("EVENT_BOLAS_HIT"):
			case 2145012826:
				if (!SCRIPTS::GET_EVENT_DATA(0, iVar0, &iVar2, 9))
				{
				}
				else if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
				}
				else
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == iParam0)
					{
						return true;
					}
				}
		}
		iVar0++;
	}
	return false;
}

void func_844(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_845(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_880(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

int func_846(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_847(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_848(int iParam0)
{
	return func_833(iParam0, 2);
}

void func_849(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_850(int iParam0)
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

bool func_851(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_881(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_852(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_882(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_883(iVar0);
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
			uParam2->f_5 = func_884(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_885(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_886(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_887(iVar0);
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

var func_853(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_888() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_889());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_889());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_889());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_890(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_891(iVar2))
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
				if (iVar9 & 8192 != 0 && func_892(iVar2) != 1)
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
					if (!func_893(iVar10))
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

char* func_854(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_855(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, var uParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = uParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_894(iParam0, &Var0);
}

bool func_856(int iParam0, char* sParam1)
{
	StringCopy(sParam1, "RESUS_", 24);
	switch (iParam0)
	{
		case 0:
			StringConCat(sParam1, "CALLOUT1", 24);
			break;
		case 1:
			StringConCat(sParam1, "CALLOUT2", 24);
			break;
		case 2:
			StringConCat(sParam1, "CALLOUT3", 24);
			break;
		case 3:
			StringConCat(sParam1, "ANICLOSE", 24);
			break;
		case 17:
			StringConCat(sParam1, "KILLANI", 24);
			break;
		case 18:
			StringConCat(sParam1, "KILLALL", 24);
			break;
		case 19:
			StringConCat(sParam1, "ANIFLEE", 24);
			break;
		case 20:
			StringConCat(sParam1, "REACTS", 24);
			break;
		case 21:
			StringConCat(sParam1, "HELP1", 24);
			break;
		case 22:
			StringConCat(sParam1, "HELP2", 24);
			break;
		case 7:
			StringConCat(sParam1, "GIVEUP", 24);
			break;
		case 23:
			StringConCat(sParam1, "PLEAVE", 24);
			break;
		case 24:
			StringConCat(sParam1, "RETURN", 24);
			break;
		case 8:
			StringConCat(sParam1, "THANKS", 24);
			break;
		case 9:
			StringConCat(sParam1, "REWARD", 24);
			break;
		case 10:
			StringConCat(sParam1, "REWARD", 24);
			break;
		case 11:
			StringConCat(sParam1, "WAITRE", 24);
			break;
		case 13:
			StringConCat(sParam1, "ACCEPT", 24);
			break;
		case 14:
			StringConCat(sParam1, "DECLINE", 24);
			break;
		case 15:
			StringConCat(sParam1, "PEDLEAVE", 24);
			break;
		case 16:
			StringConCat(sParam1, "ANIATTACK", 24);
			break;
		case 6:
			StringConCat(sParam1, "STRUGTIE", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_857(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_895(uParam0, &Global_1051270, vParam1, iParam4, iParam5, bParam6, iParam7);
}

float func_858(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_604(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_896(uParam0);
	}
	return func_604(uParam0);
}

float func_859(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_860()
{
	int iVar0;
	int iVar1;

	iVar0 = func_898(func_897());
	iVar1 = func_899(func_897());
	if (iVar0 >= 21)
	{
		return true;
	}
	else if (iVar0 < 5)
	{
		return true;
	}
	else if (iVar0 >= 20)
	{
		if (iVar1 >= 20)
		{
			return true;
		}
	}
	else if (iVar0 < 6)
	{
		if (iVar1 <= 20)
		{
			return true;
		}
	}
	return false;
}

bool func_861(int iParam0)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (((((((((iVar0 == -1.657435E-22f || iVar0 == 2.81552E+22f) || iVar0 == 3.025941E+25f) || iVar0 == 7.594647E-28f) || iVar0 == -6.591612E+25f) || iVar0 == 5.846906E-16f) || iVar0 == -0.7710786f) || iVar0 == 3.572616E-37f) || iVar0 == 1.229294E-26f) || iVar0 == -3.037554E-34f)
	{
		return true;
	}
	if (iVar0 == -3.037554E-34f || iVar0 == 14.24763f)
	{
		iVar0 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(iParam0);
		if (iVar0 == 0.0004269964f)
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_862()
{
	if (func_900())
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

void func_863(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (!PLAYER::_0x72AD59F7B7FB6E24(iVar2, 200))
	{
		*uParam1 = 0;
		return;
	}
	if (PLAYER::_0x1A6E84F13C952094(iVar2, 200, uParam0))
	{
		iVar1 = 0;
		while (iVar1 < *uParam0)
		{
			if (!ENTITY::DOES_ENTITY_EXIST((*uParam0)[iVar1]))
			{
			}
			else if (!PED::IS_PED_HUMAN((*uParam0)[iVar1]) && !(DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamA") || DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "HorseTeamB")))
			{
			}
			else if (DECORATOR::DECOR_EXIST_ON((*uParam0)[iVar1], "bIgnoreDamageChecking"))
			{
			}
			else
			{
				iVar0++;
			}
			iVar1++;
		}
	}
	*uParam1 = iVar0;
}

bool func_864(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_26))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_26))
		{
			*iParam1 = Global_1940186.f_26;
			iVar0 = 1;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_27))
	{
		if (!bParam0 || PED::IS_PED_HUMAN(Global_1940186.f_27))
		{
			if (PED::IS_PED_HOGTIED(Global_1940186.f_27) || ENTITY::IS_ENTITY_DEAD(Global_1940186.f_27))
			{
				*iParam2 = Global_1940186.f_27;
				iVar0 = 1;
			}
		}
	}
	if (Global_1940186.f_24 && !PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = PED::_GET_LASSO_TARGET(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (!bParam0 || PED::IS_PED_HUMAN(iVar1))
			{
				*iParam1 = iVar1;
				iVar0 = 1;
			}
		}
	}
	return iVar0;
}

int func_865(var uParam0)
{
	int iVar0;
	int iVar1;

	if (iVar0 == 0)
	{
		if (PAD::IS_CONTROL_JUST_PRESSED(0, -4.980293E+32f) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
		{
			if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar1, false, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar1)))
						{
							iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
							return iVar0;
						}
					}
				}
			}
		}
	}
	if (uParam0->f_7 == 3)
	{
		if (iVar0 == 0)
		{
			if (!Global_1940186.f_6)
			{
				iVar0 = PED::_0x4B19F171450E0D4F(Global_33);
			}
		}
		if (iVar0 == 0)
		{
			iVar0 = PED::_GET_LASSO_TARGET(Global_33);
		}
		if (iVar0 != 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (!PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iVar0)))
				{
					iVar0 = 0;
				}
			}
		}
	}
	return iVar0;
}

void func_866(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_281(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_246(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_867(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_868(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_869(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_869(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_870(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_871(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (bParam3 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, -3.273909E-18f, iParam1))
		{
			return true;
		}
		else if (!bParam2)
		{
			if (WEAPON::IS_WEAPON_VALID(Global_1940186.f_38))
			{
				if (WEAPON::IS_WEAPON_MELEE_WEAPON(Global_1940186.f_38) || Global_1940186.f_38 == -4.550719E+16f)
				{
					if (WEAPON::_HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON_RECENTLY(iParam0, Global_1940186.f_38, iParam1))
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

float func_872(var uParam0)
{
	return uParam0->f_28;
}

float func_873(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_874(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

int func_875(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 4;
		case 4:
			return 2;
		default:
			break;
	}
	return 8;
}

void func_876(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_754(iParam0, 1);
	func_755(iParam0, 1);
	func_756(iParam0, 128);
}

bool func_877(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_878()
{
	return Global_1953279.f_1;
}

bool func_879()
{
	return Global_1896762.f_352;
}

bool func_880(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_881(int iParam0)
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

int func_882(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_901(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_883(int iParam0)
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

int func_884(int iParam0)
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

int func_885(int iParam0)
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

int func_886(int iParam0)
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

int func_887(int iParam0)
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

int func_888()
{
	return Global_1051645.f_12;
}

char* func_889()
{
	return "unnamed";
}

int func_890(int iParam0)
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

bool func_891(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_581(36, iParam0);
}

int func_892(int iParam0)
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

bool func_893(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_902(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_903(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_894(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_895(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8)
{
	bool bVar0;

	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vParam2))
	{
		bVar0 = AUDIO::CREATE_NEW_SCRIPTED_CONVERSATION(&vParam2);
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_904(vParam2, uParam0, uParam1);
		if (bParam7)
		{
			AUDIO::PRELOAD_SCRIPT_CONVERSATION(&vParam2, true, true, bParam8);
		}
		else
		{
			AUDIO::START_SCRIPT_CONVERSATION(&vParam2, true, true, bParam8);
		}
		if (bParam5)
		{
			AUDIO::_0x40CA665AB9D8D505(&vParam2, iParam6);
		}
	}
	return bVar0;
}

var func_896(var uParam0)
{
	return uParam0->f_27;
}

int func_897()
{
	return Global_1902565;
}

int func_898(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_899(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_900()
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

bool func_901(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_905(iParam0, uParam1, &uVar0))
	{
		func_906(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_902(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_903(int iParam0)
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
		func_907(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_908(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_904(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (uParam3->f_97 - 1))
	{
		if (!ENTITY::DOES_ENTITY_EXIST((*uParam3)[iVar0 /*4*/]))
		{
		}
		else if (ENTITY::IS_ENTITY_DEAD((*uParam3)[iVar0 /*4*/]))
		{
		}
		else if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], 0))
		{
		}
		else
		{
			AUDIO::ADD_PED_TO_CONVERSATION(&uParam0, (*uParam3)[iVar0 /*4*/], &((uParam3[iVar0 /*4*/])->f_1));
			iVar1 = 0;
			iVar1 = 0;
			while (iVar1 <= ((uParam4[iVar0 /*14*/])->f_13 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST((*uParam4[iVar0 /*14*/])[iVar1 /*4*/]) && !ENTITY::IS_ENTITY_DEAD((*uParam4[iVar0 /*14*/])[iVar1 /*4*/]))
				{
					iVar2 = (*uParam3)[iVar0 /*4*/];
					iVar3 = (*uParam4[iVar0 /*14*/])[iVar1 /*4*/];
					AUDIO::_0xA2323A2EAE32A290(iVar2, iVar3, &((uParam4[iVar0 /*14*/][iVar1 /*4*/])->f_1));
				}
				iVar1++;
				iVar1++;
			}
		}
		iVar0++;
	}
}

bool func_905(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_881(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_906(bool bParam0, int iParam1, var uParam2)
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

void func_907(int iParam0)
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
	func_908(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_908(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

