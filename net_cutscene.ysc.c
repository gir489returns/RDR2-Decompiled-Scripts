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
	float fLocal_16 = 0f;
	var uLocal_17 = 4;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	bool bLocal_30 = false;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<351> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	fLocal_16 = 1.124895E-14f;
	bLocal_30 = true;
	Var0.f_8 = 2;
	Var0.f_8.f_1.f_11 = 2;
	Var0.f_8.f_1.f_18 = 2;
	Var0.f_8.f_1.f_39 = -1;
	Var0.f_8.f_1.f_40.f_11 = 2;
	Var0.f_8.f_1.f_40.f_18 = 2;
	Var0.f_8.f_1.f_40.f_39 = -1;
	Var0.f_89 = 4;
	Var0.f_89.f_1.f_8 = -1;
	Var0.f_89.f_1.f_11 = -1;
	Var0.f_89.f_1.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_11 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_8 = -1;
	Var0.f_89.f_1.f_15.f_15.f_15.f_11 = -1;
	Var0.f_150 = 6;
	Var0.f_150.f_1.f_9 = -1;
	Var0.f_150.f_1.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_150.f_1.f_13.f_13.f_13.f_13.f_13.f_9 = -1;
	Var0.f_229.f_1 = -1;
	Var0.f_234.f_2 = 6;
	Var0.f_234.f_3 = -1;
	Var0.f_241 = 2;
	Var0.f_241.f_1.f_1 = 4;
	Var0.f_241.f_1.f_1.f_1.f_2 = -1;
	Var0.f_241.f_1.f_1.f_1.f_6.f_2 = -1;
	Var0.f_241.f_1.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_241.f_1.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_241.f_1.f_27.f_1 = 4;
	Var0.f_241.f_1.f_27.f_1.f_1.f_2 = -1;
	Var0.f_241.f_1.f_27.f_1.f_1.f_6.f_2 = -1;
	Var0.f_241.f_1.f_27.f_1.f_1.f_6.f_6.f_2 = -1;
	Var0.f_241.f_1.f_27.f_1.f_1.f_6.f_6.f_6.f_2 = -1;
	Var0.f_299 = -1;
	Var0.f_299.f_1 = -1;
	Var0.f_309 = -1;
	Var0.f_309.f_1 = -1;
	Var0.f_329 = -1;
	Var0.f_349 = -1;
	Var0.f_350 = -1;
	Var0.f_326 = ScriptParam_0;
	Var0 = ScriptParam_0.f_1;
	func_1();
	func_2(&Var0);
	while (bLocal_30)
	{
		bLocal_30 = !func_3(&Var0);
		if (func_4(&Var0))
		{
			bLocal_30 = false;
		}
		BUILTIN::WAIT(0);
	}
	func_5(&Var0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
}

void func_2(var uParam0)
{
}

bool func_3(var uParam0)
{
	if (func_6(1, 1))
	{
		return true;
	}
	if (func_8(func_7(), 256, 0))
	{
		func_9(951, 1);
		return true;
	}
	if (!func_10(*uParam0))
	{
		if (func_12(func_11()))
		{
			return true;
		}
		if (func_13())
		{
			return true;
		}
	}
	if (func_14(uParam0))
	{
		func_15(0);
		return true;
	}
	if (func_16() >= 13)
	{
		return true;
	}
	if (func_17(uParam0) != 3 && func_17(uParam0) != 4)
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return true;
		}
	}
	if (func_18() == 9)
	{
		return true;
	}
	if (func_12(func_19(0)))
	{
		return true;
	}
	return false;
}

bool func_4(var uParam0)
{
	func_20(uParam0);
	switch (func_17(uParam0))
	{
		case 0:
			func_21(uParam0);
			break;
		case 1:
			if (!func_22(&(uParam0->f_1)))
			{
				func_23(uParam0);
			}
			func_24(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_26(uParam0);
			}
			break;
		case 2:
			if (!func_22(&(uParam0->f_1)))
			{
				func_27(uParam0);
			}
			func_28(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_29(uParam0);
			}
			break;
		case 3:
			if (!func_22(&(uParam0->f_1)))
			{
				func_30(uParam0);
			}
			func_31(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_32(uParam0);
			}
			break;
		case 4:
			if (!func_22(&(uParam0->f_1)))
			{
				func_33(uParam0);
			}
			func_34(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_35(uParam0);
			}
			break;
		case 5:
			if (!func_22(&(uParam0->f_1)))
			{
				func_36(uParam0);
			}
			func_37(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_38(uParam0);
			}
			break;
		case 6:
			if (!func_22(&(uParam0->f_1)))
			{
				func_39(uParam0);
			}
			func_40(uParam0);
			if (!func_25(&(uParam0->f_1)))
			{
				func_41(uParam0);
			}
			break;
		case 7:
			return true;
	}
	return false;
}

void func_5(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;

	if (func_17(uParam0) != 7)
	{
		func_42(uParam0);
	}
	if (Global_13)
	{
		Global_13 = 0;
	}
	if (Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
	{
		Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14 = 0;
	}
	if (Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
	{
		Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15 = 0;
	}
	if (uParam0->f_339)
	{
		func_43(uParam0, 0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_327, 7) && MISC::IS_BIT_SET(uParam0->f_327, 19))
	{
		func_44(*uParam0, &uVar0);
		if (uParam0->f_352)
		{
			func_45(*uParam0, &iVar1);
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), uVar0, iVar1, 0);
		}
		else if (uParam0->f_351)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), uVar0, 0, 0);
		}
		else if (uParam0->f_354)
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), uVar0, 0, 2);
		}
		else
		{
			TELEMETRY::_TELEMETRY_SHOP_CUTSCENE(func_46(*uParam0), uVar0, 0, 1);
		}
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && MISC::IS_BIT_SET(uParam0->f_327, 21))
	{
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		MISC::CLEAR_BIT(&(uParam0->f_327), 21);
	}
	if (VOLUME::DOES_VOLUME_EXIST(uParam0->f_360))
	{
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_360, false);
		VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_360, false);
		VOLUME::DELETE_VOLUME(uParam0->f_360);
	}
	if (func_47(uParam0))
	{
		func_48(uParam0);
	}
	if (6 == *uParam0)
	{
		iVar2 = 0;
		while (iVar2 < uParam0->f_8)
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar2 /*40*/].f_1, 6))
			{
				func_49();
			}
			iVar2++;
		}
	}
}

bool func_6(bool bParam0, bool bParam1)
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

struct<2> func_7()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_8(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_12(Global_1051268) && !func_50(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_51(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_52(iParam3, 255))
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
	if (func_13())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_12(Global_1051268))
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

void func_9(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_53(iParam0, &iVar0, &iVar1);
	if (!func_54(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_55(iVar0, iVar1);
}

bool func_10(var uParam0)
{
	return false;
}

struct<2> func_11()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_19(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_19(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_12(struct<2> Param0)
{
	if (!func_56(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_57(Param0))
	{
		return false;
	}
	return true;
}

bool func_13()
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
	if (!func_12(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_14(var uParam0)
{
	switch (func_58())
	{
		case 1:
			if (MISC::IS_BIT_SET(uParam0->f_327, 5))
			{
				return true;
			}
			break;
		case 2:
			if (MISC::IS_BIT_SET(uParam0->f_327, 4))
			{
				return true;
			}
			break;
	}
	return false;
}

void func_15(int iParam0)
{
	Global_1292081.f_11 = iParam0;
}

int func_16()
{
	return Global_1572887.f_196;
}

int func_17(var uParam0)
{
	return uParam0->f_1;
}

int func_18()
{
	return Global_1915643.f_20241;
}

struct<2> func_19(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_20(var uParam0)
{
	if (uParam0->f_328 >= 3)
	{
		uParam0->f_328 = 0;
		return;
	}
	uParam0->f_328++;
}

void func_21(var uParam0)
{
	func_59(uParam0);
}

bool func_22(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_4, *uParam0);
}

void func_23(var uParam0)
{
	func_60(&(uParam0->f_1));
	func_61(uParam0, *uParam0);
	func_62(*uParam0);
	if (*uParam0 != 5 && *uParam0 != 8)
	{
		func_63(uParam0);
	}
	func_64(uParam0);
}

void func_24(var uParam0)
{
	if (*uParam0 == 5 || *uParam0 == 8)
	{
		func_63(uParam0);
	}
	if (!func_65(uParam0))
	{
		return;
	}
	func_59(uParam0);
}

bool func_25(var uParam0)
{
	return MISC::IS_BIT_SET(uParam0->f_5, *uParam0);
}

void func_26(var uParam0)
{
	func_66(&(uParam0->f_1));
}

void func_27(var uParam0)
{
	func_60(&(uParam0->f_1));
}

void func_28(var uParam0)
{
	func_67(uParam0);
	func_68(uParam0);
	if (!func_69(uParam0))
	{
		return;
	}
	func_70(0);
	if (!func_71(uParam0))
	{
		return;
	}
	if (!func_72(uParam0))
	{
		return;
	}
	if (!func_73(uParam0))
	{
		return;
	}
	CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	if (CAM::GET_LETTER_BOX_RATIO() < 1f)
	{
		return;
	}
	func_59(uParam0);
}

void func_29(var uParam0)
{
	func_66(&(uParam0->f_1));
}

void func_30(var uParam0)
{
	bool bVar0;

	func_60(&(uParam0->f_1));
	func_74(*uParam0);
	func_75(uParam0, 0);
	if (MISC::IS_BIT_SET(uParam0->f_327, 6))
	{
		func_44(*uParam0, &bVar0);
		func_76(uParam0, bVar0, &(uParam0->f_299));
	}
}

void func_31(var uParam0)
{
	if (!MISC::IS_BIT_SET(uParam0->f_327, 2))
	{
		func_77(uParam0);
		if (MISC::IS_BIT_SET(uParam0->f_327, 2))
		{
			if (!uParam0->f_339)
			{
				func_43(uParam0, 1);
				func_78(uParam0);
				func_79(1);
			}
		}
		return;
	}
	func_80(uParam0);
	func_81(uParam0);
	if (MISC::IS_BIT_SET(uParam0->f_327, 7))
	{
		func_82(uParam0, &(uParam0->f_299));
		func_82(uParam0, &(uParam0->f_309));
	}
	if (!MISC::IS_BIT_SET(uParam0->f_327, 3))
	{
		func_83(uParam0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_327, 22))
	{
		func_84(uParam0);
	}
	if (uParam0->f_234.f_2 != 6)
	{
		func_85(uParam0);
	}
	func_86(uParam0);
	if (func_47(uParam0))
	{
		func_48(uParam0);
	}
	func_87(0, 0, 1);
	if (!func_88(uParam0) && !func_89(uParam0))
	{
		return;
	}
	func_59(uParam0);
}

void func_32(var uParam0)
{
	struct<4> Var0;

	func_66(&(uParam0->f_1));
	func_90(*uParam0, &Var0, 0, 0);
	if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Var0.f_3, 2f))
	{
		MISC::CLEAR_BIT(&(uParam0->f_327), 18);
	}
	func_43(uParam0, 0);
	func_91(&(uParam0->f_342));
	func_75(uParam0, 1);
	if (func_92(uParam0->f_341))
	{
		func_93(&(uParam0->f_341), 1, 1);
	}
	if (func_92(uParam0->f_346))
	{
		func_93(&(uParam0->f_346), 1, 1);
	}
	if (func_92(uParam0->f_348))
	{
		func_93(&(uParam0->f_348), 1, 1);
	}
	if (uParam0->f_234.f_2 != 6)
	{
		TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(uParam0->f_234.f_1);
	}
	func_94(uParam0, 1);
}

void func_33(var uParam0)
{
	func_60(&(uParam0->f_1));
	func_95(uParam0);
}

void func_34(var uParam0)
{
	func_87(0, 0, 1);
	func_96();
	if (!func_97(uParam0))
	{
		return;
	}
	func_59(uParam0);
}

void func_35(var uParam0)
{
	func_66(&(uParam0->f_1));
	func_98(uParam0);
	MISC::CLEAR_BIT(&(uParam0->f_327), 2);
}

void func_36(var uParam0)
{
	func_60(&(uParam0->f_1));
}

void func_37(var uParam0)
{
	vector3 vVar0;
	struct<8> Var3;

	func_96();
	if (!MISC::IS_BIT_SET(uParam0->f_327, 18))
	{
		func_59(uParam0);
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_327, 2))
	{
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, false, 256);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		vVar0 = { func_99(*uParam0, 0, PED::IS_PED_MALE(Global_33)) };
		func_90(*uParam0, &Var3, 0, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_338, &vVar0, Global_33, 0);
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_338, Var3.f_3, 0f, 0f, Var3.f_7, 2);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_338);
		MISC::SET_BIT(&(uParam0->f_327), 2);
	}
	else
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			CAM::DO_SCREEN_FADE_IN(500);
		}
		if (ANIMSCENE::IS_ANIM_SCENE_EXITING_THIS_FRAME(uParam0->f_338) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_338, false))
		{
			PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
			func_59(uParam0);
		}
	}
}

void func_38(var uParam0)
{
	func_66(&(uParam0->f_1));
}

void func_39(var uParam0)
{
	func_60(&(uParam0->f_1));
	func_62(*uParam0);
	if (!MISC::IS_BIT_SET(uParam0->f_327, 11))
	{
		func_94(uParam0, 0);
	}
	else if (!MISC::IS_BIT_SET(uParam0->f_327, 10))
	{
		func_94(uParam0, 0);
	}
	else
	{
		func_100(1);
		Global_1292081.f_12 = 1;
	}
}

void func_40(var uParam0)
{
	bool bVar0;

	func_87(0, 0, 1);
	bVar0 = true;
	if (!func_42(uParam0))
	{
		bVar0 = false;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_327, 0))
	{
		if (!func_101(*uParam0))
		{
			bVar0 = false;
		}
	}
	if (func_102(uParam0))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_103(*uParam0, 0);
		func_104(*uParam0, 1);
		func_105(uParam0);
		func_106(uParam0);
		func_59(uParam0);
	}
}

void func_41(var uParam0)
{
	func_66(&(uParam0->f_1));
}

bool func_42(var uParam0)
{
	if (!func_107(uParam0))
	{
		return false;
	}
	if (!func_108(uParam0))
	{
		return false;
	}
	func_109(uParam0);
	func_110(uParam0);
	if (PED::_GET_NUM_RESERVED_AMBIENT_PEDS_DESIRED() > 0)
	{
		PED::_UNRESERVE_AMBIENT_PEDS(5);
	}
	return true;
}

void func_43(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		func_111(1);
		func_112();
		WEAPON::_HIDE_PED_WEAPONS(Global_1295619.f_3, 2, true);
		PAD::SET_CONTROL_SHAKE_SUPPRESSED_ID(0, 0);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295619.f_3, false, true);
		UIFEED::UI_FEED_CLEAR_CHANNEL(7, true, false);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295619.f_3, true);
		if (func_113())
		{
			func_49();
		}
		func_114();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			CAM::STOP_GAMEPLAY_HINT(false);
		}
		if (func_115() || PED::_IS_PED_DRUNK(Global_1295619.f_3))
		{
			func_116(1);
			func_117();
			if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
		func_118();
		Global_13 = 1;
		func_119(Global_1295619.f_3);
		if (func_120(Global_1295619.f_3))
		{
			uParam0->f_345 = func_121(Global_1295619.f_3);
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295619.f_3, true, true);
		}
		func_122(0);
		uParam0->f_339 = 1;
		HUD::_ENABLE_HUD_CONTEXT(-3.228303E-09f);
		NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, true, 32, true);
		MISC::SET_BIT(&(uParam0->f_327), 21);
		func_123(0, 28);
	}
	else
	{
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(Global_1295619.f_3, true);
		PAD::CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(0);
		AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295619.f_3, false);
		func_111(0);
		func_124();
		Global_13 = 0;
		func_122(1);
		uParam0->f_339 = 0;
		HUD::_DISABLE_HUD_CONTEXT(-3.228303E-09f);
		if (!MISC::IS_BIT_SET(uParam0->f_327, 18) && MISC::IS_BIT_SET(uParam0->f_327, 21))
		{
			NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
			NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
			MISC::CLEAR_BIT(&(uParam0->f_327), 21);
		}
		func_123(1, 2);
	}
}

bool func_44(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 3:
		default:
			return false;
			*uParam1 = 1.853402E+37f;
			return true;
		case 4:
			*uParam1 = -2.919324E+23f;
			return true;
		case 5:
			*uParam1 = -4.629755E-24f;
			return true;
		case 6:
			*uParam1 = 2.884954E+11f;
			return true;
		case 7:
			*uParam1 = 4.080975E-29f;
			return true;
	}
}

bool func_45(int iParam0, var uParam1)
{
	*uParam1 = 0;
	switch (iParam0)
	{
		case 3:
			*uParam1 = 2.470745E-30f;
			return true;
		default:
			break;
	}
	return false;
}

int func_46(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2.097883E-16f;
		case 2:
			return -2.718455E-10f;
		case 3:
			return -3.637621E+12f;
		case 4:
			return 3.077226E+22f;
		case 5:
			return -11903.19f;
		case 6:
			return 1.334234E-15f;
		case 7:
			return 1.464907E-27f;
		case 8:
			return 3.545345E+37f;
		case 9:
			return 4.410467E+27f;
		default:
			break;
	}
	return 0;
}

bool func_47(var uParam0)
{
	return uParam0->f_296 != 0;
}

void func_48(var uParam0)
{
	if (uParam0->f_296 == 0)
	{
		return;
	}
	UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(uParam0->f_296);
	uParam0->f_296 = 0;
}

void func_49()
{
	func_125(0);
}

bool func_50(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_51(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_52(int iParam0, int iParam1)
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

void func_53(int iParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_54(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_126(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_127(iParam0))
	{
		return false;
	}
	if (func_128(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_129(iParam0, 1)) || func_130(32768))
	{
		if (!func_129(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_131())
	{
		return false;
	}
	return true;
}

void func_55(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_56(int iParam0)
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

int func_57(int iParam0)
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

int func_58()
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(Global_1295619.f_11);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_132(Global_1295619.f_11))
	{
		return 1;
	}
	return 2;
}

void func_59(var uParam0)
{
	int iVar0;

	uParam0->f_1.f_1 = uParam0->f_1;
	MISC::SET_BIT(&(uParam0->f_1.f_5), uParam0->f_1.f_1);
	MISC::CLEAR_BIT(&(uParam0->f_1.f_4), uParam0->f_1.f_1);
	iVar0 = uParam0->f_1;
	iVar0++;
	uParam0->f_1 = iVar0;
	if (uParam0->f_1 == 8)
	{
		uParam0->f_1 = 7;
	}
	Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/] = uParam0->f_1;
}

void func_60(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_4), *uParam0);
}

int func_61(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
		default:
			return 0;
			uParam0->f_320 = { -1000764464, -996174887, 1109979745 };
			uParam0->f_319 = VOLUME::CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@mpgvo_int1", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -1000696218, -995695657, 1110017311 /* Float: 42.38f */ };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			return 1;
		case 2:
			uParam0->f_320 = { -1000764464, -996174887, 1109979745 };
			uParam0->f_319 = VOLUME::CREATE_VOLUME_BOX(-871.3538f, -1273.499f, 42.87627f, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@mpgvo_int2a", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -1000696218, -995695657, 1110017311 /* Float: 42.38f */ };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 3);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_3), "cutscene@mpgvo_int2b", 64);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_11[0 /*3*/]), "1-Male", 24);
			StringCopy(&(uParam0->f_8[1 /*40*/].f_11[1 /*3*/]), "2-Female", 24);
			uParam0->f_8[1 /*40*/].f_33 = { -1000696218, -995695657, 1110017311 /* Float: 42.38f */ };
			uParam0->f_8[1 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[1 /*40*/].f_2 = 256;
			MISC::SET_BIT(&(uParam0->f_8[1 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[1 /*40*/].f_1), 4);
			return 1;
		case 3:
			uParam0->f_320 = { 1151934055, -995931268, 1117246102 };
			uParam0->f_319 = VOLUME::CREATE_VOLUME_BOX(uParam0->f_320, 0f, 0f, 0f, 5f, 5f, 5f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@BHINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 1151989432, -995934536, 1117358391 };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "BHINT_INT_P3_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_327), 7);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			uParam0->f_355 = 15000;
			return 1;
		case 4:
			uParam0->f_320 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			uParam0->f_89[0 /*15*/] = 5.565999E-21f;
			uParam0->f_89[0 /*15*/].f_8 = func_133();
			uParam0->f_89[0 /*15*/].f_2 = { -1012949287, 1145520718, 1122616738 };
			uParam0->f_89[0 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[0 /*15*/].f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0 /*15*/].f_9 = 2.574461E-25f;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_327), 7);
			MISC::SET_BIT(&(uParam0->f_327), 9);
			MISC::SET_BIT(&(uParam0->f_327), 11);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			uParam0->f_355 = 15000;
			return 1;
		case 5:
			uParam0->f_320 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@COINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "payLater", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "COINT_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "payNow", 24);
			switch (func_134())
			{
				case 135:
					uParam0->f_8[0 /*40*/].f_39 = 0;
					break;
				case 136:
					uParam0->f_8[0 /*40*/].f_39 = 1;
					break;
				case 137:
					uParam0->f_8[0 /*40*/].f_39 = 2;
					break;
				case 138:
					uParam0->f_8[0 /*40*/].f_39 = 3;
					break;
				case 139:
					uParam0->f_8[0 /*40*/].f_39 = 4;
					break;
				case 140:
					uParam0->f_8[0 /*40*/].f_39 = 5;
					break;
				case 141:
					uParam0->f_8[0 /*40*/].f_39 = 6;
					break;
				case 142:
					uParam0->f_8[0 /*40*/].f_39 = 7;
					break;
				case 143:
					uParam0->f_8[0 /*40*/].f_39 = 8;
					break;
				case 144:
					uParam0->f_8[0 /*40*/].f_39 = 9;
					break;
				case 145:
					uParam0->f_8[0 /*40*/].f_39 = 10;
					break;
				case 146:
					uParam0->f_8[0 /*40*/].f_39 = 11;
					break;
			}
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_327), 7);
			MISC::SET_BIT(&(uParam0->f_327), 9);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			MISC::SET_BIT(&(uParam0->f_327), 20);
			uParam0->f_150[0 /*13*/].f_1 = 9.673017E+07f;
			StringCopy(&(uParam0->f_150[0 /*13*/].f_9.f_1), "Pigeoncage", 24);
			uParam0->f_150[0 /*13*/].f_2 = { -1070386381 /* Float: -2.8f */, 1063004406 /* Float: 0.86f */, 1071225242 /* Float: 1.7f */ };
			uParam0->f_150[1 /*13*/].f_1 = -5053394f;
			StringCopy(&(uParam0->f_150[1 /*13*/].f_9.f_1), "Nazar_Chair", 24);
			uParam0->f_150[1 /*13*/].f_2 = { -1087834685 /* Float: -0.66f */, -1065311273 /* Float: -4.02f */, -1114678231 /* Float: -0.07f */ };
			uParam0->f_150[2 /*13*/].f_1 = 1.776842E+31f;
			StringCopy(&(uParam0->f_150[2 /*13*/].f_9.f_1), "CollectorBox", 24);
			uParam0->f_150[2 /*13*/].f_2 = { 1048911544 /* Float: 0.26f */, -1073909596 /* Float: -1.98f */, 1065688760 /* Float: 1.04f */ };
			uParam0->f_150[3 /*13*/].f_1 = -3.26097E+38f;
			StringCopy(&(uParam0->f_150[3 /*13*/].f_9.f_1), "Collector_Drawer_2", 24);
			uParam0->f_150[3 /*13*/].f_2 = { -1090519040 /* Float: -0.5f */, -1098907648 /* Float: -0.25f */, 1071309128 /* Float: 1.71f */ };
			uParam0->f_355 = 20000;
			return 1;
		case 6:
			uParam0->f_320 = { 1152702390, 1136357605, 1118946901 };
			uParam0->f_319 = VOLUME::CREATE_VOLUME_BOX(uParam0->f_320, 0f, 0f, 0f, 13.868f, 15.947f, 8.828f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@moon_int", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 1152711967, 1136254976, 1118952882 };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "refuse", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "MOON_INT_P2A1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "ACCEPT", 24);
			uParam0->f_89[0 /*15*/] = 5.565999E-21f;
			uParam0->f_89[0 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[0 /*15*/].f_11.f_1), "JB_Cripps", 24);
			uParam0->f_89[0 /*15*/].f_8 = func_133();
			uParam0->f_89[0 /*15*/].f_9 = 2.574461E-25f;
			uParam0->f_89[1 /*15*/] = -5.403115E+29f;
			uParam0->f_89[1 /*15*/].f_11 = 0;
			StringCopy(&(uParam0->f_89[1 /*15*/].f_11.f_1), "MAGGIE", 24);
			uParam0->f_89[1 /*15*/].f_8 = 1.863516E-37f;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_327), 7);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			MISC::SET_BIT(&(uParam0->f_327), 17);
			uParam0->f_355 = 15000;
			return 1;
		case 7:
			uParam0->f_320 = { -991803802, -1011269632, 1126360678 /* Float: 162.9f */ };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@nat_int", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { -991803802, -1011266355, 1126979076 };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/].f_4), "decline", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "NAT_INT_P2_T06_Shot_2", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/].f_4), "ACCEPT", 24);
			uParam0->f_357 = { -991773141, -1011318302, 1134397914 };
			if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_360))
			{
				uParam0->f_360 = VOLUME::_CREATE_ANTI_GRIEF_VOLUME(-9.406495E-20f, -1809.454f, -370.597f, 163.302f, 0f, 0f, -88.451f, 1.53f, 0.709f, 2.927f);
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_PLAYER(uParam0->f_360, true);
				VOLUME::_SET_ANTI_GRIEF_VOLUME_BLOCKS_HORSE(uParam0->f_360, true);
			}
			StringCopy(&(uParam0->f_330), "script@mp@naturalist@nat@ig1_getup", 64);
			MISC::SET_BIT(&(uParam0->f_327), 18);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 5);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			MISC::SET_BIT(&(uParam0->f_327), 7);
			MISC::SET_BIT(&(uParam0->f_327), 17);
			uParam0->f_355 = 15000;
			return 1;
		case 8:
			uParam0->f_320 = { 0f, 0f, 0f };
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@har_mcs1", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "har_mcs1", 24);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			uParam0->f_150[0 /*13*/].f_1 = -8.677851E+31f;
			StringCopy(&(uParam0->f_150[0 /*13*/].f_9.f_1), "Harriet_Tonic_Box", 24);
			uParam0->f_150[0 /*13*/].f_2 = { Vector(1116940534, -989507707, -989303439) - Vector(1116878039, -989508959, -989305048) };
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			MISC::SET_BIT(&(uParam0->f_327), 9);
			MISC::SET_BIT(&(uParam0->f_327), 20);
			return 1;
		case 9:
			uParam0->f_320 = { 1159565722, -996466688 /* Float: -1241f */, 1112276992 /* Float: 51f */ };
			uParam0->f_319 = VOLUME::CREATE_VOLUME_CYLINDER(uParam0->f_320, 0f, 0f, 0f, 11.8675f, 12.9474f, 8.828214f);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@LAW_INT", 64);
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(func_135(PLAYER::PLAYER_ID()), 2512.2f, -1242.8f, 50f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(func_135(PLAYER::PLAYER_ID()), 2519.3f, -1249.5f, 50f, true) && MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/])))
			{
				StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "leftEntry", 24);
			}
			else
			{
				StringCopy(&(uParam0->f_8[0 /*40*/].f_11[0 /*3*/]), "rightEntry", 24);
			}
			StringCopy(&(uParam0->f_8[0 /*40*/].f_11[1 /*3*/]), "", 24);
			uParam0->f_8[0 /*40*/].f_33 = { 1159571751, -996400005, 1111766784 };
			uParam0->f_8[0 /*40*/].f_36 = { 0f, 0f, 0f };
			uParam0->f_8[0 /*40*/].f_2 = 256;
			StringCopy(&(uParam0->f_229.f_1.f_1), "Wagon", 24);
			StringCopy(&(uParam0->f_234.f_3.f_1), "Law_Evidence", 24);
			uParam0->f_234.f_1 = 4.987635E+19f;
			uParam0->f_234.f_2 = 0;
			MISC::SET_BIT(&(uParam0->f_8[0 /*40*/].f_1), 2);
			MISC::SET_BIT(&(uParam0->f_327), 12);
			MISC::SET_BIT(&(uParam0->f_327), 14);
			MISC::SET_BIT(&(uParam0->f_327), 22);
			MISC::SET_BIT(&(uParam0->f_327), 17);
			return 1;
	}
}

void func_62(int iParam0)
{
	if (!func_136(iParam0))
	{
		return;
	}
	if (Global_1056554[Global_1295619 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 != -1)
	{
		Global_1056554[Global_1295619 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 = -1;
	}
}

int func_63(var uParam0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;

	if (MISC::IS_BIT_SET(uParam0->f_327, 9) && func_137(uParam0->f_320))
	{
		if (!func_138(*uParam0, &vVar0, &vVar3, 1))
		{
		}
		else
		{
			if (func_139(uParam0->f_320, vVar0))
			{
				return 0;
			}
			uParam0->f_320 = { vVar0 };
			uParam0->f_323 = { vVar3 };
			iVar6 = 0;
			while (iVar6 < 2)
			{
				uParam0->f_8[iVar6 /*40*/].f_33 = { vVar0 };
				uParam0->f_8[iVar6 /*40*/].f_36 = { vVar3 };
				iVar6++;
			}
			return 1;
		}
	}
	else if (func_137(uParam0->f_320))
	{
	}
	return 0;
}

void func_64(var uParam0)
{
	vector3 vVar0;

	switch (*uParam0)
	{
		case 4:
		default:
			break;
	}
	return;
	vVar0 = { func_140(Global_1295619) };
	switch (vVar0.y)
	{
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
		default:
			return;
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INT", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { -1012949287, 1145520718, 1122616738 };
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INTB", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4B1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4B1_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { -983161098, -987502342, -1050251624 };
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
			StringCopy(&(uParam0->f_8[0 /*40*/].f_3), "cutscene@TRINT_INTC", 64);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[0 /*7*/]), "TRINT_INT_P4C1_T01_Shot_1", 32);
			StringCopy(&(uParam0->f_8[0 /*40*/].f_18[1 /*7*/]), "TRINT_INT_P4C1_T01_Shot_1", 32);
			uParam0->f_89[0 /*15*/].f_2 = { 1160803779, -995860726, 1110903357 /* Float: 45.76f */ };
			break;
	}
}

bool func_65(var uParam0)
{
	switch (func_141(uParam0))
	{
		case 0:
			PED::_RESERVE_AMBIENT_PEDS(5);
			func_142(uParam0, 1);
			break;
		case 1:
			if (func_143(uParam0))
			{
				func_142(uParam0, 2);
			}
			break;
		case 2:
			if (func_144(uParam0))
			{
				func_142(uParam0, 3);
			}
			break;
		case 3:
			func_145(uParam0);
			func_142(uParam0, 4);
			break;
		case 4:
			func_142(uParam0, 5);
			break;
		case 5:
			return true;
	}
	return false;
}

void func_66(var uParam0)
{
	MISC::SET_BIT(&(uParam0->f_5), *uParam0);
}

void func_67(var uParam0)
{
	bool bVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 3) || MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 4))
		{
			bVar0 = true;
		}
		iVar1++;
	}
	if (bVar0)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_327, 4) && !MISC::IS_BIT_SET(uParam0->f_327, 5))
		{
			switch (func_58())
			{
				case 2:
					MISC::SET_BIT(&(uParam0->f_327), 5);
					break;
				case 1:
					MISC::SET_BIT(&(uParam0->f_327), 4);
					break;
			}
		}
	}
}

void func_68(var uParam0)
{
	struct<19> Var0;
	char* sVar19;
	char* sVar20;
	int iVar21;
	int iVar22;

	switch (func_146(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_147(uParam0) == 0)
			{
				func_148(uParam0, 0);
				return;
			}
			switch (func_147(uParam0))
			{
				case 1:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_LEADER";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_LEADER";
					break;
				case 3:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_WANTED";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_WANTED";
					break;
				case 2:
					sVar19 = "MP_FLOW_CUTSCENE_ALERT_TITLE_IN_PROGRESS";
					sVar20 = "MP_FLOW_CUTSCENE_ALERT_SUB_IN_PROGRESS";
					break;
			}
			Var0.f_7.f_3 = 1;
			Var0.f_7 = -4.613104E-38f;
			func_149(uParam0, Var0, sVar19, sVar20);
			func_148(uParam0, 2);
			break;
		case 2:
			if (!func_47(uParam0))
			{
				return;
			}
			iVar21 = func_150();
			if (iVar21 != -1.695322E-18f)
			{
				iVar22 = PED::GET_MOUNT(Global_1295619.f_3);
				if (ENTITY::DOES_ENTITY_EXIST(iVar22))
				{
					func_151(iVar22, 1, 1);
				}
				func_152(Global_1295619.f_12, 0f, -1f, -1f, 1, 1, 1);
				func_48(uParam0);
				func_148(uParam0, 3);
			}
			break;
		case 3:
			if (func_153(255) == 1)
			{
				func_148(uParam0, 0);
				func_154(uParam0, 0);
			}
			break;
	}
}

bool func_69(var uParam0)
{
	int iVar0;

	if (!func_155(*uParam0))
	{
		iVar0 = 1;
		if (func_156(*uParam0))
		{
			if (Global_1295619.f_11 != Global_1295619)
			{
				iVar0 = 0;
			}
		}
		if (func_157(uParam0) && iVar0)
		{
			if (func_158())
			{
				return true;
			}
		}
		return false;
	}
	if (Global_1295619.f_11 == Global_1295619 || !GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		if (func_159(*uParam0) || func_157(uParam0))
		{
			if (func_158())
			{
				return true;
			}
		}
	}
	else if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		if (Global_1295619.f_11 >= 32 || Global_1295619.f_11 < 0)
		{
			return false;
		}
		if (func_160(*uParam0, PLAYER::INT_TO_PLAYERINDEX(Global_1295619.f_11)) == 3)
		{
			if (!func_161(*uParam0))
			{
				return true;
			}
			else if (func_157(uParam0))
			{
				func_162(uParam0, 2);
			}
		}
		else if (func_157(uParam0))
		{
			if (!func_163())
			{
				if (!PED::IS_PED_HOGTIED(Global_1295619.f_3))
				{
					func_162(uParam0, 1);
				}
			}
		}
	}
	return false;
}

void func_70(bool bParam0)
{
	if (func_164(bParam0))
	{
		func_165(func_18(), 0);
	}
}

bool func_71(var uParam0)
{
	if (!Global_1295619.f_17[Global_1295619])
	{
		return false;
	}
	if (func_166())
	{
		return false;
	}
	if (!func_167(255))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(Global_1295619.f_3))
	{
		return false;
	}
	if (PED::IS_PED_HOGTIED(Global_1295619.f_3))
	{
		TASK::UNHOGTIE_PED(Global_1295619.f_3, 3, 0, 0, 0, 8f);
		return false;
	}
	if (func_168(Global_1295619.f_5, 1, 0, 1))
	{
		if (Global_1295619.f_11 == Global_1295619)
		{
			func_162(uParam0, 3);
		}
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_1295619.f_3, true))
	{
		return false;
	}
	if (Global_1108965.f_775.f_28 == 6)
	{
		return false;
	}
	if (func_164(0))
	{
		return false;
	}
	if (func_153(255) != 1)
	{
		return false;
	}
	return true;
}

bool func_72(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5[2];
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	switch (func_169(uParam0))
	{
		case 0:
			func_170(uParam0);
			func_171(uParam0, 1);
			break;
		case 1:
			iVar0 = 0;
			while (iVar0 < 2)
			{
				if (!func_172(uParam0, iVar0))
				{
				}
				else
				{
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
					{
						switch (func_58())
						{
							case 2:
								Jump @353; //curOff = 144
								Jump @154; //curOff = 147
								return false;
							}
							else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
							{
								switch (func_58())
								{
									case 1:
										Jump @353; //curOff = 197
										Jump @207; //curOff = 200
										return false;
									}
									iVar2 = 0;
									while (iVar2 < 4)
									{
										if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar2 /*15*/].f_1))
										{
										}
										else if (uParam0->f_89[iVar2 /*15*/].f_11 == -1)
										{
										}
										else if (uParam0->f_89[iVar2 /*15*/].f_11 != iVar0)
										{
										}
										else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_89[iVar2 /*15*/].f_11.f_1)))
										{
										}
										else
										{
											ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89[iVar2 /*15*/].f_1, false);
											ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_89[iVar2 /*15*/].f_11.f_1), uParam0->f_89[iVar2 /*15*/].f_1, 0);
										}
										iVar2++;
									}
								}
								iVar0++;
							}
							func_171(uParam0, 2);
							break;
						case 2:
							iVar0 = 0;
							while (iVar0 < 2)
							{
								if (!func_172(uParam0, iVar0))
								{
								}
								else
								{
									if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
									{
										switch (func_58())
										{
											case 2:
												Jump @579; //curOff = 436
												Jump @446; //curOff = 439
												return false;
											}
											else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
											{
												switch (func_58())
												{
													case 1:
														Jump @579; //curOff = 489
														Jump @499; //curOff = 492
														return false;
													}
													if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
													{
													}
													else if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 2))
													{
													}
													else
													{
														uParam0->f_241[iVar0 /*27*/] = func_173(*uParam0, iVar0);
														if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&(uParam0->f_241[iVar0 /*27*/])))
														{
														}
														else
														{
															iVar0++;
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_172(uParam0, iVar0))
																{
																}
																else
																{
																	iVar1 = 0;
																	while (iVar1 < 32)
																	{
																		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_241[iVar0 /*27*/]), iVar1))
																		{
																		}
																		else
																		{
																			iVar3++;
																		}
																		iVar1++;
																	}
																	uParam0->f_241[iVar0 /*27*/].f_26 = iVar3;
																	iVar3 = 0;
																}
																iVar0++;
															}
															func_171(uParam0, 3);
															Jump @1791; //curOff = 689
															iVar0 = 0;
															while (iVar0 < 2)
															{
																if (!func_172(uParam0, iVar0))
																{
																	iVar5[iVar0] = 1;
																}
																else if (!func_155(*uParam0))
																{
																	iVar8 = PLAYER::INT_TO_PLAYERINDEX(Global_1295619);
																	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_241[iVar0 /*27*/]), iVar1))
																	{
																		if (func_174(uParam0, iVar8, iVar0, 0))
																		{
																			SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_241[iVar0 /*27*/]), iVar1);
																		}
																		else
																		{
																			Jump @802; //curOff = 792
																			iVar5[iVar0] = 1;
																			Jump @1301; //curOff = 802
																			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
																			{
																				switch (func_58())
																				{
																					case 2:
																						iVar5[iVar0] = 1;
																						Jump @1301; //curOff = 852
																						Jump @862; //curOff = 855
																						return false;
																					}
																					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
																					{
																						switch (func_58())
																						{
																							case 1:
																								iVar5[iVar0] = 1;
																								Jump @1301; //curOff = 912
																								Jump @922; //curOff = 915
																								return false;
																							}
																							iVar2 = 0;
																							iVar1 = 0;
																							while (iVar1 < 4)
																							{
																								if (func_175(uParam0, iVar0, iVar1, 0))
																								{
																									if (func_176(uParam0, iVar0, iVar1))
																									{
																										if (!uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_1)
																										{
																											PED::REMOVE_TAG_FROM_META_PED(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], -5.426139E-06f, 1);
																											PED::_UPDATE_PED_VARIATION(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], false, true, true, true, false);
																											uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_1 = 1;
																										}
																										else
																										{
																											iVar2++;
																											Jump @1060; //curOff = 1054
																											Jump @1067; //curOff = 1057
																											iVar5[iVar0] = 1;
																										}
																										iVar1++;
																										if (iVar2 != uParam0->f_241[iVar0 /*27*/].f_26)
																										{
																											iVar5[iVar0] = 0;
																										}
																										else
																										{
																											iVar5[iVar0] = 1;
																										}
																										else
																										{
																											iVar1 = 0;
																											while (iVar1 < 32)
																											{
																												if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(uParam0->f_241[iVar0 /*27*/]), iVar1))
																												{
																												}
																												else
																												{
																													iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
																													if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar8))
																													{
																													}
																													else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
																													{
																													}
																													else
																													{
																														iVar10 = -1;
																														if (!func_155(*uParam0))
																														{
																															iVar10 = 0;
																														}
																														else
																														{
																															iVar9 = 0;
																															while (iVar9 < 7)
																															{
																																if (Global_1056554[Global_1295619.f_11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[iVar9] == iVar8)
																																{
																																	iVar10 = iVar9;
																																}
																																iVar9++;
																															}
																														}
																														if (iVar10 != -1)
																														{
																															if (func_174(uParam0, iVar8, iVar0, iVar10))
																															{
																																SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(uParam0->f_241[iVar0 /*27*/]), iVar1);
																															}
																															else
																															{
																																iVar1++;
																																iVar0++;
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!iVar5[iVar0])
																																	{
																																		bVar11 = true;
																																	}
																																	iVar0++;
																																}
																																if (!bVar11)
																																{
																																	func_171(uParam0, 4);
																																}
																																Jump @1791; //curOff = 1354
																																iVar0 = 0;
																																while (iVar0 < 2)
																																{
																																	if (!func_172(uParam0, iVar0))
																																	{
																																	}
																																	else
																																	{
																																		if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
																																		{
																																			switch (func_58())
																																			{
																																				case 2:
																																					Jump @1650; //curOff = 1421
																																					Jump @1431; //curOff = 1424
																																					return false;
																																				}
																																				else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
																																				{
																																					switch (func_58())
																																					{
																																						case 1:
																																							Jump @1650; //curOff = 1474
																																							Jump @1484; //curOff = 1477
																																							return false;
																																						}
																																						iVar1 = 0;
																																						while (iVar1 < 4)
																																						{
																																							if (!func_175(uParam0, iVar0, iVar1, 1))
																																							{
																																							}
																																							else if (uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2 != uParam0->f_8[iVar0 /*40*/])
																																							{
																																							}
																																							else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2.f_1)))
																																							{
																																							}
																																							else
																																							{
																																								ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], false);
																																								ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2, &(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/].f_2.f_1), uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], 0);
																																							}
																																							iVar1++;
																																						}
																																					}
																																					iVar0++;
																																				}
																																				if (MISC::IS_BIT_SET(uParam0->f_327, 20))
																																				{
																																					func_171(uParam0, 5);
																																				}
																																				else
																																				{
																																					func_171(uParam0, 6);
																																				}
																																				Jump @1791; //curOff = 1690
																																				iVar4 = 0;
																																				while (iVar4 <= 5)
																																				{
																																					if (!func_177(uParam0, iVar4))
																																					{
																																					}
																																					else if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iVar4 /*13*/]))
																																					{
																																					}
																																					else
																																					{
																																						ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_8[0 /*40*/], &(uParam0->f_150[iVar4 /*13*/].f_9.f_1), uParam0->f_150[iVar4 /*13*/], 0);
																																					}
																																					iVar4++;
																																				}
																																				func_171(uParam0, 6);
																																				Jump @1791; //curOff = 1784
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
																									}
																								}
																							}
																						}
																					}
																				}
																			}
																			default:
																				break;
																	}
																}

bool func_73(var uParam0)
{
	var uVar0;

	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (PED::IS_PED_ON_MOUNT(Global_1295619.f_3))
			{
				func_178(&uVar0, 2);
				func_178(&uVar0, 256);
				if (func_179(Global_1295619.f_3, &uVar0, 32, 0, 0, 3f, 100, 0, 0))
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
	return true;
}

void func_74(int iParam0)
{
	if (!func_136(iParam0))
	{
		return;
	}
	if (Global_1295619.f_11 == Global_1295619 && Global_1056554[Global_1295619 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 == -1)
	{
		Global_1056554[Global_1295619 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 = NETWORK::GET_CLOUD_TIME_AS_INT();
	}
}

void func_75(var uParam0, int iParam1)
{
}

void func_76(var uParam0, bool bParam1, int* iParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	struct<17> Var4;

	iVar0 = func_180(bParam1, 0, 1, -1, 1);
	if (!func_181(bParam1, iVar0, 1))
	{
		return;
	}
	if (func_182(bParam1))
	{
		bVar1 = func_183(bParam1, 1);
		bVar2 = func_184(bVar1, iVar0, 0);
	}
	else
	{
		bVar2 = func_185(bParam1, 3.161818E-36f, 0);
	}
	if (bVar2 != 0)
	{
		fVar3 = func_186(bVar2);
	}
	if (func_187(iParam2, bParam1, 1, 1, iVar0, -1, 1))
	{
		TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(iParam2->f_1, -2.896158E-18f, -2.896158E-18f);
		if (bVar2 != 0)
		{
			TELEMETRY::_TELEMETRY_COUPON(&(Global_1297394.f_67.f_6), func_188(bVar2), bVar2, fVar3, bParam1, -2.896158E-18f);
		}
		func_189(bParam1);
		Var4.f_7 = -5.149929E+33f;
		Var4.f_16 = -1;
		Var4.f_6 = 1;
		if (func_182(bParam1))
		{
			uParam0->f_356 = func_184(func_183(bParam1, 1), iVar0, 0);
		}
		else
		{
			uParam0->f_356 = func_185(bParam1, iVar0, 0);
		}
		Var4.f_16 = func_186(uParam0->f_356);
		func_190(iParam2->f_1, Var4);
		MISC::SET_BIT(&(uParam0->f_327), 10);
	}
}

void func_77(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				if (func_58() != 1)
				{
				}
				else
				{
					Jump @90; //curOff = 58
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						if (func_58() != 2)
						{
						}
						else if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
						{
						}
						else if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[iVar0 /*40*/], false))
						{
							func_191(uParam0, iVar0);
							ANIMSCENE::START_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
							return;
						}
						else
						{
							bVar1 = true;
							if (MISC::IS_BIT_SET(uParam0->f_327, 15))
							{
								func_94(uParam0, 0);
							}
						}
						iVar0++;
						if (bVar1)
						{
							MISC::SET_BIT(&(uParam0->f_327), 2);
						}
					}
				}
			}
		}
	}
}

void func_78(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	func_192();
	vVar0 = { func_193(*uParam0) };
	if (func_194(vVar0))
	{
		func_195(vVar0, 0);
	}
}

void func_79(int iParam0)
{
	func_196(1);
}

void func_80(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else if (!func_137(uParam0->f_357))
		{
			if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 9))
			{
				iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_357);
				if (INTERIOR::IS_VALID_INTERIOR(iVar1))
				{
					STREAMING::LOAD_SCENE_START_SPHERE(uParam0->f_357, 20f, 0);
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
					MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 9);
				}
			}
		}
		iVar0++;
	}
}

void func_81(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else if (MISC::IS_BIT_SET(uParam0->f_327, 7))
		{
			if (6 == *uParam0)
			{
				func_197(uParam0, iVar0);
			}
			else
			{
				func_198(uParam0, iVar0);
			}
			func_199(uParam0);
		}
		iVar0++;
	}
}

void func_82(var uParam0, var uParam1)
{
	bool bVar0;
	var uVar1;
	struct<5> Var5;
	int iVar26;

	Var5 = -1;
	Var5.f_4.f_7 = -5.149929E+33f;
	Var5.f_4.f_16 = -1;
	if (!func_44(*uParam0, &bVar0))
	{
		return;
	}
	if (uParam1->f_1 == -1)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_327, 10))
	{
		return;
	}
	iVar26 = func_200(uParam1);
	switch (iVar26)
	{
		case 1:
		case 5:
			break;
		case 2:
		case 4:
			uParam1->f_1 = -1;
			break;
		case 3:
			if (uParam0->f_356 != 0 && func_201(uParam1->f_1, &uVar1))
			{
				func_202(uParam1->f_1, &Var5);
				TELEMETRY::_TELEMETRY_COUPON(&uVar1, func_188(uParam0->f_356), uParam0->f_356, Var5.f_4.f_16, bVar0, -2.896158E-18f);
			}
			uParam1->f_1 = -1;
			uParam0->f_356 = 0;
			func_203(1);
			break;
	}
}

void func_83(var uParam0)
{
	func_204(uParam0);
	func_205(uParam0);
	func_86(uParam0);
	MISC::SET_BIT(&(uParam0->f_327), 3);
}

void func_84(var uParam0)
{
	float fVar0;
	var uVar1;

	switch (*uParam0)
	{
		case 9:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_229))
			{
				uParam0->f_229 = ANIMSCENE::_GET_ANIM_SCENE_VEHICLE(uParam0->f_8[0 /*40*/], func_206(uParam0->f_229.f_1.f_1), false);
				return;
			}
			if (!VEHICLE::IS_VEHICLE_WINDOW_INTACT(uParam0->f_229, 3))
			{
				return;
			}
			ENTITY::FIND_ANIM_EVENT_PHASE("cutscene", "LAW_INT", "WINDOW", &fVar0, &uVar1);
			if (fVar0 <= ANIMSCENE::GET_ANIM_SCENE_PHASE(uParam0->f_8[0 /*40*/]))
			{
				VEHICLE::REMOVE_VEHICLE_WINDOW(uParam0->f_229, 3);
				MISC::CLEAR_BIT(&(uParam0->f_327), 22);
			}
			break;
		default:
			break;
	}
}

void func_85(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
	{
		uParam0->f_234 = ANIMSCENE::_GET_ANIM_SCENE_OBJECT(uParam0->f_8[0 /*40*/], func_206(uParam0->f_234.f_3.f_1), false);
	}
	func_207(uParam0);
}

void func_86(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (MISC::IS_BIT_SET(uParam0->f_327, 13))
	{
		return;
	}
	if (!func_208(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_209(func_134(), 1);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, false);
	MISC::SET_BIT(&(uParam0->f_327), 13);
}

void func_87(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	Global_1072759.f_7 = 1;
	if ((Global_1295619.f_16 - Global_1072759.f_9) > 2)
	{
		if (bParam2)
		{
			func_210(1101004800 /* Float: 20f */);
		}
	}
	Global_1072759.f_9 = Global_1295619.f_16;
	if (bParam0)
	{
		CAM::_REQUEST_LETTER_BOX_OVERTIME(-1, -1, false, 17, true, false);
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
			}
			else if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar1))
			{
				PED::SET_PED_RESET_FLAG(iVar1, 96, true);
			}
		}
		iVar2++;
	}
	if (func_211())
	{
		NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
	}
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 25, true);
	CAM::_0x3C8F74E8FE751614();
	CAM::INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE();
	func_212(250);
	if (bParam1)
	{
		HUD::_0x5651516D947ABC53();
	}
}

bool func_88(var uParam0)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				switch (func_58())
				{
					case 2:
						Jump @306; //curOff = 69
						Jump @79; //curOff = 72
						return false;
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 1:
								Jump @306; //curOff = 122
								Jump @132; //curOff = 125
								return false;
							}
							if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
							{
							}
							else if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[iVar0 /*40*/], false))
							{
								if (!CAM::IS_SCREEN_FADING_OUT() && !CAM::IS_SCREEN_FADED_OUT())
								{
									if (MISC::IS_BIT_SET(uParam0->f_327, 14))
									{
										if (!ENTITY::HAS_ANIM_EVENT_FIRED(uParam0->f_241[iVar0 /*27*/].f_1[0 /*6*/], MISC::GET_HASH_KEY("NotFinalPlaylist")) && func_213(uParam0, iVar0))
										{
											fVar1 = ANIMSCENE::_GET_ANIM_SCENE_DURATION(uParam0->f_8[iVar0 /*40*/]);
											fVar2 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[iVar0 /*40*/]);
											fVar3 = (fVar1 - fVar2);
											if (fVar3 < 1f)
											{
												CAM::DO_SCREEN_FADE_OUT(500);
											}
										}
									}
								}
							}
							else
							{
								func_214(uParam0);
								return true;
							}
						}
						iVar0++;
					}
					return false;
				}

bool func_89(var uParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	char* sVar5;
	bool bVar6;
	int iVar7;

	if (MISC::IS_BIT_SET(uParam0->f_327, 12))
	{
		return false;
	}
	if (!func_215(&(uParam0->f_342)))
	{
		func_216(&(uParam0->f_342), 0);
		return false;
	}
	else if (func_217(&(uParam0->f_342)) < 5000)
	{
		return false;
	}
	if (func_155(*uParam0))
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar1]))
			{
			}
			else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar1]))
			{
			}
			else
			{
				iVar3 = Global_1295619.f_149[iVar1];
				if (iVar3 == Global_1295619.f_11 && Global_1056554[iVar3 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
				{
					bVar0 = true;
				}
				if (Global_1056554[iVar3 /*491*/].f_42.f_1[*uParam0 /*16*/] == 3 || Global_1056554[iVar3 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
				{
					if (Global_1056554[iVar3 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
					{
						iVar4++;
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	else
	{
		iVar2 = 1;
		bVar0 = Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15;
	}
	sVar5 = "VOTE_SKIP_CONTEXT";
	if (iVar2 == 1)
	{
		sVar5 = "VOTE_SKIP_CONTEXT_SOLO";
	}
	if (!func_92(uParam0->f_341))
	{
		uParam0->f_341 = func_218(sVar5, -4.12917E+08f, 4, 570, 4000, 10, 2f, 0, 1f, 0, 3, -2.540813E-34f, 0);
		func_219(uParam0->f_341, 6, 1);
		func_220(uParam0->f_341, 19, 1, 1);
		if (iVar2 > 1)
		{
			func_221(uParam0->f_341, sVar5, iVar4, iVar2, 1);
		}
		if (iVar4 == 0)
		{
			func_220(uParam0->f_341, 21, 1, 1);
		}
		func_222(uParam0->f_341, 1, 1, 1);
	}
	else
	{
		if (iVar2 > 1)
		{
			if (bVar0)
			{
				func_221(uParam0->f_341, sVar5, iVar2, iVar2, 1);
			}
			else
			{
				func_221(uParam0->f_341, sVar5, iVar4, iVar2, 1);
			}
		}
		if ((!uParam0->f_340 && iVar4 > 0) && !Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14)
		{
			func_93(&(uParam0->f_341), 1, 1);
			uParam0->f_340 = 1;
		}
		if (func_223(uParam0->f_341, 1))
		{
			Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_14 = 1;
			func_220(uParam0->f_341, 21, 0, 1);
			func_222(uParam0->f_341, 0, 1, 1);
			if (!func_155(*uParam0))
			{
				iVar4 = iVar2;
				bVar0 = true;
			}
		}
	}
	if (iVar4 == iVar2 && !Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15)
	{
		Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_15 = 1;
	}
	if (bVar0)
	{
		if (!CAM::IS_SCREEN_FADED_OUT() && !CAM::IS_SCREEN_FADING_OUT())
		{
			CAM::DO_SCREEN_FADE_OUT(500);
		}
		else if (CAM::IS_SCREEN_FADED_OUT())
		{
			iVar7 = 0;
			while (iVar7 < 2)
			{
				if (ANIMSCENE::IS_ANIM_SCENE_RUNNING(uParam0->f_8[iVar7 /*40*/], false))
				{
					ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_8[iVar7 /*40*/], true);
					bVar6 = true;
				}
				iVar7++;
			}
		}
	}
	return (bVar0 && bVar6);
}

bool func_90(int iParam0, var uParam1, int iParam2, int iParam3)
{
	vector3 vVar0;
	int iVar3;
	struct<25> Var4;

	switch (iParam0)
	{
		case 1:
		case 2:
			switch (iParam2)
			{
				case 0:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -1000716688, -996296492, 1110081379 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000435342, -996360464, 1110084760 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 1:
							uParam1->f_3 = { -1000680527, -996320588, 1110067197 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000439217, -996382215, 1110087434 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 2:
							uParam1->f_3 = { -1000757359, -996316346, 1110067642 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000447523, -996421557, 1110095167 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 3:
							uParam1->f_3 = { -1000634796, -996338904, 1110075926 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000448806, -996443025, 1110097134 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 4:
							uParam1->f_3 = { -1000718736, -996334895, 1110068036 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000427335, -996338815, 1110081169 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 5:
							uParam1->f_3 = { -1000801693, -996330536, 1110060355 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000453893, -996469021, 1110102193 };
							uParam1->f_6 = 1118201446; /* Float: 83.2f */
							break;
						case 6:
							uParam1->f_3 = { -1000720376, -996360114, 1110054614 };
							uParam1->f_7 = 0f;
							*uParam1 = { -1000390894, -996316858, 1110073750 };
							uParam1->f_6 = 1112748851; /* Float: 52.8f */
							break;
					}
					break;
				case 1:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -1001053433, -996416389, 1110014506 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001194879, -996456810, 1110075874 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 1:
							uParam1->f_3 = { -1000998021, -996442928, 1110000953 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001238528, -996452809, 1110065781 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 2:
							uParam1->f_3 = { -1001052473, -996443160, 1110032777 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001280371, -996452257, 1110053565 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 3:
							uParam1->f_3 = { -1001112007, -996442168, 1110062531 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001328189, -996449394, 1110057235 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 4:
							uParam1->f_3 = { -1001025484, -996462299, 1110020719 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001382853, -996453867, 1110067931 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 5:
							uParam1->f_3 = { -1001083152, -996460966, 1110060329 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001483528, -996453937, 1110058782 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
						case 6:
							uParam1->f_3 = { -1001057731, -996481827, 1110055479 };
							uParam1->f_7 = -1020028518;
							*uParam1 = { -1001575054, -996451815, 1110062819 };
							uParam1->f_6 = 1127271629; /* Float: 176.8f */
							break;
					}
					break;
				case 2:
					switch (iParam3)
					{
						case 0:
							uParam1->f_3 = { -1001204779, -996243566, 1110075480 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001299942, -996160422, 1110062662 };
							uParam1->f_6 = 1127455130; /* Float: 179.6f */
							Jump @1506; //curOff = 1137
							uParam1->f_3 = { -1001201254, -996270905, 1110077368 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001339337, -996161393, 1110069189 };
							uParam1->f_6 = 1127455130; /* Float: 179.6f */
							Jump @1506; //curOff = 1198
							uParam1->f_3 = { -1001205314, -996212512, 1110073331 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001378746, -996160489, 1110072256 };
							uParam1->f_6 = 1127455130; /* Float: 179.6f */
							Jump @1506; //curOff = 1259
							uParam1->f_3 = { -1001248765, -996260880, 1110055348 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001420502, -996161218, 1110075507 };
							uParam1->f_6 = 1127455130; /* Float: 179.6f */
							Jump @1506; //curOff = 1320
							uParam1->f_3 = { -1001251031, -996230202, 1110041140 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001461924, -996161284, 1110078128 };
							uParam1->f_6 = 1127455130; /* Float: 179.6f */
							Jump @1506; //curOff = 1381
							uParam1->f_3 = { -1001286110, -996244339, 1110060722 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001384858, -996228901, 1110073016 };
							uParam1->f_6 = 1132815974; /* Float: 266.8f */
							Jump @1506; //curOff = 1442
							uParam1->f_3 = { -1001284161, -996272306, 1110062504 };
							uParam1->f_7 = 1119250022; /* Float: 91.2f */
							*uParam1 = { -1001385971, -996249909, 1110075192 };
							uParam1->f_6 = 1132815974; /* Float: 266.8f */
							return true;
							switch (iParam2)
							{
								case 0:
									uParam1->f_3 = { 1151847551, -995921841, 1117202599 };
									uParam1->f_7 = 1116102040;
									*uParam1 = { 1151821551, -995941047, 1117204565 };
									uParam1->f_6 = 1135089091;
									break;
								case 1:
									uParam1->f_3 = { 1151808194, -995922513, 1117198248 };
									uParam1->f_7 = 1116041629;
									*uParam1 = { 1151611124, -995930673, 1117166620 };
									uParam1->f_6 = 1124449157;
									break;
								case 2:
									uParam1->f_3 = { 1151696476, -995987800, 1117163671 };
									uParam1->f_7 = 1110919689;
									*uParam1 = { 1151670282, -996093790, 1117172269 };
									uParam1->f_6 = 1132770994;
									break;
							}
							return true;
							vVar0 = { func_140(Global_1295619) };
							switch (vVar0.y)
							{
								case joaat("CUMBERLAND_FOREST_CAMP"):
								case joaat("GRIZZLIES_CAMP"):
								case joaat("HEARTLAND_CAMP"):
								case joaat("BIG_VALLEY_CAMP"):
								default:
									return false;
									switch (iParam2)
									{
										case 0:
											uParam1->f_3 = { -1012715028, 1145392169, 1122456961 };
											uParam1->f_7 = 1133382907;
											*uParam1 = { -1012886202, 1145409815, 1122504173 };
											uParam1->f_6 = 1094296011;
											break;
										case 1:
											uParam1->f_3 = { -1012803437, 1145289638, 1122471248 };
											uParam1->f_7 = 1133296052;
											*uParam1 = { -1013157275, 1145322463, 1122577521 };
											uParam1->f_6 = -1020760385;
											break;
										case 2:
											uParam1->f_3 = { -1013102379, 1145439732, 1122575712 };
											uParam1->f_7 = 1133314943;
											*uParam1 = { -1013453242, 1145468512, 1122647474 };
											uParam1->f_6 = 1094296011;
											break;
									}
								case joaat("HENNIGANS_STEAD_CAMP"):
								case joaat("RIO_BRAVO_CAMP"):
								case joaat("GREAT_PLAINS_CAMP"):
								case joaat("TALL_TREES_CAMP"):
								case joaat("CHOLLA_SPRINGS_CAMP"):
								case joaat("GAPTOOTH_RIDGE_CAMP"):
									switch (iParam2)
									{
										case 0:
											uParam1->f_3 = { -983175539, -987526572, -1049620696 };
											uParam1->f_7 = 1119231004;
											*uParam1 = { -983159764, -987529801, -1049561347 };
											uParam1->f_6 = 1127083291;
											break;
										case 1:
											uParam1->f_3 = { -983122850, -987561945, -1049858094 };
											uParam1->f_7 = 1118629763;
											*uParam1 = { -983106614, -987558906, -1049905280 };
											uParam1->f_6 = 1105038095;
											break;
										case 2:
											uParam1->f_3 = { -983133143, -987561231, -1049631392 };
											uParam1->f_7 = 1119188209;
											*uParam1 = { -983096527, -987560437, -1049905385 };
											uParam1->f_6 = 1074403685;
											break;
									}
									break;
								case joaat("ROANOKE_RIDGE_CAMP"):
								case joaat("BAYOU_NAWAS_CAMP"):
								case joaat("SCARLETT_MEADOWS_CAMP"):
									switch (iParam2)
									{
										case 0:
											uParam1->f_3 = { 1160770339, -995900211, 1110867706 };
											uParam1->f_7 = 1124927884;
											*uParam1 = { 1160746578, -995847979, 1110836249 };
											uParam1->f_6 = 1134259628;
											break;
										case 1:
											uParam1->f_3 = { 1160780714, -995912032, 1110850404 };
											uParam1->f_7 = 1117885235;
											*uParam1 = { 1160737636, -995955016, 1110863249 };
											uParam1->f_6 = 1123867138;
											break;
										case 2:
											uParam1->f_3 = { 1160733622, -995800637, 1110821044 };
											uParam1->f_7 = 1121379589;
											*uParam1 = { 1160702771, -995882115, 1110812131 };
											uParam1->f_6 = 1124047834;
											break;
									}
									break;
							}
							return true;
							if (iParam2 < 0 || iParam2 > 2)
							{
								return false;
							}
							iVar3 = func_134();
							if (iVar3 == -1)
							{
								return false;
							}
							Var4 = 3;
							Var4.f_10 = 3;
							Var4.f_14 = 3;
							Var4.f_24 = 3;
							if (!func_224(iVar3, &Var4))
							{
								return false;
							}
							uParam1->f_3 = { Var4[iParam2 /*3*/] };
							uParam1->f_7 = Var4.f_10[iParam2];
							*uParam1 = { Var4.f_14[iParam2 /*3*/] };
							uParam1->f_6 = Var4.f_24[iParam2];
							return true;
							uParam1->f_3 = { 1152668682, 1136167246, 1118946407 };
							uParam1->f_7 = 1116464978;
							uParam1->f_8 = 1;
							return true;
							uParam1->f_3 = { -992576380, -1013270148, 1127386684 };
							uParam1->f_7 = 1125552462;
							return true;
							uParam1->f_3 = { 0f, 0f, 0f };
							uParam1->f_7 = 0f;
							return false;
							uParam1->f_3 = { 1159503053, -996472422, 1111805133 /* Float: 49.2f */ };
							uParam1->f_7 = 1132920832; /* Float: 270f */
							uParam1->f_8 = 1;
							return true;
							return false;
						}

void func_91(var uParam0)
{
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	*uParam0 = 0;
}

bool func_92(int iParam0)
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

void func_93(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_92(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_225(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_226(iVar0);
	*uParam0 = 0;
}

void func_94(var uParam0, bool bParam1)
{
	if (!bParam1)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
	}
	else
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
	}
}

void func_95(var uParam0)
{
	Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 = -1;
	uParam0->f_329 = -1;
}

void func_96()
{
	Global_1904398.f_8865 = 1;
}

bool func_97(var uParam0)
{
	struct<9> Var0;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	int iVar17;

	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		return false;
	}
	if (uParam0->f_329 != -1)
	{
		if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - uParam0->f_329)) >= 2)
		{
			return true;
		}
		return false;
	}
	iVar13 = Global_1295619.f_5;
	bVar14 = Global_1295619.f_11 == iVar13;
	if (PED::IS_PED_ON_MOUNT(Global_1295619.f_3))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_1295619.f_3, true, true);
	}
	if (!func_90(*uParam0, &Var0, iVar10, iVar12))
	{
		return true;
	}
	if (!func_155(*uParam0))
	{
		bVar14 = true;
	}
	if (bVar14)
	{
		iVar12 = 1;
	}
	else
	{
		iVar10 = -1;
	}
	iVar9 = 0;
	while (iVar9 < 32)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar9]))
		{
		}
		else
		{
			iVar11 = Global_1295619.f_149[iVar9];
			if (bVar14)
			{
				if (iVar13 != iVar11)
				{
					if (Global_1056554[iVar13 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 == -1)
					{
						if (GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[iVar9]))
						{
							if (Global_1056554[iVar11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 == iVar10)
							{
								iVar10++;
							}
						}
					}
					if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar9]))
					{
					}
					else
					{
						Global_1056554[iVar13 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[iVar12] = Global_1295619.f_149[iVar9];
						iVar12++;
						Jump @488; //curOff = 339
						if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar9]))
						{
						}
						else if (Global_1295619.f_11 == iVar11 && Global_1056554[iVar11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 != -1)
						{
							iVar16 = 0;
							while (iVar16 < 7)
							{
								if (Global_1056554[iVar11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[iVar16] == Global_1295619.f_5)
								{
									iVar10 = Global_1056554[iVar11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1;
									iVar12 = iVar16;
								}
								else
								{
									iVar16++;
								}
							}
						}
					}
					iVar9++;
					if (bVar14)
					{
						iVar12 = 0;
					}
					if ((iVar10 >= 0 && iVar10 <= 2) || Var0.f_8)
					{
						iVar17 = ITEMSET::CREATE_ITEMSET(true);
						while (!bVar15)
						{
							if (!func_90(*uParam0, &Var0, iVar10, iVar12))
							{
								func_227(1, 0);
								func_152(Global_1295619.f_12, 0f, -1f, -1f, 1, 1, 1);
								bVar15 = true;
							}
							else
							{
								if ((ENTITY::DOES_ENTITY_EXIST(uParam0->f_345) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_345, -1)) && PED::_IS_MOUNT_SEAT_FREE(uParam0->f_345, 0))
								{
									if (ENTITY::_GET_ENTITIES_NEAR_POINT(Var0, 2f, iVar17, 2) == 0)
									{
										ENTITY::SET_ENTITY_COORDS(uParam0->f_345, Var0, true, false, true, true);
										ENTITY::SET_ENTITY_HEADING(uParam0->f_345, Var0.f_6);
									}
								}
								if (ENTITY::_GET_ENTITIES_NEAR_POINT(Var0.f_3, 2f, iVar17, 2) == 0 || Var0.f_8)
								{
									bVar15 = true;
									ENTITY::SET_ENTITY_COORDS(Global_1295619.f_3, Var0.f_3, true, false, true, true);
									ENTITY::SET_ENTITY_HEADING(Global_1295619.f_3, Var0.f_7);
									CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f, 1f);
									if (iVar10 == 0 && *uParam0 != 7)
									{
										PLAYER::SIMULATE_PLAYER_INPUT_GAIT(Global_1295619.f_5, 1f, 2000, 0f, true, false);
									}
									if (bVar14)
									{
										Global_1056554[iVar13 /*491*/].f_42.f_1[*uParam0 /*16*/].f_1 = iVar10;
									}
								}
								else
								{
									func_227(1, 0);
									func_152(Global_1295619.f_12, 0f, -1f, -1f, 1, 1, 1);
									bVar15 = true;
								}
							}
						}
					}
					else if (iVar10 > 2)
					{
						func_227(1, 0);
						func_152(Global_1295619.f_12, 0f, -1f, -1f, 1, 1, 1);
						bVar15 = true;
					}
					if (uParam0->f_329 == -1)
					{
						if (bVar15)
						{
							uParam0->f_329 = NETWORK::GET_CLOUD_TIME_AS_INT();
						}
					}
					return false;
				}
			}
		}
	}
}

void func_98(var uParam0)
{
	uParam0->f_329 = -1;
}

Vector3 func_99(int iParam0, int iParam1, bool bParam2)
{
	vector3 vVar0[24];

	StringCopy(&cVar0, "INVALID_HANDLE", 24);
	switch (iParam0)
	{
		case 1:
		default:
			break;
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 2:
			if (bParam2)
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_m_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_m_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_m_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_m_4", 24);
						break;
				}
			}
			else
			{
				switch (iParam1)
				{
					case 0:
						StringCopy(&cVar0, "MP_player_f_1", 24);
						break;
					case 1:
						StringCopy(&cVar0, "MP_player_f_2", 24);
						break;
					case 2:
						StringCopy(&cVar0, "MP_player_f_3", 24);
						break;
					case 3:
						StringCopy(&cVar0, "MP_player_f_4", 24);
						break;
				}
			}
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
			if (bParam2)
			{
				StringCopy(&cVar0, "MP_player_m_1", 24);
			}
			else
			{
				StringCopy(&cVar0, "MP_player_f_1", 24);
			}
			break;
	}
	return cVar0;
}

void func_100(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1885680.f_1682)
		{
			Global_1885680.f_1682 = 1;
		}
	}
	else if (Global_1885680.f_1682)
	{
		Global_1885680.f_1682 = 0;
	}
}

bool func_101(int iParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return false;
	}
	iVar0 = func_46(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!func_228(iParam0))
	{
		bVar1 = func_229(3, iParam0);
		bVar2 = false;
	}
	else
	{
		bVar1 = func_229(1, iParam0);
		bVar2 = true;
	}
	if (bVar1 == 0)
	{
		return false;
	}
	if (func_231(func_230(iParam0)))
	{
		switch (func_232(func_230(iParam0), 0))
		{
			case 1:
			default:
				return false;
				return false;
			case 2:
			}
			if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0) && UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
			{
				if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
				{
					return false;
				}
				if (!func_231(func_230(iParam0)))
				{
					func_234(iParam0, func_233(bVar1, 0));
				}
				return false;
			}
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar0) && UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
			{
				if (bVar2)
				{
					if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
					{
						return true;
					}
				}
				func_235(iParam0);
				func_234(iParam0, -1);
				func_236();
				return true;
			}
			return false;
		}

bool func_102(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	if (STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else if (!func_137(uParam0->f_357))
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 9))
			{
				iVar2 = INTERIOR::GET_INTERIOR_AT_COORDS(uParam0->f_357);
				if (INTERIOR::IS_VALID_INTERIOR(iVar2))
				{
					INTERIOR::UNPIN_INTERIOR(iVar2);
					MISC::CLEAR_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 9);
					iVar1 = 1;
				}
			}
		}
		iVar0++;
	}
	return iVar1;
}

void func_103(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return;
	}
	if (!func_237(iParam0))
	{
		Global_1291896.f_22[iParam0 /*11*/].f_7 = 0;
		return;
	}
	Global_1291896.f_22[iParam0 /*11*/].f_7 = iParam1;
}

void func_104(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return;
	}
	Global_1291896.f_133[iParam0 /*5*/].f_4 = iParam1;
}

void func_105(var uParam0)
{
	float fVar0;

	switch (*uParam0)
	{
		case 3:
			if (uParam0->f_351)
			{
				fVar0 = 1.512432E-08f;
			}
			else
			{
				fVar0 = 2.474913E-05f;
			}
			func_239(MISC::VAR_STRING(0, fVar0, func_238(2)), 20000, 0, 0, 0, 1);
			break;
	}
}

void func_106(var uParam0)
{
	func_203(64);
	switch (*uParam0)
	{
		case 5:
			func_240(1);
			break;
		case 6:
			Global_1297394.f_44.f_1 = 1;
			if (func_241(PLAYER::PLAYER_ID(), 1) == -1)
			{
				func_9(879, 0);
			}
			break;
		case 7:
			if (!func_242(4.080975E-29f, 1))
			{
				func_9(911, 0);
			}
			func_243(-2.896394E-21f);
			break;
		case 8:
			func_209(149, 0);
			func_209(150, 0);
			func_209(151, 0);
			break;
	}
}

bool func_107(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			PED::DELETE_PED(&(uParam0->f_89[iVar0 /*15*/].f_1));
			iVar1++;
		}
		iVar0++;
	}
	return true;
}

bool func_108(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
		{
		}
		else
		{
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
		}
		iVar0++;
	}
	return true;
}

void func_109(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_COLLISION(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], true, false);
				PED::DELETE_PED(&(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/]));
			}
			iVar1++;
		}
		iVar0++;
	}
}

void func_110(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (uParam0->f_150[iVar0 /*13*/].f_8)
		{
			if (!func_137(uParam0->f_150[iVar0 /*13*/].f_5))
			{
				vVar1 = { uParam0->f_150[iVar0 /*13*/].f_5 };
			}
			else
			{
				vVar1 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[iVar0 /*13*/].f_2) };
			}
			ENTITY::REMOVE_MODEL_HIDE(vVar1, 1f, uParam0->f_150[iVar0 /*13*/].f_1, 0);
		}
		iVar0++;
	}
}

void func_111(int iParam0)
{
	Global_1048585 = iParam0;
}

int func_112()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
	{
		return 0;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(7.215231E-38f);
	return 1;
}

bool func_113()
{
	return Global_1896762.f_352;
}

void func_114()
{
	if (Global_1896762.f_353)
	{
	}
	Global_1896762.f_353 = 0;
}

bool func_115()
{
	return (func_244() || func_245());
}

void func_116(bool bParam0)
{
	if (bParam0)
	{
		Global_1940013.f_9 = 0f;
	}
	Global_1940013.f_8 = 0f;
	Global_1940013.f_15.f_1 = 0f;
	Global_1940013.f_15 = 0f;
	Global_1940013.f_15.f_9 = 0f;
	Global_1940013.f_15.f_8 = 0f;
	Global_1940013.f_15.f_10 = 0;
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::_SET_PED_MOTIVATION(Global_33, 10, 0f, 0);
		AUDIO::SET_PED_IS_DRUNK(Global_33, false);
		PED::_SET_PED_DRUNKNESS(Global_33, false, 0f);
	}
	func_246(0f);
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		PED::SET_PED_CONFIG_FLAG(Global_33, 26, false);
	}
	if (GRAPHICS::ANIMPOSTFX_IS_RUNNING("PlayerDrunk01"))
	{
		func_247();
	}
	if (CAM::IS_GAMEPLAY_CAM_SHAKING())
	{
		CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
	}
}

void func_117()
{
	Global_1940013.f_28 = 0;
	Global_1940013.f_28.f_1 = 0;
	Global_1940013.f_28.f_2 = 0;
	Global_1940013.f_28.f_3 = 0;
	Global_1940013.f_28.f_4 = 0;
	Global_1940013.f_28.f_8 = 0;
}

void func_118()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1156096.f_47689.f_1.f_42)
	{
		if (!func_248(Global_1156096.f_47689.f_1[iVar0 /*2*/]))
		{
		}
		iVar0++;
	}
	Global_1156096.f_47689.f_1.f_42 = 0;
}

void func_119(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	PED::CLEAR_PED_BLOOD_DAMAGE(iParam0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(iParam0, iVar0);
		iVar0++;
	}
}

bool func_120(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

int func_121(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_122(bool bParam0)
{
	struct<15> Var0;

	if (NETWORK::NETWORK_AUTO_SESSION_IS_ALLOWED_TO_MERGE() != bParam0)
	{
		Var0 = 1;
		Var0.f_1.f_4 = 10;
		Var0[0 /*15*/] = 15;
		NETWORK::_NETWORK_AUTO_SESSION_SET_ALLOWED_TO_MERGE(bParam0, &Var0, -1);
	}
}

void func_123(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_249(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_250(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_124()
{
	if (!Global_1896762.f_353)
	{
	}
	Global_1896762.f_353 = 1;
}

void func_125(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896762.f_352)
		{
			Global_1896762.f_352 = bParam0;
		}
	}
	else if (Global_1896762.f_352)
	{
		Global_1896762.f_352 = bParam0;
	}
}

bool func_126(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_127(int iParam0)
{
	if (func_129(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_128(int iParam0)
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

bool func_129(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_130(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_131()
{
	if (!func_211())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_132(int iParam0)
{
	int iVar0;

	iVar0 = func_251(iParam0);
	if (iVar0 < 0)
	{
		return true;
	}
	return func_252(&(Global_1149417.f_11.f_3222.f_320[iVar0 /*4*/]), 1);
}

int func_133()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10);
	iVar1 = func_253(iVar0);
	if (iVar1 == 0)
	{
		return 1.863516E-37f;
	}
	iVar2 = func_254(0, iVar1, 0, -1);
	if (iVar2 == 0)
	{
		return 1.863516E-37f;
	}
	iVar3 = func_255(iVar2);
	if (iVar3 == 0)
	{
		return 1.863516E-37f;
	}
	return iVar3;
}

int func_134()
{
	int iVar0;
	int iVar5;

	if (STATS::_0x3AEABAE3F3C7600C() && STATS::_0xA2E2BEA4E83F6270(-3.335061E+35f) > 0)
	{
		STATS::_0xB5E2EDA2135E0FA1(-3.335061E+35f, 0, &iVar0);
	}
	else
	{
		return -1;
	}
	if (iVar0 == 0)
	{
		return -1;
	}
	iVar5 = func_256(iVar0);
	if (iVar5 < 0 || iVar5 >= 12)
	{
		return -1;
	}
	return (135 + iVar5);
}

Vector3 func_135(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_136(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return false;
	}
	return true;
}

bool func_137(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_138(int iParam0, Vector3* vParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;

	*uParam2 = { func_257() };
	fVar2 = 0f;
	switch (iParam0)
	{
		case 4:
		default:
			return false;
			*vParam1 = { 0f, 0f, 0f };
			vVar3 = { func_140(Global_1295619) };
			switch (vVar3.y)
			{
				case joaat("CUMBERLAND_FOREST_CAMP"):
				case joaat("GRIZZLIES_CAMP"):
				case joaat("HEARTLAND_CAMP"):
				case joaat("BIG_VALLEY_CAMP"):
				default:
					return false;
					*vParam1 = { -1012944139, 1145448943, 1122552106 };
					*uParam2 = { 0f, 0f, -1032847360 /* Float: -60f */ };
				case joaat("HENNIGANS_STEAD_CAMP"):
				case joaat("RIO_BRAVO_CAMP"):
				case joaat("GREAT_PLAINS_CAMP"):
				case joaat("TALL_TREES_CAMP"):
				case joaat("CHOLLA_SPRINGS_CAMP"):
				case joaat("GAPTOOTH_RIDGE_CAMP"):
					*vParam1 = { -983182353, -987517564, -1049765714 };
					*uParam2 = { 0f, 0f, -1024570163 };
					break;
				case joaat("ROANOKE_RIDGE_CAMP"):
				case joaat("BAYOU_NAWAS_CAMP"):
				case joaat("SCARLETT_MEADOWS_CAMP"):
					*vParam1 = { 1160790513, -995893817, 1110896699 };
					*uParam2 = { 0f, 0f, -1030737101 /* Float: -72.1f */ };
					break;
			}
			return true;
		case 5:
			iVar0 = func_134();
			if (iVar0 == -1)
			{
				return false;
			}
			if (!func_258(iVar0, vParam1, uParam2))
			{
				return false;
			}
			if (!bParam3)
			{
				return true;
			}
			iVar1 = func_259(2.132637E+14f, *vParam1, 5f);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				*vParam1 = { 0f, 0f, 0f };
				*uParam2 = { 0f, 0f, 0f };
				return false;
			}
			*vParam1 = { ENTITY::GET_ENTITY_COORDS(iVar1, true, false) };
			*uParam2 = { ENTITY::GET_ENTITY_ROTATION(iVar1, 2) };
			return true;
		case 8:
			*vParam1 = { Global_1051832.f_3765[39 /*17*/].f_1 };
			iVar0 = Global_1051832.f_3765[39 /*17*/];
			if (!bParam3)
			{
				return true;
			}
			if (150 == iVar0)
			{
				*vParam1 = { -993717815, 1140067290, 1122232212 };
				fVar2 = 1124859249;
			}
			else if (151 == iVar0)
			{
				*vParam1 = { 1156947686, -1006340556, 1109644961 };
				fVar2 = (1124859249 + 1119092736);
			}
			else
			{
				*vParam1 = { -989305048, -989508959, 1116878039 };
				fVar2 = 0f;
			}
			*uParam2 = { 0f, 0f, fVar2 };
			return true;
	}
}

bool func_139(vector3 vParam0, vector3 vParam3)
{
	return ((vParam0.x == vParam3.x && vParam0.y == vParam3.y) && vParam0.z == vParam3.z);
}

Vector3 func_140(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_260() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

int func_141(var uParam0)
{
	return uParam0->f_1.f_2;
}

void func_142(var uParam0, int iParam1)
{
	uParam0->f_1.f_2 = iParam1;
}

bool func_143(var uParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	bVar1 = true;
	if (!PED::_ARE_ALL_AMBIENT_PED_RESERVATIONS_READY())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			if (uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[iVar0 /*15*/]))
			{
				STREAMING::REQUEST_MODEL(uParam0->f_89[iVar0 /*15*/], false);
				if (!STREAMING::HAS_MODEL_LOADED(uParam0->f_89[iVar0 /*15*/]))
				{
					bVar1 = false;
				}
				else
				{
					Jump @123; //curOff = 117
					Jump @942; //curOff = 120
					uParam0->f_89[iVar0 /*15*/].f_1 = PED::CREATE_PED(uParam0->f_89[iVar0 /*15*/], uParam0->f_89[iVar0 /*15*/].f_2, uParam0->f_89[iVar0 /*15*/].f_5.f_2, false, false, false, false);
					if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1) || ENTITY::IS_ENTITY_DEAD(uParam0->f_89[iVar0 /*15*/].f_1))
					{
						bVar1 = false;
					}
					else
					{
						if (uParam0->f_89[iVar0 /*15*/].f_8 > -1 && uParam0->f_89[iVar0 /*15*/].f_8 < PED::GET_NUM_META_PED_OUTFITS(uParam0->f_89[iVar0 /*15*/].f_1))
						{
							PED::_EQUIP_META_PED_OUTFIT_PRESET(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_8, false);
						}
						else if (uParam0->f_89[iVar0 /*15*/].f_8 != -1 && PED::_DOES_META_PED_OUTFIT_EXIST_FOR_PED_MODEL(uParam0->f_89[iVar0 /*15*/].f_8, uParam0->f_89[iVar0 /*15*/]))
						{
							PED::_RESET_PED_COMPONENTS(uParam0->f_89[iVar0 /*15*/].f_1);
							PED::_EQUIP_META_PED_OUTFIT(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_8);
							PED::_UPDATE_PED_VARIATION(uParam0->f_89[iVar0 /*15*/].f_1, false, true, true, true, false);
						}
						else if (uParam0->f_89[iVar0 /*15*/].f_8 == -1)
						{
							PED::_SET_RANDOM_OUTFIT_VARIATION(uParam0->f_89[iVar0 /*15*/].f_1, true);
						}
						if (uParam0->f_89[iVar0 /*15*/].f_9 != 0)
						{
							WEAPON::GIVE_WEAPON_TO_PED(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_9, 1, false, true, 0, false, 0.5f, 1f, 6.028273E-12f, false, 0f, false);
						}
						func_261(uParam0->f_89[iVar0 /*15*/].f_1, uParam0->f_89[iVar0 /*15*/].f_2);
						ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_89[iVar0 /*15*/].f_1, false);
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89[iVar0 /*15*/].f_1, false);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_89[iVar0 /*15*/].f_1, true);
						PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(uParam0->f_89[iVar0 /*15*/].f_1, false);
						PED::SET_PED_CAN_RAGDOLL(uParam0->f_89[iVar0 /*15*/].f_1, false);
						ENTITY::FREEZE_ENTITY_POSITION(uParam0->f_89[iVar0 /*15*/].f_1, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 277, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 340, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 137, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 17, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 77, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 24, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 72, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 107, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 150, false);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 47, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 127, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 130, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 315, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 297, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 422, true);
						PED::SET_PED_CONFIG_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 148, true);
						PED::SET_PED_LASSO_HOGTIE_FLAG(uParam0->f_89[iVar0 /*15*/].f_1, 0, false);
						ENTITY::SET_ENTITY_PROOFS(uParam0->f_89[iVar0 /*15*/].f_1, 127, false);
						func_262(&(uParam0->f_89[iVar0 /*15*/]), 2);
					}
				}
				iVar0++;
				if (bVar1)
				{
					if (!MISC::IS_BIT_SET(uParam0->f_327, 1))
					{
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if (uParam0->f_89[iVar0 /*15*/] != 0 && STREAMING::IS_MODEL_VALID(uParam0->f_89[iVar0 /*15*/]))
							{
								if (STREAMING::HAS_MODEL_LOADED(uParam0->f_89[iVar0 /*15*/]))
								{
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_89[iVar0 /*15*/]);
								}
							}
							iVar0++;
						}
						MISC::SET_BIT(&(uParam0->f_327), 1);
					}
					return true;
				}
				return false;
			}
		}
	}
}

bool func_144(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (!func_172(uParam0, iVar0))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 3))
			{
				switch (func_58())
				{
					case 2:
						Jump @673; //curOff = 75
						Jump @85; //curOff = 78
						return false;
					}
					else if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 4))
					{
						switch (func_58())
						{
							case 1:
								Jump @673; //curOff = 128
								Jump @138; //curOff = 131
								return false;
							}
							if (MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
							{
								Jump @673; //curOff = 156
							}
							else
							{
								iVar1 = 0;
							}
							if (!MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_8[iVar0 /*40*/].f_11[1 /*3*/])))
							{
								iVar2 = func_263();
							}
							if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 0))
							{
								if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
								{
								}
								else if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_8[iVar0 /*40*/].f_3)))
								{
									MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 1);
								}
								else
								{
									uParam0->f_8[iVar0 /*40*/] = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_8[iVar0 /*40*/].f_3), uParam0->f_8[iVar0 /*40*/].f_2, &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/]), false, false);
									if (MISC::IS_BIT_SET(uParam0->f_327, 18))
									{
										uParam0->f_338 = ANIMSCENE::_CREATE_ANIM_SCENE(&(uParam0->f_330), 256, 0, false, true);
									}
									if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
									{
									}
									else
									{
										ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_8[iVar0 /*40*/]);
										if (MISC::IS_BIT_SET(uParam0->f_327, 18))
										{
											ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_338);
										}
										MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 0);
										Jump @673; //curOff = 415
										if (!MISC::IS_BIT_SET(uParam0->f_8[iVar0 /*40*/].f_1, 1))
										{
											if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_8[iVar0 /*40*/]))
											{
											}
											else if (!ANIMSCENE::IS_ANIM_SCENE_METADATA_LOADED(uParam0->f_8[iVar0 /*40*/], false))
											{
											}
											else if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_8[iVar0 /*40*/], false, false))
											{
											}
											else
											{
												if (*uParam0 != 4)
												{
													if (*uParam0 == 5)
													{
														if (func_137(uParam0->f_8[iVar0 /*40*/].f_33))
														{
														}
														else
														{
															ANIMSCENE::SET_ANIM_SCENE_ORIGIN(uParam0->f_8[iVar0 /*40*/], uParam0->f_8[iVar0 /*40*/].f_33, uParam0->f_8[iVar0 /*40*/].f_36, 2);
															if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/])))
															{
																if (!ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/])))
																{
																}
																else
																{
																	ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_8[iVar0 /*40*/], &(uParam0->f_8[iVar0 /*40*/].f_11[iVar2 /*3*/]), true);
																	MISC::SET_BIT(&(uParam0->f_8[iVar0 /*40*/].f_1), 1);
																}
																iVar0++;
																return iVar1;
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

void func_145(var uParam0)
{
	int iVar0;
	char[] cVar1[8];

	if (func_264(*uParam0, &iVar0, &cVar1))
	{
		ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[0 /*40*/], &cVar1, iVar0, true);
	}
}

int func_146(var uParam0)
{
	return uParam0->f_296.f_1;
}

int func_147(var uParam0)
{
	return uParam0->f_296.f_2;
}

void func_148(var uParam0, int iParam1)
{
	if (uParam0->f_296.f_1 != iParam1)
	{
		uParam0->f_296.f_1 = iParam1;
	}
}

void func_149(var uParam0, var uParam1, char* sParam2, char* sParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, char[4] cParam20, char* sParam21)
{
	func_48(uParam0);
	uParam0->f_296 = func_265(&uParam1, cParam20, sParam21, 0, 0, 1);
}

float func_150()
{
	float fVar0;
	vector3 vVar1;

	fVar0 = -1.366675E-05f;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar0))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar0);
	}
	return -1.695322E-18f;
}

void func_151(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_266(72);
		Global_1102813.f_3794 = iParam0;
		Global_1102813.f_3795 = iParam1;
	}
	else
	{
		func_267(72);
	}
}

void func_152(vector3 vParam0, float fParam3, float fParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_268(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_269(vParam0, fParam3, vVar0, fVar3, fParam4, fParam5, iParam6, fParam7, fParam8, 1);
}

int func_153(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1295619.f_17[iParam0])
	{
		return Global_1101558[iParam0 /*38*/];
	}
	return 26;
}

void func_154(var uParam0, int iParam1)
{
	if (uParam0->f_296.f_2 != iParam1)
	{
		uParam0->f_296.f_2 = iParam1;
	}
}

bool func_155(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return false;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return false;
}

bool func_156(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return true;
		case 2:
			return true;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return false;
		case 6:
			return false;
		case 7:
			return false;
		case 8:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return false;
}

bool func_157(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	vector3 vVar4;

	if (!func_270(uParam0))
	{
		return uParam0->f_1.f_6;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(uParam0->f_319))
	{
		vVar0 = { func_271(uParam0) };
		uParam0->f_319 = VOLUME::CREATE_VOLUME_SPHERE(uParam0->f_320, 0f, 0f, 0f, vVar0);
	}
	if (MISC::IS_BIT_SET(uParam0->f_327, 16))
	{
		vVar4 = { VOLUME::GET_VOLUME_SCALE(uParam0->f_319) };
		if (func_272(uParam0->f_320, Global_34) < vVar4.x)
		{
			bVar3 = true;
		}
	}
	else if (ENTITY::IS_ENTITY_IN_VOLUME(Global_1295619.f_3, uParam0->f_319, true, 0))
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (!func_273(uParam0))
		{
			uParam0->f_1.f_6 = 1;
		}
		else
		{
			uParam0->f_1.f_6 = 0;
		}
	}
	else
	{
		uParam0->f_1.f_6 = 0;
	}
	return uParam0->f_1.f_6;
}

bool func_158()
{
	bool bVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_1295619.f_3))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_1295619.f_3);
		bVar0 = true;
	}
	else if (func_274(&iVar1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			func_275(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)));
		}
		return false;
	}
	return true;
}

int func_159(int iParam0)
{
	if (!func_136(iParam0))
	{
		return 0;
	}
	return Global_1291896.f_22[iParam0 /*11*/].f_7;
}

int func_160(int iParam0, int iParam1)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return -1;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	return Global_1056554[iParam1 /*491*/].f_42.f_1[iParam0 /*16*/];
}

bool func_161(int iParam0)
{
	int iVar0;

	if (!func_136(iParam0))
	{
		return false;
	}
	if ((Global_1295619.f_11 < 32 && Global_1295619.f_11 > 0) && Global_1056554[Global_1295619.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_2 != -1)
	{
		iVar0 = MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_1056554[Global_1295619.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_2));
		if (iVar0 >= 30)
		{
			return true;
		}
	}
	return false;
}

void func_162(var uParam0, int iParam1)
{
	if (func_153(255) == 1)
	{
		if (func_146(uParam0) == 0 && func_147(uParam0) == 0)
		{
			func_154(uParam0, iParam1);
			func_148(uParam0, 1);
		}
	}
}

bool func_163()
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1295619.f_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iVar0, -1);
		if (iVar1 == Global_1295619.f_3)
		{
			iVar1 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iVar0, 0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && PED::IS_PED_A_PLAYER(iVar1))
		{
			if (NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1) == Global_1295619.f_11)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_164(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

void func_165(int iParam0, bool bParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if ((bParam1 && func_277(iParam0, 512)) || (!bParam1 && !func_277(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_278(iParam0, 512);
	}
	else
	{
		func_279(iParam0, 512);
	}
	if (func_280(iParam0))
	{
		INVENTORY::_0x9B4E793B1CB6550A();
	}
}

bool func_166()
{
	return Global_1292081.f_13;
}

bool func_167(int iParam0)
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

bool func_168(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_281(bParam1, bParam2, bParam3);
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

int func_169(var uParam0)
{
	return uParam0->f_1.f_3;
}

void func_170(var uParam0)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	float fVar7;
	float fVar8;

	if (!func_155(*uParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, Global_1295619);
		iVar1 = 0;
		while (iVar1 < 2)
		{
			if (!func_172(uParam0, iVar1))
			{
			}
			else
			{
				Global_1056554[Global_1295619 /*491*/].f_42.f_1[*uParam0 /*16*/].f_11[iVar1] = uVar0;
			}
			iVar1++;
		}
		return;
	}
	if (Global_1295619.f_11 != Global_1295619)
	{
		return;
	}
	iVar5 = PLAYER::GET_PLAYER_PED(PLAYER::INT_TO_PLAYERINDEX(Global_1295619.f_11));
	iVar1 = 0;
	while (iVar1 < 2)
	{
		if (!func_172(uParam0, iVar1))
		{
		}
		else
		{
			if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 3))
			{
				if (func_58() != 1)
				{
				}
				else
				{
					Jump @207; //curOff = 175
					if (MISC::IS_BIT_SET(uParam0->f_8[iVar1 /*40*/].f_1, 4))
					{
						if (func_58() != 2)
						{
						}
						else
						{
							iVar3 = 0;
							while (iVar3 < 32)
							{
								if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1295619.f_149[iVar3]))
								{
								}
								else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Global_1295619.f_149[iVar3]))
								{
								}
								else
								{
									if (iVar2 >= 4)
									{
									}
									else
									{
										if (Global_1295619.f_149[iVar3] != Global_1295619.f_5)
										{
											iVar6 = PLAYER::GET_PLAYER_PED(Global_1295619.f_149[iVar3]);
											if (ENTITY::IS_ENTITY_DEAD(iVar6))
											{
											}
											else
											{
												fVar7 = BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar6, true, false), ENTITY::GET_ENTITY_COORDS(iVar5, true, false));
												fVar8 = func_282(*uParam0, 0);
												if (fVar7 > (fVar8 * fVar8))
												{
												}
												else
												{
													iVar2++;
													SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, Global_1295619.f_149[iVar3]);
													Global_1056554[Global_1295619.f_5 /*491*/].f_42.f_1[*uParam0 /*16*/].f_3[iVar4] = Global_1295619.f_149[iVar3];
													iVar4++;
												}
											}
											iVar3++;
											iVar2 = 0;
											Global_1056554[Global_1295619.f_11 /*491*/].f_42.f_1[*uParam0 /*16*/].f_11[iVar1] = uVar0;
											iVar1++;
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

void func_171(var uParam0, int iParam1)
{
	uParam0->f_1.f_3 = iParam1;
}

bool func_172(var uParam0, int iParam1)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(uParam0->f_8[iParam1 /*40*/].f_3));
}

var func_173(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 >= 10 || iParam0 <= 0)
	{
		return uVar0;
	}
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return uVar0;
	}
	if (Global_1295619.f_11 >= 32 || Global_1295619.f_11 < 0)
	{
		return uVar0;
	}
	if (!func_155(iParam0))
	{
		uVar0 = Global_1056554[Global_1295619 /*491*/].f_42.f_1[iParam0 /*16*/].f_11[iParam1];
	}
	else
	{
		uVar0 = Global_1056554[Global_1295619.f_11 /*491*/].f_42.f_1[iParam0 /*16*/].f_11[iParam1];
	}
	return uVar0;
}

bool func_174(var uParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam2 >= 2 || iParam2 < 0)
	{
		return false;
	}
	if (iParam3 >= 4 || iParam3 < 0)
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
	iVar1 = PED::CLONE_PED(iVar0, false, false, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, false);
	func_283(iVar0, iVar1);
	ENTITY::SET_ENTITY_COORDS(iVar1, uParam0->f_320, true, false, true, true);
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
	PED::_0x7E8F9949B7AABBF0(iVar1, 1, 1);
	WEAPON::_HIDE_PED_WEAPONS(iVar1, 2, true);
	AUDIO::DISABLE_PED_PAIN_AUDIO(iVar1, true);
	if (MISC::IS_BIT_SET(uParam0->f_327, 17))
	{
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 16, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 9, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 18, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 10, false);
		WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(iVar1, 7, false);
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar1, true);
	vVar2 = { func_99(*uParam0, iParam3, PED::IS_PED_MALE(iVar1)) };
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/] = iVar1;
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2.f_1 = { vVar2 };
	uParam0->f_241[iParam2 /*27*/].f_1[iParam3 /*6*/].f_2 = uParam0->f_8[iParam2 /*40*/];
	return true;
}

bool func_175(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	if (!bParam3)
	{
		return ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);
	}
	else if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]))
	{
		return !ENTITY::IS_ENTITY_DEAD(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);
	}
	return false;
}

bool func_176(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 >= 2 || iParam1 < 0)
	{
		return false;
	}
	if (iParam2 >= 4 || iParam2 < 0)
	{
		return false;
	}
	return PED::IS_PED_READY_TO_RENDER(uParam0->f_241[iParam1 /*27*/].f_1[iParam2 /*6*/]);
}

bool func_177(var uParam0, int iParam1)
{
	vector3 vVar0;

	if (uParam0->f_150[iParam1 /*13*/].f_1 == 0)
	{
		return true;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]))
	{
		return true;
	}
	if (!func_137(uParam0->f_150[iParam1 /*13*/].f_5))
	{
		vVar0 = { uParam0->f_150[iParam1 /*13*/].f_5 };
	}
	else
	{
		vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(uParam0->f_8[0 /*40*/].f_33, uParam0->f_8[0 /*40*/].f_36.f_2, uParam0->f_150[iParam1 /*13*/].f_2) };
	}
	uParam0->f_150[iParam1 /*13*/] = func_259(uParam0->f_150[iParam1 /*13*/].f_1, vVar0, 1f);
	if (uParam0->f_150[iParam1 /*13*/].f_8)
	{
		ENTITY::CREATE_MODEL_HIDE(vVar0, 1f, uParam0->f_150[iParam1 /*13*/].f_1, false);
	}
	return ENTITY::DOES_ENTITY_EXIST(uParam0->f_150[iParam1 /*13*/]);
}

void func_178(var uParam0, int iParam1)
{
	func_284(uParam0, iParam1);
}

bool func_179(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, float fParam5, int iParam6, float fParam7, float fParam8)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	vector3 vVar5;
	vector3 vVar8;

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
	bVar3 = PED::IS_PED_ON_MOUNT(iParam0);
	if (bVar3)
	{
		iVar2 = PED::GET_MOUNT(iParam0);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2))
		{
			bVar3 = false;
		}
	}
	if (!bVar3)
	{
		bVar4 = PED::IS_PED_IN_ANY_VEHICLE(iParam0, true);
		if (bVar4)
		{
			iVar1 = PED::GET_VEHICLE_PED_IS_IN(iParam0, true);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar1) || ENTITY::IS_ENTITY_DEAD(iVar1))
			{
				bVar4 = false;
			}
		}
	}
	if (func_285(*uParam1, 128))
	{
		if (!func_286(iParam0, 3117380f))
		{
			TASK::CLEAR_PED_TASKS(iParam0, true, false);
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_285(*uParam1, 2))
	{
		if (bVar3)
		{
			if (!func_287(iVar2))
			{
				return false;
			}
			if (!func_286(iParam0, 5.999514E-21f))
			{
				if (fParam7 != 0f && fParam8 != 0f)
				{
					vVar5 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
					vVar5.x = fParam7;
					vVar5.f_1 = fParam8;
					if (func_288(iVar2, vVar5))
					{
						iParam4 = 131072;
					}
					else
					{
						iParam4 = 262144;
					}
					if (!func_285(*uParam1, 4))
					{
						iParam4 |= 32;
					}
				}
				TASK::CLEAR_PED_TASKS(iParam0, true, false);
				TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			}
			return false;
		}
		else if ((func_289(iParam2, 128) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_LAST_MOUNT(iParam0))) && ENTITY::DOES_ENTITY_EXIST(PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0))))
		{
			TASK::TASK_PICKUP_CARRIABLE_ENTITY(iParam0, PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(PED::_GET_LAST_MOUNT(iParam0)));
			func_178(uParam1, 128);
			return false;
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	if (func_285(*uParam1, 4))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(iParam0, true))
		{
			return false;
		}
		else
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0, false, true);
			*uParam1 = 0;
			return true;
		}
	}
	if (func_285(*uParam1, 8))
	{
		if (bVar3)
		{
			if (!func_287(iVar2))
			{
				return false;
			}
		}
		if ((!bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0))) || (bVar3 && TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2))))
		{
			*uParam1 = 0;
			return true;
		}
		else
		{
			return false;
		}
	}
	if (PED::IS_PED_A_PLAYER(iParam0) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
	{
		if (!func_289(iParam2, 2) && PLAYER::_IS_SPECIAL_ABILITY_ACTIVE(PLAYER::GET_PLAYER_INDEX()))
		{
			PLAYER::_SPECIAL_ABILITY_SET_DISABLED(PLAYER::GET_PLAYER_INDEX(), true);
		}
		if (!func_289(iParam2, 2048))
		{
			if (PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::GET_PLAYER_INDEX()))
			{
				PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), false, iParam3, false);
				if (func_289(iParam2, 16384))
				{
					HUD::_DISABLE_HUD_CONTEXT(6.363164E-13f);
				}
			}
		}
	}
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
	if (bVar3)
	{
		if (ENTITY::IS_ENTITY_IN_AIR(iVar2, 0))
		{
			return false;
		}
		if (func_285(*uParam1, 2336))
		{
			if (!func_287(iVar2))
			{
			}
			if (func_290(iVar2, *uParam1))
			{
				func_291(uParam1, 32);
				func_291(uParam1, 256);
				func_291(uParam1, 2048);
				func_178(uParam1, 512);
				func_178(uParam1, 1024);
				func_178(uParam1, 4096);
			}
			else
			{
				return false;
			}
		}
		if (func_285(*uParam1, 64))
		{
			PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
			if (!func_287(iVar2))
			{
			}
			if (TASK::IS_PED_WALKING(iVar2))
			{
				return false;
			}
			else
			{
				func_291(uParam1, 64);
			}
		}
		if (func_289(iParam2, 16))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 2, 0, 0);
			*uParam1 = 0;
			return true;
		}
		PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
		if ((((TASK::IS_PED_SPRINTING(iVar2) && !func_289(iParam2, 8192)) || (TASK::IS_PED_RUNNING(iVar2) && func_289(iParam2, 1024))) || func_289(iParam2, 8)) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 1, 0, 0);
			func_178(uParam1, 32);
		}
		else if (((TASK::IS_PED_RUNNING(iVar2) || (TASK::IS_PED_SPRINTING(iVar2) && func_289(iParam2, 8192))) && func_289(iParam2, 4096)) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 8, 0, 0);
			func_178(uParam1, 2048);
			func_178(uParam1, 4096);
		}
		else if (((TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) <= 1069547520 && TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2) >= 1065361605) && func_289(iParam2, 32)) && !func_285(*uParam1, 5632))
		{
			TASK::TASK_HORSE_ACTION(iVar2, 3, 0, 0);
			func_178(uParam1, 256);
			func_178(uParam1, 1024);
		}
		else if (TASK::IS_PED_WALKING(iVar2))
		{
			TASK::TASK_STAND_STILL(iVar2, -1);
			func_178(uParam1, 64);
		}
		else if (!func_289(iParam2, 1))
		{
			if (!func_289(iParam2, 256))
			{
			}
			if (fParam7 != 0f && fParam8 != 0f)
			{
				vVar8.x = fParam7;
				vVar8.f_1 = fParam8;
				vVar8.f_2 = Global_34.f_2;
				if (func_288(iVar2, vVar8))
				{
					iParam4 = 131072;
				}
				else
				{
					iParam4 = 262144;
				}
				if (!func_285(*uParam1, 4))
				{
					iParam4 |= 32;
				}
			}
			TASK::TASK_DISMOUNT_ANIMAL(iParam0, iParam4, 0, 0, 0, 0);
			TASK::SET_PED_DESIRED_MOVE_BLEND_RATIO(iVar2, 0f);
			func_178(uParam1, 2);
		}
		else
		{
			TASK::TASK_STAND_STILL(iParam0, 1000);
			func_178(uParam1, 8);
		}
	}
	else if (bVar4)
	{
		if (!func_289(iParam2, 1))
		{
			TASK::OPEN_SEQUENCE_TASK(&iVar0);
			TASK::TASK_STAND_STILL(0, 250);
			TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
			TASK::CLOSE_SEQUENCE_TASK(iVar0);
			TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
			TASK::CLEAR_SEQUENCE_TASK(&iVar0);
			VEHICLE::BRING_VEHICLE_TO_HALT(iVar1, fParam5, iParam6, false);
			func_178(uParam1, 4);
		}
		else
		{
			*uParam1 = 0;
			return true;
		}
	}
	else if (!func_289(iParam2, 512))
	{
		TASK::TASK_STAND_STILL(iParam0, 200);
		func_178(uParam1, 8);
	}
	return false;
}

bool func_180(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_295(func_183(bParam0, 0), bParam1, bParam2, iParam3, func_294(bParam0));
	}
	if (func_296(bParam0, bParam4) || func_297(bParam0))
	{
		bParam1 = 0.003804697f;
	}
	else if (func_294(bParam0) && (func_298(bParam0, &iVar0) || func_299(bParam0, &iVar0)))
	{
		bParam1 = iVar0;
	}
	else
	{
		bVar1 = func_300(bParam0, -2.401104E+18f);
		bVar2 = func_300(bParam0, -982726.7f);
		if (bVar1 && !bVar2)
		{
			bParam1 = -2.401104E+18f;
		}
		else if (bVar2 && bVar1)
		{
			if (func_301())
			{
				bParam1 = -2.401104E+18f;
			}
			else
			{
				bParam1 = -982726.7f;
			}
		}
		else if (bVar2)
		{
			bParam1 = -982726.7f;
		}
		else if (func_302(15) && func_300(bParam0, 1.109321E-25f))
		{
			bParam1 = 1.109321E-25f;
		}
		else
		{
			bParam1 = false;
		}
	}
	if (bParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return bParam1;
}

bool func_181(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	var uVar1;
	bool bVar3;
	var uVar4;
	var uVar5;
	int iVar7;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (func_303(bParam0, 1) && !func_304(bParam0, 1))
	{
		return false;
	}
	if (bParam2 && func_305(bParam0, &bVar0))
	{
		if (func_306(bVar0, 0.003804697f, 0) && !func_307(bVar0, 0.003804697f))
		{
			return true;
		}
		else if (func_306(bVar0, -2.401104E+18f, 0))
		{
			return func_308(bVar0, -2.401104E+18f, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			bVar3 = func_180(bParam0, bVar3, 1, -1, 1);
		}
		else
		{
			bVar3 = iParam1;
		}
		if (bVar3 == 0)
		{
			return false;
		}
		iVar7 = func_309(bParam0, bVar3, 0, 1, 1);
		if (bVar3 == -2.401104E+18f)
		{
			return func_310(iVar7);
		}
		else if (bVar3 == -982726.7f)
		{
			return func_311(iVar7);
		}
		else if (bVar3 == 0.003804697f)
		{
			return true;
		}
		else
		{
			return func_312(bParam0, 1, bVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return false;
}

bool func_182(bool bParam0)
{
	if (func_293(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_183(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_292(bParam0, 0))
	{
		return func_314(func_313(bParam0), bParam1);
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

int func_184(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_315(bParam0, iParam1, &Var0, &iVar31, bParam2, 1))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_316(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
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

int func_185(bool bParam0, int iParam1, bool bParam2)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_317(bParam0, iParam1, &Var0, &iVar31, 1, 0))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_316(Var0[iVar32 /*2*/]))
		{
			return Var0[iVar32 /*2*/];
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

int func_186(bool bParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_316(bParam0))
	{
		return iVar0;
	}
	iVar0 = 2.799884E-36f;
	Var1 = { func_318(bParam0, 0, 0) };
	Var6 = { func_319(bParam0, Var1, Var1.f_4, 0) };
	if (!func_320(&Var6))
	{
		return -1;
	}
	if (func_321(Var6))
	{
		iVar0 = 1.074468E-35f;
	}
	return iVar0;
}

int func_187(int* iParam0, bool bParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6)
{
	struct<17> Var0;
	struct<5> Var17;
	bool bVar22;

	func_322(&bParam1);
	if (func_182(bParam1))
	{
		return func_323(iParam0, func_183(bParam1, 1), 1, 1, fParam3, 0, iParam4, iParam5, func_294(bParam1));
	}
	else if (bParam1 == 9.27052E-12f)
	{
		return func_323(iParam0, 3.517294E+25f, 1, 1, fParam3, 0, -2.401104E+18f, iParam5, func_294(bParam1));
	}
	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var17 = { func_318(bParam1, 1, 1) };
	if (func_305(bParam1, &bVar22))
	{
		return func_323(iParam0, bVar22, iParam2, 1, fParam3, 0, 0, iParam5, 0);
	}
	if (func_324(bParam1))
	{
		if (!func_325(iParam0, bParam1, Var17, iParam2, &Var0, iParam4, iParam5, fParam3))
		{
			return 0;
		}
	}
	else if (!func_326(iParam0, bParam1, Var17, Var17.f_4, iParam2, &Var0, fParam3, iParam4, iParam5, iParam6))
	{
		return 0;
	}
	func_327(Var0);
	return 1;
}

float func_188(bool bParam0)
{
	return func_328(bParam0);
}

void func_189(bool bParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_329(bParam0), false);
}

void func_190(int iParam0, struct<17> Param1)
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

void func_191(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	switch (*uParam0)
	{
		case 5:
			if (uParam0->f_8[iParam1 /*40*/].f_39 == -1)
			{
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_INT(uParam0->f_8[iParam1 /*40*/], "location_variation", uParam0->f_8[iParam1 /*40*/].f_39, false);
			}
			break;
		case 6:
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], "ifTrader", func_330(11) > 0, false);
			break;
		case 7:
			func_53(910, &iVar0, &iVar1);
			func_331(iVar0, iVar1);
			func_332(&iVar0, &iVar1);
			func_333(-2.896394E-21f);
			break;
		case 8:
			func_209(149, 1);
			func_209(150, 1);
			func_209(151, 1);
			break;
	}
}

void func_192()
{
	if (!func_334())
	{
		return;
	}
	Global_1220705.f_26 = 0;
}

Vector3 func_193(var uParam0)
{
	vector3 vVar0;

	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.x = 1;
	vVar0.f_2 = uParam0;
	return vVar0;
}

bool func_194(vector3 vParam0)
{
	int iVar0;

	if (!func_335(vParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_336(Global_1220705.f_2[iVar0 /*5*/].f_2, vParam0))
		{
		}
		else
		{
			return Global_1220705.f_2[iVar0 /*5*/].f_1;
		}
		iVar0++;
	}
	return false;
}

void func_195(vector3 vParam0, int iParam3)
{
	int iVar0;

	if (!func_335(vParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (!func_336(Global_1220705.f_2[iVar0 /*5*/].f_2, vParam0))
		{
		}
		else
		{
			if (Global_1220705.f_2[iVar0 /*5*/].f_1 != iParam3)
			{
				Global_1220705.f_24 = 1;
			}
			Global_1220705.f_2[iVar0 /*5*/].f_1 = iParam3;
		}
		else
		{
			iVar0++;
		}
	}
}

void func_196(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

void func_197(var uParam0, int iParam1)
{
	float fVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	fVar0 = ANIMSCENE::_GET_ANIM_SCENE_TIME(uParam0->f_8[iParam1 /*40*/]);
	func_44(*uParam0, &bVar1);
	MISC::SET_BIT(&(uParam0->f_327), 19);
	if ((ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_1", false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", false)) || (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2_T10_Shot_2", false) && fVar0 > 1104989389))
	{
		HUD::_0x5651516D947ABC53();
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
		{
			if (!func_337(uParam0))
			{
				uParam0->f_354 = 1;
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
		if (ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4)) || ANIMSCENE::GET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4)))
		{
			return;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			iVar2 = func_180(bVar1, 0, 1, -1, 1);
			UIAPPS::_CLOSE_ALL_UIAPPS_IMMEDIATE();
			func_124();
			func_338(3, 1);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
			return;
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 8))
		{
			if (func_339() == 55)
			{
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 8);
			}
			return;
		}
		iVar3 = func_241(PLAYER::GET_PLAYER_INDEX(), 1);
		if (iVar3 != -1)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_351 = 1;
			AUDIO::PLAY_SOUND_FRONTEND("gold_spend", "Gold_Spend_Sounds", true, 0);
		}
		else if (!func_339() == 55)
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_351 = 0;
			uParam0->f_353 = 1;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_49();
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}
}

void func_198(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	bool bVar11;
	int iVar12;
	int iVar13;
	int iVar14;

	if (iParam1 < 0)
	{
		return;
	}
	func_44(*uParam0, &bVar0);
	bVar2 = false;
	if (func_45(*uParam0, &bVar1))
	{
		if (func_340(&bVar1))
		{
			bVar2 = true;
		}
		else
		{
			bVar2 = false;
		}
	}
	MISC::SET_BIT(&(uParam0->f_327), 19);
	if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 7))
	{
		if (!func_337(uParam0))
		{
			if (func_341(*uParam0, &uVar3, &bVar11))
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &uVar3, bVar11, false);
				MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
				uParam0->f_354 = 1;
				return;
			}
		}
		else if (func_341(*uParam0, &uVar3, &bVar11))
		{
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &uVar3, !bVar11, false);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 7);
		}
	}
	if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/]), false) || ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/]), false))
	{
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			iVar12 = func_180(bVar0, 0, 1, -1, 1);
			if (bVar2)
			{
				iVar13 = func_180(bVar1, 0, 1, -1, 1);
			}
			if (func_300(bVar0, iVar12))
			{
				uParam0->f_349 = func_342(bVar0, iVar12, 1, 0, 1, 0);
				if (func_343(bVar0, 3.414007E-11f, iVar12, 1, 1) > 0)
				{
					uParam0->f_349 = func_344(uParam0->f_349);
					if (bVar2 && func_300(bVar1, iVar13))
					{
						iVar14 = func_342(bVar1, iVar13, 1, 0, 1, 0);
						if (func_343(bVar1, 3.414007E-11f, iVar13, 1, 1) > 0)
						{
							iVar14 = func_344(iVar14);
						}
						uParam0->f_350 = (uParam0->f_349 + iVar14);
					}
				}
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
				return;
			}
			uParam0->f_346 = func_218("CUTSCENE_ACTION_PURCHASE", -9.436069E+32f, 4, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
			func_219(uParam0->f_346, 6, 1);
			func_220(uParam0->f_346, 19, 0, 1);
			if (func_345(iVar12))
			{
				func_347(uParam0->f_346, "CUTSCENE_ACTION_PURCHASE_OFFER", func_346(bVar0, 0), uParam0->f_349, 1);
			}
			else
			{
				func_347(uParam0->f_346, "CUTSCENE_ACTION_PURCHASE", func_346(bVar0, 0), uParam0->f_349, 1);
			}
			if (bVar2)
			{
				if (func_310(uParam0->f_350 * 100))
				{
					uParam0->f_347 = func_218("CUTSCENE_ACTION_PURCHASE_DOUBLE", -1.068381E+13f, 4, 570, 4000, 10, 2f, 0, 1f, 0, 3, 8.750548E+22f, 0);
					func_219(uParam0->f_347, 6, 1);
					func_220(uParam0->f_347, 19, 0, 1);
					if (func_345(iVar12) || func_345(iVar13))
					{
						func_348(uParam0->f_347, "CUTSCENE_ACTION_PURCHASE_DOUBLE_OFFER", func_346(bVar0, 0), func_346(bVar1, 1), uParam0->f_350, 1);
					}
					else
					{
						func_348(uParam0->f_347, "CUTSCENE_ACTION_PURCHASE_DOUBLE", func_346(bVar0, 0), func_346(bVar1, 1), uParam0->f_350, 1);
					}
				}
			}
			uParam0->f_348 = func_218("CUTSCENE_ACTION_DONT_PURCHASE", 1.121045E-15f, 6, 570, uParam0->f_355, 10, 2f, 0, 1f, 0, 3, -2.540813E-34f, 0);
			func_219(uParam0->f_348, 6, 1);
			func_220(uParam0->f_348, 19, 0, 1);
			MISC::SET_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
		}
		if (!MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
		{
			return;
		}
		if (func_223(uParam0->f_346, 1))
		{
			func_349(uParam0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
			uParam0->f_351 = 1;
			func_76(uParam0, bVar0, &(uParam0->f_299));
			return;
		}
		if (func_92(uParam0->f_347))
		{
			if (func_223(uParam0->f_347, 0))
			{
				func_349(uParam0);
				ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[1 /*7*/].f_4), true, false);
				uParam0->f_351 = 1;
				uParam0->f_352 = 1;
				func_76(uParam0, bVar0, &(uParam0->f_299));
				func_76(uParam0, bVar1, &(uParam0->f_309));
				func_350(&(uParam0->f_299), &(uParam0->f_309), 0);
			}
		}
		if (func_223(uParam0->f_348, 1))
		{
			func_349(uParam0);
			ANIMSCENE::SET_ANIM_SCENE_BOOL(uParam0->f_8[iParam1 /*40*/], &(uParam0->f_8[iParam1 /*40*/].f_18[0 /*7*/].f_4), true, false);
			uParam0->f_351 = 0;
			uParam0->f_353 = 1;
			return;
		}
	}
	else if (MISC::IS_BIT_SET(uParam0->f_8[iParam1 /*40*/].f_1, 6))
	{
		func_349(uParam0);
		MISC::CLEAR_BIT(&(uParam0->f_8[iParam1 /*40*/].f_1), 6);
	}
}

void func_199(var uParam0)
{
	if ((uParam0->f_354 || uParam0->f_351) || uParam0->f_353)
	{
		if (!MISC::IS_BIT_SET(uParam0->f_327, 0))
		{
			if (!func_351(*uParam0))
			{
				func_104(*uParam0, 1);
			}
			if (func_101(*uParam0))
			{
				MISC::SET_BIT(&(uParam0->f_327), 0);
			}
		}
	}
}

int func_200(int* iParam0)
{
	return func_352(iParam0->f_1);
}

bool func_201(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return true;
	}
	return false;
}

int func_202(int iParam0, var uParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			*uParam1 = { Global_1292096.f_20.f_1[iVar0 /*21*/] };
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_203(int iParam0)
{
	func_353(iParam0);
}

void func_204(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 2)
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/]))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_241[iVar0 /*27*/].f_1[iVar1 /*6*/], true);
			}
			iVar1++;
		}
		iVar0++;
	}
}

int func_205(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_89[iVar0 /*15*/].f_1))
		{
		}
		else
		{
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_89[iVar0 /*15*/].f_1, true);
			iVar1++;
		}
		iVar0++;
	}
	return 1;
}

char* func_206(var uParam0, var uParam1, var uParam2)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_207(var uParam0)
{
	switch (uParam0->f_234.f_2)
	{
		case 0:
			if (!TXD::DOES_STREAMED_TXD_EXIST(uParam0->f_234.f_1))
			{
				uParam0->f_234.f_2 = 6;
				return;
			}
			uParam0->f_234.f_2 = 1;
			break;
		case 1:
			TXD::REQUEST_STREAMED_TXD(uParam0->f_234.f_1, false);
			uParam0->f_234.f_2 = 2;
			break;
		case 2:
			if (TXD::HAS_STREAMED_TXD_LOADED(uParam0->f_234.f_1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
				{
					uParam0->f_234.f_2 = 4;
				}
				else
				{
					uParam0->f_234.f_2 = 3;
				}
			}
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_234))
			{
				uParam0->f_234.f_2 = 4;
			}
			break;
		case 4:
			OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(uParam0->f_234, uParam0->f_234.f_1, 0, 0);
			uParam0->f_234.f_2 = 5;
			break;
	}
}

bool func_208(int iParam0, var uParam1)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	if ((iParam0 == 28 || iParam0 == 29) || iParam0 == 33)
	{
		*uParam1 = 0;
		return true;
	}
	if (func_354() != -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1051832.f_92[iParam0 /*75*/].f_21);
		}
		else
		{
			return false;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(Global_1915643.f_3[iParam0 /*447*/].f_23))
	{
		*uParam1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Global_1915643.f_3[iParam0 /*447*/].f_23);
	}
	else
	{
		return false;
	}
	return true;
}

void func_209(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_355(iParam0, 9.403955E-38f);
	}
	else
	{
		func_356(iParam0, 9.403955E-38f);
	}
}

void func_210(float fParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	MISC::CLEAR_AREA(vVar1, fParam0, 65536);
	GRAPHICS::REMOVE_PARTICLE_FX_IN_RANGE(vVar1, fParam0);
}

bool func_211()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_212(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	Global_1896762.f_3648 = MISC::GET_GAME_TIMER();
	Global_1896762.f_3648.f_1 = iParam0;
}

bool func_213(var uParam0, int iParam1)
{
	if (6 == *uParam0)
	{
		if (ANIMSCENE::IS_ANIM_SCENE_IN_SECTION(uParam0->f_8[iParam1 /*40*/], "MOON_INT_P2A1_T01_Shot_2", false))
		{
			return false;
		}
	}
	return true;
}

void func_214(var uParam0)
{
	int iVar0;

	if (*uParam0 != 5)
	{
		return;
	}
	if (!MISC::IS_BIT_SET(uParam0->f_327, 13))
	{
		return;
	}
	if (!func_208(38, &iVar0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	func_209(func_134(), 0);
	ENTITY::SET_ENTITY_VISIBLE(iVar0, true);
	MISC::CLEAR_BIT(&(uParam0->f_327), 13);
}

bool func_215(var uParam0)
{
	return func_357(*uParam0, 1);
}

void func_216(var uParam0, bool bParam1)
{
	if (bParam1 || !func_215(uParam0))
	{
		func_358(uParam0);
	}
}

int func_217(var uParam0)
{
	if (!func_215(uParam0))
	{
		return 0;
	}
	if (func_359(uParam0))
	{
		return uParam0->f_2;
	}
	return func_360(uParam0->f_1);
}

int func_218(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, float fParam6, float fParam7, float fParam8, bool bParam9, int iParam10, int iParam11, bool bParam12)
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
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_361(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_362(iVar1, iParam1, sParam0, 0, iParam10, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam2, iParam3, iParam4, iParam5, fParam6, fParam7, fParam8, bParam9, 0, 0, iParam11, bParam12);
		return iVar1;
	}
	return 0;
}

void func_219(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TYPE(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

void func_220(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_221(int iParam0, char* sParam1, char* sParam2, char* sParam3, bool bParam4)
{
	int iVar0;

	if (bParam4 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(2, sParam1, sParam2, sParam3));
}

void func_222(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (bParam1)
	{
		func_363(iParam0, 4);
		if (bParam3)
		{
			func_364(iVar0, 1);
		}
		func_365(iVar0, 1);
	}
	else
	{
		func_366(iParam0, 4);
		func_365(iVar0, 0);
	}
}

bool func_223(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_92(iParam0))
	{
		return false;
	}
	iVar0 = func_225(iParam0);
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

bool func_224(int iParam0, var uParam1)
{
	struct<4> Var0;
	vector3 vVar5;
	float fVar8;
	int iVar9;
	vector3 vVar10[24];

	Var0 = Global_1072759.f_28418[48 /*4*/].f_3;
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_367(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar9 = 0;
	while (iVar9 < 3)
	{
		vVar5 = { func_257() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vPlayerPos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 2.792622E-21f;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fPlayerHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -130.9811f;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar8, &Var0);
		*(uParam1[iVar9 /*3*/]) = { vVar5 };
		uParam1->f_10[iVar9] = fVar8;
		vVar5 = { func_257() };
		fVar8 = 0f;
		StringCopy(&cVar10, "vHorsePos", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = 2.792622E-21f;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar5, &Var0);
		StringCopy(&cVar10, "fHorseHead", 24);
		StringIntConCat(&cVar10, iVar9 + 1, 24);
		Var0.f_2 = -130.9811f;
		Var0.f_3 = MISC::GET_HASH_KEY(&cVar10);
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar8, &Var0);
		uParam1->f_14[iVar9 /*3*/] = { vVar5 };
		uParam1->f_24[iVar9] = fVar8;
		iVar9++;
	}
	return true;
}

int func_225(int iParam0)
{
	return iParam0;
}

void func_226(int iParam0)
{
	if (!func_368(iParam0))
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

void func_227(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_266(66);
		if (bParam1)
		{
			func_266(73);
		}
	}
	else
	{
		func_267(66);
		func_267(50);
		func_267(73);
	}
}

bool func_228(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (Global_1295619.f_11 == Global_1295619.f_5)
	{
		return true;
	}
	switch (iParam0)
	{
		case 2:
			iVar1 = 13;
			while (iVar1 <= 15)
			{
				bVar0 = func_369(2, iVar1);
				if (bVar0 == 0)
				{
					return false;
				}
				if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
				{
					return false;
				}
				iVar1++;
			}
			return true;
		default:
			break;
	}
	return true;
}

int func_229(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -4.386831E+18f;
				case 1:
					return -7.890581E+31f;
				case 2:
					return -1.082204E-20f;
				case 3:
					return -1.844202E+19f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -9.193918E+26f;
				case 1:
					return 1.652573E+07f;
				case 2:
					return -4.584958E-10f;
				case 3:
					return -1.308009E+30f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 1.522398E-23f;
				case 1:
					return 6.000514E+18f;
				case 2:
					return 6.5686E+09f;
				case 3:
					return -1.29502E+29f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 2.903373E-11f;
				case 1:
					return -1.255973E+22f;
				case 2:
					return -3.492436E+24f;
				case 3:
					return -4.323653E-06f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -1.590671E-35f;
				case 1:
					return -0.005893386f;
				case 2:
					return 8.095878E-36f;
				case 3:
					return 5.308375E-24f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -6.491092E+22f;
				case 1:
					return -3.39337E-34f;
				case 2:
					return -2.827399E+13f;
				case 3:
					return 2.786047E+38f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -0.003760975f;
				case 1:
					return 2.548126E-24f;
				case 2:
					return -1.797413E+11f;
				case 3:
					return -1.161223E+24f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1.154749E-17f;
				case 1:
					return 3.23344E-24f;
				case 2:
					return -5.209391E+29f;
				case 3:
					return 3.148779E+16f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return -1.741973E+17f;
				case 1:
					return 1.418071E+25f;
				case 2:
					return -2.259112E-30f;
				case 3:
					return 8.278385E-06f;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_230(int iParam0)
{
	if (iParam0 <= 0 || iParam0 >= 10)
	{
		return -1;
	}
	return Global_1292081[iParam0];
}

bool func_231(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= NaNf)
	{
		return false;
	}
	return true;
}

int func_232(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1292096.f_459.f_44[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1292096.f_459.f_44[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292096.f_459.f_44[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	if (bParam1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (Global_1292096.f_459.f_1245[iVar0 /*30*/] == -1)
		{
		}
		else if (Global_1292096.f_459.f_1245[iVar0 /*30*/] != iParam0)
		{
		}
		else
		{
			return Global_1292096.f_459.f_1245[iVar0 /*30*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

int func_233(bool bParam0, int iParam1)
{
	struct<30> Var0;

	if (bParam0 == 0)
	{
		return -1;
	}
	if (Global_1292096.f_459.f_1546 >= 40)
	{
		func_370();
		return -1;
	}
	Var0 = -1;
	Var0.f_5.f_1 = 11;
	Var0.f_18.f_1 = 10;
	Var0.f_4 = bParam0;
	Var0 = func_371();
	Var0.f_3 = iParam1;
	func_372(Var0, 0);
	return Var0;
}

void func_234(int iParam0, int iParam1)
{
	if (!func_136(iParam0))
	{
		return;
	}
	Global_1292081[iParam0] = iParam1;
}

void func_235(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]) && !func_228(iParam0))
	{
		return;
	}
	switch (iParam0)
	{
		case 2:
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-1.019407E+24f, false, false)))
			{
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-1.019407E+24f, false, false));
			}
			break;
		case 6:
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-5.403115E+29f, false, false)))
			{
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-5.403115E+29f, false, false));
			}
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-7.162787E-38f, false, false)))
			{
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(-7.162787E-38f, false, false));
			}
			if (!PLAYER::GET_HAS_PLAYER_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(1.821944E+10f, false, false)))
			{
				PLAYER::_SET_PLAYER_HAS_DISCOVERED_CHARACTER_NAME_MP(PLAYER::_GET_CONSTRUCTED_DISCOVERED_CHARACTER_NAME(1.821944E+10f, false, false));
			}
			break;
	}
}

void func_236()
{
	Global_1960733 = 0;
}

bool func_237(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1291896[iParam0] == iParam0;
}

var func_238(int iParam0)
{
	return Global_1110244.f_268.f_3380[iParam0];
}

int func_239(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_240(bool bParam0)
{
	if (Global_17418.f_3104.f_1 == -1)
	{
		return;
	}
	if (Global_17418.f_3104 == bParam0)
	{
		return;
	}
	Global_17418.f_3104 = bParam0;
	if (bParam0)
	{
		func_373(Global_17418.f_3104.f_1);
		Global_1051832.f_4681.f_7 = 1;
		func_374(1, 0.02012728f);
	}
}

int func_241(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/].f_5.f_12;
}

bool func_242(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_375(bParam0);
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
			if (!func_376(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_377(bParam0))
			{
				return true;
			}
			break;
	}
	return func_378(bParam0, 0, 0, 0) >= iParam1;
}

void func_243(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_379(iParam0);
	}
}

bool func_244()
{
	return Global_1940013 == 1;
}

bool func_245()
{
	return Global_1940013 == 2;
}

void func_246(float fParam0)
{
}

void func_247()
{
	GRAPHICS::ANIMPOSTFX_STOP("PlayerDrunk01");
	Global_1940013.f_15 = 0f;
}

bool func_248(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_380(iParam0))
	{
		return false;
	}
	iVar0 = func_381(iParam0, 1);
	if (!func_382(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return true;
	}
	iVar3 = func_383(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_384(iParam0, iVar1))
		{
			case 0:
				func_385(iVar1, iParam0, iVar4);
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
						func_385(iVar1, iParam0, iVar4);
						func_386(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_386(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_387(iVar1, 1);
				func_388(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_389(iVar2, 0);
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
			func_390(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return true;
		}

void func_249(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_391();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_250(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

int func_251(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return Global_1155135[iParam0 /*30*/].f_3.f_1;
}

bool func_252(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_253(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_12.f_5;
}

int func_254(int iParam0, int iParam1, int iParam2, int iParam3)
{
	switch (iParam2)
	{
		case -766600612: /* GXTEntry: "Traveling Opulence" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 161;
				case 1421598733: /* GXTEntry: "Covered" */
					return 177;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 185;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 169;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 193;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 201;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 153;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 22;
				case 12:
					return 4;
				case 13:
					return 12;
				case 9:
					return 41;
				case 10:
					return 33;
				case 8:
					return 49;
				default:
					break;
			}
			break;
		case 226275223: /* GXTEntry: "The Hobo Life" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 162;
				case 1421598733: /* GXTEntry: "Covered" */
					return 178;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 186;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 170;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 194;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 202;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 154;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 23;
				case 12:
					return 5;
				case 13:
					return 13;
				case 9:
					return 42;
				case 10:
					return 34;
				case 8:
					return 50;
				default:
					break;
			}
			break;
		case -2146415538: /* GXTEntry: "Military Surplus" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 163;
				case 1421598733: /* GXTEntry: "Covered" */
					return 179;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 187;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 171;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 195;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 203;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 155;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 24;
				case 12:
					return 6;
				case 13:
					return 14;
				case 9:
					return 43;
				case 10:
					return 35;
				case 8:
					return 51;
				default:
					break;
			}
			break;
		case -892962381: /* GXTEntry: "Survivor" */
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 164;
				case 1421598733: /* GXTEntry: "Covered" */
					return 180;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 188;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 172;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 196;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 204;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 156;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 25;
				case 12:
					return 7;
				case 13:
					return 15;
				case 9:
					return 44;
				case 10:
					return 36;
				case 8:
					return 52;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_BOUNTY_HUNTER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 165;
				case 1421598733: /* GXTEntry: "Covered" */
					return 181;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 189;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 173;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 197;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 205;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 157;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 26;
				case 12:
					return 8;
				case 13:
					return 16;
				case 9:
					return 45;
				case 10:
					return 37;
				case 8:
					return 53;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_COLLECTOR"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 166;
				case 1421598733: /* GXTEntry: "Covered" */
					return 182;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 190;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 174;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 198;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 206;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 158;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 27;
				case 12:
					return 9;
				case 13:
					return 17;
				case 9:
					return 46;
				case 10:
					return 38;
				case 8:
					return 54;
				default:
					break;
			}
			break;
		case joaat("UPGRADE_CAMP_THEME_TRADER"):
			switch (iParam1)
			{
				case -811830793: /* GXTEntry: "Bedroll" */
					return 167;
				case 1421598733: /* GXTEntry: "Covered" */
					return 183;
				case -1281008453: /* GXTEntry: "Lean-To" */
					return 191;
				case 1081855422: /* GXTEntry: "Covered Lean-To" */
					return 175;
				case -805084272: /* GXTEntry: "Open-Air Lean-To" */
					return 199;
				case 1429053594: /* GXTEntry: "Tall Lean-To" */
					return 207;
				case 1802123763: /* GXTEntry: "A-Frame" */
					return 159;
				default:
					break;
			}
			switch (iParam3)
			{
				case 11:
					return 28;
				case 12:
					return 10;
				case 13:
					return 18;
				case 9:
					return 47;
				case 10:
					return 39;
				case 8:
					return 55;
				default:
					break;
			}
			break;
	}
	switch (iParam3)
	{
		case 11:
			return 21;
		case 12:
			return 3;
		case 10:
			return 31;
		case 9:
			return 40;
		case 8:
			return 56;
		default:
			break;
	}
	switch (iParam1)
	{
		case joaat("UPGRADE_CAMP_EQUIPMENT_FAST_TRAVEL_MAP"):
			return 60;
		case joaat("UPGRADE_CAMP_BUTCHER_TABLE"):
			return 61;
		case joaat("UPGRADE_CAMP_WEAPONS_LOCKER"):
			return 66;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_LARGE"):
			return 62;
		case joaat("UPGRADE_CAMP_DELIVERY_WAGON_MEDIUM"):
			return 63;
		case 913131737: /* GXTEntry: "Small Delivery Wagon" */
			return 64;
		case joaat("UPGRADE_CAMP_STEW_POT"):
			return 65;
		case -1396511102: /* GXTEntry: "Deluxe Campfire" */
			return 2;
		case -1991362080: /* GXTEntry: "Black & Tan" */
		case -1535250369: /* GXTEntry: "Tan Brindle" */
		case 914789466: /* GXTEntry: "Black & White" */
			return 67;
		case 55994234: /* GXTEntry: "Dark Brown" */
		case 262209551: /* GXTEntry: "Dead Grass" */
		case 769866899: /* GXTEntry: "Brown" */
			return 68;
		case -429885089: /* GXTEntry: "Yellow" */
		case -289273358: /* GXTEntry: "Chocolate" */
		case 536669287: /* GXTEntry: "Black" */
			return 69;
		case -715360129:
		case 2139966690:
			return 70;
		case -1457562527:
		case joaat("UPGRADE_CAMP_DOG_HUSKY_003"):
			return 71;
		case 1671341100: /* GXTEntry: "Aqua" */
			return 72;
		case -1336962048: /* GXTEntry: "Blue" */
			return 73;
		case 1262519305: /* GXTEntry: "Green" */
			return 74;
		case -510449329: /* GXTEntry: "Orange" */
			return 75;
		case -474096794: /* GXTEntry: "Pink" */
			return 76;
		case 2022645972: /* GXTEntry: "Purple" */
			return 77;
		case -1867469444: /* GXTEntry: "Red" */
			return 78;
		case 81790578: /* GXTEntry: "Yellow" */
			return 79;
		case 42875037: /* GXTEntry: "White" */
			return 80;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_ALLIGATOR_WHITE_00"):
			return 81;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BEAR_WHITE_00"):
			return 82;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_BUCK_WHITE_00"):
			return 83;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_COYOTE_WHITE_00"):
			return 84;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_EAGLE_WHITE_00"):
			return 85;
		case 1853960588: /* GXTEntry: "Gila Monster" */
			return 86;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_MORGAN_WHITE_00"):
			return 87;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_STURGEON_WHITE_00"):
			return 88;
		case -801482238: /* GXTEntry: "Tennessee Walker" */
			return 89;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_VULTURE_WHITE_00"):
			return 90;
		case 1101681612: /* GXTEntry: "Baltz" */
			return 91;
		case 1687066518: /* GXTEntry: "Clam Juice" */
			return 92;
		case 846374071: /* GXTEntry: "Festa" */
			return 93;
		case 1173221821: /* GXTEntry: "Gelatin" */
			return 94;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_JJACKS_DEFAULT_00"):
			return 95;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LCOLA_DEFAULT_00"):
			return 96;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_LUCIFERS_DEFAULT_00"):
			return 97;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_OBEYES_DEFAULT_00"):
			return 98;
		case joaat("UPGRADE_CAMP_FLAG_BRAND_PMGIN_DEFAULT_00"):
			return 99;
		case -1030438211: /* GXTEntry: "Schiffer" */
			return 100;
		case -1413081099: /* GXTEntry: "Ace" */
			return 101;
		case -1291835985: /* GXTEntry: "Ambarino State" */
			return 102;
		case joaat("UPGRADE_CAMP_FLAG_STATE_ANCHOR_BLUE_00"):
			return 103;
		case -1568446057: /* GXTEntry: "Guarma" */
			return 104;
		case 271439292: /* GXTEntry: "Lemoyne State" */
			return 105;
		case -132276375: /* GXTEntry: "New Hanover State" */
			return 106;
		case -908539768: /* GXTEntry: "Skulls" */
			return 107;
		case joaat("UPGRADE_CAMP_FLAG_ANIML_CATFISH_DEFAULT_00"):
			return 108;
		case -1958953278: /* GXTEntry: "Saint Denis" */
			return 109;
		case 733303292: /* GXTEntry: "West Elizabeth State" */
			return 110;
		case 172529261:
			return 111;
		case 408040064:
			return 112;
		case -144166169: /* GXTEntry: "Standard 1" */
			return 113;
		case -492687949: /* GXTEntry: "Standard 2" */
			return 114;
		case -874512337: /* GXTEntry: "Standard 3" */
			return 115;
		case -415385882: /* GXTEntry: "Standard 4" */
			return 116;
		case -797537960: /* GXTEntry: "Standard 5" */
			return 117;
		case -941076000: /* GXTEntry: "Traveling Opulence 1" */
			return 122;
		case -1567174399: /* GXTEntry: "Traveling Opulence 2" */
			return 123;
		case -763924656: /* GXTEntry: "The Hobo Life 1" */
			return 124;
		case 1928558912: /* GXTEntry: "The Hobo Life 2" */
			return 125;
		case 524939438: /* GXTEntry: "Military Surplus 1" */
			return 126;
		case -1949362405: /* GXTEntry: "Military Surplus 2" */
			return 127;
		case 908640876: /* GXTEntry: "Survivor 1" */
			return 128;
		case 501275986: /* GXTEntry: "Survivor 2" */
			return 129;
		case 1257532163: /* GXTEntry: "Bounty Hunter" */
			return 130;
		case 1160088249: /* GXTEntry: "Collector" */
			return 131;
		case -267422042: /* GXTEntry: "Trader" */
			return 132;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_01"):
			return 133;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_02"):
			return 134;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_SEASONAL_03"):
			return 135;
		case 1054660175:
			return 118;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_07"):
			return 119;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_08"):
			return 120;
		case joaat("UPGRADE_CAMP_FOLLOWER_OUTFIT_GENERIC_09"):
			return 121;
		case -811830793: /* GXTEntry: "Bedroll" */
			return 160;
		case 1421598733: /* GXTEntry: "Covered" */
			return 176;
		case -1281008453: /* GXTEntry: "Lean-To" */
			return 184;
		case 1081855422: /* GXTEntry: "Covered Lean-To" */
			return 168;
		case -805084272: /* GXTEntry: "Open-Air Lean-To" */
			return 192;
		case 1429053594: /* GXTEntry: "Tall Lean-To" */
			return 200;
		case 1802123763: /* GXTEntry: "A-Frame" */
			return 152;
		default:
			break;
	}
	return 0;
}

int func_255(int iParam0)
{
	switch (iParam0)
	{
		case 122:
			return -7.262511E-37f;
		case 123:
			return 2.441137E+35f;
		case 124:
			return 6.082063f;
		case 125:
			return 1.713046E+14f;
		case 126:
			return -107589.7f;
		case 127:
			return 1.130273E+38f;
		case 113:
			return 1.863516E-37f;
		case 114:
			return -1.128205E-10f;
		case 115:
			return 7.821466E-28f;
		case 116:
			return 5.590016E-22f;
		case 117:
			return -9.403968E+27f;
		case 128:
			return -1.463559E+09f;
		case 129:
			return -8.491224E-19f;
		case 130:
			return -2.438378E-11f;
		case 131:
			return -1.145262E+29f;
		case 132:
			return 2.94627E-36f;
		case 133:
			return 1.406044E+33f;
		case 134:
			return -2.093342E+32f;
		case 135:
			return -5.490326E+23f;
		case 118:
			return -1.702925E+27f;
		case 119:
			return -8.187785E+35f;
		case 120:
			return 5.459018E+10f;
		case 121:
			return 2.334324E+19f;
		default:
			break;
	}
	return 0;
}

int func_256(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPSW_LOCATION_00"):
			return 0;
		case joaat("MPSW_LOCATION_01"):
			return 1;
		case joaat("MPSW_LOCATION_02"):
			return 2;
		case joaat("MPSW_LOCATION_03"):
			return 3;
		case joaat("MPSW_LOCATION_04"):
			return 4;
		case joaat("MPSW_LOCATION_05"):
			return 5;
		case joaat("MPSW_LOCATION_06"):
			return 6;
		case joaat("MPSW_LOCATION_07"):
			return 7;
		case joaat("MPSW_LOCATION_08"):
			return 8;
		case joaat("MPSW_LOCATION_09"):
			return 9;
		case joaat("MPSW_LOCATION_10"):
			return 10;
		case joaat("MPSW_LOCATION_11"):
			return 11;
		default:
			break;
	}
	return 0;
}

Vector3 func_257()
{
	return 0f, 0f, 0f;
}

bool func_258(int iParam0, Vector3* vParam1, var uParam2)
{
	struct<4> Var0;
	float fVar5;

	Var0 = Global_1072759.f_28418[48 /*4*/].f_3;
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_367(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -1.822079E+35f;
	Var0.f_3 = MISC::GET_HASH_KEY("vPropPos");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam1, &Var0);
	fVar5 = 0f;
	Var0.f_2 = 0.6744412f;
	Var0.f_3 = MISC::GET_HASH_KEY("fPropHead");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar5, &Var0);
	uParam2->f_2 = fVar5;
	return true;
}

int func_259(int iParam0, vector3 vParam1, float fParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	iVar5 = ENTITY::_GET_ENTITIES_NEAR_POINT(vParam1, fParam4, iVar0, 3);
	iVar4 = 0;
	while (iVar4 <= (iVar5 - 1))
	{
		iVar1 = ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar0);
		iVar2 = MISC::_GET_OBJECT_FROM_INDEXED_ITEM(iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
		{
		}
		else if (!ENTITY::IS_ENTITY_VISIBLE(iVar2))
		{
		}
		else if (iParam0 != ENTITY::GET_ENTITY_MODEL(iVar2))
		{
		}
		else
		{
			iVar3 = iVar2;
		}
		else
		{
			iVar4++;
		}
	}
	ITEMSET::DESTROY_ITEMSET(iVar0);
	return iVar3;
}

int func_260()
{
	return Global_1102813.f_3672;
}

void func_261(int iParam0, vector3 vParam1)
{
	vector3 vVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		vVar0 = { vParam1 };
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(vVar0, &(vVar0.f_2), false))
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vVar0, true, false, true, true);
		}
		else
		{
			ENTITY::SET_ENTITY_COORDS(iParam0, vParam1, true, false, true, true);
		}
	}
}

void func_262(var uParam0, int iParam1)
{
	char cVar0[64];
	int iVar8;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_1))
	{
		return;
	}
	IntToString(&cVar0, uParam0->f_1, 64);
	if (!PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(uParam0->f_10)))
	{
		return;
	}
	iVar8 = 0;
	while (iVar8 <= 86)
	{
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, uParam0->f_10, func_392(iVar8, 1));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam1, func_392(iVar8, 1), uParam0->f_10);
		iVar8++;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_1, uParam0->f_10);
}

int func_263()
{
	if ((Global_1295619.f_11 < 0 || Global_1295619.f_11 >= 32) || !NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[Global_1295619.f_11]))
	{
		return 0;
	}
	if (PED::IS_PED_MALE(PLAYER::GET_PLAYER_PED(Global_1295619.f_149[Global_1295619.f_11])))
	{
		return 0;
	}
	return 1;
}

bool func_264(int iParam0, var uParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 5:
		default:
			break;
	}
	return false;
	StringCopy(sParam2, "local_player_variation", 64);
	*uParam1 = 0;
	iVar0 = func_134();
	if (iVar0 == -1)
	{
		return true;
	}
	if (!func_393(iVar0, &iVar1))
	{
		return true;
	}
	switch (iVar1)
	{
		case joaat("PROP_HUMAN_SEAT_CHAIR_READING"):
		default:
			return false;
			*uParam1 = 0;
			return true;
		case joaat("WORLD_HUMAN_SMOKE_NAZAR"):
			*uParam1 = 1;
			return true;
		case joaat("WORLD_HUMAN_DANCING"):
			*uParam1 = 2;
			return true;
			return true;
	}
}

int func_265(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<4> Var0;
	int iVar4;

	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	iVar4 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_WARNING_MESSAGE(uParam0, &Var0, bParam5);
	return iVar4;
}

int func_266(int iParam0)
{
	if (func_394(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_267(int iParam0)
{
	if (func_395(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_268(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_396(vParam0) /*272*/];
	iVar1 = func_397(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_398(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_269(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, float fParam11, float fParam12, int iParam13)
{
	if (func_399(255) == 4)
	{
		return;
	}
	if (func_137(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (bParam10)
	{
		func_400(0, 0, 0, 1);
	}
	func_266(0);
	func_266(3);
	Global_1102813.f_3909 = fParam11;
	Global_1102813.f_3910 = fParam12;
	Global_1102813.f_3911 = iParam13;
	func_401(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { vParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
	if (fParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102813.f_3839.f_6.f_9 = -2.19652E+23f;
	}
	func_402(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_403(Global_1102813.f_3839, 36);
	func_404(Global_1102813.f_3878, 36);
}

bool func_270(var uParam0)
{
	return uParam0->f_328 == 0;
}

Vector3 func_271(var uParam0)
{
	switch (*uParam0)
	{
		case 4:
			return 1092616192 /* Float: 10f */, 1092616192 /* Float: 10f */, 5f;
		case 3:
			return 5f, 5f, 5f;
		case 7:
			return 5f, 1081908134 /* Float: 3.947f */, 1091387261 /* Float: 8.828f */;
		default:
			break;
	}
	return 1094574407, 1095706769, 1091387485;
}

float func_272(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_273(var uParam0)
{
	switch (*uParam0)
	{
		case 3:
		case 4:
		case 5:
			if (func_405())
			{
				return true;
			}
			if (Global_1295611.f_2.f_1 == 1 || func_406())
			{
				return true;
			}
			break;
		case 8:
			if (func_164(0))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_274(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::GET_MOUNT(Global_1295619.f_3);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
		if ((ENTITY::DOES_ENTITY_EXIST(iVar1) && ENTITY::IS_ENTITY_A_PED(iVar1)) && PED::IS_PED_A_PLAYER(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
		{
			if (PED::IS_PED_HOGTIED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1)))
			{
				*iParam0 = iVar1;
				return true;
			}
		}
	}
	return false;
}

void func_275(int iParam0)
{
	vector3 vVar0;
	var uVar4;

	vVar0.x = 200;
	vVar0.f_1 = PLAYER::PLAYER_ID();
	vVar0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iParam0);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &vVar0, 4, 16, &uVar4);
}

bool func_276(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_277(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return false;
	}
	if (func_354() == -1)
	{
		return (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1) != 0;
	}
	else
	{
		return (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1) != 0;
	}
	return false;
}

void func_278(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if (func_354() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 || iParam1);
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || iParam1);
	}
}

void func_279(int iParam0, int iParam1)
{
	if (!func_276(iParam0))
	{
		return;
	}
	if (func_354() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && iParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && iParam1));
	}
}

bool func_280(int iParam0)
{
	if (func_407())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_281(bool bParam0, bool bParam1, bool bParam2)
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

float func_282(int iParam0, bool bParam1)
{
	float fVar0;

	switch (iParam0)
	{
		case 1:
		default:
			fVar0 = 0f;
			break;
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 2:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 3:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 4:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 5:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 6:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 7:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 8:
			fVar0 = 1120403456; /* Float: 100f */
			break;
		case 9:
			fVar0 = 1120403456; /* Float: 100f */
			break;
	}
	if (bParam1)
	{
		fVar0 = (fVar0 * fVar0);
	}
	return fVar0;
}

void func_283(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_408(iParam0, iParam1);
	iVar1 = 0;
	while (iVar1 <= (29 - 1))
	{
		iVar2 = ((29 - 1) - iVar1);
		if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, false, iVar2, false))
		{
			if (iVar0 != -3.273909E-18f)
			{
				if (iVar2 == 1)
				{
					PED::SET_PED_COMBAT_ATTRIBUTES(iParam1, 116, true);
				}
				WEAPON::SET_CURRENT_PED_WEAPON(iParam1, iVar0, true, iVar2, false, false);
			}
		}
		iVar1++;
	}
}

void func_284(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_285(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_286(int iParam0, int iParam1)
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

bool func_287(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_33) && !PED::IS_PED_INJURED(Global_33))
		{
			if (PED::_GET_RIDER_OF_MOUNT(iParam0, false) == Global_33)
			{
				PAD::DISABLE_CONTROL_ACTION(0, 7.307677E-28f, false);
				PAD::DISABLE_CONTROL_ACTION(0, 0.005796425f, false);
				PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
			}
		}
	}
	PED::SET_PED_MAX_MOVE_BLEND_RATIO(iParam0, 0f);
	if (func_286(iParam0, 0.1457215f))
	{
		return false;
	}
	if (TASK::IS_MOVE_BLEND_RATIO_STILL(TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(iParam0)))
	{
		return true;
	}
	return false;
}

bool func_288(int iParam0, vector3 vParam1)
{
	vector3 vVar0;
	vector3 vVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	vVar3 = { vVar0 + ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	return func_409(vVar0, vVar3, vParam1);
}

bool func_289(float fParam0, int iParam1)
{
	return (fParam0 && iParam1) != 0;
}

bool func_290(int iParam0, var uParam1)
{
	float fVar0;

	if (!func_286(iParam0, 0.1457215f))
	{
		return true;
	}
	fVar0 = TASK::_GET_SCRIPT_TASK_ACTION_TIME(iParam0, 0.1457215f);
	if (func_285(uParam1, 32))
	{
		if (fVar0 >= 1072483533)
		{
			return true;
		}
		return false;
	}
	if (func_285(uParam1, 256))
	{
		if (fVar0 >= 1f)
		{
			return true;
		}
		return false;
	}
	if (func_285(uParam1, 2048))
	{
		if (fVar0 >= 1069547520)
		{
			return true;
		}
		return false;
	}
	return true;
}

void func_291(var uParam0, int iParam1)
{
	func_410(uParam0, iParam1);
}

bool func_292(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_293(bool bParam0, int iParam1)
{
	if (!func_292(bParam0, 0))
	{
		return func_411(func_313(bParam0), iParam1);
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

int func_294(bool bParam0)
{
	if (!func_211() && func_412())
	{
		return 1;
	}
	return func_293(bParam0, 1.931199E+13f);
}

bool func_295(bool bParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_413(bParam0))
	{
		return false;
	}
	bVar1 = func_289(iParam3, 2);
	bVar2 = func_306(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_306(bParam0, -982726.7f, bVar1);
	if (func_306(bParam0, 0.003804697f, bVar1))
	{
		bParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_414(bParam0, &fVar0) || func_415(bParam0, &fVar0)))
	{
		bParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		bParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_301())
		{
			bParam1 = -2.401104E+18f;
		}
		else
		{
			bParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		bParam1 = -982726.7f;
	}
	else if (func_302(15) && func_306(bParam0, 1.109321E-25f, bVar1))
	{
		bParam1 = 1.109321E-25f;
	}
	if (bParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return bParam1;
}

bool func_296(bool bParam0, bool bParam1)
{
	return (func_300(bParam0, 0.003804697f) && !func_416(bParam0, 0.003804697f, bParam1));
}

bool func_297(bool bParam0)
{
	bool bVar0;

	bVar0 = func_183(bParam0, 1);
	if (bVar0 != 0 && func_306(bVar0, 0.003804697f, 0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382125E-27f))
		{
			return true;
		}
	}
	return false;
}

bool func_298(bool bParam0, int iParam1)
{
	*iParam1 = func_417(bParam0, 1);
	return *iParam1 != 0;
}

bool func_299(bool bParam0, int iParam1)
{
	*iParam1 = func_418(bParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_300(bool bParam0, bool bParam1)
{
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_306(func_183(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

bool func_301()
{
	return Global_1915643.f_22477;
}

bool func_302(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_164(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_303(bool bParam0, bool bParam1)
{
	if (!func_293(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_293(bParam0, -0.4876374f))
		{
			return func_183(bParam0, 1) != 0;
		}
		if ((func_416(bParam0, -982726.7f, 0) || func_416(bParam0, 2.273041E-17f, 0)) || func_416(bParam0, -2.401104E+18f, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_304(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_419(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_307(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_308(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_305(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<5> Var1;

	*bParam1 = 0;
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (!func_293(bParam0, 2.791187f))
	{
		if (func_420(bParam0))
		{
			return false;
		}
	}
	if (func_293(bParam0, 5.144831E-36f) || func_293(bParam0, 8.874786E+09f))
	{
		return false;
	}
	if (func_182(bParam0))
	{
		return false;
	}
	bVar0 = func_183(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (!func_306(bVar0, -2.401104E+18f, 0))
	{
		return false;
	}
	if (Global_1915643.f_22504.f_2 == 1)
	{
		Var1 = { func_318(bParam0, 0, 0) };
		if (Var1.f_4 == 4.978612f)
		{
			return false;
		}
	}
	*bParam1 = bVar0;
	return true;
}

bool func_306(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_413(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_307(bParam0, bParam1);
	}
	return true;
}

bool func_307(bool bParam0, bool bParam1)
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
		if (Var0[iVar474 /*47*/] == bParam1)
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

bool func_308(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_315(bParam0, bParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915643.f_20638)
	{
		iVar34 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
		}
		else
		{
			if (Var0[iVar32 /*2*/] == 3.996812E+36f)
			{
				if (!bParam4 && !func_311(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_310(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_421(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_422(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_378(Var0[iVar32 /*2*/], 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32 /*2*/].f_1)
				{
					*uParam2 = { Var0[iVar32 /*2*/] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

int func_309(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!func_292(bParam0, 0))
	{
		Global_1051832.f_81 = 0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	bVar1 = func_305(bParam0, &bVar0);
	if ((bParam2 && bVar1) || ((func_301() && bVar1) && iParam1 == 0))
	{
		if (func_306(bVar0, 0.003804697f, 0) && !func_307(bVar0, 0.003804697f))
		{
			Global_1051832.f_46 = 0;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
		else if (func_306(bVar0, -2.401104E+18f, 0))
		{
			if (bParam3)
			{
				iVar2 = func_423(bVar0, -2.401104E+18f, 0, 1);
			}
			else
			{
				iVar2 = func_344(func_423(bVar0, -2.401104E+18f, 0, 1));
			}
			Global_1051832.f_46 = iVar2;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_180(bParam0, iVar3, 1, -1, 1);
	}
	bVar4 = false;
	if (func_424(bParam0))
	{
		bVar4 = func_425(bParam0);
	}
	else if (func_426(bParam0))
	{
		bVar4 = func_427(bParam0);
	}
	else if (func_428(bParam0))
	{
		bVar4 = func_429(bParam0);
	}
	else if (func_430(bParam0))
	{
		bVar4 = func_431(bParam0);
	}
	if (bVar4 != 0)
	{
		iVar2 = func_423(bVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_432(iVar3))
		{
			if (func_433(bVar4, 3.414007E-11f, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar5) && !bParam3)
		{
			iVar2 = func_344(iVar2);
		}
		Global_1051832.f_81 = bParam0;
		return iVar2;
	}
	if (iVar3 == 0.003804697f)
	{
		Global_1051832.f_81 = bParam0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_342(bParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_432(iVar3))
		{
			if (func_343(bParam0, 3.414007E-11f, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar6) && !bParam3)
		{
			iVar2 = func_344(iVar2);
		}
		Global_1051832.f_46 = iVar2;
		Global_1051832.f_81 = bParam0;
		if (Global_1051832.f_82 != Global_1051832.f_81)
		{
			Global_1051832.f_82 = Global_1051832.f_81;
		}
		else
		{
			Global_1051832.f_82 = 0;
		}
		return iVar2;
	}
	Global_1051832.f_46 = 0;
	return -1;
}

bool func_310(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(0, iParam0);
}

bool func_311(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_354() == 0)
	{
		return func_434(iParam0);
	}
	return iParam0 <= func_435();
}

bool func_312(bool bParam0, bool bParam1, bool bParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;

	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_308(func_183(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_317(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_436(0)) && !func_437());
	iVar37 = -1;
	if (Global_1915643.f_20638)
	{
		iVar37 = Global_1915643.f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_311(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_310(iVar32)))
			{
			}
			else
			{
				iVar36 = func_421(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_422(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_378(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_438(Var0[iVar34 /*2*/]) || func_439(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_440(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_441(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_442(7, Var0[iVar34 /*2*/])) + func_443(Var0[iVar34 /*2*/])) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { Var0[iVar34 /*2*/] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

bool func_313(bool bParam0)
{
	return bParam0;
}

bool func_314(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_444(bParam0, 2))
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

bool func_315(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_413(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_445(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_316(bool bParam0)
{
	if (func_446(bParam0) == -1.955052E+34f || func_446(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

bool func_317(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_447(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

struct<5> func_318(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_448(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_375(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_319(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_449(bParam1) };
			if (iParam2 && func_450(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_451(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_451(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_452(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_453(bParam1) };
			switch (func_446(bParam0))
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
			if (func_454(bParam0, -2.580501E-27f))
			{
				Var0 = { func_319(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_454(bParam0, -4.220332E-15f))
			{
				Var0 = { func_319(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_319(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_454(bParam0, -3.171238E-21f))
			{
				Var0 = { func_319(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_455(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_454(bParam0, -3.171238E-21f))
			{
				Var0 = { func_319(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_319(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_292(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_456(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_320(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_321(struct<4> Param0)
{
	if (!func_320(&Param0))
	{
		return false;
	}
	if (func_457(&Param0))
	{
		return false;
	}
	return func_459(func_458(Param0));
}

int func_322(bool bParam0)
{
	if (!func_292(*bParam0, 0))
	{
		return 0;
	}
	if (!func_460(*bParam0))
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

int func_323(int* iParam0, bool bParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<18> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_461(iParam0, bParam1, &Var0, fParam4, iParam6, iParam7, bParam8))
	{
		return 0;
	}
	func_462(Var0);
	return 1;
}

bool func_324(bool bParam0)
{
	return func_293(bParam0, 4186.055f);
}

bool func_325(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, float fParam7, int iParam8, float fParam9, bool bParam10)
{
	bool bVar0;
	struct<17> Var1;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	int iVar21;
	float fVar22;
	var uVar23;
	struct<4> Var28;
	struct<4> Var32;
	struct<4> Var36;
	bool bVar40;
	bool bVar41;
	struct<11> Var42;
	int iVar56;
	int iVar57;

	if (!func_292(bParam1, 0))
	{
		return false;
	}
	if (!func_463(iParam0, 0))
	{
		return false;
	}
	if (iParam8 == 0)
	{
		iParam8 = func_180(bParam1, iParam8, 1, -1, 1);
	}
	bVar0 = false;
	if (func_302(15))
	{
		bVar0 = true;
	}
	func_464(&fParam9, 32);
	func_464(&fParam9, 64);
	func_464(&fParam9, 4);
	func_464(&fParam9, 128);
	if (iParam6 < 1)
	{
		iParam6 = 1;
	}
	if (!func_465(iParam0, bParam1, Param2, -5.45926E-19f, iParam8, iParam6, fParam9, 1))
	{
		return false;
	}
	Var1 = { func_466(bParam1, Param2, 4.978612f, iParam6, 0) };
	Var1.f_13 = iParam8;
	Var1.f_12 = 3787186f;
	*fParam7 = { Var1 };
	if (!func_467(iParam0, 7.184882E+22f))
	{
		return false;
	}
	bVar18 = false;
	bVar19 = false;
	bVar20 = Global_1915643.f_20241.f_49;
	iVar21 = Global_1915643.f_20241.f_50;
	Var42.f_9 = -5.45926E-19f;
	iVar56 = 0;
	while (iVar56 < 16)
	{
		if (!func_292(Global_1051832.f_47[iVar56], 0))
		{
		}
		else if (!func_468(Global_1051832.f_47[iVar56], bVar20, &fVar22, &Var32, &uVar23, 1, iVar21))
		{
		}
		else
		{
			Var28 = { func_319(Global_1051832.f_47[iVar56], Var32, fVar22, 0) };
			if (func_469(Global_1051832.f_47[iVar56]))
			{
				if (!func_451(Global_1051832.f_47[iVar56], &Var32, fVar22, 0, 0))
				{
					if (!Global_1051832.f_47.f_17[iVar56])
					{
					}
					else if (func_470(Global_1051832.f_47[iVar56]))
					{
					}
					else
					{
						bVar41 = iParam8;
						if (func_300(Global_1051832.f_47[iVar56], 0.003804697f))
						{
							bVar41 = 0.003804697f;
						}
						if (bVar0 && bVar41 != 0.003804697f)
						{
							if (!func_471(iParam0, Global_1051832.f_47[iVar56], Var32, fVar22, 1, &Var1, 0, bVar41, fParam9, 1))
							{
								bVar18 = false;
								Jump @827; //curOff = 510
							}
							else
							{
								bVar19 = true;
							}
						}
						else if (!bVar0 || bVar41 == 0.003804697f)
						{
							if (!func_472(iParam0, Global_1051832.f_47[iVar56], Var32, fVar22, !bVar0, &Var1, 0, bVar41, 0, fParam9, 0))
							{
								bVar18 = false;
								Jump @827; //curOff = 583
							}
							else
							{
								bVar19 = true;
							}
						}
						else
						{
							bVar18 = false;
						}
						else
						{
							bVar18 = true;
							Jump @818; //curOff = 604
							if (!bVar0)
							{
								if (!Global_1051832.f_47.f_17[iVar56])
								{
									bVar40 = func_473(Var32, fVar22, 0, -1);
									if (!func_292(bVar40, 0))
									{
									}
									else
									{
										Var36 = { func_319(bVar40, Var36, fVar22, 0) };
										if (!func_474(Var36, Global_1051832.f_47.f_17[iVar56], 0))
										{
											if (!func_455(Var36, &Var42, 1, 0, -1))
											{
											}
											if (Var42.f_10 == Global_1051832.f_47.f_17[iVar56])
											{
												bVar18 = true;
											}
											else
											{
												bVar18 = false;
											}
											else
											{
												Jump @753; //curOff = 747
												bVar18 = true;
												Jump @818; //curOff = 753
												if (!func_455(Var28, &Var42, 1, 0, -1))
												{
												}
												if (Var42.f_10 != Global_1051832.f_47.f_17[iVar56])
												{
													if (!func_474(Var28, 1, 0))
													{
														bVar18 = false;
													}
													else
													{
														Jump @818; //curOff = 812
														bVar18 = true;
														iVar56++;
													}
													if (!bVar18)
													{
														func_475(iParam0);
														return false;
													}
													if (bVar19)
													{
														if (bParam10 && !func_476(iParam0))
														{
															return false;
														}
														else
														{
															iVar57 = WEAPON::_GET_WEAPONTYPE_SLOT(bVar20);
															if (!MISC::IS_BIT_SET(Global_1051832.f_4481[(func_477(iVar57, 1) / 32)], (func_477(iVar57, 1) % 32)))
															{
																func_479(func_478(404.3656f, 3.049929E+30f), 1);
																MISC::SET_BIT(&(Global_1051832.f_4481[(func_477(iVar57, 1) / 32)]), (func_477(iVar57, 1) % 32));
															}
														}
													}
													return true;
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

bool func_326(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, int iParam7, int iParam8, float fParam9, int iParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;
	struct<18> Var17;

	if (!func_463(iParam0, 0))
	{
		return false;
	}
	if (iParam10 == 0)
	{
		iParam10 = func_180(bParam1, iParam10, 1, iParam11, 1);
	}
	if (!func_465(iParam0, bParam1, Param2, fParam6, iParam10, iParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_466(bParam1, Param2, fParam6, iParam7, bParam12) };
	Var0.f_13 = iParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (func_375(bParam1) == -42.1084f)
	{
		Var17.f_9 = 1;
		Var17.f_11 = -5.45926E-19f;
		Var17 = { Var0 };
		if (!func_480(iParam0, Var17, 4.059549E+37f, fParam9, -1))
		{
			return false;
		}
	}
	else if (!func_481(iParam0, Var0, 4.059549E+37f, fParam9, iParam11))
	{
		return false;
	}
	return true;
}

void func_327(struct<14> Param0, var uParam14, var uParam15, var uParam16)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = Param0.f_8;
	iVar1 = Param0.f_13;
	if (func_343(bVar0, 3.414007E-11f, iVar1, 1, 0) > 0)
	{
		func_482("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else if (INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(bVar0, 0))
	{
		iVar2 = func_483(bVar0, 0);
		if (!AUDIO::_IS_SCRIPTED_AUDIO_CUSTOM(iVar2, -2.291973E+37f))
		{
			AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
		}
		else
		{
			AUDIO::_PLAY_SOUND_FROM_ITEM(iVar2, -2.291973E+37f, 0);
		}
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

float func_328(bool bParam0)
{
	if (!func_316(bParam0))
	{
		return 0;
	}
	if (func_484(bParam0))
	{
		return -4.07217E-32f;
	}
	if (func_293(bParam0, -3.639815E-14f))
	{
		return -6.335257E+35f;
	}
	if (func_293(bParam0, -3.567722E+12f))
	{
		return -5.414914E+13f;
	}
	if (func_293(bParam0, 2.768968E+15f))
	{
		return 5.15176E-06f;
	}
	if (func_293(bParam0, 5.250853E+36f))
	{
		return -1.128444E-20f;
	}
	return 1.335924E-32f;
}

bool func_329(bool bParam0)
{
	return bParam0;
}

int func_330(int iParam0)
{
	int iVar0;

	if (!func_485(iParam0))
	{
		return 0;
	}
	iVar0 = func_486(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_487(iParam0, 1);
	}
	return 0;
}

void func_331(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::CLEAR_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

void func_332(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_17418.f_2585[*iParam0];
	MISC::SET_BIT(&uVar0, *iParam1);
	Global_17418.f_2585[*iParam0] = uVar0;
}

void func_333(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		func_488(iParam0);
	}
}

bool func_334()
{
	return Global_1220705.f_26;
}

bool func_335(vector3 vParam0)
{
	switch (vParam0.x)
	{
		case 0:
		default:
			return false;
			if (vParam0.y == -1)
			{
				return false;
			}
		case 1:
			if (vParam0.z == 0)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_336(vector3 vParam0, vector3 vParam3)
{
	if (vParam0.x != vParam3.x)
	{
		return false;
	}
	switch (vParam0.x)
	{
		case 0:
			if (vParam0.y != vParam3.y)
			{
				return false;
			}
			break;
		case 1:
			if (vParam0.z != vParam3.z)
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_337(var uParam0)
{
	bool bVar0;

	if (!func_44(*uParam0, &bVar0))
	{
		return false;
	}
	return func_181(bVar0, func_180(bVar0, 0, 1, -1, 1), 1);
}

int func_338(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_489();
	}
	if (!func_490(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_491(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

int func_339()
{
	return Global_1940239.f_1556;
}

bool func_340(var uParam0)
{
	switch (*uParam0)
	{
		case 239629152:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-5.345253E-29f);
		default:
			break;
	}
	return false;
}

bool func_341(int iParam0, char* sParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 3:
		default:
			return false;
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 4:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 5:
			StringCopy(sParam1, "hasEnoughMoney", 64);
			*bParam2 = 0;
			return true;
		case 7:
			StringCopy(sParam1, "notEnoughMoney", 64);
			*bParam2 = 1;
			return true;
	}
}

int func_342(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_300(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_423(func_183(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_317(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_343(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_433(func_183(bParam0, 0), iParam1, bParam2, bParam4, 1);
	}
	if (!func_317(bParam0, bParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

int func_344(int iParam0)
{
	return (iParam0 / 100);
}

bool func_345(int iParam0)
{
	return (func_432(iParam0) || func_492(iParam0));
}

bool func_346(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_493(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_347(int iParam0, char* sParam1, bool bParam2, char* sParam3, bool bParam4)
{
	int iVar0;
	char* sVar1;

	if (bParam4 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	sVar1 = MISC::VAR_STRING(0, bParam2);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(10, sParam1, sVar1, sParam3));
}

void func_348(int iParam0, char* sParam1, bool bParam2, bool bParam3, char* sParam4, bool bParam5)
{
	int iVar0;
	char* sVar1;
	char* sVar2;

	if (bParam5 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	sVar1 = MISC::VAR_STRING(0, bParam2);
	sVar2 = MISC::VAR_STRING(0, bParam3);
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, MISC::VAR_STRING(42, sParam1, sVar1, sVar2, sParam4));
}

void func_349(var uParam0)
{
	func_222(uParam0->f_348, 0, 1, 1);
	func_494(uParam0->f_348, 0, 1);
	func_222(uParam0->f_346, 0, 1, 1);
	func_494(uParam0->f_346, 0, 1);
	func_222(uParam0->f_347, 0, 1, 1);
	func_494(uParam0->f_347, 0, 1);
}

bool func_350(int* iParam0, int* iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	bVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0);
	bVar1 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam1);
	if (!bVar0 && !bVar1)
	{
		func_495(*iParam0, 0, 0, 0);
		func_495(*iParam1, 0, 0, 0);
		return true;
	}
	else if (bParam2 && (!bVar0 || !bVar1))
	{
		func_495(*iParam0, 0, 0, 0);
		func_495(*iParam1, 0, 0, 0);
		return false;
	}
	else if (!bVar0 && bVar1)
	{
		func_495(*iParam0, 0, 0, 0);
		return func_476(iParam1);
	}
	else if (!bVar1 && bVar0)
	{
		func_495(*iParam1, 0, 0, 0);
		return func_476(iParam0);
	}
	if (*iParam0 == *iParam1)
	{
		bVar2 = func_476(iParam0);
		*iParam1 = { *iParam0 };
		return bVar2;
	}
	iVar3 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
	iVar4 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam1);
	if (iVar3 == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_495(*iParam0, 4, 0, 0);
		return func_476(iParam1);
	}
	else if (iVar4 == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam1);
		func_495(*iParam1, 4, 0, 0);
		return func_476(iParam0);
	}
	iVar5 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	iVar6 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam1);
	iVar7 = NETSHOPPING::_0xB6F4557060EF0FB4(*iParam0, *iParam1);
	if (iVar7 == -1)
	{
		func_495(*iParam0, 2, 0, 0);
		func_495(*iParam1, 2, 0, 0);
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam1);
		return false;
	}
	func_495(*iParam0, 4, 0, 0);
	func_495(*iParam1, 4, 0, 0);
	func_495(iVar7, 1, iVar5, iVar6);
	if (iVar5 == 4.059549E+37f || iVar5 == 1.704487E-19f)
	{
		iParam0->f_3 = 1;
	}
	if (iVar6 == 4.059549E+37f || iVar6 == 1.704487E-19f)
	{
		iParam1->f_3 = 1;
	}
	iParam0->f_1 = iVar7;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	iParam1->f_1 = iVar7;
	*iParam1 = -1;
	iParam1->f_2 = 0;
	return true;
}

bool func_351(int iParam0)
{
	if (!func_136(iParam0))
	{
		return false;
	}
	return Global_1291896.f_133[iParam0 /*5*/].f_4;
}

int func_352(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_496(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_495(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_495(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_353(int iParam0)
{
	Global_1110244.f_268.f_3384 = (Global_1110244.f_268.f_3384 || iParam0);
}

int func_354()
{
	return Global_1572887.f_14;
}

void func_355(int iParam0, float fParam1)
{
	if (!func_497(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] || fParam1);
}

void func_356(int iParam0, float fParam1)
{
	if (!func_497(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] - (Global_1915643.f_17884[iParam0] && fParam1));
}

bool func_357(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_358(var uParam0)
{
	func_498(uParam0, 0);
}

bool func_359(var uParam0)
{
	return func_357(*uParam0, 2);
}

int func_360(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

bool func_361(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_362(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_364(iParam0, 1);
	func_365(iParam0, 1);
	func_366(iParam0, 128);
}

void func_363(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_364(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_361(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_365(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_366(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

int func_367(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -6.678279E+09f;
		case 6:
			return 5.092616E-23f;
		case 7:
			return 0.08901188f;
		case 8:
			return -1958.136f;
		case 19:
			return 1.757544E+13f;
		case 13:
			return 3.930592E-06f;
		case 14:
			return 5.223587E-29f;
		case 15:
			return -1.052651E+23f;
		case 12:
			return -5.816004E-34f;
		case 122:
			return 6.001663E+28f;
		case 123:
			return -5.778385E+09f;
		case 5:
			return 7.941624E+18f;
		case 9:
			return -5.145404E-15f;
		case 10:
			return -4.620579E+31f;
		case 11:
			return -2023770f;
		case 16:
			return 2.931569E-07f;
		case 17:
			return 1.092197E+32f;
		case 18:
			return 2.132098E+27f;
		case 23:
			return 2.946846E-31f;
		case 24:
			return 3.221863E-32f;
		case 25:
			return -1.071896E-20f;
		case 22:
			return 2836841f;
		case 26:
			return -1.583762E+32f;
		case 45:
			return -559756.6f;
		case 48:
			return 1.891847E-07f;
		case 46:
			return 3.209415E-27f;
		case 49:
			return -0.001697428f;
		case 42:
			return 3.415819E-32f;
		case 43:
			return 2.619793E-33f;
		case 44:
			return 0.0001756163f;
		case 50:
			return -1.314186E+17f;
		case 51:
			return -13861.96f;
		case 52:
			return 7.656175E-30f;
		case 53:
			return -8.745837E+37f;
		case 63:
			return -1.646639E+21f;
		case 56:
			return 1.11115E+13f;
		case 57:
			return -2.158932E+24f;
		case 60:
			return -2.074173E-38f;
		case 124:
			return 7.61699E+14f;
		case 125:
			return -1.392405E-19f;
		case 54:
			return 6.589171E+22f;
		case 55:
			return 1.156345E-20f;
		case 59:
			return -1.659592E-06f;
		case 58:
			return 3.946506E-35f;
		case 61:
			return -5.605502E-10f;
		case 62:
			return -3.081603E-38f;
		case 27:
			return -1.891411E+11f;
		case 28:
			return -4.238571E-26f;
		case 33:
			return 0.001610436f;
		case 31:
			return 1.055256E-27f;
		case 34:
			return 2.704235E-11f;
		case 35:
			return 1.446313E-28f;
		case 30:
			return 1.328889E-24f;
		case 39:
			return -1.990651E-06f;
		case 126:
			return 2.271166E+18f;
		case 29:
			return -4.124625E-13f;
		case 36:
			return 5.755767E-28f;
		case 37:
			return -6.40899E+13f;
		case 38:
			return -1430.345f;
		case 68:
			return 2.766683E+36f;
		case 69:
			return 7.8227E-06f;
		case 70:
			return 5.290563E+31f;
		case 71:
			return 1.985556E-17f;
		case 74:
			return -6.774944E+25f;
		case 127:
			return -3.091904E+32f;
		case 75:
			return -2.34763E-33f;
		case 72:
			return -9.884961E+18f;
		case 73:
			return 2.526965E+12f;
		case 83:
			return 9.748861E-16f;
		case 84:
			return -1.269082E+11f;
		case 85:
			return 4.319876E+13f;
		case 78:
			return 1.85519E-13f;
		case 87:
			return 1.119544E-12f;
		case 86:
			return 2.286067E-24f;
		case 82:
			return -1.186129E-24f;
		case 88:
			return 3.414019E+18f;
		case 81:
			return 139.4352f;
		case 91:
			return 7.167645E+19f;
		case 90:
			return -9.661501E+22f;
		case 120:
			return 3.526101E+21f;
		case 121:
			return 7.501371E-10f;
		case 77:
			return 2980.293f;
		case 79:
			return -1.801417E+24f;
		case 80:
			return -2.879967E-28f;
		case 89:
			return 1.105674E-10f;
		case 41:
			return 2.930603E+16f;
		case 98:
			return -3.188065E+25f;
		case 97:
			return 7.757542E-31f;
		case 93:
			return 2.462378E+13f;
		case 96:
			return -6.893608E-07f;
		case 94:
			return 3.550023E+16f;
		case 95:
			return 4.790249E-22f;
		case 128:
			return 8.133306E-16f;
		case 129:
			return -3.93835E-33f;
		case 0:
			return 80.73424f;
		case 1:
			return 1.347958E-16f;
		case 2:
			return -2.773782E-31f;
		case 101:
			return 1.558923E-35f;
		case 99:
			return 2.294131E-19f;
		case 100:
			return 1.213295E+29f;
		case 119:
			return -1.091912E-28f;
		case 133:
			return -1.264382f;
		case 152:
			return -3.515305E-20f;
		case 176:
			return 1.64784E+23f;
		case 177:
			return 5.003018f;
		case 178:
			return -2.562252E-20f;
		case 153:
			return 41.27814f;
		case 154:
			return 1.567787E-33f;
		case 147:
			return 4.415405E-32f;
		case 135:
			return 2.550329E+22f;
		case 136:
			return 2.77422E-16f;
		case 137:
			return 5.798392E+08f;
		case 138:
			return -1.004019E-28f;
		case 139:
			return -2.627055E+13f;
		case 140:
			return -4.514173E+36f;
		case 141:
			return -5.76357E-22f;
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return -4.480066E+07f;
		case 144:
			return 3.128354E+36f;
		case 145:
			return 4.82799E-20f;
		case 146:
			return 6.391131E+21f;
		case 47:
			return 0.03729688f;
		case 32:
			return 0.03729688f;
		case 21:
			return 0.03729688f;
		case 115:
			return 0.03729688f;
		case 92:
			return 0.03729688f;
		case 131:
			return 0.03729688f;
		case 20:
			return 0.03729688f;
		case 134:
			return -2.455795E+11f;
		case 179:
			return 2766996f;
		case 155:
			return -1.587301E+29f;
		case 156:
			return -4.606836E+28f;
		case 157:
			return 3.452008E-36f;
		case 158:
			return NaNf;
		case 67:
			return 4.921621E+16f;
		case 159:
			return 99.39199f;
		case 160:
			return -6.702547E-32f;
		case 161:
			return 6.240672E+34f;
		case 162:
			return 6.10996E-29f;
		case 65:
			return 4.325683E+11f;
		case 164:
			return 2.713322E+14f;
		case 165:
			return -14.89222f;
		case 166:
			return 9475.513f;
		case 167:
			return 5.074196E+37f;
		case 64:
			return 2.039205E-07f;
		case 168:
			return -3.945631E+20f;
		case 169:
			return -2.244019E+15f;
		case 170:
			return 1.756121E+18f;
		case 171:
			return 4.81626E+24f;
		case 172:
			return -9.719926E-38f;
		case 173:
			return 6.080284E+09f;
		case 174:
			return -2.116756E+30f;
		case 175:
			return 9.219983E-29f;
		case 66:
			return -2.27383E-36f;
		case 163:
			return -2.288724E+21f;
		case 108:
			return -2.075817E-25f;
		case 110:
			return -1.942438E-14f;
		case 109:
			return -4.915344E+09f;
		case 111:
			return 9.586019E+08f;
		case 112:
			return 9.236639E-23f;
		case 113:
			return -6.715591E-15f;
		case 114:
			return -0.01589598f;
		case 102:
			return -1.566179E-15f;
		case 105:
			return -1.044305E-38f;
		case 106:
			return NaNf;
		case 103:
			return -1.510513E-27f;
		case 104:
			return 3.068801E-32f;
		case 107:
			return -1.991238E-18f;
		case 116:
			return 6.552451f;
		case 130:
			return -1.047896E+19f;
		case 117:
			return 4.402083E-23f;
		case 118:
			return 1.206669E+09f;
		case 3:
			return 3.046649E-19f;
		case 4:
			return 3.120933E-30f;
		case 40:
			return -8.109014E+27f;
		case 76:
			return 0.009586659f;
		case 148:
			return 1852492f;
		case 149:
			return 2.747603E+32f;
		case 150:
			return 1.447315E-27f;
		case 151:
			return 6.372948E+12f;
		default:
			break;
	}
	return 0;
}

bool func_368(int iParam0)
{
	return func_361(iParam0, 2);
}

int func_369(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.16929E+26f;
				case 2:
					return 2.430904E-30f;
				case 3:
					return 2.430904E-30f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 5.113725E+08f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1.826001E+30f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -8398490f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -6.817581E+21f;
				case 2:
					return -5.072388E+36f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -3.728345E+21f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -2.576421E-33f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -2.694665E-07f;
				case 2:
					return 1.604061E+11f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 6.486689f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -4.20591E-27f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -0.006915503f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 6.307637E+37f;
				case 2:
					return 1.837849E-27f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1.047846E+13f;
				case 2:
					return -0.03134722f;
				case 3:
					return -4.487723E+27f;
				case 4:
					return -2.921234E-29f;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 9.8756E+23f;
				case 2:
					return -3.045896E-08f;
				case 3:
					return 5.236242E-37f;
				case 4:
					return -13891.08f;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 4.309298E+24f;
				case 2:
					return -737.8187f;
				case 3:
					return 3.751746E-28f;
				case 4:
					return -1.126888E-09f;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1.483273E-16f;
				case 2:
					return -5.794918E-10f;
				case 3:
					return -0.000399424f;
				case 4:
					return 3.240962E+12f;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1.58951E-27f;
				case 2:
					return -9.430125E-20f;
				case 3:
					return -3.236058E-29f;
				case 4:
					return 5212530f;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1.154921E+24f;
				case 2:
					return 2.302753E+28f;
				case 3:
					return 1.472263E-11f;
				case 4:
					return -3.328013E+35f;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -5.17054E+15f;
				case 2:
					return 3.954843E+36f;
				case 3:
					return 6.352565E+19f;
				case 4:
					return -5.603323E-25f;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -8.595918E-19f;
				case 2:
					return 3.666845E-05f;
				case 3:
					return 1.718141E-36f;
				case 4:
					return 6.211594E+22f;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1161577f;
				case 2:
					return 1.533561E+07f;
				case 3:
					return -1.126016E-20f;
				case 4:
					return 2.575075E+17f;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.304346E-06f;
				case 2:
					return -0.2376967f;
				case 3:
					return -6.614576E+13f;
				case 4:
					return 5.256889E+28f;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -6.249073E-06f;
				case 2:
					return 1.948295E+28f;
				case 3:
					return 1.057993E+16f;
				case 4:
					return -9.170274E-35f;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -3.430687E-19f;
				case 2:
					return 3.834453E-07f;
				case 3:
					return -4.372376E+14f;
				case 4:
					return 8.202017E-08f;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -2.418275E-27f;
				case 2:
					return -4.52328E+15f;
				case 3:
					return 2.554089E-09f;
				case 4:
					return 4.720443E+11f;
				default:
					break;
			}
			break;
	}
	return 0;
}

void func_370()
{
}

var func_371()
{
	Global_1292096.f_459.f_1552++;
	if (Global_1292096.f_459.f_1552 >= NaNf)
	{
		Global_1292096.f_459.f_1552 = 0;
	}
	return Global_1292096.f_459.f_1552;
}

void func_372(struct<30> Param0, int iParam30)
{
	switch (iParam30)
	{
		case 0:
			Global_1292096.f_459.f_44[func_499() /*30*/] = { Param0 };
			func_500((func_499() + 1 % 40));
			Global_1292096.f_459.f_1546++;
			break;
		case 1:
			Global_1292096.f_459.f_1245[func_501() /*30*/] = { Param0 };
			func_502((func_501() + 1 % 10));
			Global_1292096.f_459.f_1547++;
			break;
	}
}

void func_373(int iParam0)
{
	if (iParam0 != -1)
	{
		Global_1915643.f_18246 = iParam0;
	}
}

int func_374(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_503())
	{
		return 0;
	}
	if (!func_211())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_504(&Global_0, 8);
	}
	func_504(&Global_0, 1);
	return 1;
}

int func_375(bool bParam0)
{
	vector3 vVar0;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_376(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_505(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_506("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_507(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_508(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_509(iVar1);
				return true;
			}
			iVar3++;
		}
		func_509(iVar1);
	}
	return false;
}

bool func_377(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_446(bParam0);
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
	iVar1 = func_510(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_511(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_512(bParam0);
	iVar2 = func_511(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_378(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_375(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_505(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_513(bParam0, 0);
	}
	if (func_514(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_515(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_379(int iParam0)
{
	if (!STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_516())
	{
		return 0;
	}
	STREAMING::REMOVE_IPL_HASH(iParam0);
	return 0;
}

bool func_380(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

int func_381(int iParam0, int iParam1)
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

bool func_382(int iParam0)
{
	int iVar0;

	iVar0 = func_383(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_383(int iParam0, int iParam1)
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

int func_384(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_517(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_387(iParam1, 1);
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

int func_385(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_380(iParam1))
	{
		return 0;
	}
	if (!func_518(iParam0))
	{
		return 0;
	}
	iVar0 = func_387(iParam0, 1);
	func_519(iParam0, iParam1, iParam2);
	if (func_520(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_521(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_522(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_523(vVar1))
		{
			if (func_524(vVar1.x, vVar1.y, vVar1.z))
			{
				func_525(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_526(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_526(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_386(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_387(int iParam0, int iParam1)
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

void func_388(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_389(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_390(var uParam0)
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

void func_391()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

int func_392(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 4.194E+28f;
		case 1:
			return -8.657245E-33f;
		case 2:
			return 9.369474E-09f;
		case 3:
			return -1.855429E+26f;
		case 4:
			return 1.576726E-13f;
		case 5:
			return 1.526336E-16f;
		case 6:
			return 2.271855E+07f;
		case 7:
			return -4.357062E-17f;
		case 8:
			return 5.234709E+11f;
		case 9:
			return -2.842184E+24f;
		case 10:
			return -1.205786E-06f;
		case 11:
			return -2.055955E+11f;
		case 12:
			return -2100.026f;
		case 13:
			return -2.712685E-22f;
		case 14:
			return 1.917612E-19f;
		case 15:
			return -1.138726E+07f;
		case 16:
			return 4.101503E-35f;
		case 17:
			return -1.059077E+37f;
		case 18:
			return 1.028787E+20f;
		case 19:
			return 459146.8f;
		case 20:
			return -1.933807E+26f;
		case 21:
			return 0.0589133f;
		case 22:
			return -1.645443E-28f;
		case 23:
			return -5.446338E-17f;
		case 24:
			return -7.673307E-14f;
		case 25:
			return 2.19083E-29f;
		case 26:
			return 5.223972E-19f;
		case 27:
			return -1.456021E-21f;
		case 28:
			return -1.4958E-33f;
		case 29:
			return 3.125337f;
		case 30:
			return 1.182823E+33f;
		case 31:
			return 4.966513E-07f;
		case 32:
			return -2.365252E+27f;
		case 33:
			return -1.391038E-09f;
		case 34:
			return -5.375099E+30f;
		case 35:
			return -1.06023E-22f;
		case 36:
			return 1.500645E+29f;
		case 37:
			return -6.770935E-16f;
		case 38:
			return 2.691511E+28f;
		case 39:
			return 3.397268E+19f;
		case 40:
			return 4.170437E-12f;
		case 41:
			return -2.523327E+37f;
		case 42:
			return -8.661791E+23f;
		case 43:
			return 1.014313E+24f;
		case 44:
			return 3.971592E-07f;
		case 45:
			return -9.421326E-34f;
		case 46:
			return 2.180808E+32f;
		case 47:
			return -0.001095409f;
		case 48:
			return -2.44377E-12f;
		case 49:
			return 6.557825E-07f;
		case 50:
			return 1.727169E-18f;
		case 51:
			return 5.197468E+26f;
		case 52:
			return 21077.97f;
		case 53:
			return -4.184273E-30f;
		case 54:
			return 1.155403E+37f;
		case 55:
			return -0.001804403f;
		case 56:
			return 4.457278E-26f;
		case 57:
			return 1.405172E-36f;
		case 58:
			return 1.014458E-09f;
		case 59:
			return 2.634154E-20f;
		case 60:
			return -2.575919E-20f;
		case 61:
			return 4.630567E+07f;
		case 62:
			return 8.502138E+34f;
		case 63:
			return 2.081225E+24f;
		case 64:
			return -404.1522f;
		case 65:
			return 3.017142E-15f;
		case 66:
			return -9.616156E-08f;
		case 67:
			return -3.847611E+20f;
		case 68:
			return -5.020987E+30f;
		case 69:
			return 5.23669E+37f;
		case 70:
			return 2.960705E+15f;
		case 71:
			return 57000.35f;
		case 72:
			return 0.01703773f;
		case 73:
			return -4.796311E-08f;
		case 74:
			return -7.935022E-22f;
		case 75:
			return -8.708554E+23f;
		case 76:
			return -3.064678E-05f;
		case 77:
			return 4.50876E-21f;
		case 78:
			return 3.942434E-13f;
		case 79:
			return 2.2867E-37f;
		case 80:
			return 2.830387E-11f;
		case 81:
			return 3.354086E-38f;
		case 82:
			return 7.486236E-28f;
		case 83:
			return 5.08311E+19f;
		case 84:
			return 3.577089E+22f;
		case 85:
			return 251.6366f;
		case 86:
			return 9.686418E-08f;
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

bool func_393(int iParam0, int* iParam1)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_28418[48 /*4*/].f_3;
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_367(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = -2.130137E-12f;
	Var0.f_3 = MISC::GET_HASH_KEY("sHash");
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(iParam1, &Var0);
	return true;
}

bool func_394(var uParam0, int iParam1, int iParam2)
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

bool func_395(var uParam0, int iParam1, int iParam2)
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

int func_396(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_397(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_398(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	struct<5> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 3.36884E-33f;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 2.195196E+18f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &Var0);
		Var0.f_2 = -7.369599E+36f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

int func_399(int iParam0)
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

void func_400(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_527(iParam0);
	if (!func_528(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_529(128) && !func_530(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_531() == 4)
	{
		func_267(18);
	}
	func_532(1024);
}

void func_401(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_402(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_403(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (ENTITY::DOES_ENTITY_EXIST(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (VOLUME::DOES_VOLUME_EXIST(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_404(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_405()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_533(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_406()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_407()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

void func_408(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;
	var uVar6;

	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	iVar1 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam1);
	if (iVar0 == 0 || iVar1 == 0)
	{
		return;
	}
	if (!INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iVar0, &uVar6, 8.681942E-06f, -1.942248E+12f, &uVar2))
	{
	}
	INVENTORY::_INVENTORY_COPY_ITEM_TO_INVENTORY(iVar0, iVar1, &uVar2, 0);
}

bool func_409(struct<2> Param0, var uParam2, struct<2> Param3, var uParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

void func_410(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_411(bool bParam0, int iParam1)
{
	if (!func_444(bParam0, 2))
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

bool func_412()
{
	return func_534(func_19(0));
}

bool func_413(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_414(bool bParam0, float fParam1)
{
	*fParam1 = func_535(bParam0, 1);
	return *fParam1 != 0;
}

bool func_415(bool bParam0, float fParam1)
{
	*fParam1 = func_536(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_416(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_292(bParam0, 0))
	{
		return func_537(func_313(bParam0), bParam1, bParam2);
	}
	if (func_182(bParam0) || func_293(bParam0, 2.791187f))
	{
		return func_307(func_183(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_354() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_538(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_417(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_539(iVar0, 1, 0);
		if (!func_317(bParam0, bVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_540(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_378(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_418(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_539(iVar0, 0, 1);
		if (!func_317(bParam0, bVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_378(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

bool func_419(bool bParam0, bool bParam1)
{
	if (!func_303(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_183(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_183(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_183(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_183(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_183(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_183(-7.708751E+16f, 1);
	}
	return func_183(bParam0, 1);
}

bool func_420(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_354() == -1)
	{
		if (func_541(bParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

int func_421(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_293(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_422(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_448(0) };
	Var0.f_4 = func_542(iParam1);
	Var5 = { func_319(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(0), &Var5, false);
	return iVar9;
}

int func_423(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_315(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_424(bool bParam0)
{
	return func_446(bParam0) == -947.1324f;
}

int func_425(bool bParam0)
{
	if (!func_424(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case -2068637111: /* GXTEntry: "The Copperhead Enforcer" */
			return -3.285949E+13f;
		case -1871922677: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return 5.762361E+10f;
		case -905031115: /* GXTEntry: "The Grizzlies Outlaw" */
			return -8.272988E+24f;
		case 1928115537: /* GXTEntry: "The Déchaux" */
			return 1.791106E-31f;
		case 453281150: /* GXTEntry: "The Mercer" */
			return -1.997163E+35f;
		case 153739721: /* GXTEntry: "The Schefield" */
			return -2.431348E+24f;
		case 1167678119: /* GXTEntry: "The Hettinger" */
			return -2.406163E+13f;
		case 736667462: /* GXTEntry: "The Ajaccio" */
			return -7.003636E+25f;
		case -673644764: /* GXTEntry: "The Tasman" */
			return -3.206121E+36f;
		case -980133221: /* GXTEntry: "The Zacateca" */
			return 2.434618E-35f;
		case -209930641: /* GXTEntry: "The Clayton" */
			return -2.456843E-24f;
		case -1735897526: /* GXTEntry: "The Wakeeney" */
			return -7.333456E+37f;
		case -482614352: /* GXTEntry: "The Wakeeney" */
			return -3.950906E+29f;
		case -1258944731: /* GXTEntry: "The Wakeeney" */
			return -8.711066E+17f;
		case 1536480356: /* GXTEntry: "The Wakeeney" */
			return -4.199621E+09f;
		case 1827632921: /* GXTEntry: "The Wakeeney" */
			return -0.0003483712f;
		case -1483084691: /* GXTEntry: "The Wakeeney" */
			return -2.224576E-12f;
		case -1855140882: /* GXTEntry: "The Bullard" */
			return -3.230598E+38f;
		case -1605932637: /* GXTEntry: "The Bullard" */
			return 2.70872E-28f;
		case 838274308: /* GXTEntry: "The Bullard" */
			return -3.142608E-28f;
		case 1423463110: /* GXTEntry: "The Bullard" */
			return 5.617801E+22f;
		case 1722021469: /* GXTEntry: "The Bullard" */
			return 2.560422E+33f;
		case 1293960018: /* GXTEntry: "The Bullard" */
			return 22988.79f;
		case 1084020314: /* GXTEntry: "The Garwood" */
			return -1.047537E-09f;
		case 1384905272: /* GXTEntry: "The Garwood" */
			return -1.893466E-20f;
		case 166258931: /* GXTEntry: "The Garwood" */
			return -3.777814E-31f;
		case -285691117: /* GXTEntry: "The Garwood" */
			return 8.258599E+35f;
		case -1506238056: /* GXTEntry: "The Garwood" */
			return 2.748126E-05f;
		case -141245365: /* GXTEntry: "The Garwood" */
			return -1.946228E-16f;
		case 962175652: /* GXTEntry: "The Carthage" */
			return 2.83108E+10f;
		case 687079897: /* GXTEntry: "The Carthage" */
			return -4.618553E+23f;
		case 373021801: /* GXTEntry: "The Carthage" */
			return -1.196108E+32f;
		case 75839740: /* GXTEntry: "The Carthage" */
			return -3.027847E+35f;
		case -208529642: /* GXTEntry: "The Carthage" */
			return 1.495951E-24f;
		case -504466477: /* GXTEntry: "The Carthage" */
			return -3.280089E+08f;
		case -1896067425: /* GXTEntry: "The Wentworth" */
			return -4.237919E+30f;
		case -1732419039: /* GXTEntry: "The Wentworth" */
			return 6.96756E-37f;
		case 1620668890: /* GXTEntry: "The Wentworth" */
			return 3.534025E-25f;
		case 2095557238: /* GXTEntry: "The Wentworth" */
			return 1.974315E-24f;
		case -700719823: /* GXTEntry: "The Wentworth" */
			return 4.536867E-13f;
		case -520949089: /* GXTEntry: "The Wentworth" */
			return 0.04651987f;
		case 783963696: /* GXTEntry: "The Wallingford" */
			return -1.769255E-22f;
		case 477409701: /* GXTEntry: "The Wallingford" */
			return -2.325254E+35f;
		case 325427079: /* GXTEntry: "The Wallingford" */
			return -4.227626E+07f;
		case -2127824110: /* GXTEntry: "The Wallingford" */
			return -1.868177E+18f;
		case -478920799: /* GXTEntry: "The Wallingford" */
			return -7.659907E-10f;
		case -784753876: /* GXTEntry: "The Wallingford" */
			return 152.7005f;
		case -1991069642: /* GXTEntry: "The Gladewater" */
			return 1.583741E+19f;
		case 1534579841: /* GXTEntry: "The Gladewater" */
			return 6.799183E+15f;
		case 1755770591: /* GXTEntry: "The Gladewater" */
			return 0.008179452f;
		case 852591413: /* GXTEntry: "The Gladewater" */
			return -1.671268E-07f;
		case -1269692868: /* GXTEntry: "The Gladewater" */
			return -8.789632E-16f;
		case -1638540740: /* GXTEntry: "The Gladewater" */
			return -1.293673E+22f;
		case 1404368072: /* GXTEntry: "The Londonderry" */
			return -5.411146E-22f;
		case 561909851: /* GXTEntry: "The Londonderry" */
			return -2.537267E-11f;
		case 1369829534: /* GXTEntry: "The Londonderry" */
			return 2.895282E+38f;
		case 669687080: /* GXTEntry: "The Londonderry" */
			return -3.004937E-28f;
		case 908671397: /* GXTEntry: "The Londonderry" */
			return -6.62976E-18f;
		case -50313388: /* GXTEntry: "The Londonderry" */
			return -2.144196E-07f;
		case 896138350: /* GXTEntry: "The Monterey" */
			return -2.06615E+15f;
		case -1347489546: /* GXTEntry: "The Monterey" */
			return -1.545265E+07f;
		case -1127937242: /* GXTEntry: "The Monterey" */
			return -7.466492E+37f;
		case -821055557: /* GXTEntry: "The Monterey" */
			return 1.704003E-20f;
		case -666844643: /* GXTEntry: "The Monterey" */
			return 3.753521E-29f;
		case 1507149124: /* GXTEntry: "The Monterey" */
			return 61.55462f;
		case 1797068311: /* GXTEntry: "The Sunderland" */
			return 2.358636E-23f;
		case 1509389260: /* GXTEntry: "The Sunderland" */
			return -1.967847E-33f;
		case 1196052082: /* GXTEntry: "The Sunderland" */
			return 4.565281E+13f;
		case 914074837: /* GXTEntry: "The Sunderland" */
			return -905.7808f;
		case 599099209: /* GXTEntry: "The Sunderland" */
			return -2.238962E-19f;
		case 774216741: /* GXTEntry: "The Sunderland" */
			return -4.487284E-30f;
		case 180232641: /* GXTEntry: "The Worthington" */
			return -1.119912E-23f;
		case -1597878813: /* GXTEntry: "The Worthington" */
			return -1.536338E-17f;
		case -895311481: /* GXTEntry: "The Worthington" */
			return -3.052666E-21f;
		case -2075290374: /* GXTEntry: "The Worthington" */
			return -31613.13f;
		case -1349063796: /* GXTEntry: "The Worthington" */
			return 1.436807E+35f;
		case 1649135863: /* GXTEntry: "The Worthington" */
			return 9.466807E+26f;
		case 10498108: /* GXTEntry: "The Tyringham" */
			return -1.506119E-05f;
		case 317576407: /* GXTEntry: "The Tyringham" */
			return -1170.297f;
		case -803057859: /* GXTEntry: "The Tyringham" */
			return -3.243458E+16f;
		case -229076051: /* GXTEntry: "The Tyringham" */
			return -9.110928E-08f;
		case -1445559642: /* GXTEntry: "The Tyringham" */
			return -45.06712f;
		case -1140185331: /* GXTEntry: "The Tyringham" */
			return -2.181795E+14f;
		case 913153433:
			return 6.02028E-32f;
		case 606730510:
			return -9.956359E-33f;
		case -964051505:
			return 0.01536118f;
		case -1267459676:
			return 3.634253E-16f;
		case -483756272:
			return 2.064683E+12f;
		case -805187393:
			return -1.931095E+11f;
		case -1116096467:
			return 1.17126E+26f;
		case -4997980:
			return 1.091269E+15f;
		case -305588017:
			return -1.432989E+16f;
		case -694850968:
			return -3.329599E+07f;
		case -985380922:
			return -0.09419774f;
		case 974827889:
			return -2.130991E-10f;
		case -1156770257:
			return -1.06927E+10f;
		case -843695231:
			return 8.114789E+37f;
		case 1854078224:
			return -1.035175E-21f;
		case -2137185980:
			return 3.307489E-22f;
		case -1830566447:
			return 2.038346E-35f;
		case -1537546049:
			return -390.474f;
		case 469166476:
			return -4.992132E+37f;
		case 1229079574:
			return -2.671688E+07f;
		case 990422947:
			return 1.807599E-36f;
		case -229665218:
			return -1.353163E+29f;
		case -527568197:
			return 1.860282E-14f;
		case 242634379:
			return 6.710602E-06f;
		case -521123265:
			return -3.177446E-23f;
		case 766501761:
			return 1.763883E+24f;
		case -1135443708:
			return 8.006464E+37f;
		case 609997105:
			return 6.004272E+07f;
		case 378877348:
			return 2.978815E+16f;
		case -938370918:
			return 79.7342f;
		case -1651298733:
			return -0.4773238f;
		case -494651336:
			return -6.693474E+17f;
		case -1307650230:
			return -6.021299E+25f;
		case 1220379817:
			return 7918.224f;
		case 1450975270:
			return -16316.71f;
		case 1835159026:
			return -1.052941E-26f;
		case 1161689282:
			return -1.804669E+33f;
		case 1472306629:
			return 2.905265E-27f;
		case 23785761:
			return 3.389405E-38f;
		case 332895738:
			return 3.410421E+28f;
		case -860715087:
			return 3.732381E+17f;
		case -151856079:
			return 1.731034E+17f;
		case -477077213:
			return 4.619364E-28f;
		case -783270749:
			return -2.612634E+22f;
		case -2043500951:
			return -1.088541E+33f;
		case -705706526:
			return 1.018202E-07f;
		case 1219931046:
			return 9235.166f;
		case -1794096032:
			return 2.814574E-33f;
		case -1308806047:
			return 1.199314E+07f;
		case -1666643527:
			return 1.495157E+35f;
		case 1150998938:
			return 8.972291E+21f;
		case 927219437:
			return 1.110676E+30f;
		case 1761059415:
			return 3.375037E+38f;
		case 1523975700:
			return 8.5412E-29f;
		case joaat("CLOTHING_OUTFIT_ITEM_M_SEASON_S02_001"):
			return -7.147675E+37f;
		case joaat("CLOTHING_OUTFIT_ITEM_M_SEASON_S02_002"):
			return 0.0001884012f;
		case 2118934498:
			return 2.441889E+17f;
		case 275416096:
			return -1.283982E+31f;
		case 275775515: /* GXTEntry: "The Copperhead Enforcer" */
			return 2.008455E+11f;
		case -1160690408: /* GXTEntry: "The Blackrose Bounty Hunter" */
			return -1.126476E+30f;
		case -1763097043: /* GXTEntry: "The Grizzlies Outlaw" */
			return 8.518619E-35f;
		case 912572382: /* GXTEntry: "The Breckenridge" */
			return -4.144805E-12f;
		case 73391061: /* GXTEntry: "The Roanoke" */
			return -0.5194395f;
		case 332495544: /* GXTEntry: "The Summerfield" */
			return -8.436013E-30f;
		case -501475506: /* GXTEntry: "The Kimberly" */
			return -1.041828E-18f;
		case -280579677: /* GXTEntry: "The Danube" */
			return -3.191132E+31f;
		case -814845497: /* GXTEntry: "The Dauphine" */
			return -7376.968f;
		case -1610902814: /* GXTEntry: "The Redington" */
			return -4.855925E+13f;
		case -1313261987: /* GXTEntry: "The Quinton" */
			return 1.34226E-14f;
		case -668402627: /* GXTEntry: "The Wakeeney" */
			return -7.127158E-21f;
		case -1436966753: /* GXTEntry: "The Wakeeney" */
			return -2.504816E-29f;
		case -1105410003: /* GXTEntry: "The Wakeeney" */
			return 5.917291E+34f;
		case -792302208: /* GXTEntry: "The Wakeeney" */
			return 8.765725E-13f;
		case -1544547372: /* GXTEntry: "The Wakeeney" */
			return 4.388357E+22f;
		case -1268599623: /* GXTEntry: "The Wakeeney" */
			return -4.117865E-35f;
		case 1281867320: /* GXTEntry: "The Bullard" */
			return 1.762464E-23f;
		case -1699226913: /* GXTEntry: "The Bullard" */
			return 5.410436E-20f;
		case -1610553999: /* GXTEntry: "The Bullard" */
			return 6.203303E-09f;
		case -1909243438: /* GXTEntry: "The Bullard" */
			return 164.7791f;
		case -1551799186: /* GXTEntry: "The Bullard" */
			return 1.559393E+13f;
		case -1999554802: /* GXTEntry: "The Bullard" */
			return 3.625741E+23f;
		case 723981565: /* GXTEntry: "The Garwood" */
			return 1.711425E+22f;
		case 963752338: /* GXTEntry: "The Garwood" */
			return 1.561744E+12f;
		case 372402960: /* GXTEntry: "The Garwood" */
			return 1.953545E-36f;
		case 989901996: /* GXTEntry: "The Garwood" */
			return -8.162628E+30f;
		case -239754729: /* GXTEntry: "The Garwood" */
			return 4.882854E+19f;
		case 142266273: /* GXTEntry: "The Garwood" */
			return 5.122625E+08f;
		case 911761394: /* GXTEntry: "The Carthage" */
			return 2176663;
		case 1676688161: /* GXTEntry: "The Carthage" */
			return -2.144357E+28f;
		case 1907906229: /* GXTEntry: "The Carthage" */
			return 4.069247E+20f;
		case -1621282302: /* GXTEntry: "The Carthage" */
			return 1.239378E+11f;
		case -1801773954: /* GXTEntry: "The Carthage" */
			return -1.368791E-05f;
		case -1003029579: /* GXTEntry: "The Carthage" */
			return -2.827708E-16f;
		case 165089723: /* GXTEntry: "The Wentworth" */
			return -6.323801E+12f;
		case 395586869: /* GXTEntry: "The Wentworth" */
			return -2.636729E+22f;
		case 623560802: /* GXTEntry: "The Wentworth" */
			return -394144.5f;
		case 888203246: /* GXTEntry: "The Wentworth" */
			return -4.315713E-25f;
		case 1123550204: /* GXTEntry: "The Wentworth" */
			return -1.106961E-11f;
		case 1862360078: /* GXTEntry: "The Wentworth" */
			return -6.647085E-21f;
		case -1320869011: /* GXTEntry: "The Wallingford" */
			return -1.355374E+14f;
		case -1078345642: /* GXTEntry: "The Wallingford" */
			return -1.444544E+25f;
		case -571278136: /* GXTEntry: "The Wallingford" */
			return 1.631126E+35f;
		case -856663353: /* GXTEntry: "The Wallingford" */
			return -1.286188E-31f;
		case -632654469: /* GXTEntry: "The Wallingford" */
			return -1.3669E-20f;
		case -380562552: /* GXTEntry: "The Wallingford" */
			return -6.538843E-10f;
		case 1911459413: /* GXTEntry: "The Gladewater" */
			return -2.274897E-13f;
		case -1606456586: /* GXTEntry: "The Gladewater" */
			return -4.077399E+14f;
		case -1888892597: /* GXTEntry: "The Gladewater" */
			return 5.432032E-30f;
		case 1154823199: /* GXTEntry: "The Gladewater" */
			return -2.706792f;
		case 856068226: /* GXTEntry: "The Gladewater" */
			return 8.187985E+35f;
		case 1786380136: /* GXTEntry: "The Gladewater" */
			return 2.20589E+27f;
		case 1943475930: /* GXTEntry: "The Londonderry" */
			return -7.414377E-27f;
		case 1697315198: /* GXTEntry: "The Londonderry" */
			return -6.79877E-06f;
		case -1787340262: /* GXTEntry: "The Londonderry" */
			return -1.759896E-14f;
		case -1341845703: /* GXTEntry: "The Londonderry" */
			return 6.094228E-13f;
		case -1632670578: /* GXTEntry: "The Londonderry" */
			return 1.213189E+16f;
		case -932593662: /* GXTEntry: "The Londonderry" */
			return 1.640298E+07f;
		case -499308854: /* GXTEntry: "The Monterey" */
			return 1.969066E+31f;
		case -785677145: /* GXTEntry: "The Monterey" */
			return 0.000441706f;
		case -18849776: /* GXTEntry: "The Monterey" */
			return 89184.66f;
		case -806059467: /* GXTEntry: "The Monterey" */
			return 1.031608E-20f;
		case 91876671: /* GXTEntry: "The Monterey" */
			return 3.587905E-12f;
		case -199538046: /* GXTEntry: "The Monterey" */
			return 3.893657E-20f;
		case -1754780383: /* GXTEntry: "The Sunderland" */
			return 369967.6f;
		case -2050586146: /* GXTEntry: "The Sunderland" */
			return -3.433527E-18f;
		case -1622000367: /* GXTEntry: "The Sunderland" */
			return 1.880411E+27f;
		case -1930520502: /* GXTEntry: "The Sunderland" */
			return 1.967132E-05f;
		case 1689602008: /* GXTEntry: "The Sunderland" */
			return -6.088129E+16f;
		case 1384162159: /* GXTEntry: "The Sunderland" */
			return -5.06533E+27f;
		case -733625577: /* GXTEntry: "The Worthington" */
			return 159342.8f;
		case -370348443: /* GXTEntry: "The Worthington" */
			return 4.118066E+27f;
		case -1205728560: /* GXTEntry: "The Worthington" */
			return 4.144954E-27f;
		case 459985248: /* GXTEntry: "The Worthington" */
			return 3.894957E+25f;
		case 834207228: /* GXTEntry: "The Worthington" */
			return 4.726468E-10f;
		case 1230744937: /* GXTEntry: "The Worthington" */
			return -8.109389E+37f;
		case 1859098900: /* GXTEntry: "The Tyringham" */
			return 7.519461E-06f;
		case -2137310037: /* GXTEntry: "The Tyringham" */
			return 1.368749E-34f;
		case 1086995730: /* GXTEntry: "The Tyringham" */
			return 1.238602E-23f;
		case -1962290800: /* GXTEntry: "The Tyringham" */
			return 2.894204E+36f;
		case 1736084082: /* GXTEntry: "The Tyringham" */
			return -1.392772E-30f;
		case 2038967949: /* GXTEntry: "The Tyringham" */
			return 44.3497f;
		case -1732116082:
			return -7.255164E-34f;
		case -2043224964:
			return -3.913073E-25f;
		case 1970158315:
			return -1.255955E-19f;
		case 1655444839:
			return -6.094796E-09f;
		case 1373270980:
			return -5.878593E-32f;
		case 1058885194:
			return -6.798711E-31f;
		case -1944199774:
			return -3.442063E-07f;
		case 999079041:
			return -2.674531E-16f;
		case 635605293:
			return -2.249819E-24f;
		case 1493792634:
			return -2.412887E-33f;
		case -213406744:
			return 1.284299E+36f;
		case -505870069:
			return 2.013426E+10f;
		case -152330007:
			return -6.314635E+31f;
		case 2024678512:
			return 4.756464E-35f;
		case 1188643011:
			return -8.926254E+16f;
		case 1680243549:
			return -3.251606E+25f;
		case 845486043:
			return -2.690089E+34f;
		case -1351118334:
			return 6.578975E-35f;
		case -1206325201:
			return -1.740485E+12f;
		case -1514091649:
			return -2.180241E+13f;
		case 1284413724:
			return 8.814359E-11f;
		case 976581738:
			return 58.74585f;
		case 1895916033:
			return 3.35728E+34f;
		case 1588804965:
			return 1.488237E-32f;
		case -691537108:
			return -1.358272E-10f;
		case -2138714467:
			return -1.882349E-19f;
		case -1967660287:
			return -1.456814E+31f;
		case -1574858284:
			return -3.10294E+22f;
		case -1370707414:
			return -3.873816E+14f;
		case 1429764111:
			return -1896883f;
		case 1074060936:
			return 2.350236E-22f;
		case 1238037012:
			return 2.281757E-11f;
		case -1431915598:
			return -3.655575E+34f;
		case -1133947081:
			return 3.831366E-32f;
		case -987535189:
			return -6.281586E+13f;
		case -676262434:
			return -4.93844E+23f;
		case 1109042843:
			return 983.5434f;
		case 817890278:
			return -1.149983E+30f;
		case 1719496544:
			return -2.111402E+38f;
		case 1452003197:
			return 5.644485E-30f;
		case -2077939025:
			return -1.828695E-33f;
		case 2036208929:
			return 7.545888E-25f;
		case -1698171004:
			return -0.1579486f;
		case -1437165919:
			return 175941.8f;
		case -1206046162:
			return 1.530428E-15f;
		case -1020114856:
			return 4.557338E+27f;
		case -778869478:
			return 5.220431E+16f;
		case -558071952:
			return -6.143571E+29f;
		case -194211249:
			return -1.197601E-24f;
		case -816265268:
			return -2.930564E+08f;
		case -1115020241:
			return 1.121342E+31f;
		case -1412726606:
			return -2.386463E-14f;
		case 484467366:
			return 2.095066E+09f;
		case -1506708098:
			return -2.776153E-36f;
		case joaat("CLOTHING_OUTFIT_ITEM_F_SEASON_S02_001"):
			return 0.0006342587f;
		case joaat("CLOTHING_OUTFIT_ITEM_F_SEASON_S02_002"):
			return 6.387239E-15f;
		case 1762800129:
			return -3.062706E+29f;
		case 847004886:
			return -4.337193E+18f;
		default:
			break;
	}
	return 0;
}

bool func_426(bool bParam0)
{
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	return func_446(bParam0) == 1.988047E-33f;
}

int func_427(bool bParam0)
{
	if (!func_426(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_001"):
			return 4.173306E+37f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_002"):
			return 2.393982E+26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_003"):
			return 4.03685E+13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_000_TINT_004"):
			return 928.8869f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_001"):
			return -2.228585E-34f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_002"):
			return -2.534239E-11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_003"):
			return -3.292454E-17f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_001_TINT_004"):
			return 6.378785E+19f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_001"):
			return -529290.8f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_002"):
			return -1.344826E+08f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_003"):
			return -3.835049E+18f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_002_TINT_004"):
			return 8.750689E+31f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_001"):
			return 1.538172E+16f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_002"):
			return 207816.9f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_003"):
			return 2.695931E-20f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_003_TINT_004"):
			return 3.14283E-31f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_001"):
			return -760.8631f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_002"):
			return -3.482077E+13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_003"):
			return -1.539419E+24f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_004_TINT_004"):
			return 2.703144E+36f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_001"):
			return -1.724546E-13f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_002"):
			return -1.459556E-21f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_003"):
			return -6140.203f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_005_TINT_004"):
			return -2.876204E-05f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_001"):
			return 1.194013E-11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_002"):
			return 4.275902E+16f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_003"):
			return 2.385018E-17f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_006_TINT_004"):
			return 7.883663E-28f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_001"):
			return -1.113617E-26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_002"):
			return 4.691455E-38f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_003"):
			return -3.725923E+28f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_007_TINT_004"):
			return 2.234865E+07f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_001"):
			return 1.488215E-36f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_002"):
			return -5.726211E-30f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_003"):
			return 1.636288E+32f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_008_TINT_004"):
			return -5.105117E-35f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_001"):
			return 4.617838E+21f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_002"):
			return 3.431801E+10f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_003"):
			return -0.007660674f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_009_TINT_004"):
			return -1.111268E-12f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_001"):
			return 11713414;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_002"):
			return 4.872438E+08f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_003"):
			return 2.152371E+18f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_010_TINT_004"):
			return 9.528118E-14f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_001"):
			return -2.177184E+11f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_002"):
			return -1.715797f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_003"):
			return -9.789951E-14f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_014_TINT_004"):
			return -2.280342E-22f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_001"):
			return -8.072012E-22f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_002"):
			return 1.100564E+26f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_003"):
			return 3.84057E+29f;
		case joaat("CLOTHING_ITEM_M_OFFHAND_015_TINT_004"):
			return 7.467835E+37f;
		case 918258437:
			return -4.552833E-27f;
		case 1169203439:
			return 2.093346E-27f;
		case -1755397046:
			return 1.912483E-16f;
		case -2090951606:
			return -3.052837E+34f;
		case -1893420074:
			return -7660754f;
		case -521480347:
			return 3.939497E-10f;
		case -1515678445:
			return 2.188769E-23f;
		case 637343178:
			return 2.582294E+30f;
		case -1759971328:
			return 2.04004E+36f;
		case -1990239091:
			return 8.041426E-36f;
		case 1595344893:
			return 2.479936E-20f;
		case -553416748:
			return 1.874051E-14f;
		case 2086466425:
			return -5.017912E-33f;
		case 1829328082:
			return 5.096718E+16f;
		case 147295280:
			return 4.830181E+27f;
		case 857399510:
			return -0.3366188f;
		case 811850600:
			return -1.085505E-27f;
		case -528729190:
			return -1.104361E-16f;
		case -732726675:
			return 177.7845f;
		case -963846432:
			return 3.385438E-09f;
		case -1242022473:
			return 7.369485E-20f;
		case -2026971099:
			return 5.577702E-09f;
		case 2066466847:
			return 4.764664E-20f;
		case 1835609242:
			return -3.269268E+24f;
		case -881400018:
			return -6.03074E+31f;
		case -633699143:
			return -2.457439E+20f;
		case -1069100838:
			return -6.426059E+09f;
		case -695075472:
			return -1.525579E+08f;
		case -1665332793:
			return -3.321829E-09f;
		case -1292945877:
			return -1.773091E-14f;
		case 1858275734:
			return -2.300576E+25f;
		case -1678154750:
			return 1.307409E-05f;
		case 1382502619:
			return -1.047737E+18f;
		case -2121879779:
			return 5.497874E-13f;
		case -443582675:
			return 8.29761E-23f;
		case -741289040:
			return 1.416817E-14f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_001"):
			return 1.368019E+18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_002"):
			return -3.226616E+28f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_003"):
			return 11282331;
		case joaat("CLOTHING_ITEM_F_OFFHAND_000_TINT_004"):
			return 6.660883E-13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_001"):
			return -58556.57f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_002"):
			return 4.64073E+08f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_003"):
			return 8.74794E+16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_001_TINT_004"):
			return 7.3712E+30f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_001"):
			return 9499074;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_002"):
			return 1.423845E-21f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_003"):
			return 2.06522E-30f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_002_TINT_004"):
			return 1.077628f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_001"):
			return 5.660514E+17f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_002"):
			return 1.742873E+09f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_003"):
			return 8.754077E+17f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_003_TINT_004"):
			return -1.652318E+31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_001"):
			return -1.018448E+29f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_002"):
			return 1.740586E-18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_003"):
			return 1.681441E-31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_004_TINT_004"):
			return -0.0879634f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_001"):
			return 4.403766E+12f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_002"):
			return -4.511856E-37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_003"):
			return 9.452466E+29f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_005_TINT_004"):
			return -9.156524E-25f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_001"):
			return 3.227755E+12f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_002"):
			return 16546.92f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_003"):
			return -2.228285E+31f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_006_TINT_004"):
			return 3.732781E-38f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_001"):
			return 3.724373E-08f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_002"):
			return 6.580237f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_003"):
			return 6.947178E+13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_007_TINT_004"):
			return 2.484371E+22f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_001"):
			return 2.456577E+13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_002"):
			return 9.014957E+21f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_003"):
			return -3.855651E+37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_008_TINT_004"):
			return 6.535104E-32f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_001"):
			return -8.772451E-37f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_002"):
			return 4.454346E-07f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_003"):
			return 1.510407E-13f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_009_TINT_004"):
			return 7.878817E+15f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_001"):
			return -2.55827E-34f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_002"):
			return -2.275366E+16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_003"):
			return -5.689435E+26f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_010_TINT_004"):
			return -0.02990022f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_001"):
			return 0.3399748f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_002"):
			return 6.465955E+09f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_003"):
			return 2.484785E-18f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_014_TINT_004"):
			return -2.599848E-16f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_001"):
			return -5.546313E+26f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_002"):
			return 2.044672E-23f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_003"):
			return 12.15982f;
		case joaat("CLOTHING_ITEM_F_OFFHAND_015_TINT_004"):
			return 4.283728E+28f;
		case 135502004:
			return -7.866332E+09f;
		case -1094089207:
			return -1.499547E+21f;
		case 683366891:
			return -1.013596E-12f;
		case 457948940:
			return -0.0007105466f;
		case 84775568:
			return 4.135747E-25f;
		case -2142729980:
			return 2.994219E-16f;
		case -410630335:
			return 2.475768E-23f;
		case -161815318:
			return 3.236637E+12f;
		case 1125547616:
			return 1.395009E-15f;
		case -706894864:
			return -208.2649f;
		case 512996699:
			return -1.833534E+13f;
		case 822532673:
			return -1.232445E+29f;
		case -1151792276:
			return 9.605299E-20f;
		case -569224994:
			return 9.930023E+11f;
		case -1816871896:
			return 1.908876E-11f;
		case -2105861707:
			return 2.210563E+33f;
		case 45914674:
			return 672240.4f;
		case 676193620:
			return -3.001031E+17f;
		case 1564617196:
			return 7.254247E+11f;
		case 1142159244:
			return 7.133847E+19f;
		case 834556641:
			return 5.797535E+32f;
		case -1297099578:
			return -1.813593E-36f;
		case -1477066926:
			return -2.254588E-24f;
		case -1764025059:
			return -5.352944E-14f;
		case -1896863365:
			return -4.583573E-25f;
		case -1706409937:
			return -2.381358E-14f;
		case -1336579003:
			return 4.45701E+18f;
		case 2015984622:
			return 1.300588E+10f;
		case 1306077006:
			return -1.347045E-38f;
		case 424001060:
			return -8.833552E-18f;
		case 1525976567:
			return -220378.4f;
		case 1830662729:
			return 4.372685E-25f;
		case 2135971502:
			return -4.220641E+08f;
		case -1881999437:
			return -0.0008510749f;
		case 503878688:
			return 6.968935E+24f;
		case 816232796:
			return 1.039851E-06f;
		default:
			break;
	}
	return 0;
}

bool func_428(bool bParam0)
{
	return (func_543(bParam0) && func_293(bParam0, 4.31212E+18f));
}

int func_429(bool bParam0)
{
	if (!func_428(bParam0))
	{
		return 0;
	}
	switch (bParam0)
	{
		case 731907282:
			return 6.665346E-32f;
		case 1561454517:
			return 3.055069E-22f;
		case 1254834984:
			return -4.715896E+27f;
		case 1829957287:
			return 3.799805E-08f;
		case 919634467:
			return -6.229594E-24f;
		case -28339930:
			return -6.558434E-35f;
		case 507515628:
			return -4.259769E+28f;
		case -1975194892:
			return 2.642597E-36f;
		case 2039957913:
			return 4.024488E-27f;
		case 1502511939:
			return 3.184647E+31f;
		case 1809065934:
			return 2.427981E-20f;
		case -997271222:
			return 2.25761E+10f;
		case -878058438:
			return -7.330709E+14f;
		case -1617589234:
			return -2.400042E+23f;
		case -1042952050:
			return -0.09105205f;
		case -2050900874:
			return -1.271532E+08f;
		case -1815586685:
			return -1.122659E+24f;
		case -51500315:
			return -3.14812E+29f;
		case 1348094862:
			return 5.933205E-08f;
		case 1646522145:
			return 3.478544E+22f;
		case 1156363443:
			return 4.785602E-25f;
		case 1952092069:
			return -4.590873E-27f;
		case -2109461640:
			return -6.353205E-17f;
		case -1806184545:
			return 1.139413E+29f;
		case -1053842899:
			return -3.432342E-34f;
		case -755677768:
			return -5.970071E-28f;
		case 767294276:
			return -2.052252E+17f;
		case 1311814185:
			return -4.238399E+30f;
		case -840486512:
			return -9.185677E+19f;
		case -1029170414:
			return 1.087713E+21f;
		case -831411723:
			return -1.509685E+07f;
		case -429434400:
			return 3.947197E+32f;
		case -131203731:
			return -1.438366E-27f;
		case 1800445393:
			return 1.504294E-17f;
		case 2047228732:
			return 1.617986E-28f;
		case -2027203194:
			return 2.88563E+36f;
		case -609641686:
			return 2.066523E-20f;
		case 154924622:
			return 1.768266E-31f;
		case -142781743:
			return -1.965168E+35f;
		case -533360838:
			return 395556.1f;
		case -464283790:
			return -9.180731E+18f;
		case -186533746:
			return -0.03333768f;
		case -1593520704:
			return -1.794599E+11f;
		case 1260724738:
			return -1.102499E-29f;
		case -297375678:
			return 1.503452E+37f;
		case 1701653225:
			return -1.22361E-08f;
		case 1386939749:
			return 2.173322E+37f;
		case 1103717282:
			return 1.644474E+25f;
		case 1332088703:
			return 6.339123E+10f;
		case 1034120186:
			return 7.123357E+36f;
		case 532885562:
			return 6.343059E+23f;
		case -452048774:
			return 0.0005745888f;
		case -1085571851:
			return 1.668324E+31f;
		case -862677113:
			return -1.671941E-20f;
		case 1890828381:
			return -3.907049E-23f;
		case 1864875333:
			return 1.494274E+22f;
		case -320325540:
			return 0.05339542f;
		case -1278925815:
			return 4.578568E+20f;
		case -80071950:
			return -5.311585E-06f;
		case -781656240:
			return -4.257166E-35f;
		case 525029001:
			return 2.536853E-22f;
		case 1717296181:
			return 1.388459E-33f;
		case 1894117705:
			return 876.647f;
		case 1464921218:
			return -4933.637f;
		case 550403966:
			return -1.246122E-05f;
		case 856007660:
			return 0.02454921f;
		case -1617179117:
			return 5.444291E-08f;
		case 1784374159:
			return 19.55518f;
		case 2081818376:
			return 1.09735E+14f;
		case -1615607679:
			return 1.93079E+22f;
		case -1894668475:
			return 1.048737E+32f;
		case 2095710966:
			return 1.713901E+21f;
		case -260985198:
			return -1.313098E+26f;
		case -1179959034:
			return -3.982064E+33f;
		case -873142887:
			return -5.61527E+26f;
		case 245915270:
			return 2.426734E-20f;
		case 844146134:
			return 0.0003002306f;
		case 538640747:
			return 1.239412E-14f;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -1.626788E+30f;
		case -188079477:
			return -1.578931E+19f;
		case 1578729681:
			return 4.646013E-20f;
		case 1879581870:
			return -7.458821E-11f;
		case 948647349:
			return -7.161369f;
		default:
			break;
	}
	return 0;
}

bool func_430(bool bParam0)
{
	return func_446(bParam0) == 2.251657E+29f;
}

int func_431(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_001"):
			return 1.090025E-32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_002"):
			return 3.921272E-22f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_003"):
			return -1.620832E+32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_004"):
			return 6.601528E-34f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_005"):
			return 3.432632E+21f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_006"):
			return 1.351448E+32f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_007"):
			return 1.923182E-11f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_008"):
			return 5.622205E+10f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_009"):
			return 2.048624E+36f;
		case joaat("CLOTHING_ITEM_M_UST_000_TINT_010"):
			return 1.939711E-28f;
		default:
			break;
	}
	return 0;
}

bool func_432(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1354270243:
		case -1251985981:
		case -1197011183:
		case 75922725:
		case 975507354:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_433(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_315(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == iParam1)
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
	if (!bParam3)
	{
	}
	return 0;
}

bool func_434(int iParam0)
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

int func_435()
{
	if (func_354() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_436(bool bParam0)
{
	if (func_354() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_456(bParam0));
}

bool func_437()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_438(bool bParam0)
{
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (func_293(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_439(bParam0);
}

bool func_439(bool bParam0)
{
	if (!func_292(bParam0, 0))
	{
		return false;
	}
	if (func_293(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_440(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_544(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_292(bParam1, 0))
	{
		return 0;
	}
	if (!func_545(iParam0))
	{
		return 0;
	}
	iVar0 = func_546(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_547(iVar28))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_441(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (!func_438(bParam0) && !func_439(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_548(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_549(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_550(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_551(iVar15, iVar1);
			if (func_292(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_552(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_422(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_554(iVar16, func_553(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_555(iVar1);
	}
	return iVar0;
}

int func_442(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_544(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_292(bParam1, 0))
	{
		return 0;
	}
	if (!func_545(iParam0))
	{
		return 0;
	}
	iVar0 = func_546(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_443(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_444(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

void func_445(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_446((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_446(bool bParam0)
{
	struct<2> Var0;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_447(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_446((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

struct<4> func_448(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_456(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_319(2.982335E+09f, func_556(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_319(2.982335E+09f, func_556(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_319(2.982335E+09f, func_556(), -5.45926E-19f, bParam0);
}

struct<4> func_449(bool bParam0)
{
	int iVar0;

	iVar0 = func_456(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_319(8.681942E-06f, func_448(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_319(8.681942E-06f, func_448(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_319(8.681942E-06f, func_448(bParam0), -1.942248E+12f, 0);
}

int func_450(bool bParam0, bool bParam1)
{
	if (func_446(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_557();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_451(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_558(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_452(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_559(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_453(bool bParam0)
{
	int iVar0;

	iVar0 = func_456(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_319(3.507197E-29f, func_448(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_319(3.507197E-29f, func_448(bParam0), 12999093, 0);
}

bool func_454(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_446(bParam0);
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
			if (func_560(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_455(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_561(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_456(bool bParam0)
{
	if (func_354() == -1)
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

bool func_457(var uParam0)
{
	if (!func_320(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_458(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_320(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_459(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_562()) > iParam0;
}

bool func_460(bool bParam0)
{
	return func_293(bParam0, 5.168749E+07f);
}

bool func_461(int* iParam0, bool bParam1, var uParam2, float fParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_463(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_295(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_563(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_564(iParam0, *uParam2, 1.704487E-19f, fParam3))
	{
		return false;
	}
	if (COLLECTION::_0x9ADEE485726025D4(bParam1) != 0)
	{
		if (Global_1292096.f_20.f_422 != -1)
		{
		}
		Global_1292096.f_20.f_422.f_1 = bParam1;
		Global_1292096.f_20.f_422 = iParam0->f_1;
	}
	return true;
}

void func_462(struct<18> Param0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Param0.f_17;
	iVar1 = Param0.f_13;
	if (func_433(bVar0, 3.414007E-11f, iVar1, 0, 1) > 0)
	{
		func_482("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_463(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_565(iParam0))
		{
			return false;
		}
	}
	if (func_566(&(iParam0->f_6)))
	{
		if (NETWORK::_0xE10F2D7715ABABEC(&(iParam0->f_6)))
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(4.059549E+37f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-3.415538E-09f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(-4.99669E-06f))
	{
		return false;
	}
	if (!NETSHOPPING::_0xCE54C9ABE6FBC6DB(7.184882E+22f))
	{
		return false;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return false;
	}
	if (NETSHOPPING::CASHINVENTORY_IS_CONNECTION_FAULTED())
	{
		return false;
	}
	if (NETSHOPPING::_CASHINVENTORY_INIT_SESSION_IS_FAULTED())
	{
		return false;
	}
	return true;
}

void func_464(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

int func_465(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_567(bParam1))
	{
		bVar0 = func_313(bParam1);
		return func_568(iParam0, bVar0, bParam7, bParam8, iParam9);
	}
	if (func_289(iParam9, 32))
	{
		if (!func_569(bParam1, Param2, fParam6))
		{
			return 0;
		}
	}
	if (!func_570(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_289(iParam9, 4))
	{
		if (!func_571(iParam0, bParam1, Param2, fParam6, bParam7, bParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_289(iParam9, 8))
	{
		return func_572(iParam0, bParam1, bParam7, bParam8);
	}
	return 1;
}

struct<17> func_466(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_319(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_514(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_556() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_467(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_468(bool bParam0, bool bParam1, float fParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_446(bParam1);
		iVar5 = func_573(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_560(bParam0, iVar1, iVar2))
				{
					*uParam4 = { func_318(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_319(bParam1, *uParam4, uParam4->f_4, 0) };
					*fParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -5.45926E-19f;
			Var20.f_9 = -5.45926E-19f;
			iVar34 = func_456(0);
			Var37 = { func_318(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_319(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_446(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_560(bParam0, iVar1, iVar2))
							{
								if (func_574(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*fParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*fParam2 = 0;
	return false;
}

bool func_469(bool bParam0)
{
	int iVar0;

	iVar0 = func_375(bParam0);
	if (iVar0 == -287.6557f || iVar0 == 2.678246E-15f)
	{
		return true;
	}
	return false;
}

bool func_470(bool bParam0)
{
	return func_293(bParam0, 6.170743E+07f);
}

bool func_471(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, float fParam8, bool bParam9, bool bParam10, float fParam11, bool bParam12)
{
	struct<17> Var0;

	if (!func_463(iParam0, 0))
	{
		return false;
	}
	if (!func_465(iParam0, bParam1, Param2, fParam6, bParam10, bParam7, fParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_466(bParam1, Param2, fParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	*fParam8 = { Var0 };
	if (!func_575(iParam0, &Var0, 4.059549E+37f, bParam9, fParam11))
	{
		return false;
	}
	return true;
}

bool func_472(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, int iParam11, int iParam12, bool bParam13)
{
	struct<17> Var0;

	if (!func_463(iParam0, 0))
	{
		return false;
	}
	if (bParam10 == 0)
	{
		bParam10 = func_180(bParam1, bParam10, 1, iParam12, 1);
	}
	if (!func_576(iParam0, bParam1, Param2, fParam6, bParam10, iParam12))
	{
		return false;
	}
	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_8 = bParam1;
	Var0.f_9 = 1;
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	Var0.f_4 = { Param2 };
	Var0.f_11 = fParam6;
	Var0.f_10 = bParam7;
	Var0.f_14 = iParam11;
	if (bParam13)
	{
		Var0.f_15 = func_514(bParam1, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_556() };
			Var0.f_11 = 0;
		}
	}
	*iParam8 = { Var0 };
	if (!func_481(iParam0, Var0, 4.059549E+37f, iParam9, iParam12))
	{
		return false;
	}
	return true;
}

int func_473(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_577(&uParam0, iParam4, bParam5, iParam6);
}

bool func_474(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_436(0))
	{
		return func_578(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_455(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_456(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

void func_475(int* iParam0)
{
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_495(*iParam0, 4, 0, 0);
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
}

bool func_476(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_495(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_495(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_495(*iParam0, 2, 0, 0);
		return false;
	}
	func_495(*iParam0, 1, 0, 0);
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 == 4.059549E+37f || iVar0 == 1.704487E-19f)
	{
		iParam0->f_3 = 1;
	}
	iParam0->f_1 = *iParam0;
	*iParam0 = -1;
	iParam0->f_2 = 0;
	return true;
}

int func_477(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2141145462:
			return 54;
		case -2139497371:
			return 79;
		case -2073547330:
			return 51;
		case -2066076661:
			return 101;
		case -2048056274:
			return 28;
		case -2038873145:
			return 57;
		case -1988984077:
			return 45;
		case -1976230089:
			return 71;
		case -1948083328:
			return 116;
		case -1915486054:
			return 39;
		case -1914604474:
			return 61;
		case -1894256235:
			return 11;
		case -1882615108:
			return 83;
		case -1879729569:
			return 7;
		case -1827447245:
			return 25;
		case -1816811601:
			return 78;
		case -1812870325:
			return 107;
		case -1672929718:
			return 110;
		case -1604265010:
			return 24;
		case -1549775456:
			return 23;
		case -1533288167:
			return 86;
		case -1461871483:
			return 75;
		case -1327698122:
			return 58;
		case -1309844859:
			return 81;
		case -1271310569:
			return 74;
		case -1239377811:
			return 76;
		case -1221836150:
			return 95;
		case -1190908814:
			return 47;
		case -1169075737:
			return 50;
		case -1157194180:
			return 37;
		case -1151085798:
			return 38;
		case -1019271530:
			return 17;
		case -944178516:
			return 33;
		case -937655290:
			return 60;
		case -936508922:
			return 109;
		case -907971236:
			return 72;
		case -875426853:
			return 5;
		case -863017340:
			return 99;
		case -835345303:
			return 64;
		case -832908671:
			return 55;
		case -759061492:
			return 26;
		case -692335380:
			return 90;
		case -675093902:
			return 3;
		case -638835602:
			return 2;
		case -596510485:
			return 103;
		case -585098035:
			return 53;
		case -520556863:
			return 92;
		case -378561682:
			return 67;
		case -377574959:
			return 40;
		case -367868014:
			return 22;
		case -353010695:
			return 89;
		case -350556716:
			return 88;
		case -102827824:
			return 41;
		case -102545856:
			return 82;
		case -82191741:
			return 94;
		case 0:
			return 119;
		case 7562841:
			return 112;
		case 41932468:
			return 42;
		case 72801698:
			return 85;
		case 104820669:
			return 84;
		case 175025255:
			return 100;
		case 205166155:
			return 62;
		case 214785091:
			return 49;
		case 229544920:
			return 96;
		case 253727941:
			return 73;
		case 266787856:
			return 98;
		case 358997942:
			return 70;
		case 530671939:
			return 21;
		case 558731558:
			return 65;
		case 693005399:
			return 14;
		case 709801630:
			return 105;
		case 713508039:
			return 93;
		case 744226541:
			return 20;
		case 745945503:
			return 102;
		case 757105507:
			return 6;
		case 787316203:
			return 8;
		case 790678034:
			return 15;
		case 805845691:
			return 48;
		case 911414965:
			return 31;
		case 978801228:
			return 80;
		case 992695664:
			return 59;
		case 1062881804:
			return 32;
		case 1105471824:
			return 27;
		case 1128086492:
			return 115;
		case 1131758526:
			return 69;
		case 1139025222:
			return 114;
		case 1183803081:
			return 18;
		case 1190538002:
			return 106;
		case 1250977037:
			return 113;
		case 1261138928:
			return 10;
		case 1261539922:
			return 46;
		case 1285391378:
			return 13;
		case 1306457250:
			return 68;
		case 1314299724:
			return 118;
		case 1338756401:
			return 19;
		case 1400887301:
			return 34;
		case 1423490462:
			return 97;
		case 1437199060:
			return 43;
		case 1440632655:
			return 36;
		case 1472024063:
			return 52;
		case 1504223919:
			return 91;
		case 1562378696:
			return 111;
		case 1639899405:
			return 77;
		case 1706052688:
			return 12;
		case 1741725206:
			return 29;
		case 1747661667:
			return 1;
		case 1753192824:
			return 108;
		case 1780028424:
			return 63;
		case 1848029806:
			return 4;
		case 1865339861:
			return 35;
		case 1901448492:
			return 30;
		case 1921351553:
			return 66;
		case 1961205920:
			return 56;
		case 1985273028:
			return 44;
		case joaat("SLOT_UNARMED"):
			return 117;
		case 1995043222:
			return 104;
		case 2031132011:
			return 16;
		case 2041846130:
			return 87;
		case 2069893421:
			return 0;
		case 2129028479:
			return 9;
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

struct<2> func_478(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_479(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_480(int* iParam0, var uParam1, float fParam2, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, int iParam19, bool bParam20, int iParam21)
{
	if ((iParam19 != 4.059549E+37f && iParam19 != -3.415538E-09f) && iParam19 != -4.99669E-06f)
	{
		return false;
	}
	if (!func_579(iParam19, &uParam1, iParam21))
	{
		return false;
	}
	if (!func_580(iParam0, iParam19))
	{
		return false;
	}
	if (func_581(*iParam0, iParam19, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_582(iParam0, bParam20);
}

bool func_481(int* iParam0, var uParam1, float fParam2, float fParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, int iParam18, bool bParam19, int iParam20)
{
	if ((((iParam18 != 4.059549E+37f && iParam18 != -3.415538E-09f) && iParam18 != -4.99669E-06f) && iParam18 != 7.184882E+22f) && iParam18 != -2.328868E-12f)
	{
		return false;
	}
	if (!func_579(iParam18, &uParam1, iParam20))
	{
		return false;
	}
	if (!func_580(iParam0, iParam18))
	{
		return false;
	}
	if (func_583(*iParam0, iParam18, &uParam1))
	{
	}
	else
	{
		return false;
	}
	return func_582(iParam0, bParam19);
}

void func_482(char* sParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	iVar0 = AUDIO::GET_SOUND_ID();
	if (iVar0 != -1)
	{
		AUDIO::_PLAY_SOUND_FRONTEND_WITH_SOUND_ID(iVar0, sParam0, sParam1, bParam2);
		Global_1958629[Global_1958629.f_25] = iVar0;
		Global_1958629.f_25 = (Global_1958629.f_25 + 1 % 24);
	}
}

int func_483(bool bParam0, int iParam1)
{
	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_GET_IS_INVENTORY_ITEM_SOUND_VALID(bParam0, iParam1))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_SOUND(bParam0, iParam1);
}

bool func_484(bool bParam0)
{
	return func_446(bParam0) == -1.955052E+34f;
}

bool func_485(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_486(int iParam0)
{
	if (!func_485(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_487(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_485(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_584(iParam0);
		if (func_292(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_585(255);
			}
			else
			{
				iVar1 = func_558(bVar0, func_448(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_586(iParam0);
		if (func_292(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_558(bVar0, func_448(1), -2.696814E-33f, 1, 0, 0);
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

int func_488(int iParam0)
{
	if (STREAMING::IS_IPL_ACTIVE_HASH(iParam0))
	{
		return 1;
	}
	if (func_516())
	{
		return 0;
	}
	STREAMING::REQUEST_IPL_HASH(iParam0);
	return 0;
}

void func_489()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_490(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_588(bParam2, func_587(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_491(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

bool func_492(int iParam0)
{
	switch (iParam0)
	{
		case -1551258934:
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_493(bool bParam0, bool bParam1)
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

void func_494(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_92(iParam0))
	{
		return;
	}
	iVar0 = func_225(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iVar0 /*23*/].f_3, bParam1);
}

void func_495(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_589(iParam0, iParam1, iParam2, iParam3);
}

int func_496(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_20)
	{
		if (Global_1292096.f_20.f_1[iVar0 /*21*/] == iParam0)
		{
			return Global_1292096.f_20.f_1[iVar0 /*21*/].f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_497(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

void func_498(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_590(uParam0, 1);
	func_591(uParam0, 2);
	uParam0->f_2 = 0;
}

int func_499()
{
	if (Global_1292096.f_459.f_1548 >= 40 || Global_1292096.f_459.f_1548 < 0)
	{
		Global_1292096.f_459.f_1548 = 0;
	}
	return Global_1292096.f_459.f_1548;
}

void func_500(int iParam0)
{
	if (iParam0 >= 40 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1548 = iParam0;
}

int func_501()
{
	if (Global_1292096.f_459.f_1549 >= 10 || Global_1292096.f_459.f_1549 < 0)
	{
		Global_1292096.f_459.f_1549 = 0;
	}
	return Global_1292096.f_459.f_1549;
}

void func_502(int iParam0)
{
	if (iParam0 >= 10 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_1292096.f_459.f_1549 = iParam0;
}

bool func_503()
{
	return !Global_1572887.f_10;
}

void func_504(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_505(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_292(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_375(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_293(bParam0, 9.811189E+11f))
	{
		func_592(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_506(char* sParam0, var uParam1, int* iParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_456(bParam4), sParam0, iParam3, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_507(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_508(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_509(int iParam0)
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

int func_510(bool bParam0)
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

int func_511(var uParam0, int iParam1)
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

int func_512(bool bParam0)
{
	int iVar0;

	iVar0 = func_446(bParam0);
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

int func_513(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_593(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_594(&Var0, func_449(0));
	}
	if (!func_595(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_509(iVar18);
	return iVar19;
}

int func_514(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_444(func_313(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_515(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_318(bParam0, bParam1, 0) };
	return func_319(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_516()
{
	return func_531() == 4;
}

int func_517(int iParam0)
{
	if (func_596(iParam0))
	{
		return (func_597(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_518(int iParam0)
{
	int iVar0;

	iVar0 = func_387(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_519(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_381(iParam1, 1);
	iVar1 = func_387(iParam0, 1);
	iVar2 = func_383(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_598(iVar3, 1);
		if (!func_599(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_600(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_601(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_602(iVar6))
		{
		}
		else
		{
			iVar8 = func_603(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_604(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_520(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_521(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_518(iParam0))
	{
		return false;
	}
	if (!func_605(iParam1))
	{
		return false;
	}
	iVar0 = func_606(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_522(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_607(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_523(vector3 vParam0)
{
	if (!func_518(vParam0.x))
	{
		return false;
	}
	if (!func_380(vParam0.y))
	{
		return false;
	}
	if (!func_608(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_524(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_381(iParam1, 1);
	iVar1 = func_387(iParam0, 1);
	iVar2 = func_383(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_598(iVar3, 1);
		if (!func_599(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_600(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_609(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_602(iVar6))
		{
		}
		else if (!func_610(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_603(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_611(iVar6);
			}
		}
		iVar7++;
	}
	func_612(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_525(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_605(iParam0))
	{
		return;
	}
	iVar0 = func_606(iParam0, 1);
	if (!func_518(iParam1))
	{
		return;
	}
	if (!func_380(iParam2))
	{
		return;
	}
	if (!func_608(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_526(int iParam0)
{
	int iVar0;

	if (!func_605(iParam0))
	{
		return;
	}
	iVar0 = func_606(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

void func_527(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_528(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_529(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_530(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_531()
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

void func_532(int iParam0)
{
	if (func_613(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_533(int iParam0)
{
	if (!func_614(iParam0))
	{
		return false;
	}
	return Global_1939946.f_5[iParam0 /*11*/];
}

bool func_534(struct<2> Param0)
{
	return func_615(Param0, 5, 8);
}

int func_535(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_539(iVar0, 1, 0);
		if (!func_315(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_540(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_378(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (Var2[iVar34 /*2*/] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_536(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	int iVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_539(iVar0, 0, 1);
		if (!func_315(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_484(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_378(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41 /*2*/].f_1;
						iVar7 = 0;
					}
				}
				else if (Var9[iVar41 /*2*/] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_537(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_444(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_354() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_616(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_538(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_292(bParam0, 0))
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
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_539(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 1.50231E-31f;
			case 1:
				return 7.482014E-08f;
			case 2:
				return -0.1784743f;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 3.161818E-36f;
			case 1:
				return 1.559489f;
			case 2:
				return -4.89907E-28f;
			case 3:
				return -2.939334E-18f;
			case 4:
				return -7.965987E-05f;
			default:
				break;
		}
	}
	return 0;
}

bool func_540(bool bParam0)
{
	return func_446(bParam0) == 4.029065E+31f;
}

bool func_541(bool bParam0)
{
	return func_375(bParam0) == -3.265313E+23f;
}

float func_542(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.978612f;
		case 1:
			return -1.082716E-10f;
		default:
			break;
	}
	return 4.978612f;
}

bool func_543(bool bParam0)
{
	return func_446(bParam0) == 6.698816E+28f;
}

int func_544(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_545(int iParam0)
{
	iParam0 = func_544(iParam0);
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

int func_546(int iParam0)
{
	iParam0 = func_544(iParam0);
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

bool func_547(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

int func_548(bool bParam0, int iParam1)
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

struct<10> func_549(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_550(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_551(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 < 0)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= ITEMDATABASE::_ITEMDATABASE_GET_COLLECTION_SIZE(iParam1))
	{
		return 0;
	}
	iVar0 = 0;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iParam1, iParam0, &iVar0))
	{
		return 0;
	}
	return iVar0;
}

int func_552(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			iVar0 = -7.823627E-38f;
			break;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			iVar0 = 2.350962E+15f;
			break;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			iVar0 = 1.880478E-29f;
			break;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			iVar0 = 9.844682E+16f;
			break;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			iVar0 = -1.122826E+28f;
			break;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			iVar0 = 1.572265E-34f;
			break;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			iVar0 = -2.021815E+13f;
			break;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			iVar0 = -1.247056E-17f;
			break;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			iVar0 = 6.240494E-14f;
			break;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			iVar0 = 1.386534E-13f;
			break;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			iVar0 = 1.60476E-20f;
			break;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			iVar0 = joaat("A_C_FISHROCKBASS_01_SM");
			break;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			iVar0 = 3.562316E+28f;
			break;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			iVar0 = 1.854381E-37f;
			break;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			iVar0 = 2.425197E-21f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			iVar0 = 9.798023E-15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			iVar0 = 3.93545E+18f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			iVar0 = -271915.8f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			iVar0 = 6.892114E+25f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			iVar0 = -2.123363E+28f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			iVar0 = -1.573697E-17f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			iVar0 = -5.304321E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			iVar0 = 2.102341E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			iVar0 = -1.260301E-08f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			iVar0 = 2.994223E+24f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			iVar0 = 6.094814E-35f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			iVar0 = 2.117028E+37f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			iVar0 = 0.001931463f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			iVar0 = -2.58118E-05f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			iVar0 = -1.917655E-30f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			iVar0 = -91.68214f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			iVar0 = 2.383896E+14f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			iVar0 = 5.051445E+15f;
			break;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			iVar0 = 1.242729E-20f;
			break;
	}
	return iVar0;
}

int func_553(bool bParam0)
{
	if (func_293(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_293(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_293(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_554(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_292(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

int func_555(int iParam0)
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

struct<4> func_556()
{
	struct<4> Var0;

	return Var0;
}

int func_557()
{
	if (func_617(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_558(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_514(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_319(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_456(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_559(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_456(0);
	*iParam1 = { func_319(bParam0, func_449(0), fParam3, 0) };
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

bool func_560(bool bParam0, int iParam1, int iParam2)
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

bool func_561(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_456(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

int func_562()
{
	int iVar0;

	if (!NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 4.380664E-34f))
	{
		return 604800;
	}
	iVar0 = 604800;
	if (!NETWORK::NETWORK_ACCESS_TUNABLE_INT(-6.484858E+21f, 4.380664E-34f, &iVar0))
	{
		return 604800;
	}
	return iVar0;
}

int func_563(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_306(bParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_289(iParam2, 2))
	{
		if (func_307(bParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_289(iParam2, 8))
	{
		return func_618(bParam0, bParam1);
	}
	return 1;
}

bool func_564(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_619(Param1))
	{
		return false;
	}
	if (!func_580(iParam0, iParam19))
	{
		return false;
	}
	if (func_620(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_582(iParam0, bParam20);
}

bool func_565(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_200(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_566(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_567(bool bParam0)
{
	bool bVar0;

	bVar0 = func_313(bParam0);
	if (func_444(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_568(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	float fVar91;

	if (!func_444(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_621(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_289(iParam4, 8) && !func_622(bParam1, bParam2, bParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_289(iParam4, 4))
			{
				if (!func_571(iParam0, bVar86, Var87, fVar91, bParam2, (bParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_569(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_455(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_560(bParam0, func_446(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_570(bool bParam0, bool bParam1, int iParam2)
{
	if (func_289(iParam2, 1))
	{
		if (!func_420(bParam0))
		{
			return false;
		}
	}
	if (func_289(iParam2, 2))
	{
		if (func_416(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_571(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param2))
	{
		return false;
	}
	Var0.f_4 = iParam6;
	Var0 = { Param2 };
	iVar5 = func_558(bParam1, Param2, iParam6, 1, !bParam10, 0);
	iVar6 = func_623(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_624(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_625(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (bParam8 * iVar7);
		if (iVar10 > iVar6)
		{
			iVar10 = iVar6;
		}
		if (iVar9 <= 0)
		{
			return false;
		}
		else if ((iVar10 - iVar9) >= iVar7)
		{
			return false;
		}
	}
	return true;
}

int func_572(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_303(bParam1, 1) && !func_304(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_342(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_310((iVar1 + func_627(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_342(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_311((iVar3 + func_627(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_626("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_444(func_313(bParam1), 2))
	{
		if (!func_628(func_313(bParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_292(bParam1, 0))
	{
		if (!func_312(bParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

int func_573(bool bParam0)
{
	int iVar0;

	if (!func_292(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_446(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_574(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_629(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

bool func_575(int* iParam0, int iParam1, int iParam2, bool bParam3, float fParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_317(iParam1->f_8, iParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_630(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 2:
			return func_631(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 3:
			return func_632(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 4:
			return func_633(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 5:
			return func_634(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 6:
			return func_635(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 7:
			return func_636(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 8:
			return func_637(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 9:
			return func_638(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 10:
			return func_639(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 11:
			return func_640(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 12:
			return func_641(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 13:
			return func_642(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 14:
			return func_643(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		case 15:
			return func_644(iParam0, iParam1, iParam2, &uVar0, bParam3, fParam4);
		default:
			break;
	}
	return false;
}

bool func_576(int* iParam0, bool bParam1, struct<4> Param2, float fParam6, bool bParam7, float fParam8)
{
	if (!func_465(iParam0, bParam1, Param2, fParam6, bParam7, 1, fParam8, 1))
	{
		return false;
	}
	if (func_289(fParam8, 4) && func_451(bParam1, &Param2, fParam6, 1, 0))
	{
		return false;
	}
	return true;
}

int func_577(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_629(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_578(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_455(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_375(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_645(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_646(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_647(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_648(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_649(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_650(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_651(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_652(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_579(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_292(iParam1->f_8, 0) && !func_444(func_313(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_289(iParam2, 128))
	{
		if (!func_444(func_313(iParam1->f_8), 2))
		{
			if (func_446(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_289(iParam2, 16))
	{
		if (!func_653(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_580(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_467(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_476(iParam0))
		{
			return false;
		}
		if (!func_467(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_581(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_582(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_476(iParam0);
	}
	return true;
}

bool func_583(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_584(int iParam0)
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

int func_585(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_586(int iParam0)
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

bool func_587()
{
	return Global_1915643.f_20643;
}

int func_588(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_654())
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

void func_589(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_655(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_590(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_591(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_592(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_593(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_594(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_595(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_456(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_596(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_597(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (func_596(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_656(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_657(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_658(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_659(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_660(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_661(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_598(int iParam0, int iParam1)
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

bool func_599(int iParam0)
{
	int iVar0;

	iVar0 = func_598(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_600(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_662(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_601(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_598(iParam0, 1);
	if (!func_663(Global_1156096.f_2169[iVar0 /*205*/]))
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
	if (!func_664(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_665(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_602(int iParam0)
{
	int iVar0;

	iVar0 = func_603(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_603(int iParam0, int iParam1)
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

void func_604(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_666();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_667();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_9(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_668(iParam0));
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
			func_670(func_669(iParam0));
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
			func_671();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_663(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_663(16);
			break;
	}
}

bool func_605(int iParam0)
{
	int iVar0;

	iVar0 = func_606(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_606(int iParam0, int iParam1)
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

int func_607(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_672(iParam0);
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
		iVar64 = func_387(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_673(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_674(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
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

bool func_608(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_609(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_599(iParam0))
	{
		return;
	}
	iVar0 = func_598(iParam0, 1);
	if (!func_663(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_664(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_665(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_610(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_675(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_611(int iParam0)
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
			func_666();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_667();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_9(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_668(iParam0));
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
			iVar2 = func_669(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_676(iParam0, 0));
			func_677(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_676(iParam0, 1));
			func_677(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_676(iParam0, 2));
			func_677(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_676(iParam0, 3));
			func_677(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_669(iParam0);
			func_677(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_669(iParam0);
			func_677(iVar2, 4, 1, -1, 0);
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
			func_678();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_663(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_663(16);
			break;
	}
}

void func_612(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_679(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_680(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

bool func_613(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_614(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 3)
	{
		return false;
	}
	return true;
}

bool func_615(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_12(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_681(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_616(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_444(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_682(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
	}
	*iParam3 = Var0.f_35;
	iVar47 = 0;
	while (iVar47 < Var0.f_35)
	{
		(*uParam2)[iVar47] = Var0.f_36[iVar47];
		iVar47++;
	}
	return true;
}

int func_617(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_683(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_456(bParam1), iParam0, bParam3);
}

int func_618(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_423(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_310(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_344(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_423(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_311(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_626("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_308(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_619(struct<18> Param0)
{
	if (!func_413(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_620(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

int func_621(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_444(bParam0, 2))
	{
		return 0;
	}
	if (*uParam2 > *uParam1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < *uParam1)
	{
		iVar12++;
	}
	iVar14 = ITEMDATABASE::_0x799FCD53358ED5FA(bParam0, uParam1);
	iVar13 = 0;
	while (iVar13 < iVar14)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(bParam0, uParam1, iVar13, &Var0))
		{
			if ((*uParam1)[0] == 0)
			{
				(*uParam1)[0] = Var0;
			}
			else
			{
				*uParam2++;
				(*uParam1)[*uParam2] = Var0;
			}
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(Var0, &bVar5))
			{
				if (func_292(bVar5, 0))
				{
					if (*iParam4 >= 0 && *iParam4 < *uParam3)
					{
						*(uParam3[*iParam4 /*5*/]) = { Var0 };
						*iParam4++;
					}
					else
					{
						return 0;
					}
				}
			}
			(*uParam1)[*uParam2] = 0;
			if (*uParam2 > 0)
			{
				*uParam2 = (*uParam2 - 1);
			}
		}
		iVar13++;
	}
	return 1;
}

bool func_622(bool bParam0, bool bParam1, bool bParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_682(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_310((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_626(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_344((Var0.f_3 * bParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_311((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_626("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_628(bParam0, bParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

int func_623(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_292(bParam0, 0))
	{
		if (func_444(func_313(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_375(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_514(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, uParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_456(bParam3), bParam0);
}

bool func_624(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_292(bParam0, 0) && !func_444(func_313(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

int func_625(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

void func_626(char* sParam0)
{
	Global_1915643.f_22470 = func_239(sParam0, 10000, 0, 0, 0, 1);
}

int func_627(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_342(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_628(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_684(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_436(0)) && !func_437());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_311(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_310(iVar32))
			{
			}
			else
			{
				iVar33 = func_378(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_629(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_456(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_561(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_630(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_631(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_632(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_633(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_634(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_635(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_636(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_637(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_638(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_639(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_640(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_641(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_642(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_643(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

bool func_644(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, float fParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_685(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, fParam5);
}

struct<29> func_645(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_651(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_646(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_653(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_687(func_686(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_647(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_651(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_648(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_687(func_689(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_649(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_456(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_651(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_650(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_653(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_687(func_581(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_651(var uParam0, bool bParam1)
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
		Var0.f_15 = func_514(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_556() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_652(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_653(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_687(func_583(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_688(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_653(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_690(iParam1->f_8, iParam0, iVar0, 2048) || func_690(iParam1->f_8, iParam0, iVar0, 32768)) || func_690(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_690(iParam1->f_8, iParam0, iVar0, 4) || func_690(iParam1->f_8, iParam0, iVar0, 256)) || func_690(iParam1->f_8, iParam0, iVar0, 65536)) || func_690(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_690(iParam1->f_8, iParam0, iVar0, 1) || func_690(iParam1->f_8, iParam0, iVar0, 8)) || func_690(iParam1->f_8, iParam0, iVar0, 65536)) || func_690(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_690(iParam1->f_8, iParam0, iVar0, 1) || func_690(iParam1->f_8, iParam0, iVar0, 16)) || func_690(iParam1->f_8, iParam0, iVar0, 2)) || func_690(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_690(iParam1->f_8, iParam0, iVar0, 8) || func_690(iParam1->f_8, iParam0, iVar0, 4096)) || func_690(iParam1->f_8, iParam0, iVar0, 256)) || func_690(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_654()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

void func_655(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_691(&(uParam0->f_4));
}

bool func_656(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_657(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_658(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_659(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_660(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_661(int iParam0)
{
	int iVar0;

	iVar0 = func_381(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_662(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_692(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_663(int iParam0)
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

bool func_664(int iParam0)
{
	int iVar0;

	iVar0 = func_665(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_665(int iParam0, int iParam1)
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

void func_666()
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
		if (!func_285(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_667()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_668(int iParam0)
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

int func_669(int iParam0)
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

void func_670(int iParam0)
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

void func_671()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

int func_672(int iParam0)
{
	int iVar0;

	if (!func_605(iParam0))
	{
		return -1;
	}
	iVar0 = func_606(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_673(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_518(iParam0))
	{
		return false;
	}
	iVar0 = func_387(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_520(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_606(iVar2, 1) /*3*/];
		Var4 = { func_674(iVar3) };
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
			if (!func_693() && !func_694())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_693())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_517(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_517(iParam1);
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
			iVar1 = func_517(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_695(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_696(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_517(iParam1);
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

struct<31> func_674(int iParam0)
{
	int iVar0;

	iVar0 = func_387(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_675(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_692(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_676(int iParam0, int iParam1)
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

void func_677(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_678()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_679(int iParam0)
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

char* func_680(int iParam0)
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

int func_681(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_697(Param0);
	}
	return -1;
}

bool func_682(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_683(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

bool func_684(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_444(bParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_698(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_685(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, float fParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_699((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * iParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_700(iParam0, iParam1, iParam5, iParam2, bParam6, fParam7);
}

bool func_686(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

int func_687(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_495(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_495(iParam1, 2, 0, 0);
	return -1;
}

int func_688(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_495(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_689(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

int func_690(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_285(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_691(var uParam0)
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

bool func_692(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_701(iVar7);
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

bool func_693()
{
	return Global_1572887.f_7;
}

bool func_694()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_12(func_19(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_702(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

bool func_695(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_703(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_704(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_696(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

int func_697(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_705(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_698(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(bParam0, &Var7) || Var7 == 0)
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
			if (ITEMDATABASE::_ITEMDATABASE_GET_MODIFIED_PRICE(uVar6, iVar2) != bParam1)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_446((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_699(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = bParam0;
	if (func_164(0))
	{
		iVar5 = func_421(func_18(), bParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_448(1) };
			Var0.f_4 = func_542(iVar5);
			uParam2->f_1[0 /*4*/] = { func_319(bParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_514(bParam0, -3.294982E+22f);
	if (iVar6 != 0)
	{
		if (!func_706(&Var7, &iVar68, bParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_319(bParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_318(bParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_319(bParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_700(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, float fParam5)
{
	if ((iParam3 != 4.059549E+37f && iParam3 != -3.415538E-09f) && iParam3 != 7.184882E+22f)
	{
		return false;
	}
	if (!func_579(iParam3, iParam1, fParam5))
	{
		return false;
	}
	if (!func_580(iParam0, iParam3))
	{
		return false;
	}
	if (func_707(*iParam0, iParam3, iParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_582(iParam0, bParam4);
}

int func_701(int iParam0)
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

bool func_702(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

bool func_703(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_704(int iParam0)
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
		func_708(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_709(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_705(struct<2> Param0, bool bParam2)
{
	if (!func_12(Param0))
	{
		return false;
	}
	func_710(bParam2);
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

bool func_706(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_514(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_711(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

bool func_707(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam3, *iParam3);
}

void func_708(int iParam0)
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
	func_709(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_709(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_710(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_711(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_457(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_556() };
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

