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
	bool bVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(512))
	{
		if (PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() == 2)
		{
		}
		func_1();
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (func_2() == -1)
	{
		while (!func_3(64))
		{
			BUILTIN::WAIT(0);
		}
	}
	func_4();
	bVar0 = false;
	while (!bVar0)
	{
		if (func_2() != -1)
		{
			if (func_5(1, 1))
			{
				bVar0 = true;
			}
			else if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
			{
				bVar0 = true;
			}
			else
			{
				if (func_6())
				{
					func_7();
					func_8();
					func_9();
					func_10();
				}
				BUILTIN::WAIT(0);
			}
			func_1();
		}
	}
}

void func_1()
{
	func_11();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_2()
{
	return Global_1572887.f_14;
}

bool func_3(int iParam0)
{
	return (Global_18 && iParam0) != 0;
}

void func_4()
{
	func_12();
	func_13();
	func_14(0);
	func_15();
}

bool func_5(bool bParam0, bool bParam1)
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

bool func_6()
{
	if (!func_3(256))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		if (func_2() == -1)
		{
			return false;
		}
	}
	if (Global_1572887.f_10)
	{
		return false;
	}
	if (func_16(68))
	{
		return false;
	}
	return true;
}

void func_7()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;

	func_17();
	func_18();
	func_19(&Var0);
	func_20(0, &Var7);
	func_20(1, &Var19);
	func_21(Var7);
	func_21(Var19);
	func_22(Var7);
	func_22(Var19);
	func_23(Var0, Var7, Var19);
	func_24(0, &Var7);
	func_24(1, &Var19);
	func_25(0, &Var7);
	func_25(1, &Var19);
	func_26();
	func_27(Var0);
	func_28(Var0);
	func_29(Var0);
	func_30();
}

void func_8()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1902883.f_303)
	{
		case 0:
			func_32(0);
			break;
		case 1:
			func_32(1);
			break;
		case 2:
			func_32(6);
			break;
	}
	iVar0 = Global_1902883.f_303;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1902883.f_303 = iVar0;
}

void func_9()
{
	struct<7> Var0;
	struct<12> Var7;
	struct<12> Var19;
	struct<12> Var31;
	struct<12> Var43;
	int iVar55;

	switch (Global_1902883.f_408)
	{
		case 0:
		case 6:
			func_19(&Var0);
			func_20(0, &Var7);
			func_20(1, &Var19);
			func_20(6, &Var31);
			func_20(5, &Var43);
			func_33(Var0, Var7, 0);
			func_33(Var0, Var19, 1);
			func_33(Var0, Var31, 6);
			func_33(Var0, Var43, 5);
			func_34(Var0);
			func_35(Var0, Var7);
			func_36(Var0, Var7, 0);
			func_36(Var0, Var19, 1);
			func_36(Var0, Var31, 6);
			func_37(0);
			func_37(1);
			func_37(6);
			func_38(Var0, Var7, 0);
			func_38(Var0, Var19, 1);
			func_39(Var7, Var0, 0);
			func_39(Var19, Var0, 1);
			func_40(0);
			func_40(1);
			func_41(Var0, Var7, 0);
			func_41(Var0, Var19, 1);
			func_42(Var0, Var7, 0);
			func_42(Var0, Var19, 1);
			func_43(Var0);
			func_44(Var0);
			func_45();
			func_46();
			func_47(Var0);
			func_48();
			func_49();
			func_50();
			func_51();
			func_52();
			func_53(Var0, Var7, 0);
			func_53(Var0, Var19, 1);
			func_54(Var0, Var7, 0);
			func_54(Var0, Var19, 1);
			func_54(Var0, Var31, 6);
			func_55(Var0, Var7, Var19);
			break;
		case 1:
			func_56();
			break;
		case 2:
			func_57(0, 0);
			func_58(0, 0);
			break;
		case 3:
			func_57(1, 0);
			func_58(1, 0);
			break;
		case 9:
			func_59();
			break;
		case 11:
			func_60();
			break;
		case 4:
			func_61(0);
			break;
		case 5:
			func_61(1);
			break;
		case 7:
			func_61(5);
			break;
		case 8:
			func_62();
			break;
	}
	iVar55 = Global_1902883.f_408;
	iVar55++;
	if (iVar55 >= 12)
	{
		iVar55 = 0;
	}
	Global_1902883.f_408 = iVar55;
}

void func_10()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	switch (Global_1902883.f_409)
	{
		case 0:
			func_63();
			break;
		case 1:
			func_64();
			break;
		case 2:
			func_65();
			break;
	}
	iVar0 = Global_1902883.f_409;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1902883.f_409 = iVar0;
}

void func_11()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (func_66(iVar0))
		{
			if (!func_67(iVar0))
			{
				func_68(iVar0);
			}
		}
		iVar0++;
	}
}

void func_12()
{
	PED::_RESERVE_AMBIENT_PEDS(1);
	func_17();
}

int func_13()
{
	float fVar0;

	fVar0 = func_69();
	STREAMING::REQUEST_MODEL(fVar0, false);
	if (!STREAMING::HAS_MODEL_LOADED(fVar0))
	{
		return 0;
	}
	return 1;
}

void func_14(int iParam0)
{
	if (Global_1902883.f_364 != iParam0)
	{
	}
	Global_1902883.f_364 = iParam0;
}

int func_15()
{
	if (!func_71(-5.253672E-30f, func_70(), 1))
	{
		return 0;
	}
	if (func_72() || func_73())
	{
		if (!func_71(1.111725E-33f, func_70(), 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_16(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

void func_17()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = 1;
	if (func_74(0) == 1)
	{
	}
	if (func_74(1) == 1)
	{
		iVar0++;
	}
	if (func_74(5) == 1)
	{
		iVar0++;
	}
	if (func_74(6) == 1)
	{
		iVar0++;
	}
	iVar0 = (iVar0 + func_75(0));
	iVar0 = (iVar0 + func_75(1));
	iVar1 = PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED();
	if (iVar0 > iVar1)
	{
		iVar2 = (iVar0 - iVar1);
		PED::_RESERVE_AMBIENT_PEDS_TOTAL(iVar2);
	}
	else if (iVar0 < iVar1)
	{
		iVar3 = (iVar1 - iVar0);
		PED::_UNRESERVE_AMBIENT_PEDS(iVar3);
	}
}

void func_18()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_76(iVar0);
		iVar0++;
	}
}

void func_19(var uParam0)
{
	*uParam0 = PLAYER::PLAYER_ID();
	if (!PLAYER::IS_PLAYER_DEAD(*uParam0))
	{
		uParam0->f_1 = 1;
	}
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		uParam0->f_2 = 1;
		if (PED::IS_PED_INJURED(Global_33))
		{
			uParam0->f_4 = 1;
		}
		if (!ENTITY::IS_ENTITY_DEAD(Global_33))
		{
			uParam0->f_3 = 1;
		}
		if (PED::IS_PED_ON_MOUNT(Global_33))
		{
			uParam0->f_5 = 1;
			uParam0->f_6 = PED::GET_MOUNT(Global_33);
		}
	}
}

void func_20(int iParam0, var uParam1)
{
	float fVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = 0;
	uParam1->f_3 = 0;
	uParam1->f_4 = 0;
	uParam1->f_5 = { 0f, 0f, 0f };
	uParam1->f_8 = 0f;
	uParam1->f_10 = 0;
	uParam1->f_9 = 0;
	uParam1->f_10 = 0;
	uParam1->f_11 = 0;
	if (func_66(iParam0))
	{
		uParam1->f_1 = 1;
		*uParam1 = func_78(iParam0);
		if (!ENTITY::IS_ENTITY_DEAD(*uParam1))
		{
			uParam1->f_2 = 1;
		}
		if (PED::IS_PED_INJURED(*uParam1))
		{
			uParam1->f_3 = 1;
		}
		if (TASK::IS_PED_IN_WRITHE(*uParam1))
		{
			uParam1->f_4 = 1;
		}
		uParam1->f_5 = { ENTITY::GET_ENTITY_COORDS(*uParam1, true, false) };
		uParam1->f_8 = ENTITY::GET_ENTITY_HEADING(*uParam1);
		uParam1->f_9 = PED::_GET_RIDER_OF_MOUNT(*uParam1, false);
		if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_9))
		{
			if (uParam1->f_9 == Global_33)
			{
				uParam1->f_10 = 1;
			}
		}
		fVar0 = func_79(iParam0);
		if (func_80(uParam1->f_5, Global_34) <= fVar0)
		{
			uParam1->f_11 = 1;
		}
	}
}

void func_21(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (Param0.f_1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Param0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Param0, true, true);
		}
	}
}

void func_22(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11)
{
	if (vParam0.z)
	{
		if (func_81(64))
		{
			PED::SET_PED_RESET_FLAG(vParam0.x, 6, true);
		}
	}
}

void func_23(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (func_82())
	{
		PAD::ENABLE_CONTROL_ACTION(0, 6.571986E-17f, true);
		PAD::ENABLE_CONTROL_ACTION(0, -2.224881E+24f, true);
		func_83(Param0, Param7, Param19);
	}
	else
	{
		PAD::DISABLE_CONTROL_ACTION(0, 6.571986E-17f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.224881E+24f, false);
		func_14(1);
	}
	func_84();
}

void func_24(int iParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (!uParam1->f_1)
	{
		return;
	}
	if (!uParam1->f_2)
	{
		return;
	}
	bVar0 = false;
	iVar1 = 388;
	bVar2 = PED::GET_PED_CONFIG_FLAG(*uParam1, iVar1, false);
	if (bVar0 != bVar2)
	{
		PED::SET_PED_CONFIG_FLAG(*uParam1, iVar1, bVar0);
	}
	if (func_85())
	{
		return;
	}
	bVar3 = func_86(iParam0);
	if (uParam1->f_4 != bVar3)
	{
		func_87(iParam0, uParam1->f_4);
		func_88(iParam0);
	}
	if (!uParam1->f_4)
	{
		return;
	}
	if (func_89(iParam0) == 0)
	{
		func_90(iParam0, MISC::GET_GAME_TIMER());
	}
	fVar4 = PED::_GET_PED_REMAINING_REVIVAL_TIME(*uParam1, false);
	func_91(iParam0, fVar4);
	if (Global_1915643.f_22476)
	{
		if (!PED::_0x12EB4E31F092C9B3(*uParam1))
		{
			PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, true);
		}
	}
	else if (PED::_0x12EB4E31F092C9B3(*uParam1))
	{
		PED::SET_PAUSE_PED_WRITHE_BLEEDOUT(*uParam1, false);
	}
}

void func_25(int iParam0, var uParam1)
{
	if (!uParam1->f_1)
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	if (!uParam1->f_2)
	{
		func_92(iParam0);
		return;
	}
}

void func_26()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_93(iVar0);
		iVar0++;
	}
}

void func_27(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_33))
	{
		func_94();
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_33);
	if (!func_95(iVar0))
	{
		return;
	}
	if (!func_96())
	{
		vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
		fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(vVar1, func_97(), false);
		func_98(vVar1);
		if (fVar4 > 1008981770)
		{
			fVar5 = func_99();
			fVar5 = (fVar5 + fVar4);
			func_100(fVar5);
		}
		if (func_99() >= 1109393408)
		{
			func_101(1);
		}
	}
	if (!func_96())
	{
		return;
	}
	func_102(iVar0);
}

void func_28(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!func_66(6))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(Global_33))
	{
		return;
	}
	iVar0 = PED::GET_MOUNT(Global_33);
	iVar1 = func_78(6);
	if (iVar0 != iVar1)
	{
		return;
	}
	if (func_103(6) == 0)
	{
		return;
	}
	if (func_66(1))
	{
		func_104(1, 0);
	}
	func_105(1);
	func_106(iVar0);
	func_105(6);
}

void func_29(struct<7> Param0)
{
	int iVar0;
	int iVar1;

	if (!func_107(Param0, &iVar0, 1))
	{
		func_108();
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!ENTITY::DOES_ENTITY_EXIST(Global_1902883.f_402))
	{
		Global_1902883.f_402 = iVar0;
		Global_1902883.f_402.f_1 = iVar1;
	}
	if (Global_1902883.f_402.f_1 + 5000 < iVar1)
	{
		func_109(iVar0);
		func_108();
	}
}

void func_30()
{
	int iVar0;

	if (func_110() > 1)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.877166E+07f, false);
		func_111();
	}
	iVar0 = func_110();
	switch (iVar0)
	{
		case 0:
			func_112();
			break;
		case 1:
			func_113();
			break;
		case 2:
			func_114();
			break;
		case 3:
			func_115();
			break;
		case 4:
			func_116();
			break;
		case 5:
			func_117();
			break;
		case 6:
			func_118();
			break;
		case 7:
			func_119();
			break;
	}
	func_120();
}

bool func_31()
{
	return Global_1958625;
}

void func_32(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_121(42))
		{
			return;
		}
	}
	iVar0 = Global_1902883[iParam0 /*43*/];
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1902883.f_410[iParam0])
	{
		case 0:
		case 1:
			func_122(iParam0);
			Global_1902883.f_410[iParam0] = 2;
			break;
		case 2:
			func_123(iParam0);
			Global_1902883.f_410[iParam0] = 3;
			break;
		case 3:
			func_124(iParam0);
			Global_1902883.f_410[iParam0] = 0;
			break;
	}
}

void func_33(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<9> Param7, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	func_125(iParam19, Param7.f_5, Param7.f_8);
}

void func_34(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;

	if (func_81(2048))
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	bVar0 = false;
	iVar1 = func_127(func_126(0));
	switch (iVar1)
	{
		case 2:
		case 3:
		case 4:
			bVar0 = true;
			break;
	}
	bVar2 = false;
	if (!func_121(41))
	{
		bVar2 = true;
	}
	bVar3 = false;
	if (bVar0 || bVar2)
	{
		bVar3 = true;
	}
	iVar4 = 367;
	if (PED::GET_PED_CONFIG_FLAG(Global_33, iVar4, true) != bVar3)
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, iVar4, bVar3);
	}
	bVar5 = false;
	if (bVar0 && !bVar2)
	{
		bVar5 = true;
	}
	iVar4 = 487;
	if (PED::GET_PED_CONFIG_FLAG(Global_33, iVar4, true) != bVar5)
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, iVar4, bVar5);
	}
}

void func_35(struct<5> Param0, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (func_128(Param7, 1.38087E+35f))
	{
	}
}

void func_36(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	bool bVar0;
	int iVar1;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (func_67(iParam19))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 48;
	if (bVar0)
	{
		if (!FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
		{
			FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, true);
		}
	}
	else if (FLOCK::GET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1))
	{
		FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Param7, iVar1, false);
	}
}

void func_37(int iParam0)
{
}

void func_38(struct<2> Param0, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, int iParam19)
{
	if (!Param0.f_1)
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_129(iParam19) == -1)
	{
		return;
	}
	func_130(iParam19, -1);
}

void func_39(struct<12> Param0, struct<2> Param12, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	if (func_131())
	{
		return;
	}
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!Param12.f_1)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_11)
	{
		return;
	}
	if (func_129(iParam19) == 1)
	{
		return;
	}
	if (!PLAYER::IS_PLAYER_RIDING_TRAIN(Param12))
	{
		return;
	}
	if (func_132(Param0, 1.38087E+35f))
	{
		return;
	}
	func_133(Param0, Global_33);
}

void func_40(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_67(iParam0))
	{
		return;
	}
	iVar0 = func_134(iParam0);
	if (SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		if (SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
		{
			return;
		}
	}
	if (func_66(iParam0))
	{
		iVar1 = func_78(iParam0);
		func_135(iVar1, 1);
	}
	func_136(iParam0);
}

void func_41(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(Param7, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_137(iParam19);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		func_137(iParam19);
		return;
	}
	if (func_81(512))
	{
		return;
	}
	if (iVar0 == Global_33)
	{
		return;
	}
	iVar1 = func_138(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
		if ((iVar2 != -4.357062E-17f && iVar2 != 5.234709E+11f) && iVar2 != 0.0589133f)
		{
			func_139(iParam19, iVar0);
		}
	}
	iVar1 = func_138(iParam19);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (func_140(Param7, Global_33, 1, 1) > func_79(iParam19))
	{
		func_137(iParam19);
		func_141(iParam19, 2);
	}
}

void func_42(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_3)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	if (!func_142(iParam19))
	{
		return;
	}
	fVar0 = func_143(Param7);
	bVar1 = false;
	if (fVar0 > 0f)
	{
		bVar1 = true;
	}
	iVar2 = MISC::GET_GAME_TIMER();
	if (!bVar1 || func_144(iParam19) + 30000 < iVar2)
	{
		func_145(iParam19, 0);
		func_146(iParam19, -1);
		if (func_147(16))
		{
			func_148(16);
		}
		if (func_149(16))
		{
			func_150(16);
		}
	}
}

void func_43(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar13;

	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	iVar0 = func_151(5);
	if (iVar0 == 0)
	{
		return;
	}
	func_20(5, &vVar1);
	if (iVar0 == 2)
	{
		if (vVar1.y && !vVar1.z)
		{
			func_137(5);
			func_152(5, 1);
		}
		if (vVar1.z)
		{
			if (func_140(vVar1.x, Global_33, 1, 1) > func_79(5) && !ENTITY::IS_ENTITY_ON_SCREEN(vVar1.x))
			{
				iVar13 = PED::_GET_RIDER_OF_MOUNT(vVar1.x, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar13))
				{
					if (ENTITY::IS_ENTITY_DEAD(iVar13) || PED::IS_PED_INJURED(iVar13))
					{
					}
					if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar13))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar13, true, true);
						PED::DELETE_PED(&iVar13);
					}
				}
				func_68(5);
				func_153(5, 0);
			}
		}
		if (!vVar1.y && func_74(5) == 1)
		{
			func_153(5, 0);
		}
	}
	if (iVar0 == 0)
	{
		return;
	}
	if (!func_121(41))
	{
		return;
	}
	if (func_74(0) == 1 && func_154() == 0)
	{
		func_104(5, 0);
		func_105(5);
	}
}

void func_44(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_121(41))
	{
		return;
	}
	bVar0 = false;
	if ((func_74(0) == 0 && func_74(5) == 1) && func_151(5) == 1)
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	iVar1 = func_127(func_126(0));
	bVar2 = false;
	if (iVar1 == 2)
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		if (!func_121(41))
		{
			func_155(41);
			func_155(29);
		}
		if (!func_156(55))
		{
			func_157(1);
		}
	}
}

void func_45()
{
	int iVar0;
	int iVar1;

	iVar0 = func_158(0);
	iVar1 = func_158(1);
	if (Global_1902883.f_404 != 0)
	{
		if (Global_1902883.f_404 != iVar0)
		{
			if (!func_159(Global_1902883.f_404))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1902883.f_404, false);
			}
			Global_1902883.f_404 = 0;
		}
	}
	if (Global_1902883.f_404.f_1 != 0)
	{
		if (Global_1902883.f_404.f_1 != iVar1)
		{
			if (!func_159(Global_1902883.f_404.f_1))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(Global_1902883.f_404.f_1, false);
			}
			Global_1902883.f_404.f_1 = 0;
		}
	}
	if (iVar0 != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(iVar0))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar0, true);
			Global_1902883.f_404 = iVar0;
		}
	}
	if (iVar1 != 0)
	{
		if (!PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, true);
			Global_1902883.f_404.f_1 = iVar1;
		}
	}
}

void func_46()
{
	int iVar0;

	func_160(Global_1902883.f_422);
	iVar0 = Global_1902883.f_422;
	iVar0++;
	if (iVar0 >= 5)
	{
		iVar0 = 0;
	}
	Global_1902883.f_422 = iVar0;
}

void func_47(struct<5> Param0, var uParam5, var uParam6)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;
	vector3 vVar11;
	vector3 vVar14;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_85())
	{
		return;
	}
	bVar0 = func_161();
	if (bVar0)
	{
		iVar1 = func_162();
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
	}
	bVar2 = false;
	if (bVar0)
	{
		bVar2 = func_163(Global_33, iVar1);
	}
	bVar3 = func_121(41);
	bVar4 = false;
	if (bVar0)
	{
		if (bVar2)
		{
			if (func_164() != 1 && !func_165(0))
			{
				func_166(1);
				bVar4 = true;
			}
		}
		else
		{
			if (func_164() == 1 && !func_165(0))
			{
				func_166(2);
				bVar4 = true;
			}
			if (ENTITY::IS_ENTITY_STATIC(iVar1))
			{
				ENTITY::SET_ENTITY_DYNAMIC(iVar1, true);
			}
		}
		vVar5 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
		func_167(vVar5);
	}
	else
	{
		if (func_164() == 0)
		{
			if (func_154() == 5)
			{
				if (func_66(5))
				{
					vVar8 = { ENTITY::GET_ENTITY_COORDS(func_78(5), false, false) };
					func_167(vVar8);
				}
				else if (bVar3)
				{
					vVar11 = { func_168() };
					func_169(-1);
					func_166(2);
					bVar4 = true;
				}
			}
		}
		if (func_164() == 2)
		{
			vVar14 = { func_168() };
			func_170(vVar14, 0f, 1);
		}
	}
	if (bVar4)
	{
		func_62();
	}
}

void func_48()
{
	vector3 vVar0;
	struct<4> Var12;
	bool bVar19;

	if (!func_66(6))
	{
		return;
	}
	func_20(6, &vVar0);
	if (!vVar0.z)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&vVar0);
		func_105(6);
		return;
	}
	func_19(&Var12);
	bVar19 = false;
	if (!Var12.f_3)
	{
		bVar19 = true;
	}
	if (func_140(vVar0.x, Global_33, 1, 1) > 1120403456)
	{
		bVar19 = true;
	}
	if (bVar19)
	{
		func_104(6, 0);
		func_105(6);
	}
}

void func_49()
{
	struct<11> Var0;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_66(1))
	{
		func_171();
		return;
	}
	func_20(1, &Var0);
	if (!Var0.f_2)
	{
		func_171();
		return;
	}
	if (func_172(1))
	{
		func_171();
		return;
	}
	if (func_103(1) >= 1)
	{
		func_171();
		return;
	}
	if (!func_173(1))
	{
		func_171();
		return;
	}
	if (Var0.f_10)
	{
		func_171();
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
	{
		func_171();
		return;
	}
	iVar12 = MISC::GET_GAME_TIMER();
	if (!func_174())
	{
		iVar13 = func_175();
		if (iVar13 == 0)
		{
			func_176(iVar12);
		}
		else if (iVar13 + 5000 < iVar12)
		{
			func_177(1);
		}
	}
	if (!func_174())
	{
		return;
	}
	if (!func_128(Var0, 2.40763E-20f))
	{
		TASK::TASK_SMART_FLEE_PED(Var0, Global_33, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(Var0, true);
	}
	if (func_178(Var0, -1))
	{
		return;
	}
	iVar14 = func_179();
	if (iVar14 == 0)
	{
		func_180(iVar12);
	}
	else if (iVar14 + 15000 < iVar12)
	{
		func_104(1, 1);
		func_171();
	}
}

void func_50()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		bVar1 = true;
		iVar0 = PED::GET_MOUNT(Global_33);
	}
	iVar5 = 0;
	while (iVar5 < 7)
	{
		if (Global_38.f_289.f_1[iVar5 /*460*/].f_9 == 0)
		{
			if (Global_38.f_289.f_1[iVar5 /*460*/].f_455 > -1)
			{
				Global_38.f_289.f_1[iVar5 /*460*/].f_455 = -1;
			}
		}
		else
		{
			bVar3 = false;
			bVar4 = false;
			iVar2 = Global_1902883[iVar5 /*43*/];
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				bVar3 = true;
				if (bVar1)
				{
					if (iVar0 == iVar2)
					{
						bVar4 = true;
					}
				}
			}
			if (bVar4)
			{
				if (Global_38.f_289.f_1[iVar5 /*460*/].f_455 > -1)
				{
					Global_38.f_289.f_1[iVar5 /*460*/].f_455 = -1;
				}
			}
			else
			{
				iVar6 = CLOCK::_GET_SECONDS_SINCE_BASE_YEAR();
				if (bVar3)
				{
					iVar7 = PED::_0xE8D1CCB9375C101B(iVar2, PLAYER::PLAYER_ID());
					if (iVar7 == -1 || iVar7 == 0)
					{
						iVar7 = iVar6;
						PED::_0xA691C10054275290(iVar2, PLAYER::PLAYER_ID(), iVar7);
					}
					if (Global_38.f_289.f_1[iVar5 /*460*/].f_455 != iVar7)
					{
						Global_38.f_289.f_1[iVar5 /*460*/].f_455 = iVar7;
					}
				}
				else if (Global_38.f_289.f_1[iVar5 /*460*/].f_455 == -1)
				{
					Global_38.f_289.f_1[iVar5 /*460*/].f_455 = iVar6;
				}
			}
		}
		iVar5++;
	}
}

void func_51()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (func_181())
	{
		bVar1 = true;
	}
	if (func_66(0))
	{
		iVar2 = func_78(0);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 31, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 32, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar2, 33, 2, bVar1);
	}
	if (func_66(1))
	{
		iVar3 = func_78(1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 31, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 32, 2, bVar1);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, iVar3, 33, 2, bVar1);
	}
}

void func_52()
{
	if (func_121(32))
	{
		if (!func_182())
		{
			func_183(1);
		}
	}
	else if (func_182())
	{
		func_183(0);
	}
	if (func_121(33))
	{
		if (!func_184())
		{
			func_185(1);
		}
	}
	else if (func_184())
	{
		func_185(0);
	}
	if (func_121(34))
	{
		if (!func_186())
		{
			func_187(1);
		}
	}
	else if (func_186())
	{
		func_187(0);
	}
}

void func_53(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<5> Param7, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	float fVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (!Param7.f_4)
	{
		return;
	}
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	fVar0 = func_140(Param7, Global_33, 1, 1);
	if (fVar0 > 1109393408)
	{
		func_88(iParam19);
		return;
	}
	if (!ENTITY::IS_ENTITY_ON_SCREEN(Param7))
	{
		func_88(iParam19);
		return;
	}
	iVar1 = MISC::GET_GAME_TIMER();
	if (!func_188(iParam19))
	{
		func_189(iParam19, iVar1);
		return;
	}
	if (func_190(iParam19) + 15000 < iVar1)
	{
		func_189(iParam19, iVar1);
	}
}

void func_54(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<6> Param7, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19)
{
	vector3 vVar0;
	vector3 vVar3;
	float fVar6;
	float fVar7;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_1)
	{
		return;
	}
	if (!Param7.f_2)
	{
		return;
	}
	if (Param7.f_4)
	{
		return;
	}
	iParam19 = func_77(iParam19);
	if (iParam19 == -1)
	{
		return;
	}
	if (iParam19 >= 7)
	{
		return;
	}
	vVar0 = { func_191(iParam19) };
	if (func_192(vVar0))
	{
		return;
	}
	vVar3 = { func_193(iParam19) };
	fVar6 = func_194(iParam19);
	fVar7 = MISC::GET_DISTANCE_BETWEEN_COORDS(Param7.f_5, vVar3, true);
	if (fVar7 > 1008981770)
	{
		fVar6 = (fVar6 + fVar7);
		func_195(iParam19, Param7.f_5);
		func_196(iParam19, fVar6);
	}
}

void func_55(struct<7> Param0, struct<12> Param7, struct<12> Param19)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	func_197(Param0);
	func_198(Param0);
	func_199(Param0, Param7);
	func_200();
	func_201(Param0, Param7, Param19);
	func_202(Param0);
	func_203(Param0, Param7, Param19);
	func_204(Param0, Param7, Param19);
	func_205();
	func_206(Param0);
	func_207();
	func_208(Param0);
	func_209(Param0);
	func_210(Param0, Param7);
	func_211(Param0, Param7, Param19);
	func_212(Param0);
}

void func_56()
{
	struct<2> Var0;
	int iVar2;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	Var0 = { func_126(0) };
	if (func_213(Var0))
	{
		if (Var0 == 2)
		{
			return;
		}
	}
	iVar2 = func_214();
	WEAPON::_0x641351E9AD103890(Global_33, iVar2);
}

void func_57(int iParam0, bool bParam1)
{
	int iVar0;
	struct<95> Var1;
	struct<11> Var97;
	int iVar193;
	var uVar194;
	int iVar198;
	int iVar199;
	int iVar200;
	int iVar201;
	int iVar202;
	var uVar203;
	var uVar204;
	var uVar205;
	var uVar206;
	bool bVar207;
	bool bVar208;
	int iVar209;
	bool bVar210;
	int iVar211;
	bool bVar212;
	bool bVar213;
	int iVar214;

	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (PED::_IS_PED_QUEUED_FOR_DELETION(iVar0))
	{
		return;
	}
	Var1.f_10 = 10;
	Var97.f_10 = 10;
	func_216(&Var1);
	bVar207 = false;
	bVar208 = ((PED::IS_PED_RAGDOLL(iVar0) || PED::IS_PED_DEAD_OR_DYING(iVar0, true)) || TASK::IS_PED_IN_WRITHE(iVar0));
	bVar210 = false;
	if ((((func_217(10) || func_217(9)) || func_217(29)) || func_217(27)) || func_217(15))
	{
		bVar210 = true;
	}
	iVar211 = 1;
	bVar212 = false;
	bVar213 = func_218(131072, 255);
	if (!bVar213)
	{
		if (func_219())
		{
			bVar213 = true;
		}
	}
	iVar209 = 0;
	while (iVar209 < 3)
	{
		iVar193 = func_220(iVar209);
		iVar201 = iVar209;
		func_216(&Var1);
		bVar212 = false;
		bVar207 = bVar208;
		iVar199 = Global_1290256.f_1139.f_245[iVar209 /*4*/].f_3;
		if (!bVar207)
		{
			if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&(Global_1290256.f_1139.f_245[iVar209 /*4*/]), iVar0, iVar193, 0))
			{
				if (bParam1 && !Global_1903834.f_111)
				{
				}
				else
				{
					bVar207 = true;
					Jump @380; //curOff = 318
					if (ENTITY::DOES_ENTITY_EXIST(iVar199) && ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_1139.f_245[iVar209 /*4*/].f_3))
					{
						if (iVar199 != Global_1290256.f_1139.f_245[iVar209 /*4*/].f_3)
						{
							bVar207 = true;
							bVar212 = true;
						}
					}
					if (!bVar207)
					{
						iVar198 = Global_1290256.f_1139.f_245[iVar209 /*4*/].f_3;
						if (!ENTITY::DOES_ENTITY_EXIST(iVar198))
						{
							bVar207 = true;
						}
					}
					if (!bVar207)
					{
						iVar214 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iVar198);
						if (iVar214 != 7)
						{
							bVar207 = true;
							if (!Global_1903834.f_112)
							{
								iVar211 = 0;
							}
							if (Global_1290256.f_1139.f_241[iVar209] == 7)
							{
								bVar212 = true;
							}
						}
						Global_1290256.f_1139.f_241[iVar209] = iVar214;
					}
					if (!bVar207)
					{
						if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar198))
						{
							bVar207 = true;
						}
					}
					if (!bVar207)
					{
						if (ENTITY::IS_ENTITY_A_PED(iVar198))
						{
							iVar200 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar198);
							if (PED::IS_PED_HUMAN(iVar200))
							{
								bVar207 = true;
							}
							Var1.f_4 = PED::_GET_PED_QUALITY(iVar200);
							Var1.f_9 = PED::_GET_NUM_COMPONENTS_IN_PED(iVar200);
							Var1.f_6 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar200);
							Var1.f_7 = PED::_GET_PED_DAMAGED(iVar200);
						}
					}
					if (!bVar207)
					{
						Var1 = ENTITY::GET_ENTITY_MODEL(iVar198);
						Var1.f_1 = func_221(iVar198);
						Var1.f_2 = ENTITY::_0xD21C7418C590BB40(iVar198);
						Var1.f_3 = ENTITY::_GET_ENTITY_CARRY_CONFIG(iVar198);
						Var1.f_93 = ENTITY::_0xB16C780C51E51E2B(iVar198);
						if (bVar210)
						{
							if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar198))
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar198);
							}
						}
						if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1 != 0)
						{
							if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1 != Var1.f_1)
							{
								func_222(iVar0, Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1, 1, !bVar212, -5.149929E+33f);
								if (Var1.f_1 != 0)
								{
									if (func_223(iVar0, iParam0, Var1.f_1, iVar209))
									{
										func_224(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), Var1.f_1, 1);
									}
									Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1 = Var1.f_1;
								}
								Global_1940239.f_5 = 1;
							}
						}
						else
						{
							Global_1940239.f_5 = 1;
							if (func_223(iVar0, iParam0, Var1.f_1, iVar209))
							{
								func_224(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iVar0), Var1.f_1, 1);
							}
						}
					}
					else
					{
						if (Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1 != 0)
						{
							Global_1940239.f_5 = 1;
							func_222(iVar0, Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/].f_1, 1, !bVar212, -5.149929E+33f);
						}
						Global_1290256.f_1139.f_241[iVar209] = 0;
						MISC::COPY_SCRIPT_STRUCT(&(Global_1290256.f_1139.f_245[iVar209 /*4*/]), &uVar194, 4);
						func_225(&Var97, &(Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/]));
					}
					else
					{
						if (STREAMING::IS_MODEL_A_PED(Var1))
						{
							Var1.f_8 = PED::_GET_PED_META_OUTFIT_HASH(iVar200);
							if (Global_1903834.f_112)
							{
								if (Var1.f_9 <= 1)
								{
								}
								else if (Var1.f_9 > 10)
								{
									Var1.f_9 = 10;
								}
								iVar202 = 0;
								while (iVar202 < Var1.f_9)
								{
									if (iVar202 >= 10)
									{
									}
									else
									{
										if (PED::GET_META_PED_ASSET_GUIDS(iVar200, iVar202, &uVar203, &uVar204, &uVar205, &uVar206))
										{
											Var1.f_10[iVar202 /*8*/] = uVar203;
											Var1.f_10[iVar202 /*8*/].f_1 = uVar204;
											Var1.f_10[iVar202 /*8*/].f_2 = uVar205;
											Var1.f_10[iVar202 /*8*/].f_3 = uVar206;
										}
										if (PED::GET_META_PED_ASSET_TINT(iVar200, iVar202, &uVar203, &uVar204, &uVar205, &uVar206))
										{
											Var1.f_10[iVar202 /*8*/].f_4 = uVar203;
											Var1.f_10[iVar202 /*8*/].f_5 = uVar204;
											Var1.f_10[iVar202 /*8*/].f_6 = uVar205;
											Var1.f_10[iVar202 /*8*/].f_7 = uVar206;
										}
										iVar202++;
									}
								}
							}
							Var1.f_91 = PERSISTENCE::_0x2E545965DF98D476(iVar198);
							if (PED::_IS_META_PED_USING_COMPONENT(iVar200, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar198))
							{
								Var1.f_92 = 1;
							}
							else
							{
								Var1.f_92 = 0;
							}
							Var1.f_94 = ENTITY::_0x37B01666BAE8F7EF(iVar198);
							if (MISC::_IS_PED_DECOMPOSED(iVar200))
							{
								TASK::TASK_DUMP_CARRIABLE_FROM_PARENT(Global_33, iVar0, iVar198);
								ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar198, 2, false);
								MISC::SET_PED_DECOMPOSED(iVar200, true);
								if (func_227(func_226(iVar200), 82))
								{
									func_228(113, 1);
								}
								func_225(&Var97, &(Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/]));
							}
							else
							{
								if (Var1.f_91 >= 12)
								{
									if (func_229() && func_227(func_226(iVar200), 82))
									{
										func_228(112, 0);
									}
								}
								else if (Var1.f_91 >= 2)
								{
									if (func_229() && func_227(func_226(iVar200), 82))
									{
										func_228(111, 0);
									}
								}
								func_225(&Var1, &(Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar201 /*96*/]));
							}
							iVar209++;
							if (Global_1903834.f_111)
							{
								if (!Global_1903834.f_112)
								{
									if (iVar211 == 1)
									{
										Global_1903834.f_112 = 1;
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

void func_58(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!func_230(iVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!Global_1903834.f_111)
		{
			return;
		}
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
	}
	PED::_0x6F43C351A5D51E2F(iVar0, &(Global_38.f_289.f_1[iParam0 /*460*/].f_382));
}

void func_59()
{
	var uVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	iVar6 = 0;
	while (iVar6 < 7)
	{
		if (!func_66(iVar6))
		{
		}
		else
		{
			iVar7 = func_78(iVar6);
			if (func_231(iVar6))
			{
				if (!func_232(iVar7))
				{
					iVar8 = func_233(iVar6);
					func_234(iVar7, iVar8);
				}
				else
				{
					iVar9 = func_235(iVar6);
					func_236(iVar9, &uVar0, &uVar1, &uVar2, &iVar3, &uVar4, &uVar5);
					if (iVar3 >= 1)
					{
						func_237(iVar7);
						func_238(iVar6);
					}
					else if (!func_232(iVar7))
					{
					}
					else if (!func_231(iVar6))
					{
						iVar10 = func_239(iVar7);
						func_240(iVar6, 1);
						func_241(iVar6, iVar10);
						func_243(iVar6, func_242());
					}
				}
				iVar6++;
			}
		}
	}
}

void func_60()
{
	int iVar0;
	int iVar1;
	struct<8> Var2;
	char cVar10[64];

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (!func_66(iVar0))
		{
		}
		else
		{
			iVar1 = func_158(iVar0);
			if (!func_244(iVar1))
			{
			}
			else
			{
				Var2 = { func_245(iVar0) };
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
				{
				}
				else
				{
					StringCopy(&cVar10, func_246(iVar1), 64);
					StringCopy(&Var2, HUD::_GET_LABEL_TEXT_2(&cVar10), 64);
					if (MISC::IS_STRING_NULL_OR_EMPTY(&Var2))
					{
					}
					else
					{
						func_247(iVar0, Var2);
						func_248(iVar0);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_61(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	bool bVar16;
	int iVar17;
	int iVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	int iVar22;

	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	bVar1 = false;
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		bVar1 = true;
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar0))
	{
		return;
	}
	if (func_249(iParam0, 64))
	{
		func_250(iParam0);
		return;
	}
	bVar2 = false;
	if (!MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25) && !MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_26))
	{
		if (!MAP::GET_BLIP_FROM_ENTITY(iVar0) == 0)
		{
			bVar2 = true;
		}
	}
	if (bVar2)
	{
		return;
	}
	bVar3 = func_121(41);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
		{
			MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_25));
		}
		if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) && bVar3)
		{
			if (!MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_26))
			{
				Global_1902883[iParam0 /*43*/].f_26 = MAP::BLIP_ADD_FOR_ENTITY(-2.280672E+20f, iVar0);
				MAP::SET_BLIP_SPRITE(Global_1902883[iParam0 /*43*/].f_26, -1.672734E-09f, true);
				func_251(&(Global_1902883[iParam0 /*43*/].f_26));
			}
		}
		else if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_26))
		{
			MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_26));
		}
		return;
	}
	else if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_26));
	}
	bVar4 = false;
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (Global_1940186.f_34 == iVar0)
		{
			bVar4 = true;
		}
	}
	if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25) && bVar4)
	{
		func_250(iParam0);
	}
	if (bVar4)
	{
		return;
	}
	if (Global_38.f_289.f_1[iParam0 /*460*/].f_14 == 2)
	{
		return;
	}
	bVar6 = false;
	if (iParam0 == 0)
	{
		iVar5 = -5.719183E-31f;
	}
	else if (iParam0 == 1)
	{
		iVar5 = -4.784198E-06f;
		bVar6 = true;
	}
	else
	{
		return;
	}
	if (bVar6)
	{
		bVar7 = false;
		if (func_103(1) < 1)
		{
			bVar7 = true;
		}
		if (bVar7)
		{
			if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
			{
				MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_25));
			}
			return;
		}
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
	{
		Global_1902883[iParam0 /*43*/].f_25 = MAP::BLIP_ADD_FOR_ENTITY(iVar5, iVar0);
		Global_1902883[iParam0 /*43*/].f_24 = 0;
		func_252(&(Global_1902883[iParam0 /*43*/].f_25), bVar6);
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
	{
		return;
	}
	bVar8 = false;
	if (func_249(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = TASK::IS_PED_IN_WRITHE(iVar0);
	bVar10 = false;
	iVar11 = func_138(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar11))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar11))
		{
			if (PED::GET_MOUNT(iVar11) == iVar0)
			{
				bVar10 = true;
			}
		}
	}
	vVar12 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	fVar15 = func_80(vVar12, Global_34);
	bVar16 = false;
	if (fVar15 > func_79(iParam0))
	{
		bVar16 = true;
	}
	iVar17 = 0;
	iVar18 = 0;
	if (bVar8)
	{
		if (Global_1902883[iParam0 /*43*/].f_24 != 3)
		{
			iVar17 = -2.616704E+24f;
			Global_1902883[iParam0 /*43*/].f_24 = 3;
		}
	}
	else if (bVar9)
	{
		fVar19 = PED::_GET_PED_REMAINING_REVIVAL_TIME(iVar0, true);
		if (bVar16)
		{
			if (fVar19 < 1048576000)
			{
				if (Global_1902883[iParam0 /*43*/].f_24 != 9)
				{
					iVar17 = 1.752676E-23f;
					iVar18 = 8.190317E+08f;
					Global_1902883[iParam0 /*43*/].f_24 = 9;
				}
			}
			else if (fVar19 < 1056964608)
			{
				if (Global_1902883[iParam0 /*43*/].f_24 != 10)
				{
					iVar17 = -1389.768f;
					iVar18 = 8.190317E+08f;
					Global_1902883[iParam0 /*43*/].f_24 = 10;
				}
			}
			else if (fVar19 < 1061158912)
			{
				if (Global_1902883[iParam0 /*43*/].f_24 != 11)
				{
					iVar17 = -8.618238E+37f;
					iVar18 = 8.190317E+08f;
					Global_1902883[iParam0 /*43*/].f_24 = 11;
				}
			}
			else if (fVar19 <= 1f)
			{
				if (Global_1902883[iParam0 /*43*/].f_24 != 12)
				{
					iVar17 = -2.303327E+29f;
					iVar18 = 8.190317E+08f;
					Global_1902883[iParam0 /*43*/].f_24 = 12;
				}
			}
		}
		else if (fVar19 < 1048576000)
		{
			if (Global_1902883[iParam0 /*43*/].f_24 != 5)
			{
				iVar17 = 1.752676E-23f;
				iVar18 = -321.8686f;
				Global_1902883[iParam0 /*43*/].f_24 = 5;
			}
		}
		else if (fVar19 < 1056964608)
		{
			if (Global_1902883[iParam0 /*43*/].f_24 != 6)
			{
				iVar17 = -1389.768f;
				iVar18 = -321.8686f;
				Global_1902883[iParam0 /*43*/].f_24 = 6;
			}
		}
		else if (fVar19 < 1061158912)
		{
			if (Global_1902883[iParam0 /*43*/].f_24 != 7)
			{
				iVar17 = -8.618238E+37f;
				iVar18 = -321.8686f;
				Global_1902883[iParam0 /*43*/].f_24 = 7;
			}
		}
		else if (fVar19 <= 1f)
		{
			if (Global_1902883[iParam0 /*43*/].f_24 != 8)
			{
				iVar17 = -2.303327E+29f;
				iVar18 = -321.8686f;
				Global_1902883[iParam0 /*43*/].f_24 = 8;
			}
		}
	}
	else if (bVar10)
	{
		if (Global_1902883[iParam0 /*43*/].f_24 != 4)
		{
			iVar17 = -2.065888E-11f;
			Global_1902883[iParam0 /*43*/].f_24 = 4;
		}
	}
	else if (bVar16)
	{
		if (Global_1902883[iParam0 /*43*/].f_24 != 2)
		{
			iVar17 = 8.190317E+08f;
			Global_1902883[iParam0 /*43*/].f_24 = 2;
		}
	}
	else if (!bVar16)
	{
		if (Global_1902883[iParam0 /*43*/].f_24 != 1)
		{
			iVar17 = -321.8686f;
			Global_1902883[iParam0 /*43*/].f_24 = 1;
		}
	}
	if (iVar17 != 0)
	{
		func_253(Global_1902883[iParam0 /*43*/].f_25);
		func_254(Global_1902883[iParam0 /*43*/].f_25);
		MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, iVar17);
		if (iVar17 == -2.616704E+24f)
		{
			MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, 1.231009E-30f);
		}
	}
	if (iVar18 != 0)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, iVar18);
	}
	if ((PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()) == iVar0 && bVar3) && !bVar9)
	{
		MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, 9.52931E-15f);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, 9.52931E-15f);
	}
	if (func_255(iVar0) && !bVar9)
	{
		if (iVar5 == -5.719183E-31f)
		{
			fVar20 = 8.426834E-19f;
		}
		else if (iVar5 == -4.784198E-06f)
		{
			fVar20 = -4.093554E+31f;
		}
		MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, fVar20);
	}
	else
	{
		MAP::BLIP_REMOVE_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, 8.426834E-19f);
		MAP::BLIP_REMOVE_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, -4.093554E+31f);
	}
	iVar21 = func_103(iParam0);
	iVar22 = 0;
	if (iParam0 == 0)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = -1.100482E+31f;
				break;
			case 1:
				iVar22 = joaat("BLIP_HORSE_OWNED_BONDING_1");
				break;
			case 2:
				iVar22 = 1.031948E-24f;
				break;
			case 3:
				iVar22 = 1.41633E-16f;
				break;
			case 4:
				iVar22 = -9.127157E+15f;
				break;
		}
	}
	else if (iParam0 == 1)
	{
		switch (iVar21)
		{
			case 0:
				iVar22 = 2.693383E-05f;
				break;
			case 1:
				iVar22 = 2.338986E-21f;
				break;
			case 2:
				iVar22 = 6.262804E-32f;
				break;
			case 3:
				iVar22 = -1.388632E+35f;
				break;
			case 4:
				iVar22 = -3.785293E+09f;
				break;
		}
	}
	if (iVar22 == 0)
	{
		MAP::_0x44813684F72B563C(iVar0, Global_1902883[iParam0 /*43*/].f_25);
	}
	else
	{
		MAP::_0x97F6F158CC5B5CA2(iVar0, Global_1902883[iParam0 /*43*/].f_25);
		MAP::_0x7563CBCA99253D1A(iVar0, iVar22);
	}
}

void func_62()
{
	int iVar0;
	bool bVar1;

	iVar0 = Global_1902883.f_379;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902883.f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1902883.f_379.f_1));
		}
		return;
	}
	if (Global_1940186.f_6)
	{
		return;
	}
	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	bVar1 = func_163(Global_33, iVar0);
	if (bVar1)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902883.f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1902883.f_379.f_1));
		}
	}
	else if (func_164() == 3)
	{
		if (MAP::DOES_BLIP_EXIST(Global_1902883.f_379.f_1))
		{
			MAP::REMOVE_BLIP(&(Global_1902883.f_379.f_1));
		}
	}
	else if (!MAP::DOES_BLIP_EXIST(Global_1902883.f_379.f_1))
	{
		Global_1902883.f_379.f_1 = MAP::BLIP_ADD_FOR_ENTITY(-2.280672E+20f, iVar0);
		func_251(&(Global_1902883.f_379.f_1));
	}
}

void func_63()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_256(Global_1902883.f_418, Global_1902883.f_419);
	bVar0 = false;
	iVar1 = Global_1902883.f_419;
	iVar1++;
	if (iVar1 >= 2)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1902883.f_419 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1902883.f_418;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1902883.f_418 = iVar2;
	}
}

void func_64()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	func_257(Global_1902883.f_420, Global_1902883.f_421);
	bVar0 = false;
	iVar1 = Global_1902883.f_421;
	iVar1++;
	if (iVar1 >= 3)
	{
		iVar1 = 0;
		bVar0 = true;
	}
	Global_1902883.f_421 = iVar1;
	if (bVar0)
	{
		iVar2 = Global_1902883.f_420;
		iVar2++;
		if (iVar2 > 5)
		{
			iVar2 = 0;
		}
		Global_1902883.f_420 = iVar2;
	}
}

void func_65()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	if (Global_13)
	{
		return;
	}
	if (func_31())
	{
		return;
	}
	switch (Global_1902883.f_303.f_1)
	{
		case 0:
			func_258(0);
			break;
		case 1:
			func_258(1);
			break;
		case 2:
			func_258(6);
			break;
	}
	iVar0 = Global_1902883.f_303.f_1;
	iVar0++;
	if (iVar0 >= 3)
	{
		iVar0 = 0;
	}
	Global_1902883.f_303.f_1 = iVar0;
}

bool func_66(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1902883[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1902883[iParam0 /*43*/].f_2;
}

void func_68(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	func_259(iParam0);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	if (PED::_IS_PED_MODEL_SUPPRESSED(iVar1))
	{
		if (!func_159(iVar1))
		{
			PED::SET_PED_MODEL_IS_SUPPRESSED(iVar1, false);
		}
	}
	PED::DELETE_PED(&iVar0);
	func_260(iParam0, 0);
	func_136(iParam0);
}

float func_69()
{
	float fVar0;

	fVar0 = -4.238067E-13f;
	return fVar0;
}

struct<4> func_70()
{
	struct<4> Var0;

	Var0 = { func_261(0) };
	return func_262(3.210799E-08f, Var0, -9.692375E+30f, 0);
}

bool func_71(int iParam0, struct<4> Param1, bool bParam5)
{
	int iVar0;
	var uVar1;
	struct<2> Var3;
	struct<4> Var7;
	int iVar11;
	struct<5> Var12;

	if (iParam0 == 0)
	{
		return false;
	}
	uVar1 = 1;
	iVar11 = ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_COUNT(iParam0, &uVar1);
	Var12 = { Param1 };
	iVar0 = 0;
	while (iVar0 < iVar11)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_BUNDLE_ITEM_INFO(iParam0, &uVar1, iVar0, &Var3))
		{
			if (func_263(Var3, 0))
			{
				Var12.f_4 = Var3.f_1;
				if (func_264(Var3, Param1, Var12.f_4, 0, 1, 0) > 0)
				{
				}
				else
				{
					func_265(&Var7);
					if (func_266(Var3, &Var7, &Var12, 1, 6.028273E-12f, 0))
					{
						if (bParam5)
						{
							func_267(Var7, 1, 0);
						}
					}
				}
			}
		}
		iVar0++;
	}
	return true;
}

bool func_72()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_73()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

int func_74(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_14;
}

int func_75(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		if (iVar2 == -1)
		{
		}
		else if (iVar2 == 3)
		{
		}
		else
		{
			iVar1 = Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar2 /*96*/];
			if (iVar1 == 0)
			{
			}
			else if (!STREAMING::IS_MODEL_VALID(iVar1))
			{
			}
			else if (!STREAMING::IS_MODEL_A_PED(iVar1))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar2++;
	}
	return iVar0;
}

void func_76(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	vector3 vVar3;
	float fVar6;
	int iVar7;
	float fVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	vector3 vVar12;
	struct<8> Var15;
	int iVar23;
	float fVar24;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_249(iParam0, 1))
	{
		return;
	}
	if (func_268(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	iVar1 = func_78(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		bVar2 = true;
	}
	else
	{
		bVar2 = false;
	}
	if (bVar2)
	{
		if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
		{
			return;
		}
	}
	vVar3 = { func_269(iParam0) };
	fVar6 = func_270(iParam0);
	if (func_192(vVar3))
	{
		return;
	}
	if (!bVar2)
	{
		func_271(iParam0);
		if (!func_272())
		{
			return;
		}
		if (!func_273(iParam0))
		{
			return;
		}
		iVar7 = func_158(iParam0);
		iVar1 = func_274(iVar7, vVar3, fVar6, 0, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			return;
		}
		func_260(iParam0, iVar1);
		func_275(iVar1);
		func_276(iVar1, iParam0);
		func_248(iParam0);
		PED::_EQUIP_META_PED_OUTFIT_PRESET(iVar1, 0, false);
		func_277(iParam0);
		func_278(iParam0);
		func_279(iParam0);
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
		if (func_86(iParam0))
		{
			fVar8 = func_280(iParam0);
			PED::_SET_PED_WRITHING_DURATION(iVar1, fVar8, fVar8, 0);
			TASK::TASK_ANIMAL_WRITHE(iVar1, 0, 1);
		}
		func_153(iParam0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar7);
	}
	if (!PED::IS_PED_READY_TO_RENDER(iVar1))
	{
		return;
	}
	bVar9 = false;
	iVar10 = func_154();
	if (iParam0 == iVar10)
	{
		PLAYER::_SET_PED_AS_SADDLE_HORSE_FOR_PLAYER(iVar0, iVar1);
		bVar9 = true;
	}
	iVar11 = func_281(iParam0);
	func_282(iVar1, iVar11);
	vVar12 = { func_283(iParam0) };
	if (bVar9)
	{
		Var15 = { func_284() };
	}
	else
	{
		func_285(&Var15);
	}
	iVar23 = func_286(iVar1, 2);
	fVar24 = func_287(iVar23);
	func_288(iParam0, fVar24);
	if (!bVar9 && func_289(iParam0))
	{
		func_290(iVar1, 0);
	}
	func_291(iVar1, &vVar12, &Var15, fVar24, 1);
	func_250(iParam0);
	func_61(iParam0);
	func_292(iParam0);
	func_293(iParam0);
}

int func_77(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

int func_78(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/];
}

float func_79(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_158(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_103(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_103(iParam0) + 1;
	fVar6 = func_294(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_295(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_295(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_296(fVar3, fVar4, fVar11);
	return fVar12;
}

float func_80(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_81(int iParam0)
{
	return (Global_1902883.f_302 && iParam0) != 0;
}

bool func_82()
{
	if (!func_3(256))
	{
		return false;
	}
	if (func_297())
	{
		return false;
	}
	if (func_298() && !func_121(31))
	{
		return false;
	}
	if (func_81(2) || func_81(4))
	{
		return false;
	}
	if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	if (AUDIO::IS_SCRIPTED_SPEECH_PLAYING(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		return false;
	}
	return true;
}

void func_83(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	float fVar7;
	int iVar8;

	bVar0 = false;
	if (vParam7.z)
	{
		if (func_103(0) >= 1)
		{
			bVar0 = true;
		}
	}
	bVar1 = false;
	if (vParam19.z)
	{
		if (func_103(1) >= 1)
		{
			bVar1 = true;
		}
	}
	iVar2 = MISC::GET_GAME_TIMER();
	switch (func_299())
	{
		case 0:
			func_14(1);
		case 1:
			func_300(0);
			func_301(-1.850223E+36f);
			func_302(0, 0);
			func_302(1, 0);
			func_303(1);
			func_14(2);
		case 2:
			if (!func_81(1))
			{
				return;
			}
			func_14(3);
		case 3:
			func_304(iVar2);
			func_303(1);
			func_14(4);
		case 4:
			bVar3 = false;
			bVar4 = true;
			bVar5 = true;
			if (func_305() == 8)
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						func_228(12, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_307(5))
			{
				if (func_74(0) == 0 && (func_74(1) == 0 || !bVar1))
				{
					if (!bVar3)
					{
						if (!func_306())
						{
							func_308();
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if ((func_74(0) == 0 && (func_74(1) == 0 || !bVar1)) && func_74(5) == 0)
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						func_228(11, 1);
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (func_74(0) == 1 || (func_74(1) == 1 && bVar1))
			{
				iVar6 = INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_33);
				if (INTERIOR::IS_VALID_INTERIOR(iVar6))
				{
					if (!bVar3)
					{
						if (func_309(iVar6))
						{
							if (!func_306())
							{
								func_228(14, 1);
							}
						}
						else if (func_310(iVar6))
						{
							if (!func_306())
							{
								func_228(15, 1);
							}
						}
						else if (!func_306())
						{
							func_228(13, 1);
						}
						if (func_66(0))
						{
							fVar7 = func_79(0);
							iVar8 = func_78(0);
							if (!func_311(0) && !func_172(0))
							{
								if (func_140(Global_33, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_33, 0, -1f, -1f, -1f);
								}
							}
						}
						if (func_66(1))
						{
							fVar7 = func_79(1);
							iVar8 = func_78(1);
							if (!func_311(1) && !func_172(1))
							{
								if (func_140(Global_33, iVar8, 1, 1) <= fVar7)
								{
									TASK::TASK_TURN_PED_TO_FACE_ENTITY(iVar8, Global_33, 0, -1f, -1f, -1f);
								}
							}
						}
						bVar3 = true;
					}
					bVar4 = false;
					bVar5 = false;
				}
			}
			if (func_81(16) || !func_121(31))
			{
				if (!bVar3)
				{
					if (!func_306())
					{
						if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1902883.f_364.f_12)))
						{
							func_312(&(Global_1902883.f_364.f_12), 10000, 0, 0, 0, 1);
						}
					}
					bVar3 = true;
				}
				bVar4 = false;
				bVar5 = false;
			}
			if (vParam7.z)
			{
				if (!bVar0)
				{
					if (!bVar3)
					{
						if (!func_306())
						{
							func_228(7, 1);
						}
						bVar3 = true;
					}
					bVar4 = false;
				}
			}
			if (vParam19.z)
			{
				if (!bVar1)
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_306())
							{
								func_228(7, 1);
							}
							bVar3 = true;
						}
					}
					bVar5 = false;
				}
			}
			if (vParam7.z)
			{
				if (func_142(0))
				{
					if (!bVar3)
					{
						if (!func_306())
						{
							func_228(16, 1);
						}
						bVar3 = true;
					}
				}
			}
			if (vParam19.z && bVar1)
			{
				if (func_142(1))
				{
					if (!vParam7.z)
					{
						if (!bVar3)
						{
							if (!func_306())
							{
								func_228(16, 1);
							}
							bVar3 = true;
						}
					}
				}
			}
			PLAYER::_0x9044835BE9D9DBFE(iParam0, (bVar4 || bVar5));
			if (!bVar4)
			{
				if (vParam7.z)
				{
					func_61(0);
					func_313(0);
				}
			}
			if (!bVar5)
			{
				if (vParam19.z)
				{
					func_61(1);
					func_313(1);
				}
			}
			if (!bVar4 && !bVar5)
			{
				func_14(1);
				return;
			}
			func_14(5);
		case 5:
			func_314(1);
			if (func_315(0) == 6 && func_315(1) == 6)
			{
				func_14(1);
			}
			break;
	}
}

int func_84()
{
	if (func_81(2) || func_81(4))
	{
		func_303(2);
		func_303(4);
		return 1;
	}
	return 0;
}

bool func_85()
{
	return func_316(Global_1940186, 8192);
}

bool func_86(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_444;
}

void func_87(int iParam0, var uParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_444 = uParam1;
}

void func_88(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_41 = 0;
}

int func_89(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1902883[iParam0 /*43*/].f_40;
}

void func_90(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_40 = iParam1;
}

void func_91(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_444.f_1 = fParam1;
}

void func_92(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (func_147(56))
	{
		func_148(56);
	}
	if (func_149(56))
	{
		func_150(56);
	}
	if (func_147(57))
	{
		func_148(57);
	}
	if (func_149(57))
	{
		func_150(57);
	}
	bVar1 = false;
	if (iParam0 == 0)
	{
		bVar1 = true;
	}
	else if ((iParam0 == 1 && func_74(0) == 0) && func_74(5) == 0)
	{
		bVar1 = true;
	}
	if (bVar1)
	{
		func_141(iParam0, 1);
	}
	else
	{
		func_104(iParam0, 0);
	}
}

void func_93(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!func_268(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_66(iParam0))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		iVar1 = func_78(iParam0);
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
		}
		iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
		if (PED::_IS_PED_MODEL_SUPPRESSED(iVar2))
		{
			if (!func_159(iVar2))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar2, false);
			}
		}
		if (func_249(iParam0, 4))
		{
			func_68(iParam0);
		}
		else if (func_249(iParam0, 8))
		{
			PED::SET_PED_KEEP_TASK(iVar1, true);
			TASK::TASK_SMART_FLEE_PED(iVar1, Global_33, 500f, -1, 0, 1f, 0);
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
		else if (func_249(iParam0, 2))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
		}
	}
	if (func_249(iParam0, 16))
	{
		func_105(iParam0);
	}
	func_260(iParam0, 0);
	func_136(iParam0);
	func_293(iParam0);
	func_317(iParam0, 2);
	func_317(iParam0, 4);
	func_317(iParam0, 8);
	func_317(iParam0, 16);
}

void func_94()
{
	Global_1902883.f_392 = 0;
	Global_1902883.f_392.f_1 = { 0f, 0f, 0f };
	Global_1902883.f_392.f_4 = 0f;
	Global_1902883.f_392.f_5 = 0;
	Global_1902883.f_392.f_6 = 0;
}

bool func_95(int iParam0)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	var uVar7;
	int iVar8;

	if (func_81(1024))
	{
		return false;
	}
	if (!func_121(42))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (func_318(iParam0))
	{
		return false;
	}
	if (func_319(iParam0))
	{
		return false;
	}
	if (func_320(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_322(iVar0))
	{
		return false;
	}
	if (func_323(iVar0))
	{
		return false;
	}
	bVar1 = false;
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::GET_MOUNT(Global_33) == iParam0)
		{
			bVar1 = true;
		}
		else
		{
			return false;
		}
	}
	if (bVar1)
	{
		if (iParam0 != func_324())
		{
			vVar2 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
			func_94();
			func_325(iParam0);
			func_98(vVar2);
		}
		iVar5 = MISC::GET_GAME_TIMER();
		iVar6 = func_326();
		if (iVar6 == 0)
		{
			func_327(iVar5);
			return false;
		}
		if (iVar6 + 2000 > iVar5)
		{
			return false;
		}
	}
	else
	{
		func_327(0);
	}
	if (func_328(iParam0, &uVar7, 1120403456 /* Float: 100f */))
	{
		return false;
	}
	iVar8 = PLAYER::PLAYER_ID();
	if (func_329(iVar8, 1, 0, 1))
	{
		return false;
	}
	if (LAW::_ARE_WITNESSES_PENDING(iVar8))
	{
	}
	if (LAW::ARE_WITNESSES_ACTIVE(iVar8))
	{
		return false;
	}
	if (LAW::_ARE_INVESTIGATORS_ACTIVE(iVar8, true, 0))
	{
		return false;
	}
	if (!func_330(iParam0))
	{
		return false;
	}
	return true;
}

bool func_96()
{
	return Global_1902883.f_392.f_5;
}

Vector3 func_97()
{
	return Global_1902883.f_392.f_1;
}

void func_98(vector3 vParam0)
{
	Global_1902883.f_392.f_1 = { vParam0 };
}

float func_99()
{
	return Global_1902883.f_392.f_4;
}

void func_100(float fParam0)
{
	Global_1902883.f_392.f_4 = fParam0;
}

void func_101(int iParam0)
{
	Global_1902883.f_392.f_5 = iParam0;
}

int func_102(int iParam0)
{
	bool bVar0;

	if (func_331(iParam0) > 0)
	{
		if (!func_332(iParam0))
		{
			return 0;
		}
		bVar0 = false;
		if (func_318(iParam0))
		{
			if (func_333(iParam0) == 6)
			{
				bVar0 = true;
			}
		}
		if (bVar0)
		{
			func_334(6, 1);
		}
		else
		{
			func_106(iParam0);
		}
		func_94();
		func_335();
		return 1;
	}
	else
	{
		if (!func_95(iParam0))
		{
			return 0;
		}
		func_336(iParam0, 0);
		func_94();
		func_335();
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_398;
}

void func_104(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_337(iParam0);
	if (func_67(iParam0))
	{
		iVar0 = SCRIPTS::GET_ID_OF_THIS_THREAD();
		if (func_134(iParam0) != iVar0)
		{
			return;
		}
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	bVar2 = false;
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		bVar2 = true;
	}
	func_250(iParam0);
	func_338(iVar1);
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	}
	if (func_255(iVar1))
	{
		PHYSICS::_UNHITCH_HORSE(iVar1);
	}
	if (bVar2)
	{
		TASK::TASK_SMART_FLEE_PED(iVar1, Global_33, 500f, -1, 0, 1f, 0);
		PED::SET_PED_KEEP_TASK(iVar1, true);
	}
	iVar3 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar3))
	{
	}
	if (iParam0 == 0)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar3, 0);
	}
	else if (iParam0 == 1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar3, 0);
	}
	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(iVar1, true);
	if (bVar2)
	{
		if (bParam1)
		{
			FLOCK::_SET_ANIMAL_IS_WILD(iVar1, true);
		}
		PED::_0x329772C47DBB2FBC(iVar1);
	}
	ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar1);
	iVar4 = ENTITY::GET_ENTITY_MODEL(iVar1);
	if (STREAMING::IS_MODEL_VALID(iVar4))
	{
		if (PED::_IS_PED_MODEL_SUPPRESSED(iVar4))
		{
			if (!func_159(iVar4))
			{
				PED::SET_PED_MODEL_IS_SUPPRESSED(iVar4, false);
			}
		}
	}
	func_105(iParam0);
}

void func_105(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	StringCopy(&(Global_38.f_289.f_1[iParam0 /*460*/]), "", 64);
	Global_38.f_289.f_1[iParam0 /*460*/].f_8 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_9 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_10 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_11 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_12 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_13 = -15;
	Global_38.f_289.f_1[iParam0 /*460*/].f_14 = 0;
	func_339(&vVar0);
	func_340(iParam0, vVar0);
	func_341(&(Global_38.f_289.f_1[iParam0 /*460*/].f_15));
	func_342(&(Global_38.f_289.f_1[iParam0 /*460*/].f_382));
	func_343(&(Global_38.f_289.f_1[iParam0 /*460*/].f_398));
	iVar3 = 0;
	while (iVar3 < 2)
	{
		func_344(iVar3, &(Global_38.f_289.f_1[iParam0 /*460*/].f_422[iVar3 /*4*/]));
		iVar3++;
	}
	iVar4 = 0;
	while (iVar4 < 3)
	{
		func_345(iVar4, &(Global_38.f_289.f_1[iParam0 /*460*/].f_431[iVar4 /*4*/]));
		iVar4++;
	}
	func_346(&(Global_38.f_289.f_1[iParam0 /*460*/].f_444));
	func_347(&(Global_38.f_289.f_1[iParam0 /*460*/].f_446));
	func_348(&(Global_38.f_289.f_1[iParam0 /*460*/].f_449));
	Global_38.f_289.f_1[iParam0 /*460*/].f_451 = { 0f, 0f, 0f };
	Global_38.f_289.f_1[iParam0 /*460*/].f_454 = 0f;
	Global_38.f_289.f_1[iParam0 /*460*/].f_455 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_456 = -1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_457 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_458 = 0;
	Global_38.f_289.f_1[iParam0 /*460*/].f_459 = 0;
	Global_1902883[iParam0 /*43*/] = 0;
	Global_1902883[iParam0 /*43*/].f_1 = 0;
	Global_1902883[iParam0 /*43*/].f_2 = 0;
	Global_1902883[iParam0 /*43*/].f_3 = 0;
	Global_1902883[iParam0 /*43*/].f_19 = { 0f, 0f, 0f };
	Global_1902883[iParam0 /*43*/].f_22 = 0f;
	Global_1902883[iParam0 /*43*/].f_23 = 0;
	Global_1902883[iParam0 /*43*/].f_24 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
	{
		MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_25));
	}
	Global_1902883[iParam0 /*43*/].f_25 = 0;
	if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_26))
	{
		MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_26));
	}
	Global_1902883[iParam0 /*43*/].f_26 = 0;
	Global_1902883[iParam0 /*43*/].f_27 = { 0f, 0f, 0f };
	Global_1902883[iParam0 /*43*/].f_30 = { 0f, 0f, 0f };
	Global_1902883[iParam0 /*43*/].f_33 = 0f;
	Global_1902883[iParam0 /*43*/].f_34 = 0;
	Global_1902883[iParam0 /*43*/].f_35 = 0;
	Global_1902883[iParam0 /*43*/].f_36 = 0;
	Global_1902883[iParam0 /*43*/].f_37 = { 0f, 0f, 0f };
	Global_1902883[iParam0 /*43*/].f_40 = 0;
	Global_1902883[iParam0 /*43*/].f_41 = 0;
	Global_1902883[iParam0 /*43*/].f_42 = -1;
}

void func_106(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		func_250(iVar0);
	}
	func_250(1);
	if (func_66(1))
	{
		func_104(1, 0);
	}
	func_105(1);
	func_349(iParam0, 1, 0);
	func_153(1, 1);
	if (func_103(1) == 0)
	{
		func_350(1, 1);
	}
	bVar1 = PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(PLAYER::PLAYER_ID(), iParam0);
	func_335();
}

bool func_107(struct<5> Param0, var uParam5, var uParam6, var uParam7, bool bParam8)
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	if (!Param0.f_2)
	{
		return false;
	}
	if (!Param0.f_3)
	{
		return false;
	}
	if (Param0.f_4)
	{
		return false;
	}
	if (bParam8)
	{
		if (!PED::IS_PED_ON_MOUNT(Global_33))
		{
			return false;
		}
		*uParam7 = PED::GET_MOUNT(Global_33);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam7))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(*uParam7))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(*uParam7))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(*uParam7))
	{
		return false;
	}
	if (func_318(*uParam7))
	{
		return false;
	}
	if (func_319(*uParam7))
	{
		return false;
	}
	if (func_351(*uParam7))
	{
		return false;
	}
	if (func_352(*uParam7))
	{
		return false;
	}
	if (func_321(*uParam7))
	{
		return false;
	}
	if (func_320(*uParam7))
	{
		return false;
	}
	if (func_353(*uParam7))
	{
		return false;
	}
	bVar0 = func_354();
	bVar1 = false;
	iVar2 = PED::_GET_ACTIVE_ANIMAL_OWNER(*uParam7);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (!ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar1 = true;
		}
	}
	if (bVar0 || bVar1)
	{
	}
	else
	{
		return false;
	}
	return true;
}

void func_108()
{
	Global_1902883.f_402 = 0;
	Global_1902883.f_402.f_1 = 0;
}

void func_109(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_321(iParam0))
	{
		return;
	}
}

int func_110()
{
	return Global_1904375;
}

void func_111()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	func_355(0, 0);
	Global_1940239.f_6 = 1;
}

void func_112()
{
	func_356(0);
	func_357(1);
}

void func_113()
{
	int iVar0;
	int iVar1;

	if (!func_358())
	{
		return;
	}
	iVar0 = func_359();
	iVar1 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_357(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_357(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_357(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_357(7);
		return;
	}
	if (!func_361(iVar1))
	{
		func_357(7);
		return;
	}
	func_357(2);
}

void func_114()
{
	int iVar0;
	int iVar1;

	iVar0 = func_359();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_357(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_357(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_357(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_357(7);
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	if (iVar1 != 0)
	{
		if (iVar1 != Global_33)
		{
			func_357(7);
			return;
		}
	}
	if (PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar0) != 0)
	{
		func_357(7);
		return;
	}
	if (!func_362())
	{
		func_357(7);
		return;
	}
	func_357(3);
}

void func_115()
{
	int iVar0;
	int iVar1;

	iVar0 = func_359();
	iVar1 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_357(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_357(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_357(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_357(7);
		return;
	}
	if (func_363(iVar0, iVar1))
	{
		func_364(MISC::GET_GAME_TIMER());
		func_357(4);
	}
}

void func_116()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = func_359();
	iVar1 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_357(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_357(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_357(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_357(7);
		return;
	}
	bVar2 = false;
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		bVar2 = true;
	}
	else if (func_365() + 500 < MISC::GET_GAME_TIMER())
	{
		bVar2 = true;
	}
	if (bVar2)
	{
		iVar3 = MISC::GET_GAME_TIMER();
		func_364(iVar3);
		func_366(iVar3);
		func_357(5);
		if (iVar1 == -2.692268E-16f)
		{
			func_367(iVar0);
			iVar4 = func_286(iVar0, 0);
			func_368(iVar4);
			func_369(0);
		}
		else
		{
			func_367(0);
			func_368(0);
			func_369(0);
		}
	}
}

void func_117()
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	iVar0 = func_359();
	bVar1 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_357(7);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_357(7);
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		func_357(7);
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		func_357(7);
		return;
	}
	bVar2 = false;
	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		if (func_365() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar2 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.652615E-31f))
	{
		func_370(1);
		bVar2 = true;
	}
	if (bVar2)
	{
		if (func_371())
		{
			if (func_372(bVar1, 888.6404f))
			{
				func_373(bVar1, 1, 0, -1.202057E-11f);
			}
			func_374(iVar0, bVar1);
		}
		else
		{
			func_357(7);
			return;
		}
		func_364(MISC::GET_GAME_TIMER());
		func_357(6);
	}
}

void func_118()
{
	bool bVar0;

	bVar0 = false;
	if (!PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		if (func_365() + 500 < MISC::GET_GAME_TIMER())
		{
			bVar0 = true;
		}
	}
	if (func_375())
	{
		bVar0 = true;
	}
	if (func_371())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_357(7);
	}
}

void func_119()
{
	func_356(0);
	func_357(0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

void func_120()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	int iVar12;
	float fVar13;
	float fVar14;
	int iVar15;
	bool bVar16;

	iVar0 = func_376();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return;
	}
	bVar3 = ENTITY::HAS_ANIM_EVENT_FIRED(iVar2, 100.6119f);
	iVar4 = MISC::GET_GAME_TIMER();
	if (bVar3)
	{
		if (!func_377())
		{
			func_378(iVar4);
			func_369(1);
		}
	}
	if (!func_377())
	{
		return;
	}
	bVar5 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar1) == iVar0;
	iVar11 = func_379();
	if (bVar5)
	{
		Var6 = { func_380(0, 1, 0, -1) };
		if (!func_381(&Var6, 0, 1))
		{
		}
		iVar10 = func_382(Var6, 0);
	}
	else
	{
		iVar10 = func_286(iVar0, 0);
	}
	iVar12 = (iVar4 - func_383());
	iVar12 = func_384(iVar12, 0, 3000);
	fVar13 = (BUILTIN::TO_FLOAT(iVar12) / BUILTIN::TO_FLOAT(3000));
	fVar13 = func_385(fVar13, 0f, 1f);
	fVar14 = func_296(BUILTIN::TO_FLOAT(iVar11), 0f, fVar13);
	iVar15 = BUILTIN::FLOOR(fVar14);
	bVar16 = false;
	if (bVar5)
	{
		if (iVar10 > 0)
		{
			func_386(iVar0, Var6, 0, iVar15);
			bVar16 = true;
		}
	}
	else if (iVar10 > 0)
	{
		func_387(iVar0, 0, iVar15);
		bVar16 = true;
	}
	if (bVar16)
	{
		PED::_0xE29D8CD66553DBAA(iVar0);
	}
	if (func_286(iVar0, 0) == 0)
	{
		func_367(0);
		func_369(0);
		func_378(0);
	}
}

bool func_121(int iParam0)
{
	if (!func_388(iParam0))
	{
		return false;
	}
	return func_389(iParam0);
}

void func_122(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	int iVar7;

	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != Global_33)
	{
		bVar3 = true;
	}
	bVar4 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar4 = true;
	}
	if ((fVar2 < 1056964608 || bVar3) || !bVar4)
	{
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902883.f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 >= 1120403456)
	{
		func_390(1, 1120403456 /* Float: 100f */);
		fVar5 = (Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 - 1120403456);
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 = fVar5;
	}
	fVar6 = PED::_GET_PED_STAMINA(iVar1);
	if (fVar6 < 1f)
	{
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902883.f_303.f_2[iParam0 /*5*/] = -1;
		return;
	}
	if (fVar2 > 1056964608 && fVar2 <= 4f)
	{
		if (Global_1902883.f_303.f_2[iParam0 /*5*/] == -1)
		{
			Global_1902883.f_303.f_2[iParam0 /*5*/] = 0;
		}
	}
	if (fVar2 > 4f && fVar2 <= 6f)
	{
		if (Global_1902883.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902883.f_303.f_2[iParam0 /*5*/] == 0)
		{
			Global_1902883.f_303.f_2[iParam0 /*5*/] = 1;
		}
	}
	if (fVar2 > 6f)
	{
		if ((Global_1902883.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902883.f_303.f_2[iParam0 /*5*/] == 0) || Global_1902883.f_303.f_2[iParam0 /*5*/] == 1)
		{
			Global_1902883.f_303.f_2[iParam0 /*5*/] = 2;
		}
	}
	if (fVar2 > 1092616192)
	{
		if (((Global_1902883.f_303.f_2[iParam0 /*5*/] == -1 || Global_1902883.f_303.f_2[iParam0 /*5*/] == 0) || Global_1902883.f_303.f_2[iParam0 /*5*/] == 1) || Global_1902883.f_303.f_2[iParam0 /*5*/] == 2)
		{
			Global_1902883.f_303.f_2[iParam0 /*5*/] = 3;
		}
	}
	if (Global_1902883.f_303.f_2[iParam0 /*5*/] == -1)
	{
		return;
	}
	iVar7 = MISC::GET_GAME_TIMER();
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 == -1)
	{
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 = iVar7;
		return;
	}
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 + 5000 < iVar7)
	{
		if (Global_1902883.f_303.f_2[iParam0 /*5*/] == 0 || Global_1902883.f_303.f_2[iParam0 /*5*/] == 1)
		{
			func_391(iParam0, 1);
		}
		else if (Global_1902883.f_303.f_2[iParam0 /*5*/] == 2)
		{
			func_391(iParam0, 2);
		}
		else if (Global_1902883.f_303.f_2[iParam0 /*5*/] == 3)
		{
			func_391(iParam0, 3);
		}
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_1 = -1;
		Global_1902883.f_303.f_2[iParam0 /*5*/] = -1;
	}
}

void func_123(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	bool bVar3;
	float fVar4;
	int iVar5;

	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	fVar2 = ENTITY::GET_ENTITY_SPEED(iVar1);
	bVar3 = false;
	if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
	{
		bVar3 = true;
	}
	if (((!TASK::_IS_PED_LEADING_HORSE(Global_33) || TASK::_GET_LED_HORSE_FROM_PED(Global_33) != iVar1) || fVar2 < 1056964608) || !bVar3)
	{
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_3 = -1;
		return;
	}
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_4 >= 1101004800)
	{
		func_390(4, 1101004800 /* Float: 20f */);
		fVar4 = (Global_1902883.f_303.f_2[iParam0 /*5*/].f_4 - 1101004800);
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_4 = fVar4;
	}
	iVar5 = MISC::GET_GAME_TIMER();
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_3 == -1)
	{
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_3 = iVar5;
		return;
	}
	if (Global_1902883.f_303.f_2[iParam0 /*5*/].f_3 + 5000 < iVar5)
	{
		func_391(iParam0, 4);
		Global_1902883.f_303.f_2[iParam0 /*5*/].f_3 = -1;
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = func_158(iParam0);
	if (func_103(iParam0) >= ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7))
	{
		return;
	}
	iVar1 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return;
	}
	bVar2 = PED::_GET_RIDER_OF_MOUNT(iVar1, false) == Global_33;
	if (!bVar2)
	{
		return;
	}
	iVar3 = PED::_GET_LASSO_TARGET(Global_33);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (DECORATOR::DECOR_EXIST_ON(iVar3, "bHasBeenLassoedFromHorse"))
	{
		return;
	}
	bVar4 = func_392(iVar3, Global_33);
	if (bVar4)
	{
	}
	DECORATOR::DECOR_SET_BOOL(iVar3, "bHasBeenLassoedFromHorse", true);
}

void func_125(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_451 = { vParam1 };
	Global_38.f_289.f_1[iParam0 /*460*/].f_454 = uParam4;
}

struct<2> func_126(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_127(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_128(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

int func_129(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1902883[iParam0 /*43*/].f_42;
}

void func_130(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_42 = iParam1;
}

bool func_131()
{
	if (func_81(8192))
	{
		func_303(8192);
		return true;
	}
	return false;
}

bool func_132(int iParam0, int iParam1)
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

int func_133(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1) || PED::IS_PED_INJURED(iParam1))
	{
		return 0;
	}
	TASK::TASK_GO_TO_WHISTLE(iParam0, iParam1, 0);
	FLOCK::_0xFF1E339CE40EAAAF(iParam0, -1);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 48, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	return 1;
}

int func_134(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/].f_3;
}

void func_135(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_318(iParam0))
	{
		return;
	}
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_393(iVar0);
	func_337(iVar0);
	iVar1 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	iVar2 = func_134(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_67(iVar0))
		{
			return;
		}
	}
	func_136(iVar0);
	PED::SET_PED_KEEP_TASK(iParam0, true);
	if (bParam1 && func_2() == -1)
	{
		if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
		}
	}
}

void func_136(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_2 = 0;
	Global_1902883[iParam0 /*43*/].f_3 = 0;
}

void func_137(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_36 = 0;
}

int func_138(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/].f_36;
}

void func_139(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_36 = iParam1;
}

float func_140(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_141(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	iVar1 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar1))
	{
		return;
	}
	func_250(iParam0);
	func_250(5);
	func_349(iVar0, 5, iParam1);
	func_153(5, 1);
	if (PLAYER::_GET_ACTIVE_HORSE_FOR_PLAYER(iVar1) == iVar0)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar1, 0);
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		PED::SET_LOOTING_FLAG(iVar0, 0, true);
		PED::SET_LOOTING_FLAG(iVar0, 1, true);
		DECORATOR::DECOR_SET_STRING(iVar0, "loot_long_custom_anim_data_set", "DEAD_HORSE_SADDLE_SWAP_LONG_LOOT_ANIM_DATA");
		func_169(5);
		func_166(0);
		func_167(ENTITY::GET_ENTITY_COORDS(iVar0, true, false));
	}
	if (iParam1 == 2)
	{
		ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
	}
	func_279(iParam0);
	func_394(iParam0);
	func_105(iParam0);
	func_335();
}

bool func_142(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_1902883[iParam0 /*43*/].f_34;
}

float func_143(int iParam0)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0f;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0f;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return 0f;
	}
	fVar0 = PED::_GET_PED_MOTIVATION(iParam0, 3, 0);
	return fVar0;
}

int func_144(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1902883[iParam0 /*43*/].f_35;
}

void func_145(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_34 = iParam1;
}

void func_146(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_35 = iParam1;
}

bool func_147(int iParam0)
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	if (iVar0 != 0)
	{
		return iVar0 == Global_1904398.f_33[iParam0 /*9*/].f_1;
	}
	return false;
}

void func_148(int iParam0)
{
	if (!func_147(iParam0))
	{
		return;
	}
	func_395(1);
}

bool func_149(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_396(iParam0, &iVar0, &iVar1);
	iVar2 = Global_1904398[iVar0];
	return MISC::IS_BIT_SET(iVar2, iVar1);
}

void func_150(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_1904398[iVar1];
	MISC::CLEAR_BIT(&uVar3, iVar2);
	Global_1904398[iVar1] = uVar3;
}

int func_151(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_11;
}

void func_152(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_11 = iParam1;
}

void func_153(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_14 = iParam1;
}

int func_154()
{
	return Global_38.f_289.f_3222;
}

void func_155(int iParam0)
{
	if (!func_388(iParam0))
	{
		return;
	}
	func_397(iParam0);
	func_398(iParam0);
}

bool func_156(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17418.f_2585[iVar1], iVar2);
}

void func_157(int iParam0)
{
	Global_38.f_289.f_3245.f_4 = iParam0;
}

int func_158(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_9;
}

bool func_159(int iParam0)
{
	if (func_399(iParam0))
	{
		return true;
	}
	return false;
}

void func_160(int iParam0)
{
	int iVar0;
	bool bVar1;
	struct<29> Var2;

	if (func_74(iParam0) == 0)
	{
		if (func_400(iParam0))
		{
			func_401(iParam0);
		}
		return;
	}
	if (!func_400(iParam0))
	{
		iVar0 = func_158(iParam0);
		bVar1 = func_402(iVar0);
		func_403(iParam0, bVar1);
	}
	Var2.f_9 = -5.45926E-19f;
	Var2.f_14 = func_158(iParam0);
	Var2.f_15 = func_404(iParam0);
	Var2.f_16 = { func_245(iParam0) };
	Var2.f_24 = Var2.f_24;
	Var2.f_26 = BUILTIN::FLOOR(func_405(iParam0));
	Var2.f_25 = BUILTIN::FLOOR(func_294(iParam0));
	Var2.f_27 = func_406(iParam0, 0);
	Var2.f_28 = func_406(iParam0, 1);
	func_407(iParam0, &Var2);
}

bool func_161()
{
	int iVar0;

	iVar0 = func_162();
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_162()
{
	return Global_1902883.f_379;
}

int func_163(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (PED::_GET_CARRIER_AS_PED(iParam1) != iParam0)
	{
		return 0;
	}
	iVar0 = ENTITY::GET_CARRIABLE_ENTITY_STATE(iParam1);
	if (iVar0 == 5)
	{
		return 1;
	}
	if (iVar0 == 7)
	{
		return 1;
	}
	return 0;
}

int func_164()
{
	return Global_38.f_289.f_3222.f_1;
}

bool func_165(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

void func_166(int iParam0)
{
	Global_38.f_289.f_3222.f_1 = iParam0;
}

void func_167(vector3 vParam0)
{
	Global_38.f_289.f_3222.f_19 = { vParam0 };
}

Vector3 func_168()
{
	return Global_38.f_289.f_3222.f_19;
}

void func_169(int iParam0)
{
	Global_38.f_289.f_3222 = iParam0;
}

int func_170(vector3 vParam0, float fParam3, bool bParam4)
{
	float fVar0;
	int iVar1;

	if (func_161())
	{
		func_408();
		func_409();
	}
	fVar0 = func_69();
	if (!STREAMING::HAS_MODEL_LOADED(fVar0))
	{
		STREAMING::REQUEST_MODEL(fVar0, false);
		return 0;
	}
	iVar1 = OBJECT::CREATE_OBJECT(fVar0, vParam0, true, true, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	func_410(iVar1);
	ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, true);
	ENTITY::SET_ENTITY_HEADING(iVar1, fParam3);
	if (bParam4)
	{
		ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(iVar1, false);
	}
	TASK::TASK_CARRIABLE(iVar1, 2.002934E-09f, 0, 0, 0);
	return 1;
}

void func_171()
{
	Global_1902883.f_423 = 0;
	Global_1902883.f_423.f_1 = 0;
	Global_1902883.f_423.f_2 = 0;
}

bool func_172(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_255(Global_1902883[iParam0 /*43*/]))
	{
		return true;
	}
	return false;
}

bool func_173(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_459;
}

bool func_174()
{
	return Global_1902883.f_423.f_1;
}

var func_175()
{
	return Global_1902883.f_423;
}

void func_176(int iParam0)
{
	Global_1902883.f_423 = iParam0;
}

void func_177(int iParam0)
{
	Global_1902883.f_423.f_1 = iParam0;
}

bool func_178(int iParam0, int iParam1)
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

var func_179()
{
	return Global_1902883.f_423.f_2;
}

void func_180(int iParam0)
{
	Global_1902883.f_423.f_2 = iParam0;
}

bool func_181()
{
	return Global_1893611 & 2 != 0;
}

bool func_182()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_33, 440, true))
	{
		return false;
	}
	return true;
}

void func_183(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 440, !bParam0);
}

bool func_184()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_33, 439, true))
	{
		return false;
	}
	return true;
}

void func_185(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 439, !bParam0);
}

bool func_186()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	if (PED::GET_PED_CONFIG_FLAG(Global_33, 438, true))
	{
		return false;
	}
	return true;
}

void func_187(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 438, !bParam0);
}

bool func_188(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (Global_1902883[iParam0 /*43*/].f_41 == 0)
	{
		return false;
	}
	return true;
}

void func_189(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_41 = iParam1;
}

int func_190(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/].f_41;
}

Vector3 func_191(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_27;
}

bool func_192(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

Vector3 func_193(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_30;
}

float func_194(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_33;
}

void func_195(int iParam0, vector3 vParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_30 = { vParam1 };
}

void func_196(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_33 = fParam1;
}

void func_197(struct<7> Param0)
{
	int iVar0;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_156(34))
	{
		return;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_322(iVar0) || func_323(iVar0))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (func_229())
	{
		func_228(34, 0);
	}
}

void func_198(struct<7> Param0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;

	if (!Param0.f_5)
	{
		return;
	}
	if (func_411() >= 3)
	{
		return;
	}
	if (func_149(36) || func_147(36))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_412();
	if (iVar1 > 0)
	{
		if (iVar1 + 5000 < iVar0)
		{
			func_413();
		}
		else
		{
			return;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Param0.f_6))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_INJURED(Param0.f_6))
	{
		return;
	}
	bVar2 = false;
	if (TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (TASK::IS_PED_RUNNING(Param0.f_6))
	{
		bVar2 = true;
	}
	if (!bVar2)
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	fVar3 = PED::_GET_PED_STAMINA_NORMALIZED(Param0.f_6);
	if (fVar3 > 1041865114)
	{
		return;
	}
	if (func_149(34))
	{
		func_150(34);
	}
	if (func_147(34))
	{
		func_148(34);
	}
	if (func_149(35))
	{
		func_150(35);
	}
	if (func_147(35))
	{
		func_148(35);
	}
	if (func_229())
	{
		func_228(36, 1);
		func_414();
		func_415(MISC::GET_GAME_TIMER());
	}
}

void func_199(struct<7> Param0, struct<11> Param7, var uParam18)
{
	bool bVar0;

	if (!Param7.f_2)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (func_156(45))
	{
		return;
	}
	bVar0 = false;
	if ((func_121(32) && func_121(33)) && func_121(34))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	if (!func_318(Param0.f_6))
	{
		return;
	}
	if (!Param7.f_10)
	{
		return;
	}
	if (func_103(7) == 0)
	{
		return;
	}
	if (func_229())
	{
		func_228(45, 0);
	}
}

void func_200()
{
	int iVar0;

	if (!func_416())
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	if (func_417() < iVar0)
	{
		func_228(59, 0);
		func_418(0);
		func_419();
	}
}

void func_201(struct<4> Param0, var uParam4, var uParam5, var uParam6, vector3 vParam7, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, vector3 vParam19, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	struct<5> Var0;
	int iVar12;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar12 = -1;
	if (vParam7.z)
	{
		iVar12 = 0;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &vParam7, 12);
	}
	else if (vParam19.z)
	{
		iVar12 = 1;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &vParam19, 12);
	}
	if (!func_66(iVar12))
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (!Var0.f_4)
	{
		if (func_147(56))
		{
			func_148(56);
		}
		if (func_149(56))
		{
			func_150(56);
		}
		if (func_147(57))
		{
			func_148(57);
		}
		if (func_149(57))
		{
			func_150(57);
		}
		return;
	}
	if (TASK::_0x3F8387DB1B9F31B7(Var0, 0) && !func_420())
	{
		if (!func_156(57) && !func_156(58))
		{
			if (func_147(56))
			{
				func_148(56);
			}
			if (func_149(56))
			{
				func_150(56);
			}
			if (func_229())
			{
				if (func_421(-2.526389E-26f))
				{
					func_228(57, 0);
				}
				else
				{
					func_228(58, 0);
				}
			}
		}
	}
}

void func_202(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	iVar0 = func_422();
	bVar1 = false;
	iVar2 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		bVar1 = true;
		iVar2 = PED::_GET_HORSE_TAMING_STATE(iVar0);
	}
	iVar3 = func_423();
	switch (iVar3)
	{
		case 0:
			func_424(1);
		case 1:
			if (bVar1)
			{
				func_425(iVar0);
				func_424(2);
			}
			break;
		case 2:
			switch (iVar2)
			{
				case 1:
					func_424(3);
					break;
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 3:
			func_426();
			if (func_427(iVar0))
			{
				if (func_229())
				{
					func_228(48, 1);
				}
			}
			else if (func_229())
			{
				func_228(47, 1);
			}
			func_424(4);
			break;
		case 4:
			switch (iVar2)
			{
				case 1:
					if (func_147(47))
					{
						if (func_427(iVar0))
						{
							func_148(47);
							func_424(3);
						}
					}
					if (!bVar1)
					{
						func_424(11);
					}
					break;
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 5:
			func_426();
			if (func_229())
			{
				func_228(49, 1);
			}
			func_424(6);
			break;
		case 6:
			switch (iVar2)
			{
				case 2:
				case 3:
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					func_424(9);
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 7:
			func_426();
			if (func_229())
			{
				func_228(50, 1);
			}
			func_428(MISC::GET_GAME_TIMER());
			func_424(8);
			break;
		case 8:
			if (func_429() + 5000 < MISC::GET_GAME_TIMER())
			{
				func_424(6);
			}
			break;
		case 9:
			func_426();
			if (func_229())
			{
				func_228(51, 1);
			}
			func_424(10);
			break;
		case 10:
			switch (iVar2)
			{
				case 2:
				case 3:
					func_424(5);
					break;
				case 7:
				case 8:
				case 9:
					func_424(7);
					break;
				case 4:
				case 5:
					break;
				case 6:
					func_424(11);
					break;
				default:
					if (!bVar1)
					{
						func_424(11);
					}
					break;
			}
			break;
		case 11:
			func_430();
			func_426();
			func_424(0);
			break;
	}
}

void func_203(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;

	if (!func_431())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_406(iVar12, 0);
	bVar14 = false;
	iVar15 = -1;
	if (!bVar14)
	{
		if (iVar13 > 50)
		{
			if (func_432() < 3)
			{
				iVar15 = 26;
				bVar14 = true;
			}
		}
	}
	bVar16 = false;
	if (func_433() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar16 = true;
	}
	if (bVar16)
	{
		if (!bVar14)
		{
			func_434(0);
			func_435();
			return;
		}
	}
	if (!bVar16)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(iVar15, 1);
	func_436(MISC::GET_GAME_TIMER());
	switch (iVar15)
	{
		case 26:
			func_437();
			break;
		default:
			break;
	}
	func_434(0);
	func_435();
}

void func_204(struct<6> Param0, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	struct<5> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	bool bVar15;
	int iVar16;
	bool bVar17;

	if (!func_438())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (!Param0.f_5)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar12 = 0;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &Param7, 12);
	}
	else if (Param19.f_10)
	{
		iVar12 = 1;
		MISC::COPY_SCRIPT_STRUCT(&Var0, &Param19, 12);
	}
	else
	{
		return;
	}
	if (!Var0.f_1)
	{
		return;
	}
	if (!Var0.f_2)
	{
		return;
	}
	if (Var0.f_3)
	{
		return;
	}
	if (Var0.f_4)
	{
		return;
	}
	iVar13 = func_439(iVar12, 0);
	iVar14 = func_439(iVar12, 1);
	bVar15 = false;
	iVar16 = -1;
	if (!bVar15)
	{
		if (func_440(32) < 3)
		{
			if (iVar13 == 0 && iVar14 == 0)
			{
				iVar16 = 32;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 == 0)
		{
			if (func_440(30) < 3)
			{
				iVar16 = 30;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_440(31) < 3)
			{
				if (!PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 31;
					bVar15 = true;
				}
			}
		}
	}
	if (!bVar15)
	{
		if (iVar13 < 50)
		{
			if (func_440(28) < 1)
			{
				iVar16 = 28;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 < 50)
		{
			if (func_440(29) < 1)
			{
				iVar16 = 29;
				bVar15 = true;
			}
		}
	}
	if (!bVar15)
	{
		if (iVar14 == 0)
		{
			if (func_440(33) < 3)
			{
				if (PED::IS_PED_SWIMMING(Var0))
				{
					iVar16 = 33;
					bVar15 = true;
				}
			}
		}
	}
	bVar17 = false;
	if (func_441() + 2500 < MISC::GET_GAME_TIMER())
	{
		bVar17 = true;
	}
	if (bVar17)
	{
		if (!bVar15)
		{
			func_442(0);
			func_443();
			return;
		}
	}
	if (!bVar17)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(iVar16, 1);
	func_436(MISC::GET_GAME_TIMER());
	func_442(0);
	func_443();
}

void func_205()
{
	int iVar0[6];
	int iVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;

	if (func_444() == 0)
	{
		return;
	}
	iVar7 = 0;
	iVar0[iVar7] = 32;
	iVar7++;
	iVar0[iVar7] = 30;
	iVar7++;
	iVar0[iVar7] = 31;
	iVar7++;
	iVar0[iVar7] = 28;
	iVar7++;
	iVar0[iVar7] = 29;
	iVar7++;
	iVar0[iVar7] = 43;
	iVar7++;
	bVar8 = false;
	iVar9 = 0;
	while (iVar9 < iVar7)
	{
		if (bVar8)
		{
		}
		else if (func_147(iVar0[iVar9]))
		{
			bVar8 = true;
		}
		iVar9++;
	}
	if (bVar8)
	{
		if (!func_445())
		{
			bVar10 = false;
			bVar11 = false;
			bVar12 = false;
			bVar13 = false;
			if (func_147(32))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (func_147(30))
			{
				bVar12 = true;
			}
			if (func_147(31))
			{
				bVar13 = true;
			}
			if (func_147(28))
			{
				bVar12 = true;
			}
			if (func_147(29))
			{
				bVar13 = true;
			}
			if (func_147(43))
			{
				bVar12 = true;
				bVar13 = true;
			}
			if (bVar10)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 3);
			}
			if (bVar11)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 3);
			}
			if (bVar12)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 3);
			}
			if (bVar13)
			{
				UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 3);
			}
			func_446(1);
		}
	}
	else if (func_445())
	{
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
		UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
		func_446(0);
		func_447();
	}
}

void func_206(struct<5> Param0, var uParam5, var uParam6)
{
	int iVar0;
	vector3 vVar1;
	int iVar4;

	if (!func_448())
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (Param0.f_4)
	{
		return;
	}
	if (func_156(55))
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_157(0);
	if (func_74(0) == 1)
	{
		return;
	}
	func_228(55, 0);
	iVar0 = func_449(9, 1, 1, 0);
	if (iVar0 != 86)
	{
		iVar0 = func_449(9, 1, 1, 1);
	}
	if (!func_450(iVar0))
	{
		return;
	}
	vVar1 = { func_451(iVar0) };
	if (func_192(vVar1))
	{
		return;
	}
	iVar4 = MAP::BLIP_ADD_FOR_COORDS(6.398934E-33f, vVar1);
	MAP::SET_BLIP_SPRITE(iVar4, 2.273519E+31f, true);
	MAP::BLIP_ADD_MODIFIER(iVar4, 4.185971E-18f);
	MAP::BLIP_ADD_MODIFIER(iVar4, 1.548688E-08f);
	func_452(&iVar4);
}

void func_207()
{
	int iVar0;

	iVar0 = func_453();
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return;
	}
	if (func_149(55))
	{
		return;
	}
	if (func_147(55))
	{
		return;
	}
	MAP::REMOVE_BLIP(&iVar0);
}

void func_208(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (func_298() && !func_121(41))
	{
		return;
	}
	if (!func_454())
	{
		return;
	}
	if (func_156(65))
	{
		return;
	}
	if (func_455(Global_33))
	{
		return;
	}
	if (func_456())
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(65, 0);
}

void func_209(struct<4> Param0, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param0.f_2)
	{
		return;
	}
	if (func_298() && !func_121(41))
	{
		return;
	}
	if (func_298() && func_305() == 8)
	{
		return;
	}
	if (!func_161())
	{
		return;
	}
	if (func_457(7))
	{
		func_458();
		return;
	}
	if (func_164() == 3)
	{
		return;
	}
	if (func_455(Global_33))
	{
		return;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_459();
	if (iVar1 == 0)
	{
		func_460(MISC::GET_GAME_TIMER());
		return;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return;
	}
	if (func_140(Global_33, func_162(), 1, 1) < 1120403456)
	{
		return;
	}
	if (func_156(64))
	{
		if ((iVar1 + 600000) > iVar0)
		{
			return;
		}
	}
	func_228(64, 1);
	func_460(MISC::GET_GAME_TIMER());
}

void func_210(struct<7> Param0, int iParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!Param0.f_5)
	{
		return;
	}
	iVar0 = func_440(66);
	if (iVar0 >= 3)
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(Param0.f_6);
	if (func_322(iVar1) || func_323(iVar1))
	{
		return;
	}
	if (!TASK::IS_PED_SPRINTING(Param0.f_6))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		return;
	}
	if (PED::IS_PED_SWIMMING(Param0.f_6))
	{
		return;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(iParam7))
	{
		return;
	}
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&uVar2, iParam7, 4, 0))
	{
		return;
	}
	if (func_461() == iParam7)
	{
		return;
	}
	if (func_229())
	{
		func_462(iParam7);
		func_228(66, 0);
	}
}

void func_211(struct<4> Param0, var uParam4, var uParam5, var uParam6, struct<11> Param7, var uParam18, struct<11> Param19, var uParam30)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_2)
	{
		return;
	}
	if (!Param0.f_3)
	{
		return;
	}
	if (!Param7.f_10 && !Param19.f_10)
	{
		if (func_463())
		{
			func_464(0);
		}
		return;
	}
	if (func_465() < 2)
	{
		return;
	}
	if (Param7.f_10)
	{
		iVar0 = 0;
	}
	else if (Param19.f_10)
	{
		iVar0 = 1;
	}
	if (func_103(iVar0) >= 2)
	{
		return;
	}
	iVar1 = func_440(46);
	if (iVar1 >= 1)
	{
		return;
	}
	if (func_463())
	{
		return;
	}
	func_464(1);
	func_466();
	if (func_467() <= 1)
	{
		return;
	}
	if (!func_229())
	{
		return;
	}
	func_228(46, 1);
}

void func_212(struct<2> Param0, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	int iVar0;
	int iVar1;

	if (!Param0.f_1)
	{
		return;
	}
	if (!func_455(Global_33))
	{
		return;
	}
	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0, true, false))
	{
		return;
	}
	if (!func_468(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (func_469(iVar1))
	{
		return;
	}
	if (func_229())
	{
		func_228(67, 1);
	}
}

bool func_213(struct<2> Param0)
{
	if (!func_470(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_471(Param0))
	{
		return false;
	}
	return true;
}

int func_214()
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	iVar1 = 0;
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::GET_MOUNT(Global_33) == iVar0)
		{
			iVar1 = 1;
		}
	}
	iVar2 = 0;
	bVar3 = WEAPON::_0xAFFD0CCF31F469B8(iVar0);
	if (func_263(bVar3, 0))
	{
		iVar2 = 1;
	}
	bVar4 = false;
	if (func_181() || func_354())
	{
		bVar4 = true;
	}
	if (iVar1 || iVar2)
	{
		if (bVar4)
		{
			return 1;
		}
	}
	return 0;
}

bool func_215(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return true;
}

void func_216(var uParam0)
{
	int iVar0;

	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		uParam0->f_10[iVar0 /*8*/].f_1 = 0;
		uParam0->f_10[iVar0 /*8*/].f_2 = 0;
		uParam0->f_10[iVar0 /*8*/].f_3 = 0;
		uParam0->f_10[iVar0 /*8*/].f_4 = 0;
		uParam0->f_10[iVar0 /*8*/].f_5 = 0;
		uParam0->f_10[iVar0 /*8*/].f_6 = 0;
		uParam0->f_10[iVar0 /*8*/].f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_217(int iParam0)
{
	if (func_472())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_218(int iParam0, int iParam1)
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

bool func_219()
{
	return func_473() == 4;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_221(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_474(&iParam0);
		if (!func_263(bVar0, 0))
		{
			bVar0 = func_475(iParam0);
		}
	}
	else
	{
		bVar0 = func_475(iParam0);
	}
	return bVar0;
}

int func_222(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_476(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1, iParam2, bParam3, iParam4);
}

bool func_223(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 1;
	switch (iParam3)
	{
		case 0:
			break;
		case 1:
		case 2:
			iVar0 = 2;
			break;
	}
	if (func_477(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam2) < iVar0)
	{
		return true;
	}
	return false;
}

int func_224(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_263(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &Var5, &Var0, bParam1, Var0.f_4, iParam2, 6.028273E-12f))
	{
		return 1;
	}
	return 0;
}

void func_225(bool bParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, bParam0, 96);
}

bool func_226(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar0);
	iVar2 = func_480(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (TASK::_0x7CB99FADDE73CD1B(iVar0))
	{
		return false;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&iVar5, iVar0, iVar1))
	{
		return false;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(iVar0, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0))
		{
			iVar6 = func_481(iVar5);
			return iVar6;
		}
		return iVar5;
	}
	switch (iVar1)
	{
		case 2:
			return -1.013623E+11f;
		case 1:
			return 2.192584E+23f;
		case 0:
			return -1.656824E+37f;
		default:
			break;
	}
	return -1.656824E+37f;
}

bool func_227(bool bParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_482(bParam0);
	}
	return func_483(bParam0, iParam1);
}

void func_228(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_485(iVar0, iVar1);
}

bool func_229()
{
	if (!func_486() && func_487(1))
	{
		return true;
	}
	return false;
}

bool func_230(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return true;
}

bool func_231(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_446;
}

bool func_232(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "StableOwnedHorse"))
	{
		return true;
	}
	return false;
}

int func_233(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_1;
}

void func_234(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	DECORATOR::DECOR_SET_INT(iParam0, "StableOwnedHorse", iParam1);
}

int func_235(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -15;
	}
	if (iParam0 >= 7)
	{
		return -15;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_2;
}

void func_236(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	func_488(func_242(), iParam0, uParam1, uParam2, uParam3, uParam4, uParam5, uParam6);
}

void func_237(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	sVar0 = "StableOwnedHorse";
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		DECORATOR::DECOR_REMOVE(iParam0, sVar0);
	}
}

void func_238(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_347(&(Global_38.f_289.f_1[iParam0 /*460*/].f_446));
}

int func_239(int iParam0)
{
	int iVar0;

	if (!func_232(iParam0))
	{
		return -1;
	}
	iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "StableOwnedHorse");
	return iVar0;
}

void func_240(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_446 = iParam1;
}

void func_241(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_1 = iParam1;
}

int func_242()
{
	return Global_1902565;
}

void func_243(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_446.f_2 = iParam1;
}

bool func_244(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return true;
	}
	return false;
}

struct<8> func_245(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "", 64);
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return cVar0;
	}
	if (iParam0 >= 7)
	{
		return cVar0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/];
}

char* func_246(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_BUELL_WARVETS"):
			return "HORSE_NAME_BUELL_WARVETS";
		case joaat("A_C_HORSE_JOHN_ENDLESSSUMMER"):
			return "HORSE_NAME_JOHN_ENDLESSSUMMER";
	}
	return "";
}

void func_247(int iParam0, struct<8> Param1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/] = { Param1 };
}

void func_248(int iParam0)
{
	int iVar0;
	char* sVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1902883[iParam0 /*43*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	sVar1 = func_489(func_245(iParam0));
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_SET_PED_PROMPT_NAME(iVar0, sVar1);
	}
}

bool func_249(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return (Global_1902883[iParam0 /*43*/].f_23 && iParam1) != 0;
}

void func_250(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
	{
		MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
		MAP::REMOVE_BLIP(&(Global_1902883[iParam0 /*43*/].f_25));
	}
	Global_1902883[iParam0 /*43*/].f_24 = 0;
}

void func_251(var uParam0)
{
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_491(func_490(255), 4.808429E-35f));
	}
	else if (func_492())
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_493();
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

void func_252(var uParam0, bool bParam1)
{
	char* sVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		MAP::_SET_BLIP_NAME(*uParam0, func_491(func_490(255), 4.808429E-35f));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_492())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_493())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (MISC::COMPARE_STRINGS(sVar0, "", false, -1) != 0)
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(*uParam0, sVar0);
		}
	}
}

void func_253(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -2.616704E+24f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1.231009E-30f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -321.8686f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1.174981E+29f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 8.190317E+08f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -5.656023E-27f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -2.065888E-11f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 1.752676E-23f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -1389.768f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -8.618238E+37f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -2.303327E+29f);
}

void func_254(int iParam0)
{
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 9.52931E-15f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, 8.426834E-19f);
	MAP::BLIP_REMOVE_MODIFIER(iParam0, -4.093554E+31f);
}

bool func_255(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, -1.150952E-26f))
	{
		return true;
	}
	return false;
}

void func_256(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!func_121(39))
	{
		if (func_249(iParam0, 128))
		{
			return;
		}
		if (func_494(iParam1, &uVar1))
		{
			iVar2 = func_495(iParam1);
			if (func_496(iVar0, iParam1) != iVar2)
			{
				func_497(iVar0, iParam1, iVar2);
			}
		}
		return;
	}
	if (func_320(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_498(iParam0, iParam1);
	if (fVar4 >= 1106247680)
	{
		func_499(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_439(iParam0, iParam1);
	func_500(iVar0, iParam0, iParam1);
	if (func_501(iParam0, iParam1) > 0f)
	{
		func_502(iParam0, iParam1);
	}
	else
	{
		func_503(iVar0, iParam0, iParam1);
		iVar6 = func_439(iParam0, iParam1);
		func_504(iParam0, iParam1, iVar5, iVar6);
	}
	func_499(iParam0, iParam1, iVar3);
}

void func_257(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;

	if (PED::IS_PED_INJURED(Global_33))
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return;
	}
	if (!func_121(40))
	{
		if (func_505(iParam1, &iVar1))
		{
			iVar2 = func_506(iParam1);
			ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iVar0, iVar1, iVar2);
		}
		return;
	}
	if (func_320(iVar0))
	{
		return;
	}
	iVar3 = MISC::GET_GAME_TIMER();
	fVar4 = func_507(iParam0, iParam1);
	if (fVar4 >= 1106247680)
	{
		func_508(iParam0, iParam1, iVar3);
		return;
	}
	iVar5 = func_406(iParam0, iParam1);
	func_509(iVar0, iParam0, iParam1);
	if (func_510(iParam0, iParam1) > 0f)
	{
		func_511(iParam0, iParam1);
	}
	else
	{
		func_512(iVar0, iParam0, iParam1);
		iVar6 = func_406(iParam0, iParam1);
		func_513(iParam0, iParam1, iVar5, iVar6);
	}
	func_508(iParam0, iParam1, iVar3);
}

void func_258(int iParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	struct<8> Var9;
	bool bVar17;
	struct<2> Var18;
	struct<6> Var40;
	int iVar47;
	struct<2> Var48;
	struct<6> Var70;
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	float fVar82;
	float fVar83;
	float fVar84;

	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_66(iParam0))
	{
		return;
	}
	iVar0 = func_78(iParam0);
	fVar1 = 1f;
	fVar2 = 1f;
	fVar3 = 0f;
	fVar4 = 1f;
	fVar5 = 1f;
	fVar6 = 0f;
	iVar7 = 0;
	iVar8 = 0;
	if (iParam0 == func_154())
	{
		Var9 = { func_284() };
		bVar17 = Var9.f_1;
		if (func_263(bVar17, 0))
		{
			Var18.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar17, &Var18);
			iVar47 = 0;
			while (iVar47 < Var18)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var18.f_1[iVar47], &Var40);
				switch (Var40.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 1008981770)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var40.f_2) * 1008981770)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var40.f_5 * 1008981770));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var40.f_5 * 1008981770));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var40.f_5 * 1008981770));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var40.f_5 * 1008981770));
						break;
				}
				iVar47++;
			}
		}
		bVar17 = Var9.f_3;
		if (func_263(bVar17, 0))
		{
			Var48.f_1 = 20;
			ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar17, &Var48);
			iVar77 = 0;
			while (iVar77 < Var48)
			{
				ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var48.f_1[iVar77], &Var70);
				switch (Var70.f_1)
				{
					case 2086291460:
						iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 1008981770)));
						break;
					case -1620444701:
						iVar7 = (iVar7 + BUILTIN::FLOOR((IntToFloat(Var70.f_2) * 1008981770)));
						break;
					case -225223329:
						fVar3 = (fVar3 + (Var70.f_5 * 1008981770));
						break;
					case 1167068375:
						fVar6 = (fVar6 + (Var70.f_5 * 1008981770));
						break;
					case -845587290:
						fVar5 = (fVar5 - (Var70.f_5 * 1008981770));
						break;
					case 1605773431:
						fVar4 = (fVar4 + (Var70.f_5 * 1008981770));
						break;
				}
				iVar77++;
			}
		}
	}
	if (func_514())
	{
		iVar7++;
	}
	func_515(0, fVar3);
	func_515(1, fVar6);
	iVar78 = func_516();
	iVar79 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78);
	if (iVar79 != iVar7)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar78, iVar7);
	}
	iVar80 = func_517();
	iVar81 = ATTRIBUTE::GET_ATTRIBUTE_BONUS_RANK(iVar0, iVar80);
	if (iVar81 != iVar8)
	{
		ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iVar0, iVar80, iVar8);
	}
	fVar82 = PED::_GET_HEALTH_RECHARGE_MULTIPLIER(iVar0);
	if (fVar82 != fVar1)
	{
		PED::_SET_HEALTH_RECHARGE_MULTIPLIER(iVar0, fVar1);
	}
	fVar2 = fVar2;
	fVar83 = PED::_GET_STAMINA_RECHARGE_MULTIPLIER(iVar0);
	if (fVar83 != fVar4)
	{
		PED::_SET_STAMINA_RECHARGE_MULTIPLIER(iVar0, fVar4);
	}
	fVar84 = PED::_GET_STAMINA_DEPLETION_MULTIPLIER(iVar0);
	if (fVar84 != fVar5)
	{
		PED::_SET_STAMINA_DEPLETION_MULTIPLIER(iVar0, fVar5);
	}
}

void func_259(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;
	int iVar7;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_220(iVar6);
		if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, iVar0, iVar1, 0))
		{
		}
		else
		{
			iVar7 = Var2.f_3;
			if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
			{
			}
			else if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7) && !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar7))
			{
			}
			else
			{
				if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar7))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar7, true, true);
				}
				ENTITY::_DELETE_CARRIABLE(&iVar7);
			}
		}
		iVar6++;
	}
}

void func_260(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/] = iParam1;
}

struct<4> func_261(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_518(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_262(2.982335E+09f, func_519(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_262(2.982335E+09f, func_519(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_262(2.982335E+09f, func_519(), -5.45926E-19f, bParam0);
}

struct<4> func_262(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_263(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_518(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_263(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_264(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_520(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_262(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_518(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

void func_265(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_266(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_263(bParam0, 0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return false;
	}
	if (func_521(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_522(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_518(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_267(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_522(0))
	{
		return func_523(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_524(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_518(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_268(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if ((func_249(iParam0, 2) || func_249(iParam0, 4)) || func_249(iParam0, 8))
	{
		return true;
	}
	return false;
}

Vector3 func_269(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_19;
}

float func_270(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_22;
}

void func_271(int iParam0)
{
	func_525(iParam0);
	func_526(iParam0);
}

bool func_272()
{
	bool bVar0;

	bVar0 = PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY();
	if (bVar0)
	{
		return true;
	}
	return false;
}

bool func_273(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_527(iParam0))
	{
		iVar0 = 0;
	}
	if (!func_528(iParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

int func_274(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	int iVar0;

	if (!PED::_IS_THIS_MODEL_A_HORSE(iParam0))
	{
		return 0;
	}
	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam0));
	return iVar0;
}

void func_275(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (func_319(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
	}
	PED::_CLEAR_ACTIVE_ANIMAL_OWNER(iParam0, false);
	PED::SET_PED_OWNS_ANIMAL(Global_33, iParam0, false);
	PED::_SET_PED_PERSONALITY(iParam0, 2.997277E-34f);
	iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
	iVar2 = PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iVar1);
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iVar2);
	ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
	POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(iParam0, 1);
	PED::_SET_PED_CAN_BE_LASSOED(iParam0, false);
	PLAYER::_SET_PLAYER_MOUNT_STATE_ACTIVE(iVar0, true);
	PED::REQUEST_PED_VISIBILITY_TRACKING(iParam0);
	FLOCK::_SET_ANIMAL_IS_WILD(iParam0, false);
	if (func_318(iParam0))
	{
		iVar3 = func_333(iParam0);
		if (func_529(iVar3))
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 324, true);
		}
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 211, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 209, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 400, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 297, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 312, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 113, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 301, false);
	PED::SET_PED_CONFIG_FLAG(iParam0, 277, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 319, true);
	PED::SET_PED_CONFIG_FLAG(iParam0, 6, true);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 25, false);
	FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(iParam0, 24, false);
}

void func_276(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	int iVar7;
	int iVar8;

	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_281(iParam1);
	DECORATOR::DECOR_SET_INT(iParam0, "HorseGender", iVar0);
	iVar1 = func_103(iParam1);
	func_530(iParam0, iVar1);
	PED::_SET_MOUNT_BONDING_LEVEL(iParam0, iVar1);
	iVar2 = BUILTIN::FLOOR(func_294(iParam1));
	func_531(iParam0, iVar2);
	iVar4 = 0;
	while (iVar4 < 2)
	{
		if (func_494(iVar4, &uVar3))
		{
			iVar5 = func_439(iParam1, iVar4);
			func_497(iParam0, iVar4, iVar5);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < 3)
	{
		if (func_505(iVar7, &uVar6))
		{
			iVar5 = func_406(iParam1, iVar7);
			func_387(iParam0, iVar7, iVar5);
		}
		iVar7++;
	}
	iVar8 = PLAYER::PLAYER_ID();
	PED::_0xA691C10054275290(iParam0, iVar8, func_532(iParam1));
	if (iParam1 == 0)
	{
		PED::_0x6734F0A6A52C371C(iVar8, func_533(iParam1));
		PED::_0x024EC9B649111915(iParam0, true);
	}
}

void func_277(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!func_230(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_534(iVar0, &(Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar1 /*96*/]), iVar1);
		iVar1++;
	}
}

void func_278(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;

	if (!func_215(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!func_230(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar2 = Global_38.f_289.f_1[iParam0 /*460*/].f_382[iVar1 /*5*/];
		if (func_263(bVar2, 0))
		{
			bVar3 = bVar2;
			uVar4 = Global_38.f_289.f_1[iParam0 /*460*/].f_382[iVar1 /*5*/].f_1;
			uVar5 = Global_38.f_289.f_1[iParam0 /*460*/].f_382[iVar1 /*5*/].f_2;
			PED::_0xC412AA1C73111FE0(iVar0, bVar3, uVar4, uVar5, 0);
		}
		iVar1++;
	}
}

void func_279(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_535(iParam0);
	func_536();
}

float func_280(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_444.f_1;
}

int func_281(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_10;
}

void func_282(int iParam0, int iParam1)
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

Vector3 func_283(int iParam0)
{
	vector3 vVar0;
	var uVar3;
	var uVar4;
	var uVar5;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return vVar0;
	}
	if (iParam0 >= 7)
	{
		return vVar0;
	}
	if (!func_537(iParam0, &uVar3))
	{
	}
	if (!func_538(iParam0, &uVar4))
	{
	}
	if (!func_539(iParam0, &uVar5))
	{
	}
	vVar0.x = uVar3;
	vVar0.f_1 = uVar4;
	vVar0.f_2 = uVar5;
	return vVar0;
}

struct<8> func_284()
{
	struct<8> Var0;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	var uVar12;
	var uVar13;
	var uVar14;
	var uVar15;

	if (func_540(3.948416E-10f, &uVar8))
	{
		Var0.f_6 = uVar8;
	}
	if (func_540(-1.456167E-29f, &uVar9))
	{
		Var0.f_7 = uVar9;
	}
	if (func_540(-1157.516f, &uVar10))
	{
		Var0.f_4 = uVar10;
	}
	if (func_540(-0.0001455402f, &uVar11))
	{
		Var0 = uVar11;
	}
	if (func_540(2.842945E-27f, &uVar12))
	{
		Var0.f_2 = uVar12;
	}
	if (func_540(6.295092E+08f, &uVar13))
	{
		Var0.f_5 = uVar13;
	}
	if (func_540(0.001620535f, &uVar14))
	{
		Var0.f_3 = uVar14;
	}
	if (func_540(-8.769617E+23f, &uVar15))
	{
		Var0.f_1 = uVar15;
	}
	return Var0;
}

void func_285(var uParam0)
{
	func_541(uParam0);
	func_542(uParam0, 0);
	func_543(uParam0, 0);
	func_544(uParam0, 0);
	func_545(uParam0, 0);
	func_546(uParam0, 0);
	func_547(uParam0, 0);
	func_548(uParam0, 0);
}

int func_286(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_505(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

float func_287(int iParam0)
{
	float fVar0;

	fVar0 = 2.731618E+24f;
	if (iParam0 <= 0)
	{
		fVar0 = -2.808942E-35f;
	}
	else if (iParam0 < 5)
	{
		fVar0 = -1.557352E-24f;
	}
	else if (iParam0 < 10)
	{
		fVar0 = -1.418308E+27f;
	}
	else if (iParam0 < 15)
	{
		fVar0 = -3.895403f;
	}
	else if (iParam0 < 20)
	{
		fVar0 = -3.50033E+08f;
	}
	else if (iParam0 < 25)
	{
		fVar0 = -1.422214E-07f;
	}
	else if (iParam0 < 30)
	{
		fVar0 = 1.166661E-05f;
	}
	else if (iParam0 < 35)
	{
		fVar0 = 1.437654E-33f;
	}
	else if (iParam0 < 40)
	{
		fVar0 = 1.295618E-24f;
	}
	else if (iParam0 < 45)
	{
		fVar0 = -5.348073E+15f;
	}
	else if (iParam0 < 50)
	{
		fVar0 = 2.731618E+24f;
	}
	else if (iParam0 < 55)
	{
		fVar0 = 0.006691444f;
	}
	else if (iParam0 < 60)
	{
		fVar0 = 4.768216E+07f;
	}
	else if (iParam0 < 65)
	{
		fVar0 = 6.446228E-21f;
	}
	else if (iParam0 < 70)
	{
		fVar0 = -5.534319E-37f;
	}
	else if (iParam0 < 75)
	{
		fVar0 = -7.91834E-28f;
	}
	else if (iParam0 < 80)
	{
		fVar0 = 1.207067E+24f;
	}
	else if (iParam0 < 85)
	{
		fVar0 = 1.04656E+35f;
	}
	else if (iParam0 < 90)
	{
		fVar0 = -0.0005331089f;
	}
	else if (iParam0 < 95)
	{
		fVar0 = -5.200772E+07f;
	}
	else if (iParam0 >= 95)
	{
		fVar0 = 1.364584E+32f;
	}
	return fVar0;
}

void func_288(int iParam0, float fParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_1 = fParam1;
}

bool func_289(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_457;
}

void func_290(int iParam0, bool bParam1)
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

void func_291(int iParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
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
	func_549(iParam0);
	func_550(iParam0, uParam1);
	func_551(iParam0);
	func_552(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_553(iParam0, iParam3, 0);
	}
	if (bParam4)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, true);
	}
}

void func_292(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_19 = { 0f, 0f, 0f };
	Global_1902883[iParam0 /*43*/].f_22 = 0f;
}

void func_293(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_317(iParam0, 1);
}

float func_294(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1;
}

int func_295(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 2.175367f;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

float func_296(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_297()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_298()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_299()
{
	return Global_1902883.f_364;
}

void func_300(int iParam0)
{
	Global_1902883.f_364.f_9 = iParam0;
}

void func_301(float fParam0)
{
	Global_1902883.f_364.f_10 = fParam0;
}

void func_302(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (Global_1902883.f_364.f_1[iParam0] != iParam1)
	{
	}
	Global_1902883.f_364.f_1[iParam0] = iParam1;
}

void func_303(int iParam0)
{
	Global_1902883.f_302 = (Global_1902883.f_302 - (Global_1902883.f_302 && iParam0));
}

void func_304(int iParam0)
{
	Global_1902883.f_364.f_11 = iParam0;
}

int func_305()
{
	return Global_1896646.f_41;
}

bool func_306()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

bool func_307(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_151(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_308()
{
	int iVar0;

	iVar0 = Global_38.f_289.f_1[5 /*460*/].f_11;
	switch (iVar0)
	{
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(func_78(6)) && func_140(Global_33, func_78(6), 1, 1) <= 1117782016)
			{
				func_312("WHISTLE_NEAR_UNBONDED", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_312("WHISTLE_HORSE_DEAD", 10000, 0, 0, 0, 1);
			}
			break;
		case 2:
			func_312("WHISTLE_HORSE_STOLEN", 10000, 0, 0, 0, 1);
			break;
	}
}

bool func_309(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case joaat("L_14_CAVE_INT"):
			case joaat("GAP_MINE_INT"):
			case joaat("MIL_MINE_CAVE_INT"):
			case joaat("M05_BEARCAVE_MAIN"):
			case joaat("ELH_SEACAVES_INT"):
			case joaat("BEA_01_INT"):
			case joaat("AGU_FUS_CAVE_INT"):
			case 1633500362:
				return true;
		}
	}
	return false;
}

bool func_310(int iParam0)
{
	var uVar0;
	int iVar3;

	if (INTERIOR::IS_VALID_INTERIOR(iParam0))
	{
		INTERIOR::GET_INTERIOR_LOCATION_AND_NAMEHASH(iParam0, &uVar0, &iVar3);
		switch (iVar3)
		{
			case 653987431:
			case joaat("HEA_TUNNEL_02"):
			case joaat("J_16_TUNNEL_INT"):
				return true;
		}
	}
	return false;
}

bool func_311(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return true;
	}
	return false;
}

int func_312(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_313(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (MAP::DOES_BLIP_EXIST(Global_1902883[iParam0 /*43*/].f_25))
	{
		if (Global_1902883[iParam0 /*43*/].f_24 == 2)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, -5.656023E-27f);
			MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, -5.656023E-27f);
		}
		else if (Global_1902883[iParam0 /*43*/].f_24 == 1)
		{
			MAP::BLIP_REMOVE_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, -1.174981E+29f);
			MAP::BLIP_ADD_MODIFIER(Global_1902883[iParam0 /*43*/].f_25, -1.174981E+29f);
		}
	}
}

void func_314(int iParam0)
{
	struct<12> Var0;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<12> Var15;
	struct<12> Var27;
	int iVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	struct<12> Var44;
	int iVar56;
	int iVar57;
	vector3 vVar58;
	float fVar61;
	vector3 vVar62;
	bool bVar65;
	bool bVar66;
	bool bVar67;
	int iVar68;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_20(iParam0, &Var0);
	iVar12 = func_158(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar12))
	{
		func_302(iParam0, 6);
		return;
	}
	iVar13 = func_103(iParam0);
	iVar14 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar12, 7);
	func_20(0, &Var15);
	func_20(1, &Var27);
	if (iParam0 == 1 && !Var27.f_2)
	{
		func_302(iParam0, 6);
		return;
	}
	iVar39 = MISC::GET_GAME_TIMER();
	bVar40 = false;
	if (iParam0 == 0)
	{
		bVar40 = true;
		if (!Var15.f_11)
		{
			if (Var27.f_11 && !Var27.f_10)
			{
				bVar40 = false;
			}
		}
	}
	if (iParam0 == 1)
	{
		if (!Var15.f_2)
		{
			bVar40 = true;
		}
	}
	if (bVar40)
	{
	}
	switch (func_315(iParam0))
	{
		case 0:
			func_302(iParam0, 1);
		case 1:
			if (iParam0 == 0)
			{
				if (func_74(0) == 1 && !func_66(0))
				{
					func_302(iParam0, 2);
					return;
				}
			}
			if (!func_66(iParam0))
			{
				func_302(iParam0, 6);
				return;
			}
			if (func_103(iParam0) < 1)
			{
				func_302(iParam0, 6);
				return;
			}
			if (!Var0.f_11)
			{
				if (func_554())
				{
					func_302(iParam0, 2);
					return;
				}
				bVar41 = false;
				if (iParam0 == 0)
				{
					if (Var27.f_10)
					{
						bVar41 = true;
					}
				}
				if (iParam0 == 1)
				{
					if (Var15.f_10)
					{
						bVar41 = true;
					}
				}
				if (!bVar40 && bVar41)
				{
					bVar40 = true;
				}
				if (!func_229())
				{
					bVar40 = false;
				}
				if (bVar40)
				{
					iVar42 = -1;
					iVar43 = -1;
					if (func_440(1) < 3)
					{
						iVar42 = 1;
						if (iVar13 < iVar14)
						{
							iVar43 = 6;
						}
					}
					else
					{
						iVar42 = 2;
					}
					if (bVar41)
					{
						if (iParam0 == 0)
						{
							iVar42 = 3;
						}
						else if (iParam0 == 1)
						{
							iVar42 = 4;
						}
					}
					else
					{
						if (iParam0 == 0)
						{
							MISC::COPY_SCRIPT_STRUCT(&Var44, &Var27, 12);
						}
						else if (iParam0 == 1)
						{
							MISC::COPY_SCRIPT_STRUCT(&Var44, &Var15, 12);
						}
						if (Var44.f_1)
						{
							if (!Var44.f_11)
							{
								iVar42 = 5;
							}
						}
					}
					if (iVar43 != -1)
					{
						func_228(iVar43, 1);
					}
					if ((iVar42 == 1 || iVar42 == 3) || iVar42 == 4)
					{
						iVar56 = 0;
						if (iParam0 == 0)
						{
							iVar56 = -5.719183E-31f;
						}
						else if (iParam0 == 1)
						{
							iVar56 = -4.784198E-06f;
						}
						if (iVar56 != 0)
						{
							if (iParam0 == 0)
							{
								iVar57 = func_555();
							}
							else if (iParam0 == 1)
							{
								iVar57 = func_556();
							}
							if (!MAP::DOES_BLIP_EXIST(iVar57))
							{
								iVar57 = MAP::_BLIP_ADD_FOR_STYLE(iVar56);
								MAP::BLIP_ADD_MODIFIER(iVar57, 8.190317E+08f);
								if (iParam0 == 0)
								{
									func_557(&iVar57);
								}
								else if (iParam0 == 1)
								{
									func_558(&iVar57);
								}
							}
							func_559(iVar42, iVar57, 1);
						}
					}
					else if (iVar42 != -1)
					{
						func_228(iVar42, 1);
					}
				}
			}
			func_302(iParam0, 5);
			break;
		case 2:
			func_560(&(Global_1902883[iParam0 /*43*/].f_4));
			func_302(iParam0, 3);
		case 3:
			vVar62 = { func_561(iParam0) };
			if (!func_562(&(Global_1902883[iParam0 /*43*/].f_4), Global_34, vVar62, Var0, 1f))
			{
				if (Global_1902883[iParam0 /*43*/].f_4.f_1)
				{
					if (!func_306())
					{
						func_312("WHISTLE_NOSPAWN_AREA", 10000, 0, 0, 0, 1);
					}
					func_250(iParam0);
					func_563(Global_33, "HORSE_NO_SHOW", 0.02074981f, 0, 1, 0, 0, 1);
					func_302(iParam0, 6);
				}
				return;
			}
			vVar58 = { func_564(&(Global_1902883[iParam0 /*43*/].f_4)) };
			fVar61 = func_565(vVar58, Global_34, 1);
			if (!func_66(iParam0))
			{
				func_566(iParam0, vVar58, fVar61);
				func_567(iParam0);
			}
			func_302(iParam0, 4);
		case 4:
			if (!ENTITY::DOES_ENTITY_EXIST(Var0))
			{
				return;
			}
			if (ENTITY::IS_ENTITY_DEAD(Var0) || PED::IS_PED_INJURED(Var0))
			{
				return;
			}
			vVar58 = { func_564(&(Global_1902883[iParam0 /*43*/].f_4)) };
			fVar61 = func_565(vVar58, Global_34, 1);
			ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
			ENTITY::SET_ENTITY_COORDS(Var0, vVar58, true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Var0, fVar61);
			ENTITY::PLACE_ENTITY_ON_GROUND_PROPERLY(Var0, false);
			func_302(iParam0, 5);
		case 5:
			if (!Var0.f_2)
			{
				func_302(iParam0, 6);
				return;
			}
			if (Var0.f_10)
			{
				func_302(iParam0, 6);
				return;
			}
			bVar65 = false;
			if (ENTITY::DOES_ENTITY_EXIST(Var0.f_9))
			{
				if (func_568(iParam0))
				{
					bVar65 = true;
				}
			}
			if (bVar65)
			{
				func_569(iParam0, 1);
			}
			bVar66 = false;
			if (Var0.f_11 || func_554())
			{
				bVar66 = true;
			}
			if (!bVar66)
			{
				func_61(iParam0);
				func_313(iParam0);
				func_302(iParam0, 6);
				return;
			}
			bVar67 = true;
			if (bVar67)
			{
				PHYSICS::_UNHITCH_HORSE(Var0);
				ENTITY::FREEZE_ENTITY_POSITION(Var0, false);
				if (func_570() == 0)
				{
					if (func_128(Var0, 1.38087E+35f))
					{
						func_300(1);
					}
				}
				iVar68 = func_570();
				TASK::TASK_GO_TO_WHISTLE(Var0, Global_33, iVar68);
				FLOCK::_0xFF1E339CE40EAAAF(Var0, -1);
				FLOCK::SET_ANIMAL_TUNING_BOOL_PARAM(Var0, 48, false);
				func_304(iVar39);
			}
			func_61(iParam0);
			func_313(iParam0);
			func_302(iParam0, 6);
			break;
		case 6:
			break;
	}
}

int func_315(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_1902883.f_364.f_1[iParam0];
}

bool func_316(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_317(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_23 = (Global_1902883[iParam0 /*43*/].f_23 - (Global_1902883[iParam0 /*43*/].f_23 && iParam1));
}

bool func_318(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_333(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

bool func_319(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (func_571(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		return true;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "HorseCompanion"))
	{
		return true;
	}
	return false;
}

bool func_320(int iParam0)
{
	char* sVar0;

	sVar0 = "HorseMission";
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_321(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_IS_WILD(iParam0) == 1)
	{
		return true;
	}
	return false;
}

bool func_322(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_DONKEY_01"):
			return true;
	}
	return false;
}

bool func_323(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSEMULE_01"):
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return true;
	}
	return false;
}

int func_324()
{
	return Global_1902883.f_392;
}

void func_325(int iParam0)
{
	Global_1902883.f_392 = iParam0;
}

var func_326()
{
	return Global_1902883.f_392.f_6;
}

void func_327(int iParam0)
{
	Global_1902883.f_392.f_6 = iParam0;
}

bool func_328(int iParam0, var uParam1, float fParam2)
{
	int iVar0;
	float fVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		return false;
	}
	*uParam1 = iVar0;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(iVar0))
	{
		return false;
	}
	if (fParam2 > 0f)
	{
		fVar1 = func_140(iParam0, iVar0, 0, 1);
		if (fVar1 > fParam2)
		{
			return false;
		}
	}
	return true;
}

bool func_329(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_572(bParam1, bParam2, bParam3);
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

bool func_330(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (func_143(iParam0) == 0f)
	{
		return true;
	}
	return false;
}

int func_331(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

bool func_332(int iParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;

	if (func_81(1024))
	{
		return false;
	}
	if (!func_121(42))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (func_318(iParam0))
	{
		if (func_333(iParam0) != 6)
		{
			return false;
		}
	}
	if (func_319(iParam0))
	{
		return false;
	}
	if (func_320(iParam0))
	{
		return false;
	}
	if (func_321(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (func_322(iVar0))
	{
		return false;
	}
	if (func_323(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::GET_MOUNT(Global_33) == iParam0)
		{
		}
		else
		{
			return false;
		}
	}
	if (func_328(iParam0, &uVar1, 1120403456 /* Float: 100f */))
	{
		return false;
	}
	iVar2 = PLAYER::PLAYER_ID();
	if (func_329(iVar2, 1, 0, 1))
	{
		return false;
	}
	if (LAW::_ARE_WITNESSES_PENDING(iVar2))
	{
	}
	if (LAW::ARE_WITNESSES_ACTIVE(iVar2))
	{
		return false;
	}
	if (LAW::_ARE_INVESTIGATORS_ACTIVE(iVar2, true, 0))
	{
		return false;
	}
	if (!func_330(iParam0))
	{
		return false;
	}
	return true;
}

int func_333(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (iParam0 == Global_1902883[iVar0 /*43*/])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_334(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	func_250(iParam0);
	func_250(iParam0);
	func_573(iParam0, iParam1);
	func_574(iParam0, iParam1);
	func_575(iParam0, iParam1);
	iVar1 = func_78(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iParam0 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar1);
		}
		else if (iParam0 == 1)
		{
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar1);
		}
	}
	iVar2 = func_78(iParam1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (iParam1 == 0)
		{
			PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iVar2);
		}
		else if (iParam1 == 1)
		{
			PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iVar2);
		}
	}
	func_335();
}

void func_335()
{
	if (func_66(0))
	{
		func_61(0);
	}
	if (func_66(1))
	{
		func_61(1);
	}
	if (func_66(5))
	{
		func_61(5);
	}
	if (func_66(6))
	{
		func_250(6);
	}
}

void func_336(int iParam0, bool bParam1)
{
	int iVar0;

	if (func_2() == 0)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		func_250(iVar0);
	}
	if (func_66(6))
	{
		func_104(6, 0);
	}
	func_105(6);
	func_349(iParam0, 6, 0);
	func_153(6, 1);
	if (!bParam1)
	{
		func_391(6, 0);
		func_576(MISC::GET_GAME_TIMER());
	}
	func_335();
}

void func_337(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_134(iParam0);
	if (!SCRIPTS::DOES_THREAD_EXIST(iVar0))
	{
		func_136(iParam0);
	}
	else if (!SCRIPTS::IS_THREAD_ACTIVE(iVar0, false))
	{
		func_136(iParam0);
	}
}

void func_338(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = func_516();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar0, 0);
	iVar1 = func_517();
	ATTRIBUTE::SET_ATTRIBUTE_BONUS_RANK(iParam0, iVar1, 0);
	PED::_SET_HEALTH_RECHARGE_MULTIPLIER(iParam0, 1f);
	PED::_SET_STAMINA_RECHARGE_MULTIPLIER(iParam0, 1f);
	PED::_SET_STAMINA_DEPLETION_MULTIPLIER(iParam0, 1f);
}

void func_339(var uParam0)
{
	*uParam0 = -1.962688E+25f;
	uParam0->f_1 = 4.244878E-26f;
	uParam0->f_2 = 0;
}

void func_340(int iParam0, vector3 vParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_577(iParam0, vParam1.x))
	{
	}
	if (!func_578(iParam0, vParam1.y))
	{
	}
	if (!func_579(iParam0, vParam1.z))
	{
	}
}

void func_341(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_216(uParam0[iVar0 /*96*/]);
		iVar0++;
	}
}

void func_342(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		(*uParam0)[iVar0 /*5*/] = 0;
		(uParam0[iVar0 /*5*/])->f_1 = 0;
		(uParam0[iVar0 /*5*/])->f_2 = 0;
		(uParam0[iVar0 /*5*/])->f_3 = 0;
		(uParam0[iVar0 /*5*/])->f_4 = 0;
		iVar0++;
	}
}

void func_343(var uParam0)
{
	int iVar0;

	uParam0->f_1 = 0f;
	*uParam0 = 0;
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			uParam0->f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_344(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 100;
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_345(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	if (iParam0 == 2)
	{
		iVar0 = 50;
	}
	*uParam1 = iVar0;
	uParam1->f_1 = 0f;
	uParam1->f_2 = 0f;
	uParam1->f_3 = 0;
}

void func_346(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1f;
}

void func_347(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -15;
}

void func_348(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -15;
}

void func_349(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		if (iParam2 == 0)
		{
			return;
		}
	}
	if (iParam1 == -1)
	{
		return;
	}
	if (iParam1 >= 7)
	{
		return;
	}
	if (func_319(iParam0))
	{
		return;
	}
	if (func_320(iParam0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iParam0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, true, true);
	}
	func_260(iParam1, iParam0);
	func_580(iParam1, iParam2);
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
	}
	if (iParam0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(iVar0))
	{
		func_581(iParam1, 0);
	}
	else
	{
		iVar1 = func_582(iParam0);
		func_581(iParam1, iVar1);
	}
	if (iParam1 == 0)
	{
		PLAYER::_SET_PED_ACTIVE_PLAYER_HORSE(iVar0, iParam0);
	}
	else if (iParam1 == 1)
	{
		PLAYER::SET_PED_AS_TEMP_PLAYER_HORSE(iVar0, iParam0);
	}
	if (iParam1 == 6)
	{
		return;
	}
	func_275(iParam0);
	if (func_400(iParam1))
	{
		func_401(iParam1);
	}
	iVar2 = func_158(iParam1);
	bVar3 = func_402(iVar2);
	func_403(iParam1, bVar3);
}

void func_350(int iParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_583(&uVar1, &iVar0, &uVar2);
	}
	iVar3 = func_584(iVar0);
	if (iParam1 > iVar3)
	{
		return;
	}
	fVar4 = BUILTIN::TO_FLOAT(func_295(iVar0, iParam1));
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = iParam1;
	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = fVar4;
	func_585(iParam1);
	iVar5 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar5) || PED::IS_PED_INJURED(iVar5))
	{
		return;
	}
	iVar6 = BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1);
	func_531(iVar5, iVar6);
	iVar7 = func_331(iVar5);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = iVar7;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar5, iVar7);
}

bool func_351(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanCommonHorse"))
	{
		return true;
	}
	return false;
}

bool func_352(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "CaravanLivestock"))
	{
		return true;
	}
	return false;
}

bool func_353(int iParam0)
{
	char* sVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	sVar0 = "bHorseHasBeenStolen";
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return false;
	}
	else if (DECORATOR::DECOR_EXIST_ON(iParam0, sVar0))
	{
		return true;
	}
	return false;
}

bool func_354()
{
	return (Global_1893611 & 1 != 0 && func_586() != -1);
}

void func_355(bool bParam0, int iParam1)
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

void func_356(bool bParam0)
{
	Global_1904375.f_2 = 0;
	Global_1904375.f_1 = 0;
	Global_1904375.f_3 = 0;
	Global_1904375.f_4 = 0;
	Global_1904375.f_5 = 0;
	Global_1904375.f_6 = 0;
	Global_1904375.f_7 = 0;
	if (bParam0)
	{
		Global_1904375.f_8 = 0;
		Global_1904375.f_9 = 0;
		Global_1904375.f_10 = 0;
		Global_1904375.f_11 = 0;
	}
}

void func_357(int iParam0)
{
	Global_1904375 = iParam0;
}

bool func_358()
{
	return Global_1904375.f_5;
}

var func_359()
{
	return Global_1904375.f_2;
}

var func_360()
{
	return Global_1904375.f_1;
}

bool func_361(int iParam0)
{
	if (func_587(iParam0))
	{
		return true;
	}
	if (func_588(iParam0))
	{
		return true;
	}
	if (func_589(iParam0))
	{
		return true;
	}
	if (func_590(iParam0))
	{
		return true;
	}
	if (func_591(iParam0))
	{
		return true;
	}
	if (func_592(iParam0))
	{
		return true;
	}
	if (func_593(iParam0))
	{
		return true;
	}
	return false;
}

bool func_362()
{
	int iVar0;
	int iVar1;

	iVar0 = func_359();
	iVar1 = func_360();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iVar0))
	{
		return false;
	}
	if (!func_361(iVar1))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		return false;
	}
	if (PED::IS_PED_SWIMMING(iVar0))
	{
		return false;
	}
	return true;
}

bool func_363(int iParam0, int iParam1)
{
	struct<18> Var0;
	bool bVar25;
	int iVar26;
	float fVar27;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_12 = 4;
	Var0.f_17 = 4;
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_INSPECTION_INFO(iParam1, &Var0))
	{
	}
	bVar25 = false;
	iVar26 = Var0;
	if (func_587(iParam1))
	{
		iVar26 = 0;
		fVar27 = -6.291906E+30f;
		bVar25 = true;
	}
	if ((func_589(iParam1) || func_590(iParam1)) || func_588(iParam1))
	{
		iVar26 = 2.661231E-18f;
		fVar27 = -1.677592E-10f;
		bVar25 = true;
	}
	if (func_591(iParam1))
	{
		fVar27 = 2.682869E+32f;
		bVar25 = true;
	}
	if (func_592(iParam1))
	{
		fVar27 = 5.031941E-19f;
		bVar25 = true;
	}
	if (!bVar25)
	{
		return false;
	}
	TASK::TASK_ANIMAL_INTERACTION(Global_33, iParam0, fVar27, iVar26, false);
	return true;
}

void func_364(int iParam0)
{
	Global_1904375.f_3 = iParam0;
}

int func_365()
{
	return Global_1904375.f_3;
}

void func_366(int iParam0)
{
	Global_1904375.f_4 = iParam0;
}

void func_367(int iParam0)
{
	Global_1904375.f_8 = iParam0;
}

void func_368(int iParam0)
{
	Global_1904375.f_9 = iParam0;
}

void func_369(int iParam0)
{
	Global_1904375.f_10 = iParam0;
}

void func_370(int iParam0)
{
	Global_1904375.f_7 = iParam0;
}

bool func_371()
{
	return Global_1904375.f_7;
}

bool func_372(bool bParam0, int iParam1)
{
	if (!func_263(bParam0, 0))
	{
		return func_595(func_594(bParam0), iParam1);
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 104.1169f))
	{
		return true;
	}
	return false;
}

int func_373(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_596(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_597(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_598(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_599(bParam0, 1))
	{
		return 0;
	}
	Var5 = { func_600(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_601(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_601(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_373(bParam0, func_601(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_602(bParam0) == -3.265313E+23f)
	{
		if (!func_603(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_604(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_605(bParam0, 0, 0) };
		if (func_522(0) && Var7.f_4 == 4.978612f)
		{
			func_606(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_522(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_598(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_374(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_361(bParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	bVar0 = func_2() == false;
	if (func_587(bParam1))
	{
		if (bVar0)
		{
			func_607(iParam0, bParam1);
		}
		else
		{
			func_608(iParam0, bParam1);
		}
		return;
	}
	if (func_588(bParam1))
	{
		if (bVar0)
		{
			func_609(iParam0, bParam1);
		}
		else
		{
			func_610(iParam0, bParam1);
		}
		return;
	}
	if (func_589(bParam1))
	{
		if (bVar0)
		{
			func_611(iParam0, bParam1);
		}
		else
		{
			func_612(iParam0, bParam1);
		}
		return;
	}
	if (func_590(bParam1))
	{
		if (bVar0)
		{
			func_613(iParam0, bParam1);
		}
		else
		{
			func_614(iParam0, bParam1);
		}
		return;
	}
	if (func_591(bParam1))
	{
		if (bVar0)
		{
			func_615(iParam0, bParam1);
		}
		else
		{
			func_616(iParam0, bParam1);
		}
		return;
	}
	if (func_593(bParam1))
	{
		if (bVar0)
		{
			func_617(iParam0, bParam1);
		}
		else
		{
			func_618(iParam0, bParam1);
		}
		return;
	}
	if (func_592(bParam1))
	{
		if (bVar0)
		{
			iVar1 = func_379();
			func_619(iParam0, bParam1, iVar1);
		}
		else
		{
			func_620(iParam0, bParam1, func_379());
		}
		return;
	}
}

bool func_375()
{
	return Global_1904375.f_6;
}

var func_376()
{
	return Global_1904375.f_8;
}

bool func_377()
{
	return Global_1904375.f_10;
}

void func_378(int iParam0)
{
	Global_1904375.f_11 = iParam0;
}

int func_379()
{
	return Global_1904375.f_9;
}

struct<4> func_380(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -5.45926E-19f;
	if (!func_621(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_622() };
		if (func_623() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var29, &Var0))
		{
			func_624(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_625(PLAYER::PLAYER_ID());
	}
	bVar33 = func_626();
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_627(75);
	}
	iVar35 = func_628(iParam3, 0);
	if (iVar35 != 3)
	{
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_17418.f_55.f_61[iVar35 /*4*/])))
		{
			Var0 = { Global_17418.f_55.f_61[iVar35 /*4*/] };
		}
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		if (!bParam1)
		{
			return func_519();
		}
		if (!func_629(&Var0, 0))
		{
			Var36 = { func_630(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		return Var36;
	}
	return Var0;
}

bool func_381(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_631(&Global_1903834);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_632(iParam0, &Global_1903834, &(Global_1903834.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_633(iParam0, &Global_1903834, &(Global_1903834.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_382(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar0 /*56*/]), &uParam0))
		{
			return Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/];
		}
		iVar0++;
	}
	if (!func_634(&uParam0))
	{
		return 0;
	}
	return 0;
}

int func_383()
{
	return Global_1904375.f_11;
}

int func_384(int iParam0, int iParam1, int iParam2)
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

float func_385(float fParam0, float fParam1, float fParam2)
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

void func_386(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	iParam6 = func_384(iParam6, 0, 100);
	func_635(Param1, iParam5, iParam6);
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
	{
		return;
	}
	func_387(iParam0, iParam5, iParam6);
}

void func_387(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	if (func_505(iParam1, &iVar0))
	{
		ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, iVar0, iParam2);
	}
}

bool func_388(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_389(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_390(int iParam0, float fParam1)
{
	char* sVar0;
	bool bVar1;

	sVar0 = "";
	switch (iParam0)
	{
		case 0:
			sVar0 = "HORSE_XP_TRUST_EARNED";
			break;
		case 1:
		case 2:
		case 3:
			return;
		case 4:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 5:
			return;
		case 6:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 18:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 7:
		case 8:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 19:
		case 20:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		default:
			return;
	}
	bVar1 = false;
	if (bVar1)
	{
		sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_636(sVar0, "ITEMTYPE_TEXTURES", 3.364521E-37f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_391(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	float fVar7;

	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (iParam0 != 0)
	{
		if (!func_121(42))
		{
			return;
		}
	}
	iVar0 = func_158(iParam0);
	if (func_322(iVar0) || func_323(iVar0))
	{
		return;
	}
	iVar1 = func_103(iParam0);
	if (iVar1 >= func_584(iVar0))
	{
		return;
	}
	if (func_637(iParam0, iParam1))
	{
		return;
	}
	if (func_638(iParam0, iParam1))
	{
		return;
	}
	fVar2 = func_639(iParam0, iParam1);
	fVar3 = func_640(iParam1);
	switch (iParam1)
	{
		case 1:
			iVar4 = func_78(iParam0);
			if (func_641(iVar4, 0))
			{
				fVar3 = (fVar3 * 1056964608);
			}
			Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 = (Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 2:
		case 3:
			if (func_642())
			{
				fVar3 = (fVar3 * 2f);
			}
			Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 = (Global_1902883.f_303.f_2[iParam0 /*5*/].f_2 + fVar3);
			break;
		case 4:
			Global_1902883.f_303.f_2[iParam0 /*5*/].f_4 = (Global_1902883.f_303.f_2[iParam0 /*5*/].f_4 + fVar3);
			break;
		case 5:
			if (iVar1 < 1)
			{
				fVar5 = func_294(iParam0);
				fVar6 = BUILTIN::TO_FLOAT(func_295(iVar0, iVar1));
				fVar7 = BUILTIN::TO_FLOAT(func_295(iVar0, iVar1 + 1));
				fVar3 = (fVar7 - (fVar6 + fVar5));
			}
			else
			{
				fVar3 = 0f;
			}
			break;
		default:
			func_390(iParam1, fVar3);
			break;
	}
	func_643(iParam0, fVar3);
	func_644(iParam0, iParam1, (fVar2 + fVar3));
}

int func_392(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "not_enemy"))
	{
		return 0;
	}
	switch (PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		case joaat("REL_GANG_ODRISCOLL"):
		case joaat("REL_GANG_SMUGGLERS"):
		case joaat("REL_GANG_LARAMIE_GANG"):
		case joaat("REL_GANG_SKINNER_BROTHERS"):
		case joaat("REL_PLAYER_DISLIKE"):
		case joaat("REL_GUNSLINGERS"):
		case joaat("REL_PINKERTONS"):
		case joaat("REL_GUAMA_LAW"):
		case joaat("REL_GANG_CREOLE"):
		case joaat("REL_GANG_LEMOYNE_RAIDERS"):
		case joaat("REL_COP"):
		case joaat("REL_GANG_MURFREE_BROOD"):
		case joaat("REL_CRIMINALS"):
		case joaat("REL_PLAYER_ENEMY"):
			return 1;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		iVar0 = PED::GET_RELATIONSHIP_BETWEEN_GROUPS(PED::GET_PED_RELATIONSHIP_GROUP_HASH(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)), PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		if ((iVar0 == 6 || iVar0 == 4) || iVar0 == 5)
		{
			if (!DECORATOR::DECOR_EXIST_ON(iParam0, "instigated_by_player"))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_393(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_317(iParam0, 32);
	func_335();
}

void func_394(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_535(iParam0);
	func_350(iParam0, 0);
	func_645(iParam0, 0f);
}

void func_395(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

void func_397(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = Global_38.f_3651[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_38.f_3651[iVar1] = uVar3;
}

void func_398(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			break;
		case 7:
			break;
		case 8:
			break;
		case 9:
			break;
		case 11:
			func_646(1);
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_647(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_647(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_647(3);
			break;
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		case 30:
			break;
		case 10:
			break;
		case 12:
			break;
		case 13:
			break;
		case 31:
			break;
		case 32:
			func_183(1);
			break;
		case 33:
			func_185(1);
			break;
		case 34:
			func_187(1);
			break;
		case 35:
			break;
		case 36:
			func_648(0);
			break;
		case 37:
			func_649(0);
			break;
		case 38:
			func_650(0);
			break;
		case 39:
			break;
		case 40:
			break;
		case 41:
			break;
		case 42:
			break;
		case 1:
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		case 2:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_228(677, 0);
			break;
		case 3:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_228(678, 0);
			break;
		case 4:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_228(679, 0);
			break;
		case 5:
			if (func_298() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_651("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_228(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_2() == -1)
			{
				if (!func_599(0.01458261f, 1))
				{
					func_652(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_2() == -1)
			{
				if (!func_599(0.01458261f, 1))
				{
					func_652(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_599(7.734759E-34f, 1))
				{
					func_652(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_2() == -1)
			{
				if (!func_599(1.044822E-10f, 1))
				{
					func_652(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_2() == -1)
			{
				if (!func_599(1.044822E-10f, 1))
				{
					func_652(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_599(-1.840652E+20f, 1))
				{
					func_652(-1.840652E+20f, 1, 6.028273E-12f);
				}
			}
			break;
		case 22:
			PLAYER::_SET_MOUNT_PROMPT_DISABLED(false);
			break;
		case 24:
			break;
		case 25:
			break;
		case 26:
			break;
		case 27:
			break;
		case 28:
			break;
		case 29:
			break;
		case 43:
			break;
		case 44:
			UNLOCK::UNLOCK_SET_UNLOCKED(-3.989886E+08f, true);
			Global_1940186.f_41 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		case 45:
			break;
		case 46:
			PLAYER::_ENABLE_EAGLEEYE(PLAYER::GET_PLAYER_INDEX(), true);
			break;
		case 51:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.056862E+36f, true);
			break;
		case 52:
			UNLOCK::UNLOCK_SET_UNLOCKED(-1.092788E+25f, true);
			break;
		case 53:
			UNLOCK::UNLOCK_SET_UNLOCKED(2.756398E-28f, true);
			break;
		case 54:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.80995E-29f, true);
			break;
		case 55:
			UNLOCK::UNLOCK_SET_UNLOCKED(8.669974E+11f, true);
			break;
	}
}

bool func_399(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT_PC"):
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BUTTERMILKBUCKSKIN_PC"):
		case joaat("A_C_HORSE_MORGAN_LIVERCHESTNUT_PC"):
		case joaat("A_C_HORSE_APPALOOSA_FEWSPOTTED_PC"):
		case joaat("A_C_HORSE_TENNESSEEWALKER_GOLDPALOMINO_PC"):
		case joaat("A_C_HORSE_ARABIAN_WARPEDBRINDLE_PC"):
			return true;
	}
	return false;
}

bool func_400(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	iVar0 = func_653(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_261(0) };
	if (func_654(&Var1, iVar0, 0) > 0)
	{
		return true;
	}
	return false;
}

int func_401(int iParam0)
{
	struct<10> Var0;
	struct<5> Var29;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return 0;
	}
	Var29 = { Var0.f_5 };
	Var29.f_4 = Var0.f_9;
	if (!func_656(Var0.f_4, &Var0, &Var29, -1, -5.149929E+33f, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_402(int iParam0)
{
	if (iParam0 == 6.51589E-10f)
	{
		return 7.572035E-19f;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return 1.039486E+17f;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return -3.386399E-26f;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return 0.07650803f;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -1.45814E-31f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 7.53853E-15f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -1.136066E-17f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 5.127436E-14f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return 2.921676E+31f;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -1.026452E+07f;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return 1.067026E+25f;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return -1.28016E+09f;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return 2.448296E+12f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -1.418627E-34f;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return 4.377841E+33f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -0.0455787f;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return 623.7496f;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -6.486262E+07f;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -30.60504f;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return 9.985715E-20f;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return 1.880635E+22f;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return 1.171123E+38f;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 5.003713E+26f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -1.551726E-24f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return -6.68395E-11f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return -4.44836E-30f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 2.377764E+11f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return -8.807331E+21f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -5.584729E+36f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return 6.168223E-06f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 53.04443f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return 6.751029E-12f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 1.430126E+37f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return 15.1011f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return -1.515692E-38f;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return -2.170346E+25f;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return -1.134287E-30f;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 2.223417E+20f;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return 2.105748E+23f;
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return 2.217954E-31f;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return 2.493588E+35f;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return 7.134915E+30f;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return -2.706168E-33f;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return 1.995454E+24f;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return -2.357438E-20f;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return 13.50762f;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return -0.001386079f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return -1.691579E+31f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return -3.318557E+19f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 8.645251E-33f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return 1.581752E-36f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return -1.99726E+34f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return -8.760633E+26f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 4.01547E+30f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return -25.76954f;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return 4.399495E+23f;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 1.405063E+35f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return 3.484211E+33f;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return 1.384263E-26f;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -5.672938E-22f;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return 8.07488E-29f;
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return 2.470278E-06f;
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return 419952.3f;
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return -1.360388E+36f;
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return -2.17948E-23f;
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return 1.523628E+12f;
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return -9.980835E-26f;
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return -3.215709E+22f;
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return -7.548476E+08f;
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return -9.951774E-36f;
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return -3.495947E+21f;
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return -4.31439E+18f;
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return -0.4825127f;
		case -390136947:
			return 6.495848E+12f;
		case 1104566530:
			return 1.168E-30f;
		case -1142861801:
			return 4.560747E-38f;
		case -417416199:
			return 24540.6f;
		case -1460773772:
			return -3.827261E-25f;
		case 1476007840:
			return -2.661576E-36f;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return 5.004331E+33f;
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return 3.17531E-11f;
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return 1.702333E+28f;
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return -1.034405E-13f;
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return 6.095359E+31f;
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return -2.238298E+07f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return -2.152836E-39f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return 2.557163E-33f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return -2.030971E-06f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return -2.976344E-31f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -0.06015343f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return -2.410113E+07f;
		case 1387035765:
			return 7.372972E+27f;
		case 506531963:
			return 3.897325E+22f;
		case 2038357529:
			return 2.453222E-38f;
		case 1599848740:
			return -3.985989E-08f;
		case 1887211198:
			return -3.827505E-30f;
		case 1645353708:
			return 2.078693E-35f;
		case 1154747978:
			return -2.166692E+26f;
		case 74569170:
			return 3.655219E+19f;
		case -2004712574:
			return -0.1566859f;
		case 699227695:
			return -50359.66f;
		case 1514230770:
			return 5.233903E+13f;
		case 704938950:
			return -2.299642E+28f;
		case joaat("A_C_DONKEY_01"):
			return -3.974449E+28f;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -1.340239E-22f;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return 1.701391E+38f;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return 240793.3f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -7.701628E-25f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -2.008326E+36f;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return -9.145478E-12f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return 1.776133E+37f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return -4.841263E-34f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -4.181232E+19f;
		default:
			break;
	}
	return 0;
}

int func_403(int iParam0, bool bParam1)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_263(bParam1, 0))
	{
		return 0;
	}
	if (!func_657(bParam1))
	{
		return 0;
	}
	if (func_400(iParam0))
	{
		return 0;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_261(0) };
	Var1.f_4 = iVar0;
	if (!func_266(bParam1, &uVar6, &Var1, 1, 6.028273E-12f, 0))
	{
		return 0;
	}
	return 1;
}

int func_404(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_8;
}

float func_405(int iParam0)
{
	int iVar0;
	float fVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	if (!func_66(iParam0))
	{
		return 0f;
	}
	iVar0 = func_78(iParam0);
	fVar1 = func_143(iVar0);
	return fVar1;
}

int func_406(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/];
}

int func_407(int iParam0, var uParam1)
{
	struct<29> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return 0;
	}
	Var0.f_14 = uParam1->f_14;
	Var0.f_15 = uParam1->f_15;
	Var0.f_16 = { uParam1->f_16 };
	Var0.f_24 = uParam1->f_24;
	Var0.f_25 = uParam1->f_25;
	Var0.f_26 = uParam1->f_26;
	Var0.f_27 = uParam1->f_27;
	Var0.f_28 = uParam1->f_28;
	if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_518(0), &Var0, &Var0, 29))
	{
		return 0;
	}
	return 1;
}

void func_408()
{
	var uVar0;

	if (func_658())
	{
		uVar0 = func_659();
		MAP::REMOVE_BLIP(&uVar0);
		func_660(0);
	}
}

void func_409()
{
	int iVar0;

	iVar0 = func_162();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(iVar0))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
	}
	OBJECT::DELETE_OBJECT(&iVar0);
	func_410(0);
}

void func_410(int iParam0)
{
	Global_1902883.f_379 = iParam0;
}

int func_411()
{
	return Global_38.f_289.f_3245.f_1;
}

var func_412()
{
	return Global_1902883.f_429.f_2;
}

void func_413()
{
	Global_1902883.f_429.f_2 = 0;
}

void func_414()
{
	Global_38.f_289.f_3245.f_1++;
}

void func_415(int iParam0)
{
	Global_1902883.f_429.f_2 = iParam0;
}

bool func_416()
{
	return Global_1902883.f_429.f_3;
}

int func_417()
{
	return Global_1902883.f_429.f_4;
}

void func_418(int iParam0)
{
	Global_1902883.f_429.f_3 = iParam0;
}

void func_419()
{
	Global_1902883.f_429.f_4 = 0;
}

bool func_420()
{
	if (func_599(1.447452E+20f, 1) || func_599(-2.526389E-26f, 1))
	{
		return true;
	}
	return false;
}

bool func_421(bool bParam0)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam0, iVar48, &Var1))
		{
			if (Var1.f_2 == 5.928634E+20f && !func_661(bParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

int func_422()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 0;
	}
	if (!PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(iVar0, &iVar1, false, false))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	iVar2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1);
	if (PED::IS_PED_INJURED(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	if (!func_321(iVar2))
	{
		return 0;
	}
	return iVar2;
}

var func_423()
{
	return Global_1902883.f_399.f_1;
}

void func_424(int iParam0)
{
	Global_1902883.f_399.f_1 = iParam0;
}

void func_425(int iParam0)
{
	Global_1902883.f_399 = iParam0;
}

void func_426()
{
	if (func_147(47))
	{
		func_148(47);
	}
	if (func_149(47))
	{
		func_150(47);
	}
	if (func_147(48))
	{
		func_148(48);
	}
	if (func_149(47))
	{
		func_150(47);
	}
	if (func_147(49))
	{
		func_148(49);
	}
	if (func_149(49))
	{
		func_150(49);
	}
	if (func_147(50))
	{
		func_148(50);
	}
	if (func_149(50))
	{
		func_150(50);
	}
	if (func_147(51))
	{
		func_148(51);
	}
	if (func_149(51))
	{
		func_150(51);
	}
}

bool func_427(int iParam0)
{
	var uVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar1 = PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam0, &uVar0);
	if (PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(iVar1))
	{
		return true;
	}
	return false;
}

void func_428(int iParam0)
{
	Global_1902883.f_399.f_2 = iParam0;
}

int func_429()
{
	return Global_1902883.f_399.f_2;
}

void func_430()
{
	func_425(0);
	func_424(0);
	func_428(0);
}

bool func_431()
{
	return Global_1902883.f_429.f_5;
}

int func_432()
{
	return Global_38.f_289.f_3245.f_3;
}

int func_433()
{
	return Global_1902883.f_429.f_6;
}

void func_434(int iParam0)
{
	Global_1902883.f_429.f_5 = iParam0;
}

void func_435()
{
	Global_1902883.f_429.f_6 = 0;
}

void func_436(int iParam0)
{
	Global_1902883.f_429.f_9 = iParam0;
}

void func_437()
{
	Global_38.f_289.f_3245.f_3++;
}

bool func_438()
{
	return Global_1902883.f_429.f_7;
}

int func_439(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/];
}

int func_440(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_662(iParam0, 65536) && !func_662(iParam0, 32768))
	{
		if (func_663(iVar0, iVar1))
		{
			return 1;
		}
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < Global_38.f_3542)
	{
		if (Global_38.f_3542[iVar2 /*3*/].f_2 == iParam0)
		{
			return Global_38.f_3542[iVar2 /*3*/].f_1;
		}
		iVar2++;
	}
	return 0;
}

int func_441()
{
	return Global_1902883.f_429.f_8;
}

void func_442(int iParam0)
{
	Global_1902883.f_429.f_7 = iParam0;
}

void func_443()
{
	Global_1902883.f_429.f_8 = 0;
}

int func_444()
{
	return Global_1902883.f_429.f_9;
}

bool func_445()
{
	return Global_1902883.f_429.f_10;
}

void func_446(int iParam0)
{
	Global_1902883.f_429.f_10 = iParam0;
}

void func_447()
{
	Global_1902883.f_429.f_9 = 0;
}

bool func_448()
{
	return Global_38.f_289.f_3245.f_4;
}

int func_449(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar0 = -1;
	iVar1 = -1;
	fVar4 = -1f;
	iVar0 = 0;
	while (iVar0 < 180)
	{
		if (!func_450(iVar0))
		{
		}
		else if (func_664(iVar0) != iParam0)
		{
		}
		else if (bParam1)
		{
			if (!func_665(iVar0))
			{
			}
			else
			{
				iVar2 = func_666(iVar0);
				if (bParam3)
				{
					if (!func_667(iVar2))
					{
					}
					else if (bParam2)
					{
						if (func_668(iVar2))
						{
						}
						else
						{
							fVar3 = func_669(Global_33, func_451(iVar0), 1);
							if (fVar3 < fVar4 || fVar4 == -1f)
							{
								iVar1 = iVar0;
								fVar4 = fVar3;
							}
						}
						iVar0++;
						return iVar1;
					}
				}
			}
		}
	}
}

bool func_450(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

Vector3 func_451(int iParam0)
{
	if (!func_450(iParam0))
	{
		return 0f, 0f, 0f;
	}
	switch (iParam0)
	{
		case 0:
			return 1161310432, 1151665354, 1110394877;
		case 1:
			return 1161277697, 1151394742, 1110350994;
		case 2:
			return 1161252741, 1151357420, 1110355476 /* Float: 43.67f */;
		case 117:
			return -979150116, -984030956, -1046220411;
		case 118:
			return -979147264, -984038277, -1045655716;
		case 6:
			return -1002168484, -995803546, 1110148383 /* Float: 42.88f */;
		case 9:
			return -1002677503, -996112467, 1110232398;
		case 8:
			return -1001678248, -995432508, 1110376684;
		case 13:
			return -1000794757, -995440989, 1110639406;
		case 14:
			return -1000685076, -995761439, 1110171976 /* Float: 42.97f */;
		case 15:
			return -1000685240, -995764552, 1110171976 /* Float: 42.97f */;
		case 19:
			return -1002535787, -996036209, 1110136717;
		case 12:
			return -1001691546, -995378790, 1110494413 /* Float: 44.2f */;
		case 22:
			return 1152461111, 1133037771, 1118894568;
		case 24:
			return 1153318175, 1138529075, 1119050793 /* Float: 89.68f */;
		case 25:
			return 1153332265, 1138578227, 1119050793 /* Float: 89.68f */;
		case 26:
			return 1158092800, -1004888064, 1110179840 /* Float: 43f */;
		case 27:
			return -997680087, -1005589463, 1117966828 /* Float: 81.41f */;
		case 28:
			return -997668045, -1005560136, 1117966828 /* Float: 81.41f */;
		case 29:
			return 1151451827, -995957947, 1117263207;
		case 30:
			return 1151479176, -996160207, 1117212838;
		case 31:
			return 1151659459, -997277041, 1117966828 /* Float: 81.41f */;
		case 33:
			return 1151744038, -996030730, 1117258934;
		case 34:
			return 1151694720, -995804983, 1117505769;
		case 35:
			return 1150899896, -996023665, 1117244621 /* Float: 75.9f */;
		case 39:
			return 1150929633, -995995005, 1117244975;
		case 41:
			return 1150755251, -1019138448, 1120662785;
		case 42:
			return 1160069891, -996044745, 1112342423;
		case 43:
			return 1160124276, -996958535, 1112874287;
		case 44:
			return 1160787948, -995727032, 1110838870;
		case 45:
			return 1160385495, -996543201, 1111849697 /* Float: 49.37f */;
		case 46:
			return 1160951849, -996784865, 1111645225 /* Float: 48.59f */;
		case 48:
			return 1160812981, -995834212, 1110902230;
		case 49:
			return 1160372224 /* Float: 2718f */, -996089856 /* Float: -1287f */, 1111909990 /* Float: 49.6f */;
		case 50:
			return 1159512932, -994757395, 1111599411;
		case 51:
			return 1160498427, -995178278, 1110752124;
		case 52:
			return 1160494385, -995193780, 1110752124;
		case 53:
			return 1159704945, -997073060, 1112717394 /* Float: 52.68f */;
		case 63:
			return 1160839249, -996593150, 1111134621;
		case 60:
			return 1160438472, -997459926, 1112043139;
		case 68:
			return -992269074, -1010546868, 1125859826;
		case 69:
			return -991969280 /* Float: -1790f */, -1010687345, 1126126715;
		case 70:
			return -991731794, -1011255214, 1126321357 /* Float: 162.3f */;
		case 71:
			return -991724506, -1005816719, 1125989241;
		case 74:
			return -992184071, -1010790833, 1125956983;
		case 77:
			return -1013318801, 1145136821, 1122723839;
		case 78:
			return -1013373338, 1145816351, 1122760131;
		case 79:
			return 0f, 0f, 0f;
		case 82:
			return -1012306258, 1145035709, 1122443299;
		case 83:
			return -1013974506, 1145635707, 1122813333;
		case 84:
			return -1012793344 /* Float: -324f */, 1145630228, 1122615951;
		case 85:
			return -1014175498, 1145224724, 1122828288 /* Float: 118.5f */;
		case 86:
			return -1011304178, 1145351267, 1122499350;
		case 87:
			return -1020131305, 1142752250, 1122119137;
		case 88:
			return -1020327514, 1142813489, 1122119137;
		case 90:
			return -1012743145, 1145137209, 1122697718;
		case 93:
			return 1161632917, 1141681771, 1110367719;
		case 98:
			return 1161470868, 1141800089, 1110343114;
		case 97:
			return 1161473802, 1141881242 /* Float: 574.9f */, 1110347612 /* Float: 43.64f */;
		case 96:
			return 1161393245, 1145515894, 1112695059;
		case 99:
			return -995959183, 1137005717, 1119667054;
		case 101:
			return -995976564, 1137172803, 1119667156;
		case 100:
			return -995984256, 1137225287, 1119667156;
		case 105:
			return -978554734, -986340486, -1070590643;
		case 102:
			return -978617964, -986206051, -1078882363;
		case 103:
			return -978575375, -986100350, -1076916912;
		case 104:
			return -978573274, -986171657, -1069994633;
		case 107:
			return -978549348, -985774381, -1078739841;
		case 108:
			return -983141171, -987498947, -1050211779;
		case 3:
			return -986602654, 1124685565, 1127732137;
		case 4:
			return -998540340, -1006160672, 1120134785;
		case 40:
			return 1157746014, 1148859669, 1121910430;
		case 76:
			return -989024115, -990929626, 1122493897;
		case 148:
			return -980168206, -986205846, -1046424899;
		case 64:
			return -1022487953, -1044631152, 1119759670;
		case 65:
			return 1143526344, -996382858, 1110183825;
		case 66:
			return 1156212329, -991402540, 1109865267 /* Float: 41.8f */;
		case 67:
			return 1158930777, 1151886315, 1121075921;
		case 130:
			return -995147776 /* Float: -1402f */, -988753920 /* Float: -2317f */, 1110337126 /* Float: 43.6f */;
		default:
			break;
	}
	return 0f, 0f, 0f;
}

void func_452(int iParam0)
{
	Global_1902883.f_429.f_11 = *iParam0;
}

var func_453()
{
	return Global_1902883.f_429.f_11;
}

bool func_454()
{
	if (func_311(7))
	{
		return true;
	}
	if (func_161())
	{
		return true;
	}
	return false;
}

bool func_455(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = func_162();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(false);
	if (!ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		return false;
	}
	ITEMSET::_CLEAR_ITEMSET(iVar1);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	bVar2 = false;
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	if (iVar3 > 0)
	{
		if (ITEMSET::IS_IN_ITEMSET(iVar0, iVar1))
		{
			bVar2 = true;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	if (bVar2)
	{
		return true;
	}
	return false;
}

bool func_456()
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (!func_311(7))
	{
		if (func_457(7))
		{
			func_670();
			return true;
		}
	}
	if (func_311(7))
	{
		if (func_164() == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(func_78(7)))
			{
				if (!ENTITY::IS_ENTITY_IN_WATER(func_78(7)))
				{
					return true;
				}
			}
		}
	}
	if (func_455(Global_33))
	{
		return true;
	}
	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = func_671();
	if (iVar1 == 0)
	{
		func_672(MISC::GET_GAME_TIMER());
		return true;
	}
	if (iVar1 + 10000 > iVar0)
	{
		return true;
	}
	if (ENTITY::_0x383F64263F946E45(&uVar2, func_162(), 4, Global_33, 0, 1))
	{
		func_670();
		return true;
	}
	return false;
}

bool func_457(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_154())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
	{
		return true;
	}
	return false;
}

void func_458()
{
	Global_1902883.f_429.f_12 = 0;
}

var func_459()
{
	return Global_1902883.f_429.f_12;
}

void func_460(int iParam0)
{
	Global_1902883.f_429.f_12 = iParam0;
}

int func_461()
{
	return Global_1902883.f_427;
}

void func_462(int iParam0)
{
	Global_1902883.f_427 = iParam0;
}

bool func_463()
{
	return Global_1902883.f_429.f_15;
}

void func_464(int iParam0)
{
	Global_1902883.f_429.f_15 = iParam0;
}

int func_465()
{
	return Global_38.f_289.f_3245;
}

void func_466()
{
	Global_1902883.f_429.f_16++;
}

int func_467()
{
	return Global_1902883.f_429.f_16;
}

bool func_468(int iParam0)
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

bool func_469(int iParam0)
{
	int iVar0;

	if (func_329(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return false;
	}
	if (!func_330(iParam0))
	{
		return false;
	}
	if (func_328(iParam0, &iVar0, -1f))
	{
		if (PED::CAN_PED_SEE_ENTITY(iParam0, iVar0, false, false) == 1)
		{
			return false;
		}
		if (LAW::ARE_WITNESSES_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	return true;
}

bool func_470(int iParam0)
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

int func_471(int iParam0)
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

bool func_472()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

int func_473()
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

bool func_474(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_226(iVar0);
}

int func_475(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0) && TASK::_0x6DAC799857EF3F11(PLAYER::PLAYER_PED_ID(), ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0)))
	{
		return 0;
	}
	iVar0 = ENTITY::_GET_CARRIABLE_FROM_ENTITY(iParam0);
	if (iVar0 == 0)
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = func_226(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_476(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_263(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 9.275179E-19f;
	bVar1 = iParam4 == 1.994827E+33f;
	bVar2 = iParam4 == -1.202057E-11f;
	if (!func_673(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_600(bParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_477(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var3, iParam2);
		}
		else if ((func_477(iParam0, bParam1) - iParam2) < 0)
		{
			func_476(iParam0, bParam1, func_601(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_674(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 6.236711E+08f)
	{
		func_598(bParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

int func_477(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_263(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_675(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

struct<5> func_478(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_479(iParam0, 2.982335E+09f, func_519(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_479(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_263(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

int func_480(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 2;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iVar0;
	}
	iVar1 = PED::_GET_PED_QUALITY(iParam0);
	switch (iVar1)
	{
		case 0:
			iVar0 = 0;
			break;
		case 1:
			iVar0 = 1;
			break;
		case -1:
		case 2:
			iVar0 = 2;
			break;
	}
	return iVar0;
}

int func_481(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 1.946198E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -1.13228E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -1.612481E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2.15947E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 1.486582E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -8.369188E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -8.479E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 1.092612E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 1.00121E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -3.393869E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -2.146483E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.683324E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -1.714903E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 3.540045E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 1.908759E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 1.743886E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -3.998961E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -787154.6f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -68183.73f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -4.330628E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1.05915E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return -9.463173E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -6.04593E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 1.562307E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return -6.101661E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return 1.544066E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return -1.101024E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 9.614223E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -5.945581E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return -7.624627E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -1.048603E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -1.548875E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 6.419786E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 3.365025E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 4.561484E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -5.029276f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 8.230158E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -4.423507E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -3.922512E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -8.041976E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return 6.922288E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return 87714.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 2.34674E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -3.27273E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 4.017762E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -7.379082E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -2.435618E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -1.037538E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -5.282553E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1.146312E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.007456E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 9.076408E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 1.910371E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -9.992345E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -1.87771E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -5.195334E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -3.404239E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 4.073091E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -4.270719E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -2.752362E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -1.683097E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -2.766552E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -3.151777E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -8.062062E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 1.658628E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -8221445f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1.393733E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return 3.947672E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -8.46789E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -2.123979E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return -8.137937E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -1.644345E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 6.45222E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 2.504758E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 1.085857E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 9.136372E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -3.877198E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -1.342214E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -7.090169E-39f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 4.143414E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1.39452E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 0.02198075f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -1.867976E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return -1.162543E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return 3.744237E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return 474666.2f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return 3.030501E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return 3.285981E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -7.461215E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -1622.647f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1.155258E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 6.490077E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 7.368477E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 7007593f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2.184331E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return -14.30725f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 4.696913E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -8.604818E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -8.782748E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 0.02174423f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 5.848209E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1.152293E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 1.493672E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -3.204001E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -1.026548E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -4.013387E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 8.375437E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return 4.880811E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return 2.935504E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -3.735768E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 1.453916E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 0.01160014f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.602576E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -3.201256E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 7.892923f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return -1.042475E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -4.447418f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -6.24208E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return -1.065758E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 4.592079E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -4.950221E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -3.410696E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 7.360676E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -3.305857E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -37031.14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return 1.444135E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return 4.992244E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -3.810507E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return -8.230556E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -1.052088E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 5.016784E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 2.512069E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -3.301344E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 4.516673E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -1.981305E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -70.37913f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 6.824345E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -2.852172E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 2.059936E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -5.844419E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 2.295032E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return 2.53068E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -2.798365E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 178.8635f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 4.611995E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 2.766804E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2745580f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -5.381378E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -7.374872E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -0.0003792866f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return 6606.792f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -4.355492E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 4.258855E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 2.034721E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 0.001643663f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -4.363519E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -1.788412E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -6.498311E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -5.709893E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 8.275908E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return 2.568957E-14f;
		case -827518870:
			return -8.486406E-38f;
		case 1367447057:
			return -1.337399E-29f;
		case -2092697195:
			return 4.953773E-11f;
		case -2043601589:
			return 8.819021E+26f;
		case 1758585485:
			return 1.924374E+16f;
		case 1527400190:
			return 0.025452f;
		case 1493601140:
			return -1.320131E+23f;
		case -885592109:
			return -1.304414E+34f;
		case -1282621313:
			return 2.858739E+23f;
		case -70954328:
			return 8.122941E-17f;
		case -1378208045:
			return 4.927081E+18f;
		case 1450608653:
			return 5.233933E+29f;
		case 1543592331:
			return 5.000713E+30f;
		case 1842740532:
			return 1.622289E+22f;
		case 2004357248:
			return 1.838733E-24f;
		case -229670230:
			return -1.502759E+26f;
		case 546758456:
			return 2.022833E+15f;
		case 1888419655:
			return -3.684036f;
		case -2040849706:
			return -2.4275E+25f;
		case 2014346813:
			return -1.598358E+35f;
		case -1638839614:
			return 2.96459E-31f;
		case 1705186999:
			return 9.861011E-07f;
		case -1821314478:
			return 348.9258f;
		case -1434083213:
			return -7.565593E-22f;
		default:
			break;
	}
	return 0;
}

int func_482(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915643.f_20646.f_1010.f_201;
	if (iParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1915643.f_20646.f_1010[iVar0] == iParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_483(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	bool bVar6;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_664(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_676(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -3.877593E+09f;
	Var0.f_3 = func_677(iVar5);
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		bVar6 = bParam0;
		Var0.f_2 = 3.294502E-19f;
		Var0.f_3 = bVar6;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			return 1;
		}
	}
	return 0;
}

bool func_484(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_663(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_678(iParam0))
	{
		return false;
	}
	if (func_679(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_662(iParam0, 1)) || func_16(32768))
	{
		if (!func_662(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_680())
	{
		return false;
	}
	return true;
}

void func_485(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_486()
{
	int iVar0;

	if (func_681())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904398[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_487(bool bParam0)
{
	if (func_682())
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (func_683(&(Global_1102813.f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_486())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) || func_684())
	{
		return false;
	}
	if (!func_680())
	{
		return false;
	}
	if (func_685())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if ((Global_1915643.f_20638 && Global_1915643.f_20241.f_43 == 2) && Global_1940239.f_2)
	{
		return false;
	}
	if (func_686())
	{
		return false;
	}
	return true;
}

void func_488(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (func_687(iParam0, iParam1, 1))
	{
		iVar0 = func_688(iParam1);
		iVar1 = func_689(iParam0);
		iVar2 = (func_689(iParam0) - func_689(iParam1));
		iVar3 = (func_688(iParam0) - func_688(iParam1));
		iVar4 = (func_690(iParam0) - func_690(iParam1));
		iVar5 = (func_691(iParam0) - func_691(iParam1));
		iVar6 = (func_692(iParam0) - func_692(iParam1));
		iVar7 = (func_693(iParam0) - func_693(iParam1));
	}
	else
	{
		iVar0 = func_688(iParam0);
		iVar1 = func_689(iParam1);
		iVar2 = (func_689(iParam1) - func_689(iParam0));
		iVar3 = (func_688(iParam1) - func_688(iParam0));
		iVar4 = (func_690(iParam1) - func_690(iParam0));
		iVar5 = (func_691(iParam1) - func_691(iParam0));
		iVar6 = (func_692(iParam1) - func_692(iParam0));
		iVar7 = (func_693(iParam1) - func_693(iParam0));
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
		iVar4 = (iVar4 + func_694(iVar0, iVar1));
		iVar3 = (iVar3 - 1);
		iVar0 = BUILTIN::ROUND(func_695(BUILTIN::TO_FLOAT(iVar0 + 1), 0f, 1094713344 /* Float: 12f */));
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
	*uParam2 = iVar7;
	*uParam3 = iVar6;
	*uParam4 = iVar5;
	*uParam5 = iVar4;
	*uParam6 = iVar3;
	*uParam7 = iVar2;
}

char* func_489(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_490(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_696(40, iParam0))
		{
			return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1102813.f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1102813.f_12)));
		}
		else
		{
			return PLAYER::GET_PLAYER_NAME(PLAYER::PLAYER_ID());
		}
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return "";
	}
	sVar0 = "";
	if (!Global_1295619.f_17[iParam0])
	{
		return sVar0;
	}
	if (func_696(40, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[iParam0]);
}

char* func_491(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_697(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

bool func_492()
{
	return false;
}

bool func_493()
{
	return false;
}

bool func_494(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_495(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 100;
	}
	return 0;
}

int func_496(int iParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_494(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

void func_497(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	if (func_494(iParam1, &iVar0))
	{
		ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0, iParam2);
	}
}

float func_498(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3);
	iVar1 = func_384(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 981668463);
	return fVar2;
}

void func_499(int iParam0, int iParam1, int iParam2)
{
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_3 = iParam2;
}

void func_500(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_494(iParam2, &iVar1))
	{
		iVar0 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar1);
	}
	iVar2 = func_439(iParam1, iParam2);
	if (iVar2 != iVar0)
	{
		func_698(iParam1, iParam2, iVar0);
	}
}

float func_501(int iParam0, int iParam1)
{
	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_2;
}

void func_502(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_501(iParam0, iParam1);
	fVar1 = func_498(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_699(iParam0, iParam1, fVar0);
}

void func_503(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_255(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::GET_MOUNT(Global_33) == iParam0)
		{
			bVar2 = true;
		}
	}
	bVar3 = false;
	if (TASK::_IS_PED_LEADING_HORSE(Global_33))
	{
		if (TASK::_GET_LED_HORSE_FROM_PED(Global_33) == iParam0)
		{
			bVar3 = true;
		}
	}
	bVar6 = false;
	bVar7 = false;
	switch (iParam2)
	{
		case 0:
		case 1:
			iVar5 = func_439(iParam1, iParam2);
			if (bVar0)
			{
				if (iVar5 < 100)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar1)
			{
				if (iVar5 < 55)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (bVar3)
			{
				if (iVar5 < 45)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (!bVar2)
			{
				if (iVar5 < 30)
				{
					bVar6 = true;
				}
				else
				{
					bVar7 = true;
				}
			}
			else if (func_700(iParam0, iParam2))
			{
				bVar7 = true;
			}
			else
			{
				fVar4 = -1032847360; /* Float: -60f */
				fVar8 = func_701(iParam1, iParam2);
				fVar4 = (fVar4 - (fVar4 * fVar8));
			}
			break;
	}
	if (fVar4 < 0f)
	{
		if (func_81(4096))
		{
			bVar7 = true;
		}
	}
	if (bVar6)
	{
		if (func_249(iParam1, 128))
		{
			bVar7 = true;
		}
		else
		{
			fVar4 = 1f;
		}
	}
	fVar9 = (fVar4 * 1114636288);
	fVar10 = func_498(iParam1, iParam2);
	fVar11 = ((fVar10 / fVar9) * 1120403456);
	fVar12 = func_702(iParam1, iParam2);
	iVar13 = func_439(iParam1, iParam2);
	iVar14 = 0;
	if (!bVar7)
	{
		if ((fVar12 < 0f && fVar11 > 0f) || (fVar12 > 0f && fVar11 < 0f))
		{
			fVar12 = 0f;
		}
		fVar12 = (fVar12 + fVar11);
		if (fVar12 >= 1f)
		{
			fVar12 = (fVar12 - 1f);
			iVar14++;
		}
		else if (fVar12 <= -1f)
		{
			fVar12 = (fVar12 + 1f);
			iVar14 = (iVar14 - 1);
		}
		func_703(iParam1, iParam2, fVar12);
	}
	if (iVar14 == 0)
	{
		return;
	}
	func_698(iParam1, iParam2, (iVar13 + iVar14));
}

void func_504(int iParam0, int iParam1, int iParam2, int iParam3)
{
	var uVar0;
	var uVar12;
	bool bVar24;
	bool bVar25;
	bool bVar26;

	func_20(0, &uVar0);
	func_20(1, &uVar12);
	bVar24 = false;
	if (func_121(39))
	{
		bVar24 = true;
	}
	bVar25 = false;
	bVar26 = false;
	switch (iParam1)
	{
		case 0:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
		case 1:
			if (iParam2 >= 50 && iParam3 < 50)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
			}
			if (iParam2 > 0 && iParam3 == 0)
			{
				if (bVar24)
				{
					bVar25 = true;
				}
				bVar26 = true;
			}
			break;
	}
	if (bVar25)
	{
		func_442(1);
		func_704(MISC::GET_GAME_TIMER());
	}
	if (bVar26)
	{
		func_706(func_705(8.153126E+33f), 1);
	}
}

bool func_505(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 16;
			break;
		case 1:
			*iParam1 = 8;
			break;
		case 2:
			*iParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

int func_506(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
			return 50;
	}
	return 0;
}

float func_507(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3);
	iVar1 = func_384(iVar1, 0, 30000);
	fVar2 = (BUILTIN::TO_FLOAT(iVar1) * 981668463);
	return fVar2;
}

void func_508(int iParam0, int iParam1, int iParam2)
{
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_3 = iParam2;
}

void func_509(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (func_505(iParam2, &iVar0))
	{
		iVar1 = ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	iVar2 = func_406(iParam1, iParam2);
	if (iVar2 != iVar1)
	{
		func_707(iParam1, iParam2, iVar1);
	}
}

float func_510(int iParam0, int iParam1)
{
	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_2;
}

void func_511(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = func_510(iParam0, iParam1);
	fVar1 = func_507(iParam0, iParam1);
	fVar0 = (fVar0 - fVar1);
	if (fVar0 < 0f)
	{
		fVar0 = 0f;
	}
	func_708(iParam0, iParam1, fVar0);
}

void func_512(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	int iVar10;
	int iVar11;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_74(iParam1) == 2)
	{
		bVar0 = true;
	}
	bVar1 = false;
	if (func_255(iParam0))
	{
		bVar1 = true;
	}
	bVar2 = false;
	switch (iParam2)
	{
		case 1:
			if (bVar0)
			{
				fVar3 = -1032847360; /* Float: -60f */
			}
			else if (bVar1)
			{
				fVar3 = 1128267776; /* Float: 192f */
			}
			else if (func_709(iParam0))
			{
				bVar2 = true;
			}
			else
			{
				fVar3 = 1119879168; /* Float: 96f */
			}
			break;
		case 0:
			if (bVar0)
			{
				fVar3 = -1032847360; /* Float: -60f */
			}
			else
			{
				bVar2 = true;
			}
			break;
		case 2:
			iVar4 = func_406(iParam1, 2);
			iVar5 = (100 - func_406(iParam1, 1));
			if (iVar5 < 50)
			{
				fVar3 = -1027604480; /* Float: -96f */
			}
			else if (iVar4 > 50)
			{
				fVar3 = -1032847360; /* Float: -60f */
			}
			else if (iVar4 < 50)
			{
				fVar3 = 1114636288; /* Float: 60f */
			}
			else
			{
				bVar2 = true;
			}
			break;
	}
	fVar6 = (fVar3 * 1114636288);
	fVar7 = func_507(iParam1, iParam2);
	fVar8 = ((fVar7 / fVar6) * 1120403456);
	fVar9 = func_710(iParam1, iParam2);
	iVar10 = func_406(iParam1, iParam2);
	iVar11 = 0;
	if (!bVar2)
	{
		fVar9 = (fVar9 + fVar8);
		if (fVar9 >= 1f)
		{
			fVar9 = (fVar9 - 1f);
			iVar11++;
		}
		else if (fVar9 <= -1f)
		{
			fVar9 = (fVar9 + 1f);
			iVar11 = (iVar11 - 1);
		}
		func_711(iParam1, iParam2, fVar9);
	}
	if (iParam2 == 2)
	{
		if (iVar4 > 50)
		{
			if (iVar10 <= 50)
			{
				iVar10 = 50;
				func_712(iParam1, iParam2);
			}
		}
		else if (iVar4 < 50)
		{
			if (iVar10 >= 50)
			{
				iVar10 = 50;
				func_712(iParam1, iParam2);
			}
		}
	}
	if (iVar11 == 0)
	{
		return;
	}
	func_707(iParam1, iParam2, (iVar10 + iVar11));
}

void func_513(int iParam0, int iParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	struct<11> Var12;
	int iVar24;
	bool bVar25;
	bool bVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	func_20(0, &Var0);
	func_20(1, &Var12);
	iVar24 = func_78(iParam0);
	bVar25 = false;
	if (iParam0 == 0 || (iParam0 == 1 && !Var0.f_2))
	{
		if ((iParam0 == 0 && Var0.f_10) || (iParam0 == 1 && Var12.f_10))
		{
			if (func_121(40))
			{
				bVar25 = true;
			}
		}
	}
	bVar26 = false;
	iVar27 = 0;
	switch (iParam1)
	{
		case 0:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
					bVar26 = true;
					iVar27 = 4;
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 1:
			if (iParam2 <= 50 && iParam3 > 50)
			{
				if (bVar25)
				{
				}
			}
			if (iParam2 < 100 && iParam3 == 100)
			{
				if (bVar25)
				{
				}
			}
			break;
		case 2:
			iVar28 = func_286(iVar24, 2);
			iVar29 = func_713(iParam0);
			iVar30 = func_287(iVar28);
			if (iVar29 != iVar30)
			{
				bVar31 = func_553(iVar24, iVar30, 1);
				if (bVar31)
				{
					func_288(iParam0, iVar30);
				}
			}
			if (iParam3 > 70)
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 100);
			}
			else
			{
				ATTRIBUTE::SET_ATTRIBUTE_POINTS(iVar24, 14, 50);
			}
			break;
	}
	if (bVar26)
	{
		func_434(1);
		func_714(MISC::GET_GAME_TIMER());
	}
	if (iVar27 != 0)
	{
		ATTRIBUTE::_SET_STATUS_EFFECT_CORE_ICON(iVar27);
	}
}

bool func_514()
{
	return Global_38.f_289.f_3250.f_1;
}

void func_515(int iParam0, float fParam1)
{
	Global_1902883.f_379.f_10[iParam0] = fParam1;
}

int func_516()
{
	return 5;
}

int func_517()
{
	return 6;
}

int func_518(bool bParam0)
{
	if (func_2() == -1)
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

struct<4> func_519()
{
	struct<4> Var0;

	return Var0;
}

int func_520(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_715(func_594(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_521(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_716(&bParam0);
	if (!func_263(bParam0, 0) && !func_715(func_594(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_520(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_717(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_718(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_719(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_720(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_721(bParam0, 1))
		{
			if (!func_719(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_720(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_722(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_264(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_522(bool bParam0)
{
	if (func_2() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_518(bParam0));
}

int func_523(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_524(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == bParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_602(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_723(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_724(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_725(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_726(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_727(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_728(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_729(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_730(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_524(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_731(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_525(int iParam0)
{
	int iVar0;

	iVar0 = func_158(iParam0);
	STREAMING::REQUEST_MODEL(iVar0, false);
}

void func_526(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar1 /*96*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_527(int iParam0)
{
	int iVar0;

	iVar0 = func_158(iParam0);
	if (!STREAMING::HAS_MODEL_LOADED(iVar0))
	{
		return false;
	}
	return true;
}

bool func_528(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_38.f_289.f_1[iParam0 /*460*/].f_15[iVar1 /*96*/];
		if (STREAMING::IS_MODEL_VALID(iVar0))
		{
			if (!STREAMING::HAS_MODEL_LOADED(iVar0))
			{
				return false;
			}
		}
		iVar1++;
	}
	return true;
}

bool func_529(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 5)
	{
		return true;
	}
	return false;
}

void func_530(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_BASE_RANK(iParam0, 7, iParam1);
}

void func_531(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_532(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_455;
}

int func_533(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_456;
}

void func_534(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	bool bVar20;
	int iVar21;

	Global_1290256.f_1139.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar3 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar3 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar3 = { 1f, 0f, 0f };
			break;
	}
	vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar3) };
	if (STREAMING::_IS_MODEL_AN_OBJECT(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar0, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar8 = func_732(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		iVar18 = func_733(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar7 = func_734(*uParam1, vVar0, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar7))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_EQUIP_META_PED_OUTFIT(iVar7, uParam1->f_8);
		}
		iVar9 = 0;
		while (iVar9 < uParam1->f_9)
		{
			iVar10 = uParam1->f_10[iVar9 /*8*/];
			iVar11 = uParam1->f_10[iVar9 /*8*/].f_1;
			iVar12 = uParam1->f_10[iVar9 /*8*/].f_2;
			iVar13 = uParam1->f_10[iVar9 /*8*/].f_3;
			iVar14 = uParam1->f_10[iVar9 /*8*/].f_4;
			iVar15 = uParam1->f_10[iVar9 /*8*/].f_5;
			iVar16 = uParam1->f_10[iVar9 /*8*/].f_6;
			iVar17 = uParam1->f_10[iVar9 /*8*/].f_7;
			PED::_SET_META_PED_TAG(iVar7, iVar10, iVar11, iVar12, iVar13, iVar14, iVar15, iVar16, iVar17);
			iVar9++;
		}
		PED::_UPDATE_PED_VARIATION(iVar7, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			ENTITY::SET_ENTITY_HEALTH(iVar7, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar7, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar7, uParam1->f_91);
		}
		if (ENTITY::GET_IS_ANIMAL(iVar7))
		{
			PED::_SET_PED_QUALITY(iVar7, uParam1->f_4);
			FLOCK::_SET_ANIMAL_RARITY(iVar7, uParam1->f_5);
			PED::_SET_PED_DAMAGE_CLEANLINESS(iVar7, uParam1->f_6);
			PED::_SET_PED_DAMAGED(iVar7, uParam1->f_7);
		}
		if (uParam1->f_92)
		{
			PED::SET_LOOTING_FLAG(iVar7, 0, false);
			ENTITY::_SET_ENTITY_FULLY_LOOTED(iVar7, true);
		}
		iVar8 = func_732(iParam2);
		TASK::TASK_CARRIABLE(iVar7, uParam1->f_3, iParam0, iVar8, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar7, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar7, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar7, true);
			FIRE::START_ENTITY_FIRE(iVar7, 0f, -1, 8);
		}
		iVar19 = func_735(iVar7);
		bVar20 = func_221(iVar19);
		if (func_263(bVar20, 0))
		{
			if (bVar20 != uParam1->f_1)
			{
				uParam1->f_1 = bVar20;
			}
		}
		iVar21 = func_733(iParam0, iVar7);
	}
}

void func_535(int iParam0)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 21)
	{
		if (iVar0 == -1)
		{
		}
		else
		{
			Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[iVar0] = 0f;
		}
		iVar0++;
	}
}

void func_536()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		Global_1902883.f_303.f_2[iVar0 /*5*/] = -1;
		Global_1902883.f_303.f_2[iVar0 /*5*/].f_1 = -1;
		Global_1902883.f_303.f_2[iVar0 /*5*/].f_2 = 0f;
		Global_1902883.f_303.f_2[iVar0 /*5*/].f_3 = -1;
		Global_1902883.f_303.f_2[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
}

bool func_537(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_736(Var0, 3.954192E+12f, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_538(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_736(Var0, -6.466667E-38f, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_539(int iParam0, var uParam1)
{
	struct<4> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	*uParam1 = func_736(Var0, -0.006827094f, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_540(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_737(3.210799E-08f, iParam0))
	{
		return false;
	}
	Var0 = { func_70() };
	*uParam1 = func_736(Var0, iParam0, 0, -1);
	if (!func_263(*uParam1, 0))
	{
		return false;
	}
	return true;
}

void func_541(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
}

void func_542(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_543(var uParam0, int iParam1)
{
	uParam0->f_1 = iParam1;
}

void func_544(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

void func_545(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_546(var uParam0, int iParam1)
{
	uParam0->f_4 = iParam1;
}

void func_547(var uParam0, int iParam1)
{
	uParam0->f_5 = iParam1;
}

void func_548(var uParam0, int iParam1)
{
	uParam0->f_6 = iParam1;
}

void func_549(int iParam0)
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
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -1.155453E-13f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -6.54615E-16f, 0, false);
	PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, 2.683843E-37f, 0, false);
}

void func_550(int iParam0, var uParam1)
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
	func_738(iParam0, *uParam1);
	func_738(iParam0, uParam1->f_1);
	func_738(iParam0, uParam1->f_2);
}

void func_551(int iParam0)
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

void func_552(int iParam0, var uParam1)
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
	func_738(iParam0, *uParam1);
	func_738(iParam0, uParam1->f_1);
	func_738(iParam0, uParam1->f_2);
	func_738(iParam0, uParam1->f_3);
	func_738(iParam0, uParam1->f_4);
	func_738(iParam0, uParam1->f_5);
	func_738(iParam0, uParam1->f_6);
	func_738(iParam0, uParam1->f_7);
}

int func_553(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(iParam1, iVar0))
	{
		return 0;
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, iParam1);
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, true, true, true, true, false);
	}
	return 1;
}

bool func_554()
{
	if (!func_81(8))
	{
		return false;
	}
	return true;
}

var func_555()
{
	return Global_1902883.f_429;
}

var func_556()
{
	return Global_1902883.f_429.f_1;
}

void func_557(int iParam0)
{
	Global_1902883.f_429 = *iParam0;
}

void func_558(int iParam0)
{
	Global_1902883.f_429.f_1 = *iParam0;
}

void func_559(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_484(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_662(iParam0, 1024))
	{
		return;
	}
	func_485(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 3;
}

void func_560(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	func_739(&(uParam0->f_3));
	uParam0->f_12 = 1;
	uParam0->f_13 = 0;
}

Vector3 func_561(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f, 0f, 0f;
	}
	return Global_1902883[iParam0 /*43*/].f_37;
}

bool func_562(var uParam0, vector3 vParam1, vector3 vParam4, int iParam7, float fParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	float fVar7;
	vector3 vVar8;
	bool bVar11;
	int iVar12;

	iVar6 = 12;
	if (func_192(vParam4))
	{
		vVar8 = { CAM::GET_GAMEPLAY_CAM_ROT(2) };
		fVar7 = vVar8.z;
	}
	else
	{
		fVar7 = func_565(vParam4, vParam1, 1);
	}
	fVar7 = (fVar7 + ((BUILTIN::TO_FLOAT(uParam0->f_2) * 1092616192) * func_740((uParam0->f_2 % 2) == 0, 1f, -1f)));
	vVar0 = { vParam1 + Vector(0f, -BUILTIN::COS(fVar7), BUILTIN::SIN(fVar7)) * FtoV(((1117782016 + 1109393408) * 1056964608)) * Vector(fParam8, fParam8, fParam8) };
	if (uParam0->f_2 > 3)
	{
		iVar6 = 13;
	}
	switch (func_741(uParam0))
	{
		case 0:
			func_742(uParam0, 0f, 0f, 0f);
			uParam0->f_3.f_2 = 0;
			uParam0->f_3 = 0;
			uParam0->f_1 = 0;
			uParam0->f_13 = 0;
			uParam0->f_14 = 0;
			func_743(uParam0, 1);
			break;
		case 1:
			if (PATHFIND::GET_CLOSEST_VEHICLE_NODE(vVar0, &vVar3, 1, 3f, 0f))
			{
				if (func_744(vVar3, vParam1, 0, 0))
				{
					func_742(uParam0, vVar3);
					if (uParam0->f_12)
					{
						func_743(uParam0, 3);
					}
					else
					{
						func_743(uParam0, 4);
					}
				}
				else
				{
					func_743(uParam0, 2);
				}
			}
			else
			{
				func_743(uParam0, 2);
			}
			break;
		case 2:
			bVar11 = false;
			if (func_745(vVar0, &(uParam0->f_3), &bVar11, iVar6, 0, 180f, 20f, -0.01f, -0.01f, 0))
			{
				if (func_744(func_564(uParam0), vParam1, 1, 1))
				{
					if (uParam0->f_12)
					{
						func_743(uParam0, 3);
					}
					else
					{
						func_743(uParam0, 4);
					}
				}
				else
				{
					func_743(uParam0, 5);
				}
			}
			else if (bVar11)
			{
				func_743(uParam0, 5);
			}
			break;
		case 3:
			if (uParam0->f_13 == 0)
			{
				uParam0->f_13 = PATHFIND::NAVMESH_REQUEST_PATH(iParam7, func_564(uParam0), vParam1, 23);
				if (uParam0->f_13 == -1)
				{
					uParam0->f_14++;
					uParam0->f_13 = 0;
					if (uParam0->f_14 >= 50)
					{
						func_743(uParam0, 5);
					}
				}
			}
			else
			{
				switch (PATHFIND::_NAVMESH_REQUESTED_QUERY_STATUS(uParam0->f_13))
				{
					case 2:
						break;
					case 0:
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						func_743(uParam0, 5);
						break;
					case 1:
						iVar12 = PATHFIND::_NAVMESH_REQUESTED_PATH_WAYPOINTS_TERRAIN(uParam0->f_13);
						if (func_746(iVar12, 2) && iVar6 != 13)
						{
							func_743(uParam0, 5);
						}
						else
						{
							func_743(uParam0, 4);
						}
						PATHFIND::_NAVMESH_CLEAR_REQUESTED_PATH(uParam0->f_13);
						break;
				}
			}
			break;
		case 4:
			uParam0->f_2 = 0;
			func_747(&(uParam0->f_3.f_3), 1, 1, 0, 0);
			func_743(uParam0, 0);
			return true;
		case 5:
			uParam0->f_2++;
			if (uParam0->f_2 > 12)
			{
				uParam0->f_2 = 0;
				uParam0->f_1 = 1;
			}
			else
			{
				uParam0->f_1 = 0;
			}
			func_743(uParam0, 0);
			break;
	}
	return false;
}

bool func_563(int iParam0, char* sParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;

	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = fParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_748(iParam0, &Var0);
}

Vector3 func_564(var uParam0)
{
	return uParam0->f_3.f_3;
}

float func_565(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_566(int iParam0, vector3 vParam1, float fParam4)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_19 = { vParam1 };
	Global_1902883[iParam0 /*43*/].f_22 = fParam4;
}

void func_567(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_749(iParam0, 1);
}

bool func_568(int iParam0)
{
	int iVar0;
	int iVar1;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_66(iParam0))
	{
		return false;
	}
	iVar0 = func_78(iParam0);
	iVar1 = func_138(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (PED::GET_MOUNT(iVar1) == iVar0)
	{
		return true;
	}
	return false;
}

void func_569(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = Global_1902883[iParam0 /*43*/];
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	iVar2 = PED::_GET_RIDER_OF_MOUNT(iVar0, true);
	if (iVar1 != iVar2)
	{
		return;
	}
	if (bParam1)
	{
		iVar3 = 2;
	}
	else
	{
		iVar3 = 1;
	}
	TASK::TASK_HORSE_ACTION(iVar0, iVar3, 0, 0);
}

int func_570()
{
	return Global_1902883.f_364.f_9;
}

bool func_571(int iParam0)
{
	switch (iParam0)
	{
		case joaat("A_C_HORSE_GANG_BILL"):
		case joaat("A_C_HORSE_GANG_SEAN"):
		case joaat("A_C_HORSE_GANG_JOHN"):
		case joaat("A_C_HORSE_GANG_KAREN"):
		case joaat("A_C_HORSE_GANG_DUTCH"):
		case joaat("A_C_HORSE_EAGLEFLIES"):
		case joaat("A_C_HORSE_GANG_JAVIER"):
		case joaat("A_C_HORSE_GANG_SADIE"):
		case joaat("A_C_HORSE_GANG_LENNY"):
		case joaat("A_C_HORSE_GANG_MICAH"):
		case joaat("A_C_HORSE_GANG_HOSEA"):
		case joaat("A_C_HORSE_GANG_SADIE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_CHARLES"):
		case joaat("A_C_HORSE_GANG_UNCLE_ENDLESSSUMMER"):
		case joaat("A_C_HORSE_GANG_TRELAWNEY"):
		case joaat("A_C_HORSE_GANG_KIERAN"):
		case joaat("A_C_HORSE_GANG_UNCLE"):
		case joaat("A_C_HORSE_GANG_CHARLES_ENDLESSSUMMER"):
			return true;
	}
	return false;
}

int func_572(bool bParam0, bool bParam1, bool bParam2)
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

void func_573(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902883.f_491), &(Global_38.f_289.f_1[iParam1 /*460*/]), 460);
	MISC::COPY_SCRIPT_STRUCT(&(Global_38.f_289.f_1[iParam1 /*460*/]), &(Global_38.f_289.f_1[iParam0 /*460*/]), 460);
	MISC::COPY_SCRIPT_STRUCT(&(Global_38.f_289.f_1[iParam0 /*460*/]), &(Global_1902883.f_491), 460);
}

void func_574(int iParam0, int iParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902883.f_448), &(Global_1902883[iParam1 /*43*/]), 43);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902883[iParam1 /*43*/]), &(Global_1902883[iParam0 /*43*/]), 43);
	MISC::COPY_SCRIPT_STRUCT(&(Global_1902883[iParam0 /*43*/]), &(Global_1902883.f_448), 43);
}

int func_575(int iParam0, int iParam1)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar58;
	int iVar59;

	Var0.f_9 = -5.45926E-19f;
	Var29.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return 0;
	}
	bVar58 = false;
	if (!func_655(iParam1, &Var29))
	{
		bVar58 = true;
	}
	if (bVar58)
	{
		iVar59 = func_653(iParam1);
		if (iVar59 == 0)
		{
			return 0;
		}
		if (!func_750(Var0, Var0.f_5, iVar59, 0, 0))
		{
			return 0;
		}
	}
	else if (!func_751(Var0, Var29, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_576(int iParam0)
{
	Global_1902883.f_406.f_1 = iParam0;
}

bool func_577(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_262(bParam1, Var0, 3.954192E+12f, 0) };
	return func_267(Var29, 1, 0);
}

bool func_578(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_262(bParam1, Var0, -6.466667E-38f, 0) };
	return func_267(Var29, 1, 0);
}

bool func_579(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<4> Var29;

	Var0.f_9 = -5.45926E-19f;
	if (!func_655(iParam0, &Var0))
	{
		return false;
	}
	Var29 = { func_262(bParam1, Var0, -0.006827094f, 0) };
	return func_267(Var29, 1, 0);
}

void func_580(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
	iVar2 = func_752(iVar1);
	if (DECORATOR::DECOR_EXIST_ON(iVar0, "HorseGender"))
	{
		iVar3 = DECORATOR::DECOR_GET_INT(iVar0, "HorseGender");
	}
	else
	{
		iVar3 = func_753(iVar0);
		DECORATOR::DECOR_SET_INT(iVar0, "HorseGender", iVar3);
	}
	func_754(iParam0, iVar1);
	func_755(iParam0, iVar2);
	func_756(iParam0, iVar3);
	iVar4 = -1;
	iVar5 = -15;
	if (iParam1 != 0)
	{
		iVar4 = MISC::GET_GAME_TIMER();
		iVar5 = func_242();
	}
	func_152(iParam0, iParam1);
	func_757(iParam0, iVar4);
	func_758(iParam0, iVar5);
	iVar6 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, 7);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_ATTRIBUTE_POINTS(iVar0, 7));
	func_350(iParam0, iVar6);
	func_645(iParam0, fVar7);
	iVar8 = 0;
	while (iVar8 < 3)
	{
		if (func_505(iVar8, &iVar9))
		{
			iVar10 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar0, iVar9);
			func_707(iParam0, iVar8, iVar10);
		}
		iVar8++;
	}
}

void func_581(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_457 = iParam1;
}

int func_582(int iParam0)
{
	int iVar0;
	float fVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (!PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(1.977859E+07f, iVar0))
	{
		return 0;
	}
	fVar1 = 1.977859E+07f;
	if (PED::_IS_META_PED_OUTFIT_EQUIPPED(iParam0, fVar1))
	{
		return 1;
	}
	return 0;
}

int func_583(var uParam0, int iParam1, var uParam2)
{
	*uParam0 = 0;
	*iParam1 = 0;
	*uParam2 = 0;
	*uParam0 = func_759();
	*iParam1 = func_760();
	*uParam2 = func_761();
	return 1;
}

int func_584(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 2.175367f;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iParam0, 7);
	return iVar0;
}

void func_585(int iParam0)
{
	if (func_465() < iParam0)
	{
		func_762(iParam0);
	}
}

int func_586()
{
	return Global_1893611.f_2;
}

bool func_587(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_HUMMINGBIRD_SAGE"):
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_HERB_SAGE"):
		case joaat("CONSUMABLE_CRAFTED_SUPER_MEAL"):
		case joaat("CONSUMABLE_BEETS"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_CORN"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
		case joaat("CONSUMABLE_HERB_BLACK_CURRANT"):
		case -241666815:
		case joaat("CONSUMABLE_HERB_AMERICAN_GINSENG"):
		case joaat("CONSUMABLE_HERB_GOLDEN_CURRANT"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_RED_SAGE"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_PEACH"):
		case joaat("CONSUMABLE_HERB_DESERT_SAGE"):
		case joaat("CONSUMABLE_CARROT"):
		case joaat("CONSUMABLE_HERB_OREGANO"):
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
		case joaat("CONSUMABLE_HERB_CURRANT"):
		case joaat("CONSUMABLE_PEAR"):
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HAYCUBE"):
		case joaat("CONSUMABLE_APPLE"):
		case joaat("CONSUMABLE_HERB_ALASKAN_GINSENG"):
		case joaat("CONSUMABLE_CELERY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return true;
	}
	return false;
}

bool func_588(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			return true;
	}
	return false;
}

bool func_589(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_HORSE_STIMULANT_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_590(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return true;
	}
	return false;
}

bool func_591(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HORSE_OINTMENT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_592(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("KIT_HORSE_BRUSH"):
			return true;
	}
	return false;
}

bool func_593(bool bParam0)
{
	switch (bParam0)
	{
		case -1724045811: /* GXTEntry: "Horse Care Package" */
			return true;
	}
	return false;
}

bool func_594(bool bParam0)
{
	return bParam0;
}

int func_595(bool bParam0, int iParam1)
{
	if (!func_715(bParam0, 2))
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

bool func_596(bool bParam0)
{
	return func_602(bParam0) == 4.324946E+36f;
}

bool func_597(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_602(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_372(bParam0, 9.811189E+11f))
	{
		func_763(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_598(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	float fVar11;
	int iVar12;
	float fVar13;
	char* sVar14;
	char* sVar15;
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	int iVar20;
	char* sVar21;
	char cVar22[128];

	if (!func_263(bParam0, 0))
	{
		return;
	}
	else if (bParam0 == 4.553053E+26f)
	{
		return;
	}
	else if (iParam1 == 0)
	{
		return;
	}
	if (!func_764() || bParam6)
	{
		func_765(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_766(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_766(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_767(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_602(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_372(bParam0, -5.215192E-33f)) && !func_372(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_768(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_769(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 1.435927E-34f)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (bParam5)
	{
		Var7 = "ITEMTYPE_ORDERED_ITEM";
		Var7.f_1 = "itemtype_textures";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	fVar13 = 4.808429E-35f;
	sVar14 = "Transaction_Positive";
	sVar15 = "Transaction_Feed_Sounds";
	iVar16 = 0;
	if (bVar0)
	{
		fVar13 = 1.058639E-16f;
		sVar14 = "Transaction_Negative";
		iVar16 = 1;
	}
	if (func_372(bParam0, 6.834376E-22f))
	{
		sVar17 = func_770(bParam0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar17))
		{
			sVar14 = sVar17;
			sVar15 = "RDRO_Collectible_Sounds_Travelling_Saleswoman";
		}
	}
	if (ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.284544E+08f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	if (func_372(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_771(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			fVar13 = -1.101616E-25f;
		}
		else
		{
			fVar13 = -2.926177E-30f;
		}
	}
	bVar18 = func_772(bParam0, 0);
	if ((func_773(iVar12) && func_372(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_774(bParam0);
	}
	else if (func_602(bParam0) == -42.1084f)
	{
		bVar19 = func_775(bParam0);
		if (func_263(bVar19, 0))
		{
			bVar18 = func_772(bVar19, 0);
		}
	}
	if (func_776(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_777(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_697(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_778(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_779(bParam0, &cVar22))
		{
			sVar21 = func_781(func_780(cVar22), 4.808429E-35f);
		}
	}
	func_636(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

bool func_599(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_602(bParam0);
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
			if (!func_782(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_783(bParam0))
			{
				return true;
			}
			break;
	}
	return func_601(bParam0, 0, 0, 0) >= iParam1;
}

struct<2> func_600(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_263(bParam0, 0))
	{
		return Var0;
	}
	if (func_372(bParam0, -8.087424E+27f))
	{
		if (func_2() == -1)
		{
			if (func_372(bParam0, -3.480943E+19f))
			{
				return func_784(4.052717E-32f);
			}
			else
			{
				return func_784(9918.3f);
			}
		}
	}
	else if (func_372(bParam0, -3.480943E+19f))
	{
		return func_784(-18395.16f);
	}
	if (func_372(bParam0, 4.091206E+36f))
	{
		return func_784(3.674458E+22f);
	}
	return Var2;
}

int func_601(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_602(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_597(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_785(bParam0, 0);
	}
	if (func_520(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_786(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_518(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_602(bool bParam0)
{
	vector3 vVar0;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_603(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;
	struct<10> Var20;
	struct<4> Var34;
	int iVar39;
	int iVar40;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	Var0 = { func_787(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_788(&Var0, func_718(0));
	}
	if (!func_789(&Var0, &iVar18, &iVar19, 0))
	{
		return false;
	}
	Var20.f_9 = -5.45926E-19f;
	iVar39 = 0;
	while (iVar39 < iVar19)
	{
		if (iVar40 >= iParam1)
		{
		}
		else
		{
			if (!func_790(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_656(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_791(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

bool func_604(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_520(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_792(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_605(bParam0, bParam4, 0) };
	Var6 = { func_262(bParam0, Var1, Var1.f_4, bParam4) };
	return func_656(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

struct<5> func_605(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_261(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_602(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_262(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_718(bParam1) };
			if (bParam2 && func_721(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_719(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_719(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_720(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_793(bParam1) };
			switch (func_768(bParam0))
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
			if (func_794(bParam0, -2.580501E-27f))
			{
				Var0 = { func_262(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_794(bParam0, -4.220332E-15f))
			{
				Var0 = { func_262(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_262(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_794(bParam0, -3.171238E-21f))
			{
				Var0 = { func_262(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_524(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_794(bParam0, -3.171238E-21f))
			{
				Var0 = { func_262(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

void func_606(int iParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = iParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_795() && iParam2 == 0))
	{
		func_796(1);
		func_797(1);
	}
}

void func_607(int iParam0, bool bParam1)
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	func_706(func_705(-8.750963E-16f), 1);
	Var0 = { func_380(0, 1, 0, -1) };
	bVar4 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar4)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	PED::_SET_PED_MOTIVATION(iParam0, 3, 0f, 0);
	if (!bVar4)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	iVar5 = func_382(Var0, 1);
	func_798(iParam0, bParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(iParam0)))
	{
		return;
	}
	iVar6 = 23;
	if (func_799(bParam1))
	{
		iVar6 = 15;
	}
	else if (iVar5 >= 50)
	{
		iVar6 = 14;
	}
	else if (iVar5 >= 25)
	{
		iVar6 = 13;
	}
	else
	{
		iVar6 = 12;
	}
	func_381(&Var0, 0, 1);
	iVar7 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
	iVar8 = func_800(iVar7);
	func_801(Var0, 1, BUILTIN::TO_FLOAT(iVar8));
	if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
	{
		func_802(iParam0, &Global_1903834, iVar6, 0);
		func_803(-9.545294E+21f, 0, 0);
		if (ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 8) < 25 && iVar5 >= 25)
		{
			func_803(3.74777E-05f, 0, 0);
		}
	}
	else
	{
		func_803(-1.065784E+33f, 0, 0);
	}
}

void func_608(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_587(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	func_804(iParam0);
	iVar0 = -1;
	bVar1 = false;
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		bVar1 = true;
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_706(func_705(-8.750963E-16f), 1);
	iVar2 = func_496(iParam0, 0);
	iVar3 = func_496(iParam0, 1);
	func_805(iParam0, bParam1);
	iVar4 = func_496(iParam0, 0);
	iVar5 = func_496(iParam0, 1);
	iVar6 = 0;
	iVar6 = (iVar6 + (iVar4 - iVar2));
	iVar6 = (iVar6 + (iVar5 - iVar3));
	func_102(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (func_806(bParam1))
	{
		func_706(func_705(1.252496E+36f), 1);
	}
	if (func_807(bParam1))
	{
		return;
	}
	if (func_799(bParam1))
	{
		func_391(iVar0, 15);
		return;
	}
	iVar7 = -1;
	if (iVar6 >= 50)
	{
		iVar7 = 12;
	}
	else if (iVar6 >= 25)
	{
		iVar7 = 13;
	}
	else if (iVar6 >= 0)
	{
		iVar7 = 14;
	}
	if (iVar7 != -1)
	{
		func_391(iVar0, iVar7);
	}
	if (!func_156(43))
	{
		func_228(43, 0);
		func_436(MISC::GET_GAME_TIMER());
	}
}

void func_609(int iParam0, bool bParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_588(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295619.f_5))
	{
		func_803(-9.545294E+21f, 0, 0);
	}
	else
	{
		func_803(-1.065784E+33f, 0, 0);
	}
	func_706(func_705(-1.651276E-24f), 1);
	func_798(iParam0, bParam1);
}

void func_610(int iParam0, bool bParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_588(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_706(func_705(-1.651276E-24f), 1);
	func_805(iParam0, bParam1);
}

void func_611(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	func_706(func_705(-3.492353E+22f), 1);
	func_798(iParam0, bParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295619.f_5))
	{
		func_803(-9.545294E+21f, 0, 0);
	}
	else
	{
		func_803(-1.065784E+33f, 0, 0);
	}
}

void func_612(int iParam0, bool bParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_589(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_706(func_705(-3.492353E+22f), 1);
	func_805(iParam0, bParam1);
}

void func_613(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_798(iParam0, bParam1);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295619.f_5))
	{
		func_803(-9.545294E+21f, 0, 0);
	}
	else
	{
		func_803(-1.065784E+33f, 0, 0);
	}
}

int func_614(int iParam0, bool bParam1)
{
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return 0;
	}
	if (!func_590(bParam1))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	switch (bParam1)
	{
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			break;
	}
	func_805(iParam0, bParam1);
	func_706(func_705(13382.46f), 1);
	return 1;
}

void func_615(int iParam0, bool bParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	PED::_SET_PED_MOTIVATION(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
	func_798(iParam0, bParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(iParam0)))
	{
		return;
	}
	if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(Global_1295619.f_5))
	{
		Var1 = { func_380(0, 1, 0, -1) };
		if (!func_381(&Var1, 0, 1))
		{
		}
		iVar5 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
		fVar6 = (BUILTIN::TO_FLOAT(func_808(iVar5)) + (1114636288 * 1114636288));
		func_802(iParam0, &Global_1903834, 19, 0);
		func_801(Var1, 0, fVar6);
		func_803(-9.545294E+21f, 0, 0);
	}
	else
	{
		func_803(-1.065784E+33f, 0, 0);
	}
}

void func_616(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_591(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_804(iParam0);
	func_805(iParam0, bParam1);
	bVar1 = func_318(iParam0);
	if (bVar1)
	{
		iVar0 = func_333(iParam0);
	}
	func_102(iParam0);
	if (!bVar1)
	{
		return;
	}
	if (!func_700(iParam0, 1))
	{
		func_391(iVar0, 18);
	}
	iVar2 = func_809(iParam0);
	fVar3 = (BUILTIN::TO_FLOAT(func_808(iVar2)) + (1114636288 * 1114636288));
	func_708(iVar0, 0, fVar3);
}

void func_617(int iParam0, bool bParam1)
{
	bool bVar0;
	struct<4> Var1;
	int iVar5;
	float fVar6;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	PED::_SET_PED_MOTIVATION(iParam0, 3, 0f, 0);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
	func_798(iParam0, bParam1);
	if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) != iParam0)
	{
		func_803(-1.065784E+33f, 0, 0);
		return;
	}
	func_803(-9.545294E+21f, 0, 0);
	Var1 = { func_380(0, 1, 0, -1) };
	iVar5 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, 0);
	fVar6 = (BUILTIN::TO_FLOAT(func_808(iVar5)) + (1114636288 * 1114636288));
	func_801(Var1, 0, fVar6);
}

void func_618(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_593(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar1 = false;
	if (func_318(iParam0))
	{
		iVar0 = func_333(iParam0);
		bVar1 = true;
	}
	if (bVar1)
	{
		iVar2 = func_809(iParam0);
		fVar3 = (BUILTIN::TO_FLOAT(func_808(iVar2)) + (1114636288 * 1114636288));
		func_708(iVar0, 0, fVar3);
	}
	func_804(iParam0);
	func_805(iParam0, bParam1);
}

void func_619(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	struct<4> Var2;
	int iVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	int iVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (iVar0 != iParam0)
	{
		func_803(-1.065784E+33f, 0, 0);
		return;
	}
	bVar1 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar1)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	PED::_SET_PED_MOTIVATION(iParam0, 3, 0f, 0);
	if (!bVar1)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_798(iParam0, bParam1);
	Var2 = { func_380(0, 1, 0, -1) };
	if (!func_381(&Var2, 0, 1))
	{
	}
	iVar6 = func_808(0);
	func_801(Var2, 0, BUILTIN::TO_FLOAT(iVar6));
	bVar7 = false;
	iVar8 = MISC::GET_GAME_TIMER();
	if ((Global_1290256.f_1608.f_19 + 45000) > iVar8)
	{
		bVar7 = true;
	}
	bVar9 = false;
	if (bVar7 && Global_1290256.f_1608.f_19 + 15000 > iVar8)
	{
		bVar9 = true;
	}
	iVar10 = 23;
	if (iParam2 >= 10)
	{
		iVar10 = 18;
	}
	else if (bVar7)
	{
		if (bVar9)
		{
			return;
		}
		else
		{
			iVar10 = 16;
		}
	}
	else
	{
		iVar10 = 17;
	}
	switch (iVar10)
	{
		case 16:
		case 17:
			func_803(-9.545294E+21f, 0, 0);
			break;
		case 18:
			func_803(2.688847E+23f, 0, 0);
			break;
		case 23:
			return;
	}
	func_802(iParam0, &Global_1903834, iVar10, 0);
	Global_1290256.f_1608.f_19 = iVar8;
}

void func_620(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!func_592(bParam1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	func_804(iParam0);
	PED::_0xEB8886E1065654CD(iParam0, 10, "ALL", 10f);
	func_805(iParam0, bParam1);
	func_102(iParam0);
	bVar1 = func_318(iParam0);
	if (bVar1)
	{
		iVar0 = func_333(iParam0);
	}
	if (!bVar1)
	{
		return;
	}
	iVar2 = func_809(iParam0);
	iVar3 = func_808(iVar2);
	func_708(iVar0, 0, BUILTIN::TO_FLOAT(iVar3));
	if (iParam2 >= 10)
	{
		iVar4 = 16;
	}
	else
	{
		iVar4 = 17;
	}
	func_391(iVar0, iVar4);
}

bool func_621(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_787(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_789(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_790(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_810(&Var49, &Var0, 0))
				{
					if (func_811(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_791(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_791(iVar47);
	}
	return false;
}

struct<4> func_622()
{
	return Global_1290256.f_11.f_310;
}

bool func_623()
{
	return Global_1290256.f_11.f_318 > Global_1295619.f_16;
}

void func_624(var uParam0, bool bParam1)
{
	Global_1290256.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1290256.f_11.f_318 = Global_1295619.f_16 + 10;
	}
}

int func_625(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_812(iParam0);
	bVar1 = func_814(func_813(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_626()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_126(iVar0) };
		if (func_127(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_627(int iParam0)
{
	return func_815(&(Global_3145858.f_6), iParam0);
}

int func_628(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_629(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_787(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_789(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_790(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_810(&Var49, &Var0, 0))
				{
					if (func_811(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_791(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_791(iVar47);
	}
	return false;
}

struct<4> func_630(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -5.45926E-19f;
	if (!func_816("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_790(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_791(iVar0);
	return Var2;
}

void func_631(var uParam0)
{
	func_265(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_519() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_632(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_810(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_817(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_633(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_818(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_819(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_634(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_519() };
	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(iParam0, &Var0))
	{
		return false;
	}
	Var4.f_9 = -5.45926E-19f;
	iVar19 = 0;
	while (iVar19 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]), iParam0))
		{
			bVar18 = true;
		}
		else if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]), &Var0))
		{
			func_820(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
			Global_17418.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_524(Global_17418.f_55.f_61.f_41[iVar19 /*56*/], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_820(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
				Global_17418.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
				bVar18 = true;
			}
			else
			{
				iVar19++;
			}
		}
	}
	if (!bVar18)
	{
		return false;
	}
	return true;
}

void func_635(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar0 /*56*/]), &uParam0))
		{
			Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/] = iParam5;
			return;
		}
		iVar0++;
	}
	if (!func_634(&uParam0))
	{
		return;
	}
	Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/] = iParam5;
}

int func_636(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
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
	func_821(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_637(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	fVar0 = func_822(iParam1);
	if (fVar0 == 1315859240)
	{
		return false;
	}
	if (func_639(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_638(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	if (iParam1 == -1)
	{
		return false;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	switch (iParam1)
	{
		case 0:
		case 5:
		case 6:
		case 7:
		case 9:
			return false;
	}
	iVar0 = func_78(iParam0);
	fVar1 = func_143(iVar0);
	if (fVar1 >= 1036831949)
	{
		return true;
	}
	return false;
}

float func_639(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		return 0f;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[iParam1];
}

float func_640(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1097859072 /* Float: 15f */;
		case 4:
			return 4f;
		case 1:
			return 2f;
		case 2:
			return 1f;
		case 3:
			return 1f;
		case 5:
			return 1120403456 /* Float: 100f */;
		case 6:
			return 1103626240 /* Float: 25f */;
		case 7:
			return 5f;
		case 8:
			return 1f;
		case 9:
			return 1097859072 /* Float: 15f */;
		case 10:
			return 1097859072 /* Float: 15f */;
		case 11:
			return 1f;
		case 12:
			return 1097859072 /* Float: 15f */;
		case 13:
			return 5f;
		case 14:
			return 1f;
		case 15:
			return 5f;
		case 16:
			return 1097859072 /* Float: 15f */;
		case 17:
			return 1f;
		case 18:
			return 5f;
		case 19:
			return 1097859072 /* Float: 15f */;
		case 20:
			return 1f;
	}
	return 0f;
}

bool func_641(int iParam0, int iParam1)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;

	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = func_220(iParam1);
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var1, iParam0, iVar0, 0))
	{
		return false;
	}
	iVar5 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
	{
		return false;
	}
	return true;
}

bool func_642()
{
	return Global_38.f_289.f_3250;
}

void func_643(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
	iVar1 = func_103(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iVar1 >= iVar2)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = (Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 + fParam1);
	iVar3 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar3) || PED::IS_PED_INJURED(iVar3))
	{
		return;
	}
	func_531(iVar3, BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1));
	iVar4 = func_331(iVar3);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = iVar4;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar3, iVar4);
	func_585(iVar4);
	if (iVar4 > iVar1)
	{
		func_823(iParam0, iVar4);
		if (iParam0 == 6)
		{
			if (iVar4 == 1)
			{
				if (func_121(41))
				{
					func_228(19, 1);
				}
				else
				{
					func_228(20, 1);
				}
			}
		}
		if (iVar4 == 2)
		{
			func_228(21, 1);
		}
		else if (iVar4 == 3)
		{
			func_228(22, 1);
		}
		else if (iVar4 == 4)
		{
			func_228(23, 1);
		}
		if (iVar4 >= 2)
		{
			iVar5 = func_809(iVar3);
			iVar6 = func_824();
			func_825(iVar6, iVar5);
			iVar7 = func_826(iVar3);
			iVar8 = func_827();
			func_825(iVar8, iVar7);
		}
		COMPENDIUM::COMPENDIUM_HORSE_BONDING(iVar3, iVar4);
		func_706(func_705(2.788841E-26f), 1);
		if (iVar4 == iVar2)
		{
			func_706(func_705(-7.727703E-38f), 1);
		}
		func_828(0, -1);
	}
}

void func_644(int iParam0, int iParam1, float fParam2)
{
	if (iParam1 == -1)
	{
		return;
	}
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_2[iParam1] = fParam2;
}

void func_645(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1 = fParam1;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = BUILTIN::FLOOR(Global_38.f_289.f_1[iParam0 /*460*/].f_398.f_1);
	func_531(iVar0, iVar1);
	iVar2 = func_331(iVar0);
	Global_38.f_289.f_1[iParam0 /*460*/].f_398 = iVar2;
	PED::_SET_MOUNT_BONDING_LEVEL(iVar0, iVar2);
	func_585(iVar2);
}

void func_646(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, true);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, false);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, true);
	}
}

void func_647(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1956862.f_5.f_7))
	{
		return;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1956862.f_5.f_7) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1956862.f_5.f_7, iParam0);
		if (iVar0 == Global_1956862.f_5.f_14[iParam0 /*102*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_7, iParam0, "pause_info_panel_list", Global_1956862.f_5.f_14[iParam0 /*102*/]);
}

void func_648(bool bParam0)
{
	float fVar0;

	fVar0 = 1.203047E-24f;
	if (bParam0)
	{
		HUD::_ENABLE_HUD_CONTEXT(fVar0);
	}
	else
	{
		HUD::_DISABLE_HUD_CONTEXT(fVar0);
	}
}

void func_649(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

void func_650(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, true);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, true);
	}
	else
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 0, false);
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(iVar1, iVar0, 1, false);
	}
}

int func_651(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = fParam2;
	Var13.f_5 = fParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam9, bParam10);
	return iVar21;
}

bool func_652(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_520(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_829(bParam0, iParam1, iParam2);
	}
	Var1 = { func_605(bParam0, 0, 1) };
	Var6 = { func_262(bParam0, Var1, Var1.f_4, 0) };
	return func_266(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

int func_653(int iParam0)
{
	return 0;
}

int func_654(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_518(bParam2), iParam0, iParam1);
}

bool func_655(int iParam0, int iParam1)
{
	int iVar0;
	struct<10> Var1;
	struct<4> Var15;

	if (!func_400(iParam0))
	{
		return false;
	}
	iVar0 = func_653(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1.f_9 = -5.45926E-19f;
	Var15 = { func_261(0) };
	if (!func_830(Var15, iVar0, &Var1, 0, 0))
	{
		return false;
	}
	if (!func_831(&Var1, iParam1))
	{
		return false;
	}
	return true;
}

bool func_656(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_832(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_524(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_522(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_2() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_730(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_833(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_518(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_657(bool bParam0)
{
	return func_602(bParam0) == -6.742753E-26f;
}

bool func_658()
{
	int iVar0;

	iVar0 = func_659();
	if (MAP::DOES_BLIP_EXIST(iVar0))
	{
		return true;
	}
	return false;
}

int func_659()
{
	return Global_1902883.f_379.f_1;
}

void func_660(int iParam0)
{
	Global_1902883.f_379.f_1 = iParam0;
}

bool func_661(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_263(bParam0, 0))
	{
		return func_834(func_594(bParam0), bParam1, bParam2);
	}
	if (func_835(bParam0) || func_372(bParam0, 2.791187f))
	{
		return func_837(func_836(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_2() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_838(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return false;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return true;
		}
		iVar12++;
	}
	return false;
}

bool func_662(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_663(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

int func_664(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 < 180))
	{
		return -1;
	}
	switch (iParam0)
	{
		case 133:
			return 27;
		case 153:
			return 28;
		case 154:
			return 29;
		case 26:
			return 14;
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
		case 140:
		case 141:
		case 142:
		case 143:
		case 144:
		case 145:
		case 146:
		case 147:
			return 38;
		case 134:
			return 37;
		case 3:
		case 4:
		case 40:
		case 63:
		case 76:
		case 148:
			return 15;
		case 64:
		case 65:
		case 66:
		case 67:
			return 16;
		case 120:
		case 122:
		case 124:
		case 126:
		case 127:
		case 129:
			return 25;
		case 45:
		case 83:
		case 155:
		case 159:
		case 164:
		case 168:
		case 172:
			return 0;
		case 6:
		case 23:
		case 33:
		case 48:
		case 69:
		case 84:
		case 99:
		case 102:
		case 108:
		case 156:
		case 160:
		case 165:
		case 169:
		case 173:
			return 3;
		case 0:
		case 7:
		case 34:
		case 49:
		case 85:
		case 103:
		case 157:
		case 161:
		case 166:
		case 170:
		case 174:
			return 6;
		case 19:
		case 53:
			return 7;
		case 22:
		case 31:
		case 46:
		case 93:
		case 116:
		case 130:
			return 4;
		case 20:
			return 33;
		case 21:
		case 32:
		case 47:
		case 92:
		case 115:
		case 131:
			return 33;
		case 9:
		case 30:
		case 44:
		case 68:
		case 82:
		case 104:
			return 10;
		case 1:
		case 14:
		case 24:
		case 27:
		case 35:
		case 51:
		case 74:
		case 87:
		case 98:
		case 101:
		case 111:
		case 117:
			return 2;
		case 2:
		case 15:
		case 25:
		case 28:
		case 39:
		case 52:
		case 88:
		case 97:
		case 100:
		case 112:
		case 118:
			return 1;
		case 8:
		case 43:
		case 78:
			return 8;
		case 13:
		case 41:
		case 50:
		case 71:
		case 86:
		case 96:
		case 107:
			return 9;
		case 121:
		case 123:
		case 125:
		case 128:
			return 26;
		case 163:
			return 5;
		case 5:
		case 29:
		case 42:
		case 77:
			return 12;
		case 10:
		case 36:
		case 54:
		case 56:
		case 75:
		case 79:
		case 81:
		case 91:
		case 94:
		case 105:
		case 110:
			return 30;
		case 11:
		case 37:
		case 55:
		case 57:
		case 80:
		case 95:
		case 106:
			return 31;
		case 16:
		case 17:
		case 18:
		case 38:
		case 58:
		case 59:
		case 72:
		case 73:
		case 132:
			return 32;
		case 70:
		case 90:
			return 17;
		case 119:
			return 11;
		case 176:
			return 19;
		case 177:
			return 20;
		case 178:
			return 21;
		case 12:
		case 60:
			return 18;
		case 152:
			return 34;
		case 158:
		case 162:
		case 167:
		case 171:
		case 175:
			return 23;
		case 179:
			return 20;
		case 109:
		case 113:
		case 114:
			return 35;
		case 61:
		case 62:
		case 89:
			return 36;
		case 149:
		case 150:
		case 151:
			return 39;
		default:
			break;
	}
	return -1;
}

bool func_665(int iParam0)
{
	return !func_839(iParam0, 1);
}

int func_666(int iParam0)
{
	if (!func_450(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_586() == 139)
	{
		return 139;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 129:
			return 83;
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
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
		case 122:
		case 123:
			return 40;
		case 21:
		case 22:
		case 23:
		case 24:
		case 25:
		case 140:
			return 74;
		case 26:
			return 3;
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
		case 53:
		case 54:
		case 55:
		case 56:
		case 57:
		case 58:
		case 59:
		case 60:
		case 61:
		case 62:
		case 63:
		case 124:
		case 125:
			return 5;
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 126:
			return 111;
		case 27:
		case 28:
			return 23;
		case 41:
			return 107;
		case 68:
		case 69:
		case 70:
		case 71:
		case 72:
		case 73:
		case 74:
		case 75:
		case 127:
			return 26;
		case 77:
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 83:
		case 84:
		case 85:
		case 86:
		case 87:
		case 88:
		case 89:
		case 90:
		case 91:
		case 120:
		case 121:
			return 81;
		case 92:
		case 93:
		case 94:
		case 95:
		case 96:
		case 97:
		case 98:
		case 128:
			return 98;
		case 3:
			return 13;
		case 155:
		case 156:
		case 157:
		case 158:
			return 84;
		case 159:
		case 160:
		case 161:
		case 162:
		case 163:
			return 104;
		case 4:
			return 14;
		case 164:
		case 165:
		case 166:
		case 167:
			return 76;
		case 168:
		case 169:
		case 170:
		case 171:
			return 4;
		case 40:
			return 95;
		case 172:
		case 173:
		case 174:
		case 175:
			return 9;
		case 76:
			return 119;
		case 99:
		case 100:
		case 101:
			return 28;
		case 102:
		case 103:
		case 104:
		case 105:
		case 106:
		case 107:
			return 121;
		case 108:
		case 109:
		case 110:
		case 111:
		case 112:
			return 127;
		case 115:
		case 116:
			return 130;
		case 117:
		case 118:
			return 123;
		case 132:
			return 87;
		case 130:
		case 131:
			return 136;
		case 64:
			return 76;
		case 65:
			return 104;
		case 66:
			return 9;
		case 67:
			return 84;
		case 113:
			return 96;
		case 114:
			return 29;
		case 135:
			return 126;
		case 136:
			return 133;
		case 137:
			return 137;
		case 138:
			return 39;
		case 139:
			return 16;
		case 141:
			return 76;
		case 142:
			return 61;
		case 143:
			return 100;
		case 144:
			return 34;
		case 145:
			return 43;
		case 146:
			return 85;
		case 149:
			return 138;
		case 150:
			return 25;
		case 151:
			return 3;
		case 148:
			return 134;
		case 20:
			return -1;
		case 134:
			return -1;
		default:
			break;
	}
	return -1;
}

bool func_667(int iParam0)
{
	if (!(iParam0 >= 0 && iParam0 <= 150))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_8130[iParam0 /*11*/] & 32 != 0;
	}
	return Global_1072759.f_19611[iParam0 /*11*/] & 32 != 0;
}

bool func_668(int iParam0)
{
	if (!func_840(iParam0))
	{
		return false;
	}
	return func_841(iParam0, 9.403955E-38f);
}

float func_669(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_670()
{
	Global_1902883.f_429.f_13 = 0;
}

var func_671()
{
	return Global_1902883.f_429.f_13;
}

void func_672(int iParam0)
{
	Global_1902883.f_429.f_13 = iParam0;
}

bool func_673(int iParam0, bool bParam1, int iParam2)
{
	if (!func_263(bParam1, 0))
	{
		return false;
	}
	return func_477(iParam0, bParam1) >= iParam2;
}

bool func_674(int iParam0, bool bParam1, int iParam2, int iParam3, var uParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_263(bParam1, 0))
	{
		return false;
	}
	if (iParam2 < 1)
	{
		return false;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, bParam1, Var0, Var0.f_4) };
	return func_842(iParam0, bParam1, &Var5, iParam2, iParam3, uParam4);
}

struct<4> func_675(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_478(iParam0) };
	return func_479(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_676(int iParam0, var uParam1)
{
	if (!func_843(iParam0))
	{
		return false;
	}
	*uParam1 = Global_1915593[iParam0];
	if (*uParam1 == 0)
	{
		return false;
	}
	return true;
}

int func_677(int iParam0)
{
	if (func_2() != -1)
	{
		if (Global_1072759.f_12)
		{
			if (iParam0 == 3)
			{
				return -57.16793f;
			}
		}
	}
	return func_844(iParam0);
}

bool func_678(int iParam0)
{
	if (func_662(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_679(int iParam0)
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

bool func_680()
{
	if (!func_845())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_681()
{
	return Global_1904398.f_8863 != -1;
}

bool func_682()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_683(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_684()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

bool func_685()
{
	return Global_1896762.f_352;
}

bool func_686()
{
	var uVar0;

	if (!func_845())
	{
		return false;
	}
	uVar0 = Global_1904398.f_8865;
	Global_1904398.f_8865 = 0;
	return uVar0;
}

bool func_687(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_846(iParam1) || !func_846(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

int func_688(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_689(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_847(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_690(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_691(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_692(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_693(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_694(int iParam0, int iParam1)
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

float func_695(float fParam0, float fParam1, float fParam2)
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

bool func_696(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_683(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_848())
	{
		return func_683(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_683(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_697(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_698(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/] = iParam2;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_497(iVar0, iParam1, func_439(iParam0, iParam1));
	func_849(iVar0, iParam1);
}

void func_699(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_385(fParam2, 0f, 1315859240);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_2 = fParam2;
}

bool func_700(int iParam0, int iParam1)
{
	int iVar0;

	if (func_494(iParam1, &iVar0))
	{
		if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iParam0, iVar0))
		{
			return true;
		}
	}
	return false;
}

float func_701(int iParam0, int iParam1)
{
	float fVar0;
	float fVar1;

	fVar0 = 0f;
	if (iParam1 == 0)
	{
		if (func_406(iParam0, 0) > 50)
		{
			fVar0 = (fVar0 + 1048576000);
		}
	}
	if (func_599(-1.596034E+32f, 1))
	{
		fVar0 = (fVar0 - -1110651699);
	}
	if (func_164() == 0 && func_154() == iParam0)
	{
		fVar1 = func_850(iParam1);
		fVar0 = (fVar0 - fVar1);
	}
	return fVar0;
}

float func_702(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_1;
}

void func_703(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_385(fParam2, -1f, 1f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_422[iParam1 /*4*/].f_1 = fParam2;
}

void func_704(int iParam0)
{
	Global_1902883.f_429.f_8 = iParam0;
}

struct<2> func_705(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_706(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_707(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iParam2 = func_384(iParam2, 0, 100);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/] = iParam2;
	iVar0 = func_78(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	func_387(iVar0, iParam1, iParam2);
}

void func_708(int iParam0, int iParam1, float fParam2)
{
	fParam2 = func_385(fParam2, 0f, 1315859240);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_2 = fParam2;
}

bool func_709(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (PED::IS_PED_USING_SCENARIO_HASH(iParam0, 6.01361E-14f) || PED::IS_PED_USING_SCENARIO_HASH(iParam0, 7.86435E-32f))
	{
		return true;
	}
	return false;
}

float func_710(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1;
}

void func_711(int iParam0, int iParam1, float fParam2)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	fParam2 = func_385(fParam2, -1f, 1f);
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1 = fParam2;
}

void func_712(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_431[iParam1 /*4*/].f_1 = 0f;
}

int func_713(int iParam0)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1902883[iParam0 /*43*/].f_1;
}

void func_714(int iParam0)
{
	Global_1902883.f_429.f_6 = iParam0;
}

bool func_715(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_716(bool bParam0)
{
	if (!func_263(*bParam0, 0))
	{
		return 0;
	}
	if (!func_851(*bParam0))
	{
		return 0;
	}
	switch (*bParam0)
	{
		case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
			*bParam0 = -7.975852E-25f;
			break;
		case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
			*bParam0 = -1.072744E-16f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			*bParam0 = -1.6957E+27f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_717(bool bParam0)
{
	return func_602(bParam0) == -3.265313E+23f;
}

struct<4> func_718(bool bParam0)
{
	int iVar0;

	iVar0 = func_518(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_262(8.681942E-06f, func_261(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_262(8.681942E-06f, func_261(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_262(8.681942E-06f, func_261(bParam0), -1.942248E+12f, 0);
}

bool func_719(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_264(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_720(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_852(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

int func_721(bool bParam0, bool bParam1)
{
	if (func_768(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_853();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

int func_722(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_263(bParam0, 0))
	{
		if (func_715(func_594(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_602(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_520(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_518(bParam3), bParam0);
}

struct<29> func_723(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_729(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_724(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_854(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_856(func_855(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_725(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_729(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_726(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_856(func_858(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_727(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_729(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_728(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_854(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_856(func_859(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_729(var uParam0, bool bParam1)
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
		Var0.f_15 = func_520(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_519() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_730(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_854(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_856(func_860(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_857(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_731(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_732(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_733(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	bVar1 = func_221(iParam1);
	iVar2 = func_861(iVar0, bVar1, 1);
	return iVar2;
}

int func_734(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_862(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_735(int iParam0)
{
	return iParam0;
}

int func_736(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_863(&uParam0, iParam4, bParam5, iParam6);
}

bool func_737(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_768(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_864(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &uVar1))
				{
					iVar4 = uVar1;
					if (iVar4 == iParam1)
					{
						return true;
					}
				}
				iVar0++;
			}
		}
	}
	return false;
}

void func_738(int iParam0, int iParam1)
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
	PED::_APPLY_SHOP_ITEM_TO_PED(iParam0, iVar0, false, func_2() == 0, false);
}

void func_739(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = { 0f, 0f, 0f };
	uParam0->f_6 = { 0f, 0f, 0f };
}

float func_740(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

int func_741(var uParam0)
{
	return *uParam0;
}

void func_742(var uParam0, vector3 vParam1)
{
	uParam0->f_3.f_3 = { vParam1 };
}

void func_743(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_744(vector3 vParam0, vector3 vParam3, bool bParam6, bool bParam7)
{
	bool bVar0;
	var uVar1;
	float fVar2;

	bVar0 = CAM::IS_SPHERE_VISIBLE(vParam0, 5f);
	if (bParam6)
	{
		if (func_865(vParam0 + Vector(1045220557, 0f, 0f)))
		{
			return false;
		}
	}
	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(vParam0 + Vector(1f, 0f, 0f), &uVar1, false))
	{
		return false;
	}
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam0, 7f))
	{
		return false;
	}
	if (bVar0)
	{
	}
	else
	{
		if (bParam7)
		{
			if (vParam0.z > (vParam3.z + 1092616192))
			{
				return false;
			}
		}
		fVar2 = BUILTIN::VDIST(vParam0, vParam3);
		if (fVar2 > 1109393408 && fVar2 < 1117782016)
		{
			return true;
		}
	}
	return false;
}

bool func_745(vector3 vParam0, int iParam3, bool bParam4, int iParam5, bool bParam6, float fParam7, int iParam8, int iParam9, int iParam10, float fParam11)
{
	int iVar0;

	switch (*iParam3)
	{
		case 0:
			if (iParam3->f_2 > 4)
			{
				*bParam4 = 1;
				return false;
			}
			iParam3->f_1 = TASK::_0x74F0209674864CBD();
			func_866(&(iParam3->f_1), iParam3->f_2, vParam0, iParam5, fParam7, iParam8, iParam9, iParam10, fParam11);
			if (!TASK::_0x1AC5A8AB50CFAA33(iParam3->f_1))
			{
			}
			else
			{
				func_867(&(iParam3->f_1), iParam5, vParam0);
				if (!func_192(iParam3->f_6))
				{
					TASK::_0xCE4E669400E5F8AA(iParam3->f_1, func_868(iParam3->f_6));
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
						*bParam4 = 1;
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

bool func_746(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_747(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	vector3 vVar4;

	if (func_869(*uParam0, 0f, 0f, 0f))
	{
		return 1;
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
		return 1;
	}
	if (bVar2 && bVar3)
	{
		return 0;
	}
	uParam0->f_2 = uVar0;
	return 1;
}

bool func_748(int iParam0, var uParam1)
{
	return AUDIO::PLAY_PED_AMBIENT_SPEECH_NATIVE(iParam0, uParam1);
}

void func_749(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_1902883[iParam0 /*43*/].f_23 = (Global_1902883[iParam0 /*43*/].f_23 || iParam1);
}

bool func_750(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10)
{
	struct<12> Var0;
	struct<4> Var14;

	if (!func_522(bParam10))
	{
		return func_870(Param0, Param4, iParam8, 1, bParam9, 1, -1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_524(Param0, &Var0, 0, 0, -1))
	{
		return false;
	}
	if (func_871(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_MOVE_INVENTORY_ITEM(func_518(0), &Param0, &Param4, iParam8, Var0.f_11, &Var14))
	{
		return false;
	}
	if (bParam9)
	{
		if (!func_267(Var14, 1, 0))
		{
		}
	}
	return true;
}

bool func_751(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	int iVar28;

	if (!func_522(bParam9))
	{
		return func_872(Param0, Param4, iParam8, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return false;
	}
	if (func_871(&Param0, &Param4))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	Var14.f_9 = -5.45926E-19f;
	if (!func_524(Param0, &Var0, 1, 0, -1) || !func_524(Param4, &Var14, 1, 0, -1))
	{
		return false;
	}
	if (func_871(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return false;
	}
	iVar28 = func_518(0);
	if (!INVENTORY::_INVENTORY_SWAP_INVENTORY_ITEM(iVar28, &Param0, &Param4))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &Param0, (Var14.f_10 || iParam8)))
	{
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(iVar28, &Param4, (Var0.f_10 || iParam8)))
	{
	}
	return true;
}

int func_752(int iParam0)
{
	if (iParam0 == 6.51589E-10f)
	{
		return -5.867486E+25f;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return -7671.036f;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return 1.565249E+13f;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return 1.206894E-35f;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -4.349822E+08f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 1.019417E+11f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -1.24796E+12f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 3.947066E+18f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return -5.675616E+10f;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -2.501807E-09f;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return 8.144612E-13f;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return 19.44001f;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return -7.905541E-26f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -0.0002948103f;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return -2.676207E+32f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -2.358058E-07f;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return -1.792899E-36f;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -1.835706E+08f;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -9.721153E+35f;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return 7.125971E+26f;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return 6.323706E-09f;
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return 2.070833E-33f;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return -5.617021E-07f;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 6.362973E+37f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -4.733491E-17f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return 3.068005E+13f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return 6.286798E-14f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 7.639143E-29f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return 2.131064E+28f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -2.811856E-11f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return -4.518364E-32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 4.596671E+10f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return 4.427686E+32f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 2.149006E-19f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return 3.583278E+07f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return 3.672272E+36f;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return 1317401f;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return 6.706112E-07f;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 522994.2f;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return 1.139994E-15f;
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return -3.391958E-19f;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return 3.746556E+33f;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return -3.879503E-13f;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return 7.807593E-33f;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return -1.605381E+12f;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return -2.190123E-23f;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return -1.420053E+35f;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return -1.301456E-33f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return 4.656437E+23f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return 2.152173E-30f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 1.354223E-34f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return -5.083863E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return -1.021829E+07f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return -2.609989E+08f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 6.879982E+24f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return -4.6141E+09f;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return -4.526459E-30f;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 2.370827E+22f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return -3.511005E-07f;
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 8.750258E+33f;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return -9.142146E+33f;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -5.966001E+30f;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return -2.014525E-29f;
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return -4.513147E+11f;
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return 2.120006E+30f;
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return 8.596086E+18f;
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return 0.00097687f;
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return 0.9606787f;
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return -6.984672E-11f;
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return 2.300937E+18f;
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return 3.055963E-25f;
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return joaat("BREED_CRIOLLO_BAYBRINDLE");
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return -1.131241E-23f;
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return -1.13357E+32f;
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return 5.734728E-08f;
		case -390136947:
			return -49526.15f;
		case 1104566530:
			return -1.164754E+26f;
		case -1142861801:
			return -1.076792E-24f;
		case -417416199:
			return -1.229762E+29f;
		case -1460773772:
			return 1.797443E+31f;
		case 1476007840:
			return -5.376032E-30f;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return 3.738345E-07f;
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return -3.817251E-17f;
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return -1.856765E+17f;
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return -3.577101E+25f;
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return -8.213095E-23f;
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return -6.157964E+14f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return -9.863372E+27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return 8053409f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return 1.824036E-09f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return -1.819399E+11f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -2.392047E-27f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return 6.890993E+18f;
		case 1387035765:
			return 1.908594E+09f;
		case 506531963:
			return -0.001692632f;
		case 2038357529:
			return 2.163332E+28f;
		case 1599848740:
			return 4.000557E+12f;
		case 1887211198:
			return 3.11928E-18f;
		case 1645353708:
			return 907.9868f;
		case 1154747978:
			return -2.484812E-23f;
		case 74569170:
			return 2.332845E-24f;
		case -2004712574:
			return 0.0001293215f;
		case 699227695:
			return 6.169305E-34f;
		case 1514230770:
			return -2.827861E+38f;
		case 704938950:
			return 290.1437f;
		case joaat("A_C_DONKEY_01"):
			return -1.217579E-09f;
		case joaat("A_C_HORSEMULE_01"):
			return 1.537994E-34f;
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return -6.569504E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return -1.304779E-31f;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -1.146618E+16f;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return -4.191203E-13f;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return -1.171704E-35f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -2.655684E-08f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -0.0003522342f;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return 4.778737E-10f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return -2.409371E+30f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return NaNf;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -5870.035f;
		default:
			break;
	}
	return 0;
}

int func_753(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = 1;
	fVar1 = PED::_GET_CHAR_EXPRESSION(iParam0, 41611);
	if (fVar1 == 1f)
	{
		iVar0 = 2;
	}
	return iVar0;
}

void func_754(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_9 = iParam1;
}

void func_755(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_8 = iParam1;
}

void func_756(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_10 = iParam1;
}

void func_757(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_12 = iParam1;
}

void func_758(int iParam0, int iParam1)
{
	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	Global_38.f_289.f_1[iParam0 /*460*/].f_13 = iParam1;
}

float func_759()
{
	return -5.867486E+25f;
}

float func_760()
{
	return 6.51589E-10f;
}

int func_761()
{
	return 1;
}

void func_762(int iParam0)
{
	Global_38.f_289.f_3245 = iParam0;
}

void func_763(bool bParam0, var uParam1, var uParam2)
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

bool func_764()
{
	return !Global_1913431;
}

void func_765(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == bParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
		{
			Global_1913431.f_4[iVar0 /*6*/].f_1 = (Global_1913431.f_4[iVar0 /*6*/].f_1 + iParam1);
			return;
		}
		iVar0++;
	}
	if (Global_1913431.f_3 < 19)
	{
		Global_1913431.f_4[Global_1913431.f_3 /*6*/] = bParam0;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_1 = iParam1;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_2 = bParam2;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = bParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_766(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_767(bool bParam0, int iParam1)
{
	if (!func_263(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

int func_768(bool bParam0)
{
	struct<2> Var0;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_769(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/].f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/]);
				iVar2 = MISC::GET_HASH_KEY(Var3.f_2[iVar0 /*3*/].f_1);
				if (iParam2 != 0 && Var3.f_2[iVar0 /*3*/].f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_770(bool bParam0)
{
	if (func_372(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_372(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_372(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_372(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_372(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_372(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_372(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_372(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_372(bParam0, -1.58908E+26f) || func_372(bParam0, -3.503386E-34f)) || func_372(bParam0, -1.887503E+19f)) || func_372(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_771(bool bParam0)
{
	if (func_372(bParam0, -1.15596E+32f))
	{
		if (((func_873(bParam0, -9.979451E-09f) || func_873(bParam0, 2.758862E+11f)) || func_873(bParam0, 1.868312E+36f)) || func_873(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_372(bParam0, -6.231785E+11f) || func_372(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_772(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_874(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_773(int iParam0)
{
	switch (iParam0)
	{
		case -1696039442:
		case 688466329:
		case 759802290:
			return false;
		default:
			break;
	}
	return true;
}

int func_774(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		iVar35 = 0;
		while (iVar35 < 8)
		{
			if (Var0.f_18[iVar35 /*2*/].f_1 == 14460646)
			{
				if (Var0.f_18[iVar35 /*2*/] != 0)
				{
					return Var0.f_18[iVar35 /*2*/];
				}
			}
			iVar35++;
		}
	}
	return 0;
}

bool func_775(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_875(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_876(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_877(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_878(bVar14))
			{
				func_879(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_879(iVar11);
	}
	return false;
}

bool func_776(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 == 0)
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, -60352.49f))
	{
		return true;
	}
	return false;
}

int func_777(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_263(bParam0, 0) && !func_715(func_594(bParam0), 2))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return 1;
}

int func_778(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_880(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_779(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_881(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_882(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_883(bParam0), 128);
	if (MISC::IS_STRING_NULL_OR_EMPTY(&cVar1))
	{
		return false;
	}
	StringConCat(&cVar1, " - ", 128);
	iVar0 = (iVar0 + HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
	StringConCat(&cVar1, sParam1, 128);
	if (iVar0 >= 127)
	{
		return false;
	}
	*sParam1 = { cVar1 };
	return true;
}

char* func_780(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_781(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_697(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_782(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_597(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_816("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_790(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_884(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_791(iVar1);
				return true;
			}
			iVar3++;
		}
		func_791(iVar1);
	}
	return false;
}

bool func_783(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_263(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_768(bParam0);
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
	iVar1 = func_885(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_886(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_887(bParam0);
	iVar2 = func_886(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

struct<2> func_784(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_785(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_787(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_788(&Var0, func_718(0));
	}
	if (!func_789(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_791(iVar18);
	return iVar19;
}

struct<4> func_786(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_605(bParam0, bParam1, 0) };
	return func_262(bParam0, Var0, Var0.f_4, bParam1);
}

struct<18> func_787(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_788(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_789(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_518(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_790(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_791(int iParam0)
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

int func_792(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_832(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_520(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_522(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_888(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_889(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_730(7.184882E+22f, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var82.f_7 = -5.149929E+33f;
			Var82.f_16 = -1;
			Var82 = bParam3;
			Var82.f_7 = iParam2;
			func_833(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_518(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_793(bool bParam0)
{
	int iVar0;

	iVar0 = func_518(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_262(3.507197E-29f, func_261(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_262(3.507197E-29f, func_261(bParam0), 12999093, 0);
}

bool func_794(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_768(bParam0);
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
			if (func_890(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_795()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_892(func_891(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_893(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_796(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_797(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

void func_798(int iParam0, bool bParam1)
{
	struct<4> Var0;
	struct<2> Var4;
	struct<6> Var26;
	float fVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	var uVar37;
	int iVar38;
	float fVar39;
	int iVar40;
	float fVar41;

	if (!func_263(bParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) == iParam0)
	{
		Var0 = { func_380(0, 1, 0, -1) };
	}
	Var4.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam1, &Var4);
	iVar35 = 0;
	while (iVar35 < Var4)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var4.f_1[iVar35], &Var26);
		switch (Var26.f_1)
		{
			case 1194731729:
				iVar36 = (100 - func_382(Var0, 1));
				if (iVar36 > 50)
				{
					uVar37 = Var26.f_2;
					func_894(iParam0, Var0, 2, uVar37);
				}
				break;
			case 978049229:
				func_895(iParam0, Var26.f_5);
				break;
			case -1918697215:
				iVar38 = func_496(iParam0, 0);
				fVar39 = Var26.f_5;
				func_497(iParam0, 0, (iVar38 + BUILTIN::CEIL(fVar39)));
				func_894(iParam0, Var0, 1, BUILTIN::FLOOR(-fVar39));
				break;
			case 1136630075:
				fVar33 = func_896(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				if (func_897(0, &iVar34))
				{
					if (func_898(iParam0, iVar34, fVar33, 0))
					{
						func_849(iParam0, 0);
					}
				}
				break;
			case -778289619:
				fVar33 = func_896(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				if (func_494(0, &iVar34))
				{
					if (func_898(iParam0, iVar34, fVar33, 0))
					{
						func_849(iParam0, 0);
					}
				}
				break;
			case -1946606248:
				func_899(iParam0, Var26.f_5);
				break;
			case 855745648:
				iVar40 = func_496(iParam0, 1);
				fVar41 = Var26.f_5;
				func_497(iParam0, 1, (iVar40 + BUILTIN::CEIL(fVar41)));
				break;
			case 1365603835:
				fVar33 = func_896(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				if (func_897(1, &iVar34))
				{
					if (func_898(iParam0, iVar34, fVar33, 0))
					{
						func_849(iParam0, 1);
					}
				}
				break;
			case 1497139093:
				fVar33 = func_896(BUILTIN::TO_FLOAT(Var26.f_3), Var26.f_4);
				if (func_494(1, &iVar34))
				{
					if (func_898(iParam0, iVar34, fVar33, 0))
					{
						func_849(iParam0, 1);
					}
				}
				break;
		}
		iVar35++;
	}
}

bool func_799(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_PEPPERMINT"):
		case joaat("CONSUMABLE_SUGARCUBE"):
			return true;
	}
	return false;
}

int func_800(int iParam0)
{
	return 20;
}

void func_801(var uParam0, int iParam1, float fParam2, var uParam3, int iParam4, float fParam5)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam0))
	{
		return;
	}
	fParam5 = func_385(fParam5, 0f, 1315859240);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar0 /*56*/]), &uParam0))
		{
			Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/].f_2 = fParam5;
			return;
		}
		iVar0++;
	}
	if (!func_634(&uParam0))
	{
		return;
	}
	Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_40[iParam4 /*4*/].f_2 = fParam5;
}

void func_802(int iParam0, int iParam1, int iParam2, float fParam3)
{
	float fVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (func_331(iParam0) >= 4)
	{
		return;
	}
	if (func_900(iParam1, iParam2))
	{
		return;
	}
	if (func_901(iParam0, iParam2))
	{
		return;
	}
	if (fParam3 <= 0f)
	{
		bVar1 = func_902(iParam1, iParam2) == 0f;
		fVar0 = func_903(iParam2, bVar1);
	}
	else
	{
		fVar0 = fParam3;
	}
	if (fVar0 == 0f)
	{
		return;
	}
	fVar2 = (fVar0 * Global_1156096.f_2169[61 /*205*/].f_201);
	fVar0 = (fVar0 + fVar2);
	fVar3 = func_904(fVar0);
	Global_1290256.f_1608.f_3 = (Global_1290256.f_1608.f_3 + fVar3);
	fVar0 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fVar0));
	if (Global_1290256.f_1608.f_3 >= 1f)
	{
		fVar4 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(Global_1290256.f_1608.f_3));
		Global_1290256.f_1608.f_3 = (Global_1290256.f_1608.f_3 - fVar4);
		fVar0 = (fVar0 + fVar4);
	}
	switch (iParam2)
	{
		case 0:
			if (func_641(iParam0, 0))
			{
				fVar0 = (fVar0 * 1056964608);
			}
			Global_1290256.f_1608.f_11 = (Global_1290256.f_1608.f_11 + fVar0);
			break;
		case 1:
		case 2:
			Global_1290256.f_1608.f_11 = (Global_1290256.f_1608.f_11 + fVar0);
			break;
		case 3:
			Global_1290256.f_1608.f_13 = (Global_1290256.f_1608.f_13 + fVar0);
			break;
		default:
			func_905(iParam2, fVar0);
			break;
	}
	func_906(iParam0, fVar0);
	func_907(iParam1, iParam2, fVar0);
	Global_1290256.f_1608.f_2 = (Global_1290256.f_1608.f_2 + fVar0);
}

void func_803(int iParam0, bool bParam1, bool bParam2)
{
	struct<7> Var0;
	var uVar7;
	int iVar8;

	if (func_2() != 0)
	{
		return;
	}
	if (func_908())
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
	if (func_909(iParam0, 1) < 0)
	{
		return;
	}
	if (func_909(iParam0, 1) >= 106)
	{
		return;
	}
	if (!bParam1)
	{
		if (!Global_1149417.f_3876.f_2[func_909(iParam0, 1) /*4*/])
		{
			return;
		}
	}
	Global_1149417.f_3876.f_2[func_909(iParam0, 1) /*4*/].f_2++;
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
	func_910(&Var0, uVar7);
}

void func_804(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = PED::_GET_IS_PED_MOTIVATION_STATE_ENABLED(iParam0, 3);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, true);
	}
	func_911(iParam0, 0f, 0);
	if (!bVar0)
	{
		PED::_SET_PED_MOTIVATION_STATE_OVERRIDE(iParam0, 3, false);
	}
}

void func_805(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	struct<6> Var24;
	var uVar31;
	float fVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	float fVar39;
	float fVar40;

	if (!func_361(bParam1))
	{
		return;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam1, 0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	bVar0 = false;
	if (func_318(iParam0))
	{
		iVar1 = func_333(iParam0);
		bVar0 = true;
	}
	Var2.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam1, &Var2);
	iVar33 = 0;
	while (iVar33 < Var2)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var2.f_1[iVar33], &Var24);
		switch (Var24.f_1)
		{
			case 1194731729:
				iVar34 = Var24.f_2;
				fVar35 = -Var24.f_5;
				if (bVar0 && iVar34 > 0)
				{
					iVar36 = func_809(iParam0);
					iVar37 = func_800(iVar36);
					func_708(iVar1, 1, BUILTIN::TO_FLOAT(iVar37));
				}
				if (bVar0)
				{
					iVar38 = func_406(iVar1, 1);
				}
				else
				{
					iVar38 = func_286(iParam0, 1);
				}
				if (iVar38 < 50)
				{
					if (bVar0)
					{
						func_912(iVar1, 2, iVar34);
					}
					else
					{
						func_913(iParam0, 2, iVar34);
					}
				}
				if (bVar0)
				{
					func_912(iVar1, 1, BUILTIN::FLOOR(fVar35));
				}
				else
				{
					func_913(iParam0, 1, BUILTIN::FLOOR(fVar35));
				}
				break;
			case 978049229:
				func_895(iParam0, Var24.f_5);
				break;
			case -1918697215:
				if (func_494(0, &uVar31))
				{
					fVar39 = Var24.f_5;
					if (bVar0)
					{
						func_914(iVar1, 0, BUILTIN::FLOOR(fVar39));
					}
					else
					{
						func_915(iParam0, 0, BUILTIN::FLOOR(fVar39));
					}
				}
				break;
			case 1136630075:
				if (func_897(0, &uVar31))
				{
					fVar32 = func_896(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_916(iParam0, 0, fVar32);
				}
				break;
			case -778289619:
				if (func_494(0, &uVar31))
				{
					fVar32 = func_896(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_917(iParam0, 0, fVar32);
				}
				break;
			case -1946606248:
				func_899(iParam0, Var24.f_5);
				break;
			case 855745648:
				if (func_494(1, &uVar31))
				{
					fVar40 = Var24.f_5;
					if (bVar0)
					{
						func_914(iVar1, 1, BUILTIN::FLOOR(fVar40));
					}
					else
					{
						func_915(iParam0, 1, BUILTIN::FLOOR(fVar40));
					}
				}
				break;
			case 1365603835:
				if (func_897(1, &uVar31))
				{
					fVar32 = func_896(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_916(iParam0, 1, fVar32);
				}
				break;
			case 1497139093:
				if (func_494(1, &uVar31))
				{
					fVar32 = func_896(BUILTIN::TO_FLOAT(Var24.f_3), Var24.f_4);
					func_917(iParam0, 1, fVar32);
				}
				break;
		}
		iVar33++;
	}
	func_918(bParam1);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

bool func_806(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return true;
	}
	return false;
}

bool func_807(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return true;
	}
	return false;
}

int func_808(int iParam0)
{
	return 20;
}

int func_809(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_824());
	return iVar0;
}

bool func_810(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_518(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_811(var uParam0, int iParam1)
{
	return func_919(*uParam0, iParam1);
}

int func_812(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*65*/].f_1.f_16.f_2;
	fVar1 = func_920(iVar0);
	iVar2 = func_921(iVar0, fVar1);
	return iVar2;
}

struct<2> func_813()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_814(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return 1;
	}
	if (func_213(Global_1051268) && !func_922(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_923(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_924(iParam3, 255))
	{
		Global_1072759.f_28307 = 4;
		return 1;
	}
	if (Global_263042[Global_1295619 /*65*/] > 2)
	{
		Global_1072759.f_28307 = 5;
		return 1;
	}
	if (Global_262155 >= 1)
	{
		Global_1072759.f_28307 = 6;
		return 1;
	}
	if (func_925())
	{
		Global_1072759.f_28307 = 7;
		return 1;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_213(Global_1051268))
		{
			Global_1072759.f_28307 = 8;
			return 1;
		}
	}
	if (Global_265213.f_122646 != 0 && SCRIPTS::DOES_THREAD_EXIST(Global_265213.f_122646))
	{
		Global_1072759.f_28307 = 9;
		return 1;
	}
	Global_1072759.f_28307 = 0;
	return 0;
}

bool func_815(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_816(char* sParam0, var uParam1, int* iParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_518(bParam4), sParam0, iParam3, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_817(var uParam0, int iParam1)
{
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_752(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { iParam1->f_16 };
	uParam0->f_23 = iParam1->f_25;
	uParam0->f_20 = iParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_818(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_518(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_819(var uParam0, int iParam1)
{
	*uParam0 = { *iParam1 };
	uParam0->f_4 = iParam1->f_4;
	uParam0->f_5 = { iParam1->f_5 };
	uParam0->f_9 = iParam1->f_9;
	uParam0->f_11 = iParam1->f_14;
	if (!STREAMING::IS_MODEL_VALID(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { iParam1->f_15 };
	uParam0->f_20 = iParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

void func_820(var uParam0)
{
	int iVar0;

	*uParam0 = { func_519() };
	iVar0 = 0;
	while (iVar0 < 24)
	{
		uParam0->f_4[iVar0] = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		uParam0->f_29[iVar0 /*5*/] = 100;
		uParam0->f_29[iVar0 /*5*/].f_1 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_29[iVar0 /*5*/].f_3 = 0;
		uParam0->f_29[iVar0 /*5*/].f_4 = 0f;
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 3)
	{
		switch (iVar0)
		{
			case 0:
				uParam0->f_40[iVar0 /*4*/] = 100;
				break;
			case 1:
				uParam0->f_40[iVar0 /*4*/] = 0;
				break;
			case 2:
				uParam0->f_40[iVar0 /*4*/] = 50;
				break;
		}
		uParam0->f_40[iVar0 /*4*/].f_1 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_2 = 0f;
		uParam0->f_40[iVar0 /*4*/].f_3 = 0;
		iVar0++;
	}
	uParam0->f_53 = { 0f, 0f, 0f };
}

void func_821(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_822(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1097859072 /* Float: 15f */;
		case 4:
			return 1315859240;
		case 1:
			return 1315859240;
		case 2:
			return 1315859240;
		case 3:
			return 1315859240;
		case 5:
			return 1120403456 /* Float: 100f */;
		case 6:
			return 1106247680 /* Float: 30f */;
		case 7:
			return 1315859240;
		case 8:
			return 1315859240;
		case 9:
			return 1315859240;
		case 10:
			return 1315859240;
		case 11:
			return 1315859240;
		case 12:
			return 1315859240;
		case 13:
			return 1315859240;
		case 14:
			return 1315859240;
		case 15:
			return 1315859240;
		case 16:
			return 1315859240;
		case 17:
			return 1315859240;
		case 18:
			return 1315859240;
		case 19:
			return 1315859240;
		case 20:
			return 1315859240;
	}
	return 1315859240;
}

void func_823(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iParam0 = func_77(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_158(iParam0);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam1 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam1 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_651(sVar2, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam1), 2.48646E-06f, -21943.96f, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

int func_824()
{
	return 0;
}

void func_825(int iParam0, char* sParam1)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	float fVar3;
	char* sVar4;
	int iVar5;
	char* sVar6;
	char* sVar7;

	sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
	switch (iParam0)
	{
		case 0:
			sVar1 = "RPG_HEALTH";
			break;
		case 1:
			sVar1 = "RPG_STAMINA";
			break;
		default:
			return;
	}
	sVar2 = MISC::VAR_STRING(2, "HORSE_RPG_LEVEL_PROGRESS", sParam1);
	switch (iParam0)
	{
		case 0:
			fVar3 = -0.07032296f;
			break;
		case 1:
			fVar3 = 3.702439E+31f;
			break;
		default:
			return;
	}
	sVar4 = func_927(func_926(sParam1));
	iVar5 = MISC::GET_HASH_KEY(sVar4);
	sVar6 = "";
	sVar7 = "HUD_Toast_Soundset";
	func_651(MISC::VAR_STRING(10, sVar0, sVar1), sVar2, fVar3, iVar5, 8000, sVar7, sVar6, 0, 0, 1, 1);
}

int func_826(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_827());
	return iVar0;
}

int func_827()
{
	return 1;
}

void func_828(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_928(&Global_0, 8);
	}
	if (!func_298() || func_2() != -1)
	{
		return;
	}
	func_928(&Global_0, 1);
}

int func_829(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_520(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_605(bParam0, 0, 0) };
	if (func_521(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_522(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_518(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_830(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_518(bParam7);
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

bool func_831(int iParam0, int iParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_518(0), iParam0, iParam1, 29, 0))
	{
		return false;
	}
	return true;
}

bool func_832(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

void func_833(int iParam0, struct<17> Param1)
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

int func_834(bool bParam0, int iParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_715(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_2() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_929(bParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < iVar11)
	{
		iVar13 = uVar0[iVar12];
		if (iVar13 == 0)
		{
		}
		else if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
		{
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_835(bool bParam0)
{
	if (func_372(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_836(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_263(bParam0, 0))
	{
		return func_930(func_594(bParam0), bParam1);
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

int func_837(bool bParam0, int iParam1)
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
		return 0;
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
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

bool func_838(bool bParam0, bool bParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_263(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_839(int iParam0, int iParam1)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	return (Global_1915643.f_17884[iParam0] && iParam1) != 0;
}

bool func_840(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_841(int iParam0, float fParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && fParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && fParam1) != 0;
}

int func_842(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, var uParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_832(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_931(iParam0, *iParam2, &Var0, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(iParam0, iParam2, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

bool func_843(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 26);
}

int func_844(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -7.83879E-12f;
		case 3:
			return -1.996561E-35f;
		case 4:
			return -1.034436E-20f;
		case 33:
			return -4.355853E+24f;
		case 6:
			return -2.274188E+19f;
		case 7:
			return 1.330783E-35f;
		case 8:
			return -7.352467E-28f;
		case 1:
			return 8.047852E+19f;
		case 2:
			return -2.214302E-37f;
		case 9:
			return -3.189341E-13f;
		case 10:
			return 4.26812E-07f;
		case 11:
			return -2.015563E+30f;
		case 22:
			return -2.413113E-13f;
		case 23:
			return -2.44324E+14f;
		case 24:
			return -3.184599E+13f;
		case 25:
			return -5.431562E+28f;
		case 26:
			return 6.565474E+13f;
		case 5:
			return 2.627254E-25f;
		case 12:
			return 1.467283E+38f;
		case 14:
			return -476905.5f;
		case 30:
			return 3.40434E+30f;
		case 31:
			return -4.535735E-27f;
		case 32:
			return 1.662245E+10f;
		case 15:
			return 3.461916E+13f;
		case 16:
			return -1148.872f;
		case 17:
			return 1.807475E+15f;
		case 27:
			return -2.069838E-38f;
		case 28:
			return -1332.52f;
		case 29:
			return 3.648399E+12f;
		case 34:
			return 1.034395E+13f;
		case 19:
			return -14073.83f;
		case 20:
			return 3.438278E-15f;
		case 21:
			return 2.181652E+24f;
		case 18:
			return -1.058352E+09f;
		case 35:
			return 1.425161E+18f;
		case 36:
			return -5.887391E-33f;
		case 38:
			return -2.30817E+21f;
		case 37:
			return -126.7924f;
		case 39:
			return 1.692289E-25f;
		default:
			break;
	}
	return 0;
}

bool func_845()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_846(int iParam0)
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
	iVar0 = func_693(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_692(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_691(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_689(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_688(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_690(iParam0);
	if (iVar5 < 1 || iVar5 > func_694(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_847(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_848()
{
	return Global_1102813.f_3672;
}

void func_849(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	bool bVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (!func_494(iParam1, &iVar0))
	{
		return;
	}
	sVar1 = func_932(iParam1);
	sVar2 = func_933(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		iVar3 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, sVar1, BUILTIN::TO_FLOAT(iVar3), -1);
		bVar4 = func_934(iParam0, iParam1);
		if (iVar3 <= 20 && !bVar4)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(iParam0, sVar2, true, -1);
		}
		else
		{
			PED::_REMOVE_PED_BLACKBOARD_BOOL(iParam0, sVar2);
		}
	}
}

var func_850(int iParam0)
{
	var uVar0;

	uVar0 = Global_1902883.f_379.f_10[iParam0];
	return uVar0;
}

bool func_851(bool bParam0)
{
	return func_372(bParam0, 5.168749E+07f);
}

bool func_852(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_518(0);
	*iParam1 = { func_262(bParam0, func_718(0), fParam3, 0) };
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

int func_853()
{
	if (func_935(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_854(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_936(iParam1->f_8, iParam0, iVar0, 2048) || func_936(iParam1->f_8, iParam0, iVar0, 32768)) || func_936(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_936(iParam1->f_8, iParam0, iVar0, 4) || func_936(iParam1->f_8, iParam0, iVar0, 256)) || func_936(iParam1->f_8, iParam0, iVar0, 65536)) || func_936(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_936(iParam1->f_8, iParam0, iVar0, 1) || func_936(iParam1->f_8, iParam0, iVar0, 8)) || func_936(iParam1->f_8, iParam0, iVar0, 65536)) || func_936(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_936(iParam1->f_8, iParam0, iVar0, 1) || func_936(iParam1->f_8, iParam0, iVar0, 16)) || func_936(iParam1->f_8, iParam0, iVar0, 2)) || func_936(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_936(iParam1->f_8, iParam0, iVar0, 8) || func_936(iParam1->f_8, iParam0, iVar0, 4096)) || func_936(iParam1->f_8, iParam0, iVar0, 256)) || func_936(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_855(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

int func_856(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_937(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_937(iParam1, 2, 0, 0);
	return -1;
}

int func_857(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_937(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_858(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_859(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_860(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_861(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_263(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_478(iParam0) };
	Var5 = { func_479(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &Var5, &Var0, bParam1, Var0.f_4, iParam2, 6.028273E-12f))
	{
		return 1;
	}
	return 0;
}

void func_862(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_938(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_290(iParam0, 0);
			bVar0 = true;
		}
		func_282(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

int func_863(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_939(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_864(bool bParam0)
{
	int iVar0;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_768(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_865(vector3 vParam0)
{
	if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
	{
		if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
		{
			return true;
		}
	}
	return false;
}

void func_866(var uParam0, int iParam1, vector3 vParam2, int iParam5, int iParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	int iVar0;
	int iVar1;

	if (!func_192(vParam2))
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
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1092616192 /* Float: 10f */, 1109393408 /* Float: 40f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 37:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1109393408 /* Float: 40f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 38:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1106247680 /* Float: 30f */, 1114636288 /* Float: 60f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1112014848 /* Float: 50f */, 1117782016 /* Float: 80f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1097859072 /* Float: 15f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 39:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(0f, 1092616192 /* Float: 10f */, 1f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(5f, 1097859072 /* Float: 15f */, 1f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 3f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 3f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 40:
				TASK::_0x2EB977293923C723(*uParam0, 1109393408 /* Float: 40f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1114636288 /* Float: 60f */, 1123024896 /* Float: 120f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1120403456 /* Float: 100f */, 1124204544 /* Float: 130f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 41:
				TASK::_0x2EB977293923C723(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1092616192 /* Float: 10f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1101004800 /* Float: 20f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 44:
			case 45:
				TASK::_0x2EB977293923C723(*uParam0, 1114636288 /* Float: 60f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1114636288 /* Float: 60f */, 1117782016 /* Float: 80f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1117126656 /* Float: 75f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 50:
				TASK::_0x2EB977293923C723(*uParam0, 1106247680 /* Float: 30f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1115815936 /* Float: 65f */, 1119748096 /* Float: 95f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 51:
				TASK::_0x2EB977293923C723(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1103626240 /* Float: 25f */, 1108082688 /* Float: 35f */, 5f, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1109393408 /* Float: 40f */, 1112014848 /* Float: 50f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1090519040 /* Float: 8f */);
				TASK::_0x450080DDEDB91258(*uParam0, 2f);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 1);
				break;
			case 52:
				TASK::_0x2EB977293923C723(*uParam0, 0f);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1109393408 /* Float: 40f */, 1120403456 /* Float: 100f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 42:
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1112014848 /* Float: 50f */, 1116471296 /* Float: 70f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1115815936 /* Float: 65f */, 1118437376 /* Float: 85f */, 5f, iParam1));
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 49:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, 1112014848 /* Float: 50f */);
				TASK::_0x954451EA2D2120FB(*uParam0, 0f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1092616192 /* Float: 10f */, 1112014848 /* Float: 50f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 43:
				TASK::_0x2EB977293923C723(*uParam0, func_940(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, func_940(1119748096 /* Float: 95f */, 1119092736 /* Float: 90f */, 1117782016 /* Float: 80f */, iParam1));
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1123680256 /* Float: 125f */, 1122369536 /* Float: 115f */, 1120403456 /* Float: 100f */, iParam1));
				TASK::_0x450080DDEDB91258(*uParam0, 5f);
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_941(vParam2, 1);
				iVar1 = func_942(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					TASK::_0x2EB977293923C723(*uParam0, func_940(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, func_940(1120403456 /* Float: 100f */, 1117782016 /* Float: 80f */, -1063256064 /* Float: -5f */, iParam1));
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1121714176 /* Float: 110f */, 1126170624 /* Float: 160f */, 1095237632 /* Float: 12.5f */, iParam1));
				}
				else
				{
					TASK::_0x2EB977293923C723(*uParam0, func_940(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
					TASK::_0x954451EA2D2120FB(*uParam0, 70f);
					TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1117782016 /* Float: 80f */, 1125515264 /* Float: 150f */, 1099694080 /* Float: 17.5f */, iParam1));
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
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1112014848 /* Float: 50f */, 1119092736 /* Float: 90f */, 1092616192 /* Float: 10f */, iParam1));
				TASK::_0x885D19AC2B6FBFF4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					TASK::_0x764DB5A48390FBAD(*uParam0, 1);
				}
				break;
			case 48:
				TASK::_0xBC3F847AE2C3DC65(*uParam0, 1092616192 /* Float: 10f */);
				TASK::_0x450080DDEDB91258(*uParam0, 1103626240 /* Float: 25f */);
				TASK::_0x2EB977293923C723(*uParam0, func_940(1120403456 /* Float: 100f */, 1116471296 /* Float: 70f */, -1058013184 /* Float: -7.5f */, iParam1));
				TASK::_0x954451EA2D2120FB(*uParam0, 70f);
				TASK::_0x0F4F6C4CE471259D(*uParam0, func_940(1125515264 /* Float: 150f */, 1128136704 /* Float: 190f */, 1092616192 /* Float: 10f */, iParam1));
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

void func_867(var uParam0, int iParam1, vector3 vParam2)
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
			if (func_941(vParam2, 1) == 5)
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

Vector3 func_868(vector3 vParam0)
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

bool func_869(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

int func_870(struct<4> Param0, struct<4> Param4, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12)
{
	struct<12> Var0;
	struct<4> Var14;
	int iVar18;
	int iVar19;
	struct<17> Var20;
	int iVar37;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_524(Param0, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (func_871(&(Var0.f_5), &Param4) && Var0.f_9 == iParam8)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, iParam8))
	{
		return -1;
	}
	Var14 = { func_262(Var0.f_4, Param4, iParam8, 1) };
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var14))
	{
		if (INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&Param0) != INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&Var14))
		{
			return -1;
		}
	}
	if (iParam12 == -1)
	{
		iParam12 = Var0.f_11;
	}
	iVar18 = func_264(Var0.f_4, Param4, iParam8, 1, 1, 0);
	iVar19 = INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(Var0.f_4, iParam8);
	if (iVar19 >= 0)
	{
		if (iVar18 >= iVar19)
		{
			return -1;
		}
		else if ((iVar18 + iParam12) > iVar19)
		{
			if (bParam11)
			{
				return -1;
			}
			iParam12 = (iVar19 - iVar18);
		}
	}
	Var0.f_11 = iParam12;
	Var20 = { func_729(&Var0, 0) };
	Var20.f_4 = { Param4 };
	Var20.f_11 = iParam8;
	Var20.f_10 = bParam10;
	iVar37 = func_730(5112.871f, &Var20, bParam9);
	if (iVar37 == -1)
	{
		return -1;
	}
	return iVar37;
}

bool func_871(var uParam0, bool bParam1)
{
	if (((*uParam0 == *bParam1 && uParam0->f_1 == bParam1->f_1) && uParam0->f_2 == bParam1->f_2) && uParam0->f_3 == bParam1->f_3)
	{
		return true;
	}
	return false;
}

int func_872(struct<4> Param0, struct<4> Param4, int iParam8, int iParam9)
{
	struct<11> Var0;
	struct<11> Var14;
	struct<17> Var28;
	struct<17> Var45;
	int iVar62;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0) || !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param4))
	{
		return -1;
	}
	if (func_871(&Param0, &Param4))
	{
		return -1;
	}
	Var0.f_9 = -5.45926E-19f;
	Var14.f_9 = -5.45926E-19f;
	if (!func_524(Param0, &Var0, 1, 0, -1) || !func_524(Param4, &Var14, 1, 0, -1))
	{
		return -1;
	}
	if (func_871(&(Var0.f_5), &(Var14.f_5)) && Var0.f_9 == Var14.f_9)
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_FITS_SLOT_ID(Var0.f_4, Var14.f_9) || !INVENTORY::_INVENTORY_FITS_SLOT_ID(Var14.f_4, Var0.f_9))
	{
		return -1;
	}
	Var28 = { func_729(&Var0, 0) };
	Var28.f_4 = { Var14.f_5 };
	Var28.f_11 = Var14.f_9;
	Var28.f_10 = (Var14.f_10 || iParam8);
	Var45 = { func_729(&Var14, 0) };
	Var45.f_4 = { Var0.f_5 };
	Var45.f_11 = Var0.f_9;
	Var45.f_10 = (Var0.f_10 || iParam8);
	iVar62 = -1;
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar62, 2.249603E-13f, 5112.871f))
	{
		if (func_860(iVar62, 5112.871f, &Var28) && func_860(iVar62, 5112.871f, &Var45))
		{
			if (func_943(iVar62) && NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iVar62))
			{
				func_937(iVar62, 1, 0, 0);
			}
			else
			{
				NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
				return -1;
			}
		}
		else
		{
			NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iVar62);
			return -1;
		}
	}
	else
	{
		return -1;
	}
	return iVar62;
}

int func_873(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 512441.5f))
	{
		return 1;
	}
	return 0;
}

int func_874(bool bParam0, bool bParam1)
{
	switch (bParam0)
	{
		case joaat("KIT_POUCH_REMEDIES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_REMEDIES_MP");
		case joaat("KIT_POUCH_INGREDIENTS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_INGREDIENTS_MP");
		case joaat("KIT_POUCH_MATERIALS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_MATERIALS_MP");
		case joaat("KIT_POUCH_VALUABLES"):
			return MISC::GET_HASH_KEY("KIT_POUCH_VALUABLES_MP");
		case joaat("KIT_POUCH_KIT"):
			return MISC::GET_HASH_KEY("KIT_POUCH_KIT_MP");
		case joaat("KIT_POUCH_PROVISIONS"):
			return MISC::GET_HASH_KEY("KIT_POUCH_PROVISIONS_MP");
		case 239629152:
			if (bParam1)
			{
				return MISC::GET_HASH_KEY("DOCUMENT_BOUNTY_HUNTER_LICENSE_UPGRADE_01_SHORT");
			}
			break;
	}
	return 0;
}

int func_875(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_263(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -9.085264E+22f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

struct<10> func_876(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	if (iParam0 != 0 && iParam0 != -5.45926E-19f)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -5.45926E-19f)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0)
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
	if (iParam6 != -1)
	{
		Var0.f_6 = iParam6;
	}
	if (iParam7 != 0)
	{
		Var0.f_8 = iParam7;
	}
	if (iParam8 != 0)
	{
		Var0.f_7 = iParam8;
	}
	return Var0;
}

bool func_877(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_878(bool bParam0)
{
	if (!func_263(bParam0, 0))
	{
	}
	if (func_372(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_879(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_880(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	int iVar43;

	iVar41 = 0;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar42, 20))
	{
		iVar43 = 0;
		while (iVar43 < iVar42)
		{
			if (Var0[iVar43 /*2*/].f_1 == iParam1)
			{
				iVar41 = Var0[iVar43 /*2*/];
				return iVar41;
			}
			iVar43++;
		}
	}
	return 0;
}

char* func_881(bool bParam0)
{
	bool bVar0;

	if (!func_263(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_772(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_882(bool bParam0)
{
	if (func_768(bParam0) == -1.955052E+34f || func_768(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_883(bool bParam0)
{
	int iVar0;

	if (!func_263(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_774(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

bool func_884(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_885(bool bParam0)
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

int func_886(var uParam0, int iParam1)
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

int func_887(bool bParam0)
{
	int iVar0;

	iVar0 = func_768(bParam0);
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

bool func_888(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_520(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_944(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_889(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_262(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

bool func_890(bool bParam0, int iParam1, int iParam2)
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

int func_891(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_892(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_601(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_945(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_946(bParam1, bParam4));
	}
	return iVar0;
}

void func_893(int iParam0)
{
	if (!func_263(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_947(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

void func_894(int iParam0, struct<4> Param1, int iParam5, int iParam6)
{
	func_386(iParam0, Param1, iParam5, (func_382(Param1, iParam5) + iParam6));
}

void func_895(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 1008981770);
	iVar1 = ENTITY::GET_ENTITY_HEALTH(iParam0);
	iVar2 = ENTITY::GET_ENTITY_MAX_HEALTH(iParam0, false);
	iVar0 = BUILTIN::FLOOR((fParam1 * IntToFloat(iVar2)));
	iVar3 = iVar0;
	if ((iVar1 + iVar0) > iVar2)
	{
		iVar3 = (iVar2 - iVar1);
	}
	iVar4 = (iVar1 + iVar3);
	ENTITY::SET_ENTITY_HEALTH(iParam0, iVar4, 0);
}

float func_896(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 1023879938);
		case 1:
			return (fParam0 * 2f);
		case 2:
			return (fParam0 * 1123024896);
		case 3:
			return (fParam0 * 1161035776);
		default:
			break;
	}
	return fParam0;
}

bool func_897(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 19;
			break;
		case 1:
			*iParam1 = 18;
			break;
		default:
			return false;
	}
	return true;
}

bool func_898(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		iParam0 = Global_1295619.f_4;
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return func_948(iParam0, iParam1, fParam2, bParam3);
}

void func_899(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	fParam1 = (fParam1 * 1008981770);
	fVar1 = PED::_GET_PED_STAMINA(iParam0);
	fVar2 = PED::_GET_PED_MAX_STAMINA(iParam0);
	fVar0 = (fVar2 * fParam1);
	fVar3 = fVar0;
	if ((fVar1 + fVar0) > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	fVar4 = (fVar1 + fVar3);
	PED::_CHANGE_PED_STAMINA(iParam0, fVar3);
}

bool func_900(int iParam0, int iParam1)
{
	float fVar0;

	fVar0 = func_949(iParam1);
	if (fVar0 == 1315859240)
	{
		return false;
	}
	if (func_902(iParam0, iParam1) >= fVar0)
	{
		return true;
	}
	return false;
}

bool func_901(int iParam0, int iParam1)
{
	if (iParam1 == 23)
	{
		return false;
	}
	switch (iParam1)
	{
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			return false;
		default:
			break;
	}
	if (func_143(iParam0) < 1036831949)
	{
		return false;
	}
	return true;
}

float func_902(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar0 /*56*/]), iParam0))
		{
			return Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_4[iParam1];
		}
		iVar0++;
	}
	if (!func_634(iParam0))
	{
		return 0f;
	}
	return 0f;
}

float func_903(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_950(iParam0);
	}
	return func_951(iParam0);
}

float func_904(float fParam0)
{
	float fVar0;

	fVar0 = BUILTIN::TO_FLOAT(BUILTIN::FLOOR(fParam0));
	return (fParam0 - fVar0);
}

void func_905(int iParam0, float fParam1)
{
	char* sVar0;
	int iVar1;
	float fVar2;
	bool bVar3;

	sVar0 = "";
	iVar1 = 0;
	fVar2 = 4.808429E-35f;
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
			break;
		case 3:
			sVar0 = "HORSE_XP_LEADING";
			break;
		case 10:
		case 11:
			sVar0 = "HORSE_XP_HITCH";
			break;
		case 4:
			sVar0 = "HORSE_XP_EQUIP_SADDLE";
			break;
		case 5:
			sVar0 = "HORSE_XP_BREAK_HORSE";
			break;
		case 6:
		case 7:
			sVar0 = "HORSE_XP_PATTED";
			break;
		case 12:
		case 13:
		case 14:
			sVar0 = "HORSE_XP_FED";
			break;
		case 15:
			sVar0 = "HORSE_XP_TREAT";
			break;
		case 16:
		case 17:
		case 18:
			sVar0 = "HORSE_XP_GROOM";
			break;
		case 19:
			sVar0 = "HORSE_XP_OINTMENT";
			break;
		case 8:
		case 9:
			sVar0 = "HORSE_XP_CALM";
			break;
		case 20:
		case 21:
			sVar0 = "HORSE_XP_LIGHT_LOAD";
			break;
		case 22:
			sVar0 = "HORSE_XP_KILLED_OWN_HORSE";
			iVar1 = 1;
			fVar2 = 4.465091E-08f;
			break;
	}
	bVar3 = false;
	if (bVar3)
	{
		sVar0 = MISC::VAR_STRING(2, sVar0, BUILTIN::FLOOR(fParam1));
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "HORSE_XP_GENERIC_EARNED");
	}
	func_636(sVar0, "ITEMTYPE_TEXTURES", 3.364521E-37f, iVar1, fVar2, 0, 0, 0, 1);
}

void func_906(int iParam0, float fParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	iVar0 = func_331(iParam0);
	if (iVar0 >= 4)
	{
		return;
	}
	func_952(iParam0, BUILTIN::FLOOR(fParam1));
	iVar1 = func_331(iParam0);
	if (iVar1 > iVar0)
	{
		iVar2 = (iVar1 - iVar0);
		func_706(func_705(2.788841E-26f), iVar2);
		PED::_SET_MOUNT_BONDING_LEVEL(iParam0, iVar1);
		if (iVar1 >= 4)
		{
			func_706(func_705(-7.727703E-38f), 1);
		}
		if (iVar1 == 2)
		{
			func_228(21, 1);
		}
		else if (iVar1 == 3)
		{
			func_228(22, 1);
		}
		else if (iVar1 == 4)
		{
			func_228(23, 1);
		}
		func_953(iVar1, iParam0);
		func_954();
	}
}

void func_907(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[iVar0 /*56*/]), iParam0))
		{
			Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_4[iParam1] = (Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_4[iParam1] + fParam2);
			return;
		}
		iVar0++;
	}
	if (!func_634(iParam0))
	{
		return;
	}
	Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_4[iParam1] = (Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_4[iParam1] + fParam2);
}

bool func_908()
{
	if (func_2() != 0)
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

int func_909(int iParam0, int iParam1)
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

void func_910(var uParam0, var uParam1)
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

void func_911(int iParam0, float fParam1, int iParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return;
	}
	if (TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return;
	}
	PED::_SET_PED_MOTIVATION(iParam0, 3, fParam1, iParam2);
}

void func_912(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_406(iParam0, iParam1);
	func_707(iParam0, iParam1, (iVar0 + iParam2));
}

void func_913(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_286(iParam0, iParam1);
	func_387(iParam0, iParam1, (iVar0 + iParam2));
}

void func_914(int iParam0, int iParam1, int iParam2)
{
	func_698(iParam0, iParam1, (func_439(iParam0, iParam1) + iParam2));
}

void func_915(int iParam0, int iParam1, int iParam2)
{
	func_497(iParam0, iParam1, (func_496(iParam0, iParam1) + iParam2));
}

void func_916(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_897(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iVar0, fParam2, false);
	}
}

void func_917(int iParam0, int iParam1, float fParam2)
{
	int iVar0;

	if (func_494(iParam1, &iVar0))
	{
		ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iVar0, fParam2, false);
	}
}

void func_918(bool bParam0)
{
	if (func_955(bParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA_FORT");
		return;
	}
	if (func_589(bParam0))
	{
		GRAPHICS::ANIMPOSTFX_PLAY("POSTFX_CONSUMABLE_STAMINA");
		return;
	}
}

bool func_919(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

float func_920(int iParam0)
{
	if (iParam0 == 9.256025E-25f || iParam0 == -218565.1f)
	{
		return 1.256553E-21f;
	}
	return Global_524288.f_39632;
}

int func_921(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_956(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

bool func_922(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_923(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_924(int iParam0, int iParam1)
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

bool func_925()
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
	if (!func_213(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<4> func_926(int iParam0)
{
	char cVar0[32];

	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, 0, 32);
	return cVar0;
}

char* func_927(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_928(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_929(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	struct<37> Var0;
	int iVar47;

	*uParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_715(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_957(bParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*uParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

bool func_930(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_715(bParam0, 2))
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

bool func_931(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&uParam1))
	{
		return false;
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam0, &uParam1, iParam5, !bParam6))
	{
		return false;
	}
	return true;
}

char* func_932(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "HealthCoreValue";
			break;
		case 1:
			sVar0 = "StaminaCoreValue";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

char* func_933(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "isLowHealthCoreActive";
			break;
		case 1:
			sVar0 = "isLowStaminaCoreActive";
			break;
		default:
			sVar0 = "";
			break;
	}
	return sVar0;
}

int func_934(int iParam0, int iParam1)
{
	int iVar0;

	if (func_494(iParam1, &iVar0))
	{
		if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iParam0, iVar0))
		{
			return 1;
		}
	}
	return 0;
}

int func_935(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_958(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_518(bParam1), iParam0, bParam3);
}

int func_936(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_919(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_937(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_959(iParam0, iParam1, iParam2, iParam3);
}

void func_938(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

bool func_939(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_518(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_731(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

float func_940(int iParam0, float fParam1, float fParam2, int iParam3)
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

int func_941(vector3 vParam0, int iParam3)
{
	int iVar0;

	iVar0 = func_586();
	if (func_840(iVar0))
	{
		if (VOLUME::DOES_VOLUME_EXIST(Global_1887363[iVar0 /*36*/].f_4) && VOLUME::IS_POINT_IN_VOLUME(Global_1887363[iVar0 /*36*/].f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_960(vParam0, iParam3);
}

int func_942(vector3 vParam0)
{
	return func_961(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

bool func_943(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = NETSHOPPING::_0x38640A8C2DEF011B(iParam0);
	iVar1 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(iParam0);
	if (iVar0 == 0)
	{
		return true;
	}
	if (iVar1 == 5112.871f)
	{
		if (((func_936(0, iVar1, iVar0, 4) || func_936(0, iVar1, iVar0, 256)) || func_936(0, iVar1, iVar0, 65536)) || func_936(0, iVar1, iVar0, 131072))
		{
			return false;
		}
	}
	else if ((func_936(0, iVar1, iVar0, 8) || func_936(0, iVar1, iVar0, 16)) || func_936(0, iVar1, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_944(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	*iParam1 = 0;
	if (*uParam0 != 10)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iParam2 < 1)
		{
			Jump @253; //curOff = 37
		}
		else if ((uParam0[iVar0 /*6*/])->f_4 == 0)
		{
			Jump @244; //curOff = 55
		}
		else if ((uParam0[iVar0 /*6*/])->f_5 == 0)
		{
			Jump @244; //curOff = 73
		}
		else if (func_962(uParam0[iVar0 /*6*/]))
		{
		}
		else
		{
			if (iVar0 != *iParam1)
			{
				*(uParam0[*iParam1 /*6*/]) = { *(uParam0[iVar0 /*6*/]) };
				(uParam0[*iParam1 /*6*/])->f_4 = (uParam0[iVar0 /*6*/])->f_4;
			}
			if ((uParam0[iVar0 /*6*/])->f_5 > iParam2)
			{
				(uParam0[*iParam1 /*6*/])->f_5 = iParam2;
				iParam2 = 0;
			}
			else
			{
				(uParam0[*iParam1 /*6*/])->f_5 = (uParam0[iVar0 /*6*/])->f_5;
				iParam2 = (iParam2 - (uParam0[*iParam1 /*6*/])->f_5);
			}
			if (iVar0 > *iParam1)
			{
				*(uParam0[iVar0 /*6*/]) = { func_519() };
				(uParam0[iVar0 /*6*/])->f_4 = 0;
				(uParam0[iVar0 /*6*/])->f_5 = 0;
			}
			*iParam1++;
		}
		iVar0++;
	}
	if (bParam3 && iParam2 > 0)
	{
		*iParam1 = 0;
		return false;
	}
	return true;
}

int func_945(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_963(bParam1))
		{
			iVar0 = 0;
			iVar1 = 0;
			while (iVar1 < 3)
			{
				if (Global_1903834.f_113[iVar1 /*96*/].f_1 == bParam1)
				{
					iVar0++;
				}
				iVar1++;
			}
			return iVar0;
		}
		else
		{
			return func_477(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_946(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_964())
	{
		return func_264(bParam0, func_261(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

int func_947(bool bParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;

	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_TAG_DATA(bParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if (Var0[iVar42 /*2*/].f_1 == iParam1)
			{
				return Var0[iVar42 /*2*/];
			}
			iVar42++;
		}
	}
	return 0;
}

int func_948(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (iParam0 == Global_1295619.f_3)
	{
		return func_965(iParam1, fParam2, 1, bParam3);
	}
	if (fParam2 == -1f)
	{
		if (func_966(iParam1))
		{
			fParam2 = 1106247680; /* Float: 30f */
		}
		else
		{
			fParam2 = 1106247680; /* Float: 30f */
		}
	}
	else if (fParam2 <= 0f)
	{
		return 0;
	}
	switch (iParam1)
	{
		case 0:
			func_967(iParam1, iParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iParam1, fParam2, bParam3);
			break;
		case 1:
			func_967(iParam1, iParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iParam1, fParam2, bParam3);
			break;
		case 19:
			func_967(iParam1, iParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iParam1, fParam2, bParam3);
			break;
		case 18:
			func_967(iParam1, iParam0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iParam0, iParam1, fParam2, bParam3);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_949(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1112014848 /* Float: 50f */;
		case 5:
			return 1103626240 /* Float: 25f */;
		default:
			break;
	}
	return 1315859240;
}

float func_950(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901671.f_698.f_2;
		case 0:
			return Global_1901671.f_698.f_3;
		case 1:
			return Global_1901671.f_698.f_4;
		case 2:
			return Global_1901671.f_698.f_5;
		case 4:
			return Global_1901671.f_698.f_7;
		case 5:
			return Global_1901671.f_698.f_9;
		case 6:
			return Global_1901671.f_698.f_10;
		case 7:
			return Global_1901671.f_698.f_11;
		case 8:
			return Global_1901671.f_698.f_12;
		case 9:
			return Global_1901671.f_698.f_13;
		case 10:
			return Global_1901671.f_698.f_14;
		case 11:
			return Global_1901671.f_698.f_15;
		case 12:
			return Global_1901671.f_698.f_16;
		case 13:
			return Global_1901671.f_698.f_17;
		case 14:
			return Global_1901671.f_698.f_18;
		case 15:
			return Global_1901671.f_698.f_19;
		case 16:
			return Global_1901671.f_698.f_20;
		case 17:
			return Global_1901671.f_698.f_21;
		case 18:
			return Global_1901671.f_698.f_22;
		case 19:
			return Global_1901671.f_698.f_23;
		case 20:
			return Global_1901671.f_698.f_25;
		case 21:
			return Global_1901671.f_698.f_26;
		case 22:
			return Global_1901671.f_698.f_27;
		default:
			break;
	}
	return 0f;
}

float func_951(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return Global_1901671.f_698.f_2;
		case 0:
			return Global_1901671.f_698.f_3;
		case 1:
			return Global_1901671.f_698.f_4;
		case 2:
			return Global_1901671.f_698.f_5;
		case 4:
			return Global_1901671.f_698.f_6;
		case 5:
			return Global_1901671.f_698.f_8;
		case 6:
			return Global_1901671.f_698.f_10;
		case 7:
			return Global_1901671.f_698.f_11;
		case 8:
			return Global_1901671.f_698.f_12;
		case 9:
			return Global_1901671.f_698.f_13;
		case 10:
			return Global_1901671.f_698.f_14;
		case 11:
			return Global_1901671.f_698.f_15;
		case 12:
			return Global_1901671.f_698.f_16;
		case 13:
			return Global_1901671.f_698.f_17;
		case 14:
			return Global_1901671.f_698.f_18;
		case 15:
			return Global_1901671.f_698.f_19;
		case 16:
			return Global_1901671.f_698.f_20;
		case 17:
			return Global_1901671.f_698.f_21;
		case 18:
			return Global_1901671.f_698.f_22;
		case 19:
			return Global_1901671.f_698.f_23;
		case 20:
			return Global_1901671.f_698.f_25;
		case 21:
			return Global_1901671.f_698.f_26;
		case 22:
			return Global_1901671.f_698.f_27;
		default:
			break;
	}
	return 0f;
}

void func_952(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::ADD_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

void func_953(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	char* sVar2;

	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam1);
	iVar1 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	if (iParam0 == 1)
	{
		sVar2 = "HORSE_BONDED";
	}
	else if (iParam0 == iVar1)
	{
		sVar2 = "HORSE_BONDING_MAXIMUM";
	}
	else
	{
		sVar2 = "HORSE_BONDING_LEVELUP";
	}
	func_651(sVar2, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iParam0), 2.48646E-06f, -21943.96f, 8000, "HUD_Toast_Soundset", "horse_bonding", 0, 0, 1, 1);
}

void func_954()
{
	if (Global_1290256.f_1608.f_5 == 1)
	{
		return;
	}
	Global_1290256.f_1608.f_5 = 1;
}

bool func_955(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_POTENT_HORSE_STIMULANT"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_STIMULANT_CRAFTED"):
			return true;
	}
	return false;
}

bool func_956(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

bool func_957(bool bParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_958(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_959(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_968(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_960(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;

	iVar0 = func_969(vParam0);
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

int func_961(int iParam0)
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

bool func_962(var uParam0)
{
	if (!func_970(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

bool func_963(bool bParam0)
{
	if (!func_776(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_971(bParam0, 1))
	{
		return false;
	}
	return true;
}

bool func_964()
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!func_972(iVar0))
	{
		return false;
	}
	return true;
}

int func_965(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_966(iParam0))
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
		else
		{
			fParam1 = 1106247680; /* Float: 30f */
		}
	}
	else if (fParam1 <= 0f)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			if (bParam2)
			{
				sVar0 = func_973(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_974(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_973(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_975(3.279095E+25f);
			func_976(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_973(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_977(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_975(2.372604E-26f);
			func_978(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_978(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_978(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_966(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 0:
			return true;
		case 2:
			return true;
		default:
			break;
	}
	return false;
}

void func_967(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_979(ENTITY::GET_ENTITY_MAX_HEALTH(iParam1, false), iParam1);
			break;
		case 1:
			func_980(PED::_GET_PED_MAX_STAMINA(iParam1), iParam1);
			break;
		case 19:
			func_981(iParam1, 0, 1120403456 /* Float: 100f */);
			break;
		case 18:
			func_981(iParam1, 1, 1120403456 /* Float: 100f */);
			break;
	}
}

void func_968(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_982(&(uParam0->f_4));
}

int func_969(vector3 vParam0)
{
	int iVar0;

	iVar0 = func_983(vParam0, 0f, 0f, 0, 2);
	return func_983(vParam0, Global_1892764[iVar0 /*3*/].f_1, Global_1892764[iVar0 /*3*/].f_2, Global_1892764[iVar0 /*3*/], 4);
}

bool func_970(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_971(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_984(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

bool func_972(int iParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(iParam0))
	{
		case joaat("HUNTERCART01"):
			return true;
		default:
			break;
	}
	return false;
}

char* func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		case 1:
			return "PlayerOverpower";
		case 2:
			return "PlayerOverpower";
		default:
			break;
	}
	return "";
}

void func_974(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_GET_NUM_RESERVED_HEALTH(iVar0);
	}
	iVar1 = func_985(2);
	func_986(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_975(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<2> Var6[20];

	iVar1 = Global_1156096.f_47689.f_1.f_42;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = Global_1156096.f_47689.f_1[iVar2 /*2*/];
		iVar3 = func_987(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_988(iVar0);
			Global_1156096.f_47689.f_1.f_42 = (Global_1156096.f_47689.f_1.f_42 - 1);
		}
		else
		{
			Var6[iVar4 /*2*/] = { Global_1156096.f_47689.f_1[iVar2 /*2*/] };
			iVar4++;
		}
		iVar2++;
	}
	iVar5 = 0;
	while (iVar5 < iVar4)
	{
		Global_1156096.f_47689.f_1[iVar5 /*2*/] = { Var6[iVar5 /*2*/] };
		iVar5++;
	}
}

void func_976(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_989(2);
	func_990(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_977(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = 10;
	}
	iVar0 = func_991(2);
	func_992(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_978(int iParam0, bool bParam1, bool bParam2)
{
	func_993(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

void func_979(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::SET_ENTITY_HEALTH(iParam1, iParam0, 0);
}

void func_980(float fParam0, int iParam1)
{
	float fVar0;

	if (fParam0 < 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	fVar0 = (fParam0 - PED::_GET_PED_STAMINA(iParam1));
	PED::_CHANGE_PED_STAMINA(iParam1, fVar0);
}

bool func_981(int iParam0, int iParam1, float fParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (fParam2 > 1120403456)
	{
		fParam2 = 1120403456; /* Float: 100f */
	}
	else if (fParam2 < 0f)
	{
		fParam2 = 0f;
	}
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_994(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_982(var uParam0)
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

int func_983(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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

int func_984(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

int func_985(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_995(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546;
		case 1:
			return Global_1956862.f_1565.f_136;
		default:
			break;
	}
	return -1;
}

void func_986(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_CHANGE_ENTITY_HEALTH(iParam1, fParam0, 0, 0);
}

int func_987(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2101912686:
			return 13;
		case -2059285007:
			return 167;
		case -2006026692:
			return 176;
		case -1993903481:
			return 124;
		case -1970041458:
			return 142;
		case -1935700575:
			return 136;
		case -1927422497:
			return 127;
		case -1920464018:
			return 58;
		case -1919393558:
			return 27;
		case -1857550353:
			return 173;
		case -1855662261:
			return 55;
		case -1840995238:
			return 15;
		case -1835722213:
			return 88;
		case -1790318144:
			return 106;
		case -1786033368:
			return 62;
		case -1767968552:
			return 86;
		case -1767662471:
			return 32;
		case -1729980669:
			return 108;
		case -1729554078:
			return 49;
		case -1727526861:
			return 109;
		case -1722264360:
			return 18;
		case -1719665775:
			return 37;
		case -1716981503:
			return 107;
		case -1697567574:
			return 72;
		case -1685270562:
			return 181;
		case -1631930150:
			return 166;
		case -1629969648:
			return 174;
		case -1605880447:
			return 120;
		case -1575244501:
			return 61;
		case -1551628748:
			return 74;
		case -1543433893:
			return 70;
		case -1539337723:
			return 121;
		case -1525401254:
			return 64;
		case -1525233154:
			return 47;
		case -1491472827:
			return 94;
		case -1486927560:
			return 112;
		case -1480068681:
			return 50;
		case -1478178768:
			return 148;
		case -1465202595:
			return 104;
		case -1459368569:
			return 116;
		case -1431848307:
			return 76;
		case -1418298797:
			return 155;
		case -1391865428:
			return 171;
		case -1378468884:
			return 60;
		case -1291022662:
			return 117;
		case -1288042557:
			return 19;
		case -1248720641:
			return 7;
		case -1229834518:
			return 89;
		case -1223791123:
			return 79;
		case -1209874968:
			return 45;
		case -1197630873:
			return 153;
		case -1196069774:
			return 180;
		case -1181880939:
			return 80;
		case -1170784825:
			return 38;
		case -1125028284:
			return 137;
		case -1123356036:
			return 147;
		case -1100659165:
			return 6;
		case -1089821002:
			return 85;
		case -1084890102:
			return 172;
		case -1080696981:
			return 92;
		case -1010031245:
			return 39;
		case -992423055:
			return 157;
		case -979738281:
			return 77;
		case -931294997:
			return 111;
		case -920221586:
			return 110;
		case -900877140:
			return 30;
		case -885737328:
			return 114;
		case -885646667:
			return 67;
		case -837774766:
			return 78;
		case -813902658:
			return 182;
		case -799500009:
			return 145;
		case -751329575:
			return 139;
		case -711254121:
			return 132;
		case -660114191:
			return 31;
		case -649929946:
			return 53;
		case -636552746:
			return 123;
		case -587737142:
			return 71;
		case -546870456:
			return 159;
		case -521477124:
			return 82;
		case -481051896:
			return 135;
		case -425216802:
			return 17;
		case -415437740:
			return 103;
		case -415250715:
			return 144;
		case -392183396:
			return 90;
		case -343572565:
			return 21;
		case -340578116:
			return 169;
		case -286632741:
			return 8;
		case -267135864:
			return 138;
		case -233204301:
			return 105;
		case -203268054:
			return 143;
		case -161625840:
			return 177;
		case -126580932:
			return 0;
		case -117284255:
			return 122;
		case -60432888:
			return 44;
		case -56802666:
			return 102;
		case -47513954:
			return 99;
		case -46116991:
			return 163;
		case -35033037:
			return 133;
		case -33431232:
			return 12;
		case -29822088:
			return 40;
		case 0:
			return 1;
		case 1213703:
			return 154;
		case 54499763:
			return 98;
		case 111084081:
			return 56;
		case 114587291:
			return 29;
		case 149216078:
			return 57;
		case 168336706:
			return 149;
		case 173401469:
			return 100;
		case 180714777:
			return 81;
		case 268103762:
			return 97;
		case 282858309:
			return 183;
		case 320758674:
			return 158;
		case 352539363:
			return 179;
		case 362862598:
			return 170;
		case 398279342:
			return 34;
		case 408582472:
			return 5;
		case 420477860:
			return 25;
		case 456199285:
			return 168;
		case 509781427:
			return 93;
		case 550487527:
			return 35;
		case 576694808:
			return 175;
		case 638586808:
			return 118;
		case 659100749:
			return 59;
		case 666050502:
			return 65;
		case 698214003:
			return 2;
		case 713106899:
			return 36;
		case 780689752:
			return 3;
		case 791791441:
			return 125;
		case 797908556:
			return 42;
		case 798283666:
			return 141;
		case 807983049:
			return 150;
		case 839199173:
			return 91;
		case 846387993:
			return 14;
		case 852774198:
			return 113;
		case 878491929:
			return 33;
		case 887717126:
			return 66;
		case 926420921:
			return 51;
		case 946848176:
			return 68;
		case 952755846:
			return 24;
		case 955999834:
			return 134;
		case 956867472:
			return 9;
		case 1036630721:
			return 10;
		case 1037792287:
			return 140;
		case 1052684812:
			return 87;
		case 1075856357:
			return 95;
		case 1078589127:
			return 46;
		case 1095779900:
			return 22;
		case 1110815339:
			return 152;
		case 1138017610:
			return 11;
		case 1156950836:
			return 83;
		case 1195903441:
			return 52;
		case 1278022357:
			return 48;
		case 1281707602:
			return 164;
		case 1323028278:
			return 41;
		case 1374979106:
			return 28;
		case 1405624312:
			return 146;
		case 1444077748:
			return 23;
		case 1449867002:
			return 162;
		case 1498983922:
			return 84;
		case 1547488310:
			return 161;
		case 1554410187:
			return 73;
		case 1585362808:
			return 16;
		case 1636352616:
			return 151;
		case 1662680949:
			return 178;
		case 1698995037:
			return 4;
		case 1769731136:
			return 115;
		case 1801131110:
			return 75;
		case 1806354060:
			return 96;
		case 1811663962:
			return 131;
		case 1828803907:
			return 20;
		case 1829805500:
			return 54;
		case 1830494920:
			return 101;
		case 1838787462:
			return 129;
		case 1865781806:
			return 165;
		case 1899963938:
			return 63;
		case 1900141702:
			return 156;
		case 1903067887:
			return 126;
		case 1907663129:
			return 43;
		case 2040423027:
			return 128;
		case 2050123975:
			return 130;
		case 2096770678:
			return 119;
		case 2110112797:
			return 69;
		case 2119170919:
			return 160;
		case 2132307595:
			return 26;
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

int func_988(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_996(iParam0))
	{
		return 0;
	}
	iVar0 = func_987(iParam0, 1);
	if (!func_997(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_998(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_999(iParam0, iVar1))
		{
			case 0:
				func_1000(iVar1, iParam0, iVar4);
				break;
			case 1:
				iVar5 = 0;
				while (iVar5 < Global_1156096.f_35859.f_11700)
				{
					if (Global_1156096.f_35859.f_9503[iVar5 /*3*/] != iVar1 || Global_1156096.f_35859.f_9503[iVar5 /*3*/].f_1 != iParam0)
					{
					}
					else
					{
						func_1000(iVar1, iParam0, iVar4);
						func_1001(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_1001(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1002(iVar1, 1);
				func_1003(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1004(iVar2, 0);
					iVar6 = 0;
					while (iVar6 < Global_1156096.f_35859.f_9502)
					{
						if (Global_1156096.f_35859.f_9302[iVar6] != iVar1)
						{
						}
						else
						{
							Global_1156096.f_35859.f_9302[iVar6] = -1;
							Global_1156096.f_35859.f_9502 = (Global_1156096.f_35859.f_9502 - 1);
							Global_1156096.f_35859.f_9302[iVar6] = Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502];
							Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502] = -1;
						}
						else
						{
							iVar6++;
						}
					}
				}
				iVar4++;
			}
			Global_1156096.f_35859.f_919[iVar0 /*12*/] = -1;
			func_1005(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

int func_989(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_995(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_2;
		case 1:
			return Global_1956862.f_1565.f_136.f_2;
		default:
			break;
	}
	return -1;
}

void func_990(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = Global_1295619.f_3;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	PED::_CHANGE_PED_STAMINA(iParam1, fParam0);
}

int func_991(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_995(1);
	}
	switch (iParam0)
	{
		case 0:
			return Global_1956862.f_1546.f_1;
		case 1:
			return Global_1956862.f_1565.f_136.f_1;
		default:
			break;
	}
	return -1;
}

void func_992(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1006(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(iVar0) && fParam0 > 0f) && !bParam2)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_GET_PLAYER_SPECIAL_ABILITY_MULTIPLIER(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_SPECIAL_ABILITY_RESTORE_BY_AMOUNT(iVar0, fParam0, 0, 0, 1);
	}
	else
	{
		PLAYER::_SPECIAL_ABILITY_DRAIN_BY_AMOUNT(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_SET_SPECIAL_ABILITY_MULTIPLIER(iVar0, fVar2);
	}
}

int func_993(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_995(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_981(iVar0, iParam0, fParam1))
	{
		if (bParam2)
		{
			if (fParam1 >= 1120403456)
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
			}
			else
			{
				AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
			}
		}
		if (bParam3)
		{
			func_1007(iParam0, 7000, iParam5);
		}
		func_1008(iVar0, iParam0, fParam1);
		func_1009(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_994(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		case 0:
			return 0;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_995(int iParam0)
{
	return func_1011(func_1010(iParam0));
}

bool func_996(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_997(int iParam0)
{
	int iVar0;

	iVar0 = func_998(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_998(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3"):
			return 100;
		case joaat("CONTENT__PREDATOR__LEVEL_0"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3"):
			return 63;
		case -2082434331:
			return 152;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2"):
			return 65;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2"):
			return 93;
		case -2038430863:
			return 151;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1"):
			return 64;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2"):
			return 35;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3"):
			return 6;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2"):
			return 56;
		case joaat("CONTENT__PREDATOR__LEVEL_3"):
			return 139;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3"):
			return 54;
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS"):
			return 110;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2"):
			return 78;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1"):
			return 80;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2"):
			return 62;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME"):
			return 73;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2"):
			return 41;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1"):
			return 25;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1"):
			return 92;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2"):
			return 47;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1"):
			return 61;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3"):
			return 3;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1"):
			return 49;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY"):
			return 148;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS"):
			return 107;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS"):
			return 111;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1"):
			return 55;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3"):
			return 9;
		case joaat("CONTENT__PREDATOR__LEVEL_1"):
			return 137;
		case -1246069683:
			return 124;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1"):
			return 46;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1"):
			return 74;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3"):
			return 69;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1"):
			return 7;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_7"):
			return 143;
		case -1105699593:
			return 153;
		case -1047626954:
			return 118;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1"):
			return 1;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3"):
			return 79;
		case -980934770:
			return 125;
		case joaat("CONTENT__PREDATOR__LEVEL_4"):
			return 140;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5"):
			return 132;
		case joaat("CONTENT__PREDATOR__LEVEL_6"):
			return 142;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3"):
			return 60;
		case -821191074:
			return 115;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1"):
			return 40;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3"):
			return 48;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1"):
			return 77;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2"):
			return 17;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2"):
			return 2;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3"):
			return 72;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM"):
			return 121;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2"):
			return 59;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3"):
			return 85;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3"):
			return 94;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1"):
			return 4;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2"):
			return 68;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1"):
			return 58;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY"):
			return 119;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1"):
			return 10;
		case joaat("CONTENT__HUNTED__MASKED"):
			return 146;
		case joaat("CONTENT__PASSIVE_MODE"):
			return 135;
		case -193167881:
			return 127;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3"):
			return 30;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN"):
			return 122;
		case joaat("CONSUMABLE__DAILY_STEW"):
			return 150;
		case joaat("CONTENT__PREDATOR__LEVEL_5"):
			return 141;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1"):
			return 67;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1"):
			return 43;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS"):
			return 106;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3"):
			return 39;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2"):
			return 8;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2"):
			return 11;
		case 130533095:
			return 126;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3"):
			return 18;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2"):
			return 44;
		case 158579484:
			return 117;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE"):
			return 101;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3"):
			return 15;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS"):
			return 113;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6"):
			return 133;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1"):
			return 86;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2"):
			return 71;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2"):
			return 29;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS"):
			return 105;
		case joaat("STATUS_EFFECT__POISON"):
			return 102;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7"):
			return 134;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS"):
			return 109;
		case 549687162:
			return 145;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1"):
			return 28;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1"):
			return 16;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2"):
			return 26;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1"):
			return 98;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF"):
			return 149;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3"):
			return 45;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3"):
			return 88;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3"):
			return 36;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2"):
			return 90;
		case joaat("CONTENT__PREDATOR__LEVEL_8"):
			return 144;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2"):
			return 81;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS"):
			return 114;
		case 808176588:
			return 116;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2"):
			return 38;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1"):
			return 70;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3"):
			return 21;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2"):
			return 14;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2"):
			return 96;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3"):
			return 82;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2"):
			return 87;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS"):
			return 104;
		case 1130659268:
			return 123;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2"):
			return 20;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2"):
			return 75;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1"):
			return 31;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3"):
			return 97;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1"):
			return 19;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2"):
			return 32;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2"):
			return 129;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS"):
			return 112;
		case joaat("CONTENT__PREDATOR__LEVEL_2"):
			return 138;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1"):
			return 83;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF"):
			return 147;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3"):
			return 57;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1"):
			return 22;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3"):
			return 33;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3"):
			return 130;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1"):
			return 13;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2"):
			return 84;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1"):
			return 95;
		case joaat("EQUIPMENT__NED_KELLY_COOP"):
			return 120;
		case joaat("STATUS_EFFECT__TRACKING"):
			return 103;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2"):
			return 23;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2"):
			return 99;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3"):
			return 66;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1"):
			return 52;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3"):
			return 27;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3"):
			return 76;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2"):
			return 5;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3"):
			return 42;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1"):
			return 37;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1"):
			return 34;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS"):
			return 108;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2"):
			return 53;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3"):
			return 91;
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

int func_999(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1012(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_1002(iParam1, 1);
	switch (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_1)
	{
		case joaat("ON_DISABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("DURATION"):
		case joaat("DURATION_OR_MISS"):
		case joaat("ALLY_LEAVE_DEADEYE"):
		case 1002704651:
		case 1270499458:
			return 1;
		default:
			if (iVar1 == iVar0)
			{
				return 1;
			}
			break;
	}
	return 2;
}

int func_1000(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_996(iParam1))
	{
		return 0;
	}
	if (!func_1013(iParam0))
	{
		return 0;
	}
	iVar0 = func_1002(iParam0, 1);
	func_1014(iParam0, iParam1, iParam2);
	if (func_1015(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_1016(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1017(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1018(vVar1))
		{
			if (func_1019(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1020(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1021(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1021(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1001(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1002(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("UNLOCK__ROLE__POTENTIAL_BONUS_EFFECT"):
			return 145;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_2_EFFECT"):
			return 108;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_1_EFFECT"):
			return 90;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_LOCAL_EFFECT"):
			return 79;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_3_EFFECT"):
			return 60;
		case joaat("STATUS_EFFECT__POISON_EFFECT"):
			return 137;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_2_EFFECT"):
			return 91;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_2_EFFECT"):
			return 75;
		case -2019073637:
			return 198;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_3_EFFECT"):
			return 26;
		case joaat("CONTENT__PREDATOR__LEVEL_2_EFFECTS"):
			return 180;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_TIER_3_EFFECT"):
			return 92;
		case joaat("CONTENT__ACTIVE_DEED__FIRE_VULNERABILITY_EFFECT"):
			return 194;
		case joaat("ABILITY_CARD__HANGMAN_TIER_2_EFFECT"):
			return 28;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_TAKEN_EFFECT"):
			return 130;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_3_EFFECT"):
			return 49;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_3_EFFECT"):
			return 22;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_1_EFFECT"):
			return 55;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_ON_HORSEBACK_INDICATOR"):
			return 6;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_2_EFFECT"):
			return 134;
		case joaat("ABILITY_CARD__HANGMAN_TIER_3_EFFECT"):
			return 29;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_3_EFFECT"):
			return 16;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_3_EFFECT"):
			return 112;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_3_EFFECT"):
			return 106;
		case joaat("ABILITY_CARD__HANGMAN_INDICATOR"):
			return 30;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGED_INDICATOR"):
			return 8;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_2_EFFECT"):
			return 111;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_2_EFFECT"):
			return 96;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_3_EFFECT"):
			return 45;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_EFFECT"):
			return 63;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_2_EFFECT"):
			return 38;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS"):
			return 188;
		case joaat("EQUIPMENT__NED_KELLY_BASE_IMMUNITIES"):
			return 156;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_INDICATOR"):
			return 50;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_1_EFFECT"):
			return 117;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_3_EFFECT"):
			return 39;
		case joaat("CONTENT__PREDATOR__LEVEL_4_EFFECTS"):
			return 182;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_3_EFFECT"):
			return 109;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_3_EFFECT"):
			return 33;
		case -1394912816:
			return 199;
		case -1391351739:
			return 166;
		case joaat("ABILITY_CARD__HANGMAN_TIER_1_EFFECT"):
			return 27;
		case joaat("ABILITY_CARD__SHARPSHOOTER_TIER_1_EFFECT"):
			return 110;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_1_COST"):
			return 1;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_PENALTY"):
			return 46;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_2_COST"):
			return 2;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_TAKEN_EFFECT"):
			return 132;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_3_EFFECT"):
			return 119;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_3_EFFECT"):
			return 76;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_AURA"):
			return 61;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_7_EFFECT"):
			return 173;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_1_EFFECT"):
			return 47;
		case joaat("ABILITY_CARD__STRANGE_MEDICINE_TIER_1_EFFECT"):
			return 74;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_1_EFFECT"):
			return 31;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_1_EFFECT"):
			return 123;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_2_EFFECT"):
			return 124;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_2_EFFECT"):
			return 11;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_INDICATOR"):
			return 103;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_2_EFFECT"):
			return 21;
		case joaat("CONTENT__PREDATOR__LEVEL_6_EFFECTS"):
			return 184;
		case -749371485:
			return 164;
		case joaat("UNLOCK__ROLE__AWARENESS_BONUS_EFFECT"):
			return 142;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_LOCAL_EFFECT"):
			return 81;
		case joaat("UNLOCK__ROLE__EAGLE_EYE_PLUS_EFFECT"):
			return 148;
		case joaat("CONTENT__ACTIVE_DEED__EAGLE_EYE_GENERIC_BUFF_EFFECT"):
			return 193;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_3_EFFECT"):
			return 57;
		case joaat("CONTENT__PREDATOR__LEVEL_3_EFFECTS"):
			return 181;
		case joaat("ABILITY_CARD__OF_SINGLE_PURPOSE_TIER_2_EFFECT"):
			return 48;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_2_EFFECT"):
			return 59;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_3_EFFECT"):
			return 97;
		case joaat("CONTENT__PREDATOR__LEVEL_7_EFFECTS"):
			return 185;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_1_EFFECT"):
			return 104;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_3_EFFECT"):
			return 19;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_1_EFFECT"):
			return 133;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_1_EFFECT"):
			return 113;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_INDICATOR"):
			return 23;
		case joaat("EQUIPMENT__NED_KELLY_FREEROAM_EFFECT"):
			return 160;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_INDICATOR"):
			return 5;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_AURA"):
			return 13;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_COST"):
			return 66;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_DEALT_INDICATOR"):
			return 4;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_1_COST"):
			return 51;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_6_EFFECT"):
			return 172;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_PENALTY"):
			return 68;
		case -254950601:
			return 152;
		case -242870769:
			return 163;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_2_EFFECT"):
			return 35;
		case joaat("ABILITY_CARD__KICK_IN_THE_BUTT_TIER_2_EFFECT"):
			return 105;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_2_EFFECT"):
			return 41;
		case joaat("EQUIPMENT__NED_KELLY_BASE_EFFECTS"):
			return 155;
		case -124368414:
			return 197;
		case -106398498:
			return 153;
		case -97000889:
			return 86;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_3_EFFECT"):
			return 169;
		case -1:
			return 0;
		case joaat("ABILITY_CARD__PEAK_CONDITION_TIER_2_EFFECT"):
			return 56;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_TIER_3_EFFECT"):
			return 125;
		case joaat("ABILITY_CARD__DEFAULT_WINDED_INDICATOR"):
			return 9;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_1_EFFECT"):
			return 69;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_2_EFFECT"):
			return 15;
		case joaat("CONTENT__PASSIVE_MODE__IMMUNITIES_EFFECT"):
			return 177;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_COST"):
			return 64;
		case joaat("CONTENT__PASSIVE_MODE__MOUNT_EFFECTS"):
			return 175;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_1_EFFECT"):
			return 98;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_LOCAL_EFFECT"):
			return 77;
		case 275909046:
			return 151;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_5_EFFECT"):
			return 171;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_INDICATOR"):
			return 54;
		case joaat("STATUS_EFFECT__TOXIC_MOONSHINE_EFFECT"):
			return 136;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_3_EFFECT"):
			return 89;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_DEALT_EFFECT"):
			return 127;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_2_DAMAGE_DEALT_EFFECT"):
			return 129;
		case 558636891:
			return 187;
		case joaat("CONSUMABLE__DAILY_STEW_EFFECT"):
			return 196;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_2_REMOTE_EFFECT"):
			return 80;
		case 634217179:
			return 150;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_2_EFFECT"):
			return 70;
		case joaat("ABILITY_CARD__TO_FIGHT_ANOTHER_DAY_TIER_1_EFFECT"):
			return 95;
		case joaat("CONTENT__ACTIVE_DEED__BOUNTER_HUNTER_ACCURACY_DEBUFF_EFFECT"):
			return 195;
		case joaat("ABILITY_CARD__LIVE_FOR_THE_FIGHT_TIER_1_EFFECT"):
			return 107;
		case joaat("UNLOCK__ROLE__FOCUS_BONUS_EFFECT"):
			return 139;
		case joaat("ABILITY_CARD__EYE_FOR_AN_EYE_TIER_1_EFFECT"):
			return 20;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_3_REMOTE_EFFECT"):
			return 82;
		case joaat("CONTENT__PREDATOR__LEVEL_0_EFFECTS"):
			return 178;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_2_EFFECT"):
			return 65;
		case joaat("ABILITY_CARD__QUITE_AN_INSPIRATION_TIER_1_EFFECT"):
			return 58;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_1_EFFECT"):
			return 83;
		case joaat("UNLOCK__ROLE__MASTER_DISTILLER_BONUS_EFFECT"):
			return 149;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_2_EFFECT"):
			return 18;
		case joaat("ABILITY_CARD__OVERRIDE_REVENGE_SLOW_TIME_COST"):
			return 102;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_4_EFFECT"):
			return 170;
		case joaat("CONTENT__PREDATOR__LEVEL_8_EFFECTS"):
			return 186;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_2_EFFECT"):
			return 84;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_3_EFFECT"):
			return 100;
		case joaat("CONTENT__HUNTED__MASKED_EFFECTS"):
			return 192;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_DEADEYE_INDICATOR"):
			return 93;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_3_DAMAGE_DEALT_EFFECT"):
			return 131;
		case joaat("CONTENT__PREDATOR__LEVEL_5_EFFECTS"):
			return 183;
		case joaat("EQUIPMENT__NED_KELLY_BASE_RESTRICTIONS"):
			return 157;
		case joaat("ABILITY_CARD__COME_BACK_STRONGER_TIER_1_EFFECT"):
			return 17;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_3_EFFECT"):
			return 122;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_3_EFFECT"):
			return 115;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_1_EFFECT"):
			return 34;
		case joaat("ABILITY_CARD__HORSEMAN_TIER_2_EFFECT"):
			return 32;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_1_EFFECT"):
			return 43;
		case joaat("STATUS_EFFECT__TRACKING_EFFECT"):
			return 138;
		case joaat("CONTENT__PASSIVE_MODE__VEHICLE_EFFECTS"):
			return 176;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_3_EFFECT"):
			return 42;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_1_EFFECT"):
			return 10;
		case joaat("ABILITY_CARD__A_MOMENT_TO_RECUPERATE_TIER_3_EFFECT"):
			return 12;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_AURA"):
			return 73;
		case 1256374770:
			return 165;
		case joaat("ABILITY_CARD__HUNKER_DOWN_TIER_3_EFFECT"):
			return 36;
		case joaat("ABILITY_CARD__LANDONS_PATIENCE_TIER_1_EFFECT"):
			return 37;
		case joaat("CONTENT__PREDATOR__BASE_IMMUNITIES"):
			return 190;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_TIER_2_EFFECT"):
			return 114;
		case joaat("ABILITY_CARD__WINNING_STREAK_TIER_2_EFFECT"):
			return 99;
		case 1305406380:
			return 162;
		case joaat("UNLOCK__ROLE__PROTECTION_MOONSHINE_BONUS_EFFECT"):
			return 144;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_2_EFFECT"):
			return 25;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_2_EFFECT"):
			return 88;
		case joaat("UNLOCK__ROLE__PROTECTION_TRADER_BONUS_EFFECT"):
			return 143;
		case joaat("UNLOCK__ROLE__PERCEPTION_BONUS_EFFECT"):
			return 140;
		case joaat("ABILITY_CARD__THE_UNBLINKING_EYE_EAGLE_EYE_INDICATOR"):
			return 94;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_2_EFFECT"):
			return 168;
		case joaat("ABILITY_CARD__THE_GIFT_OF_FOCUS_TIER_3_EFFECT"):
			return 85;
		case joaat("ABILITY_CARD__THE_SHORT_GAME_TIER_1_EFFECT"):
			return 87;
		case 1462245043:
			return 154;
		case joaat("CONTENT__PREDATOR__BASE_EFFECTS_VULNERABLE"):
			return 189;
		case joaat("UNLOCK__ROLE__INTUITION_BONUS_EFFECT"):
			return 146;
		case joaat("CONTENT__PREDATOR__RESPAWN_EFFECTS"):
			return 191;
		case joaat("UNLOCK__ROLE__DIVINATION_BONUS_EFFECT"):
			return 147;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_1_COST"):
			return 62;
		case joaat("ABILITY_CARD__TAKE_THE_PAIN_AWAY_TIER_1_REMOTE_EFFECT"):
			return 78;
		case joaat("ABILITY_CARD__FOOL_ME_ONCE_INDICATOR"):
			return 126;
		case joaat("ABILITY_CARD__STRENGTH_IN_NUMBERS_INDICATOR"):
			return 116;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_PENALTIES"):
			return 72;
		case joaat("ABILITY_CARD__SLIPPERY_BASTARD_TIER_3_EFFECT"):
			return 67;
		case joaat("ABILITY_CARD__WINNING_STREAK_INDICATOR"):
			return 101;
		case joaat("ABILITY_CARD__RIDE_LIKE_THE_WIND_TIER_1_DAMAGE_TAKEN_EFFECT"):
			return 128;
		case joaat("EQUIPMENT__NED_KELLY_ADVERSARY_EFFECT"):
			return 158;
		case joaat("ABILITY_CARD__SLOW_AND_STEADY_TIER_3_EFFECT"):
			return 71;
		case joaat("CONTENT__PREDATOR__LEVEL_1_EFFECTS"):
			return 179;
		case joaat("ABILITY_CARD_GUNSLINGERS_CHOICE_TIER_3_EFFECT"):
			return 135;
		case joaat("ABILITY_CARD__DEFAULT_DEADEYE_DURATION_TIER_3_COST"):
			return 3;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_2_EFFECT"):
			return 121;
		case joaat("UNLOCK__ROLE__EFFICIENCY_BONUS_EFFECT"):
			return 141;
		case joaat("ABILITY_CARD__FOCUS_FIRE_TIER_1_EFFECT"):
			return 24;
		case joaat("CONTENT__NET_CAMP__HEALTH_REGENERATION_TENT_LEVEL_1_EFFECT"):
			return 167;
		case joaat("ABILITY_CARD__NECESSITY_BREEDS_TIER_1_EFFECT"):
			return 40;
		case joaat("ABILITY_CARD__DEFAULT_DAMAGE_TAKEN_ON_HORSEBACK_INDICATOR"):
			return 7;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_3_COST"):
			return 53;
		case joaat("ABILITY_CARD__IRON_LUNG_TIER_2_EFFECT"):
			return 118;
		case joaat("ABILITY_CARD__NEVER_WITHOUT_ONE_TIER_2_EFFECT"):
			return 44;
		case joaat("EQUIPMENT__NED_KELLY_GOLDEN_EFFECT"):
			return 161;
		case joaat("ABILITY_CARD__PAINT_IT_BLACK_TIER_2_COST"):
			return 52;
		case joaat("CONTENT__PASSIVE_MODE__DAMAGE_EFFECTS"):
			return 174;
		case joaat("ABILITY_CARD__FRIENDS_FOR_LIFE_TIER_1_EFFECT"):
			return 120;
		case joaat("EQUIPMENT__NED_KELLY_COOP_EFFECT"):
			return 159;
		case joaat("ABILITY_CARD__COLD_BLOODED_TIER_1_EFFECT"):
			return 14;
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

void func_1003(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1004(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1005(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		uParam0->f_1[iVar0 /*2*/] = 0;
		uParam0->f_1[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
}

bool func_1006(int iParam0)
{
	float fVar0;

	fVar0 = (func_1022(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

void func_1007(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_995(2);
	}
	if (iParam1 > 0)
	{
		iParam1 = (iParam1 + MISC::GET_GAME_TIMER());
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/] = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/] = iParam1;
			break;
		default:
			break;
	}
}

void func_1008(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1023(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1024(iParam1), fParam2, -1);
	}
}

void func_1009(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_995(2);
	}
	uVar0 = Global_1295619.f_16;
	func_1025(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1026(iParam0, uVar0, iParam3);
	}
}

bool func_1010(int iParam0)
{
	return func_683(&(Global_1956862.f_1565), iParam0, 1);
}

int func_1011(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_1012(int iParam0)
{
	if (func_1027(iParam0))
	{
		return (func_1028(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_1013(int iParam0)
{
	int iVar0;

	iVar0 = func_1002(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1014(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_987(iParam1, 1);
	iVar1 = func_1002(iParam0, 1);
	iVar2 = func_998(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return 0;
	}
	if (!Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return 1;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1029(iVar3, 1);
		if (!func_1030(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_1031(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1032(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1033(iVar6))
		{
		}
		else
		{
			iVar8 = func_1034(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1035(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1015(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1016(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1013(iParam0))
	{
		return false;
	}
	if (!func_1036(iParam1))
	{
		return false;
	}
	iVar0 = func_1037(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1017(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1038(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1018(vector3 vParam0)
{
	if (!func_1013(vParam0.x))
	{
		return false;
	}
	if (!func_996(vParam0.y))
	{
		return false;
	}
	if (!func_1039(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1019(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	iVar0 = func_987(iParam1, 1);
	iVar1 = func_1002(iParam0, 1);
	iVar2 = func_998(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/].f_1 = Global_1295619.f_16;
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_1029(iVar3, 1);
		if (!func_1030(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_1031(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1040(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1033(iVar6))
		{
		}
		else if (!func_1041(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1034(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1042(iVar6);
			}
		}
		iVar7++;
	}
	func_1043(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1020(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1036(iParam0))
	{
		return;
	}
	iVar0 = func_1037(iParam0, 1);
	if (!func_1013(iParam1))
	{
		return;
	}
	if (!func_996(iParam2))
	{
		return;
	}
	if (!func_1039(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1021(int iParam0)
{
	int iVar0;

	if (!func_1036(iParam0))
	{
		return;
	}
	iVar0 = func_1037(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

float func_1022(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_1044(2)));
}

char* func_1023(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		case 1:
			return "StaminaCoreValue";
		case 2:
			return "DeadEyeCoreValue";
		default:
			break;
	}
	return "";
}

char* func_1024(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		case 1:
			return "isLowStaminaCoreActive";
		case 2:
			return "isLowDeadEyeCoreActive";
		default:
			break;
	}
	return "";
}

void func_1025(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_995(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/] = fParam1;
			break;
		default:
			break;
	}
}

void func_1026(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_995(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_16[iParam0 /*3*/].f_2 = uParam1;
			break;
		default:
			break;
	}
}

bool func_1027(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1028(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (func_1027(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1045(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1046(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1047(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1048(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1049(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1050(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1029(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2123992989:
			return 59;
		case joaat("MDEFENSE__BULLET"):
			return 49;
		case -1936069272:
			return 47;
		case joaat("MHEALTH__REGEN_RATE"):
			return 42;
		case joaat("MHORSE__TRAMPLE_DAMAGE"):
			return 58;
		case joaat("ADEADEYE_COST_PER_SHOT"):
			return 2;
		case joaat("MWEAPON__BOW_STAMINA_DRAIN"):
			return 41;
		case joaat("MDEFENSE__BULLET_USING_MELEE_WEAPON"):
			return 50;
		case joaat("MACCURACY__LOCAL_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 64;
		case joaat("MDAMAGE__DISTANCE_CLOSE"):
			return 37;
		case -1575020444:
			return 94;
		case -1572802418:
			return 71;
		case joaat("ALASSO__DAMAGE_DEALT_PER_SECOND"):
			return 78;
		case joaat("MDEFENSE__EXPLOSIVE"):
			return 53;
		case -1349331938:
			return 43;
		case joaat("MDAMAGE__MISSING_HEALTH_CONVERSION"):
			return 29;
		case joaat("ASTAMINA__ALTER_TANK_PER_SECOND_PERCENT"):
			return 22;
		case joaat("ADEADEYE__ALTER_CORE_PER_SECOND_PERCENT"):
			return 7;
		case joaat("MHORSE__DEFENSE"):
			return 56;
		case joaat("ASTAMINA__HORSE_GAIN_ON_HORSEBACK_KILL_PERCENT"):
			return 23;
		case joaat("MDEFENSE__RANGED"):
			return 46;
		case joaat("MDAMAGE__ALL_WEAPONS_DIFFERENT_WEAPON"):
			return 25;
		case joaat("MDEFENSE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 51;
		case joaat("MEAGLE_EYE__DEPLETION_RATE"):
			return 67;
		case joaat("MDEFENSE__FIRE"):
			return 52;
		case joaat("AHEALTH__GAIN_ON_KILL_PERCENT"):
			return 11;
		case joaat("MRPG_ATTIRBUTE_CORE_DRAIN_RATE"):
			return 66;
		case joaat("MDAMAGE__EXPLOSIVE_WEAPONS"):
			return 36;
		case joaat("MSTAMINA__REGEN_RATE"):
			return 75;
		case joaat("AHEALTH__ALTER_TANK_PER_SECOND_PERCENT"):
			return 14;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_WITH_REPEATER"):
			return 73;
		case -377364039:
			return 60;
		case joaat("MACCURACY__AI_MODIFIER"):
			return 62;
		case joaat("MDAMAGE__FALLOFF"):
			return 39;
		case joaat("AHEALTH__ALTER_TOTAL_PER_MINUTE_PERCENT"):
			return 15;
		case joaat("ADEADEYE_COST_DURATION"):
			return 1;
		case joaat("MACCURACY__REMOTE_PLAYER_ACCURACY_FLOOR_MODIFIER"):
			return 65;
		case joaat("MSKILL__PERCEPTION"):
			return 83;
		case -1:
			return 0;
		case 66478954:
			return 93;
		case 91687087:
			return 79;
		case joaat("MSKILL__DISTILLER"):
			return 90;
		case 194431787:
			return 61;
		case joaat("MDEADEYE__GAIN_MULTIPLIER"):
			return 72;
		case joaat("MSKILL__PROTECTION_TRADER"):
			return 85;
		case joaat("MWEAPON__BOW_DRAW_TIME"):
			return 40;
		case joaat("MDEADEYE__DEPLETION_RATE"):
			return 70;
		case joaat("MSKILL__DIVINATION"):
			return 89;
		case 410940916:
			return 92;
		case 447408404:
			return 81;
		case joaat("ADEADEYE__GAIN_ON_HEADSHOT_PERCENT"):
			return 5;
		case joaat("MHEALTH__RECHARGE_RATE"):
			return 44;
		case joaat("MACCURACY__LOCAL_PLAYER_MODIFIER"):
			return 63;
		case joaat("MSKILL__INTUITION"):
			return 88;
		case joaat("MDAMAGE__MELEE"):
			return 30;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 19;
		case joaat("ADEADEYE__GAIN_ON_REVIVE_PERCENT"):
			return 4;
		case joaat("MSKILL__PROTECTION_MOONSHINE"):
			return 86;
		case joaat("MDEFENSE__PLAYERS"):
			return 48;
		case 874892169:
			return 95;
		case joaat("AHEALTH__ALTER_CORE_PER_SECOND_PERCENT"):
			return 16;
		case 920214733:
			return 91;
		case joaat("MINCAPACITATION__BLEEDOUT_TIME"):
			return 68;
		case joaat("ADEADEYE__ALTER_TANK_PER_SECOND_PERCENT"):
			return 6;
		case joaat("MDAMAGE__ALL_WEAPONS_AIMING_WITHOUT_FIRING"):
			return 27;
		case joaat("ADEADEYE__ALTER_TANK_DAMAGE_TAKEN_PERCENT"):
			return 8;
		case joaat("MSTAMINA__REGEN_RATE_HEALTH_CONVERSION"):
			return 76;
		case joaat("MDEFENSE__MELEE"):
			return 45;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_TAKEN_PERCENT"):
			return 20;
		case joaat("AHEALTH__GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 10;
		case 1356998909:
			return 80;
		case joaat("MSKILL__FOCUS"):
			return 82;
		case joaat("MDEADEYE__GAIN_MULTIPLIER_STR_WEAPON"):
			return 74;
		case joaat("AHORSE__HEALTH_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 17;
		case 1546732394:
			return 34;
		case joaat("MDEFENSE__STAMINA_CONVERSION"):
			return 55;
		case joaat("MDAMAGE__DISTANCE_FAR"):
			return 38;
		case joaat("MDAMAGE__BULLETS"):
			return 32;
		case joaat("MDEFENSE__STRENGTH_IN_NUMBERS"):
			return 54;
		case 1727267699:
			return 69;
		case joaat("MDAMAGE__STAMINA_CONVERSION"):
			return 28;
		case joaat("ADEADEYE_COST_ACTIVATION"):
			return 3;
		case joaat("MSTAMINA__SPRINT_DEPLETION_RATE"):
			return 77;
		case joaat("ASTAMINA__ALTER_CORE_PER_SECOND_PERCENT"):
			return 21;
		case joaat("AHORSE__STAMINA_GAIN_ON_DAMAGE_DEALT_PERCENT"):
			return 18;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_STR_WEAPON"):
			return 12;
		case joaat("MDAMAGE__ALL_WEAPONS"):
			return 24;
		case joaat("MDAMAGE__THROWN"):
			return 31;
		case joaat("MSKILL__AWARENESS"):
			return 84;
		case joaat("MHORSE__DEFENSE_PLAYERS"):
			return 57;
		case joaat("ADEADEYE__ALTER_TANK_BULLET_DAMAGE_TAKEN_PERCENT"):
			return 9;
		case joaat("MDAMAGE__SHOTGUN"):
			return 33;
		case joaat("AHEALTH__GAIN_KILL_PERCENT_NON_STR_WEAPON"):
			return 13;
		case joaat("MDAMAGE__BULLET_PER_CONSECUTIVE_SHOT"):
			return 35;
		case joaat("MDAMAGE__ALL_WEAPONS_SINCE_LAST_SHOT"):
			return 26;
		case joaat("MSKILL__POTENTIAL"):
			return 87;
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

bool func_1030(int iParam0)
{
	int iVar0;

	iVar0 = func_1029(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1031(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1051(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1032(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1030(iParam0))
	{
		return;
	}
	iVar0 = func_1029(iParam0, 1);
	if (!func_1052(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] > 0)
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0] = 0;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 0;
	if (!func_1053(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1054(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] = (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] - 1);
	if (Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1] > 0)
	{
		return;
	}
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] != Global_1156096.f_2169[iVar0 /*205*/])
		{
		}
		else
		{
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = -1;
			Global_1156096.f_47561[iVar1 /*25*/].f_23 = (Global_1156096.f_47561[iVar1 /*25*/].f_23 - 1);
			Global_1156096.f_47561[iVar1 /*25*/][iVar2] = Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23];
			Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = -1;
		}
		else
		{
			iVar2++;
		}
	}
}

bool func_1033(int iParam0)
{
	int iVar0;

	iVar0 = func_1034(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1034(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("EAGLE_EYE_HIGHLIGHT_BOUNTIES"):
			return 52;
		case joaat("HEADSHOT_IMMUNITY"):
			return 12;
		case joaat("HAT_BLOCKS_HEADSHOT"):
			return 11;
		case joaat("ANIMAL_TURN_IN_EFFICIENCY"):
			return 64;
		case joaat("DISABLE_HEALTH_REGENERATION"):
			return 2;
		case joaat("FIRE_CAP_INFINTE"):
			return 41;
		case joaat("SLOW_AND_STEADY_AURA"):
			return 28;
		case joaat("EAGLE_EYE_HIGHLIGHT_EARTH"):
			return 53;
		case -1730553768:
			return 3;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return 25;
		case -1651690657:
			return 65;
		case joaat("NO_CRITICAL_DAMAGE_AGAINST_PLAYERS"):
			return 10;
		case -1583192324:
			return 66;
		case joaat("REVIVE_ON_BLEEDOUT"):
			return 34;
		case -1486292178:
			return 67;
		case joaat("LASSO_IMMUNITY"):
			return 5;
		case joaat("DISABLE_JUMPING"):
			return 45;
		case joaat("GRAPPLE_IMMUNITY_FROM_AI"):
			return 31;
		case -1026481003:
			return 6;
		case joaat("TAGGING_IMMUNITY"):
			return 13;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			return 33;
		case joaat("ON_HORSE_SPEED_RESTRICTION_JOG"):
			return 59;
		case joaat("FATAL_MELEE_IMMUNITY"):
			return 32;
		case joaat("FORCE_HEALTH_REGEN"):
			return 1;
		case joaat("CONFUSION_EFFECT"):
			return 14;
		case joaat("FULL_LOCKON_IMMUNITY"):
			return 4;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			return 36;
		case -350459285:
			return 68;
		case joaat("DAMAGE_CAP_INFINTE"):
			return 40;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			return 26;
		case -199042163:
			return 60;
		case joaat("NED_KELLY_ADVERSARY"):
			return 22;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
			return 55;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return 19;
		case -1:
			return 0;
		case joaat("TRAIL_EFFECT"):
			return 17;
		case joaat("POISON_EFFECT"):
			return 20;
		case joaat("ON_HORSE_SPEED_RESTRICTION_WALK"):
			return 61;
		case joaat("SLIPPERY_BASTARD_VFX"):
			return 24;
		case joaat("DISORIENT_EFFECT"):
			return 18;
		case joaat("FOCUS_FIRE_VFX"):
			return 23;
		case joaat("PREDATOR_ICON_DISPLAY"):
			return 39;
		case joaat("WOUND_EFFECT"):
			return 15;
		case 718630298:
			return 56;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			return 48;
		case joaat("NED_KELLY_BASE"):
			return 21;
		case joaat("DISABLE_COMBAT_DIVE"):
			return 46;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 27;
		case joaat("DISABLE_FACIAL_ACTIONS"):
			return 43;
		case joaat("CANNOT_LOCK_ON_PLAYERS"):
			return 7;
		case joaat("GRAPPLE_IMMUNITY_FROM_PLAYERS"):
			return 30;
		case 1037859088:
			return 51;
		case 1066450193:
			return 54;
		case 1159158432:
			return 62;
		case joaat("OVERPOWER_PREDATOR"):
			return 37;
		case 1242495215:
			return 9;
		case joaat("ON_HORSE_SPEED_RESTRICTION_IGNORE_MOUNT_CLASS"):
			return 63;
		case 1341326366:
			return 58;
		case joaat("OVERRIDE_INFINITE_DEADEYE"):
			return 35;
		case 1398483650:
			return 50;
		case joaat("PULSE_REPOST_STATE"):
			return 38;
		case joaat("DISABLE_CONSUMABLES"):
			return 42;
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			return 57;
		case joaat("DISABLE_INCAPACITATION"):
			return 44;
		case joaat("DRAIN_EFFECT"):
			return 16;
		case 1898374676:
			return 49;
		case 2067881273:
			return 8;
		case joaat("DISABLE_DROWNING"):
			return 47;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			return 29;
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

void func_1035(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1055();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1056();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_228(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1057(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 1);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 18);
			break;
		case joaat("PULSE_REPOST_STATE"):
			NETWORK::_SET_NETWORK_RESPOT_TIMER(iVar0, 0, true);
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("OVERPOWER_INFINITE_HEALTH"):
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 0);
			ATTRIBUTE::DISABLE_ATTRIBUTE_OVERPOWER(iVar0, 19);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "");
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
		case joaat("SLIPPERY_BASTARD_VFX"):
		case joaat("SLOW_AND_STEADY_VFX"):
			func_1059(func_1058(iParam0));
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_RESET_ENTITY_AURA();
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0);
			PLAYER::_0xE910932F4B30BE23(iVar1);
			PLAYER::_0x0E9057A9DA78D0F8(iVar1, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 0);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, true);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, false);
			break;
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 1f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, -1f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1060();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1052(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1052(16);
			break;
	}
}

bool func_1036(int iParam0)
{
	int iVar0;

	iVar0 = func_1037(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1037(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("FOCUS_FIRE"):
			return 1;
		case -1038992817:
			return 5;
		case -950874556:
			return 4;
		case joaat("QUITE_AN_INSPIRATION"):
			return 3;
		case 0:
			return 0;
		case 1938826026:
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

int func_1038(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1061(iParam0);
	Var1.f_3 = 1f;
	Var1.f_5 = -1;
	Var1.f_6 = 3;
	Var1.f_6.f_1 = -1;
	Var1.f_6.f_1.f_3 = -1;
	Var1.f_6.f_1.f_3.f_3 = -1;
	Var1.f_17 = 5;
	Var32.f_3 = 1f;
	Var32.f_5 = -1;
	Var32.f_6 = 3;
	Var32.f_6.f_1 = -1;
	Var32.f_6.f_1.f_3 = -1;
	Var32.f_6.f_1.f_3.f_3 = -1;
	Var32.f_17 = 5;
	iVar63 = -1;
	iVar65 = 0;
	while (iVar65 < Global_1156096.f_35859.f_11700)
	{
		iVar64 = func_1002(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1062(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1063(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
			if (Var1.f_5 > Var32.f_5)
			{
				Var32 = { Var1 };
				iVar63 = iVar65;
			}
		}
		iVar65++;
	}
	return iVar63;
}

bool func_1039(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1040(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1030(iParam0))
	{
		return;
	}
	iVar0 = func_1029(iParam0, 1);
	if (!func_1052(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1053(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1054(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/].f_96[iVar1]++;
	iVar2 = 0;
	while (iVar2 < Global_1156096.f_47561[iVar1 /*25*/].f_23)
	{
		if (Global_1156096.f_47561[iVar1 /*25*/][iVar2] == Global_1156096.f_2169[iVar0 /*205*/])
		{
			return;
		}
		iVar2++;
	}
	Global_1156096.f_47561[iVar1 /*25*/][Global_1156096.f_47561[iVar1 /*25*/].f_23] = Global_1156096.f_2169[iVar0 /*205*/];
	Global_1156096.f_47561[iVar1 /*25*/].f_23++;
}

bool func_1041(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1064(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1042(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1055();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1056();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_228(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1057(iParam0));
			break;
		case joaat("OVERPOWER_PREDATOR"):
			break;
		case joaat("PREDATOR_ICON_DISPLAY"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(15);
			break;
		case joaat("FOCUS_FIRE_VFX"):
			PLAYER::_SET_LOCKON_FOCUS_FIRE_VFX(iVar1, "focusfire");
			break;
		case joaat("SLIPPERY_BASTARD_VFX"):
			iVar2 = func_1058(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1065(iParam0, 0));
			func_1066(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1065(iParam0, 1));
			func_1066(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1065(iParam0, 2));
			func_1066(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1065(iParam0, 3));
			func_1066(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1058(iParam0);
			func_1066(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1058(iParam0);
			func_1066(iVar2, 4, 1, -1, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 0.01531954f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("SLOW_AND_STEADY_AURA"):
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 1.916251E+31f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 8);
			PLAYER::_0x131E294EF60160DF(iVar1, 0f, 0f, 0f, 1f, 8);
			PLAYER::_0x263D69767F76059C(iVar1, 1);
			break;
		case joaat("QUITE_AN_INSPIRATION_AURA"):
			GRAPHICS::_SET_ENTITY_AURA(0f, 2f, 2f);
			PLAYER::_SET_PLAYER_STAT_FLAG_HASH(iVar1, 6.398504E+32f);
			PLAYER::_0x2B12B6FC8B8772AB(iVar1, 25);
			PLAYER::_0x263D69767F76059C(iVar1, 2);
			break;
		case joaat("EAGLE_EYE_PLUS_FLAG"):
			PLAYER::_EAGLE_EYE_SET_PLUS_FLAG_DISABLED(iVar1, false);
			break;
		case 1898374676:
			PLAYER::_SET_PLAYER_CAN_MERCY_KILL(iVar1, true);
			break;
		case 1398483650:
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE(iVar1, 0.5f);
			PLAYER::_EAGLE_EYE_SET_TRACKING_UPGRADE_2(iVar1, 2f);
			break;
		case joaat("NED_KELLY_BASE"):
			func_1067();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1052(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1052(16);
			break;
	}
}

void func_1043(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1068(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1069(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

int func_1044(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_985(2) * 2;
		case 1:
			return func_989(2) * 2;
		case 2:
			return func_991(2) * 2;
		default:
			break;
	}
	return -1;
}

bool func_1045(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1046(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1047(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1048(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1049(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1050(int iParam0)
{
	int iVar0;

	iVar0 = func_987(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1051(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1070(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1052(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 21)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	if (MISC::_IS_BIT_FLAG_SET(&(Global_1156096.f_2166), iParam0))
	{
		return true;
	}
	if (Global_1156096.f_2165 >= 21)
	{
		return false;
	}
	Global_1156096.f_2143[Global_1156096.f_2165] = iParam0;
	Global_1156096.f_2165++;
	return true;
}

bool func_1053(int iParam0)
{
	int iVar0;

	iVar0 = func_1054(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1054(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("CONSECUTIVE_DAMAGE_DEALT"):
			return 3;
		case -1016837116:
			return 5;
		case 0:
			return 0;
		case joaat("CONSECUTIVE_DAMAGE_TAKEN"):
			return 4;
		case joaat("NEARBY_ALLIES"):
			return 2;
		case 1416591065:
			return 1;
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

void func_1055()
{
	bool bVar0;
	bool bVar1;

	if (Global_1156096.f_21645[3 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 550, bVar0);
	if (Global_1156096.f_21645[4 /*209*/].f_208)
	{
		if (!func_919(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_1056()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_1057(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRAIN_EFFECT"):
			return "MP_ArrowDrain";
		case joaat("DISORIENT_EFFECT"):
			return "MP_ArrowDisorient";
		case joaat("TRAIL_EFFECT"):
			return "MP_ArrowTracking";
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			return "MP_MoonshineToxic";
		default:
			break;
	}
	return "";
}

int func_1058(int iParam0)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			return -3.757584E+08f;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			return -2.713979E-21f;
		case joaat("SLOW_AND_STEADY_VFX"):
			return 2.348818E-06f;
		default:
			break;
	}
	return 0;
}

void func_1059(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1203856[iVar0 /*8*/].f_5 == iParam0)
		{
			Global_1203856[iVar0 /*8*/].f_7 = 1;
			Global_1203856[iVar0 /*8*/].f_5 = 0;
		}
		iVar0++;
	}
}

void func_1060()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

int func_1061(int iParam0)
{
	int iVar0;

	if (!func_1036(iParam0))
	{
		return -1;
	}
	iVar0 = func_1037(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_1062(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1013(iParam0))
	{
		return false;
	}
	iVar0 = func_1002(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1015(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_1037(iVar2, 1) /*3*/];
		Var4 = { func_1063(iVar3) };
		if (iVar3 != iParam0 && Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_5 <= Var4.f_5)
		{
			return false;
		}
	}
	switch (Global_1156096.f_35859.f_3116[iVar0 /*31*/])
	{
		case -1606735498:
		case joaat("ON_HEADSHOT"):
		case joaat("ENTER_WEARING_HAT"):
		case joaat("ENTER_SPRINTING"):
		case joaat("ENTER_MOUNTED"):
		case joaat("ENTER_DUAL_WIELD"):
		case -971275364:
		case joaat("ON_KILL"):
		case joaat("ENTER_SCENARIO"):
		case joaat("ENTER_REVIVER"):
		case -193993646:
		case joaat("ENTER_ALLY_NEARBY"):
		case -23641105:
		case joaat("ON_DAMAGE_TAKEN"):
		case joaat("ENTER_MELEE"):
		case joaat("ON_DAMAGE_DEALT_FROM_HORSEBACK"):
		case 429965152:
		case joaat("ON_DAMAGE_TAKEN_FROM_HORSEBACK"):
		case joaat("ENTER_WINDED"):
		case joaat("ENTER_NO_HAT"):
		case joaat("ON_ENABLE"):
		case joaat("ENTER_EAGLE_EYE"):
		case joaat("ENTER_DEADEYE"):
		case joaat("ENTER_SCOPED"):
		case joaat("ENTER_COVER"):
		case 1305415806:
		case 1461424861:
		case 1691008805:
		case joaat("ENTER_DAMAGED"):
		case joaat("ON_DAMAGE_DEALT"):
		case joaat("ENTER_REVIVED"):
		case joaat("ENTER_LASSOING"):
		case joaat("ENTER_IN_VEHICLE"):
		case 2116793692:
			return true;
		case joaat("ENTER_FREEROAM_OR_COOP"):
			if (!func_1071() && !func_1072())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_1071())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1012(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1012(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				return false;
			}
			if (!GANG::_NETWORK_IS_IN_MY_GANG(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		case joaat("ALLY_ENTER_DEADEYE"):
			iVar1 = func_1012(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_1073(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_1074(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1012(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (PED::_GET_LASSOED_LASSOER(Global_1295619.f_3) != PLAYER::GET_PLAYER_PED(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			return true;
		default:
			break;
	}
	return false;
}

struct<31> func_1063(int iParam0)
{
	int iVar0;

	iVar0 = func_1002(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1064(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1070(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1065(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("SLIPPERY_BASTARD_VFX"):
			switch (iParam1)
			{
				case 0:
					return "PH_HEAD";
				case 1:
					return "CP_CHEST";
				case 2:
					return "CP_R_UpperArm";
				case 3:
					return "CP_L_UpperArm";
				default:
					break;
			}
			break;
	}
	return "";
}

void func_1066(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(Global_1203856[iVar0 /*8*/]) && !Global_1203856[iVar0 /*8*/].f_6)
		{
			Global_1203856[iVar0 /*8*/].f_5 = iParam0;
			Global_1203856[iVar0 /*8*/].f_1 = iParam1;
			Global_1203856[iVar0 /*8*/].f_2 = iParam2;
			Global_1203856[iVar0 /*8*/].f_3 = iParam3;
			Global_1203856[iVar0 /*8*/].f_4 = iParam4;
			Global_1203856[iVar0 /*8*/].f_6 = 1;
			return;
		}
		iVar0++;
	}
}

void func_1067()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_1068(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "Head_Shot_Ricco";
		default:
			break;
	}
	return "";
}

char* func_1069(int iParam0)
{
	switch (iParam0)
	{
		case -1822335806:
			return "RDRO_Ability_Cards_SFX_Sounds";
		default:
			break;
	}
	return "";
}

bool func_1070(int iParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar7;

	Var0 = -2.811747E+32f;
	Var0.f_1 = iParam0;
	Var0.f_2 = -5.324383E+23f;
	Var0.f_3 = 1;
	Var0.f_4 = iParam1;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, -5.324383E+23f))
	{
		*uParam2 = iParam0;
		uParam2->f_9 = iParam1;
		StringCopy(&(uParam2->f_1), "", 64);
		StringIntConCat(&(uParam2->f_1), iVar7, 64);
		DATAFILE::_PARSEDDATA_GET_SECTION(&iVar7, &Var0, 3.342414E-09f);
		uParam2->f_10.f_3 = func_1075(iVar7);
		uParam2->f_14.f_3 = uParam2->f_10.f_3;
		uParam2->f_18.f_3 = uParam2->f_10.f_3;
		switch (uParam2->f_10.f_3)
		{
			case 0:
				if (!DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_10), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 1:
				if (!DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_10.f_1), &Var0, -3.294982E+22f))
				{
				}
				break;
			case 2:
				if (!DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_10.f_2), &Var0, -3.294982E+22f))
				{
				}
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_14), &Var0, -5.878582E+37f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_14.f_1), &Var0, -5.878582E+37f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_14.f_2), &Var0, -5.878582E+37f);
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				DATAFILE::_PARSEDDATA_GET_INT(&(uParam2->f_18), &Var0, 6.468156E+19f);
				break;
			case 1:
				DATAFILE::_PARSEDDATA_GET_FLOAT(&(uParam2->f_18.f_1), &Var0, 6.468156E+19f);
				break;
			case 2:
				DATAFILE::_PARSEDDATA_GET_BOOL(&(uParam2->f_18.f_2), &Var0, 6.468156E+19f);
				break;
		}
		switch (uParam2->f_10.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_14.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		switch (uParam2->f_18.f_3)
		{
			case 0:
				break;
			case 1:
				break;
			case 2:
				break;
		}
		return true;
	}
	return false;
}

bool func_1071()
{
	return Global_1572887.f_7;
}

bool func_1072()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_213(func_126(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_956(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

bool func_1073(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_1076(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_1077(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_1074(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

int func_1075(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("INT"):
			iVar0 = 0;
			break;
		case joaat("FLOAT"):
			iVar0 = 1;
			break;
		case joaat("BOOL"):
			iVar0 = 2;
			break;
	}
	return iVar0;
}

bool func_1076(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_1077(int iParam0)
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
		func_1078(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1079(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_1078(int iParam0)
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
	func_1079(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1079(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

