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
	int iLocal_13 = 0;
	int iLocal_14 = 0;
	int iLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	float fLocal_19 = 0f;
	float fLocal_20 = 0f;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	struct<165> Local_23 = { 0, 0, 10, 0, 0, 0, 0, 0, -1, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	vector3 vLocal_188 = { 0f, 1f, 0f };
	var uLocal_191 = 0;
	var uLocal_192 = 0;
	bool bLocal_193 = false;
	bool bLocal_194 = false;
	bool bLocal_195 = false;
	bool bLocal_196 = false;
	var uLocal_197[2] = { 0, 0 };
	var uLocal_200[2] = { 0, 0 };
	char* sLocal_203 = NULL;
	int iLocal_204 = 0;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_13 = 1;
	fLocal_19 = 1f;
	fLocal_20 = 1f;
	iLocal_22 = -1;
	iLocal_15 = vScriptParam_0.x;
	uLocal_16 = vScriptParam_0.y;
	uLocal_17 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_15);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3()
{
	if (iLocal_14 != 0)
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(iLocal_14) == 0)
		{
			return iLocal_13;
		}
		else
		{
			return true;
		}
	}
	return iLocal_13;
}

void func_4()
{
}

void func_5()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			case -456923784:
				func_10(iVar0);
				break;
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	int iVar0;

	if (PED::IS_PED_INJURED(Global_33))
	{
		iLocal_13 = 0;
		return;
	}
	if (!bLocal_196 && TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1))
	{
		bLocal_196 = true;
	}
	sLocal_203 = "scenario@MECH@PLAYER_OPEN_MISCCHEST@EXIT";
	if (!ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
	{
		bLocal_193 = true;
		Local_23.f_6 = uLocal_16;
		Local_23.f_5 = func_12();
	}
	switch (iLocal_204)
	{
		case 0:
			if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
			{
				func_13(&Local_23);
				func_14(Local_23.f_5);
				Local_23.f_3 = !func_15(Local_23.f_5);
				Local_23.f_1 = ENTITY::GET_ENTITY_MODEL(Local_23.f_5);
				vLocal_188.f_2 = 1039784739; /* Float: 0.122f */
				vLocal_188.f_1 = 1060924031; /* Float: 0.736f */
				func_16(&Local_23);
				Local_23.f_12[0] = func_17();
				if (Local_23.f_12[0] == 0)
				{
					iLocal_204 = 3;
				}
				else
				{
					Local_23.f_12[1] = func_18();
					func_19();
					iLocal_204 = 1;
				}
			}
			break;
		case 1:
			if (Local_23.f_12[1] == 0)
			{
				if (iLocal_22 < 0)
				{
					iLocal_22 = ANIMSCENE::_CREATE_ANIM_SCENE(sLocal_203, 0, 0, false, true);
					ANIMSCENE::LOAD_ANIM_SCENE(iLocal_22);
				}
			}
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(&(uLocal_197[iVar0]), &Local_23, iVar0, &(uLocal_200[iVar0]), func_20(iVar0), 0, 1, 1, 0);
					iVar0++;
				}
			}
			if (uLocal_197[0] >= 2 && uLocal_197[1] >= 2)
			{
				iLocal_204 = 2;
			}
			break;
		case 2:
			if (bLocal_193)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_21(&(uLocal_197[iVar0]), &Local_23, iVar0, &(uLocal_200[iVar0]), func_20(iVar0), 0, 1, 0, 0);
					iVar0++;
				}
			}
			if (uLocal_197[0] == 4 && uLocal_197[1] == 4)
			{
				iLocal_204 = 3;
			}
			break;
		case 3:
			break;
	}
	if (!bLocal_194 && ANIMSCENE::DOES_ANIM_SCENE_EXIST(vLocal_188.x))
	{
		func_22(&vLocal_188, &bLocal_195, &bLocal_194);
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -7.314961E-25f))
	{
		if (!bLocal_195)
		{
			vLocal_188.x = TASK::_0x2C497BDEF897C6DF(Global_33);
			bLocal_195 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.416444E+36f))
	{
		if (iLocal_21 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_33, Local_23.f_26[0]);
			}
		}
		else if (iLocal_21 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
			{
				AUDIO::_0xC886CD666ADD42E1(Global_33, Local_23.f_26[1]);
			}
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -5.347891E-30f))
	{
		iLocal_21++;
		if (iLocal_21 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[0]))
			{
				func_23(uLocal_200[0], 0, 1);
				OBJECT::DELETE_OBJECT(&(uLocal_200[0]));
				func_24(&(Local_23.f_23), 2, 0, 6.028273E-12f);
			}
		}
		else if (iLocal_21 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_200[1]))
			{
				func_23(uLocal_200[1], 0, 1);
				OBJECT::DELETE_OBJECT(&(uLocal_200[1]));
				func_24(&(Local_23.f_26), 10, 0, 6.028273E-12f);
			}
			bLocal_194 = true;
		}
	}
	if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2.296564E-29f))
	{
		if (Local_23.f_12[1] == 0)
		{
			TASK::_0xD999E379265A4501(Global_33, sLocal_203, 0);
			TASK::CLEAR_PED_TASKS(Global_33, true, false);
			bLocal_194 = true;
		}
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(Global_33))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
		iLocal_13 = 0;
		bLocal_194 = true;
	}
}

void func_7()
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Local_23.f_5))
	{
		if (bLocal_196)
		{
			if (!func_25(Local_23.f_5))
			{
				func_26(Local_23.f_5);
			}
		}
		else
		{
			func_27(&Local_23);
		}
	}
	iVar0 = 0;
	while (iVar0 < 2)
	{
		func_28(&(uLocal_200[iVar0]), bLocal_196);
		iVar0++;
	}
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_29(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_30(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;

	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_15)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, true);
		func_31(&iVar0);
	}
}

int func_12()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	if (!PED::IS_PED_INJURED(Global_33))
	{
		iVar1 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_33, false);
		if (TASK::DOES_SCENARIO_POINT_EXIST(iVar1))
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(iVar1);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = TASK::GET_PROP_FOR_SCENARIO_POINT(iVar1, "PROP");
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				iVar0 = PED::_GET_PED_REGISTER_PROP(Global_33, "PROP", true);
			}
		}
	}
	return iVar0;
}

void func_13(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_103[iVar0 /*5*/] = -1;
		uParam0->f_103[iVar0 /*5*/].f_3 = 0;
		uParam0->f_103[iVar0 /*5*/].f_1 = 0;
		uParam0->f_103[iVar0 /*5*/].f_2 = 0f;
		uParam0->f_103[iVar0 /*5*/].f_4 = 0;
		uParam0->f_154[iVar0] = -1;
		iVar0++;
	}
}

void func_14(int iParam0)
{
	int iVar0;
	struct<10> Var1;

	iVar0 = OBJECT::_0x250EBB11E81A10BE(iParam0);
	if (iVar0 == 0)
	{
		return;
	}
	if (func_32(OBJECT::_0x2BF1953C0C21AC88(iVar0), 1))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "loot_empty", true);
		return;
	}
	OBJECT::_0x7D4411D6736CD295(iVar0, &Var1);
	if (Var1 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_money", Var1);
	}
	if (Var1.f_2 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", Var1.f_1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", Var1.f_2);
	}
	if (Var1.f_4 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", Var1.f_3);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", Var1.f_4);
	}
	if (Var1.f_6 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", Var1.f_5);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", Var1.f_6);
	}
	if (Var1.f_8 > 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", Var1.f_7);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", Var1.f_8);
	}
	if (Var1.f_9 != 0)
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", Var1.f_9);
	}
}

bool func_15(int iParam0)
{
	if (((((((((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty") || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon")) || DECORATOR::DECOR_EXIST_ON(iParam0, "loot_capitale"))
	{
		return false;
	}
	return true;
}

void func_16(var uParam0)
{
	struct<13> Var0;
	int iVar23;
	int iVar24;
	int iVar25;

	if (uParam0->f_3 && func_33(uParam0->f_5))
	{
		return;
	}
	Var0.f_1 = 10;
	Var0.f_12 = 10;
	if (!func_34(uParam0->f_5))
	{
		MISC::_LOOT_TABLES_GET_INFO(*uParam0, true, true, uParam0->f_1, &Var0, 0);
	}
	if (Var0 <= 0 && !uParam0->f_3)
	{
		return;
	}
	if (uParam0->f_3)
	{
		func_35(uParam0, &Var0, 10);
	}
	if (uParam0->f_2 > 10)
	{
		uParam0->f_2 = 10;
	}
	iVar23 = 0;
	while (iVar23 < uParam0->f_2)
	{
		uParam0->f_26[iVar23] = Var0.f_1[iVar23];
		if (uParam0->f_103[iVar23 /*5*/].f_4 != 0)
		{
			uParam0->f_12[iVar23] = uParam0->f_103[iVar23 /*5*/].f_4;
			iVar25++;
		}
		else
		{
			iVar24 = TASK::_FIND_MODEL_FOR_ITEM(Var0.f_1[iVar23]);
			if (iVar24 == 0 && uParam0->f_26[iVar23] != 0)
			{
				uParam0->f_12[iVar23] = 3.009617f;
			}
			else
			{
				uParam0->f_12[iVar23] = iVar24;
				iVar25++;
			}
		}
		iVar23++;
	}
	if (iVar25 > 0)
	{
		NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(iVar25);
	}
}

float func_17()
{
	float fVar0;

	if (func_36(&(Local_23.f_6)))
	{
		fVar0 = func_37(Local_23, &(Local_23.f_26[0]));
	}
	else
	{
		fVar0 = func_38(&Local_23, &(Local_23.f_26[0]), 0);
	}
	return fVar0;
}

float func_18()
{
	float fVar0;

	fVar0 = func_38(&Local_23, &(Local_23.f_26[1]), 1);
	return fVar0;
}

void func_19()
{
	Local_23.f_37[0 /*3*/] = { -1135173278, 1028980212 /* Float: 0.052f */, 1036523248 };
	Local_23.f_68[0 /*3*/] = { 0f, 0f, -1052493480 };
	Local_23.f_37[1 /*3*/] = { 1043549546, -1132099692, 1037623833 };
	Local_23.f_68[1 /*3*/] = { 0f, 0f, -1034794095 };
}

char[] func_20(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "OBJECT1";
		case 1:
			return "OBJECT2";
		default:
			break;
	}
	return "";
}

void func_21(var uParam0, var uParam1, int iParam2, var uParam3, char* sParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;

	switch (*uParam0)
	{
		case 0:
			if (uParam1->f_12[iParam2] != 0)
			{
				STREAMING::REQUEST_MODEL(uParam1->f_12[iParam2], false);
				*uParam0 = 1;
			}
			else
			{
				*uParam0 = 4;
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(uParam1->f_12[iParam2]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(uParam1->f_5))
				{
					if (uParam1->f_154[iParam2] != -1)
					{
						vVar3 = { ENTITY::GET_WORLD_POSITION_OF_ENTITY_BONE(uParam1->f_5, uParam1->f_154[iParam2]) };
						vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(vVar3, ENTITY::GET_ENTITY_HEADING(uParam1->f_5), uParam1->f_37[iParam2 /*3*/]) };
					}
					else
					{
						vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam1->f_5, uParam1->f_37[iParam2 /*3*/]) };
					}
				}
				else if (TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
				{
					vVar0 = { OBJECT::GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(TASK::_GET_SCENARIO_POINT_COORDS(uParam1->f_6, true), TASK::_GET_SCENARIO_POINT_HEADING(uParam1->f_6, true), uParam1->f_37[iParam2 /*3*/]) };
				}
			else
			{
				}
				else
				{
					*uParam3 = OBJECT::CREATE_OBJECT(uParam1->f_12[iParam2], vVar0, func_39(&(uParam1->f_5)), true, false, false, bParam5);
					func_40(uParam1, uParam3, uParam1->f_12[iParam2], uParam1->f_26[iParam2]);
					ENTITY::SET_ENTITY_INVINCIBLE(*uParam3, true);
					OBJECT::_MAKE_ITEM_CARRIABLE(*uParam3);
					if (bParam6)
					{
						iVar6 = func_41(uParam1->f_4, uParam1->f_154[iParam2], 0);
						vVar0 = { func_42(uParam1->f_4, uParam1->f_37[iParam2 /*3*/], ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(uParam1->f_5, vVar0)) };
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*uParam3, uParam1->f_5, iVar6, vVar0, uParam1->f_68[iParam2 /*3*/], false, false, false, false, 2, true, false, false);
					}
					else
					{
						ENTITY::SET_ENTITY_ROTATION(*uParam3, uParam1->f_68[iParam2 /*3*/], 2, true);
					}
					*uParam0 = 2;
					Jump @453; //curOff = 442
					if (bParam8)
					{
					}
					Jump @614; //curOff = 453
					if (!bParam7)
					{
						if (uParam1->f_26[iParam2] != 0)
						{
							iVar7 = 3;
						}
						else
						{
							iVar7 = 4;
						}
						if (MISC::IS_STRING_NULL_OR_EMPTY(sParam4))
						{
							*uParam0 = iVar7;
						}
						else if (!ENTITY::DOES_ENTITY_EXIST(*uParam3))
						{
							*uParam0 = iVar7;
						}
						else if (!TASK::DOES_SCENARIO_POINT_EXIST(uParam1->f_6))
						{
							*uParam0 = iVar7;
						}
						else if (TASK::_ASSOCIATE_PROP_WITH_SCENARIO(uParam1->f_6, *uParam3, sParam4, true))
						{
							*uParam0 = iVar7;
						}
						else if (bParam8)
						{
							*uParam0 = iVar7;
						}
					}
					Jump @614; //curOff = 574
					if (uParam1->f_26[iParam2] != 0)
					{
						TASK::_0xA6A76D666A281F2D(*uParam3, uParam1->f_26[iParam2]);
						*uParam0 = 4;
					}
				}
			}
			default:
				break;
	}
}

void func_22(int iParam0, bool bParam1, bool bParam2)
{
	float fVar0;
	float fVar1;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(*iParam0))
	{
		return;
	}
	if (*bParam1)
	{
		fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(*iParam0);
		fVar1 = ((fVar0 - iParam0->f_2) / (iParam0->f_1 - iParam0->f_2));
		if (fVar1 >= 0f)
		{
			iParam0->f_3 = fVar1;
		}
		if (iParam0->f_3 >= 1f && !*bParam2)
		{
			*bParam2 = 1;
		}
		if (PAD::IS_CONTROL_PRESSED(0, -1.068381E+13f))
		{
			iParam0->f_4 = iParam0->f_3;
		}
	}
}

void func_23(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::IS_ENTITY_ATTACHED(iParam0))
		{
			ENTITY::DETACH_ENTITY(iParam0, bParam1, bParam2);
		}
	}
}

void func_24(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (func_43((*uParam0)[iVar0], 0))
		{
			func_44((*uParam0)[iVar0], 1, bParam2, 0, 0, iParam3, 0, 0, 0, 0);
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return DECORATOR::DECOR_EXIST_ON(iParam0, "chest_open");
	}
	return false;
}

void func_26(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		DECORATOR::DECOR_SET_BOOL(iParam0, "chest_open", true);
	}
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		func_46(func_45(-4.437981E-15f), 1);
	}
	else
	{
		func_46(func_45(1.932476E-09f), 1);
	}
}

void func_27(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		iVar1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(uParam0->f_5);
		switch (uParam0->f_103[iVar0 /*5*/])
		{
			case 0:
				func_47(0, 0f, 0f, 0f, &iVar1, uParam0->f_103[iVar0 /*5*/].f_2, 0, 0);
				break;
			case 2:
				func_49(0, 0f, 0f, 0f, &iVar1, WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(func_48(uParam0->f_103[iVar0 /*5*/].f_3, 1)), 0, 0, 0);
				break;
			case 3:
				func_51(0, 0f, 0f, 0f, &iVar1, func_50(uParam0->f_103[iVar0 /*5*/].f_3, 1), 0, 0);
				break;
			case 1:
				func_52(0, 0f, 0f, 0f, uParam0->f_37[iVar0 /*3*/], uParam0->f_68[iVar0 /*3*/], &iVar1, uParam0->f_103[iVar0 /*5*/].f_3, 1, 0, 0, uParam0->f_103[iVar0 /*5*/].f_4, uParam0->f_154[iVar0]);
				break;
			case -1:
				Jump @239; //curOff = 224
				iVar0++;
			}
		}

void func_28(int* iParam0, bool bParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if (!bParam1)
		{
			OBJECT::DELETE_OBJECT(iParam0);
		}
	}
}

void func_29(int iParam0)
{
}

void func_30(int iParam0)
{
}

void func_31(int iParam0)
{
}

bool func_32(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_33(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 1;
	}
	return 0;
}

bool func_34(int iParam0)
{
	if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && DECORATOR::DECOR_EXIST_ON(iParam0, "scripted_loot_only")) && DECORATOR::DECOR_GET_BOOL(iParam0, "scripted_loot_only"))
	{
		return true;
	}
	return false;
}

void func_35(var uParam0, int iParam1, int iParam2)
{
	bool bVar0;
	var uVar1;
	vector3 vVar2;
	vector3 vVar5;
	int iVar8;
	var uVar9;
	bool bVar10;
	var uVar11;
	var uVar12;

	while (!func_15(uParam0->f_5) && iVar8 < iParam2)
	{
		bVar0 = func_53(uParam0->f_5, &uVar9, &uVar1, &uVar11, &uVar12, &vVar2, &vVar5, &bVar10);
		if (func_43(bVar0, 0))
		{
			func_54(uParam0, uVar1, vVar2, vVar5, bVar0, uVar9, uVar11, uVar12, bVar10);
			iParam1->f_1[iVar8] = bVar0;
			iVar8++;
		}
	}
}

bool func_36(var uParam0)
{
	return TASK::_GET_SCENARIO_POINT_RADIUS(*uParam0) >= 1065185444;
}

float func_37(struct<6> Param0, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97, var uParam98, var uParam99, var uParam100, var uParam101, var uParam102, var uParam103, var uParam104, var uParam105, var uParam106, var uParam107, var uParam108, var uParam109, var uParam110, var uParam111, var uParam112, var uParam113, var uParam114, var uParam115, var uParam116, var uParam117, var uParam118, var uParam119, var uParam120, var uParam121, var uParam122, var uParam123, var uParam124, var uParam125, var uParam126, var uParam127, var uParam128, var uParam129, var uParam130, var uParam131, var uParam132, var uParam133, var uParam134, var uParam135, var uParam136, var uParam137, var uParam138, var uParam139, var uParam140, var uParam141, var uParam142, var uParam143, var uParam144, var uParam145, var uParam146, var uParam147, var uParam148, var uParam149, var uParam150, var uParam151, var uParam152, var uParam153, var uParam154, var uParam155, var uParam156, var uParam157, var uParam158, var uParam159, var uParam160, var uParam161, var uParam162, var uParam163, var uParam164, var uParam165)
{
	float fVar0;

	switch (func_55())
	{
		case 10:
			if (func_57(Param0.f_5, func_56(1), 1) < 1097859072)
			{
				fVar0 = 3.009617f;
				*uParam165 = 1.168557E-30f;
			}
			break;
		case -1:
			if (func_57(Param0.f_5, func_56(2), 1) < 1097859072)
			{
				fVar0 = 3.009617f;
				*uParam165 = 1.168557E-30f;
			}
			break;
	}
	return fVar0;
}

float func_38(var uParam0, var uParam1, int iParam2)
{
	if (iParam2 < 0 || iParam2 >= uParam0->f_26)
	{
		*uParam1 = 0;
		return 3.009617f;
	}
	*uParam1 = uParam0->f_26[iParam2];
	return uParam0->f_12[iParam2];
}

bool func_39(var uParam0)
{
	return !(DECORATOR::DECOR_EXIST_ON(*uParam0, "chest_local_only") && DECORATOR::DECOR_GET_BOOL(*uParam0, "chest_local_only"));
}

void func_40(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 0)
	{
		iParam2 = ENTITY::GET_ENTITY_MODEL(*uParam1);
	}
	if (iParam2 == -3.936516E-05f || iParam3 == -1.516899f)
	{
		DECORATOR::DECOR_SET_BOOL(*uParam1, "loot_mp_mission_only", true);
	}
}

int func_41(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

Vector3 func_42(bool bParam0, vector3 vParam1, vector3 vParam4)
{
	if (bParam0)
	{
		return vParam1;
	}
	return vParam4;
}

bool func_43(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_44(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!func_58(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_59(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_60(bParam0, bParam2);
	iVar2 = 0;
	if (func_61(bParam0) == -42.1084f)
	{
		if (!func_62(bParam0, 7.396633E-08f) && !func_62(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_63(bParam0, 8388608) && !func_64(27))
	{
		func_65(27);
	}
	func_66(bParam0);
	if (!bVar3)
	{
		if (func_62(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_50(func_67(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_68() == -1)
				{
					func_69(bVar1);
				}
				if (func_70(0) && func_71(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_72(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_73(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_61(bParam0) == -3.265313E+23f)
		{
			if (!func_74(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_61(bParam0) == 6.919076E-28f && func_75(bParam0))
		{
			if (!func_76(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_62(bParam0, -1.355837E+35f))
		{
			func_46(func_45(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_46(func_77(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_62(bParam0, -3.187887E+34f) && !func_62(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_78(536, 0);
			}
			if (func_62(bParam0, -2.826186E-34f) || func_62(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_62(bParam0, -8.87647E+33f))
		{
			if (func_62(bParam0, -157.5682f))
			{
			}
		}
		else if (func_62(bParam0, -1.641295E-14f) && func_62(bParam0, 888.6404f))
		{
			func_78(519, 0);
		}
		else if (func_62(bParam0, 888.6404f) && func_62(bParam0, -1.086842E+20f))
		{
		}
		else if (func_62(bParam0, 4.619806E-19f))
		{
		}
		else if (func_62(bParam0, 9.243318E-18f))
		{
			if (func_79())
			{
				func_80(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_62(bParam0, 1.063826E-10f) && func_62(bParam0, 7.561756E-05f))
		{
			func_81(bParam0);
		}
		else if (func_62(bParam0, -1.56509E-23f))
		{
			func_82(bParam0);
		}
		else if (func_62(bParam0, -2.873199E-24f))
		{
			func_83(bParam0);
		}
		else if (func_62(bParam0, -0.08388482f) && func_62(bParam0, 7.561756E-05f))
		{
			func_84(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_62(bParam0, 7.339242E+27f))
		{
			func_85();
		}
		else if (func_62(bParam0, -6.685221E-33f))
		{
		}
		else if (func_62(bParam0, 3.708451E-17f))
		{
		}
		else if (func_62(bParam0, -0.08388482f) && func_62(bParam0, -8.498268E-23f))
		{
		}
		else if (func_62(bParam0, -2.826186E-34f) || func_62(bParam0, -5.200334E-11f))
		{
		}
		else if (func_62(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_62(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_86(3.397524E-31f, 1))
					{
						func_44(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_86(6.760231E-15f, 1))
					{
						func_44(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_86(-13818.36f, 1))
					{
						func_44(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_86(4.642866E-20f, 1))
					{
						func_44(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_86(-21.88862f, 1))
					{
						func_44(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_86(5.120068E-22f, 1))
					{
						func_44(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_62(bParam0, -5.092244E+08f) && func_63(bParam0, 4))
		{
		}
		else if (func_62(bParam0, 9.811189E+11f))
		{
			func_87(bParam0, &iVar2);
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
				func_89(272, func_88(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_89(270, func_88(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_89(271, func_88(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_90(685, 1.579975E+31f, 1, 1);
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
					func_90(685, 42.3843f, 1, 1);
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
					func_90(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_90(685, -6.137742E-06f, 1, 1);
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
					func_90(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_90(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_78(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_78(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_64(1))
				{
					func_78(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_78(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_68() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_78(534, 0);
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
		func_91(&bVar5);
		if (!func_73(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_70(0))
		{
			return 1;
		}
		if (func_61(bParam0) == -42.1084f)
		{
			func_92(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_70(0) && !func_93())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_44(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_94(iVar2, 0);
		}
	}
	Var30 = { func_95(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_96(bParam0);
	if (fParam6 > 0f)
	{
		if (func_62(bParam0, -5.092244E+08f))
		{
			func_97(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_98(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

struct<2> func_45(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
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

bool func_47(int iParam0, vector3 vParam1, var uParam4, float fParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		return func_101(*uParam4, fParam5);
	}
	return false;
}

bool func_48(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_61(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_62(bParam0, 9.811189E+11f))
	{
		func_102(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

void func_49(int iParam0, vector3 vParam1, var uParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam7, iParam8);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		func_103(*uParam4, iParam5, iParam6, 1);
	}
}

bool func_50(bool bParam0, bool bParam1)
{
	if (!func_43(bParam0, 0))
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

void func_51(int iParam0, vector3 vParam1, var uParam4, bool bParam5, int iParam6, int iParam7)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		*uParam4 = func_99(iParam0, vParam1, iParam6, iParam7);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*uParam4))
	{
		func_100(uParam4);
		func_104(*uParam4, bParam5);
	}
}

void func_52(int iParam0, vector3 vParam1, vector3 vParam4, vector3 vParam7, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		*iParam10 = func_99(iParam0, vParam1, iParam13, iParam14);
	}
	if (ENTITY::DOES_ENTITY_EXIST(*iParam10))
	{
		if (!func_105(vParam4) || !func_105(vParam7))
		{
			func_106(*iParam10, vParam4, vParam7);
		}
		func_100(iParam10);
		func_107(*iParam10, iParam16);
		func_108(*iParam10, iParam11, iParam12, iParam15);
	}
}

int func_53(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	char cVar6[16];
	struct<2> Var8;
	struct<2> Var10;
	int iVar12;
	int iVar13;

	iVar0 = 0;
	iVar1 = 0;
	*uParam1 = 0;
	*bParam7 = -1;
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_empty"))
	{
		return 0;
	}
	*uParam1 = 1;
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_money"))
	{
		*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_money");
		*uParam2 = 0;
		return 3.996812E+36f;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "fLoot_money"))
	{
		*uParam3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "fLoot_money");
		DECORATOR::DECOR_REMOVE(iParam0, "fLoot_money");
		*uParam2 = 0;
		return func_109(*uParam3);
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_capitale"))
	{
		DECORATOR::DECOR_REMOVE(iParam0, "loot_capitale");
		*uParam2 = 4;
		if (Global_1901671.f_170.f_71)
		{
			return 0;
		}
		else
		{
			return 9.27052E-12f;
		}
	}
	StringCopy(&cVar6, "loot_ammo", 16);
	iVar5 = 1;
	while (iVar5 <= 3)
	{
		Var8 = { cVar6 };
		Var10 = { cVar6 };
		StringIntConCat(&Var8, iVar5, 16);
		StringIntConCat(&Var10, iVar5, 16);
		StringConCat(&Var8, "_type", 16);
		StringConCat(&Var10, "_amt", 16);
		if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var8))
		{
			iVar1 = DECORATOR::DECOR_GET_INT(iParam0, &Var8);
			if (iVar1 != 0)
			{
				iVar0 = WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(iVar1);
				DECORATOR::DECOR_REMOVE(iParam0, &Var8);
				if (DECORATOR::DECOR_EXIST_ON(iParam0, &Var10))
				{
					*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, &Var10);
					DECORATOR::DECOR_REMOVE(iParam0, &Var10);
					*uParam2 = 2;
				}
				return iVar0;
			}
		}
		iVar5++;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_weapon"))
	{
		iVar1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_weapon");
		if (iVar1 != 0)
		{
			DECORATOR::DECOR_REMOVE(iParam0, "loot_weapon");
			*uParam2 = 3;
			return func_110(iVar1);
		}
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt1"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone1"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone1");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model1"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model1");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model1");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset1z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset1z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient1z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient1z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient1z");
		}
		iVar12 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type1");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type1");
		*uParam2 = 1;
		return iVar12;
	}
	if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_amt2"))
		{
			*uParam1 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_amt2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_amt2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_bone2"))
		{
			*bParam7 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_bone2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_bone2");
		}
		if (DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_model2"))
		{
			*uParam4 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_model2");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_model2");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_offset2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_offset2z");
			*uParam5 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_offset2z");
		}
		if ((DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2x") && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2y")) && DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_orient2z"))
		{
			fVar2 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2x");
			fVar3 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2y");
			fVar4 = DECORATOR::DECOR_GET_FLOAT(iParam0, "loot_item_orient2z");
			*uParam6 = { fVar2, fVar3, fVar4 };
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2x");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2y");
			DECORATOR::DECOR_REMOVE(iParam0, "loot_item_orient2z");
		}
		iVar13 = DECORATOR::DECOR_GET_INT(iParam0, "loot_item_type2");
		DECORATOR::DECOR_REMOVE(iParam0, "loot_item_type2");
		*uParam2 = 1;
		return iVar13;
	}
	return 0;
}

void func_54(var uParam0, var uParam1, vector3 vParam2, vector3 vParam5, bool bParam8, var uParam9, var uParam10, var uParam11, bool bParam12)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (uParam0->f_103[iVar0 /*5*/] == -1)
		{
			uParam0->f_103[iVar0 /*5*/] = uParam1;
			uParam0->f_154[iVar0] = bParam12;
			uParam0->f_103[iVar0 /*5*/].f_3 = bParam8;
			uParam0->f_103[iVar0 /*5*/].f_1 = uParam9;
			uParam0->f_103[iVar0 /*5*/].f_2 = uParam10;
			uParam0->f_103[iVar0 /*5*/].f_4 = uParam11;
			if (func_111(uParam0->f_103[iVar0 /*5*/].f_3) && func_112(uParam0->f_103[iVar0 /*5*/].f_3))
			{
				func_113(&(uParam0->f_37[iVar0 /*3*/]), &(uParam0->f_68[iVar0 /*3*/]));
			}
			else
			{
				if (!func_105(vParam2))
				{
					uParam0->f_37[iVar0 /*3*/] = { vParam2 };
				}
				if (!func_105(vParam5))
				{
					uParam0->f_68[iVar0 /*3*/] = { vParam5 };
				}
			}
		}
		else
		{
			iVar0++;
		}
	}
}

int func_55()
{
	return Global_1896646.f_41;
}

Vector3 func_56(int iParam0)
{
	vector3 vVar0;

	switch (iParam0)
	{
		case 1:
			vVar0 = { 1158715433, 1149302550, 1117593836 };
			break;
		case 2:
			vVar0 = { 1126122186, -994864149, 1109917696 /* Float: 42f */ };
			break;
	}
	return vVar0;
}

float func_57(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_58(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_68() == -1)
	{
		if (func_111(bParam0) && func_114(bParam0))
		{
			func_115(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_59(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_116(bParam0, iParam1);
	Var0 = { func_117(bParam0, 0, 1) };
	iVar5 = func_118(bParam0, &Var0, 0, 0);
	iVar6 = func_119(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_62(bParam0, -1.690907E-35f))
		{
			func_78(674, 1);
		}
		else if (func_68() == -1)
		{
			func_78(673, 0);
		}
	}
	if (func_120(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_60(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_121())
	{
		return;
	}
	switch (func_122(bParam0, -60352.49f))
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

int func_61(bool bParam0)
{
	vector3 vVar0;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_62(bool bParam0, int iParam1)
{
	if (!func_43(bParam0, 0))
	{
		return func_124(func_123(bParam0), iParam1);
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

bool func_63(bool bParam0, int iParam1)
{
	if (!func_43(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

bool func_64(int iParam0)
{
	if (!func_125(iParam0))
	{
		return false;
	}
	return func_126(iParam0);
}

void func_65(int iParam0)
{
	if (!func_125(iParam0))
	{
		return;
	}
	func_127(iParam0);
	func_128(iParam0);
}

void func_66(bool bParam0)
{
	if (func_62(bParam0, -1.640085E-16f))
	{
		func_129(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_62(bParam0, -4.561297E+28f))
	{
		func_129(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_62(bParam0, 2.133228E-14f))
	{
		func_129(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_62(bParam0, 5.050617E+08f))
	{
		func_129(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_67(bool bParam0, bool bParam1)
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
	if (func_43(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_130(bVar0) || func_131(bVar0))
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

int func_68()
{
	return Global_1572887.f_14;
}

void func_69(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_132(bParam0))
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

bool func_70(bool bParam0)
{
	if (func_68() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_133(bParam0));
}

bool func_71(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_117(bParam0, 0, 1) };
		if (func_134(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_135(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_136(bParam0, Var0, Var0.f_4, 0) };
				func_137(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_70(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_72(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_138(bParam0, iParam1);
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

bool func_72(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_75(bParam0))
	{
		return false;
	}
	if (!func_70(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

int func_73(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	iVar0 = func_139(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_140(bParam0, iParam1, iParam2);
	}
	Var1 = { func_117(bParam0, 0, 1) };
	Var6 = { func_136(bParam0, Var1, Var1.f_4, 0) };
	return func_141(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_74(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_50(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_68() == -1)
		{
			func_69(bVar0);
			if (iParam1 == 3787186f)
			{
				func_142(bVar0);
			}
		}
		if (!func_120(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_115(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_143(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_71(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_71(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_71(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_144())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_145(bVar0))
				{
					func_71(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_71(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_146(Global_33, 2, 0, 1);
				if ((((func_132(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_86(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_132(bVar7) && func_86(-0.0002099206f, 1))
				{
					if (!func_71(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_71(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_71(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_78(515, 1);
	}
	return true;
}

bool func_75(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

int func_76(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_75(bParam0))
	{
		return 0;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_132(bVar4))
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
		func_89(func_147(bParam0), func_88(bParam0, 0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_70(0))
	{
		if (func_72(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_73(bParam0, *iParam1, iParam2);
	}
	return 0;
}

struct<2> func_77(float fParam0, float fParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = fParam1;
	return Var0;
}

void func_78(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_150(iVar0, iVar1);
}

bool func_79()
{
	return false;
}

int func_80(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_68() == 0)
	{
		func_94(iParam0, 0);
		return 0;
	}
	iVar0 = func_151(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_152(iVar0, sParam4, iParam5, 0);
	}
	func_153(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_81(bool bParam0)
{
}

void func_82(bool bParam0)
{
}

void func_83(bool bParam0)
{
}

void func_84(bool bParam0)
{
}

void func_85()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

bool func_86(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_61(bParam0);
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
			if (!func_154(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_155(bParam0))
			{
				return true;
			}
			break;
	}
	return func_156(bParam0, 0, 0, 0) >= iParam1;
}

void func_87(bool bParam0, int iParam1)
{
	var uVar0;

	func_102(bParam0, iParam1, &uVar0);
}

bool func_88(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_157(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

void func_89(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_158(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_90(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_148(iParam0, &iVar0, &iVar1);
	if (!func_149(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_158(iParam0, 1024))
	{
		return;
	}
	func_150(iVar0, iVar1);
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

void func_91(bool bParam0)
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

void func_92(bool bParam0)
{
	if (func_68() != -1)
	{
		return;
	}
}

bool func_93()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

int func_94(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_159(&Var4, 2.95884E+10f);
	return func_160(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_95(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_43(bParam0, 0))
	{
		return Var0;
	}
	if (func_62(bParam0, -8.087424E+27f))
	{
		if (func_68() == -1)
		{
			if (func_62(bParam0, -3.480943E+19f))
			{
				return func_161(4.052717E-32f);
			}
			else
			{
				return func_161(9918.3f);
			}
		}
	}
	else if (func_62(bParam0, -3.480943E+19f))
	{
		return func_161(-18395.16f);
	}
	if (func_62(bParam0, 4.091206E+36f))
	{
		return func_161(3.674458E+22f);
	}
	return Var2;
}

void func_96(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_97(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_162(Global_1902818.f_37);
	func_164(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_163(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_98(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_43(bParam0, 0))
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
	if (!func_165() || bParam6)
	{
		func_166(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_167(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_63(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_61(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_62(bParam0, -5.215192E-33f)) && !func_62(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_168(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_169(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_62(bParam0, 6.834376E-22f))
	{
		sVar17 = func_170(bParam0);
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
	if (func_62(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_171(bParam0))
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
	bVar18 = func_88(bParam0, 0);
	if ((func_172(iVar12) && func_62(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_173(bParam0);
	}
	else if (func_61(bParam0) == -42.1084f)
	{
		bVar19 = func_174(bParam0);
		if (func_43(bVar19, 0))
		{
			bVar18 = func_88(bVar19, 0);
		}
	}
	if (func_175(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_176(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_177(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_178(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_179(bParam0, &cVar22))
		{
			sVar21 = func_181(func_180(cVar22), 4.808429E-35f);
		}
	}
	func_164(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

int func_99(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;

	STREAMING::REQUEST_MODEL(iParam0, false);
	if (!STREAMING::HAS_MODEL_LOADED(iParam0))
	{
		return 0;
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
	{
		iParam4 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam1, iParam5, 1f, 0, false);
	}
	if (TASK::DOES_SCENARIO_POINT_EXIST(iParam4))
	{
		if (TASK::_DOES_SCENARIO_POINT_HAVE_PROPS(iParam4))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(iParam4, "CONTAINER");
			if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
			{
				iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
			}
		}
	}
	else
	{
		iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
	}
	return iVar0;
}

void func_100(int iParam0)
{
	if (func_182())
	{
		DECORATOR::DECOR_SET_BOOL(*iParam0, "loot_mp_mission_only", true);
	}
}

bool func_101(int iParam0, float fParam1)
{
	return DECORATOR::DECOR_SET_FLOAT(iParam0, "fLoot_money", fParam1);
}

void func_102(bool bParam0, int iParam1, var uParam2)
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

void func_103(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		fVar0 = func_183(iParam0);
		func_184(iParam0, iParam1, iParam2, fVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo1_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo1_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo1_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo2_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo2_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo2_amt", iParam2);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_ammo3_type") || (bParam3 && DECORATOR::DECOR_GET_INT(iParam0, "loot_ammo3_type") == iParam1))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_type", iParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_ammo3_amt", iParam2);
	}
}

void func_104(int iParam0, bool bParam1)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		fVar0 = func_183(iParam0);
		func_184(iParam0, bParam1, 1, fVar0);
	}
	else
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_weapon", bParam1);
	}
}

bool func_105(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_106(int iParam0, vector3 vParam1, vector3 vParam4)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset1z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient1z", vParam4.z);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2x", vParam1.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2y", vParam1.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_offset2z", vParam1.z);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2x", vParam4.x);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2y", vParam4.y);
		DECORATOR::DECOR_SET_FLOAT(iParam0, "loot_item_orient2z", vParam4.z);
	}
}

void func_107(int iParam0, int iParam1)
{
	if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone1", iParam1);
		}
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		if (iParam1 >= 0)
		{
			DECORATOR::DECOR_SET_INT(iParam0, "loot_item_bone2", iParam1);
		}
	}
}

void func_108(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		fVar0 = func_183(iParam0);
		func_184(iParam0, bParam1, iParam2, fVar0);
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type1"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type1", bParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt1", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model1", iParam3);
		return;
	}
	else if (!DECORATOR::DECOR_EXIST_ON(iParam0, "loot_item_type2"))
	{
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_type2", bParam1);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_amt2", iParam2);
		DECORATOR::DECOR_SET_INT(iParam0, "loot_item_model2", iParam3);
		return;
	}
}

int func_109(var uParam0)
{
	return 0;
}

int func_110(int iParam0)
{
	if (WEAPON::IS_WEAPON_VALID(iParam0))
	{
		return iParam0;
	}
	return 0;
}

bool func_111(bool bParam0)
{
	return func_61(bParam0) == -3.265313E+23f;
}

bool func_112(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

void func_113(var uParam0, var uParam1)
{
	*uParam0 = { -1107967345 /* Float: -0.12f */, 1039516303 /* Float: 0.12f */, 1039516303 /* Float: 0.12f */ };
	*uParam1 = { 1119092736 /* Float: 90f */, 0f, 1122369536 /* Float: 115f */ };
}

bool func_114(bool bParam0)
{
	var uVar0;

	if (func_68() != -1)
	{
		return false;
	}
	if (func_63(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_120(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_86(bParam0, 1);
}

void func_115(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_61(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_50(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_131(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_156(bParam0, 0, 0, 0) == 0))
		{
			if (func_68() == -1)
			{
				func_69(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_98(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_116(bool bParam0, int iParam1)
{
	if (func_62(bParam0, 7.644572E-37f))
	{
		func_176(bParam0, -982726.7f, iParam1, 1);
	}
}

struct<5> func_117(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_185(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_61(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_136(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_186(bParam1) };
			if (bParam2 && func_187(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_134(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_134(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_135(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_188(bParam1) };
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
			if (func_189(bParam0, -2.580501E-27f))
			{
				Var0 = { func_136(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_189(bParam0, -4.220332E-15f))
			{
				Var0 = { func_136(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_136(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_189(bParam0, -3.171238E-21f))
			{
				Var0 = { func_136(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_190(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_189(bParam0, -3.171238E-21f))
			{
				Var0 = { func_136(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

int func_118(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_43(bParam0, 0))
	{
		if (func_191(func_123(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_61(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_139(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_133(bParam3), bParam0);
}

int func_119(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_75(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam1), bParam0, bParam3);
}

bool func_120(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_192(&bParam0);
	if (!func_43(bParam0, 0) && !func_191(func_123(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_139(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_111(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_186(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_134(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_135(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_187(bParam0, 1))
		{
			if (!func_134(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_135(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_118(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_193(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_121()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_194(Global_33, 8.330918E+10f)) && !func_194(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

int func_122(bool bParam0, int iParam1)
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

bool func_123(bool bParam0)
{
	return bParam0;
}

int func_124(bool bParam0, int iParam1)
{
	if (!func_191(bParam0, 2))
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

bool func_125(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_126(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_127(int iParam0)
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

void func_128(int iParam0)
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
			func_195(1);
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
			func_196(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_196(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_196(3);
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
			func_197(1);
			break;
		case 33:
			func_198(1);
			break;
		case 34:
			func_199(1);
			break;
		case 35:
			break;
		case 36:
			func_200(0);
			break;
		case 37:
			func_201(0);
			break;
		case 38:
			func_202(0);
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
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_78(677, 0);
			break;
		case 3:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_78(678, 0);
			break;
		case 4:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_78(679, 0);
			break;
		case 5:
			if (func_203() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_204("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_78(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_68() == -1)
			{
				if (!func_86(0.01458261f, 1))
				{
					func_73(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_68() == -1)
			{
				if (!func_86(0.01458261f, 1))
				{
					func_73(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_86(7.734759E-34f, 1))
				{
					func_73(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_68() == -1)
			{
				if (!func_86(1.044822E-10f, 1))
				{
					func_73(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_68() == -1)
			{
				if (!func_86(1.044822E-10f, 1))
				{
					func_73(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_86(-1.840652E+20f, 1))
				{
					func_73(-1.840652E+20f, 1, 6.028273E-12f);
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

int func_129(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_205(bParam0, &uVar25, &Var12, &Var0, iParam1, iParam2, iParam3, bParam4);
}

bool func_130(bool bParam0)
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

bool func_131(bool bParam0)
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

bool func_132(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

int func_133(bool bParam0)
{
	if (func_68() == -1)
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

bool func_134(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_193(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_135(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_206(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_136(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_43(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_133(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_137(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_207(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_190(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_70(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_68() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_208(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_209(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_133(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_138(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		iVar2 = func_210(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, iVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_139(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_191(func_123(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_140(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_139(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_117(bParam0, 0, 0) };
	if (func_120(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_70(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_133(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

int func_141(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_120(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return 0;
	}
	if (!func_70(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_133(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_142(bool bParam0)
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
	iVar2 = func_211();
	func_212(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_143(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_112(bParam0))
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

bool func_144()
{
	return false;
}

bool func_145(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_146(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_147(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_64(49))
			{
				if (!func_64(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_64(50))
			{
				if (!func_64(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_148(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_149(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_213(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_214(iParam0))
	{
		return false;
	}
	if (func_215(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_158(iParam0, 1)) || func_216(32768))
	{
		if (!func_158(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_217())
	{
		return false;
	}
	return true;
}

void func_150(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_151(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_68() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_86(6.217872E+26f, 1))
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
			if (func_43(bVar25, 0) && func_62(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_152(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_218(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_164(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_153(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_219() || func_220())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_164(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_164(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_46(func_161(6.480143E+20f), iVar1);
	}
}

bool func_154(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_48(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_221("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_222(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_132(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_223(iVar1);
				return true;
			}
			iVar3++;
		}
		func_223(iVar1);
	}
	return false;
}

bool func_155(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_168(bParam0);
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
	iVar1 = func_224(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_225(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_226(bParam0);
	iVar2 = func_225(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

int func_156(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_61(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_48(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_227(bParam0, 0);
	}
	if (func_139(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_228(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_157(bool bParam0, bool bParam1)
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

bool func_158(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_159(var uParam0, int iParam1)
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

int func_160(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_229(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_230(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_161(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

char* func_162(int iParam0)
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

float func_163(bool bParam0)
{
	var uVar0;

	if (!func_231(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

int func_164(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, char* sParam6, int iParam7, bool bParam8)
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
	func_232(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_165()
{
	return !Global_1913431;
}

void func_166(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < Global_1913431.f_3)
	{
		if ((((Global_1913431.f_4[iVar0 /*6*/] == bParam0 && Global_1913431.f_4[iVar0 /*6*/].f_2 == bParam2) && Global_1913431.f_4[iVar0 /*6*/].f_3 == iParam3) && Global_1913431.f_4[iVar0 /*6*/].f_4 == bParam4) && Global_1913431.f_4[iVar0 /*6*/].f_5 == bParam5)
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
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_3 = iParam3;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_4 = bParam4;
		Global_1913431.f_4[Global_1913431.f_3 /*6*/].f_5 = bParam5;
		Global_1913431.f_3++;
	}
}

char* func_167(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_168(bool bParam0)
{
	struct<2> Var0;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

bool func_169(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*uParam1 = { Var3.f_2[iVar0 /*3*/] };
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

char* func_170(bool bParam0)
{
	if (func_62(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_62(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_62(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_62(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_62(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_62(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_62(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_62(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_62(bParam0, -1.58908E+26f) || func_62(bParam0, -3.503386E-34f)) || func_62(bParam0, -1.887503E+19f)) || func_62(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_171(bool bParam0)
{
	if (func_62(bParam0, -1.15596E+32f))
	{
		if (((func_233(bParam0, -9.979451E-09f) || func_233(bParam0, 2.758862E+11f)) || func_233(bParam0, 1.868312E+36f)) || func_233(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_62(bParam0, -6.231785E+11f) || func_62(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_172(int iParam0)
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

int func_173(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_43(bParam0, 0))
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

bool func_174(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_234(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_235(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_236(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_237(bVar14))
			{
				func_238(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_238(iVar11);
	}
	return false;
}

bool func_175(bool bParam0, int iParam1)
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

int func_176(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_43(bParam0, 0) && !func_191(func_123(bParam0), 2))
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

char* func_177(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_178(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_239(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_179(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_43(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_240(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_241(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_242(bParam0), 128);
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

char* func_180(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_181(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_177(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_182()
{
	return Global_3145858 != 1.294398E-25f;
}

float func_183(int iParam0)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (ENTITY::IS_ENTITY_A_PED(iParam0))
		{
			iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (PED::IS_PED_HUMAN(iVar0))
			{
				if (PED::IS_PED_MALE(iVar0))
				{
					return 1.088669E-19f;
				}
				else
				{
					return -1.529012E+26f;
				}
			}
		}
	}
	return 1.452927E-31f;
}

bool func_184(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<13> Var0;
	int iVar23;

	Var0.f_1 = 10;
	Var0.f_12 = 10;
	Var0 = 1;
	Var0.f_1[0] = bParam1;
	Var0.f_12[0] = iParam2;
	iVar23 = 13;
	return ENTITY::_REQUEST_ENTITY_LOOT_LIST(iParam0, &Var0, iParam3, iVar23, 2, false);
}

struct<4> func_185(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_133(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_136(2.982335E+09f, func_243(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_136(2.982335E+09f, func_243(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_136(2.982335E+09f, func_243(), -5.45926E-19f, bParam0);
}

struct<4> func_186(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_136(8.681942E-06f, func_185(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_136(8.681942E-06f, func_185(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_136(8.681942E-06f, func_185(bParam0), -1.942248E+12f, 0);
}

int func_187(bool bParam0, bool bParam1)
{
	if (func_168(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_244();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

struct<4> func_188(bool bParam0)
{
	int iVar0;

	iVar0 = func_133(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_136(3.507197E-29f, func_185(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_136(3.507197E-29f, func_185(bParam0), 12999093, 0);
}

bool func_189(bool bParam0, int iParam1)
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
			if (func_245(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_190(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_246(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

bool func_191(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_192(bool bParam0)
{
	if (!func_43(*bParam0, 0))
	{
		return 0;
	}
	if (!func_247(*bParam0))
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

int func_193(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_43(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_139(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_136(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_133(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_133(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_194(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_195(bool bParam0)
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

void func_196(int iParam0)
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

void func_197(bool bParam0)
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

void func_198(bool bParam0)
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

void func_199(bool bParam0)
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

void func_200(bool bParam0)
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

void func_201(bool bParam0)
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

void func_202(bool bParam0)
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

bool func_203()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_204(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_205(bool bParam0, var uParam1, int iParam2, var uParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
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
		func_248(iParam2, -3.005759E+25f);
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
	func_249(uParam1, bParam0, Var3);
	return 1;
}

bool func_206(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_133(0);
	*iParam1 = { func_136(bParam0, func_186(0), fParam3, 0) };
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

bool func_207(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

int func_208(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_250(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_252(func_251(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_253(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_209(int iParam0, struct<17> Param1)
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

int func_210(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_211()
{
	return Global_1902565;
}

void func_212(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_254(*iParam0);
	iVar1 = func_255(*iParam0);
	iVar2 = func_256(*iParam0);
	iVar3 = func_257(*iParam0);
	iVar4 = func_258(*iParam0);
	iVar5 = func_259(*iParam0);
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
	iVar6 = func_260(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_260(iVar1, iVar0);
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
	func_261(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_213(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_214(int iParam0)
{
	if (func_158(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_215(int iParam0)
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

bool func_216(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_217()
{
	if (!func_262())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_218(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_263())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_219()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_220()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

bool func_221(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_133(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_222(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_223(int iParam0)
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

int func_224(bool bParam0)
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

int func_225(var uParam0, int iParam1)
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

int func_226(bool bParam0)
{
	int iVar0;

	iVar0 = func_168(bParam0);
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

int func_227(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_264(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_265(&Var0, func_186(0));
	}
	if (!func_266(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_223(iVar18);
	return iVar19;
}

struct<4> func_228(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_117(bParam0, bParam1, 0) };
	return func_136(bParam0, Var0, Var0.f_4, bParam1);
}

void func_229(var uParam0)
{
	func_159(uParam0, 8.505438E-34f);
	if (func_267() == 3.272964E+34f)
	{
		func_159(uParam0, 8.967694E-17f);
	}
	else
	{
		func_159(uParam0, 1.721179E-28f);
	}
}

void func_230(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_268(uParam0))
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

bool func_231(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_232(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

int func_233(bool bParam0, int iParam1)
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

int func_234(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_43(bParam0, 0))
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

struct<10> func_235(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_236(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_237(bool bParam0)
{
	if (!func_43(bParam0, 0))
	{
	}
	if (func_62(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_238(int iParam0)
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

int func_239(bool bParam0, int iParam1)
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

char* func_240(bool bParam0)
{
	bool bVar0;

	if (!func_43(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_88(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_241(bool bParam0)
{
	if (func_168(bParam0) == -1.955052E+34f || func_168(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_242(bool bParam0)
{
	int iVar0;

	if (!func_43(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_173(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

struct<4> func_243()
{
	struct<4> Var0;

	return Var0;
}

int func_244()
{
	if (func_119(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_245(bool bParam0, int iParam1, int iParam2)
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

int func_246(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_133(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

bool func_247(bool bParam0)
{
	return func_62(bParam0, 5.168749E+07f);
}

void func_248(int iParam0, int iParam1)
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

void func_249(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_268(uParam0))
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

bool func_250(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_269(iParam1->f_8, iParam0, iVar0, 2048) || func_269(iParam1->f_8, iParam0, iVar0, 32768)) || func_269(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_269(iParam1->f_8, iParam0, iVar0, 4) || func_269(iParam1->f_8, iParam0, iVar0, 256)) || func_269(iParam1->f_8, iParam0, iVar0, 65536)) || func_269(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_269(iParam1->f_8, iParam0, iVar0, 1) || func_269(iParam1->f_8, iParam0, iVar0, 8)) || func_269(iParam1->f_8, iParam0, iVar0, 65536)) || func_269(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_269(iParam1->f_8, iParam0, iVar0, 1) || func_269(iParam1->f_8, iParam0, iVar0, 16)) || func_269(iParam1->f_8, iParam0, iVar0, 2)) || func_269(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_269(iParam1->f_8, iParam0, iVar0, 8) || func_269(iParam1->f_8, iParam0, iVar0, 4096)) || func_269(iParam1->f_8, iParam0, iVar0, 256)) || func_269(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_251(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_252(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_270(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_270(iParam1, 2, 0, 0);
	return -1;
}

int func_253(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_270(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

int func_254(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_41(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_255(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_256(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_257(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_258(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_259(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_260(int iParam0, int iParam1)
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

void func_261(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_271(iParam0, iParam6);
	func_272(iParam0, iParam5);
	func_273(iParam0, iParam4);
	func_274(iParam0, iParam3);
	func_275(iParam0, iParam2);
	func_276(iParam0, iParam1);
}

bool func_262()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_263()
{
	return Global_1913431.f_127 == 0;
}

struct<18> func_264(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_265(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_266(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_133(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_267()
{
	return Global_1953279.f_1;
}

bool func_268(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_269(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_277(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_270(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_278(iParam0, iParam1, iParam2, iParam3);
}

void func_271(int iParam0, int iParam1)
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

void func_272(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_273(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_255(*iParam0);
	iVar1 = func_254(*iParam0);
	if (iParam1 < 1 || iParam1 > func_260(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_274(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_275(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_276(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_277(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_278(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_279(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_279(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_280(&(uParam0->f_4));
}

void func_280(var uParam0)
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

