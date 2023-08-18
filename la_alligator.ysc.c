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
	struct<96> Local_13 = { 0, 0, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 1 } ;
	var uLocal_109 = 1;
	var uLocal_110 = 0;
	struct<19> Local_111[32];
	struct<412> Local_720 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 1112014848, 1106247680, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1723181095, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1097859072, 1000, 500, 1067450368, 5000, 42, 1103626240, 1077936128, 1106247680, 1103101952, 1109393408, 1097859072, 1103626240, 1067450368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, -1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1114636288, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0 } ;
	var uLocal_1132 = 0;
	var uLocal_1133 = 1;
	var uLocal_1134 = 0;
	var uLocal_1135 = 0;
	var uLocal_1136 = 1065353216;
	var uLocal_1137 = 0;
	var uLocal_1138 = 1065353216;
	var uLocal_1139 = 1077936128;
	var uLocal_1140 = 1108082688;
	var uLocal_1141 = 1113325568;
	var uLocal_1142 = 0;
	var uLocal_1143 = 0;
	var uLocal_1144 = 3;
	var uLocal_1145 = 0;
	var uLocal_1146 = 0;
	var uLocal_1147 = 0;
	var uLocal_1148 = 0;
	var uLocal_1149 = 0;
	var uLocal_1150 = 0;
	var uLocal_1151 = 0;
	var uLocal_1152 = 0;
	var uLocal_1153 = 0;
	var uLocal_1154 = 0;
	var uLocal_1155 = 0;
	var uLocal_1156 = 0;
	var uLocal_1157 = 0;
	var uLocal_1158 = 0;
	var uLocal_1159 = 0;
	var uLocal_1160 = 0;
	var uLocal_1161 = 0;
	var uLocal_1162 = 0;
	var uLocal_1163 = 0;
	var uLocal_1164 = 0;
	var uLocal_1165 = 0;
	var uLocal_1166 = 0;
	var uLocal_1167 = 0;
	var uLocal_1168 = 0;
	var uLocal_1169 = 0;
	var uLocal_1170 = 0;
	var uLocal_1171 = 0;
	var uLocal_1172 = 0;
	float fLocal_1173 = 0f;
	float fLocal_1174 = 0f;
	int iScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_1173 = 1f;
	fLocal_1174 = 1f;
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
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_13, 98, 43);
	func_10(NETWORK::_NETWORK_GET_SIZE_OF_HOST_BROADCAST_DATA_STORAGE(&Local_13), 98, "m_hostData");
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_111, 609, 44);
	func_11(NETWORK::_NETWORK_GET_SIZE_OF_PLAYER_BROADCAST_DATA_STORAGE(&(Local_111[0 /*19*/])), 609, "m_clientData");
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
	else if (func_17(Local_720.f_9, 0, 1))
	{
		return true;
	}
	else if (!func_18())
	{
		return true;
	}
	else if (!func_19(Local_720.f_12))
	{
		return true;
	}
	else if (!func_21(func_20(Local_720.f_12), Local_720.f_9))
	{
		return true;
	}
	else if (Local_720.f_8 == 6)
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
	MISC::COPY_SCRIPT_STRUCT(&Local_720, bParam0, 5);
	iVar2 = func_30(&bVar1, Local_720.f_1, Local_720.f_2);
	if (bVar1 || iVar2 == -1)
	{
		return;
	}
	Local_720.f_12 = iVar2;
	iVar0 = Global_1207465.f_231.f_1066[iVar2 /*17*/].f_5;
	Var3.f_10 = 30f;
	Var3.f_15 = 4;
	Var3.f_20 = 4;
	Var3.f_26 = -1;
	Var3.f_28 = 2;
	func_31(&Var3, Local_720.f_1, Local_720.f_2, Local_720.f_3, iVar0);
	Local_720.f_9 = { func_32(Var3.f_5, 8) };
	Local_720.f_14 = Var3.f_5;
	Local_720.f_15 = { Var3.f_11 };
	Local_720.f_18 = Var3.f_7;
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
	if (Local_13 <= 5)
	{
		func_42();
	}
	switch (Local_13)
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
	if (Local_720.f_8 <= 5)
	{
		func_51();
	}
	switch (Local_720.f_8)
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
		if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Local_13.f_3.f_1))
		{
			VOLUME::_RELEASE_LOCK_VOLUME(Local_13.f_3.f_1);
		}
	}
	func_60();
}

void func_26()
{
	func_61();
	func_62();
	func_63();
	func_64();
}

void func_27()
{
	if (Local_720.f_12 != -1)
	{
		if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1)
		{
			func_65(Local_720.f_12, 4);
		}
	}
	func_66();
	if (func_67(64))
	{
		func_68(Local_13.f_6);
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

struct<2> func_32(int iParam0, int iParam1)
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

void func_33()
{
	func_111();
	func_112();
	func_113();
}

void func_34()
{
	func_114();
	func_115();
	func_116(0);
	func_116(2);
	func_116(3);
	func_116(4);
	func_116(5);
	if (func_117() != 2)
	{
		func_116(6);
		func_116(7);
	}
	if (func_117() == 2)
	{
		func_118(0, 1.12388E-14f, 1, -1f);
		func_119();
	}
}

void func_35()
{
}

void func_36()
{
}

void func_37()
{
}

bool func_38(struct<2> Param0)
{
	if (!func_120(Param0))
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

	iVar0 = Global_1207465.f_231.f_1066[Local_720.f_12 /*17*/].f_5;
	Var1.f_10 = 30f;
	Var1.f_15 = 4;
	Var1.f_20 = 4;
	Var1.f_26 = -1;
	Var1.f_28 = 2;
	func_31(&Var1, Local_720.f_1, Local_720.f_2, Local_720.f_3, iVar0);
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

void func_44()
{
	struct<31> Var0;
	bool bVar31;

	Var0.f_10 = 30f;
	Var0.f_15 = 4;
	Var0.f_20 = 4;
	Var0.f_26 = -1;
	Var0.f_28 = 2;
	func_31(&Var0, Local_720.f_1, Local_720.f_2, -1, 255);
	if (func_121(&Var0, 1))
	{
		func_122(2);
		return;
	}
	if (func_127(Var0, &bVar31))
	{
		MISC::CLEAR_AREA(Local_720.f_15, Var0.f_10, 2442122);
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

void func_45()
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

void func_46()
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

void func_47()
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

void func_48()
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

void func_49()
{
	if (!func_132(256))
	{
		return;
	}
	if (func_132(512))
	{
		if (func_67(64) && func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_68(Local_13.f_6);
			func_144(64);
		}
	}
	else if (!func_67(64))
	{
		if (func_123(PLAYER::PLAYER_ID()) == Local_13.f_6)
		{
			func_145(Local_13.f_6, 1, 1);
			func_146(64);
		}
	}
	else if (func_123(PLAYER::PLAYER_ID()) != Local_13.f_6)
	{
		func_68(Local_13.f_6);
		func_144(64);
	}
}

void func_50()
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

void func_51()
{
	func_149();
}

void func_52()
{
	if (Local_13 == 6)
	{
		func_150(6);
	}
	else if (Local_13 > 0)
	{
		func_49();
		func_150(1);
	}
}

void func_53()
{
	if (Local_13 == 6)
	{
		func_150(6);
	}
	else if (Local_13 > 1)
	{
		func_150(2);
	}
}

void func_54()
{
	bool bVar0;
	int iVar1;

	if (!func_131(1, 255))
	{
		bVar0 = true;
		if (!func_151())
		{
			bVar0 = false;
		}
		if (!func_152())
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
			if (!func_128(Local_720.f_11))
			{
				func_129(&(Local_720.f_11));
			}
			if (func_130(Local_720.f_11) >= iVar1)
			{
				func_150(6);
			}
		}
	}
	else if (Local_13 > 2)
	{
		func_153(&(Local_720.f_11));
		func_154();
		func_150(3);
	}
}

void func_55()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_131(2, 255))
	{
		iVar0 = func_155();
		iVar1 = func_156();
		if (iVar0 && iVar1)
		{
			func_148(2);
		}
		else
		{
			iVar2 = Global_1901671.f_242.f_70;
			if (!func_128(Local_720.f_11))
			{
				func_129(&(Local_720.f_11));
			}
			if (func_157(Local_720.f_11) >= iVar2)
			{
				func_150(6);
			}
		}
	}
	else if (Local_13 > 3)
	{
		func_153(&(Local_720.f_11));
		func_158();
		func_159();
		func_160();
		func_161();
		func_150(4);
	}
}

void func_56()
{
	if (Local_13 >= 5)
	{
		func_162();
		func_150(5);
		return;
	}
	func_163();
	func_164();
	func_165();
	func_166();
	func_167();
	func_168();
	func_169();
}

void func_57()
{
	if (!func_131(4, 255))
	{
		if (func_170())
		{
			func_171();
			func_65(Local_720.f_12, 4);
			func_148(4);
		}
	}
	else if (Local_13 > 5)
	{
		func_150(6);
	}
}

void func_58()
{
}

bool func_59()
{
	return (func_132(4) || (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && NETWORK::NETWORK_GET_NUM_PARTICIPANTS() <= 1));
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
			if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_86[iVar1]))
			{
				iVar0 = NETWORK::NET_TO_PED(Local_13.f_86[iVar1]);
				func_172(iVar1);
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_173(iVar0, "HAS_VOICE");
					func_173(iVar0, "HorseTeamA");
					func_173(iVar0, "HorseTeamB");
					func_173(iVar0, "HorseOwnerTeamA");
					func_173(iVar0, "HorseOwnerTeamB");
					if (!func_174(iVar1, 16))
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

void func_62()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_59())
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = 0;
			while (iVar2 < 1)
			{
				if (func_175(iVar1, iVar2))
				{
				}
				else if (func_176(iVar1, iVar2))
				{
					iVar0 = Local_720.f_390[iVar1 /*20*/].f_5[iVar2 /*14*/];
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						if (func_177(iVar1, iVar2))
						{
							OBJECT::DELETE_OBJECT(&iVar0);
						}
						else
						{
							ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iVar0);
						}
					}
				}
				else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar1 /*2*/][iVar2]))
				{
					iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_95[iVar1 /*2*/][iVar2]);
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
					{
						if (func_177(iVar1, iVar2))
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

void func_63()
{
	func_178(&(Local_720.f_411.f_13));
	if (VOLUME::DOES_VOLUME_EXIST(Local_720.f_411.f_11))
	{
		VOLUME::DELETE_VOLUME(Local_720.f_411.f_11);
	}
}

void func_64()
{
	func_179();
}

void func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (func_180(iParam0, iVar0, iParam1))
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
	func_181(Local_720.f_9, iVar0, 0, 255, 0);
	func_146(4);
	if (bVar1)
	{
		func_182(Local_720.f_1, Local_720.f_2);
		if (!func_67(256))
		{
			if (iVar0 == 1)
			{
				func_183(Local_720.f_18, 1);
			}
			else
			{
				func_183(Local_720.f_18, 0);
			}
			func_146(256);
		}
		func_184(Local_720.f_18);
	}
	else
	{
		func_183(Local_720.f_18, 2);
	}
}

bool func_67(int iParam0)
{
	return func_185(Local_720.f_7, iParam0);
}

void func_68(int iParam0)
{
	int iVar0;

	if (!func_186(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	Global_1144511[iVar0 /*83*/].f_70 = iParam0;
	Global_1144511[iVar0 /*83*/].f_70.f_2 = 0;
}

void func_69()
{
}

void func_70(var uParam0, int iParam1)
{
	uParam0->f_9 = 2;
	*uParam0 = { func_32(iParam1, 8) };
	uParam0->f_2 = 0;
	uParam0->f_4 = -1;
}

int func_71(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_187(uParam0))
	{
		return -1;
	}
	iVar0 = func_188(uParam0, uParam0->f_9);
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
			iVar0 = func_188(uParam0, iVar1);
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
	func_189(bParam0, iParam1);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = 5.413756E-29f;
			bParam0->f_11 = { -990860554, -989563552, 1112583527 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 2.106363E+21f;
			bParam0->f_11 = { 1124617288, 1108172700, 1120571160 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 2.111024E+08f;
			bParam0->f_11 = { -1000099991, 1146566170, 1124510273 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = 5.018388E+37f;
			bParam0->f_11 = { 1160662133, 1149675795, 1114109612 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 15.72851f;
			bParam0->f_11 = { 1155202369, -997476443, 1109576938 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 7.778285E-25f;
			bParam0->f_11 = { 1151421903, -1001312602, 1117451139 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 3.906421E-32f;
			bParam0->f_11 = { 1134169754, 1150581207, 1127492786 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -2.006564E+35f;
			bParam0->f_11 = { -992054984, -1016372307, 1127560180 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = joaat("BEAT_ARROWHEAD_INJURY_PLAINS_1");
			bParam0->f_11 = { -996062015, -996972965, 1116777288 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = -6.409571f;
			bParam0->f_11 = { -988795329, -993966426, 1125647559 };
			break;
		case 10:
			func_191(bParam0);
			bParam0->f_5 = 1.863479E-14f;
			bParam0->f_11 = { -987084972, -987916189, 1115784641 };
			break;
		case 11:
			func_191(bParam0);
			bParam0->f_5 = 1.021696E+23f;
			bParam0->f_11 = { -980717807, -984844394, 1097381540 };
			break;
		case 12:
			func_191(bParam0);
			bParam0->f_5 = -1.082996E+28f;
			bParam0->f_11 = { -980371346, -987027526, -1052628128 };
			break;
		case 13:
			func_191(bParam0);
			bParam0->f_5 = 1.561827E+30f;
			bParam0->f_11 = { -978226670, -985207032, -1045081746 };
			break;
		case 14:
			func_191(bParam0);
			bParam0->f_5 = -0.02038603f;
			bParam0->f_11 = { -992797751, -988937868, 1110473601 };
			break;
		case 15:
			func_191(bParam0);
			bParam0->f_5 = 8.753591E+18f;
			bParam0->f_11 = { -993346216, 1154188969, 1131149034 };
			break;
		case 16:
			func_191(bParam0);
			bParam0->f_5 = 2.603904E-14f;
			bParam0->f_11 = { 1137847938, 1157405979, 1130787128 };
			break;
		case 17:
			func_191(bParam0);
			bParam0->f_5 = -3.46549E+29f;
			bParam0->f_11 = { -1006543492, 1140802678, 1120695837 };
			break;
		case 18:
			func_191(bParam0);
			bParam0->f_5 = 1.179074E+08f;
			bParam0->f_11 = { 1155396410, 1141414078, 1121272906 };
			break;
		case 19:
			func_191(bParam0);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			bParam0->f_5 = 9.836368E+13f;
			bParam0->f_11 = { 1158463633, 1151850133, 1118379350 };
			break;
		case 1:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			bParam0->f_5 = 543.1066f;
			bParam0->f_11 = { 1158581043, 1154029896, 1118348247 /* Float: 84.32f */ };
			break;
		case 2:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			bParam0->f_5 = 1.269733E-08f;
			bParam0->f_11 = { 1159227851, 1148195910, 1116877134 };
			break;
		case 3:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = -2.228004E-19f;
			bParam0->f_11 = { 1150112082, 1141895886, 1118655292 };
			break;
		case 4:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = -3192329f;
			bParam0->f_11 = { -1002661653, -1010332030, 1109614411 };
			break;
		case 5:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = 1.530311E+38f;
			bParam0->f_11 = { -1009953158, -1031815037, 1109596884 };
			break;
		case 6:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			bParam0->f_5 = 671977.6f;
			bParam0->f_11 = { -989701008, -1021188067, 1129320500 };
			break;
		case 7:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			bParam0->f_5 = -123672.6f;
			bParam0->f_11 = { -992884296, -1006537328, 1124916724 };
			break;
		case 8:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			bParam0->f_5 = -5.227074E+13f;
			bParam0->f_11 = { -987492840, -1012276717, 1124978537 };
			break;
		case 9:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = 3.83512E-24f;
			bParam0->f_11 = { -999840598, -999875151, 1109701978 };
			break;
		case 10:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = -6.19582E+25f;
			bParam0->f_11 = { -1003176727, -992552468, 1109763031 /* Float: 41.41f */ };
			break;
		case 11:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -2211.382f;
			bParam0->f_11 = { -997874236, -990907462, 1110008057 };
			break;
		case 12:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			bParam0->f_5 = 5.813065E-27f;
			bParam0->f_11 = { 1154561405, 1152647541, 1125258684 };
			break;
		case 13:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -2.743283E+37f;
			bParam0->f_11 = { 1153650150, 1152690073, 1125206209 };
			break;
		case 14:
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			bParam0->f_5 = 9.295132E-10f;
			bParam0->f_11 = { 1151049129, 1150494730, 1125442231 };
			break;
		case 15:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = -0.0750034f;
			bParam0->f_11 = { 1156634238, -1011536767, 1110045203 };
			break;
		case 16:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = 0.2697543f;
			bParam0->f_11 = { 1158219730, -1012979473, 1109582991 };
			break;
		case 17:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			func_192(bParam0, 7);
			bParam0->f_5 = 5.456239E+10f;
			bParam0->f_11 = { 1159104295, -1007338908, 1109635708 };
			break;
		case 18:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
			bParam0->f_5 = -1.648444E-05f;
			bParam0->f_11 = { -984958968, -985189821, -1055587094 };
			break;
		case 19:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = 1.11035E+30f;
			bParam0->f_11 = { -992337834, -986246592, -1052418507 };
			break;
		case 20:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 5);
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
	func_190(bParam0);
	bParam0->f_15[0] = -6.738816E-37f;
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = 2.528791E+11f;
			bParam0->f_11 = { -1016809403, 1145965509, 1123457683 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = -1.155725E-33f;
			bParam0->f_11 = { 1151292035, -996652760, 1117867160 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 4.112297E-07f;
			bParam0->f_11 = { -999383477, -996775968, 1113200814 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -1.046268E-07f;
			bParam0->f_11 = { -978709429, -986347484, -1115107728 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 2.409888E+18f;
			bParam0->f_11 = { -980764861, -987213526, -1052735701 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = -2.574967E+30f;
			bParam0->f_11 = { -984565348, -986491770, -1059165150 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = -1.470611E-19f;
			bParam0->f_11 = { 1152287867, -1004483776, 1116534446 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -1.322399E-31f;
			bParam0->f_11 = { 1155070895, -1009556623, 1111263779 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = -3.836814E+24f;
			bParam0->f_11 = { 1157058569, -991046472, 1109668318 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = -5.760947E+24f;
			bParam0->f_11 = { 1160536058, -997796525, 1110937567 };
			break;
		case 10:
			func_191(bParam0);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = 3690385f;
			bParam0->f_11 = { 1160614818, 1139258245, 1115848717 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 8.158911E+30f;
			bParam0->f_11 = { 1152555558, -991780903, 1113947856 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 2.669717E-17f;
			bParam0->f_11 = { 1159802443, -1001056348, 1109736240 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -7.255729E-07f;
			bParam0->f_11 = { 1160700391, 1152583160, 1117482104 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 6.041506E+07f;
			bParam0->f_11 = { 1151037068, 1141089509, 1118757017 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = -1.38438E-11f;
			bParam0->f_11 = { -1041918727, 1149953882, 1126694549 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 4.212033E-16f;
			bParam0->f_11 = { -1006065924, -1013638573, 1112688063 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = 2.536912E+12f;
			bParam0->f_11 = { -995133944, 1136648213, 1120698001 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = -2.534091E+12f;
			bParam0->f_11 = { -994262090, -1000541027, 1118925984 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = 6.148389E+24f;
			bParam0->f_11 = { -994674669, -990940346, 1112260071 };
			break;
		case 10:
			func_191(bParam0);
			bParam0->f_5 = -7.930857E-27f;
			bParam0->f_11 = { -988127157, -988303389, 1114412365 };
			break;
		case 11:
			func_191(bParam0);
			bParam0->f_5 = 2.27023E-35f;
			bParam0->f_11 = { -985575689, -985274257, -1079057014 };
			break;
		case 12:
			func_191(bParam0);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -983148035, -986901517, -1049467415 };
			break;
		case 13:
			func_191(bParam0);
			bParam0->f_5 = -1528.504f;
			bParam0->f_11 = { -980293646, -983061220, 1095283266 };
			break;
		case 14:
			func_191(bParam0);
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
	func_193(bParam0, iParam1);
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, 0);
			bParam0->f_5 = -4.776145E+35f;
			bParam0->f_11 = { 1140422199, 1150609617, 1127448684 };
			break;
		case 1:
			func_192(bParam0, 1);
			bParam0->f_5 = -5.717982E-16f;
			bParam0->f_11 = { 1122352497, 1149842964, 1127348306 };
			break;
		case 2:
			func_192(bParam0, 0);
			bParam0->f_5 = 1.479809E-33f;
			bParam0->f_11 = { 1158544398, -1008974965, 1109608434 };
			break;
		case 3:
			func_192(bParam0, 1);
			bParam0->f_5 = -1.539734E+36f;
			bParam0->f_11 = { 1157239438, -1007056794, 1109661975 };
			break;
		case 4:
			func_192(bParam0, 0);
			bParam0->f_5 = -1.203898E-08f;
			bParam0->f_11 = { 1158659316, -1000302158, 1109667175 };
			break;
		case 5:
			func_192(bParam0, 1);
			bParam0->f_5 = 2.760309E+36f;
			bParam0->f_11 = { 1158943917, -1003981380, 1109751992 };
			break;
		case 6:
			func_192(bParam0, 0);
			bParam0->f_5 = -1.209803E+10f;
			bParam0->f_11 = { 1153395345, 1153784522, 1125345306 };
			break;
		case 7:
			func_192(bParam0, 1);
			bParam0->f_5 = -3.374709E-37f;
			bParam0->f_11 = { 1147949926, 1150210383, 1125350172 };
			break;
		case 8:
			func_192(bParam0, 0);
			bParam0->f_5 = -3201.431f;
			bParam0->f_11 = { -997404924, 1145821314, 1122717347 };
			break;
		case 9:
			func_192(bParam0, 1);
			bParam0->f_5 = 8.817295E-33f;
			bParam0->f_11 = { -989790972, 1147786383, 1125323950 };
			break;
		case 10:
			func_192(bParam0, 0);
			bParam0->f_5 = -1.197698E+14f;
			bParam0->f_11 = { -993610239, -994956749, 1117827845 };
			break;
		case 11:
			func_192(bParam0, 1);
			bParam0->f_5 = -5.118974E+24f;
			bParam0->f_11 = { -1000106720, -991758352, 1115085186 };
			break;
		case 12:
			func_192(bParam0, 0);
			bParam0->f_5 = 6.017953E+25f;
			bParam0->f_11 = { -987225687, -986396153, 1115781541 };
			break;
		case 13:
			func_192(bParam0, 1);
			bParam0->f_5 = -5.803788E-28f;
			bParam0->f_11 = { -986306439, -987762824, 1115073303 };
			break;
		case 14:
			func_192(bParam0, 0);
			bParam0->f_5 = -5.365581E-31f;
			bParam0->f_11 = { -980546023, -983195925, 1099892030 };
			break;
		case 15:
			func_192(bParam0, 1);
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
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = 5.128504E-15f;
			bParam0->f_11 = { 1139431610, 1114658544, 1124498253 };
			break;
		case 1:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 8);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = 791.1281f;
			bParam0->f_11 = { -1010017488, 1125782274, 1109614988 };
			break;
		case 2:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -0.0004251206f;
			bParam0->f_11 = { -990825227, -995587373, 1121168922 };
			break;
		case 3:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -8619264f;
			bParam0->f_11 = { -990216659, -989404632, 1113123743 };
			break;
		case 4:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -0.005462102f;
			bParam0->f_11 = { -996210888, 1120072685, 1116540769 };
			break;
		case 5:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 7);
			func_192(bParam0, 8);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -2.245529E+29f;
			bParam0->f_11 = { -988615224, -1011630570, 1125105495 };
			break;
		case 6:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			func_192(bParam0, 6);
			func_192(bParam0, 7);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -4.391075E+18f;
			bParam0->f_11 = { -992405448, 1134109594, 1121469791 };
			break;
		case 7:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			func_192(bParam0, 6);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -2.699646E+09f;
			bParam0->f_11 = { -979688450, -984318406, 1090462878 };
			break;
		case 8:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
			bParam0->f_5 = -1.638996E+35f;
			bParam0->f_11 = { -989262621, -986861661, 1116341763 };
			break;
		case 9:
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			func_192(bParam0, 5);
			func_192(bParam0, 9);
			func_192(bParam0, 10);
			func_192(bParam0, 11);
			func_194(bParam0, iParam2);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -5.854213E-18f;
			bParam0->f_11 = { 1152747524, -992746571, 1115811584 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 4.557484E-23f;
			bParam0->f_11 = { 1150382492, -1012793061, 1120024280 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 4.01839E+37f;
			bParam0->f_11 = { 1160225193, 1146526876, 1118555495 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = 5.824172E-31f;
			bParam0->f_11 = { 1151593125, 1150549473, 1125619200 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 5.430638E-08f;
			bParam0->f_11 = { 1109653594, 1155703308, 1128104303 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 2.382815E-29f;
			bParam0->f_11 = { 1121706451, 1151354930, 1127238337 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 2.897605E-21f;
			bParam0->f_11 = { -994747520, 1154664578, 1132413098 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -2.927825E+12f;
			bParam0->f_11 = { 1116066881, -1008809581, 1116753124 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = 3.772562E+33f;
			bParam0->f_11 = { -992722651, 1136545533, 1121200712 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = 1.272773E+27f;
			bParam0->f_11 = { -990114947, -1000118817, 1118426030 };
			break;
		case 10:
			func_191(bParam0);
			bParam0->f_5 = 4.63641E+15f;
			bParam0->f_11 = { -995474709, -996248581, 1118099174 };
			break;
		case 11:
			func_191(bParam0);
			bParam0->f_5 = -0.1827223f;
			bParam0->f_11 = { -988213038, -994689497, 1125430392 };
			break;
		case 12:
			func_191(bParam0);
			bParam0->f_5 = -2.482818E+25f;
			bParam0->f_11 = { -993858852, -990816433, 1112274782 };
			break;
		case 13:
			func_191(bParam0);
			bParam0->f_5 = 2.143608f;
			bParam0->f_11 = { -992178631, -987112374, 1115373995 };
			break;
		case 14:
			func_191(bParam0);
			bParam0->f_5 = 1.36093E+11f;
			bParam0->f_11 = { -989271882, -989231971, 1115740351 };
			break;
		case 15:
			func_191(bParam0);
			bParam0->f_5 = 4.013596E+22f;
			bParam0->f_11 = { -986762200, -985373528, 1086075133 };
			break;
		case 16:
			func_191(bParam0);
			bParam0->f_5 = 2.682644E+25f;
			bParam0->f_11 = { -985238862, -988404666, 1102433228 };
			break;
		case 17:
			func_191(bParam0);
			bParam0->f_5 = 1.035866E+21f;
			bParam0->f_11 = { -981211932, -987225547, 1059637386 };
			break;
		case 18:
			func_191(bParam0);
			bParam0->f_5 = 1.368246E-33f;
			bParam0->f_11 = { -980900620, -984833824, 1101141922 };
			break;
		case 19:
			func_191(bParam0);
			bParam0->f_5 = 1.311447E+15f;
			bParam0->f_11 = { -978679968, -983651352, -1045894686 };
			break;
		case 20:
			func_191(bParam0);
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
	func_190(bParam0);
	func_195(bParam0, 2);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -2.304212E-21f;
			bParam0->f_11 = { 1148175340, 1136654365, 1121850609 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = -2.163551E-07f;
			bParam0->f_11 = { 1152856182, -1001569757, 1112077029 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 8.612687E+30f;
			bParam0->f_11 = { -997766499, -1003605937, 1116542494 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -2.993282E+36f;
			bParam0->f_11 = { -994648458, -990823555, 1111600320 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 1.481728E+24f;
			bParam0->f_11 = { -979639716, -982260342, -1123641291 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 0.01074426f;
			bParam0->f_11 = { -986896496, -986216424, 1115795354 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = -6.736074E-18f;
			bParam0->f_11 = { -996723831, -991787701, 1114960149 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = 1.163363E-22f;
			bParam0->f_11 = { -992649275, -1005503634, 1125510675 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = 1.052811E-10f;
			bParam0->f_11 = { 1145618525, -1005440328, 1117693265 };
			break;
		case 9:
			func_191(bParam0);
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
			func_196(bParam0, iParam2);
			bParam0->f_5 = 1.854114E+09f;
			bParam0->f_11 = { -997137488, 1137085242, 1114766128 };
			break;
		case 1:
			func_196(bParam0, iParam2);
			bParam0->f_5 = -6.807417E-16f;
			bParam0->f_11 = { -996160647, 1133622801, 1117344917 };
			break;
		case 2:
			func_196(bParam0, iParam2);
			bParam0->f_5 = -6.2312E-08f;
			bParam0->f_11 = { -995399437, 1133360297, 1118569942 };
			break;
		case 3:
			func_196(bParam0, iParam2);
			bParam0->f_5 = -3.003877E-37f;
			bParam0->f_11 = { -997476867, 1137399507, 1113422063 };
			break;
		case 4:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 2.880072E-29f;
			bParam0->f_11 = { -996079017, 1125417039, 1116705443 };
			break;
		case 5:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 8.670444E+18f;
			bParam0->f_11 = { -993128883, -1025132724, 1126829287 };
			break;
		case 6:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 1.065102E+27f;
			bParam0->f_11 = { -997775860, -1010137639, 1120012245 };
			break;
		case 7:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 3.879419E+31f;
			bParam0->f_11 = { 1129240415, -1020633724, 1124239173 };
			break;
		case 8:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 8.235938E+25f;
			bParam0->f_11 = { -1004843341, 1127929951, 1109727406 };
			break;
		case 9:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 1.792932E-19f;
			bParam0->f_11 = { 1110541179, 1136795179, 1124193318 };
			break;
		case 10:
			func_196(bParam0, iParam2);
			bParam0->f_5 = 9.895492E+15f;
			bParam0->f_11 = { 1144798960, -1033341947, 1126016477 };
			break;
		case 11:
			func_196(bParam0, iParam2);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -1.916865E+25f;
			bParam0->f_11 = { -989814252, -988032438, 1115557402 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 5.481727E+08f;
			bParam0->f_11 = { -994006196, -988681787, 1110206545 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = -70.68216f;
			bParam0->f_11 = { -984086977, -988977810, 1015351744 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = 3.920366E+24f;
			bParam0->f_11 = { -983073949, -983522409, 1110753891 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = -1.284236E-09f;
			bParam0->f_11 = { -993676893, -993064731, 1117586734 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 6.689618E-31f;
			bParam0->f_11 = { -996505258, -997469797, 1116285923 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 1.261534f;
			bParam0->f_11 = { -996277247, -1002353267, 1119333330 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -4.792435E+22f;
			bParam0->f_11 = { -995044497, -1016449446, 1120302095 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = -5.891382E-23f;
			bParam0->f_11 = { -992531234, 1141532263 /* Float: 553.6f */, 1122045003 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = 4.285148E+18f;
			bParam0->f_11 = { -1007524280, -1030963963, 1110164746 };
			break;
		case 10:
			func_191(bParam0);
			bParam0->f_5 = -2.152774E+35f;
			bParam0->f_11 = { -1008383298, -1012053816, 1117869252 };
			break;
		case 11:
			func_191(bParam0);
			bParam0->f_5 = -4.120438E+35f;
			bParam0->f_11 = { 1149776553, 1102972358, 1118859600 };
			break;
		case 12:
			func_191(bParam0);
			bParam0->f_5 = 7.080043E-12f;
			bParam0->f_11 = { 1148848228, 1137757089, 1121440001 };
			break;
		case 13:
			func_191(bParam0);
			bParam0->f_5 = 0.0005734964f;
			bParam0->f_11 = { 1144155884, 1102854928, 1125651561 };
			break;
		case 14:
			func_191(bParam0);
			bParam0->f_5 = -2.95344E+10f;
			bParam0->f_11 = { 1115625368, 1149230895, 1128921492 };
			break;
		case 15:
			func_191(bParam0);
			bParam0->f_5 = -8.519349E-14f;
			bParam0->f_11 = { 1136088416, 1152390468, 1127157629 };
			break;
		case 16:
			func_191(bParam0);
			bParam0->f_5 = -6.511829E+17f;
			bParam0->f_11 = { 1155481063, 1153318988, 1125852394 };
			break;
		case 17:
			func_191(bParam0);
			bParam0->f_5 = 7.159146E-31f;
			bParam0->f_11 = { 1151328826, 1150391732, 1125466165 };
			break;
		case 18:
			func_191(bParam0);
			bParam0->f_5 = -0.0003355019f;
			bParam0->f_11 = { 1157867338, 1129291248, 1116823860 };
			break;
		case 19:
			func_191(bParam0);
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
	func_190(bParam0);
	bParam0->f_10 = 1114636288; /* Float: 60f */
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = 0.0005758301f;
			bParam0->f_11 = { 1153648607, -989860561, 1111318751 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = -17030.08f;
			bParam0->f_11 = { 1152155222, -992737288, 1116059878 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = -5.323573E+13f;
			bParam0->f_11 = { 1154135704, -993113154, 1113595852 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -9.14138E+21f;
			bParam0->f_11 = { 1153178567, -994590515, 1116652531 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = -1.558658E+30f;
			bParam0->f_11 = { 1149720044, -996262068, 1116152319 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 3.547867E+31f;
			bParam0->f_11 = { 1143646282, -998764357, 1112649420 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = -5.639034E-38f;
			bParam0->f_11 = { 1144058230, -1000510924, 1111559286 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -2.603637E-21f;
			bParam0->f_11 = { 1146873879, -1006208396, 1118835253 };
			break;
		case 8:
			func_191(bParam0);
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
	func_190(bParam0);
	func_195(bParam0, 1);
	func_195(bParam0, 4);
	func_195(bParam0, 8);
	func_195(bParam0, 16);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -4.117585E-20f;
			bParam0->f_11 = { func_197(func_123(iParam2)) };
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
			func_198(bParam0, iParam2);
			bParam0->f_5 = -4.144115E-32f;
			bParam0->f_11 = { -1012024832, 1144600400, 1122560233 };
			break;
		case 1:
			func_198(bParam0, iParam2);
			bParam0->f_5 = 1.159463E-07f;
			bParam0->f_11 = { -1011592405, 1145963032, 1122432036 };
			break;
		case 2:
			func_198(bParam0, iParam2);
			bParam0->f_5 = -1.15123E+13f;
			bParam0->f_11 = { 1161352091, 1141055007, 1110354478 };
			break;
		case 3:
			func_198(bParam0, iParam2);
			bParam0->f_5 = -4.764357E+21f;
			bParam0->f_11 = { 1161428522, 1141263967, 1110028140 };
			break;
		case 4:
			func_198(bParam0, iParam2);
			bParam0->f_5 = 2.851511E-33f;
			bParam0->f_11 = { 1152685125, -995016853, 1117549030 };
			break;
		case 5:
			func_198(bParam0, iParam2);
			bParam0->f_5 = 2.691375E-18f;
			bParam0->f_11 = { 1152271722, -994976941, 1117647735 };
			break;
		case 6:
			func_198(bParam0, iParam2);
			bParam0->f_5 = -8.662306E+07f;
			bParam0->f_11 = { 1161511505, 1151924702, 1110169294 };
			break;
		case 7:
			func_198(bParam0, iParam2);
			bParam0->f_5 = -5.357437E+16f;
			bParam0->f_11 = { 1161182181, 1150942838, 1110331674 };
			break;
		case 8:
			func_198(bParam0, iParam2);
			bParam0->f_5 = -1.278147E+09f;
			bParam0->f_11 = { -1001364507, -993985196, 1114538613 };
			break;
		case 9:
			func_198(bParam0, iParam2);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = 2.848424E+38f;
			bParam0->f_11 = { 1158286001, -1011910128, 1109783478 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 4.950299E+31f;
			bParam0->f_11 = { 1155054987, -1003099378, 1109629233 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = 2.368803E-22f;
			bParam0->f_11 = { -990018183, 1137892770, 1123441718 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -4.61136E+32f;
			bParam0->f_11 = { 1131335818, 1151032549, 1127862573 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 0.9061007f;
			bParam0->f_11 = { 1143046242, 1151540655, 1128361925 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = -1.810033E+29f;
			bParam0->f_11 = { 1138457552, 1146079004, 1125234016 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = -0.0002372616f;
			bParam0->f_11 = { -1006079803, 1136971576, 1118700516 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = -2.273169E+07f;
			bParam0->f_11 = { 1149130670, 1149553230, 1126102794 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = 3.949332E+16f;
			bParam0->f_11 = { 1158357864, -1015502465, 1110060066 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = -6.086829E+07f;
			bParam0->f_11 = { 1159753291, -1030868474, 1111840077 };
			break;
		case 10:
			func_191(bParam0);
			bParam0->f_5 = 2.206825E-28f;
			bParam0->f_11 = { 1152229966, -989246687, 1111577251 };
			break;
		case 11:
			func_191(bParam0);
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
	func_199(bParam0, iParam2);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -5.322689E+14f;
			bParam0->f_11 = { 1158061201, -992888888, 1109541939 };
			break;
		case 1:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -4.244014E+24f;
			bParam0->f_11 = { 1158203738, -993561462, 1109548335 };
			break;
		case 2:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -2.455464E-06f;
			bParam0->f_11 = { 1157752578, -992748284, 1109574183 };
			break;
		case 3:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -8059160f;
			bParam0->f_11 = { 1157705048, -992155204, 1109424420 };
			break;
		case 4:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.142636E-18f;
			bParam0->f_11 = { 1157970814, -991349475, 1109415349 };
			break;
		case 5:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 2.602319E-24f;
			bParam0->f_11 = { 1158207949, -1004305669, 1109540943 };
			break;
		case 6:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.098314E-10f;
			bParam0->f_11 = { 1158709142, -1006060415, 1109540943 };
			break;
		case 7:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.790267f;
			bParam0->f_11 = { 1158301428, -1005197425, 1109540943 };
			break;
		case 8:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -3.506853E+11f;
			bParam0->f_11 = { 1158550900, -1003652067, 1109540943 };
			break;
		case 9:
			func_200(bParam0, iParam1);
			bParam0->f_5 = 8.968142E+11f;
			bParam0->f_11 = { 1158720140, -1005197527, 1109540943 };
			break;
		case 10:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.055209E+16f;
			bParam0->f_11 = { 1160600510, -1004983139, 1109559581 };
			break;
		case 11:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -225603.3f;
			bParam0->f_11 = { 1160708629, -1003110233, 1109553735 };
			break;
		case 12:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -2.767887E-05f;
			bParam0->f_11 = { 1160405518, -1004165304, 1109531899 };
			break;
		case 13:
			func_200(bParam0, iParam1);
			bParam0->f_5 = -1.401141E-16f;
			bParam0->f_11 = { 1160340020, -1006263429, 1109554627 };
			break;
		case 14:
			func_200(bParam0, iParam1);
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
			func_201(bParam0, iParam1);
			bParam0->f_5 = -2.038598E+37f;
			bParam0->f_11 = { -992608256 /* Float: -1712f */, 1143013376 /* Float: 644f */, 1123391898 /* Float: 122.8f */ };
			break;
		case 1:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -9.659467E+26f;
			bParam0->f_11 = { -987852390, 1146452378 /* Float: 853.9f */, 1125941248 /* Float: 156.5f */ };
			break;
		case 2:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -8.923116E+15f;
			bParam0->f_11 = { -987960525, 1140968653 /* Float: 519.2f */, 1124859904 /* Float: 140f */ };
			break;
		case 3:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 176098.3f;
			bParam0->f_11 = { -990905958, 1144768102 /* Float: 751.1f */, 1125548032 /* Float: 150.5f */ };
			break;
		case 4:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -9.05571E+28f;
			bParam0->f_11 = { -990057264, 1143319567, 1123007883 };
			break;
		case 5:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -1.786527E-35f;
			bParam0->f_11 = { -988268782, 1146028892, 1124790790 };
			break;
		case 6:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -4.511086E-25f;
			bParam0->f_11 = { -988056648, 1137647573, 1125402359 };
			break;
		case 7:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -5.512158E-19f;
			bParam0->f_11 = { -987680690, 1135288051, 1125486979 };
			break;
		case 8:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -0.001709003f;
			bParam0->f_11 = { -995344834, 1132765728, 1117548970 };
			break;
		case 9:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -5.630045E+34f;
			bParam0->f_11 = { -996727087, 1126975655, 1109523798 };
			break;
		case 10:
			func_201(bParam0, iParam1);
			bParam0->f_5 = 1.106593E-18f;
			bParam0->f_11 = { -997693950, -1038792419, 1109531191 };
			break;
		case 11:
			func_201(bParam0, iParam1);
			bParam0->f_5 = -4.837103E+08f;
			bParam0->f_11 = { -1000809505, 1141231781, 1114093833 };
			break;
		case 12:
			func_201(bParam0, iParam1);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -8.612918E+14f;
			bParam0->f_11 = { -988725982, -1008850803, 1125072214 };
			break;
		case 1:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -274406f;
			bParam0->f_11 = { -988464002, -1012496948, 1125049277 };
			break;
		case 2:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = NaNf;
			bParam0->f_11 = { -987502590, -1012179590, 1124960272 };
			break;
		case 3:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -5.418765E-15f;
			bParam0->f_11 = { -986938083, -1029981707, 1125637043 };
			break;
		case 4:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -4.266224E-27f;
			bParam0->f_11 = { -988930966, -1007885147, 1124752530 };
			break;
		case 5:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -980838.1f;
			bParam0->f_11 = { 1159267230, 1141537636, 1115958804 /* Float: 66.09f */ };
			break;
		case 6:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = 9.562718E+30f;
			bParam0->f_11 = { 1158487625, 1132486158, 1110351780 };
			break;
		case 7:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = 2.717809E+31f;
			bParam0->f_11 = { 1158761782, 1147136169, 1116686923 };
			break;
		case 8:
			func_192(bParam0, 1);
			bParam0->f_5 = -9.354164E+14f;
			bParam0->f_11 = { 1159003386, 1149732085, 1118559705 };
			break;
		case 9:
			func_192(bParam0, 1);
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
	func_190(bParam0);
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
			func_192(bParam0, 0);
			bParam0->f_5 = -120.0375f;
			bParam0->f_11 = { -991423617, 1155620198, 1131040276 };
			break;
		case 1:
			func_192(bParam0, 0);
			bParam0->f_5 = -2.660786E+15f;
			bParam0->f_11 = { -991714079, 1153682243, 1131138698 };
			break;
		case 2:
			func_192(bParam0, 0);
			bParam0->f_5 = 1.184275E-30f;
			bParam0->f_11 = { -989767363, 1155701240, 1131810272 };
			break;
		case 3:
			func_192(bParam0, 0);
			bParam0->f_5 = -2.187653E+19f;
			bParam0->f_11 = { -990805961, 1158058868, 1134648430 };
			break;
		case 4:
			func_192(bParam0, 0);
			bParam0->f_5 = 7.970961E-07f;
			bParam0->f_11 = { -992277732, 1156836304, 1132740906 };
			break;
		case 5:
			func_192(bParam0, 1);
			bParam0->f_5 = 3.86703E+21f;
			bParam0->f_11 = { 1148176957, 1142602926, 1120107626 };
			break;
		case 6:
			func_192(bParam0, 1);
			bParam0->f_5 = 9.622145E+12f;
			bParam0->f_11 = { 1148782335, 1140850721, 1120049798 };
			break;
		case 7:
			func_192(bParam0, 1);
			bParam0->f_5 = -7.549088E+09f;
			bParam0->f_11 = { 1150806073, 1141598568, 1118713020 };
			break;
		case 8:
			func_192(bParam0, 1);
			bParam0->f_5 = -14.39795f;
			bParam0->f_11 = { 1151102691, 1135372616, 1119368577 };
			break;
		case 9:
			func_192(bParam0, 1);
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
	func_190(bParam0);
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
			func_192(bParam0, 0);
			bParam0->f_5 = -2.380014E-24f;
			bParam0->f_11 = { -995552140, -987798002, 1117123733 };
			break;
		case 1:
			func_192(bParam0, 0);
			bParam0->f_5 = -1.78623E+10f;
			bParam0->f_11 = { -990956493, -989177591, 1109931275 };
			break;
		case 2:
			func_192(bParam0, 0);
			bParam0->f_5 = 4.690053E-36f;
			bParam0->f_11 = { -992330680, -988459800, 1110132785 };
			break;
		case 3:
			func_192(bParam0, 1);
			bParam0->f_5 = 1.948744E+32f;
			bParam0->f_11 = { -993582233, -988610888, 1110185843 };
			break;
		case 4:
			func_192(bParam0, 1);
			bParam0->f_5 = 8.647611E+23f;
			bParam0->f_11 = { -991882023, -993157580, 1119974693 };
			break;
		case 5:
			func_192(bParam0, 1);
			bParam0->f_5 = -6.423808E-24f;
			bParam0->f_11 = { -993294617, -990711368, 1112058652 };
			break;
		case 6:
			func_192(bParam0, 2);
			bParam0->f_5 = -1.791026E-06f;
			bParam0->f_11 = { 1159248741, -1046889733, 1110236227 };
			break;
		case 7:
			func_192(bParam0, 2);
			bParam0->f_5 = 7.396245E+34f;
			bParam0->f_11 = { 1160363664, -1023361339, 1109921550 };
			break;
		case 8:
			func_192(bParam0, 2);
			bParam0->f_5 = 7.494099E-32f;
			bParam0->f_11 = { 1158921326, 1095914802, 1109741326 };
			break;
		case 9:
			func_192(bParam0, 2);
			bParam0->f_5 = 1.342886E+08f;
			bParam0->f_11 = { 1158886759, -1015588513, 1109801723 };
			break;
		case 10:
			func_192(bParam0, 2);
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
			func_202(bParam0, iParam1);
			bParam0->f_5 = 0.0009226644f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977418783, -983523996, -1064595096 };
			break;
		case 1:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 400348.8f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977155092, -983077929, -1064761630 };
			break;
		case 2:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 1.816392E+09f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978445599, -982307471, -1040579926 };
			break;
		case 3:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 2.952954E+17f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977323950, -982706913, -1039934161 };
			break;
		case 4:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 3.670386E+30f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977549271, -982846915, -1043804979 /* Float: -25.1f */ };
			break;
		case 5:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -8.686904E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977780292, -982630996, -1040579874 };
			break;
		case 6:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 2.642126E-14f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -976830080, -984312220, -1049936318 };
			break;
		case 7:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.378686E-16f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977072919, -984193168, 1069253919 /* Float: 1.465f */ };
			break;
		case 8:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.230984E-26f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977380271, -984323986, 1099912027 };
			break;
		case 9:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -6.553197E-35f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977456769, -983523121, -1063541906 };
			break;
		case 10:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 8.637232E-13f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978366554, -982756861, -1044300772 };
			break;
		case 11:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 1.752292E-11f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978254555, -983655521, -1044299645 };
			break;
		case 12:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 1.670123f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977954760, -982722422, -1042385260 };
			break;
		case 13:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -0.602618f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -977759215, -983824648, -1044300169 };
			break;
		case 14:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.833368E+12f;
			bParam0->f_20[0] = -3.665985E+37f;
			bParam0->f_27 = 1;
			bParam0->f_11 = { -978071834, -984716182, -1044299435 };
			break;
		case 15:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 3.26606E+37f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -999665125, -991067580, 1112228039 };
			break;
		case 16:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -5.374648E+10f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -997944773, -992452114, 1117191947 };
			break;
		case 17:
			func_202(bParam0, iParam1);
			bParam0->f_5 = -1.878287E+19f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { -998009571, -992010712, 1115281487 };
			break;
		case 18:
			func_202(bParam0, iParam1);
			bParam0->f_5 = 2.573031E-25f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { -999292823, -993021026, 1116192584 };
			break;
		case 19:
			func_202(bParam0, iParam1);
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
			func_203(bParam0, iParam1);
			bParam0->f_5 = 3.918093E+24f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1153029020, -989478362, 1111263331 };
			break;
		case 1:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -1.092243E-15f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1152320247, -989371098, 1111316916 };
			break;
		case 2:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 1.756841E+34f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150925192, -989638649, 1113899821 };
			break;
		case 3:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 0.01141832f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1149342358, -989449118, 1110418915 };
			break;
		case 4:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 2.219954E+08f;
			bParam0->f_20[0] = -7.232669E-38f;
			bParam0->f_27 = 8;
			bParam0->f_11 = { 1150606075, -989156405, 1113924200 };
			break;
		case 5:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 0.0009091725f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1158499475, -1011192224, 1109620320 };
			break;
		case 6:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 7.177287E+13f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1154223442, -1004918764, 1110145185 };
			break;
		case 7:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -2.752983E-12f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157954043, -1000154145, 1109563592 };
			break;
		case 8:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -0.0005524897f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157428810, -998356438, 1110022501 };
			break;
		case 9:
			func_203(bParam0, iParam1);
			bParam0->f_5 = NaNf;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 18;
			bParam0->f_11 = { 1157816127, -1002908413, 1109728847 };
			break;
		case 10:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 25235.61f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1158183074, -1017816200, 1110843877 };
			break;
		case 11:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 9.829717E-32f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1158191810, -1037171163, 1112596493 };
			break;
		case 12:
			func_203(bParam0, iParam1);
			bParam0->f_5 = 1.242477E-37f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 2;
			bParam0->f_11 = { 1159264072, -1034149534, 1110360116 };
			break;
		case 13:
			func_203(bParam0, iParam1);
			bParam0->f_5 = -1.672978E-23f;
			bParam0->f_20[0] = 4.27551E+12f;
			bParam0->f_27 = 16;
			bParam0->f_11 = { 1155861872, -1013011186, 1110889726 };
			break;
		case 14:
			func_203(bParam0, iParam1);
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
	func_190(bParam0);
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
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			bParam0->f_5 = -4.286879E+09f;
			bParam0->f_11 = { -987243245, -987194041, 1116719088 };
			break;
		case 1:
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			bParam0->f_5 = -1899.75f;
			bParam0->f_11 = { -986605684, -986590464, 1118613838 };
			break;
		case 2:
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			bParam0->f_5 = 3.146079E+11f;
			bParam0->f_11 = { -985776553, -989418570, 1114616784 };
			break;
		case 3:
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			bParam0->f_5 = 6.593053E+11f;
			bParam0->f_11 = { -987375265, -989464530, 1117252747 };
			break;
		case 4:
			func_192(bParam0, 3);
			func_192(bParam0, 4);
			func_192(bParam0, 5);
			bParam0->f_5 = -1.312522E-18f;
			bParam0->f_11 = { -985019226, -988272544, 1104503741 };
			break;
		case 5:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			bParam0->f_5 = 2.867698E+08f;
			bParam0->f_11 = { -996986113, -1002752333, 1116184379 };
			break;
		case 6:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			bParam0->f_5 = -6.92375E-06f;
			bParam0->f_11 = { -992414219, -1004726909, 1125195750 };
			break;
		case 7:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			bParam0->f_5 = -3.40923E+18f;
			bParam0->f_11 = { -993747441, -1012637008, 1126210594 };
			break;
		case 8:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			bParam0->f_5 = 1.232282E+31f;
			bParam0->f_11 = { -994642775, -1007637411, 1124203803 };
			break;
		case 9:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
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
			func_204(bParam0, iParam1);
			bParam0->f_5 = 3.646808E-23f;
			bParam0->f_11 = { 1150683855, -1005713036, 1116128910 };
			break;
		case 1:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -7.877037E+07f;
			bParam0->f_11 = { 1150993217, -1006063437, 1116018901 };
			break;
		case 2:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.005039E-10f;
			bParam0->f_11 = { 1151451230, -1004746306, 1114369085 };
			break;
		case 3:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.785908E+20f;
			bParam0->f_11 = { 1151746969, -1003404036, 1115786943 };
			break;
		case 4:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 3.983027E+21f;
			bParam0->f_11 = { 1150468175, -1006492490, 1116347446 };
			break;
		case 5:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 9.595287E-17f;
			bParam0->f_11 = { 1142739862, -998127987, 1109931092 };
			break;
		case 6:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 4.824729E-06f;
			bParam0->f_11 = { 1143530648, -997446161, 1112212583 };
			break;
		case 7:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.555951E-17f;
			bParam0->f_11 = { 1145558704, -996876822, 1110177926 };
			break;
		case 8:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -1.385647E-16f;
			bParam0->f_11 = { 1144808753, -998900395, 1111449194 };
			break;
		case 9:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 5765001;
			bParam0->f_11 = { 1144681982, -997458662, 1113462643 };
			break;
		case 10:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -3.727919E+33f;
			bParam0->f_11 = { -999235848, 1158407363, 1135288923 };
			break;
		case 11:
			func_204(bParam0, iParam1);
			bParam0->f_5 = 2.834275E-37f;
			bParam0->f_11 = { -997616521, 1157762749, 1136059217 };
			break;
		case 12:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.125516E+37f;
			bParam0->f_11 = { -996725295, 1159158302, 1134227512 };
			break;
		case 13:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -6.073288E+28f;
			bParam0->f_11 = { -996139521, 1159254566, 1134068335 };
			break;
		case 14:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -9.716002E+15f;
			bParam0->f_11 = { -995651811, 1158654911, 1134189992 };
			break;
		case 15:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.14266E-06f;
			bParam0->f_11 = { -997133115, 1158828474, 1134675008 };
			break;
		case 16:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -5.611622E-15f;
			bParam0->f_11 = { -995741939, 1158524377, 1134203093 };
			break;
		case 17:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -8.89924E-28f;
			bParam0->f_11 = { -996781341, 1158214044, 1135003058 };
			break;
		case 18:
			func_204(bParam0, iParam1);
			bParam0->f_5 = -2.426253E-36f;
			bParam0->f_11 = { -997034512, 1158656755, 1134669408 };
			break;
		case 19:
			func_204(bParam0, iParam1);
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
	func_190(bParam0);
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
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = 1.556235f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 1:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -3.54697E+20f;
			bParam0->f_11 = { 1160742329, 1158620392, 1125895471 };
			break;
		case 2:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = -7.010831E+29f;
			bParam0->f_11 = { 1158759424, 1158020974, 1129532155 };
			break;
		case 3:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = 0.5552369f;
			bParam0->f_11 = { 1161021582, 1158174346, 1125959447 };
			break;
		case 4:
			func_192(bParam0, 2);
			func_192(bParam0, 3);
			bParam0->f_5 = 5.641576E-08f;
			bParam0->f_11 = { 1159436980, 1158518524, 1127193084 };
			break;
		case 5:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -0.2321862f;
			bParam0->f_11 = { -999341769, 1153549610, 1131245824 };
			break;
		case 6:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -1.205842E+25f;
			bParam0->f_11 = { -998248058, 1153643433, 1131245044 };
			break;
		case 7:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			bParam0->f_5 = -3.072352E+30f;
			bParam0->f_11 = { -998853848, 1154255222, 1131245044 };
			break;
		case 8:
			func_192(bParam0, 1);
			bParam0->f_5 = -1.409052E+17f;
			bParam0->f_11 = { -1000688253, 1153133963, 1131787328 };
			break;
		case 9:
			func_192(bParam0, 1);
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
			func_205(bParam0, iParam1);
			bParam0->f_5 = -6.309624E-30f;
			bParam0->f_11 = { 1154364192, 1151788160, 1125180460 };
			break;
		case 1:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 7.606064E+25f;
			bParam0->f_11 = { 1154869233, 1152846377, 1125278476 };
			break;
		case 2:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 2.218614E+17f;
			bParam0->f_11 = { 1153706225, 1152094345, 1125190297 };
			break;
		case 3:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -1.157902E+13f;
			bParam0->f_11 = { 1152541464, 1154788643, 1128653927 };
			break;
		case 4:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -2.208555E-05f;
			bParam0->f_11 = { 1153908388, 1154337653, 1125090682 };
			break;
		case 5:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -6.017928E-08f;
			bParam0->f_11 = { 1154735909, 1155106681, 1128038151 };
			break;
		case 6:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -1.237041E-16f;
			bParam0->f_11 = { 1153040328, 1149590831, 1127637621 };
			break;
		case 7:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 5.533065E-30f;
			bParam0->f_11 = { 1152335237, 1151709616, 1126430749 };
			break;
		case 8:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 9885199;
			bParam0->f_11 = { 1155699398, 1150631311, 1129836629 };
			break;
		case 9:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 9.559201E+09f;
			bParam0->f_11 = { 1156747148, 1152229918, 1127341831 };
			break;
		case 10:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -4.436288E-35f;
			bParam0->f_11 = { 1124022813, 1155799348, 1128746117 };
			break;
		case 11:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -1.112515E-34f;
			bParam0->f_11 = { 1126222909, 1155178095, 1128302759 };
			break;
		case 12:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 8.374794E+15f;
			bParam0->f_11 = { 1124085524, 1156180820, 1128849369 };
			break;
		case 13:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 1.249266E+27f;
			bParam0->f_11 = { 1127834989, 1155794550, 1128809025 };
			break;
		case 14:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 4.025592E+09f;
			bParam0->f_11 = { 1128547897, 1155183043, 1128488488 };
			break;
		case 15:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 1.084824E-19f;
			bParam0->f_11 = { 1131359109, 1156530293, 1129108052 };
			break;
		case 16:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 2.098147E-10f;
			bParam0->f_11 = { 1140864727, 1156629084, 1128739524 };
			break;
		case 17:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 3.394846E-38f;
			bParam0->f_11 = { 1134731044, 1156432553, 1128796586 };
			break;
		case 18:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 1.905542E-27f;
			bParam0->f_11 = { 1135884150, 1155955537, 1127818507 };
			break;
		case 19:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 346.6985f;
			bParam0->f_11 = { 1140660978, 1156284065, 1128919446 };
			break;
		case 20:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 5.304888E+32f;
			bParam0->f_11 = { 1132321512, 1154821639, 1127963630 };
			break;
		case 21:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -1.086162E-34f;
			bParam0->f_11 = { 1134575491, 1155073307, 1128286637 };
			break;
		case 22:
			func_205(bParam0, iParam1);
			bParam0->f_5 = 8.374264E+35f;
			bParam0->f_11 = { -1041303234, 1154911538, 1127437946 };
			break;
		case 23:
			func_205(bParam0, iParam1);
			bParam0->f_5 = -1.348186E-11f;
			bParam0->f_11 = { -1046114730, 1154224028, 1126303511 };
			break;
		case 24:
			func_205(bParam0, iParam1);
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
	func_206(bParam0, iParam1, iParam2);
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
	func_207(bParam0, iParam1, iParam2);
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
	func_190(bParam0);
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
			func_192(bParam0, 0);
			break;
		case 1:
			bParam0->f_5 = 1.370795E+25f;
			bParam0->f_11 = { 1141419185, 1147851535, 1126274761 };
			func_192(bParam0, 0);
			break;
		case 2:
			bParam0->f_5 = 9.042136E+19f;
			bParam0->f_11 = { -1022449556, 1150936087, 1126466414 };
			func_192(bParam0, 0);
			break;
		case 3:
			bParam0->f_5 = 2.160843E+11f;
			bParam0->f_11 = { 1137552143, 1151738464, 1127506903 };
			func_192(bParam0, 0);
			break;
		case 4:
			bParam0->f_5 = -3.011542E-17f;
			bParam0->f_11 = { 1139597577, 1149032461, 1127027612 };
			func_192(bParam0, 0);
			break;
		case 5:
			bParam0->f_5 = -4.446832E-24f;
			bParam0->f_11 = { -981235030, -987276933, 1085129989 };
			func_192(bParam0, 1);
			break;
		case 6:
			bParam0->f_5 = -4.622995E+21f;
			bParam0->f_11 = { -981130001, -988364378, 1102909800 };
			func_192(bParam0, 1);
			break;
		case 7:
			bParam0->f_5 = -1.802733E+33f;
			bParam0->f_11 = { -980393105, -987348890, -1061350801 };
			func_192(bParam0, 1);
			break;
		case 8:
			bParam0->f_5 = 1.967467f;
			bParam0->f_11 = { -980903801, -985394196, -1071267185 /* Float: -2.59f */ };
			func_192(bParam0, 1);
			break;
		case 9:
			bParam0->f_5 = -7.983214E+29f;
			bParam0->f_11 = { -981449811, -989801596, 1083838982 };
			func_192(bParam0, 1);
			break;
	}
}

void func_103(bool bParam0, int iParam1)
{
	bParam0->f_6 = 1;
	*bParam0 = 11;
	bParam0->f_1 = 1;
	bParam0->f_2 = 1;
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -2.764938E+31f;
			bParam0->f_11 = { -987648316, -1014741896, 1126279879 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = -3.932373E-38f;
			bParam0->f_11 = { -987684123, 1136819136, 1125408578 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = -4.217522E-34f;
			bParam0->f_11 = { -989247175, 1139436460, 1122968220 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = 4.754441E-35f;
			bParam0->f_11 = { -993221014, -994236548, 1118131821 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = 5.129355E-24f;
			bParam0->f_11 = { -1001499710, -991846804, 1114382349 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = 277.6303f;
			bParam0->f_11 = { 1155489095, 1153867170, 1126659935 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 7.336496E+37f;
			bParam0->f_11 = { 1156906141, 1152215046, 1127467319 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = 3.488513E-14f;
			bParam0->f_11 = { 1142908396, 1157838665, 1130235875 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = -3.891272E+29f;
			bParam0->f_11 = { 1151470150, 1150367213, 1125524301 };
			break;
		case 9:
			func_191(bParam0);
			bParam0->f_5 = 2.633142E+37f;
			bParam0->f_11 = { -989641739, -995386273, 1124039697 };
			break;
		case 10:
			func_191(bParam0);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -9.677925E+28f;
			bParam0->f_11 = { -997542154, 1157860159, 1135917033 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = 1.15976E+21f;
			bParam0->f_11 = { -981047785, -984131167, 1107628138 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = -1.475104E+12f;
			bParam0->f_11 = { -982288543, -988035027, -1053212300 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -5.826799E-05f;
			bParam0->f_11 = { -989272033, -986500208, 1103839767 };
			break;
		case 4:
			func_191(bParam0);
			bParam0->f_5 = -104.3275f;
			bParam0->f_11 = { -989708727, -995061336, 1124326316 };
			break;
		case 5:
			func_191(bParam0);
			bParam0->f_5 = -214.0117f;
			bParam0->f_11 = { -1000315293, 1141241518, 1114173656 };
			break;
		case 6:
			func_191(bParam0);
			bParam0->f_5 = 4.977976E-28f;
			bParam0->f_11 = { 1133271944, 1132722864, 1122092791 };
			break;
		case 7:
			func_191(bParam0);
			bParam0->f_5 = 2.99861E+07f;
			bParam0->f_11 = { 1153532590, 1151951645, 1125256770 };
			break;
		case 8:
			func_191(bParam0);
			bParam0->f_5 = -54188.87f;
			bParam0->f_11 = { 1160105939, 1150595099, 1122854935 };
			break;
		case 9:
			func_191(bParam0);
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
	func_190(bParam0);
	switch (iParam1)
	{
		case 0:
			func_191(bParam0);
			bParam0->f_5 = -1.026791E+10f;
			bParam0->f_11 = { -994349899, -1005945697, 1124323804 };
			break;
		case 1:
			func_191(bParam0);
			bParam0->f_5 = -2.105499E+09f;
			bParam0->f_11 = { -992210537, 1132875754, 1122853826 };
			break;
		case 2:
			func_191(bParam0);
			bParam0->f_5 = -1.206049E-09f;
			bParam0->f_11 = { -986930676, -1021440920, 1125574076 };
			break;
		case 3:
			func_191(bParam0);
			bParam0->f_5 = -1.383321E-18f;
			bParam0->f_11 = { -1003232130, -1002620434, 1111966032 };
			break;
		case 4:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			bParam0->f_5 = -1.482653E+35f;
			bParam0->f_11 = { 1148051879, -996406306, 1113029141 };
			break;
		case 5:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
			bParam0->f_5 = 2.080852E-36f;
			bParam0->f_11 = { 1149765967, -995011794, 1113468586 };
			break;
		case 6:
			func_192(bParam0, 0);
			func_192(bParam0, 2);
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
			func_208(bParam0, iParam1);
			bParam0->f_5 = -6.868404E+23f;
			bParam0->f_11 = { -989719630, -986879604, 1117463288 };
			break;
		case 1:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -0.02577076f;
			bParam0->f_11 = { -988991611, -986448994, 1103674055 };
			break;
		case 2:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -2.063277E-28f;
			bParam0->f_11 = { -986263483, -986898915, 1119832166 };
			break;
		case 3:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 6.326727E-20f;
			bParam0->f_11 = { -987396588, -986047399, 1117313263 };
			break;
		case 4:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -3.354263E+31f;
			bParam0->f_11 = { -988725571, -989745785, 1118847028 };
			break;
		case 5:
			func_208(bParam0, iParam1);
			bParam0->f_5 = -1.882589E-31f;
			bParam0->f_11 = { -984090304, -988968142, 1083628218 };
			break;
		case 6:
			func_208(bParam0, iParam1);
			bParam0->f_5 = 2.757583E+32f;
			bParam0->f_11 = { -983575685, -983290305, -1051860245 };
			break;
		case 7:
			func_208(bParam0, iParam1);
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
	iVar0 = func_209(iParam1);
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
	*bParam0 = func_210(iVar0);
	bParam0->f_1 = 0;
	bParam0->f_6 = 2;
	func_195(bParam0, 32);
	if (iParam2 != -1)
	{
		bParam0->f_9 = func_212(func_211(iVar0), iParam2);
		bParam0->f_15[0] = func_213(func_211(iVar0), iParam2);
		bParam0->f_5 = func_214(iVar0, iParam2);
		bParam0->f_11 = { func_215(iVar0, iParam2) };
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

	NETWORK::RESERVE_NETWORK_MISSION_PEDS(8);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			Local_111[iVar1 /*19*/].f_7.f_2[iVar0] = -1f;
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
		while (iVar2 < 1)
		{
			if (func_176(iVar1, iVar2))
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
}

void func_114()
{
	func_216(0, 9.814892E-15f);
	func_219(0, func_217(), func_218(), 1);
	switch (func_117())
	{
		case 0:
			func_220(0, -8853.215f);
			break;
		case 1:
			func_220(0, -8853.215f);
			func_216(1, 4.34125E-09f);
			func_219(1, func_217(), func_221(0), 1);
			break;
		case 2:
			func_220(0, 2.191078E+21f);
			break;
	}
	switch (func_222())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (func_117() == 0)
			{
				func_219(0, func_223((func_222() - 5)), func_218(), 1);
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			break;
	}
	Local_13.f_24.f_28[2] = 1;
	func_224(2, 8);
	func_216(2, -8.977819E-30f);
	Local_13.f_24.f_19[2] = 0;
	func_219(2, func_225(0), func_221(0), 1);
	Local_13.f_24.f_28[3] = 1;
	func_224(3, 8);
	func_216(3, -8.977819E-30f);
	Local_13.f_24.f_19[3] = 0;
	func_219(3, func_225(1), func_221(1), 1);
	Local_13.f_24.f_28[4] = 1;
	func_224(4, 8);
	func_216(4, -8.977819E-30f);
	Local_13.f_24.f_19[4] = 0;
	func_219(4, func_225(4), func_221(2), 1);
	Local_13.f_24.f_28[5] = 1;
	func_224(5, 8);
	func_216(5, -8.977819E-30f);
	Local_13.f_24.f_19[5] = 0;
	func_219(5, func_225(3), func_221(0), 1);
	if (func_117() != 2)
	{
		Local_13.f_24.f_28[6] = 1;
		func_224(6, 8);
		func_216(6, -8.977819E-30f);
		Local_13.f_24.f_19[6] = 0;
		func_219(6, func_225(2), func_221(1), 1);
		Local_13.f_24.f_28[7] = 1;
		func_224(7, 8);
		func_216(7, -8.977819E-30f);
		Local_13.f_24.f_19[7] = 0;
		func_219(7, func_225(5), func_221(2), 1);
	}
}

void func_115()
{
}

void func_116(int iParam0)
{
	MISC::SET_BIT(&(Local_720.f_19), iParam0);
}

int func_117()
{
	return Local_720.f_3;
}

void func_118(int iParam0, float fParam1, bool bParam2, float fParam3)
{
	Local_720.f_25 = 1;
	Local_720.f_25.f_1 = iParam0;
	Local_720.f_25.f_3 = fParam1;
	if (bParam2)
	{
		func_226(&(Local_720.f_25), 1);
	}
	if (fParam3 > 0f)
	{
		Local_720.f_25.f_27 = fParam3;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7 = 1;
		func_227();
	}
}

void func_119()
{
	func_228(1);
	func_226(&(Local_720.f_25), 32);
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
	return func_229(uParam0->f_25, iParam1);
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
		func_230(&(Local_13.f_1), iParam0);
	}
}

bool func_125(int iParam0)
{
	if (!func_186(iParam0))
	{
		return false;
	}
	return (func_231(iParam0) && Global_1141317[iParam0 /*27*/].f_18.f_1 != 0);
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
	if (func_232(Local_720.f_15))
	{
		*uParam31 = 1;
		return false;
	}
	if (!VOLUME::IS_VOLUME_LOCK_REQUEST_VALID(Local_13.f_3))
	{
		if (VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(Local_720.f_15, Param0.f_10, false, 0, 0))
		{
			VOLUME::_0xFA15C9A320E707B0();
			*uParam31 = 1;
			return false;
		}
		func_233(&uVar1, Param0);
		Local_13.f_3 = VOLUME::REQUEST_VOLUME_LOCK_WITH_ARGS(&uVar1);
		func_148(128);
	}
	else if (!func_131(128, 255))
	{
		Local_13.f_3.f_1 = func_234(Param0);
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
		if (!func_235(&iParam1))
		{
			return false;
		}
	}
	return func_185(Local_111[iParam1 /*19*/], iParam0);
}

bool func_132(int iParam0)
{
	return func_185(Local_13.f_1, iParam0);
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
	if (!func_236(8192, 0) && func_117() == 2)
	{
		func_237(8192);
	}
	return true;
}

bool func_136()
{
	bool bVar0;

	if (!func_238(&bVar0))
	{
		if (bVar0)
		{
			func_239();
		}
		return false;
	}
	if (!func_240(&bVar0))
	{
		if (bVar0)
		{
			func_239();
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
	if (!func_132(32) && func_241(32))
	{
		func_124(32);
	}
	if (!func_132(64) && func_241(64))
	{
		func_124(64);
	}
	if (!func_132(16) && func_242(16))
	{
		func_124(16);
	}
	if ((!func_132(2048) && func_241(2048)) && !func_241(4096))
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
	if (func_132(2048) && !func_241(4096))
	{
		func_126(6);
		return;
	}
}

void func_140()
{
	func_243();
}

bool func_141()
{
	if (ENTITY::DOES_ENTITY_EXIST(func_244(0)))
	{
		func_245(ENTITY::GET_ENTITY_COORDS(func_244(0), true, false));
	}
	if (func_246())
	{
		return true;
	}
	if (func_117() == 2)
	{
		func_247();
		return false;
	}
	switch (func_117())
	{
		case 0:
			switch (func_248())
			{
				case 1:
					func_249();
					break;
				case 2:
					func_250();
					break;
				case 3:
					func_251();
					break;
				case 5:
					func_252();
					break;
				case 6:
					func_253();
					break;
				case 4:
					func_254();
					break;
				case 7:
					func_255();
					break;
				case 8:
					func_256();
					break;
				case 9:
					func_257();
					break;
			}
			break;
		case 1:
			switch (func_248())
			{
				case 1:
					func_249();
					break;
				case 2:
					func_250();
					break;
				case 3:
					func_251();
					break;
				case 5:
					func_252();
					break;
				case 6:
					func_253();
					break;
				case 4:
					func_254();
					break;
				case 7:
					func_255();
					break;
				case 8:
					func_256();
					break;
				case 9:
					func_257();
					break;
			}
			break;
		case 2:
			switch (func_248())
			{
				case 1:
					func_249();
					break;
				case 2:
					func_250();
					break;
				case 3:
					func_251();
					break;
				case 5:
					func_252();
					break;
				case 6:
					func_253();
					break;
				case 4:
					func_254();
					break;
				case 7:
					func_255();
					break;
				case 8:
					func_256();
					break;
				case 9:
					func_257();
					break;
			}
			break;
	}
	return false;
}

void func_142()
{
}

bool func_143()
{
	int iVar0;

	if (Local_13.f_24.f_15 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(Local_13.f_24.f_15), 1);
	}
	if (Local_13.f_24.f_16 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(Local_13.f_24.f_16), 1);
	}
	if (Local_13.f_24.f_17 != -1)
	{
		GRAPHICS::REMOVE_VEG_MODIFIER_SPHERE(&(Local_13.f_24.f_17), 1);
	}
	if (!func_258())
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			func_259(iVar0, 16);
			iVar0++;
		}
	}
	return true;
}

void func_144(int iParam0)
{
	if (func_67(iParam0))
	{
		func_260(&(Local_720.f_7), iParam0);
	}
}

int func_145(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (!func_186(iParam0))
	{
		return 0;
	}
	iVar0 = func_261(iParam0);
	if (iVar0 != 0)
	{
		return 0;
	}
	iVar1 = PLAYER::PLAYER_ID();
	Global_1144511[iVar1 /*83*/].f_70 = iParam0;
	Global_1144511[iVar1 /*83*/].f_70.f_2 = iParam1;
	if (bParam2)
	{
		func_262(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	else
	{
		func_263(&(Global_1144511[iVar1 /*83*/].f_70.f_1), 1);
	}
	return 1;
}

void func_146(int iParam0)
{
	if (!func_67(iParam0))
	{
		func_230(&(Local_720.f_7), iParam0);
	}
}

void func_147(int iParam0)
{
	if (func_185(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/], iParam0))
	{
		func_260(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/]), iParam0);
	}
}

void func_148(int iParam0)
{
	if (!func_131(iParam0, 255))
	{
		func_230(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/]), iParam0);
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
				func_264(iVar0);
				break;
			case -1315570756:
				func_265(iVar0);
				break;
			default:
				break;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(0))
	{
		func_266(iVar0);
		iVar0++;
	}
}

void func_150(int iParam0)
{
	if (Local_720.f_8 != iParam0)
	{
		Local_720.f_8 = iParam0;
	}
}

bool func_151()
{
	vector3 vVar0;

	if (!func_267())
	{
		return false;
	}
	if (!func_268(1, -1, 1))
	{
		if (func_117() == 2)
		{
			func_237(1);
			return true;
		}
		switch (Local_720.f_173)
		{
			case 0:
				if (func_117() == 1)
				{
					vVar0 = { func_217() };
					func_269(&(Local_720.f_173.f_5), vVar0, 0f, 0f, func_218());
					if (!func_270(&(Local_13.f_24.f_18), &(Local_720.f_173.f_5)))
					{
						return false;
					}
				}
				func_271(&(Local_720.f_173.f_5), func_244(0), 0, 0);
				func_271(&(Local_720.f_173.f_5), func_244(1), 1, 1);
				Local_720.f_173 = 1;
				return false;
			case 1:
				if (func_117() == 1)
				{
					if (!func_272(&(Local_720.f_173.f_5)))
					{
						return false;
					}
				}
				func_237(1);
				break;
		}
	}
	return true;
}

bool func_152()
{
	bool bVar0;

	bVar0 = false;
	if (!func_273())
	{
		bVar0 = true;
	}
	if (!func_274())
	{
		bVar0 = true;
	}
	if (Local_720.f_25 && !func_275(&(Local_13.f_7), &(Local_720.f_25)))
	{
		bVar0 = true;
	}
	return !bVar0;
}

void func_153(var uParam0)
{
	*uParam0 = 0;
}

void func_154()
{
}

int func_155()
{
	return 1;
}

int func_156()
{
	bool bVar0;

	if (!func_276())
	{
		if (bVar0)
		{
		}
		return 0;
	}
	return 1;
}

int func_157(int iParam0)
{
	return (iParam0 - Global_1295619.f_16) * 1000;
}

void func_158()
{
	if (!func_67(1))
	{
		func_277(Local_720.f_9);
		func_146(1);
	}
}

void func_159()
{
	func_278();
	func_279();
}

void func_160()
{
	int iVar0;

	iVar0 = func_244(0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_280(iVar0);
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_282(iVar0, func_281(func_117() == 2, 0));
			func_224(0, 16);
			EVENT::ADD_SHOCKING_EVENT_FOR_ENTITY(-5.535133E+19f, iVar0, -1f, -1f, -1f, -1f, -1f, 180f, false, false, -1, -1);
			PED::SET_PED_CONFIG_FLAG(iVar0, 388, true);
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 5, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 18, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 4, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iVar0, 93, true);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			PED::SET_PED_CONFIG_FLAG(iVar0, 585, true);
			PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 1, true);
			PED::SET_PED_LASSO_HOGTIE_FLAG(iVar0, 10, true);
		}
	}
	func_283();
	func_284(&(Local_720.f_118), 0);
	func_285(&(Local_720.f_118), 1);
	func_286(&(Local_720.f_118), 1113325568 /* Float: 55f */);
	func_287(&(Local_720.f_118), 1113325568 /* Float: 55f */);
	if (func_117() == 0)
	{
	}
	if (func_117() == 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(func_288(0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(func_288(0)))
		{
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(func_288(0), false);
			ENTITY::FREEZE_ENTITY_POSITION(func_288(0), true);
			if (CLOCK::GET_CLOCK_HOURS() >= 21 || CLOCK::GET_CLOCK_HOURS() < 6)
			{
				ENTITY::_SET_ENTITY_LIGHTS_ENABLED(func_288(0), true);
				GRAPHICS::_SET_LIGHTS_INTENSITY_FOR_ENTITY(func_288(0), 10f);
			}
		}
	}
	func_289();
	func_290(&(Local_720.f_25), func_217(), 1117782016 /* Float: 80f */, 512);
	func_291(1117782016 /* Float: 80f */);
	func_292(1108082688 /* Float: 35f */, 1117126656 /* Float: 75f */, 1, 3f, 0);
	func_293(1f, 5f);
	func_294(-2.19652E+23f, func_217(), 0f, 0f, 0f, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */);
	func_294(-9.406495E-20f, func_217() + Vector(0f, 1092616192, 1092616192), 0f, 0f, 0f, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */);
	func_295(func_244(0));
	func_296(&(Local_720.f_53), 0, func_217(), 1117782016 /* Float: 80f */);
	func_297(&(Local_720.f_53), 0);
}

void func_161()
{
}

void func_162()
{
}

void func_163()
{
	float fVar0;

	if (func_232(Local_720.f_15))
	{
		return;
	}
	if (func_258())
	{
		return;
	}
	if (func_298(Local_720.f_1, 600))
	{
		fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false), Local_720.f_15);
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

void func_164()
{
	func_299();
	func_300();
	func_301();
	func_302();
	func_303();
}

void func_165()
{
	if (func_304())
	{
		func_148(8);
	}
	else
	{
		func_147(8);
	}
}

void func_166()
{
	int iVar0;

	iVar0 = func_244(0);
	func_305();
	func_306();
	func_307();
	func_309(iVar0, func_281(func_308(), 0));
	if (!func_268(65536, -1, 1) && func_310(128))
	{
		func_237(65536);
	}
	func_311();
	func_312();
	if (func_117() == 2)
	{
		func_313();
		return;
	}
	switch (func_117())
	{
		case 0:
			switch (func_314())
			{
				case 1:
					func_315();
					break;
				case 2:
					func_316();
					break;
				case 3:
					func_317();
					break;
				case 5:
					func_318();
					break;
				case 6:
					func_319();
					break;
				case 4:
					func_320();
					break;
				case 7:
					func_321();
					break;
				case 8:
					func_322();
					break;
				case 9:
					func_323();
					break;
			}
			break;
		case 1:
			switch (func_314())
			{
				case 1:
					func_315();
					break;
				case 2:
					func_316();
					break;
				case 3:
					func_317();
					break;
				case 5:
					func_318();
					break;
				case 6:
					func_319();
					break;
				case 4:
					func_320();
					break;
				case 7:
					func_321();
					break;
				case 8:
					func_322();
					break;
				case 9:
					func_323();
					break;
			}
			break;
		case 2:
			switch (func_314())
			{
				case 1:
					func_315();
					break;
				case 2:
					func_316();
					break;
				case 3:
					func_317();
					break;
				case 5:
					func_318();
					break;
				case 6:
					func_319();
					break;
				case 4:
					func_320();
					break;
				case 7:
					func_321();
					break;
				case 8:
					func_322();
					break;
				case 9:
					func_323();
					break;
			}
			break;
	}
	func_324();
}

void func_167()
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

void func_168()
{
	int iVar0;

	Local_720.f_6 = -1;
	Local_720.f_5 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_720.f_5 = (Local_720.f_5 || Local_111[iVar0 /*19*/]);
			Local_720.f_6 = (Local_720.f_6 && Local_111[iVar0 /*19*/]);
		}
		iVar0++;
	}
}

void func_169()
{
	if ((func_67(1024) && !func_131(16384, 255)) && !(SAVE::SAVEGAME_IS_SAVE_PENDING() || func_325(&Global_0, 1)))
	{
		func_148(16384);
	}
}

bool func_170()
{
	EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
	func_326();
	func_327(&(Local_720.f_25));
	return true;
}

void func_171()
{
}

void func_172(int iParam0)
{
	if (MAP::DOES_BLIP_EXIST(Local_720.f_265.f_7[iParam0 /*11*/].f_1))
	{
		MAP::REMOVE_BLIP(&(Local_720.f_265.f_7[iParam0 /*11*/].f_1));
	}
}

bool func_173(int iParam0, char* sParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sParam1))
	{
		return true;
	}
	return DECORATOR::DECOR_REMOVE(iParam0, sParam1);
}

bool func_174(int iParam0, int iParam1)
{
	return func_185(Local_720.f_265.f_7[iParam0 /*11*/].f_2, iParam1);
}

bool func_175(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1024);
}

bool func_176(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 8);
}

bool func_177(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_720.f_390[iParam0 /*20*/].f_4, iParam1);
}

void func_178(var uParam0)
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

void func_179()
{
	char* sVar0;

	if (!func_328())
	{
		return;
	}
	if (func_329(2, -1))
	{
		return;
	}
	if ((ENTITY::DOES_ENTITY_EXIST(Local_720.f_53) && ENTITY::IS_ENTITY_DEAD(Local_720.f_53)) || Local_720.f_53.f_2 == 12)
	{
		return;
	}
	if (func_330(16))
	{
		return;
	}
	sVar0 = func_331(Local_720.f_163.f_5, Local_720.f_163.f_6);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	func_332(sVar0);
}

bool func_180(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	return MISC::IS_BIT_SET(Global_1217203[iParam1 /*72*/][iParam0], iParam2);
}

void func_181(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_334(func_333(Param0));
	iVar1 = func_335(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_28() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_336(Param0, &Var2, iParam2);
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

void func_182(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_337(iParam0, iParam1);
	if (iVar0 == -1)
	{
		return;
	}
	func_338(iVar0);
}

void func_183(int iParam0, int iParam1)
{
	func_129(&(Global_1260791.f_3351[iParam0]));
	switch (iParam1)
	{
		case 0:
			Global_1260791.f_3357[iParam0] = func_339(iParam0);
			break;
		case 1:
			Global_1260791.f_3357[iParam0] = func_340(iParam0);
			break;
		case 2:
			Global_1260791.f_3357[iParam0] = func_341(iParam0);
			break;
	}
}

void func_184(int iParam0)
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
	Var0 = { func_342(iParam0) };
	if (!STATS::STAT_ID_IS_VALID(&Var0))
	{
		return;
	}
	iVar2 = Global_1295619.f_16;
	if (!STATS::STAT_ID_SET_INT(&Var0, iVar2, true))
	{
	}
}

bool func_185(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_186(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_187(var uParam0)
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

int func_188(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	iVar0 = func_343(iParam1);
	iVar1 = ((iVar0 + Global_1207465.f_3[iParam1]) - 1);
	if (Global_1207465.f_23[iParam1] != 0)
	{
		iVar1 = ((iVar0 + func_344(iParam1)) - 1);
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

void func_189(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_345(bParam0);
			break;
		case 1:
			func_345(bParam0);
			break;
		case 2:
			func_345(bParam0);
			break;
		case 3:
			func_346(bParam0);
			break;
		case 4:
			func_345(bParam0);
			break;
		case 5:
			func_345(bParam0);
			break;
		case 6:
			func_346(bParam0);
			break;
		case 7:
			func_346(bParam0);
			break;
		case 8:
			func_346(bParam0);
			break;
		case 9:
			func_345(bParam0);
			break;
		default:
			func_191(bParam0);
			func_190(bParam0);
			break;
	}
}

void func_190(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_2 - 1))
	{
		func_347(bParam0, iVar0);
		iVar0++;
	}
}

void func_191(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (bParam0->f_1 - 1))
	{
		func_192(bParam0, iVar0);
		iVar0++;
	}
}

void func_192(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_3), iParam1);
}

void func_193(bool bParam0, int iParam1)
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
			func_348(bParam0);
			break;
		case 1:
		case 3:
		case 5:
		case 7:
		case 9:
		case 11:
		case 13:
		case 15:
			func_349(bParam0);
			break;
		default:
			func_191(bParam0);
			func_190(bParam0);
			break;
	}
}

void func_194(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_347(bParam0, 0);
			break;
		case 1:
		case 2:
			func_347(bParam0, 1);
			func_347(bParam0, 2);
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
			func_347(bParam0, 0);
			func_347(bParam0, 2);
			break;
		case 8:
			func_347(bParam0, 1);
			break;
		case 9:
		case 10:
		case 11:
			func_347(bParam0, 1);
			break;
		default:
			func_190(bParam0);
			break;
	}
}

void func_195(bool bParam0, int iParam1)
{
	func_262(&(bParam0->f_25), iParam1);
}

void func_196(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_350(bParam0);
			break;
		case 1:
			func_351(bParam0);
			break;
		case 2:
			func_352(bParam0);
			break;
		case 3:
			func_353(bParam0);
			break;
		default:
			func_191(bParam0);
			func_190(bParam0);
			break;
	}
}

Vector3 func_197(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0f, 0f, 0f;
	}
	return Global_1141317[iParam0 /*27*/].f_20;
}

void func_198(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_354(bParam0);
			break;
		case 1:
		case 2:
			func_355(bParam0);
			break;
		case 3:
		case 4:
			func_356(bParam0);
			break;
		default:
			func_190(bParam0);
			break;
	}
	func_191(bParam0);
}

void func_199(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_347(bParam0, 0);
			func_347(bParam0, 2);
			break;
		case 1:
			func_347(bParam0, 1);
			func_347(bParam0, 3);
			break;
		default:
			func_191(bParam0);
			func_190(bParam0);
			break;
	}
}

void func_200(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_192(bParam0, 2);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(bParam0, 0);
			break;
		default:
			func_192(bParam0, 0);
			break;
	}
	func_190(bParam0);
}

void func_201(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_192(bParam0, 0);
			break;
		case 4:
		case 5:
		case 6:
		case 7:
			func_192(bParam0, 1);
			break;
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
			func_192(bParam0, 2);
			break;
		default:
			func_191(bParam0);
			break;
	}
	func_190(bParam0);
}

void func_202(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_192(bParam0, 0);
			func_347(bParam0, 1);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(bParam0, 1);
			func_347(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(bParam0, 2);
			func_347(bParam0, 1);
			break;
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
			func_192(bParam0, 3);
			func_347(bParam0, 0);
			break;
	}
}

void func_203(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
			func_192(bParam0, 0);
			func_347(bParam0, 0);
			break;
		case 2:
			func_192(bParam0, 1);
			func_347(bParam0, 0);
			break;
		case 3:
		case 4:
			func_192(bParam0, 2);
			func_347(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_192(bParam0, 3);
			func_347(bParam0, 1);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_192(bParam0, 4);
			func_347(bParam0, 1);
			break;
	}
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
			func_192(bParam0, 3);
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
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			break;
		default:
			func_191(bParam0);
			break;
	}
	func_190(bParam0);
}

void func_205(bool bParam0, int iParam1)
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
			func_192(bParam0, 3);
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
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			break;
		case 11:
		case 17:
		case 18:
		case 19:
		case 22:
		case 23:
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			break;
		default:
			func_191(bParam0);
			break;
	}
	func_190(bParam0);
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
			func_347(bParam0, 0);
			func_192(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_347(bParam0, 1);
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			func_192(bParam0, 2);
			break;
		default:
			func_347(bParam0, 0);
			func_192(bParam0, 0);
			break;
	}
}

void func_207(bool bParam0, int iParam1, int iParam2)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_347(bParam0, 0);
			func_192(bParam0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_347(bParam0, 1);
			func_192(bParam0, 0);
			func_192(bParam0, 1);
			break;
		default:
			func_347(bParam0, 0);
			func_192(bParam0, 0);
			break;
	}
}

void func_208(bool bParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			func_190(bParam0);
			func_191(bParam0);
			break;
		default:
			func_190(bParam0);
			func_191(bParam0);
			break;
	}
}

int func_209(int iParam0)
{
	return Global_1260791.f_3432[iParam0];
}

int func_210(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_3;
}

int func_211(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

var func_212(int iParam0, int iParam1)
{
	var uVar0;
	struct<5> Var1;

	if (func_357(&Var1, iParam0) && func_358(&Var1, iParam1))
	{
		func_359(Var1, 16.1929f, &uVar0, 0);
	}
	return uVar0;
}

int func_213(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;

	iVar0 = 0;
	if (func_357(&Var1, iParam0) && func_358(&Var1, iParam1))
	{
		func_359(Var1, -12.40885f, &iVar0, 0);
	}
	return iVar0;
}

int func_214(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = func_360(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/];
}

Vector3 func_215(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	iVar0 = func_360(iParam0, iParam1);
	return Global_1245159.f_566[iVar0 /*7*/].f_3;
}

void func_216(int iParam0, float fParam1)
{
	Local_720.f_265.f_7[iParam0 /*11*/].f_3 = fParam1;
}

Vector3 func_217()
{
	return Local_720.f_15;
}

float func_218()
{
	switch (func_117())
	{
		case 0:
			return 1119253443;
		case 1:
			return 1119253443;
		case 2:
			return 1126973230;
		default:
			break;
	}
	return 0f;
}

void func_219(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
{
	Local_720.f_265.f_7[iParam0 /*11*/].f_6 = { vParam1 };
	Local_720.f_265.f_7[iParam0 /*11*/].f_5 = fParam4;
	if (bParam5)
	{
		func_230(&(Local_720.f_265.f_7[iParam0 /*11*/].f_2), 2);
	}
	else
	{
		func_260(&(Local_720.f_265.f_7[iParam0 /*11*/].f_2), 2);
	}
}

void func_220(int iParam0, float fParam1)
{
	Local_720.f_265.f_7[iParam0 /*11*/].f_4 = fParam1;
}

float func_221(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1126236160 /* Float: 161f */;
		case 1:
			return 1125515264 /* Float: 150f */;
		case 2:
			return 1124204544 /* Float: 130f */;
		default:
			break;
	}
	return 0f;
}

int func_222()
{
	return Local_720.f_2;
}

Vector3 func_223(int iParam0)
{
	switch (func_222())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1158073148, -992888530, 1109546028;
				case 1:
					return 1158284847, -993354297, 1109532161;
				case 2:
					return 1157975590, -993213537, 1109609153;
				case 3:
					return 1157750781, -992755469, 1109573527;
				case 4:
					return 1157705495, -992431089, 1109563225;
				case 5:
					return 1157710570, -991918941, 1109505396;
				case 6:
					return 1157794140, -990622800, 1109615260;
				case 7:
					return 1157893114, -990918264, 1109556330;
				default:
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1158282732, -1003943367, 1109583908;
				case 1:
					return 1158692989, -1006473939, 1109436845;
				case 2:
					return 1158408318, -1004887600, 1109428535;
				case 3:
					return 1158619947, -1003983353, 1109471606;
				case 4:
					return 1158399163, -1006724399, 1109437317;
				case 5:
					return 1158760070, -1004382950, 1109459075;
				case 6:
					return 1158630072, -1003977731, 1109479470;
				case 7:
					return 1158190355, -1006450636, 1109489117;
				default:
					break;
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam0)
			{
				case 0:
					return 1160659627, -1005166964, 1109497165;
				case 1:
					return 1160722729, -1004104781, 1109508804;
				case 2:
					return 1158542561, -1006863057, 1109556462;
				case 3:
					return 1158727301, -1006917530, 1109628289;
				case 4:
					return 1158896356, -1006156182, 1109614107;
				case 5:
					return 1158760070, -1004382950, 1109459075;
				case 6:
					return 1158630072, -1003977731, 1109479470;
				case 7:
					return 1158190355, -1006450636, 1109489117;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_224(int iParam0, int iParam1)
{
	func_230(&(Local_720.f_265.f_7[iParam0 /*11*/].f_2), iParam1);
}

Vector3 func_225(int iParam0)
{
	switch (func_222())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1157881116, -993300255, 1109196800 /* Float: 39.25f */;
				case 1:
					return 1157920607, -993464114, 1109196800 /* Float: 39.25f */;
				case 2:
					return 1158043243, -993560269, 1109196800 /* Float: 39.25f */;
				case 3:
					return 1158131478, -993423262, 1109196800 /* Float: 39.25f */;
				case 4:
					return 1158218975, -993275826, 1109196800 /* Float: 39.25f */;
				case 5:
					return 1158214087, -993784177, 1109196800 /* Float: 39.25f */;
				case 6:
					return 1158154427, -993196456, 1109196800 /* Float: 39.25f */;
				case 7:
					return 1158013217, -993117904, 1109547077;
				case 8:
					return 1158009412, -992944680, 1109582781;
				case 9:
					return 1158046472, -992764037, 1109235755;
				case 10:
					return 1157902933, -993717455, 1109196800 /* Float: 39.25f */;
				case 11:
					return 1158089788, -993035647, 1109467857;
				case 12:
					return 1158039766, -992641122, 1109196800 /* Float: 39.25f */;
				case 13:
					return 1157869769, -993422222, 1109223014 /* Float: 39.35f */;
				case 14:
					return 1157950767, -992676511, 1109196800 /* Float: 39.25f */;
				case 15:
					return 1158290653, -993606203, 1109196800 /* Float: 39.25f */;
				case 16:
					return 1158121104, -993739509, 1109196800 /* Float: 39.25f */;
				case 17:
					return 1157929429, -993542091, 1109196800 /* Float: 39.25f */;
				case 18:
					return 1157933113, -993386368, 1109223014 /* Float: 39.35f */;
				case 19:
					return 1157986646, -993476644, 1109196800 /* Float: 39.25f */;
				case 20:
					return 1158099427, -993317652, 1109196800 /* Float: 39.25f */;
				case 21:
					return 1158259300, -993132423, 1109205451;
				default:
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1158010064, -1004192548, 1109196800 /* Float: 39.25f */;
				case 1:
					return 1158079008, -1004275596, 1109196800 /* Float: 39.25f */;
				case 2:
					return 1158091806, -1003892779, 1109440148;
				case 3:
					return 1158097355, -1003565040, 1109196826;
				case 4:
					return 1158193674, -1003828466, 1109196800 /* Float: 39.25f */;
				case 5:
					return 1158266693, -1004330592, 1109196800 /* Float: 39.25f */;
				case 6:
					return 1158303446, -1004101775, 1109569988;
				case 7:
					return 1158367134, -1003832214, 1109217142;
				case 8:
					return 1158317639, -1004203423, 1109263621;
				case 9:
					return 1158290448, -1004605347, 1109196800 /* Float: 39.25f */;
				case 10:
					return 1158127947, -1004063025, 1109197141;
				case 11:
					return 1158213495, -1003530935, 1109196800 /* Float: 39.25f */;
				case 12:
					return 1158422975, -1003825729, 1109196800 /* Float: 39.25f */;
				case 13:
					return 1158330547, -1003645501, 1109196800 /* Float: 39.25f */;
				case 14:
					return 1158196987, -1003239252, 1109196800 /* Float: 39.25f */;
				case 15:
					return 1157993013, -1004052808, 1109213813;
				case 16:
					return 1158259432, -1004719522, 1109196800 /* Float: 39.25f */;
				case 17:
					return 1158192555, -1004211264, 1109196800 /* Float: 39.25f */;
				case 18:
					return 1158127661, -1003460991, 1109196800 /* Float: 39.25f */;
				case 19:
					return 1158364814, -1004246255, 1109196800 /* Float: 39.25f */;
				case 20:
					return 1158044795, -1003753900, 1109196826;
				case 21:
					return 1158088805, -1003671822, 1109276072;
				default:
					break;
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam0)
			{
				case 0:
					return 1160405398, -1005766653, 1109186314 /* Float: 39.21f */;
				case 1:
					return 1160408698, -1005331556, 1109479653;
				case 2:
					return 1160495887, -1005384612, 1109444316;
				case 3:
					return 1160611192, -1005478311, 1109505789;
				case 4:
					return 1160645473, -1004921364, 1109569595;
				case 5:
					return 1160612895, -1004310259, 1109499183;
				case 6:
					return 1160642004, -1003814420, 1109487885;
				case 7:
					return 1160466118, -1003736356, 1109552765;
				case 8:
					return 1160433363, -1004455354, 1109491450;
				case 9:
					return 1160517021, -1004743592, 1109479077;
				case 10:
					return 1160253904, -1006902067, 1109561547;
				case 11:
					return 1160319889, -1007636002, 1109608392;
				case 12:
					return 1160461877, -1006444965, 1109206945;
				case 13:
					return 1158330547, -1003645501, 1109196800 /* Float: 39.25f */;
				case 14:
					return 1158196987, -1003239252, 1109196800 /* Float: 39.25f */;
				case 15:
					return 1157993013, -1004052808, 1109213813;
				case 16:
					return 1158259432, -1004719522, 1109196800 /* Float: 39.25f */;
				case 17:
					return 1158192555, -1004211264, 1109196800 /* Float: 39.25f */;
				case 18:
					return 1158127661, -1003460991, 1109196800 /* Float: 39.25f */;
				case 19:
					return 1158364814, -1004246255, 1109196800 /* Float: 39.25f */;
				case 20:
					return 1158044795, -1003753900, 1109196826;
				case 21:
					return 1158088805, -1003671822, 1109276072;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_226(var uParam0, int iParam1)
{
	func_262(&(uParam0->f_21), iParam1);
}

void func_227()
{
	int iVar0;

	if (Local_13.f_7.f_1 == -1)
	{
		iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		Local_13.f_7.f_1 = iVar0;
	}
}

void func_228(int iParam0)
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		Local_13.f_7.f_1 = iParam0;
	}
}

bool func_229(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_230(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_231(int iParam0)
{
	int iVar0;

	if (!func_186(iParam0))
	{
		return false;
	}
	iVar0 = func_361(iParam0);
	return (iVar0 != 0 && iVar0 != 3);
}

bool func_232(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_233(var uParam0, struct<12> Param1, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31)
{
	*uParam0 = { Param1.f_11 };
	uParam0->f_4 = Param1.f_10;
	uParam0->f_6 = -2.405123E+15f;
	uParam0->f_7 = Param1.f_5;
}

int func_234(struct<31> Param0)
{
	var uVar0;

	func_233(&uVar0, Param0);
	return VOLUME::_FIND_VOLUME_LOCK_REQUEST_ID_WITH_ARGS(&uVar0);
}

bool func_235(int iParam0)
{
	*iParam0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_362(*iParam0, 1))
	{
		*iParam0 = 255;
		return false;
	}
	return true;
}

bool func_236(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_185(Local_720.f_173.f_4, iParam0);
	}
	else
	{
		iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
		bVar1 = func_185(Local_720.f_173.f_4, iParam0);
		if (!func_363(iVar0, 1))
		{
			return false;
		}
		if (bVar1 && !func_185(Local_111[iVar0 /*19*/].f_6, iParam0))
		{
			func_230(&(Local_111[iVar0 /*19*/].f_6), iParam0);
		}
		return bVar1;
	}
	return false;
}

void func_237(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_363(iVar0, 1))
	{
		return;
	}
	func_230(&(Local_111[iVar0 /*19*/].f_6), iParam0);
}

bool func_238(var uParam0)
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
		if (func_174(iVar2, 4))
		{
		}
		else
		{
			if (!bVar0)
			{
				if (!func_364(iVar2, uParam0, &bVar1))
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
			if (func_365(iVar2))
			{
				if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_86[iVar2]))
				{
					if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_86[iVar2]))
					{
						NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_86[iVar2]);
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

void func_239()
{
	func_126(2);
}

bool func_240(bool bParam0)
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
	vVar10 = { Local_720.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_366(iVar0, iVar1);
			if (func_176(iVar0, iVar1))
			{
			}
			else if (func_175(iVar0, iVar1))
			{
			}
			else if (MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_2, iVar1))
			{
				if (func_367(iVar0, iVar1))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_95[iVar0 /*2*/][iVar1]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_95[iVar0 /*2*/][iVar1]);
						}
					}
				}
			}
			else
			{
				if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
				{
					if (!func_368(iVar0, iVar1))
					{
						vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_369(iVar0, iVar1)) };
					}
					else
					{
						vVar7 = { func_369(iVar0, iVar1) };
					}
					if (func_370(iVar0, iVar1))
					{
						if (!func_371(&vVar7, 1, 10, 0, 0))
						{
							bVar3 = true;
						}
						else
						{
							if (func_372(iVar0, iVar1))
							{
								iVar13 = PED::_CREATE_META_PED_ASSET(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, true, false, false);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_95[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
								}
							}
							else if (func_373(iVar0, iVar1))
							{
								iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_369(iVar0, iVar1), true, 1f);
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
								}
								else
								{
									Local_13.f_95[iVar0 /*2*/][iVar1] = NETWORK::OBJ_TO_NET(iVar13);
									if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
									{
										*bParam0 = 1;
										return false;
									}
									else
									{
										NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_13.f_95[iVar0 /*2*/][iVar1], true);
									}
								}
							}
							else if (iVar2 == 0)
							{
								Jump @1091; //curOff = 577
							}
							else if (!func_374(&(Local_13.f_95[iVar0 /*2*/][iVar1]), iVar2, vVar7, 1, 0))
							{
								*bParam0 = 1;
								return false;
							}
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
							{
								iVar13 = NETWORK::NET_TO_OBJ(Local_13.f_95[iVar0 /*2*/][iVar1]);
								if (func_367(iVar0, iVar1))
								{
									if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
									{
										if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_95[iVar0 /*2*/][iVar1]))
										{
											NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_95[iVar0 /*2*/][iVar1]);
										}
									}
								}
								if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
								{
									*bParam0 = 1;
									return false;
								}
								MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/].f_2), iVar1);
								if (func_375(iVar0, iVar1))
								{
									TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
									GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
								}
								if (func_376(iVar0, iVar1))
								{
									ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
								}
								if (func_377(iVar0, iVar1))
								{
									ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
								}
								else
								{
									ENTITY::_SET_ENTITY_FADE_IN(iVar13);
								}
								if (func_370(iVar0, iVar1))
								{
									ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
								}
								vVar4 = { func_378(iVar0, iVar1) };
								if (!func_232(vVar4))
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
										if (!func_379(iVar0, iVar1, 32))
										{
											MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
											vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
											vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_380(vVar4.x)), MISC::ABSF(func_380(vVar4.y))) };
											vVar27 = { func_381(vVar24) * vVar21 };
											ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
										}
									}
								}
								if (func_382(iVar0, iVar1))
								{
									func_383(iVar0, iVar1, 1);
								}
								if (func_384(iVar0, iVar1))
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

bool func_241(int iParam0)
{
	return func_185(Local_720.f_5, iParam0);
}

bool func_242(int iParam0)
{
	return func_185(Local_720.f_6, iParam0);
}

void func_243()
{
	if (Local_720.f_25 && func_385(&(Local_13.f_7), &(Local_720.f_25)))
	{
		func_126(7);
	}
}

int func_244(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/];
}

void func_245(vector3 vParam0)
{
	if (!func_128(Local_720.f_13))
	{
		func_129(&(Local_720.f_13));
	}
	if (func_130(Local_720.f_13) < Global_1901671.f_242.f_71)
	{
		return;
	}
	func_386(Local_720.f_9, vParam0, 0, Local_720.f_12);
	func_153(&(Local_720.f_13));
}

bool func_246()
{
	if (!func_132(32))
	{
		return false;
	}
	if (func_387())
	{
		return false;
	}
	if (func_388(65536, 0))
	{
		func_259(0, 16);
		return true;
	}
	if ((Local_13.f_24 > 1 && func_389(func_244(0), 0)) && func_390(5, 30, 5))
	{
		if (!func_391(0, 1120403456 /* Float: 100f */, 0))
		{
			func_259(0, 16);
			return true;
		}
	}
	return false;
}

void func_247()
{
}

int func_248()
{
	return Local_13.f_24;
}

void func_249()
{
	if (func_236(2, 0))
	{
		func_392(2);
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_250()
{
	if (func_236(8, 0))
	{
		if (func_236(64, 0))
		{
			func_392(7);
		}
		else
		{
			func_392(4);
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_251()
{
	if (func_236(64, 0))
	{
		func_392(7);
	}
	else if (func_236(2048, 0))
	{
		func_392(4);
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_252()
{
	if (func_117() == 2 && ((func_236(64, 0) || func_236(2048, 0)) || func_236(1024, 0)))
	{
		func_392(9);
	}
	else if (func_236(64, 0))
	{
		func_392(7);
	}
	else if (func_236(1024, 0))
	{
		func_392(3);
	}
	else if (func_236(2048, 0))
	{
		func_392(4);
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_253()
{
	if (func_236(64, 0))
	{
		func_392(7);
	}
	else if (func_236(1024, 0))
	{
		func_392(3);
	}
	else if (func_236(2048, 0))
	{
		func_392(4);
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_254()
{
	if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	else if (func_236(4096, 0))
	{
		if (func_236(64, 0) || func_236(16384, 0))
		{
			func_392(6);
		}
		else
		{
			func_392(5);
		}
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_255()
{
	if (!func_236(64, 0))
	{
		if (func_236(16384, 0))
		{
			func_392(6);
		}
		else
		{
			func_392(5);
		}
	}
	else if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
	if (PED::GET_PED_CONFIG_FLAG(func_244(0), 580, true))
	{
		func_392(8);
	}
}

void func_256()
{
	if (ENTITY::IS_ENTITY_DEAD(func_244(0)))
	{
		func_393(&(Local_13.f_24.f_3));
		func_392(9);
	}
}

void func_257()
{
	func_394(&(Local_13.f_24.f_3), 0);
	if (!func_236(8192, 0) && (func_395(&(Local_13.f_24.f_3), 1094713344 /* Float: 12f */) || func_117() == 2))
	{
		func_393(&(Local_13.f_24.f_3));
		func_237(8192);
	}
}

bool func_258()
{
	return (func_132(32) || func_131(32, 255));
}

void func_259(int iParam0, int iParam1)
{
	func_260(&(Local_720.f_265.f_7[iParam0 /*11*/].f_2), iParam1);
}

void func_260(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_261(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0;
	}
	if (!func_231(iParam0))
	{
		return 0;
	}
	return Global_1141317[iParam0 /*27*/].f_18.f_1;
}

void func_262(var uParam0, int iParam1)
{
	func_396(uParam0, iParam1);
}

void func_263(var uParam0, int iParam1)
{
	func_397(uParam0, iParam1);
}

void func_264(int iParam0)
{
	struct<11> Var0;
	int iVar15;

	Var0.f_10 = 255;
	SCRIPTS::GET_EVENT_DATA(1, iParam0, &iVar15, 4);
	switch (iVar15)
	{
		case 185:
			if (func_398(&Var0, iParam0))
			{
				func_399(&Var0);
			}
			break;
		default:
			break;
	}
}

void func_265(int iParam0)
{
	struct<7> Var0;
	int iVar32;
	int iVar33;
	int iVar34;
	float fVar35;

	if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 32))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_1))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_1))
	{
		return;
	}
	iVar32 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_1);
	if (!PED::IS_PED_A_PLAYER(iVar32))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0))
	{
		return;
	}
	iVar33 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar33, true))
	{
		return;
	}
	iVar34 = Var0.f_5;
	if (iVar33 == func_244(0))
	{
		if ((func_400(iVar34) && Var0.f_6 == 1.90694E+21f) && !func_236(256, 0))
		{
			func_237(256);
		}
		fVar35 = PED::_0x763FA8A9D76EE3A7(iVar33);
		Local_13.f_24.f_10 = (Local_13.f_24.f_10 + fVar35);
		if (Local_13.f_24.f_10 >= 1116471296)
		{
			PED::SET_PED_CAN_RAGDOLL(iVar33, true);
			ENTITY::SET_ENTITY_INVINCIBLE(iVar33, false);
			Local_13.f_24.f_10 = 0f;
			func_237(64);
		}
		Local_13.f_24.f_7++;
		if (Local_13.f_24.f_7 >= 6)
		{
			PED::SET_PED_CONFIG_FLAG(iVar33, 388, false);
			PED::SET_PED_INJURED_ON_GROUND_BEHAVIOUR(iVar33, 20f);
			Local_13.f_24.f_7 = 0;
		}
	}
}

void func_266(int iParam0)
{
}

bool func_267()
{
	if (!HUD::_DOES_TEXT_BLOCK_EXIST("LEGANM"))
	{
		return true;
	}
	if (!HUD::_TEXT_BLOCK_IS_STREAMED("LEGANM"))
	{
		HUD::TEXT_BLOCK_REQUEST("LEGANM");
	}
	return HUD::TEXT_BLOCK_IS_LOADED("LEGANM");
}

bool func_268(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
		if (!func_363(iParam1, iParam2))
		{
			return false;
		}
	}
	if (!func_363(iParam1, iParam2))
	{
		return false;
	}
	return func_185(Local_111[iParam1 /*19*/].f_6, iParam0);
}

void func_269(var uParam0, vector3 vParam1, vector3 vParam4)
{
	uParam0->f_53 = { vParam1 };
	uParam0->f_56 = { vParam4 };
}

bool func_270(var uParam0, var uParam1)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401()))
	{
		if (!func_403(uParam0, uParam1, func_401(), func_402(), 0))
		{
			return false;
		}
	}
	PED::_RESERVE_AMBIENT_PEDS(uParam1->f_1);
	return true;
}

void func_271(var uParam0, int iParam1, int iParam2, int iParam3)
{
	uParam0->f_2[iParam2 /*2*/] = iParam3;
	uParam0->f_2[iParam2 /*2*/].f_1 = iParam1;
	uParam0->f_1++;
}

bool func_272(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401()))
	{
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
		{
			return false;
		}
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam0, true, false))
		{
			return false;
		}
		if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(*uParam0, func_402()))
		{
			if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADING(*uParam0, func_402()))
			{
				ANIMSCENE::REQUEST_ANIM_SCENE_PLAY_LIST(*uParam0, func_402());
			}
			return false;
		}
	}
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	return true;
}

bool func_273()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	bVar1 = false;
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (MISC::IS_BIT_SET(Local_720.f_265.f_3, iVar0))
		{
		}
		else
		{
			iVar2 = func_404(iVar0);
			if (iVar2 == 0)
			{
				Jump @133; //curOff = 55
			}
			else
			{
				if (!MISC::IS_BIT_SET(Local_720.f_265.f_4, iVar0))
				{
					STREAMING::REQUEST_MODEL(iVar2, false);
					MISC::SET_BIT(&(Local_720.f_265.f_4), iVar0);
				}
				if (!STREAMING::HAS_MODEL_LOADED(iVar2))
				{
					bVar1 = true;
					Jump @133; //curOff = 113
				}
				else
				{
					MISC::SET_BIT(&(Local_720.f_265.f_3), iVar0);
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

bool func_274()
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
		while (iVar1 < 1)
		{
			if (MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_1, iVar1))
			{
			}
			else
			{
				iVar3 = func_366(iVar0, iVar1);
				if (func_405(iVar1))
				{
					if (Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 == 0 || !PED::_IS_META_PED_ASSET_VALID(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6 = PED::_REQUEST_META_PED_ASSET_BUNDLE(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, 0);
						bVar2 = true;
					}
					else if (!PED::_HAS_META_PED_ASSET_LOADED(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_6))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (func_406(iVar1))
				{
					WEAPON::_REQUEST_WEAPON_ASSET(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, -1, false);
					if (!WEAPON::_HAS_WEAPON_ASSET_LOADED(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5))
					{
						bVar2 = true;
					}
					else if (!MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/].f_1), iVar1);
					}
				}
				else if (iVar3 == 0)
				{
					Jump @468; //curOff = 360
				}
				else
				{
					if (!MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/], iVar1))
					{
						STREAMING::REQUEST_MODEL(iVar3, false);
						MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/]), iVar1);
					}
					if (!STREAMING::HAS_MODEL_LOADED(iVar3))
					{
						bVar2 = true;
						Jump @468; //curOff = 422
					}
					else if (!MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_1, iVar1))
					{
						MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/].f_1), iVar1);
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

bool func_275(var uParam0, var uParam1)
{
	if (*uParam0 == 3)
	{
		return func_403(&(uParam0->f_9), &(uParam1->f_16), &(uParam1->f_4), &(uParam1->f_12), 64);
	}
	return true;
}

bool func_276()
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
	vVar10 = { Local_720.f_15 };
	iVar13 = 0;
	fVar14 = (1f / 1119092736);
	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar1 = 0;
		while (iVar1 < 1)
		{
			iVar2 = func_366(iVar0, iVar1);
			if (func_175(iVar0, iVar1))
			{
			}
			else if (!func_176(iVar0, iVar1))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
				{
					if (MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_2, iVar1))
					{
						if (func_367(iVar0, iVar1))
						{
							if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar0 /*2*/][iVar1]))
							{
								if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_95[iVar0 /*2*/][iVar1]))
								{
									NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_95[iVar0 /*2*/][iVar1]);
								}
							}
						}
					}
				}
			}
			else if (MISC::IS_BIT_SET(Local_720.f_390[iVar0 /*20*/].f_2, iVar1))
			{
			}
			else
			{
				if (!func_368(iVar0, iVar1))
				{
					vVar7 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar10, 0f, func_369(iVar0, iVar1)) };
				}
				else
				{
					vVar7 = { func_369(iVar0, iVar1) };
				}
				if (func_370(iVar0, iVar1))
				{
					if (!func_371(&vVar7, 1, 10, 0, 0))
					{
						bVar3 = true;
					}
					else
					{
						if (func_372(iVar0, iVar1))
						{
							iVar13 = PED::_CREATE_META_PED_ASSET(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_3, vVar7, 0f, 0f, 0f, false, false, false);
							if (!ENTITY::DOES_ENTITY_EXIST(iVar13))
							{
								return false;
							}
						}
						else if (func_373(iVar0, iVar1))
						{
							iVar13 = WEAPON::_CREATE_WEAPON_OBJECT(Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_5, Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/].f_4, func_369(iVar0, iVar1), true, 1f);
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
						MISC::SET_BIT(&(Local_720.f_390[iVar0 /*20*/].f_2), iVar1);
						if (func_375(iVar0, iVar1))
						{
							TASK::_MAKE_OBJECT_CARRIABLE(iVar13);
							GRAPHICS::SET_PICKUP_LIGHT(iVar13, true);
						}
						if (func_376(iVar0, iVar1))
						{
							ENTITY::_SET_ENTITY_LIGHTS_ENABLED(iVar13, true);
						}
						if (func_377(iVar0, iVar1))
						{
							ENTITY::SET_ENTITY_VISIBLE(iVar13, false);
						}
						else
						{
							ENTITY::_SET_ENTITY_FADE_IN(iVar13);
						}
						if (func_370(iVar0, iVar1))
						{
							ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar13, false);
						}
						vVar4 = { func_378(iVar0, iVar1) };
						if (!func_232(vVar4))
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
								if (!func_379(iVar0, iVar1, 32))
								{
									MISC::GET_MODEL_DIMENSIONS(iVar2, &vVar15, &vVar18);
									vVar21 = { vVar18 - vVar15 * Vector(1056964608, 1056964608, 1056964608) };
									vVar24 = { Vector(fVar14, fVar14, fVar14) * Vector(0f, MISC::ABSF(func_380(vVar4.x)), MISC::ABSF(func_380(vVar4.y))) };
									vVar27 = { func_381(vVar24) * vVar21 };
									ENTITY::SET_ENTITY_COORDS(iVar13, vVar7 + Vector((((vVar27.x + vVar27.y) + vVar27.z) / 3f), 0f, 0f), true, false, true, true);
								}
							}
						}
						Local_720.f_390[iVar0 /*20*/].f_5[iVar1 /*14*/] = iVar13;
						if (func_382(iVar0, iVar1))
						{
							func_383(iVar0, iVar1, 1);
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

void func_277(struct<2> Param0)
{
	if (func_335(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_335(Param0)))
	{
		STATS::_0x99230691875FC218(func_333(Param0), func_335(Param0), Global_34);
	}
}

void func_278()
{
	int iVar0;
	int iVar1;

	if (!func_235(&iVar1))
	{
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_407(iVar0, iVar1, 0);
		iVar0++;
	}
}

void func_279()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar1 = 0;
	while (iVar1 < 1)
	{
		iVar2 = 0;
		while (iVar2 < 1)
		{
			if (func_176(iVar1, iVar2))
			{
			}
			else if (func_175(iVar1, iVar2))
			{
			}
			else if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar1 /*2*/][iVar2]))
			{
				iVar0 = NETWORK::NET_TO_OBJ(Local_13.f_95[iVar1 /*2*/][iVar2]);
				Local_720.f_390[iVar1 /*20*/].f_5[iVar2 /*14*/] = iVar0;
				if (func_367(iVar1, iVar2))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_95[iVar1 /*2*/][iVar2]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_95[iVar1 /*2*/][iVar2]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_95[iVar1 /*2*/][iVar2]);
						}
					}
				}
				if (func_375(iVar1, iVar2))
				{
					TASK::_MAKE_OBJECT_CARRIABLE(iVar0);
					GRAPHICS::SET_PICKUP_LIGHT(iVar0, true);
				}
			}
			else if (0 != func_366(iVar1, iVar2))
			{
			}
			iVar2++;
		}
		iVar1++;
	}
}

void func_280(int iParam0)
{
	Local_720.f_163.f_5 = func_408(ENTITY::GET_ENTITY_MODEL(iParam0));
	func_409(iParam0, &(Local_720.f_170));
	func_410(iParam0);
}

int func_281(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		return 0;
	}
	if (bParam1)
	{
		return 2;
	}
	return 1;
}

void func_282(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = func_408(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = func_411(iVar0);
	if (iVar0 != 2 && iVar0 != 0)
	{
		TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iParam0, true, 2f);
		TASK::_SET_PED_PATH_MAY_ENTER_DEEP_WATER(iParam0, false);
	}
	TASK::_0x06ECF3925BC2ABAE(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 402, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	func_412(iParam0, iVar1, iParam1, 0);
	func_413(iParam0);
}

void func_283()
{
	func_284(&(Local_720.f_118), 1);
	func_414(&(Local_720.f_118), 1);
	func_415(&(Local_720.f_118), 1);
	func_416(&(Local_720.f_118), 0);
	func_417(&(Local_720.f_118), 1);
	func_285(&(Local_720.f_118), 0);
	func_418(&(Local_720.f_118), 0);
	func_419(&(Local_720.f_118), 0);
	func_420(&(Local_720.f_118), 0);
	func_421(&(Local_720.f_118), 6f);
	func_286(&(Local_720.f_118), 30f);
	func_422(&(Local_720.f_118), 1);
	func_423(&(Local_720.f_118), 1);
	func_424(&(Local_720.f_118), 1, 1, 1);
	func_425(&(Local_720.f_118), 60);
}

void func_284(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 131072);
	}
	else
	{
		func_230(&(uParam0->f_2), 131072);
	}
}

void func_285(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 8);
	}
	else
	{
		func_230(&(uParam0->f_2), 8);
	}
}

void func_286(var uParam0, float fParam1)
{
	uParam0->f_26 = fParam1;
}

void func_287(var uParam0, int iParam1)
{
	uParam0->f_27 = iParam1;
}

var func_288(int iParam0)
{
	return func_426(0, iParam0);
}

void func_289()
{
	switch (func_222())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			func_427(&(Local_720.f_173.f_77[0]), 1157215222, -993465597, 1110446284, 0f, 0f, 1108236436, 1106018654, 1102690757, 1095367353, "LaGator Bad Aggro Vol 01", 0, 0);
			func_427(&(Local_720.f_173.f_77[1]), 1158178021, -994185328, 1112710137, 0f, -1086514537, 1091896855, 1125637099, 1092795557, 1100012803, "LaGator Bad Aggro Vol 02", 0, 0);
			func_427(&(Local_720.f_173.f_77[2]), 1157707709, -993900257, 1112308135, -1103078464, -1086921938, 1103126403, 1125637099, 1098399674, 1100012803, "LaGator Bad Aggro Vol 03", 0, 0);
			func_427(&(Local_720.f_173.f_77[3]), 1158059256, -993135506, 1109722586, 0f, 0f, 1108026767, 1068603810, 1083196383, 1082446148, "LaGator Bad Aggro Vol 04 - boat", 0, 0);
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			func_427(&(Local_720.f_173.f_77[0]), 1158017170, -1004514768, 1111276746, 0f, 0f, 0f, 1104040592, 1103483460, 1094446893, "LaGator Bad Aggro Vol 01", 0, 0);
			func_427(&(Local_720.f_173.f_77[1]), 1158128996, -1004885324, 1111085003, 0f, 0f, 1110277836, 1104334213, 1099731565, 1094446893, "LaGator Bad Aggro Vol 02", 0, 0);
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			func_427(&(Local_720.f_173.f_77[0]), 1158017170, -1004514768, 1111276746, 0f, 0f, 0f, 1104040592, 1103483460, 1094446893, "LaGator Bad Aggro Vol 01", 0, 0);
			func_427(&(Local_720.f_173.f_77[1]), 1158128996, -1004885324, 1111085003, 0f, 0f, 1110277836, 1104334213, 1099731565, 1094446893, "LaGator Bad Aggro Vol 02", 0, 0);
			break;
	}
}

void func_290(var uParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(uParam0->f_24))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(uParam0->f_24, false);
	}
	func_428(uParam0->f_25);
	func_429(&(uParam0->f_25), vParam1, 0f, 0f, 0f, iParam4, iParam4, iParam4, "LA Blocking Area", 1, 0);
	uParam0->f_24 = func_430(uParam0->f_25, 0, 0, iParam5);
}

void func_291(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_432(func_431(iVar0), iParam0);
		iVar0++;
	}
}

void func_292(float fParam0, float fParam1, int iParam2, float fParam3, bool bParam4)
{
	if (fParam0 >= fParam1)
	{
	}
	Local_720.f_411.f_2 = iParam2;
	Local_720.f_411.f_9 = fParam0;
	Local_720.f_411.f_10 = fParam1;
	Local_720.f_411.f_8 = fParam3;
	if (bParam4)
	{
		func_230(&(Local_720.f_411.f_12), 1);
	}
	else
	{
		func_260(&(Local_720.f_411.f_12), 1);
	}
}

void func_293(float fParam0, float fParam1)
{
	func_230(&(Local_720.f_411.f_12), 2);
	Local_720.f_411.f_7 = fParam1;
	Local_720.f_411.f_5 = fParam0;
}

int func_294(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7)
{
	if (!VOLUME::DOES_VOLUME_EXIST(Local_720.f_411.f_11))
	{
		Local_720.f_411.f_11 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("NB_Trigger");
	}
	if (VOLUME::DOES_VOLUME_EXIST(Local_720.f_411.f_11))
	{
		switch (iParam0)
		{
			case joaat("VOLBOX"):
				VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(Local_720.f_411.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLSPHERE"):
				VOLUME::_ADD_SPHERE_VOLUME_TO_VOLUME_AGGREGATE(Local_720.f_411.f_11, vParam1, vParam4, vParam7);
				break;
			case joaat("VOLCYLINDER"):
				VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(Local_720.f_411.f_11, vParam1, vParam4, vParam7);
				break;
		}
		return 1;
	}
	return 0;
}

int func_295(int iParam0)
{
	if (func_433(iParam0, &(Local_720.f_411.f_13)))
	{
		Local_720.f_411++;
		return 1;
	}
	return 0;
}

void func_296(var uParam0, int iParam1, vector3 vParam2, int iParam5)
{
	func_224(iParam1, 256);
	uParam0->f_61 = iParam1;
	*uParam0 = func_244(iParam1);
	uParam0->f_33 = iParam5;
	uParam0->f_51 = { vParam2 };
}

void func_297(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1901671.f_875;
	iVar1 = Global_1901671.f_875.f_1;
	iVar2 = Global_1901671.f_875.f_2;
	switch (iParam1)
	{
		case 14:
			func_435(uParam0, func_434(*uParam0), 1000, 1097859072 /* Float: 15f */, 1153138688 /* Float: 1500f */, 1092616192 /* Float: 10f */, -1.04609E-23f);
			func_436(uParam0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */, 1123024896 /* Float: 120f */, 1112014848 /* Float: 50f */, 1117782016 /* Float: 80f */, 1140457472 /* Float: 500f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			func_437(uParam0, 8);
			func_437(uParam0, 4);
			break;
		case 0:
			func_435(uParam0, "LEGENDARY_ALLIGATOR_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 1:
			func_435(uParam0, "LEGENDARY_BEAR_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */, 1123024896 /* Float: 120f */, 1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 2:
			func_435(uParam0, "LEGENDARY_BEAVER_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1092616192 /* Float: 10f */, 1106247680 /* Float: 30f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 3:
			func_435(uParam0, "LEGENDARY_BISON_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */, 1123024896 /* Float: 120f */, 1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 4:
			func_435(uParam0, "LEGENDARY_BOAR_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 5:
			func_435(uParam0, "LEGENDARY_BUCK_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 6:
			func_435(uParam0, "LEGENDARY_COUGAR_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 7:
			func_435(uParam0, "LEGENDARY_PANTHER_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 8:
			func_435(uParam0, "LEGENDARY_COYOTE_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 9:
			func_435(uParam0, "LEGENDARY_FOX_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1092616192 /* Float: 10f */, 1106247680 /* Float: 30f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 10:
			func_435(uParam0, "LEGENDARY_MOOSE_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1106247680 /* Float: 30f */, 1112014848 /* Float: 50f */, 1123024896 /* Float: 120f */, 1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 11:
			func_435(uParam0, "LEGENDARY_RAM_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 12:
			func_435(uParam0, "LEGENDARY_WOLF_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
		case 13:
			func_435(uParam0, "LEGENDARY_ELK_CALL_SOUNDS", iVar1, iVar0, iVar2, 1106247680 /* Float: 30f */, -1.04609E-23f);
			func_436(uParam0, 1101004800 /* Float: 20f */, 1109393408 /* Float: 40f */, 1123024896 /* Float: 120f */, 1106247680 /* Float: 30f */, 1117782016 /* Float: 80f */, 1128792064 /* Float: 200f */, 1f, 4f, 1056964608 /* Float: 0.5f */);
			break;
	}
}

bool func_298(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;

	if (iParam0 == 0)
	{
		return false;
	}
	Var0 = { func_438(iParam0, 12648.71f) };
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

void func_299()
{
	func_439();
}

void func_300()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = NETWORK::PARTICIPANT_ID_TO_INT();
	iVar0 = 0;
	while (iVar0 < 32)
	{
		bVar1 = NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0));
		func_440(iVar0, bVar1, iVar2);
		func_441(iVar0, bVar1, iVar2);
		iVar0++;
	}
}

void func_301()
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
	if (!func_235(&iVar3))
	{
		return;
	}
	bVar4 = false;
	bVar5 = false;
	bVar6 = false;
	bVar7 = false;
	bVar8 = false;
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() != Local_720.f_265.f_124)
	{
		bVar8 = true;
		Local_720.f_265.f_124 = !Local_720.f_265.f_124;
	}
	iVar0 = 0;
	while (iVar0 < 1)
	{
		bVar7 = false;
		if (Local_720.f_265.f_96 >= 8)
		{
			Local_720.f_265.f_96 = 0;
		}
		iVar0 = Local_720.f_265.f_96;
		Local_720.f_265.f_96++;
		iVar9 = func_431(iVar0);
		iVar1 = Local_720.f_265.f_7[iVar0 /*11*/];
		bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		if (func_174(iVar9, 4))
		{
			func_407(iVar9, iVar3, 1);
			bVar4 = !ENTITY::DOES_ENTITY_EXIST(iVar1);
		}
		if (bVar4)
		{
			if (Local_111[iVar3 /*19*/].f_7.f_2[iVar0] > -1f)
			{
				Local_111[iVar3 /*19*/].f_7.f_2[iVar0] = -1f;
			}
			if (MISC::IS_BIT_SET(Local_720.f_265.f_5, iVar0))
			{
				MISC::CLEAR_BIT(&(Local_720.f_265.f_5), iVar0);
				MISC::CLEAR_BIT(&(Local_720.f_265.f_6), iVar0);
				MISC::CLEAR_BIT(&(Local_720.f_265.f_97), iVar0);
			}
		}
		else
		{
			bVar7 = func_442(iVar2, iVar1, iVar0, iVar3);
		}
		if (MISC::IS_BIT_SET(Local_720.f_265.f_97, iVar0))
		{
			if (bVar4 || !bVar7)
			{
				MISC::CLEAR_BIT(&(Local_720.f_265.f_97), iVar0);
			}
		}
		else if (!bVar4)
		{
			if (bVar7)
			{
				MISC::SET_BIT(&(Local_720.f_265.f_97), iVar0);
			}
		}
		if (!bVar4)
		{
			if (AUDIO::IS_ANY_SPEECH_PLAYING(iVar1))
			{
				if (!MISC::IS_BIT_SET(Local_111[iVar3 /*19*/].f_7.f_1, iVar0))
				{
					MISC::SET_BIT(&(Local_111[iVar3 /*19*/].f_7.f_1), iVar0);
				}
				func_443(&(Local_720.f_265.f_98[iVar0 /*3*/]));
			}
		}
		if (MISC::IS_BIT_SET(Local_111[iVar3 /*19*/].f_7.f_1, iVar0))
		{
			if (bVar4 || (!AUDIO::IS_ANY_SPEECH_PLAYING(iVar1) && (!func_444(&(Local_720.f_265.f_98[iVar0 /*3*/])) || func_395(&(Local_720.f_265.f_98[iVar0 /*3*/]), 1056964608 /* Float: 0.5f */))))
			{
				func_393(&(Local_720.f_265.f_98[iVar0 /*3*/]));
				MISC::CLEAR_BIT(&(Local_111[iVar3 /*19*/].f_7.f_1), iVar0);
			}
		}
		if ((!bVar4 && bVar8) && func_174(iVar9, 256))
		{
			NETWORK::SET_ENTITY_VISIBLE_IN_CUTSCENE(iVar1, Local_720.f_265.f_124, false, 256);
		}
		if (func_174(iVar9, 4))
		{
			if (bVar4)
			{
				if (!bVar6)
				{
					if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
					{
						if (func_445(iVar9))
						{
							if (!func_364(iVar9, &bVar5, &bVar6))
							{
								if (bVar5)
								{
									func_259(iVar9, 4);
								}
								else if (bVar6)
								{
								}
							}
						}
					}
				}
			}
			else if ((NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iVar1) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1)) && !func_174(iVar9, 8))
			{
				if (!func_445(iVar9))
				{
					PED::FADE_AND_DESTROY_PED(&iVar1);
				}
			}
		}
		iVar0++;
	}
	if (Local_720.f_265.f_97 != 0)
	{
		if (!func_446(1, 255))
		{
			func_447(1);
		}
	}
	else if (func_446(1, 255))
	{
		func_448(1);
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

	fVar0 = func_449();
	if (Local_720.f_411.f_4)
	{
		return;
	}
	if (!func_235(&iVar1))
	{
		return;
	}
	if (func_185(Local_111[iVar1 /*19*/].f_18, 1))
	{
		Local_720.f_411.f_4 = 1;
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (func_450(iVar2, 0))
	{
		return;
	}
	fVar3 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar2, true, false), Local_720.f_15);
	fVar4 = Local_720.f_411.f_9;
	fVar5 = Local_720.f_411.f_10;
	if (func_185(Local_720.f_411.f_12, 2))
	{
		bVar6 = false;
		fVar7 = ENTITY::GET_ENTITY_SPEED(iVar2);
		fVar8 = (fVar0 * (1f / Local_720.f_411.f_7));
		if (fVar7 > 0f)
		{
			if (func_451(Local_720.f_15, iVar2))
			{
				bVar6 = true;
			}
		}
		if (bVar6)
		{
			if (Local_720.f_411.f_6 < 1f)
			{
				Local_720.f_411.f_6 = (Local_720.f_411.f_6 + fVar8);
				if (Local_720.f_411.f_6 > 1f)
				{
					Local_720.f_411.f_6 = 1f;
				}
			}
		}
		else if (Local_720.f_411.f_6 > 0f)
		{
			Local_720.f_411.f_6 = (Local_720.f_411.f_6 - fVar8);
			if (Local_720.f_411.f_6 < 0f)
			{
				Local_720.f_411.f_6 = 0f;
			}
		}
		fVar9 = ((fVar7 * Local_720.f_411.f_5) * Local_720.f_411.f_6);
		fVar4 = (fVar4 + fVar9);
		fVar5 = (fVar5 + fVar9);
	}
	if (fVar3 <= fVar4)
	{
		func_230(&(Local_111[iVar1 /*19*/].f_18), 1);
	}
	else if (VOLUME::DOES_VOLUME_EXIST(Local_720.f_411.f_11) && ENTITY::IS_ENTITY_IN_VOLUME(iVar2, Local_720.f_411.f_11, false, 0))
	{
		func_230(&(Local_111[iVar1 /*19*/].f_18), 1);
	}
	else if (Local_720.f_411 > 0)
	{
		iVar10 = 0;
		while (iVar10 < 3)
		{
			func_452(&(Local_720.f_411.f_13[iVar10 /*9*/]), fVar5, 4f, 0, 0, 0, 0, 1);
			iVar10++;
		}
		if (func_453(&(Local_720.f_411.f_13), Local_720.f_411, Local_720.f_411.f_8))
		{
			func_230(&(Local_111[iVar1 /*19*/].f_18), 1);
		}
	}
	if (func_185(Local_111[iVar1 /*19*/].f_18, 1))
	{
		Local_720.f_411.f_4 = 1;
	}
}

void func_303()
{
	int iVar0;

	func_454();
	func_455();
	func_456();
	func_457(&(Local_720.f_170));
	if (Local_720.f_25)
	{
		func_458(&(Local_13.f_7), &(Local_720.f_25), &(Local_720.f_53));
	}
	func_459();
	if (func_460(&(Local_720.f_53)))
	{
		func_461(&(Local_720.f_53));
	}
	func_462(Local_720.f_53);
	func_463(Local_720.f_53);
	func_464(Local_720.f_53);
	if (func_329(2, -1))
	{
		iVar0 = 1125515264; /* Float: 150f */
	}
	else
	{
		iVar0 = 1132068864; /* Float: 250f */
	}
	func_465(Local_720.f_53, iVar0);
}

bool func_304()
{
	bool bVar0;

	bVar0 = true;
	if (bVar0 && !UNLOCK::UNLOCK_IS_UNLOCKED(Local_720.f_14))
	{
		return false;
	}
	if (func_466())
	{
		return false;
	}
	if (func_467(PLAYER::GET_PLAYER_INDEX()))
	{
		return false;
	}
	return true;
}

void func_305()
{
	int iVar0;

	Local_720.f_173.f_3 = -1;
	Local_720.f_173.f_4 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_363(iVar0, 1))
		{
			Local_720.f_173.f_4 = (Local_720.f_173.f_4 || Local_111[iVar0 /*19*/].f_6);
			Local_720.f_173.f_3 = (Local_720.f_173.f_3 && Local_111[iVar0 /*19*/].f_6);
		}
		iVar0++;
	}
}

void func_306()
{
	if (func_248() != func_314())
	{
		func_468(func_314(), func_248());
		func_469(Local_13.f_24);
	}
}

void func_307()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < Local_720.f_173.f_77)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Local_720.f_173.f_77[iVar0]))
		{
		}
		else if (func_470(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), Local_720.f_173.f_77[iVar0], 1, 0))
		{
			iVar1 = 1;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 == 1)
	{
		if (!func_268(16384, -1, 1))
		{
			func_237(16384);
		}
	}
	else if (func_268(16384, -1, 1))
	{
		func_471(16384);
	}
}

bool func_308()
{
	return Local_720.f_25;
}

void func_309(int iParam0, int iParam1)
{
	if (Local_720.f_163.f_6 == -1)
	{
		Local_720.f_163.f_6 = iParam1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_472(&(Local_720.f_53), 128))
	{
		if (func_473(Global_33, iParam0, 1101004800 /* Float: 20f */, 1, 1))
		{
			func_474(iParam0, func_408(ENTITY::GET_ENTITY_MODEL(iParam0)), iParam1, &(Local_720.f_53));
			func_437(&(Local_720.f_53), 128);
		}
	}
}

bool func_310(int iParam0)
{
	return func_229(Local_720.f_163, iParam0);
}

void func_311()
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	vVar0 = { func_475(PLAYER::PLAYER_ID()) };
	iVar3 = 0;
	while (iVar3 < 8)
	{
		iVar4 = func_244(iVar3);
		if (iVar3 != 0 && func_389(iVar4, 0))
		{
			if (iVar3 >= 2)
			{
				if (((Local_13.f_24.f_19[iVar3] >= 7 && Local_13.f_24.f_19[iVar3] != 9) && func_476(iVar3, 1096286208 /* Float: 13.5f */, 255, 0)) || func_476(iVar3, (1096286208 / 2f), 255, 0))
				{
					func_477(iVar3, vVar0, 1096286208 /* Float: 13.5f */, 4.085619E-09f, 4.185971E-18f, 0, 0, 0, 1);
				}
				else if (((((Local_13.f_24.f_19[iVar3] == 0 || Local_13.f_24.f_19[iVar3] == 1) || Local_13.f_24.f_19[iVar3] == 3) || Local_13.f_24.f_19[iVar3] == 9) || !func_476(iVar3, 1121714176 /* Float: 110f */, 255, 0)) && !func_476(iVar3, 1103626240 /* Float: 25f */, 255, 0))
				{
					func_172(iVar3);
				}
			}
		}
		iVar3++;
	}
	if ((func_236(16, 0) || func_236(64, 0)) || func_236(32, 0))
	{
		func_478();
	}
	else
	{
		func_479();
	}
}

void func_312()
{
	int iVar0[7];

	if (func_268(32768, -1, 1))
	{
		iVar0[0] = func_244(0);
		iVar0[1] = func_244(2);
		iVar0[2] = func_244(3);
		iVar0[3] = func_244(4);
		iVar0[4] = func_244(5);
		iVar0[5] = func_244(6);
		iVar0[6] = func_244(7);
		func_480(&iVar0);
		return;
	}
	if (func_308())
	{
		if (!func_328())
		{
			return;
		}
	}
	else
	{
		if (!func_268(16, -1, 1))
		{
			return;
		}
		if (!func_481() && !((((((func_248() == 7 || func_482(2)) || func_482(3)) || func_482(4)) || func_482(5)) || func_482(6)) || func_482(7)))
		{
			return;
		}
	}
	func_483();
}

void func_313()
{
	int iVar0;

	if (func_484())
	{
		iVar0 = func_485(0, 0, 1, 0);
		if (func_486(iVar0) && Local_13.f_7.f_1 == 1)
		{
			func_487(&(Local_720.f_25), 8);
			func_228(0);
			func_488(&(Local_13.f_7), 9);
		}
		else if (!func_486(iVar0) && Local_13.f_7.f_1 == 0)
		{
			func_487(&(Local_720.f_25), 8);
			func_228(1);
			func_488(&(Local_13.f_7), 8);
		}
	}
	if (func_489() && Local_720.f_53.f_30 != -7.17341E+34f)
	{
		Local_720.f_53.f_30 = -7.17341E+34f;
	}
}

int func_314()
{
	return Local_720.f_173.f_1;
}

void func_315()
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(0);
	if ((func_391(0, 1133903872 /* Float: 300f */, 0) && !func_236(2, 0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		if (func_268(1, -1, 1))
		{
			if (func_117() == 1)
			{
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_720.f_173.f_5) || !NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_720.f_173.f_5))
				{
					return;
				}
				if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_720.f_173.f_5, false))
				{
					iVar1 = func_244(1);
					func_490(&(Local_720.f_173.f_5), 0);
					func_490(&(Local_720.f_173.f_5), 1);
					if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_720.f_173.f_5, func_491(0), false)) || !ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_720.f_173.f_5, func_491(1), false)))
					{
						if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_720.f_173.f_5, func_491(0), false)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar0))
							{
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(ANIMSCENE::_GET_ANIM_SCENE_PED(Local_720.f_173.f_5, func_491(1), false)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(iVar1))
							{
							}
						}
						return;
					}
					func_492(&(Local_720.f_173.f_5));
					func_493(&(Local_720.f_173.f_5));
				}
			}
			else if ((!func_494(iVar0, 8.594848E+20f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					return;
				}
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 0, false, false, false, false);
			}
			func_495(&(Local_720.f_53), 0);
			func_237(2);
		}
	}
}

void func_316()
{
	if (func_117() == 1)
	{
		func_496();
	}
	else
	{
		func_497();
	}
}

void func_317()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = func_244(0);
	if (func_117() == 1)
	{
		func_394(&(Local_13.f_24.f_3), 0);
	}
	if (((((((func_391(0, 1104674816 /* Float: 27f */, 0) || (func_498(iVar0, 1, 1, 1, 0, 0) && func_476(0, 1113325568 /* Float: 55f */, 255, 0))) || ((func_236(64, 0) && (func_498(iVar0, 1, 1, 1, 0, 0) && func_391(0, 1121714176 /* Float: 110f */, 0))) || func_391(0, 1113325568 /* Float: 55f */, 0))) || (((func_117() == 1 && func_395(&(Local_13.f_24.f_3), 1109393408 /* Float: 40f */)) && func_391(0, 1104674816 /* Float: 27f */, 0)) && func_236(32, 0))) || func_499(iVar0, &(Local_720.f_118), 0)) && func_236(1024, 0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		iVar1 = func_485(0, 0, 1, 0);
		bVar2 = func_486(iVar1);
		if ((func_391(0, 1113325568 /* Float: 55f */, 0) || (((func_117() == 1 && func_395(&(Local_13.f_24.f_3), 1109393408 /* Float: 40f */)) && func_391(0, 1104674816 /* Float: 27f */, 0)) && func_236(32, 0))) && bVar2 == 0)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			func_500(2048);
			func_393(&(Local_13.f_24.f_11));
			func_393(&(Local_13.f_24.f_3));
			func_237(64);
			func_237(32);
		}
		else if ((((func_498(iVar0, 1, 1, 1, 0, 0) && func_476(0, 1113325568 /* Float: 55f */, 255, 0)) || (bVar2 == 1 && func_391(0, 1113325568 /* Float: 55f */, 0))) || func_395(&(Local_13.f_24.f_3), 1109393408 /* Float: 40f */)) || func_499(iVar0, &(Local_720.f_118), 0))
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			func_393(&(Local_13.f_24.f_3));
			func_237(2048);
			func_500(1024);
			func_500(4096);
		}
		if (func_391(0, 1113325568 /* Float: 55f */, 0))
		{
		}
		if (func_499(iVar0, &(Local_720.f_118), 0))
		{
		}
		if (func_395(&(Local_13.f_24.f_3), 1109393408 /* Float: 40f */))
		{
		}
	}
}

void func_318()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;

	iVar0 = func_244(0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	vVar3 = { func_223(Local_13.f_24.f_8) };
	if (((((func_498(iVar0, 1, 1, 1, 0, 0) && func_391(0, 1113325568 /* Float: 55f */, 0)) || func_391(0, 1104674816 /* Float: 27f */, 0)) || func_499(iVar0, &(Local_720.f_118), 0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		iVar1 = func_485(0, 0, 1, 0);
		bVar2 = func_486(iVar1);
		if (func_391(0, 1113325568 /* Float: 55f */, 0) && bVar2 == 0)
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, func_117() != 2);
			func_500(2048);
			func_393(&(Local_13.f_24.f_11));
			func_393(&(Local_13.f_24.f_3));
			func_237(64);
			func_237(32);
			if (func_391(0, 1113325568 /* Float: 55f */, 0))
			{
			}
		}
		else if (!func_391(0, 1108082688 /* Float: 35f */, 0))
		{
			func_501();
		}
		else if (!func_236(2048, 0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, func_117() != 2);
			func_237(2048);
			func_500(1024);
			func_500(4096);
			if (bVar2 == 1)
			{
			}
			if (func_499(iVar0, &(Local_720.f_118), 0))
			{
			}
		}
	}
	else if (func_502(iVar0, vVar3, 1f, 1, 1) && !func_236(1024, 0))
	{
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, func_117() != 2);
		Local_13.f_24.f_9 = Local_13.f_24.f_8;
		Local_13.f_24.f_8 = -1;
		func_393(&(Local_13.f_24.f_3));
		func_237(1024);
		func_500(4096);
	}
	else
	{
		func_501();
	}
}

void func_319()
{
	int iVar0;
	vector3 vVar1;
	int iVar4;
	bool bVar5;

	iVar0 = func_244(0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	vVar1 = { func_503(Local_13.f_24.f_8) };
	if (((((func_498(iVar0, 1, 1, 1, 0, 0) && func_391(0, 1121714176 /* Float: 110f */, 0)) || func_391(0, 1113325568 /* Float: 55f */, 0)) || func_499(iVar0, &(Local_720.f_118), 0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		iVar4 = func_485(0, 0, 1, 0);
		bVar5 = func_486(iVar4);
		if (bVar5 == 0)
		{
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			func_500(2048);
			func_393(&(Local_13.f_24.f_11));
			func_393(&(Local_13.f_24.f_3));
			func_237(64);
			func_237(32);
			if (func_391(0, 1113325568 /* Float: 55f */, 0))
			{
			}
			if (func_499(iVar0, &(Local_720.f_118), 0))
			{
			}
		}
		else
		{
			func_504();
		}
	}
	else if (func_502(iVar0, vVar1, 1f, 1, 1) && !func_236(1024, 0))
	{
		Local_13.f_24.f_9 = Local_13.f_24.f_8;
		Local_13.f_24.f_8 = -1;
		func_393(&(Local_13.f_24.f_3));
		func_237(1024);
		func_500(4096);
	}
	else
	{
		func_504();
	}
}

void func_320()
{
	int iVar0;
	int iVar1;

	iVar0 = func_244(0);
	if (!func_236(4096, 0))
	{
		if (((!func_494(iVar0, 2.40763E-20f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0)) && !PED::IS_PED_DEAD_OR_DYING(iVar0, true))
		{
			if (!func_391(0, 1108082688 /* Float: 35f */, 0))
			{
				TASK::CLEAR_PED_TASKS(iVar0, true, false);
				func_393(&(Local_13.f_24.f_3));
				func_237(4096);
				func_500(2048);
			}
			else
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					return;
				}
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
				iVar1 = func_485(0, 0, 1, 0);
				PED::SET_PED_CAN_RAGDOLL(iVar0, true);
				ENTITY::SET_ENTITY_INVINCIBLE(iVar0, false);
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
				TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 35f, -1, 2097152, 3f, 0);
				func_505(iVar0, 1, -1);
			}
		}
	}
}

void func_321()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar0 = func_244(0);
	iVar1 = func_485(0, 0, 1, 0);
	bVar3 = func_486(iVar1);
	if (!func_391(0, 1113325568 /* Float: 55f */, 0) || bVar3 == 1)
	{
		func_394(&(Local_13.f_24.f_3), 0);
		if ((((bVar3 == 1 || func_395(&(Local_13.f_24.f_3), 1097859072 /* Float: 15f */)) && func_494(iVar0, 3.034861E-30f)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iVar0, true, false);
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			func_393(&(Local_13.f_24.f_3));
			func_500(64);
			func_500(2048);
			func_500(1024);
			func_500(4096);
		}
	}
	else if ((!func_494(iVar0, 3.034861E-30f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
		TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[0]));
		TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[0]), 9.128103E+21f);
		TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
		TASK::TASK_COMBAT_PED(0, iVar2, 0, 0);
		TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[0]);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
		AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_720.f_173.f_68[0]);
	}
	if (func_117() == 1)
	{
		func_394(&(Local_13.f_24.f_3), 0);
		if (func_395(&(Local_13.f_24.f_3), 1106247680 /* Float: 30f */) || func_236(512, 0))
		{
			func_471(128);
			func_393(&(Local_13.f_24.f_11));
			func_393(&(Local_13.f_24.f_3));
			func_237(512);
		}
	}
}

void func_322()
{
	func_506(func_244(0), 0);
}

void func_323()
{
	int iVar0;

	iVar0 = func_244(0);
	if (TASK::_0x9FF5F9B24E870748(iVar0))
	{
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
	}
}

void func_324()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar1 = func_244(iVar0);
		if (iVar0 != 0 && iVar0 >= 2)
		{
			func_507(iVar1, iVar0, &(Local_13.f_24.f_19[iVar0]), 0);
			if (Local_13.f_24.f_19[iVar0] != Local_720.f_173.f_82[iVar0])
			{
				Local_720.f_173.f_82[iVar0] = Local_13.f_24.f_19[iVar0];
			}
		}
		iVar0++;
	}
}

bool func_325(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

void func_326()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Local_720.f_173.f_77)
	{
		func_428(Local_720.f_173.f_77[iVar0]);
		iVar0++;
	}
}

void func_327(var uParam0)
{
	func_508(uParam0);
}

bool func_328()
{
	return func_67(8);
}

bool func_329(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_509(iParam1, 0, 1))
	{
		return false;
	}
	return func_229(Local_111[iParam1 /*19*/].f_4, iParam0);
}

bool func_330(int iParam0)
{
	return func_229(Local_720.f_163.f_1, iParam0);
}

char* func_331(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "LA_ESCAPED_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
	}
	return sVar0;
}

int func_332(char* sParam0)
{
	if (!func_510(255))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	return func_511(sParam0, 10000, 0, 0, 0, 1);
}

int func_333(var uParam0, var uParam1)
{
	return uParam0;
}

int func_334(int iParam0)
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

int func_335(struct<2> Param0)
{
	return func_512(Param0);
}

void func_336(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_333(Param0))
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
					if (func_211(iVar5) == func_513(Param0))
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

int func_337(int iParam0, int iParam1)
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

void func_338(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 2;
	Var0.f_5 = iParam0;
	func_517(&Var0);
}

var func_339(int iParam0)
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

var func_340(int iParam0)
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

var func_341(int iParam0)
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

struct<2> func_342(int iParam0)
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

int func_343(int iParam0)
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

int func_344(int iParam0)
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

void func_345(bool bParam0)
{
	func_192(bParam0, 0);
	func_192(bParam0, 1);
	func_192(bParam0, 3);
	func_190(bParam0);
}

void func_346(bool bParam0)
{
	func_191(bParam0);
	func_519(bParam0, 0, 3);
}

void func_347(bool bParam0, int iParam1)
{
	MISC::SET_BIT(&(bParam0->f_4), iParam1);
}

void func_348(bool bParam0)
{
	func_192(bParam0, 0);
	func_347(bParam0, 0);
	func_347(bParam0, 1);
	func_347(bParam0, 4);
	func_347(bParam0, 5);
}

void func_349(bool bParam0)
{
	func_192(bParam0, 1);
	func_347(bParam0, 2);
	func_347(bParam0, 3);
	func_347(bParam0, 6);
	func_347(bParam0, 7);
	func_195(bParam0, 2);
}

void func_350(bool bParam0)
{
	func_192(bParam0, 0);
	func_347(bParam0, 0);
	func_347(bParam0, 1);
	func_347(bParam0, 2);
}

void func_351(bool bParam0)
{
	func_192(bParam0, 1);
	func_190(bParam0);
}

void func_352(bool bParam0)
{
	func_192(bParam0, 2);
	func_347(bParam0, 3);
}

void func_353(bool bParam0)
{
	func_192(bParam0, 3);
	func_347(bParam0, 4);
}

void func_354(bool bParam0)
{
	func_347(bParam0, 0);
	func_347(bParam0, 1);
}

void func_355(bool bParam0)
{
	func_347(bParam0, 2);
	func_347(bParam0, 3);
}

void func_356(bool bParam0)
{
	func_347(bParam0, 4);
	func_347(bParam0, 5);
}

bool func_357(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

bool func_358(bool bParam0, int iParam1)
{
	bParam0->f_2 = 5.658121E-27f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_359(vector3 vParam0, int iParam3, var uParam4, float fParam5, int iParam6, bool bParam7)
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

int func_360(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return (Global_1245159[iParam0 /*5*/].f_4 + iParam1);
}

int func_361(int iParam0)
{
	if (!func_186(iParam0))
	{
		return 0;
	}
	return Global_1142409.f_1[iParam0 /*63*/].f_3;
}

bool func_362(int iParam0, bool bParam1)
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

bool func_363(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	if (iParam1 == 1)
	{
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iParam0)))
		{
			return false;
		}
	}
	return true;
}

bool func_364(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;
	int iVar9;

	fVar0 = 0f;
	vVar1 = { 0f, 0f, 0f };
	vVar4 = { Local_720.f_15 };
	iVar7 = 0;
	iVar8 = func_404(iParam0);
	iVar9 = func_520(iParam0);
	*bParam2 = 0;
	if (iVar8 != 0)
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_86[iParam0]))
		{
			iVar9 = func_520(iParam0);
			fVar0 = func_521(iParam0);
			if (!func_185(Local_720.f_265.f_7[iParam0 /*11*/].f_2, 2))
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar4, 0f, func_522(iParam0)) };
			}
			else
			{
				vVar1 = { func_522(iParam0) };
			}
			if (!func_523(&(Local_13.f_86[iParam0]), iVar8, vVar1, fVar0, 1, 0, (iVar9 == 0 || PED::_IS_THIS_MODEL_A_HORSE(iVar8)), 1, 1))
			{
				*iParam1 = 1;
			}
			else
			{
				iVar7 = NETWORK::NET_TO_PED(Local_13.f_86[iParam0]);
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
						PED::_UPDATE_PED_VARIATION(iVar7, func_174(iParam0, 1), true, true, true, false);
					}
					else if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (PED::IS_PED_READY_TO_RENDER(iVar7))
						{
						}
						func_524(iVar7, 1);
					}
					if (func_525(iParam0))
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
					}
					if (PED::_IS_THIS_MODEL_A_HORSE(iVar8))
					{
						if (func_526(iParam0))
						{
							if (func_525(iParam0))
							{
							}
						}
						else
						{
							PED::SET_PED_CAN_BE_TARGETTED(iVar7, false);
						}
					}
					if (func_365(iParam0))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_86[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_86[iParam0]);
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
		else if (PED::IS_PED_READY_TO_RENDER(NETWORK::NET_TO_PED(Local_13.f_86[iParam0])))
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

bool func_365(int iParam0)
{
	return func_174(iParam0, 128);
}

int func_366(int iParam0, int iParam1)
{
	return Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_2;
}

bool func_367(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 64);
}

bool func_368(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 16);
}

Vector3 func_369(int iParam0, int iParam1)
{
	return Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_7;
}

bool func_370(int iParam0, int iParam1)
{
	return Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_13;
}

bool func_371(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_527(*uParam0, 0f, 0f, 0f))
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

bool func_372(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Local_720.f_390[iParam0 /*20*/].f_3, iParam1);
}

bool func_373(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 1);
}

bool func_374(var uParam0, int iParam1, vector3 vParam2, bool bParam5, int iParam6)
{
	if (NETWORK::NETWORK_AUTO_SESSION_IS_OBJECT_CREATION_PAUSED())
	{
		return false;
	}
	if (!func_528(iParam1))
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

bool func_375(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 2);
}

bool func_376(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 4);
}

bool func_377(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 128);
}

Vector3 func_378(int iParam0, int iParam1)
{
	return Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_10;
}

bool func_379(int iParam0, int iParam1, int iParam2)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, iParam2);
}

float func_380(float fParam0)
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

Vector3 func_381(vector3 vParam0)
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

bool func_382(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 256);
}

void func_383(int iParam0, int iParam1, bool bParam2)
{
	ENTITY::FREEZE_ENTITY_POSITION(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/], bParam2);
}

bool func_384(int iParam0, int iParam1)
{
	return func_185(Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/].f_1, 512);
}

int func_385(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_529(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 1;
	}
	if (func_310(128))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_488(uParam0, 10);
	}
	if (func_484() && uParam0->f_2 < 8)
	{
		switch (uParam0->f_1)
		{
			case 1:
				func_488(uParam0, 8);
				break;
			case 0:
				func_488(uParam0, 9);
				break;
		}
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_530(1))
			{
				switch (*uParam0)
				{
					case 1:
						func_488(uParam0, 1);
						break;
					case 2:
						func_488(uParam0, 3);
						break;
					case 3:
						func_488(uParam0, 5);
						break;
				}
			}
			break;
		case 5:
			if (func_531(uParam0, uParam1))
			{
				func_488(uParam0, 6);
			}
			break;
		case 6:
			if (func_489())
			{
				func_488(uParam0, 7);
			}
			break;
		case 7:
			break;
		case 1:
			if (PED::IS_PED_USING_ANY_SCENARIO(func_529(uParam1->f_1)))
			{
				func_488(uParam0, 2);
			}
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 8:
			if (func_494(iVar0, 6.077861E-11f))
			{
				func_488(uParam0, 11);
			}
			break;
		case 9:
			if (PED::IS_PED_FLEEING(iVar0))
			{
				func_488(uParam0, 11);
			}
			break;
		case 11:
			if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
			{
				func_532(&(uParam0->f_6));
			}
			if ((func_533(uParam1, 32) && PED::IS_PED_FLEEING(iVar0)) && func_534(&(uParam0->f_6)) > 1092616192)
			{
				iVar1 = func_535(iVar0);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					if ((func_473(iVar1, iVar0, 1097859072 /* Float: 15f */, 1, 1) || (func_473(iVar1, iVar0, 1109393408 /* Float: 40f */, 1, 1) && PED::IS_PED_SHOOTING(iVar1))) || func_536(64))
					{
						func_537(uParam0, 1);
						func_488(uParam0, 8);
					}
				}
			}
			break;
		case 10:
			break;
	}
	return 0;
}

void func_386(struct<2> Param0, vector3 vParam2, int iParam5, var uParam6)
{
	struct<21> Var0;

	if (func_232(vParam2))
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
	func_539(&Var0, func_538(0, 8));
}

bool func_387()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 8)
	{
		if (iVar0 == 0 || iVar0 < 2)
		{
		}
		else
		{
			iVar1 = func_244(iVar0);
			if (((ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1)) && func_473(iVar1, func_540(iVar1), 1120403456 /* Float: 100f */, 1, 1)) && PED::IS_PED_IN_COMBAT(iVar1, 0))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_388(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;

	if (!bParam1)
	{
		return func_185(Local_720.f_173.f_3, iParam0);
	}
	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	bVar1 = func_185(Local_720.f_173.f_4, iParam0);
	if (!func_363(iVar0, 1))
	{
		return false;
	}
	if (bVar1 && !func_185(Local_111[iVar0 /*19*/].f_6, iParam0))
	{
		func_230(&(Local_111[iVar0 /*19*/].f_6), iParam0);
		Local_720.f_173.f_3 = (Local_720.f_173.f_3 && Local_111[iVar0 /*19*/].f_6);
	}
	return func_185(Local_720.f_173.f_3, iParam0);
}

bool func_389(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return true;
	}
	if (func_229(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_229(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_229(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_229(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_229(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_229(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_229(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_229(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_390(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	func_541(&iVar0, &iVar2, &iVar1);
	if (iParam2 > iVar1)
	{
		return false;
	}
	if (iVar0 >= iParam0)
	{
		if (iParam1 <= iVar2)
		{
			return true;
		}
	}
	return false;
}

bool func_391(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			if (!bParam2 || func_510(iVar0))
			{
				if (func_476(iParam0, fParam1, iVar0, 0))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

void func_392(int iParam0)
{
	Local_13.f_24 = iParam0;
}

void func_393(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_394(var uParam0, bool bParam1)
{
	if (bParam1 || !func_444(uParam0))
	{
		func_443(uParam0);
	}
}

bool func_395(var uParam0, float fParam1)
{
	if (!func_444(uParam0))
	{
		return false;
	}
	if (func_542(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_396(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_397(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_398(var uParam0, int iParam1)
{
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam1, uParam0, 15))
	{
		return false;
	}
	if (uParam0->f_4.f_1 != Local_720.f_1)
	{
		return false;
	}
	if (uParam0->f_4 != Local_720)
	{
		return false;
	}
	if (uParam0->f_4.f_2 != Local_720.f_2)
	{
		return false;
	}
	if (uParam0->f_4.f_3 != Local_720.f_3)
	{
		return false;
	}
	return true;
}

void func_399(var uParam0)
{
	switch (uParam0->f_9)
	{
		case -922869466:
			func_543(uParam0);
			break;
		case 2126697993:
			func_544(uParam0);
			break;
		case -1485898032:
			func_545(uParam0);
			break;
	}
}

bool func_400(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

char* func_401()
{
	switch (func_117())
	{
		case 0:
			return "script@ambient@animal@alligator_eat_dead_bird@action";
		case 1:
			return "script@ambient@animal@alligator_eat_dead_bird@action";
	}
	return "";
}

char* func_402()
{
	switch (func_117())
	{
		case 0:
			return "pbl_action";
		case 1:
			return "pbl_action";
	}
	return "";
}

bool func_403(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam3))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
			{
				*uParam1 = ANIMSCENE::_CREATE_ANIM_SCENE(sParam2, iParam4, sParam3, true, true);
				if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
				{
					return false;
				}
			}
			if (!NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(*uParam1))
			{
				if (!NETWORK::_NETWORK_REQUEST_CONTROL_OF_ANIM_SCENE(*uParam1))
				{
					return false;
				}
			}
			if (ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
			{
				*uParam0 = NETWORK::_ANIM_SCENE_TO_NET(*uParam1);
			}
			else if (!ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
			}
			return false;
		}
		return true;
	}
	else
	{
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(*uParam0))
		{
			return false;
		}
		*uParam1 = NETWORK::_NET_TO_ANIM_SCENE(*uParam0);
		if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
		{
			return false;
		}
		return true;
	}
	return false;
}

int func_404(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/].f_3;
}

bool func_405(int iParam0)
{
	return func_372(0, iParam0);
}

bool func_406(int iParam0)
{
	return func_373(0, iParam0);
}

void func_407(int iParam0, int iParam1, bool bParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	iVar2 = func_404(iParam0);
	bVar3 = func_362(iParam1, 1);
	if (!MISC::IS_BIT_SET(Local_720.f_265.f_5, iParam0))
	{
		if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_86[iParam0]))
		{
			iVar1 = NETWORK::NET_TO_PED(Local_13.f_86[iParam0]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				return;
			}
			Local_720.f_265.f_7[iParam0 /*11*/] = iVar1;
			if (bVar3)
			{
				if (ENTITY::IS_ENTITY_DEAD(iVar1) || ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
				{
					Local_111[iParam1 /*19*/].f_7.f_2[iParam0] = -1f;
				}
				else
				{
					Local_111[iParam1 /*19*/].f_7.f_2[iParam0] = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false));
				}
			}
			if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
			{
				if (func_365(iParam0))
				{
					if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_13.f_86[iParam0]))
					{
						if (NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Local_13.f_86[iParam0]))
						{
							NETWORK::PREVENT_NETWORK_ID_MIGRATION(Local_13.f_86[iParam0]);
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
				{
					func_546(iVar1, 1f, 0);
					sVar0 = func_547(iParam0);
					if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar0))
					{
						func_548(iVar1, sVar0, 1);
					}
				}
				if (func_525(iParam0))
				{
					PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
				}
				if (PED::_IS_THIS_MODEL_A_HORSE(iVar2))
				{
					if (func_526(iParam0))
					{
						if (func_525(iParam0))
						{
						}
					}
					else
					{
						PED::SET_PED_CAN_BE_TARGETTED(iVar1, false);
					}
				}
				MISC::SET_BIT(&(Local_720.f_265.f_5), iParam0);
				if (bParam2)
				{
					func_549(iParam0);
				}
			}
		}
	}
}

int func_408(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_ALLIGATOR_01"):
		case joaat("A_C_ALLIGATOR_02"):
		case joaat("A_C_ALLIGATOR_03"):
		case 674287411:
			return 0;
		case joaat("A_C_BEAR_01"):
		case -551216071:
			return 1;
		case -1149999295:
		case joaat("A_C_BEAVER_01"):
			return 2;
		case -915290938:
		case joaat("A_C_BUFFALO_TATANKA_01"):
		case joaat("A_C_BUFFALO_01"):
			return 3;
		case joaat("A_C_BOARLEGENDARY_01"):
		case -389300196:
		case joaat("A_C_BOAR_01"):
			return 4;
		case joaat("A_C_BUCK_01"):
		case -1754211037:
			return 5;
		case -1433814131:
		case joaat("A_C_COUGAR_01"):
			return 6;
		case -1189368951:
		case joaat("A_C_PANTHER_01"):
			return 7;
		case -1307757043:
		case joaat("A_C_COYOTE_01"):
			return 8;
		case -557149691:
		case joaat("A_C_FOX_01"):
			return 9;
		case joaat("A_C_MOOSE_01"):
		case -117665949:
			return 10;
		case joaat("A_C_BIGHORNRAM_01"):
		case -511163808:
			return 11;
		case -1392359921:
		case joaat("A_C_WOLF"):
		case joaat("A_C_WOLF_MEDIUM"):
		case joaat("A_C_WOLF_SMALL"):
			return 12;
		case joaat("A_C_ELK_01"):
		case -781967776:
			return 13;
		default:
			break;
	}
	return -1;
}

void func_409(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	func_550(*uParam1);
}

void func_410(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0))
		{
			PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iParam0, true);
		}
		if (!func_551())
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, true);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 593, false);
		}
	}
}

int func_411(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1.556383E-23f;
		case 1:
			return -1.556383E-23f;
		case 2:
			return -7.536836E-25f;
		case 3:
			return -1.556383E-23f;
		case 4:
			return 0.001535983f;
		case 5:
			return 0.001535983f;
		case 6:
			return 0.001535983f;
		case 7:
			return 0.001535983f;
		case 8:
			return 4.84013E-06f;
		case 9:
			return 4.84013E-06f;
		case 10:
			return -1.556383E-23f;
		case 11:
			return 0.001535983f;
		case 12:
			return 0.001535983f;
		case 13:
			return -1.556383E-23f;
		default:
			break;
	}
	return 0;
}

void func_412(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	FLOCK::_SET_ANIMAL_RARITY(iParam0, 2);
	PED::_0x992187D975635DF5(iParam0, 9.09656E-29f);
	PED::_0x0B787A37EEDD226F(iParam0, iParam1);
	PED::SET_LOOTING_FLAG(iParam0, 10, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0, 23, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 10, true);
	PED::SET_PED_LASSO_HOGTIE_FLAG(iParam0, 1, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 542, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 15, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 529, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 370, true);
	ENTITY::_SET_ENTITY_THREAT_TIER(iParam0, 1, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 588, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 568, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 585, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 583, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 305, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 306, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 186, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 465, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 388, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 587, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 76, true);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 81, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 82, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 85, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 83, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 84, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 89, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 90, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 105, 10f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 106, 0f);
	FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 78, 20f);
	PED::SET_PED_HEARING_RANGE(iParam0, 20f);
	if (iParam2 != -1 && !bParam3)
	{
		iVar0 = func_408(ENTITY::GET_ENTITY_MODEL(iParam0));
		iVar1 = func_552(iVar0, iParam2);
		ENTITY::SET_ENTITY_MAX_HEALTH(iParam0, iVar1);
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar1, 0);
	}
}

void func_413(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 17, false);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 50, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 78, true);
	PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 58, true);
	PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
	PED::_SET_PED_TARGET_ACTION_DISABLE_FLAG(iParam0, 16);
}

void func_414(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 2048);
	}
	else
	{
		func_230(&(uParam0->f_2), 2048);
	}
}

void func_415(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 256);
	}
	else
	{
		func_230(&(uParam0->f_2), 256);
	}
}

void func_416(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(uParam0, 4);
	}
	else
	{
		func_260(uParam0, 4);
	}
}

void func_417(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 4);
	}
	else
	{
		func_230(&(uParam0->f_2), 4);
	}
}

void func_418(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 16384);
	}
	else
	{
		func_230(&(uParam0->f_2), 16384);
	}
}

void func_419(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_260(&(uParam0->f_2), 128);
	}
	else
	{
		func_230(&(uParam0->f_2), 128);
	}
}

void func_420(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(uParam0, 16);
	}
	else
	{
		func_260(uParam0, 1.504633E-36f);
		func_260(uParam0, 16);
	}
}

void func_421(var uParam0, float fParam1)
{
	uParam0->f_25 = fParam1;
}

void func_422(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(&(uParam0->f_1), 2);
	}
	else
	{
		func_260(&(uParam0->f_1), 2);
	}
}

void func_423(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(uParam0, 256);
	}
	else
	{
		func_260(uParam0, 256);
	}
}

void func_424(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!bParam1)
	{
		func_230(uParam0, 2.524355E-29f);
	}
	else
	{
		func_260(uParam0, 2.524355E-29f);
	}
	if (!bParam2)
	{
		func_230(uParam0, 2f);
	}
	else
	{
		func_260(uParam0, 2f);
	}
	if (!bParam3)
	{
		func_230(uParam0, 1.084202E-19f);
	}
	else
	{
		func_260(uParam0, 1.084202E-19f);
	}
}

void func_425(var uParam0, int iParam1)
{
	uParam0->f_23 = iParam1;
}

var func_426(int iParam0, int iParam1)
{
	return Local_720.f_390[iParam0 /*20*/].f_5[iParam1 /*14*/];
}

void func_427(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10, bool bParam11, int iParam12)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*uParam0 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(4.795139E-15f, vParam1, vParam4, vParam7);
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(*uParam0, true);
			}
			else
			{
				func_553(uParam0, vParam1, vParam4, vParam7, sParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*uParam0 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-9.406495E-20f, vParam1, vParam4, vParam7);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(*uParam0, true);
		}
		else
		{
			func_554(uParam0, vParam1, vParam4, vParam7, sParam10);
		}
	}
}

void func_428(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_429(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, bool bParam11, int iParam12)
{
	if (!VOLUME::DOES_VOLUME_EXIST(*uParam0))
	{
		if (bParam11)
		{
			if (iParam12 == 1)
			{
				*uParam0 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(4.795139E-15f, vParam1, vParam4, vParam7);
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(*uParam0, true);
			}
			else
			{
				func_553(uParam0, vParam1, vParam4, vParam7, iParam10);
			}
		}
		else if (iParam12 == 1)
		{
			*uParam0 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-9.406495E-20f, vParam1, vParam4, vParam7);
			VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(*uParam0, true);
		}
		else
		{
			func_554(uParam0, vParam1, vParam4, vParam7, iParam10);
		}
	}
}

int func_430(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return iVar0;
	}
	func_555(iParam0, bParam2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam3, 0, 0, -1, -1, 2);
	iVar0 = PED::_ADD_SCENARIO_BLOCKING_VOLUME(iParam0, bParam2, 15);
	return iVar0;
}

int func_431(int iParam0)
{
	return iParam0;
}

void func_432(int iParam0, int iParam1)
{
	Local_720.f_265.f_7[iParam0 /*11*/].f_9 = iParam1;
}

bool func_433(int iParam0, var uParam1)
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

char* func_434(int iParam0)
{
	int iVar0;

	iVar0 = func_408(ENTITY::GET_ENTITY_MODEL(iParam0));
	switch (iVar0)
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_435(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6)
{
	StringCopy(&(uParam0->f_43), sParam1, 64);
	uParam0->f_28 = iParam2;
	uParam0->f_29 = iParam3;
	uParam0->f_31 = iParam4;
	uParam0->f_32 = iParam5;
	uParam0->f_30 = fParam6;
}

void func_436(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8, int iParam9)
{
	uParam0->f_34 = iParam1;
	uParam0->f_35 = iParam2;
	uParam0->f_36 = iParam3;
	uParam0->f_37 = iParam4;
	uParam0->f_38 = iParam5;
	uParam0->f_39 = iParam6;
	uParam0->f_40 = fParam7;
	uParam0->f_41 = fParam8;
	uParam0->f_42 = iParam9;
}

void func_437(var uParam0, int iParam1)
{
	func_262(&(uParam0->f_57), iParam1);
}

struct<2> func_438(int iParam0, int iParam1)
{
	struct<2> Var0;
	struct<2> Var2;
	int iVar4;

	if (iParam1 == 0)
	{
		return Var2;
	}
	iVar4 = func_556(iParam0);
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

void func_439()
{
	Local_720.f_265.f_6 = 0;
	Local_720.f_265.f_2 = 0;
	Local_720.f_265.f_1 = -1;
}

void func_440(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		Local_720.f_265.f_2 = (Local_720.f_265.f_2 || Local_111[iParam0 /*19*/].f_7);
		Local_720.f_265.f_1 = (Local_720.f_265.f_1 && Local_111[iParam0 /*19*/].f_7);
		Local_720.f_265.f_6 = (Local_720.f_265.f_6 || Local_111[iParam0 /*19*/].f_7.f_1);
	}
}

void func_441(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1 && iParam2 != iParam0)
	{
		Local_111[iParam2 /*19*/].f_18 = (Local_111[iParam2 /*19*/].f_18 || Local_111[iParam0 /*19*/].f_18);
	}
}

int func_442(int iParam0, int iParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || !ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	Local_111[iParam3 /*19*/].f_7.f_2[iParam2] = fVar0;
	if (fVar0 > Local_720.f_265.f_7[iParam2 /*11*/].f_9)
	{
		return 0;
	}
	return 1;
}

void func_443(var uParam0)
{
	func_558(uParam0, 0f);
}

bool func_444(var uParam0)
{
	return func_559(*uParam0, 1);
}

bool func_445(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	vector3 vVar4;
	float fVar7;

	iVar0 = iParam0;
	iVar1 = func_244(0);
	iVar2 = func_244(iParam0);
	if ((iVar0 != 0 && !func_236(8192, 0)) && (Local_13.f_24.f_28[iVar0] == 0 || !ENTITY::DOES_ENTITY_EXIST(iVar2)))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) && func_560(&vVar4, &fVar7, &uVar3, iVar1, -1))
		{
			func_224(iVar0, 8);
			Local_13.f_24.f_28[iVar0] = 1;
			func_219(iVar0, vVar4, fVar7, 1);
			return true;
		}
	}
	return false;
}

bool func_446(int iParam0, int iParam1)
{
	if (!func_362(iParam1, 0))
	{
		if (!func_235(&iParam1))
		{
			return false;
		}
	}
	return func_185(Local_111[iParam1 /*19*/].f_7, iParam0);
}

void func_447(int iParam0)
{
	int iVar0;

	if (!func_235(&iVar0))
	{
		return;
	}
	func_230(&(Local_111[iVar0 /*19*/].f_7), iParam0);
}

void func_448(int iParam0)
{
	int iVar0;

	if (!func_235(&iVar0))
	{
		return;
	}
	func_260(&(Local_111[iVar0 /*19*/].f_7), iParam0);
}

float func_449()
{
	int iVar0;
	float fVar1;

	if (Local_720.f_411.f_3 == 0)
	{
		Local_720.f_411.f_3 = MISC::GET_GAME_TIMER();
		return 1023410176;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	fVar1 = (BUILTIN::TO_FLOAT((iVar0 - Local_720.f_411.f_3)) * 981668463);
	Local_720.f_411.f_3 = iVar0;
	return fVar1;
}

bool func_450(int iParam0, bool bParam1)
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

bool func_451(vector3 vParam0, int iParam3)
{
	vector3 vVar0;

	if (ENTITY::IS_ENTITY_DEAD(iParam3))
	{
		return false;
	}
	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam3) };
	return func_561(vVar0, vParam0) > func_561(vVar0, ENTITY::GET_ENTITY_COORDS(iParam3, true, false));
}

int func_452(var uParam0, float fParam1, float fParam2, int iParam3, float fParam4, bool bParam5, float fParam6, bool bParam7)
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
			else if (func_562(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
					if (func_563(uParam0, fVar0, (fParam1 * fParam1), iParam3))
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
		uParam0->f_7 = (func_564() - uParam0->f_8);
	}
	else
	{
		uParam0->f_7 = 0f;
	}
	return 1;
}

bool func_453(var uParam0, int iParam1, float fParam2)
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
	func_178(uParam0);
	return true;
}

void func_454()
{
	int iVar0;

	Local_720.f_163.f_1 = 0;
	Local_720.f_163.f_2 = -1;
	Local_720.f_25.f_22 = 0;
	Local_720.f_25.f_23 = -1;
	Local_720.f_53.f_64 = 0;
	Local_720.f_53.f_63 = -1;
	iVar0 = 0;
	while (iVar0 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
	{
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar0)))
		{
			Local_720.f_163.f_1 = (Local_720.f_163.f_1 || Local_111[iVar0 /*19*/].f_4);
			Local_720.f_163.f_2 = (Local_720.f_163.f_2 && Local_111[iVar0 /*19*/].f_4);
			Local_720.f_25.f_22 = (Local_720.f_25.f_22 || Local_111[iVar0 /*19*/].f_5);
			Local_720.f_25.f_23 = (Local_720.f_25.f_23 && Local_111[iVar0 /*19*/].f_5);
			Local_720.f_53.f_64 = (Local_720.f_53.f_64 || Local_111[iVar0 /*19*/].f_1);
			Local_720.f_53.f_63 = (Local_720.f_53.f_63 && Local_111[iVar0 /*19*/].f_1);
		}
		iVar0++;
	}
}

void func_455()
{
	int iVar0;

	Local_720.f_163.f_4++;
	if (Local_720.f_163.f_4 >= 8)
	{
		Local_720.f_163.f_4 = 0;
	}
	iVar0 = func_529(Local_720.f_163.f_4);
	if (MISC::IS_BIT_SET(Local_720.f_163.f_3, Local_720.f_163.f_4))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::IS_PED_HUMAN(iVar0))
	{
		return;
	}
	if (func_565(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) && ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 297, false);
		func_566(Local_720.f_163.f_4);
	}
}

void func_456()
{
	int iVar0;
	int iVar1;
	var uVar5;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(1))
	{
		if (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0) != -4.311247E+20f)
		{
		}
		else if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &iVar1, 4))
		{
		}
		else if (iVar1 != 198)
		{
		}
		else
		{
			if (!SCRIPTS::GET_EVENT_DATA(1, iVar0, &uVar5, 6))
			{
				return;
			}
			func_567(&uVar5, &(Local_720.f_170));
		}
		iVar0++;
	}
}

void func_457(var uParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	struct<2> Var3;

	if (uParam0->f_1 == 0)
	{
		return;
	}
	iVar0 = (Global_1295619.f_16 - uParam0->f_1) * 1000;
	if (iVar0 < 4000)
	{
		return;
	}
	else if (iVar0 > 15000 && func_229(uParam0->f_2, 4))
	{
		uParam0->f_1 = 0;
		uParam0->f_2 = 0;
		return;
	}
	else if (!func_229(uParam0->f_2, 4))
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			return;
		}
		fVar1 = func_568(Global_33, *uParam0, 1, 1);
		bVar2 = ((ENTITY::DOES_ENTITY_EXIST(*uParam0) && ENTITY::_IS_ENTITY_FROZEN(*uParam0)) && !ENTITY::IS_ENTITY_VISIBLE(*uParam0));
		if (fVar1 < 1133903872 && (func_229(uParam0->f_2, 1) || func_229(uParam0->f_2, 2)))
		{
			if (!func_569())
			{
				if (!bVar2)
				{
					func_570(*uParam0);
				}
			}
		}
		if (!bVar2 && fVar1 < 1133903872)
		{
			func_571(*uParam0);
		}
		if (func_229(uParam0->f_2, 1))
		{
			func_572(2, *uParam0);
		}
		if (func_229(uParam0->f_2, 1) && ENTITY::DOES_ENTITY_EXIST(*uParam0))
		{
			Var3 = { func_557(7.642884E+10f, -8.390333E-17f) };
			if (STATS::_STAT_PHEROMONE_COOLDOWN_LEGENDARY_ANIMAL(*uParam0, &Var3))
			{
				func_573(Var3, 1);
			}
		}
		func_262(&(uParam0->f_2), 4);
	}
}

void func_458(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_529(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar3 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0);
	if (!func_574() && func_575(uParam1->f_1, 1109393408 /* Float: 40f */, 1114636288 /* Float: 60f */, 1120403456 /* Float: 100f */, 1f, 5, 0, 1))
	{
		func_576();
	}
	if (!func_484())
	{
		if (func_577(iVar0, &(Local_720.f_118)) || func_499(iVar0, &(Local_720.f_118), 0))
		{
			func_578();
			func_579(uParam0, uParam1, 0, 0);
		}
	}
	if ((func_580(4, -1) && !func_536(8)) && !func_581(uParam0, iVar0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			func_579(uParam0, uParam1, 0, 0);
		}
		else
		{
			NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		}
	}
	if (!func_533(uParam1, 8) && func_484())
	{
		iVar1 = 0;
		while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
		{
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && func_580(4, -1))
			{
				uParam1->f_20 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			}
			else
			{
				iVar1++;
			}
		}
		if (uParam0->f_2 == 7 && !func_533(uParam1, 2))
		{
			func_582(uParam1->f_16);
			func_226(uParam1, 2);
		}
		func_579(uParam0, uParam1, 0, 0);
		func_583(uParam0, uParam1);
		func_584(&(Local_720.f_53));
		func_585(&(Local_720.f_53));
		func_226(uParam1, 8);
	}
	func_586(uParam0, uParam1, uParam2);
	if (func_533(uParam1, 8))
	{
		func_587(uParam0, uParam1);
	}
	else
	{
		func_588(uParam1);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (!func_580(1, -1))
			{
				iVar1 = 0;
				while (iVar1 <= 7)
				{
					iVar2 = Local_720.f_265.f_7[iVar1 /*11*/];
					if (iVar1 != uParam1->f_1 && ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						func_589(iVar1);
					}
					iVar1++;
				}
				func_590(1);
			}
			break;
		case 5:
			break;
		case 6:
			break;
		case 7:
			if (NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(uParam1->f_16))
			{
				if (!ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop"))
				{
					ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam1->f_16, "bStopLoop", true, false);
				}
			}
			if (!func_533(uParam1, 4))
			{
				if (func_591(uParam1->f_16) || ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(uParam1->f_16, &(uParam1->f_14)))
				{
					func_592(uParam1->f_16);
					func_226(uParam1, 4);
				}
			}
			else
			{
				func_593();
			}
			break;
		case 1:
			if (bVar3 && !PED::IS_PED_USING_ANY_SCENARIO(iVar0))
			{
				if (func_533(uParam1, 1))
				{
					iVar4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), uParam1->f_3, 2f, 1, false);
					if (TASK::DOES_SCENARIO_POINT_EXIST(iVar4))
					{
						TASK::TASK_USE_SCENARIO_POINT(iVar0, iVar4, 0, 0, false, true, 0, false, -1f, false);
					}
					else
					{
						TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_6, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
					}
				}
				else
				{
					TASK::TASK_START_SCENARIO_AT_POSITION(iVar0, uParam1->f_3, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_6, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_5, 0, false, true, 0, -1f, false);
				}
			}
			break;
		case 2:
			break;
		case 3:
			if (bVar3 && !func_594(iVar0, 8.333317E-06f))
			{
				TASK::TASK_WANDER_IN_AREA(iVar0, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_6, uParam1->f_26, 3f, 6f, 0);
			}
			break;
		case 4:
			break;
		case 8:
			func_579(uParam0, uParam1, 0, 0);
			break;
		case 9:
			func_579(uParam0, uParam1, 0, 0);
			break;
		case 11:
			if ((!ENTITY::IS_ENTITY_DEAD(iVar0) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_580(64, -1))
			{
				if (func_473(Global_33, iVar0, 1097859072 /* Float: 15f */, 1, 1) || (func_473(Global_33, iVar0, 1109393408 /* Float: 40f */, 1, 1) && PED::IS_PED_SHOOTING(Global_33)))
				{
					func_590(64);
				}
			}
			else if (func_580(64, -1))
			{
				if (!func_473(Global_33, iVar0, 1109393408 /* Float: 40f */, 1, 1) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
				{
					func_595(64);
				}
			}
			if (((bVar3 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
			{
				iVar5 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(PED::GET_CURRENT_TARGET_FOR_PED(iVar0));
				if (ENTITY::DOES_ENTITY_EXIST(iVar5) && PED::IS_PED_A_PLAYER(iVar5))
				{
					iVar6 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar5);
					iVar7 = iVar6;
					if (func_509(iVar7, 1, 1))
					{
						if (func_596(4, iVar7))
						{
							func_579(uParam0, uParam1, 1, 1);
						}
					}
				}
			}
			if (!func_536(16))
			{
				if (bVar3)
				{
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_590(16);
				}
			}
			else if ((((Local_13.f_7.f_1 == 0 && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, false)) && !PED::IS_PED_FLEEING(iVar0)) && TASK::IS_PED_STILL(iVar0))
			{
				func_579(uParam0, uParam1, 1, 1);
			}
			if ((!func_536(32) && bVar3) && PED::IS_PED_IN_COMBAT(iVar0, 0))
			{
				if (ENTITY::IS_ENTITY_DEAD(PLAYER::GET_PLAYER_PED(uParam1->f_20)) || !func_473(PLAYER::GET_PLAYER_PED(uParam1->f_20), iVar0, 1120403456 /* Float: 100f */, 1, 1))
				{
					TASK::TASK_ANIMAL_UNALERTED(iVar0, -1, 0, 0, 0);
					PED::SET_PED_KEEP_TASK(iVar0, true);
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
					func_590(32);
				}
			}
			break;
		case 10:
			break;
	}
}

void func_459()
{
	int iVar0;

	if (func_597(256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_53))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Local_720.f_53))
	{
		return;
	}
	if (!func_473(Global_33, Local_720.f_53, 1112014848 /* Float: 50f */, 1, 1))
	{
		func_393(&(Local_720.f_118.f_42));
		func_598(4);
		func_598(8);
		func_598(16);
		func_598(32);
		func_598(64);
		return;
	}
	if ((PED::IS_PED_HOGTIED(Global_33) || PED::_GET_LASSOER_OF_PED(Global_33)) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = func_599(Local_720.f_53, Global_33, &(Local_720.f_118.f_39), &(Local_720.f_118.f_38));
	}
	if (!func_596(4, -1))
	{
		if (iVar0 == 1)
		{
			func_394(&(Local_720.f_118.f_42), 0);
			func_600(4);
		}
	}
	else if (iVar0 == 0)
	{
		func_393(&(Local_720.f_118.f_42));
		func_598(4);
		func_598(8);
		func_598(16);
		func_598(32);
		func_598(64);
		func_598(128);
	}
	else
	{
		if (!func_596(128, -1) && func_499(Local_720.f_53, &(Local_720.f_118), 0))
		{
			func_600(128);
		}
		if (func_542(&(Local_720.f_118.f_42)) > 1097859072)
		{
			if (!func_596(64, -1))
			{
				func_600(64);
			}
		}
		else if (func_542(&(Local_720.f_118.f_42)) > 1092616192)
		{
			if (!func_596(32, -1))
			{
				func_600(32);
			}
		}
		else if (func_542(&(Local_720.f_118.f_42)) > 1090519040)
		{
			if (!func_596(16, -1))
			{
				func_600(16);
			}
		}
		else if (func_542(&(Local_720.f_118.f_42)) > 5f)
		{
			if (!func_596(8, -1))
			{
				func_600(8);
			}
		}
	}
}

bool func_460(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	int iVar6;

	if (!func_510(255))
	{
		return false;
	}
	if (!func_472(&(Local_720.f_53), 256) && func_473(Global_33, *uParam0, Global_1901671.f_875.f_3, 1, 0))
	{
		func_601();
	}
	else if (func_472(&(Local_720.f_53), 256) && !func_473(Global_33, *uParam0, (Global_1901671.f_875.f_3 + 1112014848), 1, 0))
	{
		func_602();
	}
	if ((uParam0->f_56 < 2 && func_603()) || Local_13.f_18.f_1)
	{
		uParam0->f_56 = 2;
	}
	switch (uParam0->f_56)
	{
		case 0:
			if (!func_604(uParam0))
			{
				return false;
			}
			if (func_502(Global_33, uParam0->f_51, uParam0->f_31, 1, 1))
			{
				if ((MISC::GET_FRAME_COUNT() % 5) == 0)
				{
					CLOCK::GET_POSIX_TIME(&uVar0, &uVar0, &uVar0, &uVar0, &uVar0, &iVar1);
					iVar2 = (iVar1 % BUILTIN::ROUND(uParam0->f_29));
					if (iVar2 < 5)
					{
						func_605(uParam0, 1);
					}
				}
			}
			break;
		case 1:
			if (!func_502(Global_33, uParam0->f_51, (uParam0->f_31 + 1101004800), 1, 1))
			{
				func_393(&(uParam0->f_58));
				func_605(uParam0, 0);
			}
			else if (func_502(Global_33, uParam0->f_51, (uParam0->f_33 + 1092616192), 1, 1) || func_472(uParam0, 1))
			{
				func_393(&(uParam0->f_58));
				func_605(uParam0, 2);
			}
			else if (uParam0->f_28 == -1 || uParam0->f_55 < uParam0->f_28)
			{
				if (!func_444(&(uParam0->f_58)) || func_542(&(uParam0->f_58)) > uParam0->f_29)
				{
					if (func_502(Global_33, uParam0->f_51, (uParam0->f_33 + 1101004800), 1, 1))
					{
						uParam0->f_32 = (uParam0->f_32 / 4f);
					}
					if (func_472(uParam0, 8))
					{
						vVar3 = { func_606(ENTITY::GET_ENTITY_COORDS(*uParam0, true, false), uParam0->f_32, 0f) };
						func_607(vVar3, uParam0->f_30);
					}
					else
					{
						vVar3 = { func_606(uParam0->f_51, uParam0->f_32, 0f) };
						func_607(vVar3, uParam0->f_30);
					}
					func_443(&(uParam0->f_58));
					func_608();
					func_609(uParam0, uParam0->f_51);
					uParam0->f_55++;
					if (uParam0->f_55 == 1)
					{
						iVar6 = func_610(21, 34);
						if (iVar6 <= 3)
						{
							func_332("LA_H_BLIPPED");
						}
					}
				}
			}
			break;
		case 2:
			return true;
	}
	return false;
}

int func_461(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (!func_510(255))
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		if ((!func_596(2, -1) && !ENTITY::IS_ENTITY_DEAD(*uParam0)) && PED::IS_PED_FLEEING(*uParam0))
		{
			func_600(2);
		}
		if (func_611(&(Local_13.f_20)))
		{
			bVar2 = true;
		}
		else if (func_597(2))
		{
			bVar2 = true;
		}
		func_612(*uParam0, &(Local_13.f_20), bVar2);
	}
	if ((uParam0->f_2 < 12 && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		PED::SET_PED_CONFIG_FLAG(*uParam0, 297, false);
		func_495(uParam0, 12);
	}
	if ((uParam0->f_2 < 11 && PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true)) && TASK::IS_PED_IN_WRITHE(*uParam0))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_1));
		}
		func_495(uParam0, 11);
	}
	if (func_472(uParam0, 64) && MAP::DOES_BLIP_EXIST(uParam0->f_54))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_54));
	}
	if (uParam0->f_2 <= 3 && func_603())
	{
		uParam0->f_2 = 3;
		func_585(uParam0);
	}
	if (func_613(uParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && !ENTITY::IS_ENTITY_DEAD(*uParam0))
		{
			if (func_473(Global_33, *uParam0, uParam0->f_33, 0, 1) && uParam0->f_2 >= 4)
			{
				if (!func_614())
				{
					func_615();
				}
				if (!func_328())
				{
					func_616();
				}
			}
		}
	}
	if (((uParam0->f_2 < 3 && Local_13.f_18.f_1) && ENTITY::DOES_ENTITY_EXIST(*uParam0)) && !func_617(*uParam0))
	{
		func_495(uParam0, 3);
		func_584(uParam0);
		func_585(uParam0);
	}
	switch (uParam0->f_2)
	{
		case 0:
			if (func_472(uParam0, 4))
			{
				func_495(uParam0, 2);
			}
			if (func_618(uParam0) || func_472(uParam0, 1))
			{
				func_495(uParam0, 1);
			}
			break;
		case 1:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_54))
			{
				uParam0->f_54 = MAP::BLIP_ADD_FOR_COORDS(func_619(), uParam0->f_51);
				MAP::BLIP_ADD_MODIFIER(uParam0->f_54, -7.217311E+19f);
				MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_54, "LA_CLUE");
				func_615();
				func_495(uParam0, 2);
			}
			break;
		case 2:
			iVar1 = 0;
			while (iVar1 <= 7)
			{
				iVar0 = func_529(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && MISC::IS_BIT_SET(uParam0->f_62, iVar1)) && func_575(iVar1, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1f, 5, 0, 1))
				{
					func_584(uParam0);
				}
				else
				{
					iVar1++;
				}
			}
			iVar0 = *uParam0;
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_575(uParam0->f_61, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1f, 5, 0, 1))
			{
				func_584(uParam0);
			}
			if (func_472(uParam0, 1))
			{
				func_495(uParam0, 3);
			}
			break;
		case 3:
			iVar0 = *uParam0;
			if (MAP::DOES_BLIP_EXIST(uParam0->f_54))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_54));
			}
			if (ENTITY::DOES_ENTITY_EXIST(iVar0) && func_575(uParam0->f_61, uParam0->f_34, uParam0->f_35, uParam0->f_36, 1f, 5, 0, 1))
			{
				func_585(uParam0);
			}
			if (func_613(uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_33, *uParam0) || TASK::_0x920684BE432875B1(*uParam0))
				{
					bVar3 = true;
				}
				else
				{
					bVar3 = false;
				}
				func_620(*uParam0, &(uParam0->f_1), 0, bVar3);
				func_621(&(uParam0->f_58), -1063256064 /* Float: -5f */, 1);
				func_495(uParam0, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_FLEEING(*uParam0))
			{
				if (!func_444(&(uParam0->f_58)))
				{
					func_394(&(uParam0->f_58), 0);
				}
				else if (func_542(&(uParam0->f_58)) > 5f && !func_473(*uParam0, Global_33, uParam0->f_38, 1, 1))
				{
					func_393(&(uParam0->f_58));
					func_495(uParam0, 5);
				}
			}
			else if (!func_444(&(uParam0->f_58)))
			{
				func_394(&(uParam0->f_58), 0);
			}
			else if (func_542(&(uParam0->f_58)) > 5f && !func_575(uParam0->f_61, uParam0->f_37, (uParam0->f_35 + 1092616192), (uParam0->f_36 + 1092616192), 1f, 0, 0, 1))
			{
				func_393(&(uParam0->f_58));
				func_495(uParam0, 5);
			}
			break;
		case 5:
			if (!func_444(&(uParam0->f_58)))
			{
				func_394(&(uParam0->f_58), 0);
			}
			else if (func_542(&(uParam0->f_58)) > uParam0->f_40)
			{
				func_393(&(uParam0->f_58));
				func_622(&(uParam0->f_1));
				func_495(uParam0, 7);
			}
			break;
		case 7:
			if (!func_444(&(uParam0->f_58)))
			{
				func_394(&(uParam0->f_58), 0);
			}
			else if (func_542(&(uParam0->f_58)) > 1f && func_575(uParam0->f_61, uParam0->f_37, uParam0->f_35, uParam0->f_36, 0f, 1, 0, 0))
			{
				func_623(&(uParam0->f_1));
				func_393(&(uParam0->f_58));
				func_495(uParam0, 4);
			}
			else if (func_542(&(uParam0->f_58)) > (uParam0->f_41 + ((BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(*uParam0, true, false)) / 1103626240) * uParam0->f_42)) || ((func_444(&(Local_720.f_19.f_3)) && func_542(&(Local_720.f_19.f_3)) < Global_1901671.f_875.f_4) && func_542(&(uParam0->f_58)) > 2f))
			{
				func_624(&(uParam0->f_1));
				if (func_472(uParam0, 32))
				{
					func_625(*uParam0, uParam0->f_30);
				}
				func_393(&(uParam0->f_58));
				func_495(uParam0, 5);
			}
			else if (!func_473(Global_33, *uParam0, uParam0->f_39, 1, 1) && (!func_444(&(Local_720.f_19.f_3)) || func_542(&(Local_720.f_19.f_3)) > Global_1901671.f_875.f_4))
			{
				func_393(&(uParam0->f_58));
				func_495(uParam0, 8);
			}
			break;
		case 8:
			if (!func_444(&(uParam0->f_58)))
			{
				func_394(&(uParam0->f_58), 0);
			}
			if (func_473(Global_33, *uParam0, (uParam0->f_39 - 1092616192), 1, 1) || (func_444(&(Local_720.f_19.f_3)) && func_542(&(Local_720.f_19.f_3)) < Global_1901671.f_875.f_4))
			{
				func_393(&(uParam0->f_58));
				func_495(uParam0, 7);
			}
			break;
		case 9:
			if (!MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				func_620(*uParam0, &(uParam0->f_1), 0, 1);
			}
			if (!func_473(Global_33, *uParam0, (1112014848 + 1092616192), 1, 1))
			{
				func_495(uParam0, 10);
			}
			break;
		case 10:
			if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_1));
			}
			if (func_473(Global_33, *uParam0, 1112014848 /* Float: 50f */, 1, 1))
			{
				func_495(uParam0, 9);
			}
			break;
		case 11:
			if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 580, true) && !TASK::IS_PED_IN_WRITHE(*uParam0))
			{
				if (TASK::_0x6DAC799857EF3F11(Global_33, *uParam0))
				{
					if (func_473(Global_33, *uParam0, 1112014848 /* Float: 50f */, 1, 1))
					{
						func_495(uParam0, 9);
					}
					else
					{
						func_495(uParam0, 10);
					}
				}
				else
				{
					func_495(uParam0, 3);
				}
			}
			break;
		case 12:
			return 1;
	}
	return 0;
}

void func_462(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if ((Local_13.f_18 == 255 && !func_310(2)) || (Local_13.f_18 != 255 && Local_13.f_18 != PLAYER::PLAYER_ID()))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_33)
		{
			func_626();
			func_627(2);
		}
	}
}

void func_463(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_310(1))
	{
		if ((!ENTITY::IS_ENTITY_DEAD(iParam0) && PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && ENTITY::_0xEF2D9ED7CE684F08(iParam0) == Global_33)
		{
			func_628();
			func_627(1);
			func_629(2);
		}
	}
}

void func_464(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!func_310(16))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(func_630(Global_33)) == iParam0)
		{
			func_631();
			func_627(16);
		}
	}
}

void func_465(int iParam0, float fParam1)
{
	float fVar0;

	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!Local_13.f_18.f_1 && func_330(32))
		{
			Local_13.f_18.f_1 = 1;
		}
	}
	if (((!func_310(4) && (MISC::GET_FRAME_COUNT() % 10) == 0) && ENTITY::DOES_ENTITY_EXIST(Local_720.f_53)) && TASK::_0x920684BE432875B1(Local_720.f_53))
	{
		func_627(4);
	}
	if (!Local_13.f_18.f_1 && !func_329(32, -1))
	{
		if (Local_720.f_118.f_33 != 0)
		{
			func_629(32);
		}
	}
	if (!func_310(128))
	{
		if (((((func_310(8) || func_310(16)) || func_310(4)) || func_330(8)) || (func_330(2) && ENTITY::IS_ENTITY_DEAD(iParam0))) || (ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::_0xA4B6432E3880F2F9(iParam0)))
		{
			func_627(128);
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if ((!func_329(4, -1) && func_310(128)) && func_566(Local_720.f_53.f_61))
		{
			func_629(4);
		}
		if (!func_329(8, -1) && func_632(1))
		{
			if (ENTITY::IS_ENTITY_DEAD(iParam0))
			{
				func_629(16);
			}
			if (func_633(Local_720.f_53.f_61))
			{
				func_629(8);
			}
		}
	}
	if (!func_329(1, -1))
	{
		if (((func_258() && !func_473(Global_33, iParam0, fParam1, 1, 1)) && Local_720.f_19.f_2 != 2) && (!func_444(&(Local_720.f_19.f_3)) || func_542(&(Local_720.f_19.f_3)) > Global_1901671.f_875.f_4))
		{
			func_629(1);
		}
	}
	else
	{
		if (func_444(&(Local_720.f_19.f_3)) && func_542(&(Local_720.f_19.f_3)) < 1101004800)
		{
			fVar0 = 5f;
		}
		else
		{
			fVar0 = 1106247680; /* Float: 30f */
		}
		if (func_473(Global_33, iParam0, (fParam1 - fVar0), 1, 1))
		{
			func_634(1);
		}
	}
}

bool func_466()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_467(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_635(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

void func_468(int iParam0, int iParam1)
{
	if (iParam0 <= 3)
	{
		func_291(1117782016 /* Float: 80f */);
	}
}

void func_469(var uParam0)
{
	Local_720.f_173.f_1 = uParam0;
}

bool func_470(int iParam0, int iParam1, bool bParam2, int iParam3)
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

void func_471(int iParam0)
{
	int iVar0;

	iVar0 = NETWORK::PARTICIPANT_ID_TO_INT();
	if (!func_363(iVar0, 1))
	{
		return;
	}
	func_260(&(Local_111[iVar0 /*19*/].f_6), iParam0);
}

bool func_472(var uParam0, int iParam1)
{
	return func_229(uParam0->f_57, iParam1);
}

bool func_473(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	else if (func_636(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_474(int iParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;

	iVar0 = func_637(iParam1, iParam2);
	if (iVar0 != 0)
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam3->f_1, func_638(iParam1, iParam2));
	}
}

Vector3 func_475(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_476(int iParam0, float fParam1, int iParam2, bool bParam3)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (!func_362(iParam2, 0))
	{
		if (!func_235(&iParam2))
		{
			return false;
		}
	}
	fVar0 = Local_111[iParam2 /*19*/].f_7.f_2[iParam0];
	if (fVar0 <= 0f)
	{
		if (bParam3)
		{
			iVar1 = func_244(iParam0);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iParam2));
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
				{
					fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar1, true, false), func_475(iVar2));
					if (fVar0 < 0f)
					{
						return false;
					}
					Local_111[iParam2 /*19*/].f_7.f_2[iParam0] = fVar0;
				}
			}
		}
		return false;
	}
	return fVar0 <= fParam1;
}

void func_477(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, int iParam7, char* sParam8, bool bParam9, int iParam10)
{
	int iVar0;

	iVar0 = func_244(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || (ENTITY::IS_ENTITY_DEAD(iVar0) && iParam10 == 1))
	{
		func_172(iParam0);
		return;
	}
	if (!func_639(iParam0))
	{
		if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4) || (bParam9 && func_640(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) <= fParam4))
		{
			func_641(iParam0, iParam5, iParam6, iParam7, sParam8);
		}
	}
	else if ((!bParam9 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4) || (bParam9 && func_640(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), vParam1) > fParam4))
	{
		func_172(iParam0);
	}
}

void func_478()
{
	int iVar0;

	iVar0 = func_244(0);
	if (func_268(256, -1, 1))
	{
		Local_720.f_53.f_41 = 1051931443; /* Float: 0.35f */
	}
	else if (PLAYER::_IS_SECONDARY_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
	{
		Local_720.f_53.f_41 = 1061158912; /* Float: 0.75f */
	}
	else if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iVar0, 135f) && func_476(0, 1112014848 /* Float: 50f */, 255, 0))
	{
		Local_720.f_53.f_41 = 1074790400; /* Float: 2.25f */
	}
	else if (PED::IS_PED_FACING_PED(PLAYER::PLAYER_PED_ID(), iVar0, 135f) && func_476(0, 1104674816 /* Float: 27f */, 255, 0))
	{
		Local_720.f_53.f_41 = 1066611507; /* Float: 1.15f */
	}
	else
	{
		Local_720.f_53.f_41 = 1080033280; /* Float: 3.5f */
	}
}

void func_479()
{
	if (!func_236(4, 0) && !func_236(16, 0))
	{
		if (func_575(0, 1112014848 /* Float: 50f */, func_642(func_117() == 1, 1116143616 /* Float: 67.5f */, 1121714176 /* Float: 110f */), 120f, 6f, 5, 0, 1))
		{
			func_237(16);
			func_393(&(Local_13.f_24.f_11));
			func_237(4);
		}
	}
}

void func_480(int iParam0)
{
	int iVar0;
	int iVar1;

	if (Local_720.f_19 == 0)
	{
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return;
	}
	switch (Local_720.f_19.f_2)
	{
		case 0:
			if (Local_111[iVar1 /*19*/].f_2.f_1 != 0)
			{
				Local_720.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				if (func_643())
				{
					Local_720.f_19.f_2 = 2;
				}
				else
				{
					Local_720.f_19.f_2 = 1;
				}
			}
			break;
		case 1:
			if (func_643())
			{
				if (func_644(iParam0))
				{
					Local_111[iVar1 /*19*/].f_2++;
				}
				Local_720.f_19.f_2 = 2;
			}
			break;
		case 2:
			if (!func_643())
			{
				Local_720.f_19.f_2 = 1;
				Local_720.f_19.f_1 = PLAYER::PLAYER_PED_ID();
				func_443(&(Local_720.f_19.f_3));
			}
			break;
	}
}

bool func_481()
{
	return Local_720.f_411.f_4;
}

bool func_482(int iParam0)
{
	int iVar0;

	iVar0 = func_244(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (Local_13.f_24.f_19[iParam0] == 6 && func_476(iParam0, 1096286208 /* Float: 13.5f */, 255, 0))
	{
		return true;
	}
	return false;
}

void func_483()
{
	if (!func_268(32768, -1, 1))
	{
		if (!func_645())
		{
			return;
		}
		func_237(32768);
	}
}

bool func_484()
{
	return func_536(4);
}

int func_485(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_265.f_7[iParam0 /*11*/]))
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
		else if (Local_111[iVar0 /*19*/].f_7.f_2[iParam0] <= 0f)
		{
		}
		else if (bParam3 && !func_510(iVar0))
		{
		}
		else if (iVar1 != -1 && Local_111[iVar0 /*19*/].f_7.f_2[iParam0] > Local_111[iVar1 /*19*/].f_7.f_2[iParam0])
		{
		}
		else if (bVar2 && Local_111[iVar0 /*19*/].f_7.f_2[iParam0] > fParam1)
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

bool func_486(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1) == iParam0)
		{
			if (func_268(16384, iVar0, 1) || (func_646(PLAYER::GET_PLAYER_PED(iParam0), -1) && !func_646(PLAYER::GET_PLAYER_PED(iParam0), 3)))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_487(var uParam0, int iParam1)
{
	func_263(&(uParam0->f_21), iParam1);
}

void func_488(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	func_532(&(uParam0->f_6));
	uParam0->f_2 = iParam1;
}

bool func_489()
{
	return func_536(2);
}

void func_490(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_244(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_491(iParam1)))
	{
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, func_491(iParam1), iVar0, 0);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
}

char* func_491(int iParam0)
{
	switch (func_117())
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "ALLIGATOR";
				case 1:
					return "EGRET";
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return "ALLIGATOR";
				case 1:
					return "EGRET";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_492(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_2[iVar0 /*2*/].f_1))
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(func_491(uParam0->f_2[iVar0 /*2*/])))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_2[iVar0 /*2*/].f_1, true);
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(*uParam0, func_491(uParam0->f_2[iVar0 /*2*/]), uParam0->f_2[iVar0 /*2*/].f_1, 0);
			}
			ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_2[iVar0 /*2*/].f_1, false);
		}
		iVar0++;
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam0))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(*uParam0, uParam0->f_53, uParam0->f_56, 2);
	}
}

void func_493(var uParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(func_401()))
	{
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(*uParam0, func_402(), true);
		ANIMSCENE::START_ANIM_SCENE(*uParam0);
	}
}

bool func_494(int iParam0, int iParam1)
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

void func_495(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

void func_496()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_244(0);
	if ((func_391(0, 1104674816 /* Float: 27f */, 0) || (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_720.f_173.f_5) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_720.f_173.f_5, false))) || func_236(8, 0))
	{
		iVar3 = func_244(1);
		if (func_391(0, 1104674816 /* Float: 27f */, 0))
		{
			if ((!func_494(iVar0, 3.034861E-30f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
			{
				iVar1 = func_485(0, 0, 1, 0);
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[0]));
				TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[0]), 9.128103E+21f);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_COMBAT_PED(0, iVar2, 0, 0);
				TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[0]);
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
				{
					return;
				}
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
				AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
				TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_720.f_173.f_68[0]);
			}
			func_237(64);
		}
		else if ((!func_494(iVar0, 2.40763E-20f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			iVar1 = func_485(0, 0, 1, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 35f, -1, 2097152, 3f, 0);
		}
		func_647(iVar3, 0, 0);
		Local_720.f_53.f_30 = -7.17341E+34f;
		func_237(8);
		func_237(16);
	}
	if ((func_575(0, 1112014848 /* Float: 50f */, 1116143616 /* Float: 67.5f */, 120f, func_642((func_648(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)), 1075838976 /* Float: 2.5f */, 4f), 5, 0, 1) || func_499(iVar0, &(Local_720.f_118), 0)) && !func_236(8, 0))
	{
		if ((!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_720.f_173.f_5) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_720.f_173.f_5, false)) || !NETWORK::_NETWORK_HAS_CONTROL_OF_ANIM_SCENE(Local_720.f_173.f_5))
		{
			return;
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(Local_720.f_173.f_5, "bStopLoop") == 0)
		{
			if (func_499(iVar0, &(Local_720.f_118), 0))
			{
				func_584(&(Local_720.f_53));
			}
			func_237(16);
			Local_720.f_53.f_30 = -7.17341E+34f;
			ANIMSCENE::SET_ANIM_SCENE_BOOL(Local_720.f_173.f_5, "bStopLoop", true, false);
		}
	}
}

void func_497()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_244(0);
	if ((func_391(0, 1112014848 /* Float: 50f */, 0) || func_499(iVar0, &(Local_720.f_118), 0)) || func_236(8, 0))
	{
		if ((!func_494(iVar0, 2.40763E-20f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				return;
			}
			AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
			iVar1 = func_485(0, 0, 1, 0);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar0, false, true);
			TASK::TASK_SMART_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(iVar1), 35f, -1, 2097152, 3f, 0);
		}
		if (func_391(0, 1112014848 /* Float: 50f */, 0))
		{
			iVar2 = func_649(0, 0, 1, 0);
			if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar2))
			{
			}
		}
		if (func_499(iVar0, &(Local_720.f_118), 0))
		{
		}
		if (func_236(8, 0))
		{
		}
		if (func_499(iVar0, &(Local_720.f_118), 0))
		{
			func_584(&(Local_720.f_53));
		}
		Local_720.f_53.f_30 = -7.17341E+34f;
		func_237(16);
		func_393(&(Local_13.f_24.f_3));
		func_237(8);
		func_237(16);
	}
	if (func_575(0, 1112014848 /* Float: 50f */, 1121714176 /* Float: 110f */, 120f, func_642((func_648(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)), 1069547520 /* Float: 1.5f */, 3f), 5, 0, 1) && !func_236(8, 0))
	{
		func_237(16);
		Local_720.f_53.f_30 = -7.17341E+34f;
		func_237(16);
	}
}

bool func_498(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
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
		if (((WEAPON::IS_PED_ARMED(iVar0, 1) && PLAYER::IS_PLAYER_TARGETTING_ENTITY(iVar1, iParam0, bParam5)) && PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(iVar1, iParam0)) && func_568(iVar0, iParam0, 1, 1) <= 4f)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_650(iVar0, 0)))
		{
			if (func_651(iParam0, 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

bool func_499(int iParam0, var uParam1, bool bParam2)
{
	if (func_652(iParam0, 0, uParam1, &(uParam1->f_33), 0, 0))
	{
		return true;
	}
	if (Global_1940186.f_19 && !uParam1->f_2 & 4 != 0)
	{
		if (((func_473(Global_33, iParam0, WEAPON::_GET_MAX_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Global_33), 1, 1) && PED::TIME_SINCE_PED_LAST_SHOT(Global_33) <= 1056964608) && func_651(iParam0, 1055286886 /* Float: 0.45f */, 1057803469 /* Float: 0.55f */, 1055286886 /* Float: 0.45f */, 1057803469 /* Float: 0.55f */)) && !ENTITY::IS_ENTITY_OCCLUDED(iParam0))
		{
			uParam1->f_33 = 4;
			return true;
		}
	}
	if (bParam2 && func_473(Global_33, iParam0, 7f, 1, 1))
	{
		uParam1->f_33 = 65536;
		return true;
	}
	return false;
}

void func_500(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_363(iVar0, 1))
		{
			func_260(&(Local_111[iVar0 /*19*/].f_6), iParam0);
		}
		iVar0++;
	}
}

void func_501()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;

	iVar0 = func_244(0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (((!func_494(iVar0, 3.034861E-30f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0)) && !func_236(1024, 0))
	{
		if (!func_653(&vVar2, &uVar1, &uVar5, iVar0, Local_13.f_24.f_9))
		{
			return;
		}
		Local_13.f_24.f_9 = Local_13.f_24.f_8;
		Local_13.f_24.f_8 = uVar5;
		iVar6 = PLAYER::GET_PLAYER_PED(func_485(0, 0, 1, 0));
		TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[0]));
		TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[0]), 6.139274E+14f);
		TASK::TASK_FLEE_PED_VIA(0, iVar6, 4, vVar2, 0, 1112014848 /* Float: 50f */, 1200, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 0.25f, 1048581, 40000f);
		TASK::_TASK_USE_NEAREST_SCENARIO_TO_COORD(0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 5f, 0, false, false, false, false);
		TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[0]);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_720.f_173.f_68[0]);
		func_500(64);
		func_393(&(Local_13.f_24.f_3));
	}
}

bool func_502(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
		{
			return true;
		}
	}
	else if (func_636(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (bParam4 * bParam4))
	{
		return true;
	}
	return false;
}

Vector3 func_503(int iParam0)
{
	switch (func_222())
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			switch (iParam0)
			{
				case 0:
					return 1157999039, -993809630, 1109013299 /* Float: 38.55f */;
				case 1:
					return 1157984513, -992410006, 1109123950;
				case 2:
					return 1158366001, -993532125, 1109014426;
				case 3:
					return 1157812704, -992564493, 1109196800 /* Float: 39.25f */;
				case 4:
					return 1158192817, -992490571, 1109013430;
				case 5:
					return 1158317047, -992954647, 1109013955;
				case 6:
					return 1158079695, -993423539, 1109196800 /* Float: 39.25f */;
				case 7:
					return 1157912918, -993707308, 1109196800 /* Float: 39.25f */;
				default:
					break;
			}
			break;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1158414108, -1003793213, 1109196800 /* Float: 39.25f */;
				case 1:
					return 1158540215, -1004780878, 1109196748;
				case 2:
					return 1158248455, -1002598266, 1109196800 /* Float: 39.25f */;
				case 3:
					return 1158335691, -1003451513, 1109196879;
				case 4:
					return 1158417482, -1003808503, 1109196800 /* Float: 39.25f */;
				case 5:
					return 1158362406, -1004541633, 1109196800 /* Float: 39.25f */;
				case 6:
					return 1158140892, -1004640014, 1109196800 /* Float: 39.25f */;
				case 7:
					return 1158006802, -1004098898, 1109196800 /* Float: 39.25f */;
				case 8:
					return 1158447545, -1005176141, 1109229830;
				case 9:
					return 1158749661, -1005083746, 1109196800 /* Float: 39.25f */;
				case 10:
					return 1158786914, -1007535247, 1109196800 /* Float: 39.25f */;
				case 11:
					return 1158618294, -1007241118, 1109196748;
				case 12:
					return 1158698147, -1006136307, 1109196800 /* Float: 39.25f */;
				case 13:
					return 1158696709, -1005245253, 1109153258;
				case 14:
					return 1158565760, -1005772608, 1109196800 /* Float: 39.25f */;
				case 15:
					return 1158567881, -1005056301, 1109196800 /* Float: 39.25f */;
				default:
					break;
			}
			break;
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
			switch (iParam0)
			{
				case 0:
					return 1160697658, -1005956714, 1109001241;
				case 1:
					return 1160884906, -1004343824, 1108870798;
				case 2:
					return 1160697658, -1005956714, 1109001241;
				case 3:
					return 1160884906, -1004343824, 1108870798;
				case 4:
					return 1160769695, -1005465888, 1108870850;
				case 5:
					return 1160446737, -1005797155, 1109086962;
				case 6:
					return 1160848301, -1003470720, 1109020377;
				case 7:
					return 1160736517, -1005855762, 1108920395;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

void func_504()
{
	int iVar0;
	var uVar1;
	vector3 vVar2;
	var uVar5;
	int iVar6;

	iVar0 = func_244(0);
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return;
	}
	if (((!func_494(iVar0, 3.034861E-30f) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !FIRE::IS_ENTITY_ON_FIRE(iVar0)) && !func_236(1024, 0))
	{
		if (!func_654(&vVar2, &uVar1, &uVar5, iVar0, Local_13.f_24.f_9))
		{
			return;
		}
		Local_13.f_24.f_9 = Local_13.f_24.f_8;
		Local_13.f_24.f_8 = uVar5;
		iVar6 = PLAYER::GET_PLAYER_PED(func_485(0, 0, 1, 0));
		TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[0]));
		TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[0]), 5.484974E-36f);
		TASK::TASK_FLEE_PED_VIA(0, iVar6, 4, vVar2, 0, 1112014848 /* Float: 50f */, 1200, 0);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vVar2, 3f, -1, 0.25f, 1048581, 40000f);
		TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, iVar6, -1, -1f, -1f, -1f);
		TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[0]);
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		TASK::CLEAR_PED_TASKS(iVar0, true, false);
		AUDIO::PLAY_ANIMAL_VOCALIZATION(iVar0, "GROWL", false);
		TASK::TASK_PERFORM_SEQUENCE(iVar0, Local_720.f_173.f_68[0]);
		func_393(&(Local_13.f_24.f_3));
	}
}

void func_505(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (iParam2 == -1)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	else
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iParam2);
		iVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(iVar0, iParam0))
	{
		ENTITY::_ADD_ENTITY_TRACKING_TRAILS(iParam0);
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(iVar0, iParam0, bParam1);
	}
}

void func_506(int iParam0, bool bParam1)
{
	if ((!func_655(1) && bParam1) && FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74) > 0f)
	{
		FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74, 0f);
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		if (!func_655(1))
		{
			if (!PED::GET_PED_CONFIG_FLAG(iParam0, 580, true))
			{
				TASK::TASK_FLEE_PED(iParam0, func_540(iParam0), 3, 1.506102E-36f, 9999f, -1, 0);
				PED::SET_PED_KEEP_TASK(iParam0, true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				func_656(1);
			}
		}
		else if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, false)) && !PED::IS_PED_FLEEING(iParam0)) && !PED::IS_PED_IN_COMBAT(iParam0, 0)) && TASK::IS_PED_STILL(iParam0))
		{
			TASK::TASK_FLEE_PED(iParam0, func_540(iParam0), 3, 1.506102E-36f, 9999f, -1, 0);
		}
	}
}

void func_507(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;

	if (PED::IS_PED_DEAD_OR_DYING(iParam0, true) && func_117() != 2)
	{
		bVar3 = func_657(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), 5f, 100f);
		if (bVar3 == 0)
		{
			func_394(&(Local_13.f_24.f_37[iParam1 /*3*/]), 0);
		}
		else
		{
			func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
		}
		if ((func_395(&(Local_13.f_24.f_37[iParam1 /*3*/]), 1096286208 /* Float: 13.5f */) && Local_13.f_24.f_28[iParam1] == 1) && bVar3 == 0)
		{
			func_259(iParam1, 8);
			Local_13.f_24.f_28[iParam1] = 0;
			*uParam2 = 5;
			func_393(&(Local_13.f_24.f_3));
			return;
		}
	}
	else if (Local_13.f_24.f_28[iParam1] == 0)
	{
		func_224(iParam1, 8);
		Local_13.f_24.f_28[iParam1] = 1;
	}
	iVar4 = func_244(0);
	switch (Local_720.f_173.f_82[iParam1])
	{
		case 0:
			func_658(iParam1);
			func_659(iParam1);
			func_660(iParam0);
			func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[iParam1]));
			TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[iParam1]), 3.062051E-34f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_606(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), (1114636288 - 5f), 0f), 1.5f, -1, 0.25f, 1048581, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 12f, 3f, 6f, 0);
			TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[iParam1]);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, Local_720.f_173.f_68[iParam1]);
			*uParam2 = 3;
			break;
		case 1:
			func_658(iParam1);
			func_659(iParam1);
			func_660(iParam0);
			func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
			TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[iParam1]));
			TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[iParam1]), -1.458693E-38f);
			TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 8f, 3f, 6f, 0);
			TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[iParam1]);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, Local_720.f_173.f_68[iParam1]);
			*uParam2 = 3;
			break;
		case 3:
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			bVar2 = func_486(iVar0);
			if ((func_117() == 1 && func_248() <= 2) || ((!func_473(iParam0, iVar1, (1096286208 / 2f), 1, 1) && func_248() <= 2) && func_117() != 1))
			{
				bVar2 = true;
			}
			if ((((func_473(iParam0, iVar1, 1096286208 /* Float: 13.5f */, 1, 1) || func_577(iParam0, &(Local_720.f_118))) || func_499(iParam0, &(Local_720.f_118), 0)) && bVar2 == 0) || iParam3 == 1)
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				*uParam2 = 7;
			}
			else if (((ENTITY::IS_ENTITY_DEAD(iVar4) || func_236(64, 0)) || (bVar2 == 1 && ((func_473(iParam0, iVar1, 1096286208 /* Float: 13.5f */, 1, 1) || func_577(iParam0, &(Local_720.f_118))) || func_499(iParam0, &(Local_720.f_118), 0)))) && !func_473(iParam0, iVar4, 1106247680 /* Float: 30f */, 1, 1))
			{
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				*uParam2 = 5;
			}
			break;
		case 7:
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			bVar2 = func_486(iVar0);
			func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[iParam1]));
			TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[iParam1]), -9.423293E+09f);
			if (bVar2 == 0)
			{
				if (ENTITY::GET_ENTITY_MODEL(iParam0) == 3.82694E+34f || ENTITY::GET_ENTITY_MODEL(iParam0) == -3.459793E-18f)
				{
					TASK::TASK_COMBAT_ANIMAL_CHARGE_PED(0, iVar1, false, 0, 0, 0, 0);
				}
				else
				{
					TASK::TASK_COMBAT_PED(0, iVar1, 0, 0);
					TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
				}
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			}
			else
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_606(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), (1106247680 - 5f), 0f), 3f, -1, 0.25f, 1048581, 40000f);
				TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
				TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 8f, 3f, 6f, 0);
			}
			TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[iParam1]);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, Local_720.f_173.f_68[iParam1]);
			if (bVar2 == 0)
			{
				*uParam2 = 4;
			}
			else
			{
				*uParam2 = 6;
			}
			break;
		case 5:
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
			TASK::CLEAR_SEQUENCE_TASK(&(Local_720.f_173.f_68[iParam1]));
			TASK::_0x23767D80C7EED7C6(&(Local_720.f_173.f_68[iParam1]), 1.413444E+24f);
			TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, func_606(ENTITY::GET_ENTITY_COORDS(iVar4, false, false), (1106247680 - 5f), 0f), 3f, -1, 0.25f, 1048581, 40000f);
			TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
			TASK::TASK_WANDER_IN_AREA(0, ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 8f, 3f, 6f, 0);
			TASK::CLOSE_SEQUENCE_TASK(Local_720.f_173.f_68[iParam1]);
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
			{
				return;
			}
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, Local_720.f_173.f_68[iParam1]);
			*uParam2 = 6;
			break;
		case 6:
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			bVar2 = (func_486(iVar0) || func_661(iParam0));
			if ((((func_473(iParam0, iVar1, 1096286208 /* Float: 13.5f */, 1, 1) || func_577(iParam0, &(Local_720.f_118))) || func_499(iParam0, &(Local_720.f_118), 0)) && bVar2 == 0) || iParam3 == 1)
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				*uParam2 = 7;
			}
			else if (func_473(iParam0, iVar4, (1106247680 - 1092616192), 1, 1) || !func_389(iVar1, 0))
			{
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				*uParam2 = 1;
			}
			break;
		case 4:
			iVar0 = func_485(iParam1, 0, 1, 0);
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			bVar2 = func_486(iVar0);
			if (!func_473(iParam0, iVar1, 1103626240 /* Float: 25f */, 1, 1))
			{
				func_394(&(Local_13.f_24.f_37[iParam1 /*3*/]), 0);
			}
			else
			{
				func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
			}
			if ((((func_395(&(Local_13.f_24.f_37[iParam1 /*3*/]), 1085276160 /* Float: 5.5f */) || !func_389(iVar1, 0)) || !func_473(iParam0, iVar1, (1103626240 * 2f), 1, 1)) || func_661(iParam0)) || bVar2 == 1)
			{
				func_393(&(Local_13.f_24.f_37[iParam1 /*3*/]));
				if (bVar2 == 1 || func_661(iParam0))
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
					TASK::CLEAR_PED_TASKS(iParam0, true, false);
					*uParam2 = 5;
				}
				else
				{
					PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
					TASK::CLEAR_PED_TASKS(iParam0, true, false);
					*uParam2 = 1;
				}
			}
			break;
	}
}

void func_508(var uParam0)
{
	func_662(&(uParam0->f_24), uParam0->f_25, 0);
	func_428(uParam0->f_25);
}

bool func_509(int iParam0, bool bParam1, bool bParam2)
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

bool func_510(int iParam0)
{
	return func_131(8, iParam0);
}

int func_511(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_512(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_663(Param0, &vVar0))
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
	if (func_663(Param0, &vVar0))
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
	if (func_357(&Var1, iParam0))
	{
		iVar0 = ((func_664() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
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
	SCRIPTS::_TRIGGER_SCRIPT_EVENT_2(uParam0, 8, 10, Global_1051645.f_16[15]);
	func_665(uParam0, uParam0->f_1);
}

struct<2> func_518(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_519(bool bParam0, int iParam1, int iParam2)
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
		func_347(bParam0, iVar0);
		iVar0++;
	}
}

int func_520(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/].f_4;
}

float func_521(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/].f_5;
}

Vector3 func_522(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/].f_6;
}

bool func_523(var uParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
	if (!func_528(iParam1))
	{
		return false;
	}
	iVar0 = func_666(iParam1, vParam2, fParam5, bParam8, 1, bParam6, bParam7, bParam9);
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

void func_524(int iParam0, bool bParam1)
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

bool func_525(int iParam0)
{
	return func_174(iParam0, 32);
}

bool func_526(int iParam0)
{
	return func_174(iParam0, 64);
}

bool func_527(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

bool func_528(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	STREAMING::REQUEST_MODEL(iParam0, false);
	return STREAMING::HAS_MODEL_LOADED(iParam0);
}

var func_529(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/];
}

bool func_530(int iParam0)
{
	return func_229(Local_720.f_25.f_23, iParam0);
}

bool func_531(var uParam0, var uParam1)
{
	if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam1->f_16, false))
	{
		return true;
	}
	NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_9);
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_9))
	{
		return false;
	}
	ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam1->f_16, &(uParam1->f_14), func_529(uParam1->f_1), 0);
	func_667(uParam1->f_16);
	ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam1->f_16, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_6, 0f, 0f, Local_720.f_265.f_7[uParam1->f_1 /*11*/].f_5, 2);
	ANIMSCENE::START_ANIM_SCENE(uParam1->f_16);
	return true;
}

void func_532(var uParam0)
{
	func_668(uParam0, 0);
}

bool func_533(var uParam0, int iParam1)
{
	return func_229(uParam0->f_21, iParam1);
}

float func_534(var uParam0)
{
	return (BUILTIN::TO_FLOAT(func_669(uParam0)) * 981668463);
}

int func_535(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_670(iParam0));
}

bool func_536(int iParam0)
{
	return func_229(Local_720.f_25.f_22, iParam0);
}

void func_537(var uParam0, int iParam1)
{
	func_262(&(uParam0->f_10), iParam1);
}

var func_538(int iParam0, int iParam1)
{
	return func_671(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_539(var uParam0, var uParam1)
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

int func_540(int iParam0)
{
	return PLAYER::GET_PLAYER_PED(func_672(iParam0));
}

void func_541(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	*iParam0 = 0;
	iVar3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (iVar4 == 255)
		{
		}
		else if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
		}
		else if (Local_111[iVar0 /*19*/].f_2.f_1 == 0)
		{
		}
		else
		{
			*iParam0 = (*iParam0 + Local_111[iVar0 /*19*/].f_2);
			if (iVar1 == 0 || NETWORK::IS_TIME_MORE_THAN(Local_111[iVar0 /*19*/].f_2.f_1, iVar1))
			{
				iVar1 = Local_111[iVar0 /*19*/].f_2.f_1;
			}
			if (iVar2 == 0 || NETWORK::IS_TIME_LESS_THAN(Local_111[iVar0 /*19*/].f_2.f_1, iVar2))
			{
				iVar2 = Local_111[iVar0 /*19*/].f_2.f_1;
			}
		}
		iVar0++;
	}
	*iParam2 = 0;
	*iParam1 = 0;
	if (iVar1 != 0)
	{
		*iParam2 = ((NETWORK::GET_TIME_DIFFERENCE(iVar1, iVar3) / 1000) / 60);
	}
	if (iVar2 != 0)
	{
		*iParam1 = ((NETWORK::GET_TIME_DIFFERENCE(iVar2, iVar3) / 1000) / 60);
	}
}

float func_542(var uParam0)
{
	if (!func_444(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_673(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_564() - uParam0->f_1);
}

void func_543(var uParam0)
{
	func_627(8);
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (Local_13.f_18 == uParam0->f_1)
		{
		}
		else
		{
			Local_13.f_18 = uParam0->f_1;
		}
	}
	if (GANG::NETWORK_IS_IN_SAME_GANG(uParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_510(255))
	{
		if (!func_614())
		{
			func_615();
		}
		if (!func_328())
		{
			func_616();
		}
		if (!func_674())
		{
			func_675(1);
		}
	}
}

void func_544(var uParam0)
{
	if (GANG::NETWORK_IS_IN_SAME_GANG(uParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_510(255))
	{
		if (!func_614())
		{
			func_615();
		}
		if (!func_328())
		{
			func_616();
		}
		if (!func_676())
		{
			func_677(1);
		}
	}
}

void func_545(var uParam0)
{
	func_627(16);
	if (GANG::NETWORK_IS_IN_SAME_GANG(uParam0->f_1, PLAYER::GET_PLAYER_INDEX()) && func_510(255))
	{
		if (!func_614())
		{
			func_615();
		}
		if (!func_328())
		{
			func_616();
		}
		if (!func_674())
		{
			func_675(1);
		}
	}
}

void func_546(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		fParam1 = func_678(fParam1, 0f, 1f);
		iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, bParam2))));
		ENTITY::SET_ENTITY_HEALTH(iParam0, iVar0, 0);
	}
}

var func_547(int iParam0)
{
	return Local_720.f_265.f_7[iParam0 /*11*/].f_10;
}

void func_548(int iParam0, char* sParam1, bool bParam2)
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

void func_549(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = func_244(iParam0);
	if (iVar0 != 0)
	{
		func_660(iVar1);
		Local_13.f_24.f_19[iVar0] = 5;
		func_224(iVar0, 8);
		Local_13.f_24.f_28[iVar0] = 1;
	}
}

void func_550(int iParam0)
{
	AUDIO::PREPARE_SOUNDSET(func_679(iParam0), false);
}

bool func_551()
{
	return Global_1156096.f_21645[54 /*209*/].f_208;
}

int func_552(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	switch (iParam0)
	{
		case 0:
			fVar0 = 1130758144; /* Float: 230f */
			break;
		case 1:
			fVar0 = 1132920832; /* Float: 270f */
			break;
		case 2:
			fVar0 = 1116471296; /* Float: 70f */
			break;
		case 3:
			fVar0 = 1130102784; /* Float: 220f */
			break;
		case 4:
			fVar0 = 1128792064; /* Float: 200f */
			break;
		case 5:
			fVar0 = 1121714176; /* Float: 110f */
			break;
		case 6:
			fVar0 = 1128792064; /* Float: 200f */
			break;
		case 7:
			fVar0 = 1128792064; /* Float: 200f */
			break;
		case 8:
			fVar0 = 1118437376; /* Float: 85f */
			break;
		case 13:
			fVar0 = 1121714176; /* Float: 110f */
			break;
		case 9:
			fVar0 = 1118437376; /* Float: 85f */
			break;
		case 10:
			fVar0 = 1130102784; /* Float: 220f */
			break;
		case 11:
			fVar0 = 1121714176; /* Float: 110f */
			break;
		case 12:
			fVar0 = 1124204544; /* Float: 130f */
			break;
	}
	fVar1 = 1f;
	switch (iParam1)
	{
		case 0:
			fVar1 = Global_1901671.f_875.f_5;
			break;
		case 1:
			fVar1 = Global_1901671.f_875.f_6;
			break;
		case 2:
			fVar1 = Global_1901671.f_875.f_7;
			break;
	}
	fVar0 = (fVar0 * fVar1);
	return BUILTIN::ROUND(fVar0);
}

void func_553(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_554(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

void func_555(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	MISC::_CLEAR_VOLUME_AREA(iParam0, iVar0);
}

int func_556(int iParam0)
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

struct<2> func_557(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_558(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_564() - fParam1);
	func_680(uParam0, 1);
	func_681(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_559(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_560(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0[8];
	float fVar25[8];
	struct<19> Var34;

	vVar0[0 /*3*/] = { func_503(0) };
	vVar0[1 /*3*/] = { func_503(1) };
	vVar0[2 /*3*/] = { func_503(2) };
	vVar0[3 /*3*/] = { func_503(3) };
	vVar0[4 /*3*/] = { func_503(4) };
	vVar0[5 /*3*/] = { func_503(5) };
	vVar0[6 /*3*/] = { func_503(6) };
	vVar0[7 /*3*/] = { func_503(7) };
	if (iParam4 != -1)
	{
		vVar0[iParam4 /*3*/] = { 0f, 0f, 0f };
	}
	fVar25[0] = 0f;
	fVar25[1] = 0f;
	fVar25[2] = 0f;
	fVar25[3] = 0f;
	fVar25[4] = 0f;
	fVar25[5] = 0f;
	fVar25[6] = 0f;
	fVar25[7] = 0f;
	Var34.f_6 = 5f;
	Var34.f_7 = 30f;
	Var34.f_8 = 2f;
	Var34.f_9 = 50f;
	Var34.f_10 = 100f;
	Var34.f_11 = -4;
	Var34.f_12 = 4;
	Var34.f_13 = 4;
	Var34.f_14 = 4;
	Var34.f_15 = 5;
	Var34.f_16 = 5;
	Var34.f_17 = -2;
	Var34.f_18 = -1;
	Var34.f_9 = 1133903872; /* Float: 300f */
	Var34 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	func_682(&Var34);
	func_683(&Var34, 2);
	func_683(&Var34, 4);
	if (func_684(&Var34, &vVar0))
	{
		*uParam0 = { vVar0[Var34.f_18 /*3*/] };
		*uParam1 = fVar25[Var34.f_18];
		*uParam2 = Var34.f_18;
		return true;
	}
	return false;
}

float func_561(vector3 vParam0, vector3 vParam3)
{
	return (((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y)) + (vParam0.z * vParam3.z));
}

bool func_562(var uParam0, float fParam1, float fParam2, int iParam3)
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

bool func_563(var uParam0, float fParam1, float fParam2, int iParam3)
{
	if (func_562(uParam0, fParam1, fParam2, iParam3))
	{
		if (uParam0->f_8 == 0f)
		{
			uParam0->f_8 = (func_564() - 1017370378);
		}
		return true;
	}
	uParam0->f_8 = 0f;
	return false;
}

float func_564()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_565(int iParam0)
{
	return func_685(iParam0);
}

bool func_566(int iParam0)
{
	var uVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_720.f_265.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_720.f_265.f_7[iParam0 /*11*/]))
		{
			uVar0 = Local_720.f_265.f_7[iParam0 /*11*/];
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&uVar0);
			return true;
		}
	}
	return false;
}

void func_567(var uParam0, var uParam1)
{
	switch (uParam0->f_4)
	{
		case 1:
			func_686(uParam0, uParam1);
			break;
		case 2:
			func_687(uParam0, uParam1);
			break;
	}
}

float func_568(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_569()
{
	return false;
}

void func_570(int iParam0)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(962794.9f, iParam0);
}

void func_571(int iParam0)
{
	if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("rdro_boost_animal_scene"))
	{
		AUDIO::START_AUDIO_SCENE("rdro_boost_animal_scene");
	}
	if (AUDIO::_GET_ENTITY_AUDIO_MIX_GROUP(iParam0) != 2.034149E-35f)
	{
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iParam0, "rdro_target_animal_group", 0f);
	}
}

void func_572(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;

	Var0 = 198;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	if (iParam0 == 2)
	{
		if (iParam1 == 0 || !ENTITY::DOES_ENTITY_EXIST(iParam1))
		{
			return;
		}
		if (((!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iParam1, false) || !NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(iParam1)) || !NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam1)) || !NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(NETWORK::PED_TO_NET(iParam1)))
		{
			return;
		}
		Var0.f_5 = NETWORK::PED_TO_NET(iParam1);
	}
	uVar6 = func_538(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 42, &uVar6);
}

void func_573(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_574()
{
	return func_580(2, -1);
}

bool func_575(int iParam0, float fParam1, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_244(iParam0);
	if ((MISC::GET_FRAME_COUNT() % iParam5) != iParam6)
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!func_473(Global_33, iVar0, fParam3, 1, 1))
	{
		return false;
	}
	if (func_617(iVar0))
	{
		return false;
	}
	if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar0))
	{
		PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
		return false;
	}
	if (bParam7)
	{
		if (func_688(PLAYER::PLAYER_ID(), iVar0) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iVar0))
		{
			return true;
		}
	}
	bVar1 = false;
	if (func_473(Global_33, iVar0, fParam1, 1, 1))
	{
		bVar1 = true;
	}
	else if (func_473(Global_33, iVar0, fParam2, 1, 1) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	else if ((func_473(Global_33, iVar0, fParam3, 1, 1) && func_689()) && PED::IS_TRACKED_PED_VISIBLE(iVar0))
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		if (!func_444(&(Local_720.f_53.f_3[iParam0 /*3*/])))
		{
			func_394(&(Local_720.f_53.f_3[iParam0 /*3*/]), 0);
		}
		else if (func_542(&(Local_720.f_53.f_3[iParam0 /*3*/])) > fParam4)
		{
			return true;
		}
	}
	else if (func_444(&(Local_720.f_53.f_3[iParam0 /*3*/])))
	{
		func_393(&(Local_720.f_53.f_3[iParam0 /*3*/]));
	}
	return false;
}

void func_576()
{
	func_590(2);
}

bool func_577(int iParam0, var uParam1)
{
	float fVar0;

	fVar0 = 5f;
	if (func_685(iParam0))
	{
		fVar0 = func_690(iParam0);
	}
	if (func_473(Global_33, iParam0, fVar0, 1, 1))
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (!func_444(&(uParam1->f_35)))
	{
		if (PED::_0xD55DB4466D00A258(iParam0))
		{
			func_394(&(uParam1->f_35), 0);
		}
	}
	else if (func_542(&(uParam1->f_35)) > 1075838976)
	{
		uParam1->f_32 = 262144;
		return true;
	}
	if (func_691(iParam0, uParam1, &(uParam1->f_32), 0))
	{
		return true;
	}
	return false;
}

void func_578()
{
	Local_720.f_25.f_20 = PLAYER::PLAYER_ID();
	func_590(4);
}

void func_579(var uParam0, var uParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	int iVar5;

	iVar0 = func_529(uParam1->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (PED::GET_PED_CONFIG_FLAG(iVar0, 580, true))
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if ((uParam1->f_20 == 255 || func_692(uParam0, 1)) || bParam2)
	{
		iVar1 = func_535(iVar0);
		if (!func_473(iVar1, iVar0, 1120403456 /* Float: 100f */, 1, 1))
		{
			bVar2 = true;
		}
	}
	else
	{
		iVar1 = PLAYER::GET_PLAYER_PED(uParam1->f_20);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
		bVar3 = true;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(iVar0))
	{
		if (uParam0->f_1 == 0)
		{
			PED::SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3);
		}
		else
		{
			PED::SET_PED_SHOULD_PLAY_QUICK_SCENARIO_EXIT(iVar0, ENTITY::GET_ENTITY_COORDS(iVar1, true, false), 3, true);
		}
	}
	if (bVar2)
	{
		if ((!PED::IS_PED_FLEEING(iVar0) || !func_594(iVar0, 2.40763E-20f)) || bParam3)
		{
			if (func_533(uParam1, 16))
			{
				iVar4 = (iVar4 || 1.504633E-36f);
			}
			if (bVar3)
			{
				TASK::TASK_FLEE_COORD(iVar0, ENTITY::GET_ENTITY_COORDS(iVar0, true, false), 0, iVar4, 500f, -1, 0);
			}
			else
			{
				TASK::TASK_FLEE_PED(iVar0, iVar1, 3, iVar4, -1f, -1, 0);
			}
			func_590(8);
		}
		return;
	}
	switch (uParam0->f_1)
	{
		case 1:
			if ((!PED::IS_PED_IN_COMBAT(iVar0, 0) || !func_594(iVar0, 6.077861E-11f)) || bParam3)
			{
				TASK::TASK_COMBAT_PED(iVar0, iVar1, 0, 0);
				func_590(8);
			}
			break;
		case 0:
			if ((!PED::IS_PED_FLEEING(iVar0) || !func_594(iVar0, 2.40763E-20f)) || bParam3)
			{
				if (func_533(uParam1, 16))
				{
					iVar5 = (iVar5 || 1.504633E-36f);
				}
				TASK::TASK_FLEE_PED(iVar0, iVar1, 3, iVar5, 400f, -1, 0);
				func_590(8);
			}
			break;
		default:
			break;
	}
}

bool func_580(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_509(iParam1, 0, 1))
	{
		return false;
	}
	return func_229(Local_111[iParam1 /*19*/].f_5, iParam0);
}

bool func_581(var uParam0, int iParam1)
{
	switch (uParam0->f_1)
	{
		case 1:
			return (func_594(iParam1, 6.077861E-11f) || PED::IS_PED_IN_COMBAT(iParam1, 0));
		case 0:
			return (func_594(iParam1, 2.40763E-20f) || PED::IS_PED_FLEEING(iParam1));
	}
	return false;
}

void func_582(var uParam0)
{
}

void func_583(var uParam0, var uParam1)
{
}

void func_584(var uParam0)
{
	if (func_472(uParam0, 1))
	{
		return;
	}
	func_616();
	func_437(uParam0, 1);
}

void func_585(var uParam0)
{
	if (func_472(uParam0, 2))
	{
		return;
	}
	func_600(1);
	func_437(uParam0, 2);
}

void func_586(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_510(255))
	{
		return;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar0 = Local_720.f_265.f_7[iVar2 /*11*/];
		if (((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					if (func_581(uParam0, iVar0))
					{
						iVar1 = 1;
					}
					else
					{
						iVar1 = 0;
					}
					break;
				case 0:
					iVar1 = 0;
					break;
			}
			if (iVar1 == 1 && func_473(iVar0, Global_33, uParam2->f_34, 1, 1))
			{
				if (!MAP::_DOES_ENTITY_HAVE_BLIP(iVar0) && ENTITY::IS_ENTITY_VISIBLE(iVar0))
				{
					MAP::BLIP_ADD_FOR_ENTITY(4.085619E-09f, iVar0);
				}
			}
			else if (!func_473(iVar0, Global_33, uParam2->f_38, 1, 1) || iVar1 == 0)
			{
				if (MAP::_DOES_ENTITY_HAVE_BLIP(iVar0))
				{
					func_693(iVar0);
				}
			}
		}
		iVar2++;
	}
}

void func_587(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = 0;
	while (iVar2 <= 7)
	{
		iVar0 = Local_720.f_265.f_7[iVar2 /*11*/];
		if ((((((iVar2 != uParam1->f_1 && iVar2 != uParam1->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && !func_581(uParam0, iVar0))
		{
			switch (uParam0->f_1)
			{
				case 1:
					TASK::TASK_COMBAT_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 0, 0);
					break;
				case 0:
					iVar1 = 0;
					if (func_533(uParam1, 16))
					{
						iVar1 = (iVar1 || 1.504633E-36f);
					}
					TASK::TASK_FLEE_PED(iVar0, PLAYER::GET_PLAYER_PED(uParam1->f_20), 3, iVar1, -1f, -1, 0);
					break;
			}
		}
		iVar2++;
	}
}

void func_588(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 7)
	{
		iVar0 = Local_720.f_265.f_7[iVar1 /*11*/];
		if ((((((iVar1 != uParam0->f_1 && iVar1 != uParam0->f_2) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0)) && !ENTITY::IS_ENTITY_DEAD(iVar0)) && !PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) && PED::_GET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0))
		{
			TASK::TASK_WANDER_IN_AREA(iVar0, Local_720.f_265.f_7[uParam0->f_1 /*11*/].f_6, uParam0->f_27, 3f, 6f, 0);
			PED::SET_PED_KEEP_TASK(iVar0, true);
			if (Local_13.f_7.f_1 == 1)
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 1f);
			}
			else
			{
				FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iVar0, 74, 0f);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, false);
		}
		iVar1++;
	}
}

void func_589(int iParam0)
{
	MISC::SET_BIT(&(Local_720.f_53.f_62), iParam0);
}

void func_590(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_5), iParam0);
}

bool func_591(var uParam0)
{
	return false;
}

void func_592(var uParam0)
{
}

void func_593()
{
}

bool func_594(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_595(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_263(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_5), iParam0);
}

bool func_596(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = NETWORK::PARTICIPANT_ID_TO_INT();
	}
	if (!func_509(iParam1, 0, 1))
	{
		return false;
	}
	return func_229(Local_111[iParam1 /*19*/].f_1, iParam0);
}

bool func_597(int iParam0)
{
	return func_229(Local_720.f_53.f_64, iParam0);
}

void func_598(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_263(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_1), iParam0);
}

int func_599(int iParam0, int iParam1, var uParam2, var uParam3)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;
	float fVar10;

	if (!func_473(iParam0, iParam1, 1112014848 /* Float: 50f */, 1, 1))
	{
		return 2;
	}
	if (!func_444(uParam2))
	{
		func_443(uParam2);
		*uParam3 = 0;
		return 2;
	}
	else if (func_542(uParam2) > 4f)
	{
		if (*uParam3 == 0)
		{
			vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			vVar3 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
			*uParam3 = PATHFIND::NAVMESH_REQUEST_PATH(iParam0, vVar0, vVar3, 29);
			if (*uParam3 == -1)
			{
				func_443(uParam2);
				*uParam3 = 0;
				return 2;
			}
		}
		if (PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(*uParam3) == 1)
		{
			func_443(uParam2);
			if (PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_FOUND(*uParam3))
			{
				vVar6 = { PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINT_BY_INDEX(*uParam3, (PATHFIND::_NAVMESH_REQUESTED_PATH_NUM_WAYPOINTS(*uParam3) - 1)) };
				fVar9 = FLOCK::GET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 164);
				fVar10 = (Global_34.f_2 - 1f);
				if ((vVar6.z + fVar9) < fVar10)
				{
					PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(*uParam3);
					*uParam3 = 0;
					return 1;
				}
				else
				{
					PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(*uParam3);
					*uParam3 = 0;
					return 0;
				}
			}
			else
			{
				PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(*uParam3);
				*uParam3 = 0;
				return 1;
			}
		}
	}
	return 2;
}

void func_600(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_1), iParam0);
}

void func_601()
{
	if (func_472(&(Local_720.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_53))
	{
		return;
	}
	func_694(Local_720.f_53);
	func_437(&(Local_720.f_53), 256);
}

void func_602()
{
	if (!func_472(&(Local_720.f_53), 256))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_53))
	{
		func_695(&(Local_720.f_53), 256);
		return;
	}
	func_696(Local_720.f_53);
	func_695(&(Local_720.f_53), 256);
}

bool func_603()
{
	return func_597(1);
}

bool func_604(var uParam0)
{
	return AUDIO::PREPARE_SOUNDSET(&(uParam0->f_43), false);
}

void func_605(var uParam0, int iParam1)
{
	if (uParam0->f_56 == iParam1)
	{
		return;
	}
	uParam0->f_56 = iParam1;
}

Vector3 func_606(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	int iVar5;

	fVar3 = (fParam3 * fParam3);
	iVar5 = 0;
	while (iVar5 < 10)
	{
		vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), MISC::GET_RANDOM_FLOAT_IN_RANGE(-fParam3, fParam3), 0f };
		if (((vVar0.x * vVar0.x) + (vVar0.y * vVar0.y)) <= fVar3)
		{
			fVar4 = (fParam4 / 2f);
			vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar4, fVar4);
			return vParam0 + vVar0;
		}
		iVar5++;
	}
	return func_697(vParam0, fParam3, fParam4);
}

void func_607(vector3 vParam0, int iParam3)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::TRIGGER_SONAR_BLIP(iParam3, vParam0);
}

void func_608()
{
}

void func_609(var uParam0, vector3 vParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_43)))
	{
		return;
	}
	AUDIO::_PLAY_SOUND_FROM_POSITION("CALL", vParam1, &(uParam0->f_43), false, 0, true, 0);
}

int func_610(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar2 = iParam0;
	while (iVar2 <= iParam1)
	{
		iVar1 = func_698(iVar2);
		if (iVar1 >= 0)
		{
			iVar0 = (iVar0 + iVar1);
		}
		iVar2++;
	}
	return iVar0;
}

bool func_611(var uParam0)
{
	return func_559(*uParam0, 1);
}

void func_612(int iParam0, var uParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!func_611(uParam1))
		{
			if (bParam2)
			{
				func_699(uParam1, 0);
			}
		}
		else
		{
			uParam1->f_3 = (func_534(uParam1) * Global_1901671.f_875.f_8);
			if (uParam1->f_3 > 1f)
			{
				uParam1->f_3 = 1f;
			}
		}
	}
	if ((((!ENTITY::IS_ENTITY_DEAD(iParam0) && func_611(uParam1)) && !PED::GET_PED_CONFIG_FLAG(iParam0, 580, true)) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0)) && (MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (!PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 5))
		{
			PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 5, true);
		}
		PED::_SET_PED_MOTIVATION(iParam0, 5, uParam1->f_3, 0);
	}
}

bool func_613(var uParam0)
{
	return func_472(uParam0, 2);
}

bool func_614()
{
	return func_67(2);
}

void func_615()
{
	int iVar0;

	if (!func_131(32, 255))
	{
		func_700(Local_720.f_1, Local_720.f_3);
		if (!func_131(1024, 255))
		{
			func_701(Local_720.f_1);
			func_148(1024);
		}
		iVar0 = func_337(Local_720.f_1, Local_720.f_2);
		func_702(iVar0);
		func_703(iVar0);
		func_146(2);
		func_704(Local_720.f_9);
		func_705(Local_720.f_1);
		func_706(Local_720.f_1, Local_720.f_2, Local_720.f_3);
		if (func_707(Local_720.f_1))
		{
			func_708(0, 3.031687E-09f);
			func_146(1024);
		}
		func_148(32);
	}
}

void func_616()
{
	if (!func_67(2))
	{
		return;
	}
	func_146(8);
}

bool func_617(int iParam0)
{
	return !ENTITY::IS_ENTITY_VISIBLE(iParam0);
}

bool func_618(var uParam0)
{
	return func_502(Global_33, uParam0->f_51, uParam0->f_33, 1, !func_709(uParam0));
}

float func_619()
{
	return -8.697026E+34f;
}

void func_620(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!MAP::DOES_BLIP_EXIST(*uParam1))
	{
		*uParam1 = MAP::BLIP_ADD_FOR_ENTITY(func_710(), iParam0);
		MAP::SET_BLIP_SPRITE(*uParam1, -5.930169E-21f, false);
		MAP::BLIP_ADD_MODIFIER(*uParam1, -7.217311E+19f);
		if (bParam2)
		{
			MAP::BLIP_ADD_MODIFIER(*uParam1, -9.758836E-14f);
		}
		if (bParam3)
		{
			MAP::BLIP_ADD_MODIFIER(*uParam1, -3.062494E-21f);
		}
		MAP::BLIP_ADD_MODIFIER(*uParam1, 1.548688E-08f);
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam1, func_711(func_408(ENTITY::GET_ENTITY_MODEL(iParam0))));
	}
}

void func_621(var uParam0, float fParam1, bool bParam2)
{
	if (bParam2 || !func_444(uParam0))
	{
		func_558(uParam0, fParam1);
	}
}

void func_622(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::BLIP_REMOVE_MODIFIER(*uParam0, -1.115229E-27f);
		MAP::BLIP_ADD_MODIFIER(*uParam0, 7.771716E-32f);
	}
}

void func_623(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::BLIP_REMOVE_MODIFIER(*uParam0, 7.771716E-32f);
		MAP::BLIP_ADD_MODIFIER(*uParam0, -1.115229E-27f);
	}
}

void func_624(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(*uParam0))
	{
		MAP::BLIP_REMOVE_MODIFIER(*uParam0, 7.771716E-32f);
	}
}

void func_625(int iParam0, int iParam1)
{
	MAP::ALLOW_SONAR_BLIPS(true);
	MAP::FORCE_SONAR_BLIPS_THIS_FRAME();
	MAP::_TRIGGER_SONAR_BLIP_ON_ENTITY(iParam1, iParam0);
}

void func_626()
{
	struct<15> Var0;

	Var0 = { func_712(-520457.2f) };
	func_713(&Var0);
}

void func_627(int iParam0)
{
	func_262(&(Local_720.f_163), iParam0);
}

void func_628()
{
	struct<15> Var0;

	Var0 = { func_712(1.294908E+38f) };
	func_713(&Var0);
}

void func_629(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_262(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_4), iParam0);
}

int func_630(int iParam0)
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
	if (PED::_0x4642182A298187D0(iParam0, -1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 2, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 4, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 5, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 10, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x4642182A298187D0(iParam0, 1, &uVar0, 4, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_631()
{
	struct<15> Var0;

	Var0 = { func_712(-3.316727E-15f) };
	func_713(&Var0);
}

bool func_632(int iParam0)
{
	return func_229(Local_720.f_163.f_2, iParam0);
}

bool func_633(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_720.f_265.f_7[iParam0 /*11*/]))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Local_720.f_265.f_7[iParam0 /*11*/]))
		{
			PED::DELETE_PED(&(Local_720.f_265.f_7[iParam0 /*11*/]));
			Local_720.f_265.f_7[iParam0 /*11*/] = 0;
			return true;
		}
	}
	return false;
}

void func_634(int iParam0)
{
	if (!func_509(NETWORK::PARTICIPANT_ID_TO_INT(), 0, 1))
	{
		return;
	}
	func_263(&(Local_111[NETWORK::PARTICIPANT_ID_TO_INT() /*19*/].f_4), iParam0);
}

bool func_635(int iParam0, var uParam1, var uParam2, bool bParam3)
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

float func_636(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_637(int iParam0, int iParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_638(iParam0, iParam1);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return 0;
	}
	iVar1 = MISC::GET_HASH_KEY(sVar0);
	return iVar1;
}

char* func_638(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ALLIGATOR_02";
					break;
				case 2:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BEAVER_02";
					break;
				case 2:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BISON_02";
					break;
				case 2:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BOAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BUCK_02";
					break;
				case 2:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COUGAR_02";
					break;
				case 2:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_PANTHER_02";
					break;
				case 2:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_COYOTE_02";
					break;
				case 2:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_FOX_02";
					break;
				case 2:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_02";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_MOOSE_01";
					break;
				case 2:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_BIG_HORN_02";
					break;
				case 2:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_WOLF_02";
					break;
				case 2:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_01";
					break;
				case 1:
					sVar0 = "DISCOVERED_AT_LEGEND_ELK_02";
					break;
				case 2:
					break;
			}
			break;
	}
	return sVar0;
}

bool func_639(int iParam0)
{
	return MAP::DOES_BLIP_EXIST(Local_720.f_265.f_7[iParam0 /*11*/].f_1);
}

float func_640(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_641(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4)
{
	int iVar0;

	func_172(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_265.f_7[iParam0 /*11*/]))
	{
		return;
	}
	iVar0 = MAP::BLIP_ADD_FOR_ENTITY(iParam1, Local_720.f_265.f_7[iParam0 /*11*/]);
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
	Local_720.f_265.f_7[iParam0 /*11*/].f_1 = iVar0;
}

int func_642(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_643()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	return false;
}

bool func_644(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(Local_720.f_19.f_1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		if (MISC::IS_BIT_SET(Local_720.f_19, iVar0))
		{
			if (ENTITY::DOES_ENTITY_EXIST((*iParam0)[iVar0]))
			{
				if (func_714(Local_720.f_19.f_1, (*iParam0)[iVar0]))
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_645()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(PLAYER::PLAYER_ID());
	if (iVar0 == 255 || !NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		return false;
	}
	if (Local_111[iVar1 /*19*/].f_2.f_1 != 0)
	{
	}
	Local_111[iVar1 /*19*/].f_2.f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return true;
}

bool func_646(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (iParam1 != -1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam1 /*36*/].f_5))
		{
			return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1887363[iParam1 /*36*/].f_5, true, 0);
		}
		else
		{
			return false;
		}
	}
	iVar1 = 0;
	while (iVar1 < Global_1893611.f_161)
	{
		iVar0 = Global_1893611.f_10[iVar1];
		if (!VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_5))
		{
		}
		else if (ENTITY::IS_ENTITY_IN_VOLUME(iParam0, Global_1887363[iVar0 /*36*/].f_5, true, 0))
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

void func_647(int iParam0, bool bParam1, bool bParam2)
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

bool func_648(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_649(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = func_485(iParam0, fParam1, bParam2, bParam3);
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar0);
	}
	return 255;
}

var func_650(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

bool func_651(int iParam0, int iParam1, int iParam2, float fParam3, float fParam4)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_715(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), iParam1, iParam2, fParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

bool func_652(int iParam0, int iParam1, var uParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam2->f_6)
	{
		func_716(uParam2, 1, iVar0);
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
			if (func_717(iParam0, uParam2))
			{
				*uParam3 = 128;
				func_718(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_21)
		{
			if (!uParam2->f_2 & 8 != 0)
			{
				if (func_719(iParam0, uParam2))
				{
					*uParam3 = 8;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
				else if (func_720(iParam0, iParam1, uParam2))
				{
					*uParam3 = 8;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 32 != 0)
			{
				if (func_721(iParam0, uParam2))
				{
					*uParam3 = 64;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_20 && func_722(PLAYER::PLAYER_ID(), 0, 1, uParam2->f_2 & 524288 == 0))
		{
			if (!uParam2->f_2 & 16384 != 0)
			{
				*uParam3 = 16384;
				func_718(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_723(uParam2, 1f))
			{
				if (!uParam2->f_2 & 4 != 0)
				{
					if (func_724(Global_33, iParam0, uParam2))
					{
						*uParam3 = 4;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
				if (!uParam2->f_2 & 256 != 0)
				{
					if (func_725(Global_33, iParam0, uParam2))
					{
						*uParam3 = 256;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 16 != 0)
		{
			if ((uParam2->f_6 - Global_1940186.f_23) < 300)
			{
				if (func_726(Global_33, iParam0, uParam2, 0))
				{
					*uParam3 = 16;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (func_726(Global_33, iParam0, uParam2, 1))
			{
				*uParam3 = 16;
				func_718(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (Global_1940186.f_33 > 0)
		{
			if (*uParam2 & 8 != 0)
			{
				if (func_727(iParam0, uParam2))
				{
					*uParam3 = 32;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (*uParam2 & 262144 != 0)
		{
			if (Global_1940186.f_19 || uParam2->f_13 < 1101004800)
			{
				if (func_728(&iParam0, uParam2))
				{
					*uParam3 = 4096;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (Global_1940186.f_24 || Global_1940186.f_25)
		{
			if (!uParam2->f_2 & 2 != 0)
			{
				if (func_729(uParam2, 4000))
				{
					if ((func_730(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 0, *uParam2 & 256 != 0) && func_731(uParam2, iParam0)) && func_732(uParam2, iParam0))
					{
						*uParam3 = 2;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 2 != 0)
		{
			if (uParam2->f_13 < 4f)
			{
				if ((func_730(iParam0, Global_1940186.f_35, *uParam2 & 128 != 0, 1, *uParam2 & 256 != 0) && func_731(uParam2, iParam0)) && func_732(uParam2, iParam0))
				{
					*uParam3 = 2;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			else if (Global_1940186.f_34 == 0)
			{
				if (Global_1940186.f_35 != 0)
				{
					if (func_733(iParam0, Global_1940186.f_35))
					{
						func_734();
						*uParam3 = 2;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (uParam2->f_13 < 1092616192)
			{
				if (func_735(uParam2, iParam0) || (uParam2->f_10 > 0 && (func_736() - uParam2->f_10) < 2000))
				{
					if (PED::IS_PED_RAGDOLL(iParam0))
					{
						func_734();
						*uParam3 = 2;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_737())
				{
					if (func_733(iParam0, Global_1940186.f_36))
					{
						func_734();
						*uParam3 = 2;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (!uParam2->f_2 & 1024 != 0)
		{
			if (func_738(uParam2, iParam0))
			{
				*uParam3 = 1024;
				func_718(iParam0, uParam2, *uParam3);
				return true;
			}
		}
		if (func_739(uParam2, iParam0))
		{
			*uParam3 = 1048576;
			func_718(iParam0, uParam2, *uParam3);
			return true;
		}
		if (uParam2->f_13 < uParam2->f_29)
		{
			if (!uParam2->f_2 & 2048 != 0)
			{
				if (func_740(iParam0, iParam1, uParam2))
				{
					*uParam3 = 2048;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
			if (*uParam2 & 16 != 0)
			{
				if (uParam2->f_7 == 2)
				{
					if (func_741(iParam0, uParam2))
					{
						*uParam3 = 8192;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
			if (*uParam2 & 64 != 0)
			{
				if (func_742(iParam0, uParam2))
				{
					*uParam3 = 32768;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
		if (uParam2->f_13 < 1094713344)
		{
			if (*uParam2 & 1048576 != 0)
			{
				if (func_743(uParam2, 4000))
				{
					if (func_744(&iParam0, uParam2))
					{
						*uParam3 = 512;
						func_718(iParam0, uParam2, *uParam3);
						return true;
					}
				}
			}
		}
		if (uParam2->f_13 < uParam2->f_21)
		{
			if (*uParam2 & 1024 != 0)
			{
				if (func_745(iParam0, uParam2))
				{
					*uParam3 = 65536;
					uParam2->f_5 = 0;
					func_718(iParam0, uParam2, *uParam3);
					return true;
				}
			}
		}
	}
	else if (!uParam2->f_2 & 1 != 0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			if (func_746(uParam2, iParam0))
			{
				*uParam3 = 1;
				func_718(iParam0, uParam2, *uParam3);
				return true;
			}
		}
	}
	return false;
}

bool func_653(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0[2];
	float fVar7[2];
	struct<19> Var10;

	vVar0[0 /*3*/] = { func_223(0) };
	vVar0[1 /*3*/] = { func_223(1) };
	if (iParam4 != -1)
	{
		vVar0[iParam4 /*3*/] = { 0f, 0f, 0f };
	}
	fVar7[0] = 0f;
	fVar7[1] = 0f;
	Var10.f_6 = 5f;
	Var10.f_7 = 30f;
	Var10.f_8 = 2f;
	Var10.f_9 = 50f;
	Var10.f_10 = 100f;
	Var10.f_11 = -4;
	Var10.f_12 = 4;
	Var10.f_13 = 4;
	Var10.f_14 = 4;
	Var10.f_15 = 5;
	Var10.f_16 = 5;
	Var10.f_17 = -2;
	Var10.f_18 = -1;
	Var10.f_9 = 1133903872; /* Float: 300f */
	Var10 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	func_682(&Var10);
	func_683(&Var10, 2);
	if (func_684(&Var10, &vVar0))
	{
		*uParam0 = { vVar0[Var10.f_18 /*3*/] };
		*uParam1 = fVar7[Var10.f_18];
		*uParam2 = Var10.f_18;
		return true;
	}
	return false;
}

bool func_654(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	vector3 vVar0[2];
	float fVar7[2];
	struct<19> Var10;

	vVar0[0 /*3*/] = { func_503(0) };
	vVar0[1 /*3*/] = { func_503(1) };
	if (iParam4 != -1)
	{
		vVar0[iParam4 /*3*/] = { 0f, 0f, 0f };
	}
	fVar7[0] = 0f;
	fVar7[1] = 0f;
	Var10.f_6 = 5f;
	Var10.f_7 = 30f;
	Var10.f_8 = 2f;
	Var10.f_9 = 50f;
	Var10.f_10 = 100f;
	Var10.f_11 = -4;
	Var10.f_12 = 4;
	Var10.f_13 = 4;
	Var10.f_14 = 4;
	Var10.f_15 = 5;
	Var10.f_16 = 5;
	Var10.f_17 = -2;
	Var10.f_18 = -1;
	Var10.f_9 = 1133903872; /* Float: 300f */
	Var10 = { ENTITY::GET_ENTITY_COORDS(iParam3, true, false) };
	func_682(&Var10);
	func_683(&Var10, 2);
	if (func_684(&Var10, &vVar0))
	{
		*uParam0 = { vVar0[Var10.f_18 /*3*/] };
		*uParam1 = fVar7[Var10.f_18];
		*uParam2 = Var10.f_18;
		return true;
	}
	return false;
}

bool func_655(int iParam0)
{
	return func_229(Local_720.f_118.f_34, iParam0);
}

void func_656(int iParam0)
{
	func_262(&(Local_720.f_118.f_34), iParam0);
}

bool func_657(vector3 vParam0, float fParam3, float fParam4)
{
	int iVar0;
	int iVar1;

	if (func_502(Global_33, vParam0, fParam4, 1, 1) && CAM::IS_SPHERE_VISIBLE(vParam0, fParam3))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
	{
		iVar1 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar1) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(NETWORK::NETWORK_GET_PLAYER_INDEX(iVar1), vParam0, fParam3, fParam4))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_658(int iParam0)
{
	func_224(iParam0, 4);
}

void func_659(int iParam0)
{
	int iVar0;

	iVar0 = func_244(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		PED::SET_PED_CONFIG_FLAG(iVar0, 402, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 542, true);
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iVar0, 1);
		func_747(iVar0);
	}
	func_224(iParam0, 256);
	func_224(iParam0, 16);
	if (!PLAYER::_IS_EAGLE_EYE_REGISTERED_FOR_ENTITY(PLAYER::PLAYER_ID(), iVar0))
	{
		PLAYER::_REGISTER_EAGLE_EYE_FOR_ENTITY(PLAYER::PLAYER_ID(), iVar0, true);
	}
}

void func_660(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 5, true);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 18, false);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 4, true);
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 93, true);
			FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(iParam0, 74, 1f);
		}
	}
}

bool func_661(int iParam0)
{
	int iVar0;

	if (func_646(iParam0, -1) && !func_646(iParam0, 3))
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < Local_720.f_173.f_77)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Local_720.f_173.f_77[iVar0]))
		{
		}
		else if (func_470(iParam0, Local_720.f_173.f_77[iVar0], 1, 0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_662(var uParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	PED::CLEAR_PED_NON_CREATION_AREA();
	POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(iParam1);
	POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(iParam1);
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(*uParam0))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(*uParam0, bParam2);
	}
}

bool func_663(struct<2> Param0, bool bParam2)
{
	if (!func_38(Param0))
	{
		return false;
	}
	func_748(bParam2);
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

int func_664()
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

void func_665(var uParam0, var uParam1)
{
}

int func_666(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, !bParam9);
	if (bParam5)
	{
		PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
	}
	return iVar0;
}

void func_667(var uParam0)
{
}

void func_668(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_680(uParam0, 1);
	func_681(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_669(var uParam0)
{
	if (!func_611(uParam0))
	{
		return 0;
	}
	if (func_749(uParam0))
	{
		return uParam0->f_2;
	}
	return func_750(uParam0->f_1);
}

int func_670(int iParam0)
{
	return func_751(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 99999f, 1, 1);
}

var func_671(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_752() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_753());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_753());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_753());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_754(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_755(iVar2))
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
				if (iVar9 & 8192 != 0 && func_756(iVar2) != 1)
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
					if (!func_757(iVar10))
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

int func_672(int iParam0)
{
	return func_751(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 99999f, 1, 0);
}

bool func_673(var uParam0)
{
	return func_559(*uParam0, 2);
}

bool func_674()
{
	return func_67(32);
}

void func_675(bool bParam0)
{
	if (!func_67(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_67(256))
		{
			func_183(Local_720.f_18, 0);
			func_146(256);
		}
	}
	func_146(32);
}

bool func_676()
{
	return func_67(16);
}

void func_677(bool bParam0)
{
	if (!func_67(8))
	{
		return;
	}
	if (bParam0)
	{
		if (!func_67(256))
		{
			func_183(Local_720.f_18, 0);
			func_146(256);
		}
	}
	func_146(16);
}

float func_678(float fParam0, float fParam1, float fParam2)
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

char* func_679(int iParam0)
{
	switch (func_408(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case 0:
			return "LEGENDARY_ALLIGATOR_CALL_SOUNDS";
		case 1:
			return "LEGENDARY_BEAR_CALL_SOUNDS";
		case 2:
			return "LEGENDARY_BEAVER_CALL_SOUNDS";
		case 3:
			return "LEGENDARY_BISON_CALL_SOUNDS";
		case 4:
			return "LEGENDARY_BOAR_CALL_SOUNDS";
		case 5:
			return "LEGENDARY_BUCK_CALL_SOUNDS";
		case 6:
			return "LEGENDARY_COUGAR_CALL_SOUNDS";
		case 7:
			return "LEGENDARY_PANTHER_CALL_SOUNDS";
		case 8:
			return "LEGENDARY_COYOTE_CALL_SOUNDS";
		case 9:
			return "LEGENDARY_FOX_CALL_SOUNDS";
		case 10:
			return "LEGENDARY_MOOSE_CALL_SOUNDS";
		case 11:
			return "LEGENDARY_RAM_CALL_SOUNDS";
		case 12:
			return "LEGENDARY_WOLF_CALL_SOUNDS";
		case 13:
			return "LEGENDARY_ELK_CALL_SOUNDS";
		default:
			break;
	}
	return "";
}

void func_680(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_681(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_682(var uParam0)
{
	func_758(uParam0, 1);
	func_758(uParam0, 2);
	func_758(uParam0, 4);
}

void func_683(var uParam0, int iParam1)
{
	func_263(&(uParam0->f_19), iParam1);
}

bool func_684(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3[20];
	int iVar24;
	int iVar25;
	int iVar26;
	vector3 vVar27;
	float fVar30;

	iVar2 = *uParam1;
	iVar24 = uParam0->f_11;
	iVar25 = func_759(uParam0);
	if (iVar2 > 20)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar2 - 1))
	{
		if (func_760(uParam0, 1))
		{
			if (func_761(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_8, 1) || !func_761(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_9, 1))
			{
				iVar3[iVar0] = (uParam0->f_11 - 1);
			}
			else if (func_760(uParam0, 2))
			{
				if (!func_657(*(uParam1[iVar0 /*3*/]), 1f, uParam0->f_10))
				{
					iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_12);
				}
				else if (func_760(uParam0, 8))
				{
					iVar3[iVar0] = (uParam0->f_11 - 1);
				}
				else
				{
					if (func_760(uParam0, 1))
					{
						if (!func_761(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_6, 1))
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_13);
						}
						if (func_761(*uParam0, *(uParam1[iVar0 /*3*/]), uParam0->f_7, 1))
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_14);
						}
					}
					if (func_760(uParam0, 4))
					{
						iVar26 = func_762(*uParam0);
						if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar26, true, false), *(uParam1[iVar0 /*3*/])) < BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar26, true, false), *uParam0))
						{
							iVar3[iVar0] = (iVar3[iVar0] - uParam0->f_16);
						}
					}
					if (func_760(uParam0, 16))
					{
						if (func_763(uParam0->f_3, 0f, 0f, 0f, 0.5f, 1))
						{
						}
						vVar27 = { *(uParam1[iVar0 /*3*/]) - *uParam0 };
						fVar30 = func_764(uParam0->f_3, vVar27);
						if (fVar30 < 0f)
						{
							iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_15);
						}
					}
					if (iVar3[iVar0] >= iVar25)
					{
						uParam0->f_18 = iVar0;
						return true;
					}
				}
				iVar0++;
				iVar0 = 0;
				while (iVar0 <= (iVar2 - 1))
				{
					if (iVar3[iVar0] < uParam0->f_11)
					{
					}
					else
					{
						if (func_760(uParam0, 2))
						{
							iVar1 = 0;
							while (iVar1 <= (NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS() - 1))
							{
								if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)) && NETWORK::IS_SPHERE_VISIBLE_TO_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iVar1), *(uParam1[iVar0 /*3*/]), 1f, 100f))
								{
									iVar3[iVar0] = (iVar3[iVar0] + uParam0->f_17);
									if (iVar3[iVar0] < uParam0->f_11)
									{
									}
									else
									{
										iVar1++;
									}
									if (iVar3[iVar0] > iVar24)
									{
										iVar24 = iVar3[iVar0];
										uParam0->f_18 = iVar0;
									}
									iVar0++;
									if (uParam0->f_18 > -1)
									{
										return true;
									}
									return false;
								}
							}
						}
					}
				}
			}
		}
	}
}

bool func_685(int iParam0)
{
	return FLOCK::_GET_ANIMAL_RARITY(iParam0) == 2;
}

void func_686(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (uParam0->f_1 == 255 || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	bVar0 = false;
	if (ENTITY::DOES_ENTITY_EXIST(*uParam1) && func_765(*uParam1, Global_34, 1) < 1133903872)
	{
		bVar0 = true;
	}
	bVar1 = false;
	bVar1 = func_766();
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		if (bVar1)
		{
			Global_1207464 = 1;
		}
		else if (bVar0)
		{
			Global_1207464 = 1;
			if ((PED::IS_PED_DEAD_OR_DYING(*uParam1, true) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
			{
				func_767(*uParam1);
			}
		}
	}
	if (!bVar1)
	{
		if (((!ENTITY::DOES_ENTITY_EXIST(*uParam1) || PED::IS_PED_DEAD_OR_DYING(*uParam1, true)) || PED::IS_PED_INJURED(*uParam1)) || PED::GET_PED_CONFIG_FLAG(*uParam1, 580, true))
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_1))
	{
		return;
	}
	iVar2 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (!bVar1)
	{
		if (func_568(iVar2, *uParam1, 1, 1) > 1133903872)
		{
			return;
		}
	}
	if ((func_229(uParam1->f_2, 1) || func_229(uParam1->f_2, 2)) && uParam1->f_1 != 0)
	{
		return;
	}
	uParam1->f_1 = Global_1295619.f_16;
	if (uParam0->f_1 == PLAYER::PLAYER_ID())
	{
		func_262(&(uParam1->f_2), 1);
	}
	else if (GANG::NETWORK_IS_IN_SAME_GANG(PLAYER::PLAYER_ID(), uParam0->f_1))
	{
		func_262(&(uParam1->f_2), 2);
	}
}

void func_687(var uParam0, var uParam1)
{
	int iVar0;

	if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(uParam0->f_5))
	{
		iVar0 = NETWORK::NET_TO_PED(uParam0->f_5);
		if (!ENTITY::DOES_ENTITY_EXIST(NETWORK::NET_TO_PED(uParam0->f_5)))
		{
			return;
		}
		if (iVar0 != *uParam1)
		{
			return;
		}
		if (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0))
		{
			func_768(947, 1);
			func_769(*uParam1);
		}
		else if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_5))
		{
			if (((PED::IS_PED_DEAD_OR_DYING(iVar0, true) || PED::IS_PED_INJURED(iVar0)) || PED::GET_PED_CONFIG_FLAG(iVar0, 580, true)) || (ENTITY::_IS_ENTITY_FROZEN(iVar0) && !ENTITY::IS_ENTITY_VISIBLE(iVar0)))
			{
				return;
			}
			func_770(*uParam1);
		}
	}
}

bool func_688(int iParam0, int iParam1)
{
	int iVar0;

	if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(iParam1)) && !ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (((PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iParam0, &iVar0, false, false) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &iVar0) && ENTITY::DOES_ENTITY_EXIST(iVar0)) && iVar0 == iParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_689()
{
	if (!PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1940186.f_38 == -1.178843E+33f || Global_1940186.f_38 == 1.171813E+21f) || WEAPON::_IS_WEAPON_SNIPER(Global_1940186.f_38))
	{
		if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
		{
			return true;
		}
	}
	return false;
}

int func_690(int iParam0)
{
	switch (func_411(func_408(ENTITY::GET_ENTITY_MODEL(iParam0))))
	{
		case -1630294353:
			return 5f;
		case -1754709769:
			return 6f;
		case 916613222:
			return 7f;
		case 986272521:
			return 1091567616 /* Float: 9f */;
		case -1718188498:
			return 1093664768 /* Float: 11f */;
		default:
			break;
	}
	return 1092616192 /* Float: 10f */;
}

bool func_691(int iParam0, var uParam1, var uParam2, float fParam3)
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	if (iVar0 > uParam1->f_6)
	{
		func_716(uParam1, 0, iVar0);
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
				if (func_729(uParam1, 4000))
				{
					if ((func_730(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 0, *uParam1 & 256 != 0) && func_731(uParam1, iParam0)) && func_732(uParam1, iParam0))
					{
						func_734();
						*uParam2 = 2;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 2 != 0)
		{
			if (uParam1->f_13 < 4f)
			{
				if (func_729(uParam1, 4000))
				{
					if ((func_730(iParam0, Global_1940186.f_35, *uParam1 & 128 != 0, 1, *uParam1 & 256 != 0) && func_731(uParam1, iParam0)) && func_732(uParam1, iParam0))
					{
						func_734();
						*uParam2 = 2;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			else if (Global_1940186.f_35 != 0)
			{
				if (Global_1940186.f_34 == 0)
				{
					if (func_733(iParam0, Global_1940186.f_35))
					{
						func_734();
						*uParam2 = 2;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
			if (Global_1940186.f_36 != 0)
			{
				if (func_737())
				{
					if (func_733(iParam0, Global_1940186.f_36))
					{
						func_734();
						*uParam2 = 2;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (Global_1940186.f_19)
		{
			if (func_723(uParam1, 1f))
			{
				if (!uParam1->f_2 & 4 != 0)
				{
					if (func_724(Global_33, iParam0, uParam1))
					{
						func_734();
						*uParam2 = 4;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
				if (!uParam1->f_2 & 256 != 0)
				{
					if (func_725(Global_33, iParam0, uParam1))
					{
						func_734();
						*uParam2 = 256;
						func_718(iParam0, uParam1, *uParam2);
						return true;
					}
				}
			}
		}
		if (!uParam1->f_2 & 131072 != 0)
		{
			if (func_771(iParam0, uParam1))
			{
				func_734();
				*uParam2 = 131072;
				func_718(iParam0, uParam1, *uParam2);
				return true;
			}
		}
		if (*uParam1 & 4 != 0)
		{
			if (func_772(iParam0, uParam1))
			{
				func_734();
				*uParam2 = 262144;
				func_718(iParam0, uParam1, *uParam2);
				return true;
			}
		}
	}
	return false;
}

bool func_692(var uParam0, int iParam1)
{
	return func_229(uParam0->f_10, iParam1);
}

void func_693(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
	func_773(&iVar0);
}

void func_694(int iParam0)
{
	PED::_ADD_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(iParam0);
}

void func_695(var uParam0, int iParam1)
{
	func_263(&(uParam0->f_57), iParam1);
}

void func_696(int iParam0)
{
	PED::_REMOVE_PED_SUBSCRIBE_TO_LEGENDARY_BLIPS(iParam0);
}

Vector3 func_697(vector3 vParam0, float fParam3, float fParam4)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), MISC::GET_RANDOM_FLOAT_IN_RANGE(-1f, 1f), 0f };
	fVar3 = (fParam4 / 2f);
	vVar0 = { func_774(vVar0, MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, fParam3)) };
	vVar0.f_2 = MISC::GET_RANDOM_FLOAT_IN_RANGE(-fVar3, fVar3);
	return vParam0 + vVar0;
}

int func_698(int iParam0)
{
	struct<2> Var0;
	var uVar2;

	Var0 = { func_438(iParam0, -2.211749E-26f) };
	if (!STATS::STAT_ID_GET_INT(&Var0, &uVar2))
	{
		return -1;
	}
	return uVar2;
}

void func_699(var uParam0, bool bParam1)
{
	if (bParam1 || !func_611(uParam0))
	{
		func_532(uParam0);
	}
}

void func_700(int iParam0, int iParam1)
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
	Var31 = { func_438(iParam0, 1.309684E+10f) };
	if (!STATS::STAT_ID_GET_INT(&Var31, &iVar33))
	{
		return;
	}
	if (iParam1 > 15)
	{
		return;
	}
	MISC::SET_BIT(&iVar33, iParam1);
	if (!func_121(&Var0, 4) && func_775(iVar33) == Var0.f_1)
	{
		iVar33 = 0;
	}
	if (!STATS::STAT_ID_SET_INT(&Var31, iVar33, true))
	{
	}
	Global_1257494[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*103*/].f_58[iParam0] = iVar33;
}

void func_701(int iParam0)
{
	func_776(iParam0);
}

void func_702(int iParam0)
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
	func_777(iParam0, &iVar0, &iVar1);
	Var2.f_10 = 30f;
	Var2.f_15 = 4;
	Var2.f_20 = 4;
	Var2.f_26 = -1;
	Var2.f_28 = 2;
	func_31(&Var2, iVar0, iVar1, -1, 255);
	func_129(&(Global_1260791[iParam0 /*4*/]));
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

void func_703(int iParam0)
{
	struct<6> Var0;

	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	func_517(&Var0);
}

void func_704(struct<2> Param0)
{
	struct<32> Var0;

	if (func_335(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_335(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_335(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_778(Param0, &Var0))
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

void func_705(int iParam0)
{
	struct<2> Var0;

	Var0 = { func_438(iParam0, -2.211749E-26f) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, 1);
}

void func_706(int iParam0, int iParam1, int iParam2)
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

bool func_707(int iParam0)
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

int func_708(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_779())
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
		func_780(&Global_0, 8);
	}
	func_780(&Global_0, 1);
	return 1;
}

bool func_709(var uParam0)
{
	return func_472(uParam0, 16);
}

float func_710()
{
	return -5.20589E+08f;
}

char* func_711(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LA_ALLIGATOR";
		case 1:
			return "LA_BEAR";
		case 2:
			return "LA_BEAVER";
		case 3:
			return "LA_BISON";
		case 4:
			return "LA_BOAR";
		case 5:
			return "LA_BUCK";
		case 6:
			return "LA_COUGAR";
		case 7:
			return "LA_PANTHER";
		case 8:
			return "LA_COYOTE";
		case 13:
			return "LA_ELK";
		case 9:
			return "LA_FOX";
		case 10:
			return "LA_MOOSE";
		case 11:
			return "LA_RAM";
		case 12:
			return "LA_WOLF";
		default:
			break;
	}
	return "";
}

struct<15> func_712(float fParam0)
{
	struct<15> Var0;

	Var0.f_10 = 255;
	MISC::COPY_SCRIPT_STRUCT(&(Var0.f_4), &Local_720, 5);
	Var0.f_9 = fParam0;
	Var0 = 185;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	return Var0;
}

void func_713(var uParam0)
{
	func_781(uParam0, func_538(4, 117));
}

bool func_714(int iParam0, int iParam1)
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

bool func_715(vector3 vParam0, float fParam3, float fParam4, float fParam5, float fParam6)
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

void func_716(var uParam0, bool bParam1, int iParam2)
{
	func_782(iParam2);
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
		uParam0->f_14 = func_783(0);
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
							func_230(uParam0, 9.403955E-38f);
						}
					}
					else if (!*uParam0 & 8192 != 0)
					{
						if (func_784(1, 1))
						{
							func_230(uParam0, 9.403955E-38f);
						}
					}
				}
				else if (!PED::IS_PED_PLANTING_BOMB(Global_33) && (!func_784(1, 1) || *uParam0 & 8192 != 0))
				{
					func_260(uParam0, 9.403955E-38f);
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
			if (func_785(uParam0))
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
	func_786(uParam0);
}

bool func_717(int iParam0, var uParam1)
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
			if (!func_787(iParam0, uParam1, iVar2))
			{
				return false;
			}
			if (func_788(iParam0, iVar2) <= func_789(uParam1))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_718(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 != 16384)
	{
		uParam1->f_11 = iParam0;
	}
	if (func_790(iParam2, 1, 1, 1, 0))
	{
		func_230(uParam1, 2048);
	}
	uParam1->f_17 = iParam2;
	func_791(uParam1, 1);
	func_792();
}

bool func_719(int iParam0, var uParam1)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1118437376; /* Float: 85f */
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (func_498(iParam0, !(*uParam1 && 2.524355E-29f) != 0, !(*uParam1 && 1.084202E-19f) != 0, !(*uParam1 && 2f) != 0, 0, 0))
		{
			if (uParam1->f_13 < 5f)
			{
				iVar0 = 1119748096; /* Float: 95f */
			}
			else if (uParam1->f_13 < 1097859072)
			{
				iVar0 = 1119092736; /* Float: 90f */
			}
			fVar1 = func_793(uParam1);
			if (func_794(uParam1, iParam0, iVar0, fVar1))
			{
				if (uParam1->f_3 == 0)
				{
					uParam1->f_3 = MISC::GET_GAME_TIMER();
				}
				iVar2 = (MISC::GET_GAME_TIMER() - uParam1->f_3);
				iVar3 = func_795(uParam1);
				if (uParam1->f_3 != 0)
				{
					if (iVar2 > iVar3)
					{
						func_791(uParam1, 1);
						return true;
					}
					else if (uParam1->f_13 < 1080033280)
					{
						if (iVar2 > func_796(uParam1))
						{
							func_791(uParam1, 1);
							return true;
						}
					}
				}
			}
		}
	}
	return false;
}

bool func_720(int iParam0, int iParam1, var uParam2)
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
	if (func_797(iParam1, !(*uParam2 && 2.524355E-29f) != 0, !(*uParam2 && 1.084202E-19f) != 0, !(*uParam2 && 2f) != 0, 0))
	{
		if (uParam2->f_13 < 5f)
		{
			iVar0 = 1119748096; /* Float: 95f */
		}
		else if (uParam2->f_13 < 1097859072)
		{
			iVar0 = 1119092736; /* Float: 90f */
		}
		fVar1 = func_793(uParam2);
		if (func_794(uParam2, iParam0, iVar0, fVar1))
		{
			if (uParam2->f_3 == 0)
			{
				uParam2->f_3 = MISC::GET_GAME_TIMER();
			}
			if (uParam2->f_3 != 0)
			{
				if (MISC::GET_GAME_TIMER() - uParam2->f_3) > func_795(uParam2)
				{
					func_791(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_721(int iParam0, var uParam1)
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
	if (func_787(iParam0, uParam1, iVar1))
	{
		if (uParam1->f_4 == 0)
		{
			uParam1->f_4 = MISC::GET_GAME_TIMER();
		}
		else if (MISC::GET_GAME_TIMER() - uParam1->f_4) > func_795(uParam1)
		{
			fVar3 = func_793(uParam1);
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

int func_722(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_798(bParam1, bParam2, bParam3);
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

bool func_723(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_736();
	iVar1 = (iVar0 - uParam0->f_9);
	if (IntToFloat(iVar1) > (fParam1 * 1148846080))
	{
		return true;
	}
	return false;
}

bool func_724(int iParam0, int iParam1, var uParam2)
{
	float fVar0;
	int iVar1;
	float fVar2;

	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (!NETWORK::NETWORK_IS_IN_SESSION())
		{
			fVar0 = func_799(uParam2);
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
			if (func_732(uParam2, iParam1))
			{
				func_791(uParam2, 1);
				return true;
			}
		}
	}
	return false;
}

bool func_725(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (uParam2->f_13 < IntToFloat(func_800(uParam2)))
	{
		if ((WEAPON::IS_WEAPON_VALID(Global_1940186.f_40) && !WEAPON::_IS_WEAPON_SILENT(Global_1940186.f_40)) || WEAPON::GET_CURRENT_PED_VEHICLE_WEAPON(Global_33, &uVar0))
		{
			if (func_732(uParam2, iParam1))
			{
				if (PED::TIME_SINCE_PED_LAST_SHOT(iParam0) <= 1f)
				{
					func_791(uParam2, 1);
					return true;
				}
			}
		}
	}
	return false;
}

bool func_726(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	vector3 vVar0;
	int iVar3;
	vector3 vVar4;
	vector3 vVar7;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, true) };
	iVar3 = func_801(uParam2);
	if (!bParam3)
	{
		switch (iVar3)
		{
			case 0:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(3.742873E-31f, vVar0, uParam2->f_24))
				{
					func_791(uParam2, 1);
					return true;
				}
				break;
			case 1:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(0.0001224924f, vVar0, uParam2->f_30))
				{
					func_791(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar4, false, false);
					if (func_802(iParam1, vVar0, vVar4))
					{
						func_791(uParam2, 1);
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
					func_791(uParam2, 1);
					return true;
				}
				break;
			case 2:
				if (EVENT::IS_SHOCKING_EVENT_IN_SPHERE(-14195.47f, vVar0, uParam2->f_24))
				{
					MISC::GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(iParam1, -7.135455E-16f, uParam2->f_29, &vVar7, false, false);
					if (func_802(iParam1, vVar0, vVar7))
					{
						func_791(uParam2, 1);
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

bool func_727(int iParam0, var uParam1)
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
		if (!func_787(iParam0, uParam1, Global_1940186.f_28[iVar0]) || iParam0 == Global_1940186.f_28[iVar0])
		{
		}
		else
		{
			bVar13 = func_803(Global_1940186.f_28[iVar0]);
			fVar1 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false), vVar9);
			if (func_804(Global_1940186.f_28[iVar0]))
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
			if (func_805(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_806(uParam1, iParam0, fVar1, bVar12, bVar13))
			{
				vVar2[0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(Global_1940186.f_28[iVar0], false, false) };
				vVar2[1 /*3*/] = { vVar9 };
				uParam1->f_11 = iParam0;
				return true;
			}
			else if (func_807(uParam1, iParam0, fVar1, iVar0))
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

bool func_728(int iParam0, var uParam1)
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

bool func_729(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_736();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

int func_730(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
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
		if (func_808(iVar0, &iVar2))
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
	if (func_809(iVar0, iParam0))
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

int func_731(var uParam0, int iParam1)
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

bool func_732(var uParam0, int iParam1)
{
	if (func_810(uParam0))
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

bool func_733(int iParam0, int iParam1)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, iParam1, true, true))
		{
			return true;
		}
		if (func_568(iParam0, iParam1, 1, 1) < 4f)
		{
			if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1) && PED::IS_PED_RAGDOLL(iParam0))
			{
				return true;
			}
		}
	}
	return false;
}

void func_734()
{
}

bool func_735(var uParam0, int iParam1)
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
		if (func_811(iVar0, iParam1, vVar1))
		{
			uParam0->f_10 = func_736();
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
						if (func_765(iVar7, vVar1, 1) < 3f)
						{
							if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iVar7, iParam1))
							{
								uParam0->f_10 = func_736();
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

int func_736()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

bool func_737()
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
	if ((func_736() - Global_1940186.f_37) >= 10000)
	{
		return false;
	}
	return true;
}

bool func_738(var uParam0, int iParam1)
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
	fVar0 = func_789(uParam0);
	if (uParam0->f_13 > func_812(uParam0) && uParam0->f_13 > fVar0)
	{
		return false;
	}
	iVar2 = func_813(iParam1);
	iVar1 = func_814(uParam0->f_15);
	if ((iVar2 == iVar1 || iVar2 == 2) || iVar1 == 2)
	{
		if ((uParam0->f_13 <= fVar0 || PED::CAN_PED_SEE_PED_CACHED(iParam1, Global_33, false) == 1) || PED::CAN_PED_SEE_PED_CACHED(iParam1, uParam0->f_15, false) == 1)
		{
			return true;
		}
	}
	return false;
}

bool func_739(var uParam0, int iParam1)
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
	if (func_815(iVar0, iParam1, 0.707f) != 0)
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar7 = func_640(vVar1, vVar4);
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

int func_740(int iParam0, int iParam1, var uParam2)
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
	return func_816(iParam0, iParam1, bVar0, bVar2, uParam2->f_13, bVar1);
}

bool func_741(int iParam0, var uParam1)
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
		if (func_817(iParam0, uParam1, 1))
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
	if (!func_818(iParam0))
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
			if (func_819(uParam1))
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
					if (!func_820(uParam1, iParam0))
					{
						if (func_765(iVar4, Global_34, 1) < 7f)
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

bool func_742(int iParam0, var uParam1)
{
	if (!func_821(0))
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

bool func_743(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (uParam0->f_9 <= 0)
	{
		return true;
	}
	iVar0 = func_736();
	iVar1 = (iVar0 - uParam0->f_9);
	if (iVar1 > iParam1)
	{
		return true;
	}
	return false;
}

bool func_744(int iParam0, var uParam1)
{
	return PED::_GET_IS_PED_BEING_ROBBED(*iParam0, PLAYER::PLAYER_ID(), false);
}

int func_745(int iParam0, var uParam1)
{
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		return 0;
	}
	if (uParam1->f_5 == 0)
	{
		uParam1->f_5 = func_736();
	}
	else if (func_736() - uParam1->f_5) > func_822(uParam1)
	{
		return func_823(iParam0, uParam1, 0, -1f);
	}
	return 0;
}

bool func_746(var uParam0, int iParam1)
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

void func_747(int iParam0)
{
	PED::_SET_PED_QUALITY(iParam0, 0);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
}

void func_748(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_749(var uParam0)
{
	return func_559(*uParam0, 2);
}

int func_750(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

int func_751(vector3 vParam0, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	fVar2 = iParam3;
	iVar5 = 255;
	fVar3 = iParam3;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar4 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar4))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar4))
		{
		}
		else
		{
			iVar1 = NETWORK::NETWORK_GET_PARTICIPANT_INDEX(iVar4);
			if (bParam4 && !func_509(iVar1, 1, 1))
			{
			}
			else if (!func_510(iVar1))
			{
			}
			else
			{
				iVar6 = PLAYER::GET_PLAYER_PED(iVar4);
				if (bParam5)
				{
					if (((PED::IS_PED_HOGTIED(iVar6) || PED::_GET_LASSOER_OF_PED(iVar6)) || func_596(4, iVar1)) || PED::IS_PED_IN_ANY_VEHICLE(iVar6, false))
					{
					}
					else
					{
						fVar2 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar6, false, false), vParam0);
						if (fVar2 < fVar3)
						{
							iVar5 = iVar4;
							fVar3 = fVar2;
						}
					}
					iVar0++;
					return iVar5;
				}
			}
		}
	}
}

int func_752()
{
	return Global_1051645.f_12;
}

char* func_753()
{
	return "unnamed";
}

int func_754(int iParam0)
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

bool func_755(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_824(36, iParam0);
}

int func_756(int iParam0)
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

bool func_757(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_825(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_826(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

void func_758(var uParam0, int iParam1)
{
	func_262(&(uParam0->f_19), iParam1);
}

int func_759(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	if (func_760(uParam0, 1))
	{
		iVar0 = (iVar0 + uParam0->f_13);
		iVar0 = (iVar0 + uParam0->f_14);
	}
	if (func_760(uParam0, 2))
	{
		iVar0 = (iVar0 + uParam0->f_12);
	}
	if (func_760(uParam0, 16))
	{
		iVar0 = (iVar0 + uParam0->f_15);
	}
	return iVar0;
}

bool func_760(var uParam0, int iParam1)
{
	return func_229(uParam0->f_19, iParam1);
}

bool func_761(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
{
	if (bParam7)
	{
		return BUILTIN::VDIST2(vParam0, vParam3) <= (fParam6 * fParam6);
	}
	return func_636(vParam0, vParam3) <= (fParam6 * fParam6);
}

int func_762(vector3 vParam0)
{
	return PLAYER::GET_PLAYER_PED(func_751(vParam0, 99999f, 1, 0));
}

bool func_763(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

float func_764(vector3 vParam0, vector3 vParam3)
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

float func_765(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

int func_766()
{
	return 0;
}

void func_767(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(iParam0))
	{
		iVar0 = MAP::GET_BLIP_FROM_ENTITY(iParam0);
		if (MAP::DOES_BLIP_EXIST(iVar0))
		{
			MAP::BLIP_REMOVE_MODIFIER(iVar0, 4.185971E-18f);
			MAP::BLIP_ADD_MODIFIER(iVar0, 4.185971E-18f);
		}
	}
}

void func_768(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_827(iParam0, &iVar0, &iVar1);
	if (!func_828(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_829(iVar0, iVar1);
}

void func_769(int iParam0)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar0.f_2 = Global_34.f_2;
	vVar0 = { vVar0 - Global_34 };
	if (func_232(vVar0))
	{
		vVar0 = { 1f, 0f, 0f };
	}
	vVar0 = { func_381(vVar0) };
	vVar0 = { Global_34 + vVar0 * Vector(1126170624, 1126170624, 1126170624) };
	AUDIO::_PLAY_SOUND_FROM_POSITION(func_830(iParam0), vVar0, func_679(iParam0), false, 0, true, 0);
}

void func_770(int iParam0)
{
	AUDIO::_PLAY_ANIMAL_VOCALIZATION_PHEROMONE_VIAL_RESPONSE(iParam0, -2.185435E-18f, true);
}

bool func_771(int iParam0, var uParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	bool bVar3;

	fVar0 = func_831(uParam1);
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
		fVar2 = func_832(PED::_0x2BA9D7BF629F920C(iParam0), (fVar0 + 5f));
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
					if (func_833())
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

bool func_772(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;

	if (func_834(iParam0))
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

void func_773(int* iParam0)
{
	if (MAP::DOES_BLIP_EXIST(*iParam0))
	{
		MAP::REMOVE_BLIP(iParam0);
	}
}

Vector3 func_774(vector3 vParam0, float fParam3)
{
	float fVar0;

	if (fParam3 == 0f)
	{
		return 0f, 0f, 0f;
	}
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		return vParam0 * FtoV((fParam3 / fVar0));
	}
	return 0f, 0f, 0f;
}

int func_775(int iParam0)
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

void func_776(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = Global_1295619.f_16;
	Var1 = { func_438(iParam0, 12648.71f) };
	if (!STATS::STAT_ID_SET_INT(&Var1, iVar0, true))
	{
	}
}

int func_777(int iParam0, var uParam1, var uParam2)
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

bool func_778(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_663(Param0, &vVar0);
	if (func_835(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

bool func_779()
{
	return !Global_1572887.f_10;
}

void func_780(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_781(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 15, 41, &uParam1);
}

void func_782(int iParam0)
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
	Global_1940186.f_21 = func_836();
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
			func_837(&(Global_1940186.f_28), &(Global_1940186.f_33));
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

var func_783(int iParam0)
{
	return Global_1102813.f_3695[iParam0 /*3*/];
}

bool func_784(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_838(bParam0, &iVar0, &iVar1))
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

bool func_785(var uParam0)
{
	int iVar0;

	iVar0 = Global_1940186.f_34;
	if (func_28() == -1)
	{
		if (Global_1940186.f_34 == 0)
		{
			iVar0 = func_839(uParam0);
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_34) || !Global_1956862.f_1716[4])
	{
		iVar0 = func_839(uParam0);
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_814(iVar0) == -1)
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

void func_786(var uParam0)
{
	if (*uParam0 & 8 != 0 || *uParam0 & 16 != 0)
	{
		func_840(uParam0);
	}
}

bool func_787(int iParam0, var uParam1, int iParam2)
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
		iVar1 = func_814(iParam2);
	}
	else
	{
		iVar1 = func_813(iParam2);
	}
	if (!PED::IS_PED_HUMAN(iParam0))
	{
		iVar0 = func_814(iParam0);
	}
	else
	{
		iVar0 = func_813(iParam0);
	}
	if (iVar1 == iVar0)
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	if (func_185(*uParam1, 8388608))
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

float func_788(int iParam0, int iParam1)
{
	return func_568(iParam0, iParam1, 1, 1);
}

float func_789(var uParam0)
{
	return uParam0->f_29;
}

bool func_790(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_791(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_230(uParam0, 3.85186E-34f);
	}
	else
	{
		func_260(uParam0, 3.85186E-34f);
	}
}

void func_792()
{
	if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
	{
		CAM::STOP_GAMEPLAY_HINT(false);
	}
}

float func_793(var uParam0)
{
	return uParam0->f_18;
}

bool func_794(var uParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;

	if (uParam0->f_13 > fParam3)
	{
		return false;
	}
	fVar0 = -1f;
	if (!func_185(*uParam0, 4194304))
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

int func_795(var uParam0)
{
	return uParam0->f_19;
}

int func_796(var uParam0)
{
	return uParam0->f_20;
}

bool func_797(int iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
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
		if (WEAPON::_IS_WEAPON_SNIPER(func_650(iVar0, 0)))
		{
			if (func_715(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), 1053609165 /* Float: 0.4f */, 1058642330 /* Float: 0.6f */, 1050253722 /* Float: 0.3f */, 1060320051 /* Float: 0.7f */))
			{
				return true;
			}
		}
	}
	return false;
}

int func_798(bool bParam0, bool bParam1, bool bParam2)
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

float func_799(var uParam0)
{
	return uParam0->f_25;
}

int func_800(var uParam0)
{
	return uParam0->f_23;
}

int func_801(var uParam0)
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

bool func_802(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (func_841(iParam0, vParam4, 1056964608 /* Float: 0.5f */))
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

int func_803(int iParam0)
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
	if (func_842(iParam0, 200, 0, 1))
	{
		return 1;
	}
	return 0;
}

bool func_804(int iParam0)
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

bool func_805(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_834(iParam1))
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

bool func_806(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	float fVar0;

	if (bParam3)
	{
		return false;
	}
	if (bParam4)
	{
		if (func_834(iParam1))
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

bool func_807(var uParam0, int iParam1, float fParam2, int iParam3)
{
	float fVar0;

	fVar0 = func_843(uParam0);
	if (func_834(iParam1))
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

bool func_808(int iParam0, int iParam1)
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

bool func_809(int iParam0, int iParam1)
{
	if (PED::_GET_LASSO_TARGET(iParam0) == iParam1)
	{
		return true;
	}
	if (WEAPON::_IS_TARGET_PED_CONSTRAINED_BY_PED_USING_BOLAS(iParam0, iParam1))
	{
		return true;
	}
	if (!WEAPON::_IS_WEAPON_LASSO(func_844(iParam0, 1, 0, 0)) && !func_844(iParam0, 1, 0, 0) == 1284.666f)
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

bool func_810(var uParam0)
{
	return !*uParam0 & 2 != 0;
}

bool func_811(int iParam0, int iParam1, vector3 vParam2)
{
	float fVar0;

	fVar0 = func_765(iParam0, vParam2, 1);
	if (fVar0 < 4f)
	{
		if (ENTITY::IS_ENTITY_TOUCHING_ENTITY(iParam0, iParam1))
		{
			return true;
		}
	}
	return false;
}

float func_812(var uParam0)
{
	return uParam0->f_26;
}

int func_813(int iParam0)
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

int func_814(int iParam0)
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

int func_815(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_845(iParam0, vVar0, fParam2);
}

int func_816(int iParam0, int iParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5)
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
			if (func_808(Global_33, &iVar1))
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
		fVar2 = func_568(iParam0, PLAYER::PLAYER_PED_ID(), 0, 1);
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
		if (func_568(iParam0, Global_1940186.f_34, 0, 1) < 1075838976)
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

bool func_817(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_838(1, &iVar0, &iVar1);
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
					if (!bParam2 || !func_820(uParam1, iVar0))
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
				if (!bParam2 || !func_820(uParam1, iVar1))
				{
					if (func_765(iVar1, Global_34, 1) < 5f)
					{
						return true;
					}
				}
			}
		}
	}
	return false;
}

bool func_818(int iParam0)
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

bool func_819(var uParam0)
{
	return func_185(*uParam0, 131072);
}

bool func_820(var uParam0, int iParam1)
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

bool func_821(int iParam0)
{
	return false;
}

int func_822(var uParam0)
{
	return uParam0->f_22;
}

int func_823(int iParam0, var uParam1, bool bParam2, float fParam3)
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

bool func_824(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_846(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_847())
	{
		return func_846(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_846(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_825(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
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
	if (!Global_1295619.f_17[iVar0])
	{
		func_848(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_849(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_827(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_828(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_850(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_851(iParam0))
	{
		return false;
	}
	if (func_852(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_853(iParam0, 1)) || func_854(32768))
	{
		if (!func_853(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_855())
	{
		return false;
	}
	return true;
}

void func_829(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

char* func_830(int iParam0)
{
	return "CALL";
}

var func_831(var uParam0)
{
	if (!*uParam0 & 1 != 0)
	{
		return func_812(uParam0);
	}
	if (GRAPHICS::_GET_MODIFIED_VISIBILITY_DISTANCE() > 1062551421)
	{
		return func_856(uParam0);
	}
	return func_812(uParam0);
}

float func_832(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_833()
{
	int iVar0;
	int iVar1;

	iVar0 = func_858(func_857());
	iVar1 = func_859(func_857());
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

bool func_834(int iParam0)
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

bool func_835(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_860(iParam0))
	{
		return false;
	}
	if (func_861(iParam0, uParam1, &uVar0))
	{
		func_862(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_836()
{
	if (func_863())
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

void func_837(var uParam0, var uParam1)
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

bool func_838(bool bParam0, int iParam1, int iParam2)
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

int func_839(var uParam0)
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

void func_840(var uParam0)
{
	int iVar0;

	if (Global_1940186.f_32 == 0)
	{
		func_260(uParam0, 1.504633E-36f);
		iVar0 = 0;
		while (iVar0 < Global_1940186.f_33)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940186.f_28[iVar0]))
			{
				if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1940186.f_28[iVar0]))
				{
					func_230(uParam0, 1.504633E-36f);
				}
				else
				{
					iVar0++;
				}
			}
		}
	}
}

bool func_841(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	vVar3 = { vParam1 - ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	return (((vVar0.x * vVar3.x) + (vVar0.y * vVar3.y)) / BUILTIN::VDIST(vVar3, 0f, 0f, 0f)) > fParam4;
}

bool func_842(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

float func_843(var uParam0)
{
	return uParam0->f_28;
}

float func_844(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_845(int iParam0, vector3 vParam1, float fParam4)
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
	fVar9 = func_764(vVar3, vVar6);
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
	if (func_864(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_846(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_847()
{
	return Global_1102813.f_3672;
}

void func_848(int iParam0)
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
	func_849(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_849(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_850(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_851(int iParam0)
{
	if (func_853(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_852(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar0 = 0;
	while (iVar0 < Global_38.f_3542)
	{
		if (Global_38.f_3542[iVar0 /*3*/].f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904398.f_33[iParam0 /*9*/].f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (iVar1 - Global_38.f_3542[iVar0 /*3*/]);
			if (Global_38.f_3542[iVar0 /*3*/].f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904398.f_33[iParam0 /*9*/].f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_853(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_854(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_855()
{
	if (!func_18())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

var func_856(var uParam0)
{
	return uParam0->f_27;
}

int func_857()
{
	return Global_1902565;
}

int func_858(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_859(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

bool func_860(int iParam0)
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

bool func_861(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_865(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_862(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_866(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_867(iVar0);
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
			uParam2->f_5 = func_868(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_869(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_870(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_871(iVar0);
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

bool func_863()
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

bool func_864(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

int func_865(int iParam0)
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

int func_866(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_872(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_867(int iParam0)
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

int func_868(int iParam0)
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

int func_869(int iParam0)
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

int func_870(int iParam0)
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

int func_871(int iParam0)
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

bool func_872(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_873(iParam0, uParam1, &uVar0))
	{
		func_874(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_873(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_865(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_874(bool bParam0, int iParam1, var uParam2)
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

