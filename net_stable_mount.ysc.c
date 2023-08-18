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
	struct<5> Local_19 = { 0, 0, 0, 0, 0 } ;
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
	var uLocal_40 = 255;
	var uLocal_41 = 0;
	var uLocal_42 = 4;
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
	var uLocal_54 = 2;
	var uScriptParam_0 = 0;
	var uScriptParam_1 = 0;
	var uScriptParam_2 = 0;
	var uScriptParam_3 = 0;
	var uScriptParam_4 = 0;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = -1;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
	var uScriptParam_10 = 0;
	var uScriptParam_11 = 0;
	var uScriptParam_12 = 0;
	var uScriptParam_13 = 0;
	var uScriptParam_14 = 0;
	var uScriptParam_15 = 0;
#endregion

void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Local_19.f_4 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	if (!ENTITY::DOES_ENTITY_EXIST(Local_19.f_4))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	func_1();
	while (!func_2(1, 1) && (ENTITY::DOES_ENTITY_EXIST(Local_19.f_4) && BRAIN::_GET_SCRIPT_BRAIN_ENTITY() == Local_19.f_4))
	{
		if (!func_3(&Local_19, &uScriptParam_0))
		{
			func_4(&Local_19, &uScriptParam_0);
			if (func_3(&Local_19, &uScriptParam_0))
			{
			}
			else
			{
				Jump @119; //curOff = 113
				Jump @127; //curOff = 116
				BUILTIN::WAIT(0);
			}
			func_5(&Local_19, &uScriptParam_0);
		}
	}
}

void func_1()
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	BRAIN::_0xA6AC35DB4A7957A8(275);
}

bool func_2(bool bParam0, bool bParam1)
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

bool func_3(var uParam0, bool bParam1)
{
	if (func_2(1, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return true;
	}
	if (func_6(uParam0, 12))
	{
		return true;
	}
	if (func_6(uParam0, 0))
	{
		return true;
	}
	if (!func_6(uParam0, 2))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(bParam1) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam1))
		{
			func_7(uParam0, 11);
			return true;
		}
	}
	return false;
}

void func_4(var uParam0, bool bParam1)
{
	int iVar0;

	uParam0->f_4 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	}
	else
	{
		uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	}
	uParam0->f_21 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_21);
		if (uParam0->f_20 != iVar0)
		{
			uParam0->f_20 = iVar0;
			func_7(uParam0, 29);
		}
	}
	switch (*uParam0)
	{
		case 0:
			func_8(uParam0, bParam1);
			break;
		case 1:
			func_9(uParam0, bParam1);
			break;
		case 2:
			func_10(uParam0, bParam1);
			break;
		case 3:
			func_11(uParam0, bParam1);
			break;
		case 4:
			func_12(uParam0, bParam1);
			break;
	}
	func_13(uParam0, bParam1);
	uParam0->f_2++;
	if (uParam0->f_2 > 5)
	{
		uParam0->f_2 = 0;
	}
}

void func_5(var uParam0, var uParam1)
{
	bool bVar0;

	bVar0 = true;
	if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_17));
	}
	if (HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_6))
	{
		HUD::REMOVE_MP_GAMER_TAG(&(uParam0->f_6));
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
		return;
	}
	else if (ENTITY::GET_ENTITY_COLLISION_DISABLED(uParam0->f_4))
	{
		ENTITY::SET_ENTITY_COLLISION(uParam0->f_4, true, false);
	}
	if (func_14(uParam0))
	{
		bVar0 = false;
	}
	func_15(uParam0->f_19);
	func_16(uParam0, uParam1);
	func_17(uParam0, uParam1);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		AITRANSPORT::SET_TRANSPORT_ACCESSIBLE_SEAT_FLAGS(uParam0->f_19, 0);
		ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, true);
	}
	if (PED::_IS_PED_VISIBILITY_TRACKED(uParam0->f_19))
	{
		PED::RELEASE_PED_VISIBILITY_TRACKING(uParam0->f_19);
	}
	if (!uParam0->f_3)
	{
		if (!func_18(uParam1, uParam0->f_4, uParam0->f_5, bVar0, func_6(uParam0, 2)))
		{
		}
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_6(var uParam0, int iParam1)
{
	return MISC::IS_BIT_SET(uParam0->f_1, iParam1);
}

void func_7(var uParam0, int iParam1)
{
	if (MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::SET_BIT(&(uParam0->f_1), iParam1);
}

void func_8(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	int iVar6;
	int iVar7;

	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_4))
	{
		ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4, true, true);
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(uParam0->f_4);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_19(&(uParam0->f_30)))
	{
		func_20(&(uParam0->f_30));
	}
	iVar1 = func_21(iVar0);
	if (iVar1 == -1)
	{
		if (STREAMING::IS_MODEL_A_PED(iVar0))
		{
			iVar1 = 0;
		}
		else if (STREAMING::IS_MODEL_A_VEHICLE(iVar0))
		{
			iVar1 = 2;
		}
		else
		{
			func_7(uParam0, 0);
		}
	}
	iVar2 = PLAYER::PLAYER_PED_ID();
	uParam0->f_5 = iVar1;
	iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	uParam0->f_21 = iVar3;
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(bParam1->f_2)))
	{
		func_7(uParam0, 1);
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	}
	else
	{
		uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	}
	if ((!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar3)) || iVar3 != PLAYER::PLAYER_ID())
	{
		switch (uParam0->f_5)
		{
			case 0:
			case 1:
				func_7(uParam0, 5);
				if (MISC::COMPARE_STRINGS(&(bParam1->f_7), func_22(), false, -1) == 0)
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_23(iVar0))));
				}
				else if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(bParam1->f_7)) > 0 && NETWORK::_0xF23A6D6C11D8EC15(bParam1))
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(bParam1->f_7));
				}
				else if (iVar0 == func_25())
				{
					PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())));
				}
				func_7(uParam0, 21);
				break;
			case 2:
				func_7(uParam0, 6);
				func_27(uParam0, iVar2, NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1));
				break;
			case 3:
				func_7(uParam0, 6);
				func_7(uParam0, 21);
				break;
			default:
				func_7(uParam0, 21);
				break;
		}
		func_28(uParam0, 4);
		return;
	}
	if (func_6(uParam0, 1))
	{
		if (iVar1 == 0 || iVar1 == 1)
		{
			iVar4 = func_23(iVar0);
			StringCopy(&(Global_1290256.f_11.f_715), MISC::VAR_STRING(2, func_24(iVar4)), 64);
		}
	}
	else
	{
		if (!func_29(&(bParam1->f_2), &uVar5))
		{
			if (func_30(&(bParam1->f_2)))
			{
				func_31(0, 1);
			}
		}
		if (iVar1 == 0 || iVar1 == 1)
		{
			if (!func_32(&(bParam1->f_2), uParam0->f_5, 1))
			{
				func_7(uParam0, 0);
				return;
			}
		}
		bParam1->f_2 = { Global_1903834 };
		uParam0->f_5 = Global_1903834.f_10;
		Global_1290256.f_11.f_715 = { func_33(&Global_1903834, 1) };
	}
	if (uParam0->f_5 == -1)
	{
		func_7(uParam0, 0);
		return;
	}
	func_7(uParam0, 2);
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(1.353475E+33f))
	{
		ENTITY::IS_ENTITY_DEAD(iVar2);
		PED::SET_PED_CONFIG_FLAG(iVar2, 561, false);
		func_34(uParam0, 23);
	}
	uParam0->f_18 = func_35(uParam0->f_5);
	if (func_6(uParam0, 1))
	{
		uParam0->f_18 = -4.784198E-06f;
	}
	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			func_7(uParam0, 21);
			if (NETWORK::NETWORK_DOES_TUNABLE_EXIST(-6.484858E+21f, 2.426261E+21f) && NETWORK::NETWORK_ACCESS_TUNABLE_BOOL(-6.484858E+21f, 2.426261E+21f))
			{
				if (func_6(uParam0, 1))
				{
					iVar7 = 1;
				}
				else
				{
					func_36(uParam0->f_19, Global_1903834.f_23);
					iVar7 = func_37(uParam0->f_19);
				}
				PED::_SET_MOUNT_BONDING_LEVEL(uParam0->f_19, iVar7);
			}
			uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
			iVar6 = NETWORK::PED_TO_NET(uParam0->f_19);
			func_38(uParam0->f_4, 0);
			func_7(uParam0, 5);
			func_28(uParam0, 1);
			if (HUD::GET_LENGTH_OF_LITERAL_STRING(&(Global_1290256.f_11.f_715)) > 0)
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, &(Global_1290256.f_11.f_715), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(Global_1290256.f_11.f_715));
			}
			else if (iVar0 == func_25())
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())), true, false, "", 0);
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, MISC::VAR_STRING(2, func_24(func_26())));
			}
			else
			{
				uParam0->f_6 = HUD::CREATE_FAKE_MP_GAMER_TAG(uParam0->f_19, "HORSE", true, false, "", 0);
			}
			if (func_6(uParam0, 1))
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_6, -2.72676E+08f);
			}
			else
			{
				HUD::_SET_MP_GAMER_TAG_TOP_ICON(uParam0->f_6, 2.997277E-34f);
			}
			HUD::_SET_MP_GAMER_TAG_COLOUR(uParam0->f_6, 3.737303E-09f);
			HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_6, uParam0->f_7);
			if (func_32(&(bParam1->f_2), uParam0->f_5, 0))
			{
				if (!func_39(&Global_1903834, &(uParam0->f_35)))
				{
				}
			}
			func_40();
			break;
		case 2:
			func_27(uParam0, iVar2, PLAYER::PLAYER_ID());
			func_7(uParam0, 6);
			func_28(uParam0, 2);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_4);
			break;
		case 3:
			func_7(uParam0, 21);
			func_7(uParam0, 6);
			func_28(uParam0, 3);
			iVar6 = NETWORK::_0xF260AF6F43953316(uParam0->f_4);
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
	if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar6))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		return;
	}
	NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iVar6, PLAYER::PLAYER_ID(), true);
}

void func_9(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	char* sVar6;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_41(uParam0);
		return;
	}
	func_42(uParam0);
	if (!PLAYER::IS_PLAYER_DEAD(iVar0) && func_43(PLAYER::GET_PLAYER_PED(iVar0), uParam0->f_19, 5f, 1, 1))
	{
		func_44();
		if (!func_45(966, 2f) && !func_46(966))
		{
			func_47(966, 0);
			func_48(966, 2f);
		}
	}
	if (iVar0 == uParam0->f_21)
	{
		func_7(uParam0, 7);
		if (!func_6(uParam0, 22))
		{
			func_49();
			if (!func_50())
			{
			}
			else
			{
				func_51(&(Global_1903834.f_113));
				Global_1903834.f_111 = 1;
				Global_1903834.f_112 = 0;
				Var2 = { func_52(0, 1, 0, -1) };
				TELEMETRY::TELEMETRY_PERSONAL_VEHICLE_MOUNT(uParam0->f_19, 1.124439E+21f, &Var2, 0);
				func_7(uParam0, 22);
			}
		}
		if (func_53(44))
		{
			func_34(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_54(2, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_34(uParam0, 8);
		}
		Global_1289628[iVar1 /*19*/].f_9 |= 1;
		if (func_6(uParam0, 20))
		{
			func_32(&(bParam1->f_2), 0, 0);
			sVar6 = func_55(func_33(&Global_1903834, 1));
			if (MISC::COMPARE_STRINGS(sVar6, &(Global_1290256.f_11.f_715), true, -1) > 0)
			{
				HUD::SET_MP_GAMER_TAG_NAME(uParam0->f_6, &(Global_1903834.f_12));
				PED::_SET_PED_PROMPT_NAME(uParam0->f_19, &(Global_1903834.f_12));
				Global_1290256.f_11.f_715 = { Global_1903834.f_12 };
				func_34(uParam0, 20);
			}
		}
		if (func_54(4096, 255))
		{
			func_56(4096);
			func_7(uParam0, 20);
		}
		func_57(uParam0);
		func_58(uParam0);
		func_59(uParam0, bParam1);
		func_60(uParam0, uParam0->f_19, 8192, 16384, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_34(uParam0, 4);
		}
	}
	func_61(uParam0, bParam1);
	func_62(uParam0, bParam1);
	func_63(uParam0);
	func_64(uParam0);
	func_65(uParam0);
	func_66(uParam0, iVar1);
	func_67(uParam0, iVar1);
	func_68(uParam0, iVar1);
	func_69(uParam0, bParam1, iVar1);
	func_70(uParam0, bParam1, iVar1);
	func_71(uParam0);
	func_72(uParam0);
}

void func_10(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam1->f_6 == Global_1290256.f_782.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_22);
		if (func_53(94))
		{
			BRAIN::_0xA6AC35DB4A7957A8(9999);
		}
		else
		{
			BRAIN::_0xA6AC35DB4A7957A8(275);
		}
		func_7(uParam0, 7);
		if (func_53(90))
		{
			func_34(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_73(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_34(uParam0, 8);
		}
		Global_1289628[iVar1 /*19*/].f_10 |= 1;
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_22) && VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_22))
		{
			VEHICLE::_SET_DRAFT_VEHICLE_YOKE_CAN_BREAK(uParam0->f_22, func_53(96));
			VEHICLE::_SET_DRAFT_VEHICLE_ANIMALS_CAN_DETACH(uParam0->f_22, func_53(96));
		}
		func_60(uParam0, uParam0->f_22, 32768, 65536, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_34(uParam0, 4);
		}
	}
	func_74(uParam0);
	func_27(uParam0, iVar0, PLAYER::PLAYER_ID());
	func_65(uParam0);
	func_69(uParam0, bParam1, iVar1);
	func_70(uParam0, bParam1, iVar1);
	func_75(uParam0);
}

void func_11(var uParam0, bool bParam1)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	if (bParam1->f_6 == Global_1290256.f_782.f_46)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_22);
		func_7(uParam0, 7);
		if (func_53(90))
		{
			func_34(uParam0, 4);
		}
		else
		{
			func_7(uParam0, 4);
		}
		if (func_73(8, 255))
		{
			func_7(uParam0, 8);
		}
		else
		{
			func_34(uParam0, 8);
		}
		Global_1289628[iVar0 /*19*/].f_10 |= 1;
		func_60(uParam0, uParam0->f_22, 32768, 65536, func_53(91));
	}
	else
	{
		func_34(uParam0, 7);
		func_34(uParam0, 8);
		if (func_6(uParam0, 3))
		{
			func_7(uParam0, 4);
		}
		else
		{
			func_34(uParam0, 4);
		}
	}
	func_65(uParam0);
	func_69(uParam0, bParam1, iVar0);
	func_70(uParam0, bParam1, iVar0);
	func_76(uParam0);
}

void func_12(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	iVar1 = iVar0;
	if (iVar0 != uParam0->f_21)
	{
	}
	if (!NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(bParam1))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	switch (func_77(uParam0, 1))
	{
		case 1:
			return;
		case 2:
			func_7(uParam0, 0);
			return;
		default:
			break;
	}
	if (!Global_1072759.f_5)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		func_7(uParam0, 10);
		func_7(uParam0, 0);
		return;
	}
	if (uParam0->f_5 == 2)
	{
		func_27(uParam0, PLAYER::PLAYER_PED_ID(), iVar0);
	}
	func_66(uParam0, iVar1);
	if (uParam0->f_2 != 0)
	{
		return;
	}
	func_67(uParam0, iVar1);
	func_69(uParam0, bParam1, iVar1);
	func_70(uParam0, bParam1, iVar1);
	func_71(uParam0);
	if (!func_6(uParam0, 18))
	{
		if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0))
		{
			if (!func_19(&(uParam0->f_11)))
			{
				func_78(&(uParam0->f_11));
			}
			fVar2 = func_79(&(uParam0->f_11));
			if (fVar2 > 5f)
			{
				func_7(uParam0, 18);
			}
		}
		else if (func_19(&(uParam0->f_11)))
		{
			func_20(&(uParam0->f_11));
		}
	}
	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
			{
				uParam0->f_19 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
			}
			if (uParam0->f_19 == PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0))
			{
				func_63(uParam0);
				func_61(uParam0, bParam1);
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		case 2:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
			{
				uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
			}
			if (func_73(1, iVar1) && Global_1289628[iVar1 /*19*/].f_14 == bParam1->f_6)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			func_74(uParam0);
			break;
		case 3:
			if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_22))
			{
				uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
			}
			if (func_73(1, iVar1) && Global_1289628[iVar1 /*19*/].f_14 == bParam1->f_6)
			{
			}
			else if (func_6(uParam0, 18))
			{
				func_7(uParam0, 0);
				func_7(uParam0, 10);
			}
			break;
		default:
			func_7(uParam0, 0);
			break;
	}
}

void func_13(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar1 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(1, iVar0))
		{
			case -507840394:
				func_80(uParam0, bParam1, iVar0);
				break;
		}
		iVar0++;
	}
}

bool func_14(var uParam0)
{
	if (!Global_1048579)
	{
		return false;
	}
	if (!Global_387940.f_3)
	{
		return false;
	}
	if (Global_387940.f_18.f_1)
	{
		return false;
	}
	if (func_6(uParam0, 11))
	{
		return true;
	}
	if (func_6(uParam0, 17))
	{
		return true;
	}
	return false;
}

int func_15(int iParam0)
{
	var uVar0[3];
	int iVar4;
	int iVar5;
	int iVar6;

	if (!func_81(iParam0))
	{
		return 1;
	}
	if (!PED::IS_PED_CARRYING_SOMETHING(iParam0))
	{
		return 1;
	}
	iVar4 = func_82(iParam0, &uVar0, 3);
	iVar5 = 0;
	iVar6 = 0;
	while (iVar6 < iVar4)
	{
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uVar0[iVar6]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(uVar0[iVar6]) || (ENTITY::IS_ENTITY_A_PED(uVar0[iVar6]) && PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uVar0[iVar6]))))
			{
				PED::DETACH_CARRIABLE_ENTITY(uVar0[iVar6], false, false);
				iVar5++;
			}
			else
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 2, false);
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 27, true);
				iVar5++;
			}
		}
		else if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 2))
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uVar0[iVar6], 27))
			{
				iVar5++;
			}
		}
		iVar6++;
	}
	if (iVar4 == iVar5)
	{
		return 1;
	}
	return 0;
}

void func_16(var uParam0, var uParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;

	bVar0 = false;
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if ((!func_83(iVar1, uParam0->f_19, 0) || ENTITY::IS_ENTITY_DEAD(iVar1)) || PED::GET_MOUNT(iVar1) != uParam0->f_19)
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		if (TASK::_IS_PED_LEADING_HORSE(iVar1) && TASK::_GET_LED_HORSE_FROM_PED(iVar1) == uParam0->f_19)
		{
			TASK::TASK_STOP_LEADING_HORSE(iVar1);
		}
	}
	if (!PLAYER::IS_PLAYER_DEAD(iVar2))
	{
		if (PLAYER::IS_PLAYER_FREE_AIMING(iVar2) || PED::GET_PED_RESET_FLAG(iVar1, 311))
		{
			bVar0 = true;
		}
	}
	if ((bVar0 || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_19)) || PED::_IS_PED_QUEUED_FOR_DELETION(uParam0->f_19))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, true);
		PED::_REMOVE_PED_FROM_MOUNT(iVar1, true, false);
	}
	else
	{
		TASK::TASK_DISMOUNT_ANIMAL(iVar1, 1, 0, 0, 0, 0);
	}
}

void func_17(var uParam0, var uParam1)
{
	if (!func_6(uParam0, 2))
	{
		return;
	}
	Global_1903834.f_111 = 0;
	PLAYER::_SET_PLAYER_OWNS_MOUNT(PLAYER::PLAYER_ID(), 0);
	PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 561, false);
	func_84();
	func_85(uParam0->f_19, &(uParam1->f_2));
	func_86();
	func_56(1);
	func_56(65536);
	func_56(32768);
	func_56(131072);
	func_87(0, 1);
	func_88(0, 1);
}

bool func_18(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!MISC::IS_BIT_SET(Global_1290256.f_11.f_320, iVar0))
		{
			Global_1290256.f_11.f_323[iVar0 /*5*/].f_2 = iParam1;
			Global_1290256.f_11.f_323[iVar0 /*5*/].f_3 = iParam2;
			Global_1290256.f_11.f_323[iVar0 /*5*/] = { *bParam0 };
			Global_1290256.f_11.f_323[iVar0 /*5*/].f_4 = 0;
			if (bParam4)
			{
				Global_1290256.f_11.f_323[iVar0 /*5*/].f_4 |= 8;
			}
			if (bParam3)
			{
				Global_1290256.f_11.f_323[iVar0 /*5*/].f_4 |= 2;
			}
			if (bParam4)
			{
				switch (iParam2)
				{
					case 0:
					case 1:
						Global_1291892 = iVar0;
						Global_1291892.f_2 = 0;
						break;
					case 2:
					case 3:
						Global_1291892.f_1 = iVar0;
						break;
				}
			}
			MISC::SET_BIT(&(Global_1290256.f_11.f_320), iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_19(var uParam0)
{
	return func_89(*uParam0, 1);
}

void func_20(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_21(int iParam0)
{
	int iVar0;
	int iVar1;

	func_90();
	iVar0 = 0;
	while (iVar0 < 6)
	{
		iVar1 = iVar0;
		Global_1903834.f_106.f_1 = 0;
		Global_1903834.f_106.f_2 = -2.113745E+18f;
		Global_1903834.f_106.f_3 = func_91(iVar1);
		Global_1903834.f_106.f_4 = iParam0;
		if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Global_1903834.f_106.f_1), &(Global_1903834.f_106)))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

char* func_22()
{
	return "UNNAMED_HORSE";
}

int func_23(int iParam0)
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

char* func_24(int iParam0)
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

int func_25()
{
	return 6.51589E-10f;
}

int func_26()
{
	return -5.867486E+25f;
}

void func_27(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	iVar0 = 0;
	while (iVar0 < uParam0->f_28)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_23[iVar0]))
		{
		}
		else
		{
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_23[iVar0], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
		}
		iVar0++;
	}
	if (func_6(uParam0, 21))
	{
		return;
	}
	uParam0->f_22 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(uParam0->f_4);
	if (!VEHICLE::IS_DRAFT_VEHICLE(uParam0->f_22))
	{
		uParam0->f_33++;
		return;
	}
	VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_22, &iVar4, &iVar3);
	if (iVar4 == 0)
	{
		if (iVar3 == 0)
		{
			uParam0->f_33++;
			if (uParam0->f_33 > 90)
			{
				func_7(uParam0, 0);
			}
			return;
		}
	}
	if (iVar3 >= iVar4)
	{
		iVar1 = 0;
		while (iVar1 < iVar3)
		{
			iVar5 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(uParam0->f_22, iVar1);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar5))
			{
			}
			else
			{
				if (iVar2 >= 4)
				{
				}
				else
				{
					uParam0->f_23[iVar2] = iVar5;
					if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(uParam0->f_23[iVar2]) || !ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(uParam0->f_23[iVar2]))
					{
						ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_23[iVar2], true, true);
					}
					PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(iParam2), uParam0->f_23[iVar2], false);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_23[iVar2], 208, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_23[iVar2], 209, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_23[iVar2], 277, true);
					PED::SET_PED_CONFIG_FLAG(uParam0->f_23[iVar2], 467, true);
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_23[iVar2], PED::GET_PED_RELATIONSHIP_GROUP_HASH(iParam1));
					iVar2++;
					iVar1++;
				}
				Jump @424; //curOff = 392
				uParam0->f_33++;
				if (uParam0->f_33 > 90)
				{
					func_7(uParam0, 0);
				}
				return;
				uParam0->f_28 = iVar2;
				func_7(uParam0, 21);
			}
		}
	}
}

void func_28(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

bool func_29(int iParam0, var uParam1)
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

bool func_30(int iParam0)
{
	struct<4> Var0;
	struct<10> Var4;
	bool bVar18;
	int iVar19;

	Var0 = { func_92() };
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
			func_93(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
			Global_17418.f_55.f_61.f_41[iVar19 /*56*/] = { *iParam0 };
			bVar18 = true;
		}
		else
		{
			if (func_94(Global_17418.f_55.f_61.f_41[iVar19 /*56*/], &Var4, 1, 1, -1))
			{
			}
			else
			{
				func_93(&(Global_17418.f_55.f_61.f_41[iVar19 /*56*/]));
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

void func_31(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_95();
	}
	if (bParam0)
	{
		func_96(8);
		func_96(512);
	}
	else
	{
		func_96(8);
		func_96(16);
	}
}

bool func_32(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_97(&Global_1903834);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_98(iParam0, &Global_1903834, &(Global_1903834.f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_99(iParam0, &Global_1903834, &(Global_1903834.f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

struct<8> func_33(int iParam0, bool bParam1)
{
	struct<8> Var0;
	struct<8> Var8;
	int iVar16;
	char* sVar17;

	Var0 = { iParam0->f_12 };
	if (bParam1)
	{
		if (func_100(iParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (MISC::COMPARE_STRINGS(&Var0, func_22(), false, -1) == 0)
	{
		StringCopy(&Var0, MISC::VAR_STRING(2, func_24(iParam0->f_22)), 64);
	}
	if (HUD::GET_LENGTH_OF_LITERAL_STRING(&Var0) == 0)
	{
		if (iParam0->f_22 != 0)
		{
			StringCopy(&Var0, MISC::VAR_STRING(2, func_101(iParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_102(iParam0->f_4, 0))
	{
		iVar16 = func_103(iParam0->f_4);
		if (STREAMING::IS_MODEL_VALID(iVar16) && STREAMING::IS_MODEL_A_VEHICLE(iVar16))
		{
			sVar17 = MISC::VAR_STRING(0, func_104(iParam0->f_4, 0));
			Var0 = { func_105(sVar17) };
		}
	}
	return Var0;
}

void func_34(var uParam0, int iParam1)
{
	if (!MISC::IS_BIT_SET(uParam0->f_1, iParam1))
	{
		return;
	}
	MISC::CLEAR_BIT(&(uParam0->f_1), iParam1);
}

float func_35(int iParam0)
{
	var uVar0;
	var uVar1;

	if (iParam0 == -1)
	{
		return 0;
	}
	func_90();
	Global_1903834.f_106.f_2 = 9.282359E-35f;
	Global_1903834.f_106.f_3 = func_91(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, &(Global_1903834.f_106)))
	{
		return -5.719183E-31f;
	}
	uVar1 = uVar0;
	return uVar1;
}

void func_36(int iParam0, int iParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(iParam0, 7, iParam1);
}

int func_37(int iParam0)
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

void func_38(int iParam0, bool bParam1)
{
	func_106(iParam0, bParam1);
}

bool func_39(var uParam0, var uParam1)
{
	if (func_107(uParam0, 0f))
	{
		*uParam1 = 4;
	}
	else if (func_107(uParam0, 2f))
	{
		*uParam1 = 3;
	}
	else if (func_107(uParam0, 1.084202E-19f))
	{
		*uParam1 = 2;
	}
	else if (func_107(uParam0, 2.524355E-29f))
	{
		*uParam1 = 1;
	}
	else if (func_107(uParam0, 3.85186E-34f))
	{
		*uParam1 = 0;
	}
	else
	{
		return false;
	}
	return true;
}

int func_40()
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

void func_41(var uParam0)
{
	if (!func_6(uParam0, 24) && !func_6(uParam0, 25))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 24);
		func_108();
	}
}

void func_42(var uParam0)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
		{
			iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);
		}
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (iVar0 == iVar1 && func_6(uParam0, 2))
	{
		if (!func_6(uParam0, 23))
		{
			if (UNLOCK::UNLOCK_IS_UNLOCKED(1.353475E+33f))
			{
				ENTITY::IS_ENTITY_DEAD(iVar1);
				PED::SET_PED_CONFIG_FLAG(iVar1, 561, true);
				func_7(uParam0, 23);
			}
		}
	}
	else if (func_6(uParam0, 23))
	{
		ENTITY::IS_ENTITY_DEAD(iVar1);
		PED::SET_PED_CONFIG_FLAG(iVar1, 561, false);
		func_34(uParam0, 23);
	}
}

bool func_43(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (bParam4)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
		{
			return true;
		}
	}
	else if (func_109(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return true;
	}
	return false;
}

void func_44()
{
	if (!func_110(3))
	{
		func_111();
		func_112(3);
	}
}

bool func_45(int iParam0, float fParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && fParam1) != 0;
}

bool func_46(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17418.f_2585[iVar1], iVar2);
}

void func_47(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_113(iParam0, &iVar0, &iVar1);
	if (!func_114(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_115(iVar0, iVar1);
}

void func_48(int iParam0, float fParam1)
{
	Global_1904398.f_33[iParam0 /*9*/].f_2 = (Global_1904398.f_33[iParam0 /*9*/].f_2 || fParam1);
}

void func_49()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_1903834.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else
		{
			STREAMING::REQUEST_MODEL(iVar0, false);
		}
		iVar1++;
	}
}

bool func_50()
{
	int iVar0;
	int iVar1;

	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar0 = Global_1903834.f_113[iVar1 /*96*/];
		if (!STREAMING::IS_MODEL_VALID(iVar0))
		{
		}
		else if (!STREAMING::HAS_MODEL_LOADED(iVar0))
		{
			return false;
		}
		iVar1++;
	}
	return true;
}

void func_51(var uParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		func_116(iVar0, uParam0[iVar1 /*96*/], iVar1);
		iVar1++;
	}
}

struct<4> func_52(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	struct<4> Var0;
	struct<4> Var29;
	bool bVar33;
	bool bVar34;
	int iVar35;
	struct<4> Var36;

	Var0.f_9 = -5.45926E-19f;
	if (!func_117(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_118() };
		if (func_119() && INVENTORY::_INVENTORY_IS_GUID_VALID(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!INVENTORY::_INVENTORY_COMPARE_GUIDS(&Var29, &Var0))
		{
			func_120(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_121(PLAYER::PLAYER_ID());
	}
	bVar33 = func_122();
	bVar34 = false;
	if (bVar33)
	{
		bVar34 = func_123(75);
	}
	iVar35 = func_124(iParam3, 0);
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
			return func_92();
		}
		if (!func_125(&Var0, 0))
		{
			Var36 = { func_126(bParam0) };
		}
		else
		{
			Var36 = { Var0 };
		}
		return Var36;
	}
	return Var0;
}

bool func_53(int iParam0)
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

bool func_54(int iParam0, int iParam1)
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

char* func_55(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

void func_56(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_9 = (Global_1289628[iVar0 /*19*/].f_9 - (Global_1289628[iVar0 /*19*/].f_9 && iParam0));
}

void func_57(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PED::_GET_ACTIVE_ANIMAL_OWNER(uParam0->f_19);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::SET_PED_OWNS_ANIMAL(iVar1, uParam0->f_19, false);
}

void func_58(var uParam0)
{
	if (!func_6(uParam0, 5) || !func_6(uParam0, 7))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	if (!func_6(uParam0, 28))
	{
		if (func_127(0))
		{
			if (BUILTIN::VDIST(func_128(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) > 1076677837)
			{
				func_129(512);
				func_7(uParam0, 28);
			}
		}
	}
	else if (!func_127(0))
	{
		if (BUILTIN::VDIST(func_128(PLAYER::PLAYER_ID()), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) <= 1076677837)
		{
			func_34(uParam0, 28);
		}
	}
}

void func_59(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;

	switch (uParam0->f_5)
	{
		case 0:
		case 1:
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
			{
				iVar0 = ATTRIBUTE::GET_ATTRIBUTE_RANK(uParam0->f_19, 13);
				if (iVar0 < 10)
				{
					iVar1 = 0;
				}
				else if (iVar0 < 30)
				{
					iVar1 = 1;
				}
				else if (iVar0 < 70)
				{
					iVar1 = 2;
				}
				else if (iVar0 < 90)
				{
					iVar1 = 3;
				}
				else
				{
					iVar1 = 4;
				}
				if (iVar1 != uParam0->f_35)
				{
					if (func_130(&(uParam1->f_2), uParam0->f_5, iVar1, 0))
					{
						uParam0->f_35 = iVar1;
					}
				}
			}
			break;
	}
}

void func_60(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	bool bVar4;

	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(uParam0->f_6))
	{
		return;
	}
	iVar0 = func_131(&(uParam0->f_6), iParam1);
	iVar0 = iVar0;
	bVar1 = func_132(iParam2);
	bVar2 = func_132(iParam3);
	iVar3 = 0;
	if (bParam4)
	{
		iVar3 = 0;
	}
	else if (AITRANSPORT::_IS_PED_ON_TRANSPORT_ENTITY(PLAYER::PLAYER_PED_ID(), iParam1))
	{
		iVar3 = 0;
	}
	else if (bVar1 || bVar2)
	{
		bVar4 = func_133(uParam0);
		if (bVar4)
		{
			iVar3 = func_134(iParam1, 0, &(uParam0->f_15), -1, -1, 4.271517E+07f, 1, 1);
		}
		else
		{
			iVar3 = uParam0->f_34;
		}
	}
	uParam0->f_34 = iVar3;
	if (uParam0->f_7 != iVar3)
	{
		HUD::_SET_MP_GAMER_TAG_VISIBILITY(uParam0->f_6, iVar3);
		uParam0->f_7 = iVar3;
	}
}

void func_61(var uParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;

	bVar0 = (((PLAYER::IS_PLAYER_DEAD(uParam0->f_21) || !ENTITY::DOES_ENTITY_EXIST(uParam0->f_20)) || ENTITY::IS_ENTITY_DEAD(uParam0->f_20)) || func_6(uParam0, 29));
	bVar1 = (!bVar0 && BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_20, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_4, true, false)) >= Global_1901671.f_698.f_38);
	bVar2 = (bVar1 || func_135(NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1), 1, 0));
	if (bVar2 || bVar0)
	{
		if (bVar0)
		{
			if (func_6(uParam0, 29))
			{
				func_34(uParam0, 29);
			}
			if (func_6(uParam0, 2))
			{
				if (func_136(uParam0->f_21, 1, 0))
				{
					func_88(0, 1);
				}
				if (func_19(&(Global_1290256.f_11.f_756)))
				{
					func_20(&(Global_1290256.f_11.f_756));
				}
			}
		}
		else
		{
			if (func_6(uParam0, 2))
			{
				if (!func_19(&(Global_1290256.f_11.f_756)))
				{
					func_78(&(Global_1290256.f_11.f_756));
				}
			}
			if (!func_136(uParam0->f_21, 1, 0))
			{
				if (func_6(uParam0, 2))
				{
					if (func_137(uParam0))
					{
						func_88(1, 1);
					}
				}
			}
			else if (func_6(uParam0, 2))
			{
				func_137(uParam0);
			}
		}
	}
	else
	{
		if (func_6(uParam0, 2))
		{
			if (func_19(&(Global_1290256.f_11.f_756)))
			{
				func_20(&(Global_1290256.f_11.f_756));
			}
			if (!func_135(PLAYER::PLAYER_ID(), 1, 0))
			{
				func_88(0, 1);
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		{
			if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
			{
				ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, false);
			}
		}
		if (func_6(uParam0, 30))
		{
			func_138(uParam0);
			func_34(uParam0, 30);
		}
	}
}

void func_62(var uParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	iVar0 = uParam0->f_21;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		return;
	}
	if (func_139(Global_1289628[iVar0 /*19*/].f_12, 4))
	{
		if (!func_6(uParam0, 31))
		{
			POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_19, 1);
			func_7(uParam0, 31);
		}
	}
	else if (func_6(uParam0, 31))
	{
		POPULATION::_SET_PED_SHOULD_IGNORE_AVOIDANCE_VOLUMES(uParam0->f_19, 0);
		func_34(uParam0, 31);
	}
}

void func_63(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	if (func_140(uParam0))
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		{
			return;
		}
		PED::_SET_MOUNT_SECURITY_ENABLED(uParam0->f_19, true);
	}
	else
	{
		if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
		{
			return;
		}
		PED::_SET_MOUNT_SECURITY_ENABLED(uParam0->f_19, false);
	}
}

void func_64(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	iVar1 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(iVar0);
	iVar2 = PED::GET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_19);
	if (iVar2 == iVar1)
	{
		return;
	}
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(uParam0->f_19, iVar1);
}

void func_65(var uParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_4) || !func_6(uParam0, 4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_17));
		}
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_4))
	{
		if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
		{
			MAP::REMOVE_BLIP(&(uParam0->f_17));
		}
		return;
	}
	iVar0 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_4, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
			{
				MAP::REMOVE_BLIP(&(uParam0->f_17));
			}
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_17))
	{
		if (PAD::IS_CONTROL_PRESSED(0, 6.571986E-17f))
		{
			uParam0->f_14 = Global_1295619.f_16 + 15;
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, -1.174981E+29f);
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, -1.174981E+29f);
		}
		if (Global_1295619.f_16 > uParam0->f_14)
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, -1.174981E+29f);
		}
		else
		{
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, -1.174981E+29f);
		}
		bVar1 = TASK::IS_PED_IN_WRITHE(uParam0->f_19);
		bVar2 = PED::IS_PED_INCAPACITATED(uParam0->f_19);
		if (bVar1 || bVar2)
		{
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 1.752676E-23f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 1.752676E-23f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 1.10574E-22f);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 1.10574E-22f);
			return;
		}
		iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 1.10574E-22f);
			return;
		}
		if (func_141(iVar3, 0))
		{
			MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 1.10574E-22f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_17, 1.10574E-22f);
		}
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_4))
	{
		return;
	}
	uParam0->f_17 = MAP::BLIP_ADD_FOR_ENTITY(uParam0->f_18, uParam0->f_4);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1290256.f_11.f_715)))
	{
		MAP::_SET_BLIP_NAME(uParam0->f_17, &(Global_1290256.f_11.f_715));
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_17, func_142(uParam0->f_5));
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_17, 4.185971E-18f);
}

void func_66(var uParam0, int iParam1)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
	{
		return;
	}
	bVar0 = !func_54(8192, iParam1);
	if (bVar0)
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 197, bVar0);
	}
	if (func_54(2048, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 306, true);
	}
	if (func_54(512, iParam1))
	{
		PED::SET_PED_RESET_FLAG(uParam0->f_19, 360, true);
	}
}

void func_67(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	bool bVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		func_34(uParam0, 26);
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
	{
		return;
	}
	if (func_143(255) == 1)
	{
		bVar0 = ENTITY::_GET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19);
		bVar1 = func_6(uParam0, 15);
		if (func_54(8, iParam1))
		{
			if (!bVar1 || bVar0)
			{
				ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, true);
				ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19, false);
				func_7(uParam0, 15);
			}
		}
		else if (bVar1 || !bVar0)
		{
			ENTITY::SET_ENTITY_INVINCIBLE(uParam0->f_19, false);
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(uParam0->f_19, true);
			func_34(uParam0, 15);
		}
	}
	else
	{
		func_34(uParam0, 15);
	}
	if (func_143(255) == 1)
	{
		if (func_54(16384, iParam1))
		{
			if (!func_6(uParam0, 16))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_4), true, 256);
				func_7(uParam0, 16);
			}
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_4));
		}
		else if (func_6(uParam0, 16))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_4), false, 256);
			func_34(uParam0, 16);
		}
	}
	else
	{
		func_34(uParam0, 16);
	}
	if (func_54(16, iParam1))
	{
		if (!func_6(uParam0, 17))
		{
			func_7(uParam0, 17);
		}
	}
	else if (func_6(uParam0, 17))
	{
		func_34(uParam0, 17);
	}
	bVar2 = func_54(262144, iParam1);
	if (!func_6(uParam0, 26) || func_6(uParam0, 27) != bVar2)
	{
		iVar3 = NETWORK::PED_TO_NET(uParam0->f_19);
		iVar4 = 0;
		while (iVar4 <= 31)
		{
			iVar5 = iVar4;
			if (iVar5 == uParam0->f_21)
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar5))
			{
			}
			else
			{
				NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iVar3, iVar5, bVar2);
			}
			iVar4++;
		}
		func_7(uParam0, 26);
		if (bVar2)
		{
			func_7(uParam0, 27);
		}
		else
		{
			func_34(uParam0, 27);
		}
	}
	bVar6 = func_54(64, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 388, true) != bVar6)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 388, bVar6);
	}
	bVar7 = !func_54(32, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 319, true) != bVar7)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 319, bVar7);
	}
	bVar8 = func_54(256, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 312, true) != bVar8)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 312, bVar8);
	}
	bVar9 = !func_54(128, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 211, true) != bVar9)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 211, bVar9);
	}
	bVar10 = func_54(1024, iParam1);
	if (PED::GET_PED_CONFIG_FLAG(uParam0->f_19, 412, true) != bVar10)
	{
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 412, bVar10);
	}
}

void func_68(var uParam0, int iParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
	{
		return;
	}
	iVar0 = PLAYER::INT_TO_PLAYERINDEX(iParam1);
	if (func_53(65))
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 33, 1))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 33, 1, true);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 26, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 33, 1))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 33, 1, false);
		PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 26, false);
	}
	if (func_53(62))
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 45, 1))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 45, 1, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 45, 1))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 45, 1, false);
	}
	if (func_53(63))
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 46, 1))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 46, 1, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 46, 1))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 46, 1, false);
	}
	if (func_53(64))
	{
		if (!PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 28, 1))
		{
			PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 28, 1, true);
		}
	}
	else if (PLAYER::_GET_PLAYER_UI_PROMPT_FOR_PED_IS_ENABLED(iVar0, uParam0->f_19, 28, 1))
	{
		PLAYER::_MODIFY_PLAYER_UI_PROMPT_FOR_PED(iVar0, uParam0->f_19, 28, 1, false);
	}
}

void func_69(var uParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	var uVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(uParam0->f_4);
	if (bVar0)
	{
		if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_22, false, false))
	{
		return;
	}
	iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	bVar2 = false;
	if (func_144(iVar1))
	{
		bVar2 = true;
	}
	AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_4, 0, bVar2);
	iVar4 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(uParam0->f_4, &uVar3);
	if (Global_1289628[iParam2 /*19*/].f_8 & 1 != 0)
	{
		if (!func_145(uVar3, 1))
		{
			iVar4 = 1;
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 32 != 0)
		{
			if (!func_145(uVar3, 32))
			{
				iVar4 |= 32;
			}
		}
	}
	else
	{
		if (Global_1289628[iParam2 /*19*/].f_8 & 2 != 0)
		{
			if (!func_145(uVar3, 2))
			{
				iVar4 |= 2;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 4 != 0)
		{
			if (!func_145(uVar3, 4))
			{
				iVar4 |= 4;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 8 != 0)
		{
			if (!func_145(uVar3, 8))
			{
				iVar4 |= 8;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 64 != 0)
		{
			if (!func_145(uVar3, 64))
			{
				iVar4 |= 64;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 128 != 0)
		{
			if (!func_145(uVar3, 128))
			{
				iVar4 |= 128;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 256 != 0)
		{
			if (!func_145(uVar3, 256))
			{
				iVar4 |= 256;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 16 != 0)
		{
			if (!func_145(uVar3, 16))
			{
				iVar4 = 16;
			}
		}
		if (Global_1289628[iParam2 /*19*/].f_8 & 512 != 0)
		{
			if (!func_145(uVar3, 512))
			{
				iVar4 |= 512;
			}
		}
		if (func_145(uVar3, 1024))
		{
			if (!func_145(uVar3, 1024))
			{
				iVar4 |= 1024;
			}
		}
	}
	if (iVar4 != 0)
	{
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(uParam0->f_4, iVar4);
	}
}

void func_70(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_146(uParam0, bParam1, iParam2))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_A_VEHICLE(uParam0->f_4))
	{
		if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_19, -1) == PLAYER::PLAYER_PED_ID())
		{
			func_147(uParam0->f_19);
		}
		return;
	}
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_4))
	{
		if (uParam0->f_16 >= Global_1295619.f_16)
		{
			return;
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
		{
			return;
		}
		iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			return;
		}
		if (iVar1 != PLAYER::PLAYER_ID())
		{
			return;
		}
		iVar2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
		if (func_144(iVar2))
		{
			func_148(15, 1);
		}
		else if (Global_1289628[iParam2 /*19*/].f_8 & 16 != 0 || Global_1289627 & 32 != 0)
		{
			func_148(16, 1);
		}
		else
		{
			func_148(14, 1);
		}
		TASK::TASK_HORSE_ACTION(uParam0->f_19, 10, 0, 0);
		uParam0->f_16 = Global_1295619.f_16 + 3;
	}
}

void func_71(var uParam0)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	if (PED::IS_PED_DEAD_OR_DYING(uParam0->f_19, true))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
	{
		return;
	}
	iVar0 = uParam0->f_21;
	bVar1 = func_6(uParam0, 2);
	if (bVar1)
	{
		if (!Global_1903834.f_111)
		{
			return;
		}
		iVar2 = 0;
		iVar2 = 0;
		while (iVar2 < 3)
		{
			iVar3 = PED::_GET_PELT_FROM_HORSE(uParam0->f_19, iVar2);
			if (iVar3 != Global_1289628[iVar0 /*19*/].f_15[iVar2])
			{
				Global_1289628[iVar0 /*19*/].f_15[iVar2] = iVar3;
			}
			iVar2++;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		return;
	}
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar4 = PED::_GET_PELT_FROM_HORSE(uParam0->f_19, iVar2);
		if (iVar4 == Global_1289628[iVar0 /*19*/].f_15[iVar2])
		{
		}
		else if (Global_1289628[iVar0 /*19*/].f_15[iVar2] == 0)
		{
			PED::_CLEAR_PELT_FROM_HORSE(uParam0->f_19, iVar4);
		}
		else if (iVar4 == 0)
		{
			PED::_SET_PELT_FOR_HORSE(uParam0->f_19, Global_1289628[iVar0 /*19*/].f_15[iVar2]);
		}
		else
		{
			PED::_SET_PELT_FOR_HORSE(uParam0->f_19, Global_1289628[iVar0 /*19*/].f_15[iVar2]);
		}
		iVar2++;
	}
}

void func_72(var uParam0)
{
	float fVar0;

	if (func_6(uParam0, 11))
	{
		if (func_6(uParam0, 7))
		{
			Global_1903834.f_111 = 0;
			Global_1903834.f_112 = 0;
		}
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 0))
	{
		return;
	}
	if (!func_6(uParam0, 10))
	{
		if (ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
		{
			if (!func_19(&(uParam0->f_8)))
			{
				func_78(&(uParam0->f_8));
			}
			fVar0 = func_79(&(uParam0->f_8));
			if (fVar0 > 4f)
			{
				func_7(uParam0, 12);
				func_20(&(uParam0->f_8));
			}
			return;
		}
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_149())
		{
		}
		else if (!func_6(uParam0, 10))
		{
			if (func_53(46))
			{
				return;
			}
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false)) < 1132068864)
			{
				return;
			}
		}
	}
	else if (!func_6(uParam0, 10))
	{
		return;
	}
	func_150(uParam0);
}

bool func_73(int iParam0, int iParam1)
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

void func_74(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	var uVar5;
	bool bVar6;
	bool bVar7;

	if (!func_6(uParam0, 19))
	{
		return;
	}
	iVar0 = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(uParam0->f_22);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
	{
		func_34(uParam0, 19);
		return;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(iVar0);
	if (PED::IS_PED_ON_VEHICLE(iVar1, false))
	{
		if (PED::GET_VEHICLE_PED_IS_IN(iVar1, true) == uParam0->f_22)
		{
			func_34(uParam0, 19);
			return;
		}
	}
	PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(func_128(iVar0), &vVar2, &uVar5, 1, 3f, 0f);
	bVar6 = NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4);
	bVar7 = ENTITY::IS_ENTITY_DEAD(uParam0->f_22);
	if (func_151(iVar1, uParam0->f_22, 1, 1) < 1094713344)
	{
		func_34(uParam0, 19);
	}
	if (!bVar6)
	{
		return;
	}
	if (bVar7)
	{
		return;
	}
	if (TASK::_0x583AE9AF9CEE0958(uParam0->f_22, vVar2))
	{
		return;
	}
	if (!func_6(uParam0, 19))
	{
		TASK::_0x141BC64C8D7C5529(uParam0->f_22);
		return;
	}
	TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_22, vVar2, 6f, 3.187592f, 2, 8f, 3f);
}

void func_75(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_53(94))
	{
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_22))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_53(92))
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_22, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 1132068864)
		{
			return;
		}
		iVar0 = 0;
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_152(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 1132068864)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

void func_76(var uParam0)
{
	int iVar0;
	int iVar1;
	vector3 vVar2;

	if (func_6(uParam0, 10))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 11))
	{
		func_7(uParam0, 0);
		return;
	}
	if (func_6(uParam0, 8))
	{
		return;
	}
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		return;
	}
	if (ENTITY::_IS_ENTITY_FROZEN(uParam0->f_22))
	{
		return;
	}
	if (func_6(uParam0, 7))
	{
		if (func_53(92))
		{
			return;
		}
		vVar2 = { ENTITY::GET_ENTITY_COORDS(uParam0->f_22, true, false) };
		if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false)) < 1132068864)
		{
			return;
		}
		iVar0 = 0;
		while (iVar0 < 7)
		{
			iVar1 = func_152(iVar0);
			if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
			{
			}
			else if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
			{
			}
			else if (BUILTIN::VDIST(vVar2, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iVar1), true, false)) < 1132068864)
			{
				return;
			}
			iVar0++;
		}
	}
	func_7(uParam0, 0);
}

int func_77(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	if (!func_6(uParam0, 10))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return 2;
	}
	iVar0 = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(uParam0->f_19);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0) || !NETWORK::NETWORK_IS_PLAYER_CONNECTED(iVar0))
	{
		return 2;
	}
	iVar1 = PLAYER::GET_PLAYER_PED(uParam0->f_21);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		iVar1 = PLAYER::PLAYER_PED_ID();
	}
	func_153(uParam0->f_19);
	func_154(uParam0, iVar1);
	return 2;
}

void func_78(var uParam0)
{
	func_155(uParam0, 0f);
}

float func_79(var uParam0)
{
	if (!func_19(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_156(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_157() - uParam0->f_1);
}

void func_80(var uParam0, bool bParam1, int iParam2)
{
	struct<6> Var0;

	Var0.f_4 = -1;
	Var0.f_5 = -1;
	if (!SCRIPTS::GET_EVENT_DATA(1, iParam2, &Var0, 6))
	{
		return;
	}
	if (Var0 != 47)
	{
		return;
	}
	if (!func_158(uParam0, bParam1, Var0.f_4, Var0.f_5))
	{
		return;
	}
	switch (Var0.f_4)
	{
		case 3:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_21 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_21 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(bParam1, uParam0->f_4, uParam0->f_5, 1, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
			func_7(uParam0, 10);
			break;
		case 0:
			if (func_6(uParam0, 11))
			{
				return;
			}
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(bParam1, uParam0->f_4, uParam0->f_5, 1, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
			func_7(uParam0, 10);
			break;
		case 2:
			if (func_6(uParam0, 5))
			{
				if (uParam0->f_21 != Var0.f_1)
				{
					return;
				}
			}
			else if (func_6(uParam0, 6))
			{
				if (uParam0->f_21 != Var0.f_1)
				{
					return;
				}
			}
			else
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(bParam1, uParam0->f_4, uParam0->f_5, 0, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
			func_34(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 1:
			if (func_6(uParam0, 8))
			{
				return;
			}
			if (func_6(uParam0, 2))
			{
				func_159(131072);
			}
			else if (!uParam0->f_3)
			{
				if (!func_18(bParam1, uParam0->f_4, uParam0->f_5, 0, func_6(uParam0, 2)))
				{
				}
				else
				{
					uParam0->f_3 = 1;
				}
			}
			func_34(uParam0, 10);
			func_7(uParam0, 11);
			break;
		case 4:
			func_7(uParam0, 8);
			break;
		case 5:
			func_34(uParam0, 8);
			break;
		case 6:
			func_7(uParam0, 19);
			break;
		case 9:
			func_160(uParam0, &Var0, 0);
			break;
		case 10:
			func_160(uParam0, &Var0, 1);
			break;
		case 11:
			func_161(uParam0, &Var0);
			break;
		case 7:
			func_162(uParam0, &Var0);
			break;
		case 8:
			func_163(uParam0, &Var0);
			break;
	}
}

bool func_81(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	if (PED::_IS_THIS_MODEL_A_HORSE(iVar0))
	{
		return true;
	}
	return false;
}

int func_82(int iParam0, var uParam1, int iParam2)
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
			(*uParam1)[iVar4] = iVar1;
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

bool func_83(int iParam0, int iParam1, bool bParam2)
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

void func_84()
{
	if (Global_1290256.f_1608.f_5 == 1)
	{
		return;
	}
	Global_1290256.f_1608.f_5 = 1;
}

void func_85(int iParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;

	if (func_165(func_164(), 0, 0))
	{
		return;
	}
	if (!func_166(iParam0))
	{
		return;
	}
	bVar0 = TASK::IS_PED_IN_WRITHE(iParam0);
	bVar1 = PED::IS_PED_INCAPACITATED(iParam0);
	if (!bVar0 && !bVar1)
	{
		return;
	}
	iVar2 = PLAYER::_GET_PLAYER_OWNER_OF_MOUNT(iParam0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	if (iVar2 != PLAYER::PLAYER_ID())
	{
		return;
	}
	if (func_53(8))
	{
		return;
	}
	func_167(iParam0, 0, 0);
	if (!func_32(iParam1, 0, 0))
	{
		return;
	}
	func_168(&Global_1903834, 0, 1);
	func_169();
	iVar3 = func_170(iParam1, -8.989852E-19f, 0);
	bVar4 = iVar3 > 0;
	if (bVar4)
	{
		func_148(18, 0);
		func_171(*iParam1, 0, 0);
	}
	else
	{
		func_148(17, 0);
	}
}

void func_86()
{
	int iVar0;

	iVar0 = PLAYER::PLAYER_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iVar0)))
	{
		return;
	}
	PLAYER::_SET_PLAYER_OWNS_MOUNT(iVar0, 0);
}

void func_87(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (func_139(Global_1289628[iVar1 /*19*/].f_12, 1) != bParam0)
	{
		if (bParam0)
		{
			func_172(&(Global_1289628[iVar1 /*19*/].f_12), 1);
		}
		else
		{
			func_173(&(Global_1289628[iVar1 /*19*/].f_12), 1);
		}
		func_173(&(Global_1289628[iVar1 /*19*/].f_12), 2);
		if (bParam0)
		{
			func_78(&(Global_1290256.f_11.f_756));
		}
		else
		{
			func_20(&(Global_1290256.f_11.f_756));
		}
	}
}

void func_88(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::PLAYER_ID();
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar0))
		{
			return;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
		{
			return;
		}
	}
	iVar1 = iVar0;
	if (!func_139(Global_1289628[iVar1 /*19*/].f_12, 1))
	{
		return;
	}
	if (func_139(Global_1289628[iVar1 /*19*/].f_12, 2) != bParam0)
	{
		if (bParam0)
		{
			func_172(&(Global_1289628[iVar1 /*19*/].f_12), 2);
		}
		else
		{
			func_173(&(Global_1289628[iVar1 /*19*/].f_12), 2);
		}
	}
}

bool func_89(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_90()
{
	Global_1903834.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903834.f_106.f_1 = 0;
	Global_1903834.f_106.f_2 = 0;
	Global_1903834.f_106.f_3 = 0;
	Global_1903834.f_106.f_4 = 0;
}

int func_91(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -4.487921E-28f;
		case 0:
			return 1.260562E+21f;
		case 1:
			return -2.497197E+23f;
		case 2:
			return 4.457017E+15f;
		case 3:
			return -0.006582747f;
		case 4:
			return -2.747455E-14f;
		case 5:
			return 0.006205302f;
		default:
			break;
	}
	return 0;
}

struct<4> func_92()
{
	struct<4> Var0;

	return Var0;
}

void func_93(var uParam0)
{
	int iVar0;

	*uParam0 = { func_92() };
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

bool func_94(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_174(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

void func_95()
{
	Global_1953279.f_1046 = 0;
}

void func_96(int iParam0)
{
	Global_1953279 = (Global_1953279 || iParam0);
}

void func_97(var uParam0)
{
	func_175(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_92() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_98(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_176(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_177(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_99(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (!func_178(iParam0, iParam2, bParam3))
	{
		return false;
	}
	if (!func_179(uParam1, iParam2))
	{
		return false;
	}
	return true;
}

bool func_100(int iParam0, var uParam1)
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

var func_101(int iParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, func_180(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_181(&cVar0);
}

bool func_102(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_103(int iParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_104(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_102(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_182(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

struct<8> func_105(char* sParam0)
{
	char cVar0[64];

	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_106(int iParam0, bool bParam1)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (iVar0 == func_183())
	{
		return;
	}
	PED::SET_LOOTING_FLAG(iVar0, 0, bParam1);
	PED::SET_LOOTING_FLAG(iVar0, 1, bParam1);
}

bool func_107(int iParam0, float fParam1)
{
	return func_184(&(iParam0->f_20), fParam1);
}

void func_108()
{
	if (func_54(2, 255))
	{
		return;
	}
	func_185(2);
}

float func_109(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_110(int iParam0)
{
	int iVar0;
	int iVar1;

	func_186(iParam0, &iVar0, &iVar1);
	return MISC::IS_BIT_SET(Global_17418.f_3116[iVar0], iVar1);
}

void func_111()
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	char* sVar5;
	int iVar6;
	int iVar7;

	sVar0 = "WEB_INBOX_OFFER";
	sVar1 = "WEB_INBOX_OFFER_DESC";
	iVar2 = MISC::GET_HASH_KEY("toasts_mp_generic");
	iVar3 = MISC::GET_HASH_KEY("TOAST_MP_BENEFITS");
	fVar4 = 4.255667E+29f;
	sVar5 = "HB_TOAST_BENEFITS_HOLD";
	iVar6 = MISC::GET_HASH_KEY("default");
	iVar7 = func_187(sVar0, sVar1, iVar2, iVar3, fVar4, sVar5, iVar6, 8000, 0, 0, 0, 0, 1, 1);
	if (iVar7 == 0)
	{
	}
}

void func_112(int iParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;

	func_186(iParam0, &iVar0, &iVar1);
	uVar2 = Global_17418.f_3116[iVar0];
	MISC::SET_BIT(&uVar2, iVar1);
	Global_17418.f_3116[iVar0] = uVar2;
}

void func_113(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_114(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_188(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_189(iParam0))
	{
		return false;
	}
	if (func_190(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_45(iParam0, 1)) || func_191(32768))
	{
		if (!func_45(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_192())
	{
		return false;
	}
	return true;
}

void func_115(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

void func_116(int iParam0, var uParam1, int iParam2)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	bool bVar22;
	int iVar23;

	Global_1290256.f_1139.f_241[iParam2] = 0;
	if (!STREAMING::IS_MODEL_VALID(*uParam1))
	{
		return;
	}
	switch (iParam2)
	{
		case 0:
			vVar0 = { 0f, -1f, 0f };
			break;
		case 1:
			vVar0 = { -1f, 0f, 0f };
			break;
		case 2:
			vVar0 = { 1f, 0f, 0f };
			break;
	}
	vVar3 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, vVar0) };
	if (STREAMING::_IS_MODEL_AN_OBJECT(*uParam1))
	{
		iVar6 = OBJECT::CREATE_OBJECT(*uParam1, vVar3, true, false, false, false, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
		{
			return;
		}
		iVar7 = func_193(iParam2);
		TASK::TASK_CARRIABLE(iVar6, uParam1->f_3, iParam0, iVar7, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar6, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar6, uParam1->f_93);
		iVar8 = func_194(iParam0, iVar6);
	}
	else if (STREAMING::IS_MODEL_A_PED(*uParam1))
	{
		iVar9 = func_195(*uParam1, vVar3, 0, 1, 0, 0, 1, 1, 0, 0, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(*uParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar9))
		{
			return;
		}
		if (uParam1->f_8 != 0)
		{
			PED::_EQUIP_META_PED_OUTFIT(iVar9, uParam1->f_8);
			if (uParam1->f_92)
			{
				fVar10 = 1.108907E-10f;
				if (PED::_DOES_META_PED_SUBOUTFIT_EXIST_FOR_PED_MODEL(uParam1->f_8, fVar10, *uParam1))
				{
					PED::_EQUIP_META_PED_SUBOUTFIT(iVar9, fVar10, 0);
				}
			}
		}
		iVar19 = 0;
		while (iVar19 < uParam1->f_9)
		{
			iVar11 = uParam1->f_10[iVar19 /*8*/];
			iVar12 = uParam1->f_10[iVar19 /*8*/].f_1;
			iVar13 = uParam1->f_10[iVar19 /*8*/].f_2;
			iVar14 = uParam1->f_10[iVar19 /*8*/].f_3;
			iVar15 = uParam1->f_10[iVar19 /*8*/].f_4;
			iVar16 = uParam1->f_10[iVar19 /*8*/].f_5;
			iVar17 = uParam1->f_10[iVar19 /*8*/].f_6;
			iVar18 = uParam1->f_10[iVar19 /*8*/].f_7;
			PED::_SET_META_PED_TAG(iVar9, iVar11, iVar12, iVar13, iVar14, iVar15, iVar16, iVar17, iVar18);
			iVar19++;
		}
		PED::_UPDATE_PED_VARIATION(iVar9, false, true, true, true, false);
		if (uParam1->f_2 == 2)
		{
			ENTITY::SET_ENTITY_HEALTH(iVar9, 0, 0);
			PED::SET_PED_CONFIG_FLAG(iVar9, 517, true);
			PERSISTENCE::_0xF5622FA6ACFCA7DB(iVar9, uParam1->f_91);
		}
		if (ENTITY::GET_IS_ANIMAL(iVar9))
		{
			PED::_SET_PED_QUALITY(iVar9, uParam1->f_4);
			FLOCK::_SET_ANIMAL_RARITY(iVar9, uParam1->f_5);
			PED::_SET_PED_DAMAGE_CLEANLINESS(iVar9, uParam1->f_6);
			PED::_SET_PED_DAMAGED(iVar9, uParam1->f_7);
		}
		if (uParam1->f_92 || uParam1->f_95)
		{
			ENTITY::_SET_ENTITY_FULLY_LOOTED(iVar9, true);
			PED::SET_LOOTING_FLAG(iVar9, 0, false);
		}
		if (uParam1->f_95)
		{
			TASK::_0xF3C3503276F4A034(iVar9, 1);
		}
		iVar20 = func_193(iParam2);
		TASK::TASK_CARRIABLE(iVar9, uParam1->f_3, iParam0, iVar20, 256);
		ENTITY::_SET_ENTITY_CARCASS_TYPE(iVar9, uParam1->f_1);
		ENTITY::_0xEF259AA1E097E0AD(iVar9, uParam1->f_93);
		if (uParam1->f_94)
		{
			ENTITY::SET_ENTITY_RENDER_SCORCHED(iVar9, true);
			FIRE::START_ENTITY_FIRE(iVar9, 0f, -1, 8);
		}
		iVar21 = func_196(iVar9);
		bVar22 = func_197(iVar21);
		if (func_102(bVar22, 0))
		{
			if (bVar22 != uParam1->f_1)
			{
				uParam1->f_1 = bVar22;
			}
		}
		iVar23 = func_194(iParam0, iVar9);
	}
}

bool func_117(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_198(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_199(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_200(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_176(&Var49, &Var0, 0))
				{
					if (func_184(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_201(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_201(iVar47);
	}
	return false;
}

struct<4> func_118()
{
	return Global_1290256.f_11.f_310;
}

bool func_119()
{
	return Global_1290256.f_11.f_318 > Global_1295619.f_16;
}

void func_120(var uParam0, bool bParam1)
{
	Global_1290256.f_11.f_310 = { *uParam0 };
	if (bParam1)
	{
		Global_1290256.f_11.f_318 = Global_1295619.f_16 + 10;
	}
}

int func_121(int iParam0)
{
	int iVar0;
	bool bVar1;

	iVar0 = func_202(iParam0);
	bVar1 = func_165(func_164(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

int func_122()
{
	int iVar0;
	struct<2> Var1;

	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_203(iVar0) };
		if (func_204(Var1) == 7)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_123(int iParam0)
{
	return func_205(&(Global_3145858.f_6), iParam0);
}

int func_124(int iParam0, int iParam1)
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

bool func_125(var uParam0, bool bParam1)
{
	struct<29> Var0;
	struct<18> Var29;
	int iVar47;
	int iVar48;
	struct<10> Var49;
	int iVar63;

	Var0.f_9 = -5.45926E-19f;
	Var29 = { func_198(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, -5.356537E-22f, 0, 0) };
	if (func_199(&Var29, &iVar47, &iVar48, bParam1))
	{
		Var49.f_9 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar48)
		{
			if (func_200(&Var49, iVar63, iVar47, iVar48))
			{
				if (func_176(&Var49, &Var0, 0))
				{
					if (func_184(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_201(iVar47);
						return true;
					}
				}
			}
			iVar63++;
		}
		func_201(iVar47);
	}
	return false;
}

struct<4> func_126(bool bParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar16;

	Var2.f_9 = -5.45926E-19f;
	if (!func_206("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_200(&Var2, iVar16, iVar0, iVar1))
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
	func_201(iVar0);
	return Var2;
}

bool func_127(bool bParam0)
{
	if (func_207() && (bParam0 || !func_208(0)))
	{
		if (func_209(-5.004954E+28f))
		{
			if (func_210(-5.004954E+28f))
			{
				return true;
			}
		}
	}
	return false;
}

Vector3 func_128(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

void func_129(int iParam0)
{
	Global_1940239.f_11561 = (Global_1940239.f_11561 || iParam0);
}

bool func_130(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_32(iParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_211(&Global_1903834))
	{
		return false;
	}
	func_212(&Global_1903834, 1.084202E-19f);
	func_212(&Global_1903834, 2.524355E-29f);
	func_212(&Global_1903834, 0f);
	func_212(&Global_1903834, 2f);
	func_212(&Global_1903834, 3.85186E-34f);
	switch (iParam2)
	{
		case 0:
			func_213(&Global_1903834, 3.85186E-34f);
			break;
		case 1:
			func_213(&Global_1903834, 2.524355E-29f);
			break;
		case 2:
			func_213(&Global_1903834, 1.084202E-19f);
			break;
		case 3:
			func_213(&Global_1903834, 2f);
			break;
		case 4:
			func_213(&Global_1903834, 0f);
			break;
	}
	if (!func_214(&Global_1903834))
	{
		return false;
	}
	if (bParam3)
	{
		func_215();
	}
	return true;
}

int func_131(var uParam0, int iParam1)
{
	var uVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (!HUD::IS_MP_GAMER_TAG_ACTIVE(*uParam0))
	{
		return 0;
	}
	if (HUD::_IS_MP_GAMER_TAG_ACTIVE_ON_ENTITY(*uParam0, iParam1))
	{
		return 0;
	}
	*uParam0 = uVar0;
	return 1;
}

bool func_132(int iParam0)
{
	return (Global_17418.f_55.f_61.f_602 && iParam0) != 0;
}

int func_133(var uParam0)
{
	int iVar0;

	iVar0 = uParam0->f_21;
	if (iVar0 == 255)
	{
		return 0;
	}
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	if (!Global_1290256.f_1634.f_1)
	{
		return 0;
	}
	return 1;
}

int func_134(int iParam0, bool bParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	bool bVar11;

	bVar0 = iParam4 != -1;
	if (HUD::_0x7EC0D68233E391AC(21) == 2)
	{
		func_216(uParam2);
		return 0;
	}
	if (func_217(Global_1295619, 65536))
	{
		return 0;
	}
	fVar6 = BUILTIN::VDIST(Global_34, ENTITY::GET_ENTITY_COORDS(iParam0, false, false));
	if (!PLAYER::IS_PLAYER_DEAD(Global_1295619.f_5) && ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		if (Global_1072759.f_21889.f_580 <= 0f || fVar6 <= Global_1072759.f_21889.f_580)
		{
			PLAYER::GET_PLAYER_TARGET_ENTITY(Global_1295619.f_5, &iVar8);
			iVar9 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
			if (((iVar8 == iParam0 || PED::_GET_LASSOED_LASSOER(Global_1295619.f_3) == iVar9) || PED::GET_MELEE_TARGET_FOR_PED(Global_1295619.f_3) == iVar9) || PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(Global_1295619.f_5, iVar9))
			{
				bVar3 = true;
			}
		}
	}
	if (bVar0)
	{
		iVar10 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
		if (PED::IS_PED_IN_ANY_VEHICLE(iVar10, false) || PED::IS_PED_ON_MOUNT(iVar10))
		{
			bVar1 = true;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_258), iParam4) || SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21353.f_259), iParam4))
		{
			bVar2 = true;
		}
		if (HUD::_0x7EC0D68233E391AC(54) == 2)
		{
			func_216(uParam2);
			return 0;
		}
		if (!NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Global_1295619.f_149[Global_1295619], Global_1295619.f_149[iParam4]))
		{
			return 0;
		}
		if (func_218(iParam4))
		{
			return 0;
		}
		if (func_218(PLAYER::NETWORK_PLAYER_ID_TO_INT()))
		{
			if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1958626.f_2), iParam4))
			{
				return 3;
			}
		}
		if (Global_1072759.f_21889[iParam4 /*18*/].f_3 != 0)
		{
			func_216(uParam2);
			return Global_1072759.f_21889[iParam4 /*18*/].f_3;
		}
		if (func_219(iParam4))
		{
			func_216(uParam2);
			return 0;
		}
		if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_21889.f_583), iParam4) && !bVar2)
		{
			if (!bVar3 || !func_217(Global_1295619, 262144))
			{
				return 0;
			}
		}
		if (func_220(iParam4))
		{
			return 0;
		}
		if (iParam3 != 255 && iParam3 == iParam4)
		{
			return 3;
		}
		if (func_217(iParam4, 32768))
		{
			return 0;
		}
	}
	else if (bParam7)
	{
		if (HUD::_0x7EC0D68233E391AC(55) == 2)
		{
			func_216(uParam2);
			return 0;
		}
	}
	if (bParam6 || (Global_263042[Global_1295619 /*65*/].f_1.f_16.f_2 == -5.544348E+20f && func_221(Global_524288.f_39632)))
	{
		bVar7 = true;
	}
	if (CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		fVar5 = Global_1901671.f_100.f_11;
	}
	else if (bVar7)
	{
		if (bVar1)
		{
			fVar5 = Global_1901671.f_100.f_10;
		}
		else
		{
			fVar5 = Global_1901671.f_100.f_9;
		}
	}
	else
	{
		if (Global_1072759.f_21889.f_578 > 0f)
		{
			fVar4 = Global_1072759.f_21889.f_578;
		}
		else
		{
			fVar4 = func_222(bParam1, Global_1901671.f_100.f_7, Global_1901671.f_100.f_6);
		}
		if (Global_1072759.f_21889.f_579 > 0f)
		{
			fVar5 = Global_1072759.f_21889.f_579;
		}
		else
		{
			fVar5 = func_222(bParam1, Global_1901671.f_100.f_8, Global_1901671.f_100.f_5);
		}
	}
	if (!func_223(iParam4, iParam0, fVar6, fVar5, bVar0))
	{
		func_216(uParam2);
		return 0;
	}
	bVar11 = HUD::_0x7EC0D68233E391AC(21) == true;
	if (bVar7)
	{
		if (bVar3)
		{
			if (bVar0)
			{
				return 3;
			}
			else
			{
				return 2;
			}
		}
		else if (fVar6 <= fVar5)
		{
			if (bVar11)
			{
				if (bVar0)
				{
					return 3;
				}
				else
				{
					return 2;
				}
			}
			else if (func_217(Global_1295619, 131072))
			{
				if (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))
				{
					return 2;
				}
			}
			else if (((func_224(uParam2) || func_225(iParam5)) || (bVar0 && VOICE::_0xEF6F2A35FAAF2ED7(PLAYER::INT_TO_PLAYERINDEX(iParam4)))) || bVar2)
			{
				return 2;
			}
		}
		else
		{
			func_216(uParam2);
			return 0;
		}
	}
	else if (bVar3)
	{
		if (bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar4)
	{
		if (bVar11 && bVar0)
		{
			return 3;
		}
		else
		{
			return 2;
		}
	}
	else if (fVar6 <= fVar5)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

bool func_135(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_139(Global_1289628[iParam0 /*19*/].f_12, 1);
}

bool func_136(int iParam0, bool bParam1, int iParam2)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return iParam2;
		}
		if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return iParam2;
		}
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_MOUNT_OWNED_BY_PLAYER(iParam0)))
	{
		return iParam2;
	}
	return func_139(Global_1289628[iParam0 /*19*/].f_12, 2);
}

bool func_137(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	bool bVar6;
	bool bVar7;
	int iVar8;

	bVar6 = false;
	bVar7 = true;
	if (func_6(uParam0, 2))
	{
		bVar6 = true;
	}
	iVar8 = uParam0->f_20;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar8))
	{
		return false;
	}
	func_7(uParam0, 30);
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		if (!ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, true);
		}
	}
	else if (bVar6)
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_19);
	}
	if (!ENTITY::_0x188736456D1DEDE6(uParam0->f_19, iVar8))
	{
		bVar7 = false;
	}
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_226(iVar0);
		if (PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, uParam0->f_19, iVar1, 0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Var2.f_3))
			{
				if (bVar6)
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(Var2.f_3);
				}
			}
			if (!ENTITY::_0x188736456D1DEDE6(Var2.f_3, iVar8))
			{
				bVar7 = false;
			}
		}
		iVar0++;
	}
	if (func_227())
	{
		bVar7 = false;
	}
	if (!bVar7)
	{
		if (func_228(&(Global_1290256.f_11.f_756), 5f))
		{
			return true;
		}
	}
	return bVar7;
}

void func_138(var uParam0)
{
	int iVar0;
	int iVar1;
	struct<4> Var2;
	int iVar6;

	iVar6 = uParam0->f_20;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar6))
	{
		return;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		if (ENTITY::_GET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34))
		{
			ENTITY::_SET_ENTITY_CARRYING_FLAG(uParam0->f_19, 34, false);
		}
	}
	ENTITY::_0xC6A1A3D63F122DE7(uParam0->f_19, iVar6);
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar1 = func_226(iVar0);
		if (PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var2, uParam0->f_19, iVar1, 0))
		{
			ENTITY::_0xC6A1A3D63F122DE7(Var2.f_3, iVar6);
		}
		iVar0++;
	}
}

bool func_139(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_140(var uParam0)
{
	float fVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_21))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_21)))
	{
		return false;
	}
	fVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam0->f_21), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false));
	if (fVar0 < 1131937792)
	{
		return false;
	}
	return true;
}

bool func_141(int iParam0, bool bParam1)
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

char* func_142(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_90();
	Global_1903834.f_106.f_2 = 1.432965E+08f;
	Global_1903834.f_106.f_3 = func_91(iParam0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, &(Global_1903834.f_106)))
	{
		return "";
	}
	return func_229(Var0);
}

int func_143(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (Global_1295619.f_17[iParam0])
	{
		return Global_1101558[iParam0 /*38*/];
	}
	return 26;
}

bool func_144(int iParam0)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return Global_1108965.f_34[iVar0 /*11*/].f_6;
}

bool func_145(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_146(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;

	iVar0 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	if (ENTITY::IS_ENTITY_A_PED(uParam0->f_19))
	{
		iVar1 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, false);
	}
	else
	{
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(uParam0->f_22, -1);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar1);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return true;
	}
	if (iVar2 == iVar0)
	{
		return false;
	}
	if (func_144(iVar0))
	{
		return true;
	}
	iVar3 = func_230(iParam2);
	if (func_231(iParam2))
	{
		iVar4 = func_232(iVar3);
		if (iVar4 == 15 || iVar4 == 10)
		{
			if (func_233(iVar3, uParam0->f_19))
			{
				return true;
			}
		}
	}
	if (Global_1289628[iParam2 /*19*/].f_8 & 16 != 0 || Global_1289627 & 32 != 0)
	{
		return false;
	}
	if (Global_1289628[iParam2 /*19*/].f_8 & 2 != 0 || Global_1289627 & 4 != 0)
	{
		if (GANG::NETWORK_GET_GANG_ID(iVar2) == GANG::NETWORK_GET_GANG_ID(iVar0))
		{
			return false;
		}
	}
	Var5 = { func_234(iVar2) };
	if (Global_1289628[iParam2 /*19*/].f_8 & 4 != 0 || Global_1289627 & 8 != 0)
	{
		if (func_235(Var5, *bParam1))
		{
			return false;
		}
	}
	if (Global_1289628[iParam2 /*19*/].f_8 & 8 != 0 || Global_1289627 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(bParam1))
		{
			return false;
		}
	}
	return true;
}

void func_147(int iParam0)
{
	bool bVar0;
	int iVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam0);
	if (bVar0)
	{
		if (ENTITY::IS_ENTITY_DEAD(iParam0))
		{
			return;
		}
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iParam0), false, false))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return;
	}
	if (!PED::IS_PED_ON_MOUNT(iVar1))
	{
		return;
	}
	if (bVar0)
	{
		if (PED::GET_MOUNT(iVar1) != ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0))
		{
			return;
		}
	}
	else if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iParam0, -1) == iVar1)
	{
		return;
	}
	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(iVar1, iParam0))
	{
		return;
	}
	Var2.f_5 = 2f;
	Var2.f_6 = 1;
	Var2.f_3 = iVar1;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_148(int iParam0, bool bParam1)
{
	func_236(iParam0, bParam1);
}

bool func_149()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_150(var uParam0)
{
	if (!func_6(uParam0, 25) && !func_6(uParam0, 24))
	{
		func_7(uParam0, 0);
		func_7(uParam0, 25);
		func_237();
	}
}

float func_151(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

int func_152(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 255;
	}
	return Global_1102813.f_3675[iParam0];
}

void func_153(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
	}
	PED::SET_PED_CONFIG_FLAG(iParam0, 136, true);
	PED::SET_PED_CAN_BE_TARGETTED(iParam0, false);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iParam0, 34, true);
	PED::SET_LOOTING_FLAG(iParam0, 4, false);
	PED::SET_LOOTING_FLAG(iParam0, 0, false);
	PED::SET_LOOTING_FLAG(iParam0, 1, false);
}

void func_154(var uParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_19))
	{
		return;
	}
	PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_19, true);
	PED::SET_PED_CONFIG_FLAG(uParam0->f_19, 288, true);
	TASK::OPEN_SEQUENCE_TASK(&iVar0);
	if (func_238(uParam0))
	{
		TASK::TASK_HORSE_ACTION(0, 2, 0, 0);
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		TASK::TASK_SMART_FLEE_PED(0, iParam1, 1000f, -1, 540928, 3f, 0);
	}
	else
	{
		TASK::TASK_SMART_FLEE_COORD(0, ENTITY::GET_ENTITY_COORDS(uParam0->f_19, true, false), 1000f, -1, 540928, 3f);
	}
	TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
	func_239(uParam0->f_19, &iVar0, 0, 0, 1, 1);
	PED::SET_PED_KEEP_TASK(uParam0->f_19, true);
}

void func_155(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_157() - fParam1);
	func_240(uParam0, 1);
	func_241(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_156(var uParam0)
{
	return func_89(*uParam0, 2);
}

float func_157()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

bool func_158(var uParam0, bool bParam1, int iParam2, int iParam3)
{
	switch (iParam3)
	{
		case 0:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && !func_6(uParam0, 7));
		case 1:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && !func_6(uParam0, 7));
		case 2:
			if ((iParam2 == 1 || iParam2 == 2) || iParam2 == 3)
			{
				return func_6(uParam0, 5);
			}
			return (func_6(uParam0, 5) && func_6(uParam0, 7));
		case 3:
			if (((iParam2 == 1 || iParam2 == 2) || iParam2 == 3) || iParam2 == 6)
			{
				return func_6(uParam0, 6);
			}
			return (func_6(uParam0, 6) && func_6(uParam0, 7));
		case 4:
			return func_6(uParam0, 5);
		case 5:
			return func_6(uParam0, 6);
		case 6:
			return true;
		default:
			break;
	}
	return bParam1->f_6 == iParam3;
}

void func_159(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_9 = (Global_1289628[iVar0 /*19*/].f_9 || iParam0);
}

void func_160(var uParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_19))
	{
		return;
	}
	iVar0 = PED::_GET_RIDER_OF_MOUNT(uParam0->f_19, true);
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = PLAYER::GET_PLAYER_PED(uParam1->f_1);
	if (PED::GET_MOUNT(iVar2) == uParam0->f_19)
	{
		if (iVar1 != iVar2 && PED::GET_MOUNT(iVar1) == uParam0->f_19)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
			func_148(16, 1);
		}
		if (bParam2 && iVar1 == iVar2)
		{
			TASK::TASK_DISMOUNT_ANIMAL(iVar1, 0, 0, 0, 0, 0);
		}
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	TASK::TASK_HORSE_ACTION(uParam0->f_19, 10, 0, 0);
	if (iVar0 == iVar1)
	{
		func_148(16, 1);
	}
}

void func_161(var uParam0, var uParam1)
{
	if (PLAYER::GET_PLAYER_PED(uParam1->f_1) == PLAYER::PLAYER_PED_ID())
	{
		return;
	}
	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_19, -2) == func_183())
	{
		return;
	}
	func_147(uParam0->f_19);
}

void func_162(var uParam0, var uParam1)
{
	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_242(uParam1, uParam0->f_19))
	{
		return;
	}
	TASK::CLEAR_PED_TASKS(uParam0->f_19, true, false);
	FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_19, 0);
	TASK::TASK_FLEE_COORD(uParam0->f_19, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(uParam1->f_1), true, false), 6, 4718592, -1f, -1, 0);
}

void func_163(var uParam0, var uParam1)
{
	if (uParam0->f_19 != PLAYER::GET_MOUNT_OWNED_BY_PLAYER(uParam1->f_1))
	{
		return;
	}
	if (!func_242(uParam1, uParam0->f_19))
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_19))
	{
		TASK::CLEAR_PED_TASKS(uParam0->f_19, true, false);
		if (ENTITY::DOES_ENTITY_EXIST(PED::_GET_ACTIVE_ANIMAL_OWNER(uParam0->f_19)))
		{
			FLOCK::_0xFF1E339CE40EAAAF(uParam0->f_19, 0);
		}
		TASK::TASK_STAND_STILL(uParam0->f_19, -1);
	}
}

struct<2> func_164()
{
	struct<2> Var0;

	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_165(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265213.f_122484.f_139 & 8 != 0)
	{
		Global_1072759.f_28307 = 1;
		return true;
	}
	if (func_243(Global_1051268) && !func_244(Global_1051268, Param0))
	{
		Global_1072759.f_28307 = 2;
		return true;
	}
	if (iParam2 != 0 && func_245(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_246(iParam3, 255))
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
	if (func_247())
	{
		Global_1072759.f_28307 = 7;
		return true;
	}
	if (Global_1572887.f_8 & 1 != 0)
	{
		if (!func_243(Global_1051268))
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

bool func_166(int iParam0)
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

void func_167(int iParam0, bool bParam1, bool bParam2)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (bParam1)
		{
			AUDIO::DISABLE_PED_PAIN_AUDIO(iParam0, true);
		}
		if (bParam2)
		{
			PED::SET_PED_CONFIG_FLAG(iParam0, 243, true);
		}
		if (Global_33 == iParam0)
		{
		}
		ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
	}
}

int func_168(int iParam0, int iParam1, bool bParam2)
{
	func_248(iParam0, 2, bParam2);
	if (!func_214(iParam0))
	{
		return 0;
	}
	func_249(iParam0, iParam1, bParam2);
	return 1;
}

void func_169()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 == 2)
		{
			Global_1290256.f_11.f_162[iVar0 /*7*/] = { func_92() };
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_5 = 0;
			Global_1290256.f_11.f_162[iVar0 /*7*/].f_6 = -1;
		}
		iVar0++;
	}
}

int func_170(int iParam0, int iParam1, bool bParam2)
{
	return INVENTORY::INVENTORY_GET_CHILDREN_IN_SLOT_COUNT(func_250(bParam2), iParam0, iParam1);
}

int func_171(struct<4> Param0, int iParam4, int iParam5)
{
	struct<4> Var0;
	int iVar4;

	if (func_251(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var0 = { func_92() };
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
			return 1;
		}
		iVar4++;
	}
	return 0;
}

void func_172(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_173(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_174(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_250(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_175(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

bool func_176(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_250(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

bool func_177(var uParam0, int iParam1)
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
	uParam0->f_22 = func_23(uParam0->f_11);
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

bool func_178(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	iVar0 = func_250(bParam2);
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_179(var uParam0, int iParam1)
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

char* func_180(int iParam0)
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

char[] func_181(char[4] cParam0)
{
	return cParam0;
}

int func_182(bool bParam0, bool bParam1)
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

int func_183()
{
	return -1;
}

bool func_184(var uParam0, int iParam1)
{
	return func_145(*uParam0, iParam1);
}

void func_185(int iParam0)
{
	func_252(2, iParam0);
}

void func_186(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

int func_187(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, char* sParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, bool bParam12, bool bParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	int iVar21;

	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = iParam8;
	Var0.f_2 = iParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = fParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	Var13.f_7 = 1;
	iVar21 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST(&Var0, &Var13, bParam12, bParam13);
	return iVar21;
}

bool func_188(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_189(int iParam0)
{
	if (func_45(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_190(int iParam0)
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

bool func_191(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_192()
{
	if (!func_253())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

int func_193(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		case 1:
			return 6;
		case 2:
			return 7;
	}
	return 0;
}

int func_194(int iParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0);
	bVar1 = func_197(iParam1);
	iVar2 = func_254(iVar0, bVar1, 1);
	return iVar2;
}

int func_195(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, bool bParam12)
{
	int iVar0;

	iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam5, bParam6, false, false);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	func_255(iVar0, iParam0, iParam7, bParam8, bParam9, bParam10, bParam11, bParam12);
	return iVar0;
}

int func_196(int iParam0)
{
	return iParam0;
}

bool func_197(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_256(&iParam0);
		if (!func_102(bVar0, 0))
		{
			bVar0 = func_257(iParam0);
		}
	}
	else
	{
		bVar0 = func_257(iParam0);
	}
	return bVar0;
}

struct<18> func_198(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

bool func_199(var uParam0, var uParam1, int* iParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_250(bParam3), uParam0, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_200(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_201(int iParam0)
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

int func_202(int iParam0)
{
	int iVar0;
	float fVar1;
	int iVar2;

	if (!Global_1048577)
	{
		return 3;
	}
	iVar0 = Global_263042[iParam0 /*65*/].f_1.f_16.f_2;
	fVar1 = func_258(iVar0);
	iVar2 = func_259(iVar0, fVar1);
	return iVar2;
}

struct<2> func_203(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_204(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_205(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_206(char* sParam0, var uParam1, int* iParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_250(bParam4), sParam0, iParam3, iParam2);
	if (*uParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_207()
{
	return (Global_1940239.f_2 || Global_1940239 == 1);
}

bool func_208(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_209(int iParam0)
{
	if (iParam0 == Global_1940239.f_40)
	{
		return true;
	}
	return false;
}

bool func_210(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_1940239.f_11564[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_211(int iParam0)
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

void func_212(var uParam0, int iParam1)
{
	func_260(&(uParam0->f_20), iParam1);
}

void func_213(var uParam0, int iParam1)
{
	func_261(&(uParam0->f_20), iParam1);
}

bool func_214(int iParam0)
{
	if (!func_211(iParam0))
	{
		return false;
	}
	switch (iParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_262(iParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_263(iParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_215()
{
	func_264(&(Global_1290256.f_1139));
	func_265(0);
	func_265(2);
}

void func_216(var uParam0)
{
	if (*uParam0 != 0)
	{
		*uParam0 = 0;
	}
}

bool func_217(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_145(Global_1072759.f_21353.f_1[iParam0 /*8*/].f_7, iParam1);
}

bool func_218(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_266(36, iParam0);
}

bool func_219(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102813.f_3 & 32 != 0;
	}
	return func_267(32, iParam0);
}

bool func_220(int iParam0)
{
	return func_266(1, iParam0);
}

bool func_221(int iParam0)
{
	return ((((iParam0 == -5.09425E-25f || iParam0 == -2.445049E+27f) || iParam0 == 3.302249E-11f) || iParam0 == 8.123318E-38f) || iParam0 == -1.121027E+34f);
}

float func_222(bool bParam0, var uParam1, var uParam2)
{
	if (bParam0)
	{
		return uParam1;
	}
	return uParam2;
}

bool func_223(int iParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	float fVar2;

	if (fParam2 > fParam3)
	{
		return false;
	}
	if (!CAM::IS_GAMEPLAY_CAM_RENDERING() && !CAM::IS_FIRST_PERSON_AIM_CAM_ACTIVE())
	{
		return false;
	}
	bVar0 = ENTITY::IS_ENTITY_A_PED(iParam1);
	if (bVar0)
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1);
	}
	if (bParam4)
	{
		if (Global_1072759.f_21889[iParam0 /*18*/].f_9 == 0)
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iVar1, false, false), 1f);
			}
			if (PED::IS_PED_INCAPACITATED(iVar1) && TASK::_0x6C50B9DCCCA70023(iVar1))
			{
				return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
			}
			else if (PED::IS_PED_IN_COVER(iVar1, true, false))
			{
				fVar2 = Global_1901671.f_100.f_13;
			}
			else
			{
				fVar2 = Global_1901671.f_100.f_12;
			}
			return ((func_268(Global_1295619, iParam0) && PED::_IS_PED_VISIBILITY_TRACKED(iVar1)) && PED::_IS_TRACKED_PED_VISIBILITY_PERCENTAGE_NOT_LESS_THAN(iVar1, fVar2));
		}
		else if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else if (bVar0)
	{
		if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar1))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar1);
		}
		else
		{
			return PED::IS_TRACKED_PED_VISIBLE(iVar1);
		}
	}
	else
	{
		return CAM::IS_SPHERE_VISIBLE(ENTITY::GET_ENTITY_COORDS(iParam1, false, false), 1f);
	}
	return false;
}

int func_224(var uParam0)
{
	if (*uParam0 == 0)
	{
		*uParam0 = Global_1295619.f_16;
	}
	else if ((Global_1295619.f_16 - *uParam0) < 5)
	{
		return 1;
	}
	return 0;
}

int func_225(int iParam0)
{
	switch (iParam0)
	{
		case 1277358601:
		case joaat("POSSE_LEADER"):
			return 0;
		default:
			break;
	}
	return 1;
}

int func_226(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		case 1:
			return 5;
		case 2:
			return 6;
	}
	return 0;
}

bool func_227()
{
	int iVar0;

	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (func_54(65536, 255))
		{
			func_56(65536);
		}
		return false;
	}
	if (func_54(65536, 255))
	{
		return true;
	}
	return false;
}

bool func_228(var uParam0, float fParam1)
{
	if (!func_19(uParam0))
	{
		return false;
	}
	if (func_79(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

char* func_229(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

var func_230(int iParam0)
{
	return Global_1283715[iParam0 /*2*/];
}

bool func_231(int iParam0)
{
	return Global_1283715[iParam0 /*2*/].f_1;
}

int func_232(int iParam0)
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

bool func_233(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_232(iParam0);
	if (!func_269(iVar0))
	{
		return false;
	}
	vVar1 = { Global_1051832.f_92[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_128(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_270(vVar1))
	{
		return false;
	}
	fVar4 = func_271(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_272(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_272(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<2> func_234(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_235(var uParam0, var uParam1, var uParam2, var uParam3)
{
	int iVar0;
	int iVar22;

	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam0))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar0, 22, &uParam0);
	}
	else
	{
		return false;
	}
	if (CREW::NETWORK_CLAN_SERVICE_IS_VALID() && CREW::NETWORK_CLAN_PLAYER_IS_ACTIVE(&uParam2))
	{
		CREW::NETWORK_CLAN_PLAYER_GET_DESC(&iVar22, 22, &uParam2);
	}
	else
	{
		return false;
	}
	if (iVar0 != iVar22)
	{
		return false;
	}
	return true;
}

void func_236(int iParam0, bool bParam1)
{
	if (func_273(iParam0) && !bParam1)
	{
		return;
	}
	Global_1290256.f_11.f_723[iParam0] = func_275(func_274(iParam0), 10000, 0, 0, 0, 1);
}

void func_237()
{
	if (func_54(2, 255))
	{
		return;
	}
	func_276(2);
}

bool func_238(var uParam0)
{
	struct<4> Var0;

	if ((!PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, -1) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, 0)) || !PED::_IS_MOUNT_SEAT_FREE(uParam0->f_19, -2))
	{
		return true;
	}
	if (!PED::GET_CARRIED_ATTACHED_INFO_FOR_SLOT(&Var0, uParam0->f_19, 4, 2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Var0.f_3))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(Var0.f_3))
	{
		return false;
	}
	if (!PED::IS_PED_HUMAN(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0.f_3)))
	{
		return false;
	}
	return true;
}

void func_239(int iParam0, int* iParam1, float fParam2, float fParam3, bool bParam4, bool bParam5)
{
	TASK::CLOSE_SEQUENCE_TASK(*iParam1);
	if (!bParam5 || !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (fParam2 > 0f)
		{
			if (fParam3 < fParam2)
			{
				fParam3 = fParam2;
			}
			TASK::_TASK_PERFORM_SEQUENCE_2(iParam0, *iParam1, fParam2, fParam3);
		}
		else
		{
			TASK::TASK_PERFORM_SEQUENCE(iParam0, *iParam1);
		}
	}
	if (bParam4)
	{
		TASK::CLEAR_SEQUENCE_TASK(iParam1);
	}
}

void func_240(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_241(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_242(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iParam1, true))
	{
		return false;
	}
	if (PED::IS_PED_INJURED(iParam1))
	{
		return false;
	}
	if (func_151(iVar0, iParam1, 1, 1) > 1109393408)
	{
		return false;
	}
	iVar1 = PED::_GET_RIDER_OF_MOUNT(iParam1, true);
	if (ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	return true;
}

bool func_243(struct<2> Param0)
{
	if (!func_277(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_278(Param0))
	{
		return false;
	}
	return true;
}

bool func_244(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_245(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_246(int iParam0, int iParam1)
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

bool func_247()
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
	if (!func_243(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

void func_248(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_213(uParam0, iParam1);
	}
	else
	{
		func_212(uParam0, iParam1);
	}
}

void func_249(int iParam0, int iParam1, bool bParam2)
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

int func_250(bool bParam0)
{
	if (func_279() == -1)
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

bool func_251(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_280(iParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_32(iParam0, iParam1, 0);
	if (func_107(&Global_1903834, 2))
	{
		return true;
	}
	return false;
}

void func_252(int iParam0, int iParam1)
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

bool func_253()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_254(int iParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_102(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_281(iParam0) };
	Var5 = { func_282(iParam0, bParam1, Var0, Var0.f_4) };
	if (INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(iParam0, &Var5, &Var0, bParam1, Var0.f_4, iParam2, 6.028273E-12f))
	{
		return 1;
	}
	return 0;
}

void func_255(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) || ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	bVar0 = false;
	PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, PED::_GET_DEFAULT_RELATIONSHIP_GROUP_HASH(iParam1));
	if (!bParam7)
	{
		if (bParam5)
		{
			PED::_SET_RANDOM_OUTFIT_VARIATION(iParam0, true);
			bVar0 = true;
		}
	}
	if (PED::IS_PED_HUMAN(iParam0))
	{
		if (bParam6)
		{
			WEAPON::_GIVE_WEAPON_COLLECTION_TO_PED(iParam0, WEAPON::_GET_DEFAULT_PED_WEAPON_COLLECTION(iParam1));
		}
		if (PED::IS_PED_MALE(iParam0) && !bParam3)
		{
			func_283(iParam0, 0, 1);
		}
		PED::SET_PED_CONFIG_FLAG(iParam0, 502, true);
	}
	else if (PED::_IS_THIS_MODEL_A_HORSE(ENTITY::GET_ENTITY_MODEL(iParam0)))
	{
		if (!bParam5)
		{
			PED::_EQUIP_META_PED_OUTFIT_PRESET(iParam0, 0, false);
			bVar0 = true;
		}
		if (bParam4)
		{
			func_284(iParam0, 0);
			bVar0 = true;
		}
		func_285(iParam0, iParam2);
	}
	if (bVar0)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

float func_256(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_286(iVar0);
}

int func_257(int iParam0)
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
			iVar0 = func_286(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

float func_258(int iParam0)
{
	if (iParam0 == 9.256025E-25f || iParam0 == -218565.1f)
	{
		return 1.256553E-21f;
	}
	return Global_524288.f_39632;
}

int func_259(int iParam0, int iParam1)
{
	int iVar0;

	switch (iParam0)
	{
		case -504335712:
			if (func_221(iParam1))
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

void func_260(var uParam0, int iParam1)
{
	if (!func_184(uParam0, iParam1))
	{
		return;
	}
	func_287(uParam0, iParam1);
}

void func_261(var uParam0, int iParam1)
{
	if (func_184(uParam0, iParam1))
	{
		return;
	}
	func_288(uParam0, iParam1);
}

bool func_262(int iParam0)
{
	func_289(&(Global_1903834.f_24));
	if (!func_94(*iParam0, &(Global_1903834.f_24), 1, 0, -1))
	{
		return false;
	}
	Global_1903834.f_24.f_14 = iParam0->f_11;
	Global_1903834.f_24.f_15 = iParam0->f_22;
	Global_1903834.f_24.f_16 = { iParam0->f_12 };
	Global_1903834.f_24.f_25 = iParam0->f_23;
	Global_1903834.f_24.f_24 = iParam0->f_20;
	func_290(iParam0, &(Global_1903834.f_24.f_24));
	if (!func_291(&(Global_1903834.f_24), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_263(int iParam0)
{
	struct<24> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (!func_94(*iParam0, &Var0, 0, 0, -1))
	{
		return false;
	}
	Var0.f_14 = iParam0->f_11;
	Var0.f_15 = { iParam0->f_12 };
	func_290(iParam0, &(Var0.f_23));
	return func_292(&Var0, 0, 0);
}

void func_264(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_293(uParam0[iVar0 /*24*/]);
		iVar0++;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 8)
	{
		func_293(&(uParam0->f_275[iVar0 /*24*/]));
		iVar0++;
	}
}

void func_265(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<17> Var20;
	struct<16> Var49;
	struct<4> Var73;
	struct<24> Var87;
	int iVar111;
	int iVar112;

	if (iParam0 == 0)
	{
		if (!func_206("ALL HORSES", &iVar0, &iVar1, -5.45926E-19f, 0))
		{
			return;
		}
	}
	else if (iParam0 == 2)
	{
		Var2 = { func_198(0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, -2.839425E-36f) };
		if (!func_199(&Var2, &iVar0, &iVar1, 0))
		{
			return;
		}
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var20.f_9 = -5.45926E-19f;
	Var49.f_9 = -5.45926E-19f;
	Var73.f_9 = -5.45926E-19f;
	iVar111 = 0;
	while (iVar111 < iVar1)
	{
		if (!INVENTORY::_INVENTORY_GET_ITEM_FROM_COLLECTION_INDEX(iVar0, iVar111, &Var73))
		{
		}
		else if (!func_32(&Var73, iParam0, 0))
		{
		}
		else
		{
			iVar112 = Global_1903834.f_10;
			switch (iVar112)
			{
				case 0:
				case 1:
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(Global_1903834.f_12)))
					{
						if (func_176(&Var73, &Var20, 1))
						{
							if (func_291(&Var20, 0, 1))
							{
								Global_1903834.f_12 = { Var20.f_16 };
							}
						}
					}
					break;
				case 2:
					if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(Global_1903834.f_12)))
					{
						if (func_178(&Var73, &Var49, 1))
						{
							if (func_292(&Var49, 0, 1))
							{
								Global_1903834.f_12 = { Var49.f_15 };
							}
						}
					}
					break;
			}
			Var87 = { Var73 };
			Var87.f_4 = Global_1903834.f_11;
			Var87.f_6 = func_107(&Global_1903834, 2);
			Var87.f_7 = { Global_1903834.f_12 };
			if (iVar112 == 0 || iVar112 == 1)
			{
				Var87.f_15 = { Global_1290256.f_1139[iVar111 /*24*/].f_15 };
				Var87.f_23 = Global_1290256.f_1139[iVar111 /*24*/].f_23;
				Global_1290256.f_1139[iVar111 /*24*/] = { Var87 };
			}
			else if (iVar112 == 2)
			{
				Var87.f_15 = { Global_1290256.f_1139.f_275[iVar111 /*24*/].f_15 };
				Var87.f_23 = Global_1290256.f_1139.f_275[iVar111 /*24*/].f_23;
				Global_1290256.f_1139.f_275[iVar111 /*24*/] = { Var87 };
			}
		}
		iVar111++;
	}
	func_201(iVar0);
}

bool func_266(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_294(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_295())
	{
		return func_294(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_294(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_267(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_268(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (iParam0 == iParam1)
	{
		return true;
	}
	if (!Global_1295619.f_17[iParam0])
	{
		return false;
	}
	if (!Global_1295619.f_17[iParam1])
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam0]))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(Global_1295619.f_149[iParam1]))
	{
		return false;
	}
	return func_296(Global_1295619.f_149[iParam0], Global_1295619.f_149[iParam1]);
}

bool func_269(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

bool func_270(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_271(int iParam0)
{
	int iVar0;

	iVar0 = func_232(iParam0);
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

float func_272(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

bool func_273(int iParam0)
{
	return func_297(Global_1290256.f_11.f_723[iParam0]);
}

char* func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 1:
			return "NSHM_HORSE_MOUNT_RESPAWNING";
		case 3:
			return "NSHM_HORSE_MOUNT_SWAPPED_RECENTLY";
		case 2:
			return "NSHM_HORSE_MOUNT_DISMISSED_RECENTLY";
		case 4:
			return "NSHM_HORSE_NO_HORSES_AVAILABLE";
		case 5:
			return "NSHM_HORSE_CANNOT_CONTACT_STABLE";
		case 6:
			return "NSHM_HORSE_CALL_HORSE_DISABLED";
		case 7:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD";
		case 8:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_ALT";
		case 9:
			return "NSHM_HORSE_ACTIVE_HORSE_DEAD_VET_FEES";
		case 10:
			return "NSHM_HORSE_PLAYER_VEHICLE_NOT_DISMISSED";
		case 11:
			return "NSHM_HORSE_CALL_HORSE_VEHICLE";
		case 13:
			return "NSHM_VEHICLE_CANNOT_CONTACT_STABLE";
		case 28:
			return "NSHM_HORSE_CANT_MOUNT_PLAYER_HORSE";
		case 15:
			return "NSHM_HORSE_PARLEYED_WITH_OWNER";
		case 14:
			return "NSHM_HORSE_YOU_DO_NOT_OWN_HORSE";
		case 16:
			return "NSHM_HORSE_OWNER_KICKED_YOU";
		case 17:
			return "NSHM_HORSE_DIED";
		case 18:
			return "NSHM_HORSE_DIED_INSURANCE";
		case 19:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION_INSURANCE";
		case 20:
			return "NSHM_HORSE_DIED_BY_HOSTILE_ACTION";
		case 22:
			return "NSHM_HORSE_PENALTY_COOLDOWN";
		case 23:
			return "NSHM_HORSE_PENALTY_COOLDOWN_INSURANCE";
		case 24:
			return "NSHM_HORSE_PENALTY_COOLDOWN_COMPLETE";
		case 21:
			return "NSHM_HORSE_REVIVE_COOLDOWN_COMPLETE";
		case 25:
			return "NSHM_HORSE_INSURANCE_EXPIRED";
		case 26:
			return "NSHM_HORSE_CANNOT_DISMISS_CARRYING_OBJECT";
		case 27:
			return "NSHM_HORSE_MOUNTED_POSSE_MEMBER";
		case 29:
			return "NSHM_HORSE_BAD_SPORT_KILLED_ENEMY_HORSE";
		case 31:
			return "NSHM_VEHICLE_BAD_SPORT_DESTROYED_ENEMY_VEHICLE";
		case 30:
			return "NSHM_VEHICLE_MOUNTED_POSSE_MEMBER";
		default:
			break;
	}
	return "";
}

int func_275(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

void func_276(int iParam0)
{
	func_252(3, iParam0);
}

bool func_277(int iParam0)
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

int func_278(int iParam0)
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

int func_279()
{
	return Global_1572887.f_14;
}

bool func_280(int iParam0, int iParam1)
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

struct<5> func_281(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_282(iParam0, 2.982335E+09f, func_92(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_282(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_102(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

void func_283(int iParam0, bool bParam1, bool bParam2)
{
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		PED::REMOVE_SHOP_ITEM_FROM_PED_BY_CATEGORY(iParam0, -8.569155E-24f, 0, true);
	}
	else
	{
		PED::REMOVE_TAG_FROM_META_PED(iParam0, -8.569155E-24f, 1);
	}
	if (bParam2)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_284(int iParam0, bool bParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
	{
	}
	PED::_EQUIP_META_PED_OUTFIT(iParam0, 1.977859E+07f);
	if (bParam1)
	{
		PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
	}
}

void func_285(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 0f);
	}
	else
	{
		PED::_SET_CHAR_EXPRESSION(iParam0, 41611, 1f);
	}
}

float func_286(int iParam0)
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
	iVar2 = func_298(iVar0);
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
			iVar6 = func_299(iVar5);
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

void func_287(var uParam0, int iParam1)
{
	func_300(uParam0, iParam1);
}

void func_288(var uParam0, int iParam1)
{
	func_301(uParam0, iParam1);
}

void func_289(var uParam0)
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

void func_290(int iParam0, var uParam1)
{
	if (func_107(iParam0, 4))
	{
		func_261(uParam1, 4);
	}
	if (func_107(iParam0, 2))
	{
		func_261(uParam1, 2);
	}
}

bool func_291(int iParam0, bool bParam1, bool bParam2)
{
	struct<29> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(&(iParam0->f_16)))
	{
		StringCopy(&(iParam0->f_16), func_22(), 64);
	}
	if (func_302(bParam2))
	{
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_250(bParam2), iParam0, iParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -5.45926E-19f;
		Var0 = { func_303(iParam0, 0) };
		Var0.f_17 = { iParam0->f_16 };
		Var0.f_26 = iParam0->f_27;
		Var0.f_27 = iParam0->f_28;
		Var0.f_25 = iParam0->f_25;
		Var0.f_28 = iParam0->f_24;
		if (func_304(-4.99669E-06f, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

bool func_292(int iParam0, bool bParam1, bool bParam2)
{
	struct<26> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (func_302(bParam2))
	{
		if (!INVENTORY::_INVENTORY_UPDATE_INVENTORY_ITEM(func_250(bParam2), iParam0, iParam0, 24))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -5.45926E-19f;
		Var0 = { func_303(iParam0, 0) };
		Var0.f_17 = { iParam0->f_15 };
		Var0.f_25 = iParam0->f_23;
		if (func_305(-4.99669E-06f, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

void func_293(var uParam0)
{
	*uParam0 = { func_92() };
	uParam0->f_4 = -1;
	uParam0->f_5 = -1;
}

bool func_294(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_295()
{
	return Global_1102813.f_3672;
}

bool func_296(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return false;
		}
		if (ENTITY::IS_ENTITY_DEAD(iVar0))
		{
			return false;
		}
		if (!PED::_IS_PED_VISIBILITY_TRACKED(iVar0))
		{
			PED::REQUEST_PED_VISIBILITY_TRACKING(iVar0);
			return false;
		}
	}
	return NETWORK::_NETWORK_IS_TRACKED_PLAYER_VISIBLE(iParam0, iParam1);
}

bool func_297(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

int func_298(int iParam0)
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

int func_299(int iParam0)
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

void func_300(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_301(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_302(bool bParam0)
{
	if (func_279() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_250(bParam0));
}

struct<17> func_303(int iParam0, bool bParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { *iParam0 };
	Var0.f_4 = { iParam0->f_5 };
	Var0.f_8 = iParam0->f_4;
	Var0.f_9 = iParam0->f_11;
	Var0.f_11 = iParam0->f_9;
	Var0.f_10 = iParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_306(iParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_92() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_304(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_307(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_309(func_308(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_310(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

int func_305(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_309(func_311(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_310(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

int func_306(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_313(func_312(iParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(iParam0, iParam1);
}

bool func_307(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_314(iParam1->f_8, iParam0, iVar0, 2048) || func_314(iParam1->f_8, iParam0, iVar0, 32768)) || func_314(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_314(iParam1->f_8, iParam0, iVar0, 4) || func_314(iParam1->f_8, iParam0, iVar0, 256)) || func_314(iParam1->f_8, iParam0, iVar0, 65536)) || func_314(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_314(iParam1->f_8, iParam0, iVar0, 1) || func_314(iParam1->f_8, iParam0, iVar0, 8)) || func_314(iParam1->f_8, iParam0, iVar0, 65536)) || func_314(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_314(iParam1->f_8, iParam0, iVar0, 1) || func_314(iParam1->f_8, iParam0, iVar0, 16)) || func_314(iParam1->f_8, iParam0, iVar0, 2)) || func_314(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_314(iParam1->f_8, iParam0, iVar0, 8) || func_314(iParam1->f_8, iParam0, iVar0, 4096)) || func_314(iParam1->f_8, iParam0, iVar0, 256)) || func_314(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_308(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

int func_309(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_315(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_315(iParam1, 2, 0, 0);
	return -1;
}

int func_310(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_315(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_311(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_312(int iParam0)
{
	return iParam0;
}

bool func_313(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_314(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_145(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_315(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_316(iParam0, iParam1, iParam2, iParam3);
}

void func_316(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_317(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

void func_317(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_318(&(uParam0->f_4));
}

void func_318(var uParam0)
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

