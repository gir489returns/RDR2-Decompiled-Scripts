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
	struct<63> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 1, 0, 2, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2 } ;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	struct<7> Local_78[32];
	struct<195> Local_303 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, -1, 0, 0, 0, -1, 1, 0, 0, 2, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 0;
	var uLocal_503 = 0;
	var uLocal_504 = 2;
	var uLocal_505 = 0;
	var uLocal_506 = 0;
	var uLocal_507 = 0;
	var uLocal_508 = 0;
	var uLocal_509 = 0;
	var uLocal_510 = 0;
	var uLocal_511 = 0;
	var uLocal_512 = 0;
	var uLocal_513 = 0;
	var uLocal_514 = 1114636288;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 0;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 0;
	var uLocal_524 = 0;
	var uLocal_525 = 1114636288;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 2;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	var uLocal_533 = 0;
	var uLocal_534 = 0;
	var uLocal_535 = 0;
	var uLocal_536 = 0;
	var uLocal_537 = 0;
	var uLocal_538 = 0;
	float fLocal_539 = 0f;
	float fLocal_540 = 0f;
	var uLocal_541 = 0;
	var uLocal_542 = 0;
	var uLocal_543 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_539 = 1f;
	fLocal_540 = 1f;
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
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_78, 225, 43);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_78[0 /*7*/])), 225, "m_clientData");
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
	else if (func_17(Local_303.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_303.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_303.f_12), Local_303.f_9))
	{
		return true;
	}
	else if (Local_303.f_8 == 6)
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
	MISC::COPY_SCRIPT_STRUCT(&Local_303, bParam0, 5);
	iVar2 = func_30(&bVar1, Local_303.f_1, Local_303.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_303.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar0);
	Local_303.f_9 = { func_32(Var3.f_5, 8) };
	Local_303.f_14 = Var3.f_5;
	Local_303.f_15 = { Var3.f_11 };
	Local_303.f_18 = Var3.f_7;
	func_33();
	func_34();
}

void func_14()
{
	func_35();
}

void func_15()
{
	func_36();
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
	if (func_37(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_38(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_39(iParam3, 255))
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
	if (func_40())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_37(Global_1051268))
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
		func_41();
	}
	switch (Local_13)
	{
		case 0:
			func_42();
			break;
		case 1:
			func_43();
			break;
		case 2:
			func_44();
			break;
		case 3:
			func_45();
			break;
		case 4:
			func_46();
			break;
		case 5:
			func_47();
			break;
	}
}

void func_23()
{
	func_48();
	func_49();
	if (Local_303.f_8 <= 5)
	{
		func_50();
	}
	switch (Local_303.f_8)
	{
		case 0:
			func_51();
			break;
		case 1:
			func_52();
			break;
		case 2:
			func_53();
			break;
		case 3:
			func_54();
			break;
		case 4:
			func_55();
			break;
		case 5:
			func_56();
			break;
	}
}

void func_24()
{
	func_57();
}

void func_25()
{
	if (func_58())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_13.f_3.f_1);
		}
	}
	func_59();
}

void func_26()
{
	func_60();
}

void func_27()
{
	if (Local_303.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_61(Local_303.f_12, 4);
		}
	}
	func_62();
	if (func_63(64))
	{
		func_64(Local_13.f_6);
	}
	func_65();
}

int func_28()
{
	return Global_1572887.f_14;
}

bool func_29()
{
	return Global_1051645.f_8;
}

int func_30(var uParam0, int iParam1, int iParam2)
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
	func_31(&Var26, iParam1, iParam2, -1, 255);
	func_66(&Var0, Var26.f_5);
	iVar25 = func_67(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_68(iVar25) };
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

void func_31(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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
			func_69(bParam0, iParam2);
			break;
		case 2:
			func_70(bParam0, iParam2);
			break;
		case 3:
			func_71(bParam0, iParam2);
			break;
		case 4:
			func_72(bParam0, iParam2);
			break;
		case 12:
			func_73(bParam0, iParam2);
			break;
		case 6:
			func_74(bParam0, iParam2);
			break;
		case 7:
			func_75(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_76(bParam0, iParam2);
			break;
		case 11:
			func_77(bParam0, iParam2);
			break;
		case 9:
			func_78(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_79(bParam0, iParam2);
			break;
		case 8:
			func_80(bParam0, iParam2);
			break;
		case 13:
			func_81(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_82(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_83(bParam0, iParam2);
			break;
		case 16:
			func_84(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_85(bParam0, iParam2);
			break;
		case 21:
			func_86(bParam0, iParam2);
			break;
		case 28:
			func_87(bParam0, iParam2);
			break;
		case 25:
			func_88(bParam0, iParam2);
			break;
		case 24:
			func_89(bParam0, iParam2);
			break;
		case 22:
			func_90(bParam0, iParam2);
			break;
		case 23:
			func_91(bParam0, iParam2);
			break;
		case 29:
			func_92(bParam0, iParam2);
			break;
		case 26:
			func_93(bParam0, iParam2);
			break;
		case 30:
			func_94(bParam0, iParam2);
			break;
		case 27:
			func_95(bParam0, iParam2);
			break;
		case 32:
			func_96(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_97(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_98(bParam0, iParam2);
			break;
		case 17:
			func_99(bParam0, iParam2);
			break;
		case 18:
			func_100(bParam0, iParam2);
			break;
		case 19:
			func_101(bParam0, iParam2);
			break;
		case 20:
			func_102(bParam0, iParam2);
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
			func_103(bParam0, iParam1, iParam2);
			break;
		default:
			break;
	}
}

struct<2> func_32(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573), func_104(iParam1));
			break;
		case 3:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_602), func_104(iParam1));
			break;
		case 4:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_2104), func_104(iParam1));
			break;
		case 5:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_12606), func_104(iParam1));
			break;
		case 6:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_12908), func_104(iParam1));
			break;
		case 7:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_15910), func_104(iParam1));
			break;
		case 8:
			Var0.f_1 = func_105(iParam0, &(Global_1072759.f_573.f_16512), func_104(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_106();
	}
	return Var0;
}

void func_33()
{
	func_107();
}

void func_34()
{
	func_108(&(Local_303.f_19.f_18));
	Local_303.f_19.f_16 = func_109();
}

void func_35()
{
	NETWORK::RESERVE_NETWORK_MISSION_PEDS(2);
	NETWORK::RESERVE_NETWORK_MISSION_VEHICLES(1);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(2);
}

void func_36()
{
}

bool func_37(struct<2> Param0)
{
	if (!func_110(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_104(Param0))
	{
		return false;
	}
	return true;
}

bool func_38(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_39(int iParam0, int iParam1)
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

bool func_40()
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
	if (!func_37(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_41()
{
}

void func_42()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_303.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_303.f_1, Local_303.f_2, Local_303.f_3, iVar0);
	if (!func_111(&Var1, 1))
	{
		func_112(1);
		return;
	}
	Local_13.f_6 = func_113(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_114(256);
	if (func_115(Local_13.f_6))
	{
		func_116(5);
		func_112(6);
	}
	else
	{
		func_112(1);
	}
}

void func_43()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_303.f_1, Local_303.f_2, -1, 255);
	if (func_111(&Var0, 1))
	{
		func_112(2);
		return;
	}
	if (func_117(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_303.f_15, Var0.f_10, 2442122);
		func_112(2);
	}
	else if (bVar31)
	{
		func_116(3);
		func_112(6);
	}
	if (!func_118(Local_13.f_3.f_2))
	{
		func_119(&(Local_13.f_3.f_2));
	}
	else if (func_120(Local_13.f_3.f_2) > 45000)
	{
		func_116(4);
		func_112(6);
	}
}

void func_44()
{
	if (func_121(1, 255))
	{
		if (!func_122(1))
		{
			if (func_123())
			{
				func_114(1);
			}
		}
		else
		{
			func_124();
			func_112(3);
		}
	}
}

void func_45()
{
	bool bVar0;

	if (func_121(2, 255))
	{
		if (!func_122(2))
		{
			bVar0 = true;
			if (!func_125())
			{
				bVar0 = false;
			}
			if (!func_126())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_114(2);
			}
		}
		else
		{
			func_127();
			func_112(4);
		}
	}
}

void func_46()
{
	func_128();
	func_129();
	func_130();
	if (func_131() || Local_13.f_2 != 0)
	{
		func_132();
		func_112(5);
	}
}

void func_47()
{
	if (func_121(4, 255))
	{
		if (func_133())
		{
			func_114(4);
			func_112(6);
		}
	}
}

void func_48()
{
	if (!func_122(256))
	{
		return;
	}
	if (func_122(512))
	{
		if (func_63(64) && func_113(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_64(Local_13.f_6);
			func_134(64);
		}
	}
	else if (!func_63(64))
	{
		if (func_113(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_135(Local_13.f_6, 1, 1);
			func_136(64);
		}
	}
	else if (func_113(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_64(Local_13.f_6);
		func_134(64);
	}
}

void func_49()
{
	if (!Global_13)
	{
		if (func_121(8192, 255))
		{
			func_137(8192);
		}
	}
	else if (!func_121(8192, 255))
	{
		func_138(8192);
	}
}

void func_50()
{
	func_139();
}

void func_51()
{
	if (Local_13 == 6)
	{
		func_140(6);
	}
	else if (Local_13 > 0)
	{
		func_48();
		func_140(1);
	}
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_140(6);
	}
	else if (Local_13 > 1)
	{
		func_140(2);
	}
}

void func_53()
{
	bool bVar0;
	int iVar1;

	if (!func_121(1, 255))
	{
		bVar0 = true;
		if (!func_141())
		{
			bVar0 = false;
		}
		if (!func_142())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_138(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_118(Local_303.f_11))
			{
				func_119(&(Local_303.f_11));
			}
			if (func_120(Local_303.f_11) >= iVar1)
			{
				func_140(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_143(&(Local_303.f_11));
		func_144();
		func_140(3);
	}
}

void func_54()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_121(2, 255))
	{
		iVar0 = func_145();
		iVar1 = func_146();
		if (iVar0 && iVar1)
		{
			func_138(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_118(Local_303.f_11))
			{
				func_119(&(Local_303.f_11));
			}
			if (func_147(Local_303.f_11) >= iVar2)
			{
				func_140(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_143(&(Local_303.f_11));
		func_148();
		func_149();
		func_150();
		func_151();
		func_140(4);
	}
}

void func_55()
{
	if (Local_13 >= 5)
	{
		func_152();
		func_140(5);
		return;
	}
	func_153();
	func_154();
	func_155();
	func_156();
	func_157();
	func_158();
	func_159();
}

void func_56()
{
	if (!func_121(4, 255))
	{
		if (func_160())
		{
			func_161();
			func_61(Local_303.f_12, 4);
			func_138(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_140(6);
	}
}

void func_57()
{
}

bool func_58()
{
	return (func_122(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_59()
{
}

void func_60()
{
	int iVar0;
	int iVar1;

	if (func_58())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_62[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_62[iVar1]);
				func_162(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_163(iVar0, "HAS_VOICE");
					func_163(iVar0, "HorseTeamA");
					func_163(iVar0, "HorseTeamB");
					func_163(iVar0, "HorseOwnerTeamA");
					func_163(iVar0, "HorseOwnerTeamB");
					if (!func_164(iVar1, 16))
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

void func_61(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_165(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_62()
{
	int iVar0;
	bool bVar1;

	if (!func_63(1))
	{
		return;
	}
	if (func_63(4))
	{
		return;
	}
	if (!func_63(2))
	{
		iVar0 = -1;
	}
	else if (!func_63(8))
	{
		iVar0 = 2;
	}
	else if (func_63(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_63(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_166(Local_303.f_9, iVar0, 0, 255, 0);
	func_136(4);
	if (bVar1)
	{
		func_167(Local_303.f_1, Local_303.f_2);
		if (!func_63(256))
		{
			if (iVar0 == 1)
			{
				func_168(Local_303.f_18, 1);
			}
			else
			{
				func_168(Local_303.f_18, 0);
			}
			func_136(256);
		}
		func_169(Local_303.f_18);
	}
	else
	{
		func_168(Local_303.f_18, 2);
	}
}

bool func_63(int iParam0)
{
	return func_170(Local_303.f_7, iParam0);
}

void func_64(int iParam0)
{
	int iVar0;

	if (!func_171(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_65()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	bVar0 = func_58();
	if (func_172(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_173(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_174(0)))
	{
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(func_174(0), 6, false);
	}
	if (func_175(2.350989E-38f, 255) || func_175(9.403955E-38f, 255))
	{
		TASK::CLOSE_SEQUENCE_TASK(Local_303.f_19.f_174);
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (iVar1 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(1), false);
		}
		func_177(iVar1);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_1[iVar1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_1[iVar1]))
		{
			if (iVar1 != 0 || !PED::IS_PED_FLEEING(func_176(iVar1)))
			{
				iVar2 = NETWORK::NET_TO_ENT(Local_13.f_7.f_1[iVar1]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar2);
			}
		}
		iVar1++;
	}
	iVar1 = 0;
	while (iVar1 <= 0)
	{
		func_178(iVar3);
		if ((bVar0 && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4[iVar3])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4[iVar3]))
		{
			iVar4 = NETWORK::NET_TO_ENT(Local_13.f_7.f_4[iVar3]);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar4);
		}
		iVar1++;
	}
}

void func_66(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_67(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_179(uParam0))
	{
		return -1;
	}
	iVar0 = func_180(uParam0, uParam0->f_9);
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
			iVar0 = func_180(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_68(int iParam0)
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

void func_69(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_181(bParam0, iParam1);
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

void func_70(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_183(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_183(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_183(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_183(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_183(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_183(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_183(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_183(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_183(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_71(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			func_184(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_72(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_182(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_73(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_183(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_183(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_183(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_183(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_74(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_185(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_184(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_184(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_184(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_184(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_184(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_184(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_184(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_184(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_184(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_184(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_184(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_184(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_184(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_184(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_184(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_75(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 8);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 7);
			func_184(bParam0, 8);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			func_184(bParam0, 6);
			func_184(bParam0, 7);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			func_184(bParam0, 6);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			func_184(bParam0, 5);
			func_184(bParam0, 9);
			func_184(bParam0, 10);
			func_184(bParam0, 11);
			func_186(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_76(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_183(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_183(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_183(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_183(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_183(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_183(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_183(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_183(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_183(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_183(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_182(bParam0);
	func_187(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_78(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_188(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_188(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_188(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_188(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_188(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_79(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_183(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_183(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_183(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_183(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_183(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_183(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_183(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_183(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_183(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_80(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_182(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_81(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_182(bParam0);
	func_187(bParam0, 1);
	func_187(bParam0, 4);
	func_187(bParam0, 8);
	func_187(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_189(func_113(iParam2)) };
			break;
	}
}

void func_82(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_190(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_190(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_190(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_190(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_83(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			Jump @588; //curOff = 234
			func_183(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			Jump @588; //curOff = 273
			func_183(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			Jump @588; //curOff = 312
			func_183(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			Jump @588; //curOff = 351
			func_183(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			Jump @588; //curOff = 390
			func_183(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			Jump @588; //curOff = 429
			func_183(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			Jump @588; //curOff = 468
			func_183(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			Jump @588; //curOff = 507
			func_183(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			Jump @588; //curOff = 546
			func_183(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
		}

void func_84(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_191(bParam0, iParam2);
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

void func_85(bool bParam0, int iParam1)
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
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_192(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_192(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_86(bool bParam0, int iParam1)
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
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_193(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_193(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_87(bool bParam0, int iParam1)
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
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_184(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_184(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_88(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_182(bParam0);
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
			func_184(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_184(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_184(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_184(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_184(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_184(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_184(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_184(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_184(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_184(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_89(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_182(bParam0);
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
			func_184(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_184(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_184(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_184(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_184(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_184(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_184(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_184(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_184(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_184(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_184(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_90(bool bParam0, int iParam1)
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
			func_194(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_194(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_194(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
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
			func_195(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_195(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_195(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_195(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_195(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_195(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_195(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_195(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_182(bParam0);
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
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_184(bParam0, 3);
			func_184(bParam0, 4);
			func_184(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
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
			func_196(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_196(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_196(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_182(bParam0);
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
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_184(bParam0, 2);
			func_184(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_184(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_184(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
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
			func_197(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_197(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_197(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_96(bool bParam0, int iParam1, int iParam2)
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
	func_198(bParam0, iParam1, iParam2);
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

void func_97(bool bParam0, int iParam1, int iParam2)
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
	func_199(bParam0, iParam1, iParam2);
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

void func_98(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_182(bParam0);
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
			func_184(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_184(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_184(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_184(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_184(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_184(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_184(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_184(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_184(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_184(bParam0, 1);
			break;
	}
}

void func_99(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_183(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_100(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_183(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_183(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_183(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_183(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_183(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_183(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_101(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_182(bParam0);
	switch (iParam1)
	{
		case 0:
			func_183(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_183(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_183(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_183(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_184(bParam0, 0);
			func_184(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_102(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_103(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_201(iParam1);
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
	*bParam0 = func_202(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_187(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_204(func_203(iVar0), iParam2);
		bParam0->f_15[0] = func_205(func_203(iVar0), iParam2);
		bParam0->f_5 = func_206(iVar0, iParam2);
		bParam0->f_11 = { func_207(iVar0, iParam2) };
	}
}

int func_104(int iParam0)
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

int func_105(int iParam0, var uParam1, int iParam2)
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

struct<2> func_106()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_107()
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
			Local_78[iVar1 /*7*/].f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_108(var uParam0)
{
	func_208(uParam0, 0);
	func_209(uParam0, 0);
	func_210(uParam0, 1);
	func_211(uParam0, 1);
	func_212(uParam0, 0);
	func_213(uParam0, 1);
	func_214(uParam0, 1, 1, 1);
}

int func_109()
{
	switch (func_215())
	{
		case 0:
			return 0;
		case 1:
			return 1;
		case 2:
			return 0;
		case 3:
			return 0;
		default:
			break;
	}
	return 0;
	return -1;
}

bool func_110(int iParam0)
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

bool func_111(var uParam0, int iParam1)
{
	return func_216(uParam0->f_25, iParam1);
}

void func_112(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

int func_113(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_114(int iParam0)
{
	if (!func_122(iParam0))
	{
		func_217(&(Local_13.f_1), iParam0);
	}
}

bool func_115(int iParam0)
{
	if (!func_171(iParam0))
	{
		return false;
	}
	return (func_218(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_116(int iParam0)
{
	if (Local_13.f_2 != iParam0)
	{
		Local_13.f_2 = iParam0;
	}
}

bool func_117(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
	{
		return true;
	}
	if (func_219(Local_303.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_13.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_303.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_220(&uVar1, Param0);
		Local_13.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_138(128);
	}
	else if (!func_121(128, 255))
	{
		Local_13.f_3.f_1 = func_221(Param0);
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

bool func_118(int iParam0)
{
	return iParam0 != 0;
}

void func_119(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_120(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_121(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_170(Local_78[iParam1 /*7*/], iParam0);
}

bool func_122(int iParam0)
{
	return func_170(Local_13.f_1, iParam0);
}

bool func_123()
{
	return true;
}

void func_124()
{
}

bool func_125()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 1;
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4[iVar3]))
		{
			if (func_223(iVar3, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar3++;
			}
			iVar4 = 0;
			while (iVar4 <= 1)
			{
				if (iVar4 == 1)
				{
					switch (func_224())
					{
						case 2:
						case 3:
							Jump @152; //curOff = 106
						}
						if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_6[iVar4]))
						{
							if (func_225(iVar4, &bVar1) || bVar1)
							{
								iVar0 = 0;
							}
						}
						iVar4++;
					}
					switch (func_224())
					{
						case 0:
						case 1:
							if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_1[0]))
							{
								if (func_226(0, &bVar1) || bVar1)
								{
									iVar0 = 0;
								}
							}
							break;
						case 2:
						case 3:
							iVar2 = 0;
							while (iVar2 <= 1)
							{
								if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_1[iVar2]))
								{
									if (func_226(iVar2, &bVar1) || bVar1)
									{
										iVar0 = 0;
									}
									else
									{
										iVar2++;
									}
									if (bVar1)
									{
										func_227();
									}
									return iVar0;
								}
							}
							default:
								break;
					}
				}
			}
		}

bool func_126()
{
	bool bVar0;

	if (!func_228(&bVar0))
	{
		if (bVar0)
		{
			func_227();
		}
		return false;
	}
	return true;
}

void func_127()
{
}

void func_128()
{
	if (!func_122(32) && func_229(32))
	{
		func_114(32);
	}
	if (!func_122(64) && func_229(64))
	{
		func_114(64);
	}
	if (!func_122(16) && func_230(16))
	{
		func_114(16);
	}
	if ((!func_122(2048) && func_229(2048)) && !func_229(4096))
	{
		func_114(2048);
	}
}

void func_129()
{
	bool bVar0;

	if (!bVar0 && func_122(16))
	{
		func_116(1);
		return;
	}
	if (func_122(2048) && !func_229(4096))
	{
		func_116(6);
		return;
	}
}

void func_130()
{
}

bool func_131()
{
	if (func_231())
	{
		return true;
	}
	func_232();
	func_233();
	switch (Local_13.f_7)
	{
		case 0:
			func_234();
			break;
		case 1:
			func_235();
			break;
		case 3:
			func_236();
			break;
		case 5:
			func_237();
			break;
		case 6:
			func_238();
			break;
		case 4:
			func_239();
			break;
		case 7:
			func_240();
			break;
		case 8:
			func_241();
			break;
		case 9:
			func_242();
			break;
		case 11:
			func_243();
			break;
		case 10:
			func_244();
			break;
		case 12:
			func_245();
			break;
		case 13:
			func_246();
			break;
		case 14:
			func_247();
			break;
	}
	return false;
}

void func_132()
{
}

bool func_133()
{
	int iVar0;

	iVar0 = func_176(0);
	if ((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || func_248(iVar0, 2.40763E-20f))
	{
		return true;
	}
	return false;
}

void func_134(int iParam0)
{
	if (func_63(iParam0))
	{
		func_249(&(Local_303.f_7), iParam0);
	}
}

int func_135(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_171(iParam0))
	{
		return 0;
	}
	iVar0 = func_250(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_251(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_252(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_136(int iParam0)
{
	if (!func_63(iParam0))
	{
		func_217(&(Local_303.f_7), iParam0);
	}
}

void func_137(int iParam0)
{
	if (func_170(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/], iParam0))
	{
		func_249(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/]), iParam0);
	}
}

void func_138(int iParam0)
{
	if (!func_121(iParam0, 255))
	{
		func_217(&(Local_78[NETWORK::PARTICIPANT_ID_TO_INT() /*7*/]), iParam0);
	}
}

void func_139()
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
				func_253(iVar0);
				break;
			case -1315570756:
				func_254(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_255(iVar0);
		iVar0++;
	}
}

void func_140(int iParam0)
{
	if (Local_303.f_8 != iParam0)
	{
		Local_303.f_8 = iParam0;
	}
}

bool func_141()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	sVar0 = "ORERW";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar0))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar0);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (!func_257(func_256(iVar2)))
		{
			iVar1 = 0;
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_257(func_258(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar3 = 0;
	while (iVar3 <= 1)
	{
		if (!func_257(func_259(iVar4)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	iVar5 = 0;
	while (iVar5 <= 5)
	{
		STREAMING::REQUEST_ANIM_DICT(func_260(iVar5));
		if (!STREAMING::HAS_ANIM_DICT_LOADED(func_260(iVar5)))
		{
			iVar1 = 0;
		}
		iVar5++;
	}
	return iVar1;
}

bool func_142()
{
	bool bVar0;

	bVar0 = false;
	if (!func_261())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_143(var uParam0)
{
	*uParam0 = 0;
}

void func_144()
{
}

int func_145()
{
	return 1;
}

int func_146()
{
	return 1;
}

int func_147(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_148()
{
	if (!func_63(1))
	{
		func_262(Local_303.f_9);
		func_136(1);
	}
}

void func_149()
{
	func_263();
}

void func_150()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_1[iVar0]))
		{
			Local_303.f_19.f_1[iVar0 /*4*/].f_1 = NETWORK::NET_TO_PED(Local_13.f_7.f_1[iVar0]);
			iVar1 = func_176(iVar0);
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				switch (func_224())
				{
					case 0:
					case 1:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
						}
						break;
					case 2:
					case 3:
						switch (iVar0)
						{
							case 0:
								PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
								WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
								break;
							case 1:
								PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(iVar1, 1);
								PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
								break;
						}
						break;
				}
			}
		}
		iVar0++;
	}
	iVar2 = 0;
	while (iVar2 <= 1)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_6[iVar2]))
		{
			Local_303.f_19.f_13[iVar2] = NETWORK::NET_TO_OBJ(Local_13.f_7.f_6[iVar2]);
		}
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4[iVar3]))
		{
			Local_303.f_19.f_10[iVar3 /*2*/].f_1 = NETWORK::NET_TO_VEH(Local_13.f_7.f_4[iVar3]);
			iVar4 = func_174(iVar3);
			switch (iVar3)
			{
				case 0:
					if (ENTITY::DOES_ENTITY_EXIST(iVar4))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
						{
							ENTITY::SET_ENTITY_HEADING(iVar4, func_264(iVar3));
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_303.f_19.f_13[0]))
							{
								func_266(Local_303.f_19.f_13[0], iVar4, func_265(iVar3), 0f, 0f, 1119092736 /* Float: 90f */, 0, 1, 0);
								if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(Local_303.f_19.f_13[0], true);
									GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(Local_303.f_19.f_13[0], 10f);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(Local_303.f_19.f_13[1]) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_303.f_19.f_13[1]))
							{
								func_266(Local_303.f_19.f_13[1], iVar4, func_267(iVar3), 0f, 0f, 0f, 0, 1, 0);
							}
						}
						VEHICLE::_0xCBF88256E44D5D39(iVar4, true);
						VEHICLE::_0xC325A6BAA62CF8A2(iVar4, true);
						AITRANSPORT::_SET_TRANSPORT_PRIORITY_SEAT(iVar4, 1);
						AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar4, 12, true);
					}
					break;
			}
		}
		iVar3++;
	}
	func_268();
}

void func_151()
{
}

void func_152()
{
}

void func_153()
{
	float fVar0;

	if (func_219(Local_303.f_15))
	{
		return;
	}
	if (func_269())
	{
		return;
	}
	if (func_270(Local_303.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_303.f_15);
		if (fVar0 < 1128792064)
		{
			func_138(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_137(4096);
			func_138(2048);
		}
		else
		{
			func_137(4096);
			func_137(2048);
		}
	}
}

void func_154()
{
	func_271();
	func_272();
	func_273();
}

void func_155()
{
	if (func_274())
	{
		func_138(8);
	}
	else
	{
		func_137(8);
	}
}

void func_156()
{
	func_275();
	func_276();
	func_277(Local_13.f_7);
	func_278();
	func_279();
	switch (Local_303.f_19)
	{
		case 0:
			func_280();
			break;
		case 1:
			func_281();
			break;
		case 3:
			func_282();
			break;
		case 6:
			func_283();
			break;
		case 5:
			func_284();
			break;
		case 4:
			func_285();
			break;
		case 7:
			func_286();
			break;
		case 8:
			func_287();
			break;
		case 9:
			func_288();
			break;
		case 11:
			func_289();
			break;
		case 10:
			func_290();
			break;
		case 12:
			func_291();
			break;
		case 13:
			func_292();
			break;
		case 14:
			func_293();
			break;
	}
}

void func_157()
{
	if (!func_121(8, 255))
	{
		func_138(16);
	}
	else
	{
		func_137(16);
	}
}

void func_158()
{
	int iVar0;

	Local_303.f_6 = -1;
	Local_303.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_303.f_5 = (Local_303.f_5 || Local_78[iVar0 /*7*/]);
			Local_303.f_6 = (Local_303.f_6 && Local_78[iVar0 /*7*/]);
		}
		iVar0++;
	}
}

void func_159()
{
	if ((func_63(1024) && !func_121(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_294(&Global_0, 1)))
	{
		func_138(16384);
	}
}

bool func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (iVar0 == 1)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(func_176(1), false);
		}
		func_177(iVar0);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_1[iVar0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_1[iVar0]))
		{
			PED::SET_PED_KEEP_TASK(func_176(iVar0), true);
			if (iVar0 != 0 || !PED::IS_PED_FLEEING(func_176(iVar0)))
			{
				iVar1 = NETWORK::NET_TO_ENT(Local_13.f_7.f_1[iVar0]);
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= 0)
	{
		func_178(iVar2);
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_7.f_4[iVar2]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_13.f_7.f_4[iVar2]))
		{
			iVar3 = NETWORK::NET_TO_ENT(Local_13.f_7.f_4[iVar2]);
			ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar3);
		}
		iVar0++;
	}
	func_173(0, 1);
	return true;
}

void func_161()
{
}

void func_162(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_303.f_194.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_303.f_194.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_163(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_164(int iParam0, int iParam1)
{
	return func_170(Local_303.f_194.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_165(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_166(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_296(func_295(Param0));
	iVar1 = func_297(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_298(Param0, &Var2, iParam2);
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

void func_167(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_299(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_300(iVar0);
}

void func_168(int iParam0, int iParam1)
{
	func_119(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_301(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_302(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_303(iParam0);
			break;
	}
}

void func_169(int iParam0)
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
	Var0 = { func_304(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_170(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_171(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_172(int iParam0)
{
	return func_170(Local_303.f_19.f_161, iParam0);
}

void func_173(bool bParam0, bool bParam1)
{
	int iVar0;

	if (bParam0)
	{
		if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
		{
			if (bParam1)
			{
				iVar0 = 256;
			}
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, iVar0, false);
			func_305(1);
		}
	}
	else if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
		func_306(1);
	}
}

int func_174(int iParam0)
{
	return Local_303.f_19.f_10[iParam0 /*2*/].f_1;
}

bool func_175(int iParam0, int iParam1)
{
	if (!func_307(iParam1, 1))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	if (func_170(Local_78[iParam1 /*7*/].f_1, iParam0))
	{
		return true;
	}
	return false;
}

int func_176(int iParam0)
{
	return Local_303.f_19.f_1[iParam0 /*4*/].f_1;
}

void func_177(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_19.f_1[iParam0 /*4*/]))
	{
		return;
	}
	MAP::REMOVE_BLIP(&(Local_303.f_19.f_1[iParam0 /*4*/]));
}

void func_178(int iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_19.f_10[iParam0 /*2*/]))
	{
		return;
	}
	MAP::REMOVE_BLIP(&(Local_303.f_19.f_10[iParam0 /*2*/]));
}

bool func_179(var uParam0)
{
	if (func_37(*uParam0))
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

int func_180(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_308(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_309(iParam1)) - 1);
	}
	bVar2 = func_37(*uParam0);
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

void func_181(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_310(bParam0);
			break;
		case 1:
			func_310(bParam0);
			break;
		case 2:
			func_310(bParam0);
			break;
		case 3:
			func_311(bParam0);
			break;
		case 4:
			func_310(bParam0);
			break;
		case 5:
			func_310(bParam0);
			break;
		case 6:
			func_311(bParam0);
			break;
		case 7:
			func_311(bParam0);
			break;
		case 8:
			func_311(bParam0);
			break;
		case 9:
			func_310(bParam0);
			break;
		default:
			func_183(bParam0);
			func_182(bParam0);
			break;
	}
}

void func_182(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_312(bParam0, iVar0);
		iVar0++;
	}
}

void func_183(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_184(bParam0, iVar0);
		iVar0++;
	}
}

void func_184(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_185(bool bParam0, int iParam1)
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
			func_313(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_314(bParam0);
			break;
		default:
			func_183(bParam0);
			func_182(bParam0);
			break;
	}
}

void func_186(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_312(bParam0, 0);
			break;
		case 1:
		case 2:
			func_312(bParam0, 1);
			func_312(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_312(bParam0, 0);
			func_312(bParam0, 2);
			break;
		case 8:
			func_312(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_312(bParam0, 1);
			break;
		default:
			func_182(bParam0);
			break;
	}
}

void func_187(bool bParam0, int iParam1)
{
	func_251(&(bParam0->f_25), iParam1);
}

void func_188(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_315(bParam0);
			break;
		case 1:
			func_316(bParam0);
			break;
		case 2:
			func_317(bParam0);
			break;
		case 3:
			func_318(bParam0);
			break;
		default:
			func_183(bParam0);
			func_182(bParam0);
			break;
	}
}

Vector3 func_189(int iParam0)
{
	if (!func_171(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_190(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_319(bParam0);
			break;
		case 1:
		case 2:
			func_320(bParam0);
			break;
		case 3:
		case 4:
			func_321(bParam0);
			break;
		default:
			func_182(bParam0);
			break;
	}
	func_183(bParam0);
}

void func_191(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_312(bParam0, 0);
			func_312(bParam0, 2);
			break;
		case 1:
			func_312(bParam0, 1);
			func_312(bParam0, 3);
			break;
		default:
			func_183(bParam0);
			func_182(bParam0);
			break;
	}
}

void func_192(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_184(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(bParam0, 0);
			break;
		default:
			func_184(bParam0, 0);
			break;
	}
	func_182(bParam0);
}

void func_193(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_184(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_184(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_184(bParam0, 2);
			break;
		default:
			func_183(bParam0);
			break;
	}
	func_182(bParam0);
}

void func_194(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_184(bParam0, 0);
			func_312(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(bParam0, 1);
			func_312(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(bParam0, 2);
			func_312(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_184(bParam0, 3);
			func_312(bParam0, 0);
			break;
	}
}

void func_195(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_184(bParam0, 0);
			func_312(bParam0, 0);
			break;
		case 2:
			func_184(bParam0, 1);
			func_312(bParam0, 0);
			break;
		case 3:
		case 4:
			func_184(bParam0, 2);
			func_312(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_184(bParam0, 3);
			func_312(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_184(bParam0, 4);
			func_312(bParam0, 1);
			break;
	}
}

void func_196(bool bParam0, int iParam1)
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
			func_184(bParam0, 3);
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
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			break;
		default:
			func_183(bParam0);
			break;
	}
	func_182(bParam0);
}

void func_197(bool bParam0, int iParam1)
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
			func_184(bParam0, 3);
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
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			break;
		default:
			func_183(bParam0);
			break;
	}
	func_182(bParam0);
}

void func_198(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_312(bParam0, 0);
			func_184(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_312(bParam0, 1);
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			func_184(bParam0, 2);
			break;
		default:
			func_312(bParam0, 0);
			func_184(bParam0, 0);
			break;
	}
}

void func_199(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_312(bParam0, 0);
			func_184(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_312(bParam0, 1);
			func_184(bParam0, 0);
			func_184(bParam0, 1);
			break;
		default:
			func_312(bParam0, 0);
			func_184(bParam0, 0);
			break;
	}
}

void func_200(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_182(bParam0);
			func_183(bParam0);
			break;
		default:
			func_182(bParam0);
			func_183(bParam0);
			break;
	}
}

int func_201(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_202(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_203(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_204(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_322(&Var1, iParam0) && func_323(&Var1, iParam1))
	{
		func_324(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_205(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_322(&Var1, iParam0) && func_323(&Var1, iParam1))
	{
		func_324(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_206(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_325(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_207(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_325(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

void func_208(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_2), 16384);
	}
	else
	{
		func_217(&(uParam0->f_2), 16384);
	}
}

void func_209(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_2), 2048);
	}
	else
	{
		func_217(&(uParam0->f_2), 2048);
	}
}

void func_210(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_2), 256);
	}
	else
	{
		func_217(&(uParam0->f_2), 256);
	}
}

void func_211(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 16);
	}
	else
	{
		func_249(uParam0, 1.504633E-36f);
		func_249(uParam0, 16);
	}
}

void func_212(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_249(&(uParam0->f_2), 128);
	}
	else
	{
		func_217(&(uParam0->f_2), 128);
	}
}

void func_213(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 256);
	}
	else
	{
		func_249(uParam0, 256);
	}
}

void func_214(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_217(uParam0, 2.524355E-29f);
	}
	else
	{
		func_249(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_217(uParam0, 2f);
	}
	else
	{
		func_249(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_217(uParam0, 1.084202E-19f);
	}
	else
	{
		func_249(uParam0, 1.084202E-19f);
	}
}

int func_215()
{
	var uVar0;

	uVar0 = func_326();
	return uVar0;
}

bool func_216(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_217(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_218(int iParam0)
{
	int iVar0;

	if (!func_171(iParam0))
	{
		return false;
	}
	iVar0 = func_327(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_219(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_220(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_221(struct<31> Param0)
{
	var uVar0;

	func_220(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_222(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_307(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_223(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_329(&(Local_13.f_7.f_4[iParam0]), func_258(iParam0), func_328(iParam0), func_264(iParam0), 1, 0, 0, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_224()
{
	return func_330();
}

int func_225(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_331(&(Local_13.f_7.f_6[iParam0]), func_259(iParam0), func_328(0), 1, 0))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

int func_226(int iParam0, var uParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_PEDS(1))
	{
		*uParam1 = 1;
		return 0;
	}
	if (!func_334(&(Local_13.f_7.f_1[iParam0]), func_256(iParam0), func_332(iParam0), func_333(iParam0), 1, 0, 0, 1, 1))
	{
		*uParam1 = 1;
		return 0;
	}
	return 1;
}

void func_227()
{
	func_116(2);
}

bool func_228(var uParam0)
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
		if (func_164(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_335(iVar2, uParam0, &bVar1))
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
			if (func_336(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_62[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_62[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_62[iVar2]);
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

bool func_229(int iParam0)
{
	return func_170(Local_303.f_5, iParam0);
}

bool func_230(int iParam0)
{
	return func_170(Local_303.f_6, iParam0);
}

bool func_231()
{
	if (Local_13.f_7 == 15)
	{
		return true;
	}
	return false;
}

void func_232()
{
	if (func_337())
	{
		if (Local_13.f_7 != 14)
		{
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
			func_338(14);
		}
	}
	if (func_339(4096))
	{
		func_338(14);
	}
}

void func_233()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_174(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	func_340(vVar1);
}

void func_234()
{
	if (func_269())
	{
		switch (func_224())
		{
			case 0:
			case 1:
				func_338(1);
				break;
			case 2:
			case 3:
				func_338(1);
				break;
			default:
				func_338(12);
				break;
		}
	}
}

void func_235()
{
	if (func_339(1) || func_339(2))
	{
		func_338(3);
	}
	if (func_339(16))
	{
		func_338(4);
	}
}

void func_236()
{
	func_341();
	func_342(0, func_174(0), 1092616192 /* Float: 10f */, 1, 0);
	if (!func_339(16))
	{
		if (func_339(2))
		{
			if (func_343(&(Local_303.f_19.f_55)))
			{
				func_344(&(Local_303.f_19.f_55));
			}
			if (func_343(&(Local_303.f_19.f_58)))
			{
				func_344(&(Local_303.f_19.f_58));
			}
			func_338(5);
		}
	}
	else
	{
		if (func_343(&(Local_303.f_19.f_55)))
		{
			func_344(&(Local_303.f_19.f_55));
		}
		if (func_343(&(Local_303.f_19.f_58)))
		{
			func_344(&(Local_303.f_19.f_58));
		}
		func_338(4);
	}
}

void func_237()
{
	func_342(0, func_174(0), 1092616192 /* Float: 10f */, 1, 0);
	if (!func_339(16))
	{
		if (func_339(4))
		{
			func_338(6);
		}
	}
	else
	{
		if (func_343(&(Local_303.f_19.f_55)))
		{
			func_344(&(Local_303.f_19.f_55));
		}
		if (func_343(&(Local_303.f_19.f_58)))
		{
			func_344(&(Local_303.f_19.f_58));
		}
		func_338(4);
	}
}

void func_238()
{
	if (Local_303.f_19.f_165 < 1106247680)
	{
		func_338(7);
	}
	if (func_339(8))
	{
		func_338(14);
	}
	if (func_339(16))
	{
		if (func_343(&(Local_303.f_19.f_55)))
		{
			func_344(&(Local_303.f_19.f_55));
		}
		if (func_343(&(Local_303.f_19.f_58)))
		{
			func_344(&(Local_303.f_19.f_58));
		}
		func_338(4);
	}
}

void func_239()
{
	if (func_339(32768))
	{
		func_338(10);
	}
}

void func_240()
{
	func_338(9);
}

void func_241()
{
	func_338(12);
}

void func_242()
{
	if (func_339(65536) || PED::IS_PED_IN_VEHICLE(func_176(0), func_174(0), false))
	{
		func_338(11);
	}
}

void func_243()
{
	if ((func_339(32) && func_339(512)) && func_339(256))
	{
		func_173(0, 1);
		func_338(12);
	}
}

void func_244()
{
	if (func_339(128))
	{
		func_338(13);
	}
}

void func_245()
{
	if (func_345(8192))
	{
		func_338(13);
	}
}

void func_246()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = func_174(0);
	if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar1, false) && !func_346(PLAYER::PLAYER_PED_ID(), 9.562565E-23f))
	{
		func_173(0, 1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, true, true))
		{
			if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				func_338(12);
			}
		}
		else
		{
			func_338(13);
		}
	}
	if (func_339(4096))
	{
		func_338(14);
	}
	if (func_345(1024))
	{
		func_338(15);
	}
}

void func_247()
{
	int iVar0;

	iVar0 = func_176(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && func_345(4194304))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(func_176(1)))
		{
			func_338(15);
		}
		else if (ENTITY::IS_ENTITY_DEAD(func_176(1)) && func_345(8388608))
		{
			func_338(15);
		}
	}
}

bool func_248(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_249(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_250(int iParam0)
{
	if (!func_171(iParam0))
	{
		return 0;
	}
	if (!func_218(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_251(var uParam0, int iParam1)
{
	func_347(uParam0, iParam1);
}

void func_252(var uParam0, int iParam1)
{
	func_348(uParam0, iParam1);
}

void func_253(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_349(&Var0, iParam0))
			{
				func_350(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_254(int iParam0)
{
}

void func_255(int iParam0)
{
}

int func_256(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -5.50233E+15f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1.816944E+35f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1.816944E+35f;
				case 1:
					return -5.50233E+15f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -5.50233E+15f;
				case 1:
					return -1.816944E+35f;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_257(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

int func_258(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return -3.23923E-10f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -5.869101E-25f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1.435948E-35f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -8.7656E+33f;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 6.21471E+18f;
		case 1:
			switch (func_258(0))
			{
				case joaat("CART03"):
					return -7.532279E+10f;
				case joaat("WAGON05X"):
					return 9.29372E-09f;
				default:
					break;
			}
			break;
	}
	return 0;
}

char* func_260(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script_re@arms_deal";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "AMB_REST_SIT@WORLD_HUMAN_SIT_GROUND@FALL_ASLEEP@FEMALE_A@SLEEPING@base";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "AMB_MISC@WORLD_HUMAN_pee@MALE_A@idle_a";
				case 1:
					return "script_re@stranded_rider";
				case 5:
					return "VEH_WAGON@STANDARD@FRONT@FR@IN_SEAT@MALE@EMOTIONS@PANIC@DIRECT@IDLE";
				case 2:
					return "script_re@stranded_rider";
				case 3:
					return "script_re@stranded_rider";
				case 4:
					return "ai_gestures@gen_male@standing@speaker";
				default:
					break;
			}
			return "";
	}
	return "";
}

bool func_261()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_303.f_194.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_351(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_303.f_194.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_303.f_194.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_303.f_194.f_3), iVar0);
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

void func_262(struct<2> Param0)
{
	if (func_297(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_297(Param0)))
	{
		STATS::_0x99230691875FC218(func_295(Param0), func_297(Param0), Global_34);
	}
}

void func_263()
{
	int iVar0;
	int iVar1;

	if (!func_222(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_352(iVar0, iVar1, 0);
		iVar0++;
	}
}

float func_264(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1118918817;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1125656651;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1122778481;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1120742932;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1026954363;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1029553521;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1117446472 /* Float: 77.44f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -1028680581;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1118918817;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1125656651;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1122778481;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1120742932;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -1026954363;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -1029553521;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1117446472 /* Float: 77.44f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return -1028680581;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

Vector3 func_265(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (func_258(iParam0))
			{
				case joaat("WAGON05X"):
					return -1084647014 /* Float: -0.85f */, 1063675494 /* Float: 0.9f */, 1068708659 /* Float: 1.4f */;
				case joaat("CART03"):
					return 1058642330 /* Float: 0.6f */, 1060320051 /* Float: 0.7f */, 1059481190 /* Float: 0.65f */;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_266(int iParam0, int iParam1, vector3 vParam2, vector3 vParam5, bool bParam8, bool bParam9, bool bParam10)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (ENTITY::IS_ENTITY_A_PED(iParam0))
			{
				if (PED::IS_PED_ON_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
				{
					PED::_REMOVE_PED_FROM_MOUNT(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0), true, false);
				}
			}
			if (!ENTITY::IS_ENTITY_ATTACHED(iParam0))
			{
				ENTITY::ATTACH_ENTITY_TO_ENTITY(iParam0, iParam1, 0, vParam2, vParam5, bParam8, bParam10, false, false, 2, true, bParam9, false);
			}
		}
	}
}

Vector3 func_267(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (func_258(iParam0))
			{
				case joaat("WAGON05X"):
					return 0f, -1102263091 /* Float: -0.2f */, 1045220557 /* Float: 0.2f */;
				case joaat("CART03"):
					return 0f, 0f, 1036831949 /* Float: 0.1f */;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_268()
{
	func_353(0);
	func_355(0, func_354(0));
	if (func_224() == 2 || func_224() == 3)
	{
		func_353(1);
		func_355(1, func_354(1));
	}
	if (func_224() == 2 || func_224() == 3)
	{
		func_355(1, func_354(1));
	}
	else
	{
		ENTITY::SET_ENTITY_COORDS(func_176(0), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_174(0), func_356(0)), true, true, true, false);
	}
}

bool func_269()
{
	return (func_122(32) || func_121(32, 255));
}

bool func_270(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_357(iParam0, 12648.71f) };
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

void func_271()
{
	func_358();
}

void func_272()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_359(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_273()
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
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_303.f_194.f_40)
	{
		bVar8 = true;
		Local_303.f_194.f_40 = !Local_303.f_194.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_303.f_194.f_30 >= 2)
		{
			Local_303.f_194.f_30 = 0;
		}
		iVar0 = Local_303.f_194.f_30;
		Local_303.f_194.f_30++;
		iVar9 = func_360(iVar0);
		iVar1 = Local_303.f_194.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_164(iVar9, 4))
		{
			func_352(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_78[iVar3 /*7*/].f_2.f_2[iVar0] > -1f)
			{
				Local_78[iVar3 /*7*/].f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_303.f_194.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_303.f_194.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_303.f_194.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_303.f_194.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_361(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_303.f_194.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_303.f_194.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_303.f_194.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_78[iVar3 /*7*/].f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_78[iVar3 /*7*/].f_2.f_1), iVar0);
				}
				func_362(&(Local_303.f_194.f_32[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_78[iVar3 /*7*/].f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_343(&(Local_303.f_194.f_32[iVar0 /*3*/])) || func_363(&(Local_303.f_194.f_32[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_344(&(Local_303.f_194.f_32[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_78[iVar3 /*7*/].f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_164(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_303.f_194.f_40, false, 256);
		}
		if (func_164(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_364(iVar9))
						{
							if (!func_335(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_365(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_164(iVar9, 8))
			{
				if (!func_364(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_303.f_194.f_31 != 0)
	{
		if (!func_366(1, 255))
		{
			func_367(1);
		}
	}
	else if (func_366(1, 255))
	{
		func_368(1);
	}
}

bool func_274()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_303.f_14))
	{
		return false;
	}
	if (func_369())
	{
		return false;
	}
	if (func_370(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_275()
{
	int iVar0;

	Local_303.f_19.f_159 = -1;
	Local_303.f_19.f_160 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_303.f_19.f_160 = (Local_303.f_19.f_160 || Local_78[iVar0 /*7*/].f_1);
			Local_303.f_19.f_159 = (Local_303.f_19.f_159 && Local_78[iVar0 /*7*/].f_1);
		}
		iVar0++;
	}
}

void func_276()
{
	if (func_337())
	{
		return;
	}
	if (func_371(func_176(0), 0, &(Local_303.f_19.f_18), &(Local_303.f_19.f_50), 0, 0))
	{
		func_372(0);
	}
	func_373();
}

void func_277(int iParam0)
{
	if (Local_303.f_19 != iParam0)
	{
		Local_303.f_19 = iParam0;
	}
}

void func_278()
{
	Local_303.f_19.f_165 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_303.f_19.f_1[0 /*4*/].f_1, false, false), ENTITY::GET_ENTITY_COORDS(Local_303.f_19.f_10[0 /*2*/].f_1, false, false));
	Local_303.f_19.f_166 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false), ENTITY::GET_ENTITY_COORDS(Local_303.f_19.f_1[0 /*4*/].f_1, false, false));
	if (func_224() == 2 || func_224() == 3)
	{
		Local_303.f_19.f_167 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Local_303.f_19.f_1[1 /*4*/].f_1, false, false), ENTITY::GET_ENTITY_COORDS(Local_303.f_19.f_10[0 /*2*/].f_1, false, false));
	}
}

void func_279()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -1315570756:
				func_374(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_280()
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar1 = func_176(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		fVar2 = Local_303.f_19.f_166;
		if (fVar2 < 1123680256)
		{
			func_375();
		}
		if (fVar2 < 1110704128)
		{
			func_376();
		}
		if (fVar2 < 1110704128)
		{
			func_376();
		}
		switch (func_224())
		{
			case 2:
			case 3:
				iVar0 = func_176(1);
				if (!PED::IS_PED_IN_VEHICLE(iVar0, func_174(0), false))
				{
					PED::SET_PED_INTO_VEHICLE(iVar0, func_174(0), 1);
				}
				break;
			case 0:
			case 1:
				ENTITY::SET_ENTITY_HEADING(iVar1, func_264(0));
				break;
		}
		if (func_377(iVar1, -2.793181E-34f, 1, 0))
		{
			TASK::TASK_PLAY_ANIM(iVar1, func_260(0), func_378(0), 1000f, -8f, -1, 1, 0f, false, 0, false, 0, false);
		}
	}
}

void func_281()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = func_176(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = func_174(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		fVar3 = ENTITY::GET_ENTITY_SPEED(iVar2);
		if (fVar3 > 1f)
		{
			func_341();
			func_379(0, 0);
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				func_380(2);
			}
			if (!func_339(1))
			{
				if (func_224() == 2 || func_224() == 3)
				{
					func_381(func_176(1), 5, 1);
				}
				if (func_342(0, iVar2, 1090519040 /* Float: 8f */, 1, 0))
				{
					func_380(1);
				}
			}
			if (func_382(0, 0))
			{
				func_380(16);
			}
		}
		else if (fVar3 <= 0f)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iVar2) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, true, true))
			{
				TASK::_TASK_VEHICLE_DRIVE_TO_POINT_2(iVar2, func_383(0), func_384(), 0.25f, 0);
				Local_303.f_19.f_163 = EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(2.616696E+07f, iVar2, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			}
		}
	}
}

void func_282()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar1 = func_174(0);
	func_341();
	func_177(0);
	func_379(0, 0);
	if (!func_175(4, 255))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, true, true))
		{
			if (func_339(2))
			{
				func_385();
			}
			if (!func_382(0, 0) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (!func_175(2, 255))
				{
					func_380(2);
				}
			}
			if (Local_303.f_19.f_166 > 1101004800 && !func_175(16384, 255))
			{
				func_380(16384);
			}
		}
		else
		{
			func_385();
			func_380(16);
		}
	}
}

void func_283()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_174(0), true, true))
	{
		func_386(0, 0);
		func_178(0);
		if (!func_339(4))
		{
			func_382(0, 0);
		}
		else if (func_172(4))
		{
			if (!func_172(8))
			{
				func_388(func_387(-8.839952E-30f, -2.940688E+24f), 1);
				func_305(8);
			}
		}
	}
	else if (!func_339(16))
	{
		func_385();
		func_380(16);
	}
	if (!func_175(2048, 255) && PED::IS_PED_IN_VEHICLE(iVar1, func_174(0), false))
	{
		switch (func_224())
		{
			case 0:
			case 1:
				Local_303.f_19.f_164 = func_389("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
			case 2:
			case 3:
				Local_303.f_19.f_164 = func_389("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_COACH", 10000, 0, 0, 0, 1);
				break;
			default:
				Local_303.f_19.f_164 = func_389("NB_RUNAWAY_WAGON_HELP_RETURN_WAGON_CART", 10000, 0, 0, 0, 1);
				break;
		}
		func_380(2048);
	}
	if (func_224() == 2 || func_224() == 3)
	{
		if (func_343(&(Local_303.f_19.f_58)) && (func_390(&(Local_303.f_19.f_58)) > 15000 || (!func_391(18) && func_390(&(Local_303.f_19.f_58)) > 2000)))
		{
			if (!func_392(1))
			{
				if (!func_391(18))
				{
					if (func_393(iVar0, iVar1, 18, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(19))
				{
					if (func_393(iVar0, iVar1, 19, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(20))
				{
					if (func_393(iVar0, iVar1, 20, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(21))
				{
					if (func_393(iVar0, iVar1, 21, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(22))
				{
					if (func_393(iVar0, iVar1, 22, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(23))
				{
					if (func_393(iVar0, iVar1, 23, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(24))
				{
					if (func_393(iVar0, iVar1, 24, 1.818904E-28f, 0))
					{
						func_362(&(Local_303.f_19.f_58));
					}
				}
				else if (!func_391(25))
				{
					func_393(iVar0, iVar1, 25, 1.818904E-28f, 0);
				}
			}
			if (func_391(25) && func_390(&(Local_303.f_19.f_58)) > 17500)
			{
				if (!func_175(8, 255))
				{
					func_380(8);
					func_344(&(Local_303.f_19.f_58));
				}
			}
		}
		else if (!func_343(&(Local_303.f_19.f_58)))
		{
			func_394(&(Local_303.f_19.f_58), 0);
		}
	}
}

void func_284()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_176(1);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	iVar2 = func_174(0);
	func_341();
	if (!func_175(4, 255))
	{
		if (!func_391(15))
		{
			AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
			if (func_393(iVar0, iVar1, 15, 1.818904E-28f, 0))
			{
				func_362(&(Local_303.f_19.f_58));
			}
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, true, true))
		{
			if (!func_339(4))
			{
				func_382(0, 0);
			}
			if (PED::IS_PED_IN_VEHICLE(iVar1, iVar2, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar2, -1) == iVar1 && !func_175(4, 255))
				{
					func_380(4);
				}
			}
		}
		else
		{
			func_385();
			func_380(16);
		}
	}
}

void func_285()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_176(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_382(0, 1);
	func_395();
	func_62();
	if (Local_303.f_19.f_165 < 1110704128)
	{
		if (func_377(iVar0, -2.793181E-34f, 1, 0) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iVar0, func_260(4), func_378(4), 1))
		{
			TASK::TASK_PLAY_UPPER_ANIM_FACING_ENTITY(iVar0, func_260(4), func_378(4), iVar1, -1, 8f, -8f, 1, 0f, false, false, -1f, 0, 0, -1f);
		}
	}
	func_177(0);
	func_178(0);
	if (Local_303.f_19.f_166 < 1106247680 && !func_175(32768, 255))
	{
		func_380(32768);
	}
	switch (func_224())
	{
		case 2:
		case 3:
			iVar2 = func_176(1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !VEHICLE::IS_VEHICLE_DRIVEABLE(func_174(0), false, false))
			{
				switch (func_215())
				{
					case 7:
						if (!ENTITY::IS_ENTITY_DEAD(iVar2))
						{
							func_396(iVar2, 0, 0);
						}
						break;
					default:
						if (!func_175(2.350989E-38f, 255))
						{
							TASK::CLEAR_SEQUENCE_TASK(&(Local_303.f_19.f_174));
							TASK::_0x23767D80C7EED7C6(&(Local_303.f_19.f_174), 5.389304f);
							TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
							TASK::TASK_WALK_AWAY(0, iVar0);
							TASK::TASK_WANDER_STANDARD(0, 40000f, 1);
							TASK::CLOSE_SEQUENCE_TASK(Local_303.f_19.f_174);
							func_380(2.350989E-38f);
						}
						else if (func_345(2.350989E-38f) && !func_172(16))
						{
							if (func_377(iVar2, 3.034861E-30f, 1, 0) && !func_392(1))
							{
								func_393(iVar2, iVar0, 36, 1.818904E-28f, 0);
								TASK::TASK_PERFORM_SEQUENCE(iVar2, Local_303.f_19.f_174);
								if (!func_343(&(Local_303.f_19.f_171)))
								{
									func_394(&(Local_303.f_19.f_171), 0);
								}
								func_305(16);
							}
						}
						break;
				}
			}
			break;
	}
}

void func_286()
{
}

void func_287()
{
}

void func_288()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = func_174(0);
	func_178(0);
	if (!func_391(8))
	{
		AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
		func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 8, 1.818904E-28f, 0);
	}
	if (!func_339(65536))
	{
		if (func_224() != 0)
		{
			if (func_377(iVar0, -2.815016E-26f, 1, 0))
			{
				TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
				func_380(65536);
			}
		}
		else if (func_377(iVar0, -3.42872E-34f, 1, 0))
		{
			TASK::TASK_GOTO_ENTITY_OFFSET(iVar0, iVar1, -1, 0.5f, 0f, 1.5f, 0);
			func_380(65536);
		}
	}
	switch (func_224())
	{
		case 2:
		case 3:
			if ((!ENTITY::IS_ENTITY_DEAD(func_176(1)) && !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false, false)) && ENTITY::GET_ENTITY_SPEED(iVar1) <= 0f)
			{
				if (!func_339(131072))
				{
					if (!func_175(9.403955E-38f, 255))
					{
						TASK::CLEAR_SEQUENCE_TASK(&(Local_303.f_19.f_174));
						TASK::_0x23767D80C7EED7C6(&(Local_303.f_19.f_174), 1.501846E+21f);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 64);
						TASK::TASK_WALK_AWAY(0, iVar0);
						TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
						TASK::CLOSE_SEQUENCE_TASK(Local_303.f_19.f_174);
						func_380(9.403955E-38f);
					}
					else if (func_345(9.403955E-38f))
					{
						if (func_377(func_176(1), 3.034861E-30f, 1, 0))
						{
							TASK::TASK_PERFORM_SEQUENCE(func_176(1), Local_303.f_19.f_174);
							func_393(func_176(1), iVar0, 36, 1.818904E-28f, 0);
							func_380(131072);
						}
					}
				}
			}
			break;
	}
}

void func_289()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_176(0);
	iVar1 = func_174(0);
	iVar2 = func_176(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	func_178(0);
	if (!PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false) && !func_346(iVar3, 9.562565E-23f))
	{
		func_173(0, 1);
	}
	if (func_339(32))
	{
		func_397();
		func_62();
	}
	if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		func_177(0);
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			func_173(1, 1);
			if (!func_343(&(Local_303.f_19.f_55)))
			{
				func_394(&(Local_303.f_19.f_55), 0);
			}
			else if (func_390(&(Local_303.f_19.f_55)) >= 2000)
			{
				if (!func_175(256, 255))
				{
					if (func_377(iVar3, 9.562565E-23f, 1, 0))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 1, 0);
						func_380(256);
					}
				}
				else if (!func_175(32, 255))
				{
					func_398();
				}
			}
		}
		else
		{
			if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
			{
				if (func_377(iVar0, 3.55571E-26f, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (!func_175(32, 255))
			{
				AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar1, 6, false);
				func_398();
			}
			func_380(256);
		}
	}
	else
	{
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar3));
		if ((ENTITY::GET_ENTITY_SPEED(iVar1) <= 1036831949 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, 0) == iVar3) && func_346(iVar0, -2.815016E-26f))
		{
			if (!AITRANSPORT::IS_PED_EXITING_TRANSPORT(iVar3, iVar1) && !func_346(iVar3, 9.562565E-23f))
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
				{
					func_173(1, 1);
				}
				else
				{
					TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
				}
			}
		}
		if (func_224() == 0)
		{
			if (ENTITY::GET_ENTITY_SPEED(iVar1) <= 1036831949 && func_399(iVar3, iVar0, 5f, 1, 1))
			{
				if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
				{
					if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
					{
						func_173(1, 1);
						func_400(256);
					}
					else if (!func_175(256, 255))
					{
						TASK::TASK_LEAVE_VEHICLE(iVar3, iVar1, 65, 0);
						func_380(256);
					}
				}
				else
				{
					AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(iVar1, 6, true);
					if (func_377(iVar0, -2.815016E-26f, 1, 0))
					{
						TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, -1, 1.5f, 8388673, 0);
					}
				}
			}
		}
		else if (func_377(iVar0, -2.815016E-26f, 1, 0))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, -1, 0, 1.5f, 8388673, 0);
		}
	}
	switch (func_224())
	{
		case 0:
		case 1:
			if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !func_339(512))
			{
				if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, true))
				{
					func_393(iVar0, iVar3, 33, 1.818904E-28f, 0);
					func_380(512);
				}
			}
			break;
		case 2:
		case 3:
			if (!func_392(1))
			{
				if (!func_391(26))
				{
					func_393(iVar2, iVar0, 26, 1.818904E-28f, 0);
				}
				else if (PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false) && !func_175(512, 255))
				{
					if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, true))
					{
						func_393(iVar0, iVar3, 33, 1.818904E-28f, 0);
						func_380(512);
					}
				}
			}
			break;
	}
}

void func_290()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (MAP::DOES_BLIP_EXIST(Local_303.f_19.f_10[0 /*2*/]))
	{
		MAP::REMOVE_BLIP(&(Local_303.f_19.f_10[0 /*2*/]));
	}
	func_395();
	if (Local_303.f_19.f_166 <= 1101004800)
	{
		if (!func_339(128))
		{
			if (!func_392(1))
			{
				if (func_175(16384, 255))
				{
					func_393(iVar0, iVar1, 11, 1.818904E-28f, 0);
				}
				else
				{
					func_393(iVar0, iVar1, 41, 1.818904E-28f, 0);
				}
				func_380(128);
			}
		}
	}
	else if (func_339(128))
	{
		if (!func_343(&(Local_303.f_19.f_55)))
		{
			func_362(&(Local_303.f_19.f_55));
		}
		else if (func_390(&(Local_303.f_19.f_55)) > 20000)
		{
			func_380(128);
		}
	}
}

void func_291()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = func_174(0);
	if (func_172(1))
	{
		func_173(0, 1);
	}
	if (!PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
	{
		if ((func_377(iVar0, -2.815016E-26f, 1, 0) && ENTITY::DOES_ENTITY_EXIST(iVar1)) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, true, true))
		{
			TASK::TASK_ENTER_VEHICLE(iVar0, iVar1, 20000, -1, 2f, 1, 0);
		}
	}
	else if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) != iVar0)
	{
		if (func_377(iVar0, 3.55571E-26f, 1, 0))
		{
			TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
		}
	}
	else if (!func_175(8192, 255))
	{
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), iVar1, false))
		{
			if (!func_392(1))
			{
				if (!func_391(9))
				{
					func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 9, 1.818904E-28f, 0);
				}
				func_380(8192);
			}
		}
	}
}

void func_292()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_176(0);
	iVar1 = func_174(0);
	iVar2 = func_176(1);
	iVar3 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_172(1))
	{
		func_173(0, 1);
	}
	func_395();
	if (!func_175(4096, 255))
	{
		if (PED::IS_PED_IN_VEHICLE(iVar3, iVar1, false))
		{
			if (!func_392(1))
			{
				func_393(iVar0, iVar3, 37, 1.818904E-28f, 0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar2))
				{
					func_393(iVar2, iVar3, 38, 1.818904E-28f, 0);
				}
				func_380(4096);
			}
			else
			{
				AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, true, true)) && PED::IS_PED_IN_VEHICLE(iVar0, iVar1, false))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar1, -1) == iVar0)
				{
					if (func_377(iVar0, -3.839713E+29f, 1, 0))
					{
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, -8.657245E-33f);
						func_177(0);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iVar0, iVar1, 3f, 1.598697E-36f);
					}
					if (!func_343(&(Local_303.f_19.f_171)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						func_394(&(Local_303.f_19.f_171), 0);
					}
				}
				else if (func_377(iVar0, 3.55571E-26f, 1, 0))
				{
					TASK::TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(iVar0, iVar1);
				}
			}
			else if (func_377(iVar0, -0.004996275f, 1, 0) && !func_392(1))
			{
				if (!func_391(12))
				{
					func_393(iVar0, iVar3, 12, 1.818904E-28f, 0);
				}
				func_177(0);
				if (!func_392(1) || func_391(12))
				{
					TASK::TASK_WANDER_STANDARD(iVar0, 40000f, 0);
					if (!func_343(&(Local_303.f_19.f_171)) && ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
					{
						func_394(&(Local_303.f_19.f_171), 0);
					}
				}
			}
		}
		switch (func_224())
		{
			case 0:
			case 1:
				if (func_346(iVar0, -3.839713E+29f))
				{
					if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 1101004800)
					{
						if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
						{
							if (func_343(&(Local_303.f_19.f_171)))
							{
								if (func_390(&(Local_303.f_19.f_171)) >= 15000)
								{
									if (!func_391(13))
									{
										func_393(iVar0, iVar3, 13, 1.818904E-28f, 0);
										func_362(&(Local_303.f_19.f_171));
									}
									else
									{
										func_380(4096);
									}
								}
							}
						}
					}
					else if (!func_175(1024, 255))
					{
						func_380(1024);
					}
				}
				break;
			case 2:
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, true, true))
				{
					if (!func_392(1))
					{
						func_393(iVar2, iVar0, 35, 1.818904E-28f, 0);
						if (!func_392(1))
						{
							if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar3, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 1101004800)
							{
								if (ENTITY::GET_ENTITY_SPEED(iVar1) > 0f)
								{
									if (func_343(&(Local_303.f_19.f_171)))
									{
										if (func_390(&(Local_303.f_19.f_171)) >= 15000)
										{
											if (!func_391(13))
											{
												func_393(iVar0, iVar3, 13, 1.818904E-28f, 0);
												func_362(&(Local_303.f_19.f_171));
											}
											else
											{
												func_380(4096);
											}
										}
									}
								}
							}
							else if (!func_175(1024, 255))
							{
								func_380(1024);
							}
						}
					}
				}
				break;
		}
	}
}

void func_293()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = func_176(1);
	func_62();
	func_373();
	if (ENTITY::DOES_ENTITY_EXIST(func_174(0)))
	{
		AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(func_174(0), 6, false);
	}
	if (func_172(1) && !PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		func_173(0, 1);
	}
	func_178(0);
	if (!func_339(64))
	{
		if (func_121(64, 255))
		{
			if (func_339(32))
			{
				func_401(-4.615115E-09f, 1, 0);
			}
			func_401(-4.615115E-09f, 1, 0);
			func_380(64);
		}
	}
	if (!func_339(262144) && AUDIO::_IS_ANY_CONVERSATION_PLAYING(true))
	{
		AUDIO::_STOP_ALL_SCRIPTED_CONVERSIONS(true, false, false);
	}
	switch (func_224())
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_177(0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (func_402(&(Local_303.f_19.f_18)) == iVar1 || func_175(16, 255))
				{
					if (PED::IS_PED_IN_VEHICLE(iVar1, func_174(0), false))
					{
						func_393(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 40, 1.818904E-28f, 0);
					}
					else
					{
						func_393(iVar1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 39, 1.818904E-28f, 0);
					}
				}
				if (PED::IS_PED_IN_VEHICLE(iVar1, func_174(0), false))
				{
					if (func_377(iVar1, -1.283316E+09f, 1, 0))
					{
						TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 64);
					}
				}
				else if (func_377(iVar1, 2.40763E-20f, 1, 0))
				{
					TASK::TASK_FLEE_COORD(iVar1, ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 3, 131072, -1f, -1, 0);
					PED::SET_PED_KEEP_TASK(iVar1, true);
				}
			}
			if (!func_339(262144))
			{
				if ((!func_175(262144, 255) && func_339(2097152)) && ENTITY::DOES_ENTITY_EXIST(func_403(func_174(0), 4)))
				{
					if (ENTITY::IS_ENTITY_DEAD(func_403(func_174(0), 4)) && func_404(func_403(func_174(0), 4), PLAYER::PLAYER_PED_ID()))
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 1.818904E-28f, 0);
						func_380(262144);
					}
					if (!func_175(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_403(func_174(0), 4), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, true))
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 1.818904E-28f, 0);
						func_380(262144);
					}
				}
				if ((!func_175(262144, 255) && func_339(2097152)) && ENTITY::DOES_ENTITY_EXIST(func_403(func_174(0), 5)))
				{
					if (ENTITY::IS_ENTITY_DEAD(func_403(func_174(0), 5)) && func_404(func_403(func_174(0), 5), PLAYER::PLAYER_PED_ID()))
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 32, 1.818904E-28f, 0);
						func_380(262144);
					}
					if (!func_175(262144, 255) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(func_403(func_174(0), 5), PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), true, true))
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 31, 1.818904E-28f, 0);
						func_380(262144);
					}
				}
				if (func_339(1048576))
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(func_174(0), false, false))
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 29, 1.818904E-28f, 0);
						func_380(262144);
					}
					else
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 30, 1.818904E-28f, 0);
						func_380(262144);
					}
				}
				if (!func_175(262144, 255))
				{
					if (Local_303.f_19.f_50 == 4 && PED::IS_PED_IN_VEHICLE(iVar0, func_174(0), false))
					{
					}
					else
					{
						func_393(iVar0, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 28, 1.818904E-28f, 0);
						func_380(262144);
					}
				}
			}
			if (func_377(iVar0, 2.40763E-20f, 1, 0))
			{
				TASK::TASK_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, 0);
				PED::SET_PED_KEEP_TASK(iVar0, true);
			}
			break;
		default:
			func_386(0, 3.959886E-05f);
			if (func_377(iVar0, -7.366091E-38f, 1, 0))
			{
				TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1f);
			}
			break;
	}
}

bool func_294(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

int func_295(var uParam0, var uParam1)
{
	return uParam0;
}

int func_296(int iParam0)
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

int func_297(struct<2> Param0)
{
	return func_405(Param0);
}

void func_298(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_295(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_407(func_406(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_203(iVar5) == func_406(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_408(iVar4);
			if (!func_409(iVar6, 0))
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

int func_299(int iParam0, int iParam1)
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
			func_31(&Var1, iVar32, -1, -1, 255);
			iVar0 = (iVar0 + Var1);
		}
		iVar33++;
	}
	return -1;
}

void func_300(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_410(&Var0);
}

var func_301(int iParam0)
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

var func_302(int iParam0)
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

var func_303(int iParam0)
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

struct<2> func_304(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_411(-1.11244E+21f);
		case 2:
			return func_411(-0.03766548f);
		case 3:
			return func_411(20967.98f);
		case 4:
			return func_411(20967.98f);
	}
	return Var0;
}

void func_305(int iParam0)
{
	func_217(&(Local_303.f_19.f_161), iParam0);
}

void func_306(int iParam0)
{
	func_249(&(Local_303.f_19.f_161), iParam0);
}

bool func_307(int iParam0, bool bParam1)
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

int func_308(int iParam0)
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

int func_309(int iParam0)
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

void func_310(bool bParam0)
{
	func_184(bParam0, 0);
	func_184(bParam0, 1);
	func_184(bParam0, 3);
	func_182(bParam0);
}

void func_311(bool bParam0)
{
	func_183(bParam0);
	func_412(bParam0, 0, 3);
}

void func_312(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_313(bool bParam0)
{
	func_184(bParam0, 0);
	func_312(bParam0, 0);
	func_312(bParam0, 1);
	func_312(bParam0, 4);
	func_312(bParam0, 5);
}

void func_314(bool bParam0)
{
	func_184(bParam0, 1);
	func_312(bParam0, 2);
	func_312(bParam0, 3);
	func_312(bParam0, 6);
	func_312(bParam0, 7);
	func_187(bParam0, 2);
}

void func_315(bool bParam0)
{
	func_184(bParam0, 0);
	func_312(bParam0, 0);
	func_312(bParam0, 1);
	func_312(bParam0, 2);
}

void func_316(bool bParam0)
{
	func_184(bParam0, 1);
	func_182(bParam0);
}

void func_317(bool bParam0)
{
	func_184(bParam0, 2);
	func_312(bParam0, 3);
}

void func_318(bool bParam0)
{
	func_184(bParam0, 3);
	func_312(bParam0, 4);
}

void func_319(bool bParam0)
{
	func_312(bParam0, 0);
	func_312(bParam0, 1);
}

void func_320(bool bParam0)
{
	func_312(bParam0, 2);
	func_312(bParam0, 3);
}

void func_321(bool bParam0)
{
	func_312(bParam0, 4);
	func_312(bParam0, 5);
}

bool func_322(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_323(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_324(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_325(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

var func_326()
{
	return Local_303.f_2;
}

int func_327(int iParam0)
{
	if (!func_171(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

Vector3 func_328(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1148934858, 1137013218, 1121192903;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1152856182, -1001569757, 1112077029;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997910065, -1004109785, 1116805505;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -994648458, -990823555, 1111600320;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979639716, -982260342, -1123641291;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986896496, -986216424, 1115795354;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -996723831, -991787701, 1114960149;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -992649275, -1005503634, 1125510675;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1145618525, -1005440328, 1117693265;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1155418000, -992449668, 1111562786;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1148934858, 1137013218, 1121192903;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1152856182, -1001569757, 1112077029;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997910065, -1004109785, 1116805505;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -994648458, -990823555, 1111600320;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979639716, -982260342, -1123641291;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986896496, -986216424, 1115795354;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -996723831, -991787701, 1114960149;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -992649275, -1005503634, 1125510675;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1145618525, -1005440328, 1117693265;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1155418000, -992449668, 1111562786;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_329(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	if (bParam6)
	{
		if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			return false;
		}
	}
	if (!func_257(iParam1))
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
	if (func_413(iParam1))
	{
		*uParam0 = NETWORK::VEH_TO_NET(VEHICLE::_CREATE_MISSION_TRAIN(0.4263186f, vParam2, true, false, true, true));
	}
	else if (func_414(iParam1))
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

var func_330()
{
	return Local_303.f_3;
}

bool func_331(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_257(iParam1))
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

Vector3 func_332(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(func_174(0), func_356(0));
				default:
					break;
			}
			break;
		case 2:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1148849262, 1137722389, 1121441232;
						case 1:
							return 1148974344, 1137008456, 1121185602;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1152804146, -1001644392, 1112224563 /* Float: 50.8f */;
						case 1:
							return 1152847799, -1001608208, 1112104554;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997885153, -1004194383, 1116983670;
						case 1:
							return -997780986, -1003636715, 1116565144;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -994519901, -990839380, 1112148777;
						case 1:
							return -995123411, -990461394, 1110299692;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979658858, -982123199, -1080395584;
						case 1:
							return -979675297, -982250443, 1047889476;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986804823, -986295601, 1115804223;
						case 1:
							return -986819665, -986297610, 1115800913;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -996759577, -991600587, 1114643657;
						case 1:
							return -996773980, -991604981, 1114640873;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -992675090, -1005720711, 1125605984;
						case 1:
							return -992731363, -1005674533, 1125525458;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1145238777, -1005927580, 1118018365;
						case 1:
							return 1145442864, -1005653346, 1117328774;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1155513363, -992541818, 1111287931;
						case 1:
							return 1155540538, -992529283, 1111206226;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1148850169, 1137706562, 1121441808;
						case 1:
							return 1148974344, 1137008456, 1121185602;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1152789849, -1001656214, 1112392912;
						case 1:
							return 1152847799, -1001608208, 1112104554;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997868453, -1003551369, 1116361928;
						case 1:
							return -997780986, -1003636715, 1116565144;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -994493075, -990812676, 1112160626;
						case 1:
							return -995123411, -990461394, 1110299692;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979669257, -982234861, -1148093077;
						case 1:
							return -979675297, -982250443, 1047889476;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986797530, -986311943, 1115756324;
						case 1:
							return -986819665, -986297610, 1115800913;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -996758836, -991608052, 1114664319;
						case 1:
							return -996773980, -991604981, 1114640873;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -992675866, -1005706497, 1125595592;
						case 1:
							return -992731363, -1005674533, 1125525458;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1145375919, -1005647123, 1117340193;
						case 1:
							return 1145442864, -1005653346, 1117328774;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1155524551, -992530121, 1111225391;
						case 1:
							return 1155540538, -992529283, 1111206226;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_333(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1118918817;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1124766240;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1119496438 /* Float: 93.08f */;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1047794811;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1127474790 /* Float: 179.9f */;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1096883896 /* Float: 14.07f */;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1108583383 /* Float: 36.91f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1074874286 /* Float: 2.27f */;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1118918817;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1124766240;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1119496438 /* Float: 93.08f */;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1047794811;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1127474790 /* Float: 179.9f */;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1096883896 /* Float: 14.07f */;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1108583383 /* Float: 36.91f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1074874286 /* Float: 2.27f */;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1127825447;
						case 1:
							return 1117566992;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1135676205;
						case 1:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1135392827;
						case 1:
							return 1124766240;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1135515818;
						case 1:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1134370111;
						case 1:
							return 1119496438 /* Float: 93.08f */;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1133706432;
						case 1:
							return -1047794811;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1134898047;
						case 1:
							return 1127474790 /* Float: 179.9f */;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1130792668;
						case 1:
							return -1021979525;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1128369730;
						case 1:
							return 1108583383 /* Float: 36.91f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1119706468;
						case 1:
							return -1023482266;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1090827007;
						case 1:
							return 1117566992;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1132830215;
						case 1:
							return 1129183150;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1124766240;
						case 1:
							return 1124766240;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1134943863;
						case 1:
							return 1130403850;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1119496438 /* Float: 93.08f */;
						case 1:
							return 1119496438 /* Float: 93.08f */;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1047794811;
						case 1:
							return -1047794811;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1127474790 /* Float: 179.9f */;
						case 1:
							return 1127474790 /* Float: 179.9f */;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1096883896 /* Float: 14.07f */;
						case 1:
							return -1021979525;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1108583383 /* Float: 36.91f */;
						case 1:
							return 1108583383 /* Float: 36.91f */;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1074874286 /* Float: 2.27f */;
						case 1:
							return -1023482266;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

bool func_334(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_257(iParam1))
	{
		return false;
	}
	iVar0 = func_415(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

bool func_335(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_303.f_15 };
	iVar7 = 0;
	iVar8 = func_351(iParam0);
	iVar9 = func_416(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_62[iParam0]))
		{
			iVar9 = func_416(iParam0);
			fVar0 = func_417(iParam0);
			if (!func_170(Local_303.f_194.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_418(iParam0)) };
			}
			else
			{
				vVar1 = { func_418(iParam0) };
			}
			if (!func_334(&(Local_13.f_62[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_62[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_164(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_419(iVar7, 1);
					}
					if (func_420(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_421(iParam0))
						{
							if (func_420(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_336(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_62[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_62[iParam0]);
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
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_13.f_62[iParam0])))
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

bool func_336(int iParam0)
{
	return func_164(iParam0, 128);
}

bool func_337()
{
	return (func_122(64) || func_121(64, 255));
}

void func_338(int iParam0)
{
	if (Local_13.f_7 != iParam0)
	{
		Local_13.f_7 = iParam0;
	}
}

bool func_339(int iParam0)
{
	return func_170(Local_303.f_19.f_160, iParam0);
}

void func_340(vector3 vParam0)
{
	if (!func_118(Local_303.f_13))
	{
		func_119(&(Local_303.f_13));
	}
	if (func_120(Local_303.f_13) < Global_1901671.f_242.f_71)
	{
		return;
	}
	func_422(Local_303.f_9, vParam0, 0, Local_303.f_12);
	func_143(&(Local_303.f_13));
}

void func_341()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar0 = func_176(0);
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	fVar3 = Local_303.f_19.f_166;
	if (fVar3 < 1110704128 || !func_391(5))
	{
		if (func_343(&(Local_303.f_19.f_55)))
		{
			if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar0, false))
			{
				if (func_390(&(Local_303.f_19.f_55)) > 4000 || !func_391(5))
				{
					if (!func_391(0))
					{
						if (func_393(func_176(0), iVar2, 0, 1.818904E-28f, 0))
						{
							func_362(&(Local_303.f_19.f_55));
						}
					}
					else if (!func_391(5))
					{
						if (func_381(iVar0, 2, 0))
						{
							if (func_393(iVar0, iVar2, 5, 2.301389E+24f, 1))
							{
								func_362(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (!func_391(6))
					{
						if (func_381(iVar0, 3, 0))
						{
							if (func_393(iVar0, iVar2, 6, 2.301389E+24f, 1))
							{
								func_362(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (!func_391(7))
					{
						if (func_381(iVar0, 3, 0))
						{
							if (func_393(iVar0, iVar2, 7, 2.301389E+24f, 1))
							{
								func_362(&(Local_303.f_19.f_55));
							}
						}
					}
					else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), ENTITY::GET_ENTITY_COORDS(iVar0, true, false)) <= 1101004800)
					{
						if (!func_391(34))
						{
							if (func_393(iVar0, iVar2, 34, 2.301389E+24f, 1))
							{
								func_344(&(Local_303.f_19.f_55));
							}
						}
					}
				}
			}
		}
		else
		{
			func_362(&(Local_303.f_19.f_55));
		}
	}
	if (func_224() == 2 || func_224() == 3)
	{
		iVar1 = func_176(1);
		fVar3 = Local_303.f_19.f_167;
		if (fVar3 < 1110704128)
		{
			if (func_343(&(Local_303.f_19.f_58)))
			{
				if (func_390(&(Local_303.f_19.f_58)) > 4000 || (!func_391(2) && func_390(&(Local_303.f_19.f_58)) > 1000))
				{
					if (!AUDIO::_IS_PED_IN_ANY_CONVERSATION(iVar1, true))
					{
						if (!func_339(1))
						{
							if (!func_391(1))
							{
								if (func_393(iVar1, iVar2, 1, 1.818904E-28f, 0))
								{
									func_362(&(Local_303.f_19.f_58));
								}
							}
						}
						else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(func_174(0), false, false), func_383(0)) < 1097859072)
						{
							if (!func_391(17))
							{
								func_393(iVar1, iVar2, 17, 2.301389E+24f, 1);
							}
						}
						else if (!func_391(2))
						{
							if (func_393(iVar1, iVar2, 2, 2.301389E+24f, 1))
							{
								func_362(&(Local_303.f_19.f_58));
							}
						}
						else if (!func_391(3))
						{
							if (func_393(iVar1, iVar2, 3, 2.301389E+24f, 1))
							{
								func_362(&(Local_303.f_19.f_58));
							}
						}
						else if (!func_391(4))
						{
							if (func_393(iVar1, iVar2, 4, 2.301389E+24f, 1))
							{
								func_344(&(Local_303.f_19.f_58));
							}
						}
					}
				}
			}
			else
			{
				func_362(&(Local_303.f_19.f_58));
			}
		}
	}
}

bool func_342(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_176(iParam0);
	if (!func_339(1))
	{
		if (func_423(iVar0, func_332(iParam0), iParam2, 1, 1))
		{
			if (func_377(iVar0, 672823.8f, 1, 0))
			{
				TASK::TASK_GO_TO_ENTITY(iVar0, iParam1, -1, 0.01f, 3f, 0.1f, 0);
			}
		}
		else if (bParam4 || func_381(iVar0, iParam3, 0))
		{
			func_380(1);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_343(var uParam0)
{
	return func_424(*uParam0, 1);
}

void func_344(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_345(int iParam0)
{
	return func_170(Local_303.f_19.f_159, iParam0);
}

bool func_346(int iParam0, int iParam1)
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

void func_347(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_348(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_349(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_303.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_303)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_303.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_303.f_3)
	{
		return false;
	}
	return true;
}

void func_350(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_9;
	switch (iVar0)
	{
		case 1146780397:
			func_425(uParam0->f_11);
			break;
	}
}

int func_351(int iParam0)
{
	return Local_303.f_194.f_7[iParam0 /*11*/].f_3;
}

void func_352(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_351(iParam0);
	bVar3 = func_307(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_303.f_194.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_62[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_62[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_303.f_194.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_78[iParam1 /*7*/].f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_78[iParam1 /*7*/].f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_336(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_62[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_62[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_62[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_426(iVar1, 1f, 0);
					sVar0 = func_427(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_428(iVar1, sVar0, 1);
					}
				}
				if (func_420(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_421(iParam0))
					{
						if (func_420(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_303.f_194.f_5), iParam0);
				if (bParam2)
				{
					func_429(iParam0);
				}
			}
		}
	}
}

void func_353(int iParam0)
{
	float fVar0;
	int iVar1;

	fVar0 = func_430(iParam0);
	iVar1 = func_176(iParam0);
	PED::_EQUIP_META_PED_OUTFIT(iVar1, fVar0);
	PED::_UPDATE_PED_VARIATION(iVar1, false, true, true, true, false);
}

char* func_354(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE2";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE1";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return "RE005_FEMALE4";
				case 1:
					return "RE005_MALE5";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return "RE005_MALE4";
				case 1:
					return "RE005_FEMALE6";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_355(int iParam0, char* sParam1)
{
	int iVar0;

	iVar0 = func_176(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_431(&(Local_303.f_19.f_61), iVar0, sParam1, 1);
	}
}

Vector3 func_356(int iParam0)
{
	int iVar0;

	iVar0 = func_258(iParam0);
	switch (iVar0)
	{
		case joaat("WAGON05X"):
			return 1036831949 /* Float: 0.1f */, -1071015526 /* Float: -2.65f */, 0f;
		case joaat("CART03"):
			return 0f, -1070805811 /* Float: -2.7f */, 0f;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

struct<2> func_357(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_432(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_387(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_358()
{
	Local_303.f_194.f_6 = 0;
	Local_303.f_194.f_2 = 0;
	Local_303.f_194.f_1 = -1;
}

void func_359(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_303.f_194.f_2 = (Local_303.f_194.f_2 || Local_78[iParam0 /*7*/].f_2);
		Local_303.f_194.f_1 = (Local_303.f_194.f_1 && Local_78[iParam0 /*7*/].f_2);
		Local_303.f_194.f_6 = (Local_303.f_194.f_6 || Local_78[iParam0 /*7*/].f_2.f_1);
	}
}

int func_360(int iParam0)
{
	return iParam0;
}

int func_361(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_78[iParam3 /*7*/].f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_303.f_194.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_362(var uParam0)
{
	func_433(uParam0, 0f);
}

bool func_363(var uParam0, float fParam1)
{
	if (!func_343(uParam0))
	{
		return false;
	}
	if (func_434(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_364(int iParam0)
{
	return true;
}

void func_365(int iParam0, int iParam1)
{
	func_249(&(Local_303.f_194.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_366(int iParam0, int iParam1)
{
	if (!func_307(iParam1, 0))
	{
		if (!func_222(&iParam1))
		{
			return false;
		}
	}
	return func_170(Local_78[iParam1 /*7*/].f_2, iParam0);
}

void func_367(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_217(&(Local_78[iVar0 /*7*/].f_2), iParam0);
}

void func_368(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_249(&(Local_78[iVar0 /*7*/].f_2), iParam0);
}

bool func_369()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_370(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_435(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_371(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_436(uParam2, 1, iVar0);
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
			if (func_437(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_438(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_439(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_440(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_441(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_442(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_438(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_443(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_444(Global_33, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_445(Global_33, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_446(Global_33, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_446(Global_33, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_438(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_447(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_448(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_449(uParam2, 4000))
				{
					if ((func_450(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_451(uParam2, iParam0)) && func_452(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_450(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_451(uParam2, iParam0)) && func_452(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_453(iParam0, Global_1940186.f_35))
					{
						func_454();
						*uParam3 = 2;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_455(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_456() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_454();
						*uParam3 = 2;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_457())
				{
					if (func_453(iParam0, Global_1940186.f_36))
					{
						func_454();
						*uParam3 = 2;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_458(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_438(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_459(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_438(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_460(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_461(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_462(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_463(uParam2, 4000))
				{
					if (func_464(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_438(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_465(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_438(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_466(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_438(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

void func_372(bool bParam0)
{
	int iVar0;

	if (!func_121(64, 255))
	{
		iVar0 = func_299(Local_303.f_1, Local_303.f_2);
		func_467(iVar0);
		if (!func_121(1024, 255))
		{
			func_138(1024);
		}
		func_468(iVar0);
		if (bParam0)
		{
			func_469(Local_303.f_1, Local_303.f_4);
		}
		func_138(64);
	}
}

void func_373()
{
	int iVar0;
	int iVar1;

	iVar0 = func_176(0);
	iVar1 = func_176(1);
	if (!func_175(4194304, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (func_404(iVar0, PLAYER::PLAYER_PED_ID()))
				{
					func_401(1.623417E-33f, 1, 0);
				}
				func_380(4194304);
			}
		}
		else
		{
			func_380(4194304);
		}
	}
	if (!func_175(8388608, 255))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				if (func_404(iVar1, PLAYER::PLAYER_PED_ID()))
				{
					func_401(1.623417E-33f, 1, 0);
				}
				func_380(8388608);
			}
		}
		else
		{
			func_380(8388608);
		}
	}
}

void func_374(int iParam0)
{
	struct<2> Var0;
	struct<6> Var32;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	Var32.f_3 = 255;
	Var32.f_4 = -1;
	Var32.f_5 = 1.526336E-16f;
	if (!func_470(Var0.f_1, &Var32))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(Var0))
	{
		if (NETWORK::NET_TO_ENT(Local_13.f_7.f_4[0]) == Var0)
		{
			if (Var32.f_3 == PLAYER::PLAYER_ID())
			{
				if (!func_175(1048576, 255))
				{
					func_380(1048576);
				}
			}
		}
	}
	else if (func_471(Var0))
	{
		if ((ENTITY::DOES_ENTITY_EXIST(func_403(func_174(0), 4)) && func_403(func_174(0), 4) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)) || (ENTITY::DOES_ENTITY_EXIST(func_403(func_174(0), 5)) && func_403(func_174(0), 5) == ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0)))
		{
			if (Var32.f_3 == PLAYER::PLAYER_ID())
			{
				if (!func_175(2097152, 255))
				{
					func_380(2097152);
				}
			}
		}
	}
}

void func_375()
{
	if (!func_472(255))
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_19.f_162))
	{
		Local_303.f_19.f_162 = MAP::BLIP_ADD_FOR_COORDS(1.023827E+07f, func_328(0));
	}
}

void func_376()
{
	int iVar0;

	if (!func_121(32, 255))
	{
		func_473(Local_303.f_1, Local_303.f_3);
		if (!func_121(1024, 255))
		{
			func_474(Local_303.f_1);
			func_138(1024);
		}
		iVar0 = func_299(Local_303.f_1, Local_303.f_2);
		func_467(iVar0);
		func_468(iVar0);
		func_136(2);
		func_475(Local_303.f_9);
		func_476(Local_303.f_1);
		func_477(Local_303.f_1, Local_303.f_2, Local_303.f_3);
		if (func_478(Local_303.f_1))
		{
			func_479(0, 3.031687E-09f);
			func_136(1024);
		}
		func_138(32);
	}
}

bool func_377(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_248(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

char* func_378(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "base_b_con01";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 2:
			switch (iParam0)
			{
				case 0:
					return "base";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
		case 3:
			switch (iParam0)
			{
				case 0:
					return "idle_a";
				case 1:
					return "tired_idle_enter";
				case 5:
					return "idle";
				case 2:
					return "line_04";
				case 3:
					return "line_05";
				case 4:
					return "neutral_get_attention_l_003";
				default:
					break;
			}
			return "";
	}
	return "";
}

void func_379(int iParam0, int iParam1)
{
	if (!func_472(255) || func_480(Local_303.f_19.f_10[iParam0 /*2*/].f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 1125515264)
	{
		func_178(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_19.f_10[iParam0 /*2*/]))
	{
		Local_303.f_19.f_10[iParam0 /*2*/] = MAP::BLIP_ADD_FOR_ENTITY(-4.450028E+35f, func_174(iParam0));
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_303.f_19.f_10[iParam0 /*2*/], "NB_RUNAWAY_WAGON_WAGON_BLIP");
	}
	if (iParam1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Local_303.f_19.f_10[iParam0 /*2*/], 3.959886E-05f);
	}
}

void func_380(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_217(&(Local_78[iVar0 /*7*/].f_1), iParam0);
}

bool func_381(int iParam0, int iParam1, int iParam2)
{
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_260(iParam1), func_378(iParam1), 1))
	{
		if (func_377(iParam0, -2.793181E-34f, 1, 1))
		{
			TASK::TASK_PLAY_ANIM(iParam0, func_260(iParam1), func_378(iParam1), 8f, -8f, -1, iParam2, 0f, false, 0, false, 0, false);
			return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_382(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_174(iParam0);
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true, true))
	{
		if (((bParam1 || func_423(iVar0, func_383(0), 5f, 1, 1)) || (ENTITY::GET_ENTITY_SPEED(iVar0) <= 0f && VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == 0)) || (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iVar0) && ENTITY::_0x6D58167F62238284(iVar0) > 1151500288))
		{
			VEHICLE::_BREAK_OFF_DRAFT_WHEEL(iVar0, 0, 100f);
			VEHICLE::_BREAK_OFF_DRAFT_WHEEL(iVar0, 1, 100f);
			VEHICLE::_BREAK_OFF_DRAFT_WHEEL(iVar0, 4, 100f);
			VEHICLE::_BREAK_OFF_DRAFT_WHEEL(iVar0, 5, 100f);
		}
	}
	else
	{
		if (func_175(2048, 255))
		{
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_303.f_19.f_164, false);
		}
		return true;
	}
	return false;
}

Vector3 func_383(int iParam0)
{
	switch (func_224())
	{
		case 0:
		case 1:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1145915961, 1137154993, 1122428583;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1153293465, -999965611, 1111177799;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997156131, -1001654116, 1113519555 /* Float: 55.74f */;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -995654736, -989999446, 1109524480 /* Float: 40.5f */;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979260842, -981704039, -1066532109;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986155272, -986106766, 1115741258;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -997704521, -991375462, 1113277855;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -993254645, -1005707125, 1124639278;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1143489878, -1005914624, 1116808840;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1156280403, -992482936, 1109778432;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (func_215())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1145915167, 1137133608, 1122446505;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1153305490, -999913096, 1110356053;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -997156131, -1001654116, 1113519555 /* Float: 55.74f */;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -995654736, -989999446, 1109524480 /* Float: 40.5f */;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -979260842, -981704039, -1066532109;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -986155272, -986106766, 1115741258;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -997704521, -991375462, 1113277855;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return -993254645, -1005707125, 1124639278;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1143489878, -1005914624, 1116808840;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1156280403, -992482936, 1109778432;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_384()
{
	switch (func_224())
	{
		case 0:
			return 1090519040 /* Float: 8f */;
		case 1:
			return 1090519040 /* Float: 8f */;
		case 2:
			return 1090519040 /* Float: 8f */;
		case 3:
			return 1090519040 /* Float: 8f */;
		default:
			break;
	}
	return 3f;
}

void func_385()
{
	if (!func_175(524288, 255))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_174(0), true, false)) <= 1097859072)
		{
			func_305(4);
		}
		func_481();
		func_380(524288);
	}
}

void func_386(int iParam0, int iParam1)
{
	char* sVar0;

	if (!func_472(255) || func_480(Local_303.f_19.f_1[iParam0 /*4*/].f_1, PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), 1, 1) > 1125515264)
	{
		func_177(iParam0);
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Local_303.f_19.f_1[iParam0 /*4*/]))
	{
		Local_303.f_19.f_1[iParam0 /*4*/] = MAP::BLIP_ADD_FOR_ENTITY(-4.450028E+35f, func_176(iParam0));
		sVar0 = "";
		switch (iParam0)
		{
			case 0:
				sVar0 = "NB_RUNAWAY_WAGON_DRIVER_BLIP";
				break;
			case 1:
				sVar0 = "NB_RUNAWAY_WAGON_PASSENGER_BLIP";
				break;
		}
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(Local_303.f_19.f_1[iParam0 /*4*/], sVar0);
	}
	if (iParam1 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Local_303.f_19.f_1[iParam0 /*4*/], 3.959886E-05f);
	}
}

struct<2> func_387(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_388(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_389(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_390(var uParam0)
{
	if (!func_343(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1148846080));
	}
	if (func_482(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_456() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

bool func_391(int iParam0)
{
	return func_483(&(Local_303.f_19.f_51), iParam0, 2);
}

bool func_392(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_393(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	func_484(iParam0, iParam2);
	return true;
}

void func_394(var uParam0, bool bParam1)
{
	if (bParam1 || !func_343(uParam0))
	{
		func_362(uParam0);
	}
}

void func_395()
{
	if (((func_339(16) && !func_339(4096)) && ENTITY::DOES_ENTITY_EXIST(func_176(1))) && !ENTITY::IS_ENTITY_DEAD(func_176(1)))
	{
		if (func_343(&(Local_303.f_19.f_171)))
		{
			if (func_390(&(Local_303.f_19.f_171)) >= 15000 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(func_176(1), true, false)) < 1101004800)
			{
				if (!func_391(14))
				{
					func_393(func_176(1), PLAYER::PLAYER_PED_ID(), 14, 1.818904E-28f, 0);
					func_362(&(Local_303.f_19.f_171));
				}
				else
				{
					func_380(4096);
				}
			}
		}
	}
}

void func_396(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_33 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

void func_397()
{
	if (!func_172(2))
	{
		if (func_172(4))
		{
			func_401(-1.375416E+27f, 0, 0);
		}
		func_485(1);
		func_305(2);
	}
}

int func_398()
{
	if (!func_175(32, 255) && func_172(4))
	{
		func_486(-6.235462E+23f, 0, 255, 0, 0);
		func_380(32);
		func_487();
	}
	else
	{
		return 1;
	}
	return 0;
}

bool func_399(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_488(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_400(int iParam0)
{
	int iVar0;

	if (!func_222(&iVar0))
	{
		return;
	}
	func_249(&(Local_78[iVar0 /*7*/].f_1), iParam0);
}

void func_401(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_489())
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
	if (func_490(iParam0, 1) < 0)
	{
		return;
	}
	if (func_490(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_490(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_490(iParam0, 1) /*4*/].f_2++;
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
	func_491(&Var0, uVar7);
}

int func_402(var uParam0)
{
	return uParam0->f_11;
}

int func_403(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

bool func_404(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				if (PED::GET_PED_SOURCE_OF_DEATH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)) == iParam1)
				{
					return true;
				}
			}
		}
	}
	return false;
}

int func_405(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_492(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_406(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_492(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_407(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_322(&Var1, iParam0))
	{
		iVar0 = ((func_493() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_408(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_409(int iParam0, int iParam1)
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

void func_410(var uParam0)
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
	func_494(uParam0, uParam0->f_1);
}

struct<2> func_411(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_412(bool bParam0, int iParam1, int iParam2)
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
		func_312(bParam0, iVar0);
		iVar0++;
	}
}

bool func_413(int iParam0)
{
	if ((iParam0 == 2.324436E+15f || iParam0 == 0.4263186f) || iParam0 == -1.730292E-25f)
	{
		return true;
	}
	return false;
}

bool func_414(int iParam0)
{
	return iParam0 == -556.0374f;
}

int func_415(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_416(int iParam0)
{
	return Local_303.f_194.f_7[iParam0 /*11*/].f_4;
}

float func_417(int iParam0)
{
	return Local_303.f_194.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_418(int iParam0)
{
	return Local_303.f_194.f_7[iParam0 /*11*/].f_6;
}

void func_419(int iParam0, bool bParam1)
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

bool func_420(int iParam0)
{
	return func_164(iParam0, 32);
}

bool func_421(int iParam0)
{
	return func_164(iParam0, 64);
}

void func_422(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_219(vParam2))
	{
		return;
	}
	Var0.f_5 = -1;
	Var0.f_5.f_1 = -1;
	Var0.f_5.f_3 = -1;
	Var0.f_5.f_4 = -1;
	Var0.f_5.f_5 = -1;
	Var0.f_5.f_6 = -1;
	Var0.f_5.f_6.f_1 = -1;
	Var0.f_5.f_9 = 2;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_20 = 255;
	Var0.f_5 = { Param0 };
	Var0.f_17 = { vParam2 };
	Var0.f_15 = uParam6;
	Var0.f_16 = iParam5;
	Var0.f_4 = 0;
	func_496(&Var0, func_495(0, 8));
}

bool func_423(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return true;
		}
	}
	else if (func_488(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_424(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_425(int iParam0)
{
	int iVar0;

	if (func_483(&(Local_303.f_19.f_51), iParam0, 2))
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (Local_303.f_19.f_1[iVar0 /*4*/].f_3 != -1 && func_499(func_498(Local_303.f_19.f_1[0 /*4*/].f_3)))
	{
		return;
	}
	func_500(iParam0);
	if (func_502(&(Local_303.f_19.f_61), func_501(func_498(iParam0)), 0, -1, 0, 0))
	{
		func_503(&(Local_303.f_19.f_51), iParam0, 2);
	}
}

void func_426(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_504(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_427(int iParam0)
{
	return Local_303.f_194.f_7[iParam0 /*11*/].f_10;
}

void func_428(int iParam0, char* sParam1, bool bParam2)
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

void func_429(int iParam0)
{
}

float func_430(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 2.538364E+35f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -4.228573E+21f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -3.821365E+20f;
				case 1:
					return 1.391331E-33f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -1.757678E+21f;
				case 1:
					return -1.393584E-24f;
				default:
					break;
			}
			break;
	}
	return 1.863516E-37f;
}

void func_431(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_505(uParam0, iParam1, sParam2))
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

int func_432(int iParam0)
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

void func_433(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_506() - fParam1);
	func_507(uParam0, 1);
	func_508(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_434(var uParam0)
{
	if (!func_343(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_482(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_506() - uParam0->f_1);
}

bool func_435(int iParam0, var uParam1, var uParam2, bool bParam3)
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

void func_436(var uParam0, bool bParam1, int iParam2)
{
	func_509(iParam2);
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
		uParam0->f_14 = func_510(0);
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
							func_217(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_511(1, 1))
						{
							func_217(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_511(1, 1) || *uParam0 & 8192 != 0))
				{
					func_249(uParam0, 9.403955E-38f);
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
			if (func_512(uParam0))
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
	func_513(uParam0);
}

bool func_437(int iParam0, var uParam1)
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
			if (!func_514(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_515(iParam0, iVar2) <= func_516(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_438(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_517(iParam2, 1, 1, 1, 0))
	{
		func_217(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_518(uParam1, 1);
	func_519();
}

bool func_439(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_520(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_521(uParam1);
			if (func_522(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_523(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_518(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_524(uParam1))
						{
							func_518(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_440(int iParam0, int iParam1, var uParam2)
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
	if (func_525(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_521(uParam2);
		if (func_522(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_523(uParam2)
				{
					func_518(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_441(int iParam0, var uParam1)
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
	if (func_514(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_523(uParam1)
		{
			fVar3 = func_521(uParam1);
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

int func_442(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_526(bParam1, bParam2, bParam3);
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

bool func_443(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_456();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_444(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_527(uParam2);
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
			if (func_452(uParam2, iParam1))
			{
				func_518(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_445(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_528(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_452(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_518(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_446(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_529(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_518(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_518(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_530(iParam1, vVar0, vVar4))
					{
						func_518(uParam2, 1);
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
					func_518(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_530(iParam1, vVar0, vVar7))
					{
						func_518(uParam2, 1);
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

bool func_447(int iParam0, var uParam1)
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
		if (!func_514(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_531(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_532(Global_1940186.f_28[iVar0]))
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
			if (func_533(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_534(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_535(uParam1, iParam0, fVar1, iVar0))
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

bool func_448(int iParam0, var uParam1)
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

bool func_449(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_456();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_450(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_536(iVar0, &iVar2))
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
	if (func_537(iVar0, iParam0))
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

int func_451(var uParam0, int iParam1)
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

bool func_452(var uParam0, int iParam1)
{
	if (func_538(uParam0))
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

bool func_453(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_480(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_454()
{
}

bool func_455(var uParam0, int iParam1)
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
		if (func_539(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_456();
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
						if (func_540(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_456();
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

int func_456()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_457()
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
	if ((func_456() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_458(var uParam0, int iParam1)
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
	fVar0 = func_516(uParam0);
	if (uParam0->f_13 > func_541(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_542(iParam1);
	iVar1 = func_543(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_459(var uParam0, int iParam1)
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
	if (func_544(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_545(vVar1, vVar4);
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

int func_460(int iParam0, int iParam1, var uParam2)
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
	return func_546(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_461(int iParam0, var uParam1)
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
		if (func_547(iParam0, uParam1, 1))
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
	if (!func_548(iParam0))
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
			if (func_549(uParam1))
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
					if (!func_550(uParam1, iParam0))
					{
						if (func_540(iVar4, Global_34, 1) < 7f)
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

bool func_462(int iParam0, var uParam1)
{
	if (!func_551(0))
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

bool func_463(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_456();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_465(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_456();
	}
	else if (func_456() - uParam1->f_5) > func_552(uParam1)
	{
		return func_553(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_466(var uParam0, int iParam1)
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

void func_467(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_118(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_554(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_119(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_411(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_411(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_411(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_411(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_468(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_410(&Var0);
}

void func_469(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_555(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_556(iParam1);
	func_557(iVar0, iParam0);
}

bool func_470(int iParam0, var uParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 1.526336E-16f;
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_A_PLAYER(iVar0))
		{
			*uParam1 = 1;
		}
		else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (PED::IS_PED_HUMAN(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (ENTITY::IS_ENTITY_A_VEHICLE(iParam0))
	{
		*uParam1 = 4;
	}
	else if (ENTITY::IS_ENTITY_AN_OBJECT(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(uParam1->f_2);
			uParam1->f_4 = PLAYER::GET_PLAYER_TEAM(uParam1->f_3);
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 1.526336E-16f;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 1.526336E-16f;
			break;
	}
	return true;
}

bool func_471(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_IS_THIS_MODEL_A_HORSE(iVar0);
}

bool func_472(int iParam0)
{
	return func_121(8, iParam0);
}

void func_473(int iParam0, int iParam1)
{
	struct<29> Var0;
	struct<2> Var31;
	int iVar33;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, iParam0, -1, -1, 255);
	Var31 = { func_357(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_111(&Var0, 4) && func_558(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_474(int iParam0)
{
	func_559(iParam0);
}

void func_475(struct<2> Param0)
{
	struct<32> Var0;

	if (func_297(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_297(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_297(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_560(Param0, &Var0))
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

void func_476(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_357(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_477(int iParam0, int iParam1, int iParam2)
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
		func_31(&Var0, iParam0, iParam1, iParam2, 255);
		if (Var0.f_7 < 5 && Var0.f_7 >= 0)
		{
			Global_1257494[iVar31 /*103*/].f_97[Var0.f_7] = 0;
		}
	}
}

bool func_478(int iParam0)
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

int func_479(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_561())
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
		func_562(&Global_0, 8);
	}
	func_562(&Global_0, 1);
	return 1;
}

float func_480(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_481()
{
	if (!func_63(2))
	{
		return;
	}
	func_136(8);
}

bool func_482(var uParam0)
{
	return func_424(*uParam0, 2);
}

bool func_483(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_484(int iParam0, int iParam1)
{
	var uVar0;
	struct<15> Var1;

	if (func_483(&(Local_303.f_19.f_51), iParam1, 2))
	{
		return;
	}
	if (AUDIO::_IS_PED_IN_ANY_CONVERSATION(iParam0, true))
	{
		return;
	}
	uVar0 = func_563(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 0f, 0f, 0f, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1101004800 /* Float: 20f */, 4.795139E-15f, 0, 8);
	Var1 = { func_564(873.9207f) };
	Var1.f_11 = iParam1;
	func_565(&Var1, uVar0);
}

void func_485(bool bParam0)
{
	if (!func_63(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_63(256))
		{
			func_168(Local_303.f_18, 0);
			func_136(256);
		}
	}
	func_136(16);
}

int func_486(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_566(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_487()
{
	if (!func_172(2))
	{
		func_401(-1.375416E+27f, 0, 0);
		func_485(1);
		func_305(2);
	}
}

float func_488(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_489()
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

int func_490(int iParam0, int iParam1)
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

void func_491(var uParam0, var uParam1)
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

bool func_492(struct<2> Param0, bool bParam2)
{
	if (!func_37(Param0))
	{
		return false;
	}
	func_567(bParam2);
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

int func_493()
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

void func_494(var uParam0, var uParam1)
{
}

var func_495(int iParam0, int iParam1)
{
	return func_563(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_496(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 5;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 21, 33, &uParam1);
}

int func_497(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			return 0;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 26:
		case 35:
		case 36:
		case 38:
			return 1;
	}
	return 2;
}

char[] func_498(int iParam0)
{
	switch (func_224())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTS_WSD1";
				case 5:
					return "ORERW_CTS_HLP1";
				case 6:
					return "ORERW_CTS_HLP2";
				case 7:
					return "ORERW_CTS_HLP3";
				case 8:
					return "ORERW_CTS_THK1";
				case 9:
					return "ORERW_CTS_BYE1";
				case 10:
					return "ORERW_CTS_STAY";
				case 11:
					return "ORERW_CTS_FAIL";
				case 12:
					return "ORERW_CTS_BYEF";
				case 13:
					return "ORERW_CTS_FOLW1";
				case 28:
					return "ORERW_CTS_AGGD";
				case 29:
					return "ORERW_CTS_AGGW";
				case 30:
					return "ORERW_CTS_DESW";
				case 32:
					return "ORERW_CTS_DESH";
				case 31:
					return "ORERW_CTS_AGGH";
				case 33:
					return "ORERW_CTS_TAKE";
				case 34:
					return "ORERW_CTS_STAY";
				case 37:
					return "ORERW_CTS_HOP";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "ORERW_CTL_WSD1";
				case 5:
					return "ORERW_CTL_HLP1";
				case 6:
					return "ORERW_CTL_HLP2";
				case 7:
					return "ORERW_CTL_HLP3";
				case 8:
					return "ORERW_CTL_THK1";
				case 9:
					return "ORERW_CTL_BYE1";
				case 10:
					return "ORERW_CTL_STAY";
				case 11:
					return "ORERW_CTL_FAIL";
				case 12:
					return "ORERW_CTL_BYEF";
				case 13:
					return "ORERW_CTL_FOLW1";
				case 28:
					return "ORERW_CTL_AGGD";
				case 29:
					return "ORERW_CTL_AGGW";
				case 30:
					return "ORERW_CTL_DESW";
				case 32:
					return "ORERW_CTL_DESH";
				case 31:
					return "ORERW_CTL_AGGH";
				case 33:
					return "ORERW_CTL_TAKE";
				case 34:
					return "ORERW_CTL_STAY";
				case 37:
					return "ORERW_CTL_HOP";
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHS_WSP";
				case 0:
					return "ORERW_CHS_WSD";
				case 5:
					return "ORERW_CHS_HLP1";
				case 6:
					return "ORERW_CHS_HLP2";
				case 7:
					return "ORERW_CHS_HLP3";
				case 2:
					return "ORERW_CHS_HPP1";
				case 3:
					return "ORERW_CHS_HPP2";
				case 4:
					return "ORERW_CHS_HPP3";
				case 15:
					return "ORERW_CHS_ONW";
				case 16:
					return "ORERW_CHS_ONWB";
				case 17:
					return "ORERW_CHS_DEAD";
				case 36:
					return "ORERW_CHS_CRSH";
				case 41:
					return "ORERW_CHS_CRSB";
				case 13:
					return "ORERW_CHS_FOLW1";
				case 14:
					return "ORERW_CHS_FOLP";
				case 18:
					return "ORERW_CHS_BCK1";
				case 19:
					return "ORERW_CHS_BCK2";
				case 20:
					return "ORERW_CHS_BCK3";
				case 21:
					return "ORERW_CHS_BCK4";
				case 22:
					return "ORERW_CHS_BCK5";
				case 23:
					return "ORERW_CHS_BCK6";
				case 24:
					return "ORERW_CHS_BCK7";
				case 25:
					return "ORERW_CHS_BCK8";
				case 8:
					return "ORERW_CHS_THK1";
				case 26:
					return "ORERW_CHS_SCLD";
				case 33:
					return "ORERW_CHS_TAKE";
				case 35:
					return "ORERW_CHS_BNTP1";
				case 31:
					return "ORERW_CHS_AGGH";
				case 9:
					return "ORERW_CHS_BYE1";
				case 11:
					return "ORERW_CHS_FAIL";
				case 12:
					return "ORERW_CHS_BYEF";
				case 28:
					return "ORERW_CHS_AGGD";
				case 29:
					return "ORERW_CHS_AGGW";
				case 30:
					return "ORERW_CHS_DESW";
				case 32:
					return "ORERW_CHS_DESH";
				case 37:
					return "ORERW_CHS_HOPD";
				case 38:
					return "ORERW_CHS_HOPP";
				case 39:
					return "ORERW_CHS_AGGP";
				case 40:
					return "ORERW_CHS_AGPW";
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 1:
					return "ORERW_CHL_WSP";
				case 0:
					return "ORERW_CHL_WSD";
				case 5:
					return "ORERW_CHL_HLP1";
				case 6:
					return "ORERW_CHL_HLP2";
				case 7:
					return "ORERW_CHL_HLP3";
				case 2:
					return "ORERW_CHL_HPP1";
				case 3:
					return "ORERW_CHL_HPP2";
				case 4:
					return "ORERW_CHL_HPP3";
				case 15:
					return "ORERW_CHL_ONW";
				case 16:
					return "ORERW_CHL_ONWB";
				case 17:
					return "ORERW_CHL_DEAD";
				case 36:
					return "ORERW_CHL_CRSH";
				case 41:
					return "ORERW_CHL_CRSB";
				case 13:
					return "ORERW_CHL_FOLW1";
				case 14:
					return "ORERW_CHL_FOLP";
				case 18:
					return "ORERW_CHL_BCK1";
				case 19:
					return "ORERW_CHL_BCK2";
				case 20:
					return "ORERW_CHL_BCK3";
				case 21:
					return "ORERW_CHL_BCK4";
				case 22:
					return "ORERW_CHL_BCK5";
				case 23:
					return "ORERW_CHL_BCK6";
				case 24:
					return "ORERW_CHL_BCK7";
				case 25:
					return "ORERW_CHL_BCK8";
				case 8:
					return "ORERW_CHL_THK1";
				case 26:
					return "ORERW_CHL_SCLD";
				case 33:
					return "ORERW_CHL_TAKE";
				case 35:
					return "ORERW_CHL_BNTP1";
				case 31:
					return "ORERW_CHL_AGGH";
				case 9:
					return "ORERW_CHL_BYE1";
				case 11:
					return "ORERW_CHK_FAIL";
				case 12:
					return "ORERW_CHL_BYEF";
				case 28:
					return "ORERW_CHL_AGGD";
				case 29:
					return "ORERW_CHL_AGGW";
				case 30:
					return "ORERW_CHL_DESW";
				case 32:
					return "ORERW_CHL_DESH";
				case 37:
					return "ORERW_CHL_HOPD";
				case 38:
					return "ORERW_CHL_HOPP";
				case 39:
					return "ORERW_CHL_AGGP";
				case 40:
					return "ORERW_CHL_AGPW";
				default:
					break;
			}
			break;
	}
	return "";
}

bool func_499(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

void func_500(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 37:
		case 39:
		case 40:
		case 41:
			func_431(&(Local_303.f_19.f_61), Local_303.f_19.f_1[0 /*4*/].f_1, func_354(0), 0);
			Local_303.f_19.f_1[0 /*4*/].f_3 = iParam0;
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 36:
		case 38:
			func_431(&(Local_303.f_19.f_61), Local_303.f_19.f_1[1 /*4*/].f_1, func_354(1), 0);
			Local_303.f_19.f_1[1 /*4*/].f_3 = iParam0;
			break;
		case 26:
		case 35:
			func_431(&(Local_303.f_19.f_61), Local_303.f_19.f_1[0 /*4*/].f_1, func_354(0), 0);
			func_431(&(Local_303.f_19.f_61), Local_303.f_19.f_1[1 /*4*/].f_1, func_354(1), 0);
			Local_303.f_19.f_1[0 /*4*/].f_3 = iParam0;
			Local_303.f_19.f_1[1 /*4*/].f_3 = iParam0;
			break;
	}
}

Vector3 func_501(char* sParam0)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, sParam0, 24);
	return cVar0;
}

bool func_502(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_568(uParam0, &Global_1051270, vParam1, iParam4, iParam5, bParam6, iParam7);
}

bool func_503(var uParam0, int iParam1, int iParam2)
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

float func_504(float fParam0, float fParam1, float fParam2)
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

bool func_505(var uParam0, int iParam1, char* sParam2)
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

float func_506()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_507(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_508(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_509(int iParam0)
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
	Global_1940186.f_21 = func_569();
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
			func_570(&(Global_1940186.f_28), &(Global_1940186.f_33));
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

var func_510(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_511(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_571(bParam0, &iVar0, &iVar1))
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

bool func_512(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_572(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_572(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_543(iVar0) == -1)
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

void func_513(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_573(uParam0);
	}
}

bool func_514(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_543(iParam2);
	}
	else
	{
		iVar1 = func_542(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_543(iParam0);
	}
	else
	{
		iVar0 = func_542(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_170(*uParam1, 8388608))
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

float func_515(int iParam0, int iParam1)
{
	return func_480(iParam0, iParam1, 1, 1);
}

float func_516(var uParam0)
{
	return uParam0->f_29;
}

bool func_517(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_518(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_217(uParam0, 3.85186E-34f);
	}
	else
	{
		func_249(uParam0, 3.85186E-34f);
	}
}

void func_519()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_520(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_480(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_574(iVar0, 0)))
		{
			if (func_575(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_521(var uParam0)
{
	return uParam0->f_18;
}

bool func_522(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_170(*uParam0, 4194304))
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

int func_523(var uParam0)
{
	return uParam0->f_19;
}

int func_524(var uParam0)
{
	return uParam0->f_20;
}

bool func_525(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_574(iVar0, 0)))
		{
			if (func_576(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_526(bool bParam0, bool bParam1, bool bParam2)
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

float func_527(var uParam0)
{
	return uParam0->f_25;
}

int func_528(var uParam0)
{
	return uParam0->f_23;
}

int func_529(var uParam0)
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

bool func_530(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_577(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
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

int func_531(int iParam0)
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
	if (func_578(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_532(int iParam0)
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

bool func_533(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_579(iParam1))
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

bool func_534(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_579(iParam1))
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

bool func_535(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_580(uParam0);
	if (func_579(iParam1))
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

bool func_536(int iParam0, int iParam1)
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

bool func_537(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_581(iParam0, 1, 0, 0)) && !func_581(iParam0, 1, 0, 0) == 1284.666f)
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

bool func_538(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_539(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_540(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_540(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_541(var uParam0)
{
	return uParam0->f_26;
}

int func_542(int iParam0)
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

int func_543(int iParam0)
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

int func_544(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_582(iParam0, vVar0, fParam2);
}

float func_545(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_546(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_536(Global_33, &iVar1))
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
		fVar2 = func_480(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_480(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
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

bool func_547(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_571(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_550(uParam1, iVar0))
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
				if (!bParam2 || !func_550(uParam1, iVar1))
				{
					if (func_540(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_548(int iParam0)
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

bool func_549(var uParam0)
{
	return func_170(*uParam0, 131072);
}

bool func_550(var uParam0, int iParam1)
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

bool func_551(int iParam0)
{
	return false;
}

int func_552(var uParam0)
{
	return uParam0->f_22;
}

int func_553(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_554(int iParam0, var uParam1, var uParam2)
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
		func_31(&Var2, *uParam1, -1, -1, 255);
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

bool func_555(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_583(iParam0) - 1))
	{
		return false;
	}
	return true;
}

var func_556(int iParam0)
{
	return iParam0 + 8;
}

void func_557(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_357(iParam1, 8.746343E-07f) };
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

int func_558(int iParam0)
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

void func_559(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_357(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

bool func_560(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_492(Param0, &vVar0);
	if (func_584(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_561()
{
	return !Global_1572887.f_10;
}

void func_562(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

var func_563(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_585() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_586());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_586());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_586());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_587(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_588(iVar2))
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
				if (iVar9 & 8192 != 0 && func_589(iVar2) != 1)
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
					if (!func_590(iVar10))
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

struct<15> func_564(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_303, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_565(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

int func_566(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_591(iParam2, -3.005759E+25f);
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
	func_592(uParam1, bParam0, Var3);
	return 1;
}

void func_567(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_568(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8)
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
		func_593(vParam2, uParam0, uParam1);
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

bool func_569()
{
	if (func_594())
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

void func_570(var uParam0, var uParam1)
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

bool func_571(bool bParam0, int iParam1, int iParam2)
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

int func_572(var uParam0)
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

void func_573(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_249(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_217(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_574(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_575(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_576(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_576(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_577(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_578(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_579(int iParam0)
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

float func_580(var uParam0)
{
	return uParam0->f_28;
}

float func_581(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_582(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_595(vVar3, vVar6);
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
	if (func_596(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

int func_583(int iParam0)
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

bool func_584(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_597(iParam0))
	{
		return false;
	}
	if (func_598(iParam0, uParam1, &uVar0))
	{
		func_599(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_585()
{
	return Global_1051645.f_12;
}

char* func_586()
{
	return "unnamed";
}

int func_587(int iParam0)
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

bool func_588(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_600(36, iParam0);
}

int func_589(int iParam0)
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

bool func_590(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_601(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_602(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

void func_591(int iParam0, int iParam1)
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

void func_592(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_603(uParam0))
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

void func_593(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

bool func_594()
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

float func_595(vector3 vParam0, vector3 vParam3)
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

bool func_596(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_597(int iParam0)
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

bool func_598(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_604(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_599(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_605(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_606(iVar0);
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
			uParam2->f_5 = func_607(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_608(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_609(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_610(iVar0);
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

bool func_600(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_483(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_611())
	{
		return func_483(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_483(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_601(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_602(int iParam0)
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
		func_612(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_613(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_603(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_604(int iParam0)
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

int func_605(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_614(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_606(int iParam0)
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

int func_607(int iParam0)
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

int func_608(int iParam0)
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

int func_609(int iParam0)
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

int func_610(int iParam0)
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

int func_611()
{
	return Global_1102813.f_3672;
}

void func_612(int iParam0)
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
	func_613(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_613(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_614(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_615(iParam0, uParam1, &uVar0))
	{
		func_616(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_615(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_604(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_616(bool bParam0, int iParam1, var uParam2)
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

