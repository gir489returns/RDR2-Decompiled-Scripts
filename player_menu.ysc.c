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
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	char* sLocal_24 = NULL;
	char* sLocal_25 = NULL;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_24 = "props_misc@campfires@5_logs";
	sLocal_25 = "Script_PropCampfire";
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_1();
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (func_2(255))
		{
			return;
		}
		switch (Global_1896762)
		{
			case 0:
				PAD::_SET_CONTROL_CONTEXT(4, 1.130572E+20f);
				if (func_3())
				{
					MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
					func_4(1);
				}
				else
				{
					func_4(2);
				}
				break;
			case 1:
				if (!func_5())
				{
					func_4(2);
				}
				else
				{
					func_6();
				}
				break;
			case 2:
				func_1();
				break;
		}
		VOICE::_0x1C38C3577901AF1F();
		BUILTIN::WAIT(0);
	}
	func_1();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1()
{
	func_7();
	func_8();
	func_9();
	func_10();
	func_11("");
	func_12();
	func_13(0);
	func_14();
	func_15();
	if (func_16())
	{
		func_17();
	}
	func_18(0);
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
	MISC::CANCEL_ONSCREEN_KEYBOARD();
	NETWORK::_0x49CF17A564918E8D();
	func_19();
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
	}
	func_4(0);
	HUD::_DISABLE_HUD_CONTEXT(-1.183915E+20f);
	HUD::_DISABLE_HUD_CONTEXT(-1.26424E-07f);
	func_20();
	func_21();
	func_22();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_2(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_23(36, iParam0);
}

bool func_3()
{
	int iVar0;
	bool bVar1;
	char* sVar2;

	iVar0 = 0;
	bVar1 = false;
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
	{
		bVar1 = true;
	}
	sVar2 = func_24(Global_1896762.f_365);
	if (UIAPPS::LAUNCH_UIAPP_WITH_ENTRY("player_menu", sVar2) == 0 || bVar1)
	{
		iVar0 = 1;
		Global_1896762.f_356 = 0;
	}
	TXD::REQUEST_STREAMED_TXD(-4.378314E+10f, false);
	TXD::REQUEST_STREAMED_TXD(2.791546E+33f, false);
	TXD::REQUEST_STREAMED_TXD(2.48646E-06f, false);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_366))
	{
		Global_1896762.f_366 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", false);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_367))
	{
		Global_1896762.f_367 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedtoAbandon", false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_366, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_367, false);
	if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
	{
		func_25(42, 0);
	}
	return iVar0;
}

void func_4(int iParam0)
{
	if (Global_1896762 != iParam0)
	{
		Global_1896762 = iParam0;
	}
}

bool func_5()
{
	bool bVar0;

	bVar0 = func_26();
	if (func_27())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_28();
	}
	func_29();
	func_30();
	if (bVar0)
	{
		func_31(Global_1940239.f_1556);
	}
	func_32();
	return bVar0;
}

void func_6()
{
	PAD::DISABLE_CONTROL_ACTION(0, NaNf, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.252231E+16f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.349376E+15f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.489451E-29f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.302565E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -7.533967E+23f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -5.413385E-27f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -4.491091E+18f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
}

void func_7()
{
	Global_1896762.f_365 = -1;
}

void func_8()
{
	Global_1940239.f_1556.f_1 = -1;
}

void func_9()
{
	Global_1940239.f_1556 = -1;
}

void func_10()
{
	Global_1940239.f_1556.f_2 = -1;
	func_33(5, 0);
}

void func_11(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_3, sParam0);
}

int func_12()
{
	char* sVar0;

	if (!func_34(Global_1295619.f_1))
	{
		return 0;
	}
	sVar0 = PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[Global_1295619]);
	if (!func_35(Global_1295619.f_1, sVar0))
	{
		return 0;
	}
	return 1;
}

void func_13(int iParam0)
{
	Global_1940239.f_1556.f_4168.f_2083 = iParam0;
}

void func_14()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_36(iVar0, 1);
		iVar0++;
	}
}

void func_15()
{
	var uVar0;

	Global_1940239.f_1556.f_1082 = -1;
	MISC::COPY_SCRIPT_STRUCT(&(Global_1940239.f_1556.f_1082.f_1), &uVar0, 2);
	func_37();
}

bool func_16()
{
	return Global_1940239.f_4;
}

void func_17()
{
	func_38(1, -4.420914E-10f);
	func_39();
}

void func_18(bool bParam0)
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

void func_19()
{
	if (Global_1572887.f_14 == -1)
	{
		return;
	}
	Global_1072759.f_2 = 0;
}

void func_20()
{
	Global_1896762.f_5 = 0;
}

void func_21()
{
	if (!func_40(0))
	{
		return;
	}
	func_33(0, 0);
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1896762.f_1.f_3)
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), Global_1896762.f_1[iVar0 /*2*/], Global_1896762.f_1[iVar0 /*2*/].f_1, false);
		iVar0++;
	}
	Global_1896762.f_1.f_3 = 0;
}

bool func_23(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_41(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_42())
	{
		return func_41(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_41(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mp";
		case 1:
			return "mp_matchmaking";
		case 2:
			return "mp_camp_selection";
		case 3:
			return "mp_moonshine_selection";
		case 4:
			return "mp_moonshine_property_player_invite";
		case 5:
			return "mp_invites";
		case 6:
			return "mp_post_office";
		case 8:
			return "mp_emote_types";
		case 9:
			return "mp_minigame";
		case 10:
			return "mp_minigame_landing";
		case 11:
			return "mp_minigame_jip_landing";
		case 12:
			return "mp_minigame_invites";
		case 13:
			return "mp_minigame_invite_players";
		default:
			break;
	}
	return "mp";
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1896762.f_1.f_3 >= 1)
	{
		return 0;
	}
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), iParam0, iParam1, true);
	Global_1896762.f_1[Global_1896762.f_1.f_3 /*2*/] = iParam0;
	Global_1896762.f_1[Global_1896762.f_1.f_3 /*2*/].f_1 = iParam1;
	Global_1896762.f_1.f_3++;
	return 1;
}

bool func_26()
{
	return Global_1896762.f_352;
}

bool func_27()
{
	int iVar0;

	iVar0 = 0;
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
	{
		iVar0 = 1;
	}
	if (Global_1140755.f_293 && !Global_1120482.f_18167.f_4)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_28()
{
	int iVar0;

	iVar0 = func_43();
	if (!func_44(iVar0) && iVar0 != func_45())
	{
		func_46(func_45());
		func_47(func_45());
		func_48(iVar0);
		if (func_49() == -1)
		{
			func_52(func_50(), func_51());
		}
		if (iVar0 != func_49())
		{
			func_53(iVar0);
		}
		func_10();
	}
	if (func_54())
	{
		func_52(func_45(), func_51());
		func_55(1);
		func_56();
		func_53(func_49());
		func_31(func_49());
		func_33(5, 0);
	}
}

void func_29()
{
	var uVar0;
	var uVar1;
	struct<4> Var2;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	struct<55> Var15;
	int iVar70;
	struct<59> Var71;
	struct<2> Var130;
	struct<6> Var132;
	int iVar138;
	int iVar139;
	int iVar140;
	int iVar141;
	int iVar142;
	char cVar143[32];
	int iVar147;
	int iVar148;
	int iVar149;
	int iVar150;
	int iVar151;
	char* sVar152;
	char* sVar153;
	int iVar154;
	bool bVar155;
	bool bVar156;
	int iVar157;
	int iVar158;
	struct<4> Var159;
	int iVar163;

	if (!func_26())
	{
		return;
	}
	fVar6 = 1.608566E+13f;
	iVar7 = Global_1295619.f_149[Global_1295619];
	iVar9 = Global_1295619.f_10;
	Var15.f_33 = 7;
	Var15.f_51 = -1;
	Var71 = 255;
	Var71.f_13 = NaNf;
	Var71.f_16.f_2 = -5.544348E+20f;
	Var71.f_16.f_4 = 3;
	Var71.f_21 = -1;
	Var71.f_25 = 1;
	Var71.f_26 = 1;
	Var71.f_27 = 1;
	Var71.f_28 = 32;
	Var71.f_29 = 1;
	Var71.f_30 = -2;
	Var71.f_42.f_5 = -1;
	Var71.f_48 = -1;
	Var71.f_48.f_1 = -1;
	Var71.f_50.f_3 = -1;
	Var132 = -1;
	Var132.f_1 = -1;
	Var132.f_2 = -1;
	Var132.f_4 = -1;
	Var132.f_5 = -1;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar6))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar6, &Var2))
		{
			switch (Var2)
			{
				case -1340543710:
					func_57(Var2, Var2.f_2);
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
					break;
				case -1151569080:
					iVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(41));
					if (iVar10 != 0)
					{
						iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
						func_59(iVar10, iVar13);
						switch (iVar10)
						{
							case 822989203:
								switch (iVar13)
								{
									case joaat("NM_MW_POSSE_TYPE_TEMPORARY"):
										func_60(0, 0);
										break;
									case joaat("NM_MW_POSSE_TYPE_PERSISTENT"):
										func_60(1, 0);
										break;
								}
								break;
							case -1611253054:
								iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
								break;
							case 1908740613:
								iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
								iVar139 = iVar13;
								func_61(iVar139 == 2.107511E-34f);
								func_62();
								break;
							case -91914989:
								iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
								iVar140 = iVar13;
								func_63(iVar140);
								func_62();
								break;
							case 1163184660:
								iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
								iVar141 = iVar13;
								func_64(iVar141 == -1.311538E+28f);
								func_62();
								break;
							case -1703621955:
								func_65(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36)));
								break;
							case -736673978:
								func_66(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36)));
								func_67(1);
								func_68();
								func_70(func_69(), 27.64779f);
								break;
							case 1601127062:
								func_71(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36)));
								break;
							case -758850690:
								func_73(func_72(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36))));
								break;
							case 87004688:
								func_74(func_72(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36))));
								break;
							case -2036453627:
								func_75(func_72(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36))));
								break;
							case 1505306971:
								func_76(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36)));
								break;
							case 1234263153:
								iVar12 = func_77(iVar7);
								iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
								if (iVar13 == 4.336308E+11f)
								{
									if (func_78(iVar12))
									{
										if (func_79(iVar12))
										{
											func_80(iVar12);
										}
									}
								}
								else if (iVar13 == -1.508841E-07f)
								{
									if (!func_78(iVar12))
									{
										if (func_81(iVar12))
										{
											func_82(iVar12);
										}
									}
								}
								break;
						}
					}
					else
					{
						switch (Var2.f_2)
						{
							case -1996395310:
								if (Var2.f_1 > 0)
								{
									func_83(1);
								}
								else
								{
									func_83(0);
								}
								break;
							case -1712603330:
								if (!func_85(func_84()))
								{
									func_55(1);
								}
								break;
						}
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
					break;
				case -1740156697:
					func_86(&Var2);
					func_87(&Var2);
					func_55(1);
					iVar11 = Var2.f_2;
					iVar10 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(41));
					iVar13 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, func_58(36));
					func_59(iVar10, iVar13);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_44, false);
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_45, false);
					switch (iVar11)
					{
						case -1537476917:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_84, true);
							break;
						case -1594107850:
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_122, true);
							if (UNLOCK::_UNLOCK_IS_NEW(5.333205E+11f))
							{
								UNLOCK::_UNLOCK_SET_NEW(5.333205E+11f, false);
							}
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_131, false);
							DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_120, true);
							DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1220.f_119, MISC::VAR_STRING(2, "NM_FR_CHARACTER_DETAILS_INFO"));
							break;
						case 238850895:
							if (func_88())
							{
								iVar8 = func_89();
								if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar8))
								{
									func_90(iVar8, 1);
									func_91(2.324372E-30f, 1);
								}
							}
							break;
						case 1229094512:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case -758886156:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 252544183:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 573237416:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 72556410:
							func_67(1);
							func_68();
							break;
						case -1080557963:
							func_93(1);
							func_94();
							func_95();
							break;
						case -1103748417:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case -779773310:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 298326212:
							if (func_96(&(Var2.f_3), &Var15))
							{
								func_97(&Var15);
							}
							break;
						case 1930452436:
							if (func_98())
							{
								if (func_99())
								{
									if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
									{
										func_70(MISC::VAR_STRING(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME"), 27.64779f);
									}
									else if (!NETWORK::_UGC_HAS_PRIVILEGE())
									{
										func_70(MISC::VAR_STRING(2, "NM_GC_UGC_RESTRICT"), 27.64779f);
									}
									else
									{
										func_70(MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE"), 27.64779f);
									}
								}
								else
								{
									func_70(MISC::VAR_STRING(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN"), 4.465091E-08f);
								}
							}
							else
							{
								func_70(MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP"), 27.64779f);
							}
							break;
						case 1962827136:
							func_100();
							func_101();
							func_102();
							break;
						case -949910923:
							func_103();
							break;
						case -1577085532:
						case -1181862186:
						case -715226337:
						case -265461064:
						case -183012873:
						case 161109887:
							func_104(Var2.f_1);
							break;
						case 271601522:
							func_105(3);
							break;
						case -766526475:
							func_105(0);
							break;
						case 388232363:
							func_105(1);
							break;
						case -783563355:
							func_105(2);
							break;
						case -446710138:
							func_106();
							break;
						case -1997447231:
						case -1890363343:
						case -630943934:
						case 1191420897:
						case 1222267777:
						case 1528509922:
							func_107(Var2.f_1);
							break;
						case 697595630:
							func_108(3);
							break;
						case -516833774:
							func_108(0);
							break;
						case -1523420457:
							func_108(1);
							break;
						case -189386465:
							func_108(2);
							break;
						case 908022114:
							break;
						case 1219657827:
							Global_1940239.f_245.f_1309 = 0;
							break;
						case 290710310:
						case 1685218753:
							Global_1940239.f_245 = Var2.f_3;
							break;
						case 1891046454:
							func_109(NaNf, -6.178593E-30f);
							func_110(-6.178593E-30f);
							break;
						case -1431653946:
							func_109(NaNf, 1.214845E+35f);
							func_110(1.214845E+35f);
							break;
						case 1603044301:
							func_111(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							func_113(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_112());
							func_114(func_112(), DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"));
							break;
						case 1537752051:
							Global_1940239.f_1556.f_6258 = 3;
							Global_1940239.f_1556.f_6258.f_1 = func_115(Global_1940239.f_1556.f_6258);
							func_116(Global_1940239.f_1556.f_6258.f_1);
							break;
						case 2073308105:
							Global_1940239.f_1556.f_6258 = 1;
							Global_1940239.f_1556.f_6258.f_1 = func_115(Global_1940239.f_1556.f_6258);
							func_116(Global_1940239.f_1556.f_6258.f_1);
							break;
						case 519925072:
							Global_1940239.f_1556.f_6258 = 0;
							Global_1940239.f_1556.f_6258.f_1 = func_115(Global_1940239.f_1556.f_6258);
							func_116(Global_1940239.f_1556.f_6258.f_1);
							break;
						case 1070510924:
							Global_1940239.f_1556.f_6258 = 2;
							Global_1940239.f_1556.f_6258.f_1 = func_115(Global_1940239.f_1556.f_6258);
							func_116(Global_1940239.f_1556.f_6258.f_1);
							break;
						case -1309595911:
							if (Global_1940239.f_1556.f_6258.f_5)
							{
								Global_1940239.f_1556.f_6258.f_2 = Var2.f_1;
								Global_1940239.f_1556.f_6258.f_1 = func_117(Global_1940239.f_1556.f_6258, Var2.f_1);
							}
							else
							{
								Global_1940239.f_1556.f_6258.f_2 = func_118(Global_1940239.f_1556.f_6258, Global_1940239.f_1556.f_6258.f_1);
								iVar14 = Global_1940239.f_1556.f_6258;
								if (iVar14 < 0 || iVar14 > (4 - 1))
								{
								}
								else
								{
									Global_1940239.f_1556.f_6258.f_1 = Global_17418.f_55.f_2501[iVar14 /*7*/].f_2[Var2.f_1];
									func_116(Global_1940239.f_1556.f_6258.f_1);
									Jump @3147; //curOff = 2652
									func_119(Var2.f_3);
									func_120(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_district"));
									Jump @3147; //curOff = 2679
									func_122(func_121(iVar11));
									func_123(func_121(iVar11));
									Jump @3147; //curOff = 2702
									func_124();
									DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_44, true);
									DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_45, true);
									func_122(func_121(iVar11));
									func_123(func_121(iVar11));
									Jump @3147; //curOff = 2763
									func_125();
									func_126();
									Jump @3147; //curOff = 2774
									Global_1120482.f_18167 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
									Global_1120482.f_18167.f_5 = Var2.f_3;
									Jump @3147; //curOff = 2809
									Global_1141051.f_53.f_1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "slot_idx");
									Jump @3147; //curOff = 2832
									if (Global_1940239.f_1556.f_8925.f_22 == DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission"))
									{
										Global_1940239.f_1556.f_8925.f_126 = 0;
									}
									StringCopy(&(Global_1940239.f_1556.f_8925.f_14), "", 64);
									Global_1940239.f_1556.f_8925.f_22 = -1;
									Global_1940239.f_1556.f_8925.f_120 = 0;
									Global_1940239.f_1556.f_8925.f_121 = 0;
									func_127(&(Global_1940239.f_1556.f_8925.f_42));
									StringCopy(&(Global_1940239.f_1556.f_8925.f_14), DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission_name"), 64);
									Global_1940239.f_1556.f_8925.f_22 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission");
									Jump @3147; //curOff = 2997
									StringCopy(&cVar143, DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_playlist_name"), 32);
									iVar142 = 0;
									while (iVar142 < 32)
									{
										if (MISC::ARE_STRINGS_EQUAL(&(Global_265213.f_107995[iVar142 /*4*/]), &cVar143))
										{
											Global_1940239.f_1556.f_8925.f_25 = 0;
											Global_1940239.f_1556.f_8925.f_5 = Global_265213.f_107995.f_257[iVar142];
										}
										else
										{
											iVar142++;
										}
									}
									Jump @3147; //curOff = 3101
									iVar147 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_giver_slot");
									Global_1120482[iVar147 /*4533*/].f_22 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
								}
								UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
								Jump @8798; //curOff = 3153
								switch (Var2.f_2)
								{
									case -1537476917:
										DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_84, false);
										break;
								}
								UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
								Jump @8798; //curOff = 3197
								switch (Var2.f_2)
								{
									case 1930452436:
										func_128();
										break;
									case -55349945:
										func_129();
										break;
									case -135401173:
										func_130();
										break;
									case 101104516:
										UIAPPS::_CLOSE_UIAPP_BY_HASH_IMMEDIATE(1.608566E+13f);
										func_131();
										break;
									case 290710310:
										func_132(Var2.f_3);
										break;
									case 1685218753:
										func_133(Global_1940239.f_245);
										break;
									case -2111588953:
										func_134(Global_1940239.f_245);
										break;
									case -533058584:
										break;
									case 110545328:
										func_135(Global_1940239.f_245);
										break;
									case 1471279564:
										if (func_136())
										{
											func_138(func_137());
										}
										else
										{
											func_138(0);
										}
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										break;
									case 855278636:
										if (func_139())
										{
											func_141(func_140());
										}
										else
										{
											func_141(0);
										}
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										break;
									case -1390952377:
										func_142(6);
										break;
									case 1050964521:
										func_142(14);
										break;
									case 334553069:
										func_142(54);
										func_143();
										break;
									case -1239884668:
										func_142(53);
										func_143();
										break;
									case -1487960093:
										UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-7.419565E+10f, 1.919398E-26f);
										break;
									case -350804472:
										func_144(128);
										break;
									case 647482278:
										func_144(256);
										break;
									case -2051980641:
										func_146(func_145(), 8);
										func_147();
										break;
									case -1862490249:
										func_144(512);
										if (!func_148(4096))
										{
											UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(1.608566E+13f, 7.469064E-10f);
										}
										else
										{
											func_147();
										}
										break;
									case 1211445926:
										func_144(16384);
										break;
									case 1671201754:
										func_143();
										func_142(19);
										break;
									case -1513928818:
										func_143();
										func_142(18);
										break;
									case -1321015585:
										func_142(23);
										break;
									case 298326212:
										func_33(7, 1);
										if (func_96(&(Var2.f_3), &Var15))
										{
											func_149();
											func_143();
											func_150(&Var15);
											func_142(17);
											func_151(8.528219E-25f);
										}
										break;
									case -1103748417:
										if (func_152())
										{
											func_142(7);
											func_151(-0.1467464f);
										}
										break;
									case -974997823:
										func_142(23);
										break;
									case -1320685749:
										func_142(22);
										break;
									case 252544183:
										if (func_152())
										{
											func_149();
											func_142(7);
											func_151(-0.1467464f);
										}
										break;
									case 519925072:
									case 1070510924:
									case 1537752051:
									case 2073308105:
										iVar14 = Global_1940239.f_1556.f_6258;
										if (iVar14 < 0 || iVar14 > (4 - 1))
										{
										}
										else
										{
											DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1940239.f_1556.f_6258.f_13);
											Global_1940239.f_1556.f_6258.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1940239.f_1556.f_6258.f_6, 1.061295E+30f);
											func_153(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar14 /*7*/]));
											DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_6258.f_8, func_154(Global_1940239.f_1556.f_6258));
											func_155(Global_1940239.f_1556.f_6258.f_1 != 0);
											Jump @8730; //curOff = 4712
											iVar14 = Global_1940239.f_1556.f_6258;
											if (iVar14 < 0 || iVar14 > (4 - 1))
											{
											}
											else
											{
												DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1940239.f_1556.f_6258.f_13);
												Global_1940239.f_1556.f_6258.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1940239.f_1556.f_6258.f_6, 1.061295E+30f);
												if (Global_1940239.f_1556.f_6258.f_5)
												{
													Global_1940239.f_1556.f_6258.f_5 = !Global_1940239.f_1556.f_6258.f_5;
													func_156(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar14 /*7*/]));
												}
												else
												{
													Global_1940239.f_1556.f_6258.f_5 = !Global_1940239.f_1556.f_6258.f_5;
													func_153(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar14 /*7*/]));
												}
												Global_1940239.f_1556.f_6258.f_4 = 1;
												Jump @8730; //curOff = 4933
												iVar14 = Global_1940239.f_1556.f_6258;
												if (iVar14 < 0 || iVar14 > (4 - 1))
												{
												}
												else
												{
													if (Global_17418.f_55.f_2501[iVar14 /*7*/].f_1 == -1 || Global_17418.f_55.f_2501[iVar14 /*7*/].f_2[Global_17418.f_55.f_2501[iVar14 /*7*/].f_1] != Global_1940239.f_1556.f_6258.f_1)
													{
														func_157(&(Global_17418.f_55.f_2501[iVar14 /*7*/]), Global_1940239.f_1556.f_6258, Global_1940239.f_1556.f_6258.f_1);
													}
													else
													{
														func_158(&(Global_17418.f_55.f_2501[iVar14 /*7*/]), Global_1940239.f_1556.f_6258);
													}
													Jump @8730; //curOff = 5107
													iVar14 = Global_1940239.f_1556.f_6258;
													if (iVar14 < 0 || iVar14 > (4 - 1))
													{
													}
													else
													{
														Global_1940239.f_1556.f_6258.f_3 = 1;
														if (Global_1940239.f_1556.f_6258.f_2 > -1 && Global_1940239.f_1556.f_6258.f_2 < 56)
														{
															Global_1940239.f_1556.f_6258.f_1807[Global_1940239.f_1556.f_6258.f_2] = 1;
														}
														iVar148 = func_159(&(Global_17418.f_55.f_2501), Global_1940239.f_1556.f_6258, Global_1940239.f_1556.f_6258.f_1);
														if (!Global_1940239.f_1556.f_6258.f_5 && iVar148 == 1)
														{
															DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1940239.f_1556.f_6258.f_13);
															Global_1940239.f_1556.f_6258.f_13 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_BY_HASH(Global_1940239.f_1556.f_6258.f_6, 1.061295E+30f);
															func_156(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar14 /*7*/]));
														}
														Global_1940239.f_1556.f_6258.f_4 = 1;
														Jump @8730; //curOff = 5372
														func_160();
														func_162(func_161(), func_161());
														Jump @8730; //curOff = 5392
														func_163(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_walk_enum"));
														Jump @8730; //curOff = 5411
														func_164();
														Jump @8730; //curOff = 5418
														Global_1940239.f_1556.f_8450.f_167 = Var2.f_3;
														func_165(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_spin_enum"));
														Jump @8730; //curOff = 5453
														func_166(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Global_1940239.f_1556.f_8450.f_167, "dynamic_list_item_spin_enum"));
														Jump @8730; //curOff = 5480
														func_147();
														Jump @8730; //curOff = 5487
														if (func_168(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "posse_versus_content_type"), func_167()))
														{
															func_147();
														}
														else
														{
															iVar149 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(57));
															if (iVar149 == 0)
															{
															}
															else
															{
																switch (iVar149)
																{
																	case 97603778:
																		func_142(21);
																		func_143();
																		break;
																}
															}
														}
														Jump @8730; //curOff = 5573
														if (func_168(4, func_167()) || func_168(5, func_167()))
														{
															func_147();
														}
														Jump @8730; //curOff = 5610
														iVar150 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district");
														iVar151 = func_112();
														if (func_169(iVar151, iVar150))
														{
															if (func_170())
															{
																func_171(iVar150, iVar151);
																func_151(5.636846E+30f);
															}
															else if (func_172(DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "camp_selection_district"), func_112(), 1, 0))
															{
																func_173(512);
																func_151(5.636846E+30f);
															}
														}
														Jump @8730; //curOff = 5718
														func_174(-6.178593E-30f);
														func_142(40);
														Jump @8730; //curOff = 5737
														func_174(1.214845E+35f);
														func_142(40);
														Jump @8730; //curOff = 5756
														func_175();
														func_176();
														func_147();
														Jump @8730; //curOff = 5772
														func_142(39);
														Jump @8730; //curOff = 5782
														func_177();
														Global_1297394.f_77 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(Var2.f_3, "moonshine_selection_property");
														Jump @8730; //curOff = 5807
														func_142(24);
														Jump @8730; //curOff = 5817
														func_142(42);
														Jump @8730; //curOff = 5827
														func_178();
														func_147();
														Jump @8730; //curOff = 5838
														func_147();
														Jump @8730; //curOff = 5845
														if (func_179())
														{
															func_180(14);
															func_151(-26805.2f);
														}
														else
														{
															func_142(14);
															func_151(-9.041249E+27f);
														}
														func_143();
														Jump @8730; //curOff = 5895
														func_151(8.528219E-25f);
														Jump @8730; //curOff = 5908
														func_181(func_40(3), 0);
														func_143();
														if (func_40(3))
														{
															func_33(3, 0);
														}
														Jump @8730; //curOff = 5939
														func_142(17);
														func_143();
														Jump @8730; //curOff = 5953
														func_56();
														func_182();
														Jump @8730; //curOff = 5964
														func_183(1);
														func_33(1, 0);
														func_142(15);
														func_143();
														func_151(-3.843612E+15f);
														Jump @8730; //curOff = 5999
														func_183(0);
														func_143();
														func_33(1, 0);
														Jump @8730; //curOff = 6017
														func_142(20);
														func_143();
														Jump @8730; //curOff = 6031
														func_142(6);
														func_143();
														Jump @8730; //curOff = 6044
														if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Var2.f_3))
														{
															Var130 = { func_184(Var2.f_3, func_58(32)) };
															sVar152 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, func_58(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var130))
															{
															}
															else if (!func_185(Var130, sVar152, 0))
															{
															}
														}
														Jump @8730; //curOff = 6122
														func_187(&(Global_1896762.f_368.f_1), func_186());
														Jump @8730; //curOff = 6142
														if (!func_188())
														{
														}
														else if (func_189(&uVar1, &uVar0))
														{
															if (func_98())
															{
																func_193(func_190(), func_191(), uVar1, uVar0, func_192());
															}
															else
															{
																func_194(func_190(), func_191(), uVar1, uVar0);
															}
															func_195(0);
														}
														Jump @8730; //curOff = 6223
														Var15 = { func_196(1) };
														if (func_197(&Var15))
														{
															func_198(Var15.f_2, 1);
															func_199(4);
														}
														else if (Var15.f_1 == Global_1295619.f_10)
														{
															func_200(1);
															func_199(4);
														}
														Jump @8730; //curOff = 6291
														Var15 = { func_196(1) };
														if (func_201(&Var15))
														{
															func_202(32);
															func_203(1, 1);
															func_199(7);
														}
														else if (Var15.f_1 == Global_1295619.f_10)
														{
															func_200(1);
															func_199(4);
														}
														Jump @8730; //curOff = 6362
														Var15 = { func_196(1) };
														if (func_201(&Var15))
														{
															func_202(32);
															func_203(1, 1);
															func_199(7);
														}
														else if (Var15.f_1 == Global_1295619.f_10)
														{
															func_200(1);
															func_199(4);
														}
														Jump @8730; //curOff = 6433
														func_204();
														Jump @8730; //curOff = 6440
														if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Var2.f_3))
														{
															Var130 = { func_184(Var2.f_3, func_58(32)) };
															sVar153 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(Var2.f_3, func_58(15));
															if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var130))
															{
																iVar154 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var130);
																if (func_205(iVar154))
																{
																	func_55(1);
																}
															}
															else if (func_185(Var130, sVar153, 0))
															{
																func_55(1);
															}
														}
														Jump @8730; //curOff = 6550
														if (!func_206(func_84()))
														{
														}
														Jump @8730; //curOff = 6565
														if (!func_208(func_207()))
														{
														}
														Jump @8730; //curOff = 6580
														if (!func_208(func_209()))
														{
														}
														Jump @8730; //curOff = 6595
														if (func_210(Var2.f_3))
														{
															func_55(1);
														}
														Jump @8730; //curOff = 6617
														if (func_211())
														{
															func_212(0);
															func_213(8388608);
														}
														else
														{
															func_212(1);
															func_214(8388608);
														}
														func_55(1);
														Jump @8730; //curOff = 6661
														if (func_215())
														{
															func_55(1);
														}
														Jump @8730; //curOff = 6676
														if (!GANG::NETWORK_IS_GANG_LEADER(iVar7))
														{
															return;
														}
														bVar155 = func_88();
														if (!bVar155)
														{
															if (Global_1940239.f_1556.f_149.f_2.f_4)
															{
																func_216(Global_1203937.f_483[Global_1203937.f_472 /*63*/], Global_1940239.f_1556.f_8);
																func_151(1.1535E-05f);
															}
															else
															{
																return;
															}
														}
														else
														{
															bVar156 = GANG::_NETWORK_IS_IN_MY_GANG(func_89());
															if (bVar156 || Global_1940239.f_1556.f_149.f_2.f_4)
															{
																if (bVar156)
																{
																	func_217(func_89(), 1, 120);
																}
																else
																{
																	func_216(Global_1203937.f_483[Global_1203937.f_472 /*63*/], Global_1940239.f_1556.f_8);
																}
																func_151(1.1535E-05f);
															}
														}
														Jump @8730; //curOff = 6870
														Var130 = { func_207() };
														if (!func_218(&Var130))
														{
														}
														Jump @8730; //curOff = 6891
														func_55(1);
														if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.624083E-27f))
														{
															if (!GANG::NETWORK_IS_GANG_LEADER(iVar7))
															{
																func_219(func_89(), 1);
															}
															else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar9) == GANG::_NETWORK_GET_GANG_SIZE(iVar9))
															{
																func_219(func_89(), 2);
															}
															else if (func_219(func_89(), -1))
															{
															}
														}
														Jump @8730; //curOff = 6977
														if (func_185(func_207(), func_220(), 0))
														{
															func_55(1);
														}
														Jump @8730; //curOff = 7001
														func_221(func_89());
														Jump @8730; //curOff = 7013
														Var130 = { func_207() };
														func_222(&Var130);
														func_147();
														Jump @8730; //curOff = 7034
														Var130 = { func_207() };
														if (!func_223(&Var130))
														{
														}
														Jump @8730; //curOff = 7055
														Var130 = { func_207() };
														if (!func_224(&Var130))
														{
														}
														Jump @8730; //curOff = 7076
														func_33(3, 1);
														if (GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(func_89())) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(func_89())))
														{
															if (func_225(GANG::NETWORK_GET_GANG_ID(func_89()), &Var15, 1))
															{
																func_150(&Var15);
															}
														}
														Jump @8730; //curOff = 7147
														switch (Var2.f_2)
														{
															case -2012882360:
																iVar157 = 0;
																break;
															case 1717935887:
																iVar157 = 1;
																break;
															case 566751030:
																iVar157 = 2;
																break;
															case 575735035:
																iVar157 = 3;
																break;
															case 1302293867:
																iVar157 = 4;
																break;
															case 1284519075:
																iVar157 = 5;
																break;
															case -36476126:
																iVar157 = 6;
																break;
															case 1296297252:
																iVar157 = 7;
																break;
															case 1463101399:
																iVar157 = 8;
																break;
														}
														if (func_226(func_207(), iVar157, func_220()))
														{
														}
														Jump @8730; //curOff = 7286
														Var15 = { func_196(1) };
														if (func_227(&Var15))
														{
															if (func_228(&Var15))
															{
																func_199(3);
															}
														}
														Jump @8730; //curOff = 7329
														Var15 = { func_196(1) };
														if (func_227(&Var15))
														{
															if (func_228(&Var15))
															{
																func_199(5);
															}
														}
														Jump @8730; //curOff = 7372
														Var15 = { func_196(1) };
														if (func_227(&Var15))
														{
															if (func_228(&Var15))
															{
																func_199(6);
															}
														}
														Jump @8730; //curOff = 7415
														if (func_229(DATABINDING::_0xE6AAB897120492D6(Var2.f_3, "posse_list_entry_gang_id")))
														{
															func_151(1.548106E+20f);
														}
														Jump @8730; //curOff = 7450
														if (func_230())
														{
															func_231(1);
														}
														DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887.f_72.f_113, false);
														DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_41, true);
														DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1174.f_40, "MATCHMAKING_LINK");
														func_144(262144);
														Jump @8730; //curOff = 7523
														func_232(2, 2);
														func_147();
														Jump @8730; //curOff = 7536
														func_232(3, 2);
														func_147();
														Jump @8730; //curOff = 7549
														func_232(4, 2);
														func_147();
														Jump @8730; //curOff = 7562
														func_232(5, 2);
														func_147();
														Jump @8730; //curOff = 7575
														func_232(6, 2);
														func_147();
														Jump @8730; //curOff = 7588
														func_232(8, 2);
														func_147();
														Jump @8730; //curOff = 7602
														func_232(9, 2);
														func_147();
														Jump @8730; //curOff = 7616
														func_232(0, 2);
														func_147();
														Jump @8730; //curOff = 7629
														func_232(1, 2);
														func_147();
														Jump @8730; //curOff = 7642
														iVar70 = 12;
														func_232(iVar70, 2);
														func_124();
														if (!func_234(func_233(12)))
														{
															func_235(16384);
														}
														else
														{
															func_147();
														}
														Jump @8730; //curOff = 7688
														func_232(15, 2);
														func_147();
														Jump @8730; //curOff = 7702
														func_232(16, 2);
														func_147();
														Jump @8730; //curOff = 7716
														func_232(17, 2);
														func_147();
														Jump @8730; //curOff = 7730
														func_232(19, 2);
														func_147();
														Jump @8730; //curOff = 7744
														func_232(18, 2);
														func_147();
														Jump @8730; //curOff = 7758
														func_232(func_236(), 2);
														func_147();
														Jump @8730; //curOff = 7774
														func_237();
														func_147();
														Jump @8730; //curOff = 7785
														func_238();
														func_147();
														Jump @8730; //curOff = 7796
														if (GANG::NETWORK_IS_GANG_ACTIVE(iVar9))
														{
															if (GANG::NETWORK_GET_GANG_LEADER(iVar9) == iVar7 && GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar9) == 1)
															{
																func_151(0.000217887f);
															}
															else
															{
																func_151(-1.452026E-30f);
															}
														}
														else
														{
															func_151(0.000217887f);
														}
														Jump @8730; //curOff = 7869
														func_239(1);
														func_240();
														func_147();
														func_241();
														if (func_242(255))
														{
															func_243(0, 0, 0, 1);
															if (!func_244(255))
															{
																func_245();
															}
															func_246(1, 1);
														}
														if (func_247())
														{
															func_248();
															func_249(0, 129);
														}
														else
														{
															func_200(1);
															func_250();
														}
														Jump @8730; //curOff = 7956
														func_251(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)));
														Jump @8730; //curOff = 7978
														func_252(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)));
														Jump @8730; //curOff = 8000
														func_253(0);
														func_254();
														Jump @8730; //curOff = 8012
														func_255(1);
														Jump @8730; //curOff = 8021
														func_256(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)));
														Jump @8730; //curOff = 8042
														iVar158 = func_257(PLAYER::PLAYER_ID());
														if (iVar158 == 3)
														{
															func_258(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)));
														}
														else
														{
															func_259(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 3);
														}
														Jump @8730; //curOff = 8101
														func_259(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 0);
														Jump @8730; //curOff = 8123
														func_259(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 1);
														Jump @8730; //curOff = 8145
														func_259(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 2);
														Jump @8730; //curOff = 8167
														func_260(0);
														func_261();
														Jump @8730; //curOff = 8179
														func_262(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)));
														Jump @8730; //curOff = 8200
														func_263(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 4);
														Jump @8730; //curOff = 8222
														func_263(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 5);
														Jump @8730; //curOff = 8244
														func_263(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, func_58(84)), 6);
														Jump @8730; //curOff = 8266
														Var159 = { func_264(0, 1, 0, -1) };
														TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(-5.510338E-28f, &Var159, 0);
														func_265(Var159, 2, 2);
														func_266();
														Jump @8730; //curOff = 8308
														Global_1120482.f_18167 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
														Global_1120482.f_18167.f_1 = 1;
														Global_1120482.f_18167.f_5 = Var2.f_3;
														Jump @8730; //curOff = 8353
														if (Global_1141051.f_53 == -1)
														{
															if (Global_1141051.f_53.f_2)
															{
															}
															else
															{
																Global_1141051.f_53 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "slot_idx");
															}
														}
														Jump @8730; //curOff = 8401
														if (Global_1141051.f_53 == -1)
														{
															if (Global_1141051.f_53.f_2)
															{
															}
															else
															{
																Global_1141051.f_53.f_2 = 1;
															}
														}
														Jump @8730; //curOff = 8440
														Global_1120482.f_18167.f_2 = 1;
														Jump @8730; //curOff = 8453
														if (!func_267(&Var71, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission"), -1, -1, 3) && !func_268(&Var71, DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission"), -1, -1, 3))
														{
														}
														else
														{
															if (UIAPPS::IS_UIAPP_RUNNING_BY_HASH(1.608566E+13f))
															{
																UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
															}
															func_269(0, 0);
															func_270(1);
															func_271(19);
															Var132.f_3 = 3;
															Var132.f_2 = func_272(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_cloud_drop_mission"));
															iVar138 = func_273(&Var132);
															func_274(Var71, func_167(), 1.084335E-19f, 1, iVar138);
															Jump @8730; //curOff = 8603
															func_275();
															func_276();
															func_277();
															func_70(MISC::VAR_STRING(2, "TELEGRAM_PLAYLIST_FOOTER"), 27.64779f);
															Jump @8730; //curOff = 8637
															func_278();
															func_279(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash"));
															Jump @8730; //curOff = 8661
															iVar163 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_giver_slot");
															Global_1120482[iVar163 /*4533*/].f_22 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(Var2.f_3, "dynamic_list_item_mission_hash");
															Global_1120482[iVar163 /*4533*/].f_21 = 1;
															UIAPPS::_CLOSE_UIAPP_BY_HASH(MISC::GET_HASH_KEY("player_menu"));
														}
													}
												}
											}
										}
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										Jump @8798; //curOff = 8736
										switch (Var2.f_2)
										{
											case -1373902020:
												func_280();
												break;
										}
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										Jump @8798; //curOff = 8768
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										Jump @8798; //curOff = 8777
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										Jump @8798; //curOff = 8786
										UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar6);
										func_281();
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

void func_30()
{
	int iVar0;

	if (Global_1940239.f_1556.f_9451 == 0)
	{
		return;
	}
	if (NETWORK::NETWORK_DID_GET_GAMER_STATUS_SUCCEED())
	{
		Global_1940239.f_1556.f_9450 = 1;
		Global_1940239.f_1556.f_9451 = 0;
		iVar0 = NETWORK::_NETWORK_GET_GAMER_STATUS(&(Global_1940239.f_1556.f_9453), 301);
	}
}

void func_31(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_282();
			func_283();
			break;
		case 1:
			func_283();
			func_284();
			break;
		case 2:
			break;
		case 3:
			func_285();
			break;
		case 4:
		case 5:
			func_286();
			break;
		case 14:
			func_287();
			break;
		case 16:
			func_288();
			break;
		case 19:
			func_289();
			break;
		case 15:
			func_290();
			break;
		case 17:
			func_291();
			break;
		case 23:
			func_292();
			break;
		case 22:
			func_293();
			break;
		case 18:
			func_294();
			break;
		case 6:
			func_295();
			break;
		case 54:
			func_296();
			break;
		case 7:
			func_297();
			break;
		case 47:
			func_298();
			break;
		case 8:
		case 9:
		case 10:
			func_299();
			break;
		case 11:
			func_300();
			break;
		case 24:
			func_301();
			break;
		case 25:
			func_302();
			break;
		case 26:
			func_303();
			break;
		case 27:
			func_304();
			break;
		case 28:
			func_305();
			break;
		case 29:
			func_306();
			break;
		case 30:
			func_307();
			break;
		case 31:
			func_308();
			break;
		case 32:
			func_309();
			break;
		case 33:
			func_310();
			break;
		case 34:
			func_311();
			break;
		case 35:
			func_312();
			break;
		case 36:
			func_313();
			break;
		case 37:
			func_314();
			break;
		case 38:
			func_315();
			break;
		case 39:
			func_316();
			break;
		case 40:
			func_317();
			break;
		case 41:
			func_318();
			break;
		case 42:
			func_319();
			break;
		case 44:
			func_320();
			break;
		case 20:
			func_321();
			break;
		case 21:
			func_322();
			break;
		case 43:
			func_323();
			break;
		case 50:
			func_324();
			break;
		case 51:
			func_325();
			break;
		case 52:
			func_326();
			break;
		case 55:
			func_327(0);
			break;
		case 57:
			if (func_328())
			{
				func_329();
			}
			break;
		case 58:
			func_330(58);
			break;
		case 56:
			if (func_328())
			{
				func_331();
			}
			break;
		case 60:
			func_332();
			break;
	}
	func_333();
	if (func_334())
	{
		func_335();
		Global_1940239.f_1556.f_9756.f_238 = 0;
	}
	if (func_336())
	{
		func_337();
		Global_1940239.f_1556.f_9756.f_239 = 0;
	}
	func_338();
	func_339();
	func_340();
	func_341();
	if (func_342())
	{
		func_143();
	}
}

int func_32()
{
	if (Global_1896762.f_325.f_5)
	{
		Global_1896762.f_325.f_5 = 0;
		return 1;
	}
	return 0;
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_343(&(Global_1896762.f_5), iParam0);
	}
	else
	{
		func_344(&(Global_1896762.f_5), iParam0);
	}
}

bool func_34(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_35(struct<2> Param0, char* sParam2)
{
	if (!func_34(Param0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1940239.f_1556.f_8), &Param0, 2);
	Global_1940239.f_1556.f_8.f_2 = { func_345(sParam2) };
	return true;
}

void func_36(int iParam0, bool bParam1)
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
	iVar37 = func_346(iParam0, 1);
	if (!func_347(iVar37, &Var0, 0, -1))
	{
		func_348(&Var0);
	}
	func_349(iParam0, &(Global_1940239.f_1556.f_4168.f_1579[iParam0 /*54*/]), Var0);
	if (bParam1 && func_350(iParam0))
	{
		func_351(&(Global_1940239.f_1556.f_4168.f_1985), &Var0, iParam0);
	}
}

void func_37()
{
	UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1940239.f_1556.f_9449);
	Global_1940239.f_1556.f_9449 = 0;
}

int func_38(bool bParam0, float fParam1)
{
	if (!NETWORK::NETWORK_IS_IN_SESSION())
	{
		return 0;
	}
	if (!Global_1102813.f_16)
	{
		return 0;
	}
	if (!func_352())
	{
		return 0;
	}
	if (!func_247())
	{
		return 0;
	}
	Global_0 = fParam1;
	if (bParam0)
	{
		func_353(&Global_0, 8);
	}
	func_353(&Global_0, 1);
	return 1;
}

void func_39()
{
	Global_1940239.f_4 = 0;
}

bool func_40(int iParam0)
{
	return func_354(Global_1896762.f_5, iParam0);
}

bool func_41(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_42()
{
	return Global_1102813.f_3672;
}

int func_43()
{
	int iVar0;

	iVar0 = func_355(UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.608566E+13f));
	if (func_356() != -1)
	{
		if (iVar0 == -1)
		{
			iVar0 = func_357(func_356());
		}
		else
		{
			func_7();
		}
	}
	return iVar0;
}

bool func_44(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

int func_45()
{
	return Global_1940239.f_1556;
}

void func_46(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	if (!func_40(7))
	{
		func_180(iParam0);
	}
	func_33(7, 0);
	func_70("", 27.64779f);
	iVar0 = func_355(UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.608566E+13f));
	switch (iParam0)
	{
		case 1:
			func_358();
			break;
		case 11:
			func_359();
			func_360();
			break;
		case 2:
		case 3:
			break;
		case 4:
			break;
		case 6:
		case 22:
		case 23:
			func_182();
			func_361();
			func_362(0);
			break;
		case 19:
			func_182();
			break;
		case 15:
			HUD::_DISABLE_HUD_CONTEXT(-1.26424E-07f);
			break;
		case 20:
			Global_1108965.f_775.f_27 = -1;
			break;
		case 18:
			func_363();
			break;
		case 46:
			Global_1940239.f_1556.f_6258.f_5 = 1;
			if (Global_1940239.f_1556.f_6258.f_3)
			{
				func_364();
				Global_1940239.f_1556.f_6258.f_3 = 0;
			}
			break;
		case 47:
			func_155(0);
			break;
		case 40:
			HUD::_DISABLE_HUD_CONTEXT(-1.183915E+20f);
			break;
		case 55:
			HUD::_DISABLE_HUD_CONTEXT(-1.183915E+20f);
			break;
		case 7:
			if ((iVar0 != 8 && iVar0 != 10) && iVar0 != 9)
			{
				func_12();
			}
			func_90(func_89(), 1);
			func_365();
			break;
		case 43:
			func_366();
			break;
		case 14:
		case 16:
		case 17:
			break;
		case 24:
			func_367();
			break;
		case 25:
			func_368();
			break;
		case 32:
			func_369();
			break;
		case 59:
			break;
		case 60:
			break;
	}
}

void func_47(int iParam0)
{
	Global_1940239.f_1556.f_1 = iParam0;
}

void func_48(int iParam0)
{
	Global_1940239.f_1556 = iParam0;
}

int func_49()
{
	return Global_1940239.f_1556.f_2;
}

int func_50()
{
	return Global_1940239.f_1556.f_1;
}

int func_51()
{
	return Global_1940239.f_1556.f_9756;
}

void func_52(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
			Global_1940239.f_1556.f_756 = uParam1;
			break;
		case 19:
			Global_1940239.f_1556.f_149.f_117.f_1 = uParam1;
			break;
		default:
			return;
	}
}

void func_53(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_370(iParam0);
	switch (iParam0)
	{
		case 0:
			func_371();
			func_56();
			break;
		case 1:
			func_372();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 13:
			func_373(0);
			break;
		case 7:
			func_374();
			break;
		case 16:
			func_375(iParam0, 1);
			break;
		case 14:
			func_376();
			break;
		case 15:
			func_377();
			break;
		case 19:
			func_378();
			break;
		case 17:
			func_375(iParam0, 0);
			func_379();
			break;
		case 18:
			func_380();
			break;
		case 6:
		case 22:
		case 23:
			func_381(iParam0);
			break;
		case 54:
			func_382();
			break;
		case 8:
		case 9:
		case 10:
			func_383();
			break;
		case 28:
			func_384();
			break;
		case 44:
			func_385();
			break;
		case 40:
			func_386();
			HUD::_ENABLE_HUD_CONTEXT(-1.183915E+20f);
			break;
		case 41:
			func_387(2f, 1);
			break;
		case 42:
			break;
		case 21:
			func_388();
			break;
		case 43:
			func_389();
			break;
		case 50:
			func_390();
			break;
		case 51:
			func_391();
			break;
		case 52:
			func_392();
			break;
		case 24:
			func_393();
			break;
		case 25:
			func_394();
			break;
		case 32:
			func_395();
			break;
		case 57:
			func_387(3f, 1);
			break;
		case 56:
			func_387(3f, 1);
			break;
		case 55:
			func_396();
			HUD::_ENABLE_HUD_CONTEXT(-1.183915E+20f);
			break;
		case 58:
			func_397();
			break;
		case 59:
			func_398();
			break;
	}
}

bool func_54()
{
	return func_40(5);
}

void func_55(bool bParam0)
{
	func_399(0, 1);
	if (bParam0)
	{
		func_399(1, 1);
	}
}

void func_56()
{
	int iVar0;

	Global_1940239.f_1556.f_9756 = 0;
	Global_1940239.f_1556.f_9756.f_1 = 0;
	Global_1940239.f_1556.f_9756.f_2 = -1;
	Global_1940239.f_1556.f_9756.f_3 = -1;
	Global_1940239.f_1556.f_9756.f_4 = 0;
	Global_1940239.f_1556.f_9756.f_236 = 1;
	Global_1940239.f_1556.f_9756.f_238 = 0;
	Global_1940239.f_1556.f_9756.f_240 = 1;
	Global_1940239.f_1556.f_9756.f_245 = 0;
	func_400(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&(Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_3), "", 128);
		Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_19 = 0;
		Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_2 = -1;
		Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/] = -1;
		iVar0++;
	}
}

void func_57(struct<4> Param0, int iParam4)
{
	struct<36> Var0;
	vector3 vVar37;
	vector3 vVar40;
	int iVar43;
	vector3 vVar44;
	vector3 vVar47;

	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_35 = -1;
	switch (iParam4)
	{
		case 778915895:
			if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Param0.f_3, func_58(90)))
			{
				return;
			}
			else if (!func_401())
			{
				func_132(Param0.f_3);
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Param0.f_3, func_58(90), true);
			func_402(Param0.f_3);
			break;
		case 1126679425:
			Var0 = Param0.f_1;
			func_347(Var0, &Var0, 2, -1);
			func_90(PLAYER::PLAYER_ID(), 0);
			func_404(func_403(Var0));
			func_405(&Var0);
			UIAPPS::LAUNCH_UIAPP_BY_HASH_WITH_ENTRY(-8.851064E-21f, 8.197194E+23f);
			break;
		case 863036578:
			func_406(PLAYER::PLAYER_ID(), &vVar37);
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar37, 100f);
			UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
			break;
		case 2099367966:
			iVar43 = func_407(PLAYER::PLAYER_ID(), 1);
			vVar40 = { func_408(iVar43) };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar40, 100f);
			UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
			break;
		case -1121162991:
			vVar44 = { func_409() };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar44, 100f);
			UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
			break;
		case 510323272:
			vVar47 = { Global_1051832.f_3765[39 /*17*/].f_1 };
			MAP::_SET_PAUSEMAP_COORDS_WITH_RADIUS(vVar47, 100f);
			UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.737229E-35f);
			break;
		case 179854274:
			func_410(2.622451E-38f, 0, 0, 0, 1, 0, 0);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

char* func_58(int iParam0)
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

void func_59(int iParam0, int iParam1)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case 822989203:
			switch (iParam1)
			{
				case joaat("NM_MW_POSSE_TYPE_TEMPORARY"):
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_TEMPORARY");
					break;
				case joaat("NM_MW_POSSE_TYPE_PERSISTENT"):
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_TYPE_PERSISTENT");
					break;
			}
			break;
		case -1611253054:
			switch (iParam1)
			{
				case 126620015:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					break;
				case 1513236523:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					break;
			}
			break;
		case 1908740613:
			switch (iParam1)
			{
				case 126620015:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &(Global_1940239.f_1556.f_149.f_2.f_29)))
					{
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					}
					else
					{
						sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1513236523:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &(Global_1940239.f_1556.f_149.f_2.f_29)))
					{
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					}
					else
					{
						sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
		case -395731946:
			if (!func_98())
			{
				sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_TEMP_OUTFIT");
			}
			else
			{
				switch (iParam1)
				{
					case -1895608703:
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
						break;
					default:
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
						break;
				}
			}
			break;
		case -91914989:
			switch (iParam1)
			{
				case -1895608703:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
					break;
				default:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
					break;
			}
			break;
		case 2131195733:
			switch (iParam1)
			{
				case -299269340:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					break;
				case 1083456181:
					sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					break;
			}
			break;
		case 1163184660:
			switch (iParam1)
			{
				case -299269340:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &(Global_1940239.f_1556.f_149.f_2.f_29)))
					{
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					}
					else
					{
						sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1083456181:
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &(Global_1940239.f_1556.f_149.f_2.f_29)))
					{
						sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					}
					else
					{
						sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
	}
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		func_70(sVar0, 27.64779f);
	}
}

void func_60(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (bParam0)
	{
		iVar0 = func_411(-4.191796E-35f);
		func_413(func_412(-4.191796E-35f, 0, iVar0));
		if ((!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION()) || !NETWORK::_UGC_HAS_PRIVILEGE())
		{
			func_414(0);
			func_416(func_415(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), 0, 0));
		}
		else
		{
			func_414(1);
		}
	}
	else
	{
		func_413(0);
		func_414(0);
		if (func_189(&iVar1, &iVar2))
		{
			if (iVar2 != -6.178593E-30f)
			{
				iVar2 = -6.178593E-30f;
				func_171(iVar1, iVar2);
			}
		}
		func_416(func_415(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), 0, 0));
	}
	func_417(-6.473918E-30f);
	func_419(func_418(PLAYER::PLAYER_ID(), 1), 1);
	if ((bParam1 && DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_12.f_25)) && DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_12.f_24))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_12.f_25, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_12.f_24, NaNf);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_12.f_25, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_12.f_24, -1.688917E-37f);
		}
	}
}

void func_61(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	bVar0 = func_420(Global_1295619.f_10);
	iVar1 = GANG::_NETWORK_GET_GANG_PRIVACY();
	if (func_421())
	{
		iVar1 = func_422();
	}
	iVar2 = -1;
	switch (iVar1)
	{
		case 0:
		case 2:
			if (bParam0 == 0)
			{
				iVar2 = 1;
			}
			break;
		case 1:
			if (bParam0)
			{
				if (bVar0)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 2;
				}
			}
			break;
	}
	if (iVar2 == -1)
	{
		return;
	}
	func_423(iVar2, bParam0);
}

void func_62()
{
	Global_1940239.f_1556.f_149.f_184.f_93 = MISC::GET_GAME_TIMER();
}

void func_63(int iParam0)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case -1895608703:
			iVar0 = 0;
			break;
		case 76824010:
			iVar0 = 1;
			break;
		case 1128045213:
			iVar0 = 2;
			break;
	}
	iVar1 = func_424(PLAYER::PLAYER_ID());
	if (iVar1 != 0)
	{
		func_425(iVar0, iVar1);
	}
}

void func_64(bool bParam0)
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	func_426(bParam0, 1, 0);
	iVar0 = func_424(PLAYER::PLAYER_ID());
	if (iVar0 != 0)
	{
		func_427(iVar0, bParam0);
	}
}

void func_65(int iParam0)
{
	int iVar0;

	iVar0 = func_428(iParam0);
	func_429(iVar0);
}

void func_66(int iParam0)
{
	int iVar0;

	iVar0 = func_430(iParam0);
	Global_1149417.f_5568.f_17 = iVar0;
	switch (iVar0)
	{
		case 1:
			if (func_431(Global_1295619.f_149[Global_1295619]) == 0)
			{
				func_432();
			}
			Global_1149417.f_5568.f_13 = 0;
			break;
		case 0:
			if (func_431(Global_1295619.f_149[Global_1295619]) == 2)
			{
				func_433();
			}
			Global_1149417.f_5568.f_12 = 0;
			break;
	}
}

void func_67(bool bParam0)
{
	int iVar0;

	iVar0 = func_434(Global_1149417.f_5568.f_17);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_115, -2.30935E+23f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_118, 27.64779f);
	if (iVar0 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_116, iVar0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_116, 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_117, bParam0);
}

void func_68()
{
	char* sVar0;

	if (Global_1149417.f_5568.f_17 == 1)
	{
		sVar0 = MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_DETAILS_PASSIVE");
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_DETAILS_NOT_PASSIVE");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1220.f_119, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_120, true);
}

char* func_69()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	float fVar6;
	float fVar7;

	iVar0 = func_431(Global_1295619.f_149[Global_1295619]);
	switch (iVar0)
	{
		case 2:
			if (!func_247())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_435() && !func_436())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_437())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (Global_1149417.f_5568.f_17 == 0)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
		case 0:
			fVar6 = func_438(Global_1295619.f_149[Global_1295619], 1);
			fVar7 = Global_1101558[Global_1295619 /*38*/].f_18;
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && func_439(Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300, 4))
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_BOUNTY_HUNT");
			}
			else if (!func_247())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_440(fVar6))
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY");
			}
			else if (func_440(fVar7))
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY_GANG");
			}
			else if (func_441())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_AGGRESION");
			}
			else if (func_435() && !func_436())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_437())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (!func_442(0) || !func_247())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED");
			}
			else if (Global_1149417.f_5568.f_17 == 1)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			else if (func_443())
			{
				return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
			}
			else
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			break;
		case 3:
			iVar1 = (Global_1901671.f_737.f_38 - (Global_1295619.f_16 - Global_1149417.f_5568.f_11));
			if (iVar1 <= 0)
			{
				MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else if (iVar1 == 1)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING_SINGULAR", iVar1);
			}
			else if (func_437())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING", iVar1);
			}
			break;
		case 1:
			iVar1 = (Global_1901671.f_737.f_37 - (Global_1295619.f_16 - Global_1149417.f_5568.f_11));
			iVar2 = func_444(Global_1295619.f_149[Global_1295619]);
			iVar4 = (iVar2 / 60);
			iVar5 = (iVar2 % 60);
			if (iVar2 >= iVar1)
			{
				iVar3 = iVar2;
			}
			else
			{
				iVar3 = iVar1;
			}
			if (iVar3 >= 120)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES", iVar4, iVar5);
			}
			else if (iVar3 > 60)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES_SINGULAR", iVar4, iVar5);
			}
			else if (iVar3 > 1)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING", iVar3);
			}
			else if (iVar3 == 1)
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_SINGULAR", iVar3);
			}
			else if (func_437())
			{
				return MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				MISC::VAR_STRING(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
	}
	return "";
}

void func_70(char* sParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_5, sParam0);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_44.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_6, iParam1);
	}
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 1534461337:
			if (!NETWORK::_GET_SOCIAL_MATCHMAKING_ALLOWED())
			{
				NETWORK::_SET_SOCIAL_MATCHMAKING_ALLOWED(true);
			}
			break;
		case 2103335718:
			if (NETWORK::_GET_SOCIAL_MATCHMAKING_ALLOWED())
			{
				NETWORK::_SET_SOCIAL_MATCHMAKING_ALLOWED(false);
			}
			break;
	}
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 1972219037:
			return 0;
		case 1099303125:
			return 2;
		case -606838807:
			return 3;
		case -1615594685:
			return 4;
		case 1364158563:
			return 1;
		default:
			break;
	}
	return 2;
}

void func_73(int iParam0)
{
	func_445(32);
	func_445(64);
	func_445(128);
	func_445(256);
	func_445(512);
	func_445(1);
	func_445(2);
	func_445(4);
	func_445(8);
	func_445(16);
	switch (iParam0)
	{
		case 0:
			func_446(32);
			func_446(1);
			break;
		case 2:
			func_446(64);
			func_446(2);
			break;
		case 3:
			func_446(128);
			func_446(4);
			break;
		case 4:
			func_446(256);
			func_446(8);
			break;
		case 1:
			func_446(512);
			func_446(16);
			break;
	}
	func_447(0, 1);
}

void func_74(int iParam0)
{
	func_445(524288);
	func_445(1048576);
	func_445(2097152);
	func_445(4194304);
	func_445(8388608);
	switch (iParam0)
	{
		case 0:
			func_446(524288);
			break;
		case 2:
			func_446(1048576);
			break;
		case 3:
			func_446(2097152);
			break;
		case 4:
			func_446(4194304);
			break;
		case 1:
			func_446(8388608);
			break;
	}
	func_447(0, 1);
}

void func_75(int iParam0)
{
	func_445(32);
	func_445(64);
	func_445(128);
	func_445(256);
	func_445(512);
	func_445(1);
	func_445(2);
	func_445(4);
	func_445(8);
	func_445(16);
	switch (iParam0)
	{
		case 0:
			func_446(32);
			func_446(1);
			break;
		case 2:
			func_446(64);
			func_446(2);
			break;
		case 3:
			func_446(128);
			func_446(4);
			break;
		case 4:
			func_446(256);
			func_446(8);
			break;
		case 1:
			func_446(512);
			func_446(16);
			break;
	}
	func_447(0, 1);
}

void func_76(int iParam0)
{
	switch (func_448(iParam0))
	{
		case 0:
			func_446(262144);
			break;
		case 1:
			func_445(262144);
			break;
		default:
			break;
	}
}

int func_77(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

bool func_78(int iParam0)
{
	return (func_449(iParam0, 16) && !func_449(iParam0, 32));
}

bool func_79(int iParam0)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	else if (!func_449(iParam0, 16))
	{
		return false;
	}
	else if (func_451(&(Global_1141317[iParam0 /*27*/].f_4)) && func_452(&(Global_1141317[iParam0 /*27*/].f_4)) < func_453())
	{
		return false;
	}
	return true;
}

void func_80(int iParam0)
{
	struct<14> Var0;

	func_454(4);
	func_455(8);
	Var0.f_8 = iParam0;
	func_457(4, Var0, func_456(0, 8));
}

bool func_81(int iParam0)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	else if (func_78(iParam0))
	{
		return false;
	}
	else if (func_449(iParam0, 32))
	{
		return false;
	}
	else if (func_451(&(Global_1141317[iParam0 /*27*/].f_4)) && func_452(&(Global_1141317[iParam0 /*27*/].f_4)) < func_453())
	{
		return false;
	}
	return true;
}

void func_82(int iParam0)
{
	struct<14> Var0;

	func_454(8);
	func_455(4);
	Var0.f_8 = iParam0;
	func_457(3, Var0, func_456(0, 8));
}

void func_83(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (bParam0)
	{
		iVar0++;
	}
	else
	{
		iVar0 = (iVar0 - 1);
	}
	iVar1 = (Global_1896762.f_201.f_9 + iVar0);
	if (iVar1 < 0)
	{
		iVar1 = (Global_1896762.f_201.f_10 - 1);
	}
	else if (iVar1 >= Global_1896762.f_201.f_10)
	{
		iVar1 = 0;
	}
	Global_1896762.f_201.f_8 = iVar1;
}

int func_84()
{
	return NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_26));
}

bool func_85(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/] == 1)
		{
			if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_1 == iParam0)
			{
				switch (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_2)
				{
					case 0:
						Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_2 = 1;
						break;
					case 1:
						Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_2 = 0;
						break;
				}
				func_55(1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_86(bool bParam0)
{
	func_459(func_458());
	func_460(bParam0);
}

void func_87(var uParam0)
{
	int iVar0;
	char* sVar1;
	float fVar2;

	if (*uParam0 != -2.576099E-24f)
	{
		return;
	}
	iVar0 = uParam0->f_2;
	sVar1 = "";
	fVar2 = 27.64779f;
	if (!MISC::IS_ORBIS_VERSION())
	{
		if ((iVar0 == -8.028503E+07f || iVar0 == 5.171354E+10f) || iVar0 == 2.072819E+38f)
		{
			return;
		}
	}
	switch (iVar0)
	{
		case -916367143:
			sVar1 = MISC::VAR_STRING(2, "LOG_FOOTER");
			break;
		case -1537476917:
			sVar1 = func_461();
			break;
		case -348311918:
			sVar1 = func_462();
			break;
		case 1486341085:
			sVar1 = func_464(func_463());
			break;
		case -880262015:
			sVar1 = func_465();
			break;
		case -260431196:
			sVar1 = func_467(func_466());
			break;
		case 1219657827:
			sVar1 = func_469(func_468());
			break;
		case 1615479072:
			sVar1 = func_470();
			break;
		case 1962827136:
			sVar1 = func_472(func_471());
			break;
		case -224013573:
			sVar1 = func_474(func_473());
			break;
		case 1244828121:
			sVar1 = func_476(func_475());
			break;
		case -1694883932:
			sVar1 = MISC::VAR_STRING(2, "PINNED_FOOTER");
			break;
		case -543289345:
			sVar1 = MISC::VAR_STRING(2, "NET_MOONSHINE_SET_SHACK_LOCATION_FOOTER");
			break;
		case 1222940221:
			sVar1 = MISC::VAR_STRING(2, func_478(func_477()));
			break;
		case 88228607:
			sVar1 = MISC::VAR_STRING(2, func_480(func_479()));
			break;
		case 290710310:
		case 1685218753:
			sVar1 = func_481(uParam0->f_3);
			break;
		case 504507386:
			sVar1 = func_482();
			break;
		case -1617941426:
			sVar1 = func_482();
			break;
		case 2054047271:
			sVar1 = MISC::VAR_STRING(2, "");
			break;
		case -1465661771:
			sVar1 = func_483();
			break;
		case -1606096174:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER");
			break;
		case -882681338:
			sVar1 = func_484();
			break;
		case 1671201754:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBERS_FOOTER");
			break;
		case 1689032681:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_SETTINGS_FOOTER");
			break;
		case 1854460024:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
			break;
		case -327353888:
			sVar1 = func_485();
			break;
		case 154809164:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_PERSISTENCE_FOOTER");
			break;
		case -1103748417:
			sVar1 = MISC::VAR_STRING(2, "");
			break;
		case -779773310:
			sVar1 = MISC::VAR_STRING(2, "");
			break;
		case -1086306300:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_POSSE_CREW_FOOTER");
			break;
		case -2088725625:
			sVar1 = func_486(&fVar2);
			break;
		case -1320685749:
			sVar1 = MISC::VAR_STRING(2, "INVITE_PLAYERS_LINK");
			break;
		case 1280146211:
			sVar1 = func_487();
			break;
		case -2012882360:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case -1024115628:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case 1717935887:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_ABUSIVE_FOOTER");
			break;
		case 566751030:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_DISRUPTIVE_FOOTER");
			break;
		case -757187920:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OFFENSIVE_FOOTER");
			break;
		case 575735035:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OLN_FOOTER");
			break;
		case 1302293867:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OSCN_FOOTER");
			break;
		case 1284519075:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OCN_FOOTER");
			break;
		case -36476126:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OCE_FOOTER");
			break;
		case 1296297252:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OPN_FOOTER");
			break;
		case 1463101399:
			sVar1 = MISC::VAR_STRING(2, "NM_PLAYER_REPORT_OHN_FOOTER");
			break;
		case -999900281:
			sVar1 = func_488();
			break;
		case -281834246:
			sVar1 = func_489();
			break;
		case 238850895:
			sVar1 = func_490();
			break;
		case -1108319209:
			sVar1 = func_491();
			break;
		case 60364622:
			sVar1 = func_492();
			break;
		case 515157779:
			sVar1 = MISC::VAR_STRING(2, "NM_PW_MESSAGE_FOOTER");
			break;
		case 1029117766:
			sVar1 = MISC::VAR_STRING(2, "NM_PW_REPORT_PLAYER_FOOTER");
			break;
		case -622415922:
			sVar1 = MISC::VAR_STRING(2, "NM_PW_SHOW_GAMER_CARD_FOOTER");
			break;
		case 1891046454:
			sVar1 = func_493(-6.178593E-30f);
			break;
		case -1431653946:
			sVar1 = func_493(1.214845E+35f);
			break;
		case 921074654:
			sVar1 = func_494();
			break;
		case 2087912236:
			return;
		case -1913419121:
			sVar1 = MISC::VAR_STRING(2, "NET_CAMP_CAMP_STATS_FOOTER");
			break;
		case 1603044301:
			sVar1 = MISC::VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER");
			break;
		case 2077941391:
			sVar1 = MISC::VAR_STRING(2, func_495(3));
			break;
		case 1018100553:
			sVar1 = MISC::VAR_STRING(2, func_495(8));
			break;
		case 1088802604:
			sVar1 = func_496(2, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_2));
			break;
		case -910546409:
			sVar1 = func_496(3, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_3));
			break;
		case -1902254786:
			sVar1 = func_496(4, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_4));
			break;
		case 1876618697:
			sVar1 = func_496(8, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_6));
			break;
		case 587836234:
			sVar1 = func_496(9, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_7));
			break;
		case 513547135:
			sVar1 = func_496(0, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_8));
			break;
		case 505234389:
			sVar1 = func_496(12, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_9));
			break;
		case 2047751621:
			sVar1 = func_496(1, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_10));
			break;
		case -862379603:
			sVar1 = func_496(15, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_11));
			break;
		case 1363191263:
			sVar1 = func_496(16, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_13));
			break;
		case 2132537609:
			sVar1 = func_496(17, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_12));
			break;
		case -1783088248:
			sVar1 = func_496(19, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_14));
			break;
		case 1095154187:
			sVar1 = func_496(18, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_15));
			break;
		case 686804643:
			sVar1 = func_496(20, DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_18));
			break;
		case 562873073:
			sVar1 = func_497(DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_16));
			break;
		case -1621613969:
			sVar1 = func_498(DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1174.f_17));
			break;
		case 1835613473:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case -949910923:
			sVar1 = MISC::VAR_STRING(2, "HORSES_FOOTER");
			break;
		case 649267219:
			sVar1 = func_499();
			break;
		case 867974977:
			sVar1 = func_500();
			break;
		case -1074910265:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -766526475:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case 388232363:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -783563355:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 271601522:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 988182620:
			sVar1 = MISC::VAR_STRING(2, "");
			break;
		case 1499523319:
			sVar1 = MISC::VAR_STRING(2, "");
			break;
		case 1736193867:
			sVar1 = MISC::VAR_STRING(2, "ALLOW_LEADING_FOOTER");
			break;
		case -446710138:
			sVar1 = MISC::VAR_STRING(2, "VEHICLES_FOOTER");
			break;
		case 1129530111:
			sVar1 = func_501();
			break;
		case 1819530459:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_FOOTER");
			break;
		case -516833774:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_RACE_FOOTER");
			break;
		case -1523420457:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -189386465:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 697595630:
			sVar1 = MISC::VAR_STRING(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 746698552:
			sVar1 = func_503(func_502());
			break;
		case 1024301510:
			sVar1 = func_505(func_504());
			break;
		case 72556410:
			sVar1 = func_69();
			break;
		case -1080557963:
			sVar1 = func_506();
			break;
		case -390113081:
			sVar1 = MISC::VAR_STRING(2, "NM_FR_SESSION_PREFERENCE_FOOTER");
			break;
		case 1537752051:
			sVar1 = func_507(3);
			break;
		case 2073308105:
			sVar1 = func_507(1);
			break;
		case 519925072:
			sVar1 = func_507(0);
			break;
		case 1070510924:
			sVar1 = func_507(2);
			break;
		case -1309595911:
			sVar1 = func_508();
			break;
		case -1899275725:
			sVar1 = func_509(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_walk_enum"));
			break;
		case -644769912:
			sVar1 = func_511(func_510());
			break;
		case 1863251163:
			sVar1 = func_513(func_512());
			break;
		case 187523479:
			sVar1 = func_514(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_spin_enum"));
			Global_1940239.f_1556.f_8450.f_167 = uParam0->f_3;
			func_515(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_spin_enum"));
			func_516(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "dynamic_list_item_spin_enum"));
			break;
		case 823251548:
		case 1401564842:
			Global_1108965.f_775.f_27 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_3, "posse_versus_content_type");
			sVar1 = func_517(Global_1108965.f_775.f_27);
			break;
		case 334553069:
			sVar1 = func_518(func_466());
			break;
		case -1239884668:
			sVar1 = MISC::VAR_STRING(2, "MINIGAME_GAME_DETAILS_FOOTER");
			break;
		case -1487960093:
			sVar1 = MISC::VAR_STRING(2, "MINIGAME_RULES_FOOTER");
			break;
		case -2051980641:
			sVar1 = MISC::VAR_STRING(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case 596189658:
			sVar1 = func_519();
			break;
		case -2120689682:
			sVar1 = MISC::VAR_STRING(2, "STABLES_HORSES_ENTRY_TOOLTIP");
			break;
		case 1664795258:
			sVar1 = MISC::VAR_STRING(2, "STABLES_VEHICLES_ENTRY_TOOLTIP");
			break;
		case 524868507:
			sVar1 = func_520();
			break;
		case -1292785935:
			return;
		case 2147133120:
			sVar1 = func_521();
			break;
		case -218896795:
			sVar1 = MISC::VAR_STRING(2, "TELEGRAM_FOOTER");
			break;
		case -488653492:
			sVar1 = MISC::VAR_STRING(2, "TELEGRAM_PLAYLIST_FOOTER");
			break;
		case 1091132566:
			return;
	}
	func_70(sVar1, fVar2);
}

bool func_88()
{
	return NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1940239.f_1556.f_8));
}

int func_89()
{
	int iVar0;
	int iVar1;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_8));
	if (!func_88())
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

void func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_522(0);
	}
	if (PLAYER::PLAYER_ID() == iParam0)
	{
		func_13(0);
	}
	else
	{
		func_13(1);
	}
	func_523(0, iParam0);
	func_523(1, iParam0);
	func_523(2, iParam0);
	func_523(3, iParam0);
}

int func_91(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 238850895:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_54, bParam1);
			break;
		case -1108319209:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_149.f_548.f_4.f_1, bParam1);
			break;
	}
	return 1;
}

bool func_92(var uParam0)
{
	struct<2> Var0;
	char* sVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return false;
	}
	Var0 = { func_184(*uParam0, func_58(32)) };
	sVar2 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(*uParam0, func_58(15));
	if (!func_524(Var0, sVar2))
	{
		return false;
	}
	return true;
}

void func_93(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	iVar1 = func_525(Global_1295619.f_149[Global_1295619], 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
		case 6:
			iVar0 = 2;
			break;
	}
	iVar2 = func_526(iVar0);
	fVar3 = func_527(1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_115, -2.30935E+23f);
	if (iVar2 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_116, iVar2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_116, 0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_118, fVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_117, bParam0);
}

void func_94()
{
	char* sVar0;
	int iVar1;

	iVar1 = func_525(Global_1295619.f_149[Global_1295619], 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			sVar0 = MISC::VAR_STRING(2, "HOSTILITY_LOW_DESCRIPTION");
			break;
		case 2:
		case 3:
			sVar0 = MISC::VAR_STRING(2, "HOSTILITY_MEDIUM_DESCRIPTION");
			break;
		case 4:
		case 5:
		case 6:
			sVar0 = MISC::VAR_STRING(2, "HOSTILITY_HIGH_DESCRIPTION");
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1220.f_119, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_120, true);
}

void func_95()
{
	char* sVar0;
	float fVar1;

	sVar0 = func_528();
	fVar1 = func_527(0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1220.f_91.f_20, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_91.f_22, fVar1);
}

bool func_96(int iParam0, var uParam1)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*iParam0))
	{
		return false;
	}
	DATABINDING::_0xE6AAB897120492D7(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", &iVar0);
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP"))
	{
		if (!func_529(iVar0, uParam1, 1))
		{
			return false;
		}
	}
	else if (!func_225(DATABINDING::_0xE6AAB897120492D6(*iParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID"), uParam1, 1))
	{
		return false;
	}
	if (!func_227(uParam1))
	{
		return false;
	}
	return true;
}

void func_97(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar0++;
	}
	Global_1940239.f_1556.f_149.f_57 = { *uParam0 };
}

bool func_98()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_12.f_24))
	{
		switch (DATABINDING::_DATABINDING_READ_HASH(Global_1896762.f_13.f_50.f_12.f_24))
		{
			case joaat("NM_MW_POSSE_TYPE_TEMPORARY"):
				return false;
			case joaat("NM_MW_POSSE_TYPE_PERSISTENT"):
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_99()
{
	if (!NETWORK::NETWORK_IS_SIGNED_ONLINE())
	{
		return false;
	}
	if (!NETWORK::NETWORK_HAS_VALID_ROS_CREDENTIALS())
	{
		return false;
	}
	return true;
}

void func_100()
{
	if (func_530())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_490.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_490.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_490.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_490.f_29, -1);
		if (func_531(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, 0);
		}
		else if (func_531(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, 2);
		}
		else if (func_531(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, 3);
		}
		else if (func_531(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, 4);
		}
		else if (func_531(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, 1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_490.f_23, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_490.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_490.f_29, -4.22748E+11f);
		if (DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_1353.f_490.f_25) != func_532())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_490.f_25, func_532());
		}
	}
}

void func_101()
{
	if (func_530())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_520.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_520.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_520.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_520.f_29, -1);
		if (func_531(19))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, 0);
		}
		else if (func_531(20))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, 2);
		}
		else if (func_531(21))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, 3);
		}
		else if (func_531(22))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, 4);
		}
		else if (func_531(23))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, 1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_520.f_23, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_520.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_520.f_29, 8.256023E-36f);
		if (DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_1353.f_520.f_25) != func_533())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_520.f_25, func_533());
		}
	}
}

void func_102()
{
	if (func_530())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_388.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_388.f_23, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_388.f_1, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_388.f_29, -1);
		if (func_531(9))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, 0);
		}
		else if (func_531(10))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, 2);
		}
		else if (func_531(11))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, 3);
		}
		else if (func_531(12))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, 4);
		}
		else if (func_531(13))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, 1);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_388.f_23, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_388.f_1, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_388.f_29, -5.950208E-35f);
		if (DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_1935.f_388.f_25) != func_532())
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_388.f_25, func_532());
		}
	}
}

void func_103()
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	struct<11> Var6;
	int iVar30;
	int iVar31;

	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var2 = { func_535(0, 1, 0, -1) };
	Var6.f_10 = -1;
	iVar31 = 0;
	while (iVar31 < iVar1)
	{
		if (!func_536(iVar31, iVar0, iVar1, 0, &Var6, 0))
		{
		}
		else
		{
			func_537(Var2, &Var6, iVar30, 0);
			iVar30++;
		}
		iVar31++;
	}
	while (iVar30 < 11)
	{
		func_537(Var2, &Var6, iVar30, 1);
		iVar30++;
	}
	func_538(iVar0);
}

void func_104(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<23> Var2;
	char* sVar26;
	float fVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	char* sVar34;

	Global_1940239.f_1556.f_1353 = iParam0;
	Var2.f_10 = -1;
	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return;
	}
	if (!func_536(iParam0, iVar0, iVar1, 0, &Var2, 1))
	{
		func_538(iVar0);
		return;
	}
	sVar26 = func_539(0);
	if (func_540(Var2, -2.485806E+15f, 0, -1) == 1.956641E-20f)
	{
		sVar26 = func_539(1);
	}
	fVar27 = func_541(Var2.f_11);
	iVar28 = func_542(Var2.f_11) + 1;
	iVar28 = func_543(iVar28, 0, 10);
	iVar30 = iVar28 + 2;
	iVar30 = func_543(iVar30, 0, 10);
	iVar31 = func_544(Var2.f_11) + 1;
	iVar31 = func_543(iVar31, 0, 10);
	iVar33 = iVar31 + 2;
	iVar33 = func_543(iVar33, 0, 10);
	func_545(&Var2, &iVar29, &iVar32);
	iVar29 = BUILTIN::FLOOR((IntToFloat(iVar29) * 1008981770));
	iVar29 = (iVar29 + iVar28);
	iVar29 = func_543(iVar29, 0, 10);
	iVar32 = BUILTIN::FLOOR((IntToFloat(iVar32) * 1008981770));
	iVar32 = (iVar32 + iVar31);
	iVar32 = func_543(iVar32, 0, 10);
	sVar34 = func_547(func_546(Var2.f_11));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_484, MISC::GET_HASH_KEY(sVar34));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_485, MISC::GET_HASH_KEY(func_548(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_486, MISC::GET_HASH_KEY(func_549(fVar27, Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_487, MISC::GET_HASH_KEY(sVar26));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_488, MISC::GET_HASH_KEY(func_550(Var2.f_22)));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_478, iVar28);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_479, iVar29);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_480, iVar30);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_481, iVar31);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_482, iVar32);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_483, iVar33);
	func_538(iVar0);
}

void func_105(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<11> Var3;
	struct<4> Var27;
	int iVar31;

	Var3.f_10 = -1;
	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var27 = { func_535(0, 1, 0, iParam0) };
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_536(iVar2, iVar0, iVar1, 0, &Var3, 0))
		{
		}
		else
		{
			func_551(Var27, &Var3, iVar31, iParam0, 0);
			iVar31++;
		}
		iVar2++;
	}
	while (iVar31 < 11)
	{
		func_537(Var27, &Var3, iVar31, 1);
		iVar31++;
	}
	func_538(iVar0);
}

void func_106()
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	struct<11> Var24;
	int iVar48;
	int iVar49;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var20 = { func_264(0, 1, 0, -1) };
	Var24.f_10 = -1;
	iVar49 = 0;
	while (iVar49 < iVar1)
	{
		if (!func_536(iVar49, iVar0, iVar1, 2, &Var24, 0))
		{
		}
		else
		{
			func_554(Var20, &Var24, iVar48, 0);
			iVar48++;
		}
		iVar49++;
	}
	while (iVar48 < 9)
	{
		func_554(Var20, &Var24, iVar48, 1);
		iVar48++;
	}
	func_538(iVar0);
}

void func_107(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<12> Var20;
	int iVar44;
	int iVar45;
	int iVar46;
	int iVar47;

	Global_1940239.f_1556.f_1935 = iParam0;
	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var20.f_10 = -1;
	if (!func_536(iParam0, iVar0, iVar1, 2, &Var20, 0))
	{
		func_538(iVar0);
		return;
	}
	iVar44 = Var20.f_11;
	iVar45 = func_555(iVar44);
	iVar46 = func_556(iVar44);
	iVar47 = func_557(iVar44);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_383, MISC::GET_HASH_KEY(func_558(iVar45)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_384, MISC::GET_HASH_KEY(func_559(iVar46)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_385, MISC::GET_HASH_KEY(func_560(iVar47)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_386, MISC::GET_HASH_KEY(func_561(iVar44)));
	func_538(iVar0);
}

void func_108(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	struct<11> Var24;
	int iVar48;
	int iVar49;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var20 = { func_264(0, 1, 0, iParam0) };
	Var24.f_10 = -1;
	iVar49 = 0;
	while (iVar49 < iVar1)
	{
		if (!func_536(iVar49, iVar0, iVar1, 2, &Var24, 0))
		{
		}
		else
		{
			func_562(Var20, &Var24, iVar48, iParam0, 0);
			iVar48++;
		}
		iVar49++;
	}
	while (iVar48 < 9)
	{
		func_554(Var20, &Var24, iVar48, 1);
		iVar48++;
	}
	func_538(iVar0);
}

void func_109(float fParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_564(func_563(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_2385.f_40, iVar0);
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_39, 4.554459E-23f);
			break;
		case 2042309940:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_39, 2.880969E-11f);
			break;
			break;
		default:
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_39, 2);
			break;
	}
}

void func_111(int iParam0)
{
	char* sVar0;

	sVar0 = "";
	switch (iParam0)
	{
		case joaat("GRIZZLIES_CAMP"):
			sVar0 = "PLAYER_CAMP_GRIZZLIES";
			break;
		case joaat("BAYOU_NAWAS_CAMP"):
			sVar0 = "PLAYER_CAMP_BAYOU_NWA";
			break;
		case joaat("BIG_VALLEY_CAMP"):
			sVar0 = "PLAYER_CAMP_BIG_VALLEY";
			break;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			sVar0 = "PLAYER_CAMP_CHOLLA_SPRINGS";
			break;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			sVar0 = "PLAYER_CAMP_CUMBERLAND_FOREST";
			break;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			sVar0 = "PLAYER_CAMP_GAPTOOTH_RIDGE";
			break;
		case joaat("GREAT_PLAINS_CAMP"):
			sVar0 = "PLAYER_CAMP_GREAT_PLAINS";
			break;
		case joaat("HEARTLAND_CAMP"):
			sVar0 = "PLAYER_CAMP_HEARTLANDS";
			break;
		case joaat("HENNIGANS_STEAD_CAMP"):
			sVar0 = "PLAYER_CAMP_HENNIGANS_STEAD";
			break;
		case joaat("RIO_BRAVO_CAMP"):
			sVar0 = "PLAYER_CAMP_RIO_BRAVO";
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
			sVar0 = "PLAYER_CAMP_ROANOKE_RIDGE";
			break;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			sVar0 = "PLAYER_CAMP_SCARLETT_MEADOWS";
			break;
		case joaat("TALL_TREES_CAMP"):
			sVar0 = "PLAYER_CAMP_TALL_TREES";
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_71, MISC::VAR_STRING(2, sVar0));
}

int func_112()
{
	return Global_1940239.f_1556.f_2385.f_48;
}

void func_113(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_565(func_563(iParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_2385.f_44, iVar0);
}

void func_114(int iParam0, int iParam1)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	if (Global_1295619 != 255)
	{
		vVar0 = { func_566(Global_1295619) };
		if (vVar0.y == iParam1 && vVar0.x == func_563(iParam0))
		{
			func_70(MISC::VAR_STRING(2, "NET_CAMP_LOCATION_PITCHED_FOOTER"), 27.64779f);
			return;
		}
	}
	iVar3 = func_565(func_563(iParam0));
	if (!func_567(iVar3))
	{
		func_70(MISC::VAR_STRING(2, "NET_CAMP_LOCATION_NO_CASH_FOOTER"), 27.64779f);
		return;
	}
	vVar0.f_1 = iParam1;
	vVar0.x = func_563(iParam0);
	if (func_568(vVar0, GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10)))
	{
		func_70(MISC::VAR_STRING(2, "NET_CAMP_LOCATION_TOO_SMALL"), 27.64779f);
		return;
	}
	iVar4 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10);
	if (!func_569(vVar0.x, iVar4, iParam1))
	{
		func_70(MISC::VAR_STRING(2, "NET_CAMP_DISTRICT_INVALID"), 27.64779f);
		return;
	}
	func_70(MISC::VAR_STRING(2, "NET_CAMP_LOCATION_ENTRY_FOOTER"), 27.64779f);
}

int func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar7;
	struct<10> Var8;

	iVar2 = func_570(1);
	Var3 = { func_571(1) };
	iVar7 = func_572(iParam0);
	Var8.f_9 = -5.45926E-19f;
	if (iVar7 == 0)
	{
		return 0;
	}
	iVar1 = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar2, &Var3, iVar7);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (iVar1 > 56)
	{
		iVar1 = 56;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar2, &Var3, iVar7, iVar0, &Var8))
		{
		}
		else
		{
			return Var8.f_4;
		}
		iVar0++;
	}
	return 0;
}

void func_116(bool bParam0)
{
	vector3 vVar0;

	if (bParam0 == 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_6258.f_11, -1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_6258.f_12, -1);
	}
	else
	{
		vVar0 = { func_573(bParam0) };
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_6258.f_11, vVar0.x);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_6258.f_12, func_574(bParam0));
	}
}

int func_117(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	float fVar7;
	struct<10> Var8;
	int iVar22;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = func_570(1);
	Var3 = { func_571(1) };
	Var8.f_9 = -5.45926E-19f;
	fVar7 = func_572(iParam0);
	iVar22 = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar2, &Var3, fVar7);
	if (iParam1 > (iVar22 - 1))
	{
		return 0;
	}
	if (iVar22 > 0)
	{
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar2, &Var3, fVar7, iParam1, &Var8))
		{
			return 0;
		}
		iVar1 = Var8.f_4;
	}
	else
	{
		return 0;
	}
	return iVar1;
}

int func_118(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<4> Var4;
	float fVar8;
	struct<10> Var9;

	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return -1;
	}
	iVar3 = func_570(1);
	Var4 = { func_571(1) };
	fVar8 = func_572(iVar0);
	Var9.f_9 = -5.45926E-19f;
	iVar2 = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar3, &Var4, fVar8);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (iVar2 > 56)
	{
		iVar2 = 56;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar3, &Var4, fVar8, iVar1, &Var9))
		{
		}
		else if (iParam1 == Var9.f_4)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_119(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_HASH_STRING_FROM_PARENT(iParam0, "moonshine_selection_property");
	if (iVar0 != -1 && iVar0 < 5)
	{
		iVar1 = iVar0;
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_8632.f_291, iVar1);
	}
	func_575(1);
}

void func_120(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_576(iParam0);
	fVar1 = -4.461146E-19f;
	if (DATABINDING::_DATABINDING_READ_HASH(Global_1940239.f_1556.f_8632.f_280) != iVar0)
	{
		if (!TXD::DOES_STREAMED_TXD_EXIST(fVar1))
		{
			return;
		}
		TXD::REQUEST_STREAMED_TXD(fVar1, false);
		if (!TXD::HAS_STREAMED_TXD_LOADED(fVar1))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_281, fVar1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_280, iVar0);
	}
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 2077941391:
			return 3;
		case 1088802604:
			return 2;
		case -910546409:
			return 3;
		case -1902254786:
			return 4;
		case 491987586:
			return 5;
		case -240952777:
			return 6;
		case 1018100553:
			return 8;
		case 1876618697:
			return 8;
		case 587836234:
			return 9;
		case 513547135:
			return 0;
		case 2047751621:
			return 1;
		case -862379603:
			return 15;
		case 1363191263:
			return 16;
		case 2132537609:
			return 17;
		case -1783088248:
			return 19;
		case 1095154187:
			return 18;
		case 686804643:
			return 20;
		default:
			break;
	}
	return -1;
}

void func_122(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 21)
	{
		return;
	}
	func_577(Global_1901671.f_125[iVar0 /*2*/].f_1, Global_1901671.f_125[iVar0 /*2*/]);
}

void func_123(int iParam0)
{
	func_579(func_578(iParam0));
}

void func_124()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		Global_265213.f_57505[iVar0 /*8*/].f_2 = NETWORK::_UGC_IS_BOOK_MARKED(&(Global_265213.f_4[iVar0 /*46*/]));
		iVar0++;
	}
}

void func_125()
{
	func_577(Global_1901671.f_125.f_43.f_1, Global_1901671.f_125.f_43);
}

void func_126()
{
	func_579(-2.733096E-05f);
}

void func_127(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 5;
	uParam0->f_2 = -1;
	func_580(&(uParam0->f_3));
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_13 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	uParam0->f_16 = 0;
	uParam0->f_17 = 0;
	uParam0->f_18 = 0;
	StringCopy(&(uParam0->f_22), "", 24);
	StringCopy(&(uParam0->f_25), "", 64);
	uParam0->f_33 = 0;
	uParam0->f_34 = 0;
	uParam0->f_35 = 0;
	uParam0->f_36 = 0;
	func_581(&(uParam0->f_37));
	func_582(&(uParam0->f_38));
	func_583(&(uParam0->f_41));
	func_584(&(uParam0->f_42));
	func_585(&(uParam0->f_44));
	func_586(&(uParam0->f_72));
}

int func_128()
{
	struct<51> Var0;

	func_587();
	Var0.f_50 = 256;
	Var0 = 4;
	StringCopy(&(Var0.f_1), func_588(), 128);
	StringCopy(&(Var0.f_17), func_589(), 128);
	Var0.f_49 = 20;
	return func_590(&Var0);
}

int func_129()
{
	struct<51> Var0;

	func_587();
	Var0.f_50 = 256;
	Var0 = 4;
	StringCopy(&(Var0.f_1), func_588(), 128);
	StringCopy(&(Var0.f_17), func_589(), 128);
	Var0.f_49 = 20;
	return func_590(&Var0);
}

void func_130()
{
	Global_1940239.f_1556.f_9756.f_245 = 0;
	Global_1940239.f_1556.f_9756.f_247 = 3;
	Global_1940239.f_1556.f_9756.f_246 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

void func_131()
{
	func_591(68);
	func_592();
	func_593(-14.49531f, -1.570301E+18f, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_594(3);
}

void func_132(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<11> Var4;
	var uVar23;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(91));
	switch (iVar0)
	{
		case 6:
			func_595(DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53)));
			break;
		case 16:
			iVar1 = DATABINDING::_0xE6AAB897120492D6(iParam0, func_58(92));
			func_596(1, iVar1, Global_1901671.f_316.f_180);
			func_597(88, Global_1295619.f_10, iVar1, 1);
			break;
		case 17:
			iVar1 = DATABINDING::_0xE6AAB897120492D6(iParam0, func_58(92));
			func_596(2, iVar1, Global_1901671.f_316.f_180);
			func_597(89, Global_1295619.f_10, iVar1, 1);
			break;
		case 20:
			iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(54));
			func_598(PLAYER::INT_TO_PLAYERINDEX(iVar3));
			break;
		case 8:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_599(iVar2, 1);
			break;
		case 21:
			func_600();
			break;
		case 10:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_601(iVar2);
			break;
		case 9:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_602(iVar2);
			break;
		case 12:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			break;
		case 11:
			break;
		case 1:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_603(iVar2, 1);
			break;
		case 19:
			iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			if (CREW::_NETWORK_ACCEPT_CLAN_INVITE(iVar2))
			{
			}
			break;
		case 23:
			Var4.f_10 = 255;
			Var4.f_4 = 35;
			Var4.f_5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar23, PLAYER::NETWORK_PLAYER_ID_TO_INT());
			func_604(&Var4, uVar23);
			break;
	}
	func_605(iParam0);
	func_147();
}

void func_133(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	int iVar14;
	int iVar15;
	int iVar16;
	char cVar17[64];

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(91));
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_3.f_1 = -1;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	switch (iVar0)
	{
		case 1:
			iVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0xC0CFFDA87C2C163D(iVar2, &Var3, 11);
			iVar15 = NETWORK::_0xE79BA3BC265895DA(iVar2);
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, func_58(15));
			break;
		case 10:
			StringCopy(&cVar17, MISC::VAR_STRING(2, "POSSE_INVITE_HDR"), 64);
			iVar15 = func_606(cVar17);
			iVar16 = MISC::VAR_STRING(2, "POSSE_INVITE_DESC");
			iVar14 = DATABINDING::_DATABINDING_READ_DATA_STRING_FROM_PARENT(iParam0, func_58(15));
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_7.f_1, iVar15);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_7.f_4, iVar14);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_7.f_5, iVar16);
}

void func_134(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(91));
	switch (iVar0)
	{
		case 8:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_607(iVar1, iParam0);
			break;
		case 21:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_608(iVar1, 1);
			break;
		case 16:
		case 17:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(54));
			func_609(iVar1);
			break;
		case 6:
			break;
		case 1:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			func_603(iVar1, 0);
			break;
	}
	func_605(iParam0);
}

void func_135(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<2> Var5;
	int iVar8;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(79));
	switch (iVar0)
	{
		case 2:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			iVar2 = NETWORK::_0x27B1AE4D8C652F08(iVar1);
			NETWORK::_0x16EFB123C4451032(iVar2, &Var3);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 3:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			GANG::_0x7BAA30C9BBE8AEE7(iVar1, &Var5);
			NETWORK::NETWORK_SHOW_PROFILE_UI(&(Var5.f_1));
			break;
		case 4:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(54));
			iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar8) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
			{
				return;
			}
			Var3 = { func_610(iVar8) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
		case 22:
			iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(53));
			iVar8 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar8) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
			{
				return;
			}
			Var3 = { func_610(iVar8) };
			NETWORK::NETWORK_SHOW_PROFILE_UI(&Var3);
			break;
	}
}

bool func_136()
{
	int iVar0;

	iVar0 = func_611();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_137()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_138(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_458, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_458, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_459, -7.6095E+33f);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_458, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_459, 0.01340366f);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_20, true);
			break;
	}
}

bool func_139()
{
	int iVar0;

	iVar0 = func_612();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_140()
{
	bool bVar0;
	bool bVar1;

	bVar0 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_19);
	bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_141(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_380, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_20, false);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_380, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_381, 5.678342E+26f);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_19, true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_20, false);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_380, true);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_381, 0.2786087f);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_19, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_20, true);
			break;
	}
}

int func_142(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	Global_1940239.f_1556.f_2 = iParam0;
	func_33(5, 1);
	return 1;
}

void func_143()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_44.f_5))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_5, "");
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_44.f_6))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_6, 27.64779f);
	}
}

void func_144(int iParam0)
{
	if (!func_613(Global_1149157.f_145, iParam0))
	{
		func_614(&(Global_1149157.f_145), iParam0);
	}
}

int func_145()
{
	var uVar0;

	uVar0 = func_615();
	return uVar0;
}

void func_146(int iParam0, int iParam1)
{
	if (iParam0 != Global_1149157.f_137)
	{
		return;
	}
	if (!func_613(Global_1149157.f_137.f_1, iParam1))
	{
		func_614(&(Global_1149157.f_137.f_1), iParam1);
	}
}

void func_147()
{
	func_18(0);
}

bool func_148(int iParam0)
{
	return func_613(Global_1149157.f_145, iParam0);
}

void func_149()
{
	func_343(&(Global_1896762.f_5), 7);
}

void func_150(var uParam0)
{
	Global_1940239.f_1556.f_149.f_2 = { *uParam0 };
}

bool func_151(float fParam0)
{
	if (!UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(1.608566E+13f, fParam0))
	{
		return false;
	}
	return true;
}

bool func_152()
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1940239.f_1556.f_26)))
	{
		return false;
	}
	if (!func_35(Global_1940239.f_1556.f_26, &(Global_1940239.f_1556.f_26.f_2)))
	{
		return false;
	}
	return true;
}

int func_153(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	float fVar5;
	struct<10> Var6;
	int iVar20;
	char cVar21[64];
	struct<36> Var29;
	int iVar65;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	iVar0 = func_570(1);
	Var1 = { func_571(1) };
	Var6.f_9 = -5.45926E-19f;
	fVar5 = func_572(*uParam0);
	iVar20 = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &Var1, fVar5);
	if (iVar20 > 56)
	{
		iVar20 = 56;
	}
	Var29 = 1;
	Var29.f_1 = 1;
	Var29.f_2 = 27.64779f;
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_10 = -1;
	Var29.f_11 = -1;
	Var29.f_12 = -1;
	Var29.f_32 = -1;
	Var29.f_35 = -1;
	if (iVar20 > 0)
	{
		iVar65 = 0;
		while (iVar65 <= (iVar20 - 1))
		{
			if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &Var1, fVar5, iVar65, &Var6))
			{
			}
			else
			{
				StringCopy(&cVar21, "emote_specific_", 64);
				StringIntConCat(&cVar21, iVar65, 64);
				func_616(&Var29, uParam1, Var6.f_4, uParam0->f_5);
				func_617(&(uParam0->f_14[iVar65 /*32*/]), uParam0->f_13, cVar21, Var29);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", uParam0->f_14[iVar65 /*32*/]);
			}
			iVar65++;
		}
	}
	return 1;
}

char* func_154(int iParam0)
{
	return func_618(iParam0);
}

void func_155(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_6258.f_10, bParam0);
}

int func_156(var uParam0, var uParam1)
{
	char cVar0[64];
	struct<36> Var8;
	int iVar44;
	int iVar45;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_9);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = 27.64779f;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	Var8.f_32 = -1;
	Var8.f_35 = -1;
	iVar45 = 3;
	iVar44 = 0;
	while (iVar44 <= iVar45)
	{
		if (uParam1->f_2[iVar44] == 0)
		{
		}
		else
		{
			StringCopy(&cVar0, "emote_specific_", 64);
			StringIntConCat(&cVar0, iVar44, 64);
			func_616(&Var8, uParam1, uParam1->f_2[iVar44], uParam0->f_5);
			func_617(&(uParam0->f_14[iVar44 /*32*/]), uParam0->f_13, cVar0, Var8);
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", uParam0->f_14[iVar44 /*32*/]);
			iVar44++;
		}
	}
	return 1;
}

int func_157(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	float fVar3;
	struct<4> Var4;

	iVar0 = uParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (bParam2 == uParam0->f_2[iVar2])
		{
			bVar1 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	fVar3 = func_619(iVar0);
	Var4 = { func_620(bParam2, func_571(1), fVar3, 1) };
	return func_621(&(Global_1072759.f_28313.f_25), Var4);
}

int func_158(var uParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	struct<4> Var2;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	fVar1 = func_619(iVar0);
	Var2 = { func_620(uParam0->f_2[uParam0->f_1], func_571(1), fVar1, 1) };
	return func_622(&(Global_1072759.f_28313.f_25), Var2);
}

int func_159(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_623(bParam2, 0))
	{
		return 2;
	}
	iVar0 = func_624(uParam0[iParam1 /*7*/], bParam2);
	if (iVar0 == -1)
	{
		if ((uParam0[iParam1 /*7*/])->f_2[(*uParam0)[iParam1 /*7*/]] != 0)
		{
			if ((uParam0[iParam1 /*7*/])->f_1 > -1 && (uParam0[iParam1 /*7*/])->f_2[(*uParam0)[iParam1 /*7*/]] == (uParam0[iParam1 /*7*/])->f_2[(uParam0[iParam1 /*7*/])->f_1])
			{
				func_158(uParam0[iParam1 /*7*/], iParam1);
			}
		}
		func_625(uParam0, iParam1, bParam2);
		return 0;
	}
	else
	{
		if ((uParam0[iParam1 /*7*/])->f_1 > -1 && (uParam0[iParam1 /*7*/])->f_2[iVar0] == (uParam0[iParam1 /*7*/])->f_2[(uParam0[iParam1 /*7*/])->f_1])
		{
			func_158(uParam0[iParam1 /*7*/], iParam1);
		}
		func_626(uParam0[iParam1 /*7*/], iVar0);
		return 1;
	}
	return 2;
}

void func_160()
{
	char cVar0[64];
	struct<31> Var8;
	int iVar39;
	int iVar40;
	int iVar41;

	Global_1940239.f_1556.f_8122 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "player_walk_types_data");
	Global_1940239.f_1556.f_8122.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1940239.f_1556.f_8122, "player_walk_types_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_1556.f_8122.f_1);
	Global_1940239.f_1556.f_8122.f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "walk_options_enabled", true);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = 27.64779f;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	iVar39 = 0;
	iVar40 = 12;
	iVar39 = 0;
	while (iVar39 < iVar40)
	{
		iVar41 = func_627(iVar39);
		if (iVar41 != 0)
		{
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar41) || !UNLOCK::UNLOCK_IS_UNLOCKED(iVar41))
			{
			}
			else
			{
				StringCopy(&cVar0, "walk_type_", 64);
				StringIntConCat(&cVar0, iVar39, 64);
				Var8.f_8 = 1;
				StringCopy(&(Var8.f_16), func_628(iVar39), 64);
				Var8.f_24 = 3.347692E+13f;
				Var8.f_25 = -1.367564E-05f;
				Var8.f_26 = 0;
				Var8.f_5 = -5.013022E-30f;
				Var8.f_4 = 1.608566E+13f;
				Var8.f_30 = iVar39;
				func_629(&(Global_1940239.f_1556.f_8122.f_3[iVar39 /*27*/]), Global_1940239.f_1556.f_8122, cVar0, Var8);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_8122.f_1, -1, "pm_dynamic_text_and_end_image", Global_1940239.f_1556.f_8122.f_3[iVar39 /*27*/]);
			}
			iVar39++;
		}
	}
}

int func_161()
{
	return Global_17418.f_55.f_664.f_1783;
}

int func_162(int iParam0, int iParam1)
{
	if (!iParam0 == iParam1 && (iParam1 != 13 && iParam1 < 12))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8122.f_3[iParam1 /*27*/].f_22, false);
	}
	if (iParam0 == 13 || iParam0 >= 12)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8122.f_3[0 /*27*/].f_22, true);
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8122.f_3[iParam0 /*27*/].f_22, true);
	return 1;
}

void func_163(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 12)
	{
		iParam0 = 0;
	}
	iVar0 = iParam0;
	iVar1 = func_161();
	func_162(iVar0, iVar1);
	func_630(iVar0, iVar1);
	func_631(iVar0);
}

void func_164()
{
	char cVar0[64];
	struct<31> Var8;
	int iVar39;
	int iVar40;
	int iVar41;

	Global_1940239.f_1556.f_8450 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "gun_spinning_types_data");
	Global_1940239.f_1556.f_8450.f_3 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(Global_1940239.f_1556.f_8450, "player_options_prompt_preview_enabled", false);
	Global_1940239.f_1556.f_8450.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1940239.f_1556.f_8450, "player_gun_spinning_collection");
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_1556.f_8450.f_1);
	Global_1940239.f_1556.f_8450.f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "gun_spinning_enabled", true);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = 27.64779f;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	iVar39 = 0;
	iVar40 = 6;
	iVar39 = 0;
	while (iVar39 < iVar40)
	{
		iVar41 = func_632(iVar39);
		if (iVar41 != 0)
		{
			if (!UNLOCK::UNLOCK_IS_VISIBLE(iVar41) || !UNLOCK::UNLOCK_IS_UNLOCKED(iVar41))
			{
			}
			else
			{
				StringCopy(&cVar0, "spin_type", 64);
				StringIntConCat(&cVar0, iVar39, 64);
				Var8.f_8 = 1;
				StringCopy(&(Var8.f_16), func_633(iVar39), 64);
				Var8.f_24 = 3.347692E+13f;
				Var8.f_25 = -1.367564E-05f;
				Var8.f_26 = 0;
				Var8.f_5 = 3.339201E-32f;
				Var8.f_4 = 1.608566E+13f;
				Var8.f_30 = iVar39;
				func_634(&(Global_1940239.f_1556.f_8450.f_4[iVar39 /*27*/]), Global_1940239.f_1556.f_8450, cVar0, Var8);
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_8450.f_1, -1, "pm_dynamic_text_and_end_image", Global_1940239.f_1556.f_8450.f_4[iVar39 /*27*/]);
			}
			iVar39++;
			func_635();
			func_636();
		}
	}
}

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_10))
	{
		return;
	}
	iVar0 = -4.931674E+23f;
	if (iVar0 == 0)
	{
	}
	iVar3 = 0;
	while (iVar3 < 4)
	{
		iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar3);
		if (iVar4 == 0)
		{
		}
		else if (iVar4 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(iVar0, iParam0))
		{
			bVar5 = true;
			iVar1 = iVar3;
		}
		else
		{
			iVar3++;
		}
	}
	if (!bVar5)
	{
		iVar3 = 0;
		while (iVar3 < 4)
		{
			iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar3);
			if (iVar4 == 0 || iVar4 == -1)
			{
				iVar2 = iVar3;
			}
			else
			{
				iVar3++;
			}
		}
	}
	if (bVar5)
	{
		WEAPON::_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL(Global_33, iVar1, 0);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_8, -1.99721E-22f);
	}
	else
	{
		WEAPON::_SET_ACTIVE_GUN_SPINNING_KIT_EMOTE_TWIRL(Global_33, iVar2, WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(iVar0, iParam0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_8, 9.438405E-38f);
	}
	func_637();
	func_636();
}

void func_166(int iParam0)
{
	func_638(iParam0);
}

struct<2> func_167()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_168(int iParam0, struct<2> Param1)
{
	switch (iParam0)
	{
		case 6:
			if (!func_639(Param1))
			{
				return false;
			}
			break;
		case 4:
			if (!func_640(Param1))
			{
				return false;
			}
			break;
		case 5:
			if (!func_641(Param1))
			{
				return false;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (!func_642(iParam0, &Param1))
			{
				return false;
			}
			break;
		default:
			return false;
	}
	func_643(iParam0, Param1, -1);
	return true;
}

bool func_169(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar3;
	int iVar4;

	if (!func_644(16))
	{
		return false;
	}
	iVar3 = func_563(iParam0);
	iVar4 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10);
	Var0 = iVar3;
	Var0.f_1 = iParam1;
	if (func_644(64))
	{
		if (!func_646(func_645(Var0), 1, 8.497754E-37f))
		{
			return false;
		}
	}
	return func_569(iVar3, iVar4, iParam1);
}

bool func_170()
{
	return Global_1896762.f_13.f_3;
}

int func_171(int iParam0, int iParam1)
{
	Global_1896762.f_13.f_7 = iParam0;
	Global_1896762.f_13.f_8 = iParam1;
	Global_1896762.f_13.f_6 = 1;
	Global_1896762.f_13.f_9 = func_565(func_563(iParam1));
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_13.f_50.f_4, MISC::VAR_STRING(2, func_647(iParam0, 0)));
	}
	return 1;
}

bool func_172(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vector3 vVar0;

	vVar0.f_2 = -2;
	vVar0.f_1 = iParam0;
	vVar0.x = func_563(iParam1);
	Global_1142409.f_2036.f_3 = bParam2;
	if (bParam2)
	{
		if (!func_648(vVar0, 1))
		{
			return false;
		}
		func_649(1);
	}
	if (func_650(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			func_651(vVar0.y);
		}
		return true;
	}
	return false;
}

void func_173(int iParam0)
{
	if (!func_644(iParam0))
	{
		func_614(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73), iParam0);
	}
}

void func_174(float fParam0)
{
	Global_1940239.f_1556.f_2385.f_48 = fParam0;
}

int func_175()
{
	vector3 vVar0;

	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	func_652(2);
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_2 = 0;
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_653();
	func_654(vVar0);
	return 1;
}

void func_176()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return;
	}
	Global_1203937.f_5[1] = 0;
	func_655(&(Global_1203937.f_5[1]), 1);
	func_200(1);
}

void func_177()
{
	int iVar0;
	int iVar1;

	if (func_407(PLAYER::GET_PLAYER_INDEX(), 1) == -1)
	{
		iVar0 = func_656(2.884954E+11f, 0, 1, -1, 1);
		iVar1 = func_657(2.884954E+11f, iVar0, 0, 1, 1);
		if ((iVar0 == -2.401104E+18f || (func_658(iVar0) && func_659(2.884954E+11f, 3.414007E-11f, iVar0, 1, 1) > 0)) && !func_660(iVar1))
		{
			func_661(0, 0, (iVar1 / 100));
			func_662(1);
		}
	}
}

void func_178()
{
	if (func_663() == -1)
	{
		PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()), true, 21030, PLAYER::PLAYER_PED_ID());
	}
	else
	{
		func_664(PLAYER::PLAYER_PED_ID(), -4.057062E+08f, 0, 0);
	}
}

bool func_179()
{
	return Global_1940239.f_1556.f_149.f_126.f_3;
}

void func_180(int iParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 62)
	{
		return;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_3399[iVar0 /*4*/].f_3), &uVar1, 1);
	Global_1896762.f_3399[iVar0 /*4*/] = 0;
	Global_1896762.f_3399[iVar0 /*4*/].f_2 = 0;
	Global_1896762.f_3399[iVar0 /*4*/].f_1 = 0;
}

void func_181(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<55> Var1;
	int iVar56;

	Var1.f_33 = 7;
	Var1.f_51 = -1;
	if (!bParam1)
	{
		if (!bParam0)
		{
			if (func_665(&Var1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			Var1 = { func_196(1) };
			if (func_227(&Var1))
			{
				bVar0 = true;
			}
		}
	}
	iVar56 = 0;
	if (bVar0)
	{
		func_150(&Var1);
		func_97(&Var1);
		func_142(17);
		iVar56 = 8.528219E-25f;
	}
	else
	{
		func_666();
		func_667();
		if (func_668())
		{
			func_142(14);
			iVar56 = -9.041249E+27f;
		}
		else
		{
			func_142(16);
			iVar56 = 2567868f;
		}
	}
	if (iVar56 == 0)
	{
	}
	else if (!func_151(iVar56))
	{
	}
}

void func_182()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_368.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(Global_1896762.f_368.f_1);
	}
}

void func_183(int iParam0)
{
	Global_1896762.f_13.f_3 = iParam0;
}

struct<2> func_184(int iParam0, char* sParam1)
{
	struct<2> Var0;

	DATABINDING::_0xB138CA787F3DD858(iParam0, sParam1, &Var0);
	return Var0;
}

bool func_185(struct<2> Param0, char[4] cParam2, bool bParam3)
{
	struct<11> Var0;
	vector3 vVar11;

	if (!func_34(Param0))
	{
		return false;
	}
	else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Param0))
	{
		return false;
	}
	if (!func_669())
	{
		func_670("NT_INV_FINISH_FIRST_MISSION", 10000, 0, 0, 0, 1);
		return false;
	}
	if (!bParam3)
	{
		if (Global_1940239.f_1556.f_1118 != -1 && (MISC::GET_GAME_TIMER() - Global_1940239.f_1556.f_1118) < Global_1901671.f_2.f_24)
		{
			Global_1940239.f_1556.f_1118 = MISC::GET_GAME_TIMER();
			return false;
		}
	}
	if (!bParam3)
	{
		Global_1940239.f_1556.f_1118 = MISC::GET_GAME_TIMER();
	}
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	if (func_671())
	{
		func_655(&(Var0.f_10), 4);
	}
	else
	{
		func_672(&(Var0.f_10), 4);
	}
	Var0 = func_673();
	Var0.f_1 = func_674();
	Var0.f_2 = func_675();
	Var0.f_3 = { func_676() };
	Var0.f_9 = func_677();
	if (NETWORK::NETWORK_IS_FRIEND(&Param0))
	{
		if (!NETWORK::_NETWORK_IS_FRIEND_HANDLE_ONLINE(&Param0))
		{
			return false;
		}
	}
	vVar11 = { func_678() };
	func_679(&Param0, cParam2, &vVar11, &Var0, 0);
	return true;
}

int func_186()
{
	return Global_1940239.f_1556.f_9756.f_1;
}

void func_187(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	int iVar5;
	int iVar6;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0);
	iVar5 = func_680();
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Global_1940239.f_1556.f_1118 != -1 && (MISC::GET_GAME_TIMER() - Global_1940239.f_1556.f_1118) < Global_1901671.f_2.f_24)
			{
			}
			else if (func_681(iVar5) && func_682(iVar5))
			{
				if (!func_683(iVar5, 1))
				{
				}
				else
				{
					iVar0 = 0;
					while (iVar0 <= (iVar1 - 1))
					{
						iVar2 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar0);
						if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar2))
						{
						}
						else
						{
							Var3 = { func_184(iVar2, func_58(32)) };
							if (!func_34(Var3))
							{
							}
							else if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var3))
							{
							}
							else if (NETWORK::_0xA2837A5E21FB5A58(&Var3))
							{
							}
							else if (func_681(iVar5) && func_682(iVar5))
							{
								iVar6 = func_684(iVar5, &Var3);
								if (iVar6 != -1 && iVar6 != 0)
								{
								}
								else if (!func_185(Var3, NETWORK::_NETWORK_GET_GAMERTAG_FROM_FRIEND(&Var3), 1))
								{
								}
								iVar0++;
								Global_1940239.f_1556.f_1118 = MISC::GET_GAME_TIMER();
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_188()
{
	return Global_1896762.f_13.f_6;
}

bool func_189(var uParam0, var uParam1)
{
	*uParam0 = Global_1896762.f_13.f_7;
	*uParam1 = Global_1896762.f_13.f_8;
	return Global_1896762.f_13.f_6;
}

int func_190()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_42.f_24))
	{
		switch (DATABINDING::_DATABINDING_READ_HASH(Global_1896762.f_13.f_50.f_42.f_24))
		{
			case 1513236523:
				return 0;
			case 126620015:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

int func_191()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_102.f_24))
	{
		switch (DATABINDING::_DATABINDING_READ_HASH(Global_1896762.f_13.f_50.f_102.f_24))
		{
			case 1083456181:
				return 0;
			case -299269340:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

char* func_192()
{
	return func_685(&(Global_1896762.f_13.f_10));
}

int func_193(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4)
{
	if (func_686())
	{
		return 0;
	}
	func_687();
	Global_1896762.f_13.f_37 = 1;
	Global_1896762.f_13.f_37.f_2 = iParam1;
	Global_1896762.f_13.f_37.f_1 = iParam0;
	Global_1896762.f_13.f_37.f_3 = uParam2;
	Global_1896762.f_13.f_37.f_4 = uParam3;
	Global_1896762.f_13.f_37.f_5 = { func_688(sParam4) };
	func_689(1);
	return 1;
}

int func_194(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_686())
	{
		return 0;
	}
	func_687();
	Global_1896762.f_13.f_37 = 0;
	Global_1896762.f_13.f_37.f_2 = iParam1;
	Global_1896762.f_13.f_37.f_1 = iParam0;
	Global_1896762.f_13.f_37.f_3 = uParam2;
	Global_1896762.f_13.f_37.f_4 = uParam3;
	StringCopy(&(Global_1896762.f_13.f_37.f_5), "", 64);
	func_689(1);
	return 1;
}

void func_195(int iParam0)
{
	func_690(iParam0);
	PAD::DISABLE_CONTROL_ACTION(2, -1.236065E-28f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 527.8984f, false);
	PAD::DISABLE_CONTROL_ACTION(2, -1.454045E-11f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1.475287E+23f, false);
	PAD::DISABLE_CONTROL_ACTION(2, -2.800969E+07f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1.622725E-15f, false);
	PAD::DISABLE_CONTROL_ACTION(2, 1.095094E-28f, false);
	PAD::DISABLE_CONTROL_ACTION(2, -3.109249E-31f, false);
}

struct<55> func_196(bool bParam0)
{
	if (bParam0)
	{
		func_691(&(Global_1940239.f_1556.f_149.f_2));
	}
	return Global_1940239.f_1556.f_149.f_2;
}

bool func_197(var uParam0)
{
	return uParam0->f_3;
}

int func_198(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == 0)
	{
		GANG::_NETWORK_LEAVE_GANG(bParam1);
		if (POSSE::_0xC08DFF658B2E51DA())
		{
			func_692(3);
			return 1;
		}
	}
	else
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iParam0 == iVar0)
		{
			GANG::_NETWORK_LEAVE_GANG(bParam1);
		}
		if (POSSE::_0xC08DFF658B2E51DB(iParam0))
		{
			func_692(3);
			return 1;
		}
	}
	return 0;
}

int func_199(int iParam0)
{
	int iVar0;

	if (Global_1896762.f_195.f_1 != 0)
	{
		return 0;
	}
	Global_1896762.f_195.f_1 = iParam0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 5:
			iVar0 = 9;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 1:
			iVar0 = 7;
			break;
	}
	func_693(1106247680 /* Float: 30f */, iVar0);
	return 1;
}

void func_200(bool bParam0)
{
	int iVar0;
	int iVar1;

	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		func_655(&(Global_1203937.f_3), 32);
		func_655(&(Global_1203937.f_4), 12);
		Global_1203937.f_478 = iVar0;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			func_655(&(Global_1203937.f_4), 2);
		}
		POSSE::_0xC08BFF658B2E51DA(0);
		Global_1203937.f_5[5] = 0;
		func_655(&(Global_1203937.f_5[5]), 1);
	}
	Global_1203937.f_5[3] = 0;
	func_655(&(Global_1203937.f_5[3]), 1);
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		func_655(&(Global_1203937.f_5[3]), 6);
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		func_655(&(Global_1203937.f_5[3]), 6);
		return;
	}
	GANG::_NETWORK_LEAVE_GANG(bParam0);
}

bool func_201(var uParam0)
{
	return uParam0->f_4;
}

void func_202(int iParam0)
{
	func_655(&(Global_1203937.f_3), iParam0);
}

int func_203(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	struct<2> Var2;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		bVar0 = GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID());
		if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
		{
			if (bVar0)
			{
				GANG::_NETWORK_LEAVE_GANG(true);
			}
			else
			{
				GANG::_NETWORK_LEAVE_GANG(false);
			}
		}
	}
	if (Global_1203937.f_472 != -1 && Global_1203937.f_483[Global_1203937.f_472 /*63*/] != 0)
	{
		Var2 = { func_694() };
		if (func_34(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19) && func_34(Var2))
		{
			bVar1 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19), &Var2);
		}
	}
	if (POSSE::_0xC08BFF658B2E51DA(0))
	{
		func_695(bVar1, bParam0);
		if (bParam1)
		{
			func_696();
		}
		return 1;
	}
	return 0;
}

void func_204()
{
	struct<8> Var0;

	func_363();
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_697(&Var0);
	Global_1940239.f_1556.f_149.f_184.f_2 = func_698(&Var0, "NM_MW_POSSE_DISBAND_WARNING_HEADER", "NM_MW_POSSE_DISBAND_WARNING_SUBHEADER", 0, 0, 1);
}

bool func_205(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.624083E-27f))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (func_219(iParam0, 1))
		{
		}
		else
		{
			return false;
		}
	}
	else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10) >= GANG::_NETWORK_GET_GANG_SIZE(Global_1295619.f_10))
	{
		if (func_219(iParam0, 2))
		{
		}
	}
	else if (func_219(iParam0, -1))
	{
	}
	return true;
}

bool func_206(int iParam0)
{
	struct<20> Var0;
	int iVar26;

	if (Global_1297394.f_131.f_5)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_699(iParam0))
	{
		return false;
	}
	if (func_700(iParam0))
	{
		return false;
	}
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	iVar26 = 0;
	while (iVar26 <= 31)
	{
		if (Global_1297182.f_3.f_132[iVar26 /*2*/] == 255)
		{
			func_701(&Var0, iParam0);
			Global_1297182.f_3.f_132[iVar26 /*2*/] = iParam0;
			Global_1297182.f_3.f_132[iVar26 /*2*/].f_1 = MISC::GET_SYSTEM_TIME();
			return true;
		}
		iVar26++;
	}
	return false;
}

struct<2> func_207()
{
	return Global_1940239.f_1556.f_8;
}

bool func_208(struct<2> Param0)
{
	if (!func_34(Param0))
	{
		return false;
	}
	NETWORK::NETWORK_SHOW_PROFILE_UI(&Param0);
	return true;
}

struct<2> func_209()
{
	return Global_1940239.f_1556.f_26;
}

bool func_210(int iParam0)
{
	struct<2> Var0;
	int iVar2;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return false;
	}
	Var0 = { func_184(iParam0, func_58(32)) };
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return false;
	}
	if (!func_702(iVar2, !VOICE::_0x0DED260A1958A82E(iVar2)))
	{
	}
	return true;
}

bool func_211()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
		if (iVar2 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			iVar1++;
			if (!VOICE::_0x0DED260A1958A82E(iVar2))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	return iVar1 == iVar0;
}

void func_212(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
		if (iVar0 == PLAYER::PLAYER_ID())
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
		}
		else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
		}
		else
		{
			func_702(iVar0, bParam0);
		}
		iVar1++;
	}
}

void func_213(int iParam0)
{
	Global_265213.f_122484.f_139 = (Global_265213.f_122484.f_139 - (Global_265213.f_122484.f_139 && iParam0));
}

void func_214(int iParam0)
{
	Global_265213.f_122484.f_139 = (Global_265213.f_122484.f_139 || iParam0);
}

bool func_215()
{
	int iVar0;

	iVar0 = func_89();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_53, false);
		return false;
	}
	if (!func_703(iVar0, !VOICE::_0x0DED260A1958A82E(iVar0)))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_52, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_53, true);
	return true;
}

bool func_216(int iParam0, struct<2> Param1)
{
	struct<23> Var0;
	struct<2> Var63;
	bool bVar65;
	int iVar66;

	Var0.f_22 = 10;
	if (iParam0 == 0 || !POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		return false;
	}
	Var63 = { func_694() };
	if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_19), &Var63))
	{
		return false;
	}
	if (!func_34(Param1))
	{
		return false;
	}
	iVar66 = 0;
	while (iVar66 <= (Var0.f_21 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_22[iVar66 /*4*/]), &Param1))
		{
			bVar65 = true;
		}
		else
		{
			iVar66++;
		}
	}
	if (!bVar65)
	{
		return false;
	}
	if (POSSE::_0xC08EFF658B2E51DB(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

int func_217(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	struct<2> Var2;
	int iVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (func_420(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_610(iParam0) };
			POSSE::_0xC08AFF658B2E51DA(&iVar4);
			if (func_216(iVar4, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		GANG::_NETWORK_KICK_GANG_MEMBER(iParam0, iParam2);
	}
	return 1;
}

bool func_218(bool bParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	if (!MISC::IS_DURANGO_VERSION())
	{
		return false;
	}
	sVar0 = "";
	NETWORK::_0x5759160AC17C13CE(bParam0, sVar0);
	return true;
}

bool func_219(int iParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (iParam1 == 1)
	{
		return false;
	}
	if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())) || !GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (!func_704())
	{
		func_705(iVar0);
		return false;
	}
	if (func_706(iParam0))
	{
		return false;
	}
	if (!func_707(iParam0))
	{
		return false;
	}
	if (iParam1 == 2)
	{
		func_708("NG_FULL_S");
		return true;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.624083E-27f))
	{
		func_708("NG_CANT_INVITE");
		return false;
	}
	if (!func_709())
	{
		func_708("NG_POSSE_INVITE_LIMIT");
		return false;
	}
	if (GANG::_0x6102830F764B3DE1(iParam0))
	{
		func_711(func_710(-7.47529E-06f, 0.2277069f), 1);
		sVar1 = MISC::VAR_STRING(10, "NG_INVITE_SENT_POSSE", func_713(PLAYER::GET_PLAYER_NAME(iParam0), func_712(iParam0, 1, -1, 0)));
		func_714(sVar1, -2, 0, 0, 0, 1);
		func_715(iParam0);
		return true;
	}
	func_708("NG_CANT_INVITE");
	return false;
}

char[] func_220()
{
	return func_716(Global_1940239.f_1556.f_8.f_2);
}

int func_221(int iParam0)
{
	char* sVar0;

	if (!func_717(1))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (!CREW::_NETWORK_CLAN_INVITE_PLAYER(iParam0))
	{
		return 0;
	}
	sVar0 = MISC::VAR_STRING(10, "NC_CREW_INVITE_SENT", func_713(PLAYER::GET_PLAYER_NAME(iParam0), func_712(iParam0, 1, -1, 0)));
	func_714(sVar0, -2, 0, 0, 0, 1);
	return 1;
}

void func_222(bool bParam0)
{
	struct<2> Var0;
	struct<11> Var17;

	if (func_718())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
	{
		func_719(0);
		return;
	}
	NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(bParam0, &(Var0.f_2));
	Var0 = { *bParam0 };
	Var17.f_1 = -1;
	Var17.f_2 = -1;
	Var17.f_3 = -1;
	Var17.f_3.f_1 = -1;
	if (func_671())
	{
		func_655(&(Var17.f_10), 4);
	}
	else
	{
		func_672(&(Var17.f_10), 4);
	}
	Var17 = func_673();
	Var17.f_1 = Global_1572887.f_72.f_9;
	Var17.f_2 = func_675();
	Var17.f_3 = { func_676() };
	Var17.f_9 = func_677();
	func_720(&Var0, &Var17);
	func_721(&Var0);
	func_722(&Var17);
	func_723(1);
	func_724(0);
}

bool func_223(bool bParam0)
{
	char* sVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_FRIEND(bParam0))
	{
		return false;
	}
	sVar0 = "";
	if (!NETWORK::NETWORK_ADD_FRIEND(bParam0, sVar0))
	{
		return false;
	}
	return true;
}

bool func_224(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_FRIEND(bParam0))
	{
		return false;
	}
	if (!NETWORK::_NETWORK_REMOVE_FRIEND(bParam0))
	{
		return false;
	}
	return true;
}

bool func_225(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
		{
			return false;
		}
		if (!GANG::NETWORK_IS_GANG_ACTIVE(iParam0))
		{
			return false;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(iParam0)))
		{
			return false;
		}
	}
	uParam1->f_1 = iParam0;
	uParam1->f_3 = 0;
	*uParam1 = 1;
	uParam1->f_4 = func_420(iParam0);
	if (!func_691(uParam1))
	{
		return false;
	}
	return true;
}

bool func_226(struct<2> Param0, int iParam2, char[4] cParam3)
{
	struct<19> Var0;

	if (iParam2 < 0 || iParam2 > 8)
	{
		return false;
	}
	if (!func_34(Param0))
	{
		return false;
	}
	Global_1940239.f_1556.f_1082 = iParam2;
	Global_1940239.f_1556.f_1082.f_1 = { Param0 };
	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("CM_REPORT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = MISC::GET_HASH_KEY("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_697(&Var0);
	func_726(Var0, "CWS_REPORT", func_725(Global_1940239.f_1556.f_1082));
	return true;
}

bool func_227(var uParam0)
{
	struct<23> Var0;

	if (!*uParam0)
	{
		return false;
	}
	if (uParam0->f_4 && uParam0->f_3)
	{
		Var0.f_22 = 10;
		if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var0))
		{
			return false;
		}
	}
	else
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1))
		{
			return false;
		}
		if (!GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

bool func_228(var uParam0)
{
	if (!func_227(uParam0))
	{
		return false;
	}
	if (func_197(uParam0))
	{
		if (func_727(uParam0))
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
			{
				if (!func_728(uParam0->f_2, 0))
				{
					return false;
				}
			}
			else if (!func_729(uParam0->f_2))
			{
				return false;
			}
			else if (!func_730(uParam0->f_2))
			{
				return false;
			}
			else
			{
				func_147();
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1))
		{
			return false;
		}
		if (func_201(uParam0))
		{
			if (func_727(uParam0) && !func_731(GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1)))
			{
				func_708("NM_GC_POSSE_JOIN_FAIL");
			}
		}
		else
		{
			if (!func_732())
			{
				func_708("NG_CANT_JOIN");
				return false;
			}
			else if (!func_727(uParam0))
			{
				func_734("NG_FULL", func_733(uParam0->f_1, 1, 0), func_712(GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1), 1, -1, 0));
				return false;
			}
			func_735(uParam0->f_1);
		}
	}
	func_151(-9.041249E+27f);
	return true;
}

bool func_229(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	if (!func_732())
	{
		func_708("NG_CANT_JOIN");
		return false;
	}
	else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam0) == GANG::_NETWORK_GET_GANG_SIZE(iParam0))
	{
		func_734("NG_FULL", func_733(iParam0, 1, 0), 9.896979E-27f);
		return false;
	}
	if (func_420(iParam0))
	{
		func_731(GANG::NETWORK_GET_GANG_LEADER(iParam0));
	}
	else
	{
		func_735(iParam0);
	}
	return true;
}

bool func_230()
{
	return Global_1572887.f_72.f_40 != 1;
}

void func_231(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(false);
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (GANG::NETWORK_GET_GANG_LEADER(iVar1) == iVar0)
	{
		uVar2 = func_736(iVar1);
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&uVar2, Global_1295619);
		func_737(uVar2);
	}
	func_738(10, bParam0, 0, 0);
}

void func_232(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_739(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901671.f_783.f_1)
		{
			iVar1 = func_740(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_271(iParam1);
	func_742(1, 32, iVar0, func_741(iVar1), func_167(), iVar2, -1, 0, 0, 0);
}

int func_233(int iParam0)
{
	int iVar0;

	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_1028[iVar0 /*194*/].f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_234(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (iParam0 != -1 && iParam0 != Global_265213.f_4[iVar0 /*46*/].f_28)
		{
		}
		else if (Global_265213.f_57505[iVar0 /*8*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_235(int iParam0)
{
	func_655(&(Global_1572887.f_72.f_16), iParam0);
}

int func_236()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4[21];
	int iVar26;

	iVar3 = 1;
	if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		iVar3 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10);
	}
	iVar0 = 0;
	while (iVar0 < (Global_265213.f_107995.f_14097 - 1))
	{
		if (Global_265213.f_107995.f_13445[iVar0] == 8.871721E+36f)
		{
			iVar2 = func_743(Global_265213.f_107995.f_13575[iVar0]);
			if (iVar2 == -1)
			{
			}
			else if (iVar3 <= func_233(iVar2))
			{
				iVar4[iVar1] = iVar2;
				iVar1++;
			}
		}
		iVar0++;
	}
	if (iVar1 < 1)
	{
		return -1;
	}
	iVar26 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	return iVar4[iVar26];
}

void func_237()
{
	func_271(12);
	func_742(1, 32, 2, -1, func_167(), 0, -1, 0, 3, 0);
}

void func_238()
{
	func_271(13);
	func_742(1, 32, 1, -1, func_167(), 0, -1, 0, 3, 0);
}

void func_239(bool bParam0)
{
	int iVar0;

	if (!bParam0 && Global_1956862.f_1431.f_108)
	{
		return;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 0))
	{
		Global_1956862.f_1431.f_108.f_1 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 0);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_1 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 1))
	{
		Global_1956862.f_1431.f_108.f_3 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 1);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_3 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(iVar0, 2))
	{
		Global_1956862.f_1431.f_108.f_2 = ATTRIBUTE::_GET_ATTRIBUTE_OVERPOWER_SECONDS_LEFT(iVar0, 2);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_2 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 0))
	{
		Global_1956862.f_1431.f_108.f_4 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 0);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_4 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 1))
	{
		Global_1956862.f_1431.f_108.f_6 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 1);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_6 = 0f;
	}
	if (ATTRIBUTE::_IS_ATTRIBUTE_CORE_OVERPOWERED(iVar0, 2))
	{
		Global_1956862.f_1431.f_108.f_5 = ATTRIBUTE::_GET_ATTRIBUTE_CORE_OVERPOWER_SECONDS_LEFT(iVar0, 2);
	}
	else
	{
		Global_1956862.f_1431.f_108.f_5 = 0f;
	}
	Global_1956862.f_1431.f_108 = 1;
}

void func_240()
{
	func_744(512);
	func_745(&Global_1051190);
}

void func_241()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iVar0 /*20*/].f_5))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iVar0 /*20*/].f_5);
		}
		if (SCRIPTS::DOES_THREAD_EXIST(Global_1206482.f_78[iVar0 /*20*/].f_4))
		{
			SCRIPTS::_REQUEST_THREAD_EXIT(Global_1206482.f_78[iVar0 /*20*/].f_4);
		}
		iVar0++;
	}
}

bool func_242(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_746();
	}
	return func_747(64, iParam0);
}

void func_243(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_748(iParam0);
	if (!func_749(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_750(128) && !func_751(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_752() == 4)
	{
		func_753(18);
	}
	func_754(1024);
}

bool func_244(int iParam0)
{
	return func_23(1, iParam0);
}

void func_245()
{
	bool bVar0;
	int iVar1;

	if (func_755(255) == 4 || func_751(0))
	{
		Global_1102813.f_3945 = 1;
		return;
	}
	bVar0 = func_751(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102813.f_4[iVar1] = 0;
		iVar1++;
	}
	func_756(113);
	func_756(135);
	if (bVar0)
	{
		func_756(36);
	}
	Global_1102813.f_3942 = 0;
	Global_1102813.f_3943 = 0;
	Global_1102813.f_3944 = 0;
	Global_1102813.f_3945 = 0;
}

void func_246(bool bParam0, bool bParam1)
{
	if (func_755(255) == 4)
	{
		return;
	}
	if (func_757(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_753(0);
	}
	else
	{
		if (bParam1)
		{
			func_243(0, 0, 0, 1);
		}
		func_756(0);
		func_758(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_759(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_760(Global_1102813.f_3839, 36);
	func_761(Global_1102813.f_3878, 36);
}

bool func_247()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

void func_248()
{
	int iVar0;

	if (Global_1203937.f_472 == -1)
	{
		return;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[Global_1295619]);
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		func_695(0, 0);
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		POSSE::_0xC08BFF658B2E51DA(0);
		func_695(0, 0);
	}
	else
	{
		func_695(1, 0);
	}
}

void func_249(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1051194)
	{
		return;
	}
	if (!func_762(&iVar0))
	{
		func_763(iParam0, iParam1, 0);
		return;
	}
	func_764(0, iParam0, 1, iParam1, -1, 1, iVar0);
}

void func_250()
{
	int iVar0;

	if (Global_1051194)
	{
		return;
	}
	if (!func_762(&iVar0))
	{
		func_765(1);
		return;
	}
	func_764(2, 0, 1, 0, -1, 1, iVar0);
}

int func_251(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_766(&(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_33)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_38, Global_1295619.f_16 + 3);
	if (!func_646(4.136629E+26f, 1, 8.497754E-37f))
	{
		return -1;
	}
	iVar4 = func_767(4.136629E+26f, "NSTM_STABLE_REVIVE_FEEDPAID", 1, 1, 0, 8.497754E-37f);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_768(&Var0, 0, 1))
	{
		if (!func_769(Var0, 0, 0))
		{
			return -1;
		}
	}
	func_770(Var0, 0, 0);
	func_771(&Var0);
	func_772(32);
	return iVar4;
}

int func_252(int iParam0)
{
	struct<4> Var0;
	int iVar4;

	Var0 = { func_766(&(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_33)) };
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_38, Global_1295619.f_16 + 3);
	if (!func_646(2.450426E-08f, 1, 8.497754E-37f))
	{
		return -1;
	}
	iVar4 = func_767(2.450426E-08f, "NSTM_VEHICLE_REVIVE_FEEDPAID", 1, 1, 0, 8.497754E-37f);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_768(&Var0, 2, 1))
	{
		if (!func_265(Var0, 2, 0))
		{
			return -1;
		}
	}
	func_770(Var0, 2, 0);
	func_772(32);
	return iVar4;
}

void func_253(bool bParam0)
{
	if (bParam0)
	{
		func_773(10, 4);
	}
	else
	{
		func_773(9, 4);
	}
}

void func_254()
{
	func_773(11, 2);
}

int func_255(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iVar0, false);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		if (iVar1 == PLAYER::PLAYER_PED_ID() && !bParam0)
		{
			return 0;
		}
	}
	Global_1290256.f_11.f_50 = Global_1295619.f_15;
	func_774(48);
	func_775();
	return 1;
}

void func_256(int iParam0)
{
	struct<4> Var0;
	struct<4> Var4;

	if (func_776())
	{
		return;
	}
	Var0 = { func_766(&(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_33)) };
	Var4 = { func_777() };
	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var0, &Var4))
	{
		return;
	}
	func_778(&Var0, 1);
	func_772(32);
}

int func_257(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_779(iParam0);
	bVar1 = func_780(func_167(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

void func_258(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar26;
	int iVar27;
	struct<4> Var28;
	struct<4> Var32;
	struct<4> Var36;
	bool bVar40;
	int iVar41;

	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_538(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_536(iParam0, iVar0, iVar1, 0, &Var2, 0))
	{
		func_538(iVar0);
		return;
	}
	iVar26 = PLAYER::PLAYER_ID();
	iVar27 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar26);
	Var28 = { func_535(0, 1, 0, -1) };
	Var32 = { Var2 };
	if (ENTITY::DOES_ENTITY_EXIST(iVar27))
	{
		if (DECORATOR::DECOR_EXIST_ON(iVar27, func_781()))
		{
			Var36 = DECORATOR::DECOR_GET_INT(iVar27, func_781());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar27, func_782()))
		{
			Var36.f_1 = DECORATOR::DECOR_GET_INT(iVar27, func_782());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar27, func_783()))
		{
			Var36.f_2 = DECORATOR::DECOR_GET_INT(iVar27, func_783());
		}
		if (DECORATOR::DECOR_EXIST_ON(iVar27, func_784()))
		{
			Var36.f_3 = DECORATOR::DECOR_GET_INT(iVar27, func_784());
		}
	}
	if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var28, &Var32))
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var36, &Var32))
		{
			bVar40 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar27))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar27))
				{
					bVar40 = true;
				}
			}
			if (bVar40)
			{
				iVar41 = 120000;
			}
			else
			{
				iVar41 = 30000;
			}
			func_785(Var28, (Global_1295619.f_16 + (iVar41 / 1000)), 2, 0);
			func_775();
			func_253(1);
		}
		func_786(&Var32, 0);
	}
	func_538(iVar0);
}

void func_259(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<11> Var2;

	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_538(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_536(iParam0, iVar0, iVar1, 0, &Var2, 0))
	{
		func_538(iVar0);
		return;
	}
	if (iParam1 == 3)
	{
		func_786(&Var2, 0);
	}
	func_788(&Var2, func_787(iParam1, 0), 0);
	func_538(iVar0);
}

void func_260(bool bParam0)
{
	if (bParam0)
	{
		func_773(13, 5);
	}
	else
	{
		func_773(12, 5);
	}
}

void func_261()
{
	func_773(14, 3);
}

void func_262(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	int iVar44;
	int iVar45;
	struct<4> Var46;
	struct<4> Var50;
	struct<4> Var54;
	struct<4> Var58;
	bool bVar62;
	int iVar63;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_538(iVar0);
		return;
	}
	Var20.f_10 = -1;
	if (!func_536(iParam0, iVar0, iVar1, 2, &Var20, 0))
	{
		func_538(iVar0);
		return;
	}
	iVar44 = PLAYER::PLAYER_ID();
	iVar45 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar44);
	Var46 = { func_777() };
	Var50 = { func_264(0, 0, 0, -1) };
	Var54 = { Var20 };
	Var58 = { func_789(2) };
	if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var46, &Var58))
	{
		if (func_790(&Var58) && INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var58, &Var54))
		{
			func_791();
			func_792();
			func_538(iVar0);
			return;
		}
	}
	else if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
	{
	}
	if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var50, &Var54))
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var58, &Var54))
		{
			bVar62 = false;
			if (ENTITY::DOES_ENTITY_EXIST(iVar45))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iVar45))
				{
					bVar62 = true;
				}
			}
			if (bVar62)
			{
				iVar63 = 120000;
			}
			else
			{
				iVar63 = 30000;
			}
			func_793(Var50, (Global_1295619.f_16 + (iVar63 / 1000)), 2, 2);
			func_266();
			func_260(1);
		}
		func_794(&Var54, 0);
	}
	func_795(&Var54, 2);
	func_538(iVar0);
}

void func_263(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<11> Var20;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_538(iVar0);
		return;
	}
	Var20.f_10 = -1;
	if (!func_536(iParam0, iVar0, iVar1, 2, &Var20, 0))
	{
		func_538(iVar0);
		return;
	}
	if (iParam1 == 7)
	{
		func_794(&Var20, 0);
	}
	func_796(&Var20, func_787(iParam1, 2), 0);
	func_538(iVar0);
}

struct<4> func_264(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var24;
	bool bVar28;
	int iVar29;
	struct<4> Var30;

	Var0.f_9 = -5.45926E-19f;
	if (!func_797(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var24 = { func_798() };
		if (func_799() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var24))
		{
			Var0 = { Var24 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var24, &Var0))
		{
			func_800(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_257(PLAYER::PLAYER_ID());
	}
	bVar28 = func_801(76);
	if (bVar28)
	{
		iParam3 = 3;
	}
	iVar29 = func_802(iParam3, 2);
	if (iVar29 != 7)
	{
		if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_17418.f_55.f_61[iVar29 /*4*/])))
		{
			Var0 = { Global_17418.f_55.f_61[iVar29 /*4*/] };
		}
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		if (!bParam1)
		{
			return func_777();
		}
		if (!func_803(&Var0, 0))
		{
			Var30 = { func_804(bParam0) };
		}
		else
		{
			Var30 = { Var0 };
		}
		return Var30;
	}
	return Var0;
}

bool func_265(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_768(&Param0, 2, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { func_777() };
	iVar4 = 0;
	while (iVar4 < 16)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar4 /*7*/]), &Param0) && !INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar4 /*7*/]), &Var0))
		{
		}
		else
		{
			Global_1290256.f_782.f_107[iVar4 /*7*/].f_5 = Global_1295619.f_16 + 120;
			Global_1290256.f_782.f_107[iVar4 /*7*/] = { Param0 };
			Global_1290256.f_782.f_107[iVar4 /*7*/].f_6 = iParam5;
			Global_1290256.f_782.f_107[iVar4 /*7*/].f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

void func_266()
{
	if (func_805(8, 255))
	{
		return;
	}
	func_806(3);
}

bool func_267(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_807(uParam0, 4194304);
		return true;
	}
	iVar0 = func_808(iParam1);
	if (iVar0 == -1)
	{
		return false;
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
	func_809(&(Global_265213.f_4[iVar0 /*46*/]));
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_810(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_811(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_812(Global_265213.f_57505[iVar0 /*8*/]);
	vVar2 = { func_813(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_814(iVar1) };
	}
	else if (func_815(uParam0->f_12))
	{
		uParam0->f_48 = { func_817(func_816(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_818(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_819(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_819(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_820(uParam0->f_11) };
		if (!func_821(uParam0->f_48))
		{
			uParam0->f_48 = { func_819(func_822(uParam0->f_16.f_2)) };
		}
	}
	func_823(uParam0);
	func_807(uParam0, 4194304);
	return true;
}

bool func_268(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (iParam1 == 0)
	{
		return false;
	}
	if (uParam0->f_11 == iParam1)
	{
		func_807(uParam0, 4194304);
		return true;
	}
	iVar0 = func_824(iParam1);
	if (iVar0 == -1)
	{
		return false;
	}
	MemCopy(&(uParam0->f_22), {Global_265213.f_67571.f_4[iVar0 /*46*/]}, 3);
	uParam0->f_32 = { Global_265213.f_67571.f_4[iVar0 /*46*/].f_7 };
	uParam0->f_40 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_17;
	uParam0->f_41 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_25;
	uParam0->f_11 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_23;
	uParam0->f_12 = Global_265213.f_67571.f_18405[iVar0 /*8*/];
	uParam0->f_56 = { Global_265213.f_67571.f_4[iVar0 /*46*/].f_19 };
	uParam0->f_25 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_29;
	uParam0->f_27 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_27;
	uParam0->f_28 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_28;
	uParam0->f_16 = 2;
	uParam0->f_16.f_1 = 0;
	uParam0->f_16.f_4 = iParam4;
	uParam0->f_16.f_2 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_24;
	uParam0->f_16.f_3 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_26;
	uParam0->f_21 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_26;
	uParam0->f_29 = Global_265213.f_67571.f_4[iVar0 /*46*/].f_35;
	uParam0->f_1 = { Global_265213.f_67571.f_4[iVar0 /*46*/].f_15 };
	MemCopy(&(uParam0->f_3), {Global_265213.f_67571.f_4[iVar0 /*46*/].f_4}, 8);
	if (iParam2 != -1)
	{
		if ((uParam0->f_16.f_2 == -218565.1f && func_810(iParam2)) || (uParam0->f_16.f_2 == 9.256025E-25f && func_811(iParam2)))
		{
			uParam0->f_16.f_3 = iParam2;
			uParam0->f_21 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_25 = iParam3;
	}
	iVar1 = func_812(Global_265213.f_67571.f_18405[iVar0 /*8*/]);
	vVar2 = { func_813(uParam0->f_12) };
	if (iVar1 != -1)
	{
		uParam0->f_48 = { func_814(iVar1) };
	}
	else if (func_815(uParam0->f_12))
	{
		uParam0->f_48 = { func_817(func_816(uParam0->f_12)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_48 = { func_818(&vVar2) };
	}
	else if (uParam0->f_16.f_3 == 8.123318E-38f)
	{
		uParam0->f_48 = { func_819(6.2427E-16f) };
	}
	else if (uParam0->f_16.f_3 == -6.183555E+13f)
	{
		uParam0->f_48 = { func_819(3.23922E+10f) };
	}
	else
	{
		uParam0->f_48 = { func_820(uParam0->f_11) };
		if (!func_821(uParam0->f_48))
		{
			uParam0->f_48 = { func_819(func_822(uParam0->f_16.f_2)) };
		}
	}
	func_823(uParam0);
	func_807(uParam0, 4194304);
	return true;
}

void func_269(bool bParam0, int iParam1)
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

void func_270(int iParam0)
{
	if (!func_439(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12, iParam0))
	{
	}
	func_655(&(Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12), iParam0);
}

void func_271(int iParam0)
{
	Global_1572887.f_72.f_14 = iParam0;
}

int func_272(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_826(func_825());
	iVar1 = 0;
	while (iVar1 < 31)
	{
		if (Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/] == iParam0)
		{
			if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/].f_4))
			{
				return 2;
			}
			else if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(Global_265213.f_107995.f_1028[iVar0 /*194*/][iVar1 /*6*/].f_3))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		iVar1++;
	}
	return 0;
}

int func_273(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar4 = (32 - func_827());
	iVar0 = (5 - 1);
	while (iVar0 >= 0)
	{
		iVar6 = iVar0;
		iVar2 = func_828(uParam0->f_3, iVar6, 1);
		if (iVar2 == -1)
		{
		}
		else
		{
			if (iVar0 != (5 - 1))
			{
				iVar1 = BUILTIN::SHIFT_LEFT(iVar1, iVar2);
				iVar3 = (iVar3 + iVar2);
				if (iVar3 > 32)
				{
					return 0;
				}
			}
			iVar1 = (iVar1 || func_829(uParam0->f_3, iVar6, uParam0));
		}
		iVar0 = (iVar0 + -1);
	}
	if (uParam0->f_3 == 0)
	{
		return 0;
	}
	iVar5 = uParam0->f_3;
	iVar5 = BUILTIN::SHIFT_LEFT(iVar5, iVar4);
	iVar1 = (iVar1 || iVar5);
	return iVar1;
}

void func_274(struct<29> Param0, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, struct<2> Param59, int iParam61, int iParam62, int iParam63)
{
	func_742(iParam62, Param0.f_28, 2, Param0.f_12, Param59, iParam61, -1, 0, 0, iParam63);
}

void func_275()
{
	Global_1940239.f_1556.f_8925 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "cloud_drop_mission_data");
	Global_1940239.f_1556.f_8925.f_2 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1940239.f_1556.f_8925, "cloud_drop_mission_playlist_collection");
	Global_1940239.f_1556.f_8925.f_3 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1940239.f_1556.f_8925, "listItemDataContainer");
	Global_1940239.f_1556.f_8925.f_8 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_1556.f_8925, "cloud_drop_mission_playlists_sub_header_rawtext", MISC::VAR_STRING(2, "TELEGRAM_MENU_SUBH"));
	Global_1940239.f_1556.f_8925.f_4 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_1556.f_8925, "telegram_playlist_desc", "");
}

void func_276()
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_1556.f_8925.f_2);
}

int func_277()
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

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0 = { func_830(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_831(Var0, &iVar10, &iVar11, 0))
	{
		if (iVar11 > 0)
		{
			Global_1940239.f_11595 = 0;
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar14 = func_832(iVar12, iVar10);
				if (!func_833(bVar14))
				{
				}
				else
				{
					iVar19 = func_834(bVar14);
					iVar20 = func_826(func_834(bVar14));
					if (iVar19 == Global_265213.f_107995.f_13575[iVar20])
					{
						if (func_354(Global_265213.f_107995.f_14293[iVar20], 1))
						{
							bVar15[0] = bVar14;
						}
						if (func_354(Global_265213.f_107995.f_14293[iVar20], 2))
						{
							bVar15[1] = bVar14;
						}
						if (func_354(Global_265213.f_107995.f_14293[iVar20], 4))
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
				if (func_623(bVar15[iVar13], 0))
				{
					func_835(bVar15[iVar13]);
				}
				iVar13++;
			}
			iVar12 = 0;
			while (iVar12 < iVar11)
			{
				bVar14 = func_832(iVar12, iVar10);
				if (!func_833(bVar14))
				{
				}
				else
				{
					iVar19 = func_834(bVar14);
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
						func_835(bVar14);
					}
				}
				iVar12++;
			}
		}
		func_836(iVar10);
		return 1;
	}
	return 0;
}

void func_278()
{
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_1556.f_8925.f_1);
	func_143();
	Global_1940239.f_1556.f_8925.f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(Global_1940239.f_1556.f_8925, "cloud_drop_mission_main_sub_header_rawtext", "");
}

bool func_279(bool bParam0)
{
	if (func_837(bParam0, 104.1169f) == 9.522126E+26f)
	{
		func_838(0);
		func_839(func_834(bParam0));
		return true;
	}
	return false;
}

void func_280()
{
	func_840();
}

void func_281()
{
	float fVar0;
	vector3 vVar1;

	fVar0 = 1.949954E-18f;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar0))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar0, &vVar1))
		{
			if (vVar1.x == 1.386538E+37f)
			{
			}
			else if (vVar1.x == -4.615686E-05f)
			{
			}
			else if (vVar1.x == -1.444785E+16f)
			{
				func_143();
			}
			else if (vVar1.x == -2.576099E-24f)
			{
				func_70(UIPINNING::_UIPINNING_GET_TOOLTIP_TEXT(vVar1.z), 27.64779f);
			}
			UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar0);
		}
	}
}

void func_282()
{
	func_841(Global_1295619.f_1, 0);
	func_842();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_92, (UNLOCK::UNLOCK_IS_UNLOCKED(-7.85686E-27f) && func_843()));
	if (func_247() && (func_671() || func_844()))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_93, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_93, false);
	}
	func_845(0, func_466() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_80, func_846());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_79, func_847());
	func_845(10, func_473() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_86, func_848());
	func_845(1, func_468() == 0);
	func_845(2, func_849());
	func_850();
}

void func_283()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<43> Var3;

	iVar2 = Global_1295619.f_16;
	if (Global_1940239.f_245.f_1306 <= 0)
	{
		return;
	}
	if (Global_1940239.f_245.f_1310 >= 30)
	{
		Global_1940239.f_245.f_1310 = 0;
	}
	Var3 = { Global_1940239.f_245.f_14[Global_1940239.f_245.f_1310 /*43*/] };
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Var3))
	{
		iVar0 = DATABINDING::DATABINDING_READ_INT(Var3.f_29);
		switch (DATABINDING::DATABINDING_READ_INT(Var3.f_30))
		{
			case 21:
				if (!func_851() || iVar0 < iVar2)
				{
					iVar1 = 0;
					while (iVar1 < Global_1235672.f_9085.f_14)
					{
						if (Global_1235672.f_9085.f_9[iVar1 /*4*/] == PLAYER::INT_TO_PLAYERINDEX(DATABINDING::DATABINDING_READ_INT(Var3.f_31)))
						{
							Global_1235672.f_9085.f_9[iVar1 /*4*/].f_2 = 1;
							Global_1235672.f_9085.f_9[iVar1 /*4*/].f_3 = iVar0 < iVar2;
						}
						iVar1++;
					}
					func_852(DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[Global_1940239.f_245.f_1310 /*43*/].f_30));
					func_605(Var3);
				}
				break;
			default:
				if (iVar0 < iVar2)
				{
					func_852(DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[Global_1940239.f_245.f_1310 /*43*/].f_30));
					func_605(Var3);
				}
				break;
		}
	}
	Global_1940239.f_245.f_1310++;
}

void func_284()
{
	int iVar0;

	if (Global_1940239.f_245.f_1307 <= 0)
	{
		func_70("", 27.64779f);
		return;
	}
	func_853();
	iVar0 = Global_1295619.f_16;
	if (Global_1940239.f_245.f_1309 + 1 <= iVar0)
	{
		Global_1940239.f_245.f_1309 = iVar0;
		func_70(func_481(func_854()), 27.64779f);
	}
}

void func_285()
{
	char* sVar0;

	sVar0 = UILOG::_0x2A4765812202E671();
	func_70(sVar0, 27.64779f);
}

void func_286()
{
	char* sVar0;

	sVar0 = func_461();
	func_70(sVar0, 27.64779f);
}

void func_287()
{
	struct<23> Var0;
	struct<52> Var63;
	int iVar118;
	int iVar119;
	int iVar120;
	int iVar121;
	var uVar122[32];
	int iVar155;
	int iVar156;
	bool bVar157;
	struct<14> Var158;
	int iVar202;
	int iVar203;
	int iVar204;
	int iVar205;
	int iVar206;
	struct<52> Var207;
	struct<55> Var262;

	func_855(14);
	if (func_328() && !func_856(14))
	{
		Var0.f_22 = 10;
		Var63.f_33 = 7;
		Var63.f_51 = -1;
		iVar118 = 0;
		iVar119 = 0;
		POSSE::_0xC08AFF658B2E51DA(&iVar120);
		if (iVar120 != 0)
		{
			func_857(&Var63);
			if (func_529(iVar120, &Var63, 0))
			{
				if (func_858(iVar118, &Var63))
				{
					iVar118++;
				}
			}
		}
		iVar121 = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
		iVar119 = 0;
		while (iVar119 < iVar121)
		{
			func_857(&Var63);
			if (!func_859(iVar119, &Var0))
			{
			}
			else if (Var0 == 0)
			{
			}
			else if (Var0 == iVar120)
			{
			}
			else if (!func_529(Var0, &Var63, 0))
			{
			}
			else if (!func_858(iVar118, &Var63))
			{
			}
			else
			{
				iVar118++;
			}
			iVar119++;
		}
		if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
		{
			if (!func_420(Global_1295619.f_10))
			{
				func_857(&Var63);
				if (func_225(Global_1295619.f_10, &Var63, 1))
				{
					if (func_858(iVar118, &Var63))
					{
						iVar118++;
					}
				}
			}
		}
		iVar155 = GANG::_0x53A94294FDDCF98C(&uVar122, 1);
		iVar156 = 0;
		bVar157 = false;
		Var158.f_13 = 10;
		iVar202 = 0;
		while (iVar202 < 2)
		{
			iVar119 = 0;
			while (iVar119 < iVar155)
			{
				func_857(&Var63);
				bVar157 = false;
				if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar122[iVar119]))
				{
				}
				else if (!GANG::NETWORK_IS_GANG_ACTIVE(uVar122[iVar119]))
				{
				}
				else if (uVar122[iVar119] == Global_1295619.f_10)
				{
				}
				else if (func_420(uVar122[iVar119]))
				{
					if (func_860(uVar122[iVar119], &Var158))
					{
						iVar156 = 0;
						while (iVar156 < 5)
						{
							if (func_859(iVar156, &Var0))
							{
								if (Var0 == Var158)
								{
									bVar157 = true;
								}
								else
								{
									iVar156++;
								}
								if (bVar157)
								{
								}
								else if (!func_225(uVar122[iVar119], &Var63, 1))
								{
								}
								else
								{
									if (func_861(&Var63))
									{
										if (iVar202 != 0)
										{
										}
										else
										{
											Jump @533; //curOff = 521
											if (iVar202 != 1)
											{
											}
											else if (!func_858(iVar118, &Var63))
											{
											}
											else
											{
												iVar118++;
											}
										}
										iVar119++;
										iVar202++;
										iVar203 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1);
										if (iVar118 <= iVar203)
										{
											iVar204 = iVar203;
											while (iVar204 >= iVar118)
											{
												DATABINDING::_0x6318FB3BE37E11B3(Global_1940239.f_1556.f_149.f_1, iVar204);
												iVar204 = (iVar204 + -1);
											}
										}
										if (!func_856(14))
										{
											if (func_40(6))
											{
												iVar205 = func_862(14);
												if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_149.f_1))
												{
													if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1) >= 1 && iVar205 < DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1))
													{
														iVar206 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1940239.f_1556.f_149.f_1, iVar205);
														if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar206))
														{
															Var207.f_33 = 7;
															Var207.f_51 = -1;
															if (func_96(&iVar206, &Var207))
															{
																func_97(&Var207);
															}
														}
													}
												}
												func_33(6, 0);
											}
											Var262 = { func_863(1) };
											if (func_227(&Var262))
											{
												if (func_691(&Var262))
												{
													if (func_458() == 3.15697E-28f)
													{
														func_70(func_864(&Var262), 27.64779f);
													}
													func_865(&(Global_1940239.f_1556.f_149.f_548.f_4), Var262);
													func_866(&(Global_1940239.f_1556.f_149.f_548.f_4), Var262);
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

void func_288()
{
	func_855(16);
}

void func_289()
{
	struct<55> Var0;
	struct<2> Var55;

	Var0.f_33 = 7;
	Var0.f_51 = -1;
	Var0 = { func_196(1) };
	if (!func_197(&Var0) && !func_867(&Var0))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(1.608566E+13f, 1.1535E-05f);
	}
	if (func_342())
	{
		func_55(1);
		func_868();
		func_182();
	}
	if (func_201(&Var0) && func_197(&Var0))
	{
		func_869(&Var0);
	}
	if (!func_856(19))
	{
		Var55 = 114928;
		switch (func_51())
		{
			case 0:
				if (func_328())
				{
					func_871(&Var0);
				}
				Var55 = 114928;
				break;
			case 1:
				func_872(&(Global_1940239.f_1556.f_149.f_117.f_3), 0);
				Var55 = 115441;
				break;
		}
		Var55.f_1 = func_862(19);
		func_874(&Var55);
	}
}

void func_290()
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	bool bVar7;
	char* sVar8;
	float fVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<52> Var13;

	func_875();
	switch (func_876())
	{
		case 0:
			if (func_40(2))
			{
				return;
			}
			iVar0 = func_877();
			bVar1 = false;
			if ((GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10)) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
			{
				bVar1 = true;
			}
			else if (func_878(Global_1295619.f_149[Global_1295619], 0))
			{
				vVar2 = { func_566(Global_1295619) };
				if (func_189(&iVar5, &iVar6))
				{
					if (vVar2.y != iVar5 || vVar2.x != func_563(iVar6))
					{
						bVar1 = true;
					}
				}
			}
			else if (func_188())
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				iVar0 = (iVar0 + func_879());
			}
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_10, true);
				if (iVar0 <= 0)
				{
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_7))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_13.f_50.f_7, "SHOP_FREE");
					}
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_8, true);
					}
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_9, false);
					}
				}
				else
				{
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_6))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_6, iVar0);
					}
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_9))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_9, true);
					}
					if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_8))
					{
						DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_8, false);
					}
				}
			}
			bVar7 = false;
			if (func_880() >= iVar0)
			{
				bVar7 = true;
			}
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_11))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_11, bVar7);
			}
			fVar9 = 27.64779f;
			bVar10 = func_881(func_98(), iVar0);
			bVar11 = true;
			if (func_98())
			{
				if (func_99())
				{
					if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
					{
						sVar8 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
						bVar11 = false;
					}
					else if (!NETWORK::_UGC_HAS_PRIVILEGE())
					{
						sVar8 = "NM_GC_UGC_RESTRICT";
						bVar11 = false;
					}
					else
					{
						sVar8 = "NM_GC_FOOTER_NAME_CHANGE";
						bVar11 = true;
					}
				}
				else
				{
					fVar9 = 4.465091E-08f;
					sVar8 = "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN";
					bVar11 = false;
				}
			}
			else
			{
				sVar8 = "NM_GC_FOOTER_NAME_CHANGE_TEMP";
				bVar11 = false;
			}
			bVar12 = true;
			if (!func_882(1, 0))
			{
				bVar12 = false;
				if (bVar1)
				{
					bVar10 = false;
				}
			}
			switch (func_458())
			{
				case -620534422:
					sVar8 = func_883(&fVar9);
					func_70(MISC::VAR_STRING(2, sVar8), fVar9);
					break;
				case 1930452436:
					func_70(MISC::VAR_STRING(2, sVar8), fVar9);
					break;
			}
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_3))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_3, bVar11);
			}
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_5))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_5, bVar12);
			}
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_10))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_1, bVar10);
			}
			break;
		case 3:
			func_33(2, 1);
			func_151(1.1535E-05f);
			break;
		case 2:
			func_33(2, 1);
			Var13.f_33 = 7;
			Var13.f_51 = -1;
			if (func_665(&Var13, 1))
			{
				func_150(&Var13);
				func_97(&Var13);
				func_142(17);
				func_151(8.528219E-25f);
			}
			else
			{
				func_151(1.1535E-05f);
			}
			break;
	}
}

void func_291()
{
	int iVar0;
	struct<55> Var1;
	int iVar56;
	int iVar57;

	if (func_884())
	{
		iVar0 = func_885();
		switch (func_886())
		{
			case 3:
				switch (iVar0)
				{
					case 2:
						func_375(17, 0);
						func_887(3);
						func_151(-6.824252E+17f);
						break;
					case 3:
						break;
				}
				break;
			case 5:
			case 6:
				switch (iVar0)
				{
					case 2:
						func_375(17, 0);
						func_887(3);
						func_151(-6.824252E+17f);
						break;
					case 3:
						break;
				}
				break;
			case 7:
				switch (iVar0)
				{
					case 2:
						func_181(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 4:
				switch (iVar0)
				{
					case 2:
						func_181(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	if (!func_856(17))
	{
		func_855(17);
	}
	Var1 = { func_196(1) };
	if (!func_227(&Var1))
	{
		return;
	}
	func_865(&(Global_1940239.f_1556.f_149.f_126.f_7), Var1);
	func_866(&(Global_1940239.f_1556.f_149.f_126.f_7), Var1);
	if (!func_328() || func_856(17))
	{
		return;
	}
	iVar56 = func_888();
	iVar57 = func_51();
	if ((iVar57 == iVar56 && iVar57 > -1) && iVar57 < func_889())
	{
		if (!MISC::ARE_STRINGS_EQUAL(func_890(&Var1), DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1940239.f_1556.f_149.f_126.f_4.f_1)))
		{
			func_891(&(Global_1940239.f_1556.f_149.f_126.f_4), func_890(&Var1), Global_1940239.f_1556.f_9756.f_4 > 1, 1);
		}
	}
	func_892(&Var1);
}

void func_292()
{
	func_330(23);
}

void func_293()
{
	func_330(22);
}

void func_294()
{
	int iVar0;
	struct<55> Var1;

	func_893();
	if (func_856(18))
	{
		return;
	}
	if (func_884())
	{
		iVar0 = func_885();
		switch (func_886())
		{
			case 4:
				switch (iVar0)
				{
					case 2:
						func_181(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 8:
				switch (iVar0)
				{
					case 2:
						func_181(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	func_894();
	Var1 = { func_196(1) };
	if (!func_227(&Var1))
	{
		func_181(0, 0);
		return;
	}
	if (func_895())
	{
		func_896();
		return;
	}
	if (!func_328())
	{
		return;
	}
	func_897(&Var1);
}

void func_295()
{
	func_330(6);
}

void func_296()
{
	vector3 vVar0;

	if (func_49() == -1 || func_49() == 54)
	{
		func_898(15);
		vVar0.x = 121864;
		vVar0.f_1 = func_862(54);
		vVar0.f_2 = 15;
		func_874(&vVar0);
	}
}

void func_297()
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	bool bVar4;
	struct<55> Var5;
	bool bVar60;
	var uVar61;
	bool bVar62;
	bool bVar63;
	bool bVar64;
	char cVar65[128];
	int iVar81;
	int iVar82;
	bool bVar83;
	bool bVar84;
	bool bVar85;
	bool bVar86;
	bool bVar87;

	Var0 = { func_207() };
	if (!func_34(Var0))
	{
		return;
	}
	func_841(Var0, func_220());
	iVar2 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var0);
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		iVar3 = GANG::NETWORK_GET_GANG_ID(iVar2);
	}
	bVar4 = false;
	if (func_458() == -0.1173784f)
	{
		if (GANG::NETWORK_IS_GANG_ID_VALID(iVar3) && GANG::NETWORK_IS_GANG_ACTIVE(iVar3))
		{
			Var5.f_33 = 7;
			Var5.f_51 = -1;
			if (func_225(iVar3, &Var5, 1))
			{
				func_865(&(Global_1940239.f_1556.f_149.f_548.f_4), Var5);
				if (func_866(&(Global_1940239.f_1556.f_149.f_548.f_4), Var5))
				{
					bVar4 = true;
				}
			}
		}
	}
	func_900(&(Global_1940239.f_1556.f_149.f_548.f_4), bVar4);
	if (func_901() == 0)
	{
		if (Global_1940239.f_1556.f_9450)
		{
			func_903(func_902(&(Global_1940239.f_1556.f_9453), &(Global_1940239.f_1556.f_8), &(Global_1940239.f_1556.f_8.f_2)));
			func_904(NETWORK::GET_CLOUD_TIME_AS_INT());
			func_905(1);
			func_55(1);
		}
	}
	if (func_901() == 1)
	{
		if (Global_1901671.f_783 != 0)
		{
			if (MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_906())) >= Global_1901671.f_783)
			{
				func_905(2);
			}
		}
	}
	if (func_901() == 2)
	{
		if (func_907(Var0))
		{
			func_905(0);
		}
		else
		{
			func_904(NETWORK::GET_CLOUD_TIME_AS_INT());
			func_905(1);
		}
	}
	bVar60 = func_908() == true;
	if (!func_328())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		func_614(&uVar61, 1);
	}
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &Var0))
	{
		func_614(&uVar61, 16);
	}
	if (((func_909() || func_910()) || func_912(func_911(0)) == 6) || func_613(Global_1149157.f_137.f_1, 2))
	{
		func_614(&uVar61, 64);
	}
	if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		if (GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
		{
			func_614(&uVar61, 2);
			if (GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10) == PLAYER::PLAYER_ID())
			{
				func_614(&uVar61, 4);
			}
			if (func_613(uVar61, 1))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar2))
				{
					func_614(&uVar61, 32);
				}
			}
		}
	}
	if (!func_613(uVar61, 32))
	{
		if ((Global_1203937.f_472 != -1 && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19), &(Global_1295619.f_1))) && func_913(&Var0))
		{
			func_614(&uVar61, 32);
		}
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&Var0))
	{
		func_614(&uVar61, 8);
	}
	if (((!func_613(uVar61, 16) && func_613(uVar61, 32)) && func_613(uVar61, 4)) && !func_613(uVar61, 64))
	{
		func_614(&uVar61, 128);
	}
	if ((!func_613(uVar61, 16) && func_613(uVar61, 32)) && func_613(uVar61, 4))
	{
		func_614(&uVar61, 512);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_8.f_2, ((func_613(uVar61, 4) && !func_613(uVar61, 16)) && func_613(uVar61, 32)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_8.f_1, (((func_613(uVar61, 4) && !func_613(uVar61, 16)) && func_613(uVar61, 32)) && !((func_613(uVar61, 64) || func_914()) || func_915())));
	bVar62 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(7);
	bVar63 = NETWORK::NETWORK_IS_FRIEND(&Var0);
	bVar64 = true;
	if (bVar63 && bVar62)
	{
		bVar64 = NETWORK::_NETWORK_IS_FRIEND_HANDLE_ONLINE(&Var0);
	}
	else if (bVar63)
	{
		bVar64 = NETWORK::_NETWORK_IS_FRIEND_HANDLE_IN_SAME_TITLE(&Var0);
	}
	StringCopy(&cVar65, "", 128);
	iVar81 = func_916(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_11.f_1, (iVar81 == 5 && bVar64));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_11.f_2, ((!func_613(uVar61, 16) && !func_613(uVar61, 32)) && func_613(uVar61, 4)));
	if (func_458() == 4.783544E-23f)
	{
		func_917(iVar81, &cVar65);
		func_70(&cVar65, 27.64779f);
	}
	iVar82 = func_918(&Var0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_14.f_2, !func_613(uVar61, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_14.f_1, (iVar82 == 0 && bVar64));
	if (func_458() == -922.9301f)
	{
		StringCopy(&cVar65, func_488(), 128);
		func_70(&cVar65, 27.64779f);
	}
	bVar83 = func_247();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_17.f_2, !func_613(uVar61, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_17.f_1, (((!func_613(uVar61, 8) && bVar60) && bVar83) && !func_919()));
	if (func_458() == -5.556825E+28f)
	{
		StringCopy(&cVar65, func_489(), 128);
		func_70(&cVar65, 27.64779f);
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_4168.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_20.f_1, func_613(uVar61, 1));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_20.f_1, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_23.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_23.f_1, func_613(uVar61, 1));
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar3) && GANG::NETWORK_IS_GANG_ACTIVE(iVar3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_26.f_1, (func_613(uVar61, 1) && !func_613(uVar61, 64)));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_26.f_1, false);
	}
	if (func_920())
	{
		NETWORK::NETWORK_REFRESH_CURRENT_FRIEND_PAGE();
	}
	bVar84 = false;
	if (MISC::IS_STADIA_VERSION())
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var0) && !func_613(uVar61, 16))
		{
			bVar84 = true;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_44.f_2, bVar84);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_44.f_1, true);
	bVar85 = false;
	if (!NETWORK::NETWORK_IS_FRIEND(&Var0) && !func_613(uVar61, 16))
	{
		bVar85 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_29.f_2, bVar85);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_29.f_1, NETWORK::_NETWORK_CAN_ADD_FRIEND(&Var0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_32.f_2, !func_613(uVar61, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_32.f_1, func_921(iVar2));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_38.f_2, !func_613(uVar61, 16));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_38.f_1, true);
	if (MISC::IS_DURANGO_VERSION())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_35.f_2, !func_613(uVar61, 16));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_35.f_1, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_35.f_2, false);
	}
	bVar86 = NETWORK::NETWORK_IS_FEATURE_SUPPORTED(0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_41.f_2, bVar86);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_41.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_47.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_47.f_1, false);
	bVar87 = VOICE::_0x356135B9B10A2A82(&Var0);
	if (bVar87)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1118.f_47.f_3, MISC::VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PRIVATE"));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1118.f_47.f_3, MISC::VAR_STRING(2, "IB_VOICE_CHAT_CHANNEL_PUBLIC"));
	}
	if ((func_613(uVar61, 1) && func_613(uVar61, 8)) && !func_613(uVar61, 16))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_52, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_53, true);
		if (VOICE::_0x0DED260A1958A82E(iVar2))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1118.f_51, 0.0008744103f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1118.f_51, 3.629384E-09f);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_52, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_53, false);
	}
}

void func_298()
{
	int iVar0;

	if (Global_1940239.f_1556.f_6258.f_4)
	{
		iVar0 = Global_1940239.f_1556.f_6258;
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1940239.f_1556.f_6258.f_5)
			{
				func_922(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar0 /*7*/]));
			}
			else
			{
				func_923(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar0 /*7*/]));
			}
			Global_1940239.f_1556.f_6258.f_4 = 0;
		}
	}
}

void func_299()
{
	switch (Global_1940239.f_1556.f_1082.f_4)
	{
		case 0:
			if (func_924())
			{
				switch (func_925())
				{
					case 2074623703:
						if (!func_926(&(Global_1940239.f_1556.f_1082.f_1), Global_1940239.f_1556.f_1082))
						{
						}
						Global_1940239.f_1556.f_1082.f_3 = Global_1940239.f_1556.f_9449;
						Global_1940239.f_1556.f_1082.f_4 = 1;
						break;
					case 1400745903:
						func_15();
						break;
				}
			}
			break;
		case 1:
			if (UISTICKYFEED::_UI_STICKY_FEED_GET_MESSAGE_STATE(Global_1940239.f_1556.f_1082.f_3) == 5)
			{
				return;
			}
			Global_1940239.f_1556.f_1082.f_4 = 2;
			break;
		case 2:
			Global_1940239.f_1556.f_1082.f_3 = 0;
			func_927();
			Global_1940239.f_1556.f_1082.f_4 = 3;
			break;
		case 3:
			if (func_924())
			{
				switch (func_925())
				{
					case 2074623703:
						UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1940239.f_1556.f_1082.f_3);
						Global_1940239.f_1556.f_1082.f_3 = 0;
						func_15();
						Global_1940239.f_1556.f_1082.f_4 = 0;
						func_147();
						break;
				}
			}
			break;
	}
}

void func_300()
{
	int iVar0;
	int iVar1;

	if (func_671() || func_844())
	{
		func_928(0);
	}
	else
	{
		iVar0 = PLAYER::GET_PLAYER_INDEX();
		iVar1 = GANG::NETWORK_GET_GANG_ID(iVar0);
		if ((iVar1 != 0 && GANG::NETWORK_IS_GANG_ACTIVE(iVar1)) && !GANG::NETWORK_IS_GANG_LEADER(iVar0))
		{
			func_928(0);
		}
		else
		{
			func_928(1);
		}
	}
}

void func_301()
{
}

void func_302()
{
	bool bVar0;
	bool bVar1;

	func_100();
	func_101();
	bVar0 = func_136();
	if (bVar0)
	{
		func_138(1);
	}
	else
	{
		func_138(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_22, bVar0);
	bVar1 = func_929();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_580, bVar1);
	if (func_458() == -1.430909E+24f)
	{
		if (func_909())
		{
			func_70(MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), 27.64779f);
		}
		else
		{
			func_70(func_930(bVar1), 27.64779f);
		}
	}
}

void func_303()
{
	func_931();
	func_103();
	func_932();
}

void func_304()
{
	bool bVar0;

	bVar0 = func_136();
	if (bVar0)
	{
		func_138(2);
	}
	else
	{
		func_138(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_21, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_433.f_22, bVar0);
}

void func_305()
{
	func_931();
	func_105(3);
	func_932();
}

void func_306()
{
	func_931();
	func_105(0);
	func_932();
}

void func_307()
{
	func_931();
	func_105(1);
	func_932();
}

void func_308()
{
	func_931();
	func_105(2);
	func_932();
}

void func_309()
{
	bool bVar0;
	bool bVar1;

	func_102();
	bVar0 = func_139();
	if (bVar0)
	{
		func_141(1);
	}
	else
	{
		func_141(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_22, bVar0);
	bVar1 = func_933();
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_448, bVar1);
	if (func_458() == 3.891473E-21f)
	{
		if (func_909())
		{
			func_70(MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), 27.64779f);
		}
		else
		{
			func_70(func_934(bVar1), 27.64779f);
		}
	}
}

void func_310()
{
	func_935();
	func_106();
	func_936();
}

void func_311()
{
	bool bVar0;

	bVar0 = func_139();
	if (bVar0)
	{
		func_141(2);
	}
	else
	{
		func_141(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_18, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_355.f_22, bVar0);
}

void func_312()
{
	func_935();
	func_108(3);
	func_936();
}

void func_313()
{
	func_935();
	func_108(0);
	func_936();
}

void func_314()
{
	func_935();
	func_108(1);
	func_936();
}

void func_315()
{
	func_935();
	func_108(2);
	func_936();
}

void func_316()
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;

	bVar0 = false;
	bVar1 = false;
	iVar2 = PLAYER::PLAYER_ID();
	bVar3 = (func_247() && func_878(iVar2, 0));
	bVar4 = GANG::NETWORK_IS_GANG_LEADER(iVar2);
	bVar0 = (bVar3 && bVar4);
	bVar1 = bVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_2, (((bVar4 && !func_613(Global_1147168.f_8, 1)) && (Global_1142409.f_2019 < 6 || Global_1142409.f_2019 > 12)) && !func_937()));
	if (func_247())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_3, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_3, false);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_5, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_4, bVar1);
	bVar5 = ((bVar3 && bVar4) && UNLOCK::UNLOCK_IS_UNLOCKED(-1.683311E+31f));
	iVar6 = func_938(GANG::NETWORK_GET_GANG_ID(iVar2));
	if (func_939(4) && func_78(iVar6))
	{
		func_454(4);
	}
	if (func_939(8) && !func_78(iVar6))
	{
		func_454(8);
	}
	if ((func_78(iVar6) && !func_939(8)) || func_939(4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_2385.f_6.f_25, 0);
		if (!func_79(iVar6) || func_939(8))
		{
			bVar5 = false;
		}
	}
	else if ((!func_78(iVar6) && !func_939(4)) || func_939(8))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_2385.f_6.f_25, 1);
		if (!func_81(iVar6) || func_939(4))
		{
			bVar5 = false;
		}
	}
	if (func_458() == 6.868954E-06f)
	{
		func_70(func_494(), 27.64779f);
	}
	if (func_458() == 5.04717E+36f)
	{
		func_70(func_940(), 27.64779f);
	}
	func_941(&(Global_1940239.f_1556.f_2385.f_6), bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_1, func_878(Global_1295619.f_149[Global_1295619], 0));
}

void func_317()
{
	struct<2> Var0;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;

	if (func_342())
	{
		func_942();
		func_55(1);
	}
	if (!func_328())
	{
		return;
	}
	Var0.f_1 = 13;
	iVar15 = func_112();
	iVar17 = 0;
	iVar19 = func_943();
	switch (iVar19)
	{
		case 0:
			if (!func_944(&Var0))
			{
				func_942();
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = Var0.f_1[iVar18];
				if (iVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43))
				{
					func_945(iVar17, iVar16);
				}
				func_947(iVar17, iVar16, iVar15, func_169(iVar15, iVar16), func_946(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
		case 1:
			if (!func_948(&Var0))
			{
				if (iVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43))
				{
					func_942();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = Var0.f_1[iVar18];
				if (iVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43))
				{
					func_945(iVar17, iVar16);
				}
				func_947(iVar17, iVar16, iVar15, func_169(iVar15, iVar16), func_946(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar19)
			{
				case 2:
					iVar20 = 0;
					break;
				case 3:
					iVar20 = 1;
					break;
				case 6:
					iVar20 = 4;
					break;
				case 5:
					iVar20 = 3;
					break;
				case 4:
					iVar20 = 2;
					break;
			}
			if (!func_949(iVar20, Global_1295619.f_12, &Var0))
			{
				if (iVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43))
				{
					func_942();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = Var0.f_1[iVar18];
				if (iVar17 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43))
				{
					func_945(iVar17, iVar16);
				}
				func_947(iVar17, iVar16, iVar15, func_169(iVar15, iVar16), func_946(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
	}
	iVar21 = iVar17;
	while (iVar21 <= (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_2385.f_43) - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1940239.f_1556.f_2385.f_43, iVar21);
		iVar21++;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_45, func_880() >= DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_2385.f_44));
}

void func_318()
{
	if (!func_328())
	{
		return;
	}
	func_950(Global_1144511[PLAYER::PLAYER_ID() /*83*/].f_38.f_1);
}

void func_319()
{
	bool bVar0;

	bVar0 = false;
	if (func_170())
	{
		bVar0 = func_98();
	}
	else
	{
		bVar0 = func_420(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_37, func_951(-6.178593E-30f, bVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_38, func_951(1.214845E+35f, bVar0));
}

void func_320()
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<27> Var3;
	struct<27> Var30;
	float fVar57;

	Var3 = -1;
	Var3.f_1 = 1;
	Var3.f_1.f_1 = 1;
	Var3.f_1.f_2 = 27.64779f;
	Var3.f_1.f_4 = -1;
	Var3.f_1.f_5 = -1;
	Var3.f_1.f_6 = -1;
	Var3.f_1.f_10 = -1;
	Var3.f_1.f_11 = -1;
	Var3.f_1.f_12 = -1;
	Var3.f_1.f_18 = 27.64779f;
	Var3.f_1.f_19 = 27.64779f;
	Var3.f_1.f_24 = 100;
	Var3.f_1.f_25 = 50;
	Var30 = -1;
	Var30.f_1 = 1;
	Var30.f_1.f_1 = 1;
	Var30.f_1.f_2 = 27.64779f;
	Var30.f_1.f_4 = -1;
	Var30.f_1.f_5 = -1;
	Var30.f_1.f_6 = -1;
	Var30.f_1.f_10 = -1;
	Var30.f_1.f_11 = -1;
	Var30.f_1.f_12 = -1;
	Var30.f_1.f_18 = 27.64779f;
	Var30.f_1.f_19 = 27.64779f;
	Var30.f_1.f_24 = 100;
	Var30.f_1.f_25 = 50;
	Var3 = { Var30 };
	if (Global_1940239.f_1556.f_3171.f_4[iVar0 /*31*/] == Global_1940239.f_1556.f_3171.f_3)
	{
	}
	if (iVar1 >= Global_1940239.f_1556.f_3171.f_2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_3171.f_1, iVar0, "pm_dynamic_large_image_and_stacked_text_with_fill", Global_1940239.f_1556.f_3171.f_4[iVar0 /*31*/]);
	}
	Var3.f_1.f_25 = BUILTIN::FLOOR((IntToFloat(Var3.f_1.f_24) * fVar57));
	Var3.f_1.f_18 = 4.465091E-08f;
	Var3.f_1.f_5 = -4.692398E-06f;
	Var3.f_1.f_4 = 1.608566E+13f;
	Var3.f_1.f_20 = 3.347692E+13f;
	Var3.f_1.f_21 = -0.1987056f;
	func_952(&(Global_1940239.f_1556.f_3171.f_4[iVar0 /*31*/]), Var3);
	iVar1++;
	iVar2 = iVar1;
	while (iVar2 <= (Global_1940239.f_1556.f_3171.f_2 - 1))
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1940239.f_1556.f_3171.f_1, iVar2);
		iVar2++;
	}
	Global_1940239.f_1556.f_3171.f_2 = iVar1;
}

void func_321()
{
	int iVar0;
	bool bVar1;
	int iVar2;

	func_953();
	func_954();
	bVar1 = false;
	if (Global_1108965.f_775.f_27 != -1 && (Global_1295619.f_16 - Global_1108965.f_775.f_5[Global_1108965.f_775.f_27]) < 180)
	{
		func_70(func_517(Global_1108965.f_775.f_27), 27.64779f);
		Global_1108965.f_775.f_18 = 1;
		Global_1108965.f_775.f_29 = Global_1108965.f_775.f_27;
	}
	else if ((Global_1108965.f_775.f_18 && Global_1108965.f_775.f_29 == Global_1108965.f_775.f_27) && Global_1108965.f_775.f_29 != -1)
	{
		func_70(func_517(Global_1108965.f_775.f_27), 27.64779f);
		Global_1108965.f_775.f_18 = 0;
	}
	else
	{
		Global_1108965.f_775.f_29 = -1;
		Global_1108965.f_775.f_18 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		bVar1 = func_955(iVar2);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_149.f_280.f_2[iVar0 /*22*/].f_1, bVar1);
		iVar0++;
	}
}

void func_322()
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;
	struct<2> Var18;
	int iVar21;
	int iVar22;
	var uVar23;
	vector3 vVar25;
	vector3 vVar28;
	int iVar31[2];
	int iVar34;

	if (!func_955(4))
	{
		func_151(1.1535E-05f);
	}
	func_954();
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		return;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_368.f_1))
	{
		return;
	}
	if (func_328())
	{
		iVar15 = GANG::_NETWORK_GET_GANG_MEMBERS(Global_1295619.f_10, &Var0);
		iVar21 = 0;
		iVar21 = 0;
		while (iVar21 < 7)
		{
			if (!func_956(iVar21, &Var18))
			{
			}
			else if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, Var18.f_1))
			{
				func_957(iVar21);
			}
			iVar21++;
		}
		iVar16 = 0;
		while (iVar16 < iVar15)
		{
			if (!func_34(Var0[iVar16 /*2*/]))
			{
			}
			else
			{
				iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar16 /*2*/]));
				if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar17))
				{
				}
				else if (!func_958(iVar17))
				{
					iVar22 = func_959();
					if (!func_960(iVar17, iVar22))
					{
					}
				}
			}
			iVar16++;
		}
		func_868();
		iVar21 = 0;
		while (iVar21 < 7)
		{
			if (!func_956(iVar21, &Var18))
			{
			}
			else
			{
				NETWORK::NETWORK_HANDLE_FROM_PLAYER(Var18.f_1, &uVar23);
				if (!func_961(&uVar23, PLAYER::GET_PLAYER_NAME(Var18.f_1), 0, 4))
				{
				}
			}
			iVar21++;
		}
	}
	vVar25.x = 131158;
	vVar25.f_2 = 4;
	vVar25.f_1 = func_862(21);
	func_874(&vVar25);
	if (func_328())
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_1, true);
		}
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201))
		{
			func_963(func_84(), &vVar28);
			iVar34 = 0;
			while (iVar34 < 2)
			{
				iVar31[iVar34] = func_964(iVar34);
				iVar34++;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201, iVar31[vVar28.z] > 1);
		}
	}
}

void func_323()
{
	switch (func_458())
	{
		case -1594107850:
			HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-1.766261E-24f);
			break;
	}
	func_965();
	func_966();
	func_967();
	func_968();
	func_969();
	func_970();
	func_971();
	func_972();
}

void func_324()
{
	int iVar0;

	iVar0 = func_145();
	if (func_973(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_7, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_7, false);
	}
	if (func_974(iVar0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_9, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_9, false);
	}
	func_975();
}

void func_325()
{
	func_975();
}

void func_326()
{
	bool bVar0;

	bVar0 = (func_148(8192) && !func_148(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_10, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_11, true);
	func_845(1, func_468() == 0);
	func_845(0, func_466() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_80, func_976());
	func_977();
	func_975();
}

void func_327(bool bParam0)
{
	if (!bParam0)
	{
		if (func_342())
		{
			func_55(1);
		}
		if (!func_328())
		{
			return;
		}
	}
	func_978();
	func_575(0);
	func_979();
}

bool func_328()
{
	return func_980(1);
}

void func_329()
{
	func_981(-8.2929E+32f, 1);
	func_981(-5.248423E-17f, func_477() == 0);
}

void func_330(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	struct<2> Var12[32];
	struct<24> Var77;
	int iVar157;

	iVar3 = func_186();
	iVar4 = func_982();
	switch (iParam0)
	{
		case 6:
		case default:
			iVar5 = 0;
			iVar6 = 1;
			iVar7 = 2;
			iVar8 = 3;
			vVar0.x = 132977;
			break;
		case 22:
			iVar6 = 12;
			iVar7 = 13;
			iVar8 = 14;
			vVar0.x = 133289;
			break;
		case 23:
			iVar5 = 7;
			iVar6 = 8;
			iVar7 = 9;
			iVar8 = 10;
			vVar0.x = 133535;
			break;
		case 58:
			iVar5 = 11;
			vVar0.x = 133869;
			break;
	}
	if (func_342())
	{
		func_55(1);
		if (iVar4 == 2 && iVar3 != 2)
		{
			func_987();
		}
		switch (iVar3)
		{
			case 0:
				func_988();
				break;
			case 1:
			case 3:
				func_988();
				func_868();
				func_182();
				break;
		}
		if (func_40(4))
		{
			func_33(4, 0);
		}
		else
		{
			func_989(0);
			func_362(0);
		}
	}
	func_990(iVar7, iVar3 == 2);
	if (func_49() == -1 || func_49() == iParam0)
	{
		switch (iVar3)
		{
			case 0:
				if (func_328())
				{
					func_991(iVar5);
				}
				break;
			case 1:
				func_992(iVar6);
				break;
			case 3:
				if (func_328())
				{
					func_993(iVar8);
				}
				break;
		}
		iVar11 = func_994();
		Var77.f_22 = -1;
		Var77.f_23 = -1;
		iVar157 = func_680();
		if (func_681(iVar157) && func_682(iVar157))
		{
			if (!MINIGAME::_0xBEA7D3CB47E1479C())
			{
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					if (!func_995(iVar9, &Var77))
					{
					}
					else if (iVar10 < 32)
					{
						Var12[iVar10 /*2*/] = { Var77.f_1 };
						iVar10++;
					}
					iVar9++;
				}
				func_996(iVar157, &Var12, iVar10);
			}
		}
		vVar0.f_1 = func_862(iParam0);
		switch (iVar3)
		{
			case 0:
				vVar0.f_2 = iVar5;
				break;
			case 1:
				vVar0.f_2 = iVar6;
				break;
			case 3:
				vVar0.f_2 = iVar8;
				break;
			case 2:
				vVar0.f_2 = iVar7;
				break;
		}
		func_874(&vVar0);
	}
}

void func_331()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_94, func_479() == 0);
}

void func_332()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_8925.f_8, MISC::VAR_STRING(2, "TELEGRAM_MENU_SUBH"));
	func_997();
	func_70(MISC::VAR_STRING(2, "TELEGRAM_PLAYLIST_FOOTER"), 27.64779f);
}

void func_333()
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_998())
	{
		if (func_999() == 0 || MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - func_1000())) > func_999())
		{
			func_130();
		}
	}
	bVar0 = false;
	iVar1 = Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/];
	if (iVar1 == -1)
	{
		bVar0 = true;
	}
	else
	{
		iVar2 = func_355(UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.608566E+13f));
		bVar0 = iVar2 == iVar1;
	}
	if (Global_1940239.f_1556.f_9756.f_241)
	{
		Global_1940239.f_1556.f_9756.f_241 = 0;
	}
	if (Global_1940239.f_1556.f_9756.f_240 && !Global_1940239.f_1556.f_9756.f_239)
	{
		func_373(0);
		func_1001("", 0);
	}
	Global_1940239.f_1556.f_9756.f_240 = 0;
	if (Global_1940239.f_1556.f_9756.f_236)
	{
		Global_1940239.f_1556.f_9756.f_236 = 0;
	}
	if (Global_1940239.f_1556.f_9756.f_4 <= 1)
	{
		return;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_998())
	{
		return;
	}
	if (!func_1002())
	{
		iVar3 = 0;
		if (PAD::IS_CONTROL_JUST_PRESSED(2, 1.095094E-28f))
		{
			func_1003("Bumper_Right", "HUD_PLAYER_MENU", 1);
			iVar3++;
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2, -2.800969E+07f))
		{
			func_1003("Bumper_Left", "HUD_PLAYER_MENU", 1);
			iVar3 = (iVar3 - 1);
		}
		if (iVar3 == 0)
		{
			return;
		}
		Global_1940239.f_1556.f_9756.f_244 = (Global_1940239.f_1556.f_9756 + iVar3);
		if (Global_1940239.f_1556.f_9756.f_244 < 0)
		{
			Global_1940239.f_1556.f_9756.f_244 = (Global_1940239.f_1556.f_9756.f_4 - 1);
		}
		else if (Global_1940239.f_1556.f_9756.f_244 > (Global_1940239.f_1556.f_9756.f_4 - 1))
		{
			Global_1940239.f_1556.f_9756.f_244 = 0;
		}
		if (func_1004(Global_1940239.f_1556.f_9756.f_244))
		{
			func_693(7f, 0);
			func_400(1);
			return;
		}
	}
	else
	{
		switch (func_1005())
		{
			case 0:
				if (!func_1006())
				{
					func_1007();
				}
				break;
			case 2:
				Global_1940239.f_1556.f_9756.f_244 = 0;
				func_400(0);
				return;
		}
		if (func_1006())
		{
			func_400(0);
			func_21();
		}
		else
		{
			return;
		}
	}
	if (!func_1008(Global_1940239.f_1556.f_9756.f_244, 1))
	{
	}
}

bool func_334()
{
	return Global_1940239.f_1556.f_9756.f_238;
}

void func_335()
{
	switch (Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_2)
	{
		case -303450633:
			func_142(14);
			break;
		case 394524610:
			if (func_45() == 14)
			{
				func_149();
			}
			func_142(17);
			break;
	}
}

bool func_336()
{
	return Global_1940239.f_1556.f_9756.f_239;
}

void func_337()
{
	bool bVar0;

	bVar0 = false;
	switch (Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_2)
	{
		case -303450633:
			func_891(&(Global_1940239.f_1556.f_149.f_114), func_685(&(Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_3)), Global_1940239.f_1556.f_9756.f_4 > 1, Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_19);
			bVar0 = true;
			break;
		case 394524610:
			func_891(&(Global_1940239.f_1556.f_149.f_126.f_4), func_685(&(Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_3)), Global_1940239.f_1556.f_9756.f_4 > 1, Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_19);
			bVar0 = true;
			break;
	}
	if (!bVar0)
	{
		func_1001(func_685(&(Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_3)), Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_19);
	}
}

void func_338()
{
	int iVar0;

	if (func_1009() == 0)
	{
		Global_1896762.f_2932.f_1 = 0;
		if (!CREW::NETWORK_CLAN_SERVICE_IS_VALID())
		{
			return;
		}
		if (!CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&(Global_1295619.f_1)))
		{
			return;
		}
		if (!CREW::_0x58D378AF2C8765B7(&iVar0))
		{
			return;
		}
		Global_1896762.f_2932.f_1 = 1;
		if (func_1010() != iVar0)
		{
			func_1011(iVar0);
		}
		if (func_1012() == 0 || func_1012() != func_1010())
		{
			Global_1896762.f_2932.f_6 = 0;
			func_987();
			func_1013();
		}
		if (func_1014() < 5000)
		{
			return;
		}
		if (!Global_1896762.f_2932.f_4)
		{
			return;
		}
		NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
		func_1015(iVar0);
		func_1016(1);
	}
	if (func_1009() == 1)
	{
		if (NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			func_1016(2);
		}
		else if (CREW::NETWORK_FIND_GAMERS_IN_CREW(0))
		{
			func_1016(2);
		}
		else
		{
			func_1016(1);
		}
	}
	if (func_1009() == 2)
	{
		if (NETWORK::_0x0E54D4DA6018FF8E() && NETWORK::NETWORK_DID_FIND_GAMERS_SUCCEED())
		{
			func_1017();
			func_1018();
			Global_1896762.f_2932.f_6 = NETWORK::_0x7BCA0A3972708436(&(Global_1896762.f_2932.f_7), 322);
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			if (Global_1896762.f_2932.f_6 == 0)
			{
				func_1016(0);
			}
			if (Global_1896762.f_2932.f_6 >= 32)
			{
				Global_1896762.f_2932.f_6 = 31;
			}
			func_1016(0);
		}
		else if (!NETWORK::NETWORK_IS_FINDING_GAMERS())
		{
			func_1016(1);
		}
	}
}

void func_339()
{
	if (func_980(1))
	{
		func_399(1, 0);
	}
	if (func_980(0))
	{
		func_399(0, 0);
		func_399(1, 1);
		Global_1896762.f_198.f_2 = 0f;
	}
	if (Global_1896762.f_198.f_1 > 0f)
	{
		Global_1896762.f_198.f_2 = (Global_1896762.f_198.f_2 + MISC::GET_FRAME_TIME());
		if (Global_1896762.f_198.f_2 >= Global_1896762.f_198.f_1)
		{
			func_399(1, 1);
			Global_1896762.f_198.f_2 = 0f;
		}
	}
}

void func_340()
{
	bool bVar0;

	switch (func_1019())
	{
		case 0:
			if (func_884())
			{
				func_1020(1);
				func_1021(1);
			}
			break;
		case 1:
			switch (func_1005())
			{
				case 0:
					func_1021(3);
					break;
				case 2:
					func_1020(3);
					func_1021(2);
					break;
			}
			switch (func_886())
			{
				case 5:
				case 6:
					if (func_1022())
					{
						if (func_1023(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 7:
					if (func_1024())
					{
						if (func_1025(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 8:
					if (func_1026())
					{
						if (func_1027(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 3:
					if (func_1028())
					{
						if (func_1029(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 4:
					if (func_1030())
					{
						if (func_1031(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 2:
					if (func_1032())
					{
						if (func_1033(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
				case 1:
					if (func_1034())
					{
						if (func_1035(&bVar0, 1))
						{
							if (bVar0)
							{
								func_1020(2);
							}
							else
							{
								func_1020(3);
							}
							func_1021(2);
						}
					}
					break;
			}
			break;
		case 2:
			func_55(1);
			func_1020(0);
			func_1021(3);
			break;
		case 3:
			func_21();
			func_1036();
			func_1020(0);
			func_1021(0);
			break;
	}
}

void func_341()
{
	if (func_1037() == -1)
	{
		if (!func_40(0))
		{
			return;
		}
		func_1038(0);
	}
	if (func_1037() == 0)
	{
		func_1039(&(Global_1896762.f_6.f_2));
		func_1038(1);
	}
	if (func_1037() == 1)
	{
		func_195(Global_1896762.f_6.f_1);
		if (!func_40(0))
		{
			func_1038(3);
			return;
		}
		if (Global_1896762.f_6.f_5 != -1f)
		{
			if (!func_1040(&(Global_1896762.f_6.f_2)))
			{
				func_1041(&(Global_1896762.f_6.f_2), 0);
			}
			if (func_1042(&(Global_1896762.f_6.f_2)) >= Global_1896762.f_6.f_5)
			{
				func_1038(2);
				return;
			}
		}
	}
	if (func_1037() == 2)
	{
		func_1043(2);
		func_1038(3);
		return;
	}
	if (func_1037() == 3)
	{
		func_1038(-1);
		func_1039(&(Global_1896762.f_6.f_2));
		func_1044(0);
		func_1043(0);
		func_33(0, 0);
	}
}

bool func_342()
{
	return Global_1940239.f_1556.f_9756.f_236;
}

void func_343(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_344(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

struct<16> func_345(char* sParam0)
{
	char cVar0[128];

	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

int func_346(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	bool bVar5;

	if (func_1045())
	{
		return Global_1149417.f_4804.f_34[iParam0 /*3*/];
	}
	fVar0 = func_1046(iParam0);
	Var1 = { func_1047(bParam1) };
	bVar5 = func_1048(Var1, fVar0, 0, bParam1);
	if (!func_1049(bVar5))
	{
		return 0;
	}
	return func_1050(bVar5);
}

bool func_347(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_1051())
	{
		return false;
	}
	return func_1052(iParam0, uParam1, iParam2, iParam3);
}

void func_348(var uParam0)
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
	func_1053(&Var0);
	*uParam0 = { Var0 };
}

void func_349(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38)
{
	bool bVar0;

	bVar0 = func_1054(iParam0);
	if (func_1045())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
		func_1055(uParam1, &Param2);
		return;
	}
	func_1055(uParam1, &Param2);
	if (bVar0)
	{
		func_1056(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	else
	{
		func_1057(&(Global_1149417.f_4621.f_36[iParam0 /*3*/].f_2), 1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, (bVar0 && func_1058()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, ((bVar0 && func_1058()) && func_1059(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, (Param2.f_22 && func_1058()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, ((Param2.f_22 && func_1058()) && func_1059(3)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1061(func_1060(iParam0)));
}

bool func_350(int iParam0)
{
	return Global_1940239.f_1556.f_4168.f_2086 == iParam0;
}

void func_351(var uParam0, var uParam1, int iParam2)
{
	func_1062(iParam2, uParam1);
	func_1055(uParam0, uParam1);
}

bool func_352()
{
	return !Global_1572887.f_10;
}

void func_353(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_354(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

int func_355(int iParam0)
{
	switch (iParam0)
	{
		case -1909832090:
			return 0;
		case 1120962917:
			return 1;
		case -1302559475:
			return 2;
		case 643368064:
			return 3;
		case 1754472897:
			return 4;
		case 1251021415:
			return 5;
		case -1141649578:
			return 23;
		case -1229126440:
			return 13;
		case 1627801305:
			return 14;
		case 900261631:
			return 16;
		case 2090776647:
			return 15;
		case -910579444:
			return 17;
		case 296053535:
			return 20;
		case -712765443:
			return 21;
		case -248206465:
			return 18;
		case -1269761102:
			return 19;
		case -1151685191:
			return 12;
		case 267128262:
			return 22;
		case joaat("PM_PLAYERS"):
			return 6;
		case -293089814:
			return 52;
		case 1191195930:
			return 53;
		case -811408979:
			return 50;
		case 1425963091:
			return 51;
		case 907425130:
			return 54;
		case -1431045214:
			return 7;
		case -1748449654:
			return 8;
		case 1984619020:
			return 9;
		case -80027036:
			return 10;
		case joaat("PM_JOBS"):
			return 11;
		case -1731090972:
			return 39;
		case -152980413:
			return 40;
		case 1470615405:
			return 41;
		case -1026856039:
			return 42;
		case 1868152501:
			return 43;
		case -721351454:
			return 44;
		case joaat("P_FR_FUNHMEINT_G_05"):
			return 24;
		case -1937951650:
			return 25;
		case 1278626257:
			return 26;
		case -996050125:
			return 27;
		case -1974642358:
			return 28;
		case 883433183:
			return 29;
		case -956828274:
			return 30;
		case 1667751432:
			return 31;
		case -1968023217:
			return 32;
		case -614347122:
			return 33;
		case 1449064090:
			return 34;
		case 1842580097:
			return 46;
		case 1684686721:
			return 47;
		case -516709195:
			return 48;
		case 1292165726:
			return 49;
		case -976096880:
			return 55;
		case -1022521727:
			return 57;
		case 574218998:
			return 56;
		case 2053217867:
			return 58;
		case -822338381:
			return 59;
		case 141931955:
			return 60;
		case -1911647963:
			return 61;
		default:
			break;
	}
	return -1;
}

int func_356()
{
	return Global_1896762.f_365;
}

int func_357(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 42;
		case 3:
			return 55;
		case 4:
			return 58;
		case 5:
			return 1;
		case 6:
			return 12;
		case 8:
			return 46;
		case 9:
			return 52;
		case 10:
			return 50;
		case 11:
			return 51;
		case 12:
			return 1;
		case 13:
			return 22;
		default:
			break;
	}
	return 0;
}

void func_358()
{
	func_840();
}

void func_359()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_103, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_100, false);
}

void func_360()
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1174.f_42, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1174.f_43, 0);
}

void func_361()
{
	switch (Global_1940239.f_1556.f_756.f_1)
	{
		case 2:
			NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
			break;
		case 3:
			NETWORK::_0x49CF17A564918E8D();
			break;
	}
	func_1063(&(Global_1940239.f_1556.f_756), -1);
}

void func_362(bool bParam0)
{
	if (Global_1896762.f_201.f_7 == bParam0)
	{
		return;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201) || !DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_1))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_1, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_5, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_6, bParam0);
	Global_1896762.f_201.f_7 = bParam0;
}

void func_363()
{
	UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1940239.f_1556.f_149.f_184.f_2);
	Global_1940239.f_1556.f_149.f_184.f_2 = 0;
}

void func_364()
{
	Global_1940239.f_4 = 1;
}

void func_365()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1118.f_54, false);
}

void func_366()
{
	func_1064();
	func_1065();
	func_1066();
}

void func_367()
{
}

void func_368()
{
}

void func_369()
{
}

void func_370(int iParam0)
{
	char* sVar0;

	sVar0 = func_1067(iParam0);
	func_11(sVar0);
}

void func_371()
{
	func_841(Global_1295619.f_1, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_98, func_1068());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_79, func_847());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_80, func_846());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_86, func_848());
	func_845(0, func_466() == 0);
	func_845(10, func_473() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_83, STATS::_0x3AEABAE3F3C7600C());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_85, UNLOCK::UNLOCK_IS_UNLOCKED(2.948046E+37f));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_87, (((UNLOCK::UNLOCK_IS_UNLOCKED(8.755548E-30f) && !func_909()) && !func_910()) && func_1069()));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_89, ((((UNLOCK::UNLOCK_IS_UNLOCKED(0.01617465f) && !func_909()) && !func_910()) && !func_1070()) && !func_919()));
	func_845(8, func_471() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_87, func_1071());
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_94, func_1072());
	func_845(7, func_463() == 0);
	func_845(1, func_468() == 0);
	if ((Global_1572887.f_72.f_40 > 1 && Global_1572887.f_72.f_40 <= 15) && !func_671())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887.f_72.f_113, true);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_41, false);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1174.f_40, "MATCHMAKING_ACTIVE_LINK");
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1572887.f_72.f_113, false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_41, true);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1174.f_40, "MATCHMAKING_LINK");
	}
	Global_1940239.f_1556.f_9754 = func_1073();
	func_845(2, func_849());
	func_359();
}

void func_372()
{
}

void func_373(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_149.f_548.f_3, bParam0);
}

void func_374()
{
	func_841(func_207(), func_220());
	func_907(func_207());
	func_903(-1);
	func_905(0);
	func_362(0);
}

void func_375(int iParam0, bool bParam1)
{
	struct<55> Var0;
	bool bVar55;
	bool bVar56;
	int iVar57;
	int iVar58;
	int iVar59;

	func_56();
	Var0 = { func_196(1) };
	bVar55 = false;
	bVar56 = false;
	if (func_34(Var0.f_29) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0.f_29))))
	{
	}
	switch (iParam0)
	{
		case 16:
			func_56();
			break;
		case 14:
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
			{
				if (func_420(Global_1295619.f_10))
				{
					POSSE::_0xC08AFF658B2E51DA(&iVar57);
					if (iVar57 != 0)
					{
						bVar55 = true;
					}
				}
				else
				{
					bVar55 = true;
				}
			}
			bVar56 = true;
			break;
		case 17:
			func_1075(func_1074(&Var0));
			bVar55 = true;
			if (func_197(&Var0))
			{
				if (func_867(&Var0))
				{
					bVar56 = true;
				}
			}
			else if (func_1076(&Var0))
			{
				bVar56 = true;
			}
			break;
	}
	if (bVar55)
	{
		iVar58 = func_1077(func_890(&Var0), -1, 8.528219E-25f, 1, 1, 0, 1, 17);
		func_1078(iVar58);
	}
	if (bVar56)
	{
		iVar59 = func_1077(MISC::VAR_STRING(2, "POSSE_SUBH"), -1, -9.041249E+27f, 1, 1, 0, 1, 14);
	}
	switch (iParam0)
	{
		case 17:
			func_1008(iVar58, bParam1);
			break;
		case 14:
			func_1008(iVar59, bParam1);
			break;
	}
}

void func_376()
{
	struct<52> Var0;

	Var0.f_33 = 7;
	Var0.f_51 = -1;
	if (func_665(&Var0, 1))
	{
		func_150(&Var0);
	}
	func_33(6, 1);
	func_375(14, 1);
	func_387(1069547520 /* Float: 1.5f */, 1);
	func_900(&(Global_1940239.f_1556.f_149.f_548.f_4), 1);
}

void func_377()
{
	vector3 vVar0;

	if (!func_40(1))
	{
		func_1079();
		func_1080();
		if (func_878(Global_1295619.f_149[Global_1295619], 0))
		{
			vVar0 = { func_566(Global_1295619) };
			func_171(vVar0.y, func_1081(vVar0.x));
		}
		else
		{
			func_1080();
		}
		func_60(0, 1);
		func_1082(!Global_17418.f_55.f_14.f_5);
		func_1083(0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_72.f_25, 0);
		func_33(2, 0);
		func_33(1, 1);
	}
	HUD::_ENABLE_HUD_CONTEXT(-1.26424E-07f);
}

void func_378()
{
	struct<55> Var0;

	Var0.f_33 = 7;
	Var0.f_51 = -1;
	Var0 = { func_196(1) };
	if (Global_1940239.f_1556.f_1 != 7)
	{
	}
	func_387(3f, 1);
	func_56();
	func_1077("POSSE_MEMBERS_SUBH", -1, -1, 0, 0, 0, 0, -1);
	if (func_227(&Var0))
	{
		if (func_201(&Var0) && func_197(&Var0))
		{
			func_1077("POSSE_DEPUTIES_SUBH", -1, -1, 0, 0, 1, 0, -1);
		}
	}
	if (!func_1084(19, 7))
	{
	}
	func_1085(0);
	func_872(&(Global_1940239.f_1556.f_149.f_117.f_3), 1);
}

void func_379()
{
	func_387(1069547520 /* Float: 1.5f */, 1);
	func_900(&(Global_1940239.f_1556.f_149.f_126.f_7), 1);
}

void func_380()
{
	struct<55> Var0;

	func_387(1069547520 /* Float: 1.5f */, 1);
	func_587();
	Var0 = { func_196(1) };
	if (!func_227(&Var0))
	{
		return;
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_149.f_184.f_95))
	{
		if (func_201(&Var0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_184.f_95, "NM_MW_POSSE_TYPE_PERSISTENT");
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_184.f_95, "NM_MW_POSSE_TYPE_TEMPORARY");
		}
	}
	if (!func_1086(func_890(&Var0)))
	{
	}
}

void func_381(int iParam0)
{
	int iVar0;

	func_988();
	func_387(2f, 1);
	if (Global_1940239.f_1556.f_1 == 7)
	{
		func_33(4, 1);
	}
	func_56();
	switch (iParam0)
	{
		case 22:
			if (func_1087())
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					func_1077(func_1088(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
					iVar0++;
				}
			}
			else
			{
				func_1077(func_1088(1), 1, -1, 0, 0, 0, 0, -1);
				func_1077(func_1088(2), 2, -1, 0, 0, 0, 0, -1);
				func_1077(func_1088(3), 3, -1, 0, 0, 0, 0, -1);
			}
			if (!func_1084(6, 7))
			{
			}
			break;
		default:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_1077(func_1088(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
				iVar0++;
			}
			if (!func_1084(6, 7))
			{
			}
			break;
	}
	func_1089();
}

void func_382()
{
	func_988();
	func_387(2f, 1);
	func_56();
	func_1089();
	func_55(1);
}

void func_383()
{
	Global_1940239.f_1556.f_1082.f_4 = 0;
	UISTICKYFEED::_UI_STICKY_FEED_CLEAR_MESSAGE(Global_1940239.f_1556.f_1082.f_3);
	Global_1940239.f_1556.f_1082.f_3 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1118.f_55, "");
	func_15();
}

void func_384()
{
}

void func_385()
{
}

void func_386()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = func_1090(0, 1);
	func_113(iVar0, func_112());
	func_387(1f, 1);
	func_942();
	func_56();
	iVar2 = 7;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = iVar3;
		func_1077(func_1091(iVar1), iVar3, iVar3, 0, 0, 0, 0, -1);
		iVar3++;
	}
}

void func_387(int iParam0, bool bParam1)
{
	Global_1896762.f_198.f_2 = 0f;
	Global_1896762.f_198.f_1 = iParam0;
	if (bParam1)
	{
		func_399(0, 1);
	}
}

void func_388()
{
	func_387(2f, 1);
	func_1092();
	func_1093();
}

void func_389()
{
}

void func_390()
{
	int iVar0;
	int iVar1;

	iVar0 = func_145();
	iVar1 = func_1094(iVar0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_8618.f_5, MISC::VAR_STRING(2, "NET_MG_CONTEXT_PUBLIC", iVar1));
	func_1095(iVar0);
}

void func_391()
{
	int iVar0;

	iVar0 = func_145();
	func_1095(iVar0);
}

void func_392()
{
	int iVar0;
	bool bVar1;
	char cVar2[128];
	char cVar18[128];
	int iVar34;
	bool bVar35;

	iVar0 = func_145();
	bVar1 = func_148(2);
	StringCopy(&cVar2, MISC::VAR_STRING(2, func_1096(bVar1, "NET_MG_TITLE_PRIVATE", "NET_MG_TITLE_PUBLIC")), 128);
	StringCopy(&cVar18, func_1098(func_1097(iVar0)), 128);
	StringCopy(&cVar18, MISC::VAR_STRING(2, &cVar18), 128);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_8618.f_1, MISC::VAR_STRING(42, "NET_MG_TITLE_ASSEMBLY", &cVar2, &cVar18));
	func_1095(iVar0);
	iVar34 = func_1094(iVar0, 1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_8618.f_12, MISC::VAR_STRING(2, "MGPKR_UI_BUYIN", iVar34));
	bVar35 = (func_148(8192) && !func_148(16384));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_10, bVar35);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_11, true);
	func_845(0, func_466() == 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_80, func_976());
	func_845(1, func_468() == 0);
	func_977();
}

void func_393()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_325.f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_325.f_2, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_325.f_3, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_325.f_4, true);
}

void func_394()
{
}

void func_395()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_448, false);
}

void func_396()
{
	int iVar0;
	int iVar1;
	int iVar2;

	func_387(1f, 1);
	func_56();
	iVar1 = 3;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = iVar2;
		func_1077(func_1099(iVar0), iVar2, iVar2, 0, 0, 0, 0, -1);
		iVar2++;
	}
}

void func_397()
{
	func_988();
	func_387(2f, 1);
	func_56();
	func_1077(func_1088(0), 0, -1, 0, 0, 0, 0, -1);
}

void func_398()
{
	Global_1940239.f_1556.f_8925 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "cloud_drop_mission_data");
	Global_1940239.f_1556.f_8925.f_1 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(Global_1940239.f_1556.f_8925, "cloud_drop_mission_collection");
}

void func_399(int iParam0, bool bParam1)
{
	if (func_354(Global_1896762.f_198, iParam0) != bParam1)
	{
		if (bParam1)
		{
			func_343(&(Global_1896762.f_198), iParam0);
		}
		else
		{
			func_344(&(Global_1896762.f_198), iParam0);
		}
	}
}

void func_400(bool bParam0)
{
	Global_1940239.f_1556.f_9756.f_243 = bParam0;
	Global_1940239.f_1556.f_9756.f_242 = !bParam0;
}

bool func_401()
{
	if (func_1100())
	{
		return func_1101(12, 0);
	}
	return func_1101(5, 0);
}

void func_402(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(95));
	if (func_1102(iVar0))
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(iVar0, true);
	}
}

int func_403(int iParam0)
{
	int iVar0;
	float fVar1;
	bool bVar2;

	if (!func_1103(iParam0))
	{
		return -1;
	}
	bVar2 = func_1104(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		fVar1 = func_1046(iVar0);
		if (func_1105(bVar2, fVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_404(int iParam0)
{
	float fVar0;

	func_522(iParam0);
	if (func_1106(iParam0))
	{
		fVar0 = 5.389147E-28f;
	}
	else if (!func_1107(iParam0, 1))
	{
		fVar0 = func_1108(func_346(iParam0, 1));
	}
	else
	{
		fVar0 = 2.722286E+14f;
	}
	func_1109(fVar0, func_346(iParam0, 1));
	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-8.851064E-21f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -1.43595E-37f);
	}
}

void func_405(int iParam0)
{
	func_1110(*iParam0);
	if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-8.851064E-21f))
	{
		UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-8.851064E-21f, -3.730815E-09f);
	}
}

int func_406(int iParam0, var uParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { Global_1144511[iVar0 /*83*/].f_38.f_8 };
	return 1;
}

int func_407(int iParam0, bool bParam1)
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

Vector3 func_408(int iParam0)
{
	vector3 vVar0;

	func_1112(4.190828E-37f, func_1111(iParam0), 0, 0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &(Global_1297394.f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_409()
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;

	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (func_1113() - 1))
	{
		iVar1 = func_1114(iVar0);
		if (iVar1 == -1)
		{
		}
		else
		{
			fVar3 = func_1116(Global_34, func_1115(iVar1));
			if (iVar2 == -1)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
			else if (fVar3 < fVar4)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return 0f, 0f, 0f;
	}
	return func_1115(iVar2);
}

int func_410(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (func_1117())
	{
		Global_1940239.f_11589 = bParam0;
		func_1118(bParam0, 1, -5.149929E+33f, 0, 0);
		return 0;
	}
	if (!func_1119(bParam0, bParam4))
	{
		return 0;
	}
	if (func_1120(bParam0))
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
	if (func_1121(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	if (func_1122(bParam0, -1.384179E-36f))
	{
		func_1123(bParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_1122(bParam0, -2.126654E-30f))
	{
		func_1124(bParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_1122(bParam0, 7.57821E-18f))
	{
		func_1125(bParam0, Var10);
	}
	else if (func_1122(bParam0, 1.293259E-18f))
	{
		if (!func_1126(bParam0))
		{
			return 0;
		}
	}
	if (func_279(bParam0))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_1127(bParam0, bParam5, bParam6, bParam1))
	{
		Global_1913429 = bParam0;
		Global_1913620 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_1122(bParam0, -6.191407E-06f))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_1128(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_1122(bParam0, -1.001123E-14f) || func_1122(bParam0, -4.568457E+30f)) || func_1122(bParam0, 1.293259E-18f))
	{
	}
	else if (func_1122(bParam0, 4.644778E+30f))
	{
		if (((func_1129() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1)) || TASK::IS_PED_EXITING_SCENARIO(Global_33, true)) || !PED::IS_PED_ON_FOOT(Global_33))
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
		func_1128(Var10, 0);
		bVar28 = false;
	}
	else if (func_1130(bParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_1131(Global_1072759.f_28313.f_25.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1128(Var10, 0);
		iVar29 = 1;
	}
	else if (func_1132(bParam0) == -42.1084f)
	{
		if (!func_1133(bParam0))
		{
			func_670("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_1134(bParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_1135();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_1136(PLAYER::PLAYER_ID()))
			{
				func_670("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_670("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -947.1324f)
		{
			if (Global_1953279.f_1676 != bParam0)
			{
				func_1137(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_1138(bParam0, 0);
					return iVar29;
				case -2061583405:
					func_1139(bParam0);
					func_1137(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (bParam0 == Global_1953279.f_1676.f_1[23 /*3*/])
					{
						func_1140(Global_33, 1.296E-29f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipGlovesFidget", true, 15);
						func_1141(bParam0, 0, 0);
						return 1;
					}
					else
					{
						PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipGlovesFidget", true, 15);
						func_1141(bParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (bParam0 == Global_1953279.f_1676.f_1[10 /*3*/])
					{
						func_1140(Global_33, Global_1953279.f_83[10 /*12*/], 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 0);
						func_1141(bParam0, 0, 0);
						return 1;
					}
					else
					{
						func_1141(bParam0, 1, 0);
						func_1142(-7.463622E-36f, 0);
						if (iVar32 == 4.281622E+11f)
						{
							func_1142(1.246195E-34f, 0);
						}
						else if (iVar32 == 1.246195E-34f)
						{
							func_1142(4.281622E+11f, 0);
						}
					}
					break;
				default:
					if (!func_1122(bParam0, 3.611922E-33f))
					{
					}
					else
					{
						func_1138(bParam0, 0);
					}
					break;
			}
			func_1140(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 0, 0, 1, 1, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039: /* GXTEntry: "Satchel" */
				func_269(1, 0);
				break;
			case joaat("KIT_WARDROBE"):
				if (func_663() != -1)
				{
				}
				else if (!func_1133(bParam0))
				{
					func_670("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_1143(7, bParam0);
					bVar31 = func_1143(1, bParam0);
					if (bVar31 && !bVar30)
					{
						if (MAP::DOES_BLIP_EXIST(Global_17339))
						{
							MAP::REMOVE_BLIP(&Global_17339);
						}
						Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
						MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
						func_670(MISC::VAR_STRING(0, -3.54871E-22f, Global_17339), 10000, 0, 0, 0, 1);
					}
					else if (!func_1144(7))
					{
						func_670("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_1146(Global_33, func_1145(7), 0))
						{
							func_670("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_17339))
							{
								MAP::REMOVE_BLIP(&Global_17339);
							}
							Global_17339 = MAP::_BLIP_ADD_FOR_STYLE(-5.719183E-31f);
							MAP::BLIP_ADD_MODIFIER(Global_17339, 9.52931E-15f);
							func_670(MISC::VAR_STRING(0, -3.385882E+21f, Global_17339), 10000, 0, 0, 0, 1);
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
							func_1128(Var10, 0);
						}
						Jump @2435; //curOff = 1817
						func_1147();
						Jump @2435; //curOff = 1824
						if (func_1133(-7.437896E-28f))
						{
							if (func_882(1, 1))
							{
								func_1101(2, 1);
							}
							else if (func_939(1))
							{
								func_670("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_937())
							{
								func_670("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
								{
									func_1148();
								}
								else
								{
									func_670("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_1149(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
							}
						}
						else if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
						{
							func_670("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_1149(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
						}
						else if (func_937())
						{
							func_670("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_670("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2435; //curOff = 2045
						if (!WEAPON::_IS_WEAPON_BINOCULARS(func_1150(Global_33, 1, 0, 0)))
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2435; //curOff = 2083
						if (func_1150(Global_33, 1, 0, 0) != bParam0)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_33, bParam0, false, 0, false, false);
						}
						return 1;
						Jump @2435; //curOff = 2118
						Jump @2435; //curOff = 2121
						func_1151(535, 1);
						Jump @2435; //curOff = 2132
						func_1152(1);
						Jump @2435; //curOff = 2140
						TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -2.680077E+18f, 9.798505E+30f, 1, 0, -1f);
						bVar28 = false;
						return 1;
						Jump @2435; //curOff = 2175
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
							func_1128(Var10, 0);
						}
						return 1;
						Jump @2435; //curOff = 2251
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
							func_1128(Var10, 0);
						}
						return 1;
						Jump @2435; //curOff = 2381
						if (Global_1148170[PLAYER::PLAYER_ID() /*10*/].f_4)
						{
							func_670("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_1153();
						}
						return 1;
						Jump @2435; //curOff = 2426
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

int func_411(bool bParam0)
{
	int iVar0;

	if (func_1154(bParam0, 0.003804697f) && !func_1155(bParam0, 0.003804697f, 0))
	{
		return 0.003804697f;
	}
	iVar0 = 0;
	if (func_1156(bParam0, &iVar0))
	{
		return iVar0;
	}
	if (func_1154(bParam0, 8.497754E-37f))
	{
		iVar0 = 8.497754E-37f;
	}
	else if (func_1154(bParam0, -982726.7f))
	{
		iVar0 = -982726.7f;
	}
	else if (func_1154(bParam0, -2.401104E+18f))
	{
		iVar0 = -2.401104E+18f;
	}
	return iVar0;
}

int func_412(bool bParam0, bool bParam1, int iParam2)
{
	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	return func_1157(bParam0, iParam2, 1, bParam1, 1, 0);
}

void func_413(int iParam0)
{
	Global_1896762.f_13.f_26 = iParam0;
}

void func_414(bool bParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_13.f_50.f_3, bParam0);
	}
}

char* func_415(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return "";
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(GANG::NETWORK_GET_GANG_LEADER(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_713(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
		}
		else
		{
			sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_713(PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)), 4.808429E-35f));
			return func_1158(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	}
	sVar0 = MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(GANG::NETWORK_GET_GANG_LEADER(iParam0)));
	return func_1158(sVar0, iParam2);
}

void func_416(char* sParam0)
{
	StringCopy(&(Global_1203937.f_799), sParam0, 64);
}

void func_417(int iParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_72.f_25) && DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_72.f_24))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_72.f_25, func_1159(iParam0, 1));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_72.f_24, iParam0);
	}
}

char* func_418(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return "";
	}
	if (bParam1)
	{
		return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", func_713(PLAYER::GET_PLAYER_NAME(iParam0), 4.808429E-35f));
	}
	return MISC::VAR_STRING(10, "NM_POSSE_NAME_DEFAULT", PLAYER::GET_PLAYER_NAME(iParam0));
}

void func_419(char* sParam0, bool bParam1)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_13.f_50.f_2, sParam0);
	}
	if (bParam1)
	{
		Global_1896762.f_13.f_10 = { func_345(func_415(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), 0, 0)) };
	}
	else
	{
		Global_1896762.f_13.f_10 = { func_345(sParam0) };
	}
}

bool func_420(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<10> Var4;
	int iVar14;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_ID())
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_610(iVar0) };
			iVar14 = 0;
			while (iVar14 <= (POSSE::_0xC084FF658B2E61DA(&Var2) - 1))
			{
				if ((POSSE::_0xC084FF658B2E81DA(&Var2, iVar14, &Var4) && Var4 != 0) && Var4.f_9 == 1)
				{
					return true;
				}
				iVar14++;
			}
		}
	}
	return false;
}

bool func_421()
{
	return Global_1203937.f_399.f_4;
}

int func_422()
{
	return Global_1203937.f_399;
}

void func_423(int iParam0, bool bParam1)
{
	Global_1203937.f_470 = iParam0;
	Global_1203937.f_470.f_1 = bParam1;
}

int func_424(int iParam0)
{
	var uVar0;
	struct<2> Var1;
	struct<10> Var3;
	int iVar13;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		POSSE::_0xC08AFF658B2E51DA(&uVar0);
		return uVar0;
	}
	Var1 = { func_610(iParam0) };
	iVar13 = 0;
	while (iVar13 <= (POSSE::_0xC084FF658B2E61DA(&Var1) - 1))
	{
		if ((POSSE::_0xC084FF658B2E81DA(&Var1, iVar13, &Var3) && Var3 != 0) && Var3.f_9 == 1)
		{
			return Var3;
		}
		iVar13++;
	}
	return 0;
}

void func_425(int iParam0, int iParam1)
{
	struct<23> Var0;

	if (Global_1203937.f_106.f_3 == iParam0)
	{
		return;
	}
	Var0.f_22 = 10;
	Var0.f_9 = iParam0;
	func_1160(&Var0);
	Global_1203937.f_106 = iParam0;
	Global_1203937.f_106.f_1 = iParam1;
	Global_1203937.f_106.f_4 = 1;
	func_1161(1);
}

void func_426(bool bParam0, int iParam1, int iParam2)
{
	char* sVar0;

	if (func_1162())
	{
		return;
	}
	if (bParam0 == 1)
	{
		if (!func_1163(PLAYER::PLAYER_ID(), 32))
		{
			func_1164(32);
			if (iParam2 == 0)
			{
				sVar0 = MISC::VAR_STRING(2, "NG_PP_FF_ON");
				func_714(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_1165(bParam0, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
			}
		}
	}
	else if (func_1163(PLAYER::PLAYER_ID(), 32))
	{
		func_1166(32);
		if (iParam2 == 0)
		{
			sVar0 = MISC::VAR_STRING(2, "NG_PP_FF_OFF");
			func_714(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_1165(bParam0, GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		}
	}
}

int func_427(int iParam0, bool bParam1)
{
	struct<23> Var0;
	int iVar63;

	Var0.f_22 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		if (func_1167())
		{
			func_1168();
			return 1;
		}
		if (!func_1169())
		{
			return 0;
		}
		Var0.f_9.f_1 = bParam1;
		iVar63 = 0;
		if (!POSSE::_0xC09CFF658B2E51DA(iParam0, &Var0, &iVar63) && iVar63 == 1)
		{
			func_1170();
			return 0;
		}
		else
		{
			func_1168();
			return 1;
		}
	}
	return 0;
}

int func_428(int iParam0)
{
	switch (iParam0)
	{
		case 1364158563:
			return 0;
		case -1615594685:
			return 1;
		case -606838807:
			return 2;
		case 1099303125:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_429(int iParam0)
{
	if (iParam0 == 0)
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(0, 1);
	}
	if (iParam0 == 1)
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(1, 1);
	}
	if (iParam0 == 2)
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(2, 1);
	}
	if (iParam0 == 3)
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 2);
	}
	else
	{
		NETWORK::_0x3F0ABAE38A0515AD(3, 1);
	}
}

int func_430(int iParam0)
{
	switch (iParam0)
	{
		case 2118609260:
			return 1;
		case 910568583:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_431(int iParam0)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641.f_2;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return Global_1101558[iVar0 /*38*/].f_33;
}

void func_432()
{
	if (!Global_1149417.f_5568)
	{
		return;
	}
	Global_1149417.f_5568.f_12 = 1;
}

void func_433()
{
	if (!Global_1149417.f_5568)
	{
		return;
	}
	Global_1149417.f_5568.f_13 = 1;
}

float func_434(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1.054567E-34f;
		case 0:
			return -2.981677E+15f;
		default:
			break;
	}
	return -1.054567E-34f;
}

bool func_435()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[Global_1295619]);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return false;
	}
	return true;
}

bool func_436()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[Global_1295619]);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
	{
		return false;
	}
	return true;
}

bool func_437()
{
	if (Global_1572887.f_72.f_40 >= 10 && Global_1572887.f_72.f_40 <= 14)
	{
		return true;
	}
	return false;
}

float func_438(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return 0f;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return Global_17418.f_2641;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0)) > 1 && bParam1) && Global_1101558[iVar0 /*38*/].f_18 >= Global_1101558[iVar0 /*38*/].f_30)
	{
		return Global_1101558[iVar0 /*38*/].f_18;
	}
	return Global_1101558[iVar0 /*38*/].f_30;
}

bool func_439(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_440(float fParam0)
{
	if (BUILTIN::FLOOR(fParam0) >= Global_1901671.f_737.f_29)
	{
		return true;
	}
	return false;
}

bool func_441()
{
	if (func_444(Global_1295619.f_149[Global_1295619]) > 0)
	{
		return true;
	}
	return false;
}

bool func_442(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_440(Global_17418.f_2641) || func_440(Global_1101558[Global_1295619 /*38*/].f_18))
	{
		return false;
	}
	if (func_1171(Global_1295619.f_149[Global_1295619], 1, 1))
	{
		return false;
	}
	if (!bParam0)
	{
		if (func_441())
		{
			return false;
		}
	}
	if (func_1172(Global_1295619.f_149[Global_1295619]))
	{
		return false;
	}
	iVar0 = Global_1295619.f_149[Global_1295619];
	if ((Global_1101558[iVar0 /*38*/].f_1 >= 2 && Global_1101558[iVar0 /*38*/].f_1 <= 4) && !Global_1572887.f_7)
	{
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(Global_1295619.f_149[Global_1295619]);
	if (GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		if (GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
		{
			if (!GANG::NETWORK_IS_GANG_LEADER(Global_1295619.f_149[Global_1295619]))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_443()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_444(int iParam0)
{
	int iVar0;

	iVar0 = (Global_1901671.f_737.f_39 - func_1173(iParam0));
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return 0;
}

void func_445(int iParam0)
{
	Global_17418.f_55.f_61.f_602 = (Global_17418.f_55.f_61.f_602 - (Global_17418.f_55.f_61.f_602 && iParam0));
}

void func_446(int iParam0)
{
	Global_17418.f_55.f_61.f_602 = (Global_17418.f_55.f_61.f_602 || iParam0);
}

void func_447(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1174();
	}
	if (bParam0)
	{
		func_1175(8);
		func_1175(512);
	}
	else
	{
		func_1175(8);
		func_1175(16);
	}
}

int func_448(int iParam0)
{
	switch (iParam0)
	{
		case 470592719:
			return 0;
		case 1413457193:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_449(int iParam0, int iParam1)
{
	if (!func_450(iParam0))
	{
		return false;
	}
	return func_613(Global_1141317[iParam0 /*27*/].f_7, iParam1);
}

bool func_450(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_451(var uParam0)
{
	return func_1176(*uParam0, 1);
}

int func_452(var uParam0)
{
	if (!func_451(uParam0))
	{
		return 0;
	}
	if (func_1177(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1178(uParam0->f_1);
}

int func_453()
{
	return 30000;
}

void func_454(int iParam0)
{
	func_1179(&(Global_1147168.f_8), iParam0);
}

void func_455(int iParam0)
{
	func_614(&(Global_1147168.f_8), iParam0);
}

float func_456(int iParam0, int iParam1)
{
	return func_1180(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_457(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, float fParam15)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&fParam15))
	{
		return;
	}
	if (!func_1181(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &fParam15);
}

int func_458()
{
	return func_1182(Global_1940239.f_1556);
}

void func_459(int iParam0)
{
	switch (iParam0)
	{
		case -1594107850:
		case -1080557963:
		case 72556410:
			func_366();
			break;
		default:
			break;
	}
	func_91(iParam0, 0);
}

int func_460(bool bParam0)
{
	return func_1183(bParam0, Global_1940239.f_1556);
}

char* func_461()
{
	char* sVar0;

	sVar0 = STATS::_0x3F6FD87D2030ADC6();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		sVar0 = MISC::VAR_STRING(2, "DAILY_DISABLED");
	}
	return sVar0;
}

char* func_462()
{
	char* sVar0;

	if (func_1184())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_INTRO_MISSION_TOOLTIP";
	}
	else if (func_909())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_ACTIVITY_TOOLTIP";
	}
	else
	{
		sVar0 = "POSSE_FOOTER";
	}
	return MISC::VAR_STRING(2, sVar0);
}

int func_463()
{
	if (func_443())
	{
		return 2;
	}
	return 0;
}

char* func_464(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return MISC::VAR_STRING(2, "CAMP_AND_PROPERTIES_FOOTER");
}

char* func_465()
{
	char* sVar0;
	bool bVar1;
	int iVar2;

	bVar1 = func_1184();
	if (bVar1)
	{
		iVar2 = func_1185(-7.54423E+36f, func_1047(1), -2.696814E-33f, 1, 0, 0) + 1;
	}
	if (bVar1 && iVar2 <= 16)
	{
		sVar0 = "NET_CAMP_INTRO_MISSION_DISABLED_FOOTER";
	}
	else if (func_909() || Global_263042[Global_1295619 /*65*/] > 2)
	{
		sVar0 = "NET_CAMP_DISABLED_ACTIVITY_FOOTER";
	}
	else
	{
		sVar0 = "CAMP_FOOTER";
	}
	return MISC::VAR_STRING(2, sVar0);
}

int func_466()
{
	if (func_1186(1))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1.724495E-27f))
	{
		return 2;
	}
	if (func_613(Global_1149157.f_137.f_1, 2))
	{
		if (!func_148(2))
		{
			return 3;
		}
	}
	return 0;
}

char* func_467(int iParam0)
{
	return MISC::VAR_STRING(2, "PLAYERS_FOOTER");
}

int func_468()
{
	if (func_1186(4))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-8.378432E+12f))
	{
		return 2;
	}
	if (Global_1940239.f_245.f_1306 < 1)
	{
		return 3;
	}
	return 0;
}

char* func_469(int iParam0)
{
	return MISC::VAR_STRING(2, "INVITES_FOOTER");
}

char* func_470()
{
	char* sVar0;

	if (func_1184())
	{
		sVar0 = "NM_OPTION_DISABLED_INTRO_TOOLTIP";
	}
	else if (func_909() || Global_263042[Global_1295619 /*65*/] > 2)
	{
		sVar0 = "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP";
	}
	else if (func_1070())
	{
		sVar0 = "JOB_POSSE_MEMBERS_IN_JAIL_FOOTER";
	}
	else if (func_919())
	{
		sVar0 = "JOB_PLAYER_IN_JAIL_FOOTER";
	}
	else
	{
		sVar0 = "MATCHMAKING_FOOTER";
	}
	return MISC::VAR_STRING(2, sVar0);
}

int func_471()
{
	if (func_443())
	{
		return 8;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1.561134E+10f))
	{
		return 2;
	}
	if (func_1087())
	{
		return 0;
	}
	if (!func_909())
	{
		return 5;
	}
	if (func_1187(255))
	{
		return 4;
	}
	switch (Global_524288.f_39632)
	{
		case 1520184724:
			return 7;
	}
	if (func_1188() == 2)
	{
		return 6;
	}
	return 0;
}

char* func_472(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
			return MISC::VAR_STRING(2, "NET_STABLES_UGC_DISABLED_FOOTER");
		case 8:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return MISC::VAR_STRING(2, "STABLES_FOOTER");
}

int func_473()
{
	if (func_1186(16))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(8.947649E-32f))
	{
		return 2;
	}
	return 0;
}

char* func_474(int iParam0)
{
	return MISC::VAR_STRING(2, "OPTIONS_FOOTER");
}

int func_475()
{
	if (func_443())
	{
		return 1;
	}
	return 0;
}

char* func_476(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "EMOTES_FOOTER");
		case 1:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

int func_477()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (func_1189(PLAYER::PLAYER_ID(), &iVar0, &iVar1, 1))
	{
		if (iVar0 != -1)
		{
			if (iVar1 != Global_1297553[PLAYER::PLAYER_ID() /*87*/])
			{
				return 3;
			}
		}
	}
	iVar2 = PLAYER::GET_PLAYER_INDEX();
	if (iVar2 != 255)
	{
		iVar3 = GANG::NETWORK_GET_GANG_ID(iVar2);
		if (GANG::NETWORK_IS_GANG_ID_VALID(iVar3))
		{
			if (GANG::NETWORK_IS_GANG_ACTIVE(iVar3))
			{
				if (GANG::NETWORK_GET_GANG_LEADER(iVar3) != iVar2)
				{
					return 1;
				}
			}
		}
	}
	if (func_407(PLAYER::PLAYER_ID(), 1) == -1)
	{
		return 2;
	}
	return 0;
}

char* func_478(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_MOONSHINE_INVITE_TO_SHACK_FOOTER";
		case 1:
			return "NET_MOONSHINE_INVITE_TO_SHACK_LEADER_ONLY_FOOTER";
		case 2:
			return "NET_MOONSHINE_INVITE_TO_SHACK_NO_SHACK_FOOTER";
		case 3:
			return "NET_MOONSHINE_INVITE_TO_SHACK_YOUR_SHACK_FOOTER";
		default:
			break;
	}
	return "";
}

int func_479()
{
	int iVar0;
	int iVar1;

	if (func_1190(512))
	{
		return 4;
	}
	iVar0 = PLAYER::GET_PLAYER_INDEX();
	if (iVar0 != 255)
	{
		iVar1 = GANG::NETWORK_GET_GANG_ID(iVar0);
		if (GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
		{
			if (GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
			{
				if (GANG::NETWORK_GET_GANG_LEADER(iVar1) != iVar0)
				{
					return 2;
				}
			}
		}
	}
	if (!func_1191(6))
	{
		return 1;
	}
	if ((func_909() || func_910()) || func_821(func_1192()))
	{
		return 3;
	}
	return 0;
}

char* func_480(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MOONSHINE_FOOTER";
		case 1:
			return "MOONSHINE_FOOTER_INTRO";
		case 2:
			return "MOONSHINE_FOOTER_MEMBER";
		case 3:
			return "MOONSHINE_FOOTER_CONTENT";
		case 4:
			return "MOONSHINE_FOOTER_LOCKED";
		default:
			break;
	}
	return "";
}

char* func_481(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	char* sVar3;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, func_58(93));
	iVar1 = Global_1295619.f_16;
	iVar2 = (iVar0 - iVar1);
	sVar3 = func_1193(iVar2);
	if (func_1194())
	{
		return MISC::VAR_STRING(2, "MI_WANTED_TT", func_1195());
	}
	if (iVar2 > 0)
	{
		return MISC::VAR_STRING(10, "INV_EXPIRE", sVar3);
	}
	return "";
}

char* func_482()
{
	char* sVar0;

	sVar0 = "NM_GC_FOOTER_CAMP_CHANGE";
	if (func_355(UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.608566E+13f)) == 15)
	{
		if (func_939(1))
		{
			sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
		}
		else if (func_937())
		{
			sVar0 = "NET_CAMP_SET_LOC_CONTENT_LOCK";
		}
	}
	else if (func_34(Global_1940239.f_1556.f_149.f_2.f_29) && func_34(Global_1295619.f_1))
	{
		if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1940239.f_1556.f_149.f_2.f_29), &(Global_1295619.f_1)))
		{
			sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
		}
	}
	else if (func_77(PLAYER::PLAYER_ID()) != -1 && func_449(func_77(PLAYER::PLAYER_ID()), 512))
	{
		sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
	}
	return MISC::VAR_STRING(2, sVar0);
}

char* func_483()
{
	char* sVar0;

	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1295619.f_1), &(Global_1940239.f_1556.f_149.f_2.f_29)))
	{
		if (Global_1940239.f_1556.f_149.f_2.f_4)
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_PERSISTENT";
		}
		else
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_TEMPORARY";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
	}
	return MISC::VAR_STRING(2, sVar0);
}

char* func_484()
{
	if ((func_732() && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1940239.f_1556.f_149.f_2.f_1) < GANG::_NETWORK_GET_GANG_SIZE(Global_1940239.f_1556.f_149.f_2.f_1)) && GANG::_0x7933754F260B428A(GANG::NETWORK_GET_GANG_LEADER(Global_1940239.f_1556.f_149.f_2.f_1)) <= 0)
	{
		return MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_FOOTER");
	}
	return MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
}

char* func_485()
{
	char* sVar0;

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
	}
	return MISC::VAR_STRING(2, sVar0);
}

char* func_486(float fParam0)
{
	char* sVar0;

	*fParam0 = 27.64779f;
	if (!Global_1940239.f_1556.f_149.f_2.f_4)
	{
		sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP");
	}
	else if (func_34(Global_1940239.f_1556.f_149.f_2.f_29) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1940239.f_1556.f_149.f_2.f_29), &(Global_1295619.f_1)))
	{
		if (func_99())
		{
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME");
			}
			else if (!NETWORK::_UGC_HAS_PRIVILEGE())
			{
				sVar0 = MISC::VAR_STRING(2, "NM_GC_UGC_RESTRICT");
			}
			else
			{
				sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE");
			}
		}
		else
		{
			*fParam0 = 4.465091E-08f;
			sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN");
		}
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
	}
	return sVar0;
}

char* func_487()
{
	char* sVar0;

	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_1118.f_8.f_1))
	{
		sVar0 = MISC::VAR_STRING(2, "NM_GW_KICK_FOOTER");
	}
	else
	{
		sVar0 = MISC::VAR_STRING(2, "NM_GW_KICK_BLOCK_FOOTER");
	}
	return sVar0;
}

char* func_488()
{
	struct<2> Var0;

	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	Var0 = { func_207() };
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&Var0))
	{
		return "";
	}
	switch (func_918(&Var0))
	{
		case 1:
			return MISC::VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_SENT");
		case 2:
			return MISC::VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_ACCEPTED");
		case 3:
			return MISC::VAR_STRING(2, "PLAYER_ENTRY_SESSION_INVITE_REJECTED");
		default:
			break;
	}
	return "";
}

char* func_489()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_490()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return MISC::VAR_STRING(2, "NM_PW_VIEW_ABILITY_LOADOUT_FOOTER");
}

char* func_491()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_492()
{
	char* sVar0;
	int iVar1;

	sVar0 = "NW_PW_C_CANT_INVITE";
	if (!func_34(Global_1940239.f_1556.f_26))
	{
		return sVar0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_26));
	if (!NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
	{
		sVar0 = "NM_PW_C_NO_SC_LOCAL";
	}
	else if (!func_1196(iVar1))
	{
		sVar0 = "NW_PW_C_NO_SC_REMOTE";
	}
	else if (!func_1197(PLAYER::PLAYER_ID()))
	{
		sVar0 = "NM_PW_C_NO_ACTIVE";
	}
	else if (func_1198(iVar1))
	{
		sVar0 = "NW_PW_C_CURRENT_MEMBER";
	}
	else
	{
		sVar0 = "NM_PW_INVITE_TO_CREW_FOOTER";
	}
	return MISC::VAR_STRING(2, sVar0);
}

char* func_493(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (Global_1896762.f_13.f_3)
	{
		bVar0 = func_98();
	}
	else
	{
		bVar0 = func_420(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	}
	switch (iParam0)
	{
		case 2042309940:
			if (!bVar0)
			{
				return MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_SIZE_NEED_UPGRADE");
			}
			break;
	}
	return MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_SIZE");
}

char* func_494()
{
	struct<2> Var0;
	int iVar2;

	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (!func_644(16))
		{
			Var0 = { func_911(0) };
			if (func_821(Var0))
			{
				if (Var0 == 6)
				{
					iVar2 = func_1199(PLAYER::PLAYER_ID(), 0);
					if (iVar2 != -1)
					{
						if (func_1200(iVar2) == -4.537018E+10f)
						{
							return MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_POSSE_VERSUS");
						}
						else if (iVar2 == 1)
						{
							return MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_CHALLENGE");
						}
						else
						{
							return MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_FAIL_EVENT");
						}
					}
				}
			}
		}
		else if (Global_1142409.f_2019 >= 6 && Global_1142409.f_2019 <= 12)
		{
			return MISC::VAR_STRING(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
		}
		else if (func_77(PLAYER::PLAYER_ID()) != -1 && func_449(func_77(PLAYER::PLAYER_ID()), 512))
		{
			return MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
		}
		else if (func_937())
		{
			return MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
		}
		else
		{
			return MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER");
		}
	}
	return MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
}

char* func_495(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL_FOOTER";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM_FOOTER";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE_FOOTER";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS_FOOTER";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH_FOOTER";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL_FOOTER";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM_FOOTER";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE_FOOTER";
		case 0:
			return "NM_PLAYLIST_RACE_FOOTER";
		case 1:
			return "NM_PLAYLIST_FEATURED_001_FOOTER";
		case 10:
		case 12:
		case 13:
			if (!func_1201())
			{
				return "NM_PLAYLIST_NOMINATED_NO_BOOKMARKS_FOOTER";
			}
			else
			{
				return "NM_PLAYLIST_NOMINATED_FOOTER";
			}
			break;
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1_FOOTER";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2_FOOTER";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3_FOOTER";
		case 19:
			return "NM_PLAYLIST_CAPTURE_FOOTER";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT_FOOTER";
		case 20:
			return "NM_PLAYLIST_HARDCORE_SERIES_FOOTER";
	}
	return "NM_PLAYLIST_FFA";
}

char* func_496(int iParam0, bool bParam1)
{
	if (!func_739(iParam0))
	{
		return MISC::VAR_STRING(2, "NG_SERIES_LOCKED");
	}
	if (func_1202())
	{
		return MISC::VAR_STRING(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1194())
	{
		return MISC::VAR_STRING(2, "MI_WANTED_TT", func_1195());
	}
	if (bParam1)
	{
		return MISC::VAR_STRING(2, func_495(iParam0));
	}
	if (func_671())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1295619.f_9)
	{
		return MISC::VAR_STRING(2, "NG_SIZE_LARGE_S");
	}
	return MISC::VAR_STRING(2, "NG_SERIES_LOCKED");
}

char* func_497(bool bParam0)
{
	if (func_1202())
	{
		return MISC::VAR_STRING(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1194())
	{
		return MISC::VAR_STRING(2, "MI_WANTED_TT", func_1195());
	}
	if (bParam0)
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_STORY_MISSION_ON_CALL_FOOTER");
	}
	if (func_671())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1295619.f_9)
	{
		return MISC::VAR_STRING(2, "NG_SIZE_LARGE_S");
	}
	if (!func_1203())
	{
		return MISC::VAR_STRING(2, "NG_SERIES_STORY_LOCKED");
	}
	return MISC::VAR_STRING(2, "NG_SERIES_LOCKED");
}

char* func_498(bool bParam0)
{
	if (func_1202())
	{
		return MISC::VAR_STRING(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1194())
	{
		return MISC::VAR_STRING(2, "MI_WANTED_TT", func_1195());
	}
	if (bParam0)
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_SERIES_ON_CALL_FOOTER");
	}
	if (func_671())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1295619.f_9)
	{
		return MISC::VAR_STRING(2, "NG_SIZE_LARGE_S");
	}
	if (!func_1203())
	{
		return MISC::VAR_STRING(2, "NG_SERIES_STORY_LOCKED");
	}
	return MISC::VAR_STRING(2, "NG_SERIES_LOCKED");
}

char* func_499()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_531(9) || func_531(10)) || func_531(11)) || func_531(12)) || func_531(13))
	{
		return MISC::VAR_STRING(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::VAR_STRING(2, "HORSE_ACCESS_FOOTER");
}

char* func_500()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_531(19) || func_531(20)) || func_531(21)) || func_531(22)) || func_531(23))
	{
		return MISC::VAR_STRING(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::VAR_STRING(2, "CARGO_ACCESS_FOOTER");
}

char* func_501()
{
	if (func_1184())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_909())
	{
		return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_531(9) || func_531(10)) || func_531(11)) || func_531(12)) || func_531(13))
	{
		return MISC::VAR_STRING(2, "VEHICLE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return MISC::VAR_STRING(2, "VEHICLE_ACCESS_FOOTER");
}

int func_502()
{
	if (func_1204())
	{
		return 1;
	}
	if (func_1205(255))
	{
		return 2;
	}
	if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
	{
		return 3;
	}
	if (func_919())
	{
		return 4;
	}
	if (func_1100())
	{
		return 5;
	}
	if (func_1184())
	{
		return 6;
	}
	if (func_909())
	{
		return 7;
	}
	return 0;
}

char* func_503(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return MISC::VAR_STRING(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_CONTENT");
		case 2:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 3:
			return "";
		case 4:
			return MISC::VAR_STRING(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_JAIL");
		case 5:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 6:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
		case 7:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	return "";
}

int func_504()
{
	if (!VOICE::_0xCCF71FCFA0070B1A())
	{
		return 1;
	}
	else if (func_909())
	{
		return 2;
	}
	return 0;
}

char* func_505(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "NM_FR_VOICE_CHAT_FILTER_FOOTER");
		case 1:
			return "";
		case 2:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

char* func_506()
{
	int iVar0;

	iVar0 = func_525(Global_1295619.f_149[Global_1295619], 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return MISC::VAR_STRING(2, "HOSTILITY_LOW_FOOTER");
		case 2:
		case 3:
			return MISC::VAR_STRING(2, "HOSTILITY_MEDIUM_FOOTER");
		case 4:
		case 5:
		case 6:
			return MISC::VAR_STRING(2, "HOSTILITY_HIGH_FOOTER");
		default:
			return MISC::VAR_STRING(2, "HOSTILITY_HIGH_FOOTER");
	}
	return "";
}

char* func_507(int iParam0)
{
	char* sVar0;
	bool bVar1;

	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_FR_EMOTES_TYPE_ACTION_FOOTER";
			break;
		case 1:
			sVar0 = "NM_FR_EMOTES_TYPE_ANTAGONIZE_FOOTER";
			break;
		case 2:
			sVar0 = "NM_FR_EMOTES_TYPE_REACTION_FOOTER";
			break;
		case 3:
			sVar0 = "NM_FR_EMOTES_TYPE_GREET_FOOTER";
			break;
		default:
			return MISC::VAR_STRING(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	func_1206(iParam0, &bVar1);
	if (!func_623(bVar1, 0))
	{
		return MISC::VAR_STRING(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	return MISC::VAR_STRING(10, sVar0, func_1208(func_1207(bVar1), 4.808429E-35f));
}

char* func_508()
{
	return MISC::VAR_STRING(2, "NM_FR_EMOTES_TYPE_ONE_FOOTER");
}

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_DEFAULT_DESC");
		case 1:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_CASUAL_DESC");
		case 2:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_CRAZY_DESC");
		case 3:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_FLAMBOYANT_DESC");
		case 4:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_GUNSLINGER_DESC");
		case 5:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_REFINED_DESC");
		case 6:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_SILENT_DESC");
		case 7:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_GREENHORN_DESC");
		case 8:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_VETERAN_DESC");
		case 9:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_EASYRIDER_DESC");
		case 10:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_DRUNK_DESC");
		case 11:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_INQUISITIVE_DESC");
		default:
			break;
	}
	return "";
}

int func_510()
{
	if (func_910() || func_671())
	{
		return 1;
	}
	if (func_443())
	{
		return 2;
	}
	return 0;
}

char* func_511(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "PLAYER_WALK_STYLES_FOOTER");
		case 1:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 2:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

int func_512()
{
	if (func_910() || func_671())
	{
		return 1;
	}
	if (func_443())
	{
		return 2;
	}
	if (!func_1209())
	{
		return 3;
	}
	return 0;
}

char* func_513(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "PLAYER_GUN_SPINNING_FOOTER");
		case 1:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 2:
			return MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 3:
			return MISC::VAR_STRING(2, "PLAYER_GUN_SPINNING_LOCKED_BOUNTY");
		default:
			break;
	}
	return "";
}

char* func_514(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_REVERSE_SPIN_DESC");
		case 1:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_SPIN_UP_DESC");
		case 2:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_REVERSE_SPIN_UP_DESC");
		case 3:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_ALT_FLIPS_DESC");
		case 4:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_SHOULDER_TOSS_DESC");
		case 5:
			return MISC::VAR_STRING(2, "PLAYER_GUNSPIN_FIGURE_EIGHT_DESC");
		default:
			break;
	}
	return MISC::VAR_STRING(2, "");
	return "";
}

void func_515(int iParam0)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	bVar0 = false;
	iVar1 = 0;
	fVar2 = -4.931674E+23f;
	iVar1 = 0;
	while (iVar1 < 4)
	{
		if (iVar1 < 0)
		{
		}
		else if (WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar1) == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar2, iParam0))
		{
			bVar0 = true;
		}
		else
		{
			iVar1++;
		}
	}
	if (bVar0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_8, 9.438405E-38f);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_8, -1.99721E-22f);
	}
}

void func_516(int iParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	float fVar3;

	bVar0 = false;
	iVar1 = 0;
	iVar2 = 0;
	fVar3 = -4.931674E+23f;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 < 0)
		{
		}
		else
		{
			iVar1 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar2);
			if ((iVar1 == -1 || iVar1 == 0) || iVar1 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar3, iParam0))
			{
				bVar0 = true;
			}
			else
			{
				iVar2++;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iParam0 /*27*/].f_10, bVar0);
		}
	}
}

char* func_517(int iParam0)
{
	struct<52> Var0;
	int iVar55;
	int iVar56;
	var uVar57;
	char* sVar60;

	if (iParam0 == -1)
	{
		return "";
	}
	Var0.f_33 = 7;
	Var0.f_51 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1940239.f_1556.f_149.f_2), 55);
	if ((NETWORK::NETWORK_IS_HANDLE_VALID(&(Var0.f_29)) && NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1295619.f_1))) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0.f_29), &(Global_1295619.f_1)))
	{
		if (Var0.f_3)
		{
			POSSE::_0xC08AFF658B2E51DA(&iVar55);
			if (iVar55 != Var0.f_2)
			{
				return MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
			}
		}
		else if (GANG::NETWORK_IS_GANG_ID_VALID(Var0.f_1) && !GANG::NETWORK_IS_GANG_ACTIVE(Var0.f_1))
		{
			return MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}
	if (!func_420(Global_1295619.f_10) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return MISC::VAR_STRING(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");
	}
	if (((Global_1295619.f_16 - Global_1108965.f_775.f_5[iParam0]) < 180 && func_1210(iParam0)) && func_1211(iParam0))
	{
		iVar56 = (180 - (Global_1295619.f_16 - Global_1108965.f_775.f_5[iParam0]));
		return MISC::VAR_STRING(10, "POSSE_VERSUS_TIMER_FOOTER", func_1208(func_1212(iVar56 * 1000, 0, 0, 0, 0, 0), 4.808429E-35f));
	}
	switch (iParam0)
	{
		case 4:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 2)
			{
				sVar60 = "PV_TEAM_INFIGHTING_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_TEAM_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1216())
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_1217())
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &uVar57, 16))
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1218(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar60 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_INFIGHTING_FOOTER";
			}
			break;
		case 5:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_INFIGHTING_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1216())
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_1217())
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &uVar57, 16))
			{
				sVar60 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1218(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar60 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			}
			break;
		case 8:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_BIGGEST_FISH_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_BIGGEST_FISH_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1219(&(Global_1108965.f_775), 1))
			{
				sVar60 = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			}
			break;
		case 9:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_FLYING_BIRD_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_FLYING_BIRD_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			}
			break;
		case 10:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_HERB_HUNT_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_HERB_HUNT_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			}
			break;
		case 7:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_HTPL_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_HTPL_TOO_FEW_AVAILABLE";
			}
			else if (GANG::_0x2F7EB8B6F6AFE79C(1) < 2)
			{
				sVar60 = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (!func_1220(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (func_1218(PLAYER::PLAYER_ID(), 0, 1))
			{
				sVar60 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			}
			break;
		case 6:
			if (!func_1213(iParam0))
			{
				sVar60 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) <= 1)
			{
				sVar60 = "PV_IMPROPMTU_RACE_TOO_FEW";
			}
			else if (!func_1214(1, 2))
			{
				sVar60 = "PV_IMPROPMTU_RACE_TOO_FEW_AVAILABLE";
			}
			else if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
			{
				sVar60 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_757(MAP::_GET_WAYPOINT_COORDS()))
			{
				sVar60 = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			}
			else if (Global_1108965.f_775.f_20 && func_1221(&(Global_1108965.f_775.f_36)) < 1000)
			{
				sVar60 = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			}
			else if (func_757(Global_1108965.f_775.f_24) && func_1221(&(Global_1108965.f_775.f_36)) < 1000)
			{
				sVar60 = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			}
			else
			{
				sVar60 = "POSSE_VERSUS_RACE_FOOTER";
			}
			break;
		default:
			sVar60 = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}
	return MISC::VAR_STRING(2, sVar60);
}

char* func_518(int iParam0)
{
	return MISC::VAR_STRING(2, "MINIGAME_PLAYERS_FOOTER");
}

char* func_519()
{
	if (func_846())
	{
		return MISC::VAR_STRING(2, "INVITE_PLAYERS_TO_MINIGAME_FOOTER");
	}
	return MISC::VAR_STRING(2, "INVITE_PLAYERS_PUBLIC_NOT_ALLOWED_FOOTER");
}

char* func_520()
{
	if (func_1222(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))))
	{
		return MISC::VAR_STRING(2, "GFH_REPLAY_BOUNTY_JAILED_MEMBER");
	}
	else if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 4)
	{
		return MISC::VAR_STRING(2, "GFH_HELP_POSSE_TOO_LARGE_TO_ACCEPT_LEGENDARY_BOUNTY");
	}
	else if (!DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(Global_1120482.f_18167.f_5, "dynamic_list_item_enabled") && Global_1120482.f_18167.f_3 == 1)
	{
		return MISC::VAR_STRING(2, "GFH_REPLAY_BOUNTY_NOT_AVAILABLE");
	}
	else
	{
		return MISC::VAR_STRING(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
	}
	return MISC::VAR_STRING(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
}

char* func_521()
{
	if (func_1223())
	{
		return MISC::VAR_STRING(2, "CLOUD_DROP_LETTER_MISSION_COOLDOWN_IS_ACTIVE", STATS::_STAT_CALCULATE_COOLDOWN(func_1224() * 1000));
	}
	return "";
}

void func_522(int iParam0)
{
	func_1225(iParam0);
	func_1226(iParam0);
}

void func_523(int iParam0, int iParam1)
{
	if (func_1058())
	{
		func_36(iParam0, 1);
	}
	else
	{
		func_1227(iParam1, iParam0, 1);
	}
}

bool func_524(struct<2> Param0, char* sParam2)
{
	if (!func_34(Param0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1940239.f_1556.f_26), &Param0, 2);
	Global_1940239.f_1556.f_26.f_2 = { func_345(sParam2) };
	return true;
}

int func_525(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_438(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = BUILTIN::FLOOR(Global_1101558[iVar3 /*38*/].f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901671.f_737.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901671.f_737.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901671.f_737.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901671.f_737.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901671.f_737.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901671.f_737.f_36)
	{
		return 5;
	}
	return 6;
}

float func_526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 53251.11f;
		case 1:
			return 53251.11f;
		case 2:
			return 53251.11f;
		default:
			break;
	}
	return 53251.11f;
}

float func_527(bool bParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_525(Global_1295619.f_149[Global_1295619], 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			fVar1 = 27.64779f;
			return fVar1;
		case 2:
		case 3:
			if (bParam0)
			{
				fVar1 = -3.148291E-06f;
			}
			else
			{
				fVar1 = 27.64779f;
			}
			return fVar1;
		case 4:
		case 5:
		case 6:
			if (bParam0)
			{
				fVar1 = -1.403075E+23f;
			}
			else
			{
				fVar1 = 4.465091E-08f;
			}
			return fVar1;
			return 27.64779f;
	}
	return 27.64779f;
}

char* func_528()
{
	int iVar0;

	iVar0 = func_525(Global_1295619.f_149[Global_1295619], 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return MISC::VAR_STRING(2, "HOSTILITY_LOW");
		case 2:
		case 3:
			return MISC::VAR_STRING(2, "HOSTILITY_MEDIUM");
		case 4:
		case 5:
		case 6:
			return MISC::VAR_STRING(2, "HOSTILITY_HIGH");
		default:
			return MISC::VAR_STRING(2, "HOSTILITY_HIGH");
	}
	return "";
}

bool func_529(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return false;
		}
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 == iParam0)
	{
		uParam1->f_1 = Global_1295619.f_10;
	}
	uParam1->f_2 = iParam0;
	uParam1->f_3 = 1;
	*uParam1 = 1;
	uParam1->f_4 = 1;
	if (!func_691(uParam1))
	{
		return false;
	}
	return true;
}

bool func_530()
{
	if ((((((((((((((func_531(9) || func_531(10)) || func_531(11)) || func_531(12)) || func_531(13)) || func_531(14)) || func_531(15)) || func_531(16)) || func_531(17)) || func_531(18)) || func_531(19)) || func_531(20)) || func_531(21)) || func_531(22)) || func_531(23))
	{
		return true;
	}
	return false;
}

bool func_531(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return MISC::IS_BIT_SET(Global_1903834.f_496[iVar0], iVar1);
}

int func_532()
{
	int iVar0;

	iVar0 = 0;
	if (Global_17418.f_55.f_61.f_602 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17418.f_55.f_61.f_602 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17418.f_55.f_61.f_602 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17418.f_55.f_61.f_602 & 16 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_533()
{
	int iVar0;

	iVar0 = 0;
	if (Global_17418.f_55.f_61.f_602 & 1048576 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17418.f_55.f_61.f_602 & 2097152 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17418.f_55.f_61.f_602 & 4194304 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17418.f_55.f_61.f_602 & 8388608 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_534(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_570(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_535(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1228(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1229() };
		if (func_1230() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var29, &Var0))
		{
			func_1231(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_257(PLAYER::PLAYER_ID());
	}
	bVar33 = func_1232();
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_801(75);
	}
	iVar35 = func_802(iParam3, 0);
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
			return func_777();
		}
		if (!func_1233(&Var0, 0))
		{
			Var36 = { func_1234(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		return Var36;
	}
	return Var0;
}

bool func_536(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if (iParam3 == -1)
	{
		return false;
	}
	func_1235(uParam4);
	switch (iParam3)
	{
		case 0:
		case 1:
			if (!func_1236(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1237(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_537(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	struct<8> Var9;
	bool bVar17;
	int iVar18;
	int iVar19;

	bVar0 = true;
	bVar1 = true;
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = INVENTORY::_INVENTORY_COMPARE_GUIDS(&uParam0, iParam4);
	bVar3 = func_768(iParam4, iParam4->f_10, 1);
	iVar4 = func_1238(*iParam4);
	bVar5 = iVar4 > Global_1295619.f_16;
	bVar6 = func_1239(*iParam4);
	bVar7 = func_1240(iParam4, -8.769617E+23f, 0) > 0;
	bVar8 = false;
	if (bVar7)
	{
		bVar8 = true;
	}
	Var9 = { func_1241(iParam4, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_19, &Var9);
	func_1242(*iParam4, &(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_33));
	bVar17 = !func_780(func_167(), 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_29, bVar17);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_30, bVar17);
	iVar18 = func_1243(bVar3, bVar5, bVar2);
	iVar19 = 3;
	switch (iVar18)
	{
		case 0:
			func_1244(iParam5, iVar19, bVar8);
			break;
		case 1:
			func_1245(iParam5, iVar19, bVar8);
			break;
		case 2:
			func_1246(iParam5, bVar6);
			break;
		case 3:
			func_1247(iParam5, iVar4);
			break;
	}
}

int func_538(int iParam0)
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

char* func_539(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_GENDER_MALE";
		case 1:
			return "HORSE_GENDER_FEMALE";
		case 2:
			return "HORSE_GENDER_GELDED";
		default:
			break;
	}
	return "";
}

bool func_540(var uParam0, float fParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1248(&uParam0, iParam4, bParam5, iParam6);
}

float func_541(int iParam0)
{
	if (iParam0 == 6.51589E-10f)
	{
		return 5.483871E-11f;
	}
	switch (iParam0)
	{
		case joaat("A_C_HORSE_AMERICANPAINT_OVERO"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_AMERICANPAINT_TOBIANO"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_AMERICANPAINT_SPLASHEDWHITE"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_AMERICANPAINT_GREYOVERO"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BLACK"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_BUCKSKIN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_ANDALUSIAN_DARKBAY"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_ANDALUSIAN_ROSEGRAY"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_ANDALUSIAN_PERLINO"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_APPALOOSA_BLANKET"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARDBLANKET"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_APPALOOSA_BROWNLEOPARD"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_APPALOOSA_LEOPARD"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_ARABIAN_BLACK"):
			return -9.45063E-35f;
		case joaat("A_C_HORSE_ARABIAN_ROSEGREYBAY"):
			return -9.45063E-35f;
		case joaat("A_C_HORSE_ARABIAN_WHITE"):
			return -9.45063E-35f;
		case joaat("A_C_HORSE_ARDENNES_BAYROAN"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_ARDENNES_STRAWBERRYROAN"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_ARDENNES_IRONGREYROAN"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_BELGIAN_BLONDCHESTNUT"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_BELGIAN_MEALYCHESTNUT"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_SEALBROWN"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_BLACK"):
			return 0.003839614f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return 0.003839614f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_GREY"):
			return 0.003839614f;
		case joaat("A_C_HORSE_KENTUCKYSADDLE_SILVERBAY"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MORGAN_BAY"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MORGAN_BAYROAN"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MORGAN_FLAXENCHESTNUT"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MORGAN_PALOMINO"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MUSTANG_GRULLODUN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MUSTANG_WILDBAY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MUSTANG_TIGERSTRIPEDBAY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NOKOTA_BLUEROAN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_NOKOTA_WHITEROAN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_NOKOTA_REVERSEDAPPLEROAN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_SHIRE_DARKBAY"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_SHIRE_LIGHTGREY"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_SORREL"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_SUFFOLKPUNCH_REDCHESTNUT"):
			return 5.696841E-06f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_BLACKRABICANO"):
			return 0.003839614f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_CHESTNUT"):
			return 0.003839614f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_DAPPLEBAY"):
			return 0.003839614f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_REDROAN"):
			return 0.003839614f;
		case joaat("A_C_HORSE_TENNESSEEWALKER_FLAXENROAN"):
			return 0.003839614f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLOODBAY"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_THOROUGHBRED_DAPPLEGREY"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_THOROUGHBRED_BRINDLE"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_THOROUGHBRED_BLACKCHESTNUT"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_TURKOMAN_DARKBAY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_TURKOMAN_GOLD"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_TURKOMAN_SILVER"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_REDROAN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_SORREL"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_GRULLODUN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_SEALBROWN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_MEALYDAPPLEBAY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_BRETON_STEELGREY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_BLUEROANOVERO"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_DUN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_BAYBRINDLE"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_SORRELOVERO"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_BAYFRAMEOVERO"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_CRIOLLO_MARBLESABINO"):
			return -3.766835E-21f;
		case -390136947:
			return -3.766835E-21f;
		case 1104566530:
			return -3.766835E-21f;
		case -1142861801:
			return -3.766835E-21f;
		case -417416199:
			return -3.766835E-21f;
		case -1460773772:
			return -3.766835E-21f;
		case 1476007840:
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_BLACK"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_WHITE"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_CREMELLO"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_GREY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_DAPPLEROSEGREY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_KLADRUBER_SILVER"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_BLACK"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPECKLEDGREY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_PIEBALDROAN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_ROSEGREY"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return -3.766835E-21f;
		case 1387035765:
			return -3.766835E-21f;
		case 506531963:
			return -3.766835E-21f;
		case 2038357529:
			return -3.766835E-21f;
		case 1599848740:
			return -3.766835E-21f;
		case 1887211198:
			return -3.766835E-21f;
		case 1645353708:
			return -3.766835E-21f;
		case 1154747978:
			return -3.766835E-21f;
		case 74569170:
			return -3.766835E-21f;
		case -2004712574:
			return -3.766835E-21f;
		case 699227695:
			return -3.766835E-21f;
		case 1514230770:
			return -3.766835E-21f;
		case 704938950:
			return -3.766835E-21f;
		case joaat("A_C_DONKEY_01"):
			return 7.75776f;
		case joaat("A_C_HORSEMULE_01"):
			return 7.75776f;
		case joaat("A_C_HORSEMULEPAINTED_01"):
			return 7.75776f;
		case joaat("A_C_HORSE_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_APPALOOSA_BLACKSNOWFLAKE"):
			return -4.485965E+27f;
		case joaat("A_C_HORSE_ARABIAN_GREY"):
			return -9.45063E-35f;
		case joaat("A_C_HORSE_ARABIAN_REDCHESTNUT"):
			return -9.45063E-35f;
		case joaat("A_C_HORSE_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -1.862467E-25f;
		case joaat("A_C_HORSE_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MUSTANG_GOLDENDUN"):
			return -3.766835E-21f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_01"):
			return 0.003839614f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_02"):
			return 3.829749E-26f;
		case joaat("A_C_HORSE_MURFREEBROOD_MANGE_03"):
			return -4.485965E+27f;
		default:
			break;
	}
	return 5.483871E-11f;
}

int func_542(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_1249());
	return iVar0;
}

int func_543(int iParam0, int iParam1, int iParam2)
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

int func_544(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_1250());
	return iVar0;
}

void func_545(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	bool bVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	if (func_790(uParam0))
	{
		Var0.f_9 = -5.45926E-19f;
		if (func_1251(*uParam0, -8.769617E+23f, &Var0, 1, -1))
		{
			if (func_623(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var14.f_1[iVar43], &vVar36))
						{
							if (vVar36.y == -4.954637E-20f)
							{
								*uParam1 = (*uParam1 + vVar36.z);
							}
							else if (vVar36.y == 4.533525E+36f)
							{
								*uParam2 = (*uParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			bVar44 = func_540(Var0, 0.001620535f, 0, -1);
			if (func_623(bVar44, 0))
			{
				Var45.f_1 = 20;
				if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var45.f_1[iVar74], &vVar67))
						{
							if (vVar67.y == -4.954637E-20f)
							{
								*uParam1 = (*uParam1 + vVar67.z);
							}
							else if (vVar67.y == 4.533525E+36f)
							{
								*uParam2 = (*uParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

int func_546(int iParam0)
{
	int iVar0;

	iVar0 = 1;
	switch (func_1252(iParam0))
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
			iVar0 = 2;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_547(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

char* func_548(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_1253(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_685(&cVar0);
}

char* func_549(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("HORSE_CLASS_RIDING"):
			return "HORSE_CLASS_RIDING";
		case joaat("HORSE_CLASS_DRAFT"):
			return "HORSE_CLASS_DRAFT";
		case joaat("HORSE_CLASS_RACE"):
			return "HORSE_CLASS_RACE";
		case joaat("HORSE_CLASS_WAR"):
			return "HORSE_CLASS_WAR";
		case joaat("HORSE_CLASS_WORK"):
			return "HORSE_CLASS_WORK";
		case joaat("HORSE_CLASS_MULTI"):
			return func_1254(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_550(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "COAT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "COAT_TOB";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "COAT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "COAT_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "COAT_PALDAP";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "COAT_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "COAT_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "COAT_LEOPBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "COAT_BRLEOP";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "COAT_LEOP";
		case joaat("BREED_ARABIAN_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "COAT_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "COAT_STRAWR";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "COAT_IRONGREYR";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "COAT_BLONDCH";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "COAT_MEALYCH";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "COAT_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "COAT_CHOCR";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "COAT_PIETOB";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "COAT_DAPDARKGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "COAT_CHPIN";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "COAT_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "COAT_AMBCHA";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "COAT_SILVERDAPPINT";
		case joaat("BREED_MORGAN_BAY"):
			return "COAT_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "COAT_BAYR";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "COAT_FLAXCH";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "COAT_PAL";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "COAT_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "COAT_TIGSTRBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "COAT_BLUER";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "COAT_WHITER";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "COAT_REVDAPR";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "COAT_LGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "COAT_BLACKRAB";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "COAT_CH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "COAT_DAPBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "COAT_FLAXR";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "COAT_BLBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "COAT_DAPGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "COAT_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "COAT_BLACKCH";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "COAT_REVDAPBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "COAT_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "COAT_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "COAT_REDR";
		case joaat("BREED_BRETON_SORREL"):
			return "COAT_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "COAT_GRULDUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "COAT_SEALBR";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "COAT_MEALYDAPBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "COAT_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "COAT_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "COAT_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "COAT_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "COAT_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "COAT_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "COAT_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "COAT_CREM";
		case joaat("BREED_KLADRUBER_GREY"):
			return "COAT_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "COAT_DAPROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "COAT_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "COAT_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "COAT_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "COAT_PIEROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "COAT_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "COAT_DAPBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "COAT_SPOTTEDTRICOLOR";
		case 1323533737:
			return "COAT_BLACKTOVERO";
		case -1159865523:
			return "COAT_BLUER";
		case 1854655826:
			return "COAT_BUCKSKINBRINDLE";
		case 1416158449:
			return "COAT_DAPGREY";
		case 577120648:
			return "COAT_BLACKOVERO";
		case 1147338535:
			return "COAT_BUCKSKIN";
		case -1712303883:
			return "COAT_CHTOVERO";
		case 406093506:
			return "COAT_REDDUNOVERO";
		case 956799610:
			return "COAT_BLACK";
		case 139264677:
			return "COAT_CH";
		case -11223392:
			return "COAT_GREY";
		case 1133580901:
			return "COAT_PERLINO";
		case joaat("BREED_DONKEY"):
			return "COAT_NONE";
		case joaat("BREED_MULE"):
			return "COAT_NONE";
		case joaat("BREED_MULE_PAINTED"):
			return "COAT_NONE";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "COAT_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "COAT_BLACKSNO";
		case joaat("BREED_ARABIAN_GREY"):
			return "COAT_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "COAT_REDCH";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "COAT_LIVERCH";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "COAT_SABLECHAMP";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "COAT_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "COAT_MAHBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "COAT_RAVBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "COAT_CHEMGOLD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "COAT_SEALBR";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "COAT_BLANKET";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "COAT_BLUER";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "COAT_BLACKRAB";
		case joaat("BREED_WINTER02_01"):
			return "COAT_SILVERBAY";
		case joaat("BREED_EAGLEFLIES"):
			return "COAT_SPLASHWHITE";
		case joaat("BREED_GANG_BILL"):
			return "COAT_BROWNR";
		case joaat("BREED_GANG_CHARLES"):
			return "COAT_GREYSNOWCAPSPOTTED";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "COAT_GREYROANSABINO";
		case joaat("BREED_GANG_DUTCH"):
			return "COAT_ALBINO";
		case joaat("BREED_GANG_HOSEA"):
			return "COAT_SILVER";
		case joaat("BREED_GANG_JAVIER"):
			return "COAT_GREYOVERO";
		case joaat("BREED_GANG_JOHN"):
			return "COAT_SILVERDARKBAY";
		case joaat("BREED_GANG_KAREN"):
			return "COAT_SMOKYBLACK";
		case joaat("BREED_GANG_KIERAN"):
			return "COAT_FLAXR";
		case joaat("BREED_GANG_LENNY"):
			return "COAT_LIGHTPALOMINO";
		case joaat("BREED_GANG_MICAH"):
			return "COAT_BLACK";
		case joaat("BREED_GANG_SADIE"):
			return "COAT_GOLDDAP";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "COAT_DARKBAYROAN";
		case joaat("BREED_GANG_SEAN"):
			return "COAT_SILVERTAILBUCKSKIN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "COAT_BRLEOP";
		case joaat("BREED_GANG_UNCLE"):
			return "COAT_SABINO";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "COAT_FEWSPOTBUCKSKIN";
		case joaat("BREED_MANGY_BACKUP"):
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

void func_551(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	struct<8> Var8;
	int iVar16;

	bVar0 = true;
	bVar1 = true;
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = INVENTORY::_INVENTORY_COMPARE_GUIDS(&uParam0, iParam4);
	bVar3 = func_768(iParam4, iParam4->f_10, 1);
	iVar4 = func_1238(*iParam4);
	bVar5 = iVar4 > Global_1295619.f_16;
	bVar6 = false;
	if (func_1240(iParam4, -8.769617E+23f, 0) > 0)
	{
		bVar6 = true;
	}
	bVar7 = true;
	if (!bVar6)
	{
		bVar7 = false;
	}
	Var8 = { func_1255(iParam4, 0, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_19, &Var8);
	func_1242(*iParam4, &(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_33));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_29, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam5 /*39*/].f_30, false);
	iVar16 = func_1243(bVar3, bVar5, bVar2);
	switch (iVar16)
	{
		case 0:
			func_1244(iParam5, iParam6, 0);
			break;
		case 1:
			func_1245(iParam5, iParam6, bVar7);
			break;
		case 2:
		case 3:
			if (bVar2)
			{
				func_1244(iParam5, iParam6, 0);
			}
			else
			{
				func_1245(iParam5, iParam6, bVar7);
			}
			break;
	}
}

struct<18> func_552(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_553(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_570(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_554(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	struct<8> Var13;
	bool bVar21;
	int iVar22;
	int iVar23;

	bVar0 = true;
	bVar1 = func_1257(func_1256(2, iParam4->f_11, 1));
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (func_1258(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar6 = INVENTORY::_INVENTORY_COMPARE_GUIDS(&uParam0, iParam4);
	bVar7 = func_768(iParam4, iParam4->f_10, 1);
	iVar8 = func_1259(*iParam4);
	bVar9 = iVar8 > Global_1295619.f_16;
	bVar10 = func_1260(*iParam4);
	bVar11 = func_1261(&uParam0, iParam4, &iVar4);
	bVar12 = func_1262(&uParam0, iParam4, &iVar5);
	Var13 = { func_1241(iParam4, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_19, &Var13);
	func_1242(*iParam4, &(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_33));
	bVar21 = !func_780(func_167(), 0, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_29, bVar21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_30, bVar21);
	iVar22 = func_1263(bVar7, bVar9, bVar6, bVar2);
	iVar23 = 3;
	switch (iVar22)
	{
		case 0:
			func_1264(iVar4, iVar5, 1, 1);
			func_1265(iParam5, iVar23, bVar11, bVar12);
			break;
		case 1:
			func_1264(iVar4, iVar5, 1, 0);
			func_1266(iParam5, iVar23, bVar11);
			break;
		case 2:
			func_1264(iVar4, iVar5, 1, 0);
			func_1267(iParam5, iVar23, bVar11);
			break;
		case 3:
			func_1268(iParam5, bVar10);
			break;
		case 4:
			func_1269(iParam5, iVar8);
			break;
	}
}

int func_555(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case joaat("HUNTERCART01"):
			return 1;
		case joaat("WAGONARMOURED01X"):
			return 1;
		default:
			break;
	}
	return -1;
}

int func_556(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case joaat("HUNTERCART01"):
			return 0;
		case joaat("WAGONARMOURED01X"):
			return 2;
		default:
			break;
	}
	return -1;
}

int func_557(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case joaat("HUNTERCART01"):
			return 0;
		case joaat("WAGONARMOURED01X"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_558(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_MAXSPEED_SLOW";
		case 1:
			return "VEHICLE_MAXSPEED_AVERAGE";
		case 2:
			return "VEHICLE_MAXSPEED_FAST";
		default:
			break;
	}
	return "";
}

char* func_559(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_ACCELERATION_SLOW";
		case 1:
			return "VEHICLE_ACCELERATION_AVERAGE";
		case 2:
			return "VEHICLE_ACCELERATION_FAST";
		default:
			break;
	}
	return "";
}

char* func_560(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_STEERING_SLUGGISH";
		case 1:
			return "VEHICLE_STEERING_AVERAGE";
		case 2:
			return "VEHICLE_STEERING_RESPONSIVE";
		default:
			break;
	}
	return "";
}

char* func_561(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case joaat("HUNTERCART01"):
			return "VEHICLE_TRADER_DESCRIPTION";
		case joaat("WAGONARMOURED01X"):
			return "VEHICLE_BOUNTY_HUNTER_DESCRIPTION";
		default:
			break;
	}
	return "";
}

void func_562(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	struct<8> Var14;
	int iVar22;

	bVar0 = true;
	bVar1 = func_1257(func_1256(2, iParam4->f_11, 1));
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_2, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if (func_1258(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar8 = INVENTORY::_INVENTORY_COMPARE_GUIDS(&uParam0, iParam4);
	bVar9 = func_768(iParam4, iParam4->f_10, 1);
	iVar10 = func_1259(*iParam4);
	bVar11 = iVar10 > Global_1295619.f_16;
	bVar12 = func_1261(&uParam0, iParam4, &iVar6);
	bVar13 = func_1262(&uParam0, iParam4, &iVar7);
	Var14 = { func_1255(iParam4, 2, 1) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_19, &Var14);
	func_1242(*iParam4, &(Global_1940239.f_1556.f_1935.f_3[iParam5 /*39*/].f_33));
	iVar22 = func_1263(bVar9, bVar11, bVar8, bVar2);
	switch (iVar22)
	{
		case 0:
			iVar5 = func_1270(iVar6, iVar7, &iVar4, 1, 1);
			func_1265(iParam5, iParam6, bVar12, bVar13);
			break;
		case 1:
			iVar5 = func_1270(iVar6, iVar7, &iVar4, 1, 0);
			func_1266(iParam5, iParam6, bVar12);
			break;
		case 2:
			iVar5 = func_1270(iVar6, iVar7, &iVar4, 1, 0);
			func_1267(iParam5, iParam6, bVar12);
			break;
		case 3:
		case 4:
			if (bVar8)
			{
				iVar5 = func_1270(iVar6, iVar7, &iVar4, 0, 0);
				func_1266(iParam5, iParam6, 0);
			}
			else
			{
				iVar5 = func_1270(iVar6, iVar7, &iVar4, 1, 0);
				func_1267(iParam5, iParam6, bVar12);
			}
			break;
	}
	func_1271(iVar5, iVar4);
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			return 4;
		case 2042309940:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_564(int iParam0)
{
	bool bVar0;
	int iVar1;

	bVar0 = func_1272(iParam0);
	if (!func_623(bVar0, 0))
	{
		return 0;
	}
	iVar1 = func_412(bVar0, 0, 8.497754E-37f);
	return iVar1;
}

int func_565(int iParam0)
{
	bool bVar0;
	int iVar1;

	if (!func_644(64))
	{
		return 0;
	}
	bVar0 = func_645(iParam0);
	if (!func_623(bVar0, 0))
	{
		return 0;
	}
	iVar1 = func_412(bVar0, 0, 8.497754E-37f);
	return iVar1;
}

Vector3 func_566(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_42() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

bool func_567(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_663() == 0)
	{
		return func_1273(iParam0);
	}
	return iParam0 <= func_880();
}

bool func_568(int iParam0, int iParam1, var uParam2, int iParam3)
{
	int iVar0;

	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

bool func_569(int iParam0, int iParam1, int iParam2)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;
	int iVar5;

	vVar0.x = iParam0;
	vVar0.f_1 = iParam2;
	iVar3 = 0;
	if (Global_1203937.f_472 != -1 && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		iVar3 = 1;
	}
	iVar4 = func_1274(vVar0);
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		vVar0.f_2 = func_1275(iVar5, vVar0);
		if (Global_1896762.f_13.f_3)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_12.f_24))
			{
				if (DATABINDING::_DATABINDING_READ_HASH(Global_1896762.f_13.f_50.f_12.f_24) != NaNf && func_1276(&vVar0))
				{
				}
				else
				{
					Jump @175; //curOff = 151
					if (func_1276(&vVar0) && iVar3 == 0)
					{
					}
					else if (func_1277(vVar0, Global_1295619, iParam1, 0))
					{
						return true;
					}
				}
				iVar5++;
				return false;
			}
		}
	}
}

int func_570(bool bParam0)
{
	if (func_663() == -1)
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

struct<4> func_571(bool bParam0)
{
	int iVar0;

	iVar0 = func_570(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_620(3.507197E-29f, func_1047(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_620(3.507197E-29f, func_1047(bParam0), 12999093, 0);
}

float func_572(int iParam0)
{
	return func_619(iParam0);
}

Vector3 func_573(bool bParam0)
{
	vector3 vVar0;

	if (!func_1278(bParam0, &vVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		vVar0.f_1 = -1.677243E+19f;
		vVar0.x = -0.1987056f;
	}
	return vVar0;
}

int func_574(bool bParam0)
{
	int iVar0;

	iVar0 = func_1279(bParam0);
	if ((iVar0 != 0 && !func_1280(func_1279(bParam0))) && !func_1281(func_1279(bParam0)))
	{
		if (!func_1282(iVar0))
		{
			return -1.982404E-33f;
		}
	}
	return func_834(bParam0);
}

void func_575(bool bParam0)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!bParam0)
	{
		if (func_1283(6))
		{
			return;
		}
	}
	bVar0 = 2.884954E+11f;
	if (func_790(&(Global_1297394.f_62)))
	{
		bVar0 = 1.007909E-10f;
	}
	iVar1 = func_656(bVar0, 0, 1, -1, 1);
	iVar2 = func_657(bVar0, iVar1, 1, 0, 0);
	iVar3 = func_657(bVar0, iVar1, 1, 0, 1);
	bVar4 = func_1284(bVar0, iVar1, 1);
	bVar5 = false;
	bVar6 = iVar2 != iVar3;
	if (iVar1 == -2.401104E+18f || (func_658(iVar1) && func_659(bVar0, 3.414007E-11f, iVar1, 1, 1) > 0))
	{
		bVar5 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_290, (bVar6 && !bVar5));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_289, (bVar5 && bVar6));
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_8632.f_284, iVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_8632.f_285, iVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_288, bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_287, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_286, true);
	if (iVar3 == 0)
	{
		func_70(MISC::VAR_STRING(2, "NET_MOONSHINE_HAVE_SHACK_COUPON"), 27.64779f);
	}
	else
	{
		func_143();
	}
}

float func_576(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 0:
			fVar0 = -7.599373E-30f;
			break;
		case 5:
			fVar0 = -2.333008f;
			break;
		case 9:
			fVar0 = 0.98206f;
			break;
		case 16:
			fVar0 = 779616.8f;
			break;
		case 12:
			fVar0 = -6.786879E-11f;
			break;
		default:
			fVar0 = -7.599373E-30f;
			break;
	}
	return fVar0;
}

void func_577(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_104, func_1285(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_103, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_103, false);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_101, func_1285(iVar0));
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_100, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_100, false);
	}
}

int func_578(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.338149E-27f;
		case 3:
			return 2.03083E-29f;
		case 4:
			return -6.696441E+21f;
		case 5:
			return 6.324832E-18f;
		case 6:
			return -1.338149E-27f;
		case 8:
			return -1.338149E-27f;
		case 9:
			return 6.324832E-18f;
		case 0:
			return -1.195654E-35f;
		case 1:
			return -4.56945E+17f;
		case 15:
			return 1.52944E+36f;
		case 16:
			return 1.52944E+36f;
		case 17:
			return 1.52944E+36f;
		case 18:
			return 470653.9f;
		case 19:
			return 6.723044E-38f;
		case 20:
			return -1.616015E+37f;
		default:
			break;
	}
	return 0;
}

void func_579(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1174.f_42, iParam0);
	if (iParam0 != 0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1174.f_43, -1.931351E+13f);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1174.f_43, 0);
	}
}

void func_580(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = -5.544348E+20f;
	uParam0->f_3 = 0;
	uParam0->f_4 = 3;
}

void func_581(bool bParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 1;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, iVar1);
}

void func_582(bool bParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 1;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, iVar1);
}

void func_583(bool bParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 1;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, iVar1);
}

void func_584(bool bParam0)
{
	var uVar0;
	int iVar1;

	iVar1 = 1;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, iVar1);
}

void func_585(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	StringCopy(&(uParam0->f_4), "", 64);
	StringCopy(&(uParam0->f_12), "", 64);
	StringCopy(&(uParam0->f_20), "", 64);
}

void func_586(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_587()
{
	Global_1940239.f_1556.f_149.f_184.f_93 = -1;
}

char* func_588()
{
	return "NS_OSK_ENTER_NAME_TITLE";
}

char* func_589()
{
	return "NS_OSK_ENTER_NAME_DESC";
}

int func_590(bool bParam0)
{
	if (func_1286() == 2)
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&Global_1960735, bParam0, 51);
	func_1287(2);
	return 1;
}

void func_591(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_592()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887.f_300.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_593(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_300 = fParam0;
	if (iParam1 != 0)
	{
		func_1288(iParam1);
	}
	if (iParam2 != 0)
	{
		func_1288(iParam2);
	}
	if (iParam3 != 0)
	{
		func_1288(iParam3);
	}
	if (iParam4 != 0)
	{
		func_1288(iParam4);
	}
	if (iParam5 != 0)
	{
		func_1288(iParam5);
	}
	if (iParam6 != 0)
	{
		func_1288(iParam6);
	}
	if (iParam7 != 0)
	{
		func_1288(iParam7);
	}
	if (iParam8 != 0)
	{
		func_1288(iParam8);
	}
	if (iParam9 != 0)
	{
		func_1288(iParam9);
	}
	if (iParam10 != 0)
	{
		func_1288(iParam10);
	}
	func_1289();
}

void func_594(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

void func_595(int iParam0)
{
	struct<2> Var0;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	Var0 = { func_819(iParam0) };
	if (!func_821(Var0))
	{
		return;
	}
	iVar2 = func_1290(Var0);
	if (iVar2 != -1)
	{
		iVar3 = Global_1205923.f_1[iVar2 /*26*/].f_3;
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
		{
			if (func_747(1048576, PLAYER::PLAYER_ID()) || func_919())
			{
				iVar4 = Global_1295611.f_2.f_4;
				if (!func_567(iVar4))
				{
					func_1291(iVar2, 131072);
				}
				else
				{
					func_1291(iVar2, 32768);
				}
				return;
			}
			else if (func_1070())
			{
				func_1291(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && func_1292(iVar2, Var0, iVar3))
		{
			iVar5 = func_1293(iVar2);
			if (iVar5 != -1 && func_1200(iVar5) == -4.537018E+10f)
			{
				iVar6 = func_1294(iVar5);
				if (!func_1295(iVar6))
				{
					func_1296(iVar6);
					func_1297(func_1294(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_596(int iParam0, int iParam1, var uParam2)
{
	struct<14> Var0;
	struct<2> Var14;
	int iVar16;
	struct<19> Var17;
	vector3 vVar36;
	int iVar39;

	if (iParam1 == Global_1295619.f_10)
	{
		return;
	}
	if (!func_1298(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var14 = -1;
	Var14.f_1 = -1;
	Var17.f_12 = -1;
	Var17.f_12.f_1 = -1;
	Var17.f_14 = 255;
	Var17.f_15 = 255;
	vVar36 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1295619.f_10;
	iVar39 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10));
	switch (iParam0)
	{
		case 2:
			Var14 = { func_1300(5, func_1299(0)) };
			Var17.f_4 = 80;
			break;
		case 1:
			Var14 = { func_1300(4, func_1299(0)) };
			Var17.f_4 = 81;
			break;
	}
	func_1301(&iVar16, iParam1, 1);
	Var17 = 1;
	Var17.f_1 = PLAYER::PLAYER_ID();
	Var17.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var17.f_6 = uParam2;
	Var17.f_9 = iVar39;
	Var17.f_16 = Global_1295619.f_10;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_955(Var0.f_5))
	{
		return;
	}
	if (!func_1302(iParam1))
	{
		return;
	}
	func_1303(Var14, vVar36, 0f, 0, 0, iVar16, Var17);
	func_1301(&iVar16, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var17.f_4 = 84;
			break;
		case 1:
			Var17.f_4 = 83;
			break;
	}
	Var17.f_7 = iParam1;
	Var17 = 0;
	func_1304(Var17, iVar16, 0, 0);
	SCRIPTS::_CLEAR_ALL_PLAYER_BITS(&iVar16);
	func_1305(Var0.f_5, &iVar16);
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&iVar16))
	{
		return;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	Var0.f_8 = { Var14 };
	Var0.f_7 = iVar16;
	Var0.f_11 = iParam1;
	Var0.f_13 = 1;
	Var0.f_12 = iVar39;
	func_1306(&Var0, &iVar16);
	func_1304(Var17, iVar16, 0, 0);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_147();
}

void func_597(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;
	struct<19> Var1;

	fVar0 = func_736(iParam1);
	if (bParam3)
	{
		SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&fVar0, PLAYER::PLAYER_ID());
	}
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_4 = iParam0;
	Var1.f_16 = iParam2;
	func_1304(Var1, fVar0, 0, 0);
}

void func_598(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<7> Var3;

	if (!func_1307(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return;
	}
	iVar2 = iParam0;
	func_1308(&iVar0, Global_1295619.f_10);
	func_1308(&iVar1, GANG::NETWORK_GET_GANG_ID(iParam0));
	Var3.f_5 = PLAYER::PLAYER_ID();
	Var3.f_6 = iParam0;
	Var3.f_4 = 2;
	func_1309(&Var3, &iVar0);
	Var3.f_4 = 3;
	func_1309(&Var3, &iVar1);
	func_1310(&(Global_1108965.f_34[iVar2 /*11*/].f_8), 2);
	Global_1108965.f_34.f_611 = 255;
	func_1311(iVar2);
}

void func_599(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1312(iParam0);
	}
	else
	{
		func_1313(iParam0);
	}
}

void func_600()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	struct<2> Var8;
	struct<19> Var19;
	float fVar38;
	int iVar39;

	iVar6 = PLAYER::PLAYER_ID();
	Var8 = 5;
	Var8.f_1 = 255;
	Var8.f_1.f_2 = 255;
	Var8.f_1.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2.f_2 = 255;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (iVar0 >= 5)
		{
		}
		else
		{
			if (!func_1314(iVar3))
			{
			}
			else
			{
				iVar5 = PLAYER::INT_TO_PLAYERINDEX(iVar3);
				fVar4 = BUILTIN::VDIST(func_1315(iVar5), func_1315(iVar6));
				if (fVar4 > (Global_1901671.f_170.f_23 * Global_1149417.f_4786))
				{
				}
				else
				{
					iVar7 = func_1316(iVar3);
					func_1317(&(Var8[iVar0 /*2*/]), iVar7, iVar3);
					iVar1 = (iVar1 + Var8[iVar0 /*2*/].f_1);
					iVar0++;
				}
			}
			iVar3++;
		}
	}
	if (iVar0 <= 0)
	{
		Var19.f_12 = -1;
		Var19.f_12.f_1 = -1;
		Var19.f_14 = 255;
		Var19.f_15 = 255;
		Var19.f_4 = 108;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&fVar38, PLAYER::PLAYER_ID());
		func_1304(Var19, fVar38, 0, 0);
		return;
	}
	iVar39 = func_1318(1, iVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar39 = (iVar39 - Var8[iVar2 /*2*/].f_1);
		if (iVar39 <= 0)
		{
			func_1319(Var8[iVar2 /*2*/], iVar7);
			return;
		}
		iVar2++;
	}
}

void func_601(int iParam0)
{
	int iVar0;

	iVar0 = GANG::_0xE4C64CD37CB176AA(iParam0);
	GANG::_0xB22B1D9F74095382(iParam0);
	if (!func_229(iVar0))
	{
		return;
	}
}

void func_602(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	if (!func_1320(iVar0))
	{
		return;
	}
}

void func_603(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	if (bParam1)
	{
		if (func_718())
		{
			return;
		}
		func_1321(iParam0);
		func_723(0);
		func_724(0);
	}
	else
	{
		NETWORK::_0x3AA0CDC63696166D(iVar0);
	}
}

void func_604(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 179;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 19, 25, &uParam1);
	func_1322(uParam0);
}

void func_605(int iParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(Global_1940239.f_245.f_5, iParam0);
	func_402(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	func_1323((Global_1940239.f_245.f_1306 - 1));
}

char* func_606(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

void func_607(int iParam0, int iParam1)
{
	struct<30> Var0;
	struct<2> Var30;
	int iVar32;
	int iVar33;
	int iVar34;

	Var0 = { func_1324(iParam0) };
	Var30 = { Var0.f_3 };
	iVar32 = func_1325(Var30);
	iVar33 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iParam0 /*43*/].f_29);
	iVar34 = (Global_1295619.f_16 - (iVar33 - (Global_1901671.f_316.f_177 / 1000)));
	switch (iVar32)
	{
		case 20:
			func_1326(DATABINDING::_0xE6AAB897120492D6(iParam1, func_58(92)));
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(-1.624354E-16f, Var0.f_11.f_1, PLAYER::PLAYER_ID(), 0, iVar34);
			break;
		case 21:
			func_1326(DATABINDING::_0xE6AAB897120492D6(iParam1, func_58(92)));
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(3.836055E+37f, Var0.f_11.f_1, PLAYER::PLAYER_ID(), 0, iVar34);
			break;
		case 28:
			func_1326(DATABINDING::_0xE6AAB897120492D6(iParam1, func_58(92)));
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(1.422028E+12f, Var0.f_11.f_1, PLAYER::PLAYER_ID(), 0, iVar34);
			break;
	}
}

void func_608(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	SCRIPTS::_CLEAR_PLAYER_BIT_AT_INDEX(&(Global_1235672.f_9085.f_8), iParam0);
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1235672.f_9085.f_14)
	{
		if (Global_1235672.f_9085.f_9[iVar1 /*4*/] == iVar0)
		{
			Global_1235672.f_9085.f_9[iVar1 /*4*/].f_2 = 1;
			Global_1235672.f_9085.f_9[iVar1 /*4*/].f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

void func_609(int iParam0)
{
	struct<12> Var0;

	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 3;
	Var0.f_9 = PLAYER::PLAYER_ID();
	Var0.f_10 = iParam0;
	Var0.f_7 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var0.f_8 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	func_1327(&Var0);
}

struct<2> func_610(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

int func_611()
{
	int iVar0;
	int iVar1;

	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return 0;
	}
	func_538(iVar0);
	return iVar1;
}

int func_612()
{
	int iVar0;
	int iVar1;
	struct<18> Var2;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return 0;
	}
	func_538(iVar0);
	return iVar1;
}

bool func_613(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_614(int iParam0, int iParam1)
{
	func_1328(iParam0, iParam1);
}

var func_615()
{
	return Global_1149157.f_143;
}

void func_616(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = uParam1->f_2[uParam1->f_1];
	}
	uParam0->f_8 = 1;
	StringCopy(&(uParam0->f_16), MISC::VAR_STRING(0, iParam2), 64);
	uParam0->f_24 = 3.347692E+13f;
	uParam0->f_25 = -1.367564E-05f;
	if (func_1329(iParam2, &(uParam1->f_2)))
	{
		uParam0->f_26 = 1;
		uParam0->f_7 = 9.438405E-38f;
		uParam0->f_34 = 1;
	}
	else
	{
		uParam0->f_26 = 0;
		uParam0->f_7 = -1.99721E-22f;
		uParam0->f_34 = 0;
	}
	uParam0->f_27 = 1.99287E-25f;
	uParam0->f_28 = -1.69368E-12f;
	if (iVar0 == iParam2)
	{
		uParam0->f_29 = 1;
		uParam0->f_33 = -1.460949E+32f;
	}
	else
	{
		uParam0->f_29 = 0;
		uParam0->f_33 = 3.681923E-10f;
	}
	if (bParam3)
	{
		uParam0->f_30 = -1.245777E+23f;
		if (func_1330(uParam1))
		{
			uParam0->f_31 = 1;
		}
		else
		{
			uParam0->f_31 = 0;
		}
	}
	else
	{
		uParam0->f_30 = -4.782433E-07f;
		uParam0->f_31 = 1;
	}
	uParam0->f_6 = -7.018454E-09f;
	uParam0->f_4 = 1.608566E+13f;
	uParam0->f_5 = -7.018454E-09f;
	uParam0->f_32 = -1.51842E+20f;
	uParam0->f_35 = 7485.396f;
}

void func_617(var uParam0, int iParam1, char[32] cParam2, struct<36> Param10)
{
	func_1331(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_58(15), &(Param10.f_16));
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(21), Param10.f_24);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(22), Param10.f_25);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(23), Param10.f_26);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(27), Param10.f_27);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(28), Param10.f_28);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(29), Param10.f_29);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(72), Param10.f_30);
	uParam0->f_27 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(73), Param10.f_31);
	uParam0->f_28 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(75), Param10.f_32);
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(68), Param10.f_33);
	uParam0->f_30 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(69), Param10.f_34);
	uParam0->f_31 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(71), Param10.f_35);
}

char* func_618(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMOTE_CATEGORY_NAME_ACTIONS";
		case 1:
			return "EMOTE_CATEGORY_NAME_ANTAGONIZE";
		case 2:
			return "EMOTE_CATEGORY_NAME_REACTIONS";
		case 3:
			return "EMOTE_CATEGORY_NAME_GREET";
		default:
			break;
	}
	return "EMOTE_CATEGORY_INVALID";
}

float func_619(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.57813E+14f;
		case 1:
			return -1.644837E+29f;
		case 2:
			return NaNf;
		case 3:
			return -1.48142E+30f;
		default:
			break;
	}
	return -5.45926E-19f;
}

struct<4> func_620(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_623(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_570(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_621(var uParam0, struct<4> Param1)
{
	struct<11> Var0;
	int iVar14;
	int iVar15;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(Param1, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10)
	{
		return 0;
	}
	iVar14 = func_1333(Var0.f_9);
	if (iVar14 < 0 || iVar14 > (4 - 1))
	{
		return 0;
	}
	if (func_1334(uParam0, iVar14))
	{
		return 0;
	}
	iVar15 = func_1335(&Param1, 1, 1);
	func_1336(uParam0, iVar14, iVar15);
	if (iVar15 == -1)
	{
		return 0;
	}
	uParam0->f_8[iVar14 /*12*/].f_2 = Var0.f_4;
	uParam0->f_8[iVar14 /*12*/].f_3 = 0;
	return 1;
}

int func_622(var uParam0, struct<4> Param1)
{
	struct<11> Var0;
	int iVar14;
	int iVar15;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(Param1, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!Var0.f_10)
	{
		return 0;
	}
	iVar14 = func_1333(Var0.f_9);
	if (iVar14 < 0 || iVar14 > (4 - 1))
	{
		return 0;
	}
	if (func_1334(uParam0, iVar14))
	{
		return 0;
	}
	iVar15 = func_1335(&Param1, 0, 1);
	func_1336(uParam0, iVar14, iVar15);
	if (iVar15 == -1)
	{
		return 0;
	}
	uParam0->f_8[iVar14 /*12*/].f_2 = Var0.f_4;
	uParam0->f_8[iVar14 /*12*/].f_3 = 1;
	return 1;
}

bool func_623(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_624(var uParam0, bool bParam1)
{
	int iVar0;

	if (!func_623(bParam1, 0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_2[iVar0] == bParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_625(var uParam0, int iParam1, bool bParam2)
{
	return func_1337(uParam0, iParam1, bParam2);
}

int func_626(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 3)
	{
		return 0;
	}
	uParam0->f_2[iParam1] = 0;
	func_1338(uParam0);
	return 1;
}

int func_627(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return -9.34147E+17f;
		case 8:
			return -1.028991E+08f;
		case 9:
			return -5.313472E-11f;
		case 10:
			return -1.892984E-10f;
		case 11:
			return -2.452279E+08f;
		default:
			break;
	}
	return 0;
	return 0;
}

char* func_628(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_DEFAULT");
		case 1:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_CASUAL");
		case 2:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_CRAZY");
		case 3:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_FLAMBOYANT");
		case 4:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_GUNSLINGER");
		case 5:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_REFINED");
		case 6:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_SILENT");
		case 7:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_GREENHORN");
		case 8:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_VETERAN");
		case 9:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_EASYRIDER");
		case 10:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_DRUNK");
		case 11:
			return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_INQUISITIVE");
		default:
			break;
	}
	return MISC::VAR_STRING(2, "PLAYER_WALK_TYPES_DEFAULT");
}

void func_629(var uParam0, int iParam1, char[32] cParam2, struct<31> Param10)
{
	func_1339(uParam0, iParam1, cParam2, Param10);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "dynamic_list_item_walk_enum", Param10.f_30);
}

void func_630(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 >= 12)
	{
		if (iParam1 != 13 && iParam1 != 0)
		{
			PED::_SET_PED_BLACKBOARD_BOOL(Global_33, func_1340(iParam1), false, -1);
		}
		return;
	}
	if (iParam1 != 0 && iParam1 != 12)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, func_1340(iParam1), false, -1);
	}
	if (iParam0 != 0 && iParam0 < 12)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, func_1340(iParam0), true, -1);
	}
}

void func_631(int iParam0)
{
	if (iParam0 >= 12 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_17418.f_55.f_664.f_1783 = iParam0;
}

int func_632(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4.169714E-28f;
		case 1:
			return -1.497943E-34f;
		case 2:
			return 4.924363E-19f;
		case 3:
			return 0.0001471608f;
		case 4:
			return 5.519975E-19f;
		case 5:
			return -6.105213E+26f;
		default:
			break;
	}
	return 0;
	return 0;
}

char* func_633(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_A");
		case 1:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_B");
		case 2:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_C");
		case 3:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_D");
		case 4:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_E");
		case 5:
			return MISC::VAR_STRING(2, "KIT_EMOTE_TWIRL_GUN_VAR_F");
		default:
			break;
	}
	return MISC::VAR_STRING(2, "WEAPON_EMOTE_VARIATION_BASE");
}

void func_634(var uParam0, int iParam1, char[32] cParam2, struct<31> Param10)
{
	func_1339(uParam0, iParam1, cParam2, Param10);
	uParam0->f_26 = DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "dynamic_list_item_spin_enum", Param10.f_30);
}

void func_635()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar3 = -4.931674E+23f;
	if (iVar3 == 0)
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 6)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iVar1 /*27*/].f_8, -1.99721E-22f);
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar2 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar0);
		if (iVar2 == 0)
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 6)
			{
				if (iVar2 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(iVar3, iVar1))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iVar1 /*27*/].f_22, true);
					DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8450.f_4[iVar1 /*27*/].f_8, 9.438405E-38f);
				}
				else
				{
					iVar1++;
				}
			}
		}
		iVar0++;
	}
}

void func_636()
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;

	fVar0 = -4.931674E+23f;
	iVar4 = 0;
	bVar5 = false;
	iVar2 = 0;
	while (iVar2 < 4)
	{
		if (iVar2 < 0)
		{
		}
		else
		{
			iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, iVar2);
			if (iVar4 == -1 || iVar4 == 0)
			{
				bVar5 = true;
			}
			else
			{
				iVar2++;
			}
			iVar1 = 0;
			while (iVar1 < 6)
			{
				iVar3 = iVar1;
				iVar2 = WEAPON::_GET_WEAPON_EMOTE_VARIATION(Global_33, WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar0, iVar3));
				if (bVar5)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iVar3 /*27*/].f_10, true);
				}
				else if (iVar2 != -2)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iVar3 /*27*/].f_10, true);
				}
				else
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_4[iVar3 /*27*/].f_10, false);
				}
				iVar1++;
			}
		}
	}
}

void func_637()
{
	int iVar0;
	float fVar1;
	struct<2> Var2;
	int iVar4;

	fVar1 = -4.931674E+23f;
	Var2 = { func_710(-0.4568987f, -2.788724E+14f) };
	iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, 0);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar4 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar1, iVar0))
		{
			STATS::STAT_ID_SET_INT(&Var2, iVar0, true);
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 == 6)
	{
		STATS::STAT_ID_SET_INT(&Var2, -1, true);
	}
	Var2 = { func_710(-0.4568987f, 1.234127E-19f) };
	iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, 1);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar4 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar1, iVar0))
		{
			STATS::STAT_ID_SET_INT(&Var2, iVar0, true);
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 == 6)
	{
		STATS::STAT_ID_SET_INT(&Var2, -1, true);
	}
	Var2 = { func_710(-0.4568987f, -3.463177E+37f) };
	iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, 2);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar4 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar1, iVar0))
		{
			STATS::STAT_ID_SET_INT(&Var2, iVar0, true);
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 == 6)
	{
		STATS::STAT_ID_SET_INT(&Var2, -1, true);
	}
	Var2 = { func_710(-0.4568987f, 4.967321f) };
	iVar4 = WEAPON::_GET_PED_GUN_SPINNING_HASH_FROM_WEAPON_EMOTE_VARIATION(Global_33, 3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (iVar4 == WEAPON::_GET_WEAPON_GUN_SPINNING_WEAPON_EMOTE_TRICK_TYPE_HASH(fVar1, iVar0))
		{
			STATS::STAT_ID_SET_INT(&Var2, iVar0, true);
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar0 == 6)
	{
		STATS::STAT_ID_SET_INT(&Var2, -1, true);
	}
}

void func_638(int iParam0)
{
	func_1341(8192);
	if (Global_1072759.f_28313.f_10 == iParam0 || Global_1072759.f_28313.f_9 == iParam0)
	{
		return;
	}
	Global_1072759.f_28313.f_10 = iParam0;
	if (func_1342())
	{
		TASK::_TASK_EMOTE_OUTRO(Global_33);
	}
}

bool func_639(var uParam0, var uParam1)
{
	struct<13> Var0;
	int iVar14;
	int iVar15;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 6;
	Var0.f_10 = Global_1901671.f_316.f_180;
	func_1305(6, &iVar14);
	if (!func_955(6))
	{
		return false;
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&iVar14))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar15 = 0;
	if (iVar15 < 0 || iVar15 >= 16)
	{
		iVar15 = 0;
	}
	Var0.f_8 = { func_1343(Global_1108965[0 /*17*/][iVar15], 3) };
	Var0.f_7 = iVar14;
	Var0.f_12 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10));
	func_1306(&Var0, &iVar14);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_147();
	return true;
}

bool func_640(var uParam0, var uParam1)
{
	struct<13> Var0;
	int iVar14;
	int iVar15;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 4;
	Var0.f_10 = Global_1901671.f_316.f_180;
	func_1305(4, &iVar14);
	if (!func_955(4))
	{
		return false;
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&iVar14))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar15 = 0;
	if (iVar15 < 0 || iVar15 >= 16)
	{
		iVar15 = 0;
	}
	Var0.f_8 = { func_1300(3, iVar15) };
	Var0.f_7 = iVar14;
	Var0.f_12 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10));
	func_1306(&Var0, &iVar14);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_147();
	return true;
}

bool func_641(var uParam0, var uParam1)
{
	struct<13> Var0;
	int iVar14;
	int iVar15;

	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 5;
	Var0.f_10 = Global_1901671.f_316.f_180;
	func_1305(5, &iVar14);
	if (!func_955(5))
	{
		return false;
	}
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&iVar14))
	{
		return false;
	}
	Var0.f_6 = PLAYER::PLAYER_ID();
	iVar15 = 0;
	Var0.f_8 = { func_1300(3, iVar15) };
	Var0.f_7 = iVar14;
	Var0.f_12 = NETWORK::GET_UNIQUE_INT_FOR_PLAYER(GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10));
	func_1306(&Var0, &iVar14);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, true, false);
	func_147();
	return true;
}

bool func_642(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_1344(iParam0);
	iVar1 = func_1345(iVar0, Global_34);
	iVar2 = func_1346(iVar0, iVar1);
	*uParam1 = { func_1347(iVar0, iVar1, iVar2) };
	if (func_821(*uParam1))
	{
		func_1348(iVar0, iVar1, iVar2, 0);
		return true;
	}
	return false;
}

void func_643(int iParam0, struct<2> Param1, int iParam3)
{
	int iVar0;

	if (func_821(Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_1))
	{
		return;
	}
	if (Global_1109780.f_193[Global_1295619 /*8*/].f_2 != -1 && Global_1109780.f_193[Global_1295619 /*8*/].f_2 != iParam0)
	{
		return;
	}
	Global_1109780.f_193[Global_1295619 /*8*/].f_2 = iParam0;
	Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109780.f_193[Global_1295619 /*8*/].f_2.f_3 = iParam3;
	}
	iVar0 = func_1349(Global_1295619.f_5);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1350(6);
	}
}

bool func_644(int iParam0)
{
	return func_613(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_73, iParam0);
}

bool func_645(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -9.070907E-33f;
		case 7:
			return -5.155609E+33f;
		default:
			break;
	}
	return false;
}

bool func_646(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_412(bParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_567(iVar0);
	}
	return bVar1;
}

char* func_647(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GC_GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "GC_BAYOU_DIST";
			case joaat("BIG_VALLEY_CAMP"):
				return "GC_BIG_VALLEY_DIST";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "GC_CUMBERLAND_FOREST_DIST";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GC_GREAT_PLAINS_DIST";
			case joaat("HEARTLAND_CAMP"):
				return "GC_HEARTLANDS_DIST";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "GC_ROANOKE_RIDGE_DIST";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "GC_SCARLETT_MEADOWS_DIST";
			case joaat("TALL_TREES_CAMP"):
				return "GC_TALL_TREES_DIST";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GC_GAPTOOTH_RIDGE_DIST";
			case joaat("RIO_BRAVO_CAMP"):
				return "GC_RIO_BRAVO_DIST";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "GC_CHOLLA_SPRINGS_DIST";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case joaat("GRIZZLIES_CAMP"):
				return "GRIZZLIES_DIST";
			case joaat("BAYOU_NAWAS_CAMP"):
				return "BAY";
			case joaat("BIG_VALLEY_CAMP"):
				return "BGV";
			case joaat("CUMBERLAND_FOREST_CAMP"):
				return "CML";
			case joaat("GREAT_PLAINS_CAMP"):
				return "GRT";
			case joaat("HEARTLAND_CAMP"):
				return "HRT";
			case joaat("ROANOKE_RIDGE_CAMP"):
				return "ROA";
			case joaat("SCARLETT_MEADOWS_CAMP"):
				return "SCM";
			case joaat("TALL_TREES_CAMP"):
				return "TAL";
			case joaat("GAPTOOTH_RIDGE_CAMP"):
				return "GAP";
			case joaat("RIO_BRAVO_CAMP"):
				return "RIO";
			case joaat("CHOLLA_SPRINGS_CAMP"):
				return "CHO";
			case joaat("HENNIGANS_STEAD_CAMP"):
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

bool func_648(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_1351())
	{
		return false;
	}
	if (func_1352(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_882(iParam3, 1))
	{
		return false;
	}
	if (func_1353())
	{
		return false;
	}
	if (func_644(64))
	{
		if (!func_646(func_645(Param0), 1, 8.497754E-37f))
		{
			return false;
		}
	}
	return true;
}

void func_649(int iParam0)
{
	Global_1142409.f_2027.f_5 = iParam0;
}

bool func_650(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_882(0, 1))
	{
		return false;
	}
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33 = { vParam0 };
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_3 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	func_653();
	if (iParam3 == 1)
	{
		func_1354(2);
	}
	else
	{
		Global_1147168.f_330.f_6 = 1;
		func_1355(2);
	}
	if (!func_1356(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
	{
		func_1355(8);
		func_1357();
	}
	if (!func_939(4) && (func_939(8) || func_939(16)))
	{
		func_1354(4);
	}
	else
	{
		func_1355(4);
	}
	if (func_613(Global_1147168.f_8, 1))
	{
		func_1354(1);
	}
	else
	{
		func_1355(1);
	}
	func_652(6);
	return true;
}

void func_651(int iParam0)
{
	float fVar0;

	if (!func_644(64))
	{
		return;
	}
	switch (iParam0)
	{
		case joaat("BAYOU_NAWAS_CAMP"):
			fVar0 = -658567.7f;
			break;
		case joaat("BIG_VALLEY_CAMP"):
			fVar0 = -6.633661E+09f;
			break;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			fVar0 = 1.598184E-12f;
			break;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			fVar0 = -3.118866E+30f;
			break;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			fVar0 = -2.23047E+26f;
			break;
		case joaat("GREAT_PLAINS_CAMP"):
			fVar0 = 2.254807E-31f;
			break;
		case joaat("GRIZZLIES_CAMP"):
			fVar0 = 3.042425E-27f;
			break;
		case joaat("HEARTLAND_CAMP"):
			fVar0 = 3.204831E-34f;
			break;
		case joaat("HENNIGANS_STEAD_CAMP"):
			fVar0 = -8.605496E+36f;
			break;
		case joaat("RIO_BRAVO_CAMP"):
			fVar0 = 5.683121E-11f;
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
			fVar0 = 3.597856E-15f;
			break;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			fVar0 = 2.814903E-14f;
			break;
		case joaat("TALL_TREES_CAMP"):
			fVar0 = 1.113392E+23f;
			break;
		default:
			return;
	}
	func_711(func_710(4.881781E+08f, fVar0), 1);
}

void func_652(int iParam0)
{
	Global_1142409.f_2019 = iParam0;
}

void func_653()
{
	Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4 = 0;
}

void func_654(vector3 vParam0)
{
	vector3 vVar0;

	Global_17418.f_55.f_4 = vParam0.x;
	Global_17418.f_55.f_4.f_1 = vParam0.y;
	Global_17418.f_55.f_4.f_2 = vParam0.z;
	if (!func_1358(-7.437896E-28f, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_1359() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_1360(vParam0, 1) == -1)
		{
		}
	}
}

void func_655(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_656(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1364(func_1362(bParam0, 0), iParam1, bParam2, iParam3, func_1363(bParam0));
	}
	if (func_1365(bParam0, bParam4) || func_1366(bParam0))
	{
		iParam1 = 0.003804697f;
	}
	else if (func_1363(bParam0) && (func_1367(bParam0, &iVar0) || func_1368(bParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_1154(bParam0, -2.401104E+18f);
		bVar2 = func_1154(bParam0, -982726.7f);
		if (bVar1 && !bVar2)
		{
			iParam1 = -2.401104E+18f;
		}
		else if (bVar2 && bVar1)
		{
			if (func_1369())
			{
				iParam1 = -2.401104E+18f;
			}
			else
			{
				iParam1 = -982726.7f;
			}
		}
		else if (bVar2)
		{
			iParam1 = -982726.7f;
		}
		else if (func_1370(15) && func_1154(bParam0, 1.109321E-25f))
		{
			iParam1 = 1.109321E-25f;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_657(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (!func_623(bParam0, 0))
	{
		Global_1051832.f_81 = 0;
		Global_1051832.f_46 = 0;
		return 0;
	}
	bVar1 = func_1371(bParam0, &bVar0);
	if ((bParam2 && bVar1) || ((func_1369() && bVar1) && iParam1 == 0))
	{
		if (func_1372(bVar0, 0.003804697f, 0) && !func_1373(bVar0, 0.003804697f))
		{
			Global_1051832.f_46 = 0;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
		else if (func_1372(bVar0, -2.401104E+18f, 0))
		{
			if (bParam3)
			{
				iVar2 = func_1374(bVar0, -2.401104E+18f, 0, 1);
			}
			else
			{
				iVar2 = func_1375(func_1374(bVar0, -2.401104E+18f, 0, 1));
			}
			Global_1051832.f_46 = iVar2;
			Global_1051832.f_81 = bParam0;
			return Global_1051832.f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_656(bParam0, iVar3, 1, -1, 1);
	}
	bVar4 = false;
	if (func_1376(bParam0))
	{
		bVar4 = func_1377(bParam0);
	}
	else if (func_1378(bParam0))
	{
		bVar4 = func_1379(bParam0);
	}
	else if (func_1380(bParam0))
	{
		bVar4 = func_1381(bParam0);
	}
	else if (func_1382(bParam0))
	{
		bVar4 = func_1383(bParam0);
	}
	if (bVar4 != 0)
	{
		iVar2 = func_1374(bVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_658(iVar3))
		{
			if (func_1384(bVar4, 3.414007E-11f, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar5) && !bParam3)
		{
			iVar2 = func_1375(iVar2);
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
		iVar2 = func_1157(bParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_658(iVar3))
		{
			if (func_659(bParam0, 3.414007E-11f, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -2.401104E+18f || bVar6) && !bParam3)
		{
			iVar2 = func_1375(iVar2);
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

bool func_658(int iParam0)
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

int func_659(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1384(func_1362(bParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_1385(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

bool func_660(int iParam0)
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

void func_661(int iParam0, int iParam1, int iParam2)
{
	Global_1051832.f_4486.f_3 = iParam0;
	Global_1051832.f_4486.f_4 = iParam1;
	Global_1051832.f_4486.f_5 = iParam2;
}

void func_662(int iParam0)
{
	Global_1051832.f_4486 = iParam0;
}

int func_663()
{
	return Global_1572887.f_14;
}

void func_664(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<13> Var0;

	if (ENTITY::_IS_ENTITY_FROZEN(Global_1295619.f_3))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		if (bParam2)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(Global_1295619.f_3, true);
		}
		if (bParam3)
		{
			PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 243, true);
		}
		Var0 = PLAYER::PLAYER_PED_ID();
		Var0.f_1 = iParam0;
		Var0.f_2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && WEAPON::IS_WEAPON_MELEE_WEAPON(iParam1));
		func_1386(&Var0, &(Global_1102813.f_3599));
		PED::_FORCE_PED_DEATH(PLAYER::PLAYER_PED_ID(), iParam0, iParam1);
	}
}

bool func_665(var uParam0, bool bParam1)
{
	int iVar0;

	if (func_420(Global_1295619.f_10))
	{
		if (func_424(PLAYER::PLAYER_ID()) == 0)
		{
			return false;
		}
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		return func_529(iVar0, uParam0, bParam1);
	}
	else
	{
		if (bParam1)
		{
			if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
			{
				return false;
			}
			if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
			{
				return false;
			}
		}
		return func_225(Global_1295619.f_10, uParam0, bParam1);
	}
	return false;
}

void func_666()
{
	Global_1940239.f_1556.f_149.f_2 = 0;
}

void func_667()
{
	Global_1940239.f_1556.f_149.f_57 = 0;
}

bool func_668()
{
	if (func_1387() >= 1 || POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() >= 1)
	{
		return true;
	}
	return false;
}

bool func_669()
{
	int iVar0;

	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (Global_1149417.f_4920[iVar0 /*3*/].f_1 && !Global_1149417.f_4920[iVar0 /*3*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_670(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_671()
{
	return func_439(Global_1572887.f_8, 1);
}

void func_672(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_673()
{
	return Global_1572887.f_72;
}

int func_674()
{
	if (!func_671())
	{
		return -1;
	}
	return Global_1572887.f_72.f_9;
}

var func_675()
{
	return Global_1572887.f_72.f_10;
}

struct<2> func_676()
{
	return Global_1572887.f_72.f_11;
}

var func_677()
{
	return Global_1572887.f_72.f_39;
}

Vector3 func_678()
{
	return Global_265213.f_122484.f_80.f_22;
}

void func_679(bool bParam0, char* sParam1, char* sParam2, var uParam3, int iParam4)
{
	if (NETWORK::_NETWORK_SEND_SESSION_INVITE(bParam0, sParam2, uParam3, 11, 0, iParam4))
	{
	}
	func_734("NJ_INVITE_SENT", sParam1, 4.808429E-35f);
	func_1388(uParam3);
}

int func_680()
{
	return func_1389(Global_1149157.f_137);
}

bool func_681(int iParam0)
{
	return func_1391(func_1390()) == iParam0;
}

bool func_682(int iParam0)
{
	return iParam0 == 2;
}

bool func_683(int iParam0, int iParam1)
{
	if (iParam0 != Global_1149315)
	{
		return false;
	}
	if (MINIGAME::_0xBEA7D3CB47E1479C())
	{
		return false;
	}
	if (!MINIGAME::_0x910B088E51A511AC())
	{
		return false;
	}
	if (Global_1149315.f_101 == 0)
	{
		if (MINIGAME::_0x9DD95B405AB4983E(&(Global_1149315.f_66), Global_1149315.f_99))
		{
			Global_1149315.f_101 = 1;
		}
	}
	return Global_1149315.f_101;
}

int func_684(int iParam0, var uParam1)
{
	int iVar0;

	if (!func_34(*uParam1))
	{
		return 0;
	}
	if (iParam0 != Global_1149315 || Global_1149315.f_101 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1149315.f_99)
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1149315.f_1[iVar0 /*2*/]), uParam1))
		{
			return Global_1149315.f_66[iVar0];
		}
		iVar0++;
	}
	return 0;
}

char[] func_685(char[4] cParam0)
{
	return cParam0;
}

bool func_686()
{
	return Global_1896762.f_13.f_4;
}

void func_687()
{
	Global_1896762.f_13.f_37 = 0;
	Global_1896762.f_13.f_37.f_2 = 0;
	Global_1896762.f_13.f_37.f_1 = 0;
	StringCopy(&(Global_1896762.f_13.f_37.f_5), "", 64);
}

struct<8> func_688(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_689(int iParam0)
{
	Global_1896762.f_13.f_4 = iParam0;
}

void func_690(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

bool func_691(var uParam0)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	struct<23> Var4;
	char* sVar67;
	struct<2> Var68;
	int iVar70;
	struct<14> Var71;

	if (!func_227(uParam0))
	{
		return false;
	}
	bVar0 = true;
	bVar2 = func_421();
	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar3);
		Var4.f_22 = 10;
		if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var4))
		{
			func_857(uParam0);
			return false;
		}
		uParam0->f_29 = { Var4.f_19 };
		bVar0 = true;
		iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29));
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			uParam0->f_1 = GANG::NETWORK_GET_GANG_ID(iVar1);
		}
		if (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) || !MISC::IS_ORBIS_VERSION())
		{
			if (bVar0)
			{
				sVar67 = PLAYER::GET_PLAYER_NAME(iVar1);
			}
			else
			{
				sVar67 = func_1392(Var4);
			}
			if (func_1393(sVar67, &(Var4.f_1)))
			{
				if (bVar0)
				{
					StringCopy(&(uParam0->f_5), func_418(iVar1, 1), 64);
				}
				else
				{
					StringCopy(&(uParam0->f_5), func_1394(Var4, 1, 4.808429E-35f), 64);
				}
			}
			else
			{
				uParam0->f_5 = { Var4.f_1 };
			}
		}
		else if (bVar0 == 1)
		{
			StringCopy(&(uParam0->f_5), func_418(iVar1, 1), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), func_1394(Var4, 1, 4.808429E-35f), 64);
		}
		if (func_34(Var4.f_19))
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var4.f_19)) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var4.f_19))))
			{
				StringCopy(&(uParam0->f_13), func_713(PLAYER::GET_PLAYER_NAME(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var4.f_19))), 4.808429E-35f), 128);
			}
			else
			{
				StringCopy(&(uParam0->f_13), func_713(func_1392(Var4), 4.808429E-35f), 128);
			}
		}
		else
		{
			StringCopy(&(uParam0->f_13), "Invalid_grab", 128);
		}
		iVar70 = 0;
		while (iVar70 < 7)
		{
			uParam0->f_33[iVar70 /*2*/] = { Var68 };
			iVar70++;
		}
		if ((GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1) && GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1)) && iVar3 == uParam0->f_2)
		{
			uParam0->f_31 = GANG::_NETWORK_GET_GANG_MEMBERS(uParam0->f_1, &(uParam0->f_33));
			uParam0->f_32 = GANG::_NETWORK_GET_GANG_SIZE(uParam0->f_1);
		}
		else if (func_1395(uParam0->f_2))
		{
			if (((bVar0 && GANG::NETWORK_IS_GANG_LEADER(iVar1)) && GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iVar1))) && func_424(iVar1) == uParam0->f_2)
			{
				uParam0->f_31 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iVar1), &(uParam0->f_33));
				uParam0->f_32 = GANG::_NETWORK_GET_GANG_SIZE(GANG::NETWORK_GET_GANG_ID(iVar1));
			}
			else
			{
				uParam0->f_31 = 0;
				uParam0->f_32 = Var4.f_9.f_4;
			}
		}
		else if (func_1396(uParam0->f_2))
		{
			uParam0->f_31 = func_1397(uParam0->f_2);
			uParam0->f_32 = func_1398(uParam0->f_2);
		}
		else
		{
			uParam0->f_31 = 0;
			uParam0->f_32 = Var4.f_9.f_4;
		}
		uParam0->f_48 = Var4.f_9.f_4;
		uParam0->f_48.f_1 = Var4.f_9.f_5;
		uParam0->f_48.f_2 = Var4.f_9.f_6;
		if (bVar0)
		{
			uParam0->f_51 = func_1399(iVar1);
		}
		else
		{
			uParam0->f_51 = func_1400(uParam0->f_2);
		}
		uParam0->f_52 = Var4.f_9.f_2;
		if (iVar3 == uParam0->f_2)
		{
			if (bVar2)
			{
				uParam0->f_52 = func_422() != 1;
			}
			else if (Global_1203937.f_470 != -1)
			{
				uParam0->f_52 = Global_1203937.f_470.f_1;
			}
		}
		uParam0->f_53 = Var4.f_9.f_1;
		uParam0->f_54 = func_1401(&Var4);
	}
	else
	{
		iVar1 = GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
			return false;
		}
		if (func_420(uParam0->f_1))
		{
			Var71.f_13 = 10;
			if (!func_1402(iVar1, &Var71))
			{
				return false;
			}
			StringCopy(&(uParam0->f_5), func_733(uParam0->f_1, 1, 0), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), func_733(uParam0->f_1, 1, 0), 64);
		}
		GANG::_NETWORK_GET_GANG_LEADER_HANDLE(uParam0->f_1, &(uParam0->f_29));
		StringCopy(&(uParam0->f_13), func_713(func_1403(iVar1), 4.808429E-35f), 128);
		uParam0->f_31 = GANG::_NETWORK_GET_GANG_MEMBERS(uParam0->f_1, &(uParam0->f_33));
		uParam0->f_32 = GANG::_NETWORK_GET_GANG_SIZE(uParam0->f_1);
		if (bVar0)
		{
			uParam0->f_48 = { func_566(iVar1) };
		}
		if (bVar0)
		{
			uParam0->f_51 = func_1399(iVar1);
		}
		else
		{
			uParam0->f_51 = func_1400(uParam0->f_2);
		}
		uParam0->f_52 = GANG::_NETWORK_IS_GANG_OPEN(uParam0->f_1);
		if (uParam0->f_1 == Global_1295619.f_10)
		{
			if (bVar2)
			{
				uParam0->f_52 = func_422() != 1;
			}
			else if (Global_1203937.f_470 != -1)
			{
				uParam0->f_52 = Global_1203937.f_470.f_1;
			}
		}
		uParam0->f_53 = func_1404(uParam0->f_1);
		uParam0->f_54 = 0;
	}
	return true;
}

void func_692(int iParam0)
{
	if (func_1405(iParam0, 1))
	{
		func_1406(iParam0);
	}
	func_1407(iParam0, 1);
}

void func_693(float fParam0, int iParam1)
{
	if (func_40(0))
	{
		return;
	}
	if (func_1037() != -1)
	{
		return;
	}
	Global_1896762.f_6.f_5 = fParam0;
	func_1044(iParam1);
	func_1043(1);
	func_33(0, 1);
	func_195(iParam1);
}

struct<2> func_694()
{
	struct<2> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_695(bool bParam0, bool bParam1)
{
	struct<11> Var0;

	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		if (Global_1203937.f_472 != -1)
		{
			Var0.f_4 = 11;
			Var0.f_7 = Global_1203937.f_483[Global_1203937.f_472 /*63*/];
			Var0.f_5 = Global_1295619.f_10;
			Var0.f_9 = bParam0;
			Var0.f_10 = bParam1;
			func_1408(&Var0);
			func_692(5);
		}
	}
	else if (Global_1203937.f_472 != -1)
	{
		func_1409(Global_1203937.f_483[Global_1203937.f_472 /*63*/], bParam0, bParam1);
	}
}

void func_696()
{
	vector3 vVar0;
	int iVar3;

	vVar0 = { func_566(255) };
	if (vVar0.z != 0)
	{
		iVar3 = func_77(PLAYER::PLAYER_ID());
		if ((iVar3 != -1 && Global_1141317[iVar3 /*27*/].f_9 == PLAYER::PLAYER_ID()) && func_1276(&vVar0))
		{
			func_172(vVar0.y, -6.178593E-30f, 0, 0);
			return;
		}
	}
}

void func_697(var uParam0)
{
}

int func_698(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_699(int iParam0)
{
	bool bVar0;

	bVar0 = true;
	if (iParam0 != PLAYER::PLAYER_ID())
	{
		bVar0 = !func_1410(iParam0);
	}
	else
	{
		bVar0 = !func_1411();
	}
	bVar0 = (bVar0 && func_1412(iParam0, 512));
	return bVar0;
}

bool func_700(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (Global_1297182.f_3.f_132[iVar0 /*2*/] == iParam0 && (MISC::GET_SYSTEM_TIME() - Global_1297182.f_3.f_132[iVar0 /*2*/].f_1) < 120000)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_701(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
}

bool func_702(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return VOICE::_0x49623BCFC3A3D829(iParam0, bParam1);
}

bool func_703(int iParam0, bool bParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return VOICE::_0x49623BCFC3A3D829(iParam0, bParam1);
}

bool func_704()
{
	struct<2> Var0;

	if (func_910() && !func_1413())
	{
		return false;
	}
	if (func_1411())
	{
		return false;
	}
	Var0 = { func_911(0) };
	if (func_1414(Var0))
	{
		if (func_1415(Var0))
		{
			return false;
		}
	}
	return true;
}

void func_705(int iParam0)
{
	struct<19> Var0;
	float fVar19;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&fVar19, PLAYER::GET_PLAYER_INDEX());
	Var0.f_14 = iParam0;
	Var0.f_4 = 60;
	func_1304(Var0, fVar19, 0, 0);
}

bool func_706(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_1203937.f_148.f_4[iVar0 /*2*/].f_1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_707(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!VOICE::_0x919AF2D93E9AA89D(iParam0) && MISC::IS_DURANGO_VERSION())
	{
		return false;
	}
	iVar0 = iParam0;
	if ((((((Global_1056554[iVar0 /*491*/].f_2 == 2 || Global_1056554[iVar0 /*491*/].f_2 == 3) || Global_1056554[iVar0 /*491*/].f_2 == 4) || Global_1056554[iVar0 /*491*/].f_2 == 5) || Global_1056554[iVar0 /*491*/].f_2 == 8) || Global_1056554[iVar0 /*491*/].f_2 == 7) || Global_1056554[iVar0 /*491*/].f_2 == 6)
	{
		return false;
	}
	if (GANG::_0xDA801F7F6A5278D3(iParam0))
	{
		return false;
	}
	return true;
}

int func_708(char* sParam0)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(2, sParam0);
	iVar1 = func_714(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

bool func_709()
{
	return (Global_1203937.f_148.f_2 < 10 && !func_421());
}

struct<2> func_710(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_711(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

float func_712(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		if (iParam2 == -1)
		{
			return 5.316992E+14f;
		}
		else
		{
			return 4.279651E-16f;
		}
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return 4.279651E-16f;
	}
	iVar2 = iParam0;
	if (func_1414(func_911(0)) && func_912(func_911(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = MISC::IS_BIT_SET(Global_3145858.f_6[iVar4], iVar5);
	}
	if (Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_5;
	}
	if (bParam3 && Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6 != 0)
	{
		return Global_1072759.f_21353.f_1[iVar2 /*8*/].f_6;
	}
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_1416(iParam0);
			if (iVar6 == -64.26542f && NETWORK::_NETWORK_IS_PLAYER_IN_SPECTATOR_MODE(iParam0))
			{
				return 27.64779f;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_1417(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_613(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_525(iParam0, 1);
	if (!bVar0)
	{
		if (func_1418(iParam0, bParam1))
		{
			return func_1417(iParam0);
		}
		else if (func_1419(iParam0, bParam1))
		{
			if (func_1420(iParam0, bParam1))
			{
				return 4.709691E+29f;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 3)
				{
					return -1.403075E+23f;
				}
				else if (iVar7 > 1)
				{
					return 80048.15f;
				}
				return 1.150299E-36f;
			}
		}
	}
	else if (bVar1)
	{
		return func_1416(iParam0);
	}
	else if (func_1418(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_1421(func_1325(func_911(0)), 1) == 9.256025E-25f)
		{
			return func_1417(iParam0);
		}
		else
		{
			return func_1417(iParam0);
		}
	}
	else if (func_1419(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_713(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_1158(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_714(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

int func_715(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Global_1203937.f_148.f_4[iVar0 /*2*/] == 0)
		{
			Global_1203937.f_148.f_4[iVar0 /*2*/] = MISC::GET_GAME_TIMER();
			Global_1203937.f_148.f_4[iVar0 /*2*/].f_1 = iParam0;
			Global_1203937.f_148.f_2++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_716(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_717(int iParam0)
{
	return func_439(Global_1204744.f_1, iParam0);
}

bool func_718()
{
	return Global_1572887.f_196 > 0;
}

void func_719(bool bParam0)
{
	struct<4> Var0;

	if (func_1422(1024))
	{
		func_203(1, 1);
		func_1423(1024);
		if (bParam0)
		{
			Var0.f_2 = 0;
			Var0.f_3 = MISC::GET_HASH_KEY("IB_ACCEPT");
			Var0.f_3.f_3 = 0;
			Global_1203937.f_111.f_1 = func_698(&Var0, "NG_PP_JOIN_FAIL_TITLE", "NG_PP_JOIN_FAIL_SUBH", 0, 0, 1);
		}
	}
}

void func_720(var uParam0, var uParam1)
{
	func_1424(uParam0);
}

void func_721(var uParam0)
{
	Global_1572887.f_196.f_13 = { *uParam0 };
}

void func_722(var uParam0)
{
	Global_1572887.f_196.f_30 = { *uParam0 };
}

void func_723(int iParam0)
{
	Global_1572887.f_196.f_2 = iParam0;
}

void func_724(bool bParam0)
{
	if (bParam0)
	{
		func_1425(128);
	}
	if (func_663() == 0)
	{
		func_1426(2);
	}
	func_1427(1);
}

char* func_725(int iParam0)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_PLAYER_REPORT_CHEATING_DESC";
			break;
		case 1:
			sVar0 = "NM_PLAYER_REPORT_ABUSIVE_DESC";
			break;
		case 2:
			sVar0 = "NM_PLAYER_REPORT_DISRUPTIVE_DESC";
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			sVar0 = "NM_PLAYER_REPORT_OFFENSIVE_DESC";
			break;
	}
	return MISC::VAR_STRING(2, sVar0);
}

void func_726(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, char[4] cParam19, char* sParam20)
{
	func_37();
	Global_1940239.f_1556.f_9449 = func_698(&uParam0, cParam19, sParam20, 0, 0, 1);
}

bool func_727(var uParam0)
{
	int iVar0;

	if (func_1428(uParam0))
	{
		return false;
	}
	if (func_1429(uParam0))
	{
		return false;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1) && uParam0->f_1 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (func_1430())
	{
		return false;
	}
	if (GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1) && GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1))
	{
		if (GANG::_0x7933754F260B428A(GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1)) > 0)
		{
			return false;
		}
		if (uParam0->f_4 && !uParam0->f_3)
		{
			if (!func_1431(&(uParam0->f_29)))
			{
				return false;
			}
		}
	}
	else if (uParam0->f_3)
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29));
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1295619.f_1)))
		{
			return true;
		}
		if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
		{
			if ((!GANG::NETWORK_IS_GANG_LEADER(iVar0) || !GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iVar0))) || GANG::_0x7933754F260B428A(iVar0) > 0)
			{
				return false;
			}
		}
		else if (!func_729(uParam0->f_2))
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

bool func_728(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;

	if (Global_1203937.f_1 != 0)
	{
		return true;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
		{
			GANG::_NETWORK_LEAVE_GANG(true);
		}
		else
		{
			GANG::_NETWORK_LEAVE_GANG(false);
		}
	}
	func_1432(iParam0);
	iVar0 = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (Global_1203937.f_483[iVar1 /*63*/] == iParam0)
		{
			Global_1203937.f_472 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1203937.f_14 = { Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_19 };
	Global_1203937.f_14.f_2 = iParam0;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1203937.f_14)))
	{
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1203937.f_14));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
			iVar3 = GANG::NETWORK_GET_GANG_ID(iVar2);
			Global_1203937.f_14.f_4 = iVar3;
		}
	}
	func_1433(4);
	func_202(32);
	func_692(4);
	Var4 = { func_694() };
	if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[iVar1 /*63*/].f_19), &Var4) && iParam1 == 1)
	{
		func_202(16);
	}
	return true;
}

bool func_729(int iParam0)
{
	int iVar0;

	if (func_1430())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return ((Global_1203937.f_23.f_17[iVar0 /*13*/].f_1 && Global_1203937.f_23.f_17[iVar0 /*13*/].f_2) && Global_1203937.f_23.f_17[iVar0 /*13*/].f_3 < Global_1203937.f_23.f_17[iVar0 /*13*/].f_4);
		}
		iVar0++;
	}
	return false;
}

bool func_730(var uParam0)
{
	if (Global_1203937.f_111.f_2 != 0)
	{
		return false;
	}
	func_1434(1);
	Global_1203937.f_111 = uParam0;
	return true;
}

bool func_731(int iParam0)
{
	struct<2> Var0;
	struct<14> Var2;
	int iVar46;

	if (Global_1203937.f_1 == 6 || Global_1203937.f_1 == 7)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)) && GANG::_0x7933754F260B428A(iParam0) > 0)
	{
		return false;
	}
	Var0 = { func_610(iParam0) };
	Var2.f_13 = 10;
	iVar46 = 0;
	while (iVar46 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
	{
		if (POSSE::_0xC084FF658B2E71DA(&Var0, iVar46, &Var2))
		{
			if (Var2.f_9 == 1 && Var2 != 0)
			{
				if (func_1435(Var2))
				{
					func_692(2);
					return func_728(Var2, 0);
				}
				else if (Var2.f_12 < 10)
				{
					Global_1203937.f_14 = { Var0 };
					Global_1203937.f_14.f_2 = Var2;
					Global_1203937.f_14.f_4 = GANG::NETWORK_GET_GANG_ID(iParam0);
					func_1433(6);
					func_202(32);
					func_692(2);
					if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
					{
						GANG::_NETWORK_LEAVE_GANG(GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()));
					}
					return true;
				}
			}
		}
		iVar46++;
	}
	return false;
}

bool func_732()
{
	if (func_1436(1))
	{
		return false;
	}
	return true;
}

char* func_733(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;
	int iVar2;
	struct<2> Var3;
	struct<10> Var5;
	int iVar15;
	int iVar16;

	sVar0 = "Invalid Posse";
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return sVar0;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		if (func_420(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102813.f_17 != Global_1101558[iVar2 /*38*/].f_17)
				{
					sVar0 = func_415(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
			{
				sVar0 = func_415(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_610(iVar1) };
				iVar16 = 0;
				while (iVar16 <= (POSSE::_0xC084FF658B2E61DA(&Var3) - 1))
				{
					if (POSSE::_0xC084FF658B2E81DA(&Var3, iVar16, &Var5) && Var5.f_9)
					{
						iVar15 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_1208(func_1437(Var5.f_1), 4.808429E-35f);
						}
						else
						{
							sVar0 = func_1208(func_1437(Var5.f_1), iParam2);
						}
					}
					else
					{
						iVar16++;
					}
				}
				if (iVar15 == 0)
				{
					return func_415(iParam0, bParam1, iParam2);
				}
				if (func_1438(func_1437(Var5.f_1)))
				{
					if (bParam1 == 1 && func_1439(iVar1, sVar0))
					{
						sVar0 = func_415(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_415(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_415(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

int func_734(char* sParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	int iVar1;

	sVar0 = MISC::VAR_STRING(10, sParam0, func_1208(sParam1, iParam2));
	iVar1 = func_714(sVar0, -2, 0, 0, 0, 1);
	return iVar1;
}

void func_735(int iParam0)
{
	int iVar0;

	if (GANG::NETWORK_IS_GANG_ID_VALID(iParam0) && iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		func_692(2);
		func_1440(2, 1);
		return;
	}
	if ((Global_1203937.f_2 == 3 || Global_1203937.f_2 == 4) || Global_1203937.f_2 == 5)
	{
		return;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		GANG::_NETWORK_LEAVE_GANG(GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()));
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		POSSE::_0xC08BFF658B2E51DA(0);
	}
	Global_1203937.f_14.f_2 = 0;
	Global_1203937.f_14.f_4 = iParam0;
	func_692(2);
	func_1441(3);
}

float func_736(int iParam0)
{
	struct<2> Var0[7];
	var uVar15;
	int iVar16;
	int iVar17;
	int iVar18;

	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam0, &Var0);
	if (iVar16 == 0)
	{
		return uVar15;
	}
	iVar17 = 0;
	iVar17 = 0;
	while (iVar17 <= (iVar16 - 1))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar17 /*2*/]));
		if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar18))
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar15, iVar18);
		}
		iVar17++;
	}
	return uVar15;
}

void func_737(var uParam0)
{
	struct<12> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam0))
	{
		return;
	}
	Var0.f_11.f_1 = -1;
	Var0.f_11.f_2 = -1;
	Var0.f_11.f_3 = -1;
	Var0.f_11.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = 3;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 22, 29, &uParam0);
}

int func_738(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (func_1442() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_1443(0);
	}
	func_1444();
	if (func_1445(255, 0))
	{
		if (GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) != PLAYER::PLAYER_ID())
		{
			if (!bParam2 && bParam1)
			{
				func_200(1);
			}
		}
	}
	if (NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(0);
	}
	func_1446();
	func_1447(21);
	iVar0 = func_1448(func_743(Global_1572887.f_72.f_9));
	Global_1572887.f_72.f_60.f_1 = func_1449(iVar0 != 0, iVar0, Global_1572887.f_72.f_9);
	Global_1572887.f_72.f_60.f_2 = iParam0;
	Global_1572887.f_72.f_60.f_4 = (MISC::GET_GAME_TIMER() - Global_1572887.f_72.f_41);
	func_1450();
	return 1;
}

bool func_739(int iParam0)
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(func_1448(iParam0));
}

int func_740(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2[3];
	int iVar6;
	int iVar7;

	iVar0 = 0;
	iVar1 = 1;
	if (func_1451() > 0)
	{
		iVar1 = func_1451();
	}
	switch (iParam0)
	{
		case 18:
			if (func_739(2) && func_233(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_739(3) && func_233(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_739(4) && func_233(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_739(7) && func_233(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_739(8) && func_233(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_739(9) && func_233(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_739(15) && func_233(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_739(16) && func_233(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_739(iParam0) && func_233(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return iVar2[iVar7];
}

int func_741(int iParam0)
{
	int iVar0;

	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (Global_265213.f_107995.f_13510[iVar0] == Global_265189.f_1[iParam0])
		{
			return Global_265213.f_107995.f_13575[iVar0];
		}
		iVar0++;
	}
	return 0;
}

int func_742(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	struct<7> Var0;
	char cVar22[64];
	struct<51> Var30;

	if (!func_1452(iParam2, iParam3))
	{
		return 0;
	}
	if (func_230() && Global_1572887.f_72.f_40 != 9)
	{
		return 0;
	}
	if (!func_1453(Global_1295619.f_5))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_1454(&Var0);
	func_1455(iParam10, 1);
	func_1456(iParam2, iParam3, iParam7, 1);
	func_1457(Param4, 1);
	func_1458(iParam6);
	func_1459(iParam9);
	func_1460();
	if ((func_821(Param4) && !func_1461()) && Global_1220744 == -1)
	{
		func_1462(Param4);
	}
	NETWORK::_NETWORK_SESSION_SET_PLAYER_FLAGS(1);
	if (iParam2 != 2)
	{
		func_1463();
	}
	if (func_1461())
	{
		func_1464(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_1465(2.524355E-29f))
		{
			if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f))
			{
				func_1101(1, 0);
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
			func_267(&Var30, iParam3, -1, -1, 3);
			StringCopy(&cVar22, func_1208(&(Var30.f_32), 4.808429E-35f), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_1466(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar22, MISC::VAR_STRING(2, func_1467(func_673(), iParam3)), 64);
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
	if ((!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && func_1445(255, 0)) && !bParam8)
	{
		func_708("NM_MATCHMAKING_WARNING");
	}
	func_1447(10);
	return 1;
}

int func_743(int iParam0)
{
	int iVar0;
	int iVar1;

	if (6 == iParam0)
	{
		return 10;
	}
	if (5 == iParam0)
	{
		return 11;
	}
	if (7 == iParam0)
	{
		return 12;
	}
	if (8 == iParam0)
	{
		return 13;
	}
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (iParam0 != Global_265213.f_107995.f_13575[iVar0])
		{
		}
		else
		{
			iVar1 = 0;
			while (iVar1 < 21)
			{
				if (Global_265213.f_107995.f_13510[iVar0] != Global_265189.f_1[iVar1])
				{
				}
				else
				{
					return iVar1;
				}
				iVar1++;
			}
		}
		iVar0++;
	}
	return -1;
}

void func_744(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_745(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_746()
{
	if (Global_1102813.f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102813.f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_750(2048))
	{
		return true;
	}
	if (func_749(1))
	{
		return true;
	}
	if (Global_1102813.f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_747(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

void func_748(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_749(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_750(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_751(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_752()
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

int func_753(int iParam0)
{
	if (func_1468(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_754(int iParam0)
{
	if (func_1469(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

int func_755(int iParam0)
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

int func_756(int iParam0)
{
	if (func_1470(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_757(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_758(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_759(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_760(struct<29> Param0, var uParam29, int iParam30)
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

void func_761(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_762(int iParam0)
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(8.360127E+26f) > 0)
	{
		*iParam0 = 8.360127E+26f;
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.200036E+09f) > 0)
	{
		*iParam0 = -4.200036E+09f;
		return true;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.947796E+13f) > 0)
	{
		*iParam0 = -4.947796E+13f;
		return true;
	}
	return false;
}

int func_763(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887.f_260.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887.f_196 >= 6 && Global_1572887.f_196 < 23)
	{
		return 0;
	}
	Global_1572887.f_260.f_4 = 2;
	Global_1572887.f_260.f_5 = (Global_1572887.f_260.f_5 || iParam1);
	Global_1572887.f_260.f_6 = iParam0;
	Global_1572887.f_260.f_20 = iParam2;
	Global_1572887.f_260.f_21 = 0;
	if (func_439(iParam1, 128))
	{
		func_672(&(Global_1572887.f_260.f_5), 2);
	}
	return 1;
}

void func_764(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	int iVar0;

	if (Global_1051194)
	{
		return;
	}
	Global_1051194.f_2 = iParam0;
	Global_1051194.f_3 = iParam1;
	Global_1051194.f_4 = iParam2;
	Global_1051194.f_6 = iParam3;
	Global_1051194.f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = SCRIPTS::GET_HASH_OF_THIS_SCRIPT_NAME();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051194.f_1 = iVar0;
	Global_1051194 = 1;
}

int func_765(int iParam0)
{
	if (Global_1572887.f_260.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887.f_196 >= 6 && Global_1572887.f_196 < 23)
	{
		return 0;
	}
	Global_1572887.f_260.f_4 = 4;
	Global_1572887.f_260.f_16 = iParam0;
	Global_1572887.f_260.f_5 = 18;
	Global_1572887.f_260.f_20 = 0;
	Global_1572887.f_260.f_21 = 0;
	NETWORK::NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(true);
	return 1;
}

struct<4> func_766(var uParam0)
{
	struct<4> Var0;

	Var0 = DATABINDING::DATABINDING_READ_INT(*uParam0);
	Var0.f_1 = DATABINDING::DATABINDING_READ_INT(uParam0->f_1);
	Var0.f_2 = DATABINDING::DATABINDING_READ_INT(uParam0->f_2);
	Var0.f_3 = DATABINDING::DATABINDING_READ_INT(uParam0->f_3);
	return Var0;
}

int func_767(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	int iVar33;
	int iVar34;
	int iVar35;
	struct<14> Var36;
	int iVar53;
	struct<17> Var54;

	if (!func_623(bParam0, 0))
	{
		return -1;
	}
	if (func_1132(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_1471())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_1157(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_1157(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_1385(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_1472(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_1473(0))
	{
		if (iVar0 > 0)
		{
			func_1118(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_1118(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_1474(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_1118(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_1475(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_1476(iVar53, Var54);
	}
	return iVar53;
}

bool func_768(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_1477(iParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_1478(iParam0, iParam1, 0);
	if (func_1479(&Global_1903834, 2))
	{
		return true;
	}
	return false;
}

bool func_769(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_768(&Param0, 0, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { func_777() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar4 /*7*/]), &Param0) && !INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar4 /*7*/]), &Var0))
		{
		}
		else
		{
			Global_1290256.f_11.f_162[iVar4 /*7*/].f_5 = Global_1295619.f_16 + 120;
			Global_1290256.f_11.f_162[iVar4 /*7*/] = { Param0 };
			Global_1290256.f_11.f_162[iVar4 /*7*/].f_6 = iParam5;
			Global_1290256.f_11.f_162[iVar4 /*7*/].f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

int func_770(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!func_1478(&uParam0, iParam4, 0))
	{
		return 0;
	}
	func_1480(&Global_1903834, 2, bParam5);
	if (!func_1481(&Global_1903834))
	{
		return 0;
	}
	func_1482(&uParam0, iParam4, bParam5);
	return 1;
}

int func_771(int iParam0)
{
	int iVar0;

	if (!func_1483(iParam0, &iVar0))
	{
		return 0;
	}
	func_1484(iVar0, 0, 100);
	func_1484(iVar0, 1, 100);
	return 1;
}

void func_772(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1485(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_773(int iParam0, int iParam1)
{
	struct<6> Var0;
	var uVar6;
	int iVar7;
	int iVar8;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = PLAYER::INT_TO_PLAYERINDEX(iVar8);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar7))
			{
			}
			else
			{
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar6, PLAYER::NETWORK_PLAYER_ID_TO_INT());
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, 0, &uVar6);
}

void func_774(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_1485(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_775()
{
	if (func_1486(2, 255))
	{
		return;
	}
	func_1487(2);
}

bool func_776()
{
	if (func_531(34))
	{
		return true;
	}
	if (func_1488() != 1)
	{
		return true;
	}
	return false;
}

struct<4> func_777()
{
	struct<4> Var0;

	return Var0;
}

int func_778(int iParam0, int iParam1)
{
	if (func_531(34))
	{
		return 0;
	}
	if (func_776())
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	Global_1290256.f_1130 = { *iParam0 };
	Global_1290256.f_1130.f_4 = iParam1;
	func_774(34);
	return 1;
}

int func_779(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*65*/].f_1.f_16.f_2;
	fVar1 = func_1489(iVar0);
	iVar2 = func_1490(iVar0, fVar1);
	return iVar2;
}

bool func_780(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_821(Global_1051268) && !func_1491(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_1190(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1492(iParam3, 255))
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
	if (func_909())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_821(Global_1051268))
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

char* func_781()
{
	return "NetStableGUID1";
}

char* func_782()
{
	return "NetStableGUID2";
}

char* func_783()
{
	return "NetStableGUID3";
}

char* func_784()
{
	return "NetStableGUID4";
}

int func_785(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<4> Var1;

	if (func_768(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { func_777() };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar0 /*7*/]), &Param0))
		{
			if (Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if (Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > Global_1290256.f_11.f_162[iVar0 /*7*/].f_5)
			{
				Global_1290256.f_11.f_162[iVar0 /*7*/].f_5 = iParam4;
			}
			Global_1290256.f_11.f_162[iVar0 /*7*/] = { Param0 };
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 = iParam5;
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar0 /*7*/]), &Var1))
		{
		}
		else
		{
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_5 = iParam4;
			Global_1290256.f_11.f_162[iVar0 /*7*/] = { Param0 };
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 = iParam5;
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_786(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<4> Var14;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(*iParam0, &Var0, bParam1, 0, -1))
	{
		return 0;
	}
	func_1493(iParam0);
	if (func_1494(iParam0, bParam1))
	{
		func_1231(iParam0, 0);
		return 1;
	}
	Var14 = { func_535(bParam1, 0, 1, 3) };
	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var14, iParam0))
	{
		func_1231(iParam0, 0);
		return 1;
	}
	if (!func_1495(iParam0, 1, bParam1))
	{
		return 0;
	}
	func_1231(iParam0, 1);
	return 1;
}

int func_787(int iParam0, int iParam1)
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
			case 4:
				return 0;
			case 5:
				return 1;
			case 6:
				return 2;
			case 7:
				return 3;
			default:
				break;
		}
	}
	return -1;
}

int func_788(var uParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	int iVar14;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(*uParam0, &Var0, bParam2, 0, -1))
	{
		return 0;
	}
	iVar14 = func_802(iParam1, 0);
	if (!func_1496(iVar14))
	{
		return 0;
	}
	Global_17418.f_55.f_61[iVar14 /*4*/] = { *uParam0 };
	return 1;
}

struct<4> func_789(int iParam0)
{
	int iVar0;
	struct<4> Var1;

	switch (iParam0)
	{
		case 0:
			iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
			break;
		case 2:
			iVar0 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
			break;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (((!DECORATOR::DECOR_EXIST_ON(iVar0, func_781()) || !DECORATOR::DECOR_EXIST_ON(iVar0, func_782())) || !DECORATOR::DECOR_EXIST_ON(iVar0, func_783())) || !DECORATOR::DECOR_EXIST_ON(iVar0, func_784()))
		{
			return func_777();
		}
		Var1 = DECORATOR::DECOR_GET_INT(iVar0, func_781());
		Var1.f_1 = DECORATOR::DECOR_GET_INT(iVar0, func_782());
		Var1.f_2 = DECORATOR::DECOR_GET_INT(iVar0, func_783());
		Var1.f_3 = DECORATOR::DECOR_GET_INT(iVar0, func_784());
		return Var1;
	}
	return func_777();
}

bool func_790(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_791()
{
	func_772(97);
	func_772(98);
	func_772(99);
	func_772(100);
	Global_1290256.f_782.f_77 = { func_777() };
	Global_1290256.f_782.f_81 = -1;
	Global_1903834.f_536 = 0;
	Global_1903834.f_537 = MISC::GET_GAME_TIMER();
}

void func_792()
{
	if (func_805(8, 255))
	{
		return;
	}
	func_773(6, 3);
}

int func_793(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	struct<4> Var1;

	if (func_768(&Param0, 2, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { func_777() };
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar0 /*7*/]), &Param0))
		{
			if (Global_1290256.f_782.f_107[iVar0 /*7*/].f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if (Global_1290256.f_782.f_107[iVar0 /*7*/].f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > Global_1290256.f_782.f_107[iVar0 /*7*/].f_5)
			{
				Global_1290256.f_782.f_107[iVar0 /*7*/].f_5 = iParam4;
			}
			Global_1290256.f_782.f_107[iVar0 /*7*/] = { Param0 };
			Global_1290256.f_782.f_107[iVar0 /*7*/].f_6 = iParam5;
			Global_1290256.f_782.f_107[iVar0 /*7*/].f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar0 /*7*/]), &Var1))
		{
		}
		else
		{
			Global_1290256.f_782.f_107[iVar0 /*7*/].f_5 = iParam4;
			Global_1290256.f_782.f_107[iVar0 /*7*/] = { Param0 };
			Global_1290256.f_782.f_107[iVar0 /*7*/].f_6 = iParam5;
			Global_1290256.f_782.f_107[iVar0 /*7*/].f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_794(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<4> Var14;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(*iParam0, &Var0, bParam1, 0, -1))
	{
		return 0;
	}
	func_1497(iParam0);
	if (func_1498(iParam0, bParam1))
	{
		func_800(iParam0, 1);
		return 1;
	}
	Var14 = { func_264(bParam1, 0, 1, 3) };
	if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var14, iParam0))
	{
		func_800(iParam0, 1);
		return 1;
	}
	if (!func_1499(iParam0, 1, bParam1))
	{
		return 0;
	}
	func_800(iParam0, 1);
	return 1;
}

int func_795(int iParam0, int iParam1)
{
	if (func_531(99))
	{
		return 0;
	}
	if (func_531(97))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	Global_1290256.f_782.f_77 = { *iParam0 };
	Global_1290256.f_782.f_81 = iParam1;
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())) || ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID())))
	{
		func_774(98);
	}
	else
	{
		func_1500(2);
	}
	func_774(97);
	return 1;
}

int func_796(var uParam0, int iParam1, bool bParam2)
{
	struct<10> Var0;
	int iVar14;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(*uParam0, &Var0, bParam2, 0, -1))
	{
		return 0;
	}
	iVar14 = func_802(iParam1, 2);
	if (!func_1496(iVar14))
	{
		return 0;
	}
	Global_17418.f_55.f_61[iVar14 /*4*/] = { *uParam0 };
	return 1;
}

bool func_797(var uParam0, bool bParam1)
{
	struct<24> Var0;
	struct<18> Var24;
	int iVar42;
	int iVar43;
	struct<10> Var44;
	int iVar58;

	Var0.f_9 = -5.45926E-19f;
	Var24 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (func_553(&Var24, &iVar42, &iVar43, bParam1))
	{
		Var44.f_9 = -5.45926E-19f;
		iVar58 = 0;
		while (iVar58 < iVar43)
		{
			if (func_1501(&Var44, iVar58, iVar42, iVar43))
			{
				if (func_1502(&Var44, &Var0, 0))
				{
					if (func_1503(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_538(iVar42);
						return true;
					}
				}
			}
			iVar58++;
		}
		func_538(iVar42);
	}
	return false;
}

struct<4> func_798()
{
	return Global_1290256.f_782.f_274;
}

bool func_799()
{
	return Global_1290256.f_782.f_278 > Global_1295619.f_16;
}

void func_800(int iParam0, bool bParam1)
{
	Global_1290256.f_782.f_270 = { *iParam0 };
	if (bParam1)
	{
		Global_1290256.f_782.f_278 = Global_1295619.f_16 + 10;
	}
}

bool func_801(int iParam0)
{
	return func_1504(&(Global_3145858.f_6), iParam0);
}

int func_802(int iParam0, int iParam1)
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

bool func_803(var uParam0, bool bParam1)
{
	struct<24> Var0;
	struct<18> Var24;
	int iVar42;
	int iVar43;
	struct<10> Var44;
	int iVar58;

	Var0.f_9 = -5.45926E-19f;
	Var24 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (func_553(&Var24, &iVar42, &iVar43, bParam1))
	{
		Var44.f_9 = -5.45926E-19f;
		iVar58 = 0;
		while (iVar58 < iVar43)
		{
			if (func_1501(&Var44, iVar58, iVar42, iVar43))
			{
				if (func_1502(&Var44, &Var0, 0))
				{
					if (func_1503(&(Var0.f_23), 32))
					{
						*uParam0 = { Var0 };
						func_538(iVar42);
						return true;
					}
				}
			}
			iVar58++;
		}
		func_538(iVar42);
	}
	return false;
}

struct<4> func_804(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	int iVar34;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	Var20.f_9 = -5.45926E-19f;
	if (!func_553(&Var2, &iVar0, &iVar1, bParam0))
	{
		return Var20;
	}
	iVar34 = 0;
	while (iVar34 < iVar1)
	{
		if (!func_1501(&Var20, iVar34, iVar0, iVar1))
		{
		}
		else if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var20))
		{
		}
		else
		{
			iVar34++;
		}
	}
	func_538(iVar0);
	return Var20;
}

bool func_805(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return (Global_1289628[iParam1 /*19*/].f_10 && iParam0) != 0;
}

void func_806(int iParam0)
{
	func_773(2, iParam0);
}

void func_807(var uParam0, int iParam1)
{
	uParam0->f_15 = (uParam0->f_15 || iParam1);
}

int func_808(int iParam0)
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

void func_809(char* sParam0)
{
	StringCopy(&(Global_1572887.f_72.f_60.f_6), sParam0, 32);
}

bool func_810(int iParam0)
{
	if (func_1505(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_811(int iParam0)
{
	if (func_1506(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_812(int iParam0)
{
	int iVar0;

	if (func_663() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_1507(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_813(int iParam0)
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
	if (!func_1508(&Var0))
	{
		return vVar5;
	}
	if (!func_1509(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_1509(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_1510(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_1509(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_1509(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_1510(&Var0, 1);
			if (!func_1509(&Var0, 22, iParam0, 0, 0))
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

struct<2> func_814(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_167();
	}
	return Global_1835011[iParam0 /*72*/].f_1;
}

bool func_815(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_816(iParam0) != -1;
}

int func_816(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= (13 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_1511(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_817(int iParam0)
{
	return func_1512(iParam0);
}

struct<2> func_818(int iParam0)
{
	var uVar0;
	int iVar5;

	if (!func_1508(&uVar0))
	{
		return func_167();
	}
	if (!func_1509(&uVar0, 13, 0, 0, 1))
	{
		return func_167();
	}
	if (!func_1509(&uVar0, 17, 0, 0, 1))
	{
		return func_167();
	}
	if (!func_1509(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_167();
	}
	if (!func_1509(&uVar0, 20, 0, 0, 1))
	{
		return func_167();
	}
	if (!func_1509(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_167();
	}
	iVar5 = func_1513(&uVar0);
	return func_819(iVar5);
}

struct<2> func_819(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_1343(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1343(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_167();
}

struct<2> func_820(int iParam0)
{
	var uVar0;
	struct<5> Var5;

	if (iParam0 == 0)
	{
		return func_167();
	}
	if (!func_1514(&uVar0, 7, iParam0, 3.536333E-36f))
	{
		return func_167();
	}
	func_1515(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_167();
	}
	return func_1343(Var5.f_3, Var5.f_4);
}

bool func_821(struct<2> Param0)
{
	if (!func_1415(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_1516(Param0))
	{
		return false;
	}
	return true;
}

int func_822(int iParam0)
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

void func_823(var uParam0)
{
	uParam0->f_15 = 0;
}

int func_824(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265213.f_67571.f_2)
	{
		if (Global_265213.f_67571.f_18405[iVar0 /*8*/] == iParam0)
		{
			return iVar0;
		}
		if (Global_265213.f_67571.f_4[iVar0 /*46*/].f_23 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_825()
{
	return Global_1940239.f_11605;
}

int func_826(int iParam0)
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

int func_827()
{
	return BUILTIN::FLOOR(func_1518(2f, BUILTIN::TO_FLOAT((func_1517() - 1)))) + 1;
}

int func_828(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1449(bParam2, 1, 0);
	iVar1 = func_1519(iParam0, iParam1);
	if (iVar1 == 0)
	{
		return 0;
	}
	return (BUILTIN::FLOOR(func_1518(2f, BUILTIN::TO_FLOAT((iVar1 - 1)))) + iVar0) + 1;
}

var func_829(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = (func_828(iParam0, iParam1, 1) - 1);
	iVar3 = func_1520(iParam0, iParam1);
	iVar1 = func_1521(iParam1, uParam2);
	if (iVar1 == -1 || iVar1 > iVar3)
	{
		iVar1 = 0;
		iVar2 = 0;
	}
	else
	{
		iVar2 = BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0)));
	}
	return (iVar1 || iVar2);
}

struct<10> func_830(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_831(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_832(int iParam0, int iParam1)
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

bool func_833(bool bParam0)
{
	bool bVar0;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = func_1362(bParam0, 0);
	if (!ITEMDATABASE::_ITEMDATABASE_GET_PRIORITY_ACCESS_AWARD(bVar0))
	{
		return false;
	}
	if (!func_1522(bParam0))
	{
		return false;
	}
	return true;
}

int func_834(bool bParam0)
{
	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_DESCRIPTION_HASH(bParam0);
}

void func_835(bool bParam0)
{
	var uVar0;
	struct<4> Var1;
	int iVar5;
	struct<19> Var26;
	char cVar45[64];

	if (!func_1523(bParam0, &uVar0, &Var1))
	{
		return;
	}
	Var26 = 1;
	Var26.f_1 = 1;
	Var26.f_2 = 27.64779f;
	Var26.f_4 = -1;
	Var26.f_5 = -1;
	Var26.f_6 = -1;
	Var26.f_10 = -1;
	Var26.f_11 = -1;
	Var26.f_12 = -1;
	Var26.f_17 = 27.64779f;
	Var26.f_18 = 27.64779f;
	StringCopy(&cVar45, "listitem", 64);
	StringIntConCat(&cVar45, bParam0, 64);
	Var26.f_16 = func_1524(Var1);
	Var26.f_4 = 1.608566E+13f;
	Var26.f_5 = -2.063632E+21f;
	Var26.f_3 = 5.390091E-15f;
	func_1525(&iVar5, Global_1940239.f_1556.f_8925.f_3, cVar45, Var26);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "dynamic_list_item_mission_hash", bParam0);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "dynamic_list_item_mission_playlist_name", func_1524(Var1));
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_8925.f_2, -1, "pm_dynamic_text_item", iVar5);
	Global_1940239.f_11595++;
}

int func_836(int iParam0)
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

int func_837(bool bParam0, int iParam1)
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

void func_838(int iParam0)
{
	Global_1940239.f_11599 = iParam0;
}

void func_839(int iParam0)
{
	Global_1940239.f_11605 = iParam0;
}

void func_840()
{
	int iVar0;

	iVar0 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_2);
	Global_1940239.f_245.f_1305 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_245.f_3, func_1526(iVar0));
	func_1527(iVar0);
}

void func_841(struct<2> Param0, char* sParam2)
{
	struct<83> Var0;
	int iVar83;
	int iVar84;
	bool bVar85;
	int iVar86;
	int iVar87;

	if (!func_34(Param0))
	{
		return;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_81 = 255;
	Var0.f_82 = -1.401298E-45f;
	iVar83 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Param0);
	iVar84 = iVar83;
	bVar85 = func_1528(&Param0) == false;
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar83) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar83))
		{
			StringCopy(&(Var0.f_25), func_713(PLAYER::GET_PLAYER_NAME(iVar83), 4.808429E-35f), 128);
		}
	}
	else
	{
		StringCopy(&(Var0.f_25), sParam2, 128);
	}
	if (bVar85)
	{
		Var0.f_2 = func_712(iVar83, 1, -1, 0);
	}
	else
	{
		Var0.f_2 = 27.64779f;
	}
	Var0.f_21 = 1;
	Var0.f_20 = 1.44691E+08f;
	Var0.f_19 = 4.116809E-22f;
	if (bVar85)
	{
		if (VOICE::_0x0DED260A1958A82E(iVar83))
		{
			Var0.f_20 = -2.095872E-34f;
		}
		else if (VOICE::_0xAA35FD9ABAB490A3(iVar83) && VOICE::_0xEF6F2A35FAAF2ED7(iVar83))
		{
			Var0.f_20 = -1.594221E+34f;
		}
		else
		{
			iVar86 = GANG::NETWORK_GET_GANG_ID(iVar83);
			if (GANG::NETWORK_IS_GANG_ID_VALID(iVar86))
			{
				if (func_420(iVar86))
				{
					if (func_1529(iVar83, &iVar87))
					{
						switch (iVar87)
						{
							case joaat("LEADER"):
								Var0.f_20 = 1.094245E-31f;
								break;
						}
					}
				}
				else if (GANG::NETWORK_IS_GANG_ACTIVE(iVar86) && GANG::NETWORK_IS_GANG_LEADER(iVar83))
				{
					Var0.f_20 = 1.094245E-31f;
				}
			}
		}
	}
	if (bVar85)
	{
		Var0.f_61 = 1;
		Var0.f_59 = -1.228104E-22f;
		Var0.f_60 = -0.04435345f;
		Var0.f_57 = 1;
		StringCopy(&(Var0.f_41), func_1530(iVar84), 128);
	}
	else
	{
		Var0.f_61 = 0;
		Var0.f_57 = 0;
	}
	func_1531(&(Global_1940239.f_1556.f_44.f_7), Var0);
}

void func_842()
{
	switch (func_458())
	{
		case -1537476917:
			func_286();
			break;
	}
}

bool func_843()
{
	return Global_1915643.f_22504;
}

bool func_844()
{
	return (func_909() || func_910());
}

void func_845(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_88, bParam1);
			break;
		case 1:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_81, bParam1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_97, bParam1);
			break;
		case 2:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_82, bParam1);
			break;
		case 3:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_98, bParam1);
			break;
		case 4:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_79, bParam1);
			break;
		case 5:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_83, bParam1);
			break;
		case 6:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_86, bParam1);
			break;
		case 7:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_95, bParam1);
			break;
		case 8:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_90, bParam1);
			break;
		case 9:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_89, bParam1);
			break;
		case 10:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_91, bParam1);
			break;
		case 11:
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_44.f_93, bParam1);
			break;
	}
}

bool func_846()
{
	if (func_1186(2))
	{
		return false;
	}
	if (func_613(Global_1149157.f_137.f_1, 2))
	{
		if (!func_613(Global_1149157.f_145, 2))
		{
			return false;
		}
	}
	return true;
}

int func_847()
{
	if (func_1186(8))
	{
		return 0;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(5.358659E+34f))
	{
		return 0;
	}
	return 1;
}

int func_848()
{
	if (func_1186(32))
	{
		return 0;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(6.578093E-37f))
	{
		return 0;
	}
	if (func_909())
	{
		return 0;
	}
	if (func_910())
	{
		return 0;
	}
	return 1;
}

bool func_849()
{
	return ((Global_1940239.f_1556.f_9754 && GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())) && func_1087());
}

void func_850()
{
	Global_1940239.f_1556.f_44 = 0;
}

bool func_851()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar2 = PLAYER::PLAYER_ID();
	if (func_443())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1225672[iVar0 /*303*/].f_300 & 1 == 0)
		{
		}
		else if (!SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084.f_586), iVar0))
		{
		}
		else
		{
			iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if (iVar1 == iVar2)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (GANG::NETWORK_IS_IN_SAME_GANG(iVar1, iVar2))
			{
			}
			else if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar2), false, false), ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), false, false)) > (Global_1901671.f_170.f_23 * Global_1155135[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*30*/].f_29))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_852(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	switch (iVar0)
	{
		case 8:
			func_1532();
			break;
	}
}

void func_853()
{
	int iVar0;
	int iVar1;
	char* sVar2;
	int iVar3;
	int iVar4;

	iVar0 = 0;
	while (iVar0 <= (Global_1940239.f_245.f_1306 - 1))
	{
		iVar1 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_30);
		if (!func_1533(iVar1))
		{
		}
		else
		{
			sVar2 = func_1534(iVar1, iVar0);
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar2))
			{
				iVar3 = MISC::GET_HASH_KEY(sVar2);
				iVar4 = iVar3;
			}
			else
			{
				iVar3 = 6.522135E+22f;
				iVar4 = 1.749576E+13f;
			}
			if (DATABINDING::_DATABINDING_READ_HASH(Global_1940239.f_245.f_14[iVar0 /*43*/].f_23) != iVar3)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/].f_23, iVar3);
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_245.f_14[iVar0 /*43*/].f_24, iVar4);
			}
		}
		iVar0++;
	}
}

int func_854()
{
	return func_1535(Global_1940239.f_1556);
}

void func_855(int iParam0)
{
	char cVar0[128];
	struct<55> Var16;
	bool bVar71;

	func_1537(func_1536() == 0);
	switch (func_1536())
	{
		case 0:
			StringCopy(&cVar0, "POSSE_EMPTY", 128);
			break;
		default:
			StringCopy(&cVar0, "POSSE_EMPTY_CONTENT", 128);
			break;
	}
	func_1538(MISC::VAR_STRING(2, &cVar0));
	switch (iParam0)
	{
		case 16:
			if (func_668())
			{
				func_151(-9.041249E+27f);
			}
			break;
		case 14:
			if (func_1387() == 0 && POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() == 0)
			{
				func_151(2567868f);
			}
			break;
		case 17:
			Var16.f_33 = 7;
			Var16.f_51 = -1;
			Var16 = { func_196(1) };
			bVar71 = false;
			if (func_227(&Var16))
			{
				if (!func_201(&Var16))
				{
					if (!func_867(&Var16))
					{
						bVar71 = true;
					}
				}
			}
			else
			{
				bVar71 = true;
			}
			if (bVar71)
			{
				func_181(0, 0);
			}
			break;
	}
}

bool func_856(int iParam0)
{
	if (Global_1940239.f_1556.f_2 != -1 && Global_1940239.f_1556.f_2 != iParam0)
	{
		return true;
	}
	return false;
}

void func_857(var uParam0)
{
	var uVar0;
	int iVar2;

	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 64);
	StringCopy(&(uParam0->f_13), "", 128);
	uParam0->f_31 = 0;
	uParam0->f_32 = 0;
	uParam0->f_48 = 0;
	uParam0->f_48.f_2 = 0;
	uParam0->f_51 = -1;
	uParam0->f_52 = 0;
	uParam0->f_53 = 0;
	uParam0->f_54 = 0;
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_29), &uVar0, 2);
	iVar2 = 0;
	while (iVar2 < 7)
	{
		MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_33[iVar2 /*2*/]), &uVar0, 2);
		iVar2++;
	}
}

bool func_858(int iParam0, var uParam1)
{
	if (iParam0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1))
	{
		if (!func_1539(-1, uParam1, 0))
		{
			return false;
		}
	}
	if (!func_1540(iParam0, uParam1, 0))
	{
		return false;
	}
	if (func_1541() == iParam0)
	{
		func_97(uParam1);
	}
	return true;
}

bool func_859(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT())
	{
		*iParam1 = { Global_1203937.f_483[iParam0 /*63*/] };
		return true;
	}
	return false;
}

bool func_860(int iParam0, var uParam1)
{
	int iVar0;
	struct<2> Var1;
	struct<44> Var3;
	int iVar47;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	Var1 = { func_610(iVar0) };
	Var3.f_13 = 10;
	iVar47 = 0;
	while (iVar47 <= (POSSE::_0xC084FF658B2E61DA(&Var1) - 1))
	{
		if ((POSSE::_0xC084FF658B2E71DA(&Var1, iVar47, &Var3) && Var3 != 0) && Var3.f_9 == 1)
		{
			*uParam1 = { Var3 };
			return true;
		}
		iVar47++;
	}
	return false;
}

bool func_861(var uParam0)
{
	return uParam0->f_52;
}

int func_862(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 62)
	{
		return 0;
	}
	return Global_1896762.f_3399[iVar0 /*4*/].f_1;
}

struct<55> func_863(bool bParam0)
{
	if (bParam0)
	{
		func_691(&(Global_1940239.f_1556.f_149.f_57));
	}
	return Global_1940239.f_1556.f_149.f_57;
}

char* func_864(var uParam0)
{
	char* sVar0;

	if (*uParam0)
	{
		if (Global_1295619.f_10 == uParam0->f_1)
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1295619.f_1)))
			{
				sVar0 = "NM_MW_POSSE_JOIN_LEADER_FOOTER";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_JOIN_MEMBER_FOOTER";
			}
		}
		else if (uParam0->f_31 >= uParam0->f_32)
		{
			sVar0 = "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER";
		}
		else if (uParam0->f_4 && func_1542(uParam0->f_2))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1295619.f_1)))
			{
				sVar0 = "NM_MW_POSSE_PERS_LEADER";
			}
			else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)) && func_1396(uParam0->f_2))
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOIN_SESS";
			}
			else if (func_424(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29))) == uParam0->f_2)
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOINABLE";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_BLOCK";
			}
		}
		else if (uParam0->f_4 && POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() >= 5)
		{
			sVar0 = "NM_GC_REQ_MAX_MEMBERSHIP";
		}
		else if (!func_861(uParam0))
		{
			sVar0 = "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER";
		}
		else if (uParam0->f_48.f_1 != 0)
		{
			return MISC::VAR_STRING(10, "NM_MW_POSSE_CAMP_FOOTER", MISC::VAR_STRING(2, func_647(uParam0->f_48.f_1, 1)));
		}
		else
		{
			sVar0 = "NM_MW_POSSE_CAMP_NONE_FOOTER";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_ENTRY_FOOTER";
	}
	return MISC::VAR_STRING(2, sVar0);
}

int func_865(var uParam0, struct<34> Param1, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55)
{
	int iVar0;
	struct<4> Var1;
	char cVar5[128];
	int iVar21;
	int iVar22;
	int iVar23;
	int iVar24;
	int iVar25;

	if (!func_227(&Param1))
	{
		return 0;
	}
	iVar0 = func_1543(&Param1);
	Var1 = 1;
	Var1.f_1 = 1;
	iVar23 = 0;
	while (iVar23 < 7)
	{
		Var1.f_2 = 3.347692E+13f;
		Var1.f_3 = 12189.19f;
		Var1.f_1 = 0;
		Var1 = 0;
		if (iVar23 < iVar0)
		{
			Var1.f_1 = 1;
			if (func_34(Param1.f_33[iVar23 /*2*/]))
			{
				iVar22++;
				StringCopy(&cVar5, "", 128);
				if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Param1.f_33[iVar23 /*2*/])))
				{
					iVar25 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Param1.f_33[iVar23 /*2*/]));
					if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar25))
					{
						iVar24 = func_1544(&cVar5, iVar25, 1);
						switch (iVar24)
						{
							case 1:
							case 3:
								uParam0->f_3[iVar23 /*6*/].f_5 = 0;
								break;
							case 4:
								uParam0->f_3[iVar23 /*6*/].f_5 = 0;
								break;
							case 0:
							case 2:
								if (!uParam0->f_3[iVar23 /*6*/].f_5)
								{
									func_1545(iVar25);
									uParam0->f_3[iVar23 /*6*/].f_5 = 1;
								}
								break;
						}
					}
				}
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar5))
				{
					Var1 = 1;
					Var1.f_3 = MISC::GET_HASH_KEY(&cVar5);
					Var1.f_2 = Var1.f_3;
					iVar21++;
				}
			}
		}
		func_1546(&(uParam0->f_3[iVar23 /*6*/]), Var1);
		iVar23++;
	}
	if (iVar21 != iVar22)
	{
		return 0;
	}
	return 1;
}

bool func_866(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55)
{
	struct<66> Var0;
	int iVar66;

	if (!func_227(&Param1))
	{
		return false;
	}
	Var0 = 1;
	if (func_1218(GANG::NETWORK_GET_GANG_LEADER(Param1.f_1), 0, 1))
	{
		StringCopy(&(Var0.f_1), MISC::VAR_STRING(10, "NM_POSSE_DEFENSIVE_LEADER", func_1547(&Param1)), 128);
	}
	else
	{
		StringCopy(&(Var0.f_1), func_1547(&Param1), 128);
	}
	if (func_1549(func_1548(&Param1)))
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_GOOD", 128);
	}
	else
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_BAD", 128);
	}
	if (func_201(&Param1))
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_PERSISTENT", 128);
	}
	else
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_TEMPORARY", 128);
	}
	iVar66 = func_1550(&Param1);
	if (iVar66 == 0)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NLOW", 128);
		Var0.f_33 = 27.64779f;
	}
	else if (iVar66 == 1)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NMED", 128);
		Var0.f_33 = 27.64779f;
	}
	else
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NHIGH", 128);
		Var0.f_33 = 4.465091E-08f;
	}
	func_1551(uParam0, Var0, 0);
	return true;
}

bool func_867(var uParam0)
{
	int iVar0;

	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return false;
		}
	}
	else
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1))
		{
			return false;
		}
		if (!GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

void func_868()
{
	int iVar0;

	if (Global_1896762.f_368.f_2563 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_1552(&(Global_1896762.f_368.f_2[iVar0 /*80*/]));
		iVar0++;
	}
	Global_1896762.f_368.f_2563 = 0;
}

void func_869(var uParam0)
{
	bool bVar0;
	struct<23> Var1;
	bool bVar64;
	int iVar65;
	var uVar66;
	int iVar68;
	int iVar69;
	bool bVar70;
	int iVar71;
	int iVar72;

	switch (Global_1896762.f_213)
	{
		case 0:
			bVar0 = true;
			if (!func_227(uParam0))
			{
				bVar0 = false;
			}
			if (!func_201(uParam0))
			{
				bVar0 = false;
			}
			Var1.f_22 = 10;
			if (!POSSE::_0xC087FF658B2E51DA(uParam0->f_2, &Var1))
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896762.f_368.f_1) != 0)
				{
					DATABINDING::_0x3BF0767CF33FCC88(Global_1896762.f_368.f_1);
				}
				return;
			}
			bVar64 = false;
			if (Global_1896762.f_213.f_104 != Var1.f_21)
			{
				bVar64 = true;
			}
			if (!bVar64)
			{
				iVar65 = 0;
				while (iVar65 < Var1.f_21)
				{
					if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var1.f_22[iVar65 /*4*/]), &(Global_1896762.f_213.f_2[iVar65 /*2*/])))
					{
						bVar64 = true;
					}
					else
					{
						iVar65++;
					}
				}
			}
			Global_1896762.f_213.f_104 = Var1.f_21;
			iVar68 = 0;
			while (iVar68 < 10)
			{
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&(Var1.f_22[iVar68 /*4*/])))
				{
					MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_213.f_2[iVar68 /*2*/]), &(Var1.f_22[iVar68 /*4*/]), 2);
				}
				else
				{
					MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_213.f_2[iVar68 /*2*/]), &uVar66, 2);
				}
				iVar68++;
			}
			if (bVar64)
			{
				Global_1896762.f_213.f_105 = 0;
				Global_1896762.f_213.f_1 = -1;
				func_1085(1);
			}
			else if (Global_1896762.f_213.f_105)
			{
				func_1085(3);
				func_55(1);
			}
			else
			{
				Global_1896762.f_213.f_1 = -1;
				func_1085(1);
			}
			break;
		case 4:
			func_1085(0);
			break;
		case 1:
			if (Global_1896762.f_213.f_104 <= 0)
			{
				func_1085(4);
				return;
			}
			if (Global_1896762.f_213.f_1 < 0)
			{
				if (MISC::IS_PC_VERSION() || MISC::IS_STADIA_VERSION())
				{
					iVar69 = 0;
					while (iVar69 <= (Global_1896762.f_213.f_104 - 1))
					{
						if (!NETWORK::_NETWORK_GET_DISPLAY_NAME_FROM_HANDLE(&(Global_1896762.f_213.f_2[iVar69 /*2*/]), &(Global_1896762.f_213.f_23[iVar69 /*8*/])))
						{
							func_70(MISC::VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 27.64779f);
						}
						iVar69++;
					}
					func_1085(3);
					Global_1896762.f_213.f_105 = 1;
					func_55(1);
					return;
				}
				else
				{
					Global_1896762.f_213.f_1 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&(Global_1896762.f_213.f_2), Global_1896762.f_213.f_104);
				}
				if (Global_1896762.f_213.f_1 < 0)
				{
					func_1085(4);
					return;
				}
			}
			switch (NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_1896762.f_213.f_1, &(Global_1896762.f_213.f_23), Global_1896762.f_213.f_104))
			{
				case -1:
					func_1085(4);
					break;
				case 0:
					func_1085(3);
					Global_1896762.f_213.f_105 = 1;
					func_55(1);
					break;
				case 1:
					break;
			}
			break;
		case 3:
			if (func_1002())
			{
				if (func_1553() == 1)
				{
					func_1007();
					func_55(1);
				}
				return;
			}
			if (!func_328())
			{
				bVar70 = false;
				if (!func_1040(&(Global_1896762.f_213.f_106)))
				{
					func_1041(&(Global_1896762.f_213.f_106), 0);
				}
				if (func_1554(&(Global_1896762.f_213.f_106)) >= 5f)
				{
					bVar70 = true;
				}
				if (bVar70)
				{
					func_1039(&(Global_1896762.f_213.f_106));
					func_1085(0);
					return;
				}
				return;
			}
			if (func_51() != 1)
			{
				return;
			}
			iVar71 = 0;
			func_868();
			iVar72 = 0;
			while (iVar72 < Global_1896762.f_213.f_104)
			{
				if (!func_34(Global_1896762.f_213.f_2[iVar72 /*2*/]))
				{
				}
				else if (!func_961(&(Global_1896762.f_213.f_2[iVar72 /*2*/]), &(Global_1896762.f_213.f_23[iVar72 /*8*/]), 0, 6))
				{
				}
				else
				{
					iVar71++;
				}
				iVar72++;
			}
			iVar72 = iVar71;
			while (iVar72 <= 9)
			{
				if (!func_1555(6))
				{
				}
				iVar72++;
			}
			break;
	}
}

void func_870(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			uParam0->f_12 = 199375;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			(*uParam0)[uParam0->f_11] = 199474;
			uParam0->f_11++;
			uParam0->f_12 = 199375;
			uParam0->f_13 = 1;
			break;
		case 791621612:
			uParam0->f_12 = 199375;
			uParam0->f_13 = 1;
			break;
	}
}

void func_871(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<2> Var4;
	int iVar6;
	int iVar7;
	bool bVar8;

	if (!func_227(uParam0))
	{
		return;
	}
	iVar0 = func_1562(uParam0);
	iVar1 = func_1543(uParam0);
	iVar2 = func_1563(uParam0);
	func_868();
	iVar6 = 0;
	while (iVar6 < iVar2)
	{
		iVar3 = 255;
		if (iVar6 < iVar0)
		{
			if (!func_1564(uParam0, iVar6, &Var4))
			{
			}
			else
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&Var4);
				if (!func_961(&Var4, PLAYER::GET_PLAYER_NAME(iVar3), 0, 5))
				{
				}
				else
				{
					if (func_1565(uParam0, Var4))
					{
						if (iVar6 != 0)
						{
							func_1566(0, (func_994() - 1));
						}
					}
					Jump @188; //curOff = 144
					if (iVar6 < iVar1)
					{
						if (!func_1555(5))
						{
						}
						else
						{
							Jump @188; //curOff = 166
							if (iVar6 < iVar2)
							{
								if (!func_1567(5))
								{
								}
							}
						}
						iVar6++;
						iVar7 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1896762.f_368.f_2[func_1541() /*80*/].f_1));
						bVar8 = false;
						if (func_1568(&(Global_1940239.f_1556.f_149.f_117.f_3), *uParam0, iVar7))
						{
							bVar8 = true;
						}
						func_872(&(Global_1940239.f_1556.f_149.f_117.f_3), bVar8);
					}
				}
			}
		}
	}
}

void func_872(var uParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_1))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
}

void func_873(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			uParam0->f_12 = 199375;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			break;
	}
}

void func_874(var uParam0)
{
	struct<14> Var0;
	int iVar14;
	struct<2> Var15;
	struct<83> Var17;
	struct<25> Var100;
	char cVar180[128];
	int iVar196;
	int iVar197;
	int iVar198;

	Var0 = 10;
	Var17 = 1;
	Var17.f_1 = 1;
	Var17.f_2 = 27.64779f;
	Var17.f_4 = -1;
	Var17.f_5 = -1;
	Var17.f_6 = -1;
	Var17.f_10 = -1;
	Var17.f_11 = -1;
	Var17.f_12 = -1;
	Var17.f_21 = 1;
	Var17.f_81 = 255;
	Var17.f_82 = -1.401298E-45f;
	Var100.f_22 = -1;
	Var100.f_23 = -1;
	StringCopy(&cVar180, "", 128);
	iVar196 = 0;
	iVar197 = func_994();
	iVar198 = 0;
	while (iVar198 < iVar197)
	{
		func_1569(&Var17);
		if (!func_995(iVar198, &Var100))
		{
		}
		else if (!func_1570(&Var100))
		{
		}
		else
		{
			Var100.f_21 = uParam0->f_1 == iVar196;
			if (func_1571(&Var100))
			{
				func_1572(&Var100, 0);
			}
			if (iVar197 >= func_1573())
			{
				func_1572(&Var100, 0);
			}
			if (!func_1574(&Var100))
			{
				if (!func_1575(&Var17, Var100.f_22, Var100.f_23))
				{
				}
				func_1576(&Var100, -1);
				func_1572(&Var100, 1);
			}
			if (!func_1577(&Var17, &Var100, 0))
			{
			}
			Stack.Push(&Var0);
			Stack.Push(Var100.f_22);
			Call_Loc(*uParam0);
			iVar14 = 0;
			while (iVar14 < Var0.f_11)
			{
				Stack.Push(&Var17);
				Stack.Push(&Var100);
				Stack.Push(0);
				Call_Loc(Var0[iVar14]);
				iVar14++;
			}
			if (!func_1578(iVar196, &Var17, &(Var100.f_24), Var100.f_20))
			{
			}
			func_1579(&Var100);
			func_1580(iVar198, &Var100);
			if (Var100.f_21)
			{
				Var15 = { func_209() };
				if (NETWORK::NETWORK_IS_HANDLE_VALID(&Var15) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var15, &(Var100.f_1)))
				{
					func_524(Var100.f_1, &(Var100.f_3));
				}
				if (Var0.f_13)
				{
					Stack.Push(&Var100);
					Stack.Push(&cVar180);
					Call_Loc(Var0.f_12);
				}
			}
			iVar196++;
		}
		iVar198++;
	}
	if (iVar197 == 0)
	{
		func_1581(uParam0->f_2, &cVar180);
	}
	func_70(&cVar180, 27.64779f);
	func_1582(iVar196);
}

void func_875()
{
	if (!func_1583())
	{
		return;
	}
	if (func_1286() == 1)
	{
		func_21();
		func_62();
		func_419(func_1584(), 0);
		func_416(func_1584());
	}
}

int func_876()
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	if (func_1585() > 0)
	{
		switch (func_1005())
		{
			case 2:
				func_1586();
				break;
		}
	}
	switch (func_1585())
	{
		case 0:
			if (func_686())
			{
				func_693(((1103626240 + 1103626240) + 1092616192), 7);
				func_1587(1);
			}
			return 0;
		case 1:
			func_1587(2);
			break;
		case 2:
			bVar0 = false;
			if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
			{
				bVar0 = true;
			}
			POSSE::_0xC08AFF658B2E51DA(&iVar1);
			if (iVar1 != 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1587(3);
			}
			else
			{
				func_1587(5);
			}
			break;
		case 3:
			func_200(1);
			func_1587(4);
			break;
		case 4:
			if (!func_1040(&(Global_1896762.f_13)))
			{
				func_1041(&(Global_1896762.f_13), 0);
			}
			if (func_1031(&bVar2, 1))
			{
				if (bVar2)
				{
					func_1587(5);
				}
				else
				{
					func_1587(11);
				}
				else
				{
					Jump @338; //curOff = 307
					if (func_1042(&(Global_1896762.f_13)) >= 1103626240)
					{
						func_1587(11);
					}
					else
					{
						Jump @895; //curOff = 338
						if (Global_1896762.f_13.f_37)
						{
							if (!func_1588(Global_1896762.f_13.f_37.f_1, Global_1896762.f_13.f_37.f_2, func_1437(Global_1896762.f_13.f_37.f_5), func_563(Global_1896762.f_13.f_8)))
							{
								func_1587(11);
							}
							else
							{
								Jump @445; //curOff = 418
								func_1589(Global_1896762.f_13.f_37.f_1, Global_1896762.f_13.f_37.f_2);
								func_1587(6);
								Jump @895; //curOff = 450
								if (func_1035(&bVar3, 1))
								{
									if (bVar3)
									{
										func_1587(7);
									}
									else
									{
										func_1587(11);
									}
									else
									{
										Jump @895; //curOff = 485
										bVar4 = func_882(1, 0);
										if ((!func_878(Global_1295619.f_149[Global_1295619], 0) && !bVar4) || (!func_1352(Global_1896762.f_13.f_7, func_563(Global_1896762.f_13.f_8)) && !bVar4))
										{
											func_1587(11);
										}
										else
										{
											if ((GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10) && GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10)) && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
											{
												func_1587(5);
											}
											else if (func_878(Global_1295619.f_149[Global_1295619], 0))
											{
												if (func_1352(Global_1896762.f_13.f_7, func_563(Global_1896762.f_13.f_8)))
												{
													func_1587(10);
												}
												else
												{
													func_1587(8);
												}
											}
											else
											{
												func_1587(8);
											}
											Jump @895; //curOff = 694
											if (func_172(Global_1896762.f_13.f_37.f_3, Global_1896762.f_13.f_37.f_4, 1, 0))
											{
												func_173(512);
												func_1587(9);
											}
											else
											{
												func_1587(11);
											}
											else
											{
												Jump @895; //curOff = 751
												if (!func_1040(&(Global_1896762.f_13)))
												{
													func_1041(&(Global_1896762.f_13), 0);
												}
												if (func_1042(&(Global_1896762.f_13)) < 1103626240)
												{
													if (func_878(Global_1295619.f_149[Global_1295619], 0))
													{
													}
													else
													{
														return 1;
													}
												}
												else
												{
													func_1587(11);
												}
												else
												{
													func_1587(10);
													Jump @895; //curOff = 843
													func_1079();
													func_21();
													func_1587(0);
													return 2;
													Jump @895; //curOff = 863
													func_1079();
													func_21();
													func_1587(0);
													func_708("NM_GC_POSSE_CREATE_FAIL");
													return 3;
												}
											}
										}
									}
									return 1;
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

var func_877()
{
	return Global_1896762.f_13.f_26;
}

bool func_878(int iParam0, bool bParam1)
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
			func_670("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (func_450(func_1590(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_670("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

int func_879()
{
	return Global_1896762.f_13.f_9;
}

int func_880()
{
	if (func_663() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_881(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_421())
	{
		func_1591("NM_GC_REQ_POSSE_CREATE_LOCKED", 4.465091E-08f);
		return 0;
	}
	if (!func_188())
	{
		func_1591("NM_GC_REQ_NO_CAMP", 4.465091E-08f);
		return 0;
	}
	if (!func_567(iParam1))
	{
		func_1591("NM_GC_REQ_NO_COST", 4.465091E-08f);
		return 0;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.482458E-34f))
	{
		func_1591("NM_GC_REQ_POSSE_CREATE_LOCKED", 4.465091E-08f);
		return 0;
	}
	if (!func_247())
	{
		func_1591("NM_GC_REQ_POSSE_CREATE_LOCKED", 4.465091E-08f);
		return 0;
	}
	if (bParam0)
	{
		if (Global_1203937.f_482 != 0 && (MISC::GET_GAME_TIMER() - Global_1203937.f_482) < 15000)
		{
			func_1591("NM_GC_REQ_POSSE_CREATE_COOLDOWN", 4.465091E-08f);
			return 0;
		}
		iVar0 = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
		if (iVar0 >= 5)
		{
			func_1591("NM_GC_REQ_MAX_MEMBERSHIP", 4.465091E-08f);
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_1474(func_411(-4.191796E-35f)))
		{
			func_1591("NFT_VOUCHER_FOOTER", 27.64779f);
		}
		else
		{
			func_1591("NM_GC_CREATE_PERSISTENT", 27.64779f);
		}
	}
	else
	{
		func_1591("NM_GC_CREATE_TEMPORARY", 27.64779f);
	}
	return 1;
}

bool func_882(int iParam0, int iParam1)
{
	int iVar0;

	if ((!func_1592() || !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) || !NETWORK::NETWORK_IS_SESSION_ACTIVE())
	{
		return false;
	}
	if (!func_644(16))
	{
		return false;
	}
	if (func_247())
	{
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.406766E+36f))
		{
			return false;
		}
	}
	if (!func_1069())
	{
		return false;
	}
	if (func_1190(16))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	if (iParam1 == 1 && (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0) || !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 1 && func_613(Global_1147168.f_8, 1))
	{
		return false;
	}
	if (func_937())
	{
		return false;
	}
	return true;
}

char[] func_883(float fParam0)
{
	*fParam0 = Global_1896762.f_13.f_36;
	return func_685(&(Global_1896762.f_13.f_28));
}

bool func_884()
{
	return Global_1896762.f_195.f_1 != 0;
}

var func_885()
{
	return Global_1896762.f_195.f_2;
}

int func_886()
{
	return Global_1896762.f_195.f_1;
}

void func_887(int iParam0)
{
	Global_1940239.f_1556.f_9756.f_245 = 1;
	Global_1940239.f_1556.f_9756.f_247 = iParam0;
	Global_1940239.f_1556.f_9756.f_246 = NETWORK::GET_CLOUD_TIME_AS_INT();
}

var func_888()
{
	return Global_1940239.f_1556.f_149.f_126.f_2;
}

int func_889()
{
	return Global_1940239.f_1556.f_9756.f_4;
}

char* func_890(var uParam0)
{
	return func_1593(uParam0->f_5);
}

void func_891(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (Global_1940239.f_1556.f_9756.f_241)
	{
		return;
	}
	if (bParam3)
	{
		if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_1))
		{
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
			{
				DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, "");
			}
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, sParam1);
		}
	}
	else if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(*uParam0))
	{
	}
	else
	{
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_1, "");
		}
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(*uParam0, sParam1);
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_2))
	{
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, bParam2);
	}
	Global_1940239.f_1556.f_9756.f_241 = 1;
	Global_1940239.f_1556.f_9756.f_240 = 0;
}

void func_892(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	char* sVar8;
	char* sVar9;
	int iVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	var uVar16;

	if (!func_227(uParam0))
	{
		return;
	}
	bVar0 = func_197(uParam0);
	bVar1 = func_867(uParam0);
	bVar2 = func_1076(uParam0);
	bVar3 = func_1594(uParam0);
	bVar4 = func_201(uParam0);
	bVar5 = func_1595(16);
	bVar6 = (((func_909() || func_910()) || (func_1596(0, 0, 1) && bVar5 == 0)) || func_915());
	bVar7 = func_421();
	if (bVar0 && !bVar1)
	{
		bVar2 = false;
	}
	sVar8 = "";
	sVar9 = "";
	iVar15 = 8;
	iVar10 = 0;
	while (iVar10 < iVar15)
	{
		iVar13 = iVar10;
		func_1597(iVar13, &uVar16);
		iVar14 = uVar16;
		bVar11 = false;
		bVar12 = false;
		switch (iVar13)
		{
			case 0:
				bVar11 = (!bVar0 && !bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!func_1598(uParam0))
					{
						if (GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1) && GANG::_0x7933754F260B428A(GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1)) > 0)
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_KICKED_FOOTER");
						}
						else if (func_1429(uParam0))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
						}
						else if (func_1428(uParam0))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else if (POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() >= 5 && func_201(uParam0))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_GC_REQ_MAX_MEMBERSHIP");
						}
						else if (func_201(uParam0) && !func_1431(&(uParam0->f_29)))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_GC_REQ_TOO_MANY_P_MEMBERS");
						}
						else
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
						}
					}
					else if ((!func_1594(uParam0) && !func_201(uParam0)) && !func_861(uParam0))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (((!func_1594(uParam0) && func_201(uParam0)) && !func_861(uParam0)) && !bVar0)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 1:
				bVar11 = ((bVar0 && !bVar1) && func_1599(PLAYER::PLAYER_ID(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!func_1598(uParam0))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_ACTIVATE_FOOTER");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 2:
				bVar11 = ((bVar0 && !bVar1) && !func_1599(PLAYER::PLAYER_ID(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (func_1600(uParam0->f_2))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_OTHER_CONTENT_LOCK_REJOIN_FOOTER");
					}
					else if (func_919())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JAIL_LOCK_REJOIN_FOOTER");
					}
					else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
					{
						if (func_729(uParam0->f_2))
						{
							bVar12 = true;
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER_SM");
						}
						else if (!func_1601(uParam0->f_2))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_CONTENT_BLOCK_FOOTER");
						}
						else if (!func_1602(uParam0->f_2))
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else
						{
							sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
						}
					}
					else if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1) && GANG::_0x7933754F260B428A(GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1)) > 0)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_KICKED_FOOTER");
					}
					else if (func_1429(uParam0))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
					}
					else if (func_1428(uParam0))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
					}
					else if (!func_1598(uParam0))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_ACTIVATE_FOOTER_M");
						bVar12 = true;
					}
				}
				break;
			case 3:
				bVar11 = (bVar3 && (bVar1 || bVar0));
				if (bVar11)
				{
					if (!bVar4)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_VERSUS_NO_PERSISTENT_POSSE_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (func_1603(PLAYER::PLAYER_ID()))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER_BLOCKED_JAIL");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_VERSUS_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 4:
				if (bVar0)
				{
					bVar11 = true;
				}
				else
				{
					bVar11 = bVar2;
				}
				if (bVar11)
				{
					if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_SETTINGS_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 5:
				bVar11 = bVar3;
				if (bVar11)
				{
					if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!bVar1)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_INVITE_FOOTER");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "");
						bVar12 = true;
					}
				}
				break;
			case 6:
				bVar11 = (!bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_LEAVE_FOOTER");
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 7:
				bVar11 = (bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (func_443())
					{
						sVar9 = MISC::VAR_STRING(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (bVar7)
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_STANDDOWN_FOOTER");
					}
					else if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
						bVar12 = true;
					}
					else
					{
						sVar9 = MISC::VAR_STRING(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
		}
		if (func_458() == iVar14)
		{
			sVar8 = sVar9;
			func_70(sVar8, 27.64779f);
		}
		if (func_1604(&(Global_1940239.f_1556.f_149.f_126.f_1), iVar10) != bVar11)
		{
			func_1605(&(Global_1940239.f_1556.f_149.f_126.f_1), iVar10, bVar11);
		}
		if (func_1606(&(Global_1940239.f_1556.f_149.f_126.f_1), iVar10) != bVar12)
		{
			func_1607(&(Global_1940239.f_1556.f_149.f_126.f_1), iVar10, bVar12);
		}
		iVar10++;
	}
}

void func_893()
{
	int iVar0;

	if (!func_1583())
	{
		return;
	}
	if (func_1286() == 1)
	{
		func_21();
		func_62();
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (func_1608(func_1584(), iVar0))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_44.f_65, func_1584());
			func_1086(func_1584());
			func_199(2);
		}
	}
}

void func_894()
{
	if (Global_1940239.f_1556.f_149.f_184.f_93 != -1)
	{
		if ((MISC::GET_GAME_TIMER() - Global_1940239.f_1556.f_149.f_184.f_93) >= 2000)
		{
			Global_1940239.f_1556.f_149.f_184.f_93 = -1;
		}
	}
}

bool func_895()
{
	return Global_1940239.f_1556.f_149.f_184.f_2 != 0;
}

void func_896()
{
	float fVar0;
	vector3 vVar1;
	int iVar5;

	fVar0 = -1.366675E-05f;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar0))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					iVar5 = vVar1.z;
					switch (iVar5)
					{
						case 2074623703:
							func_1609();
							func_199(8);
							func_363();
							break;
						case 1400745903:
							func_363();
							break;
					}
					break;
			}
		}
		UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar0);
	}
}

void func_897(var uParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	float fVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	float fVar12;
	char* sVar13;
	char* sVar14;
	int iVar15;
	bool bVar16;
	bool bVar17;
	int iVar18;
	int iVar19;
	var uVar20;
	int iVar21;

	if (!func_227(uParam0))
	{
		return;
	}
	bVar0 = func_197(uParam0);
	bVar1 = func_867(uParam0);
	bVar2 = func_201(uParam0);
	bVar3 = func_1594(uParam0);
	bVar4 = func_1595(16);
	bVar5 = (((func_909() || func_910()) || (func_1596(0, 0, 1) && bVar4 == 0)) || func_915());
	bVar6 = func_1218(PLAYER::PLAYER_ID(), 1, 1);
	if (!func_1610())
	{
		if (func_861(uParam0))
		{
			iVar7 = 1;
			fVar8 = 2.107511E-34f;
		}
		else
		{
			iVar7 = 0;
			fVar8 = 1.253668E+16f;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1940239.f_1556.f_149.f_184.f_3, func_58(37), iVar7);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Global_1940239.f_1556.f_149.f_184.f_3, func_58(36), fVar8);
		if (func_1611(uParam0) && !bVar6)
		{
			iVar9 = 1;
			fVar10 = -1.311538E+28f;
		}
		else
		{
			iVar9 = 0;
			fVar10 = 4.632166f;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1940239.f_1556.f_149.f_184.f_63, func_58(37), iVar9);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(Global_1940239.f_1556.f_149.f_184.f_63, func_58(36), fVar10);
		iVar11 = func_1612(uParam0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(Global_1940239.f_1556.f_149.f_184.f_33, func_58(37), iVar11);
	}
	if (!bVar3)
	{
		func_1086(func_890(uParam0));
	}
	fVar12 = 27.64779f;
	sVar13 = "";
	sVar14 = "";
	iVar21 = 8;
	iVar15 = 0;
	while (iVar15 < iVar21)
	{
		iVar18 = func_1613(iVar15, 1);
		func_1614(iVar18, &uVar20);
		iVar19 = uVar20;
		bVar16 = false;
		bVar17 = false;
		sVar14 = "";
		switch (iVar18)
		{
			case 630752600:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar1) && !func_421());
				func_941(&(Global_1940239.f_1556.f_149.f_184.f_3), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (uParam0->f_52)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
				}
				else
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
				}
				break;
			case 55609673:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar2) && bVar1);
				func_941(&(Global_1940239.f_1556.f_149.f_184.f_33), bVar17);
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (!bVar2)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_TEMP_OUTFIT");
				}
				else
				{
					switch (func_1612(uParam0))
					{
						case 0:
							sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
							break;
						default:
							sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
							break;
					}
				}
				break;
			case 845045048:
				bVar16 = true;
				bVar17 = (((bVar3 && bVar1) && !func_1162()) && !bVar6);
				func_941(&(Global_1940239.f_1556.f_149.f_184.f_63), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (bVar6)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF_PASSIVE");
				}
				else if (uParam0->f_53)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
				}
				else
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
				}
				break;
			case -1676224755:
				bVar16 = true;
				bVar17 = (func_1615(uParam0->f_1) && bVar3);
				break;
			case -353068451:
				bVar16 = true;
				if (bVar16)
				{
					if (bVar3 && !bVar1)
					{
						sVar14 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (!bVar3)
					{
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (bVar5)
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar3 == 0)
					{
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (func_77(PLAYER::PLAYER_ID()) != -1 && func_449(func_77(PLAYER::PLAYER_ID()), 512))
					{
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
					}
					else if (Global_1142409.f_2019 >= 6 && Global_1142409.f_2019 <= 12)
					{
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
					}
					else if (func_937())
					{
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
					}
					else
					{
						bVar17 = ((bVar3 && bVar1) && func_882(1, 1));
						sVar14 = MISC::VAR_STRING(2, "NET_CAMP_SETTINGS_LOCATION_FOOTER");
					}
				}
				break;
			case 1527899327:
				bVar16 = true;
				bVar17 = (((((bVar3 && bVar2) && bVar1) && func_99()) && (NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) || !MISC::IS_ORBIS_VERSION())) && NETWORK::_UGC_HAS_PRIVILEGE());
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = MISC::VAR_STRING(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
				}
				else
				{
					sVar14 = func_486(&fVar12);
				}
				break;
			case -750400740:
				bVar16 = (bVar0 && !bVar3);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_421())
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_ABANDON_FOOTER");
					}
					else
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar17 = true;
					}
					bVar17 = ((bVar0 && !bVar3) && !bVar5);
				}
				break;
			case 695290261:
				bVar16 = (bVar3 && bVar0);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_421())
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_CONTENT_LOCK_DISBAND_FOOTER");
					}
					else
					{
						sVar14 = MISC::VAR_STRING(2, "NM_MW_POSSE_DISBAND_LINK_FOOTER");
						bVar17 = true;
					}
				}
				break;
		}
		if (func_458() == iVar19)
		{
			if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar14))
			{
				sVar13 = sVar14;
				func_70(sVar13, fVar12);
			}
		}
		if (func_1604(&(Global_1940239.f_1556.f_149.f_184.f_1), iVar15) != bVar16)
		{
			func_1605(&(Global_1940239.f_1556.f_149.f_184.f_1), iVar15, bVar16);
		}
		if (func_1606(&(Global_1940239.f_1556.f_149.f_184.f_1), iVar15) != bVar17)
		{
			func_1607(&(Global_1940239.f_1556.f_149.f_184.f_1), iVar15, bVar17);
		}
		iVar15++;
	}
}

void func_898(int iParam0)
{
	switch (Global_1940239.f_1556.f_756.f_2)
	{
		case 0:
			func_868();
			func_55(1);
			func_1063(&(Global_1940239.f_1556.f_756), 1);
			break;
		case 1:
			func_1617(iParam0, func_1616(func_911(0)));
			func_1063(&(Global_1940239.f_1556.f_756), 2);
			break;
		case 2:
			if (!func_328())
			{
				return;
			}
			func_55(1);
			func_1063(&(Global_1940239.f_1556.f_756), 1);
			break;
	}
}

void func_899(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205550;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205811;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205906;
			uParam0->f_11++;
			uParam0->f_12 = 206101;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206292;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206354;
			uParam0->f_11++;
			uParam0->f_12 = 206101;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			uParam0->f_12 = 206101;
			uParam0->f_13 = 1;
			break;
	}
}

void func_900(var uParam0, bool bParam1)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_1))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
}

int func_901()
{
	return Global_1896762.f_322;
}

int func_902(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1940239.f_1556.f_9452)
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(uParam0[iVar0 /*3*/], uParam1))
		{
			return (uParam0[iVar0 /*3*/])->f_2;
		}
		iVar0++;
	}
	return -1;
}

void func_903(int iParam0)
{
	Global_1896762.f_322.f_1 = iParam0;
}

void func_904(int iParam0)
{
	Global_1896762.f_322.f_2 = iParam0;
}

void func_905(int iParam0)
{
	Global_1896762.f_322 = iParam0;
}

int func_906()
{
	return Global_1896762.f_322.f_2;
}

bool func_907(var uParam0, var uParam1)
{
	struct<2> Var0[100];

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Var0[0 /*2*/]), &uParam0, 2);
	func_1625(&Var0, 1);
	return true;
}

int func_908()
{
	return Global_1896762.f_322.f_1;
}

bool func_909()
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
	if (!func_821(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_910()
{
	return Global_263042[Global_1295619 /*65*/] > 2;
}

struct<2> func_911(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_912(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_913(var uParam0)
{
	int iVar0;
	struct<23> Var1;
	int iVar64;

	if (!func_34(*uParam0))
	{
		return false;
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	Var1.f_22 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iVar0, &Var1))
	{
		iVar64 = 0;
		while (iVar64 <= (Var1.f_21 - 1))
		{
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var1.f_22[iVar64 /*4*/]), uParam0))
			{
				return true;
			}
			iVar64++;
		}
	}
	return false;
}

bool func_914()
{
	return Global_1900460.f_67;
}

bool func_915()
{
	int iVar0;
	int iVar1;

	iVar0 = func_1626(PLAYER::PLAYER_ID());
	if (!func_1627(iVar0))
	{
		return false;
	}
	if (!func_1628(iVar0))
	{
		return false;
	}
	iVar1 = GANG::NETWORK_GET_GANG_LEADER(func_1629(iVar0));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return false;
	}
	return func_1630(iVar1, 1);
}

int func_916(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return -1;
	}
	bVar0 = false;
	iVar1 = 255;
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
	{
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return 0;
	}
	bVar0 = true;
	if (func_914())
	{
		return 1;
	}
	if (func_915())
	{
		return 2;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(-1.624083E-27f))
	{
		return 3;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		return 13;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(Global_1295619.f_10))
	{
		return 13;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10) >= GANG::_NETWORK_GET_GANG_SIZE(Global_1295619.f_10))
	{
		return 4;
	}
	switch (GANG::_0x48D82C83987E18E4(bParam0))
	{
		case 0:
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
			{
				return 0;
			}
			else if (bVar0 && !func_707(iVar1))
			{
				if (!NETWORK::_NETWORK_CAN_RECEIVE_INVITE_FROM_HANDLE(bParam0))
				{
					return 6;
				}
				else if (bVar0 && GANG::_0xDA801F7F6A5278D3(iVar1))
				{
					return 7;
				}
				else
				{
					return 1;
				}
			}
			else if ((bVar0 && !func_1631(iVar1)) && func_420(Global_1295619.f_10))
			{
				return 8;
			}
			else if (!func_709())
			{
				return 14;
			}
			else if ((bVar0 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1)) && func_706(iVar1))
			{
				if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, iVar1))
				{
					return 9;
				}
			}
			return 5;
		case 1:
			return 9;
		case 2:
			return 10;
		case 3:
			return 11;
		default:
			break;
	}
	return 5;
}

bool func_917(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 2:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 6:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_POSSE_BLOCKED_INVITE"), 128);
			return true;
		case 7:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_POSSE_RECENTLY_KICKED"), 128);
			return true;
		case 9:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_SENT"), 128);
			return true;
		case 10:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_REJECTED"), 128);
			return true;
		case 11:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_POSSE_INVITE_ACCEPTED"), 128);
			return true;
		case 14:
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_NO_INVITE_LEFT"), 128);
			return true;
		default:
			break;
	}
	return false;
}

int func_918(bool bParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return -1;
	}
	if (func_439(NETWORK::NETWORK_SESSION_GET_SESSION_FLAGS(), 8))
	{
		return 5;
	}
	if (!func_247())
	{
		return -1;
	}
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
	{
		return 4;
	}
	if (!NETWORK::_0xA2837A5E21FB5A58(bParam0))
	{
		if (NETWORK::_0xD7BAD4062074B9C1(bParam0))
		{
			return 0;
		}
	}
	if (NETWORK::_0xA2837A5E21FB5A58(bParam0))
	{
		if (NETWORK::_0xC028B3F52C707C49(bParam0))
		{
			switch (NETWORK::_0xCA58D4FD20D70F24(bParam0))
			{
				case 0:
					if (NETWORK::_0xD7BAD4062074B9C1(bParam0))
					{
						return 0;
					}
					return 1;
				case 2:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (!NETWORK::_0xD7BAD4062074B9C1(bParam0))
	{
		return 6;
	}
	return 0;
}

bool func_919()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

bool func_920()
{
	if (NETWORK::NETWORK_IS_FEATURE_SUPPORTED(3))
	{
		return false;
	}
	if (!NETWORK::NETWORK_CAN_REFRESH_FRIEND_PAGE())
	{
		return false;
	}
	return true;
}

int func_921(int iParam0)
{
	if (!func_717(2))
	{
		return 0;
	}
	if (!func_717(1))
	{
		return 0;
	}
	if (!func_1196(iParam0))
	{
		return 0;
	}
	if (func_1198(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_922(var uParam0, var uParam1)
{
	int iVar0;
	struct<4> Var1;
	float fVar5;
	struct<10> Var6;
	int iVar20;
	int iVar21;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar0 = func_570(1);
	Var1 = { func_571(1) };
	Var6.f_9 = -5.45926E-19f;
	fVar5 = func_572(*uParam0);
	iVar20 = INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(iVar0, &Var1, fVar5);
	if (iVar20 > 56)
	{
		iVar20 = 56;
	}
	iVar21 = 0;
	while (iVar21 <= (iVar20 - 1))
	{
		if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT(iVar0, &Var1, fVar5, iVar21, &Var6))
		{
		}
		else
		{
			func_1632(uParam0, uParam1, Var6.f_4, iVar21);
		}
		iVar21++;
	}
	return 1;
}

int func_923(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar1 = 3;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (uParam1->f_2[iVar0] == 0)
		{
			if (iVar0 == 0)
			{
				Global_1940239.f_1556.f_6258.f_5 = 1;
				iVar2 = Global_1940239.f_1556.f_6258;
				func_153(&(Global_1940239.f_1556.f_6258), &(Global_17418.f_55.f_2501[iVar2 /*7*/]));
				Global_1940239.f_1556.f_6258.f_4 = 1;
			}
		}
		else
		{
			func_1632(uParam0, uParam1, uParam1->f_2[iVar0], iVar0);
			iVar0++;
		}
	}
	return 1;
}

bool func_924()
{
	return Global_1940239.f_1556.f_9449 != 0;
}

int func_925()
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

bool func_926(bool bParam0, int iParam1)
{
	int iVar0;
	char* sVar1;

	if (iParam1 < 0 || iParam1 > 8)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	func_1633();
	if (func_1634(bParam0))
	{
		return false;
	}
	sVar1 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1940239.f_1556.f_1118.f_55);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1118.f_55, "");
	func_1635(bParam0);
	NETWORK::_REPORT_PLAYER(iVar0, iParam1, sVar1, "");
	return true;
}

void func_927()
{
	struct<19> Var0;

	Var0.f_2 = 0;
	Var0.f_3 = MISC::GET_HASH_KEY("IB_OK");
	Var0.f_3.f_3 = 0;
	func_697(&Var0);
	func_726(Var0, "CWS_THANKS", "NM_PLAYER_REPORT_CONFIRM");
}

void func_928(bool bParam0)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;

	bVar0 = func_1203();
	bVar1 = ((func_739(2) && bParam0) && func_1636(Global_1295619.f_10, func_233(2), 0));
	bVar2 = ((func_739(3) && bParam0) && func_1636(Global_1295619.f_10, func_233(3), 0));
	bVar3 = ((func_739(4) && bParam0) && func_1636(Global_1295619.f_10, func_233(4), 0));
	bVar4 = ((func_739(8) && bParam0) && func_1636(Global_1295619.f_10, func_233(8), 0));
	bVar5 = ((func_739(9) && bParam0) && func_1636(Global_1295619.f_10, func_233(9), 0));
	bVar6 = ((func_739(19) && bParam0) && func_1636(Global_1295619.f_10, func_233(19), 0));
	bVar7 = ((func_739(18) && bParam0) && func_1636(Global_1295619.f_10, func_233(18), 0));
	bVar8 = ((func_739(20) && bParam0) && func_1637(1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_1, ((bVar1 || bVar2) || bVar3));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_5, (bVar4 || bVar5));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_2, bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_3, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_4, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_6, bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_7, bVar5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_8, ((func_739(0) && bParam0) && func_1636(Global_1295619.f_10, func_233(0), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_9, ((func_739(12) && bParam0) && func_1636(Global_1295619.f_10, func_233(12), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_10, ((func_739(1) && bParam0) && func_1636(Global_1295619.f_10, func_233(1), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_16, ((bParam0 && func_1636(Global_1295619.f_10, 3, 0)) && bVar0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_17, (((((((bVar1 || bVar2) || bVar3) || bVar4) || bVar5) || func_739(0)) || func_739(1)) && bParam0));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_14, bVar6);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_15, bVar7);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_18, bVar8);
	bVar9 = (func_1638(2) && func_739(2));
	bVar10 = (func_1638(3) && func_739(3));
	bVar11 = (func_1638(4) && func_739(4));
	bVar12 = (func_1638(8) && func_739(8));
	bVar13 = (func_1638(9) && func_739(9));
	bVar14 = (func_1638(19) && func_739(19));
	bVar15 = (func_1638(18) && func_739(18));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_20, ((bVar9 || bVar10) || bVar11));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_24, (bVar12 || bVar13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_22, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_23, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_25, bVar12);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_26, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_27, (func_1638(0) && func_739(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_28, (func_1638(12) && func_739(12)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_31, (func_1638(1) && func_739(1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_38, bVar14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_39, bVar15);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_34, ((func_1638(20) && func_739(20)) && func_1637(0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_11, (((MISC::IS_ORBIS_VERSION() && func_739(15)) && bParam0) && func_1636(Global_1295619.f_10, func_233(15), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_13, (((MISC::IS_ORBIS_VERSION() && func_739(16)) && bParam0) && func_1636(Global_1295619.f_10, func_233(16), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_12, (((MISC::IS_ORBIS_VERSION() && func_739(17)) && bParam0) && func_1636(Global_1295619.f_10, func_233(17), 0)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_35, ((MISC::IS_ORBIS_VERSION() && func_1638(15)) && func_739(15)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_37, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1174.f_36, ((MISC::IS_ORBIS_VERSION() && func_1638(17)) && func_739(17)));
}

int func_929()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar2))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar2))
	{
		return 0;
	}
	iVar3 = PED::_GET_RIDER_OF_MOUNT(iVar2, true);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return 0;
	}
	if (func_909())
	{
		return 0;
	}
	if (iVar3 != iVar1)
	{
		return 1;
	}
	if (AITRANSPORT::_IS_TRANSPORT_SEAT_OCCUPIED(iVar2, -2))
	{
		return 1;
	}
	return 0;
}

char* func_930(bool bParam0)
{
	if (bParam0)
	{
		return MISC::VAR_STRING(2, "DISMOUNT_FOOTER");
	}
	return MISC::VAR_STRING(2, "NM_STABLE_NO_MOUNT");
}

void func_931()
{
	return;
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1.095094E-28f))
	{
		if (Global_1940239.f_1556.f_1353.f_460 == 6)
		{
			func_1639(0);
		}
		else
		{
			func_1639(Global_1940239.f_1556.f_1353.f_460 + 1);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, -2.800969E+07f))
	{
		if (Global_1940239.f_1556.f_1353.f_460 == 0)
		{
			func_1639(6);
		}
		else
		{
			func_1639((Global_1940239.f_1556.f_1353.f_460 - 1));
		}
	}
}

void func_932()
{
	int iVar0;
	int iVar1;
	struct<23> Var2;
	int iVar26;
	bool bVar27;
	bool bVar28;
	float fVar29;
	int iVar30;
	float fVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	float fVar35;
	int iVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	int iVar43;
	bool bVar44;
	int iVar45;
	float fVar46;
	char* sVar47;
	int iVar48;

	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		func_70(MISC::VAR_STRING(2, "HORSE_LIST_EMPTY"), 27.64779f);
		func_538(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_536(Global_1940239.f_1556.f_1353, iVar0, iVar1, 0, &Var2, 1))
	{
		func_538(iVar0);
		return;
	}
	iVar26 = func_1640(&Var2, Var2.f_10);
	bVar27 = true;
	bVar28 = false;
	fVar29 = -1.100482E+31f;
	if (bVar27)
	{
		if (iVar26 == 1)
		{
			fVar29 = joaat("BLIP_HORSE_OWNED_BONDING_1");
		}
		else if (iVar26 == 2)
		{
			fVar29 = 1.031948E-24f;
		}
		else if (iVar26 == 3)
		{
			fVar29 = 1.41633E-16f;
		}
		else if (iVar26 == 4)
		{
			fVar29 = -9.127157E+15f;
		}
	}
	else if (bVar28)
	{
		if (iVar26 == 0)
		{
			fVar29 = 2.693383E-05f;
		}
		else if (iVar26 == 1)
		{
			fVar29 = 2.338986E-21f;
		}
		else if (iVar26 == 2)
		{
			fVar29 = 6.262804E-32f;
		}
		else if (iVar26 == 3)
		{
			fVar29 = -1.388632E+35f;
		}
		else if (iVar26 == 4)
		{
			fVar29 = -3.785293E+09f;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_469, fVar29);
	iVar30 = ((func_1641(Var2.f_11) + iVar26) - 1);
	fVar31 = (IntToFloat(iVar30 + 1) / 1092616192);
	iVar32 = func_543(func_1642(&Var2, 0), 20, 100);
	iVar33 = BUILTIN::ROUND((IntToFloat(iVar32) * 1041865114));
	iVar34 = ((func_1643(Var2.f_11) + iVar26) - 1);
	fVar35 = (IntToFloat(iVar34 + 1) / 1092616192);
	iVar36 = func_543(func_1642(&Var2, 1), 20, 100);
	iVar37 = BUILTIN::ROUND((IntToFloat(iVar36) * 1041865114));
	iVar38 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (func_1258(iVar38, &Var2))
	{
		iVar30 = func_1644(iVar38);
		fVar31 = ((IntToFloat(iVar30 + 1) / 1092616192) * (BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(iVar38)) / BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(iVar38, false))));
		iVar32 = func_1645(iVar38, 0);
		iVar33 = BUILTIN::ROUND((IntToFloat(iVar32) * 1041865114));
		iVar34 = func_1646(iVar38);
		fVar35 = ((IntToFloat(iVar34 + 1) / 1092616192) * PED::_GET_PED_STAMINA_NORMALIZED(iVar38));
		iVar36 = func_1645(iVar38, 1);
		iVar37 = BUILTIN::ROUND((IntToFloat(iVar36) * 1041865114));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_474, iVar30 + 1);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1940239.f_1556.f_1353.f_475, fVar31);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1940239.f_1556.f_1353.f_476, 1f);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_477, iVar33);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_470, iVar34 + 1);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1940239.f_1556.f_1353.f_471, fVar35);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1940239.f_1556.f_1353.f_472, 1f);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1353.f_473, iVar37);
	bVar39 = false;
	bVar40 = func_1240(&Var2, -8.769617E+23f, 0) > 0;
	bVar41 = func_768(&Var2, Var2.f_10, 1);
	iVar42 = func_1238(Var2);
	iVar43 = func_1647(Var2);
	bVar44 = iVar42 > Global_1295619.f_16;
	iVar45 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar42 - Global_1295619.f_16)) / 1114636288));
	fVar46 = func_541(Var2.f_11);
	sVar47 = func_539(0);
	if (func_540(Var2, -2.485806E+15f, 0, -1) == 1.956641E-20f)
	{
		sVar47 = func_539(1);
	}
	iVar48 = func_1243(bVar41, bVar44, bVar39);
	switch (iVar48)
	{
		case 0:
		case 1:
			if (bVar40)
			{
				func_70(MISC::VAR_STRING(42, "HORSE_INFO_SUMMARY", sVar47, func_549(fVar46, Var2.f_22), iVar26), 27.64779f);
			}
			else
			{
				func_70(MISC::VAR_STRING(2, "HORSE_INFO_SUMMARY_UNSADDLED"), 27.64779f);
			}
			break;
		case 2:
			func_70(MISC::VAR_STRING(2, "HORSE_SUMMARY_DEAD", func_412(4.136629E+26f, 0, 8.497754E-37f)), 27.64779f);
			break;
		case 3:
			if (iVar43 == 0)
			{
				if (iVar45 == 1)
				{
					func_70(MISC::VAR_STRING(2, "HORSE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar45), 27.64779f);
				}
				else
				{
					func_70(MISC::VAR_STRING(2, "HORSE_SUMMARY_DEAD_RECOVERING", iVar45), 27.64779f);
				}
			}
			else if (iVar45 == 1)
			{
				func_70(MISC::VAR_STRING(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar45), 27.64779f);
			}
			else
			{
				func_70(MISC::VAR_STRING(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING", iVar45), 27.64779f);
			}
			break;
	}
	func_538(iVar0);
}

int func_933()
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return 0;
	}
	if (func_909())
	{
		return 0;
	}
	if (!func_1648(iVar1))
	{
		return 0;
	}
	return 1;
}

char* func_934(bool bParam0)
{
	if (bParam0)
	{
		return MISC::VAR_STRING(2, "DISMOUNT_VEHICLE_FOOTER");
	}
	return MISC::VAR_STRING(2, "NM_STABLE_VEHICLE_NO_MOUNT");
}

void func_935()
{
	if (PAD::IS_CONTROL_JUST_PRESSED(2, 1.095094E-28f))
	{
		if (Global_1940239.f_1556.f_1935.f_382 == 0)
		{
			func_1649(0);
		}
		else
		{
			func_1649(Global_1940239.f_1556.f_1935.f_382 + 1);
		}
	}
	else if (PAD::IS_CONTROL_JUST_PRESSED(2, -2.800969E+07f))
	{
		if (Global_1940239.f_1556.f_1935.f_382 == 0)
		{
			func_1649(0);
		}
		else
		{
			func_1649((Global_1940239.f_1556.f_1935.f_382 - 1));
		}
	}
}

void func_936()
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	struct<4> Var44;
	int iVar48;
	int iVar49;
	int iVar50;
	bool bVar51;
	int iVar52;
	bool bVar53;
	bool bVar54;
	int iVar55;
	int iVar56;
	bool bVar57;
	int iVar58;
	int iVar59;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		func_70(MISC::VAR_STRING(2, "VEHICLE_LIST_EMPTY"), 27.64779f);
		func_538(iVar0);
		return;
	}
	Var20.f_10 = -1;
	if (!func_536(Global_1940239.f_1556.f_1935, iVar0, iVar1, 2, &Var20, 0))
	{
		func_538(iVar0);
		return;
	}
	Var44 = { func_789(2) };
	func_1261(&Var44, &Var20, &iVar48);
	func_1262(&Var44, &Var20, &iVar49);
	iVar50 = PLAYER::PLAYER_ID();
	bVar51 = false;
	iVar52 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar50);
	if (ENTITY::DOES_ENTITY_EXIST(iVar52))
	{
		if (func_1258(iVar52, &Var20))
		{
			bVar51 = true;
		}
	}
	bVar53 = false;
	bVar54 = func_768(&Var20, Var20.f_10, 1);
	iVar55 = func_1259(Var20);
	iVar56 = func_1650(Var20);
	bVar57 = iVar55 > Global_1295619.f_16;
	iVar58 = BUILTIN::CEIL((BUILTIN::TO_FLOAT((iVar55 - Global_1295619.f_16)) / 1114636288));
	iVar59 = func_1263(bVar54, bVar57, bVar53, bVar51);
	switch (iVar59)
	{
		case 0:
			if (!func_1264(iVar48, iVar49, 1, 1))
			{
				func_70(MISC::VAR_STRING(2, "VEHICLE_INFO_SUMMARY_ACTIVE"), 27.64779f);
			}
			break;
		case 1:
			if (!func_1264(iVar48, iVar49, 1, 0))
			{
				func_70(MISC::VAR_STRING(2, "VEHICLE_INFO_SUMMARY_STABLED"), 27.64779f);
			}
			break;
		case 2:
			if (!func_1264(iVar48, iVar49, 1, 0))
			{
				func_70(MISC::VAR_STRING(2, "VEHICLE_INFO_SUMMARY_STABLED"), 27.64779f);
			}
			break;
		case 3:
			func_70(MISC::VAR_STRING(2, "VEHICLE_SUMMARY_DEAD", func_412(2.450426E-08f, 0, 8.497754E-37f)), 27.64779f);
			break;
		case 4:
			if (iVar56 == 0)
			{
				if (iVar58 == 1)
				{
					func_70(MISC::VAR_STRING(2, "VEHICLE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar58), 27.64779f);
				}
				else
				{
					func_70(MISC::VAR_STRING(2, "VEHICLE_SUMMARY_DEAD_RECOVERING", iVar58), 27.64779f);
				}
			}
			else if (iVar58 == 1)
			{
				func_70(MISC::VAR_STRING(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar58), 27.64779f);
			}
			else
			{
				func_70(MISC::VAR_STRING(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING", iVar58), 27.64779f);
			}
			break;
	}
	func_538(iVar0);
}

bool func_937()
{
	int iVar0;

	iVar0 = func_77(PLAYER::PLAYER_ID());
	if (iVar0 != -1)
	{
		if (Global_1141317[iVar0 /*27*/].f_18.f_1 != 0 && func_613(Global_1141317[iVar0 /*27*/].f_18, 1))
		{
			return true;
		}
	}
	return false;
}

int func_938(int iParam0)
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return func_77(iVar0);
	}
	return -1;
}

bool func_939(int iParam0)
{
	return func_613(Global_1147168.f_8, iParam0);
}

char* func_940()
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	iVar0 = func_77(PLAYER::PLAYER_ID());
	if (!func_450(iVar0))
	{
		return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		if (func_78(iVar0))
		{
			if (func_79(iVar0))
			{
				return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED");
			}
			else
			{
				iVar1 = func_1651(iVar0);
				if (iVar1 == 1)
				{
					return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN_SINGULAR", iVar1);
				}
				else
				{
					return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN", iVar1);
				}
			}
		}
		else if (func_81(iVar0))
		{
			return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED");
		}
		else
		{
			iVar2 = func_1651(iVar0);
			if (iVar2 == 1)
			{
				return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN_SINGULAR", iVar2);
			}
			else if (iVar2 <= 0)
			{
				return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOCKED");
			}
			else
			{
				return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN", iVar2);
			}
		}
	}
	else if (func_78(iVar0))
	{
		return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_MEMBER");
	}
	else
	{
		return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_MEMBER");
	}
	return MISC::VAR_STRING(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
}

void func_941(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, bParam1);
}

void func_942()
{
	DATABINDING::_0x3BF0767CF33FCC88(Global_1940239.f_1556.f_2385.f_43);
}

var func_943()
{
	return Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_2;
}

bool func_944(var uParam0)
{
	return func_1652(Global_1295619.f_12, uParam0);
}

void func_945(int iParam0, int iParam1)
{
	struct<30> Var0;
	char cVar30[64];
	char cVar38[64];
	char cVar46[64];

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar30, "Camp_Location_Root_", 64);
	StringCopy(&cVar38, "Override_Camp_Location_Root_", 64);
	StringIntConCat(&cVar30, iParam0, 64);
	StringIntConCat(&cVar38, iParam0, 64);
	StringCopy(&cVar46, MISC::VAR_STRING(2, func_647(iParam1, 0)), 64);
	Var0.f_16 = { cVar46 };
	if (func_170() || !func_247())
	{
		Var0.f_7 = -5.222598E+14f;
	}
	else
	{
		Var0.f_7 = NaNf;
	}
	Var0.f_6 = 2.025032E+19f;
	Var0.f_5 = 2.025032E+19f;
	Var0.f_4 = 1.608566E+13f;
	Var0.f_24 = 3.347692E+13f;
	Var0.f_25 = -1.367564E-05f;
	Var0.f_26 = 0;
	func_1339(&(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1), Global_1940239.f_1556.f_2385.f_42, cVar30, Var0);
	func_1339(&(Global_1940239.f_1556.f_2385.f_402[iParam0 /*27*/].f_1), Global_1940239.f_1556.f_2385.f_42, cVar38, Var0);
	Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1, "camp_selection_district", iParam1);
	Global_1940239.f_1556.f_2385.f_402[iParam0 /*27*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1940239.f_1556.f_2385.f_402[iParam0 /*27*/].f_1, "camp_selection_district", iParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_2385.f_43, iParam0, "pm_dynamic_text_and_end_image", Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1);
}

bool func_946(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_170())
	{
		if (func_189(&iVar1, &iVar0))
		{
			if (iVar0 == iParam0 && iVar1 == iParam1)
			{
				return true;
			}
		}
	}
	else
	{
		if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
		{
			return false;
		}
		if (Global_1295619 < 0 || Global_1295619 >= 32)
		{
			return false;
		}
		if (!func_878(Global_1295619.f_149[Global_1295619], 0))
		{
			return false;
		}
		vVar2 = { func_566(Global_1295619) };
		if (vVar2.y == iParam1 && vVar2.x == func_563(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_947(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	char cVar0[64];

	StringCopy(&cVar0, MISC::VAR_STRING(2, func_647(iParam1, 0)), 64);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1.f_19, &cVar0);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/], iParam1);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_2385.f_402[iParam0 /*27*/]))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_402[iParam0 /*27*/], iParam1);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1.f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1.f_10, (bParam3 && !bParam4));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_2385.f_50[iParam0 /*27*/].f_1.f_22, bParam4);
	if (func_1541() == iParam0)
	{
		func_1653(iParam1);
		func_114(iParam2, iParam1);
	}
}

bool func_948(var uParam0)
{
	int iVar0;

	if (func_1654() != -1)
	{
		return func_1655(func_1654(), Global_1295619.f_12, uParam0);
	}
	iVar0 = func_1656(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_38));
	return func_949(iVar0, Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_38.f_4, uParam0);
}

bool func_949(int iParam0, vector3 vParam1, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam4 = 1;
			uParam4->f_1[0] = NaNf;
			break;
		case 1:
			*uParam4 = 2;
			uParam4->f_1[0] = 3.068815E+10f;
			uParam4->f_1[1] = 1.058431E+15f;
			break;
		case 2:
			*uParam4 = 3;
			uParam4->f_1[0] = 3.438718E+18f;
			uParam4->f_1[1] = -1.1942E-17f;
			uParam4->f_1[2] = -7.163212E+12f;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -2733.137f;
			uParam4->f_1[1] = 9.93596E+16f;
			uParam4->f_1[2] = -4.821723E-29f;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = -1.358141E+31f;
			uParam4->f_1[1] = 6.497398E-07f;
			uParam4->f_1[2] = -2.334456E-33f;
			uParam4->f_1[3] = -1.777127E-29f;
			break;
		default:
			return false;
	}
	if (!func_1657(vParam1, uParam4))
	{
		return false;
	}
	return true;
}

void func_950(int iParam0)
{
	int iVar0;

	if (DATABINDING::_DATABINDING_READ_HASH(Global_1940239.f_1556.f_44.f_70) != func_1658(iParam0))
	{
		iVar0 = func_1658(iParam0);
		if (!TXD::DOES_STREAMED_TXD_EXIST(iVar0))
		{
			return;
		}
		TXD::REQUEST_STREAMED_TXD(iVar0, false);
		if (!TXD::HAS_STREAMED_TXD_LOADED(iVar0))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_70, iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_44.f_69, -1.931351E+13f);
	}
	func_111(iParam0);
}

bool func_951(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1896177107:
			return true;
		case 2042309940:
			return bParam1;
		default:
			break;
	}
	return false;
}

void func_952(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27)
{
	func_1659(uParam0, Param1.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_30, Param1);
}

void func_953()
{
	vector3 vVar0;

	if (!func_420(Global_1295619.f_10))
	{
		return;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return;
	}
	vVar0 = { MAP::_GET_WAYPOINT_COORDS() };
	vVar0.f_2 = PATHFIND::GET_APPROX_FLOOR_FOR_POINT(vVar0.x, vVar0.y);
	PATHFIND::_0xCF213A5FC3ABFC08(vVar0.x, vVar0.y, 50f);
}

void func_954()
{
	if (!func_1040(&(Global_1220600.f_5)))
	{
		func_1041(&(Global_1220600.f_5), 0);
	}
	if (func_1660(Global_1220600) > 40 && func_1042(&(Global_1220600.f_5)) > 2f)
	{
		func_1041(&(Global_1220600.f_5), 1);
		func_1661(Global_1220600);
	}
}

bool func_955(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if (!func_1662(iParam0))
	{
		return false;
	}
	if (!func_1298(iParam0))
	{
		return false;
	}
	if (func_1218(PLAYER::PLAYER_ID(), 1, 1) && !func_1663(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return true;
		case 4:
		case 5:
			return func_1664(iParam0);
		case 6:
			return func_1665();
		case 7:
			return func_1666();
		case 8:
		case 9:
		case 10:
			return func_1667(iParam0);
		default:
			break;
	}
	return false;
}

bool func_956(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/] == 0)
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/]), 3);
	return true;
}

int func_957(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 0;
	}
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/] = 0;
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/].f_1 = 255;
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/].f_2 = -1;
	return 1;
}

bool func_958(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/] == 1)
		{
			if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_1 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_959()
{
	var uVar0[2];
	int iVar3;
	int iVar4;
	int iVar5;

	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar3 /*3*/])
		{
			if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar3 /*3*/].f_2 <= -1 || Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar3 /*3*/].f_2 >= 2)
			{
			}
			uVar0[Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar3 /*3*/].f_2]++;
		}
		iVar3++;
	}
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 0)
		{
		}
		else if (uVar0[iVar5] < uVar0[iVar4])
		{
			iVar4 = iVar5;
		}
		iVar5++;
	}
	return iVar4;
}

bool func_960(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/] == 0)
		{
			if (func_1668(iVar0, iParam0, iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_961(bool bParam0, char* sParam1, int iParam2, int iParam3)
{
	if (Global_1896762.f_368.f_2563 >= 32)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_1), bParam0, 2);
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_19 = iParam2;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_3 = { func_345(sParam1) };
	if (func_1528(bParam0) == 0)
	{
		Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_22 = -0.0003592506f;
	}
	else
	{
		Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_22 = -1.817237E+22f;
	}
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_23 = iParam3;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/] = 0;
	Global_1896762.f_368.f_2563++;
	return true;
}

void func_962(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 211436;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 211562;
			uParam0->f_11++;
			break;
	}
}

bool func_963(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/] == 0)
		{
		}
		else if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/].f_1 == iParam0)
		{
			MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar0 /*3*/]), 3);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_964(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar1 /*3*/])
		{
		}
		else if (Global_1940239.f_1556.f_149.f_280.f_245.f_1[iVar1 /*3*/].f_2 != iParam0)
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_965()
{
	func_1671(func_502() == 0);
}

void func_966()
{
	func_1672(func_504() == 0);
}

void func_967()
{
	func_1673(func_475() == 0);
}

void func_968()
{
	func_1674(func_510() == 0);
}

void func_969()
{
	func_1675(func_512() == 0);
}

void func_970()
{
	bool bVar0;
	float fVar1;

	bVar0 = func_1676();
	if (bVar0)
	{
		func_941(&(Global_1940239.f_1556.f_1220.f_31), 1);
	}
	else
	{
		func_941(&(Global_1940239.f_1556.f_1220.f_31), 0);
	}
	if (func_458() == 2.481738E-36f)
	{
		func_67(1);
		func_68();
		if (!bVar0)
		{
			fVar1 = 4.465091E-08f;
		}
		else
		{
			fVar1 = 27.64779f;
		}
		func_70(func_69(), fVar1);
	}
}

void func_971()
{
	float fVar0;

	fVar0 = 27.64779f;
	func_95();
	if (func_458() == -1.187453f)
	{
		func_93(1);
		func_94();
		func_70(func_506(), fVar0);
	}
}

void func_972()
{
	int iVar0;
	float fVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;

	iVar0 = 3;
	fVar1 = 8.497754E-37f;
	bVar2 = true;
	bVar3 = true;
	if (!func_669())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	else if (!UNLOCK::UNLOCK_IS_UNLOCKED(5.333205E+11f))
	{
		iVar0 = 6;
		bVar2 = false;
	}
	if (func_1677())
	{
		fVar1 = 0.003804697f;
		bVar3 = true;
		iVar0 = 0;
	}
	else if (func_1678())
	{
		fVar1 = -2.401104E+18f;
		bVar3 = true;
		iVar0 = 1;
	}
	else if (func_1679())
	{
		fVar1 = 8.497754E-37f;
		bVar3 = true;
		iVar0 = 2;
	}
	else
	{
		iVar0 = 4;
		bVar2 = false;
		bVar3 = false;
	}
	if (func_919())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	if (func_443())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	func_1680(fVar1, bVar3);
	func_1681(iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_129, bVar2);
	bVar4 = func_1682(5.691162E-38f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_131, (UNLOCK::_UNLOCK_IS_NEW(5.333205E+11f) && !bVar4));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_132, bVar4);
}

bool func_973(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (func_1683())
	{
		return false;
	}
	iVar0 = func_1094(iParam0, 0);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!func_567(iVar0))
	{
		func_144(65536);
		return false;
	}
	return true;
}

bool func_974(int iParam0)
{
	int iVar0;

	if (iParam0 == -1)
	{
		return false;
	}
	if (func_1684(iParam0, 1.708672E-23f))
	{
		return false;
	}
	iVar0 = func_1094(iParam0, 1);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!func_567(iVar0))
	{
		func_144(131072);
		return false;
	}
	return true;
}

void func_975()
{
	func_1685();
}

bool func_976()
{
	if (!func_613(Global_1149157.f_137.f_1, 2))
	{
		return false;
	}
	return func_613(Global_1149157.f_145, 2);
}

void func_977()
{
	if (func_1686())
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_13, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8618.f_13, false);
	}
}

void func_978()
{
	int iVar0[5];
	int iVar6;
	int iVar7;

	if (func_342())
	{
		func_1687();
		iVar6 = 0;
		iVar7 = func_943();
		switch (iVar7)
		{
			case 0:
				func_1687();
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					iVar0[0] = iVar6;
					func_1688(iVar0[0], iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
			case 1:
				func_1687();
				iVar0[0] = func_1689();
				func_1688(iVar0[0], 0);
				break;
			case 2:
				func_1687();
				func_1690(&iVar0);
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					func_1688(iVar0[iVar6], iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
		}
	}
}

void func_979()
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;

	iVar0 = func_407(PLAYER::GET_PLAYER_INDEX(), 1);
	iVar1 = -1;
	iVar4 = DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_8632.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar8 = func_1691();
	iVar9 = func_1692();
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_1556.f_8632.f_274[iVar5]);
		iVar1 = iVar6;
		bVar2 = func_1693(iVar1);
		iVar3 = func_656(bVar2, 0, 1, -1, 1);
		bVar7 = func_1694(bVar2, 1, iVar3, 0);
		if (iVar8 && iVar9)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, -6.803155E+08f);
		}
		else if (func_1474(iVar3))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, -2.512381E+16f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_8, 5.425547E+13f);
		}
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_22, true);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_10, false);
			}
			else
			{
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_22, false);
				DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8632.f_2[iVar5 /*27*/].f_1.f_10, bVar7);
			}
		}
		iVar5++;
	}
}

bool func_980(int iParam0)
{
	return func_354(Global_1896762.f_198, iParam0);
}

void func_981(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = func_1695(iParam0, 1);
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 2)
	{
		return;
	}
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_331.f_2[iVar0]))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_331.f_2[iVar0], bParam1);
}

var func_982()
{
	return Global_1940239.f_1556.f_9756.f_3;
}

void func_983(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205550;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205811;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205906;
			uParam0->f_11++;
			uParam0->f_12 = 213672;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206292;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206354;
			uParam0->f_11++;
			uParam0->f_12 = 213672;
			uParam0->f_13 = 1;
			break;
	}
}

void func_984(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205550;
			uParam0->f_11++;
			uParam0->f_12 = 213961;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206354;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 214269;
			uParam0->f_11++;
			uParam0->f_12 = 213961;
			uParam0->f_13 = 1;
			break;
	}
}

void func_985(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205550;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206292;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206354;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 214405;
			uParam0->f_11++;
			uParam0->f_12 = 214524;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206292;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 206354;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 214405;
			uParam0->f_11++;
			uParam0->f_12 = 214524;
			uParam0->f_13 = 1;
			break;
	}
}

void func_986(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 198743;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 198864;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199001;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199244;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 205550;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 214623;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 214685;
			uParam0->f_11++;
			uParam0->f_12 = 214781;
			uParam0->f_13 = 1;
			break;
	}
}

void func_987()
{
	Global_1896762.f_2932.f_4 = 1;
}

void func_988()
{
	Global_1940239.f_1556.f_756.f_2.f_323 = 0;
	func_1063(&(Global_1940239.f_1556.f_756), 0);
	NETWORK::NETWORK_CLEAR_FOUND_GAMERS();
}

void func_989(int iParam0)
{
	Global_1896762.f_212 = iParam0;
}

void func_990(int iParam0, bool bParam1)
{
	int iVar0;

	if (!func_1704())
	{
		if (bParam1)
		{
			func_182();
			func_868();
		}
		return;
	}
	if (func_1705() == 0)
	{
		if (bParam1)
		{
			if (func_1012() == func_1010())
			{
				if (Global_1896762.f_2932.f_6 == 0)
				{
					func_868();
					func_182();
				}
				else
				{
					func_1706(1);
				}
			}
			else if (func_1707())
			{
				func_868();
				func_182();
			}
			else
			{
				func_1706(1);
			}
		}
	}
	if (func_1705() == 1)
	{
		func_1708(func_1012());
		func_868();
		iVar0 = 0;
		while (iVar0 < Global_1896762.f_2932.f_6)
		{
			if (!func_1709(iParam0, &(Global_1896762.f_2932.f_7.f_1[iVar0 /*10*/])))
			{
			}
			else if (!func_961(&(Global_1896762.f_2932.f_7.f_1[iVar0 /*10*/]), &(Global_1896762.f_2932.f_7.f_1[iVar0 /*10*/].f_2), 0, iParam0))
			{
			}
			iVar0++;
		}
		func_1706(2);
	}
	if (func_1705() == 2)
	{
		if (func_1012() != func_1710())
		{
			func_1706(0);
		}
		if (!bParam1)
		{
			func_1706(0);
		}
	}
}

void func_991(int iParam0)
{
	int iVar0;
	var uVar1[32];
	struct<2> Var34[7];
	var uVar49;
	int iVar50;
	int iVar51;
	int iVar52;
	int iVar53;
	int iVar54;
	int iVar55;
	int iVar56;
	int iVar57;
	int iVar58;
	int iVar59;
	int iVar60;
	int iVar61;
	var uVar62;

	if (iParam0 == 11)
	{
		if (func_1711(PLAYER::GET_PLAYER_INDEX()) && !func_1712(PLAYER::GET_PLAYER_INDEX()))
		{
			return;
		}
	}
	iVar0 = GANG::_0x53A94294FDDCF98C(&uVar1, 1);
	if (iVar0 > 1)
	{
		iVar54 = 0;
		while (iVar54 <= (iVar0 - 1))
		{
			if (iVar0 < 2)
			{
			}
			else if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar1[iVar54]))
			{
			}
			else
			{
				iVar55 = iVar54 + 1;
				while (iVar55 <= (iVar0 - 1))
				{
					if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar1[iVar55]))
					{
					}
					else
					{
						iVar52 = GANG::NETWORK_GET_GANG_LEADER(uVar1[iVar54]);
						if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar52))
						{
						}
						else
						{
							iVar50 = func_712(iVar52, 1, -1, 0);
							iVar53 = GANG::NETWORK_GET_GANG_LEADER(uVar1[iVar55]);
							if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar53))
							{
							}
							else
							{
								iVar51 = func_712(iVar53, 1, -1, 0);
								if (!func_1713(iVar51, iVar50))
								{
								}
								else
								{
									uVar49 = uVar1[iVar54];
									uVar1[iVar54] = uVar1[iVar55];
									uVar1[iVar55] = uVar49;
								}
							}
						}
					}
					iVar55++;
				}
			}
			iVar54++;
		}
		iVar54 = 0;
		while (iVar54 <= (iVar0 - 1))
		{
			if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar1[iVar54]))
			{
			}
			else
			{
				iVar55 = iVar54 + 1;
				while (iVar55 <= (iVar0 - 1))
				{
					iVar52 = GANG::NETWORK_GET_GANG_LEADER(uVar1[iVar54]);
					if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar52))
					{
					}
					else
					{
						iVar50 = func_712(iVar52, 1, -1, 0);
						iVar56 = GANG::_NETWORK_GET_GANG_MEMBERS(uVar1[iVar54], &Var34);
						if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar1[iVar55]))
						{
						}
						else
						{
							iVar53 = GANG::NETWORK_GET_GANG_LEADER(uVar1[iVar55]);
							if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar53))
							{
							}
							else
							{
								iVar51 = func_712(iVar53, 1, -1, 0);
								iVar57 = GANG::_NETWORK_GET_GANG_MEMBERS(uVar1[iVar55], &Var34);
								if (iVar51 != iVar50)
								{
								}
								else
								{
									if (iVar57 >= iVar56)
									{
									}
									else
									{
										uVar49 = uVar1[iVar54];
										uVar1[iVar54] = uVar1[iVar55];
										uVar1[iVar55] = uVar49;
									}
									iVar55++;
								}
								iVar54++;
								func_868();
								iVar59 = 0;
								while (iVar59 < 32)
								{
									if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar1[iVar59]))
									{
									}
									else
									{
										iVar58 = GANG::_NETWORK_GET_GANG_MEMBERS(uVar1[iVar59], &Var34);
										iVar61 = 0;
										while (iVar61 < iVar58)
										{
											if (!func_34(Var34[iVar61 /*2*/]))
											{
											}
											else if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var34[iVar61 /*2*/])))
											{
											}
											else
											{
												iVar60 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var34[iVar61 /*2*/]));
												if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar60))
												{
												}
												else if (GANG::NETWORK_IS_GANG_LEADER(iVar60))
												{
													MISC::COPY_SCRIPT_STRUCT(&uVar62, &(Var34[0 /*2*/]), 2);
													MISC::COPY_SCRIPT_STRUCT(&(Var34[0 /*2*/]), &(Var34[iVar61 /*2*/]), 2);
													MISC::COPY_SCRIPT_STRUCT(&(Var34[iVar61 /*2*/]), &uVar62, 2);
												}
												else
												{
													iVar61++;
												}
												iVar61 = 0;
												while (iVar61 < iVar58)
												{
													if (func_1528(&(Var34[iVar61 /*2*/])) != 0)
													{
													}
													else
													{
														iVar60 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var34[iVar61 /*2*/]));
														switch (iParam0)
														{
															case 7:
															case 8:
															case 9:
															case 10:
																if (func_1714(&(Var34[iVar61 /*2*/])))
																{
																}
																else
																{
																	Jump @799; //curOff = 767
																	if (func_1712(PLAYER::GET_PLAYER_INDEX()) && iVar60 == PLAYER::GET_PLAYER_INDEX())
																	{
																	}
																	else if (func_2(iVar60))
																	{
																	}
																	else if (!func_961(&(Var34[iVar61 /*2*/]), PLAYER::GET_PLAYER_NAME(iVar60), func_1715(iVar60), iParam0))
																	{
																	}
																}
																iVar61++;
																iVar59++;
																default:
																	break;
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

void func_992(int iParam0)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	vector3 vVar3;
	int iVar422;
	int iVar423;

	if (!NETWORK::_0xA47D48D06AA5A188())
	{
		return;
	}
	switch (func_1716())
	{
		case 0:
			NETWORK::_0x5CB8B0C846D0F30B(0);
			if (!NETWORK::_0x3E4A16BC669E71B3())
			{
			}
			func_1717(NETWORK::_0xA94ECE191D90637A());
			func_1719(func_1718());
			func_1720();
			func_362(1);
			func_989(1);
		case 1:
			if (func_920())
			{
				if (NETWORK::NETWORK_REFRESH_CURRENT_FRIEND_PAGE())
				{
				}
			}
			bVar0 = false;
			bVar1 = false;
			iVar2 = 0;
			if (func_1721() < NETWORK::_0xA94ECE191D90637A() && func_1721() >= 0)
			{
				if (func_1718() != func_1721())
				{
					bVar1 = true;
				}
			}
			else
			{
				func_989(0);
				return;
			}
			if (bVar1)
			{
				while (bVar1)
				{
					if (iVar2 > 15)
					{
						bVar1 = false;
					}
					if (func_1718() < func_1721())
					{
						if (NETWORK::_0xDA1BFED8582F61F0())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else if (func_1718() > func_1721())
					{
						if (NETWORK::_0x232E1EB23CDB313C())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else
					{
						bVar1 = false;
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					func_989(0);
					return;
				}
			}
			if (!func_1722())
			{
				func_362(1);
			}
			func_1717(NETWORK::_0xA94ECE191D90637A());
			func_1719(func_1718());
			func_1720();
			vVar3.f_2 = 32;
			if (!NETWORK::_NETWORK_GET_CURRENT_FRIEND_PAGE_DATA(&vVar3))
			{
				func_989(0);
				return;
			}
			func_868();
			iVar423 = 0;
			while (iVar423 < vVar3.y)
			{
				if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(vVar3.f_2[iVar423 /*13*/])))
				{
				}
				else
				{
					if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(vVar3.f_2[iVar423 /*13*/])))
					{
						iVar422 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(vVar3.f_2[iVar423 /*13*/]));
						if (func_2(iVar422))
						{
						}
						else
						{
							switch (iParam0)
							{
								case 7:
								case 8:
								case 9:
								case 10:
									if (func_1714(&(vVar3.f_2[iVar423 /*13*/])))
									{
									}
									else if (!func_961(&(vVar3.f_2[iVar423 /*13*/]), &(vVar3.f_2[iVar423 /*13*/].f_2), 0, iParam0))
									{
									}
									iVar423++;
									func_989(2);
									if (func_1723() != NETWORK::_0xA94ECE191D90637A())
									{
										NETWORK::_0x3E4A16BC669E71B3();
										func_989(1);
										return;
									}
									if (func_1721() != func_1724())
									{
										func_989(1);
										return;
									}
									if (func_328())
									{
										func_989(1);
										return;
									}
									if (func_920())
									{
										func_989(1);
										return;
									}
								}
							}
						}
					}
					default:
						break;
			}
		}

void func_993(int iParam0)
{
	if (Global_1940239.f_1556.f_756.f_2 == 0)
	{
		if (NETWORK::_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS())
		{
			func_1063(&(Global_1940239.f_1556.f_756), 1);
		}
		else if (NETWORK::_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED())
		{
			func_1063(&(Global_1940239.f_1556.f_756), 1);
		}
		else if (NETWORK::NETWORK_REQUEST_RECENT_GAMER_NAMES(0, 32))
		{
			func_1063(&(Global_1940239.f_1556.f_756), 1);
		}
		else
		{
			func_988();
			NETWORK::_0x49CF17A564918E8D();
			func_182();
		}
	}
	if (Global_1940239.f_1556.f_756.f_2 == 1)
	{
		if (NETWORK::_NETWORK_DID_RECENT_GAMER_NAMES_REQUEST_SUCCEED())
		{
			Global_1940239.f_1556.f_756.f_2.f_323 = NETWORK::_NETWORK_GET_NUM_RECENT_GAMERS();
			if (NETWORK::NETWORK_GET_RECENT_GAMER_NAMES(0, Global_1940239.f_1556.f_756.f_2.f_323, &(Global_1940239.f_1556.f_756.f_2.f_1), 322))
			{
				func_1725(iParam0);
				func_1063(&(Global_1940239.f_1556.f_756), 2);
			}
			else
			{
				func_1063(&(Global_1940239.f_1556.f_756), 0);
			}
		}
		else if (!NETWORK::_NETWORK_IS_RECENT_GAMER_NAMES_REQUEST_IN_PROGRESS())
		{
			func_1063(&(Global_1940239.f_1556.f_756), 2);
		}
	}
	if (Global_1940239.f_1556.f_756.f_2 == 2)
	{
	}
}

int func_994()
{
	return Global_1896762.f_368.f_2563;
}

bool func_995(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896762.f_368.f_2563)
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam1, &(Global_1896762.f_368.f_2[iParam0 /*80*/]), 80);
	return true;
}

int func_996(int iParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;

	bVar2 = false;
	iVar3 = 0;
	if (!func_682(iParam0))
	{
		return 0;
	}
	if (MINIGAME::_0xBEA7D3CB47E1479C())
	{
		return 0;
	}
	if (iParam2 > 32)
	{
		return 0;
	}
	bVar2 = func_1726(uParam1, iParam2);
	if (bVar2)
	{
		func_1727();
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (func_34(*(uParam1[iVar0 /*2*/])))
			{
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (iVar0 < iParam2 && func_34(*(uParam1[iVar0 /*2*/])))
			{
				Global_1149315.f_1[Global_1149315.f_99 /*2*/] = { *(uParam1[iVar0 /*2*/]) };
				Global_1149315.f_99++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (func_34(Global_1149315.f_1[iVar0 /*2*/]))
			{
			}
			iVar0++;
		}
		iVar3 = 1;
	}
	Global_1149315.f_99 = func_543(Global_1149315.f_99, 0, 32);
	iVar0 = 0;
	while (iVar0 < Global_1149315.f_99)
	{
		if (func_34(Global_1149315.f_1[iVar0 /*2*/]))
		{
		}
		iVar0++;
	}
	if (Global_1149315.f_99 == 0)
	{
		return 0;
	}
	if (iVar3 == 0 && NETWORK::GET_CLOUD_TIME_AS_INT() < Global_1149315.f_100 + 30)
	{
		return 0;
	}
	Global_1149315.f_101 = 0;
	Global_1149315 = iParam0;
	iVar1 = func_1728(iParam0);
	if (MINIGAME::_0x398066F893149856(iVar1, &(Global_1149315.f_1), Global_1149315.f_99))
	{
		Global_1149315.f_100 = NETWORK::GET_CLOUD_TIME_AS_INT();
		return 1;
	}
	return 0;
}

void func_997()
{
	char* sVar0;
	int iVar1;

	if (Global_1940239.f_1556.f_8925.f_5 == 0)
	{
		return;
	}
	sVar0 = func_1729(Global_1940239.f_1556.f_8925.f_5, &(Global_1940239.f_1556.f_8925.f_124), &iVar1);
	if (iVar1 <= 1 && Global_1940239.f_1556.f_8925.f_124 != 5)
	{
		return;
	}
	if (iVar1 == 2)
	{
		Global_1940239.f_1556.f_8925.f_26 = { func_345(sVar0) };
	}
	if (!Global_1940239.f_1556.f_8925.f_25)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_8925.f_4, &(Global_1940239.f_1556.f_8925.f_26));
		Global_1940239.f_1556.f_8925.f_5 = 0;
		Global_1940239.f_1556.f_8925.f_124 = 0;
		NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
	}
}

bool func_998()
{
	return Global_1940239.f_1556.f_9756.f_245;
}

int func_999()
{
	return Global_1940239.f_1556.f_9756.f_247;
}

int func_1000()
{
	return Global_1940239.f_1556.f_9756.f_246;
}

void func_1001(char* sParam0, bool bParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_548.f_1, "");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_548.f_2, "");
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_548.f_2, sParam0);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_548.f_1, sParam0);
	}
	Global_1940239.f_1556.f_9756.f_240 = 0;
}

bool func_1002()
{
	return Global_1940239.f_1556.f_9756.f_243;
}

void func_1003(char* sParam0, char* sParam1, bool bParam2)
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

bool func_1004(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1940239.f_1556.f_9756.f_4)
	{
		return false;
	}
	return Global_1940239.f_1556.f_9756.f_5[iParam0 /*23*/].f_21;
}

int func_1005()
{
	return Global_1896762.f_6.f_6;
}

bool func_1006()
{
	return Global_1940239.f_1556.f_9756.f_242;
}

void func_1007()
{
	Global_1940239.f_1556.f_9756.f_242 = 1;
}

bool func_1008(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1940239.f_1556.f_9756.f_4)
	{
		return false;
	}
	Global_1940239.f_1556.f_9756.f_2 = Global_1940239.f_1556.f_9756;
	Global_1940239.f_1556.f_9756.f_3 = Global_1940239.f_1556.f_9756.f_1;
	Global_1940239.f_1556.f_9756 = iParam0;
	Global_1940239.f_1556.f_9756.f_1 = Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_1;
	if (!Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_22)
	{
	}
	Global_1940239.f_1556.f_9756.f_239 = 1;
	if (bParam1)
	{
		if (Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_2 != -1)
		{
			UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(1.608566E+13f, Global_1940239.f_1556.f_9756.f_5[Global_1940239.f_1556.f_9756 /*23*/].f_2);
			Global_1940239.f_1556.f_9756.f_238 = 1;
		}
	}
	Global_1940239.f_1556.f_9756.f_236 = 1;
	return true;
}

int func_1009()
{
	return Global_1896762.f_2932;
}

int func_1010()
{
	return Global_1896762.f_2932.f_3;
}

void func_1011(int iParam0)
{
	Global_1896762.f_2932.f_3 = iParam0;
}

int func_1012()
{
	return Global_1896762.f_2932.f_2;
}

void func_1013()
{
	Global_1896762.f_2932.f_5 = 0;
}

int func_1014()
{
	return MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1896762.f_2932.f_5));
}

void func_1015(int iParam0)
{
	Global_1896762.f_2932.f_2 = iParam0;
}

void func_1016(int iParam0)
{
	Global_1896762.f_2932 = iParam0;
}

void func_1017()
{
	Global_1896762.f_2932.f_5 = MISC::GET_GAME_TIMER();
}

void func_1018()
{
	Global_1896762.f_2932.f_4 = 0;
}

int func_1019()
{
	return Global_1896762.f_195;
}

void func_1020(int iParam0)
{
	Global_1896762.f_195.f_2 = iParam0;
}

void func_1021(int iParam0)
{
	Global_1896762.f_195 = iParam0;
}

bool func_1022()
{
	return func_1730(4);
}

bool func_1023(var uParam0, bool bParam1)
{
	return func_1731(4, uParam0, bParam1);
}

bool func_1024()
{
	return func_1730(5);
}

int func_1025(bool bParam0, bool bParam1)
{
	return func_1731(5, bParam0, bParam1);
}

bool func_1026()
{
	return func_1730(1);
}

int func_1027(bool bParam0, bool bParam1)
{
	return func_1731(1, bParam0, bParam1);
}

bool func_1028()
{
	return func_1730(2);
}

int func_1029(bool bParam0, bool bParam1)
{
	return func_1731(2, bParam0, bParam1);
}

bool func_1030()
{
	return func_1730(3);
}

int func_1031(bool bParam0, bool bParam1)
{
	return func_1731(3, bParam0, bParam1);
}

bool func_1032()
{
	return func_1730(6);
}

int func_1033(bool bParam0, bool bParam1)
{
	return func_1731(6, bParam0, bParam1);
}

bool func_1034()
{
	return func_1730(0);
}

int func_1035(bool bParam0, bool bParam1)
{
	return func_1731(0, bParam0, bParam1);
}

void func_1036()
{
	Global_1896762.f_195.f_1 = 0;
}

int func_1037()
{
	return Global_1896762.f_6;
}

void func_1038(int iParam0)
{
	Global_1896762.f_6 = iParam0;
}

void func_1039(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_1040(var uParam0)
{
	return func_1176(*uParam0, 1);
}

void func_1041(var uParam0, bool bParam1)
{
	if (bParam1 || !func_1040(uParam0))
	{
		func_1732(uParam0);
	}
}

float func_1042(var uParam0)
{
	if (!func_1040(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1733(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1734() - uParam0->f_1);
}

void func_1043(int iParam0)
{
	Global_1896762.f_6.f_6 = iParam0;
}

void func_1044(int iParam0)
{
	Global_1896762.f_6.f_1 = iParam0;
}

bool func_1045()
{
	return (func_1735(0) && func_1735(5));
}

float func_1046(int iParam0)
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

struct<4> func_1047(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_570(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_620(2.982335E+09f, func_777(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_620(2.982335E+09f, func_777(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_620(2.982335E+09f, func_777(), -5.45926E-19f, bParam0);
}

int func_1048(struct<4> Param0, float fParam4, int iParam5, bool bParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1736(Param0, fParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_1049(bool bParam0)
{
	int iVar0;

	iVar0 = func_1132(bParam0);
	if ((iVar0 == 7.626548E-10f || iVar0 == 5.118983E+36f) || iVar0 == 2.787807E-34f)
	{
		return true;
	}
	return false;
}

int func_1050(bool bParam0)
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

bool func_1051()
{
	return DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_8);
}

int func_1052(int iParam0, var uParam1, int iParam2, int iParam3)
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
		bVar0 = func_1737() == true;
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
	if (!func_1103(iParam0))
	{
		func_348(uParam1);
		return 0;
	}
	*uParam1 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/];
	uParam1->f_2 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_2;
	uParam1->f_1 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_1;
	uParam1->f_8 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_3;
	uParam1->f_16 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_4;
	uParam1->f_35 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_7;
	uParam1->f_36 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_8;
	if (!func_623(uParam1->f_2, 0))
	{
		func_348(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1103(*uParam1))
	{
		func_348(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_1045())
		{
			uParam1->f_19 = func_1739(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_5;
			uParam1->f_10 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_6;
			if (func_1740(uParam1->f_19))
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
			uParam1->f_19 = func_403(*uParam1);
			fVar3 = func_1046(uParam1->f_19);
			uParam1->f_3 = { func_620(uParam1->f_2, func_1047(bVar2), fVar3, bVar2) };
			uParam1->f_21 = func_1741(uParam1);
			uParam1->f_13 = func_1742(uParam1);
			uParam1->f_15 = func_1743(uParam1);
			uParam1->f_20 = func_1744(uParam1);
			uParam1->f_22 = func_1745(uParam1);
			uParam1->f_14 = func_1746(uParam1);
			uParam1->f_25 = func_1747(uParam1);
			uParam1->f_26 = func_1748(uParam1);
			uParam1->f_24 = func_1749(uParam1);
			uParam1->f_23 = func_1750(uParam1);
			uParam1->f_27 = func_1751(uParam1);
			uParam1->f_29 = func_1752(uParam1);
			uParam1->f_30 = func_1753(uParam1);
			uParam1->f_32 = func_1754(uParam1);
			uParam1->f_33 = func_1755(uParam1);
			uParam1->f_34 = func_1756(uParam1);
			fVar4 = -982726.7f;
			if (!uParam1->f_20)
			{
				if (uParam1->f_30 || uParam1->f_29)
				{
					fVar4 = uParam1->f_31;
				}
				uParam1->f_17 = func_1757(Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_2, fVar4);
			}
			else
			{
				if (uParam1->f_24 || uParam1->f_23)
				{
					fVar4 = uParam1->f_28;
				}
				uParam1->f_17 = func_1758(uParam1->f_13, fVar4);
			}
			uParam1->f_18 = func_1757(Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_2, -2.401104E+18f);
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
				uParam1->f_9 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_3;
				uParam1->f_10 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_6;
			}
			else
			{
				func_1053(uParam1);
			}
		}
	}
	else
	{
		iVar5 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_8));
		uParam1->f_9 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_3;
		uParam1->f_10 = Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_6;
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar5))
		{
			uParam1->f_19 = func_1759(*uParam1, iVar5);
			if (func_1740(uParam1->f_19))
			{
				vVar6 = { Global_1155135[iVar5 /*30*/].f_5[uParam1->f_19 /*3*/] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1760(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1761(uParam1);
	uParam1->f_12 = func_1762(Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/], uParam1);
	return 1;
}

void func_1053(var uParam0)
{
	uParam0->f_9 = -2972364f;
	uParam0->f_10 = 1.713238E-28f;
}

bool func_1054(int iParam0)
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

void func_1055(var uParam0, var uParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_2, uParam1->f_11);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_3, uParam1->f_12);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, uParam1->f_9);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_5, uParam1->f_10);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_41, func_1763(uParam1->f_1, uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_6, *uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_7, func_1764(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, uParam1->f_22);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_12, uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_13, !uParam1->f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_35, func_1765(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_15, uParam1->f_33);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_16, uParam1->f_32);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_17, uParam1->f_34);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_18, func_1766(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_19, uParam1->f_26);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_20, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_21, uParam1->f_27);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_23, !uParam1->f_14);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, (!uParam1->f_14 && func_1059(4)));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_25, func_1767(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_26, func_1768(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_27, func_1769(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_28, func_1770(uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_29, (uParam1->f_34 && func_1770(uParam1)));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, (uParam1->f_27 && func_1770(uParam1)));
	if (uParam1->f_29)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_1771(0));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1772(0));
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_31, func_1771(func_1773(uParam1->f_17)));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_32, func_1772(func_1774(uParam1->f_17)));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_43, func_1061(uParam1->f_16));
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_36, uParam1->f_13);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_38, uParam1->f_15);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_40, func_1775(uParam1->f_13));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_10, uParam1->f_25);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_11, !uParam1->f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_8, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_9, false);
}

void func_1056(var uParam0, int iParam1)
{
	func_655(uParam0, iParam1);
}

void func_1057(var uParam0, int iParam1)
{
	func_672(uParam0, iParam1);
}

bool func_1058()
{
	return func_1737() == 0;
}

bool func_1059(int iParam0)
{
	int iVar0;

	iVar0 = func_1776();
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

int func_1060(int iParam0)
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

char* func_1061(int iParam0)
{
	struct<4> Var0;

	if (iParam0 <= -1)
	{
		return "";
	}
	MISC::_INT_TO_STRING(iParam0, "%i", &Var0);
	return func_1777(Var0);
}

void func_1062(int iParam0, var uParam1)
{
	if (!func_1103(*uParam1))
	{
		uParam1->f_11 = func_1778(iParam0);
		uParam1->f_12 = func_1779(iParam0);
	}
}

void func_1063(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

void func_1064()
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1220.f_119, "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_120, false);
}

void func_1065()
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_115, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1220.f_116, 0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_117, false);
}

void func_1066()
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_122, false);
}

char* func_1067(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1780();
		case 1:
			return MISC::VAR_STRING(2, "INVITES_HEADER");
		case 2:
			return MISC::VAR_STRING(2, "LOG_HEADER");
		case 3:
			return MISC::VAR_STRING(2, "LOG_HEADER");
		case 4:
			return MISC::VAR_STRING(2, "DAILY_HEADER");
		case 5:
			return MISC::VAR_STRING(2, "DAILY_HEADER");
		case 6:
			return MISC::VAR_STRING(2, "PLAYERS_HEADER");
		case 22:
			return MISC::VAR_STRING(2, "POSSE_INVITE_HEADER");
		case 7:
			return MISC::VAR_STRING(2, "PLAYERS_OPTIONS_HEADER");
		case 8:
			return MISC::VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 9:
			return MISC::VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 10:
			return MISC::VAR_STRING(2, "PLAYER_REPORT_HEADER");
		case 11:
			return MISC::VAR_STRING(2, "MATCHMAKING_HEADER");
		case 12:
			return MISC::VAR_STRING(2, "POST_OFFICE_HEADER");
		case 13:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 14:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 15:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 16:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 17:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 18:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 19:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 20:
			return MISC::VAR_STRING(2, "POSSE_HEADER");
		case 21:
			return MISC::VAR_STRING(2, "POSSE_VERSUS_INFIGHTING_HEADER");
		case 23:
			return MISC::VAR_STRING(2, "POSSE_INVITE_HEADER");
		case 24:
			return MISC::VAR_STRING(2, "STABLES_HEADER");
		case 25:
			return MISC::VAR_STRING(2, "STABLES_HEADER");
		case 26:
			return MISC::VAR_STRING(2, "OWNED_HORSES_HEADER");
		case 27:
			return MISC::VAR_STRING(2, "HORSE_SPECIALTY_HEADER");
		case 28:
			return MISC::VAR_STRING(2, "HORSE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 29:
			return MISC::VAR_STRING(2, "HORSE_SPECIALTY_RACE_SELECTION_HEADER");
		case 30:
			return MISC::VAR_STRING(2, "HORSE_SPECIALTY_COOP_SELECTION_HEADER");
		case 31:
			return MISC::VAR_STRING(2, "HORSE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 32:
			return MISC::VAR_STRING(2, "STABLES_HEADER");
		case 33:
			return MISC::VAR_STRING(2, "OWNED_VEHICLES_HEADER");
		case 35:
			return MISC::VAR_STRING(2, "VEHICLE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 36:
			return MISC::VAR_STRING(2, "VEHICLE_SPECIALTY_RACE_SELECTION_HEADER");
		case 37:
			return MISC::VAR_STRING(2, "VEHICLE_SPECIALTY_COOP_SELECTION_HEADER");
		case 38:
			return MISC::VAR_STRING(2, "VEHICLE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 39:
			return MISC::VAR_STRING(2, "CAMP_HEADER");
		case 42:
			return MISC::VAR_STRING(2, "CAMP_LOCATION_HEADER");
		case 40:
			return MISC::VAR_STRING(2, "CAMP_LOCATION_HEADER");
		case 41:
			return MISC::VAR_STRING(2, "CAMP_HEADER");
		case 43:
			return MISC::VAR_STRING(2, "ONLINE_OPTIONS_HEADER");
		case 44:
			return MISC::VAR_STRING(2, "BOUNTY_HEADER_MP_OPEN_BOUNTIES");
		case 45:
			return MISC::VAR_STRING(2, "BOUNTY_REPLAY_HEADER");
		case 46:
			return MISC::VAR_STRING(2, "EMOTES_HEADER");
		case 47:
			return MISC::VAR_STRING(2, "EMOTES_HEADER");
		case 48:
			return MISC::VAR_STRING(2, "PLAYER_WALK_STYLES_HEADER");
		case 49:
			return MISC::VAR_STRING(2, "PLAYER_GUN_SPINNING_HEADER");
		case 50:
		case 51:
		case 52:
		case 53:
			return MISC::VAR_STRING(2, "MINIGAME_POKER_HEADER");
		case 54:
			return MISC::VAR_STRING(2, "PLAYERS_HEADER");
		case 55:
			return MISC::VAR_STRING(2, "MOONSHINE_LOCATIONS_HEADER");
		case 56:
		case 57:
			return MISC::VAR_STRING(2, "CAMP_AND_PROPERTIES_HEADER");
		case 58:
			return MISC::VAR_STRING(2, "PROPERTY_INVITE_HEADER");
		case 59:
			return MISC::VAR_STRING(2, "CLOUD_DROP_SUBH");
		case 60:
			return MISC::VAR_STRING(2, "TELEGRAMS_HEADER");
		case 61:
			if (Global_1120482[Global_1940239.f_11610 /*4533*/].f_16 == 0)
			{
				return MISC::VAR_STRING(2, "GFH_MISSIONS");
			}
			else
			{
				return MISC::VAR_STRING(2, "GFH_OUTLAW_MISSIONS");
			}
			break;
	}
	return "NULL";
}

int func_1068()
{
	if (func_1186(64))
	{
		return 0;
	}
	return 1;
}

bool func_1069()
{
	return !func_644(2);
}

bool func_1070()
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
		else if (func_747(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_1071()
{
	return (func_1184() || ((!func_909() && !func_910()) && !func_821(func_1192())));
}

bool func_1072()
{
	return func_479() == 0;
}

int func_1073()
{
	struct<10> Var0;
	bool bVar10;
	int iVar11;
	int iVar12;
	int iVar13;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0 = { func_830(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, 9.522126E+26f, 0) };
	if (func_831(Var0, &iVar13, &iVar12, 0))
	{
		if (iVar12 == 0)
		{
			func_836(iVar13);
			return 0;
		}
		iVar11 = 0;
		while (iVar11 < iVar12)
		{
			bVar10 = func_832(iVar11, iVar13);
			if (func_833(bVar10))
			{
				func_836(iVar13);
				return 1;
			}
			iVar11++;
		}
	}
	func_836(iVar13);
	return 0;
}

int func_1074(var uParam0)
{
	int iVar0;

	if (uParam0->f_3)
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return 0;
		}
	}
	else
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1))
		{
			return 0;
		}
		if (!GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1))
		{
			return 0;
		}
		if (uParam0->f_1 != Global_1295619.f_10)
		{
			return 0;
		}
	}
	return 1;
}

void func_1075(int iParam0)
{
	Global_1940239.f_1556.f_149.f_126.f_3 = iParam0;
}

bool func_1076(var uParam0)
{
	if (uParam0->f_3)
	{
		return true;
	}
	else
	{
		return GANG::_NETWORK_IS_GANG_MEMBER(uParam0->f_1, PLAYER::PLAYER_ID());
	}
	return false;
}

int func_1077(char* sParam0, int iParam1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	iVar0 = Global_1940239.f_1556.f_9756.f_4;
	if (iVar0 < 0)
	{
		return -1;
	}
	if (iVar0 >= 10)
	{
		return -1;
	}
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/] = iParam7;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_1 = iParam1;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_2 = fParam2;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_3 = { func_345(sParam0) };
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_19 = iParam3;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_20 = iParam4;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_21 = iParam5;
	Global_1940239.f_1556.f_9756.f_5[iVar0 /*23*/].f_22 = iParam6;
	Global_1940239.f_1556.f_9756.f_4++;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_149.f_548.f_3, Global_1940239.f_1556.f_9756.f_4 > 1);
	if (iVar0 == 0)
	{
		Global_1940239.f_1556.f_9756.f_239 = 1;
		Global_1940239.f_1556.f_9756 = 0;
		Global_1940239.f_1556.f_9756.f_1 = iParam1;
		Global_1940239.f_1556.f_9756.f_2 = 0;
		Global_1940239.f_1556.f_9756.f_3 = iParam1;
	}
	return iVar0;
}

void func_1078(int iParam0)
{
	Global_1940239.f_1556.f_149.f_126.f_2 = iParam0;
}

void func_1079()
{
	func_689(0);
	func_1587(0);
	func_687();
	if (func_1040(&(Global_1896762.f_13)))
	{
		func_1039(&(Global_1896762.f_13));
	}
}

void func_1080()
{
	Global_1896762.f_13.f_6 = 0;
	Global_1896762.f_13.f_9 = 0;
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_13.f_50.f_4, MISC::VAR_STRING(2, "NM_GC_TEXT_CAMP_NONE"));
	}
}

int func_1081(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -6.178593E-30f;
		case 7:
			return 1.214845E+35f;
		default:
			break;
	}
	return -6.178593E-30f;
}

void func_1082(bool bParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_42.f_25) && DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_42.f_24))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_42.f_25, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_42.f_24, 1.253668E+16f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_42.f_25, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_42.f_24, 2.107511E-34f);
		}
	}
}

void func_1083(bool bParam0)
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_102.f_25) && DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_13.f_50.f_102.f_24))
	{
		if (bParam0)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_102.f_25, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_102.f_24, -1.311538E+28f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_13.f_50.f_102.f_25, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1896762.f_13.f_50.f_102.f_24, 4.632166f);
		}
	}
}

bool func_1084(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1781(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= func_889())
	{
		return false;
	}
	if (Global_1940239.f_1556.f_1 != iParam1)
	{
		return false;
	}
	func_1008(iVar0, 1);
	return true;
}

void func_1085(int iParam0)
{
	Global_1896762.f_213 = iParam0;
}

bool func_1086(char* sParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1940239.f_1556.f_149.f_184.f_94))
	{
		return false;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_184.f_94, sParam0);
	return true;
}

bool func_1087()
{
	return Global_1572887.f_7;
}

char* func_1088(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PLAYERS_CATEGORY_NAME_NEARBY";
		case 1:
			return "PLAYERS_CATEGORY_NAME_FRIENDS";
		case 2:
			return "PLAYERS_CATEGORY_NAME_CREW";
		case 3:
			return "PLAYERS_CATEGORY_NAME_RECENT";
		default:
			break;
	}
	return "FILTER_ALL";
}

void func_1089()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_1, false);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201, false);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_201.f_3, 1.608566E+13f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_201.f_4, -1.557898E-33f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_201.f_2, "");
	}
}

int func_1090(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 3.068815E+10f;
		case 2:
			return 3.438718E+18f;
		case 3:
			return -1.358141E+31f;
		case 4:
			return -2733.137f;
		case 5:
			return 6.497398E-07f;
		case 6:
			return -1.1942E-17f;
		case 7:
			return 9.93596E+16f;
		case 8:
			return -2.334456E-33f;
		case 9:
			return -1.777127E-29f;
		case 10:
			return -4.821723E-29f;
		case 11:
			return 1.058431E+15f;
		case 12:
			return -7.163212E+12f;
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

char* func_1091(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "CAMP_LOCATION_CATEGORY_NEARBY";
		case 2:
			return "TITHE_AMBARINO";
		case 3:
			return "TITHE_LEMOYNE";
		case 4:
			return "TITHE_WEST_ELIZABETH";
		case 5:
			return "TITHE_NEW_HANOVER";
		case 6:
			return "TITHE_NEW_AUSTIN";
		default:
			break;
	}
	return "";
}

void func_1092()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_368.f_1))
	{
		DATABINDING::_0x3BF0767CF33FCC88(Global_1896762.f_368.f_1);
	}
	func_1782();
}

void func_1093()
{
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_1))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201.f_1, true);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201, false);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_3))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_201.f_3, 1.608566E+13f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_4))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1896762.f_201.f_4, -2.437567E-23f);
	}
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_201.f_2, MISC::VAR_STRING(2, "NM_MW_POSSE_VERSUS_CHANGE_TEAM"));
	}
}

int func_1094(int iParam0, int iParam1)
{
	var uVar0;

	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_1783(iParam0, iParam1);
	return uVar0;
}

void func_1095(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8618.f_2, -1.931351E+13f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_8618.f_3, func_1784(iParam0));
}

char* func_1096(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1097(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40;
		case 1:
			return 5;
		case 2:
			return 80;
		case 3:
			return 121;
		case 4:
			return 81;
		default:
			break;
	}
	return -1;
}

char* func_1098(int iParam0)
{
	if (!func_1785(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	return "REG_IF_INV";
}

char* func_1099(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "MOONSHINE_LOC_FILTER_CLOSEST";
		case 2:
			return "MOONSHINE_LOC_FILTER_DISTANCE";
		default:
			break;
	}
	return "";
}

bool func_1100()
{
	return func_1390() != -1;
}

int func_1101(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1786();
	}
	if (!func_1787(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_1788(iParam0);
	Global_1896762.f_356 = 1;
	Global_1896762.f_357 = bParam1;
	return 1;
}

bool func_1102(int iParam0)
{
	return iParam0 != 0;
}

bool func_1103(int iParam0)
{
	int iVar0;

	iVar0 = func_1738(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1104(int iParam0)
{
	if (!func_1103(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_2;
}

bool func_1105(bool bParam0, float fParam1, bool bParam2)
{
	struct<4> Var0;

	if (!func_1049(bParam0))
	{
		return false;
	}
	Var0 = { func_1047(bParam2) };
	if (func_1185(bParam0, Var0, fParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1106(int iParam0)
{
	if (!func_1740(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_1107(int iParam0, bool bParam1)
{
	float fVar0;
	struct<4> Var1;
	int iVar5;
	bool bVar6;

	fVar0 = func_1046(iParam0);
	Var1 = { func_1047(bParam1) };
	iVar5 = func_1240(&Var1, fVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

int func_1108(int iParam0)
{
	if (!func_1103(iParam0))
	{
		return 0;
	}
	return Global_1149417.f_11.f_1562[func_1738(iParam0, 1) /*46*/].f_1;
}

void func_1109(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_1789(iParam0))
	{
		func_1790(iParam1);
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
			iVar1 = func_1791(iVar0, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_4168.f_15[iVar0 /*4*/].f_1, iParam0 == iVar1);
			iVar0++;
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_4168.f_3, func_1792(iParam0));
	func_1793(iParam0);
	func_1790(iParam1);
}

void func_1110(int iParam0)
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
		func_347(iParam0, &Var0, 2, iVar74);
		func_1794(&(Global_1940239.f_1556.f_4168.f_1797[iVar74 /*46*/]), Var0);
		if (func_1795(iVar74))
		{
			func_1796(&(Global_1940239.f_1556.f_4168.f_2034), Var0);
		}
		iVar74++;
	}
}

float func_1111(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.575714E-14f;
		case 1:
			return -3.403843E-36f;
		case 2:
			return 1.477141E+27f;
		case 3:
			return -2.602238E-27f;
		case 4:
			return -3.787865E-31f;
		default:
			break;
	}
	return -7.114702E-19f;
}

void func_1112(float fParam0, float fParam1, int iParam2, int iParam3)
{
	func_1797();
	Global_1297394.f_1.f_2 = fParam0;
	Global_1297394.f_1.f_3 = fParam1;
	Global_1297394.f_1.f_4 = iParam2;
	Global_1297394.f_1.f_1 = iParam3;
}

int func_1113()
{
	return Global_1140755.f_235;
}

var func_1114(int iParam0)
{
	return Global_1140755[iParam0 /*18*/];
}

Vector3 func_1115(int iParam0)
{
	return Global_1114878[iParam0 /*70*/].f_7.f_1;
}

float func_1116(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

bool func_1117()
{
	if (Global_1940239.f_39 == 3)
	{
		return true;
	}
	return false;
}

bool func_1118(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_623(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_1798(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_1799(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_1800(bParam0, bParam4, 0) };
	Var6 = { func_620(bParam0, Var1, Var1.f_4, bParam4) };
	return func_1801(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_1119(bool bParam0, bool bParam1)
{
	bool bVar0;
	float fVar1;

	bVar0 = func_1122(bParam0, 9.522126E+26f);
	if (!func_623(bParam0, 0))
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
		fVar1 = func_1802(bParam0);
		if (func_1122(bParam0, 888.6404f))
		{
			fVar1 |= 64;
		}
		if (!func_1803(1, fVar1))
		{
			return false;
		}
	}
	if (bParam0 == -7.729678E-14f || bParam0 == -6.721167E-35f)
	{
		if (func_1804())
		{
			return false;
		}
	}
	if (!bVar0 && !func_1358(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

bool func_1120(bool bParam0)
{
	if (func_1130(bParam0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_EQUIPPED(func_570(0), bParam0, func_1805(0)))
	{
		return false;
	}
	switch (bParam0)
	{
		case joaat("KIT_CAMP"):
		case joaat("KIT_CAMP_SIMPLE"):
			func_1806(1, 1);
			TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
			return true;
		case joaat("KIT_HANDHELD_CATALOG"):
			if (func_1807() != -1)
			{
				func_670(func_1808(func_1807()), 10000, 0, 0, 0, 1);
				func_1809(-1);
			}
			break;
	}
	return true;
}

bool func_1121(bool bParam0)
{
	struct<16> Var0;

	if (bParam0 == 2.622451E-38f)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_1128(Var0, 0);
		return true;
	}
	return false;
}

bool func_1122(bool bParam0, int iParam1)
{
	if (!func_623(bParam0, 0))
	{
		return func_1811(func_1810(bParam0), iParam1);
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

void func_1123(bool bParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_1124(bool bParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_1125(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_1126(bool bParam0)
{
	if (func_663() == 0 && func_1813(func_1812(bParam0), 1, 0) != 0)
	{
		func_670("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_1127(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1814(bParam0, bParam1, 0, 0, -1f))
	{
		Global_1913430 = MISC::GET_GAME_TIMER() + 3000;
		return true;
	}
	switch (func_837(bParam0, -60352.49f))
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
				if (!func_1815())
				{
					if (func_1816(&Global_33))
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
					func_670("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
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
					func_1817(bParam0);
				}
				else
				{
					func_1818(bParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_1819(bParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_1820(bParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_1821(bParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_1817(bParam0);
				}
				else
				{
					func_1822(bParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_1817(bParam0);
				}
				else
				{
					func_1823(bParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_1817(bParam0);
				}
				else
				{
					func_1824(bParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_33, 0) || PED::COUNT_PEDS_IN_COMBAT_WITH_TARGET(Global_33, 0) > 0)
				{
					func_1817(bParam0);
				}
				else
				{
					func_1825(bParam0);
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
				func_1826(bParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_1827(bParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_1828(bParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_1817(bParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_1829(bParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_1830(bParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_1128(struct<16> Param0, int iParam16)
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
	if (!func_1831(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_1832(&(Param0.f_10)))
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
			func_1833(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_1129()
{
	return Global_1893611 & 2 != 0;
}

bool func_1130(bool bParam0)
{
	if (!func_623(bParam0, 0))
	{
		return false;
	}
	if (func_1132(bParam0) == -4.32037E-21f)
	{
		return true;
	}
	return false;
}

int func_1131(int iParam0)
{
	return func_1834(iParam0);
}

int func_1132(bool bParam0)
{
	vector3 vVar0;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1133(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	if (func_1132(bParam0) == -42.1084f)
	{
		if (func_1134(bParam0) == -947.1324f)
		{
		}
	}
	return true;
}

int func_1134(bool bParam0)
{
	struct<2> Var0;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1135()
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

bool func_1136(int iParam0)
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

void func_1137(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;

	if (bParam4)
	{
		func_1175(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1835(Var0);
}

int func_1138(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_1836())
	{
		return 0;
	}
	if (!func_1837(bParam0))
	{
		return 0;
	}
	if (func_1838(bParam0))
	{
		iVar0 = 0;
		if ((func_1134(bParam0) == 5.002459E-36f || func_1122(bParam0, 3.611922E-33f)) && !func_1122(bParam0, -1.186825E-08f))
		{
			if (bParam1)
			{
				func_614(&iVar0, 2);
			}
		}
		return func_1839(bParam0, iVar0);
	}
	return 0;
}

void func_1139(bool bParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = 10;
	bVar1 = Global_1953279.f_1676.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayUnequipHatFidget", true, 15);
		func_1140(Global_33, -5.222721E-36f, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
		func_1141(bParam0, 0, 0);
		return;
	}
	PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "PlayEquipHatFidget", true, 15);
	func_1140(Global_33, bParam0, 0, -1.003831E+26f, 1, 1, 1, 1, 0, 1, 1, 1);
	if (func_1840(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
		func_1841();
		func_1175(128);
		return;
	}
	if (bVar1 == Global_1953279.f_83[iVar0 /*12*/])
	{
		func_1141(bParam0, 1, 0);
		return;
	}
	if (func_1842(-7.463622E-36f, 0))
	{
		if (func_1843(bVar1))
		{
			func_1141(bVar1, 0, 0);
		}
		else
		{
			func_1844(bVar1, 1, 1, 0, 0, 0);
		}
		func_1141(bParam0, 1, 0);
		return;
	}
	if (func_1843(bVar1))
	{
		func_1141(bVar1, 0, 0);
		func_1141(bParam0, 1, 0);
	}
	else if (func_1843(bParam0))
	{
		if (bParam0 != func_1845(0))
		{
			func_1846(bParam0, bVar1, 0, 0, 0);
			func_1141(bParam0, 0, 0);
			func_1141(bVar1, 0, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_33, false, true, false, true);
			func_1175(128);
			func_1141(bParam0, 1, 0);
		}
	}
}

int func_1140(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11)
{
	struct<5> Var0;
	int iVar5;

	if (bParam3 == -1.003831E+26f)
	{
		Var0 = { func_1800(bParam1, 1, 0) };
		bParam3 = func_1847(Var0.f_4);
		if (bParam3 == -1.003831E+26f)
		{
			return 0;
		}
	}
	if (!func_1849(bParam1, iParam2, func_1848(bParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_1850(1, bParam5, bParam9, 1, bParam11);
	if (bParam10)
	{
		if (func_1851(bParam1, 0))
		{
			func_1852(Global_1953279.f_1676.f_1[func_1848(bParam3, 1) /*3*/], 0, 0);
		}
		else
		{
			func_1852(bParam1, 1, 0);
		}
	}
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && bParam1 != Global_1953279.f_83[func_1848(bParam3, 1) /*12*/])
			{
				func_1137(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1840(32768))
			{
				func_1841();
				func_1137(21, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_1853(bParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_1854(&iVar5, 4);
	}
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_1137(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_1137(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1141(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	Var0 = { func_1800(bParam0, bParam2, 0) };
	Var5 = { func_620(bParam0, Var0, Var0.f_4, bParam2) };
	if (func_1185(bParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_570(bParam2), &Var5, bParam1);
}

bool func_1142(int iParam0, bool bParam1)
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
	Var8 = { func_620(5.207907E-07f, func_1047(bParam1), 0.08386164f, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1953279.f_3352.f_26)
	{
		bVar1 = Global_1953279.f_3352[iVar0];
		if (func_1134(bVar1) == iParam0 || (iParam0 == 5.002459E-36f && func_1122(bVar1, 3.611922E-33f)))
		{
			Var3 = { func_620(bVar1, Var8, fVar7, bParam1) };
			if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IN_USE(func_570(bParam1), &Var3))
			{
				bVar2 = bVar1;
				INVENTORY::_INVENTORY_SET_INVENTORY_ITEM_IN_USE(func_570(bParam1), &Var3, false);
			}
		}
		iVar0++;
	}
	return bVar2;
}

int func_1143(int iParam0, bool bParam1)
{
	int iVar0;

	iParam0 = func_1855(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_1145(iParam0);
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
	if (func_1856(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1144(int iParam0)
{
	int iVar0;

	iParam0 = func_1855(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1145(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_1857())
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

int func_1145(int iParam0)
{
	iParam0 = func_1855(iParam0);
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

bool func_1146(int iParam0, int iParam1, bool bParam2)
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

void func_1147()
{
	int iVar0;

	if (func_1858())
	{
		return;
	}
	if (func_1859(8))
	{
		switch (Global_1051832.f_3649)
		{
			case 0:
				if (func_1859(16))
				{
					if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
					{
						PED::SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Global_33);
						TASK::CLEAR_PED_TASKS(Global_33, true, false);
					}
					func_1860(16);
				}
				func_1861(1);
				break;
			case 1:
				if (PED::IS_PED_USING_ANY_SCENARIO(Global_33))
				{
				}
				else
				{
					func_1860(8);
					func_1861(0);
				}
		}
		return;
	}
	if (func_843())
	{
		TASK::START_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 4.553053E+26f, -7.591204E-34f, 1, 0, -1f);
		Global_1915643.f_22504.f_1 = 1;
		Global_1051832.f_43 = 0;
		func_1862();
	}
	else
	{
		iVar0 = func_1864(func_1863());
		if (iVar0 != -1)
		{
			func_670(func_1808(iVar0), 10000, 0, 0, 0, 1);
			Global_1051832.f_3648 = 0;
			Global_1051832.f_3649 = 0;
			func_1865(0);
			func_1809(-1);
		}
	}
}

void func_1148()
{
	struct<2> Var0;
	int iVar2;

	Var0 = { func_911(0) };
	if (func_821(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_1199(PLAYER::PLAYER_ID(), 0);
			if (iVar2 != -1)
			{
				if (func_1200(iVar2) == -4.537018E+10f)
				{
					func_670("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_670("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_670("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_670("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_1149(int iParam0)
{
	struct<19> Var0;

	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_1304(Var0, func_456(0, 8), 0, 0);
}

float func_1150(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_1151(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_1866(iParam0, &iVar0, &iVar1);
	if (!func_1867(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1868(iVar0, iVar1);
}

void func_1152(bool bParam0)
{
	if ((func_663() != -1 || !bParam0) || func_1869(Global_33))
	{
		func_1870();
		return;
	}
}

void func_1153()
{
	int iVar0;

	if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.73924E+12f))
	{
		iVar0 = PLAYER::PLAYER_ID();
		func_1871(1, iVar0);
	}
}

bool func_1154(bool bParam0, int iParam1)
{
	if (!func_623(bParam0, 0))
	{
		return false;
	}
	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1372(func_1362(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_1155(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_623(bParam0, 0))
	{
		return func_1872(func_1810(bParam0), bParam1, bParam2);
	}
	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1373(func_1362(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_663() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_1873(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1156(bool bParam0, int iParam1)
{
	if (func_1367(bParam0, iParam1))
	{
		return true;
	}
	else if (func_1368(bParam0, iParam1))
	{
		return true;
	}
	return false;
}

int func_1157(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_1154(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1374(func_1362(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1385(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

char* func_1158(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_1159(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1895608703:
			return 0;
		case 76824010:
			return 1;
		case 1128045213:
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

void func_1160(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_1874(uParam0);
	if (iVar0 == 0)
	{
		if (Global_1203937.f_106.f_3 != 0)
		{
			func_1875(Global_33);
			Global_1203937.f_106.f_3 = 0;
		}
		return;
	}
	iVar1 = func_1876();
	func_1877(iVar0, 1, iVar1);
	Global_1203937.f_106.f_3 = iVar0;
}

void func_1161(int iParam0)
{
	Global_1203937.f_106.f_2 = iParam0;
}

bool func_1162()
{
	return func_1422(256);
}

bool func_1163(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_613(Global_1072759.f_21353.f_1[iParam0 /*8*/].f_7, iParam1);
}

void func_1164(int iParam0)
{
	if (!func_613(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_614(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

void func_1165(bool bParam0, int iParam1)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	struct<11> Var17;
	struct<2> Var28;
	int iVar30;

	iVar15 = GANG::_NETWORK_GET_GANG_MEMBERS(iParam1, &Var0);
	Var28 = { func_694() };
	iVar30 = 0;
	while (iVar30 <= (iVar15 - 1))
	{
		if ((func_34(Var0[iVar30 /*2*/]) && !NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var0[iVar30 /*2*/]), &Var28)) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var0[iVar30 /*2*/])))
		{
			iVar16 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar30 /*2*/]));
			if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar16))
			{
				Var17.f_4 = 7;
				Var17.f_5 = iParam1;
				Var17.f_10 = bParam0;
				func_1878(&Var17, iVar16);
			}
		}
		iVar30++;
	}
}

void func_1166(int iParam0)
{
	if (func_613(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7, iParam0))
	{
		func_1179(&(Global_1072759.f_21353.f_1[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*8*/].f_7), iParam0);
	}
}

bool func_1167()
{
	if (!Global_1203937.f_417.f_2)
	{
		return false;
	}
	if (Global_1203937.f_417.f_1 >= 3)
	{
		return true;
	}
	return false;
}

void func_1168()
{
	vector3 vVar0;

	Global_1203937.f_417 = { vVar0 };
}

bool func_1169()
{
	if (!Global_1203937.f_417.f_2)
	{
		return true;
	}
	if ((MISC::GET_GAME_TIMER() - Global_1203937.f_417) < 1000)
	{
		return false;
	}
	return true;
}

void func_1170()
{
	if (!Global_1203937.f_417.f_2)
	{
		Global_1203937.f_417.f_2 = 1;
	}
	Global_1203937.f_417 = MISC::GET_GAME_TIMER();
	Global_1203937.f_417.f_1++;
}

bool func_1171(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_431(iParam0);
	if (bParam1 && iVar0 == 1)
	{
		return true;
	}
	if (bParam2 && iVar0 == 3)
	{
		return true;
	}
	return false;
}

bool func_1172(int iParam0)
{
	if (func_1879())
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return true;
	}
	return false;
}

int func_1173(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!Global_1149417.f_5568)
	{
		return 0;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		iVar0 = (Global_1295619.f_16 - Global_17418.f_2644);
		if (iVar0 > 0)
		{
			return iVar0;
		}
		else
		{
			return 0;
		}
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	iVar1 = iParam0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	iVar0 = (Global_1295619.f_16 - Global_1101558[iVar1 /*38*/].f_32);
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return 0;
}

void func_1174()
{
	Global_1953279.f_1046 = 0;
}

void func_1175(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

bool func_1176(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1177(var uParam0)
{
	return func_1176(*uParam0, 2);
}

int func_1178(int iParam0)
{
	return NETWORK::GET_TIME_DIFFERENCE(iParam0, NETWORK::GET_NETWORK_TIME_ACCURATE());
}

void func_1179(var uParam0, int iParam1)
{
	func_1880(uParam0, iParam1);
}

var func_1180(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_1881() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1882());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1882());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_1882());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1883(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_2(iVar2))
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
				if (iVar9 & 8192 != 0 && func_755(iVar2) != 1)
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
					if (!func_1884(iVar10))
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

bool func_1181(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1142409.f_2050 == 0 || (MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1142409.f_2050 == 0)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1142409.f_2050) >= 1000)
	{
		Global_1142409.f_2050 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return false;
	}
	return true;
}

int func_1182(var uParam0)
{
	int iVar0;

	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 62)
	{
		return 0;
	}
	return Global_1896762.f_3399[iVar0 /*4*/].f_2;
}

int func_1183(bool bParam0, var uParam1)
{
	int iVar0;

	iVar0 = uParam1;
	if (iVar0 < 0 || iVar0 >= 62)
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_3399[iVar0 /*4*/]), bParam0, 4);
	return 1;
}

bool func_1184()
{
	return func_1885(func_911(0));
}

int func_1185(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1798(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_620(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_570(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_570(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_1186(int iParam0)
{
	return func_613(Global_1940239.f_1556.f_44, iParam0);
}

bool func_1187(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		iParam0 = PLAYER::PLAYER_ID();
	}
	if (func_1886(255) > 9)
	{
		return false;
	}
	if (func_1887(iParam0, 16384))
	{
		return true;
	}
	return false;
}

int func_1188()
{
	if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(8.360127E+26f) != 0)
	{
		return 0;
	}
	else if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(-4.947796E+13f) != 0)
	{
		return 1;
	}
	return 2;
}

bool func_1189(int iParam0, var uParam1, var uParam2, bool bParam3)
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

bool func_1190(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_1191(int iParam0)
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
	iVar0 = func_1888(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
	{
		bVar1 = func_1889(1, iParam0);
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

struct<2> func_1192()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_911(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_911(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

char* func_1193(int iParam0)
{
	int iVar0;
	char cVar1[64];

	iVar0 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iParam0) / 1114636288));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar1, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar1));
}

bool func_1194()
{
	return (func_1215(Global_1295619.f_5, 1, 0, 1) && func_1195() > 0);
}

int func_1195()
{
	int iVar0;

	iVar0 = func_1157(1.353158E-34f, 8.497754E-37f, 1, 0, 1, 0);
	if (!func_567(iVar0))
	{
		iVar0 = MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return iVar0;
}

bool func_1196(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	return Global_1205134[iParam0 /*17*/].f_15;
}

bool func_1197(int iParam0)
{
	return func_1890(iParam0) != 0;
}

bool func_1198(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (Global_1204744 == 1)
	{
		return false;
	}
	if (!func_717(2))
	{
		return false;
	}
	if (Global_1204744.f_141 != 0 && Global_1204744.f_163[iParam0 /*7*/] == Global_1204744.f_141)
	{
		return true;
	}
	return false;
}

int func_1199(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1205923.f_1[iVar1 /*26*/].f_1 != -1 && func_1891(iVar1, 64, iVar0))
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

int func_1200(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return Global_1206482.f_1[iParam0 /*4*/];
}

bool func_1201()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_265213.f_2)
	{
		if (Global_265213.f_57505[iVar0 /*8*/].f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1202()
{
	if ((Global_1295619.f_11 != 255 && Global_1295619 != 255) && Global_1295619 != Global_1295619.f_11)
	{
		return true;
	}
	return false;
}

bool func_1203()
{
	int iVar0;

	iVar0 = 13;
	while (iVar0 <= 15)
	{
		if (func_1892(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1204()
{
	if (func_1893() < func_1894())
	{
		return true;
	}
	return false;
}

bool func_1205(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_747(32, iParam0);
}

int func_1206(int iParam0, var uParam1)
{
	return func_1895(&(Global_17418.f_55.f_2501), iParam0, uParam1);
}

char* func_1207(bool bParam0)
{
	bool bVar0;

	if (!func_623(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_1896(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

char* func_1208(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_1158(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_1209()
{
	if (func_1897(7) < 5)
	{
		return false;
	}
	if (!func_1358(-4.931674E+23f, 1))
	{
		return false;
	}
	return true;
}

bool func_1210(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 10:
			return true;
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1211(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 2;
		case 5:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		case 6:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		case 7:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		case 8:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		case 10:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		case 9:
			return GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1;
		default:
			break;
	}
	return true;
	return true;
}

char* func_1212(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	char cVar0[32];
	float fVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[32];

	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1148846080);
	if (bParam5)
	{
		iVar5 = BUILTIN::CEIL(fVar4);
	}
	else
	{
		iVar5 = BUILTIN::FLOOR(fVar4);
	}
	iVar6 = func_543((iVar5 / 60), 0, 180);
	iVar7 = func_543((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, HUD::_GET_TEXT_SUBSTRING_2(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0));
}

bool func_1213(int iParam0)
{
	if (func_821(func_911(0)) || Global_1108965.f_775.f_28 != -1)
	{
		return false;
	}
	if (func_1412(PLAYER::PLAYER_ID(), 1))
	{
		return false;
	}
	if (!func_1898(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1214(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else
		{
			if (!func_821(Global_1056554[iVar0 /*491*/].f_2))
			{
				if (bParam0 && !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1215(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_1899(bParam1, bParam2, bParam3);
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

bool func_1216()
{
	int iVar0;

	if (PED::IS_PED_IN_ANY_BOAT(Global_33))
	{
		return true;
	}
	iVar0 = func_1900(Global_33);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (PED::IS_PED_SWIMMING(iVar0))
		{
			return true;
		}
	}
	return PED::IS_PED_SWIMMING(Global_33);
}

bool func_1217()
{
	return func_1901(Global_34) != -1;
}

bool func_1218(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_149[Global_1295619])
	{
		return ((Global_17418.f_2641.f_2 == 2 || (bParam1 && Global_17418.f_2641.f_2 == 1)) || (bParam2 && Global_17418.f_2641.f_2 == 3));
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return ((Global_1101558[iVar0 /*38*/].f_33 == 2 || (bParam1 && Global_1101558[iVar0 /*38*/].f_33 == 1)) || (bParam2 && Global_1101558[iVar0 /*38*/].f_33 == 3));
}

bool func_1219(var uParam0, int iParam1)
{
	return func_439(*uParam0, iParam1);
}

bool func_1220(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	switch (iParam0)
	{
		case 7:
			iVar0 = 18;
			break;
		case 10:
			iVar0 = 15;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 17;
			break;
		default:
			return true;
	}
	iVar1 = -1;
	iVar2 = func_1902(iVar0, PLAYER::PLAYER_ID(), &iVar1);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar3 = func_1345(iVar0, Global_34);
	iVar2 = func_1903(iVar0, iVar3);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar4 = func_1346(iVar0, iVar3);
	iVar2 = func_1904(iVar4);
	if (iVar2 != 0)
	{
		return false;
	}
	Var5 = { func_1347(iVar0, iVar3, iVar4) };
	iVar2 = func_1905(Var5);
	if (iVar2 != 0)
	{
		return false;
	}
	return true;
}

int func_1221(var uParam0)
{
	if (!func_1040(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_1 * 1148846080));
	}
	if (func_1733(uParam0))
	{
		return BUILTIN::ROUND((uParam0->f_2 * 1148846080));
	}
	return (func_1906() - BUILTIN::ROUND((uParam0->f_1 * 1148846080)));
}

bool func_1222(int iParam0)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_747(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_1223()
{
	bool bVar0;
	struct<4> Var3;
	int iVar7;

	iVar7 = func_826(func_825());
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Global_265213.f_107995.f_14228[iVar7], 0, &bVar0))
	{
	}
	Var3 = { func_1907(bVar0, 1) };
	if (func_1472(bVar0, 0, 1, 0) > 0 && (func_1908(Var3) - Global_1295619.f_16) > 0)
	{
		return true;
	}
	return false;
}

int func_1224()
{
	bool bVar0;
	struct<4> Var3;
	int iVar7;

	iVar7 = func_826(func_825());
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_AWARD_ITEM_INFO(Global_265213.f_107995.f_14228[iVar7], 0, &bVar0))
	{
	}
	Var3 = { func_1907(bVar0, 1) };
	if (func_1472(bVar0, 0, 1, 0) > 0 && (func_1908(Var3) - Global_1295619.f_16) > 0)
	{
		return (func_1908(Var3) - Global_1295619.f_16);
	}
	return 0;
}

void func_1225(var uParam0)
{
	Global_1940239.f_1556.f_4168.f_2086 = uParam0;
}

void func_1226(int iParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_4168.f_12, iParam0);
}

void func_1227(int iParam0, int iParam1, bool bParam2)
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
	if (!func_347(iVar1, &Var2, 1, -1))
	{
		func_348(&Var2);
	}
	func_1909(iParam1, &(Global_1940239.f_1556.f_4168.f_1579[iParam1 /*54*/]), Var2, Global_1155135[iVar0 /*30*/].f_5[iParam1 /*3*/].f_2);
	if (bParam2 && func_350(iParam1))
	{
		func_351(&(Global_1940239.f_1556.f_4168.f_1985), &Var2, iParam1);
	}
}

bool func_1228(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_553(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_1501(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_1910(&Var49, &Var0, 0))
				{
					if (func_1503(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_538(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_538(iVar47);
	}
	return false;
}

struct<4> func_1229()
{
	return Global_1290256.f_11.f_310;
}

bool func_1230()
{
	return Global_1290256.f_11.f_318 > Global_1295619.f_16;
}

void func_1231(int iParam0, bool bParam1)
{
	Global_1290256.f_11.f_310 = { *iParam0 };
	if (bParam1)
	{
		Global_1290256.f_11.f_318 = Global_1295619.f_16 + 10;
	}
}

int func_1232()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_911(iVar0) };
		if (func_912(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1233(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_553(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_1501(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_1910(&Var49, &Var0, 0))
				{
					if (func_1503(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_538(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_538(iVar47);
	}
	return false;
}

struct<4> func_1234(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -5.45926E-19f;
	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1501(&Var2, iVar16, iVar0, iVar1))
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
	func_538(iVar0);
	return Var2;
}

void func_1235(var uParam0)
{
	func_1911(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_777() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1236(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_1912(&(Global_1903834.f_24));
	if (!func_1913(iParam0, iParam1, iParam2, uParam3, &(Global_1903834.f_24), bParam4))
	{
		return false;
	}
	return true;
}

bool func_1237(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_1914(iParam0, iParam1, iParam2, uParam3, &Var0, bParam4))
	{
		return false;
	}
	return true;
}

int func_1238(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar0 /*7*/]), &uParam0))
		{
			return Global_1290256.f_11.f_162[iVar0 /*7*/].f_5;
		}
		iVar0++;
	}
	return -1;
}

int func_1239(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_1240(&uParam0, -8.989852E-19f, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1240(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_570(bParam2), iParam0, iParam1);
}

struct<8> func_1241(int iParam0, bool bParam1)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	char* sVar17;

	Var0 = { iParam0->f_12 };
	if (bParam1)
	{
		if (func_1915(iParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (MISC::COMPARE_STRINGS(&Var0, func_1916(), false, -1) == 0)
	{
		StringCopy(&Var0, MISC::VAR_STRING(2, func_1917(iParam0->f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0) == 0)
	{
		if (iParam0->f_22 != 0)
		{
			StringCopy(&Var0, MISC::VAR_STRING(2, func_548(iParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_623(iParam0->f_4, 0))
	{
		iVar16 = func_1918(iParam0->f_4);
		if (STREAMING::IS_MODEL_VALID(iVar16) && STREAMING::IS_MODEL_A_VEHICLE(iVar16))
		{
			sVar17 = MISC::VAR_STRING(0, func_1896(iParam0->f_4, 0));
			Var0 = { func_688(sVar17) };
		}
	}
	return Var0;
}

void func_1242(struct<4> Param0, var uParam4)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(*uParam4, Param0);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_1, Param0.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_2, Param0.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam4->f_3, Param0.f_3);
}

int func_1243(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return 3;
	}
	if (bParam0)
	{
		return 2;
	}
	if (bParam2)
	{
		return 0;
	}
	return 1;
}

void func_1244(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;

	fVar0 = func_1919(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_23, 165534.9f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_28, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_7, fVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_8, -1.327398E-30f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_11, true);
}

void func_1245(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;

	if (bParam2)
	{
		fVar0 = -1.750672E+37f;
	}
	else
	{
		fVar0 = 5.382861E-23f;
	}
	bVar1 = func_1920();
	bVar2 = false;
	if (bVar1)
	{
		bVar2 = func_801(75);
	}
	bVar3 = true;
	if (!bParam2 || (bVar1 && !bVar2))
	{
		bVar3 = false;
	}
	fVar4 = func_1919(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_23, fVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_6, fVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_7, fVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_8, -1.327398E-30f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_10, bVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_11, true);
}

void func_1246(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_23, -1.750672E+37f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_21, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_20, MISC::VAR_STRING(2, "CASH_STRING", func_412(4.136629E+26f, 0, 8.497754E-37f)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_7, 3.715643E-33f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_8, 1.722779E+23f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_11, true);
}

void func_1247(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_23, -1.750672E+37f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_21, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_20, func_1921((iParam1 - Global_1295619.f_16) * 1000, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_7, -1.919796E+32f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_8, -1.327398E-30f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1353.f_3[iParam0 /*39*/].f_11, false);
}

int func_1248(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_1922(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1249()
{
	return 5;
}

int func_1250()
{
	return 6;
}

bool func_1251(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_1922(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

int func_1252(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_1923());
	return iVar0;
}

char* func_1253(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return "BREED_AMERICANPAINT_OVERO";
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT_TOBIANO";
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return "BREED_AMERICANPAINT_GREYOVERO";
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return "BREED_ANDALUSIAN_DARKBAY";
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN_PERLINO";
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case joaat("BREED_APPALOOSA_BLANKET"):
			return "BREED_APPALOOSA_BLANKET";
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return "BREED_APPALOOSA_LEOPARD";
		case joaat("BREED_ARABIAN_BLACK"):
			return "BREED_ARABIAN_BLACK";
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return "BREED_ARABIAN_ROSEGREYBAY";
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN_WHITE";
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES_BAYROAN";
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return "BREED_ARDENNES_IRONGREYROAN";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE_GREY";
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN_BAY";
		case joaat("BREED_MORGAN_BAYROAN"):
			return "BREED_MORGAN_BAYROAN";
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case joaat("BREED_MORGAN_PALOMINO"):
			return "BREED_MORGAN_PALOMINO";
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return "BREED_MUSTANG_GRULLODUN";
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG_WILDBAY";
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA_BLUEROAN";
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return "BREED_NOKOTA_WHITEROAN";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE_DARKBAY";
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return "BREED_SHIRE_LIGHTGREY";
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH_SORREL";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return "BREED_TENNESSEEWALKER_REDROAN";
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return "BREED_THOROUGHBRED_BLOODBAY";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return "BREED_THOROUGHBRED_BRINDLE";
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return "BREED_TURKOMAN_DARKBAY";
		case joaat("BREED_TURKOMAN_GOLD"):
			return "BREED_TURKOMAN_GOLD";
		case joaat("BREED_TURKOMAN_SILVER"):
			return "BREED_TURKOMAN_SILVER";
		case joaat("BREED_BRETON_REDROAN"):
			return "BREED_BRETON_REDROAN";
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON_SORREL";
		case joaat("BREED_BRETON_GRULLODUN"):
			return "BREED_BRETON_GRULLODUN";
		case joaat("BREED_BRETON_SEALBROWN"):
			return "BREED_BRETON_SEALBROWN";
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case joaat("BREED_BRETON_STEELGREY"):
			return "BREED_BRETON_STEELGREY";
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case joaat("BREED_CRIOLLO_DUN"):
			return "BREED_CRIOLLO_DUN";
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return "BREED_CRIOLLO_BAYBRINDLE";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return "BREED_CRIOLLO_SORRELOVERO";
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER_BLACK";
		case joaat("BREED_KLADRUBER_WHITE"):
			return "BREED_KLADRUBER_WHITE";
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return "BREED_KLADRUBER_CREMELLO";
		case joaat("BREED_KLADRUBER_GREY"):
			return "BREED_KLADRUBER_GREY";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case joaat("BREED_KLADRUBER_SILVER"):
			return "BREED_KLADRUBER_SILVER";
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return "BREED_NORFOLKROADSTER_BLACK";
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case 1323533737:
			return "BREED_MISSOURIFOXTROTTER_BLACKTOVERO";
		case -1159865523:
			return "BREED_MISSOURIFOXTROTTER_BLUEROAN";
		case 1854655826:
			return "BREED_MISSOURIFOXTROTTER_BUCKSKINBRINDLE";
		case 1416158449:
			return "BREED_MISSOURIFOXTROTTER_DAPPLEGREY";
		case 577120648:
			return "BREED_MUSTANG_BLACKOVERO";
		case 1147338535:
			return "BREED_MUSTANG_BUCKSKIN";
		case -1712303883:
			return "BREED_MUSTANG_CHESTNUTTOVERO";
		case 406093506:
			return "BREED_MUSTANG_REDDUNOVERO";
		case 956799610:
			return "BREED_TURKOMAN_BLACK";
		case 139264677:
			return "BREED_TURKOMAN_CHESTNUT";
		case -11223392:
			return "BREED_TURKOMAN_GREY";
		case 1133580901:
			return "BREED_TURKOMAN_PERLINO";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_MULE_PAINTED"):
			return "BREED_MULE_PAINTED";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case joaat("BREED_ARABIAN_GREY"):
			return "BREED_ARABIAN_GREY";
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return "BREED_ARABIAN_REDCHESTNUT";
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return "BREED_MUSTANG_GOLDENDUN";
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case joaat("BREED_SHIRE_RAVENBLACK"):
			return "BREED_SHIRE_RAVENBLACK";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_BUELL_WARVETS";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_JOHN_ENDLESSSUMMER";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_MURFREEBROOD_MANGE_01";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_MURFREEBROOD_MANGE_02";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_MURFREEBROOD_MANGE_03";
		case joaat("BREED_WINTER02_01"):
			return "BREED_WINTER02_01";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_EAGLEFLIES";
		case joaat("BREED_GANG_BILL"):
			return "BREED_GANG_BILL";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_GANG_CHARLES";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_GANG_DUTCH";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_GANG_HOSEA";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_GANG_JAVIER";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_GANG_JOHN";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_GANG_KAREN";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_GANG_KIERAN";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_GANG_LENNY";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_GANG_MICAH";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_GANG_SADIE";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_GANG_SEAN";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_GANG_TRELAWNEY";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_GANG_UNCLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char* func_1254(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case -1159865523:
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "HORSE_CLASS_MULTI";
		case -1712303883:
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case 406093506:
		case 577120648:
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case 1147338535:
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "HORSE_CLASS_MULTI";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "HORSE_CLASS_MULTI";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

struct<8> func_1255(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<24> Var8;
	struct<8> Var32;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return cVar0;
	}
	Var8 = { func_1924(iParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_1915(iParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_1916(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::VAR_STRING(2, func_1917(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::VAR_STRING(2, func_548(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

int func_1256(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_1925(iParam0, iParam1, 39569.38f, bParam2);
	return func_1926(iVar0);
}

bool func_1257(int iParam0)
{
	switch (Global_1940239.f_1556.f_1935.f_382)
	{
		case 0:
			return (iParam0 >= 10 && iParam0 <= 14);
		default:
			break;
	}
	return false;
}

bool func_1258(int iParam0, int iParam1)
{
	var uVar0;
	bool bVar4;

	if (!func_1927(iParam0, &uVar0))
	{
		return false;
	}
	bVar4 = INVENTORY::_INVENTORY_COMPARE_GUIDS(&uVar0, iParam1);
	if (bVar4)
	{
		return true;
	}
	return false;
}

int func_1259(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar0 /*7*/]), &uParam0))
		{
			return Global_1290256.f_782.f_107[iVar0 /*7*/].f_5;
		}
		iVar0++;
	}
	return -1;
}

int func_1260(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_1240(&uParam0, 2.076485E+22f, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1261(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0);
	*iParam2 = 0;
	if (func_443())
	{
		*iParam2 = 7;
		return 0;
	}
	if (func_1928(iVar0))
	{
		*iParam2 = 6;
		return 0;
	}
	if (func_1929() || (func_1920() && !func_801(76)))
	{
		*iParam2 = 1;
		return 0;
	}
	if (func_1930() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1931() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar1, iVar2) || PED::GET_VEHICLE_PED_IS_ENTERING(iVar1) == iVar2) || PED::GET_VEHICLE_PED_IS_USING(iVar1) == iVar2)
		{
			*iParam2 = 3;
			return 0;
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		if (ENTITY::GET_ENTITY_MODEL(iVar2) == -1.751817E-25f)
		{
			if (func_1932(iVar2) && !INVENTORY::_INVENTORY_COMPARE_GUIDS(iParam0, iParam1))
			{
				*iParam2 = 4;
				return 0;
			}
		}
	}
	return 1;
}

int func_1262(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	*iParam2 = 0;
	if (func_1930() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1931() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		*iParam2 = 0;
		return 0;
	}
	if (func_443())
	{
		*iParam2 = 0;
		return 0;
	}
	iVar3 = PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		*iParam2 = 0;
		return 0;
	}
	if ((PED::IS_PED_ON_SPECIFIC_VEHICLE(iVar1, iVar3) || PED::GET_VEHICLE_PED_IS_ENTERING(iVar1) == iVar3) || PED::GET_VEHICLE_PED_IS_USING(iVar1) == iVar3)
	{
		*iParam2 = 3;
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		if ((ENTITY::GET_ENTITY_MODEL(iVar3) == -1.751817E-25f && func_1932(iVar3)) && INVENTORY::_INVENTORY_COMPARE_GUIDS(iParam0, iParam1))
		{
			*iParam2 = 4;
			return 0;
		}
	}
	return 1;
}

int func_1263(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		return 4;
	}
	if (bParam0)
	{
		return 3;
	}
	if (bParam3)
	{
		return 0;
	}
	if (bParam2)
	{
		return 1;
	}
	return 2;
}

bool func_1264(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	iVar1 = func_1270(iParam0, iParam1, &iVar0, bParam2, bParam3);
	if (func_1271(iVar1, iVar0))
	{
		return true;
	}
	func_143();
	return false;
}

void func_1265(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	float fVar1;

	bVar0 = false;
	if (bParam2 || bParam3)
	{
		bVar0 = true;
	}
	fVar1 = func_1933(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_1, bVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_22, -1.391775E+23f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_23, 0.01296469f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_28, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_7, fVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_8, 6.046547E-38f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_10, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_14, 2.374022E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_15, 2.074721E+11f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_16, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_17, true);
}

void func_1266(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;

	bVar0 = func_1920();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = func_801(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	fVar3 = func_1933(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_22, 8.198329E-15f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_23, -3.058171E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_7, fVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_8, 6.046547E-38f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_10, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_14, 2.374022E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_15, 2.074721E+11f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_17, false);
}

void func_1267(int iParam0, int iParam1, bool bParam2)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	float fVar3;

	bVar0 = func_1920();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = func_801(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	fVar3 = func_1933(iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_1, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_22, 8.198329E-15f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_23, -3.058171E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_21, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_6, fVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_7, fVar3);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_8, 6.046547E-38f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_10, bVar2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_14, 2.374022E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_15, 2.074721E+11f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_17, false);
}

void func_1268(int iParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_1, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_22, 8.198329E-15f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_23, -3.058171E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_21, !bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_20, MISC::VAR_STRING(2, "CASH_STRING", func_412(2.450426E-08f, 0, 8.497754E-37f)));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_7, -1.452717E-33f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_8, 7.318976E-13f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_10, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_11, true);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_14, 2.374022E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_15, 2.074721E+11f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_17, false);
}

void func_1269(int iParam0, int iParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_1, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_22, 8.198329E-15f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_23, -3.058171E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_21, true);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_28, false);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_20, func_1921((iParam1 - Global_1295619.f_16) * 1000, 0));
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_7, 33699.88f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_8, 6.046547E-38f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_10, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_11, false);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_14, 2.374022E-06f);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_15, 2.074721E+11f);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_16, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1935.f_3[iParam0 /*39*/].f_17, false);
}

int func_1270(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam2 = 0;
	if (!bParam3 && !bParam4)
	{
		return 0;
	}
	if (!bParam3)
	{
		*iParam2 = 2;
		return iParam1;
	}
	if (!bParam4)
	{
		*iParam2 = 1;
		return iParam0;
	}
	if (iParam0 >= iParam1)
	{
		*iParam2 = 1;
		return iParam0;
	}
	*iParam2 = 2;
	return iParam1;
}

bool func_1271(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_CALLING_DISABLED"), 27.64779f);
					break;
				case 2:
					return false;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_BUSY_CALL"), 27.64779f);
					break;
				case 2:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_BUSY_DISMISS"), 27.64779f);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_ON_IT_CALL"), 27.64779f);
					break;
				case 2:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_ON_IT_DISMISS"), 27.64779f);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_SUMMON_CALL"), 27.64779f);
					break;
				case 2:
					return false;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_BOUNTYP_CALL"), 27.64779f);
					break;
				case 2:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_BOUNTYP_DISMISS"), 27.64779f);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_MOUNT_CALL"), 27.64779f);
					break;
				case 2:
					return false;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					func_70(MISC::VAR_STRING(2, "VEHICLE_DISABLE_PLAYER_ANIMAL"), 27.64779f);
					break;
				case 2:
					return false;
			}
			break;
	}
	return true;
}

int func_1272(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 3.970603f;
		case 7:
			return -2.762223E-09f;
		default:
			break;
	}
	return 0;
}

bool func_1273(int iParam0)
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

int func_1274(vector3 vParam0)
{
	struct<4> Var0;
	int iVar5;

	if (!func_1934(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -2.06732E+29f;
	Var0.f_3 = 0;
	iVar5 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
	return iVar5;
}

int func_1275(int iParam0, vector3 vParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;

	iVar0 = 0;
	if (!func_1934(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -2.06732E+29f;
	Var2.f_3 = iParam0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 1.071636E-19f;
		if (DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_1276(var uParam0)
{
	if (func_644(32) && func_1935(uParam0->f_2))
	{
		return false;
	}
	if (*uParam0 > 4)
	{
		return true;
	}
	return false;
}

bool func_1277(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	vector3 vVar0;

	if (vParam0.z == 0)
	{
		return false;
	}
	if (!func_1936(vParam0, &vVar0))
	{
		return false;
	}
	if (func_1937(vParam0, iParam3, vVar0, iParam4, 1, 0, iParam5))
	{
		return true;
	}
	return false;
}

bool func_1278(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1279(bool bParam0)
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

bool func_1280(int iParam0)
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

bool func_1281(int iParam0)
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

bool func_1282(int iParam0)
{
	if (!func_1938(iParam0))
	{
		return false;
	}
	return func_1939(iParam0, 4, 1);
}

bool func_1283(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1291896[iParam0] == iParam0;
}

int func_1284(bool bParam0, int iParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar7;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (func_1940(bParam0, 1) && !func_1941(bParam0, 1))
	{
		return 0;
	}
	if (iParam2 && func_1371(bParam0, &bVar0))
	{
		if (func_1372(bVar0, 0.003804697f, 0) && !func_1373(bVar0, 0.003804697f))
		{
			return 1;
		}
		else if (func_1372(bVar0, -2.401104E+18f, 0))
		{
			return func_1942(bVar0, -2.401104E+18f, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_656(bParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return 0;
		}
		iVar7 = func_657(bParam0, iVar3, 0, 1, 1);
		if (iVar3 == -2.401104E+18f)
		{
			return func_660(iVar7);
		}
		else if (iVar3 == -982726.7f)
		{
			return func_567(iVar7);
		}
		else if (iVar3 == 0.003804697f)
		{
			return 1;
		}
		else
		{
			return func_1943(bParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return 0;
}

int func_1285(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5.764132E+16f;
		case 2:
			return 48.15688f;
		case 3:
			return 1.978542E+34f;
		case 4:
			return -4.863353E-20f;
		case 5:
			return 9.74296E+34f;
		case 6:
			return -3.572188E-13f;
		case 7:
			return -2.972978E+19f;
		case 8:
			return -8.082307E-06f;
		case 9:
			return 1.242632E+15f;
		case 10:
			return 2.428705E+13f;
		case 11:
			return 1.109313E+16f;
		case 12:
			return 1.774855E-07f;
		case 13:
			return -4.815321E-22f;
		case 14:
			return 2.376182E+33f;
		case 15:
			return 1821.314f;
		default:
			break;
	}
	return 0;
}

int func_1286()
{
	return Global_1960735.f_72;
}

void func_1287(int iParam0)
{
	Global_1960735.f_72 = iParam0;
}

void func_1288(int iParam0)
{
	func_1470(&(Global_1572887.f_300.f_1), func_1944(iParam0), 3);
}

void func_1289()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_1945(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887.f_300.f_5 != -1)
	{
	}
	if (Global_1572887.f_300.f_10 != 0)
	{
	}
	if (Global_1572887.f_300.f_6 != -1)
	{
	}
	if (Global_1572887.f_300.f_7 != -1)
	{
	}
	if (Global_1572887.f_300.f_8 != -1)
	{
	}
	if (Global_1572887.f_300.f_16 != -1)
	{
	}
	if (Global_1572887.f_300.f_9 != 0)
	{
	}
	if (Global_1572887.f_300.f_15 != 0)
	{
	}
}

int func_1290(struct<2> Param0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_1491(Global_1206482.f_78[iVar0 /*20*/].f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1291(int iParam0, int iParam1)
{
	func_614(&(Global_1206482.f_78[iParam0 /*20*/].f_6), iParam1);
}

bool func_1292(int iParam0, struct<2> Param1, int iParam3)
{
	struct<2> Var0;

	if (func_780(Param1, 0, 128))
	{
		func_1947(func_1946(Param1), 8, 25, 255);
		return false;
	}
	func_1948(iParam0, Param1);
	if (iParam0 == -1)
	{
		func_1947(func_1946(Param1), 8, 2, 255);
		return false;
	}
	if (Global_1206482.f_78[iParam0 /*20*/].f_3 == -1)
	{
		func_1947(func_1946(Param1), 8, 3, 255);
		return false;
	}
	if (func_1949(iParam0, 32))
	{
		return true;
	}
	if (!func_821(Param1))
	{
		func_1947(func_1946(Param1), 8, 6, 255);
		return false;
	}
	else if (!func_1950(Param1))
	{
		func_1947(func_1946(Param1), 8, 19, 255);
		return false;
	}
	else if (func_1414(Param1))
	{
		func_1947(func_1946(Param1), 8, 23, 255);
		return false;
	}
	Var0 = { func_1192() };
	if (func_821(Var0) && !func_1491(Var0, Param1))
	{
		if (func_1951())
		{
			func_1291(iParam0, 262144);
			func_1952(1);
		}
		else
		{
			func_1947(func_1946(Param1), 8, 24, 255);
			return false;
		}
	}
	func_1953(Param1, 1, 1, 1);
	func_1954(Param1, 1, 0, -1);
	func_1955(2);
	func_1956(Global_1206482.f_78[iParam0 /*20*/].f_3, iParam3);
	func_1291(iParam0, 32);
	func_1957(7);
	if (func_1200(Global_1206482.f_78[iParam0 /*20*/].f_3) != -4.537018E+10f)
	{
		func_1958();
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(4.052186E+20f);
	}
	else
	{
		SCRIPTS::_ACTIVATE_GOAL_CONTEXT(8.579785E-11f);
		STATS::_0xE5A680A5D8B1F687(1);
	}
	return true;
}

int func_1293(int iParam0)
{
	return Global_1206482.f_78[iParam0 /*20*/].f_3;
}

int func_1294(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_1295(int iParam0)
{
	return Global_1108965.f_775.f_28 == iParam0;
}

void func_1296(int iParam0)
{
	if (Global_1108965.f_775.f_28 != iParam0)
	{
		Global_1108965.f_775.f_28 = iParam0;
	}
}

int func_1297(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_643(iParam0, Param1, iParam3);
	return 1;
}

bool func_1298(int iParam0)
{
	if (func_912(func_911(0)) == 5)
	{
		return false;
	}
	if (func_912(func_911(0)) == 3)
	{
		if (!func_1951())
		{
			return false;
		}
	}
	if (func_912(func_911(0)) == 4)
	{
		return false;
	}
	if (func_671())
	{
		return false;
	}
	if (func_910())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	if ((Global_1295619.f_16 - Global_1108965.f_775.f_5[iParam0]) < 180 && func_1959(iParam0, GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID())))
	{
		return false;
	}
	if (iParam0 == 3 && !GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		return false;
	}
	return true;
}

int func_1299(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (!func_1960(iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<2> func_1300(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = iParam0;
	iVar1 = iParam1;
	if (((iVar0 < 0 || iVar0 >= 7) || iVar1 < 0) || iVar1 >= 16)
	{
		return func_167();
	}
	return func_1343(Global_1108965.f_654.f_1[iParam0 /*17*/][iParam1], 3);
}

void func_1301(float fParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(iVar2) != iParam1)
		{
		}
		else if (bParam2)
		{
			if (!GANG::NETWORK_IS_GANG_LEADER(iVar2))
			{
			}
			else
			{
				bVar1 = true;
				SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(fParam0, iVar2);
			}
			iVar0++;
			if (!bVar1)
			{
				SCRIPTS::_CLEAR_ALL_PLAYER_BITS(fParam0);
			}
		}
	}
}

bool func_1302(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return false;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1303(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	struct<27> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = PLAYER::GET_PLAYER_INDEX();
	Var0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Var0, 27, 38, &fParam8);
}

void func_1304(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	struct<21> Var0;

	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&fParam19))
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
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_1961(&(Global_1072759.f_22981), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 19, 6, &fParam19);
}

void func_1305(int iParam0, float fParam1)
{
	func_1962(fParam1, 1);
}

void func_1306(var uParam0, int* iParam1)
{
	*uParam0 = 29;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 14, 39, iParam1);
}

bool func_1307(int iParam0)
{
	if (Global_1287258[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*67*/].f_66)
	{
		return false;
	}
	if (Global_1108965.f_34.f_353[iParam0 /*6*/])
	{
		return false;
	}
	if (func_671())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iParam0))
	{
		return false;
	}
	if (GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return false;
	}
	return true;
}

void func_1308(float fParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(iVar1) != iParam1)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(fParam0, iVar1);
		}
		iVar0++;
	}
}

void func_1309(var uParam0, int* iParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 9, 10, iParam1);
}

void func_1310(var uParam0, int iParam1)
{
	func_1179(uParam0, iParam1);
}

void func_1311(int iParam0)
{
	int iVar0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		MISC::CLEAR_BIT(&(Global_1108965.f_34[iParam0 /*11*/].f_5), iVar0);
		iVar0++;
	}
}

void func_1312(int iParam0)
{
	if (func_1963(iParam0))
	{
	}
	else if (func_1964(iParam0))
	{
	}
	func_1965(iParam0);
}

void func_1313(int iParam0)
{
	if (func_1966(iParam0))
	{
	}
	else if (func_1967(iParam0))
	{
	}
	else if (func_1968(iParam0))
	{
	}
	func_1965(iParam0);
}

bool func_1314(int iParam0)
{
	return SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084.f_586), iParam0);
}

Vector3 func_1315(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_1316(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (func_1969(iVar0, 32, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1317(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<2> Var1;
	int iVar3;

	*uParam0 = PLAYER::INT_TO_PLAYERINDEX(iParam2);
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = func_1970(iParam1);
	}
	Var1 = { func_610(*uParam0) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &iVar3);
	uParam0->f_1 = BUILTIN::FLOOR(((((BUILTIN::TO_FLOAT((32 - iVar0)) / BUILTIN::TO_FLOAT(32)) * 1092616192) + ((func_438(*uParam0, 0) / IntToFloat(Global_1901671.f_737.f_28)) * 5f)) + (IntToFloat(iVar3) * 1075838976)));
}

int func_1318(int iParam0, int iParam1)
{
	return (iParam0 + func_1971((iParam1 - iParam0)));
}

void func_1319(int iParam0, int iParam1)
{
	func_608(iParam0, 0);
	Global_1225672[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*303*/].f_300.f_1 = iParam0;
	if (iParam1 != -1)
	{
		Global_1225084[iParam1 /*28*/].f_18 = iParam0;
	}
}

bool func_1320(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	if (!func_1595(8))
	{
		if (func_1972(0) == 3)
		{
			func_1973(8);
		}
	}
	func_1974(iParam0);
	func_1975(3);
	if (Global_1297394.f_29.f_3 > 0)
	{
		Global_1297394.f_29.f_3 = 0;
	}
	func_1976();
	return true;
}

void func_1321(int iParam0)
{
	int iVar0;
	struct<17> Var1;

	iVar0 = NETWORK::_0x27B1AE4D8C652F08(iParam0);
	StringCopy(&(Var1.f_2), NETWORK::_0xE59F4924BD3A718D(iVar0), 64);
	NETWORK::_0x16EFB123C4451032(iVar0, &Var1);
	StringCopy(&(Var1.f_12), NETWORK::_0xE79BA3BC265895DA(iVar0), 24);
	Var1.f_10 = iParam0;
	Var1.f_16 = NETWORK::_0x5ED39DA62BEB1330(iVar0);
	func_721(&Var1);
}

void func_1322(var uParam0)
{
}

void func_1323(int iParam0)
{
	Global_1940239.f_245.f_1306 = iParam0;
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_245.f_6, MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(Global_1940239.f_245.f_1306), 0));
}

struct<30> func_1324(int iParam0)
{
	struct<30> Var0;

	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_11.f_12 = -1;
	Var0.f_11.f_12.f_1 = -1;
	Var0.f_11.f_14 = 255;
	Var0.f_11.f_15 = 255;
	if (Global_1072759.f_23 > 0)
	{
		return Global_1072759.f_23.f_5[iParam0 /*30*/];
	}
	return Var0;
}

int func_1325(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1977(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_1326(int iParam0)
{
	struct<12> Var0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam0) == 0)
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 2;
	Var0.f_9 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	Var0.f_10 = PLAYER::PLAYER_ID();
	Var0.f_7 = iParam0;
	Var0.f_8 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	func_1327(&Var0);
}

void func_1327(var uParam0)
{
	float fVar0;

	fVar0 = func_456(0, 8);
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&fVar0))
	{
		return;
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 12, 41, &fVar0);
}

void func_1328(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_1329(int iParam0, var uParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if ((*uParam1)[iVar0] == 0)
		{
			return false;
		}
		if ((*uParam1)[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1330(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam0->f_2[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1331(var uParam0, int iParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(iParam1, &cParam2);
	uParam0->f_1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(0), Param10);
	uParam0->f_2 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(1), Param10.f_1);
	uParam0->f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(2), Param10.f_2);
	uParam0->f_4 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(57), Param10.f_3);
	uParam0->f_5 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(58), Param10.f_4);
	uParam0->f_7 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(60), Param10.f_5);
	uParam0->f_6 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(59), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -5.222598E+14f;
	}
	uParam0->f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(61), Param10.f_7);
	uParam0->f_9 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_58(62), "");
	uParam0->f_10 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(63), Param10.f_8);
	uParam0->f_11 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(64), Param10.f_9);
	uParam0->f_12 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(65), Param10.f_10);
	uParam0->f_14 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(71), Param10.f_11);
	uParam0->f_13 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(66), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -5.222598E+14f;
	}
	uParam0->f_15 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(68), Param10.f_13);
	uParam0->f_16 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(69), Param10.f_14);
	uParam0->f_17 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(70), Param10.f_15);
}

bool func_1332(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1978(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1333(int iParam0)
{
	switch (iParam0)
	{
		case 1473261684:
			return 0;
		case -268116367:
			return 1;
		case -6796437:
			return 2;
		case -241855024:
			return 3;
		default:
			break;
	}
	return 4;
}

bool func_1334(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (4 - 1))
	{
		return false;
	}
	if (func_1979(uParam0->f_8[iParam1 /*12*/].f_5))
	{
		return true;
	}
	return false;
}

int func_1335(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_1332(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_1132(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_1980(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_1981(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_1982(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_1983(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_1984(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_1985(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_1986(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_1475(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1336(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > (4 - 1))
	{
		return 0;
	}
	func_655(&(uParam0->f_7), 256);
	uParam0->f_8[iParam1 /*12*/].f_5 = iParam2;
	return 0;
}

int func_1337(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!func_623(bParam2, 0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	(uParam0[iVar0 /*7*/])->f_2[(*uParam0)[iVar0 /*7*/]] = bParam2;
	func_1987(uParam0[iVar0 /*7*/]);
	TELEMETRY::_TELEMETRY_EMOTE_ADD_CATEGORY_TO_SAVE(func_1988(func_911(0)), func_1834(iVar0), bParam2);
	return 1;
}

void func_1338(var uParam0)
{
	func_1987(uParam0);
}

void func_1339(var uParam0, int iParam1, char[32] cParam2, struct<30> Param10)
{
	func_1331(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_58(15), &(Param10.f_16));
	uParam0->f_20 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(21), Param10.f_24);
	uParam0->f_21 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(22), Param10.f_25);
	uParam0->f_22 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(23), Param10.f_26);
	uParam0->f_23 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(24), Param10.f_27);
	uParam0->f_24 = DATABINDING::_DATABINDING_ADD_DATA_HASH(*uParam0, func_58(25), Param10.f_28);
	uParam0->f_25 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, func_58(26), Param10.f_29);
}

char* func_1340(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Style_Default";
		case 1:
			return "MP_Style_Casual";
		case 2:
			return "MP_Style_Crazy";
		case 3:
			return "MP_Style_Flamboyant";
		case 4:
			return "MP_Style_Gunslinger";
		case 5:
			return "MP_Style_Refined";
		case 6:
			return "MP_Style_SilentType";
		case 7:
			return "MP_Style_Greenhorn";
		case 8:
			return "MP_Style_Veteran";
		case 9:
			return "MP_Style_EasyRider";
		case 10:
			return "MP_Style_Drunk";
		case 11:
			return "MP_Style_Inquisitive";
		default:
			break;
	}
	return "MP_Style_Casual";
}

int func_1341(int iParam0)
{
	if (!func_439(Global_1072759.f_28313.f_1, iParam0))
	{
		func_655(&(Global_1072759.f_28313.f_1), iParam0);
		return 1;
	}
	return 0;
}

bool func_1342()
{
	return TASK::IS_EMOTE_TASK_RUNNING(Global_33, 4);
}

struct<2> func_1343(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573), func_1516(iParam1));
			break;
		case 3:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_602), func_1516(iParam1));
			break;
		case 4:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_2104), func_1516(iParam1));
			break;
		case 5:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_12606), func_1516(iParam1));
			break;
		case 6:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_12908), func_1516(iParam1));
			break;
		case 7:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_15910), func_1516(iParam1));
			break;
		case 8:
			Var0.f_1 = func_1989(iParam0, &(Global_1072759.f_573.f_16512), func_1516(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_167();
	}
	return Var0;
}

int func_1344(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 18;
		case 10:
			return 15;
		case 8:
			return 16;
		case 9:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_1345(int iParam0, vector3 vParam1)
{
	int iVar0;
	struct<5> Var1;
	struct<5> Var6;
	int iVar11;
	vector3 vVar12;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	var uVar19;
	int iVar20;
	int iVar21;
	int iVar22;
	int iVar23;

	iVar0 = 0;
	if (func_1990(&Var1, iParam0) && func_1991(&Var1))
	{
		iVar11 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
		fVar18 = 1232348158;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_1992(&Var6, iVar23))
			{
				iVar20 = 0;
				func_1993(Var6, -2.361417E-11f, &iVar20, 1);
				if (func_1994(iParam0, iVar20) == -1 && func_1903(iParam0, iVar20) == 0)
				{
					func_1995(Var6, 5.3786E+35f, &vVar12, 1);
					if (func_757(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = BUILTIN::VDIST(vParam1, vVar12);
					}
					fVar15 = func_1996(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 1008981770));
					}
					uVar19 = func_1180(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -2.19652E+23f, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&uVar19, iVar21))
						{
							iVar22 = PLAYER::INT_TO_PLAYERINDEX(iVar21);
							if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar22) && !GANG::_NETWORK_IS_GANG_MEMBER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_1346(int iParam0, int iParam1)
{
	int iVar0;
	struct<5> Var1;
	int iVar6;
	int iVar7;

	iVar0 = 0;
	if (((func_1990(&Var1, iParam0) && func_1991(&Var1)) && func_1997(&Var1, iParam1)) && func_1998(&Var1))
	{
		iVar6 = DATAFILE::_PARSEDDATA_GET_NUM_CHILDREN(Var1, Var1.f_1);
		iVar7 = (MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % iVar6);
		if (func_1999(&Var1, iVar7))
		{
			func_1993(Var1, -2.361417E-11f, &iVar0, 1);
		}
	}
	return iVar0;
}

struct<2> func_1347(int iParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	var uVar5;
	struct<4> Var6;

	if ((((func_1990(&Var0, iParam0) && func_1991(&Var0)) && func_1997(&Var0, iParam1)) && func_1998(&Var0)) && func_2000(&Var0, iParam2))
	{
		func_1993(Var0, -1.340638E+17f, &uVar5, 1);
		if (func_2001(6, uVar5, &Var6))
		{
			return func_1343(Var6.f_3, 6);
		}
	}
	return func_167();
}

int func_1348(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<47> Var1;

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(1, 65536);
	if (func_2002() == PLAYER::PLAYER_ID())
	{
		func_2003(iParam0, PLAYER::PLAYER_ID(), iParam1, iParam2, iVar0, iParam3);
	}
	else
	{
		Var1.f_5 = -1;
		Var1.f_9 = -1;
		Var1.f_10 = -1;
		Var1.f_11.f_1 = -1;
		Var1.f_11.f_5 = -1;
		Var1.f_11.f_5.f_1 = -1;
		Var1.f_11.f_7 = 255;
		Var1.f_4 = 1;
		Var1.f_5 = iParam0;
		Var1.f_6 = iParam1;
		Var1.f_7 = iParam2;
		Var1.f_8 = iVar0;
		Var1.f_46 = iParam3;
		func_2004(&Var1, func_456(0, 8));
	}
	return 1;
}

int func_1349(int iParam0)
{
	return Global_1109780.f_193[iParam0 /*8*/];
}

void func_1350(int iParam0)
{
	Global_1109780.f_193[Global_1295619 /*8*/] = iParam0;
	func_2005(&(Global_1108965.f_775.f_30));
}

bool func_1351()
{
	bool bVar0;

	bVar0 = (((Global_1142409.f_2019 == 2 || (Global_1142409.f_2019 >= 6 && Global_1142409.f_2019 <= 11)) || Global_1142409.f_2019 == 12) || (Global_1142409.f_2019 >= 13 && Global_1142409.f_2019 <= 19));
	return bVar0;
}

bool func_1352(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	vVar1 = { func_2006(func_1590(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

bool func_1353()
{
	return Global_1142409.f_2027.f_7 == 3;
}

void func_1354(int iParam0)
{
	func_614(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

void func_1355(int iParam0)
{
	func_1179(&(Global_1144511[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*83*/].f_33.f_4), iParam0);
}

bool func_1356(int iParam0)
{
	int iVar0;
	int iVar1;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (Global_1141317[iVar1 /*27*/].f_9 == iVar0)
		{
			return Global_1141317[iVar1 /*27*/].f_1.f_1 == Global_1144511[iParam0 /*83*/].f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

void func_1357()
{
	int iVar0;
	var uVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[iVar0 /*83*/].f_38.f_23.f_1))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144511[iVar0 /*83*/].f_38.f_23.f_1);
	}
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1144511[iVar0 /*83*/].f_38.f_23))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1144511[iVar0 /*83*/].f_38.f_23);
	}
	Global_1144511[iVar0 /*83*/].f_38.f_23.f_1 = uVar1;
	Global_1144511[iVar0 /*83*/].f_38.f_23 = uVar1;
}

bool func_1358(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_623(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_1132(bParam0);
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
			if (!func_2007(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_2008(bParam0))
			{
				return true;
			}
			break;
	}
	return func_1472(bParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_1359()
{
	vector3 vVar0;
	struct<20> Var3;

	Var3 = { func_2009(0) };
	if (Var3.f_8 != -7.437896E-28f)
	{
	}
	if (((Var3.f_17 == 0 && Var3.f_19 == 0) && Global_17418.f_55.f_4.f_2 != 0) && Global_17418.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17418.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_17;
		vVar0.f_1 = Var3.f_18;
		vVar0.f_2 = Var3.f_19;
	}
	return vVar0;
}

int func_1360(vector3 vParam0, bool bParam3)
{
	int iVar0;
	struct<20> Var1;

	iVar0 = -1;
	Var1 = { func_2009(0) };
	Var1.f_18 = vParam0.y;
	Var1.f_19 = vParam0.z;
	Var1.f_17 = vParam0.x;
	iVar0 = func_2010(-4.99669E-06f, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

bool func_1361(bool bParam0)
{
	if (func_1122(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_1362(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_623(bParam0, 0))
	{
		return func_2011(func_1810(bParam0), bParam1);
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

bool func_1363(bool bParam0)
{
	if (!func_247() && func_2012())
	{
		return true;
	}
	return func_1122(bParam0, 1.931199E+13f);
}

int func_1364(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_2013(bParam0))
	{
		return 0;
	}
	bVar1 = func_439(iParam3, 2);
	bVar2 = func_1372(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_1372(bParam0, -982726.7f, bVar1);
	if (func_1372(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_2014(bParam0, &fVar0) || func_2015(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_1369())
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
	else if (func_1370(15) && func_1372(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

bool func_1365(bool bParam0, bool bParam1)
{
	return (func_1154(bParam0, 0.003804697f) && !func_1155(bParam0, 0.003804697f, bParam1));
}

bool func_1366(bool bParam0)
{
	bool bVar0;

	bVar0 = func_1362(bParam0, 1);
	if (bVar0 != 0 && func_1372(bVar0, 0.003804697f, 0))
	{
		if (UNLOCK::UNLOCK_IS_UNLOCKED(-1.382125E-27f))
		{
			return true;
		}
	}
	return false;
}

bool func_1367(bool bParam0, int iParam1)
{
	*iParam1 = func_2016(bParam0, 1);
	return *iParam1 != 0;
}

bool func_1368(bool bParam0, int iParam1)
{
	*iParam1 = func_2017(bParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_1369()
{
	return Global_1915643.f_22477;
}

bool func_1370(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_1805(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1371(bool bParam0, bool bParam1)
{
	bool bVar0;
	struct<5> Var1;

	*bParam1 = 0;
	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	if (!func_1122(bParam0, 2.791187f))
	{
		if (func_2018(bParam0))
		{
			return 0;
		}
	}
	if (func_1122(bParam0, 5.144831E-36f) || func_1122(bParam0, 8.874786E+09f))
	{
		return 0;
	}
	if (func_1361(bParam0))
	{
		return 0;
	}
	bVar0 = func_1362(bParam0, 1);
	if (bVar0 == 0)
	{
		return 0;
	}
	if (!func_1372(bVar0, -2.401104E+18f, 0))
	{
		return 0;
	}
	if (Global_1915643.f_22504.f_2 == 1)
	{
		Var1 = { func_1800(bParam0, 0, 0) };
		if (Var1.f_4 == 4.978612f)
		{
			return 0;
		}
	}
	*bParam1 = bVar0;
	return 1;
}

bool func_1372(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_2013(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1373(bParam0, bParam1);
	}
	return true;
}

bool func_1373(bool bParam0, bool bParam1)
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

int func_1374(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_2019(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_1375(int iParam0)
{
	return (iParam0 / 100);
}

bool func_1376(bool bParam0)
{
	return func_1134(bParam0) == -947.1324f;
}

int func_1377(bool bParam0)
{
	if (!func_1376(bParam0))
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

bool func_1378(bool bParam0)
{
	if (!func_623(bParam0, 0))
	{
		return false;
	}
	return func_1134(bParam0) == 1.988047E-33f;
}

int func_1379(bool bParam0)
{
	if (!func_1378(bParam0))
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

bool func_1380(bool bParam0)
{
	return (func_2020(bParam0) && func_1122(bParam0, 4.31212E+18f));
}

int func_1381(bool bParam0)
{
	if (!func_1380(bParam0))
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

bool func_1382(bool bParam0)
{
	return func_1134(bParam0) == 2.251657E+29f;
}

int func_1383(bool bParam0)
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

int func_1384(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_2019(bParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
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

bool func_1385(bool bParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_623(bParam0, 0))
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
		func_2021(bParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1386(var uParam0, var uParam1)
{
	if (func_2022(uParam0, uParam1))
	{
		uParam1->f_63 = func_2023(uParam1);
	}
}

int func_1387()
{
	var uVar0[32];
	int iVar33;
	int iVar34;
	int iVar35;

	iVar33 = 0;
	iVar34 = 0;
	iVar35 = 0;
	iVar33 = GANG::_0x53A94294FDDCF98C(&uVar0, 1);
	iVar34 = 0;
	while (iVar34 < iVar33)
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(uVar0[iVar34]))
		{
		}
		else if (!GANG::NETWORK_IS_GANG_ACTIVE(uVar0[iVar34]))
		{
		}
		else
		{
			iVar35++;
		}
		iVar34++;
	}
	return iVar35;
}

void func_1388(var uParam0)
{
}

int func_1389(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_1390()
{
	return Global_1149157.f_137;
}

int func_1391(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1149157.f_1[iParam0 /*27*/].f_1;
}

char* func_1392(int iParam0)
{
	char* sVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar1 /*13*/] == iParam0)
		{
			sVar0 = func_1437(Global_1203937.f_23.f_17[iVar1 /*13*/].f_5);
			return sVar0;
		}
		iVar1++;
	}
	return "FAILURE TO GRAB";
}

bool func_1393(char* sParam0, char* sParam1)
{
	int iVar0;

	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam0);
	if (iVar0 < 1)
	{
		return false;
	}
	if (MISC::COMPARE_STRINGS(sParam0, sParam1, false, iVar0) == 0)
	{
		return true;
	}
	return false;
}

char* func_1394(int iParam0, bool bParam1, int iParam2)
{
	char* sVar0;
	int iVar1;

	if (iParam0 == 0)
	{
		return "";
	}
	sVar0 = "";
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar1 /*13*/] == iParam0)
		{
			if (bParam1)
			{
				sVar0 = func_2024(func_713(&(Global_1203937.f_23.f_17[iVar1 /*13*/].f_5), 4.808429E-35f), iParam2);
			}
			else
			{
				sVar0 = func_2024(&(Global_1203937.f_23.f_17[iVar1 /*13*/].f_5), 4.808429E-35f);
			}
		}
		else
		{
			iVar1++;
		}
	}
	return sVar0;
}

bool func_1395(int iParam0)
{
	struct<23> Var0;

	Var0.f_22 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var0))
	{
		if (func_34(Var0.f_19) && NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Var0.f_19)))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return false;
}

bool func_1396(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return Global_1203937.f_23.f_17[iVar0 /*13*/].f_1;
		}
		iVar0++;
	}
	return false;
}

int func_1397(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && Global_1203937.f_23.f_17[iVar0 /*13*/].f_1)
		{
			iVar1 = Global_1203937.f_23.f_17[iVar0 /*13*/].f_3;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_1398(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<23> Var2;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && Global_1203937.f_23.f_17[iVar0 /*13*/].f_1)
		{
			iVar1 = Global_1203937.f_23.f_17[iVar0 /*13*/].f_4;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	Var2.f_22 = 10;
	if (POSSE::_0xC087FF658B2E51DA(iParam0, &Var2))
	{
		return Var2.f_9.f_4;
	}
	return 0;
}

int func_1399(int iParam0)
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

int func_1400(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_420.f_2.f_9[iVar0 /*2*/] == iParam0)
		{
			return Global_1203937.f_420.f_2.f_9[iVar0 /*2*/].f_1;
		}
		iVar0++;
	}
	return -1;
}

int func_1401(var uParam0)
{
	int iVar0;

	if (Global_1203937.f_106.f_4)
	{
		iVar0 = Global_1203937.f_106;
	}
	else
	{
		iVar0 = func_1874(uParam0);
	}
	return iVar0;
}

bool func_1402(int iParam0, var uParam1)
{
	struct<44> Var0;
	int iVar44;
	int iVar45;
	struct<2> Var46;
	struct<2> Var48;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0.f_13 = 10;
	if (!GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		if (!GANG::NETWORK_IS_GANG_ID_VALID(GANG::NETWORK_GET_GANG_ID(iParam0)))
		{
			return false;
		}
		iVar45 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iParam0));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar45))
		{
			return false;
		}
		Var46 = { func_610(iVar45) };
		iVar44 = 0;
		while (iVar44 <= (POSSE::_0xC084FF658B2E61DA(&Var46) - 1))
		{
			if ((POSSE::_0xC084FF658B2E71DA(&Var46, iVar44, &Var0) && Var0 != 0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar44++;
		}
	}
	else
	{
		Var48 = { func_610(iParam0) };
		iVar44 = 0;
		while (iVar44 <= (POSSE::_0xC084FF658B2E61DA(&Var48) - 1))
		{
			if (POSSE::_0xC084FF658B2E71DA(&Var48, iVar44, &Var0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar44++;
		}
	}
	return false;
}

char* func_1403(int iParam0)
{
	char* sVar0;

	if (iParam0 == 255)
	{
		if (func_23(40, iParam0))
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
	if (func_23(40, iParam0))
	{
		return HUD::_GET_TEXT_SUBSTRING_2(&(Global_1101558[iParam0 /*38*/].f_12), HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1101558[iParam0 /*38*/].f_12)));
	}
	return PLAYER::GET_PLAYER_NAME(Global_1295619.f_149[iParam0]);
}

int func_1404(int iParam0)
{
	int iVar0;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	if (func_1218(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_1163(iVar0, 32))
	{
		return 1;
	}
	return 0;
}

bool func_1405(int iParam0, int iParam1)
{
	return func_439(Global_1203937.f_5[iParam0], iParam1);
}

void func_1406(int iParam0)
{
	Global_1203937.f_5[iParam0] = 0;
}

void func_1407(int iParam0, int iParam1)
{
	func_655(&(Global_1203937.f_5[iParam0]), iParam1);
}

void func_1408(var uParam0)
{
	float fVar0;

	*uParam0 = 23;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	fVar0 = func_456(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 20, &fVar0);
}

void func_1409(var uParam0, bool bParam1, bool bParam2)
{
	if (func_2025(1))
	{
		return;
	}
	Global_1203937.f_478 = uParam0;
	func_2026(1);
	if (bParam2)
	{
		func_2026(4);
	}
	if (bParam1)
	{
		func_2026(2);
	}
}

bool func_1410(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_1189(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == Global_1297553[PLAYER::PLAYER_ID() /*87*/].f_1) && iVar1 == Global_1297553[PLAYER::PLAYER_ID() /*87*/]);
	return bVar2;
}

bool func_1411()
{
	return Global_1072759.f_7;
}

bool func_1412(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_613(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_1413()
{
	return Global_263042[Global_1295619 /*65*/] >= 9;
}

bool func_1414(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_2027(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_1415(int iParam0)
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

float func_1416(int iParam0)
{
	switch (PLAYER::GET_PLAYER_TEAM(iParam0))
	{
		case 0:
			return -8.998766E+28f;
		case 1:
			return -6.580683E-18f;
		case 2:
			return -2.691543E+12f;
		case 3:
			return 2.986218E-33f;
		case 4:
			return 8.281546E-06f;
		case 5:
			return -2.792393E+27f;
		case 6:
			return 2.121323E-22f;
		case 7:
			return 6.18127E+26f;
		case 8:
			return 1.990545E+23f;
		default:
			break;
	}
	return -64.26542f;
}

float func_1417(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_909())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

bool func_1418(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 255)
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (iParam0 == Global_1295619.f_5)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!Global_1295619.f_17[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return true;
		}
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iVar0))
	{
		return true;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::GET_PLAYER_TEAM(Global_1295619.f_5);
	iVar2 = PLAYER::GET_PLAYER_TEAM(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (GANG::_NETWORK_IS_IN_MY_GANG(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1419(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_2028(iParam0))
	{
		return true;
	}
	return !func_1418(iParam0, 0);
}

bool func_1420(int iParam0, bool bParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28305), iVar0) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0))
		{
			return false;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28304), iVar0))
		{
			return true;
		}
	}
	if (func_2029(iParam0))
	{
		return false;
	}
	if (func_2028(iParam0))
	{
		return false;
	}
	if (func_2030(iParam0))
	{
		return true;
	}
	return func_2031(iParam0);
}

int func_1421(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -5.544348E+20f;
		case 1:
			return 9.256025E-25f;
		case 2:
			return -218565.1f;
		case 3:
			return 1.294398E-25f;
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

bool func_1422(int iParam0)
{
	return func_439(Global_1203937.f_3, iParam0);
}

void func_1423(int iParam0)
{
	func_672(&(Global_1203937.f_3), iParam0);
}

void func_1424(var uParam0)
{
}

void func_1425(int iParam0)
{
	func_655(&(Global_1572887.f_196.f_43), iParam0);
}

void func_1426(int iParam0)
{
	Global_1572887.f_196.f_47 = iParam0;
}

void func_1427(int iParam0)
{
	Global_1572887.f_196 = iParam0;
}

bool func_1428(var uParam0)
{
	if ((GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1) && GANG::NETWORK_IS_GANG_ACTIVE(uParam0->f_1)) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(uParam0->f_1) >= GANG::_NETWORK_GET_GANG_SIZE(uParam0->f_1))
	{
		return true;
	}
	return false;
}

bool func_1429(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!GANG::NETWORK_IS_GANG_ID_VALID(uParam0->f_1))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(uParam0->f_1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		iVar1 = iVar0;
		if (iVar1 >= 0 && iVar1 < 32)
		{
			if (Global_1056554[iVar1 /*491*/].f_2 != -1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1430()
{
	if (Global_1203937.f_1 >= 4 && Global_1203937.f_1 <= 9)
	{
		return true;
	}
	if (func_2032())
	{
		return true;
	}
	if ((Global_1203937.f_2 == 3 || Global_1203937.f_2 == 4) || Global_1203937.f_2 == 5)
	{
		return true;
	}
	return false;
}

bool func_1431(bool bParam0)
{
	struct<14> Var0;
	int iVar44;

	if (!func_34(*bParam0))
	{
		return false;
	}
	Var0.f_13 = 10;
	iVar44 = 0;
	while (iVar44 <= (POSSE::_0xC084FF658B2E61DA(bParam0) - 1))
	{
		if (POSSE::_0xC084FF658B2E71DA(bParam0, iVar44, &Var0) && Var0.f_9)
		{
			if (Var0.f_12 >= 10)
			{
				return false;
			}
		}
		iVar44++;
	}
	return true;
}

void func_1432(var uParam0)
{
	Global_17418.f_55.f_14.f_4 = uParam0;
}

void func_1433(int iParam0)
{
	Global_1203937.f_1 = iParam0;
}

void func_1434(int iParam0)
{
	Global_1203937.f_111.f_2 = iParam0;
}

bool func_1435(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= (POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() - 1))
	{
		if (Global_1203937.f_483[iVar0 /*63*/] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1436(int iParam0)
{
	return (Global_1072759.f_22945.f_3 && iParam0) != 0;
}

char* func_1437(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1438(char* sParam0)
{
	return NETWORK::_0xD4022C7286B0DFA2(sParam0, 100, 22);
}

bool func_1439(int iParam0, char* sParam1)
{
	char* sVar0;
	int iVar1;

	sVar0 = PLAYER::GET_PLAYER_NAME(iParam0);
	iVar1 = HUD::GET_LENGTH_OF_LITERAL_STRING(sVar0);
	if (MISC::COMPARE_STRINGS(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

void func_1440(int iParam0, bool bParam1)
{
	func_1407(iParam0, 2);
	if (bParam1)
	{
		func_1407(iParam0, 4);
	}
	else if (func_1405(iParam0, 4))
	{
		func_2033(iParam0, 4);
	}
}

void func_1441(int iParam0)
{
	Global_1203937.f_2 = iParam0;
}

bool func_1442()
{
	return func_2034() > 11;
}

void func_1443(bool bParam0)
{
	int iVar0;
	bool bVar1;
	struct<26> Var2;

	iVar0 = PLAYER::PLAYER_ID();
	bVar1 = false;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		bVar1 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(iVar0)) == iVar0;
	}
	if (NETWORK::NETWORK_SESSION_IS_REQUEST_IN_PROGRESS(&(Global_1572887.f_260)) && (bParam0 || bVar1))
	{
		NETWORK::_NETWORK_SESSION_CANCEL_REQUEST(&(Global_1572887.f_260));
	}
	Var2.f_5 = 2;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_24 = -1;
	Global_1572887.f_260 = { Var2 };
}

void func_1444()
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.608566E+13f) && !func_1465(4096))
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(1.608566E+13f);
	}
}

bool func_1445(int iParam0, bool bParam1)
{
	bool bVar0;

	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_42();
	}
	else if (iParam0 == func_42())
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

void func_1446()
{
	Global_1956862.f_1431.f_108 = 0;
	Global_1956862.f_1431.f_108.f_1 = 0f;
	Global_1956862.f_1431.f_108.f_3 = 0f;
	Global_1956862.f_1431.f_108.f_2 = 0f;
	Global_1956862.f_1431.f_108.f_4 = 0f;
	Global_1956862.f_1431.f_108.f_6 = 0f;
	Global_1956862.f_1431.f_108.f_5 = 0f;
}

void func_1447(int iParam0)
{
	Global_1572887.f_72.f_40 = iParam0;
}

int func_1448(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -4.923836E-11f;
		case 1:
			return -1.183991E-26f;
		case 2:
			return 3.0585E+12f;
		case 3:
			return 6.504974E+36f;
		case 4:
			return -2.606333E-24f;
		case 5:
			return -1.032091E-38f;
		case 6:
			return -5.88325E+33f;
		case 7:
			return 6.631283E-35f;
		case 8:
			return -2.568551E-25f;
		case 9:
			return 5.038139E-36f;
		case 10:
			return 1.566288E-21f;
		case 11:
			return 3.508673E-32f;
		case 12:
			return -4.69489E+08f;
		case 13:
			return 8.416686E-10f;
		case 14:
			return 8.36175E-09f;
		case 15:
			return 3.880884E+24f;
		case 16:
			return 1.221154E+15f;
		case 17:
			return -4.49178E-32f;
		case 18:
			return -308.6616f;
		case 19:
			return 1.307238E-05f;
		case 20:
			return -2.683141E-16f;
		default:
			break;
	}
	return 0;
}

int func_1449(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1450()
{
	if (Global_1572887.f_72.f_60)
	{
		return;
	}
	Global_1572887.f_72.f_60 = 1;
	TELEMETRY::_TELEMETRY_MATCH_QUEUE(Global_1572887.f_72.f_60.f_1, Global_1572887.f_72.f_60.f_2, Global_1572887.f_72.f_60.f_3, Global_1572887.f_72.f_60.f_4, Global_1572887.f_72.f_60.f_5, &(Global_1572887.f_72.f_60.f_6), Global_1572887.f_300.f_10 != 0);
}

int func_1451()
{
	return Global_1102813.f_3673;
}

bool func_1452(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_1453(int iParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_ID(iParam0);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0) && !GANG::NETWORK_IS_GANG_LEADER(iParam0))
	{
		return false;
	}
	return true;
}

void func_1454(bool bParam0)
{
	MISC::COPY_SCRIPT_STRUCT(&(Global_1572887.f_72.f_17), bParam0, 22);
}

void func_1455(int iParam0, bool bParam1)
{
	Global_1572887.f_72.f_39 = iParam0;
	if (bParam1)
	{
		func_2035();
	}
}

void func_1456(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887.f_72 = iParam0;
	Global_1572887.f_72.f_9 = iParam1;
	Global_1572887.f_72.f_10 = iParam2;
	if (bParam3)
	{
		func_2035();
	}
}

void func_1457(struct<2> Param0, bool bParam2)
{
	Global_1572887.f_72.f_11 = { Param0 };
	if (bParam2)
	{
		func_2035();
	}
}

void func_1458(int iParam0)
{
	Global_1572887.f_72.f_15 = iParam0;
}

void func_1459(int iParam0)
{
	Global_1572887.f_72.f_13 = iParam0;
}

void func_1460()
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

bool func_1461()
{
	if (func_673() != 0)
	{
		return false;
	}
	if (Global_1572887.f_72.f_9 >= 5 && Global_1572887.f_72.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_1462(struct<2> Param0)
{
	if (func_2036())
	{
		return 0;
	}
	if (!func_821(Param0))
	{
		return 0;
	}
	Global_1051268 = { Param0 };
	return 1;
}

void func_1463()
{
	Global_1056554[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*491*/].f_15.f_12 = 0;
}

void func_1464(struct<2> Param0)
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
	iVar0 = func_1290(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_1293(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_2037(iVar0);
	Var3 = { func_2038(iVar1, uVar2) };
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1572887.f_72.f_115, MISC::VAR_STRING(2, &Var3));
}

bool func_1465(int iParam0)
{
	return (Global_1572887.f_72.f_15 && iParam0) != 0;
}

char* func_1466(int iParam0)
{
	int iVar0;

	iVar0 = func_2039(iParam0);
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

char* func_1467(int iParam0, int iParam1)
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

bool func_1468(var uParam0, int iParam1, int iParam2)
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

bool func_1469(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_1470(var uParam0, int iParam1, int iParam2)
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

bool func_1471()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_1472(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1132(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_2040(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_2041(bParam0, 0);
	}
	if (func_1798(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_570(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_1907(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_570(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_1473(bool bParam0)
{
	if (func_663() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_570(bParam0));
}

bool func_1474(int iParam0)
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

int func_1475(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_2042(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_2044(func_2043(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_2045(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_1476(int iParam0, struct<17> Param1)
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

bool func_1477(int iParam0, int iParam1)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_1139[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				return Global_1290256.f_1139[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_1139.f_275[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				return Global_1290256.f_1139.f_275[iVar0 /*24*/].f_6;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1478(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1235(&Global_1903834);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_2046(iParam0, &Global_1903834, &(Global_1903834.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_2047(iParam0, &Global_1903834, &(Global_1903834.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1479(int iParam0, int iParam1)
{
	return func_1503(&(iParam0->f_20), iParam1);
}

void func_1480(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_2048(uParam0, iParam1);
	}
	else
	{
		func_2049(uParam0, iParam1);
	}
}

bool func_1481(int iParam0)
{
	if (!func_2050(iParam0))
	{
		return false;
	}
	switch (iParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_2051(iParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_2052(iParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_1482(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_1139[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				Global_1290256.f_1139[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_1139.f_275[iVar0 /*24*/]), iParam0))
			{
			}
			else
			{
				Global_1290256.f_1139.f_275[iVar0 /*24*/].f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_1483(int iParam0, var uParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < 10)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[*uParam1 /*56*/]), iParam0))
		{
		}
		else
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

void func_1484(int iParam0, int iParam1, int iParam2)
{
	Global_17418.f_55.f_61.f_41[iParam0 /*56*/].f_29[iParam1 /*5*/] = iParam2;
}

bool func_1485(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1486(int iParam0, int iParam1)
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

void func_1487(int iParam0)
{
	func_773(3, iParam0);
}

int func_1488()
{
	return Global_1290256.f_1130.f_5;
}

float func_1489(int iParam0)
{
	if (iParam0 == 9.256025E-25f || iParam0 == -218565.1f)
	{
		return 1.256553E-21f;
	}
	return Global_524288.f_39632;
}

int func_1490(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_2053(iParam1))
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

bool func_1491(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_1492(int iParam0, int iParam1)
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

void func_1493(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<25> Var3;

	Var3.f_9 = -5.45926E-19f;
	if (!func_534("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_2054(&Var3, iVar2, iVar0, iVar1, 0))
		{
		}
		else if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var3, iParam0))
		{
		}
		else if (func_1503(&(Var3.f_24), 16))
		{
			func_2055(&(Var3.f_24), 16);
			func_2056(&Var3, 1, 1);
		}
		iVar2++;
	}
	func_538(iVar0);
}

bool func_1494(int iParam0, bool bParam1)
{
	struct<25> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (func_1910(iParam0, &Var0, bParam1))
	{
		if (func_1503(&(Var0.f_24), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1495(int iParam0, bool bParam1, bool bParam2)
{
	struct<25> Var0;
	bool bVar29;
	struct<25> Var30;
	struct<25> Var59;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (func_1910(iParam0, &Var0, bParam2))
	{
		bVar29 = func_1503(&(Var0.f_24), 16);
		if (bVar29 == bParam1)
		{
			return true;
		}
		else
		{
			Var30.f_9 = -5.45926E-19f;
			Var59.f_9 = -5.45926E-19f;
			if (bParam1)
			{
				if (!bVar29 && func_1228(&Var30, 0))
				{
					if (func_1233(&Var59, bParam2))
					{
						func_2055(&(Var59.f_24), 32);
						func_2056(&Var59, 1, bParam2);
					}
					func_2057(&(Var30.f_24), 32);
					func_1495(&Var30, 0, bParam2);
				}
				func_2057(&(Var0.f_24), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar29 && func_1233(&Var59, bParam2))
				{
					func_2055(&(Var59.f_24), 32);
					func_2056(&Var59, 1, bParam2);
				}
				func_2057(&(Var0.f_24), 32);
				func_2055(&(Var0.f_24), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_2056(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

bool func_1496(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

void func_1497(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<24> Var20;
	int iVar44;

	Var2 = { func_552(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
	if (!func_553(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var20.f_9 = -5.45926E-19f;
	iVar44 = 0;
	while (iVar44 < iVar1)
	{
		if (!func_2058(&Var20, iVar44, iVar0, iVar1, 0))
		{
		}
		else if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var20, iParam0))
		{
		}
		else if (func_1503(&(Var20.f_23), 16))
		{
			func_2055(&(Var20.f_23), 16);
			func_2059(&Var20, 1, 1);
		}
		iVar44++;
	}
	func_538(iVar0);
}

bool func_1498(int iParam0, bool bParam1)
{
	struct<24> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (func_1502(iParam0, &Var0, bParam1))
	{
		if (func_1503(&(Var0.f_23), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1499(int iParam0, bool bParam1, bool bParam2)
{
	struct<24> Var0;
	bool bVar24;
	struct<24> Var25;
	struct<24> Var49;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (func_1502(iParam0, &Var0, bParam2))
	{
		bVar24 = func_1503(&(Var0.f_23), 16);
		if (bVar24 == bParam1)
		{
			return true;
		}
		else
		{
			Var25.f_9 = -5.45926E-19f;
			Var49.f_9 = -5.45926E-19f;
			if (bParam1)
			{
				if (!bVar24 && func_797(&Var25, 0))
				{
					if (func_803(&Var49, bParam2))
					{
						func_2055(&(Var49.f_23), 32);
						func_2059(&Var49, 1, bParam2);
					}
					func_2057(&(Var25.f_23), 32);
					func_1499(&Var25, 0, bParam2);
				}
				func_2057(&(Var0.f_23), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar24 && func_803(&Var49, bParam2))
				{
					func_2055(&(Var49.f_23), 32);
					func_2059(&Var49, 1, bParam2);
				}
				func_2057(&(Var0.f_23), 32);
				func_2055(&(Var0.f_23), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_2059(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

void func_1500(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_10 = (Global_1289628[iVar0 /*19*/].f_10 || iParam0);
}

bool func_1501(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1502(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_570(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_1503(int iParam0, int iParam1)
{
	return func_613(*iParam0, iParam1);
}

bool func_1504(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_1505(int iParam0, int iParam1)
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

int func_1506(int iParam0, int iParam1)
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

int func_1507(int iParam0)
{
	if (!func_2060(iParam0))
	{
		return 0;
	}
	if (func_663() == -1)
	{
		return 0;
	}
	return Global_1835011[iParam0 /*72*/].f_51;
}

bool func_1508(bool bParam0)
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

bool func_1509(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

int func_1510(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

int func_1511(int iParam0)
{
	return Global_1295802[iParam0 /*37*/].f_9;
}

struct<2> func_1512(int iParam0)
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	MISC::COPY_SCRIPT_STRUCT(&Var0, &(Global_1295802[iParam0 /*37*/].f_6), 2);
	return Var0;
}

var func_1513(bool bParam0)
{
	return func_2061(bParam0, 67, 1);
}

bool func_1514(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	*bParam0 = Global_1149417.f_7;
	bParam0->f_2 = fParam3;
	bParam0->f_3 = func_2062(iParam1);
	bParam0->f_4 = iParam2;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0);
}

void func_1515(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;

	*uParam2 = iParam0;
	bParam1->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam1);
	uParam2->f_3 = func_2063(iParam0, uParam2->f_1);
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
			uParam2->f_5 = func_2064(iVar0);
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
			uParam2->f_5 = func_2065(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_2066(iVar0);
		}
		bParam1->f_2 = 4.168656E-33f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_6), bParam1);
	}
	else if (*uParam2 == 7)
	{
		bParam1->f_2 = 3.190274E+20f;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1))
		{
			uParam2->f_5 = func_2067(iVar0);
		}
	}
	else
	{
		bParam1->f_2 = 3.190274E+20f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_5), bParam1);
	}
	bParam1->f_2 = 1.006963E+34f;
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&iVar0, bParam1);
	uParam2->f_7 = func_2068(iVar0);
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

int func_1516(int iParam0)
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

int func_1517()
{
	return 4;
}

float func_1518(float fParam0, float fParam1)
{
	return (BUILTIN::LOG10(fParam1) / BUILTIN::LOG10(fParam0));
}

int func_1519(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 13;
				case 2:
					return 2;
				case 3:
					return 15;
				case 4:
					return 2;
				default:
					break;
			}
			Jump @230; //curOff = 94
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 13;
				case 2:
					return 2;
				case 3:
					return 13;
				case 4:
					return 2;
				default:
					break;
			}
			Jump @230; //curOff = 160
			switch (iParam1)
			{
				case 0:
					return 3;
				case 1:
					return 0;
				case 2:
					return 2;
				case 3:
					return 0;
				case 4:
					return 0;
				default:
					break;
			}
			return 0;
		}

int func_1520(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_828(iParam0, iParam1, 0);
	return (BUILTIN::FLOOR(BUILTIN::POW(2f, BUILTIN::TO_FLOAT(iVar0))) - 1);
}

int func_1521(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			return uParam1->f_2;
		case 1:
			return uParam1->f_4;
		case 2:
			return uParam1->f_5;
		case 3:
			return uParam1->f_1;
		case 4:
			return *uParam1;
		default:
			break;
	}
	return -1;
}

bool func_1522(bool bParam0)
{
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(func_1362(bParam0, 0));
}

bool func_1523(bool bParam0, var uParam1, var uParam2)
{
	int iVar0;

	*uParam1 = func_834(bParam0);
	iVar0 = 0;
	while (iVar0 < 64)
	{
		if (*uParam1 == Global_265213.f_107995.f_13575[iVar0])
		{
			*uParam2 = { Global_265213.f_107995[iVar0 /*4*/] };
			*uParam1 = Global_265213.f_107995.f_13575[iVar0];
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1524(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_1525(var uParam0, int iParam1, char[32] cParam2, struct<17> Param10, var uParam27, var uParam28)
{
	func_1331(uParam0, iParam1, cParam2, Param10);
	uParam0->f_19 = DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, func_58(15), Param10.f_16);
}

int func_1526(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -6.411276E-38f;
		case 1:
			return -1.913271E-27f;
		case 2:
			return 1.141978E+34f;
		default:
			break;
	}
	return 0;
}

void func_1527(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1940239.f_245.f_5);
	iVar0 = iParam0;
	iVar1 = 29;
	while (iVar1 >= 0)
	{
		if (!DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_245.f_14[iVar1 /*43*/].f_41))
		{
		}
		else if (func_2069() != 0)
		{
			if (DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar1 /*43*/].f_28) != iVar0)
			{
			}
			else
			{
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_245.f_5, iVar2, "pm_invite_item", Global_1940239.f_245.f_14[iVar1 /*43*/]);
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
			Global_1940239.f_245.f_1309 = 0;
			Global_1940239.f_245.f_1307 = iVar2;
		}
	}
}

int func_1528(bool bParam0)
{
	int iVar0;

	if (!func_1592())
	{
		return 4;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return 1;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
	{
		return 2;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 3;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 5;
	}
	if (!func_2070(iVar0))
	{
		return 6;
	}
	if (func_2071(*bParam0) != 0)
	{
		return 7;
	}
	return 0;
}

bool func_1529(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	struct<23> Var3;
	int iVar66;
	struct<14> Var67;
	int iVar111;
	int iVar112;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		POSSE::_0xC08AFF658B2E51DA(&iVar2);
		Var3.f_22 = 10;
		if (iVar2 != 0)
		{
			Var0 = { func_694() };
			if (POSSE::_0xC087FF658B2E51DA(iVar2, &Var3))
			{
				iVar66 = 0;
				while (iVar66 <= 9)
				{
					if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var3.f_22[iVar66 /*4*/]), &Var0))
					{
						*iParam1 = Var3.f_22[iVar66 /*4*/].f_2;
						return true;
					}
					iVar66++;
				}
			}
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		Var0 = { func_610(iParam0) };
		Var67.f_13 = 10;
		iVar111 = 0;
		while (iVar111 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
		{
			if (POSSE::_0xC084FF658B2E71DA(&Var0, iVar111, &Var67))
			{
				if (Var67.f_9 == 1)
				{
					iVar112 = 0;
					while (iVar112 <= (Var67.f_12 - 1))
					{
						if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var67.f_13[iVar112 /*3*/]), &Var0))
						{
							*iParam1 = Var67.f_13[iVar112 /*3*/].f_2;
							return true;
						}
						iVar112++;
					}
				}
				else
				{
					iVar111++;
				}
				return false;
				Jump @268; //curOff = 261
				return false;
				return false;
			}
		}
	}
}

char* func_1530(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return MISC::VAR_STRING(2, "NUMBER", Global_1155135[iParam0 /*30*/]);
}

void func_1531(var uParam0, struct<62> Param1, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3, Param1.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_22, Param1.f_19);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_23, Param1.f_20);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_24, Param1.f_21);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_28, &(Param1.f_25));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_29, &(Param1.f_41));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_30, Param1.f_57);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_32, Param1.f_59);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_33, Param1.f_60);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_34, Param1.f_61);
}

void func_1532()
{
	int iVar0;
	struct<30> Var1;
	struct<2> Var31;
	int iVar33;
	int iVar34;
	int iVar35;

	iVar0 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[Global_1940239.f_245.f_1310 /*43*/].f_31);
	Var1.f_3 = -1;
	Var1.f_3.f_1 = -1;
	Var1.f_11.f_12 = -1;
	Var1.f_11.f_12.f_1 = -1;
	Var1.f_11.f_14 = 255;
	Var1.f_11.f_15 = 255;
	if (Global_1072759.f_23 > 0 && iVar0 < 10)
	{
		Var1 = { Global_1072759.f_23.f_5[iVar0 /*30*/] };
	}
	if (!Var1)
	{
		return;
	}
	Var31 = { Var1.f_3 };
	iVar33 = func_1325(Var31);
	switch (iVar33)
	{
		case 20:
		case 21:
		case 28:
			iVar34 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iVar0 /*43*/].f_29);
			iVar35 = (Global_1295619.f_16 - (iVar34 - (Global_1901671.f_316.f_177 / 1000)));
			TELEMETRY::_TELEMETRY_PARLEY_FEUD(8.717653E-13f, Var1.f_11.f_1, PLAYER::PLAYER_ID(), 0, iVar35);
			break;
	}
}

bool func_1533(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1534(int iParam0, int iParam1)
{
	char* sVar0;
	struct<16> Var1;
	int iVar17;
	int iVar18;
	struct<2> Var19;

	switch (iParam0)
	{
		case 8:
			iVar17 = DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iParam1 /*43*/].f_32);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar17))
			{
				return sVar0;
			}
			switch (func_1544(&Var1, iVar17, 1))
			{
				case 1:
					return sVar0;
				case 2:
					if (func_2072() == 0)
					{
						func_1545(PLAYER::INT_TO_PLAYERINDEX(iVar17));
					}
					return sVar0;
				case 3:
					return sVar0;
				case 4:
					sVar0 = func_716(Var1);
					return sVar0;
				default:
					break;
			}
			break;
		case 1:
			Var19 = { func_610(PLAYER::PLAYER_ID()) };
			func_1424(&Var19);
			iVar18 = NETWORK::_0x27B1AE4D8C652F08(DATABINDING::DATABINDING_READ_INT(Global_1940239.f_245.f_14[iParam1 /*43*/].f_31));
			NETWORK::_0x16EFB123C4451032(iVar18, &Var19);
			func_1424(&Var19);
			if (!func_34(Var19))
			{
				return sVar0;
			}
			sVar0 = NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&Var19, 0);
			if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
			{
				return sVar0;
			}
			break;
	}
	return sVar0;
}

var func_1535(var uParam0)
{
	int iVar0;
	var uVar1;

	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 62)
	{
		return uVar1;
	}
	return Global_1896762.f_3399[iVar0 /*4*/].f_3;
}

int func_1536()
{
	if (func_914() && func_1595(16) == 0)
	{
		return 3;
	}
	if (func_915())
	{
		return 4;
	}
	if (func_909() || func_910())
	{
		return 3;
	}
	if (UNLOCK::UNLOCK_IS_UNLOCKED(-2.482458E-34f) == 0)
	{
		return 2;
	}
	if (func_443())
	{
		return 1;
	}
	return 0;
}

void func_1537(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_149.f_112, bParam0);
}

void func_1538(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_149.f_113, sParam0);
}

bool func_1539(int iParam0, var uParam1, bool bParam2)
{
	char cVar0[64];
	int iVar8;
	bool bVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	char cVar13[64];

	if (bParam2)
	{
		if (!func_227(uParam1))
		{
			return false;
		}
	}
	StringCopy(&cVar0, "Posse_Entry_Root_", 64);
	StringIntConCat(&cVar0, DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1), 64);
	iVar8 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(Global_1940239.f_1556.f_149.f_1, &cVar0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(0), true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(1), true);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(2), 27.64779f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(58), 1.608566E+13f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(60), 3.15697E-28f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(59), 3.15697E-28f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(61), -5.222598E+14f);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(63), true);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(64), true);
	bVar9 = func_197(uParam1);
	bVar10 = func_867(uParam1);
	bVar11 = func_1076(uParam1);
	bVar12 = func_861(uParam1);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, func_58(15), func_890(uParam1));
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(5), 4.116809E-22f);
	if (func_1594(uParam1))
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(6), 1.094245E-31f);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(6), -1.447807E+10f);
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(7), bVar9);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(4), 3.661866E-19f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(21), 3.347692E+13f);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar8, func_58(22), -1.367564E-05f);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(23), (bVar11 && bVar10));
	IntToString(&cVar13, func_1562(uParam1), 64);
	StringConCat(&cVar13, "/", 64);
	StringIntConCat(&cVar13, func_1543(uParam1), 64);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar8, func_58(17), func_1437(cVar13));
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(19), !(bVar11 && bVar10));
	if (!bVar11)
	{
		DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, func_58(0), bVar12);
		if (bVar12)
		{
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar9);
	DATABINDING::_DATABINDING_ADD_DATA_GANG_ID(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	DATABINDING::_DATABINDING_ADD_DATA_POSSE_ID(iVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_149.f_1, iParam0, "pm_dynamic_posse_entry", iVar8);
	return true;
}

bool func_1540(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	char cVar5[64];

	if (iParam0 < 0 || iParam0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1940239.f_1556.f_149.f_1))
	{
		return false;
	}
	if (bParam2)
	{
		if (!func_227(uParam1))
		{
			return false;
		}
	}
	iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1940239.f_1556.f_149.f_1, iParam0);
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return false;
	}
	bVar1 = func_197(uParam1);
	bVar2 = func_867(uParam1);
	bVar3 = func_1076(uParam1);
	bVar4 = func_861(uParam1);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, func_58(15), func_890(uParam1));
	if (bVar1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(5), 4.116809E-22f);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(4), 3.661866E-19f);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_58(7), (bVar1 && bVar3));
		if (func_1594(uParam1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(6), 1.094245E-31f);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(6), 1.44691E+08f);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(5), 174087.3f);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_58(7), !bVar4);
		if (!bVar4)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(4), -1.091314E-34f);
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, func_58(6), 1.313113E-18f);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_58(23), (bVar3 && bVar2));
	IntToString(&cVar5, func_1562(uParam1), 64);
	StringConCat(&cVar5, "/", 64);
	StringIntConCat(&cVar5, func_1543(uParam1), 64);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, func_58(17), func_1437(cVar5));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_58(19), !(bVar3 && bVar2));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, func_58(0), bVar4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_GANG_ID(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_POSSE_ID(iVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	return true;
}

int func_1541()
{
	return func_862(Global_1940239.f_1556);
}

int func_1542(int iParam0)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return 0;
	}
	else if (POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT() == 0)
	{
		return 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (Global_1203937.f_483[iVar0 /*63*/] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1543(var uParam0)
{
	return uParam0->f_32;
}

int func_1544(char* sParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar5;
	int iVar6;
	char* sVar7;

	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_2073(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			NETWORK::NETWORK_HANDLE_FROM_PLAYER(PLAYER::INT_TO_PLAYERINDEX(iParam1), &uVar3);
			if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, NETWORK::_REQUEST_PEDSHOT_TEXTURE_MULTIPLAYER_DOWNLOAD(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar5 = func_2074(iParam2);
					iVar1 = NETWORK::_LOCAL_PLAYER_PEDSHOT_TEXTURE_DOWNLOAD_REQUEST(iParam1, iVar5);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_2075(iParam1, iParam2, 0);
						return 1;
					}
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1)))
					{
						func_2075(iParam1, iParam2, 3);
					}
					else
					{
						func_2075(iParam1, iParam2, 4);
					}
					func_2076(iParam1, iParam2, iVar1);
					break;
				case 3:
					iVar1 = func_2077(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2075(iParam1, iParam2, 0);
						return 1;
					}
					iVar6 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iVar1);
					switch (iVar6)
					{
						case 0:
							func_2075(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_2075(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_2077(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2075(iParam1, iParam2, 0);
						return 1;
					}
					sVar7 = NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1);
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sVar7))
					{
						return 3;
					}
					func_2075(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_2077(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_2075(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1545(int iParam0)
{
	struct<4> Var0;

	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&(Var0.f_2), iParam0);
	func_2078(&Var0);
}

void func_1546(var uParam0, struct<4> Param1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_2, Param1.f_1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_3, Param1.f_2);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_4, Param1.f_3);
}

char* func_1547(var uParam0)
{
	return func_716(uParam0->f_13);
}

int func_1548(var uParam0)
{
	return uParam0->f_51;
}

bool func_1549(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 16)
	{
		return false;
	}
	return func_2079(&(Global_1149417.f_11.f_3222.f_320[iParam0 /*4*/]), 1);
}

int func_1550(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[7];
	int iVar17;
	int iVar18;
	int iVar19;

	iVar17 = GANG::_NETWORK_GET_GANG_MEMBERS(uParam0->f_1, &Var2);
	iVar18 = 0;
	while (iVar18 < iVar17)
	{
		iVar19 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var2[iVar18 /*2*/]));
		iVar1 = func_525(iVar19, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				if (iVar0 < 1)
				{
					iVar0 = 0;
				}
				break;
			case 2:
			case 3:
				if (iVar0 < 2)
				{
					iVar0 = 1;
				}
				break;
			case 4:
			case 5:
			case 6:
				iVar0 = 2;
				break;
		}
		iVar18++;
	}
	return iVar0;
}

void func_1551(var uParam0, struct<51> Param1, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, bool bParam67)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_1, Param1);
	if (Param1 || bParam67)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_46, &(Param1.f_1));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, &(Param1.f_17));
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_48, Param1.f_33);
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_49, &(Param1.f_34));
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_50, &(Param1.f_50));
	}
}

void func_1552(var uParam0)
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_1), &uVar0, 2);
	uParam0->f_19 = 0;
	StringCopy(&(uParam0->f_3), "", 128);
	*uParam0 = 0;
	uParam0->f_22 = -1;
	uParam0->f_23 = -1;
	uParam0->f_20 = -1;
}

int func_1553()
{
	return Global_1940239.f_1556.f_9756.f_244;
}

float func_1554(var uParam0)
{
	if (!func_1040(uParam0))
	{
		return 0f;
	}
	if (func_1733(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1734() - uParam0->f_1);
}

bool func_1555(int iParam0)
{
	if (Global_1896762.f_368.f_2563 >= 32)
	{
		return false;
	}
	func_1552(&(Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/]));
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_22 = -8.041937E-13f;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_23 = iParam0;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/] = 0;
	Global_1896762.f_368.f_2563++;
	return true;
}

int func_1556(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2)
	{
	}
	uParam0->f_19 = 4.116809E-22f;
	uParam0->f_20 = 1.44691E+08f;
	func_614(&(uParam1->f_20), 256);
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 1;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar1))
	{
		return 1;
	}
	if (!GANG::NETWORK_IS_GANG_ACTIVE(iVar1))
	{
		return 1;
	}
	if (GANG::NETWORK_IS_GANG_LEADER(iVar0))
	{
		uParam0->f_20 = 1.094245E-31f;
	}
	return 1;
}

int func_1557(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 1;
	}
	bVar1 = (VOICE::_0xAA35FD9ABAB490A3(iVar0) && VOICE::_0xEF6F2A35FAAF2ED7(iVar0));
	if (VOICE::_0x0DED260A1958A82E(iVar0))
	{
		uParam0->f_20 = -2.095872E-34f;
		uParam0->f_19 = 4.116809E-22f;
	}
	else if (bVar1)
	{
		uParam0->f_20 = -1.594221E+34f;
		uParam0->f_19 = 4.116809E-22f;
	}
	func_614(&(uParam1->f_20), 256);
	return 1;
}

int func_1558(var uParam0, var uParam1, bool bParam2)
{
	bool bVar0;
	var uVar1;
	int iVar17;
	int iVar18;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 128);
	bVar0 = false;
	iVar18 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		iVar18 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
		if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar18))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		iVar17 = func_1544(&uVar1, iVar18, 1);
		if (iVar17 != 4)
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		iVar17 = func_2080(&uVar1, uParam1->f_1, 0);
	}
	switch (iVar17)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_16 = 6.522135E+22f;
			uParam0->f_17 = 1.749576E+13f;
			uParam0->f_18 = 1;
			return 1;
		case 4:
			if (MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
			{
				uParam0->f_16 = 6.522135E+22f;
				uParam0->f_17 = 1.749576E+13f;
				uParam0->f_18 = 1;
			}
			else
			{
				uParam0->f_16 = MISC::GET_HASH_KEY(&uVar1);
				uParam0->f_17 = uParam0->f_16;
				uParam0->f_18 = 1;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_1559(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return 0;
	}
	uParam1->f_19 = func_1715(iVar0);
	uParam0->f_59 = -1.228104E-22f;
	uParam0->f_60 = -0.04435345f;
	uParam0->f_61 = 1;
	StringCopy(&(uParam0->f_41), func_2081(uParam1->f_19), 128);
	uParam0->f_57 = 1;
	func_614(&(uParam1->f_20), 1536);
	return 1;
}

int func_1560(var uParam0, char* sParam1)
{
	struct<55> Var0;

	Var0 = { func_196(1) };
	switch (uParam0->f_22)
	{
		case 791621612:
			StringCopy(sParam1, MISC::VAR_STRING(2, "NM_MW_POSSE_MEMBER_LOCKED_FOOTER"), 128);
			return 1;
		case -1419617212:
			if (!func_867(&Var0) && func_1594(&Var0))
			{
				StringCopy(sParam1, MISC::VAR_STRING(2, "NM_POSSE_REFORM_TOOLTIP"), 128);
				return 1;
			}
			break;
	}
	return 0;
}

int func_1561(var uParam0, var uParam1, bool bParam2)
{
	struct<55> Var0;

	func_614(&(uParam1->f_20), 8192);
	if (bParam2)
	{
	}
	Var0 = { func_196(1) };
	switch (uParam1->f_22)
	{
		case -1419617212:
			uParam0->f_9 = func_1594(&Var0);
			uParam0->f_8 = ((func_1594(&Var0) && func_709()) && func_867(&Var0));
			break;
	}
	return 1;
}

int func_1562(var uParam0)
{
	return uParam0->f_31;
}

int func_1563(var uParam0)
{
	if (uParam0->f_4)
	{
		return 7;
	}
	else
	{
		return 4;
	}
	return 0;
}

bool func_1564(var uParam0, int iParam1, bool bParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_31)
	{
		return false;
	}
	MISC::COPY_SCRIPT_STRUCT(bParam2, &(uParam0->f_33[iParam1 /*2*/]), 2);
	return true;
}

bool func_1565(var uParam0, var uParam1, var uParam2)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_29)))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&uParam1))
	{
		return false;
	}
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &uParam1);
}

int func_1566(int iParam0, int iParam1)
{
	struct<24> Var0;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	Var0.f_22 = -1;
	Var0.f_23 = -1;
	func_2082(&Var0, &(Global_1896762.f_368.f_2[iParam0 /*80*/]));
	func_2082(&(Global_1896762.f_368.f_2[iParam0 /*80*/]), &(Global_1896762.f_368.f_2[iParam1 /*80*/]));
	func_2082(&(Global_1896762.f_368.f_2[iParam1 /*80*/]), &Var0);
	return 1;
}

bool func_1567(int iParam0)
{
	if (Global_1896762.f_368.f_2563 >= 32)
	{
		return false;
	}
	func_1552(&(Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/]));
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_22 = 1.593318E-10f;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/].f_23 = iParam0;
	Global_1896762.f_368.f_2[Global_1896762.f_368.f_2563 /*80*/] = 0;
	Global_1896762.f_368.f_2563++;
	return true;
}

bool func_1568(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, int iParam56)
{
	struct<5> Var0;
	struct<2> Var5;
	int iVar7;

	if (!func_227(&uParam1))
	{
		return false;
	}
	Var0 = 1;
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam56))
	{
		Var0 = 1;
	}
	else
	{
		Var0 = 0;
		return false;
	}
	Var5 = { func_610(iParam56) };
	Var0.f_1 = func_1565(&uParam1, Var5);
	if (Var0.f_1)
	{
	}
	if (func_1549(func_1399(iParam56)))
	{
		Var0.f_2 = "NM_HONOR_GOOD";
	}
	else
	{
		Var0.f_2 = "NM_HONOR_BAD";
	}
	iVar7 = func_525(iParam56, 0);
	switch (iVar7)
	{
		case 0:
		case 1:
			Var0.f_3 = "HOSTILITY_NLOW";
			Var0.f_4 = 27.64779f;
			break;
		case 2:
		case 3:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = 27.64779f;
			break;
		case 4:
		case 5:
		case 6:
			Var0.f_3 = "HOSTILITY_NHIGH";
			Var0.f_4 = 4.465091E-08f;
			break;
		default:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = 27.64779f;
			break;
	}
	func_2083(uParam0, Var0, 0);
	return true;
}

void func_1569(bool bParam0)
{
	struct<83> Var0;

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_81 = 255;
	Var0.f_82 = -1.401298E-45f;
	MISC::COPY_SCRIPT_STRUCT(bParam0, &Var0, 83);
}

bool func_1570(var uParam0)
{
	if (uParam0->f_22 == 1.593318E-10f || uParam0->f_22 == -8.041937E-13f)
	{
		return true;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_1)))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(func_716(uParam0->f_3)))
	{
		return false;
	}
	return true;
}

bool func_1571(var uParam0)
{
	switch (uParam0->f_22)
	{
		case -1178838578:
			if (func_1528(&(uParam0->f_1)) != 0)
			{
				if (uParam0->f_22 != -1.817237E+22f)
				{
					uParam0->f_22 = -1.817237E+22f;
					return true;
				}
			}
			break;
		case -462010351:
			if (func_1528(&(uParam0->f_1)) == 0)
			{
				if (uParam0->f_22 != -0.0003592506f)
				{
					uParam0->f_22 = -0.0003592506f;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1572(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1573()
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_368.f_1))
	{
		return 0;
	}
	return DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896762.f_368.f_1);
}

bool func_1574(var uParam0)
{
	return *uParam0;
}

bool func_1575(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_4 = 1.608566E+13f;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_3 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_7 = 0;
	uParam0->f_18 = 1;
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	uParam0->f_21 = 1;
	uParam0->f_20 = 1.44691E+08f;
	uParam0->f_19 = 4.116809E-22f;
	uParam0->f_61 = 0;
	uParam0->f_2 = 27.64779f;
	switch (iParam1)
	{
		case -1178838578:
			uParam0->f_16 = 3.347692E+13f;
			uParam0->f_17 = -0.1987056f;
			uParam0->f_18 = 1;
			uParam0->f_57 = 1;
			uParam0->f_58 = 1;
			uParam0->f_61 = 1;
			uParam0->f_60 = -0.04435345f;
			uParam0->f_59 = -1.228104E-22f;
			break;
		case -462010351:
			uParam0->f_21 = 1;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -5.222598E+14f;
			uParam0->f_5 = 6.977397E-30f;
			uParam0->f_6 = 6.977397E-30f;
			break;
		case 791621612:
			uParam0->f_8 = 0;
			uParam0->f_5 = -241.9654f;
			uParam0->f_18 = 0;
			uParam0->f_19 = 174087.3f;
			uParam0->f_20 = 1.313113E-18f;
			StringCopy(&(uParam0->f_25), MISC::VAR_STRING(2, "NM_PW_PLAYER_SLOT_LOCKED"), 128);
			uParam0->f_2 = 5.316992E+14f;
			break;
		case -1419617212:
			uParam0->f_8 = 0;
			uParam0->f_5 = -7254.844f;
			uParam0->f_18 = 0;
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_25), MISC::VAR_STRING(2, "NM_PW_PLAYER_SLOT_EMPTY"), 128);
			uParam0->f_2 = 5.316992E+14f;
			break;
	}
	switch (iParam2)
	{
		case 11:
			uParam0->f_5 = -4.215859E+11f;
			uParam0->f_6 = -4.215859E+11f;
			uParam0->f_9 = 1;
			uParam0->f_8 = 1;
			uParam0->f_7 = 4.140217E-22f;
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -1.135365E+20f;
				uParam0->f_63 = 1.509706E+36f;
			}
			break;
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_3 = -0.1467464f;
			uParam0->f_5 = 6.977397E-30f;
			uParam0->f_6 = 6.977397E-30f;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -5.222598E+14f;
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -9.73204E-10f;
					uParam0->f_73 = 1;
					uParam0->f_70 = 2.446553E-28f;
					uParam0->f_69 = 1;
					break;
				case -462010351:
					uParam0->f_3 = -0.1467464f;
					break;
			}
			break;
		case 4:
			uParam0->f_5 = -7.172786E+10f;
			uParam0->f_9 = 1;
			uParam0->f_7 = 4.111706E+23f;
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -1.135365E+20f;
				uParam0->f_63 = 1.509706E+36f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -0.1467464f;
					uParam0->f_5 = -0.1778669f;
					uParam0->f_6 = -0.1778669f;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -5.222598E+14f;
					break;
				case -462010351:
					uParam0->f_3 = -0.1467464f;
					uParam0->f_5 = 6.977397E-30f;
					uParam0->f_6 = -0.1778669f;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -5.222598E+14f;
					break;
				case 791621612:
					uParam0->f_8 = 0;
					uParam0->f_5 = -241.9654f;
					uParam0->f_18 = 0;
					break;
				case -1419617212:
					uParam0->f_3 = -7.714272E-06f;
					uParam0->f_9 = 1;
					uParam0->f_7 = 4.140217E-22f;
					uParam0->f_8 = 1;
					uParam0->f_8 = 0;
					uParam0->f_5 = -7254.844f;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = 5.316992E+14f;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -0.1467464f;
					uParam0->f_5 = -0.1778669f;
					uParam0->f_6 = -0.1778669f;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -5.222598E+14f;
					break;
				case -462010351:
					uParam0->f_3 = -0.1467464f;
					uParam0->f_5 = 6.977397E-30f;
					uParam0->f_6 = -0.1778669f;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -5.222598E+14f;
					break;
				case -1419617212:
					uParam0->f_8 = 0;
					uParam0->f_5 = -7254.844f;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = 5.316992E+14f;
					break;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			uParam0->f_5 = 796647f;
			uParam0->f_6 = 796647f;
			uParam0->f_9 = 1;
			uParam0->f_7 = 4.140217E-22f;
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -1.135365E+20f;
				uParam0->f_63 = 1.509706E+36f;
			}
			break;
		case 12:
		case 13:
		case 14:
			uParam0->f_5 = 2.316246E-18f;
			uParam0->f_6 = 2.316246E-18f;
			uParam0->f_9 = 1;
			uParam0->f_7 = 4.140217E-22f;
			if (MISC::IS_DURANGO_VERSION())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -1.135365E+20f;
				uParam0->f_63 = 1.509706E+36f;
			}
			break;
		case 15:
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -5.222598E+14f;
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -9.73204E-10f;
					uParam0->f_73 = 1;
					uParam0->f_70 = 2.446553E-28f;
					uParam0->f_69 = 1;
					uParam0->f_5 = 6.977397E-30f;
					uParam0->f_6 = 6.977397E-30f;
					if (MISC::IS_DURANGO_VERSION())
					{
						uParam0->f_64 = 1;
						uParam0->f_65 = 1;
						uParam0->f_66 = -1.135365E+20f;
						uParam0->f_63 = 1.509706E+36f;
					}
					break;
				case -1419617212:
					uParam0->f_3 = 3.187198E-24f;
					uParam0->f_9 = 1;
					uParam0->f_8 = 1;
					uParam0->f_7 = 4.140217E-22f;
					if (func_846())
					{
						uParam0->f_5 = 1.486791E-17f;
						uParam0->f_6 = 1.486791E-17f;
					}
					break;
			}
			break;
	}
	return true;
}

void func_1576(var uParam0, int iParam1)
{
	func_1328(&(uParam0->f_20), iParam1);
}

bool func_1577(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (uParam1->f_22 == 1.593318E-10f || uParam1->f_22 == -8.041937E-13f)
	{
		return true;
	}
	iVar0 = 255;
	switch (uParam1->f_22)
	{
		case -1178838578:
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
			}
			MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_79), &(uParam1->f_1), 2);
			StringCopy(&(uParam0->f_25), func_713(func_2084(uParam1->f_3), 4.808429E-35f), 128);
			uParam0->f_2 = func_712(iVar0, 1, -1, 0);
			break;
		case -462010351:
			MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_79), &(uParam1->f_1), 2);
			StringCopy(&(uParam0->f_25), func_713(func_2084(uParam1->f_3), 4.808429E-35f), 128);
			uParam0->f_2 = 27.64779f;
			break;
	}
	func_614(&(uParam1->f_20), 2048);
	func_614(&(uParam1->f_20), 65536);
	func_614(&(uParam1->f_20), 32);
	return true;
}

bool func_1578(int iParam0, var uParam1, var uParam2, var uParam3)
{
	char cVar0[64];

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896762.f_368.f_1) > iParam0)
	{
		func_2085(uParam1, uParam2, uParam3);
	}
	else
	{
		StringCopy(&cVar0, "Player_List_Entry_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		func_2086(uParam2, Global_1896762.f_368, cVar0, *uParam1);
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1896762.f_368.f_1, iParam0, "pm_dynamic_player_entry", *uParam2);
	}
	return true;
}

void func_1579(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_1580(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896762.f_368.f_2563)
	{
		return 0;
	}
	MISC::COPY_SCRIPT_STRUCT(&(Global_1896762.f_368.f_2[iParam0 /*80*/]), bParam1, 80);
	return 1;
}

int func_1581(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
		case 8:
		case 12:
			if (MISC::IS_STADIA_VERSION())
			{
				switch (NETWORK::_0x3E8CCE6769DB5F34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, MISC::VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1582(int iParam0)
{
	int iVar0;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_368.f_1))
	{
		return;
	}
	iVar0 = (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(Global_1896762.f_368.f_1) - 1);
	while (iVar0 >= iParam0)
	{
		DATABINDING::_0x6318FB3BE37E11B3(Global_1896762.f_368.f_1, iVar0);
		iVar0 = (iVar0 + -1);
	}
}

bool func_1583()
{
	return Global_1960735.f_72 != 0;
}

char* func_1584()
{
	return func_2084(Global_1960735.f_56);
}

int func_1585()
{
	return Global_1896762.f_13.f_5;
}

void func_1586()
{
	func_1587(11);
}

void func_1587(int iParam0)
{
	Global_1896762.f_13.f_5 = iParam0;
	if (func_1040(&(Global_1896762.f_13)))
	{
		func_1039(&(Global_1896762.f_13));
	}
}

bool func_1588(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	int iVar0;
	struct<23> Var1;
	struct<2> Var64;

	if (!func_2087())
	{
		return false;
	}
	if (!func_1438(sParam2))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	Var1.f_22 = 10;
	StringCopy(&(Var1.f_1), sParam2, 64);
	Var64 = { func_694() };
	Var1.f_21 = 1;
	Var1.f_19 = { Var64 };
	Var1.f_22[0 /*4*/] = { Var64 };
	Var1.f_22[0 /*4*/].f_3 = func_2088(1);
	Var1.f_22[0 /*4*/].f_2 = -3.53729E+21f;
	Var1.f_9.f_1 = uParam1;
	Var1.f_9.f_2 = uParam0;
	Var1.f_9 = -1;
	StringCopy(&(Var1.f_9.f_7), "", 24);
	func_426(Var1.f_9.f_1, 0, 1);
	if (!POSSE::_0xC086FF658B2E51DA(&Var1))
	{
		return false;
	}
	Global_1203937.f_482 = MISC::GET_GAME_TIMER();
	Global_1203937.f_14.f_4 = iVar0;
	Global_1203937.f_14.f_5 = uParam0;
	Global_1203937.f_14.f_3 = iParam3;
	func_1433(1);
	func_202(32);
	if (GANG::NETWORK_IS_GANG_ACTIVE(iVar0))
	{
		GANG::_NETWORK_LEAVE_GANG(true);
	}
	func_692(0);
	return true;
}

void func_1589(var uParam0, var uParam1)
{
	int iVar0;

	if (Global_1203937.f_2 == 1 || Global_1203937.f_2 == 2)
	{
		return;
	}
	if (GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())))
	{
		GANG::_NETWORK_LEAVE_GANG(true);
	}
	POSSE::_0xC08AFF658B2E51DA(&iVar0);
	if (iVar0 != 0)
	{
		if (!POSSE::_0xC08BFF658B2E51DA(0))
		{
		}
	}
	Global_1203937.f_14.f_5 = uParam0;
	Global_1203937.f_14.f_6 = uParam1;
	Global_1203937.f_14.f_3 = 4;
	func_692(0);
	func_1441(1);
}

int func_1590(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_77(PLAYER::PLAYER_ID());
	}
	return func_2089(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

void func_1591(char* sParam0, float fParam1)
{
	Global_1896762.f_13.f_28 = { func_688(sParam0) };
	Global_1896762.f_13.f_36 = fParam1;
}

bool func_1592()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_3;
}

char* func_1593(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_1594(var uParam0)
{
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_29)))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1295619.f_1)))
	{
		return false;
	}
	return NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(uParam0->f_29), &(Global_1295619.f_1));
}

bool func_1595(int iParam0)
{
	return func_613(Global_1297394.f_157, iParam0);
}

bool func_1596(int iParam0, bool bParam1, bool bParam2)
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
		if (func_909())
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
	if (iParam0 == 0 && func_821(func_911(0)))
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
	switch (func_912(func_911(0)))
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

int func_1597(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 2.307776E-24f;
			return 1;
		case 1:
			*uParam1 = 3.825866E-08f;
			return 1;
		case 2:
			*uParam1 = 6.797558E+11f;
			return 1;
		case 3:
			*uParam1 = -1.022733E+32f;
			return 1;
		case 4:
			*uParam1 = -3.38756E-16f;
			return 1;
		case 5:
			*uParam1 = -2.836195E-09f;
			return 1;
		case 6:
			*uParam1 = 1.774357E+28f;
			return 1;
		case 7:
			*uParam1 = -1.165218E+20f;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1598(var uParam0)
{
	struct<2> Var0;
	struct<14> Var2;
	int iVar46;

	if (uParam0->f_4)
	{
		if (uParam0->f_3)
		{
			if (!func_34(uParam0->f_29))
			{
				return false;
			}
			Var0 = { func_694() };
			if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &(uParam0->f_29)))
			{
				return true;
			}
			if (!func_727(uParam0))
			{
				return false;
			}
			if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_29)))
			{
				if (func_729(uParam0->f_2))
				{
					return true;
				}
			}
			else
			{
				Var2.f_13 = 10;
				if (func_1402(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam0->f_29)), &Var2))
				{
					if (Var2 == uParam0->f_2 && Var2.f_9 == 1)
					{
						return true;
					}
				}
			}
			return false;
		}
		else
		{
			iVar46 = POSSE::POSSE_GET_POSSE_MEMBERSHIP_COUNT();
			if (iVar46 >= 5)
			{
				return false;
			}
			if (!func_727(uParam0))
			{
				return false;
			}
			return true;
		}
	}
	else
	{
		if (!func_727(uParam0))
		{
			return false;
		}
		return !uParam0->f_1 == Global_1295619.f_10;
	}
	return false;
}

bool func_1599(int iParam0, int iParam1)
{
	struct<2> Var0;
	int iVar2;
	struct<23> Var3;
	struct<14> Var66;
	int iVar110;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0 = { func_610(iParam0) };
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		Var3.f_22 = 10;
		if (POSSE::_0xC087FF658B2E51DA(iParam1, &Var3) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var3.f_19), &Var0))
		{
			iVar2 = 1;
		}
	}
	else
	{
		Var66.f_13 = 10;
		iVar110 = 0;
		while (iVar110 <= (POSSE::_0xC084FF658B2E61DA(&Var0) - 1))
		{
			if ((POSSE::_0xC084FF658B2E71DA(&Var0, iVar110, &Var66) && Var66 == iParam1) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Var66.f_10), &Var0))
			{
				iVar2 = 1;
			}
			else
			{
				iVar110++;
			}
		}
	}
	return iVar2;
}

bool func_1600(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_399.f_5[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1601(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return Global_1203937.f_23.f_17[iVar0 /*13*/].f_2;
		}
		iVar0++;
	}
	return false;
}

bool func_1602(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (Global_1203937.f_23.f_17[iVar0 /*13*/] == iParam0 && iParam0 != 0)
		{
			return Global_1203937.f_23.f_17[iVar0 /*13*/].f_3 < Global_1203937.f_23.f_17[iVar0 /*13*/].f_4;
		}
		iVar0++;
	}
	return false;
}

bool func_1603(int iParam0)
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;

	if (!GANG::NETWORK_IS_GANG_ACTIVE(GANG::NETWORK_GET_GANG_ID(iParam0)))
	{
		return false;
	}
	iVar16 = GANG::_NETWORK_GET_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(iParam0), &Var0);
	iVar15 = 0;
	while (iVar15 <= (iVar16 - 1))
	{
		iVar17 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar15 /*2*/]));
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar17) || PLAYER::IS_PLAYER_DEAD(iVar17))
		{
		}
		else if (func_747(1048576, iVar17))
		{
			return true;
		}
		iVar15++;
	}
	return false;
}

bool func_1604(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return false;
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar0), func_58(1));
}

void func_1605(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar0), func_58(1), bParam2);
}

bool func_1606(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return false;
	}
	return DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar0), func_58(0));
}

void func_1607(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= DATABINDING::_DATABINDING_GET_ARRAY_COUNT(*uParam0))
	{
		return;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(*uParam0, iVar0), func_58(0), bParam2);
}

bool func_1608(char* sParam0, int iParam1)
{
	struct<23> Var0;
	int iVar63;

	if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1) && MISC::IS_ORBIS_VERSION())
	{
		return false;
	}
	Var0.f_22 = 10;
	if (!POSSE::_0xC087FF658B2E51DA(iParam1, &Var0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return false;
	}
	if (!func_1438(sParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_CHECK_USER_CONTENT_PRIVILEGES(-1))
	{
		return false;
	}
	if (func_1167())
	{
		func_1168();
		return true;
	}
	if (!func_1169())
	{
		return false;
	}
	StringCopy(&(Var0.f_1), sParam0, 64);
	iVar63 = 0;
	if (!POSSE::_0xC09CFF658B2E51DA(iParam1, &Var0, &iVar63) && iVar63 == 1)
	{
		func_1170();
		return false;
	}
	func_1168();
	func_692(6);
	return true;
}

int func_1609()
{
	struct<55> Var0;

	Var0 = { func_196(1) };
	if (func_201(&Var0))
	{
		if (!func_2090(Var0.f_2))
		{
			return 0;
		}
	}
	else if (Var0.f_1 == Global_1295619.f_10)
	{
		func_176();
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_1610()
{
	if (Global_1940239.f_1556.f_149.f_184.f_93 > -1)
	{
		return true;
	}
	return false;
}

bool func_1611(var uParam0)
{
	return uParam0->f_53;
}

int func_1612(var uParam0)
{
	return uParam0->f_54;
}

int func_1613(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 2.645815E-16f;
		case 1:
			return 6.12833E-37f;
		case 2:
			return 1.29433E-08f;
		case 3:
			return -4.990878E-22f;
		case 4:
			return -1.478534E+26f;
		case 5:
			return 4.106538E+16f;
		case 6:
			return 5.357657E-14f;
		case 7:
			return -8.495162E+11f;
		case 8:
			return 2.537514E-07f;
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

int func_1614(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 630752600:
			*uParam1 = 2.645815E-16f;
			return 1;
		case 55609673:
			*uParam1 = 6.12833E-37f;
			return 1;
		case 845045048:
			*uParam1 = 1.29433E-08f;
			return 1;
		case -353068451:
			*uParam1 = -1.478534E+26f;
			return 1;
		case 1527899327:
			*uParam1 = -7.4531E+36f;
			return 1;
		case 695290261:
			*uParam1 = 3.03573E+31f;
			return 1;
		case -750400740:
			*uParam1 = 2.117099E+28f;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1615(int iParam0)
{
	return func_2091(iParam0) != 0;
}

int func_1616(struct<2> Param0)
{
	if (func_912(Param0) != 5)
	{
		return -1;
	}
	return func_1325(Param0);
}

void func_1617(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_2092(iParam0, iParam1);
			break;
		default:
			break;
	}
}

int func_1618(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 1;
	}
	if (!func_746())
	{
		return 1;
	}
	if (func_2093(iVar0))
	{
		uParam0->f_59 = 174087.3f;
		uParam0->f_60 = 9.102091E-24f;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	else if (func_2094(iVar0) && iVar0 != PLAYER::PLAYER_ID())
	{
		uParam0->f_59 = 174087.3f;
		uParam0->f_60 = 5.024064E+32f;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	func_614(&(uParam1->f_20), 1536);
	return 1;
}

int func_1619(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 1536);
	iVar0 = func_916(&(uParam1->f_1));
	switch (iVar0)
	{
		case 9:
		case 10:
		case 11:
			if (func_2095(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1620(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 1536);
	iVar0 = func_918(&(uParam1->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_2096(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1621(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	switch (uParam1->f_22)
	{
		case -1178838578:
			if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
			{
				if (iVar0 == Global_1295619.f_149[Global_1295619])
				{
					uParam0->f_73 = 0;
					uParam0->f_69 = 0;
				}
				else
				{
					if (func_211())
					{
						uParam0->f_71 = -1.896883E+31f;
					}
					else
					{
						uParam0->f_71 = 3.963147E+15f;
					}
					uParam0->f_73 = 1;
					uParam0->f_72 = 1;
					if (VOICE::_0x0DED260A1958A82E(iVar0))
					{
						uParam0->f_67 = 0.0008744103f;
					}
					else
					{
						uParam0->f_67 = 3.629384E-09f;
					}
					uParam0->f_69 = 1;
					if (!func_2097(8388608))
					{
						uParam0->f_68 = 1;
					}
				}
			}
			break;
	}
	func_614(&(uParam1->f_20), 32768);
	func_614(&(uParam1->f_20), 16384);
	return 1;
}

int func_1622(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_22)
	{
		case -1178838578:
		case -462010351:
			if (func_2098(&(uParam0->f_1), sParam1))
			{
				return 1;
			}
			iVar0 = func_918(&(uParam0->f_1));
			switch (iVar0)
			{
				case 1:
				case 2:
				case 3:
					if (func_2099(iVar0, sParam1))
					{
						return 1;
					}
					break;
			}
			iVar1 = func_916(&(uParam0->f_1));
			switch (iVar1)
			{
				case 9:
				case 10:
				case 11:
					if (func_917(iVar1, sParam1))
					{
						return 1;
					}
					break;
			}
			StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_FOOTER"), 128);
			return 1;
		case -1419617212:
			StringCopy(sParam1, func_519(), 128);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1623(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 1536);
	iVar0 = func_916(&(uParam1->f_1));
	if (func_2095(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

int func_1624(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 1536);
	iVar0 = func_918(&(uParam1->f_1));
	if (func_2096(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

void func_1625(var uParam0, int iParam1)
{
	if (Global_1940239.f_1556.f_9450 || NETWORK::_NETWORK_HAS_CURRENT_GET_GAMER_STATUS_STARTED())
	{
		NETWORK::NETWORK_CLEAR_GET_GAMER_STATUS();
	}
	Global_1940239.f_1556.f_9450 = 0;
	Global_1940239.f_1556.f_9451 = 1;
	Global_1940239.f_1556.f_9452 = iParam1;
	if (NETWORK::_NETWORK_GET_GAMER_SESSION_FROM_HANDLE(uParam0, iParam1))
	{
	}
}

int func_1626(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_2100(iParam0);
	iVar1 = func_2101(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_1627(iVar1))
		{
			func_2102(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_1627(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

bool func_1628(int iParam0)
{
	int iVar0;

	iVar0 = func_1629(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_IN_SESSION(iVar0))
	{
		return false;
	}
	return true;
}

int func_1629(int iParam0)
{
	return Global_1107816.f_33[iParam0 /*16*/];
}

bool func_1630(int iParam0, int iParam1)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	return (Global_1138658[iParam0 /*56*/].f_54 && iParam1) != 0;
}

bool func_1631(int iParam0)
{
	struct<2> Var0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	Var0 = { func_610(iParam0) };
	if (!func_34(Var0))
	{
		return false;
	}
	if ((POSSE::_0xC084FF658B2E61DA(&Var0) >= 5 && Global_1203937.f_472 != -1) && !func_2103(&Var0, Global_1203937.f_483[Global_1203937.f_472 /*63*/]))
	{
		return false;
	}
	return true;
}

int func_1632(var uParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam3 < 0 || iParam3 > 55)
	{
		return 0;
	}
	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = uParam1->f_2[uParam1->f_1];
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_14[iParam3 /*32*/].f_19, MISC::VAR_STRING(0, iParam2));
	if (func_1329(iParam2, &(uParam1->f_2)))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_22, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_8, 9.438405E-38f);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_30, true);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_22, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_8, -1.99721E-22f);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_30, false);
	}
	if (iVar0 == iParam2)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_25, true);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_29, -1.460949E+32f);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_25, false);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_29, 3.681923E-10f);
	}
	if (uParam0->f_5)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_26, -1.245777E+23f);
		if (func_1330(uParam1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_27, true);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_27, false);
		}
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_14[iParam3 /*32*/].f_26, -4.782433E-07f);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_14[iParam3 /*32*/].f_27, true);
	}
	return 1;
}

void func_1633()
{
	int iVar0;
	int iVar1;

	iVar0 = MISC::GET_GAME_TIMER();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_1940239.f_1556.f_1082.f_5[iVar1 /*3*/].f_2 != 0)
		{
			if ((iVar0 - Global_1940239.f_1556.f_1082.f_5[iVar1 /*3*/].f_2) > 60000)
			{
				func_2104(iVar1);
			}
			else if (!func_34(Global_1940239.f_1556.f_1082.f_5[iVar1 /*3*/]))
			{
				func_2104(iVar1);
			}
		}
		iVar1++;
	}
}

bool func_1634(bool bParam0)
{
	int iVar0;

	if (!func_34(*bParam0))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/].f_2 != 0 && func_34(Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/])) && NETWORK::NETWORK_ARE_HANDLES_THE_SAME(bParam0, &(Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1635(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/].f_2 == 0)
		{
			Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/].f_2 = MISC::GET_GAME_TIMER();
			Global_1940239.f_1556.f_1082.f_5[iVar0 /*3*/] = { *bParam0 };
			return;
		}
		iVar0++;
	}
}

bool func_1636(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = 1;
	if (GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		iVar0 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(iParam0);
	}
	bVar1 = iVar0 <= iParam1;
	if (((!bVar1 && bParam2) && GANG::NETWORK_GET_GANG_LEADER(iParam0) == PLAYER::PLAYER_ID()) && !func_2105(Global_1203937.f_137))
	{
		Global_1203937.f_137 = func_670("NG_SIZE_LARGE_S", 10000, 0, 0, 0, 1);
	}
	return bVar1;
}

bool func_1637(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar2 = 0;
	iVar3 = 1;
	if (GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		iVar3 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10);
	}
	iVar0 = 0;
	while (iVar0 < (Global_265213.f_107995.f_14097 - 1))
	{
		if (Global_265213.f_107995.f_13445[iVar0] == 8.871721E+36f)
		{
			iVar1 = func_743(Global_265213.f_107995.f_13575[iVar0]);
			if (iVar1 == -1)
			{
			}
			else if (bParam0)
			{
				if (iVar3 <= func_233(iVar1))
				{
					iVar2 = 1;
				}
			}
			else
			{
				iVar2 = 1;
			}
		}
		iVar0++;
	}
	return iVar2;
}

bool func_1638(int iParam0)
{
	return UNLOCK::UNLOCK_IS_VISIBLE(func_1448(iParam0));
}

void func_1639(int iParam0)
{
	char* sVar0;

	if (Global_1940239.f_1556.f_1353.f_460 == iParam0)
	{
		return;
	}
	Global_1940239.f_1556.f_1353.f_460 = iParam0;
	sVar0 = func_2106(Global_1940239.f_1556.f_1353.f_460);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1353.f_456, sVar0);
}

int func_1640(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_1478(iParam0, iParam1, 1))
	{
	}
	if (!func_2050(&Global_1903834))
	{
		return 0;
	}
	iVar0 = func_2107(Global_1903834.f_11, Global_1903834.f_23);
	return iVar0;
}

int func_1641(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_2108());
	return iVar0;
}

int func_1642(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_2109(iParam0, iParam1, &iVar0))
	{
		return 0;
	}
	return func_2110(iVar0, iParam1);
}

int func_1643(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_2111());
	return iVar0;
}

int func_1644(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_2108());
	return iVar0;
}

int func_1645(int iParam0, int iParam1)
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
	if (func_2112(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

int func_1646(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_2111());
	return iVar0;
}

int func_1647(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_11.f_162[iVar0 /*7*/]), &uParam0))
		{
			return Global_1290256.f_11.f_162[iVar0 /*7*/].f_6;
		}
		iVar0++;
	}
	return -1;
}

bool func_1648(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar1 = iVar4;
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (iVar1 == iVar0)
		{
		}
		else
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (func_2113(iParam0, iVar2, &uVar3))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

void func_1649(int iParam0)
{
	char* sVar0;

	if (Global_1940239.f_1556.f_1935.f_382 == iParam0)
	{
		return;
	}
	Global_1940239.f_1556.f_1935.f_382 = iParam0;
	sVar0 = func_2114(Global_1940239.f_1556.f_1935.f_382);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1940239.f_1556.f_1935.f_378, sVar0);
}

int func_1650(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_782.f_107[iVar0 /*7*/]), &uParam0))
		{
			return Global_1290256.f_782.f_107[iVar0 /*7*/].f_6;
		}
		iVar0++;
	}
	return -1;
}

int func_1651(int iParam0)
{
	int iVar0;

	if (!func_450(iParam0))
	{
		return 0;
	}
	if (!func_451(&(Global_1141317[iParam0 /*27*/].f_4)))
	{
		return 0;
	}
	iVar0 = (func_453() - func_452(&(Global_1141317[iParam0 /*27*/].f_4)));
	return BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar0) / 1148846080));
}

int func_1652(vector3 vParam0, var uParam3)
{
	*uParam3 = 13;
	uParam3->f_1[0] = 3.068815E+10f;
	uParam3->f_1[1] = 3.438718E+18f;
	uParam3->f_1[2] = -1.358141E+31f;
	uParam3->f_1[3] = -2733.137f;
	uParam3->f_1[4] = 6.497398E-07f;
	uParam3->f_1[5] = -1.1942E-17f;
	uParam3->f_1[6] = NaNf;
	uParam3->f_1[7] = 9.93596E+16f;
	uParam3->f_1[8] = -2.334456E-33f;
	uParam3->f_1[9] = -1.777127E-29f;
	uParam3->f_1[10] = -4.821723E-29f;
	uParam3->f_1[11] = 1.058431E+15f;
	uParam3->f_1[12] = -7.163212E+12f;
	if (!func_1657(vParam0, uParam3))
	{
		return 0;
	}
	return 1;
}

void func_1653(int iParam0)
{
	int iVar0;
	float fVar1;

	iVar0 = func_2115(iParam0);
	fVar1 = -4.461146E-19f;
	if (DATABINDING::_DATABINDING_READ_HASH(Global_1940239.f_1556.f_2385.f_46) != iVar0)
	{
		if (!TXD::DOES_STREAMED_TXD_EXIST(fVar1))
		{
			return;
		}
		TXD::REQUEST_STREAMED_TXD(fVar1, false);
		if (!TXD::HAS_STREAMED_TXD_LOADED(fVar1))
		{
			return;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_47, fVar1);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1940239.f_1556.f_2385.f_46, iVar0);
	}
}

int func_1654()
{
	return Global_1896646.f_41;
}

int func_1655(int iParam0, vector3 vParam1, var uParam4)
{
	if (func_757(vParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam4 = 3;
			uParam4->f_1[0] = 3.068815E+10f;
			uParam4->f_1[1] = -4.821723E-29f;
			uParam4->f_1[2] = 1.058431E+15f;
			break;
		case 1:
			*uParam4 = 5;
			uParam4->f_1[0] = 3.438718E+18f;
			uParam4->f_1[1] = -1.1942E-17f;
			uParam4->f_1[2] = NaNf;
			uParam4->f_1[3] = 9.93596E+16f;
			uParam4->f_1[4] = -7.163212E+12f;
			break;
		case 2:
			*uParam4 = 2;
			uParam4->f_1[0] = 3.068815E+10f;
			uParam4->f_1[1] = -4.821723E-29f;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -2733.137f;
			uParam4->f_1[1] = NaNf;
			uParam4->f_1[2] = 9.93596E+16f;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = 3.438718E+18f;
			uParam4->f_1[1] = -1.1942E-17f;
			uParam4->f_1[2] = -2.334456E-33f;
			uParam4->f_1[3] = -7.163212E+12f;
			break;
		case 6:
			*uParam4 = 4;
			uParam4->f_1[0] = -2733.137f;
			uParam4->f_1[1] = NaNf;
			uParam4->f_1[2] = 9.93596E+16f;
			uParam4->f_1[3] = -4.821723E-29f;
			break;
		case 7:
			*uParam4 = 4;
			uParam4->f_1[0] = 3.438718E+18f;
			uParam4->f_1[1] = -2733.137f;
			uParam4->f_1[2] = NaNf;
			uParam4->f_1[3] = 9.93596E+16f;
			break;
		case 9:
			*uParam4 = 6;
			uParam4->f_1[0] = 3.438718E+18f;
			uParam4->f_1[1] = -2733.137f;
			uParam4->f_1[2] = NaNf;
			uParam4->f_1[3] = 9.93596E+16f;
			uParam4->f_1[4] = -4.821723E-29f;
			uParam4->f_1[5] = 1.058431E+15f;
			break;
		case 10:
			*uParam4 = 6;
			uParam4->f_1[0] = 3.068815E+10f;
			uParam4->f_1[1] = -2733.137f;
			uParam4->f_1[2] = NaNf;
			uParam4->f_1[3] = 9.93596E+16f;
			uParam4->f_1[4] = -4.821723E-29f;
			uParam4->f_1[5] = 1.058431E+15f;
			break;
		case 11:
			*uParam4 = 4;
			uParam4->f_1[0] = 3.068815E+10f;
			uParam4->f_1[1] = 9.93596E+16f;
			uParam4->f_1[2] = -4.821723E-29f;
			uParam4->f_1[3] = 1.058431E+15f;
			break;
		case 12:
			*uParam4 = 4;
			uParam4->f_1[0] = -1.1942E-17f;
			uParam4->f_1[1] = -2.334456E-33f;
			uParam4->f_1[2] = 1.058431E+15f;
			uParam4->f_1[3] = -7.163212E+12f;
			break;
		case 13:
			*uParam4 = 3;
			uParam4->f_1[0] = -1.358141E+31f;
			uParam4->f_1[1] = 6.497398E-07f;
			uParam4->f_1[2] = -1.777127E-29f;
			break;
		case 14:
			*uParam4 = 3;
			uParam4->f_1[0] = -1.358141E+31f;
			uParam4->f_1[1] = 6.497398E-07f;
			uParam4->f_1[2] = -1.777127E-29f;
			break;
		case 15:
			*uParam4 = 4;
			uParam4->f_1[0] = -1.358141E+31f;
			uParam4->f_1[1] = 6.497398E-07f;
			uParam4->f_1[2] = -2.334456E-33f;
			uParam4->f_1[3] = -1.777127E-29f;
			break;
		case 16:
			*uParam4 = 4;
			uParam4->f_1[0] = -1.358141E+31f;
			uParam4->f_1[1] = -1.1942E-17f;
			uParam4->f_1[2] = -2.334456E-33f;
			uParam4->f_1[3] = -7.163212E+12f;
			break;
		default:
			return 0;
	}
	if (!func_1657(vParam1, uParam4))
	{
		return 0;
	}
	return 1;
}

int func_1656(var uParam0)
{
	int iVar0;

	switch (uParam0->f_1)
	{
		case joaat("GRIZZLIES_CAMP"):
			iVar0 = 0;
			break;
		case joaat("BAYOU_NAWAS_CAMP"):
		case joaat("SCARLETT_MEADOWS_CAMP"):
			iVar0 = 1;
			break;
		case joaat("GREAT_PLAINS_CAMP"):
		case joaat("TALL_TREES_CAMP"):
		case joaat("BIG_VALLEY_CAMP"):
			iVar0 = 2;
			break;
		case joaat("ROANOKE_RIDGE_CAMP"):
		case joaat("CUMBERLAND_FOREST_CAMP"):
		case joaat("HEARTLAND_CAMP"):
			iVar0 = 3;
			break;
		case joaat("HENNIGANS_STEAD_CAMP"):
		case joaat("RIO_BRAVO_CAMP"):
		case joaat("CHOLLA_SPRINGS_CAMP"):
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			iVar0 = 4;
			break;
		default:
			iVar0 = -1;
			break;
	}
	return iVar0;
}

bool func_1657(vector3 vParam0, var uParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_2116(vParam0, uParam3);
	iVar1 = 0;
	while (iVar1 <= (*uParam3 - 1))
	{
		if (uParam3->f_1[iVar1] == iVar0)
		{
			iVar2 = iVar1;
			while (iVar2 > 0)
			{
				uParam3->f_1[iVar2] = uParam3->f_1[(iVar2 - 1)];
				iVar2 = (iVar2 - 1);
			}
			uParam3->f_1[0] = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1658(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOU_NAWAS_CAMP"):
			return -6.946515E+30f;
		case joaat("BIG_VALLEY_CAMP"):
			return -6.644773E-28f;
		case joaat("CHOLLA_SPRINGS_CAMP"):
			return -19291.86f;
		case joaat("CUMBERLAND_FOREST_CAMP"):
			return -16664.66f;
		case joaat("GAPTOOTH_RIDGE_CAMP"):
			return -1.087524E-17f;
		case joaat("GREAT_PLAINS_CAMP"):
			return -2.746251E+17f;
		case joaat("GRIZZLIES_CAMP"):
			return 2.026076E+36f;
		case joaat("HEARTLAND_CAMP"):
			return 2.109222E+11f;
		case joaat("HENNIGANS_STEAD_CAMP"):
			return 5.072605E-34f;
		case joaat("RIO_BRAVO_CAMP"):
			return -67.62843f;
		case joaat("ROANOKE_RIDGE_CAMP"):
			return -1.527862E-27f;
		case joaat("SCARLETT_MEADOWS_CAMP"):
			return -5.407292E-08f;
		case joaat("TALL_TREES_CAMP"):
			return 8.574027E-21f;
		default:
			break;
	}
	return 2.109222E+11f;
}

void func_1659(var uParam0, struct<26> Param1)
{
	func_2117(uParam0, Param1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_28, Param1.f_24);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(uParam0->f_29, Param1.f_25);
}

int func_1660(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	int iVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (Global_1220514.f_5[iVar0 /*5*/] != iParam0)
		{
		}
		else if (Global_1220514.f_5[iVar0 /*5*/].f_2)
		{
		}
		else
		{
			iVar1 = Global_1220514.f_5[iVar0 /*5*/].f_4;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 <= 0)
	{
		return -1;
	}
	return MISC::ABSI((NETWORK::GET_CLOUD_TIME_AS_INT() - iVar1));
}

void func_1661(struct<5> Param0)
{
	struct<6> Var0;

	Var0.f_5 = -1;
	Var0.f_4 = 9;
	Var0.f_5 = { Param0 };
	func_2118(&Var0, func_456(0, 8));
}

bool func_1662(int iParam0)
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(0.0001293149f))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-462.0154f);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(4.662344E+19f) && UNLOCK::UNLOCK_IS_UNLOCKED(1.113684E-11f));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_1663(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return true;
	}
	return false;
}

int func_1664(int iParam0)
{
	var uVar0;
	int iVar3;

	if (!func_420(Global_1295619.f_10))
	{
		return 0;
	}
	if (func_2119())
	{
		return 0;
	}
	if (!func_2120())
	{
		func_2121();
		return 0;
	}
	if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (func_2122())
	{
		func_2121();
		return 0;
	}
	if (!PATHFIND::GET_SAFE_COORD_FOR_PED(Global_34, false, &uVar0, 16))
	{
		func_2121();
		return 0;
	}
	iVar3 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	switch (iParam0)
	{
		case 4:
			if (iVar3 > 2 && func_2123(1, 3))
			{
				return 1;
			}
			break;
		case 5:
			if (iVar3 > 1 && func_2123(1, 2))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1665()
{
	if (!func_420(Global_1295619.f_10))
	{
		return 0;
	}
	if (func_2119())
	{
		return 0;
	}
	if (func_1215(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_2124())
	{
		return 0;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) > 1)
	{
		return 1;
	}
	if (!func_2123(1, 2))
	{
		return 0;
	}
	return 0;
}

int func_1666()
{
	if (!func_2125(func_1344(7)))
	{
		return 0;
	}
	if (GANG::_0x2F7EB8B6F6AFE79C(1) < 2)
	{
		return 0;
	}
	return 1;
}

int func_1667(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam0 == 8)
	{
		func_2126(&(Global_1108965.f_775), 1);
	}
	if (!func_2125(func_1344(iParam0)))
	{
		return 0;
	}
	if (!func_420(Global_1295619.f_10))
	{
		return 0;
	}
	if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())) < 2)
	{
		return 0;
	}
	if (!func_2123(1, 2))
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
			if ((!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar2)) || !GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, iVar2))
			{
			}
			else
			{
				if (func_439(Global_1206151[iVar0 /*10*/].f_9, 1))
				{
					iVar1++;
				}
				if (iVar1 > 1)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar1 < 2)
				{
					func_2127(&(Global_1108965.f_775), 1);
					return 0;
				}
				func_2126(&(Global_1108965.f_775), 1);
				return 1;
			}
		}
	}
}

bool func_1668(int iParam0, int iParam1, int iParam2)
{
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/] = 1;
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/].f_1 = iParam1;
	Global_1940239.f_1556.f_149.f_280.f_245.f_1[iParam0 /*3*/].f_2 = iParam2;
	return true;
}

int func_1669(var uParam0, var uParam1, bool bParam2)
{
	int iVar0[2];
	int iVar3;

	func_614(&(uParam1->f_20), 8192);
	if (bParam2 && !func_1570(uParam1))
	{
		return 0;
	}
	if (!uParam1->f_21)
	{
	}
	switch (uParam1->f_22)
	{
		case -1178838578:
			iVar3 = 0;
			while (iVar3 < 2)
			{
				iVar0[iVar3] = func_964(iVar3);
				iVar3++;
			}
			uParam0->f_8 = (iVar0[0] >= 1 && iVar0[1] >= 1);
			break;
	}
	return 1;
}

int func_1670(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	vector3 vVar1;

	if (bParam2 && !func_1570(uParam1))
	{
		return 0;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(uParam1->f_1));
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return 0;
	}
	if (func_963(iVar0, &vVar1))
	{
		uParam0->f_2 = func_2128(vVar1.z);
		func_614(&(uParam1->f_20), 65536);
	}
	return 1;
}

void func_1671(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_114, bParam0);
}

void func_1672(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_1.f_1, bParam0);
}

void func_1673(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_6258.f_7, bParam0);
}

void func_1674(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8122.f_2, bParam0);
}

void func_1675(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_8450.f_2, bParam0);
}

int func_1676()
{
	if ((((func_442(func_1218(Global_1295619.f_149[Global_1295619], 0, 1)) && !func_437()) && func_247()) && Global_1572887.f_7) && !func_443())
	{
		return 1;
	}
	return 0;
}

bool func_1677()
{
	var uVar0;

	return func_1367(5.691162E-38f, &uVar0);
}

bool func_1678()
{
	return func_1694(5.691162E-38f, 1, -2.401104E+18f, 1);
}

bool func_1679()
{
	return func_1694(5.691162E-38f, 1, 8.497754E-37f, 1);
}

void func_1680(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	switch (iParam0)
	{
		case 997808187:
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1220.f_123, -1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_124, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_127, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_128, false);
			break;
		case -570078785:
			iVar0 = func_1375(func_1157(5.691162E-38f, -2.401104E+18f, 1, 0, 1, 0));
			iVar1 = func_1375(func_1157(5.691162E-38f, -2.401104E+18f, 0, 0, 1, 0));
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1220.f_123, iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_124, true);
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1220.f_126, iVar1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_127, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_128, iVar1 != iVar0);
			break;
		default:
			iVar0 = func_1157(5.691162E-38f, 8.497754E-37f, 1, 0, 1, 0);
			iVar1 = func_1157(5.691162E-38f, 8.497754E-37f, 0, 0, 1, 0);
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1220.f_123, iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1940239.f_1556.f_1220.f_126, iVar1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_124, false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_127, iVar1 != iVar0);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_128, false);
			break;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1940239.f_1556.f_1220.f_125, bParam1);
}

void func_1681(int iParam0)
{
	if (func_458() != -4.266413E-19f)
	{
		return;
	}
	func_70(func_2129(iParam0), 27.64779f);
}

int func_1682(bool bParam0)
{
	struct<2> Var0;

	if (!func_623(bParam0, 0))
	{
		return 0;
	}
	Var0.f_1 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PRICE_MODIFIERS(bParam0, &Var0) || Var0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1683()
{
	if (NETWORK::NETWORK_IS_IN_PLATFORM_PARTY())
	{
		return NETWORK::NETWORK_IS_IN_PLATFORM_PARTY_CHAT();
	}
	return false;
}

bool func_1684(int iParam0, int iParam1)
{
	var uVar0;

	return func_2130(iParam0, iParam1, &uVar0);
}

void func_1685()
{
	struct<4> Var0;
	int iVar12;
	int iVar13;

	iVar12 = func_615();
	iVar13 = func_1391(iVar12);
	if (func_1683())
	{
		func_70(MISC::VAR_STRING(2, "NET_MG_HELP_NO_PARTY_CHAT"), 4.465091E-08f);
	}
	else if (func_2130(iVar12, 1.708672E-23f, &Var0))
	{
		func_70(func_2131(iVar13, 6.081775E+21f, Var0.f_3), 4.465091E-08f);
	}
	else if (func_148(131072))
	{
		func_70(func_2132(131072), 27.64779f);
	}
	else if (func_148(65536))
	{
		func_70(func_2132(65536), 27.64779f);
	}
	else
	{
		func_70(MISC::VAR_STRING(2, "NET_MG_HELP_PUBLIC_HIDE_ID"), 27.64779f);
	}
}

bool func_1686()
{
	return func_148(2048);
}

void func_1687()
{
	DATABINDING::_0x3BF0767CF33FCC88(Global_1940239.f_1556.f_8632.f_1);
}

void func_1688(int iParam0, int iParam1)
{
	struct<30> Var0;
	int iVar30;
	int iVar31;
	char cVar32[64];
	char cVar40[64];
	char cVar48[64];

	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 27.64779f;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar40, "Moonshine_Location_Root_", 64);
	StringCopy(&cVar48, "Override_Moonshine_Location_Root_", 64);
	StringIntConCat(&cVar40, iParam1, 64);
	StringIntConCat(&cVar48, iParam1, 64);
	iVar31 = func_2133(iParam0);
	StringCopy(&cVar32, MISC::VAR_STRING(2, func_2134(iParam0)), 64);
	Var0.f_16 = { cVar32 };
	Var0.f_5 = 2.471237E-29f;
	Var0.f_4 = 1.608566E+13f;
	Var0.f_24 = 3.347692E+13f;
	Var0.f_25 = -1.367564E-05f;
	Var0.f_26 = 0;
	Var0.f_7 = 5.425547E+13f;
	Var0.f_9 = 1;
	func_1339(&(Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/].f_1), Global_1940239.f_1556.f_8632, cVar40, Var0);
	func_1339(&(Global_1940239.f_1556.f_8632.f_138[iParam1 /*27*/].f_1), Global_1940239.f_1556.f_8632, cVar48, Var0);
	Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/].f_1, "moonshine_selection_district", iVar31);
	Global_1940239.f_1556.f_8632.f_138[iParam1 /*27*/] = DATABINDING::_DATABINDING_ADD_DATA_HASH(Global_1940239.f_1556.f_8632.f_138[iParam1 /*27*/].f_1, "moonshine_selection_district", iVar31);
	Global_1940239.f_1556.f_8632.f_274[iParam1] = DATABINDING::_DATABINDING_ADD_DATA_INT(Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/].f_1, "moonshine_selection_property", iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/].f_1, "dynamic_list_item_prompt_enabled", true);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_8632.f_1, iVar30, "pm_dynamic_text_and_end_image_hold", Global_1940239.f_1556.f_8632.f_2[iParam1 /*27*/].f_1);
}

int func_1689()
{
	return Global_1297394.f_66;
}

void func_1690(int iParam0)
{
	float fVar0[5];
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;

	iVar6 = 0;
	iVar7 = 0;
	iVar8 = *iParam0;
	iVar9 = -1;
	fVar10 = 0f;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		(*iParam0)[iVar6] = iVar6;
		fVar0[iVar6] = func_2135((*iParam0)[iVar6]);
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		iVar7 = iVar6 + 1;
		while (iVar7 <= (5 - 1))
		{
			if (fVar0[iVar6] > fVar0[iVar7])
			{
				iVar9 = (*iParam0)[iVar6];
				(*iParam0)[iVar6] = (*iParam0)[iVar7];
				(*iParam0)[iVar7] = iVar9;
				fVar10 = fVar0[iVar6];
				fVar0[iVar6] = fVar0[iVar7];
				fVar0[iVar7] = fVar10;
			}
			iVar7++;
		}
		iVar6++;
	}
}

int func_1691()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = 2.884954E+11f;
	if (func_790(&(Global_1297394.f_62)))
	{
		bVar0 = 1.007909E-10f;
	}
	iVar1 = func_656(bVar0, 0, 1, -1, 1);
	iVar2 = 0;
	if (iVar1 == -2.401104E+18f || func_659(bVar0, 3.414007E-11f, iVar1, 1, 1) > 0)
	{
		iVar2 = 1;
	}
	return iVar2;
}

int func_1692()
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = 2.884954E+11f;
	if (func_790(&(Global_1297394.f_62)))
	{
		bVar0 = 1.007909E-10f;
	}
	iVar1 = func_656(bVar0, 0, 1, -1, 1);
	iVar2 = 0;
	if (func_2136(iVar1))
	{
		iVar2 = 1;
	}
	return iVar2;
}

int func_1693(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3.279005E+18f;
		case 1:
			return 1.007909E-10f;
		case 3:
			return 3.021994E+07f;
		case 2:
			return -1.907884E+34f;
		case 4:
			return 8.209366E+14f;
		default:
			break;
	}
	return 0;
}

bool func_1694(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	var uVar2;

	return func_1943(bParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

int func_1695(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1536030095:
			return 1;
		case -165442446:
			return 0;
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

int func_1696(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STADIA_VERSION())
	{
		switch (uParam0->f_23)
		{
			case 1:
			case 8:
			case 12:
				switch (NETWORK::_0x3E8CCE6769DB5F34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, MISC::VAR_STRING(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
				break;
		}
	}
	if (!func_1570(uParam0))
	{
		return 0;
	}
	if (func_2098(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	iVar0 = func_918(&(uParam0->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_2099(iVar0, sParam1))
			{
				return 1;
			}
			break;
	}
	iVar1 = func_916(&(uParam0->f_1));
	switch (iVar1)
	{
		case 9:
		case 10:
		case 11:
			if (func_917(iVar1, sParam1))
			{
				return 1;
			}
			break;
	}
	switch (uParam0->f_22)
	{
		case -1178838578:
			StringCopy(sParam1, MISC::VAR_STRING(2, "NM_PLAYER_INFO_IN_SESSION_TOOLTIP"), 128);
			break;
		case -462010351:
			StringCopy(sParam1, MISC::VAR_STRING(2, "NM_PLAYER_INFO_NOT_IN_SESSION_TOOLTIP"), 128);
			break;
	}
	return 1;
}

int func_1697(var uParam0, char* sParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	switch (uParam0->f_22)
	{
		case -1178838578:
		case -462010351:
			iVar0 = func_680();
			if (func_681(iVar0) && func_682(iVar0))
			{
				if (!func_683(iVar0, 1))
				{
					return 1;
				}
				iVar1 = func_684(iVar0, &(uParam0->f_1));
				switch (iVar1)
				{
					case 1711458128:
						StringCopy(sParam1, MISC::VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLBUYIN"), 128);
						return 1;
					case -909793512:
						StringCopy(sParam1, MISC::VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLPROFIT"), 128);
						return 1;
					case -993470410:
						StringCopy(sParam1, MISC::VAR_STRING(10, "NET_MG_PLYRMENU_LOCK_GEOGRAPHIC", func_2137(iVar0)), 128);
						return 1;
					case 1873015794:
						StringCopy(sParam1, MISC::VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_OVERALLCAP"), 128);
						return 1;
					case -758661171:
						StringCopy(sParam1, MISC::VAR_STRING(2, "NET_MG_PLYRMENU_LOCK_PRIVBUYIN"), 128);
						return 1;
					case -127293234:
						StringCopy(sParam1, MISC::VAR_STRING(10, "NET_MG_PLYRMENU_LOCK_BANNED", func_2137(iVar0)), 128);
						return 1;
					default:
						break;
				}
				StringCopy(sParam1, "", 128);
			}
			iVar2 = func_918(&(uParam0->f_1));
			switch (iVar2)
			{
				case 1:
				case 2:
				case 3:
					if (func_2099(iVar2, sParam1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1698(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (bParam2 && !func_1570(uParam1))
	{
		return 0;
	}
	uParam0->f_8 = 0;
	func_614(&(uParam1->f_20), 8192);
	iVar1 = func_680();
	if (func_681(iVar1) && func_682(iVar1))
	{
		if (!func_683(iVar1, 1))
		{
			return 0;
		}
		iVar0 = func_684(iVar1, &(uParam1->f_1));
		if (iVar0 != -1 && iVar0 != 0)
		{
			return 0;
		}
	}
	if (func_918(&(uParam1->f_1)) == 0)
	{
		uParam0->f_8 = 1;
	}
	return 1;
}

int func_1699(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1570(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_22)
	{
		case -1178838578:
			uParam0->f_8 = func_916(&(uParam1->f_1)) == 5;
			break;
		case -462010351:
			uParam0->f_8 = func_918(&(uParam1->f_1)) == 0;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	func_614(&(uParam1->f_20), 8192);
	return 1;
}

int func_1700(var uParam0, char* sParam1)
{
	int iVar0;

	if (!func_1570(uParam0))
	{
		return 0;
	}
	if (func_2098(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	if (NETWORK::_0xA2837A5E21FB5A58(&(uParam0->f_1)))
	{
		StringCopy(sParam1, MISC::VAR_STRING(2, "PLAYER_ENTRY_INVITED_TO_SESSION_FOOTER"), 128);
		return 1;
	}
	iVar0 = func_916(&(uParam0->f_1));
	if (iVar0 != 5)
	{
		if (func_917(iVar0, sParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1701(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;

	if (bParam2)
	{
	}
	func_614(&(uParam1->f_20), 1536);
	iVar0 = func_2138(&(uParam1->f_1));
	if (func_2139(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

int func_1702(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1570(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_22)
	{
		case -1178838578:
			uParam0->f_8 = func_2138(&(uParam1->f_1)) == 5;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	func_614(&(uParam1->f_20), 8192);
	return 1;
}

int func_1703(var uParam0, char[4] cParam1)
{
	int iVar0;

	if (!func_1570(uParam0))
	{
		return 0;
	}
	iVar0 = func_2138(&(uParam0->f_1));
	if (func_2140(&iVar0, cParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1704()
{
	return Global_1896762.f_2932.f_1;
}

int func_1705()
{
	return Global_1896762.f_3261;
}

void func_1706(int iParam0)
{
	Global_1896762.f_3261 = iParam0;
}

bool func_1707()
{
	if (func_1009() == 1 || func_1009() == 2)
	{
		return true;
	}
	return false;
}

void func_1708(int iParam0)
{
	Global_1896762.f_3261.f_1 = iParam0;
}

bool func_1709(int iParam0, bool bParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam1))
	{
		return false;
	}
	iVar0 = 255;
	if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam1))
	{
		iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
		if (func_2(iVar0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
			if (func_1714(bParam1))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1710()
{
	return Global_1896762.f_3261.f_1;
}

bool func_1711(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_1189(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_1712(int iParam0)
{
	var uVar0;
	int iVar1;

	if (func_1189(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return iVar1 == func_2141(iParam0, 0);
		}
	}
	return false;
}

bool func_1713(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("COLOR_POSSE_ALLY"):
			if (iParam1 == 4.709691E+29f || iParam1 == 4.279651E-16f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case joaat("COLOR_POSSE_ENEMY"):
			if (iParam1 == 4.279651E-16f)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

bool func_1714(bool bParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam0))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam0))
	{
		return false;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return false;
	}
	if (!GANG::NETWORK_IS_GANG_ID_VALID(Global_1295619.f_10))
	{
		return false;
	}
	if (!GANG::_NETWORK_IS_GANG_MEMBER(Global_1295619.f_10, iVar0))
	{
		return false;
	}
	return true;
}

int func_1715(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_1716()
{
	return Global_1896762.f_212;
}

void func_1717(int iParam0)
{
	Global_1896762.f_201.f_10 = iParam0;
}

int func_1718()
{
	return BUILTIN::FLOOR((BUILTIN::TO_FLOAT(NETWORK::_0xB389289F031F059A()) / BUILTIN::TO_FLOAT(32)));
}

int func_1719(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1896762.f_201.f_10)
	{
		return 0;
	}
	Global_1896762.f_201.f_9 = iParam0;
	Global_1896762.f_201.f_8 = iParam0;
	return 1;
}

int func_1720()
{
	int iVar0;
	char* sVar1;

	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1896762.f_201.f_2))
	{
		return 0;
	}
	if (Global_1896762.f_201.f_10 <= 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = Global_1896762.f_201.f_10;
	}
	sVar1 = MISC::VAR_STRING(2, "NM_PW_PLAYER_LIST_PAGE", Global_1896762.f_201.f_9 + 1, iVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1896762.f_201.f_2, sVar1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1896762.f_201, Global_1896762.f_201.f_10 > 1);
	return 1;
}

int func_1721()
{
	return Global_1896762.f_201.f_8;
}

bool func_1722()
{
	return Global_1896762.f_201.f_7;
}

int func_1723()
{
	return Global_1896762.f_201.f_10;
}

int func_1724()
{
	return Global_1896762.f_201.f_9;
}

void func_1725(int iParam0)
{
	int iVar0;
	int iVar1;

	func_868();
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1940239.f_1556.f_756.f_2.f_323)
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/])))
		{
		}
		else
		{
			if (NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/])))
			{
				iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/]));
				if (func_2(iVar0))
				{
				}
				else
				{
					switch (iParam0)
					{
						case 7:
						case 8:
						case 9:
						case 10:
							if (func_1714(&(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/])))
							{
							}
							else if (!func_961(&(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/]), &(Global_1940239.f_1556.f_756.f_2.f_1.f_1[iVar1 /*10*/].f_2), 0, iParam0))
							{
							}
							iVar1++;
							default:
								break;
					}
				}
			}
		}
	}
}

int func_1726(var uParam0, int iParam1)
{
	int iVar0;

	if (iParam1 != Global_1149315.f_99)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < Global_1149315.f_1)
		{
			if (!NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1149315.f_1[iVar0 /*2*/]), uParam0[iVar0 /*2*/]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1727()
{
	int iVar0;
	struct<2> Var1;

	Global_1149315.f_99 = 0;
	Global_1149315.f_101 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Global_1149315.f_1[iVar0 /*2*/] = { Var1 };
		Global_1149315.f_66[iVar0] = 0;
		iVar0++;
	}
}

int func_1728(int iParam0)
{
	if (iParam0 == 2)
	{
		return -8.282245E+21f;
	}
	return 0;
}

char* func_1729(int iParam0, var uParam1, var uParam2)
{
	char* sVar0;

	switch (*uParam1)
	{
		case 0:
			if (!NETWORK::UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(iParam0))
			{
				*uParam1 = 1;
			}
			break;
		case 1:
			NETWORK::UGC_REQUEST_CACHED_DESCRIPTION(iParam0);
			*uParam1 = 2;
			break;
		case 2:
			if (!NETWORK::UGC_HAS_DESCRIPTION_REQUEST_FINISHED(iParam0))
			{
				*uParam2 = 1;
				return "";
			}
			if (NETWORK::UGC_DID_DESCRIPTION_REQUEST_SUCCEED(iParam0))
			{
				*uParam1 = 3;
			}
			else
			{
				*uParam1 = 0;
				*uParam2 = 3;
				return "";
			}
			break;
		case 3:
			sVar0 = NETWORK::UGC_GET_CACHED_DESCRIPTION(iParam0, 512);
			*uParam1 = 4;
			*uParam2 = 2;
			return sVar0;
		case 4:
			NETWORK::UGC_RELEASE_CACHED_DESCRIPTION(iParam0);
			NETWORK::UGC_RELEASE_ALL_CACHED_DESCRIPTIONS();
			*uParam1 = 5;
			*uParam2 = 0;
			return "";
		case 5:
			*uParam1 = 5;
			*uParam2 = 0;
			return "";
	}
	*uParam2 = 1;
	return "";
}

bool func_1730(int iParam0)
{
	return func_1405(iParam0, 1);
}

int func_1731(int iParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 0;
	if (func_1405(iParam0, 2))
	{
		*bParam1 = func_1405(iParam0, 4);
		if (bParam2)
		{
			func_1406(iParam0);
		}
		return 1;
	}
	return 0;
}

void func_1732(var uParam0)
{
	func_2142(uParam0, 0f);
}

bool func_1733(var uParam0)
{
	return func_1176(*uParam0, 2);
}

float func_1734()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_1735(int iParam0)
{
	return func_41(&(Global_1956862.f_1565), iParam0, 1);
}

bool func_1736(var uParam0, float fParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_570(bParam7);
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

int func_1737()
{
	return Global_1940239.f_1556.f_4168.f_2083;
}

int func_1738(int iParam0, int iParam1)
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

int func_1739(int iParam0)
{
	int iVar0;

	if (!func_1045())
	{
		return -1;
	}
	if (!func_1103(iParam0))
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

bool func_1740(int iParam0)
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

bool func_1741(var uParam0)
{
	if (!func_2143(*uParam0))
	{
		return false;
	}
	if (func_1744(uParam0))
	{
		return true;
	}
	return UNLOCK::UNLOCK_IS_UNLOCKED(uParam0->f_2);
}

int func_1742(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;

	if (!func_1103(*uParam0))
	{
		return -1;
	}
	if (!func_623(uParam0->f_2, 0))
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
		bVar6 = func_2144(iVar1);
		Var2 = { func_620(bVar6, uParam0->f_3, 2.918308E+20f, 1) };
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

int func_1743(var uParam0)
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
	if (!func_1103(*uParam0))
	{
		return -1;
	}
	if (!func_623(uParam0->f_2, 0))
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
		bVar7 = func_2144(iVar2);
		Var3 = { func_620(bVar7, uParam0->f_3, 2.918308E+20f, 1) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
		}
		else
		{
			iVar8 = func_2145(iVar2);
			iVar0 = func_1185(3.078375E+12f, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1744(var uParam0)
{
	return func_2146(uParam0->f_2, 1);
}

int func_1745(var uParam0)
{
	int iVar0;

	if (!func_1103(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_2147(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1746(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1747(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_2148(uParam0));
}

int func_1748(var uParam0)
{
	return 0;
}

int func_1749(var uParam0)
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
	if (!func_2149(uParam0))
	{
		return 0;
	}
	iVar0 = func_1742(uParam0) + 1;
	bVar1 = func_2144(iVar0);
	if (!func_623(bVar1, 0))
	{
		return 0;
	}
	if (!func_2150(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_2151(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

int func_1750(var uParam0)
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
	if (!func_2149(uParam0))
	{
		return 0;
	}
	iVar0 = func_1742(uParam0) + 1;
	bVar1 = func_2144(iVar0);
	if (!func_623(bVar1, 0))
	{
		return 0;
	}
	if (!func_2152(bVar1, &iVar2))
	{
		return 0;
	}
	uParam0->f_28 = iVar2;
	iVar3 = func_2151(iVar0, iVar2);
	if (iVar3 > 0 && uParam0->f_15 < iVar3)
	{
		return 0;
	}
	return 1;
}

var func_1751(var uParam0)
{
	return (((uParam0->f_26 || uParam0->f_25) || uParam0->f_24) || uParam0->f_23);
}

int func_1752(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_2149(uParam0))
	{
		return 0;
	}
	if (!func_1367(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

int func_1753(var uParam0)
{
	var uVar0;

	if (uParam0->f_20)
	{
		return 0;
	}
	if (!func_2149(uParam0))
	{
		return 0;
	}
	if (!func_1368(uParam0->f_2, &uVar0))
	{
		return 0;
	}
	uParam0->f_31 = uVar0;
	return 1;
}

bool func_1754(var uParam0)
{
	return (((!uParam0->f_20 && func_2149(uParam0)) && !uParam0->f_29) && !uParam0->f_30);
}

int func_1755(var uParam0)
{
	return 0;
}

var func_1756(var uParam0)
{
	return (((uParam0->f_33 || uParam0->f_32) || uParam0->f_29) || uParam0->f_30);
}

int func_1757(bool bParam0, int iParam1)
{
	return func_1157(bParam0, iParam1, 1, 0, 1, 0);
}

int func_1758(int iParam0, int iParam1)
{
	bool bVar0;

	bVar0 = func_2144(iParam0 + 1);
	return func_1757(bVar0, iParam1);
}

int func_1759(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	if (!func_1103(iParam0))
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

bool func_1760(var uParam0, int iParam1)
{
	return func_439(*uParam0, iParam1);
}

char* func_1761(var uParam0)
{
	return MISC::VAR_STRING(42, "MP_ABILITY_CARD_DISPLAY_STRING", MISC::VAR_STRING(0, uParam0->f_8), MISC::VAR_STRING(2, func_2153(uParam0->f_13)));
}

char* func_1762(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_2154(uParam46->f_13))
	{
		return "NULL";
	}
	return MISC::VAR_STRING(0, Param0.f_9[uParam46->f_13 /*12*/].f_11);
}

float func_1763(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	return func_2155(iParam0, iVar0);
}

bool func_1764(var uParam0)
{
	return uParam0->f_1 == 5.389147E-28f;
}

bool func_1765(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_1766(var uParam0)
{
	if (uParam0->f_29)
	{
		return "NET_PLAYER_ABILITY_PROMPT_CLAIM_WITH_REWARD";
	}
	else if (uParam0->f_30)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_33)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

char* func_1767(var uParam0)
{
	if (uParam0->f_23)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_VOUCHER";
	}
	else if (uParam0->f_24)
	{
		return "NET_PLAYER_ABILITY_PROMPT_UPGRADE_WITH_OFFER";
	}
	else if (uParam0->f_26)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1768(var uParam0)
{
	return (((uParam0->f_32 || uParam0->f_25) || uParam0->f_24) || uParam0->f_23);
}

bool func_1769(var uParam0)
{
	return (!func_1768(uParam0) && (uParam0->f_33 || uParam0->f_26));
}

int func_1770(var uParam0)
{
	if (!uParam0->f_20 && uParam0->f_29)
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_567(uParam0->f_17))
		{
			return 1;
		}
	}
	if (func_1768(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_567(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1769(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_660(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

char* func_1771(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_1772(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_1771(iParam0);
}

int func_1773(int iParam0)
{
	return (iParam0 / 100);
}

int func_1774(int iParam0)
{
	return (iParam0 % 100);
}

int func_1775(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	return func_2156(iVar0);
}

int func_1776()
{
	return Global_1149417.f_4621.f_163;
}

char* func_1777(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_1778(int iParam0)
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

char* func_1779(int iParam0)
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

char* func_1780()
{
	struct<59> Var0;
	int iVar59;

	if (func_844())
	{
		Var0 = { func_2157(Global_1295619.f_149[Global_1295619]) };
		iVar59 = Var0.f_16.f_2;
		switch (iVar59)
		{
			case -504335712:
				return func_2158(Global_524288.f_39632, &(Global_3145858.f_11), &(Global_3145858.f_108));
			case 395262693:
				return func_2159(Global_2359296.f_155);
			case -933924539:
				return func_2160(Global_2097152.f_32);
			default:
				break;
		}
	}
	return MISC::VAR_STRING(2, "FREEROAM_HEADER");
}

int func_1781(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 6:
			return Global_1940239.f_1556.f_756;
		case 19:
			return Global_1940239.f_1556.f_149.f_117.f_1;
		default:
			break;
	}
	return -1;
}

void func_1782()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_957(iVar0);
		iVar0++;
	}
}

var func_1783(int iParam0, int iParam1)
{
	return Global_1149157.f_1[iParam0 /*27*/].f_15[iParam1 /*3*/].f_1;
}

int func_1784(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1570390f;
		case 1:
			return -4.382472E-05f;
		case 2:
			return 3.11465E-09f;
		case 3:
			return -6.989488E+19f;
		case 4:
			return 3.864186E+31f;
		default:
			break;
	}
	return 0;
}

bool func_1785(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_1786()
{
	if (!UIAPPS::IS_ANY_UIAPP_RUNNING())
	{
		return;
	}
	UIAPPS::_CLOSE_ALL_UIAPPS();
}

bool func_1787(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;

	bVar0 = func_2162(bParam2, func_2161(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_1788(int iParam0)
{
	Global_1896762.f_365 = iParam0;
}

bool func_1789(int iParam0)
{
	if (iParam0 == Global_1940239.f_1556.f_4168.f_2085)
	{
		return false;
	}
	Global_1940239.f_1556.f_4168.f_2085 = iParam0;
	return true;
}

void func_1790(int iParam0)
{
	if (iParam0 == 0)
	{
		func_2163(0);
	}
	else
	{
		func_2163(func_2164(iParam0));
	}
}

int func_1791(int iParam0, int iParam1)
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

char* func_1792(int iParam0)
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

void func_1793(int iParam0)
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
		if (!func_347(iVar37, &Var0, 2, -1))
		{
		}
		else if (!func_2143(Var0))
		{
		}
		else if (Var0.f_36)
		{
		}
		else if (!func_1103(Var0))
		{
		}
		else if (iParam0 != Var0.f_1)
		{
		}
		else
		{
			DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1940239.f_1556.f_4168.f_36, iVar38, "ability_card", Global_1940239.f_1556.f_4168.f_37[func_1738(iVar37, 1) /*44*/]);
		}
		iVar38++;
	}
}

void func_1794(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_1055(uParam0, &uParam1);
}

bool func_1795(int iParam0)
{
	return func_2165() == iParam0;
}

void func_1796(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37)
{
	func_1055(uParam0, &uParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_45, func_2166(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_47, func_2167(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_46, func_2168(&uParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_48, func_2169(&uParam1));
}

void func_1797()
{
	Global_1297394.f_1 = Global_1072759.f_28418[50 /*4*/].f_3;
	Global_1297394.f_1.f_1 = 0;
	Global_1297394.f_1.f_2 = 0;
	Global_1297394.f_1.f_3 = 0;
	Global_1297394.f_1.f_4 = 0;
}

int func_1798(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_2170(func_1810(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_1799(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_2171(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_1798(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1473(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_2172(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_2173(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_1475(7.184882E+22f, &Var65, 1);
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
			func_1476(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_570(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_1800(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_1047(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_1132(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_620(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_2174(bParam1) };
			if (iParam2 && func_2175(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_2176(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_2176(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_2177(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_571(bParam1) };
			switch (func_1134(bParam0))
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
			if (func_2178(bParam0, -2.580501E-27f))
			{
				Var0 = { func_620(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_2178(bParam0, -4.220332E-15f))
			{
				Var0 = { func_620(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_620(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_2178(bParam0, -3.171238E-21f))
			{
				Var0 = { func_620(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_1332(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_2178(bParam0, -3.171238E-21f))
			{
				Var0 = { func_620(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_1801(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_2171(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_1332(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1473(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_663() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1475(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_1476(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_570(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

float func_1802(bool bParam0)
{
	if (func_1122(bParam0, 1.763507E+18f))
	{
		return func_2179(bParam0);
	}
	if (func_1122(bParam0, 9.522126E+26f))
	{
		return func_2180();
	}
	if (func_2181(bParam0))
	{
		return func_2182();
	}
	switch (func_1134(bParam0))
	{
		case -77448735:
			if (func_2183(bParam0))
			{
				return func_2179(bParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_2179(bParam0);
		case -1520388130:
		case 1802292908:
			return func_2184();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_2185();
		case -525676072:
			return func_2185();
		case 1779021115:
			if (bParam0 == -230.1699f || bParam0 == 5.402792E-27f)
			{
				return func_2186();
			}
			return func_2187();
		case -1823706425:
			if (bParam0 == -0.06342195f)
			{
				return func_2188();
			}
			else
			{
				return func_2189();
			}
			break;
		case -854348463:
			return func_2190();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_2191();
		default:
			if (func_623(bParam0, 0))
			{
				if (func_1122(bParam0, 4.644778E+30f))
				{
					return func_2192();
				}
				else if (bParam0 == -6.721167E-35f || bParam0 == -7.729678E-14f)
				{
					return func_2193();
				}
				else if (bParam0 == -2.692268E-16f)
				{
					return func_2194();
				}
				else if (func_1122(bParam0, 888.6404f))
				{
					return func_2195();
				}
			}
			return func_2196();
	}
	return func_2196();
}

bool func_1803(bool bParam0, int iParam1)
{
	int iVar0;

	if ((Global_1940186.f_6 || PED::IS_PED_DEAD_OR_DYING(Global_33, true)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_663() == 0)
	{
		if (func_2197(131072))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 1))
	{
		if (func_2197(1024))
		{
			return false;
		}
	}
	if (Global_1940186.f_16)
	{
		return false;
	}
	if (!func_439(iParam1, 2) && func_2197(32))
	{
		return false;
	}
	if (!func_439(iParam1, 4))
	{
		if (func_2197(4096))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 8) && func_2197(512))
	{
		return false;
	}
	if (!func_439(iParam1, 512) && !func_2198(bParam0))
	{
		return false;
	}
	if (!func_439(iParam1, 262144) && !func_2199(bParam0, func_439(iParam1, 524288)))
	{
		return false;
	}
	if (!func_439(iParam1, 64) && !func_2200(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_439(iParam1, 128))
	{
		if (func_2201(Global_33, 6.915501E+28f) || PED::IS_PED_ON_MOUNT(Global_33))
		{
			if (bParam0)
			{
				func_670("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_439(iParam1, 16))
	{
		if (func_2202(Global_33))
		{
			iVar0 = PED::GET_MOUNT(Global_33);
			if (!func_2203(iVar0, 1))
			{
				if (bParam0)
				{
					func_670("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_439(iParam1, 256) && func_2197(8192))
	{
		return false;
	}
	if (!func_439(iParam1, 1024) && func_2197(65536))
	{
		if (bParam0)
		{
			func_670("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_439(iParam1, 2048))
	{
		if (func_2197(32768))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 4096))
	{
		if (func_2197(16384))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 8192))
	{
		if (!func_2197(16))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 1.504633E-36f))
	{
		if (!func_2197(2.524355E-29f))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 16384))
	{
		if (func_2197(256))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 32768))
	{
		if (func_2204())
		{
			if (bParam0)
			{
				func_670("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_439(iParam1, 131072))
	{
		if (!func_2197(524288))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 65536))
	{
		if (!func_2197(262144))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 1048576))
	{
		if (!func_2197(2097152))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 2097152))
	{
		if (!func_2197(8388608))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 4194304))
	{
		if (!func_2197(2.350989E-38f))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 8388608))
	{
		if (func_2197(9.403955E-38f))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 2.350989E-38f))
	{
		if (func_2197(1.504633E-36f))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 9.403955E-38f))
	{
		if (func_2197(3.85186E-34f))
		{
			return false;
		}
	}
	if (func_2197(64))
	{
		return false;
	}
	else if (func_2197(128))
	{
		return false;
	}
	else if (func_2197(1048576))
	{
		return false;
	}
	else if (func_2197(4))
	{
		return false;
	}
	if (!func_439(iParam1, 3.85186E-34f))
	{
		if (func_2205(256))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 2.524355E-29f))
	{
		if (func_2197(1.084202E-19f))
		{
			return false;
		}
	}
	if (!func_439(iParam1, 1.084202E-19f))
	{
		if (func_2197(2f))
		{
			return false;
		}
	}
	return true;
}

bool func_1804()
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

bool func_1805(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_1806(int iParam0, int iParam1)
{
	return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1940239.f_1556.f_44.f_87);
}

int func_1807()
{
	return Global_1915643.f_22504.f_5;
}

char* func_1808(int iParam0)
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
			Var0 = { func_911(0) };
			if (!func_821(Var0))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar2 = func_2206(&Var0, 1);
			if (iVar2 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_2207(iVar2, 2.098029E-22f, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_1437(func_2208(iVar2, 2.098029E-22f));
	}
	return "";
}

void func_1809(int iParam0)
{
	Global_1915643.f_22504.f_5 = iParam0;
}

bool func_1810(bool bParam0)
{
	return bParam0;
}

int func_1811(bool bParam0, int iParam1)
{
	if (!func_2170(bParam0, 2))
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

int func_1812(bool bParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_2209(iVar0, bParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1813(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_2210(iParam0))
	{
		return 1;
	}
	if (!func_2211(iParam0))
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
	if (!bParam2 && !func_2212(iParam0))
	{
		return 3;
	}
	if (func_2213(iParam0) && !func_1184())
	{
		return 4;
	}
	return 0;
}

bool func_1814(bool bParam0, bool bParam1, bool bParam2, int iParam3, float fParam4)
{
	float fVar0;

	switch (func_837(bParam0, -60352.49f))
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

bool func_1815()
{
	return Global_1953279.f_1676.f_1[1 /*3*/].f_1 == -5.12226E+28f;
}

bool func_1816(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return false;
	}
	if (func_2214(*uParam0, -8.569155E-24f, 0))
	{
		return true;
	}
	return false;
}

void func_1817(bool bParam0)
{
	int iVar0;

	iVar0 = 2.349566E-24f;
	switch (func_2215())
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
		if (func_1122(bParam0, 1.763507E+18f))
		{
			func_2216(func_1279(bParam0), 1, 1);
		}
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1818(bool bParam0)
{
	int iVar0;

	iVar0 = 2.396577E-38f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1819(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -1.729466E+37f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1820(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 6.623678E+22f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1821(bool bParam0)
{
	int iVar0;

	iVar0 = -6.874405E+25f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1822(bool bParam0)
{
	int iVar0;

	iVar0 = 2.144114E+37f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1823(bool bParam0)
{
	int iVar0;

	iVar0 = 1.891427E+32f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1824(bool bParam0)
{
	int iVar0;

	iVar0 = -8.840173E-17f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1825(bool bParam0)
{
	int iVar0;

	iVar0 = -1.912532f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1826(bool bParam0)
{
	int iVar0;

	iVar0 = 2.636345f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1827(bool bParam0)
{
	int iVar0;

	iVar0 = 1.594798E+16f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1828(bool bParam0)
{
	int iVar0;

	iVar0 = -4.546778E-14f;
	switch (func_2215())
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
		func_2217(Global_33, bParam0, iVar0, 1, 0);
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1829(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 1.577477E+31f;
	switch (func_2215())
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
		if (!func_2217(Global_33, bParam0, iVar0, 1, 0) && bParam1)
		{
			func_2218(bParam0);
			func_2219(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

void func_1830(bool bParam0, bool bParam1)
{
	int iVar0;

	iVar0 = -10.1963f;
	switch (func_2215())
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
		if (!func_2217(Global_33, bParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_2218(bParam0);
			func_2219(bParam0, 1, 0, 9.275179E-19f);
		}
	}
	else
	{
		func_2218(bParam0);
		func_2219(bParam0, 1, 0, 9.275179E-19f);
	}
}

bool func_1831(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1832(char* sParam0)
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

void func_1833(int iParam0)
{
	if (func_1831(iParam0, 1))
	{
		func_2220(1);
	}
}

int func_1834(int iParam0)
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

void func_1835(struct<4> Param0)
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
			if (func_2221(Param0))
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
			func_2222(Param0);
			Global_1953279.f_736[Global_1953279.f_924 /*4*/] = { Param0 };
			Global_1953279.f_918++;
			Global_1953279.f_924 = (Global_1953279.f_924 + 1 % 25);
			func_1175(8);
			break;
		case 24:
		case 25:
			if (Global_1953279.f_919 >= 25)
			{
				return;
			}
			if (func_2221(Param0))
			{
				return;
			}
			func_2222(Param0);
			Global_1953279.f_635[Global_1953279.f_919 /*4*/] = { Param0 };
			Global_1953279.f_919++;
			func_1175(8);
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
			if (func_2221(Param0))
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
			func_2222(Param0);
			Global_1953279.f_837[Global_1953279.f_922 /*4*/] = { Param0 };
			Global_1953279.f_920++;
			Global_1953279.f_922 = (Global_1953279.f_922 + 1 % 20);
			func_1175(8);
			break;
			break;
	}
}

bool func_1836()
{
	return Global_1953279.f_3502;
}

bool func_1837(bool bParam0)
{
	if (func_2223())
	{
		return false;
	}
	if (!func_623(bParam0, 0))
	{
		return false;
	}
	if (!func_1358(bParam0, 1))
	{
		HUD::_0xBFFF81E12A745A5F();
		return false;
	}
	return true;
}

int func_1838(bool bParam0)
{
	return func_2224(bParam0);
}

int func_1839(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	bVar3 = func_2225(bParam0);
	if (func_1134(bParam0) == -9.847085E+19f || func_1122(bParam0, -1.186825E-08f))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_2226(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_2227();
			}
			else
			{
				iVar0 = func_2228();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_2229();
		}
		else
		{
			iVar0 = func_2230();
		}
	}
	else if (func_2231(&bVar2))
	{
		if (func_1122(bVar2, -1.186825E-08f) || func_1134(bVar2) == -9.847085E+19f)
		{
			iVar0 = func_2227();
		}
		else
		{
			iVar0 = func_2228();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_2229();
	}
	else
	{
		iVar0 = func_2230();
	}
	if (iVar0 != 0)
	{
		Global_1953279.f_3501 = MISC::GET_GAME_TIMER();
		TASK::START_TASK_ITEM_INTERACTION(Global_33, bParam0, iVar0, 1, iParam1, -1f);
		return 1;
	}
	return 0;
}

bool func_1840(int iParam0)
{
	return (Global_1953279 && iParam0) != 0;
}

void func_1841()
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
	func_2232(32768);
	func_2233(37.82234f, 8, 6);
}

bool func_1842(int iParam0, bool bParam1)
{
	return func_2234(iParam0, 0) < func_2235(iParam0, bParam1);
}

bool func_1843(bool bParam0)
{
	var uVar0;

	return func_2236(bParam0, &uVar0);
}

void func_1844(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_1134(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_1122(bParam0, 4.31212E+18f))
			{
				return;
			}
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_28), Global_1953279.f_3352.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_27), Global_1953279.f_3352.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_29), Global_1953279.f_3352.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_1122(bParam0, 3.611922E-33f))
			{
				bVar1 = func_2237(bParam0, &(Global_1953279.f_3352.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_2238();
	if (func_2239(iVar0) || (iVar0 != -947.1324f && func_1122(bParam0, -7.339854E+32f)))
	{
		INVENTORY::_INVENTORY_DISABLE_ITEM(func_570(bParam5), bParam0, 0);
	}
	func_1141(bParam0, bParam3, bParam5);
	if (bParam4)
	{
		func_2240(1, bParam0);
	}
	if (bParam2)
	{
		func_447(0, 0);
	}
}

float func_1845(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_2241();
	}
	if (iParam0 == 2654.774f)
	{
		return -2.688565E+11f;
	}
	return -5.418502E-17f;
}

void func_1846(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_2242(bParam0, bParam1))
	{
		func_2243(bParam0, bParam1, 1, bParam2, bParam3, bParam4);
		return;
	}
}

bool func_1847(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1953279.f_83[iVar0 /*12*/].f_9 == iParam0)
		{
			return func_2244(iVar0, 1);
		}
		iVar0++;
	}
	return -1.003831E+26f;
}

int func_1848(bool bParam0, int iParam1)
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

bool func_1849(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	func_2245();
	if (iParam2 == 39)
	{
		Var0 = { func_1800(bParam0, 1, 0) };
		iParam2 = func_1848(func_1847(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_1840(32768) && iParam2 == 10)
	{
		func_2246(37.82234f);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_1851(bParam0, 1))
	{
		func_2247(&(Global_1953279.f_1557), &bParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_2248(iParam2);
	}
	func_2249(iParam2, iVar5);
	func_2250(&(Global_1953279.f_1557.f_1[iParam2 /*3*/]), 4, 6);
	func_2250(&(Global_1953279.f_1676.f_1[iParam2 /*3*/]), 4, 6);
	func_2251(&(Global_1953279.f_1557), bParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1;
	}
	Global_1953279.f_1557.f_1[iParam2 /*3*/] = bParam0;
	Global_1953279.f_1557.f_1[iParam2 /*3*/].f_1 = func_2252(bParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1953279.f_2938)
		{
			if (Global_1953279.f_2938.f_2[iVar6 /*2*/] >= 0 && Global_1953279.f_2938.f_2[iVar6 /*2*/] < 39)
			{
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/] = 0;
				Global_1953279.f_2765[Global_1953279.f_2938.f_2[iVar6 /*2*/] /*2*/].f_1 = 0;
				func_2233(func_2244(Global_1953279.f_2938.f_2[iVar6 /*2*/], 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1850(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	func_2253(&(Global_1953279.f_2938), bParam0, bParam1, bParam2, bParam3, bParam4);
}

bool func_1851(bool bParam0, bool bParam1)
{
	if (!func_623(bParam0, 0))
	{
	}
	if (!bParam1 && (bParam0 == -2.296707E-23f || bParam0 == -2.419822E+17f))
	{
		return false;
	}
	if (func_1122(bParam0, 2.063512E-29f))
	{
		return true;
	}
	return false;
}

bool func_1852(bool bParam0, int iParam1, bool bParam2)
{
	struct<4> Var0;
	struct<5> Var4;
	bool bVar9;

	Var4 = { func_1800(bParam0, bParam2, 0) };
	if (func_1851(bParam0, 0))
	{
		bVar9 = func_540(Var4, Var4.f_4, bParam2, -1);
		if (bVar9 != 0)
		{
			Var4 = { func_1800(bVar9, bParam2, 0) };
			Var0 = { func_620(bVar9, Var4, Var4.f_4, bParam2) };
			return func_2254(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_620(bParam0, Var4, Var4.f_4, bParam2) };
	return func_2254(Var0, iParam1, bParam2);
}

int func_1853(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	iVar1 = func_1848(bParam0, 1);
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

void func_1854(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1855(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

bool func_1856(int iParam0)
{
	int iVar0;

	iParam0 = func_1855(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1145(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return false;
	}
	if (func_2255(iVar0))
	{
		return true;
	}
	return false;
}

int func_1857()
{
	return Global_38.f_289.f_3222;
}

bool func_1858()
{
	return Global_1915643.f_22504.f_1;
}

bool func_1859(int iParam0)
{
	return (Global_1051832.f_3648 && iParam0) != 0;
}

void func_1860(int iParam0)
{
	Global_1051832.f_3648 = (Global_1051832.f_3648 - (Global_1051832.f_3648 && iParam0));
}

void func_1861(int iParam0)
{
	Global_1051832.f_3649 = iParam0;
}

void func_1862()
{
	PAD::_SET_CONTROL_CONTEXT(4, 5.369191E-15f);
}

bool func_1863()
{
	return func_1859(4);
}

int func_1864(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (!func_2256())
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
	if ((func_2257(30f, 0) || PED::IS_PED_HOGTIED(Global_33)) || PED::IS_PED_HOGTYING(Global_33))
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
	if (func_1205(255))
	{
		return 3;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		return 44;
	}
	if ((Global_1108965.f_775.f_28 != -1 && Global_1108965.f_775.f_28 != 6) && Global_1108965.f_775.f_28 != 8)
	{
		if (func_2258(Global_1108965.f_775.f_28))
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
	if (func_443())
	{
		return 43;
	}
	return -1;
}

void func_1865(int iParam0)
{
	int iVar0;

	if (!func_1863())
	{
		func_2259(1);
	}
	Global_1051832.f_3650 = iParam0;
	iVar0 = func_1864(1);
	if (iVar0 != -1)
	{
		func_1809(iVar0);
		func_2260(0);
	}
	else
	{
		func_2260(1);
	}
}

void func_1866(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1867(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_2261(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_2262(iParam0))
	{
		return false;
	}
	if (func_2263(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_2264(iParam0, 1)) || func_2265(32768))
	{
		if (!func_2264(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_2266())
	{
		return false;
	}
	return true;
}

void func_1868(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_1869(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_1870()
{
	Global_1913621.f_1583 = MISC::GET_GAME_TIMER();
	Global_1913621.f_1581 = 1;
}

void func_1871(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam1;
	Global_1148170[iVar0 /*10*/].f_7 = (Global_1148170[iVar0 /*10*/].f_7 || iParam0);
}

int func_1872(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_2170(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_663() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_2267(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1873(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_623(bParam0, 0))
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

int func_1874(var uParam0)
{
	if (uParam0->f_9 == -1)
	{
		return 0;
	}
	return uParam0->f_9;
}

void func_1875(int iParam0)
{
	struct<2> Var0;

	if (!func_1840(64))
	{
		return;
	}
	func_2232(64);
	if (func_1840(32))
	{
		func_2268(&(Global_1953279.f_2567));
		Var0.f_1 = Global_1149417.f_4787;
		Var0 = Global_1149417.f_4787.f_4;
		func_2269(&Var0, 0);
	}
	else
	{
		func_2270(&(Global_1953279.f_2567));
		func_2271(&(Global_1953279.f_2567));
		func_2272(iParam0, 1, 1, 0);
		func_1137(27, 0, 0, 0, 0);
	}
	func_670("NG_OUTFIT_UNEQUIPPED", 10000, 0, 0, 0, 1);
}

int func_1876()
{
	int iVar0;

	if (Global_1203937.f_472 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_21 - 1))
	{
		if (NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&(Global_1203937.f_483[Global_1203937.f_472 /*63*/].f_22[iVar0 /*4*/]), &(Global_1295619.f_1)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_1877(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	var uVar1[8];

	if (!func_2274(iParam0, &uVar1, &iVar0, func_2273(0)))
	{
		return 0;
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iParam2 <= -1)
	{
		iParam2 = func_1971(iVar0);
	}
	else if (iParam2 >= iVar0)
	{
		iParam2 = func_1971(iVar0);
	}
	if (bParam1)
	{
		func_2275(uVar1[iParam2]);
	}
	else
	{
		func_2276(uVar1[iParam2]);
	}
	return 1;
}

void func_1878(var uParam0, int iParam1)
{
	var uVar0;

	*uParam0 = 22;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam1);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 11, 7, &uVar0);
}

bool func_1879()
{
	if (func_2277())
	{
		return false;
	}
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (func_2278())
	{
		return true;
	}
	if (func_821(func_911(0)))
	{
		Global_1149417.f_5568.f_21 = func_912(func_911(0));
	}
	else
	{
		Global_1149417.f_5568.f_21 = -1;
		return false;
	}
	if (func_2279(Global_1149417.f_5568.f_21))
	{
		return true;
	}
	return false;
}

void func_1880(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1881()
{
	return Global_1051645.f_12;
}

char* func_1882()
{
	return "unnamed";
}

int func_1883(int iParam0)
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

bool func_1884(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_2029(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_2280(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_1885(struct<2> Param0)
{
	return func_2281(Param0, 1, 4);
}

int func_1886(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1295619.f_5;
	}
	return Global_263042[iParam0 /*65*/];
}

bool func_1887(int iParam0, int iParam1)
{
	return (Global_263042[iParam0 /*65*/].f_63 && iParam1) != 0;
}

int func_1888(int iParam0)
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

int func_1889(int iParam0, int iParam1)
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

int func_1890(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return 0;
	}
	return Global_1205134[iParam0 /*17*/];
}

bool func_1891(int iParam0, int iParam1, int iParam2)
{
	return func_613(Global_1206151[iParam2 /*10*/][iParam0], iParam1);
}

bool func_1892(int iParam0)
{
	bool bVar0;

	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	bVar0 = func_2282(2, iParam0);
	if (bVar0 == 0)
	{
		return false;
	}
	return NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0);
}

int func_1893()
{
	return (MISC::GET_GAME_TIMER() - func_2283());
}

int func_1894()
{
	return Global_1896762.f_3648.f_1;
}

int func_1895(var uParam0, int iParam1, var uParam2)
{
	int iVar0;

	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*uParam2 = 0;
		return 0;
	}
	if ((uParam0[iVar0 /*7*/])->f_1 < 0)
	{
		*uParam2 = 0;
		return 0;
	}
	*uParam2 = (uParam0[iVar0 /*7*/])->f_2[(uParam0[iVar0 /*7*/])->f_1];
	return 1;
}

bool func_1896(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_623(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_2284(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

int func_1897(int iParam0)
{
	int iVar0;

	if (!func_2285(iParam0))
	{
		return 0;
	}
	iVar0 = func_2286(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_2287(iParam0, 1);
	}
	return 0;
}

bool func_1898(int iParam0)
{
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(0.0001293149f))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return UNLOCK::UNLOCK_IS_UNLOCKED(-462.0154f);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (UNLOCK::UNLOCK_IS_UNLOCKED(4.662344E+19f) && UNLOCK::UNLOCK_IS_UNLOCKED(1.113684E-11f));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

int func_1899(bool bParam0, bool bParam1, bool bParam2)
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

int func_1900(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

int func_1901(vector3 vParam0)
{
	return func_2288(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_1902(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<5> Var4;
	int iVar9;

	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 3;
	}
	if (func_1200(iParam0) == -4.537018E+10f)
	{
		if (func_2289(iParam1, 1))
		{
			return 9;
		}
		iVar0 = GANG::NETWORK_GET_GANG_ID(iParam1);
		if (!GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
		{
			return 7;
		}
		if (!func_420(iVar0))
		{
			return 8;
		}
		iVar1 = 2;
		if (GANG::NETWORK_GET_NUM_GANG_MEMBERS(iVar0) < iVar1)
		{
			return 10;
		}
		if (func_1215(iParam1, 1, 0, 1))
		{
			return 17;
		}
	}
	*iParam2 = func_2290(Global_1206482.f_1[iParam0 /*4*/]);
	if (*iParam2 == -1)
	{
		return 12;
	}
	if (Global_1205923.f_1[*iParam2 /*26*/].f_1 != -1)
	{
		return 13;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_1990(&Var4, iParam0))
	{
		func_2291(Var4, -3.364144f, &iVar2, 0);
		func_2291(Var4, 2.339867E-10f, &iVar3, 0);
	}
	iVar9 = func_2293(func_2292());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 11;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 11;
	}
	return 0;
}

int func_1903(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam1 == 0)
	{
		return 4;
	}
	if (func_1200(iParam0) == -4.537018E+10f)
	{
		vVar0 = { func_2294(iParam0, iParam1) };
		if (!func_757(vVar0) && (VOLUME::_IS_POINT_NEAR_VOLUME_LOCK_CENTER(vVar0, 100f, 0, 0, 0) || VOLUME::_0xAA9EE2AAFC717623(vVar0, 0, 0, 0)))
		{
			return 16;
		}
	}
	return 0;
}

int func_1904(int iParam0)
{
	if (iParam0 == 0)
	{
		return 5;
	}
	return 0;
}

int func_1905(struct<2> Param0)
{
	if (!func_821(Param0))
	{
		func_1947(func_1946(Param0), 8, 6, 255);
		return 6;
	}
	else if (func_2295(Param0) != -1)
	{
		func_1947(func_1946(Param0), 8, 14, 255);
		return 14;
	}
	else if (!func_2296(Param0))
	{
		func_1947(func_1946(Param0), 8, 21, 255);
		return 21;
	}
	else if (!func_2297(Param0))
	{
		func_1947(func_1946(Param0), 8, 22, 255);
		return 22;
	}
	else if (func_671())
	{
		func_1947(func_1946(Param0), 8, 15, 255);
		return 15;
	}
	return 0;
}

int func_1906()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return iVar0;
	}
	return MISC::GET_GAME_TIMER();
}

struct<4> func_1907(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_1800(bParam0, bParam1, 0) };
	return func_620(bParam0, Var0, Var0.f_4, bParam1);
}

int func_1908(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (!func_790(&uParam0))
	{
		return 0;
	}
	return INVENTORY::_INVENTORY_GET_ITEM_EXPIRY_TIME(&uParam0);
}

void func_1909(int iParam0, var uParam1, struct<37> Param2, var uParam39)
{
	func_2298(uParam1, Param2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_46, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_47, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_48, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_49, false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam1->f_50, func_1760(&uParam39, 1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam1->f_51, func_1061(func_1060(iParam0)));
}

bool func_1910(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_570(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

void func_1911(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1912(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -5.45926E-19f;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

bool func_1913(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!func_2054(iParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_2299(uParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1914(int iParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!func_2058(iParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_2300(uParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_1915(int iParam0, var uParam1)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_1290256.f_1139[iVar0 /*24*/]), iParam0))
		{
		}
		else
		{
			if (Global_1290256.f_1139[iVar0 /*24*/].f_23 < Global_1295619.f_16)
			{
				*uParam1 = { Global_1290256.f_1139[iVar0 /*24*/].f_7 };
				return true;
			}
			*uParam1 = { Global_1290256.f_1139[iVar0 /*24*/].f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1916()
{
	return "UNNAMED_HORSE";
}

char* func_1917(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return "BREED_ANDALUSIAN";
		case joaat("BREED_APPALOOSA_BLANKET"):
		case joaat("BREED_APPALOOSA_LEOPARD"):
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return "BREED_APPALOOSA";
		case joaat("BREED_ARABIAN_BLACK"):
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
		case joaat("BREED_ARABIAN_GREY"):
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
		case joaat("BREED_ARABIAN_WHITE"):
			return "BREED_ARABIAN";
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
		case joaat("BREED_ARDENNES_BAYROAN"):
			return "BREED_ARDENNES";
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return "BREED_BELGIAN";
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
		case -1159865523:
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
		case 1323533737:
		case 1416158449:
		case 1854655826:
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_MORGAN_PALOMINO"):
		case joaat("BREED_MORGAN_BAYROAN"):
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
		case joaat("BREED_MORGAN_BAY"):
			return "BREED_MORGAN";
		case -1712303883:
		case joaat("BREED_MUSTANG_GRULLODUN"):
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
		case 406093506:
		case 577120648:
		case joaat("BREED_MUSTANG_GOLDENDUN"):
		case 1147338535:
		case joaat("BREED_MUSTANG_WILDBAY"):
			return "BREED_MUSTANG";
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
		case joaat("BREED_NOKOTA_WHITEROAN"):
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return "BREED_NOKOTA";
		case joaat("BREED_SHIRE_LIGHTGREY"):
		case joaat("BREED_SHIRE_RAVENBLACK"):
		case joaat("BREED_SHIRE_DARKBAY"):
			return "BREED_SHIRE";
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return "BREED_SUFFOLKPUNCH";
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
		case joaat("BREED_TENNESSEEWALKER_MAHOGANYBAY"):
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_TURKOMAN_SILVER"):
		case joaat("BREED_TURKOMAN_GOLD"):
		case joaat("BREED_TURKOMAN_DARKBAY"):
		case -11223392:
		case 139264677:
		case 956799610:
		case 1133580901:
			return "BREED_TURKOMAN";
		case joaat("BREED_BRETON_STEELGREY"):
		case joaat("BREED_BRETON_REDROAN"):
		case joaat("BREED_BRETON_SEALBROWN"):
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
		case joaat("BREED_BRETON_GRULLODUN"):
		case joaat("BREED_BRETON_SORREL"):
			return "BREED_BRETON";
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
		case joaat("BREED_CRIOLLO_DUN"):
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
		case joaat("BREED_KLADRUBER_WHITE"):
		case joaat("BREED_KLADRUBER_SILVER"):
		case joaat("BREED_KLADRUBER_CREMELLO"):
		case joaat("BREED_KLADRUBER_GREY"):
		case joaat("BREED_KLADRUBER_BLACK"):
			return "BREED_KLADRUBER";
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return "BREED_NORFOLKROADSTER";
		case joaat("BREED_DONKEY"):
			return "BREED_DONKEY";
		case joaat("BREED_MULE_PAINTED"):
		case joaat("BREED_MULE"):
			return "BREED_MULE";
		case joaat("BREED_BUELL_WARVETS"):
			return "BREED_DUTCHWARMBLOOD";
		case joaat("BREED_JOHN_ENDLESSSUMMER"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return "BREED_NOKOTA";
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return "BREED_APPALOOSA";
		case joaat("BREED_WINTER02_01"):
			return "BREED_THOROUGHBRED";
		case joaat("BREED_EAGLEFLIES"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_BILL"):
			return "BREED_ARDENNES";
		case joaat("BREED_GANG_CHARLES"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_CHARLES_ENDLESSSUMMER"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_DUTCH"):
			return "BREED_ARABIAN";
		case joaat("BREED_GANG_HOSEA"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_JAVIER"):
			return "BREED_AMERICANPAINT";
		case joaat("BREED_GANG_JOHN"):
			return "BREED_HUNGARIANHALFBRED";
		case joaat("BREED_GANG_KAREN"):
			return "BREED_NOKOTA";
		case joaat("BREED_GANG_KIERAN"):
			return "BREED_TENNESSEEWALKER";
		case joaat("BREED_GANG_LENNY"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_MICAH"):
			return "BREED_MISSOURIFOXTROTTER";
		case joaat("BREED_GANG_SADIE"):
			return "BREED_TURKOMAN";
		case joaat("BREED_GANG_SADIE_ENDLESSSUMMER"):
			return "BREED_MUSTANG";
		case joaat("BREED_GANG_SEAN"):
			return "BREED_AMERICANSTANDARDBRED";
		case joaat("BREED_GANG_TRELAWNEY"):
			return "BREED_APPALOOSA";
		case joaat("BREED_GANG_UNCLE"):
			return "BREED_KENTUCKYSADDLE";
		case joaat("BREED_GANG_UNCLE_ENDLESSSUMMER"):
			return "BREED_APPALOOSA";
		case joaat("BREED_MANGY_BACKUP"):
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_1918(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

float func_1919(int iParam0)
{
	float fVar0;

	fVar0 = -1.919796E+32f;
	switch (iParam0)
	{
		case 3:
			fVar0 = -1.919796E+32f;
			break;
		case 0:
			fVar0 = -2.14641E+29f;
			break;
		case 1:
			fVar0 = -1.731908E-18f;
			break;
		case 2:
			fVar0 = -1.529092E+13f;
			break;
		default:
			fVar0 = -1.919796E+32f;
			break;
	}
	return fVar0;
}

bool func_1920()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_911(iVar0) };
		if (func_912(Var1) == 7)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1921(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	char cVar4[64];

	iVar0 = ((iParam0 / 1000) / 3600);
	iVar1 = (((iParam0 / 1000) / 60) - iVar0 * 60);
	iVar2 = ((iParam0 - (iVar1 + iVar0 * 60) * 60 * 1000) / 1000);
	iVar3 = (iParam0 - (iVar2 + (iVar1 + iVar0 * 60) * 60) * 1000);
	if (iVar0 > 0)
	{
		StringIntConCat(&cVar4, iVar0, 64);
		StringConCat(&cVar4, ":", 64);
		if (iVar1 < 10)
		{
			StringConCat(&cVar4, "0", 64);
			if (iVar1 < 0)
			{
				StringIntConCat(&cVar4, iVar1, 64);
				StringConCat(&cVar4, ":", 64);
				if (iVar2 < 10)
				{
					StringConCat(&cVar4, "0", 64);
				}
			}
		}
	}
	if (iVar1 > 0)
	{
		if (iVar1 < 10)
		{
			StringIntConCat(&cVar4, 0, 64);
		}
		StringIntConCat(&cVar4, iVar1, 64);
	}
	else
	{
		StringConCat(&cVar4, "00", 64);
	}
	StringConCat(&cVar4, ":", 64);
	if (iVar2 < 10)
	{
		StringConCat(&cVar4, "0", 64);
	}
	StringIntConCat(&cVar4, iVar2, 64);
	if (bParam1)
	{
		StringConCat(&cVar4, ".", 64);
		if (iVar3 >= 0)
		{
			StringIntConCat(&cVar4, iVar3, 64);
		}
		else
		{
			StringIntConCat(&cVar4, (iVar3 * -1), 64);
		}
		if (iVar3 < 10)
		{
			StringConCat(&cVar4, "00", 64);
		}
		else if (iVar3 < 100)
		{
			StringConCat(&cVar4, "0", 64);
		}
	}
	return HUD::_GET_TEXT_SUBSTRING_2(&cVar4, HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar4));
}

bool func_1922(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_570(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1978(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_1923()
{
	return 4;
}

struct<24> func_1924(int iParam0, int iParam1)
{
	struct<24> Var0;

	Var0.f_10 = -1;
	func_2301(iParam0, iParam1, &Var0);
	return Var0;
}

int func_1925(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	var uVar0;
	int iVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	iVar1 = func_2302(iParam0);
	func_2303();
	Global_1903834.f_106.f_3 = func_2304(iParam0);
	if (iParam1 == 0)
	{
		iParam1 = iVar1;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	Global_1903834.f_106.f_2 = fParam2;
	Global_1903834.f_106.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &(Global_1903834.f_106)))
	{
		return uVar0;
	}
	Global_1903834.f_106.f_4 = iVar1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &(Global_1903834.f_106)) && bParam3)
	{
		return uVar0;
	}
	return 0;
}

int func_1926(int iParam0)
{
	switch (iParam0)
	{
		case joaat("NSMA_HORSE_GENERIC"):
			return 0;
		case joaat("NSMA_HORSE_DRAFT"):
			return 1;
		case joaat("NSMA_HORSE_RACE"):
			return 2;
		case joaat("NSMA_HORSE_WAR"):
			return 3;
		case joaat("NSMA_HORSE_WORK"):
			return 4;
		case joaat("NSMA_HORSE_MC_WAR_WORK"):
			return 5;
		case joaat("NSMA_HORSE_MC_WAR_RACE"):
			return 6;
		case joaat("NSMA_HORSE_MC_WORK_RACE"):
			return 7;
		case joaat("NSMA_HORSE_MC_WORK_DRAFT"):
			return 8;
		case joaat("NSMA_HORSE_SUPERIOR"):
			return 9;
		case joaat("NSMA_HORSE_START"):
			return 0;
		case joaat("NSMA_HORSE_END"):
			return 9;
		case joaat("NSMA_COACH_CART"):
			return 10;
		case joaat("NSMA_COACH_WAGON"):
			return 11;
		case joaat("NSMA_COACH_ARMORED"):
			return 12;
		case joaat("NSMA_COACH_BUGGY"):
			return 13;
		case joaat("NSMA_COACH_STAGECOACH"):
			return 14;
		case 1134796210:
			return 10;
		case 520122271:
			return 14;
		default:
			break;
	}
	return -1;
}

bool func_1927(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, func_781()))
	{
		return false;
	}
	if ((!DECORATOR::DECOR_EXIST_ON(iParam0, func_782()) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_783())) || !DECORATOR::DECOR_EXIST_ON(iParam0, func_784()))
	{
		return false;
	}
	Var0 = DECORATOR::DECOR_GET_INT(iParam0, func_781());
	Var0.f_1 = DECORATOR::DECOR_GET_INT(iParam0, func_782());
	Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, func_783());
	Var0.f_3 = DECORATOR::DECOR_GET_INT(iParam0, func_784());
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return false;
	}
	*uParam1 = { Var0 };
	return true;
}

bool func_1928(int iParam0)
{
	if (func_805(2, iParam0))
	{
		return true;
	}
	if (func_805(4, iParam0))
	{
		return true;
	}
	if (func_531(97))
	{
		return true;
	}
	if (func_531(98))
	{
		return true;
	}
	if (func_531(99))
	{
		return true;
	}
	if (func_531(100))
	{
		return true;
	}
	return false;
}

bool func_1929()
{
	return Global_1896762.f_325.f_5;
}

int func_1930()
{
	return Global_1290256.f_11;
}

int func_1931()
{
	return Global_1290256.f_782;
}

bool func_1932(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = VEHICLE::GET_VEHICLE_MODEL_NUMBER_OF_SEATS(ENTITY::GET_ENTITY_MODEL(iParam0));
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = (iVar1 - 1);
		if (iVar2 == -1 || iVar2 == 0)
		{
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iParam0, iVar2)))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

float func_1933(int iParam0)
{
	float fVar0;

	fVar0 = 33699.88f;
	switch (iParam0)
	{
		case 3:
			fVar0 = 33699.88f;
			break;
		case 0:
			fVar0 = 447132f;
			break;
		case 1:
			fVar0 = -1.608345E+16f;
			break;
		case 2:
			fVar0 = 4.368787E+16f;
			break;
		default:
			fVar0 = 33699.88f;
			break;
	}
	return fVar0;
}

bool func_1934(bool bParam0, struct<2> Param1, var uParam3)
{
	int iVar0;

	if (Param1.f_1 == 0)
	{
		return false;
	}
	iVar0 = func_2305(Param1.f_1);
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

bool func_1935(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (Global_1142409.f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1936(vector3 vParam0, Vector3* vParam3)
{
	struct<5> Var0;

	if (!func_1934(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 3.010387E+29f;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -7.694432E-13f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam3, &Var0);
		return true;
	}
	return false;
}

bool func_1937(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	int iVar0;

	if (func_644(32))
	{
		if (func_1935(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_644(64))
	{
		iVar0 = func_2306(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!UNLOCK::UNLOCK_IS_UNLOCKED(iVar0))
		{
			return false;
		}
	}
	if (func_568(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_601.f_5, false, 0, 0))
	{
		return false;
	}
	if (!bParam9 && VOLUME::DOES_VOLUME_COLLIDE_WITH_ANY_VOLUME_LOCK(vParam4, Global_1901671.f_601.f_4, false, func_2307(), 0))
	{
		return false;
	}
	if (iParam10 == 0 && func_2308(vParam4))
	{
		return false;
	}
	if (iParam10 == 0 && func_2309(vParam4, iParam3))
	{
		return false;
	}
	return true;
}

bool func_1938(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_1939(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1938(iParam0))
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

bool func_1940(bool bParam0, bool bParam1)
{
	if (!func_1122(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1122(bParam0, -0.4876374f))
		{
			return func_1362(bParam0, 1) != 0;
		}
		if ((func_1155(bParam0, -982726.7f, 0) || func_1155(bParam0, 2.273041E-17f, 0)) || func_1155(bParam0, -2.401104E+18f, 0))
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

bool func_1941(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_2310(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_1373(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_1942(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_1942(bool bParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_2019(bParam0, iParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_567(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_660(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_2311(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_2312(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_1472(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

bool func_1943(bool bParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
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

	if (func_1361(bParam0) || func_1122(bParam0, 2.791187f))
	{
		return func_1942(func_1362(bParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_1385(bParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_1473(0)) && !func_1471());
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
			iVar32 = (Var0[iVar34 /*2*/].f_1 * iParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_567(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_660(iVar32)))
			{
			}
			else
			{
				iVar36 = func_2311(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_2312(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_1472(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_2313(Var0[iVar34 /*2*/]) || func_2314(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_2315(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_2316(Var0[iVar34 /*2*/], iVar36);
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
							if (bParam5 && ((iVar33 + func_2317(7, Var0[iVar34 /*2*/])) + func_2318(Var0[iVar34 /*2*/])) >= iVar32)
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

int func_1944(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case joaat("NEW_GAME"):
			iVar0 = 1;
			break;
		case joaat("INTRO_NOT_DONE"):
			iVar0 = 2;
			break;
		case joaat("FOLLOW_INVITE"):
			iVar0 = 3;
			break;
		case -1480790826:
			iVar0 = 4;
			break;
		case joaat("SHIFT_F"):
			iVar0 = 5;
			break;
		case joaat("BG_CUSTOM_1"):
			iVar0 = 6;
			break;
		case joaat("BG_CUSTOM_2"):
			iVar0 = 7;
			break;
		case joaat("BG_CUSTOM_3"):
			iVar0 = 8;
			break;
		case joaat("OPEN_POSSE"):
			iVar0 = 9;
			break;
		case joaat("NEAR_POSSE"):
			iVar0 = 10;
			break;
		case joaat("RANDOM_REGION"):
			iVar0 = 11;
			break;
		case joaat("LAST_REGION"):
			iVar0 = 12;
			break;
		case joaat("LAST_LOCATION"):
			iVar0 = 13;
			break;
		case joaat("LAST_MISSION"):
			iVar0 = 14;
			break;
		case joaat("RANDOM_POKER"):
			iVar0 = 15;
			break;
		case joaat("CCHAR"):
			iVar0 = 16;
			break;
		case joaat("CAMP"):
			iVar0 = 17;
			break;
		case 1735278055:
			iVar0 = 18;
			break;
		case -283069378:
			iVar0 = 19;
			break;
		case joaat("TRADE_1"):
			iVar0 = 20;
			break;
		case joaat("TRADE_2"):
			iVar0 = 21;
			break;
		case joaat("TRADE_3"):
			iVar0 = 22;
			break;
		case joaat("TRADE_4"):
			iVar0 = 23;
			break;
		case joaat("TRADE_5"):
			iVar0 = 24;
			break;
		case joaat("TRADE_6"):
			iVar0 = 25;
			break;
		case joaat("TRADE_7"):
			iVar0 = 26;
			break;
		case 1449824096:
			iVar0 = 27;
			break;
		case -1369260209:
			iVar0 = 28;
			break;
		case joaat("COUPON"):
			iVar0 = 29;
			break;
		case joaat("HUB"):
			iVar0 = 30;
			break;
		case 413241879:
			iVar0 = 31;
			break;
		case 928971890:
			iVar0 = 32;
			break;
	}
	return iVar0;
}

bool func_1945(int iParam0)
{
	return func_41(&(Global_1572887.f_300.f_1), iParam0, 3);
}

int func_1946(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1977(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_1947(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (iParam3 == 255)
	{
		iVar0 = PLAYER::PLAYER_ID();
	}
	iVar2 = func_2319(iParam1);
	iVar1 = iParam2;
	if ((iVar2 && iVar1) != 0)
	{
	}
	TELEMETRY::_TELEMETRY_MISSION_FAILED_TO_LAUNCH(iParam0, 0, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar0), false, false), (iVar2 || iVar1));
}

int func_1948(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_1949(iParam0, 16))
	{
		return 1;
	}
	if (!func_821(Param1))
	{
		return 0;
	}
	else if (func_1950(Param1))
	{
		return 0;
	}
	else if (func_1414(Param1))
	{
		return 0;
	}
	func_2320(Param1);
	func_1291(iParam0, 16);
	return 1;
}

bool func_1949(int iParam0, int iParam1)
{
	return func_613(Global_1206482.f_78[iParam0 /*20*/].f_6, iParam1);
}

bool func_1950(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_2027(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_1951()
{
	return (func_2321() != 0 || func_2322(1));
}

int func_1952(int iParam0)
{
	if (func_2323())
	{
		return 0;
	}
	if (!func_1951())
	{
		return 0;
	}
	if (func_2324())
	{
		func_2325(2);
	}
	else
	{
		func_2325(1);
	}
	func_2326(iParam0);
	return 1;
}

void func_1953(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<18> Var1;

	if (!func_821(Param0))
	{
		return;
	}
	if (!func_1950(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_2327(Param0);
	}
	if (!func_821(func_911(0)))
	{
		func_2328(Param0, 3);
		func_2329(bParam3);
		func_2330(!bParam4);
		func_2331(Param0, -1);
		if (bParam2 && !func_2265(2))
		{
			func_353(&Global_0, 1024);
		}
		func_2332(1);
	}
	else
	{
		func_2331(Param0, -1);
		func_2328(Param0, 4);
		func_2333(Param0, 0);
	}
	Global_1051645.f_45.f_1 = 1;
	iVar0 = func_912(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_2334(Param0, &Var1))
		{
			MISC::_0x1096603B519C905F(&(Var1.f_17));
		}
	}
}

int func_1954(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	struct<4> Var0;

	if (func_2335(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_1946(Param0);
	Var0.f_3 = iParam3;
	func_2336(&Var0, bParam2, iParam4);
	return 1;
}

void func_1955(int iParam0)
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

void func_1956(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;

	iVar0 = func_1200(iParam0);
	if (iVar0 == -4.537018E+10f)
	{
		func_711(func_710(1.039154E+16f, -4.537018E+10f), 1);
	}
	else
	{
		func_711(func_710(1.039154E+16f, -1.088202E-21f), 1);
	}
	if (func_2337(iParam0, iParam1, &fVar1))
	{
		func_711(func_710(1.039154E+16f, fVar1), 1);
	}
}

void func_1957(int iParam0)
{
	int iVar0;
	int iVar1;

	if ((Global_1900412.f_1 == 2 || Global_1900412.f_1 == 5) || Global_1900412.f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_663() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_2338(Global_1893611.f_2);
	Global_1900412.f_1 = 3;
	Global_1900412.f_2 = 0;
	Global_1900412.f_7 = iVar0;
	Global_1900412.f_8 = iParam0;
	Global_1900412.f_9 = iVar1;
	if (Global_1900412.f_9 != -1 && Global_1900412.f_9 != 0)
	{
		func_2339(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_9);
	}
	else if (Global_1900412.f_11 != -1)
	{
		func_2339(Global_1900412.f_7, Global_1900412.f_8, Global_1900412.f_11);
	}
}

void func_1958()
{
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(PLAYER::PLAYER_ID()))
	{
		if (func_747(1048576, PLAYER::PLAYER_ID()) || Global_1295611.f_2.f_1 == 2)
		{
			func_2340();
		}
	}
	if (LAW::GET_WANTED_SCORE(Global_1295619.f_5) > 0)
	{
		if (func_1194())
		{
			func_2341();
		}
		func_2342();
	}
}

bool func_1959(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 8:
			return bParam1;
		case 10:
			return bParam1;
		case 9:
			return bParam1;
		case 4:
			return bParam1;
		case 5:
			return bParam1;
		case 6:
			return bParam1;
		case 7:
			return bParam1;
		default:
			break;
	}
	return false;
}

bool func_1960(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return false;
	}
	return true;
}

int func_1961(var uParam0, struct<21> Param1)
{
	if (!func_2343(uParam0))
	{
		return 0;
	}
	uParam0->f_2[*uParam0 /*21*/] = { Param1 };
	*uParam0++;
	return 1;
}

void func_1962(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
		if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar1) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
		{
		}
		else if (!bParam1 && GANG::NETWORK_IS_GANG_LEADER(iVar1))
		{
		}
		else if (GANG::NETWORK_GET_GANG_ID(iVar1) != iVar0)
		{
		}
		else
		{
			SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(fParam0, iVar1);
		}
		iVar2++;
	}
}

bool func_1963(int iParam0)
{
	struct<30> Var0;

	Var0 = { func_1324(iParam0) };
	switch (func_2344(Var0))
	{
		case 1:
			func_2345(iParam0);
			break;
		case 2:
			func_2346(iParam0);
			break;
		case 3:
			func_2347(iParam0);
			break;
		case 4:
			func_2348(iParam0);
			break;
		case 5:
			func_2349(iParam0);
			break;
		default:
			return false;
	}
	func_147();
	return true;
}

bool func_1964(int iParam0)
{
	return false;
}

struct<30> func_1965(int iParam0)
{
	vector3 vVar0;
	struct<30> Var4;
	int iVar34;

	Var4.f_3 = -1;
	Var4.f_3.f_1 = -1;
	Var4.f_11.f_12 = -1;
	Var4.f_11.f_12.f_1 = -1;
	Var4.f_11.f_14 = 255;
	Var4.f_11.f_15 = 255;
	Var4.f_11.f_1 = 255;
	Var4.f_11.f_2 = vVar0.z;
	func_2350(&(Var4.f_3));
	if (func_2351() == iParam0)
	{
		func_2352();
	}
	if (Global_1072759.f_23 > 0)
	{
		Global_1072759.f_23 = (Global_1072759.f_23 - 1);
		Var4 = { Global_1072759.f_23.f_5[iParam0 /*30*/] };
		Global_1072759.f_23.f_5[iParam0 /*30*/] = 0;
	}
	iVar34 = iParam0;
	iVar34 = iParam0;
	while (iVar34 <= 8)
	{
		if (func_2351() == iVar34 + 1)
		{
			func_2353(iVar34);
		}
		Global_1072759.f_23.f_5[iVar34 /*30*/] = { Global_1072759.f_23.f_5[iVar34 + 1 /*30*/] };
		Global_1072759.f_23.f_5[iVar34 + 1 /*30*/] = 0;
		iVar34++;
	}
	return Var4;
}

bool func_1966(int iParam0)
{
	struct<30> Var0;

	Var0 = { func_1324(iParam0) };
	switch (func_2344(Var0))
	{
		case 1:
			func_1967(iParam0);
			return true;
		case 3:
			func_2354(iParam0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1967(int iParam0)
{
	struct<7> Var0;
	struct<30> Var11;
	int iVar41;

	Var11 = { func_1324(iParam0) };
	iVar41 = GANG::NETWORK_GET_GANG_ID(Var11.f_11.f_14);
	switch (Var11.f_11.f_4)
	{
		case 69:
			Var0.f_4 = 2;
			Var0.f_5 = iVar41;
			Var0.f_6 = Var11.f_11.f_7;
			func_1878(&Var0, Var11.f_11.f_14);
			return true;
		case 70:
			return true;
		case 72:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1968(int iParam0)
{
	return false;
}

bool func_1969(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_2355(iParam0) && func_439(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

int func_1970(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1969(iParam0, 32, iVar0) && !SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1225084[iParam0 /*28*/].f_14), iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1971(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (iParam0 <= 0)
	{
		return 0;
	}
	CLOCK::GET_POSIX_TIME(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + MISC::GET_RANDOM_INT_IN_RANGE(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_1972(int iParam0)
{
	if (func_2356(iParam0))
	{
		return Global_1297182.f_201.f_1[iParam0 /*4*/].f_3;
	}
	return 0;
}

void func_1973(int iParam0)
{
	func_614(&(Global_1297394.f_157), iParam0);
}

void func_1974(int iParam0)
{
	Global_1297182.f_200 = iParam0;
}

void func_1975(int iParam0)
{
	Global_1297182.f_1 = iParam0;
}

void func_1976()
