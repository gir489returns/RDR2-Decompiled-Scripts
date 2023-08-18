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
	char* sLocal_19 = NULL;
	char* sLocal_20 = NULL;
	struct<188> Local_21 = { 0, -1, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_209 = 0;
	var uLocal_210 = 0;
	var uLocal_211 = 0;
	var uLocal_212 = 0;
	var uLocal_213 = 0;
	var uLocal_214 = 0;
	var uLocal_215 = 0;
	var uLocal_216 = 0;
	var uLocal_217 = 0;
	var uLocal_218 = 0;
	var uLocal_219 = 1;
	var uLocal_220 = 0;
	var uLocal_221 = 2;
	var uLocal_222 = 0;
	var uLocal_223 = 0;
	var uLocal_224 = 0;
	var uLocal_225 = 0;
	var uLocal_226 = 0;
	var uLocal_227 = 0;
	var uLocal_228 = 0;
	var uLocal_229 = 0;
	var uLocal_230 = 0;
	var uLocal_231 = 0;
	var uLocal_232 = 0;
	var uLocal_233 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	int iVar1;
	struct<21> Var2;
	bool bVar23;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_19 = "props_misc@campfires@5_logs";
	sLocal_20 = "Script_PropCampfire";
	if (!func_1(&Local_21))
	{
	}
	if (TXD::DOES_STREAMED_TXD_EXIST(-8.83827E+15f))
	{
		TXD::REQUEST_STREAMED_TXD(-8.83827E+15f, false);
	}
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "AllowedToSave", false);
	iVar1 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowedToReplay", false);
	Var2 = { Global_38.f_9 };
	if (TXD::DOES_STREAMED_TXD_EXIST(-3.56988E-31f))
	{
		TXD::REQUEST_STREAMED_TXD(-3.56988E-31f, false);
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
	{
		if (!Global_17)
		{
			Global_38.f_9 = { Var2 };
		}
		func_2(iVar0, iVar1);
	}
	Local_21.f_183 = 0;
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(iVar0, true);
	UIFEED::UI_FEED_CLEAR_CHANNEL(6, true, false);
	func_3(&Global_26686);
	func_4();
	while ((!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && !func_5(Global_26686)) && !bVar23)
	{
		func_6(&Local_21);
		func_7(&Local_21);
		func_8();
		func_9(&Local_21);
		bVar23 = func_10();
		BUILTIN::WAIT(0);
	}
	if (bVar23)
	{
		CAM::DO_SCREEN_FADE_OUT(0);
		func_11(0, -1);
	}
	func_2(iVar0, iVar1);
}

bool func_1(var uParam0)
{
	int iVar0;

	uParam0->f_187 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "mpProgress");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "coopPercent", "0%");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "awardsPercent", func_12());
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "rankPercent", func_13());
	iVar0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "sessionInfo");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar0, "characterName", &(Global_17418.f_55.f_664.f_1784));
	uParam0->f_185 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bDisplayMissionChallengeChecklist", false);
	uParam0->f_186 = DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bAllowChecklistToggle", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bEnablePauseMenuPhotoMode", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL_FROM_PATH("", "bPauseMenuPhotoModeVisible", false);
	if (!func_14(uParam0))
	{
		return false;
	}
	return true;
}

void func_2(int iParam0, int iParam1)
{
	if (func_5(Global_26686))
	{
		func_15();
	}
	if (Local_21.f_1 != -1)
	{
		NETWORK::TEXTURE_DOWNLOAD_RELEASE(Local_21.f_1);
	}
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam0);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(iParam1);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_185);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_186);
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Local_21.f_187);
	func_16(&Local_21);
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

void func_4()
{
	struct<4> Var0;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char cVar8[64];
	int iVar16;
	char* sVar17;
	bool bVar18;
	bool bVar19;
	char* sVar20;
	int iVar21;
	int iVar22;
	int iVar23;
	float fVar24;
	float fVar25;
	float fVar26;
	float fVar27;

	Var0 = { func_17(0, 1, 0, -1) };
	bVar4 = false;
	iVar6 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		iVar7 = ENTITY::GET_ENTITY_MODEL(iVar6);
		if (iVar7 == func_18())
		{
			iVar5 = func_19(iVar7);
			bVar4 = true;
		}
	}
	if (bVar4)
	{
		StringCopy(&cVar8, MISC::VAR_STRING(2, func_20(iVar5)), 64);
	}
	else
	{
		cVar8 = { func_21(&Var0, 0, 1) };
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_1, &(Global_17418.f_55.f_664.f_1784));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_4, &cVar8);
	func_22();
	func_23(0, "MP_PLAYER_PLAYER", "pm_player_mp");
	iVar16 = Global_1956862.f_1431.f_103;
	sVar17 = func_24(iVar16);
	if (iVar16 == -10)
	{
		sVar20 = "rpg_underweight";
		bVar18 = true;
	}
	else if (iVar16 == 10)
	{
		sVar20 = "rpg_overweight";
		bVar18 = true;
	}
	func_25(0, 0, MISC::VAR_STRING(2, "PMPLAYER_CONDITION_WEIGHT"), MISC::VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, 27.64779f);
	if (Global_1956862.f_1431.f_103 == 0 || bVar18)
	{
		bVar19 = true;
	}
	func_26(1, bVar19, bVar18);
	func_26(2, bVar19, bVar18);
	func_26(3, bVar19, bVar18);
	sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
	bVar18 = false;
	sVar20 = "";
	if (func_27())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_COLD";
		bVar18 = true;
		sVar20 = "rpg_cold";
	}
	else if (func_28())
	{
		sVar17 = "PMPLAYER_CONDITION_TEMPERATURE_HOT";
		bVar18 = true;
		sVar20 = "rpg_hot";
	}
	func_25(0, 1, MISC::VAR_STRING(2, "PMPLAYER_CONDITION_TEMPERATURE"), MISC::VAR_STRING(2, sVar17), bVar18, sVar20, "pausemenu_player", bVar18, 27.64779f);
	func_29(1, bVar18, bVar18, sVar20);
	func_25(0, 2, MISC::VAR_STRING(2, "PMPLAYER_RANK"), "", 0, "Rank_Shield", "pm_player_mp", 1, 27.64779f);
	sVar17 = func_30(Global_1155135[Global_1295619 /*30*/]);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_84[2], sVar17);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[0 /*102*/].f_93[2], true);
	iVar21 = NETWORK::_NETWORK_GET_XP();
	iVar22 = func_31(Global_1155135[Global_1295619 /*30*/] + 1);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar21, iVar22);
	func_25(0, 3, MISC::VAR_STRING(2, "PMPLAYER_RANK_XP"), sVar17, 0, "", "", 0, 27.64779f);
	sVar20 = func_33(func_32(255));
	func_25(0, 4, MISC::VAR_STRING(2, "PMPLAYER_HONOR"), "", 0, sVar20, "pausemenu_player", 1, 27.64779f);
	sVar17 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &bVar18, &iVar23);
	func_25(0, 5, MISC::VAR_STRING(2, "PMPLAYER_GENERAL_HOSTILITY"), MISC::VAR_STRING(2, sVar17), bVar18, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 1, iVar23);
	fVar24 = func_36(0, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(0, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 1120403456) * (fVar25 / 1114636288));
	fVar27 = (1120403456 * (BUILTIN::TO_FLOAT(func_39(0, 2)) / fVar25));
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(1, 0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(1, 1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 1120403456;
	iVar23 = func_40(bVar18, 4.465091E-08f, 27.64779f);
	func_25(1, 2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 1120403456, iVar23);
	bVar18 = func_42();
	func_43(1, bVar18, bVar18);
	fVar24 = func_36(1, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(1, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 1120403456) * (fVar25 / 1114636288));
	fVar27 = (1120403456 * (BUILTIN::TO_FLOAT(func_39(1, 2)) / fVar25));
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(2, 0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(2, 1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 1120403456;
	iVar23 = func_40(bVar18, 4.465091E-08f, 27.64779f);
	func_25(2, 2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 1120403456, iVar23);
	fVar24 = func_36(2, 2);
	fVar25 = BUILTIN::TO_FLOAT(func_37(2, 2));
	fVar25 = (fVar25 / func_38());
	fVar26 = ((fVar24 / 1120403456) * (fVar25 / 1114636288));
	fVar27 = (1120403456 * (BUILTIN::TO_FLOAT(func_39(2, 2)) / fVar25));
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar24));
	func_25(3, 0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_TIME_VALUE_MINUTES", BUILTIN::ROUND(fVar26));
	func_25(3, 1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar27));
	bVar18 = fVar27 > 1120403456;
	iVar23 = func_40(bVar18, 4.465091E-08f, 27.64779f);
	func_25(3, 2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar17, bVar18, func_41(fVar27), "pausemenu_player_update", fVar27 != 1120403456, iVar23);
	sVar17 = MISC::VAR_STRING(2, "STRING", func_45(func_44(3.206845E-25f)));
	func_25(4, 0, MISC::VAR_STRING(2, "PMPLAYER_STORY_COMPLETE"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "STRING", func_46(-6.788534E-25f));
	func_25(4, 1, MISC::VAR_STRING(2, "PMPLAYER_TOTAL_KILLS"), sVar17, 0, "", "", 0, 27.64779f);
	sVar17 = MISC::VAR_STRING(2, "STRING", func_46(-15.68474f));
	func_25(4, 2, MISC::VAR_STRING(2, "PMPLAYER_TOTAL_DEATHS"), sVar17, 0, "", "", 0, 27.64779f);
}

bool func_5(struct<2> Param0)
{
	if (!func_47(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_48(Param0))
	{
		return false;
	}
	return true;
}

void func_6(var uParam0)
{
	bool bVar0;

	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 0, 0);
	}
	if (!UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
	{
		return;
	}
	bVar0 = UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f);
	if (uParam0->f_195 != bVar0)
	{
		uParam0->f_195 = bVar0;
		if (bVar0)
		{
			func_50(uParam0, 0, 1);
		}
	}
}

void func_7(var uParam0)
{
	struct<2> Var0;

	if (NETWORK::_PEDMUGSHOT_TAKE())
	{
		switch (*uParam0)
		{
			case 0:
				if (NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID("mugshot"))
				{
					NETWORK::_TEXTURE_DOWNLOAD_RELEASE_BY_NAME("mugshot");
				}
				*uParam0 = 1;
				break;
			case 1:
				if (!NETWORK::_TEXTURE_DOWNLOAD_TEXTURE_NAME_IS_VALID("mugshot"))
				{
					Var0 = { func_51() };
					uParam0->f_1 = NETWORK::_MUGSHOT_TEXTURE_DOWNLOAD_REQUEST(&Var0, 0, "mugshot", true);
					if (uParam0->f_1 != -1)
					{
						*uParam0 = 2;
					}
				}
				break;
			case 2:
				if (NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(uParam0->f_1) == 0)
				{
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_2, "mugshot");
					DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_3, "mugshot");
					*uParam0 = 3;
				}
				break;
			case 3:
				break;
		}
	}
}

void func_8()
{
	struct<4> Var0;
	float fVar4;

	fVar4 = 7.215231E-38f;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar4, &Var0))
		{
			switch (Var0)
			{
				case -1740156697:
					switch (Var0.f_2)
					{
						case 248393197:
							func_52(Var0.f_3);
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				case -1203660660:
					switch (Var0.f_2)
					{
						case 766694521:
							func_53(2.647505E-11f, 0);
							func_54(2.647505E-11f, 0);
							func_55(4.081617E+21f);
							break;
						case -385109718:
							func_56();
							break;
						case -609314343:
							func_57();
							break;
						case 1371972537:
							func_58();
							break;
						case -17440837:
							func_59();
							break;
						case -164517057:
							func_60();
							break;
						case -1123713079:
							func_61();
							break;
						case -1332231262:
							CAM::DO_SCREEN_FADE_OUT(0);
							func_62();
							break;
						case -1856718599:
							break;
					}
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
			}
		}
	}
}

void func_9(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_63();
	iVar1 = func_64(uParam0);
	if (iVar0 != iVar1)
	{
		if (iVar1 != 0)
		{
			func_65(uParam0, iVar1);
		}
		func_66(uParam0, iVar0);
		func_67(uParam0, iVar0);
	}
	func_68(uParam0, iVar0);
}

int func_10()
{
	int iVar0;
	float fVar4;

	fVar4 = -3.153709E+37f;
	while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar4))
	{
		if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar4, &iVar0))
		{
			switch (iVar0)
			{
				case -1203660660:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					return 1;
				case -1740156697:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
				default:
					UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar4);
					break;
			}
		}
	}
	return 0;
}

void func_11(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		func_69(iParam0, iParam1);
	}
	func_70(4);
	func_71();
	func_72(1);
}

char* func_12()
{
	char cVar0[16];
	float fVar2;

	fVar2 = STATS::_0x9D0F5D2E1951CD84();
	StringCopy(&cVar0, MISC::_GET_STRING_FROM_FLOAT(fVar2, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_73(cVar0);
}

char* func_13()
{
	char cVar0[16];
	float fVar2;
	float fVar3;
	float fVar4;

	fVar2 = BUILTIN::TO_FLOAT(NETWORK::_NETWORK_GET_RANK());
	fVar3 = BUILTIN::TO_FLOAT(999);
	fVar4 = ((fVar2 / fVar3) * 1120403456);
	StringCopy(&cVar0, MISC::_GET_STRING_FROM_FLOAT(fVar4, 1), 16);
	StringConCat(&cVar0, "%", 16);
	return func_73(cVar0);
}

bool func_14(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	iVar2 = 1;
	while (iVar2 <= (iVar0 - 1))
	{
		iVar1 = func_74(iVar2, 1);
		if (!func_75(uParam0, iVar1))
		{
			return false;
		}
		iVar2++;
	}
	return true;
}

void func_15()
{
	Global_0.f_6 = MISC::GET_GAME_TIMER();
	Global_0.f_3 = { Global_34 };
	func_76(&Global_0);
}

int func_16(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 3;
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar1 = func_74(iVar2, 1);
		func_77(uParam0, iVar1);
		iVar2++;
	}
	return 1;
}

struct<4> func_17(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -5.45926E-19f;
	if (!func_78(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_79() };
		if (func_80() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var29, &Var0))
		{
			func_81(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_82(PLAYER::PLAYER_ID());
	}
	bVar33 = func_83();
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_84(75);
	}
	iVar35 = func_85(iParam3, 0);
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
			return func_86();
		}
		if (!func_87(&Var0, 0))
		{
			Var36 = { func_88(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		return Var36;
	}
	return Var0;
}

int func_18()
{
	return 6.51589E-10f;
}

int func_19(int iParam0)
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

char* func_20(int iParam0)
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

struct<8> func_21(int iParam0, int iParam1, bool bParam2)
{
	char cVar0[64];
	struct<24> Var8;
	struct<8> Var32;

	StringCopy(&cVar0, "", 64);
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return cVar0;
	}
	Var8 = { func_89(iParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_90(iParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (MISC::COMPARE_STRINGS(&cVar0, func_91(), false, -1) == 0)
	{
		StringCopy(&cVar0, MISC::VAR_STRING(2, func_20(Var8.f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, MISC::VAR_STRING(2, func_92(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

void func_22()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956862.f_5.f_8[iVar0]);
		iVar0++;
	}
}

void func_23(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_10, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_11, sParam2);
}

char* func_24(int iParam0)
{
	if (iParam0 == 0)
	{
		return "PMPLAYER_CONDITION_WEIGHT_PERFECT";
	}
	if (iParam0 <= -7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_UNDERWEIGHT";
	}
	if (iParam0 >= 7)
	{
		return "PMPLAYER_CONDITION_WEIGHT_OVERWWEIGHT";
	}
	return "PMPLAYER_CONDITION_WEIGHT_AVERAGE";
}

void func_25(int iParam0, int iParam1, char* sParam2, char* sParam3, bool bParam4, char* sParam5, char* sParam6, bool bParam7, int iParam8)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_21[iParam1], sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_30[iParam1], sParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_39[iParam1], bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_48[iParam1], sParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_57[iParam1], sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_66[iParam1], iParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_75[iParam1], bParam7);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_8[iParam0], iParam1, "player_attribute_item", Global_1956862.f_5.f_14[iParam0 /*102*/].f_1[iParam1]);
}

void func_26(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_13, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_12, bParam2);
}

bool func_27()
{
	if (func_93())
	{
		return false;
	}
	return Global_1956862.f_1431.f_96 == 2;
}

bool func_28()
{
	if (func_93())
	{
		return false;
	}
	return Global_1956862.f_1431.f_96 == 0;
}

void func_29(int iParam0, bool bParam1, bool bParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_17, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_16, bParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_14[iParam0 /*102*/].f_18, sParam3);
}

char* func_30(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

int func_31(int iParam0)
{
	if (iParam0 < 1 || iParam0 > 999)
	{
		return -1;
	}
	return Global_1149417.f_11.f_562[(iParam0 - 1)];
}

int func_32(int iParam0)
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

char* func_33(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HONOR_BAD_8";
		case 1:
			return "HONOR_BAD_7";
		case 2:
			return "HONOR_BAD_6";
		case 3:
			return "HONOR_BAD_5";
		case 4:
			return "HONOR_BAD_4";
		case 5:
			return "HONOR_BAD_3";
		case 6:
			return "HONOR_BAD_2";
		case 7:
			return "HONOR_BAD_1";
		case 8:
			return "HONOR_GOOD_1";
		case 9:
			return "HONOR_GOOD_2";
		case 10:
			return "HONOR_GOOD_3";
		case 11:
			return "HONOR_GOOD_4";
		case 12:
			return "HONOR_GOOD_5";
		case 13:
			return "HONOR_GOOD_6";
		case 14:
			return "HONOR_GOOD_7";
		case 15:
			return "HONOR_GOOD_8";
	}
	return "HONOR_GOOD_1";
}

int func_34(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_94(iParam0, bParam1));
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

char* func_35(int iParam0, bool bParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
		case 1:
			*bParam1 = 0;
			*uParam2 = 27.64779f;
			return "PMPLAYER_GENERAL_HOSTILITY_LOW";
		case 2:
		case 3:
			*bParam1 = 0;
			*uParam2 = 27.64779f;
			return "PMPLAYER_GENERAL_HOSTILITY_MID";
		case 4:
		case 5:
		case 6:
			*bParam1 = 1;
			*uParam2 = 4.465091E-08f;
			return "PMPLAYER_GENERAL_HOSTILITY_HIGH";
	}
	return "PMPLAYER_GENERAL_HOSTILITY_MID";
}

float func_36(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
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

int func_37(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					if (func_42())
					{
						return 1200;
					}
					else if (func_27())
					{
						return 1200;
					}
					else if (func_28())
					{
						return 1200;
					}
					return Global_1956862.f_1431.f_81;
				case 2:
					return Global_1956862.f_1431.f_83;
				case 1:
					return Global_1956862.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956862.f_1565.f_2.f_81;
				case 2:
					return Global_1956862.f_1565.f_2.f_83;
				case 1:
					return Global_1956862.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_38()
{
	return Global_1956862.f_1431.f_98;
}

int func_39(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(2);
	}
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return Global_1956862.f_1431.f_81;
				case 2:
					return Global_1956862.f_1431.f_83;
				case 1:
					return Global_1956862.f_1431.f_82;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return Global_1956862.f_1565.f_2.f_81;
				case 2:
					return Global_1956862.f_1565.f_2.f_83;
				case 1:
					return Global_1956862.f_1565.f_2.f_82;
				default:
					break;
			}
			break;
	}
	return -1;
}

float func_40(bool bParam0, float fParam1, float fParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return fParam2;
}

char* func_41(float fParam0)
{
	if (fParam0 > 1120403456)
	{
		return "RPG_ARROW_DOWN";
	}
	else if (fParam0 < 1120403456)
	{
		return "RPG_ARROW_UP";
	}
	return "";
}

bool func_42()
{
	if (func_93())
	{
		return false;
	}
	return Global_1156096.f_21645[20 /*209*/].f_208;
}

void func_43(int iParam0, bool bParam1, bool bParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_15, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_14[iParam0 /*102*/].f_14, bParam2);
}

struct<2> func_44(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_45(var uParam0, var uParam1)
{
	var uVar0;

	STATS::STAT_ID_GET_INT(&uParam0, &uVar0);
	return uVar0;
}

int func_46(float fParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(fParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

bool func_47(int iParam0)
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

int func_48(int iParam0)
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

bool func_49(var uParam0, int iParam1)
{
	return func_96(uParam0->f_196, iParam1);
}

void func_50(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_97(&(uParam0->f_196), iParam1);
	}
	else
	{
		func_98(&(uParam0->f_196), iParam1);
	}
}

struct<2> func_51()
{
	struct<2> Var0;

	NETWORK::NETWORK_GET_LOCAL_HANDLE(&Var0);
	return Var0;
}

void func_52(int iParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam0, "rpg_pause_item_index");
	switch (Global_1956862.f_5.f_1425)
	{
		case 0:
			func_99(iVar0);
			break;
		case 1:
			func_100(iVar0);
			break;
		case 2:
			func_101(iVar0);
			break;
		case 3:
			func_102(iVar0);
			break;
		case 4:
			func_103(iVar0);
			break;
		case 5:
			func_104(iVar0);
			break;
	}
}

void func_53(float fParam0, bool bParam1)
{
	if (func_105())
	{
		return;
	}
	if (Global_1960810.f_1)
	{
		return;
	}
	Global_1960810 = fParam0;
	if (bParam1)
	{
		Global_1960810.f_1 = 1;
	}
}

void func_54(float fParam0, bool bParam1)
{
	if (!func_105())
	{
		return;
	}
	if (Global_1960810.f_1)
	{
		return;
	}
	Global_1960810 = fParam0;
	if (bParam1)
	{
		Global_1960810.f_1 = 1;
	}
}

void func_55(float fParam0)
{
	if (!func_105())
	{
		return;
	}
	Global_1960810.f_5 = fParam0;
}

void func_56()
{
	char* sVar0;
	int iVar1;
	int iVar2;
	vector3 vVar3[24];
	bool bVar6;
	bool bVar7;
	var uVar8;

	func_106(1, 1);
	Global_1956862.f_5.f_1425 = 0;
	func_108(MISC::VAR_STRING(2, func_107(0)));
	func_109(0, "PMPLAYER_STATISTICS");
	func_110(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar0 = func_30(Global_1155135[Global_1295619 /*30*/]);
	func_110(2, "PMPLAYER_RANK", "", 1, 0, 0, "", "", sVar0, 1);
	func_110(3, "PMPLAYER_HONOR", "", 1, 0, 1, func_33(func_32(255)), "pausemenu_player", 0, 0);
	func_109(4, "PMPLAYER_CONDITIONS");
	func_109(9, "PMPLAYER_PERKS");
	if (!func_112(Global_1156096.f_47689.f_63[func_111(-4.241801E+09f) /*2*/].f_1))
	{
		iVar1 = func_113(-4.241801E+09f);
		func_110(10, "CONSUMABLE_TONIC_BLENDING", MISC::VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	if (!func_112(Global_1156096.f_47689.f_63[func_111(-2.329539E-22f) /*2*/].f_1))
	{
		iVar1 = func_113(-2.329539E-22f);
		func_110(11, "CONSUMABLE_TONIC_HARDY", MISC::VAR_STRING(2, "PMPLAYER_GENERAL_TONIC_TIME_REMAINING", iVar1), 1, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 167;
	if (Global_1156096.f_35859.f_919[iVar2 /*12*/] == 228.4913f)
	{
		func_110(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_110(12, "PROVISION_TRINKET_BEAVER_TOOTH_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 169;
	if (Global_1156096.f_35859.f_919[iVar2 /*12*/] == -4355.944f)
	{
		func_110(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_110(13, "PROVISION_TRINKET_BUCK_ANTLER_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 170;
	if (Global_1156096.f_35859.f_919[iVar2 /*12*/] == 3.00591E-34f)
	{
		func_110(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_110(14, "PROVISION_TRINKET_JAVELINA_TUSK", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 171;
	if (Global_1156096.f_35859.f_919[iVar2 /*12*/] == -8.001792E+31f)
	{
		func_110(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_110(15, "PROVISION_TRINKET_RAM_HORN_NET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	iVar2 = 168;
	if (Global_1156096.f_35859.f_919[iVar2 /*12*/] == -1.389426E-06f)
	{
		func_110(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 1, 0, 0, 0, 0, 0, 0);
	}
	else
	{
		func_110(16, "PROVISION_TRINKET_SNOWY_EGRET", "", 0, 0, 0, 0, 0, 0, 0);
	}
	StringCopy(&cVar3, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar6 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar6)
	{
		func_110(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar6, &cVar3, "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(5, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_110(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_110(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(6, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_110(7, "PMPLAYER_CONDITION_TOXICITY", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(7, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = func_35(func_34(PLAYER::PLAYER_ID(), 0), &bVar7, &uVar8);
	func_110(8, "PMPLAYER_GENERAL_HOSTILITY", MISC::VAR_STRING(2, sVar0), 1, bVar7, 1, "ONLINE_OPTIONS_HOSTILITY", "mp_online_options", 0, 0);
	func_114(0);
	func_115(0);
	func_99(1);
}

void func_57()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956862.f_5.f_1425 = 1;
	func_106(1, 1);
	func_108(MISC::VAR_STRING(2, func_107(1)));
	func_109(0, "PMPLAYER_STATISTICS");
	func_110(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_116(0, 2) + 5;
	func_110(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_109(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[1]);
	if (func_28())
	{
		func_110(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_hot", "pausemenu_player", 0, 0);
	}
	else if (func_27())
	{
		func_110(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 1, 1, "rpg_cold", "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(5, "PMPLAYER_CONDITION_TEMPERATURE", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	if (func_42())
	{
		func_110(6, "PMPLAYER_CONDITION_TOXICITY", MISC::VAR_STRING(2, "PMPLAYER_CONDITION_TOXICITY_POISONED"), 1, 1, 1, "rpg_sick", "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(6, "PMPLAYER_CONDITION_TOXICITY", "", 0, 0, 0, 0, 0, 0, 0);
	}
	func_114(0);
	func_115(0);
	func_100(1);
	func_117("PMPLAYER_HEALTH_OVERVIEW_TOOLTIP");
}

void func_58()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956862.f_5.f_1425 = 2;
	func_106(1, 1);
	func_108(MISC::VAR_STRING(2, func_107(2)));
	func_109(0, "PMPLAYER_STATISTICS");
	func_110(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_116(1, 2) + 5;
	func_110(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_109(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_114(0);
	func_115(0);
	func_101(1);
	func_117("PMPLAYER_STAMINA_OVERVIEW_TOOLTIP");
}

void func_59()
{
	char* sVar0;
	char* sVar1;
	vector3 vVar2[24];
	bool bVar5;

	Global_1956862.f_5.f_1425 = 3;
	func_106(1, 1);
	func_108(MISC::VAR_STRING(2, func_107(3)));
	func_109(0, "PMPLAYER_STATISTICS");
	func_110(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	sVar1 = func_116(2, 2) + 5;
	func_110(2, "PMPLAYER_PROGRESSION", MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL", sVar1), 1, 0, 0, 0, 0, 0, 0);
	func_109(3, "PMPLAYER_CONDITIONS");
	StringCopy(&cVar2, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_48[0]), 24);
	bVar5 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[0 /*102*/].f_75[0]);
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[0 /*102*/].f_30[0]);
	if (bVar5)
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 1, bVar5, &cVar2, "pausemenu_player", 0, 0);
	}
	else
	{
		func_110(4, "PMPLAYER_CONDITION_WEIGHT", sVar0, 1, 0, 0, 0, 0, 0, 0);
	}
	func_114(0);
	func_115(0);
	func_102(1);
	func_117("PMPLAYER_DEADEYE_OVERVIEW_TOOLTIP");
}

void func_60()
{
	char cVar0[64];
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	int iVar16;
	float fVar17;
	int iVar18;
	int iVar19;

	Global_1956862.f_5.f_1425 = 4;
	func_106(1, 1);
	func_108(MISC::VAR_STRING(2, func_107(4)));
	func_109(0, "PMPLAYER_LIFE_STATS");
	func_118();
	StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_MONEY", func_120((func_119(3.301368E+31f) / 1120403456), 2)), 64);
	func_110(2, "PMPLAYER_TOTAL_CASH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_GOLD", func_120((func_119(-6.173508E+07f) / 1120403456), 2)), 64);
	func_110(3, "PMPLAYER_TOTAL_GOLD", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_MONEY", func_120((func_119(-1.303632E+19f) / 1120403456), 2)), 64);
	func_110(4, "PMPLAYER_CASH_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_GOLD", func_120((func_119(4.673652E+30f) / 1120403456), 2)), 64);
	func_110(5, "PMPLAYER_GOLD_SPENT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-6.788534E-25f), 64);
	func_110(6, "PMPLAYER_TOTAL_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-15.68474f), 64);
	func_110(7, "PMPLAYER_TOTAL_DEATHS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = (func_46(6.961667E-36f) / 1000);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	StringCopy(&cVar0, MISC::VAR_STRING(2, "PMPLAYER_DAYS_AND_HOURS", iVar11, iVar10), 64);
	func_110(8, "PMPLAYER_TIME_ONLINE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_121("ALL HORSES", &iVar12, &iVar13, -5.45926E-19f, 0);
	func_122(iVar12);
	iVar14 = func_123(3.947792E-26f);
	if (iVar14 >= iVar13)
	{
		IntToString(&cVar0, iVar14, 64);
	}
	else
	{
		IntToString(&cVar0, iVar13, 64);
		func_125(func_124(3.947792E-26f), (iVar13 - iVar14));
	}
	func_110(9, "PMPLAYER_HORSES_OWNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_109(10, "PMPLAYER_CRIME_STAT");
	IntToString(&cVar0, func_46(-1.0077E+32f), 64);
	func_110(11, "PMPLAYER_PLAYERS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(-6.788534E-25f, 3.191266E-28f), 64);
	func_110(12, "PMPLAYER_LAW_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(-6.788534E-25f, -8.244723E-39f), 64);
	func_110(13, "PMPLAYER_PEDS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar8 = func_126(6.658956E+14f, -9.872597E-39f);
	iVar9 = (iVar8 / 60);
	iVar10 = (iVar9 / 60);
	iVar11 = (iVar10 / 24);
	iVar10 = (iVar10 % 24);
	iVar9 = (iVar9 % 60);
	StringCopy(&cVar0, MISC::VAR_STRING(2, "PMPLAYER_DAYS_HOURS_MINUTES", iVar11, iVar10, iVar9), 64);
	func_110(14, "PMPLAYER_TIME_WANTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(-3021.202f, 9.129877E-23f), 64);
	func_110(15, "PMPLAYER_PEDS_LOOTED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_109(16, "PMPLAYER_HUNTING");
	IntToString(&cVar0, func_126(-6.788534E-25f, 0.0005443839f), 64);
	func_110(17, "PMPLAYER_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(0.0001012642f, -4.709175E-31f), 64);
	func_110(18, "PMPLAYER_UNIQUE_ANIMALS_KILLED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, ((func_126(-1.72244E+31f, -2.56015E-24f) + func_126(-1.72244E+31f, -1.247132E-07f)) + func_126(-1.72244E+31f, 3.400882E+18f)), 64);
	func_110(19, "PMPLAYER_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(-1.72244E+31f, -4.709175E-31f), 64);
	func_110(20, "PMPLAYER_UNIQUE_ANIMALS_SKINNED", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_126(-2.582317E-20f, 81923.94f), 64);
	func_110(21, "PMPLAYER_PERFEECT_KILLS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_MONEY", func_120((func_119(2.737371E-27f) / 1120403456), 2)), 64);
	func_110(22, "PMPLAYER_HUNTING_PROFITS", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, func_46(-1.97212E+08f), 64);
	func_110(23, "PMPLAYER_FISH_CAUGHT", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	if (MISC::_SHOULD_USE_METRIC_WEIGHT())
	{
		fVar15 = (func_119(-3.136502E+10f) * 1055407414);
		StringCopy(&cVar0, MISC::VAR_STRING(10, "PMPLAYER_KG", func_120(fVar15, 2)), 64);
	}
	else
	{
		iVar16 = func_46(-3.136502E+10f);
		fVar17 = (func_119(-3.136502E+10f) - BUILTIN::TO_FLOAT(iVar16));
		StringCopy(&cVar0, MISC::VAR_STRING(2, "PMPLAYER_LB_AND_OZ", iVar16, BUILTIN::ROUND((1098907648 * fVar17))), 64);
	}
	func_110(24, "PMPLAYER_BIGGEST_FISH", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_109(25, "PMPLAYER_CONTENT");
	IntToString(&cVar0, func_45(func_44(3.206845E-25f)), 64);
	func_110(26, "PMPLAYER_STORY_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	iVar18 = func_126(-8.839952E-30f, 2.328425E+33f);
	iVar19 = func_126(1.255702E+11f, 2.328425E+33f);
	StringCopy(&cVar0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", (iVar18 * 100 / (iVar18 + iVar19))), 64);
	func_110(27, "PMPLAYER_SERIES_COMPLETE_PER", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	IntToString(&cVar0, (iVar18 + iVar19), 64);
	func_110(28, "PMPLAYER_SERIES_COMPLETE", &cVar0, 1, 0, 0, 0, 0, 0, 0);
	func_114(0);
	func_115(0);
	func_103(1);
	func_117("PMPLAYER_GENERAL_STATS_TOOLTIP");
}

void func_61()
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	char cVar9[64];
	int iVar17;
	bool bVar18;
	char cVar19[64];
	float fVar27;
	bool bVar28;
	char cVar29[64];
	bool bVar37;
	char cVar38[64];
	int iVar46;
	bool bVar48;
	char cVar49[64];
	char cVar57[64];
	char* sVar65;

	func_106(1, 1);
	Global_1956862.f_5.f_1425 = 5;
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		iVar7 = func_127(iVar4);
		iVar8 = func_128(iVar4);
	}
	else
	{
		iVar7 = func_129(&Var0, 0);
		iVar8 = func_130(&Var0, 0);
	}
	iVar7 = iVar7;
	StringCopy(&cVar9, MISC::VAR_STRING(2, "HORSE_BONDING_LEVEL", iVar8), 64);
	bVar18 = false;
	if (bVar5)
	{
		iVar17 = func_131(iVar4, 0);
	}
	else
	{
		iVar17 = func_132(Var0, 0);
	}
	if (iVar17 <= 50)
	{
		StringCopy(&cVar19, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_CLEAN"), 64);
	}
	else if (iVar17 < 100)
	{
		StringCopy(&cVar19, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_DIRTY"), 64);
		bVar18 = true;
	}
	else
	{
		StringCopy(&cVar19, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_CLEANLINESS_FILTHY"), 64);
		bVar18 = true;
	}
	fVar27 = 0f;
	bVar28 = false;
	if (bVar5)
	{
		fVar27 = func_133(iVar4);
	}
	if (fVar27 > 0f)
	{
		StringCopy(&cVar29, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_AGITATED"), 64);
		bVar28 = true;
	}
	else
	{
		StringCopy(&cVar29, MISC::VAR_STRING(2, "PMPLAYER_HORSE_CONDITION_MOOD_CALM"), 64);
	}
	if (func_134(-8.769617E+23f, &bVar37))
	{
		if (func_135(bVar37, &iVar46, 14460646, 0))
		{
			StringCopy(&cVar38, HUD::GET_STRING_FROM_HASH_KEY(iVar46), 64);
		}
	}
	if (func_134(0.001620535f, &bVar48))
	{
		StringCopy(&cVar49, func_136(bVar48), 64);
	}
	StringCopy(&cVar57, DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_4), 64);
	sVar65 = MISC::VAR_STRING(2, "AT_HORSE");
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cVar57))
	{
		sVar65 = func_137(&cVar57);
	}
	func_108(sVar65);
	func_109(0, "PMPLAYER_STATS");
	func_110(1, "PMPLAYER_OVERVIEW", "", 1, 0, 0, 0, 0, 0, 0);
	func_110(2, "PMPLAYER_HORSE_PHYSIQUE_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_110(3, "PMPLAYER_HORSE_BONDING_TITLE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
	func_110(4, "PMPLAYER_HORSE_HEALTH_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_110(5, "PMPLAYER_HORSE_STAMINA_TITLE", "", 1, 0, 0, 0, 0, 0, 0);
	func_109(6, "PMPLAYER_CONDITIONS");
	func_110(7, "PMPLAYER_HORSE_CONDITION_CLEANLINESS", &cVar19, 1, bVar18, bVar18, "rpg_horse_dirty", "pausemenu_player", 0, 0);
	func_110(8, "PMPLAYER_HORSE_CONDITION_MOOD", &cVar29, 1, bVar28, bVar28, "rpg_horse_agitation", "pausemenu_player", 0, 0);
	func_109(9, "PMPLAYER_HORSE_TACK_TRINKETS_NET");
	func_110(10, "PMPLAYER_HORSE_TACK_SADDLE_TITLE", &cVar38, 1, 0, 0, 0, 0, 0, 0);
	func_110(11, "PMPLAYER_HORSE_TACK_STIRRUPS_TITLE", &cVar49, 1, 0, 0, 0, 0, 0, 0);
	iVar6 = 168;
	if (Global_1156096.f_35859.f_919[iVar6 /*12*/] == -1.389426E-06f)
	{
		func_110(12, "PMPLAYER_HORSE_TACK_TRINKET_TITLE", MISC::VAR_STRING(2, "PROVISION_TRINKET_SNOWY_EGRET"), 1, 0, 0, 0, 0, 0, 0);
	}
	func_104(1);
}

void func_62()
{
	func_70(4);
	func_71();
	func_72(2);
	func_138(7.01894E+25f, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
}

int func_63()
{
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f))
	{
		return UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(7.215231E-38f);
	}
	if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(1.847815E-26f))
	{
		return UIAPPS::_GET_UIAPP_CURRENT_ACTIVITY_BY_HASH(1.847815E-26f);
	}
	return 0;
}

var func_64(var uParam0)
{
	return uParam0->f_197;
}

void func_65(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_139(uParam0);
			break;
		case 1084197569:
			func_140(uParam0);
			break;
	}
}

void func_66(var uParam0, int iParam1)
{
	uParam0->f_197 = iParam1;
}

void func_67(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_141(uParam0);
			break;
		case 1084197569:
			func_142(uParam0);
			break;
	}
}

void func_68(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_143(uParam0);
			break;
		case 1084197569:
			func_144(uParam0);
			break;
	}
}

void func_69(int iParam0, int iParam1)
{
	if (Global_1572864.f_17 != 0)
	{
		return;
	}
	Global_1572864.f_17 = iParam0;
	Global_1572864.f_18 = iParam1;
}

void func_70(int iParam0)
{
	Global_1572864.f_3 = (Global_1572864.f_3 || iParam0);
}

void func_71()
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

void func_72(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864.f_1 = iParam0;
}

char* func_73(char[4] cParam0, char[4] cParam1)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

int func_74(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 2.586806E+07f;
		case 2:
			return 4.985688f;
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

bool func_75(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			return func_145(uParam0);
		case 1084197569:
			return func_146(uParam0);
	}
	return false;
}

void func_76(var uParam0)
{
	uParam0->f_2 = 0;
}

void func_77(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1271225230:
			func_147(uParam0);
			break;
		case 1084197569:
			func_148(uParam0);
			break;
	}
}

bool func_78(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_149(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_150(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_151(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_152(&Var49, &Var0, 0))
				{
					if (func_153(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_122(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_122(iVar47);
	}
	return false;
}

struct<4> func_79()
{
	return Global_1290256.f_11.f_310;
}

bool func_80()
{
	return Global_1290256.f_11.f_318 > Global_1295619.f_16;
}

void func_81(var uParam0, bool bParam1)
{
	Global_1290256.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1290256.f_11.f_318 = Global_1295619.f_16 + 10;
	}
}

int func_82(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_154(iParam0);
	bVar1 = func_156(func_155(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_83()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_157(iVar0) };
		if (func_158(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_84(int iParam0)
{
	return func_159(&(Global_3145858.f_6), iParam0);
}

int func_85(int iParam0, int iParam1)
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

struct<4> func_86()
{
	struct<4> Var0;

	return Var0;
}

bool func_87(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_149(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_150(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_151(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_152(&Var49, &Var0, 0))
				{
					if (func_153(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_122(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_122(iVar47);
	}
	return false;
}

struct<4> func_88(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -5.45926E-19f;
	if (!func_121("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_151(&Var2, iVar16, iVar0, iVar1))
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
	func_122(iVar0);
	return Var2;
}

struct<24> func_89(int iParam0, int iParam1)
{
	struct<24> Var0;

	Var0.f_10 = -1;
	func_160(iParam0, iParam1, &Var0);
	return Var0;
}

bool func_90(int iParam0, var uParam1)
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

char* func_91()
{
	return "UNNAMED_HORSE";
}

var func_92(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_161(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_137(&cVar0);
}

bool func_93()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

float func_94(int iParam0, bool bParam1)
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

int func_95(int iParam0)
{
	return func_163(func_162(iParam0));
}

bool func_96(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(iParam0, iParam1);
}

void func_97(int* iParam0, int iParam1)
{
	MISC::SET_BIT(iParam0, iParam1);
}

void func_98(int* iParam0, int iParam1)
{
	MISC::CLEAR_BIT(iParam0, iParam1);
}

void func_99(int iParam0)
{
	int iVar0;
	int iVar1;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_169("MP_PLAYER_PLAYER", 0);
			func_171(func_170(0));
			func_172("PMPLAYER_OVERVIEW");
			func_106(0, 1);
			func_117("PMPLAYER_OVERVIEW_TOOLTIP");
			func_164(1);
			func_165(1);
			func_166(1);
			break;
		case 2:
			func_169("MP_PLAYER_PLAYER", 0);
			func_171(func_170(0));
			func_172("PMPLAYER_RANK");
			func_106(0, 1);
			iVar0 = NETWORK::_NETWORK_GET_XP();
			iVar1 = func_31(Global_1155135[Global_1295619 /*30*/] + 1);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y_XP", iVar0, iVar1), 0, 0, 0, 0, 0, 0, 0, 0);
			func_117("PMPLAYER_RANK_TOOLTIP");
			break;
		case 3:
			func_169("MP_PLAYER_HONOR", 0);
			func_171("PMPLAYER_GENERAL_HONOR_DESC");
			func_172("PMPLAYER_HONOR");
			func_106(0, 1);
			func_117("PMPLAYER_HONOR_TOOLTIP");
			break;
		case 5:
			func_169(func_174(), 0);
			func_171("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_172("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_106(0, 1);
			func_175(0);
			func_117("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 6:
			func_169(func_176(), func_177());
			func_171("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_172("PMPLAYER_CONDITION_TEMPERATURE");
			func_106(0, 1);
			func_178();
			func_117("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 7:
			func_169(func_179(), func_180());
			func_171("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_172("PMPLAYER_CONDITION_TOXICITY");
			func_106(0, 1);
			func_181();
			func_117("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
		case 8:
			func_169("MP_PLAYER_HOSTILITY", 0);
			func_171("PMPLAYER_CONDITION_HOSTILITY_DESC_NET");
			func_172("PMPLAYER_GENERAL_HOSTILITY");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_HOSTILITY_TOOLTIP");
			break;
		case 10:
			if (!func_112(Global_1156096.f_47689.f_63[func_111(-4.241801E+09f) /*2*/].f_1))
			{
				func_169("TRINKET_TONIC_BLENDING", "pausemenu_player_update");
				func_171("CONSUMABLE_TONIC_BLENDING_DESC");
				func_172("CONSUMABLE_TONIC_BLENDING");
				func_106(0, 1);
				func_117("PMPLAYER_GENERAL_TONIC_BLENDING_TOOLTIP_CONSUMED");
			}
			break;
		case 11:
			if (!func_112(Global_1156096.f_47689.f_63[func_111(-2.329539E-22f) /*2*/].f_1))
			{
				func_169("TRINKET_TONIC_HARDY", "pausemenu_player_update");
				func_171("CONSUMABLE_TONIC_HARDY_DESC");
				func_172("CONSUMABLE_TONIC_HARDY");
				func_106(0, 1);
				func_117("PMPLAYER_GENERAL_TONIC_HARDY_TOOLTIP_CONSUMED");
			}
			break;
		case 12:
			func_169("TRINKET_BEAVER_TOOTH", "pausemenu_player");
			func_171("PROVISION_TRINKET_BEAVER_TOOTH_DESC_NET");
			func_172("PROVISION_TRINKET_BEAVER_TOOTH_NET");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 13:
			func_169("TRINKET_BUCK_ANTLER", "pausemenu_player");
			func_171("PROVISION_TRINKET_BUCK_ANTLER_DESC_NET");
			func_172("PROVISION_TRINKET_BUCK_ANTLER_NET");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 14:
			func_169("TRINKET_JAVELINA_TUSK", "pausemenu_player_update");
			func_171("PROVISION_TRINKET_JAVELINA_TUSK_DESC");
			func_172("PROVISION_TRINKET_JAVELINA_TUSK");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 15:
			func_169("TRINKET_RAM_HORN", "pausemenu_player");
			func_171("PROVISION_TRINKET_RAM_HORN_DESC_NET");
			func_172("PROVISION_TRINKET_RAM_HORN_NET");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
		case 16:
			func_169("TRINKET_SNOWY_EGRET", "pausemenu_player_update");
			func_171("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_172("PROVISION_TRINKET_SNOWY_EGRET");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

void func_100(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_169(func_182(1, 0), 0);
			func_171(func_170(1));
			func_172("PMPLAYER_OVERVIEW");
			func_106(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[1 /*102*/].f_30[0]);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[1 /*102*/].f_30[1]);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[1 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[1 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[1 /*102*/].f_75[2]);
			func_173(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Health");
			if (bVar1)
			{
				func_183(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_183(2, "RPG_ARROW_UP", 0);
			}
			func_164(1);
			func_117("");
			break;
		case 2:
			func_169(func_182(1, 0), 0);
			func_171("PMPLAYER_HEALTH_PROGRESSION_DESC");
			func_172("PMPLAYER_PROGRESSION");
			func_106(0, 1);
			func_184(0, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_HEALTH_PROGRESSION_STAT_MAX", "toast_rpg_level_health");
			func_117("");
			break;
		case 4:
			func_169(func_174(), 0);
			func_171("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_172("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_106(0, 1);
			func_175(1);
			func_117("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
		case 5:
			func_169(func_176(), func_177());
			func_171("PMPLAYER_CONDITION_TEMPERATURE_DESC");
			func_172("PMPLAYER_CONDITION_TEMPERATURE");
			func_106(0, 1);
			func_178();
			func_117("PMPLAYER_CONDITION_TEMPERATURE_TOOLTIP");
			break;
		case 6:
			func_169(func_179(), func_180());
			func_171("PMPLAYER_CONDITION_TOXICITY_DESC");
			func_172("PMPLAYER_CONDITION_TOXICITY");
			func_106(0, 1);
			func_181();
			func_117("PMPLAYER_CONDITION_TOXICITY_TOOLTIP_NET");
			break;
	}
}

void func_101(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_169(func_182(2, 0), 0);
			func_171(func_170(2));
			func_172("PMPLAYER_OVERVIEW");
			func_106(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[2 /*102*/].f_30[0]);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[2 /*102*/].f_30[1]);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[2 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[2 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[2 /*102*/].f_75[2]);
			func_173(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Stamina");
			if (bVar1)
			{
				func_183(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_183(2, "RPG_ARROW_UP", 0);
			}
			func_165(1);
			func_117("");
			break;
		case 2:
			func_169(func_182(2, 0), 0);
			func_171("PMPLAYER_STAMINA_PROGRESSION_DESC");
			func_172("PMPLAYER_PROGRESSION");
			func_106(0, 1);
			func_184(1, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_STAMINA_PROGRESSION_STAT_MAX", "toast_rpg_level_stamina");
			func_117("");
			break;
		case 4:
			func_169(func_174(), 0);
			func_171("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_172("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_106(0, 1);
			func_175(2);
			func_117("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_102(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_169(func_182(3, 0), 0);
			func_171(func_170(3));
			func_172("PMPLAYER_OVERVIEW");
			func_106(0, 1);
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[3 /*102*/].f_30[0]);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[3 /*102*/].f_30[1]);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_TIME"), sVar0, 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_14[3 /*102*/].f_30[2]);
			bVar1 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[3 /*102*/].f_39[2]);
			bVar2 = DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1956862.f_5.f_14[3 /*102*/].f_75[2]);
			func_173(2, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), sVar0, 1, 0, bVar1, 0, 0f, 0f, 0f, "RPG_Dead_Eye");
			if (bVar1)
			{
				func_183(2, "RPG_ARROW_DOWN", 0);
			}
			else if (bVar2)
			{
				func_183(2, "RPG_ARROW_UP", 0);
			}
			func_166(1);
			func_117("");
			break;
		case 2:
			func_169(func_182(3, 0), 0);
			func_171("PMPLAYER_DEAD_EYE_PROGRESSION_DESC");
			func_172("PMPLAYER_PROGRESSION");
			func_106(0, 1);
			func_184(2, "PMPLAYER_PROGRESSION_STAT_NEXT", "PMPLAYER_DEAD_EYE_PROGRESSION_STAT_MAX", "toast_rpg_level_deadeye");
			func_117("");
			break;
		case 4:
			func_169(func_174(), 0);
			func_171("PMPLAYER_CONDITION_WEIGHT_DESC");
			func_172("PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT");
			func_106(0, 1);
			func_175(3);
			func_117("PMPLAYER_CONDITION_WEIGHT_TOOLTIP");
			break;
	}
}

void func_103(int iParam0)
{
	char* sVar0;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	switch (iParam0)
	{
		case 1:
			func_169("MP_PLAYER_GENERAL_LIFE_STATS", 0);
			break;
		case 2:
		case 3:
		case 4:
		case 5:
			func_169("MP_PLAYER_GENERAL_FINANCES", 0);
			break;
		case 6:
		case 7:
			func_169("MP_PLAYER_GENERAL_COMBAT", 0);
			break;
		case 8:
		case 9:
			func_169("MP_PLAYER_GENERAL_TRAVEL", 0);
			break;
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
			func_169("MP_PLAYER_GENERAL_CRIME", 0);
			break;
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 23:
		case 24:
			func_169("MP_PLAYER_GENERAL_HUNTING", 0);
			break;
		case 26:
		case 27:
		case 28:
			func_169("MP_PLAYER_GENERAL_CONTENT", 0);
			break;
	}
	sVar0 = DATABINDING::_DATABINDING_READ_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_16);
	func_171(func_170(4));
	func_172(sVar0);
	func_106(0, 1);
}

void func_104(int iParam0)
{
	struct<4> Var0;
	int iVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;
	int iVar14;
	char cVar15[32];
	int iVar19;
	int iVar20;
	struct<4> Var21;
	float fVar25;
	float fVar26;
	float fVar27;
	float fVar28;
	float fVar29;
	float fVar30;
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	bool bVar38;

	func_164(0);
	func_165(0);
	func_166(0);
	func_114(0);
	func_115(0);
	func_167(0);
	func_168(0, "", "");
	Var0 = { func_17(0, 1, 0, -1) };
	iVar4 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	bVar5 = ENTITY::DOES_ENTITY_EXIST(iVar4);
	if (bVar5)
	{
		iVar6 = ENTITY::GET_ENTITY_MODEL(iVar4);
		iVar7 = func_19(iVar6);
	}
	else
	{
		iVar7 = func_185(&Var0, 0);
		iVar6 = func_186(iVar7);
	}
	if (bVar5)
	{
		iVar8 = func_187(iVar4) + 1;
		iVar9 = func_188(iVar4, 0);
		iVar10 = func_189(iVar4) + 1;
		iVar11 = func_188(iVar4, 1);
	}
	else
	{
		iVar8 = func_190(iVar6) + 1;
		iVar9 = func_191(Var0, 0);
		iVar10 = func_192(iVar6) + 1;
		iVar11 = func_191(Var0, 1);
	}
	bVar13 = true;
	switch (iParam0)
	{
		case 1:
			func_169(func_182(5, 0), "pausemenu_player");
			func_171(func_170(5));
			func_172("PMPLAYER_OVERVIEW");
			func_106(0, 1);
			Var21 = { func_17(0, 1, 0, -1) };
			func_193(&Var21, &iVar19, &iVar20);
			iVar19 = BUILTIN::FLOOR((IntToFloat(iVar19) * 1008981770));
			iVar20 = BUILTIN::FLOOR((IntToFloat(iVar20) * 1008981770));
			fVar25 = (IntToFloat(func_194(iVar6) + 1) * 1092616192);
			fVar26 = (fVar25 + (BUILTIN::TO_FLOAT(iVar19) * 1092616192));
			fVar27 = ((fVar25 + (2f * 1092616192)) * 1008981770);
			fVar28 = (IntToFloat(func_195(iVar6) + 1) * 1092616192);
			fVar29 = (fVar28 + (BUILTIN::TO_FLOAT(iVar20) * 1092616192));
			fVar30 = ((fVar28 + (2f * 1092616192)) * 1008981770);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), "", 0, 0, 0, 1, fVar25, fVar26, fVar27, 0);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), "", 0, 0, 0, 1, fVar28, fVar29, fVar30, 0);
			func_173(2, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_HANDLING"), MISC::VAR_STRING(2, func_197(func_196(iVar6))), 0, 0, 0, 0, 0, 0, 0, 0);
			func_114(1);
			func_115(1);
			func_167(1);
			func_198(10, (IntToFloat(iVar8) / 1092616192), BUILTIN::ROUND(((IntToFloat(iVar9) / 1120403456) * 1097859072)));
			func_199(10, (IntToFloat(iVar10) / 1092616192), BUILTIN::ROUND(((IntToFloat(iVar11) / 1120403456) * 1097859072)));
			func_117("PMPLAYER_HORSE_OVERVIEW_TIP");
			break;
		case 2:
			func_169(func_182(5, 0), "pausemenu_player");
			func_171("PMPLAYER_HORSE_PHYSIQUE_DESC");
			func_172("PMPLAYER_HORSE_PHYSIQUE_TITLE");
			func_106(0, 1);
			if (!ENTITY::IS_ENTITY_DEAD(iVar4))
			{
				iVar14 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iVar4, 13);
			}
			else if (func_200(&Var0, 0, &iVar12))
			{
				bVar13 = false;
				switch (iVar12)
				{
					case 0:
						StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
						break;
					case 1:
						StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
						break;
					case 2:
						StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
						break;
					case 3:
						StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
						break;
					case 4:
						StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
						break;
					default:
						bVar13 = true;
						iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar6, 13);
						break;
				}
			}
			else
			{
				iVar14 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iVar6, 13);
			}
			if (bVar13)
			{
				if (iVar14 < 10)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_MALNOURISHED", 32);
				}
				else if (iVar14 < 30)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_THIN", 32);
				}
				else if (iVar14 < 70)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_FIT", 32);
				}
				else if (iVar14 < 90)
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OVERWEIGHT", 32);
				}
				else
				{
					StringCopy(&cVar15, "HORSE_WEIGHT_OBESE", 32);
				}
			}
			iVar31 = 1;
			if (func_201(Var0, -2.485806E+15f, 0, -1) == 1.956641E-20f)
			{
				iVar31 = 2;
			}
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), MISC::VAR_STRING(2, func_203(func_202(iVar6), iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), MISC::VAR_STRING(2, func_92(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(2, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), MISC::VAR_STRING(2, func_204(iVar31)), 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(3, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), MISC::VAR_STRING(2, &cVar15), 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(4, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), MISC::VAR_STRING(2, func_205(iVar7)), 0, 0, 0, 0, 0, 0, 0, 0);
			}
			else
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_TYPE"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_BREED"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(2, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_GENDER"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(3, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_WEIGHT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
				func_173(4, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_COAT"), "", 0, 0, 0, 0, 0, 0, 0, 0);
			}
			func_117("PMPLAYER_HORSE_PHYSIQUE_TIP");
			break;
		case 3:
			func_169("MP_PLAYER_HORSE_BONDING", 0);
			func_171("PMPLAYER_HORSE_BONDING_DESC");
			func_172("PMPLAYER_HORSE_BONDING_TITLE");
			func_106(0, 1);
			if (bVar5)
			{
				iVar32 = func_128(iVar4);
				iVar33 = func_127(iVar4);
			}
			else
			{
				iVar32 = func_130(&Var0, 0);
				iVar33 = func_129(&Var0, 0);
			}
			iVar34 = func_206(iVar6, iVar32);
			iVar35 = func_206(iVar6, iVar32 + 1);
			iVar36 = (iVar33 - iVar34);
			iVar37 = (iVar35 - iVar34);
			bVar38 = true;
			if (iVar32 >= 4)
			{
				bVar38 = false;
			}
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar32, 4), 0, 0, 0, 0, 0, 0, 0, 0);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_PROGRESSION_STAT_NEXT"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar36, iVar37), 0, bVar38, 0, 0, 0, 0, 0, 0);
			func_117("PMPLAYER_HORSE_BONDING_TIP");
			func_167(1);
			break;
		case 4:
			func_169("MP_PLAYER_HORSE_HEALTH", 0);
			func_171("PMPLAYER_HORSE_HEALTH_DESC");
			func_172("PMPLAYER_HORSE_HEALTH_TITLE");
			func_106(0, 1);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar8, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar9), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
			func_207(2, &Var0, 0);
			func_117("PMPLAYER_HORSE_HEALTH_TIP");
			break;
		case 5:
			func_169("MP_PLAYER_HORSE_STAMINA", 0);
			func_171("PMPLAYER_HORSE_STAMINA_DESC");
			func_172("PMPLAYER_HORSE_STAMINA_TITLE");
			func_106(0, 1);
			func_173(0, MISC::VAR_STRING(2, "PMPLAYER_VALUE_LEVEL"), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar10, 10), 0, 0, 0, 0, 0, 0, 0, 0);
			func_173(1, MISC::VAR_STRING(2, "PMPLAYER_CORE_PC"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", iVar11), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
			func_207(2, &Var0, 1);
			func_117("PMPLAYER_HORSE_STAMINA_TIP");
			break;
		case 7:
			func_169("MP_PLAYER_HORSE_CLEANLINESS", 0);
			func_171("PMPLAYER_HORSE_CONDITION_CLEANLINESS_DESC");
			func_172("PMPLAYER_HORSE_CONDITION_CLEANLINESS");
			func_106(0, 1);
			if (func_132(Var0, 0) > 50)
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(MISC::ABSF((1048576000 * 1120403456)))), 1, 0, 1, 0, 0, 0, 0, "RPG_Horse_Health");
				func_183(0, "RPG_ARROW_DOWN", 0);
			}
			func_117("PMPLAYER_HORSE_CONDITION_CLEANLINESS_TIP");
			break;
		case 10:
			func_169("MP_PLAYER_HORSE_SADDLE", 0);
			func_171("PMPLAYER_HORSE_TACK_SADDLE_DESC");
			func_172("PMPLAYER_HORSE_TACK_SADDLE_TITLE");
			func_106(0, 1);
			func_208();
			func_117("PMPLAYER_HORSE_TACK_SADDLE_TIP");
			break;
		case 8:
			func_169("MP_PLAYER_HORSE_TEMPERAMENT", 0);
			func_171("PMPLAYER_HORSE_CONDITION_MOOD_DESC");
			func_172("PMPLAYER_HORSE_CONDITION_MOOD");
			func_106(0, 1);
			func_117("PMPLAYER_HORSE_CONDITION_MOOD_TIP");
			break;
		case 11:
			func_169("MP_PLAYER_HORSE_STIRRUPS", 0);
			func_171("PMPLAYER_HORSE_TACK_STIRRUPS_DESC");
			func_172("PMPLAYER_HORSE_TACK_STIRRUPS_TITLE");
			func_106(0, 1);
			func_209();
			func_117("PMPLAYER_HORSE_TACK_STIRRUPS_TIP");
			break;
		case 12:
			func_169("TRINKET_SNOWY_EGRET", "pausemenu_player");
			func_171("PROVISION_TRINKET_SNOWY_EGRET_DESC");
			func_172("PROVISION_TRINKET_SNOWY_EGRET");
			func_106(0, 1);
			func_117("PMPLAYER_GENERAL_TRINKET_TOOLTIP");
			break;
	}
}

bool func_105()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 1.694023E-10f) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, 1.694023E-10f))
	{
		return false;
	}
	return Global_1960810.f_6;
}

void func_106(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956862.f_5.f_525.f_22);
	}
	if (bParam1)
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(Global_1956862.f_5.f_525.f_21);
	}
}

char* func_107(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL";
		case 1:
			return "PMPLAYER_HEALTH";
		case 2:
			return "PMPLAYER_STAMINA";
		case 3:
			return "PMPLAYER_DEADEYE";
		case 4:
			return "PMPLAYER_GENERAL_STATS";
		case 5:
			return "PMPLAYER_HORSE";
		default:
			break;
	}
	return "";
}

void func_108(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525, sParam0);
}

void func_109(int iParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_525.f_22, iParam0, "player_group_item", Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_15);
}

void func_110(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, char* sParam6, char* sParam7, char* sParam8, bool bParam9)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_16, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_17, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_18, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_19, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_22, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_20, sParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_21, sParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_23, sParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_24, bParam9);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_525.f_22, iParam0, "player_list_item", Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_15);
}

int func_111(int iParam0)
{
	return (func_210(iParam0, 1) - 180);
}

bool func_112(int iParam0)
{
	return iParam0 < Global_1295619.f_16;
}

int func_113(int iParam0)
{
	int iVar0;

	iVar0 = func_111(iParam0);
	return (30 - ((Global_1295619.f_16 + 1800 - Global_1156096.f_47689.f_63[iVar0 /*2*/].f_1) / 60));
}

void func_114(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_9, bParam0);
}

void func_115(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_10, bParam0);
}

int func_116(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(1);
	}
	switch (iParam1)
	{
		case 0:
			return Global_1956862.f_1431.f_50[iParam0];
		case 1:
			return Global_1956862.f_1565.f_2.f_50[iParam0];
		default:
			break;
	}
	return 1;
}

void func_117(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_5, sParam0);
}

void func_118()
{
	struct<2> Var0;
	vector3 vVar2;
	char cVar9[16];
	int iVar11;

	Var0 = { func_44(-1.933029E+37f) };
	STATS::STAT_ID_GET_DATE(&Var0, &vVar2);
	iVar11 = LOCALIZATION::LOCALIZATION_GET_SYSTEM_DATE_TYPE();
	switch (iVar11)
	{
		case 0:
			if (vVar2.z < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 1:
			if (vVar2.y < 10)
			{
				StringCopy(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			StringConCat(&cVar9, "/", 16);
			StringIntConCat(&cVar9, vVar2.x, 16);
			break;
		case 2:
			IntToString(&cVar9, vVar2.x, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.y < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.y, 16);
			StringConCat(&cVar9, "/", 16);
			if (vVar2.z < 10)
			{
				StringConCat(&cVar9, "0", 16);
			}
			StringIntConCat(&cVar9, vVar2.z, 16);
			break;
	}
	func_110(1, "PMPLAYER_CREATED_DATE", &cVar9, 1, 0, 0, 0, 0, 0, 0);
}

float func_119(float fParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_44(fParam0) };
	STATS::STAT_ID_GET_FLOAT(&Var1, &uVar0);
	return uVar0;
}

char* func_120(float fParam0, int iParam1)
{
	char* sVar0;

	sVar0 = MISC::_GET_STRING_FROM_FLOAT(fParam0, iParam1);
	return func_211(sVar0, 4.808429E-35f);
}

bool func_121(char* sParam0, var uParam1, int* iParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_212(bParam4), sParam0, iParam3, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_122(int iParam0)
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

var func_123(float fParam0)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_124(fParam0) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

struct<2> func_124(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

void func_125(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_126(float fParam0, float fParam1)
{
	var uVar0;
	struct<2> Var1;

	Var1 = { func_213(fParam0, fParam1) };
	STATS::STAT_ID_GET_INT(&Var1, &uVar0);
	return uVar0;
}

int func_127(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_POINTS(iParam0, 7);
	return iVar0;
}

int func_128(int iParam0)
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

int func_129(int iParam0, int iParam1)
{
	if (!func_214(iParam0, iParam1, 1))
	{
	}
	return Global_1903834.f_23;
}

int func_130(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_214(iParam0, iParam1, 1))
	{
	}
	if (!func_215(&Global_1903834))
	{
		return 0;
	}
	iVar0 = func_216(Global_1903834.f_11, Global_1903834.f_23);
	return iVar0;
}

int func_131(int iParam0, int iParam1)
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
	if (func_217(iParam1, &iVar0))
	{
		return ATTRIBUTE::GET_ATTRIBUTE_BASE_RANK(iParam0, iVar0);
	}
	return 0;
}

int func_132(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
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
	if (!func_218(&uParam0))
	{
		return 0;
	}
	return 0;
}

float func_133(int iParam0)
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

bool func_134(int iParam0, var uParam1)
{
	struct<4> Var0;

	if (!func_219(3.210799E-08f, iParam0))
	{
		return false;
	}
	Var0 = { func_220() };
	*uParam1 = func_201(Var0, iParam0, 0, -1);
	if (!func_221(*uParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_135(bool bParam0, var uParam1, int iParam2, int iParam3)
{
	int iVar0;
	struct<19> Var1;

	Var1.f_2 = 5;
	Var1.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var1))
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (iParam2 != 0 && Var1.f_18[iVar0 /*2*/].f_1 != iParam2)
			{
				Jump @117; //curOff = 67
			}
			else if (iParam3 != 0 && Var1.f_18[iVar0 /*2*/] != iParam3)
			{
			}
			else
			{
				*uParam1 = { Var1.f_18[iVar0 /*2*/] };
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

char* func_136(bool bParam0)
{
	bool bVar0;

	if (!func_221(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_222(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

char[] func_137(char[4] cParam0)
{
	return cParam0;
}

void func_138(float fParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887.f_300 = fParam0;
	if (iParam1 != 0)
	{
		func_223(iParam1);
	}
	if (iParam2 != 0)
	{
		func_223(iParam2);
	}
	if (iParam3 != 0)
	{
		func_223(iParam3);
	}
	if (iParam4 != 0)
	{
		func_223(iParam4);
	}
	if (iParam5 != 0)
	{
		func_223(iParam5);
	}
	if (iParam6 != 0)
	{
		func_223(iParam6);
	}
	if (iParam7 != 0)
	{
		func_223(iParam7);
	}
	if (iParam8 != 0)
	{
		func_223(iParam8);
	}
	if (iParam9 != 0)
	{
		func_223(iParam9);
	}
	if (iParam10 != 0)
	{
		func_223(iParam10);
	}
	func_224();
}

void func_139(var uParam0)
{
}

void func_140(var uParam0)
{
}

void func_141(var uParam0)
{
	func_50(uParam0, 1, 1);
}

void func_142(var uParam0)
{
}

void func_143(var uParam0)
{
	if (func_49(uParam0, 0))
	{
		func_50(uParam0, 1, 1);
	}
	if (func_49(uParam0, 1))
	{
		func_50(uParam0, 1, 0);
		func_226(uParam0, 803.8992f, func_225());
		func_226(uParam0, -8.738885E+25f, func_227());
	}
}

void func_144(var uParam0)
{
	func_228(uParam0);
}

int func_145(var uParam0)
{
	if (!func_229(uParam0))
	{
		return 0;
	}
	return 1;
}

int func_146(var uParam0)
{
	func_230(uParam0);
	return 1;
}

void func_147(var uParam0)
{
	func_231(uParam0);
}

void func_148(var uParam0)
{
}

struct<18> func_149(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam0 != 0)
	{
		Var0 = iParam0;
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

bool func_150(var uParam0, var uParam1, int* iParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_212(bParam3), uParam0, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_151(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_152(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_212(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_153(var uParam0, int iParam1)
{
	return func_232(*uParam0, iParam1);
}

int func_154(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*65*/].f_1.f_16.f_2;
	fVar1 = func_233(iVar0);
	iVar2 = func_234(iVar0, fVar1);
	return iVar2;
}

struct<2> func_155()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

int func_156(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return 1;
	}
	if (func_5(Global_1051268) && !func_235(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return 1;
	}
	if (iParam2 != 0 && func_236(iParam2))
	{
		return 1;
	}
	if (iParam3 != 0 && func_237(iParam3, 255))
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
	if (func_238())
	{
		Global_1072759.f_28307 = 7;
		return 1;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_5(Global_1051268))
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

struct<2> func_157(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_158(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_159(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_160(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_239(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_240(iParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_241(iParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

char* func_161(int iParam0)
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

bool func_162(int iParam0)
{
	return func_242(&(Global_1956862.f_1565), iParam0, 1);
}

int func_163(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

void func_164(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_6, bParam0);
}

void func_165(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_7, bParam0);
}

void func_166(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_8, bParam0);
}

void func_167(bool bParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_11, bParam0);
}

void func_168(bool bParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_18, bParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_19, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_20, sParam2);
}

void func_169(char* sParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = func_243(0);
	}
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_3, sParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_4, sParam1);
}

char* func_170(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PMPLAYER_GENERAL_DESC_NET";
		case 1:
			return "PMPLAYER_HEALTH_DESC";
		case 2:
			return "PMPLAYER_STAMINA_DESC";
		case 3:
			return "PMPLAYER_DEADEYE_DESC";
		case 4:
			return "PMPLAYER_STATS_DESC";
		case 5:
			return "PMPLAYER_HORSE_DESC";
		default:
			break;
	}
	return "";
}

void func_171(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_2, sParam0);
}

void func_172(char* sParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_1, sParam0);
}

void func_173(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, float fParam7, float fParam8, float fParam9, char* sParam10)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_4, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_5, sParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_1, bParam3);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_2, sParam10);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_6, bParam4);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_7, bParam5);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_11, bParam6);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_8, fParam7);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_9, fParam8);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_10, fParam9);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_12, false);
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1956862.f_5.f_525.f_21, iParam0, "player_attribute_item", Global_1956862.f_5.f_525.f_24[iParam0 /*25*/]);
}

char* func_174()
{
	return "MP_PLAYER_WEIGHT";
}

void func_175(int iParam0)
{
	float fVar0;
	float fVar1;
	float fVar2;

	switch (iParam0)
	{
		case 0:
			fVar0 = (Global_1156096.f_2169[93 /*205*/].f_201 * Global_1156096.f_2169[93 /*205*/].f_202);
			fVar1 = (Global_1156096.f_2169[94 /*205*/].f_201 * Global_1156096.f_2169[94 /*205*/].f_202);
			if (fVar0 == 0f)
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_173(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
			}
			else if (fVar0 > 0f)
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar0 * 1120403456)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_183(0, "RPG_ARROW_DOWN", 0);
				func_173(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar1 * 1120403456)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
				func_183(1, "RPG_ARROW_UP", 0);
			}
			else
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_STAMINA_DRAIN"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_VALUE", (fVar0 * 1120403456)), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Stamina");
				func_183(0, "RPG_ARROW_UP", 0);
				func_173(1, MISC::VAR_STRING(2, "PMPLAYER_DAMAGE_ABSORPTION"), MISC::VAR_STRING(6, "PMPLAYER_CORE_PC_PLUS_VALUE", (fVar1 * 1120403456)), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
				func_183(1, "RPG_ARROW_DOWN", 0);
			}
			break;
		case 1:
		case 2:
		case 3:
			if (Global_1956862.f_1431.f_103 == 0)
			{
				fVar2 = 1041865114; /* Float: 0.15f */
			}
			else if (Global_1956862.f_1431.f_103 == 10 || Global_1956862.f_1431.f_103 == -10)
			{
				fVar2 = -1098907648; /* Float: -0.25f */
			}
			else
			{
				fVar2 = 0f;
			}
			if (fVar2 < 0f)
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((1120403456 * fVar2)))), 1, 0, 1, 0, 0f, 0f, 0f, func_244(iParam0));
				func_183(0, "RPG_ARROW_DOWN", 0);
			}
			else if (fVar2 == 0f)
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", MISC::ABSI(BUILTIN::ROUND((1120403456 * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_244(iParam0));
			}
			else
			{
				func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", MISC::ABSI(BUILTIN::ROUND((1120403456 * fVar2)))), 1, 0, 0, 0, 0f, 0f, 0f, func_244(iParam0));
				func_183(0, "RPG_ARROW_UP", 0);
			}
			break;
	}
}

char* func_176()
{
	return "MP_PLAYER_TEMPERATURE";
}

char* func_177()
{
	return "pm_player_mp";
}

void func_178()
{
	if (func_27() || func_28())
	{
		func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_183(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_179()
{
	return "MP_PLAYER_TOXICITY";
}

char* func_180()
{
	return "pm_player_mp";
}

void func_181()
{
	if (func_42())
	{
		func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 900), 1, 0, 1, 0, 0f, 0f, 0f, "RPG_Health");
		func_183(0, "RPG_ARROW_DOWN", 0);
	}
	else
	{
		func_173(0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", 0), 1, 0, 0, 0, 0f, 0f, 0f, "RPG_Health");
	}
}

char* func_182(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return "MP_PLAYER_PLAYER";
		case 1:
			return "MP_PLAYER_HEALTH";
		case 2:
			return "MP_PLAYER_STAMINA";
		case 3:
			return "MP_PLAYER_DEAD_EYE";
		case 4:
			return "MP_PLAYER_GENERAL_STATS";
		case 5:
			return "HORSE_GENERAL";
		default:
			break;
	}
	return "";
}

void func_183(int iParam0, char* sParam1, char* sParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_13, sParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_14, sParam2);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_14, "pausemenu_player_update");
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1956862.f_5.f_525.f_24[iParam0 /*25*/].f_12, true);
}

void func_184(int iParam0, char* sParam1, char* sParam2, char* sParam3)
{
	float fVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char* sVar6;

	fVar0 = func_245(iParam0, 2);
	iVar1 = func_246(fVar0);
	fVar2 = BUILTIN::TO_FLOAT(func_247(iVar1 + 1));
	iVar3 = iVar1 + 5;
	iVar4 = 5 + 5;
	if (iVar3 < iVar4)
	{
		func_173(iVar5, MISC::VAR_STRING(2, sParam1), MISC::VAR_STRING(18, "PMPLAYER_VALUE_X_OF_Y", BUILTIN::FLOOR(fVar0), fVar2), 0, 0, 0, 0, 0, 0, 0, 0);
		iVar5++;
	}
	func_173(iVar5, MISC::VAR_STRING(2, sParam2), MISC::VAR_STRING(2, "PMPLAYER_VALUE_X_OF_Y", iVar3, iVar4), 0, 0, 0, 0, 0, 0, 0, 0);
	sVar6 = func_249(func_248(iVar3, 0));
	func_168(1, sVar6, sParam3);
}

int func_185(int iParam0, int iParam1)
{
	func_214(iParam0, iParam1, 0);
	return Global_1903834.f_22;
}

int func_186(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BREED_AMERICANPAINT_OVERO"):
			return -5.097953E+22f;
		case joaat("BREED_AMERICANPAINT_TOBIANO"):
			return -3.746147E-22f;
		case joaat("BREED_AMERICANPAINT_SPLASHEDWHITE"):
			return 1.326867E+26f;
		case joaat("BREED_AMERICANPAINT_GREYOVERO"):
			return -2.39711E-32f;
		case joaat("BREED_AMERICANSTANDARDBRED_BLACK"):
			return -9.425214E-07f;
		case joaat("BREED_AMERICANSTANDARDBRED_BUCKSKIN"):
			return -2.620005E+27f;
		case joaat("BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE"):
			return 5.898036E-37f;
		case joaat("BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN"):
			return -2.558989E+22f;
		case joaat("BREED_ANDALUSIAN_DARKBAY"):
			return -7.549143E+22f;
		case joaat("BREED_ANDALUSIAN_ROSEGRAY"):
			return 3.655798E-12f;
		case joaat("BREED_ANDALUSIAN_PERLINO"):
			return 1.279023E-13f;
		case joaat("BREED_APPALOOSA_BLANKET"):
			return 1.639308E+38f;
		case joaat("BREED_APPALOOSA_LEOPARDBLANKET"):
			return -1.144987E-17f;
		case joaat("BREED_APPALOOSA_BROWNLEOPARD"):
			return -83.2372f;
		case joaat("BREED_APPALOOSA_LEOPARD"):
			return -0.007998829f;
		case joaat("BREED_ARABIAN_BLACK"):
			return -1.291859E-33f;
		case joaat("BREED_ARABIAN_ROSEGREYBAY"):
			return -2.300089E+24f;
		case joaat("BREED_ARABIAN_WHITE"):
			return -446880f;
		case joaat("BREED_ARDENNES_BAYROAN"):
			return -2.124561E-17f;
		case joaat("BREED_ARDENNES_STRAWBERRYROAN"):
			return -1.147106E+16f;
		case joaat("BREED_ARDENNES_IRONGREYROAN"):
			return -1.396668E-34f;
		case joaat("BREED_BELGIAN_BLONDCHESTNUT"):
			return -5.97347E+17f;
		case joaat("BREED_BELGIAN_MEALYCHESTNUT"):
			return 2.637521E-05f;
		case joaat("BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN"):
			return 8.783687E+18f;
		case joaat("BREED_DUTCHWARMBLOOD_SEALBROWN"):
			return 5.064624E-08f;
		case joaat("BREED_DUTCHWARMBLOOD_CHOCOLATEROAN"):
			return 2.771022E-14f;
		case joaat("BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT"):
			return 9.622837E+22f;
		case joaat("BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO"):
			return -1.109266E+36f;
		case joaat("BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY"):
			return -2.758318E+09f;
		case joaat("BREED_KENTUCKYSADDLE_BLACK"):
			return -9.656978E+29f;
		case joaat("BREED_KENTUCKYSADDLE_CHESTNUTPINTO"):
			return -2.852828E-07f;
		case joaat("BREED_KENTUCKYSADDLE_GREY"):
			return 2.892364E+34f;
		case joaat("BREED_KENTUCKYSADDLE_SILVERBAY"):
			return 4.583068E+22f;
		case joaat("BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE"):
			return -4.666592E-10f;
		case joaat("BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO"):
			return -0.0027031f;
		case joaat("BREED_MORGAN_BAY"):
			return 4.531001E+34f;
		case joaat("BREED_MORGAN_BAYROAN"):
			return 875710.2f;
		case joaat("BREED_MORGAN_FLAXENCHESTNUT"):
			return -38.67923f;
		case joaat("BREED_MORGAN_PALOMINO"):
			return 1.87185E-35f;
		case joaat("BREED_MUSTANG_GRULLODUN"):
			return -0.0003130038f;
		case joaat("BREED_MUSTANG_WILDBAY"):
			return 6.844282E+37f;
		case joaat("BREED_MUSTANG_TIGERSTRIPEDBAY"):
			return 2.302906E-37f;
		case joaat("BREED_NOKOTA_BLUEROAN"):
			return NaNf;
		case joaat("BREED_NOKOTA_WHITEROAN"):
			return -3.766959E-07f;
		case joaat("BREED_NOKOTA_REVERSEDAPPLEROAN"):
			return 4.229888E-35f;
		case joaat("BREED_SHIRE_DARKBAY"):
			return 1.08126f;
		case joaat("BREED_SHIRE_LIGHTGREY"):
			return 1.215591E-37f;
		case joaat("BREED_SUFFOLKPUNCH_SORREL"):
			return -2.825268E-19f;
		case joaat("BREED_SUFFOLKPUNCH_REDCHESTNUT"):
			return -1.138134E-22f;
		case joaat("BREED_TENNESSEEWALKER_BLACKRABICANO"):
			return 1.794719f;
		case joaat("BREED_TENNESSEEWALKER_CHESTNUT"):
			return 2.175367f;
		case joaat("BREED_TENNESSEEWALKER_DAPPLEBAY"):
			return -5.852224E+35f;
		case joaat("BREED_TENNESSEEWALKER_REDROAN"):
			return -5.631653E+12f;
		case joaat("BREED_TENNESSEEWALKER_FLAXENROAN"):
			return -1.002871E-21f;
		case joaat("BREED_THOROUGHBRED_BLOODBAY"):
			return -6.28309E-31f;
		case joaat("BREED_THOROUGHBRED_DAPPLEGREY"):
			return 3.818469E+28f;
		case joaat("BREED_THOROUGHBRED_BRINDLE"):
			return -9.413384E+19f;
		case joaat("BREED_THOROUGHBRED_BLACKCHESTNUT"):
			return 7.69103E+37f;
		case joaat("BREED_THOROUGHBRED_REVERSEDAPPLEBLACK"):
			return 1.245079E-06f;
		case joaat("BREED_TURKOMAN_DARKBAY"):
			return 297.9659f;
		case joaat("BREED_TURKOMAN_GOLD"):
			return 7.16707E+22f;
		case joaat("BREED_TURKOMAN_SILVER"):
			return -1.915543E-19f;
		case joaat("BREED_BRETON_REDROAN"):
			return -2.124406E+14f;
		case joaat("BREED_BRETON_SORREL"):
			return 7.668323E-27f;
		case joaat("BREED_BRETON_GRULLODUN"):
			return -4.300648E+16f;
		case joaat("BREED_BRETON_SEALBROWN"):
			return 1.589431E+17f;
		case joaat("BREED_BRETON_MEALYDAPPLEBAY"):
			return -1.36675E-13f;
		case joaat("BREED_BRETON_STEELGREY"):
			return -1.637471E-23f;
		case joaat("BREED_CRIOLLO_BLUEROANOVERO"):
			return 1.980355E+27f;
		case joaat("BREED_CRIOLLO_DUN"):
			return 438.0526f;
		case joaat("BREED_CRIOLLO_BAYBRINDLE"):
			return -1.277166E-23f;
		case joaat("BREED_CRIOLLO_SORRELOVERO"):
			return 9.661226E-21f;
		case joaat("BREED_CRIOLLO_BAYFRAMEOVERO"):
			return 1.963435E-11f;
		case joaat("BREED_CRIOLLO_MARBLESABINO"):
			return NaNf;
		case -952011226:
			return -7.215119E+24f;
		case -356470463:
			return 26.79346f;
		case -1750687713:
			return -0.006876003f;
		case -272192064:
			return -7.496014E+23f;
		case 1935859332:
			return -2.64634E-14f;
		case -1898310680:
			return 5.499588E+14f;
		case joaat("BREED_KLADRUBER_BLACK"):
			return -7.174751E-20f;
		case joaat("BREED_KLADRUBER_WHITE"):
			return -1.880936E+34f;
		case joaat("BREED_KLADRUBER_CREMELLO"):
			return -2.207235E-29f;
		case joaat("BREED_KLADRUBER_GREY"):
			return -36922.69f;
		case joaat("BREED_KLADRUBER_DAPPLEROSEGREY"):
			return -4.208984E+15f;
		case joaat("BREED_KLADRUBER_SILVER"):
			return -3.840124E-28f;
		case joaat("BREED_NORFOLKROADSTER_BLACK"):
			return 0.008685715f;
		case joaat("BREED_NORFOLKROADSTER_SPECKLEDGREY"):
			return 0.05333715f;
		case joaat("BREED_NORFOLKROADSTER_PIEBALDROAN"):
			return -5.249799E-13f;
		case joaat("BREED_NORFOLKROADSTER_ROSEGREY"):
			return -1.131128E+31f;
		case joaat("BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN"):
			return -1.753697E+33f;
		case joaat("BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR"):
			return 1.046779E+10f;
		case 1323533737:
			return 3.704112E+11f;
		case -1159865523:
			return 9.37371E-21f;
		case 1854655826:
			return 8.270925E+34f;
		case 1416158449:
			return 1.583498E+19f;
		case 577120648:
			return 3.126511E+29f;
		case 1147338535:
			return 6.737911E+20f;
		case -1712303883:
			return 1696.447f;
		case 406093506:
			return 2.84276E-36f;
		case 956799610:
			return -7.855008E-34f;
		case 139264677:
			return 7.699082E-14f;
		case -11223392:
			return 1.360424E+16f;
		case 1133580901:
			return 1.176967E-13f;
		case joaat("BREED_DONKEY"):
			return 2.470416E+25f;
		case joaat("BREED_MULE"):
			return -5.000993E-06f;
		case joaat("BREED_MULE_PAINTED"):
			return 1.259477E-17f;
		case joaat("BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN"):
			return 2.361251E+29f;
		case joaat("BREED_APPALOOSA_BLACKSNOWFLAKE"):
			return -92.40316f;
		case joaat("BREED_ARABIAN_GREY"):
			return 6.26105E-36f;
		case joaat("BREED_ARABIAN_REDCHESTNUT"):
			return 3.166397E+15f;
		case joaat("BREED_HUNGARIANHALFBRED_LIVERCHESTNUT"):
			return -5.929735E-30f;
		case joaat("BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE"):
			return -5.623494E+23f;
		case joaat("BREED_MUSTANG_GOLDENDUN"):
			return 9.314159E-22f;
		case joaat("BREED_MURFREEBROOD_MANGE_01"):
			return 5.199128E-06f;
		case joaat("BREED_MURFREEBROOD_MANGE_02"):
			return -1026460f;
		case joaat("BREED_MURFREEBROOD_MANGE_03"):
			return -2.310884E+17f;
		case joaat("BREED_MANGY_BACKUP"):
			return 6.51589E-10f;
		default:
			break;
	}
	return 0;
}

int func_187(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_250());
	return iVar0;
}

int func_188(int iParam0, int iParam1)
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
	if (func_251(iParam1, &iVar0))
	{
		return ATTRIBUTE::_GET_ATTRIBUTE_CORE_VALUE(iParam0, iVar0);
	}
	return 0;
}

int func_189(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(iParam0, func_252());
	return iVar0;
}

int func_190(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_250());
	return iVar0;
}

int func_191(var uParam0, int iParam1, var uParam2, var uParam3, int iParam4)
{
	int iVar0;

	if (!func_253(&uParam0, &iVar0))
	{
		return 0;
	}
	return Global_17418.f_55.f_61.f_41[iVar0 /*56*/].f_29[iParam4 /*5*/];
}

int func_192(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_252());
	return iVar0;
}

void func_193(var uParam0, var uParam1, var uParam2)
{
	struct<4> Var0;
	struct<2> Var14;
	vector3 vVar36;
	int iVar43;
	bool bVar44;
	struct<2> Var45;
	vector3 vVar67;
	int iVar74;

	if (func_254(uParam0))
	{
		Var0.f_9 = -5.45926E-19f;
		if (func_255(*uParam0, -8.769617E+23f, &Var0, 1, -1))
		{
			if (func_221(Var0.f_4, 0))
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
			bVar44 = func_201(Var0, 0.001620535f, 0, -1);
			if (func_221(bVar44, 0))
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

int func_194(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_256());
	return iVar0;
}

int func_195(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_257());
	return iVar0;
}

int func_196(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return -1;
	}
	iVar0 = func_258(iParam0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return 0;
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return 2;
		case 6:
		case 7:
		case 8:
		case 9:
			return 3;
	}
	return -1;
}

char* func_197(int iParam0)
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

void func_198(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956862.f_5.f_525.f_12, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956862.f_5.f_525.f_13, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956862.f_5.f_525.f_14, iParam2);
}

void func_199(int iParam0, float fParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956862.f_5.f_525.f_15, iParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1956862.f_5.f_525.f_16, fParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1956862.f_5.f_525.f_17, iParam2);
}

bool func_200(int iParam0, int iParam1, var uParam2)
{
	if (!func_214(iParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_215(&Global_1903834))
	{
		return false;
	}
	return func_259(&Global_1903834, uParam2);
}

int func_201(var uParam0, float fParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_260(&uParam0, iParam4, bParam5, iParam6);
}

int func_202(int iParam0)
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

char* func_203(int iParam0, int iParam1)
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
			return func_261(iParam1);
		case joaat("HORSE_CLASS_SUPERIOR"):
			return "HORSE_CLASS_SUPERIOR";
		case joaat("HORSE_CLASS_OTHER"):
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_204(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "HORSE_GENDER_MALE";
		case 2:
			return "HORSE_GENDER_FEMALE";
	}
	return "HORSE_GENDER_UNKNOWN";
}

char* func_205(int iParam0)
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

int func_206(int iParam0, int iParam1)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		iParam0 = 2.175367f;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iParam0, 7, iParam1);
	return iVar0;
}

void func_207(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	char* sVar1;

	fVar0 = (func_262(*uParam1, iParam2) * 1120403456);
	sVar1 = func_263(0 == iParam2, "RPG_Horse_Health", "RPG_Horse_Stamina");
	if (fVar0 > 0f)
	{
		func_173(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 1, 0, 0, 0, 0, sVar1);
		func_183(iParam0, "RPG_ARROW_DOWN", 0);
	}
	else if (fVar0 == 0f)
	{
		func_173(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
	}
	else
	{
		func_173(iParam0, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_VALUE", BUILTIN::ROUND(fVar0)), 1, 0, 0, 0, 0, 0, 0, sVar1);
		func_183(iParam0, "RPG_ARROW_UP", 0);
	}
}

void func_208()
{
	bool bVar0;
	struct<4> Var1;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;
	struct<6> Var32;
	int iVar39;

	Var1 = { func_17(0, 1, 0, -1) };
	bVar0 = func_264(Var1, -8.769617E+23f, 0, 0);
	if (!func_221(bVar0, 0))
	{
		return;
	}
	Var10.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar0, &Var10);
	iVar39 = 0;
	while (iVar39 < Var10)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var10.f_1[iVar39], &Var32);
		switch (Var32.f_1)
		{
			case 2086291460:
				iVar8 = (iVar8 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 1008981770)));
				break;
			case -1620444701:
				iVar9 = (iVar9 + BUILTIN::FLOOR((IntToFloat(Var32.f_2) * 1008981770)));
				break;
			case 1605773431:
				fVar5 = Var32.f_5;
				break;
			case 1167068375:
				fVar6 = Var32.f_5;
				break;
			case -225223329:
				fVar7 = Var32.f_5;
				break;
		}
		iVar39++;
	}
	func_173(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar8), 0, 0, 0, 0, 0, 0, 0, 0);
	func_173(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar9), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar5 >= 0f)
	{
		func_173(2, MISC::VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar5)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_173(2, MISC::VAR_STRING(2, "PMPLAYER_REGEN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar5))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	if (fVar6 <= 0f)
	{
		func_173(3, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar6)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		if (fVar6 < 0f)
		{
			func_183(3, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_173(3, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar6))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
		func_183(3, "RPG_ARROW_UP", 0);
	}
	if (fVar7 <= 0f)
	{
		func_173(4, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar7)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		if (fVar7 < 0f)
		{
			func_183(4, "RPG_ARROW_DOWN", 0);
		}
	}
	else
	{
		func_173(4, MISC::VAR_STRING(2, "PMPLAYER_CORE_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar7))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Health");
		func_183(4, "RPG_ARROW_UP", 0);
	}
}

void func_209()
{
	bool bVar0;
	bool bVar1;
	struct<4> Var2;
	struct<4> Var6;
	int iVar10;
	int iVar11;
	float fVar12;
	struct<2> Var13;
	struct<6> Var35;
	int iVar42;

	Var2 = { func_17(0, 1, 0, -1) };
	bVar1 = func_264(Var2, -8.769617E+23f, 0, 0);
	if (!func_221(bVar1, 0))
	{
		return;
	}
	Var6 = { func_265(bVar1, Var2, -8.769617E+23f, 0) };
	bVar0 = func_201(Var6, 0.001620535f, 0, -1);
	if (!func_221(bVar0, 0))
	{
		return;
	}
	Var13.f_1 = 20;
	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar0, &Var13);
	iVar42 = 0;
	while (iVar42 < Var13)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var13.f_1[iVar42], &Var35);
		switch (Var35.f_1)
		{
			case 2086291460:
				iVar10 = (iVar10 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 1008981770)));
				break;
			case -1620444701:
				iVar11 = (iVar11 + BUILTIN::FLOOR((IntToFloat(Var35.f_2) * 1008981770)));
				break;
			case -845587290:
				fVar12 = (fVar12 + Var35.f_5);
				break;
		}
		iVar42++;
	}
	func_173(0, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_ACCELERATION"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar10), 0, 0, 0, 0, 0, 0, 0, 0);
	func_173(1, MISC::VAR_STRING(2, "PMPLAYER_HORSE_PHYSIQUE_STAT_SPEED"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PLUS_VALUE", iVar11), 0, 0, 0, 0, 0, 0, 0, 0);
	if (fVar12 <= 0f)
	{
		func_173(2, MISC::VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_PLUS_VALUE", BUILTIN::ROUND(fVar12)), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
	else
	{
		func_173(2, MISC::VAR_STRING(2, "PMPLAYER_DRAIN_RATE"), MISC::VAR_STRING(2, "PMPLAYER_CORE_PC_MINUS_VALUE", BUILTIN::ROUND(MISC::ABSF(fVar12))), 1, 0, 0, 0, 0, 0, 0, "RPG_Horse_Stamina");
	}
}

int func_210(int iParam0, int iParam1)
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

char* func_211(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_266(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_212(bool bParam0)
{
	if (func_267() == -1)
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

struct<2> func_213(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

bool func_214(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_239(&Global_1903834);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_268(iParam0, &Global_1903834, &(Global_1903834.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_269(iParam0, &Global_1903834, &(Global_1903834.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_215(int iParam0)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

int func_216(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = iVar0 + 1;
		iVar2 = func_206(iParam0, iVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

bool func_217(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 16;
			break;
		case 1:
			*uParam1 = 8;
			break;
		case 2:
			*uParam1 = 13;
			break;
		default:
			return false;
	}
	return true;
}

bool func_218(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_86() };
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
			func_270(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
			Global_17418.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_271(Global_17418.f_55.f_61.f_41[iVar19 /*56*/], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_270(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
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

bool func_219(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_272(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_273(bParam0);
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

struct<4> func_220()
{
	struct<4> Var0;

	Var0 = { func_274(0) };
	return func_265(3.210799E-08f, Var0, -9.692375E+30f, 0);
}

bool func_221(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_222(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_221(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_275(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_223(int iParam0)
{
	func_277(&(Global_1572887.f_300.f_1), func_276(iParam0), 3);
}

void func_224()
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 32)
	{
		if (func_278(iVar0))
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

bool func_225()
{
	if (func_279())
	{
		return true;
	}
	return false;
}

int func_226(var uParam0, int iParam1, bool bParam2)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_198.f_2[func_280(iParam1, 1)]))
	{
		return 0;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(uParam0->f_198.f_2[func_280(iParam1, 1)]) == bParam2)
	{
		return 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_198.f_2[func_280(iParam1, 1)], bParam2);
	return 1;
}

bool func_227()
{
	if (func_281())
	{
		return true;
	}
	if (SOCIALCLUBFEED::SC_FEED_HUB_HAS_NEW_DATA())
	{
		return true;
	}
	return false;
}

void func_228(var uParam0)
{
	struct<40> Var0;

	Var0 = { func_282(0) };
	func_283(uParam0, &Var0, Var0.f_16);
	func_284(uParam0, MISC::VAR_STRING(2, &(Var0.f_17)));
	func_285(uParam0, Var0.f_33, Var0.f_34);
	func_286(uParam0, Var0.f_35, Var0.f_36);
	func_287(uParam0, Var0.f_37);
	func_288(uParam0, Var0.f_39);
	func_289(uParam0, Var0.f_38);
}

bool func_229(var uParam0)
{
	uParam0->f_198[0] = DATABINDING::_0xD7DB94AB78E8EBE4("", 7.417066E+11f);
	uParam0->f_198.f_2[0] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], 803.8992f, func_225());
	uParam0->f_198.f_2[1] = DATABINDING::_DATABINDING_ADD_DATA_BOOL_BY_HASH(uParam0->f_198[0], -8.738885E+25f, func_227());
	return true;
}

void func_230(var uParam0)
{
	uParam0->f_203 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTexture", 0);
	uParam0->f_203.f_1 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileTextureDictionary", 0);
	uParam0->f_203.f_2 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTexture", 0);
	uParam0->f_203.f_3 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsTileOverlayTextureDictionary", 0);
	uParam0->f_203.f_4 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTileOverlayVisible", false);
	uParam0->f_203.f_5 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTileHasVip", false);
	uParam0->f_203.f_6 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "toolTip", "");
	uParam0->f_203.f_7 = DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_187, "progressRewardsRankText", "");
	uParam0->f_203.f_8 = DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_187, "progressRewardsRankTextColor", 27.64779f);
	uParam0->f_203.f_9 = DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_187, "progressRewardsTilePromptEnabled", true);
}

void func_231(var uParam0)
{
	DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_198[0]);
}

bool func_232(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

float func_233(int iParam0)
{
	if (iParam0 == 9.256025E-25f || iParam0 == -218565.1f)
	{
		return 1.256553E-21f;
	}
	return Global_524288.f_39632;
}

int func_234(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_290(iParam1))
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

bool func_235(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_236(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_237(int iParam0, int iParam1)
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

bool func_238()
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
	if (!func_5(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_239(var uParam0)
{
	func_291(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_86() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_240(int iParam0, var uParam1)
{
	func_292(&(Global_1903834.f_24));
	if (!func_268(iParam0, uParam1, &(Global_1903834.f_24), 0))
	{
		return false;
	}
	return true;
}

bool func_241(int iParam0, var uParam1)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_269(iParam0, uParam1, &Var0, 0))
	{
		return false;
	}
	return true;
}

bool func_242(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

char* func_243(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "pm_player_mp";
		case 1:
			return "pm_player_mp";
		case 2:
			return "pm_player_mp";
		case 3:
			return "pm_player_mp";
		case 4:
			return "pm_player_mp";
		case 5:
			return "pausemenu_player";
		default:
			break;
	}
	return "";
}

char* func_244(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_Health";
		case 2:
			return "RPG_Stamina";
		case 3:
			return "RPG_Dead_Eye";
		default:
			break;
	}
	return "";
}

float func_245(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_95(1);
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

int func_246(float fParam0)
{
	if (fParam0 < IntToFloat(0))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(300))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(700))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(1500))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(3100))
	{
		return 4;
	}
	return 5;
}

int func_247(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		case 0:
			return 0;
		case 1:
			return 100;
		case 2:
			return 300;
		case 3:
			return 700;
		case 4:
			return 1500;
		case 5:
			return 3100;
		default:
			break;
	}
	return 100;
}

struct<4> func_248(int iParam0, int iParam1)
{
	char cVar0[32];

	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	else if (iParam1 >= 4)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

char* func_249(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_250()
{
	return 0;
}

bool func_251(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 0;
			break;
		case 1:
			*uParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

int func_252()
{
	return 1;
}

bool func_253(int iParam0, int iParam1)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&(Global_17418.f_55.f_61.f_41[*iParam1 /*56*/]), iParam0))
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

bool func_254(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_255(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_293(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

int func_256()
{
	return 5;
}

int func_257()
{
	return 6;
}

int func_258(int iParam0)
{
	int iVar0;

	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	iVar0 = ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_RANK(iParam0, func_294());
	return iVar0;
}

int func_259(var uParam0, var uParam1)
{
	if (func_295(uParam0, 0f))
	{
		*uParam1 = 4;
	}
	else if (func_295(uParam0, 2f))
	{
		*uParam1 = 3;
	}
	else if (func_295(uParam0, 1.084202E-19f))
	{
		*uParam1 = 2;
	}
	else if (func_295(uParam0, 2.524355E-29f))
	{
		*uParam1 = 1;
	}
	else if (func_295(uParam0, 3.85186E-34f))
	{
		*uParam1 = 0;
	}
	else
	{
		return 0;
	}
	return 1;
}

int func_260(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_293(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

char* func_261(int iParam0)
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

float func_262(struct<4> Param0, int iParam4)
{
	float fVar0;

	fVar0 = 0f;
	if (iParam4 == 0 && func_132(Param0, 0) > 50)
	{
		fVar0 = (fVar0 + 1048576000);
	}
	fVar0 = (fVar0 - func_296(iParam4));
	return fVar0;
}

char* func_263(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_264(struct<4> Param0, float fParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_297(Param0, fParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

struct<4> func_265(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_221(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_212(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

char* func_266(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_267()
{
	return Global_1572887.f_14;
}

bool func_268(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_152(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_298(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_269(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_299(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_300(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

void func_270(var uParam0)
{
	int iVar0;

	*uParam0 = { func_86() };
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

bool func_271(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_301(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_272(bool bParam0)
{
	struct<2> Var0;

	if (!func_221(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_273(bool bParam0)
{
	int iVar0;

	if (!func_221(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_272(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

struct<4> func_274(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_212(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_265(2.982335E+09f, func_86(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_265(2.982335E+09f, func_86(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_265(2.982335E+09f, func_86(), -5.45926E-19f, bParam0);
}

int func_275(bool bParam0, bool bParam1)
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

int func_276(int iParam0)
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

bool func_277(var uParam0, int iParam1, int iParam2)
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

bool func_278(int iParam0)
{
	return func_242(&(Global_1572887.f_300.f_1), iParam0, 3);
}

bool func_279()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = iVar1;
		if (!func_302(iVar0))
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

int func_280(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -359624034:
			return 1;
		case 1145633164:
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

bool func_281()
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar16;

	iVar1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_2(&iVar0);
	Var2.f_9 = -5.45926E-19f;
	iVar16 = 0;
	while (iVar16 < iVar0)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iVar1, iVar16, &Var2))
		{
		}
		else if (!func_254(&Var2))
		{
		}
		else if (!func_303(Var2.f_9))
		{
		}
		else if (!func_304(&Var2))
		{
		}
		else
		{
			INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar1);
			return true;
		}
		iVar16++;
	}
	INVENTORY::_INVENTORY_RELEASE_ITEM_COLLECTION(iVar1);
	return false;
}

struct<40> func_282(bool bParam0)
{
	struct<40> Var0;
	int iVar40;
	bool bVar41;
	struct<2> Var42;
	struct<2> Var44;

	Var0.f_16 = 27.64779f;
	Var0.f_38 = 1;
	iVar40 = func_305(0);
	bVar41 = func_306();
	switch (func_307())
	{
		case 0:
			StringCopy(&Var0, MISC::VAR_STRING(2, func_308(-2.022851E+17f), iVar40), 128);
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
				Var42 = { func_309(2.440918E+26f) };
			}
			else
			{
				Var42 = { func_309(1.831836E-06f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_309(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			if (bVar41)
			{
				StringCopy(&(Var0.f_17), func_308(-4.840783E-37f), 128);
			}
			else
			{
				StringCopy(&(Var0.f_17), func_308(3.102336E-30f), 128);
			}
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 2:
			StringCopy(&Var0, MISC::VAR_STRING(2, func_308(-2.022851E+17f), iVar40), 128);
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
				Var42 = { func_309(-5.883759E+36f) };
			}
			else
			{
				Var42 = { func_309(7.511993E+12f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_309(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_308(-1.015928E+35f), 128);
			Var0.f_37 = bVar41;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
		case 3:
			StringCopy(&Var0, func_310(1.421011E-18f), 128);
			Var0.f_16 = 27.64779f;
			if (bParam0)
			{
				Var42 = { func_309(-1.344928E-32f) };
			}
			else
			{
				Var42 = { func_309(375991.1f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_309(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_308(-46090.21f), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 0;
			Var0.f_39 = 0;
			break;
		case 1:
			StringCopy(&Var0, func_310(-4.096321E+18f), 128);
			Var0.f_16 = 4.465091E-08f;
			if (bParam0)
			{
				Var42 = { func_309(-2.178282E+08f) };
			}
			else
			{
				Var42 = { func_309(6.354132E+35f) };
			}
			Var0.f_33 = Var42;
			Var0.f_34 = Var42.f_1;
			Var44 = { func_309(2.304816E+23f) };
			Var0.f_35 = Var44;
			Var0.f_36 = Var44.f_1;
			StringCopy(&(Var0.f_17), func_308(0.0117414f), 128);
			Var0.f_37 = 0;
			Var0.f_38 = 1;
			Var0.f_39 = bVar41;
			break;
	}
	return Var0;
}

void func_283(var uParam0, char* sParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_7, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_8, iParam2);
}

void func_284(var uParam0, char* sParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(uParam0->f_203.f_6, sParam1);
}

void func_285(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_1, iParam2);
}

void func_286(var uParam0, int iParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_2, iParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(uParam0->f_203.f_3, iParam2);
}

void func_287(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_4, bParam1);
}

void func_288(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_5, bParam1);
}

void func_289(var uParam0, bool bParam1)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(uParam0->f_203.f_9, bParam1);
}

bool func_290(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

void func_291(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_292(var uParam0)
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

bool func_293(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_212(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_301(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_294()
{
	return 4;
}

bool func_295(var uParam0, int iParam1)
{
	return func_153(&(uParam0->f_20), iParam1);
}

float func_296(int iParam0)
{
	var uVar0;

	uVar0 = Global_1290256.f_1628.f_3[iParam0];
	return uVar0;
}

bool func_297(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_212(bParam7);
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

bool func_298(var uParam0, int iParam1)
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
	uParam0->f_22 = func_19(uParam0->f_11);
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

bool func_299(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_212(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_300(var uParam0, int iParam1)
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

bool func_301(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_212(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_302(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_311(iParam0);
	iVar1 = func_312(iVar0);
	if (!UNLOCK::_UNLOCK_IS_NEW(iVar1))
	{
		return false;
	}
	if (func_313(iParam0))
	{
		return false;
	}
	return true;
}

bool func_303(int iParam0)
{
	if (iParam0 == 0.2059816f)
	{
		return false;
	}
	return true;
}

bool func_304(var uParam0)
{
	struct<10> Var0;

	if (!func_254(uParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_271(*uParam0, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_221(Var0.f_4, 0))
	{
		return false;
	}
	return func_314(Var0.f_4);
}

int func_305(int iParam0)
{
	return func_316(func_315(iParam0));
}

int func_306()
{
	bool bVar0;

	bVar0 = func_317();
	if (!func_318(bVar0))
	{
		return 0;
	}
	if (!NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bVar0))
	{
		return 0;
	}
	return 1;
}

int func_307()
{
	if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_319(1.689675E+21f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_319(1.689675E+21f)))
	{
		return 0;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_319(-3.629249E+19f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_319(-3.629249E+19f)))
	{
		return 2;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_319(1.76871E+20f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_319(1.76871E+20f)))
	{
		return 1;
	}
	else if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, func_319(0.0002656324f)) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, func_319(0.0002656324f)))
	{
		return 3;
	}
	return 1;
}

char* func_308(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_320();
	Var0.f_2 = 9;
	Var0.f_3 = func_321(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return func_322(fParam0);
	}
	return func_323(Var5);
}

struct<2> func_309(float fParam0)
{
	struct<2> Var0;
	struct<5> Var2;

	Var2 = func_320();
	Var2.f_3 = func_321(0);
	Var2.f_4 = fParam0;
	Var2.f_2 = 11;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&Var0, &Var2))
	{
		return func_324(fParam0);
	}
	Var2.f_2 = 13;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&(Var0.f_1), &Var2))
	{
		return Var0;
	}
	return Var0;
}

char* func_310(float fParam0)
{
	return MISC::VAR_STRING(2, func_308(fParam0));
}

int func_311(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 12;
		case 3:
			return 7;
		case 2:
			return 11;
		case 1:
			return 15;
		case 0:
			return 18;
		default:
			break;
	}
	return -1;
}

int func_312(int iParam0)
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

bool func_313(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			if (!UNLOCK::UNLOCK_IS_UNLOCKED(-2.942762E-10f))
			{
				return true;
			}
			break;
	}
	return false;
}

bool func_314(var uParam0)
{
	return UNLOCK::_UNLOCK_IS_NEW(func_325(uParam0));
}

int func_315(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_326(Global_1292096.f_2983);
		case 1:
			return func_326(Global_1292096.f_2984);
		default:
			break;
	}
	return -1;
}

int func_316(int iParam0)
{
	int iVar0;

	if (!func_327(iParam0))
	{
		return 0;
	}
	iVar0 = func_328(iParam0);
	if (iVar0 != -1)
	{
		return iVar0;
	}
	else
	{
		return func_329(iParam0, 1);
	}
	return 0;
}

int func_317()
{
	return func_330(-12.2445f);
}

bool func_318(int iParam0)
{
	return iParam0 != 0;
}

int func_319(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_320();
	Var0.f_2 = 15;
	Var0.f_3 = func_321(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_331(fParam0);
	}
	return uVar5;
}

var func_320()
{
	return Global_1072759.f_28418[52 /*4*/].f_3;
}

int func_321(int iParam0)
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

char* func_322(float fParam0)
{
	struct<5> Var0;
	struct<16> Var5;

	Var0 = func_320();
	Var0.f_2 = 8;
	Var0.f_3 = fParam0;
	Var0.f_4 = 0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_STRING_127(&Var5, &Var0))
	{
		return "";
	}
	return func_323(Var5);
}

char* func_323(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

struct<2> func_324(float fParam0)
{
	struct<2> Var0;
	struct<4> Var2;

	Var2 = func_320();
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

var func_325(var uParam0)
{
	return uParam0;
}

int func_326(int iParam0)
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

bool func_327(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 36)
	{
		return false;
	}
	return true;
}

int func_328(int iParam0)
{
	if (!func_327(iParam0))
	{
		return 0;
	}
	return Global_1292096.f_3024[iParam0];
}

int func_329(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;

	if (!func_327(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		bVar0 = func_312(iParam0);
		if (func_221(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = func_332(255);
			}
			else
			{
				iVar1 = func_333(bVar0, func_274(1), -2.696814E-33f, 1, 0, 0);
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
		bVar0 = func_334(iParam0);
		if (func_221(bVar0, 0))
		{
			if (iParam0 == 0)
			{
				iVar1 = NETWORK::_NETWORK_GET_XP();
			}
			else
			{
				iVar1 = func_333(bVar0, func_274(1), -2.696814E-33f, 1, 0, 0);
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

int func_330(float fParam0)
{
	struct<5> Var0;
	var uVar5;

	Var0 = func_320();
	Var0.f_2 = 23;
	Var0.f_3 = func_321(0);
	Var0.f_4 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return func_335(fParam0);
	}
	return uVar5;
}

int func_331(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_320();
	Var0.f_2 = 14;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_332(int iParam0)
{
	if (iParam0 == 255 || iParam0 == PLAYER::NETWORK_PLAYER_ID_TO_INT())
	{
		return NETWORK::_NETWORK_GET_RANK();
	}
	return Global_1155135[iParam0 /*30*/];
}

int func_333(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_221(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_336(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_265(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_212(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_212(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

int func_334(int iParam0)
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

int func_335(float fParam0)
{
	struct<4> Var0;
	var uVar5;

	Var0 = func_320();
	Var0.f_2 = 22;
	Var0.f_3 = fParam0;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar5, &Var0))
	{
		return 0;
	}
	return uVar5;
}

int func_336(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_338(func_337(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

bool func_337(bool bParam0)
{
	return bParam0;
}

bool func_338(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

