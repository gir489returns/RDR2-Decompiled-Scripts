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
	struct<38> Local_13 = { -1, -1, 0, 0, 0, -1, -1, 0, 255, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1, 0, 0, 0 } ;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 0;
	var uLocal_58 = 0;
	var uLocal_59 = 0;
	var uLocal_60 = 0;
	var uLocal_61 = 0;
	var uLocal_62 = 0;
	var uLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	var uLocal_67 = 0;
	var uLocal_68 = 0;
	var uLocal_69 = 0;
	var uLocal_70 = 0;
	var uLocal_71 = 0;
	var uLocal_72 = 0;
	var uLocal_73 = 0;
	var uLocal_74 = 0;
	var uLocal_75 = 0;
	var uLocal_76 = 0;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = 0;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 4;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = -1;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = 0;
	var uLocal_110 = 0;
	var uLocal_111 = 0;
	float fLocal_112 = 0f;
	float fLocal_113 = 0f;
	struct<5> ScriptParam_0 = { -1, 0, 0, 0, -1 } ;
	var uScriptParam_5 = -1;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 255;
	var uScriptParam_8 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_112 = 1f;
	fLocal_113 = 1f;
	func_1();
	func_2(&ScriptParam_0);
	while (!func_3(ScriptParam_0.f_4))
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	func_6();
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(var uParam0)
{
	Local_13.f_1 = { *uParam0 };
	func_7();
	Local_13.f_14 = { func_8(*uParam0, uParam0->f_2) };
	Local_13.f_22 = { func_9(*uParam0, uParam0->f_2) };
	Local_13.f_30 = MISC::GET_GAME_TIMER();
	func_10(&Local_13);
}

bool func_3(struct<2> Param0)
{
	if (func_11(1, 1))
	{
		return true;
	}
	else if (func_12(Param0, 0, 128))
	{
		return true;
	}
	else if (!func_13())
	{
		return true;
	}
	else if (!func_7())
	{
		return true;
	}
	else if (func_14(Local_13, 64))
	{
		return true;
	}
	else if (Local_13.f_11 == 0)
	{
		return true;
	}
	return false;
}

void func_4()
{
	switch (Local_13.f_10)
	{
		case 0:
			func_15();
			break;
		case 1:
			func_16();
			break;
		case 2:
			func_17();
			break;
		case 3:
			func_18();
			break;
		case 4:
			func_19();
			break;
	}
}

void func_5()
{
	func_20();
	func_21(1);
	func_22(Local_13, Local_13.f_1.f_4, 0);
	func_23(Local_13.f_1.f_6, Local_13.f_1.f_3);
	func_24();
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_7()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_25(Global_1206482.f_78[iVar0 /*20*/].f_7, Local_13.f_1.f_4))
		{
			func_26(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<8> func_8(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_27(&Var8, iParam0) && func_28(&Var8)) && func_29(&Var8, uParam1)) && func_30(&Var8))
	{
		func_31(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

struct<8> func_9(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_27(&Var8, iParam0) && func_28(&Var8)) && func_29(&Var8, uParam1)) && func_30(&Var8))
	{
		func_31(Var8, -1.828277E-25f, &Var0, 0);
	}
	return Var0;
}

void func_10(var uParam0)
{
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

bool func_12(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_32(Global_1051268) && !func_25(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_33(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_34(iParam3, 255))
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
	if (func_35())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_32(Global_1051268))
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

bool func_13()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_14(int iParam0, int iParam1)
{
	return func_36(Global_1206482.f_78[iParam0 /*20*/].f_6, iParam1);
}

void func_15()
{
	bool bVar0;

	bVar0 = true;
	if (func_37())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_38(1);
	}
	else if (Local_13.f_30 == -1 || (MISC::GET_GAME_TIMER() - Local_13.f_30) > Global_1901671.f_316.f_187)
	{
		if (Local_13.f_30 == -1)
		{
		}
		func_38(1);
	}
}

void func_16()
{
	struct<61> Var0;
	struct<61> Var61;
	int iVar122;
	struct<61> Var123;

	if (func_14(Local_13, 32768))
	{
		Var0.f_44 = 4;
		Var0.f_52 = -1;
		Local_13.f_37 = { Var0 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J", 16);
		Local_13.f_37.f_43 = 2;
		Local_13.f_37.f_44[0] = -1.999634E+11f;
		Local_13.f_37.f_44[1] = 4.835488E-26f;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 65536))
	{
		Var61.f_44 = 4;
		Var61.f_52 = -1;
		Local_13.f_37 = { Var61 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_PLS", 16);
		iVar122 = func_40();
		if (iVar122 > 1)
		{
			StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_PL", 16);
		}
		Local_13.f_37.f_43 = 2;
		Local_13.f_37.f_44[0] = -1.999634E+11f;
		Local_13.f_37.f_44[1] = 4.835488E-26f;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 131072))
	{
		Var123.f_44 = 4;
		Var123.f_52 = -1;
		Local_13.f_37 = { Var123 };
		StringCopy(&(Local_13.f_37.f_1), "FME_ALERT_TITLE", 16);
		StringCopy(&(Local_13.f_37.f_3), "FME_ALERT_J_NM", 16);
		Local_13.f_37.f_43 = 1;
		Local_13.f_37.f_44[0] = -1.999634E+11f;
		func_39(&(Local_13.f_37), 0);
		func_38(4);
	}
	else if (func_14(Local_13, 32))
	{
		func_41(2);
		func_42();
		func_38(2);
		return;
	}
	func_43();
	if (Local_13.f_11 >= 1)
	{
		func_44();
		func_45();
		func_46(&Local_13);
	}
	else
	{
		func_20();
	}
}

void func_17()
{
	if (func_14(Local_13, 2))
	{
		func_38(3);
		return;
	}
	func_47();
	if (Local_13.f_11 == 2)
	{
		if (!func_48(Local_13, 128, PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			func_21(0);
		}
		else
		{
			func_21(1);
		}
		func_44();
		func_46(&Local_13);
	}
	else
	{
		func_21(1);
		func_20();
		func_38(5);
	}
}

void func_18()
{
	if (func_14(Local_13, 4))
	{
		func_21(1);
		func_20();
		func_38(5);
		return;
	}
	func_49();
	func_21(1);
	if (Local_13.f_11 == 2)
	{
		func_46(&Local_13);
	}
	else
	{
		func_20();
		func_38(5);
	}
}

void func_19()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	struct<2> Var7;

	if (UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Local_13.f_37) >= 3)
	{
		iVar0 = func_50(&(Local_13.f_37), -1.366675E-05f, &(Local_13.f_37.f_49), 1);
		if (func_14(Local_13, 32768))
		{
			if (iVar0 == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 32768);
				iVar1 = Local_13;
				if (iVar1 != -1)
				{
					iVar2 = Global_1205923.f_1[iVar1 /*26*/].f_3;
					Var3 = { Global_1206482.f_78[iVar1 /*20*/].f_7 };
					if (iVar2 != 0 && func_52(iVar1, Var3, iVar2))
					{
					}
				}
				func_38(1);
			}
			else if (iVar0 == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 32768);
				func_38(1);
			}
		}
		else if (func_14(Local_13, 65536))
		{
			if (iVar0 == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 65536);
				iVar5 = Local_13;
				if (iVar5 != -1)
				{
					iVar6 = Global_1205923.f_1[iVar5 /*26*/].f_3;
					Var7 = { Global_1206482.f_78[iVar5 /*20*/].f_7 };
					if (iVar6 != 0 && func_52(iVar5, Var7, iVar6))
					{
					}
				}
				func_38(1);
			}
			else if (iVar0 == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 65536);
				func_38(1);
			}
		}
		else if (func_14(Local_13, 131072))
		{
			if (iVar0 == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Local_13.f_37);
				Local_13.f_37 = 0;
				func_51(Local_13, 131072);
				func_38(1);
			}
		}
	}
}

void func_20()
{
	func_53();
	func_42();
}

void func_21(bool bParam0)
{
	if (Local_13.f_1.f_6 == -0.02932728f || Local_13.f_1.f_6 == 1020553f)
	{
		if (!bParam0)
		{
			if (!func_54(256))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_33))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
						TASK::_0xFDECCA06E8B81346(Global_33);
					}
					else if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
					{
						TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_33, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33), Global_34, 2f, 1);
					}
				}
				func_55(0);
				func_56(256);
			}
		}
		else if (func_54(256))
		{
			func_55(1);
			func_57(256);
		}
	}
}

int func_22(int iParam0, struct<2> Param1, bool bParam3)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	if (!func_32(Param1))
	{
		return 0;
	}
	if (!func_58(Param1) && !func_59(Param1))
	{
		return 0;
	}
	if (bParam3 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) > 1)
		{
			func_60(1);
		}
	}
	if (func_14(iParam0, 32))
	{
		func_61(Param1, 0, 2, 0, 0);
	}
	else
	{
		func_61(Param1, 0, -1, 0, 0);
	}
	func_62(iParam0, Param1);
	if (func_14(iParam0, 64))
	{
		return 0;
	}
	func_63(iParam0, 64);
	return 1;
}

int func_23(int iParam0, int iParam1)
{
	if (iParam0 == -4.537018E+10f)
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return 0;
	}
	DECORATOR::DECOR_SET_INT(Global_33, "iFmeLastEventPlayed", iParam1);
	return 1;
}

void func_24()
{
}

bool func_25(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_26(int iParam0)
{
	if (Local_13 != iParam0)
	{
		Local_13 = iParam0;
	}
}

bool func_27(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_64(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_28(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_29(bool bParam0, int iParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_30(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_31(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
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

bool func_32(struct<2> Param0)
{
	if (!func_65(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_66(Param0))
	{
		return false;
	}
	return true;
}

bool func_33(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_34(int iParam0, int iParam1)
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

bool func_35()
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
	if (!func_32(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_36(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_37()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

void func_38(int iParam0)
{
	Local_13.f_10 = iParam0;
}

void func_39(var uParam0, bool bParam1)
{
	struct<16> Var0;
	struct<4> Var19;
	struct<4> Var23;
	struct<4> Var27;
	struct<4> Var31;
	char[] cVar35[8];

	*uParam0 = 0;
	func_67(&(uParam0->f_49), 0, 0);
	Var19 = uParam0->f_44[0];
	Var19.f_3 = uParam0->f_42;
	Var0.f_3 = { Var19 };
	if (uParam0->f_43 > 1)
	{
		Var23 = uParam0->f_44[1];
		Var23.f_3 = uParam0->f_42;
		Var0.f_7 = { Var23 };
		if (uParam0->f_43 > 2)
		{
			Var27 = uParam0->f_44[2];
			Var27.f_3 = uParam0->f_42;
			Var0.f_11 = { Var27 };
			if (uParam0->f_43 > 3)
			{
				Var31 = uParam0->f_44[3];
				Var31.f_3 = uParam0->f_42;
				Var0.f_15 = { Var31 };
			}
		}
	}
	Var0.f_2 = 0;
	if (uParam0->f_41)
	{
		Var0 = "DEATH_FAIL_RESPAWN_SOUNDS";
		Var0.f_1 = "TITLE_SCREEN_ENTER";
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_5)))
	{
		cVar35 = MISC::VAR_STRING(10, &(uParam0->f_3), &(uParam0->f_5));
	}
	else
	{
		cVar35 = func_68(uParam0->f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
		{
			if (uParam0->f_39)
			{
				cVar35 = MISC::VAR_STRING(42, cVar35, func_69(&(uParam0->f_7), 4.808429E-35f), func_69(&(uParam0->f_23), 4.808429E-35f), uParam0->f_40);
			}
			else
			{
				cVar35 = MISC::VAR_STRING(42, cVar35, func_69(&(uParam0->f_7), 4.808429E-35f), func_69(&(uParam0->f_23), 4.808429E-35f));
			}
		}
		else if (uParam0->f_39)
		{
			cVar35 = MISC::VAR_STRING(10, cVar35, func_69(&(uParam0->f_7), 4.808429E-35f), uParam0->f_40);
		}
		else
		{
			cVar35 = MISC::VAR_STRING(10, cVar35, func_69(&(uParam0->f_7), 4.808429E-35f));
		}
	}
	else if (uParam0->f_39)
	{
		cVar35 = MISC::VAR_STRING(2, cVar35, uParam0->f_40);
	}
	if (bParam1)
	{
		*uParam0 = func_70(&Var0, &(uParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*uParam0 = func_71(&Var0, &(uParam0->f_1), cVar35, 0, 0, 1);
	}
}

int func_40()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[7];
	int iVar18;

	iVar1 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &Var3);
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var3[iVar0 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18) || PLAYER::IS_PLAYER_DEAD(iVar18))
		{
		}
		else if (func_72(1048576, iVar18))
		{
			iVar2++;
		}
		iVar0++;
	}
	return iVar2;
}

void func_41(int iParam0)
{
	if (Local_13.f_11 != iParam0)
	{
		Local_13.f_11 = iParam0;
	}
}

void func_42()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_13.f_36))
	{
		func_73(Local_13.f_36);
	}
}

void func_43()
{
	int iVar0;
	struct<2> Var1;

	if (!func_74(0, 30))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	if (!func_32(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 4);
	}
	else if (!func_76(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 5);
	}
	else if (!func_78(func_77(Local_13)))
	{
		func_56(2048);
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return;
		}
		iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if ((GANG::NETWORK_IS_GANG_ID_VALID(iVar0) && GANG::NETWORK_IS_GANG_ACTIVE(iVar0)) && GANG::_NETWORK_IS_GANG_MEMBER(iVar0, PLAYER::PLAYER_ID()))
		{
			func_41(1);
			func_75(&(Local_13.f_32), 0);
		}
	}
	else if (!func_79(Local_13.f_1.f_4))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 6);
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else if (!func_81() == 0)
	{
		func_41(0);
		func_75(&(Local_13.f_32), 1);
	}
	else
	{
		if (!func_82(Local_13.f_1.f_3))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 7);
			return;
		}
		func_57(2048);
		Var1 = { func_83() };
		if (func_32(Var1))
		{
			if (!func_25(Var1, Local_13.f_1.f_4))
			{
				func_41(1);
				if (func_84() || func_14(Local_13, 262144))
				{
					func_75(&(Local_13.f_32), 0);
				}
				else
				{
					func_75(&(Local_13.f_32), 1);
				}
			}
			else
			{
				func_41(2);
				func_75(&(Local_13.f_32), 0);
			}
		}
		else
		{
			func_41(1);
			func_75(&(Local_13.f_32), 0);
		}
	}
}

void func_44()
{
	struct<8> Var0;
	int iVar8;

	if (!func_85() || !func_86(255))
	{
		return;
	}
	if (!func_14(Local_13, 32))
	{
		if (func_54(1) && !func_54(512))
		{
			if (func_87())
			{
				func_56(512);
			}
		}
		if (((!func_54(1024) && func_54(512)) && func_54(1)) && func_88(Local_13.f_13))
		{
			Local_13.f_13 = func_89("FME_HELP_CARGO");
			func_56(1024);
		}
		else if ((!func_54(128) && func_54(1)) && func_88(Local_13.f_13))
		{
			Local_13.f_13 = func_89("FME_HELP_RULES");
			func_56(128);
		}
	}
	else if (!func_54(4))
	{
		if (func_54(8))
		{
			if (func_90(Local_13.f_13))
			{
				func_53();
				return;
			}
			func_57(8);
		}
		else if (func_91())
		{
			func_56(4);
		}
		else if (func_88(Local_13.f_13) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			Var0 = { Local_13.f_22 };
			if (MISC::IS_STRING_NULL_OR_EMPTY(&Var0))
			{
				Var0 = { Local_13.f_14 };
			}
			if (func_54(16) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
			{
				iVar8 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
				if (Local_13.f_1 == 1)
				{
					Local_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_LEADER_CHALLENGES", func_92(PLAYER::GET_PLAYER_NAME(iVar8), 4.808429E-35f)));
				}
				else
				{
					Local_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_LEADER", func_92(PLAYER::GET_PLAYER_NAME(iVar8), 4.808429E-35f)));
				}
				func_56(4);
			}
			else
			{
				if (Local_13.f_1 == 1)
				{
					Local_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN_CHALLENGES", &Var0));
				}
				else
				{
					Local_13.f_13 = func_89(MISC::VAR_STRING(10, "FME_HELP_OPTED_IN", &Var0));
				}
				func_56(4);
			}
		}
	}
}

void func_45()
{
	int iVar0;
	int iVar1;

	if (!func_54(64) && func_93() != 2)
	{
		func_56(64);
	}
	if (!func_85())
	{
		return;
	}
	if (!func_54(32) && func_54(64))
	{
		if ((func_94() && func_25(func_95(), Local_13.f_1.f_4)) && func_52(Local_13, Local_13.f_1.f_4, Local_13.f_1.f_2))
		{
			func_56(32);
		}
		func_42();
		return;
	}
	if (!func_54(16))
	{
		iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
		{
			iVar1 = GANG::NETWORK_GET_GANG_LEADER(iVar0);
			if (((((iVar1 != 255 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && iVar1 != PLAYER::PLAYER_ID()) && !func_96()) && func_48(Local_13, 64, iVar1)) && func_52(Local_13, Local_13.f_1.f_4, Local_13.f_1.f_2))
			{
				if (func_97(0))
				{
					func_99(func_98(), 0);
				}
				func_56(16);
				func_42();
				return;
			}
		}
	}
	if (!func_54(1))
	{
		if ((((Local_13.f_11 >= 1 && Local_13.f_32 == 0) && !func_100()) && !func_54(2048)) && (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) || !GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
		{
			Local_13.f_36 = func_101(Local_13, Local_13.f_1, Local_13.f_1.f_2, Local_13.f_1.f_4);
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Local_13.f_36))
			{
				func_102(Local_13, Local_13.f_1.f_4);
				func_56(1);
			}
		}
	}
	else if (Local_13.f_32 == 1 || (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		func_42();
	}
}

int func_46(var uParam0)
{
	return 1;
}

void func_47()
{
	struct<2> Var0;

	if (!func_74(0, 15))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_14(Local_13, 512) && !func_94())
	{
		func_41(0);
		func_75(&(Local_13.f_32), 8);
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else
	{
		Var0 = { func_83() };
		if ((func_32(Var0) && !func_25(Var0, Local_13.f_1.f_4)) && !(func_84() || func_14(Local_13, 262144)))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 1);
		}
	}
}

bool func_48(int iParam0, int iParam1, int iParam2)
{
	return func_36(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

void func_49()
{
	struct<2> Var0;

	if (!func_74(0, 15))
	{
		return;
	}
	if (func_14(Local_13, 256))
	{
		func_41(0);
		return;
	}
	else if (func_80(&Local_13))
	{
		func_41(0);
		func_75(&(Local_13.f_32), 3);
	}
	else
	{
		Var0 = { func_83() };
		if ((func_32(Var0) && !func_25(Var0, Local_13.f_1.f_4)) && !(func_84() || func_14(Local_13, 262144)))
		{
			func_41(0);
			func_75(&(Local_13.f_32), 1);
		}
	}
}

int func_50(var uParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	iVar0 = -1;
	bVar1 = false;
	if (UIEVENTS::EVENTS_UI_IS_PENDING(iParam1))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iParam1, &vVar2))
		{
			if (func_103(uParam2))
			{
				if (func_104(uParam2, 0, 0) > 250)
				{
					switch (vVar2.x)
					{
						case -1203660660:
							if (vVar2.y == *uParam0)
							{
								if (vVar2.z == 1.747161E+36f)
								{
									if (bParam3)
									{
										bVar1 = true;
									}
									iVar0 = 0;
								}
								else if (vVar2.z == 1.089574E+12f)
								{
									if (bParam3)
									{
										bVar1 = true;
									}
									iVar0 = 1;
								}
								else if (vVar2.z == 5.316989E-23f)
								{
									if (bParam3)
									{
										bVar1 = true;
									}
									iVar0 = 2;
								}
							}
							break;
					}
				}
				if (vVar2.y == *uParam0)
				{
					UIEVENTS::EVENTS_UI_POP_MESSAGE(iParam1);
					if (bVar1)
					{
						UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(*uParam0);
					}
					return iVar0;
				}
			}
			else
			{
				func_67(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_51(int iParam0, int iParam1)
{
	func_105(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

bool func_52(int iParam0, struct<2> Param1, int iParam3)
{
	struct<2> Var0;

	if (func_12(Param1, 0, 128))
	{
		func_107(func_106(Param1), 8, 25, 255);
		return false;
	}
	func_102(iParam0, Param1);
	if (iParam0 == -1)
	{
		func_107(func_106(Param1), 8, 2, 255);
		return false;
	}
	if (Global_1206482.f_78[iParam0 /*20*/].f_3 == -1)
	{
		func_107(func_106(Param1), 8, 3, 255);
		return false;
	}
	if (func_14(iParam0, 32))
	{
		return true;
	}
	if (!func_32(Param1))
	{
		func_107(func_106(Param1), 8, 6, 255);
		return false;
	}
	else if (!func_58(Param1))
	{
		func_107(func_106(Param1), 8, 19, 255);
		return false;
	}
	else if (func_59(Param1))
	{
		func_107(func_106(Param1), 8, 23, 255);
		return false;
	}
	Var0 = { func_83() };
	if (func_32(Var0) && !func_25(Var0, Param1))
	{
		if (func_84())
		{
			func_63(iParam0, 262144);
			func_108(1);
		}
		else
		{
			func_107(func_106(Param1), 8, 24, 255);
			return false;
		}
	}
	func_109(Param1, 1, 1, 1);
	func_110(Param1, 1, 0, -1);
	func_111(2);
	func_112(Global_1206482.f_78[iParam0 /*20*/].f_3, iParam3);
	func_63(iParam0, 32);
	func_113(7);
	if (func_114(Global_1206482.f_78[iParam0 /*20*/].f_3) != -4.537018E+10f)
	{
		func_115();
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(4.052186E+20f);
	}
	else
	{
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(8.579785E-11f);
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return true;
}

void func_53()
{
	if (func_90(Local_13.f_13))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Local_13.f_13, false);
	}
}

bool func_54(int iParam0)
{
	return func_36(Local_13.f_12, iParam0);
}

void func_55(bool bParam0)
{
	if (bParam0)
	{
		Global_1951897.f_1381 = (Global_1951897.f_1381 - Global_1951897.f_1381 & 2);
	}
	else
	{
		Global_1951897.f_1381 |= 2;
	}
	func_116(bParam0);
}

void func_56(int iParam0)
{
	func_117(&(Local_13.f_12), iParam0);
}

void func_57(int iParam0)
{
	func_105(&(Local_13.f_12), iParam0);
}

bool func_58(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_118(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_59(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_118(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_60(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_119(&(Global_1203937.f_3), 32);
		func_119(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_119(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_119(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_119(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_119(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_119(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

void func_61(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_32(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_59(Param0) && !func_58(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_120(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_118(Param0) == 3)
		{
			func_121(1, -4.059512E-23f);
		}
		else if (func_118(Param0) == 4)
		{
			func_121(0, -4.059512E-23f);
		}
	}
	if ((func_118(Param0) == 3 || func_118(Param0) == 1) || ((bParam5 && func_118(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_120(Param0))))
	{
		if (iParam3 != -1)
		{
			func_122(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_122(Param0, 2, iParam4, 255, 0);
		}
	}
	func_123(Param0, 0);
	if (func_25(func_124(0), Param0))
	{
		func_125(1);
		func_126(0);
		func_127(0);
		func_128(1);
	}
	func_129(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_62(int iParam0, struct<2> Param1)
{
	struct<2> Var0;

	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	func_131(Param1, &Var0);
	func_132(0);
	func_133(1);
	if (func_114(Global_1206482.f_78[iParam0 /*20*/].f_3) == -4.537018E+10f)
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(8.579785E-11f);
		STATS::_0xE5A680A5D8B1F687(0);
	}
	else
	{
		SCRIPTS::_DEACTIVATE_GOAL_CONTEXT(4.052186E+20f);
	}
}

void func_63(int iParam0, int iParam1)
{
	func_117(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

int func_64(int iParam0)
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

bool func_65(int iParam0)
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

int func_66(int iParam0)
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

void func_67(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME();
		}
		else
		{
			*uParam0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		}
	}
	else
	{
		*uParam0 = MISC::GET_GAME_TIMER();
	}
	uParam0->f_1 = 1;
}

char* func_68(var uParam0, var uParam1)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_69(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_134(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_70(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4)
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	iVar3 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(uParam0, &vVar0, bParam4);
	return iVar3;
}

int func_71(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	int iVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = uParam1;
	Var0.f_3 = cParam2;
	iVar4 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(uParam0, &Var0, bParam5);
	return iVar4;
}

bool func_72(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

void func_73(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_135(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_136((Global_1940239.f_245.f_1306 - 1));
}

bool func_74(int iParam0, int iParam1)
{
	Local_13.f_34[iParam0]++;
	if (Local_13.f_34[iParam0] >= iParam1)
	{
		Local_13.f_34[iParam0] = 0;
		return true;
	}
	return false;
}

int func_75(var uParam0, int iParam1)
{
	if (*uParam0 != iParam1)
	{
		*uParam0 = iParam1;
		return 1;
	}
	return 0;
}

bool func_76(struct<2> Param0)
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_106(Param0));
}

int func_77(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/].f_1;
}

bool func_78(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (iParam0 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar3 = Global_1206482.f_1[iParam0 /*4*/];
		iVar1 = func_137(iParam0);
		if (iVar3 == 1020553f)
		{
			iVar2 = func_139(func_138(iParam0));
			if (iVar2 >= iVar1)
			{
				iVar0 = 1;
			}
		}
		else
		{
			iVar0 = 1;
		}
	}
	return iVar0;
}

bool func_79(struct<2> Param0)
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_106(Param0));
}

bool func_80(int iParam0)
{
	return false;
}

int func_81()
{
	return Global_1140708.f_24;
}

bool func_82(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(Global_33, "iFmeLastEventPlayed") && DECORATOR::DECOR_GET_INT(Global_33, "iFmeLastEventPlayed") == iParam0)
	{
		return false;
	}
	return true;
}

struct<2> func_83()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_124(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_124(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_84()
{
	return (func_140() != 0 || func_141(1));
}

bool func_85()
{
	int iVar0;

	if (!func_142())
	{
		return false;
	}
	iVar0 = func_143();
	if (iVar0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

bool func_86(int iParam0)
{
	return !func_144(iParam0);
}

bool func_87()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((func_145(PLAYER::PLAYER_ID(), 0) > 0 || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&uVar1, iVar0, 5, 0)) || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&uVar1, iVar0, 6, 0)) || PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&uVar1, iVar0, 4, 0))
		{
			return true;
		}
	}
	return false;
}

bool func_88(int iParam0)
{
	if (func_146())
	{
		return false;
	}
	else if (func_90(iParam0))
	{
		return false;
	}
	else if (func_144(255))
	{
		return false;
	}
	else if (Global_1048585)
	{
		return false;
	}
	else if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	return true;
}

int func_89(char* sParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	return func_147(sParam0, 10000, 0, 0, 0, 1);
}

bool func_90(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_148(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

bool func_91()
{
	return func_149(Global_1572887.f_8, 1);
}

char* func_92(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_134(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_93()
{
	if (!func_149(Global_1572887.f_196.f_43, 8))
	{
		return 2;
	}
	if (Global_1572887.f_196.f_2 != 4)
	{
		return 1;
	}
	if (Global_1572887.f_196 > 7 && Global_1572887.f_196 < 23)
	{
		return 0;
	}
	return 2;
}

bool func_94()
{
	return Global_1572887.f_72.f_40 != 1;
}

struct<2> func_95()
{
	return Global_1572887.f_72.f_11;
}

bool func_96()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_97(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_98()
{
	return Global_1915643.f_20241;
}

void func_99(int iParam0, bool bParam1)
{
	if (!func_150(iParam0))
	{
		return;
	}
	if ((bParam1 && func_151(iParam0, 512)) || (!bParam1 && !func_151(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_152(iParam0, 512);
	}
	else
	{
		func_153(iParam0, 512);
	}
	if (func_154(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_100()
{
	return func_155(UIFEED::UI_FEED_GET_CURRENT_MESSAGE(6));
}

var func_101(int iParam0, int iParam1, var uParam2, struct<2> Param3)
{
	struct<55> Var0;
	struct<8> Var55;
	int iVar63;

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
	Var55 = { func_8(iParam1, uParam2) };
	Var0.f_20 = func_156(iParam1);
	Var0.f_21 = func_157(iParam1);
	Var0.f_26 = 6;
	Var0.f_27 = func_106(Param3);
	Var0.f_25 = 180;
	if (func_114(iParam1) != -4.537018E+10f)
	{
		Var0.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE", &Var55);
		Var0.f_16 = MISC::VAR_STRING(2, &Var55);
		Var0.f_17 = MISC::VAR_STRING(2, "FME_PI_MENU_BODY");
		Var0.f_2 = -8.083521E+28f;
		Var0.f_19 = -8.083521E+28f;
	}
	else
	{
		iVar63 = Global_1205923.f_1[iParam0 /*26*/].f_7;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar63))
		{
			return 0;
		}
		Var0.f_33.f_2 = MISC::VAR_STRING(10, "FME_TOAST_OPT_IN_TITLE_POSSE_VERSUS", &Var55);
		Var0.f_16 = MISC::VAR_STRING(10, "FME_PI_MENU_TITLE_POSSE_VERSUS", PLAYER::GET_PLAYER_NAME(iVar63));
		Var0.f_17 = MISC::VAR_STRING(2, &Var55);
	}
	Var0.f_33.f_3 = MISC::VAR_STRING(2, "NM_TI_VIEW_INVITE_FREE_MODE_EVENT");
	Var0.f_33.f_6 = func_156(iParam1);
	Var0.f_33.f_7 = func_157(iParam1);
	Var0.f_33.f_17 = func_158();
	Var0.f_33.f_18 = func_159();
	Var0.f_24 = 1;
	return func_160(Var0);
}

int func_102(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_14(iParam0, 16))
	{
		return 1;
	}
	if (!func_32(Param1))
	{
		return 0;
	}
	else if (func_58(Param1))
	{
		return 0;
	}
	else if (func_59(Param1))
	{
		return 0;
	}
	func_161(Param1);
	func_63(iParam0, 16);
	return 1;
}

bool func_103(var uParam0)
{
	return uParam0->f_1;
}

int func_104(var uParam0, bool bParam1, bool bParam2)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !bParam1)
	{
		if (!bParam2)
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME());
		}
		else
		{
			return NETWORK::GET_TIME_DIFFERENCE(*uParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
		}
	}
	return NETWORK::GET_TIME_DIFFERENCE(*uParam0, MISC::GET_GAME_TIMER());
}

void func_105(var uParam0, int iParam1)
{
	func_162(uParam0, iParam1);
}

int func_106(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_163(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_107(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_164(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

int func_108(int iParam0)
{
	if (func_165())
	{
		return 0;
	}
	if (!func_84())
	{
		return 0;
	}
	if (func_166())
	{
		func_167(2);
	}
	else
	{
		func_167(1);
	}
	func_168(iParam0);
	return 1;
}

void func_109(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_32(Param0))
	{
		return;
	}
	if (!func_58(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_169(Param0);
	}
	if (!func_32(func_124(0)))
	{
		func_123(Param0, 3);
		func_125(bParam3);
		func_126(!bParam4);
		func_170(Param0, -1);
		if (bParam2 && !func_171(2))
		{
			func_172(&Global_0, 1024);
		}
		func_128(1);
	}
	else
	{
		func_170(Param0, -1);
		func_123(Param0, 4);
		func_173(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_130(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_174(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_110(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_175(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_106(Param0);
	Var0.f_3 = iParam3;
	func_176(&Var0, bParam2, iParam4);
	return 1;
}

void func_111(int iParam0)
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

void func_112(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	iVar0 = func_114(iParam0);
	if (iVar0 == -4.537018E+10f)
	{
		func_178(func_177(1.039154E+16f, -4.537018E+10f), 1);
	}
	else
	{
		func_178(func_177(1.039154E+16f, -1.088202E-21f), 1);
	}
	if (func_179(iParam0, iParam1, &fVar1))
	{
		func_178(func_177(1.039154E+16f, fVar1), 1);
	}
}

void func_113(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_180() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_181(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

int func_114(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

void func_115()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_72(1048576, PLAYER::PLAYER_ID()) || Global_1295611.f_2.f_1 == 2)
		{
			func_183();
		}
	}
	if (LAW::GET_WANTED_SCORE(Global_1295619.f_5) > 0)
	{
		if (func_184())
		{
			func_185();
		}
		func_186();
	}
}

void func_116(bool bParam0)
{
	Global_1940072.f_19 = !bParam0;
}

void func_117(var uParam0, int iParam1)
{
	func_187(uParam0, iParam1);
}

int func_118(struct<2> Param0)
{
	int iVar0;

	if (!func_32(Param0))
	{
		return -1;
	}
	iVar0 = func_188(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

void func_119(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_120(struct<2> Param0)
{
	return func_106(Param0);
}

int func_121(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_189())
	{
		return 0;
	}
	if (!func_13())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_172(&Global_0, 8);
	}
	func_172(&Global_0, 1);
	return 1;
}

void func_122(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_190(func_130(Param0));
	iVar1 = func_120(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_180() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_191(Param0, &Var2, iParam2);
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

void func_123(struct<2> Param0, int iParam2)
{
	if (!func_32(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_192(Param0);
	}
	else
	{
		func_193(Param0, iParam2);
	}
	func_194();
}

struct<2> func_124(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_195(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_196(&Global_1940186, 8388608);
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

void func_126(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_197(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_198(cVar2);
			}
			else
			{
				func_199();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_127(bool bParam0)
{
	if (!bParam0 && func_200(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_128(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_129(struct<2> Param0)
{
	return func_202(func_201(Param0));
}

int func_130(var uParam0, var uParam1)
{
	return uParam0;
}

int func_131(struct<2> Param0, var uParam2)
{
	int iVar0;

	iVar0 = func_175(Param0);
	if (func_175(Param0) < 0)
	{
		return 0;
	}
	func_203(iVar0, uParam2);
	return 1;
}

void func_132(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_180() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_204(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_205();
		Global_1900412.f_9 = func_181(Global_1893611.f_2);
		Global_1900412.f_11 = func_206(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_182(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

void func_133(bool bParam0)
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

char* func_134(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_135(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_207(95));
	if (func_148(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

void func_136(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

int func_137(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/].f_3;
}

int func_138(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 8:
		case 9:
			iVar0 = 7;
			break;
		case 11:
		case 12:
			iVar0 = 12;
			break;
		case 10:
			iVar0 = 11;
			break;
		case 13:
		case 14:
			iVar0 = 18;
			break;
		default:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_139(int iParam0)
{
	int iVar0;

	if (!func_208(iParam0))
	{
		return 0;
	}
	iVar0 = func_209(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_210(iParam0, 1);
	}
	return 0;
}

int func_140()
{
	return Global_1300340.f_150;
}

bool func_141(int iParam0)
{
	return (Global_1300340.f_288.f_2 && iParam0) != 0;
}

bool func_142()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

int func_143()
{
	if ((!SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[4]) || !SCRIPTS::IS_THREAD_ACTIVE(Global_1051645.f_16[4], false)) || !NETWORK::_NETWORK_IS_THREAD_ACTIVE(Global_1051645.f_16[4]))
	{
		return 255;
	}
	return NETWORK::NETWORK_GET_HOST_OF_THREAD(Global_1051645.f_16[4]);
}

bool func_144(int iParam0)
{
	return func_211(1, iParam0);
}

int func_145(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return func_212(0);
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return func_212(0);
	}
	return func_213(iVar0, bParam1);
}

bool func_146()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

int func_147(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_148(int iParam0)
{
	return iParam0 != 0;
}

bool func_149(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_150(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_151(int iParam0, int iParam1)
{
	if (!func_150(iParam0))
	{
		return false;
	}
	if (func_180() == -1)
	{
		return (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_152(int iParam0, int iParam1)
{
	if (!func_150(iParam0))
	{
		return;
	}
	if (func_180() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_153(int iParam0, int iParam1)
{
	if (!func_150(iParam0))
	{
		return;
	}
	if (func_180() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_154(int iParam0)
{
	if (func_214())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_155(int iParam0)
{
	int iVar0;

	if (func_148(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

float func_156(int iParam0)
{
	float fVar0;
	struct<5> Var1;

	fVar0 = -1.06008E+37f;
	if (func_27(&Var1, iParam0) && func_30(&Var1))
	{
		func_215(Var1, -9.068753E-21f, &fVar0, 0);
	}
	return fVar0;
}

var func_157(int iParam0)
{
	var uVar0;
	struct<5> Var1;

	if (func_27(&Var1, iParam0) && func_30(&Var1))
	{
		func_215(Var1, -2.193765E-07f, &uVar0, 0);
	}
	return uVar0;
}

char* func_158()
{
	return "HUD_Toast_Soundset";
}

char* func_159()
{
	return "Toast_On";
}

var func_160(struct<34> Param0, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char cVar3[64];
	char cVar11[64];

	iVar0 = func_216();
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	iVar2 = (iVar1 + Param0.f_25);
	MISC::_INT_TO_STRING(iVar1, "%i", &cVar11);
	Global_1940239.f_245.f_1308++;
	StringCopy(&cVar3, "Invite_Root_", 64);
	StringConCat(&cVar3, &cVar11, 64);
	StringConCat(&cVar3, "_", 64);
	StringIntConCat(&cVar3, Global_1940239.f_245.f_1308, 64);
	func_217(&(Global_1940239.f_245.f_14[iVar0 /*43*/]), Global_1940239.f_245.f_4, cVar3, Param0);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_39 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(88), Global_1940239.f_245.f_1308);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_41 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(89), true);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_42 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(90), false);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_37 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(78), Param0.f_32);
	if (Param0.f_32)
	{
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_36 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(76), Param0.f_31);
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_35 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(79), Param0.f_30);
	}
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_30 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(91), Param0.f_26);
	bVar15 = false;
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_38 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/], 1.46912E-13f, bVar15);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_31 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(53), Param0.f_27);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_32 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(54), Param0.f_27.f_1);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_33 = DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(92), Param0.f_27.f_2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_29 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(93), iVar2);
	Global_1940239.f_245.f_14[iVar0 /*43*/].f_28 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(94), Param0.f_24);
	func_136(Global_1940239.f_245.f_1306 + 1);
	if (Global_1940239.f_245.f_1308 == NaNf)
	{
		Global_1940239.f_245.f_1308 = 0;
	}
	if (func_218(Param0.f_26))
	{
		Param0.f_33 = 5;
		Param0.f_33.f_1 = 1;
		Param0.f_33.f_13 = 5.395881E-11f;
		Param0.f_33.f_14 = Global_1940239.f_245.f_14[iVar0 /*43*/];
		iVar16 = func_219(&(Param0.f_33));
		Global_1940239.f_245.f_14[iVar0 /*43*/].f_40 = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_245.f_14[iVar0 /*43*/], func_207(95), iVar16);
	}
	iVar17 = func_220();
	if (iVar17 == 0 || Param0.f_24 == iVar17)
	{
		Global_1940239.f_245.f_1307++;
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, 0, "pm_invite_item", Global_1940239.f_245.f_14[iVar0 /*43*/]);
	}
	return Global_1940239.f_245.f_14[iVar0 /*43*/];
}

int func_161(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	if (Global_1900530 == 15)
	{
		return -1;
	}
	if (!func_221(Param0))
	{
		return -1;
	}
	iVar1 = func_222(Param0);
	if (iVar1 >= 0)
	{
		func_223(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = Global_1900530;
		Global_1900531[iVar0 /*2*/] = { Param0 };
		Global_1900562[iVar0 /*2*/] = { Var2 };
		func_223(Param0, 1);
		Global_1900530++;
		if (Global_1900530 > 15)
		{
			Global_1900530 = 15;
		}
		return iVar0;
	}
	return -1;
}

void func_162(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_163(struct<2> Param0, bool bParam2)
{
	if (!func_32(Param0))
	{
		return false;
	}
	func_224(bParam2);
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

int func_164(int iParam0)
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

bool func_165()
{
	return func_225() != 0;
}

bool func_166()
{
	int iVar0;

	iVar0 = func_226();
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		return false;
	}
	return SCRIPTS::IS_THREAD_ACTIVE(iVar0, false);
}

void func_167(int iParam0)
{
	Global_1300340.f_288 = iParam0;
}

void func_168(int iParam0)
{
	Global_1300340.f_288.f_1 = iParam0;
}

void func_169(struct<2> Param0)
{
	struct<32> Var0;

	if (func_120(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_120(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_120(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_174(Param0, &Var0))
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

int func_170(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_201(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_227(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_228(iVar0, iParam2);
	return iParam2;
}

bool func_171(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_172(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_173(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_32(Param0))
	{
		return 0;
	}
	iVar0 = func_201(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_229(Param0, func_124(0), iParam2))
	{
		func_123(func_124(0), 3);
		func_123(func_124(iVar0), 4);
		return 0;
	}
	func_228(iVar0, 0);
	func_123(func_124(0), 3);
	func_123(func_124(1), 4);
	return 1;
}

bool func_174(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_163(Param0, &vVar0);
	if (func_230(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_175(struct<2> Param0)
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
		if (func_25(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_176(var uParam0, bool bParam1, int iParam2)
{
	func_231(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_232(func_175(uParam0->f_1));
	}
	else
	{
		func_233();
	}
}

struct<2> func_177(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_178(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_179(int iParam0, int iParam1, float fParam2)
{
	struct<5> Var0;
	var uVar5;

	if ((func_27(&Var0, iParam0) && func_28(&Var0)) && func_29(&Var0, iParam1))
	{
		if (func_215(Var0, 4.423604E-06f, &uVar5, 1))
		{
			*fParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_180()
{
	return Global_1572887.f_14;
}

int func_181(int iParam0)
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

void func_182(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_183()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_234();
	if (iVar0 > 0)
	{
		func_235(-6.064608E-06f, iVar0, 0);
	}
}

bool func_184()
{
	return (func_236(Global_1295619.f_5, 1, 0, 1) && func_237() > 0);
}

void func_185()
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_5))
	{
		return;
	}
	iVar0 = func_237();
	if (iVar0 > 0)
	{
		func_238(iVar0, 0, -5.149929E+33f, 0);
	}
}

void func_186()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	LAW::CLEAR_WANTED_SCORE(iVar0);
	func_239();
}

void func_187(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_188(struct<2> Param0)
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
	if (!func_163(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_163(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

bool func_189()
{
	return !Global_1572887.f_10;
}

int func_190(int iParam0)
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

void func_191(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_130(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_241(func_240(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_242(iVar5) == func_240(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_243(iVar4);
			if (!func_244(iVar6, 0))
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

int func_192(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_188(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_245(iVar0);
}

int func_193(struct<2> Param0, int iParam2)
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
	if (!func_163(Param0, &vVar0))
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
		func_163(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
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
			func_246(iVar9);
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

void func_194()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_163(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_195(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_196(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_197(int iParam0, int iParam1)
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

void func_198(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_199()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_200(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_247(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_248(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_249(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_201(struct<2> Param0)
{
	int iVar0;

	if (!func_32(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_25(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_202(int iParam0)
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
		func_250(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_250(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_228(iParam0, Global_1900460.f_66);
	return 1;
}

void func_203(int iParam0, var uParam1)
{
	func_251(uParam1, iParam0);
	if (Global_1205789.f_129 > 0)
	{
		if (Global_1205789.f_130 == iParam0)
		{
			func_232(0);
		}
	}
	func_233();
}

void func_204(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_205()
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

int func_206(int iParam0)
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

char* func_207(int iParam0)
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

bool func_208(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_209(int iParam0)
{
	if (!func_208(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_210(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_208(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_252(iParam0);
		if (func_253(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_254(255);
			}
			else
			{
				iVar1 = func_256(bVar0, func_255(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_257(iParam0);
		if (func_253(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_256(bVar0, func_255(1), -2.696814E-33f, 1, 0, 0);
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

bool func_211(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_258(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_259())
	{
		return func_258(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_258(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

var func_212(bool bParam0)
{
	return func_260(bParam0, Global_1901671.f_698.f_30, Global_1901671.f_698.f_29);
}

var func_213(int iParam0, bool bParam1)
{
	return func_260(bParam1, Global_1289628[iParam0 /*19*/].f_1, Global_1289628[iParam0 /*19*/]);
}

bool func_214()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

bool func_215(vector3 vParam0, int iParam3, var uParam4, float fParam5, float fParam6, bool bParam7)
{
	var uVar0;

	vParam0.f_2 = fParam5;
	uVar0 = *fParam6;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &vParam0))
	{
		*fParam6 = uVar0;
		return true;
	}
	else if (bParam7)
	{
	}
	return false;
}

int func_216()
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
			if (func_261(Var2))
			{
				func_73(Var2);
			}
			return iVar0;
		}
		iVar0++;
	}
	return func_262();
}

void func_217(var uParam0, int iParam1, char[32] cParam2, struct<24> Param10)
{
	func_263(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_207(15), Param10.f_16);
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_207(17), Param10.f_17);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(3), Param10.f_18);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(4), Param10.f_19);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(5), Param10.f_20);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(6), Param10.f_21);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(98), Param10.f_22);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(99), Param10.f_23);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(100), Param10.f_23);
}

bool func_218(var uParam0)
{
	return true;
}

int func_219(var uParam0)
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
		return func_264(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 6)
	{
		return func_265(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_15, uParam0->f_14, uParam0->f_13, uParam0->f_16, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1, uParam0->f_4, uParam0->f_21);
	}
	else if (*uParam0 == 1)
	{
		return func_266(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 3)
	{
		return func_267(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_9, uParam0->f_10, uParam0->f_11, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 2)
	{
		return func_268(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_8, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 4)
	{
		return func_269(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_5, uParam0->f_6, uParam0->f_7, uParam0->f_19, uParam0->f_4, uParam0->f_20, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	else if (*uParam0 == 0)
	{
		return func_270(func_69(uParam0->f_2, 4.808429E-35f), func_69(uParam0->f_3, 4.808429E-35f), uParam0->f_6, uParam0->f_7, uParam0->f_12, uParam0->f_17, uParam0->f_18, uParam0->f_1, 0, 1, 1);
	}
	return 0;
}

var func_220()
{
	return Global_1940239.f_245.f_1305;
}

bool func_221(struct<2> Param0)
{
	return func_118(Param0) == 0;
}

int func_222(struct<2> Param0)
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
		if (func_25(Global_1900531[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_223(struct<2> Param0, bool bParam2)
{
	if (!func_32(Param0))
	{
		return;
	}
	if (!func_221(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_271(Param0);
	}
	func_123(Param0, 1);
	bParam2 = bParam2;
}

void func_224(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_225()
{
	return Global_1300340.f_288;
}

int func_226()
{
	return Global_1300340.f_150.f_4;
}

void func_227(struct<2> Param0, int iParam2)
{
	if (!func_32(Param0))
	{
		func_250(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_110(Param0, 0, 1, -1);
}

void func_228(int iParam0, int iParam1)
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
			func_272((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_272(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_32(Global_1900460.f_1[0 /*2*/]))
	{
		func_123(Global_1900460.f_1[0 /*2*/], 3);
	}
}

bool func_229(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_32(Param0))
	{
		return false;
	}
	if (!func_32(Param2))
	{
		return true;
	}
	iVar0 = func_130(Param0);
	iVar1 = func_130(Param2);
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

bool func_230(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_273(iParam0))
	{
		return false;
	}
	if (func_274(iParam0, uParam1, &uVar0))
	{
		func_275(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_231(var uParam0, int iParam1)
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

void func_232(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_233()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_276(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

int func_234()
{
	int iVar0;

	iVar0 = Global_1295611.f_2.f_4;
	if (!func_277(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_235(int iParam0, int iParam1, int iParam2)
{
	return func_278(iParam0, iParam1, iParam2);
}

int func_236(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_279(bParam1, bParam2, bParam3);
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

int func_237()
{
	int iVar0;

	iVar0 = func_280(1.353158E-34f, 8.497754E-37f, 1, 0, 1, 0);
	if (!func_277(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

int func_238(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_281(3.996812E+36f, 1, 0) };
	Var6 = { func_282(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_283(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_284(iVar0, Var23);
	}
	return iVar0;
}

void func_239()
{
	int iVar0;

	VOLUME::_0x748C5F51A18CB8F0(false);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (func_285(iVar0))
		{
			func_286(iVar0);
		}
		iVar0++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

int func_240(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_163(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_241(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_287(&Var1, iParam0))
	{
		iVar0 = ((func_288() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_242(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_243(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_244(int iParam0, int iParam1)
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

int func_245(int iParam0)
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

int func_246(int iParam0)
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

int func_247(int iParam0, int iParam1)
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

bool func_248(int iParam0)
{
	int iVar0;

	iVar0 = func_289(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_249(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

void func_250(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_251(var uParam0, int iParam1)
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

int func_252(int iParam0)
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

bool func_253(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_254(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

struct<4> func_255(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_290(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_292(2.982335E+09f, func_291(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_292(2.982335E+09f, func_291(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_292(2.982335E+09f, func_291(), -5.45926E-19f, bParam0);
}

int func_256(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_253(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_293(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_292(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_290(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_290(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_257(int iParam0)
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

bool func_258(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_259()
{
	return Global_1102813.f_3672;
}

int func_260(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_261(struct<42> Param0, var uParam42)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0.f_41))
	{
		return DATABINDING::DATABINDING_IS_ENTRY_VALID(Param0);
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Param0.f_41);
}

int func_262()
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
	func_73(Global_1940239.f_245.f_14[iVar3 /*43*/]);
	return iVar3;
}

void func_263(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_207(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_207(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_207(70), Param10.f_15);
}

int func_264(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14, var uParam15, var uParam16)
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

int func_265(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, int iParam15, int iParam16, int iParam17, var uParam18, var uParam19)
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

int func_266(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, int iParam11, bool bParam12, bool bParam13)
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

int func_267(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, int iParam14, int iParam15, int iParam16)
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

int func_268(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, bool bParam13, bool bParam14)
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

int func_269(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13, int iParam14)
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

int func_270(char* sParam0, char* sParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8, bool bParam9, bool bParam10)
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

void func_271(struct<2> Param0)
{
	if (func_120(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_120(Param0)))
	{
		STATS::_0x99230691875FC218(func_130(Param0), func_120(Param0), Global_34);
	}
}

void func_272(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_273(int iParam0)
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

bool func_274(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_294(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_275(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_295(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_296(iVar0);
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
			uParam2->f_5 = func_297(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_298(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_299(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_300(iVar0);
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

int func_276(int iParam0)
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

bool func_277(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_180() == 0)
	{
		return func_301(iParam0);
	}
	return iParam0 <= func_302();
}

int func_278(int iParam0, int iParam1, int iParam2)
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

int func_279(bool bParam0, bool bParam1, bool bParam2)
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

int func_280(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_303(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_304(bParam0) || func_305(bParam0, 2.791187f))
	{
		return func_307(func_306(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_308(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f)
		{
			if (iParam5 != 0 && Var0[iVar32 /*2*/] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32 /*2*/].f_1;
				Jump @221; //curOff = 205
				if (Var0[iVar32 /*2*/] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

struct<5> func_281(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_255(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_309(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_292(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_310(bParam1) };
			if (iParam2 && func_311(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_312(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_312(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_313(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_314(bParam1) };
			switch (func_315(bParam0))
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
			if (func_316(bParam0, -2.580501E-27f))
			{
				Var0 = { func_292(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_316(bParam0, -4.220332E-15f))
			{
				Var0 = { func_292(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_292(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_316(bParam0, -3.171238E-21f))
			{
				Var0 = { func_292(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_317(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_316(bParam0, -3.171238E-21f))
			{
				Var0 = { func_292(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<17> func_282(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_292(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_293(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_291() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_283(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_318(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_320(func_319(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_321(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_284(int iParam0, struct<17> Param1)
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

bool func_285(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

void func_286(int iParam0)
{
	int iVar0;
	int iVar1;

	VOLUME::_0x748C5F51A18CB8F0(false);
	if (!func_285(iParam0))
	{
		return;
	}
	func_322(iParam0, 0);
	iVar0 = 0;
	while (iVar0 < 150)
	{
		if (func_323(iVar0))
		{
			if (func_325(func_324(iVar0, 1, 1)) == iParam0)
			{
				func_326(iVar0, 0);
				func_327(iVar0, 0, 350);
			}
		}
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < 17)
	{
		if (func_328(iVar1))
		{
			if (func_329(iVar1) == iParam0)
			{
				func_330(iVar1, 0);
			}
		}
		iVar1++;
	}
	VOLUME::_0x748C5F51A18CB8F0(true);
}

bool func_287(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_288()
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

int func_289(int iParam0)
{
	return func_331(iParam0) + 30;
}

int func_290(bool bParam0)
{
	if (func_180() == -1)
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

struct<4> func_291()
{
	struct<4> Var0;

	return Var0;
}

struct<4> func_292(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_253(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_290(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_293(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_333(func_332(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_294(int iParam0)
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

int func_295(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_334(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_296(int iParam0)
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

int func_297(int iParam0)
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

int func_298(int iParam0)
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

int func_299(int iParam0)
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

int func_300(int iParam0)
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

bool func_301(int iParam0)
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

int func_302()
{
	if (func_180() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_303(bool bParam0, int iParam1)
{
	if (!func_253(bParam0, 0))
	{
		return false;
	}
	if (func_304(bParam0) || func_305(bParam0, 2.791187f))
	{
		return func_335(func_306(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_304(bool bParam0)
{
	if (func_305(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

int func_305(bool bParam0, int iParam1)
{
	if (!func_253(bParam0, 0))
	{
		return func_336(func_332(bParam0), iParam1);
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

bool func_306(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_253(bParam0, 0))
	{
		return func_337(func_332(bParam0), bParam1);
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0) || Var0.f_5 == 0)
	{
		return false;
	}
	if (bParam1 && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Var0.f_5))
	{
		return false;
	}
	return Var0.f_5;
}

int func_307(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_338(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((Var0[iVar32 /*2*/] == 3.996812E+36f || Var0[iVar32 /*2*/] == 3.414007E-11f) || Var0[iVar32 /*2*/] == -2.399649E-08f)
		{
			return Var0[iVar32 /*2*/].f_1;
		}
		else if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			iVar32++;
		}
	}
	if (!bParam2)
	{
	}
	return 0;
}

bool func_308(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_253(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_339(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_309(bool bParam0)
{
	vector3 vVar0;

	if (!func_253(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_310(bool bParam0)
{
	int iVar0;

	iVar0 = func_290(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_292(8.681942E-06f, func_255(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_292(8.681942E-06f, func_255(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_292(8.681942E-06f, func_255(bParam0), -1.942248E+12f, 0);
}

int func_311(bool bParam0, bool bParam1)
{
	if (func_315(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_340();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_312(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_256(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_313(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_341(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_314(bool bParam0)
{
	int iVar0;

	iVar0 = func_290(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_292(3.507197E-29f, func_255(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_292(3.507197E-29f, func_255(bParam0), 12999093, 0);
}

int func_315(bool bParam0)
{
	struct<2> Var0;

	if (!func_253(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_316(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_315(bParam0);
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
			if (func_342(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_317(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_343(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_318(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_344(iParam1->f_8, iParam0, iVar0, 2048) || func_344(iParam1->f_8, iParam0, iVar0, 32768)) || func_344(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_344(iParam1->f_8, iParam0, iVar0, 4) || func_344(iParam1->f_8, iParam0, iVar0, 256)) || func_344(iParam1->f_8, iParam0, iVar0, 65536)) || func_344(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_344(iParam1->f_8, iParam0, iVar0, 1) || func_344(iParam1->f_8, iParam0, iVar0, 8)) || func_344(iParam1->f_8, iParam0, iVar0, 65536)) || func_344(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_344(iParam1->f_8, iParam0, iVar0, 1) || func_344(iParam1->f_8, iParam0, iVar0, 16)) || func_344(iParam1->f_8, iParam0, iVar0, 2)) || func_344(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_344(iParam1->f_8, iParam0, iVar0, 8) || func_344(iParam1->f_8, iParam0, iVar0, 4096)) || func_344(iParam1->f_8, iParam0, iVar0, 256)) || func_344(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_319(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_320(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_345(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_345(iParam1, 2, 0, 0);
	return -1;
}

int func_321(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_345(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

void func_322(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_285(iParam0))
	{
		return;
	}
	if (func_346(iParam0, 2) && !bParam1)
	{
		return;
	}
	if (bParam1)
	{
		func_347(iParam0, 1);
	}
	else
	{
		func_348(iParam0, 1);
	}
	func_349(iParam0, bParam1);
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_329(iVar0) == iParam0)
		{
			func_330(iVar0, 0);
		}
		iVar0++;
	}
}

bool func_323(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_324(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	switch (iParam0)
	{
		case 81:
			if (func_350(iParam0))
			{
				return 5.727499E-28f;
			}
			else
			{
				return -4.550262E-15f;
			}
			break;
		case 111:
			if (func_350(iParam0))
			{
				return -2.213167E-09f;
			}
			else
			{
				return -1.951939E-33f;
			}
			break;
		case 5:
			if (func_180() != -1 && func_351() == 7.153792E+09f)
			{
				return 7.153792E+09f;
			}
			else
			{
				return 5.579046E+17f;
			}
			break;
		case 66:
			return 9.269587E-37f;
		case 83:
			return 7.668727E+24f;
		case 26:
			return -1.3254E+18f;
		case 40:
			if (!bParam1 || func_180() != -1)
			{
				return 1.225169E+20f;
			}
			if (func_352(44))
			{
				return 1.225169E+20f;
			}
			else
			{
				return 2.517126E+23f;
			}
			break;
		case 98:
			if (func_180() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 3.581493E+20f;
			}
			break;
		case 70:
			return -5.202225E+07f;
		case 74:
			return 1.515653E+17f;
		case 99:
			return 0.05905914f;
		case 101:
			return -4.029773E+31f;
		case 62:
			return 1.957643E-10f;
		case 3:
			return -12802.21f;
		case 33:
			return 8.374734E-13f;
		case 87:
			if (func_180() != -1)
			{
				return 11802.65f;
			}
			else
			{
				return 6.753505E-13f;
			}
			break;
		case 37:
			return 2.333444E-32f;
		case 60:
			if (func_180() != -1)
			{
				return -0.004497551f;
			}
			else
			{
				return 3.93134E+35f;
			}
			break;
		case 135:
			return 0.0002236268f;
		case 127:
			return -4.581088E+29f;
		case 131:
			return 4.061754E+21f;
		case 121:
			return 6.18694E-30f;
		case 136:
			if (func_180() != -1)
			{
				return -2.363869E+07f;
			}
			if (!bParam1)
			{
				return 0.03422423f;
			}
			if (func_352(44))
			{
				return 0.03422423f;
			}
			else
			{
				return 4.526744E+20f;
			}
			break;
		case 22:
			return 0.0002714096f;
		case 39:
			return -9.790009E+20f;
		case 4:
		case 9:
		case 45:
		case 63:
		case 76:
		case 84:
		case 104:
			break;
		case 116:
			return -2.676368E-33f;
	}
	if (bParam2)
	{
		iVar0 = func_353(iParam0);
		if (iVar0 != -1)
		{
			return func_354(iVar0, bParam1);
		}
	}
	return 0;
}

int func_325(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

void func_326(int iParam0, bool bParam1)
{
	bool bVar0;

	if (!func_323(iParam0))
	{
		return;
	}
	bVar0 = func_355(iParam0, 1.504633E-36f);
	if (bParam1)
	{
		if (!bVar0)
		{
			func_357(iParam0, func_356());
			func_358(iParam0, 1.504633E-36f);
		}
	}
	else if (bVar0)
	{
		func_359(iParam0, 1.504633E-36f);
		func_357(iParam0, -15);
	}
	func_360(iParam0);
}

void func_327(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!func_323(iParam0))
	{
		return;
	}
	if (func_361(iParam0) && !bParam1)
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iParam0 /*36*/].f_6))
	{
		iVar0 = Global_1887363[iParam0 /*36*/].f_6;
	}
	else
	{
		iVar0 = func_362(iParam0);
	}
	bVar1 = func_355(iParam0, 9.403955E-38f);
	if (bParam1)
	{
		iVar2 = func_363(iParam0);
		if (iParam2 > iVar2)
		{
			func_364(iParam0, func_356());
			func_365(iParam0, iParam2);
		}
		if (!bVar1)
		{
			func_358(iParam0, 9.403955E-38f);
			if (VOLUME::DOES_VOLUME_EXIST(iVar0))
			{
				if (iParam0 == 40)
				{
					iVar3 = 0;
				}
				else
				{
					iVar3 = 1;
				}
				PATHFIND::_0xF2A2177AC848B3A8(iVar0, 0, iVar3);
			}
		}
	}
	else if (bVar1)
	{
		func_359(iParam0, 9.403955E-38f);
		func_364(iParam0, -15);
		if (VOLUME::DOES_VOLUME_EXIST(iVar0))
		{
			PATHFIND::_0xF2A2177AC848B3A8(iVar0, 1, 1);
		}
	}
	func_366(iParam0);
}

bool func_328(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

int func_329(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

void func_330(int iParam0, bool bParam1)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_367(iParam0, 1);
	}
	else
	{
		if (func_368(iParam0))
		{
			return;
		}
		func_369(iParam0, 1);
	}
	func_370(iParam0, bParam1);
}

int func_331(int iParam0)
{
	return iParam0 * 31;
}

bool func_332(bool bParam0)
{
	return bParam0;
}

bool func_333(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_334(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_371(iParam0, uParam1, &uVar0))
	{
		func_372(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_335(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_373(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_374(bParam0, iParam1);
	}
	return true;
}

int func_336(bool bParam0, int iParam1)
{
	if (!func_333(bParam0, 2))
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

bool func_337(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_333(bParam0, 2))
	{
		return false;
	}
	bVar0 = false;
	if ((bVar0 != 0 && bParam1) && NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return false;
	}
	return bVar0;
}

bool func_338(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_373(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, iParam1, iVar0, uParam2[iVar0 /*2*/]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_375(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_339(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_315((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_340()
{
	if (func_376(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_341(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_290(0);
	*iParam1 = { func_292(bParam0, func_310(0), fParam3, 0) };
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

bool func_342(bool bParam0, int iParam1, int iParam2)
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

int func_343(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_290(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_344(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_36(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_345(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_377(iParam0, iParam1, iParam2, iParam3);
}

bool func_346(int iParam0, int iParam1)
{
	if (!func_285(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

void func_347(int iParam0, int iParam1)
{
	if (!func_285(iParam0))
	{
		return;
	}
	if (!func_346(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 || iParam1);
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 || iParam1);
}

void func_348(int iParam0, int iParam1)
{
	if (!func_285(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_198[iParam0 /*12*/].f_5 = (Global_38.f_198[iParam0 /*12*/].f_5 - (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1));
		return;
	}
	Global_1072759.f_21262[iParam0 /*12*/].f_5 = (Global_1072759.f_21262[iParam0 /*12*/].f_5 - (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1));
}

void func_349(int iParam0, bool bParam1)
{
	if (!func_285(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_379(func_378(iParam0));
	}
	else
	{
		func_380(func_378(iParam0));
	}
}

bool func_350(int iParam0)
{
	if (!func_323(iParam0))
	{
		return false;
	}
	return func_355(iParam0, 9.403955E-38f);
}

int func_351()
{
	return Global_1939089.f_26;
}

bool func_352(int iParam0)
{
	if (!func_381(iParam0))
	{
		return false;
	}
	return func_382(iParam0);
}

int func_353(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 121)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

int func_354(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.381375E-38f;
		case 1:
			return 0.1178391f;
		case 2:
			return 3.109246E-21f;
		case 3:
			return -6.153412E-38f;
		case 4:
			if (!bParam1 || func_180() != -1)
			{
				return -7.767989E-09f;
			}
			if (func_352(44))
			{
				return -7.767989E-09f;
			}
			else
			{
				return -2.93388E-24f;
			}
			break;
		case 5:
			return -0.004497551f;
		case 6:
			return -0.004497551f;
		case 7:
			return -0.004497551f;
		case 8:
			return 1.202762E-19f;
		case 9:
			return -8.461319E-12f;
		case 10:
			return 11802.65f;
		case 11:
			return 3.193451E+19f;
		case 12:
			if (!bParam1 || func_180() != -1)
			{
				return -3.267154E+15f;
			}
			if (func_352(44))
			{
				return -3.267154E+15f;
			}
			else
			{
				return 6.111615E-34f;
			}
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			if (!bParam1 || func_180() != -1)
			{
				return -2.363869E+07f;
			}
			if (func_352(44))
			{
				return -2.363869E+07f;
			}
			else
			{
				return -5.573858E-20f;
			}
			break;
	}
	return 0;
}

bool func_355(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

int func_356()
{
	return Global_1902565;
}

void func_357(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_2 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_2 = iParam1;
}

void func_358(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] || fParam1);
	}
	else
	{
		Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] || fParam1);
	}
}

void func_359(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && fParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && fParam1));
}

void func_360(int iParam0)
{
	if (!func_323(iParam0))
	{
		return;
	}
	if (func_383(iParam0))
	{
		func_384(iParam0);
	}
	else
	{
		func_385(iParam0);
	}
}

bool func_361(int iParam0)
{
	if (!func_323(iParam0))
	{
		return false;
	}
	return func_355(iParam0, 2.350989E-38f);
}

int func_362(int iParam0)
{
	if (!func_323(iParam0))
	{
		return 0;
	}
	return Global_1887363[iParam0 /*36*/].f_4;
}

int func_363(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_323(iParam0))
	{
		return 0;
	}
	iVar0 = func_386(iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	iVar1 = func_388(func_387(iParam0));
	iVar2 = (iVar0 - iVar1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

void func_364(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/].f_1 = iParam1;
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/].f_1 = iParam1;
}

void func_365(int iParam0, int iParam1)
{
	if (!func_323(iParam0))
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	Global_8130[iParam0 /*11*/].f_3 = iParam1;
}

void func_366(int iParam0)
{
	if (!func_323(iParam0))
	{
		return;
	}
	if (func_350(iParam0) && func_389(iParam0))
	{
		func_379(func_390(iParam0, 0));
	}
	else
	{
		func_380(func_390(iParam0, 0));
	}
}

void func_367(int iParam0, int iParam1)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (!func_391(iParam0, iParam1))
	{
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] || iParam1);
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] || iParam1);
}

bool func_368(int iParam0)
{
	if (!func_328(iParam0))
	{
		return false;
	}
	return func_391(iParam0, 2);
}

void func_369(int iParam0, int iParam1)
{
	if (!func_328(iParam0))
	{
		return;
	}
	if (Global_1572887.f_14 == -1)
	{
		Global_38.f_271[iParam0] = (Global_38.f_271[iParam0] - (Global_38.f_271[iParam0] && iParam1));
		return;
	}
	Global_1072759.f_21335[iParam0] = (Global_1072759.f_21335[iParam0] - (Global_1072759.f_21335[iParam0] && iParam1));
}

void func_370(int iParam0, bool bParam1)
{
	float fVar0;

	if (!func_328(iParam0))
	{
		return;
	}
	if (iParam0 == 8)
	{
		return;
	}
	fVar0 = func_392(iParam0);
	if (bParam1)
	{
		func_379(fVar0);
	}
	else
	{
		func_380(fVar0);
	}
}

bool func_371(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_294(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_372(bool bParam0, int iParam1, var uParam2)
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

bool func_373(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_374(bool bParam0, int iParam1)
{
	struct<47> Var0;
	int iVar471;
	int iVar472;
	int iVar473;
	int iVar474;
	int iVar475;

	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUY_AWARD_ACQUIRE_COSTS(bParam0, &Var0, &iVar471, 10) || iVar471 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iVar474 < iVar471)
	{
		if (Var0[iVar474 /*47*/] == iParam1)
		{
			iVar473 = Var0[iVar474 /*47*/].f_35;
			iVar475 = 0;
			while (iVar475 < iVar473)
			{
				iVar472 = Var0[iVar474 /*47*/].f_36[iVar475];
				if (iVar472 == 0)
				{
				}
				else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar472))
				{
					return true;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return false;
}

void func_375(bool bParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	struct<2> Var7;
	struct<2> Var19;
	float fVar21[15];

	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_AWARD_COST_MODIFIERS(bParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = Var7.f_1[iVar1];
		iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIED_PRICES(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_NUMBER_OF_MODIFIERS(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_MODIFIER(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if ((*uParam2)[iVar0 /*2*/] == Var19)
							{
								fVar21[iVar0] = (fVar21[iVar0] + (Var19.f_1 - 1f));
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (fVar21[iVar0] != 1f && (uParam2[iVar0 /*2*/])->f_1 > 0)
		{
			if ((*uParam2)[iVar0 /*2*/] == 3.414007E-11f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 1000000) * 100;
			}
			else
			{
				(uParam2[iVar0 /*2*/])->f_1 = (((100 * (uParam2[iVar0 /*2*/])->f_1) * BUILTIN::ROUND((fVar21[iVar0] * 1120403456))) / 10000);
			}
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_315((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_376(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_393(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_290(bParam1), iParam0, bParam3);
}

void func_377(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_394(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_378(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.068233E-26f;
		case 3:
			return -8.540818E+13f;
		case 1:
			return 11.19643f;
		case 0:
			return 0.004328025f;
		case 4:
			return 15.34966f;
		case 5:
			return -1.716426E-27f;
		default:
			break;
	}
	return 0;
}

void func_379(int iParam0)
{
	float fVar0;

	if (func_395(iParam0) == 62)
	{
		MAP::_MAP_ENABLE_REGION_BLIP(-0.005648932f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-24.81605f, -4.726257E-15f);
		MAP::_MAP_ENABLE_REGION_BLIP(-7.185494E-26f, -4.726257E-15f);
	}
	else
	{
		fVar0 = -4.726257E-15f;
		if (((func_396(iParam0) == 4 || func_396(iParam0) == 12) || func_329(func_396(iParam0)) == 4) || (func_391(func_396(iParam0), 8) && ((func_396(iParam0) == 2 || func_396(iParam0) == 0) || func_396(iParam0) == 10)))
		{
			fVar0 = -1.036581E-08f;
		}
		MAP::_MAP_ENABLE_REGION_BLIP(iParam0, fVar0);
	}
}

void func_380(int iParam0)
{
	if (func_395(iParam0) == 62)
	{
		MAP::_MAP_DISABLE_REGION_BLIP(-0.005648932f);
		MAP::_MAP_DISABLE_REGION_BLIP(-24.81605f);
		MAP::_MAP_DISABLE_REGION_BLIP(-7.185494E-26f);
	}
	else if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iParam0, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iParam0);
	}
}

bool func_381(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_382(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_383(int iParam0)
{
	if (!func_323(iParam0))
	{
		return false;
	}
	return func_355(iParam0, 1.504633E-36f);
}

void func_384(int iParam0)
{
	char cVar0[64];
	char* sVar8;

	StringCopy(&cVar0, func_397(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_398(cVar0);
	MAP::_MAP_ENABLE_REGION_BLIP(MISC::GET_HASH_KEY(sVar8), -4.726257E-15f);
}

void func_385(int iParam0)
{
	char cVar0[64];
	char* sVar8;
	int iVar9;

	StringCopy(&cVar0, func_397(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_398(cVar0);
	iVar9 = MISC::GET_HASH_KEY(sVar8);
	if (MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -1.036581E-08f) || MAP::_MAP_IS_REGION_HIGHLIGHTED_WITH_STYLE(iVar9, -4.726257E-15f))
	{
		MAP::_MAP_DISABLE_REGION_BLIP(iVar9);
	}
}

int func_386(int iParam0)
{
	if (!func_323(iParam0))
	{
		return 0;
	}
	if (func_361(iParam0))
	{
		return -1;
	}
	return Global_8130[iParam0 /*11*/].f_3;
}

int func_387(int iParam0)
{
	if (!func_323(iParam0))
	{
		return -15;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_8130[iParam0 /*11*/].f_1;
	}
	return Global_1072759.f_19611[iParam0 /*11*/].f_1;
}

int func_388(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_399(iParam0))
	{
		return 0;
	}
	func_400(iParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5);
	fVar6 = ((((((BUILTIN::TO_FLOAT(iVar0) / 1114636288) + BUILTIN::TO_FLOAT(iVar1)) + (BUILTIN::TO_FLOAT(iVar2) * 1114636288)) + ((BUILTIN::TO_FLOAT(iVar3) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar4) * 1106477056) * 1103101952) * 1114636288)) + (((BUILTIN::TO_FLOAT(iVar5) * 1136041984) * 1103101952) * 1114636288));
	iVar7 = BUILTIN::ROUND(fVar6);
	return iVar7;
}

bool func_389(int iParam0)
{
	if (!func_323(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 26:
		case 33:
		case 37:
		case 40:
		case 62:
		case 66:
		case 81:
		case 83:
		case 99:
		case 101:
		case 111:
		case 121:
			return true;
	}
	return false;
}

int func_390(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 1.049338E+18f;
		case 2:
			return 1.498895E-22f;
		case 3:
			return -1.702218E-25f;
		case 4:
			return 2.047014E+29f;
		case 5:
			return 2.102611E-13f;
		case 6:
			return -1.094444E+23f;
		case 7:
			return -8.246098E-11f;
		case 8:
			return 0.0003337624f;
		case 9:
			return -1.945498E-13f;
		case 10:
			return -8.558729E-19f;
		case 11:
			return 2.354955E-38f;
		case 12:
			return 8.457601E+13f;
		case 13:
			return 3.274443E-19f;
		case 14:
			return 0.0005826025f;
		case 15:
			return 6.104771E-23f;
		case 16:
			return -3.247849E-35f;
		case 17:
			return 6.796195E-24f;
		case 18:
			return -4.880347E-24f;
		case 19:
			return 1.469572E+26f;
		case 20:
			return 6.687569E+34f;
		case 21:
			return 2.750939E-11f;
		case 22:
			return -0.1062356f;
		case 24:
			return -1.784405f;
		case 23:
			return -1.21609f;
		case 25:
			return 3.29758E+38f;
		case 26:
			return 14587.68f;
		case 27:
			return 8.223601E-11f;
		case 28:
			return 3197.742f;
		case 30:
			return -5.451207E+32f;
		case 29:
			return 2.46961E+34f;
		case 31:
			return 8.012324E+07f;
		case 32:
			return -6.24719E-28f;
		case 33:
			return 8.781186E-12f;
		case 34:
			return 2.666268E+20f;
		case 35:
			return 5.365568E-25f;
		case 36:
			return 9.694758f;
		case 37:
			return 3.661959E-22f;
		case 38:
			return -8.077674E-12f;
		case 39:
			return -2.423394E+33f;
		case 40:
			return 5.494265E+13f;
		case 41:
			return 1.934011E-33f;
		case 42:
			return 4.019232E+08f;
		case 43:
			return 2.296171f;
		case 53:
			return 6.549141f;
		case 54:
			return -2.545939E-25f;
		case 44:
			return 341095f;
		case 55:
			return -1.732738E-13f;
		case 45:
			return -6.015189E-35f;
		case 56:
			return -2.592482E+17f;
		case 46:
			return 4.27727E-10f;
		case 57:
			return -1.441672E+16f;
		case 47:
			return -15159.68f;
		case 48:
			return 9.085946E-29f;
		case 49:
			return -1.725231E+22f;
		case 50:
			return -2.348099E+36f;
		case 51:
			return -8.518072E-29f;
		case 58:
			return -3.843981E-31f;
		case 59:
			return -6.084368E+13f;
		case 60:
			return -0.003789695f;
		case 52:
			return 2.81243E-25f;
		case 61:
			return -2.810075E+07f;
		case 62:
			return 2.66865E-24f;
		case 63:
			return -2.399166E+33f;
		case 64:
			return -5.385402E-22f;
		case 65:
			return 2.6504E+31f;
		case 66:
			return 1.120495E+28f;
		case 67:
			return 2.302714E-06f;
		case 69:
			return 2.022597E+27f;
		case 70:
			return 8.50011E+35f;
		case 71:
			return -1.834545E+31f;
		case 72:
			return 2.681125E+26f;
		case 73:
			return NaNf;
		case 74:
			return 1.94863E+28f;
			return -2.233904E-18f;
			return 2.177862E+38f;
			return -1.372755E-12f;
			return 3.486547E-10f;
			return 1.805301E+38f;
			return 1.290267E+23f;
			return joaat("REGION_HRT_VALENTINE");
			return 3.541437E+37f;
			return 1.340204E-32f;
			return 12823.88f;
			return 2.498765E-17f;
			return 2.724825E-19f;
			return -4.018006E-17f;
			return -1.794133E-19f;
			return -1.311699E+07f;
			return -7.308199E-13f;
			return 0.01935584f;
			return -4.311316E-05f;
			return -4.75276E-20f;
			return -2.51251E+22f;
			return -504140.1f;
			return -1.291509E+14f;
			return 2.353091E-37f;
			return 1.686618E+10f;
			return 1.087588E-16f;
			return -4.384771E+36f;
			return -6.742055E+12f;
			return -1.641191E+11f;
			return 1.774577E+09f;
			return -1.986649E+22f;
			return -5.46941E-14f;
			return 1.061583E-32f;
			return -3.406536E-22f;
			return 2.459217E-13f;
			return -5.444849E+37f;
			return -1.291923E-23f;
			return -5.755611E+19f;
			return -2.08496E+12f;
			return -4.807343E-05f;
			return -9.123408E-32f;
			return -1.759319E-08f;
			return -3.056887E+17f;
			return 3.529603E-07f;
			return NaNf;
			return -14.87718f;
			return -1.840224E-13f;
			return 8.661269E-15f;
			return 1.384722E-08f;
			return 1.920854E+23f;
			return -2.45758E-18f;
			return 8.848738E+10f;
			return -2.729886E+12f;
			return 1.278004E+19f;
			return -1.288943E+33f;
			return -1.683166E-13f;
			return -1.461573E+35f;
			return 1.183602E-14f;
			return 7.453607E+28f;
			return -8.878077E+35f;
			return 8.947486E-31f;
			return 2.254247E+37f;
			return -2.125533E-11f;
			return -6.859215E-38f;
			return -6.28234E+18f;
			return 7.715836E+17f;
			return 2.629307E-15f;
			if (bParam1)
			{
				return 7.087189E+24f;
			}
			return 0;
		}

bool func_391(int iParam0, int iParam1)
{
	if (!func_328(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

float func_392(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.087393E-14f;
		case 1:
			return -1.259349E-30f;
		case 2:
			return 1.498807E-37f;
		case 3:
			return 1.264142E+30f;
		case 4:
			return 3.69772E-30f;
		case 5:
			return -1.30807E-28f;
		case 6:
			return -8.966356E-27f;
		case 7:
			return -2.697481E+12f;
		case 8:
			return -1663469f;
		case 9:
			return 4.089406E+30f;
		case 10:
			return 1.82543E-09f;
		case 11:
			return 7.133003E-32f;
		case 12:
			return 9.458759E+32f;
		case 15:
			return -1.888375E-23f;
		case 13:
			return 0.001473694f;
		case 16:
			return 1.008257E-07f;
		case 14:
			return -2.892827E+12f;
		default:
			break;
	}
	return 3.540176E+25f;
}

bool func_393(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_394(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_401(&(uParam0->f_4));
}

int func_395(int iParam0)
{
	switch (iParam0)
	{
		case -2085163631:
			return 0;
		case joaat("REGION_BAY_CRAWDADWILLIES"):
			return 0;
		case joaat("REGION_BAY_MACOMBS_END"):
			return 1;
		case joaat("REGION_BAY_MERKINSWALLER"):
			return 2;
		case joaat("REGION_BAY_LAGRAS"):
			return 3;
		case joaat("REGION_BAY_LAKAY"):
			return 4;
		case joaat("REGION_BAY_SAINT_DENIS"):
			return 5;
		case joaat("REGION_BAY_ORANGE_PLANTATION"):
			return 6;
		case joaat("REGION_BAY_SERIAL_KILLER"):
			return 7;
		case joaat("REGION_BAY_SERENDIPITY"):
			return 8;
		case joaat("REGION_BAY_SHADYBELLE"):
			return 9;
		case joaat("REGION_BAY_SILTWATERSTRAND"):
			return 10;
		case joaat("REGION_BGV_APPLESEEDTIMBER"):
			return 11;
		case joaat("REGION_BGV_BERYLS_DREAM"):
			return 12;
		case joaat("REGION_BGV_BLACKBONEFOREST_TRAPPER"):
			return 13;
		case joaat("REGION_BGV_DAKOTARIVER_TRAPPER"):
			return 14;
		case joaat("REGION_BGV_FORTRIGGS"):
			return 15;
		case joaat("REGION_BGV_HANGINGDOG"):
			return 16;
		case joaat("REGION_BGV_LONEMULESTEAD"):
			return 17;
		case joaat("REGION_BGV_MISSING_HUSBAND"):
			return 18;
		case joaat("REGION_BGV_MONTO_REST"):
			return 19;
		case joaat("REGION_BGV_OWANJILA_DAM"):
			return 20;
		case joaat("REGION_BGV_PAINTEDSKY"):
			return 21;
		case joaat("REGION_BGV_PRONGHORN"):
			return 22;
		case joaat("REGION_BGV_RIGGS_STATION"):
			return 23;
		case joaat("REGION_BGV_SHACK"):
			return 24;
		case joaat("REGION_BGV_SHEPHERDS_RISE"):
			return 25;
		case joaat("REGION_BGV_STRAWBERRY"):
			return 26;
		case joaat("REGION_BGV_VALLEY_VIEW"):
			return 27;
		case joaat("REGION_BGV_WATSONSCABIN"):
			return 30;
		case joaat("REGION_BGV_OLD_MAN_JONES"):
			return 29;
		case joaat("REGION_BLU_CANEBREAK_MANOR"):
			return 31;
		case joaat("REGION_BLU_COPPERHEAD"):
			return 32;
		case joaat("REGION_BLU_SISIKA"):
			return 33;
		case joaat("REGION_BLU_TRAVELLING_SALESMAN"):
			return 34;
		case joaat("REGION_CML_BACCHUSBRIDGE"):
			return 35;
		case joaat("REGION_CML_DINO_LADY"):
			return 36;
		case joaat("REGION_CML_OLDFORTWALLACE"):
			return 37;
		case joaat("REGION_CML_SIXPOINTCABIN"):
			return 38;
		case joaat("REGION_GRT_BEECHERS"):
			return 39;
		case joaat("REGION_GRT_BLACKWATER"):
			return 40;
		case joaat("REGION_GRT_QUAKERS_COVE"):
			return 41;
		case joaat("REGION_GRZ_ADLERRANCH"):
			return 42;
		case joaat("REGION_GRZ_DEAD_RIVAL"):
			return 43;
		case joaat("REGION_GRZ_CALUMETRAVINE"):
			return 53;
		case joaat("REGION_GRE_CIVIL_WAR_BRIDE"):
			return 54;
		case joaat("REGION_GRZ_CHEZPORTER"):
			return 44;
		case joaat("REGION_GRZ_COHUTTA"):
			return 55;
		case joaat("REGION_GRZ_COLTER"):
			return 45;
		case joaat("REGION_GRZ_COTORRA_SPRINGS"):
			return 56;
		case joaat("REGION_GRZ_FROZEN_EXPLORER"):
			return 46;
		case joaat("REGION_GRZ_GUNFIGHT"):
			return 57;
		case joaat("REGION_GRZ_MILLESANI_CLAIM"):
			return 47;
		case joaat("REGION_GRZ_MOUNTAIN_MAN"):
			return 48;
		case joaat("REGION_GRZ_MOUNT_HAGEN_PEAK"):
			return 49;
		case joaat("REGION_GRZ_STARVING_CHILDREN"):
			return 50;
		case joaat("REGION_GRZ_TEMPEST_RIM"):
			return 51;
		case joaat("REGION_GRZ_THELOFT"):
			return 58;
		case joaat("REGION_BGV_WALLACE_STATION"):
			return 28;
		case joaat("REGION_GRE_VETERAN"):
			return 59;
		case joaat("REGION_GRZ_WAPITI"):
			return 60;
		case joaat("REGION_GRZ_WINTERMINING_TOWN"):
			return 52;
		case joaat("REGION_GRZ_TRAVELLING_SALESMAN"):
			return 61;
		case joaat("REGION_GUA_AGUASDULCES"):
			return 62;
		case joaat("REGION_GUA_CAMP"):
			return 63;
		case joaat("REGION_GUA_CINCOTORRES"):
			return 64;
		case joaat("REGION_GUA_LACAPILLA"):
			return 65;
		case joaat("REGION_GUA_MANICATO"):
			return 66;
		case joaat("REGION_HRT_ABANDONED_MILL"):
			return 67;
		case joaat("REGION_HRT_CARMODYDELL"):
			return 69;
		case joaat("REGION_HRT_CORNWALLKEROSENE"):
			return 70;
		case joaat("REGION_HRT_CROP_FARM"):
			return 71;
		case joaat("REGION_HRT_CUMBERLANDFALLS"):
			return 72;
		case joaat("REGION_HRT_DOWNSRANCH"):
			return 73;
		case joaat("REGION_HRT_EMERALDRANCH"):
			return 74;
		case joaat("REGION_HRT_GRANGERS_HOGGERY"):
			return 75;
		case joaat("REGION_HRT_HORSESHOEOVERLOOK"):
			return 76;
		case joaat("REGION_HRT_LARNEDSOD"):
			return 77;
		case joaat("REGION_HRT_LOONY_CULT"):
			return 78;
		case joaat("REGION_HRT_LUCKYSCABIN"):
			return 79;
		case joaat("REGION_HRT_SWANSONS_STATION"):
			return 80;
		case joaat("REGION_HRT_VALENTINE"):
			return 81;
		case joaat("REGION_ROA_ABERDEENPIGFARM"):
			return 82;
		case joaat("REGION_ROA_ANNESBURG"):
			return 83;
		case joaat("REGION_ROA_BEECHERS_C"):
			return 68;
		case joaat("REGION_ROA_BEAVERHOLLOW"):
			return 84;
		case joaat("REGION_ROA_BLACK_BALSAM_RISE"):
			return 85;
		case joaat("REGION_ROA_BRANDYWINE_DROP"):
			return 86;
		case joaat("REGION_ROA_BUTCHERCREEK"):
			return 87;
		case joaat("REGION_ROA_DOVERHILL"):
			return 88;
		case joaat("REGION_ROA_HAPPY_FAMILY"):
			return 89;
		case joaat("REGION_ROA_ISOLATIONIST"):
			return 90;
		case joaat("REGION_ROA_MACLEANSHOUSE"):
			return 91;
		case joaat("REGION_ROA_MOSSY_FLATS"):
			return 92;
		case joaat("REGION_ROA_ROANOKE_VALLEY"):
			return 93;
		case joaat("REGION_ROA_ROCKYSEVEN"):
			return 94;
		case joaat("REGION_ROA_TRAPPER"):
			return 95;
		case joaat("REGION_ROA_VANHORNMANSION"):
			return 97;
		case joaat("REGION_ROA_VANHORNPOST"):
			return 98;
		case joaat("REGION_ROA_OLD_MAN_JONES"):
			return 96;
		case joaat("REGION_SCM_BRAITHWAITEMANOR"):
			return 99;
		case joaat("REGION_SCM_BULGERGLADE"):
			return 100;
		case joaat("REGION_SCM_CALIGAHALL"):
			return 101;
		case joaat("REGION_SCM_CATFISHJACKSONS"):
			return 102;
		case joaat("REGION_SCM_CLEMENSCOVE"):
			return 103;
		case joaat("REGION_SCM_CLEMENSPOINT"):
			return 104;
		case joaat("REGION_SCM_HORSE_SHOP"):
			return 107;
		case joaat("REGION_SCM_LONNIESSHACK"):
			return 108;
		case joaat("REGION_SCM_LOVE_TRIANGLE"):
			return 109;
		case joaat("REGION_SCM_COMPSONS_STEAD"):
			return 105;
		case joaat("REGION_SCM_DAIRY_FARM"):
			return 106;
		case joaat("REGION_SCM_RADLEYS_PASTURE"):
			return 110;
		case joaat("REGION_SCM_RHODES"):
			return 111;
		case joaat("REGION_SCM_SLAVE_PEN"):
			return 112;
		case joaat("REGION_TAL_AURORA_BASIN"):
			return 113;
		case joaat("REGION_TAL_DEAD_SETTLER"):
			return 114;
		case joaat("REGION_TAL_COCHINAY"):
			return 115;
		case joaat("REGION_TAL_MANZANITAPOST"):
			return 116;
		case joaat("REGION_TAL_PACIFICUNIONRR"):
			return 117;
		case joaat("REGION_TAL_TANNERSREACH"):
			return 118;
		case joaat("REGION_TAL_TRAPPER"):
			return 119;
		case joaat("REGION_HEN_MACFARLANES_RANCH"):
			return 135;
		case joaat("REGION_HEN_THIEVES_LANDING"):
			return 136;
		case joaat("REGION_HEN_TRAVELLING_SALESMAN"):
			return 137;
		case -1573562784:
			return 138;
		case joaat("REGION_CHO_ARMADILLO"):
			return 127;
		case joaat("REGION_CHO_COOTS_CHAPEL"):
			return 128;
		case joaat("REGION_CHO_DON_JULIO_HOUSE"):
			return 129;
		case joaat("REGION_CHO_RIDGEWOOD_FARM"):
			return 131;
		case joaat("REGION_CHO_RILEYS_CHARGE"):
			return 130;
		case joaat("REGION_CHO_TWIN_ROCKS"):
			return 132;
		case joaat("REGION_CHO_TRAVELLING_SALESMAN"):
			return 133;
		case 1869665995:
			return 134;
		case joaat("REGION_GAP_GAPTOOTH_BREACH"):
			return 120;
		case joaat("REGION_GAP_TUMBLEWEED"):
			return 121;
		case joaat("REGION_GAP_RATHSKELLER_FORK"):
			return 122;
		case joaat("REGION_RIO_BENEDICT_POINT"):
			return 123;
		case joaat("REGION_RIO_FORT_MERCER"):
			return 124;
		case joaat("REGION_RIO_PLAIN_VIEW"):
			return 125;
		case joaat("REGION_RIO_TRAVELLING_SALESMAN"):
			return 126;
		case joaat("REGION_CENTRALUNIONRR"):
			return 139;
		default:
			break;
	}
	return -1;
}

int func_396(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DISTRICT_BAYOU_NWA"):
			return 0;
		case joaat("DISTRICT_BIG_VALLEY"):
			return 1;
		case joaat("DISTRICT_BLUEGILL_MARSH"):
			return 2;
		case joaat("DISTRICT_CUMBERLAND_FOREST"):
			return 3;
		case joaat("DISTRICT_GREAT_PLAINS"):
			return 4;
		case joaat("DISTRICT_GRIZZLIES"):
			return 5;
		case joaat("DISTRICT_GRIZZLIES_EAST"):
			return 6;
		case joaat("DISTRICT_GRIZZLIES_WEST"):
			return 7;
		case joaat("DISTRICT_GUAMA"):
			return 8;
		case joaat("DISTRICT_HEARTLAND"):
			return 9;
		case joaat("DISTRICT_ROANOKE_RIDGE"):
			return 10;
		case joaat("DISTRICT_SCARLETT_MEADOWS"):
			return 11;
		case joaat("DISTRICT_TALL_TREES"):
			return 12;
		case joaat("DISTRICT_GAPTOOTH_RIDGE"):
			return 13;
		case joaat("DISTRICT_RIO_BRAVO"):
			return 14;
		case joaat("DISTRICT_CHOLLA_SPRINGS"):
			return 15;
		case joaat("DISTRICT_HENNIGANS_STEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

char* func_397(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "REGION_INVALID";
		case 0:
			return "REGION_BAY_CRAWDADWILLIES";
		case 1:
			return "REGION_BAY_MACOMBS_END";
		case 2:
			return "REGION_BAY_MERKINSWALLER";
		case 3:
			return "REGION_BAY_LAGRAS";
		case 4:
			return "REGION_BAY_LAKAY";
		case 5:
			return "REGION_BAY_SAINT_DENIS";
		case 6:
			return "REGION_BAY_ORANGE_PLANTATION";
		case 7:
			return "REGION_BAY_SERIAL_KILLER";
		case 8:
			return "REGION_BAY_SERENDIPITY";
		case 9:
			return "REGION_BAY_SHADYBELLE";
		case 10:
			return "REGION_BAY_SILTWATERSTRAND";
		case 11:
			return "REGION_BGV_APPLESEEDTIMBER";
		case 12:
			return "REGION_BGV_BERYLS_DREAM";
		case 13:
			return "REGION_BGV_BLACKBONEFOREST_TRAPPER";
		case 14:
			return "REGION_BGV_DAKOTARIVER_TRAPPER";
		case 15:
			return "REGION_BGV_FORTRIGGS";
		case 16:
			return "REGION_BGV_HANGINGDOG";
		case 17:
			return "REGION_BGV_LONEMULESTEAD";
		case 18:
			return "REGION_BGV_MISSING_HUSBAND";
		case 19:
			return "REGION_BGV_MONTO_REST";
		case 20:
			return "REGION_BGV_OWANJILA_DAM";
		case 21:
			return "REGION_BGV_PAINTEDSKY";
		case 22:
			return "REGION_BGV_PRONGHORN";
		case 23:
			return "REGION_BGV_RIGGS_STATION";
		case 24:
			return "REGION_BGV_SHACK";
		case 25:
			return "REGION_BGV_SHEPHERDS_RISE";
		case 26:
			return "REGION_BGV_STRAWBERRY";
		case 27:
			return "REGION_BGV_VALLEY_VIEW";
		case 28:
			return "REGION_BGV_WALLACE_STATION";
		case 30:
			return "REGION_BGV_WATSONSCABIN";
		case 29:
			return "REGION_BGV_OLD_MAN_JONES";
		case 31:
			return "REGION_BLU_CANEBREAK_MANOR";
		case 32:
			return "REGION_BLU_COPPERHEAD";
		case 33:
			return "REGION_BLU_SISIKA";
		case 34:
			return "REGION_BLU_TRAVELLING_SALESMAN";
		case 35:
			return "REGION_CML_BACCHUSBRIDGE";
		case 36:
			return "REGION_CML_DINO_LADY";
		case 37:
			return "REGION_CML_OLDFORTWALLACE";
		case 38:
			return "REGION_CML_SIXPOINTCABIN";
		case 39:
			return "REGION_GRT_BEECHERS";
		case 40:
			return "REGION_GRT_BLACKWATER";
		case 41:
			return "REGION_GRT_QUAKERS_COVE";
		case 42:
			return "REGION_GRZ_ADLERRANCH";
		case 43:
			return "REGION_GRZ_DEAD_RIVAL";
		case 53:
			return "REGION_GRZ_CALUMETRAVINE";
		case 54:
			return "REGION_GRE_CIVIL_WAR_BRIDE";
		case 44:
			return "REGION_GRZ_CHEZPORTER";
		case 55:
			return "REGION_GRZ_COHUTTA";
		case 45:
			return "REGION_GRZ_COLTER";
		case 56:
			return "REGION_GRZ_COTORRA_SPRINGS";
		case 46:
			return "REGION_GRZ_FROZEN_EXPLORER";
		case 57:
			return "REGION_GRZ_GUNFIGHT";
		case 47:
			return "REGION_GRZ_MILLESANI_CLAIM";
		case 48:
			return "REGION_GRZ_MOUNTAIN_MAN";
		case 49:
			return "REGION_GRZ_MOUNT_HAGEN_PEAK";
		case 50:
			return "REGION_GRZ_STARVING_CHILDREN";
		case 51:
			return "REGION_GRZ_TEMPEST_RIM";
		case 58:
			return "REGION_GRZ_THELOFT";
		case 59:
			return "REGION_GRE_VETERAN";
		case 60:
			return "REGION_GRZ_WAPITI";
		case 52:
			return "REGION_GRZ_WINTERMINING_TOWN";
		case 61:
			return "REGION_GRZ_TRAVELLING_SALESMAN";
		case 62:
			return "REGION_GUA_AGUASDULCES";
		case 63:
			return "REGION_GUA_CAMP";
		case 64:
			return "REGION_GUA_CINCOTORRES";
		case 65:
			return "REGION_GUA_LACAPILLA";
		case 66:
			return "REGION_GUA_MANICATO";
		case 67:
			return "REGION_HRT_ABANDONED_MILL";
		case 69:
			return "REGION_HRT_CARMODYDELL";
		case 70:
			return "REGION_HRT_CORNWALLKEROSENE";
		case 71:
			return "REGION_HRT_CROP_FARM";
		case 72:
			return "REGION_HRT_CUMBERLANDFALLS";
		case 73:
			return "REGION_HRT_DOWNSRANCH";
		case 74:
			return "REGION_HRT_EMERALDRANCH";
		case 75:
			return "REGION_HRT_GRANGERS_HOGGERY";
		case 76:
			return "REGION_HRT_HORSESHOEOVERLOOK";
		case 77:
			return "REGION_HRT_LARNEDSOD";
		case 78:
			return "REGION_HRT_LOONY_CULT";
		case 79:
			return "REGION_HRT_LUCKYSCABIN";
		case 80:
			return "REGION_HRT_SWANSONS_STATION";
		case 81:
			return "REGION_HRT_VALENTINE";
		case 82:
			return "REGION_ROA_ABERDEENPIGFARM";
		case 83:
			return "REGION_ROA_ANNESBURG";
		case 84:
			return "REGION_ROA_BEAVERHOLLOW";
		case 68:
			return "REGION_ROA_BEECHERS_C";
		case 85:
			return "REGION_ROA_BLACK_BALSAM_RISE";
		case 86:
			return "REGION_ROA_BRANDYWINE_DROP";
		case 87:
			return "REGION_ROA_BUTCHERCREEK";
		case 88:
			return "REGION_ROA_DOVERHILL";
		case 89:
			return "REGION_ROA_HAPPY_FAMILY";
		case 90:
			return "REGION_ROA_ISOLATIONIST";
		case 91:
			return "REGION_ROA_MACLEANSHOUSE";
		case 92:
			return "REGION_ROA_MOSSY_FLATS";
		case 93:
			return "REGION_ROA_ROANOKE_VALLEY";
		case 94:
			return "REGION_ROA_ROCKYSEVEN";
		case 95:
			return "REGION_ROA_TRAPPER";
		case 97:
			return "REGION_ROA_VANHORNMANSION";
		case 98:
			return "REGION_ROA_VANHORNPOST";
		case 96:
			return "REGION_ROA_OLD_MAN_JONES";
		case 99:
			return "REGION_SCM_BRAITHWAITEMANOR";
		case 100:
			return "REGION_SCM_BULGERGLADE";
		case 101:
			return "REGION_SCM_CALIGAHALL";
		case 102:
			return "REGION_SCM_CATFISHJACKSONS";
		case 103:
			return "REGION_SCM_CLEMENSCOVE";
		case 104:
			return "REGION_SCM_CLEMENSPOINT";
		case 105:
			return "REGION_SCM_COMPSONS_STEAD";
		case 106:
			return "REGION_SCM_DAIRY_FARM";
		case 107:
			return "REGION_SCM_HORSE_SHOP";
		case 108:
			return "REGION_SCM_LONNIESSHACK";
		case 109:
			return "REGION_SCM_LOVE_TRIANGLE";
		case 110:
			return "REGION_SCM_RADLEYS_PASTURE";
		case 111:
			return "REGION_SCM_RHODES";
		case 112:
			return "REGION_SCM_SLAVE_PEN";
		case 113:
			return "REGION_TAL_AURORA_BASIN";
		case 114:
			return "REGION_TAL_DEAD_SETTLER";
		case 115:
			return "REGION_TAL_COCHINAY";
		case 116:
			return "REGION_TAL_MANZANITAPOST";
		case 117:
			return "REGION_TAL_PACIFICUNIONRR";
		case 118:
			return "REGION_TAL_TANNERSREACH";
		case 119:
			return "REGION_TAL_TRAPPER";
		case 135:
			return "REGION_HEN_MACFARLANES_RANCH";
		case 136:
			return "REGION_HEN_THIEVES_LANDING";
		case 137:
			return "REGION_HEN_TRAVELLING_SALESMAN";
		case 138:
			return "REGION_HEN_HARRIET";
		case 127:
			return "REGION_CHO_ARMADILLO";
		case 128:
			return "REGION_CHO_COOTS_CHAPEL";
		case 129:
			return "REGION_CHO_DON_JULIO_HOUSE";
		case 131:
			return "REGION_CHO_RIDGEWOOD_FARM";
		case 130:
			return "REGION_CHO_RILEYS_CHARGE";
		case 132:
			return "REGION_CHO_TWIN_ROCKS";
		case 133:
			return "REGION_CHO_TRAVELLING_SALESMAN";
		case 134:
			return "REGION_CHO_TRAPPER";
		case 120:
			return "REGION_GAP_GAPTOOTH_BREACH";
		case 121:
			return "REGION_GAP_TUMBLEWEED";
		case 122:
			return "REGION_GAP_RATHSKELLER_FORK";
		case 123:
			return "REGION_RIO_BENEDICT_POINT";
		case 124:
			return "REGION_RIO_FORT_MERCER";
		case 125:
			return "REGION_RIO_PLAIN_VIEW";
		case 126:
			return "REGION_RIO_TRAVELLING_SALESMAN";
		case 139:
			return "REGION_CENTRALUNIONRR";
		default:
			break;
	}
	return "REGION_INVALID";
	return "REGION_INVALID";
}

char* func_398(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_399(int iParam0)
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
	iVar0 = func_402(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_403(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_404(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_405(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_406(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_407(iParam0);
	if (iVar5 < 1 || iVar5 > func_408(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

void func_400(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_409(func_356(), iParam0, iParam1, iParam2, iParam3, iParam4, iParam5, iParam6);
}

void func_401(var uParam0)
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

int func_402(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_403(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_404(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_405(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_260(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_406(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_407(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_408(int iParam0, int iParam1)
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

void func_409(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_410(iParam0, iParam1, 1))
	{
		iVar0 = func_406(iParam1);
		iVar1 = func_405(iParam0);
		iVar2 = (func_405(iParam0) - func_405(iParam1));
		iVar3 = (func_406(iParam0) - func_406(iParam1));
		iVar4 = (func_407(iParam0) - func_407(iParam1));
		iVar5 = (func_404(iParam0) - func_404(iParam1));
		iVar6 = (func_403(iParam0) - func_403(iParam1));
		iVar7 = (func_402(iParam0) - func_402(iParam1));
	}
	else
	{
		iVar0 = func_406(iParam0);
		iVar1 = func_405(iParam1);
		iVar2 = (func_405(iParam1) - func_405(iParam0));
		iVar3 = (func_406(iParam1) - func_406(iParam0));
		iVar4 = (func_407(iParam1) - func_407(iParam0));
		iVar5 = (func_404(iParam1) - func_404(iParam0));
		iVar6 = (func_403(iParam1) - func_403(iParam0));
		iVar7 = (func_402(iParam1) - func_402(iParam0));
	}
	while (iVar7 < 0)
	{
		iVar7 += 60;
		iVar6 = (iVar6 - 1);
	}
	while (iVar7 > 59)
	{
		iVar7 = (iVar7 - 60);
		iVar6++;
	}
	while (iVar6 < 0)
	{
		iVar6 += 60;
		iVar5 = (iVar5 - 1);
	}
	while (iVar6 > 59)
	{
		iVar6 = (iVar6 - 60);
		iVar5++;
	}
	while (iVar5 < 0)
	{
		iVar5 += 24;
		iVar4 = (iVar4 - 1);
	}
	while (iVar5 > 23)
	{
		iVar5 = (iVar5 - 24);
		iVar4++;
	}
	while (iVar4 < 0)
	{
		while (iVar3 < 0)
		{
			iVar3 += 12;
			iVar2 = (iVar2 - 1);
		}
		iVar4 = (iVar4 + func_408(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_411(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 1094713344 /* Float: 12f */));
	}
	while (iVar3 < 0)
	{
		iVar3 += 12;
		iVar2 = (iVar2 - 1);
	}
	while (iVar3 > 12)
	{
		iVar3 = (iVar3 - 12);
		iVar2++;
	}
	*iParam2 = iVar7;
	*iParam3 = iVar6;
	*iParam4 = iVar5;
	*iParam5 = iVar4;
	*iParam6 = iVar3;
	*iParam7 = iVar2;
}

bool func_410(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_399(iParam1) || !func_399(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

float func_411(float fParam0, float fParam1, float fParam2)
{
	float fVar0;

	if (fParam1 == fParam2)
	{
		return fParam1;
	}
	fVar0 = (fParam2 - fParam1);
	fParam0 = (fParam0 - (IntToFloat(BUILTIN::ROUND(((fParam0 - fParam1) / fVar0))) * fVar0));
	if (fParam0 < fParam1)
	{
		fParam0 = (fParam0 + fVar0);
	}
	return fParam0;
}

