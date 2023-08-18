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
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 2;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 7;
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
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (func_1(&uLocal_19))
	{
		func_2(&uLocal_19);
	}
	func_3(&uLocal_19);
}

bool func_1(var uParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(&uLocal_19, 0);
	func_5(uParam0);
	func_6();
	return true;
}

void func_2(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_7(uParam0))
		{
			bVar0 = true;
		}
		func_8(uParam0);
		func_9(uParam0);
		func_10(uParam0);
		func_11(&(uParam0->f_18));
		BUILTIN::WAIT(0);
	}
}

void func_3(var uParam0)
{
	func_12();
	func_13(uParam0);
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_4(var uParam0, int iParam1)
{
	uParam0->f_2 = iParam1;
}

int func_5(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_14(iVar2, 1);
		if (!func_15(uParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

void func_6()
{
	if (!func_16())
	{
		return;
	}
	Global_1960810.f_3 = Global_1295619.f_16;
	Global_1960810.f_4 = Global_1960810;
}

bool func_7(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	return false;
}

void func_8(var uParam0)
{
	var uVar0;

	while (UIEVENTS::EVENTS_UI_IS_PENDING(3.417848E+22f))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(3.417848E+22f, &uVar0))
		{
		}
		else
		{
			func_17(uParam0, &uVar0);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(3.417848E+22f);
		}
	}
}

void func_9(var uParam0)
{
	bool bVar0;

	if (func_18(uParam0, 2))
	{
		func_19(uParam0, 2, 0);
	}
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(4.255667E+29f))
	{
		return;
	}
	bVar0 = UIAPPS::IS_UIAPP_RUNNING_BY_HASH(4.255667E+29f);
	if (*uParam0 != bVar0)
	{
		*uParam0 = bVar0;
		if (bVar0)
		{
			func_19(uParam0, 2, 1);
		}
	}
}

void func_10(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(4.255667E+29f);
	iVar1 = func_20(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_21(uParam0, iVar1);
		}
		func_4(uParam0, iVar0);
		func_22(uParam0, iVar0);
	}
	func_23(uParam0, iVar0);
}

void func_11(var uParam0)
{
	if (!uParam0->f_3)
	{
		return;
	}
	uParam0->f_2 = func_24(uParam0);
	if (uParam0->f_2)
	{
		uParam0->f_3 = 0;
	}
}

void func_12()
{
	int iVar0;

	if (!func_16())
	{
		return;
	}
	iVar0 = MISC::ABSI((Global_1295619.f_16 - Global_1960810.f_3));
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960810.f_4, Global_1960810.f_5, iVar0, Global_1960810.f_2);
	Global_1960810.f_1 = 0;
	func_25(&Global_1960810);
}

int func_13(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_14(iVar2, 1);
		func_26(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

int func_14(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 4.255667E+29f;
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

bool func_15(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("HUB"):
			return func_27(uParam0);
	}
	return false;
}

bool func_16()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 1.694023E-10f) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, 1.694023E-10f))
	{
		return false;
	}
	return Global_1960810.f_6;
}

void func_17(var uParam0, var uParam1)
{
	switch (*uParam1)
	{
		case -1203660660:
			func_28(uParam0, uParam1);
			break;
		case -2075827635:
			func_29(uParam1);
			break;
	}
}

bool func_18(var uParam0, int iParam1)
{
	return func_30(uParam0->f_1, iParam1);
}

void func_19(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_31(&(uParam0->f_1), iParam1);
	}
	else
	{
		func_32(&(uParam0->f_1), iParam1);
	}
}

var func_20(var uParam0)
{
	return uParam0->f_2;
}

void func_21(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("HUB"):
			func_33(uParam0);
			break;
	}
}

void func_22(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("HUB"):
			func_34(uParam0);
			break;
	}
}

void func_23(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("HUB"):
			func_35(uParam0);
			break;
	}
}

int func_24(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
		{
		}
		else
		{
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar0, uParam0->f_1);
			if (iVar3 == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(iVar3))
			{
			}
			else if (!TXD::HAS_STREAMED_TXD_LOADED(iVar3))
			{
				return 0;
			}
		}
		iVar2++;
	}
	return 1;
}

void func_25(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 5.779137E+29f;
}

void func_26(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("HUB"):
			func_36(uParam0);
			break;
	}
}

int func_27(var uParam0)
{
	if (!func_37(uParam0))
	{
		return 0;
	}
	return 1;
}

void func_28(var uParam0, var uParam1)
{
	switch (uParam1->f_2)
	{
		case 1907521504:
			func_38(4.081617E+21f);
			func_39(4.081617E+21f, 0);
			func_40(uParam0, Global_1295619.f_16);
			break;
		case joaat("BUCK"):
		case joaat("BEAR"):
		case joaat("FOX"):
		case joaat("BEAVER"):
		case joaat("ELK"):
		case joaat("COUGAR"):
		case joaat("PANTHER"):
		case joaat("COYOTE"):
		case joaat("BOAR"):
		case joaat("BISON"):
		case joaat("RAM"):
		case joaat("WOLF"):
		case joaat("MOOSE"):
		case joaat("ALLIGATOR"):
			func_41(uParam1->f_2);
			break;
		case 1469315950:
			func_42();
			break;
		case -2135129228:
		case -1195114281:
		case 407693523:
		case 1223038046:
			func_43(uParam0);
			break;
		case joaat("TRADE_7"):
			func_44();
			break;
		case -283069378:
			func_45();
			break;
		case joaat("NET_PLAYLIST_NOMINATED_SERIES_MEDIUM"):
			func_46();
			break;
	}
}

void func_29(var uParam0)
{
	func_47(uParam0);
}

bool func_30(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_31(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_32(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_33(var uParam0)
{
	func_38(4.081617E+21f);
}

int func_34(var uParam0)
{
	func_48(uParam0);
	func_19(uParam0, 0, 1);
	func_49(&(uParam0->f_14), 2000);
	func_50(uParam0);
	func_51(4.081617E+21f);
	return 1;
}

void func_35(var uParam0)
{
	if (MISC::ABSI((Global_1295619.f_16 - func_52(uParam0))) > 3)
	{
		if (Global_1960810.f_5 == -1)
		{
			func_51(4.081617E+21f);
		}
	}
	if (func_53(&(uParam0->f_14)))
	{
		func_19(uParam0, 0, 1);
		func_19(uParam0, 1, 1);
	}
	if (func_18(uParam0, 2))
	{
		func_19(uParam0, 0, 1);
		func_19(uParam0, 1, 1);
	}
	if (func_18(uParam0, 0))
	{
		func_54(&(uParam0->f_18));
		func_55(uParam0);
		func_56(&(uParam0->f_18), uParam0->f_3[1], "textureTxd");
		func_19(uParam0, 0, 0);
	}
	if (func_18(uParam0, 1))
	{
		func_50(uParam0);
		func_19(uParam0, 1, 0);
	}
}

void func_36(var uParam0)
{
	func_33(uParam0);
	func_57(uParam0);
}

bool func_37(var uParam0)
{
	uParam0->f_3[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -1.042942E-35f);
	uParam0->f_3[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(uParam0->f_3[0], -2.388816E-32f);
	uParam0->f_3.f_3[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3[0], 2.901489E-29f, 0);
	uParam0->f_3.f_3[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(uParam0->f_3[0], -3.849028E-25f, 2);
	uParam0->f_3.f_3[0] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(uParam0->f_3[0], -2.346469E+31f, "");
	uParam0->f_3.f_3[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_3[0], "hubRewardsTileRankText", "");
	uParam0->f_3.f_3[4] = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_3[0], "hubRewardsTileRankTextColor", 27.64779f);
	uParam0->f_3.f_3[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3[0], "hubRewardsTileHasVipPass", false);
	uParam0->f_3.f_3[6] = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_3[0], "hubRewardsTilePromptEnabled", true);
	return true;
}

void func_38(int iParam0)
{
	int iVar0;

	if (func_16())
	{
		return;
	}
	if (Global_1960810.f_5 == -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 != iParam0)
	{
	}
	iVar0 = MISC::ABSI((Global_1295619.f_16 - Global_1960810.f_3));
	TELEMETRY::_TELEMETRY_HUB_NAVIGATION(Global_1960810.f_4, Global_1960810.f_5, iVar0, Global_1960810.f_2);
	Global_1960810.f_1 = 0;
	func_25(&Global_1960810);
	func_39(iParam0, 0);
}

void func_39(int iParam0, bool bParam1)
{
	if (func_16())
	{
		return;
	}
	if (Global_1960810.f_1)
	{
		return;
	}
	Global_1960810 = iParam0;
	if (bParam1)
	{
		Global_1960810.f_1 = 1;
	}
}

void func_40(var uParam0, var uParam1)
{
	uParam0->f_22 = uParam1;
}

void func_41(int iParam0)
{
	switch (func_59(func_58(iParam0)))
	{
		case 1:
			func_60();
			break;
		case 0:
			func_61(func_58(iParam0));
			break;
	}
}

void func_42()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(1), 2.470745E-30f, false) > 0)
	{
		func_64(func_63(1), 100f);
		return;
	}
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(1), 1.853402E+37f, false) > 0)
	{
		func_64(func_63(1), 100f);
		return;
	}
	func_64(1151934055, -995931268, 1117246102, 100f);
}

void func_43(var uParam0)
{
	vector3 vVar0;
	bool bVar3;
	float fVar4;
	vector3 vVar5;
	vector3 vVar8;
	float fVar11;
	float fVar12;
	vector3 vVar13;
	int iVar16;
	float fVar17;

	if (func_65())
	{
		bVar3 = false;
		fVar4 = -1f;
		vVar8 = { func_66(255) };
		if (vVar8.z != 0)
		{
			func_67(vVar8, &vVar5, &fVar11);
			fVar4 = func_68(Global_34, vVar5);
		}
		fVar12 = -1f;
		if (Global_1051832.f_3752 != -1)
		{
			func_69(Global_1051832.f_3752, &iVar16, &fVar17, &vVar13);
			fVar12 = func_68(Global_34, vVar13);
		}
		if (fVar4 >= 0f && fVar12 >= 0f)
		{
			if (fVar4 < fVar12)
			{
				vVar0 = { vVar5 };
				bVar3 = true;
			}
			else
			{
				vVar0 = { vVar13 };
				bVar3 = true;
			}
		}
		else if (fVar4 >= 0f)
		{
			vVar0 = { vVar5 };
			bVar3 = true;
		}
		else if (fVar12 >= 0f)
		{
			vVar0 = { vVar13 };
			bVar3 = true;
		}
		if (bVar3)
		{
			func_64(vVar0, 100f);
		}
	}
	else
	{
		func_70();
		func_71();
		func_72(0.7868816f, 9.522126E+26f);
	}
}

void func_44()
{
	if (!func_73(9))
	{
		func_64(1159565722, -996466688 /* Float: -1241f */, 1112276992 /* Float: 51f */, 100f);
	}
}

void func_45()
{
	vector3 vVar0;

	if (func_73(9))
	{
		vVar0 = { func_63(2) };
		func_64(vVar0, 100f);
	}
}

void func_46()
{
	int iVar0;

	func_70();
	func_71();
	iVar0 = UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(MISC::GET_HASH_KEY("social_club_feed"), MISC::GET_HASH_KEY("launch_to_missions"));
}

void func_47(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_2;
	switch (iVar0)
	{
		case 1223038046:
			if (!func_74(0, 0, 1))
			{
				MISC::_0xDBDA48EC456ED908();
			}
			break;
		case joaat("TRADE_7"):
			if (!func_74(0, 0, 1) && !func_73(9))
			{
				MISC::_0xDBDA48EC456ED908();
			}
			break;
		case -283069378:
			if (!func_74(0, 0, 1) && func_73(9))
			{
				MISC::_0xDBDA48EC456ED908();
			}
			break;
		default:
			MISC::_0xDBDA48EC456ED908();
			break;
	}
}

int func_48(var uParam0)
{
	if (!func_75(&(uParam0->f_3[1])))
	{
		return 0;
	}
	return 1;
}

void func_49(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_50(var uParam0)
{
	struct<40> Var0;

	Var0 = { func_76(1) };
	func_77(uParam0, &Var0, Var0.f_16);
	func_78(uParam0, MISC::VAR_STRING(2, &(Var0.f_17)));
	func_79(uParam0, Var0.f_33, Var0.f_34);
	func_80(uParam0, Var0.f_39);
	func_81(uParam0, Var0.f_38);
}

void func_51(int iParam0)
{
	if (func_16())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 != -1 && Global_1960810.f_5 != iParam0)
	{
		func_38(Global_1960810.f_5);
	}
	Global_1960810.f_3 = Global_1295619.f_16;
	Global_1960810.f_5 = iParam0;
	Global_1960810.f_4 = Global_1960810;
}

int func_52(var uParam0)
{
	return uParam0->f_22;
}

bool func_53(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_82(uParam0))
		{
			func_83(uParam0);
		}
		return false;
	}
	if (!func_82(uParam0))
	{
		func_84(uParam0, 1);
		return true;
	}
	if (!func_85(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_86(uParam0);
	return true;
}

void func_54(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return;
	}
	func_87(uParam0);
}

void func_55(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<12> Var2;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;

	iVar1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&iVar0);
	Var2.f_9 = -5.45926E-19f;
	iVar17 = 0;
	iVar18 = 0;
	iVar19 = 0;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iVar1, iVar16, &Var2))
		{
		}
		iVar18 = Var2.f_11;
		if (!func_88(&Var2))
		{
		}
		else if (!func_89(Var2.f_9))
		{
		}
		else
		{
			iVar19 = 0;
			while (iVar19 < iVar18)
			{
				if (!func_90(Var2.f_4))
				{
				}
				else if (!func_91(uParam0, &Var2, iVar17))
				{
				}
				else
				{
					iVar17++;
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar19++;
					}
					if (iVar17 >= 6)
					{
					}
					else
					{
						iVar16++;
					}
					INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar1);
					if (iVar17 == 0)
					{
						if (func_92(uParam0, -1))
						{
							iVar17++;
						}
					}
					if (func_93(uParam0) > iVar17)
					{
						func_94(uParam0, iVar17);
					}
				}
			}
		}
	}
}

void func_56(var uParam0, int iParam1, char* sParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam1))
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return;
	}
	uParam0->f_3 = 1;
	uParam0->f_2 = 0;
	uParam0->f_1 = sParam2;
	*uParam0 = iParam1;
	func_95(uParam0);
}

void func_57(var uParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3[0]))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_3[0]);
	}
}

int func_58(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BEAR"):
			return 13;
		case joaat("COUGAR"):
			return 0;
		case joaat("ALLIGATOR"):
			return 4;
		case joaat("WOLF"):
			return 6;
		case joaat("FOX"):
			return 3;
		case joaat("COYOTE"):
			return 10;
		case joaat("BOAR"):
			return 1;
		case joaat("BEAVER"):
			return 5;
		case joaat("PANTHER"):
			return 11;
		case joaat("RAM"):
			return 12;
		case joaat("BISON"):
			return 8;
		case joaat("ELK"):
			return 9;
		case joaat("BUCK"):
			return 2;
		case joaat("MOOSE"):
			return 7;
		default:
			break;
	}
	return 0;
}

int func_59(int iParam0)
{
	if (UNLOCK::UNLOCK_IS_VISIBLE(func_96(&iParam0)))
	{
		return 1;
	}
	return 0;
}

void func_60()
{
	switch (func_97())
	{
		case 2:
			func_98();
			break;
		case 0:
			func_64(-991803802, -1011269632, 1126360678 /* Float: 162.9f */, 100f);
			break;
		case 1:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 100f);
			break;
	}
}

void func_61(int iParam0)
{
	switch (func_99(iParam0))
	{
		case 0:
			func_64(-991803802, -1011269632, 1126360678 /* Float: 162.9f */, 100f);
			break;
		case 1:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 100f);
			break;
		case 2:
			func_64(Global_1051832.f_3765[39 /*17*/].f_1, 100f);
			break;
		case 3:
			func_70();
			func_71();
			func_100(2.622451E-38f, 0, 0, 0, 1, 0, 0);
			break;
		case 4:
			func_98();
			break;
	}
}

int func_62(bool bParam0)
{
	if (func_101() == -1)
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

Vector3 func_63(int iParam0)
{
	int iVar0;

	iVar0 = func_102(iParam0);
	if (!MAP::DOES_BLIP_EXIST(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return MAP::GET_BLIP_COORDS(iVar0);
}

void func_64(vector3 vParam0, float fParam3)
{
	MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vParam0, fParam3);
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(4.255667E+29f, -42.79684f))
	{
	}
}

bool func_65()
{
	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return false;
	}
	return func_103(0);
}

Vector3 func_66(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_104() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

int func_67(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	struct<5> Var0;
	struct<5> Var5;

	if (!func_105(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -2.31854E-20f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var5 = { Var0 };
		Var5.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var5);
		Var5 = { Var0 };
		Var5.f_2 = 1.979704f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var5);
		return 1;
	}
	return 0;
}

float func_68(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_69(int iParam0, int* iParam1, float* fParam2, Vector3* vParam3)
{
	return func_106(iParam0, "sHash", iParam1, "fHeading", fParam2, "vPos", vParam3);
}

void func_70()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(4.255667E+29f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(4.255667E+29f))
	{
		return;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(4.255667E+29f);
}

int func_71()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
	{
		return 0;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(7.215231E-38f);
	return 1;
}

void func_72(int iParam0, float fParam1)
{
	func_107(1, 0);
	Global_1940239.f_9 = 1;
	func_108(iParam0);
	Global_1940239.f_11647 = fParam1;
}

bool func_73(int iParam0)
{
	int iVar0;
	bool bVar1;

	if (iParam0 == 0)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	iVar0 = func_109(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_110(1, iParam0);
		if (bVar1 == 0)
		{
			return false;
		}
		if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar1))
		{
			return true;
		}
	}
	return false;
}

bool func_74(int iParam0, bool bParam1, bool bParam2)
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
		if (func_111())
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
	if (iParam0 == 0 && func_113(func_112(0)))
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
	switch (func_114(func_112(0)))
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

bool func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
		{
		}
		else
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iVar0);
		}
		iVar2++;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(*uParam0);
	return true;
}

struct<40> func_76(bool bParam0)
{
	struct<40> Var0;
	int iVar40;
	bool bVar41;
	struct<2> Var42;
	struct<2> Var44;

	Var0.f_16 = 27.64779f;
	Var0.f_38 = 1;
	iVar40 = func_115(0);
	bVar41 = func_116();
	switch (func_117())
	{
		case 0:
			StringCopy(&Var0, MISC::VAR_STRING(2, func_118(-2.022851E+17f), iVar40), 128);
			if (bVar41)
			{
				Var0.f_16 = -4.035779E+11f;
			}
			else
			{
				Var0.f_16 = 27.64779f;
			}
			if (bParam0)
			{
				Var42 = { func_119(2.440918E+26f) };
			}
			else
			{
				Var42 = { func_119(1.831836E-06f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_119(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			if (bVar41)
			{
				StringCopy(&(Var0.f_17), func_118(-4.840783E-37f), 128);
			}
			else
			{
				StringCopy(&(Var0.f_17), func_118(3.102336E-30f), 128);
			}
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 2:
			StringCopy(&Var0, MISC::VAR_STRING(2, func_118(-2.022851E+17f), iVar40), 128);
			if (bVar41)
			{
				Var0.f_16 = -4.035779E+11f;
			}
			else
			{
				Var0.f_16 = 27.64779f;
			}
			if (bParam0)
			{
				Var42 = { func_119(-5.883759E+36f) };
			}
			else
			{
				Var42 = { func_119(7.511993E+12f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_119(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_118(-1.015928E+35f), 128);
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 3:
			StringCopy(&Var0, func_120(1.421011E-18f), 128);
			Var0.f_16 = 27.64779f;
			if (bParam0)
			{
				Var42 = { func_119(-1.344928E-32f) };
			}
			else
			{
				Var42 = { func_119(375991.1f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_119(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_118(-46090.21f), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 0;
			Var0.f_39 = 0;
			break;
		case 1:
			StringCopy(&Var0, func_120(-4.096321E+18f), 128);
			Var0.f_16 = 4.465091E-08f;
			if (bParam0)
			{
				Var42 = { func_119(-2.178282E+08f) };
			}
			else
			{
				Var42 = { func_119(6.354132E+35f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_119(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_118(0.0117414f), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
	}
	return Var0;
}

void func_77(var uParam0, char* sParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_3[3], sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[4], iParam2);
}

void func_78(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3.f_3[0], sParam1);
}

void func_79(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[1], iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3.f_3[2], iParam2);
}

void func_80(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3.f_3[5], bParam1);
}

void func_81(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_3.f_3[6], bParam1);
}

bool func_82(var uParam0)
{
	return func_121(*uParam0, 1);
}

void func_83(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1 || !func_82(uParam0))
	{
		func_86(uParam0);
	}
}

int func_85(var uParam0)
{
	if (!func_82(uParam0))
	{
		return 0;
	}
	if (func_122(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_123() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_86(var uParam0)
{
	func_124(uParam0, 0f);
}

int func_87(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return 0;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
		{
		}
		else
		{
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar0, uParam0->f_1);
			if (iVar3 == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(iVar3))
			{
			}
			else
			{
				TXD::SET_STREAMED_TXD_AS_NO_LONGER_NEEDED(iVar3);
			}
		}
		iVar2++;
	}
	return 1;
}

bool func_88(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_89(int iParam0)
{
	if (iParam0 == 0.2059816f)
	{
		return false;
	}
	return true;
}

bool func_90(bool bParam0)
{
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (func_126(bParam0) == 9.22581E-11f)
	{
		return false;
	}
	return true;
}

bool func_91(var uParam0, var uParam1, int iParam2)
{
	struct<10> Var0;
	var uVar14;

	Var0.f_9 = -5.45926E-19f;
	func_127(*uParam1, &Var0, 1, 0, -1);
	if (!func_125(Var0.f_4, 0))
	{
		return false;
	}
	if (func_128(Var0.f_4))
	{
		if (!func_129(uParam1, &uVar14))
		{
			return false;
		}
	}
	else if (func_130(Var0.f_4))
	{
		if (!func_131(uParam1, &uVar14))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	if (!func_132(uParam0, &uVar14, iParam2))
	{
		return false;
	}
	return true;
}

bool func_92(var uParam0, int iParam1)
{
	struct<34> Var0;
	struct<2> Var36;

	func_133(&Var0);
	Var36 = Var0.f_32;
	Var36.f_1 = Var0.f_33;
	if (!func_132(uParam0, &Var36, iParam1))
	{
		return false;
	}
	return true;
}

int func_93(var uParam0)
{
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);
}

int func_94(var uParam0, int iParam1)
{
	if (!func_134(&(uParam0->f_3[1]), iParam1))
	{
		return 0;
	}
	return 1;
}

void func_95(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar2);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
		{
		}
		else
		{
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar0, uParam0->f_1);
			if (iVar3 == 0)
			{
			}
			else if (!TXD::DOES_STREAMED_TXD_EXIST(iVar3))
			{
			}
			else
			{
				TXD::REQUEST_STREAMED_TXD(iVar3, true);
			}
		}
		iVar2++;
	}
}

int func_96(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (*iParam0)
	{
		case 0:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COUGAR_SIGHTING_MISSIONS");
			break;
		case 1:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BOAR_SIGHTING_MISSIONS");
			break;
		case 2:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BUCK_SIGHTING_MISSIONS");
			break;
		case 3:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_FOX_SIGHTING_MISSIONS");
			break;
		case 4:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ALLIGATOR_SIGHTING_MISSIONS");
			break;
		case 5:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAVER_SIGHTING_MISSIONS");
			break;
		case 6:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_WOLF_SIGHTING_MISSIONS");
			break;
		case 7:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_MOOSE_SIGHTING_MISSIONS");
			break;
		case 8:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BISON_SIGHTING_MISSIONS");
			break;
		case 9:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_ELK_SIGHTING_MISSIONS");
			break;
		case 10:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_COYOTE_SIGHTING_MISSIONS");
			break;
		case 11:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_PANTHER_SIGHTING_MISSIONS");
			break;
		case 12:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_RAM_SIGHTING_MISSIONS");
			break;
		case 13:
			iVar0 = MISC::GET_HASH_KEY("ROLE_NATURALIST_PROGRESSION_LEGENDARY_BEAR_SIGHTING_MISSIONS");
			break;
	}
	return iVar0;
}

int func_97()
{
	if (func_135())
	{
		return 2;
	}
	if (!func_136(0) && !func_137(0))
	{
		return 0;
	}
	return 1;
}

void func_98()
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(4.255667E+29f, 62.22706f))
	{
	}
}

int func_99(int iParam0)
{
	if (func_135())
	{
		return 4;
	}
	if (!func_136(0) && !func_137(0))
	{
		return 0;
	}
	if (func_136(0) && !func_137(0))
	{
		return 1;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(func_138(&iParam0, 0)) && !UNLOCK::UNLOCK_IS_VISIBLE(func_139(&iParam0, 0)))
	{
		return 2;
	}
	return 3;
}

int func_100(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	float fVar26;
	var uVar27;
	bool bVar28;
	int iVar29;
	bool bVar30;
	bool bVar31;
	int iVar32;

	if (func_140())
	{
		Global_1940239.f_11589 = bParam0;
		func_141(bParam0, 1, -5.149929E+33f, 0, 0);
		return 0;
	}
	if (!func_142(bParam0, bParam4))
	{
		return 0;
	}
	if (func_143(bParam0))
	{
		return 0;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.543783E-35f))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -6.463736E+23f)
	{
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_144(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	if (func_145(bParam0, -1.384179E-36f))
	{
		func_146(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_145(bParam0, -2.126654E-30f))
	{
		func_147(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_145(bParam0, 7.57821E-18f))
	{
		func_148(bParam0, Var10);
	}
	else if (func_145(bParam0, 1.293259E-18f))
	{
		if (!func_149(bParam0))
		{
			return 0;
		}
	}
	if (func_150(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_151(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_145(bParam0, -6.191407E-06f))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_152(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_145(bParam0, -1.001123E-14f) || func_145(bParam0, -4.568457E+30f)) || func_145(bParam0, 1.293259E-18f))
	{
	}
	else if (func_145(bParam0, 4.644778E+30f))
	{
		if (((func_153() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true)) || !PED::IS_PED_ON_FOOT(Global_33))
		{
			return 0;
		}
		switch (bParam0)
		{
			case joaat("CONSUMABLE_HERBIVORE_BAIT"):
			case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case joaat("CONSUMABLE_PREDATOR_BAIT"):
			case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_152(Var10, 0);
		bVar28 = false;
	}
	else if (func_154(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_155(Global_1072759.f_28313.f_25.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_152(Var10, 0);
		iVar29 = 1;
	}
	else if (func_156(bParam0) == -42.1084f)
	{
		if (!func_157(bParam0))
		{
			func_158("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_159(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_160();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_161(PLAYER::PLAYER_ID()))
			{
				func_158("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_158("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -947.1324f)
		{
			if (Global_1953279.f_1676 != bParam0)
			{
				func_162(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_163(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_164(bParam0);
					func_162(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == Global_1953279.f_1676.f_1[23 /*3*/])
					{
						func_165(Global_33, 1.296E-29f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_166(bParam0, 0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_166(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == Global_1953279.f_1676.f_1[10 /*3*/])
					{
						func_165(Global_33, Global_1953279.f_83[10 /*12*/], 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						func_166(bParam0, 0, 0);
						return 1;
					}
					else
					{
						func_166(bParam0, 1, 0);
						func_167(-7.463622E-36f, 0);
						if (iVar32 == 4.281622E+11f)
						{
							func_167(1.246195E-34f, 0);
						}
						else if (iVar32 == 1.246195E-34f)
						{
							func_167(4.281622E+11f, 0);
						}
					}
					break;
				default:
					if (!func_145(bParam0, 3.611922E-33f))
					{
					}
					else
					{
						func_163(bParam0, 0);
					}
					break;
			}
			func_165(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 0, 0, 1, 1, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_107(1, 0);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_101() != -1)
				{
				}
				else if (!func_157(bParam0))
				{
					func_158("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_168(7, bParam0);
					bVar31 = func_168(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
						{
							MAP::REMOVE_BLIP(&Global_17339);
						}
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
						MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
						func_158(MISC::VAR_STRING(0, -3.54871E-22f, Global_17339), 10000, 0, 0, 0, 1);
					}
					else if (!func_169(7))
					{
						func_158("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_171(Global_33, func_170(7), 0))
						{
							func_158("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17339))
							{
								MAP::REMOVE_BLIP(&Global_17339);
							}
							Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
							MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
							func_158(MISC::VAR_STRING(0, -3.385882E+21f, Global_17339), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						fVar26 = 6.6095E+09f;
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(fVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 4.285061E-37f;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_152(Var10, 0);
						}
						Jump @2437; //curOff = 1819
						func_172();
						Jump @2437; //curOff = 1826
						if (func_157(-7.437896E-28f))
						{
							if (func_173(1, 1))
							{
								func_174(2, 1);
							}
							else if (func_175(1))
							{
								func_158("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_176())
							{
								func_158("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								{
									func_177();
								}
								else
								{
									func_158("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_178(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						{
							func_158("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_178(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
						else if (func_176())
						{
							func_158("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_158("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2437; //curOff = 2047
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_179(Global_33, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2437; //curOff = 2085
						if (func_179(Global_33, 1, 0, 0) != bParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2437; //curOff = 2120
						Jump @2437; //curOff = 2123
						func_180(535, 1);
						Jump @2437; //curOff = 2134
						func_181(1);
						Jump @2437; //curOff = 2142
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -2.680077E+18f, 9.798505E+30f, 1, 0, -1f);
						bVar28 = false;
						return 1;
						Jump @2437; //curOff = 2177
						UIAPPS::LAUNCH_UIAPP_BY_HASH(-1.228685E+36f);
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1.228685E+36f) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_152(Var10, 0);
						}
						return 1;
						Jump @2437; //curOff = 2253
						UIAPPS::_CLOSE_UIAPP_BY_HASH(NaNf);
						if (SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() == 1.571889E+10f)
						{
							UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(5.184729E+32f, 1.125697E+07f);
						}
						else
						{
							UIAPPS::LAUNCH_UIAPP_BY_HASH(5.184729E+32f);
						}
						if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(6.968884E-14f) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_3 = !SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME() != 1.571889E+10f;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_152(Var10, 0);
						}
						return 1;
						Jump @2437; //curOff = 2383
						if (Global_1148170[PLAYER::PLAYER_ID() /*10*/].f_4)
						{
							func_158("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_182();
						}
						return 1;
						Jump @2437; //curOff = 2428
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar29;
				default:
					break;
		}
	}
}

int func_101()
{
	return Global_1572887.f_14;
}

var func_102(int iParam0)
{
	return Global_1110244.f_268.f_32[iParam0 /*752*/].f_1;
}

int func_103(bool bParam0)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	iVar12 = 0;
	Var0 = { func_183(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_184(Var0, &iVar10, &iVar11, 0))
	{
		if (iVar11 > 0)
		{
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar13 = func_185(iVar12, iVar10);
				if (!bParam0)
				{
					if (func_186(bVar13))
					{
					}
					else
					{
						Jump @170; //curOff = 154
						if (!func_186(bVar13))
						{
						}
						else
						{
							iVar14 = 1;
						}
						else
						{
							iVar12++;
						}
						func_187(iVar10);
						return iVar14;
						return 0;
					}
				}
			}
		}
	}
}

int func_104()
{
	return Global_1102813.f_3672;
}

bool func_105(bool bParam0, struct<2> Param1, var uParam3)
{
	int iVar0;

	if (Param1.f_1 == 0)
	{
		return false;
	}
	iVar0 = func_188(Param1.f_1);
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(iVar0) || !DATAFILE::PARSEDDATA_IS_FILE_LOADED(iVar0))
	{
		return false;
	}
	*bParam0 = iVar0;
	bParam0->f_2 = -9.105385E+35f;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		return false;
	}
	return true;
}

int func_106(int iParam0, char* sParam1, int* iParam2, char* sParam3, float* fParam4, char* sParam5, Vector3* vParam6)
{
	struct<4> Var0;

	Var0 = func_189();
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_190(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -2.130137E-12f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(iParam2, &Var0);
	Var0.f_2 = 0.6744412f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var0);
	Var0.f_2 = -1.822079E+35f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &Var0);
	return 1;
}

void func_107(bool bParam0, int iParam1)
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

void func_108(int iParam0)
{
	int iVar0;

	if (Global_1940239.f_11587 != iParam0)
	{
		Global_1940239.f_11587 = iParam0;
		Global_1940239.f_11597 = 1;
	}
	iVar0 = func_191();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11617, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11616, iVar0);
	func_192((Global_1940239.f_11587 != -5.004954E+28f && Global_1940239.f_11587 != -8018687f));
}

int func_109(int iParam0)
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

int func_110(int iParam0, int iParam1)
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

bool func_111()
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
	if (!func_113(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_112(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_113(struct<2> Param0)
{
	if (!func_193(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_194(Param0))
	{
		return false;
	}
	return true;
}

int func_114(var uParam0, var uParam1)
{
	return uParam0;
}

int func_115(int iParam0)
{
	return func_196(func_195(iParam0));
}

int func_116()
{
	bool bVar0;

	bVar0 = func_197();
	if (!func_198(bVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return 0;
	}
	return 1;
}

int func_117()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_199(1.689675E+21f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_199(1.689675E+21f)))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_199(-3.629249E+19f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_199(-3.629249E+19f)))
	{
		return 2;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_199(1.76871E+20f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_199(1.76871E+20f)))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_199(0.0002656324f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_199(0.0002656324f)))
	{
		return 3;
	}
	return 1;
}

char* func_118(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_200();
	Var0.f_2 = 9;
	Var0.f_3 = func_201(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return func_202(fParam0);
	}
	return func_203(Var5);
}

struct<2> func_119(float fParam0)
{
	struct<2> Var0;
	struct<5> Var2;

	Var2 = func_200();
	Var2.f_3 = func_201(0);
	Var2.f_4 = fParam0;
	Var2.f_2 = 11;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&Var0, &Var2))
	{
		return func_204(fParam0);
	}
	Var2.f_2 = 13;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

char* func_120(float fParam0)
{
	return MISC::VAR_STRING(2, func_118(fParam0));
}

bool func_121(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_122(var uParam0)
{
	return func_121(*uParam0, 2);
}

int func_123()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_124(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_205() - fParam1);
	func_206(uParam0, 1);
	func_207(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_125(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_126(bool bParam0)
{
	var uVar0[20];

	if (ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -2.154552E+33f, &uVar0) > 0)
	{
		return uVar0[0];
	}
	return 0;
}

bool func_127(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_208(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_128(bool bParam0)
{
	return func_159(bParam0) == -1.955052E+34f;
}

bool func_129(var uParam0, var uParam1)
{
	var uVar0;

	if (!func_209(uParam0, &uVar0))
	{
		return false;
	}
	if (!func_210(uParam0, uParam1))
	{
		return false;
	}
	return true;
}

bool func_130(bool bParam0)
{
	return func_159(bParam0) == 4.029065E+31f;
}

bool func_131(var uParam0, var uParam1)
{
	bool bVar0;
	struct<34> Var1;

	if (!func_209(uParam0, &bVar0))
	{
		return false;
	}
	if (!func_210(uParam0, uParam1))
	{
		return false;
	}
	if (func_211(bVar0))
	{
		func_212(&Var1);
		uParam1->f_1 = Var1.f_33;
		*uParam1 = Var1.f_32;
		uParam1->f_2 = 1;
	}
	return true;
}

bool func_132(var uParam0, char[4] cParam1, int iParam2)
{
	int iVar0;
	char cVar1[64];
	var uVar9[6];
	var uVar16;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_3[1]))
	{
		return false;
	}
	if (iParam2 < -1)
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);
	if (iParam2 == -1 || iParam2 >= iVar0)
	{
		StringCopy(&cVar1, "offer_item_", 64);
		StringIntConCat(&cVar1, iVar0, 64);
		if (!func_213(&uVar9, &(uParam0->f_3[1]), cVar1, cParam1))
		{
			return false;
		}
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_3[1], -1, "coupon_small_entry", uVar9[0]);
	}
	else
	{
		if (!func_214(uParam0, iParam2, &uVar16))
		{
			return false;
		}
		if (!func_215(&uVar16, cParam1))
		{
			return false;
		}
	}
	return true;
}

void func_133(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_134(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	iVar1 = iVar0;
	while (iVar1 >= iParam1)
	{
		DATABINDING::_0x6318FB3BE37E11B3(*uParam0, iParam1);
		iVar1 = (iVar1 + -1);
	}
	return true;
}

bool func_135()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_216() };
	if (!func_113(Var0))
	{
		return false;
	}
	switch (func_217(Var0))
	{
		case -1485083887:
		case -1007768440:
		case -888098333:
		case -862235034:
		case -683590526:
		case -526464326:
		case -390920703:
		case -171479703:
		case 1036678516:
		case 1200532109:
		case 1292291919:
		case 1559697571:
		case 1848308415:
		case 1882251776:
			return true;
		default:
			break;
	}
	return false;
}

bool func_136(int iParam0)
{
	int iVar0;

	iVar0 = func_218(iParam0);
	if (iVar0 != 0)
	{
		return func_73(iVar0);
	}
	return false;
}

bool func_137(int iParam0)
{
	bool bVar0;

	bVar0 = func_219(iParam0);
	if (func_125(bVar0, 0))
	{
		if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(1), bVar0, false) > 0)
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
	return false;
}

int func_138(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1.777506E-22f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -3.239727E-28f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -6.410587E+31f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.631132E+22f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -0.8817953f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1.825672E+26f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -4.400322E+15f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.451719E-37f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 3.134018E-27f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.997944E+24f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 6.995461E-38f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 4.242694E-36f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 0.0004024806f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 8.004635E-22f;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_139(int iParam0, int iParam1)
{
	switch (*iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -0.5359446f;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.238678E+11f;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.281774E-36f;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -8180448f;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1701020f;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 4.444323E+27f;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.409571E+11f;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -4.925219E+25f;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 8.604325E+27f;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -9.097312E+09f;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 3.959745E-32f;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
				case 1:
					return -1.117919E-33f;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 1.066113E+11f;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
				case 1:
					return 59.79277f;
				default:
					break;
			}
			break;
	}
	return 0;
}

bool func_140()
{
	if (Global_1940239.f_39 == 3)
	{
		return true;
	}
	return false;
}

bool func_141(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_220(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_221(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_222(bParam0, bParam4, 0) };
	Var6 = { func_223(bParam0, Var1, Var1.f_4, bParam4) };
	return func_224(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_142(bool bParam0, bool bParam1)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_145(bParam0, 9.522126E+26f);
	if (!func_125(bParam0, 0))
	{
		if (!bVar0)
		{
			return false;
		}
	}
	if (Global_1940239.f_8)
	{
		return false;
	}
	if (((bParam0 != 9605447f && bParam0 != -7.437896E-28f) && bParam0 != 1.795034E+34f) && bParam1)
	{
		fVar1 = func_225(bParam0);
		if (func_145(bParam0, 888.6404f))
		{
			fVar1 |= 64;
		}
		if (!func_226(1, fVar1))
		{
			return false;
		}
	}
	if (bParam0 == -7.729678E-14f || bParam0 == -6.721167E-35f)
	{
		if (func_227())
		{
			return false;
		}
	}
	if (!bVar0 && !func_228(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_143(bool bParam0)
{
	if (func_154(bParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_62(0), bParam0, func_229(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_230(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_231() != -1)
			{
				func_158(func_232(func_231()), 10000, 0, 0, 0, 1);
				func_233(-1);
			}
			break;
	}
	return true;
}

bool func_144(bool bParam0)
{
	struct<16> Var0;

	if (bParam0 == 2.622451E-38f)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_152(Var0, 0);
		return true;
	}
	return false;
}

bool func_145(bool bParam0, int iParam1)
{
	if (!func_125(bParam0, 0))
	{
		return func_235(func_234(bParam0), iParam1);
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

void func_146(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_147(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_148(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_149(bool bParam0)
{
	if (func_101() == 0 && func_237(func_236(bParam0), 1, 0) != 0)
	{
		func_158("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_150(bool bParam0)
{
	if (func_238(bParam0, 104.1169f) == 9.522126E+26f)
	{
		func_239(0);
		func_241(func_240(bParam0));
		return true;
	}
	return false;
}

bool func_151(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_242(bParam0, bParam1, 0, 0, -1f))
	{
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_238(bParam0, -60352.49f))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 2971110f, 1, 0, -1f);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_243())
				{
					if (func_244(&Global_33))
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 8.610964E-17f, 1, 0, -1f);
					}
					else
					{
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -2625342f, 1, 0, -1f);
					}
					return true;
				}
				else
				{
					func_158("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 7.47225E-29f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 6.459623f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1.531881E+29f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -3.403443E-12f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 4.216691E+27f, 1, 0, -1f);
			}
			else
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 4.942332E-34f, 1, 0, 0f);
				if (CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_245(bParam0);
				}
				else
				{
					func_246(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_247(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_248(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_249(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_245(bParam0);
				}
				else
				{
					func_250(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_245(bParam0);
				}
				else
				{
					func_251(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_245(bParam0);
				}
				else
				{
					func_252(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_245(bParam0);
				}
				else
				{
					func_253(bParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -7.893468E-30f, 1, 0, -1f);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_254(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_255(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_256(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_245(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_257(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_258(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_152(struct<16> Param0, int iParam16)
{
	int iVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939421.f_161 >= 10)
	{
		return;
	}
	if (!func_259(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_260(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			Global_1939421[iVar0 /*16*/] = { Param0 };
			Global_1939421.f_161++;
			func_261(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_153()
{
	return Global_1893611 & 2 != 0;
}

bool func_154(bool bParam0)
{
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (func_156(bParam0) == -4.32037E-21f)
	{
		return true;
	}
	return false;
}

int func_155(int iParam0)
{
	return func_262(iParam0);
}

int func_156(bool bParam0)
{
	vector3 vVar0;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_157(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_156(bParam0) == -42.1084f)
	{
		if (func_159(bParam0) == -947.1324f)
		{
		}
	}
	return true;
}

int func_158(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_159(bool bParam0)
{
	struct<2> Var0;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_160()
{
	int iVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3;
	vector3 vVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0);
	iVar2 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1) || PED::IS_PED_INJURED(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(iVar2) || PED::IS_PED_SWIMMING(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(iVar2))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { ENTITY::GET_ENTITY_COORDS(iVar2, false, false) };
	vVar6 = { ENTITY::GET_ENTITY_COORDS(iVar1, false, false) };
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(vVar3, vVar6, true) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_161(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	iVar1 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0);
	if (PED::IS_PED_ON_MOUNT(iVar0))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_162(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_263(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_264(Var0);
}

int func_163(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_265())
	{
		return 0;
	}
	if (!func_266(bParam0))
	{
		return 0;
	}
	if (func_267(bParam0))
	{
		iVar0 = 0;
		if ((func_159(bParam0) == 5.002459E-36f || func_145(bParam0, 3.611922E-33f)) && !func_145(bParam0, -1.186825E-08f))
		{
			if (bParam1)
			{
				func_268(&iVar0, 2);
			}
		}
		return func_269(bParam0, iVar0);
	}
	return 0;
}

void func_164(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1953279.f_1676.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_165(Global_33, -5.222721E-36f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
		func_166(bParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_165(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
	if (func_270(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_271();
		func_263(128);
		return;
	}
	if (bVar1 == Global_1953279.f_83[iVar0 /*12*/])
	{
		func_166(bParam0, 1, 0);
		return;
	}
	if (func_272(-7.463622E-36f, 0))
	{
		if (func_273(bVar1))
		{
			func_166(bVar1, 0, 0);
		}
		else
		{
			func_274(bVar1, 1, 1, 0, 0, 0);
		}
		func_166(bParam0, 1, 0);
		return;
	}
	if (func_273(bVar1))
	{
		func_166(bVar1, 0, 0);
		func_166(bParam0, 1, 0);
	}
	else if (func_273(bParam0))
	{
		if (bParam0 != func_275(0))
		{
			func_276(bParam0, bVar1, 0, 0, 0);
			func_166(bParam0, 0, 0);
			func_166(bVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_263(128);
			func_166(bParam0, 1, 0);
		}
	}
}

int func_165(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -1.003831E+26f)
	{
		Var0 = { func_222(bParam1, 1, 0) };
		bParam3 = func_277(Var0.f_4);
		if (bParam3 == -1.003831E+26f)
		{
			return 0;
		}
	}
	if (!func_279(bParam1, iParam2, func_278(bParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_280(1, bParam5, bParam9, 1, bParam11);
	if (bParam10)
	{
		if (func_281(bParam1, 0))
		{
			func_282(Global_1953279.f_1676.f_1[func_278(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_282(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953279.f_83[func_278(bParam3, 1) /*12*/])
			{
				func_162(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_270(32768))
			{
				func_271();
				func_162(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_283(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_284(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_162(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_162(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_166(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_222(bParam0, bParam2, 0) };
	Var5 = { func_223(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_285(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_62(bParam2), &Var5, bParam1);
}

bool func_167(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<4> Var3;
	float fVar7;
	struct<4> Var8;

	bVar2 = false;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &fVar7))
	{
		return false;
	}
	Var8 = { func_223(5.207907E-07f, func_286(bParam1), 0.08386164f, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_159(bVar1) == iParam0 || (iParam0 == 5.002459E-36f && func_145(bVar1, 3.611922E-33f)))
		{
			Var3 = { func_223(bVar1, Var8, fVar7, bParam1) };
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_62(bParam1), &Var3))
			{
				bVar2 = bVar1;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_62(bParam1), &Var3, false);
			}
		}
		iVar0++;
	}
	return bVar2;
}

int func_168(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_287(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_170(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_33) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		if (PED::_GET_RIDER_OF_MOUNT(iVar0, false) == Global_33)
		{
			if (bParam1 == -5.385955E+12f)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_288(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_169(int iParam0)
{
	int iVar0;

	iParam0 = func_287(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_289())
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

int func_170(int iParam0)
{
	iParam0 = func_287(iParam0);
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

bool func_171(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::IS_PED_FULLY_ON_MOUNT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return false;
}

void func_172()
{
	int iVar0;

	if (func_290())
	{
		return;
	}
	if (func_291(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_291(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
					func_292(16);
				}
				func_293(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				{
				}
				else
				{
					func_292(8);
					func_293(0);
				}
		}
		return;
	}
	if (func_294())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 4.553053E+26f, -7.591204E-34f, 1, 0, -1f);
		Global_1915643.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_295();
	}
	else
	{
		iVar0 = func_297(func_296());
		if (iVar0 != -1)
		{
			func_158(func_232(iVar0), 10000, 0, 0, 0, 1);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_298(0);
			func_233(-1);
		}
	}
}

bool func_173(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_299() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_300(16))
	{
		return false;
	}
	if (func_301())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_302())
	{
		return false;
	}
	if (func_303(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_304(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_176())
	{
		return false;
	}
	return true;
}

int func_174(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_305();
	}
	if (!func_306(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_307(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

bool func_175(int iParam0)
{
	return func_304(Global_1147168.f_8, iParam0);
}

bool func_176()
{
	int iVar0;

	iVar0 = func_308(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_304(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_177()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_112(0) };
	if (func_113(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_309(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_310(iVar2) == -4.537018E+10f)
				{
					func_158("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_158("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_158("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_158("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_178(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_312(Var0, func_311(0, 8), 0, 0);
}

float func_179(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_180(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_313(iParam0, &iVar0, &iVar1);
	if (!func_314(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_315(iVar0, iVar1);
}

void func_181(bool bParam0)
{
	if ((func_101() != -1 || !bParam0) || func_316(Global_33))
	{
		func_317();
		return;
	}
}

void func_182()
{
	int iVar0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		iVar0 = PLAYER::PLAYER_ID();
		func_318(1, iVar0);
	}
}

struct<10> func_183(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_184(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_185(int iParam0, int iParam1)
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

bool func_186(bool bParam0)
{
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(func_319(bParam0, 0));
}

int func_187(int iParam0)
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

var func_188(int iParam0)
{
	int iVar0;
	var uVar1;

	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GRIZZLIES_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
		case joaat("HEARTLAND_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
			iVar0 = func_320(iParam0, 1);
			return Global_1147168.f_361[iVar0];
		default:
			break;
	}
	return uVar1;
}

var func_189()
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

int func_190(int iParam0)
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

int func_191()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1940239.f_11564[iVar0] == Global_1940239.f_11587)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

void func_192(bool bParam0)
{
	if (bParam0)
	{
		HUD::_SHOW_PLAYER_CORES(true);
		HUD::_SHOW_HORSE_CORES(false);
	}
	else
	{
		HUD::_SHOW_PLAYER_CORES(false);
		HUD::_SHOW_HORSE_CORES(true);
	}
}

bool func_193(int iParam0)
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

int func_194(int iParam0)
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

int func_195(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_321(Global_1292096.f_2983);
		case 1:
			return func_321(Global_1292096.f_2984);
		default:
			break;
	}
	return -1;
}

int func_196(int iParam0)
{
	int iVar0;

	if (!func_322(iParam0))
	{
		return 0;
	}
	iVar0 = func_323(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_324(iParam0, 1);
	}
	return 0;
}

int func_197()
{
	return func_325(-12.2445f);
}

bool func_198(int iParam0)
{
	return iParam0 != 0;
}

int func_199(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_200();
	Var0.f_2 = 15;
	Var0.f_3 = func_201(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_326(fParam0);
	}
	return uVar5;
}

var func_200()
{
	return Global_1072759.f_28418[52 /*4*/].f_3;
}

int func_201(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1292096.f_2983;
		case 1:
			return Global_1292096.f_2984;
		default:
			break;
	}
	return 0;
}

char* func_202(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_200();
	Var0.f_2 = 8;
	Var0.f_3 = fParam0;
	Var0.f_4 = 0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_203(Var5);
}

char* func_203(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<2> func_204(float fParam0)
{
	struct<2> Var0;
	struct<4> Var2;

	Var2 = func_200();
	Var2.f_3 = fParam0;
	Var2.f_2 = 10;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&Var0, &Var2))
	{
		return Var0;
	}
	Var2.f_2 = 12;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

float func_205()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_206(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_207(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_208(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_62(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_209(var uParam0, var uParam1)
{
	struct<10> Var0;

	*uParam1 = 0;
	if (!func_88(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_127(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_125(Var0.f_4, 0))
	{
		return false;
	}
	if (!func_327(Var0.f_4))
	{
		return false;
	}
	*uParam1 = Var0.f_4;
	return true;
}

bool func_210(var uParam0, var uParam1)
{
	bool bVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_209(uParam0, &bVar0))
	{
		return false;
	}
	Var1.f_8 = 10;
	Var1.f_8.f_1.f_4 = 15;
	Var1.f_8.f_1.f_36 = 10;
	Var1.f_8.f_1.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var1.f_8.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var1.f_480 = 10;
	Var1.f_480.f_1.f_4 = 10;
	Var1.f_480.f_1.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_480.f_1.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_25.f_4 = 10;
	Var1.f_732.f_2 = 5;
	Var1.f_732.f_18 = 8;
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(bVar0, &Var1))
	{
		return false;
	}
	iVar768 = 0;
	while (iVar768 < 5)
	{
		switch (Var1.f_732.f_2[iVar768 /*3*/].f_2)
		{
			case -774197843:
				func_328(&(Var1.f_732.f_2[iVar768 /*3*/]), &(uParam1->f_1), uParam1, 1);
				break;
		}
		iVar768++;
	}
	if (func_329(uParam0))
	{
		uParam1->f_2 = 0;
	}
	else
	{
		uParam1->f_2 = 1;
		if (func_330(uParam0))
		{
			uParam1->f_3 = 1;
		}
		else if (func_331(*uParam0))
		{
			uParam1->f_4 = 1;
		}
	}
	return true;
}

bool func_211(bool bParam0)
{
	bool bVar0;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (!func_130(bParam0))
	{
		return false;
	}
	if (!func_145(bParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	bVar0 = func_319(bParam0, 1);
	if (bVar0 != 0)
	{
		return false;
	}
	return true;
}

void func_212(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_213(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, var uParam10)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	(*uParam0)[0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam1, &cParam2);
	(*uParam0)[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 3.859434E-23f, *uParam10);
	(*uParam0)[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH((*uParam0)[0], 0.6123784f, uParam10->f_1);
	(*uParam0)[3] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], 4.126364E+16f, uParam10->f_2);
	(*uParam0)[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], 0.03507012f, uParam10->f_3);
	(*uParam0)[5] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH((*uParam0)[0], 1.567252E-17f, uParam10->f_4);
	return true;
}

bool func_214(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_3[1]);
	if (iParam1 < 0 || iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_3[1], iParam1);
	return true;
}

bool func_215(var uParam0, char[4] cParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 3.859434E-23f, *cParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam0, 0.6123784f, cParam1->f_1);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 4.126364E+16f, cParam1->f_2);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 0.03507012f, cParam1->f_3);
	DATABINDING::_0xBFC83DA249BEFCC9(*uParam0, 1.567252E-17f, cParam1->f_4);
	return true;
}

struct<2> func_216()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_112(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_112(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

int func_217(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_332(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_218(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 5;
		case 3:
			return 3;
		case 2:
			return 4;
		case 1:
			return 6;
		case 0:
			return 7;
		default:
			break;
	}
	return 0;
}

int func_219(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -4.629755E-24f;
		case 3:
			return 1.853402E+37f;
		case 2:
			return -2.919324E+23f;
		case 1:
			return 2.884954E+11f;
		case 0:
			return 4.080975E-29f;
		default:
			break;
	}
	return 0;
}

int func_220(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_333(func_234(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_221(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_334(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_220(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_335(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_336(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_337(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_338(7.184882E+22f, &Var65, 1);
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
			func_339(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_62(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_222(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_286(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_156(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_223(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_340(bParam1) };
			if (iParam2 && func_341(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_342(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_342(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_343(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_344(bParam1) };
			switch (func_159(bParam0))
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
			if (func_345(bParam0, -2.580501E-27f))
			{
				Var0 = { func_223(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_345(bParam0, -4.220332E-15f))
			{
				Var0 = { func_223(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_223(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_345(bParam0, -3.171238E-21f))
			{
				Var0 = { func_223(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_127(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_345(bParam0, -3.171238E-21f))
			{
				Var0 = { func_223(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_223(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_125(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_62(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_224(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_334(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_127(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_335(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_101() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_338(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_339(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_62(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

float func_225(bool bParam0)
{
	if (func_145(bParam0, 1.763507E+18f))
	{
		return func_346(bParam0);
	}
	if (func_145(bParam0, 9.522126E+26f))
	{
		return func_347();
	}
	if (func_348(bParam0))
	{
		return func_349();
	}
	switch (func_159(bParam0))
	{
		case -77448735:
			if (func_350(bParam0))
			{
				return func_346(bParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_346(bParam0);
		case -1520388130:
		case 1802292908:
			return func_351();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_352();
		case -525676072:
			return func_352();
		case 1779021115:
			if (bParam0 == -230.1699f || bParam0 == 5.402792E-27f)
			{
				return func_353();
			}
			return func_354();
		case -1823706425:
			if (bParam0 == -0.06342195f)
			{
				return func_355();
			}
			else
			{
				return func_356();
			}
			break;
		case -854348463:
			return func_357();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_358();
		default:
			if (func_125(bParam0, 0))
			{
				if (func_145(bParam0, 4.644778E+30f))
				{
					return func_359();
				}
				else if (bParam0 == -6.721167E-35f || bParam0 == -7.729678E-14f)
				{
					return func_360();
				}
				else if (bParam0 == -2.692268E-16f)
				{
					return func_361();
				}
				else if (func_145(bParam0, 888.6404f))
				{
					return func_362();
				}
			}
			return func_363();
	}
	return func_363();
}

bool func_226(bool bParam0, float fParam1)
{
	int iVar0;

	if ((Global_1940186.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_101() == 0)
	{
		if (func_364(131072))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 1))
	{
		if (func_364(1024))
		{
			return false;
		}
	}
	if (Global_1940186.f_16)
	{
		return false;
	}
	if (!func_365(fParam1, 2) && func_364(32))
	{
		return false;
	}
	if (!func_365(fParam1, 4))
	{
		if (func_364(4096))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 8) && func_364(512))
	{
		return false;
	}
	if (!func_365(fParam1, 512) && !func_366(bParam0))
	{
		return false;
	}
	if (!func_365(fParam1, 262144) && !func_367(bParam0, func_365(fParam1, 524288)))
	{
		return false;
	}
	if (!func_365(fParam1, 64) && !func_368(bParam0, fParam1, 1))
	{
		return false;
	}
	if (!func_365(fParam1, 128))
	{
		if (func_369(Global_33, 6.915501E+28f) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
			{
				func_158("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_365(fParam1, 16))
	{
		if (func_370(Global_33))
		{
			iVar0 = PED::GET_MOUNT(Global_33);
			if (!func_371(iVar0, 1))
			{
				if (bParam0)
				{
					func_158("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_365(fParam1, 256) && func_364(8192))
	{
		return false;
	}
	if (!func_365(fParam1, 1024) && func_364(65536))
	{
		if (bParam0)
		{
			func_158("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_365(fParam1, 2048))
	{
		if (func_364(32768))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 4096))
	{
		if (func_364(16384))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 8192))
	{
		if (!func_364(16))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 1.504633E-36f))
	{
		if (!func_364(2.524355E-29f))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 16384))
	{
		if (func_364(256))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 32768))
	{
		if (func_372())
		{
			if (bParam0)
			{
				func_158("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_365(fParam1, 131072))
	{
		if (!func_364(524288))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 65536))
	{
		if (!func_364(262144))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 1048576))
	{
		if (!func_364(2097152))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 2097152))
	{
		if (!func_364(8388608))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 4194304))
	{
		if (!func_364(2.350989E-38f))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 8388608))
	{
		if (func_364(9.403955E-38f))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 2.350989E-38f))
	{
		if (func_364(1.504633E-36f))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 9.403955E-38f))
	{
		if (func_364(3.85186E-34f))
		{
			return false;
		}
	}
	if (func_364(64))
	{
		return false;
	}
	else if (func_364(128))
	{
		return false;
	}
	else if (func_364(1048576))
	{
		return false;
	}
	else if (func_364(4))
	{
		return false;
	}
	if (!func_365(fParam1, 3.85186E-34f))
	{
		if (func_373(256))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 2.524355E-29f))
	{
		if (func_364(1.084202E-19f))
		{
			return false;
		}
	}
	if (!func_365(fParam1, 1.084202E-19f))
	{
		if (func_364(2f))
		{
			return false;
		}
	}
	return true;
}

bool func_227()
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		iVar1 = iVar0;
		if (iVar1 != -1.854193E-06f && iVar1 != 0.2920443f)
		{
			return true;
		}
	}
	return false;
}

bool func_228(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_156(bParam0);
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
			if (!func_374(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_375(bParam0))
			{
				return true;
			}
			break;
	}
	return func_376(bParam0, 0, 0, 0) >= iParam1;
}

var func_229(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_230(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_44.f_87);
}

int func_231()
{
	return Global_1915643.f_22504.f_5;
}

char* func_232(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	switch (iParam0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var0 = -1;
			Var0.f_1 = -1;
			Var0 = { func_112(0) };
			if (!func_113(Var0))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar2 = func_377(&Var0, 1);
			if (iVar2 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_378(iVar2, 2.098029E-22f, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_380(func_379(iVar2, 2.098029E-22f));
	}
	return "";
}

void func_233(int iParam0)
{
	Global_1915643.f_22504.f_5 = iParam0;
}

bool func_234(bool bParam0)
{
	return bParam0;
}

int func_235(bool bParam0, int iParam1)
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

int func_236(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_381(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_237(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_382(iParam0))
	{
		return 1;
	}
	if (!func_383(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1220811.f_48[iParam0 /*21*/].f_17)
	{
		if (bParam2 || Global_1220811.f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_384(iParam0))
	{
		return 3;
	}
	if (func_385(iParam0) && !func_386())
	{
		return 4;
	}
	return 0;
}

int func_238(bool bParam0, int iParam1)
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

void func_239(int iParam0)
{
	Global_1940239.f_11599 = iParam0;
}

int func_240(bool bParam0)
{
	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

void func_241(int iParam0)
{
	Global_1940239.f_11605 = iParam0;
}

bool func_242(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	float fVar0;

	switch (func_238(bParam0, -60352.49f))
	{
		case -1420737577:
			if (!bParam1)
			{
				fVar0 = 1.616249E+38f;
				if (bParam2)
				{
					fVar0 = 3.086004E+19f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				fVar0 = 6.87044E+18f;
				if (bParam2)
				{
					fVar0 = -5.521301E-13f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				fVar0 = 2569.067f;
				if (bParam2)
				{
					fVar0 = -3.852978E-26f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				fVar0 = 1.275529E-26f;
				if (bParam2)
				{
					fVar0 = 1.168495E-11f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				fVar0 = 5.112149E-07f;
				if (bParam2)
				{
					fVar0 = -25.7965f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				fVar0 = 6352870f;
				if (bParam2)
				{
					fVar0 = -2.030725E-36f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				fVar0 = 2.639068E-23f;
				if (bParam2)
				{
					fVar0 = 3.751221E+32f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				fVar0 = -7.955704E+33f;
				if (bParam2)
				{
					fVar0 = 3.918E+33f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				fVar0 = 2.766244E+26f;
				if (bParam2)
				{
					fVar0 = 1.724331E-25f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				fVar0 = 1.274062E+08f;
				if (bParam2)
				{
					fVar0 = -5.094612E+36f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				fVar0 = -7.145436E+37f;
				if (bParam2)
				{
					fVar0 = -5.741401E-10f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				fVar0 = -1.473011E-05f;
				if (bParam2)
				{
					fVar0 = -0.007812119f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				fVar0 = -8.522698E-13f;
				if (bParam2)
				{
					fVar0 = -3.129801E-18f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				fVar0 = 0.01512622f;
				if (bParam2)
				{
					fVar0 = 5.348378E-24f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				fVar0 = -1.362969E-06f;
				if (bParam2)
				{
					fVar0 = -3.852978E-26f;
				}
				TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, fVar0, 1, iParam3, fParam4);
				return true;
			}
			break;
	}
	return false;
}

bool func_243()
{
	return Global_1953279.f_1676.f_1[1 /*3*/].f_1 == -5.12226E+28f;
}

bool func_244(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_387(*uParam0, -8.569155E-24f, 0))
	{
		return true;
	}
	return false;
}

void func_245(bool bParam0)
{
	int iVar0;

	iVar0 = 2.349566E-24f;
	switch (func_388())
	{
		case 0:
			iVar0 = 2.349566E-24f;
			break;
		case 1:
			iVar0 = 3.444944E-32f;
			break;
		case 3:
			iVar0 = 1.498389E-37f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_145(bParam0, 1.763507E+18f))
		{
			func_390(func_389(bParam0), 1, 1);
		}
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_246(bool bParam0)
{
	int iVar0;

	iVar0 = 2.396577E-38f;
	switch (func_388())
	{
		case 0:
			iVar0 = 2.396577E-38f;
			break;
		case 1:
			iVar0 = -0.001023369f;
			break;
		case 3:
			iVar0 = 0.0003576809f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_247(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1.729466E+37f;
	switch (func_388())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -1.35445E-38f;
			}
			else
			{
				iVar0 = -1.729466E+37f;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -9.154559E-32f;
			}
			else
			{
				iVar0 = 1.305067E-37f;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -8.307639E+11f;
			}
			else
			{
				iVar0 = 1.573072E+08f;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_248(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 6.623678E+22f;
	switch (func_388())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -6.192357E+22f;
			}
			else
			{
				iVar0 = 6.623678E+22f;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1.86492E+29f;
			}
			else
			{
				iVar0 = -3.984581E+21f;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 4.015072E-22f;
			}
			else
			{
				iVar0 = 1.629336E-11f;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_249(bool bParam0)
{
	int iVar0;

	iVar0 = -6.874405E+25f;
	switch (func_388())
	{
		case 0:
			iVar0 = -6.874405E+25f;
			break;
		case 1:
			iVar0 = -292.5124f;
			break;
		case 3:
			iVar0 = -2.661569E-13f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_250(bool bParam0)
{
	int iVar0;

	iVar0 = 2.144114E+37f;
	switch (func_388())
	{
		case 0:
			iVar0 = 2.144114E+37f;
			break;
		case 3:
			iVar0 = -2.831429E+22f;
			break;
		case 1:
			iVar0 = -3.850704E-19f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_251(bool bParam0)
{
	int iVar0;

	iVar0 = 1.891427E+32f;
	switch (func_388())
	{
		case 0:
			iVar0 = 1.891427E+32f;
			break;
		case 3:
			iVar0 = -2.305351E+15f;
			break;
		case 1:
			iVar0 = 2.088212E+27f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_252(bool bParam0)
{
	int iVar0;

	iVar0 = -8.840173E-17f;
	switch (func_388())
	{
		case 0:
			iVar0 = -8.840173E-17f;
			break;
		case 3:
			iVar0 = -7.761358E+24f;
			break;
		case 1:
			iVar0 = -4.311742E+27f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_253(bool bParam0)
{
	int iVar0;

	iVar0 = -1.912532f;
	switch (func_388())
	{
		case 0:
			iVar0 = -1.912532f;
			break;
		case 3:
			iVar0 = 7.404981E-25f;
			break;
		case 1:
			iVar0 = -3.775802E-28f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_254(bool bParam0)
{
	int iVar0;

	iVar0 = 2.636345f;
	switch (func_388())
	{
		case 0:
			iVar0 = 2.636345f;
			break;
		case 3:
			iVar0 = 1.221628E+27f;
			break;
		case 1:
			iVar0 = 4.340591E+29f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_255(bool bParam0)
{
	int iVar0;

	iVar0 = 1.594798E+16f;
	switch (func_388())
	{
		case 0:
			iVar0 = 1.594798E+16f;
			break;
		case 1:
			iVar0 = 8.713405E+20f;
			break;
		case 3:
			iVar0 = -0.000706583f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_256(bool bParam0)
{
	int iVar0;

	iVar0 = -4.546778E-14f;
	switch (func_388())
	{
		case 0:
			iVar0 = -4.546778E-14f;
			break;
		case 1:
			iVar0 = 1.436018E+28f;
			break;
		case 3:
			iVar0 = 2.63127E-07f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_391(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_257(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1.577477E+31f;
	switch (func_388())
	{
		case 0:
			iVar0 = 1.577477E+31f;
			break;
		case 1:
			iVar0 = 1.720685E+21f;
			break;
		case 3:
			iVar0 = 146.0056f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_391(Global_33, bParam0, iVar0, 1, 0) && bParam1)
		{
			func_392(bParam0);
			func_393(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_258(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -10.1963f;
	switch (func_388())
	{
		case 0:
			iVar0 = -10.1963f;
			break;
		case 1:
			iVar0 = 4.147935E+24f;
			break;
		case 3:
			iVar0 = -1.113841E-24f;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_391(Global_33, bParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_392(bParam0);
			func_393(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_392(bParam0);
		func_393(bParam0, 1, 0, 9.275179E-19f);
	}
}

bool func_259(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_260(char* sParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(Global_1939421[iVar0 /*16*/].f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_261(int iParam0)
{
	if (func_259(iParam0, 1))
	{
		func_394(1);
	}
}

int func_262(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_263(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

void func_264(struct<4> Param0)
{
	int iVar0;
	int iVar1;

	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
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
		case 20:
		case 21:
		case 22:
		case 23:
			if (Global_1953279.f_918 >= 25)
			{
				return;
			}
			if (func_395(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_918)
				{
					iVar1 = ((Global_1953279.f_923 + iVar0) % 25);
					if ((Global_1953279.f_736[iVar1 /*4*/] == Param0 && Global_1953279.f_736[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_736[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_396(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_263(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_395(Param0))
			{
				return;
			}
			func_396(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_263(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1953279.f_920 >= 20)
			{
				return;
			}
			if (func_395(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1953279.f_920)
				{
					iVar1 = ((Global_1953279.f_921 + iVar0) % 20);
					if ((Global_1953279.f_837[iVar1 /*4*/] == Param0 && Global_1953279.f_837[iVar1 /*4*/].f_1 == Param0.f_1) && Global_1953279.f_837[iVar1 /*4*/].f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			if (Param0 == 34)
			{
				Global_1953279.f_930 = 1;
				Global_1953279.f_930.f_1 = Param0.f_2;
				Global_1953279.f_930.f_2 = Param0.f_3;
			}
			func_396(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_263(8);
			break;
			break;
	}
}

bool func_265()
{
	return Global_1953279.f_3502;
}

bool func_266(bool bParam0)
{
	if (func_397())
	{
		return false;
	}
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (!func_228(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_267(bool bParam0)
{
	return func_398(bParam0);
}

void func_268(int iParam0, int iParam1)
{
	func_399(iParam0, iParam1);
}

int func_269(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_400(bParam0);
	if (func_159(bParam0) == -9.847085E+19f || func_145(bParam0, -1.186825E-08f))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_401(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_402();
			}
			else
			{
				iVar0 = func_403();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_404();
		}
		else
		{
			iVar0 = func_405();
		}
	}
	else if (func_406(&bVar2))
	{
		if (func_145(bVar2, -1.186825E-08f) || func_159(bVar2) == -9.847085E+19f)
		{
			iVar0 = func_402();
		}
		else
		{
			iVar0 = func_403();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_404();
	}
	else
	{
		iVar0 = func_405();
	}
	if (iVar0 != 0)
	{
		Global_1953279.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1f);
		return 1;
	}
	return 0;
}

bool func_270(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

void func_271()
{
	Global_1953279.f_3485 = 0;
	Global_1953279.f_3485.f_1 = 0;
	Global_1953279.f_3485.f_8 = 0;
	Global_1953279.f_3485.f_2 = 0;
	Global_1953279.f_3485.f_3[0] = 0;
	Global_1953279.f_3485.f_3[1] = 0;
	Global_1953279.f_3485.f_3[2] = 0;
	Global_1953279.f_3485.f_3[3] = 0;
	Global_1953279.f_3485.f_9 = 0;
	Global_1953279.f_3485.f_10 = 0;
	Global_1953279.f_3485.f_11 = 0;
	if (Global_1953279.f_3485.f_12)
	{
		PED::_RELEASE_META_PED_ASSET_REQUEST(Global_1953279.f_3485.f_13);
	}
	Global_1953279.f_3485.f_12 = 0;
	func_407(32768);
	func_408(37.82234f, 8, 6);
}

bool func_272(int iParam0, bool bParam1)
{
	return func_409(iParam0, 0) < func_410(iParam0, bParam1);
}

bool func_273(bool bParam0)
{
	var uVar0;

	return func_411(bParam0, &uVar0);
}

void func_274(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_159(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_145(bParam0, 4.31212E+18f))
			{
				return;
			}
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_28), Global_1953279.f_3352.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_27), Global_1953279.f_3352.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_29), Global_1953279.f_3352.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_145(bParam0, 3.611922E-33f))
			{
				bVar1 = func_412(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_413();
	if (func_414(iVar0) || (iVar0 != -947.1324f && func_145(bParam0, -7.339854E+32f)))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_62(bParam5), bParam0, 0);
	}
	func_166(bParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_415(1, bParam0);
	}
	if (bParam2)
	{
		func_416(0, 0);
	}
}

float func_275(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_417();
	}
	if (iParam0 == 2654.774f)
	{
		return -2.688565E+11f;
	}
	return -5.418502E-17f;
}

void func_276(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_418(bParam0, bParam1))
	{
		func_419(bParam0, bParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
}

bool func_277(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_420(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

int func_278(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case -1944638739:
			return 36;
		case joaat("MP_COMPONENT_TYPE_HEAD"):
			return 0;
		case -1884748965:
			return 32;
		case -1586649372:
			return 33;
		case -1505978566:
			return 22;
		case -1489346253:
			return 38;
		case -1364808185:
			return 19;
		case joaat("MP_COMPONENT_TYPE_UPPER_BODY"):
			return 8;
		case -1197751823:
			return 20;
		case joaat("MP_COMPONENT_TYPE_SATCHEL"):
			return 24;
		case -1130865351:
			return 31;
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			return 1;
		case -893163968:
			return 17;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_4"):
			return 28;
		case joaat("MP_COMPONENT_TYPE_BEARDS_CHOPS"):
			return 6;
		case -450913544:
			return 18;
		case -426430150:
			return 29;
		case -358215195:
			return 39;
		case -338487716:
			return 11;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			return 26;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_3"):
			return 27;
		case 304805134:
			return 21;
		case joaat("MP_COMPONENT_TYPE_BEARDS_MUSTACHE"):
			return 7;
		case joaat("MP_COMPONENT_TYPE_EYES"):
			return 2;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_1"):
			return 25;
		case 735520874:
			return 5;
		case 788010710:
			return 34;
		case 1108822547:
			return 10;
		case 1145151482:
			return 23;
		case 1250092473:
			return 16;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			return 4;
		case joaat("MP_COMPONENT_TYPE_LOWER_BODY"):
			return 9;
		case 1600962399:
			return 13;
		case 1672288269:
			return 15;
		case 1742327865:
			return 12;
		case joaat("MP_COMPONENT_TYPE_TEETH"):
			return 3;
		case 1788623170:
			return 30;
		case 1849504272:
			return 14;
		case 1900541263:
			return 37;
		case 1958421083:
			return 35;
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

bool func_279(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_421();
	if (iParam2 == 39)
	{
		Var0 = { func_222(bParam0, 1, 0) };
		iParam2 = func_278(func_277(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_270(32768) && iParam2 == 10)
	{
		func_422(37.82234f);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_281(bParam0, 1))
	{
		func_423(&(Global_1953279.f_1557), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_424(iParam2);
	}
	func_425(iParam2, iVar5);
	func_426(&(Global_1953279.f_1557.f_1[iParam2 /*3*/]), 4, 6);
	func_426(&(Global_1953279.f_1676.f_1[iParam2 /*3*/]), 4, 6);
	func_427(&(Global_1953279.f_1557), bParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953279.f_1557.f_1[iParam2 /*3*/] = bParam0;
	Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1 = func_428(bParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953279.f_2938)
		{
			if (Global_1953279.f_2938.f_2[iVar6 /*2*/] >= 0 && Global_1953279.f_2938.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_408(func_420(Global_1953279.f_2938.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_280(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_429(&(Global_1953279.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
}

bool func_281(bool bParam0, bool bParam1)
{
	if (!func_125(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_145(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

bool func_282(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_222(bParam0, bParam2, 0) };
	if (func_281(bParam0, 0))
	{
		bVar9 = func_430(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_222(bVar9, bParam2, 0) };
			Var0 = { func_223(bVar9, Var4, Var4.f_4, bParam2) };
			return func_431(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_223(bParam0, Var4, Var4.f_4, bParam2) };
	return func_431(Var0, iParam1, bParam2);
}

int func_283(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_278(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (Global_1953279.f_1676.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/] || Global_1953279.f_1557.f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_284(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_285(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_220(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_223(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_62(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

struct<4> func_286(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_62(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_223(2.982335E+09f, func_432(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_223(2.982335E+09f, func_432(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_223(2.982335E+09f, func_432(), -5.45926E-19f, bParam0);
}

int func_287(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_288(int iParam0)
{
	int iVar0;

	iParam0 = func_287(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_170(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_433(iVar0))
	{
		return true;
	}
	return false;
}

int func_289()
{
	return Global_38.f_289.f_3222;
}

bool func_290()
{
	return Global_1915643.f_22504.f_1;
}

bool func_291(int iParam0)
{
	return (Global_1051832.f_3648 && iParam0) != 0;
}

void func_292(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 - (Global_1051832.f_3648 && iParam0));
}

void func_293(int iParam0)
{
	Global_1051832.f_3649 = iParam0;
}

bool func_294()
{
	return Global_1915643.f_22504;
}

void func_295()
{
	PAD::_SET_CONTROL_CONTEXT(4, 5.369191E-15f);
}

bool func_296()
{
	return func_291(4);
}

int func_297(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_434())
	{
		return 3;
	}
	if ((SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(7.215231E-38f) > 0 && Global_1051832.f_3650 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915643.f_20638)
	{
		return 10;
	}
	if (Global_1051832.f_3738 != 0)
	{
		return 0;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (PLAYER::IS_PLAYER_DEAD(iVar0))
	{
		return 12;
	}
	if ((func_435(30f, 0) || PED::IS_PED_HOGTIED(Global_33)) || PED::IS_PED_HOGTYING(Global_33))
	{
		return 13;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33) || PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		iVar1 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			iVar2 = ENTITY::GET_ENTITY_MODEL(iVar1);
			switch (iVar2)
			{
				case joaat("BREACH_CANNON"):
				case joaat("GATLING_GUN"):
				case joaat("GATLINGMAXIM02"):
				case joaat("HOTCHKISS_CANNON"):
					return 14;
			}
		}
		return 11;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33) && !Global_1915643.f_22504.f_1)
	{
		return 16;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return 17;
	}
	if (TASK::GET_RANSACK_SCENARIO_POINT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
	{
		return 18;
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		iVar3 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
		if ((iVar3 != -1.854193E-06f && iVar3 != -0.0004018912f) && iVar3 != -6.356208E+22f)
		{
			return 19;
		}
	}
	if (func_436(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6) && Global_1108965.f_775.f_28 != 8)
	{
		if (func_437(Global_1108965.f_775.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f)
	{
		return 22;
	}
	if (Global_1572887.f_72.f_40 >= 11 && Global_1572887.f_72.f_40 < 15)
	{
		return 42;
	}
	if (((PED::IS_PED_FALLING(Global_33) || PED::IS_PED_CLIMBING(Global_33)) || PED::_IS_PED_SLIDING(Global_33)) || PED::IS_PED_SWIMMING(Global_33))
	{
		return 15;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		return 21;
	}
	if (func_438())
	{
		return 43;
	}
	return -1;
}

void func_298(int iParam0)
{
	int iVar0;

	if (!func_296())
	{
		func_439(1);
	}
	Global_1051832.f_3650 = iParam0;
	iVar0 = func_297(1);
	if (iVar0 != -1)
	{
		func_233(iVar0);
		func_440(0);
	}
	else
	{
		func_440(1);
	}
}

bool func_299()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_300(int iParam0)
{
	return func_304(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_301()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_302()
{
	return !func_300(2);
}

bool func_303(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_304(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_305()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_306(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_442(bParam2, func_441(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_307(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

int func_308(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_309(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1205923.f_1[iVar1 /*26*/].f_1 != -1 && func_443(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (Global_1206482.f_78[iVar1 /*20*/] >= 2)
					{
						return Global_1205923.f_1[iVar1 /*26*/].f_1;
					}
				}
				else if (Global_1206482.f_78[iVar1 /*20*/] >= 5)
				{
					return Global_1205923.f_1[iVar1 /*26*/].f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_310(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

var func_311(int iParam0, int iParam1)
{
	return func_444(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_312(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = uParam19;
				Var0.f_20 = Param0.f_2;
				func_445(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_313(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_314(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_446(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_447(iParam0))
	{
		return false;
	}
	if (func_448(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_449(iParam0, 1)) || func_450(32768))
	{
		if (!func_449(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_451())
	{
		return false;
	}
	return true;
}

void func_315(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_316(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_317()
{
	Global_1913621.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913621.f_1581 = 1;
}

void func_318(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 || iParam0);
}

bool func_319(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_125(bParam0, 0))
	{
		return func_452(func_234(bParam0), bParam1);
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

int func_320(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 8;
		case joaat("RIO_BRAVO_CAMP"):
			return 9;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return 10;
		case joaat("GREAT_PLAINS_CAMP"):
			return 6;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return 4;
		case joaat("TALL_TREES_CAMP"):
			return 12;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return 3;
		case joaat("GRIZZLIES_CAMP"):
			return 0;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return 5;
		case joaat("BAYOU_NAWAS_CAMP"):
			return 1;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return 11;
		case joaat("HEARTLAND_CAMP"):
			return 7;
		case joaat("BIG_VALLEY_CAMP"):
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

int func_321(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CHARACTER_RANK"):
			return 0;
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
			return 7;
		case joaat("CHARACTER_RANK_COLLECTOR"):
			return 12;
		case joaat("CHARACTER_RANK_TRADER"):
			return 11;
		case joaat("CHARACTER_RANK_SEASON_005"):
			return 13;
		case joaat("CHARACTER_RANK_VIP_SEASON_005"):
			return 14;
		case joaat("CHARACTER_RANK_MOONSHINER"):
			return 15;
		case joaat("CHARACTER_RANK_SEASON_006"):
			return 16;
		case joaat("CHARACTER_RANK_VIP_SEASON_006"):
			return 17;
		case -296143963:
			return 18;
		case -575193412:
			return 19;
		case 1364208910:
			return 20;
		case 1936286816:
			return 21;
		case -361115047:
			return 22;
		case -874931455:
			return 23;
		case -1692024648:
			return 24;
		case -1371940008:
			return 25;
		case -108990605:
			return 26;
		case -122883667:
			return 27;
		case -2093379718:
			return 28;
		case -362851054:
			return 29;
		case -244323351:
			return 30;
		case 1314790674:
			return 31;
		case -550123659:
			return 32;
		case 944566512:
			return 33;
		case 1589331582:
			return 34;
		case 721639005:
			return 35;
		case 1289855691:
			return 36;
		default:
			break;
	}
	return -1;
}

bool func_322(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_323(int iParam0)
{
	if (!func_322(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_324(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_322(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_453(iParam0);
		if (func_125(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_454(255);
			}
			else
			{
				iVar1 = func_285(bVar0, func_286(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_455(iParam0);
		if (func_125(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_285(bVar0, func_286(1), -2.696814E-33f, 1, 0, 0);
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

int func_325(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_200();
	Var0.f_2 = 23;
	Var0.f_3 = func_201(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_456(fParam0);
	}
	return uVar5;
}

int func_326(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_200();
	Var0.f_2 = 14;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

bool func_327(bool bParam0)
{
	if (func_159(bParam0) == -1.955052E+34f || func_159(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

int func_328(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return 0;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(*uParam0))
	{
		return 0;
	}
	iVar0 = MISC::GET_HASH_KEY(uParam0->f_1);
	iVar1 = MISC::GET_HASH_KEY(*uParam0);
	if (!TXD::DOES_STREAMED_TXD_EXIST(iVar0))
	{
		return 0;
	}
	if (!bParam3)
	{
		if (TXD::HAS_STREAMED_TXD_LOADED(iVar0))
		{
			if (!GRAPHICS::_IS_TEXTURE_IN_DICT(iVar0, iVar1))
			{
				return 0;
			}
		}
	}
	*uParam1 = iVar0;
	*uParam2 = iVar1;
	return 1;
}

bool func_329(var uParam0)
{
	if (!func_88(uParam0))
	{
		return false;
	}
	return func_457(uParam0);
}

bool func_330(var uParam0)
{
	struct<10> Var0;

	if (!func_88(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_127(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_125(Var0.f_4, 0))
	{
		return false;
	}
	return func_458(Var0.f_4);
}

bool func_331(struct<4> Param0)
{
	if (!func_88(&Param0))
	{
		return false;
	}
	if (func_457(&Param0))
	{
		return false;
	}
	return func_460(func_459(Param0));
}

bool func_332(struct<2> Param0, bool bParam2)
{
	if (!func_113(Param0))
	{
		return false;
	}
	func_461(bParam2);
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

bool func_333(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_334(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_335(bool bParam0)
{
	if (func_101() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_62(bParam0));
}

bool func_336(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_220(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_462(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_337(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_223(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_338(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_463(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_465(func_464(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_339(int iParam0, struct<17> Param1)
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

struct<4> func_340(bool bParam0)
{
	int iVar0;

	iVar0 = func_62(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_223(8.681942E-06f, func_286(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_223(8.681942E-06f, func_286(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_223(8.681942E-06f, func_286(bParam0), -1.942248E+12f, 0);
}

int func_341(bool bParam0, bool bParam1)
{
	if (func_159(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_467();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_342(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_285(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_343(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_468(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_344(bool bParam0)
{
	int iVar0;

	iVar0 = func_62(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_223(3.507197E-29f, func_286(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_223(3.507197E-29f, func_286(bParam0), 12999093, 0);
}

bool func_345(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_159(bParam0);
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
			if (func_469(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

float func_346(bool bParam0)
{
	if (func_125(bParam0, 0))
	{
		if (func_145(bParam0, -1.823469E-06f))
		{
			if (func_145(bParam0, 5.454413E+35f))
			{
				return func_470();
			}
			return func_471();
		}
		else if (func_145(bParam0, 4.644778E+30f))
		{
			return func_359();
		}
		else if (func_145(bParam0, 8.368431E+20f))
		{
			return func_472();
		}
		else if (func_145(bParam0, 888.6404f))
		{
			return func_362();
		}
	}
	if (Global_1940072.f_12)
	{
		return func_471();
	}
	else
	{
		return func_362();
	}
	return func_362();
}

float func_347()
{
	return 7.633434E-31f;
}

bool func_348(bool bParam0)
{
	return (bParam0 == 1.174009E+12f || bParam0 == -4.629755E-24f);
}

float func_349()
{
	return 0.1210489f;
}

bool func_350(bool bParam0)
{
	if ((((((((((func_145(bParam0, 888.6404f) || func_145(bParam0, -8.87647E+33f)) || func_145(bParam0, -1.086842E+20f)) || func_145(bParam0, -2.635625E-06f)) || func_145(bParam0, 1.378098E+25f)) || func_145(bParam0, 1.898534E+15f)) || func_145(bParam0, 1.763507E+18f)) || func_145(bParam0, -1.823469E-06f)) || func_145(bParam0, 4.644778E+30f)) || func_145(bParam0, -1.064618E-36f)) || bParam0 == -1.954145E-33f)
	{
		return true;
	}
	return false;
}

float func_351()
{
	return 0.1190805f;
}

float func_352()
{
	return 0.1209659f;
}

float func_353()
{
	return 0.122911f;
}

float func_354()
{
	return 0.1228801f;
}

float func_355()
{
	return 0.0001162227f;
}

float func_356()
{
	return 0.03022764f;
}

float func_357()
{
	return 0.122879f;
}

float func_358()
{
	return 0.0004730224f;
}

float func_359()
{
	return 1.815963E-06f;
}

float func_360()
{
	return 0.1109248f;
}

float func_361()
{
	return 0.1065672f;
}

float func_362()
{
	return 0.1209657f;
}

float func_363()
{
	return 0.1210337f;
}

bool func_364(int iParam0)
{
	return func_304(Global_1940072.f_7, iParam0);
}

bool func_365(float fParam0, int iParam1)
{
	return (fParam0 && iParam1) != 0;
}

bool func_366(bool bParam0)
{
	int iVar0;

	if (func_364(1))
	{
		if (bParam0)
		{
			func_158("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_364(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			iVar0 = func_473(Global_33);
			if (iVar0 != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(iVar0))
				{
					func_158("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_158("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_364(4194304))
	{
		return false;
	}
	return true;
}

bool func_367(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		PED::_0x6B67320E0D57856A(Global_33, &Var0, 2, false);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_158("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_368(bool bParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(Global_33))
	{
		return false;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
		{
			return false;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_33);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case joaat("ROWBOAT"):
			case joaat("HANDCART"):
				if (bParam0)
				{
					func_158("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_158("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_365(fParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam2 || VEHICLE::GET_DRIVER_OF_VEHICLE(iVar0) == Global_33)
			{
				return false;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return false;
	}
	return true;
}

bool func_369(int iParam0, int iParam1)
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

bool func_370(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_371(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;

	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return false;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1069547520)
	{
		return true;
	}
	return false;
}

bool func_372()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

bool func_373(int iParam0)
{
	return (Global_1958662 && iParam0) != 0;
}

bool func_374(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_474(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_475("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_476(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_477(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_478(iVar1);
				return true;
			}
			iVar3++;
		}
		func_478(iVar1);
	}
	return false;
}

bool func_375(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_159(bParam0);
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
	iVar1 = func_479(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_480(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_481(bParam0);
	iVar2 = func_480(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_376(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_156(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_474(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_482(bParam0, 0);
	}
	if (func_220(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_483(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_62(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_377(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_113(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_217(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_484(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_485(iVar1);
			}
			break;
		case 3:
			iVar3 = func_486(iVar5);
			iVar4 = func_487(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_488(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_378(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_380(func_489(iParam0, iParam1, bParam2)));
}

struct<8> func_379(int iParam0, int iParam1)
{
	return func_489(iParam0, iParam1, 1);
}

char* func_380(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_381(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_382(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_383(int iParam0)
{
	float fVar0;
	int iVar1;
	int iVar2;

	if (Global_17418.f_2992 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17418.f_2992.f_1[iVar1 /*5*/].f_4 == 0)
			{
			}
			else if (func_490(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_490(Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_491(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1, Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
						if (fVar0 < 1133903872)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_492(4))
	{
		return false;
	}
	if (func_386())
	{
		return true;
	}
	if (func_493())
	{
		return false;
	}
	if (func_494(1, 255))
	{
		return false;
	}
	if (func_113(func_216()) && Global_1220811.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_384(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_228(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_385(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_495(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_386()
{
	return func_496(func_112(0));
}

bool func_387(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_IS_META_PED_USING_COMPONENT(iParam0, iParam1);
}

int func_388()
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -3.273909E-18f)
	{
		if (iVar0 == -3.273909E-18f)
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_497(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_497(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -3.273909E-18f)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

int func_389(bool bParam0)
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

void func_390(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_498(iParam0);
	iVar1 = func_389(bVar0);
	if (iVar1 != iParam0)
	{
		func_499(iVar1, 4);
	}
	if (!func_500(iParam0))
	{
		return;
	}
	if (func_501(iParam0))
	{
		return;
	}
	func_499(iParam0, 4);
	func_502(iParam0, bParam1);
	if (!func_503(iParam0))
	{
		func_504(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_505(1, 6);
		}
	}
}

bool func_391(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	if (TASK::CAN_START_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3))
	{
		TASK::START_TASK_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3, 0, -1f);
		Global_1940072.f_26 = 1;
		return true;
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	return false;
}

void func_392(bool bParam0)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	float fVar31;
	float fVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	bool bVar38;
	bool bVar39;

	Var0.f_1 = 20;
	if ((func_145(bParam0, 1.763507E+18f) || func_145(bParam0, 8.273569E-15f)) || func_145(bParam0, -1.230845E+19f))
	{
		bVar37 = true;
	}
	if (func_156(bParam0) == 4.324946E+36f)
	{
		ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bParam0, &Var0);
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var0.f_1[iVar29], &Var22))
			{
			}
			else if (-96713.62f == Var22.f_1)
			{
				fVar30 = func_506(0, Var22.f_2);
				func_507(Var22.f_2);
				bVar39 = true;
			}
			else if (-0.1614907f == Var22.f_1)
			{
				fVar31 = func_506(2, Var22.f_2);
				func_508(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (2.973069E-25f == Var22.f_1)
			{
				fVar32 = func_506(1, Var22.f_2);
				func_509(Var22.f_2);
			}
			else if (-7.847055E+23f == Var22.f_1)
			{
				fVar33 = func_510(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_511(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (2.800259E+28f == Var22.f_1)
			{
				fVar34 = func_510(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_511(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1.406341E+22f == Var22.f_1)
			{
				fVar35 = func_510(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_511(1, fVar35, 1, 1, bVar37);
			}
			else if (6.109425E+35f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-1.597577E+09f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-0.0001180082f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(18, fVar36, 1, 1);
			}
			else if (7.468359E+28f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (8.651734E+09f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-2.200394E-06f == Var22.f_1)
			{
				fVar36 = func_512(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_513(1, fVar36, 1, 1);
			}
			else if (-3.61937E+09f == Var22.f_1)
			{
				func_514(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_145(bParam0, -3.480943E+19f))
		{
			func_516(func_515(-3.750745E+13f), 1);
		}
		if (func_145(bParam0, -3.458856E-14f))
		{
			func_516(func_515(-2.12416E-30f), 1);
		}
		if (bVar38)
		{
			func_516(func_515(1.131948E-13f), 1);
		}
		switch (bParam0)
		{
			case -1735850413: /* GXTEntry: "Pickled Egg" */
			case -241345764: /* GXTEntry: "Almonds" */
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 1.757621E+16f, 1);
				break;
		}
		PLAYER::_SET_USED_ITEM_EFFECT(fVar30, fVar32, fVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

int func_393(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_517(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_474(bParam0, 1);
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
			func_518(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_228(bParam0, 1))
	{
		return 0;
	}
	Var5 = { func_519(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_376(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_376(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_393(bParam0, func_376(bParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_156(bParam0) == -3.265313E+23f)
	{
		if (!func_520(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_141(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_222(bParam0, 0, 0) };
		if (func_335(0) && Var7.f_4 == 4.978612f)
		{
			func_521(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_335(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_518(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_394(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

bool func_395(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_396(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

bool func_397()
{
	if (Global_1953279.f_3503)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1953279.f_3501)) < 1250)
	{
		return true;
	}
	if (func_522())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return true;
	}
	return false;
}

int func_398(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (((iVar0 == 5.002459E-36f || iVar0 == -9.847085E+19f) || func_145(bParam0, 3.611922E-33f)) || func_145(bParam0, -1.186825E-08f))
	{
		return 1;
	}
	return 0;
}

void func_399(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_400(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_406(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_401(bool bParam0)
{
	if (-1.527139E-27f == func_523(5.002459E-36f))
	{
		if (func_406(bParam0))
		{
			return true;
		}
	}
	else if (func_524(-9.847085E+19f, bParam0) || func_145(func_525(2.057189E+24f), -1.186825E-08f))
	{
		if (func_406(bParam0))
		{
			return true;
		}
	}
	return false;
}

float func_402()
{
	float fVar0;

	fVar0 = 2.505841E+17f;
	switch (func_388())
	{
		case 0:
			fVar0 = 2.505841E+17f;
			break;
		case 3:
			fVar0 = 7.176239E-05f;
			break;
		case 1:
			fVar0 = -1.118024E+38f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_403()
{
	float fVar0;

	fVar0 = 7.033603E-17f;
	switch (func_388())
	{
		case 0:
			fVar0 = 7.033603E-17f;
			break;
		case 3:
			fVar0 = -3.523563E-08f;
			break;
		case 1:
			fVar0 = 4.176883E+30f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_404()
{
	float fVar0;

	fVar0 = -1.234154E-27f;
	switch (func_388())
	{
		case 0:
			fVar0 = -1.234154E-27f;
			break;
		case 3:
			fVar0 = -6.997053E+25f;
			break;
		case 1:
			fVar0 = -8.009408E-10f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

float func_405()
{
	float fVar0;

	fVar0 = 1.111775E+20f;
	switch (func_388())
	{
		case 0:
			fVar0 = 1.111775E+20f;
			break;
		case 3:
			fVar0 = -1.260444E-14f;
			break;
		case 1:
			fVar0 = 8.360504E-33f;
			break;
		case 2:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

bool func_406(bool bParam0)
{
	if (func_524(5.002459E-36f, bParam0))
	{
		return true;
	}
	if (func_524(-9.847085E+19f, bParam0))
	{
		return true;
	}
	return false;
}

void func_407(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

void func_408(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_278(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_278(bParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_278(bParam0, 1) /*12*/].f_11 && iParam1));
}

int func_409(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1953279.f_3352.f_28;
		case 81053684:
			return Global_1953279.f_3352.f_30;
		case -525676072:
			return Global_1953279.f_3352.f_29;
		case -1719060085:
			return Global_1953279.f_3352.f_31;
		case 1388798186:
			return Global_1953279.f_3352.f_33.f_7;
		case 119907797:
			return Global_1953279.f_3352.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1953279.f_3352.f_27;
			}
			else
			{
				return func_526();
			}
			break;
	}
	return 0;
}

int func_410(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1953279.f_3352.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1953279.f_3352.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1953279.f_3352.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
			iVar0 = 1;
			break;
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

bool func_411(bool bParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1953279.f_3352.f_26)
	{
		if (bParam0 == Global_1953279.f_3352[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_412(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	bool bVar1;

	bVar1 = bParam0;
	if (Global_1953279.f_3352.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_411(bVar1, &uVar0))
	{
		return 0;
	}
	if (!func_527(bParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_528(bParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1953279.f_3352[Global_1953279.f_3352.f_26] = bVar1;
	Global_1953279.f_3352.f_26++;
	*uParam1++;
	return 1;
}

void func_413()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		Global_17418.f_55.f_664[iVar0] = Global_1953279.f_3352[iVar0];
		iVar0++;
	}
	Global_17418.f_55.f_664.f_27 = Global_1953279.f_3352.f_27;
	Global_17418.f_55.f_664.f_28 = Global_1953279.f_3352.f_28;
	Global_17418.f_55.f_664.f_29 = Global_1953279.f_3352.f_29;
	Global_17418.f_55.f_664.f_30 = Global_1953279.f_3352.f_30;
	Global_17418.f_55.f_664.f_31 = Global_1953279.f_3352.f_31;
	Global_17418.f_55.f_664.f_32 = Global_1953279.f_3352.f_32;
	Global_17418.f_55.f_664.f_26 = Global_1953279.f_3352.f_26;
}

bool func_414(int iParam0)
{
	return func_530(func_529(iParam0));
}

void func_415(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	float fVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	char* sVar10;

	if (!func_125(bParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_531(bParam1, &Var0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		fVar6 = 4.808429E-35f;
		iVar7 = func_532(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_533(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_380(func_534(iVar7));
		}
		else
		{
			bVar8 = func_535(bParam1);
			if (func_125(bVar8, 0))
			{
				bParam1 = bVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::VAR_STRING(0, func_536(bParam1, 0));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		fVar6 = 4.808429E-35f;
		iVar7 = func_532(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_533(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_380(func_534(iVar7));
		}
		else
		{
			bVar9 = func_535(bParam1);
			if (func_125(bVar9, 0))
			{
				bParam1 = bVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::VAR_STRING(0, func_536(bParam1, 0));
		}
	}
	sVar10 = func_537(MISC::VAR_STRING(10, sVar3, sVar5), fVar6);
	func_538(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, fVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_416(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_539();
	}
	if (bParam0)
	{
		func_263(8);
		func_263(512);
	}
	else
	{
		func_263(8);
		func_263(16);
	}
}

int func_417()
{
	return Global_1953279.f_1;
}

bool func_418(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_159(bParam1);
	iVar1 = func_159(bParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_540(bParam1) && func_540(bParam0))
	{
		return true;
	}
	return false;
}

void func_419(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_541(bParam0, 0, 0, bParam3, bParam5);
	func_274(bParam1, 1, bParam2, bParam4, bParam3, bParam5);
}

int func_420(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.09963E-29f;
		case 1:
			return -0.0195536f;
		case 2:
			return 6.16353E-25f;
		case 3:
			return 5.030698E+25f;
		case 4:
			return 6.953832E+10f;
		case 5:
			return 1.528789E-12f;
		case 6:
			return -3.812509E+14f;
		case 7:
			return 3.512979E-25f;
		case 8:
			return -2.87713E-08f;
		case 9:
			return 7.026751E+12f;
		case 10:
			return 37.82234f;
		case 11:
			return -5.103779E+26f;
		case 12:
			return 2.057189E+24f;
		case 13:
			return 1.705946E+19f;
		case 14:
			return 1.46383E+28f;
		case 15:
			return 6.38604E+21f;
		case 16:
			return 4289245f;
		case 17:
			return -6402848f;
		case 18:
			return -4.710718E+22f;
		case 19:
			return -7.579719E-11f;
		case 20:
			return -7.4271E-05f;
		case 21:
			return 5.394459E-28f;
		case 22:
			return -6.543055E-16f;
		case 23:
			return 774.4996f;
		case 24:
			return -0.0004201953f;
		case 25:
			return 8.86537E-15f;
		case 26:
			return -2.476578E+31f;
		case 27:
			return 2.199934E-35f;
		case 28:
			return -2.801147E+12f;
		case 29:
			return -3.522703E+23f;
		case 30:
			return 9.443141E+25f;
		case 31:
			return -0.01859914f;
		case 32:
			return -1.666598E-29f;
		case 33:
			return -8.05196E-19f;
		case 34:
			return 1.128179E-10f;
		case 35:
			return 1.186104E+32f;
		case 36:
			return -1.164553E-31f;
		case 37:
			return 9.901452E+29f;
		case 38:
			return -2.586538E-15f;
		case 39:
			return -1.003831E+26f;
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

void func_421()
{
	int iVar0;

	Global_1953279.f_1557 = Global_1953279.f_1676;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		Global_1953279.f_1557.f_1[iVar0 /*3*/] = { Global_1953279.f_1676.f_1[iVar0 /*3*/] };
		iVar0++;
	}
}

void func_422(bool bParam0)
{
	func_408(bParam0, 8, 6);
}

void func_423(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 4.506009E-09f || *bParam1 == 7.777273E-38f) || *bParam1 == 5.354456E-12f)
		{
			iVar0 = 16;
			if (func_159(uParam0->f_1[iVar0 /*3*/]) != 2.251657E+29f)
			{
				return;
			}
			iVar1 = func_542(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953279.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				return;
			}
		}
		if (!func_543(*bParam1, iParam2))
		{
			*bParam1 = Global_1953279.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}
	*bParam1 = Global_1953279.f_83[iParam2 /*12*/];
}

void func_424(int iParam0)
{
	func_544(&(Global_1953279.f_2938), iParam0);
}

void func_425(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_545(&(Global_1953279.f_2938), iParam0, iParam1);
}

void func_426(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_427(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_281(bVar0, 1);
	if (bParam3 && func_145(uParam0->f_1[iParam2 /*3*/], 1.280781E-26f))
	{
		func_546(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_420(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_547(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_548(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_549(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_550(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_551(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_552(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_553(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_554(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_555(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_556(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_557(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_558(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_559(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_560(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_561(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_562(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

int func_428(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = false;
	if (func_417() == 4.387347E-38f)
	{
		bVar0 = true;
	}
	if (iParam2 == 1.494364E-28f)
	{
		return 1.494364E-28f;
	}
	if (iParam2 != 0 && func_563(bParam0, bVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_564(bParam0, func_420(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_429(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (*uParam0 <= 0)
	{
		return;
	}
	iVar1 = -1;
	bVar2 = false;
	if (bParam5)
	{
		iVar1 = func_565(Global_1953279.f_1676);
		if (bParam4)
		{
			bParam4 = iVar1 == -1;
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_270(4718592) && !func_566(func_159(Global_1953279.f_1557.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
		}
		else
		{
			func_567(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2, iVar1);
			bVar2 = true;
		}
		iVar0++;
	}
	if (!bVar2)
	{
		return;
	}
	if (bParam4)
	{
		bVar3 = false;
		if (Global_1953279.f_1676 != 2.716622E-21f || !func_533(2, -1))
		{
			bVar3 = true;
		}
		else if (!func_145(Global_1953279.f_1676, -7.339854E+32f) && (Global_1953279.f_1676 != 2.716622E-21f || !func_533(2, -1)))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_1953279.f_1676 = 2.716622E-21f;
			Global_1953279.f_1557 = 2.716622E-21f;
			func_568(2.716622E-21f, 1, 1);
			func_569(-1, 0, 6);
			func_162(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_416(0, 1);
	}
}

int func_430(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_570(&uParam0, iParam4, bParam5, iParam6);
}

bool func_431(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_335(0))
	{
		return func_571(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_127(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_62(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

struct<4> func_432()
{
	struct<4> Var0;

	return Var0;
}

bool func_433(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_572(Global_33, iParam0, 0, 1) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iParam0))
	{
		return true;
	}
	return false;
}

bool func_434()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-3.515305E-20f))
	{
		func_233(2);
		return false;
	}
	if (!func_301())
	{
		func_233(9);
		return false;
	}
	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_233(3);
		return false;
	}
	Var0 = { func_112(0) };
	if (func_113(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_309(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_573(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_377(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_378(iVar4, 2.098029E-22f, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_233(iVar2);
			return false;
		}
	}
	if (func_574())
	{
		func_233(4);
		return false;
	}
	if (func_494(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && (Global_1051832.f_92[34 /*75*/].f_49 && 2f) == 0)
	{
		func_233(5);
		return false;
	}
	if (func_575(131072, 255))
	{
		func_233(7);
		return false;
	}
	if (func_576())
	{
		func_233(8);
		return false;
	}
	return true;
}

bool func_435(float fParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || func_365(iParam1, 1024)) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_436(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_575(32, iParam0);
}

bool func_437(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_438()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_439(bool bParam0)
{
	if (bParam0)
	{
		func_577(4);
	}
	else
	{
		func_292(4);
	}
}

void func_440(bool bParam0)
{
	if (!(bParam0 && Global_1915643.f_22504))
	{
		if (bParam0)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(2, 4.553053E+26f);
		}
		else
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(2, 4.553053E+26f, 0);
		}
	}
	Global_1915643.f_22504 = bParam0;
}

bool func_441()
{
	return Global_1915643.f_20643;
}

int func_442(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_578())
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

bool func_443(int iParam0, int iParam1, int iParam2)
{
	return func_304(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

var func_444(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_579() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_580());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_580());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_580());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_581(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_582(iVar2))
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
				if (iVar9 & 8192 != 0 && func_583(iVar2) != 1)
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
					if (!func_584(iVar10))
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

int func_445(var uParam0, struct<21> Param1)
{
	if (!func_585(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_446(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_447(int iParam0)
{
	if (func_449(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_448(int iParam0)
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

bool func_449(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_450(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_451()
{
	if (!func_301())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_452(bool bParam0, bool bParam1)
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

int func_453(int iParam0)
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

int func_454(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_455(int iParam0)
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

int func_456(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_200();
	Var0.f_2 = 22;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

bool func_457(var uParam0)
{
	if (!func_88(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

bool func_458(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_586(uParam0));
}

int func_459(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_88(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_460(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_587()) > iParam0;
}

void func_461(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

bool func_462(var uParam0, int iParam1, int iParam2, bool bParam3)
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
				*(uParam0[iVar0 /*6*/]) = { func_432() };
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

bool func_463(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_588(iParam1->f_8, iParam0, iVar0, 2048) || func_588(iParam1->f_8, iParam0, iVar0, 32768)) || func_588(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_588(iParam1->f_8, iParam0, iVar0, 4) || func_588(iParam1->f_8, iParam0, iVar0, 256)) || func_588(iParam1->f_8, iParam0, iVar0, 65536)) || func_588(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_588(iParam1->f_8, iParam0, iVar0, 1) || func_588(iParam1->f_8, iParam0, iVar0, 8)) || func_588(iParam1->f_8, iParam0, iVar0, 65536)) || func_588(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_588(iParam1->f_8, iParam0, iVar0, 1) || func_588(iParam1->f_8, iParam0, iVar0, 16)) || func_588(iParam1->f_8, iParam0, iVar0, 2)) || func_588(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_588(iParam1->f_8, iParam0, iVar0, 8) || func_588(iParam1->f_8, iParam0, iVar0, 4096)) || func_588(iParam1->f_8, iParam0, iVar0, 256)) || func_588(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_464(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_465(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_589(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_589(iParam1, 2, 0, 0);
	return -1;
}

int func_466(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_589(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_467()
{
	if (func_590(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_468(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_62(0);
	*iParam1 = { func_223(bParam0, func_340(0), fParam3, 0) };
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

bool func_469(bool bParam0, int iParam1, int iParam2)
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

float func_470()
{
	return 0.106079f;
}

float func_471()
{
	return 0.1068115f;
}

float func_472()
{
	return 0.08971565f;
}

int func_473(int iParam0)
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

bool func_474(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_156(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_145(bParam0, 9.811189E+11f))
	{
		func_591(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_475(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_62(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_476(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_477(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_478(int iParam0)
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

int func_479(bool bParam0)
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

int func_480(var uParam0, int iParam1)
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

int func_481(bool bParam0)
{
	int iVar0;

	iVar0 = func_159(bParam0);
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

int func_482(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_592(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_593(&Var0, func_340(0));
	}
	if (!func_594(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_478(iVar18);
	return iVar19;
}

struct<4> func_483(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_222(bParam0, bParam1, 0) };
	return func_223(bParam0, Var0, Var0.f_4, bParam1);
}

int func_484(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_595(&Var1, iParam0))
	{
		iVar0 = ((func_596() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_485(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_1;
}

int func_486(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5.856216E+09f;
		case 1:
			return 1.085353E+38f;
		case 2:
			return -2.930526E+36f;
		case 3:
			return 3.905951E+13f;
		case 4:
			return -7.628264E+14f;
		case 5:
			return -1.928853E-11f;
		case 6:
			return 1.07313E-19f;
		case 7:
			return 1.636911E-19f;
		case 8:
			return 2.023031E-25f;
		case 9:
			return 2186.558f;
		case 10:
			return -3.863288E-07f;
		case 11:
			return -3.345353E+16f;
		case 12:
			return 3.915688f;
		case 13:
			return -9.782536E+30f;
		case 14:
			return -5.216545E+07f;
		case 15:
			return 2.464231E-17f;
		case 16:
			return 4.734684E+23f;
		case 17:
			return -5.241477E+12f;
		case 18:
			return 1.56064E+12f;
		case 20:
			return 9.183966E-27f;
		case 21:
			return 1.332617E-15f;
		case 28:
			return 4.315841E+22f;
		case 19:
			return -8.590834E-27f;
		case 22:
			return 2.192248E-26f;
		case 23:
			return 1.812471E+21f;
		case 24:
			return -4.63753E+17f;
		case 25:
			return -2.64182E-23f;
		case 26:
			return -1.484548E+24f;
		case 27:
			return -3.871925E-26f;
		case 30:
			return 1.91729E+16f;
		default:
			break;
	}
	return 0;
}

var func_487(int iParam0)
{
	int iVar0;

	iVar0 = func_598(0, (func_597() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_599(iVar0);
}

int func_488(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_489(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_600(iParam0))
	{
		return Var5;
	}
	if (!func_601(&Var0))
	{
		return Var5;
	}
	if (!func_602(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_602(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_602(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_602(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_603(Var0);
}

bool func_490(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

float func_491(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_492(int iParam0)
{
	return func_304(Global_1220811.f_1196, iParam0);
}

bool func_493()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

bool func_494(int iParam0, int iParam1)
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

bool func_495(int iParam0)
{
	if (func_604(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_496(struct<2> Param0)
{
	return func_605(Param0, 1, 4);
}

bool func_497(int iParam0)
{
	return WEAPON::IS_WEAPON_BOW(iParam0);
}

int func_498(int iParam0)
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
	return 0;
}

void func_499(int iParam0, int iParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	Global_17418[iParam0] = (Global_17418[iParam0] || iParam1);
}

bool func_500(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_501(int iParam0)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	return func_606(iParam0, 4, 1);
}

void func_502(int iParam0, bool bParam1)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (func_607(iParam0))
	{
		return;
	}
	func_499(iParam0, 2);
	if (bParam1)
	{
		if (!func_74(0, 0, 1))
		{
			func_608(1, 0.02012728f);
		}
	}
}

bool func_503(int iParam0)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	return func_606(iParam0, 1, 1);
}

void func_504(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_500(iParam0))
	{
		return;
	}
	if (func_503(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_609(iParam0);
	}
	if (!bParam1)
	{
		func_610(iParam0);
	}
	func_499(iParam0, 1);
	func_502(iParam0, 1);
	if (bParam2)
	{
		if (!func_74(0, 0, 1))
		{
			func_505(1, 6);
		}
	}
}

void func_505(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_611(&Global_0, 8);
	}
	if (!func_612() || func_101() != -1)
	{
		return;
	}
	func_611(&Global_0, 1);
}

float func_506(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;

	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			iVar0 = 50;
			break;
		case 1:
			fVar1 = PED::_GET_PED_STAMINA(Global_33);
			fVar2 = PED::_GET_PED_MAX_STAMINA(Global_33);
			iVar0 = 8;
			break;
		case 2:
			fVar1 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_507(int iParam0)
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
	iVar1 = func_613(2);
	func_614(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_508(int iParam0, bool bParam1)
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
	iVar0 = func_615(2);
	func_616(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_509(int iParam0)
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
	iVar1 = func_617(2);
	func_618(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_510(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 1120403456) * 1120403456);
	}
	return ((fParam0 / 1090519040) * 1120403456);
}

void func_511(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_619(iParam0, fParam1, 1);
	}
	func_621(iParam0, (func_620(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_512(float fParam0, int iParam1)
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

int func_513(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_622(iParam0, fParam1, bParam2, bParam3);
}

void func_514(float fParam0, bool bParam1)
{
	if (fParam0 > 1092616192)
	{
		fParam0 = 1092616192; /* Float: 10f */
	}
	if (func_623())
	{
		func_624(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41++;
		if (5 == Global_17418.f_55.f_2459.f_41)
		{
			func_180(109, 0);
		}
	}
}

struct<2> func_515(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_516(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

bool func_517(bool bParam0)
{
	return func_156(bParam0) == 4.324946E+36f;
}

void func_518(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_125(bParam0, 0))
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
	if (!func_625() || bParam6)
	{
		func_626(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_627(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_627(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_628(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_156(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_145(bParam0, -5.215192E-33f)) && !func_145(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_159(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_531(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_145(bParam0, 6.834376E-22f))
	{
		sVar17 = func_629(bParam0);
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
	if (func_145(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_630(bParam0))
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
	bVar18 = func_536(bParam0, 0);
	if ((func_631(iVar12) && func_145(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_632(bParam0);
	}
	else if (func_156(bParam0) == -42.1084f)
	{
		bVar19 = func_535(bParam0);
		if (func_125(bVar19, 0))
		{
			bVar18 = func_536(bVar19, 0);
		}
	}
	if (func_633(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_634(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_537(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_635(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_636(bParam0, &cVar22))
		{
			sVar21 = func_638(func_637(cVar22), 4.808429E-35f);
		}
	}
	func_538(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_519(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_125(bParam0, 0))
	{
		return Var0;
	}
	if (func_145(bParam0, -8.087424E+27f))
	{
		if (func_101() == -1)
		{
			if (func_145(bParam0, -3.480943E+19f))
			{
				return func_515(4.052717E-32f);
			}
			else
			{
				return func_515(9918.3f);
			}
		}
	}
	else if (func_145(bParam0, -3.480943E+19f))
	{
		return func_515(-18395.16f);
	}
	if (func_145(bParam0, 4.091206E+36f))
	{
		return func_515(3.674458E+22f);
	}
	return Var2;
}

bool func_520(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_592(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_593(&Var0, func_340(0));
	}
	if (!func_594(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_476(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_224(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_478(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

void func_521(int iParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = iParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_639() && iParam2 == 0))
	{
		func_640(1);
		func_641(1);
	}
}

bool func_522()
{
	int iVar0;

	iVar0 = Global_1953279.f_595[8];
	iVar0 = (iVar0 + Global_1953279.f_595[10]);
	iVar0 = (iVar0 + Global_1953279.f_595[1]);
	iVar0 = (iVar0 + Global_1953279.f_595[2]);
	iVar0 = (iVar0 + Global_1953279.f_595[5]);
	iVar0 = (iVar0 + Global_1953279.f_595[25]);
	iVar0 = (iVar0 + Global_1953279.f_595[23]);
	iVar0 = (iVar0 + Global_1953279.f_595[18]);
	iVar0 = (iVar0 + Global_1953279.f_595[19]);
	return iVar0 > 0;
}

int func_523(int iParam0)
{
	int iVar0;

	iVar0 = func_278(func_642(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_524(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_278(func_642(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_159(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_145(bVar0, 3.611922E-33f)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_525(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_278(bParam0, 1) /*3*/];
}

int func_526()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_159(bVar1) == -947.1324f)
		{
			if (func_643() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_527(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_644(0);
	}
	if (func_159(bParam0) == -947.1324f && func_532(bParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 3.272964E+34f)
	{
		return func_145(bParam0, -3.437357E+28f);
	}
	else if (iParam1 == 4.387347E-38f)
	{
		return func_145(bParam0, -1.146799E+34f);
	}
	return false;
}

bool func_528(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_222(bParam0, bParam2, 0) };
	Var5 = { func_223(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_285(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_62(bParam2), &Var5, bParam1);
	return true;
}

int func_529(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		case -1719060085:
			return 16;
		case -999503751:
			return 1;
		case -525676072:
			return 4;
		case 81053684:
			return 8;
		case 119907797:
			return 32;
		case 1388798186:
			return 64;
		default:
			break;
	}
	return 0;
}

bool func_530(int iParam0)
{
	return (Global_1953279.f_3352.f_33.f_6 && iParam0) != 0;
}

bool func_531(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*sParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_532(bool bParam0)
{
	switch (bParam0)
	{
		case 491602716: /* GXTEntry: "Custom Outfit" */
			return 0;
		case 217155793: /* GXTEntry: "Outfit One" */
			return 1;
		case 97391779: /* GXTEntry: "Outfit Two" */
			return 2;
		case -808817534: /* GXTEntry: "Outfit Three" */
			return 3;
		case 1270922359: /* GXTEntry: "Outfit Four" */
			return 4;
		case -2011879201: /* GXTEntry: "Outfit Five" */
			return 5;
		case -1063340820: /* GXTEntry: "Outfit Six" */
			return 6;
		case 2127262701:
			return 7;
		case -1323870201: /* GXTEntry: "Outfit Eight" */
			return 8;
		case 1632140501: /* GXTEntry: "Outfit Nine" */
			return 9;
		case 967218463: /* GXTEntry: "Outfit Ten" */
			return 10;
		default:
			break;
	}
	return -1;
}

bool func_533(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		return (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] && iParam0) != 0;
	}
	return false;
}

struct<8> func_534(int iParam0)
{
	char cVar0[64];

	if (func_533(4, iParam0))
	{
		return Global_17418.f_2645[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::GET_STRING_FROM_HASH_KEY(func_645(iParam0)), 64);
	return cVar0;
}

bool func_535(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_646(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_183(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_184(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_647(bVar14))
			{
				func_187(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_187(iVar11);
	}
	return false;
}

bool func_536(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_648(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_537(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_538(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_649(sParam0, sParam1, iParam2);
	return iVar20;
}

void func_539()
{
	Global_1953279.f_1046 = 0;
}

bool func_540(bool bParam0)
{
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	if (func_145(bParam0, 3.611922E-33f) || func_159(bParam0) == 5.002459E-36f)
	{
		return true;
	}
	return false;
}

void func_541(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	bool bVar122;

	bVar0 = false;
	switch (func_159(bParam0))
	{
		case -2061583405:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_27), bParam4);
			if (func_145(bParam0, -7.339854E+32f))
			{
				Var1.f_1 = 39;
				if (func_651(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_125(bVar122, 0))
						{
							func_541(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_33.f_7), bParam4);
			break;
		default:
			if (func_145(bParam0, 3.611922E-33f))
			{
				bVar0 = func_650(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_415(0, bParam0);
	}
	if (bParam2)
	{
		func_413();
	}
	if (bParam1)
	{
		func_416(0, 0);
	}
}

int func_542(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_652(&uVar1, 9044914, bParam0, 0, 0, 0);
	DATAFILE::_PARSEDDATA_GET_FILE(&uVar1);
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&uVar1))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar0, &uVar1, -0.0008358429f))
		{
			return 0;
		}
		return uVar0;
	}
	return 0;
}

bool func_543(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_159(Global_1953279.f_1676.f_1[iParam1 /*3*/]);
	if (func_159(bParam0) == iVar0)
	{
		return true;
	}
	else if (bParam0 == -1700.123f)
	{
		return func_145(Global_1953279.f_1676.f_1[iParam1 /*3*/], 3.611922E-33f);
	}
	else if (bParam0 == 2.691891E-21f)
	{
		return (iVar0 == -7.463622E-36f || iVar0 == 4.454951E+36f);
	}
	else if (bParam0 == -4.323989E-26f)
	{
		return iVar0 == -494711.9f;
	}
	else if (bParam0 == -9.607686E+28f)
	{
		return iVar0 == 2.251657E+29f;
	}
	return false;
}

void func_544(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;

	Var2 = 39;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		Global_1953279.f_2938.f_35[iVar0 /*2*/] = { Var2 };
		if (iVar0 < *uParam0)
		{
			if ((func_653(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_653(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_654(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
				}
				Global_1953279.f_2938.f_35[iVar1 /*2*/] = { uParam0->f_2[iVar0 /*2*/] };
				iVar1++;
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				uParam0->f_2[iVar0 /*2*/] = { Global_1953279.f_2938.f_35[iVar0 /*2*/] };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}
}

void func_545(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_655(uParam0, 1))
	{
		func_656(uParam0, 1);
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (uParam0->f_2[iVar0 /*2*/] == iParam1)
		{
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			return;
		}
		if (Global_1953279.f_83[uParam0->f_2[iVar0 /*2*/] /*12*/].f_2 > Global_1953279.f_83[iParam1 /*12*/].f_2)
		{
			iVar1 = *uParam0;
			while (iVar1 >= iVar0 + 1)
			{
				uParam0->f_2[iVar1 /*2*/] = { uParam0->f_2[(iVar1 - 1) /*2*/] };
				iVar1 = (iVar1 + -1);
			}
			uParam0->f_2[iVar0 /*2*/] = iParam1;
			uParam0->f_2[iVar0 /*2*/].f_1 = iParam2;
			*uParam0++;
			return;
		}
		iVar0++;
	}
	uParam0->f_2[*uParam0 /*2*/].f_1 = iParam2;
	uParam0->f_2[*uParam0 /*2*/] = iParam1;
	*uParam0++;
}

void func_546(var uParam0, var uParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_657(0);
	Var0.f_1 = uParam1;
	Var0.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var0);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		return;
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var0))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&bVar7, &Var0, 2.24243E+12f))
		{
		}
		else
		{
			iVar8 = func_278(bVar7, 1);
			if (iVar8 < 0 || iVar8 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&bVar7, &Var0, 1.154786E+11f))
			{
			}
			else if (uParam0->f_1[iVar8 /*3*/] != bVar7)
			{
			}
			else
			{
				uParam0->f_1[iVar8 /*3*/] = Global_1953279.f_83[iVar8 /*12*/];
				uParam0->f_1[iVar8 /*3*/].f_1 = 0;
				func_425(iVar8, 0);
			}
		}
	}
}

void func_547(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (bParam1 == -3.916588E+30f || bParam1 == 2.515798E+09f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
	iVar0 = 10;
	iVar1 = func_159(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 1.246195E-34f)
	{
		if (func_145(bParam1, 1.816948E-22f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	else if (iVar1 == 4.454951E+36f)
	{
		if (func_145(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	else if (iVar1 == -9.847085E+19f)
	{
		if (func_145(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_145(uParam0->f_1[iVar0 /*3*/], -8.86916E-14f) && func_145(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam1, -3.086476E+35f)) && func_145(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_548(var uParam0, bool bParam1, int iParam2)
{
	if (bParam1 == 9.94413E+23f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1.494364E-28f;
	}
	else if (uParam0->f_1[iParam2 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iParam2 /*3*/].f_1 = 1808.893f;
	}
}

void func_549(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_425(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_281(bVar1, 0) && func_145(bVar1, -2.411198E+32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_159(bVar1) == 4.454951E+36f) && func_145(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_550(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_159(bParam2))
	{
		case -525676072:
			func_658(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_659(uParam0, bParam1, iParam3);
			break;
	}
}

void func_551(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_159(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_425(iVar0, iParam3);
	}
	func_425(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_540(bParam2))
	{
		func_660(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_145(bParam2, -2.411198E+32f) && !func_281(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	if (func_145(bParam2, -1.186825E-08f))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_425(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_425(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		func_425(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_425(iVar0, iParam3);
		}
	}
}

void func_552(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_417() == 4.387347E-38f)
	{
		iVar1 = 1;
	}
	if (3.919656E+35f == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_145(bParam2, 9.741843E+28f)) || func_159(bParam2) == 2.251657E+29f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if ((!func_281(bVar2, 0) && !func_145(bVar2, -1.186825E-08f)) && func_145(bParam2, -1.06471E-16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 17;
	if (!func_281(uParam0->f_1[iVar0 /*3*/], 0) && func_145(bParam2, 2.713478E+14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 29;
	if (!func_281(uParam0->f_1[iVar0 /*3*/], 0) && func_145(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_159(bVar2) == 8.292232E+24f && func_159(bParam2) == 2.251657E+29f)
	{
		uParam0->f_1[iVar0 /*3*/] = func_542(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	else if (func_661(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_159(bVar2) == 3.381578E-06f && func_662(32))
		{
			iVar3 |= 1;
		}
		if (func_145(bParam2, 4.422284E-20f))
		{
			iVar3 |= 2;
		}
		bVar2 = func_663(Global_1953279.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
			func_560(uParam0, 0, bVar2, iParam3);
		}
	}
	iVar0 = 21;
	if (!func_281(uParam0->f_1[iVar0 /*3*/], 0) && func_145(bParam2, 7.182742E-32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar4 = 23;
	if (!func_281(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953279.f_83[iVar4 /*12*/] && func_145(uParam0->f_1[iVar4 /*3*/], -2.881491E-21f)))
	{
		func_664(uParam0, iParam3);
	}
}

void func_553(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_554(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_159(bParam2))
	{
		case 698653232:
			func_665(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_666(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_555(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_159(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_667(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_668(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_556(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_159(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_425(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, 9.484546E+16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_664(uParam0, iParam3);
	}
}

void func_557(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			if (func_145(uParam0->f_1[iVar0 /*3*/], 9.484546E+16f))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			}
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(bParam2, -2.881491E-21f))
		{
			func_664(uParam0, iParam3);
		}
		else
		{
			func_425(iVar0, iParam3 | 16);
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -6.7231E+19f)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
	func_425(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_425(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_425(iVar0, iParam3);
	}
}

void func_558(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_669(2.199934E-35f) && func_145(bParam2, -4.878666E-06f))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_281(uParam0->f_1[iVar0 /*3*/], 0) && func_145(bParam2, 0.01839931f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_559(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(uParam0->f_1[iVar0 /*3*/], 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

void func_560(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_159(bParam2))
	{
		case 1759215194:
			func_670(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_671(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_672(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_673(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_674(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_675(uParam0, bParam1, iParam3);
			break;
	}
}

void func_561(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_159(bParam2))
	{
		case 1769055947:
			func_676(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_677(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_562(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_678(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_145(bParam2, 9.000944E-10f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_159(bVar1) == -494711.9f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	if ((func_145(bParam2, -4.282854E-21f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_159(bVar1) == 1.825867E+25f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_145(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

int func_563(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_GET_SHOP_ITEM_NUM_WEARABLE_STATES(bParam0, bParam1, true))
	{
		if (PED::_GET_SHOP_ITEM_WEARABLE_STATE_BY_INDEX(bParam0, iVar0, bParam1, true) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_564(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = 1808.893f;
	return true;
}

int func_565(bool bParam0)
{
	int iVar0;

	iVar0 = func_532(bParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

bool func_566(int iParam0)
{
	return (((((((((iParam0 == -6.84366E-28f || iParam0 == -1.11148E-12f) || iParam0 == 1.226722E-30f) || iParam0 == -5.930502E-22f) || iParam0 == 6.813211E-30f) || iParam0 == 272038.9f) || iParam0 == 8.083898E+09f) || iParam0 == 3.588834E-09f) || iParam0 == -1.005061E+16f) || iParam0 == 61.78744f);
}

void func_567(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	if (bParam1)
	{
		Global_1953279.f_1676.f_1[iParam0 /*3*/] = { Global_1953279.f_1557.f_1[iParam0 /*3*/] };
	}
	if (!bParam2)
	{
		return;
	}
	if (iParam3 == -1)
	{
		iParam3 = Global_17418.f_55.f_664.f_1777;
	}
	func_679(&(Global_1953279.f_1676.f_1[iParam0 /*3*/]), iParam0, iParam3);
}

bool func_568(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_222(bParam0, bParam2, 0) };
	Var5 = { func_223(bParam0, Var0, Var0.f_4, bParam2) };
	return func_431(Var5, iParam1, bParam2);
}

void func_569(int iParam0, bool bParam1, int iParam2)
{
	func_680(&(Global_1953279.f_1557), iParam0);
	func_681(2, iParam0, 6);
	if (bParam1)
	{
		func_416(0, 1);
	}
}

int func_570(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_682(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_571(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_127(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_156(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_683(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_684(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_685(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_686(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_687(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_688(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_689(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_338(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

float func_572(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_573(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 24;
		case 1:
			return 25;
		case 2:
			return 26;
		case 3:
			return 27;
		case 4:
			return 28;
		case 5:
			return 29;
		case 6:
			return 30;
		case 18:
			return 38;
		case 16:
			return 39;
		case 17:
			return 40;
		case 15:
			return 41;
		case 11:
			return 31;
		case 12:
			return 32;
		case 13:
			return 33;
		case 14:
			return 35;
		case 7:
			return 34;
		default:
			break;
	}
	if (func_310(iParam0) == -4.537018E+10f)
	{
		return 37;
	}
	return 23;
}

bool func_574()
{
	if ((func_111() || Global_1572887.f_72.f_40 > 10) || func_690())
	{
		if ((!func_386() && Global_265213.f_122484.f_80.f_16.f_2 != -5.544348E+20f) && !func_691(Global_265213.f_122484.f_80.f_16.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_575(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_576()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051832.f_3279 == iVar0 || Global_1051832.f_3279 == (iVar0 - 1));
}

void func_577(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 || iParam0);
}

bool func_578()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

int func_579()
{
	return Global_1051645.f_12;
}

char* func_580()
{
	return "unnamed";
}

int func_581(int iParam0)
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

bool func_582(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_692(36, iParam0);
}

int func_583(int iParam0)
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

bool func_584(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_693(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_694(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_585(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

var func_586(var uParam0)
{
	return uParam0;
}

int func_587()
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

int func_588(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_304(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_589(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_695(iParam0, iParam1, iParam2, iParam3);
}

int func_590(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_696(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_62(bParam1), iParam0, bParam3);
}

void func_591(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_592(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_593(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_594(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_62(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_595(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_596()
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

int func_597()
{
	return Global_1110244.f_3667.f_938;
}

int func_598(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_598(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_598(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_599(int iParam0)
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

bool func_600(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 83);
}

bool func_601(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_697();
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

bool func_602(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	Param0.f_2 = iParam6;
	Param0.f_3 = iParam7;
	Param0.f_4 = iParam8;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(bParam5, &Param0))
	{
		return false;
	}
	return true;
}

struct<8> func_603(struct<5> Param0)
{
	return func_698(Param0, 52, 1);
}

int func_604(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_RHODES_5"):
			return 0;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_VALENTINE_3"):
			return 1;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_5"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_BLACKWATER_1"):
			return 2;
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_2"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_1"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_4"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_3"):
		case joaat("DOCUMENT_ABANDONED_LOOT_MAP_INTRO_TUMBLEWEED_5"):
			return 3;
		default:
			break;
	}
	return -1;
}

bool func_605(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_113(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_699(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_606(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_500(iParam0))
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

bool func_607(int iParam0)
{
	if (!func_500(iParam0))
	{
		return false;
	}
	return func_606(iParam0, 2, 1);
}

int func_608(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_700())
	{
		return 0;
	}
	if (!func_301())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_611(&Global_0, 8);
	}
	func_611(&Global_0, 1);
	return 1;
}

int func_609(int iParam0)
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

void func_610(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_180(239, 0);
			break;
		case 16:
			func_180(240, 0);
			break;
		case 34:
			func_180(241, 0);
			break;
		case 52:
			func_180(242, 0);
			break;
		case 2:
			func_180(243, 0);
			break;
		case 3:
			func_180(244, 0);
			break;
		case 53:
			func_180(245, 0);
			break;
		case 15:
			func_180(246, 0);
			break;
		case 24:
			func_180(247, 0);
			break;
		case 38:
			func_180(248, 0);
			break;
		case 27:
			func_180(249, 0);
			break;
		case 13:
			func_180(250, 0);
			break;
		case 19:
			func_180(251, 0);
			break;
		case 20:
			func_180(252, 0);
			break;
		case 35:
			func_180(253, 0);
			break;
		case 39:
			func_180(254, 0);
			break;
		case 50:
			func_180(255, 0);
			break;
		case 7:
			func_180(256, 0);
			break;
		case 21:
			func_180(257, 0);
			break;
		case 18:
			func_180(258, 0);
			break;
		case 6:
			func_180(259, 0);
			break;
		case 30:
			func_180(260, 0);
			break;
		case 49:
			func_180(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_180(263, 0);
			break;
		case 8:
			func_180(264, 0);
			break;
		case 29:
			func_180(265, 0);
			break;
		case 32:
			func_180(266, 0);
			break;
		case 12:
			func_180(267, 0);
			break;
		case 28:
			func_180(268, 0);
			break;
		case 51:
			func_180(269, 0);
			break;
	}
}

void func_611(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_612()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_613(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_701(1);
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

void func_614(float fParam0, int iParam1)
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

int func_615(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_701(1);
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

void func_616(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_702(iVar0))
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

int func_617(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_701(1);
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

void func_618(float fParam0, int iParam1)
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

float func_619(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_703();
	func_704(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_705(iParam0, 2);
	if (func_707(iVar0, func_706(iParam0, 2), 1))
	{
		func_708(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_180(103, bParam2);
		return 0f;
	}
	func_709(iParam0, func_703(), 2);
	func_708(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_620(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_701(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/];
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/];
		default:
			break;
	}
	return -1f;
}

int func_621(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_701(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_710(iVar0, iParam0, fParam1))
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
			func_711(iParam0, 7000, iParam5);
		}
		func_712(iVar0, iParam0, fParam1);
		func_713(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_622(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_714(iParam0))
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
				sVar0 = func_715(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_507(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_715(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_716(3.279095E+25f);
			func_509(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_715(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_508(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_716(2.372604E-26f);
			func_717(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_717(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_717(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_623()
{
	if (Global_1956862.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_718(Global_1956862.f_1431.f_107, 0);
}

void func_624(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_719(13, 2);
	iVar1 = func_720(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_721(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_720(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_703();
		func_722(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_723(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

bool func_625()
{
	return !Global_1913431;
}

void func_626(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_627(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_628(bool bParam0, int iParam1)
{
	if (!func_125(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

char* func_629(bool bParam0)
{
	if (func_145(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_145(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_145(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_145(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_145(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_145(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_145(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_145(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_145(bParam0, -1.58908E+26f) || func_145(bParam0, -3.503386E-34f)) || func_145(bParam0, -1.887503E+19f)) || func_145(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_630(bool bParam0)
{
	if (func_145(bParam0, -1.15596E+32f))
	{
		if (((func_724(bParam0, -9.979451E-09f) || func_724(bParam0, 2.758862E+11f)) || func_724(bParam0, 1.868312E+36f)) || func_724(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_145(bParam0, -6.231785E+11f) || func_145(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_631(int iParam0)
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

int func_632(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_125(bParam0, 0))
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

bool func_633(bool bParam0, int iParam1)
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

int func_634(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_125(bParam0, 0) && !func_333(func_234(bParam0), 2))
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

int func_635(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_725(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_636(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_125(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_726(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_327(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_727(bParam0), 128);
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

char* func_637(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_638(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_537(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_639()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_729(func_728(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_730(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_640(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_641(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

bool func_642(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_277(iVar0);
}

int func_643()
{
	return Global_1953279.f_1676;
}

int func_644(bool bParam0)
{
	struct<4> Var0;
	int iVar14;
	struct<4> Var15;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<18> Var22;

	Var0.f_9 = -5.45926E-19f;
	iVar14 = 0;
	Var15 = { func_223(5.207907E-07f, func_286(1), 0.08386164f, 1) };
	iVar19 = func_430(Var15, 4.163947E-19f, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -6.390629E-21f)
		{
			iVar14 = 4.387347E-38f;
		}
		else if (iVar19 == 9.984187E-07f)
		{
			iVar14 = 3.272964E+34f;
		}
		return iVar14;
	}
	Var22 = { func_592(0, -5.45926E-19f, 4.163947E-19f, -5.45926E-19f, 0, 0, 0) };
	if (func_594(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_476(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -6.390629E-21f)
			{
				iVar14 = 4.387347E-38f;
			}
			else if (Var0.f_4 == 9.984187E-07f)
			{
				iVar14 = 3.272964E+34f;
			}
			else
			{
				func_478(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_431(Var0, 1, 0);
			}
			func_478(iVar20);
			return iVar14;
		}
		func_478(iVar20);
	}
	return 0;
}

int func_645(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 3.721427E-31f;
		case 2:
			return 1.937973E-35f;
		case 3:
			return -6.792218E+09f;
		case 4:
			return 2.526232E+07f;
		case 5:
			return -4.48861E-34f;
		case 6:
			return -4.959585f;
		case 7:
			return 1.352176E+38f;
		case 8:
			return -2.202343E-09f;
		case 9:
			return 2.311465E+20f;
		case 10:
			return 0.0003177309f;
		default:
			break;
	}
	return 0;
}

int func_646(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_125(bParam0, 0))
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

bool func_647(bool bParam0)
{
	if (!func_125(bParam0, 0))
	{
	}
	if (func_145(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_648(bool bParam0, bool bParam1)
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

void func_649(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

bool func_650(bool bParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (*uParam1 <= 0)
	{
		*uParam1 = 0;
		return false;
	}
	if (Global_1953279.f_3352.f_26 <= 1)
	{
		Global_1953279.f_3352.f_26 = 0;
		*uParam1 = 0;
		Global_1953279.f_3352[0] = 0;
		return true;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1953279.f_3352.f_26 - 1))
	{
		if (bParam0 == Global_1953279.f_3352[iVar0])
		{
			bVar1 = true;
		}
		if (bVar1 && iVar0 < (Global_1953279.f_3352.f_26 - 1))
		{
			Global_1953279.f_3352[iVar0] = Global_1953279.f_3352[iVar0 + 1];
		}
		iVar0++;
	}
	if (bVar1)
	{
		Global_1953279.f_3352.f_26 = (Global_1953279.f_3352.f_26 - 1);
		*uParam1 = (*uParam1 - 1);
		Global_1953279.f_3352[Global_1953279.f_3352.f_26] = 0;
		func_528(bParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_651(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_657(iParam6);
	Var4.f_1 = bParam1;
	Var4.f_3 = 0;
	DATAFILE::_PARSEDDATA_GET_FILE(&Var4);
	if (!DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		return false;
	}
	DATAFILE::_PARSEDDATA_GET_BOOL(&bVar2, &Var4, -2.622373E-16f);
	DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24095E+35f);
	*uParam2 = bVar2;
	if (!bVar2 && !bParam3)
	{
		func_732(uParam0, func_731(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_424(-1);
		}
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, -2.161193E-05f))
		{
			iVar11 = func_731(iVar0);
		}
	}
	while (DATAFILE::_PARSEDDATA_GET_ENTRIES(&Var4))
	{
		if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 2.24243E+12f))
		{
		}
		else
		{
			bVar3 = iVar0;
			iVar1 = func_278(bVar3, 1);
			if (iVar1 < 0 || iVar1 > 39)
			{
			}
			else if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1.154786E+11f))
			{
			}
			else
			{
				uParam0->f_1[iVar1 /*3*/] = iVar0;
				if (bVar2)
				{
					func_733(bVar3, 16, 6);
				}
				if (bParam5)
				{
					if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 1441384))
					{
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
					}
					else
					{
						Jump @362; //curOff = 297
						if (!DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, 46846.96f))
						{
							if (func_734(bVar3) && func_564(uParam0->f_1[iVar1 /*3*/], bVar3, &iVar0))
							{
								uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
							}
						}
						else
						{
							uParam0->f_1[iVar1 /*3*/].f_1 = iVar0;
						}
					}
					iVar1 = 16;
					if (bVar2)
					{
						if (!bParam8)
						{
							func_736(uParam0, iVar11, func_735(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_417() == 4.387347E-38f && uParam0->f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/]) && func_735(uParam0->f_1[34 /*3*/]) == 0) && !func_270(32)) && !func_270(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_663(-2.763755E-08f, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
						func_427(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
					}
					if (bParam4)
					{
						*uParam0 = bParam1;
					}
					return true;
				}
			}
		}
	}
}

void func_652(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_653(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_654(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_655(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_656(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_657(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_417();
	}
	if (iParam0 == 3.272964E+34f)
	{
		return -1.077915E-26f;
	}
	else if (iParam0 == 4.387347E-38f)
	{
		return -10172.2f;
	}
	return 0;
}

void func_658(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_145(bVar1, 3.611922E-33f) || func_159(bVar1) == 5.002459E-36f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

void func_659(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(uParam0->f_1[iVar0 /*3*/], -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

void func_660(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-9.847085E+19f == func_159(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

bool func_661(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_159(bParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 8.292232E+24f || iVar0 == 1.34646E-26f);
	}
	return (!bParam1 && (iVar0 == -2.443576E-24f || iVar0 == 1.34646E-26f));
}

bool func_662(int iParam0)
{
	return (Global_17418.f_55.f_664.f_1734 && iParam0) != 0;
}

int func_663(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> Var3;

	iVar2 = 0;
	Var3 = { func_592(0, -5.45926E-19f, iParam0, -5.45926E-19f, 0, 0, 0) };
	if (func_594(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_737(iVar0, iVar1, iParam1);
		}
		func_478(iVar0);
	}
	return iVar2;
}

void func_664(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	bVar1 = false;
	if (func_417() == 4.387347E-38f)
	{
		bVar1 = true;
	}
	func_425(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -4.070739E-17f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == 1808.893f)
	{
		if (func_563(uParam0->f_1[iVar0 /*3*/], bVar1, -4.070739E-17f) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			return;
		}
	}
	if (func_563(uParam0->f_1[iVar0 /*3*/], bVar1, 4.712272E+09f) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 4.712272E+09f;
	}
}

void func_665(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -1.06471E-16f)) && !func_145(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f) && func_145(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_425(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			func_425(iVar0, iParam3);
		}
	}
}

void func_666(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -1.366178E-36f)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_145(bVar1, 3.984539E+18f))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
			func_425(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_159(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
				func_425(iParam2, iParam3);
			}
		}
	}
}

void func_667(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	func_425(iVar0, iParam3);
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(bParam2, 3.949663E+29f) && func_159(bVar1) == 7.30981E-14f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
		else if (func_145(bParam2, 8.367934E-23f) && func_159(bVar1) == 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
		else
		{
			func_425(iVar0, iParam3);
		}
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_425(iVar0, iParam3);
			func_556(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		}
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -1.06471E-16f)) && !func_145(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_668(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_425(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && !func_145(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, 1.096909E-14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

bool func_669(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_278(bParam0, 1) /*3*/] != Global_1953279.f_83[func_278(bParam0, 1) /*12*/];
}

void func_670(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_425(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(uParam0->f_1[iVar0 /*3*/], -336998.2f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		func_425(iVar0, iParam1);
	}
}

void func_671(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (bParam1)
	{
		return;
	}
	bVar2 = false;
	bVar3 = false;
	if (func_417() == 4.387347E-38f)
	{
		bVar3 = true;
	}
	if (func_417() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_159(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_663(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_425(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -9.489474E-15f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_145(bVar1, 3.411183E+14f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_563(uParam0->f_1[iVar0 /*3*/], bVar3, -1.366178E-36f) != -1)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_159(bVar1) == 3.381578E-06f)
		{
			bVar2 = true;
			if (func_145(bParam2, 3.984539E+18f))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
				func_425(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_159(bVar1) == 6.698816E+28f && func_145(bParam2, -234.3313f))
		{
			func_738(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (8.292232E+24f == func_159(uParam0->f_1[iVar0 /*3*/]))
	{
		func_425(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -4.282854E-21f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_159(bVar1) == 1.825867E+25f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
}

void func_672(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_417() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_159(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_663(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_678(uParam0, iParam3, 1, 0);
		}
		else if (func_145(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	func_425(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_145(bVar1, 8.399988f) && func_145(bParam2, 7.029633E-22f))
		{
			func_738(uParam0, iVar0, iParam3);
		}
	}
}

void func_673(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_425(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	if (func_417() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_663(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_145(bVar1, 2.801708E-26f))
	{
		func_738(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_159(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

void func_674(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_159(bVar1) == 2.209101E-28f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_159(bVar1) == 3.381578E-06f)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != 1808.893f)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
				func_425(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_425(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_678(uParam0, iParam3, 1, 0);
		}
		else if (func_145(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
}

void func_675(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_738(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_678(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_425(iVar0, iParam2);
		}
	}
}

void func_676(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 34;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_425(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		func_425(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bParam2, -9.697137E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (3.381578E-06f == func_159(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -1.366178E-36f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
			func_425(iVar0, iParam3);
		}
	}
}

void func_677(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_145(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam3);
	}
}

void func_678(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -494711.9f == func_159(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam1);
	}
}

void func_679(var uParam0, int iParam1, int iParam2)
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_680(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_679(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_681(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	if (iParam1 > -1 && iParam1 < 11)
	{
		Global_17418.f_55.f_664.f_33[iParam1 /*120*/] = (Global_17418.f_55.f_664.f_33[iParam1 /*120*/] || iParam0);
	}
}

bool func_682(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_62(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_208(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

struct<29> func_683(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_689(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_684(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_463(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_465(func_739(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_685(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_689(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_686(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_465(func_740(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_687(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_62(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_689(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_688(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_463(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_465(func_741(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_466(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_689(var uParam0, bool bParam1)
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
		Var0.f_15 = func_220(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_432() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_690()
{
	return func_113(Global_1051268);
}

bool func_691(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

bool func_692(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_742(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_104())
	{
		return func_742(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_742(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_693(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_694(int iParam0)
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
		func_743(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_744(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_695(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_745(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_696(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

int func_697()
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_698(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, &vParam0))
	{
	}
	return Var0;
}

int func_699(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_217(Param0);
	}
	return -1;
}

bool func_700()
{
	return !Global_1572887.f_10;
}

int func_701(int iParam0)
{
	return func_747(func_746(iParam0));
}

bool func_702(int iParam0)
{
	float fVar0;

	fVar0 = (func_748(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

int func_703()
{
	return Global_1902565;
}

void func_704(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_749(*iParam0);
	iVar1 = func_750(*iParam0);
	iVar2 = func_751(*iParam0);
	iVar3 = func_752(*iParam0);
	iVar4 = func_753(*iParam0);
	iVar5 = func_754(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_755(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_756(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_705(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_701(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/].f_2;
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_2;
		default:
			break;
	}
	return -1;
}

int func_706(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_701(2);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_6[iParam0 /*3*/].f_1;
		case 1:
			return Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_1;
		default:
			break;
	}
	return -15;
}

bool func_707(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_757(iParam1) || !func_757(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_708(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_2 = iParam1;
			break;
		default:
			break;
	}
}

void func_709(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_6[iParam0 /*3*/].f_1 = iParam1;
			break;
		default:
			break;
	}
}

bool func_710(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_758(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_711(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
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

void func_712(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_759(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_760(iParam1), fParam2, -1);
	}
}

void func_713(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_701(2);
	}
	uVar0 = Global_1295619.f_16;
	func_761(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_762(iParam0, uVar0, iParam3);
	}
}

bool func_714(int iParam0)
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

char* func_715(int iParam0)
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

void func_716(int iParam0)
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
		iVar3 = func_763(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_764(iVar0);
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

void func_717(int iParam0, bool bParam1, bool bParam2)
{
	func_621(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

bool func_718(int iParam0, bool bParam1)
{
	return func_707(func_703(), iParam0, bParam1);
}

float func_719(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_701(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_26[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_26[iParam0];
		default:
			break;
	}
	return -1f;
}

int func_720(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

float func_721(float fParam0, float fParam1, float fParam2)
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

void func_722(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_749(*iParam0);
	iVar1 = func_750(*iParam0);
	iVar2 = func_751(*iParam0);
	iVar3 = func_752(*iParam0);
	iVar4 = func_753(*iParam0);
	iVar5 = func_754(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_755(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_755(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_756(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_723(int iParam0, float fParam1, int iParam2)
{
	if (!func_765(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
	}
	func_766(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_724(bool bParam0, int iParam1)
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

int func_725(bool bParam0, int iParam1)
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

char* func_726(bool bParam0)
{
	bool bVar0;

	if (!func_125(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_536(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

char* func_727(bool bParam0)
{
	int iVar0;

	if (!func_125(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_632(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

int func_728(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_729(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_376(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_767(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_768(bParam1, bParam4));
	}
	return iVar0;
}

void func_730(int iParam0)
{
	if (!func_125(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_238(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_APPAREL"):
			return 1;
		case joaat("MPC_SYSTEM_TAG_INFO_CHEST_APPAREL"):
			return 2;
		case joaat("MPC_SYSTEM_TAG_INFO_LEG_APPAREL"):
			return 4;
		case joaat("MPC_SYSTEM_TAG_INFO_APPAREL"):
			return 8;
		case joaat("MPC_SYSTEM_TAG_INFO_BODY"):
			return 16;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_FEATURES"):
			return 32;
		case joaat("MPC_SYSTEM_TAG_INFO_HAIR"):
			return 64;
		case joaat("MPC_SYSTEM_TAG_INFO_UPPER_BODY"):
			return 256;
		case joaat("MPC_SYSTEM_TAG_INFO_LOWER_BODY"):
			return 512;
		case joaat("MPC_SYSTEM_TAG_INFO_HEAD_OVERLAY"):
			return 1024;
		case -915377750:
			return 2048;
		case -1283403230:
			return 4096;
		case 1024778115:
			return 8192;
		case 75507907:
			return 16384;
		case -1678578495:
			return 32768;
		case -1925540957:
			return 65536;
		case -1932005642:
			return 131072;
		case -803648582:
			return 128;
		case 351949263:
			return 262144;
		case -597281578:
			return 524288;
		case 465720259:
			return 1048576;
		case 396349281:
			return 2097152;
		case -376594188:
			return -1;
		case -663436545:
			return 112;
		case 1042019528:
			return 2160;
		case -141044514:
			return 8304;
		case 884232794:
			return 16496;
		case 836721350:
			return 40960;
		case -1062102573:
			return 65601;
		case -884591393:
			return 96;
		case -1886898087:
			return 32880;
		case -1629261761:
			return 2049;
		case 2050534155:
			return 48;
		case -366477279:
			return 0;
		default:
			break;
	}
	return 0;
}

void func_732(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_769(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_770(iVar0, iParam1))
			{
				vVar4 = { func_771(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953279.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_772(iVar0, 4))
				{
					func_773(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_774(iVar0, 4, 6);
				}
				Jump @205; //curOff = 171
				if (bParam2)
				{
					vVar1.x = Global_1953279.f_83[iVar0 /*12*/];
					uParam0->f_1[iVar0 /*3*/] = { vVar1 };
				}
			}
			iVar0++;
		}
	}
}

void func_733(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_278(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_278(bParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_734(bool bParam0)
{
	float fVar0;
	var uVar1;

	Global_1953279.f_1039.f_2 = 0;
	fVar0 = 655621.5f;
	func_652(&(Global_1953279.f_1039), fVar0, -4.642217E+25f, 2.24243E+12f, 1, bParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 2.24243E+12f))
	{
		return false;
	}
	return true;
}

int func_735(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_125(bParam0, 0))
	{
		return 0;
	}
	iVar6 = ITEMDATABASE::_0x8870895BA5ED9385(bParam0, 1.282908E-11f, &uVar0);
	if (iVar6 > 0)
	{
		return uVar0[0];
	}
	return 0;
}

void func_736(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_145(uParam0->f_1[34 /*3*/], -7.339854E+32f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_772(iVar0, 16);
		if (bVar1)
		{
			func_773(iVar0, 16, 9);
		}
		if (Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_425(iVar0, iParam3);
			}
			if (!bParam2 && func_735(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_770(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_427(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_425(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_427(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_737(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -5.45926E-19f;
	iVar16 = 0;
	if (func_417() == 4.387347E-38f)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_476(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (func_775(Var1.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
		}
		else if (func_735(Var1.f_4) != 0)
		{
		}
		else if (func_145(Var1.f_4, -7.339854E+32f))
		{
		}
		else if (func_145(Var1.f_4, 4.422284E-20f))
		{
		}
		else
		{
			iVar15 = func_159(Var1.f_4);
			if (func_777(iParam2, func_776(iVar15)))
			{
			}
			else
			{
				return Var1.f_4;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_738(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_145(uParam0->f_1[iParam1 /*3*/], 1.280781E-26f))
	{
		func_546(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953279.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_425(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_425(iVar0, iParam2);
	}
}

bool func_739(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_740(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_741(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_742(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

void func_743(int iParam0)
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
	func_744(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_744(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

void func_745(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_778(&(uParam0->f_4));
}

bool func_746(int iParam0)
{
	return func_742(&(Global_1956862.f_1565), iParam0, 1);
}

int func_747(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_748(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_779(2)));
}

int func_749(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_780(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_750(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_751(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_752(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_753(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_754(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_755(int iParam0, int iParam1)
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

void func_756(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_781(iParam0, iParam6);
	func_782(iParam0, iParam5);
	func_783(iParam0, iParam4);
	func_784(iParam0, iParam3);
	func_785(iParam0, iParam2);
	func_786(iParam0, iParam1);
}

bool func_757(int iParam0)
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
	iVar0 = func_754(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_753(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_752(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_749(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_750(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_751(iParam0);
	if (iVar5 < 1 || iVar5 > func_755(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_758(int iParam0)
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

char* func_759(int iParam0)
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

char* func_760(int iParam0)
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

void func_761(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
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

void func_762(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_701(2);
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

int func_763(int iParam0, int iParam1)
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

int func_764(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_787(iParam0))
	{
		return 0;
	}
	iVar0 = func_763(iParam0, 1);
	if (!func_788(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_789(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_790(iParam0, iVar1))
		{
			case 0:
				func_791(iVar1, iParam0, iVar4);
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
						func_791(iVar1, iParam0, iVar4);
						func_792(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_792(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_793(iVar1, 1);
				func_794(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_795(iVar2, 0);
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
			func_796(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_765(int iParam0)
{
	if (func_714(iParam0))
	{
		return true;
	}
	else if (func_797(iParam0))
	{
		return true;
	}
	return false;
}

void func_766(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_701(1);
	}
	switch (iParam2)
	{
		case 0:
			Global_1956862.f_1431.f_26[iParam0] = fParam1;
			break;
		case 1:
			Global_1956862.f_1565.f_2.f_26[iParam0] = fParam1;
			break;
		default:
			break;
	}
}

int func_767(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_798(bParam1))
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
			return func_799(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_768(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_800())
	{
		return func_285(bParam0, func_286(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

bool func_769(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_770(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953279.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_771(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_772(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_773(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 - (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_774(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 || iParam1);
}

bool func_775(bool bParam0)
{
	return (((bParam0 != 9.94413E+23f && bParam0 != -3.916588E+30f) && bParam0 != 2.515798E+09f) && !func_647(bParam0));
}

int func_776(int iParam0)
{
	switch (iParam0)
	{
		case 502936876:
			return 1;
		case 684307653:
			return 2;
		case 1759215194:
			return 4;
		case -1740828670:
			return 8;
		case 344283346:
			return 16;
		default:
			break;
	}
	return 0;
}

bool func_777(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_778(var uParam0)
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

int func_779(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_613(2) * 2;
		case 1:
			return func_617(2) * 2;
		case 2:
			return func_615(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_780(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_781(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 2.658456E+36f));
	if (iParam1 < 1898)
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*iParam0 = (*iParam0 || 0f);
	}
	else
	{
		*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*iParam0 = (*iParam0 - (*iParam0 && 0f));
	}
}

void func_782(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_783(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_750(*iParam0);
	iVar1 = func_749(*iParam0);
	if (iParam1 < 1 || iParam1 > func_755(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_784(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_785(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_786(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_787(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_788(int iParam0)
{
	int iVar0;

	iVar0 = func_789(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_789(int iParam0, int iParam1)
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

int func_790(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_801(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_793(iParam1, 1);
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

int func_791(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_787(iParam1))
	{
		return 0;
	}
	if (!func_802(iParam0))
	{
		return 0;
	}
	iVar0 = func_793(iParam0, 1);
	func_803(iParam0, iParam1, iParam2);
	if (func_804(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_805(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_806(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_807(vVar1))
		{
			if (func_808(vVar1.x, vVar1.y, vVar1.z))
			{
				func_809(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_810(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_810(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_792(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_793(int iParam0, int iParam1)
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

void func_794(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_795(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_796(var uParam0)
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

bool func_797(int iParam0)
{
	switch (iParam0)
	{
		case 12:
			return true;
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

bool func_798(bool bParam0)
{
	if (!func_633(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_811(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_799(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_125(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_812(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

bool func_800()
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
	if (!func_813(iVar0))
	{
		return false;
	}
	return true;
}

int func_801(int iParam0)
{
	if (func_814(iParam0))
	{
		return (func_815(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_802(int iParam0)
{
	int iVar0;

	iVar0 = func_793(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_803(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_763(iParam1, 1);
	iVar1 = func_793(iParam0, 1);
	iVar2 = func_789(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_816(iVar3, 1);
		if (!func_817(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_818(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_819(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_820(iVar6))
		{
		}
		else
		{
			iVar8 = func_821(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_822(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_804(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_805(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_802(iParam0))
	{
		return false;
	}
	if (!func_823(iParam1))
	{
		return false;
	}
	iVar0 = func_824(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_806(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_825(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_807(vector3 vParam0)
{
	if (!func_802(vParam0.x))
	{
		return false;
	}
	if (!func_787(vParam0.y))
	{
		return false;
	}
	if (!func_826(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_808(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_763(iParam1, 1);
	iVar1 = func_793(iParam0, 1);
	iVar2 = func_789(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_816(iVar3, 1);
		if (!func_817(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_818(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_827(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_820(iVar6))
		{
		}
		else if (!func_828(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_821(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_829(iVar6);
			}
		}
		iVar7++;
	}
	func_830(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_809(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_823(iParam0))
	{
		return;
	}
	iVar0 = func_824(iParam0, 1);
	if (!func_802(iParam1))
	{
		return;
	}
	if (!func_787(iParam2))
	{
		return;
	}
	if (!func_826(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_810(int iParam0)
{
	int iVar0;

	if (!func_823(iParam0))
	{
		return;
	}
	iVar0 = func_824(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_811(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_831(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_812(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_832(iParam0) };
	return func_833(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_813(int iParam0)
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

bool func_814(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_815(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (func_814(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_834(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_835(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_836(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_837(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_838(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_839(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_816(int iParam0, int iParam1)
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

bool func_817(int iParam0)
{
	int iVar0;

	iVar0 = func_816(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_818(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_840(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_819(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_817(iParam0))
	{
		return;
	}
	iVar0 = func_816(iParam0, 1);
	if (!func_841(Global_1156096.f_2169[iVar0 /*205*/]))
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
	if (!func_842(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_843(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_820(int iParam0)
{
	int iVar0;

	iVar0 = func_821(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_821(int iParam0, int iParam1)
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

void func_822(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_844();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_845();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_180(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_846(iParam0));
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
			func_848(func_847(iParam0));
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
			func_849();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_841(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_841(16);
			break;
	}
}

bool func_823(int iParam0)
{
	int iVar0;

	iVar0 = func_824(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_824(int iParam0, int iParam1)
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

int func_825(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_850(iParam0);
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
		iVar64 = func_793(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_851(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_852(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
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

bool func_826(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_827(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_817(iParam0))
	{
		return;
	}
	iVar0 = func_816(iParam0, 1);
	if (!func_841(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_842(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_843(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_828(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_853(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_829(int iParam0)
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
			func_844();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_845();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_180(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_846(iParam0));
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
			iVar2 = func_847(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_854(iParam0, 0));
			func_855(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_854(iParam0, 1));
			func_855(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_854(iParam0, 2));
			func_855(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_854(iParam0, 3));
			func_855(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_847(iParam0);
			func_855(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_847(iParam0);
			func_855(iVar2, 4, 1, -1, 0);
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
			func_856();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_841(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_841(16);
			break;
	}
}

void func_830(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_857(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_858(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

int func_831(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_832(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_833(iParam0, 2.982335E+09f, func_432(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_833(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_125(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

bool func_834(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_835(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_836(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_837(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_838(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_839(int iParam0)
{
	int iVar0;

	iVar0 = func_763(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_840(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_859(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_841(int iParam0)
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

bool func_842(int iParam0)
{
	int iVar0;

	iVar0 = func_843(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_843(int iParam0, int iParam1)
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

void func_844()
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
		if (!func_304(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_845()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_846(int iParam0)
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

int func_847(int iParam0)
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

void func_848(int iParam0)
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

void func_849()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

int func_850(int iParam0)
{
	int iVar0;

	if (!func_823(iParam0))
	{
		return -1;
	}
	iVar0 = func_824(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_851(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_802(iParam0))
	{
		return false;
	}
	iVar0 = func_793(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_804(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_824(iVar2, 1) /*3*/];
		Var4 = { func_852(iVar3) };
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
			if (!func_860() && !func_861())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_860())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_801(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_801(iParam1);
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
			iVar1 = func_801(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_584(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_575(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_801(iParam1);
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

struct<31> func_852(int iParam0)
{
	int iVar0;

	iVar0 = func_793(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_853(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_859(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_854(int iParam0, int iParam1)
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

void func_855(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_856()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_857(int iParam0)
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

char* func_858(int iParam0)
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

bool func_859(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_862(iVar7);
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

bool func_860()
{
	return Global_1572887.f_7;
}

bool func_861()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_113(func_112(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_691(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

int func_862(int iParam0)
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

