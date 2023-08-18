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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	struct<38> Local_19 = { 0, 0, 0, 0, 0, 0, -1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 1065353216, 1119092736, 1092616192, 1085276160, 0, 0, 0, 0, 255, 0, 0, 0, 255, 0, 2, 0, 0, 1, 2, 0, 0, 0 } ;
	var uLocal_57 = 2;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 2;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	struct<19> Local_63[32];
	struct<265> Local_672 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 2, 0, 0, 2, 0, 0, 2, 0, 0, 3, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	var uLocal_937 = 0;
	var uLocal_938 = 1;
	var uLocal_939 = 0;
	var uLocal_940 = 0;
	var uLocal_941 = 1065353216;
	var uLocal_942 = 0;
	var uLocal_943 = 1065353216;
	var uLocal_944 = 1077936128;
	var uLocal_945 = 1108082688;
	var uLocal_946 = 1113325568;
	var uLocal_947 = 0;
	var uLocal_948 = 0;
	var uLocal_949 = 1;
	var uLocal_950 = 0;
	var uLocal_951 = 0;
	var uLocal_952 = 0;
	var uLocal_953 = 0;
	var uLocal_954 = 0;
	var uLocal_955 = 0;
	var uLocal_956 = 0;
	var uLocal_957 = 0;
	var uLocal_958 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_17 = 1f;
	fLocal_18 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_19, 44, 48);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_19), 44, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_63, 609, 49);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_63[0 /*19*/])), 609, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(bool bParam0)
{
	if (Local_19 == 6)
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
	else if (func_17(Local_672.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_672.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_672.f_12), Local_672.f_9))
	{
		return true;
	}
	else if (Local_672.f_8 == 6)
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
	MISC::COPY_SCRIPT_STRUCT(&Local_672, bParam0, 5);
	iVar2 = func_31(&bVar1, Local_672.f_1, Local_672.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_672.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_672.f_1, Local_672.f_2, Local_672.f_3, iVar0);
	Local_672.f_9 = { func_33(Var3.f_5, 8) };
	Local_672.f_14 = Var3.f_5;
	Local_672.f_15 = { Var3.f_11 };
	Local_672.f_18 = Var3.f_7;
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
	if (func_39(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_40(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_41(iParam3, 255))
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
	if (func_42())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_39(Global_1051268))
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
	if (Local_19 <= 5)
	{
		func_43();
	}
	switch (Local_19)
	{
		case 0:
			func_44();
			break;
		case 1:
			func_45();
			break;
		case 2:
			func_46();
			break;
		case 3:
			func_47();
			break;
		case 4:
			func_48();
			break;
		case 5:
			func_49();
			break;
	}
}

void func_23()
{
	func_50();
	func_51();
	if (Local_672.f_8 <= 5)
	{
		func_52();
	}
	switch (Local_672.f_8)
	{
		case 0:
			func_53();
			break;
		case 1:
			func_54();
			break;
		case 2:
			func_55();
			break;
		case 3:
			func_56();
			break;
		case 4:
			func_57();
			break;
		case 5:
			func_58();
			break;
	}
}

void func_24()
{
	func_59();
}

void func_25()
{
	if (func_60())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_19.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_19.f_3.f_1);
		}
	}
	func_61();
}

void func_26()
{
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_672.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_65(Local_672.f_12, 4);
		}
	}
	func_66();
	if (func_67(64))
	{
		func_68(Local_19.f_6);
	}
	func_69();
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
		Local_19.f_37.f_1[iVar0] = 255;
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
	func_70(&Var0, Var26.f_5);
	iVar25 = func_71(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_72(iVar25) };
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
			func_73(bParam0, iParam2);
			break;
		case 2:
			func_74(bParam0, iParam2);
			break;
		case 3:
			func_75(bParam0, iParam2);
			break;
		case 4:
			func_76(bParam0, iParam2);
			break;
		case 12:
			func_77(bParam0, iParam2);
			break;
		case 6:
			func_78(bParam0, iParam2);
			break;
		case 7:
			func_79(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_80(bParam0, iParam2);
			break;
		case 11:
			func_81(bParam0, iParam2);
			break;
		case 9:
			func_82(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_83(bParam0, iParam2);
			break;
		case 8:
			func_84(bParam0, iParam2);
			break;
		case 13:
			func_85(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_86(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_87(bParam0, iParam2);
			break;
		case 16:
			func_88(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_89(bParam0, iParam2);
			break;
		case 21:
			func_90(bParam0, iParam2);
			break;
		case 28:
			func_91(bParam0, iParam2);
			break;
		case 25:
			func_92(bParam0, iParam2);
			break;
		case 24:
			func_93(bParam0, iParam2);
			break;
		case 22:
			func_94(bParam0, iParam2);
			break;
		case 23:
			func_95(bParam0, iParam2);
			break;
		case 29:
			func_96(bParam0, iParam2);
			break;
		case 26:
			func_97(bParam0, iParam2);
			break;
		case 30:
			func_98(bParam0, iParam2);
			break;
		case 27:
			func_99(bParam0, iParam2);
			break;
		case 32:
			func_100(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_101(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_102(bParam0, iParam2);
			break;
		case 17:
			func_103(bParam0, iParam2);
			break;
		case 18:
			func_104(bParam0, iParam2);
			break;
		case 19:
			func_105(bParam0, iParam2);
			break;
		case 20:
			func_106(bParam0, iParam2);
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
			func_107(bParam0, iParam1, iParam2);
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
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573), func_108(iParam1));
			break;
		case 3:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_602), func_108(iParam1));
			break;
		case 4:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_2104), func_108(iParam1));
			break;
		case 5:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_12606), func_108(iParam1));
			break;
		case 6:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_12908), func_108(iParam1));
			break;
		case 7:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_15910), func_108(iParam1));
			break;
		case 8:
			Var0.f_1 = func_109(iParam0, &(Global_1072759.f_573.f_16512), func_108(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_110();
	}
	return Var0;
}

void func_34()
{
	func_111();
	func_112();
	func_113();
	func_114();
}

void func_35()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_115(&(Local_672.f_19.f_1));
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_117(iVar0, func_116(iVar0));
		func_120(iVar0, func_118(iVar0), func_119(iVar0), 1);
		iVar2 = func_121(iVar0);
		if (iVar2 != 1.863516E-37f)
		{
			func_122(iVar0, iVar2);
		}
		if (iVar0 == 1)
		{
			func_123(iVar0);
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		switch (iVar1)
		{
			case 0:
				if (func_124() != 0)
				{
					func_126(iVar1, func_125(iVar1));
					func_128(iVar1, func_127(iVar1), 0f, 0, 1);
					func_129(iVar1, 0);
				}
				break;
			case 1:
				func_130(iVar1, -5.831751E+29f);
				func_128(iVar1, func_127(iVar1), 0f, 1, 1);
				break;
		}
		iVar1++;
	}
}

void func_36()
{
	func_131();
}

void func_37()
{
}

void func_38()
{
}

bool func_39(struct<2> Param0)
{
	if (!func_132(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_108(Param0))
	{
		return false;
	}
	return true;
}

bool func_40(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_41(int iParam0, int iParam1)
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

bool func_42()
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
	if (!func_39(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_43()
{
}

void func_44()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_672.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_672.f_1, Local_672.f_2, Local_672.f_3, iVar0);
	if (!func_133(&Var1, 1))
	{
		func_134(1);
		return;
	}
	Local_19.f_6 = func_135(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_136(256);
	if (func_137(Local_19.f_6))
	{
		func_138(5);
		func_134(6);
	}
	else
	{
		func_134(1);
	}
}

void func_45()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_672.f_1, Local_672.f_2, -1, 255);
	if (func_133(&Var0, 1))
	{
		func_134(2);
		return;
	}
	if (func_139(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_672.f_15, Var0.f_10, 2442122);
		func_134(2);
	}
	else if (bVar31)
	{
		func_138(3);
		func_134(6);
	}
	if (!func_140(Local_19.f_3.f_2))
	{
		func_141(&(Local_19.f_3.f_2));
	}
	else if (func_142(Local_19.f_3.f_2) > 45000)
	{
		func_138(4);
		func_134(6);
	}
}

void func_46()
{
	if (func_143(1, 255))
	{
		if (!func_144(1))
		{
			if (func_145())
			{
				func_136(1);
			}
		}
		else
		{
			func_146();
			func_134(3);
		}
	}
}

void func_47()
{
	bool bVar0;

	if (func_143(2, 255))
	{
		if (!func_144(2))
		{
			bVar0 = true;
			if (!func_147())
			{
				bVar0 = false;
			}
			if (!func_148())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_136(2);
			}
		}
		else
		{
			func_149();
			func_134(4);
		}
	}
}

void func_48()
{
	func_150();
	func_151();
	func_152();
	if (func_153() || Local_19.f_2 != 0)
	{
		func_154();
		func_134(5);
	}
}

void func_49()
{
	if (func_143(4, 255))
	{
		if (func_155())
		{
			func_136(4);
			func_134(6);
		}
	}
}

void func_50()
{
	if (!func_144(256))
	{
		return;
	}
	if (func_144(512))
	{
		if (func_67(64) && func_135(PLAYER::PLAYER_ID()) == Local_19.f_6)
		{
			func_68(Local_19.f_6);
			func_156(64);
		}
	}
	else if (!func_67(64))
	{
		if (func_135(PLAYER::PLAYER_ID()) == Local_19.f_6)
		{
			func_157(Local_19.f_6, 1, 1);
			func_158(64);
		}
	}
	else if (func_135(PLAYER::PLAYER_ID()) != Local_19.f_6)
	{
		func_68(Local_19.f_6);
		func_156(64);
	}
}

void func_51()
{
	if (!Global_13)
	{
		if (func_143(8192, 255))
		{
			func_159(8192);
		}
	}
	else if (!func_143(8192, 255))
	{
		func_160(8192);
	}
}

void func_52()
{
}

void func_53()
{
	if (Local_19 == 6)
	{
		func_161(6);
	}
	else if (Local_19 > 0)
	{
		func_50();
		func_161(1);
	}
}

void func_54()
{
	if (Local_19 == 6)
	{
		func_161(6);
	}
	else if (Local_19 > 1)
	{
		func_161(2);
	}
}

void func_55()
{
	bool bVar0;
	int iVar1;

	if (!func_143(1, 255))
	{
		bVar0 = true;
		if (!func_162())
		{
			bVar0 = false;
		}
		if (!func_163())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_160(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_140(Local_672.f_11))
			{
				func_141(&(Local_672.f_11));
			}
			if (func_142(Local_672.f_11) >= iVar1)
			{
				func_161(6);
			}
		}
	}
	else if (Local_19 > 2)
	{
		func_164(&(Local_672.f_11));
		func_165();
		func_161(3);
	}
}

void func_56()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_143(2, 255))
	{
		iVar0 = func_166();
		iVar1 = func_167();
		if (iVar0 && iVar1)
		{
			func_160(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_140(Local_672.f_11))
			{
				func_141(&(Local_672.f_11));
			}
			if (func_168(Local_672.f_11) >= iVar2)
			{
				func_161(6);
			}
		}
	}
	else if (Local_19 > 3)
	{
		func_164(&(Local_672.f_11));
		func_169();
		func_170();
		func_171();
		func_172();
		func_161(4);
	}
}

void func_57()
{
	if (Local_19 >= 5)
	{
		func_173();
		func_161(5);
		return;
	}
	func_174();
	func_175();
	func_176();
	func_177();
	func_178();
	func_179();
	func_180();
}

void func_58()
{
	if (!func_143(4, 255))
	{
		if (func_181())
		{
			func_182();
			func_65(Local_672.f_12, 4);
			func_160(4);
		}
	}
	else if (Local_19 > 5)
	{
		func_161(6);
	}
}

void func_59()
{
}

bool func_60()
{
	return (func_144(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_61()
{
}

void func_62()
{
	int iVar0;
	int iVar1;

	if (func_60())
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_30[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_19.f_30[iVar1]);
				func_183(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_184(iVar0, "HAS_VOICE");
					func_184(iVar0, "HorseTeamA");
					func_184(iVar0, "HorseTeamB");
					func_184(iVar0, "HorseOwnerTeamA");
					func_184(iVar0, "HorseOwnerTeamB");
					if (!func_185(iVar1, 16))
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

void func_63()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_60())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 2)
			{
				if (func_186(iVar1, iVar2))
				{
				}
				else if (func_187(iVar1, iVar2))
				{
					iVar0 = Local_672.f_115[iVar1 /*34*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_188(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar1 /*3*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_19.f_33[iVar1 /*3*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_188(iVar1, iVar2))
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

void func_64()
{
	func_189(&(Local_672.f_264.f_13));
	if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_264.f_11))
	{
		VOLUME::DELETE_VOLUME(Local_672.f_264.f_11);
	}
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_190(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_66()
{
	int iVar0;
	bool bVar1;

	if (!func_67(1))
	{
		return;
	}
	if (func_67(4))
	{
		return;
	}
	if (!func_67(2))
	{
		iVar0 = -1;
	}
	else if (!func_67(8))
	{
		iVar0 = 2;
	}
	else if (func_67(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_67(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_191(Local_672.f_9, iVar0, 0, 255, 0);
	func_158(4);
	if (bVar1)
	{
		func_192(Local_672.f_1, Local_672.f_2);
		if (!func_67(256))
		{
			if (iVar0 == 1)
			{
				func_193(Local_672.f_18, 1);
			}
			else
			{
				func_193(Local_672.f_18, 0);
			}
			func_158(256);
		}
		func_194(Local_672.f_18);
	}
	else
	{
		func_193(Local_672.f_18, 2);
	}
}

bool func_67(int iParam0)
{
	return func_195(Local_672.f_7, iParam0);
}

void func_68(int iParam0)
{
	int iVar0;

	if (!func_196(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_69()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		func_197(iVar0);
		if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[iVar0]))
		{
			func_198(Local_672.f_19.f_45[iVar0]);
		}
		iVar0++;
	}
	if (func_60())
	{
		iVar1 = 0;
		while (iVar1 <= 1)
		{
			if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_199(iVar1)))
			{
				if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(func_199(iVar1)))
				{
					ANIMSCENE::_DELETE_ANIM_SCENE(func_199(iVar1));
				}
			}
			iVar1++;
		}
	}
	func_200(1);
	func_201(0);
	func_202();
	func_203(&(Local_672.f_19.f_39), 1, 1);
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_204(uParam0))
	{
		return -1;
	}
	iVar0 = func_205(uParam0, uParam0->f_9);
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
			iVar0 = func_205(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_72(int iParam0)
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

void func_73(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_206(bParam0, iParam1);
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

void func_74(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_208(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_208(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_208(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_208(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_208(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_208(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_208(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_208(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_208(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			func_209(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_76(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_207(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_208(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_208(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_208(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_208(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_210(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_209(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_209(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_209(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_209(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_209(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_209(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_209(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_209(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_209(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_209(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_209(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_209(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_209(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_209(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_209(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_209(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_79(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 8);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 7);
			func_209(bParam0, 8);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			func_209(bParam0, 6);
			func_209(bParam0, 7);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			func_209(bParam0, 6);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			func_209(bParam0, 5);
			func_209(bParam0, 9);
			func_209(bParam0, 10);
			func_209(bParam0, 11);
			func_211(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_80(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_208(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_208(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_208(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_208(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_208(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_208(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_208(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_208(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_208(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_208(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_81(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_207(bParam0);
	func_212(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_82(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_213(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_213(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_213(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_213(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_213(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_83(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_208(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_208(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_208(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_208(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_208(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_208(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_208(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_208(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_208(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_84(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_207(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_85(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_207(bParam0);
	func_212(bParam0, 1);
	func_212(bParam0, 4);
	func_212(bParam0, 8);
	func_212(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_214(func_135(iParam2)) };
			break;
	}
}

void func_86(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_215(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_215(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_215(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_215(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_87(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_208(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
			break;
	}
}

void func_88(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_216(bParam0, iParam2);
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

void func_89(bool bParam0, int iParam1)
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
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_217(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_217(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_90(bool bParam0, int iParam1)
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
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_218(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_218(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
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
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_209(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_209(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_207(bParam0);
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
			func_209(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_209(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_209(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_209(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_209(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_209(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_209(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_209(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_209(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_209(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_207(bParam0);
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
			func_209(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_209(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_209(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_209(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_209(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_209(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_209(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_209(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_209(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_209(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_209(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
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
			func_219(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_219(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_219(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
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
			func_220(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_220(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_220(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_220(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_220(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_220(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_220(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_220(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_96(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_207(bParam0);
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
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_209(bParam0, 3);
			func_209(bParam0, 4);
			func_209(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_97(bool bParam0, int iParam1)
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
			func_221(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_221(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_221(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_98(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_207(bParam0);
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
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_209(bParam0, 2);
			func_209(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_209(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_209(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_99(bool bParam0, int iParam1)
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
			func_222(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_222(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_222(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_100(bool bParam0, int iParam1, int iParam2)
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
	func_223(bParam0, iParam1, iParam2);
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

void func_101(bool bParam0, int iParam1, int iParam2)
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
	func_224(bParam0, iParam1, iParam2);
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

void func_102(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_207(bParam0);
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
			func_209(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_209(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_209(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_209(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_209(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_209(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_209(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_209(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_209(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_209(bParam0, 1);
			break;
	}
}

void func_103(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_208(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_104(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_208(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_208(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_208(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_208(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_208(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_208(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_105(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_207(bParam0);
	switch (iParam1)
	{
		case 0:
			func_208(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_208(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_208(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_208(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_209(bParam0, 0);
			func_209(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_106(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_225(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_225(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_225(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_107(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_226(iParam1);
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
	*bParam0 = func_227(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_212(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_229(func_228(iVar0), iParam2);
		bParam0->f_15[0] = func_230(func_228(iVar0), iParam2);
		bParam0->f_5 = func_231(iVar0, iParam2);
		bParam0->f_11 = { func_232(iVar0, iParam2) };
	}
}

int func_108(int iParam0)
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

int func_109(int iParam0, var uParam1, int iParam2)
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

struct<2> func_110()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_111()
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
			Local_63[iVar1 /*19*/].f_2.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_112()
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
			if (func_187(iVar1, iVar2))
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

void func_113()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_233(&(Local_672.f_150), &(Local_672.f_150.f_32));
	bVar2 = true;
	if (!func_234(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_19.f_37.f_4[iVar0] = 0;
			Local_19.f_37.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_63[iVar1 /*19*/].f_7.f_8[iVar0] = 0;
		}
		iVar0++;
	}
	func_235(&(Local_672.f_150.f_75), 8, -1);
	if (bVar2)
	{
		func_235(&(Local_63[iVar1 /*19*/].f_7), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_235(&(Local_63[iVar3 /*19*/].f_7), 8, -1);
			iVar3++;
		}
	}
}

void func_114()
{
}

void func_115(var uParam0)
{
	func_236(uParam0, 0);
	func_237(uParam0, 0);
	func_238(uParam0, 1);
	func_239(uParam0, 1);
	func_240(uParam0, 0);
	func_241(uParam0, 1);
	func_242(uParam0, 1, 1, 1);
}

int func_116(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return -0.0308907f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 179641.9f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 179641.9f;
						case 1:
							return -0.0308907f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return -0.0308907f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 496106.3f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 179641.9f;
						case 1:
							return -0.0308907f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 179641.9f;
						case 1:
							return 1.059505E-35f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0;
}

void func_117(int iParam0, int iParam1)
{
	Local_672.f_74.f_7[iParam0 /*11*/].f_3 = iParam1;
}

Vector3 func_118(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -997542154, 1157860159, 1135882627;
						case 1:
							return -997303783, 1158333048, 1135157291;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return -980923468, -984156948, 1105745973;
						case 1:
							return -980861992, -984198449, 1105561922;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -982288543, -988035027, -1053736588;
						case 1:
							return -982051894, -987816792, -1069480285;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -989299698, -986436261, 1102874359;
						case 1:
							return -989515449, -986638825, 1107528822;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return -989708727, -995061336, 1124326316;
						case 1:
							return -989428233, -995418658, 1124409407;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return -1000315293, 1141241518, 1114173656;
						case 1:
							return -998994885, 1140224454, 1114965758;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1133271944, 1132722864, 1122092791;
						case 1:
							return 1131194825, 1135009272, 1122406391;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1152737875, 1151172759, 1126611223;
						case 1:
							return 1152619454, 1151919122, 1126271698;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1160105939, 1150595099, 1122854935;
						case 1:
							return 1159718895, 1150560171, 1126326225;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1153213250, -989636818, 1110786284;
						case 1:
							return 1153213250, -989636818, 1110786284;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_119(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1129868820;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1131182817;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1131182817;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1131182817;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1131937137;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1133945160;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1128927068;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1132083937;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1134132593;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1122992128;
						case 1:
							return 1133081068;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f;
}

void func_120(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_672.f_74.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_672.f_74.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_244(&(Local_672.f_74.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_245(&(Local_672.f_74.f_7[iParam0 /*11*/].f_2), 2);
	}
}

float func_121(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
							return -1.473258E-30f;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
							return 1.081646E-10f;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
							return -6.546734E-35f;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
							return -3.169239E-05f;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
							return 2.935741E-31f;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
							return 2.05683E-22f;
						default:
							break;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
							return -2.761433E-18f;
						default:
							break;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
							return 2.45156E+38f;
						default:
							break;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
							return 31423.4f;
						default:
							break;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
							return 1.122633E+20f;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 1.863516E-37f;
}

void func_122(int iParam0, int iParam1)
{
	Local_672.f_74.f_7[iParam0 /*11*/].f_4 = iParam1;
}

void func_123(int iParam0)
{
	func_246(iParam0, 4);
}

int func_124()
{
	return func_247();
}

int func_125(int iParam0)
{
	switch (func_124())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1.972519E-31f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 6.92087E-27f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 6.92087E-27f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1.221607E+32f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2.374367E+30f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -2.374367E+30f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1.221607E+32f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1.221607E+32f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1.221607E+32f;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_126(int iParam0, int iParam1)
{
	func_248(0, iParam0, iParam1);
}

Vector3 func_127(int iParam0)
{
	switch (func_124())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -997515399, 1157857785, 1135898887;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -981046767, -984136674, 1107725097;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -982292069, -988050956, -1052868786;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -989259925, -986503730, 1104155420;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -989698430, -995090716, 1124296004;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return -1000312260, 1141187968, 1112360907;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return 1133527344, 1132465020, 1121684760;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return 1153513268, 1151960525, 1125234185;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return 1160086692, 1150586833, 1122984180;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return func_249();
				case 1:
					return 1153232633, -989618949, 1110515487;
				default:
					break;
			}
			break;
	}
	return func_249();
}

void func_128(int iParam0, vector3 vParam1, float fParam4, int iParam5, bool bParam6)
{
	if (bParam6)
	{
		func_250(iParam0);
	}
	func_251(0, iParam0, vParam1, fParam4, iParam5);
}

void func_129(int iParam0, bool bParam1)
{
	func_252(0, iParam0, bParam1);
}

void func_130(int iParam0, float fParam1)
{
	func_253(0, iParam0, fParam1);
}

void func_131()
{
	Local_19.f_7.f_13 = { 1068708659 /* Float: 1.4f */, 1058642330 /* Float: 0.6f */, -1063256064 /* Float: -5f */ };
	Local_19.f_7.f_4.f_3 = 4;
}

bool func_132(int iParam0)
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

bool func_133(var uParam0, int iParam1)
{
	return func_254(uParam0->f_25, iParam1);
}

void func_134(int iParam0)
{
	if (Local_19 != iParam0)
	{
		Local_19 = iParam0;
	}
}

int func_135(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_136(int iParam0)
{
	if (!func_144(iParam0))
	{
		func_244(&(Local_19.f_1), iParam0);
	}
}

bool func_137(int iParam0)
{
	if (!func_196(iParam0))
	{
		return false;
	}
	return (func_255(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_138(int iParam0)
{
	if (Local_19.f_2 != iParam0)
	{
		Local_19.f_2 = iParam0;
	}
}

bool func_139(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_19.f_3.f_1))
	{
		return true;
	}
	if (func_256(Local_672.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_19.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_672.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_257(&uVar1, Param0);
		Local_19.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_160(128);
	}
	else if (!func_143(128, 255))
	{
		Local_19.f_3.f_1 = func_258(Param0);
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_19.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_19.f_3);
	switch (iVar0)
	{
		case 3:
			Local_19.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_19.f_3);
			return true;
		case 4:
			Local_19.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_140(int iParam0)
{
	return iParam0 != 0;
}

void func_141(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_142(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_143(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	return func_195(Local_63[iParam1 /*19*/], iParam0);
}

bool func_144(int iParam0)
{
	return func_195(Local_19.f_1, iParam0);
}

bool func_145()
{
	return true;
}

void func_146()
{
}

bool func_147()
{
	return true;
}

bool func_148()
{
	bool bVar0;

	if (!func_259(&bVar0))
	{
		if (bVar0)
		{
			func_260();
		}
		return false;
	}
	if (!func_261(&bVar0))
	{
		if (bVar0)
		{
			func_260();
		}
		return false;
	}
	return true;
}

void func_149()
{
}

void func_150()
{
	if (!func_144(32) && func_262(32))
	{
		func_136(32);
	}
	if (!func_144(64) && func_262(64))
	{
		func_136(64);
	}
	if (!func_144(16) && func_263(16))
	{
		func_136(16);
	}
	if ((!func_144(2048) && func_262(2048)) && !func_262(4096))
	{
		func_136(2048);
	}
}

void func_151()
{
	bool bVar0;

	if (!bVar0 && func_144(16))
	{
		func_138(1);
		return;
	}
	if (func_144(2048) && !func_262(4096))
	{
		func_138(6);
		return;
	}
}

void func_152()
{
}

bool func_153()
{
	if (func_264())
	{
		return true;
	}
	if (func_265(2) && !func_265(8))
	{
		func_266();
	}
	switch (Local_19.f_7)
	{
		case 0:
			func_267();
			break;
		case 1:
			func_268();
			break;
		case 2:
			func_269();
			break;
		case 3:
			func_270();
			break;
		case 4:
			func_271();
			break;
		case 5:
			func_272();
			break;
		case 7:
			func_273();
			break;
	}
	return false;
}

void func_154()
{
}

bool func_155()
{
	return true;
}

void func_156(int iParam0)
{
	if (func_67(iParam0))
	{
		func_245(&(Local_672.f_7), iParam0);
	}
}

int func_157(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_196(iParam0))
	{
		return 0;
	}
	iVar0 = func_274(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_275(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_276(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_158(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_244(&(Local_672.f_7), iParam0);
	}
}

void func_159(int iParam0)
{
	if (func_195(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/], iParam0))
	{
		func_245(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/]), iParam0);
	}
}

void func_160(int iParam0)
{
	if (!func_143(iParam0, 255))
	{
		func_244(&(Local_63[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/]), iParam0);
	}
}

void func_161(int iParam0)
{
	if (Local_672.f_8 != iParam0)
	{
		Local_672.f_8 = iParam0;
	}
}

bool func_162()
{
	int iVar0;
	int iVar1;

	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 <= 1)
	{
		if (!func_280(func_277(iVar1), &(Local_672.f_19.f_49[iVar1]), &(Local_19.f_7.f_1[iVar1]), func_278(iVar1), func_279(iVar1)))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	switch (func_124())
	{
		case 0:
			if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED("nb_slumped_hunter_cairn_1"))
			{
				TASK::REQUEST_WAYPOINT_RECORDING("nb_slumped_hunter_cairn_1");
				iVar0 = 0;
			}
			break;
	}
	return iVar0;
}

bool func_163()
{
	bool bVar0;

	bVar0 = false;
	if (!func_281())
	{
		bVar0 = true;
	}
	if (!func_282())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_164(var uParam0)
{
	*uParam0 = 0;
}

void func_165()
{
}

int func_166()
{
	return 1;
}

int func_167()
{
	bool bVar0;

	if (!func_283())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_168(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_169()
{
	if (!func_67(1))
	{
		func_284(Local_672.f_9);
		func_158(1);
	}
}

void func_170()
{
	func_285();
	func_286();
}

void func_171()
{
	int iVar0;
	int iVar1;

	iVar0 = func_199(0);
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		func_287();
		ANIMSCENE::START_ANIM_SCENE(iVar0);
	}
	func_288();
	func_201(1);
	func_289();
	func_290(1092616192 /* Float: 10f */, 1101004800 /* Float: 20f */, 1, 1f, 1);
	func_291(1f, 1f);
	func_293(func_292(0));
	iVar1 = func_294(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		PHYSICS::ACTIVATE_PHYSICS(iVar1);
	}
}

void func_172()
{
	func_295();
}

void func_173()
{
}

void func_174()
{
	float fVar0;

	if (func_256(Local_672.f_15))
	{
		return;
	}
	if (func_296())
	{
		return;
	}
	if (func_297(Local_672.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_672.f_15);
		if (fVar0 < 1128792064)
		{
			func_160(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_159(4096);
			func_160(2048);
		}
		else
		{
			func_159(4096);
			func_159(2048);
		}
	}
}

void func_175()
{
	func_298();
	func_299();
	func_300();
	func_301();
	func_302();
}

void func_176()
{
	if (func_303())
	{
		func_160(8);
	}
	else
	{
		func_159(8);
	}
}

void func_177()
{
	func_304(Local_19.f_7);
	func_305();
	func_306();
	func_307();
	func_308();
	func_309();
	func_310();
	switch (Local_672.f_19)
	{
		case 0:
			func_311();
			break;
		case 1:
			func_312();
			break;
		case 2:
			func_313();
			break;
		case 3:
			func_314();
			break;
		case 4:
			func_315();
			break;
		case 5:
			func_316();
			break;
		case 7:
			func_317();
			break;
	}
}

void func_178()
{
	if (!func_143(8, 255))
	{
		func_160(16);
	}
	else
	{
		func_159(16);
	}
}

void func_179()
{
	int iVar0;

	Local_672.f_6 = -1;
	Local_672.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_672.f_5 = (Local_672.f_5 || Local_63[iVar0 /*19*/]);
			Local_672.f_6 = (Local_672.f_6 && Local_63[iVar0 /*19*/]);
		}
		iVar0++;
	}
}

void func_180()
{
	if ((func_67(1024) && !func_143(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_318(&Global_0, 1)))
	{
		func_160(16384);
	}
}

bool func_181()
{
	return true;
}

void func_182()
{
	func_319();
}

void func_183(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_672.f_74.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_672.f_74.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_184(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_185(int iParam0, int iParam1)
{
	return func_195(Local_672.f_74.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_186(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_187(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_188(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_672.f_115[iParam0 /*34*/].f_4, iParam1);
}

void func_189(var uParam0)
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

bool func_190(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_191(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_321(func_320(Param0));
	iVar1 = func_322(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_323(Param0, &Var2, iParam2);
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

void func_192(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_324(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_325(iVar0);
}

void func_193(int iParam0, int iParam1)
{
	func_141(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_326(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_327(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_328(iParam0);
			break;
	}
}

void func_194(int iParam0)
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
	Var0 = { func_329(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_195(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_196(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_197(int iParam0)
{
	if (func_330(&(Local_672.f_19.f_41[iParam0])))
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(Local_672.f_19.f_41[iParam0]), 1);
	}
}

void func_198(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

int func_199(int iParam0)
{
	int iVar0;

	iVar0 = Local_19.f_7.f_1[iParam0];
	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar0))
	{
		return NETWORK::_NET_TO_ANIM_SCENE(iVar0);
	}
	return 0;
}

void func_200(bool bParam0)
{
	if (bParam0)
	{
		if (func_331(64))
		{
			Global_1156096.f_21645[30 /*209*/].f_208 = 0;
			func_332(64);
		}
	}
	else if (!func_331(64))
	{
		Global_1156096.f_21645[30 /*209*/].f_208 = 1;
		func_333(64);
	}
}

void func_201(bool bParam0)
{
	float fVar0;
	vector3 vVar1;

	if (bParam0 == func_331(8))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_RESLH_Area", bParam0, true);
	if (bParam0)
	{
		fVar0 = 0f;
		vVar1 = { func_249() };
		if (func_334(0))
		{
			fVar0 = func_335(0);
			vVar1 = { func_336(0) };
		}
		AUDIO::_SET_AMBIENT_ZONE_POSITION("AZ_RESLH_Area", vVar1, fVar0);
		func_333(8);
	}
	else
	{
		func_332(8);
	}
}

void func_202()
{
	if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_52))
	{
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Local_672.f_19.f_52);
		func_198(Local_672.f_19.f_52);
	}
}

void func_203(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_337(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_338(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_339(iVar0);
	*uParam0 = 0;
}

bool func_204(var uParam0)
{
	if (func_39(*uParam0))
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

int func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_340(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_341(iParam1)) - 1);
	}
	bVar2 = func_39(*uParam0);
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

void func_206(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_342(bParam0);
			break;
		case 1:
			func_342(bParam0);
			break;
		case 2:
			func_342(bParam0);
			break;
		case 3:
			func_343(bParam0);
			break;
		case 4:
			func_342(bParam0);
			break;
		case 5:
			func_342(bParam0);
			break;
		case 6:
			func_343(bParam0);
			break;
		case 7:
			func_343(bParam0);
			break;
		case 8:
			func_343(bParam0);
			break;
		case 9:
			func_342(bParam0);
			break;
		default:
			func_208(bParam0);
			func_207(bParam0);
			break;
	}
}

void func_207(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_344(bParam0, iVar0);
		iVar0++;
	}
}

void func_208(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_209(bParam0, iVar0);
		iVar0++;
	}
}

void func_209(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_210(bool bParam0, int iParam1)
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
			func_345(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_346(bParam0);
			break;
		default:
			func_208(bParam0);
			func_207(bParam0);
			break;
	}
}

void func_211(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_344(bParam0, 0);
			break;
		case 1:
		case 2:
			func_344(bParam0, 1);
			func_344(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_344(bParam0, 0);
			func_344(bParam0, 2);
			break;
		case 8:
			func_344(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_344(bParam0, 1);
			break;
		default:
			func_207(bParam0);
			break;
	}
}

void func_212(bool bParam0, int iParam1)
{
	func_275(&(bParam0->f_25), iParam1);
}

void func_213(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_347(bParam0);
			break;
		case 1:
			func_348(bParam0);
			break;
		case 2:
			func_349(bParam0);
			break;
		case 3:
			func_350(bParam0);
			break;
		default:
			func_208(bParam0);
			func_207(bParam0);
			break;
	}
}

Vector3 func_214(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_215(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_351(bParam0);
			break;
		case 1:
		case 2:
			func_352(bParam0);
			break;
		case 3:
		case 4:
			func_353(bParam0);
			break;
		default:
			func_207(bParam0);
			break;
	}
	func_208(bParam0);
}

void func_216(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_344(bParam0, 0);
			func_344(bParam0, 2);
			break;
		case 1:
			func_344(bParam0, 1);
			func_344(bParam0, 3);
			break;
		default:
			func_208(bParam0);
			func_207(bParam0);
			break;
	}
}

void func_217(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_209(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_209(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_209(bParam0, 0);
			break;
		default:
			func_209(bParam0, 0);
			break;
	}
	func_207(bParam0);
}

void func_218(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_209(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_209(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_209(bParam0, 2);
			break;
		default:
			func_208(bParam0);
			break;
	}
	func_207(bParam0);
}

void func_219(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_209(bParam0, 0);
			func_344(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_209(bParam0, 1);
			func_344(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_209(bParam0, 2);
			func_344(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_209(bParam0, 3);
			func_344(bParam0, 0);
			break;
	}
}

void func_220(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_209(bParam0, 0);
			func_344(bParam0, 0);
			break;
		case 2:
			func_209(bParam0, 1);
			func_344(bParam0, 0);
			break;
		case 3:
		case 4:
			func_209(bParam0, 2);
			func_344(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_209(bParam0, 3);
			func_344(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_209(bParam0, 4);
			func_344(bParam0, 1);
			break;
	}
}

void func_221(bool bParam0, int iParam1)
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
			func_209(bParam0, 3);
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
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			break;
		default:
			func_208(bParam0);
			break;
	}
	func_207(bParam0);
}

void func_222(bool bParam0, int iParam1)
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
			func_209(bParam0, 3);
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
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			break;
		default:
			func_208(bParam0);
			break;
	}
	func_207(bParam0);
}

void func_223(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_344(bParam0, 0);
			func_209(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_344(bParam0, 1);
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			func_209(bParam0, 2);
			break;
		default:
			func_344(bParam0, 0);
			func_209(bParam0, 0);
			break;
	}
}

void func_224(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_344(bParam0, 0);
			func_209(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_344(bParam0, 1);
			func_209(bParam0, 0);
			func_209(bParam0, 1);
			break;
		default:
			func_344(bParam0, 0);
			func_209(bParam0, 0);
			break;
	}
}

void func_225(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_207(bParam0);
			func_208(bParam0);
			break;
		default:
			func_207(bParam0);
			func_208(bParam0);
			break;
	}
}

int func_226(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_227(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_228(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_229(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_354(&Var1, iParam0) && func_355(&Var1, iParam1))
	{
		func_356(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_230(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_354(&Var1, iParam0) && func_355(&Var1, iParam1))
	{
		func_356(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_231(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_357(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_232(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_357(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

void func_233(var uParam0, var uParam1)
{
	func_115(uParam0);
	func_238(uParam0, 1);
	func_358(uParam0, 1);
	func_359(uParam1);
	func_360(uParam1);
	func_361(uParam1);
	func_362(uParam1, 1);
	func_363(uParam1, 1);
}

bool func_234(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_364(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_235(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_365(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

void func_236(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 16384);
	}
	else
	{
		func_244(&(uParam0->f_2), 16384);
	}
}

void func_237(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 2048);
	}
	else
	{
		func_244(&(uParam0->f_2), 2048);
	}
}

void func_238(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 256);
	}
	else
	{
		func_244(&(uParam0->f_2), 256);
	}
}

void func_239(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 16);
	}
	else
	{
		func_245(uParam0, 1.504633E-36f);
		func_245(uParam0, 16);
	}
}

void func_240(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 128);
	}
	else
	{
		func_244(&(uParam0->f_2), 128);
	}
}

void func_241(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 256);
	}
	else
	{
		func_245(uParam0, 256);
	}
}

void func_242(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_244(uParam0, 2.524355E-29f);
	}
	else
	{
		func_245(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_244(uParam0, 2f);
	}
	else
	{
		func_245(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_244(uParam0, 1.084202E-19f);
	}
	else
	{
		func_245(uParam0, 1.084202E-19f);
	}
}

int func_243()
{
	return func_367();
}

void func_244(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_245(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_246(int iParam0, int iParam1)
{
	func_244(&(Local_672.f_74.f_7[iParam0 /*11*/].f_2), iParam1);
}

var func_247()
{
	return Local_672.f_2;
}

void func_248(int iParam0, int iParam1, int iParam2)
{
	Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2 = iParam2;
}

Vector3 func_249()
{
	return Local_672.f_15;
}

void func_250(int iParam0)
{
	func_368(0, iParam0);
}

void func_251(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6)
{
	Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_7 = { vParam2 };
	Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_10 = { 0f, 0f, fParam5 };
	Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_13 = iParam6;
}

void func_252(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		func_244(&(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1), 32);
	}
	else
	{
		func_245(&(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1), 32);
	}
}

void func_253(int iParam0, int iParam1, float fParam2)
{
	if (func_369(iParam0, iParam1))
	{
		return;
	}
	Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_3 = fParam2;
	MISC::SET_BIT(&(Local_672.f_115[iParam0 /*34*/].f_3), iParam1);
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_255(int iParam0)
{
	int iVar0;

	if (!func_196(iParam0))
	{
		return false;
	}
	iVar0 = func_370(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_256(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_257(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_258(struct<31> Param0)
{
	var uVar0;

	func_257(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_259(var uParam0)
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
		if (func_185(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_371(iVar2, uParam0, &bVar1))
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
			if (func_372(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_30[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_30[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_30[iVar2]);
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

void func_260()
{
	func_138(2);
}

bool func_261(bool bParam0)
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
	vVar10 = { Local_672.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_373(iVar0, iVar1);
			if (func_187(iVar0, iVar1))
			{
			}
			else if (func_186(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_2, iVar1))
			{
				if (func_374(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_33[iVar0 /*3*/][iVar1]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_33[iVar0 /*3*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
				{
					if (!func_375(iVar0, iVar1))
					{
						vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_376(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_376(iVar0, iVar1) };
					}
					if (func_377(iVar0, iVar1))
					{
						if (!func_378(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_379(iVar0, iVar1))
							{
								iVar13 = PED::_CREATE_META_PED_ASSET(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, true, false, false);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_19.f_33[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_369(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_376(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_19.f_33[iVar0 /*3*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_19.f_33[iVar0 /*3*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1086; //curOff = 573
							}
							else if (!func_380(&(Local_19.f_33[iVar0 /*3*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_19.f_33[iVar0 /*3*/][iVar1]);
								if (func_374(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_33[iVar0 /*3*/][iVar1]))
										{
											NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_33[iVar0 /*3*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/].f_2), iVar1);
								if (func_381(iVar0, iVar1))
								{
									TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
									GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
								}
								if (func_382(iVar0, iVar1))
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
								}
								if (func_383(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_SET_ENTITY_FADE_IN(iVar13);
								}
								if (func_377(iVar0, iVar1))
								{
									ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
								}
								vVar4 = { func_384(iVar0, iVar1) };
								if (!func_256(vVar4))
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
										if (!func_385(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_386(vVar4.x)), MISC::ABSF(func_386(vVar4.y))) };
											vVar27 = { func_387(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_388(iVar0, iVar1))
								{
									func_389(iVar0, iVar1, 1);
								}
								if (func_390(iVar0, iVar1))
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

bool func_262(int iParam0)
{
	return func_195(Local_672.f_5, iParam0);
}

bool func_263(int iParam0)
{
	return func_195(Local_672.f_6, iParam0);
}

bool func_264()
{
	if (Local_19.f_7 == 7)
	{
		return !func_391(0, 1132068864 /* Float: 250f */, 0);
	}
	if (func_392(2f))
	{
		func_393(7);
	}
	return false;
}

bool func_265(int iParam0)
{
	return func_195(Local_19.f_7.f_16, iParam0);
}

void func_266()
{
	struct<2> Var0;
	vector3 vVar10;
	char cVar14[64];
	int iVar22;

	if (!func_265(8))
	{
		Var0 = -1;
		vVar10.f_3 = -1;
		StringCopy(&cVar14, "ORESPH_BearSpawnScan", 64);
		Var0 = 20;
		Var0.f_1 = { func_249() };
		iVar22 = func_394(cVar14, &Var0, &vVar10);
		switch (iVar22)
		{
			case 0:
				break;
			case 2:
				Local_19.f_7.f_18 = { func_118(1) };
				func_395(8);
				break;
			case 1:
				Local_19.f_7.f_18 = { vVar10 };
				func_395(8);
				break;
		}
	}
}

void func_267()
{
	int iVar0;

	iVar0 = func_199(0);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
		{
			return;
		}
	}
	if (func_296())
	{
		func_393(1);
	}
}

void func_268()
{
	if (func_396(1))
	{
		Local_19.f_7.f_17 = func_398(0, 56233, 1092616192 /* Float: 10f */, 1, 0);
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_7.f_17))
		{
			func_399(&(Local_19.f_7.f_21), Local_19.f_7.f_17, func_199(1));
			func_393(2);
		}
		else
		{
			func_393(4);
		}
	}
}

void func_269()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_396(8))
	{
		func_393(4);
	}
	else if (func_401(&(Local_19.f_7.f_21), func_400(), &bVar0))
	{
		if (bVar0)
		{
			func_393(4);
		}
		else
		{
			if (func_396(64))
			{
				func_395(2);
			}
			else
			{
				iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 101);
				if (iVar1 < 25)
				{
					func_395(2);
				}
				else
				{
					func_395(4);
				}
			}
			func_393(3);
		}
	}
}

void func_270()
{
	int iVar0;

	iVar0 = func_199(1);
	if (func_396(8))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
		{
			func_393(7);
		}
	}
	else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_7.f_17))
	{
		func_393(7);
	}
	else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0) || ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		func_393(7);
	}
}

void func_271()
{
	if (func_396(1))
	{
		return;
	}
	if (func_396(8))
	{
		return;
	}
	if (!func_392(256))
	{
		return;
	}
	func_402(&(Local_19.f_7.f_21));
	func_393(5);
}

void func_272()
{
	if (func_396(256))
	{
		return;
	}
	func_393(1);
}

void func_273()
{
}

int func_274(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	if (!func_255(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_275(var uParam0, int iParam1)
{
	func_403(uParam0, iParam1);
}

void func_276(var uParam0, int iParam1)
{
	func_404(uParam0, iParam1);
}

char* func_277(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "script@beat@wilderness@lostfriend@lake_bodyloops";
				case 1:
					return "script@beat@wilderness@lostfriend@lake_turnbody";
				default:
					break;
			}
			return "";
	}
	return "";
}

int func_278(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return 2;
				case 1:
					return 0;
				default:
					break;
			}
			return 0;
	}
	return 0;
}

char* func_279(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (iParam0)
			{
				case 0:
					return "PL_BODYSTART";
				case 1:
					return func_400();
				default:
					break;
			}
			return "";
	}
	return "";
}

bool func_280(char* sParam0, var uParam1, var uParam2, int iParam3, char* sParam4)
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

bool func_281()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (MISC::IS_BIT_SET(Local_672.f_74.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_405(iVar0);
			if (iVar2 == 0)
			{
				Jump @128; //curOff = 53
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_672.f_74.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_672.f_74.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @128; //curOff = 109
				}
				else
				{
					MISC::SET_BIT(&(Local_672.f_74.f_3), iVar0);
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

bool func_282()
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
			if (MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_373(iVar0, iVar1);
				if (func_406(iVar1))
				{
					if (Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_IS_META_PED_ASSET_VALID(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6 = PED::_REQUEST_META_PED_ASSET_BUNDLE(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_HAS_META_PED_ASSET_LOADED(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (func_407(iVar1))
				{
					WEAPON::_REQUEST_WEAPON_ASSET(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, -1, false);
					if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @452; //curOff = 348
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @452; //curOff = 408
					}
					else if (!MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/].f_1), iVar1);
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

bool func_283()
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
	vVar10 = { Local_672.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 2)
		{
			iVar2 = func_373(iVar0, iVar1);
			if (func_186(iVar0, iVar1))
			{
			}
			else if (!func_187(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_2, iVar1))
					{
						if (func_374(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar0 /*3*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_33[iVar0 /*3*/][iVar1]))
								{
									NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_33[iVar0 /*3*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_672.f_115[iVar0 /*34*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_375(iVar0, iVar1))
				{
					vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_376(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_376(iVar0, iVar1) };
				}
				if (func_377(iVar0, iVar1))
				{
					if (!func_378(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_379(iVar0, iVar1))
						{
							iVar13 = PED::_CREATE_META_PED_ASSET(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, false, false, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_369(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_5, Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/].f_4, func_376(iVar0, iVar1), true, 1f);
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
						MISC::SET_BIT(&(Local_672.f_115[iVar0 /*34*/].f_2), iVar1);
						if (func_381(iVar0, iVar1))
						{
							TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
							GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
						}
						if (func_382(iVar0, iVar1))
						{
							ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
						}
						if (func_383(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_SET_ENTITY_FADE_IN(iVar13);
						}
						if (func_377(iVar0, iVar1))
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
						}
						vVar4 = { func_384(iVar0, iVar1) };
						if (!func_256(vVar4))
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
								if (!func_385(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_386(vVar4.x)), MISC::ABSF(func_386(vVar4.y))) };
									vVar27 = { func_387(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_672.f_115[iVar0 /*34*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_388(iVar0, iVar1))
						{
							func_389(iVar0, iVar1, 1);
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

void func_284(struct<2> Param0)
{
	if (func_322(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_322(Param0)))
	{
		STATS::_0x99230691875FC218(func_320(Param0), func_322(Param0), Global_34);
	}
}

void func_285()
{
	int iVar0;
	int iVar1;

	if (!func_234(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_408(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_286()
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
			if (func_187(iVar1, iVar2))
			{
			}
			else if (func_186(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar1 /*3*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_19.f_33[iVar1 /*3*/][iVar2]);
				Local_672.f_115[iVar1 /*34*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_374(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_33[iVar1 /*3*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_33[iVar1 /*3*/][iVar2]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_33[iVar1 /*3*/][iVar2]);
						}
					}
				}
				if (func_381(iVar1, iVar2))
				{
					TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
					GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
				}
			}
			else if (0 != func_373(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_287()
{
	int iVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(func_199(0)))
	{
		return;
	}
	iVar0 = func_199(0);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, func_409(1), func_410(1), 2);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_411(), func_292(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_412(), func_294(0), 0);
}

void func_288()
{
	int iVar0;

	if (func_396(1.084202E-19f))
	{
		return;
	}
	iVar0 = func_292(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_413(iVar0, 0);
	PED::SET_LOOTING_FLAG(iVar0, 4, true);
	PED::SET_LOOTING_FLAG(iVar0, 25, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 1, false);
	ENTITY::SCRIPT_OVERRIDE_ENTITY_LOOT_TABLE_PERMANENT(iVar0, -1.997959E+37f);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar0, 7, false);
	func_414(1.084202E-19f);
}

void func_289()
{
	func_202();
	Local_672.f_19.f_52 = VOLUME::CREATE_VOLUME_CYLINDER(func_249(), 0f, 0f, 0f, 3f, 3f, 3f);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Local_672.f_19.f_52, 2490399, 0, 0, -1, -1, 10);
}

void func_290(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_672.f_264.f_2 = iParam2;
	Local_672.f_264.f_9 = fParam0;
	Local_672.f_264.f_10 = fParam1;
	Local_672.f_264.f_8 = fParam3;
	if (bParam4)
	{
		func_244(&(Local_672.f_264.f_12), 1);
	}
	else
	{
		func_245(&(Local_672.f_264.f_12), 1);
	}
}

void func_291(float fParam0, float fParam1)
{
	func_244(&(Local_672.f_264.f_12), 2);
	Local_672.f_264.f_7 = fParam1;
	Local_672.f_264.f_5 = fParam0;
}

int func_292(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/];
}

int func_293(var uParam0)
{
	if (func_415(uParam0, &(Local_672.f_264.f_13)))
	{
		Local_672.f_264++;
		return 1;
	}
	return 0;
}

var func_294(int iParam0)
{
	return func_416(0, iParam0);
}

void func_295()
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
		if (func_418(func_417(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_SET_EVENT_TRACKER_FOR_PED(Var1, "MpRandomEvent", 1);
					func_419(&(Local_672.f_150), Var1);
					func_420(func_417(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_296()
{
	return (func_144(32) || func_143(32, 255));
}

bool func_297(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_421(iParam0, 12648.71f) };
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

void func_298()
{
	func_422();
	func_423();
}

void func_299()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_424(iVar0, bVar1, iVar2);
		func_425(iVar0, bVar1, iVar2);
		func_426(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_300()
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
	if (!func_234(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_672.f_74.f_40)
	{
		bVar8 = true;
		Local_672.f_74.f_40 = !Local_672.f_74.f_40;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_672.f_74.f_30 >= 2)
		{
			Local_672.f_74.f_30 = 0;
		}
		iVar0 = Local_672.f_74.f_30;
		Local_672.f_74.f_30++;
		iVar9 = func_427(iVar0);
		iVar1 = Local_672.f_74.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_185(iVar9, 4))
		{
			func_408(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_63[iVar3 /*19*/].f_2.f_2[iVar0] > -1f)
			{
				Local_63[iVar3 /*19*/].f_2.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_672.f_74.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_672.f_74.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_672.f_74.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_672.f_74.f_31), iVar0);
			}
		}
		else
		{
			bVar7 = func_428(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_672.f_74.f_31, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_672.f_74.f_31), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_672.f_74.f_31), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_63[iVar3 /*19*/].f_2.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_63[iVar3 /*19*/].f_2.f_1), iVar0);
				}
				func_429(&(Local_672.f_74.f_32[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_63[iVar3 /*19*/].f_2.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_430(&(Local_672.f_74.f_32[iVar0 /*3*/])) || func_431(&(Local_672.f_74.f_32[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_432(&(Local_672.f_74.f_32[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_63[iVar3 /*19*/].f_2.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_185(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_672.f_74.f_40, false, 256);
		}
		if (func_185(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_433(iVar9))
						{
							if (!func_371(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_434(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_185(iVar9, 8))
			{
				if (!func_433(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_672.f_74.f_31 != 0)
	{
		if (!func_435(1, 255))
		{
			func_436(1);
		}
	}
	else if (func_435(1, 255))
	{
		func_437(1);
	}
}

void func_301()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<13> Var5;
	int iVar18;
	var uVar19;
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
	if (!func_234(&iVar25))
	{
		return;
	}
	func_438();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::IS_WEAPON_A_GUN(iVar26))
	{
		Local_672.f_150.f_64 = 0;
		Local_63[iVar25 /*19*/].f_7.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == -9.675868E-11f || iVar26 == 5.763438E+22f));
	bVar30 = false;
	while (iVar22 < 2)
	{
		if (Local_672.f_150.f_109 >= 2)
		{
			Local_672.f_150.f_109 = 0;
		}
		iVar1 = Local_672.f_150.f_109;
		Local_672.f_150.f_109++;
		iVar22++;
		iVar18 = func_417(iVar1);
		if (!func_439(iVar18))
		{
		}
		else if (func_440(iVar18, &Var5))
		{
			if (func_441(&Var5, iVar18))
			{
				if (func_442(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1))
				{
					func_443(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1);
				}
			}
			else if (!func_442(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1))
			{
				func_444(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_445(iVar18);
				if (func_446(iVar18))
				{
					if (func_447(iVar18))
					{
						if (!func_448(iVar18))
						{
							func_449(iVar18);
						}
					}
					if (func_450(iVar18))
					{
						func_451(iVar18);
					}
				}
				else
				{
					if (func_452(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_453(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_419(&(Local_672.f_150), Var5);
						}
					}
					if (!func_454(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_455(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_456(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_457(Var5, Var5.f_1, &(Local_672.f_150), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_672.f_150.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_672.f_150.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1067450368) && func_458(PLAYER::PLAYER_PED_ID(), Var5, 0.707f) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_459(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_672.f_150.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_460(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_SET_EVENT_TRACKER_FOR_PED(Var5, "MpRandomEvent", 1);
										func_420(iVar18);
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
														if (func_461(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_672.f_150.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_672.f_150.f_2 & 4 != 0)
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
									if (func_462(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_672.f_150.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_463(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_442(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1))
								{
									func_443(&(Local_63[iVar25 /*19*/].f_7), 8, iVar1);
								}
								func_464(iVar18, 1);
								if (func_465(iVar18))
								{
									if (!func_466(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_467(iVar18))
											{
											}
											else
											{
												func_468(iVar18);
												func_469(iVar18);
												Jump @1380; //curOff = 1189
												if (func_470(iVar18))
												{
												}
												else if (iVar23 < 1)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_672.f_150.f_111[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_672.f_150.f_111[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_672.f_150.f_111[iVar18];
																Local_672.f_150.f_111[iVar18]++;
															}
															iVar24++;
															if (func_471(iVar0, &uVar21, &iVar20, &uVar19))
															{
																if (!func_472(iVar18, iVar20))
																{
																	if (func_454(iVar18, iVar0))
																	{
																		if (!func_473(iVar18, uVar21, iVar20, uVar19))
																		{
																		}
																		else
																		{
																			func_474(iVar18, iVar20);
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

void func_302()
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

	fVar0 = func_475();
	if (Local_672.f_264.f_4)
	{
		return;
	}
	if (!func_234(&iVar1))
	{
		return;
	}
	if (func_195(Local_63[iVar1 /*19*/].f_18, 1))
	{
		Local_672.f_264.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_476(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_672.f_15);
	fVar4 = Local_672.f_264.f_9;
	fVar5 = Local_672.f_264.f_10;
	if (func_195(Local_672.f_264.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_672.f_264.f_7));
		if (fVar7 > 0f)
		{
			if (func_477(Local_672.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_672.f_264.f_6 < 1f)
			{
				Local_672.f_264.f_6 = (Local_672.f_264.f_6 + fVar8);
				if (Local_672.f_264.f_6 > 1f)
				{
					Local_672.f_264.f_6 = 1f;
				}
			}
		}
		else if (Local_672.f_264.f_6 > 0f)
		{
			Local_672.f_264.f_6 = (Local_672.f_264.f_6 - fVar8);
			if (Local_672.f_264.f_6 < 0f)
			{
				Local_672.f_264.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_672.f_264.f_5) * Local_672.f_264.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_244(&(Local_63[iVar1 /*19*/].f_18), 1);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_264.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_672.f_264.f_11, false, 0))
	{
		func_244(&(Local_63[iVar1 /*19*/].f_18), 1);
	}
	else if (Local_672.f_264 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 1)
		{
			func_478(&(Local_672.f_264.f_13[iVar10 /*9*/]), fVar5, 4f, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_479(&(Local_672.f_264.f_13), Local_672.f_264, Local_672.f_264.f_8))
		{
			func_244(&(Local_63[iVar1 /*19*/].f_18), 1);
		}
	}
	if (func_195(Local_63[iVar1 /*19*/].f_18, 1))
	{
		Local_672.f_264.f_4 = 1;
	}
}

bool func_303()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_672.f_14))
	{
		return false;
	}
	if (func_480())
	{
		return false;
	}
	if (func_481(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_304(int iParam0)
{
	if (Local_672.f_19 != iParam0)
	{
		Local_672.f_19 = iParam0;
	}
}

void func_305()
{
	int iVar0;

	Local_672.f_19.f_35 = -1;
	Local_672.f_19.f_36 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_364(iVar0, 1))
		{
			Local_672.f_19.f_36 = (Local_672.f_19.f_36 || Local_63[iVar0 /*19*/].f_1);
			Local_672.f_19.f_35 = (Local_672.f_19.f_35 && Local_63[iVar0 /*19*/].f_1);
		}
		iVar0++;
	}
}

void func_306()
{
	int iVar0;
	vector3 vVar1;

	if (Local_672.f_19.f_53 >= 5)
	{
		if (!func_331(2))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_482()) < 1120403456 || BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), func_249()) < 1120403456)
			{
				func_483();
				func_484();
				func_485();
				func_333(2);
			}
		}
		Local_672.f_19.f_53 = 0;
	}
	else
	{
		Local_672.f_19.f_53++;
	}
	if (func_334(0))
	{
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(func_292(0), 2f, 0, 1, 0, "NB_SLUMPED_CORPSE_PROMPT", 0);
	}
	if (Local_672.f_19 != 1)
	{
		if (func_337(Local_672.f_19.f_39))
		{
			func_203(&(Local_672.f_19.f_39), 1, 1);
		}
	}
	if (func_334(1))
	{
		iVar0 = func_292(1);
		if (!func_486(iVar0, 2.066914E+13f))
		{
			if (func_487(iVar0, 102.1545f, 1, 0))
			{
				func_488();
				func_489();
			}
		}
		vVar1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false) };
		if (func_490(1, 1108082688 /* Float: 35f */, 255, 0) || (func_490(1, 1114636288 /* Float: 60f */, 255, 0) && (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0, 17) || BUILTIN::VDIST(vVar1, func_249()) <= 1108082688)))
		{
			func_491(1, 4.085619E-09f);
		}
		else
		{
			func_183(1);
		}
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_672.f_19.f_49[1]))
	{
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(PLAYER::PLAYER_PED_ID(), Local_672.f_19.f_49[1]))
		{
			func_492(250);
		}
	}
}

void func_307()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::_GET_LAST_MOUNT(iVar0);
	bVar2 = func_331(32);
	bVar3 = false;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_493(iVar0, func_249(), 1101004800 /* Float: 20f */, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (!bVar3 && ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_493(iVar1, func_249(), 1101004800 /* Float: 20f */, 1, 1))
		{
			bVar3 = true;
		}
	}
	if (bVar2 != bVar3)
	{
		if (bVar3)
		{
			if (func_494())
			{
				func_333(32);
			}
		}
		else
		{
			func_495();
			func_332(32);
		}
	}
}

void func_308()
{
	int iVar0;
	int iVar1;

	if (func_496(1024, 255))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_497(iVar0))
	{
		return;
	}
	iVar1 = func_498(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return;
	}
	if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) != func_292(0))
	{
		return;
	}
	func_414(1024);
}

void func_309()
{
	if (!func_296())
	{
		return;
	}
	if (!func_496(2048, 255))
	{
		if (func_499())
		{
			func_500();
			func_501();
			func_414(2048);
		}
	}
	else if (!func_331(0f))
	{
		if (func_502())
		{
			func_503(1);
			func_333(0f);
		}
	}
}

void func_310()
{
	int iVar0;

	if (!func_265(2))
	{
		return;
	}
	iVar0 = func_292(1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
}

void func_311()
{
	int iVar0;

	iVar0 = func_199(0);
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				func_287();
				ANIMSCENE::START_ANIM_SCENE(iVar0);
			}
		}
	}
	func_504();
	if (func_296())
	{
		return;
	}
	if (func_505())
	{
		func_500();
	}
}

void func_312()
{
	if (func_396(1))
	{
		return;
	}
	func_504();
	if (func_506())
	{
		func_414(1);
	}
}

void func_313()
{
	if (func_396(8))
	{
		return;
	}
	func_507(&(Local_19.f_7.f_21), &(Local_672.f_19.f_54), "player", "player_f", func_400(), 63, 256, 3000, 10000);
	if (func_508(&(Local_672.f_19.f_54)))
	{
		func_414(8);
	}
}

void func_314()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_199(1);
	if (func_396(8))
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
			{
				ANIMSCENE::_DELETE_ANIM_SCENE(iVar0);
			}
		}
		return;
	}
	iVar1 = func_292(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_7.f_17))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		iVar4 = PLAYER::GET_PLAYER_PED(Local_19.f_7.f_17);
		if (PED::IS_PED_RAGDOLL(iVar4))
		{
			bVar2 = true;
		}
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar4, iVar0))
		{
			bVar3 = true;
		}
		if (!bVar3 && !func_509(Local_672.f_19.f_49[1], "SCENE_TURN_BODY", 1056125747 /* Float: 0.475f */, 1))
		{
			bVar2 = true;
		}
		if (bVar3)
		{
			PAD::DISABLE_CONTROL_ACTION(0, -56359.69f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
		}
		else
		{
			func_200(1);
		}
	}
	if (bVar2)
	{
		PHYSICS::ACTIVATE_PHYSICS(iVar1);
		PED::SET_PED_TO_RAGDOLL(iVar1, 1000, 1000, 0, false, false, 0);
		func_414(8);
	}
}

void func_315()
{
	if (!func_496(256, 255))
	{
		func_510(&(Local_672.f_19.f_54));
		func_414(256);
		if (func_496(1, 255))
		{
			func_511(1);
		}
		if (func_496(8, 255))
		{
			func_511(8);
		}
	}
}

void func_316()
{
	if (func_496(256, 255))
	{
		func_511(256);
	}
}

void func_317()
{
	int iVar0;

	if (func_396(512))
	{
		if (!func_496(512, 255))
		{
			func_414(512);
		}
		return;
	}
	iVar0 = func_292(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		func_413(func_292(0), 1);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(func_292(0), 7, true);
		func_414(512);
	}
}

bool func_318(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_319()
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
		if (func_418(func_417(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(Var1);
			}
		}
		iVar0++;
	}
}

int func_320(var uParam0, var uParam1)
{
	return uParam0;
}

int func_321(int iParam0)
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

int func_322(struct<2> Param0)
{
	return func_512(Param0);
}

void func_323(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_320(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_514(func_513(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_228(iVar5) == func_513(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_515(iVar4);
			if (!func_516(iVar6, 0))
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

int func_324(int iParam0, int iParam1)
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

void func_325(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_517(&Var0);
}

var func_326(int iParam0)
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

var func_327(int iParam0)
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

var func_328(int iParam0)
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

struct<2> func_329(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_518(-1.11244E+21f);
		case 2:
			return func_518(-0.03766548f);
		case 3:
			return func_518(20967.98f);
		case 4:
			return func_518(20967.98f);
	}
	return Var0;
}

bool func_330(var uParam0)
{
	if (*uParam0 == 0)
	{
		return false;
	}
	return *uParam0 != -1;
}

bool func_331(int iParam0)
{
	return func_195(Local_672.f_19.f_37, iParam0);
}

void func_332(int iParam0)
{
	func_245(&(Local_672.f_19.f_37), iParam0);
}

void func_333(int iParam0)
{
	func_244(&(Local_672.f_19.f_37), iParam0);
}

bool func_334(int iParam0)
{
	return ENTITY::DOES_ENTITY_EXIST(Local_672.f_74.f_7[iParam0 /*11*/]);
}

float func_335(int iParam0)
{
	return ENTITY::GET_ENTITY_HEADING(Local_672.f_74.f_7[iParam0 /*11*/]);
}

Vector3 func_336(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(Local_672.f_74.f_7[iParam0 /*11*/], true, false);
}

bool func_337(int iParam0)
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

int func_338(int iParam0)
{
	return iParam0;
}

void func_339(int iParam0)
{
	if (!func_519(iParam0))
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

int func_340(int iParam0)
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

int func_341(int iParam0)
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

void func_342(bool bParam0)
{
	func_209(bParam0, 0);
	func_209(bParam0, 1);
	func_209(bParam0, 3);
	func_207(bParam0);
}

void func_343(bool bParam0)
{
	func_208(bParam0);
	func_520(bParam0, 0, 3);
}

void func_344(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_345(bool bParam0)
{
	func_209(bParam0, 0);
	func_344(bParam0, 0);
	func_344(bParam0, 1);
	func_344(bParam0, 4);
	func_344(bParam0, 5);
}

void func_346(bool bParam0)
{
	func_209(bParam0, 1);
	func_344(bParam0, 2);
	func_344(bParam0, 3);
	func_344(bParam0, 6);
	func_344(bParam0, 7);
	func_212(bParam0, 2);
}

void func_347(bool bParam0)
{
	func_209(bParam0, 0);
	func_344(bParam0, 0);
	func_344(bParam0, 1);
	func_344(bParam0, 2);
}

void func_348(bool bParam0)
{
	func_209(bParam0, 1);
	func_207(bParam0);
}

void func_349(bool bParam0)
{
	func_209(bParam0, 2);
	func_344(bParam0, 3);
}

void func_350(bool bParam0)
{
	func_209(bParam0, 3);
	func_344(bParam0, 4);
}

void func_351(bool bParam0)
{
	func_344(bParam0, 0);
	func_344(bParam0, 1);
}

void func_352(bool bParam0)
{
	func_344(bParam0, 2);
	func_344(bParam0, 3);
}

void func_353(bool bParam0)
{
	func_344(bParam0, 4);
	func_344(bParam0, 5);
}

bool func_354(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_355(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_356(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_357(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

void func_358(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 4);
	}
	else
	{
		func_244(&(uParam0->f_2), 4);
	}
}

void func_359(var uParam0)
{
	func_522(uParam0, (func_521(uParam0) - 6f));
	func_523(uParam0, 1);
}

void func_360(var uParam0)
{
	func_236(uParam0, 0);
	func_237(uParam0, 0);
	func_238(uParam0, 0);
	func_240(uParam0, 0);
	func_242(uParam0, 1, 1, 1);
}

void func_361(var uParam0)
{
	func_524(uParam0, 1);
	func_525(uParam0, 1);
	func_526(uParam0, 1);
}

void func_362(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_245(&(uParam0->f_2), 131072);
	}
	else
	{
		func_244(&(uParam0->f_2), 131072);
	}
}

void func_363(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 4);
	}
	else
	{
		func_245(uParam0, 4);
	}
}

bool func_364(int iParam0, bool bParam1)
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

bool func_365(int iParam0, var uParam1)
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

int func_366(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

var func_367()
{
	return Local_672.f_3;
}

void func_368(int iParam0, int iParam1)
{
	func_244(&(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1), 16);
}

bool func_369(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 1);
}

int func_370(int iParam0)
{
	if (!func_196(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_371(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_672.f_15 };
	iVar7 = 0;
	iVar8 = func_405(iParam0);
	iVar9 = func_527(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_30[iParam0]))
		{
			iVar9 = func_527(iParam0);
			fVar0 = func_528(iParam0);
			if (!func_195(Local_672.f_74.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_529(iParam0)) };
			}
			else
			{
				vVar1 = { func_529(iParam0) };
			}
			if (!func_530(&(Local_19.f_30[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_19.f_30[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_185(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_531(iVar7, 1);
					}
					if (func_532(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_533(iParam0))
						{
							if (func_532(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_372(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_30[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_30[iParam0]);
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
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_19.f_30[iParam0])))
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

bool func_372(int iParam0)
{
	return func_185(iParam0, 128);
}

int func_373(int iParam0, int iParam1)
{
	return Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_2;
}

bool func_374(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_375(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_376(int iParam0, int iParam1)
{
	return Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_7;
}

bool func_377(int iParam0, int iParam1)
{
	return Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_13;
}

bool func_378(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_534(*uParam0, 0f, 0f, 0f))
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

bool func_379(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_672.f_115[iParam0 /*34*/].f_3, iParam1);
}

bool func_380(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_535(iParam1))
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

bool func_381(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_382(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_383(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_384(int iParam0, int iParam1)
{
	return Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_10;
}

bool func_385(int iParam0, int iParam1, int iParam2)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_386(float fParam0)
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

Vector3 func_387(vector3 vParam0)
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

bool func_388(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_389(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_390(int iParam0, int iParam1)
{
	return func_195(Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/].f_1, 512);
}

bool func_391(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_536(iVar0))
			{
				if (func_490(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_392(int iParam0)
{
	return func_195(Local_672.f_19.f_35, iParam0);
}

void func_393(int iParam0)
{
	if (Local_19.f_7 != iParam0)
	{
		Local_19.f_7 = iParam0;
	}
}

int func_394(char[32] cParam0, var uParam8, var uParam9)
{
	int iVar0;
	struct<4> Var1;
	int iVar12;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	Var1 = -1;
	Var1.f_1 = -1;
	Var1.f_2 = -1;
	Var1 = SCRIPTS::_GET_HASH_OF_THREAD(iVar0);
	Var1.f_1 = NETWORK::_NETWORK_GET_INSTANCE_ID_OF_THREAD(iVar0);
	Var1.f_3 = { cParam0 };
	iVar12 = func_537(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1264291[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { Global_1264291[iVar12 /*29*/].f_22 };
				func_538(iVar12);
				return 2;
			case 3:
				*uParam9 = { Global_1264291[iVar12 /*29*/].f_22 };
				func_538(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_539())
		{
			return 0;
		}
		if (!func_540(&Var1))
		{
			return 0;
		}
		if (!func_541(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_542(uParam8, &Var1);
	}
	return 0;
}

void func_395(int iParam0)
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	func_244(&(Local_19.f_7.f_16), iParam0);
}

bool func_396(int iParam0)
{
	return func_195(Local_672.f_19.f_36, iParam0);
}

int func_397(int iParam0, var uParam1)
{
	if (func_496(1, iParam0))
	{
		return 1;
	}
	return 0;
}

int func_398(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam3)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_672.f_74.f_7[iParam0 /*11*/]))
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
		else if (Local_63[iVar0 /*19*/].f_2.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam4 && !func_536(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_63[iVar0 /*19*/].f_2.f_2[iParam0] > Local_63[iVar1 /*19*/].f_2.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_63[iVar0 /*19*/].f_2.f_2[iParam0] > fParam2)
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

void func_399(var uParam0, var uParam1, int iParam2)
{
	*uParam0 = uParam1;
	uParam0->f_1 = NETWORK::_ANIM_SCENE_TO_NET(iParam2);
}

char* func_400()
{
	switch (func_116(0))
	{
		case 1223834952:
			return "pl_turnbody";
		case 1211068025:
			return "pl_turnbody_f";
		default:
			break;
	}
	return "";
}

bool func_401(var uParam0, char* sParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	*iParam2 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
	{
		*iParam2 = 1;
		return true;
	}
	iVar0 = NETWORK::_NET_TO_ANIM_SCENE(uParam0->f_1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0))
	{
		*iParam2 = 1;
		return true;
	}
	if (ANIMSCENE::IS_ANIM_SCENE_FINISHED(iVar0, false))
	{
		*iParam2 = 1;
		return true;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_ACTIVE(iVar0, sParam1) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(iVar0, false))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(*uParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar1, iVar0))
		{
			return false;
		}
	}
	return true;
}

void func_402(var uParam0)
{
	*uParam0 = 255;
	uParam0->f_1 = 0;
}

void func_403(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_404(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_405(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/].f_3;
}

bool func_406(int iParam0)
{
	return func_379(0, iParam0);
}

bool func_407(int iParam0)
{
	return func_369(0, iParam0);
}

void func_408(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_405(iParam0);
	bVar3 = func_364(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_672.f_74.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_30[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_19.f_30[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_672.f_74.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_63[iParam1 /*19*/].f_2.f_2[iParam0] = -1f;
				}
				else
				{
					Local_63[iParam1 /*19*/].f_2.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_372(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_19.f_30[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_19.f_30[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_19.f_30[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_543(iVar1, 1f, 0);
					sVar0 = func_544(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_545(iVar1, sVar0, 1);
					}
				}
				if (func_532(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_533(iParam0))
					{
						if (func_532(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_672.f_74.f_5), iParam0);
				if (bParam2)
				{
					func_546(iParam0);
				}
			}
		}
	}
}

Vector3 func_409(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -997544919, 1157859799, 1135888957;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -981047785, -984131289, 1107662733;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -982288544, -988035027, -1053370089;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -989272033, -986500208, 1103813411;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -989708726, -995061336, 1124266679;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1000315293, 1141241518, 1113937674;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1133608927, 1132660130, 1121765818;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1153532592, 1151951643, 1125199118;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1160105939, 1150595099, 1122734309;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 1153213250, -989636818, 1110550249;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

Vector3 func_410(int iParam0)
{
	switch (func_243())
	{
		case 0:
		case 1:
			switch (func_124())
			{
				case 0:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1061368627 /* Float: -5.9f */, 1093979341 /* Float: 11.3f */, 1117480550 /* Float: 77.7f */;
					}
					break;
				case 1:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1057803469 /* Float: -7.6f */, 1097544499 /* Float: 14.7f */, 1119092736 /* Float: 90f */;
					}
					break;
				case 2:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1095552205 /* Float: 12.8f */, 1097859072 /* Float: 15f */;
					}
					break;
				case 3:
					switch (iParam0)
					{
						case 0:
						case 1:
							return -1069547520 /* Float: -3f */, 1095237632 /* Float: 12.5f */, -1022623744 /* Float: -140f */;
					}
					break;
				case 4:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, 0f;
					}
					break;
				case 5:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, 1124859904 /* Float: 140f */;
					}
					break;
				case 6:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, -1021313024 /* Float: -160f */;
					}
					break;
				case 7:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, 1119092736 /* Float: 90f */;
					}
					break;
				case 8:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, 1119092736 /* Float: 90f */;
					}
					break;
				case 9:
					switch (iParam0)
					{
						case 0:
						case 1:
							return 0f, 1093664768 /* Float: 11f */, -1021313024 /* Float: -160f */;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

char* func_411()
{
	if (func_547(0))
	{
		return "body";
	}
	else
	{
		return "body_f";
	}
	return "";
}

char* func_412()
{
	return "ROCK";
}

void func_413(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == func_548())
	{
		return;
	}
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

void func_414(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_244(&(Local_63[iVar0 /*19*/].f_1), iParam0);
}

bool func_415(var uParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST((uParam1[iVar0 /*9*/])->f_6))
		{
			(uParam1[iVar0 /*9*/])->f_6 = uParam0;
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_416(int iParam0, int iParam1)
{
	return Local_672.f_115[iParam0 /*34*/].f_5[iParam1 /*14*/];
}

int func_417(int iParam0)
{
	return iParam0;
}

bool func_418(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_292(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_549(iParam0, 255, 1);
		if (uParam1->f_2 < 0f)
		{
			uParam1->f_2 = 0f;
		}
		return true;
	}
	return false;
}

void func_419(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_420(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_444(&(Local_63[iVar0 /*19*/].f_7), 0, iParam0);
}

struct<2> func_421(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_550(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_551(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_422()
{
	Local_672.f_74.f_6 = 0;
	Local_672.f_74.f_2 = 0;
	Local_672.f_74.f_1 = -1;
}

void func_423()
{
	int iVar0;

	func_235(&(Local_672.f_150.f_75), 2, 0);
	func_235(&(Local_672.f_150.f_75), 1, 0);
	func_235(&(Local_672.f_150.f_75), 4, 0);
	func_235(&(Local_672.f_150.f_75), 5, 0);
	func_235(&(Local_672.f_150.f_75), 8, -1);
	iVar0 = 0;
	while (iVar0 < 2)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_672.f_150.f_66[iVar0]));
		SCRIPTS::_SET_ALL_PLAYER_BITS(&(Local_672.f_150.f_72[iVar0]));
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_672.f_150.f_69[iVar0]));
		func_552(iVar0);
		iVar0++;
	}
}

void func_424(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_672.f_74.f_2 = (Local_672.f_74.f_2 || Local_63[iParam0 /*19*/].f_2);
		Local_672.f_74.f_1 = (Local_672.f_74.f_1 && Local_63[iParam0 /*19*/].f_2);
		Local_672.f_74.f_6 = (Local_672.f_74.f_6 || Local_63[iParam0 /*19*/].f_2.f_1);
	}
}

void func_425(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 2);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 1);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 4);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 5);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 6);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 7);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 0);
		func_553(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 3);
		func_554(&(Local_672.f_150.f_75), &(Local_63[iParam0 /*19*/].f_7), 8);
		iVar0 = 0;
		while (iVar0 < 2)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_63[iParam0 /*19*/].f_7.f_5[iVar0]), &(Local_672.f_150.f_66[iVar0]), &(Local_672.f_150.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_63[iParam0 /*19*/].f_7.f_5[iVar0]), &(Local_672.f_150.f_66[iVar0]), &(Local_672.f_150.f_69[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_63[iParam0 /*19*/].f_7.f_5[iVar0]), &(Local_672.f_150.f_66[iVar0]), &(Local_672.f_150.f_72[iVar0]));
			func_555(func_417(iVar0), iParam0);
			iVar0++;
		}
	}
}

void func_426(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_63[iParam2 /*19*/].f_18 = (Local_63[iParam2 /*19*/].f_18 || Local_63[iParam0 /*19*/].f_18);
	}
}

int func_427(int iParam0)
{
	return iParam0;
}

int func_428(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_63[iParam3 /*19*/].f_2.f_2[iParam2] = fVar0;
	if (fVar0 > Local_672.f_74.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_429(var uParam0)
{
	func_556(uParam0, 0f);
}

bool func_430(var uParam0)
{
	return func_557(*uParam0, 1);
}

bool func_431(var uParam0, float fParam1)
{
	if (!func_430(uParam0))
	{
		return false;
	}
	if (func_558(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_432(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_433(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(func_292(iParam0)))
	{
		return true;
	}
	switch (iParam0)
	{
		case 1:
			if (func_265(2))
			{
				if (!func_256(Local_19.f_7.f_18))
				{
					if (BUILTIN::VDIST(Local_19.f_7.f_18, func_249()) >= 5f)
					{
						func_120(iParam0, Local_19.f_7.f_18, func_559(Local_19.f_7.f_18, func_249(), 1), 1);
						return true;
					}
				}
			}
			break;
	}
	return false;
}

void func_434(int iParam0, int iParam1)
{
	func_245(&(Local_672.f_74.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_435(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	return func_195(Local_63[iParam1 /*19*/].f_2, iParam0);
}

void func_436(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_244(&(Local_63[iVar0 /*19*/].f_2), iParam0);
}

void func_437(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_245(&(Local_63[iVar0 /*19*/].f_2), iParam0);
}

void func_438()
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
	if (!func_234(&iVar15))
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
		iVar14 = func_417(iVar0);
		if (!func_439(iVar14))
		{
		}
		else if (!func_440(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_672.f_150.f_65), iVar14);
			}
			if (func_456(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, false, false))
			{
				func_560(iVar14);
				func_561(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_439(int iParam0)
{
	return !func_442(&(Local_672.f_150.f_75), 5, iParam0);
}

bool func_440(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_672.f_150.f_106, iParam0))
	{
		return false;
	}
	*uParam1 = Local_672.f_150.f_79[iParam0 /*13*/];
	uParam1->f_1 = Local_672.f_150.f_79[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_672.f_150.f_79[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_441(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_562(iParam1))
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
	if (func_563(*uParam0, &(Local_672.f_150.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_442(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_365(iParam1, &Var0))
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

int func_443(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam1, &Var0))
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

int func_444(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam1, &Var0))
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

void func_445(int iParam0)
{
}

bool func_446(int iParam0)
{
	return func_442(&(Local_672.f_150.f_75), 4, iParam0);
}

bool func_447(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_63[iVar0 /*19*/].f_7), 4, iParam0);
}

bool func_448(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_672.f_150.f_69[iParam0]));
}

void func_449(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_443(&(Local_63[iVar0 /*19*/].f_7), 4, iParam0);
}

bool func_450(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_63[iVar0 /*19*/].f_7.f_5[iParam0]));
}

void func_451(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_63[iVar0 /*19*/].f_7.f_5[iParam0]));
}

bool func_452(int iParam0)
{
	return func_442(&(Local_672.f_150.f_75), 6, iParam0);
}

bool func_453(int iParam0)
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

bool func_454(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_63[iParam1 /*19*/].f_7), 1, iParam0);
}

bool func_455(int iParam0)
{
	return false;
}

bool func_456(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	if (!func_564(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_442(&(Local_63[iParam1 /*19*/].f_7), 3, iParam0);
}

bool func_457(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_565(uParam2, 1, iVar0);
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
			if (func_566(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_567(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_568(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_569(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_570(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_571(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_567(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_572(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_573(Global_33, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_574(Global_33, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_575(Global_33, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_575(Global_33, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_567(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_576(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_577(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_578(uParam2, 4000))
				{
					if ((func_579(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_580(uParam2, iParam0)) && func_581(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_579(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_580(uParam2, iParam0)) && func_581(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_582(iParam0, Global_1940186.f_35))
					{
						func_583();
						*iParam3 = 2;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_584(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_585() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_583();
						*iParam3 = 2;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_586())
				{
					if (func_582(iParam0, Global_1940186.f_36))
					{
						func_583();
						*iParam3 = 2;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_587(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_567(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_588(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_567(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_589(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_590(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_591(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_592(uParam2, 4000))
				{
					if (func_593(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_567(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_594(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_567(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_595(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_567(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_458(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_596(iParam0, vVar0, fParam2);
}

int func_459(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_597(iParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	func_598(&iVar4, iParam1->f_12);
	func_600(Local_672.f_74.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_599(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_601(&iVar4, &uVar0);
}

bool func_460(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return false;
	}
	return func_442(&(Local_63[iVar0 /*19*/].f_7), 0, iParam0);
}

bool func_461(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_672.f_150.f_64, iParam0))
	{
		return false;
	}
	if (func_195(Local_672.f_150.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_602(&(Local_672.f_150))))
	{
		return false;
	}
	return true;
}

bool func_462(int iParam0, int iParam1, int iParam2)
{
	if (!func_461(iParam0, iParam1))
	{
		return false;
	}
	if (Local_63[iParam2 /*19*/].f_7.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_63[iParam2 /*19*/].f_7.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_463(int iParam0, int iParam1, int iParam2)
{
	return true;
}

void func_464(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_444(&(Local_63[iVar0 /*19*/].f_7), 1, iParam0);
	if (bParam1)
	{
		Local_63[iVar0 /*19*/].f_7.f_8[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_465(int iParam0)
{
	return func_442(&(Local_672.f_150.f_75), 1, iParam0);
}

bool func_466(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	return func_442(&(Local_63[iParam1 /*19*/].f_7), 2, iParam0);
}

bool func_467(int iParam0)
{
	return true;
}

void func_468(int iParam0)
{
}

void func_469(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_444(&(Local_63[iVar0 /*19*/].f_7), 2, iParam0);
}

bool func_470(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_ALL_PLAYER_BITS(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_672.f_150.f_72[iParam0]), &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

bool func_471(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_472(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_672.f_150.f_66[iParam0]), iParam1);
}

bool func_473(int iParam0, var uParam1, int iParam2, var uParam3)
{
	return true;
}

void func_474(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_234(&iVar0))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_63[iVar0 /*19*/].f_7.f_5[iParam0]), iParam1);
}

float func_475()
{
	int iVar0;
	float fVar1;

	if (Local_672.f_264.f_3 == 0)
	{
		Local_672.f_264.f_3 = MISC::GET_GAME_TIMER();
		return 1023410176;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_672.f_264.f_3)) * 981668463);
	Local_672.f_264.f_3 = iVar0;
	return fVar1;
}

bool func_476(int iParam0, bool bParam1)
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

bool func_477(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_603(vVar0, vParam0) > func_603(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_478(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_604(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_605(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_606() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_479(var uParam0, int iParam1, float fParam2)
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
	func_189(uParam0);
	return true;
}

bool func_480()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_481(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_607(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_482()
{
	switch (func_124())
	{
		case 0:
			return func_249();
		case 1:
			return -981005232, -984135614, 1107215710;
		case 2:
			return -982326536, -988165084, -1052530243;
		case 3:
			return -989221780, -986451530, 1101557557;
		case 4:
			return -989734457, -995272122, 1123906879;
		case 5:
			return -1000918810, 1141025668, 1114871843;
		case 6:
			return 1132870975, 1129776489, 1120916142;
		case 7:
			return 1153304687, 1151921124, 1125964158;
		case 8:
			return 1159872133, 1150542590, 1125233427;
		case 9:
			return 1153247444, -989582914, 1110233081;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_483()
{
	switch (func_124())
	{
		case 0:
			func_608(PLAYER::PLAYER_PED_ID(), "nb_slumped_hunter_cairn_1", 1, 0.762f, 0.4f, 0, 0, 1);
			break;
	}
}

void func_484()
{
	struct<22> Var0;

	Var0.f_7 = 0.5f;
	Var0.f_8 = 1f;
	Var0.f_9 = 0.175f;
	Var0.f_10 = 0.25f;
	Var0.f_12 = 0.75f;
	Var0.f_13 = 0.25f;
	Var0.f_14 = 0.45f;
	Var0.f_15 = 0.25f;
	Var0.f_17 = 1f;
	Var0.f_18 = 1f;
	Var0.f_19 = 2f;
	Var0.f_20 = 1f;
	Var0.f_21 = 0.25f;
	switch (func_124())
	{
		case 0:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -997543858, 1157867492, 1135886781, 0f, 16);
			func_609(&Var0, -997551822, 1157861490, 1135898453, 0f, 16);
			Var0.f_17 = 2f;
			Var0.f_18 = 3f;
			Var0.f_4 = { 2f, -1073741824 /* Float: -2f */, 1f };
			func_609(&Var0, -997538676, 1157860065, 1135892701, 0f, 16);
			func_609(&Var0, -997535438, 1157861517, 1135894669, 0f, 16);
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 1f, -1073741824 /* Float: -2f */, 1f };
			func_609(&Var0, -997527018, 1157864000, 1135891518, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -997545832, 1157859907, 1135913903, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			break;
		case 1:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1046478848 /* Float: -20f */, 1f };
			func_609(&Var0, -981034599, -984133909, 1107513534, 1132756992 /* Float: 265f */, 5);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_17 = 1067450368; /* Float: 1.25f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 2f, -1073741824 /* Float: -2f */, 1f };
			func_609(&Var0, -981045495, -984127948, 1107624838, 0f, 16);
			func_609(&Var0, -981037875, -984131166, 1107549621, 1101004800 /* Float: 20f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -980951768, -984140136, 1105906106, 0f, 16);
			func_609(&Var0, -981046600, -984128161, 1107632668, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -981047721, -984130414, 1107842213, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			break;
		case 2:
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_17 = 1048576000; /* Float: 0.25f */
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1041235968 /* Float: -30f */, 1f };
			func_609(&Var0, -982303058, -988084602, -1053437093, 1126825984 /* Float: 170f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 2f, -1065353216 /* Float: -4f */, 1f };
			func_609(&Var0, -982298540, -988072735, -1053493423, -1032847360 /* Float: -60f */, 16);
			Var0.f_4 = { 2f, -1073741824 /* Float: -2f */, 1f };
			func_609(&Var0, -982287278, -988053029, -1053492783, -1032847360 /* Float: -60f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -982286501, -988034293, -1053219661, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, -982329947, -988254566, -1052193724, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -982288544, -988033839, -1054117997, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 1103
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1048576000; /* Float: 0.25f */
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1041235968 /* Float: -30f */, 1f };
			func_609(&Var0, -989224598, -986458508, 1101884990, 1126170624 /* Float: 160f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, -989227363, -986458187, 1101933560, -1036779520 /* Float: -45f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, -989254360, -986496584, 1103676813, -1032847360 /* Float: -60f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -989273726, -986500946, 1103861441, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, -989170590, -986400764, 1095658090, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -989271368, -986501281, 1104198956, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 1437
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1048576000; /* Float: 0.25f */
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1041235968 /* Float: -30f */, 1f };
			func_609(&Var0, -989731177, -995263923, 1123980891, 1126170624 /* Float: 160f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, -989732655, -995230737, 1124087391, -1036779520 /* Float: -45f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, -989701345, -995111551, 1124253749, 0f, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -989706066, -995056120, 1124262978, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, -989762593, -995482691, 1123293244, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -989708307, -995058886, 1124313127, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 1767
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1048576000; /* Float: 0.25f */
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1041235968 /* Float: -30f */, 1f };
			func_609(&Var0, -1001238726, 1140880689, 1115636585, 1126170624 /* Float: 160f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, -1000908328, 1141028103, 1114850981, -1025114112 /* Float: -115f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1063256064 /* Float: -5f */, 1f };
			func_609(&Var0, -1000423928, 1141218808, 1114014186, -1022951424 /* Float: -135f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, -1001472578, 1140782851, 1115817540, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, -1000331871, 1141247149, 1113902458, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -1000319451, 1141244021, 1114124074, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 2101
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1046478848 /* Float: -20f */, 1f };
			func_609(&Var0, 1133486701, 1131985175, 1121437014, -1041235968 /* Float: -30f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1061158912 /* Float: -6f */, 1f };
			func_609(&Var0, 1133558068, 1132448640, 1121620055, 1126170624 /* Float: 160f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1043857408 /* Float: -25f */, 1f };
			func_609(&Var0, 1132956654, 1129249778, 1120688696, 1125842944 /* Float: 155f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, 1133636484, 1132656428, 1121787486, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, 1132938388, 1128883612, 1120510976, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, 1133610867, 1132671894, 1121854468, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 2431
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, 5f, 1f };
			func_609(&Var0, 1153454147, 1151930683, 1125354234, -1046478848 /* Float: -20f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1f, 1f };
			func_609(&Var0, 1153511856, 1151961057, 1125202399, -1022951424 /* Float: -135f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1049624576 /* Float: -15f */, 1f };
			func_609(&Var0, 1153301704, 1151933239, 1125963220, 1117126656 /* Float: 75f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, 1153532372, 1151958640, 1125185268, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, 1153295293, 1151943237, 1125966438, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, 1153534780, 1151951299, 1125247236, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 2753
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1049624576 /* Float: -15f */, 1f };
			func_609(&Var0, 1159736940, 1150545819, 1126253045, 1114636288 /* Float: 60f */, 16);
			Var0.f_21 = 1056964608; /* Float: 0.5f */
			Var0.f_17 = 1061158912; /* Float: 0.75f */
			Var0.f_18 = 1071644672; /* Float: 1.75f */
			Var0.f_4 = { 1f, -1063256064 /* Float: -5f */, 1f };
			func_609(&Var0, 1159929612, 1150581244, 1124661559, 1117126656 /* Float: 75f */, 16);
			Var0.f_21 = 1048576000; /* Float: 0.25f */
			Var0.f_4 = { 2f, -1049624576 /* Float: -15f */, 1f };
			func_609(&Var0, 1160039702, 1150589535, 1123487616, 1117126656 /* Float: 75f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, 1159714893, 1150541731, 1126323530, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, 1160104567, 1150587461, 1122747881, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, 1160106921, 1150594456, 1122828428, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
			Jump @3298; //curOff = 3083
			Var0 = 4;
			Var0.f_14 = -1f;
			Var0.f_21 = 1061158912; /* Float: 0.75f */
			Var0.f_17 = 1f;
			Var0.f_18 = 2f;
			Var0.f_4 = { 3f, -1054867456 /* Float: -10f */, 1f };
			func_609(&Var0, 1153225695, -989620886, 1110457550, -1054867456 /* Float: -10f */, 16);
			Var0.f_17 = 3f;
			Var0.f_18 = 1080033280; /* Float: 3.5f */
			Var0.f_1 = { 0f, 0f, 0f };
			Var0.f_4 = { -1f, -1f, 1f };
			func_609(&Var0, 1153262044, -989559312, 1110115035, -1036779520 /* Float: -45f */, 16);
			func_609(&Var0, 1153218644, -989632763, 1110507800, 0f, 16);
			Local_672.f_19.f_40 = GRAPHICS::ADD_DECAL(-4.737097E+31f, -982147562, -987639739, -1054918490, 0f, 0f, -1f, 1f, 0f, 0f, 1061997773 /* Float: 0.8f */, 1f, 0f, 1045220557 /* Float: 0.2f */, 0f, 0f, 1f, -1f, 0, 1, 1, 0);
		}

void func_485()
{
	switch (func_124())
	{
		case 0:
			func_610(&(Local_672.f_19.f_41[0]), -997537334, 1157859325, 1135899819, 1f);
			break;
		case 1:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-4326.079f, -3445.069f, 31.483f, -3f, -5f, -4f, 48f, 4f, 3f, "slumpHuntRio1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-4302.172f, -3444.35f, 33.08683f, 10f, 6, -1, 0);
			break;
		case 2:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-3890.429f, -2464.78f, -11.246f, -2f, 2f, 79f, 53f, 4f, 3f, "slumpHuntCholla1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-3896.965f, -2403.786f, -12.36896f, 12f, 2, -1, 0);
			break;
		case 3:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2204.084f, -2879.555f, 19.58f, 0f, -20f, 44f, 41f, 6f, 3f, "slumpHuntHennig1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-2190.508f, -2867.223f, 25.40727f, 12f, 2, -1, 0);
			break;
		case 4:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-2077.611f, -1386.821f, 126.729f, 0f, 9f, 76f, 55f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-2083.065f, -1412.265f, 130.8061f, 12f, 2, -1, 0);
			break;
		case 5:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-863.525f, 523.014f, 61.494f, 0f, -6f, -20f, 72f, 4f, 3f, "slumpHuntTlTrees1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(-897.4304f, 535.6448f, 57.2746f, 12f, 2, -1, 0);
			break;
		case 6:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(281.006f, 229.583f, 106.618f, 9f, -9f, 71f, 64f, 4f, 4f, "slumpHuntTwnStack1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(290.999f, 262.044f, 110.394f, 5f, 3, -1, 0);
			break;
		case 7:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1530.822f, 1352.741f, 153.023f, -4f, 26f, 2f, 25f, 4f, 4f, "slumpHuntOcreaghs1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(1548.084f, 1355.097f, 145.176f, 12f, 2, -1, 0);
			break;
		case 8:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2605.391f, 1185.667f, 140.615f, 3f, 26f, 3f, 100f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(2652.989f, 1189.503f, 117.783f, 12f, 2, -1, 0);
			break;
		case 9:
			Local_672.f_19.f_45[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1512.404f, -2112.008f, 44.296f, 0f, 0f, -76f, 17f, 4f, 4f, "slumpAnnesburg1");
			if (VOLUME::DOES_VOLUME_EXIST(Local_672.f_19.f_45[0]))
			{
				Local_672.f_19.f_41[0] = GRAPHICS::_ADD_VEG_MODIFIER_ZONE(Local_672.f_19.f_45[0], 7, -1, 0);
			}
			Local_672.f_19.f_41[1] = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(1509.102f, -2101.449f, 44.413f, 12f, 2, -1, 0);
			break;
	}
}

bool func_486(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_487(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_486(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

void func_488()
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_334(1))
	{
		return;
	}
	if (func_396(32))
	{
		return;
	}
	iVar0 = func_292(1);
	PED::_SET_PED_COMBAT_ATTRIBUTE_HASH(iVar0, -1.890391E-07f);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 67, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 58, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 25, true);
	TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar0, 2f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 263, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 186, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 224, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 388, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 39, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 33, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 31, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 32, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 65, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 163, 3f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
	PED::SET_PED_COMBAT_RANGE(iVar0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 0, false);
	PED::SET_PED_COMBAT_MOVEMENT(iVar0, 2);
	PED::SET_COMBAT_FLOAT(iVar0, 12, 0.2f);
	uVar1 = func_611(func_249(), 0f, 0f, 0f, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, 1101004800 /* Float: 20f */, -2.19652E+23f, 0, 8);
	iVar2 = SCRIPTS::COUNT_PLAYER_BITS(&uVar1);
	if (iVar2 > 1)
	{
		iVar3 = ENTITY::GET_ENTITY_MAX_HEALTH(iVar0, false);
		iVar4 = (iVar3 + ((iVar3 / 32) * iVar2));
		ENTITY::SET_ENTITY_MAX_HEALTH(iVar0, iVar4);
		ENTITY::SET_ENTITY_HEALTH(iVar0, iVar4, 0);
	}
	PED::_SET_PED_QUALITY(iVar0, 1);
	FLOCK::_SET_ANIMAL_RARITY(iVar0, 0);
	PED::_SET_PED_DAMAGE_CLEANLINESS(iVar0, 1);
	func_414(32);
}

void func_489()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_292(1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { func_336(0) };
	if (func_256(vVar1))
	{
		vVar1 = { func_249() };
	}
	PED::SET_PED_SPHERE_DEFENSIVE_AREA(iVar0, func_249(), 30f, false, false, true);
	TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(iVar0, vVar1, 50f, 1048576, 22);
	PED::SET_PED_KEEP_TASK(iVar0, true);
}

bool func_490(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_364(iParam2, 0))
	{
		if (!func_234(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_63[iParam2 /*19*/].f_2.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_292(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_612(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_63[iParam2 /*19*/].f_2.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_491(int iParam0, int iParam1)
{
	if (!func_536(255))
	{
		return;
	}
	if (!func_613(iParam0))
	{
		func_614(iParam0, iParam1, 4.185971E-18f, 0, 0);
	}
}

void func_492(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_493(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_615(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

bool func_494()
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_616(&uVar2))
	{
		return uVar2;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (!SCRIPTS::DOES_THREAD_EXIST(Global_1290256.f_11.f_761[iVar0]))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 < 0)
	{
		return false;
	}
	iVar3 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (!SCRIPTS::IS_THREAD_ACTIVE(iVar3, false) || SCRIPTS::_IS_THREAD_EXIT_REQUESTED_FOR_THREAD_WITH_THIS_ID(iVar3))
	{
		return false;
	}
	Global_1290256.f_11.f_760++;
	Global_1290256.f_11.f_761[iVar1] = iVar3;
	return true;
}

void func_495()
{
	int iVar0;
	int iVar1;

	iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	if (!func_617(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 8)
	{
		if (iVar0 == Global_1290256.f_11.f_761[iVar1])
		{
			Global_1290256.f_11.f_761[iVar1] = 0;
			Global_1290256.f_11.f_760 = (Global_1290256.f_11.f_760 - 1);
			return;
		}
		iVar1++;
	}
}

bool func_496(int iParam0, int iParam1)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return false;
		}
	}
	if (!func_364(iParam1, 1))
	{
		return false;
	}
	if (func_195(Local_63[iParam1 /*19*/].f_1, iParam0))
	{
		return true;
	}
	return false;
}

bool func_497(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return true;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return true;
	}
	return false;
}

int func_498(int iParam0)
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

bool func_499()
{
	if (func_496(2048, 255))
	{
		return true;
	}
	if (func_496(1024, 255))
	{
		return true;
	}
	if (func_618())
	{
		return true;
	}
	else if (func_619())
	{
		return true;
	}
	if (func_334(1))
	{
		if (func_454(1, 255) || func_456(1, 255))
		{
			return true;
		}
	}
	return false;
}

void func_500()
{
	int iVar0;

	if (!func_143(32, 255))
	{
		func_620(Local_672.f_1, Local_672.f_3);
		if (!func_143(1024, 255))
		{
			func_621(Local_672.f_1);
			func_160(1024);
		}
		iVar0 = func_324(Local_672.f_1, Local_672.f_2);
		func_622(iVar0);
		func_623(iVar0);
		func_158(2);
		func_624(Local_672.f_9);
		func_625(Local_672.f_1);
		func_626(Local_672.f_1, Local_672.f_2, Local_672.f_3);
		if (func_627(Local_672.f_1))
		{
			func_628(0, 3.031687E-09f);
			func_158(1024);
		}
		func_160(32);
	}
}

void func_501()
{
	if (!func_67(2))
	{
		return;
	}
	func_158(8);
}

bool func_502()
{
	if (!func_396(1024))
	{
		return false;
	}
	if (func_496(1024, 255))
	{
		return true;
	}
	else if (func_629())
	{
		return true;
	}
	return false;
}

void func_503(bool bParam0)
{
	if (!func_67(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_67(256))
		{
			func_193(Local_672.f_18, 0);
			func_158(256);
		}
	}
	func_158(16);
}

void func_504()
{
	int iVar0;

	if (func_630())
	{
		return;
	}
	iVar0 = func_199(1);
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar0) || !ANIMSCENE::IS_ANIM_SCENE_LOADED(iVar0, true, false))
	{
		return;
	}
	if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(iVar0, func_409(1), func_410(1), 2);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_411(), func_292(0), 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(iVar0, func_412(), func_294(0), 0);
		func_414(128);
	}
}

bool func_505()
{
	return Local_672.f_264.f_4;
}

bool func_506()
{
	bool bVar0;
	bool bVar1;

	if (!func_631())
	{
		if (func_337(Local_672.f_19.f_39))
		{
			func_203(&(Local_672.f_19.f_39), 1, 1);
		}
		return false;
	}
	else if (!func_632())
	{
		return false;
	}
	bVar0 = !func_633();
	bVar1 = func_634(Local_672.f_19.f_39, 0);
	if (bVar0 != bVar1)
	{
		func_635(Local_672.f_19.f_39, bVar0, 1, 1);
	}
	if (!bVar0)
	{
		return false;
	}
	if (func_636(Local_672.f_19.f_39, 1))
	{
		func_200(0);
		func_203(&(Local_672.f_19.f_39), 1, 1);
		return true;
	}
	return false;
}

void func_507(var uParam0, var uParam1, char* sParam2, char* sParam3, char* sParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

	if (func_195(*uParam1, 2))
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
	if (!func_637(iVar0, sParam4, 0))
	{
	}
	else
	{
		bVar2 = true;
	}
	bVar3 = func_195(iParam5, 64);
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
			sVar4 = func_638(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
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
	else if (func_639(iVar1))
	{
		if (func_195(*uParam1, 1))
		{
			TASK::CLEAR_PED_TASKS(iVar1, true, false);
		}
		func_244(uParam1, 2);
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
				if (func_195(*uParam1, 1))
				{
					sVar5 = func_638(PED::IS_PED_MALE(iVar1), sParam2, sParam3);
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
		func_492(250);
		if (func_195(iParam5, 4) && (func_640(iVar1, 0, 1, 0) != -3.273909E-18f || func_640(iVar1, 1, 1, 0) != -3.273909E-18f))
		{
			if (func_487(iVar1, 3.269911E-13f, 0, 0))
			{
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, false, 0, false, false);
				WEAPON::SET_CURRENT_PED_WEAPON(iVar1, -3.273909E-18f, false, 1, false, false);
				TASK::TASK_SWAP_WEAPON(iVar1, 1, 0, 0, 0);
			}
		}
		else if (func_195(iParam5, 1) && PED::IS_PED_FULLY_ON_MOUNT(iVar1, true))
		{
			if (PED::IS_PED_FULLY_ON_MOUNT(iVar1, false))
			{
				if (func_487(iVar1, 5.999514E-21f, 0, 0))
				{
					TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
				}
			}
		}
		else if (func_195(iParam5, 2) && PED::IS_PED_IN_ANY_VEHICLE(iVar1, true))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				if (func_487(iVar1, -1.283316E+09f, 0, 0))
				{
					TASK::TASK_LEAVE_ANY_VEHICLE(iVar1, 0, 0);
				}
			}
		}
		else if (func_195(iParam5, 8) && PED::GET_PED_STEALTH_MOVEMENT(iVar1))
		{
			PED::SET_PED_STEALTH_MOVEMENT(iVar1, false, 0, 0);
		}
		else if (func_195(iParam5, 16) && PED::GET_PED_CROUCH_MOVEMENT(iVar1))
		{
			PED::_SET_PED_CROUCH_MOVEMENT(iVar1, false, 0, false);
		}
		else if (func_195(iParam5, 32) && PED::IS_PED_CARRYING_SOMETHING(iVar1))
		{
			if (func_487(iVar1, -2.350014E+31f, 0, 0))
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
			if (func_487(iVar1, fVar7, 0, 0))
			{
				if (func_195(*uParam1, 1))
				{
					if (!func_195(*uParam1, 4))
					{
						func_244(uParam1, 2);
					}
					else if (!bVar3)
					{
						func_244(uParam1, 2);
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
					TASK::TASK_ENTER_ANIM_SCENE(func_641(bVar3, iVar1, 0), iVar0, func_638(PED::IS_PED_MALE(iVar1), sParam2, sParam3), sParam4, 1f, bVar3, iParam6, iParam8, -1f);
					if (!bVar3)
					{
						TASK::TASK_STAND_STILL(0, iParam7);
						func_642(iVar1, &iVar8, 0, 0, 1, 1);
					}
					func_244(uParam1, 1);
				}
			}
			else if (!func_195(*uParam1, 4))
			{
				func_244(uParam1, 4);
			}
		}
	}
}

bool func_508(var uParam0)
{
	return func_195(*uParam0, 2);
}

bool func_509(int iParam0, char* sParam1, float fParam2, int iParam3)
{
	float fVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iParam0))
	{
		return iParam3;
	}
	else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(iParam0, false))
	{
		return iParam3;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(iParam0);
	if (fVar0 >= fParam2)
	{
		return true;
	}
	return false;
}

void func_510(var uParam0)
{
	*uParam0 = 0;
}

void func_511(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_245(&(Local_63[iVar0 /*19*/].f_1), iParam0);
}

int func_512(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_643(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_513(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_643(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_514(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_354(&Var1, iParam0))
	{
		iVar0 = ((func_644() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_515(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_516(int iParam0, int iParam1)
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

void func_517(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 45, Global_1051645.f_16[15]);
	func_645(uParam0, uParam0->f_1);
}

struct<2> func_518(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

bool func_519(int iParam0)
{
	return func_646(iParam0, 2);
}

void func_520(bool bParam0, int iParam1, int iParam2)
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
		func_344(bParam0, iVar0);
		iVar0++;
	}
}

float func_521(var uParam0)
{
	return uParam0->f_26;
}

void func_522(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_523(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 1);
	}
	else
	{
		func_245(uParam0, 1);
	}
}

void func_524(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 512);
	}
	else
	{
		func_245(uParam0, 512);
	}
}

void func_525(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 2);
	}
	else
	{
		func_245(uParam0, 2);
	}
}

void func_526(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 8);
	}
	else
	{
		func_245(uParam0, 8);
	}
}

int func_527(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/].f_4;
}

float func_528(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_529(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/].f_6;
}

bool func_530(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_535(iParam1))
	{
		return false;
	}
	iVar0 = func_647(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_531(int iParam0, bool bParam1)
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

bool func_532(int iParam0)
{
	return func_185(iParam0, 32);
}

bool func_533(int iParam0)
{
	return func_185(iParam0, 64);
}

bool func_534(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_535(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

bool func_536(int iParam0)
{
	return func_143(8, iParam0);
}

int func_537(var uParam0)
{
	int iVar0;

	if (!func_648(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_649(&(Global_1264291[iVar0 /*29*/].f_1), uParam0))
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

void func_538(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_650(&Var0);
}

bool func_539()
{
	return Global_1265271.f_75.f_1 != -1;
}

bool func_540(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_648(uParam0))
	{
		return false;
	}
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1264291[iVar1 /*29*/].f_1 == *uParam0 && Global_1264291[iVar1 /*29*/].f_1.f_1 == uParam0->f_1)
		{
			return false;
		}
		if (Global_1264291[iVar1 /*29*/] == -1)
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (!bVar0)
	{
		return false;
	}
	return true;
}

bool func_541(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_256(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_542(var uParam0, var uParam1)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 0;
	Var0.f_5 = { *uParam0 };
	Var0.f_15 = { *uParam1 };
	Global_1265271.f_75 = { *uParam1 };
	func_650(&Var0);
}

void func_543(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_651(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_544(int iParam0)
{
	return Local_672.f_74.f_7[iParam0 /*11*/].f_10;
}

void func_545(int iParam0, char* sParam1, bool bParam2)
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

void func_546(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			func_488();
			func_489();
			break;
	}
}

bool func_547(int iParam0)
{
	return PED::IS_PED_MALE(func_292(iParam0));
}

int func_548()
{
	return -1;
}

float func_549(int iParam0, int iParam1, bool bParam2)
{
	if (!func_364(iParam1, 0))
	{
		if (!func_234(&iParam1))
		{
			return 0f;
		}
	}
	if (bParam2)
	{
		if (Local_63[iParam1 /*19*/].f_2.f_2[iParam0] < 0f)
		{
			return 0f;
		}
	}
	return Local_63[iParam1 /*19*/].f_2.f_2[iParam0];
}

int func_550(int iParam0)
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

struct<2> func_551(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_552(int iParam0)
{
	if (!func_418(func_417(iParam0), &(Local_672.f_150.f_79[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_672.f_150.f_106), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_672.f_150.f_106), iParam0);
}

int func_553(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_554(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_365(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_366(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_366(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_366(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_555(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_442(&(Local_63[iParam1 /*19*/].f_7), 1, iParam0))
	{
		if (Local_63[iParam1 /*19*/].f_7.f_8[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_19.f_37.f_1[iParam0]))
		{
			if (Local_19.f_37.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_19.f_37.f_4[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_63[iParam1 /*19*/].f_7.f_8[iParam0], Local_19.f_37.f_4[iParam0]))
		{
			Local_19.f_37.f_1[iParam0] = iVar0;
			Local_19.f_37.f_4[iParam0] = Local_63[iParam1 /*19*/].f_7.f_8[iParam0];
		}
	}
}

void func_556(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_606() - fParam1);
	func_652(uParam0, 1);
	func_653(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_557(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_558(var uParam0)
{
	if (!func_430(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_654(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_606() - uParam0->f_1);
}

float func_559(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

void func_560(int iParam0)
{
	int iVar0;

	if (!func_234(&iVar0))
	{
		return;
	}
	func_444(&(Local_63[iVar0 /*19*/].f_7), 3, iParam0);
}

void func_561(int iParam0)
{
}

bool func_562(int iParam0)
{
	return func_442(&(Local_672.f_150.f_75), 7, iParam0);
}

bool func_563(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_565(uParam1, 0, iVar0);
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
				if (func_578(uParam1, 4000))
				{
					if ((func_579(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_580(uParam1, iParam0)) && func_581(uParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_578(uParam1, 4000))
				{
					if ((func_579(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_580(uParam1, iParam0)) && func_581(uParam1, iParam0))
					{
						func_583();
						*uParam2 = 2;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_582(iParam0, Global_1940186.f_35))
					{
						func_583();
						*uParam2 = 2;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_586())
				{
					if (func_582(iParam0, Global_1940186.f_36))
					{
						func_583();
						*uParam2 = 2;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_572(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_573(Global_33, iParam0, uParam1))
					{
						func_583();
						*uParam2 = 4;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_574(Global_33, iParam0, uParam1))
					{
						func_583();
						*uParam2 = 256;
						func_567(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_655(iParam0, uParam1))
			{
				func_583();
				*uParam2 = 131072;
				func_567(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_656(iParam0, uParam1))
			{
				func_583();
				*uParam2 = 262144;
				func_567(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_564(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_565(var uParam0, bool bParam1, int iParam2)
{
	func_657(iParam2);
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
		uParam0->f_14 = func_658(0);
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
							func_244(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_659(1, 1))
						{
							func_244(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_659(1, 1) || *uParam0 & 8192 != 0))
				{
					func_245(uParam0, 9.403955E-38f);
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
			if (func_660(uParam0))
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
	func_661(uParam0);
}

bool func_566(int iParam0, var uParam1)
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
			if (!func_662(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_663(iParam0, iVar2) <= func_664(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_567(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_665(iParam2, 1, 1, 1, 0))
	{
		func_244(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_666(uParam1, 1);
	func_667();
}

bool func_568(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_668(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_669(uParam1);
			if (func_670(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_671(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_666(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_672(uParam1))
						{
							func_666(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_569(int iParam0, int iParam1, var uParam2)
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
	if (func_673(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_669(uParam2);
		if (func_670(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_671(uParam2)
				{
					func_666(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_570(int iParam0, var uParam1)
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
	if (func_662(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_671(uParam1)
		{
			fVar3 = func_669(uParam1);
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

int func_571(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_674(bParam1, bParam2, bParam3);
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

bool func_572(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_573(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_675(uParam2);
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
			if (func_581(uParam2, iParam1))
			{
				func_666(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_574(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_602(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_581(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_666(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_575(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_676(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_666(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_666(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_677(iParam1, vVar0, vVar4))
					{
						func_666(uParam2, 1);
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
					func_666(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_677(iParam1, vVar0, vVar7))
					{
						func_666(uParam2, 1);
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

bool func_576(int iParam0, var uParam1)
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
		if (!func_662(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_678(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_679(Global_1940186.f_28[iVar0]))
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
			if (func_680(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_681(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_682(uParam1, iParam0, fVar1, iVar0))
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

bool func_577(int iParam0, var uParam1)
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

bool func_578(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_579(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_683(iVar0, &iVar2))
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
	if (func_684(iVar0, iParam0))
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

int func_580(var uParam0, int iParam1)
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

bool func_581(var uParam0, int iParam1)
{
	if (func_685(uParam0))
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

bool func_582(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_686(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_583()
{
}

bool func_584(var uParam0, int iParam1)
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
		if (func_687(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_585();
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
						if (func_688(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_585();
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

int func_585()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_586()
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
	if ((func_585() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_587(var uParam0, int iParam1)
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
	fVar0 = func_664(uParam0);
	if (uParam0->f_13 > func_521(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_689(iParam1);
	iVar1 = func_690(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_588(var uParam0, int iParam1)
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
	if (func_458(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_691(vVar1, vVar4);
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

int func_589(int iParam0, int iParam1, var uParam2)
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
	return func_692(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_590(int iParam0, var uParam1)
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
		if (func_693(iParam0, uParam1, 1))
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
	if (!func_453(iParam0))
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
			if (func_694(uParam1))
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
					if (!func_695(uParam1, iParam0))
					{
						if (func_688(iVar4, Global_34, 1) < 7f)
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

bool func_591(int iParam0, var uParam1)
{
	if (!func_696(0))
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

bool func_592(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_585();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_593(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_594(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_585();
	}
	else if (func_585() - uParam1->f_5) > func_697(uParam1)
	{
		return func_698(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_595(var uParam0, int iParam1)
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

int func_596(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_699(vVar3, vVar6);
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
	if (func_700(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_597(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_195(Local_672.f_150.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_672.f_150.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_672.f_150.f_65), iParam0);
	if (!bParam3 && Local_63[iParam2 /*19*/].f_7.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_63[iParam2 /*19*/].f_7.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_640(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_701(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_598(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_599(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_600(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_702(iParam0) * 1056964608) + vParam5.x);
		vVar7.f_1 = ((func_703(iParam0) * 1056964608) + vParam5.y);
		vVar7.f_2 = ((func_704(iParam0) * 1056964608) + vParam5.z);
	}
	vVar10 = { func_387(func_705(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_706(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_706(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_707((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_707((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_707(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_707((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_601(int iParam0, var uParam1)
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

int func_602(var uParam0)
{
	return uParam0->f_23;
}

float func_603(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_604(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_605(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_604(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_606() - 1017370378);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_606()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_607(int iParam0, var uParam1, var uParam2, bool bParam3)
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

int func_608(int iParam0, char* sParam1, bool bParam2, float fParam3, float fParam4, int iParam5, float fParam6, bool bParam7)
{
	int iVar0;

	if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
	{
		return 0;
	}
	if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (iVar0 > 256)
	{
		return 0;
	}
	if (ENTITY::_CREATE_FOOTPATH_TRAIL(iParam0, sParam1, bParam2, fParam3, fParam4, iParam5, 0, 0, 0, fParam6, 0, bParam7))
	{
		return 1;
	}
	return 0;
}

void func_609(var uParam0, vector3 vParam1, float fParam4, int iParam5)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	vector3 vVar7;
	vector3 vVar10;
	vector3 vVar13;
	vector3 vVar16;
	int iVar19;
	float fVar20;
	float fVar21;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, uParam0->f_1) };
	vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vParam1, fParam4, uParam0->f_4) };
	vVar10 = { func_387(vVar7 - vVar4) };
	vVar13 = { func_708(vVar10, 2) };
	vVar16 = { vVar4 + vVar10 * FtoV((BUILTIN::VDIST(vVar4, vVar7) * uParam0->f_7)) + Vector(uParam0->f_8, uParam0->f_8, uParam0->f_8) * vVar13 };
	iVar19 = 0;
	if (func_195(*uParam0, 1))
	{
		GRAPHICS::_0x41F88A85A579A61D(uParam0->f_9);
		while (func_709(&fVar0, &vVar1, uParam0->f_10, vVar4, vVar7, vVar16))
		{
			GRAPHICS::_ADD_BLOOD_TRAIL_POINT(vVar1);
			iVar19++;
			if (iVar19 > iParam5)
			{
			}
		else
		{
			}
		}
		GRAPHICS::_0x812C1563185C6FB2();
		iVar19 = 0;
		fVar0 = 0f;
		vVar1 = { 0f, 0f, 0f };
	}
	if (func_195(*uParam0, 2))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_11))
		{
			GRAPHICS::_0x4BD66B4E3427689B(uParam0->f_11);
			while (func_709(&fVar0, &vVar1, uParam0->f_13, vVar4, vVar7, vVar16))
			{
				MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
				if ((uParam0->f_12 < 0f || uParam0->f_12 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_12)
				{
					GRAPHICS::_ADD_BLOOD_TRAIL_SPLAT(vVar1);
					iVar19++;
					if (iVar19 > iParam5)
					{
					}
				else
				{
					}
					GRAPHICS::_0xF2F543D48F319A3A();
					iVar19 = 0;
					fVar0 = 0f;
					vVar1 = { 0f, 0f, 0f };
					if (func_195(*uParam0, 4))
					{
						while (func_709(&fVar0, &vVar1, uParam0->f_21, vVar4, vVar7, vVar16))
						{
							MISC::SET_RANDOM_SEED(BUILTIN::TIMERA());
							if ((uParam0->f_14 < 0f || uParam0->f_14 >= 1f) || MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 1f) <= uParam0->f_14)
							{
								fVar20 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_15, uParam0->f_16);
								fVar21 = MISC::GET_RANDOM_FLOAT_IN_RANGE(uParam0->f_17, uParam0->f_18);
								GRAPHICS::_ADD_BLOOD_POOL_2(vVar1, fVar20, fVar21, uParam0->f_20, false, NaNf, false);
								iVar19++;
								if (iVar19 > iParam5)
								{
								}
							else
							{
								}
								iVar19 = 0;
								fVar0 = 0f;
								vVar1 = { 0f, 0f, 0f };
							}
						}
					}
				}
			}
		}
	}
}

void func_610(var uParam0, vector3 vParam1, float fParam4)
{
	int iVar0;

	iVar0 = -1;
	func_710(uParam0, vParam1, fParam4, 4, iVar0, 0);
}

var func_611(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, var uParam11)
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
	if (func_711() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_712());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_712());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_712());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_713(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_714(iVar2))
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
				if (iVar9 & 8192 != 0 && func_715(iVar2) != 1)
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
					if (!func_716(iVar10))
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

Vector3 func_612(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_613(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_672.f_74.f_7[iParam0 /*11*/].f_1);
}

void func_614(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_183(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_672.f_74.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_672.f_74.f_7[iParam0 /*11*/]);
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
	Local_672.f_74.f_7[iParam0 /*11*/].f_1 = iVar0;
}

float func_615(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_616(var uParam0)
{
	*uParam0 = 0;
	if (Global_1290256.f_11.f_760 >= 8)
	{
		return false;
	}
	if (func_617(SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		*uParam0 = 1;
		return false;
	}
	return true;
}

bool func_617(int iParam0)
{
	int iVar0;

	if (!SCRIPTS::DOES_THREAD_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iParam0 == Global_1290256.f_11.f_761[iVar0])
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_618()
{
	if (Local_19.f_7.f_17 != PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!func_496(1, 255))
	{
		return false;
	}
	if (func_496(8, 255))
	{
		return false;
	}
	if (Local_19.f_7 != 7 && Local_19.f_7 != 3)
	{
		return false;
	}
	return true;
}

bool func_619()
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	fVar1 = BUILTIN::VDIST(func_249(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
	if (fVar1 > 1108082688)
	{
		return false;
	}
	iVar2 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar2) || !GANG::NETWORK_IS_GANG_ACTIVE(iVar2))
	{
		return false;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar2) < 2)
	{
		return false;
	}
	iVar3 = 0;
	while (iVar3 < 7)
	{
		iVar4 = func_717(iVar3);
		if (iVar0 != iVar4 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
			iVar5 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar5))
			{
			}
			else if (func_496(2048, iVar5))
			{
				return true;
			}
		}
		iVar3++;
	}
	return false;
}

void func_620(int iParam0, int iParam1)
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
	Var31 = { func_421(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_133(&Var0, 4) && func_718(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_621(int iParam0)
{
	func_719(iParam0);
}

void func_622(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_140(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_720(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_141(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_518(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_518(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_518(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_518(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_623(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_517(&Var0);
}

void func_624(struct<2> Param0)
{
	struct<32> Var0;

	if (func_322(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_322(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_322(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_721(Param0, &Var0))
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

void func_625(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_421(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_626(int iParam0, int iParam1, int iParam2)
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

bool func_627(int iParam0)
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

int func_628(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_722())
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
		func_723(&Global_0, 8);
	}
	func_723(&Global_0, 1);
	return 1;
}

bool func_629()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_490(0, 1101004800 /* Float: 20f */, 255, 0))
	{
		return false;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1) || !GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		return false;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar1) < 2)
	{
		return false;
	}
	iVar2 = 0;
	while (iVar2 < 7)
	{
		iVar3 = func_717(iVar2);
		if (iVar0 != iVar3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
		{
			iVar4 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar3);
			if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
			{
			}
			else if (func_496(1024, iVar4))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_630()
{
	if (!func_396(128))
	{
		return false;
	}
	if (!func_496(128, 255))
	{
		func_414(128);
	}
	return true;
}

bool func_631()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_396(1))
	{
		return false;
	}
	iVar1 = func_640(iVar0, 0, 1, 0);
	iVar2 = func_640(iVar0, 1, 1, 0);
	if (func_724(iVar1) || func_724(iVar2))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (!func_630())
	{
		return false;
	}
	if (!func_334(0))
	{
		return false;
	}
	if (!PED::IS_PED_ON_FOOT(iVar0))
	{
		return false;
	}
	if (func_725())
	{
		return false;
	}
	if (func_726())
	{
		return false;
	}
	if (!func_536(255))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(iVar0))
	{
		return false;
	}
	return true;
}

bool func_632()
{
	int iVar0;

	iVar0 = func_292(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_337(Local_672.f_19.f_39))
	{
		return true;
	}
	Local_672.f_19.f_39 = func_727("RE_LF_USECHECK", -1.068381E+13f, iVar0, 2, 1, 0, 0, 5, 2f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	func_728(Local_672.f_19.f_39, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0, 1);
	return true;
}

bool func_633()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_729(iVar0))
	{
		return true;
	}
	if (func_730(iVar0))
	{
		return true;
	}
	if (func_731(iVar0, 0))
	{
		return true;
	}
	if (func_732(iVar0))
	{
		return true;
	}
	return false;
}

bool func_634(int iParam0, bool bParam1)
{
	if (bParam1 && !func_337(iParam0))
	{
		return false;
	}
	return !func_646(iParam0, 4);
}

void func_635(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_337(iParam0))
	{
		return;
	}
	iVar0 = func_338(iParam0);
	if (bParam1)
	{
		func_733(iParam0, 4);
		if (bParam3)
		{
			func_734(iVar0, 1);
		}
		func_735(iVar0, 1);
	}
	else
	{
		func_736(iParam0, 4);
		func_735(iVar0, 0);
	}
}

bool func_636(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_337(iParam0))
	{
		return false;
	}
	iVar0 = func_338(iParam0);
	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		if (Global_1951897[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::GET_SYSTEM_TIME();
		}
		fVar2 = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951897[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951897[iVar0 /*23*/].f_18) * (1f - Global_1951897[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951897[iVar0 /*23*/].f_21 = iVar1;
			Global_1951897[iVar0 /*23*/].f_22 = fVar2;
		}
	}
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_637(int iParam0, char* sParam1, bool bParam2)
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

char* func_638(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_639(int iParam0)
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
	if (func_737())
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

int func_640(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_641(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_642(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_643(struct<2> Param0, bool bParam2)
{
	if (!func_39(Param0))
	{
		return false;
	}
	func_738(bParam2);
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

int func_644()
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

void func_645(var uParam0, var uParam1)
{
}

bool func_646(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

int func_647(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

bool func_648(var uParam0)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_3)))
	{
		return false;
	}
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == -1)
	{
		return false;
	}
	return true;
}

bool func_649(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!MISC::ARE_STRINGS_EQUAL(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return false;
	}
	return true;
}

void func_650(var uParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (Global_1051645.f_16[16] == 0 || !SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[16]))
	{
		return;
	}
	uParam0->f_4 = uParam0->f_4;
	*uParam0 = 184;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 27, 38, Global_1051645.f_16[16]);
	func_739(uParam0);
}

float func_651(float fParam0, float fParam1, float fParam2)
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

void func_652(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_653(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_654(var uParam0)
{
	return func_557(*uParam0, 2);
}

bool func_655(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_740(uParam1);
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
		fVar2 = func_741(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_742())
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

bool func_656(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_743(iParam0))
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

void func_657(int iParam0)
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
	Global_1940186.f_21 = func_744();
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
			func_745(&(Global_1940186.f_28), &(Global_1940186.f_33));
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

var func_658(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_659(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_746(bParam0, &iVar0, &iVar1))
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

bool func_660(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_747(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_747(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_690(iVar0) == -1)
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

void func_661(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_748(uParam0);
	}
}

bool func_662(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_690(iParam2);
	}
	else
	{
		iVar1 = func_689(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_690(iParam0);
	}
	else
	{
		iVar0 = func_689(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_195(*uParam1, 8388608))
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

float func_663(int iParam0, int iParam1)
{
	return func_686(iParam0, iParam1, 1, 1);
}

float func_664(var uParam0)
{
	return uParam0->f_29;
}

bool func_665(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_666(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_244(uParam0, 3.85186E-34f);
	}
	else
	{
		func_245(uParam0, 3.85186E-34f);
	}
}

void func_667()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_668(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_686(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_749(iVar0, 0)))
		{
			if (func_750(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_669(var uParam0)
{
	return uParam0->f_18;
}

bool func_670(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_195(*uParam0, 4194304))
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

int func_671(var uParam0)
{
	return uParam0->f_19;
}

int func_672(var uParam0)
{
	return uParam0->f_20;
}

bool func_673(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_749(iVar0, 0)))
		{
			if (func_751(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_674(bool bParam0, bool bParam1, bool bParam2)
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

float func_675(var uParam0)
{
	return uParam0->f_25;
}

int func_676(var uParam0)
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

bool func_677(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_752(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
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

int func_678(int iParam0)
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
	if (func_753(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_679(int iParam0)
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

bool func_680(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_743(iParam1))
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

bool func_681(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_743(iParam1))
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

bool func_682(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_754(uParam0);
	if (func_743(iParam1))
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

bool func_683(int iParam0, int iParam1)
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

bool func_684(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_755(iParam0, 1, 0, 0)) && !func_755(iParam0, 1, 0, 0) == 1284.666f)
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

bool func_685(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

float func_686(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_687(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_688(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_688(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_689(int iParam0)
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

int func_690(int iParam0)
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

float func_691(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_692(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_683(Global_33, &iVar1))
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
		fVar2 = func_686(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_686(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
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

bool func_693(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_746(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_695(uParam1, iVar0))
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
				if (!bParam2 || !func_695(uParam1, iVar1))
				{
					if (func_688(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_694(var uParam0)
{
	return func_195(*uParam0, 131072);
}

bool func_695(var uParam0, int iParam1)
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

bool func_696(int iParam0)
{
	return false;
}

int func_697(var uParam0)
{
	return uParam0->f_22;
}

int func_698(int iParam0, var uParam1, bool bParam2, float fParam3)
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

float func_699(vector3 vParam0, vector3 vParam3)
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

bool func_700(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

bool func_701(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_702(int iParam0)
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
	fVar0 = func_756(vVar2.x, fVar0);
	fVar1 = func_741(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.x, fVar0);
	fVar1 = func_741(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.x, fVar0);
	fVar1 = func_741(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.x, fVar0);
	fVar1 = func_741(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.x, fVar0);
	fVar1 = func_741(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_703(int iParam0)
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
	fVar0 = func_756(vVar2.y, fVar0);
	fVar1 = func_741(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.y, fVar0);
	fVar1 = func_741(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.y, fVar0);
	fVar1 = func_741(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.y, fVar0);
	fVar1 = func_741(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.y, fVar0);
	fVar1 = func_741(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_704(int iParam0)
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
	fVar0 = func_756(vVar2.z, fVar0);
	fVar1 = func_741(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.z, fVar0);
	fVar1 = func_741(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.z, fVar0);
	fVar1 = func_741(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.z, fVar0);
	fVar1 = func_741(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_756(vVar2.z, fVar0);
	fVar1 = func_741(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_705(int iParam0)
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
	return func_387((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_706(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_707(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

Vector3 func_708(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	switch (iParam3)
	{
		case 0:
			vVar0.x = -vParam0.y;
			vVar0.f_1 = vParam0.x;
			break;
		case 1:
			vVar0.x = -vParam0.x;
			vVar0.f_1 = -vParam0.y;
			break;
		case 2:
			vVar0.x = vParam0.y;
			vVar0.f_1 = -vParam0.x;
			break;
	}
	vVar0.f_2 = vParam0.z;
	return vVar0;
}

bool func_709(float fParam0, var uParam1, float fParam2, vector3 vParam3, vector3 vParam6, vector3 vParam9)
{
	if (*fParam0 > 1f || *fParam0 < 0f)
	{
		return false;
	}
	*uParam1 = { func_757(vParam3, vParam9, vParam6, *fParam0) };
	if (!func_378(uParam1, 1, 10, 0, 0))
	{
		return false;
	}
	if (*fParam0 != 1f)
	{
		*fParam0 = (*fParam0 + fParam2);
		if (*fParam0 > 1f)
		{
			*fParam0 = 1f;
		}
	}
	else
	{
		*fParam0 = -1f;
	}
	return true;
}

void func_710(var uParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7)
{
	if (!func_330(uParam0))
	{
		*uParam0 = GRAPHICS::ADD_VEG_MODIFIER_SPHERE(vParam1, fParam4, iParam5, iParam6, iParam7);
		if (func_330(uParam0))
		{
		}
	}
}

int func_711()
{
	return Global_1051645.f_12;
}

char* func_712()
{
	return "unnamed";
}

int func_713(int iParam0)
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

bool func_714(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_758(36, iParam0);
}

int func_715(int iParam0)
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

bool func_716(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_759(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_760(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

int func_717(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102813.f_3675[iParam0];
}

int func_718(int iParam0)
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

void func_719(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_421(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_720(int iParam0, var uParam1, var uParam2)
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

bool func_721(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_643(Param0, &vVar0);
	if (func_761(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_722()
{
	return !Global_1572887.f_10;
}

void func_723(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_724(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WEAPON_KIT_CAMERA"):
		case 332793555:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_725()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if ((PED::GET_PED_CONFIG_FLAG(iVar0, 227, true) || PED::IS_PED_SITTING(iVar0)) || func_762(iVar0))
	{
		return true;
	}
	return false;
}

bool func_726()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

int func_727(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_646(iVar0, 2))
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
				func_763(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

void func_728(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_337(iParam0))
	{
		return;
	}
	iVar0 = func_338(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

bool func_729(int iParam0)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 1) != 0)
	{
		return true;
	}
	return false;
}

bool func_730(int iParam0)
{
	return func_764(iParam0, -1);
}

bool func_731(int iParam0, bool bParam1)
{
	if (((((func_765(iParam0, 6.077861E-11f) || func_765(iParam0, -9.036117E+30f)) || func_765(iParam0, 102.1545f)) || func_765(iParam0, -7.366091E-38f)) || func_765(iParam0, 2.133754E-15f)) || func_765(iParam0, 1.165701E+10f))
	{
		return true;
	}
	if (PED::IS_PED_IN_COMBAT(iParam0, 0))
	{
		return true;
	}
	if (bParam1)
	{
		if (func_765(iParam0, -2.514688E+15f) || func_765(iParam0, 6.257903E-33f))
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

bool func_732(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_766(iParam0, iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_733(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_734(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_646(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_735(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_736(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_737()
{
	return Global_1896762.f_352;
}

void func_738(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

void func_739(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_767(iVar0);
		if (func_195(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

float func_740(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_521(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_768(uParam0);
	}
	return func_521(uParam0);
}

float func_741(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_742()
{
	int iVar0;
	int iVar1;

	iVar0 = func_770(func_769());
	iVar1 = func_771(func_769());
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

bool func_743(int iParam0)
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

bool func_744()
{
	if (func_772())
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

void func_745(var uParam0, var uParam1)
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

bool func_746(bool bParam0, int iParam1, int iParam2)
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

int func_747(var uParam0)
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

void func_748(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_245(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_244(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_749(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_750(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_751(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_751(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_752(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_753(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_754(var uParam0)
{
	return uParam0->f_28;
}

float func_755(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_756(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

Vector3 func_757(vector3 vParam0, vector3 vParam3, vector3 vParam6, var uParam9)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_773(vParam0, vParam3, uParam9) };
	vVar3 = { func_773(vParam3, vParam6, uParam9) };
	return func_773(vVar0, vVar3, uParam9);
}

bool func_758(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_774(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_775())
	{
		return func_774(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_774(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_759(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_760(int iParam0)
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
		func_776(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_777(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_761(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_778(iParam0))
	{
		return false;
	}
	if (func_779(iParam0, uParam1, &uVar0))
	{
		func_780(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_762(int iParam0)
{
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return false;
	}
	if (((PED::IS_PED_USING_SCENARIO_HASH(iParam0, 0.0258619f) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, 9271496f)) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, -1.799881f)) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, -2.585946E-25f))
	{
		return true;
	}
	return false;
}

void func_763(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_734(iParam0, 1);
	func_735(iParam0, 1);
	func_736(iParam0, 128);
}

int func_764(int iParam0, int iParam1)
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

int func_765(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2.003139E+37f && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_766(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_781(iParam0, iParam1);
	if (iVar0 != 0)
	{
		return true;
	}
	return false;
}

int func_767(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

var func_768(var uParam0)
{
	return uParam0->f_27;
}

int func_769()
{
	return Global_1902565;
}

int func_770(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_771(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_772()
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

Vector3 func_773(vector3 vParam0, vector3 vParam3, float fParam6)
{
	return FtoV((1f - fParam6)) * vParam0 + Vector(fParam6, fParam6, fParam6) * vParam3;
}

bool func_774(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_775()
{
	return Global_1102813.f_3672;
}

void func_776(int iParam0)
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
	func_777(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_777(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_778(int iParam0)
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

bool func_779(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_782(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_780(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_783(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_784(iVar0);
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
			uParam2->f_5 = func_785(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_786(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_787(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_788(iVar0);
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

int func_781(int iParam0, int iParam1)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar1 = PED::_REFRESH_LOOT_STATE_FOR_PED(iParam0, iParam1, &uVar0, 1, 1);
	return iVar1;
}

int func_782(int iParam0)
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

int func_783(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_789(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_784(int iParam0)
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

int func_785(int iParam0)
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

int func_786(int iParam0)
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

int func_787(int iParam0)
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

int func_788(int iParam0)
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

bool func_789(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_790(iParam0, uParam1, &uVar0))
	{
		func_791(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_790(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_782(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_791(bool bParam0, int iParam1, var uParam2)
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

