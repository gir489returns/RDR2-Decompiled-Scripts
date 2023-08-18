#region Local Var
	struct<12> Local_0 = { 7, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0 } ;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	float fLocal_14 = 0f;
	float fLocal_15 = 0f;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	int iScriptParam_0 = 0;
#endregion

void __EntryFunction__()
{
	var uVar0;
	struct<4> Var1;
	bool bVar5;
	bool bVar6;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	func_1(&uVar0);
	func_2();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_3(&uVar0);
	}
	func_4(1);
	func_5();
	func_6();
	while (Global_1940072.f_80.f_4)
	{
		func_6();
		BUILTIN::WAIT(0);
	}
	func_7(1);
	bVar5 = PED::GET_PED_CROUCH_MOVEMENT(Global_33);
	bVar6 = func_8(2);
	while (true)
	{
		if (((PED::IS_PED_FALLING(Global_33) || PED::IS_PED_FALLING_OVER(Global_33)) || PLAYER::IS_PLAYER_BEING_ARRESTED(PLAYER::GET_PLAYER_INDEX(), true)) || PED::IS_PED_HOGTIED(Global_33))
		{
			func_9(0, 0);
		}
		HUD::_UI_PROMPT_ENABLE_PROMPT_TYPE_THIS_FRAME(0);
		if ((PED::GET_PED_CROUCH_MOVEMENT(Global_33) != bVar5 && !Global_1940239.f_7) && func_10(Global_1940239.f_11588, 512441.5f) != 0)
		{
			func_11(func_10(Global_1940239.f_11588, 512441.5f));
			bVar5 = !bVar5;
		}
		if (bVar6 && !func_12(Global_33))
		{
			func_5();
			func_4(1);
			func_6();
			bVar6 = false;
		}
		if (Global_1940239.f_5)
		{
			func_13();
			func_14();
			func_15(Global_1940239.f_11587);
			if (Global_1940239.f_37 != 0)
			{
				func_11(Global_1940239.f_37);
			}
			func_2();
			if (Global_1940239.f_11596 != 0 && !func_16())
			{
				if (func_17(Global_1940239.f_11588, 0))
				{
					func_18(Global_1940239.f_11596, &(Var1.f_3), 0);
				}
				else if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var1.f_3, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var1.f_3, "item"), 9.522126E+26f))
				{
					func_18(Global_1940239.f_11596, &(Var1.f_3), 1);
				}
				else
				{
					func_20(Global_1940239.f_36, &(Var1.f_3));
				}
			}
			Global_1940239.f_5 = 0;
			Global_1940239.f_37 = 0;
		}
		func_21();
		if (func_22(&(Var1.f_3)))
		{
			if (func_17(Global_1940239.f_11588, 0) || func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596), "label")))
			{
				func_18(Global_1940239.f_11596, &(Var1.f_3), 0);
			}
			else if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var1.f_3, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var1.f_3, "item"), 9.522126E+26f))
			{
				func_18(Global_1940239.f_11596, &(Var1.f_3), 1);
			}
			else
			{
				func_20(Global_1940239.f_36, &(Var1.f_3));
			}
			func_2();
			func_24(0);
			Global_1940239.f_7 = 0;
		}
		while (UIEVENTS::EVENTS_UI_IS_PENDING(iScriptParam_0))
		{
			if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(iScriptParam_0, &Var1))
			{
				Global_1940239.f_7 = 0;
				switch (Var1)
				{
					case -1740156697:
						Global_1940239.f_11596 = Var1.f_1;
						if (!func_16())
						{
							switch (Var1.f_2)
							{
								case -1287062382:
									func_25(Var1.f_1, &(Var1.f_3));
									break;
								case joaat("USABLE_ITEM"):
								case 1086195311:
									ATTRIBUTE::STOP_ITEM_PREVIEW();
									func_18(Var1.f_1, &(Var1.f_3), 0);
									break;
								case -1715238242:
									ATTRIBUTE::STOP_ITEM_PREVIEW();
									if (Global_1940239.f_11647 != 0)
									{
									}
									else
									{
										func_20(Var1.f_1, &(Var1.f_3));
									}
							}
						}
						else
						{
							func_2();
							ATTRIBUTE::STOP_ITEM_PREVIEW();
						}
						func_26();
						func_27(Var1.f_2);
						func_7(2);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case -722926211:
					case 703281244:
						func_28();
						func_2();
						ATTRIBUTE::STOP_ITEM_PREVIEW();
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case -1203660660:
						switch (Var1.f_2)
						{
							case joaat("USABLE_ITEM"):
							case -594808149:
							case 1086195311:
								if (func_29() || func_30())
								{
									if (func_31(Global_1940239.f_11588, 0, 0, 0, 1, 0, 0))
									{
										func_9(0, 0);
									}
								}
								else if (func_32())
								{
								}
								else if (!func_33(0))
								{
									func_34(&(Var1.f_3));
								}
								func_7(4);
								break;
							case -1193234750: /* GXTEntry: "Discard" */
								func_35(Global_1940239.f_11588, 1);
								break;
							case 301804921:
								if (func_33(0))
								{
									func_7(32);
								}
								else
								{
									func_36(Global_1940239.f_11588);
								}
								break;
							case 1329361007:
								func_7(64);
								break;
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case 922460030:
						func_7(16);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					case -2075827635:
						func_7(8);
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
					default:
						UIEVENTS::EVENTS_UI_POP_MESSAGE(iScriptParam_0);
						break;
				}
			}
		}
		BUILTIN::WAIT(0);
	}
	func_3(&uVar0);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

int func_1(var uParam0)
{
	if (func_37() == -1)
	{
		func_38();
	}
	Global_1913567[0 /*11*/] = 0;
	func_39(uParam0);
	return 1;
}

void func_2()
{
	if (func_16())
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		INVENTORY::_0x75CFAC49301E134F(Global_1940239.f_11627, false, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, func_40(Global_1940239.f_11587));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, func_41(Global_1940239.f_11587));
		func_42();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11636, false);
		if (func_33(0) || func_43())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, "");
		}
		if (func_44(29))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, HUD::GET_STRING_FROM_HASH_KEY(1.491312E-09f));
		}
		else
		{
			func_45(Global_1940239.f_11587);
		}
	}
}

void func_3(var uParam0)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940239.f_7 = 0;
	Global_1940239.f_41 = 0;
	Global_1940239.f_36 = -1;
	Global_1940239.f_37 = 0;
	Global_1940239.f_11592 = 0;
	Global_1940239.f_11591 = 0;
	func_46(1.890447E-09f);
	func_47(0);
	func_48(0);
	func_49(uParam0);
	if (!TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		func_50(0);
	}
	func_51(1);
	func_52();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_4(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	func_53();
	bVar0 = func_54(1);
	if (func_56(1, 13922) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(2);
	if (func_56(2, 14000) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(65536);
	if (func_56(65536, 14013) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(1048576);
	if (func_56(1048576, 14026) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = (func_54(4) || func_54(8));
	if (!func_60())
	{
		func_61(4);
		func_61(8);
		bVar0 = false;
	}
	else
	{
		bVar1 = false;
		bVar2 = false;
		if (func_62(5.002459E-36f) || func_63(4))
		{
			func_61(4);
		}
		else
		{
			bVar1 = true;
		}
		if (func_62(-9.847085E+19f) || func_63(8))
		{
			func_61(8);
		}
		else
		{
			bVar2 = true;
		}
		if (bVar1 || bVar2)
		{
			if (func_65(0, func_64()))
			{
				if (!bVar0)
				{
					Global_1940072.f_80.f_1 = 1;
				}
				if (bVar1)
				{
					func_66(4);
				}
				if (bVar2)
				{
					func_66(8);
				}
			}
			else
			{
				func_61(4);
				func_61(8);
				if (bVar0)
				{
					Global_1940072.f_80.f_1 = 1;
				}
			}
		}
	}
	bVar0 = func_54(16);
	if (func_56(16, 15224) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(256);
	if (func_56(256, 15237) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(512);
	if (func_56(512, 15250) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(2097152);
	if (func_56(2097152, 15263) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	bVar0 = func_54(1024);
	if (func_56(1024, 15276) != bVar0)
	{
		if (!Global_1940072.f_80.f_1)
		{
			Global_1940072.f_80.f_1 = 1;
		}
	}
	if (((((func_72() || func_73()) || func_74()) || func_75()) || func_76()) || bParam0)
	{
		bVar0 = func_54(8192);
		if (func_56(8192, 15371) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(64);
		if (func_56(64, 15384) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(131072);
		if (func_56(131072, 15384) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(32);
		if (func_56(32, 15397) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(128);
		if (func_56(128, 15410) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(262144);
		if (func_56(262144, 15423) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(2048);
		if (func_56(2048, 15436) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(32768);
		if (func_56(32768, 15449) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(4096);
		if (func_56(4096, 15462) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
		bVar0 = func_54(524288);
		if (func_56(524288, 15475) != bVar0)
		{
			if (!Global_1940072.f_80.f_1)
			{
				Global_1940072.f_80.f_1 = 1;
			}
		}
	}
	func_86();
}

void func_5()
{
	Global_1940072.f_80.f_4 = 0;
	Global_1940072.f_80 = 0;
}

void func_6()
{
	bool bVar0;

	if ((MISC::GET_FRAME_COUNT() % 3) == 0 || Global_1940072.f_80)
	{
		if (func_76() || (((func_72() || func_73()) || func_74()) || func_75()))
		{
			bVar0 = true;
		}
	}
	if (!Global_1940072.f_80.f_4 && !Global_1940072.f_80)
	{
		if (bVar0)
		{
			Global_1940072.f_80.f_4 = 1;
			Global_1940072.f_80 = 0;
			Global_1940072.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}
	if (Global_1940072.f_80.f_4 || Global_1940072.f_80)
	{
		if (!Global_1940072.f_80)
		{
			if (Global_1940072.f_80.f_4)
			{
				if (func_87())
				{
					Global_1940072.f_80.f_4 = 0;
					Global_1940072.f_80 = 1;
					if (Global_1940072.f_80.f_1)
					{
						func_88(1, 1, 0);
					}
					Global_1940072.f_80.f_1 = 0;
					Global_1940072.f_80.f_2 = 0;
					Global_1940072.f_80.f_3 = MISC::GET_FRAME_COUNT();
				}
			}
		}
		else if (!bVar0)
		{
			if (func_52())
			{
				Global_1940072.f_80 = 0;
				Global_1940072.f_80.f_1 = 0;
				Global_1940072.f_80.f_2 = 0;
			}
		}
		else
		{
			Global_1940072.f_80.f_3 = MISC::GET_FRAME_COUNT();
		}
	}
}

void func_7(int iParam0)
{
	Global_1940239.f_11561 = (Global_1940239.f_11561 || iParam0);
}

bool func_8(int iParam0)
{
	return func_89(Global_1940072.f_7, iParam0);
}

void func_9(bool bParam0, int iParam1)
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

int func_10(bool bParam0, int iParam1)
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

void func_11(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	Global_1940239.f_11595 = 0;
	func_91(&(Global_1940239.f_11578[func_90(Global_1940239.f_11587) /*2*/]), iParam0);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11614, Global_1940239.f_11595);
	func_92(Global_1940239.f_36);
	Global_1940239.f_11586 = iVar0;
}

bool func_12(int iParam0)
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

void func_13()
{
	int iVar0;
	int iVar1;
	bool bVar2;

	Global_1940239.f_11595 = 0;
	if (Global_1940239.f_11586 != -1)
	{
		iVar0 = Global_1940239.f_11586;
		func_91(&(Global_1940239.f_11578[func_90(Global_1940239.f_11587) /*2*/]), iVar0);
		DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11614, Global_1940239.f_11595);
	}
	iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("Satchel");
	bVar2 = Global_1940239.f_11595 <= false;
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar1, "FolderEmpty", bVar2);
}

bool func_14()
{
	if ((func_93() || func_95(Global_33, func_94(7), 1)) || (!(func_96(7) || func_97(7)) && func_33(0)))
	{
		return (func_98(0, -5.45926E-19f) && func_98(1, 5.960322E-13f));
	}
	return func_98(0, -5.45926E-19f);
}

void func_15(int iParam0)
{
	func_99(0);
	Global_1940239.f_11644 = iParam0;
}

bool func_16()
{
	return Global_1940239.f_41.f_203 <= 0;
}

bool func_17(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_18(int iParam0, int iParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	func_100(iParam2);
	if (func_22(iParam1))
	{
		func_24(0);
		if (Global_1940239.f_7)
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11614, Global_1940239.f_11596);
			bVar0 = func_101(&iVar1);
		}
		else
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596);
		}
		if (!func_17(bVar0, 0))
		{
			bVar0 = func_102(iVar1);
		}
	}
	else
	{
		if (Global_1940239.f_7)
		{
			bVar0 = func_101(iParam1);
		}
		if (!func_17(bVar0, 0))
		{
			bVar0 = func_102(*iParam1);
		}
	}
	func_103(bVar0, iParam1);
	func_104(0, bVar0);
	func_100(0);
	func_92(iParam0);
}

bool func_19(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return func_106(func_105(bParam0), iParam1);
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

void func_20(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<19> Var3;
	char* sVar38;
	int iVar39;

	Global_1940239.f_36 = iParam0;
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam1, "label");
	func_107(iVar0, iParam1);
	iVar1 = iVar0;
	if (Global_1940239.f_11587 == 0.7868816f && iVar1 == 9.522126E+26f)
	{
		func_108();
	}
	else
	{
		func_11(iVar1);
	}
	if (func_17(Global_1940239.f_11588, 0) || func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596), "label")))
	{
		if (Global_1940239.f_11587 == 6.319022E+25f || func_19(Global_1940239.f_11588, 6.834376E-22f))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
			func_109(Global_1940239.f_11588, 6.643934E-37f);
			func_109(Global_1940239.f_11588, 2.405382E+20f);
			func_109(Global_1940239.f_11588, NaNf);
			func_109(Global_1940239.f_11588, -3.072587E+16f);
			func_109(Global_1940239.f_11588, 5.266092E-27f);
			func_109(Global_1940239.f_11588, -2.153603E-21f);
			func_109(Global_1940239.f_11588, 2.78471E+33f);
			func_109(Global_1940239.f_11588, 1.096557E-35f);
			func_109(Global_1940239.f_11588, -3.933513E-29f);
			func_109(Global_1940239.f_11588, 6.60208E-06f);
			func_109(Global_1940239.f_11588, -7.329766E+14f);
			func_109(Global_1940239.f_11588, -5.276673E+08f);
			func_109(Global_1940239.f_11588, joaat("TAROT_CARDS_WANDS"));
			func_109(Global_1940239.f_11588, -5.272253E-14f);
			func_109(Global_1940239.f_11588, 3.452593E-11f);
			func_109(Global_1940239.f_11588, -1.05944E+30f);
			func_109(Global_1940239.f_11588, -2.232068E+37f);
		}
	}
	else if (Global_1940239.f_11587 == 6.319022E+25f || Global_1940239.f_11587 == -9.654275E+13f)
	{
		bVar2 = iVar0;
		if (bVar2 != 0)
		{
			if (Global_1940239.f_11587 != -9.654275E+13f)
			{
				func_110();
			}
			Var3.f_2 = 5;
			Var3.f_18 = 8;
			func_111(bVar2, &Var3);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, Var3.f_1);
			if (!func_33(0) && bVar2 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(3.95761E+09f, 0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11631, false);
			}
		}
	}
	else if (iVar0 == 9.522126E+26f)
	{
		if (func_112(2097152))
		{
			iVar39 = func_113();
			sVar38 = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER", iVar39);
		}
		else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			sVar38 = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE_POSSE");
		}
		else if (PED::IS_PED_ON_MOUNT(Global_33))
		{
			sVar38 = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE_HORSE");
		}
		else
		{
			sVar38 = MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_FOLDER_UNAVAILABLE");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, sVar38);
	}
}

void func_21()
{
	int iVar0;
	struct<2> Var1;
	struct<10> Var3;

	iVar0 = Global_1940239.f_11644;
	if (iVar0 == 1.890447E-09f)
	{
		return;
	}
	Var1 = { Global_1940239.f_11578[Global_1940239.f_11585 /*2*/] };
	Var3.f_9 = -5.45926E-19f;
	switch (Global_1940239.f_11645)
	{
		case 0:
			if (!func_114())
			{
				func_115(0);
			}
			Global_1940239.f_11594 = 0;
			Global_1940239.f_41.f_203 = 0;
			if (Global_1940239.f_11597)
			{
				DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11613, Global_1940239.f_11594);
				Global_1940239.f_11597 = 0;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11624, func_40(iVar0));
			if (!func_33(0) && !func_43())
			{
				func_116(func_90(iVar0), &Var1, &Var3, iVar0);
			}
			func_117();
			if (Global_1940239.f_11587 == -5.004954E+28f)
			{
				func_118();
			}
			else if (Global_1940239.f_11587 == -8018687f)
			{
				func_119();
			}
			else if (Global_1940239.f_11587 == -9.654275E+13f)
			{
				func_120();
			}
			else
			{
				if (Global_1940239.f_11587 == -1.994502E+32f || Global_1940239.f_11587 == 6.319022E+25f)
				{
					if ((Global_1915643.f_20241 == 38 || Global_1915643.f_20241 == 2) && func_33(0))
					{
						func_120();
					}
				}
				func_99(1);
				Global_1940239.f_11646 = Var1;
				return;
			}
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11613, Global_1940239.f_11594);
			func_92(0);
			Global_1940239.f_11644 = 1.890447E-09f;
			func_99(0);
			break;
		case 1:
			if (func_121(func_90(iVar0), &Var1, &Var3, iVar0))
			{
				func_99(2);
				Global_1940239.f_11646 = Var1;
			}
			break;
		case 2:
			if ((Global_1940239.f_11587 == -1.994502E+32f && (((Global_1915643.f_20241 == 10 || Global_1915643.f_20241 == 16) || Global_1915643.f_20241 == 15) || Global_1915643.f_20241 == 29)) || (Global_1940239.f_11587 == -9.654275E+13f && Global_1915643.f_20241 == 2))
			{
				if (func_93())
				{
					Var1 = { Global_1940239.f_11578[1 /*2*/] };
					if (!func_121(1, &Var1, &Var3, iVar0))
					{
						return;
					}
				}
				else if (func_122())
				{
					Var1 = { Global_1940239.f_11578[2 /*2*/] };
					if (!func_121(2, &Var1, &Var3, iVar0))
					{
						return;
					}
				}
			}
			func_123();
			func_118();
			func_119();
			func_124();
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11613, Global_1940239.f_11594);
			func_92(0);
			Global_1940239.f_11644 = 1.890447E-09f;
			func_99(0);
			break;
	}
}

bool func_22(int iParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	if (Global_1940239.f_11)
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		bVar0 = func_102(*iParam0);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596);
		bVar2 = func_102(iVar1);
		if (Global_1940239.f_7)
		{
			iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11614, Global_1940239.f_11596);
			bVar3 = func_101(&iVar1);
			if (func_17(bVar3, 0))
			{
				return func_101(iParam0) != bVar3;
			}
		}
		if (func_17(bVar0, 0) && func_17(bVar2, 0))
		{
			if (bVar0 != bVar2)
			{
				return true;
			}
			if (bVar2 != Global_1940239.f_11588)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_23(bool bParam0)
{
	return bParam0 != 0;
}

void func_24(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_25(int iParam0, int iParam1)
{
	if (iParam0 != Global_1940239.f_11585)
	{
		func_125(iParam0, iParam1);
	}
}

void func_26()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (Global_1940239.f_11647 == 0)
	{
		return;
	}
	iVar3 = Global_1940239.f_11594;
	iVar0 = 0;
	while (iVar0 < iVar3)
	{
		iVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, iVar0);
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar2))
		{
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iVar2, "label");
			if (iVar4 == Global_1940239.f_11647)
			{
				iVar1 = 1;
				func_20(iVar0, &iVar2);
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(NaNf, 1.816428E+19f);
			}
			else
			{
				iVar0++;
			}
			Global_1940239.f_11647 = 0;
		}
	}
}

void func_27(int iParam0)
{
	if (iParam0 != -2.021851E-23f)
	{
		Global_1940239.f_11586 = -1;
	}
}

void func_28()
{
	int iVar0;

	iVar0 = Global_1940239.f_11563;
	func_126(iVar0);
}

bool func_29()
{
	if (func_127(Global_33, 0))
	{
		if (PED::IS_PED_USING_SCENARIO_HASH(Global_33, 2.399543E+28f))
		{
			return true;
		}
	}
	return false;
}

bool func_30()
{
	if (Global_1940239.f_39 == 3)
	{
		return true;
	}
	return false;
}

bool func_31(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_30())
	{
		Global_1940239.f_11589 = bParam0;
		func_128(bParam0, 1, -5.149929E+33f, 0, 0);
		return false;
	}
	if (!func_129(bParam0, bParam4))
	{
		return false;
	}
	if (func_130(bParam0))
	{
		return false;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.543783E-35f))
	{
		return false;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (bParam0 == -6.463736E+23f)
	{
		UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", "mp_moonshine_selection");
	}
	if (func_131(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	if (func_19(bParam0, -1.384179E-36f))
	{
		func_132(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_19(bParam0, -2.126654E-30f))
	{
		func_133(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_19(bParam0, 7.57821E-18f))
	{
		func_134(bParam0, Var10);
	}
	else if (func_19(bParam0, 1.293259E-18f))
	{
		if (!func_135(bParam0))
		{
			return false;
		}
	}
	if (func_136(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (func_137(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return true;
	}
	if (func_19(bParam0, -6.191407E-06f))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_138(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_19(bParam0, -1.001123E-14f) || func_19(bParam0, -4.568457E+30f)) || func_19(bParam0, 1.293259E-18f))
	{
	}
	else if (func_19(bParam0, 4.644778E+30f))
	{
		if (((func_139() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true)) || !PED::IS_PED_ON_FOOT(Global_33))
		{
			return false;
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
		func_138(Var10, 0);
		bVar28 = false;
	}
	else if (func_140(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_141(Global_1072759.f_28313.f_25.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_138(Var10, 0);
		iVar29 = 1;
	}
	else if (func_142(bParam0) == -42.1084f)
	{
		if (!func_143(bParam0))
		{
			func_144("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_145(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_146();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_147(PLAYER::PLAYER_ID()))
			{
				func_144("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_144("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -947.1324f)
		{
			if (Global_1953279.f_1676 != bParam0)
			{
				func_148(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_149(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_150(bParam0);
					func_148(35, 0, 0, 0, 0);
					return true;
				case -1719060085:
					if (bParam0 == Global_1953279.f_1676.f_1[23 /*3*/])
					{
						func_151(Global_33, 1.296E-29f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_152(bParam0, 0, 0);
						return true;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_152(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == Global_1953279.f_1676.f_1[10 /*3*/])
					{
						func_151(Global_33, Global_1953279.f_83[10 /*12*/], 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						func_152(bParam0, 0, 0);
						return true;
					}
					else
					{
						func_152(bParam0, 1, 0);
						func_153(-7.463622E-36f, 0);
						if (iVar32 == 4.281622E+11f)
						{
							func_153(1.246195E-34f, 0);
						}
						else if (iVar32 == 1.246195E-34f)
						{
							func_153(4.281622E+11f, 0);
						}
					}
					break;
				default:
					if (!func_19(bParam0, 3.611922E-33f))
					{
					}
					else
					{
						func_149(bParam0, 0);
					}
					break;
			}
			func_151(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 0, 0, 1, 1, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_9(1, 0);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_37() != -1)
				{
				}
				else if (!func_143(bParam0))
				{
					func_144("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_154(7, bParam0);
					bVar31 = func_154(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
						{
							MAP::REMOVE_BLIP(&Global_17339);
						}
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
						MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
						func_144(MISC::VAR_STRING(0, -3.54871E-22f, Global_17339), 10000, 0, 0, 0, 1);
					}
					else if (!func_155(7))
					{
						func_144("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_95(Global_33, func_94(7), 0))
						{
							func_144("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17339))
							{
								MAP::REMOVE_BLIP(&Global_17339);
							}
							Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
							MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
							func_144(MISC::VAR_STRING(0, -3.385882E+21f, Global_17339), 10000, 0, 0, 0, 1);
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
							func_138(Var10, 0);
						}
						Jump @2434; //curOff = 1816
						func_156();
						Jump @2434; //curOff = 1823
						if (func_143(-7.437896E-28f))
						{
							if (func_157(1, 1))
							{
								func_158(2, 1);
							}
							else if (func_159(1))
							{
								func_144("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_160())
							{
								func_144("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								{
									func_161();
								}
								else
								{
									func_144("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_162(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						{
							func_144("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_162(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
						else if (func_160())
						{
							func_144("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_144("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2434; //curOff = 2044
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_163(Global_33, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return true;
						Jump @2434; //curOff = 2082
						if (func_163(Global_33, 1, 0, 0) != bParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return true;
						Jump @2434; //curOff = 2117
						Jump @2434; //curOff = 2120
						func_164(535, 1);
						Jump @2434; //curOff = 2131
						func_165(1);
						Jump @2434; //curOff = 2139
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -2.680077E+18f, 9.798505E+30f, 1, 0, -1f);
						bVar28 = false;
						return true;
						Jump @2434; //curOff = 2174
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
							func_138(Var10, 0);
						}
						return true;
						Jump @2434; //curOff = 2250
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
							func_138(Var10, 0);
						}
						return true;
						Jump @2434; //curOff = 2380
						if (Global_1148170[PLAYER::PLAYER_ID() /*10*/].f_4)
						{
							func_144("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_166();
						}
						return true;
						Jump @2434; //curOff = 2425
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

bool func_32()
{
	if (Global_1940239.f_39 == 1 || Global_1940239.f_39 == 2)
	{
		return true;
	}
	return false;
}

bool func_33(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

void func_34(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	struct<5> Var3;
	struct<4> Var8;
	bool bVar12;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*uParam0, "item");
	bVar1 = iVar0;
	if (func_17(bVar1, 0) && (!func_17(Global_1940239.f_11588, 0) || bVar1 != Global_1940239.f_11588))
	{
		Global_1940239.f_11588 = bVar1;
	}
	if (func_142(Global_1940239.f_11588) == 4.324946E+36f)
	{
		Global_1940072.f_41 = Global_1940239.f_11588;
	}
	else
	{
		Global_1940072.f_42 = Global_1940239.f_11588;
	}
	bVar2 = true;
	if (func_145(Global_1940239.f_11588) == -1.548506E+08f)
	{
		Var3 = { func_167(Global_1940239.f_11588, 0, 0) };
		Var8 = { func_168(Global_1940239.f_11588, Var3, Var3.f_4, 0) };
		func_169(Var8, 1, 0);
		bVar12 = func_170(0);
		if (func_37() == 0)
		{
			bVar12 = true;
		}
		if (Global_1940239.f_11587 == -1.723482E+33f)
		{
			func_88(bVar12, 0, -1.403315E+07f);
		}
		else
		{
			func_88(bVar12, 1, 0);
		}
		bVar2 = true;
	}
	else if (Global_1940239.f_11588 == -3993060f)
	{
		func_171();
		bVar2 = false;
	}
	else if ((func_145(Global_1940239.f_11588) == 5.002459E-36f || func_145(Global_1940239.f_11588) == -9.847085E+19f) || func_19(Global_1940239.f_11588, 3.611922E-33f))
	{
		func_149(Global_1940239.f_11588, 0);
		bVar2 = false;
	}
	else if (func_19(Global_1940239.f_11588, 1.377061E-27f))
	{
		if (func_172(Global_1940239.f_11588, 0, 0) >= 0)
		{
			bVar2 = true;
		}
	}
	else if (func_173(Global_1940239.f_11588, 1, 0))
	{
	}
	else if (func_19(Global_1940239.f_11588, -1.823469E-06f))
	{
		func_176(Global_1940239.f_11588, func_175(func_174(0)));
	}
	else if (((func_19(Global_1940239.f_11588, -1.001123E-14f) && func_177(Global_1940239.f_11588)) && func_178()) && !func_179(Global_1940239.f_11588))
	{
		func_180();
		func_181(Global_17418.f_2992.f_17, 1, 0, -5.149929E+33f);
		if (func_31(Global_1940239.f_11588, 0, 0, 0, 1, 0, 0))
		{
			bVar2 = false;
		}
	}
	else if (func_31(Global_1940239.f_11588, 0, 0, 0, 1, 0, 0))
	{
		bVar2 = false;
	}
	if (func_30())
	{
		bVar2 = false;
	}
	Global_1940239.f_11589 = Global_1940239.f_11588;
	func_9(bVar2, 0);
	func_115(0);
}

void func_35(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return;
	}
	if (((func_19(bParam0, -1.001123E-14f) && func_177(bParam0)) && func_178()) && func_179(bParam0))
	{
		func_180();
		if (func_182() == 0.7868816f)
		{
			func_13();
			if (Global_1940239.f_11595 <= 0)
			{
				Global_1940239.f_11597 = 1;
				func_15(0.7868816f);
				UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(NaNf, 5.636846E+30f);
			}
		}
	}
	if (!func_183(bParam0, iParam1, func_174(0), 0, -1.236539E+27f))
	{
		if (!func_184(bParam0, iParam1, 0, 1, -1.236539E+27f))
		{
		}
	}
	func_88(1, 1, func_10(bParam0, 512441.5f));
}

void func_36(bool bParam0)
{
	func_35(bParam0, func_185(func_174(0), bParam0, 0, 1, 1));
}

int func_37()
{
	return Global_1572887.f_14;
}

void func_38()
{
	func_186(-6282870f, &(Global_1940239.f_11641), 600, -1, 0, 0);
	func_187();
}

int func_39(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	int iVar6;

	bVar0 = func_33(0);
	bVar1 = func_43();
	bVar2 = false;
	if (((!bVar0 && !bVar1) && Global_1940239.f_11587 != -1.723482E+33f) && Global_1940239.f_11587 != 0.7868816f)
	{
		bVar2 = true;
	}
	Global_1940239.f_11597 = 1;
	Global_1940239.f_11613 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_menu_items");
	Global_1940239.f_11614 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_list_items");
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "Satchel");
	Global_1940239.f_11629 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSelectLabel", -5.269933E+37f);
	Global_1940239.f_11630 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectEnabled", true);
	Global_1940239.f_11631 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSelectVisible", true);
	Global_1940239.f_11632 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptHoldSelectLabel", -6.23013E-30f);
	Global_1940239.f_11633 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectEnabled", false);
	Global_1940239.f_11634 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptHoldSelectVisible", false);
	Global_1940239.f_11637 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "PromptDiscardAllLabel", HUD::GET_STRING_FROM_HASH_KEY(6.95909E-34f));
	Global_1940239.f_11635 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllEnabled", bVar2);
	Global_1940239.f_11636 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDiscardAllVisible", bVar2);
	Global_1940239.f_11640 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptDropVisibile", bVar2);
	Global_1940239.f_11638 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, "PromptSendLabel", -5.269933E+37f);
	if ((func_37() == -1 && func_33(0)) && Global_1915643.f_20241 == 2)
	{
		Global_1940239.f_11639 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", true);
	}
	else
	{
		Global_1940239.f_11639 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "PromptSendAllVisible", false);
	}
	iVar3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(*uParam0, "Selected");
	Global_1940239.f_11618 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Name", 0);
	Global_1940239.f_11619 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "NameAsString", "");
	Global_1940239.f_11620 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Description", 0);
	Global_1940239.f_11621 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "DescriptionAsString", "");
	if (func_33(0) || func_29())
	{
		Global_1940239.f_11622 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Price", "");
	}
	else
	{
		Global_1940239.f_11622 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar3, "Price", false);
	}
	if ((func_37() == -1 && func_33(0)) && Global_1915643.f_20241 == 2)
	{
		Global_1940239.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_SEND");
	}
	else if (Global_1915643.f_20241 == 29)
	{
		Global_1940239.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "MATERIAL_VALUE");
	}
	else
	{
		Global_1940239.f_11623 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "PriceLabel", "SHOP_VALUE");
	}
	Global_1940239.f_11624 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Category", 0);
	Global_1940239.f_11616 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "DefaultCategoryIndex", 0);
	Global_1940239.f_11617 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryIndex", func_188());
	Global_1940239.f_11615 = DATABINDING::_DATABINDING_ADD_DATA_INT(iVar3, "CategoryCount", 0);
	Global_1940239.f_11625 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "IndexDescription", "");
	Global_1940239.f_11626 = DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar3, "Tip", "");
	Global_1940239.f_11627 = INVENTORY::_0x9D21B185ABC2DBC4(iVar3, "effects", false, false);
	Global_1940239.f_11628 = DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar3, "Folder", 0);
	Global_1940239.f_11612 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_PATH("satchel_category_items");
	func_189(Global_1940239.f_11612);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11612, Global_1940239.f_11562);
	iVar4 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(*uParam0, "Collections");
	fVar5 = 1.545854E-21f;
	if (func_190(-3.446699E+17f))
	{
		fVar5 = -3.558998E-12f;
	}
	iVar6 = func_191(iVar4, "player", fVar5, "ALL SATCHEL EXCLUDING CLOTHING", -5.45926E-19f);
	if (iVar6 < 0)
	{
		return 0;
	}
	if ((func_93() || func_95(Global_33, func_94(7), 1)) || (!(func_96(7) || func_97(7)) && func_33(0)))
	{
		func_191(iVar4, "saddle", -0.0001950784f, "ALL EXCLUDING CLOTHING", 5.960322E-13f);
	}
	func_125(iVar6, &iVar3);
	if (Global_1940239.f_9)
	{
		func_192(Global_1940239.f_11587);
		func_193(Global_1940239.f_11587, &iVar3, 0);
		func_88(1, 0, 0);
	}
	else
	{
		func_88(func_194(), 0, 0);
	}
	Global_1940239.f_9 = 0;
	return 1;
}

int func_40(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.311269E+10f;
		case -1559802791:
			return -1.596199E+26f;
		case -1268291907:
			return 1.355726E-08f;
		case -96974025:
			return -1.030903E-35f;
		case -1666604090:
			return 0.00240784f;
		case 1561961676:
			return -3.387498E+35f;
		case -156634416:
			return 1.837261E+35f;
		case 1061777683:
			return -3.466732E+37f;
		case 1783698482:
			return -3.123953E-06f;
		case -283002878:
			return 1.617681E-29f;
		case -889932290:
			return 5.873735E-15f;
		case -2074770370:
			return 5.780337E+20f;
		case -693134279:
			return -1.527342f;
		case -182626652:
			if ((Global_1915643.f_20638 || Global_1915643.f_22504.f_1) && (Global_1915643.f_20241 == 16 || Global_1915643.f_20241 == 29))
			{
				return -8.472612E+26f;
			}
			else
			{
				return -1.142393E+33f;
			}
			break;
	}
	return 0;
}

int func_41(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.005045E+09f;
		case -1559802791:
			return -1.030146E-22f;
		case -1268291907:
			return 9.905189E+15f;
		case -96974025:
			return 7.585153E-25f;
		case -1666604090:
			return 1.203803E-35f;
		case 1561961676:
			return 0.001208672f;
		case -156634416:
			return -1.514944E-18f;
		case 1061777683:
			return -6.296346E+23f;
		case 1783698482:
			return 5.80875E+35f;
		case -283002878:
			return -4.969853E-05f;
		case -889932290:
			return -3.639836E-29f;
		case -2074770370:
			return 9.911091E-36f;
		case -693134279:
			return 0.005567272f;
		case -182626652:
			if (Global_1915643.f_20241 == 29)
			{
				return 9.911091E-36f;
			}
			else
			{
				return 1.429267E-28f;
			}
			break;
	}
	return 0;
}

void func_42()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11619, "");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11621, "");
}

bool func_43()
{
	if (((Global_1940239.f_39 == 1 || Global_1940239.f_39 == 2) || func_29()) || func_30())
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (func_195())
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_45(int iParam0)
{
	switch (iParam0)
	{
		case -2074770370:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, HUD::GET_STRING_FROM_HASH_KEY(1.491312E-09f));
			break;
		case -693134279:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, HUD::GET_STRING_FROM_HASH_KEY(-2.487095E+24f));
			break;
		case -182626652:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, HUD::GET_STRING_FROM_HASH_KEY(-3.064993E+22f));
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
			break;
	}
	return 0;
}

void func_46(int iParam0)
{
	Global_1940239.f_40 = iParam0;
}

void func_47(int iParam0)
{
	Global_1940239.f_39 = iParam0;
}

void func_48(int iParam0)
{
	Global_1940239.f_12 = iParam0;
}

void func_49(var uParam0)
{
	int iVar0;

	MAP::DISPLAY_RADAR(true);
	Global_1940239.f_2 = 0;
	func_196();
	func_197(uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	HUD::_SHOW_PLAYER_CORES(false);
	HUD::_SHOW_HORSE_CORES(false);
	if (func_37() == -1)
	{
	}
	else
	{
		while (!func_198(0, 0) && iVar0 < 15)
		{
			iVar0++;
			PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
			BUILTIN::WAIT(0);
		}
	}
}

void func_50(int iParam0)
{
	Global_1913601[iParam0 /*6*/].f_1 = 3;
	Global_1913601[iParam0 /*6*/] = 0;
	Global_1913601[iParam0 /*6*/].f_5 = 0;
}

void func_51(int iParam0)
{
	Global_1940239.f_11561 = (Global_1940239.f_11561 - (Global_1940239.f_11561 && iParam0));
}

bool func_52()
{
	int iVar0;

	iVar0 = func_199(0);
	if (func_200(iVar0, 1, 0, 0))
	{
		func_201(iVar0);
		return true;
	}
	return false;
}

void func_53()
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (func_202(Global_33))
		{
			Global_1940072.f_7 |= 1;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1);
		}
		if (func_12(Global_33))
		{
			Global_1940072.f_7 |= 2;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 2);
		}
		if (func_203(Global_33, 2.446422E-13f))
		{
			Global_1940072.f_7 |= 4;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4);
		}
		if (func_204(Global_33))
		{
			Global_1940072.f_7 |= 8;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8);
		}
		if (func_37() == 0)
		{
			if (func_157(1, 1))
			{
				Global_1940072.f_7 |= 16;
			}
			else
			{
				Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 16);
			}
			if (func_205(0))
			{
				Global_1940072.f_7 = (Global_1940072.f_7 || 2.524355E-29f);
			}
			else
			{
				Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 2.524355E-29f));
			}
		}
		else if (func_206(0, 1))
		{
			Global_1940072.f_7 |= 16;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 16);
		}
		if (!func_207(0))
		{
			Global_1940072.f_7 |= 32;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 32);
		}
		if (!func_208(0))
		{
			Global_1940072.f_7 |= 512;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 512);
		}
		if (!func_209(0))
		{
			Global_1940072.f_7 |= 8192;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8192);
		}
		if (PED::IS_PED_IN_COVER(Global_33, false, true))
		{
			Global_1940072.f_7 |= 16384;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 16384);
		}
		if (PED::GET_PED_CROUCH_MOVEMENT(Global_33))
		{
			Global_1940072.f_7 |= 32768;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 32768);
		}
		if (func_37() == 0 && PED::IS_PED_INCAPACITATED(Global_33))
		{
			Global_1940072.f_7 |= 131072;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 131072);
		}
		if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.543783E-35f))
		{
			Global_1940072.f_7 |= 256;
		}
		else if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
		{
			Global_1940072.f_7 |= 256;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 256);
		}
		iVar0 = 1106247680; /* Float: 30f */
		if (func_210() || func_211())
		{
			iVar0 = 1112014848; /* Float: 50f */
		}
		if ((Global_1940186.f_18 || TASK::_IS_PED_DUELLING(Global_33)) || func_212(iVar0, 1024))
		{
			Global_1940072.f_7 |= 1024;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1024);
		}
		if (TASK::IS_PED_RUNNING(Global_33))
		{
			Global_1940072.f_7 |= 4096;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4096);
		}
		if (ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) || func_203(Global_33, 8.330918E+10f))
		{
			Global_1940072.f_7 |= 128;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 128);
		}
		if (TASK::IS_PED_GETTING_UP(Global_33))
		{
			Global_1940072.f_7 |= 1048576;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1048576);
		}
		if (PED::IS_PED_MALE(Global_33))
		{
			Global_1940072.f_7 = (Global_1940072.f_7 || 2.350989E-38f);
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 2.350989E-38f));
		}
		if (func_213())
		{
			Global_1940072.f_7 = (Global_1940072.f_7 || 9.403955E-38f);
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 9.403955E-38f));
		}
		if (func_214(0))
		{
			Global_1940072.f_7 |= 524288;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 524288);
		}
		if (func_215(0))
		{
			Global_1940072.f_7 |= 262144;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 262144);
		}
		if (func_216(Global_33))
		{
			Global_1940072.f_7 |= 4194304;
		}
		else
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4194304);
		}
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 2);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 16);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 32);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 512);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8192);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 16384);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 32768);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 131072);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 256);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1024);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4096);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 128);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 1048576);
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 2.350989E-38f));
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 9.403955E-38f));
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 524288);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 262144);
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 4194304);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1940072.f_7 |= 65536;
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1940072.f_7 |= 64;
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 64);
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (func_217(iVar1))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iVar1))
			{
				case joaat("A_C_HORSEMULE_01"):
				case joaat("A_C_HORSEMULEPAINTED_01"):
				case joaat("A_C_DONKEY_01"):
					Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8388608);
					break;
				default:
					Global_1940072.f_7 |= 8388608;
					break;
			}
		}
		if (PED::_IS_META_PED_USING_COMPONENT(iVar1, 1.40872E-33f))
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8388608);
		}
		if (!PED::IS_PED_RAGDOLL(iVar1) && PED::IS_PED_ON_VEHICLE(iVar1, false))
		{
			Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8388608);
		}
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 8388608);
	}
	if ((func_218() || func_219()) || (func_220(0, 0, 1) && !func_221()))
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - Global_1940072.f_7 & 2097152);
	}
	else
	{
		Global_1940072.f_7 |= 2097152;
	}
	if (func_222())
	{
		Global_1940072.f_7 = (Global_1940072.f_7 || 1.504633E-36f);
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 1.504633E-36f));
	}
	if (Global_1940186.f_52)
	{
		Global_1940072.f_7 = (Global_1940072.f_7 || 3.85186E-34f);
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 3.85186E-34f));
	}
	if (Global_1048577)
	{
		Global_1940072.f_7 = (Global_1940072.f_7 || 1.084202E-19f);
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 1.084202E-19f));
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		Global_1940072.f_7 = (Global_1940072.f_7 || 2f);
	}
	else
	{
		Global_1940072.f_7 = (Global_1940072.f_7 - (Global_1940072.f_7 && 2f));
	}
}

bool func_54(int iParam0)
{
	return func_112(iParam0);
}

float func_55()
{
	return 0.1210337f;
}

int func_56(int iParam0, int iParam1)
{
	if (func_63(iParam0))
	{
		func_61(iParam0);
		return 0;
	}
	else
	{
		Stack.Push(0);
		Call_Loc(iParam1);
		if (func_65(StackVal, StackVal))
		{
			func_66(iParam0);
			return 1;
		}
		else
		{
			func_61(iParam0);
			return 0;
		}
	}
	return 0;
}

float func_57()
{
	return 0.1209657f;
}

float func_58()
{
	return 0.06047829f;
}

float func_59()
{
	return 0.01218607f;
}

bool func_60()
{
	return func_223();
}

void func_61(int iParam0)
{
	func_224(&(Global_1940072.f_38), iParam0);
}

bool func_62(int iParam0)
{
	return func_226(func_225(iParam0));
}

bool func_63(int iParam0)
{
	return (Global_1940072.f_39 && iParam0) != 0;
}

float func_64()
{
	return func_227();
}

bool func_65(bool bParam0, float fParam1)
{
	int iVar0;

	if ((Global_1940186.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_37() == 0)
	{
		if (func_8(131072))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 1))
	{
		if (func_8(1024))
		{
			return false;
		}
	}
	if (Global_1940186.f_16)
	{
		return false;
	}
	if (!func_228(fParam1, 2) && func_8(32))
	{
		return false;
	}
	if (!func_228(fParam1, 4))
	{
		if (func_8(4096))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 8) && func_8(512))
	{
		return false;
	}
	if (!func_228(fParam1, 512) && !func_229(bParam0))
	{
		return false;
	}
	if (!func_228(fParam1, 262144) && !func_230(bParam0, func_228(fParam1, 524288)))
	{
		return false;
	}
	if (!func_228(fParam1, 64) && !func_231(bParam0, fParam1, 1))
	{
		return false;
	}
	if (!func_228(fParam1, 128))
	{
		if (func_232(Global_33, 6.915501E+28f) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_228(fParam1, 16))
	{
		if (func_233(Global_33))
		{
			iVar0 = PED::GET_MOUNT(Global_33);
			if (!func_234(iVar0, 1))
			{
				if (bParam0)
				{
					func_144("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_228(fParam1, 256) && func_8(8192))
	{
		return false;
	}
	if (!func_228(fParam1, 1024) && func_8(65536))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_228(fParam1, 2048))
	{
		if (func_8(32768))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 4096))
	{
		if (func_8(16384))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 8192))
	{
		if (!func_8(16))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 1.504633E-36f))
	{
		if (!func_8(2.524355E-29f))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 16384))
	{
		if (func_8(256))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 32768))
	{
		if (func_76())
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_228(fParam1, 131072))
	{
		if (!func_8(524288))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 65536))
	{
		if (!func_8(262144))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 1048576))
	{
		if (!func_8(2097152))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 2097152))
	{
		if (!func_8(8388608))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 4194304))
	{
		if (!func_8(2.350989E-38f))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 8388608))
	{
		if (func_8(9.403955E-38f))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 2.350989E-38f))
	{
		if (func_8(1.504633E-36f))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 9.403955E-38f))
	{
		if (func_8(3.85186E-34f))
		{
			return false;
		}
	}
	if (func_8(64))
	{
		return false;
	}
	else if (func_8(128))
	{
		return false;
	}
	else if (func_8(1048576))
	{
		return false;
	}
	else if (func_8(4))
	{
		return false;
	}
	if (!func_228(fParam1, 3.85186E-34f))
	{
		if (func_235(256))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 2.524355E-29f))
	{
		if (func_8(1.084202E-19f))
		{
			return false;
		}
	}
	if (!func_228(fParam1, 1.084202E-19f))
	{
		if (func_8(2f))
		{
			return false;
		}
	}
	return true;
}

void func_66(int iParam0)
{
	func_236(&(Global_1940072.f_38), iParam0);
}

float func_67()
{
	return 0.1190805f;
}

float func_68()
{
	return 0.1068115f;
}

float func_69()
{
	return 0.106079f;
}

float func_70()
{
	return 7.633434E-31f;
}

float func_71()
{
	return 0.1065672f;
}

var func_72()
{
	return Global_1940072.f_10;
}

var func_73()
{
	return Global_1940072.f_11;
}

var func_74()
{
	return Global_1940072.f_12;
}

var func_75()
{
	return Global_1940072.f_13;
}

bool func_76()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

float func_77()
{
	return 0.122879f;
}

float func_78()
{
	return 0.122911f;
}

float func_79()
{
	return 0.1228801f;
}

float func_80()
{
	return 0.03022764f;
}

float func_81()
{
	return 0.0001162227f;
}

float func_82()
{
	return 0.1109248f;
}

float func_83()
{
	return 0.1228801f;
}

float func_84()
{
	return 1.815963E-06f;
}

float func_85()
{
	return 0.1210489f;
}

void func_86()
{
	Global_1940072.f_39 = 0;
}

bool func_87()
{
	int iVar0;

	if (func_33(0) || func_43())
	{
		return true;
	}
	iVar0 = func_199(0);
	if (func_200(iVar0, 0, 0, 0))
	{
		func_201(iVar0);
		return true;
	}
	return false;
}

void func_88(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = bParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_237() && iParam2 == 0))
	{
		func_24(1);
		func_238(1);
	}
}

bool func_89(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case -283002878:
			return 1;
		case -889932290:
			return 2;
		default:
			break;
	}
	return 0;
}

void func_91(var uParam0, int iParam1)
{
	struct<14> Var0;
	int iVar14;

	Var0.f_9 = -5.45926E-19f;
	iVar14 = 0;
	iVar14 = (*uParam0 - 1);
	while (iVar14 >= 0)
	{
		if (!func_239(&Var0, iVar14, func_90(Global_1940239.f_11587), *uParam0))
		{
		}
		else if (func_240(Var0.f_9))
		{
		}
		else if (!func_241(Var0.f_4, iParam1))
		{
		}
		else if (!func_242(Var0.f_4))
		{
		}
		else if (func_33(0))
		{
			if (!func_17(Var0.f_4, 0) || Var0.f_11 <= 0)
			{
			}
			else
			{
				if (Global_1940239.f_11588 == 0)
				{
					func_115(Var0.f_4);
				}
				func_243(Var0);
			}
			iVar14 = (iVar14 + -1);
		}
	}
}

void func_92(int iParam0)
{
	if (Global_1940239.f_41.f_203 > 16)
	{
		if (Global_1940239.f_7)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11625, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940239.f_11595));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11625, MISC::VAR_STRING(2, "ENTRY_COUNTER", iParam0 + 1, Global_1940239.f_41.f_203));
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11625, "");
	}
}

bool func_93()
{
	int iVar0;

	if (func_33(0))
	{
		iVar0 = func_174(0);
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return false;
		}
		if (!func_244(Global_1915643.f_20241.f_1))
		{
			return false;
		}
		if (func_245(Global_1915643.f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else
	{
		if (func_37() == -1)
		{
			if (func_246(Global_33))
			{
				iVar0 = PED::GET_MOUNT(Global_33);
			}
			else if (func_247(-5.004954E+28f))
			{
				return true;
			}
		}
		else
		{
			iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
		}
		if (((!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0)) || PED::IS_PED_INJURED(iVar0)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
		{
			return false;
		}
		if (func_248(iVar0, 0, 1) < 1071225242 || func_247(-5.004954E+28f))
		{
			return true;
		}
	}
	return false;
}

int func_94(int iParam0)
{
	iParam0 = func_249(iParam0);
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

bool func_95(int iParam0, int iParam1, bool bParam2)
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

int func_96(int iParam0)
{
	int iVar0;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	iVar0 = func_94(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_97(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_250(iParam0))
	{
		return 0;
	}
	iVar0 = func_94(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || PED::IS_PED_INJURED(Global_33))
	{
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(Global_33, true, false) };
	if (func_251(vVar1, vVar4) > func_252(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_98(int iParam0, int iParam1)
{
	if (!func_253(Global_1940239.f_11578[iParam0 /*2*/].f_1))
	{
		return false;
	}
	return func_254("ALL EXCLUDING CLOTHING", &(Global_1940239.f_11578[iParam0 /*2*/].f_1), &(Global_1940239.f_11578[iParam0 /*2*/]), iParam1, 0);
}

void func_99(int iParam0)
{
	Global_1940239.f_11645 = iParam0;
}

void func_100(int iParam0)
{
	if (!func_17(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_10(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

bool func_101(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = Global_1940239.f_11588;
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam0, "item");
	if (!func_17(Global_1940239.f_11588, 0) || iVar1 != Global_1940239.f_11588)
	{
		bVar0 = iVar1;
	}
	if (func_19(bVar0, -1.15596E+32f))
	{
		func_255();
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam0, "label"));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, func_256(bVar0));
		func_42();
	}
	return bVar0;
}

int func_102(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "label");
	return iVar0;
}

void func_103(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	bool bVar17;
	float fVar18;
	float fVar19;
	bool bVar20;
	char cVar21[32];
	int iVar25;
	float fVar26;
	struct<19> Var27;
	int iVar62;

	bVar0 = true;
	if (func_17(bParam0, 0) && !func_19(bParam0, 9.522126E+26f))
	{
		if (func_19(bParam0, 888.6404f))
		{
			if (Global_1940239.f_11587 == -5.004954E+28f)
			{
				iVar1 = 2;
			}
			else
			{
				iVar1 = 1;
			}
			if (!func_33(0))
			{
				iVar2 = func_257(bParam0);
				if (func_19(bParam0, 1.763507E+18f) && !func_258(iVar2))
				{
					bVar0 = false;
					ATTRIBUTE::STOP_ITEM_PREVIEW();
				}
				else
				{
					ATTRIBUTE::_START_ITEM_PREVIEW(bParam0, iVar1);
				}
			}
		}
		func_259(bParam0, iParam1);
		bVar3 = false;
		bVar4 = func_260(bParam0);
		bVar5 = false;
		bVar6 = false;
		bVar7 = false;
		iVar8 = 0;
		if ((func_19(bParam0, -1.001123E-14f) && func_177(bParam0)) && !func_33(0))
		{
			bVar5 = true;
			if (func_178())
			{
				if (func_179(bParam0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11631, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, false);
					if (!func_261())
					{
						bVar4 = true;
						bVar6 = true;
					}
				}
				else
				{
					iVar8 = func_262(bParam0, 1);
					if (iVar8 == 0 || iVar8 == 2)
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11631, false);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11632, -5.269933E+37f);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11633, true);
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11634, true);
					}
					else
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, false);
					}
					bVar7 = true;
				}
			}
			else
			{
				iVar8 = func_262(bParam0, 1);
				if (iVar8 != 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, false);
				}
			}
		}
		if (func_10(bParam0, 512441.5f) == -9.458585E-17f || func_10(bParam0, 512441.5f) == -1.281519E-12f)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11629, 1755.931f);
		}
		iVar9 = 0;
		iVar10 = 0;
		iVar11 = 0;
		iVar13 = 0;
		iVar14 = 0;
		iVar9 = func_263(bParam0, 0, 0, 0);
		if (func_93())
		{
			iVar10 = func_264(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()), bParam0);
			if (iVar10 > 0)
			{
				iVar15 = 0;
				while (iVar15 < 3)
				{
					if (Global_1903834.f_113[iVar15 /*96*/].f_1 == bParam0)
					{
						if (ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_1139.f_245[iVar15 /*4*/].f_3))
						{
							iVar13++;
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290256.f_1139.f_245[iVar15 /*4*/].f_3))
							{
								iVar14++;
							}
						}
					}
					iVar15++;
				}
			}
		}
		if (func_122())
		{
			iVar11 = func_265(bParam0, 1);
		}
		if (bParam0 == Global_1940239.f_11591)
		{
			iVar9++;
			iVar13++;
			if (ENTITY::DOES_ENTITY_EXIST(Global_1940239.f_11592))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1940239.f_11592))
				{
					iVar14++;
				}
			}
		}
		iVar12 = ((iVar9 + iVar10) + iVar11);
		iVar16 = func_266(bParam0, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, func_267(bParam0, 0));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, func_256(bParam0));
		func_42();
		if (bVar4)
		{
			if (iVar14 > 0 || iVar13 <= 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, true);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, false);
				bVar4 = false;
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, false);
		}
		if (bVar4 && iVar12 > 1)
		{
			bVar3 = true;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11636, bVar3);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11635, (bVar3 && iVar14 == iVar13));
		bVar17 = true;
		if (func_33(0) || func_43())
		{
			fVar18 = (BUILTIN::TO_FLOAT(func_268(bParam0)) / 1120403456);
			fVar19 = (BUILTIN::TO_FLOAT(func_270(func_269(bParam0), 2.726986E-11f)) / 1120403456);
			if (((func_19(bParam0, 0.9368603f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, 2f)) || func_19(bParam0, -5.258498E-07f)) || func_19(bParam0, 1.026869E-32f))
			{
				if (func_271())
				{
					fVar19 = (fVar19 * 1067450368);
				}
			}
			else if ((INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, 2.524355E-29f) || INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, 3.85186E-34f)) || func_19(bParam0, 3.750005E+29f))
			{
				fVar19 = (fVar19 * 1053609165);
			}
			else if (func_19(bParam0, 9.077182E+07f) || func_19(bParam0, 2.062334E+22f))
			{
				fVar19 = (fVar19 * 1058642330);
			}
			if (Global_1915643.f_20241 == 2)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, MISC::VAR_STRING(10, "SEND_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(fVar18, 2), 4.808429E-35f)));
			}
			else if (Global_1915643.f_20241 == 29)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, func_272(MISC::_GET_STRING_FROM_FLOAT(fVar19, 2), 4.808429E-35f));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(fVar18, 2), 4.808429E-35f)));
			}
			if (!func_273(bParam0, Global_1915643.f_20241.f_1) && !func_43())
			{
				bVar17 = false;
			}
			if (func_274() == 29 && func_275(bParam0))
			{
				bVar17 = false;
			}
		}
		func_42();
		if (bVar5)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			if (bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP_DISCARD"));
			}
			else if (bVar7)
			{
				if (iVar8 == 0 || iVar8 == 2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTORS_MAP"));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, func_276(iVar8)));
				}
			}
			else if (iVar8 != 0)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, func_276(iVar8)));
			}
		}
		else if (-1.555482E+21f == bParam0 && !func_277())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CANT_READ_LETTER"));
		}
		else if (bVar17)
		{
			if (iVar16 > 1)
			{
				if ((func_274() == 38 && func_17(bParam0, 0)) && func_19(bParam0, 6.834376E-22f))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
					func_109(bParam0, 6.643934E-37f);
					func_109(bParam0, 2.405382E+20f);
					func_109(bParam0, NaNf);
					func_109(bParam0, -3.072587E+16f);
					func_109(bParam0, 5.266092E-27f);
					func_109(bParam0, -2.153603E-21f);
					func_109(bParam0, 2.78471E+33f);
					func_109(bParam0, 1.096557E-35f);
					func_109(bParam0, -3.933513E-29f);
					func_109(bParam0, 6.60208E-06f);
					func_109(bParam0, -7.329766E+14f);
					func_109(bParam0, -5.276673E+08f);
					func_109(bParam0, joaat("TAROT_CARDS_WANDS"));
					func_109(bParam0, -5.272253E-14f);
					func_109(bParam0, 3.452593E-11f);
					func_109(bParam0, -1.05944E+30f);
					func_109(bParam0, -2.232068E+37f);
				}
				else if (iVar12 >= iVar16)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY_FULL", iVar12, iVar16));
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_CAPACITY", iVar12, iVar16));
				}
			}
			else if (iVar16 == 1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_UNIQUE"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_INFINITE", iVar12));
			}
		}
		else if (func_274() == 2)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
		}
		else if (func_274() == 29)
		{
			if (func_275(bParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_SKINNED_ITEM"));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_CRIPPS"));
			}
		}
		else if ((func_278(func_274()) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[func_274() /*75*/].f_20)) && !PED::IS_PED_MALE(Global_1051832.f_92[func_274() /*75*/].f_20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM_F"));
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SHOP_H_NOT_ACCEPTED_ITEM"));
		}
	}
	else
	{
		bVar20 = bParam0;
		if (func_17(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam1, "item"), 0) && func_19(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(*iParam1, "item"), 9.522126E+26f))
		{
			StringCopy(&cVar21, DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(*iParam1, "label_as_string"), 32);
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11619, &cVar21);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11629, 1755.931f);
			iVar25 = 0;
			while (iVar25 < 32)
			{
				if (MISC::ARE_STRINGS_EQUAL(&(Global_265213.f_107995[iVar25 /*4*/]), DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1940239.f_11619)))
				{
					Global_1940239.f_1556.f_8925.f_25 = 0;
					Global_1940239.f_1556.f_8925.f_24 = Global_265213.f_107995.f_257[iVar25];
				}
				else
				{
					iVar25++;
				}
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_MISSION_DROP_TELEGRAM_TIP"));
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, false);
		}
		else if (ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar20))
		{
			fVar26 = (BUILTIN::TO_FLOAT(func_279(bVar20)) / 1120403456);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, bVar20);
			Var27.f_2 = 5;
			Var27.f_18 = 8;
			if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(bVar20, &Var27))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, Var27.f_1);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, 0);
			}
			if (func_33(0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, MISC::VAR_STRING(10, "SHOP_ITEM_VALUE", func_272(MISC::_GET_STRING_FROM_FLOAT(fVar26, 2), 4.808429E-35f)));
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11622, "");
			}
			if (bVar20 == STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(3.95761E+09f, 0))
			{
				func_110();
			}
			else
			{
				iVar62 = COLLECTION::_0x9ADEE485726025D4(bVar20);
				if (iVar62 != 0)
				{
					func_280(bVar20);
				}
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, func_40(Global_1940239.f_11587));
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, func_41(Global_1940239.f_11587));
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
		}
	}
	if (!bVar0)
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1940239.f_11627, false, false);
	}
	else
	{
		INVENTORY::_0x75CFAC49301E134F(Global_1940239.f_11627, bParam0, false);
	}
	func_115(bParam0);
}

void func_104(int iParam0, bool bParam1)
{
	if (!func_17(bParam1, 0))
	{
		return;
	}
	if ((!func_19(bParam1, 4.196335E-12f) && !func_19(bParam1, -1.637705E-21f)) && !func_19(bParam1, 2.805445E+37f))
	{
		return;
	}
	if (bParam1 != Global_1913601[iParam0 /*6*/])
	{
		Global_1913601[iParam0 /*6*/].f_1 = 3;
		Global_1913601[iParam0 /*6*/] = bParam1;
		Global_1913601[iParam0 /*6*/].f_5 = 0;
	}
}

bool func_105(bool bParam0)
{
	return bParam0;
}

int func_106(bool bParam0, int iParam1)
{
	if (!func_281(bParam0, 2))
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

void func_107(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11618, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11620, func_282(iParam0));
	func_42();
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_11628, iParam0);
	func_115(0);
	INVENTORY::_0x75CFAC49301E134F(Global_1940239.f_11627, false, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11640, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11636, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11635, false);
	func_283(iParam1);
}

int func_108()
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;
	bool bVar15[3];
	int iVar19;
	int iVar20;
	bool bVar21;

	if (func_33(0))
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0 = { func_285(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_286(Var0, &iVar10, &iVar11, 0))
	{
		if (iVar11 > 0)
		{
			Global_1940239.f_11595 = 0;
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar14 = func_287(iVar12, iVar10);
				if (!func_288(bVar14))
				{
				}
				else
				{
					iVar19 = func_289(bVar14);
					iVar20 = func_290(func_289(bVar14));
					if (iVar20 == -1)
					{
					}
					else if (iVar19 == Global_265213.f_107995.f_13575[iVar20])
					{
						if (func_291(Global_265213.f_107995.f_14293[iVar20], 1))
						{
							bVar15[0] = bVar14;
						}
						if (func_291(Global_265213.f_107995.f_14293[iVar20], 2))
						{
							bVar15[1] = bVar14;
						}
						if (func_291(Global_265213.f_107995.f_14293[iVar20], 4))
						{
							bVar15[2] = bVar14;
						}
					}
				}
				iVar12++;
			}
			iVar13 = 0;
			while (iVar13 < 3)
			{
				if (func_17(bVar15[iVar13], 0))
				{
					func_292(bVar15[iVar13]);
				}
				iVar13++;
			}
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar14 = func_287(iVar12, iVar10);
				if (!func_288(bVar14))
				{
				}
				else
				{
					iVar19 = func_289(bVar14);
					bVar21 = false;
					iVar13 = 0;
					while (iVar13 < 3)
					{
						if (bVar15[iVar13] == bVar14)
						{
							bVar21 = true;
						}
						else
						{
							iVar13++;
						}
					}
					if (bVar21)
					{
					}
					else
					{
						func_292(bVar14);
					}
				}
				iVar12++;
			}
			DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_LIST_SIZE(Global_1940239.f_11614, Global_1940239.f_11595);
			func_92(Global_1940239.f_36);
			Global_1940239.f_11586 = 9.522126E+26f;
		}
		func_293(iVar10);
		return 1;
	}
	return 0;
}

int func_109(bool bParam0, int iParam1)
{
	bool bVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	bool bVar36;

	bVar0 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iParam1, 0);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!func_294(bVar0, -1.926391E+21f, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (Var1[iVar33 /*2*/] == 0)
		{
		}
		else
		{
			if (Var1[iVar33 /*2*/] == bParam0)
			{
				bVar36 = true;
			}
			iVar33++;
		}
	}
	if (!bVar36)
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_295(Var1[iVar33 /*2*/], 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

int func_110()
{
	bool bVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	bVar0 = STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(3.95761E+09f, 0);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!func_294(bVar0, -1.926391E+21f, &Var1, &iVar32, 0, 1))
	{
		return 0;
	}
	iVar33 = 0;
	while (iVar33 < iVar32)
	{
		if (func_295(Var1[iVar33 /*2*/], 1))
		{
			iVar34++;
		}
		iVar35++;
		iVar33++;
	}
	if (iVar34 >= iVar35)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar34, iVar35));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar34, iVar35));
	}
	return 1;
}

bool func_111(bool bParam0, var uParam1)
{
	return ITEMDATABASE::_0xF8D09EF8CE61D7BF(bParam0, uParam1);
}

bool func_112(int iParam0)
{
	return func_89(Global_1940072.f_38, iParam0);
}

int func_113()
{
	struct<10> Var0;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;
	struct<4> Var17;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0 = { func_285(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_286(Var0, &iVar11, &iVar12, 0))
	{
		iVar14 = 0;
		while (iVar14 < iVar12)
		{
			bVar10 = func_287(iVar14, iVar11);
			if (func_296(bVar10))
			{
				if (iVar13 == 0)
				{
					if (func_17(bVar10, 0) && func_19(bVar10, 9.522126E+26f))
					{
						iVar15 = 0;
						while (iVar15 < 32)
						{
							func_297(bVar10, &uVar16, &Var17);
							if (MISC::ARE_STRINGS_EQUAL(func_298(Global_265213.f_107995[iVar15 /*4*/]), func_298(Var17)))
							{
								Global_1940239.f_1556.f_8925.f_24 = Global_265213.f_107995.f_257[iVar15];
								Global_1940239.f_1556.f_8925.f_25 = 1;
							}
							else
							{
								iVar15++;
							}
						}
					}
				}
				iVar13++;
			}
			iVar14++;
		}
	}
	func_293(iVar11);
	return iVar13;
}

bool func_114()
{
	return Global_1940239.f_10;
}

void func_115(bool bParam0)
{
	Global_1940239.f_11588 = bParam0;
}

void func_116(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (Global_1940239.f_11587 == 0)
	{
		return;
	}
	iVar1 = 0;
	if (iParam3 == 0 && *uParam1 > 16)
	{
		iVar1 = (*uParam1 - 16);
	}
	iVar0 = 0;
	while (iVar0 < Global_1940239.f_41.f_1)
	{
		Global_1940239.f_41.f_2[iVar0 /*2*/] = 0;
		Global_1940239.f_41.f_2[iVar0 /*2*/].f_1 = 0;
		iVar0++;
	}
	Global_1940239.f_41.f_1 = 0;
	iVar0 = 0;
	if (*uParam1 > 0)
	{
		iVar0 = (*uParam1 - 1);
		while (iVar0 >= iVar1)
		{
			if (!func_239(iParam2, iVar0, uParam1->f_1, *uParam1))
			{
			}
			else if (!func_299(iParam2, iParam3))
			{
			}
			else
			{
				func_300(iParam2->f_4);
			}
			iVar0 = (iVar0 + -1);
		}
	}
}

void func_117()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	Global_1940239.f_11592 = 0;
	Global_1940239.f_11591 = 0;
	if (func_301())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
		{
			iVar2 = ITEMSET::CREATE_ITEMSET(false);
			PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(Global_33, iVar2);
			if (ITEMSET::IS_ITEMSET_VALID(iVar2))
			{
				iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar2);
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					iVar0 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar4, iVar2));
					if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
					}
					else
					{
						bVar1 = func_302(iVar0);
						if (func_242(bVar1))
						{
							Global_1940239.f_11592 = iVar0;
							Global_1940239.f_11591 = bVar1;
						}
					}
					iVar4++;
				}
				ITEMSET::DESTROY_ITEMSET(iVar2);
			}
		}
	}
}

void func_118()
{
	bool bVar0;
	bool bVar1;
	int iVar2;

	bVar0 = false;
	bVar1 = false;
	if (func_33(0))
	{
		iVar2 = func_274();
		if (((iVar2 == 10 || iVar2 == 15) || iVar2 == 29) || iVar2 == 16)
		{
			if (Global_1940239.f_11587 == -5.004954E+28f || (Global_1940239.f_11587 == -1.994502E+32f && func_93()))
			{
				bVar0 = true;
			}
		}
		else if (func_274() == 16)
		{
			if (Global_1940239.f_11587 == -5.004954E+28f || Global_1940239.f_11587 == -1.994502E+32f)
			{
				bVar0 = true;
			}
		}
		else if (func_274() == 2 && Global_1940239.f_11587 == -9.654275E+13f)
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			bVar1 = true;
		}
	}
	else if (Global_1940239.f_11587 == -5.004954E+28f)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_37() == 0)
		{
			func_303(1, bVar1);
		}
		else if (func_274() == 16)
		{
			func_304(1, 1);
		}
		else
		{
			func_303(1, 1);
		}
	}
}

void func_119()
{
	bool bVar0;
	int iVar1;

	bVar0 = false;
	if (func_33(0))
	{
		iVar1 = func_274();
		if (((iVar1 == 10 || iVar1 == 15) || iVar1 == 29) || iVar1 == 16)
		{
			if (Global_1940239.f_11587 == -8018687f || (Global_1940239.f_11587 == -1.994502E+32f && func_122()))
			{
				bVar0 = true;
			}
		}
		else if (func_274() == 16)
		{
			if (Global_1940239.f_11587 == -8018687f || Global_1940239.f_11587 == -1.994502E+32f)
			{
				bVar0 = true;
			}
		}
		else if (func_274() == 2 && Global_1940239.f_11587 == -9.654275E+13f)
		{
			bVar0 = true;
		}
	}
	else if (Global_1940239.f_11587 == -8018687f)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_37() == 0)
		{
			func_305(1);
		}
	}
}

void func_120()
{
	if ((Global_1940239.f_11587 == 6.319022E+25f || Global_1940239.f_11587 == -9.654275E+13f) || ((Global_1915643.f_20241 == 38 && func_33(0)) && Global_1940239.f_11587 == -1.994502E+32f))
	{
		if (func_306(0) && COLLECTION::_0x6BAB7ACED1017204(-4.951749E+19f, 0))
		{
			func_307(STATS::WEEKLY_COLLECTIBLE_GET_ITEM_SET_BUY_AWARD(3.95761E+09f, 0));
		}
	}
	if (func_308(6.643934E-37f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.643934E-37f, 0));
	}
	if (func_308(NaNf))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(NaNf, 0));
	}
	if (func_308(2.405382E+20f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.405382E+20f, 0));
	}
	if (func_308(5.266092E-27f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(5.266092E-27f, 0));
	}
	if (func_308(-5.272253E-14f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.272253E-14f, 0));
	}
	if (func_308(-3.072587E+16f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.072587E+16f, 0));
	}
	if (func_308(-3.933513E-29f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.933513E-29f, 0));
	}
	if (func_308(-2.153603E-21f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-2.153603E-21f, 0));
	}
	if (func_308(2.78471E+33f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.78471E+33f, 0));
	}
	if (func_308(1.096557E-35f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(1.096557E-35f, 0));
	}
	if (func_308(6.60208E-06f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.60208E-06f, 0));
	}
	if (func_308(-7.329766E+14f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-7.329766E+14f, 0));
	}
	if (func_308(-5.276673E+08f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.276673E+08f, 0));
	}
	if (func_308(joaat("TAROT_CARDS_WANDS")))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0));
	}
	if (func_308(3.452593E-11f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(3.452593E-11f, 0));
	}
	if (func_308(-1.05944E+30f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-1.05944E+30f, 0));
	}
	if (func_308(-2.232068E+37f))
	{
		func_307(COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-2.232068E+37f, 0));
	}
}

bool func_121(int iParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;

	if (iParam3 == 0)
	{
		func_309(iParam2, iParam3);
	}
	else
	{
		iVar1 = 0;
		if (Global_1940239.f_11646 > 0)
		{
			iVar0 = (Global_1940239.f_11646 - 1);
			while (iVar0 >= 0)
			{
				if (!func_239(iParam2, iVar0, uParam1->f_1, *uParam1))
				{
				}
				else if (!func_299(iParam2, iParam3))
				{
				}
				else
				{
					func_310(*iParam2, 0);
					iVar1++;
					if (iVar1 >= 25)
					{
						Global_1940239.f_11646 = iVar0;
						return false;
					}
				}
				iVar0 = (iVar0 + -1);
			}
		}
	}
	return true;
}

bool func_122()
{
	int iVar0;

	if (func_37() == -1)
	{
		return false;
	}
	if (!func_311())
	{
		return false;
	}
	iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_312(iVar0))
	{
		return false;
	}
	if (func_33(0))
	{
		if (func_313(Global_1915643.f_20241.f_1, iVar0))
		{
			return true;
		}
	}
	else if (func_248(iVar0, 0, 1) < 1080872141 || func_247(-8018687f))
	{
		return true;
	}
	return false;
}

void func_123()
{
	switch (Global_1940239.f_11587)
	{
		case -156634416:
			func_314();
			break;
		case 1561961676:
			break;
		case 1061777683:
			func_315();
			break;
	}
}

void func_124()
{
	if (func_17(Global_1940239.f_11591, 0) && (!func_93() || func_185(func_174(0), Global_1940239.f_11591, 0, 1, 1) == 0))
	{
		func_316(Global_1940239.f_11591, 0, 1);
	}
}

void func_125(int iParam0, int iParam1)
{
	Global_1940239.f_11585 = iParam0;
	if (func_30())
	{
		if (PED::IS_PED_CARRYING_SOMETHING(Global_33) == 0)
		{
			func_192(-7.334532E-18f);
		}
	}
	if (func_29())
	{
		func_192(-2.509875E-36f);
	}
	func_193(Global_1940239.f_11587, iParam1, 0);
}

void func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;

	Global_1940239.f_11563 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_11617);
	iVar0 = Global_1940239.f_11564[Global_1940239.f_11563];
	if (iVar0 != Global_1940239.f_11587)
	{
		Global_1940239.f_41.f_203 = 0;
		Global_1940239.f_11585 = func_90(iVar0);
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11612, iParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar1, "CurrentCategory", false);
		iVar2 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11612, Global_1940239.f_11563);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar2, "CurrentCategory", true);
		func_193(iVar0, &iVar2, 0);
	}
	else
	{
		iVar3 = 0;
		while (iVar3 < Global_1940239.f_11562)
		{
			iVar4 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11612, iVar3);
			bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory");
			bVar6 = !Global_1940239.f_11564[iVar3] != Global_1940239.f_11587;
			if (bVar5 != bVar6)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar4, "CurrentCategory", bVar6);
			}
			iVar3++;
		}
		Global_1940239.f_11585 = func_90(Global_1940239.f_11587);
	}
}

bool func_127(int iParam0, int iParam1)
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
	if (func_89(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 2))
	{
		if (PED::IS_PED_HOGTIED(iParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_89(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return false;
		}
	}
	if (func_89(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 64))
	{
		if (PED::IS_PED_INCAPACITATED(iParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return false;
		}
	}
	if (func_89(iVar0, 256))
	{
		if (!PED::IS_PED_READY_TO_RENDER(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_128(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_318(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_167(bParam0, bParam4, 0) };
	Var6 = { func_168(bParam0, Var1, Var1.f_4, bParam4) };
	return func_319(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_129(bool bParam0, bool bParam1)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_19(bParam0, 9.522126E+26f);
	if (!func_17(bParam0, 0))
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
		fVar1 = func_320(bParam0);
		if (func_19(bParam0, 888.6404f))
		{
			fVar1 |= 64;
		}
		if (!func_65(1, fVar1))
		{
			return false;
		}
	}
	if (bParam0 == -7.729678E-14f || bParam0 == -6.721167E-35f)
	{
		if (func_218())
		{
			return false;
		}
	}
	if (!bVar0 && !func_295(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_130(bool bParam0)
{
	if (func_140(bParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(0), bParam0, func_33(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_206(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_321() != -1)
			{
				func_144(func_322(func_321()), 10000, 0, 0, 0, 1);
				func_323(-1);
			}
			break;
	}
	return true;
}

bool func_131(bool bParam0)
{
	struct<16> Var0;

	if (bParam0 == 2.622451E-38f)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_138(Var0, 0);
		return true;
	}
	return false;
}

void func_132(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_133(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_134(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_135(bool bParam0)
{
	if (func_37() == 0 && func_325(func_324(bParam0), 1, 0) != 0)
	{
		func_144("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_136(bool bParam0)
{
	if (func_10(bParam0, 104.1169f) == 9.522126E+26f)
	{
		func_326(0);
		func_327(func_289(bParam0));
		return true;
	}
	return false;
}

bool func_137(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_328(bParam0, bParam1, 0, 0, -1f))
	{
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_10(bParam0, -60352.49f))
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
				if (!func_329())
				{
					if (func_330(&Global_33))
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
					func_144("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_331(bParam0);
				}
				else
				{
					func_332(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_333(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_334(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_335(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_331(bParam0);
				}
				else
				{
					func_336(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_331(bParam0);
				}
				else
				{
					func_337(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_331(bParam0);
				}
				else
				{
					func_338(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_331(bParam0);
				}
				else
				{
					func_339(bParam0);
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
				func_340(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_341(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_342(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_331(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_343(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_344(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_138(struct<16> Param0, int iParam16)
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
	if (!func_345(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_346(&(Param0.f_10)))
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
			func_347(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_139()
{
	return Global_1893611 & 2 != 0;
}

bool func_140(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (func_142(bParam0) == -4.32037E-21f)
	{
		return true;
	}
	return false;
}

int func_141(int iParam0)
{
	return func_348(iParam0);
}

int func_142(bool bParam0)
{
	vector3 vVar0;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_143(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_142(bParam0) == -42.1084f)
	{
		if (func_145(bParam0) == -947.1324f)
		{
		}
	}
	return true;
}

int func_144(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_145(bool bParam0)
{
	struct<2> Var0;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_146()
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

bool func_147(int iParam0)
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

void func_148(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_349(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_350(Var0);
}

int func_149(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_223())
	{
		return 0;
	}
	if (!func_351(bParam0))
	{
		return 0;
	}
	if (func_352(bParam0))
	{
		iVar0 = 0;
		if ((func_145(bParam0) == 5.002459E-36f || func_19(bParam0, 3.611922E-33f)) && !func_19(bParam0, -1.186825E-08f))
		{
			if (bParam1)
			{
				func_236(&iVar0, 2);
			}
		}
		return func_353(bParam0, iVar0);
	}
	return 0;
}

void func_150(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1953279.f_1676.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_151(Global_33, -5.222721E-36f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
		func_152(bParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_151(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
	if (func_354(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_355();
		func_349(128);
		return;
	}
	if (bVar1 == Global_1953279.f_83[iVar0 /*12*/])
	{
		func_152(bParam0, 1, 0);
		return;
	}
	if (func_356(-7.463622E-36f, 0))
	{
		if (func_190(bVar1))
		{
			func_152(bVar1, 0, 0);
		}
		else
		{
			func_357(bVar1, 1, 1, 0, 0, 0);
		}
		func_152(bParam0, 1, 0);
		return;
	}
	if (func_190(bVar1))
	{
		func_152(bVar1, 0, 0);
		func_152(bParam0, 1, 0);
	}
	else if (func_190(bParam0))
	{
		if (bParam0 != func_358(0))
		{
			func_359(bParam0, bVar1, 0, 0, 0);
			func_152(bParam0, 0, 0);
			func_152(bVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_349(128);
			func_152(bParam0, 1, 0);
		}
	}
}

int func_151(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -1.003831E+26f)
	{
		Var0 = { func_167(bParam1, 1, 0) };
		bParam3 = func_360(Var0.f_4);
		if (bParam3 == -1.003831E+26f)
		{
			return 0;
		}
	}
	if (!func_362(bParam1, iParam2, func_361(bParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_363(1, bParam5, bParam9, 1, bParam11);
	if (bParam10)
	{
		if (func_364(bParam1, 0))
		{
			func_365(Global_1953279.f_1676.f_1[func_361(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_365(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953279.f_83[func_361(bParam3, 1) /*12*/])
			{
				func_148(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_354(32768))
			{
				func_355();
				func_148(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_366(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_367(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_148(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_148(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_152(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_167(bParam0, bParam2, 0) };
	Var5 = { func_168(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_368(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(bParam2), &Var5, bParam1);
}

bool func_153(int iParam0, bool bParam1)
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
	Var8 = { func_168(5.207907E-07f, func_369(bParam1), 0.08386164f, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_145(bVar1) == iParam0 || (iParam0 == 5.002459E-36f && func_19(bVar1, 3.611922E-33f)))
		{
			Var3 = { func_168(bVar1, Var8, fVar7, bParam1) };
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_199(bParam1), &Var3))
			{
				bVar2 = bVar1;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_199(bParam1), &Var3, false);
			}
		}
		iVar0++;
	}
	return bVar2;
}

int func_154(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_94(iParam0);
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
	if (func_370(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_155(int iParam0)
{
	int iVar0;

	iParam0 = func_249(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_371())
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

void func_156()
{
	int iVar0;

	if (func_372())
	{
		return;
	}
	if (func_373(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_373(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
					func_374(16);
				}
				func_375(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				{
				}
				else
				{
					func_374(8);
					func_375(0);
				}
		}
		return;
	}
	if (func_376())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 4.553053E+26f, -7.591204E-34f, 1, 0, -1f);
		Global_1915643.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_377();
	}
	else
	{
		iVar0 = func_379(func_378());
		if (iVar0 != -1)
		{
			func_144(func_322(iVar0), 10000, 0, 0, 0, 1);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_380(0);
			func_323(-1);
		}
	}
}

bool func_157(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_381() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_382(16))
	{
		return false;
	}
	if (func_383())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_384())
	{
		return false;
	}
	if (func_385(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_89(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_160())
	{
		return false;
	}
	return true;
}

int func_158(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_386();
	}
	if (!func_387(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_388(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

bool func_159(int iParam0)
{
	return func_89(Global_1147168.f_8, iParam0);
}

bool func_160()
{
	int iVar0;

	iVar0 = func_389(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_89(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

void func_161()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_390(0) };
	if (func_391(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_392(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_393(iVar2) == -4.537018E+10f)
				{
					func_144("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_144("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_144("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_144("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_162(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_395(Var0, func_394(0, 8), 0, 0);
}

float func_163(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_164(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_397(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_398(iVar0, iVar1);
}

void func_165(bool bParam0)
{
	if ((func_37() != -1 || !bParam0) || func_246(Global_33))
	{
		func_399();
		return;
	}
}

void func_166()
{
	int iVar0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		iVar0 = PLAYER::PLAYER_ID();
		func_400(1, iVar0);
	}
}

struct<5> func_167(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_369(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_142(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_168(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_401(bParam1) };
			if (bParam2 && func_402(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_403(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_403(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_404(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_405(bParam1) };
			switch (func_145(bParam0))
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
			if (func_406(bParam0, -2.580501E-27f))
			{
				Var0 = { func_168(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_406(bParam0, -4.220332E-15f))
			{
				Var0 = { func_168(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_168(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_406(bParam0, -3.171238E-21f))
			{
				Var0 = { func_168(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_407(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_406(bParam0, -3.171238E-21f))
			{
				Var0 = { func_168(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_168(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_17(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_199(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_169(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_170(0))
	{
		return func_408(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_407(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_199(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_170(bool bParam0)
{
	if (func_37() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_199(bParam0));
}

void func_171()
{
	bool bVar0;

	if (!func_65(1, 124032))
	{
		return;
	}
	bVar0 = WEAPON::_GET_PED_WORST_WEAPON(Global_33, false, false, false);
	if (func_409(bVar0))
	{
		func_411(1, bVar0, func_410());
	}
	else
	{
		func_144("HELP_CANNOT_USE_GUN_OIL", 10000, 0, 0, 0, 1);
	}
}

int func_172(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_412(bParam0);
	iVar2 = func_413(bParam0);
	if (iVar2 != 0)
	{
		if (!func_170(0) || func_414())
		{
			if (bParam2)
			{
				func_416(func_415(1.361312E-33f, -2.56015E-24f), 1);
				return func_417(iVar2, iVar1, bParam0, iParam1);
			}
			Var3 = { func_167(bParam0, 1, 0) };
			Var8 = { func_168(bParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_418(bParam0, &Var8, 1, -5.149929E+33f, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -5.149929E+33f;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_419(iVar12, Var13);
			}
			return 0;
		}
		if (func_181(bParam0, 1, 1, -5.149929E+33f))
		{
			iVar0 = func_417(iVar2, iVar1, bParam0, iParam1);
		}
	}
	return iVar0;
}

bool func_173(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam0 == 9.153931E+13f || bParam0 == -3.694174E-13f)
	{
		return false;
	}
	if (func_19(bParam0, -1.051639E+07f) || func_19(bParam0, -5.092244E+08f))
	{
		if (bParam2)
		{
			return func_19(bParam0, -2.635625E-06f);
		}
		else if (bParam1)
		{
			return !func_19(bParam0, -2.635625E-06f);
		}
		else
		{
			return true;
		}
	}
	return false;
}

int func_174(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_175(int iParam0)
{
	return iParam0;
}

int func_176(bool bParam0, int iParam1)
{
	if (func_37() == -1)
	{
		if (func_420(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	if (func_37() == 0)
	{
		if (func_420(bParam0, iParam1))
		{
			return 1;
		}
		return 0;
	}
	return 1;
}

bool func_177(bool bParam0)
{
	if (func_19(bParam0, 1.293259E-18f))
	{
		return false;
	}
	if (func_19(bParam0, 3.829773E+34f))
	{
		return true;
	}
	return false;
}

bool func_178()
{
	return Global_17418.f_2992.f_21;
}

bool func_179(bool bParam0)
{
	if (Global_17418.f_2992.f_17 == bParam0)
	{
		return true;
	}
	return false;
}

void func_180()
{
	func_421(&(Global_17418.f_2992), 3);
}

bool func_181(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_422(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_423(bParam0, 1);
	if (bVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return false;
		}
		WEAPON::_REMOVE_AMMO_FROM_PED_BY_TYPE(Global_33, bVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_424(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_295(bParam0, 1))
	{
		return false;
	}
	Var5 = { func_425(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_263(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_263(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_181(bParam0, func_263(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_142(bParam0) == -3.265313E+23f)
	{
		if (!func_426(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_128(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_167(bParam0, 0, 0) };
		if (func_170(0) && Var7.f_4 == 4.978612f)
		{
			func_88(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_170(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_424(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

int func_182()
{
	return Global_1940239.f_11587;
}

bool func_183(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iParam1 = func_427(bParam0, iParam1, iParam2, 1, 1, -5.149929E+33f, 0, 1);
	if (iParam1 <= 0)
	{
		return true;
	}
	return func_428(bParam0, iParam1, bParam3, iParam4);
}

bool func_184(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	if (bParam3)
	{
		if (!func_311())
		{
			return false;
		}
	}
	if (!func_429(bParam0, iParam1, iParam4, iParam2, 1))
	{
		return false;
	}
	func_430();
	return true;
}

int func_185(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_263(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_264(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_265(bParam1, bParam4));
	}
	return iVar0;
}

int func_186(int iParam0, var uParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = 0;
	if (iParam2 < 1)
	{
		iParam2 = 10;
	}
	bVar1 = false;
	*uParam1 = DATAFILE::_PARSEDDATA_LOAD_FILE_HASH(iParam0);
	while ((!DATAFILE::PARSEDDATA_IS_FILE_LOADED(*uParam1) && iVar0 < iParam2) && !bVar1)
	{
		if (Global_1572887.f_14 != -1)
		{
			bVar1 = func_198(bParam4, bParam5);
		}
		iVar0++;
		BUILTIN::WAIT(0);
	}
	if (Global_1572887.f_14 != -1)
	{
		bVar1 = func_198(bParam4, bParam5);
	}
	if (bVar1)
	{
		func_431();
	}
	if (iVar0 >= iParam2)
	{
		iVar0 = 0;
		return 0;
	}
	iVar0 = 0;
	return 1;
}

void func_187()
{
	if (func_37() == -1)
	{
		if (!func_432(18, &(Global_1940239.f_11641)))
		{
			return;
		}
	}
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 0, "satchel_elements/name(id=%x):texture0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 1, "satchel_elements/name(id=%x):texturedictionary0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 2, "satchel_elements/name(id=%x):name0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 3, "satchel_elements/name(id=%x):description0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 4, "satchel_elements/name(id=%x):category0");
	DATAFILE::_PARSEDDATA_REGISTER_QUERY(Global_1940239.f_11641, 5, "satchel_elements/name(id=%x):colorid0");
}

int func_188()
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

void func_189(int iParam0)
{
	Global_1940239.f_11562 = 0;
	if (!Global_1940239.f_9)
	{
		func_192(0);
		func_433();
	}
	else if (((((Global_1940239.f_11587 != -2.509875E-36f && Global_1940239.f_11587 != -5.004954E+28f) && Global_1940239.f_11587 != -8018687f) && Global_1940239.f_11587 != 1.890447E-09f) && Global_1940239.f_11587 != -1.994502E+32f) && Global_1940239.f_11587 != -9.654275E+13f)
	{
		func_46(Global_1940239.f_11587);
	}
	else
	{
		func_192(0);
		func_433();
	}
	func_434(iParam0, 0, "ALL EXCLUDING CLOTHING", 5.088623E-23f);
	func_434(iParam0, -1.122582E-21f, "Provisions", 2.196948E+35f);
	func_434(iParam0, -2.39227E+35f, "Remedies", -1.101219E+17f);
	func_434(iParam0, -2.155093E-07f, "Ingredients", 0.8790054f);
	func_434(iParam0, -7.334532E-18f, "Materials", -3.926783E-37f);
	func_434(iParam0, -1.723482E+33f, "Kit", -1.878227E+22f);
	func_434(iParam0, 6.919499E+17f, "Valuables", -3.249048E-35f);
	func_434(iParam0, 0.7868816f, "Documents", 9.468043E+24f);
	if (func_295(-4.629755E-24f, 1))
	{
		func_434(iParam0, 6.319022E+25f, "Collections", -3.476215E-12f);
	}
	func_435(iParam0);
	func_436(iParam0);
	func_437(iParam0);
	if (func_33(0))
	{
		if (func_274() == 2)
		{
			func_192(-9.654275E+13f);
		}
		else
		{
			func_192(-1.994502E+32f);
		}
	}
	else if (func_247(-5.004954E+28f))
	{
		func_192(-5.004954E+28f);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11615, Global_1940239.f_11562);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11617, func_188());
}

bool func_190(bool bParam0)
{
	var uVar0;

	return func_438(bParam0, &uVar0);
}

int func_191(int iParam0, char* sParam1, int iParam2, char* sParam3, int iParam4)
{
	int iVar0;
	int iVar1;

	iVar0 = Global_1940239.f_11577;
	if (iVar0 >= 3)
	{
		return -1;
	}
	if (!func_254(sParam3, &(Global_1940239.f_11578[iVar0 /*2*/].f_1), &(Global_1940239.f_11578[iVar0 /*2*/]), iParam4, 0))
	{
		return -1;
	}
	Global_1940239.f_11577++;
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam0, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar1, "label", iParam2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(iParam0, -1, -4.679584E-08f, iVar1);
	return iVar0;
}

void func_192(int iParam0)
{
	int iVar0;

	if (Global_1940239.f_11587 != iParam0)
	{
		Global_1940239.f_11587 = iParam0;
		Global_1940239.f_11597 = 1;
	}
	iVar0 = func_188();
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11617, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11616, iVar0);
	func_439((Global_1940239.f_11587 != -5.004954E+28f && Global_1940239.f_11587 != -8018687f));
}

void func_193(int iParam0, int iParam1, bool bParam2)
{
	func_192(iParam0);
	if (!bParam2)
	{
		func_15(iParam0);
	}
}

int func_194()
{
	int iVar0;
	int iVar1;

	if (Global_1940239.f_40 == 0)
	{
		Global_1940239.f_11563 = 0;
	}
	else
	{
		iVar0 = Global_1940239.f_11563;
		iVar1 = (Global_1940239.f_11562 - 1);
		switch (Global_1940239.f_40)
		{
			case -2074770370:
			case -693134279:
			case -182626652:
				Global_1940239.f_11563 = iVar1;
				break;
		}
		if (Global_1940239.f_40 == -5.004954E+28f)
		{
			if (func_33(0))
			{
				Global_1940239.f_11563 = (iVar1 - 1);
			}
			else
			{
				Global_1940239.f_11563 = iVar1;
			}
		}
		func_126(iVar0);
		return 1;
	}
	return 0;
}

bool func_195()
{
	return (Global_1915643.f_20637 || Global_1915643.f_22504.f_1);
}

void func_196()
{
	if (Global_1572887.f_14 == -1)
	{
		return;
	}
	Global_1072759.f_2 = 0;
}

void func_197(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(*uParam0);
	while (Global_1940239.f_11577 > 0)
	{
		Global_1940239.f_11577 = (Global_1940239.f_11577 - 1);
		func_253(Global_1940239.f_11578[Global_1940239.f_11577 /*2*/].f_1);
	}
}

bool func_198(bool bParam0, bool bParam1)
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

int func_199(bool bParam0)
{
	if (func_37() == -1)
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

bool func_200(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;
	struct<18> Var17;
	int iVar35;

	if (func_440(Global_33))
	{
		bParam2 = true;
	}
	iVar0 = -1;
	iVar2 = 0;
	Var3.f_9 = -5.45926E-19f;
	if (Global_1940072.f_80.f_2 == 0)
	{
		iVar0 = INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(func_199(0), 32, &iVar1);
		if (iVar0 < 0)
		{
		}
		else
		{
			if (iVar1 > 0)
			{
				iVar2 = 0;
				while (iVar2 < 32)
				{
					if (!func_239(&Var3, iVar2, iVar0, iVar1))
					{
					}
					else if (!func_441(Var3))
					{
					}
					else if (Var3.f_4 == -0.06342195f)
					{
						if (Global_1110244.f_21.f_127)
						{
						}
						else if (bParam1)
						{
							func_442(iParam0, Var3.f_4, 1);
						}
						else if (bParam2)
						{
							func_442(iParam0, Var3.f_4, 0);
						}
						else if (Var3.f_4 != 9605447f)
						{
							func_442(iParam0, Var3.f_4, func_443(Var3.f_4));
						}
						iVar2++;
						func_253(iVar0);
						Var17 = { func_444(0, 4.978612f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
						if (func_445(&Var17, &iVar0, &iVar1, bParam3))
						{
							if (Global_1940072.f_80.f_2 > iVar1)
							{
								func_253(iVar0);
								return true;
							}
							iVar35 = 0;
							iVar2 = Global_1940072.f_80.f_2;
							while (iVar2 <= (iVar1 - 1))
							{
								iVar35++;
								if (iVar35 > 100)
								{
									Global_1940072.f_80.f_2 = iVar2;
									func_253(iVar0);
									return false;
								}
								if (func_239(&Var3, iVar2, iVar0, iVar1))
								{
									if (!func_441(Var3))
									{
									}
									else if (Var3.f_4 == -0.06342195f)
									{
										if (Global_1110244.f_21.f_127)
										{
										}
										else if (bParam1)
										{
											func_442(iParam0, Var3.f_4, 1);
										}
										else if (bParam2)
										{
											func_442(iParam0, Var3.f_4, 0);
										}
										else if (Var3.f_4 != 9605447f)
										{
											func_442(iParam0, Var3.f_4, func_443(Var3.f_4));
										}
										iVar2++;
										func_253(iVar0);
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

void func_201(int iParam0)
{
	func_442(iParam0, -1.178843E+33f, func_54(32));
	func_442(iParam0, 1.171813E+21f, func_54(32));
	func_442(iParam0, -230.1699f, func_54(64));
	func_442(iParam0, 5.402792E-27f, func_54(131072));
	func_442(iParam0, -2.692268E-16f, func_54(1024));
	func_442(iParam0, -8.284301E+07f, (func_54(32768) && !func_235(256)));
	func_442(iParam0, 1.174009E+12f, func_54(524288));
	func_446(iParam0, func_54(8192));
	func_447(iParam0, func_54(128));
	if (!Global_1110244.f_21.f_127)
	{
		func_442(iParam0, -0.06342195f, func_54(262144));
	}
	func_448(iParam0, func_54(4));
	func_449(iParam0, func_54(8));
	func_450(iParam0, func_54(1));
}

bool func_202(int iParam0)
{
	return (func_451(iParam0, 4) || func_451(iParam0, 5));
}

bool func_203(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

bool func_204(int iParam0)
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

bool func_205(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = iVar0;
	if (Global_1148170[iVar1 /*10*/].f_4)
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_IN_COMBAT(Global_33, 0))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_452(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_453(-1.04787E+17f) || SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-1.04787E+17f) > 0)
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) || (!PED::IS_PED_RAGDOLL(Global_33) && PED::IS_PED_ON_VEHICLE(Global_33, false))) || PED::IS_PED_IN_ANY_BOAT(Global_33)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_33))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_220(0, 1, 1) && !func_454(1))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_455())
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_235(8))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_12(Global_33))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_ANY_HOSTILE_PED_NEAR_POINT(Global_33, Global_34, 10f))
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_HOSTILE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_456())
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (Global_1915643.f_20637 || Global_1915643.f_22504.f_1)
	{
		if (bParam0)
		{
			func_144("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_206(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_44.f_87);
}

bool func_207(bool bParam0)
{
	if (PED::IS_PED_HOGTIED(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_HOGTYING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_LASSOED(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_BEING_DRAGGED(Global_33))
	{
		return false;
	}
	if (!PED::_GET_LASSO_TARGET(Global_33) == 0)
	{
		return false;
	}
	if (PED::_IS_PED_DRAGGING(Global_33))
	{
		return false;
	}
	if (PED::GET_PED_IS_BEING_GRAPPLED(Global_33))
	{
		return false;
	}
	if (PED::GET_PED_IS_GRAPPLING(Global_33) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 4096, 0))
	{
		return false;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_33, 32768, 0))
	{
		return false;
	}
	return true;
}

bool func_208(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_SWIMMING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_CLIMBING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_204(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_FALLING_OVER(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_RAGDOLL(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_VAULTING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (PED::IS_PED_JUMPING(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_GETTING_UP(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_209(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_33))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_210()
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
	if (!func_391(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_211()
{
	return Global_1235672.f_9478 != -1;
}

bool func_212(float fParam0, int iParam1)
{
	if (((PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::IS_PED_IN_MELEE_COMBAT(Global_33)) || func_228(iParam1, 1024)) && PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Global_33, Global_34, fParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_213()
{
	return PED::_GET_PLAYER_PED_WATER_DEPTH(Global_33) >= 1f;
}

bool func_214(bool bParam0)
{
	int iVar0;

	iVar0 = func_457();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = HUD::_0x0501D52D24EA8934(1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_217(iVar0))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar0) && !TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iVar0))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_215(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		return true;
	}
	else if (PLAYER::GET_PLAYER_INTERACTION_TARGET_ENTITY(PLAYER::GET_PLAYER_INDEX(), &iVar0, false, false))
	{
		if (!func_217(iVar0))
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0))))
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (func_248(iVar0, 1, 1) > 2f)
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam0)
			{
				func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return false;
		}
		return true;
	}
	iVar1 = HUD::_0x0501D52D24EA8934(1);
	if (!func_217(iVar1))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_VEHICLE_DRAFT_HORSE_IS_ATTACHED_TO(iVar1)))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iVar1))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_216(int iParam0)
{
	return func_451(iParam0, 7);
}

bool func_217(int iParam0)
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

bool func_218()
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

int func_219()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return 0;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		return 0;
	}
	return 0;
}

bool func_220(int iParam0, bool bParam1, bool bParam2)
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
		if (func_210())
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
	if (iParam0 == 0 && func_391(func_390(0)))
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
	switch (func_458(func_390(0)))
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

bool func_221()
{
	return Global_1913621.f_1578;
}

bool func_222()
{
	if ((func_210() || Global_1572887.f_72.f_40 > 10) || func_459())
	{
		if ((!func_460() && Global_265213.f_122484.f_80.f_16.f_2 != -5.544348E+20f) && !func_461(Global_265213.f_122484.f_80.f_16.f_3))
		{
			return true;
		}
	}
	return false;
}

bool func_223()
{
	return Global_1953279.f_3502;
}

void func_224(var uParam0, int iParam1)
{
	func_462(uParam0, iParam1);
}

int func_225(int iParam0)
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

bool func_226(int iParam0)
{
	return (Global_1953279.f_3352.f_33.f_6 && iParam0) != 0;
}

float func_227()
{
	return 0.1209659f;
}

bool func_228(float fParam0, int iParam1)
{
	return (fParam0 && iParam1) != 0;
}

bool func_229(bool bParam0)
{
	int iVar0;

	if (func_8(1))
	{
		if (bParam0)
		{
			func_144("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(2) && MISC::GET_GAME_TIMER() >= Global_17395)
	{
		if (bParam0)
		{
			iVar0 = func_463(Global_33);
			if (iVar0 != 0)
			{
				if (ENTITY::GET_IS_ANIMAL(iVar0))
				{
					func_144("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_144("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_8(4194304))
	{
		return false;
	}
	return true;
}

bool func_230(bool bParam0, bool bParam1)
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
			func_144("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_231(bool bParam0, float fParam1, bool bParam2)
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
					func_144("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case joaat("BREACH_CANNON"):
			case joaat("GATLING_GUN"):
			case joaat("GATLINGMAXIM02"):
			case joaat("HOTCHKISS_CANNON"):
				if (bParam0)
				{
					func_144("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_228(fParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_33))
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

bool func_232(int iParam0, int iParam1)
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

bool func_233(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_234(int iParam0, bool bParam1)
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

bool func_235(int iParam0)
{
	return (Global_1958662 && iParam0) != 0;
}

void func_236(int iParam0, int iParam1)
{
	func_464(iParam0, iParam1);
}

bool func_237()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_185(func_174(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_100(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_238(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

bool func_239(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_240(int iParam0)
{
	switch (iParam0)
	{
		case -1649851713:
		case -997505963:
		case 1005272:
		case 348853959:
		case 359221401:
		case 1045621973:
		case 1463321587:
		case 1583044470:
		case 1651573695:
			return true;
	}
	return false;
}

bool func_241(bool bParam0, int iParam1)
{
	return iParam1 == func_10(bParam0, 512441.5f);
}

bool func_242(bool bParam0)
{
	int iVar0;

	if (Global_1940239.f_17.f_16 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_1940239.f_17.f_16)
		{
			if (Global_1940239.f_17[iVar0 /*3*/] != bParam0)
			{
			}
			else if (Global_1940239.f_17[iVar0 /*3*/].f_1 & 1 != 0)
			{
				return false;
			}
			iVar0++;
		}
	}
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_CARCASS_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HIGH_QUALITY"):
			return false;
	}
	if (func_19(bParam0, 1.570684E+33f) && func_368(func_465(bParam0), func_369(1), 4.978612f, 0, 0, 0) > 0)
	{
		return false;
	}
	if (func_33(0))
	{
		if (Global_1940239.f_11587 == -1.994502E+32f && !func_273(bParam0, Global_1915643.f_20241.f_1))
		{
			return false;
		}
		if (Global_1940239.f_11587 == 0 && (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0) || func_466(bParam0)))
		{
			return false;
		}
		switch (Global_1915643.f_20241)
		{
			case 2:
				if (!func_467(bParam0))
				{
					return false;
				}
				break;
		}
	}
	if (func_19(bParam0, -8.900441E+09f))
	{
		if (!UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
		{
			return false;
		}
	}
	if (func_142(bParam0) == -2.310337E-38f)
	{
		if (!func_19(bParam0, -3.612941E-17f) && !func_19(bParam0, 37699.67f))
		{
			return false;
		}
		else if (bParam0 == 9.248502E+28f || bParam0 == 6.236711E+08f)
		{
			return false;
		}
	}
	return true;
}

void func_243(struct<12> Param0, var uParam12, var uParam13)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	float fVar5;

	if (func_17(Param0.f_4, 0))
	{
		bVar0 = func_468(Param0.f_4);
		if (bVar0 == 0)
		{
			bVar0 = func_267(Param0.f_4, 0);
		}
		iVar1 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11614, Global_1940239.f_11595);
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar1))
		{
			return;
		}
		iVar2 = iVar1;
		bVar3 = func_469(Param0.f_4);
		if (func_19(Param0.f_4, 8.572166E+11f))
		{
			Param0.f_10 = 1;
		}
		if (func_317(Param0.f_4, -3.294982E+22f) != 0)
		{
			iVar4 = func_368(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 4.978612f && iVar4 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar4;
		}
		fVar5 = 4.808429E-35f;
		if (func_470(Param0.f_4))
		{
			if (func_19(Param0.f_4, 9.618302E+26f))
			{
				fVar5 = -1.101616E-25f;
			}
		}
		else if (func_471(Param0.f_4))
		{
			fVar5 = -1.101616E-25f;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, iVar2, bVar0, Param0.f_11, Param0.f_10, bVar3, fVar5, Param0.f_4, "");
		Global_1940239.f_11595++;
	}
}

bool func_244(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

bool func_245(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_472(iParam0);
	if (!func_278(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051832.f_92[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_473(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_474(vVar1))
	{
		return false;
	}
	fVar4 = func_475(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_476(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_476(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

bool func_246(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

bool func_247(int iParam0)
{
	if (iParam0 == Global_1940239.f_40)
	{
		return true;
	}
	return false;
}

float func_248(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_477(Global_33, iParam0, bParam1, bParam2);
}

int func_249(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_250(int iParam0)
{
	iParam0 = func_249(iParam0);
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

float func_251(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

float func_252(int iParam0)
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

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_478(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_479(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_479(iParam0) + 1;
	fVar6 = func_480(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(func_481(iVar0, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(func_481(iVar0, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_482(fVar3, fVar4, fVar11);
	return fVar12;
}

bool func_253(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iParam0))
	{
		return false;
	}
	return true;
}

bool func_254(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_199(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_255()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11634, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11633, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11631, false);
}

int func_256(bool bParam0)
{
	int iVar0;

	iVar0 = func_257(bParam0);
	if ((iVar0 != 0 && !func_483(func_257(bParam0))) && !func_484(func_257(bParam0)))
	{
		if (!func_258(iVar0))
		{
			return -1.982404E-33f;
		}
	}
	return func_289(bParam0);
}

int func_257(bool bParam0)
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

bool func_258(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return func_486(iParam0, 4, 1);
}

void func_259(bool bParam0, int iParam1)
{
	if (func_43())
	{
		func_487(1);
		if (func_29())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), 3.084083E-36f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), -5.269933E+37f);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11634, true);
	}
	else if (func_33(0) || func_43())
	{
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11631))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam1, "focusable"));
		}
	}
	else
	{
		func_489(bParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), func_490(bParam0));
		func_491(bParam0, iParam1);
	}
}

int func_260(bool bParam0)
{
	if (func_261())
	{
		return 0;
	}
	if (Global_1940239.f_11590 == bParam0)
	{
		return 0;
	}
	if (!func_33(0) && !func_43())
	{
		if ((((func_266(bParam0, 0) == 1 || func_19(bParam0, 1.322346E+08f)) || func_19(bParam0, -329878.1f)) || func_19(bParam0, 4.196335E-12f)) || func_19(bParam0, -1.15596E+32f))
		{
			return 0;
		}
		return 1;
	}
	return 0;
}

bool func_261()
{
	return Global_1940239.f_12;
}

int func_262(bool bParam0, bool bParam1)
{
	if (!func_177(bParam0))
	{
		return 0;
	}
	if (func_220(0, 0, 1))
	{
		return 1;
	}
	if (bParam0 == -5.19135E+32f)
	{
		if (!func_295(6.914108E-36f, 1))
		{
			return 3;
		}
	}
	else if ((bParam0 == 274.9337f || bParam0 == -92891.77f) || bParam0 == 1.543751E+28f)
	{
		if (!func_295(-8.284301E+07f, 1))
		{
			return 4;
		}
	}
	if (bParam0 == -3.215088E-27f)
	{
		if (!func_295(-8.284301E+07f, 1))
		{
			return 4;
		}
		else if (!func_492())
		{
			return 5;
		}
	}
	if (bParam1)
	{
		if (Global_17418.f_2992 > 0)
		{
			return 2;
		}
	}
	return 0;
}

int func_263(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_142(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_423(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_493(bParam0, 0);
	}
	if (func_317(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_494(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_264(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_495(bParam1))
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
			return func_496(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_265(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_311())
	{
		return func_368(bParam0, func_369(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

int func_266(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_167(bParam0, 0, 0) };
	return func_497(bParam0, &Var0, 0, bParam1);
}

bool func_267(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_498(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_268(bool bParam0)
{
	int iVar0;
	bool bVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	int iVar7;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	iVar0 = 0;
	if (func_37() == 0)
	{
		bVar1 = false;
		if (func_145(bParam0) == -1.217584E-17f)
		{
			bVar1 = func_499(bParam0, 1);
		}
		else
		{
			switch (Global_1915643.f_20241)
			{
				case 10:
					if (func_19(bParam0, 0.01181408f))
					{
						bVar1 = func_500(bParam0);
					}
					break;
				case 15:
					bVar1 = func_501(bParam0);
					break;
			}
		}
		if (bVar1 != 0 && ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar1))
		{
			iVar0 = func_270(bVar1, 3.996812E+36f);
		}
		else
		{
			iVar0 = func_502(bParam0, 1.237736E-09f, 1, 0);
		}
	}
	else
	{
		fVar2 = 1f;
		fVar3 = 1f;
		iVar4 = Global_1915643.f_20241.f_1;
		iVar5 = Global_1915643.f_20241;
		if (func_244(iVar4) && func_278(iVar5))
		{
			if (iVar5 == 10 || iVar5 == 15)
			{
				fVar3 = func_503(iVar4, bParam0);
			}
			fVar2 = func_504(&(Global_1915643.f_3[iVar5 /*447*/].f_36), bParam0);
		}
		fVar6 = (fVar2 + fVar3);
		if (fVar2 <= 0f)
		{
			return 0;
		}
		fVar6 = (fVar6 - IntToFloat(BUILTIN::FLOOR(fVar6)));
		iVar7 = func_502(bParam0, 1.237736E-09f, 1, 0);
		iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar7) + (BUILTIN::TO_FLOAT(iVar7) * fVar6)));
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_269(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ANIMAL_FAT"):
			return -8.964615E-36f;
		case joaat("PROVISION_BUCK_ANTLER_LEGENDARY"):
			return -1.368313E-35f;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return -1.368313E-35f;
		case joaat("PROVISION_ELK_ANTLER_LEGENDARY"):
			return -8.200028E+28f;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -8.200028E+28f;
		case joaat("PROVISION_MOOSE_ANTLER_LEGENDARY"):
			return 7.547379E+25f;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return 7.547379E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -5.957865E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -2.544349E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 2.735548E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return -1.514158E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -2.43318E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return -1.979807E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1.340656E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 6.260363E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 2.58263E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -1.921098E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return 1.558373E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -4.196911E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 6.003454E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -7.074241E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 1.822221E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return 10369.4f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -1.319894E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -2.682988E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 2.258195E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -8751.434f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return -4.426206E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 3.343144E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -4.217508E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -4.217508E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return -4.217508E+21f;
		case joaat("PROVISION_FISH_BLUEGILL_LEGENDARY"):
			return -4.648415E-30f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 0.003555405f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -2.903561E+27f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -0.0003503272f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 3.651668E-37f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return 1.877095E+28f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -6.829444E+16f;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 0.004006243f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -0.0002076071f;
		case joaat("PROVISION_FISH_PERCH"):
			return 2.844331E+19f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 1.149057E-17f;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 0.005388449f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -1.78329E-38f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 2.03336E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -1.023319E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 5.302107E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -2.097627E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -2.160691E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -1.419396E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 2.21944E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -2.057714E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -1.518196E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 6.068627E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 7.959494E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -1.981656E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return -4.557902E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 7.677466E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1.630691E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1.658924E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -1.45862E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 1.982745E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 6.2198E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 4.619531E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -4.356489E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 2.414424E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -2.309997E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -1.121962E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return -0.02881889f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return 1.720751E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 2.701955E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 6.148143E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -1.490406E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 2.918754E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1.372539E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -7.022999E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -1.509555E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 9.762601E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return 4.157188E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 1.203942E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return -1.166653E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 2.835134E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 4.075995E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return 1.69722E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -1.353994E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return 2.639697E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 1.071753E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -5.925587E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 1.70489E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -3.595999E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -1.100747E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return 1.027098E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 1.027098E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 1.027098E-26f;
		case joaat("PROVISION_BADGER_CLAW"):
			return 765920.4f;
		case joaat("PROVISION_BEAR_CLAW"):
			return -1.212519E-24f;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return -1.623716E+11f;
		case joaat("PROVISION_COUGAR_FANG"):
			return -4.063096E-25f;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return -3.676324E+31f;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return -1.678128E+27f;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 5.318575E-31f;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 3.586706E+35f;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return 2.663073E+11f;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -7.31679E+13f;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 4.891507E+28f;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 4.326327E-34f;
		case joaat("PROVISION_CROW_FEATHER"):
			return -2.00086E-11f;
		case joaat("PROVISION_DUCK_FEATHER"):
			return 4.45066E+30f;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 2.754242E+19f;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 7.007388E-05f;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 2.707001E+09f;
		case joaat("PROVISION_HAWK_FEATHER"):
			return -4.317683E+23f;
		case joaat("PROVISION_HERON_FEATHER"):
			return -3.240263E+09f;
		case joaat("PROVISION_LOON_FEATHER"):
			return 2.014568E+09f;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return -2.434338E-24f;
		case joaat("PROVISION_OWL_FEATHER"):
			return -0.07351525f;
		case joaat("PROVISION_PARROT_FEATHER"):
			return 203.4203f;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 2.788297E-36f;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return -1.979387E-22f;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return -1.117136E-37f;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return -0.0003277016f;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return -1.199246E-25f;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return -3.03836E+23f;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return -8.225103E+07f;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -2.271486E+33f;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 1.450216E+32f;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -3.635405E-13f;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return 6.28938E-16f;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 0.01499322f;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return -5943.149f;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 6.8498E-12f;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return 0.0006060972f;
		case joaat("PROVISION_WOLF_HEART"):
			return -1.665665E+12f;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 0.005678486f;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 0.0004059694f;
		case joaat("PROVISION_BULL_HORNS"):
			return 3.633672E-06f;
		case joaat("PROVISION_OXEN_HORN"):
			return 3.929254E+12f;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return 2833330f;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 2.270019E-27f;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return -1.180315E-36f;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 1.825239E-13f;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1.825239E-13f;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 1.825239E-13f;
		case -1475338121:
			return 1.014904E+36f;
		case -1243878166:
			return 1.014904E+36f;
		case -2102079544:
			return 1.014904E+36f;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 9.454974E-34f;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return 9.454974E-34f;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 9.454974E-34f;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return -1.083137E+36f;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return -1.083137E+36f;
		case joaat("PROVISION_BADGER_PELT"):
			return -1.083137E+36f;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return 0.0001234104f;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 0.0001234104f;
		case joaat("PROVISION_BEAR_FUR"):
			return 0.0001234104f;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -1.869287E-19f;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1.869287E-19f;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -1.869287E-19f;
		case joaat("PROVISION_BEAVER_FUR"):
			return -1.108274E-18f;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return -1.108274E-18f;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -1.108274E-18f;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 2.465592E+33f;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 2.465592E+33f;
		case joaat("PROVISION_RAM_HIDE"):
			return 2.465592E+33f;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 3.557977E-23f;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 3.557977E-23f;
		case joaat("PROVISION_BOAR_SKIN"):
			return 3.557977E-23f;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 1.534238f;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1.534238f;
		case joaat("PROVISION_BUCK_FUR"):
			return 1.534238f;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -5.392892E-16f;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -5.392892E-16f;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -5.392892E-16f;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 2.706776E-08f;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 2.706776E-08f;
		case joaat("PROVISION_BULL_HIDE"):
			return 2.706776E-08f;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 2.673106E+14f;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 2.673106E+14f;
		case joaat("PROVISION_COUGAR_FUR"):
			return 2.673106E+14f;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1.71562E+09f;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1.71562E+09f;
		case joaat("PROVISION_COW_HIDE"):
			return 1.71562E+09f;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 2.010074E-13f;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 2.010074E-13f;
		case joaat("PROVISION_COYOTE_FUR"):
			return 2.010074E-13f;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -8.849146E-10f;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -8.849146E-10f;
		case joaat("PROVISION_DEER_HIDE"):
			return -8.849146E-10f;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return 6.393751E+37f;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 6.393751E+37f;
		case joaat("PROVISION_ELK_FUR"):
			return 6.393751E+37f;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 3.967567E+29f;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 3.967567E+29f;
		case joaat("PROVISION_FOX_FUR"):
			return 3.967567E+29f;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1.714561E+22f;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 1.714561E+22f;
		case joaat("PROVISION_GOAT_HAIR"):
			return 1.714561E+22f;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 1.209463E+25f;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 1.209463E+25f;
		case joaat("PROVISION_GILA_SKIN"):
			return 1.209463E+25f;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return 2.420359E+27f;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return 2.420359E+27f;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 2.420359E+27f;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 1.366728E-26f;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 1.366728E-26f;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 1.366728E-26f;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -3.718776E-29f;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return -3.718776E-29f;
		case joaat("PROVISION_MOOSE_FUR"):
			return -3.718776E-29f;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return -1.40663E-07f;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1.40663E-07f;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return -1.40663E-07f;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -5.012106E+08f;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -5.012106E+08f;
		case joaat("PROVISION_OXEN_HIDE"):
			return -5.012106E+08f;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -2.679421E+24f;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -2.679421E+24f;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -2.679421E+24f;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return -3.950437E-37f;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -3.950437E-37f;
		case joaat("PROVISION_PANTHER_FUR"):
			return -3.950437E-37f;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 8.820292E+28f;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 8.820292E+28f;
		case joaat("PROVISION_PIG_SKIN"):
			return 8.820292E+28f;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -90.41954f;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -90.41954f;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return -90.41954f;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 9.782294E-33f;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 9.782294E-33f;
		case joaat("PROVISION_RABBIT_PELT"):
			return 9.782294E-33f;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 2.586945E-31f;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 2.586945E-31f;
		case joaat("PROVISION_RACCOON_FUR"):
			return 2.586945E-31f;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -8.185097E+18f;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -8.185097E+18f;
		case joaat("PROVISION_RAT_FUR"):
			return -8.185097E+18f;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -6.210808E-30f;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return -6.210808E-30f;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -6.210808E-30f;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 2.030934E+28f;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 2.030934E+28f;
		case joaat("PROVISION_SKUNK_FUR"):
			return 2.030934E+28f;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 2.820378E+22f;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 2.820378E+22f;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 2.820378E+22f;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return -1.214548E+07f;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -1.214548E+07f;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return -1.214548E+07f;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -6.825549E-31f;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return -6.825549E-31f;
		case joaat("PROVISION_WOLF_FUR"):
			return -6.825549E-31f;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return -9.139641E+21f;
		case joaat("PROVISION_EAGLE_TALON"):
			return -1.851623f;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -28.42846f;
		case joaat("PROVISION_BOAR_TUSK"):
			return 1217893f;
		case joaat("PROVISION_BAT_WING"):
			return -4.413682E+17f;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 7.383978E+36f;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return -3.755499E-30f;
		case -827518870:
			return -9.786971E+26f;
		case 1367447057:
			return -1.147401E+18f;
		case -2092697195:
			return -1.776579E-29f;
		case -2043601589:
			return 2.261653E+35f;
		case 1758585485:
			return -8.122389E-32f;
		case 1527400190:
			return -2.32885E+13f;
		case 1493601140:
			return 2436054f;
		case -885592109:
			return -0.000707854f;
		case -1282621313:
			return -5.116076E+24f;
		case -70954328:
			return 5.611895E-35f;
		case -1378208045:
			return -5.196847E+14f;
		case 1450608653:
			return -6.10413E+25f;
		case 1543592331:
			return 7.069192E+23f;
		case 1842740532:
			return 0.0002296823f;
		case 2004357248:
			return -2.35703E-37f;
		case -229670230:
			return 2.506524E+13f;
		case 546758456:
			return -4.878261E-32f;
		case 1888419655:
			return 2.065692E-06f;
		case -2040849706:
			return 1.584387E+38f;
		case 2014346813:
			return 7.493217E-19f;
		case -1638839614:
			return 7.208587E-08f;
		case 1705186999:
			return 8.078103E-25f;
		case -1821314478:
			return 2.183145E-14f;
		case -1434083213:
			return -1.85333E+35f;
		case 1785697286:
			return 7.687588E+28f;
		case 1891164848:
			return -9.251071E+15f;
		case -1283104686:
			return -0.002208837f;
		case -1182590809:
			return 7.637123E+18f;
		case 1011908603:
			return 7.642166E+19f;
		case 1202949852:
			return -3.548749E+36f;
		case -1220574585:
			return -9.114262E-28f;
		case 1739856087:
			return 7.327412E-36f;
		case -1932727774:
			return -2.73148E-21f;
		case 258865203:
			return -2.55071E-32f;
		case 1097274212:
			return 1.360305E-30f;
		case 448991078:
			return 64172.85f;
		case -1624242931:
			return -2.237113E-26f;
		case -1924159110:
			return 8.276289E+35f;
		case -1621144167:
			return 2.062755E+27f;
		case -1061253029:
			return 9.344131E+18f;
		case 1181154860:
			return -7.665853E-06f;
		case 1418435161:
			return -2.011853E-18f;
		case 1511236969:
			return 1.869483E-10f;
		case 121494806:
			return 1.485306E-06f;
		case -251416414:
			return -6.158417E+25f;
		case -1787430524:
			return -1.34631E+17f;
		case -260181673:
			return 1.194161E-12f;
		case -1087205695:
			return -5.302291E+13f;
		case -857265622:
			return -244519.2f;
		case -1572330336:
			return 5.892992E-12f;
		case -1249752300:
			return -6.19143E-12f;
		case -940052481:
			return -1.320794E+16f;
		case -308200059:
			return -1.75818E+08f;
		case -1218522879:
			return -4.427098E+16f;
		case 923422806:
			return -1.908815E-08f;
		case 832214437:
			return 2.333881E+27f;
		case 397926876:
			return 2.431961E+38f;
		case 219794592:
			return 1.58105E+10f;
		case -1061362634:
			return 3.720968E+08f;
		case 1728819413:
			return 8.336822E-25f;
		case 1009802015:
			return 2898363f;
		case -420237085:
			return 8.643324E-35f;
		case -1195518864:
			return -1.903248E+32f;
		case -159428614:
			return 3.353755E+35f;
		case 1276143905:
			return -5.316205E-35f;
		case -1262044528:
			return -2.05927E-26f;
		case -963027403:
			return 1.169666E-07f;
		case 739090883:
			return -3.00706E+07f;
		case 1043121665:
			return 1.650815E-26f;
		case -634716689:
			return -3.285082E+23f;
		case 2088901891:
			return 7.593936E-09f;
		case 836208559:
			return 0.004319382f;
		case 1600479946:
			return 2.792942E+08f;
		case -675142890:
			return 747.6562f;
		case -906131571:
			return 2.126119E-07f;
		case -591844128:
			return 1.671649E-13f;
		case -1946740647:
			return 8.731031E-14f;
		case -1548204069:
			return -1.512649E-29f;
		case -907373381:
			return 9.086703E+36f;
		default:
			break;
	}
	return false;
}

int func_270(bool bParam0, bool bParam1)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bParam0))
	{
		return 0;
	}
	if (!func_17(bParam1, 0))
	{
		return 0;
	}
	iVar4 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar4)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(bParam0, iVar0, &Var1))
		{
		}
		else if (Var1 == bParam1)
		{
			return Var1.f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_271()
{
	return Global_1156096.f_21645[64 /*209*/].f_208;
}

char* func_272(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_505(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_273(bool bParam0, int iParam1)
{
	if (iParam1 == 119)
	{
		return func_506(bParam0);
	}
	return func_507(bParam0, iParam1);
}

int func_274()
{
	return Global_1915643.f_20241;
}

bool func_275(bool bParam0)
{
	var uVar0;
	bool bVar1;
	var uVar2[1];
	int iVar4;
	int iVar5[3];
	int iVar9;

	if (func_508(bParam0, &uVar0))
	{
		return true;
	}
	if (!func_509(bParam0))
	{
		return false;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		func_510(Global_33, &uVar2, 1);
		bVar1 = func_511(uVar2[0]);
		if (bVar1 == bParam0)
		{
			if (ENTITY::_IS_ENTITY_FULLY_LOOTED(uVar2[0]))
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	}
	iVar4 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !ENTITY::IS_ENTITY_DEAD(iVar4)) && PED::IS_PED_CARRYING_SOMETHING(iVar4))
	{
		func_510(iVar4, &iVar5, 3);
		iVar9 = 0;
		while (iVar9 < iVar5)
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5[iVar9]))
			{
			}
			else
			{
				bVar1 = func_512(&(iVar5[iVar9]));
				if (bVar1 == bParam0)
				{
					if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar5[iVar9]))
					{
						return true;
					}
				}
			}
			iVar9++;
		}
	}
	return false;
}

char* func_276(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "COLLECTIBLE_MAP_ON_MISSION";
		case 2:
			return "COLLECTIBLE_MAP_ACTIVE_MAP";
		case 3:
			return "COLLECTIBLE_MAP_SPADE_MISSING";
		case 4:
			return "COLLECTIBLE_MAP_METAL_DETECTOR_MISSING";
		case 5:
			return "COLLECTIBLE_MAP_SEARCH_ITEMS_NOT_AVAILABLE";
	}
	return "NET_COLLECTIBLE_OPEN_MAP_RESULT_NONE";
}

bool func_277()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
	{
		if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			return false;
		}
	}
	if (!func_513(PLAYER::PLAYER_ID(), 0))
	{
		return false;
	}
	return true;
}

bool func_278(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_279(bool bParam0)
{
	return func_270(bParam0, 3.996812E+36f);
}

int func_280(bool bParam0)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;

	if (!func_294(bParam0, -1.926391E+21f, &Var0, &iVar31, 0, 1))
	{
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (func_295(Var0[iVar32 /*2*/], 1))
		{
			iVar33++;
		}
		iVar34++;
		iVar32++;
	}
	if (iVar33 >= iVar34)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION_COMPLETE", iVar33, iVar34));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_11626, MISC::VAR_STRING(2, "SATCHEL_TIP_COLLECTION", iVar33, iVar34));
	}
	return 1;
}

bool func_281(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_282(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940239.f_11641))
	{
		return 0;
	}
	Var0 = Global_1940239.f_11641;
	Var0.f_2 = 3;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_283(int iParam0)
{
	func_487(0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(func_488(), 3.235644E-27f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_514(), DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam0, "focusable"));
}

int func_284()
{
	return func_515(1);
}

struct<10> func_285(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_286(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_287(int iParam0, int iParam1)
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

bool func_288(bool bParam0)
{
	bool bVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = func_499(bParam0, 0);
	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar0))
	{
		return false;
	}
	if (!func_296(bParam0))
	{
		return false;
	}
	return true;
}

int func_289(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

int func_290(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (iParam0 == Global_265213.f_107995.f_13575[iVar0])
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_291(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_292(bool bParam0)
{
	char* sVar0;
	var uVar1;
	int iVar5;
	int iVar6;
	int iVar7;
	float fVar8;

	if (!func_297(bParam0, &sVar0, &uVar1))
	{
		return;
	}
	iVar5 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11614, Global_1940239.f_11595);
	iVar6 = iVar5;
	iVar7 = 1;
	fVar8 = 4.808429E-35f;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, iVar6, 0, 1, 0, iVar7, fVar8, bParam0, &uVar1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(32768, iVar6, sVar0, 1, 0, iVar7, fVar8, bParam0, "");
	}
	Global_1940239.f_11595++;
}

int func_293(int iParam0)
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

bool func_294(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_516(bParam0))
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
		func_517(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_295(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_142(bParam0);
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
			if (!func_518(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_519(bParam0))
			{
				return true;
			}
			break;
	}
	return func_263(bParam0, 0, 0, 0) >= iParam1;
}

bool func_296(bool bParam0)
{
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(func_499(bParam0, 0));
}

bool func_297(bool bParam0, char* sParam1, var uParam2)
{
	int iVar0;

	*sParam1 = func_289(bParam0);
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (*sParam1 == Global_265213.f_107995.f_13575[iVar0])
		{
			*uParam2 = { Global_265213.f_107995[iVar0 /*4*/] };
			*sParam1 = Global_265213.f_107995.f_13575[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_298(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_299(int iParam0, int iParam1)
{
	int iVar0;

	if (func_240(iParam0->f_9))
	{
		return false;
	}
	if (!func_441(*iParam0))
	{
		return false;
	}
	if (!func_520(iParam0->f_4, iParam1, 0))
	{
		return false;
	}
	if (!func_242(iParam0->f_4))
	{
		return false;
	}
	if (func_33(0))
	{
		if (!func_17(iParam0->f_4, 0))
		{
			return false;
		}
		if (func_414())
		{
			iVar0 = func_521(iParam0->f_4, 1, 0, 0);
			if (iVar0 < func_368(iParam0->f_4, iParam0->f_5, iParam0->f_9, 0, 0, 0))
			{
				iParam0->f_11 = iVar0;
			}
		}
		if (iParam0->f_11 <= 0)
		{
			return false;
		}
	}
	if ((Global_1940239.f_11588 == 0 && !func_23(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11596), "label"))) && !func_114())
	{
		func_115(iParam0->f_4);
	}
	else
	{
		func_238(0);
	}
	return true;
}

void func_300(bool bParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = func_10(bParam0, 512441.5f);
	bVar1 = func_469(bParam0);
	if (func_522(iVar0))
	{
		if (Global_1940239.f_41.f_1 > 0)
		{
			iVar2 = 0;
			while (iVar2 < Global_1940239.f_41.f_1)
			{
				if (iVar0 == Global_1940239.f_41.f_2[iVar2 /*2*/])
				{
					func_523(iVar2, 1);
					return;
				}
				iVar2++;
			}
			func_524(iVar0, bVar1);
		}
		else
		{
			func_524(iVar0, bVar1);
		}
	}
}

bool func_301()
{
	if (Global_1940239.f_11587 == -1.994502E+32f)
	{
		switch (func_274())
		{
			case 10:
			case 15:
			case 16:
			case 29:
				return true;
		}
	}
	else if (Global_1940239.f_11587 == -2.509875E-36f)
	{
		return func_30();
	}
	else if (Global_1940239.f_11587 == -9.654275E+13f)
	{
		return true;
	}
	return false;
}

bool func_302(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_512(&iParam0);
		if (!func_17(bVar0, 0))
		{
			bVar0 = func_525(iParam0);
		}
	}
	else
	{
		bVar0 = func_525(iParam0);
	}
	return bVar0;
}

int func_303(bool bParam0, bool bParam1)
{
	int iVar0;
	var uVar1;

	if (Global_1901671.f_698.f_31)
	{
		return 0;
	}
	if (func_37() == 0)
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	}
	else
	{
		iVar0 = func_174(0);
	}
	func_526(&iVar0, &uVar1, bParam0, bParam1);
	return uVar1;
}

int func_304(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = func_94(0);
	iVar2 = func_94(1);
	func_526(&iVar1, &iVar0, bParam0, bParam1);
	func_526(&iVar2, &iVar0, bParam0, bParam1);
	return iVar0;
}

int func_305(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<14> Var5;

	if (Global_1901671.f_698.f_32)
	{
		return 0;
	}
	if (func_37() == 0)
	{
		iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return 0;
		}
		if (func_254("ALL SATCHEL EXCLUDING CLOTHING", &iVar2, &iVar3, -3.233114E-34f, 1))
		{
			if (iVar3 < 1)
			{
			}
			else
			{
				Var5.f_9 = -5.45926E-19f;
				iVar4 = 0;
				while (iVar4 < iVar3)
				{
					if (!func_239(&Var5, iVar4, iVar2, iVar3))
					{
					}
					else if (!func_17(Var5.f_4, 0))
					{
					}
					else if (Var5.f_4 == 9605447f)
					{
					}
					else
					{
						iVar1++;
						if (bParam0)
						{
							if (!func_242(Var5.f_4))
							{
							}
							else
							{
								func_310(Var5, 1);
							}
						}
					}
					iVar4++;
				}
			}
			func_253(iVar2);
		}
		return iVar1;
	}
	return 0;
}

bool func_306(int iParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = 0;
	while (iVar0 < STATS::WEEKLY_COLLECTIBLE_GET_NUM_ITEMS_IN_SET(3.95761E+09f, iParam0))
	{
		if (STATS::WEEKLY_COLLECTIBLE_GET_ITEM_IN_SET(3.95761E+09f, iParam0, iVar0, &bVar1, &iVar2))
		{
			if (func_17(bVar1, 0))
			{
				iVar3 = func_263(bVar1, 0, 0, 0);
				if (iVar3 < iVar2)
				{
					return false;
				}
			}
		}
		iVar0++;
	}
	return true;
}

void func_307(bool bParam0)
{
	struct<12> Var0;
	bool bVar14;
	var uVar15;

	if (!func_23(bParam0))
	{
		return;
	}
	Var0.f_9 = -5.45926E-19f;
	Var0.f_11 = func_527(bParam0);
	bVar14 = bParam0;
	func_528(bParam0, &uVar15, 0, 0, 0, 0);
	if (!func_33(0))
	{
		func_529(-2.021851E-23f, bVar14, &uVar15, 1, Var0.f_11, 0, 0, 4.808429E-35f);
	}
	else
	{
		func_529(-1.247606E-17f, bVar14, &uVar15, 1, Var0.f_11, 0, 0, 4.808429E-35f);
	}
	Global_1940239.f_41.f_203++;
}

bool func_308(int iParam0)
{
	bool bVar0;
	var uVar1;

	if (!func_295(-4.629755E-24f, 1))
	{
		return false;
	}
	bVar0 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iParam0, 0);
	if (!func_23(bVar0))
	{
		return false;
	}
	if (func_530(bVar0, -1.926391E+21f, &uVar1, 1, 0))
	{
		return true;
	}
	return false;
}

void func_309(int iParam0, int iParam1)
{
	var uVar0[16];
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (iParam1 == 0)
	{
		iVar19 = INVENTORY::_INVENTORY_CREATE_SORTED_COLLECTION(func_199(0), 32, &iVar18);
		if (iVar19 < 0)
		{
			return;
		}
		if (iVar18 > 0)
		{
			iVar17 = 0;
			while (iVar17 < 32)
			{
				if (!func_239(iParam0, iVar17, iVar19, iVar18))
				{
				}
				else if (!func_17(iParam0->f_4, 0))
				{
				}
				else if (!func_299(iParam0, iParam1))
				{
				}
				else if (func_531(iParam0->f_4, &uVar0, iVar20))
				{
				}
				else
				{
					uVar0[iVar20] = iParam0->f_4;
					iVar20++;
					if (iVar20 >= 16)
					{
					}
					else
					{
						iVar17++;
					}
					func_532(&uVar0);
					func_533(&uVar0);
					func_253(iVar19);
				}
			}
		}
	}
}

void func_310(struct<12> Param0, var uParam12, var uParam13, bool bParam14)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	float fVar8;

	if (func_17(Param0.f_4, 0))
	{
		bVar0 = func_469(Param0.f_4);
		if (func_43() || (func_534() && !bVar0))
		{
			return;
		}
		bVar1 = func_267(Param0.f_4, 0);
		bVar2 = ITEMDATABASE::_ITEMDATABASE_IS_OVERPOWERED_ITEM(Param0.f_4);
		vVar3 = { func_535(Param0.f_4) };
		iVar6 = func_536(Param0.f_4);
		if (!bParam14 && func_317(Param0.f_4, -3.294982E+22f) != 0)
		{
			iVar7 = func_368(Param0.f_4, Param0.f_5, Param0.f_9, 0, 0, 0);
			if (Param0.f_9 != 4.978612f && iVar7 > Param0.f_11)
			{
				return;
			}
			Param0.f_11 = iVar7;
		}
		func_537(&Param0);
		fVar8 = 4.808429E-35f;
		if (func_470(Param0.f_4))
		{
			if (func_19(Param0.f_4, 9.618302E+26f))
			{
				fVar8 = -1.101616E-25f;
			}
		}
		else if (func_471(Param0.f_4))
		{
			fVar8 = -1.101616E-25f;
		}
		func_529(-1.247606E-17f, bVar1, &vVar3, bVar0, Param0.f_11, bVar2, iVar6, fVar8);
		Global_1940239.f_41.f_203++;
	}
}

bool func_311()
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
	if (!func_538(iVar0))
	{
		return false;
	}
	return true;
}

bool func_312(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return true;
		}
		else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
		{
			if (!FIRE::IS_ENTITY_ON_FIRE(iParam0))
			{
				return true;
			}
		}
	}
	else
	{
		return true;
	}
	return false;
}

bool func_313(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_472(iParam0);
	if (!func_278(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051832.f_92[iVar0 /*75*/].f_3 };
	if (iVar0 == 29)
	{
		vVar1 = { func_473(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_474(vVar1))
	{
		return false;
	}
	fVar4 = func_475(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_476(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_476(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

void func_314()
{
	if (func_274() != 2)
	{
		if (func_295(-1.178843E+33f, 1))
		{
			func_316(-1.178843E+33f, 0, 0);
		}
		if (func_295(1.171813E+21f, 1))
		{
			func_316(1.171813E+21f, 0, 0);
		}
		if (func_295(-230.1699f, 1))
		{
			func_316(-230.1699f, 0, 0);
		}
		if (func_295(5.402792E-27f, 1))
		{
			func_316(5.402792E-27f, 0, 0);
		}
		if (func_295(-7.437896E-28f, 1))
		{
			func_316(-7.437896E-28f, 0, 0);
		}
		else if (func_295(1.795034E+34f, 1))
		{
			func_316(1.795034E+34f, 0, 0);
		}
		else if (func_295(-0.06342195f, 1))
		{
			func_316(-0.06342195f, 0, 0);
		}
		func_539();
	}
}

int func_315()
{
	if (func_33(0))
	{
		return 0;
	}
	if (!func_284())
	{
		return 0;
	}
	if (!func_540() && !func_112(2097152))
	{
		return 0;
	}
	func_541(9.522126E+26f);
	return 1;
}

void func_316(float fParam0, bool bParam1, int iParam2)
{
	struct<14> Var0;

	Var0.f_9 = -5.45926E-19f;
	Var0.f_4 = fParam0;
	Var0.f_11 = 1;
	if (!bParam1)
	{
		func_310(Var0, iParam2);
	}
	else
	{
		func_243(Var0);
	}
}

int func_317(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_281(func_105(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_318(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_542(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_170(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_543(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_544(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_545(7.184882E+22f, &Var65, 1);
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
			func_419(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_199(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_319(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_542(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_407(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_170(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_37() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_545(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_419(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_199(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

float func_320(bool bParam0)
{
	if (func_19(bParam0, 1.763507E+18f))
	{
		return func_546(bParam0);
	}
	if (func_19(bParam0, 9.522126E+26f))
	{
		return func_70();
	}
	if (func_547(bParam0))
	{
		return func_85();
	}
	switch (func_145(bParam0))
	{
		case -77448735:
			if (func_548(bParam0))
			{
				return func_546(bParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_546(bParam0);
		case -1520388130:
		case 1802292908:
			return func_67();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_227();
		case -525676072:
			return func_227();
		case 1779021115:
			if (bParam0 == -230.1699f || bParam0 == 5.402792E-27f)
			{
				return func_78();
			}
			return func_79();
		case -1823706425:
			if (bParam0 == -0.06342195f)
			{
				return func_81();
			}
			else
			{
				return func_80();
			}
			break;
		case -854348463:
			return func_77();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_549();
		default:
			if (func_17(bParam0, 0))
			{
				if (func_19(bParam0, 4.644778E+30f))
				{
					return func_84();
				}
				else if (bParam0 == -6.721167E-35f || bParam0 == -7.729678E-14f)
				{
					return func_82();
				}
				else if (bParam0 == -2.692268E-16f)
				{
					return func_71();
				}
				else if (func_19(bParam0, 888.6404f))
				{
					return func_57();
				}
			}
			return func_55();
	}
	return func_55();
}

int func_321()
{
	return Global_1915643.f_22504.f_5;
}

char* func_322(int iParam0)
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
			Var0 = { func_390(0) };
			if (!func_391(Var0))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar2 = func_550(&Var0, 1);
			if (iVar2 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_551(iVar2, 2.098029E-22f, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_553(func_552(iVar2, 2.098029E-22f));
	}
	return "";
}

void func_323(int iParam0)
{
	Global_1915643.f_22504.f_5 = iParam0;
}

int func_324(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_554(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_325(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_555(iParam0))
	{
		return 1;
	}
	if (!func_556(iParam0))
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
	if (!bParam2 && !func_557(iParam0))
	{
		return 3;
	}
	if (func_558(iParam0) && !func_460())
	{
		return 4;
	}
	return 0;
}

void func_326(int iParam0)
{
	Global_1940239.f_11599 = iParam0;
}

void func_327(int iParam0)
{
	Global_1940239.f_11605 = iParam0;
}

bool func_328(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	float fVar0;

	switch (func_10(bParam0, -60352.49f))
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

bool func_329()
{
	return Global_1953279.f_1676.f_1[1 /*3*/].f_1 == -5.12226E+28f;
}

bool func_330(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_559(*uParam0, -8.569155E-24f, 0))
	{
		return true;
	}
	return false;
}

void func_331(bool bParam0)
{
	int iVar0;

	iVar0 = 2.349566E-24f;
	switch (func_560())
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
		if (func_19(bParam0, 1.763507E+18f))
		{
			func_561(func_257(bParam0), 1, 1);
		}
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_332(bool bParam0)
{
	int iVar0;

	iVar0 = 2.396577E-38f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_333(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1.729466E+37f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_334(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 6.623678E+22f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_335(bool bParam0)
{
	int iVar0;

	iVar0 = -6.874405E+25f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_336(bool bParam0)
{
	int iVar0;

	iVar0 = 2.144114E+37f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_337(bool bParam0)
{
	int iVar0;

	iVar0 = 1.891427E+32f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_338(bool bParam0)
{
	int iVar0;

	iVar0 = -8.840173E-17f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_339(bool bParam0)
{
	int iVar0;

	iVar0 = -1.912532f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_340(bool bParam0)
{
	int iVar0;

	iVar0 = 2.636345f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_341(bool bParam0)
{
	int iVar0;

	iVar0 = 1.594798E+16f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_342(bool bParam0)
{
	int iVar0;

	iVar0 = -4.546778E-14f;
	switch (func_560())
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
		func_562(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_343(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1.577477E+31f;
	switch (func_560())
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
		if (!func_562(Global_33, bParam0, iVar0, 1, 0) && bParam1)
		{
			func_563(bParam0);
			func_181(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_344(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -10.1963f;
	switch (func_560())
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
		if (!func_562(Global_33, bParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_563(bParam0);
			func_181(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_563(bParam0);
		func_181(bParam0, 1, 0, 9.275179E-19f);
	}
}

bool func_345(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_346(char* sParam0)
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

void func_347(int iParam0)
{
	if (func_345(iParam0, 1))
	{
		func_564(1);
	}
}

int func_348(int iParam0)
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

void func_349(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

void func_350(struct<4> Param0)
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
			if (func_565(Param0))
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
			func_566(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_349(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_565(Param0))
			{
				return;
			}
			func_566(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_349(8);
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
			if (func_565(Param0))
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
			func_566(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_349(8);
			break;
			break;
	}
}

bool func_351(bool bParam0)
{
	if (func_567())
	{
		return false;
	}
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (!func_295(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_352(bool bParam0)
{
	return func_568(bParam0);
}

int func_353(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_569(bParam0);
	if (func_145(bParam0) == -9.847085E+19f || func_19(bParam0, -1.186825E-08f))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_570(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_571();
			}
			else
			{
				iVar0 = func_572();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_573();
		}
		else
		{
			iVar0 = func_574();
		}
	}
	else if (func_575(&bVar2))
	{
		if (func_19(bVar2, -1.186825E-08f) || func_145(bVar2) == -9.847085E+19f)
		{
			iVar0 = func_571();
		}
		else
		{
			iVar0 = func_572();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_573();
	}
	else
	{
		iVar0 = func_574();
	}
	if (iVar0 != 0)
	{
		Global_1953279.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1f);
		return 1;
	}
	return 0;
}

bool func_354(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

void func_355()
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
	func_576(32768);
	func_577(37.82234f, 8, 6);
}

bool func_356(int iParam0, bool bParam1)
{
	return func_578(iParam0, 0) < func_579(iParam0, bParam1);
}

void func_357(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_145(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_19(bParam0, 4.31212E+18f))
			{
				return;
			}
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_28), Global_1953279.f_3352.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_27), Global_1953279.f_3352.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_29), Global_1953279.f_3352.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_19(bParam0, 3.611922E-33f))
			{
				bVar1 = func_580(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_581();
	if (func_62(iVar0) || (iVar0 != -947.1324f && func_19(bParam0, -7.339854E+32f)))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_199(bParam5), bParam0, 0);
	}
	func_152(bParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_582(1, bParam0);
	}
	if (bParam2)
	{
		func_583(0, 0);
	}
}

float func_358(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_584();
	}
	if (iParam0 == 2654.774f)
	{
		return -2.688565E+11f;
	}
	return -5.418502E-17f;
}

void func_359(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_585(bParam0, bParam1))
	{
		func_586(bParam0, bParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
}

bool func_360(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_587(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

int func_361(bool bParam0, int iParam1)
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

bool func_362(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_588();
	if (iParam2 == 39)
	{
		Var0 = { func_167(bParam0, 1, 0) };
		iParam2 = func_361(func_360(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_354(32768) && iParam2 == 10)
	{
		func_589(37.82234f);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_364(bParam0, 1))
	{
		func_590(&(Global_1953279.f_1557), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_591(iParam2);
	}
	func_592(iParam2, iVar5);
	func_593(&(Global_1953279.f_1557.f_1[iParam2 /*3*/]), 4, 6);
	func_593(&(Global_1953279.f_1676.f_1[iParam2 /*3*/]), 4, 6);
	func_594(&(Global_1953279.f_1557), bParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953279.f_1557.f_1[iParam2 /*3*/] = bParam0;
	Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1 = func_595(bParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953279.f_2938)
		{
			if (Global_1953279.f_2938.f_2[iVar6 /*2*/] >= 0 && Global_1953279.f_2938.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_577(func_587(Global_1953279.f_2938.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_363(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_596(&(Global_1953279.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
}

bool func_364(bool bParam0, bool bParam1)
{
	if (!func_17(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_19(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

bool func_365(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_167(bParam0, bParam2, 0) };
	if (func_364(bParam0, 0))
	{
		bVar9 = func_597(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_167(bVar9, bParam2, 0) };
			Var0 = { func_168(bVar9, Var4, Var4.f_4, bParam2) };
			return func_169(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_168(bParam0, Var4, Var4.f_4, bParam2) };
	return func_169(Var0, iParam1, bParam2);
}

int func_366(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_361(bParam0, 1);
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

void func_367(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_368(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_317(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_168(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

struct<4> func_369(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_199(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_168(2.982335E+09f, func_410(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_168(2.982335E+09f, func_410(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_168(2.982335E+09f, func_410(), -5.45926E-19f, bParam0);
}

bool func_370(int iParam0)
{
	int iVar0;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_94(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_598(iVar0))
	{
		return true;
	}
	return false;
}

int func_371()
{
	return Global_38.f_289.f_3222;
}

bool func_372()
{
	return Global_1915643.f_22504.f_1;
}

bool func_373(int iParam0)
{
	return (Global_1051832.f_3648 && iParam0) != 0;
}

void func_374(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 - (Global_1051832.f_3648 && iParam0));
}

void func_375(int iParam0)
{
	Global_1051832.f_3649 = iParam0;
}

bool func_376()
{
	return Global_1915643.f_22504;
}

void func_377()
{
	PAD::_SET_CONTROL_CONTEXT(4, 5.369191E-15f);
}

bool func_378()
{
	return func_373(4);
}

int func_379(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_599())
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
	if ((func_212(30f, 0) || PED::IS_PED_HOGTIED(Global_33)) || PED::IS_PED_HOGTYING(Global_33))
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
	if (func_600(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6) && Global_1108965.f_775.f_28 != 8)
	{
		if (func_601(Global_1108965.f_775.f_28))
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
	if (func_602())
	{
		return 43;
	}
	return -1;
}

void func_380(int iParam0)
{
	int iVar0;

	if (!func_378())
	{
		func_603(1);
	}
	Global_1051832.f_3650 = iParam0;
	iVar0 = func_379(1);
	if (iVar0 != -1)
	{
		func_323(iVar0);
		func_604(0);
	}
	else
	{
		func_604(1);
	}
}

bool func_381()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

bool func_382(int iParam0)
{
	return func_89(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_383()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_384()
{
	return !func_382(2);
}

bool func_385(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

void func_386()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_387(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_606(bParam2, func_605(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_388(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

int func_389(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

struct<2> func_390(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_391(struct<2> Param0)
{
	if (!func_607(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_608(Param0))
	{
		return false;
	}
	return true;
}

int func_392(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1205923.f_1[iVar1 /*26*/].f_1 != -1 && func_609(iVar1, 64, iVar0))
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

int func_393(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

var func_394(int iParam0, int iParam1)
{
	return func_610(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_395(struct<19> Param0, var uParam19, bool bParam20, bool bParam21)
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
				func_611(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 5, &uParam19);
}

void func_396(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_397(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_612(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_613(iParam0))
	{
		return false;
	}
	if (func_614(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_615(iParam0, 1)) || func_616(32768))
	{
		if (!func_615(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_617())
	{
		return false;
	}
	return true;
}

void func_398(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

void func_399()
{
	Global_1913621.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913621.f_1581 = 1;
}

void func_400(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 || iParam0);
}

struct<4> func_401(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_168(8.681942E-06f, func_369(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_168(8.681942E-06f, func_369(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_168(8.681942E-06f, func_369(bParam0), -1.942248E+12f, 0);
}

bool func_402(bool bParam0, bool bParam1)
{
	if (func_145(bParam0) == 4.161967E+25f)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_618();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_403(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_368(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_404(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_619(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_405(bool bParam0)
{
	int iVar0;

	iVar0 = func_199(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_168(3.507197E-29f, func_369(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_168(3.507197E-29f, func_369(bParam0), 12999093, 0);
}

bool func_406(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_145(bParam0);
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
			if (func_620(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_407(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_621(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_408(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_407(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_142(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_622(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_623(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_624(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_625(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_626(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_627(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_628(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_545(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_409(bool bParam0)
{
	return func_142(bParam0) == -3.265313E+23f;
}

struct<4> func_410()
{
	struct<4> Var0;

	return Var0;
}

void func_411(int iParam0, bool bParam1, struct<4> Param2)
{
	bool bVar0;

	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	if (PED::IS_PED_ON_MOUNT(Global_33) && !func_233(Global_33))
	{
		return;
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_33))
	{
		return;
	}
	else if (PED::IS_PED_RELOADING(Global_33))
	{
		return;
	}
	if (iParam0 == 1)
	{
		bVar0 = bParam1;
		if (!Global_1940072.f_9 && !PED::GET_PED_BLACKBOARD_SCRIPT_BOOL(Global_33, "inInspectionMode"))
		{
			TASK::_TASK_ITEM_INTERACTION_3(PLAYER::PLAYER_PED_ID(), bVar0, &Param2, 0, 0, 0, -1f);
			Global_1940072.f_8 = 1;
			Global_1940072.f_66 = { Param2 };
		}
	}
}

int func_412(bool bParam0)
{
	if (func_19(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_19(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_19(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_413(bool bParam0)
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

bool func_414()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

struct<2> func_415(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_416(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_417(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_170(0) || func_414())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_630(iParam1, func_629(bParam2), &Var1, 1);
		if (func_631(iVar0, &Var1, 0, 0))
		{
		}
		func_164(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_629(bParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_17(uVar13[iVar29], 0) && !func_19(uVar13[iVar29], 9.077182E+07f)) && !uVar13[iVar29] == bParam2)
		{
			func_632(uVar13[iVar29], 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			if (iParam3 != 0)
			{
				if (iParam3 == uVar13[iVar29])
				{
					iVar30++;
				}
			}
			else
			{
				iVar30++;
			}
		}
		iVar29++;
	}
	func_88(func_170(0), 0, 0);
	return iVar30;
}

int func_418(bool bParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<17> Var14;
	int iVar31;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return -1;
	}
	if (func_542(bParam0))
	{
		return -1;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_407(*iParam1, &Var0, 1, 0, -1))
	{
		return -1;
	}
	if (Var0.f_13)
	{
		return -1;
	}
	if (iParam2 < 0)
	{
		iParam2 = Var0.f_11;
	}
	else if (iParam2 > Var0.f_11)
	{
		iParam2 = Var0.f_11;
	}
	Var14 = { func_628(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = fParam3;
	iVar31 = -1;
	iVar31 = func_545(7.184882E+22f, &Var14, bParam5);
	if (bParam4 && iVar31 != -1)
	{
		Var32.f_7 = -5.149929E+33f;
		Var32.f_16 = -1;
		Var32 = 1;
		func_419(iVar31, Var32);
	}
	return iVar31;
}

void func_419(int iParam0, struct<17> Param1)
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

bool func_420(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (func_633(bParam0))
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam1))
	{
		return false;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (func_633(bParam0) && TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (func_634(iVar0, bParam0))
		{
			return true;
		}
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
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return false;
	}
	if (func_635() == 1)
	{
		func_636(iVar0);
		func_637(bParam0);
		func_638(1);
	}
	else
	{
		return false;
	}
	return true;
}

void func_421(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_422(bool bParam0)
{
	return func_142(bParam0) == 4.324946E+36f;
}

bool func_423(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_142(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_19(bParam0, 9.811189E+11f))
	{
		func_639(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_424(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_17(bParam0, 0))
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
	if (!func_640() || bParam6)
	{
		func_641(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_642(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_642(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_643(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_142(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_19(bParam0, -5.215192E-33f)) && !func_19(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_145(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_644(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_19(bParam0, 6.834376E-22f))
	{
		sVar17 = func_645(bParam0);
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
	if (func_19(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_471(bParam0))
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
	bVar18 = func_267(bParam0, 0);
	if ((func_646(iVar12) && func_19(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_468(bParam0);
	}
	else if (func_142(bParam0) == -42.1084f)
	{
		bVar19 = func_647(bParam0);
		if (func_17(bVar19, 0))
		{
			bVar18 = func_267(bVar19, 0);
		}
	}
	if (func_648(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_649(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_505(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_650(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_651(bParam0, &cVar22))
		{
			sVar21 = func_272(func_652(cVar22), 4.808429E-35f);
		}
	}
	func_653(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

struct<2> func_425(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_17(bParam0, 0))
	{
		return Var0;
	}
	if (func_19(bParam0, -8.087424E+27f))
	{
		if (func_37() == -1)
		{
			if (func_19(bParam0, -3.480943E+19f))
			{
				return func_654(4.052717E-32f);
			}
			else
			{
				return func_654(9918.3f);
			}
		}
	}
	else if (func_19(bParam0, -3.480943E+19f))
	{
		return func_654(-18395.16f);
	}
	if (func_19(bParam0, 4.091206E+36f))
	{
		return func_654(3.674458E+22f);
	}
	return Var2;
}

bool func_426(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_444(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_655(&Var0, func_401(0));
	}
	if (!func_445(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_239(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_319(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_253(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

int func_427(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		iVar0 = func_656(iParam2, bParam0);
		if (iVar0 > 0)
		{
			if (iParam1 < iVar0)
			{
				iVar0 = iParam1;
			}
			iParam1 = (iParam1 - iVar0);
			func_657(&iParam2, bParam0, &iVar0, bParam4, iParam5, iParam6);
			iParam1 = (iParam1 + iVar0);
		}
	}
	iParam1 = func_658(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam3, iParam6);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_428(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_263(bParam0, 0, 0, 0);
	if (iVar0 >= iParam1)
	{
		iVar1 = iParam1;
	}
	else
	{
		iVar1 = iVar0;
		iVar2 = (iParam1 - iVar1);
	}
	if (iVar1 > 0)
	{
		if (!func_181(bParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_659(bParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_660(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_659(bParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_144("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_429(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_369(bParam4) };
	Var0.f_4 = -3.233114E-34f;
	Var5 = { func_168(bParam0, Var0, Var0.f_4, bParam4) };
	return func_319(bParam0, &Var5, &Var0, iParam1, iParam2, iParam3, bParam4);
}

void func_430()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1235672[iVar0 /*697*/].f_646 != 0)
		{
			iVar1 = func_661(Global_1235672[iVar0 /*697*/].f_646, 1);
			Global_1235672[iVar0 /*697*/].f_645 = iVar1;
		}
		iVar0++;
	}
}

void func_431()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_432(int iParam0, var uParam1)
{
	if (!func_662(iParam0))
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

void func_433()
{
	int iVar0;

	iVar0 = func_663();
	if (func_663() == 1.890447E-09f)
	{
		iVar0 = 0;
	}
	if (func_33(0))
	{
		if (func_274() == 2)
		{
			iVar0 = -9.654275E+13f;
		}
		else
		{
			iVar0 = -1.994502E+32f;
		}
	}
	if (func_43())
	{
		iVar0 = -2.509875E-36f;
	}
	func_46(iVar0);
}

void func_434(int iParam0, int iParam1, char* sParam2, char* sParam3)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(iParam0, Global_1940239.f_11562);
	bVar1 = func_247(iParam1);
	iVar2 = iParam1;
	iVar3 = iVar0;
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_11616, Global_1940239.f_11562);
		Global_1940239.f_11563 = Global_1940239.f_11562;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(8, iVar3, sParam2, sParam3, iVar2, bVar1);
	Global_1940239.f_11564[Global_1940239.f_11562] = iParam1;
	Global_1940239.f_11562++;
}

void func_435(int iParam0)
{
	if (func_93())
	{
		func_434(iParam0, -5.004954E+28f, "Horse", 2.914836E-11f);
	}
}

void func_436(int iParam0)
{
	if (func_122())
	{
		func_434(iParam0, -8018687f, "Wagon", 2.914836E-11f);
	}
}

void func_437(int iParam0)
{
	if (func_33(0))
	{
		if (func_274() == 2)
		{
			func_434(iParam0, -9.654275E+13f, "Send", -3.372451E-10f);
		}
		else
		{
			func_434(iParam0, -1.994502E+32f, "Sell", -1.541664E-16f);
		}
	}
	else if (func_43())
	{
		func_434(iParam0, -2.509875E-36f, "Donations", -1.909352E-32f);
	}
}

bool func_438(bool bParam0, var uParam1)
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

void func_439(bool bParam0)
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

bool func_440(int iParam0)
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
	iVar0 = func_664();
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

bool func_441(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13)
{
	struct<10> Var0;
	int iVar14;

	if ((((Param0.f_9 != 4.978612f && Param0.f_9 != -6.4001E+33f) && Param0.f_9 != -0.001399076f) && Param0.f_9 != 6.727819E+25f) && Param0.f_9 != -2.918742E+20f)
	{
		Var0.f_9 = -5.45926E-19f;
		if (!func_407(Param0.f_5, &Var0, 1, 0, -1))
		{
			return false;
		}
		if (!func_19(Var0.f_4, 11.19303f))
		{
			return false;
		}
	}
	iVar14 = func_142(Param0.f_4);
	if (((iVar14 == -3.265313E+23f && !WEAPON::_IS_WEAPON_BINOCULARS(Param0.f_4)) && Param0.f_4 != -230.1699f) && Param0.f_4 != 5.402792E-27f)
	{
		return false;
	}
	switch (iVar14)
	{
		case joaat("HORSE_EQUIPMENT"):
		case joaat("COUPON"):
		case joaat("HORSE"):
		case joaat("EMOTE"):
		case joaat("WEAPON_MOD"):
		case joaat("FEE"):
		case joaat("ACTIVE_CARD"):
		case joaat("AMMO"):
		case joaat("WEAPON_DECORATION"):
		case joaat("ABILITY_CARD"):
		case joaat("GOLD"):
		case joaat("COMPONENT"):
		case joaat("MINIGAME"):
		case joaat("ADVERT"):
		case joaat("CORE_ITEM"):
		case joaat("PASSIVE_CARD"):
			return false;
		case joaat("CLOTHING"):
			switch (func_145(Param0.f_4))
			{
				case -525676072:
					if (Param0.f_4 == 921.3249f)
					{
						return true;
					}
					else
					{
						return false;
					}
					break;
				case 81053684:
					return true;
				case 1477698721:
					if (func_19(Param0.f_4, 3.611922E-33f))
					{
						return true;
					}
					return false;
				default:
					return false;
			}
			break;
	}
	if (func_145(Param0.f_4) == -1.223348E+09f)
	{
		return false;
	}
	return true;
}

void func_442(int iParam0, bool bParam1, bool bParam2)
{
	if (func_17(bParam1, 0))
	{
		if (bParam2)
		{
			INVENTORY::_INVENTORY_ENABLE_ITEM(iParam0, bParam1);
		}
		else
		{
			INVENTORY::_INVENTORY_DISABLE_ITEM(iParam0, bParam1, 0);
		}
	}
}

bool func_443(bool bParam0)
{
	return func_665(func_145(bParam0), bParam0);
}

struct<18> func_444(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_445(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_199(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_446(int iParam0, bool bParam1)
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
	Var0.f_4 = -1.548506E+08f;
	func_666(iParam0, Var0, bParam1, 0);
}

void func_447(int iParam0, bool bParam1)
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
	Var0.f_4 = -2.580501E-27f;
	func_666(iParam0, Var0, bParam1, 0);
}

void func_448(int iParam0, bool bParam1)
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
	Var0.f_1 = 4.367703E+27f;
	Var0.f_4 = 5.002459E-36f;
	func_666(iParam0, Var0, bParam1, 0);
}

void func_449(int iParam0, bool bParam1)
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
	Var0.f_4 = -9.847085E+19f;
	func_666(iParam0, Var0, bParam1, 0);
}

void func_450(int iParam0, bool bParam1)
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
	Var0.f_4 = -1.418871E-23f;
	func_666(iParam0, Var0, bParam1, 0);
}

int func_451(int iParam0, int iParam1)
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

bool func_452(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_667(bParam1, bParam2, bParam3);
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

bool func_453(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_454(int iParam0)
{
	return (Global_1915620.f_22 && iParam0) != 0;
}

bool func_455()
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

bool func_456()
{
	return (Global_1893611 & 1 != 0 && func_668() != -1);
}

int func_457()
{
	return -1;
}

int func_458(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_459()
{
	return func_391(Global_1051268);
}

bool func_460()
{
	return func_669(func_390(0));
}

bool func_461(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

void func_462(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_463(int iParam0)
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

void func_464(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_465(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar4;
	int iVar5;

	if (func_19(bParam0, 8.572166E+11f))
	{
		return false;
	}
	if (!func_19(bParam0, 1.570684E+33f))
	{
		return false;
	}
	bVar0 = func_499(bParam0, 0);
	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar0))
	{
		return false;
	}
	iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ITEM_COUNT(bVar0);
	iVar4 = 0;
	while (iVar4 < iVar5)
	{
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(bVar0, iVar4, &bVar1))
		{
		}
		else if (func_19(bVar1, 1.570684E+33f))
		{
			return bVar1;
		}
		iVar4++;
	}
	return false;
}

bool func_466(bool bParam0)
{
	if (func_19(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_467(bool bParam0)
{
	bool bVar0;

	bVar0 = bParam0;
	if (!func_23(bVar0))
	{
		return false;
	}
	if (((((((((((((bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.072587E+16f, 0) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.272253E-14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(5.266092E-27f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.405382E+20f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.643934E-37f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(NaNf, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-3.933513E-29f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-2.153603E-21f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(1.096557E-35f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(2.78471E+33f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(6.60208E-06f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-7.329766E+14f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(-5.276673E+08f, 0)) || bVar0 == COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(joaat("TAROT_CARDS_WANDS"), 0))
	{
		return true;
	}
	return false;
}

int func_468(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_17(bParam0, 0))
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

bool func_469(bool bParam0)
{
	int iVar0;

	if (func_32())
	{
		return func_520(bParam0, -2.509875E-36f, 0);
	}
	else if (func_29())
	{
		if (func_19(bParam0, 1.817096E-35f))
		{
			return false;
		}
		if (func_19(bParam0, -6.878103E+34f) || func_10(bParam0, -60352.49f) == -7.244309E-10f)
		{
			return true;
		}
		if (func_19(bParam0, -3.187887E+34f))
		{
			return true;
		}
		return false;
	}
	else if (func_30())
	{
		if (((((((func_19(bParam0, 1.378098E+25f) || func_19(bParam0, -2.518378E+22f)) || func_19(bParam0, -9.276053E-31f)) || func_19(bParam0, 3.62898E+13f)) || func_19(bParam0, 1.898534E+15f)) || func_19(bParam0, 1.763507E+18f)) || func_19(bParam0, 2.343408E+31f)) || func_19(bParam0, 1.368807E-08f))
		{
			return false;
		}
		if (((!func_19(bParam0, -1.051639E+07f) && !func_19(bParam0, -5.092244E+08f)) && !func_19(bParam0, -3.458856E-14f)) && !func_19(bParam0, 9.077182E+07f))
		{
			return false;
		}
		if (func_670(bParam0) == 0)
		{
			return false;
		}
	}
	if (func_33(0))
	{
		if (Global_1915643.f_20241 == 2)
		{
			return true;
		}
		else if (!func_273(bParam0, Global_1915643.f_20241.f_1))
		{
			return false;
		}
		else if (Global_1915643.f_20241 == 29)
		{
			if (func_275(bParam0))
			{
				return false;
			}
		}
		else if (Global_1915643.f_20241 == 10)
		{
		}
	}
	if (func_19(bParam0, 7.561756E-05f) || bParam0 == -2.680077E+18f)
	{
		if (!func_443(bParam0))
		{
			return false;
		}
	}
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_199(0), bParam0, func_33(0)))
	{
		return false;
	}
	if ((func_37() == 0 && func_19(bParam0, -1.445755E-17f)) && !func_384())
	{
		return false;
	}
	if (func_19(bParam0, -1.823469E-06f))
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()) && PED::GET_SEAT_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != -1)
		{
			return false;
		}
		iVar0 = PED::GET_MOUNT(PLAYER::PLAYER_PED_ID());
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (iVar0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX()))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_470(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	return func_145(bParam0) == 2.862825E+26f;
}

bool func_471(bool bParam0)
{
	if (func_19(bParam0, -1.15596E+32f))
	{
		if (((func_671(bParam0, -9.979451E-09f) || func_671(bParam0, 2.758862E+11f)) || func_671(bParam0, 1.868312E+36f)) || func_671(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_19(bParam0, -6.231785E+11f) || func_19(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

int func_472(int iParam0)
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

Vector3 func_473(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

bool func_474(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_475(int iParam0)
{
	int iVar0;

	iVar0 = func_472(iParam0);
	switch (iVar0)
	{
		case 10:
			return 1092616192 /* Float: 10f */;
		case 29:
			return 1116471296 /* Float: 70f */;
		case 2:
			return 1117126656 /* Float: 75f */;
		case 15:
			if (iParam0 == 63)
			{
				return 1109393408 /* Float: 40f */;
			}
			else
			{
				return 1103626240 /* Float: 25f */;
			}
			break;
	}
	return 1092616192 /* Float: 10f */;
}

float func_476(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

float func_477(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_478(int iParam0)
{
	iParam0 = func_249(iParam0);
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

int func_479(int iParam0)
{
	iParam0 = func_249(iParam0);
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

float func_480(int iParam0)
{
	iParam0 = func_249(iParam0);
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

int func_481(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 2.175367f;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

float func_482(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_483(int iParam0)
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
			return true;
		default:
			return false;
	}
	return false;
}

bool func_484(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

bool func_485(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_486(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_485(iParam0))
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

void func_487(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11634, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11633, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11630, !bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_11631, !bParam0);
}

var func_488()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11634))
	{
		return Global_1940239.f_11632;
	}
	return Global_1940239.f_11629;
}

void func_489(bool bParam0)
{
	if (func_145(bParam0) == -1.548506E+08f)
	{
		func_487(0);
	}
	else if ((((((((((((((((((func_19(bParam0, 21.28579f) || func_19(bParam0, 2.062334E+22f)) || func_19(bParam0, 1.026869E-32f)) || func_19(bParam0, -3.187887E+34f)) || func_19(bParam0, 3.690889E+33f)) || func_19(bParam0, -3.612941E-17f)) || func_19(bParam0, 37699.67f)) || func_19(bParam0, -1.15596E+32f)) || func_10(bParam0, 512441.5f) == 6.535484E+23f) || (func_509(bParam0) && !func_19(bParam0, 1.377061E-27f))) || ((func_37() == 0 && func_173(bParam0, 1, 0)) && !func_19(bParam0, 1.377061E-27f))) || bParam0 == -1.792865E+17f) || bParam0 == -3993060f) || bParam0 == 4.335295E+08f) || bParam0 == 6.914108E-36f) || bParam0 == -1.516899f) || bParam0 == 7.873405E-07f) || bParam0 == -1.766809E-31f) || bParam0 == 4.080975E-29f)
	{
		func_255();
	}
	else if ((func_145(bParam0) == 2.862825E+26f && func_10(bParam0, -60352.49f) == 0) && !bParam0 == -2.680077E+18f)
	{
		func_255();
	}
	else if (func_509(bParam0))
	{
		if (func_19(bParam0, 1.377061E-27f))
		{
			func_487(1);
		}
		else
		{
			func_487(1);
		}
	}
	else if (func_19(bParam0, 1.377061E-27f) || func_173(bParam0, 1, 0))
	{
		func_487(1);
	}
	else
	{
		func_487(0);
	}
}

float func_490(bool bParam0)
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11634))
	{
		if (func_19(bParam0, 1.377061E-27f))
		{
			return -6.23013E-30f;
		}
		else if (func_173(bParam0, 1, 0))
		{
			return -9.57658E-37f;
		}
	}
	else if (func_19(bParam0, 888.6404f))
	{
		if (func_19(bParam0, -1.823469E-06f))
		{
			return -5.269933E+37f;
		}
		switch (func_10(bParam0, -60352.49f))
		{
			case -273840653:
			case 238865292:
			case 999632878:
			case 1130235258:
			case 1177617310:
				return -5.936041E-31f;
			case -1915958659:
			case -809056541:
			case 89124942:
			case 1451036371:
			case 1859991422:
			case 1891031775:
				return 3.73095E-26f;
			case -1919515848:
			case -262371497:
			case 845883585:
			case 1443104131:
				return -5.269933E+37f;
		}
	}
	else if (func_10(bParam0, 512441.5f) == -1.403315E+07f)
	{
		return -8.458454E-32f;
	}
	else if (bParam0 == -1.509861E+30f)
	{
		return 3.73095E-26f;
	}
	return -5.269933E+37f;
}

void func_491(bool bParam0, int iParam1)
{
	bool bVar0;
	struct<10> Var1;
	struct<4> Var15;

	bVar0 = true;
	switch (func_145(bParam0))
	{
		case -1793506273:
		case 235313564:
		case 320213863:
			if (((!func_19(bParam0, 7.561756E-05f) && !func_19(bParam0, 4.196335E-12f)) && !func_10(bParam0, -60352.49f) == -7.244309E-10f) && !func_19(bParam0, 888.6404f))
			{
				bVar0 = false;
			}
			break;
	}
	if (func_142(bParam0) == -6.810042E-17f)
	{
		bVar0 = false;
	}
	if (6.914108E-36f == bParam0)
	{
		bVar0 = false;
	}
	if (-1.555482E+21f == bParam0 && !func_277())
	{
		bVar0 = false;
	}
	if (func_10(bParam0, -60352.49f) == -7.244309E-10f)
	{
		Var1.f_9 = -5.45926E-19f;
		Var15 = { func_167(bParam0, 0, 0) };
		if (func_672(Var15, -0.001399076f, &Var1, 0, -1))
		{
			if (Var1.f_4 == bParam0)
			{
				bVar0 = false;
			}
		}
	}
	if (func_19(bParam0, 1.377061E-27f))
	{
		bVar0 = true;
	}
	else if (func_173(bParam0, 1, 0))
	{
		if (func_37() == 0)
		{
			bVar0 = false;
		}
		else
		{
			bVar0 = true;
		}
		if (!bVar0)
		{
		}
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam1, "focusable"))
	{
		bVar0 = false;
	}
	if (MISC::IS_BIT_SET(Global_1051182, 0) && func_19(bParam0, 1.763507E+18f))
	{
		bVar0 = false;
	}
	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11634) && !DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11631))
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(func_514(), bVar0);
}

bool func_492()
{
	if (!((UNLOCK::UNLOCK_IS_VISIBLE(-6.916609E+21f) || UNLOCK::UNLOCK_IS_VISIBLE(2.188911E-28f)) || UNLOCK::UNLOCK_IS_VISIBLE(-1.680548E+28f)))
	{
		return false;
	}
	else if (!UNLOCK::UNLOCK_IS_VISIBLE(-3.215088E-27f))
	{
		return false;
	}
	return true;
}

int func_493(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_444(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_655(&Var0, func_401(0));
	}
	if (!func_445(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_253(iVar18);
	return iVar19;
}

struct<4> func_494(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_167(bParam0, bParam1, 0) };
	return func_168(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_495(bool bParam0)
{
	if (!func_648(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_673(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_496(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_17(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_674(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

int func_497(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_17(bParam0, 0))
	{
		if (func_281(func_105(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_142(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_317(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_199(bParam3), bParam0);
}

int func_498(bool bParam0, bool bParam1)
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

bool func_499(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_17(bParam0, 0))
	{
		return func_675(func_105(bParam0), bParam1);
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

int func_500(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return -6.050629E+34f;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 3.325955E-05f;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return -1.888354E-34f;
		case -2102079544:
			return -6.697846E-35f;
		case -1243878166:
			return -2.245295E+15f;
		case -1475338121:
			return -4.502388E+24f;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return -1.764091E-15f;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -2.187546E+13f;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return -1.360692E+37f;
		case joaat("PROVISION_BADGER_PELT"):
			return 4.287017E-10f;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return 1.632257E-25f;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return 2370471f;
		case joaat("PROVISION_BEAR_FUR"):
			return 2.932194E+33f;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return -3.912217E-33f;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return -5.962196E-27f;
		case joaat("PROVISION_BEAVER_FUR"):
			return -3.203692E-34f;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return NaNf;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return -6.988417E-28f;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -0.480006f;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -1.462392E-20f;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -3.7889E-35f;
		case joaat("PROVISION_BOAR_SKIN"):
			return -4.710988E-09f;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return -2.609591E-27f;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return -1.608729E-31f;
		case joaat("PROVISION_BUCK_FUR"):
			return 3.905091E+12f;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 1.848953E-34f;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return -2.398134E+15f;
		case joaat("PROVISION_BUFFALO_FUR"):
			return 6.332931E+29f;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return 3.540566E-28f;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return 6.58426E-12f;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 2.189371E+10f;
		case joaat("PROVISION_BULL_HIDE"):
			return 14.92849f;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return -1.30654E-31f;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return 2.111453E-32f;
		case joaat("PROVISION_COUGAR_FUR"):
			return -1.363072E-14f;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return -6.099966E+36f;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 4.030381E+31f;
		case joaat("PROVISION_COW_HIDE"):
			return 22420.24f;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return -2.022465E+27f;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return -5.824753E-38f;
		case joaat("PROVISION_COYOTE_FUR"):
			return -7.605485E-11f;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 4.650009E+07f;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return -3.603771E-23f;
		case joaat("PROVISION_DEER_HIDE"):
			return -4.310513E+24f;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return -0.4815726f;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return -1.315506E+26f;
		case joaat("PROVISION_ELK_FUR"):
			return -8.655325E+07f;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return 1.524337E-31f;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -8.129051E-05f;
		case joaat("PROVISION_FOX_FUR"):
			return 2.563932E-07f;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return -3.682068E-34f;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1.476566E+24f;
		case joaat("PROVISION_FROG_SKIN"):
			return 191630.3f;
		case joaat("PROVISION_FROG_SKIN_POOR"):
			return 2.023578E+21f;
		case joaat("PROVISION_FROG_SKIN_PRISTINE"):
			return 5.125843E+33f;
		case joaat("PROVISION_GILA_SKIN"):
			return 2.004319E-23f;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 6.432449E-37f;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 8.223091E+34f;
		case joaat("PROVISION_GOAT_HAIR"):
			return -2.236873E+28f;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 14.49615f;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return -1.336414E-21f;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 3.034845E-13f;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -7.623004E-25f;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return -6.42261E+30f;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 3.901493E+18f;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 0.01535067f;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return -1.346548E+21f;
		case joaat("PROVISION_MOOSE_FUR"):
			return -4.614238E+20f;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return 1.07592E+26f;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return -5.627013E+23f;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return 1.780195E+24f;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1.843879E+28f;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return 1.352238E-24f;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return -7.004964E+10f;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return -8.513391E-15f;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return -1.036364E+08f;
		case joaat("PROVISION_OXEN_HIDE"):
			return -3.197122E+37f;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return -6.058758E-38f;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -7.941903E-05f;
		case joaat("PROVISION_PANTHER_FUR"):
			return 1.187802E-28f;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -2.586103E+07f;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 5.590409E-14f;
		case joaat("PROVISION_PIG_SKIN"):
			return -0.02631326f;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 8.025176E-12f;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return -3.602657E+07f;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 4.654712E+13f;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -39045f;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return -1.202285E+27f;
		case joaat("PROVISION_RABBIT_PELT"):
			return 4.372456E-17f;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 5.758517E-23f;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 7.120263E-25f;
		case joaat("PROVISION_RACCOON_FUR"):
			return 2.073398E-14f;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return -1.075606E+31f;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return 5.931827E-27f;
		case joaat("PROVISION_RAM_HIDE"):
			return 8.759305E-28f;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 3.211746E+12f;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return -1.282502E-14f;
		case joaat("PROVISION_RAT_FUR"):
			return -4.018596E+33f;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return -1.067191E+26f;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return -2.164177E-31f;
		case joaat("PROVISION_SHEEP_WOOL"):
			return -5.912653E+35f;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 1.446905E+23f;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -1.545501E-30f;
		case joaat("PROVISION_SKUNK_FUR"):
			return -6.556354E-35f;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 7.798851E+30f;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return -3.901178E-07f;
		case joaat("PROVISION_SNAKE_SKIN"):
			return 4.848126E-21f;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return 1.145872E+32f;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 3.273457E+31f;
		case joaat("PROVISION_WOLF_FUR"):
			return -1.692609E+38f;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 6.534205E-11f;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return -1.671041E+16f;
		case joaat("PROVISION_FISH_BLUEGILL"):
			return 3.557755E+29f;
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
			return -2.329572E+19f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return -42.02848f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return 2.359347E-36f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
			return 3.173122E-09f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return 1.625482E-15f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
			return -32.82455f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return -0.1331709f;
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return -1.243994E+19f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return -9.913962E-14f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return -1.130622E-14f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return 42727.16f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
			return -216.3532f;
		case joaat("PROVISION_FISH_MUSKIE"):
			return -7.803749E-23f;
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -0.01386895f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -1.089168E+13f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return -2.441292E-12f;
		case joaat("PROVISION_FISH_PERCH"):
			return 1.265586E-21f;
		case joaat("PROVISION_FISH_PERCH_POOR"):
			return -1.470621E+20f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return 1.026241E+30f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
			return 2.268805E-05f;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return -5.889254E+16f;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
			return -0.003827374f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 772997.1f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
			return -5.130284E-30f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -2.650056E+11f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
			return -3.817226E+35f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return 0.00386155f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
			return -6.169191E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return 1.778536E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return 1.032264E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return -2.326172E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -1.241078E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 2.829236E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return 1.125145E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 1.645637E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return 2.969524E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 1.994419E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -5.270224E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return -0.02395694f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return 11431.26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 9.543463E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return -9.945098E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -1.104878E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 1.15247f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -4.367893E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return -2.364622E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 2.582464E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return 0.09737403f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 4.375227E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1.733188E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return -2.813525E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return -3.445343E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return 6.106568E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -2.969257E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return -3.105819E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -2.482107E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return -2936.217f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 8.167706E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 2.324569E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return 8.648141E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
			return 2.752236E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -3.691172E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 6.811467E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return 2.451152E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return -2.106213E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -7.827749E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -5.99152E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return -0.006777408f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -1.248836E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return 2.510887E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 1.329433E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return 5.896196E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return -5.507036E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return 1.244075E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return -2.215867E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return 2.576456E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 1.539432E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -2.417581E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -4.575111E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 1.315372E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -2.262402E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 4.947495E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return 3.748667E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return -0.01233487f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -1.20341E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return 1.684067E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return -1.354987E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -4.785903E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -3.289835E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return -8.112171E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return 1.315234E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return 5.724939E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 3.238848E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return -25.99025f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -4.255781E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 3.165515E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return -5.257005E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return 0.04452761f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return 1.170937E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -1.438192E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return -8.886971E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 6674.37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return 3.70634E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return 5.622838E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return 2.41126E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return -9.04552E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 0.01406974f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 1.481555E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return -9.939705E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -2.997627E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 5.022904E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 5.126773E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 2.17f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return 3.402669E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 3.775409E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return 4.709984E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return -7.246375E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return 127122;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 1.125331E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -1868002f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 2.82006E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 2.642564E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 8.782212E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -3.148741E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1.876115E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return 3.191426E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return 0.0002026203f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1.874161E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -0.1819312f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return 2.420624E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return 106450.6f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -7.792075E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 0.001034011f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return 5.903107E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return 6.14838E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -2.35209E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -1.502373E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 9.364246E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return -7.581764E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -2.516557E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return 1.425022E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return 2583219f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return -1.576025E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return 1.141049E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return 0.02185705f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return 2.296525E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -5.448411E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return 6.031323E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return -6.611173E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return -3.853162E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return -3.290346E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 1.244372E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return -6115651f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return 5510.279f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return -1.421808E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return 3.548773E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 3.87942E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return 2.859207E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -3.346627E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 1.126332E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -1.315435E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -6.123665E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return -3.255984E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -2.945621E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return 0.008326359f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return 5.204881E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return 6.583925E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 4.833202E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return -1.413963E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return -8.064127E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 1.206917E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -2.822777E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -1.251937E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -1.494413E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -7.403738E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return 7.835537E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -2.294131E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -9470.836f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return 1.354588E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -4.613372E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 116.6528f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return -3.600338E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 4.401329E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return -1.699425E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -492.0932f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 7.592594E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -7.563431E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return -1.894196E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -9.730406E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -1.755783E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return -1.412433E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -1.679256E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1.102441E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 2.171345E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 4.063872E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return -1.970703E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -2.968473E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1.73677E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -5.539848E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return -1.815957E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 4.77285E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -3966555f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 4.464234E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -4.710529E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -1.597008E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return -8.79137E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 8.119324E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 7.821395E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return -5.280598E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -3.022651E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -7.919826E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -7.672252E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 1.23609E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -4.264575E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -0.002991563f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 1.016586E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return 1.583507E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return 2.990535E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -4912.886f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return 0.0005097052f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 2.497799E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return -3.601339E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -9.304169E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return 308851f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return 2.016712E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 1.017856E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return 6.470748E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 5.082998E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -1.027334E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -336913.5f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 1.531465E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -3.243641E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return 5.317531E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return -1.981629E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -0.002520734f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return -1.700902E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return -1.992086E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return 2.669939E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return 1.368228E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return 3.030448E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return 1.75272E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -2147.158f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return -0.5640852f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -3.351084E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return 3.364849E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return 2.580316E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 3.458085E-33f;
		case -2115566177:
			return -1.789823E-06f;
		case -1886936864:
			return -5.809079E-10f;
		case 777641606:
			return -2.067238E-19f;
		case 1815502722:
			return 2.502075E-36f;
		case 1518910503:
			return 3.521009E+23f;
		case 1020297399:
			return 3.066211E+12f;
		case -438328437:
			return -1.098956E+31f;
		case -132069363:
			return 5.448465E-38f;
		case 1718756614:
			return 4.268061E-20f;
		case 616254818:
			return -6.742449E-26f;
		case 1586020612:
			return 3.626007E+23f;
		case 1892902297:
			return 1.251052E+34f;
		case 1920759986:
			return 173224f;
		case 1683741809:
			return 1.089798E+15f;
		case 403588059:
			return -1.152471E-08f;
		case -352805801:
			return 8.687864E-32f;
		case 1491466288:
			return 1.748654E-11f;
		case -1066678466:
			return 8.903085E+25f;
		case -375348364:
			return 4.947259E+12f;
		case -101301217:
			return 23.10463f;
		case 213936563:
			return 1.520799E+29f;
		case 897866285:
			return -1.16346E+21f;
		case 1135507073:
			return 1940.435f;
		case -1671125008:
			return 2.337948E+32f;
		default:
			break;
	}
	return 0;
}

int func_501(bool bParam0)
{
	switch (bParam0)
	{
		case -827518870:
			return 1.33277E+24f;
		case 1367447057:
			return -5.108717E-26f;
		case -2092697195:
			return -2.02004E-12f;
		case -2043601589:
			return 1.494462E+38f;
		case 1758585485:
			return 7.552517E+27f;
		case 1527400190:
			return 2.432979E+17f;
		case 1493601140:
			return 6.310096E+11f;
		case -885592109:
			return 2.105073E-19f;
		case -1282621313:
			return 4.027478E-11f;
		case -70954328:
			return -1.437283E+12f;
		case -1378208045:
			return -2.951125E-22f;
		case 1450608653:
			return 3.129979E+35f;
		case 1543592331:
			return 5.707373E+30f;
		case 1842740532:
			return NaNf;
		case 2004357248:
			return 5.332818E+08f;
		case -229670230:
			return -47565.29f;
		case 546758456:
			return -3.001776E-07f;
		case 1888419655:
			return -6.478606E-18f;
		case -2040849706:
			return -8.356589E-38f;
		case 2014346813:
			return 4.873875E+29f;
		case -1638839614:
			return 8.92488E+18f;
		case 1705186999:
			return 1.657257E+14f;
		case -1821314478:
			return 78902.1f;
		case -1434083213:
			return 3.04824E+32f;
		case 1785697286:
			return 3723.624f;
		case 1891164848:
			return 5.163905E+13f;
		case -1283104686:
			return -1.80739E-08f;
		case -1182590809:
			return -3.506698E-24f;
		case 1011908603:
			return -5.482891E-31f;
		case 1202949852:
			return -2.535809E+26f;
		case -1220574585:
			return -1.953134E-32f;
		case 1739856087:
			return 5.1804E-19f;
		case -1932727774:
			return 9.903944E-30f;
		case 258865203:
			return -6.0134E+20f;
		case 1097274212:
			return -6.328711E+29f;
		case 448991078:
			return 0.000240882f;
		case -1624242931:
			return 1.492831E+19f;
		case -1924159110:
			return -5.345993E+16f;
		case -1621144167:
			return -0.01607517f;
		case -1061253029:
			return 2.42014E+33f;
		case 1181154860:
			return -5.166093E-20f;
		case 1418435161:
			return 0.0003131226f;
		case 1511236969:
			return 1.407744E+07f;
		case 121494806:
			return -1.833136E-14f;
		case -251416414:
			return 3.658142E+30f;
		case -1787430524:
			return -923.3243f;
		case -260181673:
			return -4.306302E-35f;
		case -1087205695:
			return 7.167617E-13f;
		case -857265622:
			return 8.006093E-18f;
		case -1572330336:
			return 3.324154E-15f;
		case -1249752300:
			return -1.087848E-23f;
		case -940052481:
			return -5.772982E-33f;
		case -308200059:
			return -1476817f;
		case -1218522879:
			return 1.229245E-29f;
		case 923422806:
			return -1.795494E+28f;
		case 832214437:
			return 4.166965E-10f;
		case 397926876:
			return -1.163249E+27f;
		case 219794592:
			return 7.479201E+08f;
		case -1061362634:
			return -2652.671f;
		case 1728819413:
			return -1.491517E+16f;
		case 1009802015:
			return -2.683474E+25f;
		case -420237085:
			return 2.41915E-26f;
		case -1195518864:
			return 131.4409f;
		case -159428614:
			return 1.158674E-07f;
		case 1276143905:
			return 0.2051392f;
		case -1262044528:
			return 1.933047E+32f;
		case -963027403:
			return 2.574259E-11f;
		case 739090883:
			return -9.430936E-38f;
		case 1043121665:
			return 1.792428E-26f;
		case -634716689:
			return 3.388162E+19f;
		case 2088901891:
			return -4.039033E-34f;
		case 836208559:
			return -4.608703E-23f;
		case 1600479946:
			return 3.605714E-23f;
		case -675142890:
			return 2.122218E+37f;
		case -906131571:
			return 9.262726E-06f;
		case -591844128:
			return 9.29474E-14f;
		case -1946740647:
			return -8.449966E+14f;
		case -1548204069:
			return -7.0397E-11f;
		case -907373381:
			return -0.001624299f;
		default:
			break;
	}
	switch (bParam0)
	{
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return -4.363424E+12f;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 7.339694E-34f;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 1.73853E+32f;
		case -2102079544:
			return 76.10178f;
		case -1243878166:
			return 2.044954E+16f;
		case -1475338121:
			return 2.17197E-32f;
		case joaat("PROVISION_ALLIGATOR_TOOTH"):
			return -2.262042E-28f;
		case joaat("PROVISION_ANIMAL_FAT"):
			return -2.801076E+33f;
		case joaat("PROVISION_ANIMAL_SCENT_GLAND"):
			return 1.319868E+23f;
		case joaat("PROVISION_ARMADILLO_SKIN"):
			return 3.060569E+07f;
		case joaat("PROVISION_ARMADILLO_SKIN_POOR"):
			return -3.370546E+22f;
		case joaat("PROVISION_ARMADILLO_SKIN_PRISTINE"):
			return 9.316914E-15f;
		case joaat("PROVISION_BADGER_CLAW"):
			return 5.395067E+24f;
		case joaat("PROVISION_BADGER_PELT"):
			return -3.511849E-08f;
		case joaat("PROVISION_BADGER_PELT_POOR"):
			return 911.1936f;
		case joaat("PROVISION_BADGER_PELT_PRISTINE"):
			return 2.905761E+29f;
		case joaat("PROVISION_BAT_WING"):
			return 3.741089E-35f;
		case joaat("PROVISION_BEAR_CLAW"):
			return 2.532529E-17f;
		case joaat("PROVISION_BEAR_FUR"):
			return -1.534049E+31f;
		case joaat("PROVISION_BEAR_FUR_POOR"):
			return 3.247662E-18f;
		case joaat("PROVISION_BEAR_FUR_PRISTINE"):
			return -3.384809E+36f;
		case joaat("PROVISION_BEAVER_FUR"):
			return -4.109969E-26f;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 6.758994E-34f;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 1.262195E-19f;
		case 1696599540:
			return 5.412424E-24f;
		case joaat("PROVISION_BIGHORN_HORN"):
			return 5.672843E-12f;
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			return 5.744271E+36f;
		case joaat("PROVISION_BLACK_BEAR_FUR"):
			return -4.748411E+24f;
		case joaat("PROVISION_BLACK_BEAR_FUR_POOR"):
			return -2.864458E+27f;
		case joaat("PROVISION_BLACK_BEAR_FUR_PRISTINE"):
			return -6.918679E-20f;
		case joaat("PROVISION_BLACK_BEAR_CLAW"):
			return 0.003961442f;
		case joaat("PROVISION_BLUEJAY_FEATHER"):
			return 4.215743E-06f;
		case joaat("PROVISION_BOAR_SKIN"):
			return -5.24959E+23f;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return -1.524802E-34f;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 4.20098E+17f;
		case joaat("PROVISION_BOAR_TUSK"):
			return 2.095404E-05f;
		case joaat("PROVISION_BOOBY_FEATHER"):
			return 2.751997E+35f;
		case joaat("PROVISION_BUCK_ANTLERS"):
			return 1.890471E-20f;
		case joaat("PROVISION_BUCK_FUR"):
			return -2.743915E-27f;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return -1.604311E-21f;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 3.113664E-36f;
		case joaat("PROVISION_BUFFALO_FUR"):
			return -2.493417E-24f;
		case joaat("PROVISION_BUFFALO_FUR_POOR"):
			return -9.780289E-09f;
		case joaat("PROVISION_BUFFALO_FUR_PRISTINE"):
			return -2.904775E+27f;
		case joaat("PROVISION_BUFFALO_HORN"):
			return 5.967157E-28f;
		case joaat("PROVISION_BULL_HIDE"):
			return 2.991146E+23f;
		case joaat("PROVISION_BULL_HIDE_POOR"):
			return 2.129716E-13f;
		case joaat("PROVISION_BULL_HIDE_PRISTINE"):
			return NaNf;
		case joaat("PROVISION_BULL_HORNS"):
			return 2.216645E+23f;
		case joaat("PROVISION_CARDINAL_FEATHER"):
			return 1.5035E+17f;
		case joaat("PROVISION_CEDARWAXWING_FEATHER"):
			return -4.168283E-29f;
		case joaat("PROVISION_CHICKEN_FEATHER"):
			return -1.110327E+15f;
		case joaat("PROVISION_CONDOR_FEATHER"):
			return 4.999272E-35f;
		case joaat("PROVISION_CORMORANT_FEATHER"):
			return 1.377713E+29f;
		case joaat("PROVISION_COUGAR_FANG"):
			return -1.891956E+33f;
		case joaat("PROVISION_COUGAR_FUR"):
			return -3.133442E+08f;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return -1.044409E-36f;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 1.314191E-30f;
		case joaat("PROVISION_COW_HIDE"):
			return -6902.289f;
		case joaat("PROVISION_COW_HIDE_POOR"):
			return 1.534441E+10f;
		case joaat("PROVISION_COW_HIDE_PRISTINE"):
			return 1.424042E-36f;
		case joaat("PROVISION_COYOTE_FUR"):
			return -3.605944E+32f;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return -1044.238f;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 0.0005394233f;
		case joaat("PROVISION_CROW_FEATHER"):
			return -3.96721E+29f;
		case joaat("PROVISION_DEER_HIDE"):
			return -1.531392E+27f;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 1.296568E-28f;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 6.945421E+20f;
		case joaat("PROVISION_DUCK_FEATHER"):
			return -2.104962E-09f;
		case joaat("PROVISION_EAGLE_FEATHER"):
			return 28.95526f;
		case joaat("PROVISION_EAGLE_TALON"):
			return -8.544346E-39f;
		case joaat("PROVISION_EGRET_FEATHER"):
			return 4.254337E-13f;
		case joaat("PROVISION_EGRET_PLUME_LITTLE"):
			return -249.6752f;
		case joaat("PROVISION_EGRET_PLUME_REDDISH"):
			return 8.641682E-30f;
		case joaat("PROVISION_EGRET_PLUME_SNOWY"):
			return 7.26948E-16f;
		case joaat("PROVISION_ELK_ANTLERS"):
			return -5.103073E+25f;
		case joaat("PROVISION_ELK_FUR"):
			return -1.172388E-23f;
		case joaat("PROVISION_ELK_FUR_POOR"):
			return -5.552934E+18f;
		case joaat("PROVISION_ELK_FUR_PRISTINE"):
			return -4.713074E+20f;
		case joaat("PROVISION_FOX_FUR"):
			return 4.249689E+33f;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return -6.251347E+27f;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 1.804645E-13f;
		case joaat("PROVISION_FROG_SKIN"):
			return -2.316604E+16f;
		case joaat("PROVISION_FROG_SKIN_POOR"):
			return 3.605025E+30f;
		case joaat("PROVISION_FROG_SKIN_PRISTINE"):
			return -6.401259E-23f;
		case joaat("PROVISION_GILA_SKIN"):
			return 3.371413E+15f;
		case joaat("PROVISION_GILA_SKIN_POOR"):
			return 6.90253E+30f;
		case joaat("PROVISION_GILA_SKIN_PRISTINE"):
			return 6.781961E+10f;
		case joaat("PROVISION_GOAT_HAIR"):
			return -8.275316E-07f;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 2.8186E+13f;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 1.902756E+36f;
		case joaat("PROVISION_GOOSE_FEATHER"):
			return 1.476425E-07f;
		case joaat("PROVISION_HAWK_FEATHER"):
			return 3.149102E+13f;
		case joaat("PROVISION_HERON_FEATHER"):
			return 1.162888E-07f;
		case joaat("PROVISION_IGUANA_SKIN"):
			return 4748934f;
		case joaat("PROVISION_IGUANA_SKIN_POOR"):
			return -4.925769E+16f;
		case joaat("PROVISION_IGUANA_SKIN_PRISTINE"):
			return -5.59366E+09f;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 5.021574E-23f;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return -5.45278E+24f;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 3.811213E-32f;
		case joaat("PROVISION_JAVELINA_TUSK"):
			return 1.941853E-13f;
		case joaat("PROVISION_LOON_FEATHER"):
			return -1.915262E-19f;
		case joaat("PROVISION_MOOSE_ANTLER"):
			return -3.006098E-31f;
		case joaat("PROVISION_MOOSE_FUR"):
			return NaNf;
		case joaat("PROVISION_MOOSE_FUR_POOR"):
			return 1.475498E-29f;
		case joaat("PROVISION_MOOSE_FUR_PRISTINE"):
			return 8.449746E-20f;
		case joaat("PROVISION_MUSKRAT_FUR"):
			return 5.412538E+17f;
		case joaat("PROVISION_MUSKRAT_FUR_POOR"):
			return -1.008099E+15f;
		case joaat("PROVISION_MUSKRAT_FUR_PRISTINE"):
			return 1.587479E+09f;
		case joaat("PROVISION_OPOSSUM_FUR"):
			return 3.206583f;
		case joaat("PROVISION_OPOSSUM_FUR_POOR"):
			return 3.156214E-36f;
		case joaat("PROVISION_OPOSSUM_FUR_PRISTINE"):
			return 2.103544E+36f;
		case joaat("PROVISION_ORIOLE_FEATHER"):
			return 8.653686E+34f;
		case joaat("PROVISION_OWL_FEATHER"):
			return -1471.28f;
		case joaat("PROVISION_OXEN_HIDE"):
			return 8.777817E+13f;
		case joaat("PROVISION_OXEN_HIDE_POOR"):
			return 7.877886E+34f;
		case joaat("PROVISION_OXEN_HIDE_PRISTINE"):
			return -3429.936f;
		case joaat("PROVISION_OXEN_HORN"):
			return -1.463091E+35f;
		case joaat("PROVISION_PANTHER_FUR"):
			return 2.040756E-11f;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return -1.190135E+23f;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 1.230165E+33f;
		case joaat("PROVISION_PARAKEET_FEATHER"):
			return 6.044927E+33f;
		case joaat("PROVISION_PARROT_FEATHER"):
			return -2.228852E+20f;
		case joaat("PROVISION_PELICAN_FEATHER"):
			return 1.354954E-15f;
		case joaat("PROVISION_PHEASANT_FEATHER"):
			return 1.7053E-27f;
		case joaat("PROVISION_PIG_SKIN"):
			return 2.399623E-37f;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 1.309968E+16f;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 2.005118E+10f;
		case joaat("PROVISION_PIGEON_FEATHER"):
			return 9.19165E-09f;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 1.244748E+24f;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return -2.905586E+21f;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 7.649304E-15f;
		case joaat("PROVISION_QUAIL_FEATHER"):
			return 1.340723E+08f;
		case joaat("PROVISION_RABBIT_PELT"):
			return -4.173823E+18f;
		case joaat("PROVISION_RABBIT_PELT_POOR"):
			return 3.774285E+19f;
		case joaat("PROVISION_RABBIT_PELT_PRISTINE"):
			return 42648.27f;
		case joaat("PROVISION_RACCOON_FUR"):
			return -6.376527E-19f;
		case joaat("PROVISION_RACCOON_FUR_POOR"):
			return 9.790817E-33f;
		case joaat("PROVISION_RACCOON_FUR_PRISTINE"):
			return -2.839511E+25f;
		case joaat("PROVISION_RAM_HIDE"):
			return -8.451437E-23f;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return -3.120081E+20f;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return -9.9871E-11f;
		case joaat("PROVISION_RAT_FUR"):
			return -2.162322E-38f;
		case joaat("PROVISION_RAT_FUR_POOR"):
			return 1075249;
		case joaat("PROVISION_RAT_FUR_PRISTINE"):
			return 1.041892E-18f;
		case joaat("PROVISION_RAVEN_FEATHER"):
			return 6.538313E+25f;
		case joaat("PROVISION_ROBIN_FEATHER"):
			return 2.85642E+10f;
		case joaat("PROVISION_ROOSTER_FEATHER"):
			return -6.924182E-34f;
		case joaat("PROVISION_SEAGULL_FEATHER"):
			return -1.189019E-26f;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 2.41887E-08f;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 2.886459E-21f;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return -7.067495E+21f;
		case joaat("PROVISION_SKUNK_FUR"):
			return -7.652937E-25f;
		case joaat("PROVISION_SKUNK_FUR_POOR"):
			return 7.534458E-16f;
		case joaat("PROVISION_SKUNK_FUR_PRISTINE"):
			return 3.015707E+26f;
		case joaat("PROVISION_SNAKE_SKIN"):
			return -1.235477E+15f;
		case joaat("PROVISION_SNAKE_SKIN_POOR"):
			return -396810.5f;
		case joaat("PROVISION_SNAKE_SKIN_PRISTINE"):
			return 1.094225E-16f;
		case joaat("PROVISION_SONGBIRD_FEATHER"):
			return -5.250766E+08f;
		case joaat("PROVISION_SPARROW_FEATHER"):
			return 891.346f;
		case joaat("PROVISION_SPOONBILL_FEATHER"):
			return 18.9155f;
		case joaat("PROVISION_SQUIRREL_PELT"):
			return 4.911522E+29f;
		case joaat("PROVISION_SQUIRREL_PELT_POOR"):
			return -1.156732E+33f;
		case joaat("PROVISION_SQUIRREL_PELT_PRISTINE"):
			return 2.093845E-20f;
		case joaat("PROVISION_SQUIRREL_TAIL"):
			return 2.053809E-11f;
		case joaat("PROVISION_TURKEY_FEATHER"):
			return 1.632126E-22f;
		case joaat("PROVISION_VULTURE_FEATHER"):
			return 5.073026E-20f;
		case joaat("PROVISION_WHOOPING_CRANE_FEATHER"):
			return 6.703715E+23f;
		case joaat("PROVISION_WOLF_FUR"):
			return 1.753069E-05f;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 13981.44f;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 0.002901857f;
		case joaat("PROVISION_WOLF_HEART"):
			return 1.296667E-28f;
		case joaat("PROVISION_WOODPECKER_FEATHER"):
			return -0.02914838f;
		default:
			break;
	}
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL"):
			return -6.808104E-34f;
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
			return 0.8042136f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
			return 54173.82f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return 7.766576E+28f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
			return 1.48357E-13f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -9.474361E-15f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
			return -0.8634245f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
			return 6.806628E+24f;
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return 1.644354E+09f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
			return -1.285694E-26f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return -1.07688E-05f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -9.903821E+31f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
			return NaNf;
		case joaat("PROVISION_FISH_MUSKIE"):
			return 6.713457E-15f;
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -0.08770876f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
			return -7.270061E-17f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return 6.325863E+23f;
		case joaat("PROVISION_FISH_PERCH"):
			return -1.960648E+37f;
		case joaat("PROVISION_FISH_PERCH_POOR"):
			return 7.85827E-14f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return -1.093287E-24f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
			return 4.531321E-31f;
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return 5.524083E-33f;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
			return -6.528234E-35f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return 2.900765E+14f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
			return -4.564066E+13f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return -3829.311f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
			return -419.7067f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return 1.668566E+23f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
			return 5.271029E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
			return -2.791978E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
			return -1.973181E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 0.005935612f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
			return -4.125912E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return -757.4556f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
			return -2394.307f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 2.485764E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
			return -0.1820178f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
			return 2.485191E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
			return -5.630534E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
			return 1.857011E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -3.028418E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 6.084693E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 1.5001E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
			return -1094163f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
			return 3.936144E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return NaNf;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
			return 3.964258E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
			return 2.60059E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
			return -839.9531f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 2.63251E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 1.112675E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
			return -397941.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
			return 1.005654E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
			return -1.484827E-22f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return 4.587845E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
			return 5.459926E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return -4.113391E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
			return 9.972788E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
			return 2.004761E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
			return 3.472288E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return -2.191319E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
			return 3.424068E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
			return -2.426113E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return -1.794298E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
			return -2.337619E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
			return 6.330144E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
			return -7.244399E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return -1.089331E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
			return 1.289138E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return -6.46713E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
			return -1.155095E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
			return 7.217757E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
			return -3.463256E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 1.536813E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return 495325.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
			return 4.720213E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
			return -1.922904E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
			return 5.34974E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
			return -2.917203E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -6.86021E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
			return 2.929445E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return 3170102f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 0.2195326f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
			return -7702.849f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return 5.026602E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
			return -3.977911E-33f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
			return -5.348961E+10f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 7.541809E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -8.368817E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -3.021982E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
			return 4.623944E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
			return -4.31266E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
			return -1.02756E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return -2.067595E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
			return -1.561351E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
			return -7.821046E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
			return 3.916166E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 1.786278E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return -2.774924E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
			return -5.18109E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
			return -73962.07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
			return 2.44756E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1.885349E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
			return -6.501252E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -3.594753E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -1.126452E-39f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
			return 3.030044E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
			return 2.364231E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
			return 1762459f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 2.966659E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return -1.529587E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
			return 1.522538E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
			return 8.577552E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return 0.2773429f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -6.951659E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 1.312961E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
			return -6.997506E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
			return 1.475482E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -2.710179E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return 6.528006E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return 6.45901E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
			return 1.52503E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 2.650585E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
			return 1.159313E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
			return -1.502399E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
			return 1.462449E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
			return -0.003787166f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -5.350488E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return 1.118566E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
			return -4.559181E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
			return -6810.167f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
			return -1.450287E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return 5.45585E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
			return 1.490104E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -1.398853E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
			return 15850.07f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
			return -3104.583f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
			return -1.785884E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 3.504141E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
			return 3.544257E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return -3.943014E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
			return 9.050487E-33f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
			return -1.892216E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
			return 0.08167779f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
			return -2.017359E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return 1.922871E-15f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
			return 1.227675E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return -6.09164E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
			return -8.951388E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
			return 232765f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 23.34517f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
			return 0.0002729661f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return -1.000537E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
			return 1.01289E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
			return -1.017077E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
			return 3.345818E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
			return -5.901693E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return -1.448547E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
			return -6.585164E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return 0.5924158f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
			return 3.767193f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
			return -1.954345E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return 5.128145E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 1.470634E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return 1.007808E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -8.124128E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
			return -1.62739E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return -1.732609E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
			return 229452.5f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
			return 3.051311E-33f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
			return 6.72688E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return -51.70376f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
			return -3.626767E-05f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return -3.097306E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
			return -21446.35f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
			return -1.093501E-23f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
			return 4.086161E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1.168934E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return 3.999399E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
			return -1.612023E-38f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return 3.288641E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
			return 3.317528E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2.454997E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
			return 1.848731E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
			return 2.365175E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -2.22078E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return -4.820102E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
			return -3.64553E+32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
			return 1.551445E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return 10297.31f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -214.597f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
			return 3.003866E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return 2.239281E+23f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
			return 1.530569E-21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 3.533438E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
			return 2.93328f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
			return 9.104035E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return 3.759302E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
			return -1.825992E-34f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
			return -4.102055E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return 2.44576E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
			return 2.174118E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
			return -391.1935f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
			return 3.324998E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -2.126568E+12f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
			return -8.895341E-29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
			return 3.592761E-18f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return -3640938f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
			return 1.286343E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
			return 3.282702E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -34416.06f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
			return -6.996565E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
			return -7.970758E+36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
			return 2.464411E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return 4.021822E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
			return -8.915936E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
			return 1.205091E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return -7.327666E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
			return -1.601842E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 1.390407E+15f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
			return -4.128292E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return 1.306486E-36f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return 2.073474E-24f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -5.493896E+25f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -4.218528E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -1.860475E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
			return 8.66227E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
			return -1.721995E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return -1.849124E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -7.988138E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
			return -40077.2f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 0.01247553f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -14.79097f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return 8.296797E+28f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
			return 0.01838651f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
			return -2.099322E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return -1.09459E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return 5.150168E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
			return -8.527327E-33f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
			return -5.040805E+30f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
			return -9.878626E+27f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return -1.459838E+14f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
			return -1.253107E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
			return 6.879666E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return 4.282938E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
			return -0.00010171f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
			return -2.497147E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return 2.484913E-36f;
		default:
			break;
	}
	return 0;
}

int func_502(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[10];
	int iVar21;
	int iVar22;

	if (!func_676(bParam0, bParam1, &Var0, &iVar21, bParam2, bParam3))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar22 = 0;
	while (iVar22 < iVar21)
	{
		if (Var0[iVar22 /*2*/] == 3.996812E+36f)
		{
			return Var0[iVar22 /*2*/].f_1;
		}
		else if (Var0[iVar22 /*2*/] == 0)
		{
		}
		else
		{
			iVar22++;
		}
	}
	if (!bParam3)
	{
	}
	return 0;
}

float func_503(int iParam0, bool bParam1)
{
	float fVar0;

	fVar0 = 1f;
	if (!func_17(bParam1, 0))
	{
		return fVar0;
	}
	if (!func_677(iParam0, bParam1, &fVar0))
	{
	}
	return fVar0;
}

float func_504(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	bool bVar2;
	float fVar3;
	float fVar4;

	fVar1 = 1f;
	bVar2 = false;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		bVar2 = false;
		switch ((uParam0[iVar0 /*7*/])->f_1)
		{
			case 1:
				if (bParam1 == (uParam0[iVar0 /*7*/])->f_2)
				{
					return (uParam0[iVar0 /*7*/])->f_6;
				}
				break;
			case 2:
				if (func_142(bParam1) == (uParam0[iVar0 /*7*/])->f_3)
				{
					bVar2 = true;
				}
				break;
			case 3:
				fVar3 = BUILTIN::TO_FLOAT(func_678(bParam1, -982726.7f, 1, 0, 1, 0));
				if ((uParam0[iVar0 /*7*/])->f_5 <= 0f)
				{
					fVar4 = (fVar3 + 1f);
				}
				else
				{
					fVar4 = (uParam0[iVar0 /*7*/])->f_5;
				}
				if (fVar3 <= fVar4 && fVar3 >= (uParam0[iVar0 /*7*/])->f_4)
				{
					bVar2 = true;
				}
				break;
			case 4:
				bVar2 = true;
				break;
			case 0:
				break;
		}
		if (bVar2)
		{
			fVar1 = (fVar1 * (uParam0[iVar0 /*7*/])->f_6);
		}
		iVar0++;
	}
	return fVar1;
}

char* func_505(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_506(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = Global_1915643.f_20646.f_1010.f_201;
	if (bParam0 != 0)
	{
		if (iVar1 < 200)
		{
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				if (Global_1915643.f_20646.f_1010[iVar0] == bParam0)
				{
					return 1;
				}
				iVar0++;
			}
		}
	}
	return 0;
}

int func_507(bool bParam0, int iParam1)
{
	struct<4> Var0;
	int iVar5;
	bool bVar6;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar5 = func_472(iParam1);
	if (iVar5 == -1)
	{
		return 0;
	}
	if (!func_432(6, &Var0))
	{
		return 0;
	}
	Var0.f_2 = -3.877593E+09f;
	Var0.f_3 = func_679(iVar5);
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

bool func_508(bool bParam0, var uParam1)
{
	*uParam1 = func_680(bParam0);
	return *uParam1 != 0;
}

bool func_509(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
	}
	if (func_19(bParam0, 9.077182E+07f))
	{
		return true;
	}
	return false;
}

int func_510(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iVar4;
	}
	iVar0 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar0);
	iVar3 = ITEMSET::GET_ITEMSET_SIZE(iVar0);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		iVar1 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar2, iVar0));
		if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
		}
		else
		{
			(*iParam1)[iVar4] = iVar1;
			iVar4++;
			if (iVar4 == iParam2)
			{
			}
			else
			{
				iVar2++;
			}
			ITEMSET::DESTROY_ITEMSET(iVar0);
			return iVar4;
		}
	}
}

bool func_511(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_512(&iParam0);
		if (!func_17(bVar0, 0))
		{
			bVar0 = func_525(iParam0);
		}
	}
	else
	{
		bVar0 = func_525(iParam0);
	}
	return bVar0;
}

float func_512(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_681(iVar0);
}

bool func_513(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() || !NETWORK::NETWORK_IS_IN_SESSION())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1147168.f_9[iVar0 /*10*/].f_4.f_2 != 0 && Global_1147168.f_9[iVar0 /*10*/].f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_144("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_683(func_682(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_144("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

var func_514()
{
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_11634))
	{
		return Global_1940239.f_11633;
	}
	return Global_1940239.f_11630;
}

int func_515(bool bParam0)
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
	Var0 = { func_285(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_286(Var0, &iVar10, &iVar11, 0))
	{
		if (iVar11 > 0)
		{
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar13 = func_287(iVar12, iVar10);
				if (!bParam0)
				{
					if (func_296(bVar13))
					{
					}
					else
					{
						Jump @170; //curOff = 154
						if (!func_296(bVar13))
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
						func_293(iVar10);
						return iVar14;
						return 0;
					}
				}
			}
		}
	}
}

bool func_516(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

void func_517(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_145((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_518(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_423(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_254("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_239(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_684(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_253(iVar1);
				return true;
			}
			iVar3++;
		}
		func_253(iVar1);
	}
	return false;
}

bool func_519(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_145(bParam0);
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
	iVar1 = func_685(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_686(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_687(bParam0);
	iVar2 = func_686(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

bool func_520(bool bParam0, int iParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = false;
	if ((iParam1 == 0 || func_33(0)) || bParam2)
	{
		bVar0 = true;
	}
	if (!bParam2)
	{
		if ((!func_17(bParam0, 0) || bParam0 == 9605447f) || bParam0 == -5.385955E+12f)
		{
			return false;
		}
	}
	if (!bVar0 && func_688(bParam0))
	{
		return false;
	}
	switch (iParam1)
	{
		case -889932290:
		case -283002878:
		case 0:
			if (!func_33(0))
			{
				if (bParam0 == 4.553053E+26f)
				{
					return true;
				}
				if (((((((((((func_520(bParam0, -7.334532E-18f, 1) || func_520(bParam0, -2.155093E-07f, 1)) || func_520(bParam0, -2.39227E+35f, 1)) || func_520(bParam0, -1.122582E-21f, 1)) || func_520(bParam0, 6.919499E+17f, 1)) || func_520(bParam0, -1.723482E+33f, 1)) || func_520(bParam0, 0.7868816f, 1)) || func_520(bParam0, -2.509875E-36f, 1)) || func_520(bParam0, -9.654275E+13f, 1)) || func_520(bParam0, -1.994502E+32f, 1)) || func_520(bParam0, 6.319022E+25f, 1)) || func_689(bParam0))
				{
					return true;
				}
			}
			else
			{
				return true;
			}
			break;
		case -1559802791:
			return func_19(bParam0, 6.905617E+12f);
		case -1268291907:
			return (func_19(bParam0, 4.153985E+10f) && !func_19(bParam0, 6.834376E-22f));
		case -96974025:
			return (func_19(bParam0, 0.01021266f) && !func_19(bParam0, 6.834376E-22f));
		case -1666604090:
			return (func_19(bParam0, -8.065831E+31f) && !func_19(bParam0, 6.834376E-22f));
		case 1561961676:
			if (func_19(bParam0, -6.878103E+34f) && !func_19(bParam0, 6.834376E-22f))
			{
				return true;
			}
			else if (func_19(bParam0, -1.15596E+32f) || func_19(bParam0, -5.258498E-07f))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case -156634416:
			return (func_19(bParam0, -329878.1f) && !func_19(bParam0, 6.834376E-22f));
		case 1061777683:
			return (func_19(bParam0, 4.196335E-12f) && !func_19(bParam0, 6.834376E-22f));
		case 1783698482:
			return ((func_19(bParam0, 6.834376E-22f) && !func_33(0)) && func_690(bParam0));
		case -2074770370:
			if (Global_1940239.f_39 == 1 || Global_1940239.f_39 == 2)
			{
				return func_691(bParam0, iParam1);
			}
			else if (func_10(bParam0, -60352.49f) == -7.244309E-10f && bParam0 != -6.652081E+10f)
			{
				return true;
			}
			else
			{
				return func_19(bParam0, -6.878103E+34f);
			}
			break;
		case -693134279:
			return func_643(bParam0, 8388608);
		case -182626652:
			if (func_273(bParam0, Global_1915643.f_20241.f_1))
			{
				func_442(func_199(0), bParam0, 1);
				return true;
			}
			break;
	}
	return false;
}

int func_521(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_692(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_199(bParam1), bParam0, bParam3);
}

bool func_522(int iParam0)
{
	return iParam0 != 0;
}

void func_523(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		Global_1940239.f_41.f_2[iParam0 /*2*/].f_1 = bParam1;
	}
}

void func_524(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = Global_1940239.f_41.f_1;
	func_693(iVar0, iParam0);
	func_523(iVar0, bParam1);
	if (func_43())
	{
		if (!func_694(iVar0))
		{
			func_695(iVar0);
			return;
		}
	}
	func_541(iParam0);
}

int func_525(int iParam0)
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
			iVar0 = func_681(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

void func_526(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	bool bVar1;
	struct<18> Var2;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	struct<14> Var24;
	int iVar38;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return;
	}
	iVar0 = 0;
	bVar1 = false;
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2.f_14 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2.f_1 = 4.978612f;
	iVar20 = -1;
	iVar23 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(*iParam0);
	Var24.f_9 = -5.45926E-19f;
	if (func_696(iVar23, &Var2, &iVar20, &iVar21))
	{
		iVar22 = 0;
		iVar22 = 0;
		while (iVar22 < iVar21)
		{
			if (func_239(&Var24, iVar22, iVar20, iVar21))
			{
				if (func_17(Var24.f_4, 0) && Var24.f_4 != 9605447f)
				{
					if (bParam3 && func_495(Var24.f_4))
					{
						bVar1 = false;
						Var24.f_11 = 0;
						iVar38 = 0;
						while (iVar38 < 3)
						{
							if (!MISC::IS_BIT_SET(iVar0, iVar38))
							{
								if (Global_1903834.f_113[iVar38 /*96*/].f_1 == Var24.f_4)
								{
									if (ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_1139.f_245[iVar38 /*4*/].f_3))
									{
										if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290256.f_1139.f_245[iVar38 /*4*/].f_3))
										{
											*iParam1++;
											Var24.f_11++;
											bVar1 = true;
											MISC::SET_BIT(&iVar0, iVar38);
										}
									}
								}
							}
							iVar38++;
						}
						if ((bVar1 && bParam2) && func_242(Var24.f_4))
						{
							func_310(Var24, 1);
						}
					}
					else
					{
						*iParam1++;
						if (bParam2 && func_242(Var24.f_4))
						{
							func_310(Var24, 1);
						}
					}
				}
			}
			iVar22++;
		}
		func_253(iVar20);
	}
}

int func_527(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	if (!func_23(bParam0))
	{
		return 0;
	}
	iVar0 = 1;
	if (func_294(bParam0, -1.926391E+21f, &Var2, &iVar1, 0, 1))
	{
		iVar0 = 99;
		iVar33 = 0;
		while (iVar33 < iVar1)
		{
			if (Var2[iVar33 /*2*/] == 0)
			{
			}
			else
			{
				iVar34 = func_263(Var2[iVar33 /*2*/], 0, 0, 0);
				if (iVar34 < iVar0)
				{
					iVar0 = iVar34;
				}
				iVar33++;
			}
		}
	}
	if (iVar0 < 1)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_528(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;

	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_0xF8D09EF8CE61D7BF(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(Var3.f_2[iVar0 /*3*/]))
			{
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

void func_529(int iParam0, bool bParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_11613, Global_1940239.f_11594);
	iVar1 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, iVar1, bParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7, bParam1);
	DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1940239.f_11613, Global_1940239.f_11594, iParam0);
	Global_1940239.f_11594++;
}

bool func_530(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_294(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_697(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_698(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_699(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_700(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_263(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_531(int iParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam2)
	{
		if ((*uParam1)[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_532(var uParam0)
{
}

void func_533(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_701((*uParam0)[iVar0], func_185(func_174(0), (*uParam0)[iVar0], 0, 1, 1), 0, 0);
		iVar0++;
	}
}

bool func_534()
{
	if (func_195())
	{
		if (Global_1915643.f_20241 == 29)
		{
			return true;
		}
	}
	return false;
}

Vector3 func_535(bool bParam0)
{
	vector3 vVar0;

	if (!func_702(bParam0, &vVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		vVar0.f_1 = -1.677243E+19f;
		vVar0.x = -0.1987056f;
	}
	return vVar0;
}

int func_536(int iParam0)
{
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, 1.584563E+29f))
	{
		return 0;
	}
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, 2.524355E-29f))
	{
		return 1;
	}
	if (INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(iParam0, 1.084202E-19f))
	{
		return 2;
	}
	return 3;
}

void func_537(var uParam0)
{
	if ((uParam0->f_4 == Global_1940239.f_11591 && func_93()) && func_185(func_174(0), Global_1940239.f_11591, 0, 1, 1) > 0)
	{
		uParam0->f_11++;
	}
}

bool func_538(int iParam0)
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

void func_539()
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
	Var0.f_1 = 4.367703E+27f;
	Var0.f_4 = 5.002459E-36f;
	func_703(&Var0, 0, 1, 0);
}

bool func_540()
{
	return Global_1572887.f_7;
}

void func_541(bool bParam0)
{
	int iVar0;
	struct<2> Var1;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;

	iVar0 = bParam0;
	Var1.f_1 = func_704(iVar0);
	Var1 = func_705(iVar0);
	iVar4 = 1;
	iVar5 = func_706(iVar0);
	bVar6 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iVar5, 0);
	if (func_23(bVar6))
	{
		iVar4 = func_527(bVar6);
	}
	iVar7 = func_707(iVar0);
	if (iVar7 == 0)
	{
		iVar7 = 4.808429E-35f;
	}
	func_529(-2.021851E-23f, bParam0, &Var1, func_708(bParam0), iVar4, 0, 0, iVar7);
	Global_1940239.f_41.f_203++;
	Global_1940239.f_41.f_1++;
}

bool func_542(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_543(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_317(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_709(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_544(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_168(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_545(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_710(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_712(func_711(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

float func_546(bool bParam0)
{
	if (func_17(bParam0, 0))
	{
		if (func_19(bParam0, -1.823469E-06f))
		{
			if (func_19(bParam0, 5.454413E+35f))
			{
				return func_69();
			}
			return func_68();
		}
		else if (func_19(bParam0, 4.644778E+30f))
		{
			return func_84();
		}
		else if (func_19(bParam0, 8.368431E+20f))
		{
			return func_714();
		}
		else if (func_19(bParam0, 888.6404f))
		{
			return func_57();
		}
	}
	if (Global_1940072.f_12)
	{
		return func_68();
	}
	else
	{
		return func_57();
	}
	return func_57();
}

bool func_547(bool bParam0)
{
	return (bParam0 == 1.174009E+12f || bParam0 == -4.629755E-24f);
}

bool func_548(bool bParam0)
{
	if ((((((((((func_19(bParam0, 888.6404f) || func_19(bParam0, -8.87647E+33f)) || func_19(bParam0, -1.086842E+20f)) || func_19(bParam0, -2.635625E-06f)) || func_19(bParam0, 1.378098E+25f)) || func_19(bParam0, 1.898534E+15f)) || func_19(bParam0, 1.763507E+18f)) || func_19(bParam0, -1.823469E-06f)) || func_19(bParam0, 4.644778E+30f)) || func_19(bParam0, -1.064618E-36f)) || bParam0 == -1.954145E-33f)
	{
		return true;
	}
	return false;
}

float func_549()
{
	return 0.0004730224f;
}

int func_550(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (!func_391(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_715(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_716(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_717(iVar1);
			}
			break;
		case 3:
			iVar3 = func_718(iVar5);
			iVar4 = func_719(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_720(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_551(int iParam0, int iParam1, bool bParam2)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(func_553(func_721(iParam0, iParam1, bParam2)));
}

struct<8> func_552(int iParam0, int iParam1)
{
	return func_721(iParam0, iParam1, 1);
}

char* func_553(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

bool func_554(int iParam0, bool bParam1)
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

bool func_555(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_556(int iParam0)
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
			else if (func_474(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_474(Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1))
					{
					}
					else
					{
						fVar0 = func_251(Global_17418.f_2992.f_1[iVar1 /*5*/].f_1, Global_1220811.f_48[iParam0 /*21*/][iVar2 /*4*/].f_1);
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
	if (func_722(4))
	{
		return false;
	}
	if (func_460())
	{
		return true;
	}
	if (func_723())
	{
		return false;
	}
	if (func_724(1, 255))
	{
		return false;
	}
	if (func_391(func_725()) && Global_1220811.f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_557(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_295(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0], 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_558(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0] != 0 && func_726(Global_1220811.f_48[iParam0 /*21*/].f_18[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_559(int iParam0, int iParam1, bool bParam2)
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

int func_560()
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
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar0)) && !func_727(iVar0)) && !PED::IS_PED_FULLY_ON_MOUNT(Global_33, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_33, false) && !CAM::IS_FIRST_PERSON_CAMERA_ACTIVE(1, 0, 0)))
		{
			return 3;
		}
		else if (WEAPON::_IS_WEAPON_BINOCULARS(iVar0))
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_727(iVar0)) || WEAPON::_IS_WEAPON_LASSO(iVar0))
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

void func_561(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_728(iParam0);
	iVar1 = func_257(bVar0);
	if (iVar1 != iParam0)
	{
		func_729(iVar1, 4);
	}
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_258(iParam0))
	{
		return;
	}
	func_729(iParam0, 4);
	func_730(iParam0, bParam1);
	if (!func_731(iParam0))
	{
		func_732(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_220(0, 0, 1))
		{
			func_733(1, 6);
		}
	}
}

bool func_562(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
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

void func_563(bool bParam0)
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
	if ((func_19(bParam0, 1.763507E+18f) || func_19(bParam0, 8.273569E-15f)) || func_19(bParam0, -1.230845E+19f))
	{
		bVar37 = true;
	}
	if (func_142(bParam0) == 4.324946E+36f)
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
				fVar30 = func_734(0, Var22.f_2);
				func_735(Var22.f_2);
				bVar39 = true;
			}
			else if (-0.1614907f == Var22.f_1)
			{
				fVar31 = func_734(2, Var22.f_2);
				func_736(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (2.973069E-25f == Var22.f_1)
			{
				fVar32 = func_734(1, Var22.f_2);
				func_737(Var22.f_2);
			}
			else if (-7.847055E+23f == Var22.f_1)
			{
				fVar33 = func_738(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_739(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (2.800259E+28f == Var22.f_1)
			{
				fVar34 = func_738(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_739(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1.406341E+22f == Var22.f_1)
			{
				fVar35 = func_738(BUILTIN::TO_FLOAT(Var22.f_2), Var22.f_5);
				func_739(1, fVar35, 1, 1, bVar37);
			}
			else if (6.109425E+35f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-1.597577E+09f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-0.0001180082f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(18, fVar36, 1, 1);
			}
			else if (7.468359E+28f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (8.651734E+09f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-2.200394E-06f == Var22.f_1)
			{
				fVar36 = func_740(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_741(1, fVar36, 1, 1);
			}
			else if (-3.61937E+09f == Var22.f_1)
			{
				func_742(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_19(bParam0, -3.480943E+19f))
		{
			func_416(func_654(-3.750745E+13f), 1);
		}
		if (func_19(bParam0, -3.458856E-14f))
		{
			func_416(func_654(-2.12416E-30f), 1);
		}
		if (bVar38)
		{
			func_416(func_654(1.131948E-13f), 1);
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

void func_564(int iParam0)
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

bool func_565(int iParam0)
{
	return Global_1953279.f_595[iParam0] > 0;
}

void func_566(int iParam0)
{
	Global_1953279.f_595[iParam0]++;
}

bool func_567()
{
	if (Global_1953279.f_3503)
	{
		return true;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1953279.f_3501)) < 1250)
	{
		return true;
	}
	if (func_743())
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
	{
		return true;
	}
	return false;
}

int func_568(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (((iVar0 == 5.002459E-36f || iVar0 == -9.847085E+19f) || func_19(bParam0, 3.611922E-33f)) || func_19(bParam0, -1.186825E-08f))
	{
		return 1;
	}
	return 0;
}

int func_569(bool bParam0)
{
	int iVar0;

	if (bParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_575(&iVar0))
	{
		if (bParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_570(bool bParam0)
{
	if (-1.527139E-27f == func_744(5.002459E-36f))
	{
		if (func_575(bParam0))
		{
			return true;
		}
	}
	else if (func_745(-9.847085E+19f, bParam0) || func_19(func_746(2.057189E+24f), -1.186825E-08f))
	{
		if (func_575(bParam0))
		{
			return true;
		}
	}
	return false;
}

float func_571()
{
	float fVar0;

	fVar0 = 2.505841E+17f;
	switch (func_560())
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

float func_572()
{
	float fVar0;

	fVar0 = 7.033603E-17f;
	switch (func_560())
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

float func_573()
{
	float fVar0;

	fVar0 = -1.234154E-27f;
	switch (func_560())
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

float func_574()
{
	float fVar0;

	fVar0 = 1.111775E+20f;
	switch (func_560())
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

bool func_575(bool bParam0)
{
	if (func_745(5.002459E-36f, bParam0))
	{
		return true;
	}
	if (func_745(-9.847085E+19f, bParam0))
	{
		return true;
	}
	return false;
}

void func_576(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

void func_577(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_361(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_361(bParam0, 1) /*12*/].f_11 - (Global_1953279.f_83[func_361(bParam0, 1) /*12*/].f_11 && iParam1));
}

int func_578(int iParam0, bool bParam1)
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
				return func_747();
			}
			break;
	}
	return 0;
}

int func_579(int iParam0, bool bParam1)
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

int func_580(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
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
	if (func_438(bVar1, &uVar0))
	{
		return 0;
	}
	if (!func_748(bParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_749(bParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1953279.f_3352[Global_1953279.f_3352.f_26] = bVar1;
	Global_1953279.f_3352.f_26++;
	*uParam1++;
	return 1;
}

void func_581()
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

void func_582(bool bParam0, bool bParam1)
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

	if (!func_17(bParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_644(bParam1, &Var0, 4.975531E-10f, 0, 0, -2.889029E+24f))
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
		iVar7 = func_750(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_751(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_553(func_752(iVar7));
		}
		else
		{
			bVar8 = func_647(bParam1);
			if (func_17(bVar8, 0))
			{
				bParam1 = bVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = MISC::VAR_STRING(0, func_267(bParam1, 0));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		fVar6 = 4.808429E-35f;
		iVar7 = func_750(bParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_751(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_553(func_752(iVar7));
		}
		else
		{
			bVar9 = func_647(bParam1);
			if (func_17(bVar9, 0))
			{
				bParam1 = bVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = MISC::VAR_STRING(0, func_267(bParam1, 0));
		}
	}
	sVar10 = func_505(MISC::VAR_STRING(10, sVar3, sVar5), fVar6);
	func_653(sVar10, Var0.f_1, MISC::GET_HASH_KEY(Var0), 0, fVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

void func_583(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_753();
	}
	if (bParam0)
	{
		func_349(8);
		func_349(512);
	}
	else
	{
		func_349(8);
		func_349(16);
	}
}

int func_584()
{
	return Global_1953279.f_1;
}

bool func_585(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_145(bParam1);
	iVar1 = func_145(bParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_754(bParam1) && func_754(bParam0))
	{
		return true;
	}
	return false;
}

void func_586(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	func_755(bParam0, 0, 0, bParam3, bParam5);
	func_357(bParam1, 1, bParam2, bParam4, bParam3, bParam5);
}

int func_587(int iParam0, int iParam1)
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

void func_588()
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

void func_589(bool bParam0)
{
	func_577(bParam0, 8, 6);
}

void func_590(var uParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	if (bParam3)
	{
		if ((*bParam1 == 4.506009E-09f || *bParam1 == 7.777273E-38f) || *bParam1 == 5.354456E-12f)
		{
			iVar0 = 16;
			if (func_145(uParam0->f_1[iVar0 /*3*/]) != 2.251657E+29f)
			{
				return;
			}
			iVar1 = func_756(uParam0->f_1[iVar0 /*3*/]);
			if (iVar1 != 0 && iVar1 != Global_1953279.f_83[iParam2 /*12*/])
			{
				*bParam1 = iVar1;
				return;
			}
		}
		if (!func_757(*bParam1, iParam2))
		{
			*bParam1 = Global_1953279.f_1676.f_1[iParam2 /*3*/];
			return;
		}
	}
	*bParam1 = Global_1953279.f_83[iParam2 /*12*/];
}

void func_591(int iParam0)
{
	func_758(&(Global_1953279.f_2938), iParam0);
}

void func_592(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_759(&(Global_1953279.f_2938), iParam0, iParam1);
}

void func_593(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_594(var uParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;

	bVar0 = bParam1;
	bVar1 = func_364(bVar0, 1);
	if (bParam3 && func_19(uParam0->f_1[iParam2 /*3*/], 1.280781E-26f))
	{
		func_760(uParam0, uParam0->f_1[iParam2 /*3*/]);
	}
	switch (func_587(iParam2, 1))
	{
		case joaat("MP_COMPONENT_TYPE_HAIR"):
			func_761(uParam0, bVar0, iParam2, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_BEARD"):
			func_762(uParam0, bVar0, iParam2);
			break;
		case -338487716:
			func_763(uParam0, bVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_764(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1742327865:
			func_765(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1250092473:
			func_766(uParam0, bVar1, bVar0, iParam4);
			break;
		case -893163968:
			func_767(uParam0, bVar1, bVar0, iParam4);
			break;
		case -450913544:
			func_768(uParam0, bVar1, bVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_769(uParam0, bVar1, bVar0, iParam4);
			break;
		case 304805134:
			func_770(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1145151482:
			func_771(uParam0, bVar1, bVar0, iParam4);
			break;
		case joaat("MP_COMPONENT_TYPE_LOADOUT_2"):
			func_772(uParam0, bVar1, bVar0, iParam4);
			break;
		case -426430150:
			func_773(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_774(uParam0, bVar1, bVar0, iParam4);
			break;
		case 1958421083:
			func_775(uParam0, bVar1, bVar0, iParam4);
			break;
		case -1944638739:
			func_776(uParam0, bVar1, bVar0, iParam4);
			break;
	}
}

int func_595(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;

	bVar0 = false;
	if (func_584() == 4.387347E-38f)
	{
		bVar0 = true;
	}
	if (iParam2 == 1.494364E-28f)
	{
		return 1.494364E-28f;
	}
	if (iParam2 != 0 && func_777(bParam0, bVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_778(bParam0, func_587(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_596(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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
		iVar1 = func_779(Global_1953279.f_1676);
		if (bParam4)
		{
			bParam4 = iVar1 == -1;
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_354(4718592) && !func_780(func_145(Global_1953279.f_1557.f_1[uParam0->f_2[iVar0 /*2*/] /*3*/])))
		{
		}
		else
		{
			func_781(uParam0->f_2[iVar0 /*2*/], bParam1, bParam2, iVar1);
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
		if (Global_1953279.f_1676 != 2.716622E-21f || !func_751(2, -1))
		{
			bVar3 = true;
		}
		else if (!func_19(Global_1953279.f_1676, -7.339854E+32f) && (Global_1953279.f_1676 != 2.716622E-21f || !func_751(2, -1)))
		{
			bVar3 = true;
		}
		if (bVar3)
		{
			Global_1953279.f_1676 = 2.716622E-21f;
			Global_1953279.f_1557 = 2.716622E-21f;
			func_782(2.716622E-21f, 1, 1);
			func_783(-1, 0, 6);
			func_148(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_583(0, 1);
	}
}

int func_597(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_784(&uParam0, iParam4, bParam5, iParam6);
}

bool func_598(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	if (func_477(Global_33, iParam0, 0, 1) < 2f && PED::IS_ANIMAL_INTERACTION_POSSIBLE(Global_33, iParam0))
	{
		return true;
	}
	return false;
}

bool func_599()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-3.515305E-20f))
	{
		func_323(2);
		return false;
	}
	if (!func_383())
	{
		func_323(9);
		return false;
	}
	if (Global_1051832.f_92[34 /*75*/].f_1 & 128 != 0)
	{
		func_323(3);
		return false;
	}
	Var0 = { func_390(0) };
	if (func_391(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_392(PLAYER::PLAYER_ID(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_785(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_550(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_551(iVar4, 2.098029E-22f, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_323(iVar2);
			return false;
		}
	}
	if (func_222())
	{
		func_323(4);
		return false;
	}
	if (func_724(4, PLAYER::NETWORK_PLAYER_ID_TO_INT()) && (Global_1051832.f_92[34 /*75*/].f_49 && 2f) == 0)
	{
		func_323(5);
		return false;
	}
	if (func_786(131072, 255))
	{
		func_323(7);
		return false;
	}
	if (func_787())
	{
		func_323(8);
		return false;
	}
	return true;
}

bool func_600(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_786(32, iParam0);
}

bool func_601(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_602()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_603(bool bParam0)
{
	if (bParam0)
	{
		func_788(4);
	}
	else
	{
		func_374(4);
	}
}

void func_604(bool bParam0)
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

bool func_605()
{
	return Global_1915643.f_20643;
}

int func_606(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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
	if (func_789())
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

bool func_607(int iParam0)
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

int func_608(int iParam0)
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

bool func_609(int iParam0, int iParam1, int iParam2)
{
	return func_89(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

var func_610(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_790() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_791());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_791());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_791());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_792(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_793(iVar2))
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
				if (iVar9 & 8192 != 0 && func_794(iVar2) != 1)
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
					if (!func_795(iVar10))
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

int func_611(var uParam0, struct<21> Param1)
{
	if (!func_796(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

bool func_612(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_613(int iParam0)
{
	if (func_615(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_614(int iParam0)
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

bool func_615(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_616(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_617()
{
	if (!func_383())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

int func_618()
{
	if (func_521(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_619(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_199(0);
	*iParam1 = { func_168(bParam0, func_401(0), fParam3, 0) };
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

bool func_620(bool bParam0, int iParam1, int iParam2)
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

bool func_621(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_199(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

struct<29> func_622(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_628(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_623(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_710(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_712(func_797(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_624(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_628(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_625(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_712(func_798(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_626(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_199(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_628(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_627(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_710(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_712(func_799(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_713(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

struct<17> func_628(var uParam0, bool bParam1)
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
		Var0.f_15 = func_317(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_410() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_629(bool bParam0)
{
	if (func_19(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_19(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_19(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

struct<12> func_630(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					iVar0 = 52.13412f;
					break;
				case 1:
					iVar0 = -1.253578E+34f;
					break;
				case 2:
					iVar0 = 5.78951E+27f;
					break;
				case 3:
					iVar0 = 6.711821E-11f;
					break;
				case 4:
					iVar0 = 2.161009E+17f;
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					iVar0 = -1.889634E+14f;
					break;
				case 1:
					iVar0 = -9.551517E+08f;
					break;
				case 2:
					iVar0 = -2.712923E+26f;
					break;
				case 3:
					iVar0 = 1.961521E-29f;
					break;
				case 4:
					iVar0 = -5.749149E+18f;
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					iVar0 = 8.196574E+09f;
					break;
				case 1:
					iVar0 = -5.1598E+29f;
					break;
				case 2:
					iVar0 = -1.746204E+25f;
					break;
				case 3:
					iVar0 = -3.616876E-20f;
					break;
				case 4:
					iVar0 = 3.71707E+16f;
					break;
			}
			break;
	}
	if (bParam3)
	{
		func_800(uParam2, 4.150592E+16f);
	}
	else
	{
		func_800(uParam2, 2.575707E+29f);
	}
	func_800(uParam2, iVar0);
	return *uParam2;
}

int func_631(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_801(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

int func_632(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<13> Var6;
	int iVar29;
	struct<2> Var30;
	bool bVar32;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (!func_802(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_803(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_804(bParam0, bParam2);
	iVar2 = 0;
	if (func_142(bParam0) == -42.1084f)
	{
		if (!func_19(bParam0, 7.396633E-08f) && !func_19(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_643(bParam0, 8388608) && !func_805(27))
	{
		func_806(27);
	}
	func_807(bParam0);
	if (!bVar3)
	{
		if (func_19(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_809(func_808(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_37() == -1)
				{
					func_810(bVar1);
				}
				if (func_170(0) && func_811(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_812(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_813(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_142(bParam0) == -3.265313E+23f)
		{
			if (!func_814(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_142(bParam0) == 6.919076E-28f && func_692(bParam0))
		{
			if (!func_815(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_19(bParam0, -1.355837E+35f))
		{
			func_416(func_816(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_416(func_415(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_19(bParam0, -3.187887E+34f) && !func_19(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_164(536, 0);
			}
			if (func_19(bParam0, -2.826186E-34f) || func_19(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_19(bParam0, -8.87647E+33f))
		{
			if (func_19(bParam0, -157.5682f))
			{
			}
		}
		else if (func_19(bParam0, -1.641295E-14f) && func_19(bParam0, 888.6404f))
		{
			func_164(519, 0);
		}
		else if (func_19(bParam0, 888.6404f) && func_19(bParam0, -1.086842E+20f))
		{
		}
		else if (func_19(bParam0, 4.619806E-19f))
		{
		}
		else if (func_19(bParam0, 9.243318E-18f))
		{
			if (func_817())
			{
				func_818(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_19(bParam0, 1.063826E-10f) && func_19(bParam0, 7.561756E-05f))
		{
			func_819(bParam0);
		}
		else if (func_19(bParam0, -1.56509E-23f))
		{
			func_820(bParam0);
		}
		else if (func_19(bParam0, -2.873199E-24f))
		{
			func_821(bParam0);
		}
		else if (func_19(bParam0, -0.08388482f) && func_19(bParam0, 7.561756E-05f))
		{
			func_822(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_19(bParam0, 7.339242E+27f))
		{
			func_823();
		}
		else if (func_19(bParam0, -6.685221E-33f))
		{
		}
		else if (func_19(bParam0, 3.708451E-17f))
		{
		}
		else if (func_19(bParam0, -0.08388482f) && func_19(bParam0, -8.498268E-23f))
		{
		}
		else if (func_19(bParam0, -2.826186E-34f) || func_19(bParam0, -5.200334E-11f))
		{
		}
		else if (func_19(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_19(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_295(3.397524E-31f, 1))
					{
						func_632(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_295(6.760231E-15f, 1))
					{
						func_632(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_295(-13818.36f, 1))
					{
						func_632(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_295(4.642866E-20f, 1))
					{
						func_632(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_295(-21.88862f, 1))
					{
						func_632(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_295(5.120068E-22f, 1))
					{
						func_632(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_19(bParam0, -5.092244E+08f) && func_643(bParam0, 4))
		{
		}
		else if (func_19(bParam0, 9.811189E+11f))
		{
			func_824(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		switch (bParam0)
		{
			case joaat("AMMO_ARROW_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.126487E+31f;
				break;
			case joaat("AMMO_THROWING_KNIVES_POISON_BUNDLE"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -4.003846E-11f;
				break;
			case joaat("UPGRADE_FSH_BAIT_CRICKET_TIN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 4.742571E+17f;
				break;
			case joaat("UPGRADE_FSH_BAIT_WORM_CAN"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.01081E-28f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1.95382E-16f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_FNCY_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2.353932E-30f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -3.627576E-31f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_PLN_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 6.722741E+37f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_SML_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -5536.38f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_JEWELRY_BOX_LRG_POOR_02"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = 7.333728E+10f;
				break;
			case joaat("PROVISION_MP_TREASURE_MAP_REWARDS_BOX_01"):
				bParam2 = true;
				bVar4 = true;
				iVar2 = -8.132168E-17f;
				break;
			case joaat("WEAPON_KIT_BINOCULARS"):
			case joaat("WEAPON_KIT_BINOCULARS_IMPROVED"):
				break;
			case joaat("DOCUMENT_GENERIC_MAP_ROLLED"):
				bParam2 = true;
				bVar4 = true;
				break;
			case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
				func_825(272, func_267(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_825(270, func_267(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_825(271, func_267(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(685, 1.579975E+31f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_POTENT_RESTORATIVE"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			case joaat("CONSUMABLE_SPECIAL_RESTORATIVE_CRAFTED"):
			case joaat("CONSUMABLE_RESTORATIVE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(685, 42.3843f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SNAKE_OIL"):
			case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO"):
			case joaat("CONSUMABLE_SPECIAL_SNAKE_OIL_CRAFTED"):
			case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(685, -6.137742E-06f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -2034071102: /* GXTEntry: "Lamb Heart" */
			case -1939600995: /* GXTEntry: "Prime Rib" */
			case -1760041550: /* GXTEntry: "High Quality Beef Stew" */
			case -1708424762: /* GXTEntry: "Regional Beef Stew" */
			case -1598782722: /* GXTEntry: "Consomme" */
			case -1505924449: /* GXTEntry: "Fried Catfish" */
			case -1403873319: /* GXTEntry: "Prairie Chicken" */
			case -1335566375: /* GXTEntry: "Lamb Fry" */
			case -1192685521: /* GXTEntry: "Oyster Stew" */
			case 144810727: /* GXTEntry: "Turtle Soup" */
			case 567164682: /* GXTEntry: "Oatmeal" */
			case 1174625611: /* GXTEntry: "Corned Beef Hash" */
			case 1955751248: /* GXTEntry: "Roast Beef" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_826(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_164(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_164(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_805(1))
				{
					func_164(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_164(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_37() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_164(534, 0);
				break;
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar5 = bParam0;
		func_827(&bVar5);
		if (!func_813(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_170(0))
		{
			return 1;
		}
		if (func_142(bParam0) == -42.1084f)
		{
			func_828(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_170(0) && !func_414())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_632(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_829(iVar2, 0);
		}
	}
	Var30 = { func_425(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_830(bParam0);
	if (fParam6 > 0f)
	{
		if (func_19(bParam0, -5.092244E+08f))
		{
			func_831(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_424(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

bool func_633(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("CONSUMABLE_SPECIAL_HORSE_REVIVER_CRAFTED"):
		case joaat("CONSUMABLE_HORSE_REVIVER"):
			return true;
	}
	return false;
}

bool func_634(int iParam0, bool bParam1)
{
	ATTRIBUTE::STOP_ITEM_PREVIEW();
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
	if (!TASK::IS_PED_IN_WRITHE(iParam0))
	{
		return false;
	}
	if (PED::_IS_ANIMAL_INTERACTION_RUNNING(Global_33))
	{
		return false;
	}
	PED::SET_PED_CONFIG_FLAG(Global_33, 176, true);
	TASK::CLEAR_PED_TASKS(Global_33, true, false);
	TASK::TASK_REVIVE_TARGET(Global_33, iParam0, bParam1);
	return true;
}

int func_635()
{
	return Global_1904375;
}

void func_636(int iParam0)
{
	Global_1904375.f_2 = iParam0;
}

void func_637(bool bParam0)
{
	Global_1904375.f_1 = bParam0;
}

void func_638(int iParam0)
{
	Global_1904375.f_5 = iParam0;
}

void func_639(bool bParam0, int iParam1, var uParam2)
{
	*iParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case joaat("AMMO_REVOLVER_AMMOBOX"):
			*iParam1 = 2.868836E+26f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_USED"):
			*iParam1 = -6.44427E+07f;
			*uParam2 = 1.33835E+22f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_EXPRESS"):
			*iParam1 = -1.5597E+17f;
			*uParam2 = 984456.8f;
			break;
		case joaat("AMMO_REVOLVER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.340805E-26f;
			*uParam2 = -1.163197E-36f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX"):
			*iParam1 = -0.0004557966f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_USED"):
			*iParam1 = -7.543728E-18f;
			*uParam2 = 5.999469E+31f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_EXPRESS"):
			*iParam1 = -4.09862E-21f;
			*uParam2 = 6.597174E-09f;
			break;
		case joaat("AMMO_PISTOL_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = -1.78904E-16f;
			*uParam2 = -1.54477E-12f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX"):
			*iParam1 = -4.051864E-08f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_USED"):
			*iParam1 = 6.371044E+11f;
			*uParam2 = 4.104352E-31f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_EXPRESS"):
			*iParam1 = -2.04749E+08f;
			*uParam2 = 1.48591E+21f;
			break;
		case joaat("AMMO_RIFLE_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 3.971968E-06f;
			*uParam2 = 3.147558E+28f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX"):
			*iParam1 = -9.057481E+30f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_USED"):
			*iParam1 = 2.184573E-20f;
			*uParam2 = -1.339106E-09f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_EXPRESS"):
			*iParam1 = -9.738313E+24f;
			*uParam2 = -1.21702E+18f;
			break;
		case joaat("AMMO_REPEATER_AMMOBOX_HIGH_VELOCITY"):
			*iParam1 = 39255.64f;
			*uParam2 = 1.256526E-30f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX"):
			*iParam1 = 0.0001116685f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_USED"):
			*iParam1 = -1.441753E-05f;
			*uParam2 = -2.686844E-29f;
			break;
		case joaat("AMMO_SHOTGUN_AMMOBOX_SLUG"):
			*iParam1 = -8.900574E-37f;
			*uParam2 = 1.249562E-27f;
			break;
		case joaat("AMMO_22_AMMOBOX"):
			*iParam1 = -4.758429E+16f;
			*uParam2 = 4.067655E+37f;
			break;
	}
}

bool func_640()
{
	return !Global_1913431;
}

void func_641(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_642(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_643(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_644(bool bParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_645(bool bParam0)
{
	if (func_19(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_19(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_19(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_19(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_19(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_19(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_19(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_19(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_19(bParam0, -1.58908E+26f) || func_19(bParam0, -3.503386E-34f)) || func_19(bParam0, -1.887503E+19f)) || func_19(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_646(int iParam0)
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

bool func_647(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_832(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_285(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_286(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_833(bVar14))
			{
				func_293(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_293(iVar11);
	}
	return false;
}

bool func_648(bool bParam0, int iParam1)
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

int func_649(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_17(bParam0, 0) && !func_281(func_105(bParam0), 2))
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

int func_650(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_834(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_651(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_835(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_836(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_837(bParam0), 128);
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

char* func_652(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_653(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_838(sParam0, sParam1, iParam2);
	return iVar20;
}

struct<2> func_654(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_655(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_656(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_495(bParam1))
	{
		iVar1 = 0;
		iVar0 = 0;
		while (iVar0 < 3)
		{
			if (Global_1903834.f_113[iVar0 /*96*/].f_1 == bParam1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_1290256.f_1139.f_245[iVar0 /*4*/].f_3))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_1290256.f_1139.f_245[iVar0 /*4*/].f_3))
					{
						iVar1++;
					}
				}
			}
			iVar0++;
		}
		return iVar1;
	}
	return func_264(iParam0, bParam1);
}

int func_657(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_839(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_425(bParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var0))
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var0, *iParam2);
		}
		*iParam2 = func_658(*iParam0, bParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_840(bParam1))
			{
				if (!func_841(0, bParam1, *iParam2))
				{
				}
				if (func_842(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, false);
				}
				*iParam2 = func_843(*iParam0, bParam1, *iParam2);
			}
		}
		if (*iParam2 > 0)
		{
			iVar2 = func_844(*iParam0, bParam1);
			if (*iParam2 > iVar2)
			{
				*iParam2 = iVar2;
			}
		}
		func_88(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_658(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	struct<11> Var6;
	var uVar102;

	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return iParam2;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar4 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var6.f_10 = 10;
	iVar3 = 0;
	while (iVar3 < iVar4)
	{
		if (iParam2 == 0)
		{
		}
		else
		{
			iVar2 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
			if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
			}
			else if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
			{
			}
			else
			{
				bVar0 = func_511(iVar2);
				if (!func_508(bVar0, &uVar102))
				{
					if (ENTITY::IS_ENTITY_A_PED(iVar2))
					{
						if ((iParam4 == 2 && ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar2)) || (iParam4 == 1 && !ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar2)))
						{
						}
						else if (bVar0 == bParam1)
						{
							if (iParam0 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()))
							{
								iVar5 = 0;
								while (iVar5 < 3)
								{
									if (Global_1290256.f_1139.f_245[iVar5 /*4*/].f_3 == iVar2)
									{
										func_845(&Var6, &(Global_1903834.f_113[iVar5 /*96*/]));
									}
									else
									{
										iVar5++;
									}
								}
							}
							if (bParam3)
							{
								if (Global_1915643.f_20638 || Global_1915643.f_22504.f_1)
								{
									if (Global_1915643.f_20241 == 29 && ENTITY::IS_ENTITY_A_PED(iVar2))
									{
										if (func_19(bVar0, -6.231785E+11f) || func_19(bVar0, 1.026869E-32f))
										{
											PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_424(bVar0, -1, 0, 1, 0, 0, 0);
									}
								}
								ENTITY::_DELETE_CARRIABLE(&iVar2);
							}
							else
							{
								PED::DETACH_CARRIABLE_ENTITY(iVar2, false, false);
							}
							iParam2 = (iParam2 - 1);
						}
						iVar3++;
						ITEMSET::DESTROY_ITEMSET(iVar1);
						return iParam2;
					}
				}
			}
		}
	}
}

void func_659(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915643.f_20637)
	{
		if (Global_1915643.f_20241 == 29)
		{
			if (func_509(bParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_846(bParam0))
					{
						case 2:
							iVar1 = 1;
							break;
						case 4:
							iVar1 = 3;
							break;
						case 8:
							iVar1 = 4;
							break;
					}
				}
				iVar0 = 0;
				while (iVar0 <= (iParam1 - 1))
				{
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_847(bParam0), iVar1, func_19(bParam0, 0.9368603f), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_660(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_425(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var0))
	{
		STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam1);
	}
	func_848(bParam0, iParam1);
	return func_849(bParam0, iParam1, bParam2, iParam3);
}

int func_661(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;

	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = func_850(iParam0);
	if (iVar0 <= 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = 0;
	while (func_851(&Var3))
	{
		if (Var3.f_1 != 0)
		{
			if (func_852(Var3.f_1, &iVar1, bParam1))
			{
				iVar2 = (iVar2 + iVar1);
			}
		}
	}
	return iVar2;
}

bool func_662(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 26);
}

int func_663()
{
	return Global_1940239.f_40;
}

var func_664()
{
	return Global_1902883.f_379;
}

bool func_665(int iParam0, bool bParam1)
{
	if (func_19(bParam1, 1.763507E+18f))
	{
		return func_853(bParam1);
	}
	if (func_547(bParam1))
	{
		return func_112(524288);
	}
	switch (iParam0)
	{
		case -77448735:
			if (func_548(bParam1))
			{
				return func_853(bParam1);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_853(bParam1);
		case -1520388130:
		case 1802292908:
			return func_112(16);
		case 81053684:
		case 1477698721:
			return func_112(4);
		case -525676072:
			return func_112(8);
		case 1779021115:
			if (func_17(bParam1, 0))
			{
				if (bParam1 == -230.1699f)
				{
					return func_112(64);
				}
				if (bParam1 == 5.402792E-27f)
				{
					return func_112(131072);
				}
			}
			return func_112(32);
		case -1823706425:
			if (bParam1 == -0.06342195f)
			{
				return func_112(262144);
			}
			else
			{
				return func_112(128);
			}
			break;
		case -854348463:
			return func_112(8192);
		default:
			if (func_17(bParam1, 0))
			{
				if (func_19(bParam1, 4.644778E+30f))
				{
					return func_112(4096);
				}
				else if (bParam1 == -6.721167E-35f || bParam1 == -7.729678E-14f)
				{
					return func_112(2048);
				}
				else if (bParam1 == -2.692268E-16f)
				{
					return func_112(1024);
				}
				else if (func_19(bParam1, 888.6404f))
				{
					return func_112(2);
				}
			}
			return func_112(1);
	}
	return func_112(1);
}

void func_666(int iParam0, var uParam1, bool bParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, bool bParam19, bool bParam20)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -5.45926E-19f;
	if (func_445(&uParam1, &iVar0, &iVar1, bParam20))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_239(&Var3, iVar2, iVar0, iVar1))
			{
				if (Var3.f_4 == -0.06342195f)
				{
					if (Global_1110244.f_21.f_127)
					{
					}
					else
					{
						func_442(iParam0, Var3.f_4, bParam19);
					}
					iVar2++;
					func_253(iVar0);
				}
			}
		}
	}
}

int func_667(bool bParam0, bool bParam1, bool bParam2)
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

int func_668()
{
	return Global_1893611.f_2;
}

bool func_669(struct<2> Param0)
{
	return func_854(Param0, 1, 4);
}

int func_670(bool bParam0)
{
	if (func_643(bParam0, 4))
	{
		return 0;
	}
	return 1;
}

int func_671(bool bParam0, int iParam1)
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

bool func_672(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_855(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

bool func_673(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_856(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

struct<4> func_674(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_857(iParam0) };
	return func_858(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_675(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_281(bParam0, 2))
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

bool func_676(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	struct<5> Var0;
	int iVar25;

	*iParam3 = 0;
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SELL_PRICE(bParam0, bParam1, &Var0))
	{
		return false;
	}
	if (!bParam5)
	{
	}
	*iParam3 = Var0.f_3;
	if (*uParam2 < Var0.f_3)
	{
		return false;
	}
	iVar25 = 0;
	while (iVar25 < Var0.f_3)
	{
		if (!bParam5)
		{
		}
		*(uParam2[iVar25 /*2*/]) = { Var0.f_4[iVar25 /*2*/] };
		iVar25++;
	}
	if (bParam4)
	{
		func_859(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_677(int iParam0, bool bParam1, float* fParam2)
{
	struct<4> Var0;
	var uVar5;
	int iVar6;

	*fParam2 = 1f;
	if (!func_244(iParam0))
	{
		return false;
	}
	if (!func_17(bParam1, 0))
	{
		return false;
	}
	if (!func_432(22, &Var0))
	{
		return false;
	}
	Var0.f_2 = -125.3899f;
	Var0.f_3 = bParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		iVar6 = func_860(iParam0);
		func_861(iVar6, &uVar5);
		Var0.f_2 = uVar5;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam2, &Var0);
		if (*fParam2 < 1f)
		{
			*fParam2 = 1f;
		}
		return true;
	}
	return false;
}

int func_678(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_862(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_466(bParam0) || func_19(bParam0, 2.791187f))
	{
		return func_863(func_499(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_864(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_679(int iParam0)
{
	if (func_37() != -1)
	{
		if (Global_1072759.f_12)
		{
			if (iParam0 == 3)
			{
				return -57.16793f;
			}
		}
	}
	return func_865(iParam0);
}

int func_680(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return 4.507147E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_PERFECT"):
			return -5.287657E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_ALLIGATOR_POOR"):
			return -7.408218E-21f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_HIGH_QUALITY"):
			return -2.656932E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_PERFECT"):
			return -1.12411E+15f;
		case joaat("PROVISION_SKINNED_CARCASS_ARMADILLO_POOR"):
			return 9.255461E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_HIGH_QUALITY"):
			return -1.664115E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_PERFECT"):
			return 1.354865E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_BADGER_POOR"):
			return -4.454633E+14f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_HIGH_QUALITY"):
			return -5.399312E-15f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_PERFECT"):
			return 9.571316E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_BEAVER_POOR"):
			return 3.856313E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
			return -3.665561E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_PERFECT"):
			return 1.753998E-11f;
		case joaat("PROVISION_SKINNED_CARCASS_BIGHORN_SHEEP_POOR"):
			return 9.09915E+36f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_HIGH_QUALITY"):
			return -6.57691E-09f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_PERFECT"):
			return 0.002537775f;
		case joaat("PROVISION_SKINNED_CARCASS_BUCK_POOR"):
			return -1.162778E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_HIGH_QUALITY"):
			return -1.40288E-34f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_PERFECT"):
			return -8.076066E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_CALICONDOR_POOR"):
			return -4804.242f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_HIGH_QUALITY"):
			return -4.504377E+11f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_PERFECT"):
			return -1.111597E-38f;
		case joaat("PROVISION_SKINNED_CARCASS_CHICKEN_POOR"):
			return 2.926634E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_HIGH_QUALITY"):
			return 4.657968E-36f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_PERFECT"):
			return -5.259399E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_CORMORANT_POOR"):
			return 0.002241108f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_HIGH_QUALITY"):
			return 1.144588E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_PERFECT"):
			return 1.43703E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_COUGAR_POOR"):
			return -1.10115E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_HIGH_QUALITY"):
			return -2.710655E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_PERFECT"):
			return -1.13245E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_COYOTE_POOR"):
			return 2.639943E-33f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_HIGH_QUALITY"):
			return 2.265425E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_PERFECT"):
			return 6.327091E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_CRANE_POOR"):
			return -5.974267E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_HIGH_QUALITY"):
			return 5.437065E-22f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_PERFECT"):
			return -7.724074E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_DEER_POOR"):
			return 7.484564E-37f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_HIGH_QUALITY"):
			return 0.03063576f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_PERFECT"):
			return 0.005269445f;
		case joaat("PROVISION_SKINNED_CARCASS_DUCK_POOR"):
			return 168349.6f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1.34869E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_PERFECT"):
			return -6.278838E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_EAGLE_POOR"):
			return -2.375997E-11f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_HIGH_QUALITY"):
			return 0.01188324f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_PERFECT"):
			return 1.429467E-15f;
		case joaat("PROVISION_SKINNED_CARCASS_EGRET_POOR"):
			return 1.023408E+34f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_HIGH_QUALITY"):
			return -0.0001932701f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_PERFECT"):
			return 1.976518E-07f;
		case joaat("PROVISION_SKINNED_CARCASS_FOX_POOR"):
			return -2.709008E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_HIGH_QUALITY"):
			return 3.827353E+18f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_PERFECT"):
			return -1.02038E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_GILA_POOR"):
			return -6.951011E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_HIGH_QUALITY"):
			return -1.488428E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_PERFECT"):
			return -3.318031E-10f;
		case joaat("PROVISION_SKINNED_CARCASS_GOAT_POOR"):
			return -5.10536E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_HIGH_QUALITY"):
			return 7.113445E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_PERFECT"):
			return -7.81005E-18f;
		case joaat("PROVISION_SKINNED_CARCASS_GOOSE_POOR"):
			return 7.309318E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_HIGH_QUALITY"):
			return -1.122952E-14f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_PERFECT"):
			return -1.414123E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_HAWK_POOR"):
			return NaNf;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_HIGH_QUALITY"):
			return 3.844165E-13f;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_PERFECT"):
			return 2.091685E+37f;
		case joaat("PROVISION_SKINNED_CARCASS_HERON_POOR"):
			return -2129067f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_HIGH_QUALITY"):
			return 33127.39f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_PERFECT"):
			return 4.938854E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_IGUANA_POOR"):
			return -76.33204f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_HIGH_QUALITY"):
			return 0.001733282f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_PERFECT"):
			return -6.200817f;
		case joaat("PROVISION_SKINNED_CARCASS_LOON_POOR"):
			return 4.24952E-19f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_HIGH_QUALITY"):
			return -7.230145E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_PERFECT"):
			return 4.617307E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_MUSKRAT_POOR"):
			return -4.308681E-09f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_HIGH_QUALITY"):
			return -1.805402E-25f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_PERFECT"):
			return -193275.9f;
		case joaat("PROVISION_SKINNED_CARCASS_OPOSSUM_POOR"):
			return 2.521826E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_HIGH_QUALITY"):
			return -1.992939E+29f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_PERFECT"):
			return -7.858611E-22f;
		case joaat("PROVISION_SKINNED_CARCASS_OWL_POOR"):
			return 1.271382E+08f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_HIGH_QUALITY"):
			return 2.827991E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_PERFECT"):
			return 2.650656E+23f;
		case joaat("PROVISION_SKINNED_CARCASS_PANTHER_POOR"):
			return 1.730283E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_HIGH_QUALITY"):
			return joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY");
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_PERFECT"):
			return -1.542202E-10f;
		case joaat("PROVISION_SKINNED_CARCASS_PARROT_POOR"):
			return 4.307955E+12f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_HIGH_QUALITY"):
			return -1.345681E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_PERFECT"):
			return 2.6353E+29f;
		case joaat("PROVISION_SKINNED_CARCASS_PELICAN_POOR"):
			return 3.63199E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -6579019f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_PERFECT"):
			return -4.214708E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_PHEASANT_POOR"):
			return -7.834871E-06f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_HIGH_QUALITY"):
			return 4.831911E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_PERFECT"):
			return 9.60254E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_PIG_POOR"):
			return 2.039138E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_HIGH_QUALITY"):
			return 8.735567E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_PERFECT"):
			return 5.559815E-08f;
		case joaat("PROVISION_SKINNED_CARCASS_PRARECHICK_POOR"):
			return 3.016167E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_HIGH_QUALITY"):
			return -3.764532E-31f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_PERFECT"):
			return 1.158207E+28f;
		case joaat("PROVISION_SKINNED_CARCASS_PRONGHORN_POOR"):
			return -4.540201E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_HIGH_QUALITY"):
			return 58741.79f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_PERFECT"):
			return -7.466561E-29f;
		case joaat("PROVISION_SKINNED_CARCASS_RABBIT_POOR"):
			return -5.408961E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_HIGH_QUALITY"):
			return -479.9893f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_PERFECT"):
			return 2.444555E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_RACOON_POOR"):
			return 3.89484E+21f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_HIGH_QUALITY"):
			return -5.440139E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_PERFECT"):
			return -0.0001666287f;
		case joaat("PROVISION_SKINNED_CARCASS_RAM_POOR"):
			return 6.112518E+32f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_HIGH_QUALITY"):
			return -1.78671E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_PERFECT"):
			return -248.2232f;
		case joaat("PROVISION_SKINNED_CARCASS_RAVEN_POOR"):
			return -9.601242E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
			return -8.448254E+07f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_PERFECT"):
			return -1.824057E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_REDFTBOOBY_POOR"):
			return -2.392047E-27f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_HIGH_QUALITY"):
			return 0.0009291961f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_PERFECT"):
			return -360.4587f;
		case joaat("PROVISION_SKINNED_CARCASS_ROOSTER_POOR"):
			return -2.990673E+32f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
			return 5.512931E-24f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_PERFECT"):
			return 7.93403E+30f;
		case joaat("PROVISION_SKINNED_CARCASS_ROSESPOONBIL_POOR"):
			return -1.199407f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 2.107414E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_PERFECT"):
			return -3651680f;
		case joaat("PROVISION_SKINNED_CARCASS_SEAGULL_POOR"):
			return 1.904495E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_HIGH_QUALITY"):
			return 1.304773E+38f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_PERFECT"):
			return 1.698759E+15f;
		case joaat("PROVISION_SKINNED_CARCASS_SHEEP_POOR"):
			return -4.469786E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_HIGH_QUALITY"):
			return -3.810575E-34f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_PERFECT"):
			return 2.919128E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SKUNK_POOR"):
			return -4.902144E-31f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
			return -1.229308E+24f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_PERFECT"):
			return -2.030334f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BLRAT_POOR"):
			return 5.22646E+35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return 4.386882E-18f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_PERFECT"):
			return -9.386758E+17f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_BOA_POOR"):
			return -1.008415E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
			return -5.184155E+33f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_PERFECT"):
			return -2.163643E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_COPPER_POOR"):
			return 3.347607E+13f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
			return 4.220855E-23f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return 4.539724E-12f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_FERDLNCE_POOR"):
			return 2.388784E-26f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_HIGH_QUALITY"):
			return -1022280f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_PERFECT"):
			return 1.902462E+09f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_POOR"):
			return -5.70721E+25f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
			return 2.646211E-35f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_PERFECT"):
			return 2.812217E-33f;
		case joaat("PROVISION_SKINNED_CARCASS_SNAKE_WATER_POOR"):
			return -177744.7f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_HIGH_QUALITY"):
			return -1.120819E-19f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_PERFECT"):
			return -8.922604E-28f;
		case joaat("PROVISION_SKINNED_CARCASS_TURKEY_POOR"):
			return 1.025691E-16f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
			return -9.952872E-14f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_PERFECT"):
			return -318808.2f;
		case joaat("PROVISION_SKINNED_CARCASS_TURTLE_SNAP_POOR"):
			return -1.53492E+19f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_HIGH_QUALITY"):
			return -5.850964E+28f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_PERFECT"):
			return 3.09111E-21f;
		case joaat("PROVISION_SKINNED_CARCASS_VULTURE_POOR"):
			return -4.346561E+21f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_HIGH_QUALITY"):
			return 6.200319E-38f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_PERFECT"):
			return 5.081949E+20f;
		case joaat("PROVISION_SKINNED_CARCASS_WOLF_POOR"):
			return -3.607455E+27f;
		case -2115566177:
			return -1.451767E+09f;
		case -1886936864:
			return 6.957106E+10f;
		case 777641606:
			return -5.759186E-37f;
		case 1815502722:
			return -3.331152E-35f;
		case 1518910503:
			return 7.92923E+24f;
		case 1020297399:
			return 3.89216E+16f;
		case -438328437:
			return 2.366936E+15f;
		case -132069363:
			return -1.198895E+07f;
		case 1718756614:
			return -6.554273E-08f;
		case 616254818:
			return -2.049118E+36f;
		case 1586020612:
			return -2.480808E-11f;
		case 1892902297:
			return 6.776605E+13f;
		case 1920759986:
			return 1.456349E+17f;
		case 1683741809:
			return 8.278301E+27f;
		case 403588059:
			return 5.031345E+33f;
		case -352805801:
			return -4.110167E+30f;
		case 1491466288:
			return 2.55587E-19f;
		case -1066678466:
			return 3.540439E+29f;
		case -375348364:
			return -4.120904E-35f;
		case -101301217:
			return 1.172267E+34f;
		case 213936563:
			return -1.107983E-20f;
		case 897866285:
			return 9.627059E+22f;
		case 1135507073:
			return -3.041173E-27f;
		case -1671125008:
			return -2.373688E-13f;
		default:
			break;
	}
	return 0;
}

float func_681(int iParam0)
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
		return 0;
	}
	iVar0 = iParam0;
	iVar1 = PED::_GET_PED_DAMAGE_CLEANLINESS(iVar0);
	iVar2 = func_866(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (TASK::_0x7CB99FADDE73CD1B(iVar0))
	{
		return 0;
	}
	iVar3 = iVar1;
	iVar4 = iVar2;
	if (iVar4 < iVar3)
	{
		iVar1 = iVar4;
	}
	if (!PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&iVar5, iVar0, iVar1))
	{
		return 0;
	}
	if (iVar5 != 0)
	{
		if (PED::_IS_META_PED_USING_COMPONENT(iVar0, 2.205541E-37f) || ENTITY::_IS_ENTITY_FULLY_LOOTED(iVar0))
		{
			iVar6 = func_867(iVar5);
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

int func_682(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_389(PLAYER::PLAYER_ID());
	}
	return func_868(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

bool func_683(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_684(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_685(bool bParam0)
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

int func_686(var uParam0, int iParam1)
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

int func_687(bool bParam0)
{
	int iVar0;

	iVar0 = func_145(bParam0);
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

bool func_688(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1940239.f_41.f_1)
	{
		if (func_241(bParam0, Global_1940239.f_41.f_2[iVar0 /*2*/]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_689(bool bParam0)
{
	if (func_19(bParam0, -5.092244E+08f))
	{
		return func_19(bParam0, 2.00625E+31f);
	}
	return false;
}

bool func_690(bool bParam0)
{
	if ((((((((((((((((func_869(bParam0, 6.643934E-37f) || func_869(bParam0, NaNf)) || func_869(bParam0, 2.405382E+20f)) || func_869(bParam0, 5.266092E-27f)) || func_869(bParam0, -5.272253E-14f)) || func_869(bParam0, -3.072587E+16f)) || func_869(bParam0, -3.933513E-29f)) || func_869(bParam0, -2.153603E-21f)) || func_869(bParam0, 2.78471E+33f)) || func_869(bParam0, 1.096557E-35f)) || func_869(bParam0, 6.60208E-06f)) || func_869(bParam0, -7.329766E+14f)) || func_869(bParam0, -5.276673E+08f)) || func_869(bParam0, joaat("TAROT_CARDS_WANDS"))) || func_869(bParam0, 3.452593E-11f)) || func_869(bParam0, -1.05944E+30f)) || func_869(bParam0, -2.232068E+37f))
	{
		return true;
	}
	return false;
}

int func_691(bool bParam0, int iParam1)
{
	switch (Global_1940239.f_39)
	{
		case 1:
			if (iParam1 == -2.509875E-36f)
			{
				if ((func_19(bParam0, -1.051639E+07f) || func_19(bParam0, -5.092244E+08f)) || func_19(bParam0, -8.87647E+33f))
				{
					return 1;
				}
			}
			break;
		case 2:
			if (iParam1 == -2.509875E-36f)
			{
				if ((((((((func_19(bParam0, -1.051639E+07f) || func_19(bParam0, -5.092244E+08f)) || func_19(bParam0, -8.87647E+33f)) || func_19(bParam0, 4.619806E-19f)) || func_19(bParam0, -2.635625E-06f)) || func_19(bParam0, 1.337157E+38f)) || func_19(bParam0, -8.704819E-29f)) || func_19(bParam0, 1.374959f)) || func_19(bParam0, 2.519492E+32f))
				{
					return 1;
				}
			}
			break;
		default:
			break;
	}
	return 0;
}

bool func_692(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

void func_693(int iParam0, int iParam1)
{
	Global_1940239.f_41.f_2[iParam0 /*2*/] = iParam1;
}

bool func_694(int iParam0)
{
	return Global_1940239.f_41.f_2[iParam0 /*2*/].f_1;
}

void func_695(int iParam0)
{
	Global_1940239.f_41.f_2[iParam0 /*2*/] = 0;
	Global_1940239.f_41.f_2[iParam0 /*2*/].f_1 = 0;
}

bool func_696(int iParam0, var uParam1, int iParam2, int* iParam3)
{
	*iParam2 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(iParam0, uParam1, iParam3);
	if (*iParam2 >= 0)
	{
		return true;
	}
	return false;
}

bool func_697(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_37() == 0)
	{
		return func_870(iParam0);
	}
	return iParam0 <= func_871();
}

bool func_698(int iParam0)
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

int func_699(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_19(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_700(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_369(0) };
	Var0.f_4 = func_872(iParam1);
	Var5 = { func_168(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_199(0), &Var5, false);
	return iVar9;
}

void func_701(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;

	Var0.f_9 = -5.45926E-19f;
	Var0.f_4 = uParam0;
	Var0.f_11 = iParam1;
	if (!bParam2)
	{
		func_310(Var0, iParam3);
	}
	else
	{
		func_243(Var0);
	}
}

bool func_702(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
				Jump @230; //curOff = 56
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
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

void func_703(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;

	iVar0 = -1;
	Var3.f_9 = -5.45926E-19f;
	if (func_445(uParam0, &iVar0, &iVar1, bParam1))
	{
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_239(&Var3, iVar2, iVar0, iVar1))
			{
				if (!func_299(&Var3, 0))
				{
				}
				else if (bParam2)
				{
					func_316(Var3.f_4, bParam3, 0);
				}
				else
				{
					func_300(Var3.f_4);
				}
			}
			iVar2++;
		}
	}
	func_253(iVar0);
}

int func_704(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940239.f_11641))
	{
		return 0;
	}
	Var0 = Global_1940239.f_11641;
	Var0.f_2 = 1;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_705(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940239.f_11641))
	{
		return 0;
	}
	Var0 = Global_1940239.f_11641;
	Var0.f_2 = 0;
	Var0.f_3 = iParam0;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0);
	return uVar5;
}

int func_706(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940239.f_11641))
	{
		return 0;
	}
	Var0 = Global_1940239.f_11641;
	Var0.f_2 = 4;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

int func_707(int iParam0)
{
	struct<4> Var0;
	var uVar5;

	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1940239.f_11641))
	{
		return 0;
	}
	Var0 = Global_1940239.f_11641;
	Var0.f_2 = 5;
	Var0.f_3 = iParam0;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&uVar5, &Var0);
	return MISC::GET_HASH_KEY(&uVar5);
}

bool func_708(int iParam0)
{
	if (func_873(iParam0))
	{
		return func_54(16);
	}
	else if (func_874(iParam0))
	{
		return func_875();
	}
	else if (func_876(iParam0))
	{
		return func_54(2);
	}
	else if (iParam0 == 9.522126E+26f)
	{
		return func_54(2097152);
	}
	return true;
}

bool func_709(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_877(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_410() };
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

bool func_710(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_878(iParam1->f_8, iParam0, iVar0, 2048) || func_878(iParam1->f_8, iParam0, iVar0, 32768)) || func_878(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_878(iParam1->f_8, iParam0, iVar0, 4) || func_878(iParam1->f_8, iParam0, iVar0, 256)) || func_878(iParam1->f_8, iParam0, iVar0, 65536)) || func_878(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_878(iParam1->f_8, iParam0, iVar0, 1) || func_878(iParam1->f_8, iParam0, iVar0, 8)) || func_878(iParam1->f_8, iParam0, iVar0, 65536)) || func_878(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_878(iParam1->f_8, iParam0, iVar0, 1) || func_878(iParam1->f_8, iParam0, iVar0, 16)) || func_878(iParam1->f_8, iParam0, iVar0, 2)) || func_878(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_878(iParam1->f_8, iParam0, iVar0, 8) || func_878(iParam1->f_8, iParam0, iVar0, 4096)) || func_878(iParam1->f_8, iParam0, iVar0, 256)) || func_878(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_711(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_712(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_879(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_879(iParam1, 2, 0, 0);
	return -1;
}

int func_713(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_879(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

float func_714()
{
	return 0.08971565f;
}

int func_715(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_880(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_716(int iParam0)
{
	int iVar0;
	struct<2> Var1;

	iVar0 = -1;
	if (func_881(&Var1, iParam0))
	{
		iVar0 = ((func_882() - DATAFILE::_0xE13634BB6BAF0734(Var1, Var1.f_1)) - 1);
	}
	return iVar0;
}

int func_717(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1245159[iParam0 /*5*/].f_1;
}

int func_718(int iParam0)
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

var func_719(int iParam0)
{
	int iVar0;

	iVar0 = func_884(0, (func_883() - 1), &iParam0);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_885(iVar0);
}

int func_720(int iParam0)
{
	return Global_1110244.f_3667[iParam0 /*7*/];
}

struct<8> func_721(int iParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<8> Var5;

	if (!func_886(iParam0))
	{
		return Var5;
	}
	if (!func_887(&Var0))
	{
		return Var5;
	}
	if (!func_888(Var0, &(Var0.f_1), 13, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_888(Var0, &(Var0.f_1), 14, iParam0, 0, 1))
	{
		return Var5;
	}
	if (!func_888(Var0, &(Var0.f_1), 19, 0, 0, 1))
	{
		return Var5;
	}
	if (!func_888(Var0, &(Var0.f_1), 21, iParam1, 0, bParam2))
	{
		if (bParam2)
		{
		}
		return Var5;
	}
	return func_889(Var0);
}

bool func_722(int iParam0)
{
	return func_89(Global_1220811.f_1196, iParam0);
}

bool func_723()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

bool func_724(int iParam0, int iParam1)
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

struct<2> func_725()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_390(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_390(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_726(int iParam0)
{
	if (func_890(iParam0) == -1)
	{
		return false;
	}
	return true;
}

bool func_727(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

int func_728(int iParam0)
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

void func_729(int iParam0, int iParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	Global_17418[iParam0] = (Global_17418[iParam0] || iParam1);
}

void func_730(int iParam0, bool bParam1)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_891(iParam0))
	{
		return;
	}
	func_729(iParam0, 2);
	if (bParam1)
	{
		if (!func_220(0, 0, 1))
		{
			func_892(1, 0.02012728f);
		}
	}
}

bool func_731(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return func_486(iParam0, 1, 1);
}

void func_732(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_485(iParam0))
	{
		return;
	}
	if (func_731(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_483(iParam0);
	}
	if (!bParam1)
	{
		func_893(iParam0);
	}
	func_729(iParam0, 1);
	func_730(iParam0, 1);
	if (bParam2)
	{
		if (!func_220(0, 0, 1))
		{
			func_733(1, 6);
		}
	}
}

void func_733(bool bParam0, int iParam1)
{
	if (MISC::IS_MAG_DEMO_1_ACTIVE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_894(&Global_0, 8);
	}
	if (!func_895() || func_37() != -1)
	{
		return;
	}
	func_894(&Global_0, 1);
}

float func_734(int iParam0, int iParam1)
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

void func_735(int iParam0)
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
	iVar1 = func_896(2);
	func_897(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_736(int iParam0, bool bParam1)
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
	iVar0 = func_898(2);
	func_899(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_737(int iParam0)
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
	iVar1 = func_900(2);
	func_901(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

float func_738(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 1120403456) * 1120403456);
	}
	return ((fParam0 / 1090519040) * 1120403456);
}

void func_739(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_902(iParam0, fParam1, 1);
	}
	func_904(iParam0, (func_903(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

float func_740(float fParam0, int iParam1)
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

int func_741(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_905(iParam0, fParam1, bParam2, bParam3);
}

void func_742(float fParam0, bool bParam1)
{
	if (fParam0 > 1092616192)
	{
		fParam0 = 1092616192; /* Float: 10f */
	}
	if (func_906())
	{
		func_907(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41++;
		if (5 == Global_17418.f_55.f_2459.f_41)
		{
			func_164(109, 0);
		}
	}
}

bool func_743()
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

int func_744(int iParam0)
{
	int iVar0;

	iVar0 = func_361(func_908(iParam0), 1);
	if (iVar0 != 39)
	{
		return Global_1953279.f_1676.f_1[iVar0 /*3*/].f_1;
	}
	return 0;
}

bool func_745(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	iVar1 = func_361(func_908(iParam0), 1);
	if (iVar1 >= 39)
	{
		return false;
	}
	if (Global_1953279.f_1676.f_1[iVar1 /*3*/] != 0 && Global_1953279.f_1676.f_1[iVar1 /*3*/] != Global_1953279.f_83[iVar1 /*12*/])
	{
		bVar0 = Global_1953279.f_1676.f_1[iVar1 /*3*/];
		if (func_145(bVar0) == iParam0 || (iParam0 == 5.002459E-36f && func_19(bVar0, 3.611922E-33f)))
		{
			*bParam1 = bVar0;
			return true;
		}
	}
	*bParam1 = 0;
	return false;
}

bool func_746(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_361(bParam0, 1) /*3*/];
}

int func_747()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_145(bVar1) == -947.1324f)
		{
			if (func_909() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_748(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		iParam1 = func_910(0);
	}
	if (func_145(bParam0) == -947.1324f && func_750(bParam0) != -1)
	{
		return true;
	}
	if (iParam1 == 3.272964E+34f)
	{
		return func_19(bParam0, -3.437357E+28f);
	}
	else if (iParam1 == 4.387347E-38f)
	{
		return func_19(bParam0, -1.146799E+34f);
	}
	return false;
}

bool func_749(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_167(bParam0, bParam2, 0) };
	Var5 = { func_168(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_368(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return false;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_HIDDEN(func_199(bParam2), &Var5, bParam1);
	return true;
}

int func_750(bool bParam0)
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

bool func_751(int iParam0, int iParam1)
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

struct<8> func_752(int iParam0)
{
	char cVar0[64];

	if (func_751(4, iParam0))
	{
		return Global_17418.f_2645[iParam0 /*8*/];
	}
	StringCopy(&cVar0, HUD::GET_STRING_FROM_HASH_KEY(func_911(iParam0)), 64);
	return cVar0;
}

void func_753()
{
	Global_1953279.f_1046 = 0;
}

bool func_754(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (func_19(bParam0, 3.611922E-33f) || func_145(bParam0) == 5.002459E-36f)
	{
		return true;
	}
	return false;
}

void func_755(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	struct<2> Var1;
	var uVar120;
	int iVar121;
	bool bVar122;

	bVar0 = false;
	switch (func_145(bParam0))
	{
		case -2061583405:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_28), bParam4);
			break;
		case 81053684:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			break;
		case -999503751:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_27), bParam4);
			if (func_19(bParam0, -7.339854E+32f))
			{
				Var1.f_1 = 39;
				if (func_913(&Var1, bParam0, &uVar120, 0, 1, 0, 0, 0, 1, 8))
				{
					iVar121 = 0;
					while (iVar121 < 39)
					{
						bVar122 = Var1.f_1[iVar121 /*3*/];
						if (func_17(bVar122, 0))
						{
							func_755(bVar122, 0, 0, 0, 0);
						}
						iVar121++;
					}
				}
			}
			break;
		case -525676072:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_29), bParam4);
			break;
		case -1719060085:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_31), bParam4);
			break;
		case 119907797:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_32), bParam4);
			break;
		case 1388798186:
			bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_33.f_7), bParam4);
			break;
		default:
			if (func_19(bParam0, 3.611922E-33f))
			{
				bVar0 = func_912(bParam0, &(Global_1953279.f_3352.f_30), bParam4);
			}
			break;
	}
	if (bParam3 && bVar0)
	{
		func_582(0, bParam0);
	}
	if (bParam2)
	{
		func_581();
	}
	if (bParam1)
	{
		func_583(0, 0);
	}
}

int func_756(bool bParam0)
{
	var uVar0;
	var uVar1;

	func_914(&uVar1, 9044914, bParam0, 0, 0, 0);
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

bool func_757(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_145(Global_1953279.f_1676.f_1[iParam1 /*3*/]);
	if (func_145(bParam0) == iVar0)
	{
		return true;
	}
	else if (bParam0 == -1700.123f)
	{
		return func_19(Global_1953279.f_1676.f_1[iParam1 /*3*/], 3.611922E-33f);
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

void func_758(var uParam0, int iParam1)
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
			if ((func_915(&(uParam0->f_2[iVar0 /*2*/]), 2) || uParam0->f_2[iVar0 /*2*/] == iParam1) || uParam0->f_2[iVar0 /*2*/] == 39)
			{
				uParam0->f_2[iVar0 /*2*/] = { Var2 };
			}
			else
			{
				if (func_915(&(uParam0->f_2[iVar0 /*2*/]), 1))
				{
					func_916(&(uParam0->f_2[iVar0 /*2*/]), 2, 6);
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

void func_759(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (*uParam0 + 1 >= 16)
	{
		return;
	}
	if (!func_917(uParam0, 1))
	{
		func_918(uParam0, 1);
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

void func_760(var uParam0, var uParam1)
{
	struct<4> Var0;
	bool bVar7;
	int iVar8;

	Var0 = func_919(0);
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
			iVar8 = func_361(bVar7, 1);
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
				func_592(iVar8, 0);
			}
		}
	}
}

void func_761(var uParam0, bool bParam1, int iParam2, int iParam3)
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
	iVar1 = func_145(uParam0->f_1[iVar0 /*3*/]);
	if (iVar1 == 1.246195E-34f)
	{
		if (func_19(bParam1, 1.816948E-22f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	else if (iVar1 == 4.454951E+36f)
	{
		if (func_19(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	else if (iVar1 == -9.847085E+19f)
	{
		if (func_19(bParam1, -3.086476E+35f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 11;
	if (func_19(uParam0->f_1[iVar0 /*3*/], -8.86916E-14f) && func_19(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam1, -3.086476E+35f)) && func_19(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_762(var uParam0, bool bParam1, int iParam2)
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

void func_763(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	func_592(1, iParam3);
	if (bParam2)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (!func_364(bVar1, 0) && func_19(bVar1, -2.411198E+32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 10;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_145(bVar1) == 4.454951E+36f) && func_19(bParam1, -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_764(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_145(bParam2))
	{
		case -525676072:
			func_920(uParam0, bParam1, iParam3);
			break;
		case 2086043523:
			func_921(uParam0, bParam1, iParam3);
			break;
	}
}

void func_765(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_145(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_592(iVar0, iParam3);
	}
	func_592(1, iParam3);
	if (bParam1)
	{
		return;
	}
	if (func_754(bParam2))
	{
		func_922(uParam0, bParam1, iParam3);
	}
	iVar0 = 11;
	if (func_19(bParam2, -2.411198E+32f) && !func_364(uParam0->f_1[iVar0 /*3*/], 0))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	if (func_19(bParam2, -1.186825E-08f))
	{
		return;
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		func_592(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_592(iVar0, iParam3);
		}
	}
	else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
		func_592(iVar0, iParam3);
		iVar0 = 20;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_592(iVar0, iParam3);
		}
	}
}

void func_766(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;

	iVar0 = 12;
	iVar1 = 0;
	if (func_584() == 4.387347E-38f)
	{
		iVar1 = 1;
	}
	if (3.919656E+35f == PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(uParam0->f_1[iVar0 /*3*/], iVar1, true))
	{
		if ((bParam1 || func_19(bParam2, 9.741843E+28f)) || func_145(bParam2) == 2.251657E+29f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if ((!func_364(bVar2, 0) && !func_19(bVar2, -1.186825E-08f)) && func_19(bParam2, -1.06471E-16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 17;
	if (!func_364(uParam0->f_1[iVar0 /*3*/], 0) && func_19(bParam2, 2.713478E+14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 29;
	if (!func_364(uParam0->f_1[iVar0 /*3*/], 0) && func_19(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 34;
	bVar2 = uParam0->f_1[iVar0 /*3*/];
	if (func_145(bVar2) == 8.292232E+24f && func_145(bParam2) == 2.251657E+29f)
	{
		uParam0->f_1[iVar0 /*3*/] = func_756(bParam2);
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	else if (func_923(bVar2, bParam1, iVar1))
	{
		bVar2 = uParam0->f_1[18 /*3*/];
		iVar3 = 0;
		if (func_145(bVar2) == 3.381578E-06f && func_924(32))
		{
			iVar3 |= 1;
		}
		if (func_19(bParam2, 4.422284E-20f))
		{
			iVar3 |= 2;
		}
		bVar2 = func_925(Global_1953279.f_83[iVar0 /*12*/].f_9, iVar3);
		if (bVar2 != 0)
		{
			uParam0->f_1[iVar0 /*3*/] = bVar2;
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
			func_774(uParam0, 0, bVar2, iParam3);
		}
	}
	iVar0 = 21;
	if (!func_364(uParam0->f_1[iVar0 /*3*/], 0) && func_19(bParam2, 7.182742E-32f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar4 = 23;
	if (!func_364(uParam0->f_1[iVar0 /*3*/], 0) || (uParam0->f_1[iVar4 /*3*/] != Global_1953279.f_83[iVar4 /*12*/] && func_19(uParam0->f_1[iVar4 /*3*/], -2.881491E-21f)))
	{
		func_926(uParam0, iParam3);
	}
}

void func_767(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_768(var uParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_145(bParam2))
	{
		case 698653232:
			func_927(uParam0, bParam1, bParam2, iParam4);
			break;
		case 912453393:
			func_928(uParam0, bParam1, iParam3, iParam4);
			break;
	}
}

void func_769(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_145(bParam2))
	{
		case -1080198344:
		case 1868067663:
			func_929(uParam0, bParam1, bParam2, iParam3);
			break;
		case 294388917:
			func_930(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_770(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (func_145(uParam0->f_1[iVar0 /*3*/]) == 3.381578E-06f)
	{
		func_592(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 23;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, 9.484546E+16f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_926(uParam0, iParam3);
	}
}

void func_771(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (!bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			if (func_19(uParam0->f_1[iVar0 /*3*/], 9.484546E+16f))
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			}
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(bParam2, -2.881491E-21f))
		{
			func_926(uParam0, iParam3);
		}
		else
		{
			func_592(iVar0, iParam3 | 16);
		}
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/].f_1 != -6.7231E+19f)
	{
		return;
	}
	uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
	func_592(iVar0, iParam3);
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_592(iVar0, iParam3);
	}
	iVar0 = 28;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_592(iVar0, iParam3);
	}
}

void func_772(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	if (func_931(2.199934E-35f) && func_19(bParam2, -4.878666E-06f))
	{
		iVar0 = 27;
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 32;
	if (!func_364(uParam0->f_1[iVar0 /*3*/], 0) && func_19(bParam2, 0.01839931f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_773(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(uParam0->f_1[iVar0 /*3*/], 4.528383E-26f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

void func_774(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_145(bParam2))
	{
		case 1759215194:
			func_932(uParam0, iParam3);
			break;
		case 1223979091:
		case 2047428024:
			func_933(uParam0, bParam1, bParam2, iParam3);
			break;
		case 684307653:
			func_934(uParam0, bParam1, bParam2, iParam3);
			break;
		case 502936876:
			func_935(uParam0, bParam1, iParam3);
			break;
		case -1740828670:
			func_936(uParam0, bParam1, bParam2, iParam3);
			break;
		case 344283346:
			func_937(uParam0, bParam1, iParam3);
			break;
	}
}

void func_775(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	switch (func_145(bParam2))
	{
		case 1769055947:
			func_938(uParam0, bParam1, bParam2, iParam3);
			break;
		case -923693316:
			func_939(uParam0, bParam1, bParam2, iParam3);
			break;
	}
}

void func_776(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		func_940(uParam0, iParam3, 0, 1);
		return;
	}
	iVar0 = 35;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if ((func_19(bParam2, 9.000944E-10f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_145(bVar1) == -494711.9f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	if ((func_19(bParam2, -4.282854E-21f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/]) && func_145(bVar1) == 1.825867E+25f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 37;
	if (func_19(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

int func_777(bool bParam0, bool bParam1, int iParam2)
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

bool func_778(bool bParam0, bool bParam1, int iParam2)
{
	*iParam2 = 1808.893f;
	return true;
}

int func_779(bool bParam0)
{
	int iVar0;

	iVar0 = func_750(bParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	return -1;
}

bool func_780(int iParam0)
{
	return (((((((((iParam0 == -6.84366E-28f || iParam0 == -1.11148E-12f) || iParam0 == 1.226722E-30f) || iParam0 == -5.930502E-22f) || iParam0 == 6.813211E-30f) || iParam0 == 272038.9f) || iParam0 == 8.083898E+09f) || iParam0 == 3.588834E-09f) || iParam0 == -1.005061E+16f) || iParam0 == 61.78744f);
}

void func_781(int iParam0, bool bParam1, bool bParam2, int iParam3)
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
	func_941(&(Global_1953279.f_1676.f_1[iParam0 /*3*/]), iParam0, iParam3);
}

bool func_782(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_167(bParam0, bParam2, 0) };
	Var5 = { func_168(bParam0, Var0, Var0.f_4, bParam2) };
	return func_169(Var5, iParam1, bParam2);
}

void func_783(int iParam0, bool bParam1, int iParam2)
{
	func_942(&(Global_1953279.f_1557), iParam0);
	func_943(2, iParam0, 6);
	if (bParam1)
	{
		func_583(0, 1);
	}
}

int func_784(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_855(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_785(int iParam0)
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
	if (func_393(iParam0) == -4.537018E+10f)
	{
		return 37;
	}
	return 23;
}

bool func_786(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_787()
{
	int iVar0;

	iVar0 = MISC::GET_FRAME_COUNT();
	return (Global_1051832.f_3279 == iVar0 || Global_1051832.f_3279 == (iVar0 - 1));
}

void func_788(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 || iParam0);
}

bool func_789()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

int func_790()
{
	return Global_1051645.f_12;
}

char* func_791()
{
	return "unnamed";
}

int func_792(int iParam0)
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

bool func_793(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_944(36, iParam0);
}

int func_794(int iParam0)
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

bool func_795(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_945(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_946(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_796(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

bool func_797(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_798(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_799(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

void func_800(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;

	if (iParam1 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (uParam0->f_1[iVar1] == iParam1)
		{
			return;
		}
		switch (iParam1)
		{
			case joaat("LOOTER_PED_IS_FEMALE"):
			case joaat("LOOTER_PED_IS_MALE"):
				if (uParam0->f_1[iVar1] == 8.967694E-17f || uParam0->f_1[iVar1] == 1.721179E-28f)
				{
					bVar0 = true;
				}
				break;
			case joaat("LOOT_TYPE_NORMAL"):
			case joaat("LOOT_TYPE_SKINNING"):
				if (uParam0->f_1[iVar1] == 2.95884E+10f || uParam0->f_1[iVar1] == 2.575707E+29f)
				{
					bVar0 = true;
				}
				break;
			case joaat("FISHING_RESULT_RUINED"):
			case joaat("FISHING_RESULT_NORMAL"):
			case joaat("FISHING_RESULT_LEGENDARY"):
				if ((uParam0->f_1[iVar1] == 2.770086E+17f || uParam0->f_1[iVar1] == -2.793692E-28f) || uParam0->f_1[iVar1] == 1.982896E+31f)
				{
					bVar0 = true;
				}
				break;
		}
		if (bVar0)
		{
			uParam0->f_1[iVar1] = iParam1;
			return;
		}
		iVar1++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_801(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
	var uVar0;
	struct<15> Var1;

	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_947(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_948(uParam2, iParam0, Var1);
	return 1;
}

bool func_802(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_37() == -1)
	{
		if (func_409(bParam0) && func_949(bParam0))
		{
			func_950(bParam0, iParam1, 1, &bParam2, iParam3);
			return false;
		}
	}
	else if (bParam0 == 9605447f)
	{
		bParam2 = true;
	}
	else if (bParam0 == -3.273909E-18f)
	{
		return false;
	}
	return true;
}

bool func_803(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_951(bParam0, iParam1);
	Var0 = { func_167(bParam0, 0, 1) };
	iVar5 = func_497(bParam0, &Var0, 0, 0);
	iVar6 = func_521(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_19(bParam0, -1.690907E-35f))
		{
			func_164(674, 1);
		}
		else if (func_37() == -1)
		{
			func_164(673, 0);
		}
	}
	if (func_952(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
	{
		if (iVar6 < iVar5)
		{
			*iParam1 = (iVar5 - iVar6);
		}
		else
		{
			return false;
		}
	}
	return true;
}

void func_804(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_953())
	{
		return;
	}
	switch (func_10(bParam0, -60352.49f))
	{
		case -1565009253:
		case -1420737577:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1940072.f_70.f_5 = 1;
			Global_1940072.f_70.f_6 = 0;
			Global_1940072.f_70.f_1 = bParam0;
			break;
	}
}

bool func_805(int iParam0)
{
	if (!func_954(iParam0))
	{
		return false;
	}
	return func_955(iParam0);
}

void func_806(int iParam0)
{
	if (!func_954(iParam0))
	{
		return;
	}
	func_956(iParam0);
	func_957(iParam0);
}

void func_807(bool bParam0)
{
	if (func_19(bParam0, -1.640085E-16f))
	{
		func_958(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_19(bParam0, -4.561297E+28f))
	{
		func_958(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_19(bParam0, 2.133228E-14f))
	{
		func_958(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_19(bParam0, 5.050617E+08f))
	{
		func_958(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_808(bool bParam0, bool bParam1)
{
	bool bVar0;

	switch (bParam0)
	{
		case joaat("AMMO_THROWING_KNIVES"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_CONFUSE"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DISORIENT"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_DRAIN"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_IMPROVED"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_POISON"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_TRAIL"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_THROWING_KNIVES_WOUND"):
			bVar0 = -2.593644E+11f;
			break;
		case joaat("AMMO_DYNAMITE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_DYNAMITE_VOLATILE"):
			bVar0 = -7.135455E-16f;
			break;
		case joaat("AMMO_MOLOTOV"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_MOLOTOV_VOLATILE"):
			bVar0 = 2.870844E+29f;
			break;
		case joaat("AMMO_TOMAHAWK"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_ANCIENT"):
			bVar0 = 2.176132E+38f;
			break;
		case joaat("AMMO_TOMAHAWK_HOMING"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_TOMAHAWK_IMPROVED"):
			bVar0 = -4.049688E-16f;
			break;
		case joaat("AMMO_BOLAS"):
			bVar0 = 1284.666f;
			break;
		case joaat("AMMO_POISONBOTTLE"):
			bVar0 = -1.27948E+18f;
			break;
		case joaat("AMMO_HATCHET"):
			bVar0 = 5.420628E-33f;
			break;
		case joaat("AMMO_HATCHET_HUNTER"):
			bVar0 = 1.96266E-13f;
			break;
		case joaat("AMMO_HATCHET_HUNTER_RUSTED"):
			bVar0 = -1.776182E+22f;
			break;
		case joaat("AMMO_HATCHET_ANCIENT"):
			bVar0 = 1.387712E-18f;
			break;
		case joaat("AMMO_HATCHET_CLEAVER"):
			bVar0 = -5.528462E+28f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT"):
			bVar0 = -0.02419633f;
			break;
		case joaat("AMMO_HATCHET_DOUBLE_BIT_RUSTED"):
			bVar0 = -7.093211E-30f;
			break;
		case joaat("AMMO_HATCHET_HEWING"):
			bVar0 = 4.318794E-22f;
			break;
		case joaat("AMMO_HATCHET_VIKING"):
			bVar0 = 1.396023E+32f;
			break;
		default:
			break;
	}
	if (func_17(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_959(bVar0) || func_960(bVar0))
			{
				return bVar0;
			}
		}
		else
		{
			return bVar0;
		}
	}
	return bParam0;
}

bool func_809(bool bParam0, bool bParam1)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return false;
}

void func_810(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_684(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::UNLOCK_SET_UNLOCKED(iVar0, true);
}

bool func_811(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<4> Var27;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_MELEE_WEAPON(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		Var0 = { func_167(bParam0, 0, 1) };
		if (func_403(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_404(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_168(bParam0, Var0, Var0.f_4, 0) };
				func_319(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_170(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_812(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_961(bParam0, iParam1);
		return true;
	}
	if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
	{
		return false;
	}
	if (iParam1 > 0)
	{
	}
	WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
	return true;
}

bool func_812(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_692(bParam0))
	{
		return false;
	}
	if (!func_170(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_813(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_962(bParam0, iParam1, iParam2);
	}
	Var1 = { func_167(bParam0, 0, 1) };
	Var6 = { func_168(bParam0, Var1, Var1.f_4, 0) };
	return func_963(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_814(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_809(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_37() == -1)
		{
			func_810(bVar0);
			if (iParam1 == 3787186f)
			{
				func_964(bVar0);
			}
		}
		if (!func_952(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_950(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_965(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_811(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_811(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_811(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_966())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_967(bVar0))
				{
					func_811(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_811(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_968(Global_33, 2, 0, 1);
				if ((((func_684(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_295(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_684(bVar7) && func_295(-0.0002099206f, 1))
				{
					if (!func_811(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_811(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_811(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return false;
			}
		}
	}
	else
	{
		return false;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(true) != 0 && iParam1 == 3787186f)
	{
		func_164(515, 1);
	}
	return true;
}

int func_815(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_692(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_684(bVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_33, &iVar2, bVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (WEAPON::IS_WEAPON_BOW(bVar4))
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::GET_WEAPON_CLIP_SIZE(bVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_825(func_969(bParam0), func_267(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_170(0))
	{
		if (func_812(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_813(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_816(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

bool func_817()
{
	return false;
}

int func_818(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_37() == 0)
	{
		func_829(iParam0, 0);
		return 0;
	}
	iVar0 = func_970(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_971(iVar0, sParam4, iParam5, 0);
	}
	func_972(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_819(bool bParam0)
{
}

void func_820(bool bParam0)
{
}

void func_821(bool bParam0)
{
}

void func_822(bool bParam0)
{
}

void func_823()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_824(bool bParam0, int iParam1)
{
	var uVar0;

	func_639(bParam0, iParam1, &uVar0);
}

void func_825(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_397(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_615(iParam0, 1024))
	{
		return;
	}
	func_398(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_826(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_396(iParam0, &iVar0, &iVar1);
	if (!func_397(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_615(iParam0, 1024))
	{
		return;
	}
	func_398(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = fParam1;
	if (!bParam3)
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 1;
	}
	else
	{
		Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 5;
	}
}

void func_827(bool bParam0)
{
	switch (*bParam0)
	{
		case joaat("CONSUMABLE_CIGARETTE_BOX_USED"):
			*bParam0 = -1.177047E+07f;
			break;
		case joaat("CONSUMABLE_CIGARETTE_BOX_CHEAP_USED"):
			*bParam0 = 2.106782E+14f;
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
			*bParam0 = 1.62503E-31f;
			break;
	}
}

void func_828(bool bParam0)
{
	if (func_37() != -1)
	{
		return;
	}
}

int func_829(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_800(&Var4, 2.95884E+10f);
	return func_801(iParam0, &Var4, &uVar0, iParam1, 0);
}

void func_830(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_831(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_973(Global_1902818.f_37);
	func_653(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_974(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_832(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_17(bParam0, 0))
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

bool func_833(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
	}
	if (func_19(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_834(bool bParam0, int iParam1)
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

char* func_835(bool bParam0)
{
	bool bVar0;

	if (!func_17(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_267(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_836(bool bParam0)
{
	if (func_145(bParam0) == -1.955052E+34f || func_145(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_837(bool bParam0)
{
	int iVar0;

	if (!func_17(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_468(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

void func_838(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_839(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_975(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1, iParam2, bParam3, iParam4);
}

bool func_840(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_976(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_977(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_841(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_249(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	bVar0 = func_978(bParam1);
	if (bVar0 != 0)
	{
		iVar1 = func_979(bVar0, 1);
		if (iVar1 > -1)
		{
			iVar2 = Global_1903834.f_402[iVar1];
			if (iVar2 > 0)
			{
				iVar3 = iParam2;
				if (iVar3 > iVar2)
				{
					iVar3 = iVar2;
				}
				if (!func_980(iVar3, 0))
				{
				}
				Global_1903834.f_402[iVar1] = (Global_1903834.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_842(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return iParam1;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return iParam1;
	}
	return func_981(iVar0, bParam2) >= func_982(bParam2);
}

int func_843(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return iParam2;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = 2;
	while (iVar0 >= 0)
	{
		if (iParam0 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID()) || NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
		{
			iVar1 = PED::_GET_PELT_FROM_HORSE(iParam0, iVar0);
			if (iVar1 == bParam1)
			{
				PED::_CLEAR_PELT_FROM_HORSE(iParam0, bParam1);
				iParam2 = (iParam2 - 1);
			}
		}
		else
		{
			iVar1 = Global_1289628[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0];
			if (iVar1 == bParam1)
			{
				Global_1289628[PLAYER::PLAYER_ID() /*19*/].f_15[iVar0] = 0;
				iParam2 = (iParam2 - 1);
			}
		}
		if (iParam2 <= 0)
		{
		}
		else
		{
			iVar0 = (iVar0 + -1);
		}
	}
	return iParam2;
}

int func_844(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if ((!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0)) || !PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iParam0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	iVar3 = 0;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar4 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar3, iVar1));
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4)) && bParam1 == func_511(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

void func_845(bool bParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, bParam0, 96);
}

int func_846(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (func_508(bParam0, &bVar1))
	{
		bParam0 = bVar1;
	}
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &iVar0))
	{
		return -1;
	}
	switch (iVar0)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		case 3:
			return 4;
		case 4:
			return 8;
		default:
			break;
	}
	return -1;
}

float func_847(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_FISH_BLUEGILL_POOR"):
		case joaat("PROVISION_FISH_BLUEGILL"):
			return 2.926168E-33f;
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH"):
		case joaat("PROVISION_FISH_BULLHEAD_CATFISH_POOR"):
			return -5.462538f;
		case joaat("PROVISION_FISH_CHAIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_CHAIN_PICKEREL"):
			return -4.784702E+10f;
		case joaat("PROVISION_FISH_CHANNEL_CATFISH_POOR"):
		case joaat("PROVISION_FISH_CHANNEL_CATFISH"):
			return -6.023587E-14f;
		case joaat("PROVISION_FISH_LAKE_STURGEON"):
		case joaat("PROVISION_FISH_LAKE_STURGEON_POOR"):
			return -2.342158E-08f;
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS"):
		case joaat("PROVISION_FISH_LARGEMOUTH_BASS_POOR"):
			return 1.664632E+25f;
		case joaat("PROVISION_FISH_LONGNOSE_GAR_POOR"):
		case joaat("PROVISION_FISH_LONGNOSE_GAR"):
			return -1.005847E-05f;
		case joaat("PROVISION_FISH_MUSKIE"):
		case joaat("PROVISION_FISH_MUSKIE_POOR"):
			return -4213762f;
		case joaat("PROVISION_FISH_NORTHERN_PIKE"):
		case joaat("PROVISION_FISH_NORTHERN_PIKE_POOR"):
			return -3.374343E-14f;
		case joaat("PROVISION_FISH_PERCH_POOR"):
		case joaat("PROVISION_FISH_PERCH"):
			return -2.25821E-23f;
		case joaat("PROVISION_FISH_REDFIN_PICKEREL_POOR"):
		case joaat("PROVISION_FISH_REDFIN_PICKEREL"):
			return -2.306786E-16f;
		case joaat("PROVISION_FISH_ROCK_BASS_POOR"):
		case joaat("PROVISION_FISH_ROCK_BASS"):
			return -2.110178E-07f;
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS_POOR"):
		case joaat("PROVISION_FISH_SMALLMOUTH_BASS"):
			return -1.124226E-21f;
		case joaat("PROVISION_FISH_SOCKEYE_SALMON_POOR"):
		case joaat("PROVISION_FISH_SOCKEYE_SALMON"):
			return 1.159723E-11f;
		case joaat("PROVISION_FISH_STEELHEAD_TROUT_POOR"):
		case joaat("PROVISION_FISH_STEELHEAD_TROUT"):
			return -1.578159E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BAT_PERFECT"):
			return 7.866752E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BLUEJAY_HIGH_QUALITY"):
			return 1.579949E+16f;
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BULLFROG_POOR"):
			return 7.437424E+09f;
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CEDARWAXWING_PERFECT"):
			return -1.462146E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CORMORANT_POOR"):
			return 9.292199E+21f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRLNAPARKET_HIGH_QUALITY"):
			return -2.671033E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CROW_PERFECT"):
			return 6.181888E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SQUIRREL_HIGH_QUALITY"):
			return -9.844883E+17f;
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CARDINAL_POOR"):
			return 2.424045f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHIPMUNK_HIGH_QUALITY"):
			return -2.805198E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAB_POOR"):
			return 391712.9f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRAWFISH_HIGH_QUALITY"):
			return 2.090133E+26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GILA_HIGH_QUALITY"):
			return 1.117421E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_IGUANA_PERFECT"):
			return 1.130478E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ORIOLE_HIGH_QUALITY"):
			return 9.269336E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIGEON_PERFECT"):
			return 5.08642E+31f;
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_QUAIL_POOR"):
			return -5.011415E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAT_PERFECT"):
			return -3.378005E+13f;
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_REDFTBOOBY_PERFECT"):
			return 3.877905E-07f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROBIN_HIGH_QUALITY"):
			return 1.732753E+34f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROSESPOONBIL_PERFECT"):
			return -0.0002879417f;
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SPARROW_PERFECT"):
			return -4.896665E+33f;
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SONGBIRD_POOR"):
			return 9.337454E-25f;
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TOAD_PERFECT"):
			return 6.538152E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOODPECKER_POOR"):
			return -6.539324E+24f;
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ALLIGATOR_HIGH_QUALITY"):
			return -1.012775E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ARMADILLO_POOR"):
			return -1.867584E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BADGER_PERFECT"):
			return 1.693745E-17f;
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BEAVER_POOR"):
			return 2.311227E+08f;
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_BIGHORN_SHEEP_POOR"):
			return -4.064678E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_BUCK_PERFECT"):
			return -9.346937f;
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CALICONDOR_POOR"):
			return -3.628332E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CHICKEN_POOR"):
			return 4.932888E+35f;
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COUGAR_PERFECT"):
			return -2.459895f;
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_COYOTE_POOR"):
			return -3.950382E+18f;
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_CRANE_PERFECT"):
			return -6.60525E-31f;
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_DEER_HIGH_QUALITY"):
			return -3.304194E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_DUCK_POOR"):
			return -2.416964E-10f;
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_EAGLE_HIGH_QUALITY"):
			return 1.932909E+37f;
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_EGRET_POOR"):
			return 2019.863f;
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_FOX_PERFECT"):
			return -692.5446f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOAT_HIGH_QUALITY"):
			return 7.940739E-26f;
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_GOOSE_HIGH_QUALITY"):
			return 1.096912E-12f;
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_HAWK_POOR"):
			return 4.197798E-20f;
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_HERON_PERFECT"):
			return 2.306707E-11f;
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_LOON_HIGH_QUALITY"):
			return -5.025934E-14f;
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_MUSKRAT_PERFECT"):
			return 0.4031149f;
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OPOSSUM_POOR"):
			return -2196176f;
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_OWL_POOR"):
			return 1.149421E-27f;
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PANTHER_HIGH_QUALITY"):
			return 2.447786E-32f;
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PARROT_POOR"):
			return 1.161864E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PELICAN_PERFECT"):
			return -3.334843E+22f;
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PHEASANT_HIGH_QUALITY"):
			return -4.389108E-09f;
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PIG_POOR"):
			return 2.32403E-30f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRARECHICK_POOR"):
			return -101012.1f;
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_PRONGHORN_PERFECT"):
			return -2.898737E+38f;
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_RABBIT_HIGH_QUALITY"):
			return -1.51341E-16f;
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RACOON_POOR"):
			return 4.411597E-06f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAM_POOR"):
			return -4.765618E+07f;
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_RAVEN_POOR"):
			return -4.788333E-19f;
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_ROOSTER_HIGH_QUALITY"):
			return -2.664562E+29f;
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SEAGULL_HIGH_QUALITY"):
			return 9.336396E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SHEEP_HIGH_QUALITY"):
			return -4.064678E-13f;
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SKUNK_PERFECT"):
			return -999.0335f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BLRAT_POOR"):
			return -76769.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_BOA_HIGH_QUALITY"):
			return -1.614028E+19f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_COPPER_POOR"):
			return -1.725138E+20f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_FERDLNCE_PERFECT"):
			return -2.492811E+11f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_PERFECT"):
			return -76769.3f;
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_SNAKE_WATER_PERFECT"):
			return -1.918344E-35f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURKEY_POOR"):
			return -8.491031E-37f;
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_PERFECT"):
		case joaat("PROVISION_ANIMAL_CARCASS_TURTLE_SNAP_POOR"):
			return 1.399463E-28f;
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_VULTURE_PERFECT"):
			return 1.735336E-08f;
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_POOR"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_HIGH_QUALITY"):
		case joaat("PROVISION_ANIMAL_CARCASS_WOLF_PERFECT"):
			return -1.17679E+23f;
		case 1414321383:
			return 1.434985E-07f;
		case 2121214287:
			return -4.486101E-17f;
		case 1412158665:
			return -4580.342f;
		case 1206211508:
			return 6.610703E+10f;
		case 1919002796:
			return -4948933f;
		case 1611367424:
			return -1.321043E+28f;
		case -1454395863:
			return 1.995113E-25f;
		case -141899106:
			return -5.907303E-05f;
		case 2005813927:
			return 3.759906f;
		case -479364468:
			return -1.411351E-17f;
		case -702554127:
			return -1.201465E+32f;
		case 975087601:
			return -3.430854E-06f;
		case 867797271:
			return -3.291227E+35f;
		case 1082303145:
			return -2.264169E-22f;
		case -1436813734:
			return 2.781082E-12f;
		case 1351891043:
			return 2.62237E+31f;
		case 1120509134:
			return -1.201746E+36f;
		case 1834283492:
			return -5.668108E-24f;
		case -479703236:
			return 6.427649E-24f;
		case -854187368:
			return 0.04130429f;
		case -2047339431:
			return 0.05244859f;
		case 911411503:
			return 4.320882E+26f;
		case 1194568432:
			return 6.496686E-25f;
		case 418238053:
			return 3.759013E-32f;
		case -1337904993:
			return -5.687453E-13f;
		case -1012148364:
			return -2.342985E-28f;
		case -715261224:
			return -1.699095E+32f;
		case 466164206:
			return -3.952973E+30f;
		case -1042520562:
			return 5.957507E-27f;
		case -1340161389:
			return 9.54755E-12f;
		case 138561101:
			return 3.93412E+21f;
		case 365093198:
			return -2.588016E+24f;
		case 78233372:
			return -1.134702E-07f;
		case 929575765:
			return -1.582541E+31f;
		case -2012326752:
			return -6.981198E+18f;
		case 1527970474:
			return 5.667451E-15f;
		case -775904514:
			return -2.763145f;
		case -481868277:
			return 6.090971E-28f;
		case -118328991:
			return -6.417472E-21f;
		case -816011142:
			return 0.000548534f;
		case -1046803209:
			return 2.894728E+15f;
		case -338665119:
			return -1.132064E-26f;
		default:
			break;
	}
	return -2.56015E-24f;
}

void func_848(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_37() == -1)
	{
		iVar0 = func_94(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_843(iVar0, bParam0, iParam1);
}

bool func_849(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_369(0) };
	Var0.f_4 = 5.960322E-13f;
	Var5 = { func_168(bParam0, Var0, Var0.f_4, 0) };
	return func_319(bParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_850(int iParam0)
{
	int iVar0;

	if (Local_0.f_12)
	{
		func_983();
	}
	func_984(&Local_0);
	func_985(&Local_0);
	switch (iParam0)
	{
		case joaat("A_C_DEER_01"):
			if (((((!func_986(&Local_0, -7.724074E-28f) || !func_986(&Local_0, 5.437065E-22f)) || !func_986(&Local_0, 7.484564E-37f)) || !func_986(&Local_0, -4.423507E-13f)) || !func_986(&Local_0, 8.230158E-27f)) || !func_986(&Local_0, -3.922512E-14f))
			{
			}
			break;
		case joaat("A_C_PRONGHORN_01"):
			if (((((!func_986(&Local_0, 1.158207E+28f) || !func_986(&Local_0, -3.764532E-31f)) || !func_986(&Local_0, -4.540201E-27f)) || !func_986(&Local_0, 5.848209E+19f)) || !func_986(&Local_0, 0.02174423f)) || !func_986(&Local_0, -1.152293E-15f))
			{
			}
			break;
		case joaat("A_C_TURKEYWILD_01"):
			if (((((!func_986(&Local_0, 1.025691E-16f) || !func_986(&Local_0, -8.922604E-28f)) || !func_986(&Local_0, -1.120819E-19f)) || !func_986(&Local_0, 6606.792f)) || !func_986(&Local_0, -0.0003792866f)) || !func_986(&Local_0, -4.355492E-38f))
			{
			}
			break;
		case joaat("A_C_FOX_01"):
			if (((((!func_986(&Local_0, 1.976518E-07f) || !func_986(&Local_0, -0.0001932701f)) || !func_986(&Local_0, -2.709008E+37f)) || !func_986(&Local_0, -1.146312E+07f)) || !func_986(&Local_0, -5.282553E+10f)) || !func_986(&Local_0, -1.007456E-12f))
			{
			}
			break;
		case joaat("A_C_DUCK_01"):
			if ((!func_986(&Local_0, 0.005269445f) || !func_986(&Local_0, 0.03063576f)) || !func_986(&Local_0, 168349.6f))
			{
			}
			break;
		case joaat("A_C_CALIFORNIACONDOR_01"):
			if ((!func_986(&Local_0, -8.076066E-07f) || !func_986(&Local_0, -1.40288E-34f)) || !func_986(&Local_0, -4804.242f))
			{
			}
			break;
		case joaat("A_C_TURTLESNAPPING_01"):
			if ((!func_986(&Local_0, -318808.2f) || !func_986(&Local_0, -9.952872E-14f)) || !func_986(&Local_0, -1.53492E+19f))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ELK"):
			if ((!func_986(&Local_0, -1.1118E-09f) || !func_986(&Local_0, 15269.74f)) || !func_986(&Local_0, 3.038394E+35f))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_ALLIGATOR"):
			if ((!func_986(&Local_0, -3.457366E-20f) || !func_986(&Local_0, -1.194836E+10f)) || !func_986(&Local_0, 4.055176E+26f))
			{
			}
			break;
		case joaat("A_C_IGUANADESERT_01"):
			if ((!func_986(&Local_0, 33127.39f) || !func_986(&Local_0, 4.938854E+19f)) || !func_986(&Local_0, -76.33204f))
			{
			}
			break;
		case joaat("P_CS_PELT_XLARGE_BUFFALO"):
			if ((!func_986(&Local_0, -4.419328E+17f) || !func_986(&Local_0, -5.825896E-24f)) || !func_986(&Local_0, -2.100704E+30f))
			{
			}
			break;
	}
	iVar0 = func_987(&Local_0);
	Local_0.f_12 = 1;
	return iVar0;
}

bool func_851(var uParam0)
{
	if (!func_988())
	{
		return false;
	}
	*uParam0 = Local_0.f_11;
	uParam0->f_1 = Local_0[*uParam0];
	Local_0.f_11++;
	return true;
}

bool func_852(bool bParam0, int iParam1, bool bParam2)
{
	*iParam1 = 0;
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (!bParam2 || func_311())
	{
		*iParam1 = func_368(bParam0, func_369(1), -3.233114E-34f, 1, 1, 0);
		return *iParam1 > 0;
	}
	return false;
}

bool func_853(bool bParam0)
{
	if (func_17(bParam0, 0))
	{
		if (bParam0 == -1.766809E-31f)
		{
			return func_112(1048576);
		}
		if (func_19(bParam0, -1.823469E-06f))
		{
			if (func_19(bParam0, 5.454413E+35f))
			{
				return func_112(512);
			}
			return func_112(256);
		}
		else if (func_19(bParam0, 4.644778E+30f))
		{
			return func_112(4096);
		}
		else if (func_19(bParam0, 8.368431E+20f))
		{
			return func_112(16384);
		}
		else if (func_19(bParam0, 888.6404f))
		{
			if (((bParam0 != -1.385362E+32f && bParam0 != -644.0794f) && bParam0 != -4.29454E-23f) && bParam0 != -1.346123E+17f)
			{
				return func_112(2);
			}
			else
			{
				return func_112(65536);
			}
		}
	}
	if (Global_1940072.f_12)
	{
		return func_112(256);
	}
	else
	{
		return func_112(2);
	}
	return func_112(2);
}

bool func_854(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_391(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_989(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_855(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_199(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_621(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_856(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<5> func_857(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_858(iParam0, 2.982335E+09f, func_410(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_858(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_17(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

void func_859(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	struct<2> Var21[10];

	if (*uParam2 < 10)
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
		Var21[iVar0 /*2*/] = (*uParam2)[iVar0 /*2*/];
		Var21[iVar0 /*2*/].f_1 = 1f;
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
							if (Var21[iVar0 /*2*/] == Var19)
							{
								Var21[iVar0 /*2*/].f_1 = (Var21[iVar0 /*2*/].f_1 + (Var19.f_1 - 1f));
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
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0 /*2*/].f_1 != 1f)
		{
			(uParam2[iVar0 /*2*/])->f_1 = BUILTIN::FLOOR((IntToFloat((uParam2[iVar0 /*2*/])->f_1) * (Var21[iVar0 /*2*/].f_1 / 1f)));
		}
		iVar0++;
	}
}

int func_860(int iParam0)
{
	return func_991(func_990(iParam0));
}

void func_861(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = -2.264839E+33f;
			break;
		case 1:
			*uParam1 = 12851681;
			break;
		case 2:
			*uParam1 = 3.471225E+11f;
			break;
		case 3:
			*uParam1 = 2.279752E-37f;
			break;
		case 4:
			*uParam1 = -9.699722E+17f;
			break;
		case 5:
			*uParam1 = -2.634795E-30f;
			break;
		case 9:
			*uParam1 = -48.71161f;
			break;
		case 10:
			*uParam1 = 2.917695E+18f;
			break;
		case 11:
			*uParam1 = -0.0005925861f;
			break;
		case 12:
			*uParam1 = 3.768367E-21f;
			break;
		case 16:
			*uParam1 = -1.725575E-11f;
			break;
		case 15:
			*uParam1 = 2.199309E-14f;
			break;
		case 14:
			*uParam1 = 3.111783E+10f;
			break;
		case 13:
			*uParam1 = -1.024076E-05f;
			break;
	}
}

bool func_862(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	if (func_466(bParam0) || func_19(bParam0, 2.791187f))
	{
		return func_992(func_499(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

int func_863(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_294(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_864(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_17(bParam0, 0))
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
		func_993(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_865(int iParam0)
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

int func_866(int iParam0)
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

int func_867(int iParam0)
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

int func_868(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return -1;
	}
	if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1141317.f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1141317[iVar0 /*27*/].f_9 == iParam0 && Global_1141317[iVar0 /*27*/] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_869(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];

	bVar0 = COLLECTION::COLLECTABLE_GET_CATEGORY_ITEM_SET_BUY_AWARD(iParam1, 0);
	if (!func_23(bVar0))
	{
		return 0;
	}
	iVar1 = ITEMDATABASE::_0xF540239F9937033B(bVar0, -1.926391E+21f);
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (ITEMDATABASE::_0xF27F01BBF5ACD3F3(bVar0, -1.926391E+21f, iVar2, &(Var3[iVar2 /*2*/])))
		{
			if (func_17(Var3[iVar2 /*2*/], 0) && Var3[iVar2 /*2*/] == bParam0)
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

bool func_870(int iParam0)
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

int func_871()
{
	if (func_37() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

float func_872(int iParam0)
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

bool func_873(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_TAXIDERMIST_ORDERS"):
		case joaat("CI_TAG_FOLDER_LETTERS"):
		case joaat("CI_TAG_FOLDER_TREASURE_MAPS"):
		case joaat("CI_TAG_FOLDER_PHOTOGRAPHS"):
		case joaat("CI_TAG_FOLDER_COLLECTOR_MAPS"):
		case joaat("CI_TAG_FOLDER_RECIPE_PAMPHLETS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPER_SCRAPS"):
		case joaat("CI_TAG_FOLDER_BUSINESS_CARDS"):
		case joaat("CI_TAG_FOLDER_NEWSPAPERS"):
		case joaat("CI_TAG_FOLDER_DINOSAUR_NOTES"):
		case joaat("CI_TAG_FOLDER_ROCK_CARVING_NOTES"):
		case joaat("CI_TAG_FOLDER_BOOKS"):
		case joaat("CI_TAG_FOLDER_DRAWINGS"):
		case joaat("CI_TAG_FOLDER_BOUNTY_POSTERS"):
		case joaat("CI_TAG_FOLDER_MAPS"):
		case joaat("CI_TAG_FOLDER_NOTES"):
			return true;
	}
	if (func_994(iParam0))
	{
		return true;
	}
	return false;
}

bool func_874(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_KIT_WATCHES"):
			return true;
	}
	return false;
}

bool func_875()
{
	return func_54(1);
}

bool func_876(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_GAMEY_BIRD"):
		case joaat("CI_TAG_FOLDER_BIG_GAME"):
		case joaat("CI_TAG_FOLDER_GRISTLY_MUTTON"):
		case joaat("CI_TAG_FOLDER_HERPTILE_MEAT"):
		case joaat("CI_TAG_FOLDER_SUCCULENT_FISH"):
		case joaat("CI_TAG_FOLDER_STRINGY_MEAT"):
		case joaat("CI_TAG_FOLDER_MATURE_VENISON"):
		case joaat("CI_TAG_FOLDER_GAME"):
		case joaat("CI_TAG_FOLDER_CRUSTACEAN"):
		case joaat("CI_TAG_FOLDER_FLAKEY_FISH"):
		case joaat("CI_TAG_FOLDER_PLUMP_BIRD"):
		case joaat("CI_TAG_FOLDER_PRIME_BEEF"):
		case joaat("CI_TAG_FOLDER_GRITTY_FISH"):
		case joaat("CI_TAG_FOLDER_TENDER_PORK"):
		case joaat("CI_TAG_FOLDER_EXOTIC_BIRD"):
			return true;
	}
	return false;
}

bool func_877(var uParam0)
{
	if (!func_995(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_878(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_89(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_879(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_996(iParam0, iParam1, iParam2, iParam3);
}

bool func_880(struct<2> Param0, bool bParam2)
{
	if (!func_391(Param0))
	{
		return false;
	}
	func_997(bParam2);
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

bool func_881(bool bParam0, int iParam1)
{
	*bParam0 = Global_1245159.f_9818;
	bParam0->f_2 = 1.013984E-23f;
	bParam0->f_3 = iParam1;
	return (DATAFILE::PARSEDDATA_IS_FILE_LOADED(*bParam0) && DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0));
}

int func_882()
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

int func_883()
{
	return Global_1110244.f_3667.f_938;
}

int func_884(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (iParam0 > iParam1)
	{
		return -1;
	}
	iVar0 = ((iParam0 + iParam1) / 2);
	if (*iParam2 < Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_884(iParam0, (iVar0 - 1), iParam2);
	}
	if (*iParam2 > Global_1110244.f_3667.f_729[iVar0 /*2*/])
	{
		return func_884(iVar0 + 1, iParam1, iParam2);
	}
	return iVar0;
}

var func_885(int iParam0)
{
	return Global_1110244.f_3667.f_729[iParam0 /*2*/].f_1;
}

bool func_886(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 83);
}

bool func_887(bool bParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = func_998();
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

bool func_888(struct<5> Param0, bool bParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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

struct<8> func_889(struct<5> Param0)
{
	return func_999(Param0, 52, 1);
}

int func_890(int iParam0)
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

bool func_891(int iParam0)
{
	if (!func_485(iParam0))
	{
		return false;
	}
	return func_486(iParam0, 2, 1);
}

int func_892(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_1000())
	{
		return 0;
	}
	if (!func_383())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_894(&Global_0, 8);
	}
	func_894(&Global_0, 1);
	return 1;
}

void func_893(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_164(239, 0);
			break;
		case 16:
			func_164(240, 0);
			break;
		case 34:
			func_164(241, 0);
			break;
		case 52:
			func_164(242, 0);
			break;
		case 2:
			func_164(243, 0);
			break;
		case 3:
			func_164(244, 0);
			break;
		case 53:
			func_164(245, 0);
			break;
		case 15:
			func_164(246, 0);
			break;
		case 24:
			func_164(247, 0);
			break;
		case 38:
			func_164(248, 0);
			break;
		case 27:
			func_164(249, 0);
			break;
		case 13:
			func_164(250, 0);
			break;
		case 19:
			func_164(251, 0);
			break;
		case 20:
			func_164(252, 0);
			break;
		case 35:
			func_164(253, 0);
			break;
		case 39:
			func_164(254, 0);
			break;
		case 50:
			func_164(255, 0);
			break;
		case 7:
			func_164(256, 0);
			break;
		case 21:
			func_164(257, 0);
			break;
		case 18:
			func_164(258, 0);
			break;
		case 6:
			func_164(259, 0);
			break;
		case 30:
			func_164(260, 0);
			break;
		case 49:
			func_164(261, 0);
			break;
		case 11:
			break;
		case 4:
			func_164(263, 0);
			break;
		case 8:
			func_164(264, 0);
			break;
		case 29:
			func_164(265, 0);
			break;
		case 32:
			func_164(266, 0);
			break;
		case 12:
			func_164(267, 0);
			break;
		case 28:
			func_164(268, 0);
			break;
		case 51:
			func_164(269, 0);
			break;
	}
}

void func_894(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_895()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_896(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1001(1);
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

void func_897(float fParam0, int iParam1)
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

int func_898(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1001(1);
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

void func_899(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_1002(iVar0))
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

int func_900(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_1001(1);
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

void func_901(float fParam0, int iParam1)
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

float func_902(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1003();
	func_1004(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_1005(iParam0, 2);
	if (func_1007(iVar0, func_1006(iParam0, 2), 1))
	{
		func_1008(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_164(103, bParam2);
		return 0f;
	}
	func_1009(iParam0, func_1003(), 2);
	func_1008(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_903(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1001(2);
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

int func_904(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_1001(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_1010(iVar0, iParam0, fParam1))
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
			func_1011(iParam0, 7000, iParam5);
		}
		func_1012(iVar0, iParam0, fParam1);
		func_1013(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

int func_905(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_1014(iParam0))
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
				sVar0 = func_1015(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_735(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_1015(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_1016(3.279095E+25f);
			func_737(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_1015(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_736(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_1016(2.372604E-26f);
			func_1017(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_1017(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_1017(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_906()
{
	if (Global_1956862.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_1018(Global_1956862.f_1431.f_107, 0);
}

void func_907(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_1019(13, 2);
	iVar1 = func_1020(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_1021(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_1020(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_1003();
		func_1022(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_1023(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

bool func_908(int iParam0)
{
	int iVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -1.003831E+26f;
	}
	return func_360(iVar0);
}

int func_909()
{
	return Global_1953279.f_1676;
}

int func_910(bool bParam0)
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
	Var15 = { func_168(5.207907E-07f, func_369(1), 0.08386164f, 1) };
	iVar19 = func_597(Var15, 4.163947E-19f, 1, -1);
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
	Var22 = { func_444(0, -5.45926E-19f, 4.163947E-19f, -5.45926E-19f, 0, 0, 0) };
	if (func_445(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_239(&Var0, 0, iVar20, iVar21))
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
				func_253(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_169(Var0, 1, 0);
			}
			func_253(iVar20);
			return iVar14;
		}
		func_253(iVar20);
	}
	return 0;
}

int func_911(int iParam0)
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

bool func_912(bool bParam0, var uParam1, bool bParam2)
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
		func_749(bParam0, 1, bParam2);
	}
	return bVar1;
}

bool func_913(var uParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6, bool bParam7, bool bParam8, int iParam9)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	struct<4> Var4;
	int iVar11;

	iVar11 = 0;
	Var4 = func_919(iParam6);
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
		func_1025(uParam0, func_1024(iVar0), 1, 1, bParam7);
	}
	if (bVar2)
	{
		if (iParam9 != 8)
		{
			func_591(-1);
		}
		if (DATAFILE::_PARSEDDATA_GET_SECTION(&iVar0, &Var4, -2.161193E-05f))
		{
			iVar11 = func_1024(iVar0);
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
			iVar1 = func_361(bVar3, 1);
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
					func_1026(bVar3, 16, 6);
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
							if (func_1027(bVar3) && func_778(uParam0->f_1[iVar1 /*3*/], bVar3, &iVar0))
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
							func_1029(uParam0, iVar11, func_1028(bParam1) != 0, iParam9);
						}
					}
					else if ((((func_584() == 4.387347E-38f && uParam0->f_1[iVar1 /*3*/] == Global_1953279.f_83[iVar1 /*12*/]) && func_1028(uParam0->f_1[34 /*3*/]) == 0) && !func_354(32)) && !func_354(64))
					{
						uParam0->f_1[iVar1 /*3*/] = func_925(-2.763755E-08f, 0);
						uParam0->f_1[iVar1 /*3*/].f_1 = 1808.893f;
						func_594(uParam0, uParam0->f_1[iVar1 /*3*/], iVar1, 0, iParam9);
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

void func_914(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
{
	*uParam0 = iParam1;
	uParam0->f_1 = bParam2;
	uParam0->f_2 = iParam3;
	uParam0->f_3 = iParam4;
	uParam0->f_4 = bParam5;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
}

bool func_915(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_916(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_917(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_918(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

int func_919(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_584();
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

void func_920(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (func_19(bVar1, 3.611922E-33f) || func_145(bVar1) == 5.002459E-36f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

void func_921(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 11;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(uParam0->f_1[iVar0 /*3*/], -3.086476E+35f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

void func_922(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 10;
	if (-9.847085E+19f == func_145(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

bool func_923(bool bParam0, bool bParam1, int iParam2)
{
	int iVar0;

	iVar0 = func_145(bParam0);
	if (iParam2 == 0)
	{
		return (iVar0 == 8.292232E+24f || iVar0 == 1.34646E-26f);
	}
	return (!bParam1 && (iVar0 == -2.443576E-24f || iVar0 == 1.34646E-26f));
}

bool func_924(int iParam0)
{
	return (Global_17418.f_55.f_664.f_1734 && iParam0) != 0;
}

int func_925(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<18> Var3;

	iVar2 = 0;
	Var3 = { func_444(0, -5.45926E-19f, iParam0, -5.45926E-19f, 0, 0, 0) };
	if (func_445(&Var3, &iVar0, &iVar1, 1))
	{
		if (iVar1 > 0)
		{
			iVar2 = func_1030(iVar0, iVar1, iParam1);
		}
		func_253(iVar0);
	}
	return iVar2;
}

void func_926(var uParam0, int iParam1)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	bVar1 = false;
	if (func_584() == 4.387347E-38f)
	{
		bVar1 = true;
	}
	func_592(iVar0, iParam1);
	if (uParam0->f_1[iVar0 /*3*/].f_1 == -4.070739E-17f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
	{
		return;
	}
	if (uParam0->f_1[iVar0 /*3*/].f_1 == 0 || uParam0->f_1[iVar0 /*3*/].f_1 == 1808.893f)
	{
		if (func_777(uParam0->f_1[iVar0 /*3*/], bVar1, -4.070739E-17f) >= 0)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			return;
		}
	}
	if (func_777(uParam0->f_1[iVar0 /*3*/], bVar1, 4.712272E+09f) >= 0)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 4.712272E+09f;
	}
}

void func_927(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -1.06471E-16f)) && !func_19(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 16;
	if ((uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f || uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f) && func_19(bParam2, -3099.443f))
	{
		if (uParam0->f_1[iVar0 /*3*/].f_1 == 5.334513E+16f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_592(iVar0, iParam3);
		}
		else if (uParam0->f_1[iVar0 /*3*/].f_1 == 4.712272E+09f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -4.070739E-17f;
			func_592(iVar0, iParam3);
		}
	}
}

void func_928(var uParam0, bool bParam1, int iParam2, int iParam3)
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
		func_592(iVar0, iParam3);
	}
	if (uParam0->f_1[iParam2 /*3*/].f_1 != -1.366178E-36f)
	{
		iVar0 = 34;
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_19(bVar1, 3.984539E+18f))
		{
			uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
			func_592(iParam2, iParam3);
		}
		else
		{
			iVar0 = 35;
			bVar1 = uParam0->f_1[iVar0 /*3*/];
			if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_145(bVar1))
			{
				uParam0->f_1[iParam2 /*3*/].f_1 = -1.366178E-36f;
				func_592(iParam2, iParam3);
			}
		}
	}
}

void func_929(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	iVar0 = 16;
	func_592(iVar0, iParam3);
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(bParam2, 3.949663E+29f) && func_145(bVar1) == 7.30981E-14f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
		else if (func_19(bParam2, 8.367934E-23f) && func_145(bVar1) == 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
		else
		{
			func_592(iVar0, iParam3);
		}
	}
	if (bParam1)
	{
		iVar0 = 21;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
		{
			func_592(iVar0, iParam3);
			func_770(uParam0, 0, uParam0->f_1[iVar0 /*3*/], iParam3);
		}
		iVar0 = 17;
		if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
		return;
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, 170.5778f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -3099.443f))
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
	if ((uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -1.06471E-16f)) && !func_19(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_930(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_592(iVar0, iParam3);
	}
	if (bParam1)
	{
		return;
	}
	iVar0 = 12;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && !func_19(uParam0->f_1[iVar0 /*3*/], -1.186825E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 13;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 25;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, 1.096909E-14f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

bool func_931(bool bParam0)
{
	return Global_1953279.f_1676.f_1[func_361(bParam0, 1) /*3*/] != Global_1953279.f_83[func_361(bParam0, 1) /*12*/];
}

void func_932(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam1);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_592(iVar0, iParam1);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(uParam0->f_1[iVar0 /*3*/], -336998.2f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
		func_592(iVar0, iParam1);
	}
}

void func_933(var uParam0, bool bParam1, bool bParam2, int iParam3)
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
	if (func_584() == 4.387347E-38f)
	{
		bVar3 = true;
	}
	if (func_584() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_145(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_925(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	func_592(iVar0, iParam3);
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -9.489474E-15f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_19(bVar1, 3.411183E+14f))
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		}
		else if (func_777(uParam0->f_1[iVar0 /*3*/], bVar3, -1.366178E-36f) != -1)
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
		func_592(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_145(bVar1) == 3.381578E-06f)
		{
			bVar2 = true;
			if (func_19(bParam2, 3.984539E+18f))
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
				func_592(iVar0, iParam3);
			}
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(bVar1) == 6.698816E+28f && func_19(bParam2, -234.3313f))
		{
			func_1031(uParam0, iVar0, iParam3);
		}
		else if (bVar2)
		{
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 34;
	if (8.292232E+24f == func_145(uParam0->f_1[iVar0 /*3*/]))
	{
		func_592(16, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -4.282854E-21f))
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_145(bVar1) == 1.825867E+25f)
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
}

void func_934(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	if (func_584() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/] && func_145(uParam0->f_1[18 /*3*/]) != 3.381578E-06f)
		{
			uParam0->f_1[iVar0 /*3*/] = func_925(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_940(uParam0, iParam3, 1, 0);
		}
		else if (func_19(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
	func_592(iVar0, iParam3);
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (func_19(bVar1, 8.399988f) && func_19(bParam2, 7.029633E-22f))
		{
			func_1031(uParam0, iVar0, iParam3);
		}
	}
}

void func_935(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	func_592(36, iParam2);
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	if (func_584() == 4.387347E-38f)
	{
		iVar0 = 16;
		if (uParam0->f_1[iVar0 /*3*/] == Global_1953279.f_83[iVar0 /*12*/])
		{
			iVar0 = 16;
			uParam0->f_1[iVar0 /*3*/] = func_925(Global_1953279.f_83[iVar0 /*12*/].f_9, 0);
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam2);
		}
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (bVar1 != Global_1953279.f_83[iVar0 /*12*/] && func_19(bVar1, 2.801708E-26f))
	{
		func_1031(uParam0, iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && 1.825867E+25f == func_145(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

void func_936(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_145(bVar1) == 2.209101E-28f)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 18;
	bVar1 = uParam0->f_1[iVar0 /*3*/];
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_145(bVar1) == 3.381578E-06f)
		{
			if (uParam0->f_1[iVar0 /*3*/].f_1 != 1808.893f)
			{
				uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
				func_592(iVar0, iParam3);
			}
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
			uParam0->f_1[iVar0 /*3*/].f_1 = 0;
			func_592(iVar0, iParam3);
		}
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_940(uParam0, iParam3, 1, 0);
		}
		else if (func_19(bParam2, 2.896282E+23f))
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
		}
	}
}

void func_937(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 20;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1031(uParam0, iVar0, iParam2);
	}
	iVar0 = 21;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 16;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 29;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 35;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		if (func_19(uParam0->f_1[iVar0 /*3*/], -5.428462E-37f))
		{
			func_940(uParam0, iParam2, 1, 0);
		}
		else
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = 1808.893f;
			func_592(iVar0, iParam2);
		}
	}
}

void func_938(var uParam0, bool bParam1, bool bParam2, int iParam3)
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
		func_592(iVar0, iParam3);
	}
	iVar0 = 36;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
		func_592(iVar0, iParam3);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && func_19(bParam2, -9.697137E-08f))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
	iVar0 = 18;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		bVar1 = uParam0->f_1[iVar0 /*3*/];
		if (3.381578E-06f == func_145(bVar1) && uParam0->f_1[iVar0 /*3*/].f_1 != -1.366178E-36f)
		{
			uParam0->f_1[iVar0 /*3*/].f_1 = -1.366178E-36f;
			func_592(iVar0, iParam3);
		}
	}
}

void func_939(var uParam0, bool bParam1, bool bParam2, int iParam3)
{
	int iVar0;

	if (bParam1)
	{
		return;
	}
	iVar0 = 37;
	if (func_19(bParam2, -9.697137E-08f) && uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam3);
	}
}

void func_940(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 36;
	if (bParam2)
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam1);
	}
	iVar0 = 37;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam1);
	}
	iVar0 = 38;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/])
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam1);
	}
	iVar0 = 35;
	if (bParam3 && -494711.9f == func_145(uParam0->f_1[iVar0 /*3*/]))
	{
		uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam1);
	}
}

void func_941(var uParam0, int iParam1, int iParam2)
{
	Global_17418.f_55.f_664.f_33[iParam2 /*120*/].f_1.f_1[iParam1 /*3*/] = { *uParam0 };
}

void func_942(var uParam0, int iParam1)
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
		func_941(&(uParam0->f_1[iVar0 /*3*/]), iVar0, iParam1);
		iVar0++;
	}
}

void func_943(int iParam0, int iParam1, int iParam2)
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

bool func_944(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_1032(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_1033())
	{
		return func_1032(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_1032(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_945(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_946(int iParam0)
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
		func_1034(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_1035(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_947(var uParam0)
{
	func_800(uParam0, 8.505438E-34f);
	if (func_584() == 3.272964E+34f)
	{
		func_800(uParam0, 8.967694E-17f);
	}
	else
	{
		func_800(uParam0, 1.721179E-28f);
	}
}

void func_948(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_1036(uParam0))
	{
		return;
	}
	if (Global_1292096.f_2539 < 20)
	{
		Global_1292096.f_2539++;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			Global_1292096.f_2539.f_1[iVar0 /*22*/] = { Global_1292096.f_2539.f_1[iVar0 + 1 /*22*/] };
			iVar0++;
		}
	}
	Var1.f_7.f_3.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	Global_1292096.f_2539.f_1[(Global_1292096.f_2539 - 1) /*22*/] = { Var1 };
}

bool func_949(bool bParam0)
{
	var uVar0;

	if (func_37() != -1)
	{
		return false;
	}
	if (func_643(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_952(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_295(bParam0, 1);
}

void func_950(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_142(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_809(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_960(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_263(bParam0, 0, 0, 0) == 0))
		{
			if (func_37() == -1)
			{
				func_810(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_424(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_951(bool bParam0, int iParam1)
{
	if (func_19(bParam0, 7.644572E-37f))
	{
		func_649(bParam0, -982726.7f, iParam1, 1);
	}
}

bool func_952(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_1037(&bParam0);
	if (!func_17(bParam0, 0) && !func_281(func_105(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_317(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_409(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_401(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_403(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_404(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_402(bParam0, 1))
		{
			if (!func_403(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_404(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_497(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_368(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_953()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_203(Global_33, 8.330918E+10f)) && !func_203(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_954(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_955(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_956(int iParam0)
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

void func_957(int iParam0)
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
			func_1038(1);
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
			func_1039(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_1039(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_1039(3);
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
			func_1040(1);
			break;
		case 33:
			func_1041(1);
			break;
		case 34:
			func_1042(1);
			break;
		case 35:
			break;
		case 36:
			func_1043(0);
			break;
		case 37:
			func_1044(0);
			break;
		case 38:
			func_1045(0);
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
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_164(677, 0);
			break;
		case 3:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_164(678, 0);
			break;
		case 4:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_164(679, 0);
			break;
		case 5:
			if (func_895() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_1046("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_164(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_37() == -1)
			{
				if (!func_295(0.01458261f, 1))
				{
					func_813(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_37() == -1)
			{
				if (!func_295(0.01458261f, 1))
				{
					func_813(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_295(7.734759E-34f, 1))
				{
					func_813(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_37() == -1)
			{
				if (!func_295(1.044822E-10f, 1))
				{
					func_813(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_37() == -1)
			{
				if (!func_295(1.044822E-10f, 1))
				{
					func_813(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_295(-1.840652E+20f, 1))
				{
					func_813(-1.840652E+20f, 1, 6.028273E-12f);
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

int func_958(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_1047(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_959(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_VISIBLE(iVar0))
	{
		return true;
	}
	return false;
}

bool func_960(bool bParam0)
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

void func_961(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_1048(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_962(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_317(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_167(bParam0, 0, 0) };
	if (func_952(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_170(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_963(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_17(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_952(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_170(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_199(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_964(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		return;
	}
	if (WEAPON::IS_WEAPON_BOW(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::IS_WEAPON_PISTOL(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_RIFLE(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_33, sVar0, bParam0);
	iVar2 = func_1003();
	func_1022(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_965(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_727(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, 0.0001101296f) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		if (WEAPON::_IS_WEAPON_SNIPER(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::GET_WEAPON_CLIP_SIZE(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

bool func_966()
{
	return false;
}

bool func_967(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_968(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_969(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_805(49))
			{
				if (!func_805(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_805(50))
			{
				if (!func_805(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

int func_970(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_37() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_295(6.217872E+26f, 1))
	{
		fVar0 = (fVar0 + 1036831949);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_LOOT_TABLES_GET_INFO(Global_33, true, true, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (Var1.f_1[iVar24] == 3.996812E+36f)
		{
			return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = Var1.f_1[iVar24];
			if (func_17(bVar25, 0) && func_19(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_971(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_1049(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_653(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_972(int iParam0, bool bParam1, float fParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1050() || func_1051())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_653(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_653(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_416(func_654(6.480143E+20f), iVar1);
	}
}

char* func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		case 7:
			return "PROVISION_FISH_MUSKIE";
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		case 9:
			return "PROVISION_FISH_PERCH";
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

float func_974(bool bParam0)
{
	var uVar0;

	if (!func_702(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_975(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_17(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 9.275179E-19f;
	bVar1 = iParam4 == 1.994827E+33f;
	bVar2 = iParam4 == -1.202057E-11f;
	if (!func_1052(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_425(bParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_496(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var3, iParam2);
		}
		else if ((func_496(iParam0, bParam1) - iParam2) < 0)
		{
			func_975(iParam0, bParam1, func_263(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_1053(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 6.236711E+08f)
	{
		func_424(bParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_976(bool bParam0)
{
	if (!func_17(bParam0, 0))
	{
		return false;
	}
	return (func_19(bParam0, 2.062334E+22f) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0));
}

int func_977(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1.194836E+10f;
		case 1:
			return 4.055176E+26f;
		case 2:
			return -3.457366E-20f;
		case 3:
			return -8.795801E-36f;
		case 4:
			return -3.308018E-18f;
		case 5:
			return 2.795243E-08f;
		case 6:
			return 5.734056E+37f;
		case 7:
			return 3853674f;
		case 8:
			return -1.461989E-28f;
		case 9:
			return -4.858591E+07f;
		case 10:
			return 2.221196E+19f;
		case 11:
			return -4.295577E+13f;
		case 12:
			return 1.911961E-22f;
		case 13:
			return 3.139678E+30f;
		case 14:
			return -3.728146E-26f;
		case 15:
			return 1231.501f;
		case 16:
			return -8.745965E-18f;
		case 17:
			return -2.258776E+10f;
		case 18:
			return -1.94087E-27f;
		case 19:
			return -1.195941E+15f;
		case 20:
			return -49.82191f;
		case 21:
			return 2.302372E-30f;
		case 22:
			return 7.905129E+20f;
		case 23:
			return 5.728365E-21f;
		case 24:
			return 1.460571E+23f;
		case 25:
			return 8.215854E-14f;
		case 26:
			return -5.073168E-21f;
		case 27:
			return -2.286124E-11f;
		case 28:
			return -1.972748E+35f;
		case 29:
			return 1.734036E+32f;
		case 30:
			return 1.771673E+35f;
		case 31:
			return -4.437462E+24f;
		case 32:
			return 4.342694E+18f;
		case 33:
			return 2.829782E+32f;
		case 34:
			return -6.2863E+36f;
		case 35:
			return -5.785817E+27f;
		case 36:
			return -0.1998578f;
		case 37:
			return 4.817691E-19f;
		case 38:
			return -3574.054f;
		case 39:
			return -2.672498E-17f;
		case 40:
			return -5.907457E+21f;
		case 41:
			return 1.708896E+26f;
		case 42:
			return 1.699111E+26f;
		case 43:
			return -3.646661E-09f;
		case 44:
			return 7.410287E+23f;
		case 45:
			return 2.503326E+14f;
		case 46:
			return 812.7377f;
		case 47:
			return 7.134456E-36f;
		case 48:
			return 1.679955E-15f;
		case 49:
			return 1.428375E-34f;
		case 50:
			return -6.520972E+29f;
		case 51:
			return -4.967419E-26f;
		case 52:
			return -2.712444E-18f;
		case 53:
			return -9.707605E-07f;
		case 54:
			return -126944f;
		case 55:
			return -6.237682E+27f;
		case 56:
			return -1.328089E-05f;
		case 57:
			return 8.244146E-06f;
		case 58:
			return 4.499003E-09f;
		case 59:
			return 1.188311E-24f;
		case 60:
			return 4.739307E-31f;
		case 61:
			return -5.902858f;
		case 62:
			return 6.596709E+23f;
		case 63:
			return 0.01076391f;
		case 64:
			return 3.785639E+07f;
		case 65:
			return -3.701612E-07f;
		case 66:
			return -19631.1f;
		case 67:
			return 5.404696E+36f;
		case 68:
			return 6.272749E-09f;
		case 69:
			return 1.6529E+19f;
		case 70:
			return -4.269119E+14f;
		case 71:
			return -2076914f;
		case 72:
			return -4.169777E+17f;
		case 73:
			return -9.517757E-32f;
		case 74:
			return -1.997975E-17f;
		case 75:
			return -1921687f;
		case 76:
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

bool func_978(bool bParam0)
{
	if (!func_840(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_979(bool bParam0, int iParam1)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BEAVER_FUR"):
			return 3;
		case -1946740647:
			return 73;
		case joaat("PROVISION_BOAR_SKIN_PRISTINE"):
			return 8;
		case joaat("PROVISION_DEER_HIDE"):
			return 18;
		case joaat("PROVISION_COUGAR_FUR_PRISTINE"):
			return 14;
		case -1787430524:
			return 51;
		case joaat("PROVISION_GOAT_HAIR_PRISTINE"):
			return 26;
		case joaat("PROVISION_ALLIGATOR_SKIN_PRISTINE"):
			return 2;
		case -1572330336:
			return 52;
		case joaat("PROVISION_BEAVER_FUR_POOR"):
			return 4;
		case joaat("PROVISION_COYOTE_FUR_POOR"):
			return 16;
		case -1548204069:
			return 74;
		case joaat("PROVISION_PRONGHORN_FUR_PRISTINE"):
			return 39;
		case joaat("PROVISION_JAVELINA_SKIN"):
			return 27;
		case joaat("PROVISION_SHEEP_WOOL"):
			return 43;
		case -1262044528:
			return 65;
		case -1249752300:
			return 53;
		case -1218522879:
			return 56;
		case joaat("PROVISION_PIG_SKIN_PRISTINE"):
			return 36;
		case -1061362634:
			return 61;
		case joaat("PROVISION_DEER_HIDE_PRISTINE"):
			return 20;
		case joaat("PROVISION_PRONGHORN_FUR_POOR"):
			return 38;
		case -963027403:
			return 66;
		case -940052481:
			return 54;
		case -907373381:
			return 75;
		case -906131571:
			return 71;
		case joaat("PROVISION_BUCK_FUR"):
			return 9;
		case joaat("PROVISION_ALLIGATOR_SKIN"):
			return 0;
		case joaat("PROVISION_COYOTE_FUR_PRISTINE"):
			return 17;
		case joaat("PROVISION_BUCK_FUR_PRISTINE"):
			return 11;
		case -675142890:
			return 70;
		case joaat("PROVISION_DEER_HIDE_POOR"):
			return 19;
		case -591844128:
			return 72;
		case joaat("PROVISION_RAM_HIDE"):
			return 40;
		case joaat("PROVISION_PANTHER_FUR"):
			return 31;
		case joaat("PROVISION_PIG_SKIN_POOR"):
			return 35;
		case -308200059:
			return 55;
		case -251416414:
			return 50;
		case joaat("PROVISION_JAVELINA_SKIN_POOR"):
			return 28;
		case joaat("PROVISION_PIG_SKIN"):
			return 34;
		case 0:
			return 76;
		case joaat("PROVISION_WOLF_FUR_POOR"):
			return 47;
		case 121494806:
			return 49;
		case 219794592:
			return 60;
		case joaat("PROVISION_FOX_FUR"):
			return 21;
		case 397926876:
			return 59;
		case joaat("PROVISION_COUGAR_FUR"):
			return 12;
		case joaat("PROVISION_FOX_FUR_PRISTINE"):
			return 23;
		case joaat("PROVISION_PRONGHORN_FUR"):
			return 37;
		case joaat("PROVISION_WOLF_FUR_PRISTINE"):
			return 48;
		case joaat("PROVISION_GOAT_HAIR_POOR"):
			return 25;
		case 832214437:
			return 58;
		case 836208559:
			return 68;
		case joaat("PROVISION_BEAVER_FUR_PRISTINE"):
			return 5;
		case 923422806:
			return 57;
		case 1009802015:
			return 63;
		case joaat("PROVISION_WOLF_FUR"):
			return 46;
		case joaat("PROVISION_COYOTE_FUR"):
			return 15;
		case joaat("PROVISION_BOAR_SKIN_POOR"):
			return 7;
		case 1276143905:
			return 64;
		case joaat("PROVISION_SHEEP_WOOL_PRISTINE"):
			return 45;
		case joaat("PROVISION_PANTHER_FUR_POOR"):
			return 32;
		case 1600479946:
			return 69;
		case joaat("PROVISION_BUCK_FUR_POOR"):
			return 10;
		case joaat("PROVISION_FOX_FUR_POOR"):
			return 22;
		case joaat("PROVISION_GOAT_HAIR"):
			return 24;
		case 1728819413:
			return 62;
		case joaat("PROVISION_SHEEP_WOOL_POOR"):
			return 44;
		case joaat("PROVISION_RAM_HIDE_PRISTINE"):
			return 42;
		case joaat("PROVISION_RAM_HIDE_POOR"):
			return 41;
		case joaat("PROVISION_ALLIGATOR_SKIN_POOR"):
			return 1;
		case joaat("PROVISION_COUGAR_FUR_POOR"):
			return 13;
		case joaat("PROVISION_JAVELINA_SKIN_PRISTINE"):
			return 29;
		case joaat("PROVISION_PANTHER_FUR_PRISTINE"):
			return 33;
		case joaat("PROVISION_LOANSHARK_SKINS"):
			return 30;
		case 2088901891:
			return 67;
		case joaat("PROVISION_BOAR_SKIN"):
			return 6;
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

bool func_980(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	iVar1 = iVar0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return false;
	}
	if (func_981(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_981(iVar1, bParam1))
	{
		iVar2 = func_981(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1289628[iVar1 /*19*/] = (Global_1289628[iVar1 /*19*/] - iVar2);
	}
	else
	{
		Global_1289628[iVar1 /*19*/].f_1 = (Global_1289628[iVar1 /*19*/].f_1 - iVar2);
	}
	if (func_981(iVar1, bParam1) < 0)
	{
		if (!bParam1)
		{
			Global_1289628[iVar1 /*19*/] = 0;
		}
		else
		{
			Global_1289628[iVar1 /*19*/].f_1 = 0;
		}
	}
	else if (func_981(iVar1, bParam1) > func_982(bParam1))
	{
		if (!bParam1)
		{
			Global_1289628[iVar1 /*19*/] = func_982(bParam1);
		}
		else
		{
			Global_1289628[iVar1 /*19*/].f_1 = func_982(bParam1);
		}
	}
	return true;
}

int func_981(int iParam0, bool bParam1)
{
	return func_1054(bParam1, Global_1289628[iParam0 /*19*/].f_1, Global_1289628[iParam0 /*19*/]);
}

int func_982(bool bParam0)
{
	return func_1054(bParam0, Global_1901671.f_698.f_30, Global_1901671.f_698.f_29);
}

void func_983()
{
	struct<9> Var0;

	Var0 = 7;
	Var0.f_8 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Local_0, &Var0, 13);
}

void func_984(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

int func_985(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8 = 0;
			break;
		case 1:
			uParam0->f_8 = (uParam0->f_10 - 1);
			break;
		default:
			return 0;
	}
	return 1;
}

bool func_986(var uParam0, int iParam1)
{
	if (!func_1055(uParam0))
	{
		return false;
	}
	if (iParam1 != 0)
	{
		(*uParam0)[uParam0->f_8] = iParam1;
		if (!func_1056(uParam0))
		{
		}
		return true;
	}
	return false;
}

int func_987(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (uParam0->f_9)
	{
		case 0:
			return uParam0->f_8;
		case 1:
			iVar0 = ((uParam0->f_10 - uParam0->f_8) - 1);
			if (iVar0 < 0)
			{
				iVar0 = 0;
			}
			else if (iVar0 != uParam0->f_10)
			{
			}
			break;
	}
	return iVar0;
}

bool func_988()
{
	if (Local_0.f_11 < 0 || Local_0.f_11 >= 7)
	{
		return false;
	}
	if (Local_0.f_9 == 0)
	{
		if (Local_0.f_11 >= func_987(&Local_0))
		{
			return false;
		}
	}
	return true;
}

int func_989(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_715(Param0);
	}
	return -1;
}

int func_990(int iParam0)
{
	if (!func_244(iParam0))
	{
		return -1;
	}
	if (iParam0 == 40 && func_668() == 139)
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

int func_991(int iParam0)
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
	else if (iParam0 <= 122)
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

bool func_992(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_516(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1057(bParam0, iParam1);
	}
	return true;
}

void func_993(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_145((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_994(int iParam0)
{
	switch (iParam0)
	{
		case joaat("CI_TAG_FOLDER_CIG_CARD_SPT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_AML_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GUN_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_GRL_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_LND_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ACT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PLT_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_INV_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_ART_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_PAM_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_HOR_SET"):
		case joaat("CI_TAG_FOLDER_CIG_CARD_VEH_SET"):
			return true;
	}
	return false;
}

bool func_995(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_996(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_1058(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_997(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_998()
{
	return Global_1072759.f_28418[32 /*4*/].f_3;
}

struct<8> func_999(vector3 vParam0, var uParam3, var uParam4, int iParam5, int iParam6)
{
	struct<8> Var0;

	vParam0.f_2 = iParam5;
	if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, &vParam0))
	{
	}
	return Var0;
}

bool func_1000()
{
	return !Global_1572887.f_10;
}

int func_1001(int iParam0)
{
	return func_1060(func_1059(iParam0));
}

bool func_1002(int iParam0)
{
	float fVar0;

	fVar0 = (func_1061(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

int func_1003()
{
	return Global_1902565;
}

void func_1004(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_1062(*iParam0);
	iVar1 = func_1063(*iParam0);
	iVar2 = func_1064(*iParam0);
	iVar3 = func_1065(*iParam0);
	iVar4 = func_1066(*iParam0);
	iVar5 = func_1067(*iParam0);
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
		iVar7 = func_1068(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_1069(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1005(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1001(2);
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

int func_1006(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1001(2);
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

bool func_1007(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1070(iParam1) || !func_1070(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_1008(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
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

void func_1009(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
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

bool func_1010(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_1071(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_1011(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
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

void func_1012(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_1072(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_1073(iParam1), fParam2, -1);
	}
}

void func_1013(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_1001(2);
	}
	uVar0 = Global_1295619.f_16;
	func_1074(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_1075(iParam0, uVar0, iParam3);
	}
}

bool func_1014(int iParam0)
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

char* func_1015(int iParam0)
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

void func_1016(int iParam0)
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
		iVar3 = func_1076(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_1077(iVar0);
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

void func_1017(int iParam0, bool bParam1, bool bParam2)
{
	func_904(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

bool func_1018(int iParam0, bool bParam1)
{
	return func_1007(func_1003(), iParam0, bParam1);
}

float func_1019(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_1001(1);
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

int func_1020(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

float func_1021(float fParam0, float fParam1, float fParam2)
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

void func_1022(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_1062(*iParam0);
	iVar1 = func_1063(*iParam0);
	iVar2 = func_1064(*iParam0);
	iVar3 = func_1065(*iParam0);
	iVar4 = func_1066(*iParam0);
	iVar5 = func_1067(*iParam0);
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
	iVar6 = func_1068(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_1068(iVar1, iVar0);
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
	func_1069(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_1023(int iParam0, float fParam1, int iParam2)
{
	if (!func_1078(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
	}
	func_1079(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

int func_1024(int iParam0)
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

void func_1025(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1080(&(uParam0->f_1[iVar0 /*3*/]), 2))
		{
			if (func_1081(iVar0, iParam1))
			{
				vVar4 = { func_1082(iVar0, -1) };
				if (((!bParam4 && vVar4.x != Global_1953279.f_83[iVar0 /*12*/]) && vVar4.x != 0) && (uParam0->f_1[iVar0 /*3*/] != vVar4.x || uParam0->f_1[iVar0 /*3*/].f_1 != vVar4.y))
				{
					uParam0->f_1[iVar0 /*3*/] = { vVar4 };
				}
				if (func_1083(iVar0, 4))
				{
					func_1084(iVar0, 4, 6);
				}
			}
			else
			{
				if (bParam3)
				{
					func_1085(iVar0, 4, 6);
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

void func_1026(bool bParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[func_361(bParam0, 1) /*12*/].f_11 = (Global_1953279.f_83[func_361(bParam0, 1) /*12*/].f_11 || iParam1);
}

bool func_1027(bool bParam0)
{
	float fVar0;
	var uVar1;

	Global_1953279.f_1039.f_2 = 0;
	fVar0 = 655621.5f;
	func_914(&(Global_1953279.f_1039), fVar0, -4.642217E+25f, 2.24243E+12f, 1, bParam0);
	DATAFILE::_PARSEDDATA_GET_FILE(&(Global_1953279.f_1039));
	if (!DATAFILE::_PARSEDDATA_GET_SECTION(&uVar1, &(Global_1953279.f_1039), 2.24243E+12f))
	{
		return false;
	}
	return true;
}

int func_1028(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_17(bParam0, 0))
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

void func_1029(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;

	if (func_19(uParam0->f_1[34 /*3*/], -7.339854E+32f))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 39)
	{
		bVar1 = func_1083(iVar0, 16);
		if (bVar1)
		{
			func_1084(iVar0, 16, 9);
		}
		if (Global_1953279.f_83[iVar0 /*12*/].f_3[0] == -1.473351E-26f || uParam0->f_1[iVar0 /*3*/] == 0)
		{
		}
		else
		{
			if (bVar1)
			{
				func_592(iVar0, iParam3);
			}
			if (!bParam2 && func_1028(uParam0->f_1[iVar0 /*3*/]) != 0)
			{
			}
			else if (func_1081(iVar0, iParam1) && !bVar1)
			{
				uParam0->f_1[iVar0 /*3*/] = Global_1953279.f_83[iVar0 /*12*/];
				uParam0->f_1[iVar0 /*3*/].f_1 = 0;
				func_594(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 1, iParam3);
				func_592(iVar0, iParam3);
			}
			else if (bVar1 && !bParam2)
			{
				func_594(uParam0, uParam0->f_1[iVar0 /*3*/], iVar0, 0, iParam3);
			}
		}
		iVar0++;
	}
}

int func_1030(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<10> Var1;
	int iVar15;
	int iVar16;

	Var1.f_9 = -5.45926E-19f;
	iVar16 = 0;
	if (func_584() == 4.387347E-38f)
	{
		iVar16 = 1;
	}
	iParam2 |= 28;
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (!func_239(&Var1, iVar0, iParam0, iParam1))
		{
		}
		else if (func_1086(Var1.f_4) && PED::_GET_SHOP_ITEM_COMPONENT_CATEGORY(Var1.f_4, iVar16, true) == 0)
		{
		}
		else if (func_1028(Var1.f_4) != 0)
		{
		}
		else if (func_19(Var1.f_4, -7.339854E+32f))
		{
		}
		else if (func_19(Var1.f_4, 4.422284E-20f))
		{
		}
		else
		{
			iVar15 = func_145(Var1.f_4);
			if (func_1088(iParam2, func_1087(iVar15)))
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

void func_1031(var uParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (func_19(uParam0->f_1[iParam1 /*3*/], 1.280781E-26f))
	{
		func_760(uParam0, uParam0->f_1[iParam1 /*3*/]);
	}
	else
	{
		uParam0->f_1[iParam1 /*3*/] = Global_1953279.f_83[iParam1 /*12*/];
		uParam0->f_1[iParam1 /*3*/].f_1 = 0;
		func_592(iParam1, iParam2);
	}
	iVar0 = 17;
	if (uParam0->f_1[iVar0 /*3*/] != Global_1953279.f_83[iVar0 /*12*/] && uParam0->f_1[iVar0 /*3*/].f_1 == 1.494364E-28f)
	{
		uParam0->f_1[iVar0 /*3*/].f_1 = 0;
		func_592(iVar0, iParam2);
	}
}

bool func_1032(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1033()
{
	return Global_1102813.f_3672;
}

void func_1034(int iParam0)
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
	func_1035(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_1035(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_1036(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_1037(bool bParam0)
{
	if (!func_17(*bParam0, 0))
	{
		return 0;
	}
	if (!func_1089(*bParam0))
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

void func_1038(bool bParam0)
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

void func_1039(int iParam0)
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

void func_1040(bool bParam0)
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

void func_1041(bool bParam0)
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

void func_1042(bool bParam0)
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

void func_1043(bool bParam0)
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

void func_1044(bool bParam0)
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

void func_1045(bool bParam0)
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

int func_1046(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
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

int func_1047(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_1090(iParam2, -3.005759E+25f);
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
	func_1091(uParam1, bParam0, Var3);
	return 1;
}

int func_1048(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

void func_1049(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_1092())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_1050()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_1051()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_1052(int iParam0, bool bParam1, int iParam2)
{
	if (!func_17(bParam1, 0))
	{
		return false;
	}
	return func_496(iParam0, bParam1) >= iParam2;
}

int func_1053(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_17(bParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_857(iParam0) };
	Var5 = { func_858(iParam0, bParam1, Var0, Var0.f_4) };
	return func_1093(iParam0, bParam1, &Var5, iParam2, iParam3, bParam4);
}

int func_1054(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

bool func_1055(var uParam0)
{
	if (uParam0->f_8 < 0 || uParam0->f_8 >= 7)
	{
		return false;
	}
	return true;
}

bool func_1056(var uParam0)
{
	switch (uParam0->f_9)
	{
		case 0:
			uParam0->f_8++;
			break;
		case 1:
			if (uParam0->f_10 <= 0)
			{
				return false;
			}
			uParam0->f_8 = (uParam0->f_8 - 1);
			break;
		default:
			return false;
	}
	return true;
}

bool func_1057(bool bParam0, int iParam1)
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

void func_1058(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_1094(&(uParam0->f_4));
}

bool func_1059(int iParam0)
{
	return func_1032(&(Global_1956862.f_1565), iParam0, 1);
}

int func_1060(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_1061(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_1095(2)));
}

int func_1062(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_1054(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_1063(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_1064(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_1065(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_1066(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_1067(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_1068(int iParam0, int iParam1)
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

void func_1069(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1096(iParam0, iParam6);
	func_1097(iParam0, iParam5);
	func_1098(iParam0, iParam4);
	func_1099(iParam0, iParam3);
	func_1100(iParam0, iParam2);
	func_1101(iParam0, iParam1);
}

bool func_1070(int iParam0)
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
	iVar0 = func_1067(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_1066(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_1065(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_1062(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_1063(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_1064(iParam0);
	if (iVar5 < 1 || iVar5 > func_1068(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_1071(int iParam0)
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

char* func_1072(int iParam0)
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

char* func_1073(int iParam0)
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

void func_1074(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
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

void func_1075(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_1001(2);
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

int func_1076(int iParam0, int iParam1)
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

int func_1077(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_1102(iParam0))
	{
		return 0;
	}
	iVar0 = func_1076(iParam0, 1);
	if (!func_1103(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_1104(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_1105(iParam0, iVar1))
		{
			case 0:
				func_1106(iVar1, iParam0, iVar4);
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
						func_1106(iVar1, iParam0, iVar4);
						func_1107(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_1107(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_1108(iVar1, 1);
				func_1109(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_1110(iVar2, 0);
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
			func_1111(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_1078(int iParam0)
{
	if (func_1014(iParam0))
	{
		return true;
	}
	else if (func_1112(iParam0))
	{
		return true;
	}
	return false;
}

void func_1079(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_1001(1);
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

bool func_1080(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_1081(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 39)
	{
		return false;
	}
	return (Global_1953279.f_83[iParam0 /*12*/].f_10 && iParam1) != 0;
}

Vector3 func_1082(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = Global_17418.f_55.f_664.f_1777;
	}
	return Global_17418.f_55.f_664.f_33[iParam1 /*120*/].f_1.f_1[iParam0 /*3*/];
}

bool func_1083(int iParam0, int iParam1)
{
	return (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1) != 0;
}

void func_1084(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 - (Global_1953279.f_83[iParam0 /*12*/].f_11 && iParam1));
}

void func_1085(int iParam0, int iParam1, int iParam2)
{
	Global_1953279.f_83[iParam0 /*12*/].f_11 = (Global_1953279.f_83[iParam0 /*12*/].f_11 || iParam1);
}

bool func_1086(bool bParam0)
{
	return (((bParam0 != 9.94413E+23f && bParam0 != -3.916588E+30f) && bParam0 != 2.515798E+09f) && !func_833(bParam0));
}

int func_1087(int iParam0)
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

bool func_1088(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1089(bool bParam0)
{
	return func_19(bParam0, 5.168749E+07f);
}

void func_1090(int iParam0, int iParam1)
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

void func_1091(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_1036(uParam0))
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

bool func_1092()
{
	return Global_1913431.f_127 == 0;
}

int func_1093(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_542(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_1113(iParam0, *iParam2, &Var0, 0))
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

void func_1094(var uParam0)
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

int func_1095(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_896(2) * 2;
		case 1:
			return func_900(2) * 2;
		case 2:
			return func_898(2) * 2;
		default:
			break;
	}
	return -1;
}

void func_1096(int iParam0, int iParam1)
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

void func_1097(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_1098(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1063(*iParam0);
	iVar1 = func_1062(*iParam0);
	if (iParam1 < 1 || iParam1 > func_1068(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_1099(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_1100(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_1101(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_1102(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_1103(int iParam0)
{
	int iVar0;

	iVar0 = func_1104(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

int func_1104(int iParam0, int iParam1)
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

int func_1105(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1114(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_1108(iParam1, 1);
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

int func_1106(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_1102(iParam1))
	{
		return 0;
	}
	if (!func_1115(iParam0))
	{
		return 0;
	}
	iVar0 = func_1108(iParam0, 1);
	func_1116(iParam0, iParam1, iParam2);
	if (func_1117(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_1118(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_1119(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_1120(vVar1))
		{
			if (func_1121(vVar1.x, vVar1.y, vVar1.z))
			{
				func_1122(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_1123(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_1123(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_1107(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_1108(int iParam0, int iParam1)
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

void func_1109(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_1110(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_1111(var uParam0)
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

bool func_1112(int iParam0)
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

bool func_1113(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

int func_1114(int iParam0)
{
	if (func_1124(iParam0))
	{
		return (func_1125(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_1115(int iParam0)
{
	int iVar0;

	iVar0 = func_1108(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

int func_1116(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1076(iParam1, 1);
	iVar1 = func_1108(iParam0, 1);
	iVar2 = func_1104(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_1126(iVar3, 1);
		if (!func_1127(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_1128(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1129(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1130(iVar6))
		{
		}
		else
		{
			iVar8 = func_1131(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_1132(iVar6);
			}
		}
		iVar7++;
	}
	return 1;
}

bool func_1117(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_1118(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1115(iParam0))
	{
		return false;
	}
	if (!func_1133(iParam1))
	{
		return false;
	}
	iVar0 = func_1134(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_1119(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_1135(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_1120(vector3 vParam0)
{
	if (!func_1115(vParam0.x))
	{
		return false;
	}
	if (!func_1102(vParam0.y))
	{
		return false;
	}
	if (!func_1136(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_1121(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_1076(iParam1, 1);
	iVar1 = func_1108(iParam0, 1);
	iVar2 = func_1104(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_1126(iVar3, 1);
		if (!func_1127(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_1128(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_1137(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_1130(iVar6))
		{
		}
		else if (!func_1138(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_1131(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_1139(iVar6);
			}
		}
		iVar7++;
	}
	func_1140(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_1122(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_1133(iParam0))
	{
		return;
	}
	iVar0 = func_1134(iParam0, 1);
	if (!func_1115(iParam1))
	{
		return;
	}
	if (!func_1102(iParam2))
	{
		return;
	}
	if (!func_1136(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_1123(int iParam0)
{
	int iVar0;

	if (!func_1133(iParam0))
	{
		return;
	}
	iVar0 = func_1134(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_1124(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

int func_1125(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (func_1124(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_1141(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_1142(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_1143(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_1144(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_1145(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_1146(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_1126(int iParam0, int iParam1)
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

bool func_1127(int iParam0)
{
	int iVar0;

	iVar0 = func_1126(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_1128(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_1147(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_1129(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1127(iParam0))
	{
		return;
	}
	iVar0 = func_1126(iParam0, 1);
	if (!func_1148(Global_1156096.f_2169[iVar0 /*205*/]))
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
	if (!func_1149(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1150(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_1130(int iParam0)
{
	int iVar0;

	iVar0 = func_1131(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_1131(int iParam0, int iParam1)
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

void func_1132(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_1151();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1152();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_164(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_1153(iParam0));
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
			func_1155(func_1154(iParam0));
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
			func_1156();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1148(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1148(16);
			break;
	}
}

bool func_1133(int iParam0)
{
	int iVar0;

	iVar0 = func_1134(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1134(int iParam0, int iParam1)
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

int func_1135(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_1157(iParam0);
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
		iVar64 = func_1108(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_1158(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_1159(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
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

bool func_1136(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

void func_1137(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_1127(iParam0))
	{
		return;
	}
	iVar0 = func_1126(iParam0, 1);
	if (!func_1148(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_1149(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_1150(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_1138(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_1160(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_1139(int iParam0)
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
			func_1151();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_1152();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_164(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_1153(iParam0));
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
			iVar2 = func_1154(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1161(iParam0, 0));
			func_1162(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1161(iParam0, 1));
			func_1162(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1161(iParam0, 2));
			func_1162(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_1161(iParam0, 3));
			func_1162(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_1154(iParam0);
			func_1162(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_1154(iParam0);
			func_1162(iVar2, 4, 1, -1, 0);
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
			func_1163();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_1148(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_1148(16);
			break;
	}
}

void func_1140(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_1164(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_1165(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

bool func_1141(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_1142(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_1143(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_1144(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_1145(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_1146(int iParam0)
{
	int iVar0;

	iVar0 = func_1076(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

float func_1147(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_1166(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_1148(int iParam0)
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

bool func_1149(int iParam0)
{
	int iVar0;

	iVar0 = func_1150(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_1150(int iParam0, int iParam1)
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

void func_1151()
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
		if (!func_89(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_1152()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_1153(int iParam0)
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

int func_1154(int iParam0)
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

void func_1155(int iParam0)
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

void func_1156()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

int func_1157(int iParam0)
{
	int iVar0;

	if (!func_1133(iParam0))
	{
		return -1;
	}
	iVar0 = func_1134(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_1158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_1115(iParam0))
	{
		return false;
	}
	iVar0 = func_1108(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_1117(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_1134(iVar2, 1) /*3*/];
		Var4 = { func_1159(iVar3) };
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
			if (!func_540() && !func_1167())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_540())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_1114(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_1114(iParam1);
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
			iVar1 = func_1114(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_795(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_786(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_1114(iParam1);
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

struct<31> func_1159(int iParam0)
{
	int iVar0;

	iVar0 = func_1108(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_1160(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_1166(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_1161(int iParam0, int iParam1)
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

void func_1162(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_1163()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_1164(int iParam0)
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

char* func_1165(int iParam0)
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

bool func_1166(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_1168(iVar7);
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

bool func_1167()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_391(func_390(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_461(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

int func_1168(int iParam0)
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

