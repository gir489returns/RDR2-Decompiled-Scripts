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
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
	var uScriptParam_4 = 0;
#endregion

void __EntryFunction__()
{
	struct<180> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (!ScriptParam_0.f_3)
		{
			func_1(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(1);
	Var0.f_1.f_2 = 6f;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_1 = -5.985058E-05f;
	Var0.f_1.f_2 = 4f;
	Var0.f_179 = ScriptParam_0.f_1;
	if (!ScriptParam_0.f_3)
	{
		func_1(1);
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		if (!ScriptParam_0.f_3)
		{
			PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
			func_2(&Var0);
			PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
		}
		switch (Var0)
		{
			case 0:
				if (func_3(Var0.f_1, 0))
				{
					func_4(&(Var0.f_1));
				}
				func_5(&Var0, 1);
				break;
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && ((PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == 8.109786E-30f || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == -5.427489E-14f) || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == 341.742f))
				{
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
					PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "SHOW_COFFEE_KNEEL_DISCARD_PROMPT", true, 1);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.635461E-23f))
				{
					Var0.f_1.f_1 = (1 + Var0.f_1.f_1);
					if (func_6(1))
					{
						func_7((-1110651699 / Var0.f_1.f_2), 0);
					}
					else if (func_8())
					{
						func_9(1);
					}
					else if (func_10())
					{
						func_9(0);
					}
					func_11(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2 || ((MISC::GET_FRAME_COUNT() % 10) == 0 && ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_33) > 1045220557))
				{
					func_5(&Var0, 2);
				}
				break;
			case 2:
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DRINK_PROMPT", true, 1);
				PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "BLOCK_COFFEE_DISCARD_PROMPT", true, 1);
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == -4.247519E-38f)
				{
					if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && ((PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == 8.109786E-30f || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == -5.427489E-14f) || PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33) == 341.742f))
					{
						TASK::_0xB35370D5353995CB(Global_33, NaNf, 0.25f);
					}
					else
					{
						TASK::_0xB35370D5353995CB(Global_33, -2.664867E+19f, 0.25f);
					}
					func_5(&Var0, 3);
					ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&(Var0.f_179));
				}
				break;
			case 3:
				if (ENTITY::DOES_ENTITY_EXIST(Var0.f_179) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -1.292103E-28f))
				{
					OBJECT::DELETE_OBJECT(&(Var0.f_179));
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	if (!ScriptParam_0.f_3)
	{
		func_1(0);
	}
}

void func_1(bool bParam0)
{
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 5, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 50, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 49, 0, bParam0);
	PLAYER::_MODIFY_PLAYER_UI_PROMPT(PLAYER::PLAYER_ID(), 11, 0, bParam0);
}

void func_2(var uParam0)
{
	func_12(uParam0->f_1, &(uParam0->f_179), 1.918266E-26f, -7.982601E+35f);
}

bool func_3(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_4(var uParam0)
{
	int iVar0;

	ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(*uParam0, &(uParam0->f_11));
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(uParam0->f_11.f_1[iVar0], &(uParam0->f_33[iVar0 /*7*/]));
		iVar0++;
	}
}

void func_5(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_6(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_7(float fParam0, bool bParam1)
{
	func_13((Global_1940013.f_9 + fParam0), bParam1);
}

bool func_8()
{
	return Global_1940013 == 2;
}

void func_9(int iParam0)
{
	if (iParam0 >= Global_1940013)
	{
		return;
	}
	Global_1940013.f_1 = iParam0;
}

bool func_10()
{
	return Global_1940013 == 1;
}

void func_11(var uParam0, bool bParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	bool bVar8;
	int iVar9;
	bool bVar10;
	bool bVar11;

	if ((func_14(*uParam0, 1.763507E+18f) || func_14(*uParam0, 8.273569E-15f)) || func_14(*uParam0, -1.230845E+19f))
	{
		bVar10 = true;
	}
	bVar11 = func_15(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940072.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		switch (uParam0->f_33[iVar0 /*7*/].f_1)
		{
			case -943921969:
				fVar1 = func_16(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_17((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				iVar9 = 1;
				break;
			case -1104847406:
				fVar2 = func_16(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_18((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_16(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_19((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_20((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_21(0, fVar4, 1, 1, bVar10);
				iVar9 = 1;
				break;
			case 1857353317:
				fVar5 = func_20((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_21(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_20((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_21(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_22((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0 /*7*/].f_1)
					{
						case 2062242710:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(19, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case -826379728:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(0, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case 1342237631:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_23(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_24(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_25(uParam0);
		func_26(*uParam0, bVar8, iVar9, 9.275179E-19f);
	}
	func_27(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_12(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		*uParam1 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, iParam2);
		if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			STREAMING::REQUEST_MODEL(iParam3, false);
			if (STREAMING::HAS_MODEL_LOADED(iParam3) && NETWORK::CAN_REGISTER_MISSION_OBJECTS(1))
			{
				*uParam1 = OBJECT::CREATE_OBJECT(iParam3, Global_34, true, false, false, false, true);
				OBJECT::_0xCAAF2BCCFEF37F77(*uParam1, 80);
				TASK::_TASK_ITEM_INTERACTION_2(Global_33, iParam0, *uParam1, iParam2, TASK::GET_ITEM_INTERACTION_STATE(Global_33), 1, 0, -1f);
			}
		}
	}
}

void func_13(float fParam0, bool bParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_28())
		{
			Global_1940013.f_9 = (func_28() - 1008981770);
			return;
		}
	}
	if (fParam0 < 0f)
	{
		Global_1940013.f_9 = 0f;
		PED::_SET_PED_MOTIVATION(Global_33, 10, Global_1940013.f_9, 0);
	}
	else if (fParam0 >= 1f && Global_1940013.f_14)
	{
		Global_1940013.f_9 = 1065185444; /* Float: 0.99f */
	}
	else if (fParam0 > 1f)
	{
		Global_1940013.f_9 = 1f;
	}
	else
	{
		Global_1940013.f_9 = fParam0;
	}
	if (bParam1)
	{
		Global_1940013.f_12 = 1;
	}
}

bool func_14(bool bParam0, int iParam1)
{
	if (!func_3(bParam0, 0))
	{
		return func_30(func_29(bParam0), iParam1);
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

int func_15(int iParam0)
{
	switch (iParam0)
	{
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_MEDIUM"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"):
		case -545779394:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_LOW"):
		case joaat("PROVISION_ROLE_MOONSHINER_MASH_HIGH"):
		case 1532695640:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
		case 1847740267:
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
			return 0;
	}
	return 1;
}

float func_16(int iParam0, float fParam1)
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;

	switch (iParam0)
	{
		case 0:
			fVar0 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_33));
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_33, false));
			break;
		case 1:
			fVar0 = PED::_GET_PED_STAMINA(Global_33);
			fVar1 = PED::_GET_PED_MAX_STAMINA(Global_33);
			break;
		case 2:
			fVar0 = PLAYER::_GET_PLAYER_DEAD_EYE(PLAYER::GET_PLAYER_INDEX());
			fVar1 = PLAYER::_GET_PLAYER_MAX_DEAD_EYE(PLAYER::GET_PLAYER_INDEX(), 0);
			break;
	}
	fVar3 = (fParam1 + fVar0);
	if (fVar3 > fVar1)
	{
		fVar2 = (fVar1 - fVar0);
	}
	else
	{
		fVar2 = (fVar3 - fVar0);
	}
	return (fVar2 / 2f);
}

void func_17(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_GET_NUM_RESERVED_HEALTH(iVar0));
	}
	iVar1 = func_31(2);
	func_32((fParam0 * IntToFloat(iVar1)), 0);
}

void func_18(float fParam0, bool bParam1)
{
	int iVar0;

	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(10);
	}
	iVar0 = func_33(2);
	func_34((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_19(float fParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam0 == 0f)
	{
		return;
	}
	else if (fParam0 == -1f)
	{
		fParam0 = BUILTIN::TO_FLOAT(PED::_0xFC3B580C4380B5B7(iVar0));
	}
	iVar1 = func_35(2);
	func_36((fParam0 * IntToFloat(iVar1)), 0);
}

float func_20(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 1120403456) * 1120403456);
	}
	return ((fParam0 / 1090519040) * 1120403456);
}

void func_21(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_37(iParam0, fParam1, 1);
	}
	func_39(iParam0, (func_38(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_22(float fParam0, bool bParam1)
{
	if (fParam0 > 1092616192)
	{
		fParam0 = 1092616192; /* Float: 10f */
	}
	if (func_40())
	{
		func_41(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41++;
		if (5 == Global_17418.f_55.f_2459.f_41)
		{
			func_42(109, 0);
		}
	}
}

float func_23(float fParam0, int iParam1)
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

int func_24(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_43(iParam0, fParam1, bParam2, bParam3);
}

void func_25(var uParam0)
{
	switch (*uParam0)
	{
		case -2109344034:
		case -2053642092:
		case -1806099704:
		case -1563450693:
		case -1499480171:
		case -1437186306:
		case -669703557:
		case -30746180:
		case 429428887:
		case 812236345:
		case 1023793009:
		case 1271821570:
		case 1454312131:
		case 1879593571:
		case 1934214136:
			func_44(-8.650952E-05f, -2.629533E+32f, 8100);
			break;
	}
}

void func_26(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 || func_14(bParam0, -3.480943E+19f))
	{
		func_46(func_45(-3.750745E+13f), 1);
	}
	if (func_14(bParam0, -3.458856E-14f))
	{
		func_46(func_45(-2.12416E-30f), 1);
	}
	if (func_14(bParam0, 1.763507E+18f))
	{
		func_48(func_47(bParam0), 1);
	}
	if (func_14(bParam0, 2.343408E+31f))
	{
		func_46(func_49(7.642884E+10f, -129968.5f), 1);
	}
	if (func_14(bParam0, 1.987618E+33f))
	{
		func_46(func_45(-2.413646E-08f), 1);
	}
	if (func_14(bParam0, 1894063f))
	{
		func_46(func_45(1.884128E-06f), 1);
	}
	switch (bParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_46(func_49(7.642884E+10f, -2.03267E-35f), 1);
			break;
	}
	switch (bParam0)
	{
		case -611782825:
			func_46(func_49(7.642884E+10f, -3.483875E-29f), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_46(func_49(7.642884E+10f, 5.234738E-28f), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_46(func_49(7.642884E+10f, 7.840773E-07f), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_46(func_49(7.642884E+10f, 7.177263E+37f), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_46(func_49(7.642884E+10f, -3.568742E-26f), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_46(func_49(7.642884E+10f, -1.888559E+33f), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_46(func_49(7.642884E+10f, 4.325028E-21f), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_46(func_49(7.642884E+10f, -4.824814E+07f), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_46(func_49(7.642884E+10f, -2.336031E+31f), 1);
			break;
	}
	if (func_50() == -1)
	{
		if (bParam0 == -8.536846E-33f)
		{
			func_46(func_49(7.642884E+10f, 1.386211E-17f), 1);
		}
	}
	if (bParam1)
	{
		func_46(func_45(1.131948E-13f), 1);
	}
	func_51(bParam0, iParam3);
}

void func_27(var uParam0)
{
	if (!uParam0->f_176)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_174, 2, false);
			uParam0->f_176 = 1;
		}
	}
}

float func_28()
{
	return 1061158912 /* Float: 0.75f */;
}

bool func_29(bool bParam0)
{
	return bParam0;
}

int func_30(bool bParam0, int iParam1)
{
	if (!func_52(bParam0, 2))
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

int func_31(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_53(1);
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

void func_32(float fParam0, int iParam1)
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

int func_33(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_53(1);
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

void func_34(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_54(iVar0))
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

int func_35(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_53(1);
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

void func_36(float fParam0, int iParam1)
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

float func_37(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_55();
	func_56(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_57(iParam0, 2);
	if (func_59(iVar0, func_58(iParam0, 2), 1))
	{
		func_60(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_42(103, bParam2);
		return 0f;
	}
	func_61(iParam0, func_55(), 2);
	func_60(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_38(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_53(2);
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

int func_39(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_53(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_62(iVar0, iParam0, fParam1))
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
			func_63(iParam0, 7000, iParam5);
		}
		func_64(iVar0, iParam0, fParam1);
		func_65(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_40()
{
	if (Global_1956862.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_66(Global_1956862.f_1431.f_107, 0);
}

void func_41(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_67(13, 2);
	iVar1 = func_68(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_69(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_68(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_55();
		func_70(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_71(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

void func_42(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_72(iParam0, &iVar0, &iVar1);
	if (!func_73(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_74(iVar0, iVar1);
}

int func_43(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_75(iParam0))
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
				sVar0 = func_76(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_77(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_76(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_78(3.279095E+25f);
			func_79(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_76(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_80(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_78(2.372604E-26f);
			func_81(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_81(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_81(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

int func_44(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_82(iParam1))
	{
		return 0;
	}
	if (!func_83(iParam1))
	{
		return 0;
	}
	if (!func_84(iParam0))
	{
		return 0;
	}
	if (!func_85(iParam0))
	{
		return 0;
	}
	if (!func_86(iParam0))
	{
		func_87(iParam0);
	}
	if (func_88(iParam0, iParam1))
	{
		iVar0 = func_89(iParam0);
		Global_1156096.f_47689.f_63[iVar0 /*2*/] = iParam0;
		Global_1156096.f_47689.f_63[iVar0 /*2*/].f_1 = (Global_1295619.f_16 + iParam2);
		return 1;
	}
	return 0;
}

struct<2> func_45(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

void func_46(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_47(bool bParam0)
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

void func_48(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_49(-3.114499E+25f, func_90(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_46(func_91(3.939822E-35f), iParam1);
}

struct<2> func_49(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

int func_50()
{
	return Global_1572887.f_14;
}

void func_51(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_50() == 0)
	{
		iVar0 = func_92(bParam0, -60352.49f);
		if (iParam1 == -1.202057E-11f)
		{
			return;
		}
		if (func_14(bParam0, -8.87647E+33f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -9.82979E+16f, 1);
		}
		if ((func_14(bParam0, 1.378098E+25f) || 3.62898E+13f == iVar0) || -9.276053E-31f == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 1.324128E-12f, 1);
		}
		if (func_14(bParam0, 1.763507E+18f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -1.231875E-07f, 1);
		}
		if (func_14(bParam0, -1.064618E-36f) && !func_14(bParam0, -2.927334E-06f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -4.02404E-14f, 1);
		}
		if (func_14(bParam0, 9.495676E-32f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.208807E+11f, 1);
		}
		if (((func_14(bParam0, -1.051639E+07f) || func_14(bParam0, -5.092244E+08f)) || func_14(bParam0, 1.431632E+07f)) || bParam0 == -1.954145E-33f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.96823E-25f, 1);
		}
		if (func_14(bParam0, -2.529679E+11f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 9.179291E+27f, 1);
		}
		if ((bParam0 == -1.160316E-13f || bParam0 == -50238.05f) || bParam0 == -6.733347E-15f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -1.806583f, 1);
		}
		if (bParam0 == -5.985058E-05f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.84424E+34f, 1);
		}
	}
}

bool func_52(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_53(int iParam0)
{
	return func_94(func_93(iParam0));
}

bool func_54(int iParam0)
{
	float fVar0;

	fVar0 = (func_95(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

int func_55()
{
	return Global_1902565;
}

void func_56(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_96(*iParam0);
	iVar1 = func_97(*iParam0);
	iVar2 = func_98(*iParam0);
	iVar3 = func_99(*iParam0);
	iVar4 = func_100(*iParam0);
	iVar5 = func_101(*iParam0);
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
		iVar7 = func_102(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_103(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_57(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_53(2);
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

int func_58(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_53(2);
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

bool func_59(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_104(iParam1) || !func_104(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_60(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
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

void func_61(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
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

bool func_62(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_105(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_63(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
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

void func_64(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_106(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_107(iParam1), fParam2, -1);
	}
}

void func_65(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_53(2);
	}
	uVar0 = Global_1295619.f_16;
	func_108(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_109(iParam0, uVar0, iParam3);
	}
}

bool func_66(int iParam0, bool bParam1)
{
	return func_59(func_55(), iParam0, bParam1);
}

float func_67(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_53(1);
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

int func_68(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

float func_69(float fParam0, float fParam1, float fParam2)
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

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_96(*iParam0);
	iVar1 = func_97(*iParam0);
	iVar2 = func_98(*iParam0);
	iVar3 = func_99(*iParam0);
	iVar4 = func_100(*iParam0);
	iVar5 = func_101(*iParam0);
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
	iVar6 = func_102(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_102(iVar1, iVar0);
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
	func_103(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_71(int iParam0, float fParam1, int iParam2)
{
	if (!func_110(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
	}
	func_111(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_72(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_73(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_112(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_113(iParam0))
	{
		return false;
	}
	if (func_114(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_115(iParam0, 1)) || func_116(32768))
	{
		if (!func_115(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_117())
	{
		return false;
	}
	return true;
}

void func_74(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_75(int iParam0)
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

char* func_76(int iParam0)
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

void func_77(int iParam0)
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
	iVar1 = func_31(2);
	func_32(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_78(int iParam0)
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
		iVar3 = func_118(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_87(iVar0);
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

void func_79(int iParam0)
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
	iVar1 = func_35(2);
	func_36(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_80(int iParam0, bool bParam1)
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
	iVar0 = func_33(2);
	func_34(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_81(int iParam0, bool bParam1, bool bParam2)
{
	func_39(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

bool func_82(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

bool func_83(int iParam0)
{
	int iVar0;

	iVar0 = func_119(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_84(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_85(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_86(int iParam0)
{
	if (!func_85(iParam0))
	{
		return false;
	}
	return Global_1156096.f_35859.f_919[func_118(iParam0, 1) /*12*/] == -1;
}

int func_87(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_85(iParam0))
	{
		return 0;
	}
	iVar0 = func_118(iParam0, 1);
	if (!func_83(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_119(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_120(iParam0, iVar1))
		{
			case 0:
				func_121(iVar1, iParam0, iVar4);
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
						func_121(iVar1, iParam0, iVar4);
						func_122(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_122(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_123(iVar1, 1);
				func_124(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_125(iVar2, 0);
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
			func_126(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_88(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_85(iParam0))
	{
		return false;
	}
	iVar0 = func_118(iParam0, 1);
	if (!func_83(iParam1))
	{
		return false;
	}
	iVar1 = func_119(iParam1, 1);
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		return true;
	}
	if (func_83(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		func_87(iParam0);
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1156096.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_123(iVar2, 1);
		switch (func_127(iParam0, iVar2))
		{
			case 0:
				func_128(iVar2, iParam0, iVar4);
				break;
			case 1:
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] = iVar2;
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/].f_1 = iParam0;
				Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/].f_2 = iVar4;
				Global_1156096.f_35859.f_11700++;
				break;
			case 2:
				Jump @427; //curOff = 338
				if (Global_1156096.f_35859.f_3116[iVar3 /*31*/].f_29 <= 0)
				{
					Global_1156096.f_35859.f_9302[Global_1156096.f_35859.f_9502] = iVar2;
					Global_1156096.f_35859.f_9502++;
				}
				func_124(iVar3, 1);
				iVar4++;
			}
			return true;
		}

int func_89(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (func_129(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_130(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_131(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_132(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_133(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_84(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_134(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

int func_90(int iParam0)
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

struct<2> func_91(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_92(bool bParam0, int iParam1)
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

bool func_93(int iParam0)
{
	return func_135(&(Global_1956862.f_1565), iParam0, 1);
}

int func_94(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_95(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_136(2)));
}

int func_96(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_137(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_97(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_98(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_99(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_100(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_101(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_102(int iParam0, int iParam1)
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

void func_103(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_138(iParam0, iParam6);
	func_139(iParam0, iParam5);
	func_140(iParam0, iParam4);
	func_141(iParam0, iParam3);
	func_142(iParam0, iParam2);
	func_143(iParam0, iParam1);
}

bool func_104(int iParam0)
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
	iVar0 = func_101(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_100(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_99(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_96(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_97(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_98(iParam0);
	if (iVar5 < 1 || iVar5 > func_102(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_105(int iParam0)
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

char* func_106(int iParam0)
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

char* func_107(int iParam0)
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

void func_108(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
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

void func_109(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_53(2);
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

bool func_110(int iParam0)
{
	if (func_75(iParam0))
	{
		return true;
	}
	else if (func_144(iParam0))
	{
		return true;
	}
	return false;
}

void func_111(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_53(1);
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

bool func_112(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_113(int iParam0)
{
	if (func_115(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_114(int iParam0)
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

bool func_115(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_116(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_117()
{
	if (!func_145())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

int func_118(int iParam0, int iParam1)
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

int func_119(int iParam0, int iParam1)
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

int func_120(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_146(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_123(iParam1, 1);
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

int func_121(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_85(iParam1))
	{
		return 0;
	}
	if (!func_147(iParam0))
	{
		return 0;
	}
	iVar0 = func_123(iParam0, 1);
	func_148(iParam0, iParam1, iParam2);
	if (func_149(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_150(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_151(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_152(vVar1))
		{
			if (func_153(vVar1.x, vVar1.y, vVar1.z))
			{
				func_154(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_155(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_155(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_122(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_123(int iParam0, int iParam1)
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

void func_124(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_125(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_126(var uParam0)
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

int func_127(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_146(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_123(iParam1, 1);
	switch (Global_1156096.f_35859.f_3116[iVar2 /*31*/])
	{
		case joaat("ON_ENABLE"):
			if (iVar1 == iVar0)
			{
				return 0;
			}
			else
			{
				return 2;
			}
			break;
		case joaat("ENTER_REVIVED_REMOTE"):
		case -2129621195:
		case -1503245593:
		case joaat("ALLY_ENTER_DEADEYE"):
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

int func_128(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_85(iParam1))
	{
		return 0;
	}
	if (!func_147(iParam0))
	{
		return 0;
	}
	iVar0 = func_123(iParam0, 1);
	if (!func_156(iParam2))
	{
		return 0;
	}
	bVar1 = func_149(Global_1156096.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_157(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar2 = { func_158(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_148(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_153(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_154(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_129(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_130(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_131(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_132(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_133(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_134(int iParam0)
{
	int iVar0;

	iVar0 = func_118(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

bool func_135(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_31(2) * 2;
		case 1:
			return func_35(2) * 2;
		case 2:
			return func_33(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_137(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_138(int iParam0, int iParam1)
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

void func_139(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_140(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_97(*iParam0);
	iVar1 = func_96(*iParam0);
	if (iParam1 < 1 || iParam1 > func_102(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_141(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_142(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_143(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_144(int iParam0)
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

bool func_145()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_146(int iParam0)
{
	if (func_129(iParam0))
	{
		return (func_89(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_147(int iParam0)
{
	int iVar0;

	iVar0 = func_123(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_148(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_118(iParam1, 1);
	iVar1 = func_123(iParam0, 1);
	iVar2 = func_119(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	if (Global_1156096.f_35859[iVar2 /*6*/][iParam2] != iParam0)
	{
		return false;
	}
	if (!Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/])
	{
		return true;
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/].f_1[iParam2 /*2*/] = 0;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_16)
	{
		iVar3 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/];
		iVar5 = func_159(iVar3, 1);
		if (!func_160(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_161(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_162(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_163(iVar6))
		{
		}
		else
		{
			iVar8 = func_164(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_165(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_149(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_150(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_147(iParam0))
	{
		return false;
	}
	if (!func_166(iParam1))
	{
		return false;
	}
	iVar0 = func_167(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_151(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_168(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_152(vector3 vParam0)
{
	if (!func_147(vParam0.x))
	{
		return false;
	}
	if (!func_85(vParam0.y))
	{
		return false;
	}
	if (!func_156(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_153(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_118(iParam1, 1);
	iVar1 = func_123(iParam0, 1);
	iVar2 = func_119(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_159(iVar3, 1);
		if (!func_160(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_161(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_169(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_163(iVar6))
		{
		}
		else if (!func_170(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_164(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_171(iVar6);
			}
		}
		iVar7++;
	}
	func_172(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_154(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_166(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0, 1);
	if (!func_147(iParam1))
	{
		return;
	}
	if (!func_85(iParam2))
	{
		return;
	}
	if (!func_156(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_155(int iParam0)
{
	int iVar0;

	if (!func_166(iParam0))
	{
		return;
	}
	iVar0 = func_167(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_156(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_157(int iParam0)
{
	int iVar0;

	if (!func_166(iParam0))
	{
		return false;
	}
	iVar0 = func_173(iParam0);
	if (!func_147(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_158(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_166(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_167(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar3 /*3*/];
}

int func_159(int iParam0, int iParam1)
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

bool func_160(int iParam0)
{
	int iVar0;

	iVar0 = func_159(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_161(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_174(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_160(iParam0))
	{
		return;
	}
	iVar0 = func_159(iParam0, 1);
	if (!func_175(Global_1156096.f_2169[iVar0 /*205*/]))
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
	if (!func_176(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_177(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_163(int iParam0)
{
	int iVar0;

	iVar0 = func_164(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_164(int iParam0, int iParam1)
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

void func_165(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_178();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_179();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_42(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_180(iParam0));
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
			func_182(func_181(iParam0));
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
			func_183();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_175(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_175(16);
			break;
	}
}

bool func_166(int iParam0)
{
	int iVar0;

	iVar0 = func_167(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_167(int iParam0, int iParam1)
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

int func_168(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_173(iParam0);
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
		iVar64 = func_123(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_184(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_185(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
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

void func_169(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_160(iParam0))
	{
		return;
	}
	iVar0 = func_159(iParam0, 1);
	if (!func_175(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_176(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_177(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_170(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_186(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_171(int iParam0)
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
			func_178();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_179();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_42(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_180(iParam0));
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
			iVar2 = func_181(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_187(iParam0, 0));
			func_188(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_187(iParam0, 1));
			func_188(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_187(iParam0, 2));
			func_188(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_187(iParam0, 3));
			func_188(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_181(iParam0);
			func_188(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_181(iParam0);
			func_188(iVar2, 4, 1, -1, 0);
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
			func_189();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_175(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_175(16);
			break;
	}
}

void func_172(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_190(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_191(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

int func_173(int iParam0)
{
	int iVar0;

	if (!func_166(iParam0))
	{
		return -1;
	}
	iVar0 = func_167(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

float func_174(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_192(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_175(int iParam0)
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

bool func_176(int iParam0)
{
	int iVar0;

	iVar0 = func_177(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_177(int iParam0, int iParam1)
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

void func_178()
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
		if (!func_193(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_179()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_180(int iParam0)
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

int func_181(int iParam0)
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

void func_182(int iParam0)
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

void func_183()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

bool func_184(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_147(iParam0))
	{
		return false;
	}
	iVar0 = func_123(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_149(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_167(iVar2, 1) /*3*/];
		Var4 = { func_185(iVar3) };
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
			if (!func_194() && !func_195())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_194())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_146(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_146(iParam1);
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
			iVar1 = func_146(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_196(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_197(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_146(iParam1);
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

struct<31> func_185(int iParam0)
{
	int iVar0;

	iVar0 = func_123(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_186(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_192(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_187(int iParam0, int iParam1)
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

void func_188(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_189()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_190(int iParam0)
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

char* func_191(int iParam0)
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

bool func_192(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_198(iVar7);
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

bool func_193(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_194()
{
	return Global_1572887.f_7;
}

bool func_195()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_200(func_199(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_201(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

bool func_196(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_202(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_203(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_197(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

int func_198(int iParam0)
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

struct<2> func_199(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_200(struct<2> Param0)
{
	if (!func_204(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_205(Param0))
	{
		return false;
	}
	return true;
}

bool func_201(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

bool func_202(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_203(int iParam0)
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
		func_206(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_207(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_204(int iParam0)
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

int func_205(int iParam0)
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

void func_206(int iParam0)
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
	func_207(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_207(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

