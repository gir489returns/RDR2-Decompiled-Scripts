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
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	bVar0 = false;
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !bVar0)
	{
		func_2();
		func_3();
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	var uVar0;

	Global_1940239.f_1556.f_4168.f_10 = uVar0;
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_2()
{
	if (func_4())
	{
		Global_1940239.f_1556.f_4168.f_2088 = 1;
	}
	else if (Global_1940239.f_1556.f_4168.f_2088)
	{
		func_5(Global_1940239.f_1556.f_4168.f_10);
		Global_1940239.f_1556.f_4168.f_2088 = 0;
	}
}

void func_3()
{
	struct<4> Var0;
	float fVar4;
	int iVar5;
	struct<36> Var6;
	struct<5> Var43;
	bool bVar48;

	fVar4 = -8.851064E-21f;
	Var6.f_7 = 1;
	Var6.f_13 = -1;
	Var6.f_15 = -1;
	Var6.f_16 = -1;
	Var6.f_17 = -1;
	Var6.f_18 = -1;
	Var6.f_19 = -1;
	Var6.f_35 = -1;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar4, &Var0))
		{
			switch (Var0)
			{
				case -2075827635:
					switch (Var0.f_2)
					{
						case -1218139183:
							func_6(PLAYER::PLAYER_ID(), 1);
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -5.362452E+13f))
							{
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, 5.636846E+30f);
							}
							break;
						case -1546234005:
							func_6(func_7(), 1);
							if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -5.362452E+13f))
							{
								UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, 5.636846E+30f);
							}
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				case -1740156697:
					switch (Var0.f_2)
					{
						case -1559642356:
							Global_1940239.f_1556.f_4168.f_10 = Var0.f_3;
							func_5(Var0.f_3);
							break;
						case -1895040713:
							func_8(Var0.f_3);
							break;
						case -273357828:
							func_9(Var0.f_3);
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				case 703281244:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(1);
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				case -722926211:
					switch (Var0.f_2)
					{
						case -27281482:
							func_10(-1);
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 536653807:
							func_11(Var0.f_3, &Var6, 2, -1);
							func_12(&Var6);
							break;
						case 473608166:
							iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "ability_card_loadout_index");
							func_13(iVar5);
							break;
						case 928621134:
							iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var0.f_3, "ability_card_loadout_index");
							func_14(iVar5);
							break;
						case -1636950965:
							func_11(Var0.f_3, &Var6, 2, -1);
							func_16(Var6, func_15());
							break;
						case 85169314:
							func_11(Var0.f_3, &Var6, 2, -1);
							if (Var6.f_29)
							{
								Var43.f_2 = Var6.f_31;
							}
							else if (Var6.f_30)
							{
								Var43.f_2 = Var6.f_31;
							}
							else if (Var6.f_32)
							{
								Var43.f_2 = -982726.7f;
							}
							else if (Var6.f_33)
							{
								Var43.f_2 = -2.401104E+18f;
							}
						else
						{
							}
							else if (!func_17(Var43.f_2))
							{
								Var43.f_1 = func_18(Var6.f_2, Var43.f_2);
								if (Var43.f_1 <= 0)
								{
								}
								else
								{
									Var43 = Var6;
									func_19(func_15(), 1, Var43);
									Jump @884; //curOff = 678
									func_11(Var0.f_3, &Var6, 2, -1);
									bVar48 = func_21(func_20(&Var6) + 1);
									if (Var6.f_23 && func_22(bVar48, &(Var43.f_2)))
									{
										Var43.f_1 = 0;
									}
									else if (Var6.f_24 && func_23(bVar48, &(Var43.f_2)))
									{
										Var43.f_1 = func_24(bVar48, 3.996812E+36f, Var43.f_2, 1, 0);
									}
									else if (Var6.f_25)
									{
										Var43.f_2 = -1.926391E+21f;
										Var43.f_1 = func_18(bVar48, Var43.f_2);
									}
									else if (Var6.f_26)
									{
										Var43.f_2 = -2.401104E+18f;
										Var43.f_1 = func_18(bVar48, Var43.f_2);
									}
								else
								{
									}
									else if (Var43.f_1 < 0)
									{
									}
									else
									{
										Var43 = Var6;
										func_19(func_15(), 2, Var43);
									}
								}
								UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
								Jump @902; //curOff = 890
								UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
							}
							default:
								break;
					}
					default:
						break;
			}
		}
	}
}

bool func_4()
{
	if (Global_1940072.f_105 != -1)
	{
		return true;
	}
	if (Global_1940072.f_105.f_2 != -1)
	{
		return true;
	}
	return HUD::BUSYSPINNER_IS_ON();
}

void func_5(int iParam0)
{
	struct<37> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_11(iParam0, &Var0, 2, -1);
	func_26(&(Global_1940239.f_1556.f_4168.f_37[func_25(Var0, 1) /*44*/]), &Var0);
	func_27(&(Global_1940239.f_1556.f_4168.f_1936), Var0);
	func_28(Var0);
	func_29(Var0);
}

void func_6(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_30(0);
	}
	if (PLAYER::PLAYER_ID() == iParam0)
	{
		func_31(0);
	}
	else
	{
		func_31(1);
	}
	func_32(0, iParam0);
	func_32(1, iParam0);
	func_32(2, iParam0);
	func_32(3, iParam0);
}

int func_7()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_8));
	if (!func_33())
	{
		return PLAYER::PLAYER_ID();
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return PLAYER::PLAYER_ID();
	}
	iVar1 = iVar0;
	if (iVar1 < 0)
	{
		return PLAYER::PLAYER_ID();
	}
	if (iVar1 >= 32)
	{
		return PLAYER::PLAYER_ID();
	}
	return iVar0;
}

void func_8(int iParam0)
{
	struct<37> Var0;
	int iVar37;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	iVar37 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_loadout_index");
	func_30(iVar37);
	func_11(iParam0, &Var0, 2, -1);
	func_34(&(Global_1940239.f_1556.f_4168.f_1985), &Var0, iVar37);
	func_28(Var0);
	func_29(Var0);
}

void func_9(int iParam0)
{
	int iVar0;
	struct<37> Var1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_upgrade_tier_index");
	Var1.f_7 = 1;
	Var1.f_13 = -1;
	Var1.f_15 = -1;
	Var1.f_16 = -1;
	Var1.f_17 = -1;
	Var1.f_18 = -1;
	Var1.f_19 = -1;
	Var1.f_35 = -1;
	func_11(iParam0, &Var1, 2, iVar0);
	func_35(&(Global_1940239.f_1556.f_4168.f_1797[iVar0 /*46*/]), Var1);
	func_36(&(Global_1940239.f_1556.f_4168.f_2034), Var1);
	func_37(iVar0);
	func_29(Var1);
}

int func_10(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = Global_1940239.f_1556.f_4168.f_2085;
	if (iVar0 == 5.389147E-28f)
	{
		return 0;
	}
	iVar1 = func_38(Global_1940239.f_1556.f_4168.f_2085, 1);
	iVar2 = (iVar1 + iParam0);
	if (iVar2 < 2)
	{
		iVar2 = 4;
	}
	else if (iVar2 > 4)
	{
		iVar2 = 2;
	}
	iVar0 = func_39(iVar2, 1);
	func_40(iVar0, 0);
	return 1;
}

void func_11(int iParam0, var uParam1, int iParam2, int iParam3)
{
	func_41(iParam0, uParam1);
	func_42(*uParam1, uParam1, iParam2, iParam3);
}

void func_12(var uParam0)
{
	func_43(*uParam0);
	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-8.851064E-21f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -3.730815E-09f);
	}
}

void func_13(int iParam0)
{
	float fVar0;

	func_30(iParam0);
	if (func_44(iParam0))
	{
		fVar0 = 5.389147E-28f;
	}
	else if (!func_45(iParam0, 1))
	{
		fVar0 = func_47(func_46(iParam0, 1));
	}
	else
	{
		fVar0 = 2.722286E+14f;
	}
	func_40(fVar0, func_46(iParam0, 1));
	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-8.851064E-21f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -1.43595E-37f);
	}
}

int func_14(int iParam0)
{
	struct<5> Var0;

	Var0 = func_46(iParam0, 1);
	return func_19(iParam0, 3, Var0);
}

int func_15()
{
	return Global_1940239.f_1556.f_4168.f_2086;
}

int func_16(var uParam0, int iParam1)
{
	struct<5> Var0;

	Var0 = uParam0;
	return func_19(iParam1, 0, Var0);
}

bool func_17(int iParam0)
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

int func_18(bool bParam0, int iParam1)
{
	return func_48(bParam0, iParam1, 1, 0, 1, 0);
}

int func_19(int iParam0, int iParam1, struct<5> Param2)
{
	struct<17> Var0;

	if (func_49(iParam0))
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 4)
	{
		return 0;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_7 = -1;
	Var0.f_7.f_1 = -1;
	Var0 = iParam1;
	Var0.f_2 = { Param2 };
	Var0.f_1 = 0;
	Global_1149417.f_4621.f_52[iParam0 /*17*/] = { Var0 };
	return 1;
}

int func_20(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;

	if (!func_50(*uParam0))
	{
		return -1;
	}
	if (!func_51(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		bVar6 = func_21(iVar1);
		Var2 = { func_52(bVar6, uParam0->f_3, 2.918308E+20f, 1) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_21(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_53(iVar0);
}

bool func_22(bool bParam0, int iParam1)
{
	*iParam1 = func_54(bParam0, 1);
	return *iParam1 != 0;
}

bool func_23(bool bParam0, int iParam1)
{
	*iParam1 = func_55(bParam0, 1);
	return *iParam1 != 0;
}

int func_24(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_56(bParam0) || func_57(bParam0, 2.791187f))
	{
		return func_59(func_58(bParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_60(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

int func_25(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("NET_PLAYER_ABILITY__STRANGE_MEDICINE"):
			return 18;
		case joaat("NET_PLAYER_ABILITY__FOCUS_FIRE"):
			return 5;
		case joaat("NET_PLAYER_ABILITY__NECESSITY_BREEDS"):
			return 10;
		case joaat("NET_PLAYER_ABILITY__THE_GIFT_OF_FOCUS"):
			return 20;
		case joaat("NET_PLAYER_ABILITY__RIDE_LIKE_THE_WIND"):
			return 33;
		case joaat("NET_PLAYER_ABILITY__FOOL_ME_ONCE"):
			return 32;
		case joaat("NET_PLAYER_ABILITY__GUNSLINGERS_CHOICE"):
			return 34;
		case joaat("NET_PLAYER_ABILITY__COME_BACK_STRONGER"):
			return 3;
		case joaat("NET_PLAYER_ABILITY__WINNING_STREAK"):
			return 24;
		case joaat("NET_PLAYER_ABILITY__KICK_IN_THE_BUTT"):
			return 26;
		case joaat("NET_PLAYER_ABILITY__PEAK_CONDITION"):
			return 14;
		case joaat("NET_PLAYER_ABILITY__THE_SHORT_GAME"):
			return 21;
		case joaat("NET_PLAYER_ABILITY__OVERRIDE_REVENGE_SLOW_TIME"):
			return 25;
		case joaat("NET_PLAYER_ABILITY__IRON_LUNG"):
			return 30;
		case joaat("NET_PLAYER_ABILITY__THE_UNBLINKING_EYE"):
			return 22;
		case 0:
			return 0;
		case joaat("NET_PLAYER_ABILITY__FRIENDS_FOR_LIFE"):
			return 31;
		case joaat("NET_PLAYER_ABILITY__NEVER_WITHOUT_ONE"):
			return 11;
		case joaat("NET_PLAYER_ABILITY__OF_SINGLE_PURPOSE"):
			return 12;
		case joaat("NET_PLAYER_ABILITY__A_MOMENT_TO_RECUPERATE"):
			return 1;
		case joaat("NET_PLAYER_ABILITY__SLIPPERY_BASTARD"):
			return 16;
		case joaat("NET_PLAYER_ABILITY__PAINT_IT_BLACK"):
			return 13;
		case joaat("NET_PLAYER_ABILITY__TAKE_THE_PAIN_AWAY"):
			return 19;
		case joaat("NET_PLAYER_ABILITY__EYE_FOR_AN_EYE"):
			return 4;
		case joaat("NET_PLAYER_ABILITY__COLD_BLOODED"):
			return 2;
		case joaat("NET_PLAYER_ABILITY__HUNKER_DOWN"):
			return 8;
		case joaat("NET_PLAYER_ABILITY__QUITE_AN_INSPIRATION"):
			return 15;
		case joaat("NET_PLAYER_ABILITY__TO_FIGHT_ANOTHER_DAY"):
			return 23;
		case joaat("NET_PLAYER_ABILITY__HORSEMAN"):
			return 7;
		case joaat("NET_PLAYER_ABILITY__LIVE_FOR_THE_FIGHT"):
			return 27;
		case joaat("NET_PLAYER_ABILITY__HANGMAN"):
			return 6;
		case joaat("NET_PLAYER_ABILITY__STRENGTH_IN_NUMBERS"):
			return 29;
		case joaat("NET_PLAYER_ABILITY__SLOW_AND_STEADY"):
			return 17;
		case joaat("NET_PLAYER_ABILITY__LANDONS_PATIENCE"):
			return 9;
		case joaat("NET_PLAYER_ABILITY__SHARPSHOOTER"):
			return 28;
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

void func_26(var uParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, iParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, iParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, iParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, iParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(iParam1->f_1, iParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_62(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, iParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, iParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !iParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_63(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !iParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, iParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, iParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, iParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_64(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, iParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, iParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, iParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!iParam1->f_14 && iParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !iParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!iParam1->f_14 && func_65(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_66(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_67(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_68(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_69(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (iParam1->f_34 && func_69(iParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (iParam1->f_27 && func_69(iParam1)));
	if (iParam1->f_29)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_70(func_72(iParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_71(func_73(iParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, iParam1->f_18);
	if (!iParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_74(iParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, iParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, iParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_75(iParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, iParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !iParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

void func_27(var uParam0, struct<16> Param1, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	int iVar0;

	func_26(uParam0, &Param1);
	iVar0 = func_75(Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_44, MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOCUS_XP_INFO", Param1.f_15, iVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&Param1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&Param1));
}

void func_28(var uParam0)
{
	func_80(uParam0);
}

void func_29(struct<37> Param0)
{
	int iVar0;

	if (!func_81())
	{
		return;
	}
	iVar0 = func_82();
	if (func_83())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, true);
	}
	else if (iVar0 == 1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_5, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_4168.f_4, func_84(Param0));
}

void func_30(int iParam0)
{
	func_85(iParam0);
	func_86(iParam0);
}

void func_31(int iParam0)
{
	Global_1940239.f_1556.f_4168.f_2083 = iParam0;
}

void func_32(int iParam0, int iParam1)
{
	if (func_87())
	{
		func_88(iParam0, 1);
	}
	else
	{
		func_89(iParam1, iParam0, 1);
	}
}

bool func_33()
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1940239.f_1556.f_8));
}

void func_34(var uParam0, int iParam1, int iParam2)
{
	func_90(iParam2, iParam1);
	func_26(uParam0, iParam1);
}

void func_35(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_26(uParam0, &uParam1);
}

void func_36(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_26(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_76(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_77(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_78(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_79(&uParam1));
}

void func_37(int iParam0)
{
	func_91(iParam0);
}

int func_38(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DEFENSE"):
			return 4;
		case 0:
			return 0;
		case joaat("DEADEYE"):
			return 1;
		case joaat("RECOVERY"):
			return 3;
		case joaat("COMBAT"):
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

int func_39(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5.389147E-28f;
		case 2:
			return 2.722286E+14f;
		case 3:
			return 2.849396E+07f;
		case 4:
			return -2.888558E-26f;
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

void func_40(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_92(iParam0))
	{
		func_93(iParam1);
		return;
	}
	if (iParam0 == 5.389147E-28f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_13, false);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_13, true);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_39(iVar0, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_15[iVar0 /*4*/].f_1, iParam0 == iVar1);
			iVar0++;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_4168.f_3, func_94(iParam0));
	func_95(iParam0);
	func_93(iParam1);
}

void func_41(int iParam0, var uParam1)
{
	*uParam1 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "ability_card_ability_hash");
	uParam1->f_13 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "ability_card_tier");
}

bool func_42(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_96())
	{
		return false;
	}
	return func_97(iParam0, uParam1, iParam2, iParam3);
}

void func_43(int iParam0)
{
	struct<37> Var0;
	struct<37> Var37;
	int iVar74;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	Var37.f_7 = 1;
	Var37.f_13 = -1;
	Var37.f_15 = -1;
	Var37.f_16 = -1;
	Var37.f_17 = -1;
	Var37.f_18 = -1;
	Var37.f_19 = -1;
	Var37.f_35 = -1;
	iVar74 = 0;
	while (iVar74 < 3)
	{
		Var0 = { Var37 };
		func_42(iParam0, &Var0, 2, iVar74);
		func_35(&(Global_1940239.f_1556.f_4168.f_1797[iVar74 /*46*/]), Var0);
		if (func_98(iVar74))
		{
			func_36(&(Global_1940239.f_1556.f_4168.f_2034), Var0);
		}
		iVar74++;
	}
}

bool func_44(int iParam0)
{
	if (!func_99(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_45(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	int iVar5;
	bool bVar6;

	fVar0 = func_100(iParam0);
	Var1 = { func_101(bParam1) };
	iVar5 = func_102(&Var1, fVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

int func_46(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	bool bVar5;

	if (func_83())
	{
		return Global_1149417.f_4804.f_34[iParam0 /*3*/];
	}
	fVar0 = func_100(iParam0);
	Var1 = { func_101(bParam1) };
	bVar5 = func_103(Var1, fVar0, 0, bParam1);
	if (!func_104(bVar5))
	{
		return 0;
	}
	return func_105(bVar5);
}

int func_47(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
}

int func_48(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_106(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_56(bParam0) || func_57(bParam0, 2.791187f))
	{
		return func_107(func_58(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_60(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_49(int iParam0)
{
	if (!func_99(iParam0))
	{
		return true;
	}
	if (Global_1149417.f_4621.f_52[iParam0 /*17*/].f_1 != -1)
	{
		return true;
	}
	if (func_83())
	{
		return true;
	}
	return false;
}

bool func_50(int iParam0)
{
	int iVar0;

	iVar0 = func_25(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

bool func_51(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

struct<4> func_52(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_51(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_108(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_53(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -5.611032E-27f;
		case 1:
			return -4.742815E-35f;
		case 2:
			return 3.058603E+31f;
		default:
			break;
	}
	return 0;
}

int func_54(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 1)
	{
		iVar33 = func_109(iVar0);
		if (!func_60(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_110(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_111(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @132; //curOff = 104
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

int func_55(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3[15];
	int iVar34;
	int iVar35;
	bool bVar36;
	bool bVar37;
	int iVar38;
	int iVar39;

	if (!func_51(bParam0, 0))
	{
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar35 = 0;
	while (iVar35 < 3)
	{
		iVar34 = func_112(iVar35);
		if (iVar34 == 0)
		{
		}
		else if (!func_60(bParam0, iVar34, &Var3, &iVar2, 1, 0))
		{
		}
		else
		{
			bVar37 = false;
			iVar38 = 0;
			iVar39 = 0;
			while (iVar39 < iVar2)
			{
				bVar36 = Var3[iVar39 /*2*/];
				if (bVar36 == 0)
				{
				}
				else
				{
					if (func_113(bVar36))
					{
						if (!bParam1 || func_111(bVar36, 0, 1, 1) > 0)
						{
							bVar37 = true;
						}
						else if (bVar36 == 3.996812E+36f)
						{
							iVar38 = Var3[iVar39 /*2*/].f_1;
						}
						iVar39++;
						if (bVar37)
						{
							if (iVar0 == 0)
							{
								iVar0 = iVar34;
								iVar1 = iVar38;
							}
							else if (iVar38 < iVar1)
							{
								iVar0 = iVar34;
								iVar1 = iVar38;
							}
						}
						iVar35++;
						return iVar0;
					}
				}
			}
		}
	}
}

bool func_56(bool bParam0)
{
	if (func_57(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_57(bool bParam0, int iParam1)
{
	if (!func_51(bParam0, 0))
	{
		return func_115(func_114(bParam0), iParam1);
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

bool func_58(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_51(bParam0, 0))
	{
		return func_116(func_114(bParam0), bParam1);
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

int func_59(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_117(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

bool func_60(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_51(bParam0, 0))
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
		func_118(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

float func_61(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_119(iParam0, iVar0);
}

bool func_62(int iParam0)
{
	return iParam0->f_1 == 5.389147E-28f;
}

bool func_63(int iParam0)
{
	return (iParam0->f_20 && !iParam0->f_22);
}

char* func_64(int iParam0)
{
	if (iParam0->f_29)
	{
		return "NET_PLAYER_ABILITY_PROMPT_CLAIM_WITH_REWARD";
	}
	else if (iParam0->f_30)
	{
		return "IB_REDEEM";
	}
	if (iParam0->f_33)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

bool func_65(int iParam0)
{
	int iVar0;

	iVar0 = func_120();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

char* func_66(int iParam0)
{
	if (iParam0->f_23)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_VOUCHER";
	}
	else if (iParam0->f_24)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_OFFER";
	}
	else if (iParam0->f_26)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_67(int iParam0)
{
	return (((iParam0->f_32 || iParam0->f_25) || iParam0->f_24) || iParam0->f_23);
}

bool func_68(int iParam0)
{
	return (!func_67(iParam0) && (iParam0->f_33 || iParam0->f_26));
}

int func_69(int iParam0)
{
	if (!iParam0->f_20 && iParam0->f_29)
	{
		if (iParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_121(iParam0->f_17))
		{
			return 1;
		}
	}
	if (func_67(iParam0))
	{
		if (iParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_121(iParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_68(iParam0))
	{
		if (iParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_122(iParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_70(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_71(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_70(iParam0);
}

int func_72(int iParam0)
{
	return (iParam0 / 100);
}

int func_73(int iParam0)
{
	return (iParam0 % 100);
}

char* func_74(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_123(Var0);
}

int func_75(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_124(iVar0);
}

char* func_76(var uParam0)
{
	if (uParam0->f_20)
	{
		if (uParam0->f_23)
		{
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_VOUCHER";
		}
		else if (uParam0->f_24)
		{
			return "NET_PLAYER_ABILITY_PRICE_TYPE_UPGRADE_OFFER";
		}
		return "IB_UPGRADE";
	}
	if (uParam0->f_29)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_30)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_77(var uParam0)
{
	if (uParam0->f_20 && uParam0->f_23)
	{
		return "IB_FREE";
	}
	if (uParam0->f_29)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_27)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_78(var uParam0)
{
	if (uParam0->f_29)
	{
		return 1;
	}
	else if (!uParam0->f_27 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_79(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

void func_80(var uParam0)
{
	Global_1940239.f_1556.f_4168.f_2084 = uParam0;
}

bool func_81()
{
	return UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-8.851064E-21f);
}

int func_82()
{
	return Global_1940239.f_1556.f_4168.f_2083;
}

bool func_83()
{
	return (func_125(0) && func_125(5));
}

char* func_84(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36)
{
	char* sVar0;
	int iVar1;

	sVar0 = func_127(func_126(), 4.808429E-35f);
	if (func_83())
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_OVERRIDEN");
	}
	else if (func_82() == 1)
	{
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_REMOTE_PLAYER_MODE", sVar0);
	}
	if (!func_81())
	{
		return "INVALID";
	}
	iVar1 = UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(-8.851064E-21f);
	if (iVar1 == 1.565755E+24f)
	{
		return func_128(func_15());
	}
	else if (iVar1 == -5.250026E+21f)
	{
		return func_129(&uParam0);
	}
	else if (iVar1 == 8.567533E-12f)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_UPGRADE");
	}
	return "INVALID";
}

void func_85(var uParam0)
{
	Global_1940239.f_1556.f_4168.f_2086 = uParam0;
}

void func_86(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_4168.f_12, iParam0);
}

bool func_87()
{
	return func_82() == 0;
}

void func_88(int iParam0, bool bParam1)
{
	struct<37> Var0;
	int iVar37;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	iVar37 = func_46(iParam0, 1);
	if (!func_42(iVar37, &Var0, 0, -1))
	{
		func_130(&Var0);
	}
	func_131(iParam0, &(Global_1940239.f_1556.f_4168.f_1579[iParam0 /*54*/]), Var0);
	if (bParam1 && func_132(iParam0))
	{
		func_34(&(Global_1940239.f_1556.f_4168.f_1985), &Var0, iParam0);
	}
}

void func_89(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<37> Var2;

	iVar0 = iParam0;
	iVar1 = Global_1155135[iVar0 /*30*/].f_5[iParam1 /*3*/];
	Var2.f_7 = 1;
	Var2.f_13 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_35 = -1;
	Var2.f_13 = Global_1155135[iVar0 /*30*/].f_5[iParam1 /*3*/].f_1;
	if (!func_42(iVar1, &Var2, 1, -1))
	{
		func_130(&Var2);
	}
	func_133(iParam1, &(Global_1940239.f_1556.f_4168.f_1579[iParam1 /*54*/]), Var2, Global_1155135[iVar0 /*30*/].f_5[iParam1 /*3*/].f_2);
	if (bParam2 && func_132(iParam1))
	{
		func_34(&(Global_1940239.f_1556.f_4168.f_1985), &Var2, iParam1);
	}
}

void func_90(int iParam0, int iParam1)
{
	if (!func_50(*iParam1))
	{
		iParam1->f_11 = func_134(iParam0);
		iParam1->f_12 = func_135(iParam0);
	}
}

void func_91(int iParam0)
{
	Global_1940239.f_1556.f_4168.f_2087 = iParam0;
}

bool func_92(int iParam0)
{
	if (iParam0 == Global_1940239.f_1556.f_4168.f_2085)
	{
		return false;
	}
	Global_1940239.f_1556.f_4168.f_2085 = iParam0;
	return true;
}

void func_93(int iParam0)
{
	if (iParam0 == 0)
	{
		func_136(0);
	}
	else
	{
		func_136(func_137(iParam0));
	}
}

char* func_94(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DEADEYE"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
		case joaat("COMBAT"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
		case joaat("RECOVERY"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
		case joaat("DEFENSE"):
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
		default:
			break;
	}
	return "NULL";
}

void func_95(int iParam0)
{
	struct<37> Var0;
	int iVar37;
	int iVar38;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_1556.f_4168.f_36);
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	iVar38 = 0;
	while (iVar38 < 35)
	{
		iVar37 = Global_1149417.f_11.f_1562.f_1611[iVar38];
		if (!func_42(iVar37, &Var0, 2, -1))
		{
		}
		else if (!func_138(Var0))
		{
		}
		else if (Var0.f_36)
		{
		}
		else if (!func_50(Var0))
		{
		}
		else if (iParam0 != Var0.f_1)
		{
		}
		else
		{
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_4168.f_36, iVar38, "ability_card", Global_1940239.f_1556.f_4168.f_37[func_25(iVar37, 1) /*44*/]);
		}
		iVar38++;
	}
}

bool func_96()
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_8);
}

int func_97(int iParam0, var uParam1, int iParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	vector3 vVar6;

	if (iParam2 == 2)
	{
		bVar0 = func_82() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_50(iParam0))
	{
		func_130(uParam1);
		return 0;
	}
	*uParam1 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_4;
	uParam1->f_35 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
	uParam1->f_36 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_8;
	if (!func_51(uParam1->f_2, 0))
	{
		func_130(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_50(*uParam1))
	{
		func_130(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_83())
		{
			uParam1->f_19 = func_139(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
			if (func_99(uParam1->f_19))
			{
				uParam1->f_13 = Global_1149417.f_4804.f_34[uParam1->f_19 /*3*/].f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_140(*uParam1);
			fVar3 = func_100(uParam1->f_19);
			uParam1->f_3 = { func_52(uParam1->f_2, func_101(bVar2), fVar3, bVar2) };
			uParam1->f_21 = func_141(uParam1);
			uParam1->f_13 = func_20(uParam1);
			uParam1->f_15 = func_142(uParam1);
			uParam1->f_20 = func_143(uParam1);
			uParam1->f_22 = func_144(uParam1);
			uParam1->f_14 = func_145(uParam1);
			uParam1->f_25 = func_146(uParam1);
			uParam1->f_26 = func_147(uParam1);
			uParam1->f_24 = func_148(uParam1);
			uParam1->f_23 = func_149(uParam1);
			uParam1->f_27 = func_150(uParam1);
			uParam1->f_29 = func_151(uParam1);
			uParam1->f_30 = func_152(uParam1);
			uParam1->f_32 = func_153(uParam1);
			uParam1->f_33 = func_154(uParam1);
			uParam1->f_34 = func_155(uParam1);
			fVar4 = -982726.7f;
			if (!uParam1->f_20)
			{
				if (uParam1->f_30 || uParam1->f_29)
				{
					fVar4 = uParam1->f_31;
				}
				uParam1->f_17 = func_18(Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, fVar4);
			}
			else
			{
				if (uParam1->f_24 || uParam1->f_23)
				{
					fVar4 = uParam1->f_28;
				}
				uParam1->f_17 = func_156(uParam1->f_13, fVar4);
			}
			uParam1->f_18 = func_18(Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2, -2.401104E+18f);
			if (bVar1)
			{
				uParam1->f_29 = 0;
				uParam1->f_30 = 0;
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_27)
				{
					uParam1->f_27 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_157(uParam1);
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_8));
		uParam1->f_9 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_6;
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
		{
			uParam1->f_19 = func_158(*uParam1, iVar5);
			if (func_99(uParam1->f_19))
			{
				vVar6 = { Global_1155135[iVar5 /*30*/].f_5[uParam1->f_19 /*3*/] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_159(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_160(uParam1);
	uParam1->f_12 = func_161(Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/], uParam1);
	return 1;
}

bool func_98(int iParam0)
{
	return func_162() == iParam0;
}

bool func_99(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

float func_100(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.117204E+09f;
		case 1:
			return -7.899958E+20f;
		case 2:
			return -7.941008E+09f;
		case 3:
			return -0.105234f;
		default:
			break;
	}
	return -6.307836f;
}

struct<4> func_101(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_108(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_52(2.982335E+09f, func_163(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_52(2.982335E+09f, func_163(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_52(2.982335E+09f, func_163(), -5.45926E-19f, bParam0);
}

int func_102(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_108(bParam2), iParam0, iParam1);
}

int func_103(struct<4> Param0, float fParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_164(Param0, fParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_104(bool bParam0)
{
	int iVar0;

	iVar0 = func_165(bParam0);
	if ((iVar0 == 7.626548E-10f || iVar0 == 5.118983E+36f) || iVar0 == 2.787807E-34f)
	{
		return true;
	}
	return false;
}

int func_105(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (bParam0 == Global_1149417.f_11.f_1562[iVar0 /*46*/].f_2)
		{
			return Global_1149417.f_11.f_1562[iVar0 /*46*/];
		}
		iVar0++;
	}
	return 0;
}

bool func_106(bool bParam0, int iParam1)
{
	if (!func_51(bParam0, 0))
	{
		return false;
	}
	if (func_56(bParam0) || func_57(bParam0, 2.791187f))
	{
		return func_166(func_58(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

int func_107(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_117(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_108(bool bParam0)
{
	if (func_167() == -1)
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

int func_109(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_VOUCHER");
		default:
			break;
	}
	return 0;
}

bool func_110(bool bParam0)
{
	return func_168(bParam0) == 4.029065E+31f;
}

int func_111(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_165(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_169(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_170(bParam0, 0);
	}
	if (func_171(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_172(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_112(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON");
		case 1:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_2");
		case 2:
			return MISC::GET_HASH_KEY("COST_ABILITY_CARD_RANK_COUPON_3");
		default:
			break;
	}
	return 0;
}

bool func_113(bool bParam0)
{
	return func_168(bParam0) == -1.955052E+34f;
}

bool func_114(bool bParam0)
{
	return bParam0;
}

int func_115(bool bParam0, int iParam1)
{
	if (!func_173(bParam0, 2))
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

bool func_116(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_173(bParam0, 2))
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

bool func_117(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_174(bParam0))
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
		func_175(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_118(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_168((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

float func_119(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("DEADEYE"):
			switch (iParam1)
			{
				case 0:
					return -1.665895E+07f;
				case 1:
					return 2.193244E-13f;
				case 2:
					return -1.274092E+34f;
				default:
					break;
			}
			break;
		case joaat("COMBAT"):
			switch (iParam1)
			{
				case 0:
					return 15.36747f;
				case 1:
					return 3.358978E-08f;
				case 2:
					return -1.131254E-24f;
				default:
					break;
			}
			break;
		case joaat("DEFENSE"):
			switch (iParam1)
			{
				case 0:
					return -1.216679E+31f;
				case 1:
					return 8.945652E-29f;
				case 2:
					return -23.46011f;
				default:
					break;
			}
			break;
		case joaat("RECOVERY"):
			switch (iParam1)
			{
				case 0:
					return -1.3454E+36f;
				case 1:
					return 49.65254f;
				case 2:
					return 1.774646E+10f;
				default:
					break;
			}
			break;
	}
	return 27.64779f;
}

int func_120()
{
	return Global_1149417.f_4621.f_163;
}

bool func_121(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_167() == 0)
	{
		return func_176(iParam0);
	}
	return iParam0 <= func_177();
}

bool func_122(int iParam0)
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

char* func_123(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_124(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return Global_1149417.f_11.f_1562.f_1647[0];
		case 1:
			return Global_1149417.f_11.f_1562.f_1647[1];
		default:
			break;
	}
	return -1;
}

bool func_125(int iParam0)
{
	return func_178(&(Global_1956862.f_1565), iParam0, 1);
}

char* func_126()
{
	return func_179(Global_1940239.f_1556.f_8.f_2);
}

char* func_127(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_180(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

char* func_128(int iParam0)
{
	if (!func_181(iParam0))
	{
		if (func_44(iParam0))
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_LOCKED");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_LOCKED", func_182(iParam0));
		}
	}
	else if (!func_45(iParam0, 1))
	{
		if (func_44(iParam0))
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_EQUIPPED");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_EQUIPPED");
		}
	}
	else if (func_44(iParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_ACTIVE_OPEN");
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_LOADOUT_SLOT_PASSIVE_OPEN");
	}
	return "INVALID";
}

char* func_129(var uParam0)
{
	int iVar0;
	char cVar1[128];
	bool bVar17;
	int iVar18;
	char cVar19[128];

	if (func_183(uParam0))
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_LOCKED", func_184(uParam0->f_2, 1));
	}
	else if (uParam0->f_29)
	{
		iVar0 = func_18(uParam0->f_2, -982726.7f);
		if (iVar0 <= 0)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD_F");
		}
		else
		{
			StringCopy(&cVar1, "$", 128);
			StringIntConCat(&cVar1, func_72(iVar0), 128);
			StringConCat(&cVar1, ".", 128);
			StringConCat(&cVar1, func_71(func_73(iVar0)), 128);
			return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_CLAIM_WITH_REWARD", &cVar1);
		}
	}
	else if (uParam0->f_30)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_VOUCHER");
	}
	else if (uParam0->f_32)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_BUY_CASH");
	}
	else if (uParam0->f_24)
	{
		bVar17 = func_21(func_20(uParam0) + 1);
		if (uParam0->f_25)
		{
			iVar18 = func_18(bVar17, -1.926391E+21f);
		}
		else if (uParam0->f_26)
		{
			iVar18 = func_18(bVar17, -2.401104E+18f);
		}
		StringCopy(&cVar19, "$", 128);
		StringIntConCat(&cVar19, func_72(iVar18), 128);
		StringConCat(&cVar19, ".", 128);
		StringConCat(&cVar19, func_71(func_73(iVar18)), 128);
		return MISC::VAR_STRING(10, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE_OFFER", &cVar19);
	}
	else if (uParam0->f_25)
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UPGRADE");
	}
	else if (uParam0->f_22)
	{
		if (uParam0->f_14)
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED_MAX");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_EQUIPPED");
		}
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_FOOTER_ABILITY_CARD_UNEQUIPPED");
	}
	return "INVALID";
}

void func_130(var uParam0)
{
	struct<37> Var0;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	func_157(&Var0);
	*uParam0 = { Var0 };
}

void func_131(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	bool bVar0;

	bVar0 = func_181(iParam0);
	if (func_83())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_26(uParam1, &Param2);
		return;
	}
	func_26(uParam1, &Param2);
	if (bVar0)
	{
		func_185(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	else
	{
		func_186(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_87()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_87()) && func_65(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_87()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_87()) && func_65(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
}

bool func_132(int iParam0)
{
	return Global_1940239.f_1556.f_4168.f_2086 == iParam0;
}

void func_133(int iParam0, var uParam1, struct<37> Param2, var uParam39)
{
	func_187(uParam1, Param2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, func_159(&uParam39, 1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_74(func_182(iParam0)));
}

char* func_134(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_135(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return MISC::VAR_STRING(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

void func_136(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_4168.f_11, iParam0);
}

int func_137(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_7;
}

bool func_138(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36)
{
	if (func_57(vParam0.z, 3.461648E-31f))
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.143461E-11f))
		{
			return false;
		}
	}
	return true;
}

int func_139(int iParam0)
{
	int iVar0;

	if (!func_83())
	{
		return -1;
	}
	if (!func_50(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1149417.f_4804.f_34[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_140(int iParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (!func_50(iParam0))
	{
		return -1;
	}
	bVar2 = func_188(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar1 = func_100(iVar0);
		if (func_189(bVar2, fVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_141(var uParam0)
{
	if (!func_138(*uParam0))
	{
		return false;
	}
	if (func_143(uParam0))
	{
		return true;
	}
	return UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_142(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	bool bVar7;
	int iVar8;

	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_50(*uParam0))
	{
		return -1;
	}
	if (!func_51(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		bVar7 = func_21(iVar2);
		Var3 = { func_52(bVar7, uParam0->f_3, 2.918308E+20f, 1) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
		}
		else
		{
			iVar8 = func_190(iVar2);
			iVar0 = func_191(3.078375E+12f, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_143(var uParam0)
{
	return func_192(uParam0->f_2, 1);
}

int func_144(var uParam0)
{
	int iVar0;

	if (!func_50(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_193(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_145(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_146(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_194(uParam0));
}

int func_147(var uParam0)
{
	return 0;
}

int func_148(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_14)
	{
		return 0;
	}
	if (!uParam0->f_20)
	{
		return 0;
	}
	if (!func_195(uParam0))
	{
		return 0;
	}
	iVar0 = func_20(uParam0) + 1;
	bVar1 = func_21(iVar0);
	if (!func_51(bVar1, 0))
	{
		return 0;
	}
	if (!func_23(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_196(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

int func_149(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	if (uParam0->f_14)
	{
		return 0;
	}
	if (!uParam0->f_20)
	{
		return 0;
	}
	if (!func_195(uParam0))
	{
		return 0;
	}
	iVar0 = func_20(uParam0) + 1;
	bVar1 = func_21(iVar0);
	if (!func_51(bVar1, 0))
	{
		return 0;
	}
	if (!func_22(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_196(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

var func_150(var uParam0)
{
	return (((uParam0->f_26 || uParam0->f_25) || uParam0->f_24) || uParam0->f_23);
}

int func_151(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_195(uParam0))
	{
		return 0;
	}
	if (!func_197(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

int func_152(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_195(uParam0))
	{
		return 0;
	}
	if (!func_198(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

bool func_153(var uParam0)
{
	return (((!uParam0->f_20 && func_195(uParam0)) && !uParam0->f_29) && !uParam0->f_30);
}

int func_154(var uParam0)
{
	return 0;
}

var func_155(var uParam0)
{
	return (((uParam0->f_33 || uParam0->f_32) || uParam0->f_29) || uParam0->f_30);
}

int func_156(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_21(iParam0 + 1);
	return func_18(bVar0, iParam1);
}

void func_157(var uParam0)
{
	uParam0->f_9 = -2972364f;
	uParam0->f_10 = 1.713238E-28f;
}

int func_158(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	if (!func_50(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (Global_1155135[iVar1 /*30*/].f_5[iVar0 /*3*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_159(var uParam0, int iParam1)
{
	return func_199(*uParam0, iParam1);
}

char* func_160(var uParam0)
{
	return MISC::VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::VAR_STRING(0, uParam0->f_8), MISC::VAR_STRING(2, func_200(uParam0->f_13)));
}

char* func_161(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_201(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::VAR_STRING(0, Param0.f_9[uParam46->f_13 /*12*/].f_11);
}

int func_162()
{
	return Global_1940239.f_1556.f_4168.f_2087;
}

struct<4> func_163()
{
	struct<4> Var0;

	return Var0;
}

bool func_164(var uParam0, float fParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_108(bParam7);
	if (INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_165(bool bParam0)
{
	vector3 vVar0;

	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_166(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_174(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_202(bParam0, iParam1);
	}
	return true;
}

int func_167()
{
	return Global_1572887.f_14;
}

int func_168(bool bParam0)
{
	struct<2> Var0;

	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_169(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_51(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_165(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_57(bParam0, 9.811189E+11f))
	{
		func_203(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_170(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_204(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_206(&Var0, func_205(0));
	}
	if (!func_207(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_208(iVar18);
	return iVar19;
}

int func_171(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_173(func_114(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_172(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_209(bParam0, bParam1, 0) };
	return func_52(bParam0, Var0, Var0.f_4, bParam1);
}

bool func_173(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_174(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

void func_175(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_168((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_176(int iParam0)
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

int func_177()
{
	if (func_167() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

bool func_178(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

char* func_179(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_180(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_181(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-4.930077E-27f);
		case 1:
			return UNLOCK::UNLOCK_IS_UNLOCKED(6.666626E-23f);
		case 2:
			return UNLOCK::UNLOCK_IS_UNLOCKED(3.198294E-31f);
		case 3:
			return UNLOCK::UNLOCK_IS_UNLOCKED(0.5272401f);
		default:
			break;
	}
	return false;
}

int func_182(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

bool func_183(var uParam0)
{
	return (!uParam0->f_20 && !func_195(uParam0));
}

int func_184(bool bParam0, bool bParam1)
{
	struct<2> Var0;

	if (!func_51(bParam0, 0))
	{
		return -1;
	}
	UNLOCK::_UNLOCK_GET_ITEM_ROLE_UNLOCK_INFO(bParam0, &Var0);
	if (Var0.f_1 < 1)
	{
		return -1;
	}
	else if (func_57(bParam0, 5.144831E-36f) || func_57(bParam0, 8.874786E+09f))
	{
		return -1;
	}
	switch (Var0)
	{
		case joaat("CHARACTER_RANK_TRADER"):
		case joaat("CHARACTER_RANK_BOUNTY_HUNTER"):
		case joaat("CHARACTER_RANK_COLLECTOR"):
			if (bParam1)
			{
				return Var0.f_1;
			}
			return -1;
		case joaat("CHARACTER_RANK_INTRO"):
			return 1;
		case joaat("CHARACTER_RANK"):
			return Var0.f_1;
		default:
			break;
	}
	return -1;
}

void func_185(var uParam0, int iParam1)
{
	func_210(uParam0, iParam1);
}

void func_186(var uParam0, int iParam1)
{
	func_211(uParam0, iParam1);
}

void func_187(var uParam0, struct<14> Param1, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, Param1.f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, Param1.f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, Param1.f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, Param1.f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_61(Param1.f_1, Param1.f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, Param1.f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, "");
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, "");
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, -1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

int func_188(int iParam0)
{
	if (!func_50(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_25(iParam0, 1) /*46*/].f_2;
}

bool func_189(bool bParam0, float fParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_104(bParam0))
	{
		return false;
	}
	Var0 = { func_101(bParam2) };
	if (func_191(bParam0, Var0, fParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

int func_190(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_212(iVar0);
}

int func_191(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_51(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_171(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_52(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_108(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_192(bool bParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_104(bParam0))
	{
		return 0;
	}
	Var0 = { func_101(bParam1) };
	if (func_191(bParam0, Var0, -6.307836f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_191(bParam0, Var0, 1.117204E+09f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_191(bParam0, Var0, -7.899958E+20f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_191(bParam0, Var0, -7.941008E+09f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_191(bParam0, Var0, -0.105234f, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_193(int iParam0, bool bParam1)
{
	struct<4> Var0;

	Var0 = { func_101(bParam1) };
	return func_103(Var0, func_100(iParam0), 0, bParam1);
}

bool func_194(var uParam0)
{
	return uParam0->f_15 >= func_75(uParam0->f_13);
}

bool func_195(var uParam0)
{
	return UNLOCK::UNLOCK_IS_VISIBLE(uParam0->f_2);
}

int func_196(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;

	bVar0 = func_21(iParam0);
	if (!func_51(bVar0, 0))
	{
		return func_75(iParam0);
	}
	if (!func_60(bVar0, iParam1, &Var2, &iVar1, 1, 0))
	{
		return func_75(iParam0);
	}
	iVar33 = 0;
	while (iVar33 < iVar1)
	{
		if (Var2[iVar33 /*2*/] != 3.078375E+12f)
		{
		}
		else
		{
			return Var2[iVar33 /*2*/].f_1;
		}
		iVar33++;
	}
	return 0;
}

bool func_197(bool bParam0, var uParam1)
{
	*uParam1 = func_213(bParam0, 1);
	return *uParam1 != 0;
}

bool func_198(bool bParam0, var uParam1)
{
	*uParam1 = func_214(bParam0, 1, 0);
	return *uParam1 != 0;
}

bool func_199(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

char* func_200(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_215(iVar0);
}

bool func_201(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

bool func_202(bool bParam0, int iParam1)
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

void func_203(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_204(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_205(bool bParam0)
{
	int iVar0;

	iVar0 = func_108(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_52(8.681942E-06f, func_101(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_52(8.681942E-06f, func_101(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_52(8.681942E-06f, func_101(bParam0), -1.942248E+12f, 0);
}

void func_206(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_207(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_108(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_208(int iParam0)
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

struct<5> func_209(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_101(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_165(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_52(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_205(bParam1) };
			if (iParam2 && func_216(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_217(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_217(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_218(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_219(bParam1) };
			switch (func_168(bParam0))
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
			if (func_220(bParam0, -2.580501E-27f))
			{
				Var0 = { func_52(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_220(bParam0, -4.220332E-15f))
			{
				Var0 = { func_52(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_52(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_220(bParam0, -3.171238E-21f))
			{
				Var0 = { func_52(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_221(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_220(bParam0, -3.171238E-21f))
			{
				Var0 = { func_52(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

void func_210(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_212(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2.241209E-35f;
		case 1:
			return -6.371611E+17f;
		case 2:
			return 5.648048E-30f;
		default:
			break;
	}
	return 0;
}

int func_213(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_222(iVar0, 1, 0);
		if (!func_60(bParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_110(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_111(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
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

int func_214(bool bParam0, bool bParam1, bool bParam2)
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
		iVar40 = func_222(iVar0, 0, 1);
		if (!func_60(bParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_113(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_111(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
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

char* func_215(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_CARD_TIER_ONE";
		case 1:
			return "MP_PLAYER_CARD_TIER_TWO";
		case 2:
			return "MP_PLAYER_CARD_TIER_THREE";
		default:
			break;
	}
	return "NP_CARD_TIER_INVALID";
}

int func_216(bool bParam0, bool bParam1)
{
	if (func_168(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_223();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_217(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_191(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_218(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_224(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_219(bool bParam0)
{
	int iVar0;

	iVar0 = func_108(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_52(3.507197E-29f, func_101(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_52(3.507197E-29f, func_101(bParam0), 12999093, 0);
}

bool func_220(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_168(bParam0);
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
			if (func_225(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_221(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_226(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_222(int iParam0, bool bParam1, bool bParam2)
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

int func_223()
{
	if (func_227(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_224(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_108(0);
	*iParam1 = { func_52(bParam0, func_205(0), fParam3, 0) };
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

bool func_225(bool bParam0, int iParam1, int iParam2)
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

int func_226(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_108(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

int func_227(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_228(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_108(bParam1), iParam0, bParam3);
}

bool func_228(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

