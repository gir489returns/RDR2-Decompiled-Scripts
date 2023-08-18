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
	int iLocal_16 = 0;
	var uLocal_17 = -1;
	var uLocal_18 = -1;
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
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
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
	var uLocal_76 = 4;
	var uLocal_77 = 0;
	var uLocal_78 = 0;
	var uLocal_79 = 0;
	var uLocal_80 = 0;
	var uLocal_81 = 0;
	var uLocal_82 = 0;
	var uLocal_83 = 0;
	var uLocal_84 = -1;
	var uLocal_85 = 0;
	var uLocal_86 = 0;
	var uLocal_87 = 0;
	var uLocal_88 = 0;
	var uLocal_89 = 0;
	var uLocal_90 = 0;
	var uLocal_91 = 0;
	var uLocal_92 = 0;
	var uLocal_93 = 0;
	var uLocal_94 = 0;
	var uLocal_95 = -1;
	var uLocal_96 = -1;
	var uLocal_97 = -1;
	var uScriptParam_0 = -1;
#endregion

void __EntryFunction__()
{
	var uVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	uVar0 = uScriptParam_0;
	func_1(uVar0);
	func_2(&iLocal_16, &uScriptParam_0);
	while (!func_3(1, 1) && iLocal_16 != 19)
	{
		func_4(&iLocal_16);
		BUILTIN::WAIT(0);
	}
	func_5(&iLocal_16);
	func_6();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(var uParam0)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
}

void func_2(int iParam0, var uParam1)
{
	iParam0->f_1 = *uParam1;
	iParam0->f_2 = func_7(iParam0->f_1);
	iParam0->f_3 = { func_8(iParam0->f_1) };
	func_9(iParam0);
}

bool func_3(bool bParam0, bool bParam1)
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

void func_4(int iParam0)
{
	func_10(iParam0);
}

bool func_5(int iParam0)
{
	struct<2> Var0;

	if (SCRIPTS::DOES_THREAD_EXIST(iParam0->f_7) && SCRIPTS::IS_THREAD_ACTIVE(iParam0->f_7, false))
	{
		SCRIPTS::_REQUEST_THREAD_EXIT(iParam0->f_7);
	}
	if (VOLUME::DOES_VOLUME_EXIST(iParam0->f_6))
	{
		VOLUME::DELETE_VOLUME(iParam0->f_6);
	}
	if (!func_11(iParam0->f_1))
	{
		if (func_12(iParam0->f_15))
		{
			UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iParam0->f_15, false);
		}
	}
	if (func_13(iParam0, 2))
	{
		NETWORK::NETWORK_SESSION_REMOVE_SESSION_FLAGS(func_14());
	}
	func_15(iParam0, 0);
	func_16(iParam0);
	func_17(iParam0->f_2);
	func_18(iParam0, -1);
	func_19(iParam0);
	if (func_20(32768))
	{
		func_21();
	}
	func_22(iParam0);
	func_23(2);
	func_24();
	Var0 = { func_25(iParam0->f_1) };
	if (func_27(func_26(), Var0))
	{
		func_28();
	}
	if (func_29(Var0) || func_30(Var0))
	{
		func_31(Var0, 0, -1, 0, 0);
		func_32(0);
	}
	return true;
}

void func_6()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_7(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1149157.f_1[iParam0 /*27*/].f_1;
}

Vector3 func_8(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_7;
}

void func_9(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, "relPlayerClone", 64);
	StringConCat(&cVar0, "_", 64);
	StringIntConCat(&cVar0, iParam0->f_1, 64);
	PED::ADD_RELATIONSHIP_GROUP(&cVar0, &(iParam0->f_14));
	func_33(2, iParam0->f_14);
}

void func_10(int iParam0)
{
	if (*iParam0 != 18 && func_34(iParam0))
	{
		func_35(iParam0, 18, 1, 1);
	}
	func_36(iParam0);
	switch (*iParam0)
	{
		case 0:
			func_37(iParam0);
			break;
		case 1:
			func_38(iParam0);
			break;
		case 2:
			func_39(iParam0);
			break;
		case 3:
			func_40(iParam0);
			break;
		case 4:
			func_41(iParam0);
			break;
		case 5:
			func_42(iParam0);
			break;
		case 6:
			func_43(iParam0);
			break;
		case 7:
			func_44(iParam0);
			break;
		case 8:
			func_45(iParam0);
			break;
		case 9:
			func_46(iParam0);
			break;
		case 10:
			func_47(iParam0);
			break;
		case 11:
			func_48(iParam0);
			break;
		case 12:
			func_49(iParam0);
			break;
		case 13:
			func_50(iParam0);
			break;
		case 14:
			func_51(iParam0);
			break;
		case 15:
			func_52(iParam0);
			break;
		case 16:
			func_53(iParam0);
			break;
		case 17:
			func_54(iParam0);
			break;
		case 18:
			func_55(iParam0);
			break;
	}
}

bool func_11(var uParam0)
{
	if (NETWORK::NETWORK_HAVE_ROS_BANNED_PRIV())
	{
		return true;
	}
	if (NETWORK::NETWORK_HAS_ROS_PRIVILEGE(7))
	{
		return true;
	}
	return false;
}

bool func_12(int iParam0)
{
	int iVar0;

	iVar0 = 6;
	if (func_56(iParam0))
	{
		iVar0 = UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0);
	}
	return iVar0 != 6;
}

bool func_13(int iParam0, int iParam1)
{
	return func_57(iParam0->f_78, iParam1);
}

int func_14()
{
	if (func_20(2))
	{
	}
	return 152;
}

void func_15(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_13(iParam0, 32))
		{
			func_58(iParam0, 32);
			func_59(1, 1, 0, 1, 0, 0, 1, 0, 0);
		}
	}
	else if (func_13(iParam0, 32))
	{
		func_60(iParam0, 32);
		func_59(0, 1, 0, 0, 0, 0, 0, 0, 0);
	}
}

void func_16(int iParam0)
{
	if (func_61(iParam0->f_8))
	{
		func_62(&(iParam0->f_8), 1, 1);
	}
}

void func_17(int iParam0)
{
	if (MINIGAME::_0x3EECAADAB0D9FE29() == func_63(iParam0))
	{
		MINIGAME::_0x18A0D48DF9211C07();
	}
}

void func_18(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0->f_79 != iParam1)
	{
		iParam0->f_79 = iParam1;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			return;
		}
		iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return;
		}
		if (iParam0->f_79 == -1)
		{
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameHash"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameHash");
			}
			if (DECORATOR::DECOR_EXIST_ON(iVar0, "iMinigameSeat"))
			{
				DECORATOR::DECOR_REMOVE(iVar0, "iMinigameSeat");
			}
		}
		else
		{
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameHash", 3))
			{
				return;
			}
			if (!DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("iMinigameSeat", 3))
			{
				return;
			}
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameHash", iParam0->f_1);
			DECORATOR::DECOR_SET_INT(iVar0, "iMinigameSeat", iParam1);
		}
	}
}

void func_19(int iParam0)
{
	if (func_13(iParam0, 128))
	{
		func_64(131072);
		func_60(iParam0, 128);
	}
}

bool func_20(int iParam0)
{
	return func_57(Global_1149157.f_145, iParam0);
}

void func_21()
{
	func_65(0);
}

void func_22(int iParam0)
{
	iParam0->f_78 = 0;
}

void func_23(int iParam0)
{
	if (func_57(Global_1149157.f_145, iParam0))
	{
		func_66(&(Global_1149157.f_145), iParam0);
	}
}

void func_24()
{
	func_67();
	func_23(128);
	func_23(256);
	func_23(512);
	func_23(1024);
	func_23(2048);
	func_23(4096);
	func_23(8192);
	func_23(16384);
	func_23(32768);
}

struct<2> func_25(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_4;
}

struct<2> func_26()
{
	return Global_1051268;
}

bool func_27(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

void func_28()
{
	if (!func_68())
	{
		return;
	}
	if (!func_69(Global_1051268))
	{
		return;
	}
	func_70(&Global_1051268);
}

bool func_29(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_71(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_30(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_71(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

void func_31(struct<2> Param0, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	int iVar0;

	if (!func_69(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (!func_30(Param0) && !func_29(Param0))
	{
		if (!bParam2)
		{
		}
		return;
	}
	if (func_72(Param0) == 0)
	{
	}
	if ((iParam3 == 0 || iParam3 == 1) || iParam3 == 4)
	{
		if (func_71(Param0) == 3)
		{
			func_73(1, -4.059512E-23f);
		}
		else if (func_71(Param0) == 4)
		{
			func_73(0, -4.059512E-23f);
		}
	}
	if ((func_71(Param0) == 3 || func_71(Param0) == 1) || ((bParam5 && func_71(Param0) == 4) && STATS::STATSTRACKER_IS_INITIALIZED(func_72(Param0))))
	{
		if (iParam3 != -1)
		{
			func_74(Param0, iParam3, iParam4, 255, 0);
		}
		else
		{
			func_74(Param0, 2, iParam4, 255, 0);
		}
	}
	func_75(Param0, 0);
	if (func_27(func_76(0), Param0))
	{
		func_77(1);
		func_78(0);
		func_79(0);
		func_80(1);
	}
	func_81(Param0);
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_82(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		MISC::_0x1096603B519C905F("");
	}
}

void func_32(bool bParam0)
{
	int iVar0;

	if (Global_1900412.f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_83() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1900412.f_2 == 4 && Global_1900412.f_12 != Global_1900412.f_13) && !bParam0)
	{
		Global_1900412.f_1 = Global_1900412.f_2;
		Global_1900412.f_12 = Global_1900412.f_13;
		func_84(iVar0, Global_1900412.f_12);
	}
	else
	{
		Global_1900412.f_1 = 0;
		Global_1900412.f_7 = iVar0;
		Global_1900412.f_8 = func_85();
		Global_1900412.f_9 = func_86(Global_1893611.f_2);
		Global_1900412.f_11 = func_87(Global_1896646.f_41);
		if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
		{
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
		else if (Global_1900412.f_11 != -1)
		{
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
		}
		else
		{
			func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
		}
	}
	Global_1900412.f_2 = 0;
}

void func_33(int iParam0, int iParam1)
{
	func_89(iParam0, iParam1, 1.155403E+37f);
	func_89(iParam0, iParam1, -0.001804403f);
	func_89(iParam0, iParam1, 4.457278E-26f);
	func_89(iParam0, iParam1, 1.405172E-36f);
	func_89(iParam0, iParam1, 1.014458E-09f);
	func_89(iParam0, iParam1, 2.634154E-20f);
	func_89(iParam0, iParam1, -2.575919E-20f);
	func_89(iParam0, iParam1, 4.630567E+07f);
	func_89(iParam0, iParam1, 8.502138E+34f);
	func_89(iParam0, iParam1, 2.081225E+24f);
	func_89(iParam0, iParam1, -404.1522f);
	func_89(iParam0, iParam1, 3.017142E-15f);
	func_89(iParam0, iParam1, -9.616156E-08f);
	func_89(iParam0, iParam1, -3.847611E+20f);
	func_89(iParam0, iParam1, -5.020987E+30f);
	func_89(iParam0, iParam1, 5.23669E+37f);
	func_89(iParam0, iParam1, 2.960705E+15f);
	func_89(iParam0, iParam1, 57000.35f);
	func_89(iParam0, iParam1, 0.01703773f);
	func_89(iParam0, iParam1, -4.796311E-08f);
	func_89(iParam0, iParam1, -7.935022E-22f);
	func_89(iParam0, iParam1, -8.708554E+23f);
	func_89(iParam0, iParam1, -3.064678E-05f);
	func_89(iParam0, iParam1, 4.50876E-21f);
	func_89(iParam0, iParam1, 3.942434E-13f);
	func_89(iParam0, iParam1, 2.2867E-37f);
	func_89(iParam0, iParam1, 2.830387E-11f);
	func_89(iParam0, iParam1, 3.354086E-38f);
	func_89(iParam0, iParam1, 7.486236E-28f);
	func_89(iParam0, iParam1, 5.08311E+19f);
	func_89(iParam0, iParam1, 3.577089E+22f);
	func_89(iParam0, iParam1, 251.6366f);
	func_89(iParam0, iParam1, 9.686418E-08f);
}

bool func_34(int iParam0)
{
	var uVar0;

	if (func_90())
	{
		return true;
	}
	else if (func_7(iParam0->f_1) == -1)
	{
		return true;
	}
	else if (func_91(func_25(iParam0->f_1), 0, 2048))
	{
		return true;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return true;
	}
	else if (BUILTIN::VDIST(Global_34, iParam0->f_3) > 1120403456)
	{
		if (func_92(255))
		{
			return false;
		}
		if (func_93())
		{
			return false;
		}
		if (PLAYER::_0x0B7803F6F7BB43E0())
		{
			return false;
		}
		return true;
	}
	else if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()) && !func_13(iParam0, 1))
	{
		return true;
	}
	if (*iParam0 > 8 && *iParam0 < 14)
	{
		if (!func_94(iParam0->f_2, &uVar0))
		{
			return true;
		}
	}
	return false;
}

void func_35(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	*iParam0 = iParam1;
	if (bParam2)
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
	}
	if (bParam3)
	{
		iParam0->f_81 = MISC::GET_GAME_TIMER();
	}
}

void func_36(int iParam0)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33) && !ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		fVar0 = BUILTIN::VDIST(Global_34, iParam0->f_3);
		if (fVar0 < 3f)
		{
			PED::SET_PED_RESET_FLAG(Global_33, 2, true);
		}
		if (fVar0 < 6f)
		{
			PED::SET_PED_RESET_FLAG(Global_33, 219, true);
			PED::SET_PED_RESET_FLAG(Global_33, 220, true);
			PED::SET_PED_RESET_FLAG(Global_33, 187, true);
			PED::SET_PED_RESET_FLAG(Global_33, 129, true);
		}
	}
}

void func_37(int iParam0)
{
	if (!func_95())
	{
		return;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(iParam0->f_2)))
	{
		HUD::TEXT_BLOCK_REQUEST(func_96(iParam0->f_2));
	}
	func_35(iParam0, 1, 1, 1);
}

void func_38(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		if (iParam0->f_81 == -1)
		{
		}
	}
	else if (func_20(4))
	{
		if (func_92(255))
		{
			bVar0 = false;
		}
	}
	else if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(iParam0->f_2)) && !HUD::TEXT_BLOCK_IS_LOADED(func_96(iParam0->f_2)))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		if (!func_93())
		{
			func_35(iParam0, 2, 1, 1);
		}
		else if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_39(int iParam0)
{
	float fVar0;

	if (func_97(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if ((PLAYER::_0x0B7803F6F7BB43E0() && PLAYER::_0xC74EB3F2EC169F6B(-34696.55f) == 3.853379E-26f) && PLAYER::_0xC74EB3F2EC169F6B(-1.71582E+11f) == 3)
	{
		func_35(iParam0, 6, 1, 1);
		return;
	}
	if (!func_93())
	{
		fVar0 = func_98(iParam0->f_1);
		if (((BUILTIN::VDIST(Global_34, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_33)) && !ENTITY::IS_ENTITY_DEAD(Global_33)) && !PED::IS_PED_DEAD_OR_DYING(Global_33, true))
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &(iParam0->f_77), false);
			}
			if (func_99(iParam0))
			{
				Global_1149157.f_143 = iParam0->f_1;
				func_24();
				func_35(iParam0, 3, 1, 1);
				func_100(32768);
				func_101(10, 0);
			}
		}
		else
		{
			func_16(iParam0);
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
		}
	}
	else
	{
		func_16(iParam0);
		if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_40(int iParam0)
{
	float fVar0;
	struct<61> Var1;
	struct<2> Var62[7];
	int iVar77;
	int iVar78;
	int iVar79;
	int iVar80;
	int iVar81;
	int iVar82;
	struct<61> Var83;
	struct<61> Var144;

	if (func_97(iParam0->f_1))
	{
		func_5(iParam0);
		func_35(iParam0, 15, 1, 1);
		return;
	}
	if (!func_93())
	{
		fVar0 = func_98(iParam0->f_1);
		if ((((BUILTIN::VDIST(Global_34, iParam0->f_3) < fVar0 && ENTITY::DOES_ENTITY_EXIST(Global_33)) && !ENTITY::IS_ENTITY_DEAD(Global_33)) && !PED::IS_PED_DEAD_OR_DYING(Global_33, true)) && !func_102())
		{
			if (iParam0->f_77 == 0f)
			{
				MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &(iParam0->f_77), false);
			}
			if (!VOLUME::DOES_VOLUME_EXIST(iParam0->f_6))
			{
				func_104(&(iParam0->f_6), iParam0->f_3 + Vector(1063675494, 0f, 0f), 0f, 0f, 0f, (fVar0 + 1f), (fVar0 + 1f), 1063675494 /* Float: 0.9f */, func_103(iParam0->f_2));
			}
			if (func_105(Global_33, 0, 0, 1) == -230.1699f || func_105(Global_33, 0, 0, 1) == 5.402792E-27f)
			{
				func_106(0);
			}
			if (func_20(256))
			{
				func_23(2);
				func_23(32768);
				func_21();
				if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else
				{
					func_58(iParam0, 32768);
					Var1.f_44 = 4;
					Var1.f_52 = -1;
					iParam0->f_16 = { Var1 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMS", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 3.502392E-13f;
					iParam0->f_16.f_44[1] = 2.217813E-23f;
					func_107(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (func_20(128))
			{
				func_108(1.084202E-19f);
				func_100(2);
				func_23(32768);
				func_21();
				if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
				{
					func_35(iParam0, 6, 1, 1);
				}
				else if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
				{
					iVar81 = func_109(iParam0->f_2);
					iVar78 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &Var62);
					iVar77 = 0;
					while (iVar77 <= (iVar78 - 1))
					{
						iVar80 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var62[iVar77 /*2*/]));
						if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar80) || PLAYER::IS_PLAYER_DEAD(iVar80))
						{
						}
						else
						{
							iVar82 = func_110(iVar81, iVar80);
							if (iVar82 == -1606.757f)
							{
								iVar79++;
							}
						}
						iVar77++;
					}
					Var83.f_44 = 4;
					Var83.f_52 = -1;
					if (iVar79 > 0)
					{
						func_58(iParam0, 16384);
						iParam0->f_16 = { Var83 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLB", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = -1.999634E+11f;
						func_107(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > func_111(iParam0->f_2))
					{
						func_58(iParam0, 8192);
						iParam0->f_16 = { Var83 };
						StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
						StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGLM", 16);
						iParam0->f_16.f_43 = 1;
						iParam0->f_16.f_44[0] = -1.999634E+11f;
						func_107(&(iParam0->f_16), 0);
						func_35(iParam0, 4, 1, 1);
					}
					else
					{
						func_35(iParam0, 6, 1, 1);
					}
				}
				else
				{
					func_58(iParam0, 4096);
					Var144.f_44 = 4;
					Var144.f_52 = -1;
					iParam0->f_16 = { Var144 };
					StringCopy(&(iParam0->f_16.f_1), "MG_ALERT", 16);
					StringCopy(&(iParam0->f_16.f_3), "MG_ALERT_GANGMA", 16);
					iParam0->f_16.f_43 = 2;
					iParam0->f_16.f_44[0] = 3.502392E-13f;
					iParam0->f_16.f_44[1] = 2.217813E-23f;
					func_107(&(iParam0->f_16), 0);
					func_35(iParam0, 4, 1, 1);
				}
			}
			else if (!func_112())
			{
				func_67();
				func_23(32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else
		{
			if (iParam0->f_77 != 0f)
			{
				iParam0->f_77 = 0f;
			}
			if (func_112())
			{
				func_21();
			}
			func_67();
			func_23(32768);
			func_35(iParam0, 2, 1, 1);
		}
	}
	else
	{
		if (func_112())
		{
			func_21();
		}
		func_67();
		func_23(32768);
		if (func_20(4))
		{
			func_35(iParam0, 6, 1, 1);
		}
	}
}

void func_41(int iParam0)
{
	int iVar0;

	if (UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(iParam0->f_16) >= 3)
	{
		iVar0 = func_113(&(iParam0->f_16), -1.366675E-05f, &(iParam0->f_16.f_49), 1);
		if (func_13(iParam0, 4096) || func_13(iParam0, 32768))
		{
			if (iVar0 == 0)
			{
				func_114(1);
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iParam0->f_16);
				iParam0->f_16 = 0;
				func_60(iParam0, 4096);
				func_60(iParam0, 32768);
				func_35(iParam0, 5, 1, 1);
			}
			else if (iVar0 == 1)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(1.084202E-19f);
				func_23(2);
				func_24();
				func_60(iParam0, 4096);
				func_60(iParam0, 32768);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (func_13(iParam0, 8192))
		{
			if (iVar0 == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(1.084202E-19f);
				func_23(2);
				func_24();
				func_60(iParam0, 8192);
				func_35(iParam0, 2, 1, 1);
			}
		}
		else if (func_13(iParam0, 16384))
		{
			if (iVar0 == 0)
			{
				UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(iParam0->f_16);
				iParam0->f_16 = 0;
				func_115(1.084202E-19f);
				func_23(2);
				func_24();
				func_60(iParam0, 16384);
				func_35(iParam0, 2, 1, 1);
			}
		}
	}
}

void func_42(int iParam0)
{
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		return;
	}
	func_35(iParam0, 6, 1, 1);
}

void func_43(int iParam0)
{
	if (func_20(4))
	{
		if (func_92(255))
		{
			return;
		}
		func_58(iParam0, 1);
		func_100(2);
	}
	func_116(func_25(iParam0->f_1), 1);
	func_100(1);
	func_35(iParam0, 7, 0, 1);
}

void func_44(int iParam0)
{
	var uVar0;
	vector3 vVar1;

	if (func_13(iParam0, 512))
	{
		if (func_117())
		{
			func_58(iParam0, 2048);
		}
		if (((!func_13(iParam0, 1024) && func_13(iParam0, 2048)) && !func_117()) || Global_1102813.f_26.f_3368.f_5)
		{
			vVar1 = { func_118(iParam0->f_1, &uVar0) };
			if (!func_119(vVar1))
			{
				func_120(vVar1, uVar0, 1);
			}
			func_58(iParam0, 1024);
		}
		if (func_92(255))
		{
			func_121(1);
			return;
		}
	}
	if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
	{
		func_58(iParam0, 512);
		return;
	}
	if (!func_13(iParam0, 1))
	{
		if (func_126(2, func_122(iParam0->f_2), 3, func_123(iParam0->f_1), func_25(iParam0->f_1), func_124(), -1, 0, func_125(), 0))
		{
			if (func_20(2))
			{
				func_108(1.084202E-19f);
			}
			func_58(iParam0, 1);
		}
	}
	else if (!func_93())
	{
		if (!func_20(4))
		{
			if (!func_20(262144))
			{
				func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
			}
			func_35(iParam0, 16, 1, 1);
		}
		func_24();
	}
	else if (func_129())
	{
		if (!SCRIPTS::DOES_THREAD_EXIST(iParam0->f_7))
		{
			SCRIPTS::REQUEST_SCRIPT(func_130(iParam0->f_2));
		}
		if (!func_20(2))
		{
			NETWORK::_NETWORK_SESSION_ADD_SESSION_FLAGS(func_14());
			if (NETWORK::NETWORK_IS_HOST() && !func_131(NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS(), 8))
			{
				return;
			}
		}
		func_132(1);
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);
		func_133();
		Global_1149157.f_143 = iParam0->f_1;
		if (func_20(4))
		{
			func_23(4);
			func_58(iParam0, 256);
		}
		else
		{
			func_100(512);
			func_100(1024);
		}
		func_60(iParam0, 1);
		func_58(iParam0, 2);
		if (!func_20(8))
		{
			func_58(iParam0, 32);
		}
		func_35(iParam0, 8, 0, 1);
	}
}

void func_45(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (!func_13(iParam0, 4))
	{
		iVar0 = 0;
		if (func_20(2))
		{
			iVar0 = 1;
		}
		if (func_134(iParam0->f_2, iParam0->f_1, iVar0))
		{
			func_58(iParam0, 4);
		}
		else
		{
			func_135(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
	else
	{
		bVar1 = false;
		if (func_94(iParam0->f_2, &bVar1))
		{
			func_136(func_25(iParam0->f_1), 1, 0, 1);
			func_138(func_137(iParam0->f_2));
			func_35(iParam0, 9, 0, 1);
		}
		else if (bVar1)
		{
			func_135(512);
			func_35(iParam0, 16, 1, 1);
		}
	}
}

void func_46(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	struct<11> Var3;

	if (!func_93())
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (!func_13(iParam0, 8))
	{
		MINIGAME::_MINIGAME_REQUEST_SEAT_AT_TABLE(&(iParam0->f_9));
		func_58(iParam0, 8);
	}
	else if (!func_13(iParam0, 16))
	{
		bVar1 = false;
		if (func_139(iParam0, &bVar1, &iVar0))
		{
			if (bVar1)
			{
				func_58(iParam0, 16);
			}
			else
			{
				if (iVar0 == -1749651f)
				{
					func_140(iParam0->f_2, 1.571717E+09f, 0);
				}
				else
				{
					func_140(iParam0->f_2, -6.690856E-23f, 0);
				}
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
	else
	{
		iVar2 = MINIGAME::_MINIGAME_GET_NEXT_EVENT_TYPE();
		if (iVar2 == -1.23621E-17f)
		{
			Var3.f_10 = 6;
			if (MINIGAME::_MINIGAME_GET_NEXT_EVENT(&Var3, 42))
			{
				if (Var3.f_9 < 0 || Var3.f_9 >= func_111(iParam0->f_2))
				{
					func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
					func_35(iParam0, 16, 1, 1);
					return;
				}
				func_18(iParam0, Var3.f_9);
				func_141(iParam0);
				func_35(iParam0, 10, 0, 1);
			}
			else
			{
				func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
				func_35(iParam0, 16, 1, 1);
			}
		}
	}
}

void func_47(int iParam0)
{
	struct<36> Var0;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
		func_35(iParam0, 16, 1, 1);
	}
	else
	{
		if (!SCRIPTS::HAS_SCRIPT_LOADED(func_130(iParam0->f_2)))
		{
			return;
		}
		Var0 = -1;
		Var0.f_1 = -1;
		Var0.f_2 = -1;
		Var0.f_4 = -1;
		Var0.f_4.f_1 = -1;
		Var0.f_13 = -1;
		Var0.f_14 = -1;
		Var0.f_25 = 6;
		Var0.f_32 = -1;
		Var0.f_33 = 255;
		Var0 = { Global_1149157.f_1[iParam0->f_1 /*27*/] };
		Var0.f_14 = iParam0->f_2;
		Var0.f_16 = { iParam0->f_3 };
		Var0.f_19 = func_142(iParam0->f_1);
		Var0.f_21 = iParam0->f_1;
		Var0.f_23 = Global_33;
		Var0.f_33 = 255;
		Var0.f_35 = 0;
		Var0.f_32 = iParam0->f_79;
		Global_1149157.f_1[iParam0->f_1 /*27*/].f_12 = iParam0->f_79;
		Var0.f_23 = iParam0->f_13;
		if (func_20(2))
		{
			Var0.f_34 = 1;
			Var0.f_20 = func_143(iParam0->f_1, 1);
		}
		else
		{
			Var0.f_34 = 0;
			Var0.f_20 = func_143(iParam0->f_1, 0);
			if (func_144(iParam0->f_1))
			{
				NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(false);
			}
		}
		iParam0->f_7 = SCRIPTS::START_NEW_SCRIPT_WITH_ARGS(func_130(iParam0->f_2), &Var0, 36, 6500);
		SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(func_130(iParam0->f_2));
		func_145(iParam0->f_1);
		func_146(iParam0->f_1, 1);
		MISC::CLEAR_AREA(iParam0->f_3, 2f, 65536);
		if (SCRIPTS::DOES_THREAD_EXIST(iParam0->f_7))
		{
			if (func_20(8))
			{
				func_100(32);
				func_35(iParam0, 12, 1, 1);
			}
			else if (func_13(iParam0, 512))
			{
				func_100(32);
				func_35(iParam0, 12, 1, 1);
			}
			else
			{
				func_147();
				func_35(iParam0, 11, 0, 1);
			}
		}
	}
}

void func_48(int iParam0)
{
	if (func_148() || func_149())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 1000)
		{
		}
		else
		{
			return;
		}
	}
	else if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		return;
	}
	if (func_150(4194304))
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		func_151(&(Global_1572887.f_23.f_24));
		func_115(4194304);
	}
	func_100(32);
	func_35(iParam0, 12, 1, 1);
}

void func_49(int iParam0)
{
	bool bVar0;

	if (!func_93())
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	else if (!SCRIPTS::DOES_THREAD_EXIST(iParam0->f_7))
	{
		func_128(func_127(iParam0->f_1), 10000, 0, 0, 0, 1);
		func_35(iParam0, 16, 1, 1);
	}
	if (func_13(iParam0, 256))
	{
		bVar0 = true;
		if (!func_154(func_152(iParam0), func_153(iParam0->f_1), 1))
		{
			bVar0 = false;
		}
		if (HUD::_DOES_TEXT_BLOCK_EXIST(func_96(iParam0->f_2)) && !HUD::TEXT_BLOCK_IS_LOADED(func_96(iParam0->f_2)))
		{
			bVar0 = false;
		}
		if (!bVar0)
		{
			return;
		}
	}
	if (func_155(iParam0->f_1, 2))
	{
		CAM::DO_SCREEN_FADE_OUT(1000);
		if (func_20(8))
		{
			func_23(8);
			func_35(iParam0, 13, 0, 1);
		}
		else
		{
			func_35(iParam0, 13, 1, 1);
		}
	}
}

void func_50(int iParam0)
{
	int iVar0;

	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (iParam0->f_80 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_80) > 333)
		{
			func_15(iParam0, 0);
		}
		else
		{
			return;
		}
	}
	else
	{
		iParam0->f_80 = MISC::GET_GAME_TIMER();
		if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
		{
		}
		else
		{
			return;
		}
	}
	iVar0 = func_156(iParam0->f_1);
	if (iVar0 == 0)
	{
		func_157(iParam0->f_1, MISC::GET_FRAME_COUNT() + 1);
	}
	else if (MISC::GET_FRAME_COUNT() >= iVar0)
	{
		CAM::DO_SCREEN_FADE_IN(1000);
		AUDIO::_STOP_ALL_SCRIPTED_AUDIO_SOUNDS();
		func_35(iParam0, 14, 1, 1);
	}
}

void func_51(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (!SCRIPTS::DOES_THREAD_EXIST(iParam0->f_7))
	{
		bVar0 = true;
	}
	else if (func_155(iParam0->f_1, 4) && MISC::GET_FRAME_COUNT() >= func_158(iParam0->f_1))
	{
		bVar0 = true;
	}
	else if (func_159() == 1)
	{
		func_100(8);
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_93())
		{
			if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1295619.f_5))
			{
			}
			if (CAM::IS_SCREEN_FADING_OUT())
			{
			}
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
		if (func_160() == iParam0->f_1)
		{
			if (func_144(iParam0->f_1))
			{
				if (NETWORK::_0x273E04A3A7AD1F2D() == 0)
				{
					NETWORK::NETWORK_SET_RECENT_GAMERS_ENABLED(true);
				}
			}
			iVar1 = func_161(iParam0->f_1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, false, true);
				iParam0->f_13 = iVar1;
			}
			func_162();
			func_100(64);
		}
		func_35(iParam0, 16, 1, 1);
	}
}

void func_52(int iParam0)
{
	if (!func_97(iParam0->f_1))
	{
		func_35(iParam0, 16, 1, 1);
	}
}

void func_53(int iParam0)
{
	if (func_93())
	{
		if (!PLAYER::IS_PLAYER_CONTROL_ON(Global_1295619.f_5))
		{
			NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
		}
	}
	if (func_5(iParam0))
	{
		func_35(iParam0, 17, 1, 1);
	}
}

void func_54(int iParam0)
{
	struct<30> Var0;
	struct<9> Var30;
	int iVar39;
	vector3 vVar40;
	float fVar43;
	int iVar44;

	if (iParam0->f_81 == -1 || (MISC::GET_GAME_TIMER() - iParam0->f_81) > 120000)
	{
	}
	else
	{
		if (func_92(255))
		{
			if (func_20(64))
			{
				if (func_163(255))
				{
					Var0.f_5 = 2;
					Var0.f_1 = { Global_1149157.f_1[iParam0->f_1 /*27*/].f_7 };
					Var0.f_16 = 1;
					Var0.f_6.f_9 = -2.19652E+23f;
					Var0.f_6.f_6 = { Var0.f_1 };
					Var0.f_6 = { 1069547520 /* Float: 1.5f */, 1069547520 /* Float: 1.5f */, 5f };
					Var0.f_17.f_9 = -2.19652E+23f;
					Var0.f_17.f_6 = { Var0.f_1 };
					Var0.f_17 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
					Var30.f_5 = 1;
					if (!func_164(Global_1295619.f_12, &(Var30.f_6), &Var30))
					{
						Var30.f_6 = { Global_1072759.f_23824.f_383[MISC::GET_RANDOM_INT_IN_RANGE(0, 15) /*272*/].f_2 };
						Var30 = (IntToFloat(MISC::GET_RANDOM_INT_IN_RANGE(0, 359)) * 1f);
					}
					NETWORK::NETWORK_SPAWN_CONFIG_SET_FLAGS(32);
					NETWORK::_NETWORK_SPAWN_CONFIG_ADD_PROPERTY_PREFERENCE(5, true, 0.9f);
					iVar39 = 0;
					while (iVar39 <= 5)
					{
						vVar40 = { func_165(iParam0->f_1, Global_1149157.f_1[iParam0->f_1 /*27*/].f_12, iVar39, &fVar43) };
						if (!func_119(vVar40))
						{
							NETWORK::_NETWORK_SPAWN_CONFIG_ADD_SPAWN_POINT(vVar40, fVar43);
						}
						iVar39++;
					}
					func_166(Var0, Var30, 0, 0, 0);
				}
			}
			return;
		}
		if ((func_20(8) && func_20(4)) && BUILTIN::VDIST(Global_34, iParam0->f_3) <= 1120403456)
		{
		}
		else
		{
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				return;
			}
			if (func_93())
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295619.f_5))
				{
				}
				else
				{
					NETWORK::NETWORK_DISABLE_REALTIME_MULTIPLAYER();
				}
				return;
			}
		}
	}
	iVar44 = 0;
	while (iVar44 < 32)
	{
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::INT_TO_PLAYERINDEX(iVar44)))
		{
		}
		func_167(iVar44);
		func_168(iVar44, 0);
		func_167(iVar44);
		iVar44++;
	}
	func_23(16);
	func_169(iParam0);
	func_170();
	func_23(64);
	func_171(0);
	func_35(iParam0, 0, 1, 1);
}

void func_55(int iParam0)
{
	if (func_5(iParam0))
	{
		func_35(iParam0, 19, 1, 1);
	}
}

bool func_56(int iParam0)
{
	return iParam0 != 0;
}

bool func_57(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_58(int iParam0, int iParam1)
{
	func_172(&(iParam0->f_78), iParam1);
}

void func_59(bool bParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, int iParam8)
{
	if (bParam0)
	{
		Global_1072759.f_28644.f_66.f_28 = 1;
		Global_1072759.f_28644.f_66.f_29 = iParam3;
		Global_1072759.f_28644.f_66.f_26 = iParam6;
		Global_1072759.f_28644.f_66.f_27 = iParam8;
		if (bParam7)
		{
			MISC::SET_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
	else
	{
		Global_1072759.f_28644.f_66.f_30 = 1;
		Global_1072759.f_28644.f_66.f_33 = !bParam1;
		Global_1072759.f_28644.f_66.f_31 = iParam2;
		Global_1072759.f_28644.f_66.f_32 = iParam4;
		Global_1072759.f_28644.f_66.f_35 = iParam5;
		if (MISC::IS_BIT_SET(Global_1072759.f_28644.f_66.f_8, 18))
		{
			MISC::CLEAR_BIT(&(Global_1072759.f_28644.f_66.f_8), 18);
		}
	}
}

void func_60(int iParam0, int iParam1)
{
	func_66(&(iParam0->f_78), iParam1);
}

bool func_61(int iParam0)
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

void func_62(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_61(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_173(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_174(iVar0);
	*uParam0 = 0;
}

int func_63(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -0.003642436f;
		case 1:
			return 3.541235E-26f;
		case 2:
			return -8.282245E+21f;
		case 3:
			return -7.830294E-35f;
		default:
			break;
	}
	return 0;
}

void func_64(int iParam0)
{
	if (func_57(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_66(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

void func_65(bool bParam0)
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

void func_66(var uParam0, int iParam1)
{
	func_175(uParam0, iParam1);
}

void func_67()
{
	func_23(65536);
	func_23(131072);
	func_23(262144);
}

bool func_68()
{
	return func_69(Global_1051268);
}

bool func_69(struct<2> Param0)
{
	if (!func_176(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_177(Param0))
	{
		return false;
	}
	return true;
}

void func_70(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_71(struct<2> Param0)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return -1;
	}
	iVar0 = func_178(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

int func_72(struct<2> Param0)
{
	return func_179(Param0);
}

int func_73(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_180())
	{
		return 0;
	}
	if (!func_181())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_182(&Global_0, 8);
	}
	func_182(&Global_0, 1);
	return 1;
}

void func_74(struct<2> Param0, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<7> Var2;

	iVar0 = func_183(func_82(Param0));
	iVar1 = func_72(Param0);
	Var2.f_1 = iParam3;
	Var2 = 0;
	Var2.f_2 = 0;
	if (func_83() == 0)
	{
		Var2 = Global_265213.f_122484.f_80.f_12;
		func_184(Param0, &Var2, iParam2);
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

void func_75(struct<2> Param0, int iParam2)
{
	if (!func_69(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_185(Param0);
	}
	else
	{
		func_186(Param0, iParam2);
	}
	func_187();
}

struct<2> func_76(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

void func_77(bool bParam0)
{
	if (bParam0)
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
		func_188(&Global_1940186, 8388608);
	}
	else
	{
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		func_189(&Global_1940186, 8388608);
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

void func_78(bool bParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2[24];

	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_190(iVar0, 1);
		if ((iVar1 == -4.356636E+32f || iVar1 == -1.514687E+13f) || iVar1 == 3.829501E+32f)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_191(cVar2);
			}
			else
			{
				func_192();
			}
			LAW::_0xF611DE44AEB36A1D(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_79(bool bParam0)
{
	if (!bParam0 && func_193(1.600127E-25f))
	{
		return 0;
	}
	LAW::_PAUSE_BOUNTY_HUNTER_COOLDOWN(6.069634E-12f, bParam0, 0);
	return 1;
}

void func_80(int iParam0)
{
	Global_1900460 = (Global_1900460 || iParam0);
}

int func_81(struct<2> Param0)
{
	return func_195(func_194(Param0));
}

int func_82(var uParam0, var uParam1)
{
	return uParam0;
}

int func_83()
{
	return Global_1572887.f_14;
}

void func_84(int iParam0, var uParam1)
{
	struct<2> Var0;

	Var0 = iParam0;
	Var0.f_1 = uParam1;
	NETWORK::NETWORK_SET_RICH_PRESENCE(4, &Var0, 2, 2);
}

int func_85()
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

int func_86(int iParam0)
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

int func_87(int iParam0)
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

void func_88(var uParam0, var uParam1, var uParam2)
{
	vector3 vVar0;

	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	NETWORK::NETWORK_SET_RICH_PRESENCE(3, &vVar0, 3, 3);
}

void func_89(int iParam0, int iParam1, int iParam2)
{
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam1, iParam2);
	PED::SET_RELATIONSHIP_BETWEEN_GROUPS(iParam0, iParam2, iParam1);
}

bool func_90()
{
	return Global_1149157 == 3;
}

bool func_91(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_69(Global_1051268) && !func_27(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_196(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_197(iParam3, 255))
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
	if (func_198())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_69(Global_1051268))
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

bool func_92(int iParam0)
{
	return func_199(1, iParam0);
}

bool func_93()
{
	return Global_1572887.f_72.f_40 != 1;
}

bool func_94(int iParam0, bool bParam1)
{
	if (MINIGAME::_MINIGAME_IS_CONNECTED_TO_SERVER(func_63(iParam0)))
	{
		return true;
	}
	else if (MINIGAME::_0x39654E1F68B78287())
	{
		*bParam1 = 1;
		return false;
	}
	return false;
}

bool func_95()
{
	if (Global_1149157 == 2)
	{
		return true;
	}
	return false;
}

char* func_96(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "MGPKR";
		default:
			break;
	}
	return "";
}

bool func_97(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_14 == 2;
}

float func_98(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_6;
}

bool func_99(int iParam0)
{
	float fVar0;

	fVar0 = func_98(iParam0->f_1);
	if (!func_61(iParam0->f_8) && func_200(iParam0))
	{
		if (!func_12(iParam0->f_15))
		{
			iParam0->f_8 = func_201(MISC::VAR_STRING(2, "NET_MG_CONTEXT_POKER"), -1.068381E+13f, iParam0->f_3, fVar0, 1, 0, 0, 4, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
		}
	}
	else
	{
		if (!func_202(iParam0))
		{
			func_203(iParam0->f_8, 0, 1, 1);
		}
		else
		{
			func_203(iParam0->f_8, 1, 1, 1);
		}
		if (func_204(iParam0->f_8, 1))
		{
			func_16(iParam0);
			return true;
		}
	}
	return false;
}

void func_100(int iParam0)
{
	if (!func_57(Global_1149157.f_145, iParam0))
	{
		func_172(&(Global_1149157.f_145), iParam0);
	}
}

int func_101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_205();
	}
	if (!func_206(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_207(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

bool func_102()
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		return true;
	}
	return false;
}

char* func_103(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return "Invalid";
		case 0:
			return "Blackjack";
		case 1:
			return "Dominoes";
		case 2:
			return "Poker";
		case 3:
			return "Five Finger Fillet";
		case 4:
			return "Milking Cows";
		case 5:
			return "Cleaning Stalls";
		case 6:
			return "Fence Building";
		case 7:
			return "Max Minigames";
	}
	return "Unknown Minigame";
}

void func_104(var uParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, char* sParam10)
{
	*uParam0 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam1, vParam4, vParam7, sParam10);
}

float func_105(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_106(bool bParam0)
{
	if (func_208())
	{
		Global_1958670 = 1;
	}
	if (func_209(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

void func_107(var uParam0, bool bParam1)
{
	struct<16> Var0;
	struct<4> Var19;
	struct<4> Var23;
	struct<4> Var27;
	struct<4> Var31;
	char[] cVar35[8];

	*uParam0 = 0;
	func_210(&(uParam0->f_49), 0, 0);
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
		cVar35 = func_211(uParam0->f_3);
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_7)))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&(uParam0->f_23)))
		{
			if (uParam0->f_39)
			{
				cVar35 = MISC::VAR_STRING(42, cVar35, func_212(&(uParam0->f_7), 4.808429E-35f), func_212(&(uParam0->f_23), 4.808429E-35f), uParam0->f_40);
			}
			else
			{
				cVar35 = MISC::VAR_STRING(42, cVar35, func_212(&(uParam0->f_7), 4.808429E-35f), func_212(&(uParam0->f_23), 4.808429E-35f));
			}
		}
		else if (uParam0->f_39)
		{
			cVar35 = MISC::VAR_STRING(10, cVar35, func_212(&(uParam0->f_7), 4.808429E-35f), uParam0->f_40);
		}
		else
		{
			cVar35 = MISC::VAR_STRING(10, cVar35, func_212(&(uParam0->f_7), 4.808429E-35f));
		}
	}
	else if (uParam0->f_39)
	{
		cVar35 = MISC::VAR_STRING(2, cVar35, uParam0->f_40);
	}
	if (bParam1)
	{
		*uParam0 = func_213(&Var0, &(uParam0->f_1), cVar35, 0, 1);
	}
	else
	{
		*uParam0 = func_214(&Var0, &(uParam0->f_1), cVar35, 0, 0, 1);
	}
}

void func_108(float fParam0)
{
	func_215(&(Global_1572887.f_72.f_15), fParam0);
}

int func_109(int iParam0)
{
	if (iParam0 == 2)
	{
		return -8.282245E+21f;
	}
	return 0;
}

int func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam1))
	{
		return -1;
	}
	iVar1 = iParam1;
	if (!func_216(iParam0, &iVar0))
	{
		return -1;
	}
	return Global_1056554[iVar1 /*491*/].f_486[iVar0];
}

int func_111(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 6;
		default:
			break;
	}
	return 1;
}

bool func_112()
{
	return Global_1896762.f_352;
}

int func_113(var uParam0, int iParam1, var uParam2, bool bParam3)
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
			if (func_217(uParam2))
			{
				if (func_218(uParam2, 0, 0) > 250)
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
				func_210(uParam2, 0, 0);
			}
		}
	}
	return iVar0;
}

void func_114(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_215(&(Global_1203937.f_3), 32);
		func_215(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_215(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_215(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_215(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_215(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_215(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

void func_115(float fParam0)
{
	func_219(&(Global_1572887.f_72.f_15), fParam0);
}

void func_116(struct<2> Param0, bool bParam2)
{
	if (!func_69(Param0))
	{
		return;
	}
	if (!func_220(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_221(Param0);
	}
	func_75(Param0, 1);
	bParam2 = bParam2;
}

bool func_117()
{
	return (func_222(2) && func_223());
}

Vector3 func_118(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 1121664958;
			return -1001732614, -995848948, 1110095430;
		case 1:
			*uParam1 = 1126438620;
			return 1160019160, -996603337, 1112638856;
		case 2:
			*uParam1 = 1135003818;
			return -1012642306, -1011625751, 1118710582;
		case 3:
			*uParam1 = 1133959604;
			return -978566579, -986305801, 1059318451;
		case 4:
			*uParam1 = 1104063811;
			return -1013455978, 1145555283, 1122763001;
		default:
			break;
	}
	return func_8(iParam0);
}

bool func_119(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_120(vector3 vParam0, var uParam3, bool bParam4)
{
	if (func_224(vParam0, uParam3))
	{
		func_225(1, bParam4);
	}
}

void func_121(bool bParam0)
{
	if (!bParam0)
	{
		func_226(18);
	}
	else
	{
		func_227(18);
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 4;
		case 2:
			return 6;
		case 0:
			return 4;
		case 3:
			return 2;
		default:
			break;
	}
	return 1;
}

int func_123(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 9;
		default:
			break;
	}
	return -1;
}

float func_124()
{
	if (func_20(2))
	{
		return 2.524355E-29f;
	}
	return 2.524355E-29f;
}

bool func_125()
{
	if (func_20(2))
	{
		return 2;
	}
	return false;
}

bool func_126(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, float fParam6, int iParam7, bool bParam8, bool bParam9, int iParam10)
{
	struct<7> Var0;
	char cVar22[64];
	struct<51> Var30;

	if (!func_228(iParam2, iParam3))
	{
		return false;
	}
	if (func_93() && Global_1572887.f_72.f_40 != 9)
	{
		return false;
	}
	if (!func_229(Global_1295619.f_5))
	{
		return false;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_230(&Var0);
	func_231(iParam10, 1);
	func_232(iParam2, iParam3, iParam7, 1);
	func_233(Param4, 1);
	func_234(fParam6);
	func_235(bParam9);
	func_236();
	if ((func_69(Param4) && !func_237()) && Global_1220744 == -1)
	{
		func_238(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_239();
	}
	if (func_237())
	{
		func_240(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_150(2.524355E-29f))
		{
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
			{
				func_101(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var30 = 255;
			Var30.f_13 = NaNf;
			Var30.f_16.f_2 = -5.544348E+20f;
			Var30.f_16.f_4 = 3;
			Var30.f_21 = -1;
			Var30.f_25 = 1;
			Var30.f_26 = 1;
			Var30.f_27 = 1;
			Var30.f_28 = 32;
			Var30.f_29 = 1;
			Var30.f_30 = -2;
			Var30.f_42.f_5 = -1;
			Var30.f_48 = -1;
			Var30.f_48.f_1 = -1;
			Var30.f_50.f_3 = -1;
			func_241(&Var30, iParam3, -1, -1, 3);
			StringCopy(&cVar22, func_212(&(Var30.f_32), 4.808429E-35f), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_242(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_244(func_243(), iParam3)), 64);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, &cVar22);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_117, MISC::VAR_STRING(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	}
	if ((!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_245(255, 0)) && !bParam8)
	{
		func_246("NM_MATCHMAKING_WARNING");
	}
	func_247(10);
	return true;
}

char* func_127(int iParam0)
{
	int iVar0;

	iVar0 = func_7(iParam0);
	switch (iVar0)
	{
		case 2:
			return MISC::VAR_STRING(10, "MG_FAILED_LAUNCH", "MG_POKER");
		default:
			break;
	}
	return "";
}

int func_128(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_129()
{
	return func_131(Global_1572887.f_8, 1);
}

char* func_130(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "tg_p";
		default:
			break;
	}
	return "";
}

bool func_131(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_132(bool bParam0)
{
	if (Global_1072759.f_28756.f_1 != SCRIPTS::GET_ID_OF_THIS_THREAD() && !bParam0)
	{
		return;
	}
	if (Global_1072759.f_28756.f_1 == 0)
	{
		return;
	}
	func_215(&(Global_1072759.f_28756.f_2), 2);
}

void func_133()
{
	if (Global_1572887.f_7)
	{
		Global_1572887.f_7 = 0;
		TELEMETRY::ANALYTICS_PLAYTIME_FREEMODE_END();
	}
}

bool func_134(int iParam0, int iParam1, int iParam2)
{
	var uVar0;

	if (iParam2 == 1)
	{
		uVar0 = func_248(iParam1, 1);
	}
	else
	{
		uVar0 = func_248(iParam1, 0);
	}
	if (MINIGAME::_0x3FFE60DD8A936551(func_63(iParam0), uVar0))
	{
		return true;
	}
	return false;
}

void func_135(int iParam0)
{
	func_215(&(Global_1572887.f_72.f_16), iParam0);
}

void func_136(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_69(Param0))
	{
		return;
	}
	if (!func_29(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_249(Param0);
	}
	if (!func_69(func_76(0)))
	{
		func_75(Param0, 3);
		func_77(bParam3);
		func_78(!bParam4);
		func_250(Param0, -1);
		if (bParam2 && !func_251(2))
		{
			func_182(&Global_0, 1024);
		}
		func_80(1);
	}
	else
	{
		func_250(Param0, -1);
		func_75(Param0, 4);
		func_252(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_82(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_253(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_137(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 9;
		default:
			break;
	}
	return 9;
}

void func_138(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_83() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_86(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_88(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

bool func_139(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<6> Var1;
	int iVar7;

	iVar7 = 0;
	iVar7 = 0;
	while (iVar7 <= (SCRIPTS::GET_NUMBER_OF_EVENTS(1) - 1))
	{
		iVar0 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar7);
		switch (iVar0)
		{
			case -1126217932:
				if (SCRIPTS::GET_EVENT_DATA(1, iVar7, &Var1, 6))
				{
					if (((iParam0->f_9 == Var1 && iParam0->f_9.f_1 == Var1.f_1) && iParam0->f_9.f_2 == Var1.f_2) && iParam0->f_9.f_3 == Var1.f_3)
					{
						*iParam2 = Var1.f_5;
						if (Var1.f_4)
						{
							*bParam1 = 1;
						}
						return true;
					}
				}
				break;
		}
		iVar7++;
	}
	return false;
}

void func_140(var uParam0, float fParam1, int iParam2)
{
	Global_1149303.f_2.f_1 = uParam0;
	Global_1149303.f_2 = fParam1;
	Global_1149303.f_2.f_2 = iParam2;
}

void func_141(int iParam0)
{
	if (!func_13(iParam0, 128))
	{
		func_254(131072);
		func_58(iParam0, 128);
	}
}

var func_142(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_10;
}

var func_143(int iParam0, int iParam1)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/].f_1;
}

bool func_144(int iParam0)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_1 == 2;
}

void func_145(int iParam0)
{
	if (Global_1149157.f_137 != iParam0)
	{
		Global_1149157.f_137 = iParam0;
	}
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return;
	}
	if (!func_57(Global_1149157.f_137.f_1, iParam1))
	{
		func_172(&(Global_1149157.f_137.f_1), iParam1);
	}
}

void func_147()
{
	Global_1072759.f_28644.f_109 = MISC::GET_GAME_TIMER();
}

int func_148()
{
	if (Global_1072759.f_28644.f_66.f_42 >= 9)
	{
		return 1;
	}
	return 0;
}

int func_149()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = (iVar0 - Global_1072759.f_28644.f_109);
	if (iVar1 < Global_1901671.f_2.f_39)
	{
		return 0;
	}
	return 1;
}

bool func_150(int iParam0)
{
	return (Global_1572887.f_72.f_15 && iParam0) != 0;
}

void func_151(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (CAM::DOES_CAM_EXIST((*uParam0)[iVar0]))
		{
			CAM::DESTROY_CAM((*uParam0)[iVar0], false);
		}
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
	if (uParam0->f_20 != -1)
	{
		if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_20))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_PLAYBACK_LIST_PHASE_LOADED(uParam0->f_20, "LIVE"))
			{
				ANIMSCENE::_RELEASE_ANIM_SCENE_PLAY_LIST(uParam0->f_20, "LIVE");
			}
			ANIMSCENE::ABORT_ANIM_SCENE(uParam0->f_20, false);
			ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_20, 0);
			ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_20);
		}
	}
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_12 = -1;
	uParam0->f_13 = { 0f, 0f, 0f };
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	func_255(&(uParam0->f_18));
	uParam0->f_20 = -1;
	uParam0->f_21 = -1;
	uParam0->f_22 = 0;
}

char* func_152(int iParam0)
{
	switch (iParam0->f_1)
	{
		case 0:
			return "bla_saloon_int";
		case 1:
			return "new_saloon_int_main";
		case 2:
			return "swa_depot01_int";
		case 3:
			return "tum_saloon_int_gamble";
		case 4:
			return "val_saloon_int";
		default:
			break;
	}
	return "";
}

Vector3 func_153(int iParam0)
{
	struct<10> Var0;

	if (iParam0 == -1)
	{
	}
	Var0 = { func_256(iParam0) };
	if (func_119(Var0.f_5))
	{
	}
	return Var0.f_5;
}

bool func_154(char* sParam0, vector3 vParam1, bool bParam4)
{
	int iVar0;

	iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(vParam1);
	if (INTERIOR::IS_VALID_INTERIOR(iVar0))
	{
		if (INTERIOR::IS_INTERIOR_READY(iVar0))
		{
			if (bParam4)
			{
				INTERIOR::ACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, 0);
			}
			else
			{
				INTERIOR::DEACTIVATE_INTERIOR_ENTITY_SET(iVar0, sParam0, true);
			}
			return true;
		}
	}
	return false;
}

bool func_155(int iParam0, int iParam1)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return false;
	}
	return func_57(Global_1149157.f_137.f_1, iParam1);
}

int func_156(int iParam0)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return 0;
	}
	return Global_1149157.f_137.f_2;
}

void func_157(int iParam0, var uParam1)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return;
	}
	Global_1149157.f_137.f_2 = uParam1;
}

int func_158(int iParam0)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return 0;
	}
	return Global_1149157.f_137.f_3;
}

int func_159()
{
	if (!func_131(Global_1572887.f_196.f_43, 8))
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

int func_160()
{
	return Global_1149157.f_137;
}

int func_161(int iParam0)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return 0;
	}
	return Global_1149157.f_137.f_4;
}

void func_162()
{
	struct<5> Var0;

	Var0 = -1;
	Global_1149157.f_137 = { Var0 };
}

bool func_163(int iParam0)
{
	return func_199(48, iParam0);
}

bool func_164(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_257(vParam0) /*272*/];
	iVar1 = func_258(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_259(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

Vector3 func_165(int iParam0, int iParam1, int iParam2, float fParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1043574292;
							return -1001824353, -995869315, 1110322866;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1024190054;
							return -1001818653, -995849002, 1110323941;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1029261230;
							return -1001814181, -995799530, 1110090659;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1027204710;
							return -1001818250, -995780378, 1110091209;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1126864650;
							return -1001756547, -995729645, 1110091812;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1126932447;
							return -1001709542, -995733879, 1110090003;
						default:
							break;
					}
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1086597366; /* Float: 6.13f */
							return 1160038705, -996663684, 1112619273;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1048119869;
							return 1160029115, -996664850, 1112614922;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1071057469; /* Float: -2.64f */
							return 1160017950, -996666332, 1112610256;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1114701824; /* Float: 60.25f */
							return 1159979031, -996621157, 1112608683;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1119388959; /* Float: 92.26f */
							return 1159978333, -996590282, 1112622629;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1119546245; /* Float: 93.46f */
							return 1159978194, -996563085, 1112639694;
						default:
							break;
					}
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1046185247;
							return -1012798892, -1011828726, 1118702351;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1029381816;
							return -1012751466, -1011901101, 1118706205;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1111071130; /* Float: 46.4f */
							return -1012620237, -1011951102, 1118707725;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1106939740; /* Float: 31.32f */
							return -1012502849, -1011897120, 1118707607;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1109267579; /* Float: 39.52f */
							return -1012373579, -1011842207, 1118700202;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1103432253; /* Float: 24.63f */
							return -1012203566, -1011749611, 1118704212;
						default:
							break;
					}
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1020068495;
							return -978587134, -986310980, -1067907547;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1125828526;
							return -978576995, -986288005, -1068377729;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1022874092;
							return -978554150, -986286672, -1067624432;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1020655698;
							return -978543128, -986324489, -1067446174;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1107783844; /* Float: 33.86f */
							return -978540668, -986339839, -1066823739;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1107128484; /* Float: 31.68f */
							return -978553251, -986361238, -1067455401;
						default:
							break;
					}
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1021029908;
							return -1013405047, 1145507950, 1122757797;
						default:
							break;
					}
					break;
				case 1:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1020826747;
							return -1013457617, 1145513656, 1122757522;
						default:
							break;
					}
					break;
				case 2:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1021042360;
							return -1013502407, 1145517274, 1122757732;
						default:
							break;
					}
					break;
				case 3:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1020628828;
							return -1013216133, 1145492491, 1122757942;
						default:
							break;
					}
					break;
				case 4:
					switch (iParam2)
					{
						case 0:
							*fParam3 = -1021011558;
							return -1013095082, 1145541262, 1122588400;
						default:
							break;
					}
					break;
				case 5:
					switch (iParam2)
					{
						case 0:
							*fParam3 = 1109825946; /* Float: 41.65f */
							return -1013003013, 1145701718, 1122623187;
						default:
							break;
					}
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

int func_166(struct<30> Param0, struct<9> Param30, int iParam39, int iParam40, int iParam41)
{
	if (func_163(255))
	{
		if ((Param0.f_17.f_9 != -9.406495E-20f && Param0.f_17.f_9 != -2.19652E+23f) && Param0.f_17.f_9 != 4.795139E-15f)
		{
			Param0.f_17.f_9 = -2.19652E+23f;
		}
		if (Param0.f_16)
		{
			if ((Param0.f_6.f_9 != -9.406495E-20f && Param0.f_6.f_9 != -2.19652E+23f) && Param0.f_6.f_9 != 4.795139E-15f)
			{
				Param0.f_6.f_9 = -2.19652E+23f;
			}
		}
		func_260(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = { Param0 };
		func_261(&(Global_1102813.f_3878));
		Global_1102813.f_3878 = { Param30 };
		Global_1102813.f_3909 = iParam39;
		Global_1102813.f_3910 = iParam40;
		Global_1102813.f_3911 = iParam41;
		func_262(Global_1102813.f_3839, 36);
		func_263(Global_1102813.f_3878, 36);
		func_226(48);
		return 1;
	}
	return 0;
}

void func_167(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_5 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_5 = 0;
		func_264(iParam0);
	}
}

void func_168(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
		}
	}
	else if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0))
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21626.f_260), iParam0);
		func_264(iParam0);
	}
}

void func_169(int iParam0)
{
	char* sVar0;

	if (func_12(iParam0->f_15))
	{
		return;
	}
	if (!func_265())
	{
		return;
	}
	sVar0 = func_266(Global_1149303.f_2.f_1, Global_1149303.f_2, Global_1149303.f_2.f_2);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	iParam0->f_15 = func_128(sVar0, 10000, 0, 0, 0, 1);
}

void func_170()
{
	Global_1149303.f_2.f_1 = -1;
	Global_1149303.f_2 = 0;
	Global_1149303.f_2.f_2 = 0;
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		func_227(49);
	}
	else
	{
		func_226(49);
	}
}

void func_172(var uParam0, int iParam1)
{
	func_267(uParam0, iParam1);
}

int func_173(int iParam0)
{
	return iParam0;
}

void func_174(int iParam0)
{
	if (!func_268(iParam0))
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

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_176(int iParam0)
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

int func_177(int iParam0)
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

int func_178(struct<2> Param0)
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
	if (!func_269(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_269(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
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

int func_179(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_269(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

bool func_180()
{
	return !Global_1572887.f_10;
}

bool func_181()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_182(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_183(int iParam0)
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

void func_184(struct<2> Param0, int iParam2, int iParam3)
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
	switch (func_82(Param0))
	{
		case 8:
			return;
		case 4:
			iVar4 = func_271(func_270(Param0));
			if ((iVar4 == -1 && iParam3 == 2) && SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-2.332405E-23f) == 0)
			{
				iVar5 = 0;
				while (iVar5 <= 112)
				{
					if (func_272(iVar5) == func_270(Param0))
					{
						iVar4 = iVar5;
					}
					else
					{
						iVar5++;
					}
				}
			}
			iVar6 = func_273(iVar4);
			if (!func_274(iVar6, 0))
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

int func_185(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_178(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_275(iVar0);
}

int func_186(struct<2> Param0, int iParam2)
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
	if (!func_269(Param0, &vVar0))
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
		func_269(Global_1072759.f_19487.f_1[iVar9 /*3*/], &vVar3);
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
			func_276(iVar9);
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

void func_187()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = 0;
	vVar1.f_1 = -1;
	vVar1.f_2 = -1;
	while (iVar0 < Global_1072759.f_19487)
	{
		if (func_269(Global_1072759.f_19487.f_1[iVar0 /*3*/], &vVar1))
		{
		}
		iVar0++;
	}
}

void func_188(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_189(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_190(int iParam0, int iParam1)
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

void func_191(char[12] cParam0)
{
	Global_1939089.f_75.f_67 = { cParam0 };
}

void func_192()
{
	StringCopy(&(Global_1939089.f_75.f_67), "", 24);
}

bool func_193(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_277(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_278(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_279(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

int func_194(struct<2> Param0)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (func_27(Global_1900460.f_1[iVar0 /*2*/], Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_195(int iParam0)
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
		func_70(&(Global_1900460.f_1[0 /*2*/]));
		return 1;
	}
	func_70(&(Global_1900460.f_1[iParam0 /*2*/]));
	Global_1900460.f_66 = (Global_1900460.f_66 - 1);
	func_280(iParam0, Global_1900460.f_66);
	return 1;
}

bool func_196(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_197(int iParam0, int iParam1)
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

bool func_198()
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
	if (!func_69(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_199(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_281(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_282())
	{
		return func_281(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_281(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_200(int iParam0)
{
	if (!func_283())
	{
		return false;
	}
	else if (func_129())
	{
		return false;
	}
	else if (!PED::IS_PED_ON_FOOT(Global_33))
	{
		return false;
	}
	else if (ENTITY::GET_CARRIABLE_ENTITY_STATE(Global_33) != 0)
	{
		return false;
	}
	else if (func_284(30f, 0))
	{
		return false;
	}
	else if (PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	else if (PED::IS_PED_LASSOED(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_HOGTIED(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_SHOOTING(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_JUMPING(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_FALLING_OVER(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_FALLING(Global_33))
	{
		return false;
	}
	else if (TASK::IS_PED_GETTING_UP(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_RAGDOLL(Global_33))
	{
		return false;
	}
	else if (PED::GET_PED_IS_GRAPPLING(Global_33))
	{
		return false;
	}
	else if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 512, 0))
	{
		return false;
	}
	else if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return false;
	}
	else if (!func_285(iParam0))
	{
		return false;
	}
	else if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		return false;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2.96788f) > 0)
	{
		return false;
	}
	return true;
}

int func_201(char* sParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, bool bParam15, int iParam16)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	if (func_119(vParam2))
	{
		return 0;
	}
	if (fParam5 <= 0f)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_286(iVar0, 2))
		{
			if (func_287(vParam2, Global_1951897[iVar0 /*23*/].f_6, 1008981770 /* Float: 0.01f */, 1) && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
			{
				iVar2 = iVar0;
				return iVar2;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_288(iVar1, iParam1, sParam0, 4, iParam6, iParam7, vParam2, fParam5, 0, 0, 2, iParam8, iParam9, iParam10, iParam11, iParam12, iParam13, iParam14, 1f, 0, 0, 0, bParam15, iParam16);
		return iVar1;
	}
	return 0;
}

bool func_202(int iParam0)
{
	struct<4> Var0;
	int iVar12;

	if (func_11(iParam0->f_1))
	{
		iParam0->f_15 = func_128("NET_MG_HELP_BANNED", 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_289(iParam0->f_1))
	{
		iParam0->f_15 = func_128(func_266(iParam0->f_2, 3.707499E-18f, func_290()), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_291(iParam0->f_1, -39.13577f, &Var0))
	{
		iParam0->f_15 = func_128(func_266(iParam0->f_2, -1.430131E-08f, Var0.f_3), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_291(iParam0->f_1, 1.190549E+15f, &Var0))
	{
		iParam0->f_15 = func_128(func_266(iParam0->f_2, -6.816728E-19f, Var0.f_3), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_292(iParam0->f_1))
	{
		iParam0->f_15 = func_128(MISC::VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_293(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_294(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		iParam0->f_15 = func_128(MISC::VAR_STRING(10, "MISSION_WANTED_REGION", func_293(iParam0->f_2)), 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_295())
	{
		iParam0->f_15 = func_128("MG_POSSE_MEM_IN_JAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	else if (func_102() || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(2.96788f) > 0)
	{
		return false;
	}
	iVar12 = func_296(iParam0->f_1, 1);
	if (iVar12 > 0 && !func_297(iVar12))
	{
		iParam0->f_15 = func_128(MISC::VAR_STRING(2, "MGPKR_BROKE_MP", iVar12), 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

void func_203(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_61(iParam0))
	{
		return;
	}
	iVar0 = func_173(iParam0);
	if (bParam1)
	{
		func_298(iParam0, 4);
		if (bParam3)
		{
			func_299(iVar0, 1);
		}
		func_300(iVar0, 1);
	}
	else
	{
		func_301(iParam0, 4);
		func_300(iVar0, 0);
	}
}

bool func_204(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_61(iParam0))
	{
		return false;
	}
	iVar0 = func_173(iParam0);
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

void func_205()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_206(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_303(bParam2, func_302(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_207(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

bool func_208()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-3.294948E+35f) > 0)
	{
		return true;
	}
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(1.201345E-07f) > 0)
	{
		return true;
	}
	return false;
}

bool func_209(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_304(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_210(var uParam0, bool bParam1, bool bParam2)
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

char* func_211(var uParam0, var uParam1)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_212(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_305(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_213(var uParam0, var uParam1, char* sParam2, int iParam3, bool bParam4)
{
	vector3 vVar0;
	int iVar3;

	vVar0.x = iParam3;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = sParam2;
	iVar3 = UISTICKYFEED::_UI_STICKY_FEED_CREATE_ERROR_MESSAGE(uParam0, &vVar0, bParam4);
	return iVar3;
}

int func_214(var uParam0, var uParam1, char[4] cParam2, int iParam3, int iParam4, bool bParam5)
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

void func_215(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_216(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -471827042:
			*iParam1 = 0;
			return true;
		default:
			break;
	}
	switch (iParam0)
	{
		case -1150372370:
			*iParam1 = 1;
			return true;
		case -2033178055:
			*iParam1 = 2;
			return true;
		case 355424894:
			*iParam1 = 3;
			return true;
		default:
			break;
	}
	return false;
}

bool func_217(var uParam0)
{
	return uParam0->f_1;
}

int func_218(var uParam0, bool bParam1, bool bParam2)
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

void func_219(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_220(struct<2> Param0)
{
	return func_71(Param0) == 0;
}

void func_221(struct<2> Param0)
{
	if (func_72(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_72(Param0)))
	{
		STATS::_0x99230691875FC218(func_82(Param0), func_72(Param0), Global_34);
	}
}

bool func_222(int iParam0)
{
	return (Global_1102813.f_3520 && iParam0) != 0;
}

bool func_223()
{
	return func_222(4);
}

bool func_224(vector3 vParam0, var uParam3)
{
	if (func_119(vParam0))
	{
		return false;
	}
	if (func_306(255) == 4)
	{
		return false;
	}
	if (func_199(4, 255))
	{
	}
	func_227(4);
	func_307(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_308(Global_1102813.f_3869, 36);
	return true;
}

void func_225(bool bParam0, bool bParam1)
{
	if (func_306(255) == 4)
	{
		return;
	}
	if (func_119(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_226(0);
	}
	else
	{
		if (bParam1)
		{
			func_309(0, 0, 0, 1);
		}
		func_227(0);
		func_260(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_261(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_262(Global_1102813.f_3839, 36);
	func_263(Global_1102813.f_3878, 36);
}

int func_226(int iParam0)
{
	if (func_310(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_227(int iParam0)
{
	if (func_311(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_228(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_229(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && !GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	return true;
}

void func_230(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), bParam0, 22);
}

void func_231(int iParam0, bool bParam1)
{
	Global_1572887.f_72.f_39 = iParam0;
	if (bParam1)
	{
		func_312();
	}
}

void func_232(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;
	if (bParam3)
	{
		func_312();
	}
}

void func_233(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_72.f_11 = { Param0 };
	if (bParam2)
	{
		func_312();
	}
}

void func_234(float fParam0)
{
	Global_1572887.f_72.f_15 = fParam0;
}

void func_235(bool bParam0)
{
	Global_1572887.f_72.f_13 = bParam0;
}

void func_236()
{
	int iVar0;
	vector3 vVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, false, false) };
	Global_1572887.f_72.f_49 = { vVar1 };
}

bool func_237()
{
	if (func_243() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_238(struct<2> Param0)
{
	if (func_68())
	{
		return 0;
	}
	if (!func_69(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_239()
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
}

void func_240(struct<2> Param0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_117);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_118);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_119);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_120);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_121);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_122);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1572887.f_72.f_123);
	iVar0 = func_313(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_314(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_315(iVar0);
	Var3 = { func_316(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &Var3));
}

int func_241(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_317(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_318(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_22), {Global_265213.f_4[iVar0 /*46*/]}, 3);
	uParam0->f_32 = { Global_265213.f_4[iVar0 /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_4[iVar0 /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_4[iVar0 /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_4[iVar0 /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_57505[iVar0 /*8*/];
	uParam0->f_56 = { Global_265213.f_4[iVar0 /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_4[iVar0 /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_4[iVar0 /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_4[iVar0 /*46*/].f_28;
	uParam0->f_16 = 1;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_4[iVar0 /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_4[iVar0 /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_4[iVar0 /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_4[iVar0 /*46*/].f_15 };
	MemCopy(&(uParam0->f_3), {Global_265213.f_4[iVar0 /*46*/].f_4}, 8);
	func_319(&(Global_265213.f_4[iVar0 /*46*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_320(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_321(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_322(Global_265213.f_57505[iVar0 /*8*/]);
	vVar2 = { func_323(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_324(iVar1) };
	}
	else if (func_325(uParam0->f_12))
	{
		uParam0->f_48 = { func_327(func_326(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_328(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_329(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_329(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_330(uParam0->f_11) };
		if (!func_69(uParam0->f_48))
		{
			uParam0->f_48 = { func_329(func_331(uParam0->f_16.f_2)) };
		}
	}
	func_332(uParam0);
	func_317(uParam0, 4194304);
	return 1;
}

char* func_242(int iParam0)
{
	int iVar0;

	iVar0 = func_333(iParam0);
	if (iVar0 == Global_265189.f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == Global_265189.f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == Global_265189.f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == Global_265189.f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == Global_265189.f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == Global_265189.f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == Global_265189.f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == Global_265189.f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == Global_265189.f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == Global_265189.f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == Global_265189.f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == Global_265189.f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

int func_243()
{
	return Global_1572887.f_72;
}

char* func_244(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_245(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_282();
	}
	else if (iParam0 == func_282())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1295619.f_9;
		}
	}
	if (!bVar0)
	{
		if (!Global_1295619.f_17[iParam0])
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam0]))
		{
			return false;
		}
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[iParam0])) <= 1)
	{
		return false;
	}
	return true;
}

int func_246(char* sParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(2, sParam0);
	iVar1 = func_334(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

void func_247(int iParam0)
{
	Global_1572887.f_72.f_40 = iParam0;
}

var func_248(int iParam0, int iParam1)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/];
}

void func_249(struct<2> Param0)
{
	struct<32> Var0;

	if (func_72(Param0) == 0)
	{
	}
	else if (!STATS::STATSTRACKER_IS_INITIALIZED(func_72(Param0)))
	{
	}
	else
	{
		STATS::STATSTRACKER_DEED_STARTED(func_72(Param0), Global_265213.f_122484.f_80.f_12);
		if (func_253(Param0, &Var0))
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

int func_250(struct<2> Param0, int iParam2)
{
	int iVar0;

	iVar0 = func_194(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900460.f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900460.f_66;
	func_335(Param0, iVar0);
	Global_1900460.f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900460.f_66)
	{
		return iVar0;
	}
	func_280(iVar0, iParam2);
	return iParam2;
}

bool func_251(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

int func_252(struct<2> Param0, int iParam2)
{
	int iVar0;

	if (!func_69(Param0))
	{
		return 0;
	}
	iVar0 = func_194(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_336(Param0, func_76(0), iParam2))
	{
		func_75(func_76(0), 3);
		func_75(func_76(iVar0), 4);
		return 0;
	}
	func_280(iVar0, 0);
	func_75(func_76(0), 3);
	func_75(func_76(1), 4);
	return 1;
}

bool func_253(struct<2> Param0, var uParam2)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_269(Param0, &vVar0);
	if (func_337(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

void func_254(int iParam0)
{
	if (!func_57(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_172(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

void func_255(var uParam0)
{
	uParam0->f_1 = 0;
}

struct<10> func_256(int iParam0)
{
	struct<10> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	func_339(func_338(iParam0), &Var0);
	return Var0;
}

int func_257(vector3 vParam0)
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

int func_258(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_259(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
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

void func_260(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_261(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_262(struct<29> Param0, var uParam29, int iParam30)
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

void func_263(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_264(int iParam0)
{
	if (!func_340(iParam0))
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
	}
}

bool func_265()
{
	return Global_1149303.f_2 != 0;
}

char* func_266(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	if (iParam2 != 0)
	{
		iVar0 = (iParam2 - Global_1149303.f_7);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
	}
	switch (iParam1)
	{
		case -1385120212:
		case -1249239171:
		case 0:
			return "";
		case -1695230319:
			return MISC::VAR_STRING(10, "NET_MG_HELP_PLAYER_CLEAN", func_293(iParam0));
		case -1300909614:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_PROFIT_CAP";
			}
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_341(iVar0, 0, 0));
		case -1589038658:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
			}
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_341(iVar0, 0, 0));
		case 1671747787:
			if (iVar0 == 0)
			{
				return MISC::VAR_STRING(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
			}
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_341(iVar0, 1, 0));
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
		case 579389526:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_OVERALL_CAP";
			}
			return MISC::VAR_STRING(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_341(iVar0, 0, 0));
		case -1878199881:
			return MISC::VAR_STRING(10, "NET_MG_HELP_GEO_TOGGLE", func_293(iParam0));
		case -592991683:
			return "NET_MG_HELP_NO_PARTY_CHAT";
		case -1517426354:
			return MISC::VAR_STRING(10, "NET_MG_HELP_MAINTENANCE", func_293(iParam0));
		case -1720361368:
			return "NET_MG_HELP_BANNED";
		case -1166915294:
			return "NET_MG_HELP_BANNED2";
		case 1406403638:
			return "NET_MG_HELP_POSSE_LEADER_LEFT";
		case 1320901890:
			return "NET_MG_HELP_ARBITLEGAL";
		case -1700673948:
			return MISC::VAR_STRING(10, "MG_FAILED_LAUNCH", func_293(iParam0));
		case 1736016924:
			return MISC::VAR_STRING(10, "NET_MG_HELP_DISCONNECTED", func_293(iParam0));
		case -835571454:
			return MISC::VAR_STRING(10, "NET_MG_HELP_NETWORK_ERROR", func_293(iParam0));
		case -301240451:
			return MISC::VAR_STRING(10, "NET_MG_HELP_SCRIPT_ERROR", func_293(iParam0));
		case 2124908670:
			return "NET_MG_HELP_BUYIN_TIMEOUT";
		default:
			break;
	}
	return "";
}

void func_267(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_268(int iParam0)
{
	return func_286(iParam0, 2);
}

bool func_269(struct<2> Param0, bool bParam2)
{
	if (!func_69(Param0))
	{
		return false;
	}
	func_342(bParam2);
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

int func_270(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_269(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_271(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_343(&Var1, iParam0))
	{
		iVar0 = ((func_344() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_272(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/];
}

int func_273(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1245159[iParam0 /*5*/].f_2;
}

bool func_274(int iParam0, int iParam1)
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

int func_275(int iParam0)
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

int func_276(int iParam0)
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

int func_277(int iParam0, int iParam1)
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

bool func_278(int iParam0)
{
	int iVar0;

	iVar0 = func_345(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_279(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

void func_280(int iParam0, int iParam1)
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
			func_346((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_346(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_69(Global_1900460.f_1[0 /*2*/]))
	{
		func_75(Global_1900460.f_1[0 /*2*/], 3);
	}
}

bool func_281(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_282()
{
	return Global_1102813.f_3672;
}

bool func_283()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

bool func_284(float fParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || func_131(iParam1, 1024)) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_285(int iParam0)
{
	float fVar0;

	if (!MISC::GET_GROUND_Z_FOR_3D_COORD(Global_34, &fVar0, false))
	{
		return false;
	}
	if (iParam0->f_2 == 0 && MISC::ABSF((fVar0 - iParam0->f_77)) > 1056964608)
	{
		return false;
	}
	if (BUILTIN::VDIST(Global_34, Global_34, Global_34.f_1, fVar0) > 1067030938)
	{
		return false;
	}
	return true;
}

bool func_286(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_287(vector3 vParam0, vector3 vParam3, float fParam6, bool bParam7)
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

void func_288(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, bool bParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, bParam24);
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
	func_299(iParam0, 1);
	func_300(iParam0, 1);
	func_301(iParam0, 128);
}

bool func_289(int iParam0)
{
	if (!func_144(iParam0))
	{
		return false;
	}
	if (Global_1149303.f_6)
	{
		return true;
	}
	return false;
}

int func_290()
{
	return Global_17418.f_3015.f_88;
}

bool func_291(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = MINIGAME::_0x15E90B6A993017AA();
	if (!func_144(iParam0))
	{
		return false;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (MINIGAME::_0x10342CC82E8356E9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_347(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1149303.f_7)
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

bool func_292(var uParam0)
{
	return false;
}

char* func_293(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

int func_294(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_348(bParam1, bParam2, bParam3);
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

bool func_295()
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_349(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

int func_296(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_143(iParam0, iParam1);
	return uVar0;
}

bool func_297(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_83() == 0)
	{
		return func_350(iParam0);
	}
	return iParam0 <= func_351();
}

void func_298(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_299(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_286(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_300(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_301(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_302()
{
	return Global_1915643.f_20643;
}

int func_303(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_352())
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

void func_304(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939421[iParam0 /*16*/] = { Var0 };
	Global_1939421.f_161 = (Global_1939421.f_161 - 1);
	if (Global_1939421.f_161 < 0)
	{
		Global_1939421.f_161 = 0;
	}
}

char* func_305(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_306(int iParam0)
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

void func_307(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_308(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_309(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_353(iParam0);
	if (!func_354(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_355(128) && !func_356(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_357() == 4)
	{
		func_226(18);
	}
	func_358(1024);
}

bool func_310(var uParam0, int iParam1, int iParam2)
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

bool func_311(var uParam0, int iParam1, int iParam2)
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

void func_312()
{
	int iVar0;

	if (func_83() == -1)
	{
		return;
	}
	iVar0 = Global_1295619;
	if (func_131(Global_1572887.f_8, 1))
	{
		func_215(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	else
	{
		func_219(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 4);
	}
	Global_1056554[iVar0 /*491*/].f_204 = Global_1572887.f_72;
	Global_1056554[iVar0 /*491*/].f_204.f_1 = Global_1572887.f_72.f_9;
	Global_1056554[iVar0 /*491*/].f_204.f_2 = Global_1572887.f_72.f_10;
	Global_1056554[iVar0 /*491*/].f_204.f_3 = { Global_1572887.f_72.f_11 };
	Global_1056554[iVar0 /*491*/].f_204.f_8 = Global_1572887.f_72.f_13;
	Global_1056554[iVar0 /*491*/].f_204.f_5 = { Global_1572887.f_260 };
	Global_1056554[iVar0 /*491*/].f_204.f_9 = Global_1572887.f_72.f_39;
	if (func_150(1024))
	{
		func_215(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
	else
	{
		func_219(&(Global_1056554[iVar0 /*491*/].f_204.f_10), 2);
	}
}

int func_313(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_27(Global_1206482.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_314(int iParam0)
{
	return Global_1206482.f_78[iParam0 /*20*/].f_3;
}

var func_315(int iParam0)
{
	return Global_1205923.f_1[iParam0 /*26*/].f_3;
}

struct<8> func_316(int iParam0, var uParam1)
{
	struct<8> Var0;
	struct<5> Var8;

	if (((func_359(&Var8, iParam0) && func_360(&Var8)) && func_361(&Var8, uParam1)) && func_362(&Var8))
	{
		func_363(Var8, 1.348491E-37f, &Var0, 1);
	}
	return Var0;
}

void func_317(var uParam0, int iParam1)
{
	uParam0->f_15 = (uParam0->f_15 || iParam1);
}

int func_318(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265213.f_4[iVar0 /*46*/].f_23 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_319(char* sParam0)
{
	StringCopy(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
}

bool func_320(int iParam0)
{
	if (func_364(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_321(int iParam0)
{
	if (func_365(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_322(int iParam0)
{
	int iVar0;

	if (func_83() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_366(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_323(int iParam0)
{
	struct<2> Var0;
	vector3 vVar5;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	var uVar12;

	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_367(&Var0))
	{
		return vVar5;
	}
	if (!func_368(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_368(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_369(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_368(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_368(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_369(&Var0, 1);
			if (!func_368(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = DATAFILE::_0xE13634BB6BAF0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_324(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_370();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_325(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_326(iParam0) != -1;
}

int func_326(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_371(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_327(int iParam0)
{
	return func_372(iParam0);
}

struct<2> func_328(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_367(&uVar0))
	{
		return func_370();
	}
	if (!func_368(&uVar0, 13, 0, 0, 1))
	{
		return func_370();
	}
	if (!func_368(&uVar0, 17, 0, 0, 1))
	{
		return func_370();
	}
	if (!func_368(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_370();
	}
	if (!func_368(&uVar0, 20, 0, 0, 1))
	{
		return func_370();
	}
	if (!func_368(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_370();
	}
	iVar5 = func_373(&uVar0);
	return func_329(iVar5);
}

struct<2> func_329(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_374(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_374(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_370();
}

struct<2> func_330(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_370();
	}
	if (!func_375(&uVar0, 7, iParam0, 3.536333E-36f))
	{
		return func_370();
	}
	func_376(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_370();
	}
	return func_374(Var5.f_3, Var5.f_4);
}

int func_331(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 0.007354699f;
		case 395262693:
			return -1.410095E+37f;
		case -933924539:
			return 7.165112E-06f;
		default:
			break;
	}
	return 0;
}

void func_332(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_333(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13575[iVar0] == iParam0)
		{
			return Global_265213.f_107995.f_13510[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_334(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_335(struct<2> Param0, int iParam2)
{
	if (!func_69(Param0))
	{
		func_70(&(Global_1900460.f_1[iParam2 /*2*/]));
	}
	else
	{
		Global_1900460.f_1[iParam2 /*2*/] = { Param0 };
	}
	func_377(Param0, 0, 1, -1);
}

bool func_336(struct<2> Param0, struct<2> Param2, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_69(Param0))
	{
		return false;
	}
	if (!func_69(Param2))
	{
		return true;
	}
	iVar0 = func_82(Param0);
	iVar1 = func_82(Param2);
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

bool func_337(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (!func_378(iParam0))
	{
		return false;
	}
	if (func_379(iParam0, uParam1, &uVar0))
	{
		func_376(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_338(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 9;
		case 1:
			return 10;
		case 2:
			return 11;
		case 3:
			return 12;
		case 4:
			return 13;
		default:
			break;
	}
	return -1;
}

int func_339(int iParam0, var uParam1)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { -1001696508, -995784419, 1111199580 /* Float: 46.89f */ };
			uParam1->f_8 = 1049918177; /* Float: 0.29f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 111;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1137180672; /* Float: 400f */
			uParam1->f_5 = { 1151824376, -995392116, 1118214121 };
			uParam1->f_8 = 1117782016; /* Float: 80f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1133903872; /* Float: 300f */
			uParam1->f_5 = { 1161275727, 1140992536, 1110531428 };
			uParam1->f_8 = 1123929293; /* Float: 126.9f */
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 1;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1128792064; /* Float: 200f */
			uParam1->f_5 = { -999670160, -995245390, 1111904145 };
			uParam1->f_8 = -1020369961;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 4:
			uParam1->f_1 = 1;
			uParam1->f_2 = 74;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1120403456; /* Float: 100f */
			uParam1->f_5 = { 1153318951, 1138203345, 1119050662 };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 5:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1125515264; /* Float: 150f */
			uParam1->f_5 = { 1159543435, -996427832, 1111903620 };
			uParam1->f_8 = -1036779520; /* Float: -45f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 6:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -991672606, -1009189926, 1126153491 };
			uParam1->f_8 = 1126000230; /* Float: 157.4f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 7:
			uParam1->f_1 = 3;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1015825983, 1145098579, 1122747665 };
			uParam1->f_8 = -1031022838;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 8:
			uParam1->f_1 = 3;
			uParam1->f_2 = 98;
			uParam1->f_3 = 0;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { 1161307932, 1140461253, 1110845682 };
			uParam1->f_8 = -1029160305;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 9:
			uParam1->f_1 = 2;
			uParam1->f_2 = 40;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { -1001697857, -995847804, 1110095613 };
			uParam1->f_8 = 1114636288; /* Float: 60f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 10:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1140457472; /* Float: 500f */
			uParam1->f_5 = { 1160014807, -996587516, 1112638593 };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 11:
			uParam1->f_1 = 2;
			uParam1->f_2 = 80;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1132068864; /* Float: 250f */
			uParam1->f_5 = { -1012673148, -1011685917, 1118706729 };
			uParam1->f_8 = -1032060928; /* Float: -63f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 12:
			uParam1->f_1 = 2;
			uParam1->f_2 = 121;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1128792064; /* Float: 200f */
			uParam1->f_5 = { -978570456, -986309576, 1059234565 };
			uParam1->f_8 = 1119092736; /* Float: 90f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		case 13:
			uParam1->f_1 = 2;
			uParam1->f_2 = 81;
			uParam1->f_3 = 0;
			uParam1->f_4 = 1132068864; /* Float: 250f */
			uParam1->f_5 = { -1013431167, 1145587879, 1122759934 };
			uParam1->f_8 = 1124532224; /* Float: 135f */
			uParam1->f_9 = 1075838976; /* Float: 2.5f */
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_340(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_260), iParam0);
}

char* func_341(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	func_380(iParam0, &Var0);
	if (iParam1 == 0)
	{
		if (bParam2)
		{
			if (iParam0 > 86400)
			{
				return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
			}
			else if (iParam0 > 3600)
			{
				return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_H", Var0.f_3, Var0.f_4);
			}
			return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_M", Var0.f_4);
		}
		return MISC::VAR_STRING(2, "NET_MG_HELP_GAMBLING_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
	}
	if (bParam2)
	{
		if (iParam0 > 86400)
		{
			return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
		}
		else if (iParam0 > 3600)
		{
			return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_H", Var0.f_3, Var0.f_4);
		}
		return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_M", Var0.f_4);
	}
	return MISC::VAR_STRING(2, "NET_MG_HELP_PRIVATE_AVAILABLE_D", Var0.f_2, Var0.f_3, Var0.f_4);
}

void func_342(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_343(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_344()
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

int func_345(int iParam0)
{
	return func_381(iParam0) + 30;
}

void func_346(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { Global_1900460.f_1[iParam0 /*2*/] };
	Global_1900460.f_1[iParam0 /*2*/] = { Global_1900460.f_1[iParam1 /*2*/] };
	Global_1900460.f_1[iParam1 /*2*/] = { Var0 };
}

bool func_347(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return (iParam0 == -8.282245E+21f || iParam0 == -3.245335E+35f);
		default:
			break;
	}
	return iParam0 == -3.245335E+35f;
}

int func_348(bool bParam0, bool bParam1, bool bParam2)
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

bool func_349(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_350(int iParam0)
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

int func_351()
{
	if (func_83() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_352()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

void func_353(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_354(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_355(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_356(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_357()
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

void func_358(int iParam0)
{
	if (func_382(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_359(bool bParam0, int iParam1)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1206482.f_455))
	{
		return false;
	}
	*bParam0 = Global_1206482.f_455;
	bParam0->f_2 = -0.4166105f;
	bParam0->f_3 = func_383(iParam1);
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_360(bool bParam0)
{
	bParam0->f_2 = -5.135098E+27f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_361(bool bParam0, var uParam1)
{
	bParam0->f_2 = -2.751128E-24f;
	bParam0->f_3 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

bool func_362(bool bParam0)
{
	bParam0->f_2 = 6.889182E+22f;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

int func_363(vector3 vParam0, int iParam3, var uParam4, float fParam5, char* sParam6, bool bParam7)
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

int func_364(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1957416901:
			return 7;
		case -1185533313:
			return 10;
		case -784189810:
			return 0;
		case -79999383:
			return 6;
		case -63669280:
			return 2;
		case 218185167:
			return 8;
		case 851921060:
			return 3;
		case 1457860192:
			return 5;
		case 1579717899:
			return 1;
		case 1744858848:
			return 9;
		case 2028478397:
			return 4;
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

int func_365(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1918441640:
			return 2;
		case -1581094459:
			return 8;
		case -1437925683:
			return 12;
		case -725256130:
			return 17;
		case -632356431:
			return 14;
		case -559809431:
			return 10;
		case -548018579:
			return 13;
		case -533426613:
			return 1;
		case -457802746:
			return 3;
		case -222655798:
			return 16;
		case 10577687:
			return 15;
		case 424482930:
			return 6;
		case 1153715636:
			return 5;
		case 1175500245:
			return 11;
		case 1272390114:
			return 7;
		case 1788958412:
			return 4;
		case 1816768801:
			return 0;
		case 1842544025:
			return 9;
		case 1943481570:
			return 18;
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

int func_366(int iParam0)
{
	if (!func_384(iParam0))
	{
		return 0;
	}
	if (func_83() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_367(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = Global_1072759.f_28418[29 /*4*/].f_3;
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar1, 5);
	*bParam0 = iVar0;
	return true;
}

bool func_368(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	uVar0 = bParam0->f_1;
	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

int func_369(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

struct<2> func_370()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_371(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_9;
}

struct<2> func_372(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1295802[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_373(bool bParam0)
{
	return func_385(bParam0, 67, 1);
}

struct<2> func_374(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573), func_177(iParam1));
			break;
		case 3:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_602), func_177(iParam1));
			break;
		case 4:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_2104), func_177(iParam1));
			break;
		case 5:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_12606), func_177(iParam1));
			break;
		case 6:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_12908), func_177(iParam1));
			break;
		case 7:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_15910), func_177(iParam1));
			break;
		case 8:
			Var0.f_1 = func_386(iParam0, &(Global_1072759.f_573.f_16512), func_177(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_370();
	}
	return Var0;
}

bool func_375(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	*bParam0 = Global_1149417.f_7;
	bParam0->f_2 = fParam3;
	bParam0->f_3 = func_387(iParam1);
	bParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

void func_376(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_388(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_389(iVar0);
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
			uParam2->f_5 = func_390(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_391(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_392(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_393(iVar0);
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

int func_377(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_394(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_179(Param0);
	Var0.f_3 = iParam3;
	func_395(&Var0, bParam2, iParam4);
	return 1;
}

bool func_378(int iParam0)
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

bool func_379(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_387(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_380(int iParam0, var uParam1)
{
	*uParam1 = 0;
	uParam1->f_1 = 0;
	uParam1->f_2 = (iParam0 / 86400);
	iParam0 = (iParam0 % 86400);
	uParam1->f_3 = (iParam0 / 3600);
	iParam0 = (iParam0 % 3600);
	uParam1->f_4 = (iParam0 / 60);
	iParam0 = (iParam0 % 60);
	uParam1->f_5 = iParam0;
}

int func_381(int iParam0)
{
	return iParam0 * 31;
}

bool func_382(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

int func_383(int iParam0)
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

bool func_384(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

var func_385(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

int func_386(int iParam0, var uParam1, int iParam2)
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

int func_387(int iParam0)
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

int func_388(int iParam0, var uParam1)
{
	vector3 vVar0;

	if (func_396(iParam0, uParam1, &vVar0))
	{
		return vVar0.z;
	}
	return 0;
}

int func_389(int iParam0)
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

int func_390(int iParam0)
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

int func_391(int iParam0)
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

int func_392(int iParam0)
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

int func_393(int iParam0)
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

int func_394(struct<2> Param0)
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
		if (func_27(Global_1205789[iVar0 /*4*/].f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_395(var uParam0, bool bParam1, int iParam2)
{
	func_397(uParam0, iParam2);
	if (Global_1205789.f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_398(func_394(uParam0->f_1));
	}
	else
	{
		func_399();
	}
}

bool func_396(int iParam0, var uParam1, var uParam2)
{
	var uVar0;

	if (func_400(iParam0, uParam1, &uVar0))
	{
		func_401(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

void func_397(var uParam0, int iParam1)
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

void func_398(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1205789.f_129)
	{
		return;
	}
	Global_1205789.f_130 = iParam0;
	Global_1205789.f_131 = Global_1205789[iParam0 /*4*/];
}

void func_399()
{
	if (Global_1205789.f_131 == 0)
	{
		return;
	}
	Global_1205789.f_130 = func_402(Global_1205789.f_131);
	if (Global_1205789.f_130 < 0)
	{
		Global_1205789.f_131 = 0;
	}
}

bool func_400(int iParam0, var uParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = -0.3074162f;
	bParam2->f_3 = func_387(iParam0);
	bParam2->f_4 = uParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_401(bool bParam0, int iParam1, var uParam2)
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

int func_402(int iParam0)
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

