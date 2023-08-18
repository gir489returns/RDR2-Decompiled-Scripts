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
	struct<58> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 255, 255, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 2, 0, 0, 1, 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 2 } ;
	var uLocal_71 = 0;
	var uLocal_72 = 255;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 255;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<25> Local_78[32];
	struct<506> Local_879 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, -1, 0, 1148846080, -1065353216, 0, 0, 0, 0, 1148846080, -1065353216, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 2, 1, 1, 1, 0, 1, 2, 2, 3, 0, 0, 3, 1, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 2, 0, 0, 2, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, -1, 0, 1097859072, 0, 0, 0, 4, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, 0, 0, 1, 0, 0, -1, 0, 0, -1, 0 } ;
	var uLocal_1385 = 2;
	var uLocal_1386 = 0;
	var uLocal_1387 = 0;
	var uLocal_1388 = 2;
	var uLocal_1389 = 0;
	var uLocal_1390 = 0;
	var uLocal_1391 = 3;
	var uLocal_1392 = 0;
	var uLocal_1393 = 0;
	var uLocal_1394 = 0;
	var uLocal_1395 = 0;
	float fLocal_1396 = 0f;
	float fLocal_1397 = 0f;
	var uLocal_1398 = 0;
	var uLocal_1399 = 0;
	var uLocal_1400 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1396 = 1f;
	fLocal_1397 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 65, 42);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_13), 65, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_78, 801, 43);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_78[0 /*25*/])), 801, "m_clientData");
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
	else if (func_17(Local_879.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_879.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_879.f_12), Local_879.f_9))
	{
		return true;
	}
	else if (Local_879.f_8 == 6)
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
	MISC::COPY_SCRIPT_STRUCT(&Local_879, bParam0, 5);
	iVar2 = func_31(&bVar1, Local_879.f_1, Local_879.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_879.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_879.f_1, Local_879.f_2, Local_879.f_3, iVar0);
	Local_879.f_9 = { func_33(Var3.f_5, 8) };
	Local_879.f_14 = Var3.f_5;
	Local_879.f_15 = { Var3.f_11 };
	Local_879.f_18 = Var3.f_7;
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
	if (Local_879.f_8 <= 5)
	{
		func_53();
	}
	switch (Local_879.f_8)
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
}

void func_27()
{
	if (Local_879.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_66(Local_879.f_12, 4);
		}
	}
	func_67();
	if (func_68(64))
	{
		func_69(Local_13.f_6);
	}
	func_70();
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
	while (iVar0 < 2)
	{
		Local_13.f_50.f_1[iVar0] = 255;
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
	func_71(&Var0, Var26.f_5);
	iVar25 = func_72(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_73(iVar25) };
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
			func_74(bParam0, iParam2);
			break;
		case 2:
			func_75(bParam0, iParam2);
			break;
		case 3:
			func_76(bParam0, iParam2);
			break;
		case 4:
			func_77(bParam0, iParam2);
			break;
		case 12:
			func_78(bParam0, iParam2);
			break;
		case 6:
			func_79(bParam0, iParam2);
			break;
		case 7:
			func_80(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_81(bParam0, iParam2);
			break;
		case 11:
			func_82(bParam0, iParam2);
			break;
		case 9:
			func_83(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_84(bParam0, iParam2);
			break;
		case 8:
			func_85(bParam0, iParam2);
			break;
		case 13:
			func_86(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_87(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_88(bParam0, iParam2);
			break;
		case 16:
			func_89(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_90(bParam0, iParam2);
			break;
		case 21:
			func_91(bParam0, iParam2);
			break;
		case 28:
			func_92(bParam0, iParam2);
			break;
		case 25:
			func_93(bParam0, iParam2);
			break;
		case 24:
			func_94(bParam0, iParam2);
			break;
		case 22:
			func_95(bParam0, iParam2);
			break;
		case 23:
			func_96(bParam0, iParam2);
			break;
		case 29:
			func_97(bParam0, iParam2);
			break;
		case 26:
			func_98(bParam0, iParam2);
			break;
		case 30:
			func_99(bParam0, iParam2);
			break;
		case 27:
			func_100(bParam0, iParam2);
			break;
		case 32:
			func_101(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_102(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_103(bParam0, iParam2);
			break;
		case 17:
			func_104(bParam0, iParam2);
			break;
		case 18:
			func_105(bParam0, iParam2);
			break;
		case 19:
			func_106(bParam0, iParam2);
			break;
		case 20:
			func_107(bParam0, iParam2);
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
			func_108(bParam0, iParam1, iParam2);
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
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573), func_109(iParam1));
			break;
		case 3:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_602), func_109(iParam1));
			break;
		case 4:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_2104), func_109(iParam1));
			break;
		case 5:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_12606), func_109(iParam1));
			break;
		case 6:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_12908), func_109(iParam1));
			break;
		case 7:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_15910), func_109(iParam1));
			break;
		case 8:
			Var0.f_1 = func_110(iParam0, &(Global_1072759.f_573.f_16512), func_109(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_111();
	}
	return Var0;
}

void func_34()
{
	func_112();
	func_113();
	func_114();
	func_115();
}

void func_35()
{
	Local_879.f_19 = Local_879.f_4;
	func_116();
	func_117();
	func_118();
}

void func_36()
{
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
	while (iVar0 < 2)
	{
		func_119(&(Local_13.f_57.f_7), iVar0, 3);
		iVar0++;
	}
}

bool func_40(struct<2> Param0)
{
	if (!func_120(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_109(Param0))
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

	iVar0 = Global_1207465.f_231.f_1066[Local_879.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_879.f_1, Local_879.f_2, Local_879.f_3, iVar0);
	if (!func_121(&Var1, 1))
	{
		func_122(1);
		return;
	}
	Local_13.f_6 = func_123(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_124(256);
	if (func_125(Local_13.f_6))
	{
		func_126(5);
		func_122(6);
	}
	else
	{
		func_122(1);
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
	func_32(&Var0, Local_879.f_1, Local_879.f_2, -1, 255);
	if (func_121(&Var0, 1))
	{
		func_122(2);
		return;
	}
	if (func_127(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_879.f_15, Var0.f_10, 2442122);
		func_122(2);
	}
	else if (bVar31)
	{
		func_126(3);
		func_122(6);
	}
	if (!func_128(Local_13.f_3.f_2))
	{
		func_129(&(Local_13.f_3.f_2));
	}
	else if (func_130(Local_13.f_3.f_2) > 45000)
	{
		func_126(4);
		func_122(6);
	}
}

void func_47()
{
	if (func_131(1, 255))
	{
		if (!func_132(1))
		{
			if (func_133())
			{
				func_124(1);
			}
		}
		else
		{
			func_134();
			func_122(3);
		}
	}
}

void func_48()
{
	bool bVar0;

	if (func_131(2, 255))
	{
		if (!func_132(2))
		{
			bVar0 = true;
			if (!func_135())
			{
				bVar0 = false;
			}
			if (!func_136())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_124(2);
			}
		}
		else
		{
			func_137();
			func_122(4);
		}
	}
}

void func_49()
{
	func_138();
	func_139();
	func_140();
	if (func_141() || Local_13.f_2 != 0)
	{
		func_142();
		func_122(5);
	}
}

void func_50()
{
	if (func_131(4, 255))
	{
		if (func_143())
		{
			func_124(4);
			func_122(6);
		}
	}
}

void func_51()
{
	if (!func_132(256))
	{
		return;
	}
	if (func_132(512))
	{
		if (func_68(64) && func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_69(Local_13.f_6);
			func_144(64);
		}
	}
	else if (!func_68(64))
	{
		if (func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_145(Local_13.f_6, 1, 1);
			func_146(64);
		}
	}
	else if (func_123(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_69(Local_13.f_6);
		func_144(64);
	}
}

void func_52()
{
	if (!Global_13)
	{
		if (func_131(8192, 255))
		{
			func_147(8192);
		}
	}
	else if (!func_131(8192, 255))
	{
		func_148(8192);
	}
}

void func_53()
{
	func_149();
	func_150();
}

void func_54()
{
	if (Local_13 == 6)
	{
		func_151(6);
	}
	else if (Local_13 > 0)
	{
		func_51();
		func_151(1);
	}
}

void func_55()
{
	if (Local_13 == 6)
	{
		func_151(6);
	}
	else if (Local_13 > 1)
	{
		func_151(2);
	}
}

void func_56()
{
	bool bVar0;
	int iVar1;

	if (!func_131(1, 255))
	{
		bVar0 = true;
		if (!func_152())
		{
			bVar0 = false;
		}
		if (!func_153())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_148(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_128(Local_879.f_11))
			{
				func_129(&(Local_879.f_11));
			}
			if (func_130(Local_879.f_11) >= iVar1)
			{
				func_151(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_154(&(Local_879.f_11));
		func_155();
		func_151(3);
	}
}

void func_57()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_131(2, 255))
	{
		iVar0 = func_156();
		iVar1 = func_157();
		if (iVar0 && iVar1)
		{
			func_148(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_128(Local_879.f_11))
			{
				func_129(&(Local_879.f_11));
			}
			if (func_158(Local_879.f_11) >= iVar2)
			{
				func_151(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_154(&(Local_879.f_11));
		func_159();
		func_160();
		func_161();
		func_162();
		func_151(4);
	}
}

void func_58()
{
	if (Local_13 >= 5)
	{
		func_163();
		func_151(5);
		return;
	}
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
	func_170();
}

void func_59()
{
	if (!func_131(4, 255))
	{
		if (func_171())
		{
			func_172();
			func_66(Local_879.f_12, 4);
			func_148(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_151(6);
	}
}

void func_60()
{
}

bool func_61()
{
	return (func_132(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_43[iVar1]);
				func_173(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_174(iVar0, "HAS_VOICE");
					func_174(iVar0, "HorseTeamA");
					func_174(iVar0, "HorseTeamB");
					func_174(iVar0, "HorseOwnerTeamA");
					func_174(iVar0, "HorseOwnerTeamB");
					if (!func_175(iVar1, 16))
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
			while (iVar2 < 2)
			{
				if (func_176(iVar1, iVar2))
				{
				}
				else if (func_177(iVar1, iVar2))
				{
					iVar0 = Local_879.f_274[iVar1 /*34*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_178(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*3*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_178(iVar1, iVar2))
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
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_180(func_179(iVar0), 1);
		iVar0++;
	}
}

void func_66(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_181(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_67()
{
	int iVar0;
	bool bVar1;

	if (!func_68(1))
	{
		return;
	}
	if (func_68(4))
	{
		return;
	}
	if (!func_68(2))
	{
		iVar0 = -1;
	}
	else if (!func_68(8))
	{
		iVar0 = 2;
	}
	else if (func_68(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_68(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_182(Local_879.f_9, iVar0, 0, 255, 0);
	func_146(4);
	if (bVar1)
	{
		func_183(Local_879.f_1, Local_879.f_2);
		if (!func_68(256))
		{
			if (iVar0 == 1)
			{
				func_184(Local_879.f_18, 1);
			}
			else
			{
				func_184(Local_879.f_18, 0);
			}
			func_146(256);
		}
		func_185(Local_879.f_18);
	}
	else
	{
		func_184(Local_879.f_18, 2);
	}
}

bool func_68(int iParam0)
{
	return func_186(Local_879.f_7, iParam0);
}

void func_69(int iParam0)
{
	int iVar0;

	if (!func_187(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_70()
{
	bool bVar0;

	bVar0 = func_61();
	func_188(0, 2);
	func_188(0, 1);
	func_189(bVar0);
	STREAMING::REMOVE_ANIM_DICT(func_190());
	STREAMING::REMOVE_ANIM_DICT(func_191());
	if (bVar0)
	{
		if (func_192(32))
		{
			if (!func_192(512))
			{
				func_193(9, Local_879.f_4);
			}
		}
	}
	if (MAP::DOES_BLIP_EXIST(Local_879.f_19.f_213))
	{
		MAP::REMOVE_BLIP(&(Local_879.f_19.f_213));
	}
	func_194();
}

void func_71(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_72(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_195(uParam0))
	{
		return -1;
	}
	iVar0 = func_196(uParam0, uParam0->f_9);
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
			iVar0 = func_196(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_73(int iParam0)
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

void func_74(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_197(bParam0, iParam1);
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

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_199(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_199(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_199(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_199(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_199(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_199(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_199(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_199(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_199(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_76(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			func_200(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_198(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_199(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_199(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_199(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_199(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_79(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_201(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_200(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_200(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_200(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_200(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_200(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_200(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_200(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_200(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_200(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_200(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_200(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_200(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_200(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_200(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_200(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_80(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 8);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 7);
			func_200(bParam0, 8);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			func_200(bParam0, 6);
			func_200(bParam0, 7);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			func_200(bParam0, 6);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			func_200(bParam0, 5);
			func_200(bParam0, 9);
			func_200(bParam0, 10);
			func_200(bParam0, 11);
			func_202(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_81(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_199(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_199(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_199(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_199(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_199(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_199(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_199(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_199(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_199(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_199(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_82(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_198(bParam0);
	func_203(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_83(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_204(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_204(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_84(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_199(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_199(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_199(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_199(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_199(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_199(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_199(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_199(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_199(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_85(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_198(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_86(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_198(bParam0);
	func_203(bParam0, 1);
	func_203(bParam0, 4);
	func_203(bParam0, 8);
	func_203(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_205(func_123(iParam2)) };
			break;
	}
}

void func_87(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_206(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_206(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_206(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_206(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_88(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_199(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_89(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_207(bParam0, iParam2);
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

void func_90(bool bParam0, int iParam1)
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
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
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
			func_209(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_209(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_209(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
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
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_200(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_200(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_198(bParam0);
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
			func_200(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_200(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_200(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_200(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_200(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_200(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_200(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_200(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_200(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_200(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_198(bParam0);
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
			func_200(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_200(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_200(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_200(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_200(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_200(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_200(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_200(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_200(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_200(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_200(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
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
			func_210(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_210(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_210(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_96(bool bParam0, int iParam1)
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
			func_211(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_211(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_211(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_211(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_97(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_198(bParam0);
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
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_200(bParam0, 3);
			func_200(bParam0, 4);
			func_200(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_98(bool bParam0, int iParam1)
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
			func_212(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_212(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_212(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_99(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_198(bParam0);
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
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_200(bParam0, 2);
			func_200(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_200(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_200(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_100(bool bParam0, int iParam1)
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
			func_213(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_213(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_213(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_101(bool bParam0, int iParam1, int iParam2)
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
	func_214(bParam0, iParam1, iParam2);
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

void func_102(bool bParam0, int iParam1, int iParam2)
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
	func_215(bParam0, iParam1, iParam2);
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

void func_103(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_198(bParam0);
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
			func_200(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_200(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_200(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_200(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_200(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_200(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_200(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_200(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_200(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_200(bParam0, 1);
			break;
	}
}

void func_104(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_199(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_105(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_199(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_199(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_199(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_199(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_199(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_199(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_106(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_198(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_199(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_199(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_199(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_200(bParam0, 0);
			func_200(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_107(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_216(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_216(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_108(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_217(iParam1);
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
	*bParam0 = func_218(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_203(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_220(func_219(iVar0), iParam2);
		bParam0->f_15[0] = func_221(func_219(iVar0), iParam2);
		bParam0->f_5 = func_222(iVar0, iParam2);
		bParam0->f_11 = { func_223(iVar0, iParam2) };
	}
}

int func_109(int iParam0)
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

int func_110(int iParam0, var uParam1, int iParam2)
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

struct<2> func_111()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_112()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			Local_78[iVar1 /*25*/].f_6.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_113()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_177(iVar1, iVar2))
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

void func_114()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	bVar3 = func_224(&iVar2);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_226(func_179(iVar0), func_225(func_179(iVar0)));
		Local_879.f_423[iVar0 /*39*/] = func_225(func_179(iVar0));
		if (bVar3)
		{
			func_119(&(Local_78[iVar2 /*25*/].f_22.f_1), iVar0, 3);
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 32)
			{
				func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iVar0, 3);
				iVar1++;
			}
		}
		iVar0++;
	}
}

void func_115()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_227(&(Local_879.f_309), &(Local_879.f_309.f_32));
	bVar2 = true;
	if (!func_224(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_13.f_50.f_4[iVar0] = 0;
			Local_13.f_50.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_78[iVar1 /*25*/].f_11.f_8[iVar0] = 0;
		}
		iVar0++;
	}
	func_228(&(Local_879.f_309.f_75), 8, -1);
	if (bVar2)
	{
		func_228(&(Local_78[iVar1 /*25*/].f_11), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_228(&(Local_78[iVar3 /*25*/].f_11), 8, -1);
			iVar3++;
		}
	}
}

void func_116()
{
	switch (func_229())
	{
		case 0:
			func_230(0, -2.255785E+30f);
			func_231(0, -3.996643E+22f);
			func_232(0, "0813_G_M_M_UniBraithwaites_01_WHITE_02");
			break;
		case 1:
			func_230(0, -2.255785E+30f);
			func_231(0, -8.520421E+07f);
			func_232(0, "0718_A_M_M_BtcHillbilly_01_WHITE_02");
			break;
		case 2:
			func_230(0, -2.255785E+30f);
			func_231(0, 1.64636E-26f);
			func_232(0, "0050_A_M_M_BiVRoughTravellers_01_WHITE_01");
			break;
		case 3:
			func_230(0, 3.655135E-06f);
			func_231(0, -4.305236E-33f);
			break;
		case 4:
			func_230(0, 0.3597516f);
			func_231(0, 5.742004E+20f);
			break;
	}
	func_230(1, func_233(0.003839614f, 1));
	func_234(1, 1);
	switch (func_235())
	{
		case 0:
			func_236(0, 0f, 0f, 0f, 1129455813, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1133025116, 0);
			break;
		case 1:
			func_236(0, 0f, -1f, 0f, -1026174484, 0);
			func_236(1, -1070260552 /* Float: -2.83f */, 1086408622 /* Float: 6.04f */, 1039516303 /* Float: 0.12f */, 1119509873, 0);
			break;
		case 2:
			func_236(0, 0f, 0f, 0f, -1023252234, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1133025116, 0);
			break;
		case 3:
			func_236(0, 0f, 0f, 0f, -1021847798, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1133025116, 0);
			break;
		case 4:
			func_236(0, 0f, 0f, 0f, -1031773880, 0);
			func_236(1, -1063360922 /* Float: -4.95f */, -1059355361 /* Float: -6.86f */, -1130113270 /* Float: -0.02f */, 1119509873, 0);
			break;
		case 5:
			func_236(0, 0f, 0f, 0f, -1030938952, 0);
			func_236(1, -1070260552 /* Float: -2.83f */, 1078103900 /* Float: 3.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
		case 6:
			func_236(0, 0f, 0f, 0f, -1026880963, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
		case 7:
			func_236(0, 0f, 0f, 0f, 0f, 0);
			func_236(1, 1078649160 /* Float: 3.17f */, -1065269330 /* Float: -4.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
		case 8:
			func_236(0, 0f, 0f, 0f, 1127481344 /* Float: 180f */, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1133025116, 0);
			break;
		case 9:
			func_236(0, 0f, 0f, 0f, -1022739087, 0);
			func_236(1, -1075167887 /* Float: -1.83f */, -1069379748 /* Float: -3.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
		case 10:
			func_236(0, 0f, 0f, 0f, -1022172856, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
		case 11:
			func_236(0, 0f, 0f, 0f, -1025326449, 0);
			func_236(1, -1084982559 /* Float: -0.83f */, 1084311470 /* Float: 5.04f */, -1094545572 /* Float: -0.38f */, 1119509873, 0);
			break;
	}
}

void func_117()
{
	func_237(0, -5502541f);
	func_237(1, joaat("P_BINOCULARS01X"));
}

void func_118()
{
	if (func_238(9, Local_879.f_4))
	{
		func_239(64);
	}
	if (func_240(9, Local_879.f_4))
	{
		func_239(128);
	}
}

void func_119(int* iParam0, int iParam1, int iParam2)
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

bool func_120(int iParam0)
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

bool func_121(var uParam0, int iParam1)
{
	return func_241(uParam0->f_25, iParam1);
}

void func_122(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_123(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_124(int iParam0)
{
	if (!func_132(iParam0))
	{
		func_242(&(Local_13.f_1), iParam0);
	}
}

bool func_125(int iParam0)
{
	if (!func_187(iParam0))
	{
		return false;
	}
	return (func_243(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_126(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_127(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_244(Local_879.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_13.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_879.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_245(&uVar1, Param0);
		Local_13.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_148(128);
	}
	else if (!func_131(128, 255))
	{
		Local_13.f_3.f_1 = func_246(Param0);
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

bool func_128(int iParam0)
{
	return iParam0 != 0;
}

void func_129(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_130(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_131(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_78[iParam1 /*25*/], iParam0);
}

bool func_132(int iParam0)
{
	return func_186(Local_13.f_1, iParam0);
}

bool func_133()
{
	return true;
}

void func_134()
{
}

bool func_135()
{
	return true;
}

bool func_136()
{
	bool bVar0;

	if (!func_247(&bVar0))
	{
		if (bVar0)
		{
			func_248();
		}
		return false;
	}
	if (!func_249(&bVar0))
	{
		if (bVar0)
		{
			func_248();
		}
		return false;
	}
	return true;
}

void func_137()
{
}

void func_138()
{
	if (!func_132(32) && func_250(32))
	{
		func_124(32);
	}
	if (!func_132(64) && func_250(64))
	{
		func_124(64);
	}
	if (!func_132(16) && func_251(16))
	{
		func_124(16);
	}
	if ((!func_132(2048) && func_250(2048)) && !func_250(4096))
	{
		func_124(2048);
	}
}

void func_139()
{
	bool bVar0;

	if (!bVar0 && func_132(16))
	{
		func_126(1);
		return;
	}
	if (func_132(2048) && !func_250(4096))
	{
		func_126(6);
		return;
	}
}

void func_140()
{
	func_252();
}

bool func_141()
{
	if (func_253())
	{
		return true;
	}
	switch (func_254())
	{
		case 0:
		case 1:
			if (func_254() == 0)
			{
				func_256(func_255(0), 0, 0, 1.818904E-28f, 0);
				func_256(func_255(0), 0, 1, 1.818904E-28f, 0);
			}
			switch (Local_13.f_7)
			{
				case 0:
					func_257();
					break;
				case 1:
					func_258();
					break;
				case 2:
					func_259();
					break;
				case 14:
					func_260();
					break;
				case 15:
					func_261();
					break;
				case 16:
					func_262();
					break;
				default:
					break;
			}
			break;
		case 2:
		case 3:
			switch (Local_13.f_7)
			{
				case 0:
					func_263();
					break;
				case 3:
					func_264();
					break;
				case 4:
					func_265();
					break;
				case 5:
					func_266();
					break;
				case 6:
					func_267();
					break;
				case 7:
					func_268();
					break;
				case 8:
					func_269();
					break;
				case 9:
					func_270();
					break;
				case 10:
					func_271();
					break;
				case 11:
					func_272();
					break;
				case 12:
					func_273();
					break;
				case 13:
					func_274();
					break;
				case 14:
					func_275();
					break;
				case 15:
					func_276();
					break;
				case 16:
					func_262();
					break;
				default:
					break;
			}
			break;
	}
	if (func_254() == 1)
	{
		if (Local_13.f_7 > 0 && Local_13.f_7 < 16)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				Local_13.f_7.f_20 = func_277(0, 0, 1, 0);
			}
		}
	}
	return false;
}

void func_142()
{
}

bool func_143()
{
	int iVar0;

	iVar0 = func_255(0);
	if ((((((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_ON_MOUNT(iVar0)) || func_278(iVar0, 2.40763E-20f)) || func_279()) || Local_13.f_7 == 17) || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_280()) >= 1109393408)
	{
		return true;
	}
	return false;
}

void func_144(int iParam0)
{
	if (func_68(iParam0))
	{
		func_281(&(Local_879.f_7), iParam0);
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_187(iParam0))
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

void func_146(int iParam0)
{
	if (!func_68(iParam0))
	{
		func_242(&(Local_879.f_7), iParam0);
	}
}

void func_147(int iParam0)
{
	if (func_186(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/], iParam0))
	{
		func_281(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/]), iParam0);
	}
}

void func_148(int iParam0)
{
	if (!func_131(iParam0, 255))
	{
		func_242(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*25*/]), iParam0);
	}
}

void func_149()
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

void func_150()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_879.f_505 >= 2)
		{
			Local_879.f_505 = 0;
		}
		func_289(func_288(Local_879.f_505));
		Local_879.f_505++;
		iVar0++;
	}
}

void func_151(int iParam0)
{
	if (Local_879.f_8 != iParam0)
	{
		Local_879.f_8 = iParam0;
	}
}

bool func_152()
{
	bool bVar0;
	char* sVar1;

	bVar0 = false;
	sVar1 = "TREAS";
	if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar1))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar1);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar1))
		{
			bVar0 = true;
		}
	}
	if (!func_290())
	{
		bVar0 = true;
	}
	if (!func_291())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		return false;
	}
	switch (func_254())
	{
		case 2:
		case 3:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, "pl_exchange_f"))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, "pl_exchange_f");
					}
					if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, "pl_exchange_m"))
					{
						ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, "pl_exchange_m");
					}
				}
			}
			break;
	}
	HUD::TEXT_BLOCK_REQUEST("TREAS");
	if (HUD::TEXT_BLOCK_IS_LOADED("TREAS"))
	{
		return true;
	}
	return true;
}

bool func_153()
{
	bool bVar0;

	bVar0 = false;
	if (!func_292())
	{
		bVar0 = true;
	}
	if (!func_293())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_154(var uParam0)
{
	*uParam0 = 0;
}

void func_155()
{
}

int func_156()
{
	return 1;
}

int func_157()
{
	bool bVar0;

	if (!func_294())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_158(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_159()
{
	if (!func_68(1))
	{
		func_295(Local_879.f_9);
		func_146(1);
	}
}

void func_160()
{
	func_296();
	func_297();
}

void func_161()
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	switch (func_254())
	{
		case 0:
		case 1:
			func_298(1);
			func_299(&(Local_879.f_19.f_46), func_190(), "base_idle", 4f, -1065353216 /* Float: -4f */, 0);
			iVar1 = func_300(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				ENTITY::PLAY_ENTITY_ANIM(iVar1, "aggro_idle_map", func_191(), 1000f, true, true, true, 0f, 2);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				func_301(0, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 37709), 0f, 0f, 0f, 0f, 0f, 0f);
				func_301(1, iVar0, PED::GET_PED_BONE_INDEX(iVar0, 7966), 0f, 0f, 0f, 0f, 0f, 0f);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::_REQUEST_PED_EMOTIONAL_PRESET(iVar0, "DEFAULT_SHOCKED");
					WEAPON::GIVE_WEAPON_TO_PED(iVar0, 2.574461E-25f, -1, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
				}
			}
			iVar0 = func_255(0);
			iVar1 = func_300(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				ENTITY::PLAY_ENTITY_ANIM(iVar1, "aggro_idle_map", func_191(), 1000f, true, true, true, 0f, 2);
			}
			break;
		case 2:
		case 3:
			WEAPON::GIVE_WEAPON_TO_PED(iVar0, 2.574461E-25f, -1, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
			func_302(0);
			func_299(&(Local_879.f_19.f_46), func_191(), "EXCHANGE_BASE_HUNTER", 4f, -1065353216 /* Float: -4f */, 0);
			break;
	}
	func_303(1, -2.492079E+20f);
	func_303(2, 6.137253E-27f);
	func_303(0, -5.414377E+35f);
	func_304(0);
	func_306(&(Local_879.f_309), func_305(0), func_305(1), 0);
	func_307();
	PED::_REQUEST_PED_EMOTIONAL_PRESET(func_305(0), "DEFAULT_SHOCKED");
	if (func_308() == 0)
	{
		func_309(0, "NB_TRHU_ILO_NAME");
	}
	else
	{
		func_309(0, "NB_TRHU_ILO_NAME_F");
	}
	Local_879.f_19.f_203 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-1.034834E+38f, iVar0, 0f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
	func_310(0);
}

void func_162()
{
	func_311();
}

void func_163()
{
}

void func_164()
{
	float fVar0;

	if (func_244(Local_879.f_15))
	{
		return;
	}
	if (func_312())
	{
		return;
	}
	if (func_313(Local_879.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_879.f_15);
		if (fVar0 < 1128792064)
		{
			func_148(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_147(4096);
			func_148(2048);
		}
		else
		{
			func_147(4096);
			func_147(2048);
		}
	}
}

void func_165()
{
	func_314();
	func_315();
	func_316();
	func_317();
	func_318();
}

void func_166()
{
	if (func_319())
	{
		func_148(8);
	}
	else
	{
		func_147(8);
	}
}

void func_167()
{
	int iVar0;
	int iVar1;

	func_320();
	func_321();
	func_322();
	func_323();
	func_324(-9.617992E-06f);
	func_325();
	func_326(0);
	func_327();
	if (func_328(2f) && Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	switch (func_254())
	{
		case 0:
		case 1:
			switch (Local_879.f_19.f_1)
			{
				case 0:
					func_329();
					break;
				case 1:
					func_330();
					break;
				case 2:
					func_331();
					break;
				case 14:
					func_332();
					break;
				case 15:
					func_333();
					break;
				case 16:
					func_334();
					break;
				default:
					break;
			}
			break;
		case 2:
		case 3:
			func_335();
			func_336();
			func_337();
			switch (Local_879.f_19.f_1)
			{
				case 0:
					func_338();
					break;
				case 3:
					func_339();
					break;
				case 4:
					func_340();
					break;
				case 5:
					func_341();
					break;
				case 6:
					func_342();
					break;
				case 7:
					func_343();
					break;
				case 8:
					func_344();
					break;
				case 9:
					func_345();
					break;
				case 10:
					func_346();
					break;
				case 11:
					func_347();
					break;
				case 12:
					func_348();
					break;
				case 13:
					func_349();
					break;
				case 14:
					func_350();
					break;
				case 15:
					func_351();
					break;
				case 16:
					func_334();
					break;
				default:
					break;
			}
			break;
	}
	if (Local_13.f_7 < 14)
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = func_305(0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					func_352(&(Local_879.f_19.f_170), iVar0, 0, 100, 1, 1, 2, 1, 0, 0, 0, 0);
					IK::_INVERSE_KINEMATICS_REQUEST_LOOK_AT(iVar1, &(Local_879.f_19.f_170));
				}
			}
		}
	}
}

void func_168()
{
	if (!func_131(8, 255))
	{
		func_148(16);
	}
	else
	{
		func_147(16);
	}
}

void func_169()
{
	int iVar0;

	Local_879.f_6 = -1;
	Local_879.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_879.f_5 = (Local_879.f_5 || Local_78[iVar0 /*25*/]);
			Local_879.f_6 = (Local_879.f_6 && Local_78[iVar0 /*25*/]);
		}
		iVar0++;
	}
}

void func_170()
{
	if ((func_68(1024) && !func_131(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_353(&Global_0, 1)))
	{
		func_148(16384);
	}
}

bool func_171()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_192(16))
	{
		return true;
	}
	func_354();
	iVar0 = func_255(0);
	iVar1 = func_255(1);
	iVar2 = func_355(50f);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		TASK::TASK_FLEE_PED(iVar0, iVar2, 3, 0, -1f, -1, iVar1);
	}
	else
	{
		TASK::TASK_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 3, 0, -1f, -1, iVar1);
	}
	iVar3 = func_356(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iVar3))
			{
				ENTITY::DETACH_ENTITY(iVar3, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar3);
			}
		}
	}
	iVar3 = func_356(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar3))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(iVar3))
			{
				ENTITY::DETACH_ENTITY(iVar3, true, true);
				PHYSICS::ACTIVATE_PHYSICS(iVar3);
			}
		}
	}
	func_239(16);
	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	return true;
}

void func_172()
{
	func_357();
}

void func_173(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_879.f_233.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_879.f_233.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_174(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_175(int iParam0, int iParam1)
{
	return func_186(Local_879.f_233.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_176(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_177(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_178(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_274[iParam0 /*34*/].f_4, iParam1);
}

int func_179(int iParam0)
{
	return iParam0;
}

void func_180(int iParam0, bool bParam1)
{
	int iVar0;

	func_358(iParam0, 8);
	if (!func_359(iParam0, 1))
	{
		return;
	}
	iVar0 = func_360(iParam0);
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
	func_361(iParam0, bParam1);
	func_358(iParam0, 1);
}

bool func_181(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_182(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_363(func_362(Param0));
	iVar1 = func_364(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_365(Param0, &Var2, iParam2);
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

void func_183(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_366(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_367(iVar0);
}

void func_184(int iParam0, int iParam1)
{
	func_129(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_368(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_369(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_370(iParam0);
			break;
	}
}

void func_185(int iParam0)
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
	Var0 = { func_371(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_186(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_187(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_188(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 != 0)
	{
		return false;
	}
	iVar0 = func_305(iParam0);
	iVar1 = 0;
	iVar2 = 0;
	switch (iParam1)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar1 = func_372(PLAYER::PLAYER_PED_ID());
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar1))
					{
						if (iVar0 == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1))
						{
							if (func_373())
							{
								func_374(0, 3, 25, 1.818904E-28f);
							}
							else
							{
								func_374(0, 3, 12, 1.818904E-28f);
							}
							if (func_375(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 1103626240)
							{
								func_376(1);
							}
							return true;
						}
					}
				}
			}
			break;
		case 1:
			if (func_240(9, Local_879.f_4))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				iVar2 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == PLAYER::PLAYER_PED_ID())
					{
						return true;
					}
				}
			}
			break;
		case 2:
			if (!func_240(9, Local_879.f_4) || (func_254() == 1 && (func_328(1) || PED::IS_PED_IN_COMBAT(iVar0, 0))))
			{
				return false;
			}
			if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
			{
				iVar2 = PED::GET_PED_SOURCE_OF_DEATH(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2) && ENTITY::IS_ENTITY_A_PED(iVar2))
				{
					if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2) == PLAYER::PLAYER_PED_ID())
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

void func_189(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_377(iVar0, bParam0);
		iVar0++;
	}
}

char* func_190()
{
	return "script_re@treasure_hunter";
}

char* func_191()
{
	return "script_re@treasure_hunter@treasure_hunter_offer";
}

bool func_192(int iParam0)
{
	return func_186(Local_879.f_19.f_2, iParam0);
}

void func_193(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_378(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_379(iParam1);
	func_380(iVar0, iParam0);
}

void func_194()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_381(iVar0);
		iVar0++;
	}
}

bool func_195(var uParam0)
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

int func_196(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_382(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_383(iParam1)) - 1);
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

void func_197(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_384(bParam0);
			break;
		case 1:
			func_384(bParam0);
			break;
		case 2:
			func_384(bParam0);
			break;
		case 3:
			func_385(bParam0);
			break;
		case 4:
			func_384(bParam0);
			break;
		case 5:
			func_384(bParam0);
			break;
		case 6:
			func_385(bParam0);
			break;
		case 7:
			func_385(bParam0);
			break;
		case 8:
			func_385(bParam0);
			break;
		case 9:
			func_384(bParam0);
			break;
		default:
			func_199(bParam0);
			func_198(bParam0);
			break;
	}
}

void func_198(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_386(bParam0, iVar0);
		iVar0++;
	}
}

void func_199(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_200(bParam0, iVar0);
		iVar0++;
	}
}

void func_200(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_201(bool bParam0, int iParam1)
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
			func_387(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_388(bParam0);
			break;
		default:
			func_199(bParam0);
			func_198(bParam0);
			break;
	}
}

void func_202(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_386(bParam0, 0);
			break;
		case 1:
		case 2:
			func_386(bParam0, 1);
			func_386(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_386(bParam0, 0);
			func_386(bParam0, 2);
			break;
		case 8:
			func_386(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_386(bParam0, 1);
			break;
		default:
			func_198(bParam0);
			break;
	}
}

void func_203(bool bParam0, int iParam1)
{
	func_283(&(bParam0->f_25), iParam1);
}

void func_204(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_389(bParam0);
			break;
		case 1:
			func_390(bParam0);
			break;
		case 2:
			func_391(bParam0);
			break;
		case 3:
			func_392(bParam0);
			break;
		default:
			func_199(bParam0);
			func_198(bParam0);
			break;
	}
}

Vector3 func_205(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_206(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_393(bParam0);
			break;
		case 1:
		case 2:
			func_394(bParam0);
			break;
		case 3:
		case 4:
			func_395(bParam0);
			break;
		default:
			func_198(bParam0);
			break;
	}
	func_199(bParam0);
}

void func_207(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_386(bParam0, 0);
			func_386(bParam0, 2);
			break;
		case 1:
			func_386(bParam0, 1);
			func_386(bParam0, 3);
			break;
		default:
			func_199(bParam0);
			func_198(bParam0);
			break;
	}
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
			func_200(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_200(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_200(bParam0, 0);
			break;
		default:
			func_200(bParam0, 0);
			break;
	}
	func_198(bParam0);
}

void func_209(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_200(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_200(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_200(bParam0, 2);
			break;
		default:
			func_199(bParam0);
			break;
	}
	func_198(bParam0);
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
			func_200(bParam0, 0);
			func_386(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_200(bParam0, 1);
			func_386(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_200(bParam0, 2);
			func_386(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_200(bParam0, 3);
			func_386(bParam0, 0);
			break;
	}
}

void func_211(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_200(bParam0, 0);
			func_386(bParam0, 0);
			break;
		case 2:
			func_200(bParam0, 1);
			func_386(bParam0, 0);
			break;
		case 3:
		case 4:
			func_200(bParam0, 2);
			func_386(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_200(bParam0, 3);
			func_386(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_200(bParam0, 4);
			func_386(bParam0, 1);
			break;
	}
}

void func_212(bool bParam0, int iParam1)
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
			func_200(bParam0, 3);
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
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			break;
		default:
			func_199(bParam0);
			break;
	}
	func_198(bParam0);
}

void func_213(bool bParam0, int iParam1)
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
			func_200(bParam0, 3);
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
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			break;
		default:
			func_199(bParam0);
			break;
	}
	func_198(bParam0);
}

void func_214(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_386(bParam0, 0);
			func_200(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_386(bParam0, 1);
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			func_200(bParam0, 2);
			break;
		default:
			func_386(bParam0, 0);
			func_200(bParam0, 0);
			break;
	}
}

void func_215(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_386(bParam0, 0);
			func_200(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_386(bParam0, 1);
			func_200(bParam0, 0);
			func_200(bParam0, 1);
			break;
		default:
			func_386(bParam0, 0);
			func_200(bParam0, 0);
			break;
	}
}

void func_216(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_198(bParam0);
			func_199(bParam0);
			break;
		default:
			func_198(bParam0);
			func_199(bParam0);
			break;
	}
}

int func_217(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_218(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_219(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_220(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_396(&Var1, iParam0) && func_397(&Var1, iParam1))
	{
		func_398(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_221(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_396(&Var1, iParam0) && func_397(&Var1, iParam1))
	{
		func_398(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_222(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_399(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_223(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_399(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

bool func_224(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_400(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

var func_225(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/];
}

void func_226(int iParam0, var uParam1)
{
	if (iParam0 == 1)
	{
		func_401(iParam0, 0);
		return;
	}
	switch (func_402(uParam1))
	{
		case 0:
			func_401(iParam0, 0);
			break;
		case 1:
			func_403(iParam0, 1);
			break;
		case 2:
			if (func_192(1024))
			{
				func_404("NB_TRHU_HELP", 10000, 0, 0, 0, 1);
				func_405(1024);
			}
			func_401(iParam0, 1);
			func_406(iParam0, 0, "NB_TRHU_PROMPT_BUY", -9.436069E+32f, 0, 1, 0, -1, 0);
			func_406(iParam0, 1, "INTERACT_DECLINE", 1.121045E-15f, 0, 1, 0, -1, 0);
			if (!func_328(512))
			{
				func_407(iParam0, 0, "NB_TRHU_PROMPT_BUY", 500, 1, 1);
			}
			else
			{
				func_407(iParam0, 0, "NB_TRHU_PROMPT_BUY", 250, 1, 1);
			}
			func_408(iParam0, 0);
			func_409(iParam0, 0, 1, 1);
			func_409(iParam0, 1, 1, 1);
			func_403(iParam0, 0);
			break;
		case 3:
			func_408(iParam0, 8);
			func_409(iParam0, 0, 0, 1);
			func_409(iParam0, 1, 0, 1);
			break;
	}
}

void func_227(var uParam0, var uParam1)
{
	func_410(uParam0);
	func_411(uParam0, 1);
	func_412(uParam0, 1);
	func_413(uParam1);
	func_414(uParam1);
	func_415(uParam1);
	func_416(uParam1, 1);
	func_417(uParam1, 1);
}

int func_228(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_418(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_419(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_419(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_419(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_229()
{
	return Local_879.f_19;
}

void func_230(int iParam0, float fParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_3 = fParam1;
}

void func_231(int iParam0, float fParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_4 = fParam1;
}

void func_232(int iParam0, char* sParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_10 = sParam1;
}

float func_233(int iParam0, bool bParam1)
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

void func_234(int iParam0, int iParam1)
{
	func_242(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), iParam1);
}

int func_235()
{
	return Local_879.f_2;
}

void func_236(int iParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_879.f_233.f_7[iParam0 /*11*/].f_5 = iParam4;
	if (bParam5)
	{
		func_242(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_281(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_237(int iParam0, float fParam1)
{
	func_420(0, iParam0, fParam1);
}

bool func_238(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_378(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = func_379(iParam1);
	return func_421(iVar0, iParam0);
}

void func_239(int iParam0)
{
	func_242(&(Local_879.f_19.f_2), iParam0);
}

bool func_240(int iParam0, int iParam1)
{
	if (!func_378(iParam0, iParam1))
	{
		return false;
	}
	return func_421(iParam1, iParam0);
}

bool func_241(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_242(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_243(int iParam0)
{
	int iVar0;

	if (!func_187(iParam0))
	{
		return false;
	}
	iVar0 = func_422(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_244(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_245(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_246(struct<31> Param0)
{
	var uVar0;

	func_245(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_247(var uParam0)
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
	while (iVar2 < 2)
	{
		if (func_175(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_423(iVar2, uParam0, &bVar1))
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
			if (func_424(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_43[iVar2]);
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

void func_248()
{
	func_126(2);
}

bool func_249(bool bParam0)
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
	vVar10 = { Local_879.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_425(iVar0, iVar1);
			if (func_177(iVar0, iVar1))
			{
			}
			else if (func_176(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
			{
				if (func_426(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_46[iVar0 /*3*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
				{
					if (!func_427(iVar0, iVar1))
					{
						vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_428(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_428(iVar0, iVar1) };
					}
					if (func_429(iVar0, iVar1))
					{
						if (!func_430(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_431(iVar0, iVar1))
							{
								iVar13 = PED::_CREATE_META_PED_ASSET(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, true, false, false);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_46[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_432(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_428(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_46[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_46[iVar0 /*3*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_433(&(Local_13.f_46[iVar0 /*3*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar0 /*3*/][iVar1]);
								if (func_426(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
										{
											NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_46[iVar0 /*3*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_2), iVar1);
								if (func_434(iVar0, iVar1))
								{
									TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
									GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
								}
								if (func_435(iVar0, iVar1))
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
								}
								if (func_436(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_SET_ENTITY_FADE_IN(iVar13);
								}
								if (func_429(iVar0, iVar1))
								{
									ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
								}
								vVar4 = { func_437(iVar0, iVar1) };
								if (!func_244(vVar4))
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
										if (!func_438(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_439(vVar4.x)), MISC::ABSF(func_439(vVar4.y))) };
											vVar27 = { func_440(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_441(iVar0, iVar1))
								{
									func_442(iVar0, iVar1, 1);
								}
								if (func_443(iVar0, iVar1))
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

bool func_250(int iParam0)
{
	return func_186(Local_879.f_5, iParam0);
}

bool func_251(int iParam0)
{
	return func_186(Local_879.f_6, iParam0);
}

void func_252()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_444(&(Local_13.f_57[iVar0 /*3*/]), func_179(iVar0));
		iVar0++;
	}
}

bool func_253()
{
	int iVar0;

	iVar0 = func_255(0);
	if (func_279())
	{
		if (Local_13.f_7 == 17)
		{
			return true;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return true;
		}
		if (func_328(2f))
		{
			if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || (PED::IS_PED_FLEEING(iVar0) && !func_445(0, 1112014848 /* Float: 50f */, 0)))
			{
				return true;
			}
		}
	}
	return false;
}

int func_254()
{
	return func_446();
}

int func_255(int iParam0)
{
	return func_305(iParam0);
}

int func_256(int iParam0, int iParam1, int iParam2, float fParam3, bool bParam4)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (MISC::IS_BIT_SET(Local_13.f_7.f_5, iParam2) || MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam2))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iParam0, func_447(iParam2)))
	{
		AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, 0);
		AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, 0);
		if (!func_449(iParam0, func_448(iParam2), fParam3, iParam1, !bParam4, 0, 0, 1))
		{
		}
		MISC::SET_BIT(&(Local_13.f_7.f_5), iParam2);
		MISC::SET_BIT(&(Local_879.f_19.f_7), iParam2);
		return 1;
	}
	return 0;
}

void func_257()
{
	int iVar0;

	iVar0 = func_255(0);
	if (!func_450(0))
	{
	}
	if (func_328(2f))
	{
		if (func_254() != 1)
		{
			func_451(16);
			return;
		}
	}
	if (func_312())
	{
		if (func_328(1))
		{
			if (func_254() == 1)
			{
				if (!func_452(iVar0, 3.034861E-30f) || TASK::GET_SEQUENCE_PROGRESS(iVar0) >= 1)
				{
					func_451(2);
				}
			}
			else if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "standing_idle", 1))
			{
				func_451(1);
			}
		}
	}
}

void func_258()
{
	int iVar0;

	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	iVar0 = func_255(0);
	if (func_328(2))
	{
		if (!func_278(iVar0, 2.066914E+13f))
		{
			func_453();
			func_451(14);
		}
	}
}

void func_259()
{
	func_454(1024, 1);
	func_451(16);
}

void func_260()
{
	int iVar0;

	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	iVar0 = func_255(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_451(15);
	}
}

void func_261()
{
	int iVar0;

	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	iVar0 = func_255(0);
	if (func_279())
	{
		func_451(17);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_451(14);
		}
	}
}

void func_262()
{
	func_455(11, 1, 1);
	func_455(13, 1, 1);
	if (!func_456(512))
	{
		if (func_328(9.403955E-38f))
		{
			if (!func_456(8192))
			{
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_454(8192, 1);
			}
			else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
			{
				if (!func_457(0))
				{
					if (func_458())
					{
						if (func_328(2097152))
						{
							func_374(0, 3, 23, 1.818904E-28f);
						}
						else if (!func_328(131072))
						{
							if (!func_328(262144))
							{
								func_374(0, 3, 17, 1.818904E-28f);
							}
							else
							{
								func_374(0, 3, 24, 1.818904E-28f);
							}
						}
					}
					else if (func_254() == 1)
					{
						func_374(0, 3, 23, 1.818904E-28f);
					}
					else if (func_328(2097152))
					{
						func_374(0, 3, 10, 2.301389E+24f);
					}
					else if (!func_459(8))
					{
						func_374(0, 3, 8, 2.301389E+24f);
					}
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_454(512, 1);
				}
			}
		}
	}
	else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
	{
		if (!func_457(0))
		{
			if ((func_279() && func_460(0, 255, 1) > 5f) && func_375(func_255(0), Local_879.f_15, 1) > 1101004800)
			{
				func_451(17);
				return;
			}
		}
	}
}

void func_263()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (func_312())
	{
		func_451(3);
	}
	else if (func_457(0))
	{
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
	{
		func_374(0, 0, 1, 1.818904E-28f);
		Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

void func_264()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	switch (func_461())
	{
		case 2:
			func_462(255);
			func_451(5);
			break;
		case -1:
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_457(0))
				{
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
				else if (Local_13.f_7.f_6 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 10000)
				{
					func_374(0, 0, 1, 1.818904E-28f);
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				}
			}
			break;
	}
}

void func_265()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
}

void func_266()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	func_450(0);
	if (func_328(2048))
	{
		if (func_463(0, 1))
		{
			func_451(6);
		}
	}
}

void func_267()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	func_450(0);
	if (func_328(128))
	{
		if (func_464(0))
		{
			if (func_463(0, 2))
			{
				Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				func_451(7);
			}
		}
	}
}

void func_268()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	func_465();
}

void func_269()
{
	if (func_328(8))
	{
		func_451(9);
	}
}

void func_270()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (func_328(8388608))
	{
		if (func_328(262144))
		{
			if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false)) || func_328(262144))
			{
				if (func_463(0, 0))
				{
					func_451(14);
				}
			}
		}
	}
}

void func_271()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (func_328(512))
	{
		func_451(11);
	}
}

void func_272()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (func_464(0))
	{
		if (func_463(0, 2))
		{
			func_451(7);
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			Local_13.f_7.f_9 = 0;
			Local_13.f_7.f_10 = 0;
			SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_13.f_7.f_12));
			SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_13.f_7.f_13));
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_12), Local_13.f_7.f_21);
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
			}
			Local_13.f_7.f_20 = 255;
			func_454(262144, 1);
			func_466(2048, 1);
		}
	}
}

void func_273()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (func_463(0, 0))
	{
		if (func_328(1024))
		{
			func_451(13);
		}
	}
}

void func_274()
{
	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
	{
		func_451(14);
	}
}

void func_275()
{
	int iVar0;

	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	iVar0 = func_255(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && PED::IS_PED_ON_MOUNT(iVar0))
	{
		func_451(15);
	}
}

void func_276()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (func_328(2f))
	{
		func_451(16);
		return;
	}
	iVar0 = func_255(0);
	iVar2 = func_467(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 1117782016 /* Float: 80f */, 0, 0, 1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		func_451(17);
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (!PED::IS_PED_ON_MOUNT(iVar0))
		{
			func_451(14);
		}
	}
}

int func_277(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
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
		else if (Local_78[iVar0 /*25*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_468(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > Local_78[iVar1 /*25*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > fParam1)
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

bool func_278(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_279()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(func_356(0)))
	{
		if (func_469(50f))
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else if (Local_13.f_7.f_26 == 0)
	{
		Local_13.f_7.f_26 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	if (func_328(262144))
	{
		return true;
	}
	else if (!func_470(128))
	{
		if (Local_13.f_7.f_26 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_26, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				return true;
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(func_356(0)))
		{
			return false;
		}
	}
	iVar0 = func_305(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (!func_445(0, 1112014848 /* Float: 50f */, 0))
	{
		return true;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0))
	{
		if (Local_13.f_7.f_27 == 0)
		{
			Local_13.f_7.f_27 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		if (Local_13.f_7.f_27 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_27, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_280()
{
	return Local_879.f_15;
}

void func_281(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_282(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	if (!func_243(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_283(var uParam0, int iParam1)
{
	func_471(uParam0, iParam1);
}

void func_284(var uParam0, int iParam1)
{
	func_472(uParam0, iParam1);
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
			if (func_473(&Var0, iParam0))
			{
				func_474(&Var0);
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
	vector3 vVar0;
	var uVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	if (SCRIPTS::GET_EVENT_AT_INDEX(0, iParam0) != 3.74883E+11f)
	{
		return;
	}
	if (!SCRIPTS::GET_EVENT_DATA(0, iParam0, &vVar0, 10))
	{
		return;
	}
	uVar10 = vVar0.x;
	iVar11 = uVar10;
	iVar12 = vVar0.z;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar12))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar12))
	{
		return;
	}
	iVar13 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar12);
	if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
	{
		return;
	}
	if (iVar13 != func_305(1))
	{
		return;
	}
	switch (iVar11)
	{
		case 11:
		case 33:
			func_475(512);
			break;
	}
}

int func_288(int iParam0)
{
	return iParam0;
}

void func_289(int iParam0)
{
	int iVar0;

	if (func_476(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (func_477(iParam0, func_288(iVar0)))
			{
				if (!func_478(iParam0, func_288(iVar0)))
				{
					if (func_188(iParam0, iVar0))
					{
						func_479(Local_879.f_505.f_7[iVar0], 0, 0);
						func_480(iParam0, func_288(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

bool func_290()
{
	if (!func_458())
	{
		return true;
	}
	if (!HUD::_DOES_TEXT_BLOCK_EXIST("NBTHAUD"))
	{
		return true;
	}
	if (!HUD::_TEXT_BLOCK_IS_STREAMED("NBTHAUD"))
	{
		HUD::TEXT_BLOCK_REQUEST("NBTHAUD");
	}
	return HUD::TEXT_BLOCK_IS_LOADED("NBTHAUD");
}

bool func_291()
{
	bool bVar0;

	if (func_186(Local_879.f_19.f_3, 4))
	{
		return true;
	}
	bVar0 = false;
	switch (func_254())
	{
		case 0:
		case 1:
			if (!func_481(func_190()))
			{
				bVar0 = true;
			}
			if (!func_481(func_191()))
			{
				bVar0 = true;
			}
			break;
		case 2:
		case 3:
			if (!func_481(func_190()))
			{
				bVar0 = true;
			}
			if (!func_481(func_191()))
			{
				bVar0 = true;
			}
			if (!func_483(func_482(), &(Local_879.f_19.f_45), &(Local_13.f_7.f_17), 64, "pl_root"))
			{
				bVar0 = true;
			}
			break;
	}
	if (bVar0)
	{
		return false;
	}
	func_242(&(Local_879.f_19.f_3), 4);
	return true;
}

bool func_292()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_879.f_233.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_484(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_879.f_233.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_879.f_233.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_879.f_233.f_3), iVar0);
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

bool func_293()
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
		while (iVar1 < 2)
		{
			if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_425(iVar0, iVar1);
				if (func_485(iVar1))
				{
					if (Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_IS_META_PED_ASSET_VALID(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 = PED::_REQUEST_META_PED_ASSET_BUNDLE(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_HAS_META_PED_ASSET_LOADED(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (func_486(iVar1))
				{
					WEAPON::_REQUEST_WEAPON_ASSET(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, -1, false);
					if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_1), iVar1);
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

bool func_294()
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
	vVar10 = { Local_879.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_425(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (!func_177(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
					{
						if (func_426(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar0 /*3*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar0 /*3*/][iVar1]))
								{
									NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_46[iVar0 /*3*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_879.f_274[iVar0 /*34*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_427(iVar0, iVar1))
				{
					vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_428(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_428(iVar0, iVar1) };
				}
				if (func_429(iVar0, iVar1))
				{
					if (!func_430(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_431(iVar0, iVar1))
						{
							iVar13 = PED::_CREATE_META_PED_ASSET(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, false, false, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_432(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_428(iVar0, iVar1), true, 1f);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (iVar2 == 0)
						{
							Jump @837; //curOff = 451
						}
						else
						{
							iVar13 = OBJECT::CREATE_OBJECT(iVar2, vVar7, false, true, false, false, true);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						MISC::SET_BIT(&(Local_879.f_274[iVar0 /*34*/].f_2), iVar1);
						if (func_434(iVar0, iVar1))
						{
							TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
							GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
						}
						if (func_435(iVar0, iVar1))
						{
							ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
						}
						if (func_436(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_SET_ENTITY_FADE_IN(iVar13);
						}
						if (func_429(iVar0, iVar1))
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
						}
						vVar4 = { func_437(iVar0, iVar1) };
						if (!func_244(vVar4))
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
								if (!func_438(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_439(vVar4.x)), MISC::ABSF(func_439(vVar4.y))) };
									vVar27 = { func_440(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_879.f_274[iVar0 /*34*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_441(iVar0, iVar1))
						{
							func_442(iVar0, iVar1, 1);
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

void func_295(struct<2> Param0)
{
	if (func_364(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_364(Param0)))
	{
		STATS::_0x99230691875FC218(func_362(Param0), func_364(Param0), Global_34);
	}
}

void func_296()
{
	int iVar0;
	int iVar1;

	if (!func_224(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_487(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_297()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 2)
		{
			if (func_177(iVar1, iVar2))
			{
			}
			else if (func_176(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_46[iVar1 /*3*/][iVar2]);
				Local_879.f_274[iVar1 /*34*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_426(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_46[iVar1 /*3*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_46[iVar1 /*3*/][iVar2]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_46[iVar1 /*3*/][iVar2]);
						}
					}
				}
				if (func_434(iVar1, iVar2))
				{
					TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
					GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
				}
			}
			else if (0 != func_425(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_298(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	if (func_488(iVar0, -2.793181E-34f, 1, 0))
	{
		TASK::TASK_PLAY_ANIM(iVar0, func_190(), "base_idle", 1000f, -4f, -1, 1, 0f, false, 0, false, 0, false);
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
	}
	iVar1 = func_255(1);
	if (func_488(iVar1, 0.002842281f, 1, 0))
	{
		if (!PED::IS_PED_USING_SCENARIO_HASH(iVar1, 7.86435E-32f))
		{
			TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar1, 7.86435E-32f, -1, true, 0, -1f, false);
		}
	}
	if (bParam0)
	{
		func_489(7f);
	}
	PED::SET_PED_USING_ACTION_MODE(iVar0, true, -1, 0);
}

void func_299(var uParam0, char* sParam1, char* sParam2, float fParam3, int iParam4, int iParam5)
{
	*uParam0 = 1;
	uParam0->f_1 = fParam3;
	uParam0->f_2 = iParam4;
	uParam0->f_3 = sParam1;
	uParam0->f_4 = sParam2;
	uParam0->f_5 = iParam5;
}

int func_300(int iParam0)
{
	return func_356(iParam0);
}

int func_301(int iParam0, int iParam1, int iParam2, vector3 vParam3, vector3 vParam6)
{
	int iVar0;

	iVar0 = func_300(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return 0;
	}
	ENTITY::ATTACH_ENTITY_TO_ENTITY(iVar0, iParam1, iParam2, vParam3, vParam6, false, false, false, false, 2, true, false, false);
	return 1;
}

bool func_302(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	var uVar11;

	if (!bParam0)
	{
		func_489(1108082688 /* Float: 35f */);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		return false;
	}
	bVar0 = false;
	bVar1 = ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, true);
	if (!bVar1)
	{
		if (!func_490())
		{
			bVar0 = true;
		}
		if (!func_491(&vVar2, &vVar5))
		{
		}
		ANIMSCENE::GET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, &vVar8, &uVar11, 2);
		if (!func_492(vVar2, vVar8, 1f, 1))
		{
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, vVar2, vVar5, 2);
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
			{
				ANIMSCENE::START_ANIM_SCENE(Local_879.f_19.f_45);
			}
		}
	}
	return bVar1;
}

void func_303(int iParam0, float fParam1)
{
	Local_879.f_505.f_7[iParam0] = fParam1;
}

void func_304(int iParam0)
{
	Local_879.f_505.f_1[iParam0] = -1;
}

int func_305(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/];
}

void func_306(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_493(uParam0, iParam1, iParam3);
	func_494(uParam0, iParam2, iParam3);
}

void func_307()
{
	if (!func_373())
	{
		return;
	}
	if (func_308() == 0)
	{
		func_495(&(Local_879.f_19.f_72), func_305(0), "RE005_MALE1", 0);
	}
	else
	{
		func_495(&(Local_879.f_19.f_72), func_305(0), "RE005_FEMALE1", 0);
	}
}

int func_308()
{
	if (func_229() == 4)
	{
		return 1;
	}
	return 0;
}

void func_309(int iParam0, char* sParam1)
{
	if (func_496(sParam1, Local_879.f_423[iParam0 /*39*/].f_3) == 0)
	{
		return;
	}
	Local_879.f_423[iParam0 /*39*/].f_3 = sParam1;
	func_497(iParam0, 8);
}

bool func_310(int iParam0)
{
	return func_498(&(Local_879.f_309.f_75), 6, iParam0);
}

void func_311()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_500(func_499(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_SET_EVENT_TRACKER_FOR_PED(Var1, "MpRandomEvent", 1);
					func_501(&(Local_879.f_309), Var1);
					func_502(func_499(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_312()
{
	return (func_132(32) || func_131(32, 255));
}

bool func_313(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_503(iParam0, 12648.71f) };
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

void func_314()
{
	func_504();
	func_505();
	func_506();
}

void func_315()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_507(iVar0, bVar1, iVar2);
		func_508(iVar0, bVar1, iVar2);
		func_509(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_316()
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
	if (!func_224(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_879.f_233.f_40)
	{
		bVar8 = true;
		Local_879.f_233.f_40 = !Local_879.f_233.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_879.f_233.f_30 >= 2)
		{
			Local_879.f_233.f_30 = 0;
		}
		iVar0 = Local_879.f_233.f_30;
		Local_879.f_233.f_30++;
		iVar9 = func_510(iVar0);
		iVar1 = Local_879.f_233.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_175(iVar9, 4))
		{
			func_487(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_78[iVar3 /*25*/].f_6.f_2[iVar0] > -1f)
			{
				Local_78[iVar3 /*25*/].f_6.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_879.f_233.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_879.f_233.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_879.f_233.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_511(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_879.f_233.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_879.f_233.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_78[iVar3 /*25*/].f_6.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_78[iVar3 /*25*/].f_6.f_1), iVar0);
				}
				func_512(&(Local_879.f_233.f_32[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_78[iVar3 /*25*/].f_6.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_513(&(Local_879.f_233.f_32[iVar0 /*3*/])) || func_514(&(Local_879.f_233.f_32[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_515(&(Local_879.f_233.f_32[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_78[iVar3 /*25*/].f_6.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_175(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_879.f_233.f_40, false, 256);
		}
		if (func_175(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_516(iVar9))
						{
							if (!func_423(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_517(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_175(iVar9, 8))
			{
				if (!func_516(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_879.f_233.f_31 != 0)
	{
		if (!func_518(1, 255))
		{
			func_519(1);
		}
	}
	else if (func_518(1, 255))
	{
		func_520(1);
	}
}

void func_317()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	int iVar19;
	int iVar20;
	var uVar21;
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
	if (!func_224(&iVar25))
	{
		return;
	}
	func_521();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::IS_WEAPON_A_GUN(iVar26))
	{
		Local_879.f_309.f_64 = 0;
		Local_78[iVar25 /*25*/].f_11.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == -9.675868E-11f || iVar26 == 5.763438E+22f));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_879.f_309.f_109 >= 2)
		{
			Local_879.f_309.f_109 = 0;
		}
		iVar1 = Local_879.f_309.f_109;
		Local_879.f_309.f_109++;
		iVar22++;
		iVar18 = func_499(iVar1);
		if (!func_522(iVar18))
		{
		}
		else if (func_523(iVar18, &Var5))
		{
			if (func_524(&Var5, iVar18))
			{
				if (func_498(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
				{
					func_525(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
				}
			}
			else if (!func_498(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
			{
				func_526(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_527(iVar18);
				if (func_528(iVar18))
				{
					if (func_529(iVar18))
					{
						if (!func_530(iVar18))
						{
							func_531(iVar18);
						}
					}
					if (func_532(iVar18))
					{
						func_533(iVar18);
					}
				}
				else
				{
					if (func_310(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_534(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_501(&(Local_879.f_309), Var5);
						}
					}
					if (!func_535(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_536(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_537(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_538(Var5, Var5.f_1, &(Local_879.f_309), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_879.f_309.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1067450368) && func_539(PLAYER::PLAYER_PED_ID(), Var5, 0.707f) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_540(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_541(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_SET_EVENT_TRACKER_FOR_PED(Var5, "MpRandomEvent", 1);
										func_502(iVar18);
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
														if (func_542(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_879.f_309.f_2 & 4 != 0)
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
									if (func_543(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_879.f_309.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_544(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_498(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1))
								{
									func_525(&(Local_78[iVar25 /*25*/].f_11), 8, iVar1);
								}
								func_545(iVar18, 1);
								if (func_546(iVar18))
								{
									if (!func_547(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_548(iVar18))
											{
											}
											else
											{
												func_549(iVar18);
												func_550(iVar18);
												Jump @1397; //curOff = 1201
												if (func_551(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_879.f_309.f_111[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_879.f_309.f_111[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_879.f_309.f_111[iVar18];
																Local_879.f_309.f_111[iVar18]++;
															}
															iVar24++;
															if (func_552(iVar0, &uVar21, &iVar20, &iVar19))
															{
																if (!func_553(iVar18, iVar20))
																{
																	if (func_535(iVar18, iVar0))
																	{
																		if (!func_554(iVar18, uVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_555(iVar18, iVar20);
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

void func_318()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_556(&(Local_13.f_57[iVar0 /*3*/]), &(Local_879.f_423[iVar0 /*39*/]), func_179(iVar0));
		iVar0++;
	}
}

bool func_319()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_879.f_14))
	{
		return false;
	}
	if (func_557())
	{
		return false;
	}
	if (func_558(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_320()
{
	int iVar0;
	int iVar1;
	struct<15> Var2;

	Local_879.f_19.f_196 = -1;
	Local_879.f_19.f_197 = 0;
	Local_879.f_19.f_198 = -1;
	Local_879.f_19.f_199 = 0;
	Local_879.f_19.f_200 = -1;
	Local_879.f_19.f_201 = 0;
	if (!func_224(&iVar1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_879.f_19.f_196 = (Local_879.f_19.f_196 && Local_78[iVar0 /*25*/].f_1);
			Local_879.f_19.f_197 = (Local_879.f_19.f_197 || Local_78[iVar0 /*25*/].f_1);
			Local_879.f_19.f_198 = (Local_879.f_19.f_198 && Local_78[iVar0 /*25*/].f_1.f_1);
			Local_879.f_19.f_199 = (Local_879.f_19.f_199 || Local_78[iVar0 /*25*/].f_1.f_1);
			Local_879.f_19.f_200 = (Local_879.f_19.f_200 && Local_78[iVar0 /*25*/].f_1.f_2);
			Local_879.f_19.f_201 = (Local_879.f_19.f_201 || Local_78[iVar0 /*25*/].f_1.f_2);
			Local_78[iVar1 /*25*/].f_1.f_3 = (Local_78[iVar1 /*25*/].f_1.f_3 || Local_78[iVar0 /*25*/].f_1.f_3);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (((func_559(8388608, iVar0) && !func_328(262144)) && !func_456(65536)) && Local_13.f_7 != 9)
				{
					Var2 = { func_560(-2.330369E+32f) };
					Var2.f_10 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
					if (!PLAYER::IS_PLAYER_DEAD(Var2.f_10))
					{
						func_561(&Var2);
						func_454(65536, 1);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_321()
{
	int iVar0;

	iVar0 = Local_879.f_19.f_1;
	func_562(Local_13.f_7);
	if (iVar0 != Local_879.f_19.f_1)
	{
		func_563(iVar0);
	}
}

void func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_255(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -1.302995E+21f))
	{
		iVar1 = func_300(1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			OBJECT::DELETE_OBJECT(&iVar1);
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, -5.347891E-30f))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			if (!func_328(512))
			{
			}
		}
	}
	iVar2 = func_300(0);
	if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar0, 1.973061E+36f))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			OBJECT::DELETE_OBJECT(&iVar2);
		}
		func_564(iVar0, 1);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			PED::SET_LOOTING_FLAG(iVar0, 4, true);
			PED::SET_LOOTING_FLAG(iVar0, 7, true);
			func_475(256);
		}
		func_475(128);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_m", false);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				iVar3 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_f", false);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar3))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(iVar3, 1.973061E+36f))
				{
					OBJECT::DELETE_OBJECT(&iVar2);
					func_565(8388608);
				}
			}
		}
	}
}

void func_323()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_255(0);
	bVar1 = false;
	if (((((((ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_LASSOED(iVar0)) || PED::IS_PED_FLEEING(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(iVar0)) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(iVar0)) || PED::GET_PED_IS_BEING_GRAPPLED(iVar0)) || func_566(iVar0, 0))
	{
		bVar1 = true;
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_300(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) && ENTITY::IS_ENTITY_ATTACHED(iVar2))
		{
			ENTITY::DETACH_ENTITY(iVar2, true, true);
			PHYSICS::ACTIVATE_PHYSICS(iVar2);
		}
	}
	iVar2 = func_300(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2) && ENTITY::IS_ENTITY_ATTACHED(iVar2))
		{
			ENTITY::DETACH_ENTITY(iVar2, true, true);
			PHYSICS::ACTIVATE_PHYSICS(iVar2);
		}
	}
}

void func_324(int iParam0)
{
	int iVar0;

	if (func_328(1048576))
	{
		return;
	}
	iVar0 = func_356(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(iParam0))
	{
		if (!func_192(256))
		{
			TXD::REQUEST_STREAMED_TXD(iParam0, false);
			func_239(256);
		}
		if (TXD::HAS_STREAMED_TXD_LOADED(iParam0))
		{
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(func_356(0), iParam0, 0, 0);
			func_565(1048576);
		}
	}
}

void func_325()
{
	int iVar0;

	if ((!func_328(8388608) && !PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID())) && func_131(16384, 255))
	{
		iVar0 = func_356(0);
		if (((ENTITY::DOES_ENTITY_EXIST(iVar0) && func_567(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 0, 1) < 1067450368) && !ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar0, -1)) && !ENTITY::IS_ENTITY_ATTACHED(iVar0))
		{
			func_565(8388608);
		}
	}
}

void func_326(bool bParam0)
{
	char* sVar0;

	if (!bParam0)
	{
		if (func_328(2097152))
		{
			bParam0 = true;
		}
	}
	sVar0 = "NB_TRHU_ILO_NAME";
	if (func_308() == 1)
	{
		sVar0 = "NB_TRHU_ILO_NAME_F";
	}
	if (!bParam0)
	{
		if (Local_879.f_19.f_1 < 14)
		{
			func_569(0, func_568(PLAYER::PLAYER_ID()), 1123680256 /* Float: 125f */, -4.450028E+35f, 4.185971E-18f, 0, sVar0, 0, 1);
		}
		else
		{
			func_173(0);
		}
	}
	else if (func_254() != 1 || func_328(2097152))
	{
		func_569(0, func_568(PLAYER::PLAYER_ID()), 1120403456 /* Float: 100f */, 4.085619E-09f, 4.185971E-18f, 0, sVar0, 0, 1);
	}
	else
	{
		func_173(0);
	}
}

void func_327()
{
	if (func_131(32, 255))
	{
		return;
	}
	if (!func_570(0, 1108082688 /* Float: 35f */, 255, 0))
	{
		return;
	}
	if (func_571(0, 255))
	{
		func_572();
	}
}

bool func_328(int iParam0)
{
	return func_186(Local_879.f_19.f_197, iParam0);
}

void func_329()
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_255(0);
	if (func_254() != 1)
	{
		if (func_328(2f))
		{
			return;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		if (!func_312())
		{
			if (func_573())
			{
				if (func_574(0))
				{
					func_572();
				}
			}
			else
			{
				func_298(0);
				func_575();
			}
		}
		else
		{
			func_576(1108082688 /* Float: 35f */);
			if (func_328(1))
			{
				return;
			}
			if (func_577(0))
			{
				return;
			}
			if (!func_578(0, 255))
			{
				if (func_579(0))
				{
					iVar2 = Local_13.f_7.f_20;
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
					{
						iVar2 = PLAYER::PLAYER_ID();
					}
					sVar3 = "";
					if (func_254() == 1)
					{
						sVar3 = func_580(iVar2);
					}
					else
					{
						sVar3 = func_581(iVar2);
					}
					TASK::TASK_PLAY_ANIM(0, func_190(), sVar3, 2f, -2f, -1, 0, 0f, false, 0, false, 0, false);
					if (func_254() == 1)
					{
						TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
						TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
						TASK::TASK_FLEE_COORD(0, Local_879.f_15, 4, 12288, 5000f, -1, func_255(1));
					}
					else
					{
						TASK::TASK_PLAY_ANIM(0, func_190(), "standing_idle", 4f, -4f, -1, 1, 0f, false, 0, false, 0, false);
					}
					func_582(0);
				}
			}
			else if (func_583(0))
			{
				if (!func_488(iVar0, 3.034861E-30f, 1, 0))
				{
					return;
				}
				if (func_254() == 1)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar0, 2.574461E-25f, false, 0, false, false);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 2.271855E+07f);
					func_565(2097152);
				}
				if (!func_584(0, 0))
				{
					return;
				}
				iVar5 = 255;
				iVar4 = 0;
				while (iVar4 < 32)
				{
					iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5) && func_570(0, 1112014848 /* Float: 50f */, iVar4, 0))
						{
							PED::REGISTER_TARGET(iVar0, PLAYER::GET_PLAYER_PED(iVar5), true);
						}
					}
					iVar4++;
				}
				func_585(0);
				func_565(1);
				if (func_254() != 1)
				{
				}
				else
				{
					switch (func_229())
					{
						case 3:
						case 4:
							func_374(0, 3, 22, 1.818904E-28f);
							break;
						default:
							func_374(0, 3, 10, 1.818904E-28f);
							break;
					}
				}
			}
		}
	}
}

void func_330()
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(0);
	func_576(1108082688 /* Float: 35f */);
	if (func_328(65536) || func_586(iVar0) == 1)
	{
		if (!func_328(65536))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				iVar1 = func_277(0, 0, 1, 0);
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
					TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_190(), "standing_idle", PLAYER::GET_PLAYER_PED(iVar1), -1, 8f, -8f, 1, 0f, false, false, -1f, 0, 0, -1f);
				}
				func_565(65536);
			}
		}
		else
		{
			if (func_328(2f))
			{
				return;
			}
			if (func_488(iVar0, -2.793181E-34f, 1, 0))
			{
				if (!func_587(0, 3f))
				{
					return;
				}
				TASK::TASK_PLAY_ANIM(iVar0, func_190(), "outro", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
				func_565(2);
			}
		}
	}
}

void func_331()
{
}

void func_332()
{
	int iVar0;
	int iVar1;

	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	iVar0 = func_255(1);
	iVar1 = func_255(0);
	func_455(4, 0, 1);
	if (func_488(iVar1, 6.915501E+28f, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar1, iVar0, 20000, -1, 1.5f, 1, 0, 0);
		}
	}
}

void func_333()
{
	int iVar0;

	iVar0 = func_255(0);
	if (func_488(iVar0, -1.225639E-21f, 1, 0))
	{
		TASK::TASK_MOVE_IN_TRAFFIC(iVar0, 2.001f, 0, 0);
	}
}

void func_334()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<15> Var8;

	iVar1 = func_255(1);
	iVar2 = func_255(0);
	func_588();
	if (func_254() == 1)
	{
		func_569(0, func_568(PLAYER::PLAYER_ID()), 1120403456 /* Float: 100f */, 4.085619E-09f, 4.185971E-18f, 0, 0, 0, 1);
	}
	else
	{
		if (func_559(9.403955E-38f, 255))
		{
			return;
		}
		if (func_577(1))
		{
			return;
		}
		if (!func_578(1, 255))
		{
			if (func_579(1))
			{
				iVar3 = func_589();
				iVar4 = func_355(50f);
				switch (iVar3)
				{
					case 1:
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							iVar0 = func_590(func_190(), "breakout");
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_190(), "breakout", iVar4, iVar0, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_190(), "breakout", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						}
						break;
					case 2:
						if (ENTITY::DOES_ENTITY_EXIST(iVar4))
						{
							iVar0 = func_590(func_191(), "aggro_idle_hunter");
							TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(0, func_191(), "aggro_idle_hunter", iVar4, iVar0, 4f, -4f, 0, 0f, false, false, -1f, 0, 0, -1f);
						}
						else
						{
							TASK::TASK_PLAY_ANIM(0, func_191(), "aggro_idle_hunter", 4f, -4f, -1, 0, 0f, false, 0, false, 0, false);
						}
						break;
					default:
						break;
				}
				iVar5 = 4;
				Local_879.f_19.f_205 = func_591(0);
				if (!Local_879.f_19.f_205 && func_328(0f))
				{
					TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 30f, 0, 0);
					TASK::TASK_FLEE_COORD(0, Local_879.f_15, iVar5, 12288, 5000f, -1, func_255(1));
				}
				else
				{
					if (Local_879.f_19.f_205)
					{
						iVar5 = 3;
					}
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						TASK::TASK_FLEE_PED(0, iVar4, iVar5, 2097152, 10000f, -1, iVar1);
					}
					else
					{
						TASK::TASK_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar2, true, false), iVar5, 2097152, 10000f, -1, iVar1);
					}
				}
				Local_879.f_19.f_204 = iVar3;
				func_582(1);
			}
		}
		else if (func_583(1))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
				return;
			}
			if (!Local_879.f_19.f_205 && func_328(0f))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar2, 2.574461E-25f, false, 0, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, 2.271855E+07f);
				func_565(2097152);
			}
			if (func_592(2097152, 255))
			{
				iVar7 = 255;
				iVar6 = 0;
				while (iVar6 < 32)
				{
					iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar6);
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar7))
					{
						if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7) && func_570(0, 1112014848 /* Float: 50f */, iVar6, 0))
						{
							PED::REGISTER_TARGET(iVar2, PLAYER::GET_PLAYER_PED(iVar7), true);
						}
					}
					iVar6++;
				}
			}
			PED::_PED_EMOTIONAL_PRESET_LOCO_MOTION(iVar2, "DEFAULT_SHOCKED", 0, -1, 4);
			TASK::CLEAR_PED_TASKS(iVar2, true, false);
			TASK::CLEAR_PED_SECONDARY_TASK(iVar2);
			func_584(0, 1);
			func_565(9.403955E-38f);
			PED::SET_PED_KEEP_TASK(iVar2, true);
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				Var8 = { func_560(4.265323E-35f) };
				func_561(&Var8);
			}
			switch (Local_879.f_19.f_204)
			{
				case 1:
					if (func_458())
					{
						if (!func_328(0f))
						{
							func_374(0, 3, 19, 1.818904E-28f);
						}
						else
						{
							func_374(0, 3, 21, 1.818904E-28f);
						}
					}
					else if (!func_328(0f))
					{
						func_374(0, 3, 5, 2.301389E+24f);
					}
					else
					{
						func_374(0, 3, 9, 2.301389E+24f);
					}
					break;
				case 2:
					if (func_458())
					{
						if (!(func_328(0f) || func_328(0f)))
						{
							func_374(0, 3, 16, 1.818904E-28f);
						}
						else
						{
							func_374(0, 3, 21, 1.818904E-28f);
						}
					}
					else if (!func_328(0f))
					{
						func_374(0, 3, 7, 2.301389E+24f);
					}
					else
					{
						func_374(0, 3, 9, 2.301389E+24f);
					}
					break;
				default:
					if (func_458())
					{
						if (!(func_328(0f) || func_328(0f)))
						{
							func_565(131072);
							if (!func_328(262144))
							{
								func_374(0, 3, 17, 1.818904E-28f);
							}
							else
							{
								func_374(0, 3, 24, 1.818904E-28f);
							}
						}
						else
						{
							func_374(0, 3, 21, 1.818904E-28f);
						}
					}
					else if (!func_328(0f))
					{
						func_374(0, 3, 8, 2.301389E+24f);
					}
					else
					{
						func_374(0, 3, 9, 2.301389E+24f);
					}
					break;
			}
		}
	}
}

void func_335()
{
	if (func_593())
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "S_BASE", true))
		{
			if (!func_592(3.85186E-34f, 255))
			{
				func_565(3.85186E-34f);
			}
		}
	}
	else if (func_592(3.85186E-34f, 255))
	{
		func_594(3.85186E-34f);
	}
}

void func_336()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (Local_13.f_7 < 5)
	{
		return;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			return;
		}
	}
	if (func_328(8))
	{
		return;
	}
	if (func_328(4096))
	{
		return;
	}
	if (func_328(9.403955E-38f) || func_328(2f))
	{
		return;
	}
	iVar0 = func_305(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (func_456(2048))
	{
		if (Local_879.f_19.f_69 != Local_13.f_7.f_21)
		{
			bVar1 = true;
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
			{
				Local_13.f_7.f_21 = Local_879.f_19.f_69;
			}
		}
	}
	if (bVar1 || NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_879.f_19.f_69))
	{
		if ((bVar1 || Local_879.f_19.f_70 == 0) || NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_70, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 3000)
		{
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
			{
				Local_879.f_19.f_69 = Local_13.f_7.f_20;
				Local_879.f_19.f_70 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_456(2048))
				{
					Local_879.f_19.f_69 = Local_13.f_7.f_21;
				}
				iVar2 = PLAYER::GET_PLAYER_PED(Local_879.f_19.f_69);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					if (func_464(1))
					{
						TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, iVar2, -1, -1f, -1f, -1f);
					}
				}
			}
		}
	}
	else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) || (func_456(2048) && NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21)))
	{
		Local_879.f_19.f_69 = Local_13.f_7.f_20;
		Local_879.f_19.f_70 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		if (func_456(2048))
		{
			Local_879.f_19.f_69 = Local_13.f_7.f_21;
		}
		if (func_464(1))
		{
			TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar0, PLAYER::GET_PLAYER_PED(Local_879.f_19.f_69), -1, -1f, -1f, -1f);
		}
	}
}

void func_337()
{
}

void func_338()
{
	if (func_312())
	{
		return;
	}
	if (!func_470(1024))
	{
		if (func_302(1))
		{
			func_475(1024);
		}
	}
	else if (func_518(1, 255))
	{
		func_572();
	}
}

void func_339()
{
	func_595();
}

void func_340()
{
}

void func_341()
{
	int iVar0;
	int iVar1;

	if (func_328(2048))
	{
		return;
	}
	iVar1 = func_305(0);
	if (!func_457(0))
	{
		if (func_596(&iVar0))
		{
			if (func_597(3, 3, iVar1, iVar0, 0.707f))
			{
				if (func_598(8, 0))
				{
					func_374(0, 3, 5, 1.818904E-28f);
					func_565(2048);
				}
			}
		}
	}
}

void func_342()
{
	var uVar0;

	func_576(1108082688 /* Float: 35f */);
	func_599(0);
	if (func_328(128))
	{
		return;
	}
	if (func_596(&uVar0))
	{
		if (func_600(4, 0))
		{
			if (func_598(16, 0))
			{
				func_374(0, 3, 8, 1.818904E-28f);
				func_565(128);
			}
		}
	}
}

void func_343()
{
	func_576(1108082688 /* Float: 35f */);
	func_599(Local_13.f_7.f_20 != PLAYER::PLAYER_ID());
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, "pl_exchange_f"))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, "pl_exchange_f");
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, "pl_exchange_m"))
		{
			ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, "pl_exchange_m");
		}
	}
}

void func_344()
{
	int iVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	vector3 vVar5;
	vector3 vVar8;
	int iVar11;

	func_576(1108082688 /* Float: 35f */);
	if (func_328(8))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	sVar1 = "pl_exchange_f";
	if (PED::IS_PED_MALE(iVar0))
	{
		sVar1 = "pl_exchange_m";
	}
	if (!func_328(16))
	{
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, sVar1))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, sVar1);
				return;
			}
			ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, sVar1, true);
			func_565(16);
		}
	}
	else
	{
		iVar2 = func_305(0);
		iVar3 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
		if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
		{
			vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar2, true, false) };
			vVar8 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iVar2) };
			if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vVar5, &uVar4, false))
			{
				vVar5.f_2 = (vVar5.z - 1f);
			}
			ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_879.f_19.f_45, vVar5, vVar8, 2);
			if (func_328(64))
			{
				if (PED::IS_PED_FACING_PED(iVar2, iVar3, 45f))
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "player_m", iVar0, 0);
					}
					else
					{
						ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "player_f", iVar0, 0);
					}
					ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_879.f_19.f_45, "b_root_upper", true, false);
					func_374(0, 3, 13, 1.818904E-28f);
					func_565(8);
				}
			}
		}
		if (func_328(8))
		{
			return;
		}
		if (iVar3 == PLAYER::PLAYER_PED_ID())
		{
			if (!func_559(524288, 255))
			{
				Local_879.f_19.f_195 = 0;
				TASK::OPEN_SEQUENCE_TASK(&iVar11);
				if (func_601(iVar3, 0, 1, 0) != -3.273909E-18f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(iVar3, -3.273909E-18f, false, 0, false, false);
					TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
					Local_879.f_19.f_195++;
				}
				if (PED::IS_PED_ON_MOUNT(iVar3))
				{
					TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
					Local_879.f_19.f_195++;
				}
				else if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, true))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
					Local_879.f_19.f_195++;
				}
				TASK::TASK_ENTER_ANIM_SCENE(0, Local_879.f_19.f_45, "player_f", "pl_exchange_f", 1f, false, 512, 20000, -1f);
				Local_879.f_19.f_195++;
				TASK::TASK_STAND_STILL(0, 5000);
				func_602(iVar3, &iVar11, 0, 0, 1, 1);
				func_565(524288);
			}
			else if (!func_452(iVar3, 3.034861E-30f))
			{
				func_594(524288);
			}
			else if (TASK::GET_SEQUENCE_PROGRESS(iVar3) == Local_879.f_19.f_195)
			{
				WEAPON::_HIDE_PED_WEAPONS(PLAYER::PLAYER_PED_ID(), 2, true);
				func_565(64);
			}
		}
		else if (func_559(64, 255))
		{
			func_594(64);
		}
	}
}

void func_345()
{
	int iVar0;
	bool bVar1;
	struct<15> Var2;

	func_576(1108082688 /* Float: 35f */);
	if (func_328(2f))
	{
		return;
	}
	iVar0 = func_356(0);
	if (!func_328(262144))
	{
		if ((ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), 1.973061E+36f) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_879.f_19.f_45, false)) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			if (Local_13.f_7.f_21 == PLAYER::PLAYER_ID())
			{
				bVar1 = false;
				if (!func_328(512))
				{
					bVar1 = func_603(500, 0);
				}
				else
				{
					bVar1 = func_603(250, 0);
				}
				if (bVar1)
				{
					func_604(465.9591f, 0);
				}
				Var2 = { func_560(2.774337E+25f) };
				func_561(&Var2);
				func_565(262144);
			}
		}
	}
	if (!func_328(8388608))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar0, Local_879.f_19.f_45))
				{
					OBJECT::DELETE_OBJECT(&iVar0);
					func_565(8388608);
				}
			}
		}
		else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			func_565(8388608);
		}
	}
}

void func_346()
{
	func_576(1108082688 /* Float: 35f */);
	if (func_328(512))
	{
		return;
	}
	if (func_600(5, 0))
	{
		if (func_598(32, 0))
		{
			func_374(0, 3, 12, 1.818904E-28f);
			func_565(512);
		}
	}
}

void func_347()
{
	func_576(1108082688 /* Float: 35f */);
}

void func_348()
{
	func_576(1108082688 /* Float: 35f */);
	if (func_328(1024))
	{
		return;
	}
	if (func_605())
	{
		if (func_600(5, 1))
		{
			if (func_598(64, 0))
			{
				if (!func_456(4096))
				{
					func_374(0, 3, 15, 1.818904E-28f);
				}
				else
				{
					func_374(0, 3, 27, 1.818904E-28f);
				}
				func_565(1024);
			}
		}
	}
}

void func_349()
{
	func_576(1108082688 /* Float: 35f */);
}

void func_350()
{
	int iVar0;
	int iVar1;

	if (Local_879.f_19.f_203 != 0)
	{
		EVENT::REMOVE_SHOCKING_EVENT(Local_879.f_19.f_203);
		Local_879.f_19.f_203 = 0;
	}
	iVar0 = func_255(1);
	iVar1 = func_255(0);
	func_455(4, 0, 1);
	if (func_488(iVar1, 6.915501E+28f, 1, 0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			TASK::TASK_MOUNT_ANIMAL(iVar1, iVar0, 20000, -1, 1.5f, 1, 0, 0);
		}
	}
}

void func_351()
{
	int iVar0;

	if (func_577(2))
	{
		return;
	}
	if (!func_578(2, 255))
	{
		if (func_579(2))
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_21);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar0, 4000, -1f, -1f, -1f);
			}
			else
			{
				TASK::TASK_STAND_STILL(0, 4000);
			}
			TASK::TASK_MOVE_IN_TRAFFIC(0, 2.001f, 0, 0);
			func_582(2);
		}
	}
	else if (func_583(2))
	{
		if (func_488(func_305(0), 3.034861E-30f, 1, 0))
		{
			if (!func_584(0, 2))
			{
			}
		}
	}
}

void func_352(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, int iParam10, int iParam11)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	switch (iParam4)
	{
		case 0:
			iVar2 = 1;
			iVar0 = 1;
			iVar3 = 1;
			iVar1 = 1;
			break;
		case 1:
			iVar2 = 2;
			iVar0 = 2;
			iVar3 = 2;
			iVar1 = 2;
			break;
		case 2:
			iVar2 = 3;
			iVar0 = 3;
			iVar3 = 3;
			iVar1 = 3;
			break;
		case 3:
			iVar2 = 4;
			iVar0 = 4;
			iVar3 = 3;
			iVar1 = 3;
			break;
	}
	if (bParam8)
	{
		iVar3 = 0;
	}
	if (bParam9)
	{
		iVar1 = 0;
	}
	uParam0->f_3 = iParam1;
	uParam0->f_7 = iParam3;
	uParam0->f_5 = iParam10;
	uParam0->f_6 = iParam11;
	uParam0->f_8 = iVar0;
	uParam0->f_13 = iParam5;
	uParam0->f_14 = iParam6;
	uParam0->f_15 = iParam6;
	uParam0->f_23 = iVar3;
	uParam0->f_24 = iVar3;
	uParam0->f_16 = iVar1;
	uParam0->f_9 = iParam7;
	uParam0->f_10 = iParam7;
	uParam0->f_11 = iParam7;
	switch (iParam2)
	{
		case 0:
			uParam0->f_4 = 21030;
			uParam0->f_17 = iVar2;
			uParam0->f_18 = iVar2;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			break;
		case 1:
			uParam0->f_4 = 21030;
			uParam0->f_19 = iVar2;
			uParam0->f_20 = iVar2;
			uParam0->f_21 = iVar2;
			uParam0->f_22 = iVar2;
			uParam0->f_17 = 0;
			uParam0->f_18 = 0;
			break;
	}
}

bool func_353(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_354()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_173(func_510(iVar0));
		iVar0++;
	}
}

int func_355(float fParam0)
{
	int iVar0;

	iVar0 = func_607(0, 81842, fParam0, 1, 0);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return PLAYER::GET_PLAYER_PED(iVar0);
	}
	return 0;
}

var func_356(int iParam0)
{
	return func_608(0, iParam0);
}

void func_357()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (func_500(func_499(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(Var1);
			}
		}
		iVar0++;
	}
}

void func_358(int iParam0, int iParam1)
{
	func_281(&(Local_879.f_423[iParam0 /*39*/].f_5), iParam1);
}

bool func_359(int iParam0, int iParam1)
{
	return func_186(Local_879.f_423[iParam0 /*39*/].f_5, iParam1);
}

int func_360(int iParam0)
{
	return func_305(iParam0);
}

void func_361(int iParam0, bool bParam1)
{
	int iVar0;
	struct<8> Var1;

	Var1.f_4 = 1;
	Var1.f_7 = -1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_609(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]))
		{
			func_610(&(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]), 1, 1);
			if (bParam1)
			{
				MISC::COPY_SCRIPT_STRUCT(&(Local_879.f_423[iParam0 /*39*/].f_6[iVar0 /*8*/]), &Var1, 8);
			}
		}
		iVar0++;
	}
	func_358(iParam0, 2);
}

int func_362(var uParam0, var uParam1)
{
	return uParam0;
}

int func_363(int iParam0)
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

int func_364(struct<2> Param0)
{
	return func_611(Param0);
}

void func_365(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_362(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_613(func_612(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_219(iVar5) == func_612(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_614(iVar4);
			if (!func_615(iVar6, 0))
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

int func_366(int iParam0, int iParam1)
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

void func_367(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_616(&Var0);
}

var func_368(int iParam0)
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

var func_369(int iParam0)
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

var func_370(int iParam0)
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

struct<2> func_371(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_617(-1.11244E+21f);
		case 2:
			return func_617(-0.03766548f);
		case 3:
			return func_617(20967.98f);
		case 4:
			return func_617(20967.98f);
	}
	return Var0;
}

int func_372(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

bool func_373()
{
	switch (func_229())
	{
		case 3:
		case 4:
			return true;
		default:
			break;
	}
	return false;
}

void func_374(int iParam0, int iParam1, int iParam2, float fParam3)
{
	struct<15> Var0;

	Var0 = { func_560(2.074977E-25f) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	Var0.f_14 = fParam3;
	func_561(&Var0);
}

float func_375(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_376(bool bParam0)
{
	if (!func_68(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_68(256))
		{
			func_184(Local_879.f_18, 0);
			func_146(256);
		}
	}
	func_146(16);
}

int func_377(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = Local_13.f_7.f_2[iParam0];
	if (!bParam1)
	{
		return 0;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(iVar0))
	{
		return 0;
	}
	iVar1 = NETWORK::NET_TO_ENT(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		ENTITY::DELETE_ENTITY(&iVar1);
	}
	return 1;
}

bool func_378(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_618(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_379(int iParam0)
{
	return iParam0 + 8;
}

void func_380(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_503(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return;
	}
	if (!MISC::IS_BIT_SET(iVar2, iParam0))
	{
		return;
	}
	MISC::CLEAR_BIT(&iVar2, iParam0);
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

void func_381(int iParam0)
{
	if (!MISC::IS_BIT_SET(Local_879.f_19.f_202, iParam0) && !func_578(iParam0, 255))
	{
		return;
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_879.f_19.f_206[iParam0]));
}

int func_382(int iParam0)
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

int func_383(int iParam0)
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

void func_384(bool bParam0)
{
	func_200(bParam0, 0);
	func_200(bParam0, 1);
	func_200(bParam0, 3);
	func_198(bParam0);
}

void func_385(bool bParam0)
{
	func_199(bParam0);
	func_619(bParam0, 0, 3);
}

void func_386(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_387(bool bParam0)
{
	func_200(bParam0, 0);
	func_386(bParam0, 0);
	func_386(bParam0, 1);
	func_386(bParam0, 4);
	func_386(bParam0, 5);
}

void func_388(bool bParam0)
{
	func_200(bParam0, 1);
	func_386(bParam0, 2);
	func_386(bParam0, 3);
	func_386(bParam0, 6);
	func_386(bParam0, 7);
	func_203(bParam0, 2);
}

void func_389(bool bParam0)
{
	func_200(bParam0, 0);
	func_386(bParam0, 0);
	func_386(bParam0, 1);
	func_386(bParam0, 2);
}

void func_390(bool bParam0)
{
	func_200(bParam0, 1);
	func_198(bParam0);
}

void func_391(bool bParam0)
{
	func_200(bParam0, 2);
	func_386(bParam0, 3);
}

void func_392(bool bParam0)
{
	func_200(bParam0, 3);
	func_386(bParam0, 4);
}

void func_393(bool bParam0)
{
	func_386(bParam0, 0);
	func_386(bParam0, 1);
}

void func_394(bool bParam0)
{
	func_386(bParam0, 2);
	func_386(bParam0, 3);
}

void func_395(bool bParam0)
{
	func_386(bParam0, 4);
	func_386(bParam0, 5);
}

bool func_396(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_397(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_398(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_399(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

bool func_400(int iParam0, bool bParam1)
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

void func_401(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (!func_359(iParam0, 4))
		{
			func_497(iParam0, 4);
		}
	}
	else if (func_359(iParam0, 4))
	{
		func_358(iParam0, 4);
	}
}

int func_402(var uParam0)
{
	return uParam0;
}

void func_403(int iParam0, bool bParam1)
{
	if (!bParam1)
	{
		func_497(iParam0, 16);
	}
	else
	{
		func_358(iParam0, 16);
	}
}

int func_404(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_405(int iParam0)
{
	func_281(&(Local_879.f_19.f_2), iParam0);
}

void func_406(int iParam0, int iParam1, char* sParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 = fParam3;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6 = iParam4;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4 = iParam5;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5 = iParam6;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = iParam7;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1 = iParam8;
	if (func_620(iParam0))
	{
		func_621(iParam0, iParam1, 16);
	}
}

void func_407(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, bool bParam5)
{
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2 = sParam2;
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7 = sParam3;
	func_621(iParam0, iParam1, 2);
	if (bParam4)
	{
		func_621(iParam0, iParam1, 4);
	}
	else
	{
		func_622(iParam0, iParam1, 4);
	}
	if (bParam5 && func_620(iParam0))
	{
		func_623(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], sParam2, sParam3, 1);
	}
}

void func_408(int iParam0, int iParam1)
{
	if (Local_879.f_423[iParam0 /*39*/].f_4 == iParam1)
	{
		return;
	}
	Local_879.f_423[iParam0 /*39*/].f_4 = iParam1;
	func_497(iParam0, 8);
}

void func_409(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (!bParam2)
	{
		func_621(iParam0, iParam1, 1);
	}
	else
	{
		func_622(iParam0, iParam1, 1);
	}
	if (bParam3 && func_620(iParam0))
	{
		func_624(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], bParam2, 1, 1);
	}
}

void func_410(var uParam0)
{
	func_625(uParam0, 0);
	func_626(uParam0, 0);
	func_411(uParam0, 1);
	func_627(uParam0, 1);
	func_628(uParam0, 0);
	func_629(uParam0, 1);
	func_630(uParam0, 1, 1, 1);
}

void func_411(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 256);
	}
	else
	{
		func_242(&(uParam0->f_2), 256);
	}
}

void func_412(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 4);
	}
	else
	{
		func_242(&(uParam0->f_2), 4);
	}
}

void func_413(var uParam0)
{
	func_632(uParam0, (func_631(uParam0) - 6f));
	func_633(uParam0, 1);
}

void func_414(var uParam0)
{
	func_625(uParam0, 0);
	func_626(uParam0, 0);
	func_411(uParam0, 0);
	func_628(uParam0, 0);
	func_630(uParam0, 1, 1, 1);
}

void func_415(var uParam0)
{
	func_634(uParam0, 1);
	func_635(uParam0, 1);
	func_636(uParam0, 1);
}

void func_416(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 131072);
	}
	else
	{
		func_242(&(uParam0->f_2), 131072);
	}
}

void func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 4);
	}
	else
	{
		func_281(uParam0, 4);
	}
}

bool func_418(int iParam0, var uParam1)
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

int func_419(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

void func_420(int iParam0, int iParam1, float fParam2)
{
	Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2 = fParam2;
}

bool func_421(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_503(iParam1, 8.746343E-07f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &iVar2))
	{
		return false;
	}
	return MISC::IS_BIT_SET(iVar2, iParam0);
}

int func_422(int iParam0)
{
	if (!func_187(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_423(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_879.f_15 };
	iVar7 = 0;
	iVar8 = func_484(iParam0);
	iVar9 = func_637(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
		{
			iVar9 = func_637(iParam0);
			fVar0 = func_638(iParam0);
			if (!func_186(Local_879.f_233.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_639(iParam0)) };
			}
			else
			{
				vVar1 = { func_639(iParam0) };
			}
			if (!func_640(&(Local_13.f_43[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_43[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_175(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_641(iVar7, 1);
					}
					if (func_642(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_643(iParam0))
						{
							if (func_642(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_424(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_43[iParam0]);
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
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_13.f_43[iParam0])))
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

bool func_424(int iParam0)
{
	return func_175(iParam0, 128);
}

int func_425(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2;
}

bool func_426(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_427(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_428(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_7;
}

bool func_429(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_13;
}

bool func_430(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_644(*uParam0, 0f, 0f, 0f))
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

bool func_431(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_274[iParam0 /*34*/].f_3, iParam1);
}

bool func_432(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_433(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_645(iParam1))
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

bool func_434(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_435(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_436(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_437(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_10;
}

bool func_438(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_439(float fParam0)
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

Vector3 func_440(vector3 vParam0)
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

bool func_441(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_442(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_443(int iParam0, int iParam1)
{
	return func_186(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 512);
}

void func_444(var uParam0, int iParam1)
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
			if (!func_646(iParam1))
			{
			}
			else
			{
				uParam0->f_2 = 2;
			}
			break;
		case 2:
			if (func_647(iParam1))
			{
			}
			else
			{
				uParam0->f_1 = 255;
				*uParam0 = func_649(iParam1, func_648(Local_13.f_57.f_7, iParam1), func_225(iParam1));
				func_119(&(Local_13.f_57.f_7), iParam1, 3);
				uParam0->f_2 = 0;
			}
			break;
	}
}

bool func_445(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_468(iVar0))
			{
				if (func_570(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

var func_446()
{
	return Local_879.f_3;
}

int func_447(int iParam0)
{
	switch (func_229())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2.744369E-37f;
				case 1:
					return 5.755637E+08f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 8.318212E+15f;
				case 1:
					return -4.204967E+19f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -2.092063E-38f;
				case 1:
					return 2.063764E+09f;
				default:
					break;
			}
			break;
	}
	return 2;
}

char* func_448(int iParam0)
{
	switch (func_229())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_PLN_V1_SPOOK";
				case 1:
					return "RE_TH_PLN_V1_LEAVE";
				case 2:
					return "RE_TH_PLN_V1_IDLE";
				case 3:
					return "RE_TH_PLN_V1_IDLE_ALT";
				case 4:
					return "RE_TH_PLN_V1_RIDE";
				case 5:
					return "RE_TH_PLN_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_PLN_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_PLN_V1_HOGTIE";
				case 10:
					return "GET_LOST";
				case 12:
					return "RE_TH_PLN_V1_UNTIE";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_MTN_V1_SPOOK";
				case 1:
					return "RE_TH_MTN_V1_LEAVE";
				case 2:
					return "RE_TH_MTN_V1_IDLE";
				case 3:
					return "RE_TH_MTN_V1_IDLE_ALT";
				case 4:
					return "RE_TH_MTN_V1_RIDE";
				case 5:
					return "RE_TH_MTN_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_MTN_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_MTN_V1_HOGTIE";
				case 10:
					return "GET_AWAY_FROM_ME";
				case 12:
					return "RE_TH_MTN_V1_UNTIE";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE_TH_FTH_V1_SPOOK";
				case 1:
					return "RE_TH_FTH_V1_LEAVE";
				case 2:
					return "RE_TH_FTH_V1_IDLE";
				case 3:
					return "RE_TH_FTH_V1_IDLE_ALT";
				case 4:
					return "RE_TH_FTH_V1_RIDE";
				case 5:
					return "RE_TH_FTH_V1_AGGRO";
				case 6:
					return "GENERIC_CURSE_MED";
				case 7:
					return "HAND_OVER_MONEY";
				case 8:
					return "GET_AWAY_FROM_ME";
				case 9:
					return "RE_TH_FTH_V1_AGGRO_HORSE";
				case 11:
					return "RE_TH_FTH_V1_HOGTIE";
				case 10:
					return "GET_AWAY_FROM_ME";
				case 12:
					return "RE_TH_FTH_V1_UNTIE";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_449(int iParam0, char* sParam1, float fParam2, int iParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
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
	return func_650(iParam0, &Var0);
}

bool func_450(int iParam0)
{
	if (Local_13.f_7 < 5)
	{
		if (func_254() == 2 || func_254() == 3)
		{
			return false;
		}
	}
	if (func_254() == 2 || func_254() == 3)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			return false;
		}
	}
	if (func_328(8))
	{
		return false;
	}
	if (func_328(4096))
	{
		return false;
	}
	Local_13.f_7.f_20 = func_607(0, 84105, 1101004800 /* Float: 20f */, 1, 0);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20))
	{
		return true;
	}
	if (!func_328(128))
	{
		Local_13.f_7.f_20 = func_277(0, 0, 1, 0);
	}
	else
	{
		Local_13.f_7.f_20 = func_277(0, 1101004800 /* Float: 20f */, 1, 0);
	}
	return (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20));
}

void func_451(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_452(int iParam0, int iParam1)
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

void func_453()
{
	Local_879.f_19.f_41 = 0;
	if (func_513(&(Local_879.f_19.f_42)))
	{
		func_515(&(Local_879.f_19.f_42));
	}
}

void func_454(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_242(&(Local_13.f_7.f_1), iParam0);
}

int func_455(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return 0;
	}
	if (bParam2)
	{
		if (func_459(iParam0))
		{
			return 0;
		}
	}
	iVar0 = func_255(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (!bParam1)
	{
		if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
		{
			return 0;
		}
	}
	switch (iParam0)
	{
		case 4:
			if (func_328(2f))
			{
				return 0;
			}
			switch (Local_879.f_19.f_1)
			{
				case 14:
				case 15:
					if (PED::IS_PED_ON_MOUNT(iVar0) || func_278(iVar0, 6.915501E+28f))
					{
						if (func_373())
						{
							if (func_328(64))
							{
								func_374(0, 3, 14, 1.818904E-28f);
							}
							else if (!func_456(4096))
							{
								func_374(0, 3, 27, 1.818904E-28f);
							}
							else
							{
								func_374(0, 3, 7, 1.818904E-28f);
							}
							MISC::SET_BIT(&(Local_13.f_7.f_5), 4);
							MISC::SET_BIT(&(Local_879.f_19.f_7), 4);
							return 1;
						}
						else
						{
							func_374(0, 3, 4, 1.818904E-28f);
							MISC::SET_BIT(&(Local_13.f_7.f_5), 4);
							MISC::SET_BIT(&(Local_879.f_19.f_7), 4);
							return 1;
						}
					}
					break;
			}
			break;
		case 11:
			if (PED::IS_PED_HOGTIED(iVar0))
			{
				if (func_373())
				{
					func_374(0, 3, 20, 1.818904E-28f);
				}
				else
				{
					func_374(0, 3, 11, 1.818904E-28f);
				}
				MISC::SET_BIT(&(Local_13.f_7.f_5), 11);
				MISC::SET_BIT(&(Local_879.f_19.f_7), 11);
				return 1;
			}
			break;
		case 13:
			if (func_459(11) && !PED::IS_PED_HOGTIED(iVar0))
			{
				if (func_373())
				{
					func_374(0, 3, 26, 1.818904E-28f);
				}
				else
				{
					func_374(0, 3, 11, 1.818904E-28f);
				}
				MISC::SET_BIT(&(Local_13.f_7.f_5), 13);
				MISC::SET_BIT(&(Local_879.f_19.f_7), 13);
				return 1;
			}
			break;
	}
	return 0;
}

bool func_456(int iParam0)
{
	return func_186(Local_13.f_7.f_1, iParam0);
}

bool func_457(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_233.f_6, iParam0);
}

bool func_458()
{
	if (func_254() == 2 || func_254() == 3)
	{
		return true;
	}
	return false;
}

bool func_459(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam0);
}

float func_460(int iParam0, int iParam1, bool bParam2)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_78[iParam1 /*25*/].f_6.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_78[iParam1 /*25*/].f_6.f_2[iParam0];
}

int func_461()
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;

	if (func_456(32))
	{
		return -1;
	}
	if (func_456(64))
	{
		if (func_652(2.524355E-29f))
		{
			func_466(64, 1);
		}
		else
		{
			return -1;
		}
	}
	if (!func_653())
	{
		iVar0 = func_654(0, 0, 1, 0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
		{
			iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
				return -1;
			}
			fVar2 = func_460(0, iVar0, 1);
			if (func_655(fVar2))
			{
				Local_13.f_7.f_19 = 2;
				return func_656();
			}
			else
			{
				fVar3 = func_657();
				if (fVar2 <= fVar3)
				{
					func_462(iVar1);
				}
			}
		}
	}
	else
	{
		if (func_328(1.084202E-19f))
		{
			func_454(64, 1);
			func_462(255);
			return -1;
		}
		iVar4 = func_658();
		if (func_328(iVar4))
		{
			iVar5 = func_656();
			if (Local_13.f_7.f_19 < 2)
			{
				Local_13.f_7.f_19++;
			}
			return iVar5;
		}
	}
	return -1;
}

void func_462(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam0 == 255)
		{
			Local_13.f_7.f_20 = 255;
			Local_13.f_7.f_24 = 0;
			func_466(func_659(), 1);
			return;
		}
		return;
	}
	Local_13.f_7.f_20 = iParam0;
	Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_454(func_659(), 1);
}

bool func_463(int iParam0, int iParam1)
{
	return func_660(iParam0, iParam1);
}

bool func_464(bool bParam0)
{
	if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_root_upper", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_root_upper_ex", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_root_upper_transition", true))
	{
		return true;
	}
	if (!bParam0)
	{
		return false;
	}
	if ((((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_offer_00", true) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_offer_01", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_offer_02", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_ilo_neg_00", true)) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_ilo_neg_01", true))
	{
		return true;
	}
	return false;
}

void func_465()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = func_305(0);
	if (func_661(0))
	{
		iVar1 = PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20);
	}
	switch (func_662())
	{
		case 0:
			if (func_663())
			{
				func_664(3);
				Local_13.f_7.f_10 = 3;
				func_465();
			}
			break;
		case 1:
			if (func_665(0, 3))
			{
				Local_13.f_7.f_29 = -1;
				Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_456(524288))
				{
					Local_13.f_7.f_21 = Local_13.f_7.f_22;
					func_466(524288, 1);
				}
				else
				{
					Local_13.f_7.f_21 = Local_13.f_7.f_23;
				}
				if (!func_666())
				{
					func_664(4);
					func_465();
				}
				else
				{
					func_466(16, 1);
					Local_13.f_7.f_20 = Local_13.f_7.f_21;
					SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
					bVar0 = func_667();
					if (Local_13.f_7.f_10 < func_668(bVar0, 2, 1))
					{
						if (bVar0 && Local_13.f_7.f_10 > 0)
						{
							func_669();
							func_664(2);
						}
						else
						{
							func_454(32768, 1);
							func_664(4);
							SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
						}
						Local_13.f_7.f_10++;
					}
					else if (!func_456(262144))
					{
						func_664(5);
						SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_21);
					}
					else
					{
						func_664(6);
					}
				}
			}
			break;
		case 2:
			if (func_670())
			{
				if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_20))
				{
					func_454(32768, 1);
					func_664(4);
				}
				else if (PED::IS_PED_FACING_PED(iVar2, iVar1, 100f))
				{
					if (!func_671(500))
					{
						func_672(Local_13.f_7.f_20);
						func_664(4);
					}
				}
			}
			else
			{
				func_664(4);
			}
			break;
		case 3:
			if (!func_670())
			{
				func_664(4);
			}
			else if (func_463(0, 3))
			{
				Local_13.f_7.f_22 = Local_13.f_7.f_20;
				func_454(524288, 1);
				func_664(1);
			}
			break;
		case 4:
			if (!func_671(500))
			{
				if (func_463(0, 2))
				{
					Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_664(0);
				}
			}
			break;
		case 5:
			if (!func_671(500))
			{
				func_451(10);
				func_664(0);
			}
			break;
		case 6:
			if (!func_671(500))
			{
				if (func_463(0, 2))
				{
					func_451(12);
					func_454(4096, 1);
					func_664(0);
				}
			}
			break;
	}
}

void func_466(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return;
		}
	}
	func_281(&(Local_13.f_7.f_1), iParam0);
}

int func_467(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	fVar1 = iParam4;
	iVar3 = 255;
	*iParam3 = iParam4;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else if (bParam7 && !func_673(NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar2), 1, 1))
		{
		}
		else
		{
			iVar4 = PLAYER::GET_PLAYER_PED(iVar2);
			if ((iParam5 == 0 || iParam6 == 0) || PED::GET_RELATIONSHIP_BETWEEN_PEDS(iParam6, iVar4) == iParam5)
			{
				fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), vParam0);
				if (fVar1 < *iParam3)
				{
					iVar3 = iVar2;
					*iParam3 = fVar1;
				}
			}
		}
		iVar0++;
	}
	return iVar3;
}

bool func_468(int iParam0)
{
	return func_131(8, iParam0);
}

bool func_469(float fParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = func_356(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
				if ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)) && func_567(iVar1, PLAYER::GET_PLAYER_PED(iVar2), 0, 1) <= fParam0)
				{
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

bool func_470(int iParam0)
{
	return func_186(Local_879.f_19.f_199, iParam0);
}

void func_471(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_472(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_473(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_879.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_879)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_879.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_879.f_3)
	{
		return false;
	}
	return true;
}

void func_474(var uParam0)
{
	int iVar0;

	switch (uParam0->f_9)
	{
		case 377515857:
			func_674(uParam0);
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				switch (uParam0->f_13)
				{
					case 2:
					case 3:
					case 4:
						Local_13.f_7.f_7 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						break;
				}
			}
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1.685221E-20f, PLAYER::GET_PLAYER_PED(uParam0->f_1), 20f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			break;
		case -180890260:
			if (!func_328(262144))
			{
				if (uParam0->f_10 == PLAYER::PLAYER_ID())
				{
					func_675();
					func_565(262144);
				}
			}
			if (func_375(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 1103626240)
			{
				func_376(1);
			}
			iVar0 = func_356(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					OBJECT::DELETE_OBJECT(&iVar0);
				}
			}
			break;
		case 107137171:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
			{
				if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_879.f_19.f_45))
				{
					TASK::CLEAR_PED_TASKS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, false);
					TASK::CLEAR_PED_SECONDARY_TASK(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()));
				}
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(Local_879.f_19.f_45);
				}
			}
			break;
		case 1773639449:
			if (func_375(PLAYER::PLAYER_PED_ID(), Local_879.f_15, 1) < 1103626240)
			{
				func_376(1);
			}
			break;
	}
}

void func_475(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_242(&(Local_78[iVar0 /*25*/].f_1.f_1), iParam0);
}

bool func_476(int iParam0)
{
	return Local_879.f_505.f_1[iParam0] != 0;
}

bool func_477(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_505.f_1[iParam0], iParam1);
}

bool func_478(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_879.f_505.f_4[iParam0], iParam1);
}

void func_479(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_676())
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
	if (func_677(iParam0, 1) < 0)
	{
		return;
	}
	if (func_677(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_677(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_677(iParam0, 1) /*4*/].f_2++;
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
	func_678(&Var0, uVar7);
}

void func_480(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_879.f_505.f_4[iParam0]), iParam1);
}

bool func_481(char* sParam0)
{
	STREAMING::REQUEST_ANIM_DICT(sParam0);
	if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
	{
		return true;
	}
	return false;
}

char* func_482()
{
	return "script@beat@wilderness@treasureHunter@mp@sell@main";
}

bool func_483(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam0, iParam3, sParam4, true, true);
			}
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
					{
						return false;
					}
				}
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
				{
					if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, false) && !ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, false, false))
					{
						ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
					}
					return false;
				}
				else
				{
					*uParam2 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
				}
			}
			return false;
		}
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam2))
	{
		return false;
	}
	*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam2);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

int func_484(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_3;
}

bool func_485(int iParam0)
{
	return func_431(0, iParam0);
}

bool func_486(int iParam0)
{
	return func_432(0, iParam0);
}

void func_487(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_484(iParam0);
	bVar3 = func_400(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_879.f_233.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_43[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_879.f_233.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_78[iParam1 /*25*/].f_6.f_2[iParam0] = -1f;
				}
				else
				{
					Local_78[iParam1 /*25*/].f_6.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_424(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_43[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_43[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_43[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_679(iVar1, 1f, 0);
					iVar0 = func_680(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(iVar0))
					{
						func_681(iVar1, iVar0, 1);
					}
				}
				if (func_642(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_643(iParam0))
					{
						if (func_642(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_879.f_233.f_5), iParam0);
				if (bParam2)
				{
					func_682(iParam0);
				}
			}
		}
	}
}

bool func_488(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_278(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

void func_489(float fParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_683(func_510(iVar0), fParam0);
		iVar0++;
	}
}

bool func_490()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		return false;
	}
	bVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "hunter", false) == func_305(0);
	bVar1 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_879.f_19.f_45, "map", false) == func_356(0);
	bVar2 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(Local_879.f_19.f_45, "binoculars", false) == func_356(1);
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (!bVar0)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "hunter", func_305(0), 0);
		}
		if (!bVar1)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "map", func_356(0), 0);
		}
		if (!bVar2)
		{
			ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_879.f_19.f_45, "binoculars", func_356(1), 0);
		}
	}
	if ((!bVar0 || !bVar1) || !bVar2)
	{
		return false;
	}
	return true;
}

bool func_491(var uParam0, var uParam1)
{
	*uParam0 = { 0f, 0f, 0f };
	*uParam1 = { 0f, 0f, 0f };
	switch (func_235())
	{
		case 0:
			*uParam0 = { -997137488, 1137085242, 1114766128 };
			*uParam1 = { 0f, 0f, 1129455813 };
			break;
		case 1:
			*uParam0 = { -996152142, 1133718639, 1117424640 };
			*uParam1 = { 0f, 0f, -1026174484 };
			break;
		case 2:
			*uParam0 = { -995399437, 1133360297, 1118569942 };
			*uParam1 = { 0f, 0f, -1023252234 };
			break;
		case 3:
			*uParam0 = { -997476867, 1137399507, 1113422063 };
			*uParam1 = { 0f, 0f, -1021847798 };
			break;
		case 4:
			*uParam0 = { -996079017, 1125417039, 1116705443 };
			*uParam1 = { 0f, 0f, -1031773880 };
			break;
		case 5:
			*uParam0 = { -993128883, -1025132724, 1126829287 };
			*uParam1 = { 0f, 0f, -1030938952 };
			break;
		case 6:
			*uParam0 = { -997775860, -1010137639, 1120012245 };
			*uParam1 = { 0f, 0f, -1026880963 };
			break;
		case 7:
			*uParam0 = { 1129240415, -1020633724, 1124239173 };
			*uParam1 = { 0f, 0f, 0f };
			break;
		case 8:
			*uParam0 = { -1004843341, 1127929951, 1109727406 };
			*uParam1 = { 0f, 0f, 1127481344 /* Float: 180f */ };
			break;
		case 9:
			*uParam0 = { 1110541179, 1136795179, 1124193318 };
			*uParam1 = { 0f, 0f, -1022739087 };
			break;
		case 10:
			*uParam0 = { 1144798960, -1033341947, 1126016477 };
			*uParam1 = { 0f, 0f, -1022172856 };
			break;
		case 11:
			*uParam0 = { 1145859682, 1141741071, 1122287761 };
			*uParam1 = { 0f, 0f, -1025326449 };
			break;
	}
	if (func_244(*uParam0))
	{
		*uParam0 = { Local_879.f_15 };
		return false;
	}
	return true;
}

bool func_492(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (fParam6 < 0f)
	{
		fParam6 = 0f;
	}
	if (MISC::ABSF((vParam0.x - vParam3.x)) <= fParam6)
	{
		if (MISC::ABSF((vParam0.y - vParam3.y)) <= fParam6)
		{
			if (!bParam7 || MISC::ABSF((vParam0.z - vParam3.z)) <= fParam6)
			{
				return true;
			}
		}
	}
	return false;
}

void func_493(var uParam0, int iParam1, int iParam2)
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

void func_494(var uParam0, int iParam1, int iParam2)
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

void func_495(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_684(uParam0, iParam1, sParam2))
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

int func_496(char* sParam0, char* sParam1)
{
	bool bVar0;
	bool bVar1;

	bVar0 = MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam0);
	bVar1 = MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1);
	if (bVar0 != bVar1)
	{
		return 1;
	}
	if (bVar0 || bVar1)
	{
		return 0;
	}
	return MISC::COMPARE_STRINGS(sParam0, sParam1, false, -1);
}

void func_497(int iParam0, int iParam1)
{
	func_242(&(Local_879.f_423[iParam0 /*39*/].f_5), iParam1);
}

bool func_498(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_418(iParam1, &Var0))
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

int func_499(int iParam0)
{
	return iParam0;
}

bool func_500(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_305(iParam0);
	uParam1->f_2 = func_460(iParam0, 255, 1);
	return ENTITY::DOES_ENTITY_EXIST(*uParam1);
}

void func_501(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_502(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_526(&(Local_78[iVar0 /*25*/].f_11), 0, iParam0);
}

struct<2> func_503(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_685(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_686(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_504()
{
	Local_879.f_233.f_6 = 0;
	Local_879.f_233.f_2 = 0;
	Local_879.f_233.f_1 = -1;
}

void func_505()
{
	int iVar0;

	func_228(&(Local_879.f_309.f_75), 2, 0);
	func_228(&(Local_879.f_309.f_75), 1, 0);
	func_228(&(Local_879.f_309.f_75), 4, 0);
	func_228(&(Local_879.f_309.f_75), 5, 0);
	func_228(&(Local_879.f_309.f_75), 8, -1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_879.f_309.f_66[iVar0]));
		SCRIPTS::_SET_ALL_PLAYER_BITS(&(Local_879.f_309.f_72[iVar0]));
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_879.f_309.f_69[iVar0]));
		func_687(iVar0);
		iVar0++;
	}
}

void func_506()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar1 = 0;
	iVar2 = func_688(0, 0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || !ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		func_689();
	}
	else
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	bVar3 = false;
	Local_879.f_423.f_79 = 0;
	Local_879.f_423.f_80 = -1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (func_690(func_179(iVar0), iVar1))
			{
				bVar3 = true;
			}
		}
		iVar0++;
	}
	if (!bVar3)
	{
		func_689();
	}
}

void func_507(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_879.f_233.f_2 = (Local_879.f_233.f_2 || Local_78[iParam0 /*25*/].f_6);
		Local_879.f_233.f_1 = (Local_879.f_233.f_1 && Local_78[iParam0 /*25*/].f_6);
		Local_879.f_233.f_6 = (Local_879.f_233.f_6 || Local_78[iParam0 /*25*/].f_6.f_1);
	}
}

void func_508(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 2);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 1);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 4);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 5);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 6);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 7);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 0);
		func_691(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 3);
		func_692(&(Local_879.f_309.f_75), &(Local_78[iParam0 /*25*/].f_11), 8);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_69[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_78[iParam0 /*25*/].f_11.f_5[iVar0]), &(Local_879.f_309.f_66[iVar0]), &(Local_879.f_309.f_72[iVar0]));
			func_693(func_499(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_509(int iParam0, bool bParam1, int iParam2)
{
	if (!bParam1)
	{
		return;
	}
	Local_879.f_423.f_79 = (Local_879.f_423.f_79 || Local_78[iParam0 /*25*/].f_22.f_2);
	Local_879.f_423.f_80 = (Local_879.f_423.f_80 && Local_78[iParam0 /*25*/].f_22.f_2);
	func_694(iParam0);
}

int func_510(int iParam0)
{
	return iParam0;
}

int func_511(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_78[iParam3 /*25*/].f_6.f_2[iParam2] = fVar0;
	if (fVar0 > Local_879.f_233.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_512(var uParam0)
{
	func_695(uParam0, 0f);
}

bool func_513(var uParam0)
{
	return func_696(*uParam0, 1);
}

bool func_514(var uParam0, float fParam1)
{
	if (!func_513(uParam0))
	{
		return false;
	}
	if (func_697(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_515(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_516(int iParam0)
{
	return true;
}

void func_517(int iParam0, int iParam1)
{
	func_281(&(Local_879.f_233.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_518(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_78[iParam1 /*25*/].f_6, iParam0);
}

void func_519(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_242(&(Local_78[iVar0 /*25*/].f_6), iParam0);
}

void func_520(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_281(&(Local_78[iVar0 /*25*/].f_6), iParam0);
}

void func_521()
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
	if (!func_224(&iVar15))
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
	while (iVar0 < 2)
	{
		iVar14 = func_499(iVar0);
		if (!func_522(iVar14))
		{
		}
		else if (!func_523(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_879.f_309.f_65), iVar14);
			}
			if (func_537(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, false, false))
			{
				func_698(iVar14);
				func_699(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_522(int iParam0)
{
	return !func_498(&(Local_879.f_309.f_75), 5, iParam0);
}

bool func_523(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_879.f_309.f_106, iParam0))
	{
		return false;
	}
	*uParam1 = Local_879.f_309.f_79[iParam0 /*13*/];
	uParam1->f_1 = Local_879.f_309.f_79[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_879.f_309.f_79[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_524(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_700(iParam1))
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
	if (func_701(*uParam0, &(Local_879.f_309.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

int func_525(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_418(iParam1, &Var0))
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

int func_526(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_418(iParam1, &Var0))
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

void func_527(int iParam0)
{
}

bool func_528(int iParam0)
{
	return func_498(&(Local_879.f_309.f_75), 4, iParam0);
}

bool func_529(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return false;
	}
	return func_498(&(Local_78[iVar0 /*25*/].f_11), 4, iParam0);
}

bool func_530(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_879.f_309.f_69[iParam0]));
}

void func_531(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_525(&(Local_78[iVar0 /*25*/].f_11), 4, iParam0);
}

bool func_532(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]));
}

void func_533(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]));
}

bool func_534(int iParam0)
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

bool func_535(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_498(&(Local_78[iParam1 /*25*/].f_11), 1, iParam0);
}

bool func_536(int iParam0)
{
	int iVar0;

	if (iParam0 == 1)
	{
		if (func_702(512, 255))
		{
			return true;
		}
	}
	switch (func_254())
	{
		case 1:
			if (func_570(iParam0, 1101004800 /* Float: 20f */, 255, 0))
			{
				return func_456(1024);
			}
			break;
		case 2:
		case 3:
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
			{
				iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_m", false);
				if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					iVar0 = ANIMSCENE::_GET_ANIM_SCENE_PED(Local_879.f_19.f_45, "player_f", false);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iVar0))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iVar0, func_305(iParam0), true, true) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
					{
						return true;
					}
				}
			}
			break;
	}
	return false;
}

bool func_537(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	if (!func_703(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_498(&(Local_78[iParam1 /*25*/].f_11), 3, iParam0);
}

bool func_538(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_704(uParam2, 1, iVar0);
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
			if (func_705(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_706(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_707(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_708(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_709(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_710(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_706(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_711(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_712(Global_33, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_713(Global_33, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_714(Global_33, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_714(Global_33, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_706(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_715(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_716(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_717(uParam2, 4000))
				{
					if ((func_718(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_719(uParam2, iParam0)) && func_720(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_718(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_719(uParam2, iParam0)) && func_720(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_721(iParam0, Global_1940186.f_35))
					{
						func_722();
						*iParam3 = 2;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_723(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_724() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_722();
						*iParam3 = 2;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_725())
				{
					if (func_721(iParam0, Global_1940186.f_36))
					{
						func_722();
						*iParam3 = 2;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_726(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_706(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_727(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_706(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_728(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_729(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_730(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_731(uParam2, 4000))
				{
					if (func_732(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_706(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_733(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_706(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_734(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_706(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_539(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_735(iParam0, vVar0, fParam2);
}

int func_540(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_736(iParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	func_737(&iVar4, iParam1->f_12);
	func_739(Local_879.f_233.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_738(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_740(&iVar4, &uVar0);
}

bool func_541(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return false;
	}
	return func_498(&(Local_78[iVar0 /*25*/].f_11), 0, iParam0);
}

bool func_542(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_879.f_309.f_64, iParam0))
	{
		return false;
	}
	if (func_186(Local_879.f_309.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_741(&(Local_879.f_309))))
	{
		return false;
	}
	return true;
}

bool func_543(int iParam0, int iParam1, int iParam2)
{
	if (!func_542(iParam0, iParam1))
	{
		return false;
	}
	if (Local_78[iParam2 /*25*/].f_11.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_78[iParam2 /*25*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_544(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	switch (iParam1)
	{
		case 4:
		case 16:
		case 256:
			break;
		default:
			if (iParam0 == 1 || iParam1 == 1024)
			{
				if ((iParam1 != 1024 && !func_742(iParam1, 0, 0, 0, 0)) && !func_470(512))
				{
					return false;
				}
				else
				{
					func_565(0f);
				}
			}
			break;
	}
	if (!func_312())
	{
		func_572();
	}
	if (!func_743())
	{
		func_744(1);
	}
	if (!func_328(2f))
	{
		Var0 = { func_560(1.263173E-24f) };
		func_561(&Var0);
	}
	func_239(512);
	func_565(2f);
	return true;
}

void func_545(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_526(&(Local_78[iVar0 /*25*/].f_11), 1, iParam0);
	if (bParam1)
	{
		Local_78[iVar0 /*25*/].f_11.f_8[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_546(int iParam0)
{
	return func_498(&(Local_879.f_309.f_75), 1, iParam0);
}

bool func_547(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_498(&(Local_78[iParam1 /*25*/].f_11), 2, iParam0);
}

bool func_548(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	switch (func_745(iParam0))
	{
		case 0:
			break;
		case 1:
			break;
	}
	return true;
}

void func_549(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_305(iParam0);
	iVar1 = func_745(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	switch (iVar1)
	{
		case 0:
			if (func_254() == 1)
			{
				TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(iVar0, 30f, 0, 0);
			}
			break;
		case 1:
			break;
	}
}

void func_550(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_526(&(Local_78[iVar0 /*25*/].f_11), 2, iParam0);
}

bool func_551(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_ALL_PLAYER_BITS(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_879.f_309.f_72[iParam0]), &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

bool func_552(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_553(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_879.f_309.f_66[iParam0]), iParam1);
}

bool func_554(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_305(iParam0);
	iVar1 = func_745(iParam0);
	switch (iVar1)
	{
		case 0:
			if (func_254() == 1)
			{
				PED::REGISTER_TARGET(iVar0, iParam3, true);
			}
			break;
		case 1:
			break;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		func_451(16);
	}
	return true;
}

void func_555(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_224(&iVar0))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_78[iVar0 /*25*/].f_11.f_5[iParam0]), iParam1);
}

void func_556(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	iVar0 = func_360(iParam2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_746(iParam2))
		{
			func_361(iParam2, 0);
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
		func_226(iParam2, *uParam0);
		func_747(*uParam1, *uParam0);
		*uParam1 = *uParam0;
	}
	func_748(iParam2);
	switch (uParam1->f_1)
	{
		case 0:
			if (!func_359(iParam2, 1))
			{
				return;
			}
			if (func_620(iParam2))
			{
				if (!func_746(iParam2))
				{
					func_749(iParam2);
				}
				if (func_359(iParam2, 16))
				{
					PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
					PAD::DISABLE_CONTROL_ACTION(0, 3.360757E-18f, false);
				}
				bVar3 = MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22, iParam2);
				iVar2 = 0;
				while (iVar2 < 4)
				{
					if (func_750(iParam2, iVar2, 16))
					{
						func_751(iParam2, iVar2, 1);
					}
					bVar4 = (func_750(iParam2, iVar2, 1) || bVar3);
					bVar5 = func_750(iParam2, iVar2, 8);
					bVar6 = (bVar4 || bVar5);
					if (!bVar6)
					{
						if (func_750(iParam2, iVar2, 4))
						{
							if (func_752() < Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/].f_7)
							{
								bVar6 = true;
							}
						}
					}
					if (bVar5)
					{
						func_622(iParam2, iVar2, 8);
					}
					if (!func_609(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
					{
					}
					else if (func_753(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
					{
						if (bVar6)
						{
							func_624(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
						}
						else
						{
							if (!func_224(&iVar1))
							{
							}
							else
							{
								if (func_754(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 1))
								{
									if (!func_755(iParam2, iVar2, func_225(iParam2)))
									{
										Jump @583; //curOff = 513
									}
									else
									{
										MISC::SET_BIT(&(Local_78[iVar1 /*25*/].f_22), iParam2);
										func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iParam2, iVar2);
									}
								}
								Jump @583; //curOff = 551
								if (!bVar6)
								{
									func_624(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 1, 1, 1);
								}
							}
							iVar2++;
							Jump @611; //curOff = 592
							if (func_746(iParam2))
							{
								func_361(iParam2, 0);
							}
							Jump @924; //curOff = 611
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_609(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_753(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_624(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (!MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22.f_2, iParam2))
							{
								func_756(iParam2, func_648(Local_13.f_57.f_7, iParam2));
								MISC::SET_BIT(&(Local_78[iVar1 /*25*/].f_22.f_2), iParam2);
							}
							Jump @924; //curOff = 760
							iVar2 = 0;
							while (iVar2 < 4)
							{
								if (!func_609(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/]))
								{
								}
								else if (func_753(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0))
								{
									func_624(Local_879.f_423[iParam2 /*39*/].f_6[iVar2 /*8*/], 0, 1, 1);
								}
								iVar2++;
							}
							if (MISC::IS_BIT_SET(Local_78[iVar1 /*25*/].f_22.f_2, iParam2))
							{
								MISC::CLEAR_BIT(&(Local_78[iVar1 /*25*/].f_22.f_2), iParam2);
								MISC::CLEAR_BIT(&(Local_78[iVar1 /*25*/].f_22), iParam2);
								func_119(&(Local_78[iVar1 /*25*/].f_22.f_1), iParam2, 3);
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_557()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_558(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_757(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_559(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_78[iParam1 /*25*/].f_1, iParam0);
}

struct<15> func_560(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_879, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_561(var uParam0)
{
	func_759(uParam0, func_758(4, 117));
}

void func_562(int iParam0)
{
	if (Local_879.f_19.f_1 != iParam0)
	{
		if (iParam0 == 16)
		{
			func_173(0);
		}
		Local_879.f_19.f_1 = iParam0;
	}
}

void func_563(int iParam0)
{
}

void func_564(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	iVar3 = func_760(vVar0, iParam1);
	if (iVar3 == 0)
	{
		return;
	}
	if (!ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(iParam0, iVar3))
	{
	}
}

void func_565(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_242(&(Local_78[iVar0 /*25*/].f_1), iParam0);
}

bool func_566(int iParam0, bool bParam1)
{
	if (((((func_452(iParam0, 6.077861E-11f) || func_452(iParam0, -9.036117E+30f)) || func_452(iParam0, 102.1545f)) || func_452(iParam0, -7.366091E-38f)) || func_452(iParam0, 2.133754E-15f)) || func_452(iParam0, 1.165701E+10f))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_452(iParam0, -2.514688E+15f) || func_452(iParam0, 6.257903E-33f))
		{
			return true;
		}
		if (PED::IS_PED_SHOOTING(iParam0))
		{
			return true;
		}
	}
	return false;
}

float func_567(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

Vector3 func_568(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_569(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_305(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_173(iParam0);
		return;
	}
	if (!func_761(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_762(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_763(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_762(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_173(iParam0);
	}
}

bool func_570(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_400(iParam2, 0))
	{
		if (!func_224(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_78[iParam2 /*25*/].f_6.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_305(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_568(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_78[iParam2 /*25*/].f_6.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_571(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	if (!func_498(&(Local_78[iParam1 /*25*/].f_11), 8, iParam0))
	{
		return !func_498(&(Local_78[iParam1 /*25*/].f_11), 1, iParam0);
	}
	return false;
}

void func_572()
{
	int iVar0;

	if (!func_131(32, 255))
	{
		func_764(Local_879.f_1, Local_879.f_3);
		if (!func_131(1024, 255))
		{
			func_765(Local_879.f_1);
			func_148(1024);
		}
		iVar0 = func_366(Local_879.f_1, Local_879.f_2);
		func_766(iVar0);
		func_767(iVar0);
		func_146(2);
		func_768(Local_879.f_9);
		func_769(Local_879.f_1);
		func_770(Local_879.f_1, Local_879.f_2, Local_879.f_3);
		if (func_771(Local_879.f_1))
		{
			func_772(0, 3.031687E-09f);
			func_146(1024);
		}
		func_148(32);
	}
}

bool func_573()
{
	return func_773(1);
}

bool func_574(int iParam0)
{
	return !func_498(&(Local_879.f_309.f_75), 8, iParam0);
}

void func_575()
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_255(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar0))
	{
		Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return;
	}
	iVar2 = func_467(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), &uVar1, 1114636288 /* Float: 60f */, 0, 0, 1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	switch (Local_13.f_7.f_14)
	{
		case 0:
			if (Local_13.f_7.f_15 == 0 || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (!func_373())
				{
					func_374(0, 0, 2, 1.818904E-28f);
				}
				else
				{
					func_374(0, 0, 1, 1.818904E-28f);
				}
				Local_13.f_7.f_14++;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 1:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (!func_373())
				{
					func_374(0, 0, 3, 1.818904E-28f);
				}
				else
				{
					func_374(0, 0, 1, 1.818904E-28f);
				}
				Local_13.f_7.f_14++;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
		case 2:
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_15, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 10000)
			{
				if (func_373())
				{
					func_374(0, 0, 1, 1.818904E-28f);
				}
				Local_13.f_7.f_14 = 0;
				Local_13.f_7.f_15 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			}
			break;
	}
}

void func_576(float fParam0)
{
	if (func_192(32))
	{
		return;
	}
	if (fParam0 > 0f)
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_305(0)))
		{
			if (!func_570(0, fParam0, 255, 0))
			{
				return;
			}
		}
	}
	func_239(32);
	func_572();
	func_774();
	if (!func_240(9, Local_879.f_4) && func_460(0, 255, 1) < 1101004800)
	{
		func_239(1024);
	}
	func_775(9, Local_879.f_4);
}

bool func_577(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_78[iVar0 /*25*/].f_1.f_3, iParam0);
}

bool func_578(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	else if (!func_400(iParam1, 1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Local_78[iParam1 /*25*/].f_1.f_2, iParam0);
}

bool func_579(int iParam0)
{
	char cVar0[32];

	if (MISC::IS_BIT_SET(Local_879.f_19.f_202, iParam0))
	{
		return true;
	}
	if (func_578(iParam0, 255))
	{
		return false;
	}
	TASK::CLEAR_SEQUENCE_TASK(&(Local_879.f_19.f_206[iParam0]));
	StringCopy(&cVar0, "nbth_seq_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	TASK::_0x23767D80C7EED7C6(&(Local_879.f_19.f_206[iParam0]), MISC::GET_HASH_KEY(&cVar0));
	MISC::SET_BIT(&(Local_879.f_19.f_202), iParam0);
	return true;
}

char* func_580(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "react_front_right_aggro";
	}
	iVar0 = func_255(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return "react_front_right_aggro";
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return "react_front_right_aggro";
	}
	iVar2 = func_539(iVar0, iVar1, 0f);
	iVar3 = func_539(iVar0, iVar1, 1f);
	switch (iVar2)
	{
		case 0:
			switch (iVar3)
			{
				case 3:
					return "react_front_left_aggro";
				case 2:
					return "react_front_right_aggro";
				default:
					break;
			}
			break;
		case 1:
			switch (iVar3)
			{
				case 3:
					return "react_back_left_aggro";
				case 2:
					return "react_back_right_aggro";
				default:
					break;
			}
			break;
	}
	return "react_front_right_aggro";
}

char* func_581(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return "react_front_right";
	}
	iVar0 = func_255(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return "react_front_right";
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return "react_front_right";
	}
	iVar2 = func_539(iVar0, iVar1, 0f);
	iVar3 = func_539(iVar0, iVar1, 1f);
	switch (iVar2)
	{
		case 0:
			switch (iVar3)
			{
				case 3:
					return "react_front_left";
				case 2:
					return "react_front_right";
				default:
					break;
			}
			break;
		case 1:
			switch (iVar3)
			{
				case 3:
					return "react_back_left";
				case 2:
					return "react_back_right";
				default:
					break;
			}
			break;
	}
	return "react_front_right";
}

void func_582(int iParam0)
{
	if (func_578(iParam0, 255))
	{
		return;
	}
	if (!func_776(iParam0))
	{
		return;
	}
	TASK::CLOSE_SEQUENCE_TASK(Local_879.f_19.f_206[iParam0]);
	MISC::CLEAR_BIT(&(Local_879.f_19.f_202), iParam0);
}

bool func_583(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_19.f_200, iParam0);
}

bool func_584(int iParam0, int iParam1)
{
	if (func_577(iParam1))
	{
		return false;
	}
	if (!func_578(iParam1, 255))
	{
		return false;
	}
	TASK::TASK_PERFORM_SEQUENCE(func_305(iParam0), Local_879.f_19.f_206[iParam1]);
	func_777(iParam1);
	return true;
}

void func_585(int iParam0)
{
	MISC::CLEAR_BIT(&(Local_879.f_19.f_41), iParam0);
	if (func_513(&(Local_879.f_19.f_42)))
	{
		func_515(&(Local_879.f_19.f_42));
	}
}

int func_586(int iParam0)
{
	if (!func_278(iParam0, 3.034861E-30f))
	{
		return -1;
	}
	return TASK::GET_SEQUENCE_PROGRESS(iParam0);
}

bool func_587(int iParam0, float fParam1)
{
	if (MISC::IS_BIT_SET(Local_879.f_19.f_41, iParam0))
	{
		return true;
	}
	if (!func_513(&(Local_879.f_19.f_42)))
	{
		func_512(&(Local_879.f_19.f_42));
		return false;
	}
	if (func_514(&(Local_879.f_19.f_42), fParam1))
	{
		MISC::SET_BIT(&(Local_879.f_19.f_41), iParam0);
		return true;
	}
	return false;
}

void func_588()
{
	int iVar0;
	int iVar1;

	if (func_328(1.504633E-36f))
	{
		if (!func_559(1.504633E-36f, 255))
		{
			func_565(1.504633E-36f);
		}
		func_778();
		return;
	}
	iVar0 = func_356(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!func_328(2.350989E-38f))
	{
		if (ENTITY::PLAY_ENTITY_ANIM(iVar0, "aggro_idle_map", func_191(), 1000f, false, true, false, 0f, 0))
		{
			func_565(2.350989E-38f);
		}
	}
	iVar1 = func_305(0);
	if (((!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1)) || PED::IS_PED_FLEEING(iVar1)) || ENTITY::HAS_ANIM_EVENT_FIRED(iVar1, -1.023683E-33f))
	{
		ENTITY::DETACH_ENTITY(iVar0, true, true);
		TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
		GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
		func_565(1.504633E-36f);
	}
}

int func_589()
{
	int iVar0;

	iVar0 = func_305(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(func_356(0)))
	{
		return 0;
	}
	switch (func_254())
	{
		case 2:
		case 3:
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "script_re@treasure_hunter@leadin@int", "base_traveller", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, "script_re@treasure_hunter@leadin@int", "base_hunter_female", 1))
			{
				return 1;
			}
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
			{
				return 0;
			}
			if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
			{
				return 0;
			}
			if ((((((((((((((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_00_l") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_00_lb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_00_n")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_00_r")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_00_rb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_01_l")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_01_lb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_01_n")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_01_r")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_01_rb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_02_l")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_02_lb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_02_n")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_02_r")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_call_02_rb")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_intro_idle_00")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_intro_idle_01"))
			{
				return 1;
			}
			if ((((ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_offer_00") || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_offer_01")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_offer_02")) || ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, "pl_ilo_neg_00")) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_191(), "waiting_idle_hunter", 1))
			{
				return 2;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_191(), "waiting_idle", 1))
			{
				return 2;
			}
			break;
		case 0:
			if (((((ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "base_idle", 1) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "base_idle_mp_female", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "idle_a", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "idle_a_mp_female", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "idle_b", 1)) || ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "idle_b_mp_female", 1))
			{
				return 1;
			}
			if (ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_190(), "standing_idle", 1))
			{
				return 2;
			}
			break;
		case 1:
			return 0;
	}
	return 0;
}

int func_590(char* sParam0, char* sParam1)
{
	return BUILTIN::CEIL((1148846080 * ENTITY::GET_ANIM_DURATION(sParam0, sParam1)));
}

bool func_591(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_309.f_107, iParam0);
}

bool func_592(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_78[iParam1 /*25*/].f_1, iParam0);
}

bool func_593()
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_879.f_19.f_45))
	{
		if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_879.f_19.f_45, false))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
			{
				return true;
			}
		}
	}
	return false;
}

void func_594(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_281(&(Local_78[iVar0 /*25*/].f_1), iParam0);
}

void func_595()
{
	int iVar0;
	float fVar1;

	iVar0 = func_658();
	if (func_456(64))
	{
		func_779();
		return;
	}
	else if (func_592(2.524355E-29f, 255))
	{
		func_594(2.524355E-29f);
	}
	if (func_328(1.084202E-19f))
	{
		return;
	}
	if (func_328(iVar0))
	{
		return;
	}
	if (func_653())
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			if (func_780(3f, 1000))
			{
				func_565(1.084202E-19f);
			}
			return;
		}
		fVar1 = func_460(0, func_654(0, 0, 1, 0), 1);
		if (func_655(fVar1))
		{
			func_565(iVar0);
			return;
		}
		if (Local_13.f_7.f_7 != 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_7, NETWORK::GET_NETWORK_TIME_ACCURATE()) < 8000)
			{
				return;
			}
		}
		if (func_597(3, Local_13.f_7.f_19, func_305(0), PLAYER::GET_PLAYER_PED(Local_13.f_7.f_20), 0.707f))
		{
			if (func_598(func_781(Local_13.f_7.f_19), 0))
			{
				switch (Local_13.f_7.f_19)
				{
					case 0:
						func_374(0, 3, 2, 1.818904E-28f);
						break;
					case 1:
						func_374(0, 3, 3, 1.818904E-28f);
						break;
					case 2:
						func_374(0, 3, 4, 1.818904E-28f);
						break;
				}
				func_565(iVar0);
			}
		}
	}
}

bool func_596(var uParam0)
{
	int iVar0;

	iVar0 = Local_879.f_19.f_69;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20))
		{
			iVar0 = Local_13.f_7.f_20;
		}
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		*uParam0 = PLAYER::GET_PLAYER_PED(iVar0);
		return ENTITY::DOES_ENTITY_EXIST(*uParam0);
	}
	return false;
}

bool func_597(int iParam0, int iParam1, int iParam2, int iParam3, float fParam4)
{
	int iVar0;
	int iVar1;

	iVar1 = 1;
	iVar0 = func_539(iParam2, iParam3, fParam4);
	if (iVar0 == 1)
	{
		if (func_782(iParam2, iParam3))
		{
			iVar1 = 3;
		}
		else
		{
			iVar1 = 2;
		}
	}
	return func_783(iParam0, iParam1, &(Local_879.f_19.f_65), iVar0, iVar1);
}

bool func_598(int iParam0, int iParam1)
{
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_879.f_19.f_45))
	{
		if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
		{
			return true;
		}
		else
		{
			if (func_702(iParam0, 255))
			{
				func_784(iParam0);
			}
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
			{
				if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
				{
					if (!ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, &(Local_879.f_19.f_65)))
					{
					}
				}
				return false;
			}
			if ((iParam1 || func_785()) || func_464(1))
			{
				ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_879.f_19.f_45, &(Local_879.f_19.f_65), true);
			}
		}
	}
	return false;
}

void func_599(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (func_457(0))
	{
		Local_879.f_19.f_212 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar0 = false;
	bVar1 = false;
	iVar2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (Local_879.f_19.f_212 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_212, iVar2) <= 1000)
	{
		bVar0 = true;
	}
	if (Local_879.f_19.f_211 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_879.f_19.f_211, iVar2) <= 2000)
	{
		bVar0 = true;
		bVar1 = true;
	}
	if (bParam0)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_786(0, 1, 1);
	}
	if (bVar1)
	{
		func_786(0, 0, 1);
	}
}

bool func_600(int iParam0, int iParam1)
{
	return func_783(iParam0, iParam1, &(Local_879.f_19.f_65), 4, 1);
}

int func_601(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

void func_602(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

int func_603(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	if (iParam0 > iVar0 && !bParam1)
	{
		return 0;
	}
	func_787(iParam0, 0, 0, 1, 0);
	return 1;
}

int func_604(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_788(&Var4, 2.95884E+10f);
	return func_789(iParam0, &Var4, &uVar0, iParam1, 0);
}

bool func_605()
{
	if (!func_559(4096, 255))
	{
		func_565(4096);
	}
	return func_652(4096);
}

bool func_606(int iParam0, var uParam1)
{
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
	{
		return false;
	}
	if (PLAYER::IS_PLAYER_DEAD(NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0))))
	{
		return false;
	}
	return func_592(2f, iParam0);
}

int func_607(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
		{
			return 255;
		}
	}
	iVar1 = -1;
	bVar2 = fParam2 > 0f;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar3 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar3))
		{
		}
		else if (Local_78[iVar0 /*25*/].f_6.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_468(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > Local_78[iVar1 /*25*/].f_6.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_78[iVar0 /*25*/].f_6.f_2[iParam0] > fParam2)
		{
		}
		else
		{
			Stack.Push(iVar0);
			Stack.Push(iParam0);
			Call_Loc(iParam1);
			if (!StackVal)
			{
			}
			else
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
	return 255;
}

var func_608(int iParam0, int iParam1)
{
	return Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/];
}

bool func_609(int iParam0)
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

void func_610(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_609(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_790(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_791(iVar0);
	*uParam0 = 0;
}

int func_611(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_792(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_612(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_792(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_613(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_396(&Var1, iParam0))
	{
		iVar0 = ((func_793() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_614(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_615(int iParam0, int iParam1)
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

void func_616(var uParam0)
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
	func_794(uParam0, uParam0->f_1);
}

struct<2> func_617(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_618(int iParam0)
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

void func_619(bool bParam0, int iParam1, int iParam2)
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
		func_386(bParam0, iVar0);
		iVar0++;
	}
}

bool func_620(int iParam0)
{
	if (Local_879.f_423.f_81 == iParam0)
	{
		return true;
	}
	return false;
}

void func_621(int iParam0, int iParam1, int iParam2)
{
	func_242(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_622(int iParam0, int iParam1, int iParam2)
{
	func_281(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1), iParam2);
}

void func_623(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_609(iParam0))
	{
		return;
	}
	iVar0 = func_790(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2));
}

void func_624(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_609(iParam0))
	{
		return;
	}
	iVar0 = func_790(iParam0);
	if (bParam1)
	{
		func_795(iParam0, 4);
		if (bParam3)
		{
			func_796(iVar0, 1);
		}
		func_797(iVar0, 1);
	}
	else
	{
		func_798(iParam0, 4);
		func_797(iVar0, 0);
	}
}

void func_625(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 16384);
	}
	else
	{
		func_242(&(uParam0->f_2), 16384);
	}
}

void func_626(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 2048);
	}
	else
	{
		func_242(&(uParam0->f_2), 2048);
	}
}

void func_627(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 16);
	}
	else
	{
		func_281(uParam0, 1.504633E-36f);
		func_281(uParam0, 16);
	}
}

void func_628(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_281(&(uParam0->f_2), 128);
	}
	else
	{
		func_242(&(uParam0->f_2), 128);
	}
}

void func_629(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 256);
	}
	else
	{
		func_281(uParam0, 256);
	}
}

void func_630(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_242(uParam0, 2.524355E-29f);
	}
	else
	{
		func_281(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_242(uParam0, 2f);
	}
	else
	{
		func_281(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_242(uParam0, 1.084202E-19f);
	}
	else
	{
		func_281(uParam0, 1.084202E-19f);
	}
}

float func_631(var uParam0)
{
	return uParam0->f_26;
}

void func_632(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_633(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 1);
	}
	else
	{
		func_281(uParam0, 1);
	}
}

void func_634(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 512);
	}
	else
	{
		func_281(uParam0, 512);
	}
}

void func_635(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 2);
	}
	else
	{
		func_281(uParam0, 2);
	}
}

void func_636(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 8);
	}
	else
	{
		func_281(uParam0, 8);
	}
}

int func_637(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_4;
}

float func_638(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_639(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_6;
}

bool func_640(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_645(iParam1))
	{
		return false;
	}
	iVar0 = func_799(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_641(int iParam0, bool bParam1)
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

bool func_642(int iParam0)
{
	return func_175(iParam0, 32);
}

bool func_643(int iParam0)
{
	return func_175(iParam0, 64);
}

bool func_644(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_645(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_646(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_423.f_80, iParam0);
}

bool func_647(int iParam0)
{
	return MISC::IS_BIT_SET(Local_879.f_423.f_79, iParam0);
}

int func_648(int iParam0, int iParam1)
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

int func_649(int iParam0, int iParam1, var uParam2)
{
	switch (func_402(uParam2))
	{
		case 0:
			break;
		case 1:
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 3;
				default:
					break;
			}
			break;
		case 3:
			return 2;
	}
	return 0;
}

bool func_650(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

bool func_651(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam0);
	if (func_800(iVar0))
	{
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar0);
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_13), iVar1) && func_131(16384, iParam0));
		}
	}
	return false;
}

bool func_652(int iParam0)
{
	return func_186(Local_879.f_19.f_196, iParam0);
}

bool func_653()
{
	return func_456(func_659());
}

int func_654(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_277(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

bool func_655(float fParam0)
{
	float fVar0;

	fVar0 = 7f;
	if (func_458())
	{
		fVar0 = 1097859072; /* Float: 15f */
	}
	if (fParam0 <= fVar0)
	{
		return true;
	}
	return false;
}

int func_656()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_657()
{
	switch (func_254())
	{
		case 2:
		case 3:
			switch (Local_13.f_7.f_19)
			{
				case 0:
					return 1106247680 /* Float: 30f */;
				case 1:
					return 1110704128 /* Float: 45f */;
				case 2:
					return 1110704128 /* Float: 45f */;
				default:
					break;
			}
			break;
		default:
			switch (Local_13.f_7.f_19)
			{
				case 0:
					return 1108082688 /* Float: 35f */;
				case 1:
					return 1097859072 /* Float: 15f */;
				case 2:
					return 1097859072 /* Float: 15f */;
				default:
					break;
			}
			break;
	}
	return 7f;
}

int func_658()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_659()
{
	switch (Local_13.f_7.f_19)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

int func_660(int iParam0, int iParam1)
{
	if (func_801(iParam0))
	{
		return 0;
	}
	if (Local_13.f_57[iParam0 /*3*/] == iParam1)
	{
		return 1;
	}
	Local_13.f_57[iParam0 /*3*/] = iParam1;
	return 1;
}

bool func_661(bool bParam0)
{
	return ((NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_20) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_20)) && (func_460(0, 255, 1) <= 1101004800 || !bParam0));
}

int func_662()
{
	return Local_13.f_7.f_34;
}

bool func_663()
{
	if (func_670())
	{
		if (func_671(500))
		{
			Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
		else if (!func_665(0, 2))
		{
			if (!func_463(0, 2))
			{
			}
		}
		else
		{
			if (!func_459(14))
			{
				if (func_456(1048576))
				{
					if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_35, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 5000)
					{
						func_802(18, 1.818904E-28f);
						MISC::SET_BIT(&(Local_13.f_7.f_5), 14);
						MISC::SET_BIT(&(Local_879.f_19.f_7), 14);
					}
					if (!func_445(0, 1069547520 /* Float: 1.5f */, 0))
					{
						func_466(1048576, 1);
					}
				}
				else if (func_445(0, 1069547520 /* Float: 1.5f */, 0))
				{
					Local_13.f_7.f_35 = NETWORK::GET_NETWORK_TIME_ACCURATE();
					func_454(1048576, 1);
				}
			}
			if ((Local_13.f_7.f_6 == 0 || func_456(32768)) || NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_6, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= 6000)
			{
				switch (Local_13.f_7.f_9)
				{
					case 0:
						func_802(9, 1.818904E-28f);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_466(32768, 1);
						break;
					case 1:
						func_803();
						break;
					case 2:
						func_802(10, 1.818904E-28f);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_466(32768, 1);
						break;
					case 3:
						func_803();
						break;
					case 4:
						func_802(10, 1.818904E-28f);
						Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						func_466(32768, 1);
						break;
				}
				Local_13.f_7.f_9++;
			}
		}
	}
	else if (Local_13.f_7.f_8 < 5)
	{
		if (!func_671(12000))
		{
			func_802(6, 1.818904E-28f);
			Local_13.f_7.f_8++;
		}
	}
	else if (!func_671(500))
	{
		if (func_463(0, 0))
		{
			return true;
		}
	}
	return Local_13.f_7.f_9 > 4;
}

void func_664(int iParam0)
{
	Local_13.f_7.f_34 = iParam0;
}

bool func_665(int iParam0, int iParam1)
{
	return Local_13.f_57[iParam0 /*3*/] == iParam1;
}

bool func_666()
{
	return (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_7.f_21));
}

bool func_667()
{
	int iVar0;

	iVar0 = func_607(0, 84105, 1101004800 /* Float: 20f */, 1, 0);
	return NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0);
}

int func_668(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_669()
{
	Local_13.f_7.f_20 = 255;
}

bool func_670()
{
	if (func_661(1) || func_450(0))
	{
		return true;
	}
	return false;
}

bool func_671(int iParam0)
{
	if (Local_13.f_7.f_28 != 0)
	{
		if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_28, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= iParam0)
		{
			return true;
		}
	}
	return func_457(0);
}

void func_672(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	func_802(11, 1.818904E-28f);
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_12), iParam0);
}

bool func_673(int iParam0, bool bParam1, bool bParam2)
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

void func_674(var uParam0)
{
	int iVar0;
	int iVar1;

	if (func_373())
	{
		func_804(uParam0->f_11, uParam0->f_12, uParam0->f_13);
	}
	else
	{
		iVar0 = func_805(uParam0->f_11);
		iVar1 = func_805(uParam0->f_12);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			func_806(iVar0, iVar1, uParam0->f_13, uParam0->f_14, func_680(func_510(uParam0->f_11)), 1);
		}
	}
}

void func_675()
{
	int iVar0;

	iVar0 = func_760(Global_34, 1);
	func_604(iVar0, 0);
}

bool func_676()
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

int func_677(int iParam0, int iParam1)
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

void func_678(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 188;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 7, 7, &uParam1);
}

void func_679(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_807(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

int func_680(int iParam0)
{
	return Local_879.f_233.f_7[iParam0 /*11*/].f_10;
}

void func_681(int iParam0, char* sParam1, bool bParam2)
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

void func_682(int iParam0)
{
}

void func_683(int iParam0, float fParam1)
{
	Local_879.f_233.f_7[iParam0 /*11*/].f_9 = fParam1;
}

bool func_684(var uParam0, int iParam1, char* sParam2)
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

int func_685(int iParam0)
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

struct<2> func_686(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_687(int iParam0)
{
	if (!func_500(func_499(iParam0), &(Local_879.f_309.f_79[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_879.f_309.f_106), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_879.f_309.f_106), iParam0);
}

int func_688(bool bParam0, bool bParam1)
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

void func_689()
{
	if (Local_879.f_423.f_81 < 0)
	{
		return;
	}
	func_361(func_179(Local_879.f_423.f_81), 0);
	Local_879.f_423.f_81 = -1;
	func_808(func_179(Local_879.f_423.f_81));
}

bool func_690(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_360(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (iParam1 == iVar0)
	{
		if (Local_879.f_423.f_81 != iParam0)
		{
			func_689();
			func_749(iParam0);
			Local_879.f_423.f_81 = iParam0;
			func_809(iParam0);
		}
		return true;
	}
	return false;
}

int func_691(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_418(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_419(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_419(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_419(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_692(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_418(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_419(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_419(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_419(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_693(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_498(&(Local_78[iParam1 /*25*/].f_11), 1, iParam0))
	{
		if (Local_78[iParam1 /*25*/].f_11.f_8[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_50.f_1[iParam0]))
		{
			if (Local_13.f_50.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_13.f_50.f_4[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_78[iParam1 /*25*/].f_11.f_8[iParam0], Local_13.f_50.f_4[iParam0]))
		{
			Local_13.f_50.f_1[iParam0] = iVar0;
			Local_13.f_50.f_4[iParam0] = Local_78[iParam1 /*25*/].f_11.f_8[iParam0];
		}
	}
}

void func_694(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	iVar1 = 255;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (Local_13.f_57[iVar0 /*3*/].f_2 != 0)
		{
		}
		else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_13.f_57[iVar0 /*3*/].f_1))
		{
		}
		else if (!MISC::IS_BIT_SET(Local_78[iParam0 /*25*/].f_22, iVar0))
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
				Local_13.f_57[iVar0 /*3*/].f_1 = iVar1;
				func_119(&(Local_13.f_57.f_7), iVar0, func_648(Local_78[iParam0 /*25*/].f_22.f_1, iVar0));
			}
		}
		iVar0++;
	}
}

void func_695(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_810() - fParam1);
	func_811(uParam0, 1);
	func_812(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_696(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_697(var uParam0)
{
	if (!func_513(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_813(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_810() - uParam0->f_1);
}

void func_698(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_526(&(Local_78[iVar0 /*25*/].f_11), 3, iParam0);
}

void func_699(int iParam0)
{
}

bool func_700(int iParam0)
{
	return func_498(&(Local_879.f_309.f_75), 7, iParam0);
}

bool func_701(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_704(uParam1, 0, iVar0);
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
				if (func_717(uParam1, 4000))
				{
					if ((func_718(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_719(uParam1, iParam0)) && func_720(uParam1, iParam0))
					{
						func_722();
						*uParam2 = 2;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_717(uParam1, 4000))
				{
					if ((func_718(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_719(uParam1, iParam0)) && func_720(uParam1, iParam0))
					{
						func_722();
						*uParam2 = 2;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_721(iParam0, Global_1940186.f_35))
					{
						func_722();
						*uParam2 = 2;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_725())
				{
					if (func_721(iParam0, Global_1940186.f_36))
					{
						func_722();
						*uParam2 = 2;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_711(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_712(Global_33, iParam0, uParam1))
					{
						func_722();
						*uParam2 = 4;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_713(Global_33, iParam0, uParam1))
					{
						func_722();
						*uParam2 = 256;
						func_706(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_814(iParam0, uParam1))
			{
				func_722();
				*uParam2 = 131072;
				func_706(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_815(iParam0, uParam1))
			{
				func_722();
				*uParam2 = 262144;
				func_706(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_702(int iParam0, int iParam1)
{
	if (!func_400(iParam1, 0))
	{
		if (!func_224(&iParam1))
		{
			return false;
		}
	}
	return func_186(Local_78[iParam1 /*25*/].f_1.f_1, iParam0);
}

bool func_703(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_704(var uParam0, bool bParam1, int iParam2)
{
	func_816(iParam2);
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
		uParam0->f_14 = func_817(0);
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
							func_242(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_818(1, 1))
						{
							func_242(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_818(1, 1) || *uParam0 & 8192 != 0))
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
			if (func_819(uParam0))
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
	func_820(uParam0);
}

bool func_705(int iParam0, var uParam1)
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
			if (!func_821(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_822(iParam0, iVar2) <= func_823(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_706(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_742(iParam2, 1, 1, 1, 0))
	{
		func_242(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_824(uParam1, 1);
	func_825();
}

bool func_707(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_826(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_827(uParam1);
			if (func_828(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_829(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_824(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_830(uParam1))
						{
							func_824(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_708(int iParam0, int iParam1, var uParam2)
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
	if (func_831(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_827(uParam2);
		if (func_828(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_829(uParam2)
				{
					func_824(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_709(int iParam0, var uParam1)
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
	if (func_821(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_829(uParam1)
		{
			fVar3 = func_827(uParam1);
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

int func_710(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_832(bParam1, bParam2, bParam3);
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

bool func_711(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_724();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_712(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_833(uParam2);
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
			if (func_720(uParam2, iParam1))
			{
				func_824(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_713(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_741(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_720(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_824(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_714(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_834(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_824(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_824(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_835(iParam1, vVar0, vVar4))
					{
						func_824(uParam2, 1);
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
					func_824(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_835(iParam1, vVar0, vVar7))
					{
						func_824(uParam2, 1);
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

bool func_715(int iParam0, var uParam1)
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
		if (!func_821(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_836(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_837(Global_1940186.f_28[iVar0]))
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
			if (func_838(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_839(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_840(uParam1, iParam0, fVar1, iVar0))
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

bool func_716(int iParam0, var uParam1)
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

bool func_717(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_724();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_718(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_841(iVar0, &iVar2))
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
	if (func_842(iVar0, iParam0))
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

int func_719(var uParam0, int iParam1)
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

bool func_720(var uParam0, int iParam1)
{
	if (func_843(uParam0))
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

bool func_721(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_567(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_722()
{
}

bool func_723(var uParam0, int iParam1)
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
		if (func_844(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_724();
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
						if (func_375(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_724();
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

int func_724()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_725()
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
	if ((func_724() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_726(var uParam0, int iParam1)
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
	fVar0 = func_823(uParam0);
	if (uParam0->f_13 > func_631(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_845(iParam1);
	iVar1 = func_846(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_727(var uParam0, int iParam1)
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
	if (func_539(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_762(vVar1, vVar4);
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

int func_728(int iParam0, int iParam1, var uParam2)
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
	return func_847(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_729(int iParam0, var uParam1)
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
		if (func_848(iParam0, uParam1, 1))
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
	if (!func_534(iParam0))
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
			if (func_849(uParam1))
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
					if (!func_850(uParam1, iParam0))
					{
						if (func_375(iVar4, Global_34, 1) < 7f)
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

bool func_730(int iParam0, var uParam1)
{
	if (!func_851(0))
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

bool func_731(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_724();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_732(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_733(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_724();
	}
	else if (func_724() - uParam1->f_5) > func_852(uParam1)
	{
		return func_853(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_734(var uParam0, int iParam1)
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

int func_735(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_854(vVar3, vVar6);
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
	if (func_855(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_736(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_186(Local_879.f_309.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_879.f_309.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_879.f_309.f_65), iParam0);
	if (!bParam3 && Local_78[iParam2 /*25*/].f_11.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_78[iParam2 /*25*/].f_11.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_601(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_856(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_737(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_738(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_739(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_857(iParam0) * 1056964608) + vParam5.x);
		vVar7.f_1 = ((func_858(iParam0) * 1056964608) + vParam5.y);
		vVar7.f_2 = ((func_859(iParam0) * 1056964608) + vParam5.z);
	}
	vVar10 = { func_440(func_860(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_861(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_861(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_862((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_862((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_862(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_862((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_740(int iParam0, var uParam1)
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

int func_741(var uParam0)
{
	return uParam0->f_23;
}

bool func_742(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

bool func_743()
{
	return (func_132(64) || func_131(64, 255));
}

void func_744(bool bParam0)
{
	int iVar0;

	if (!func_131(64, 255))
	{
		iVar0 = func_366(Local_879.f_1, Local_879.f_2);
		func_766(iVar0);
		if (!func_131(1024, 255))
		{
			func_148(1024);
		}
		func_767(iVar0);
		if (bParam0)
		{
			func_863(Local_879.f_1, Local_879.f_4);
		}
		func_148(64);
	}
}

int func_745(int iParam0)
{
	return iParam0;
}

bool func_746(int iParam0)
{
	if (func_359(iParam0, 2))
	{
		return true;
	}
	return false;
}

void func_747(var uParam0, var uParam1)
{
}

void func_748(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_360(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_864(iParam0))
	{
		func_180(iParam0, 0);
		return;
	}
	else if (func_359(iParam0, 8))
	{
		func_180(iParam0, 0);
	}
	bVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), func_568(PLAYER::PLAYER_ID())) <= Local_879.f_423[iParam0 /*39*/].f_2;
	if (bVar1 != func_359(iParam0, 1))
	{
		func_180(iParam0, 0);
		if (bVar1)
		{
			if (!MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iVar0, Local_879.f_423[iParam0 /*39*/].f_3, Local_879.f_423[iParam0 /*39*/].f_2, 0f, Local_879.f_423[iParam0 /*39*/].f_4, 0f, 0f, 0, false, 3))
			{
			}
			else
			{
				if (func_620(iParam0))
				{
					func_749(iParam0);
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_879.f_423[iParam0 /*39*/].f_3))
				{
					PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, MISC::GET_HASH_KEY(Local_879.f_423[iParam0 /*39*/].f_3));
				}
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 315, true);
					PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
				}
				func_497(iParam0, 1);
			}
		}
	}
}

void func_749(int iParam0)
{
	int iVar0;

	if (func_746(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_751(iParam0, iVar0, 1);
		iVar0++;
	}
	func_497(iParam0, 2);
}

bool func_750(int iParam0, int iParam1, int iParam2)
{
	return func_186(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_1, iParam2);
}

void func_751(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam2)
	{
		func_610(&(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/]), 1, 1);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2))
	{
		return;
	}
	if (Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3 == 0)
	{
	}
	iVar0 = func_360(iParam0);
	iVar1 = func_865(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_3, iVar0, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_4, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_5, 0, 0, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_6, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	iVar2 = func_790(iVar1);
	func_866(iVar1, 18, 0, 1);
	func_866(iVar1, 17, 0, 1);
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar2 /*23*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	if (func_750(iParam0, iParam1, 2))
	{
		func_623(iVar1, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_2, Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7, 1);
	}
	if (!func_750(iParam0, iParam1, 1))
	{
		if (func_750(iParam0, iParam1, 4))
		{
			if (func_752() < Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/].f_7)
			{
				if (func_753(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
				{
					func_624(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
				}
			}
			else if (!func_753(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0))
			{
				func_624(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 1, 1, 1);
			}
		}
	}
	else
	{
		func_624(iVar1, 0, 1, 1);
	}
	func_622(iParam0, iParam1, 16);
	Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/] = iVar1;
}

int func_752()
{
	if (func_28() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_753(int iParam0, bool bParam1)
{
	if (bParam1 && !func_609(iParam0))
	{
		return false;
	}
	return !func_867(iParam0, 4);
}

bool func_754(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_609(iParam0))
	{
		return false;
	}
	iVar0 = func_790(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_755(int iParam0, int iParam1, var uParam2)
{
	return true;
}

void func_756(int iParam0, int iParam1)
{
	switch (func_402(func_225(iParam0)))
	{
		case 2:
			if (func_868(iParam0) == PLAYER::PLAYER_ID())
			{
				switch (iParam1)
				{
					case 1:
						func_869(0, 0, -2.573254E+15f, 1, 1, 0, 0);
						Local_879.f_19.f_211 = NETWORK::GET_NETWORK_TIME_ACCURATE();
						break;
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				Local_13.f_7.f_29 = iParam1;
				Local_13.f_7.f_23 = func_868(iParam0);
				func_454(16, 1);
			}
			break;
	}
	func_870(iParam0, iParam1);
}

bool func_757(int iParam0, var uParam1, var uParam2, bool bParam3)
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

var func_758(int iParam0, int iParam1)
{
	return func_871(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_759(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

int func_760(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_872(vParam0);
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

bool func_761(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_879.f_233.f_7[iParam0 /*11*/].f_1);
}

float func_762(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_763(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_173(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_879.f_233.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_879.f_233.f_7[iParam0 /*11*/]);
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
	Local_879.f_233.f_7[iParam0 /*11*/].f_1 = iVar0;
}

void func_764(int iParam0, int iParam1)
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
	Var31 = { func_503(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_121(&Var0, 4) && func_873(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_765(int iParam0)
{
	func_874(iParam0);
}

void func_766(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_128(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_875(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_129(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_617(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_617(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_617(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_617(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_767(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_616(&Var0);
}

void func_768(struct<2> Param0)
{
	struct<32> Var0;

	if (func_364(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_364(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_364(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_876(Param0, &Var0))
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

void func_769(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_503(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_770(int iParam0, int iParam1, int iParam2)
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

bool func_771(int iParam0)
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

int func_772(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_877())
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
		func_878(&Global_0, 8);
	}
	func_878(&Global_0, 1);
	return 1;
}

bool func_773(int iParam0)
{
	return func_186(Local_879.f_233.f_2, iParam0);
}

void func_774()
{
	if (!func_68(2))
	{
		return;
	}
	func_146(8);
}

void func_775(int iParam0, int iParam1)
{
	if (!func_378(iParam0, iParam1))
	{
		return;
	}
	func_879(iParam1, iParam0);
}

bool func_776(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return false;
	}
	MISC::SET_BIT(&(Local_78[iVar0 /*25*/].f_1.f_2), iParam0);
	return true;
}

int func_777(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return 0;
	}
	MISC::SET_BIT(&(Local_78[iVar0 /*25*/].f_1.f_3), iParam0);
	return 1;
}

void func_778()
{
	bool bVar0;
	bool bVar1;

	bVar0 = (func_880(0) && ENTITY::IS_ENTITY_VISIBLE(func_356(0)));
	bVar1 = MAP::DOES_BLIP_EXIST(Local_879.f_19.f_213);
	if (bVar0 != bVar1)
	{
		if (bVar0)
		{
			Local_879.f_19.f_213 = MAP::BLIP_ADD_FOR_ENTITY(-1.461634E+27f, func_356(0));
			MAP::SET_BLIP_SCALE(Local_879.f_19.f_213, 0.75f);
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_879.f_19.f_213, "NB_TRHU_MAP_BLIP");
		}
		else
		{
			MAP::REMOVE_BLIP(&(Local_879.f_19.f_213));
		}
	}
}

void func_779()
{
	if (!func_592(2.524355E-29f, 255))
	{
		func_594(1.084202E-19f);
		func_565(2.524355E-29f);
		if (func_513(&(Local_879.f_19.f_62)))
		{
			func_515(&(Local_879.f_19.f_62));
		}
	}
}

bool func_780(float fParam0, int iParam1)
{
	if (!func_513(&(Local_879.f_19.f_62)))
	{
		func_512(&(Local_879.f_19.f_62));
	}
	if (Local_13.f_7.f_24 == 0)
	{
		if (func_514(&(Local_879.f_19.f_62), fParam0))
		{
		}
		return false;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(Local_13.f_7.f_24, NETWORK::GET_NETWORK_TIME_ACCURATE()) >= iParam1)
	{
		return true;
	}
	return false;
}

int func_781(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 4;
		default:
			break;
	}
	return 1;
}

bool func_782(int iParam0, int iParam1)
{
	return func_881(iParam0, ENTITY::GET_ENTITY_COORDS(iParam1, true, false));
}

int func_783(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam2, "pl_root", 32);
			return 1;
		case 1:
			StringCopy(sParam2, "pl_root_upper", 32);
			return 1;
		case 2:
			StringCopy(sParam2, "pl_intro_idle_", 32);
			break;
		case 3:
			StringCopy(sParam2, "pl_call_", 32);
			break;
		case 4:
			StringCopy(sParam2, "pl_offer_", 32);
			break;
		case 5:
			StringCopy(sParam2, "pl_ilo_neg_", 32);
			break;
		default:
			return 0;
	}
	if (iParam1 > -1)
	{
		if (iParam1 < 10)
		{
			StringConCat(sParam2, "0", 32);
		}
		StringIntConCat(sParam2, iParam1, 32);
	}
	if (iParam3 != 4)
	{
		switch (iParam3)
		{
			case 0:
				StringConCat(sParam2, "_n", 32);
				break;
			case 3:
				StringConCat(sParam2, "_l", 32);
				break;
			case 2:
				StringConCat(sParam2, "_r", 32);
				break;
			case 1:
				switch (iParam4)
				{
					case 1:
						StringConCat(sParam2, "_b", 32);
						break;
					case 3:
						StringConCat(sParam2, "_lb", 32);
						break;
					case 2:
						StringConCat(sParam2, "_rb", 32);
						break;
					default:
						return 0;
				}
				break;
		}
	}
	return 1;
}

void func_784(int iParam0)
{
	int iVar0;

	if (!func_224(&iVar0))
	{
		return;
	}
	func_281(&(Local_78[iVar0 /*25*/].f_1.f_1), iParam0);
}

int func_785()
{
	if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(Local_879.f_19.f_45, "s_root", true))
	{
		return 1;
	}
	return 0;
}

void func_786(int iParam0, int iParam1, bool bParam2)
{
	func_621(iParam0, iParam1, 8);
	if (bParam2 && func_620(iParam0))
	{
		func_624(Local_879.f_423[iParam0 /*39*/].f_6[iParam1 /*8*/], 0, 1, 1);
	}
}

void func_787(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_28() == 0)
	{
		iVar0 = func_752();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_882(iParam0, sParam1, -5.149929E+33f, bParam4);
	}
	else
	{
		func_883(iParam0);
		if (bParam3)
		{
			func_884(iParam0, sParam1, iParam2);
		}
	}
}

void func_788(var uParam0, int iParam1)
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

int func_789(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_885(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_886(uParam2, iParam0, Var1);
	return 1;
}

int func_790(int iParam0)
{
	return iParam0;
}

void func_791(int iParam0)
{
	if (!func_887(iParam0))
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

bool func_792(struct<2> Param0, bool bParam2)
{
	if (!func_40(Param0))
	{
		return false;
	}
	func_888(bParam2);
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

int func_793()
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

void func_794(var uParam0, var uParam1)
{
}

void func_795(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_796(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_867(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_797(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_798(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_799(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_800(int iParam0)
{
	return func_889(iParam0);
}

bool func_801(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/].f_2 > 0;
}

void func_802(int iParam0, float fParam1)
{
	Local_13.f_7.f_6 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Local_13.f_7.f_28 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	func_374(0, 3, iParam0, fParam1);
}

int func_803()
{
	bool bVar0;

	bVar0 = false;
	if (func_661(0))
	{
		bVar0 = SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
		if (!bVar0)
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
		}
	}
	else
	{
		return 0;
	}
	if (func_667())
	{
		func_669();
		func_664(2);
		return 1;
	}
	if (!bVar0)
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Local_13.f_7.f_13), Local_13.f_7.f_20);
	}
	return 0;
}

void func_804(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;

	if (!func_890(iParam2, &vVar0))
	{
		return;
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(func_305(iParam0), 0);
	AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
	if (!func_891(&(Local_879.f_19.f_72), vVar0, 0, -1, 0, 0))
	{
	}
	if (iParam2 == 1)
	{
		if (func_570(iParam0, 1128792064 /* Float: 200f */, 255, 0))
		{
			func_892(4.811317E+29f, func_305(iParam0), 1);
		}
	}
}

int func_805(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || (iParam0 != 3 && iParam0 >= 2))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 == 3)
	{
		iVar1 = Local_13.f_7.f_21;
		if (!func_456(2048) || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_13.f_7.f_21))
		{
			iVar1 = Local_13.f_7.f_20;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return 0;
		}
		return PLAYER::GET_PLAYER_PED(iVar1);
	}
	return func_305(iVar0);
}

int func_806(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, bool bParam5)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam5)
	{
		if (MISC::IS_BIT_SET(Local_13.f_7.f_5, iParam2) || MISC::IS_BIT_SET(Local_879.f_19.f_7, iParam2))
		{
			return 1;
		}
	}
	if (iParam2 == 2 || iParam2 == 3)
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), func_568(PLAYER::PLAYER_ID())) <= 1128792064)
		{
			func_892(4.811317E+29f, iParam0, 1);
		}
	}
	AUDIO::STOP_CURRENT_PLAYING_SPEECH(iParam0, 0);
	AUDIO::STOP_CURRENT_PLAYING_AMBIENT_SPEECH(iParam0, 0);
	if (!func_449(iParam0, func_448(iParam2), fParam3, iParam1, 0, iParam4, func_893(iParam2), 1))
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		MISC::SET_BIT(&(Local_13.f_7.f_5), iParam2);
	}
	MISC::SET_BIT(&(Local_879.f_19.f_7), iParam2);
	return 1;
}

float func_807(float fParam0, float fParam1, float fParam2)
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

void func_808(int iParam0)
{
}

void func_809(int iParam0)
{
}

float func_810()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_811(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_812(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_813(var uParam0)
{
	return func_696(*uParam0, 2);
}

bool func_814(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_894(uParam1);
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
		fVar2 = func_895(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_896())
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

bool func_815(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_897(iParam0))
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

void func_816(int iParam0)
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
	Global_1940186.f_21 = func_898();
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
			func_899(&(Global_1940186.f_28), &(Global_1940186.f_33));
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

var func_817(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_818(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_900(bParam0, &iVar0, &iVar1))
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

bool func_819(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_901(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_901(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_846(iVar0) == -1)
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

void func_820(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_902(uParam0);
	}
}

bool func_821(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_846(iParam2);
	}
	else
	{
		iVar1 = func_845(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_846(iParam0);
	}
	else
	{
		iVar0 = func_845(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_186(*uParam1, 8388608))
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

float func_822(int iParam0, int iParam1)
{
	return func_567(iParam0, iParam1, 1, 1);
}

float func_823(var uParam0)
{
	return uParam0->f_29;
}

void func_824(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_242(uParam0, 3.85186E-34f);
	}
	else
	{
		func_281(uParam0, 3.85186E-34f);
	}
}

void func_825()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_826(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_567(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_903(iVar0, 0)))
		{
			if (func_904(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_827(var uParam0)
{
	return uParam0->f_18;
}

bool func_828(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_186(*uParam0, 4194304))
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

int func_829(var uParam0)
{
	return uParam0->f_19;
}

int func_830(var uParam0)
{
	return uParam0->f_20;
}

bool func_831(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_903(iVar0, 0)))
		{
			if (func_905(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_832(bool bParam0, bool bParam1, bool bParam2)
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

float func_833(var uParam0)
{
	return uParam0->f_25;
}

int func_834(var uParam0)
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

bool func_835(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_906(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
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

int func_836(int iParam0)
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
	if (func_907(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_837(int iParam0)
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

bool func_838(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_897(iParam1))
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

bool func_839(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_897(iParam1))
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

bool func_840(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_908(uParam0);
	if (func_897(iParam1))
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

bool func_841(int iParam0, int iParam1)
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

bool func_842(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_909(iParam0, 1, 0, 0)) && !func_909(iParam0, 1, 0, 0) == 1284.666f)
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

bool func_843(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_844(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_375(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_845(int iParam0)
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

int func_846(int iParam0)
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

int func_847(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_841(Global_33, &iVar1))
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
		fVar2 = func_567(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_567(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
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

bool func_848(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_900(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_850(uParam1, iVar0))
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
				if (!bParam2 || !func_850(uParam1, iVar1))
				{
					if (func_375(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_849(var uParam0)
{
	return func_186(*uParam0, 131072);
}

bool func_850(var uParam0, int iParam1)
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

bool func_851(int iParam0)
{
	return false;
}

int func_852(var uParam0)
{
	return uParam0->f_22;
}

int func_853(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_854(vector3 vParam0, vector3 vParam3)
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

bool func_855(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_856(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_857(int iParam0)
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
	fVar0 = func_910(vVar2.x, fVar0);
	fVar1 = func_895(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.x, fVar0);
	fVar1 = func_895(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.x, fVar0);
	fVar1 = func_895(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.x, fVar0);
	fVar1 = func_895(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.x, fVar0);
	fVar1 = func_895(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_858(int iParam0)
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
	fVar0 = func_910(vVar2.y, fVar0);
	fVar1 = func_895(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.y, fVar0);
	fVar1 = func_895(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.y, fVar0);
	fVar1 = func_895(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.y, fVar0);
	fVar1 = func_895(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.y, fVar0);
	fVar1 = func_895(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_859(int iParam0)
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
	fVar0 = func_910(vVar2.z, fVar0);
	fVar1 = func_895(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.z, fVar0);
	fVar1 = func_895(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.z, fVar0);
	fVar1 = func_895(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.z, fVar0);
	fVar1 = func_895(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_910(vVar2.z, fVar0);
	fVar1 = func_895(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_860(int iParam0)
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
	return func_440((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_861(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_862(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

void func_863(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_378(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_379(iParam1);
	func_879(iVar0, iParam0);
}

bool func_864(int iParam0)
{
	return !func_359(iParam0, 4);
}

int func_865(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_867(iVar0, 2))
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
				func_911(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_866(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_609(iParam0))
	{
		return;
	}
	iVar0 = func_790(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

bool func_867(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_868(int iParam0)
{
	return Local_13.f_57[iParam0 /*3*/].f_1;
}

void func_869(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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
	if (func_601(iVar0, 0, 1, 0) != -3.273909E-18f)
	{
		return;
	}
	TASK::_TASK_PLAY_EMOTE(iVar0, iParam0, iParam1, iParam2, bParam3, bParam4, bParam5, bParam6, false);
}

void func_870(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || iParam0 != 0)
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			Local_13.f_7.f_29 = -1;
			Local_13.f_7.f_21 = Local_13.f_7.f_23;
			Local_13.f_7.f_20 = Local_13.f_7.f_21;
			Local_13.f_7.f_24 = NETWORK::GET_NETWORK_TIME_ACCURATE();
			func_466(16, 1);
			func_454(2048, 1);
			func_451(8);
			break;
		case 1:
			func_664(1);
			break;
	}
}

var func_871(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_912() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_913());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_913());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_913());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_914(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_915(iVar2))
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
				if (iVar9 & 8192 != 0 && func_916(iVar2) != 1)
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
					if (!func_917(iVar10))
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

int func_872(vector3 vParam0)
{
	return func_918(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_873(int iParam0)
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

void func_874(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_503(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_875(int iParam0, int iParam1, int iParam2)
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
		*iParam1 = iVar1;
		func_32(&Var2, *iParam1, -1, -1, 255);
		iVar0 = (iVar0 + Var2);
		if (iVar0 >= iParam0)
		{
			iVar0 = (iVar0 - Var2);
			*iParam2 = 0;
			while (*iParam2 <= (Var2 - 1))
			{
				if (iVar0 == iParam0)
				{
					return 1;
				}
				iVar0++;
				*iParam2++;
			}
		}
		iVar1++;
	}
	return 0;
}

bool func_876(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_792(Param0, &vVar0);
	if (func_919(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_877()
{
	return !Global_1572887.f_10;
}

void func_878(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_879(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_503(iParam1, 8.746343E-07f) };
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

bool func_880(int iParam0)
{
	return func_920(0, iParam0);
}

bool func_881(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_855(vVar0, vVar3, vParam1);
}

int func_882(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_921(3.996812E+36f, 1, 0) };
	Var6 = { func_922(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_923(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_924(iVar0, Var23);
	}
	return iVar0;
}

void func_883(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_752() < iParam0)
	{
		iParam0 = func_752();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_925(6.480143E+20f) };
	STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam0);
}

void func_884(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_926(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 1, 4.465091E-08f, 0, 0, 0, 1);
}

void func_885(var uParam0)
{
	func_788(uParam0, 8.505438E-34f);
	if (func_927() == 3.272964E+34f)
	{
		func_788(uParam0, 8.967694E-17f);
	}
	else
	{
		func_788(uParam0, 1.721179E-28f);
	}
}

void func_886(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_928(uParam0))
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

bool func_887(int iParam0)
{
	return func_867(iParam0, 2);
}

void func_888(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_889(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return 0;
	}
	return 1;
}

bool func_890(int iParam0, char* sParam1)
{
	bool bVar0;

	bVar0 = false;
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "NBTH_IDLE", 24);
			break;
		case 2:
			StringCopy(sParam1, "NBTH_CALL0", 24);
			break;
		case 3:
			if (func_929())
			{
				bVar0 = true;
				StringCopy(sParam1, "NBTH_CAL1", 24);
				if (func_308() != 1)
				{
					StringConCat(sParam1, "M_A", 24);
				}
				else
				{
					StringConCat(sParam1, "F_A", 24);
				}
			}
			else if (func_930())
			{
				StringCopy(sParam1, "NBTH_CAL1M", 24);
			}
			else
			{
				StringCopy(sParam1, "NBTH_CALL1", 24);
			}
			break;
		case 4:
			StringCopy(sParam1, "NBTH_CALL2", 24);
			break;
		case 5:
			StringCopy(sParam1, "NBTH_CALL3", 24);
			break;
		case 6:
			StringCopy(sParam1, "NBTH_CWAIT", 24);
			break;
		case 7:
			StringCopy(sParam1, "NBTH_CEXIT", 24);
			if (func_930())
			{
				StringConCat(sParam1, "B", 24);
			}
			break;
		case 8:
			StringCopy(sParam1, func_931("NBTH_OFFER", "NBTH_OFFERAG", "NBTH_OFFERB"), 24);
			break;
		case 9:
			StringCopy(sParam1, "NBTH_OWAIT0", 24);
			break;
		case 10:
			StringCopy(sParam1, "NBTH_OWAIT1", 24);
			break;
		case 11:
			StringCopy(sParam1, "NBTH_HBU", 24);
			break;
		case 12:
			StringCopy(sParam1, "NBTH_NEG0", 24);
			break;
		case 13:
			StringCopy(sParam1, "NBTH_POS0", 24);
			break;
		case 14:
			StringCopy(sParam1, "NBTH_POS1", 24);
			break;
		case 15:
			StringCopy(sParam1, "NBTH_NEG1", 24);
			break;
		case 16:
			StringCopy(sParam1, "NBTH_AGDROP", 24);
			break;
		case 17:
			StringCopy(sParam1, "NBTH_AGFLEE", 24);
			if (func_308() == 1)
			{
				StringConCat(sParam1, "F", 24);
				bVar0 = true;
			}
			break;
		case 18:
			StringConCat(sParam1, "NBTH_CLOSE", 24);
			if (func_308() != 1)
			{
				StringConCat(sParam1, "1", 24);
			}
			else
			{
				StringConCat(sParam1, "0", 24);
			}
			break;
		case 19:
			StringCopy(sParam1, "NBTH_AGGRO", 24);
			break;
		case 20:
			StringCopy(sParam1, "NBTH_LASSO", 24);
			break;
		case 21:
			StringCopy(sParam1, "NBTH_AGHORSE", 24);
			break;
		case 27:
			StringCopy(sParam1, "NBTH_OEXIT", 24);
			break;
		case 23:
			StringCopy(sParam1, "NBTH_AGATK", 24);
			break;
		case 24:
			StringCopy(sParam1, "NBTH_AGRUN", 24);
			break;
		case 25:
			StringCopy(sParam1, "NBTH_HOGSTEAL", 24);
			if (func_308() != 1)
			{
				bVar0 = true;
			}
			break;
		case 26:
			StringCopy(sParam1, "NBTH_UNHOG", 24);
			if (func_308() != 1)
			{
				bVar0 = true;
			}
			break;
		case 22:
			StringCopy(sParam1, "NBTH_CFUCKU", 24);
			if (func_308() != 1)
			{
				bVar0 = true;
			}
			break;
		default:
			return false;
	}
	if (!bVar0)
	{
		if (func_308() != 1)
		{
			StringConCat(sParam1, "_M", 24);
		}
		else
		{
			StringConCat(sParam1, "_F", 24);
		}
	}
	return true;
}

bool func_891(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_932(uParam0, &Global_1051270, vParam1, iParam4, iParam5, bParam6, iParam7);
}

void func_892(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

int func_893(int iParam0)
{
	switch (func_229())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 10:
					return 1;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 10:
					return 2;
				default:
					break;
			}
			break;
	}
	return 0;
}

float func_894(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_631(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_933(uParam0);
	}
	return func_631(uParam0);
}

float func_895(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_896()
{
	int iVar0;
	int iVar1;

	iVar0 = func_935(func_934());
	iVar1 = func_936(func_934());
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

bool func_897(int iParam0)
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

bool func_898()
{
	if (func_937())
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

void func_899(var uParam0, var uParam1)
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

bool func_900(bool bParam0, int iParam1, int iParam2)
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

int func_901(var uParam0)
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

void func_902(var uParam0)
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
					func_242(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_903(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_904(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_905(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_905(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_906(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_907(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_908(var uParam0)
{
	return uParam0->f_28;
}

float func_909(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_910(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_911(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_796(iParam0, 1);
	func_797(iParam0, 1);
	func_798(iParam0, 128);
}

int func_912()
{
	return Global_1051645.f_12;
}

char* func_913()
{
	return "unnamed";
}

int func_914(int iParam0)
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

bool func_915(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_938(36, iParam0);
}

int func_916(int iParam0)
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

bool func_917(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_939(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_940(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_918(int iParam0)
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

bool func_919(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_941(iParam0))
	{
		return false;
	}
	if (func_942(iParam0, uParam1, &uVar0))
	{
		func_943(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_920(int iParam0, int iParam1)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_879.f_274[iParam0 /*34*/].f_5[iParam1 /*14*/]);
}

struct<5> func_921(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_944(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_945(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_946(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_947(bParam1) };
			if (iParam2 && func_948(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_949(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_949(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_950(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_951(bParam1) };
			switch (func_952(bParam0))
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
			if (func_953(bParam0, -2.580501E-27f))
			{
				Var0 = { func_946(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_953(bParam0, -4.220332E-15f))
			{
				Var0 = { func_946(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_946(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_953(bParam0, -3.171238E-21f))
			{
				Var0 = { func_946(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_954(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_953(bParam0, -3.171238E-21f))
			{
				Var0 = { func_946(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<17> func_922(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_946(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_955(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_956() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_923(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_957(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_959(func_958(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_960(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_924(int iParam0, struct<17> Param1)
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

struct<2> func_925(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_926(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_961(sParam0, sParam1, iParam2);
	return iVar20;
}

int func_927()
{
	return Global_1953279.f_1;
}

bool func_928(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_929()
{
	return func_192(64);
}

bool func_930()
{
	return func_192(128);
}

char* func_931(char* sParam0, char* sParam1, char* sParam2)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1) && func_929())
	{
		return sParam1;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam2) && func_930())
	{
		return sParam2;
	}
	return sParam0;
}

bool func_932(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8)
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
		func_962(vParam2, uParam0, uParam1);
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

var func_933(var uParam0)
{
	return uParam0->f_27;
}

int func_934()
{
	return Global_1902565;
}

int func_935(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_936(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_937()
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

bool func_938(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_963(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_964())
	{
		return func_963(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_963(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_939(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_940(int iParam0)
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
		func_965(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_966(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_941(int iParam0)
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

bool func_942(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_967(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_943(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_968(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_969(iVar0);
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
			uParam2->f_5 = func_970(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_971(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_972(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_973(iVar0);
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

struct<4> func_944(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_974(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_946(2.982335E+09f, func_956(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_946(2.982335E+09f, func_956(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_946(2.982335E+09f, func_956(), -5.45926E-19f, bParam0);
}

int func_945(bool bParam0)
{
	vector3 vVar0;

	if (!func_975(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_946(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_975(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_974(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_947(bool bParam0)
{
	int iVar0;

	iVar0 = func_974(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_946(8.681942E-06f, func_944(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_946(8.681942E-06f, func_944(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_946(8.681942E-06f, func_944(bParam0), -1.942248E+12f, 0);
}

int func_948(bool bParam0, bool bParam1)
{
	if (func_952(bParam0) == 4.161967E+25f)
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

bool func_949(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_977(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_950(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_978(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_951(bool bParam0)
{
	int iVar0;

	iVar0 = func_974(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_946(3.507197E-29f, func_944(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_946(3.507197E-29f, func_944(bParam0), 12999093, 0);
}

int func_952(bool bParam0)
{
	struct<2> Var0;

	if (!func_975(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_953(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_952(bParam0);
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
			if (func_979(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_954(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_980(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_955(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_982(func_981(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_956()
{
	struct<4> Var0;

	return Var0;
}

bool func_957(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_983(iParam1->f_8, iParam0, iVar0, 2048) || func_983(iParam1->f_8, iParam0, iVar0, 32768)) || func_983(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_983(iParam1->f_8, iParam0, iVar0, 4) || func_983(iParam1->f_8, iParam0, iVar0, 256)) || func_983(iParam1->f_8, iParam0, iVar0, 65536)) || func_983(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_983(iParam1->f_8, iParam0, iVar0, 1) || func_983(iParam1->f_8, iParam0, iVar0, 8)) || func_983(iParam1->f_8, iParam0, iVar0, 65536)) || func_983(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_983(iParam1->f_8, iParam0, iVar0, 1) || func_983(iParam1->f_8, iParam0, iVar0, 16)) || func_983(iParam1->f_8, iParam0, iVar0, 2)) || func_983(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_983(iParam1->f_8, iParam0, iVar0, 8) || func_983(iParam1->f_8, iParam0, iVar0, 4096)) || func_983(iParam1->f_8, iParam0, iVar0, 256)) || func_983(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_958(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_959(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_984(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_984(iParam1, 2, 0, 0);
	return -1;
}

int func_960(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_984(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_961(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

void func_962(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_963(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_964()
{
	return Global_1102813.f_3672;
}

void func_965(int iParam0)
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
	func_966(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_966(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

int func_967(int iParam0)
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

int func_968(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_985(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_969(int iParam0)
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

int func_970(int iParam0)
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

int func_971(int iParam0)
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

int func_972(int iParam0)
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

int func_973(int iParam0)
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

int func_974(bool bParam0)
{
	if (func_28() == -1)
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

bool func_975(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_976()
{
	if (func_986(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_977(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_975(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_955(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_946(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_974(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_974(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_978(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_974(0);
	*iParam1 = { func_946(bParam0, func_947(0), fParam3, 0) };
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

bool func_979(bool bParam0, int iParam1, int iParam2)
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

int func_980(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_974(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_981(bool bParam0)
{
	return bParam0;
}

bool func_982(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_983(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_241(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_984(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_987(iParam0, iParam1, iParam2, iParam3);
}

bool func_985(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_988(iParam0, uParam1, &uVar0))
	{
		func_989(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_986(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_990(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_974(bParam1), iParam0, bParam3);
}

void func_987(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_991(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_988(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_967(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_989(bool bParam0, int iParam1, var uParam2)
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

bool func_990(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_991(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_992(&(uParam0->f_4));
}

void func_992(var uParam0)
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

