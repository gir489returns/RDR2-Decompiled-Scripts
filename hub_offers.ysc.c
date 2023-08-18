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
	int iLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 12;
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
	var uLocal_40 = 5;
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
	var uLocal_94 = 0;
	var uLocal_95 = 0;
	var uLocal_96 = 0;
	var uLocal_97 = 0;
	var uLocal_98 = 0;
	var uLocal_99 = 0;
	var uLocal_100 = 0;
	var uLocal_101 = 0;
	var uLocal_102 = 0;
	var uLocal_103 = 0;
	var uLocal_104 = 0;
	var uLocal_105 = 0;
	var uLocal_106 = 0;
	var uLocal_107 = 0;
	var uLocal_108 = 0;
	var uLocal_109 = -1;
	var uLocal_110 = 0;
	var uLocal_111 = -1;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	var uLocal_116 = 0;
	var uLocal_117 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (func_1(&iLocal_19))
	{
		func_2(&iLocal_19);
	}
	func_3(&iLocal_19);
}

bool func_1(int iParam0)
{
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	func_4(iParam0, 0);
	if (!func_5(&(iParam0->f_19)))
	{
		return false;
	}
	func_6(iParam0);
	func_7(&(iParam0->f_44));
	if (!func_8(&(iParam0->f_48)))
	{
		return false;
	}
	func_9(iParam0);
	return true;
}

void func_2(int* iParam0)
{
	bool bVar0;

	bVar0 = false;
	while (!bVar0)
	{
		if (func_10(iParam0))
		{
			bVar0 = true;
		}
		func_11(iParam0);
		func_12(iParam0);
		func_13(&(iParam0->f_19), &(iParam0->f_44));
		func_14(&(iParam0->f_44));
		func_15(&(iParam0->f_48));
		BUILTIN::WAIT(0);
	}
}

void func_3(int iParam0)
{
	func_16(&(iParam0->f_81));
	func_17(iParam0);
	func_18(&(iParam0->f_48));
	func_19(iParam0);
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_4(int iParam0, int iParam1)
{
	iParam0->f_1 = iParam1;
}

bool func_5(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_20(&(uParam0->f_2[iVar0 /*3*/]));
		iVar0++;
	}
	func_20(&(uParam0->f_18));
	return true;
}

void func_6(int iParam0)
{
	iParam0->f_90 = -1;
	iParam0->f_90.f_1 = 0;
}

void func_7(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	uParam0->f_3 = 0f;
}

bool func_8(int* iParam0)
{
	func_21(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
	return true;
}

int func_9(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_22(iVar2, 1);
		if (!func_23(iParam0, iVar1))
		{
			return 0;
		}
		iVar2++;
	}
	return 1;
}

bool func_10(var uParam0)
{
	if (SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		return true;
	}
	return false;
}

void func_11(int* iParam0)
{
	struct<4> Var0;
	int iVar4;

	if (func_24(iParam0, 1))
	{
		iVar4 = func_25(iParam0, iParam0->f_15.f_1);
		if (func_26(iParam0, iVar4, &(Var0.f_3)))
		{
			Var0 = iParam0->f_15;
			Var0.f_1 = iParam0->f_15.f_1;
			Var0.f_2 = iParam0->f_15.f_2;
			func_27(iParam0, &Var0);
		}
		func_28(iParam0, 1, 0);
	}
	while (UIEVENTS::EVENTS_UI_IS_PENDING(-1.186373E+38f))
	{
		if (!UIEVENTS::EVENTS_UI_PEEK_MESSAGE(-1.186373E+38f, &Var0))
		{
		}
		else
		{
			func_27(iParam0, &Var0);
			UIEVENTS::EVENTS_UI_POP_MESSAGE(-1.186373E+38f);
		}
	}
}

void func_12(int* iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.352589E+27f);
	iVar1 = func_29(iParam0);
	iVar0 = 6.528181E-15f;
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_30(iParam0, iVar1);
		}
		func_4(iParam0, iVar0);
		func_31(iParam0, iVar0);
	}
	func_32(iParam0, iVar0);
}

void func_13(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam0)
	{
		if (!func_33(uParam1))
		{
			*uParam0 = 0;
		}
	}
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = uParam0->f_2[iVar1 /*3*/];
		if (!func_34(&(uParam0->f_2[iVar1 /*3*/])))
		{
		}
		else
		{
			if (!func_33(uParam1))
			{
				if (!func_35(uParam1, 1108082688 /* Float: 35f */, 1f))
				{
				}
				Jump @201; //curOff = 96
			}
			else
			{
				switch (func_36(&(uParam0->f_2[iVar1 /*3*/])))
				{
					case 0:
					case 2:
					case 4:
						break;
					case 3:
						break;
					default:
						iVar0++;
						Jump @201; //curOff = 156
						if (func_37(uParam1) < 1f)
						{
							iVar0++;
						}
						else
						{
							func_38(uParam1);
							func_39(uParam0, iVar2);
							*uParam0 = 1;
						}
						iVar1++;
						uParam0->f_1 = iVar0 > 0;
					}
				}
			}
		}

void func_14(var uParam0)
{
	if (!func_33(uParam0))
	{
		return;
	}
	if (uParam0->f_2 > 0f)
	{
		if (func_37(uParam0) > uParam0->f_2)
		{
			*uParam0 = 0;
			return;
		}
	}
	func_40(0);
	HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
}

void func_15(int* iParam0)
{
	if (!func_41(*iParam0, 1))
	{
		return;
	}
	if (!AUDIO::PREPARE_SOUNDSET(&(iParam0->f_1), false))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FRONTEND(&(iParam0->f_17), &(iParam0->f_1), false, 0);
	func_42(iParam0, 1);
}

void func_16(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	func_43(uParam0, *uParam0, 0);
}

int func_17(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 2;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_22(iVar2, 1);
		func_44(iParam0, iVar1);
		iVar2++;
	}
	return 1;
}

void func_18(int* iParam0)
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(iParam0->f_1)))
	{
		AUDIO::_RELEASE_SOUNDSET(&(iParam0->f_1));
	}
	func_42(iParam0, 0);
	StringCopy(&(iParam0->f_1), "", 128);
	StringCopy(&(iParam0->f_17), "", 128);
}

void func_19(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2[2]);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2[2], iVar2);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iVar1);
		iVar2++;
	}
	DATABINDING::_0x3BF0767CF33FCC88(iParam0->f_2[2]);
	if (func_45(iParam0))
	{
		if (INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(func_46(iParam0)))
		{
		}
	}
	iParam0->f_90 = -1;
	iParam0->f_90.f_1 = 0;
}

void func_20(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
}

void func_21(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

int func_22(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 6.528181E-15f;
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

int func_23(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MAIN"):
			return func_47(iParam0);
	}
	return 0;
}

bool func_24(int* iParam0, int iParam1)
{
	return func_41(*iParam0, iParam1);
}

int func_25(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_48(uParam0);
	iVar1 = func_49(uParam0);
	iVar2 = 0;
	if (iVar1 < 0)
	{
		iVar2 = (MISC::ABSI(iVar1) + iParam1);
		if (iParam1 >= (iVar1 + iVar0))
		{
			iVar2 = (iVar2 - iVar0);
		}
	}
	else
	{
		iVar2 = (iParam1 - iVar1);
	}
	return iVar2;
}

bool func_26(int* iParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2[1]);
	if (iParam1 < 0)
	{
		return false;
	}
	if (iParam1 >= iVar0)
	{
		return false;
	}
	*uParam2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2[1], iParam1);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam2))
	{
		return true;
	}
	return false;
}

void func_27(int* iParam0, bool bParam1)
{
	switch (*bParam1)
	{
		case -1740156697:
			func_50(iParam0, bParam1);
			func_51(iParam0, bParam1);
			break;
		case -1203660660:
			func_52(iParam0, bParam1);
			break;
		case -120002582:
			func_28(iParam0, 2, 1);
			func_53(iParam0, bParam1->f_2);
			func_54(iParam0);
			func_56(iParam0, func_55(iParam0));
			break;
		case -114265581:
			func_53(iParam0, bParam1->f_2);
			func_54(iParam0);
			func_56(iParam0, func_55(iParam0));
			break;
		case 368072021:
			func_57(iParam0, bParam1->f_1, bParam1->f_2);
			func_58(&(iParam0->f_95));
			func_59(iParam0, func_49(iParam0), func_48(iParam0));
			func_60(&(iParam0->f_95), iParam0->f_2[1], "largeTextureTxd");
			break;
	}
}

void func_28(int* iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_21(iParam0, iParam1);
	}
	else
	{
		func_42(iParam0, iParam1);
	}
}

var func_29(var uParam0)
{
	return uParam0->f_1;
}

void func_30(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MAIN"):
			func_61(uParam0);
			break;
	}
}

void func_31(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MAIN"):
			func_62(iParam0);
			break;
	}
}

void func_32(int* iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MAIN"):
			func_63(iParam0);
			break;
	}
}

bool func_33(var uParam0)
{
	return *uParam0;
}

bool func_34(var uParam0)
{
	if (*uParam0 == -1)
	{
		return false;
	}
	if (uParam0->f_1 == 0)
	{
		return false;
	}
	return true;
}

bool func_35(var uParam0, int iParam1, float fParam2)
{
	if (func_33(uParam0))
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_1 = func_64();
	uParam0->f_2 = iParam1;
	uParam0->f_3 = fParam2;
	return true;
}

int func_36(var uParam0)
{
	return func_65(*uParam0);
}

float func_37(var uParam0)
{
	if (!*uParam0)
	{
		return 0f;
	}
	return MISC::ABSF((func_64() - uParam0->f_1));
}

void func_38(var uParam0)
{
	if (func_37(uParam0) < uParam0->f_3)
	{
		uParam0->f_2 = MISC::ABSF((uParam0->f_3 - func_37(uParam0)));
	}
	else
	{
		*uParam0 = 0;
	}
}

int func_39(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (uParam0->f_2[iVar0 /*3*/] != iParam1)
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_18), &(uParam0->f_2[iVar0 /*3*/]), 3);
			func_20(&(uParam0->f_2[iVar0 /*3*/]));
			return 1;
		}
		iVar0++;
	}
	return 0;
}

void func_40(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

bool func_41(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_42(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_43(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (*uParam0 != iParam1)
	{
		return;
	}
	iVar0 = (Global_1295619.f_16 - uParam0->f_1);
	TELEMETRY::_TELEMETRY_MENU_NAVIGATION(*uParam0, iVar0, uParam0->f_2, iParam2);
	func_66(uParam0);
}

void func_44(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case joaat("MAIN"):
			func_67(iParam0);
			break;
	}
}

bool func_45(int* iParam0)
{
	return iParam0->f_90 != -1;
}

int func_46(int* iParam0)
{
	return iParam0->f_90;
}

int func_47(int iParam0)
{
	if (!func_68(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_48(int* iParam0)
{
	return iParam0->f_92.f_2;
}

int func_49(int* iParam0)
{
	return iParam0->f_92.f_1;
}

void func_50(var uParam0, var uParam1)
{
	if (uParam0->f_15.f_1 != uParam1->f_1)
	{
		func_69(&(uParam0->f_84));
	}
	switch (uParam1->f_2)
	{
		case -571766943:
		case 705463926:
			if (!func_70(uParam0, &(uParam1->f_3)))
			{
				func_71(uParam0);
			}
			break;
		case -1948187754:
		case -1585562139:
		case -797654126:
		case 678711754:
			if (!func_72(uParam0, &(uParam1->f_3)))
			{
				func_71(uParam0);
			}
			break;
		default:
			func_71(uParam0);
			break;
	}
}

void func_51(var uParam0, bool bParam1)
{
	if (*bParam1 != -2.576099E-24f)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_15), bParam1, 4);
}

void func_52(var uParam0, bool bParam1)
{
	switch (bParam1->f_2)
	{
		case -797654126:
		case -571766943:
			func_73();
			func_74();
			func_75();
			func_76();
			func_77(-5.210408f);
			if (func_78())
			{
				func_79(1);
				func_80(1, 1);
			}
			else
			{
				func_80(0, 0);
			}
			break;
		case -1948187754:
			if (!func_81(uParam0, &(bParam1->f_3)))
			{
			}
			break;
		case 678711754:
			func_82();
			break;
	}
}

void func_53(int* iParam0, var uParam1)
{
	iParam0->f_92 = uParam1;
}

bool func_54(int* iParam0)
{
	int iVar0;
	struct<12> Var1;
	int iVar15;
	int iVar16;
	char cVar17[128];
	int iVar33;
	int iVar34;
	int iVar35;

	func_19(iParam0);
	iParam0->f_90 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&(iParam0->f_90.f_1));
	if (!func_45(iParam0))
	{
		return false;
	}
	iVar0 = func_46(iParam0);
	Var1.f_9 = -5.45926E-19f;
	iVar34 = func_83(iParam0);
	iVar35 = 0;
	while (iVar35 < iVar34)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iVar0, iVar35, &Var1))
		{
		}
		else if (!func_84(&Var1))
		{
		}
		else if (!func_85(Var1.f_9))
		{
		}
		else if (!func_86(Var1.f_4))
		{
		}
		else
		{
			iVar16 = Var1.f_11;
			iVar15 = 0;
			while (iVar15 < iVar16)
			{
				IntToString(&cVar17, iVar35, 128);
				StringConCat(&cVar17, "_", 128);
				StringIntConCat(&cVar17, iVar15, 128);
				iVar33 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0->f_2[2], &cVar17);
				DATABINDING::_DATABINDING_ADD_DATA_INT(iVar33, "offerIndex", iVar35);
				DATABINDING::_DATABINDING_ADD_DATA_INT(iVar33, "offerSubIndex", iVar15);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0->f_2[2], -1, 0, iVar33);
				iVar15++;
			}
		}
		iVar35++;
	}
	return true;
}

int func_55(int* iParam0)
{
	if (!func_45(iParam0))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(iParam0->f_2[2]);
}

void func_56(int* iParam0, int iParam1)
{
	if (!func_87(iParam0))
	{
		return;
	}
	DATABINDING::_VIRTUAL_COLLECTION_SET_SIZE(func_88(iParam0), iParam1);
}

void func_57(int* iParam0, var uParam1, var uParam2)
{
	iParam0->f_92.f_1 = uParam1;
	iParam0->f_92.f_2 = uParam2;
}

void func_58(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_1))
	{
		return;
	}
	func_89(uParam0);
}

int func_59(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<13> Var1;
	struct<13> Var48;
	struct<20> Var95;
	char cVar131[64];
	struct<10> Var139;
	int iVar153;
	int iVar154;

	func_90(iParam0);
	if (iParam2 <= 0)
	{
		return 0;
	}
	iVar0 = func_55(iParam0);
	if (iVar0 == 0)
	{
		return 1;
	}
	Var1 = 1;
	Var1.f_1 = 1;
	Var1.f_2 = 27.64779f;
	Var1.f_4 = -1;
	Var1.f_5 = -1;
	Var1.f_6 = -1;
	Var1.f_10 = -1;
	Var1.f_11 = -1;
	Var1.f_12 = -1;
	Var48 = 1;
	Var48.f_1 = 1;
	Var48.f_2 = 27.64779f;
	Var48.f_4 = -1;
	Var48.f_5 = -1;
	Var48.f_6 = -1;
	Var48.f_10 = -1;
	Var48.f_11 = -1;
	Var48.f_12 = -1;
	Var95.f_19 = 16;
	Var139.f_9 = -5.45926E-19f;
	iVar153 = 0;
	iVar154 = 0;
	iVar154 = 0;
	while (iVar154 < iParam2)
	{
		iVar153 = func_91(iParam1, iVar0, iVar154);
		if (!func_92(iParam0, iVar153, &Var139))
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&Var1, &Var48, 47);
			if (!func_93(&Var139, &Var1))
			{
			}
			else
			{
				StringCopy(&cVar131, "offer_item_", 64);
				StringIntConCat(&cVar131, iVar153, 64);
				if (!func_94(&Var95, &(iParam0->f_2[1]), cVar131, &Var1))
				{
					return 0;
				}
				if (!func_95(iParam0, Var95, iVar153))
				{
					return 0;
				}
			}
		}
		iVar154++;
	}
	return 1;
}

void func_60(var uParam0, int iParam1, char* sParam2)
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
	func_96(uParam0);
}

void func_61(int iParam0)
{
	func_69(&(iParam0->f_84));
	func_97(-1.895156E+13f);
}

int func_62(int* iParam0)
{
	func_28(iParam0, 0, 1);
	func_71(iParam0);
	func_98(&(iParam0->f_86), 4000);
	func_99(-1.895156E+13f);
	return 1;
}

void func_63(int* iParam0)
{
	int iVar0;

	if (func_100(&(iParam0->f_86)))
	{
		if (func_101(&(iParam0->f_19)))
		{
		}
		else
		{
			func_28(iParam0, 0, 1);
		}
	}
	func_102(iParam0);
	if (func_103(&(iParam0->f_84)))
	{
		func_28(iParam0, 0, 1);
	}
	if (func_24(iParam0, 0))
	{
		if (func_45(iParam0) && func_24(iParam0, 2))
		{
			iVar0 = func_55(iParam0);
			if (!func_54(iParam0))
			{
			}
			if (iVar0 != func_55(iParam0))
			{
				func_104(iParam0);
			}
			else if (func_101(&(iParam0->f_19)))
			{
			}
			else
			{
				func_105(iParam0);
				func_28(iParam0, 1, 1);
			}
		}
		func_28(iParam0, 0, 0);
	}
	if (func_48(iParam0) == 0)
	{
		func_106(iParam0);
	}
}

float func_64()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

int func_65(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_107(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_108(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_108(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

void func_66(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_67(int iParam0)
{
	func_61(iParam0);
}

bool func_68(int iParam0)
{
	iParam0->f_2[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", -6.549707E-16f);
	iParam0->f_2[1] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(iParam0->f_2[0], -2.36837E+08f);
	iParam0->f_2[2] = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST_BY_HASH(iParam0->f_2[0], -2.959503E+29f);
	iParam0->f_2[3] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(iParam0->f_2[0], 8.008171E-17f, "");
	iParam0->f_2[4] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(iParam0->f_2[0], -6.183556E+10f, false);
	iParam0->f_2[5] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(iParam0->f_2[0], NaNf, 0);
	iParam0->f_2[6] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(iParam0->f_2[0], -3.796351E+19f, 0);
	iParam0->f_2[7] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(iParam0->f_2[0], 4.126364E+16f, true);
	iParam0->f_2[8] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(iParam0->f_2[0], -1.33346E+30f, "");
	iParam0->f_2[9] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(iParam0->f_2[0], 1.335591E+32f, 0);
	iParam0->f_2[10] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(iParam0->f_2[0], -5.959404E-32f, 0);
	iParam0->f_2[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(iParam0->f_2[0], -1.612291E+34f, 0);
	return true;
}

int func_69(var uParam0)
{
	if (!func_109(*uParam0, 0))
	{
		return 0;
	}
	if (!func_110(*uParam0))
	{
		return 1;
	}
	func_111(*uParam0);
	*uParam0 = 0;
	uParam0->f_1 = 1;
	return 1;
}

bool func_70(var uParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	bool bVar19;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_112(uParam0, uParam1);
	if (!func_113(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -5.45926E-19f;
	if (!func_114(Var0, &Var4, 0, 0, -1))
	{
	}
	func_115(Var4.f_4, uParam1);
	func_116(&(uParam0->f_84), Var4.f_4);
	bVar19 = false;
	if (func_117(&Var0))
	{
		sVar18 = func_118(1);
	}
	else if (func_119(Var0))
	{
		sVar18 = func_120(Var0);
		bVar19 = true;
	}
	else
	{
		sVar18 = func_120(Var0);
	}
	func_121(uParam0, bVar19);
	func_122(uParam0, sVar18);
	return true;
}

void func_71(int* iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2[3], "");
	func_121(iParam0, 0);
}

bool func_72(var uParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;
	char* sVar18;
	bool bVar19;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_112(uParam0, uParam1);
	if (!func_113(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -5.45926E-19f;
	if (!func_114(Var0, &Var4, 0, 0, -1))
	{
		return false;
	}
	func_115(Var4.f_4, uParam1);
	func_116(&(uParam0->f_84), Var4.f_4);
	bVar19 = false;
	if (func_123(Var4.f_4))
	{
		sVar18 = func_118(9);
	}
	else if (func_117(&Var0))
	{
		sVar18 = func_118(0);
	}
	else if (func_119(Var0))
	{
		sVar18 = func_120(Var0);
		bVar19 = true;
	}
	else
	{
		sVar18 = func_120(Var0);
	}
	func_121(uParam0, bVar19);
	func_122(uParam0, sVar18);
	return true;
}

int func_73()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
	{
		return 0;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(7.215231E-38f);
	return 1;
}

void func_74()
{
	func_124(0);
}

void func_75()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.352589E+27f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.352589E+27f))
	{
		return;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(1.352589E+27f);
}

void func_76()
{
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(4.255667E+29f) && !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(4.255667E+29f))
	{
		return;
	}
	UIAPPS::_CLOSE_UIAPP_BY_HASH(4.255667E+29f);
}

void func_77(float fParam0)
{
	Global_1960810.f_2 = fParam0;
}

bool func_78()
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

void func_79(bool bParam0)
{
	if (func_78())
	{
		Global_1958670 = 1;
	}
	if (func_125(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

void func_80(bool bParam0, bool bParam1)
{
	if (!func_126())
	{
		func_127(1);
	}
	func_128(1);
	if (bParam0 || bParam1)
	{
		Global_1051832.f_3649 = 0;
		func_128(8);
		if (bParam1)
		{
			func_128(16);
		}
	}
	func_129(&(Global_1051832.f_3651));
}

bool func_81(var uParam0, var uParam1)
{
	struct<4> Var0;
	struct<10> Var4;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	if (!func_113(uParam1, &Var0))
	{
		return false;
	}
	Var4.f_9 = -5.45926E-19f;
	if (!func_114(Var0, &Var4, 1, 0, -1))
	{
		return false;
	}
	if (!func_109(Var4.f_4, 0))
	{
		return false;
	}
	if (!func_130(Var4.f_4))
	{
		return false;
	}
	if (!func_131(Var4.f_4))
	{
		return false;
	}
	if (!func_132(uParam0, Var4.f_4))
	{
		return false;
	}
	return true;
}

void func_82()
{
	if (!UIAPPS::REQUEST_UIAPP_TRANSITION_BY_HASH(1.352589E+27f, -1.715998E-20f))
	{
	}
}

int func_83(int* iParam0)
{
	if (!func_45(iParam0))
	{
		return 0;
	}
	return iParam0->f_90.f_1;
}

bool func_84(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_85(int iParam0)
{
	if (iParam0 == 0.2059816f)
	{
		return false;
	}
	return true;
}

bool func_86(bool bParam0)
{
	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (func_133(bParam0) == 9.22581E-11f)
	{
		return false;
	}
	return true;
}

bool func_87(int* iParam0)
{
	return DATABINDING::_VIRTUAL_COLLECTION_EXISTS(func_88(iParam0));
}

var func_88(int* iParam0)
{
	return iParam0->f_92;
}

int func_89(var uParam0)
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

void func_90(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_2[1]);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(uParam0->f_2[1], iVar2);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iVar1);
		iVar2++;
	}
	DATABINDING::_0x3BF0767CF33FCC88(uParam0->f_2[1]);
}

int func_91(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 < 0)
	{
		iVar0 = (iParam0 + iParam2);
		if (iVar0 < 0)
		{
			return (iParam1 + iVar0);
		}
		else
		{
			return iVar0;
		}
	}
	return (iParam0 + iParam2);
}

bool func_92(int* iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_45(iParam0))
	{
		return false;
	}
	if (!func_134(iParam0, iParam1))
	{
		return false;
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(iParam0->f_2[2], iParam1);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return false;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "offerIndex");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "offerSubIndex");
	if (iVar1 < 0)
	{
		return false;
	}
	if (iVar1 >= func_83(iParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(func_46(iParam0), iVar1, iParam2))
	{
		return false;
	}
	if (iVar2 < 0)
	{
		return false;
	}
	if (iVar2 >= iParam2->f_11)
	{
		return false;
	}
	return true;
}

bool func_93(var uParam0, var uParam1)
{
	struct<10> Var0;

	if (!func_84(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_114(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_109(Var0.f_4, 0))
	{
		return false;
	}
	if (func_135(Var0.f_4))
	{
		if (!func_136(uParam0, uParam1))
		{
			return false;
		}
	}
	else if (func_130(Var0.f_4))
	{
		if (!func_137(uParam0, uParam1))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_94(var uParam0, var uParam1, char[32] cParam2, var uParam10)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return false;
	}
	func_138(uParam0, *uParam1, cParam2, *uParam10);
	uParam0->f_19[0] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 3.859434E-23f, uParam10->f_16);
	uParam0->f_19[1] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 0.6123784f, uParam10->f_17);
	uParam0->f_19[2] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, NaNf, uParam10->f_18);
	uParam0->f_19[3] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -3.796351E+19f, uParam10->f_19);
	uParam0->f_19[4] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -1.33346E+30f, uParam10->f_20);
	uParam0->f_19[5] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, 1.335591E+32f, uParam10->f_21);
	uParam0->f_19[6] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -5.959404E-32f, uParam10->f_22);
	uParam0->f_19[7] = DATABINDING::_DATABINDING_ADD_DATA_HASH_BY_HASH(*uParam0, -1.612291E+34f, uParam10->f_23);
	uParam0->f_19[8] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 4.126364E+16f, uParam10->f_24);
	uParam0->f_19[9] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 0.03507012f, uParam10->f_25);
	uParam0->f_19[10] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(*uParam0, 1.567252E-17f, uParam10->f_26);
	uParam0->f_19[11] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -2.131827E+25f, uParam10->f_43);
	uParam0->f_19[12] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -3.170487E+19f, uParam10->f_43.f_1);
	uParam0->f_19[13] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -184.773f, uParam10->f_43.f_2);
	uParam0->f_19[14] = DATABINDING::_DATABINDING_ADD_DATA_INT_BY_HASH(*uParam0, -6.014027E-08f, uParam10->f_43.f_3);
	uParam0->f_19[15] = DATABINDING::_DATABINDING_ADD_DATA_STRING_BY_HASH(*uParam0, -6.6457E-35f, &(uParam10->f_27));
	return true;
}

bool func_95(int* iParam0, int iParam1, int iParam2)
{
	if (!func_87(iParam0))
	{
		return false;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam1))
	{
		return false;
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0->f_2[1], -1, 1.052978E-22f, iParam1);
	DATABINDING::_VIRTUAL_COLLECTION_ITEM_ADD(func_88(iParam0), iParam2, 1.052978E-22f, iParam1);
	return true;
}

void func_96(var uParam0)
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

void func_97(int iParam0)
{
	int iVar0;

	if (func_139())
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
	func_140(&Global_1960810);
	func_141(iParam0, 0);
}

void func_98(var uParam0, int iParam1)
{
	uParam0->f_3 = iParam1;
}

void func_99(int iParam0)
{
	if (func_139())
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	if (Global_1960810.f_5 != -1 && Global_1960810.f_5 != iParam0)
	{
		func_97(Global_1960810.f_5);
	}
	Global_1960810.f_3 = Global_1295619.f_16;
	Global_1960810.f_5 = iParam0;
	Global_1960810.f_4 = Global_1960810;
}

bool func_100(var uParam0)
{
	if (uParam0->f_3 <= 0)
	{
		if (func_142(uParam0))
		{
			func_129(uParam0);
		}
		return false;
	}
	if (!func_142(uParam0))
	{
		func_143(uParam0, 1);
		return true;
	}
	if (!func_144(uParam0) >= uParam0->f_3)
	{
		return false;
	}
	func_145(uParam0);
	return true;
}

bool func_101(var uParam0)
{
	return uParam0->f_1;
}

void func_102(int* iParam0)
{
	struct<4> Var0;
	var uVar4;

	if (!func_146(&(iParam0->f_19), &(iParam0->f_44)))
	{
		return;
	}
	if (func_147(&(iParam0->f_19)) == -8.667224E-32f)
	{
		func_148(iParam0, &Var0);
		if (func_149(Var0, &uVar4))
		{
			TELEMETRY::_TELEMETRY_COUPON(&uVar4, func_150(Var0.f_2), Var0.f_2, Var0.f_1, Var0.f_3, 1.352589E+27f);
		}
		if (!func_151(iParam0, 0))
		{
		}
	}
	func_28(iParam0, 0, 1);
}

bool func_103(var uParam0)
{
	if (uParam0->f_1)
	{
		uParam0->f_1 = 0;
		return true;
	}
	return false;
}

void func_104(int* iParam0)
{
	if (!func_87(iParam0))
	{
		return;
	}
	DATABINDING::_VIRTUAL_COLLECTION_RESET(func_88(iParam0));
}

void func_105(int* iParam0)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	struct<13> Var16;
	struct<13> Var63;
	int iVar110;
	int iVar111;
	int iVar112;

	iVar0 = func_55(iParam0);
	iVar1 = func_48(iParam0);
	Var2.f_9 = -5.45926E-19f;
	Var16 = 1;
	Var16.f_1 = 1;
	Var16.f_2 = 27.64779f;
	Var16.f_4 = -1;
	Var16.f_5 = -1;
	Var16.f_6 = -1;
	Var16.f_10 = -1;
	Var16.f_11 = -1;
	Var16.f_12 = -1;
	Var63 = 1;
	Var63.f_1 = 1;
	Var63.f_2 = 27.64779f;
	Var63.f_4 = -1;
	Var63.f_5 = -1;
	Var63.f_6 = -1;
	Var63.f_10 = -1;
	Var63.f_11 = -1;
	Var63.f_12 = -1;
	iVar112 = 0;
	while (iVar112 < iVar1)
	{
		iVar110 = func_91(func_49(iParam0), iVar0, iVar112);
		if (!func_26(iParam0, iVar112, &iVar111))
		{
		}
		else if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar111))
		{
		}
		else if (!func_92(iParam0, iVar110, &Var2))
		{
		}
		else
		{
			MISC::COPY_SCRIPT_STRUCT(&Var16, &Var63, 47);
			if (!func_93(&Var2, &Var16))
			{
			}
			else if (!func_152(&iVar111, &Var16))
			{
			}
		}
		iVar112++;
	}
}

void func_106(int* iParam0)
{
	struct<36> Var0;

	func_153(&Var0);
	func_154(iParam0, MISC::VAR_STRING(2, &Var0));
	func_155(iParam0, MISC::GET_HASH_KEY(&(Var0.f_16)));
	func_156(iParam0, 0);
	func_157(iParam0, 0);
	func_158(iParam0, 0);
	func_159(iParam0, Var0.f_34, Var0.f_35);
}

int func_107(int iParam0)
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

void func_108(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_160(iParam0, iParam1, iParam2, iParam3);
}

bool func_109(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_110(bool bParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_161(bParam0));
}

void func_111(bool bParam0)
{
	UNLOCK::_UNLOCK_SET_NEW(func_161(bParam0), false);
}

int func_112(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam1))
	{
		return 0;
	}
	func_154(uParam0, DATABINDING::_0x6329C34BEE5BFF4B(*uParam1, -1.33346E+30f));
	func_155(uParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 1.335591E+32f));
	func_156(uParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -5.959404E-32f));
	func_157(uParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, -1.612291E+34f));
	func_158(uParam0, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT_BY_HASH(*uParam1, 4.126364E+16f));
	func_159(uParam0, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 3.859434E-23f), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*uParam1, 0.6123784f));
	return 1;
}

bool func_113(var uParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -2.131827E+25f);
	uParam1->f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -3.170487E+19f);
	uParam1->f_2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -184.773f);
	uParam1->f_3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT_BY_HASH(*uParam0, -6.014027E-08f);
	return true;
}

bool func_114(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_162(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_115(bool bParam0, var uParam1)
{
	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	TELEMETRY::_TELEMETRY_HUB_OFFERS(bParam0, *uParam1);
	return 1;
}

int func_116(var uParam0, bool bParam1)
{
	if (!func_109(bParam1, 0))
	{
		return 0;
	}
	if (!func_110(bParam1))
	{
		return 1;
	}
	*uParam0 = bParam1;
	return 1;
}

bool func_117(var uParam0)
{
	if (!func_84(uParam0))
	{
		return false;
	}
	return func_163(uParam0);
}

char* func_118(int iParam0)
{
	char* sVar0;

	sVar0 = func_164(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return "";
	}
	return MISC::VAR_STRING(2, sVar0);
}

bool func_119(struct<4> Param0)
{
	if (!func_84(&Param0))
	{
		return false;
	}
	if (func_163(&Param0))
	{
		return false;
	}
	return func_166(func_165(Param0));
}

char* func_120(struct<4> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;

	if (!func_84(&Param0))
	{
		return "";
	}
	if (func_165(Param0) <= 0)
	{
		return "";
	}
	vVar0 = { func_167(func_165(Param0), 1) };
	vVar3 = { func_168(func_165(Param0), 1) };
	vVar6 = { func_169(func_165(Param0)) };
	return MISC::VAR_STRING(170, func_164(2), &vVar0, &vVar3, &vVar6);
}

void func_121(int* iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2[4], bParam1);
}

void func_122(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2[3], sParam1);
}

bool func_123(bool bParam0)
{
	bool bVar0;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (!func_130(bParam0))
	{
		return false;
	}
	if (!func_170(bParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_MYSTERY")))
	{
		return false;
	}
	bVar0 = func_171(bParam0, 1);
	if (bVar0 != 0)
	{
		return false;
	}
	return true;
}

void func_124(bool bParam0)
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

bool func_125(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_172(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_126()
{
	return func_173(4);
}

void func_127(bool bParam0)
{
	if (bParam0)
	{
		func_128(4);
	}
	else
	{
		func_174(4);
	}
}

void func_128(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 || iParam0);
}

void func_129(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_130(bool bParam0)
{
	return func_175(bParam0) == 4.029065E+31f;
}

bool func_131(bool bParam0)
{
	bool bVar0;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (!func_130(bParam0))
	{
		return false;
	}
	if (func_123(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_ITEMDATABASE_DOES_ITEM_HAVE_TAG(bParam0, 6.754876E-06f, -2.154552E+33f))
	{
		bVar0 = func_171(bParam0, 1);
		if (!func_176(bVar0))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_132(var uParam0, bool bParam1)
{
	bool bVar0;
	struct<4> Var1;
	struct<2> Var5;

	if (!func_109(bParam1, 0))
	{
		return false;
	}
	if (!func_130(bParam1))
	{
		return false;
	}
	bVar0 = func_171(bParam1, 1);
	if (!ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bVar0))
	{
		return false;
	}
	if (!func_176(bVar0))
	{
		return false;
	}
	if (func_177(bVar0))
	{
		return false;
	}
	Var5 = -1;
	Var5.f_1 = -1;
	if (!func_179(&Var5, bVar0, 1, 1, 0, 0, func_178(bVar0, 0, 1, -1, 1), -1, 0))
	{
		return false;
	}
	if (!func_180(&(uParam0->f_19), Var5, -8.667224E-32f, bParam1))
	{
		return false;
	}
	Var1 = Var5;
	Var1.f_2 = bParam1;
	Var1.f_1 = func_181(bParam1);
	Var1.f_3 = func_182(bParam1);
	TELEMETRY::_TELEMETRY_SET_SHOP_FOR_TRANSACTION(Var5, 1.352589E+27f, 1.352589E+27f);
	if (!func_183(&Var5))
	{
		return false;
	}
	func_184(uParam0, &Var1);
	return true;
}

int func_133(bool bParam0)
{
	var uVar0[20];

	if (ITEMDATABASE::_0x8870895BA5ED9385(bParam0, -2.154552E+33f, &uVar0) > 0)
	{
		return uVar0[0];
	}
	return 0;
}

bool func_134(int* iParam0, int iParam1)
{
	if (!func_45(iParam0))
	{
		return false;
	}
	if (iParam1 < 0)
	{
		return false;
	}
	if (iParam1 >= func_55(iParam0))
	{
		return false;
	}
	return true;
}

bool func_135(bool bParam0)
{
	return func_175(bParam0) == -1.955052E+34f;
}

bool func_136(var uParam0, var uParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	if (!func_185(uParam0, &bVar0))
	{
		return false;
	}
	if (!func_186(uParam0, uParam1))
	{
		return false;
	}
	bVar1 = func_187(bVar0);
	if (bVar1)
	{
		if (!func_188(bVar0, &(uParam1->f_23)))
		{
		}
	}
	uParam1->f_22 = MISC::GET_HASH_KEY(func_189(&bVar0));
	bVar2 = (func_190(&bVar0) && !bVar1);
	if (bVar2)
	{
		uParam1->f_5 = -2.121455E+18f;
	}
	else
	{
		uParam1->f_5 = 1.248115E-13f;
	}
	if (bVar2)
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = uParam1->f_24;
		StringCopy(&(uParam1->f_27), func_118(3), 128);
	}
	return true;
}

bool func_137(var uParam0, var uParam1)
{
	bool bVar0;
	struct<36> Var1;

	if (!func_185(uParam0, &bVar0))
	{
		return false;
	}
	if (!func_186(uParam0, uParam1))
	{
		return false;
	}
	if (func_191(bVar0))
	{
		if (!func_188(bVar0, &(uParam1->f_23)))
		{
		}
	}
	if (func_123(bVar0))
	{
		uParam1->f_5 = -8.614046E-19f;
	}
	else if (!func_131(bVar0))
	{
		uParam1->f_5 = -1.642583E+10f;
	}
	else if (func_192(bVar0))
	{
		uParam1->f_5 = 1.356246E-14f;
	}
	else
	{
		uParam1->f_5 = -8.667224E-32f;
	}
	uParam1->f_22 = MISC::GET_HASH_KEY(func_193(&bVar0));
	if (func_123(bVar0))
	{
		func_194(&Var1);
		uParam1->f_20 = MISC::VAR_STRING(2, &Var1);
		uParam1->f_21 = MISC::GET_HASH_KEY(&(Var1.f_16));
		uParam1->f_16 = Var1.f_32;
		uParam1->f_17 = Var1.f_33;
		uParam1->f_18 = Var1.f_34;
		uParam1->f_19 = Var1.f_35;
		uParam1->f_22 = 0;
	}
	if (!uParam1->f_24)
	{
	}
	else if (func_191(bVar0))
	{
	}
	else if (!func_131(bVar0))
	{
	}
	else
	{
		uParam1->f_8 = 1;
	}
	if (func_131(bVar0))
	{
		if (!func_195(bVar0))
		{
			uParam1->f_9 = 1;
			uParam1->f_8 = 0;
			StringCopy(&(uParam1->f_27), func_118(5), 128);
		}
		else
		{
			uParam1->f_9 = 1;
			StringCopy(&(uParam1->f_27), func_118(4), 128);
		}
	}
	else if (func_190(&bVar0))
	{
		uParam1->f_9 = 1;
		uParam1->f_8 = 1;
		StringCopy(&(uParam1->f_27), func_118(3), 128);
	}
	return true;
}

void func_138(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_196(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_196(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_196(70), Param10.f_15);
}

bool func_139()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 1.694023E-10f) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, 1.694023E-10f))
	{
		return false;
	}
	return Global_1960810.f_6;
}

void func_140(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_3 = 0;
	uParam0->f_5 = -1;
	uParam0->f_2 = 5.779137E+29f;
}

void func_141(int iParam0, bool bParam1)
{
	if (func_139())
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

bool func_142(var uParam0)
{
	return func_197(*uParam0, 1);
}

void func_143(var uParam0, bool bParam1)
{
	if (bParam1 || !func_142(uParam0))
	{
		func_145(uParam0);
	}
}

int func_144(var uParam0)
{
	if (!func_142(uParam0))
	{
		return 0;
	}
	if (func_198(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_199() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

void func_145(var uParam0)
{
	func_200(uParam0, 0f);
}

bool func_146(var uParam0, var uParam1)
{
	if (*uParam0 && func_33(uParam1))
	{
		return false;
	}
	return *uParam0;
}

int func_147(var uParam0)
{
	return uParam0->f_18.f_1;
}

void func_148(var uParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(uParam0->f_40), 4);
}

bool func_149(int iParam0, var uParam1)
{
	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(iParam0, uParam1))
	{
		return true;
	}
	return false;
}

float func_150(bool bParam0)
{
	return func_201(bParam0);
}

bool func_151(var uParam0, int iParam1)
{
	char[] cVar0[8];
	char[] cVar16[8];

	if (!func_202(iParam1, &cVar0, &cVar16))
	{
		return false;
	}
	if (!func_203(&(uParam0->f_48), &cVar16, &cVar0))
	{
		return false;
	}
	return true;
}

bool func_152(int iParam0, var uParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*iParam0))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*iParam0, func_196(0), *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*iParam0, func_196(1), uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*iParam0, func_196(2), uParam1->f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*iParam0, func_196(57), uParam1->f_3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*iParam0, func_196(60), uParam1->f_5);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*iParam0, func_196(59), uParam1->f_6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(*iParam0, func_196(58), uParam1->f_4);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(*iParam0, -6.6457E-35f, &(uParam1->f_27));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*iParam0, func_196(63), uParam1->f_8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(*iParam0, func_196(64), uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, 3.859434E-23f, uParam1->f_16);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, 0.6123784f, uParam1->f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, NaNf, uParam1->f_18);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, -3.796351E+19f, uParam1->f_19);
	DATABINDING::_DATABINDING_WRITE_STRING_FROM_HASH(*iParam0, -1.33346E+30f, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, 1.335591E+32f, uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, -5.959404E-32f, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT_BY_HASH(*iParam0, -1.612291E+34f, uParam1->f_23);
	DATABINDING::_0xBFC83DA249BEFCC9(*iParam0, 4.126364E+16f, uParam1->f_24);
	DATABINDING::_0xBFC83DA249BEFCC9(*iParam0, 0.03507012f, uParam1->f_25);
	DATABINDING::_0xBFC83DA249BEFCC9(*iParam0, 1.567252E-17f, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*iParam0, -2.131827E+25f, uParam1->f_43);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*iParam0, -3.170487E+19f, uParam1->f_43.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*iParam0, -184.773f, uParam1->f_43.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT_BY_HASH(*iParam0, -6.014027E-08f, uParam1->f_43.f_3);
	return true;
}

void func_153(char* sParam0)
{
	StringCopy(sParam0, "COUPON_OFFER_NO_VALUE", 128);
	StringCopy(&(sParam0->f_16), "COUPON_OFFER_NO_VALUE_DESC", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("COUPON_OFFER_NO_VALUE");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

void func_154(int* iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(iParam0->f_2[8], sParam1);
}

void func_155(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(iParam0->f_2[9], iParam1);
}

void func_156(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(iParam0->f_2[10], iParam1);
}

void func_157(int* iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(iParam0->f_2[11], iParam1);
}

void func_158(int* iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iParam0->f_2[7], bParam1);
}

void func_159(int* iParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(iParam0->f_2[5], iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(iParam0->f_2[6], iParam2);
}

void func_160(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_204(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

bool func_161(bool bParam0)
{
	return bParam0;
}

int func_162(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_205(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_163(var uParam0)
{
	if (!func_84(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

char* func_164(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HO_TOOLTIP_REWARD_EXPIRED";
		case 1:
			return "HO_TOOLTIP_OFFER_EXPIRED";
		case 2:
			return "HO_TOOLTIP_OFFER_AVAILABLE_DATE";
		case 3:
			return "HO_PROMPT_BROWSE_CATALOGUE";
		case 4:
			return "HO_PROMPT_REDEEM";
		case 5:
			return "HO_PROMPT_OWNED";
		case 6:
			return "HO_TOOLTIP_OFFER_FOR_HORSES";
		case 7:
			return "HO_ITEM_MYSTERY_REWARD_NAME";
		case 8:
			return "HO_ITEM_MYSTERY_REWARD_DESCRIPTION";
		case 9:
			return "HO_TOOLTIP_ITEM_MYSTERY_REWARD_NOT_REVEALED";
		default:
			break;
	}
	return "";
}

int func_165(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_84(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

bool func_166(int iParam0)
{
	if (iParam0 <= 0)
	{
		return false;
	}
	return (NETWORK::GET_CLOUD_TIME_AS_INT() + func_206()) > iParam0;
}

Vector3 func_167(int iParam0, bool bParam1)
{
	vector3 vVar0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &vVar0);
	if (bParam1)
	{
		StringCopy(&cVar6, "SR_DAY_", 24);
		StringIntConCat(&cVar6, vVar0.z, 24);
		StringCopy(&cVar6, MISC::VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_207(vVar0.z), 24);
	return cVar6;
}

Vector3 func_168(int iParam0, bool bParam1)
{
	struct<2> Var0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &Var0);
	if (bParam1)
	{
		StringCopy(&cVar6, "MONTH_", 24);
		StringIntConCat(&cVar6, Var0.f_1, 24);
		StringCopy(&cVar6, MISC::VAR_STRING(2, &cVar6), 24);
		return cVar6;
	}
	StringCopy(&cVar6, func_207(Var0.f_1), 24);
	return cVar6;
}

Vector3 func_169(int iParam0)
{
	int iVar0;
	vector3 vVar6[24];

	NETWORK::CONVERT_POSIX_TIME(iParam0, &iVar0);
	StringCopy(&cVar6, func_207(iVar0), 24);
	return cVar6;
}

bool func_170(bool bParam0, int iParam1)
{
	if (!func_109(bParam0, 0))
	{
		return func_209(func_208(bParam0), iParam1);
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

bool func_171(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_109(bParam0, 0))
	{
		return func_210(func_208(bParam0), bParam1);
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

void func_172(int iParam0)
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

bool func_173(int iParam0)
{
	return (Global_1051832.f_3648 && iParam0) != 0;
}

void func_174(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 - (Global_1051832.f_3648 && iParam0));
}

int func_175(bool bParam0)
{
	struct<2> Var0;

	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_176(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_177(bool bParam0)
{
	int iVar0;

	if (!func_211(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_1292096.f_2012)
	{
		if (Global_1292096.f_2012.f_1[iVar0 /*24*/].f_4 == bParam0 && Global_1292096.f_2012.f_1[iVar0 /*24*/].f_5 == 0)
		{
			return NETWORK::_0xE10F2D7715ABABEC(&(Global_1292096.f_2012.f_1[iVar0 /*24*/]));
		}
		iVar0++;
	}
	return false;
}

int func_178(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_176(bParam0))
	{
		return 0;
	}
	bVar1 = func_212(iParam3, 2);
	bVar2 = func_213(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_213(bParam0, -982726.7f, bVar1);
	if (func_213(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_214(bParam0, &fVar0) || func_215(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_216())
		{
			iParam1 = -2.401104E+18f;
		}
		else
		{
			iParam1 = -982726.7f;
		}
	}
	else if (bVar3)
	{
		iParam1 = -982726.7f;
	}
	else if (func_217(15) && func_213(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

bool func_179(int* iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<18> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_9 = iParam2;
	Var0.f_10 = iParam3;
	Var0.f_14 = iParam5;
	if (!func_218(iParam0, bParam1, &Var0, iParam4, iParam6, iParam7, bParam8))
	{
		return false;
	}
	func_219(Var0);
	return true;
}

bool func_180(var uParam0, int iParam1, float fParam2, bool bParam3)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return false;
	}
	iVar0 = 4;
	while (iVar0 >= 1)
	{
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_2[iVar0 /*3*/]), &(uParam0->f_2[(iVar0 - 1) /*3*/]), 3);
		iVar0 = (iVar0 + -1);
	}
	uParam0->f_2[0 /*3*/] = iParam1;
	uParam0->f_2[0 /*3*/].f_1 = fParam2;
	uParam0->f_2[0 /*3*/].f_2 = bParam3;
	return true;
}

int func_181(bool bParam0)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	iVar0 = -1;
	if (!func_220(bParam0))
	{
		return iVar0;
	}
	iVar0 = 2.799884E-36f;
	Var1 = { func_221(bParam0, 0, 0) };
	Var6 = { func_222(bParam0, Var1, Var1.f_4, 0) };
	if (!func_84(&Var6))
	{
		return -1;
	}
	if (func_119(Var6))
	{
		iVar0 = 1.074468E-35f;
	}
	return iVar0;
}

int func_182(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	var uVar3;

	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	bVar0 = func_171(bParam0, 0);
	bVar1 = bVar0;
	if (bVar1 != 0)
	{
		iVar2 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(bVar1);
		if (iVar2 > 0)
		{
			if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(bVar0, 0, &uVar3))
			{
				return uVar3;
			}
		}
	}
	return 0;
}

bool func_183(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_108(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_108(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_108(*iParam0, 2, 0, 0);
		return false;
	}
	func_108(*iParam0, 1, 0, 0);
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

void func_184(var uParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_40), bParam1, 4);
}

bool func_185(var uParam0, var uParam1)
{
	struct<10> Var0;

	*uParam1 = 0;
	if (!func_84(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_114(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_109(Var0.f_4, 0))
	{
		return false;
	}
	if (!func_220(Var0.f_4))
	{
		return false;
	}
	*uParam1 = Var0.f_4;
	return true;
}

bool func_186(var uParam0, var uParam1)
{
	bool bVar0;
	struct<733> Var1;
	int iVar768;

	if (!func_185(uParam0, &bVar0))
	{
		return false;
	}
	uParam1->f_4 = -1.186373E+38f;
	uParam1->f_43 = { *uParam0 };
	if (func_117(uParam0))
	{
		uParam1->f_24 = 0;
	}
	else
	{
		uParam1->f_24 = 1;
		if (func_223(uParam0))
		{
			uParam1->f_25 = 1;
		}
		else if (func_119(*uParam0))
		{
			uParam1->f_26 = 1;
		}
	}
	uParam1->f_20 = func_224(&bVar0);
	uParam1->f_21 = func_225(bVar0);
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
	if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_BY_NAME(bVar0, &Var1))
	{
		iVar768 = 0;
		while (iVar768 < 5)
		{
			switch (Var1.f_732.f_2[iVar768 /*3*/].f_2)
			{
				case -774197843:
					func_226(&(Var1.f_732.f_2[iVar768 /*3*/]), &(uParam1->f_17), &(uParam1->f_16), 1);
					func_226(&(Var1.f_732.f_2[iVar768 /*3*/]), &(uParam1->f_19), &(uParam1->f_18), 1);
					break;
			}
			iVar768++;
		}
	}
	return true;
}

int func_187(bool bParam0)
{
	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	if (func_227(bParam0) != 0 && !func_228(bParam0))
	{
		return 1;
	}
	return 0;
}

bool func_188(bool bParam0, var uParam1)
{
	int iVar0;

	if (!func_191(bParam0))
	{
		return false;
	}
	iVar0 = func_229(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	*uParam1 = iVar0;
	return true;
}

char* func_189(bool bParam0)
{
	char* sVar0;
	int iVar1;
	var uVar2[5];
	int iVar8;
	int iVar9;

	if (!func_109(*bParam0, 0))
	{
		return "";
	}
	if (!func_135(*bParam0))
	{
		return "";
	}
	sVar0 = "";
	iVar1 = 0;
	iVar8 = ITEMDATABASE::_0x8870895BA5ED9385(*bParam0, 104.1169f, &uVar2);
	iVar9 = 0;
	while (iVar9 < iVar8)
	{
		iVar1 = uVar2[iVar9];
		if (iVar1 == 0)
		{
		}
		else
		{
			sVar0 = func_230(iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
			}
			else
			{
				iVar9++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return "";
			}
			return sVar0;
		}
	}
}

bool func_190(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_109(*bParam0, 0))
	{
		return false;
	}
	if (func_130(*bParam0) && func_123(*bParam0))
	{
		return false;
	}
	iVar1 = func_231();
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (func_170(*bParam0, func_232(iVar0)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_191(bool bParam0)
{
	bool bVar0;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (func_227(bParam0) != 0 && !func_228(bParam0))
	{
		return true;
	}
	if (func_123(bParam0))
	{
		return false;
	}
	bVar0 = func_171(bParam0, 1);
	if (!func_176(bVar0))
	{
		return false;
	}
	if (!func_233(bVar0, 1.50231E-31f))
	{
		return false;
	}
	return true;
}

bool func_192(bool bParam0)
{
	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (!func_170(bParam0, MISC::GET_HASH_KEY("CI_TAG_OFFER_SEASON_PASS")))
	{
		return false;
	}
	return true;
}

char* func_193(bool bParam0)
{
	char* sVar0;
	int iVar1;
	var uVar2[5];
	int iVar8;
	int iVar9;

	if (!func_109(*bParam0, 0))
	{
		return "";
	}
	if (!func_130(*bParam0))
	{
		return "";
	}
	sVar0 = "";
	iVar1 = 0;
	iVar8 = ITEMDATABASE::_0x8870895BA5ED9385(*bParam0, 104.1169f, &uVar2);
	iVar9 = 0;
	while (iVar9 < iVar8)
	{
		iVar1 = uVar2[iVar9];
		if (iVar1 == 0)
		{
		}
		else
		{
			sVar0 = func_234(iVar1);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
			}
			else
			{
				iVar9++;
			}
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return "";
			}
			return sVar0;
		}
	}
}

void func_194(char* sParam0)
{
	StringCopy(sParam0, "HO_ITEM_MYSTERY_REWARD_NAME", 128);
	StringCopy(&(sParam0->f_16), "HO_ITEM_MYSTERY_REWARD_DESCRIPTION", 128);
	sParam0->f_34 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_35 = MISC::GET_HASH_KEY("mp_hub_coupons");
	sParam0->f_32 = MISC::GET_HASH_KEY("VOUCHER_MYSTERY");
	sParam0->f_33 = MISC::GET_HASH_KEY("mp_hub_coupons");
}

bool func_195(bool bParam0)
{
	bool bVar0;

	bVar0 = func_235(bParam0);
	if (!func_109(bVar0, 0))
	{
		return true;
	}
	if (func_236(bVar0, 1))
	{
		return false;
	}
	return true;
}

char* func_196(int iParam0)
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

bool func_197(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_198(var uParam0)
{
	return func_197(*uParam0, 2);
}

int func_199()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

void func_200(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_64() - fParam1);
	func_237(uParam0, 1);
	func_238(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_201(bool bParam0)
{
	if (!func_220(bParam0))
	{
		return 0;
	}
	if (func_135(bParam0))
	{
		return -4.07217E-32f;
	}
	if (func_170(bParam0, -3.639815E-14f))
	{
		return -6.335257E+35f;
	}
	if (func_170(bParam0, -3.567722E+12f))
	{
		return -5.414914E+13f;
	}
	if (func_170(bParam0, 2.768968E+15f))
	{
		return 5.15176E-06f;
	}
	if (func_170(bParam0, 5.250853E+36f))
	{
		return -1.128444E-20f;
	}
	return 1.335924E-32f;
}

bool func_202(int iParam0, char* sParam1, char* sParam2)
{
	switch (iParam0)
	{
		case 0:
			StringCopy(sParam1, "RDRO_Offer_Menu_Sounds", 128);
			StringCopy(sParam2, "offer_redeem", 128);
			return true;
		default:
			break;
	}
	return false;
}

bool func_203(int* iParam0, char* sParam1, char* sParam2)
{
	if (!func_41(*iParam0, 0))
	{
		return false;
	}
	if (func_41(*iParam0, 1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		return false;
	}
	func_21(iParam0, 1);
	StringCopy(&(iParam0->f_1), sParam2, 128);
	StringCopy(&(iParam0->f_17), sParam1, 128);
	AUDIO::_STOP_SOUND_WITH_NAME(&(iParam0->f_17), &(iParam0->f_1));
	return true;
}

void func_204(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_239(&(uParam0->f_4));
}

int func_205(bool bParam0)
{
	if (func_240() == -1)
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

int func_206()
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

char* func_207(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

bool func_208(bool bParam0)
{
	return bParam0;
}

int func_209(bool bParam0, int iParam1)
{
	if (!func_241(bParam0, 2))
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

bool func_210(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_241(bParam0, 2))
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

bool func_211(bool bParam0)
{
	return bParam0 != 0;
}

bool func_212(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_213(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_176(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_233(bParam0, iParam1);
	}
	return true;
}

bool func_214(bool bParam0, float fParam1)
{
	*fParam1 = func_242(bParam0, 1);
	return *fParam1 != 0;
}

bool func_215(bool bParam0, float fParam1)
{
	*fParam1 = func_243(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_216()
{
	return Global_1915643.f_22477;
}

bool func_217(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_244(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_218(int* iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (!func_245(iParam0, 0))
	{
		return false;
	}
	if (iParam4 == 0)
	{
		iParam4 = func_178(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_246(bParam1, iParam4, iParam5))
	{
		return false;
	}
	uParam2->f_17 = bParam1;
	uParam2->f_8 = bParam1;
	uParam2->f_9 = 1;
	uParam2->f_13 = iParam4;
	uParam2->f_12 = 3787186f;
	if (!func_247(iParam0, *uParam2, 1.704487E-19f, iParam3))
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

void func_219(struct<18> Param0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Param0.f_17;
	iVar1 = Param0.f_13;
	if (func_248(bVar0, 3.414007E-11f, iVar1, 0, 1) > 0)
	{
		func_249("gold_spend", "Gold_Spend_Sounds", 1);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("PURCHASE", "HUD_SHOP_SOUNDSET", true, 0);
	}
}

bool func_220(bool bParam0)
{
	if (func_175(bParam0) == -1.955052E+34f || func_175(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

struct<5> func_221(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_250(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_251(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_222(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_252(bParam1) };
			if (iParam2 && func_253(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_254(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_254(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_255(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_256(bParam1) };
			switch (func_175(bParam0))
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
			if (func_257(bParam0, -2.580501E-27f))
			{
				Var0 = { func_222(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_257(bParam0, -4.220332E-15f))
			{
				Var0 = { func_222(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_222(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_257(bParam0, -3.171238E-21f))
			{
				Var0 = { func_222(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_114(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_257(bParam0, -3.171238E-21f))
			{
				Var0 = { func_222(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_222(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_109(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_205(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_223(var uParam0)
{
	struct<10> Var0;

	if (!func_84(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_114(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_109(Var0.f_4, 0))
	{
		return false;
	}
	return func_110(Var0.f_4);
}

char* func_224(var uParam0)
{
	char cVar0[128];
	int iVar16;
	char cVar17[128];

	if (!func_109(*uParam0, 0))
	{
		return "";
	}
	if (!func_220(*uParam0))
	{
		return "";
	}
	StringCopy(&cVar0, func_258(*uParam0), 128);
	iVar16 = func_259(*uParam0);
	if (iVar16 != 0)
	{
		StringCopy(&cVar17, HUD::GET_STRING_FROM_HASH_KEY(iVar16), 128);
		return MISC::VAR_STRING(42, "HO_COMBINE_ITEM_NAME", &cVar17, &cVar0);
	}
	return func_260(cVar0);
}

int func_225(bool bParam0)
{
	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

int func_226(var uParam0, var uParam1, var uParam2, bool bParam3)
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

int func_227(bool bParam0)
{
	if (func_170(bParam0, 8.438446E+19f))
	{
		return -0.002580328f;
	}
	else if (func_170(bParam0, -1.752115E+36f))
	{
		return -2.044008E-20f;
	}
	else if (func_170(bParam0, 2.254309E+08f))
	{
		return 1.217195E+18f;
	}
	else if (func_170(bParam0, -1.132494E-05f))
	{
		return -1.252878E-37f;
	}
	else if (func_170(bParam0, 1.542766E-22f))
	{
		return -0.002971241f;
	}
	else if (func_170(bParam0, 2.405528E+17f))
	{
		return 0.01404763f;
	}
	return 0;
}

bool func_228(bool bParam0)
{
	int iVar0;

	iVar0 = func_227(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return UNLOCK::UNLOCK_IS_VISIBLE(iVar0);
}

int func_229(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_109(bParam0, 0))
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
			if (Var0.f_18[iVar35 /*2*/].f_1 == 7.69132E+20f)
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

char* func_230(int iParam0)
{
	struct<4> Var0;
	struct<16> Var5;

	Var0 = func_261();
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_260(Var5);
}

int func_231()
{
	vector3 vVar0;

	vVar0.x = func_261();
	vVar0.f_2 = 6;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&vVar0);
}

int func_232(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_261();
	Var0.f_2 = 7;
	Var0.f_3 = iParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

bool func_233(bool bParam0, int iParam1)
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

char* func_234(int iParam0)
{
	struct<4> Var0;
	struct<16> Var5;

	Var0 = func_261();
	Var0.f_2 = 5;
	Var0.f_3 = iParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_260(Var5);
}

int func_235(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("VOUCHER_OFFER_TREASURE_MAP_BLUEWATER_MARSH_FREE"):
			return 2.721793E+22f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_BURNED_TOWN_FREE"):
			return 0.1900344f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_CALUMET_RAVINE_FREE"):
			return 1.567028E+24f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_CITADEL_ROCK_FREE"):
			return -2.558485E-26f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_CIVIL_WAR_BATTLEFIELD_FREE"):
			return 7.094312E+22f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_LAKE_ISABELLA_FREE"):
			return 1.015491E-16f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_NORTH_CLINGMAN_FREE"):
			return -3.727029E-35f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_NORTH_RIDGEWOOD_FREE"):
			return -1.298499E-21f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_NORTH_TUMBLEWEED_FREE"):
			return 1.431394E-06f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_OCREAGHS_RUN_FREE"):
			return -4.15561E+22f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_SAN_LUIS_SHORE_FREE"):
			return -1.037371E-05f;
		case joaat("VOUCHER_OFFER_TREASURE_MAP_WEST_HILL_HAVEN_FREE"):
			return -5.309441E-21f;
		default:
			break;
	}
	return 0;
}

bool func_236(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_251(bParam0);
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
			if (!func_262(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_263(bParam0))
			{
				return true;
			}
			break;
	}
	return func_264(bParam0, 0, 0, 0) >= iParam1;
}

void func_237(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_238(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_239(var uParam0)
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

int func_240()
{
	return Global_1572887.f_14;
}

bool func_241(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_242(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_265(iVar0, 1, 0);
		if (!func_266(bParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_130(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_264(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_243(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_265(iVar0, 0, 1);
		if (!func_266(bParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_135(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_264(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

bool func_244(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_245(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_267(iParam0))
		{
			return false;
		}
	}
	if (func_268(&(iParam0->f_6)))
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

int func_246(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_213(bParam0, iParam1, 0))
	{
		return 0;
	}
	if (func_212(iParam2, 2))
	{
		if (func_233(bParam0, iParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_212(iParam2, 8))
	{
		return func_269(bParam0, iParam1);
	}
	return 1;
}

bool func_247(int* iParam0, struct<18> Param1, int iParam19, bool bParam20)
{
	if (iParam19 != 1.704487E-19f)
	{
		return false;
	}
	if (!func_270(Param1))
	{
		return false;
	}
	if (!func_271(iParam0, iParam19))
	{
		return false;
	}
	if (func_272(*iParam0, iParam19, &Param1))
	{
	}
	else
	{
		return false;
	}
	return func_273(iParam0, bParam20);
}

int func_248(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_266(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

void func_249(char* sParam0, char* sParam1, bool bParam2)
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

struct<4> func_250(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_205(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_222(2.982335E+09f, func_274(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_222(2.982335E+09f, func_274(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_222(2.982335E+09f, func_274(), -5.45926E-19f, bParam0);
}

int func_251(bool bParam0)
{
	vector3 vVar0;

	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

struct<4> func_252(bool bParam0)
{
	int iVar0;

	iVar0 = func_205(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_222(8.681942E-06f, func_250(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_222(8.681942E-06f, func_250(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_222(8.681942E-06f, func_250(bParam0), -1.942248E+12f, 0);
}

int func_253(bool bParam0, bool bParam1)
{
	if (func_175(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_275();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_254(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_276(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_255(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_277(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_256(bool bParam0)
{
	int iVar0;

	iVar0 = func_205(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_222(3.507197E-29f, func_250(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_222(3.507197E-29f, func_250(bParam0), 12999093, 0);
}

bool func_257(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_175(bParam0);
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
			if (func_278(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

char* func_258(bool bParam0)
{
	bool bVar0;

	if (!func_109(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_279(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

int func_259(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_109(bParam0, 0))
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

char* func_260(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

var func_261()
{
	return Global_1072759.f_28418[55 /*4*/].f_3;
}

bool func_262(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_280(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_281("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_282(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_283(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_284(iVar1);
				return true;
			}
			iVar3++;
		}
		func_284(iVar1);
	}
	return false;
}

bool func_263(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_175(bParam0);
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
	iVar1 = func_285(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_286(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_287(bParam0);
	iVar2 = func_286(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_264(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_251(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_280(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_288(bParam0, 0);
	}
	if (func_289(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_290(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_265(int iParam0, bool bParam1, bool bParam2)
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

bool func_266(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_176(bParam0))
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
		func_291(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_267(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_292(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_268(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_269(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (iParam1 == -2.401104E+18f)
	{
		iVar0 = func_293(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_294(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_296(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_295(iVar0)));
			}
			return 0;
		}
	}
	else if (iParam1 == -982726.7f)
	{
		iVar1 = func_293(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_297(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_296("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (iParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_298(bParam0, iParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_270(struct<18> Param0)
{
	if (!func_176(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_271(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_299(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_183(iParam0))
		{
			return false;
		}
		if (!func_299(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_272(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

bool func_273(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_183(iParam0);
	}
	return true;
}

struct<4> func_274()
{
	struct<4> Var0;

	return Var0;
}

int func_275()
{
	if (func_300(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_276(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_289(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_222(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_277(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_205(0);
	*iParam1 = { func_222(bParam0, func_252(0), fParam3, 0) };
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

bool func_278(bool bParam0, int iParam1, int iParam2)
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

bool func_279(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_301(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_280(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_109(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_251(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_170(bParam0, 9.811189E+11f))
	{
		func_302(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

bool func_281(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_205(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_282(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_283(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != -3.273909E-18f);
}

int func_284(int iParam0)
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

int func_285(bool bParam0)
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

int func_286(var uParam0, int iParam1)
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

int func_287(bool bParam0)
{
	int iVar0;

	iVar0 = func_175(bParam0);
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

int func_288(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_303(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_304(&Var0, func_252(0));
	}
	if (!func_305(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_284(iVar18);
	return iVar19;
}

int func_289(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_241(func_208(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_290(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_221(bParam0, bParam1, 0) };
	return func_222(bParam0, Var0, Var0.f_4, bParam1);
}

void func_291(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_175((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

int func_292(int* iParam0)
{
	return func_65(iParam0->f_1);
}

int func_293(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_266(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_294(int iParam0)
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

int func_295(int iParam0)
{
	return (iParam0 / 100);
}

void func_296(char* sParam0)
{
	Global_1915643.f_22470 = func_306(sParam0, 10000, 0, 0, 0, 1);
}

bool func_297(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_240() == 0)
	{
		return func_307(iParam0);
	}
	return iParam0 <= func_308();
}

bool func_298(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_266(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_297(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_294(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_309(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_310(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_264(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_299(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

int func_300(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_311(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_205(bParam1), iParam0, bParam3);
}

int func_301(bool bParam0, bool bParam1)
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

void func_302(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_303(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_304(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_305(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_205(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_306(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_307(int iParam0)
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

int func_308()
{
	if (func_240() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_309(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_170(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_310(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_109(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_250(0) };
	Var0.f_4 = func_312(iParam1);
	Var5 = { func_222(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_205(0), &Var5, false);
	return iVar9;
}

bool func_311(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

float func_312(int iParam0)
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

