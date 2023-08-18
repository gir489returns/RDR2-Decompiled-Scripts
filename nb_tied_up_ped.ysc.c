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
	vector3 vLocal_13 = { 0f, 0f, 0f };
	struct<37> Local_16 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, -1, 0, 1, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 255, 1, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_53 = 8;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 8;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	struct<38> Local_71[32];
	struct<521> Local_1288 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 0, 1065353216, 1065353216, 1065353216, 1, 0, 0, 8, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_1809 = 8;
	var uLocal_1810 = 0;
	var uLocal_1811 = 0;
	var uLocal_1812 = 0;
	var uLocal_1813 = 0;
	var uLocal_1814 = 0;
	var uLocal_1815 = 0;
	var uLocal_1816 = 0;
	var uLocal_1817 = 0;
	var uLocal_1818 = 8;
	var uLocal_1819 = 0;
	var uLocal_1820 = 0;
	var uLocal_1821 = 0;
	var uLocal_1822 = 0;
	var uLocal_1823 = 0;
	var uLocal_1824 = 0;
	var uLocal_1825 = 0;
	var uLocal_1826 = 0;
	var uLocal_1827 = 2;
	var uLocal_1828 = 0;
	var uLocal_1829 = 0;
	var uLocal_1830 = 0;
	float fLocal_1831 = 0f;
	float fLocal_1832 = 0f;
	var uLocal_1833 = 0;
	var uLocal_1834 = 0;
	var uLocal_1835 = 0;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	vLocal_13 = { 0f, 0f, 0f };
	fLocal_1831 = 1f;
	fLocal_1832 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_16, 55, 43);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_16), 55, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_71, 1217, 44);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_71[0 /*38*/])), 1217, "m_clientData");
	func_12(0);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(bool bParam0)
{
	if (Local_16 == 6)
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
	else if (func_17(Local_1288.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_1288.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_1288.f_12), Local_1288.f_9))
	{
		return true;
	}
	else if (Local_1288.f_8 == 6)
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
	MISC::COPY_SCRIPT_STRUCT(&Local_1288, bParam0, 5);
	iVar2 = func_31(&bVar1, Local_1288.f_1, Local_1288.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_1288.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_32(&Var3, Local_1288.f_1, Local_1288.f_2, Local_1288.f_3, iVar0);
	Local_1288.f_9 = { func_33(Var3.f_5, 8) };
	Local_1288.f_14 = Var3.f_5;
	Local_1288.f_15 = { Var3.f_11 };
	Local_1288.f_18 = Var3.f_7;
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
	if (func_38(Global_1051268) && !func_21(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_39(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_40(iParam3, 255))
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
	if (func_41())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_38(Global_1051268))
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
	if (Local_16 <= 5)
	{
		func_42();
	}
	switch (Local_16)
	{
		case 0:
			func_43();
			break;
		case 1:
			func_44();
			break;
		case 2:
			func_45();
			break;
		case 3:
			func_46();
			break;
		case 4:
			func_47();
			break;
		case 5:
			func_48();
			break;
	}
}

void func_23()
{
	func_49();
	func_50();
	if (Local_1288.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_1288.f_8)
	{
		case 0:
			func_52();
			break;
		case 1:
			func_53();
			break;
		case 2:
			func_54();
			break;
		case 3:
			func_55();
			break;
		case 4:
			func_56();
			break;
		case 5:
			func_57();
			break;
	}
}

void func_24()
{
	func_58();
}

void func_25()
{
	if (func_59())
	{
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_16.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_16.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
}

void func_27()
{
	if (Local_1288.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_62(Local_1288.f_12, 4);
		}
	}
	func_63();
	if (func_64(64))
	{
		func_65(Local_16.f_6);
	}
	func_66();
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
	while (iVar0 < 8)
	{
		Local_16.f_36.f_1[iVar0] = 255;
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
	func_67(&Var0, Var26.f_5);
	iVar25 = func_68(&Var0);
	if (func_19(iVar25))
	{
		Var10 = { func_69(iVar25) };
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
			func_70(bParam0, iParam2);
			break;
		case 2:
			func_71(bParam0, iParam2);
			break;
		case 3:
			func_72(bParam0, iParam2);
			break;
		case 4:
			func_73(bParam0, iParam2);
			break;
		case 12:
			func_74(bParam0, iParam2);
			break;
		case 6:
			func_75(bParam0, iParam2);
			break;
		case 7:
			func_76(bParam0, iParam2, iParam3);
			break;
		case 5:
			func_77(bParam0, iParam2);
			break;
		case 11:
			func_78(bParam0, iParam2);
			break;
		case 9:
			func_79(bParam0, iParam2, iParam3);
			break;
		case 10:
			func_80(bParam0, iParam2);
			break;
		case 8:
			func_81(bParam0, iParam2);
			break;
		case 13:
			func_82(bParam0, iParam2, iParam4);
			break;
		case 14:
			func_83(bParam0, iParam2, iParam3);
			break;
		case 15:
			func_84(bParam0, iParam2);
			break;
		case 16:
			func_85(bParam0, iParam2, iParam3);
			break;
		case 31:
			func_86(bParam0, iParam2);
			break;
		case 21:
			func_87(bParam0, iParam2);
			break;
		case 28:
			func_88(bParam0, iParam2);
			break;
		case 25:
			func_89(bParam0, iParam2);
			break;
		case 24:
			func_90(bParam0, iParam2);
			break;
		case 22:
			func_91(bParam0, iParam2);
			break;
		case 23:
			func_92(bParam0, iParam2);
			break;
		case 29:
			func_93(bParam0, iParam2);
			break;
		case 26:
			func_94(bParam0, iParam2);
			break;
		case 30:
			func_95(bParam0, iParam2);
			break;
		case 27:
			func_96(bParam0, iParam2);
			break;
		case 32:
			func_97(bParam0, iParam2, iParam3);
			break;
		case 33:
			func_98(bParam0, iParam2, iParam3);
			break;
		case 34:
			func_99(bParam0, iParam2);
			break;
		case 17:
			func_100(bParam0, iParam2);
			break;
		case 18:
			func_101(bParam0, iParam2);
			break;
		case 19:
			func_102(bParam0, iParam2);
			break;
		case 20:
			func_103(bParam0, iParam2);
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
			func_104(bParam0, iParam1, iParam2);
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
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573), func_105(iParam1));
			break;
		case 3:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_602), func_105(iParam1));
			break;
		case 4:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_2104), func_105(iParam1));
			break;
		case 5:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_12606), func_105(iParam1));
			break;
		case 6:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_12908), func_105(iParam1));
			break;
		case 7:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_15910), func_105(iParam1));
			break;
		case 8:
			Var0.f_1 = func_106(iParam0, &(Global_1072759.f_573.f_16512), func_105(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_107();
	}
	return Var0;
}

void func_34()
{
	func_108();
	func_109();
}

void func_35()
{
	int iVar0;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(8);
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		func_111(iVar0, func_110(iVar0));
		if (iVar0 < 6 || iVar0 > 7)
		{
			func_114(iVar0, func_112(iVar0), func_113(iVar0), 1);
		}
		else
		{
			func_115(iVar0);
		}
		iVar0++;
	}
	func_116(&(Local_1288.f_19.f_9), 5f);
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_117(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_105(Param0))
	{
		return false;
	}
	return true;
}

bool func_39(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_40(int iParam0, int iParam1)
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

bool func_41()
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
	if (!func_38(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_42()
{
}

void func_43()
{
	int iVar0;
	struct<29> Var1;

	iVar0 = Global_1207465.f_231.f_1066[Local_1288.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_32(&Var1, Local_1288.f_1, Local_1288.f_2, Local_1288.f_3, iVar0);
	if (!func_118(&Var1, 1))
	{
		func_119(1);
		return;
	}
	Local_16.f_6 = func_120(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)));
	func_121(256);
	if (func_122(Local_16.f_6))
	{
		func_123(5);
		func_119(6);
	}
	else
	{
		func_119(1);
	}
}

void func_44()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_32(&Var0, Local_1288.f_1, Local_1288.f_2, -1, 255);
	if (func_118(&Var0, 1))
	{
		func_119(2);
		return;
	}
	if (func_124(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_1288.f_15, Var0.f_10, 2442122);
		func_119(2);
	}
	else if (bVar31)
	{
		func_123(3);
		func_119(6);
	}
	if (!func_125(Local_16.f_3.f_2))
	{
		func_126(&(Local_16.f_3.f_2));
	}
	else if (func_127(Local_16.f_3.f_2) > 45000)
	{
		func_123(4);
		func_119(6);
	}
}

void func_45()
{
	if (func_128(1, 255))
	{
		if (!func_129(1))
		{
			if (func_130())
			{
				func_121(1);
			}
		}
		else
		{
			func_131();
			func_119(3);
		}
	}
}

void func_46()
{
	bool bVar0;

	if (func_128(2, 255))
	{
		if (!func_129(2))
		{
			bVar0 = true;
			if (!func_132())
			{
				bVar0 = false;
			}
			if (!func_133())
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				func_121(2);
			}
		}
		else
		{
			func_134();
			func_119(4);
		}
	}
}

void func_47()
{
	func_135();
	func_136();
	func_137();
	if (func_138() || Local_16.f_2 != 0)
	{
		func_139();
		func_119(5);
	}
}

void func_48()
{
	if (func_128(4, 255))
	{
		if (func_140())
		{
			func_121(4);
			func_119(6);
		}
	}
}

void func_49()
{
	if (!func_129(256))
	{
		return;
	}
	if (func_129(512))
	{
		if (func_64(64) && func_120(PLAYER::PLAYER_ID()) == Local_16.f_6)
		{
			func_65(Local_16.f_6);
			func_141(64);
		}
	}
	else if (!func_64(64))
	{
		if (func_120(PLAYER::PLAYER_ID()) == Local_16.f_6)
		{
			func_142(Local_16.f_6, 1, 1);
			func_143(64);
		}
	}
	else if (func_120(PLAYER::PLAYER_ID()) != Local_16.f_6)
	{
		func_65(Local_16.f_6);
		func_141(64);
	}
}

void func_50()
{
	if (!Global_13)
	{
		if (func_128(8192, 255))
		{
			func_144(8192);
		}
	}
	else if (!func_128(8192, 255))
	{
		func_145(8192);
	}
}

void func_51()
{
	func_146();
	func_147();
}

void func_52()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 0)
	{
		func_49();
		func_148(1);
	}
}

void func_53()
{
	if (Local_16 == 6)
	{
		func_148(6);
	}
	else if (Local_16 > 1)
	{
		func_148(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_128(1, 255))
	{
		bVar0 = true;
		if (!func_149())
		{
			bVar0 = false;
		}
		if (!func_150())
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			func_145(1);
		}
		else
		{
			iVar1 = Global_1901671.f_242.f_70;
			if (!func_125(Local_1288.f_11))
			{
				func_126(&(Local_1288.f_11));
			}
			if (func_127(Local_1288.f_11) >= iVar1)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 2)
	{
		func_151(&(Local_1288.f_11));
		func_152();
		func_148(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_128(2, 255))
	{
		iVar0 = func_153();
		iVar1 = func_154();
		if (iVar0 && iVar1)
		{
			func_145(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_125(Local_1288.f_11))
			{
				func_126(&(Local_1288.f_11));
			}
			if (func_155(Local_1288.f_11) >= iVar2)
			{
				func_148(6);
			}
		}
	}
	else if (Local_16 > 3)
	{
		func_151(&(Local_1288.f_11));
		func_156();
		func_157();
		func_158();
		func_159();
		func_148(4);
	}
}

void func_56()
{
	if (Local_16 >= 5)
	{
		func_160();
		func_148(5);
		return;
	}
	func_161();
	func_162();
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
}

void func_57()
{
	if (!func_128(4, 255))
	{
		if (func_168())
		{
			func_169();
			func_62(Local_1288.f_12, 4);
			func_145(4);
		}
	}
	else if (Local_16 > 5)
	{
		func_148(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_129(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
}

void func_60()
{
}

void func_61()
{
	int iVar0;
	int iVar1;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 8)
		{
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_16.f_27[iVar1]);
				func_170(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_171(iVar0, "HAS_VOICE");
					func_171(iVar0, "HorseTeamA");
					func_171(iVar0, "HorseTeamB");
					func_171(iVar0, "HorseOwnerTeamA");
					func_171(iVar0, "HorseOwnerTeamB");
					if (!func_172(iVar1, 16))
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

void func_62(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_173(iParam0, iVar0, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(Global_1217203[iVar0 /*72*/][iParam0]), iParam1);
}

void func_63()
{
	int iVar0;
	bool bVar1;

	if (!func_64(1))
	{
		return;
	}
	if (func_64(4))
	{
		return;
	}
	if (!func_64(2))
	{
		iVar0 = -1;
	}
	else if (!func_64(8))
	{
		iVar0 = 2;
	}
	else if (func_64(16))
	{
		iVar0 = 0;
		bVar1 = true;
	}
	else if (func_64(32))
	{
		iVar0 = 4;
		bVar1 = true;
	}
	else
	{
		iVar0 = 1;
		bVar1 = true;
	}
	func_174(Local_1288.f_9, iVar0, 0, 255, 0);
	func_143(4);
	if (bVar1)
	{
		func_175(Local_1288.f_1, Local_1288.f_2);
		if (!func_64(256))
		{
			if (iVar0 == 1)
			{
				func_176(Local_1288.f_18, 1);
			}
			else
			{
				func_176(Local_1288.f_18, 0);
			}
			func_143(256);
		}
		func_177(Local_1288.f_18);
	}
	else
	{
		func_176(Local_1288.f_18, 2);
	}
}

bool func_64(int iParam0)
{
	return func_178(Local_1288.f_7, iParam0);
}

void func_65(int iParam0)
{
	int iVar0;

	if (!func_179(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_66()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = func_59();
	func_180(Local_1288.f_19.f_159, 0);
	if (func_181(0f, -1, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_1288.f_19.f_143));
	}
	func_183(func_182(), 0, 0);
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		func_170(iVar1);
		iVar2 = func_184(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (bVar0 && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
		{
			if (func_185(iVar1))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar2) && !PED::IS_PED_HOGTIED(iVar2))
				{
					TASK::TASK_SMART_FLEE_PED(iVar2, Global_33, 1000f, -1, 0, 3f, 0);
					PED::SET_PED_KEEP_TASK(iVar2, true);
					PED::SET_PED_CONFIG_FLAG(iVar2, 230, true);
				}
			}
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar2);
		}
		iVar1++;
	}
}

void func_67(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_33(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_68(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_186(uParam0))
	{
		return -1;
	}
	iVar0 = func_187(uParam0, uParam0->f_9);
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
			iVar0 = func_187(uParam0, iVar1);
			if (iVar0 != -1)
			{
				return iVar0;
			}
		}
		iVar1++;
	}
	return -1;
}

struct<15> func_69(int iParam0)
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

void func_70(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 7;
	func_188(bParam0, iParam1);
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

void func_71(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_190(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_190(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_190(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_190(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_190(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_190(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_190(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_190(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_190(bParam0);
			bParam0->f_5 = 1.866136E-26f;
			bParam0->f_11 = { 1154059592, -992580426, 1112778641 };
			break;
	}
}

void func_72(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 8;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			func_191(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 5);
			bParam0->f_5 = 2.464876E+21f;
			bParam0->f_11 = { -992419265, -988502609, 1109731312 };
			break;
	}
}

void func_73(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 2;
	func_189(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = 1.106632E-33f;
			bParam0->f_11 = { -992197716, -1016202310, 1127610456 };
			break;
	}
}

void func_74(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_190(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_190(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_190(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_190(bParam0);
			bParam0->f_5 = 1.014443E-13f;
			bParam0->f_11 = { -979217442, -986431844, 1075102750 };
			break;
	}
}

void func_75(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 16;
	bParam0->f_1 = 2;
	bParam0->f_2 = 8;
	func_192(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_191(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_191(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_191(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_191(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_191(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_191(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_191(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_191(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_191(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_191(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_191(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_191(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_191(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_191(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_191(bParam0, 1);
			bParam0->f_5 = -3.021498E-30f;
			bParam0->f_11 = { -980187462, -984494082 /* Float: -3357f */, 1091166483 };
			break;
	}
}

void func_76(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 12;
	bParam0->f_2 = 3;
	switch (iParam1)
	{
		case 0:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 8);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 7);
			func_191(bParam0, 8);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			func_191(bParam0, 6);
			func_191(bParam0, 7);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			func_191(bParam0, 6);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			func_191(bParam0, 5);
			func_191(bParam0, 9);
			func_191(bParam0, 10);
			func_191(bParam0, 11);
			func_193(bParam0, iParam2);
			bParam0->f_5 = 1.589723E-25f;
			bParam0->f_11 = { -980428461, -987179279, -1054740411 };
			break;
	}
}

void func_77(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 21;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_190(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_190(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_190(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_190(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_190(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_190(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_190(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_190(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_190(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_190(bParam0);
			bParam0->f_5 = 7.540535E-37f;
			bParam0->f_11 = { -977985082, -987389357, -1048217424 };
			break;
	}
}

void func_78(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	func_189(bParam0);
	func_194(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = 1.748911E+21f;
			bParam0->f_11 = { 1155418000, -992449668, 1111562786 };
			break;
	}
}

void func_79(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 4;
	bParam0->f_2 = 5;
	switch (iParam1)
	{
		case 0:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_195(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_195(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_195(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_195(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_195(bParam0, iParam2);
			bParam0->f_5 = -2.926217E-34f;
			bParam0->f_11 = { 1145859682, 1141741071, 1122287761 };
			break;
	}
}

void func_80(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 20;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_190(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_190(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_190(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_190(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_190(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_190(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_190(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_190(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_190(bParam0);
			bParam0->f_5 = 3518021f;
			bParam0->f_11 = { 1160198343, 1127479094, 1113101642 };
			break;
	}
}

void func_81(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 9;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	func_189(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -6.531104E-13f;
			bParam0->f_11 = { 1149047964, -1010487362, 1119149678 };
			break;
	}
}

void func_82(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 1;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	func_189(bParam0);
	func_194(bParam0, 1);
	func_194(bParam0, 4);
	func_194(bParam0, 8);
	func_194(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_196(func_120(iParam2)) };
			break;
	}
}

void func_83(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 5;
	bParam0->f_2 = 6;
	switch (iParam1)
	{
		case 0:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_197(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_197(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_197(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_197(bParam0, iParam2);
			bParam0->f_5 = -2.465434E+17f;
			bParam0->f_11 = { -998315786, -997302732, 1113690370 };
			break;
	}
}

void func_84(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 1;
	*bParam0 = 12;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			Jump @587; //curOff = 233
			func_190(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			Jump @587; //curOff = 272
			func_190(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			Jump @587; //curOff = 311
			func_190(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			Jump @587; //curOff = 350
			func_190(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			Jump @587; //curOff = 389
			func_190(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			Jump @587; //curOff = 428
			func_190(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			Jump @587; //curOff = 467
			func_190(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			Jump @587; //curOff = 506
			func_190(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			Jump @587; //curOff = 545
			func_190(bParam0);
			bParam0->f_5 = 1.03376E-22f;
			bParam0->f_11 = { 1147320836, -998849882, 1113839370 /* Float: 56.96f */ };
		}

void func_85(bool bParam0, int iParam1, int iParam2)
{
	bParam0->f_6 = 1;
	*bParam0 = 15;
	bParam0->f_1 = 2;
	bParam0->f_2 = 4;
	func_198(bParam0, iParam2);
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

void func_86(bool bParam0, int iParam1)
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
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_199(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_199(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_199(bParam0, iParam1);
			bParam0->f_5 = -5.535239E+22f;
			bParam0->f_11 = { 1160413896, -1008062097, 1109596412 };
			break;
	}
}

void func_87(bool bParam0, int iParam1)
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
			func_200(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -2.169674E-36f;
			bParam0->f_11 = { -1002040451, 1143064686, 1118902642 };
			break;
	}
}

void func_88(bool bParam0, int iParam1)
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
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_191(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_191(bParam0, 1);
			bParam0->f_5 = 3.485359E-26f;
			bParam0->f_11 = { 1159063676, 1145135174, 1116079378 };
			break;
	}
}

void func_89(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 3.134018E-27f;
	func_189(bParam0);
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
			func_191(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_191(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_191(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_191(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_191(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_191(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_191(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_191(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_191(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_191(bParam0, 1);
			bParam0->f_5 = -2.34765E-12f;
			bParam0->f_11 = { 1147420824, 1122179167, 1122539930 /* Float: 116.3f */ };
			break;
	}
}

void func_90(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 11;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -3.239727E-28f;
	func_189(bParam0);
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
			func_191(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_191(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_191(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_191(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_191(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_191(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_191(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_191(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_191(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_191(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_191(bParam0, 2);
			bParam0->f_5 = 1.503919E+19f;
			bParam0->f_11 = { 1159894572, -1017870706, 1110384627 };
			break;
	}
}

void func_91(bool bParam0, int iParam1)
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
			func_201(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1772.994f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -995724411, -991128144, 1114745707 };
			break;
	}
}

void func_92(bool bParam0, int iParam1)
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
			func_202(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_202(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -3.673748E-34f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1156223241, -1008548397, 1110250488 };
			break;
	}
}

void func_93(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 6;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = 6.995461E-38f;
	func_189(bParam0);
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
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_191(bParam0, 3);
			func_191(bParam0, 4);
			func_191(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			bParam0->f_5 = 2.032195E-23f;
			bParam0->f_11 = { -994132108, -1000009956, 1118852848 };
			break;
	}
}

void func_94(bool bParam0, int iParam1)
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
			func_203(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 2.138536f;
			bParam0->f_11 = { -995210082, 1159048551, 1134176138 };
			break;
	}
}

void func_95(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	bParam0->f_7 = 2;
	*bParam0 = 10;
	bParam0->f_1 = 4;
	bParam0->f_2 = 1;
	bParam0->f_28[0] = -1.451719E-37f;
	func_189(bParam0);
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
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_191(bParam0, 2);
			func_191(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_191(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_191(bParam0, 1);
			bParam0->f_5 = 5.022592E+20f;
			bParam0->f_11 = { -999960935, 1152995163, 1131748019 };
			break;
	}
}

void func_96(bool bParam0, int iParam1)
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
			func_204(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.126682E-19f;
			bParam0->f_11 = { 1139806290, 1157718932, 1131095196 };
			break;
	}
}

void func_97(bool bParam0, int iParam1, int iParam2)
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
	func_205(bParam0, iParam1, iParam2);
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

void func_98(bool bParam0, int iParam1, int iParam2)
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
	func_206(bParam0, iParam1, iParam2);
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

void func_99(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	bParam0->f_7 = 2;
	bParam0->f_28[0] = -1.997944E+24f;
	func_189(bParam0);
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
			func_191(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_191(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_191(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_191(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_191(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_191(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_191(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_191(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_191(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_191(bParam0, 1);
			break;
	}
}

void func_100(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_190(bParam0);
			bParam0->f_5 = -6.725374E-15f;
			bParam0->f_11 = { -989212607, -993655646, 1125410037 };
			break;
	}
}

void func_101(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 10;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_190(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_190(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_190(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_190(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_190(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_190(bParam0);
			bParam0->f_5 = -1482332f;
			bParam0->f_11 = { 1153213250, -989636818, 1110786284 };
			break;
	}
}

void func_102(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 7;
	bParam0->f_1 = 3;
	bParam0->f_2 = 1;
	func_189(bParam0);
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_190(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_190(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_190(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_191(bParam0, 0);
			func_191(bParam0, 2);
			bParam0->f_5 = 5.81204E-20f;
			bParam0->f_11 = { 1151415856, -993495414, 1115716307 };
			break;
	}
}

void func_103(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 8;
	bParam0->f_1 = 2;
	bParam0->f_2 = 1;
	switch (iParam1)
	{
		case 0:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_207(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_207(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_207(bParam0, iParam1);
			bParam0->f_5 = -3.447738E-37f;
			bParam0->f_11 = { -979094448, -981654036, -1066910142 };
			break;
	}
}

void func_104(bool bParam0, int iParam1, int iParam2)
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
	iVar0 = func_208(iParam1);
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
	*bParam0 = func_209(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_194(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_211(func_210(iVar0), iParam2);
		bParam0->f_15[0] = func_212(func_210(iVar0), iParam2);
		bParam0->f_5 = func_213(iVar0, iParam2);
		bParam0->f_11 = { func_214(iVar0, iParam2) };
	}
}

int func_105(int iParam0)
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

int func_106(int iParam0, var uParam1, int iParam2)
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

struct<2> func_107()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

void func_108()
{
	int iVar0;
	int iVar1;

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(8);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Local_71[iVar1 /*38*/].f_4.f_2[iVar0] = -1f;
			iVar0++;
		}
		iVar1++;
	}
}

void func_109()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	func_215(&(Local_1288.f_304), &(Local_1288.f_304.f_32));
	bVar2 = true;
	if (!func_216(&iVar1))
	{
		bVar2 = false;
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			Local_16.f_36.f_10[iVar0] = 0;
			Local_16.f_36.f_1[iVar0] = 255;
		}
		if (bVar2)
		{
			Local_71[iVar1 /*38*/].f_15.f_14[iVar0] = 0;
		}
		iVar0++;
	}
	func_217(&(Local_1288.f_304.f_93), 8, -1);
	if (bVar2)
	{
		func_217(&(Local_71[iVar1 /*38*/].f_15), 8, -1);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < 32)
		{
			func_217(&(Local_71[iVar3 /*38*/].f_15), 8, -1);
			iVar3++;
		}
	}
}

int func_110(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			switch (func_218())
			{
				case 0:
					return -6.767553E-35f;
				case 1:
					return -7.687338E-14f;
				default:
					break;
			}
			break;
		case 1:
			return 1.5778E-24f;
		case 2:
			return 4.048023E+23f;
		case 3:
			return 4.048023E+23f;
		case 4:
			return 1.5778E-24f;
		case 5:
			return 1.5778E-24f;
		case 6:
			return 1.5778E-24f;
		case 7:
			return 1.5778E-24f;
		default:
			return 0;
	}
	return 0;
}

void func_111(int iParam0, int iParam1)
{
	Local_1288.f_179.f_7[iParam0 /*11*/].f_3 = iParam1;
}

Vector3 func_112(int iParam0)
{
	switch (func_219())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1153654789, -989876273, 1111333837;
				case 1:
					return 1153663049, -989870449, 1111330322;
				case 2:
					return 1153634664, -989887465, 1111324924;
				case 3:
					return 1153676970, -989845796, 1111291577;
				case 4:
					return 1153611904, -989840886, 1111359168;
				case 5:
					return 1153667849, -989908961, 1111359441;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1152142308, -992738225, 1116061520;
				case 1:
					return 1152142001, -992746479, 1116060415;
				case 2:
					return 1152110848, -992746169, 1116064324;
				case 3:
					return 1152174110, -992789040, 1116023340;
				case 4:
					return 1152122584, -992684450, 1116063732;
				case 5:
					return 1152222816, -992743148, 1116002208;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1154124890, -993117074, 1113594213;
				case 1:
					return 1154125750, -993124968, 1113594218;
				case 2:
					return 1154097926, -993119280, 1113594266;
				case 3:
					return 1154130677, -993098877, 1113594229;
				case 4:
					return 1154154941, -993146031, 1113594271;
				case 5:
					return 1154102885, -993052771, 1113594619;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1153178747, -994601150, 1116653141;
				case 1:
					return 1153189489, -994605930, 1116648248;
				case 2:
					return 1153184628, -994632489, 1116660955;
				case 3:
					return 1153157507, -994590358, 1116659167;
				case 4:
					return 1153131647, -994608201, 1116654721;
				case 5:
					return 1153128338, -994548793, 1116676321;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1149706704, -996263620, 1116143020;
				case 1:
					return 1149706553, -996271593, 1116143020;
				case 2:
					return 1149681987, -996267382, 1116143020;
				case 3:
					return 1149709455, -996246889, 1116143020;
				case 4:
					return 1149737814, -996296970, 1116143020;
				case 5:
					return 1149764806, -996211627, 1116143020;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1143624621, -998766718, 1112649425;
				case 1:
					return 1143625317, -998784877, 1112649425;
				case 2:
					return 1143556384, -998779466, 1112649425;
				case 3:
					return 1143649055, -998713237, 1112649425;
				case 4:
					return 1143690837, -998834991, 1112649425;
				case 5:
					return 1143736912, -998659232, 1112649425;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1144060183, -1000535050, 1111559289;
				case 1:
					return 1144077402, -1000534679, 1111559284;
				case 2:
					return 1144076332, -1000593711, 1111598102;
				case 3:
					return 1144011173, -1000511292, 1111559236;
				case 4:
					return 1144154020, -1000464351, 1111559231;
				case 5:
					return 1144056018, -1000365512, 1111559229;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1146876969, -1006232630, 1118835253;
				case 1:
					return 1146899085, -1006229825, 1118835253;
				case 2:
					return 1146895501, -1006296354, 1118835253;
				case 3:
					return 1146828051, -1006196763, 1118835253;
				case 4:
					return 1147007353, -1006200756, 1118835253;
				case 5:
					return 1146758730, -1006101324, 1118835253;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1149035088, -1010441409, 1119151371;
				case 1:
					return 1149017696, -1010461611, 1119150560;
				case 2:
					return 1148976455, -1010290983, 1119180012;
				case 3:
					return 1149088499, -1010445956, 1119150741;
				case 4:
					return 1148967347, -1010692126, 1119165516;
				case 5:
					return 1149182429, -1010568824, 1119166130;
				default:
					break;
			}
			break;
	}
	return vLocal_13;
}

float func_113(int iParam0)
{
	switch (func_219())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1127216579;
				case 1:
					return 1124513874;
				case 2:
					return -1021063332;
				case 3:
					return 1117688955 /* Float: 79.29f */;
				case 4:
					return 1123465298;
				case 5:
					return -1034365174;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return -1022557553;
				case 1:
					return -1022557553;
				case 2:
					return 1115422720 /* Float: 63f */;
				case 3:
					return 1127448576 /* Float: 179.5f */;
				case 4:
					return -1027090678;
				case 5:
					return -1031341343;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -1029832704 /* Float: -79f */;
				case 1:
					return -1023327601;
				case 2:
					return 1114429194 /* Float: 59.21f */;
				case 3:
					return 1100705956 /* Float: 19.43f */;
				case 4:
					return -1047831511;
				case 5:
					return 1125135811;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1123867689;
				case 1:
					return 1127408599;
				case 2:
					return -1055790203 /* Float: -9.12f */;
				case 3:
					return -1035838423;
				case 4:
					return 1112169513 /* Float: 50.59f */;
				case 5:
					return 1124873667;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -1027883663;
				case 1:
					return -1022589665;
				case 2:
					return 1118287954 /* Float: 83.86f */;
				case 3:
					return -1053672079;
				case 4:
					return -1048922030;
				case 5:
					return -1022336041;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1027128689;
				case 1:
					return -1021797335;
				case 2:
					return 1118280090 /* Float: 83.8f */;
				case 3:
					return 1102063862 /* Float: 22.02f */;
				case 4:
					return -1057048494 /* Float: -7.96f */;
				case 5:
					return -1022821663;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -1020160246;
				case 1:
					return 1125213798 /* Float: 145.4f */;
				case 2:
					return -1057132380 /* Float: -7.92f */;
				case 3:
					return -1031451443;
				case 4:
					return -1026768241;
				case 5:
					return 1127279493;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1127134659;
				case 1:
					return 1122982953;
				case 2:
					return -1055119114 /* Float: -9.76f */;
				case 3:
					return -1036116296;
				case 4:
					return -1030135480;
				case 5:
					return 1125060444;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1038140047;
				case 1:
					return -1029461770;
				case 2:
					return 1125100421;
				case 3:
					return 1119824118 /* Float: 95.58f */;
				case 4:
					return 1099258921 /* Float: 16.67f */;
				case 5:
					return -1030395003;
				default:
					break;
			}
			break;
	}
	return 0f;
}

void func_114(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_1288.f_179.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_1288.f_179.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_220(&(Local_1288.f_179.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_221(&(Local_1288.f_179.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_115(int iParam0)
{
	func_222(iParam0, 4);
}

void func_116(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

bool func_117(int iParam0)
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

bool func_118(var uParam0, int iParam1)
{
	return func_223(uParam0->f_25, iParam1);
}

void func_119(int iParam0)
{
	if (Local_16 != iParam0)
	{
		Local_16 = iParam0;
	}
}

int func_120(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

void func_121(int iParam0)
{
	if (!func_129(iParam0))
	{
		func_220(&(Local_16.f_1), iParam0);
	}
}

bool func_122(int iParam0)
{
	if (!func_179(iParam0))
	{
		return false;
	}
	return (func_224(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
}

void func_123(int iParam0)
{
	if (Local_16.f_2 != iParam0)
	{
		Local_16.f_2 = iParam0;
	}
}

bool func_124(struct<31> Param0, var uParam31)
{
	int iVar0;
	var uVar1;

	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_16.f_3.f_1))
	{
		return true;
	}
	if (func_225(Local_1288.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_16.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_1288.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_226(&uVar1, Param0);
		Local_16.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_145(128);
	}
	else if (!func_128(128, 255))
	{
		Local_16.f_3.f_1 = func_227(Param0);
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_16.f_3.f_1))
		{
			return true;
		}
		return false;
	}
	iVar0 = VOLUME::GET_VOLUME_LOCK_REQUEST_STATUS(Local_16.f_3);
	switch (iVar0)
	{
		case 3:
			Local_16.f_3.f_1 = VOLUME::_0x351D71B8B72B858B(Local_16.f_3);
			return true;
		case 4:
			Local_16.f_3 = 0;
			return false;
		default:
			break;
	}
	return false;
}

bool func_125(int iParam0)
{
	return iParam0 != 0;
}

void func_126(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

int func_127(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

bool func_128(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		if (!func_216(&iParam1))
		{
			return false;
		}
	}
	return func_178(Local_71[iParam1 /*38*/], iParam0);
}

bool func_129(int iParam0)
{
	return func_178(Local_16.f_1, iParam0);
}

bool func_130()
{
	return true;
}

void func_131()
{
}

bool func_132()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 1;
	bVar1 = false;
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, func_228());
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, "PB_CUT_FREE_DEAD_F");
	ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, "PB_CUT_FREE_DEAD_L");
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_4[iVar2]))
		{
			if (func_229(iVar2, &bVar1) || bVar1)
			{
				iVar0 = 0;
			}
			else
			{
				iVar2++;
			}
			if (bVar1)
			{
				func_230();
			}
			return iVar0;
		}
	}
}

bool func_133()
{
	bool bVar0;

	if (!func_231(&bVar0))
	{
		if (bVar0)
		{
			func_230();
		}
		return false;
	}
	return true;
}

void func_134()
{
}

void func_135()
{
	if (!func_129(32) && func_232(32))
	{
		func_121(32);
	}
	if (!func_129(64) && func_232(64))
	{
		func_121(64);
	}
	if (!func_129(16) && func_233(16))
	{
		func_121(16);
	}
	if ((!func_129(2048) && func_232(2048)) && !func_232(4096))
	{
		func_121(2048);
	}
}

void func_136()
{
	bool bVar0;

	if (!bVar0 && func_129(16))
	{
		func_123(1);
		return;
	}
	if (func_129(2048) && !func_232(4096))
	{
		func_123(6);
		return;
	}
}

void func_137()
{
}

bool func_138()
{
	if (func_234())
	{
		return true;
	}
	Local_16.f_7.f_12 = func_235(0, 1125515264 /* Float: 150f */, 0, 0);
	func_236();
	func_237();
	func_238();
	func_239();
	if (!func_240(Local_16.f_7.f_6[0]))
	{
	}
	switch (Local_16.f_7)
	{
		case 0:
			func_241();
			break;
		case 1:
			func_242();
			break;
		case 2:
			func_243();
			break;
		case 3:
			func_244();
			break;
		case 4:
			func_245();
			break;
		case 5:
			func_246();
			break;
		case 6:
			func_247();
			break;
		case 7:
			func_248();
			break;
		case 8:
			func_249();
			break;
		case 9:
			func_250();
			break;
		case 10:
			func_251();
			break;
		case 11:
			func_252();
			break;
		case 12:
			func_253();
			break;
	}
	return false;
}

void func_139()
{
}

bool func_140()
{
	return true;
}

void func_141(int iParam0)
{
	if (func_64(iParam0))
	{
		func_221(&(Local_1288.f_7), iParam0);
	}
}

int func_142(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_179(iParam0))
	{
		return 0;
	}
	iVar0 = func_254(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_255(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_256(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_143(int iParam0)
{
	if (!func_64(iParam0))
	{
		func_220(&(Local_1288.f_7), iParam0);
	}
}

void func_144(int iParam0)
{
	if (func_178(Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/], iParam0))
	{
		func_221(&(Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/]), iParam0);
	}
}

void func_145(int iParam0)
{
	if (!func_128(iParam0, 255))
	{
		func_220(&(Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/]), iParam0);
	}
}

void func_146()
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
				func_257(iVar0);
				break;
			case -1315570756:
				func_258(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_259(iVar0);
		iVar0++;
	}
}

void func_147()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		if (Local_1288.f_520 >= 8)
		{
			Local_1288.f_520 = 0;
		}
		func_261(func_260(Local_1288.f_520));
		Local_1288.f_520++;
		iVar0++;
	}
}

void func_148(int iParam0)
{
	if (Local_1288.f_8 != iParam0)
	{
		Local_1288.f_8 = iParam0;
	}
}

bool func_149()
{
	char* sVar0;
	int iVar1;
	char* sVar2;
	int iVar3;

	sVar0 = "NBTIED";
	iVar1 = 1;
	if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar0))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar0);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar0))
		{
			iVar1 = 0;
		}
	}
	sVar2 = "BTUPAUD";
	if (HUD::_DOES_TEXT_BLOCK_EXIST(sVar2))
	{
		HUD::TEXT_BLOCK_REQUEST(sVar2);
		if (!HUD::TEXT_BLOCK_IS_LOADED(sVar2))
		{
			iVar1 = 0;
		}
	}
	iVar3 = 0;
	while (iVar3 <= 0)
	{
		if (!func_263(func_262(iVar3)))
		{
			iVar1 = 0;
		}
		iVar3++;
	}
	switch (Local_1288.f_19)
	{
		case 0:
			if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				return true;
			}
			Local_1288.f_19.f_142 = ANIMSCENE::_CREATE_ANIM_SCENE(func_264(), 0, func_265(), true, true);
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1288.f_19.f_142))
			{
				func_230();
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(Local_1288.f_19.f_142);
				Local_16.f_7.f_14 = NETWORK::_ANIM_SCENE_TO_NET(Local_1288.f_19.f_142);
			}
			func_266(1);
			return false;
		case 1:
			if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_1288.f_19.f_142, true, false))
			{
				return false;
			}
			break;
	}
	return iVar1;
}

bool func_150()
{
	bool bVar0;

	bVar0 = false;
	if (!func_267())
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_151(var uParam0)
{
	*uParam0 = 0;
}

void func_152()
{
}

int func_153()
{
	return 1;
}

int func_154()
{
	return 1;
}

int func_155(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_156()
{
	if (!func_64(1))
	{
		func_268(Local_1288.f_9);
		func_143(1);
	}
}

void func_157()
{
	func_269();
}

void func_158()
{
	func_270();
	func_271();
	func_272();
	func_183(func_182(), 1, 0);
	func_273(func_182());
	func_274(0, 3961451f);
	func_274(1, -5.527518E+34f);
	func_275();
	func_276(0);
}

void func_159()
{
	func_277();
}

void func_160()
{
}

void func_161()
{
	float fVar0;

	if (func_225(Local_1288.f_15))
	{
		return;
	}
	if (func_278())
	{
		return;
	}
	if (func_279(Local_1288.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_1288.f_15);
		if (fVar0 < 1128792064)
		{
			func_145(4096);
		}
		else if (fVar0 < 1137180672)
		{
			func_144(4096);
			func_145(2048);
		}
		else
		{
			func_144(4096);
			func_144(2048);
		}
	}
}

void func_162()
{
	func_280();
	func_281();
	func_282();
	func_283();
}

void func_163()
{
	if (func_284())
	{
		func_145(8);
	}
	else
	{
		func_144(8);
	}
}

void func_164()
{
	int iVar0;
	float fVar1;

	func_285();
	iVar0 = func_287(func_286(), 1);
	fVar1 = func_288(iVar0, func_286(), 1);
	func_289(fVar1);
	func_290();
	func_291();
	func_292();
	func_293(Local_16.f_7);
	func_294(&(Local_1288.f_19.f_1));
	if (!func_181(1048576, -1, 1))
	{
		func_295();
		func_296();
	}
	func_297();
	func_298();
	func_299();
	func_300();
	func_301();
	func_302();
	func_303();
	func_304();
	func_305();
	func_306();
	switch (Local_1288.f_19.f_1)
	{
		case 0:
			func_307();
			break;
		case 1:
			func_308(&fVar1);
			break;
		case 2:
			func_309(&iVar0, &fVar1);
			break;
		case 3:
			func_310(&iVar0);
			break;
		case 4:
			func_311();
			break;
		case 5:
			func_312();
			break;
		case 6:
			func_313(&fVar1);
			break;
		case 7:
			func_314();
			break;
		case 8:
			func_315();
			break;
		case 9:
			func_316();
			break;
		case 10:
			func_317();
			break;
		case 11:
			func_318();
			break;
		case 12:
			func_319();
			break;
	}
}

void func_165()
{
	if (!func_128(8, 255))
	{
		func_145(16);
	}
	else
	{
		func_144(16);
	}
}

void func_166()
{
	int iVar0;

	Local_1288.f_6 = -1;
	Local_1288.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1288.f_5 = (Local_1288.f_5 || Local_71[iVar0 /*38*/]);
			Local_1288.f_6 = (Local_1288.f_6 && Local_71[iVar0 /*38*/]);
		}
		iVar0++;
	}
}

void func_167()
{
	if ((func_64(1024) && !func_128(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_320(&Global_0, 1)))
	{
		func_145(16384);
	}
}

bool func_168()
{
	bool bVar0;
	float fVar1;

	func_285();
	func_297();
	func_298();
	func_299();
	if (func_321(1.504633E-36f))
	{
		bVar0 = true;
	}
	else
	{
		fVar1 = func_288(PLAYER::PLAYER_PED_ID(), func_286(), 1);
		if (fVar1 < 1117782016)
		{
			func_322(1.504633E-36f);
		}
		else
		{
			func_323(1.504633E-36f);
		}
	}
	if (func_324(128) || func_324(8388608))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_324(64))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
			func_322(64);
		}
		return true;
	}
	return false;
}

void func_169()
{
	func_325();
}

void func_170(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_1288.f_179.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_1288.f_179.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_171(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_172(int iParam0, int iParam1)
{
	return func_178(Local_1288.f_179.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_173(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_174(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_327(func_326(Param0));
	iVar1 = func_328(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_329(Param0, &Var2, iParam2);
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

void func_175(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_330(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_331(iVar0);
}

void func_176(int iParam0, int iParam1)
{
	func_126(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_332(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_333(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_334(iParam0);
			break;
	}
}

void func_177(int iParam0)
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
	Var0 = { func_335(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_178(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_179(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

void func_180(int iParam0, int iParam1)
{
	if (func_336(iParam0))
	{
		return;
	}
	if (func_337(iParam0) == iParam1)
	{
		return;
	}
	if (Global_17381 >= 10)
	{
		Global_17381 = 0;
	}
	Global_17360[Global_17381 /*2*/].f_1 = iParam1;
	Global_17360[Global_17381 /*2*/] = iParam0;
	Global_17381++;
}

bool func_181(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return (Local_71[iParam1 /*38*/].f_1 && iParam0) != 0;
}

int func_182()
{
	switch (func_219())
	{
		case 0:
			return -4.834516E+09f;
		case 1:
			return -8.744189E+18f;
		case 2:
			return 7.048311E-08f;
		case 3:
			return 53.74414f;
		case 4:
			return -1.403614E-19f;
		case 5:
			return -4.658007E+27f;
		case 6:
			return 1.004971E-36f;
		case 7:
			return -451640.4f;
		case 8:
			return 49667.83f;
		default:
			break;
	}
	return -1;
}

void func_183(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_338(3.417947E+15f);
			func_339(1.394477E+34f);
			func_339(0.01177266f);
			func_339(-6.601343E+20f);
			break;
		case 2016141805:
			func_339(3.417947E+15f);
			func_338(1.394477E+34f);
			func_339(0.01177266f);
			func_339(-6.601343E+20f);
			break;
		case 1010885152:
			func_339(3.417947E+15f);
			func_339(1.394477E+34f);
			func_338(0.01177266f);
			func_339(-6.601343E+20f);
			break;
		case -502324015:
			func_339(3.417947E+15f);
			func_339(1.394477E+34f);
			func_339(0.01177266f);
			func_338(-6.601343E+20f);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_339(-3.245429E+19f);
			func_339(-3.247475E+19f);
			func_339(-8.187954f);
			func_338(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_340();
			func_338(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_341();
			func_338(iParam0);
			break;
		case 2019386373:
			func_339(-1.021722E+15f);
			func_339(3.245267E+37f);
			func_338(1.796135E+34f);
			break;
		case -664252410:
			func_339(1.796135E+34f);
			func_339(3.245267E+37f);
			func_338(-1.021722E+15f);
			break;
		case 2109952320:
			func_339(1.796135E+34f);
			func_339(-1.021722E+15f);
			func_338(3.245267E+37f);
			break;
		case -1674179981:
			func_339(-9.285142E-28f);
			func_339(-7.477594E-28f);
			func_338(-6.023225E-22f);
			break;
		case -1835851517:
			func_339(-6.023225E-22f);
			func_339(-7.477594E-28f);
			func_338(-9.285142E-28f);
			break;
		case -1838352012:
			func_339(-6.023225E-22f);
			func_339(-9.285142E-28f);
			func_338(-7.477594E-28f);
			break;
		case -1717960576:
			func_339(2.039541E-31f);
			func_338(-1.592343E-23f);
			break;
		case 210001842:
			func_339(-1.592343E-23f);
			func_338(2.039541E-31f);
			break;
		case -150493654:
			func_339(-1.68381E-07f);
			func_339(1.057402E+28f);
			func_339(-0.005638561f);
			func_338(-2.75129E+33f);
			break;
		case -1271608261:
			func_339(-2.75129E+33f);
			func_339(1.057402E+28f);
			func_339(-0.005638561f);
			func_338(-1.68381E-07f);
			break;
		case 1846061697:
			func_339(-2.75129E+33f);
			func_339(-1.68381E-07f);
			func_339(-0.005638561f);
			func_338(1.057402E+28f);
			break;
		case -1145519186:
			func_339(-2.75129E+33f);
			func_339(-1.68381E-07f);
			func_339(1.057402E+28f);
			func_338(-0.005638561f);
			break;
		case 1766284049:
			func_339(7.384705E-29f);
			func_339(8.284682E+30f);
			func_338(1.506289E+25f);
			break;
		case 280705402:
			func_339(1.506289E+25f);
			func_339(8.284682E+30f);
			func_338(7.384705E-29f);
			break;
		case 1926308480:
			func_339(1.506289E+25f);
			func_339(7.384705E-29f);
			func_338(8.284682E+30f);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_339(3.67491E-23f);
				func_338(3.446141E+19f);
			}
			else
			{
				func_339(3.446141E+19f);
				func_339(3.67491E-23f);
			}
			break;
		case 439465264:
			if (func_342(3.446141E+19f))
			{
				if (bParam1)
				{
					func_338(3.67491E-23f);
				}
				else
				{
					func_339(3.67491E-23f);
				}
			}
			break;
		case 1822001510:
			func_339(-9.517253E-20f);
			func_338(1.484916E+27f);
			break;
		case -1612662716:
			func_339(1.484916E+27f);
			func_338(-9.517253E-20f);
			break;
		case 1306158345:
			func_339(7.177147E+31f);
			func_339(-6.897735E+30f);
			func_339(-2.123113E+24f);
			func_339(1.754884E+16f);
			func_338(4.580068E+08f);
			break;
		case 1952610440:
			func_339(4.580068E+08f);
			func_339(-6.897735E+30f);
			func_339(-2.123113E+24f);
			func_339(1.754884E+16f);
			func_338(7.177147E+31f);
			break;
		case -223469678:
			func_339(4.580068E+08f);
			func_339(7.177147E+31f);
			func_339(-2.123113E+24f);
			func_339(1.754884E+16f);
			func_338(-6.897735E+30f);
			break;
		case -404698347:
			func_339(4.580068E+08f);
			func_339(7.177147E+31f);
			func_339(-6.897735E+30f);
			func_339(1.754884E+16f);
			func_338(-2.123113E+24f);
			break;
		case 1517904467:
			func_339(4.580068E+08f);
			func_339(7.177147E+31f);
			func_339(-6.897735E+30f);
			func_339(-2.123113E+24f);
			func_338(1.754884E+16f);
			break;
		case 1376646519:
			func_339(1.619427E-05f);
			func_339(-1.802547E+23f);
			func_339(2.161028E+24f);
			func_339(8.562073E-23f);
			func_338(1.524272E+11f);
			break;
		case 931649776:
			func_339(1.524272E+11f);
			func_339(-1.802547E+23f);
			func_339(2.161028E+24f);
			func_339(8.562073E-23f);
			func_338(1.619427E-05f);
			break;
		case -434590080:
			func_339(1.524272E+11f);
			func_339(1.619427E-05f);
			func_339(2.161028E+24f);
			func_339(8.562073E-23f);
			func_338(-1.802547E+23f);
			break;
		case 1743048395:
			func_339(1.524272E+11f);
			func_339(1.619427E-05f);
			func_339(-1.802547E+23f);
			func_339(8.562073E-23f);
			func_338(2.161028E+24f);
			break;
		case 449774763:
			func_339(1.524272E+11f);
			func_339(1.619427E-05f);
			func_339(-1.802547E+23f);
			func_339(2.161028E+24f);
			func_338(8.562073E-23f);
			break;
		case -1414537028:
			func_339(1.456986E-37f);
			func_339(1.700162E+10f);
			func_339(5.439653E-37f);
			func_338(-1.249687E-12f);
			break;
		case 38162571:
			func_339(-1.249687E-12f);
			func_339(1.700162E+10f);
			func_339(5.439653E-37f);
			func_338(1.456986E-37f);
			break;
		case 1350391819:
			func_339(-1.249687E-12f);
			func_339(1.456986E-37f);
			func_339(5.439653E-37f);
			func_338(1.700162E+10f);
			break;
		case 54073871:
			func_339(-1.249687E-12f);
			func_339(1.456986E-37f);
			func_339(1.700162E+10f);
			func_338(5.439653E-37f);
			break;
		case 198200492:
			func_338(8.023405E-32f);
			func_339(-0.03129486f);
			func_339(4.826337E-37f);
			func_339(-3.517893E+29f);
			break;
		case -1124061431:
			func_339(8.023405E-32f);
			func_338(-0.03129486f);
			func_339(4.826337E-37f);
			func_339(-3.517893E+29f);
			break;
		case 52706132:
			func_339(8.023405E-32f);
			func_339(-0.03129486f);
			func_338(4.826337E-37f);
			func_339(-3.517893E+29f);
			break;
		case -259123672:
			func_339(8.023405E-32f);
			func_339(-0.03129486f);
			func_339(4.826337E-37f);
			func_338(-3.517893E+29f);
			break;
		case -919512195:
			func_338(-726455.8f);
			func_339(-5.628425E-31f);
			func_339(7.6268E-24f);
			func_339(8.041465E+22f);
			break;
		case -1925798111:
			func_338(-5.628425E-31f);
			func_339(-726455.8f);
			func_339(7.6268E-24f);
			func_339(8.041465E+22f);
			break;
		case 420709909:
			func_338(7.6268E-24f);
			func_339(-726455.8f);
			func_339(-5.628425E-31f);
			func_339(8.041465E+22f);
			break;
		case 1703426636:
			func_338(8.041465E+22f);
			func_339(-726455.8f);
			func_339(-5.628425E-31f);
			func_339(7.6268E-24f);
			break;
		case -1223121209:
			func_338(-9.098737E-06f);
			func_339(2.660481E-16f);
			break;
		case 630808005:
			func_338(2.660481E-16f);
			func_339(-9.098737E-06f);
			break;
		case 1453909576:
			func_338(9.28535E+13f);
			func_339(5.679467E+20f);
			break;
		case 1643531967:
			func_338(5.679467E+20f);
			func_339(9.28535E+13f);
			break;
		case 0:
			func_338(0);
			func_339(6.018873E-22f);
			func_339(-2.968788E-24f);
			break;
		case 473295046:
			func_338(6.018873E-22f);
			func_339(0);
			func_339(-2.968788E-24f);
			break;
		case -1738165526:
			func_338(-2.968788E-24f);
			func_339(0);
			func_339(6.018873E-22f);
			break;
		case 932909855:
			func_338(1.848634E-05f);
			func_339(2.652232E+35f);
			break;
		case 2051822093:
			func_338(2.652232E+35f);
			func_339(1.848634E-05f);
			break;
		case 405586984:
			func_338(2.232951E-24f);
			func_339(8.771058E+15f);
			func_339(-26799.71f);
			func_339(-6.010485E-09f);
			break;
		case 1509509592:
			func_338(8.771058E+15f);
			func_339(2.232951E-24f);
			func_339(-26799.71f);
			func_339(-6.010485E-09f);
			break;
		case -959357075:
			func_338(-26799.71f);
			func_339(8.771058E+15f);
			func_339(2.232951E-24f);
			func_339(-6.010485E-09f);
			break;
		case -1311865656:
			func_338(-6.010485E-09f);
			func_339(8.771058E+15f);
			func_339(-26799.71f);
			func_339(2.232951E-24f);
			break;
		case -524145696:
			if (bParam1)
			{
				func_338(-1.119322E+20f);
			}
			else
			{
				func_339(-1.119322E+20f);
			}
			func_339(1.39581E+20f);
			func_339(8.651038E-29f);
			break;
		case 282809459:
			func_338(8.651038E-29f);
			func_339(1.39581E+20f);
			func_339(-1.119322E+20f);
			break;
		case 1626481264:
			func_338(1.39581E+20f);
			func_339(-1.119322E+20f);
			func_339(8.651038E-29f);
			break;
		case 885203519:
			if (bParam1)
			{
				func_338(3.63465E-07f);
			}
			else
			{
				func_339(3.63465E-07f);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_338(-1.179158f);
			}
			else
			{
				func_339(-1.179158f);
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_338(-3.218709E+20f);
			}
			else
			{
				func_339(-3.218709E+20f);
				func_343(4.120249E-25f);
				func_343(-5.419063E-05f);
			}
			break;
		default:
			if (bParam1)
			{
				func_338(iParam0);
			}
			else
			{
				func_339(iParam0);
			}
			break;
	}
}

int func_184(int iParam0)
{
	if (!func_344(iParam0))
	{
		return 0;
	}
	return func_345(iParam0);
}

bool func_185(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 7)
	{
		return true;
	}
	return false;
}

bool func_186(var uParam0)
{
	if (func_38(*uParam0))
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

int func_187(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_346(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_347(iParam1)) - 1);
	}
	bVar2 = func_38(*uParam0);
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

void func_188(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_348(bParam0);
			break;
		case 1:
			func_348(bParam0);
			break;
		case 2:
			func_348(bParam0);
			break;
		case 3:
			func_349(bParam0);
			break;
		case 4:
			func_348(bParam0);
			break;
		case 5:
			func_348(bParam0);
			break;
		case 6:
			func_349(bParam0);
			break;
		case 7:
			func_349(bParam0);
			break;
		case 8:
			func_349(bParam0);
			break;
		case 9:
			func_348(bParam0);
			break;
		default:
			func_190(bParam0);
			func_189(bParam0);
			break;
	}
}

void func_189(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_350(bParam0, iVar0);
		iVar0++;
	}
}

void func_190(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_191(bParam0, iVar0);
		iVar0++;
	}
}

void func_191(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_192(bool bParam0, int iParam1)
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
			func_351(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_352(bParam0);
			break;
		default:
			func_190(bParam0);
			func_189(bParam0);
			break;
	}
}

void func_193(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_350(bParam0, 0);
			break;
		case 1:
		case 2:
			func_350(bParam0, 1);
			func_350(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_350(bParam0, 0);
			func_350(bParam0, 2);
			break;
		case 8:
			func_350(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_350(bParam0, 1);
			break;
		default:
			func_189(bParam0);
			break;
	}
}

void func_194(bool bParam0, int iParam1)
{
	func_255(&(bParam0->f_25), iParam1);
}

void func_195(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_353(bParam0);
			break;
		case 1:
			func_354(bParam0);
			break;
		case 2:
			func_355(bParam0);
			break;
		case 3:
			func_356(bParam0);
			break;
		default:
			func_190(bParam0);
			func_189(bParam0);
			break;
	}
}

Vector3 func_196(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_197(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_357(bParam0);
			break;
		case 1:
		case 2:
			func_358(bParam0);
			break;
		case 3:
		case 4:
			func_359(bParam0);
			break;
		default:
			func_189(bParam0);
			break;
	}
	func_190(bParam0);
}

void func_198(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_350(bParam0, 0);
			func_350(bParam0, 2);
			break;
		case 1:
			func_350(bParam0, 1);
			func_350(bParam0, 3);
			break;
		default:
			func_190(bParam0);
			func_189(bParam0);
			break;
	}
}

void func_199(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_191(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_191(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_191(bParam0, 0);
			break;
		default:
			func_191(bParam0, 0);
			break;
	}
	func_189(bParam0);
}

void func_200(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_191(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_191(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_191(bParam0, 2);
			break;
		default:
			func_190(bParam0);
			break;
	}
	func_189(bParam0);
}

void func_201(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_191(bParam0, 0);
			func_350(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_191(bParam0, 1);
			func_350(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_191(bParam0, 2);
			func_350(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_191(bParam0, 3);
			func_350(bParam0, 0);
			break;
	}
}

void func_202(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_191(bParam0, 0);
			func_350(bParam0, 0);
			break;
		case 2:
			func_191(bParam0, 1);
			func_350(bParam0, 0);
			break;
		case 3:
		case 4:
			func_191(bParam0, 2);
			func_350(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_191(bParam0, 3);
			func_350(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_191(bParam0, 4);
			func_350(bParam0, 1);
			break;
	}
}

void func_203(bool bParam0, int iParam1)
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
			func_191(bParam0, 3);
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
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			break;
		default:
			func_190(bParam0);
			break;
	}
	func_189(bParam0);
}

void func_204(bool bParam0, int iParam1)
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
			func_191(bParam0, 3);
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
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			break;
		default:
			func_190(bParam0);
			break;
	}
	func_189(bParam0);
}

void func_205(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_350(bParam0, 0);
			func_191(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_350(bParam0, 1);
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			func_191(bParam0, 2);
			break;
		default:
			func_350(bParam0, 0);
			func_191(bParam0, 0);
			break;
	}
}

void func_206(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_350(bParam0, 0);
			func_191(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_350(bParam0, 1);
			func_191(bParam0, 0);
			func_191(bParam0, 1);
			break;
		default:
			func_350(bParam0, 0);
			func_191(bParam0, 0);
			break;
	}
}

void func_207(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_189(bParam0);
			func_190(bParam0);
			break;
		default:
			func_189(bParam0);
			func_190(bParam0);
			break;
	}
}

int func_208(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_209(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_211(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_360(&Var1, iParam0) && func_361(&Var1, iParam1))
	{
		func_362(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_212(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_360(&Var1, iParam0) && func_361(&Var1, iParam1))
	{
		func_362(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_363(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_214(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_363(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

void func_215(var uParam0, var uParam1)
{
	func_364(uParam0);
	func_365(uParam0, 1);
	func_366(uParam0, 1);
	func_367(uParam1);
	func_368(uParam1);
	func_369(uParam1);
	func_370(uParam1, 1);
	func_371(uParam1, 1);
}

bool func_216(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_372(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

int func_217(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;
	int iVar5;

	if (!func_373(iParam1, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_374(Var0.f_2, 10);
		iVar5 = iVar4 ^ -1;
		(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
		if (iParam2 != 0)
		{
			(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
		}
		return 1;
	}
	iVar4 = func_374(Var0.f_2, (32 - Var0.f_2));
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0] = ((*uParam0)[Var0] && iVar5);
	(*uParam0)[Var0] = ((*uParam0)[Var0] || (BUILTIN::SHIFT_LEFT(iParam2, Var0.f_2) && iVar4));
	iVar4 = func_374(0, Var0.f_3 + 1);
	iVar5 = iVar4 ^ -1;
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] && iVar5);
	(*uParam0)[Var0.f_1] = ((*uParam0)[Var0.f_1] || (BUILTIN::SHIFT_RIGHT(iParam2, (32 - Var0.f_3)) && iVar4));
	return 1;
}

int func_218()
{
	return func_375();
}

int func_219()
{
	return func_376();
}

void func_220(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_221(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_222(int iParam0, int iParam1)
{
	func_220(&(Local_1288.f_179.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_223(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_224(int iParam0)
{
	int iVar0;

	if (!func_179(iParam0))
	{
		return false;
	}
	iVar0 = func_377(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_225(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_226(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_227(struct<31> Param0)
{
	var uVar0;

	func_226(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

char* func_228()
{
	return "PB_DEAD";
	return "";
}

int func_229(int iParam0, int iParam1)
{
	if (!NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
	{
		*iParam1 = 1;
		return 0;
	}
	if (!func_379(&(Local_16.f_7.f_4[iParam0]), func_262(iParam0), func_378(iParam0), 1, 0))
	{
		*iParam1 = 1;
		return 0;
	}
	return 1;
}

void func_230()
{
	func_123(2);
}

bool func_231(var uParam0)
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
	while (iVar2 < 8)
	{
		if (func_172(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_380(iVar2, uParam0, &bVar1))
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
			if (func_381(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_27[iVar2]);
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

bool func_232(int iParam0)
{
	return func_178(Local_1288.f_5, iParam0);
}

bool func_233(int iParam0)
{
	return func_178(Local_1288.f_6, iParam0);
}

bool func_234()
{
	int iVar0;

	if (Local_16.f_7 == 13)
	{
		func_382(0);
		return true;
	}
	iVar0 = func_184(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_382(2);
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && func_181(2048, -1, 1))
	{
		func_382(1);
		return true;
	}
	return false;
}

int func_235(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam3 || func_383(iVar0))
			{
				if (!bParam2 || func_384(iVar0))
				{
					if (func_385(iParam0, fParam1, iVar0, 0))
					{
						iVar1++;
					}
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_236()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_324(2048))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1288.f_179.f_7)
	{
		if (!func_185(iVar0))
		{
		}
		else
		{
			iVar1 = func_184(iVar0);
			if (!ENTITY::IS_ENTITY_DEAD(iVar1) && !PED::IS_PED_HOGTIED(iVar1))
			{
				return;
			}
		}
		iVar0++;
	}
	func_323(2048);
	iVar2 = 0;
	while (iVar2 < Local_1288.f_179.f_7)
	{
		if (!func_386(iVar2))
		{
		}
		else
		{
			iVar3 = func_184(iVar2);
			if (ENTITY::IS_ENTITY_DEAD(iVar3) || !PED::IS_PED_HOGTIED(iVar3))
			{
			}
		}
		iVar2++;
	}
}

void func_237()
{
	if (Local_16.f_7 >= 4)
	{
		return;
	}
	if (!func_387())
	{
		return;
	}
	func_388(4);
}

void func_238()
{
	if (!func_389(64))
	{
		return;
	}
	if (func_324(4194304))
	{
		return;
	}
	func_390(64);
}

void func_239()
{
	int iVar0;

	if (!func_321(2048))
	{
		return;
	}
	if (func_389(256))
	{
		return;
	}
	if (!func_389(2))
	{
		func_391(&(Local_16.f_7.f_6[2]));
		func_390(2);
		return;
	}
	if (!func_240(Local_16.f_7.f_6[2]))
	{
		func_391(&(Local_16.f_7.f_6[2]));
		func_392(2);
	}
	iVar0 = func_393(Local_16.f_7.f_6[2]);
	if (iVar0 > 4000)
	{
		func_394(&(Local_16.f_7.f_6[2]));
		func_390(256);
	}
}

bool func_240(int iParam0)
{
	return iParam0 != 0;
}

void func_241()
{
	if (!func_321(1))
	{
		return;
	}
	func_388(1);
}

void func_242()
{
	if (!func_321(2))
	{
		return;
	}
	func_388(2);
}

void func_243()
{
	if (!func_321(8))
	{
		return;
	}
	func_388(3);
}

void func_244()
{
	if (!func_321(32))
	{
		return;
	}
	func_395(0);
}

void func_245()
{
	if (!func_321(1024))
	{
		return;
	}
	func_391(&(Local_16.f_7.f_6[1]));
	func_388(5);
}

void func_246()
{
	if (!func_321(16384))
	{
		return;
	}
	func_396(2);
	func_388(6);
}

void func_247()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_397();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
	{
		return;
	}
	iVar2 = iVar1;
	switch (Local_71[iVar2 /*38*/].f_1.f_2)
	{
		case 1:
			break;
		case 2:
			func_388(7);
			func_396(1);
			return;
	}
}

void func_248()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!func_389(32))
	{
		Local_16.f_7.f_17 = func_397();
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_7.f_17))
		{
			return;
		}
		iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
		iVar1 = func_184(0);
		WEAPON::_0x4820A6939D7CEF28(iVar0, 0);
		WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
		iVar2 = func_398(iVar1, iVar0, 0.707f);
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			bVar3 = true;
			func_390(128);
		}
		switch (iVar2)
		{
			case 0:
			case 1:
			case 2:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
			case 3:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 4;
					}
					else
					{
						Local_16.f_7.f_15 = 5;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 6;
				}
				break;
			default:
				if (!bVar3)
				{
					if (PED::IS_PED_MALE(iVar0))
					{
						Local_16.f_7.f_15 = 1;
					}
					else
					{
						Local_16.f_7.f_15 = 2;
					}
				}
				else
				{
					Local_16.f_7.f_15 = 3;
				}
				break;
		}
		func_390(32);
		return;
	}
	if (!func_321(32768))
	{
		return;
	}
	func_388(8);
}

void func_249()
{
	if (!func_321(65536))
	{
		return;
	}
	func_388(9);
}

void func_250()
{
	if (!func_321(131072))
	{
		return;
	}
	func_388(10);
}

void func_251()
{
	if (!func_321(262144))
	{
		return;
	}
	func_388(11);
}

void func_252()
{
	if (!func_321(524288))
	{
		return;
	}
	func_391(&(Local_16.f_7.f_6[4]));
	func_388(12);
}

void func_253()
{
	if (!func_321(1048576))
	{
		return;
	}
	if (!func_324(128))
	{
		return;
	}
	func_388(13);
}

int func_254(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0;
	}
	if (!func_224(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_255(var uParam0, int iParam1)
{
	func_399(uParam0, iParam1);
}

void func_256(var uParam0, int iParam1)
{
	func_400(uParam0, iParam1);
}

void func_257(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_401(&Var0, iParam0))
			{
				func_402(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_258(int iParam0)
{
}

void func_259(int iParam0)
{
}

int func_260(int iParam0)
{
	return iParam0;
}

void func_261(int iParam0)
{
	int iVar0;

	if (func_403(iParam0))
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (func_404(iParam0, func_260(iVar0)))
			{
				if (!func_405(iParam0, func_260(iVar0)))
				{
					if (func_406(iParam0, iVar0))
					{
						func_407(Local_1288.f_520.f_19[iVar0], 0, 0);
						func_408(iParam0, func_260(iVar0));
					}
				}
			}
			iVar0++;
		}
	}
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8.383095E+34f;
		default:
			break;
	}
	return 0;
}

bool func_263(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

char* func_264()
{
	return "script@beat@wilderness@tied_up_ped@Help";
	return "";
}

char* func_265()
{
	return "PB_HELP";
	return "";
}

void func_266(int iParam0)
{
	if (Local_1288.f_19 == iParam0)
	{
		return;
	}
	Local_1288.f_19 = iParam0;
}

bool func_267()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Local_1288.f_179.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_409(iVar0);
			if (iVar2 == 0)
			{
				Jump @129; //curOff = 54
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_1288.f_179.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_1288.f_179.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @129; //curOff = 110
				}
				else
				{
					MISC::SET_BIT(&(Local_1288.f_179.f_3), iVar0);
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

void func_268(struct<2> Param0)
{
	if (func_328(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_328(Param0)))
	{
		STATS::_0x99230691875FC218(func_326(Param0), func_328(Param0), Global_34);
	}
}

void func_269()
{
	int iVar0;
	int iVar1;

	if (!func_216(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_410(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_270()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		iVar1 = func_184(iVar0);
		if (func_411(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 178, false);
					PED::SET_PED_CONFIG_FLAG(iVar1, 317, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 277, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 6, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 494, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 148, true);
					PED::SET_PED_CONFIG_FLAG(iVar1, 26, true);
					PED::SET_PED_LASSO_HOGTIE_FLAG(iVar1, 0, false);
					WEAPON::REMOVE_ALL_PED_WEAPONS(iVar1, true, true);
					break;
				case 1:
					func_412(1, -1.91869E+32f);
					break;
				case 2:
					func_412(2, -1.91869E+32f);
					break;
				case 3:
					func_412(3, 2.574461E-25f);
					break;
				case 4:
					func_412(4, 2.574461E-25f);
					break;
				case 5:
					func_412(5, -1.91869E+32f);
					break;
			}
		}
		iVar0++;
	}
}

void func_271()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_4[iVar0]))
		{
		}
		else
		{
			Local_1288.f_19.f_5[iVar0 /*2*/].f_1 = NETWORK::NET_TO_OBJ(Local_16.f_7.f_4[iVar0]);
			iVar1 = func_413(iVar0);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
			}
			else
			{
				switch (iVar0)
				{
					case 0:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_272()
{
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_7.f_14))
		{
			Local_1288.f_19.f_142 = NETWORK::_NET_TO_ANIM_SCENE(Local_16.f_7.f_14);
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1288.f_19.f_142))
			{
			}
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Local_16.f_7.f_14))
	{
		func_414();
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_1288.f_19.f_142, func_415(), 0f, 0f, func_416(), 2);
		ANIMSCENE::START_ANIM_SCENE(Local_1288.f_19.f_142);
	}
}

void func_273(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			if (!func_41())
			{
				if (func_342(-3.242665E-35f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(-3.336093E-38f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(-3.336093E-38f, 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-3.336093E-38f, 1f, false);
				}
				else if (func_342(-0.005809053f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(-3.336093E-38f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-3.336093E-38f, 0f, true);
					OBJECT::_0x7F458B543006C8FE(-3.336093E-38f, 16);
				}
				else
				{
					func_343(-3.336093E-38f);
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			if (!func_41())
			{
				if (func_342(8.740328E-18f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(-314922.1f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(-314922.1f, 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-314922.1f, 1f, false);
				}
				else if (func_342(3.991759E-22f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(-314922.1f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-314922.1f, 0f, true);
					OBJECT::_0x7F458B543006C8FE(-314922.1f, 16);
				}
				else
				{
					func_343(-314922.1f);
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			if (!func_41())
			{
				if (func_342(-1.481287E+16f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(130637.8f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(130637.8f, 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(130637.8f, 1f, false);
				}
				else if (func_342(0.0002667577f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(130637.8f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(130637.8f, 0f, true);
					OBJECT::_0x7F458B543006C8FE(130637.8f, 16);
				}
				else
				{
					func_343(130637.8f);
				}
			}
			break;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			if (!func_41())
			{
				if (func_342(-2.006529E+31f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(5.497657E-32f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(5.497657E-32f, 2f);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(5.497657E-32f, 1f, false);
				}
				else if (func_342(-6.533963E+28f))
				{
					func_417(-3.336093E-38f, 1, 0);
					func_418(5.497657E-32f, 1, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(5.497657E-32f, 0f, true);
					OBJECT::_0x7F458B543006C8FE(5.497657E-32f, 16);
				}
				else
				{
					func_343(5.497657E-32f);
				}
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (!func_41())
			{
				if (func_342(-3.218709E+20f))
				{
					func_418(4.120249E-25f, 0, 0);
					func_418(-5.419063E-05f, 0, 0);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(4.120249E-25f, 1f, true);
					OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(-5.419063E-05f, -1f, true);
				}
				else if (func_342(-8.470243E-19f))
				{
					func_418(4.120249E-25f, 0, 0);
					func_418(-5.419063E-05f, 0, 0);
				}
				else
				{
					func_418(4.120249E-25f, 1, 0);
					func_418(-5.419063E-05f, 1, 0);
				}
			}
			break;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			if (func_342(1668753f))
			{
				func_419(-9.740245E+23f);
				func_419(7.668556E+12f);
				func_420("nav_lakay_mp");
				func_421("MS_HIDOUT_LAKAY");
				func_422(-9.740245E+23f);
			}
			else
			{
				func_423(-9.740245E+23f);
				func_419(7.668556E+12f);
				func_420("MS_HIDOUT_LAKAY");
				func_421("nav_lakay_mp");
				func_424(-9.740245E+23f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			if (func_342(3.322521E+08f))
			{
				func_419(-8.445406E-27f);
				func_421("MS_HIDOUT_BEAVERHOLLOW");
				func_422(-8.445406E-27f);
			}
			else
			{
				func_423(-8.445406E-27f);
				func_420("MS_HIDOUT_BEAVERHOLLOW");
				func_424(-8.445406E-27f);
			}
			break;
		case -460024530:
			if (func_342(-2.192694E+22f))
			{
				func_419(9.917841f);
				func_421("MS_HIDOUT_MILLESANICLAIM");
			}
			else
			{
				func_423(9.917841f);
				func_420("MS_HIDOUT_MILLESANICLAIM");
			}
			break;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			if (func_342(-8.576926E+34f))
			{
				func_419(-1.79919E-35f);
				func_421("MS_HIDOUT_FARMHOUSE");
				func_422(-1.79919E-35f);
			}
			else
			{
				func_423(-1.79919E-35f);
				func_420("MS_HIDOUT_FARMHOUSE");
				func_424(-1.79919E-35f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			if (func_342(-5.676958E-10f))
			{
				func_419(-7.373508E+16f);
				func_421("MS_HIDOUT_ROCKYSEVEN");
				func_422(-7.373508E+16f);
				if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1939583.f_21))
				{
					Global_1939583.f_21 = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(2986.267f, 2204.891f, 165.9559f, 2.793124f, 2.804754f, 2.088651f, 120f, false, 7);
				}
			}
			else
			{
				func_423(-7.373508E+16f);
				func_420("MS_HIDOUT_ROCKYSEVEN");
				func_424(-7.373508E+16f);
				if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Global_1939583.f_21))
				{
					PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(&(Global_1939583.f_21));
				}
			}
			break;
		case 1698972798:
			if (func_342(5.792796E+22f))
			{
				func_419(-1.994217E-12f);
				func_421("MS_HIDOUT_MOSSYFLATS");
				func_422(-1.994217E-12f);
			}
			else
			{
				func_423(-1.994217E-12f);
				func_420("MS_HIDOUT_MOSSYFLATS");
				func_424(-1.994217E-12f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			if (func_342(-2.098746E-08f))
			{
				func_419(-9.810364E-33f);
				func_421("MS_HIDOUT_QUAKERSCOVE");
				func_422(5.463662E+11f);
			}
			else
			{
				func_423(-9.810364E-33f);
				func_420("MS_HIDOUT_QUAKERSCOVE");
				func_424(5.463662E+11f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			if (func_342(-6.14167E-08f))
			{
				func_419(6639.993f);
				func_421("MS_HIDOUT_THELOFT");
				func_422(-5.507462E-18f);
			}
			else
			{
				func_423(6639.993f);
				func_420("MS_HIDOUT_THELOFT");
				func_424(-5.507462E-18f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			if (func_342(-1.061366E-19f))
			{
				func_419(2.452691E-24f);
				func_421("MS_HIDOUT_CUMBERLANDFALLS");
				func_422(1.783202E+16f);
			}
			else
			{
				func_423(2.452691E-24f);
				func_420("MS_HIDOUT_CUMBERLANDFALLS");
				func_424(1.783202E+16f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			if (func_342(1.698467E+09f))
			{
				func_419(-0.003270739f);
				func_421("MS_HIDOUT_STILLWATERSTRANDS");
				func_422(-1.430711E+17f);
			}
			else
			{
				func_423(-0.003270739f);
				func_420("MS_HIDOUT_STILLWATERSTRANDS");
				func_424(-1.430711E+17f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			if (func_342(-4.464018E+36f))
			{
				func_419(4.946341E+32f);
				func_421("MS_HIDOUT_COLTER");
			}
			else
			{
				func_423(4.946341E+32f);
				func_420("MS_HIDOUT_COLTER");
			}
			break;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			if (func_342(4.944663E-18f))
			{
				func_419(1.102706E-20f);
				func_421("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			else
			{
				func_423(1.102706E-20f);
				func_420("MS_HIDOUT_ABANDONED_MINING_STATION");
			}
			break;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			if (func_342(1.351745E+31f))
			{
				func_419(-2.478842E+08f);
				func_421("MS_HIDOUT_CLEMENSCOVE");
			}
			else
			{
				if (STREAMING::IS_IPL_ACTIVE_HASH(-2.478842E+08f))
				{
					func_425(1145422656, -996439210, 1109810060, 1103626240 /* Float: 25f */, 0, 0, 0, 0, 0);
				}
				func_423(-2.478842E+08f);
				func_420("MS_HIDOUT_CLEMENSCOVE");
			}
			break;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			if (func_342(2498.163f))
			{
				func_419(3.895931E-09f);
				func_421("MS_HIDOUT_TALLTREES");
				func_422(3.895931E-09f);
			}
			else
			{
				func_423(3.895931E-09f);
				func_420("MS_HIDOUT_TALLTREES");
				func_424(3.895931E-09f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			if (func_342(8.748928E-11f))
			{
				func_419(-1.240567E+20f);
				func_421("MS_HIDOUT_SHIPROCK");
				func_422(0.550886f);
			}
			else
			{
				func_423(-1.240567E+20f);
				func_420("MS_HIDOUT_SHIPROCK");
				func_424(0.550886f);
			}
			break;
		case 1881028477:
			if (func_342(1.958629E+29f))
			{
				func_419(-2.357562E-37f);
				func_421("MS_HIDOUT_CAMP_BACCHUS");
			}
			else
			{
				func_423(-2.357562E-37f);
				func_420("MS_HIDOUT_CAMP_BACCHUS");
			}
			break;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			if (func_342(8.016178E+22f))
			{
				func_419(2.960372E-11f);
				func_421("MS_HIDOUT_SOLOMONSFOLLY");
				func_422(8.960872E+37f);
			}
			else
			{
				func_423(2.960372E-11f);
				func_420("MS_HIDOUT_SOLOMONSFOLLY");
				func_424(8.960872E+37f);
			}
			break;
		case -1209597203:
			if (func_342(-2.753871E-05f))
			{
				func_419(8.538889E-07f);
				func_421("MS_HIDOUT_TWINROCKS");
				func_422(1.122413E-22f);
			}
			else
			{
				func_423(8.538889E-07f);
				func_420("MS_HIDOUT_TWINROCKS");
				func_424(1.122413E-22f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			if (func_342(-4152059f))
			{
				func_419(7618003f);
				func_421("MS_HIDOUT_CUERASECO");
				func_422(1.172873E-16f);
			}
			else
			{
				func_423(7618003f);
				func_420("MS_HIDOUT_CUERASECO");
				func_424(1.172873E-16f);
			}
			break;
		case 929582877:
			if (func_342(1.38467E-05f))
			{
				func_419(-2.649738E-31f);
				func_421("MS_HIDOUT_MANTECAFALLS");
				func_422(-2.649738E-31f);
			}
			else
			{
				func_423(-2.649738E-31f);
				func_420("MS_HIDOUT_MANTECAFALLS");
				func_424(-2.649738E-31f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			if (func_342(-1452505f))
			{
				func_419(0.002787285f);
				func_421("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_422(0.002787285f);
			}
			else
			{
				func_423(0.002787285f);
				func_420("MS_HIDOUT_RATTLESNAKEHOLLOW");
				func_424(0.002787285f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			if (func_342(-1.251346E+26f))
			{
				func_419(2.93803E+15f);
				func_421("MS_HIDOUT_REPENTANCE");
				func_422(2.93803E+15f);
			}
			else
			{
				func_423(2.93803E+15f);
				func_420("MS_HIDOUT_REPENTANCE");
				func_424(2.93803E+15f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			if (func_342(-4.068338E-14f))
			{
				func_419(0.0003386005f);
				func_421("MS_HIDOUT_SEAOFCORONADO");
				func_422(3.847928E-30f);
			}
			else
			{
				func_423(0.0003386005f);
				func_420("MS_HIDOUT_SEAOFCORONADO");
				func_424(3.847928E-30f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			if (func_342(-1.983992E+08f))
			{
				func_419(-1.193793E+11f);
				func_421("MS_HIDOUT_CHOLLASPRINGS");
			}
			else
			{
				func_423(-1.193793E+11f);
				func_420("MS_HIDOUT_CHOLLASPRINGS");
			}
			break;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			if (func_342(-3.190189E+12f))
			{
				func_419(-7.52249E-20f);
				func_421("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			else
			{
				func_423(-7.52249E-20f);
				func_420("MS_HIDOUT_OLDBACCHUSPLACE");
			}
			break;
		case -396624371:
			if (func_342(-4.155539E+24f))
			{
				func_419(-7.276065E+25f);
				func_421("MS_HIDOUT_CAMP_CHOLLA");
				func_422(9.382561E+37f);
			}
			else
			{
				func_423(-7.276065E+25f);
				func_420("MS_HIDOUT_CAMP_CHOLLA");
				func_424(9.382561E+37f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			if (func_342(3.797897E-07f))
			{
				func_419(-2.321388E-09f);
				func_421("MS_HIDOUT_CAMP_PIKES");
				func_422(0.0003575672f);
			}
			else
			{
				func_423(-2.321388E-09f);
				func_420("MS_HIDOUT_CAMP_PIKES");
				func_424(0.0003575672f);
			}
			break;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			if (func_342(1.049532E-16f))
			{
				func_419(-1.749338E-16f);
				func_421("MS_HIDOUT_GAPTOOTH");
				func_422(-1.749338E-16f);
			}
			else
			{
				func_423(-1.749338E-16f);
				func_420("MS_HIDOUT_GAPTOOTH");
				func_424(-1.749338E-16f);
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			if (func_342(4.17653E+37f))
			{
				func_419(-1.409092E+13f);
				func_421("mp_intro_jessica_camp_rhodes");
				func_422(-1.409092E+13f);
			}
			else
			{
				func_423(-1.409092E+13f);
				func_420("mp_intro_jessica_camp_rhodes");
				func_424(-1.409092E+13f);
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			if (func_342(2.406819E+17f))
			{
				func_419(-1.40118E-35f);
				func_421("mp_intro_jessica_camp_valentine");
				func_422(-1.40118E-35f);
			}
			else
			{
				func_423(-1.40118E-35f);
				func_420("mp_intro_jessica_camp_valentine");
				func_424(-1.40118E-35f);
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			if (func_342(-6.496393E+20f))
			{
				func_419(1.49104E-25f);
				func_421("mp_intro_jessica_camp_blackwater");
				func_422(1.49104E-25f);
			}
			else
			{
				func_423(1.49104E-25f);
				func_420("mp_intro_jessica_camp_blackwater");
				func_424(1.49104E-25f);
			}
			break;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			if (func_342(1.059608E-30f))
			{
				func_419(-5.906794E-17f);
				func_421("mp_intro_jessica_camp_tumbleweed");
				func_422(-5.906794E-17f);
			}
			else
			{
				func_423(-5.906794E-17f);
				func_420("mp_intro_jessica_camp_tumbleweed");
				func_424(-5.906794E-17f);
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			if (func_342(-6.261367E+10f))
			{
				func_419(-1.548615E-34f);
				func_421("mp_intro_hideout_rhodes");
				func_422(-1.548615E-34f);
			}
			else
			{
				func_423(-1.548615E-34f);
				func_420("mp_intro_hideout_rhodes");
				func_424(-1.548615E-34f);
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			if (func_342(1.220162E+23f))
			{
				func_419(-1.067721E+37f);
				func_421("mp_intro_hideout_valentine");
				func_422(-1.067721E+37f);
			}
			else
			{
				func_423(-1.067721E+37f);
				func_420("mp_intro_hideout_valentine");
				func_424(-1.067721E+37f);
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			if (func_342(4387.152f))
			{
				func_419(1.074092E-19f);
				func_421("mp_intro_hideout_blackwater");
				func_422(1.074092E-19f);
			}
			else
			{
				func_423(1.074092E-19f);
				func_420("mp_intro_hideout_blackwater");
				func_424(1.074092E-19f);
			}
			break;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			if (func_342(2.897249E-36f))
			{
				func_419(1.022745E+36f);
				func_421("mp_intro_hideout_tumbleweed");
				func_422(1.022745E+36f);
			}
			else
			{
				func_423(1.022745E+36f);
				func_420("mp_intro_hideout_tumbleweed");
				func_424(1.022745E+36f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			if (func_342(2.362093E+24f))
			{
				func_419(-1.445212E+18f);
				func_421("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_422(-1.445212E+18f);
			}
			else
			{
				func_423(-1.445212E+18f);
				func_420("MP_CAMP_DEFEND_HEARTLANDS_HILLTOP");
				func_424(-1.445212E+18f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			if (func_342(1.199864E-20f))
			{
				func_419(7.949502E-31f);
				func_421("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_422(7.949502E-31f);
			}
			else
			{
				func_423(7.949502E-31f);
				func_420("MP_CAMP_DEFEND_HEARTLANDS_CIRCLE");
				func_424(7.949502E-31f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			if (func_342(3.684313E-07f))
			{
				func_419(7.731684E-22f);
				func_421("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_422(7.731684E-22f);
			}
			else
			{
				func_423(7.731684E-22f);
				func_420("MP_CAMP_DEFEND_GRIZZLIES_CIRCLE");
				func_424(7.731684E-22f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			if (func_342(-1.06285E+20f))
			{
				func_419(2.567707E+28f);
				func_421("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_422(2.567707E+28f);
			}
			else
			{
				func_423(2.567707E+28f);
				func_420("MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE");
				func_424(2.567707E+28f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			if (func_342(-1.112779E-28f))
			{
				func_419(1.493975E-18f);
				func_421("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_422(1.493975E-18f);
			}
			else
			{
				func_423(1.493975E-18f);
				func_420("MP_CAMP_DEFEND_ROANOKE_CIRCLE");
				func_424(1.493975E-18f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			if (func_342(4.040528E-12f))
			{
				func_419(27.27159f);
				func_421("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_422(27.27159f);
			}
			else
			{
				func_423(27.27159f);
				func_420("WS_MP_CAMP_DEFEND_TWO_ROCKS");
				func_424(27.27159f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			if (func_342(-28.50204f))
			{
				func_419(9.215664E-22f);
				func_421("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_422(9.215664E-22f);
			}
			else
			{
				func_423(9.215664E-22f);
				func_420("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE");
				func_424(9.215664E-22f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			if (func_342(-4.179554E+17f))
			{
				func_419(8.952779E+31f);
				func_421("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_422(8.952779E+31f);
			}
			else
			{
				func_423(8.952779E+31f);
				func_420("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH");
				func_424(8.952779E+31f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			if (func_342(3.264599E-07f))
			{
				func_419(-3.321316E-05f);
				func_421("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_422(-3.321316E-05f);
			}
			else
			{
				func_423(-3.321316E-05f);
				func_420("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS");
				func_424(-3.321316E-05f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			if (func_342(6.322613E+17f))
			{
				func_419(-4.388047E+34f);
				func_421("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_422(-4.388047E+34f);
			}
			else
			{
				func_423(-4.388047E+34f);
				func_420("WS_MP_CAMP_DEFEND_RIO_BRAVO");
				func_424(-4.388047E+34f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			if (func_342(1.027896E+08f))
			{
				func_420("pro_empty_nav_tu003");
				func_419(-1.284048E+17f);
				func_421("WS_MP_CAMP_DEFEND_LITTLE_CREEK_AND_PRONGHORN");
				func_422(-1.284048E+17f);
			}
			else
			{
				func_423(-1.284048E+17f);
				func_420("WS_MP_CAMP_DEFEND_LITTLE_CREEK");
				func_421("pro_empty_nav_tu003");
				func_424(-1.284048E+17f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			if (func_342(-1.313957E-31f))
			{
				func_419(-1.763204E+35f);
				func_421("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_422(-1.763204E+35f);
			}
			else
			{
				func_423(-1.763204E+35f);
				func_420("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE");
				func_424(-1.763204E+35f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			if (func_342(-3.239443E+25f))
			{
				func_419(-2.234448E+27f);
				func_421("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_422(-2.234448E+27f);
			}
			else
			{
				func_423(-2.234448E+27f);
				func_420("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD");
				func_424(-2.234448E+27f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			if (func_342(-8031577f))
			{
				func_419(2.797251E-38f);
				func_421("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_422(2.797251E-38f);
			}
			else
			{
				func_423(2.797251E-38f);
				func_420("WS_MP_CAMP_DEFEND_TALL_TREES");
				func_424(2.797251E-38f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			if (func_342(1.306222E-36f))
			{
				func_419(-8.830105E+26f);
				func_421("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_422(-8.830105E+26f);
			}
			else
			{
				func_423(-8.830105E+26f);
				func_420("WS_MP_CAMP_DEFEND_NEW_HANOVER");
				func_424(-8.830105E+26f);
			}
			break;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			if (func_342(-0.001480579f))
			{
				func_419(2.23866E-34f);
				func_421("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_422(2.23866E-34f);
			}
			else
			{
				func_423(2.23866E-34f);
				func_420("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH");
				func_424(2.23866E-34f);
			}
			break;
		case 526003171:
			if (func_342(4.61996E-20f))
			{
				func_419(-2.4764E-36f);
				func_421("MS_OTH_MAC");
			}
			else
			{
				func_423(-2.4764E-36f);
				func_420("MS_OTH_MAC");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			if (func_342(-5448066f))
			{
				func_419(-6.715098E-06f);
				func_419(-5.694108E+33f);
				func_421("MS_OTH_SHEPHERDS_RISE");
			}
			else
			{
				func_423(-6.715098E-06f);
				func_423(-5.694108E+33f);
				func_420("MS_OTH_SHEPHERDS_RISE");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			if (func_342(-5.058997E-36f))
			{
				func_419(-1.042491E-32f);
				func_421("MS_OTH_TALL_TREES");
			}
			else
			{
				func_423(-1.042491E-32f);
				func_420("MS_OTH_TALL_TREES");
			}
			break;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			if (func_342(1.446155E-35f))
			{
				func_419(1.144084E+23f);
				func_421("MS_OTH_CASTORS");
			}
			else
			{
				func_423(1.144084E+23f);
				func_420("MS_OTH_CASTORS");
			}
			break;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			if (func_342(1.919886E+37f))
			{
				func_419(2.476077E+29f);
				func_421("MS_AS_TRK_LAKE_ISABELLA");
			}
			else
			{
				func_423(2.476077E+29f);
				func_420("MS_AS_TRK_LAKE_ISABELLA");
			}
			break;
		case -812641169:
			if (func_342(-4.834516E+09f))
			{
				func_419(3.447478E-35f);
				func_421("gcexc_nav_scm_003");
				func_422(-8.507878E-19f);
			}
			else
			{
				func_423(3.447478E-35f);
				func_420("gcexc_nav_scm_003");
				func_424(-8.507878E-19f);
			}
			break;
		case -554519756:
			if (func_342(-8.744189E+18f))
			{
				func_419(3.056829E-13f);
				func_421("gcexc_nav_scm_005");
				func_422(-0.5853106f);
			}
			else
			{
				func_423(3.056829E-13f);
				func_420("gcexc_nav_scm_005");
				func_424(-0.5853106f);
			}
			break;
		case 865557632:
			if (func_342(7.048311E-08f))
			{
				func_419(-3454263f);
				func_421("gcexc_nav_scm_006");
				func_422(-1.017113E-08f);
			}
			else
			{
				func_423(-3454263f);
				func_420("gcexc_nav_scm_006");
				func_424(-1.017113E-08f);
			}
			break;
		case 1112996351:
			if (func_342(53.74414f))
			{
				func_419(-6.303423E-05f);
				func_421("gcexc_nav_scm_007");
				func_422(4.300418E+24f);
			}
			else
			{
				func_423(-6.303423E-05f);
				func_420("gcexc_nav_scm_007");
				func_424(4.300418E+24f);
			}
			break;
		case -1608141409:
			if (func_342(-1.403614E-19f))
			{
				func_419(2.465312E-19f);
				func_421("gcexc_nav_scm_010");
				func_422(-5.506364E+31f);
			}
			else
			{
				func_423(2.465312E-19f);
				func_420("gcexc_nav_scm_010");
				func_424(-5.506364E+31f);
			}
			break;
		case -311373772:
			if (func_342(-4.658007E+27f))
			{
				func_419(-3.969605E-06f);
				func_421("gcexc_nav_scm_013");
				func_422(10.08446f);
			}
			else
			{
				func_423(-3.969605E-06f);
				func_420("gcexc_nav_scm_013");
				func_424(10.08446f);
			}
			break;
		case 61537448:
			if (func_342(1.004971E-36f))
			{
				func_419(3.935032E-28f);
				func_421("gcexc_nav_scm_015");
				func_422(6.205943E-22f);
			}
			else
			{
				func_423(3.935032E-28f);
				func_420("gcexc_nav_scm_015");
				func_424(6.205943E-22f);
			}
			break;
		case -925071604:
			if (func_342(-451640.4f))
			{
				func_419(1.542558E+22f);
				func_421("gcexc_nav_scm_017");
				func_422(7.943937E+34f);
			}
			else
			{
				func_423(1.542558E+22f);
				func_420("gcexc_nav_scm_017");
				func_424(7.943937E+34f);
			}
			break;
		case 1195508693:
			if (func_342(49667.83f))
			{
				func_419(-6.050742E+15f);
				func_421("gcexc_nav_scm_019");
				func_422(3.728058E+12f);
			}
			else
			{
				func_423(-6.050742E+15f);
				func_420("gcexc_nav_scm_019");
				func_424(3.728058E+12f);
			}
			break;
	}
}

void func_274(int iParam0, float fParam1)
{
	Local_1288.f_520.f_19[iParam0] = fParam1;
}

void func_275()
{
	switch (func_219())
	{
		case 0:
			Local_1288.f_19.f_159 = VOLUME::CREATE_VOLUME_BOX(1567.49f, -2048.007f, 48.29533f, 0f, 0f, 35.60825f, 4.65819f, 5.95441f, 3.379627f);
			break;
		default:
			return;
	}
	func_180(Local_1288.f_19.f_159, 1);
}

void func_276(int iParam0)
{
	Local_1288.f_520.f_1[iParam0] = -1;
}

void func_277()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_427(func_426(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var1))
				{
				}
				else
				{
					EVENT::_SET_EVENT_TRACKER_FOR_PED(Var1, "MpRandomEvent", 1);
					func_428(&(Local_1288.f_304), Var1);
					func_429(func_426(iVar0));
				}
				iVar0++;
			}
		}
	}
}

bool func_278()
{
	return (func_129(32) || func_128(32, 255));
}

bool func_279(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_430(iParam0, 12648.71f) };
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

void func_280()
{
	func_431();
	func_432();
}

void func_281()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_433(iVar0, bVar1, iVar2);
		func_434(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_282()
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
	if (!func_216(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_1288.f_179.f_124)
	{
		bVar8 = true;
		Local_1288.f_179.f_124 = !Local_1288.f_179.f_124;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		bVar7 = false;
		if (Local_1288.f_179.f_96 >= 8)
		{
			Local_1288.f_179.f_96 = 0;
		}
		iVar0 = Local_1288.f_179.f_96;
		Local_1288.f_179.f_96++;
		iVar9 = func_435(iVar0);
		iVar1 = Local_1288.f_179.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_172(iVar9, 4))
		{
			func_410(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_71[iVar3 /*38*/].f_4.f_2[iVar0] > -1f)
			{
				Local_71[iVar3 /*38*/].f_4.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_1288.f_179.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_1288.f_179.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_1288.f_179.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_1288.f_179.f_97), iVar0);
			}
		}
		else
		{
			bVar7 = func_436(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_1288.f_179.f_97, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_1288.f_179.f_97), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_1288.f_179.f_97), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_71[iVar3 /*38*/].f_4.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_71[iVar3 /*38*/].f_4.f_1), iVar0);
				}
				func_437(&(Local_1288.f_179.f_98[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_71[iVar3 /*38*/].f_4.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_438(&(Local_1288.f_179.f_98[iVar0 /*3*/])) || func_439(&(Local_1288.f_179.f_98[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_440(&(Local_1288.f_179.f_98[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_71[iVar3 /*38*/].f_4.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_172(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_1288.f_179.f_124, false, 256);
		}
		if (func_172(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_441(iVar9))
						{
							if (!func_380(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_442(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_172(iVar9, 8))
			{
				if (!func_441(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_1288.f_179.f_97 != 0)
	{
		if (!func_443(1, 255))
		{
			func_444(1);
		}
	}
	else if (func_443(1, 255))
	{
		func_445(1);
	}
}

void func_283()
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
	if (!func_216(&iVar25))
	{
		return;
	}
	func_446();
	bVar27 = WEAPON::GET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), &iVar26, true, 0, false);
	bVar28 = (bVar27 && PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()));
	if ((bVar27 && bVar28) && WEAPON::IS_WEAPON_A_GUN(iVar26))
	{
		Local_1288.f_304.f_64 = 0;
		Local_71[iVar25 /*38*/].f_15.f_4 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
	bVar29 = (bVar28 && (iVar26 == -9.675868E-11f || iVar26 == 5.763438E+22f));
	bVar30 = false;
	while (iVar22 < 1)
	{
		if (Local_1288.f_304.f_205 >= 8)
		{
			Local_1288.f_304.f_205 = 0;
		}
		iVar1 = Local_1288.f_304.f_205;
		Local_1288.f_304.f_205++;
		iVar22++;
		iVar18 = func_426(iVar1);
		if (!func_447(iVar18))
		{
		}
		else if (func_448(iVar18, &Var5))
		{
			if (func_449(&Var5, iVar18))
			{
				if (func_450(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1))
				{
					func_451(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1);
				}
			}
			else if (!func_450(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1))
			{
				func_452(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(Var5))
			{
			}
			else
			{
				func_453(iVar18);
				if (func_454(iVar18))
				{
					if (func_455(iVar18))
					{
						if (!func_456(iVar18))
						{
							func_457(iVar18);
						}
					}
					if (func_458(iVar18))
					{
						func_459(iVar18);
					}
				}
				else
				{
					if (func_460(iVar18))
					{
						if ((ENTITY::DOES_ENTITY_EXIST(Var5) && !ENTITY::IS_ENTITY_DEAD(Var5)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							PED::SET_PED_RESET_FLAG(Var5, 42, true);
						}
					}
					if (!func_461(Var5))
					{
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
						{
							func_428(&(Local_1288.f_304), Var5);
						}
					}
					if (!func_462(iVar18, 255))
					{
						bVar2 = false;
						iVar3 = 0;
						if (func_463(iVar18))
						{
							bVar2 = true;
							iVar3 = 1;
						}
						else if (func_464(iVar18, iVar25))
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else if (func_465(Var5, Var5.f_1, &(Local_1288.f_304), &iVar4, 0, Var5.f_2))
						{
							switch (iVar4)
							{
								case 256:
									if (!MISC::IS_BIT_SET(Local_1288.f_304.f_64, iVar18))
									{
										bVar2 = true;
										MISC::SET_BIT(&(Local_1288.f_304.f_64), iVar18);
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
						else if ((bVar29 && Var5.f_2 <= 1067450368) && func_398(PLAYER::PLAYER_PED_ID(), Var5, 0.707f) == 0)
						{
							iVar4 = 2;
							bVar2 = true;
						}
						else
						{
							if (!bVar2)
							{
								if (func_466(iVar18, &Var5, iVar25))
								{
									iVar4 = 4;
									bVar2 = true;
									MISC::SET_BIT(&(Local_1288.f_304.f_64), iVar18);
								}
							}
							if (!bVar2)
							{
								bVar30 = true;
								if (!func_467(iVar18) || !EVENT::_0x83D43F0FD5276E4D(Var5, 1))
								{
									bVar30 = false;
									if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
									{
										EVENT::_SET_EVENT_TRACKER_FOR_PED(Var5, "MpRandomEvent", 1);
										func_429(iVar18);
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
														if (func_468(iVar18, &Var5))
														{
															iVar4 = 256;
															bVar2 = true;
															MISC::SET_BIT(&(Local_1288.f_304.f_64), iVar18);
														}
														break;
													case joaat("EVENT_SHOT_FIRED_BULLET_IMPACT"):
													case joaat("EVENT_SHOT_FIRED_WHIZZED_BY"):
														if (!Local_1288.f_304.f_2 & 4 != 0)
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
									if (func_469(iVar18, &Var5, iVar25))
									{
										iVar4 = 256;
										bVar2 = true;
										MISC::SET_BIT(&(Local_1288.f_304.f_64), iVar18);
									}
								}
							}
						}
						if (bVar2)
						{
							if (!func_470(iVar18, iVar4, iVar3))
							{
							}
							else
							{
								if (func_450(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1))
								{
									func_451(&(Local_71[iVar25 /*38*/].f_15), 8, iVar1);
								}
								func_471(iVar18, 1);
								if (func_472(iVar18))
								{
									if (!func_473(iVar18, 255))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
										{
											if (!func_474(iVar18))
											{
											}
											else
											{
												func_475(iVar18);
												func_476(iVar18);
												Jump @1398; //curOff = 1202
												if (func_477(iVar18))
												{
												}
												else if (iVar23 < 2)
												{
													if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var5))
													{
														iVar24 = 0;
														while (iVar24 < 8)
														{
															if (Local_1288.f_304.f_207[iVar18] >= 32)
															{
																iVar0 = 0;
																Local_1288.f_304.f_207[iVar18] = 0;
															}
															else
															{
																iVar0 = Local_1288.f_304.f_207[iVar18];
																Local_1288.f_304.f_207[iVar18]++;
															}
															iVar24++;
															if (func_478(iVar0, &uVar21, &iVar20, &iVar19))
															{
																if (!func_479(iVar18, iVar20))
																{
																	if (func_462(iVar18, iVar0))
																	{
																		if (!func_480(iVar18, uVar21, iVar20, iVar19))
																		{
																		}
																		else
																		{
																			func_481(iVar18, iVar20);
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

bool func_284()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_1288.f_14))
	{
		return false;
	}
	if (func_482())
	{
		return false;
	}
	if (func_483(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_285()
{
	int iVar0;

	Local_1288.f_19.f_149 = -1;
	Local_1288.f_19.f_150 = 0;
	Local_1288.f_19.f_151 = -1;
	Local_1288.f_19.f_152 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_1288.f_19.f_150 = (Local_1288.f_19.f_150 || Local_71[iVar0 /*38*/].f_1);
			Local_1288.f_19.f_149 = (Local_1288.f_19.f_149 && Local_71[iVar0 /*38*/].f_1);
			Local_1288.f_19.f_152 = (Local_1288.f_19.f_152 || Local_71[iVar0 /*38*/].f_1.f_1);
			Local_1288.f_19.f_151 = (Local_1288.f_19.f_151 && Local_71[iVar0 /*38*/].f_1.f_1);
		}
		iVar0++;
	}
}

Vector3 func_286()
{
	switch (func_219())
	{
		case 0:
			return 1153638907, -989859173, 1111318363;
		case 1:
			return 1152155312, -992737160, 1116089110;
		case 2:
			return 1154135959, -993113526, 1113681185;
		case 3:
			return 1153178797, -994590715, 1116681830;
		case 4:
			return 1149720885, -996261203, 1116188135;
		case 5:
			return 1143646121, -998764015, 1112732150;
		case 6:
			return 1144058060, -1000505083, 1111569796;
		case 7:
			return 1146874710, -1006205340, 1118840770;
		case 8:
			return 1149040382, -1010486825, 1119149619;
		default:
			break;
	}
	return vLocal_13;
}

int func_287(vector3 vParam0, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;

	fVar0 = 1176255488; /* Float: 9999f */
	iVar2 = 255;
	iVar3 = 255;
	iVar5 = iVar5;
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar4);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar2))
		{
		}
		else if (bParam3 && !func_484(iVar4, 1, 1))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar2);
			fVar6 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), vParam0);
			if (fVar6 < fVar0)
			{
				iVar3 = iVar2;
				fVar0 = fVar6;
				iVar5 = iVar4;
			}
		}
		iVar4++;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return PLAYER::GET_PLAYER_PED(iVar3);
	}
	return 0;
}

float func_288(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_289(float fParam0)
{
	if (func_387())
	{
		return;
	}
	if (fParam0 < func_485())
	{
		func_395(0);
		func_486();
	}
}

void func_290()
{
	func_487();
	func_488();
}

void func_291()
{
	int iVar0;

	if (func_181(4, -1, 1))
	{
		return;
	}
	if (!func_321(2))
	{
		return;
	}
	iVar0 = func_184(0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_489(1.492225E+16f, iVar0, 1);
	func_323(4);
}

void func_292()
{
	if (!func_324(2048))
	{
		return;
	}
	if (func_181(2048, -1, 1))
	{
		return;
	}
	func_490(&(Local_1288.f_304), 0);
	func_323(2048);
}

void func_293(int iParam0)
{
	if (Local_1288.f_19.f_1 == iParam0)
	{
		return;
	}
	Local_1288.f_19.f_1 = iParam0;
}

void func_294(var uParam0)
{
	if (*uParam0 == Local_16.f_7)
	{
		return;
	}
	func_293(Local_16.f_7);
}

void func_295()
{
	if (func_389(64))
	{
		if (func_181(4194304, -1, 1))
		{
			func_322(4194304);
			Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1.f_2 = -1;
		}
	}
	if (Local_16.f_7.f_1 != Local_1288.f_19.f_2)
	{
		Local_1288.f_19.f_2 = Local_16.f_7.f_1;
		if (func_181(2097152, -1, 1))
		{
			func_491(Local_16.f_7.f_1);
		}
	}
}

void func_296()
{
	int iVar0;
	float fVar1;

	iVar0 = func_184(0);
	fVar1 = func_492(Global_33, iVar0, 1, 1);
	if (func_181(2097152, -1, 1))
	{
		if (fVar1 > 1092616192)
		{
			MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(func_184(0));
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
			{
				PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
			}
			func_493();
			func_322(2097152);
		}
		else if (func_494(0, 0, 0))
		{
			if (!func_495(1))
			{
				func_491(Local_1288.f_19.f_2);
				func_496(1);
			}
		}
		else if (func_495(1))
		{
			func_493();
			func_497(1);
		}
	}
	else
	{
		if (fVar1 > 1092616192)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (!MISC::REGISTER_INTERACTION_LOCKON_PROMPT(iVar0, "", 7f, 0f, 16, 0f, 0f, 0, false, -1))
		{
			return;
		}
		func_323(2097152);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return;
		}
		PED::SET_PED_CONFIG_FLAG(iVar0, 130, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 301, false);
	}
}

void func_297()
{
	if (!func_181(2f, -1, 1))
	{
		return;
	}
	if (func_324(262144))
	{
		if (func_324(64))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 256, false);
			func_322(64);
		}
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, -7.068217E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.068381E+13f, false);
	}
}

void func_298()
{
	int iVar0;

	if (func_324(8388608))
	{
		return;
	}
	if (func_324(4096))
	{
		if (!func_321(4096))
		{
			func_323(4096);
		}
		return;
	}
	iVar0 = func_184(0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	func_170(0);
	if (!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar0, -1))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1288.f_19.f_142))
	{
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, func_228(), true);
	func_390(128);
	func_323(4096);
}

void func_299()
{
	int iVar0;

	iVar0 = func_184(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::SET_PED_RESET_FLAG(iVar0, 269, true);
}

void func_300()
{
	func_499(&(Local_1288.f_19.f_153), func_498(), 1, -1f);
}

void func_301()
{
	int iVar0;

	if (Local_1288.f_19.f_1 <= 0)
	{
		return;
	}
	if (func_324(2048))
	{
		return;
	}
	iVar0 = func_184(0);
	if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(iVar0, Local_1288.f_19.f_142))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1288.f_19.f_142))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_1288.f_19.f_142, func_265()))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, func_265());
		return;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "vic", iVar0, 0);
	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, func_265(), true);
}

void func_302()
{
	int iVar0;

	if (!func_321(2048) || func_324(32768))
	{
		return;
	}
	if (!func_389(256))
	{
		return;
	}
	if (func_500(256))
	{
		return;
	}
	iVar0 = func_184(0);
	if (!ENTITY::IS_ENTITY_TOUCHING_ENTITY(Global_33, iVar0))
	{
		func_322(256);
		return;
	}
	if (((((((func_502(func_501()) || func_502(func_503())) || func_502(func_504())) || func_502(func_505())) || func_502(func_506())) || func_502(func_507())) || func_502(func_508())) || func_502(func_509()))
	{
		return;
	}
	func_510(1048576);
	func_323(256);
}

void func_303()
{
	if (!func_500(1048576))
	{
		return;
	}
	if (func_500(256))
	{
		return;
	}
	func_512(func_511());
	func_512(func_513());
	func_515(func_514(), 0, 0);
	func_510(256);
}

void func_304()
{
	if (!func_500(8388608))
	{
		return;
	}
	if (func_500(512))
	{
		return;
	}
	func_512(func_505());
	func_512(func_506());
	func_512(func_507());
	func_512(func_508());
	func_512(func_509());
	func_515(func_504(), 0, 0);
	func_510(512);
}

void func_305()
{
	if (!func_500(2097152))
	{
		return;
	}
	if (func_500(1024))
	{
		return;
	}
	func_512(func_505());
	func_512(func_506());
	func_512(func_507());
	func_512(func_508());
	func_512(func_509());
	func_512(func_511());
	func_515(func_501(), 0, 0);
	func_510(1024);
}

void func_306()
{
	if (!func_500(4194304))
	{
		return;
	}
	if (func_500(2048))
	{
		return;
	}
	func_512(func_505());
	func_512(func_506());
	func_512(func_507());
	func_512(func_508());
	func_512(func_509());
	func_512(func_511());
	func_515(func_503(), 0, 0);
	func_510(2048);
}

void func_307()
{
	int iVar0;
	char* sVar1;

	if (func_324(1))
	{
		func_323(1);
		return;
	}
	func_516();
	iVar0 = func_184(0);
	switch (func_218())
	{
		case 0:
			sVar1 = "ACFEX_SD_Official";
			break;
		case 1:
			sVar1 = "ACFEX_SD_Lawman";
			break;
	}
	func_517(&(Local_1288.f_19.f_42), iVar0, sVar1, 1);
	func_517(&(Local_1288.f_19.f_42), func_184(1), "EXC_OPED2", 1);
	func_517(&(Local_1288.f_19.f_42), func_184(2), "EXC_YPED2", 1);
	func_517(&(Local_1288.f_19.f_42), func_184(5), "EXC_YPED1", 1);
	func_517(&(Local_1288.f_19.f_42), func_184(4), "EXC_OPED3", 1);
	func_323(1);
}

void func_308(float fParam0)
{
	if (func_324(2))
	{
		func_323(2);
		return;
	}
	if (*fParam0 > func_518())
	{
		return;
	}
	func_515(func_519(), 1, 0);
	func_323(2);
}

void func_309(int iParam0, float fParam1)
{
	float fVar0;

	if (!func_278())
	{
		fVar0 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, func_286(), true);
		if (fVar0 < func_520())
		{
			func_521();
			func_522(&(Local_1288.f_19.f_4));
		}
		return;
	}
	else if (!func_523(iParam0, fParam1))
	{
		return;
	}
}

void func_310(int iParam0)
{
	float fVar0;
	int iVar1;

	if (!func_389(1))
	{
		func_391(&(Local_16.f_7.f_6[0]));
		func_390(1);
	}
	if (func_324(32))
	{
		func_323(32);
		return;
	}
	if (!func_324(16))
	{
		if (func_240(Local_16.f_7.f_6[0]))
		{
			fVar0 = func_288(*iParam0, func_286(), 1);
			iVar1 = func_393(Local_16.f_7.f_6[0]);
			if (iVar1 > 20000)
			{
				if (fVar0 < func_524())
				{
					func_515(6, Local_1288.f_19.f_141, 9);
					func_323(32);
				}
				else
				{
					func_525(iParam0);
				}
			}
			else if (fVar0 > func_524())
			{
				func_525(iParam0);
			}
			else if (iVar1 > 10000 && !func_526(2, -1, 1))
			{
				func_515(4, Local_1288.f_19.f_141, 9);
				func_510(2);
			}
		}
	}
	else if (func_288(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), func_286(), 1) < func_527())
	{
		func_515(7, Local_1288.f_19.f_141, 9);
		func_323(32);
	}
}

void func_311()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_324(1024))
	{
		func_486();
		func_323(1024);
		return;
	}
	func_528(&(Local_16.f_7.f_18[0]), 0);
	iVar0 = 0;
	while (iVar0 < Local_1288.f_179.f_7)
	{
		iVar1 = func_529(iVar0);
		iVar2 = func_184(iVar1);
		if (!func_185(iVar0))
		{
		}
		else
		{
			func_530(&iVar2, &(Local_16.f_7.f_18[0]), 1, 0, 0, 1);
		}
		iVar0++;
	}
	func_486();
	func_323(1024);
}

void func_312()
{
	if (!func_321(2048))
	{
		return;
	}
	func_323(16384);
}

void func_313(float fParam0)
{
	if (!func_500(32))
	{
		if (*fParam0 < 1101004800 && func_389(256))
		{
			func_515(func_505(), 0, 9);
			func_510(32);
		}
	}
	else if (!func_531(32))
	{
		func_510(32);
	}
	switch (func_532())
	{
		case 1:
			break;
		case 2:
			break;
	}
	func_533();
}

void func_314()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_389(32))
	{
		return;
	}
	if (func_324(32768))
	{
		func_323(32768);
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	WEAPON::_0x4820A6939D7CEF28(iVar0, 0);
	WEAPON::_HIDE_PED_WEAPONS(iVar0, 2, false);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return;
	}
	if (!func_534(iVar0, 3.034861E-30f, 1, 0))
	{
		return;
	}
	iVar3 = func_184(0);
	if (func_535(iVar0) || PED::IS_PED_CARRYING_SOMETHING(iVar0))
	{
		iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if (ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
			bVar1 = true;
		}
	}
	TASK::OPEN_SEQUENCE_TASK(&iVar4);
	TASK::TASK_SWAP_WEAPON(0, 0, 0, 0, 0);
	if (bVar1)
	{
		TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, iVar2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iVar3, 1.85f, -0.25f, 0f), 1f, 0);
	}
	TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_536(Local_16.f_7.f_15), 1f, 20000, 0.1f, 0, 40000f);
	TASK::TASK_ACHIEVE_HEADING(0, func_537(Local_16.f_7.f_15), 0);
	func_538(iVar0, &iVar4, 0, 0, 1, 1);
	func_323(2f);
	func_323(32768);
}

void func_315()
{
	int iVar0;

	if (func_181(65536, -1, 1))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	if (!func_539(iVar0, func_536(Local_16.f_7.f_15), 1041865114 /* Float: 0.15f */, 1, 1))
	{
		return;
	}
	func_323(65536);
}

void func_316()
{
	int iVar0;
	var uVar1;
	int iVar4;

	iVar0 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
	if (func_324(131072))
	{
		func_323(131072);
		return;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_1288.f_19.f_142))
	{
		return;
	}
	if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1288.f_19.f_142))
	{
		return;
	}
	if (!func_540(Local_16.f_7.f_15, &uVar1))
	{
		return;
	}
	if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(Local_1288.f_19.f_142, &uVar1))
	{
		ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, &uVar1);
		return;
	}
	if (PED::IS_PED_MALE(iVar0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "player", iVar0, 0);
	}
	else
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "MP_Female", iVar0, 0);
	}
	iVar4 = func_184(0);
	if (!ENTITY::IS_ENTITY_DEAD(iVar4) && !PED::IS_PED_INJURED(iVar4))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, &uVar1, true);
	}
	else
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
	func_323(131072);
}

void func_317()
{
	int iVar0;
	int iVar1;

	if (func_324(8388608))
	{
		return;
	}
	if (!func_500(64))
	{
		if (func_541(Local_1288.f_19.f_142, "SCENE_CAPTIVE", 1061779669 /* Float: 0.787f */, 1))
		{
			func_515(func_511(), 0, 9);
			func_510(64);
		}
	}
	else if (!func_531(64))
	{
		func_510(64);
	}
	if (func_324(262144))
	{
		func_323(262144);
		return;
	}
	iVar0 = func_184(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		if (!func_389(128))
		{
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_1288.f_19.f_142))
			{
				if (func_541(Local_1288.f_19.f_142, "SCENE_CAPTIVE", func_542(Local_16.f_7.f_15), 0))
				{
					ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "vic", iVar0);
					PHYSICS::ACTIVATE_PHYSICS(iVar0);
					func_323(8388608);
				}
				else
				{
					ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(Local_1288.f_19.f_142, func_228(), true);
					iVar1 = PLAYER::GET_PLAYER_PED(Local_16.f_7.f_17);
					if (PED::IS_PED_MALE(iVar1))
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "player", iVar1);
					}
					else
					{
						ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "MP_Female", iVar1);
					}
					func_390(128);
				}
			}
		}
		return;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return;
	}
	if (!func_541(Local_1288.f_19.f_142, "SCENE_CAPTIVE", 1065185444 /* Float: 0.99f */, 1))
	{
		if (func_541(Local_1288.f_19.f_142, "SCENE_CAPTIVE", func_542(Local_16.f_7.f_15), 0))
		{
			func_543();
		}
		return;
	}
	func_323(262144);
}

void func_318()
{
	int iVar0;

	if (func_324(524288))
	{
		func_323(524288);
		return;
	}
	iVar0 = func_184(0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_RAGDOLL(iVar0))
	{
		return;
	}
	if (func_321(0f))
	{
		if (func_324(2048))
		{
			if (!func_534(iVar0, 3.034861E-30f, 1, 0))
			{
				return;
			}
			TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_1288.f_19.f_143);
			func_323(524288);
		}
		else
		{
			if (!func_534(iVar0, 2.40763E-20f, 1, 0))
			{
				return;
			}
			TASK::TASK_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, false, false), 3, 0, -1f, -1, 0);
			func_323(524288);
		}
	}
	else if (!func_181(0f, -1, 1))
	{
		TASK::CLEAR_SEQUENCE_TASK(&(Local_1288.f_19.f_143));
		TASK::_0x23767D80C7EED7C6(&(Local_1288.f_19.f_143), -1.935387E-33f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_33, 0, 3f, 0.25f, -1f);
		TASK::TASK_STAND_STILL(0, 3000);
		TASK::TASK_FLEE_COORD(0, func_286(), 1, 0, -1f, -1, 0);
		TASK::CLOSE_SEQUENCE_TASK(Local_1288.f_19.f_143);
		func_323(0f);
	}
}

void func_319()
{
	int iVar0;
	int iVar1;

	if (!func_500(128))
	{
		if (!func_240(Local_16.f_7.f_6[4]))
		{
			func_391(&(Local_16.f_7.f_6[4]));
			return;
		}
		iVar0 = func_393(Local_16.f_7.f_6[4]);
		if (iVar0 > 4000)
		{
			func_515(func_513(), 0, 9);
			func_510(128);
		}
		return;
	}
	else if (!func_531(128))
	{
		func_510(128);
		return;
	}
	if (!func_181(1048576, -1, 1))
	{
		func_493();
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(func_184(0));
		func_322(2097152);
		func_323(1048576);
		return;
	}
	if (!func_324(128))
	{
		iVar1 = func_184(0);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
		{
			return;
		}
		PED::SET_PED_KEEP_TASK(iVar1, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 26, false);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, false);
		PED::SET_PED_LASSO_HOGTIE_FLAG(iVar1, 0, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 178, true);
		PED::SET_PED_CONFIG_FLAG(iVar1, 467, false);
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		func_323(128);
	}
}

bool func_320(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_321(int iParam0)
{
	return (Local_1288.f_19.f_149 && iParam0) != 0;
}

void func_322(int iParam0)
{
	if (!func_181(iParam0, -1, 1))
	{
		return;
	}
	Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1 = (Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1 - (Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1 && iParam0));
}

void func_323(int iParam0)
{
	if (func_181(iParam0, -1, 1))
	{
		return;
	}
	Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1 = (Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1 || iParam0);
}

bool func_324(int iParam0)
{
	return (Local_1288.f_19.f_150 && iParam0) != 0;
}

void func_325()
{
	int iVar0;
	struct<13> Var1;

	Var1.f_6 = 1f;
	Var1.f_7 = 1f;
	Var1.f_8 = 1f;
	Var1.f_9 = 1;
	Var1.f_12 = 8;
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_427(func_426(iVar0), &Var1))
		{
			if (ENTITY::DOES_ENTITY_EXIST(Var1))
			{
				EVENT::_EVENT_FLUSH_ALL_EVENT_TRACKERS(Var1);
			}
		}
		iVar0++;
	}
}

int func_326(var uParam0, var uParam1)
{
	return uParam0;
}

int func_327(int iParam0)
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

int func_328(struct<2> Param0)
{
	return func_544(Param0);
}

void func_329(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_326(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_546(func_545(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_210(iVar5) == func_545(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_547(iVar4);
			if (!func_548(iVar6, 0))
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

int func_330(int iParam0, int iParam1)
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

void func_331(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_549(&Var0);
}

var func_332(int iParam0)
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

var func_333(int iParam0)
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

var func_334(int iParam0)
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

struct<2> func_335(int iParam0)
{
	struct<2> Var0;

	switch (iParam0)
	{
		case 1:
			return func_550(-1.11244E+21f);
		case 2:
			return func_550(-0.03766548f);
		case 3:
			return func_550(20967.98f);
		case 4:
			return func_550(20967.98f);
	}
	return Var0;
}

bool func_336(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17360[iVar0 /*2*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_337(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_17360[iVar0 /*2*/] == iParam0)
		{
			return Global_17360[Global_17381 /*2*/].f_1;
		}
		iVar0++;
	}
	return 5;
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_551(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_339(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_551(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_340()
{
	func_339(-132684.3f);
	func_339(-0.0001690958f);
	func_339(3.830978E-26f);
	func_339(6.474655E-12f);
	func_339(-4.819223E-35f);
	func_339(2.571264E+29f);
	func_339(1.854668E-22f);
}

void func_341()
{
	func_339(1.158411E-13f);
	func_339(8.415453E-18f);
	func_339(7.67535E+33f);
	func_339(1.00052E+21f);
	func_339(9.229372E-31f);
	func_339(6.4567E-33f);
	func_339(40181.18f);
	func_339(-1.595292E+21f);
	func_339(-8.200105E+15f);
	func_339(-4.520527E+16f);
}

bool func_342(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_551(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_552(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_553(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

void func_343(int iParam0)
{
	if (func_554(iParam0) && func_555())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

bool func_344(int iParam0)
{
	if ((iParam0 == -1 || iParam0 == 8) || iParam0 > 7)
	{
		return false;
	}
	return true;
}

var func_345(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/];
}

int func_346(int iParam0)
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

int func_347(int iParam0)
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

void func_348(bool bParam0)
{
	func_191(bParam0, 0);
	func_191(bParam0, 1);
	func_191(bParam0, 3);
	func_189(bParam0);
}

void func_349(bool bParam0)
{
	func_190(bParam0);
	func_556(bParam0, 0, 3);
}

void func_350(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_351(bool bParam0)
{
	func_191(bParam0, 0);
	func_350(bParam0, 0);
	func_350(bParam0, 1);
	func_350(bParam0, 4);
	func_350(bParam0, 5);
}

void func_352(bool bParam0)
{
	func_191(bParam0, 1);
	func_350(bParam0, 2);
	func_350(bParam0, 3);
	func_350(bParam0, 6);
	func_350(bParam0, 7);
	func_194(bParam0, 2);
}

void func_353(bool bParam0)
{
	func_191(bParam0, 0);
	func_350(bParam0, 0);
	func_350(bParam0, 1);
	func_350(bParam0, 2);
}

void func_354(bool bParam0)
{
	func_191(bParam0, 1);
	func_189(bParam0);
}

void func_355(bool bParam0)
{
	func_191(bParam0, 2);
	func_350(bParam0, 3);
}

void func_356(bool bParam0)
{
	func_191(bParam0, 3);
	func_350(bParam0, 4);
}

void func_357(bool bParam0)
{
	func_350(bParam0, 0);
	func_350(bParam0, 1);
}

void func_358(bool bParam0)
{
	func_350(bParam0, 2);
	func_350(bParam0, 3);
}

void func_359(bool bParam0)
{
	func_350(bParam0, 4);
	func_350(bParam0, 5);
}

bool func_360(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_361(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_362(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_363(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

void func_364(var uParam0)
{
	func_557(uParam0, 0);
	func_558(uParam0, 0);
	func_365(uParam0, 1);
	func_559(uParam0, 1);
	func_560(uParam0, 0);
	func_490(uParam0, 1);
	func_561(uParam0, 1, 1, 1);
}

void func_365(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 256);
	}
	else
	{
		func_220(&(uParam0->f_2), 256);
	}
}

void func_366(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 4);
	}
	else
	{
		func_220(&(uParam0->f_2), 4);
	}
}

void func_367(var uParam0)
{
	func_563(uParam0, (func_562(uParam0) - 6f));
	func_564(uParam0, 1);
}

void func_368(var uParam0)
{
	func_557(uParam0, 0);
	func_558(uParam0, 0);
	func_365(uParam0, 0);
	func_560(uParam0, 0);
	func_561(uParam0, 1, 1, 1);
}

void func_369(var uParam0)
{
	func_565(uParam0, 1);
	func_566(uParam0, 1);
	func_567(uParam0, 1);
}

void func_370(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 131072);
	}
	else
	{
		func_220(&(uParam0->f_2), 131072);
	}
}

void func_371(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 4);
	}
	else
	{
		func_221(uParam0, 4);
	}
}

bool func_372(int iParam0, bool bParam1)
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

bool func_373(int iParam0, var uParam1)
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

int func_374(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	MISC::SET_BIT(&iVar0, 31);
	iVar0 = BUILTIN::SHIFT_RIGHT(iVar0, (31 - iParam1));
	iVar0 ^= -1;
	iVar0 = BUILTIN::SHIFT_LEFT(iVar0, iParam0);
	return iVar0;
}

var func_375()
{
	return Local_1288.f_3;
}

var func_376()
{
	return Local_1288.f_2;
}

int func_377(int iParam0)
{
	if (!func_179(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

Vector3 func_378(int iParam0)
{
	switch (func_219())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return 1153662981, -989876273, 1111333837;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1152150500, -992738225, 1116061520;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1154133082, -993117074, 1113594213;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1153186939, -994601150, 1116653141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1149714896, -996263620, 1116143020;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 1143641005, -998766718, 1112649425;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return 1144076567, -1000535050, 1111559289;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return 1146893353, -1006232630, 1118835253;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return 1149051472, -1010441409, 1119151371;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_379(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_263(iParam1))
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

bool func_380(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_1288.f_15 };
	iVar7 = 0;
	iVar8 = func_409(iParam0);
	iVar9 = func_568(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
		{
			iVar9 = func_568(iParam0);
			fVar0 = func_569(iParam0);
			if (!func_178(Local_1288.f_179.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_570(iParam0)) };
			}
			else
			{
				vVar1 = { func_570(iParam0) };
			}
			if (!func_571(&(Local_16.f_27[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_16.f_27[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_172(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_572(iVar7, 1);
					}
					if (func_573(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_574(iParam0))
						{
							if (func_573(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_381(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_27[iParam0]);
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
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_16.f_27[iParam0])))
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

bool func_381(int iParam0)
{
	return func_172(iParam0, 128);
}

void func_382(int iParam0)
{
	Local_16.f_7.f_2 = iParam0;
}

bool func_383(int iParam0)
{
	return func_128(8, iParam0);
}

bool func_384(int iParam0)
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

bool func_385(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_372(iParam2, 0))
	{
		if (!func_216(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_71[iParam2 /*38*/].f_4.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_345(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_575(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_71[iParam2 /*38*/].f_4.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

bool func_386(int iParam0)
{
	if (iParam0 < 1)
	{
		return true;
	}
	return false;
}

bool func_387()
{
	return (func_129(64) || func_128(64, 255));
}

void func_388(int iParam0)
{
	if (Local_16.f_7 == iParam0)
	{
		return;
	}
	Local_16.f_7 = iParam0;
}

bool func_389(int iParam0)
{
	return (Local_16.f_7.f_3 && iParam0) != 0;
}

void func_390(int iParam0)
{
	if (func_389(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 || iParam0);
}

void func_391(var uParam0)
{
	*uParam0 = Global_1295619.f_16;
}

void func_392(int iParam0)
{
	if (!func_389(iParam0))
	{
		return;
	}
	Local_16.f_7.f_3 = (Local_16.f_7.f_3 - (Local_16.f_7.f_3 && iParam0));
}

int func_393(int iParam0)
{
	return (Global_1295619.f_16 - iParam0) * 1000;
}

void func_394(var uParam0)
{
	*uParam0 = 0;
}

void func_395(bool bParam0)
{
	int iVar0;

	if (!func_128(64, 255))
	{
		iVar0 = func_330(Local_1288.f_1, Local_1288.f_2);
		func_576(iVar0);
		if (!func_128(1024, 255))
		{
			func_145(1024);
		}
		func_577(iVar0);
		if (bParam0)
		{
			func_578(Local_1288.f_1, Local_1288.f_4);
		}
		func_145(64);
	}
}

void func_396(int iParam0)
{
	Local_16.f_7.f_1 = iParam0;
}

int func_397()
{
	int iVar0;
	int iVar1;

	if (!func_324(4194304))
	{
		return 255;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1))
		{
		}
		else if (!func_178(Local_71[iVar0 /*38*/].f_1, 4194304))
		{
		}
		else if (Local_71[iVar0 /*38*/].f_1.f_2 != -1)
		{
			return NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
		}
		iVar0++;
	}
	return 255;
}

int func_398(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_579(iParam0, vVar0, fParam2);
}

void func_399(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_400(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_401(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_1288.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_1288)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_1288.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_1288.f_3)
	{
		return false;
	}
	return true;
}

void func_402(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 816343230:
			func_580(uParam0);
			break;
		case 753226:
			func_581(uParam0);
			break;
		case 398686063:
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(1.685221E-20f, PLAYER::GET_PLAYER_PED(uParam0->f_1), 20f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			break;
	}
}

bool func_403(int iParam0)
{
	return Local_1288.f_520.f_1[iParam0] != 0;
}

bool func_404(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1288.f_520.f_1[iParam0], iParam1);
}

bool func_405(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_1288.f_520.f_10[iParam0], iParam1);
}

bool func_406(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
			if (!func_321(262144))
			{
				return false;
			}
			if (!func_181(2f, -1, 1) && !func_181(1.084202E-19f, -1, 1))
			{
				return false;
			}
			if (!func_181(2f, -1, 1) && func_181(3.85186E-34f, -1, 1))
			{
				return false;
			}
			func_582(3.232448E-11f, 0, 255, 0, 0);
			func_584(func_583(-8.839952E-30f, -2.940688E+24f), 1);
			func_585(1);
			return true;
		case 1:
			if (!func_181(2.524355E-29f, -1, 1))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

void func_407(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_28() != 0)
	{
		return;
	}
	if (func_586())
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
	if (func_587(iParam0, 1) < 0)
	{
		return;
	}
	if (func_587(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_587(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_587(iParam0, 1) /*4*/].f_2++;
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
	func_588(&Var0, uVar7);
}

void func_408(int iParam0, int iParam1)
{
	MISC::SET_BIT(&(Local_1288.f_520.f_10[iParam0]), iParam1);
}

int func_409(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/].f_3;
}

void func_410(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_409(iParam0);
	bVar3 = func_372(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_1288.f_179.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_16.f_27[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_1288.f_179.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_71[iParam1 /*38*/].f_4.f_2[iParam0] = -1f;
				}
				else
				{
					Local_71[iParam1 /*38*/].f_4.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_381(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_16.f_27[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_16.f_27[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_16.f_27[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_589(iVar1, 1f, 0);
					sVar0 = func_590(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_591(iVar1, sVar0, 1);
					}
				}
				if (func_573(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_574(iParam0))
					{
						if (func_573(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_1288.f_179.f_5), iParam0);
				if (bParam2)
				{
					func_592(iParam0);
				}
			}
		}
	}
}

bool func_411(int iParam0)
{
	if (iParam0 >= 6 && iParam0 <= 7)
	{
		return true;
	}
	return false;
}

void func_412(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_184(iParam0);
	func_593(iVar0, iParam1, 1, 0, 0, 0, 0, 0.5f, 1f, -1, 0, 0, 0, 0);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 46, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, 459146.8f);
	PED::SET_PED_CONFIG_FLAG(iVar0, 6, true);
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
	PED::SET_PED_CONFIG_FLAG(iVar0, 178, false);
	PED::_SET_PED_PROMPT_NAME_FROM_GXT_ENTRY(iVar0, -1.720142E-13f);
}

var func_413(int iParam0)
{
	return Local_1288.f_19.f_5[iParam0 /*2*/].f_1;
}

void func_414()
{
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "vic", func_184(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_1288.f_19.f_142, "rope", func_413(0), 0);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_1288.f_19.f_142, "WAKE_BOOL", false, false);
}

Vector3 func_415()
{
	return func_594();
}

float func_416()
{
	switch (func_219())
	{
		case 0:
			return -1028338483 /* Float: -90.4f */;
		case 1:
			return 0f;
		case 2:
			return 0f;
		case 3:
			return -1028390912 /* Float: -90f */;
		case 4:
			return 0f;
		case 5:
			return 0f;
		case 6:
			return -1028390912 /* Float: -90f */;
		case 7:
			return -1028390912 /* Float: -90f */;
		case 8:
			return 1115957363;
		default:
			break;
	}
	return 0f;
}

int func_417(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

void func_418(int iParam0, int iParam1, bool bParam2)
{
	func_417(iParam0, 0, 0);
	if (func_554(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != iParam1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, iParam1);
		}
	}
}

void func_419(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_595(iParam0);
	}
}

void func_420(char* sParam0)
{
	if (PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_DEACTIVATE_SWAP(sParam0);
	}
}

void func_421(char* sParam0)
{
	if (!PATHFIND::_NAVMESH_IS_SWAP_ACTIVE(sParam0))
	{
		PATHFIND::_NAVMESH_ACTIVATE_SWAP(sParam0);
	}
}

void func_422(int iParam0)
{
	if (!GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_ENABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_423(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_596(iParam0);
	}
}

void func_424(int iParam0)
{
	if (GRAPHICS::_IS_STATIC_VEG_MODIFIER_ENABLED(iParam0))
	{
		GRAPHICS::_DISABLE_STATIC_VEG_MODIFIER(iParam0);
	}
}

void func_425(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;

	iVar0 = 3490746;
	if (bParam4)
	{
		iVar0 |= 1;
	}
	if (bParam5)
	{
		iVar0 |= 72;
	}
	if (bParam6)
	{
		iVar0 |= 6;
	}
	if (bParam7)
	{
		iVar0 |= 524288;
	}
	if (bParam8)
	{
		iVar0 |= 131072;
	}
	MISC::CLEAR_AREA(vParam0, fParam3, iVar0);
}

int func_426(int iParam0)
{
	return iParam0;
}

bool func_427(int iParam0, var uParam1)
{
	uParam1->f_1 = 0;
	*uParam1 = func_597(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		uParam1->f_2 = func_492(PLAYER::PLAYER_PED_ID(), *uParam1, 1, 1);
		return true;
	}
	return false;
}

void func_428(var uParam0, int iParam1)
{
	PED::SET_PED_CONFIG_FLAG(iParam1, 168, true);
	EVENT::_SET_EVENT_TRACKER_FOR_PED(iParam1, "SpAggroDefault", 0);
	DECORATOR::DECOR_SET_BOOL(iParam1, "UsesTracker", true);
}

void func_429(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_452(&(Local_71[iVar0 /*38*/].f_15), 0, iParam0);
}

struct<2> func_430(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_598(iParam0);
	if (iVar4 == 0)
	{
		return Var2;
	}
	Var0 = { func_583(iParam1, iVar4) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return Var2;
	}
	return Var0;
}

void func_431()
{
	Local_1288.f_179.f_6 = 0;
	Local_1288.f_179.f_2 = 0;
	Local_1288.f_179.f_1 = -1;
}

void func_432()
{
	int iVar0;

	func_217(&(Local_1288.f_304.f_93), 2, 0);
	func_217(&(Local_1288.f_304.f_93), 1, 0);
	func_217(&(Local_1288.f_304.f_93), 4, 0);
	func_217(&(Local_1288.f_304.f_93), 5, 0);
	func_217(&(Local_1288.f_304.f_93), 8, -1);
	iVar0 = 0;
	while (iVar0 < 8)
	{
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_1288.f_304.f_66[iVar0]));
		SCRIPTS::_SET_ALL_PLAYER_BITS(&(Local_1288.f_304.f_84[iVar0]));
		SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_1288.f_304.f_75[iVar0]));
		func_599(iVar0);
		iVar0++;
	}
}

void func_433(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_1288.f_179.f_2 = (Local_1288.f_179.f_2 || Local_71[iParam0 /*38*/].f_4);
		Local_1288.f_179.f_1 = (Local_1288.f_179.f_1 && Local_71[iParam0 /*38*/].f_4);
		Local_1288.f_179.f_6 = (Local_1288.f_179.f_6 || Local_71[iParam0 /*38*/].f_4.f_1);
	}
}

void func_434(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 2);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 1);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 4);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 5);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 6);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 7);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 0);
		func_600(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 3);
		func_601(&(Local_1288.f_304.f_93), &(Local_71[iParam0 /*38*/].f_15), 8);
		iVar0 = 0;
		while (iVar0 < 8)
		{
			SCRIPTS::_0xFFDDF802279BE128(&(Local_71[iParam0 /*38*/].f_15.f_5[iVar0]), &(Local_1288.f_304.f_66[iVar0]), &(Local_1288.f_304.f_66[iVar0]));
			SCRIPTS::_0xFFDDF802279BE128(&(Local_71[iParam0 /*38*/].f_15.f_5[iVar0]), &(Local_1288.f_304.f_66[iVar0]), &(Local_1288.f_304.f_75[iVar0]));
			SCRIPTS::_0xE4ABE20DCE7C7CFE(&(Local_71[iParam0 /*38*/].f_15.f_5[iVar0]), &(Local_1288.f_304.f_66[iVar0]), &(Local_1288.f_304.f_84[iVar0]));
			func_602(func_426(iVar0), iParam0);
			iVar0++;
		}
	}
}

int func_435(int iParam0)
{
	return iParam0;
}

int func_436(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_71[iParam3 /*38*/].f_4.f_2[iParam2] = fVar0;
	if (fVar0 > Local_1288.f_179.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_437(var uParam0)
{
	func_603(uParam0, 0f);
}

bool func_438(var uParam0)
{
	return func_604(*uParam0, 1);
}

bool func_439(var uParam0, float fParam1)
{
	if (!func_438(uParam0))
	{
		return false;
	}
	if (func_605(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_440(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_441(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];
	struct<2> Var12;
	vector3 vVar22;
	int iVar26;

	iVar0 = iParam0;
	iVar1 = iVar0;
	iVar2 = func_184(iVar1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return true;
	}
	if (func_181(2048, -1, 1))
	{
		return false;
	}
	switch (iVar1)
	{
		case 6:
			if (Local_16.f_7.f_12 < 2)
			{
				return false;
			}
			break;
		case 7:
			if (Local_16.f_7.f_12 < 4)
			{
				return false;
			}
			break;
	}
	if (!func_240(Local_16.f_7.f_6[1]))
	{
		return false;
	}
	iVar3 = func_393(Local_16.f_7.f_6[1]);
	if (iVar3 < 30000)
	{
		return false;
	}
	StringCopy(&cVar4, func_606(iVar0), 64);
	Var12 = -1;
	Var12 = 44;
	Var12.f_1 = { func_594() };
	vVar22.f_3 = -1;
	iVar26 = func_607(cVar4, &Var12, &vVar22);
	switch (iVar26)
	{
		case 0:
			return false;
		case 2:
			if (!func_389(512))
			{
				func_390(1024);
			}
			return false;
		case 1:
			func_390(512);
			func_114(iVar1, vVar22, 0f, 1);
			return true;
	}
	return false;
}

void func_442(int iParam0, int iParam1)
{
	func_221(&(Local_1288.f_179.f_7[iParam0 /*11*/].f_2), iParam1);
}

bool func_443(int iParam0, int iParam1)
{
	if (!func_372(iParam1, 0))
	{
		if (!func_216(&iParam1))
		{
			return false;
		}
	}
	return func_178(Local_71[iParam1 /*38*/].f_4, iParam0);
}

void func_444(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_220(&(Local_71[iVar0 /*38*/].f_4), iParam0);
}

void func_445(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_221(&(Local_71[iVar0 /*38*/].f_4), iParam0);
}

void func_446()
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
	if (!func_216(&iVar15))
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
	while (iVar0 < 8)
	{
		iVar14 = func_426(iVar0);
		if (!func_447(iVar14))
		{
		}
		else if (!func_448(iVar14, &Var1))
		{
		}
		else
		{
			if (!ENTITY::IS_ENTITY_DEAD(Var1) && MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(Var1, true, false), 4f, true))
			{
				MISC::SET_BIT(&(Local_1288.f_304.f_65), iVar14);
			}
			if (func_464(iVar14, iVar15))
			{
			}
			else if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Var1, iVar17, false, false))
			{
				func_608(iVar14);
				func_609(iVar14);
			}
		}
		iVar0++;
	}
}

bool func_447(int iParam0)
{
	return !func_450(&(Local_1288.f_304.f_93), 5, iParam0);
}

bool func_448(int iParam0, var uParam1)
{
	if (!MISC::IS_BIT_SET(Local_1288.f_304.f_202, iParam0))
	{
		return false;
	}
	*uParam1 = Local_1288.f_304.f_97[iParam0 /*13*/];
	uParam1->f_1 = Local_1288.f_304.f_97[iParam0 /*13*/].f_1;
	uParam1->f_2 = Local_1288.f_304.f_97[iParam0 /*13*/].f_2;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	return true;
}

bool func_449(var uParam0, int iParam1)
{
	int iVar0;
	var uVar1;

	if (!func_610(iParam1))
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
	if (func_611(*uParam0, &(Local_1288.f_304.f_32), &uVar1, uParam0->f_2))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), *uParam0))
	{
		return true;
	}
	return false;
}

bool func_450(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (iParam2 < 0 || iParam2 >= 10)
	{
		return false;
	}
	if (!func_373(iParam1, &Var0))
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

int func_451(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_373(iParam1, &Var0))
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

int func_452(var uParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_373(iParam1, &Var0))
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

void func_453(int iParam0)
{
}

bool func_454(int iParam0)
{
	return func_450(&(Local_1288.f_304.f_93), 4, iParam0);
}

bool func_455(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return false;
	}
	return func_450(&(Local_71[iVar0 /*38*/].f_15), 4, iParam0);
}

bool func_456(int iParam0)
{
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_1288.f_304.f_75[iParam0]));
}

void func_457(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_451(&(Local_71[iVar0 /*38*/].f_15), 4, iParam0);
}

bool func_458(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return false;
	}
	return SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(Local_71[iVar0 /*38*/].f_15.f_5[iParam0]));
}

void func_459(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&(Local_71[iVar0 /*38*/].f_15.f_5[iParam0]));
}

bool func_460(int iParam0)
{
	return func_450(&(Local_1288.f_304.f_93), 6, iParam0);
}

bool func_461(int iParam0)
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

bool func_462(int iParam0, int iParam1)
{
	if (!func_372(iParam1, 0))
	{
		if (!func_216(&iParam1))
		{
			return false;
		}
	}
	return func_450(&(Local_71[iParam1 /*38*/].f_15), 1, iParam0);
}

bool func_463(int iParam0)
{
	int iVar0;

	iVar0 = func_612(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_387())
	{
		return true;
	}
	return false;
}

bool func_464(int iParam0, int iParam1)
{
	if (!func_372(iParam1, 0))
	{
		if (!func_216(&iParam1))
		{
			return false;
		}
	}
	if (!func_613(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
	{
		return false;
	}
	return func_450(&(Local_71[iParam1 /*38*/].f_15), 3, iParam0);
}

bool func_465(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_614(uParam2, 1, iVar0);
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
			if (func_615(iParam0, uParam2))
			{
				*iParam3 = 128;
				func_616(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_617(iParam0, uParam2))
				{
					*iParam3 = 8;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
				else if (func_618(iParam0, iParam1, uParam2))
				{
					*iParam3 = 8;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_619(iParam0, uParam2))
				{
					*iParam3 = 64;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_620(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*iParam3 = 16384;
				func_616(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_621(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_622(Global_33, iParam0, uParam2))
					{
						*iParam3 = 4;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_623(Global_33, iParam0, uParam2))
					{
						*iParam3 = 256;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_624(Global_33, iParam0, uParam2, 0))
				{
					*iParam3 = 16;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (func_624(Global_33, iParam0, uParam2, 1))
			{
				*iParam3 = 16;
				func_616(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_625(iParam0, uParam2))
				{
					*iParam3 = 32;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_626(&iParam0, uParam2))
				{
					*iParam3 = 4096;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_627(uParam2, 4000))
				{
					if ((func_628(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_629(uParam2, iParam0)) && func_630(uParam2, iParam0))
					{
						*iParam3 = 2;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_628(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_629(uParam2, iParam0)) && func_630(uParam2, iParam0))
				{
					*iParam3 = 2;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_631(iParam0, Global_1940186.f_35))
					{
						func_632();
						*iParam3 = 2;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_633(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_634() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_632();
						*iParam3 = 2;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_635())
				{
					if (func_631(iParam0, Global_1940186.f_36))
					{
						func_632();
						*iParam3 = 2;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_636(uParam2, iParam0))
			{
				*iParam3 = 1024;
				func_616(iParam0, uParam2, *iParam3);
				return true;
			}
		}
		if (func_637(uParam2, iParam0))
		{
			*iParam3 = 1048576;
			func_616(iParam0, uParam2, *iParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_638(iParam0, iParam1, uParam2))
				{
					*iParam3 = 2048;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_639(iParam0, uParam2))
					{
						*iParam3 = 8192;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_640(iParam0, uParam2))
				{
					*iParam3 = 32768;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_641(uParam2, 4000))
				{
					if (func_642(&iParam0, uParam2))
					{
						*iParam3 = 512;
						func_616(iParam0, uParam2, *iParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_643(iParam0, uParam2))
				{
					*iParam3 = 65536;
					uParam2->f_5 = 0;
					func_616(iParam0, uParam2, *iParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_644(uParam2, iParam0))
			{
				*iParam3 = 1;
				func_616(iParam0, uParam2, *iParam3);
				return true;
			}
		}
	}
	return false;
}

int func_466(int iParam0, int iParam1, int iParam2)
{
	var uVar0;
	int iVar4;

	if (!func_645(iParam0, iParam1, iParam2, 0))
	{
		return 0;
	}
	func_646(&iVar4, iParam1->f_12);
	func_648(Local_1288.f_179.f_7[iParam0 /*11*/], &uVar0, iParam1->f_3, func_647(iParam1), iParam1->f_9, iParam1->f_10, iParam1->f_11, 0, 0);
	return func_649(&iVar4, &uVar0);
}

bool func_467(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return false;
	}
	return func_450(&(Local_71[iVar0 /*38*/].f_15), 0, iParam0);
}

bool func_468(int iParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(Local_1288.f_304.f_64, iParam0))
	{
		return false;
	}
	if (func_178(Local_1288.f_304.f_2, 256))
	{
		return false;
	}
	if (iParam1->f_2 < 0f || iParam1->f_2 > IntToFloat(func_650(&(Local_1288.f_304))))
	{
		return false;
	}
	return true;
}

bool func_469(int iParam0, int iParam1, int iParam2)
{
	if (!func_468(iParam0, iParam1))
	{
		return false;
	}
	if (Local_71[iParam2 /*38*/].f_15.f_4 != 0 && NETWORK::GET_TIME_DIFFERENCE(Local_71[iParam2 /*38*/].f_15.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) <= 3000)
	{
		return true;
	}
	return false;
}

bool func_470(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;
	struct<15> Var3;

	iVar0 = func_597(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = func_612(iParam0);
	fVar2 = func_492(PLAYER::PLAYER_PED_ID(), iVar0, 1, 1);
	if (iParam1 == 256 && fVar2 > 1109393408)
	{
		return false;
	}
	switch (iVar1)
	{
		case 0:
			switch (iParam1)
			{
				case 2:
					if (!PED::IS_PED_INJURED(iVar0))
					{
						func_323(3.85186E-34f);
					}
					else
					{
						func_323(2.524355E-29f);
					}
					if (!func_500(8388608))
					{
						if (func_389(256))
						{
							if ((func_502(func_514()) || func_502(func_503())) || func_502(func_501()))
							{
								return false;
							}
							func_510(8388608);
						}
					}
					return false;
				case 2048:
					if (!func_500(1048576))
					{
						if (func_389(256))
						{
							if ((func_502(func_501()) || func_502(func_503())) || func_502(func_504()))
							{
								return false;
							}
							func_510(1048576);
						}
					}
					return false;
				case 8:
					if (!func_500(2097152))
					{
						if (func_389(256) && !func_321(262144))
						{
							if ((func_502(func_514()) || func_502(func_503())) || func_502(func_504()))
							{
								return false;
							}
							func_510(2097152);
						}
					}
					return false;
				case 4:
				case 256:
					if (func_218() != 0)
					{
						if (!func_500(4194304))
						{
							if (func_389(256))
							{
								if ((func_502(func_514()) || func_502(func_504())) || func_502(func_501()))
								{
									return false;
								}
								if (iParam1 == 256 && fVar2 > 1106247680)
								{
									return false;
								}
								func_510(4194304);
							}
						}
					}
					return false;
				default:
					break;
			}
			Jump @677; //curOff = 559
			if (!func_278())
			{
				func_521();
			}
			func_486();
			if (!func_387())
			{
				func_395(1);
			}
			if (!func_324(512))
			{
				Var3.f_10 = 255;
				Var3 = { func_651(1.263173E-24f) };
				func_652(&Var3);
				func_323(512);
			}
			if (func_502(func_519()))
			{
				func_512(func_519());
			}
			if (iParam1 != 0)
			{
				func_323(1.084202E-19f);
			}
			return true;
			return false;
		}

void func_471(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_452(&(Local_71[iVar0 /*38*/].f_15), 1, iParam0);
	if (bParam1)
	{
		Local_71[iVar0 /*38*/].f_15.f_14[iParam0] = NETWORK::GET_NETWORK_TIME_ACCURATE();
	}
}

bool func_472(int iParam0)
{
	return func_450(&(Local_1288.f_304.f_93), 1, iParam0);
}

bool func_473(int iParam0, int iParam1)
{
	if (!func_372(iParam1, 0))
	{
		if (!func_216(&iParam1))
		{
			return false;
		}
	}
	return func_450(&(Local_71[iParam1 /*38*/].f_15), 2, iParam0);
}

bool func_474(int iParam0)
{
	return true;
}

void func_475(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_597(iParam0);
	iVar1 = func_612(iParam0);
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
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			TASK::TASK_COMBAT_HATED_TARGETS(iVar0, -1f);
			break;
		case 0:
			break;
	}
}

void func_476(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_452(&(Local_71[iVar0 /*38*/].f_15), 2, iParam0);
}

bool func_477(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_ALL_PLAYER_BITS(&uVar0);
	SCRIPTS::_0x64F765D9A1F8F02C(&uVar0, &(Local_1288.f_304.f_84[iParam0]), &uVar0);
	return !SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uVar0);
}

bool func_478(int iParam0, var uParam1, int iParam2, var uParam3)
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

bool func_479(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Local_1288.f_304.f_66[iParam0]), iParam1);
}

bool func_480(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	iVar0 = func_597(iParam0);
	iVar1 = func_612(iParam0);
	switch (iVar1)
	{
		case 0:
			break;
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			PED::REGISTER_TARGET(iVar0, iParam3, true);
			break;
	}
	return true;
}

void func_481(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return;
	}
	if (!func_216(&iVar0))
	{
		return;
	}
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Local_71[iVar0 /*38*/].f_15.f_5[iParam0]), iParam1);
}

bool func_482()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_483(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_653(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_484(int iParam0, bool bParam1, bool bParam2)
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

float func_485()
{
	return 1094713344 /* Float: 12f */;
}

void func_486()
{
	if (!func_64(2))
	{
		return;
	}
	func_143(8);
}

void func_487()
{
	int iVar0;

	if (!func_324(1024) && !func_324(8))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1288.f_179.f_7)
	{
		if (!func_185(iVar0))
		{
		}
		else if (func_411(iVar0))
		{
			if (!func_389(512))
			{
			}
			else
			{
				func_654(iVar0, 4.085619E-09f, 3.959886E-05f, 1);
			}
			iVar0++;
		}
	}
}

void func_488()
{
	int iVar0;

	if (!func_324(131072))
	{
		func_655();
		return;
	}
	if (func_181(9.403955E-38f, -1, 1))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Local_1288.f_179.f_7)
	{
		if (!func_386(iVar0))
		{
		}
		else
		{
			func_170(iVar0);
		}
		iVar0++;
	}
	func_323(9.403955E-38f);
}

void func_489(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		MAP::ALLOW_SONAR_BLIPS(true);
		MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	}
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam0, iParam1);
}

void func_490(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 256);
	}
	else
	{
		func_221(uParam0, 256);
	}
}

void func_491(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			func_493();
			break;
		case 1:
			func_656(2, "NB_NBTIED_INTERACT_CUT", -7.016647E-20f, 3, 0);
			func_657(0);
			break;
		case 2:
			func_656(2, "NB_NBTIED_INTERACT_CUT", -7.016647E-20f, 3, 0);
			func_657(1);
			break;
		default:
			break;
	}
}

float func_492(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_493()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_658(Local_1288.f_19.f_145[iVar0]))
		{
		}
		else
		{
			func_659(&(Local_1288.f_19.f_145[iVar0]), 1, 1);
		}
		iVar0++;
	}
}

bool func_494(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, bParam1, bParam2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		return false;
	}
	return ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0) == func_184(iParam0);
}

bool func_495(int iParam0)
{
	return (Local_1288.f_19.f_8 && iParam0) != 0;
}

void func_496(int iParam0)
{
	if (func_495(iParam0))
	{
		return;
	}
	Local_1288.f_19.f_8 = (Local_1288.f_19.f_8 || iParam0);
}

void func_497(int iParam0)
{
	if (!func_495(iParam0))
	{
		return;
	}
	Local_1288.f_19.f_8 = (Local_1288.f_19.f_8 - (Local_1288.f_19.f_8 && iParam0));
}

Vector3 func_498()
{
	switch (func_219())
	{
		case 0:
			return 1153648551, -989861067, 1111324091;
		case 1:
			return 1152154379, -992737269, 1116065269;
		case 2:
			return 1154136250, -993113850, 1113600814;
		case 3:
			return 1153179338, -994590235, 1116652832;
		case 4:
			return 1149720883, -996262273, 1116143714;
		case 5:
			return 1143647498, -998764517, 1112660210;
		case 6:
			return 1144058611, -1000509558, 1111561659;
		case 7:
			return 1146873611, -1006206863, 1118842619;
		case 8:
			return 1149048287, -1010488767, 1119152251;
		default:
			break;
	}
	return vLocal_13;
}

int func_499(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	char* sVar0;

	if (func_178(uParam0->f_1, 1))
	{
		if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
		{
			if (func_178(uParam0->f_1, 16))
			{
				func_660(uParam0, vParam1, iParam4, fParam5);
			}
			else
			{
				func_661(uParam0, vParam1, iParam4, fParam5);
			}
		}
		return 1;
	}
	STREAMING::REQUEST_NAMED_PTFX_ASSET(-2.564408E+22f);
	if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(-2.564408E+22f))
	{
		if (!func_178(uParam0->f_1, 8))
		{
			if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(*uParam0))
			{
				GRAPHICS::USE_PARTICLE_FX_ASSET("scr_distance_smoke");
				sVar0 = "scr_campfire_distance_smoke_script";
				uParam0->f_2 = func_662(MISC::GET_DISTANCE_BETWEEN_COORDS(CAM::GET_GAMEPLAY_CAM_COORD(), vParam1, true));
				uParam0->f_3 = func_664(func_663(iParam4));
				if (uParam0->f_3 > 1092616192)
				{
					uParam0->f_3 = 1092616192; /* Float: 10f */
				}
				if (uParam0->f_2 > uParam0->f_3)
				{
					uParam0->f_2 = uParam0->f_3;
				}
				uParam0->f_5 = func_665(iParam4);
				uParam0->f_5 = BUILTIN::TO_FLOAT(MISC::GET_RANDOM_INT_IN_RANGE(BUILTIN::FLOOR((uParam0->f_5 - 1097859072)), BUILTIN::FLOOR((uParam0->f_5 + 1097859072))));
				uParam0->f_5 = (uParam0->f_5 / 1132396544);
				*uParam0 = GRAPHICS::START_PARTICLE_FX_LOOPED_AT_COORD(sVar0, vParam1, 0f, 0f, 0f, func_666(iParam4), false, false, false, false);
				uParam0->f_4 = MISC::GET_FRAME_COUNT();
				if (func_667(vParam1, 1) > (CAM::GET_GAMEPLAY_CAM_FOV() + 1097859072))
				{
					GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_3);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 1f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
					func_220(&(uParam0->f_1), 16);
				}
				else
				{
					GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_2);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, 0f);
					GRAPHICS::SET_PARTICLE_FX_LOOPED_COLOUR(*uParam0, uParam0->f_5, uParam0->f_5, uParam0->f_5, false);
				}
				func_220(&(uParam0->f_1), 1);
				return 1;
			}
		}
	}
	return 0;
}

bool func_500(int iParam0)
{
	return (Local_1288.f_19.f_152 && iParam0) != 0;
}

int func_501()
{
	switch (func_218())
	{
		case 0:
			return 24;
		case 1:
			return 25;
		default:
			break;
	}
	return 0;
}

bool func_502(int iParam0)
{
	var uVar0;

	if (!func_668(iParam0, &uVar0))
	{
		return false;
	}
	if (!func_669(&uVar0))
	{
		return false;
	}
	return true;
}

int func_503()
{
	switch (func_218())
	{
		case 1:
			return 26;
		default:
			break;
	}
	return 0;
}

int func_504()
{
	switch (func_218())
	{
		case 0:
			return 27;
		case 1:
			return 28;
		default:
			break;
	}
	return 0;
}

int func_505()
{
	switch (func_218())
	{
		case 0:
			return 8;
		case 1:
			return 9;
		default:
			break;
	}
	return 0;
}

int func_506()
{
	switch (func_218())
	{
		case 0:
			return 10;
		case 1:
			return 14;
		default:
			break;
	}
	return 0;
}

int func_507()
{
	switch (func_218())
	{
		case 0:
			return 11;
		case 1:
			return 15;
		default:
			break;
	}
	return 0;
}

int func_508()
{
	switch (func_218())
	{
		case 0:
			return 12;
		case 1:
			return 16;
		default:
			break;
	}
	return 0;
}

int func_509()
{
	switch (func_218())
	{
		case 0:
			return 13;
		case 1:
			return 17;
		default:
			break;
	}
	return 0;
}

void func_510(int iParam0)
{
	if (func_526(iParam0, -1, 1))
	{
		return;
	}
	Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1.f_1 = (Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1.f_1 || iParam0);
}

int func_511()
{
	switch (func_218())
	{
		case 0:
			return 18;
		case 1:
			return 19;
		default:
			break;
	}
	return 0;
}

void func_512(int iParam0)
{
	struct<15> Var0;

	Var0 = { func_651(753226) };
	Var0.f_11 = iParam0;
	func_652(&Var0);
}

int func_513()
{
	switch (func_218())
	{
		case 0:
			return 20;
		case 1:
			return 21;
		default:
			break;
	}
	return 0;
}

int func_514()
{
	switch (func_218())
	{
		case 0:
			return 22;
		case 1:
			return 23;
		default:
			break;
	}
	return 0;
}

void func_515(int iParam0, int iParam1, int iParam2)
{
	struct<15> Var0;

	Var0 = { func_651(1.225338E-09f) };
	Var0.f_11 = iParam0;
	Var0.f_12 = iParam1;
	Var0.f_13 = iParam2;
	func_652(&Var0);
}

void func_516()
{
	func_670(1, -3.768898E+29f);
	func_670(2, -0.03024206f);
	func_670(3, 3.892104E-09f);
	func_670(4, -0.03024206f);
	func_670(5, 3.892104E-09f);
}

void func_517(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	if (func_671(uParam0, iParam1, sParam2))
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

int func_518()
{
	return 1109393408 /* Float: 40f */;
}

int func_519()
{
	switch (func_218())
	{
		case 0:
			return 1;
		case 1:
			return 2;
		default:
			break;
	}
	return 0;
}

float func_520()
{
	return (func_527() + 1092616192);
}

void func_521()
{
	int iVar0;

	if (!func_128(32, 255))
	{
		func_672(Local_1288.f_1, Local_1288.f_3);
		if (!func_128(1024, 255))
		{
			func_673(Local_1288.f_1);
			func_145(1024);
		}
		iVar0 = func_330(Local_1288.f_1, Local_1288.f_2);
		func_576(iVar0);
		func_577(iVar0);
		func_143(2);
		func_674(Local_1288.f_9);
		func_675(Local_1288.f_1);
		func_676(Local_1288.f_1, Local_1288.f_2, Local_1288.f_3);
		if (func_677(Local_1288.f_1))
		{
			func_678(0, 3.031687E-09f);
			func_143(1024);
		}
		func_145(32);
	}
}

void func_522(int* iParam0)
{
	if (!MAP::DOES_BLIP_EXIST(*iParam0))
	{
		return;
	}
	MAP::REMOVE_BLIP(iParam0);
}

bool func_523(int iParam0, float fParam1)
{
	var uVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;

	if (func_324(8))
	{
		func_486();
		func_323(8);
		return true;
	}
	if (*fParam1 > func_527())
	{
		return false;
	}
	iVar6 = 0;
	iVar7 = 0;
	while (iVar7 < Local_1288.f_179.f_7)
	{
		if (!func_185(iVar7) || func_411(iVar7))
		{
		}
		else
		{
			uVar0[iVar6] = Local_1288.f_179.f_7[iVar7 /*11*/];
			iVar6++;
		}
		iVar7++;
	}
	iVar8 = func_679(*iParam0, &uVar0, &(Local_1288.f_19.f_140), &(Local_1288.f_19.f_141));
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar8))
	{
		return false;
	}
	TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, *iParam0, 0, -1f, -1f, -1f);
	func_680();
	func_517(&(Local_1288.f_19.f_42), func_184(3), "EXC_OPED1", 1);
	func_515(3, Local_1288.f_19.f_141, 9);
	Local_16.f_7.f_16 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(*iParam0);
	func_323(8);
	func_486();
	return true;
}

float func_524()
{
	return (func_527() + 5f);
}

void func_525(int iParam0)
{
	func_512(3);
	func_512(4);
	func_515(5, Local_1288.f_19.f_141, 0);
	func_394(&(Local_16.f_7.f_6[0]));
	func_323(16);
}

bool func_526(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (bParam2)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1)))
		{
			return false;
		}
	}
	return (Local_71[iParam1 /*38*/].f_1.f_1 && iParam0) != 0;
}

int func_527()
{
	return 1102053376 /* Float: 22f */;
}

void func_528(var uParam0, int iParam1)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	char* sVar9;

	switch (func_219())
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1153658567, -989861583, 1111343176 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1152192863, -992733046, 1117262474 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1154157450, -993094872, 1111990511 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1153125138, -994616474, 1116637688 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1149658455, -996246355, 1116637688 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1143654404, -998700796, 1112574140 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1144024660, -1000492236, 1111343176 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1146871956, -1006192197, 1118182500 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					vVar0 = { 1149125418, -1010627344, 1119008014 };
					vVar3 = { 0f, 0f, -1034543866 };
					vVar6 = { 1117682400, 1115944280, 1104558948 };
					sVar9 = "DEF_AREA_MAIN";
					break;
			}
			break;
	}
	func_681(uParam0, vVar0, vVar3, vVar6, sVar9);
}

int func_529(int iParam0)
{
	return iParam0;
}

void func_530(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (ENTITY::IS_ENTITY_DEAD(*iParam0))
	{
		return;
	}
	if (bParam5 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		return;
	}
	PED::SET_PED_DEFENSIVE_AREA_VOLUME(*iParam0, *uParam1, bParam3, bParam4, false);
	if (bParam2)
	{
		PED::SET_PED_COMBAT_MOVEMENT(*iParam0, 2);
	}
}

bool func_531(int iParam0)
{
	return (Local_1288.f_19.f_151 && iParam0) != 0;
}

int func_532()
{
	int iVar0;
	int iVar1;

	if (!func_181(2097152, -1, 1))
	{
		return -1;
	}
	if (func_181(4194304, -1, 1))
	{
		return Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1.f_2;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_682(Local_1288.f_19.f_145[iVar0], 1))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(NETWORK::PARTICIPANT_ID_TO_INT());
			Local_16.f_7.f_17 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
			Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*38*/].f_1.f_2 = iVar0;
			func_323(4194304);
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_533()
{
	int iVar0;

	if (!func_389(4))
	{
		func_391(&(Local_16.f_7.f_6[3]));
		func_390(4);
		return;
	}
	if (!func_240(Local_16.f_7.f_6[3]))
	{
		func_391(&(Local_16.f_7.f_6[3]));
	}
	iVar0 = func_393(Local_16.f_7.f_6[3]);
	if (iVar0 < 12000)
	{
		return;
	}
	switch (Local_1288.f_19.f_3)
	{
		case 0:
			if (func_683(32768))
			{
				func_684(1);
				func_394(&(Local_16.f_7.f_6[3]));
				func_392(4);
				return;
			}
			if (!func_685(32768))
			{
				return;
			}
			if (func_686(1))
			{
				return;
			}
			func_515(func_506(), 0, 0);
			func_510(32768);
			break;
		case 1:
			if (func_683(65536))
			{
				func_684(2);
				func_394(&(Local_16.f_7.f_6[3]));
				func_392(4);
				return;
			}
			if (!func_685(65536))
			{
				return;
			}
			if (func_686(1))
			{
				return;
			}
			func_515(func_507(), 0, 0);
			func_510(65536);
			break;
		case 2:
			if (func_683(131072))
			{
				func_684(3);
				func_394(&(Local_16.f_7.f_6[3]));
				func_392(4);
				return;
			}
			if (!func_685(131072))
			{
				return;
			}
			if (func_686(1))
			{
				return;
			}
			func_515(func_508(), 0, 0);
			func_510(131072);
			break;
		case 3:
			if (func_683(262144))
			{
				func_684(4);
				func_394(&(Local_16.f_7.f_6[3]));
				func_392(4);
				return;
			}
			if (!func_685(262144))
			{
				return;
			}
			if (func_686(1))
			{
				return;
			}
			func_515(func_509(), 0, 0);
			func_510(262144);
			break;
	}
}

bool func_534(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam2 && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return false;
	}
	if (!bParam3 && func_687(iParam0, iParam1))
	{
		return false;
	}
	if (iParam1 == -2.815016E-26f && PED::IS_PED_BEING_JACKED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_535(int iParam0)
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

Vector3 func_536(int iParam0)
{
	switch (func_219())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 1153654702, -989884826, 1111579689 /* Float: 48.34f */;
				case 2:
					return 1153654702, -989884826, 1111579689 /* Float: 48.34f */;
				case 3:
					return 1153657405, -989876961, 1111579689 /* Float: 48.34f */;
				case 4:
					return 1153658470, -989877207, 1111579689 /* Float: 48.34f */;
				case 5:
					return 1153658470, -989877207, 1111579689 /* Float: 48.34f */;
				case 6:
					return 1153658470, -989877207, 1111579689 /* Float: 48.34f */;
				default:
					break;
			}
			return 1153654702, -989884826, 1111579689 /* Float: 48.34f */;
		case 1:
			switch (iParam0)
			{
				case 1:
					return 1152130908, -992743260, 1116190802 /* Float: 67.86f */;
				case 2:
					return 1152130908, -992743260, 1116190802 /* Float: 67.86f */;
				case 3:
					return 1152138527, -992745882, 1116190802 /* Float: 67.86f */;
				case 4:
					return 1152138527, -992747028, 1116190802 /* Float: 67.86f */;
				case 5:
					return 1152138527, -992747028, 1116190802 /* Float: 67.86f */;
				case 6:
					return 1152138527, -992747028, 1116190802 /* Float: 67.86f */;
				default:
					break;
			}
			return 1152130908, -992743260, 1116190802 /* Float: 67.86f */;
		case 2:
			switch (iParam0)
			{
				case 1:
					return 1154111406, -993119109, 1113857720 /* Float: 57.03f */;
				case 2:
					return 1154111406, -993119109, 1113857720 /* Float: 57.03f */;
				case 3:
					return 1154119025, -993121812, 1113857720 /* Float: 57.03f */;
				case 4:
					return 1154118943, -993122877, 1113857720 /* Float: 57.03f */;
				case 5:
					return 1154118943, -993122877, 1113857720 /* Float: 57.03f */;
				case 6:
					return 1154118943, -993122877, 1113857720 /* Float: 57.03f */;
				default:
					break;
			}
			return 1154111406, -993119109, 1113857720 /* Float: 57.03f */;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 1153184481, -994614804, 1116783247 /* Float: 72.38f */;
				case 2:
					return 1153184481, -994614804, 1116783247 /* Float: 72.38f */;
				case 3:
					return 1153187185, -994607186, 1116783247 /* Float: 72.38f */;
				case 4:
					return 1153188332, -994607268, 1116783247 /* Float: 72.38f */;
				case 5:
					return 1153188332, -994607268, 1116783247 /* Float: 72.38f */;
				case 6:
					return 1153188332, -994607268, 1116783247 /* Float: 72.38f */;
				default:
					break;
			}
			return 1153184481, -994614804, 1116783247 /* Float: 72.38f */;
		case 4:
			switch (iParam0)
			{
				case 1:
					return 1149695754, -996268032, 1116283863 /* Float: 68.57f */;
				case 2:
					return 1149695754, -996268032, 1116283863 /* Float: 68.57f */;
				case 3:
					return 1149703373, -996270653, 1116283863 /* Float: 68.57f */;
				case 4:
					return 1149703291, -996271800, 1116283863 /* Float: 68.57f */;
				case 5:
					return 1149703291, -996271800, 1116283863 /* Float: 68.57f */;
				case 6:
					return 1149703291, -996271800, 1116283863 /* Float: 68.57f */;
				default:
					break;
			}
			return 1149695754, -996268032, 1116283863 /* Float: 68.57f */;
		case 5:
			switch (iParam0)
			{
				case 1:
					return 1143597793, -998776340, 1112911380 /* Float: 53.42f */;
				case 2:
					return 1143597793, -998776340, 1112911380 /* Float: 53.42f */;
				case 3:
					return 1143612867, -998781583, 1112911380 /* Float: 53.42f */;
				case 4:
					return 1143612867, -998783877, 1112911380 /* Float: 53.42f */;
				case 5:
					return 1143612867, -998783877, 1112911380 /* Float: 53.42f */;
				case 6:
					return 1143612867, -998783877, 1112911380 /* Float: 53.42f */;
				default:
					break;
			}
			return 1143597793, -998776340, 1112911380 /* Float: 53.42f */;
		case 6:
			switch (iParam0)
			{
				case 1:
					return 1144070144 /* Float: 708.5f */, -1000559411, 1111820861 /* Float: 49.26f */;
				case 2:
					return 1144070144 /* Float: 708.5f */, -1000559411, 1111820861 /* Float: 49.26f */;
				case 3:
					return 1144067359, -1000544338, 1111820861 /* Float: 49.26f */;
				case 4:
					return 1144077681, -1000544338, 1111820861 /* Float: 49.26f */;
				case 5:
					return 1144077681, -1000544338, 1111820861 /* Float: 49.26f */;
				case 6:
					return 1144077681, -1000544338, 1111820861 /* Float: 49.26f */;
				default:
					break;
			}
			return 1144070144 /* Float: 708.5f */, -1000559411, 1111820861 /* Float: 49.26f */;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 1146885734, -1006256947, 1118966907 /* Float: 89.04f */;
				case 2:
					return 1146885734, -1006256947, 1118966907 /* Float: 89.04f */;
				case 3:
					return 1146891141, -1006241710, 1118966907 /* Float: 89.04f */;
				case 4:
					return 1146893435, -1006241874, 1118966907 /* Float: 89.04f */;
				case 5:
					return 1146893435, -1006241874, 1118966907 /* Float: 89.04f */;
				case 6:
					return 1146893435, -1006241874, 1118966907 /* Float: 89.04f */;
				default:
					break;
			}
			return 1146885734, -1006256947, 1118966907 /* Float: 89.04f */;
		case 8:
			switch (iParam0)
			{
				case 1:
					return 1149017457, -1010408161, 1119280169 /* Float: 91.43f */;
				case 2:
					return 1149017457, -1010408161, 1119280169 /* Float: 91.43f */;
				case 3:
					return 1149018604, -1010440274, 1119280169 /* Float: 91.43f */;
				case 4:
					return 1149016637, -1010441912, 1119280169 /* Float: 91.43f */;
				case 5:
					return 1149016637, -1010441912, 1119280169 /* Float: 91.43f */;
				case 6:
					return 1149016637, -1010441912, 1119280169 /* Float: 91.43f */;
				default:
					break;
			}
			return 1149018604, -1010440274, 1119280169 /* Float: 91.43f */;
	}
	return vLocal_13;
}

float func_537(int iParam0)
{
	switch (func_219())
	{
		case 0:
			switch (iParam0)
			{
				case 1:
					return 1125937971;
				case 2:
					return 1125937971;
				case 3:
					return 1118565827 /* Float: 85.98f */;
				case 4:
					return 1118565827 /* Float: 85.98f */;
				case 5:
					return 1118565827 /* Float: 85.98f */;
				case 6:
					return 1118565827 /* Float: 85.98f */;
				default:
					break;
			}
			return 1125937971;
		case 1:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
		case 2:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
		case 3:
			switch (iParam0)
			{
				case 1:
					return 1125964186;
				case 2:
					return 1125964186;
				case 3:
					return 1115404370 /* Float: 62.93f */;
				case 4:
					return 1118618255 /* Float: 86.38f */;
				case 5:
					return 1118618255 /* Float: 86.38f */;
				case 6:
					return 1118618255 /* Float: 86.38f */;
				default:
					break;
			}
			return 1125964186;
		case 4:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
		case 5:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
		case 6:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
		case 7:
			switch (iParam0)
			{
				case 1:
					return 1125964186;
				case 2:
					return 1125964186;
				case 3:
					return 1115404370 /* Float: 62.93f */;
				case 4:
					return 1118618255 /* Float: 86.38f */;
				case 5:
					return 1118618255 /* Float: 86.38f */;
				case 6:
					return 1118618255 /* Float: 86.38f */;
				default:
					break;
			}
			return 1125964186;
		case 8:
			switch (iParam0)
			{
				case 1:
					return -1025356595;
				case 2:
					return -1025356595;
				case 3:
					return 1125707284;
				case 4:
					return 1127244104;
				case 5:
					return 1127244104;
				case 6:
					return 1127244104;
				default:
					break;
			}
			return -1025356595;
	}
	return 0f;
}

void func_538(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
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

bool func_539(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	float fVar0;
	float fVar1;

	fVar0 = func_288(iParam0, vParam1, 1);
	if (fVar0 <= fParam4)
	{
		return true;
	}
	if (bParam5)
	{
		if (!func_688(iParam0, 2.066914E+13f, 0))
		{
			if (bParam6)
			{
				fVar1 = 1f;
				if (fVar0 <= fVar1)
				{
					return true;
				}
				else
				{
					return false;
				}
			}
			else
			{
				return true;
			}
		}
	}
	return false;
}

bool func_540(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "CUT_FREE_PLYR_F", 24);
			break;
		case 2:
			StringCopy(sParam1, "CUT_FREE_PLYR_F_FEMALE", 24);
			break;
		case 3:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_F", 24);
			break;
		case 4:
			StringCopy(sParam1, "CUT_FREE_PLYR_L", 24);
			break;
		case 5:
			StringCopy(sParam1, "CUT_FREE_PLYR_L_FEMALE", 24);
			break;
		case 6:
			StringCopy(sParam1, "PB_CUT_FREE_DEAD_L", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_541(int iParam0, char* sParam1, float fParam2, int iParam3)
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

float func_542(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1050287276 /* Float: 0.301f */;
		case 2:
			return 1050334252;
		case 4:
			return 1050267143;
		case 5:
			return 1050267143;
		default:
			break;
	}
	return 1050287276 /* Float: 0.301f */;
	return 1050287276 /* Float: 0.301f */;
}

void func_543()
{
	int iVar0;

	if (!func_324(2f))
	{
		return;
	}
	if (func_324(8192))
	{
		return;
	}
	iVar0 = func_184(0);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	func_689(iVar0, 1);
	func_323(8192);
}

int func_544(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_690(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

int func_545(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_690(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_546(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_360(&Var1, iParam0))
	{
		iVar0 = ((func_691() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_547(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_548(int iParam0, int iParam1)
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

void func_549(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 16, Global_1051645.f_16[15]);
	func_692(uParam0, uParam0->f_1);
}

struct<2> func_550(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_551(int iParam0, int iParam1)
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

bool func_552(int iParam0)
{
	int iVar0;

	iVar0 = func_693(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_553(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

bool func_554(int iParam0)
{
	if (func_694(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_555()
{
	return true;
}

void func_556(bool bParam0, int iParam1, int iParam2)
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
		func_350(bParam0, iVar0);
		iVar0++;
	}
}

void func_557(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 16384);
	}
	else
	{
		func_220(&(uParam0->f_2), 16384);
	}
}

void func_558(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 2048);
	}
	else
	{
		func_220(&(uParam0->f_2), 2048);
	}
}

void func_559(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 16);
	}
	else
	{
		func_221(uParam0, 1.504633E-36f);
		func_221(uParam0, 16);
	}
}

void func_560(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_221(&(uParam0->f_2), 128);
	}
	else
	{
		func_220(&(uParam0->f_2), 128);
	}
}

void func_561(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_220(uParam0, 2.524355E-29f);
	}
	else
	{
		func_221(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_220(uParam0, 2f);
	}
	else
	{
		func_221(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_220(uParam0, 1.084202E-19f);
	}
	else
	{
		func_221(uParam0, 1.084202E-19f);
	}
}

float func_562(var uParam0)
{
	return uParam0->f_26;
}

void func_563(var uParam0, float fParam1)
{
	uParam0->f_27 = fParam1;
}

void func_564(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 1);
	}
	else
	{
		func_221(uParam0, 1);
	}
}

void func_565(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 512);
	}
	else
	{
		func_221(uParam0, 512);
	}
}

void func_566(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 2);
	}
	else
	{
		func_221(uParam0, 2);
	}
}

void func_567(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 8);
	}
	else
	{
		func_221(uParam0, 8);
	}
}

int func_568(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/].f_4;
}

float func_569(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_570(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/].f_6;
}

bool func_571(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_263(iParam1))
	{
		return false;
	}
	iVar0 = func_695(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_572(int iParam0, bool bParam1)
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

bool func_573(int iParam0)
{
	return func_172(iParam0, 32);
}

bool func_574(int iParam0)
{
	return func_172(iParam0, 64);
}

Vector3 func_575(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_576(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<29> Var2;
	int iVar33;
	struct<2> Var34;
	int iVar36;
	struct<2> Var37;

	if (func_125(Global_1260791[iParam0 /*4*/]))
	{
		return;
	}
	func_696(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_32(&Var2, iVar0, iVar1, -1, 255);
	func_126(&(Global_1260791[iParam0 /*4*/]));
	iVar33 = Var2.f_5;
	if (iVar33 != 0)
	{
		Var34 = { func_550(2.053409E-33f) };
		STATS::STAT_ID_SET_INT(&Var34, iVar33, true);
		Var34 = { func_550(3.713784E-31f) };
		STATS::STAT_ID_SET_INT(&Var34, Global_1295619.f_16, true);
	}
	iVar36 = Var2.f_9;
	if (iVar36 != 0)
	{
		Var37 = { func_550(5.118777E-05f) };
		STATS::STAT_ID_SET_INT(&Var37, iVar36, true);
		Var37 = { func_550(5.331718E-07f) };
		STATS::STAT_ID_SET_INT(&Var37, Global_1295619.f_16, true);
	}
}

void func_577(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_549(&Var0);
}

void func_578(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_697(iParam0, iParam1))
	{
		return;
	}
	iVar0 = func_698(iParam1);
	func_699(iVar0, iParam0);
}

int func_579(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_700(vVar3, vVar6);
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
	if (func_701(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

void func_580(var uParam0)
{
	func_702(uParam0->f_11, uParam0->f_12, uParam0->f_13, 0, 0, 0);
}

void func_581(var uParam0)
{
	func_703(uParam0->f_11, 0);
}

int func_582(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_704(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

struct<2> func_583(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_584(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_585(bool bParam0)
{
	if (!func_64(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_64(256))
		{
			func_176(Local_1288.f_18, 0);
			func_143(256);
		}
	}
	func_143(16);
}

bool func_586()
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

int func_587(int iParam0, int iParam1)
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

void func_588(var uParam0, var uParam1)
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

void func_589(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_705(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_590(int iParam0)
{
	return Local_1288.f_179.f_7[iParam0 /*11*/].f_10;
}

void func_591(int iParam0, char* sParam1, bool bParam2)
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

void func_592(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_184(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	func_412(iVar0, -1.91869E+32f);
	TASK::TASK_COMBAT_HATED_TARGETS(iVar1, -1f);
}

bool func_593(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, int iParam9, bool bParam10, bool bParam11, bool bParam12, bool bParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
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
	switch (iParam1)
	{
		case joaat("GROUP_SNIPER"):
		case joaat("GROUP_REVOLVER"):
		case joaat("GROUP_REPEATER"):
		case joaat("GROUP_PISTOL"):
		case joaat("GROUP_SHOTGUN"):
		case joaat("GROUP_RIFLE"):
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
			break;
		default:
			if (!WEAPON::IS_WEAPON_VALID(iParam1))
			{
				return iParam1;
			}
			bVar0 = iParam1;
			if ((WEAPON::IS_WEAPON_A_GUN(bVar0) || WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0)) && PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam0) == 0.0589133f)
			{
				StringCopy(&cVar5, WEAPON::_GET_WEAPON_NAME(bVar0), 128);
				iVar2 = WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(ENTITY::GET_ENTITY_MODEL(iParam0));
				if (!Global_26688 && MISC::_DOES_STRING_EXIST_IN_STRING(&cVar5, "_DUALWIELD"))
				{
					StringCopy(&cVar5, HUD::_0x806862E5D266CF38(&cVar5, 0, (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar5) - HUD::GET_LENGTH_OF_LITERAL_STRING("_DUALWIELD"))), 128);
					iVar3 = MISC::GET_HASH_KEY(&cVar5);
					if (func_706(iVar3) && WEAPON::_0xF252A85B8F3F8C58(iVar2, iVar3))
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
							if (func_706(bVar4) && bVar4 != bVar0)
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
	if (func_28() == -1 && !func_707(bVar0))
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
			bVar0 = WEAPON::_0xF8204EF17410BF43(iParam1, fParam7, fParam8, 0);
			if (!WEAPON::IS_WEAPON_VALID(bVar0))
			{
				bVar0 = -3.273909E-18f;
			}
		}
	}
	if (bVar0 == -3.273909E-18f && iParam1 == -3.273909E-18f)
	{
		return bVar0;
	}
	else if (bVar0 == -3.273909E-18f)
	{
		switch (iParam1)
		{
			case joaat("GROUP_REVOLVER"):
			case joaat("GROUP_PISTOL"):
				bVar0 = 2.574461E-25f;
				break;
			case joaat("GROUP_SNIPER"):
			case joaat("GROUP_REPEATER"):
			case joaat("GROUP_SHOTGUN"):
			case joaat("GROUP_RIFLE"):
				if (func_707(-1.91869E+32f))
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
		if (iParam0 != Global_33 && func_706(bVar0))
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
		func_708(bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 6.028273E-12f, 0);
	}
	else if (bParam13)
	{
	}
	else if (!bParam13)
	{
		fVar25 = 0f;
		func_709(iParam0, &bVar0, &fVar25);
		if (bVar0 == -4.550719E+16f || bVar0 == 1.654772E-14f)
		{
			fVar25 = 0f;
		}
		bVar0 = WEAPON::GIVE_WEAPON_TO_PED(iParam0, bVar0, iParam9, bParam2, bParam5, bParam4, bParam11, 0.5f, 1f, 6.028273E-12f, bVar22, fVar25, false);
	}
	if (iParam0 != Global_33)
	{
		if (func_710(bVar0))
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

Vector3 func_594()
{
	return Local_1288.f_15;
}

int func_595(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_711())
	{
		return 0;
	}
	STREAMING::REQUEST_IPL_HASH(iParam0);
	return 0;
}

int func_596(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_711())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL_HASH(iParam0);
	return 0;
}

var func_597(int iParam0)
{
	return func_345(iParam0);
}

int func_598(int iParam0)
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

void func_599(int iParam0)
{
	if (!func_427(func_426(iParam0), &(Local_1288.f_304.f_97[iParam0 /*13*/])))
	{
		MISC::CLEAR_BIT(&(Local_1288.f_304.f_202), iParam0);
		return;
	}
	MISC::SET_BIT(&(Local_1288.f_304.f_202), iParam0);
}

int func_600(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_373(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_374(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_374(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] || (*uParam1)[Var0]) && iVar4));
	iVar4 = func_374(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] || (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

int func_601(var uParam0, var uParam1, int iParam2)
{
	struct<4> Var0;
	int iVar4;

	if (!func_373(iParam2, &Var0))
	{
		return 0;
	}
	if (Var0 == Var0.f_1)
	{
		iVar4 = func_374(Var0.f_2, 10);
		(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
		return 1;
	}
	iVar4 = func_374(Var0.f_2, (32 - Var0.f_2));
	(*uParam0)[Var0] = (((*uParam0)[Var0] && iVar4 ^ -1) || (((*uParam0)[Var0] && (*uParam1)[Var0]) && iVar4));
	iVar4 = func_374(0, Var0.f_3 + 1);
	(*uParam0)[Var0.f_1] = (((*uParam0)[Var0.f_1] && iVar4 ^ -1) || (((*uParam0)[Var0.f_1] && (*uParam1)[Var0.f_1]) && iVar4));
	return 1;
}

void func_602(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	if (func_450(&(Local_71[iParam1 /*38*/].f_15), 1, iParam0))
	{
		if (Local_71[iParam1 /*38*/].f_15.f_14[iParam0] == 0)
		{
			return;
		}
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam1));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Local_16.f_36.f_1[iParam0]))
		{
			if (Local_16.f_36.f_1[iParam0] == iVar0)
			{
				return;
			}
		}
		if (Local_16.f_36.f_10[iParam0] == 0 || NETWORK::IS_TIME_MORE_THAN(Local_71[iParam1 /*38*/].f_15.f_14[iParam0], Local_16.f_36.f_10[iParam0]))
		{
			Local_16.f_36.f_1[iParam0] = iVar0;
			Local_16.f_36.f_10[iParam0] = Local_71[iParam1 /*38*/].f_15.f_14[iParam0];
		}
	}
}

void func_603(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_712() - fParam1);
	func_713(uParam0, 1);
	func_714(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_604(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_605(var uParam0)
{
	if (!func_438(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_715(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_712() - uParam0->f_1);
}

char* func_606(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_607(char[32] cParam0, var uParam8, var uParam9)
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
	iVar12 = func_716(&Var1);
	if (iVar12 != -1)
	{
		switch (Global_1264291[iVar12 /*29*/])
		{
			case 4:
				*uParam9 = { Global_1264291[iVar12 /*29*/].f_22 };
				func_717(iVar12);
				return 2;
			case 3:
				*uParam9 = { Global_1264291[iVar12 /*29*/].f_22 };
				func_717(iVar12);
				return 1;
		}
	}
	else
	{
		if (func_718())
		{
			return 0;
		}
		if (!func_719(&Var1))
		{
			return 0;
		}
		if (!func_720(uParam8))
		{
			uParam9->f_3 = 2;
			return 2;
		}
		func_721(uParam8, &Var1);
	}
	return 0;
}

void func_608(int iParam0)
{
	int iVar0;

	if (!func_216(&iVar0))
	{
		return;
	}
	func_452(&(Local_71[iVar0 /*38*/].f_15), 3, iParam0);
}

void func_609(int iParam0)
{
}

bool func_610(int iParam0)
{
	return func_450(&(Local_1288.f_304.f_93), 7, iParam0);
}

bool func_611(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_614(uParam1, 0, iVar0);
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
				if (func_627(uParam1, 4000))
				{
					if ((func_628(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_629(uParam1, iParam0)) && func_630(uParam1, iParam0))
					{
						func_632();
						*uParam2 = 2;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_627(uParam1, 4000))
				{
					if ((func_628(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_629(uParam1, iParam0)) && func_630(uParam1, iParam0))
					{
						func_632();
						*uParam2 = 2;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_631(iParam0, Global_1940186.f_35))
					{
						func_632();
						*uParam2 = 2;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_635())
				{
					if (func_631(iParam0, Global_1940186.f_36))
					{
						func_632();
						*uParam2 = 2;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_621(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_622(Global_33, iParam0, uParam1))
					{
						func_632();
						*uParam2 = 4;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_623(Global_33, iParam0, uParam1))
					{
						func_632();
						*uParam2 = 256;
						func_616(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_722(iParam0, uParam1))
			{
				func_632();
				*uParam2 = 131072;
				func_616(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_723(iParam0, uParam1))
			{
				func_632();
				*uParam2 = 262144;
				func_616(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

int func_612(int iParam0)
{
	return iParam0;
}

bool func_613(int iParam0)
{
	if (iParam0 == 255)
	{
		return false;
	}
	return NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iParam0);
}

void func_614(var uParam0, bool bParam1, int iParam2)
{
	func_724(iParam2);
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
		uParam0->f_14 = func_725(0);
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
							func_220(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_726(1, 1))
						{
							func_220(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_726(1, 1) || *uParam0 & 8192 != 0))
				{
					func_221(uParam0, 9.403955E-38f);
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
			if (func_727(uParam0))
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
	func_728(uParam0);
}

bool func_615(int iParam0, var uParam1)
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
			if (!func_729(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_730(iParam0, iVar2) <= func_731(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_616(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_732(iParam2, 1, 1, 1, 0))
	{
		func_220(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_733(uParam1, 1);
	func_734();
}

bool func_617(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_735(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_736(uParam1);
			if (func_737(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_738(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_733(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_739(uParam1))
						{
							func_733(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_618(int iParam0, int iParam1, var uParam2)
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
	if (func_740(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_736(uParam2);
		if (func_737(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_738(uParam2)
				{
					func_733(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_619(int iParam0, var uParam1)
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
	if (func_729(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_738(uParam1)
		{
			fVar3 = func_736(uParam1);
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

int func_620(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_741(bParam1, bParam2, bParam3);
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

bool func_621(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_634();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_622(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_742(uParam2);
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
			if (func_630(uParam2, iParam1))
			{
				func_733(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_623(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_650(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_630(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_733(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_624(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_743(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_733(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_733(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_744(iParam1, vVar0, vVar4))
					{
						func_733(uParam2, 1);
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
					func_733(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_744(iParam1, vVar0, vVar7))
					{
						func_733(uParam2, 1);
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

bool func_625(int iParam0, var uParam1)
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
		if (!func_729(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_745(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_746(Global_1940186.f_28[iVar0]))
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
			if (func_747(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_748(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_749(uParam1, iParam0, fVar1, iVar0))
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

bool func_626(int iParam0, var uParam1)
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

bool func_627(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_634();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_628(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_750(iVar0, &iVar2))
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
	if (func_751(iVar0, iParam0))
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

int func_629(var uParam0, int iParam1)
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

bool func_630(var uParam0, int iParam1)
{
	if (func_752(uParam0))
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

bool func_631(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_492(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_632()
{
}

bool func_633(var uParam0, int iParam1)
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
		if (func_753(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_634();
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
						if (func_288(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_634();
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

int func_634()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_635()
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
	if ((func_634() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_636(var uParam0, int iParam1)
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
	fVar0 = func_731(uParam0);
	if (uParam0->f_13 > func_562(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_754(iParam1);
	iVar1 = func_755(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_637(var uParam0, int iParam1)
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
	if (func_398(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_756(vVar1, vVar4);
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

int func_638(int iParam0, int iParam1, var uParam2)
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
	return func_757(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_639(int iParam0, var uParam1)
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
		if (func_758(iParam0, uParam1, 1))
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
	if (!func_461(iParam0))
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
			if (func_759(uParam1))
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
					if (!func_760(uParam1, iParam0))
					{
						if (func_288(iVar4, Global_34, 1) < 7f)
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

bool func_640(int iParam0, var uParam1)
{
	if (!func_761(0))
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

bool func_641(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_634();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_642(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_643(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_634();
	}
	else if (func_634() - uParam1->f_5) > func_762(uParam1)
	{
		return func_763(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_644(var uParam0, int iParam1)
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

bool func_645(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (func_178(Local_1288.f_304.f_2, 4))
	{
		return false;
	}
	if (!MISC::IS_BIT_SET(Local_1288.f_304.f_65, iParam0))
	{
		return false;
	}
	MISC::CLEAR_BIT(&(Local_1288.f_304.f_65), iParam0);
	if (!bParam3 && Local_71[iParam2 /*38*/].f_15.f_4 == 0)
	{
		return false;
	}
	if (!bParam3 && NETWORK::GET_TIME_DIFFERENCE(Local_71[iParam2 /*38*/].f_15.f_4, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 750)
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
	iVar0 = func_764(PLAYER::PLAYER_PED_ID(), 0, 1, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0) || !((WEAPON::IS_WEAPON_A_GUN(iVar0) || func_765(iVar0)) || WEAPON::_IS_WEAPON_THROWABLE(iVar0)))
	{
		return false;
	}
	if (WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID()) < iParam1->f_2)
	{
		return false;
	}
	return true;
}

void func_646(int* iParam0, var uParam1)
{
	GRAPHICS::GET_SCREEN_RESOLUTION(iParam0, &(iParam0->f_1));
	*iParam0 = (*iParam0 / 2);
	iParam0->f_1 = (iParam0->f_1 / 2);
	iParam0->f_2 = uParam1;
}

Vector3 func_647(int iParam0)
{
	return iParam0->f_6, iParam0->f_7, iParam0->f_8;
}

int func_648(int iParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12)
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
		vVar7.x = ((func_766(iParam0) * 1056964608) + vParam5.x);
		vVar7.f_1 = ((func_767(iParam0) * 1056964608) + vParam5.y);
		vVar7.f_2 = ((func_768(iParam0) * 1056964608) + vParam5.z);
	}
	vVar10 = { func_770(func_769(CAM::GET_RENDERING_CAM())) };
	vVar13 = { func_771(vVar10, 0f, 0f, 1f) };
	vVar16 = { func_771(vVar13, vVar10) };
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
			uParam1->f_2 = (iParam9 + BUILTIN::FLOOR((func_772((!bVar43 || vVar25.x < vVar31.x), vVar25.x, vVar31.x) - vVar22.x)));
		}
		if (uParam1->f_2 < 1)
		{
			uParam1->f_2 = 0;
			return 0;
		}
		if (bVar42)
		{
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_772((!bVar43 || vVar28.y > vVar31.y), vVar28.y, vVar31.y) - vVar22.y)));
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
			uParam1->f_3 = (iParam10 + BUILTIN::FLOOR((func_772(vVar28.y > vVar31.y, vVar28.y, vVar31.y) - vVar25.y)));
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
		uParam1->f_2 = (iParam9 + BUILTIN::FLOOR(func_772((!bVar43 || vVar25.x > vVar31.x), vVar25.x, vVar31.x)));
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

int func_649(int iParam0, var uParam1)
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

int func_650(var uParam0)
{
	return uParam0->f_23;
}

struct<15> func_651(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_1288, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_652(var uParam0)
{
	func_774(uParam0, func_773(4, 117));
}

bool func_653(int iParam0, var uParam1, var uParam2, bool bParam3)
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

int func_654(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (!func_383(255))
	{
		func_170(iParam0);
		return 0;
	}
	iVar0 = func_184(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (bParam3)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_HOGTIED(iVar0))
		{
			func_170(iParam0);
			return 0;
		}
	}
	if (func_492(PLAYER::PLAYER_PED_ID(), Local_1288.f_179.f_7[iParam0 /*11*/], 1, 1) > 1120403456)
	{
		return 0;
	}
	if (MAP::DOES_BLIP_EXIST(Local_1288.f_179.f_7[iParam0 /*11*/].f_1))
	{
		return 1;
	}
	if (iParam2 == 0)
	{
		iParam2 = 3.959886E-05f;
	}
	if (func_185(iParam0))
	{
		func_775(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_ENE");
	}
	else
	{
		func_775(iParam0, iParam1, iParam2, 0, "NB_NBTIED_BLIP_NAME_STR");
	}
	return 1;
}

void func_655()
{
	float fVar0;

	if (func_278())
	{
		return;
	}
	fVar0 = func_288(Global_33, func_286(), 1);
	if (fVar0 < 1123680256)
	{
		if (!MAP::DOES_BLIP_EXIST(Local_1288.f_19.f_4))
		{
			func_654(0, -4.450028E+35f, 1.096965E+22f, 0);
		}
	}
	else if (MAP::DOES_BLIP_EXIST(Local_1288.f_19.f_4))
	{
		func_170(0);
	}
}

void func_656(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_659(&(Local_1288.f_19.f_145[iParam0]), 1, 1);
	iVar0 = func_184(0);
	iVar1 = func_776(sParam1, iParam2, iVar0, iParam3, iParam4, 0, 0, 0, 1.6f, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0, 0);
	iVar2 = func_777(iVar1);
	func_778(iVar1, 18, 0, 1);
	func_778(iVar1, 17, 0, 1);
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar2 /*23*/].f_3, HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iVar0), 0);
	func_780(iVar1, func_779(iParam0), 1, 1);
	Local_1288.f_19.f_145[iParam0] = iVar1;
}

void func_657(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_781(iVar0, bParam0);
		iVar0++;
	}
}

bool func_658(int iParam0)
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

void func_659(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_658(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_777(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_782(iVar0);
	*uParam0 = 0;
}

void func_660(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;

	fParam5 = func_783(vParam1, fParam5);
	fVar0 = func_784(fParam5, iParam4);
	if (fVar0 < 1f)
	{
		GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, uParam0->f_3);
		GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar0);
	}
}

void func_661(var uParam0, vector3 vParam1, int iParam4, float fParam5)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	fVar0 = (IntToFloat((MISC::GET_FRAME_COUNT() - uParam0->f_4)) / 1125515264);
	if (fVar0 >= 1f)
	{
		func_220(&(uParam0->f_1), 16);
		func_660(uParam0, vParam1, iParam4, fParam5);
		return;
	}
	else
	{
		fParam5 = func_783(vParam1, fParam5);
		fVar1 = func_784(fParam5, iParam4);
		fVar3 = func_785(uParam0->f_2, uParam0->f_3, fVar0);
		fVar2 = func_785(0f, fVar1, fVar0);
	}
	GRAPHICS::_SET_PARTICLE_FX_LOOPED_UPDATE_DISTANT_SMOKE(*uParam0, fVar3);
	GRAPHICS::SET_PARTICLE_FX_LOOPED_ALPHA(*uParam0, fVar2);
}

int func_662(float fParam0)
{
	int iVar0;

	iVar0 = func_786(fParam0);
	return iVar0;
}

float func_663(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 3:
		case 4:
			return 1133903872 /* Float: 300f */;
		case 2:
			return 1148846080 /* Float: 1000f */;
		default:
			break;
	}
	return 1133903872 /* Float: 300f */;
}

int func_664(float fParam0)
{
	int iVar0;

	iVar0 = func_786(fParam0);
	return iVar0;
}

int func_665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1103626240 /* Float: 25f */;
		case 1:
			return 1109393408 /* Float: 40f */;
		case 3:
			return 1128792064 /* Float: 200f */;
		case 4:
			return 1127481344 /* Float: 180f */;
		case 2:
			return 1125515264 /* Float: 150f */;
		default:
			break;
	}
	return 1124073472 /* Float: 128f */;
}

float func_666(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1f;
		case 3:
			return 1061997773 /* Float: 0.8f */;
		case 4:
			return 1056964608 /* Float: 0.5f */;
		case 0:
			return 1058642330 /* Float: 0.6f */;
		case 2:
			return 1063675494 /* Float: 0.9f */;
		default:
			break;
	}
	return 1f;
}

float func_667(vector3 vParam0, bool bParam3)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { func_769(0) };
	vVar3 = { func_770(vParam0 - CAM::GET_GAMEPLAY_CAM_COORD()) };
	if (bParam3)
	{
		return MISC::ABSF(MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y));
	}
	return MISC::GET_ANGLE_BETWEEN_2D_VECTORS(vVar3.x, vVar3.y, vVar0.x, vVar0.y);
}

bool func_668(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, "BTUP_GX_KNOCK1", 24);
			break;
		case 2:
			StringCopy(sParam1, "BTUP_GX_KILL1", 24);
			break;
		case 3:
			StringCopy(sParam1, "BTUP_GX_WARN1", 24);
			break;
		case 4:
			StringCopy(sParam1, "BTUP_GX_WARN2", 24);
			break;
		case 5:
			StringCopy(sParam1, "BTUP_GX_LEFT", 24);
			break;
		case 6:
			StringCopy(sParam1, "BTUP_GX_DONEW", 24);
			break;
		case 7:
			StringCopy(sParam1, "BTUP_GX_RETURN", 24);
			break;
		case 8:
			StringCopy(sParam1, "BTUP_C2_CLEAR", 24);
			break;
		case 9:
			StringCopy(sParam1, "BTUP_C1_CLEAR", 24);
			break;
		case 10:
			StringCopy(sParam1, "BTUP_C2_HELP2", 24);
			break;
		case 11:
			StringCopy(sParam1, "BTUP_C2_HELP3", 24);
			break;
		case 12:
			StringCopy(sParam1, "BTUP_C2_HELP4", 24);
			break;
		case 13:
			StringCopy(sParam1, "BTUP_C2_GIVEUP", 24);
			break;
		case 14:
			StringCopy(sParam1, "BTUP_C1_LAW1", 24);
			break;
		case 15:
			StringCopy(sParam1, "BTUP_C1_HELP1", 24);
			break;
		case 16:
			StringCopy(sParam1, "BTUP_C1_HELP2", 24);
			break;
		case 17:
			StringCopy(sParam1, "BTUP_C1_HELP3", 24);
			break;
		case 18:
			StringCopy(sParam1, "BTUP_C2_THX", 24);
			break;
		case 19:
			StringCopy(sParam1, "BTUP_C1_THX", 24);
			break;
		case 20:
			StringCopy(sParam1, "BTUP_C2_THXBYE", 24);
			break;
		case 21:
			StringCopy(sParam1, "BTUP_C1_THXBYE", 24);
			break;
		case 22:
			StringCopy(sParam1, "BTUP_C2_BUMP", 24);
			break;
		case 23:
			StringCopy(sParam1, "BTUP_C1_BUMP", 24);
			break;
		case 24:
			StringCopy(sParam1, "BTUP_C2_AIM", 24);
			break;
		case 25:
			StringCopy(sParam1, "BTUP_C1_LAWAIM2", 24);
			break;
		case 26:
			StringCopy(sParam1, "BTUP_C1_LAW_GUN", 24);
			break;
		case 27:
			StringCopy(sParam1, "BTUP_C2_AGG", 24);
			break;
		case 28:
			StringCopy(sParam1, "BTUP_C1_AGG", 24);
			break;
		default:
			return false;
	}
	return true;
}

bool func_669(char* sParam0)
{
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0) && AUDIO::IS_SCRIPTED_CONVERSATION_PLAYING(sParam0))
	{
		return true;
	}
	return false;
}

void func_670(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_184(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!func_534(iVar0, 0.002842281f, 1, 0))
	{
		return;
	}
	TASK::TASK_START_SCENARIO_IN_PLACE_HASH(iVar0, iParam1, 0, false, 0, -1f, false);
	PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(iVar0);
}

bool func_671(var uParam0, int iParam1, char* sParam2)
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

void func_672(int iParam0, int iParam1)
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
	Var31 = { func_430(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_118(&Var0, 4) && func_787(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_673(int iParam0)
{
	func_788(iParam0);
}

void func_674(struct<2> Param0)
{
	struct<32> Var0;

	if (func_328(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_328(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_328(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_789(Param0, &Var0))
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

void func_675(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_430(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_676(int iParam0, int iParam1, int iParam2)
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

bool func_677(int iParam0)
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

int func_678(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_790())
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
		func_791(&Global_0, 8);
	}
	func_791(&Global_0, 1);
	return 1;
}

int func_679(int iParam0, var uParam1, var uParam2, var uParam3)
{
	float fVar0;
	var uVar1;
	int iVar2;
	float fVar3;

	fVar0 = 1176255488; /* Float: 9999f */
	*uParam2 = -1;
	*uParam3 = -1;
	iVar2 = 0;
	while (iVar2 < *uParam1)
	{
		if (ENTITY::IS_ENTITY_DEAD((*uParam1)[iVar2]))
		{
		}
		else
		{
			fVar3 = func_492(iParam0, (*uParam1)[iVar2], 1, 1);
			if (fVar3 >= fVar0)
			{
				*uParam2 = iVar2;
			}
			else
			{
				uVar1 = (*uParam1)[iVar2];
				fVar0 = fVar3;
				*uParam2 = iVar2;
				*uParam3 = iVar2;
			}
		}
		iVar2++;
	}
	return uVar1;
}

void func_680()
{
	func_512(1);
	func_512(2);
}

void func_681(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

bool func_682(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_658(iParam0))
	{
		return false;
	}
	iVar0 = func_777(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_683(int iParam0)
{
	if (func_531(iParam0))
	{
		return true;
	}
	return false;
}

void func_684(int iParam0)
{
	if (Local_1288.f_19.f_3 == iParam0)
	{
		return;
	}
	Local_1288.f_19.f_3 = iParam0;
}

bool func_685(int iParam0)
{
	if (!func_500(iParam0))
	{
		return true;
	}
	if (func_526(iParam0, -1, 1))
	{
		return false;
	}
	func_510(iParam0);
	return false;
}

bool func_686(bool bParam0)
{
	return AUDIO::_IS_ANY_CONVERSATION_PLAYING(bParam0);
}

bool func_687(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_688(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 1)
	{
		return true;
	}
	else if (bParam2)
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true) == 0)
		{
			return true;
		}
	}
	return false;
}

void func_689(int iParam0, bool bParam1)
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

bool func_690(struct<2> Param0, bool bParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_792(bParam2);
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

int func_691()
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

void func_692(var uParam0, var uParam1)
{
}

int func_693(int iParam0)
{
	return func_793(iParam0) + 30;
}

bool func_694(int iParam0)
{
	return iParam0 != 0;
}

int func_695(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

int func_696(int iParam0, int iParam1, int iParam2)
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

bool func_697(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (func_794(iParam0) - 1))
	{
		return false;
	}
	return true;
}

int func_698(int iParam0)
{
	return iParam0 + 8;
}

void func_699(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_430(iParam1, 8.746343E-07f) };
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

float func_700(vector3 vParam0, vector3 vParam3)
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

bool func_701(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_702(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;

	iVar0 = func_184(iParam1);
	if (iParam2 != 9)
	{
		iVar1 = func_184(iParam2);
	}
	else
	{
		iVar1 = Global_33;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	fVar2 = func_492(iVar0, iVar1, 1, 1);
	if (fVar2 > 1116471296 && !bParam5)
	{
		return 0;
	}
	if (!func_668(iParam0, &vVar3))
	{
		return 0;
	}
	if (bParam3)
	{
	}
	if (iParam4 > 0)
	{
		iVar6 = 1;
	}
	if (AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(&vVar3))
	{
		if (func_795(&vVar3))
		{
			return 1;
		}
	}
	else if (func_796(&(Local_1288.f_19.f_42), vVar3, iVar6, iParam4, 0, 1))
	{
		return 1;
	}
	return 0;
}

int func_703(int iParam0, bool bParam1)
{
	var uVar0;

	if (!func_668(iParam0, &uVar0))
	{
		return 0;
	}
	func_797(&uVar0, bParam1, 0);
	return 1;
}

int func_704(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_798(iParam2, -3.005759E+25f);
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
	func_799(uParam1, bParam0, Var3);
	return 1;
}

float func_705(float fParam0, float fParam1, float fParam2)
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

bool func_706(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

bool func_707(bool bParam0)
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

int func_708(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_800(bParam0, 0, 1) };
		if (func_801(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_802(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_803(bParam0, Var0, Var0.f_4, 0) };
				func_804(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_805(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, bParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return 0;
		}
		func_806(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_807(bParam0, iParam1);
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

void func_709(int iParam0, bool bParam1, float fParam2)
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

bool func_710(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

bool func_711()
{
	return func_808() == 4;
}

float func_712()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_713(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_714(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_715(var uParam0)
{
	return func_604(*uParam0, 2);
}

int func_716(var uParam0)
{
	int iVar0;

	if (!func_809(uParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (!func_810(&(Global_1264291[iVar0 /*29*/].f_1), uParam0))
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

void func_717(int iParam0)
{
	struct<27> Var0;

	Var0.f_5 = -1;
	Var0.f_15 = -1;
	Var0.f_15.f_1 = -1;
	Var0.f_15.f_2 = -1;
	Var0.f_26 = -1;
	Var0.f_4 = 1;
	Var0.f_26 = iParam0;
	func_811(&Var0);
}

bool func_718()
{
	return Global_1265271.f_75.f_1 != -1;
}

bool func_719(var uParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_809(uParam0))
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

bool func_720(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (func_225(uParam0->f_1))
	{
		return false;
	}
	return true;
}

void func_721(var uParam0, var uParam1)
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
	func_811(&Var0);
}

bool func_722(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_812(uParam1);
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
		fVar2 = func_813(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_814())
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

bool func_723(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_815(iParam0))
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

void func_724(int iParam0)
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
	Global_1940186.f_21 = func_816();
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
			func_817(&(Global_1940186.f_28), &(Global_1940186.f_33));
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

var func_725(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_726(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_818(bParam0, &iVar0, &iVar1))
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

bool func_727(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_819(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_819(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_755(iVar0) == -1)
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

void func_728(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_820(uParam0);
	}
}

bool func_729(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_755(iParam2);
	}
	else
	{
		iVar1 = func_754(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_755(iParam0);
	}
	else
	{
		iVar0 = func_754(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_178(*uParam1, 8388608))
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

float func_730(int iParam0, int iParam1)
{
	return func_492(iParam0, iParam1, 1, 1);
}

float func_731(var uParam0)
{
	return uParam0->f_29;
}

bool func_732(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_733(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_220(uParam0, 3.85186E-34f);
	}
	else
	{
		func_221(uParam0, 3.85186E-34f);
	}
}

void func_734()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

bool func_735(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_492(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_821(iVar0, 0)))
		{
			if (func_822(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

float func_736(var uParam0)
{
	return uParam0->f_18;
}

bool func_737(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_178(*uParam0, 4194304))
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

int func_738(var uParam0)
{
	return uParam0->f_19;
}

int func_739(var uParam0)
{
	return uParam0->f_20;
}

bool func_740(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_821(iVar0, 0)))
		{
			if (func_823(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_741(bool bParam0, bool bParam1, bool bParam2)
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

float func_742(var uParam0)
{
	return uParam0->f_25;
}

int func_743(var uParam0)
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

bool func_744(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_824(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
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

int func_745(int iParam0)
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
	if (func_825(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_746(int iParam0)
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

bool func_747(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_815(iParam1))
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

bool func_748(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_815(iParam1))
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

bool func_749(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_826(uParam0);
	if (func_815(iParam1))
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

bool func_750(int iParam0, int iParam1)
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

bool func_751(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_827(iParam0, 1, 0, 0)) && !func_827(iParam0, 1, 0, 0) == 1284.666f)
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

bool func_752(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_753(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_288(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

int func_754(int iParam0)
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

int func_755(int iParam0)
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

float func_756(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

int func_757(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_750(Global_33, &iVar1))
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
		fVar2 = func_492(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_492(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
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

bool func_758(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_818(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_760(uParam1, iVar0))
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
				if (!bParam2 || !func_760(uParam1, iVar1))
				{
					if (func_288(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_759(var uParam0)
{
	return func_178(*uParam0, 131072);
}

bool func_760(var uParam0, int iParam1)
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

bool func_761(int iParam0)
{
	return false;
}

int func_762(var uParam0)
{
	return uParam0->f_22;
}

int func_763(int iParam0, var uParam1, bool bParam2, float fParam3)
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

int func_764(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

bool func_765(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

float func_766(int iParam0)
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
	fVar0 = func_828(vVar2.x, fVar0);
	fVar1 = func_813(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.x, fVar0);
	fVar1 = func_813(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.x, fVar0);
	fVar1 = func_813(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.x, fVar0);
	fVar1 = func_813(vVar2.x, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.x, fVar0);
	fVar1 = func_813(vVar2.x, fVar1);
	return (fVar0 - fVar1);
}

float func_767(int iParam0)
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
	fVar0 = func_828(vVar2.y, fVar0);
	fVar1 = func_813(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.y, fVar0);
	fVar1 = func_813(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.y, fVar0);
	fVar1 = func_813(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.y, fVar0);
	fVar1 = func_813(vVar2.y, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.y, fVar0);
	fVar1 = func_813(vVar2.y, fVar1);
	return (fVar0 - fVar1);
}

float func_768(int iParam0)
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
	fVar0 = func_828(vVar2.z, fVar0);
	fVar1 = func_813(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 45454, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.z, fVar0);
	fVar1 = func_813(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 33646, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.z, fVar0);
	fVar1 = func_813(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 34606, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.z, fVar0);
	fVar1 = func_813(vVar2.z, fVar1);
	vVar2 = { PED::GET_PED_BONE_COORDS(iParam0, 22798, 0f, 0f, 0f) };
	fVar0 = func_828(vVar2.z, fVar0);
	fVar1 = func_813(vVar2.z, fVar1);
	return (fVar0 - fVar1);
}

Vector3 func_769(int iParam0)
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
	return func_770((-fVar6 * fVar3), (fVar6 * fVar4), fVar5);
}

Vector3 func_770(vector3 vParam0)
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

Vector3 func_771(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.y * vParam3.z) - (vParam0.z * vParam3.y)), ((vParam0.z * vParam3.x) - (vParam0.x * vParam3.z)), ((vParam0.x * vParam3.y) - (vParam0.y * vParam3.x));
}

float func_772(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

var func_773(int iParam0, int iParam1)
{
	return func_829(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_774(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_775(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_170(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_1288.f_179.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_1288.f_179.f_7[iParam0 /*11*/]);
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
	Local_1288.f_179.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_776(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6, int iParam7, float fParam8, int iParam9, int iParam10, int iParam11, float fParam12, float fParam13, int iParam14, bool bParam15, bool bParam16)
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
		if (func_830(iVar0, 2))
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
				func_831(iVar1, iParam1, sParam0, 5, iParam3, iParam4, 0f, 0f, 0f, fParam8, 0, iParam2, 3, iParam6, iParam7, iParam9, iParam10, iParam11, fParam12, fParam13, 1f, 0, bParam5, 0, iParam14, bParam16);
				return iVar1;
			}
			return 0;
		}
	}
}

int func_777(int iParam0)
{
	return iParam0;
}

void func_778(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_658(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

bool func_779(int iParam0)
{
	return MISC::IS_BIT_SET(Local_1288.f_19.f_144, iParam0);
}

void func_780(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_658(iParam0))
	{
		return;
	}
	iVar0 = func_777(iParam0);
	if (bParam1)
	{
		func_832(iParam0, 4);
		if (bParam3)
		{
			func_833(iVar0, 1);
		}
		func_834(iVar0, 1);
	}
	else
	{
		func_835(iParam0, 4);
		func_834(iVar0, 0);
	}
}

void func_781(int iParam0, bool bParam1)
{
	func_780(Local_1288.f_19.f_145[iParam0], bParam1, 1, 1);
	if (bParam1)
	{
		MISC::SET_BIT(&(Local_1288.f_19.f_144), iParam0);
	}
	else
	{
		MISC::CLEAR_BIT(&(Local_1288.f_19.f_144), iParam0);
	}
}

void func_782(int iParam0)
{
	if (!func_836(iParam0))
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

float func_783(vector3 vParam0, float fParam3)
{
	if (fParam3 > 0f)
	{
		return fParam3;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(Global_34, vParam0, true);
}

float func_784(float fParam0, int iParam1)
{
	float fVar0;

	fVar0 = (2f * BUILTIN::SIN((1127481344 * (fParam0 / func_663(iParam1)))));
	if (fVar0 < 0f)
	{
		return 0f;
	}
	else if (fVar0 > 1f)
	{
		return 1f;
	}
	return fVar0;
}

float func_785(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

int func_786(float fParam0)
{
	int iVar0;

	if (fParam0 < 1132068864)
	{
		if (fParam0 < 1112014848)
		{
			iVar0 = 1048576000; /* Float: 0.25f */
		}
		else if (fParam0 < 1120403456)
		{
			iVar0 = 1056964608; /* Float: 0.5f */
		}
		else if (fParam0 < 1125515264)
		{
			iVar0 = 1f;
		}
		else if (fParam0 < 1128792064)
		{
			iVar0 = 1069547520; /* Float: 1.5f */
		}
		else if (fParam0 < 1132068864)
		{
			iVar0 = 2f;
		}
	}
	else if (fParam0 < 1140457472)
	{
		if (fParam0 < 1133903872)
		{
			iVar0 = 1075838976; /* Float: 2.5f */
		}
		else if (fParam0 < 1135542272)
		{
			iVar0 = 3f;
		}
		else if (fParam0 < 1137180672)
		{
			iVar0 = 1080033280; /* Float: 3.5f */
		}
		else if (fParam0 < 1138819072)
		{
			iVar0 = 4f;
		}
		else if (fParam0 < 1140457472)
		{
			iVar0 = 1083179008; /* Float: 4.5f */
		}
	}
	else if (fParam0 < 1144750080)
	{
		if (fParam0 < 1141473280)
		{
			iVar0 = 5f;
		}
		else if (fParam0 < 1142292480)
		{
			iVar0 = 1085276160; /* Float: 5.5f */
		}
		else if (fParam0 < 1143111680)
		{
			iVar0 = 6f;
		}
		else if (fParam0 < 1143930880)
		{
			iVar0 = 1087373312; /* Float: 6.5f */
		}
		else if (fParam0 < 1144750080)
		{
			iVar0 = 7f;
		}
	}
	else if (fParam0 < 1148846080)
	{
		if (fParam0 < 1145569280)
		{
			iVar0 = 1089470464; /* Float: 7.5f */
		}
		else if (fParam0 < 1146388480)
		{
			iVar0 = 1090519040; /* Float: 8f */
		}
		else if (fParam0 < 1147207680)
		{
			iVar0 = 1091043328; /* Float: 8.5f */
		}
		else if (fParam0 < 1148026880)
		{
			iVar0 = 1091567616; /* Float: 9f */
		}
		else if (fParam0 < 1148846080)
		{
			iVar0 = 1092091904; /* Float: 9.5f */
		}
	}
	else
	{
		iVar0 = 1092616192; /* Float: 10f */
	}
	return iVar0;
}

int func_787(int iParam0)
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

void func_788(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_430(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

bool func_789(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_690(Param0, &vVar0);
	if (func_837(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_790()
{
	return !Global_1572887.f_10;
}

void func_791(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_792(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_793(int iParam0)
{
	return iParam0 * 31;
}

int func_794(int iParam0)
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

bool func_795(char* sParam0)
{
	if (!AUDIO::_IS_SCRIPTED_CONVERSATION_CREATED(sParam0))
	{
		return false;
	}
	AUDIO::START_PRELOADED_CONVERSATION(sParam0);
	return true;
}

bool func_796(var uParam0, vector3 vParam1, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_838(uParam0, &Global_1051270, vParam1, iParam4, iParam5, bParam6, iParam7);
}

void func_797(char* sParam0, bool bParam1, bool bParam2)
{
	AUDIO::STOP_SCRIPTED_CONVERSATION(sParam0, bParam1, bParam2);
}

void func_798(int iParam0, int iParam1)
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

void func_799(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_839(uParam0))
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

struct<5> func_800(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_840(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_841(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_803(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_842(bParam1) };
			if (iParam2 && func_843(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_801(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_801(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_802(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_844(bParam1) };
			switch (func_845(bParam0))
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
			if (func_846(bParam0, -2.580501E-27f))
			{
				Var0 = { func_803(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_846(bParam0, -4.220332E-15f))
			{
				Var0 = { func_803(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_803(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_846(bParam0, -3.171238E-21f))
			{
				Var0 = { func_803(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_847(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_846(bParam0, -3.171238E-21f))
			{
				Var0 = { func_803(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_801(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_848(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_802(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_849(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_803(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_850(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_851(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_804(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_852(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_847(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_805(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_28() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_853(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_854(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_851(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_805(bool bParam0)
{
	if (func_28() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_851(bParam0));
}

int func_806(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_855(iParam0))
	{
		return 0;
	}
	if (!func_805(0))
	{
		return 0;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, iParam0, iParam1, iParam2);
	return 1;
}

void func_807(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_856(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_808()
{
	if (Global_1102813 <= 5)
	{
		return Global_1102813;
	}
	if (Global_1102813 <= 22)
	{
		return 4;
	}
	if (Global_1102813 <= 25)
	{
		return 3;
	}
	return 26;
}

bool func_809(var uParam0)
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

bool func_810(var uParam0, var uParam1)
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

void func_811(var uParam0)
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 27, 42, Global_1051645.f_16[16]);
	func_857(uParam0);
}

float func_812(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_562(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_858(uParam0);
	}
	return func_562(uParam0);
}

float func_813(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_814()
{
	int iVar0;
	int iVar1;

	iVar0 = func_860(func_859());
	iVar1 = func_861(func_859());
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

bool func_815(int iParam0)
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

bool func_816()
{
	if (func_862())
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

void func_817(var uParam0, var uParam1)
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

bool func_818(bool bParam0, int iParam1, int iParam2)
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

int func_819(var uParam0)
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

void func_820(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_221(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_220(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

var func_821(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_822(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_823(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_823(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

bool func_824(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_825(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_826(var uParam0)
{
	return uParam0->f_28;
}

float func_827(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

float func_828(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

var func_829(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_863() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_864());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_864());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_864());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_865(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_866(iVar2))
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
				if (iVar9 & 8192 != 0 && func_867(iVar2) != 1)
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
					if (!func_868(iVar10))
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

bool func_830(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_831(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_833(iParam0, 1);
	func_834(iParam0, 1);
	func_835(iParam0, 128);
}

void func_832(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_833(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_830(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_834(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_835(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_836(int iParam0)
{
	return func_830(iParam0, 2);
}

bool func_837(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_869(iParam0))
	{
		return false;
	}
	if (func_870(iParam0, uParam1, &uVar0))
	{
		func_871(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_838(var uParam0, var uParam1, vector3 vParam2, bool bParam5, int iParam6, bool bParam7, bool bParam8)
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
		func_872(vParam2, uParam0, uParam1);
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

bool func_839(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

struct<4> func_840(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_851(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_803(2.982335E+09f, func_873(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_803(2.982335E+09f, func_873(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_803(2.982335E+09f, func_873(), -5.45926E-19f, bParam0);
}

int func_841(bool bParam0)
{
	vector3 vVar0;

	if (!func_850(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_842(bool bParam0)
{
	int iVar0;

	iVar0 = func_851(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_803(8.681942E-06f, func_840(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_803(8.681942E-06f, func_840(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_803(8.681942E-06f, func_840(bParam0), -1.942248E+12f, 0);
}

int func_843(bool bParam0, bool bParam1)
{
	if (func_845(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_874();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_844(bool bParam0)
{
	int iVar0;

	iVar0 = func_851(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_803(3.507197E-29f, func_840(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_803(3.507197E-29f, func_840(bParam0), 12999093, 0);
}

int func_845(bool bParam0)
{
	struct<2> Var0;

	if (!func_850(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_846(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_845(bParam0);
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
			if (func_875(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_847(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_876(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_848(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_850(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_877(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_803(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_851(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_851(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_849(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_851(0);
	*iParam1 = { func_803(bParam0, func_842(0), fParam3, 0) };
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

bool func_850(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_851(bool bParam0)
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

bool func_852(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_853(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_878(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_880(func_879(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_881(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_854(int iParam0, struct<17> Param1)
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

bool func_855(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_856(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_857(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = func_882(iVar0);
		if (func_178(uParam0->f_5.f_9, iVar1))
		{
		}
		iVar0++;
	}
}

var func_858(var uParam0)
{
	return uParam0->f_27;
}

int func_859()
{
	return Global_1902565;
}

int func_860(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_861(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_862()
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

int func_863()
{
	return Global_1051645.f_12;
}

char* func_864()
{
	return "unnamed";
}

int func_865(int iParam0)
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

bool func_866(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_883(36, iParam0);
}

int func_867(int iParam0)
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

bool func_868(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_884(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_885(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_869(int iParam0)
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

bool func_870(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_886(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_871(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_887(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_888(iVar0);
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
			uParam2->f_5 = func_889(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_890(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_891(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_892(iVar0);
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

void func_872(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
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

struct<4> func_873()
{
	struct<4> Var0;

	return Var0;
}

int func_874()
{
	if (func_893(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_875(bool bParam0, int iParam1, int iParam2)
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

int func_876(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_851(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_877(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_895(func_894(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_878(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_896(iParam1->f_8, iParam0, iVar0, 2048) || func_896(iParam1->f_8, iParam0, iVar0, 32768)) || func_896(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_896(iParam1->f_8, iParam0, iVar0, 4) || func_896(iParam1->f_8, iParam0, iVar0, 256)) || func_896(iParam1->f_8, iParam0, iVar0, 65536)) || func_896(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_896(iParam1->f_8, iParam0, iVar0, 1) || func_896(iParam1->f_8, iParam0, iVar0, 8)) || func_896(iParam1->f_8, iParam0, iVar0, 65536)) || func_896(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_896(iParam1->f_8, iParam0, iVar0, 1) || func_896(iParam1->f_8, iParam0, iVar0, 16)) || func_896(iParam1->f_8, iParam0, iVar0, 2)) || func_896(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_896(iParam1->f_8, iParam0, iVar0, 8) || func_896(iParam1->f_8, iParam0, iVar0, 4096)) || func_896(iParam1->f_8, iParam0, iVar0, 256)) || func_896(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_879(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_880(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_897(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_897(iParam1, 2, 0, 0);
	return -1;
}

int func_881(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_897(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_882(int iParam0)
{
	return BUILTIN::SHIFT_LEFT(1, iParam0);
}

bool func_883(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_898(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_899())
	{
		return func_898(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_898(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_884(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_885(int iParam0)
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
		func_900(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_901(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

int func_886(int iParam0)
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

int func_887(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_902(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_888(int iParam0)
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

int func_889(int iParam0)
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

int func_890(int iParam0)
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

int func_891(int iParam0)
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

int func_892(int iParam0)
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

int func_893(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_855(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_851(bParam1), iParam0, bParam3);
}

bool func_894(bool bParam0)
{
	return bParam0;
}

bool func_895(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_896(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_223(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_897(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_903(iParam0, iParam1, iParam2, iParam3);
}

bool func_898(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_899()
{
	return Global_1102813.f_3672;
}

void func_900(int iParam0)
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
	func_901(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_901(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_902(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_904(iParam0, uParam1, &uVar0))
	{
		func_905(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_903(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_906(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_904(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_886(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_905(bool bParam0, int iParam1, var uParam2)
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

void func_906(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_907(&(uParam0->f_4));
}

void func_907(var uParam0)
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

