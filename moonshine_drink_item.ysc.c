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
	struct<206> Var0;
	int iVar208;
	float fVar209;
	bool bVar210;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Var0.f_1.f_2 = 6f;
	Var0.f_1.f_11.f_1 = 20;
	Var0.f_1.f_33 = 20;
	Var0.f_183 = 3;
	Var0.f_187 = 14;
	iVar208 = func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2(&Var0);
	}
	NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
	NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(1);
	if (func_3(PLAYER::PLAYER_ID(), 1))
	{
		func_4(&(Var0.f_202), 16);
	}
	if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(ScriptParam_0.f_1, true, true);
	}
	Var0.f_204 = TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33);
	func_5(&ScriptParam_0, &(Var0.f_1));
	if (Var0.f_1 == 0)
	{
		if (Var0.f_204 == -4.581202E-11f)
		{
			if (Global_1297553[iVar208 /*87*/].f_19.f_20 != 0)
			{
				Var0.f_1 = Global_1297553[iVar208 /*87*/].f_19.f_20;
			}
			else if (Global_1297553[iVar208 /*87*/].f_19.f_19 == 0)
			{
				Var0.f_1 = -1.787514E+19f;
			}
			else if (Global_1297553[iVar208 /*87*/].f_19.f_19 == 2.180447E+07f || Global_1297553[iVar208 /*87*/].f_19.f_19 == 1.255573E+28f)
			{
				Var0.f_1 = 1.255573E+28f;
			}
			else if (Global_1297553[iVar208 /*87*/].f_19.f_19 == -2.142218E+09f || Global_1297553[iVar208 /*87*/].f_19.f_19 == 6.166539E+16f)
			{
				Var0.f_1 = 6.166539E+16f;
			}
			else
			{
				Var0.f_1 = -1.787514E+19f;
			}
		}
		else
		{
			Var0.f_1 = -1.787514E+19f;
		}
	}
	Var0.f_179 = func_6();
	func_7(&Var0);
	func_8(&Var0);
	while (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		func_9();
		fVar209 = func_10(&Var0, ScriptParam_0.f_1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_DISCARD", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHUG_PUT_AWAY", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_LO", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_DISCARD", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_CHEERS_HI_PUTAWAY", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_DISCARD_PROMPT", true, 1);
		PED::_SET_PED_BLACKBOARD_BOOL(Global_33, "GENERIC_ALCOHOL_BLOCK_PUTAWAY_PROMPT", true, 1);
		if ((NETWORK::GET_NUM_RESERVED_MISSION_OBJECTS(false) >= 1 && NETWORK::NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(ScriptParam_0.f_1)) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(NETWORK::OBJ_TO_NET(ScriptParam_0.f_1)))
		{
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::OBJ_TO_NET(ScriptParam_0.f_1));
		}
		if (!ScriptParam_0.f_3)
		{
			if (!Var0.f_181)
			{
				if (!PED::IS_PED_DEAD_OR_DYING(Global_33, true))
				{
					PED::SET_PED_MAX_MOVE_BLEND_RATIO(Global_33, 1.5f);
				}
			}
			PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
			func_11(&(Var0.f_1));
		}
		func_12();
		HUD::_UI_PROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_33, 1f, 2, 1, 0, func_13(&Var0), 0);
		PLAYER::_0xCD7CA3013FD12749(PLAYER::GET_PLAYER_INDEX(), HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_33));
		func_14(&Var0);
		func_15(&Var0);
		func_16(&Var0);
		switch (Var0)
		{
			case 0:
				if (func_17(Var0.f_1, 0))
				{
					func_18(&(Var0.f_1));
				}
				if (ScriptParam_0.f_3)
				{
					Var0.f_1.f_2 = 1f;
					func_19(&Var0, 3);
				}
				else
				{
					func_19(&Var0, 1);
				}
				break;
			case 1:
				if (func_20(Var0.f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[7])
				{
					PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
					PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
				}
				func_21(&Var0);
				if ((TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[0] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[7]) && func_22(Var0.f_183[0], 1))
				{
					if (func_20(Var0.f_202, 4))
					{
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[12])
						{
							TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[12], 0.25f);
						}
					}
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[2])
					{
						TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[2], 0.25f);
					}
				}
				if (((TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[2] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[12]) && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.391883E-12f)) && !func_22(Var0.f_183[0], 1))
				{
					if (func_20(Var0.f_202, 4))
					{
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[8])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[8], 0.25f);
						}
					}
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[3])
					{
						TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[3], 0.25f);
					}
				}
				if ((TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[0] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[7]) && func_22(Var0.f_183[1], 1))
				{
					if (!func_23(&(Var0.f_205)))
					{
						func_24(&(Var0.f_205), 1);
					}
					if (func_20(Var0.f_202, 4))
					{
						if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[11])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[11], 0.25f);
						}
					}
					else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[4])
					{
						TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[4], 0.25f);
					}
				}
				if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[4] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[11])
				{
					bVar210 = func_22(Var0.f_183[1], 1);
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.792979E+17f) && !bVar210)
					{
						Var0.f_180 = 1;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2555018f))
					{
						Var0.f_180 = 2;
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.568537E+10f))
					{
						Var0.f_180 = 3;
					}
					if (Var0.f_180 == 2 && !bVar210)
					{
						if (func_20(Var0.f_202, 4))
						{
							if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[10])
							{
								TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[10], 0.25f);
							}
						}
						else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != Var0.f_187[6])
						{
							TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[6], 0.25f);
						}
						Var0.f_180 = 0;
					}
					else if (Var0.f_180 == 1 && !bVar210)
					{
						if (func_20(Var0.f_202, 4))
						{
							if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[9])
							{
							}
							else
							{
								TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[9], 0.25f);
							}
						}
						else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[5])
						{
						}
						else
						{
							TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[5], 0.25f);
						}
						Var0.f_180 = 0;
					}
				}
				if (func_25(Var0.f_183[2], 1))
				{
					func_26(&Var0);
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
					{
						OBJECT::_0xCAAF2BCCFEF37F77(ScriptParam_0.f_1, 80);
					}
					func_19(&Var0, 2);
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 4.635461E-23f))
				{
					Var0.f_1.f_1++;
					func_27(fVar209);
					func_28(&(Var0.f_1), IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2);
				}
				if (IntToFloat(Var0.f_1.f_1) >= Var0.f_1.f_2)
				{
					func_26(&Var0);
					func_29(&Var0, ScriptParam_0.f_1);
					func_30(Var0.f_1, 0);
					if (ENTITY::DOES_ENTITY_EXIST(ScriptParam_0.f_1))
					{
						OBJECT::_0xCAAF2BCCFEF37F77(ScriptParam_0.f_1, 80);
					}
					func_19(&Var0, 2);
				}
				break;
			case 2:
				if (func_20(Var0.f_202, 4))
				{
					if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[7])
					{
						TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[13], 0.25f);
						func_19(&Var0, 4);
					}
				}
				else if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == Var0.f_187[0])
				{
					TASK::_0xB35370D5353995CB(Global_33, Var0.f_187[1], 0.25f);
					func_19(&Var0, 4);
				}
				break;
			case 3:
				func_28(&(Var0.f_1), 1);
				func_30(Var0.f_1, 0);
				func_19(&Var0, 4);
				break;
			case 4:
				func_26(&Var0);
				if (ScriptParam_0.f_3)
				{
					SCRIPTS::TERMINATE_THIS_THREAD();
				}
				break;
		}
		BUILTIN::WAIT(0);
	}
	func_26(&Var0);
	if ((Var0 <= 1 && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID())) && Var0.f_181)
	{
		func_28(&(Var0.f_1), 1);
		func_30(Var0.f_1, 0);
	}
}

int func_1()
{
	return Global_1297182.f_200;
}

void func_2(var uParam0)
{
	func_26(uParam0);
	if (!SCRIPTS::IS_THREAD_EXIT_REQUESTED())
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

bool func_3(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return false;
		}
	}
	return func_1() == iParam0;
}

void func_4(var uParam0, int iParam1)
{
	func_31(uParam0, iParam1);
}

void func_5(var uParam0, var uParam1)
{
	*uParam1 = uParam0->f_2;
	uParam1->f_174 = uParam0->f_1;
	uParam1->f_175 = Global_33;
}

int func_6()
{
	switch (Global_1940013)
	{
		case 1:
			return 1;
		case 2:
			return 2;
		default:
			break;
	}
	return 0;
}

int func_7(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = iVar0;
		if (func_32(uParam0->f_183[iVar0]))
		{
			func_34(uParam0->f_183[iVar0], func_33(iVar1), 0);
		}
		else
		{
			uParam0->f_183[iVar0] = func_37(func_33(iVar1), func_35(iVar1), 2, 0, 0, func_36(iVar1), 570, 4000, 10, 2f, 8.750548E+22f, 0);
			func_38(uParam0->f_183[iVar0], HUD::_UI_PROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(Global_33), 0, 1);
		}
		iVar0++;
	}
	return 1;
}

void func_8(var uParam0)
{
	switch (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174))
	{
		case joaat("MP006_S_TINMUG_MOONSHINE01X"):
			switch (Global_1940013)
			{
				case 0:
					uParam0->f_187[0] = 1.302627E+37f;
					uParam0->f_187[1] = -4.88534E+25f;
					uParam0->f_187[2] = -16018.97f;
					uParam0->f_187[3] = -3.706608E-30f;
					uParam0->f_187[4] = -1.90134E-20f;
					uParam0->f_187[5] = -808395.7f;
					uParam0->f_187[6] = 3.367272E-22f;
					uParam0->f_187[7] = -1.081177E+22f;
					uParam0->f_187[13] = 5.148385E+20f;
					uParam0->f_187[12] = 9.371421E-09f;
					uParam0->f_187[8] = -2.213997E-24f;
					uParam0->f_187[11] = 1.379944E-08f;
					uParam0->f_187[9] = -1.012283E-07f;
					uParam0->f_187[10] = -664.1404f;
					break;
				case 1:
					uParam0->f_187[0] = -2.489843E+31f;
					uParam0->f_187[1] = -5.166688E-23f;
					uParam0->f_187[2] = -6.893054E+29f;
					uParam0->f_187[3] = 2.27603E-22f;
					uParam0->f_187[4] = -1.175924E-36f;
					uParam0->f_187[5] = -1.192634E+24f;
					uParam0->f_187[6] = 1.324743E+26f;
					uParam0->f_187[7] = -8.685901E+15f;
					uParam0->f_187[13] = -161.3009f;
					uParam0->f_187[12] = -9.369526E+18f;
					uParam0->f_187[8] = 84002.8f;
					uParam0->f_187[11] = -0.001780033f;
					uParam0->f_187[9] = -4.029905E-25f;
					uParam0->f_187[10] = -2.023832E-08f;
					break;
				case 2:
					uParam0->f_187[0] = 4.782003E+08f;
					uParam0->f_187[1] = 6.367865E-31f;
					uParam0->f_187[2] = -2.465536E-14f;
					uParam0->f_187[3] = 0.0004340962f;
					uParam0->f_187[4] = -2.031917E-15f;
					uParam0->f_187[5] = 4.667251E-15f;
					uParam0->f_187[6] = 1648.623f;
					uParam0->f_187[7] = -8.685901E+15f;
					uParam0->f_187[13] = -161.3009f;
					uParam0->f_187[12] = -9.369526E+18f;
					uParam0->f_187[8] = 84002.8f;
					uParam0->f_187[11] = -0.001780033f;
					uParam0->f_187[9] = -4.029905E-25f;
					uParam0->f_187[10] = -2.023832E-08f;
					break;
			}
			break;
		default:
			switch (Global_1940013)
			{
				case 0:
					uParam0->f_187[0] = 1.302627E+37f;
					uParam0->f_187[1] = -4.589242E-17f;
					uParam0->f_187[2] = 0.02145503f;
					uParam0->f_187[3] = -3.706608E-30f;
					uParam0->f_187[4] = 3.317635E+25f;
					uParam0->f_187[5] = -808395.7f;
					uParam0->f_187[6] = -0.9274968f;
					uParam0->f_187[7] = -1.081177E+22f;
					uParam0->f_187[13] = -8.950962E-20f;
					uParam0->f_187[12] = -3.100001E+32f;
					uParam0->f_187[8] = -2.213997E-24f;
					uParam0->f_187[11] = -1.512271E+17f;
					uParam0->f_187[9] = -1.012283E-07f;
					uParam0->f_187[10] = -1.478445f;
					break;
				case 1:
					uParam0->f_187[0] = -2.489843E+31f;
					uParam0->f_187[1] = -4.469755E-38f;
					uParam0->f_187[2] = 8.689953E-08f;
					uParam0->f_187[3] = 2.27603E-22f;
					uParam0->f_187[4] = 1.371393E+35f;
					uParam0->f_187[5] = -1.192634E+24f;
					uParam0->f_187[6] = -5.857385E+23f;
					uParam0->f_187[7] = -8.685901E+15f;
					uParam0->f_187[13] = -1.216782E-06f;
					uParam0->f_187[12] = -1.223832f;
					uParam0->f_187[8] = 84002.8f;
					uParam0->f_187[11] = 2.803145E+07f;
					uParam0->f_187[9] = -4.029905E-25f;
					uParam0->f_187[10] = -6.250754E-25f;
					break;
				case 2:
					uParam0->f_187[0] = 4.782003E+08f;
					uParam0->f_187[1] = 1.593046E-22f;
					uParam0->f_187[2] = 15101.06f;
					uParam0->f_187[3] = 0.0004340962f;
					uParam0->f_187[4] = -5.361757E-36f;
					uParam0->f_187[5] = 4.667251E-15f;
					uParam0->f_187[6] = -7.580093E-16f;
					uParam0->f_187[7] = -8.685901E+15f;
					uParam0->f_187[13] = -1.216782E-06f;
					uParam0->f_187[12] = -1.223832f;
					uParam0->f_187[8] = 84002.8f;
					uParam0->f_187[11] = 2.803145E+07f;
					uParam0->f_187[9] = -4.029905E-25f;
					uParam0->f_187[10] = -6.250754E-25f;
					break;
			}
			break;
	}
}

void func_9()
{
	if (!func_17(Global_1297553[func_1() /*87*/].f_19.f_19, 0))
	{
		func_39();
	}
}

float func_10(var uParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_1();
	switch (ENTITY::GET_ENTITY_MODEL(iParam1))
	{
		case joaat("MP006_S_TINMUG_MOONSHINE01X"):
			if (uParam0->f_204 == -4.581202E-11f)
			{
				if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 0)
				{
					switch (Global_1940013)
					{
						case 0:
							return (1040187392 / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (1031798784 / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				else
				{
					if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 3.112906E-09f || Global_1297553[iVar0 /*87*/].f_19.f_19 == -1.787514E+19f)
					{
						switch (Global_1940013)
						{
							case 0:
								return (1040187392 / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (1031798784 / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if (Global_1297553[iVar0 /*87*/].f_19.f_19 == -2.142218E+09f || Global_1297553[iVar0 /*87*/].f_19.f_19 == 6.166539E+16f)
					{
						switch (Global_1940013)
						{
							case 0:
								return (1043005964 / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (1034550247 / uParam0->f_1.f_2);
							default:
								break;
						}
					}
					if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 2.180447E+07f || Global_1297553[iVar0 /*87*/].f_19.f_19 == 1.255573E+28f)
					{
						switch (Global_1940013)
						{
							case 0:
								return (1048576000 / uParam0->f_1.f_2);
							case 1:
							case 2:
								return (1040187392 / uParam0->f_1.f_2);
							default:
								break;
						}
					}
				}
			}
			else
			{
				switch (Global_1940013)
				{
					case 0:
						return (1040187392 / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (1031798784 / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			break;
		default:
			if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 0)
			{
				switch (Global_1940013)
				{
					case 0:
						return (1040187392 / uParam0->f_1.f_2);
					case 1:
					case 2:
						return (1031798784 / uParam0->f_1.f_2);
					default:
						break;
				}
			}
			else
			{
				if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 3.112906E-09f || Global_1297553[iVar0 /*87*/].f_19.f_19 == -1.787514E+19f)
				{
					switch (Global_1940013)
					{
						case 0:
							return (1040187392 / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (1031798784 / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if (Global_1297553[iVar0 /*87*/].f_19.f_19 == -2.142218E+09f || Global_1297553[iVar0 /*87*/].f_19.f_19 == 6.166539E+16f)
				{
					switch (Global_1940013)
					{
						case 0:
							return (1043005964 / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (1034550247 / uParam0->f_1.f_2);
						default:
							break;
					}
				}
				if (Global_1297553[iVar0 /*87*/].f_19.f_19 == 2.180447E+07f || Global_1297553[iVar0 /*87*/].f_19.f_19 == 1.255573E+28f)
				{
					switch (Global_1940013)
					{
						case 0:
							return (1048576000 / uParam0->f_1.f_2);
						case 1:
						case 2:
							return (1040187392 / uParam0->f_1.f_2);
						default:
							break;
					}
				}
			}
			break;
	}
	return (1040187392 / uParam0->f_1.f_2);
}

int func_11(var uParam0)
{
	if (ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return 0;
	}
	if (!uParam0->f_176)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_174))
		{
			uParam0->f_174 = TASK::_GET_ITEM_INTERACTION_ENTITY_FROM_PED(Global_33, 0);
		}
		else if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.544375E-06f))
		{
			func_40(uParam0);
			return 1;
		}
	}
	if (!uParam0->f_177)
	{
		if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -6.814535E-30f))
		{
			uParam0->f_177 = 1;
		}
	}
	return 0;
}

void func_12()
{
	func_41(&(Global_1072759.f_28313.f_1), 2f);
}

char* func_13(var uParam0)
{
	switch (uParam0->f_1)
	{
		case 1532695640:
			return "MOONSHINE_MEDIUM_GROUP_LABEL";
		case 1847740267:
			return "MOONSHINE_STRONG_GROUP_LABEL";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_AGARITA_SUNRISE"):
			return "MSHINE_FLAVOR_AGARITA_SUNRISE";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_APPLE_BERRY_CRUMB"):
			return "MSHINE_FLAVOR_APPLE_BERRY_CRUMB";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_COBBLER"):
			return "MSHINE_FLAVOR_BERRY_COBBLER";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_BERRY_MINT"):
			return "MSHINE_FLAVOR_BERRY_MINT";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_EVERGREEN"):
			return "MSHINE_FLAVOR_EVERGREEN";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_POISON_POPPYS"):
			return "MSHINE_FLAVOR_POISON_POPPYS";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_SPICED_ISLAND"):
			return "MSHINE_FLAVOR_SPICED_ISLAND";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_TROPICAL_PUNCH"):
			return "MSHINE_FLAVOR_TROPICAL_PUNCH";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CIDER"):
			return "MSHINE_FLAVOR_WILD_CIDER";
		case joaat("PROVISION_ROLE_MOONSHINER_MOONSHINE_FLAVOR_WILD_CREEK"):
			return "MSHINE_FLAVOR_WILD_CREEK";
		default:
			break;
	}
	return "MOONSHINE_WEAK_GROUP_LABEL";
}

void func_14(var uParam0)
{
	if (!func_42() && uParam0->f_179 != 0)
	{
		uParam0->f_179 = 0;
		func_4(&(uParam0->f_202), 1);
	}
	if (func_43() && uParam0->f_179 != 1)
	{
		uParam0->f_179 = 1;
		func_4(&(uParam0->f_202), 1);
	}
	if (func_44() && uParam0->f_179 != 2)
	{
		uParam0->f_179 = 2;
		func_4(&(uParam0->f_202), 1);
		if (!func_20(uParam0->f_202, 8) && func_20(uParam0->f_202, 16))
		{
			if (STATS::CHAL_IS_GOAL_ACTIVE(-2.108604E+17f, -9.335275E-05f))
			{
				STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.108604E+17f, -9.335275E-05f, 1);
			}
			func_4(&(uParam0->f_202), 8);
		}
	}
	if (func_20(uParam0->f_202, 1))
	{
		if (func_20(uParam0->f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[7])
		{
			func_45(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
			func_46(uParam0);
		}
		else if (!func_20(uParam0->f_202, 4) && TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[0])
		{
			func_45(&(uParam0->f_202), 1);
			func_8(uParam0);
			func_7(uParam0);
		}
	}
}

void func_15(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!func_20(uParam0->f_202, 4))
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && (((TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == -0.0004018912f || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == -6.356208E+22f) || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == -6.516405E-34f) || TASK::_GET_SCENARIO_POINT_TYPE_PED_IS_USING(Global_33) == -9.101335E-38f))
		{
			func_4(&(uParam0->f_202), 4);
			func_46(uParam0);
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[7])
			{
				TASK::_0xB35370D5353995CB(Global_33, uParam0->f_187[7], 0.25f);
			}
		}
	}
	else if (func_20(uParam0->f_202, 4))
	{
		if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_EXITING_SCENARIO(Global_33, false))
		{
			func_45(&(uParam0->f_202), 4);
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[0])
			{
				TASK::_0xB35370D5353995CB(Global_33, uParam0->f_187[0], 0.25f);
			}
		}
	}
}

void func_16(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (func_20(uParam0->f_202, 4))
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != func_47())
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == func_48())
			{
				uParam0->f_203 = -1.081177E+22f;
				TASK::_0xB35370D5353995CB(Global_33, func_47(), 0.25f);
			}
		}
		if ((uParam0->f_179 == 1 || uParam0->f_179 == 2) && uParam0->f_203 != func_48())
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == func_47())
			{
				uParam0->f_203 = -8.685901E+15f;
				TASK::_0xB35370D5353995CB(Global_33, func_48(), 0.25f);
			}
		}
	}
	else
	{
		if (uParam0->f_179 == 0 && uParam0->f_203 != 1.302627E+37f)
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == 4.782003E+08f || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == -2.489843E+31f)
			{
				uParam0->f_203 = 1.302627E+37f;
				TASK::_0xB35370D5353995CB(Global_33, 1.302627E+37f, 0.25f);
			}
		}
		if (uParam0->f_179 == 1 && uParam0->f_203 != -2.489843E+31f)
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == 4.782003E+08f || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == 1.302627E+37f)
			{
				uParam0->f_203 = -2.489843E+31f;
				TASK::_0xB35370D5353995CB(Global_33, -2.489843E+31f, 0.25f);
			}
		}
		if (uParam0->f_179 == 2 && uParam0->f_203 != 4.782003E+08f)
		{
			if (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == 1.302627E+37f || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == -2.489843E+31f)
			{
				uParam0->f_203 = 4.782003E+08f;
				TASK::_0xB35370D5353995CB(Global_33, 4.782003E+08f, 0.25f);
			}
		}
	}
}

bool func_17(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

void func_18(var uParam0)
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

void func_19(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_20(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_21(var uParam0)
{
	if (*uParam0 > 1)
	{
		return;
	}
	if (!func_20(uParam0->f_202, 32) && (TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[7] && TASK::GET_ITEM_INTERACTION_STATE(Global_33) != uParam0->f_187[0]))
	{
		func_4(&(uParam0->f_202), 32);
		func_49(uParam0, 0);
	}
	else if (func_20(uParam0->f_202, 32) && (TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[7] || TASK::GET_ITEM_INTERACTION_STATE(Global_33) == uParam0->f_187[0]))
	{
		func_45(&(uParam0->f_202), 32);
		func_49(uParam0, 1);
	}
}

bool func_22(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_32(iParam0))
	{
		return false;
	}
	iVar0 = func_50(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1951897[iVar0 /*23*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_23(var uParam0)
{
	return func_51(*uParam0, 1);
}

void func_24(var uParam0, bool bParam1)
{
	if (bParam1 || !func_23(uParam0))
	{
		func_52(uParam0);
	}
}

bool func_25(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_32(iParam0))
	{
		return false;
	}
	iVar0 = func_50(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_26(var uParam0)
{
	func_53(&(uParam0->f_183));
}

void func_27(float fParam0)
{
	if (fParam0 > 0f)
	{
		if (func_54())
		{
			func_55(fParam0, 1);
		}
		Global_1940013.f_3 = MISC::GET_GAME_TIMER();
	}
}

void func_28(var uParam0, bool bParam1)
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

	if ((func_56(*uParam0, 1.763507E+18f) || func_56(*uParam0, 8.273569E-15f)) || func_56(*uParam0, -1.230845E+19f))
	{
		bVar10 = true;
	}
	bVar11 = func_57(*uParam0);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	Global_1940072.f_26 = 0;
	iVar0 = 0;
	while (iVar0 < uParam0->f_11)
	{
		switch (uParam0->f_33[iVar0 /*7*/].f_1)
		{
			case -943921969:
				fVar1 = func_58(0, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_59((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				iVar9 = 1;
				break;
			case -1104847406:
				fVar2 = func_58(2, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_60((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 0);
				bVar8 = true;
				break;
			case 381158954:
				fVar3 = func_58(1, (IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				func_61((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2));
				break;
			case -416929031:
				fVar4 = func_62((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_63(0, fVar4, 1, 1, bVar10);
				iVar9 = 1;
				break;
			case 1857353317:
				fVar5 = func_62((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_63(2, fVar5, 1, 1, bVar10);
				bVar8 = true;
				break;
			case 1681823811:
				fVar6 = func_62((IntToFloat(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), (uParam0->f_33[iVar0 /*7*/].f_5 / uParam0->f_2));
				func_63(1, fVar6, 1, 1, bVar10);
				break;
			case -816334026:
				func_64((BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_2) / uParam0->f_2), 1 == uParam0->f_1);
				break;
			default:
				if (bParam1)
				{
					switch (uParam0->f_33[iVar0 /*7*/].f_1)
					{
						case 2062242710:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(19, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case -826379728:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(20, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1191740624:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(18, fVar7, bVar11, 1);
							break;
						case 1869697234:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(0, fVar7, bVar11, 1);
							iVar9 = 1;
							break;
						case 1342237631:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(2, fVar7, bVar11, 1);
							bVar8 = true;
							break;
						case -1240225157:
							fVar7 = func_65(BUILTIN::TO_FLOAT(uParam0->f_33[iVar0 /*7*/].f_3), uParam0->f_33[iVar0 /*7*/].f_4);
							func_66(1, fVar7, bVar11, 1);
							break;
					}
				}
				break;
		}
		iVar0++;
	}
	if (bParam1)
	{
		func_67(uParam0);
		func_68(*uParam0, bVar8, iVar9, 9.275179E-19f);
	}
	func_40(uParam0);
	uParam0->f_3 = (uParam0->f_3 + fVar1);
	uParam0->f_4 = (uParam0->f_4 + fVar2);
	uParam0->f_5 = (uParam0->f_5 + fVar3);
	uParam0->f_6 = (uParam0->f_6 + fVar4);
	uParam0->f_7 = (uParam0->f_7 + fVar5);
	uParam0->f_8 = (uParam0->f_8 + fVar6);
}

void func_29(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (func_20(uParam0->f_202, 16))
	{
		iVar0 = func_1();
		switch (ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			case joaat("MP006_S_TINMUG_MOONSHINE01X"):
				if (uParam0->f_204 == -4.581202E-11f)
				{
					func_69(iVar0);
					if (((func_20(uParam0->f_202, 16) && STATS::CHAL_IS_GOAL_ACTIVE(-2.108604E+17f, -6.656664E-09f)) && func_3(PLAYER::PLAYER_ID(), 1)) && Global_1297553[iVar0 /*87*/].f_19.f_17 != 0)
					{
						iVar1 = Global_1297553[iVar0 /*87*/].f_19.f_17;
						STATS::CHAL_ADD_GOAL_PROGRESS_FLOAT_BY_SCORE_ID(iVar1, 1f);
					}
				}
				else
				{
					func_71(func_70(-6.598974E+19f, -5.222834f), 1);
				}
				break;
			default:
				func_69(iVar0);
				break;
		}
	}
}

void func_30(int iParam0, bool bParam1)
{
	struct<10> Var0;
	struct<16> Var10;

	switch (iParam0)
	{
		case -2067647508:
		case -912678731:
		case -464445204:
		case 470703221:
		case 1051259759:
		case 1324459658:
			func_73(func_72(iParam0));
			break;
		case -611782825:
			func_74(-4.241801E+09f, -1.319926E-36f, 1800);
			break;
		case -1088257729:
			func_74(-2.329539E-22f, -4.815331E-35f, 1800);
			if (func_75() || func_76())
			{
				func_71(func_70(7.642884E+10f, 0.005450568f), 1);
			}
			break;
		case -1706054699:
		case -1004468971:
		case -605086052:
		case -187002287:
			Var0.f_1 = iParam0;
			Var10.f_15 = 1;
			Var10 = { Var0 };
			StringCopy(&(Var10.f_10), "generic_weight_control_item", 32);
			Var10.f_14 = 512;
			func_77(Var10, 0);
			break;
		case joaat("CONSUMABLE_GINSENG_ELIXIER"):
			break;
		case joaat("CONSUMABLE_VALERIAN_ROOT"):
			break;
		case joaat("CONSUMABLE_AGED_PIRATE_RUM"):
			break;
		case joaat("CONSUMABLE_HERB_ENGLISH_MACE"):
		case joaat("CONSUMABLE_HERB_YARROW"):
		case joaat("CONSUMABLE_HERB_MILKWEED"):
		case joaat("CONSUMABLE_HERB_GINSENG"):
		case joaat("CONSUMABLE_HERB_VANILLA_FLOWER"):
			func_78(2.372604E-26f);
			break;
		case joaat("CONSUMABLE_HERB_COMMON_BULRUSH"):
		case joaat("CONSUMABLE_HERB_OLEANDER_SAGE"):
		case joaat("CONSUMABLE_HERB_PRAIRIE_POPPY"):
			if ((bParam1 || !func_79()) || !PED::IS_PED_ON_FOOT(Global_33))
			{
				return;
			}
			if (iParam0 != 1.017381E-30f || MISC::GET_RANDOM_INT_IN_RANGE(0, 3000) < 1000)
			{
				Var10 = { Var0 };
				StringCopy(&(Var10.f_10), "generic_puking_item", 32);
				Var10.f_14 = 512;
				func_77(Var10, 0);
			}
			break;
		case joaat("CONSUMABLE_POTENT_ANTIDOTE"):
		case joaat("CONSUMABLE_ANTIDOTE"):
			if (iParam0 == 4.076297E+29f)
			{
			}
			else if (iParam0 == 6.241888E+10f)
			{
			}
			func_80();
			break;
	}
}

void func_31(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_32(int iParam0)
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

char* func_33(int iParam0)
{
	int iVar0;
	char cVar1[32];

	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 4);
	switch (Global_1940013)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
					return "MOONSHINE_DRINK";
				case 1:
					return "MOONSHINE_CHEERS";
				case 2:
					return "MOONSHINE_DISCARD";
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_DRUNK_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_DRUNK_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_DRUNK_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					StringCopy(&cVar1, "MOONSHINE_DRINK_WASTED_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
				case 1:
					StringCopy(&cVar1, "MOONSHINE_CHEERS_WASTED_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
				case 2:
					StringCopy(&cVar1, "MOONSHINE_DISCARD_WASTED_", 32);
					StringConCat(&cVar1, func_81(iVar0), 32);
					return func_82(cVar1);
			}
			break;
	}
	return "";
}

void func_34(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_32(iParam0))
	{
		return;
	}
	iVar0 = func_50(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

int func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.779732E-34f;
		case 1:
			return -7.068217E+21f;
		case 2:
			return 0.00251415f;
		default:
			break;
	}
	return 0;
}

int func_36(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 3;
		case 1:
			return 3;
		case 2:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_37(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;

	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_IS_CONTROL_ACTION_VALID(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_83(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_84(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_38(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_32(iParam0))
	{
		return;
	}
	iVar0 = func_50(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_39()
{
	int iVar0;
	int iVar1;

	iVar0 = func_85();
	iVar1 = func_86();
	if (iVar0 == 3.112906E-09f || iVar1 == -1.787514E+19f)
	{
		func_87(3.112906E-09f);
		func_88(1024);
	}
	else if (iVar0 == -2.142218E+09f || iVar1 == 6.166539E+16f)
	{
		func_87(-2.142218E+09f);
		func_88(2048);
	}
	else if (iVar0 == 2.180447E+07f || iVar1 == 1.255573E+28f)
	{
		func_87(1.255573E+28f);
		func_88(4096);
	}
}

void func_40(var uParam0)
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

void func_41(var uParam0, float fParam1)
{
	*uParam0 = (*uParam0 || fParam1);
}

bool func_42()
{
	return (func_43() || func_44());
}

bool func_43()
{
	return Global_1940013 == 1;
}

bool func_44()
{
	return Global_1940013 == 2;
}

void func_45(var uParam0, int iParam1)
{
	func_89(uParam0, iParam1);
}

void func_46(var uParam0)
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_A"):
			switch (Global_1940013)
			{
				case 0:
					uParam0->f_187[7] = joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_HOLD");
					uParam0->f_187[8] = -2.009709E+35f;
					uParam0->f_187[9] = -1.522622E+29f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = 2.059228E-36f;
						uParam0->f_187[12] = -3.111792E-30f;
						uParam0->f_187[11] = -7.617242E-24f;
						uParam0->f_187[10] = 1.108382E+15f;
					}
					else
					{
						uParam0->f_187[10] = -1360301f;
						uParam0->f_187[13] = 1.236194E+14f;
						uParam0->f_187[12] = 1.247971E-05f;
						uParam0->f_187[11] = 1.255953f;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -62716.6f;
					uParam0->f_187[8] = -0.01915118f;
					uParam0->f_187[9] = 2.384591E+09f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = -254622.6f;
						uParam0->f_187[12] = -0.0006312175f;
						uParam0->f_187[11] = 1.918396E+24f;
						uParam0->f_187[10] = -4.638207E+08f;
					}
					else
					{
						uParam0->f_187[10] = -2.518548E-39f;
						uParam0->f_187[13] = 5.358848E-23f;
						uParam0->f_187[12] = 1.868153E+10f;
						uParam0->f_187[11] = -1.623376E+24f;
					}
					break;
			}
			break;
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_D"):
			switch (Global_1940013)
			{
				case 0:
					uParam0->f_187[7] = -5.658114E-28f;
					uParam0->f_187[8] = -6.522029f;
					uParam0->f_187[9] = 2.92254E+13f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = -1.879611E-08f;
						uParam0->f_187[12] = 4.323401E-20f;
						uParam0->f_187[11] = -1.197203E+24f;
						uParam0->f_187[10] = -5.712857E+37f;
					}
					else
					{
						uParam0->f_187[10] = 6.829287E+23f;
						uParam0->f_187[13] = -7.074446E+27f;
						uParam0->f_187[12] = 9.614777E+23f;
						uParam0->f_187[11] = 113.5818f;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -1.490792E+31f;
					uParam0->f_187[8] = 9.631716E+31f;
					uParam0->f_187[9] = 1.833642E-16f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = -6.180578E+32f;
						uParam0->f_187[12] = 6.102467E-37f;
						uParam0->f_187[11] = 2446667f;
						uParam0->f_187[10] = 2.058942E-11f;
					}
					else
					{
						uParam0->f_187[10] = 36460.45f;
						uParam0->f_187[13] = -5.861058E-12f;
						uParam0->f_187[12] = 4.704006E-12f;
						uParam0->f_187[11] = -5.507544E+20f;
					}
					break;
			}
			break;
		default:
			switch (Global_1940013)
			{
				case 0:
					uParam0->f_187[7] = -1.081177E+22f;
					uParam0->f_187[8] = -2.213997E-24f;
					uParam0->f_187[9] = -1.012283E-07f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = 5.148385E+20f;
						uParam0->f_187[12] = 9.371421E-09f;
						uParam0->f_187[11] = 1.379944E-08f;
						uParam0->f_187[10] = -664.1404f;
					}
					else
					{
						uParam0->f_187[10] = -1.478445f;
						uParam0->f_187[13] = -8.950962E-20f;
						uParam0->f_187[12] = -3.100001E+32f;
						uParam0->f_187[11] = -1.512271E+17f;
					}
					break;
				case 1:
				case 2:
					uParam0->f_187[7] = -8.685901E+15f;
					uParam0->f_187[8] = 84002.8f;
					uParam0->f_187[9] = -4.029905E-25f;
					if (ENTITY::GET_ENTITY_MODEL(uParam0->f_1.f_174) == 1.56037E+20f)
					{
						uParam0->f_187[13] = -161.3009f;
						uParam0->f_187[12] = -9.369526E+18f;
						uParam0->f_187[11] = -0.001780033f;
						uParam0->f_187[10] = -2.023832E-08f;
					}
					else
					{
						uParam0->f_187[10] = -6.250754E-25f;
						uParam0->f_187[13] = -1.216782E-06f;
						uParam0->f_187[12] = -1.223832f;
						uParam0->f_187[11] = 2.803145E+07f;
					}
					break;
			}
			break;
	}
}

int func_47()
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_A"):
			return joaat("MP_MOONSHINE_DRINKING_SOBER_TABLE_RH_HOLD");
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_D"):
			return -5.658114E-28f;
		default:
			break;
	}
	return -1.081177E+22f;
}

int func_48()
{
	switch (PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33))
	{
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_A"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_A"):
			return -62716.6f;
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_F"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_MALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_DRUNK_FEMALE_D"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_FEMALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_C"):
		case joaat("WORLD_PLAYER_MOONSHINE_CUSTOMER_SOBER_MALE_D"):
			return -1.490792E+31f;
		default:
			break;
	}
	return -8.685901E+15f;
}

void func_49(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if ((func_32(uParam0->f_183[iVar0]) && !func_22(uParam0->f_183[iVar0], 1)) && !func_25(uParam0->f_183[iVar0], 1))
		{
			func_90(uParam0->f_183[iVar0], bParam1, 0, 1);
		}
		iVar0++;
	}
}

int func_50(int iParam0)
{
	return iParam0;
}

bool func_51(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_52(var uParam0)
{
	func_91(uParam0, 0);
}

void func_53(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_92(uParam0[iVar0], 1, 1);
		iVar0++;
	}
}

bool func_54()
{
	if (func_93())
	{
		return false;
	}
	return true;
}

void func_55(float fParam0, bool bParam1)
{
	func_94((Global_1940013.f_9 + fParam0), bParam1);
}

bool func_56(bool bParam0, int iParam1)
{
	if (!func_17(bParam0, 0))
	{
		return func_96(func_95(bParam0), iParam1);
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

int func_57(int iParam0)
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

float func_58(int iParam0, float fParam1)
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

void func_59(float fParam0)
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
	iVar1 = func_97(2);
	func_98((fParam0 * IntToFloat(iVar1)), 0);
}

void func_60(float fParam0, bool bParam1)
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
	iVar0 = func_99(2);
	func_100((fParam0 * IntToFloat(iVar0)), 0, bParam1);
}

void func_61(float fParam0)
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
	iVar1 = func_101(2);
	func_102((fParam0 * IntToFloat(iVar1)), 0);
}

float func_62(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 1120403456) * 1120403456);
	}
	return ((fParam0 / 1090519040) * 1120403456);
}

void func_63(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (fParam1 == 0f)
	{
		return;
	}
	if (bParam4)
	{
		fParam1 = func_103(iParam0, fParam1, 1);
	}
	func_105(iParam0, (func_104(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_64(float fParam0, bool bParam1)
{
	if (fParam0 > 1092616192)
	{
		fParam0 = 1092616192; /* Float: 10f */
	}
	if (func_106())
	{
		func_107(fParam0, 0);
	}
	if (bParam1)
	{
		Global_17418.f_55.f_2459.f_41++;
		if (5 == Global_17418.f_55.f_2459.f_41)
		{
			func_108(109, 0);
		}
	}
}

float func_65(float fParam0, int iParam1)
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

int func_66(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		return 0;
	}
	return func_109(iParam0, fParam1, bParam2, bParam3);
}

void func_67(var uParam0)
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
			func_74(-8.650952E-05f, -2.629533E+32f, 8100);
			break;
	}
}

void func_68(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	if (iParam2 || func_56(bParam0, -3.480943E+19f))
	{
		func_71(func_110(-3.750745E+13f), 1);
	}
	if (func_56(bParam0, -3.458856E-14f))
	{
		func_71(func_110(-2.12416E-30f), 1);
	}
	if (func_56(bParam0, 1.763507E+18f))
	{
		func_112(func_111(bParam0), 1);
	}
	if (func_56(bParam0, 2.343408E+31f))
	{
		func_71(func_70(7.642884E+10f, -129968.5f), 1);
	}
	if (func_56(bParam0, 1.987618E+33f))
	{
		func_71(func_110(-2.413646E-08f), 1);
	}
	if (func_56(bParam0, 1894063f))
	{
		func_71(func_110(1.884128E-06f), 1);
	}
	switch (bParam0)
	{
		case joaat("CONSUMABLE_OAT_CAKES"):
		case joaat("CONSUMABLE_SUGARCUBE"):
		case joaat("CONSUMABLE_HAYCUBE"):
			func_71(func_70(7.642884E+10f, -2.03267E-35f), 1);
			break;
	}
	switch (bParam0)
	{
		case -611782825:
			func_71(func_70(7.642884E+10f, -3.483875E-29f), 1);
			break;
		case joaat("CONSUMABLE_MOONSHINE"):
			func_71(func_70(7.642884E+10f, 5.234738E-28f), 1);
			break;
		case joaat("CONSUMABLE_WHISKEY_USED"):
		case joaat("CONSUMABLE_WHISKEY"):
			func_71(func_70(7.642884E+10f, 7.840773E-07f), 1);
			break;
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM_USED"):
		case joaat("CONSUMABLE_COCAINE_CHEWING_GUM"):
			func_71(func_70(7.642884E+10f, 7.177263E+37f), 1);
			break;
		case joaat("CONSUMABLE_SNAKE_OIL"):
		case joaat("CONSUMABLE_POTENT_SNAKE_OIL"):
		case joaat("CONSUMABLE_SNAKE_OIL_USED"):
			func_71(func_70(7.642884E+10f, -3.568742E-26f), 1);
			break;
		case joaat("CONSUMABLE_CHEWING_TOBACCO"):
		case joaat("CONSUMABLE_CHEWING_TOBACCO_USED"):
			func_71(func_70(7.642884E+10f, -1.888559E+33f), 1);
			break;
		case joaat("CONSUMABLE_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_SPECIAL_HORSE_MEDICINE"):
		case joaat("CONSUMABLE_HORSE_MEDICINE_USED"):
		case joaat("CONSUMABLE_POTENT_HORSE_MEDICINE"):
			func_71(func_70(7.642884E+10f, 4.325028E-21f), 1);
			break;
		case joaat("CONSUMABLE_HERBIVORE_BAIT"):
		case joaat("CONSUMABLE_POTENT_HERBIVORE_BAIT"):
			func_71(func_70(7.642884E+10f, -4.824814E+07f), 1);
			break;
		case joaat("CONSUMABLE_PREDATOR_BAIT"):
		case joaat("CONSUMABLE_POTENT_PREDATOR_BAIT"):
			func_71(func_70(7.642884E+10f, -2.336031E+31f), 1);
			break;
	}
	if (func_113() == -1)
	{
		if (bParam0 == -8.536846E-33f)
		{
			func_71(func_70(7.642884E+10f, 1.386211E-17f), 1);
		}
	}
	if (bParam1)
	{
		func_71(func_110(1.131948E-13f), 1);
	}
	func_114(bParam0, iParam3);
}

void func_69(int iParam0)
{
	if (Global_1297553[iParam0 /*87*/].f_19.f_19 == 2.180447E+07f || Global_1297553[iParam0 /*87*/].f_19.f_19 == 1.255573E+28f)
	{
		func_71(func_70(-6.598974E+19f, -5.940073E+13f), 1);
	}
	else if (Global_1297553[iParam0 /*87*/].f_19.f_19 == -2.142218E+09f || Global_1297553[iParam0 /*87*/].f_19.f_19 == 6.166539E+16f)
	{
		func_71(func_70(-6.598974E+19f, 9.645086E-22f), 1);
	}
	else
	{
		func_71(func_70(-6.598974E+19f, -5.222834f), 1);
	}
}

struct<2> func_70(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_71(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

int func_72(int iParam0)
{
	struct<5> Var0;

	if (!func_115(&Var0))
	{
		return 0;
	}
	if (!func_116(&Var0, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_116(&Var0, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_116(&Var0, 39, iParam0, 0, 1))
	{
		return 0;
	}
	return func_117(Var0);
}

void func_73(int iParam0)
{
	func_118(iParam0);
	func_119(1, 1);
}

int func_74(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	if (!func_120(iParam1))
	{
		return 0;
	}
	if (!func_121(iParam1))
	{
		return 0;
	}
	if (!func_122(iParam0))
	{
		return 0;
	}
	if (!func_123(iParam0))
	{
		return 0;
	}
	if (!func_124(iParam0))
	{
		func_125(iParam0);
	}
	if (func_126(iParam0, iParam1))
	{
		iVar0 = func_127(iParam0);
		Global_1156096.f_47689.f_63[iVar0 /*2*/] = iParam0;
		Global_1156096.f_47689.f_63[iVar0 /*2*/].f_1 = (Global_1295619.f_16 + iParam2);
		return 1;
	}
	return 0;
}

bool func_75()
{
	if (func_128())
	{
		return false;
	}
	return Global_1956862.f_1431.f_96 == 0;
}

bool func_76()
{
	if (func_128())
	{
		return false;
	}
	return Global_1956862.f_1431.f_96 == 2;
}

void func_77(struct<16> Param0, int iParam16)
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
	if (!func_129(iParam16, 2))
	{
		if (SCRIPTS::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_130(&(Param0.f_10)))
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
			func_131(iParam16);
			return;
		}
		iVar0++;
	}
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
		iVar3 = func_132(iVar0, 1);
		if (Global_1156096.f_35859.f_919[iVar3 /*12*/] == iParam0)
		{
			func_125(iVar0);
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

bool func_79()
{
	return func_133(1);
}

void func_80()
{
	func_78(2.372604E-26f);
	func_78(3.279095E+25f);
}

char* func_81(int iParam0)
{
	return MISC::_GET_STRING_FROM_FLOAT(BUILTIN::TO_FLOAT(iParam0), 0);
}

char* func_82(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

bool func_83(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_84(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
			HUD::_UI_PROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
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
	func_134(iParam0, 1);
	func_135(iParam0, 1);
	func_136(iParam0, 128);
}

int func_85()
{
	int iVar0;

	if (!func_137(&(Global_1297394.f_62)))
	{
		return 0;
	}
	iVar0 = func_138(Global_1297394.f_62, 0.1173447f, 0, 1);
	return iVar0;
}

int func_86()
{
	int iVar0;

	if (!func_137(&(Global_1297394.f_62)))
	{
		return 0;
	}
	iVar0 = func_138(Global_1297394.f_62, 49.24386f, 0, 1);
	return iVar0;
}

void func_87(float fParam0)
{
	Global_1297553[Global_1295619 /*87*/].f_19.f_19 = fParam0;
}

void func_88(int iParam0)
{
	if (!func_20(Global_1297553[Global_1295619 /*87*/].f_19, iParam0))
	{
		func_4(&(Global_1297553[Global_1295619 /*87*/].f_19), iParam0);
	}
}

void func_89(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_90(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_32(iParam0))
	{
		return;
	}
	iVar0 = func_50(iParam0);
	if (bParam1)
	{
		func_139(iParam0, 4);
		if (bParam3)
		{
			func_134(iVar0, 1);
		}
		func_135(iVar0, 1);
	}
	else
	{
		func_136(iParam0, 4);
		func_135(iVar0, 0);
	}
}

void func_91(var uParam0, int iParam1)
{
	uParam0->f_1 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (iParam1 != 0)
	{
		iParam1 = -iParam1;
		uParam0->f_1 = NETWORK::GET_TIME_OFFSET(uParam0->f_1, iParam1);
	}
	func_140(uParam0, 1);
	func_141(uParam0, 2);
	uParam0->f_2 = 0;
}

void func_92(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_32(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_50(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_142(iVar0);
	*uParam0 = 0;
}

bool func_93()
{
	return func_144(func_143(0));
}

void func_94(float fParam0, bool bParam1)
{
	if (PED::IS_PED_ON_MOUNT(Global_33) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		if (fParam0 >= func_145())
		{
			Global_1940013.f_9 = (func_145() - 1008981770);
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

bool func_95(bool bParam0)
{
	return bParam0;
}

int func_96(bool bParam0, int iParam1)
{
	if (!func_146(bParam0, 2))
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

int func_97(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_147(1);
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

void func_98(float fParam0, int iParam1)
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

int func_99(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_147(1);
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

void func_100(float fParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	float fVar2;

	iVar0 = PLAYER::PLAYER_ID();
	if (fParam0 > 0f && func_148(iVar0))
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

int func_101(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_147(1);
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

void func_102(float fParam0, int iParam1)
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

float func_103(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_149();
	func_150(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_151(iParam0, 2);
	if (func_153(iVar0, func_152(iParam0, 2), 1))
	{
		func_154(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_108(103, bParam2);
		return 0f;
	}
	func_155(iParam0, func_149(), 2);
	func_154(iParam0, iVar1 + 1, 2);
	return fParam1;
}

float func_104(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_147(2);
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

int func_105(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;

	if (iParam5 == 2)
	{
		iParam5 = func_147(2);
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (func_156(iVar0, iParam0, fParam1))
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
			func_157(iParam0, 7000, iParam5);
		}
		func_158(iVar0, iParam0, fParam1);
		func_159(iParam0, fParam1, bParam4, iParam5);
	}
	return 1;
}

bool func_106()
{
	if (Global_1956862.f_1431.f_107 == -15)
	{
		return true;
	}
	return func_160(Global_1956862.f_1431.f_107, 0);
}

void func_107(float fParam0, int iParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;

	fVar0 = func_161(13, 2);
	iVar1 = func_162(fVar0);
	fVar0 = (fVar0 + fParam0);
	fVar0 = func_163(fVar0, 0f, 1120403456 /* Float: 100f */);
	iVar2 = func_162(fVar0);
	if (iVar1 != iVar2)
	{
		Global_1956862.f_1431.f_107 = func_149();
		func_164(&(Global_1956862.f_1431.f_107), 0, 0, 1, 0, 0, 0, 0);
	}
	func_165(13, fVar0, 2);
	Global_1956862.f_1431.f_99 = iParam1;
}

void func_108(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_166(iParam0, &iVar0, &iVar1);
	if (!func_167(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_168(iVar0, iVar1);
}

int func_109(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	char* sVar0;
	int iVar1;

	iVar1 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_169(iParam0))
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
				sVar0 = func_170(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_171(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/] = fParam1;
			break;
		case 1:
			if (bParam2)
			{
				sVar0 = func_170(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_78(3.279095E+25f);
			func_172(-1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/] = fParam1;
			break;
		case 2:
			if (bParam2)
			{
				sVar0 = func_170(iParam0);
				if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY(sVar0);
				}
			}
			func_173(-1, 0);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/] = fParam1;
			break;
		case 19:
			func_78(2.372604E-26f);
			func_174(0, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[0 /*2*/].f_1 = fParam1;
			break;
		case 18:
			func_174(1, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[1 /*2*/].f_1 = fParam1;
			break;
		case 20:
			func_174(2, 1, 1);
			ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(iVar1, iParam0, fParam1, bParam3);
			Global_17418.f_55.f_2459.f_34[2 /*2*/].f_1 = fParam1;
			break;
		default:
			return 0;
	}
	return 1;
}

struct<2> func_110(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

int func_111(bool bParam0)
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

void func_112(int iParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_70(-3.114499E+25f, func_175(iParam0)) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	func_71(func_176(3.939822E-35f), iParam1);
}

int func_113()
{
	return Global_1572887.f_14;
}

void func_114(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_113() == 0)
	{
		iVar0 = func_177(bParam0, -60352.49f);
		if (iParam1 == -1.202057E-11f)
		{
			return;
		}
		if (func_56(bParam0, -8.87647E+33f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -9.82979E+16f, 1);
		}
		if ((func_56(bParam0, 1.378098E+25f) || 3.62898E+13f == iVar0) || -9.276053E-31f == iVar0)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 1.324128E-12f, 1);
		}
		if (func_56(bParam0, 1.763507E+18f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -1.231875E-07f, 1);
		}
		if (func_56(bParam0, -1.064618E-36f) && !func_56(bParam0, -2.927334E-06f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, -4.02404E-14f, 1);
		}
		if (func_56(bParam0, 9.495676E-32f))
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.208807E+11f, 1);
		}
		if (((func_56(bParam0, -1.051639E+07f) || func_56(bParam0, -5.092244E+08f)) || func_56(bParam0, 1.431632E+07f)) || bParam0 == -1.954145E-33f)
		{
			STATS::CHAL_ADD_GOAL_PROGRESS_INT(-2.526142E-27f, 2.96823E-25f, 1);
		}
		if (func_56(bParam0, -2.529679E+11f))
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

bool func_115(bool bParam0)
{
	var uVar0;

	MISC::COPY_SCRIPT_STRUCT(bParam0, &uVar0, 5);
	if (!func_178(1))
	{
		return false;
	}
	*bParam0 = Global_1072759.f_28418[51 /*4*/].f_3;
	return true;
}

bool func_116(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	bParam0->f_3 = iParam2;
	bParam0->f_4 = iParam3;
	uVar0 = bParam0->f_1;
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam0->f_1), bParam0))
	{
		bParam0->f_1 = uVar0;
		return false;
	}
	return true;
}

var func_117(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_179(&uParam0, 61, 1);
}

void func_118(int iParam0)
{
	int iVar0;

	func_180(iParam0);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 0, false, false);
	WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, false, 1, false, false);
	func_181();
	func_182(8388608);
	if (func_183(iParam0, &iVar0))
	{
		func_185(func_184(iVar0));
	}
}

void func_119(bool bParam0, bool bParam1)
{
	if (func_186(255) == 4)
	{
		return;
	}
	if (func_187(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_188(0);
	}
	else
	{
		if (bParam1)
		{
			func_189(0, 0, 0, 1);
		}
		func_190(0);
		func_191(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_192(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_193(Global_1102813.f_3839, 36);
	func_194(Global_1102813.f_3878, 36);
}

bool func_120(int iParam0)
{
	int iVar0;

	iVar0 = func_195(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 152)
	{
		return true;
	}
	return false;
}

bool func_121(int iParam0)
{
	int iVar0;

	iVar0 = func_195(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 153)
	{
		return false;
	}
	return true;
}

bool func_122(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 180 && iVar0 <= 182)
	{
		return true;
	}
	return false;
}

bool func_123(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 < 2 || iVar0 >= 183)
	{
		return false;
	}
	return true;
}

bool func_124(int iParam0)
{
	if (!func_123(iParam0))
	{
		return false;
	}
	return Global_1156096.f_35859.f_919[func_132(iParam0, 1) /*12*/] == -1;
}

int func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_123(iParam0))
	{
		return 0;
	}
	iVar0 = func_132(iParam0, 1);
	if (!func_121(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		return 1;
	}
	iVar3 = func_195(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar3 /*6*/].f_5)
	{
		iVar1 = Global_1156096.f_35859[iVar3 /*6*/][iVar4];
		switch (func_196(iParam0, iVar1))
		{
			case 0:
				func_197(iVar1, iParam0, iVar4);
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
						func_197(iVar1, iParam0, iVar4);
						func_198(&(Global_1156096.f_35859.f_9503[iVar5 /*3*/]));
						Global_1156096.f_35859.f_11700 = (Global_1156096.f_35859.f_11700 - 1);
						Global_1156096.f_35859.f_9503[iVar5 /*3*/] = { Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/] };
						func_198(&(Global_1156096.f_35859.f_9503[Global_1156096.f_35859.f_11700 /*3*/]));
					}
					else
					{
						iVar5++;
					}
				}
				break;
			case 2:
				Jump @606; //curOff = 387
				iVar2 = func_199(iVar1, 1);
				func_200(iVar2, -1);
				if (Global_1156096.f_35859.f_3116[iVar2 /*31*/].f_29 <= 0)
				{
					func_201(iVar2, 0);
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
			func_202(&(Global_1156096.f_35859.f_919[iVar0 /*12*/]));
			return 1;
		}

bool func_126(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!func_123(iParam0))
	{
		return false;
	}
	iVar0 = func_132(iParam0, 1);
	if (!func_121(iParam1))
	{
		return false;
	}
	iVar1 = func_195(iParam1, 1);
	if (Global_1156096.f_35859.f_919[iVar0 /*12*/] == iParam1)
	{
		return true;
	}
	if (func_121(Global_1156096.f_35859.f_919[iVar0 /*12*/]))
	{
		func_125(iParam0);
	}
	Global_1156096.f_35859.f_919[iVar0 /*12*/] = iParam1;
	iVar4 = 0;
	while (iVar4 < Global_1156096.f_35859[iVar1 /*6*/].f_5)
	{
		iVar2 = Global_1156096.f_35859[iVar1 /*6*/][iVar4];
		iVar3 = func_199(iVar2, 1);
		switch (func_203(iParam0, iVar2))
		{
			case 0:
				func_204(iVar2, iParam0, iVar4);
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
				func_200(iVar3, 1);
				iVar4++;
			}
			return true;
		}

int func_127(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (func_205(iParam0))
	{
		return (iVar0 - 2);
	}
	else if (func_206(iParam0))
	{
		return (iVar0 - 130);
	}
	else if (func_207(iParam0))
	{
		return (iVar0 - 166);
	}
	else if (func_208(iParam0))
	{
		return (iVar0 - 167);
	}
	else if (func_209(iParam0))
	{
		return (iVar0 - 172);
	}
	else if (func_122(iParam0))
	{
		return (iVar0 - 180);
	}
	else if (func_210(iParam0))
	{
		return (iVar0 - 150);
	}
	return -1;
}

bool func_128()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

bool func_129(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_130(char* sParam0)
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

void func_131(int iParam0)
{
	if (func_129(iParam0, 1))
	{
		func_211(1);
	}
}

int func_132(int iParam0, int iParam1)
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

bool func_133(int iParam0)
{
	return func_212(iParam0);
}

void func_134(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_83(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_135(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_136(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_137(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

int func_138(struct<4> Param0, float fParam4, int iParam5, int iParam6)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_213(Param0, fParam4, &Var0, iParam5, iParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

void func_139(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_140(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_141(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_142(int iParam0)
{
	if (!func_214(iParam0))
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

struct<2> func_143(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_144(struct<2> Param0)
{
	return func_215(Param0, 1, 4);
}

float func_145()
{
	return 1061158912 /* Float: 0.75f */;
}

bool func_146(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_147(int iParam0)
{
	return func_217(func_216(iParam0));
}

bool func_148(int iParam0)
{
	float fVar0;

	fVar0 = (func_218(iParam0) - PLAYER::_GET_PLAYER_CACHED_DEAD_EYE_AMOUNT(iParam0));
	return fVar0 <= 1f;
}

int func_149()
{
	return Global_1902565;
}

void func_150(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = func_219(*iParam0);
	iVar1 = func_220(*iParam0);
	iVar2 = func_221(*iParam0);
	iVar3 = func_222(*iParam0);
	iVar4 = func_223(*iParam0);
	iVar5 = func_224(*iParam0);
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
		iVar7 = func_225(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_226(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_151(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_147(2);
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

int func_152(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_147(2);
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

bool func_153(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_227(iParam1) || !func_227(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_154(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
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

void func_155(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
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

bool func_156(int iParam0, int iParam1, float fParam2)
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
	ATTRIBUTE::_SET_ATTRIBUTE_CORE_VALUE(iParam0, func_228(iParam1), BUILTIN::CEIL(fParam2));
	return true;
}

void func_157(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
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

void func_158(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;

	sVar0 = func_229(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_SET_PED_BLACKBOARD_FLOAT(iParam0, func_230(iParam1), fParam2, -1);
	}
}

void func_159(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	var uVar0;

	if (iParam3 == 2)
	{
		iParam3 = func_147(2);
	}
	uVar0 = Global_1295619.f_16;
	func_231(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_232(iParam0, uVar0, iParam3);
	}
}

bool func_160(int iParam0, bool bParam1)
{
	return func_153(func_149(), iParam0, bParam1);
}

float func_161(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_147(1);
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

int func_162(float fParam0)
{
	float fVar0;

	fVar0 = fParam0;
	fVar0 = ((2f * fVar0) - 1120403456);
	return BUILTIN::ROUND(((fVar0 / 1120403456) * BUILTIN::TO_FLOAT(10)));
}

float func_163(float fParam0, float fParam1, float fParam2)
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

void func_164(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_219(*iParam0);
	iVar1 = func_220(*iParam0);
	iVar2 = func_221(*iParam0);
	iVar3 = func_222(*iParam0);
	iVar4 = func_223(*iParam0);
	iVar5 = func_224(*iParam0);
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
	iVar6 = func_225(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_225(iVar1, iVar0);
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
	func_226(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_165(int iParam0, float fParam1, int iParam2)
{
	if (!func_233(iParam0))
	{
		return 0;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
	}
	func_234(iParam0, fParam1, iParam2);
	if (!ENTITY::IS_ENTITY_DEAD(Global_1295619.f_3))
	{
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_1295619.f_3, iParam0, BUILTIN::FLOOR(fParam1));
	}
	return 1;
}

void func_166(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_167(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_235(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_236(iParam0))
	{
		return false;
	}
	if (func_237(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_238(iParam0, 1)) || func_239(32768))
	{
		if (!func_238(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_240())
	{
		return false;
	}
	return true;
}

void func_168(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_169(int iParam0)
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

char* func_170(int iParam0)
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

void func_171(int iParam0)
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
	iVar1 = func_97(2);
	func_98(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_172(int iParam0)
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
	iVar1 = func_101(2);
	func_102(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_173(int iParam0, bool bParam1)
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
	iVar0 = func_99(2);
	func_100(BUILTIN::TO_FLOAT((iParam0 * iVar0)), 0, bParam1);
}

void func_174(int iParam0, bool bParam1, bool bParam2)
{
	func_105(iParam0, 1120403456 /* Float: 100f */, bParam1, bParam2, 1, 2);
}

int func_175(int iParam0)
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

struct<2> func_176(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

int func_177(bool bParam0, int iParam1)
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

bool func_178(int iParam0)
{
	if (!DATAFILE::PARSEDDATA_IS_FILE_VALID(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	if (!DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1072759.f_28418[51 /*4*/].f_3))
	{
		return false;
	}
	return true;
}

var func_179(bool bParam0, int iParam1, int iParam2)
{
	var uVar0;

	bParam0->f_2 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
	}
	return uVar0;
}

void func_180(var uParam0)
{
	Global_1953279.f_1 = uParam0;
}

void func_181()
{
	func_241(128);
}

void func_182(int iParam0)
{
	Global_1953279 = (Global_1953279 - (Global_1953279 && iParam0));
}

bool func_183(int iParam0, var uParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case joaat("MPC_PLAYER_TYPE_MP_MALE"):
			*uParam1 = -4.902749E+32f;
			break;
		case joaat("MPC_PLAYER_TYPE_MP_FEMALE"):
			*uParam1 = -4.860776E-15f;
			break;
		default:
			iVar0 = func_242(0, iParam0);
			if (iVar0 != -1)
			{
				*uParam1 = func_243(iVar0);
			}
			else
			{
				*uParam1 = -4.902749E+32f;
				return false;
			}
			break;
	}
	return true;
}

var func_184(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<5> Var2;

	if (!func_115(&Var2))
	{
		return 0;
	}
	if (!func_116(&Var2, 13, 0, 0, 1))
	{
		return 0;
	}
	if (!func_116(&Var2, 37, 0, 0, 1))
	{
		return 0;
	}
	if (!func_116(&Var2, 40, iParam0, 0, 1))
	{
		return 0;
	}
	if (!func_116(&Var2, 59, 0, 0, 1))
	{
		return 0;
	}
	iVar1 = func_244(&Var2, 12);
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
	if (!func_116(&Var2, 60, iVar0, 0, 1))
	{
		return 0;
	}
	return func_245(Var2);
}

void func_185(var uParam0)
{
	Global_1953279.f_3 = uParam0;
}

int func_186(int iParam0)
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

bool func_187(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_188(int iParam0)
{
	if (func_246(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_189(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_247(iParam0);
	if (!func_248(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_249(128) && !func_250(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_251() == 4)
	{
		func_188(18);
	}
	func_252(1024);
}

int func_190(int iParam0)
{
	if (func_253(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_191(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_192(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_193(struct<29> Param0, var uParam29, int iParam30)
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

void func_194(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_195(int iParam0, int iParam1)
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

int func_196(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_254(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_199(iParam1, 1);
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

int func_197(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	vector3 vVar1;

	if (!func_123(iParam1))
	{
		return 0;
	}
	if (!func_255(iParam0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0, 1);
	func_256(iParam0, iParam1, iParam2);
	if (func_257(Global_1156096.f_35859.f_3116[iVar0 /*31*/]) && func_258(iParam0, Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar1 = { func_259(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (func_260(vVar1))
		{
			if (func_261(vVar1.x, vVar1.y, vVar1.z))
			{
				func_262(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, vVar1.x, vVar1.y, vVar1.z);
			}
			else
			{
				func_263(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
			}
		}
		else
		{
			func_263(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4);
		}
	}
	return 1;
}

void func_198(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = -1;
}

int func_199(int iParam0, int iParam1)
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

void func_200(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = (Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 + iParam1);
}

void func_201(int iParam0, int iParam1)
{
	Global_1156096.f_35859.f_3116[iParam0 /*31*/].f_29 = iParam1;
}

void func_202(var uParam0)
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

int func_203(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_254(iParam0);
	iVar1 = Global_1295619;
	iVar2 = func_199(iParam1, 1);
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

int func_204(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	vector3 vVar2;

	if (!func_123(iParam1))
	{
		return 0;
	}
	if (!func_255(iParam0))
	{
		return 0;
	}
	iVar0 = func_199(iParam0, 1);
	if (!func_264(iParam2))
	{
		return 0;
	}
	bVar1 = func_257(Global_1156096.f_35859.f_3116[iVar0 /*31*/]);
	if (bVar1 && func_265(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4))
	{
		vVar2 = { func_266(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4) };
		if (!func_256(vVar2.x, vVar2.y, vVar2.z))
		{
			return 0;
		}
	}
	if (func_261(iParam0, iParam1, iParam2))
	{
		if (bVar1)
		{
			func_262(Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4, iParam0, iParam1, iParam2);
		}
		return 1;
	}
	return 0;
}

bool func_205(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 2 && iVar0 <= 129)
	{
		return true;
	}
	return false;
}

bool func_206(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 130 && iVar0 <= 149)
	{
		return true;
	}
	return false;
}

bool func_207(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 166 && iVar0 <= 166)
	{
		return true;
	}
	return false;
}

bool func_208(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 167 && iVar0 <= 171)
	{
		return true;
	}
	return false;
}

bool func_209(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 172 && iVar0 <= 179)
	{
		return true;
	}
	return false;
}

bool func_210(int iParam0)
{
	int iVar0;

	iVar0 = func_132(iParam0, 1);
	if (iVar0 >= 150 && iVar0 <= 165)
	{
		return true;
	}
	return false;
}

void func_211(int iParam0)
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

bool func_212(int iParam0)
{
	return func_20(Global_1940072.f_38, iParam0);
}

bool func_213(var uParam0, float fParam1, var uParam2, int iParam3, int iParam4, var uParam5, int iParam6, bool bParam7)
{
	int iVar0;

	iVar0 = func_267(bParam7);
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

bool func_214(int iParam0)
{
	return func_83(iParam0, 2);
}

bool func_215(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_268(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_269(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_216(int iParam0)
{
	return func_270(&(Global_1956862.f_1565), iParam0, 1);
}

int func_217(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

float func_218(int iParam0)
{
	return (PLAYER::_GET_PLAYER_MAX_DEAD_EYE(iParam0, 0) - IntToFloat(func_271(2)));
}

int func_219(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_272(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_220(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_221(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_222(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_223(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_224(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_225(int iParam0, int iParam1)
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

void func_226(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_273(iParam0, iParam6);
	func_274(iParam0, iParam5);
	func_275(iParam0, iParam4);
	func_276(iParam0, iParam3);
	func_277(iParam0, iParam2);
	func_278(iParam0, iParam1);
}

bool func_227(int iParam0)
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
	iVar0 = func_224(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_223(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_222(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_219(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_220(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_221(iParam0);
	if (iVar5 < 1 || iVar5 > func_225(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

int func_228(int iParam0)
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

char* func_229(int iParam0)
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

char* func_230(int iParam0)
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

void func_231(int iParam0, float fParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
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

void func_232(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_147(2);
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

bool func_233(int iParam0)
{
	if (func_169(iParam0))
	{
		return true;
	}
	else if (func_279(iParam0))
	{
		return true;
	}
	return false;
}

void func_234(int iParam0, float fParam1, int iParam2)
{
	if (fParam1 < 0f)
	{
		return;
	}
	if (iParam2 == 2)
	{
		iParam2 = func_147(1);
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

bool func_235(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_236(int iParam0)
{
	if (func_238(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_237(int iParam0)
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

bool func_238(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_239(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_240()
{
	if (!func_280())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_241(int iParam0)
{
	func_4(&Global_1300338, iParam0);
}

var func_242(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_281(iParam0, 0, Global_1300340.f_52.f_31, iParam1);
	if (iVar0 == -1)
	{
		return -1;
	}
	return func_282(iParam0, iVar0);
}

var func_243(int iParam0)
{
	return Global_1300340.f_52[iParam0 /*3*/].f_1;
}

int func_244(bool bParam0, int iParam1)
{
	bParam0->f_2 = iParam1;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(bParam0);
}

var func_245(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	return func_179(&uParam0, 61, 0);
}

bool func_246(var uParam0, int iParam1, int iParam2)
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

void func_247(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_248(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_249(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_250(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_251()
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

void func_252(int iParam0)
{
	if (func_283(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_253(var uParam0, int iParam1, int iParam2)
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

int func_254(int iParam0)
{
	if (func_205(iParam0))
	{
		return (func_127(iParam0) % 32);
	}
	return Global_1295619;
}

bool func_255(int iParam0)
{
	int iVar0;

	iVar0 = func_199(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 199)
	{
		return false;
	}
	return true;
}

bool func_256(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_132(iParam1, 1);
	iVar1 = func_199(iParam0, 1);
	iVar2 = func_195(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_284(iVar3, 1);
		if (!func_285(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] = (Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1] - 1);
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 - func_286(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_287(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_288(iVar6))
		{
		}
		else
		{
			iVar8 = func_289(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1] = (Global_1156096.f_21645[iVar8 /*209*/][iVar1] - 1);
			if (Global_1156096.f_21645[iVar8 /*209*/][iVar1] <= 0)
			{
				MISC::_CLEAR_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			}
			if (!MISC::_IS_ANY_BIT_FLAG_SET(&(Global_1156096.f_21645[iVar8 /*209*/].f_200)))
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 0;
				func_290(iVar6);
			}
		}
		iVar7++;
	}
	return true;
}

bool func_257(struct<5> Param0, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30)
{
	return Param0.f_4 != 0;
}

bool func_258(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_255(iParam0))
	{
		return false;
	}
	if (!func_291(iParam1))
	{
		return false;
	}
	iVar0 = func_292(iParam1, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/] == iParam0;
}

Vector3 func_259(int iParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = func_293(iParam0);
	if (iVar0 == -1)
	{
		vVar1 = -1;
		vVar1.f_2 = -1;
		return vVar1;
	}
	return Global_1156096.f_35859.f_9503[iVar0 /*3*/];
}

bool func_260(vector3 vParam0)
{
	if (!func_255(vParam0.x))
	{
		return false;
	}
	if (!func_123(vParam0.y))
	{
		return false;
	}
	if (!func_264(vParam0.z))
	{
		return false;
	}
	return true;
}

bool func_261(int iParam0, int iParam1, int iParam2)
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

	iVar0 = func_132(iParam1, 1);
	iVar1 = func_199(iParam0, 1);
	iVar2 = func_195(Global_1156096.f_35859.f_919[iVar0 /*12*/], 1);
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
		iVar5 = func_284(iVar3, 1);
		if (!func_285(iVar3))
		{
		}
		else
		{
			Global_1156096.f_2169[iVar5 /*205*/].f_1[iVar1]++;
			Global_1156096.f_2169[iVar5 /*205*/].f_201 = (Global_1156096.f_2169[iVar5 /*205*/].f_201 + func_286(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_6[iVar4 /*3*/])));
			func_294(iVar3);
		}
		iVar4++;
	}
	iVar7 = 0;
	while (iVar7 < Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_28)
	{
		iVar6 = Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/];
		if (!func_288(iVar6))
		{
		}
		else if (!func_295(&(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_17[iVar7 /*2*/])))
		{
		}
		else
		{
			iVar8 = func_289(iVar6, 1);
			Global_1156096.f_21645[iVar8 /*209*/][iVar1]++;
			MISC::_SET_BIT_FLAG(&(Global_1156096.f_21645[iVar8 /*209*/].f_200), iVar1);
			if (!Global_1156096.f_21645[iVar8 /*209*/].f_208)
			{
				Global_1156096.f_21645[iVar8 /*209*/].f_208 = 1;
				func_296(iVar6);
			}
		}
		iVar7++;
	}
	func_297(Global_1156096.f_35859.f_3116[iVar1 /*31*/].f_2);
	return true;
}

void func_262(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_291(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0, 1);
	if (!func_255(iParam1))
	{
		return;
	}
	if (!func_123(iParam2))
	{
		return;
	}
	if (!func_264(iParam3))
	{
		return;
	}
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = iParam1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = iParam2;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = iParam3;
}

void func_263(int iParam0)
{
	int iVar0;

	if (!func_291(iParam0))
	{
		return;
	}
	iVar0 = func_292(iParam0, 1);
	Global_1156096.f_35859.f_9286[iVar0 /*3*/] = -1;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_1 = 0;
	Global_1156096.f_35859.f_9286[iVar0 /*3*/].f_2 = -1;
}

bool func_264(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 4)
	{
		return false;
	}
	return true;
}

bool func_265(int iParam0)
{
	int iVar0;

	if (!func_291(iParam0))
	{
		return false;
	}
	iVar0 = func_298(iParam0);
	if (!func_255(iVar0))
	{
		return false;
	}
	return true;
}

Vector3 func_266(int iParam0)
{
	vector3 vVar0;
	int iVar3;

	if (!func_291(iParam0))
	{
		vVar0 = -1;
		vVar0.f_2 = -1;
		return vVar0;
	}
	iVar3 = func_292(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar3 /*3*/];
}

int func_267(bool bParam0)
{
	if (func_113() == -1)
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

bool func_268(struct<2> Param0)
{
	if (!func_299(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_300(Param0))
	{
		return false;
	}
	return true;
}

int func_269(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_301(Param0);
	}
	return -1;
}

bool func_270(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_271(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_97(2) * 2;
		case 1:
			return func_101(2) * 2;
		case 2:
			return func_99(2) * 2;
		default:
			break;
	}
	return -1;
}

int func_272(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_273(int iParam0, int iParam1)
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

void func_274(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_275(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_220(*iParam0);
	iVar1 = func_219(*iParam0);
	if (iParam1 < 1 || iParam1 > func_225(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_276(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_277(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_278(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

bool func_279(int iParam0)
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

bool func_280()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_281(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;

	if (iParam1 > iParam2)
	{
		return -1;
	}
	iVar0 = ((iParam1 + iParam2) / 2);
	if (iParam3 < Global_1300340.f_84[iParam0 /*21*/][iVar0 /*2*/])
	{
		return func_281(iParam0, iParam1, (iVar0 - 1), iParam3);
	}
	if (iParam3 > Global_1300340.f_84[iParam0 /*21*/][iVar0 /*2*/])
	{
		return func_281(iParam0, iVar0 + 1, iParam2, iParam3);
	}
	return iVar0;
}

var func_282(int iParam0, int iParam1)
{
	return Global_1300340.f_84[iParam0 /*21*/][iParam1 /*2*/].f_1;
}

bool func_283(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

int func_284(int iParam0, int iParam1)
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

bool func_285(int iParam0)
{
	int iVar0;

	iVar0 = func_284(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 95)
	{
		return false;
	}
	return true;
}

float func_286(var uParam0)
{
	float fVar0;

	if (uParam0->f_2 != 0)
	{
		fVar0 = func_302(1.959415E-10f, uParam0->f_2, uParam0->f_1, "");
		return fVar0;
	}
	return uParam0->f_1;
}

void func_287(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_285(iParam0))
	{
		return;
	}
	iVar0 = func_284(iParam0, 1);
	if (!func_303(Global_1156096.f_2169[iVar0 /*205*/]))
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
	if (!func_304(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_305(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_288(int iParam0)
{
	int iVar0;

	iVar0 = func_289(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 68)
	{
		return false;
	}
	return true;
}

int func_289(int iParam0, int iParam1)
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

void func_290(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::PLAYER_ID();
	switch (iParam0)
	{
		case -1730553768:
		case joaat("FULL_LOCKON_IMMUNITY"):
			func_306();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_307();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_UPDATE_PED_WOUND_EFFECT(iVar0, 0f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, false, 0f);
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_STOP_STATUS_EFFECT_PERIODIC_ICON(5);
			func_108(105, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::_ANIMPOSTFX_CLEAR_EFFECT(func_308(iParam0));
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
			func_310(func_309(iParam0));
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
			func_311();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_303(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_303(16);
			break;
	}
}

bool func_291(int iParam0)
{
	int iVar0;

	iVar0 = func_292(iParam0, 1);
	if (iVar0 < 0 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_292(int iParam0, int iParam1)
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

int func_293(int iParam0)
{
	int iVar0;
	struct<31> Var1;
	struct<31> Var32;
	int iVar63;
	int iVar64;
	int iVar65;

	iVar0 = func_298(iParam0);
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
		iVar64 = func_199(Global_1156096.f_35859.f_9503[iVar65 /*3*/], 1);
		if (Global_1156096.f_35859.f_3116[iVar64 /*31*/].f_4 != iParam0)
		{
		}
		else if (Global_1156096.f_35859.f_9503[iVar65 /*3*/] == iVar0)
		{
		}
		else if (!func_312(Global_1156096.f_35859.f_9503[iVar65 /*3*/], Global_1156096.f_35859.f_9503[iVar65 /*3*/].f_1))
		{
		}
		else
		{
			Var1 = { func_313(Global_1156096.f_35859.f_9503[iVar65 /*3*/]) };
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

void func_294(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_285(iParam0))
	{
		return;
	}
	iVar0 = func_284(iParam0, 1);
	if (!func_303(Global_1156096.f_2169[iVar0 /*205*/]))
	{
		return;
	}
	Global_1156096[Global_1156096.f_2169[iVar0 /*205*/] /*102*/][iVar0]++;
	Global_1156096.f_2169[iVar0 /*205*/].f_204 = 1;
	if (!func_304(Global_1156096.f_2169[iVar0 /*205*/].f_203))
	{
		return;
	}
	iVar1 = func_305(Global_1156096.f_2169[iVar0 /*205*/].f_203, 1);
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

bool func_295(var uParam0)
{
	bool bVar0;

	if (uParam0->f_1 != 0)
	{
		bVar0 = func_314(1.959415E-10f, uParam0->f_1, 1, "");
		return bVar0;
	}
	return true;
}

void func_296(int iParam0)
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
			func_306();
			break;
		case joaat("HEADSHOT_IMMUNITY"):
			func_307();
			break;
		case joaat("WOUND_EFFECT"):
			PED::_SET_PED_ACTIVATE_WOUND_EFFECT(iVar0, 2, 14411, 0f, 0f, 0f, 0f, 0f, -1f, 1f);
			break;
		case joaat("TRAIL_EFFECT"):
			PED::_SET_PED_TRAIL_EFFECT(iVar0, true, 0f);
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
			break;
		case joaat("DRAIN_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
			break;
		case joaat("DISORIENT_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
			break;
		case joaat("POISON_EFFECT"):
			ATTRIBUTE::_SET_STATUS_EFFECT_PERIODIC_ICON(5);
			func_108(104, 1);
			break;
		case joaat("TOXIC_MOONSHINE_EFFECT"):
			GRAPHICS::ANIMPOSTFX_PLAY(func_308(iParam0));
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
			iVar2 = func_309(iParam0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_315(iParam0, 0));
			func_316(iVar2, 0, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_315(iParam0, 1));
			func_316(iVar2, 1, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_315(iParam0, 2));
			func_316(iVar2, 2, 1, iVar3, 0);
			iVar3 = ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar0, func_315(iParam0, 3));
			func_316(iVar2, 2, 1, iVar3, 0);
			break;
		case joaat("MOMENT_TO_RECUPERATE_VFX"):
			iVar2 = func_309(iParam0);
			func_316(iVar2, 3, 1, -1, 1);
			break;
		case joaat("SLOW_AND_STEADY_VFX"):
			iVar2 = func_309(iParam0);
			func_316(iVar2, 4, 1, -1, 0);
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
			func_317();
			break;
		case joaat("ON_FOOT_SPEED_RESTRICTION_JOG"):
		case 718630298:
		case 1341326366:
		case joaat("ON_FOOT_SPEED_RESTRICTION_WALK"):
			func_303(17);
			break;
		case joaat("INCAPACITATION_INSTEAD_OF_DEATH"):
			func_303(16);
			break;
	}
}

void func_297(int iParam0)
{
	char* sVar0;
	char* sVar1;

	if (iParam0 == 0)
	{
		return;
	}
	sVar0 = func_318(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	sVar1 = func_319(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return;
	}
	AUDIO::PLAY_SOUND_FROM_ENTITY(sVar0, Global_1295619.f_3, sVar1, false, 0, 0);
}

int func_298(int iParam0)
{
	int iVar0;

	if (!func_291(iParam0))
	{
		return -1;
	}
	iVar0 = func_292(iParam0, 1);
	return Global_1156096.f_35859.f_9286[iVar0 /*3*/];
}

bool func_299(int iParam0)
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

int func_300(int iParam0)
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

int func_301(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_320(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

float func_302(int iParam0, int iParam1, float fParam2, char* sParam3)
{
	struct<11> Var0;
	float fVar22;

	if (func_321(iParam0, iParam1, &Var0))
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, Var0.f_10.f_1);
	}
	else
	{
		fVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_FLOAT_HASH(iParam0, iParam1, fParam2);
	}
	return fVar22;
}

bool func_303(int iParam0)
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

bool func_304(int iParam0)
{
	int iVar0;

	iVar0 = func_305(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 5)
	{
		return false;
	}
	return true;
}

int func_305(int iParam0, int iParam1)
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

void func_306()
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
		if (!func_20(Global_1297553[Global_1295619 /*87*/].f_86, 1))
		{
			bVar1 = true;
		}
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 556, bVar1);
}

void func_307()
{
	bool bVar0;

	bVar0 = false;
	if (Global_1156096.f_21645[12 /*209*/].f_208)
	{
		bVar0 = true;
	}
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 263, bVar0);
}

char* func_308(int iParam0)
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

int func_309(int iParam0)
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

void func_310(int iParam0)
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

void func_311()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, false);
	PED::_RESET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3);
}

bool func_312(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<31> Var4;

	if (!func_255(iParam0))
	{
		return false;
	}
	iVar0 = func_199(iParam0, 1);
	iVar2 = Global_1156096.f_35859.f_3116[iVar0 /*31*/].f_4;
	if (func_257(Global_1156096.f_35859.f_3116[iVar0 /*31*/]))
	{
		iVar3 = Global_1156096.f_35859.f_9286[func_292(iVar2, 1) /*3*/];
		Var4 = { func_313(iVar3) };
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
			if (!func_322() && !func_323())
			{
				return false;
			}
			return true;
		case -2010146101:
			if (!func_322())
			{
				return false;
			}
			return true;
		case joaat("ENTER_REVIVED_REMOTE"):
			iVar1 = func_254(iParam1);
			if (iVar1 == Global_1295619)
			{
				return false;
			}
			return true;
		case -2129621195:
			iVar1 = func_254(iParam1);
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
			iVar1 = func_254(iParam1);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (iVar1 != Global_1295619 && !func_324(Global_1295619.f_149[iVar1]))
			{
				return false;
			}
			if (!func_325(512, iVar1))
			{
				return false;
			}
			return true;
		case -1503245593:
			if (!Global_1956862.f_1716[8])
			{
				return false;
			}
			iVar1 = func_254(iParam1);
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

struct<31> func_313(int iParam0)
{
	int iVar0;

	iVar0 = func_199(iParam0, 1);
	return Global_1156096.f_35859.f_3116[iVar0 /*31*/];
}

bool func_314(int iParam0, int iParam1, bool bParam2, char* sParam3)
{
	struct<11> Var0;
	bool bVar22;

	if (func_321(iParam0, iParam1, &Var0))
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, Var0.f_10.f_2);
	}
	else
	{
		bVar22 = NETWORK::NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(iParam0, iParam1, bParam2);
	}
	return bVar22;
}

char* func_315(int iParam0, int iParam1)
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

void func_316(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
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

void func_317()
{
	PED::SET_PED_CONFIG_FLAG(Global_1295619.f_3, 305, true);
	PED::_SET_PED_LADDER_MOVEMENT_SPEED_MODIFIER(Global_1295619.f_3, 0.7f);
}

char* func_318(int iParam0)
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

char* func_319(int iParam0)
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

bool func_320(struct<2> Param0, bool bParam2)
{
	if (!func_268(Param0))
	{
		return false;
	}
	func_326(bParam2);
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

bool func_321(int iParam0, int iParam1, var uParam2)
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
		uParam2->f_10.f_3 = func_327(iVar7);
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

bool func_322()
{
	return Global_1572887.f_7;
}

bool func_323()
{
	if (!Global_1048577)
	{
		return false;
	}
	if (!func_268(func_143(0)))
	{
		return false;
	}
	if (Global_3145858 != -5.544348E+20f)
	{
		return false;
	}
	if (func_328(Global_524288.f_39632))
	{
		return true;
	}
	return false;
}

bool func_324(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_329(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_330(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_325(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

void func_326(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

int func_327(int iParam0)
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

bool func_328(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

bool func_329(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_330(int iParam0)
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
		func_331(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_332(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

void func_331(int iParam0)
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
	func_332(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_332(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

