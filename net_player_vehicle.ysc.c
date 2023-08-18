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
	struct<16> ScriptParam_0 = { 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	struct<27> Var0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	Var0.f_2 = 255;
	Var0.f_4 = 6;
	Var0.f_26 = -1;
	if (!func_1(&Var0, &ScriptParam_0))
	{
		func_2(&Var0, "failed to launch the script.");
	}
	if (ScriptParam_0.f_15)
	{
		func_3();
	}
	if (func_4(&(Global_1290256.f_782.f_72)))
	{
		func_5(&(Global_1290256.f_782.f_72));
	}
	while (true)
	{
		func_6(&Var0, &ScriptParam_0);
		if (func_7(&Var0, &ScriptParam_0))
		{
			func_2(&Var0, "script should terminate.");
		}
		if (!func_8(Var0, 2048))
		{
			if (func_9(&Var0, &ScriptParam_0))
			{
				func_10(&Var0, "script should terminate due to async update.");
			}
			else if (!func_11(&Var0))
			{
			}
			else
			{
				if (!func_8(Var0, 8))
				{
					if (func_12(&Var0))
					{
						func_13(&Var0, 8);
					}
				}
				if (func_8(Var0, 8))
				{
					if (func_14(&Var0))
					{
						if (Var0.f_26 != -1)
						{
							if (!func_15(Var0.f_26))
							{
								if (func_16())
								{
									func_17(Var0.f_26, 1);
								}
							}
						}
					}
				}
				if (func_18(&Var0))
				{
					func_10(&Var0, "update requested thread termination.");
				}
			}
		}
		else if (NETWORK::GET_TIME_DIFFERENCE(Var0.f_25, NETWORK::GET_NETWORK_TIME_ACCURATE()) > 1000)
		{
			if (func_14(&Var0))
			{
				Var0.f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				if (func_8(Var0, 2))
				{
					func_19();
				}
				else
				{
					func_20();
				}
			}
		}
		if (func_21(&Var0, &ScriptParam_0) || func_8(Var0, 2048))
		{
			func_2(&Var0, "event requested thread termination.");
		}
		BUILTIN::WAIT(0);
	}
	func_2(&Var0, "end of thread.");
}

bool func_1(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = BRAIN::_GET_SCRIPT_BRAIN_ENTITY();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_VEHICLE(iVar0))
	{
		return false;
	}
	uParam0->f_3 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return false;
	}
	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	MISC::COPY_SCRIPT_STRUCT(&(uParam0->f_11), bParam1, 2);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		return false;
	}
	if (uParam0->f_2 == PLAYER::PLAYER_ID())
	{
		func_13(uParam0, 1);
		iVar1 = NETWORK::VEH_TO_NET(uParam0->f_3);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar1))
		{
		}
		else
		{
			NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(iVar1, PLAYER::PLAYER_ID(), true);
		}
	}
	if (!func_22(uParam0, bParam1))
	{
		return false;
	}
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
	BRAIN::_0xA6AC35DB4A7957A8(275);
	return true;
}

void func_2(var uParam0, char* sParam1)
{
	bool bVar0;

	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}
	VEHICLE::CLEAR_LAST_DRIVEN_VEHICLE();
	func_23(uParam0);
	func_24(uParam0);
	if (func_4(&(uParam0->f_13)))
	{
		func_5(&(uParam0->f_13));
	}
	if (func_4(&(uParam0->f_16)))
	{
		func_5(&(uParam0->f_16));
	}
	if (func_4(&(uParam0->f_19)))
	{
		func_5(&(uParam0->f_19));
	}
	if (func_4(&(Global_1290256.f_782.f_72)))
	{
		func_5(&(Global_1290256.f_782.f_72));
	}
	if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		bVar0 = func_8(*uParam0, 2);
		if (!bVar0)
		{
			if (func_25(uParam0->f_3))
			{
				bVar0 = true;
			}
		}
		if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
		{
			AITRANSPORT::SET_TRANSPORT_CONFIG_FLAG(uParam0->f_3, 17, true);
			if (bVar0)
			{
				func_26(uParam0->f_3, 0);
			}
			else
			{
				func_26(uParam0->f_3, 1);
				TASK::TASK_EVERYONE_LEAVE_VEHICLE_IN_ORDER(uParam0->f_3, false);
			}
		}
		if (!func_27(&(uParam0->f_11), uParam0->f_3, 2, !bVar0, func_14(uParam0)))
		{
		}
		if (func_8(*uParam0, 4096))
		{
			if (PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true) == uParam0->f_3)
			{
				TASK::TASK_LEAVE_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), 0, 0);
			}
		}
	}
	if (func_14(uParam0))
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), 0);
		func_28(4);
		func_28(2);
		func_29();
	}
	else if (func_30())
	{
		func_31(11, uParam0->f_2, Global_1295619.f_149[Global_1295619], 0);
		func_32(9.636746E+20f, 31, "NSTM_STABLE_DESTROYED_VEHICLE");
		func_33();
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_3()
{
	if (func_34(8, 255))
	{
		return;
	}
	func_35(6, 3);
}

bool func_4(var uParam0)
{
	return func_36(*uParam0, 1);
}

void func_5(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_6(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	uParam0->f_2 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(bParam1);
	if (!func_14(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar1))
	{
		return;
	}
	if (PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar1) != iVar0)
	{
		PLAYER::_SET_PLAYER_OWNS_VEHICLE(iVar1, iVar0);
	}
	iVar2 = VEHICLE::_GET_VEHICLE_OWNER(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		iVar3 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	}
	iVar4 = PLAYER::PLAYER_PED_ID();
	if (iVar3 != iVar4)
	{
		VEHICLE::SET_PED_OWNS_VEHICLE(iVar4, iVar0);
	}
}

bool func_7(var uParam0, var uParam1)
{
	if (func_37(1, 1))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return true;
	}
	if (!func_14(uParam0))
	{
		if (!NETWORK::NETWORK_IS_HANDLE_VALID(&(uParam0->f_11)) || !NETWORK::NETWORK_IS_GAMER_IN_MY_SESSION(&(uParam0->f_11)))
		{
			func_13(uParam0, 2);
			return true;
		}
	}
	if (func_38(uParam0, uParam1))
	{
		return true;
	}
	return false;
}

bool func_8(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_9(var uParam0, var uParam1)
{
	bool bVar0;

	func_39(uParam0);
	func_40(uParam0);
	if (func_41(uParam0, uParam1))
	{
		return true;
	}
	if (func_42(uParam0, uParam1))
	{
		return true;
	}
	if (func_14(uParam0))
	{
		if (func_43())
		{
			func_13(uParam0, 2);
			return true;
		}
		if (!func_8(*uParam0, 8192))
		{
			if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) > 1132068864)
			{
				func_13(uParam0, 8192);
				func_13(uParam0, 2);
				return true;
			}
			else
			{
				bVar0 = BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) >= 1128005632;
				if (!func_8(*uParam0, 16384))
				{
					if (bVar0)
					{
						func_17(933, 1);
						func_44(&(uParam0->f_22));
						func_13(uParam0, 16384);
					}
				}
				else if (!bVar0 && func_45(&(uParam0->f_22), 3f))
				{
					func_5(&(uParam0->f_22));
					func_46(uParam0, 16384);
				}
			}
		}
	}
	return false;
}

void func_10(var uParam0, char* sParam1)
{
	if (MISC::IS_STRING_NULL_OR_EMPTY_OR_SPACES(sParam1))
	{
	}
	if (!func_14(uParam0))
	{
		return;
	}
	func_13(uParam0, 2048);
	uParam0->f_25 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (func_8(*uParam0, 2))
	{
		func_19();
	}
	else
	{
		func_20();
	}
}

bool func_11(var uParam0)
{
	if (!func_8(*uParam0, 16))
	{
		if (func_14(uParam0))
		{
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_3);
			}
			else
			{
				PLAYER::_SET_PLAYER_OWNS_VEHICLE(PLAYER::PLAYER_ID(), uParam0->f_3);
				VEHICLE::SET_PED_OWNS_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3);
				func_13(uParam0, 16);
			}
		}
		else
		{
			func_13(uParam0, 16);
		}
	}
	if (!func_8(*uParam0, 32))
	{
		if (func_47(uParam0))
		{
			func_13(uParam0, 32);
		}
	}
	if (func_8(*uParam0, 16))
	{
		if (func_8(*uParam0, 32))
		{
			return true;
		}
	}
	return false;
}

bool func_12(var uParam0)
{
	int iVar0;

	iVar0 = 1;
	if (!func_48(uParam0))
	{
		iVar0 = 0;
	}
	if (!func_49(uParam0))
	{
		iVar0 = 0;
	}
	return iVar0;
}

void func_13(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_14(var uParam0)
{
	return func_8(*uParam0, 1);
}

bool func_15(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = uParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17418.f_2585[iVar1], iVar2);
}

bool func_16()
{
	if (!func_50() && func_51(1))
	{
		return true;
	}
	return false;
}

void func_17(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_52(iParam0, &iVar0, &iVar1);
	if (!func_53(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_54(iVar0, iVar1);
}

bool func_18(var uParam0)
{
	if (func_55(uParam0))
	{
		return true;
	}
	func_56(uParam0);
	func_57(uParam0);
	func_58(uParam0);
	func_59(uParam0);
	if (func_14(uParam0))
	{
		func_60(uParam0);
	}
	return false;
}

void func_19()
{
	if (func_34(8, 255))
	{
		return;
	}
	func_61(3);
}

void func_20()
{
	if (func_34(8, 255))
	{
		return;
	}
	func_62(3);
}

bool func_21(var uParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	struct<6> Var2;
	int iVar8;
	int iVar9;

	iVar0 = SCRIPTS::GET_NUMBER_OF_EVENTS(1);
	bVar1 = false;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	iVar9 = 0;
	iVar9 = 0;
	while (iVar9 < iVar0)
	{
		iVar8 = SCRIPTS::GET_EVENT_AT_INDEX(1, iVar9);
		switch (iVar8)
		{
			case -507840394:
				if (!SCRIPTS::GET_EVENT_DATA(1, iVar9, &Var2, 6))
				{
				}
				else if (Var2 != 47)
				{
				}
				else
				{
					bVar1 = func_63(uParam0, uParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
					bVar1 = func_64(uParam0, uParam1, &Var2);
					if (bVar1)
					{
						return true;
					}
				}
		}
		iVar9++;
	}
	return false;
}

bool func_22(var uParam0, bool bParam1)
{
	return true;
}

void func_23(var uParam0)
{
}

void func_24(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[iVar0]))
			{
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 467, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 277, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 209, false);
				PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar0], 208, false);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uParam0->f_4[iVar0]));
			}
		}
		iVar0++;
	}
}

bool func_25(int iParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	else if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return false;
	}
	if (func_65(iParam0, 0) && func_65(iParam0, 1))
	{
		return false;
	}
	return true;
}

void func_26(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_66(iParam0))
	{
		iVar1 = 0;
		while (iVar1 < 9)
		{
			iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
				{
					if (!bParam1 || ENTITY::IS_ENTITY_DEAD(iVar0))
					{
						PED::_WARP_PED_OUT_OF_VEHICLE(iVar0);
					}
				}
			}
			iVar1++;
		}
	}
}

bool func_27(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
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
			Global_1290256.f_11.f_323[iVar0 /*5*/] = { *uParam0 };
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

void func_28(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_10 = (Global_1289628[iVar0 /*19*/].f_10 - (Global_1289628[iVar0 /*19*/].f_10 && iParam0));
}

void func_29()
{
	func_67(97);
	func_67(98);
	func_67(99);
	func_67(100);
	Global_1290256.f_782.f_77 = { func_68() };
	Global_1290256.f_782.f_81 = -1;
	Global_1903834.f_536 = 0;
	Global_1903834.f_537 = MISC::GET_GAME_TIMER();
}

bool func_30()
{
	return Global_1149417.f_5568.f_132;
}

void func_31(int iParam0, int iParam1, var uParam2, bool bParam3)
{
	bool bVar0;
	int iVar1;
	var uVar2;
	struct<8> Var3;

	bVar0 = true;
	if (bParam3)
	{
		bVar0 = false;
	}
	if (func_69(iParam1, bVar0))
	{
		return;
	}
	if (Global_1901671.f_737.f_41 < 1)
	{
		if (func_70(Global_1295619.f_149[Global_1295619], iParam1))
		{
			if (2 == iParam0 || 3 == iParam0)
			{
				func_17(767, 0);
			}
			return;
		}
	}
	if (!func_71(iParam0) && Global_1149417.f_5568.f_2 == iParam0)
	{
		if (Global_17418.f_2641.f_1 >= (Global_1295619.f_16 - func_72(iParam0)))
		{
			return;
		}
	}
	if (((iParam0 == 1 && Global_1149417.f_5568.f_1 != 1) && Global_1149417.f_5568.f_1 != 0) && Global_1149417.f_5568.f_9 == Global_1295619.f_16)
	{
		return;
	}
	if (iParam0 == 1 || iParam0 == 9)
	{
		iVar1 = iParam1;
		SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar2, iVar1);
		Var3.f_6 = 255;
		Var3.f_4 = 4;
		Var3.f_6 = iParam1;
		Var3.f_7 = 3;
		func_73(&Var3, uVar2);
	}
	if (iParam1 != 255)
	{
		Global_1149417.f_5568.f_3 = func_74(iParam1, 1);
		Global_1149417.f_5568.f_4 = func_75(iParam1, 0, 1);
		Global_1149417.f_5568.f_5 = iParam1;
	}
	else
	{
		Global_1149417.f_5568.f_3 = 0f;
		Global_1149417.f_5568.f_4 = 0;
		Global_1149417.f_5568.f_5 = 255;
	}
	Global_1149417.f_5568.f_1 = iParam0;
	Global_1149417.f_5568.f_9 = Global_1295619.f_16;
}

void func_32(bool bParam0, int iParam1, char* sParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = func_76(bParam0, 1, 8.497754E-37f);
	if (iVar0 <= 0)
	{
		return;
	}
	if (!MONEY::_NETWORK_IS_MONEY_BALANCE_NOT_LESS_THAN(iVar0, 0))
	{
		return;
	}
	if (!func_77(bParam0, 1, 8.497754E-37f))
	{
		return;
	}
	iVar1 = func_78(bParam0, sParam2, 1, 1, 0, 8.497754E-37f);
	if (iVar1 == -1)
	{
		return;
	}
	func_79(iParam1, iVar0, 0);
}

void func_33()
{
	Global_1149417.f_5568.f_132 = 0;
}

bool func_34(int iParam0, int iParam1)
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

void func_35(int iParam0, int iParam1)
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

bool func_36(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_37(bool bParam0, bool bParam1)
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

bool func_38(var uParam0, var uParam1)
{
	return false;
}

void func_39(var uParam0)
{
	bool bVar0;

	bVar0 = false;
	if (func_80(255) == 1)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (func_81(uParam0->f_2))
		{
			if (!func_8(*uParam0, 256))
			{
				NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), true, 256);
				func_13(uParam0, 256);
			}
			NETWORK::PREVENT_NETWORK_ID_MIGRATION(NETWORK::_0xF260AF6F43953316(uParam0->f_3));
		}
		else if (func_8(*uParam0, 256))
		{
			NETWORK::KEEP_NETWORK_ID_IN_FAST_INSTANCE(NETWORK::_0xF260AF6F43953316(uParam0->f_3), false, 256);
			func_46(uParam0, 256);
		}
	}
	else if (func_8(*uParam0, 256))
	{
		func_46(uParam0, 256);
	}
}

void func_40(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	if (func_14(uParam0))
	{
		func_46(uParam0, 512);
		return;
	}
	iVar0 = PLAYER::PLAYER_ID();
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(uParam0->f_2) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		func_46(uParam0, 512);
		return;
	}
	iVar1 = GANG::NETWORK_GET_GANG_ID(uParam0->f_2);
	iVar2 = GANG::NETWORK_GET_GANG_ID(iVar0);
	if (iVar1 == iVar2)
	{
		if (!func_8(*uParam0, 512))
		{
			func_13(uParam0, 512);
			func_46(uParam0, 1024);
		}
	}
	else
	{
		if (func_8(*uParam0, 512))
		{
			func_46(uParam0, 512);
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
				func_13(uParam0, 1024);
			}
		}
		if (func_8(*uParam0, 1024))
		{
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, false))
			{
				if (!func_82(PLAYER::PLAYER_PED_ID(), 9.562565E-23f))
				{
					TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, 64, 0);
				}
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), uParam0->f_3, true))
			{
			}
			else
			{
				func_46(uParam0, 1024);
			}
		}
	}
}

bool func_41(var uParam0, var uParam1)
{
	return false;
}

bool func_42(var uParam0, var uParam1)
{
	if (!func_8(*uParam0, 128))
	{
		if (!func_83(uParam0))
		{
			return false;
		}
		if (func_25(uParam0->f_3))
		{
			return false;
		}
		func_84(&(uParam0->f_19), 0);
		func_13(uParam0, 128);
		func_85(uParam0, uParam1);
		func_57(uParam0);
		func_86(uParam0);
	}
	if (!func_14(uParam0))
	{
		return false;
	}
	if (!func_45(&(uParam0->f_19), 5f))
	{
		return false;
	}
	return true;
}

bool func_43()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

void func_44(var uParam0)
{
	func_87(uParam0, 0f);
}

bool func_45(var uParam0, float fParam1)
{
	if (!func_4(uParam0))
	{
		return false;
	}
	if (func_88(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_46(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_47(var uParam0)
{
	return true;
}

bool func_48(var uParam0)
{
	int iVar0;
	var uVar1;
	int iVar2;
	int iVar3;

	if (!func_83(uParam0))
	{
		if (VEHICLE::GET_DRAFT_ANIMAL_COUNT(uParam0->f_3, &iVar0, &uVar1))
		{
			iVar3 = 0;
			iVar2 = 0;
			while (iVar2 < 6)
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[iVar2]))
				{
					uParam0->f_4[iVar2] = func_89(uParam0->f_3, iVar2);
					if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_4[iVar2]))
					{
						iVar3++;
						PED::SET_PED_OWNS_ANIMAL(PLAYER::GET_PLAYER_PED(uParam0->f_2), uParam0->f_4[iVar2], false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_4[iVar2]))
						{
							ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uParam0->f_4[iVar2], true, false);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar2], 467, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar2], 277, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar2], 209, true);
							PED::SET_PED_CONFIG_FLAG(uParam0->f_4[iVar2], 208, true);
						}
					}
				}
				iVar2++;
			}
			if (iVar3 < iVar0)
			{
			}
			else if (iVar3 == iVar0)
			{
				func_13(uParam0, 64);
				return true;
			}
			else if (iVar3 > iVar0)
			{
				func_13(uParam0, 64);
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

bool func_49(var uParam0)
{
	return true;
}

bool func_50()
{
	int iVar0;

	if (func_90())
	{
		return true;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (Global_1904398[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_51(bool bParam0)
{
	if (func_91())
	{
		return false;
	}
	if ((!CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return false;
	}
	if (func_92(&(Global_1102813.f_4), 1, 5))
	{
		return false;
	}
	if (!bParam0)
	{
		if (!func_50())
		{
			return false;
		}
	}
	if ((Global_13 || Global_1048584) || func_93())
	{
		return false;
	}
	if (!func_94())
	{
		return false;
	}
	if (func_95())
	{
		return false;
	}
	if (MISC::_IS_MISSION_CREATOR_ACTIVE())
	{
		return false;
	}
	if (HUD::IS_PAUSE_MENU_ACTIVE())
	{
		return false;
	}
	if ((Global_1915643.f_20638 && Global_1915643.f_20241.f_43 == 2) && Global_1940239.f_2)
	{
		return false;
	}
	if (func_96())
	{
		return false;
	}
	return true;
}

void func_52(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_53(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_97(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_98(iParam0))
	{
		return false;
	}
	if (func_99(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_100(iParam0, 1)) || func_101(32768))
	{
		if (!func_100(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_94())
	{
		return false;
	}
	return true;
}

void func_54(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_55(var uParam0)
{
	return false;
}

void func_56(var uParam0)
{
	if (!func_102(uParam0->f_2))
	{
		return;
	}
	switch (func_103(uParam0))
	{
		case 0:
			break;
		case 1:
			if (func_14(uParam0))
			{
				func_104(uParam0);
				func_28(4);
				func_28(2);
			}
			break;
		case 2:
			if (func_14(uParam0))
			{
				func_104(uParam0);
				func_17(79, 1);
				func_28(4);
				func_28(2);
			}
			break;
	}
}

void func_57(var uParam0)
{
	func_105(uParam0);
}

void func_58(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	iVar0 = uParam0->f_3;
	iVar1 = uParam0->f_2;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false, false))
	{
		return;
	}
	iVar3 = 0;
	AITRANSPORT::_GET_TRANSPORT_USAGE_FLAGS(iVar0, &uVar2);
	if (Global_1289628[iVar1 /*19*/].f_8 & 1 != 0)
	{
		if (!func_106(uVar2, 1))
		{
			iVar3 = 1;
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 32 != 0)
		{
			if (!func_106(uVar2, 32))
			{
				iVar3 |= 32;
			}
		}
	}
	else
	{
		if (Global_1289628[iVar1 /*19*/].f_8 & 2 != 0)
		{
			if (!func_106(uVar2, 2))
			{
				iVar3 |= 2;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 4 != 0)
		{
			if (!func_106(uVar2, 4))
			{
				iVar3 |= 4;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 8 != 0)
		{
			if (!func_106(uVar2, 8))
			{
				iVar3 |= 8;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 64 != 0)
		{
			if (!func_106(uVar2, 64))
			{
				iVar3 |= 64;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 128 != 0)
		{
			if (!func_106(uVar2, 128))
			{
				iVar3 |= 128;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 256 != 0)
		{
			if (!func_106(uVar2, 256))
			{
				iVar3 |= 256;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 16 != 0)
		{
			if (!func_106(uVar2, 16))
			{
				iVar3 = 16;
			}
		}
		if (Global_1289628[iVar1 /*19*/].f_8 & 512 != 0)
		{
			if (!func_106(uVar2, 512))
			{
				iVar3 |= 512;
			}
		}
		if (func_106(uVar2, 1024))
		{
			if (!func_106(uVar2, 1024))
			{
				iVar3 |= 1024;
			}
		}
	}
	if (iVar3 != 0)
	{
		AITRANSPORT::_SET_TRANSPORT_USAGE_FLAGS(iVar0, iVar3);
	}
}

void func_59(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	int iVar3;

	if (!func_107(uParam0))
	{
		return;
	}
	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!func_108(iVar0, iVar1, &uVar2))
	{
		return;
	}
	func_109(iVar0);
	iVar3 = uParam0->f_2;
	if (Global_1289628[iVar3 /*19*/].f_8 & 16 != 0 || Global_1289627 & 32 != 0)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
	else if (func_16())
	{
		func_17(81, 1);
	}
}

void func_60(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	iVar2 = PLAYER::_GET_PLAYER_OWNER_OF_VEHICLE(iVar0);
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar2))
	{
		return;
	}
	iVar3 = PLAYER::GET_PLAYER_PED(iVar2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar3))
	{
		return;
	}
	iVar4 = 0;
	while (iVar4 < 6)
	{
		iVar5 = uParam0->f_4[iVar4];
		if (ENTITY::DOES_ENTITY_EXIST(iVar5))
		{
			func_110(iVar3, iVar5);
		}
		iVar4++;
	}
	iVar6 = VEHICLE::_GET_VEHICLE_OWNER(iVar0);
	if (ENTITY::IS_ENTITY_A_PED(iVar6))
	{
		iVar7 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar6);
		if (iVar7 == iVar3)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar0);
		return;
	}
	VEHICLE::SET_PED_OWNS_VEHICLE(iVar3, iVar0);
}

void func_61(int iParam0)
{
	func_35(2, iParam0);
}

void func_62(int iParam0)
{
	func_35(3, iParam0);
}

int func_63(var uParam0, var uParam1, int iParam2)
{
	return 0;
}

int func_64(var uParam0, var uParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam2->f_4;
	switch (iParam2->f_5)
	{
		case -1:
		case 0:
		case 2:
		case 4:
			return 0;
	}
	switch (iVar0)
	{
		case 0:
		case 3:
			if (func_111(uParam0, iParam2))
			{
				func_112(uParam0);
				return 1;
			}
			break;
		case 16:
			if (func_111(uParam0, iParam2))
			{
				func_13(uParam0, 4096);
				func_112(uParam0);
				return 1;
			}
			break;
		case 1:
		case 2:
			if (func_111(uParam0, iParam2))
			{
				func_113(uParam0);
				return 1;
			}
			break;
		case 6:
			if (func_111(uParam0, iParam2))
			{
				func_114(uParam0, uParam1);
			}
			break;
		case 4:
			break;
		case 5:
			break;
		case 12:
			func_115(uParam0, iParam2, 0);
			break;
		case 13:
			func_115(uParam0, iParam2, 1);
			break;
		case 14:
			func_116(uParam0, iParam2);
			break;
		case 15:
			if (func_111(uParam0, iParam2))
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
				{
					if (!func_66(uParam0->f_3))
					{
						TASK::_0x141BC64C8D7C5529(uParam0->f_3);
						TASK::_0xEBA2081E0A5F4D17(uParam0->f_3);
					}
				}
			}
			break;
	}
	return 0;
}

int func_65(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iParam1);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 1;
	}
	return 0;
}

bool func_66(int iParam0)
{
	int iVar0;

	iVar0 = VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(iParam0);
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

void func_67(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_117(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

struct<4> func_68()
{
	struct<4> Var0;

	return Var0;
}

bool func_69(int iParam0, bool bParam1)
{
	if (Global_1048576)
	{
		return true;
	}
	if (Global_1572887.f_5)
	{
		return true;
	}
	if (Global_1048577)
	{
		return true;
	}
	if (Global_1572887.f_72.f_40 > 10)
	{
		return true;
	}
	if (!func_118(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	if (func_118(func_119()))
	{
		if (!func_75(Global_1295619.f_149[Global_1295619], 0, 1) && func_120(iParam0, bParam1))
		{
			return true;
		}
	}
	return false;
}

bool func_70(int iParam0, int iParam1)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
	{
		return false;
	}
	iVar0 = iParam1;
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iVar0))
	{
		return false;
	}
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28306), iVar0))
	{
		return false;
	}
	if (NETWORK::_0xFE53B1F8D43F19BF(iParam0, iParam1) == 2 || Global_1108965.f_34[iVar0 /*11*/].f_10)
	{
		return true;
	}
	return false;
}

bool func_71(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return false;
		case 12:
			return false;
		case 10:
			return false;
		case 11:
			return false;
		case 9:
			return false;
		default:
			break;
	}
	return true;
	return true;
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 5;
		case 12:
			return 5;
		case 10:
			return 5;
		case 11:
			return 10;
		case 9:
			return 10;
		default:
			break;
	}
	return 0;
	return 0;
}

void func_73(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_121(*uParam0);
}

float func_74(int iParam0, bool bParam1)
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

bool func_75(int iParam0, bool bParam1, bool bParam2)
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

int func_76(bool bParam0, bool bParam1, int iParam2)
{
	if (!func_122(bParam0, 0))
	{
		return 0;
	}
	return func_123(bParam0, iParam2, 1, bParam1, 1, 0);
}

bool func_77(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	bool bVar1;

	iVar0 = (func_76(bParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_124(iVar0);
	}
	return bVar1;
}

int func_78(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
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

	if (!func_122(bParam0, 0))
	{
		return -1;
	}
	if (func_125(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_126())
	{
		bParam3 = true;
	}
	if (iParam5 == -2.401104E+18f || iParam5 == -982726.7f)
	{
		iVar0 = (func_123(bParam0, iParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_123(bParam0, iParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
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
	else if (func_127(bParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_128(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_129(0))
	{
		if (iVar0 > 0)
		{
			func_130(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_130(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_131(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_130(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
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
	iVar53 = func_132(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_133(iVar53, Var54);
	}
	return iVar53;
}

void func_79(int iParam0, char* sParam1, bool bParam2)
{
	char* sVar0;

	sVar0 = func_134(iParam0);
	if (func_135(iParam0) && !bParam2)
	{
		return;
	}
	Global_1290256.f_11.f_723[iParam0] = func_136(MISC::VAR_STRING(2, sVar0, sParam1), 10000, 0, 0, 0, 1);
}

int func_80(int iParam0)
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

bool func_81(int iParam0)
{
	if (func_34(32, iParam0))
	{
		return true;
	}
	return false;
}

bool func_82(int iParam0, int iParam1)
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

bool func_83(var uParam0)
{
	return func_8(*uParam0, 64);
}

void func_84(var uParam0, bool bParam1)
{
	if (bParam1 || !func_4(uParam0))
	{
		func_44(uParam0);
	}
}

void func_85(var uParam0, var uParam1)
{
}

void func_86(var uParam0)
{
	if (func_14(uParam0))
	{
		func_17(70, 1);
	}
}

void func_87(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_137() - fParam1);
	func_138(uParam0, 1);
	func_139(uParam0, 2);
	uParam0->f_2 = 0f;
}

float func_88(var uParam0)
{
	if (!func_4(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_140(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_137() - uParam0->f_1);
}

int func_89(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = VEHICLE::_GET_PED_IN_DRAFT_HARNESS(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
	}
	return iVar0;
}

bool func_90()
{
	return Global_1904398.f_8863 != -1;
}

bool func_91()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_92(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

bool func_93()
{
	return Global_1072759.f_28644.f_23.f_3 != 0;
}

bool func_94()
{
	if (!func_141())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

bool func_95()
{
	return Global_1896762.f_352;
}

bool func_96()
{
	var uVar0;

	if (!func_141())
	{
		return false;
	}
	uVar0 = Global_1904398.f_8865;
	Global_1904398.f_8865 = 0;
	return uVar0;
}

bool func_97(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_98(int iParam0)
{
	if (func_100(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_99(int iParam0)
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

bool func_100(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_101(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_102(int iParam0)
{
	if (func_34(4, iParam0))
	{
		return true;
	}
	return false;
}

int func_103(var uParam0)
{
	return func_142(uParam0, 6f, 12f, 3f, 8f);
}

void func_104(var uParam0)
{
	if (func_14(uParam0))
	{
		func_35(15, 3);
	}
}

void func_105(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;

	if (!func_14(uParam0))
	{
		func_143(uParam0);
		return;
	}
	iVar0 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(uParam0->f_3, -1);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iVar0 == PLAYER::PLAYER_PED_ID())
		{
			func_143(uParam0);
			return;
		}
	}
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		if (func_102(uParam0->f_2))
		{
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, -1.174981E+29f);
		}
		else
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -1.174981E+29f);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -2.065888E-11f);
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 1.10574E-22f);
			return;
		}
		if (!PED::IS_PED_A_PLAYER(iVar0))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -2.065888E-11f);
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 1.10574E-22f);
			return;
		}
		iVar1 = NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(iVar0);
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, 1.10574E-22f);
			return;
		}
		if (func_144(iVar1, 0))
		{
			MAP::BLIP_REMOVE_MODIFIER(uParam0->f_1, -2.065888E-11f);
			MAP::BLIP_ADD_MODIFIER(uParam0->f_1, 1.10574E-22f);
		}
		return;
	}
	if (MAP::_DOES_ENTITY_HAVE_BLIP(uParam0->f_3))
	{
		return;
	}
	uParam0->f_1 = MAP::BLIP_ADD_FOR_ENTITY(2.426574E-11f, uParam0->f_3);
	iVar2 = ENTITY::GET_ENTITY_MODEL(uParam0->f_3);
	if (STREAMING::IS_MODEL_VALID(iVar2))
	{
		bVar3 = func_145(iVar2);
		if (func_122(bVar3, 0))
		{
			MAP::_SET_BLIP_NAME(uParam0->f_1, MISC::VAR_STRING(0, func_146(bVar3, 0)));
		}
		else
		{
			MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_147(2));
		}
	}
	else
	{
		MAP::SET_BLIP_NAME_FROM_TEXT_FILE(uParam0->f_1, func_147(2));
	}
	MAP::BLIP_ADD_MODIFIER(uParam0->f_1, 4.185971E-18f);
}

bool func_106(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_107(var uParam0)
{
	int iVar0;
	int iVar1;
	var uVar2;
	struct<2> Var3;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	struct<2> Var10;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar1))
	{
		return false;
	}
	if (!func_108(iVar0, iVar1, &uVar2))
	{
		return false;
	}
	Var3 = { uParam0->f_11 };
	iVar5 = uParam0->f_2;
	iVar6 = PLAYER::PLAYER_ID();
	if (iVar5 == iVar6)
	{
		return false;
	}
	iVar7 = iVar5;
	iVar8 = func_148(iVar7);
	if (func_149(iVar7))
	{
		iVar9 = func_150(iVar8);
		if (iVar9 == 15 || iVar9 == 10)
		{
			if (func_151(iVar8, iVar0))
			{
				return true;
			}
		}
	}
	if (Global_1289628[iVar7 /*19*/].f_8 & 16 != 0 || Global_1289627 & 32 != 0)
	{
		return false;
	}
	if (Global_1289628[iVar7 /*19*/].f_8 & 2 != 0 || Global_1289627 & 4 != 0)
	{
		if (GANG::NETWORK_GET_GANG_ID(iVar6) == GANG::NETWORK_GET_GANG_ID(iVar5))
		{
			return false;
		}
	}
	Var10 = { func_152(iVar5) };
	if (Global_1289628[iVar7 /*19*/].f_8 & 4 != 0 || Global_1289627 & 8 != 0)
	{
		if (func_153(Var10, Var3))
		{
			return false;
		}
	}
	if (Global_1289628[iVar7 /*19*/].f_8 & 8 != 0 || Global_1289627 & 16 != 0)
	{
		if (NETWORK::NETWORK_IS_FRIEND(&Var3))
		{
			return false;
		}
	}
	return true;
}

bool func_108(int iParam0, int iParam1, var uParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	iVar3 = -1;
	iVar4 = (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) - 1);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		iVar1 = iVar2;
		iVar0 = AITRANSPORT::_GET_PED_IN_TRANSPORT_SEAT(iParam0, iVar1);
		if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
		}
		else if (iVar0 == iParam1)
		{
			*uParam2 = iVar1;
			return true;
		}
		iVar2++;
	}
	return false;
}

void func_109(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_108(iParam0, iVar0, &uVar1))
	{
		return;
	}
	if (AITRANSPORT::IS_PED_EXITING_TRANSPORT(iVar0, iParam0))
	{
		return;
	}
	Var2.f_5 = 2f;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

void func_110(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PED::_GET_ACTIVE_ANIMAL_OWNER(iParam1);
	if (ENTITY::IS_ENTITY_A_PED(iVar0))
	{
		iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
		if (iVar1 == iParam0)
		{
			return;
		}
	}
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam1);
		return;
	}
	PED::SET_PED_OWNS_ANIMAL(iParam0, iParam1, false);
}

bool func_111(var uParam0, int iParam1)
{
	if (uParam0->f_2 != iParam1->f_1)
	{
		return false;
	}
	return true;
}

void func_112(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 4);
	}
}

void func_113(var uParam0)
{
	if (!func_8(*uParam0, 4))
	{
		func_13(uParam0, 2);
	}
}

void func_114(var uParam0, var uParam1)
{
	if (func_4(&(uParam0->f_13)))
	{
		func_5(&(uParam0->f_13));
	}
	if (func_4(&(uParam0->f_16)))
	{
		func_5(&(uParam0->f_16));
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		func_154(uParam0, 0f, 0f, 0f);
	}
	if (!func_14(uParam0))
	{
		return;
	}
	if (func_34(4, uParam0->f_2))
	{
		return;
	}
	TELEMETRY::_TELEMETRY_PERSONAL_VEHICLE_WAGON(1.124439E+21f, &(uParam1->f_2), 0);
	func_67(100);
	func_155(4);
}

void func_115(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	var uVar6;

	iVar0 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	iVar1 = PLAYER::PLAYER_ID();
	iVar2 = PLAYER::PLAYER_PED_ID();
	iVar3 = uParam0->f_2;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return;
	}
	iVar4 = iParam1->f_1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar4))
	{
		return;
	}
	if (iVar3 != iVar4)
	{
		return;
	}
	bVar5 = false;
	if (iVar1 == iVar3)
	{
		bVar5 = true;
	}
	if (bVar5 && !bParam2)
	{
		return;
	}
	if (!func_108(iVar0, iVar2, &uVar6))
	{
		return;
	}
	func_156(iVar0);
	if (!bVar5)
	{
		if (func_16())
		{
			func_17(80, 1);
		}
	}
}

void func_116(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = uParam0->f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return;
	}
	iVar3 = iParam1->f_1;
	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar3))
	{
		return;
	}
	if (iVar0 == iVar3)
	{
		return;
	}
	if (iVar2 != PLAYER::_GET_VEHICLE_OWNED_BY_PLAYER(iVar3))
	{
		return;
	}
	if (!func_108(iVar2, iVar1, &uVar4))
	{
		return;
	}
	func_156(iVar2);
}

bool func_117(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_118(struct<2> Param0)
{
	if (!func_157(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_158(Param0))
	{
		return false;
	}
	return true;
}

struct<2> func_119()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_159(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_159(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_120(int iParam0, bool bParam1)
{
	int iVar0;

	if (!Global_1149417.f_5568)
	{
		return false;
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
	if (func_106(Global_1101558[iVar0 /*38*/].f_35, 2))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_160())
		{
			return true;
		}
	}
	if (func_161(Global_1056554[iVar0 /*491*/].f_2))
	{
		return true;
	}
	return false;
}

void func_121(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

bool func_122(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_123(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && iParam1 == -982726.7f) && func_162(bParam0, 8.497754E-37f))
	{
		iParam1 = 8.497754E-37f;
	}
	if (func_163(bParam0) || func_164(bParam0, 2.791187f))
	{
		return func_166(func_165(bParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_127(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_124(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_167() == 0)
	{
		return func_168(iParam0);
	}
	return iParam0 <= func_169();
}

int func_125(bool bParam0)
{
	vector3 vVar0;

	if (!func_122(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_126()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_127(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_122(bParam0, 0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_170(bParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

int func_128(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_122(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_125(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_171(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_172(bParam0, 0);
	}
	if (func_173(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_175(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_174(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

bool func_129(bool bParam0)
{
	if (func_167() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_174(bParam0));
}

bool func_130(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_122(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_173(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_176(bParam0, iParam1, iParam2, iParam3, bParam4);
	}
	Var1 = { func_177(bParam0, bParam4, 0) };
	Var6 = { func_178(bParam0, Var1, Var1.f_4, bParam4) };
	return func_179(bParam0, &Var6, &Var1, iParam1, iParam2, iParam3, bParam4);
}

bool func_131(int iParam0)
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

int func_132(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_180(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_182(func_181(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_183(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

void func_133(int iParam0, struct<17> Param1)
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

char* func_134(int iParam0)
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

bool func_135(int iParam0)
{
	return func_184(Global_1290256.f_11.f_723[iParam0]);
}

int func_136(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

float func_137()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_138(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_139(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_140(var uParam0)
{
	return func_36(*uParam0, 2);
}

bool func_141()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

int func_142(var uParam0, float fParam1, float fParam2, float fParam3, float fParam4)
{
	var uVar0;
	vector3 vVar1;
	vector3 vVar4;
	int iVar7;
	int iVar8;

	vVar4 = { func_185(uParam0) };
	if (!func_186(uParam0))
	{
		return 2;
	}
	if (func_14(uParam0))
	{
		if (func_187(uParam0, &uVar0, fParam2) || BUILTIN::VDIST(vVar4, ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) <= fParam3)
		{
			return 1;
		}
		if (func_188(uParam0, 10f))
		{
			return 2;
		}
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		if (func_189(uParam0, vVar4, &vVar1))
		{
			if (!func_154(uParam0, vVar1))
			{
			}
			else
			{
				vVar4 = { vVar1 };
			}
		}
		if (func_190(vVar4))
		{
			if (func_191(uParam0, 10f) == 2)
			{
				return 2;
			}
		}
		else if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vVar4))
		{
			TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION_2(uParam0->f_3, vVar4, fParam1, 944.0236f, 2, fParam4, fParam3);
		}
		else if (func_191(uParam0, 10f) == 2)
		{
			return 2;
		}
	}
	else
	{
		iVar7 = NETWORK::VEH_TO_NET(uParam0->f_3);
		if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(iVar7))
		{
		}
		else
		{
			iVar8 = NETWORK::_NETWORK_GET_PLAYER_OWNER_OF_NETWORK_ID(iVar7);
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar8))
			{
				if (func_191(uParam0, 10f) == 2)
				{
					return 2;
				}
			}
		}
	}
	return 0;
}

void func_143(var uParam0)
{
	if (MAP::DOES_BLIP_EXIST(uParam0->f_1))
	{
		MAP::REMOVE_BLIP(&(uParam0->f_1));
	}
}

bool func_144(int iParam0, bool bParam1)
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

int func_145(int iParam0)
{
	if (!STREAMING::IS_MODEL_VALID(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case joaat("HUNTERCART01"):
			return -9.122431E+18f;
		case joaat("WAGONARMOURED01X"):
			return 2.307366E+13f;
		default:
			break;
	}
	return 0;
}

bool func_146(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_122(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_192(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

char* func_147(int iParam0)
{
	struct<8> Var0;

	if (iParam0 == -1)
	{
		return "";
	}
	func_193();
	Global_1903834.f_106.f_2 = 1.432965E+08f;
	Global_1903834.f_106.f_3 = func_194(iParam0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&Var0, &(Global_1903834.f_106)))
	{
		return "";
	}
	return func_195(Var0);
}

var func_148(int iParam0)
{
	return Global_1283715[iParam0 /*2*/];
}

bool func_149(int iParam0)
{
	return Global_1283715[iParam0 /*2*/].f_1;
}

int func_150(int iParam0)
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

bool func_151(int iParam0, int iParam1)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	float fVar5;

	iVar0 = func_150(iParam0);
	vVar1 = { Global_1051832.f_92[iVar0 /*75*/].f_3 };
	if (iParam0 == 154)
	{
		vVar1 = { func_196(PLAYER::GET_PLAYER_INDEX()) };
	}
	if (func_190(vVar1))
	{
		return false;
	}
	fVar4 = func_197(iParam0);
	if ((iVar0 == 10 || iVar0 == 15) || iVar0 == 29)
	{
		fVar5 = func_198(iParam1, vVar1, 0);
		if (fVar5 < fVar4)
		{
			return true;
		}
	}
	else if (iVar0 == 2)
	{
		if (func_198(iParam1, vVar1, 0) < fVar4)
		{
			return true;
		}
	}
	return false;
}

struct<2> func_152(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

bool func_153(var uParam0, var uParam1, var uParam2, var uParam3)
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

bool func_154(var uParam0, vector3 vParam1)
{
	if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_3))
	{
		return false;
	}
	if (!DECORATOR::DECOR_SET_INT(uParam0->f_3, "SummonPosXY", func_199(vParam1)))
	{
		return false;
	}
	if (!DECORATOR::DECOR_SET_FLOAT(uParam0->f_3, "SummonPosZ", vParam1.z))
	{
		return false;
	}
	return true;
}

void func_155(int iParam0)
{
	int iVar0;

	iVar0 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	Global_1289628[iVar0 /*19*/].f_10 = (Global_1289628[iVar0 /*19*/].f_10 || iParam0);
}

void func_156(int iParam0)
{
	int iVar0;
	var uVar1;
	struct<7> Var2;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false))
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	if (!func_108(iParam0, iVar0, &uVar1))
	{
		return;
	}
	Var2.f_5 = 2f;
	Var2.f_6 = 1;
	Var2.f_3 = iVar0;
	Var2.f_4 = iParam0;
	AITRANSPORT::TASK_EXIT_TRANSPORT(&Var2);
}

bool func_157(int iParam0)
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

int func_158(int iParam0)
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

struct<2> func_159(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_160()
{
	if (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f)
	{
		return true;
	}
	return false;
}

bool func_161(int iParam0)
{
	int iVar0;

	switch (iParam0)
	{
		case 6:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Global_1206482.f_78[iVar0 /*20*/].f_2 && Global_1206482.f_78[iVar0 /*20*/].f_1 == 2)
				{
					return true;
				}
				iVar0++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887.f_7)
			{
				if (func_200(Global_1108965.f_775.f_28))
				{
					if (!Global_1108965.f_775.f_19)
					{
						return false;
					}
				}
				if (!func_201())
				{
					return true;
				}
			}
			else if (Global_1048579 && !Global_1572887.f_10)
			{
				if (PLAYER::IS_PLAYER_CONTROL_ON(Global_1295619.f_149[Global_1295619]))
				{
					return true;
				}
				if (func_92(&(Global_1102813.f_4), 1, 5))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

bool func_162(bool bParam0, int iParam1)
{
	if (!func_122(bParam0, 0))
	{
		return false;
	}
	if (func_163(bParam0) || func_164(bParam0, 2.791187f))
	{
		return func_202(func_165(bParam0, 0), iParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, iParam1) > 0;
}

bool func_163(bool bParam0)
{
	if (func_164(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_164(bool bParam0, int iParam1)
{
	if (!func_122(bParam0, 0))
	{
		return func_204(func_203(bParam0), iParam1);
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

bool func_165(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_122(bParam0, 0))
	{
		return func_205(func_203(bParam0), bParam1);
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

int func_166(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_206(bParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

int func_167()
{
	return Global_1572887.f_14;
}

bool func_168(int iParam0)
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

int func_169()
{
	if (func_167() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

void func_170(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_207((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_171(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_122(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_125(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_164(bParam0, 9.811189E+11f))
	{
		func_208(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_172(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_209(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_211(&Var0, func_210(0));
	}
	if (!func_212(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_213(iVar18);
	return iVar19;
}

int func_173(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_214(func_203(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

int func_174(bool bParam0)
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

struct<4> func_175(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_177(bParam0, bParam1, 0) };
	return func_178(bParam0, Var0, Var0.f_4, bParam1);
}

int func_176(bool bParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_215(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_173(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_129(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_216(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_217(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_132(7.184882E+22f, &Var65, 1);
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
			Var82 = iParam3;
			Var82.f_7 = iParam2;
			func_133(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_174(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_177(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_218(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_125(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_178(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_210(bParam1) };
			if (iParam2 && func_219(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_220(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_220(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_221(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_222(bParam1) };
			switch (func_207(bParam0))
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
			if (func_223(bParam0, -2.580501E-27f))
			{
				Var0 = { func_178(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_223(bParam0, -4.220332E-15f))
			{
				Var0 = { func_178(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_178(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_223(bParam0, -3.171238E-21f))
			{
				Var0 = { func_178(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_224(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_223(bParam0, -3.171238E-21f))
			{
				Var0 = { func_178(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

struct<4> func_178(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_122(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_174(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

bool func_179(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_215(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_224(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_129(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_167() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_132(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = iParam5;
				Var32.f_7 = iParam4;
				func_133(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_174(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_180(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_225(iParam1->f_8, iParam0, iVar0, 2048) || func_225(iParam1->f_8, iParam0, iVar0, 32768)) || func_225(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_225(iParam1->f_8, iParam0, iVar0, 4) || func_225(iParam1->f_8, iParam0, iVar0, 256)) || func_225(iParam1->f_8, iParam0, iVar0, 65536)) || func_225(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_225(iParam1->f_8, iParam0, iVar0, 1) || func_225(iParam1->f_8, iParam0, iVar0, 8)) || func_225(iParam1->f_8, iParam0, iVar0, 65536)) || func_225(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_225(iParam1->f_8, iParam0, iVar0, 1) || func_225(iParam1->f_8, iParam0, iVar0, 16)) || func_225(iParam1->f_8, iParam0, iVar0, 2)) || func_225(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_225(iParam1->f_8, iParam0, iVar0, 8) || func_225(iParam1->f_8, iParam0, iVar0, 4096)) || func_225(iParam1->f_8, iParam0, iVar0, 256)) || func_225(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_181(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_182(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_226(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_226(iParam1, 2, 0, 0);
	return -1;
}

int func_183(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_226(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_184(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return UIFEED::_UI_FEED_GET_MESSAGE_STATE(iParam0) == 4;
}

Vector3 func_185(var uParam0)
{
	int iVar0;
	vector3 vVar1;

	iVar0 = DECORATOR::DECOR_GET_INT(uParam0->f_3, "SummonPosXY");
	if (iVar0 == 0)
	{
		return 0f, 0f, 0f;
	}
	vVar1 = { func_227(iVar0) };
	vVar1.f_2 = DECORATOR::DECOR_GET_FLOAT(uParam0->f_3, "SummonPosZ");
	return vVar1;
}

bool func_186(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_3))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(uParam0->f_3))
	{
		return false;
	}
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(uParam0->f_2)))
	{
		return false;
	}
	return true;
}

bool func_187(var uParam0, var uParam1, float fParam2)
{
	int iVar0;

	*uParam1 = 0;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(uParam0->f_2))
	{
		return true;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0) || ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iVar0, true, false), ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false)) < fParam2)
	{
		return true;
	}
	if (func_66(uParam0->f_3))
	{
		return true;
	}
	return false;
}

bool func_188(var uParam0, float fParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = PLAYER::GET_PLAYER_PED(uParam0->f_2);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		iVar1 = func_228(uParam0->f_3, iVar0, 0.707f);
		if (iVar1 == 1 && ENTITY::GET_ENTITY_SPEED(uParam0->f_3) > 0f)
		{
			if (!func_4(&(uParam0->f_16)))
			{
				func_44(&(uParam0->f_16));
			}
		}
		else if (func_4(&(uParam0->f_16)))
		{
			func_5(&(uParam0->f_16));
		}
	}
	if (!func_4(&(uParam0->f_16)))
	{
		return false;
	}
	if (!func_45(&(uParam0->f_16), fParam1))
	{
		return false;
	}
	return true;
}

bool func_189(var uParam0, vector3 vParam1, Vector3* vParam4)
{
	float fVar0;

	if (!func_229(uParam0->f_2, uParam0->f_3, vParam4, &fVar0))
	{
		return false;
	}
	if (BUILTIN::VDIST(*vParam4, vParam1) >= 1092616192)
	{
		return true;
	}
	if (!TASK::_0x583AE9AF9CEE0958(uParam0->f_3, vParam1))
	{
		if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(uParam0->f_3, true, false), vParam1) > 5f)
		{
			return true;
		}
	}
	return false;
}

bool func_190(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_191(var uParam0, float fParam1)
{
	if (ENTITY::GET_ENTITY_SPEED(uParam0->f_3) == 0f)
	{
		if (!func_4(&(uParam0->f_13)))
		{
			func_44(&(uParam0->f_13));
		}
		else if (func_230(&(uParam0->f_13), fParam1))
		{
			return 2;
		}
	}
	else if (func_4(&(uParam0->f_13)))
	{
		func_5(&(uParam0->f_13));
	}
	return 0;
}

int func_192(bool bParam0, bool bParam1)
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

void func_193()
{
	Global_1903834.f_106 = Global_1072759.f_28418[49 /*4*/].f_3;
	Global_1903834.f_106.f_1 = 0;
	Global_1903834.f_106.f_2 = 0;
	Global_1903834.f_106.f_3 = 0;
	Global_1903834.f_106.f_4 = 0;
}

int func_194(int iParam0)
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

char* func_195(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

Vector3 func_196(int iParam0)
{
	return ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(iParam0), false, false);
}

int func_197(int iParam0)
{
	int iVar0;

	iVar0 = func_150(iParam0);
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

float func_198(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

var func_199(struct<2> Param0, var uParam2)
{
	var uVar0;

	uVar0 = (BUILTIN::ROUND(MISC::ABSF(Param0)) & 32767 || BUILTIN::SHIFT_LEFT(BUILTIN::ROUND(MISC::ABSF(Param0.f_1)) & 32767, 15));
	if (Param0 > 0f)
	{
		uVar0 = (uVar0 || 2f);
	}
	if (Param0.f_1 > 0f)
	{
		uVar0 = (uVar0 || 0f);
	}
	return uVar0;
}

bool func_200(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

bool func_201()
{
	if (Global_1572887.f_72.f_40 >= 10 && Global_1572887.f_72.f_40 <= 14)
	{
		return true;
	}
	return false;
}

bool func_202(bool bParam0, int iParam1, bool bParam2)
{
	if (!func_231(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_232(bParam0, iParam1);
	}
	return true;
}

bool func_203(bool bParam0)
{
	return bParam0;
}

int func_204(bool bParam0, int iParam1)
{
	if (!func_214(bParam0, 2))
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

bool func_205(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_214(bParam0, 2))
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

bool func_206(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*uParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_231(bParam0))
	{
		return false;
	}
	*uParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, iParam1);
	if (*uParam3 == 0)
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
	while (iVar0 < *uParam3)
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
		func_233(bParam0, iParam1, uParam2, *uParam3);
	}
	return true;
}

int func_207(bool bParam0)
{
	struct<2> Var0;

	if (!func_122(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

void func_208(bool bParam0, var uParam1, var uParam2)
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

struct<18> func_209(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

struct<4> func_210(bool bParam0)
{
	int iVar0;

	iVar0 = func_174(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_178(8.681942E-06f, func_218(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_178(8.681942E-06f, func_218(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_178(8.681942E-06f, func_218(bParam0), -1.942248E+12f, 0);
}

void func_211(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_212(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_174(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_213(int iParam0)
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

bool func_214(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

bool func_215(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_216(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_173(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_234(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_217(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_178(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_218(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_174(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_178(2.982335E+09f, func_68(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_178(2.982335E+09f, func_68(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_178(2.982335E+09f, func_68(), -5.45926E-19f, bParam0);
}

int func_219(bool bParam0, bool bParam1)
{
	if (func_207(bParam0) == 4.161967E+25f)
	{
		return 0;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_235();
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_220(bool bParam0, var uParam1, float fParam2, int iParam3, float fParam4)
{
	return func_236(bParam0, *uParam1, fParam2, iParam3, 1, fParam4) > 0;
}

bool func_221(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_237(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_222(bool bParam0)
{
	int iVar0;

	iVar0 = func_174(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_178(3.507197E-29f, func_218(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_178(3.507197E-29f, func_218(bParam0), 12999093, 0);
}

bool func_223(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_207(bParam0);
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
			if (func_238(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_224(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_239(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_225(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_106(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_226(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_240(iParam0, iParam1, iParam2, iParam3);
}

Vector3 func_227(int iParam0)
{
	vector3 vVar0;
	int iVar3;
	int iVar4;

	iVar3 = iParam0 & 32767;
	iVar4 = BUILTIN::SHIFT_RIGHT(iParam0, 15) & 32767;
	vVar0.x = BUILTIN::TO_FLOAT(iVar3);
	vVar0.f_1 = BUILTIN::TO_FLOAT(iVar4);
	if ((iParam0 && 2f) == 0)
	{
		vVar0.x = (vVar0.x * -1f);
	}
	if ((iParam0 && 0f) == 0)
	{
		vVar0.f_1 = (vVar0.y * -1f);
	}
	return vVar0;
}

int func_228(int iParam0, int iParam1, float fParam2)
{
	vector3 vVar0;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam1, false, false) };
	return func_241(iParam0, vVar0, fParam2);
}

bool func_229(int iParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	int iVar0;
	vector3 vVar1;
	vector3 vVar4;

	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		return false;
	}
	iVar0 = PLAYER::GET_PLAYER_PED(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return false;
	}
	vVar1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true, false) };
	vVar4 = { ENTITY::GET_ENTITY_COORDS(iParam1, true, false) };
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar1, vVar4, 1, vParam2, fParam3, 1, 3f, 0))
	{
		return true;
	}
	if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(vVar1, vVar4, 0, vParam2, fParam3, 1, 3f, 0))
	{
		return true;
	}
	if (PATHFIND::GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(vVar1, vParam2, fParam3, 1, 3f, 0f))
	{
		return true;
	}
	if (!func_242(vVar1, vVar4, vParam2, fParam3))
	{
		return true;
	}
	return false;
}

bool func_230(var uParam0, float fParam1)
{
	if (func_45(uParam0, fParam1))
	{
		func_5(uParam0);
		return true;
	}
	return false;
}

bool func_231(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

bool func_232(bool bParam0, int iParam1)
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

void func_233(bool bParam0, int iParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_207((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_234(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_243(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_68() };
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

int func_235()
{
	if (func_244(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

int func_236(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_122(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_173(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_178(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_174(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_237(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_174(0);
	*iParam1 = { func_178(bParam0, func_210(0), fParam3, 0) };
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

bool func_238(bool bParam0, int iParam1, int iParam2)
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

int func_239(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return 0;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_174(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return 0;
	}
	return 1;
}

void func_240(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_245(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_241(int iParam0, vector3 vParam1, float fParam4)
{
	vector3 vVar0;
	vector3 vVar3;
	vector3 vVar6;
	float fVar9;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
		vVar3 = { ENTITY::GET_ENTITY_FORWARD_VECTOR(iParam0) };
	}
	vVar6 = { vParam1 - vVar0 };
	fVar9 = func_246(vVar3, vVar6);
	if (MISC::ABSF(fVar9) > fParam4)
	{
		if (fVar9 > 0f)
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	if (func_247(vVar0, vVar0 + vVar3, vParam1))
	{
		return 3;
	}
	return 2;
}

bool func_242(vector3 vParam0, vector3 vParam3, Vector3* vParam6, float* fParam7)
{
	vector3 vVar0;
	vector3 vVar3;
	var uVar6;
	var uVar7;
	var uVar8;

	if (func_190(vParam0))
	{
		return false;
	}
	if (PATHFIND::GET_CLOSEST_ROAD(vParam0, 2f, 1, &vVar0, &vVar3, &uVar6, &uVar7, &uVar8, true))
	{
		*vParam6 = { Vector(1056964608, 1056964608, 1056964608) * vVar0 + vVar3 };
		if (BUILTIN::VDIST(vParam3, vVar0) < BUILTIN::VDIST(vParam3, vVar3))
		{
			*fParam7 = func_248(vVar3, vVar0, 1);
		}
		else
		{
			*fParam7 = func_248(vVar0, vVar3, 1);
		}
		return true;
	}
	return false;
}

bool func_243(var uParam0)
{
	if (!func_249(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_244(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_250(iParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, iParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_174(bParam1), iParam0, bParam3);
}

void func_245(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_251(&(uParam0->f_4));
}

float func_246(vector3 vParam0, vector3 vParam3)
{
	float fVar0;

	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	fVar0 = BUILTIN::VMAG(vParam0);
	if (fVar0 != 0f)
	{
		vParam0.x = (vParam0.x / fVar0);
		vParam0.f_1 = (vParam0.y / fVar0);
	}
	fVar0 = BUILTIN::VMAG(vParam3);
	if (fVar0 != 0f)
	{
		vParam3.x = (vParam3.x / fVar0);
		vParam3.f_1 = (vParam3.y / fVar0);
	}
	return ((vParam0.x * vParam3.x) + (vParam0.y * vParam3.y));
}

bool func_247(struct<2> Param0, var uParam2, struct<2> Param3, Vector3 vParam5, struct<2> Param6, var uParam8)
{
	return (((Param3 - Param0) * (Param6.f_1 - Param0.f_1)) - ((Param3.f_1 - Param0.f_1) * (Param6 - Param0))) > 0f;
}

float func_248(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
{
	float fVar0;
	float fVar1;
	float fVar2;

	fVar1 = (Param3 - Param0);
	fVar2 = (Param3.f_1 - Param0.f_1);
	if (fVar2 != 0f)
	{
		fVar0 = MISC::ATAN2(fVar1, fVar2);
	}
	else if (fVar1 < 0f)
	{
		fVar0 = -1028390912; /* Float: -90f */
	}
	else
	{
		fVar0 = 1119092736; /* Float: 90f */
	}
	if (iParam6 == 1)
	{
		fVar0 = (fVar0 * -1f);
		if (fVar0 < 0f)
		{
			fVar0 = (fVar0 + 1135869952);
		}
	}
	return fVar0;
}

bool func_249(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_250(int iParam0)
{
	return WEAPON::_IS_AMMO_VALID(iParam0);
}

void func_251(var uParam0)
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

