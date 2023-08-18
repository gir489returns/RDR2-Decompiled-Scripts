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
	struct<10> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;
	int iVar5;
	bool bVar6;

	bVar0 = ScriptParam_0.f_1;
	bVar1 = ScriptParam_0.f_3;
	bVar2 = ScriptParam_0.f_4;
	iVar5 = func_1(bVar0);
	bVar6 = false;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var3, 3);
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		if (func_3(Global_33, 0) != -3.273909E-18f)
		{
			WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		}
	}
	PLAYER::_0xCFFC3ECCD7A5CCEB(PLAYER::GET_PLAYER_INDEX(), -3.273909E-18f, false);
	while (true)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
		{
			func_2(&Var3, 3);
		}
		switch (func_4(&Var3))
		{
			case 0:
				if (func_3(Global_33, 0) == -3.273909E-18f)
				{
					func_2(&Var3, 1);
				}
				break;
			case 1:
				func_5(iVar5);
				func_6(bVar0);
				Var3.f_1 = MISC::GET_GAME_TIMER();
				func_7(iVar5, 1);
				func_2(&Var3, 2);
				break;
			case 2:
				if (bVar2)
				{
					if ((MISC::GET_GAME_TIMER() - Var3.f_1) > 5500)
					{
						bVar6 = func_8(ScriptParam_0);
						func_9(iVar5, 1, !bVar6);
						if (bVar1)
						{
							func_10(iVar5, bVar6, 1, 0);
						}
						if (bVar6)
						{
							func_12(238, func_11(iVar5), 1);
						}
						func_2(&Var3, 3);
					}
				}
				else
				{
					func_2(&Var3, 3);
				}
				break;
			case 3:
				func_13();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

int func_1(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_HERB_GINSENG"):
			return 2;
		case joaat("CONSUMABLE_HERB_BAY_BOLETE"):
			return 4;
		case joaat("CONSUMABLE_HERB_BLACK_BERRY"):
			return 5;
		case joaat("CONSUMABLE_HERB_CURRANT"):
			return 6;
		case joaat("CONSUMABLE_HERB_BURDOCK_ROOT"):
			return 7;
		case joaat("CONSUMABLE_HERB_CHANTERELLES"):
			return 8;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
			return 11;
		case joaat("CONSUMABLE_HERB_CREEPING_THYME"):
			return 12;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
			return 15;
		case joaat("CONSUMABLE_HERB_EVERGREEN_HUCKLEBERRY"):
			return 16;
		case joaat("CONSUMABLE_HERB_INDIAN_TOBACCO"):
			return 21;
		case joaat("CONSUMABLE_HERB_MILKWEED"):
			return 24;
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
			return 27;
		case joaat("CONSUMABLE_HERB_OREGANO"):
			return 28;
		case joaat("CONSUMABLE_HERB_PARASOL_MUSHROOM"):
			return 29;
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			return 30;
		case joaat("CONSUMABLE_HERB_RAMS_HEAD"):
			return 32;
		case joaat("CONSUMABLE_HERB_RED_RASPBERRY"):
			return 34;
		case joaat("CONSUMABLE_HERB_SAGE"):
			return 35;
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			return 38;
		case joaat("CONSUMABLE_HERB_VIOLET_SNOWDROP"):
			return 39;
		case joaat("CONSUMABLE_HERB_WILD_CARROTS"):
			return 49;
		case joaat("CONSUMABLE_HERB_WILD_FEVERFEW"):
			return 50;
		case joaat("CONSUMABLE_HERB_WILD_MINT"):
			return 51;
		case joaat("CONSUMABLE_HERB_WINTERGREEN_BERRY"):
			return 52;
		case joaat("CONSUMABLE_HERB_YARROW"):
			return 53;
		case joaat("PROVISION_WLDFLWR_AGARITA"):
			return 40;
		case joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET"):
			return 41;
		case joaat("PROVISION_WLDFLWR_BITTERWEED"):
			return 42;
		case joaat("PROVISION_WLDFLWR_BLOOD_FLOWER"):
			return 43;
		case joaat("PROVISION_WLDFLWR_CARDINAL_FLOWER"):
			return 44;
		case joaat("PROVISION_WLDFLWR_CHOCOLATE_DAISY"):
			return 45;
		case joaat("PROVISION_WLDFLWR_CREEK_PLUM"):
			return 46;
		case joaat("PROVISION_WLDFLWR_WILD_RHUBARB"):
			return 47;
		case joaat("PROVISION_WLDFLWR_WISTERIA"):
			return 48;
	}
	return 0;
}

void func_2(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_3(int iParam0, int iParam1)
{
	var uVar0;

	WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &uVar0, true, iParam1, false);
	return uVar0;
}

int func_4(var uParam0)
{
	return *uParam0;
}

void func_5(int iParam0)
{
	int iVar0;

	iVar0 = func_16(MISC::VAR_STRING(10, "ITEM_TASTED_PUMP_MULT", MISC::VAR_STRING(0, func_15(func_14(iParam0), 0)), 1), "", 0, 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
	Global_1915207[iParam0 /*4*/] = iVar0;
}

void func_6(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
	}
}

void func_7(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_18(-3.114499E+25f, func_11(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_20(func_19(3.939822E-35f), iParam1);
}

int func_8(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	iVar0 = Param0.f_1;
	bVar1 = Param0.f_3;
	bVar2 = Param0.f_4;
	iVar3 = func_1(iVar0);
	if (!bVar2 || func_21(iVar3))
	{
		return 0;
	}
	bVar4 = func_22(iVar3);
	if ((!bVar1 || !func_17(bVar4, 0)) || func_23(bVar4))
	{
		return 0;
	}
	return 1;
}

void func_9(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_14(iParam0);
	iVar1 = func_1(bVar0);
	if (iVar1 != iParam0)
	{
		func_24(iVar1, 4);
	}
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_21(iParam0))
	{
		return;
	}
	func_24(iParam0, 4);
	func_26(iParam0, bParam1);
	if (!func_27(iParam0))
	{
		func_28(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

void func_10(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (!func_25(iParam0))
	{
		return;
	}
	func_31(func_22(iParam0), 0, bParam1, bParam2, iParam3);
}

int func_11(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -234962.3f;
		case 3:
			return 2.366417E+21f;
		case 4:
			return -1.386107E+34f;
		case 5:
			return -2.97167E-15f;
		case 6:
			return 8.463119E-19f;
		case 7:
			return 2.760042E+27f;
		case 8:
			return -4.521658E+16f;
		case 11:
			return 1.686081E-15f;
		case 12:
			return 2.99786E-23f;
		case 13:
			return -2.068241E-16f;
		case 15:
			return 0.01508827f;
		case 16:
			return 7.09962E-31f;
		case 18:
			return 0.01298591f;
		case 19:
			return 1.588368E+16f;
		case 20:
			return -31.0099f;
		case 21:
			return -1.94923E-30f;
		case 24:
			return -6.251165E-27f;
		case 27:
			return 9.786227E+32f;
		case 28:
			return 6.615322E+17f;
		case 29:
			return -4569.771f;
		case 30:
			return -2.826478E-24f;
		case 32:
			return 1.083073E-23f;
		case 34:
			return 1.08003E-10f;
		case 35:
			return 0.001343195f;
		case 38:
			return 3.083274f;
		case 39:
			return -2.630747E+29f;
		case 49:
			return -6.894112E-24f;
		case 50:
			return 6.146509E+25f;
		case 51:
			return 1.102432E+08f;
		case 52:
			return 5.512026E-06f;
		case 53:
			return 7.999936E-33f;
		case 1:
			return 3.893925E+35f;
		case 9:
			return -9.171282E-05f;
		case 10:
			return 2.919138f;
		case 14:
			return -3.200285E-39f;
		case 17:
			return 6.343439E-12f;
		case 22:
			return -2.805407E+09f;
		case 23:
			return 1.683938E+30f;
		case 25:
			return -9.631347E+33f;
		case 26:
			return 6.436501E-06f;
		case 31:
			return 1.492619E-33f;
		case 33:
			return -1.271906E-21f;
		case 36:
			return 5.975847E+18f;
		case 37:
			return -2.818925E-24f;
		case 40:
			return 2.259795E-15f;
		case 42:
			return -0.0004785703f;
		case 43:
			return 1.971843f;
		case 41:
			return -1.666145E+15f;
		case 44:
			return -7.50816E-16f;
		case 45:
			return -1.131684E-30f;
		case 46:
			return 1.692283E+27f;
		case 47:
			return -694.8118f;
		case 48:
			return -2.879174E-18f;
	}
	return 0;
}

void func_12(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_34(iParam0, 1024))
	{
		return;
	}
	func_35(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = iParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_13()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_14(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1.612096E+13f;
		case 3:
			return 1.612096E+13f;
		case 4:
			return -2.112425E-19f;
		case 5:
			return -2.542044E-33f;
		case 6:
			return 0.2307141f;
		case 7:
			return -3.544574E+24f;
		case 8:
			return -3.637179f;
		case 11:
			return -1.070114E-36f;
		case 12:
			return 7.727507E+35f;
		case 13:
			return -8.489537E-26f;
		case 15:
			return -4.800851E-20f;
		case 16:
			return -1.331913E-21f;
		case 18:
			return 0.2307141f;
		case 19:
			return -1.509861E+30f;
		case 20:
			return -8.489537E-26f;
		case 21:
			return -2.630241E+17f;
		case 24:
			return 2.585592E-34f;
		case 27:
			return -1.759994E-35f;
		case 28:
			return 2.613597E-19f;
		case 29:
			return -3.824638E-34f;
		case 30:
			return 1.017381E-30f;
		case 32:
			return -1.0937E+12f;
		case 34:
			return 2.094315E-17f;
		case 35:
			return -8.489537E-26f;
		case 38:
			return 6.389664E+33f;
		case 39:
			return -4.007857E+35f;
		case 49:
			return 265520.7f;
		case 50:
			return 3.576129E-12f;
		case 51:
			return -1.727621E+23f;
		case 52:
			return -2.876431E+16f;
		case 53:
			return -6.870412E+19f;
		case 40:
			return 6.694413E+09f;
		case 41:
			return joaat("PROVISION_WLDFLWR_TEXAS_BLUE_BONNET");
		case 42:
			return 1.756876f;
		case 43:
			return -0.0002349855f;
		case 44:
			return -4.048429E-32f;
		case 45:
			return -4.960599E+17f;
		case 46:
			return -1.236902E-25f;
		case 47:
			return 1.84378E+19f;
		case 48:
			return -4.117234E+24f;
		default:
			break;
	}
	return false;
}

bool func_15(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_36(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_16(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_37(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_17(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<2> func_18(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

struct<2> func_19(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_20(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_21(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 4, 1);
}

bool func_22(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 2:
			return -1.149686f;
		case 3:
			return -5.330192E+11f;
		case 6:
			return 4.017326E-12f;
		case 7:
			return 1.447452E+20f;
		case 13:
			return -3.493865f;
		case 15:
			return -1.149686f;
		case 18:
			return -1.259252E+10f;
		case 20:
			return 1.023089E-12f;
		case 21:
			return -2.358282E+21f;
		case 24:
			return -8.536846E-33f;
		case 27:
			return 7.576495E+34f;
		case 30:
			return -3.493865f;
		case 35:
			return 9.716705E+17f;
		case 39:
			return 7.576495E+34f;
		case 50:
			return 9.716705E+17f;
		case 53:
			return -5.330192E+11f;
	}
	return false;
}

bool func_23(bool bParam0)
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
			if (Var1.f_2 == 5.928634E+20f && !func_39(bParam0, Var1, 1))
			{
				return true;
			}
		}
		iVar48++;
	}
	return false;
}

void func_24(int iParam0, int iParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	Global_17418[iParam0] = (Global_17418[iParam0] || iParam1);
}

bool func_25(int iParam0)
{
	return !iParam0 <= 0;
}

void func_26(int iParam0, bool bParam1)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_40(iParam0))
	{
		return;
	}
	func_24(iParam0, 2);
	if (bParam1)
	{
		if (!func_29(0, 0, 1))
		{
			func_41(1, 0.02012728f);
		}
	}
}

bool func_27(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 1, 1);
}

void func_28(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_25(iParam0))
	{
		return;
	}
	if (func_27(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_42(iParam0);
	}
	if (!bParam1)
	{
		func_43(iParam0);
	}
	func_24(iParam0, 1);
	func_26(iParam0, 1);
	if (bParam2)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 6);
		}
	}
}

bool func_29(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887.f_14 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900460.f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900460.f_68;
		}
		if (func_44())
		{
			return true;
		}
		if (Global_1072759.f_3 && !Global_1572887.f_10)
		{
			if ((Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_481 && NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900460.f_67;
		}
		else
		{
			return Global_1900460.f_68;
		}
	}
	if (iParam0 == 0 && func_46(func_45(0)))
	{
		return true;
	}
	if ((Global_1940186 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < Global_1900595)
		{
			return true;
		}
	}
	switch (func_47(func_45(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

void func_30(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_48(&Global_0, 8);
	}
	if (!func_49() || func_50() != -1)
	{
		return;
	}
	func_48(&Global_0, 1);
}

int func_31(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	struct<37> Var2;
	int iVar49;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (bParam1 != 0 && !func_39(bParam0, bParam1, 1))
	{
		return 0;
	}
	bVar0 = false;
	if (bParam1 == 0)
	{
		iVar1 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var2.f_4 = 15;
		Var2.f_36 = 10;
		iVar49 = 0;
		while (iVar49 < iVar1)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam0, iVar49, &Var2))
			{
				if (Var2.f_2 == 5.928634E+20f && func_39(bParam0, Var2, 1))
				{
					if (func_51(bParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_51(bParam0, bParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			if (func_50() != -1)
			{
				func_52(573, 1);
			}
			else
			{
				func_52(235, 0);
			}
		}
	}
	if (bParam3)
	{
		if (!func_29(0, 0, 1))
		{
			func_30(1, 5);
		}
	}
	if (bVar0)
	{
		return 1;
	}
	return 0;
}

void func_32(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_33(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_53(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_54(iParam0))
	{
		return false;
	}
	if (func_55(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_34(iParam0, 1)) || func_56(32768))
	{
		if (!func_34(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_57())
	{
		return false;
	}
	return true;
}

bool func_34(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_35(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_36(bool bParam0, bool bParam1)
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

void func_37(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

bool func_38(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_25(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887.f_14 != -1)
	{
		return (Global_17418[iParam0] && iParam1) != 0;
	}
	return (Global_38.f_4675[iParam0] && iParam1) != 0;
}

int func_39(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_17(bParam0, 0))
	{
		return func_59(func_58(bParam0), bParam1, bParam2);
	}
	if (func_60(bParam0) || func_61(bParam0, 2.791187f))
	{
		return func_63(func_62(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_50() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_64(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_40(int iParam0)
{
	if (!func_25(iParam0))
	{
		return false;
	}
	return func_38(iParam0, 2, 1);
}

int func_41(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_65())
	{
		return 0;
	}
	if (!func_66())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_48(&Global_0, 8);
	}
	func_48(&Global_0, 1);
	return 1;
}

int func_42(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return 1;
		default:
			return 0;
	}
	return 0;
}

void func_43(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_52(239, 0);
			break;
		case 16:
			func_52(240, 0);
			break;
		case 34:
			func_52(241, 0);
			break;
		case 52:
			func_52(242, 0);
			break;
		case 2:
			func_52(243, 0);
			break;
		case 3:
			func_52(244, 0);
			break;
		case 53:
			func_52(245, 0);
			break;
		case 15:
			func_52(246, 0);
			break;
		case 24:
			func_52(247, 0);
			break;
		case 38:
			func_52(248, 0);
			break;
		case 27:
			func_52(249, 0);
			break;
		case 13:
			func_52(250, 0);
			break;
		case 19:
			func_52(251, 0);
			break;
		case 20:
			func_52(252, 0);
			break;
		case 35:
			func_52(253, 0);
			break;
		case 39:
			func_52(254, 0);
			break;
		case 50:
			func_52(255, 0);
			break;
		case 7:
			func_52(256, 0);
			break;
		case 21:
			func_52(257, 0);
			break;
		case 18:
			func_52(258, 0);
			break;
		case 6:
			func_52(259, 0);
			break;
		case 30:
			func_52(260, 0);
			break;
		case 49:
			func_52(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_52(263, 0);
			break;
		case 8:
			func_52(264, 0);
			break;
		case 29:
			func_52(265, 0);
			break;
		case 32:
			func_52(266, 0);
			break;
		case 12:
			func_52(267, 0);
			break;
		case 28:
			func_52(268, 0);
			break;
		case 51:
			func_52(269, 0);
			break;
	}
}

bool func_44()
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
	if (!func_46(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_45(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_46(struct<2> Param0)
{
	if (!func_67(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_68(Param0))
	{
		return false;
	}
	return true;
}

int func_47(var uParam0, var uParam1)
{
	return uParam0;
}

void func_48(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_49()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_50()
{
	return Global_1572887.f_14;
}

bool func_51(bool bParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;

	if (func_50() != -1)
	{
		return false;
	}
	if (func_64(bParam0, bParam1, &uVar2, &iVar1))
	{
		iVar14 = 0;
		while (iVar14 < iVar1)
		{
			iVar13 = uVar2[iVar14];
			if (iVar13 == 0)
			{
			}
			else
			{
				if (!bVar0)
				{
					if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar13))
					{
						bVar0 = true;
					}
				}
				UNLOCK::UNLOCK_SET_UNLOCKED(iVar13, true);
			}
			iVar14++;
		}
	}
	return bVar0;
}

void func_52(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_32(iParam0, &iVar0, &iVar1);
	if (!func_33(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_35(iVar0, iVar1);
}

bool func_53(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_54(int iParam0)
{
	if (func_34(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_55(int iParam0)
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

bool func_56(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_57()
{
	if (!func_66())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_58(bool bParam0)
{
	return bParam0;
}

int func_59(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_69(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_50() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_70(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_60(bool bParam0)
{
	if (func_61(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

int func_61(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return func_71(func_58(bParam0), iParam1);
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

bool func_62(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_17(bParam0, 0))
	{
		return func_72(func_58(bParam0), bParam1);
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

int func_63(bool bParam0, bool bParam1)
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
					return 1;
				}
				iVar475++;
			}
		}
		iVar474++;
	}
	return 0;
}

bool func_64(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_17(bParam0, 0))
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

bool func_65()
{
	return !Global_1572887.f_10;
}

bool func_66()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_67(int iParam0)
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

int func_68(int iParam0)
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

bool func_69(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_70(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_69(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_73(bParam0, bParam1, &Var0))
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

int func_71(bool bParam0, int iParam1)
{
	if (!func_69(bParam0, 2))
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

bool func_72(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_69(bParam0, 2))
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

bool func_73(bool bParam0, bool bParam1, var uParam2)
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

