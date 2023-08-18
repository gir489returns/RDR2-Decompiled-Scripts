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
	bool bLocal_20 = false;
	struct<13> Local_21 = { 192, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_34 = 0;
	var uLocal_35 = 0;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = -1;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = -1;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 4;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	var uLocal_57 = 4;
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
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
	var uScriptParam_5 = 0;
	var uScriptParam_6 = 0;
	var uScriptParam_7 = 0;
	var uScriptParam_8 = 0;
	var uScriptParam_9 = 0;
#endregion

void __EntryFunction__()
{
	bool bVar0;
	bool bVar1;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	if (((func_1(0, 0, 1) && !func_2()) || func_3(0)) || func_4(0, 0))
	{
		Global_1913621.f_1582 = 0;
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
	bVar0 = ScriptParam_0.f_3;
	if (ScriptParam_0.f_4)
	{
		Local_21.f_12 = 0;
		func_5(&Local_21, 2);
	}
	else
	{
		Local_21.f_12 = -9.58507E-21f;
		func_6(&Local_21, 2);
	}
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		iLocal_19 = 3;
	}
	while (true)
	{
		if (func_7())
		{
			iLocal_19 = 3;
		}
		PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.46932E+34f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -4.93116E-14f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.163647E-18f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.877166E+07f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -3.110935E+22f, false);
		switch (iLocal_19)
		{
			case 0:
				if (Local_21.f_12 == -9.58507E-21f)
				{
					NETWORK::RESERVE_NETWORK_CLIENT_MISSION_OBJECTS(2);
				}
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
				func_5(&Local_21, 8);
				func_5(&Local_21, 16);
				func_8(&Local_21, 2);
				iLocal_19 = 2;
				break;
			case 1:
				if ((!TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f)) && !func_9(Global_33))
				{
					PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
					if (!TASK::PED_HAS_USE_SCENARIO_TASK(Global_33))
					{
						if (func_9(Global_33))
						{
							WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
							bLocal_20 = true;
							iLocal_19 = 2;
						}
						else if (!PED::IS_PED_ON_MOUNT(Global_33) && PED::IS_PED_ON_FOOT(Global_33))
						{
							if (bVar0)
							{
								iLocal_19 = 3;
							}
							else if (!func_10(Global_33, 0.002842281f))
							{
								bVar1 = true;
								if (func_11(0) || func_11(1))
								{
									bVar1 = false;
								}
								if (bVar1)
								{
									PED::_GIVE_PED_HASH_COMMAND(Global_33, -4.522967E-32f, 2f);
								}
								if (PED::IS_PED_MALE(Global_33))
								{
									TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_33, -1.854193E-06f, 0, true, 8.109786E-30f, -1f, false);
								}
								else
								{
									TASK::TASK_START_SCENARIO_IN_PLACE_HASH(Global_33, -1.854193E-06f, 0, true, -5.427489E-14f, -1f, false);
								}
							}
						}
					}
				}
				else
				{
					bLocal_20 = true;
					iLocal_19 = 2;
				}
				break;
			case 2:
				func_12(&Local_21, 0);
				if (func_13(&Local_21) == 0)
				{
					iLocal_19 = 3;
				}
				else if (func_13(&Local_21) == 12)
				{
					if (((!bLocal_20 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f)) && !func_9(Global_33))
					{
						iLocal_19 = 1;
					}
					else
					{
						bLocal_20 = true;
					}
				}
				break;
			case 3:
				func_14(&Local_21, 0, 1);
				SCRIPTS::TERMINATE_THIS_THREAD();
				break;
		}
		BUILTIN::WAIT(0);
	}
}

bool func_1(int iParam0, bool bParam1, bool bParam2)
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
		if (func_15())
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
	if (iParam0 == 0 && func_17(func_16(0)))
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
	switch (func_18(func_16(0)))
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

bool func_2()
{
	return Global_1913621.f_1578;
}

bool func_3(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

bool func_4(bool bParam0, bool bParam1)
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

void func_5(var uParam0, int iParam1)
{
	func_19(uParam0, iParam1);
}

void func_6(var uParam0, int iParam1)
{
	func_20(uParam0, iParam1);
}

bool func_7()
{
	if (func_4(0, 0))
	{
		return true;
	}
	if (func_3(0))
	{
		return true;
	}
	if (func_1(0, 0, 1) && !func_2())
	{
		return true;
	}
	if (func_21())
	{
		return true;
	}
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_HOGTIED(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_LASSOED(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return true;
	}
	if (PED::IS_PED_ENTERING_ANY_TRANSPORT(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	if ((MISC::GET_FRAME_COUNT() % 10) == 0)
	{
		if (func_22())
		{
			return true;
		}
	}
	if (func_23())
	{
		return true;
	}
	if (bLocal_20)
	{
		if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
		{
			if (!func_9(PLAYER::PLAYER_PED_ID()))
			{
				return true;
			}
		}
		else if (!TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID(), 1) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f))
		{
			return true;
		}
	}
	if (PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return true;
	}
	return false;
}

void func_8(var uParam0, int iParam1)
{
	if (uParam0->f_11 != iParam1)
	{
		uParam0->f_11 = iParam1;
		func_24(uParam0);
	}
}

bool func_9(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::IS_PED_FULLY_ON_MOUNT(iParam0, true);
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
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

int func_11(int iParam0)
{
	bool bVar0;

	bVar0 = false;
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_33, &bVar0, true, iParam0, false))
	{
		if (func_25(bVar0, 0))
		{
			if (WEAPON::_IS_WEAPON_TWO_HANDED(bVar0) || func_26(bVar0))
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_12(var uParam0, int iParam1)
{
	var uVar0[1];
	float fVar2;
	vector3 vVar3;
	int iVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	int iVar15;

	uVar0[0] = uParam0->f_1[1];
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || Global_1940186.f_6)
	{
		func_14(uParam0, 0, 1);
	}
	PED::SET_PED_CAN_PLAY_AMBIENT_ANIMS(Global_33, false);
	PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(Global_33, 0, 1);
	if (func_27() != -1 && func_28())
	{
		if (func_29(uParam0->f_1[0], 0))
		{
			func_30(uParam0);
			func_24(uParam0);
		}
		return;
	}
	if (func_31(uParam0, 256))
	{
		HUD::_ENABLE_HUD_CONTEXT_THIS_FRAME(-9.407153E+21f);
	}
	PAD::DISABLE_CONTROL_ACTION(0, -1.068381E+13f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.46932E+34f, false);
	CAM::DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE();
	switch (func_13(uParam0))
	{
		case 2:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_32(uParam0))
			{
				func_33(uParam0);
				func_34(uParam0);
				func_35(uParam0);
			}
			if (func_36(uParam0))
			{
				func_8(uParam0, 3);
			}
			break;
		case 3:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (func_27() == 0 && CAM::IS_INTERPOLATING_FROM_SCRIPT_CAMS())
			{
				func_30(uParam0);
				return;
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
				if (func_37())
				{
					func_38(0);
				}
			}
			if ((func_31(uParam0, 16) || func_39(uParam0->f_1[0], 1)) || func_31(uParam0, 32))
			{
				func_40(uParam0);
			}
			break;
		case 4:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_41(uParam0))
			{
				func_5(uParam0, 1024);
				func_8(uParam0, 5);
			}
			break;
		case 5:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_42(uParam0))
			{
				func_8(uParam0, 6);
			}
			break;
		case 6:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_43(uParam0))
			{
				func_8(uParam0, 7);
			}
			break;
		case 7:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_45(uParam0, 0))
			{
				if (func_46(uParam0, func_31(uParam0, 65536)) || ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f)))
				{
					func_6(uParam0, 65536);
					func_8(uParam0, 8);
				}
				else if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
			}
			break;
		case 15:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (!func_31(uParam0, 1024))
			{
				func_8(uParam0, 4);
				return;
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_47(uParam0))
			{
				func_46(uParam0, 1);
				func_8(uParam0, 8);
			}
			break;
		case 8:
			PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f))
			{
				if (UISTATEMACHINE::UI_STATE_MACHINE_CAN_REQUEST_TRANSITION(-3.556355E-20f))
				{
					Global_1913621.f_1580 = 0;
					func_8(uParam0, 10);
				}
			}
			break;
		case 9:
			if (!func_31(uParam0, 256))
			{
				PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
			}
			if (UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(7.215231E-38f) || UIAPPS::IS_UIAPP_RUNNING_BY_HASH(7.215231E-38f))
			{
				return;
			}
			if (func_32(uParam0))
			{
				func_44(uParam0);
				func_35(uParam0);
				return;
			}
			if (func_45(uParam0, 1))
			{
				func_8(uParam0, 10);
			}
			break;
		case 10:
			func_48(0);
			if (func_32(uParam0))
			{
				func_49(uParam0);
				func_35(uParam0);
			}
			if (func_50(uParam0) || func_51(uParam0))
			{
				return;
			}
			if (Global_1913621.f_1580)
			{
				Global_1913621.f_1580 = 0;
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				func_52(uParam0);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_55(uParam0->f_1[2], 1) || !UIAPPS::IS_UIAPP_RUNNING_BY_HASH(-3.556355E-20f))
			{
				if (func_31(uParam0, 16))
				{
					func_8(uParam0, 18);
				}
				else
				{
					func_56(uParam0, 0);
					func_57("Exit", "SSCRFT_Sounds", 1);
					if (func_31(uParam0, 32))
					{
						func_6(uParam0, 32);
						func_8(uParam0, 1);
					}
					else
					{
						func_8(uParam0, 3);
					}
				}
			}
			else if (func_39(uParam0->f_1[7], 1))
			{
				func_58(uParam0);
			}
			else if (func_39(uParam0->f_1[1], 1))
			{
				func_59(uParam0);
			}
			else if (func_39(uParam0->f_1[3], 1))
			{
				ATTRIBUTE::STOP_ITEM_PREVIEW();
				if (func_31(uParam0, 128))
				{
					func_6(uParam0, 128);
				}
				else
				{
					func_5(uParam0, 128);
				}
				func_52(uParam0);
				func_57("toggle_craftable_all", "SSCRFT_Sounds", 1);
				uParam0->f_62 = 0;
				uParam0->f_63 = 0;
				func_53(uParam0, 0, 0);
				func_54(uParam0->f_1[5], 0, 1, 1);
				func_8(uParam0, 9);
			}
			else if (func_60(uParam0->f_1[5], 0, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Left", "SSCRFT_Sounds", 1);
					func_61(uParam0, 0);
				}
			}
			else if (func_60(uParam0->f_1[5], 1, 1))
			{
				if (func_31(uParam0, 4096))
				{
					func_57("Nav_Right", "SSCRFT_Sounds", 1);
					func_61(uParam0, 1);
				}
			}
			else if (func_55(uParam0->f_1[6], 1))
			{
				func_57("toggle_ingredients_effects", "SSCRFT_Sounds", 1);
				func_62(uParam0, 1);
			}
			else if (func_39(uParam0->f_1[8], 1))
			{
				func_57("toggle_craftable_all", "SSCRFT_Sounds", 1);
				if (func_31(uParam0, 131072))
				{
					func_6(uParam0, 131072);
				}
				else
				{
					func_5(uParam0, 131072);
				}
				func_53(uParam0, uParam0->f_62, uParam0->f_63);
			}
			else
			{
				fVar2 = -4.222242E+09f;
				while (UIEVENTS::EVENTS_UI_IS_PENDING(fVar2))
				{
					if (UIEVENTS::EVENTS_UI_PEEK_MESSAGE(fVar2, &vVar3))
					{
						if (vVar3.x == 1.044587E-13f || vVar3.x == -8.006556E+12f)
						{
							func_63(uParam0);
						}
						else if (vVar3.x == -2.576099E-24f)
						{
							func_64(uParam0, &vVar3);
						}
						else if (vVar3.x == -4.615686E-05f)
						{
							if (vVar3.z == -3.247998E-38f)
							{
								func_59(uParam0);
							}
						}
						UIEVENTS::EVENTS_UI_POP_MESSAGE(fVar2);
					}
				}
			}
			break;
		case 11:
			PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
			PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
			break;
		case 12:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(0);
			iVar7 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO_2(Global_33);
			iVar8 = func_65(uParam0->f_62, -1.29539E-20f);
			if (iVar7 == -2.545493E-13f || iVar7 == 4.648953E+35f)
			{
				if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 4.95508E+09f))
				{
					PED::_GIVE_PED_HASH_COMMAND(Global_33, 4.95508E+09f, 6f);
					PED::_ADD_SCENARIO_TRANSITION(Global_33);
				}
				return;
			}
			if (iVar8 != -1.467368E+13f)
			{
				if ((PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.6671E+31f))
				{
					return;
				}
				if (iVar7 == -1.772429E+20f || iVar7 == 2.719026E+21f)
				{
					if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 1.652442E-15f))
					{
						PED::_GIVE_PED_HASH_COMMAND(Global_33, 1.652442E-15f, 6f);
						PED::_ADD_SCENARIO_TRANSITION(Global_33);
					}
					return;
				}
				else
				{
					WEAPON::_HIDE_PED_WEAPONS(Global_33, 2, false);
				}
				if (((((((((iVar8 == 4.66195E-24f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_49, true, false)) || (iVar8 == -0.01154436f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_51, true, false))) || (uParam0->f_70 != 0 && !STREAMING::HAS_MODEL_LOADED(uParam0->f_70))) || (iVar8 == -3.737967E+12f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_53, true, false))) || (iVar8 == 1.002948E-10f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_52, true, false))) || (iVar8 == -0.007383482f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_54, true, false))) || (iVar8 == 7.622462E-26f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_55, true, false))) || (iVar8 == -4.326644E+08f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_56, true, false))) || (iVar8 == -1.124768E-19f && !ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_57, true, false)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
			}
			else
			{
				if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(uParam0->f_50, true, false) || (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 1) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_33, 0)))
				{
					return;
				}
				else if (func_31(uParam0, 2048))
				{
					func_66(uParam0);
					func_6(uParam0, 2048);
				}
				if (iVar7 != -1.772429E+20f && iVar7 != 2.719026E+21f)
				{
					if (func_31(uParam0, 4))
					{
						if ((PED::_IS_PED_DOING_SCENARIO_TRANSITION(Global_33) || PED::_0x2DC0E8DCBD3546E9(Global_33)) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.6671E+31f))
						{
							return;
						}
						if (!PED::_GET_IS_PED_COMMAND_HASH_PRESENT(Global_33, 2.264292E-10f))
						{
							PED::_GIVE_PED_HASH_COMMAND(Global_33, 2.264292E-10f, 2f);
							PED::_ADD_SCENARIO_TRANSITION(Global_33);
						}
						return;
					}
				}
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
				func_67(uParam0, 0, &uVar0);
				func_66(uParam0);
				if (func_68(uParam0->f_1[1]))
				{
					func_69(&(uParam0->f_1[1]), 1, 1);
				}
				if (func_70(iVar8))
				{
					uParam0->f_43 = 250;
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 2f, 8.750548E+22f, 0);
					func_53(uParam0, uParam0->f_62, uParam0->f_63);
					func_72(uParam0->f_1[1], -3.423465f, 0, 1);
					func_73(uParam0->f_1[1], 10, 1, 1);
					func_73(uParam0->f_1[1], 11, 1, 1);
					func_54(uParam0->f_1[1], 0, 1, 1);
				}
				else
				{
					uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 250, 251, 1, 2f, 8.750548E+22f, 0);
					func_72(uParam0->f_1[1], -3.423465f, 0, 1);
					func_74(uParam0->f_1[1], 1, 1);
					func_73(uParam0->f_1[1], 10, 1, 1);
					func_73(uParam0->f_1[1], 11, 1, 1);
					func_54(uParam0->f_1[1], 0, 1, 1);
				}
				return;
			}
			if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -4.221733E+18f))
			{
				PAD::_0x5F217BC1190503D8("CRFT_BLIP_LIGHT", 0.2f);
			}
			if (func_70(iVar8))
			{
				if (!func_31(uParam0, 64))
				{
					if (func_29(uParam0->f_1[1], 0))
					{
						if (func_75(uParam0->f_1[1], 1) || PAD::IS_CONTROL_PRESSED(0, 439.9228f))
						{
							func_5(uParam0, 64);
							func_54(uParam0->f_1[1], 0, 1, 1);
							func_54(uParam0->f_1[4], 0, 1, 1);
						}
					}
				}
				if ((((((iVar8 == -0.01154436f || iVar8 == -3.737967E+12f) || iVar8 == 1.002948E-10f) || iVar8 == -0.007383482f) || iVar8 == 7.622462E-26f) || iVar8 == -4.326644E+08f) || iVar8 == -1.124768E-19f)
				{
					if (uParam0->f_70 != 0)
					{
						if ((uParam0->f_70 == 22719.83f && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -377.5547f)) || (uParam0->f_70 != 22719.83f && ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 2.735405E+34f)))
						{
							if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
								{
									OBJECT::DELETE_OBJECT(&(uParam0->f_66));
								}
								else
								{
									NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
								}
							}
							if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
							{
								if (func_76(uParam0->f_62, -7.272718E-19f) && iVar8 != -4.326644E+08f)
								{
									uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(func_77(uParam0->f_62, 0), 1, Global_34, true, 1f);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
									if (iVar8 == -1.124768E-19f)
									{
										ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_66, 0);
									}
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(uParam0->f_70, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
									ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
								}
								if (iVar8 == 1.002948E-10f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -0.007383482f || iVar8 == -1.124768E-19f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -4.326644E+08f)
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0.1f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else if (iVar8 == -0.01154436f && !PED::IS_PED_MALE(Global_33))
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
								else
								{
									ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
								}
							}
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 0.0002839294f))
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_66))
							{
								OBJECT::DELETE_OBJECT(&(uParam0->f_66));
							}
							else
							{
								NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam0->f_66);
							}
						}
						if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							if (iVar8 == -3.737967E+12f || iVar8 == 7.622462E-26f)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
							}
							else if (iVar8 == -0.007383482f)
							{
								uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-4.049688E-16f, 1, Global_34, true, 1f);
							}
							else if (iVar8 == -4.326644E+08f)
							{
								if (uParam0->f_62 == 0.0002301198f)
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(1.44377E-24f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
								else
								{
									uParam0->f_66 = OBJECT::CREATE_OBJECT(-3.582282E+25f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								}
							}
							else if (iVar8 == -1.124768E-19f)
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(4.518292E+32f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, true);
								if (iVar8 == -1.124768E-19f)
								{
									ANIMSCENE::SET_ANIM_SCENE_ENTITY(func_78(uParam0, iVar8), "DYNAMITE", uParam0->f_66, 0);
								}
							}
							else
							{
								uParam0->f_66 = OBJECT::CREATE_OBJECT(-2.056204E+15f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
							}
						}
						ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
						if (iVar8 == 1.002948E-10f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if ((iVar8 == -0.007383482f || iVar8 == -1.124768E-19f) || iVar8 == -4.326644E+08f)
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else if (iVar8 == -0.01154436f && !PED::IS_PED_MALE(Global_33))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0.5f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
						else
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_66, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 7966), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
						}
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 7.023091E+11f))
					{
						func_79(&(uParam0->f_66), &(uParam0->f_67));
					}
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 3.869416E+14f))
					{
						if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_68))
						{
							ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, true);
						}
					}
				}
				else if (iVar8 == 4.66195E-24f || iVar8 == -1.467368E+13f)
				{
					if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 0.0002839294f))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, true);
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -4.302495E+36f))
				{
					if (func_80(0) && !func_81())
					{
						func_83(uParam0->f_62, uParam0->f_63, 1, func_82(), uParam0->f_12);
						func_84(uParam0->f_62, 1, 0, 1, 0);
					}
					if (iVar8 == -4.326644E+08f)
					{
						if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
						{
							func_79(&(uParam0->f_66), &(uParam0->f_67));
						}
					}
					uParam0->f_23++;
					uParam0->f_28++;
					if ((!func_85(uParam0->f_62, uParam0->f_63, 0, func_82(), 0) || func_86(uParam0->f_62, 1, 0)) || uParam0->f_23 >= uParam0->f_27)
					{
						if (!func_80(0) || func_81())
						{
							uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
							if (uParam0->f_12 == 2.270209E+38f)
							{
								func_89(func_88(-0.1137347f, -7.825801E+22f), uParam0->f_28);
							}
							uParam0->f_28 = 0;
						}
						func_90(uParam0, iVar8, 0);
						return;
					}
				}
				if (!func_31(uParam0, 64))
				{
					if (!(func_29(uParam0->f_1[1], 0) && PAD::IS_CONTROL_PRESSED(0, 439.9228f)))
					{
						if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.520033E-17f))
						{
							if (!func_80(0) || func_81())
							{
								uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
								if (uParam0->f_12 == 2.270209E+38f)
								{
									func_89(func_88(-0.1137347f, -7.825801E+22f), uParam0->f_28);
								}
								uParam0->f_28 = 0;
							}
							func_90(uParam0, iVar8, 1);
						}
					}
				}
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, 1.223851E+08f) && uParam0->f_23 < (uParam0->f_27 - 1))
				{
					func_54(uParam0->f_1[1], 1, 1, 1);
					func_54(uParam0->f_1[4], 1, 1, 1);
					func_6(uParam0, 64);
				}
				if (ANIMSCENE::HAS_ENTITY_EXITED_ANIM_SCENE(func_78(uParam0, iVar8), "player"))
				{
					if (!func_80(0) || func_81())
					{
						uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
						if (uParam0->f_12 == 2.270209E+38f)
						{
							func_89(func_88(-0.1137347f, -7.825801E+22f), uParam0->f_28);
						}
						uParam0->f_28 = 0;
					}
					func_90(uParam0, iVar8, 0);
				}
			}
			else if (func_91(&(uParam0->f_71), (IntToFloat(uParam0->f_43) / 1148846080)))
			{
				if (!func_80(0) || func_81())
				{
					if (uParam0->f_24 == -1)
					{
						uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
						if (uParam0->f_12 == 2.270209E+38f)
						{
							func_89(func_88(-0.1137347f, -7.825801E+22f), 1);
						}
						if (uParam0->f_24 == -1)
						{
							func_90(uParam0, iVar8, 0);
						}
					}
					else if (func_92(uParam0->f_24))
					{
					}
					uParam0->f_24 = -1;
				}
				else
				{
					func_83(uParam0->f_62, uParam0->f_63, 1, func_82(), uParam0->f_12);
					func_84(uParam0->f_62, 1, 1, 1, 0);
				}
				uParam0->f_27 = -1;
				uParam0->f_28 = 0;
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				uParam0->f_45 = 0;
				bVar9 = true;
				if (!func_85(uParam0->f_62, uParam0->f_63, 0, func_82(), 0) || func_86(uParam0->f_62, 1, 0))
				{
					bVar9 = false;
				}
				func_90(uParam0, iVar8, bVar9);
			}
			break;
		case 0:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_30(uParam0);
				func_35(uParam0);
			}
			break;
		case 13:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.300486E-34f))
				{
					func_79(&(uParam0->f_68), &(uParam0->f_69));
				}
			}
			if (!func_29(uParam0->f_1[2], 0))
			{
				func_54(uParam0->f_1[2], 1, 1, 1);
				func_74(uParam0->f_1[2], 0, 1);
			}
			if (!func_29(uParam0->f_1[4], 0))
			{
				func_54(uParam0->f_1[4], 1, 1, 1);
				func_74(uParam0->f_1[4], 1, 1);
			}
			if (func_55(uParam0->f_1[2], 1))
			{
				func_30(uParam0);
				func_93(&(uParam0->f_71));
				func_8(uParam0, 14);
				return;
			}
			else if (func_94(uParam0->f_1[4], 1))
			{
				func_30(uParam0);
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				func_79(&(uParam0->f_64), &(uParam0->f_65));
				func_79(&(uParam0->f_68), &(uParam0->f_69));
				iVar10 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
				if (iVar10 != -1.772429E+20f && iVar10 != 2.719026E+21f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
				}
				iVar8 = func_65(uParam0->f_62, -1.29539E-20f);
				iVar11 = func_78(uParam0, iVar8);
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar11, "player", Global_33);
				func_56(uParam0, 0);
				func_57("Exit", "SSCRFT_Sounds", 1);
				if (func_31(uParam0, 4))
				{
					func_8(uParam0, 1);
				}
				else
				{
					func_8(uParam0, 0);
				}
				return;
			}
			else if (func_39(uParam0->f_1[1], 1))
			{
				func_54(uParam0->f_1[4], 0, 1, 1);
				func_54(uParam0->f_1[2], 0, 1, 1);
				func_54(uParam0->f_1[1], 0, 1, 1);
				iVar8 = func_65(uParam0->f_62, -1.29539E-20f);
				iVar12 = func_78(uParam0, iVar8);
				if (iVar12 != 0)
				{
					ANIMSCENE::RESET_ANIM_SCENE(iVar12, "pl_craft");
					ANIMSCENE::LOAD_ANIM_SCENE(iVar12);
				}
				func_93(&(uParam0->f_71));
				func_6(uParam0, 64);
				func_8(uParam0, 12);
				return;
			}
			if (func_95(uParam0->f_1[4], 1))
			{
				if (!func_96(&(uParam0->f_71)))
				{
					func_97(&(uParam0->f_71));
				}
				else if (func_91(&(uParam0->f_71), 1036831949 /* Float: 0.1f */))
				{
					func_98(uParam0->f_1[4], "CAMP_REC_QUIT", 1);
				}
			}
			else
			{
				if (func_96(&(uParam0->f_71)))
				{
					func_93(&(uParam0->f_71));
				}
				func_98(uParam0->f_1[4], "CAMP_REC_BACK", 1);
			}
			break;
		case 14:
			HUD::_UI_PROMPT_SET_ACTIVE_GROUP_THIS_FRAME(-3.423465f, MISC::VAR_STRING(0, uParam0->f_62), 1, 0, 0, 0);
			func_48(0);
			if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
			{
				if (ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -3.300486E-34f))
				{
					func_79(&(uParam0->f_68), &(uParam0->f_69));
				}
			}
			iVar8 = func_65(uParam0->f_62, -1.29539E-20f);
			iVar13 = func_78(uParam0, iVar8);
			if ((iVar13 == 0 || (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(iVar13) || ANIMSCENE::HAS_ANIM_SCENE_EXITED(iVar13, false))) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_33, -2.936837E-05f))
			{
				func_79(&(uParam0->f_66), &(uParam0->f_67));
				func_79(&(uParam0->f_64), &(uParam0->f_65));
				func_79(&(uParam0->f_68), &(uParam0->f_69));
				iVar14 = PED::_GET_ACTIVE_DYNAMIC_SCENARIO(Global_33);
				if (iVar14 != -1.772429E+20f && iVar14 != 2.719026E+21f)
				{
					WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
				}
				ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(iVar13, "player", Global_33);
				if (!func_51(uParam0))
				{
					func_8(uParam0, 15);
				}
			}
			break;
		case 16:
			iVar15 = func_99();
			if (iVar15 == PLAYER::PLAYER_ID())
			{
				uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_8(uParam0, 17);
			}
			else if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar15) && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
			{
				func_8(uParam0, 10);
			}
			else if (func_91(&(uParam0->f_71), 5f))
			{
				func_93(&(uParam0->f_71));
				func_8(uParam0, 10);
			}
			break;
		case 17:
			if (!func_92(uParam0->f_24) && func_100(1))
			{
				if (func_101(uParam0->f_24) != 3)
				{
					func_102(0);
				}
				else
				{
					func_103(uParam0->f_62);
					PED::_GIVE_PED_HASH_COMMAND(Global_33, -6.917074E+11f, 1f);
					func_104(uParam0->f_62, 1);
					func_105(uParam0);
					if (func_76(uParam0->f_62, -4.733674E-34f))
					{
						func_106(-2.476148E-07f, 0, 255, 0, 0);
					}
					uParam0->f_26 = uParam0->f_62;
				}
				func_8(uParam0, 15);
			}
			else
			{
				func_107(1);
				HUD::_UI_PROMPT_DISABLE_PROMPTS_THIS_FRAME();
				PAD::DISABLE_ALL_CONTROL_ACTIONS(2);
			}
			break;
		case 1:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				if (func_68(uParam0->f_1[0]))
				{
					func_54(uParam0->f_1[0], 0, 1, 1);
				}
				func_35(uParam0);
			}
			break;
		case 18:
			if (func_37())
			{
				func_38(0);
			}
			if (func_32(uParam0))
			{
				func_35(uParam0);
			}
			if (func_31(uParam0, 2))
			{
				TASK::CLEAR_PED_TASKS(Global_33, true, false);
			}
			func_56(uParam0, 0);
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
			Global_1913621.f_1576 = 0;
			SCRIPTS::TERMINATE_THIS_THREAD();
			break;
	}
}

int func_13(var uParam0)
{
	return uParam0->f_11;
}

void func_14(var uParam0, bool bParam1, bool bParam2)
{
	func_30(uParam0);
	if (bParam2)
	{
		func_56(uParam0, 0);
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uParam0->f_29);
	}
	if (func_37())
	{
		func_38(0);
	}
	if (bParam1)
	{
		func_108(uParam0);
		return;
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
	{
		HUD::_TEXT_BLOCK_DELETE(&(uParam0->f_21));
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_49);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_50);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_51);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_52);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_53);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_54);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_55);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_56);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(uParam0->f_57);
	}
	func_79(&(uParam0->f_64), &(uParam0->f_65));
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_68), &(uParam0->f_69));
	TXD::SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED("satchel_textures");
	Global_1913621.f_1576 = 0;
	if (func_31(uParam0, 2))
	{
		TASK::CLEAR_PED_TASKS(Global_33, true, false);
	}
	if (func_27() == -1)
	{
		func_8(uParam0, 18);
	}
	else
	{
		if (uParam0->f_11 == 11)
		{
			if (uParam0->f_24 == -1)
			{
				func_87(uParam0->f_62, uParam0->f_63, 1, uParam0->f_12);
				func_109(uParam0->f_62, uParam0->f_23);
			}
		}
		if (!func_80(0) || func_81())
		{
			if (uParam0->f_28 > 0 && func_25(uParam0->f_62, 0))
			{
				uParam0->f_24 = func_87(uParam0->f_62, uParam0->f_63, uParam0->f_28, uParam0->f_12);
				if (uParam0->f_12 == 2.270209E+38f)
				{
					func_89(func_88(-0.1137347f, -7.825801E+22f), uParam0->f_28);
				}
				uParam0->f_28 = 0;
			}
		}
		uParam0->f_24 = -1;
		func_8(uParam0, 0);
	}
}

bool func_15()
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
	if (!func_17(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_16(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_17(struct<2> Param0)
{
	if (!func_110(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_111(Param0))
	{
		return false;
	}
	return true;
}

int func_18(var uParam0, var uParam1)
{
	return uParam0;
}

void func_19(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_20(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_21()
{
	return (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Global_26573) && ANIMSCENE::IS_ANIM_SCENE_RUNNING(Global_26573, false));
}

bool func_22()
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		return false;
	}
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_33))
	{
		return false;
	}
	return false;
}

bool func_23()
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

void func_24(var uParam0)
{
	func_5(uParam0, 1);
}

bool func_25(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_KEY_VALID(bParam0, iParam1);
}

bool func_26(bool bParam0)
{
	return WEAPON::IS_WEAPON_BOW(bParam0);
}

int func_27()
{
	return Global_1572887.f_14;
}

bool func_28()
{
	return Global_1896762.f_352;
}

bool func_29(int iParam0, bool bParam1)
{
	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	return !func_112(iParam0, 4);
}

void func_30(var uParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		func_69(&(uParam0->f_1[iVar0]), 1, 1);
		iVar0++;
	}
}

bool func_31(var uParam0, int iParam1)
{
	return func_113(*uParam0, iParam1);
}

bool func_32(var uParam0)
{
	return func_31(uParam0, 1);
}

void func_33(var uParam0)
{
	StringCopy(&(uParam0->f_21), "CAMP", 8);
}

void func_34(var uParam0)
{
	if (HUD::_DOES_TEXT_BLOCK_EXIST(&(uParam0->f_21)))
	{
		HUD::TEXT_BLOCK_REQUEST(&(uParam0->f_21));
	}
	TXD::REQUEST_STREAMED_TEXTURE_DICT("satchel_textures", false);
	if (func_31(uParam0, 2))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A");
	STREAMING::REQUEST_ANIM_DICT("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A");
	STREAMING::REQUEST_MODEL(7.069783E-10f, false);
	STREAMING::REQUEST_MODEL(0.0006533724f, false);
	STREAMING::REQUEST_MODEL(9.171683E+16f, false);
	STREAMING::REQUEST_MODEL(-2.313736E+30f, false);
	STREAMING::REQUEST_MODEL(-3.730768E+35f, false);
	STREAMING::REQUEST_MODEL(-2.056204E+15f, false);
	STREAMING::REQUEST_MODEL(-179980.5f, false);
	STREAMING::REQUEST_MODEL(1.275068E+19f, false);
	STREAMING::REQUEST_MODEL(-4.130397E-19f, false);
	STREAMING::REQUEST_MODEL(-1.180585E+22f, false);
	STREAMING::REQUEST_MODEL(-1.309767E+08f, false);
	STREAMING::REQUEST_MODEL(-3.582282E+25f, false);
	STREAMING::REQUEST_MODEL(4.518292E+32f, false);
	STREAMING::REQUEST_MODEL(1.44377E-24f, false);
	STREAMING::REQUEST_MODEL(-2.72553E-30f, false);
	func_114(uParam0);
	if (func_31(uParam0, 4))
	{
		STREAMING::REQUEST_MODEL(-7.355436E+31f, false);
		STREAMING::REQUEST_MODEL(-2.030079E-35f, false);
		STREAMING::REQUEST_MODEL(-0.0006187792f, false);
		STREAMING::REQUEST_MODEL(6.030809E-31f, false);
		STREAMING::REQUEST_MODEL(1.187723E+08f, false);
	}
}

void func_35(var uParam0)
{
	func_6(uParam0, 1);
}

bool func_36(var uParam0)
{
	if (func_115(&(uParam0->f_21)))
	{
		if (!HUD::TEXT_BLOCK_IS_LOADED(&(uParam0->f_21)))
		{
			return false;
		}
	}
	if (!TXD::HAS_STREAMED_TEXTURE_DICT_LOADED("satchel_textures"))
	{
		return false;
	}
	if (func_31(uParam0, 2))
	{
		return true;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A"))
	{
		return false;
	}
	if (!STREAMING::HAS_ANIM_DICT_LOADED("MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A"))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_49)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_50)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_51)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_52)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_53)))
	{
		return false;
	}
	if (!func_116(uParam0, &(uParam0->f_54)))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(7.069783E-10f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(0.0006533724f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(9.171683E+16f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.313736E+30f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.056204E+15f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-179980.5f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1.275068E+19f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-3.730768E+35f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-3.582282E+25f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1.180585E+22f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-1.309767E+08f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(4.518292E+32f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(1.44377E-24f))
	{
		return false;
	}
	if (!STREAMING::HAS_MODEL_LOADED(-2.72553E-30f))
	{
		return false;
	}
	if (func_31(uParam0, 4))
	{
		if (!STREAMING::HAS_MODEL_LOADED(-7.355436E+31f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-2.030079E-35f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(-0.0006187792f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(6.030809E-31f))
		{
			return false;
		}
		if (!STREAMING::HAS_MODEL_LOADED(1.187723E+08f))
		{
			return false;
		}
	}
	return true;
}

bool func_37()
{
	if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "player_crafting_active"))
	{
		return DECORATOR::DECOR_GET_BOOL(PLAYER::PLAYER_PED_ID(), "player_crafting_active");
	}
	return false;
}

void func_38(bool bParam0)
{
	if (bParam0)
	{
	}
	Global_1913621.f_1582 = bParam0;
	DECORATOR::DECOR_SET_BOOL(Global_33, "player_crafting_active", bParam0);
}

bool func_39(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_40(var uParam0)
{
	func_38(1);
	func_8(uParam0, 4);
}

bool func_41(var uParam0)
{
	int iVar0;

	uParam0->f_75 = Global_1913621.f_1584;
	uParam0->f_74 = Global_1913621.f_1585;
	if (func_31(uParam0, 2))
	{
		Global_1913621.f_1576 = 0;
		uParam0->f_45 = 0;
		iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
		if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[0 /*9*/].f_1))
		{
			DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[0 /*9*/].f_1);
		}
		uParam0->f_25 = func_118(iVar0);
		uParam0->f_26 = func_119(iVar0);
		func_120(uParam0, uParam0->f_25, 4.431614E+14f);
		func_120(uParam0, -0.0006595731f, 4.431614E+14f);
		func_120(uParam0, 2.555698E+22f, 4.431614E+14f);
		func_120(uParam0, -9.497565E-20f, 4.431614E+14f);
		func_120(uParam0, 2.498006E+28f, 4.431614E+14f);
		return true;
	}
	if (uParam0->f_44 == 0)
	{
		Global_1913621.f_1576 = 0;
		uParam0->f_45 = 0;
		func_121(uParam0, 2.273041E-17f);
		uParam0->f_44++;
		return false;
	}
	else if (uParam0->f_44 == 1)
	{
		func_121(uParam0, -4.029766E+29f);
		uParam0->f_44++;
		return false;
	}
	else
	{
		func_121(uParam0, -1.428267E+31f);
		uParam0->f_44 = 0;
	}
	uParam0->f_45 = 0;
	return true;
}

bool func_42(var uParam0)
{
	int iVar0;
	char cVar1[16];

	uParam0->f_47 = 0;
	uParam0->f_48 = 0;
	if ((func_31(uParam0, 2) || func_31(uParam0, 65536)) && DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_29))
	{
		return true;
	}
	uParam0->f_29 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER_FROM_PATH("", "CraftingDatastore");
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "filter", func_123(func_31(uParam0, 2), -8.597887E+17f, func_122(uParam0->f_42)));
	if (func_31(uParam0, 2))
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", 0);
		DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "headerText", -2.87259E-23f);
	}
	else
	{
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterCount", 5 + 1);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "filterIndex", uParam0->f_42);
	}
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "tipText", "");
	uParam0->f_41 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes_lines");
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "variantVisible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_29, "variantText", " ");
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantCount", 0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_29, "variantIndex", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgPlayer", false);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam0->f_29, "RPGDescription", 0);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(uParam0->f_29, "ShowIngredients", true);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		StringCopy(&cVar1, "ingredient", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		func_124(&(uParam0->f_31[iVar0]), &cVar1, uParam0);
		StringCopy(&cVar1, "tip", 16);
		StringIntConCat(&cVar1, iVar0, 16);
		uParam0->f_36[iVar0] = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_29, &cVar1);
		StringCopy(&cVar1, "Text", 16);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam0->f_36[iVar0], &cVar1, "");
		StringCopy(&cVar1, "Enabled", 16);
		DATABINDING::_DATABINDING_ADD_DATA_INT(uParam0->f_36[iVar0], &cVar1, 0);
		iVar0++;
	}
	return true;
}

bool func_43(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_82();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		if (func_25(Global_1913621[iVar0 /*9*/].f_6, 0))
		{
			func_125(uParam0, 0, iVar0, bVar2, 1, 0);
			if (iVar1 >= 10)
			{
				uParam0->f_45 = iVar0 + 1;
				return false;
			}
			iVar1++;
		}
		iVar0++;
	}
	uParam0->f_45 = 0;
	if (uParam0->f_48 == 0)
	{
		func_6(uParam0, 128);
	}
	uParam0->f_46 = 0;
	return true;
}

void func_44(var uParam0)
{
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_30))
	{
		uParam0->f_30 = DATABINDING::_DATABINDING_ADD_UI_ITEM_LIST(uParam0->f_29, "recipes");
	}
	else
	{
		DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_30);
	}
	uParam0->f_61 = 2.273041E-17f;
	uParam0->f_60 = 0;
	uParam0->f_59 = 0;
}

bool func_45(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	bool bVar3;

	bVar2 = func_82();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		if ((func_31(uParam0, 128) && Global_1913621[iVar0 /*9*/].f_2) || !func_31(uParam0, 128))
		{
			if (Global_1913621.f_1585 != 0)
			{
				uParam0->f_74 = Global_1913621.f_1585;
				bVar3 = func_76(Global_1913621[iVar0 /*9*/].f_6, Global_1913621.f_1585);
				if (func_31(uParam0, 16384) == bVar3)
				{
				}
				else
				{
					func_125(uParam0, 1, iVar0, bVar2, 0, bParam1);
					if (iVar1 >= 50)
					{
						uParam0->f_45 = iVar0 + 1;
						return false;
					}
					iVar1++;
				}
				iVar0++;
				uParam0->f_45 = 0;
				if (!func_31(uParam0, 16384) && Global_1913621.f_1585 != 0)
				{
					func_5(uParam0, 16384);
					return false;
				}
				uParam0->f_46 = 0;
				func_6(uParam0, 16384);
				return true;
			}
		}
	}
}

bool func_46(var uParam0, bool bParam1)
{
	int iVar0;

	func_5(uParam0, 256);
	if (bParam1 && UIAPPS::IS_UIAPP_ACTIVE_BY_HASH(-3.556355E-20f))
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-3.556355E-20f, 0.01546555f))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		iVar0 = UIAPPS::LAUNCH_UIAPP_BY_HASH(-3.556355E-20f);
		if (iVar0 == 0)
		{
			return true;
		}
	}
	return false;
}

bool func_47(var uParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	bVar2 = func_82();
	iVar0 = uParam0->f_45;
	while (iVar0 <= (Global_1913621.f_1576 - 1))
	{
		func_126(uParam0, iVar0, bVar2, 0, 1, 0, 1);
		if (iVar1 >= 50)
		{
			uParam0->f_45 = iVar0 + 1;
			return false;
		}
		iVar1++;
		iVar0++;
	}
	func_6(uParam0, 512);
	uParam0->f_45 = 0;
	return true;
}

void func_48(bool bParam0)
{
	int iVar0;

	PAD::DISABLE_CONTROL_ACTION(0, 3.101329E-34f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.936208E-37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.834345E-08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.227534E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -3.403642E+24f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.013735E+08f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.794596E+37f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 6.94097E+19f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.076797E-08f, false);
	iVar0 = func_127(Global_33);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		PED::SET_PED_MAX_MOVE_BLEND_RATIO(iVar0, 1f);
	}
	if (bParam0)
	{
		PAD::DISABLE_CONTROL_ACTION(0, -1.236065E-28f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 527.8984f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -2.740794E-14f, false);
		PAD::DISABLE_CONTROL_ACTION(0, 5.074759E+21f, false);
		PAD::DISABLE_CONTROL_ACTION(0, -1.121336E-21f, false);
	}
}

void func_49(var uParam0)
{
	int iVar0;

	func_30(uParam0);
	func_128(uParam0, 1);
	uParam0->f_1[2] = func_71("CAMP_REC_QUIT", 9.715933E-10f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	func_54(uParam0->f_1[2], 1, 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	if (!func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_60, 0))
		{
			uParam0->f_62 = uParam0->f_60;
			uParam0->f_63 = uParam0->f_61;
			func_129(uParam0, &(uParam0->f_59));
		}
		else
		{
			uParam0->f_62 = 0;
		}
		if (func_25(uParam0->f_60, 0))
		{
			if (func_130(uParam0->f_60))
			{
				func_98(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
			else if (func_65(uParam0->f_60, -1.29539E-20f) == -4.839888E+13f)
			{
				func_98(uParam0->f_1[1], "CAMP_REC_BREW", 1);
			}
			else
			{
				func_98(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
			}
		}
		uParam0->f_1[3] = func_71(func_131(uParam0), -2.072734E+13f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	}
	else
	{
		uParam0->f_1[7] = func_71("CAMP_ADD_TASK", -5.63933E-33f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	}
	uParam0->f_1[5] = func_132("RECIPE", -1.454045E-11f, 1.475287E+23f, 0);
	func_133(uParam0->f_1[5], -1.454045E-11f);
	func_133(uParam0->f_1[5], 1.475287E+23f);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
	}
	if (iVar0 > 1 && func_25(uParam0->f_62, 0))
	{
		func_54(uParam0->f_1[5], 1, 1, 1);
	}
	else
	{
		func_54(uParam0->f_1[5], 0, 1, 1);
	}
	uParam0->f_1[6] = func_71("INFO", -2.239985E+36f, 1, 0, 0, 2, 570, 4000, 10, 2f, 8.750548E+22f, 0);
	if (!func_31(uParam0, 32768))
	{
		func_98(uParam0->f_1[6], "INFO", 1);
	}
	else
	{
		func_98(uParam0->f_1[6], "INGREDIENTS", 1);
	}
	if (DATABINDING::_DATABINDING_GET_ARRAY_COUNT(uParam0->f_30) == 0)
	{
		func_52(uParam0);
		func_54(uParam0->f_1[6], 0, 1, 1);
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_NO_REC_TIP"));
	}
	func_53(uParam0, uParam0->f_62, uParam0->f_63);
}

bool func_50(var uParam0)
{
	int iVar0;

	if (!func_31(uParam0, 2))
	{
		return false;
	}
	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (uParam0->f_26 != func_119(iVar0))
	{
		uParam0->f_26 = func_119(iVar0);
		func_8(uParam0, 15);
		return true;
	}
	if (uParam0->f_25 != func_118(iVar0))
	{
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

bool func_51(var uParam0)
{
	if (Global_1913621.f_1584 != uParam0->f_75 || Global_1913621.f_1585 != uParam0->f_74)
	{
		uParam0->f_75 = Global_1913621.f_1584;
		uParam0->f_74 = Global_1913621.f_1585;
		func_5(uParam0, 65536);
		func_8(uParam0, 4);
		return true;
	}
	return false;
}

void func_52(var uParam0)
{
	int iVar0;

	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam0->f_41);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[iVar0], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_31[iVar0], "inUse", false);
		iVar0++;
	}
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", "");
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
}

void func_53(var uParam0, bool bParam1, bool bParam2)
{
	var uVar0;
	var uVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	if (!func_25(bParam1, 0))
	{
		if (func_68(uParam0->f_1[1]))
		{
			func_54(uParam0->f_1[1], 0, 1, 1);
		}
		return;
	}
	bVar2 = func_82();
	bVar3 = true;
	bVar4 = false;
	if (!Global_1913621.f_1579 && func_134(bParam1, bParam2, 1))
	{
		bVar4 = true;
		bVar3 = false;
	}
	else if (!func_135(bParam1, bParam2, &uVar1, &uVar0, &iVar5, 0, bVar2, 0) || func_92(uParam0->f_24))
	{
		bVar3 = false;
	}
	else if (func_31(uParam0, 2) && !func_136(bParam1))
	{
		bVar3 = false;
	}
	if (bVar3)
	{
		if ((bParam1 != -5.985058E-05f && func_86(bParam1, 1, 0)) || (!func_31(uParam0, 4) && ((func_31(uParam0, 8192) || bParam2 == -1.428267E+31f) || bParam2 == 6.221388E-29f)))
		{
			bVar3 = false;
		}
		else if (!func_137(2) && func_65(bParam1, -1.29539E-20f) == -4.839888E+13f)
		{
			bVar3 = false;
		}
		else if (uParam0->f_27 == -1)
		{
			iVar6 = func_138(bParam1, 0, 0, 0);
			iVar7 = func_139(bParam1, 0);
			iVar8 = func_140(bParam1, bParam2, bVar2, 0);
			if (iVar7 == -1)
			{
				iVar7 = iVar8;
			}
			else
			{
				iVar7 = (iVar7 - iVar6);
			}
			uParam0->f_27 = func_141(iVar7, iVar8);
		}
	}
	if (func_142(uParam0, bParam1) && uParam0->f_27 > 1)
	{
		if (!func_68(uParam0->f_1[8]))
		{
			uParam0->f_1[8] = func_71("CAMP_REC_BATCH", -2.740794E-14f, 1, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
	}
	else if (func_68(uParam0->f_1[8]))
	{
		func_69(&(uParam0->f_1[8]), 1, 1);
	}
	if (func_68(uParam0->f_1[1]))
	{
		if (func_31(uParam0, 2))
		{
			func_98(uParam0->f_1[1], "DONATE_ING", 1);
		}
		else if (func_130(bParam1))
		{
			if (func_31(uParam0, 131072) && uParam0->f_27 > 1)
			{
				func_98(uParam0->f_1[1], MISC::VAR_STRING(2, "CAMP_REC_COOK_MLT", func_141(uParam0->f_27, 3)), 1);
			}
			else
			{
				func_98(uParam0->f_1[1], "CAMP_REC_COOK", 1);
			}
		}
		else if (func_65(bParam1, -1.29539E-20f) == -4.839888E+13f)
		{
			func_98(uParam0->f_1[1], "CAMP_REC_BREW", 1);
		}
		else
		{
			func_98(uParam0->f_1[1], "CAMP_REC_MAKE", 1);
		}
		func_54(uParam0->f_1[1], bVar3, 1, 1);
	}
	func_143(bParam1, bParam2, uParam0, iVar5, bVar4);
	if (func_68(uParam0->f_1[6]))
	{
		func_54(uParam0->f_1[6], !bVar4, 1, 1);
	}
	func_144(uParam0);
}

void func_54(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (bParam1)
	{
		func_145(iParam0, 4);
		if (bParam3)
		{
			func_146(iVar0, 1);
		}
		func_147(iVar0, 1);
	}
	else
	{
		func_148(iParam0, 4);
		func_147(iVar0, 0);
	}
}

bool func_55(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_JUST_RELEASED(Global_1951897[iVar0 /*23*/].f_3);
}

void func_56(var uParam0, bool bParam1)
{
	if (bParam1)
	{
		if (UISTATEMACHINE::UI_STATE_MACHINE_REQUEST_TRANSITION(-3.556355E-20f, 2.596126E+11f))
		{
		}
		else
		{
			UIAPPS::_CLOSE_UIAPP_BY_HASH(-3.556355E-20f);
		}
	}
	else
	{
		UIAPPS::_CLOSE_UIAPP_BY_HASH(-3.556355E-20f);
	}
	func_6(uParam0, 256);
	ATTRIBUTE::STOP_ITEM_PREVIEW();
}

void func_57(char* sParam0, char* sParam1, bool bParam2)
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

void func_58(var uParam0)
{
	int iVar0;
	struct<2> Var1[15];
	int iVar32;
	int iVar33;
	bool bVar34;
	char* sVar35;
	int iVar36;
	bool bVar37;
	struct<2> Var38;
	char* sVar41;

	if (func_25(uParam0->f_62, 0))
	{
		if (UILOG::_UILOG_IS_ENTRY_REGISTERED(7, uParam0->f_62))
		{
			return;
		}
		UILOG::_UILOG_ADD_ENTRY_HASH(7, uParam0->f_62, Global_34, uParam0->f_62, -1.491195E-38f, 0);
		func_149(uParam0->f_62, uParam0->f_63, &Var1, &iVar0, 1, 0);
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, 0, "CAMP_RECIPE_LOG_ALL_OBJ", false, true, false);
		iVar33 = 0;
		while (iVar33 < iVar0)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar34 = Var1[iVar33 /*2*/];
				if (func_25(bVar34, 0))
				{
					iVar36 = func_138(bVar34, 0, 0, 0);
					sVar35 = MISC::VAR_STRING(130, "CAMP_RECIPE_LOG_OBJ", iVar36, Var1[iVar33 /*2*/].f_1, MISC::VAR_STRING(0, bVar34));
					bVar37 = func_150(bVar34, Var1[iVar33 /*2*/].f_1);
					if (bVar37)
					{
						iVar32++;
					}
					UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(7, uParam0->f_62, bVar34, sVar35, bVar37, true, true);
				}
				iVar33++;
			}
		}
		if (func_151(uParam0->f_62, &Var38, 4.975531E-10f, 0, 0, 0))
		{
			UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(7, uParam0->f_62, Var38, Var38.f_1);
			UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(7, uParam0->f_62, Var38, Var38.f_1);
		}
		Global_1147168.f_339.f_16 = uParam0->f_62;
		Global_1147168.f_339.f_17 = uParam0->f_63;
		sVar41 = MISC::VAR_STRING(2, "CAMP_RECIPE_LOG_MISSION_DTL", iVar32, iVar0);
		UILOG::_0x763637F9B838B0A7(7, uParam0->f_62, sVar41);
		AUDIO::PLAY_SOUND_FRONTEND("add_to_log", "SSCRFT_Sounds", true, 0);
	}
	func_144(uParam0);
}

void func_59(var uParam0)
{
	int iVar0;
	int iVar1;

	if (!func_29(uParam0->f_1[1], 0))
	{
		return;
	}
	if (func_31(uParam0, 2))
	{
		if (func_25(uParam0->f_62, 0))
		{
			func_102(1);
			func_97(&(uParam0->f_71));
			func_8(uParam0, 16);
		}
		return;
	}
	func_56(uParam0, 1);
	func_69(&(uParam0->f_1[1]), 1, 1);
	func_69(&(uParam0->f_1[5]), 1, 1);
	func_69(&(uParam0->f_1[6]), 1, 1);
	func_69(&(uParam0->f_1[3]), 1, 1);
	func_69(&(uParam0->f_1[7]), 1, 1);
	func_5(uParam0, 64);
	if (!func_31(uParam0, 8192) && !func_130(uParam0->f_62))
	{
		iVar0 = func_65(uParam0->f_62, -1.29539E-20f);
		iVar1 = func_78(uParam0, iVar0);
		if (iVar1 != 0)
		{
			func_6(uParam0, 64);
			ANIMSCENE::RESET_ANIM_SCENE(iVar1, "pl_craft");
			ANIMSCENE::LOAD_ANIM_SCENE(iVar1);
			uParam0->f_70 = 0;
			if (iVar0 != -1.124768E-19f)
			{
				if (iVar0 == -4.326644E+08f)
				{
					if (uParam0->f_62 == 0.0002301198f)
					{
						uParam0->f_70 = -2.72553E-30f;
					}
					else
					{
						uParam0->f_70 = -1.180585E+22f;
					}
				}
				else if (func_76(uParam0->f_62, -7.272718E-19f))
				{
					uParam0->f_70 = func_152(func_77(uParam0->f_62, 0));
				}
				else if (func_76(uParam0->f_62, 1.619011E-22f))
				{
					uParam0->f_70 = -7.771058E+31f;
				}
				else if (func_76(uParam0->f_62, -3.813665E-28f))
				{
					uParam0->f_70 = 2.057918E+38f;
				}
				else if (func_76(uParam0->f_62, -3.55982f))
				{
					uParam0->f_70 = 22719.83f;
				}
				else
				{
					uParam0->f_70 = func_152(uParam0->f_62);
				}
			}
			if (uParam0->f_70 != 0)
			{
				STREAMING::REQUEST_MODEL(uParam0->f_70, false);
			}
		}
		func_98(uParam0->f_1[2], "CAMP_REC_BACK", 1);
		func_72(uParam0->f_1[2], -3.423465f, 0, 1);
		func_54(uParam0->f_1[2], 0, 1, 1);
		func_74(uParam0->f_1[2], 0, 1);
		uParam0->f_1[4] = func_71("CAMP_REC_BACK", 9.715933E-10f, 1, 0, 0, 5, 570, 4000, 10, 2f, -2.656165E+09f, 0);
		func_153(&(uParam0->f_1[4]), "INPUT_PCRAFT_EXIT");
		func_72(uParam0->f_1[4], -3.423465f, 0, 1);
		func_54(uParam0->f_1[4], 0, 1, 1);
		func_73(uParam0->f_1[4], 19, 1, 1);
		func_73(uParam0->f_1[4], 20, 1, 1);
		func_73(uParam0->f_1[4], 13, 1, 1);
		func_73(uParam0->f_1[2], 13, 1, 1);
		if (func_68(uParam0->f_1[2]))
		{
			func_72(uParam0->f_1[2], -3.423465f, 0, 1);
		}
		uParam0->f_28 = 0;
		func_8(uParam0, 12);
	}
	else
	{
		func_8(uParam0, 11);
	}
}

bool func_60(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UI_PROMPT_HAS_STANDARD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

void func_61(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<10> Var5;
	float fVar15;
	int iVar16;
	bool bVar17;
	int iVar18;
	struct<37> Var19;
	int iVar66;
	int iVar67;
	int iVar68;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(uParam0->f_58))
	{
		iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant");
		iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants");
		bVar2 = false;
		if (uParam0->f_63 == -1.428267E+31f || uParam0->f_63 == 6.221388E-29f)
		{
			if (bParam1)
			{
				iVar0++;
			}
			else
			{
				iVar0 = (iVar0 - 1);
			}
			if (iVar0 < 0)
			{
				iVar0 = (iVar1 - 1);
			}
			else if (iVar0 >= iVar1)
			{
				iVar0 = 0;
			}
			Var5 = -1;
			Var5.f_1 = -1;
			Var5.f_2 = -1;
			Var5.f_3 = -1;
			Var5.f_4 = -1;
			Var5.f_5 = -1;
			Var5.f_6 = -1;
			Var5.f_7 = -1;
			Var5.f_8 = -1;
			if (iVar0 == 0)
			{
				Var5 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, -1.428267E+31f, 0, -1, func_65(uParam0->f_62, 5.339713E+22f), 0) };
				if (func_155(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						uParam0->f_63 = -1.428267E+31f;
						uParam0->f_62 = func_156(0, iVar3);
						bVar2 = true;
					}
					func_157(iVar3);
				}
			}
			else
			{
				Var5 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, func_65(uParam0->f_62, 5.339713E+22f), 0) };
				if (func_155(Var5, &iVar3, &iVar4, 0))
				{
					if (iVar4 > 0)
					{
						if (iVar0 == 1)
						{
							fVar15 = 1.337157E+38f;
						}
						else if (iVar0 == 2)
						{
							fVar15 = -8.704819E-29f;
						}
						else if (iVar0 == 3)
						{
							fVar15 = 2.519492E+32f;
						}
						iVar16 = 0;
						while (iVar16 < iVar4)
						{
							bVar17 = func_156(iVar16, iVar3);
							if (func_76(bVar17, fVar15))
							{
								uParam0->f_63 = 6.221388E-29f;
								uParam0->f_62 = bVar17;
								bVar2 = true;
							}
							else
							{
								iVar16++;
							}
						}
					}
					func_157(iVar3);
				}
			}
		}
		else
		{
			iVar18 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(uParam0->f_62);
			Var19.f_4 = 15;
			Var19.f_36 = 10;
			while ((((Var19.f_2 != 5.928634E+20f || Var19 == -1.926391E+21f) || Var19 == -8.816258E-39f) || (!Global_1913621.f_1579 && func_134(uParam0->f_62, Var19, 1))) && iVar66 < iVar18)
			{
				iVar66++;
				if (bParam1)
				{
					iVar0++;
				}
				else
				{
					iVar0 = (iVar0 - 1);
				}
				if (iVar0 < 0)
				{
					iVar0 = (iVar18 - 1);
				}
				else if (iVar0 >= iVar18)
				{
					iVar0 = 0;
				}
				if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(uParam0->f_62, iVar0, &Var19))
				{
				}
			}
			uParam0->f_63 = Var19;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eCost", uParam0->f_63);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "eOutputItem", uParam0->f_62);
		iVar67 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iIndex");
		if (iVar67 >= 0 && iVar67 < Global_1913621)
		{
			iVar68 = Global_1913621[iVar67 /*9*/].f_8;
		}
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_58, "iCurCostVariant", iVar0);
		DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (iVar0 + 1 - iVar68));
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_158(uParam0->f_62));
		func_126(uParam0, -1, func_82(), uParam0->f_58, 0, bVar2, 0);
		func_53(uParam0, uParam0->f_62, uParam0->f_63);
	}
}

void func_62(var uParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (func_31(uParam0, 32768))
		{
			func_6(uParam0, 32768);
		}
		else
		{
			func_5(uParam0, 32768);
		}
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", func_31(uParam0, 32768));
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", !func_31(uParam0, 32768));
	if (!func_31(uParam0, 32768))
	{
		if (func_68(uParam0->f_1[6]))
		{
			func_98(uParam0->f_1[6], "INFO", 1);
		}
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		func_159(uParam0);
	}
	else
	{
		if (func_68(uParam0->f_1[6]))
		{
			func_98(uParam0->f_1[6], "INGREDIENTS", 1);
		}
		func_160(uParam0);
	}
	if (uParam0->f_63 == -1.428267E+31f)
	{
		if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "enabled") == 1)
		{
			if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_58, "iNumCostVariants") <= 1 && func_31(uParam0, 32768))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
			}
			else
			{
				iVar0 = func_140(uParam0->f_62, uParam0->f_63, func_82(), 0);
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar0));
			}
		}
	}
}

void func_63(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		return;
	}
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	func_161(uParam0);
	func_52(uParam0);
	func_159(uParam0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowIngredients", false);
	uParam0->f_62 = 0;
	uParam0->f_63 = 0;
	func_53(uParam0, 0, 0);
	func_8(uParam0, 9);
}

void func_64(var uParam0, int iParam1)
{
	func_52(uParam0);
	func_159(uParam0);
	func_129(uParam0, &(iParam1->f_3));
}

int func_65(bool bParam0, int iParam1)
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

void func_66(var uParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_65(uParam0->f_62, -1.29539E-20f);
	if (iVar0 == 4.66195E-24f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			iVar1 = func_162(uParam0->f_62);
			if (iVar1 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(iVar1, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), 0f, 0f, 0f, 0f, 0f, 0f, true, true, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_49, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_49);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_49, "pl_craft", true);
	}
	else if (iVar0 == -0.01154436f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "arrow", uParam0->f_66, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_51, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_51);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_51, "pl_craft", true);
	}
	else if (iVar0 == 1.002948E-10f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_52, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_52);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_52, "pl_craft", true);
	}
	else if (iVar0 == -1.467368E+13f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "player", Global_33, 0);
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_64))
		{
			iVar2 = func_162(uParam0->f_62);
			if (iVar2 != 0)
			{
				uParam0->f_64 = OBJECT::CREATE_OBJECT(iVar2, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
				ENTITY::SET_ENTITY_VISIBLE(uParam0->f_64, false);
				ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_64, false, false);
				ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam0->f_64, Global_33, PED::GET_PED_BONE_INDEX(Global_33, 37709), func_163(uParam0->f_62), 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
			}
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_50, "bullet", uParam0->f_64, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_50);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_50, "pl_craft", true);
	}
	else if (iVar0 == -3.737967E+12f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_53, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_53);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_53, "pl_craft", true);
	}
	else if (iVar0 == -0.007383482f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-4.049688E-16f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_54, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_54);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (iVar0 == 7.622462E-26f)
	{
		uParam0->f_43 = 250;
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_66))
		{
			uParam0->f_66 = WEAPON::_CREATE_WEAPON_OBJECT(-2.593644E+11f, 1, Global_34, true, 1f);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_66, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_66, false, false);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_68))
		{
			uParam0->f_68 = OBJECT::CREATE_OBJECT(-4.130397E-19f, Global_34, true, (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() && NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT()), false, false, false);
			ENTITY::SET_ENTITY_VISIBLE(uParam0->f_68, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(uParam0->f_68, false, false);
		}
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "RAG", uParam0->f_68, 0);
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_55, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_55);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_55, "pl_craft", true);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_54, "pl_craft", true);
	}
	else if (iVar0 == -4.326644E+08f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_56, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_56);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_56, "pl_craft", true);
	}
	else if (iVar0 == -1.124768E-19f)
	{
		uParam0->f_43 = 250;
		ANIMSCENE::SET_ANIM_SCENE_ENTITY(uParam0->f_57, "player", Global_33, 0);
		ANIMSCENE::START_ANIM_SCENE(uParam0->f_57);
		ANIMSCENE::SET_ANIM_SCENE_PLAY_LIST(uParam0->f_57, "pl_craft", true);
	}
	else
	{
		uParam0->f_43 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_164(uParam0->f_62), func_165(uParam0->f_62)) * 1148846080));
		func_97(&(uParam0->f_71));
		TASK::TASK_PLAY_ANIM(Global_33, func_164(uParam0->f_62), func_165(uParam0->f_62), 8f, -8f, -1, 1.504636E-36f, 0f, false, 4096, false, "Satchel_Only_filter", false);
	}
}

void func_67(var uParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < uParam0->f_1)
	{
		if (func_68(uParam0->f_1[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < *uParam2)
			{
				if (func_68((*uParam2)[iVar1]))
				{
					if (uParam0->f_1[iVar0] == (*uParam2)[iVar1])
					{
					}
				}
				iVar1++;
			}
			func_54(uParam0->f_1[iVar0], bParam1, 1, 1);
		}
		iVar0++;
	}
}

bool func_68(int iParam0)
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

void func_69(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_68(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_117(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_166(iVar0);
	*uParam0 = 0;
}

bool func_70(int iParam0)
{
	if ((((((((iParam0 == -1.467368E+13f || iParam0 == -0.01154436f) || iParam0 == -3.737967E+12f) || iParam0 == 1.002948E-10f) || iParam0 == -0.007383482f) || iParam0 == 7.622462E-26f) || iParam0 == 4.66195E-24f) || iParam0 == -4.326644E+08f) || iParam0 == -1.124768E-19f)
	{
		return true;
	}
	return false;
}

int func_71(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, float fParam9, int iParam10, bool bParam11)
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
		if (func_112(iVar0, 2))
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
		func_167(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, fParam9, 0, 1f, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_72(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_GROUP(Global_1951897[iVar0 /*23*/].f_3, iParam1, iParam2);
}

void func_73(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam3 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ATTRIBUTE(Global_1951897[iVar0 /*23*/].f_3, iParam1, bParam2);
}

void func_74(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	func_146(iVar0, bParam1);
}

bool func_75(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	return HUD::_UI_PROMPT_IS_PRESSED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_76(bool bParam0, int iParam1)
{
	if (!func_25(bParam0, 0))
	{
		return func_169(func_168(bParam0), iParam1);
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

bool func_77(bool bParam0, bool bParam1)
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
	if (func_25(bVar0, 0))
	{
		if (bParam1)
		{
			if (func_170(bVar0) || func_171(bVar0))
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

int func_78(var uParam0, int iParam1)
{
	switch (iParam1)
	{
		case -715814988:
			return uParam0->f_50;
		case -732326901:
			return uParam0->f_53;
		case -1136843638:
			return uParam0->f_51;
		case 786205940:
			return uParam0->f_52;
		case -1141771998:
			return uParam0->f_54;
		case 364689687:
			return uParam0->f_55;
		case 414472632:
			return uParam0->f_49;
		case -842117252:
			return uParam0->f_56;
		case -1610298873:
			return uParam0->f_57;
		default:
			break;
	}
	return 0;
}

int func_79(int* iParam0, var uParam1)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 1;
	}
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
		return 1;
	}
	*uParam1 = 1;
	NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(*iParam0);
	return 0;
}

bool func_80(bool bParam0)
{
	if (func_27() == -1)
	{
		return true;
	}
	return INVENTORY::_INVENTORY_ARE_LOCAL_CHANGES_ALLOWED(func_172(bParam0));
}

bool func_81()
{
	if (INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(PLAYER::PLAYER_PED_ID()) != 3)
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_PLAYER_INVENTORY_MIRRORING_TRANSACTIONS();
}

bool func_82()
{
	int iVar0;
	int iVar1;

	iVar0 = func_173(7);
	if (!PED::IS_PED_INJURED(iVar0))
	{
		if (func_174(Global_33, iVar0, 1) < 1137180672)
		{
			iVar1 = 1;
		}
	}
	return iVar1;
}

int func_83(bool bParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, bParam1, iParam4, 1);
	return func_175(bParam0, bParam1, bParam2, bParam3);
}

void func_84(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (!func_80(0) || func_81())
	{
		return;
	}
	if (!func_25(bParam0, 0))
	{
		return;
	}
	func_89(func_176(-1.020262E+24f), iParam1);
	if (bParam3)
	{
		if (func_27() == -1)
		{
			if (func_76(bParam0, -7.272718E-19f))
			{
				bVar0 = func_177(func_77(bParam0, 0), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar0))
				{
					func_178(bVar0);
				}
			}
		}
		if (iParam4 == 0)
		{
			if (func_179(bParam0) == -8.140304E-33f)
			{
				if (func_180(bParam0, 0))
				{
					func_181(bParam0, 1, 0, 1, 0, 0, 0);
				}
			}
			else
			{
				func_182(bParam0, iParam1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			}
		}
		else
		{
			func_183(bParam0, iParam4, iParam1);
		}
	}
	func_104(bParam0, iParam1);
	Global_1051188 = bParam0;
}

bool func_85(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	var uVar1;
	var uVar2;

	return func_135(bParam0, bParam1, &uVar0, &uVar1, &uVar2, bParam2, bParam3, bParam4);
}

bool func_86(bool bParam0, int iParam1, bool bParam2)
{
	struct<5> Var0;

	Var0 = { func_184(bParam0, 0, 0) };
	return func_185(bParam0, &Var0, iParam1, 0, bParam2, -1, 0);
}

int func_87(bool bParam0, bool bParam1, int iParam2, int iParam3)
{
	var uVar0;
	struct<5> Var2;
	int iVar7;
	int iVar8;
	struct<2> Var9;
	struct<12> Var19;
	struct<12> Var37;
	struct<17> Var54;

	if (!func_25(bParam0, 0))
	{
		return -1;
	}
	if (func_186(bParam0))
	{
		if (!func_188(func_187(bParam0), bParam1, &uVar0, 0, 0))
		{
			return -1;
		}
	}
	else if (func_140(bParam0, bParam1, 0, 0) < iParam2)
	{
		return -1;
	}
	Var2 = { func_184(bParam0, 1, 0) };
	if (func_185(bParam0, &Var2, iParam2, 0, 1, -1, 0))
	{
		return -1;
	}
	iVar7 = -1;
	iVar8 = func_189(bParam0);
	if (iVar8 == 4.158586E+11f)
	{
		iVar7 = func_190(bParam0, "SPEND STEW FEE", 1, 1, 0, bParam1);
	}
	else
	{
		Var9 = -1;
		Var9.f_1 = -1;
		if (func_186(bParam0))
		{
			Var19.f_9 = 1;
			Var19.f_11 = -5.45926E-19f;
			if (!func_191(&Var9, func_187(bParam0), &Var19, 1, bParam1, -1, 0, 0))
			{
				return -1;
			}
		}
		else
		{
			Var37.f_9 = 1;
			Var37.f_11 = -5.45926E-19f;
			if (!func_192(&Var9, bParam0, Var2, Var2.f_4, iParam2, &Var37, 1, bParam1, -1, 1))
			{
				return -1;
			}
		}
		iVar7 = Var9.f_1;
	}
	if (iVar7 == -1)
	{
		return -1;
	}
	Var54.f_7 = -5.149929E+33f;
	Var54.f_16 = -1;
	Var54.f_1 = 1;
	if (bParam0 == -5.792441E-08f)
	{
		Var54.f_1 = 0;
	}
	if (func_186(bParam0))
	{
		if (func_193(func_187(bParam0), bParam1) == 1.094754E+12f)
		{
			Var54.f_1 = 0;
		}
	}
	else if (func_194(bParam0, bParam1) == 1.094754E+12f)
	{
		Var54.f_1 = 0;
	}
	func_195(iVar7, Var54);
	TELEMETRY::_TELEMETRY_CRAFT_ITEM(bParam0, bParam1, iParam3, iParam2);
	return iVar7;
}

struct<2> func_88(float fParam0, bool bParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = bParam1;
	return Var0;
}

void func_89(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

void func_90(var uParam0, int iParam1, bool bParam2)
{
	int iVar0;

	uParam0->f_45 = 0;
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_64), &(uParam0->f_65));
	iVar0 = func_78(uParam0, iParam1);
	ANIMSCENE::SET_ANIM_SCENE_BOOL(iVar0, "bStopLoop", true, false);
	func_54(uParam0->f_1[2], 1, 1, 1);
	func_54(uParam0->f_1[4], 1, 1, 1);
	func_74(uParam0->f_1[2], 0, 1);
	func_74(uParam0->f_1[4], 1, 1);
	func_196(uParam0->f_1[1], 1);
	func_69(&(uParam0->f_1[1]), 1, 1);
	uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, uParam0->f_43, uParam0->f_43 + 1, 1, 2f, 8.750548E+22f, 0);
	func_73(uParam0->f_1[1], 11, 1, 1);
	func_73(uParam0->f_1[1], 19, 1, 1);
	func_72(uParam0->f_1[1], -3.423465f, 0, 1);
	func_54(uParam0->f_1[1], bParam2, 1, 1);
	func_8(uParam0, 13);
}

bool func_91(var uParam0, float fParam1)
{
	if (!func_96(uParam0))
	{
		return false;
	}
	if (func_197(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

bool func_92(int iParam0)
{
	int iVar0;

	iVar0 = func_101(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

void func_93(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_94(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	if (HUD::_UI_PROMPT_HAS_HOLD_AUTO_FILL_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		if (Global_1951897[iVar0 /*23*/].f_20)
		{
			iVar1 = MISC::GET_GAME_TIMER();
		}
		else
		{
			iVar1 = MISC::GET_SYSTEM_TIME();
		}
		fVar2 = HUD::_UI_PROMPT_GET_PROGRESS(Global_1951897[iVar0 /*23*/].f_3);
		if (!HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3))
		{
			iVar3 = (iVar1 - Global_1951897[iVar0 /*23*/].f_21);
			iVar4 = BUILTIN::FLOOR((IntToFloat(Global_1951897[iVar0 /*23*/].f_18) * (1f - Global_1951897[iVar0 /*23*/].f_22)));
			if (iVar3 > iVar4)
			{
				return true;
			}
		}
		else
		{
			Global_1951897[iVar0 /*23*/].f_21 = iVar1;
			Global_1951897[iVar0 /*23*/].f_22 = fVar2;
		}
	}
	if (HUD::_UI_PROMPT_HAS_MASH_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return HUD::_UI_PROMPT_HAS_MASH_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
	}
	return HUD::_UI_PROMPT_HAS_HOLD_MODE_COMPLETED(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_95(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return false;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_HAS_HOLD_MODE(Global_1951897[iVar0 /*23*/].f_3))
	{
		return PAD::IS_CONTROL_PRESSED(2, Global_1951897[iVar0 /*23*/].f_4);
	}
	return HUD::_UI_PROMPT_IS_HOLD_MODE_RUNNING(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_96(var uParam0)
{
	return func_198(*uParam0, 1);
}

void func_97(var uParam0)
{
	func_199(uParam0, 0f);
}

void func_98(int iParam0, char* sParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_TEXT(Global_1951897[iVar0 /*23*/].f_3, sParam1);
}

int func_99()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_28.f_2;
	}
	return 255;
}

bool func_100(bool bParam0)
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

int func_101(int iParam0)
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

void func_102(bool bParam0)
{
	struct<14> Var0;
	int iVar14;

	if (bParam0)
	{
		iVar14 = 14;
	}
	else
	{
		iVar14 = 15;
	}
	func_201(iVar14, Var0, func_200(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
}

void func_103(var uParam0)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (iVar0 == PLAYER::PLAYER_ID())
	{
		func_202(iVar0, 1);
		func_203(iVar0, uParam0);
		func_205(func_204(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())), uParam0);
	}
	else
	{
		func_206(uParam0);
	}
}

void func_104(bool bParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = { func_207(bParam0) };
	STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
	if (!func_76(bParam0, 2.095208E+23f))
	{
		Var0 = { func_208(bParam0) };
		if (Var0.f_1 != 0)
		{
			STATS::_STAT_ID_INCREMENT_INT(&Var0, iParam1);
		}
	}
}

void func_105(var uParam0)
{
	var uVar0;
	vector3 vVar4;
	int iVar7;
	bool bVar8;
	int iVar9;
	struct<2> Var10[15];

	if (TELEMETRY::_TRY_GET_TELEMETRY_ID_FROM_TRANSACTION_ID(uParam0->f_24, &uVar0))
	{
		vVar4 = { func_209(Global_1295619) };
		iVar7 = 0;
		bVar8 = func_76(uParam0->f_62, -4.733674E-34f);
		if (!bVar8)
		{
			if (func_149(uParam0->f_62, uParam0->f_63, &Var10, &iVar9, 1, 0) && iVar9 > 0)
			{
				iVar7 = Var10[0 /*2*/];
			}
		}
		TELEMETRY::TELEMETRY_CAMP_DONATE(&uVar0, iVar7, vVar4.z, 0, 1, 4.978612f, 7.650333E-20f, uParam0->f_62, bVar8);
	}
}

bool func_106(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<2> Var0;
	struct<2> Var12;
	var uVar25;

	Var0.f_1 = 10;
	Var12.f_1 = 11;
	return func_210(bParam0, &uVar25, &Var12, &Var0, bParam1, iParam2, iParam3, bParam4);
}

void func_107(int iParam0)
{
	if (Global_1940072.f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940072.f_105.f_2 = iParam0;
}

void func_108(var uParam0)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_49, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_50, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_51, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_52, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_53, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_54, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_55, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_56, 0);
	}
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		ANIMSCENE::RESET_ANIM_SCENE(uParam0->f_57, 0);
	}
	func_79(&(uParam0->f_64), &(uParam0->f_65));
	func_79(&(uParam0->f_66), &(uParam0->f_67));
	func_79(&(uParam0->f_68), &(uParam0->f_69));
}

void func_109(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		func_211(11, 1, 0);
		iVar0++;
	}
	if (func_212(bParam0, 0))
	{
		func_213(40);
	}
	else
	{
		func_213(39);
	}
}

bool func_110(int iParam0)
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

int func_111(int iParam0)
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

bool func_112(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

bool func_113(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_114(var uParam0)
{
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_49))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_49 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_explosive_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_49);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_50))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_50 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_bullets_split_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_50);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_51))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_51 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_modify_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_51);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_52))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_52 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_arrows_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_52);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_53))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_53 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_throwingknives_improved_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_53);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_54))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_54 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_improved_tomahawk_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_54);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_55))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_55 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_poison_throwingknives_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_55);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_56))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_56 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_fire_bottle_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_56);
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(uParam0->f_57))
	{
		if (PED::IS_PED_MALE(Global_33))
		{
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite", 0, "pl_craft", false, true);
		}
		else
		{
			uParam0->f_57 = ANIMSCENE::_CREATE_ANIM_SCENE("script@mech@crafting_fallbacks@craft_volatile_dynamite_f", 0, "pl_craft", false, true);
		}
		ANIMSCENE::LOAD_ANIM_SCENE(uParam0->f_57);
	}
}

bool func_115(char* sParam0)
{
	return !MISC::IS_STRING_NULL_OR_EMPTY(sParam0);
}

bool func_116(var uParam0, var uParam1)
{
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(*uParam1))
	{
		if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(*uParam1, true, false))
		{
			if (ANIMSCENE::_IS_ANIM_SCENE_LOADING(*uParam1, true))
			{
				return false;
			}
			else
			{
				ANIMSCENE::LOAD_ANIM_SCENE(*uParam1);
				return false;
			}
		}
	}
	else
	{
		func_114(uParam0);
		return false;
	}
	return true;
}

int func_117(int iParam0)
{
	return iParam0;
}

int func_118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28;
}

int func_119(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	return Global_1144511[iParam0 /*83*/].f_38.f_28.f_1;
}

void func_120(var uParam0, bool bParam1, int iParam2)
{
	Global_1913621[uParam0->f_45 /*9*/].f_5 = iParam2;
	Global_1913621[uParam0->f_45 /*9*/].f_6 = bParam1;
	Global_1913621[uParam0->f_45 /*9*/].f_7 = 1;
	Global_1913621[uParam0->f_45 /*9*/].f_8 = 0;
	Global_1913621.f_1576++;
	uParam0->f_45++;
	if ((iParam2 == 2.273041E-17f || iParam2 == -4.029766E+29f) || iParam2 == 4.431614E+14f)
	{
		func_214(uParam0, bParam1, iParam2);
	}
	else if (iParam2 == -1.428267E+31f)
	{
		func_215(uParam0, bParam1);
	}
}

int func_121(var uParam0, int iParam1)
{
	struct<10> Var0;
	int iVar10;
	int iVar11;
	int iVar12;
	bool bVar13;

	Var0 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, iParam1, 0, -1, Global_1913621.f_1584, 0) };
	if (func_155(Var0, &iVar10, &iVar11, 0))
	{
		iVar12 = 0;
		while (iVar12 < iVar11)
		{
			bVar13 = func_156(iVar12, iVar10);
			if (func_25(bVar13, 0))
			{
				if (uParam0->f_45 >= 175)
				{
				}
				else
				{
					if (Global_1913621.f_1584 == 0 && func_76(bVar13, 4.433856E-28f))
					{
						if (!(Global_1913621.f_1585 != 0 && func_76(bVar13, Global_1913621.f_1585)))
						{
						}
						else if (func_76(bVar13, 2.27271E-29f))
						{
						}
						else
						{
							func_120(uParam0, bVar13, iParam1);
							func_216(uParam0, bVar13, iParam1);
						}
						iVar12++;
						func_217(&iVar10);
						return 1;
						return 0;
					}
				}
			}
		}
	}
}

int func_122(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1.654095E+26f;
		case 1:
			return 2.089344E-22f;
		case 2:
			return 2.158376E-31f;
		case 3:
			return -0.000242469f;
		case 4:
			return 7.979687E+20f;
		case 5:
			return -5.409362E+07f;
		default:
			break;
	}
	return 0;
}

int func_123(bool bParam0, float fParam1, int iParam2)
{
	if (bParam0)
	{
		return fParam1;
	}
	return iParam2;
}

void func_124(var uParam0, char* sParam1, var uParam2)
{
	*uParam0 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam2->f_29, sParam1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "visible", false);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "texture", "");
	DATABINDING::_DATABINDING_ADD_DATA_STRING(*uParam0, "textureDictionary", "inventory_items");
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "count", 3);
	DATABINDING::_DATABINDING_ADD_DATA_INT(*uParam0, "enabled", 1);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(*uParam0, "inUse", false);
}

void func_125(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	bool bVar0;

	bVar0 = Global_1913621[iParam2 /*9*/].f_6;
	if ((bParam4 || func_31(uParam0, 2)) || func_212(bVar0, uParam0->f_42))
	{
		if (bParam1)
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam2 /*9*/].f_1))
			{
				if (bParam5)
				{
					func_126(uParam0, -1, bParam3, Global_1913621[iParam2 /*9*/].f_1, 1, 0, 1);
				}
				DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, uParam0->f_46, -2.238898E-35f, Global_1913621[iParam2 /*9*/].f_1);
			}
			else
			{
				func_218(uParam0, iParam2, bParam1, bParam3);
			}
		}
		else
		{
			if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam2 /*9*/].f_1))
			{
				DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[iParam2 /*9*/].f_1);
			}
			func_218(uParam0, iParam2, 0, bParam3);
		}
		if (uParam0->f_46 == 0)
		{
			uParam0->f_60 = Global_1913621[iParam2 /*9*/].f_6;
			uParam0->f_61 = Global_1913621[iParam2 /*9*/].f_5;
			uParam0->f_59 = Global_1913621[iParam2 /*9*/].f_1;
		}
		uParam0->f_46++;
	}
}

void func_126(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	char[] cVar8[8];
	int iVar9;
	bool bVar10;
	bool bVar11;
	bool bVar12;
	int iVar13;
	bool bVar14;
	struct<2> Var15;
	struct<2> Var18;
	bool bVar40;
	int iVar41;
	struct<7> Var42;
	int iVar49;

	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(iParam3))
	{
		iParam1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iParam3, "iIndex");
	}
	iVar0 = Global_1913621[iParam1 /*9*/].f_1;
	if (!DATABINDING::DATABINDING_IS_ENTRY_VALID(iVar0))
	{
		return;
	}
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eOutputItem");
	iVar2 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(iVar0, "eCost");
	bVar3 = iVar1;
	bVar4 = iVar2;
	iVar5 = func_140(bVar3, bVar4, bParam2, 0);
	iVar6 = func_138(bVar3, 0, 0, 0);
	iVar7 = func_139(bVar3, 0);
	if (iVar7 != -1)
	{
		iVar7 = (iVar7 - iVar6);
	}
	else
	{
		iVar7 = iVar5;
	}
	StringIntConCat(&cVar8, func_141(iVar7, iVar5), 8);
	DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "count", &cVar8);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "visible", false);
	if (func_31(uParam0, 2))
	{
		iVar9 = func_123((iVar5 > 0 && func_136(bVar3)), 1, 0);
	}
	else
	{
		iVar9 = func_123((iVar7 > 0 && iVar5 > 0), 1, 0);
	}
	bVar10 = false;
	if (iVar9 == 0 && func_219(bVar3))
	{
		if (func_220(bVar3, bVar4, uParam0, bParam2, &bVar11, &bVar12, &iVar13))
		{
			iVar9 = 1;
			bVar10 = true;
			if (bParam6)
			{
				bVar3 = bVar11;
				bVar4 = bVar12;
				DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eOutputItem", bVar11);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "eCost", bVar12);
				DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "iCurCostVariant", iVar13);
				bParam5 = true;
			}
		}
	}
	if (!func_31(uParam0, 4))
	{
		if ((bVar4 == -1.428267E+31f || bVar4 == 6.221388E-29f) || DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
		{
			iVar9 = 0;
		}
	}
	if (!Global_1913621.f_1579 && func_134(bVar3, bVar4, 1))
	{
		iVar9 = 0;
		bVar14 = true;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "lockVisible", bVar14);
	if (iVar9 == 1)
	{
		if (!func_137(2) && func_65(bVar3, -1.29539E-20f) == -4.839888E+13f)
		{
			Global_1913621[iParam1 /*9*/].f_2 = 0;
			iVar9 = 0;
		}
		else
		{
			Global_1913621[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		if (((func_31(uParam0, 128) && iVar9 == 0) && Global_1913621[iParam1 /*9*/].f_2) && bParam4)
		{
			DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam0->f_30, iVar0);
		}
		Global_1913621[iParam1 /*9*/].f_2 = 0;
	}
	if (bParam5)
	{
		if (func_221(bVar3, &Var15, 4.975531E-10f, 0, 0, 0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "texture", Var15);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(iVar0, "textureDictionary", Var15.f_1);
		}
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "name", bVar3);
		Var18.f_1 = 20;
		bVar40 = false;
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", 0);
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", 0);
		if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar3, &Var18))
		{
			iVar41 = 0;
			while (iVar41 < Var18)
			{
				if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var18.f_1[iVar41], &Var42))
				{
					iVar49 = Var42.f_2;
					switch (Var42.f_1)
					{
						case -1104847406:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", iVar49);
							break;
						case 1857353317:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", iVar49);
							break;
						case -826379728:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeyeCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeCoreDurationCategory", Var42.f_6);
							break;
						case 1342237631:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "deadeye", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "deadeyeDurationCategory", Var42.f_6);
							break;
						case -943921969:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", iVar49);
							break;
						case -416929031:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", iVar49);
							break;
						case 1869697234:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "health", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthDurationCategory", Var42.f_6);
							break;
						case 2062242710:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreDurationCategory", Var42.f_6);
							break;
						case 381158954:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", iVar49);
							break;
						case 1681823811:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", iVar49);
							break;
						case -1191740624:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCore", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreDurationCategory", Var42.f_6);
							break;
						case -1240225157:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "stamina", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaDurationCategory", Var42.f_6);
							break;
						case 978049229:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", iVar49);
							break;
						case -778289619:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthHorseDurationCategory", Var42.f_6);
							break;
						case -1918697215:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", iVar49);
							break;
						case 1136630075:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "healthCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "healthCoreHorseDurationCategory", Var42.f_6);
							break;
						case 855745648:
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", iVar49);
							break;
						case 1365603835:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaCoreHorse", 12);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaCoreHorseDurationCategory", Var42.f_6);
							break;
						case 1497139093:
							bVar40 = true;
							DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "staminaHorse", 11);
							DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar0, "staminaHorseDurationCategory", Var42.f_6);
							break;
					}
				}
				iVar41++;
			}
		}
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(iVar0, "overpower", bVar40);
	}
	if (!func_31(uParam0, 4) && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(iVar0, "bFireCrafting"))
	{
		iVar9 = 0;
	}
	if (bVar10 && !bParam6)
	{
		iVar9 = 0;
	}
	DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar0, "enabled", iVar9);
}

int func_127(int iParam0)
{
	if (!PED::IS_PED_INJURED(iParam0))
	{
		return PED::GET_MOUNT(iParam0);
	}
	return 0;
}

void func_128(var uParam0, bool bParam1)
{
	int iVar0;

	if (TASK::DOES_SCENARIO_POINT_EXIST(uParam0->f_13))
	{
		iVar0 = TASK::_GET_SCENARIO_POINT_ENTITY(uParam0->f_13);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar0, bParam1, false);
	}
}

void func_129(var uParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	ATTRIBUTE::STOP_ITEM_PREVIEW();
	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eOutputItem");
	iVar1 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "eCost");
	bVar2 = iVar0;
	ATTRIBUTE::STOP_ITEM_PREVIEW();
	if (func_25(bVar2, 0) && (func_31(uParam0, 2) || func_212(bVar2, uParam0->f_42)))
	{
		uParam0->f_27 = -1;
		uParam0->f_23 = 0;
		uParam0->f_62 = bVar2;
		uParam0->f_63 = iVar1;
		func_69(&(uParam0->f_1[1]), 1, 1);
		iVar3 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iNumCostVariants");
		if (iVar3 > 1)
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", true);
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam0->f_29, "variantText", MISC::VAR_STRING(0, uParam0->f_62));
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantCount", iVar3);
			iVar4 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iCurCostVariant");
			iVar5 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(*uParam1, "iIndex");
			if (iVar5 >= 0 && iVar5 < Global_1913621)
			{
				iVar6 = Global_1913621[iVar5 /*9*/].f_8;
			}
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam0->f_29, "variantIndex", (iVar4 + 1 - iVar6));
			func_5(uParam0, 4096);
			if (func_68(uParam0->f_1[5]))
			{
				func_54(uParam0->f_1[5], 1, 1, 1);
			}
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "variantVisible", false);
			func_6(uParam0, 4096);
			if (func_68(uParam0->f_1[5]))
			{
				func_54(uParam0->f_1[5], 0, 1, 1);
			}
		}
		if (!func_31(uParam0, 2))
		{
			uParam0->f_43 = BUILTIN::ROUND((ENTITY::GET_ANIM_DURATION(func_164(uParam0->f_62), func_165(uParam0->f_62)) * 1148846080));
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(*uParam1, "bFireCrafting"))
		{
			func_5(uParam0, 8192);
		}
		else
		{
			func_6(uParam0, 8192);
		}
		uParam0->f_58 = *uParam1;
		uParam0->f_1[1] = func_71("CAMP_REC_MAKE", 439.9228f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		func_53(uParam0, uParam0->f_62, uParam0->f_63);
		func_73(uParam0->f_1[1], 11, 1, 1);
		if (Global_1913621.f_1579 || !func_134(uParam0->f_62, uParam0->f_63, 1))
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", func_158(bVar2));
			func_62(uParam0, 0);
		}
		else
		{
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "RPGDescription", 0);
		}
		if (DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgDescription"))
		{
			if (Global_1913621.f_1579 || !func_134(uParam0->f_62, uParam0->f_63, 1))
			{
				func_160(uParam0);
			}
		}
	}
}

bool func_130(bool bParam0)
{
	if (func_179(bParam0) == 4.324946E+36f && INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, 2.350989E-38f))
	{
		return true;
	}
	return false;
}

char* func_131(var uParam0)
{
	if (func_31(uParam0, 128))
	{
		return "CAMP_REC_ALL";
	}
	return "CAMP_REC_AVL";
}

int func_132(char* sParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_112(iVar0, 2))
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
		func_167(iVar1, iParam1, sParam0, 0, 3, 0, 0f, 0f, 0f, 0f, 0, 0, 4, 1, iParam3, 570, 4000, 10, 2f, 0, 1f, 0, 0, iParam2, 8.750548E+22f, 0);
		return iVar1;
	}
	return 0;
}

void func_133(int iParam0, int iParam1)
{
	int iVar0;

	if (!func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_ALLOWED_ACTION(Global_1951897[iVar0 /*23*/].f_3, iParam1);
}

bool func_134(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_25(bParam0, 0))
	{
		return func_222(func_168(bParam0), bParam1, bParam2);
	}
	if (func_223(bParam0) || func_76(bParam0, 2.791187f))
	{
		return func_225(func_224(bParam0, 1), bParam1);
	}
	if ((bParam2 && func_27() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return true;
	}
	if (!func_226(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_135(bool bParam0, bool bParam1, var uParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
{
	struct<2> Var0;

	*uParam2 = 0;
	*uParam3 = 0;
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913621.f_1579 && !bParam5)
	{
		if (func_186(bParam0))
		{
			if (func_225(func_187(bParam0), bParam1))
			{
				return false;
			}
		}
		else if (func_134(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	if (func_186(bParam0))
	{
		if (func_188(func_187(bParam0), bParam1, &Var0, 0, bParam7))
		{
			return true;
		}
	}
	else if (func_227(bParam0, 1, bParam1, &Var0, iParam4, bParam6, 0, bParam7))
	{
		return true;
	}
	*uParam2 = Var0;
	*uParam3 = Var0.f_1;
	return false;
}

bool func_136(bool bParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_229(func_228());
	iVar1 = func_229(bParam0);
	return iVar1 > iVar0;
}

bool func_137(int iParam0)
{
	return func_230(Global_1940072.f_38, iParam0);
}

int func_138(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	struct<4> Var3;

	iVar0 = 0;
	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	iVar1 = func_179(bParam0);
	if (iVar1 == 6.919076E-28f || (bParam1 && iVar1 == -3.265313E+23f))
	{
		bVar2 = func_231(bParam0, 1);
		if (bVar2 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bVar2);
		}
	}
	else if (iVar1 == -3.265313E+23f)
	{
		return func_232(bParam0, 0);
	}
	if (func_233(bParam0, -3.294982E+22f) != 0)
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam2), bParam0, bParam3);
	}
	else
	{
		Var3 = { func_234(bParam0, bParam2) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var3))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(bParam2), &Var3, bParam3);
	}
	return iVar0;
}

int func_139(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_184(bParam0, 0, 0) };
	return func_235(bParam0, &Var0, 0, bParam1);
}

int func_140(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	bool bVar33;
	int iVar34;
	int iVar35;
	int iVar36;
	int iVar37;
	int iVar38;

	if (!func_149(bParam0, bParam1, &Var0, &iVar31, 1, 0))
	{
		return 0;
	}
	bVar33 = ((!bParam3 && func_80(0)) && !func_81());
	iVar34 = -1;
	iVar35 = -1;
	if (Global_1915643.f_20638)
	{
		iVar35 = Global_1915643.f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (Var0[iVar32 /*2*/] == 0)
		{
			Jump @338; //curOff = 103
		}
		else
		{
			iVar36 = func_236(iVar35, Var0[iVar32 /*2*/]);
			if (iVar36 != 0)
			{
				bParam2 = false;
				iVar37 = func_237(Var0[iVar32 /*2*/], iVar36);
			}
			else
			{
				iVar37 = func_138(Var0[iVar32 /*2*/], 0, !bVar33, 1);
			}
			if (bVar33)
			{
				if (func_238(Var0[iVar32 /*2*/]) || func_239(Var0[iVar32 /*2*/]))
				{
					iVar37 = (iVar37 + func_240(Var0[iVar32 /*2*/], 0));
					if (bParam2)
					{
						iVar38 = 0;
						iVar37 = (iVar37 + func_241(7, Var0[iVar32 /*2*/], &iVar38));
					}
				}
				else if (bParam2)
				{
					iVar37 = (iVar37 + (func_242(7, Var0[iVar32 /*2*/]) + func_243(Var0[iVar32 /*2*/])));
				}
			}
			if (iVar37 < Var0[iVar32 /*2*/].f_1)
			{
				return 0;
			}
			iVar37 = (iVar37 / Var0[iVar32 /*2*/].f_1);
			if (iVar34 == -1 || iVar37 < iVar34)
			{
				iVar34 = iVar37;
			}
		}
		iVar32++;
	}
	return iVar34;
}

int func_141(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

bool func_142(var uParam0, bool bParam1)
{
	if (!func_31(uParam0, 4))
	{
		return false;
	}
	if (func_130(bParam1) && func_244())
	{
		return true;
	}
	return false;
}

bool func_143(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4)
{
	struct<2> Var0[15];
	bool bVar31;
	int iVar32;
	int iVar33;
	bool bVar34;
	struct<2> Var35;
	int iVar38;
	bool bVar39;
	char* sVar40;
	char cVar41[16];
	int iVar43;
	int iVar44;
	bool bVar45;
	int iVar46;
	var uVar47;
	int iVar48;
	bool bVar49;

	bVar34 = !bParam4;
	DATABINDING::_DATABINDING_CLEAR_BINDING_ARRAY(uParam2->f_41);
	iVar33 = 0;
	while (iVar33 < 4)
	{
		DATABINDING::_DATABINDING_REMOVE_BINDING_ARRAY_ITEM_BY_DATA_CONTEXT_ID(uParam2->f_41, uParam2->f_36[iVar33]);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "visible", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "inUse", false);
		iVar33++;
	}
	if (!bParam4 && func_149(bParam0, bParam1, &Var0, &iVar32, 1, 0))
	{
		iVar33 = 0;
		while (iVar33 < iVar32)
		{
			if (iVar33 >= 4)
			{
			}
			else
			{
				bVar31 = Var0[iVar33 /*2*/];
				if (func_25(bVar31, 0))
				{
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "visible", true);
					if (func_221(bVar31, &Var35, 4.975531E-10f, 0, 0, 0))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[iVar33], "texture", Var35);
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_31[iVar33], "textureDictionary", Var35.f_1);
					}
					iVar38 = func_138(bVar31, 0, 0, 0);
					bVar39 = iVar38 >= Var0[iVar33 /*2*/].f_1;
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[iVar33], "count", iVar38);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_31[iVar33], "enabled", func_123(bVar39, 1, 0));
					DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam2->f_31[iVar33], "inUse", true);
					if (!bVar39)
					{
						bVar34 = false;
					}
					sVar40 = MISC::VAR_STRING(10, "CRFT_ING_LIST", MISC::VAR_STRING(0, Var0[iVar33 /*2*/]), func_123((func_31(uParam2, 131072) && uParam2->f_27 > 1), func_141(3, uParam2->f_27), Var0[iVar33 /*2*/].f_1));
					StringCopy(&cVar41, "Text", 16);
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_36[iVar33], &cVar41, sVar40);
					StringCopy(&cVar41, "Enabled", 16);
					DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(uParam2->f_36[iVar33], &cVar41, func_123(bVar39, 1, 0));
					DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam2->f_41, -1, 7.867115E-28f, uParam2->f_36[iVar33]);
				}
				iVar33++;
			}
		}
	}
	if (bVar34)
	{
		if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_63 == -1.428267E+31f) || uParam2->f_63 == 6.221388E-29f))
		{
			bVar34 = false;
			if (func_130(bParam0))
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
			}
		}
		else
		{
			iVar43 = func_138(bParam0, 0, 0, 0);
			iVar44 = func_139(bParam0, 0);
			if (func_31(uParam2, 2) && !func_136(bParam0))
			{
				bVar34 = false;
				bVar45 = func_228();
				if (bParam0 == bVar45)
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
				}
				else
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
				}
			}
			else if ((iVar44 - iVar43) > 0 || iVar44 == -1)
			{
				iVar46 = func_65(bParam0, -1.29539E-20f);
				if (!func_137(2) && iVar46 == -4.839888E+13f)
				{
					bVar34 = false;
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_CONS"));
				}
				else if (ENTITY::DOES_ENTITY_EXIST(iParam3))
				{
					DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(34, "CRFT_BREAK", 1, MISC::VAR_STRING(0, PLAYER::GET_DISCOVERABLE_NAME_HASH_AND_TYPE_FOR_ENTITY(iParam3, &uVar47))));
				}
				else
				{
					iVar48 = func_140(bParam0, uParam2->f_63, func_82(), 0);
					if (func_31(uParam2, 2))
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, func_245(bParam0)));
					}
					else if (uParam2->f_63 == -1.428267E+31f)
					{
						if (DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam2->f_58, "iNumCostVariants") <= 1 && DATABINDING::_DATABINDING_READ_DATA_BOOL_FROM_PARENT(uParam2->f_29, "ShowRpgDescription"))
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CAMP_MEAT_POOR"));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar48));
						}
					}
					else if (uParam2->f_63 == 6.221388E-29f)
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "COOK_ING_HAVE", iVar48));
					}
					else if (iVar46 == -4.839888E+13f)
					{
						if (iVar48 == 1)
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE1", iVar48));
						}
						else
						{
							DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "BREW_ING_HAVE", iVar48));
						}
					}
					else
					{
						DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_HAVE", iVar48));
					}
				}
			}
			else
			{
				DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(130, "CRFT_ING_MAX", iVar43, iVar44, MISC::VAR_STRING(0, bParam0)));
				bVar34 = false;
			}
		}
	}
	else if (bParam4)
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_LOCK"));
	}
	else if (!func_31(uParam2, 4) && ((func_31(uParam2, 8192) || uParam2->f_63 == -1.428267E+31f) || uParam2->f_63 == 6.221388E-29f))
	{
		bVar34 = false;
		if (func_130(bParam0))
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE_CK"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_FIRE"));
		}
	}
	else if (func_31(uParam2, 2) && !func_136(bParam0))
	{
		bVar49 = func_228();
		if (bParam0 == bVar49)
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE"));
		}
		else
		{
			DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "STEW_MADE_BETTER"));
		}
	}
	else
	{
		DATABINDING::DATABINDING_WRITE_STRING_FROM_PARENT(uParam2->f_29, "tipText", MISC::VAR_STRING(2, "CRFT_ING_NEED"));
	}
	return bVar34;
}

void func_144(var uParam0)
{
	if (func_31(uParam0, 2))
	{
		if (!func_76(uParam0->f_62, -4.733674E-34f))
		{
			func_69(&(uParam0->f_1[7]), 1, 1);
			return;
		}
		if (!func_68(uParam0->f_1[7]))
		{
			uParam0->f_1[7] = func_71("CAMP_ADD_TASK", -5.63933E-33f, 3, 0, 0, 0, 570, 4000, 10, 2f, 8.750548E+22f, 0);
		}
		if ((uParam0->f_27 > 0 || uParam0->f_62 == Global_1147168.f_339.f_16) || !func_136(uParam0->f_62))
		{
			func_54(uParam0->f_1[7], 0, 1, 1);
		}
		else
		{
			func_54(uParam0->f_1[7], 1, 1, 1);
		}
	}
}

void func_145(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_146(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_112(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_147(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_148(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

bool func_149(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_246(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_150(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_179(bParam0);
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
			if (!func_247(bParam0, 1))
			{
				return false;
			}
			break;
		case joaat("CLOTHING"):
			if (func_248(bParam0))
			{
				return true;
			}
			break;
	}
	return func_138(bParam0, 0, 0, 0) >= iParam1;
}

bool func_151(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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
					*iParam1 = iVar1;
					iParam1->f_1 = iVar2;
					iParam1->f_2 = iParam2;
					return true;
				}
			}
			iVar0++;
		}
	}
	return false;
}

int func_152(bool bParam0)
{
	struct<5> Var0;

	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

void func_153(var uParam0, char* sParam1)
{
	int iVar0;

	if (func_68(*uParam0))
	{
		iVar0 = func_117(*uParam0);
		if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
		{
			HUD::_UI_PROMPT_SET_TAG(Global_1951897[iVar0 /*23*/].f_3, sParam1);
		}
	}
}

struct<10> func_154(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_155(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int* iParam11, int iParam12)
{
	*iParam10 = ITEMDATABASE::_ITEMDATABASE_CREATE_ITEM_COLLECTION(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_156(int iParam0, int iParam1)
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

int func_157(int iParam0)
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

int func_158(bool bParam0)
{
	struct<19> Var0;

	Var0.f_2 = 5;
	Var0.f_18 = 8;
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_UI_DATA(bParam0, &Var0))
	{
		return Var0.f_1;
	}
	return 0;
}

void func_159(var uParam0)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
}

void func_160(var uParam0)
{
	if ((func_76(uParam0->f_62, 888.6404f) || func_31(uParam0, 2)) && !func_76(uParam0->f_62, 4.644778E+30f))
	{
		if (func_212(uParam0->f_62, 5))
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 2);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", true);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
		}
		else
		{
			ATTRIBUTE::_START_ITEM_PREVIEW(uParam0->f_62, 1);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
			DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", true);
		}
	}
	else
	{
		ATTRIBUTE::STOP_ITEM_PREVIEW();
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgHorse", false);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL_FROM_PARENT(uParam0->f_29, "ShowRpgPlayer", false);
	}
}

void func_161(var uParam0)
{
	int iVar0;

	iVar0 = DATABINDING::_DATABINDING_READ_DATA_INT_FROM_PARENT(uParam0->f_29, "filterIndex");
	uParam0->f_42 = iVar0;
	DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(uParam0->f_29, "filter", func_122(uParam0->f_42));
}

int func_162(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return -2.313736E+30f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return 9.171683E+16f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return 7.069783E-10f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return 0.0006533724f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return -3.730768E+35f;
	}
	return 0;
}

Vector3 func_163(int iParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(iParam0);
	if (WEAPON::IS_WEAPON_PISTOL(iVar0))
	{
		return 0f, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REVOLVER(iVar0))
	{
		return -1146890486, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_RIFLE(iVar0))
	{
		return -1124744561 /* Float: -0.03f */, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_REPEATER(iVar0))
	{
		return 1000593162 /* Float: 0.005f */, 0f, 0f;
	}
	else if (WEAPON::IS_WEAPON_SHOTGUN(iVar0))
	{
		return 0f, 0f, 0f;
	}
	return 0f, 0f, 0f;
}

char* func_164(var uParam0)
{
	if (PED::IS_PED_MALE(Global_33))
	{
		return "MECH_INVENTORY@CRAFTING@FALLBACKS@IN_HAND@MALE_A";
	}
	return "MP_AMB_PLAYER@CRAFTING@FALLBACKS@IN_HAND@FEMALE_A";
}

char* func_165(var uParam0)
{
	return "craft_trans_stow";
}

void func_166(int iParam0)
{
	if (!func_249(iParam0))
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

void func_167(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_146(iParam0, 1);
	func_147(iParam0, 1);
	func_148(iParam0, 128);
}

bool func_168(bool bParam0)
{
	return bParam0;
}

int func_169(bool bParam0, int iParam1)
{
	if (!func_250(bParam0, 2))
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

bool func_170(bool bParam0)
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

bool func_171(bool bParam0)
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

int func_172(bool bParam0)
{
	if (func_27() == -1)
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

int func_173(int iParam0)
{
	iParam0 = func_251(iParam0);
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

float func_174(int iParam0, int iParam1, bool bParam2)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0f;
	}
	if (bParam2)
	{
		return BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
	}
	return func_252(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false));
}

int func_175(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1[15];
	bool bVar32;
	bool bVar34;
	int iVar35;
	var uVar36;
	int iVar37;
	int iVar38;
	int iVar39;
	int iVar40;
	int iVar41;

	if (!func_80(0))
	{
		return 0;
	}
	else if (func_81())
	{
		return 0;
	}
	iVar0 = -1;
	if (Global_1915643.f_20638)
	{
		iVar0 = Global_1915643.f_20241;
	}
	if (!func_227(bParam0, 1, bParam1, &bVar32, &uVar36, bParam3, 0, 0))
	{
		bVar34 = bVar32;
		return 0;
	}
	if (func_149(bParam0, bParam1, &Var1, &iVar35, 1, 0))
	{
		iVar38 = 0;
		while (iVar38 < iVar35)
		{
			bVar34 = Var1[iVar38 /*2*/];
			iVar37 = func_236(iVar0, bVar34);
			if (iVar37 != 0)
			{
				bParam3 = false;
			}
			if (func_25(bVar34, 0))
			{
				if (bVar34 == 3.996812E+36f)
				{
					func_253(Var1[iVar38 /*2*/].f_1, 0, 0, bParam2, 0);
				}
				else if (bParam3)
				{
					if (func_238(bVar34) || func_239(bVar34))
					{
						if (!func_150(bVar34, Var1[iVar38 /*2*/].f_1))
						{
							iVar39 = func_254(7, bVar34, Var1[iVar38 /*2*/].f_1);
						}
						func_255(bVar34, iVar39, 9.275179E-19f, 0, 0);
						Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - iVar39);
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (!func_150(bVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_256(bVar34, Var1[iVar38 /*2*/].f_1);
							}
							if (func_150(bVar34, Var1[iVar38 /*2*/].f_1))
							{
								func_257(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, -5.149929E+33f);
							}
						}
					}
					else
					{
						if (func_243(bVar34) > 0)
						{
							func_258(bVar34);
							Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - 1);
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							if (func_242(7, bVar34) > 0)
							{
								func_259(7, bVar34, Var1[iVar38 /*2*/].f_1);
								Var1[iVar38 /*2*/].f_1 = (Var1[iVar38 /*2*/].f_1 - func_259(7, bVar34, Var1[iVar38 /*2*/].f_1));
							}
						}
						if (Var1[iVar38 /*2*/].f_1 > 0)
						{
							func_257(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, 9.275179E-19f);
						}
					}
				}
				else if (iVar37 == 0)
				{
					if (func_238(bVar34) || func_239(bVar34))
					{
						if (!func_150(bVar34, Var1[iVar38 /*2*/].f_1))
						{
							func_256(bVar34, Var1[iVar38 /*2*/].f_1);
						}
					}
					func_257(bVar34, Var1[iVar38 /*2*/].f_1, bParam2, 9.275179E-19f);
				}
				else
				{
					func_260(bVar34, iVar37, Var1[iVar38 /*2*/].f_1, 9.275179E-19f);
				}
				iVar40 = func_261(bVar34);
				if (func_262(iVar40))
				{
					iVar41 = func_263(iVar40);
					func_89(func_88(-7.383178E+26f, iVar41), Var1[iVar38 /*2*/].f_1);
				}
			}
			iVar38++;
		}
		return 1;
	}
	return 0;
}

struct<2> func_176(float fParam0)
{
	struct<2> Var0;

	Var0.f_1 = fParam0;
	return Var0;
}

bool func_177(bool bParam0, bool bParam1)
{
	if (!func_25(bParam0, 0))
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

void func_178(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 != -1)
	{
		return;
	}
	if (!func_264(bParam0))
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

int func_179(bool bParam0)
{
	vector3 vVar0;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_180(bool bParam0, bool bParam1)
{
	var uVar0;
	var uVar5;
	var uVar9;
	struct<5> Var10;
	var uVar15;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (!func_265(bParam0, 3.210799E-08f, &uVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_266() };
	Var10.f_4 = uVar9;
	if (func_267(bParam0, &uVar15, &Var10, 1, 6.028273E-12f, 0))
	{
		if (bParam1)
		{
			if (!func_268(bParam0, 1))
			{
			}
		}
		if (func_269(bParam0))
		{
			func_180(func_270(bParam0), 1);
		}
		func_271();
		return true;
	}
	return false;
}

void func_181(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
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

	if (!func_25(bParam0, 0))
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
	if (!func_272() || bParam6)
	{
		func_273(bParam0, iParam1, bParam2, bParam4, bParam3, bParam5);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_274(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (bParam0 == 6.911906E+22f)
	{
		StringCopy(&cVar2, "ITEM_GET_PUMP", 32);
	}
	if (iParam1 > 0)
	{
	}
	else if (bParam3 || bParam4)
	{
		StringCopy(&cVar2, func_274(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		bVar0 = true;
	}
	else if (bParam2 && func_275(bParam0, 2097152))
	{
		StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
	}
	else
	{
		bVar0 = true;
	}
	iVar6 = func_179(bParam0);
	iVar10 = 0;
	fVar11 = 4.975531E-10f;
	if ((((((((iVar6 == 6.919076E-28f && bParam0 != 1.024642E-23f) && bParam0 != -0.0001582362f) && bParam0 != 6.749065E-23f) && bParam0 != -4.382751E+30f) && bParam0 != 0.0002301198f) && bParam0 != 6.911906E+22f) && !func_76(bParam0, -5.215192E-33f)) && !func_76(bParam0, 5.48031E-34f))
	{
		iVar10 = 1.334267E-16f;
		fVar11 = 1.334267E-16f;
	}
	iVar12 = func_189(bParam0);
	if (((((((iVar6 == -287.6557f || iVar6 == 2.678246E-15f) || iVar12 == -5.930502E-22f) || iVar12 == 6.813211E-30f) || iVar12 == 3.588834E-09f) || iVar12 == -1.005061E+16f) || iVar12 == 8.083898E+09f) || iVar12 == 272038.9f)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_221(bParam0, &Var7, fVar11, iVar10, 0, -2.889029E+24f))
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
	if (func_76(bParam0, 6.834376E-22f))
	{
		sVar17 = func_276(bParam0);
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
	if (func_76(bParam0, 9.618302E+26f))
	{
		fVar13 = 3.405875E-36f;
	}
	if (func_277(bParam0))
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
	bVar18 = func_278(bParam0, 0);
	if ((func_279(iVar12) && func_76(bParam0, -7.13245E+27f)) && bVar18 != 0)
	{
		bVar18 = func_280(bParam0);
	}
	else if (func_179(bParam0) == -42.1084f)
	{
		bVar19 = func_281(bParam0);
		if (func_25(bVar19, 0))
		{
			bVar18 = func_278(bVar19, 0);
		}
	}
	if (func_282(bParam0, 3.62898E+13f) && bParam3)
	{
		iVar20 = 1;
		func_283(bParam0, -982726.7f, &iVar20, 0);
		iVar1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iVar1) / BUILTIN::TO_FLOAT(iVar20)));
		iParam1 = BUILTIN::CEIL((BUILTIN::TO_FLOAT(iParam1) / BUILTIN::TO_FLOAT(iVar20)));
	}
	sVar21 = func_284(MISC::VAR_STRING(10, &cVar2, MISC::VAR_STRING(0, bVar18), iVar1), fVar13);
	if (iParam1 == 1)
	{
		sVar21 = MISC::VAR_STRING(0, bVar18);
	}
	if ((((((iVar12 == -6.84366E-28f && bParam0 != -2.296707E-23f) && bParam0 != 2.515798E+09f) && bParam0 != -3.916588E+30f) || ((iVar12 == 1.226722E-30f && bParam0 != 9.94413E+23f) && bParam0 != -2.419822E+17f)) || (iVar12 == 6.813211E-30f && bParam0 != -9.486547E+07f)) || (iVar12 == -1.005061E+16f && bParam0 != -8.665711E-37f))
	{
		sVar21 = MISC::VAR_STRING(0, func_285(bParam0, -9.085264E+22f));
	}
	if (iVar12 == -1.955052E+34f || iVar12 == 4.029065E+31f)
	{
		StringCopy(&cVar22, "", 128);
		if (func_286(bParam0, &cVar22))
		{
			sVar21 = func_288(func_287(cVar22), 4.808429E-35f);
		}
	}
	func_289(sVar21, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar16, fVar13, sVar15, sVar14, 0, 1);
}

int func_182(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
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

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (!func_290(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_291(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_292(bParam0, bParam2);
	iVar2 = 0;
	if (func_179(bParam0) == -42.1084f)
	{
		if (!func_76(bParam0, 7.396633E-08f) && !func_76(bParam0, -6.685221E-33f))
		{
			bVar3 = true;
		}
	}
	if (func_275(bParam0, 8388608) && !func_293(27))
	{
		func_294(27);
	}
	func_295(bParam0);
	if (!bVar3)
	{
		if (func_76(bParam0, -7.272718E-19f))
		{
			bParam2 = true;
			bVar4 = true;
			bVar1 = func_177(func_77(bParam0, 1), 0);
			if (WEAPON::IS_WEAPON_VALID(bVar1))
			{
				if (func_27() == -1)
				{
					func_178(bVar1);
				}
				if (func_80(0) && func_296(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
				{
					func_297(bParam0, iVar0, iParam5);
					if (!bParam9)
					{
						bParam2 = false;
					}
				}
				else
				{
					func_298(bParam0, iVar0, iParam5);
				}
			}
		}
		else if (func_179(bParam0) == -3.265313E+23f)
		{
			if (!func_299(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_179(bParam0) == 6.919076E-28f && func_300(bParam0))
		{
			if (!func_301(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_76(bParam0, -1.355837E+35f))
		{
			func_89(func_176(-182.2023f), iVar0);
		}
		else if (bParam0 == 8.064365E+36f)
		{
			func_89(func_88(-1.250509E+13f, 6.875483E+36f), iVar0);
		}
		else if (func_76(bParam0, -3.187887E+34f) && !func_76(bParam0, 3.708451E-17f))
		{
			if (bParam0 != 4.568779E-32f)
			{
				func_302(536, 0);
			}
			if (func_76(bParam0, -2.826186E-34f) || func_76(bParam0, -5.200334E-11f))
			{
			}
		}
		else if (func_76(bParam0, -8.87647E+33f))
		{
			if (func_76(bParam0, -157.5682f))
			{
			}
		}
		else if (func_76(bParam0, -1.641295E-14f) && func_76(bParam0, 888.6404f))
		{
			func_302(519, 0);
		}
		else if (func_76(bParam0, 888.6404f) && func_76(bParam0, -1.086842E+20f))
		{
		}
		else if (func_76(bParam0, 4.619806E-19f))
		{
		}
		else if (func_76(bParam0, 9.243318E-18f))
		{
			if (func_303())
			{
				func_304(7.177414E+09f, 0, 1f, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_76(bParam0, 1.063826E-10f) && func_76(bParam0, 7.561756E-05f))
		{
			func_305(bParam0);
		}
		else if (func_76(bParam0, -1.56509E-23f))
		{
			func_306(bParam0);
		}
		else if (func_76(bParam0, -2.873199E-24f))
		{
			func_307(bParam0);
		}
		else if (func_76(bParam0, -0.08388482f) && func_76(bParam0, 7.561756E-05f))
		{
			func_308(bParam0);
		}
		else if (bParam0 == -2.680077E+18f)
		{
			Global_1940072.f_21 = 0;
		}
		else if (func_76(bParam0, 7.339242E+27f))
		{
			func_309();
		}
		else if (func_76(bParam0, -6.685221E-33f))
		{
		}
		else if (func_76(bParam0, 3.708451E-17f))
		{
		}
		else if (func_76(bParam0, -0.08388482f) && func_76(bParam0, -8.498268E-23f))
		{
		}
		else if (func_76(bParam0, -2.826186E-34f) || func_76(bParam0, -5.200334E-11f))
		{
		}
		else if (func_76(bParam0, -7.721469E-31f))
		{
			return 0;
		}
		else if (func_76(bParam0, 37699.67f))
		{
			switch (bParam0)
			{
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_LAKE"):
					if (!func_150(3.397524E-31f, 1))
					{
						func_182(3.397524E-31f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_RIVER"):
					if (!func_150(6.760231E-15f, 1))
					{
						func_182(6.760231E-15f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LEG_LURE_SWAMP"):
					if (!func_150(-13818.36f, 1))
					{
						func_182(-13818.36f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_LAKE"):
					if (!func_150(4.642866E-20f, 1))
					{
						func_182(4.642866E-20f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_RIVER"):
					if (!func_150(-21.88862f, 1))
					{
						func_182(-21.88862f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
				case joaat("UPGRADE_FSH_BAIT_LURE_SWAMP"):
					if (!func_150(5.120068E-22f, 1))
					{
						func_182(5.120068E-22f, 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_76(bParam0, -5.092244E+08f) && func_275(bParam0, 4))
		{
		}
		else if (func_76(bParam0, 9.811189E+11f))
		{
			func_310(bParam0, &iVar2);
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
				func_311(272, func_278(-1.263708E+38f, 0), 0);
				break;
			case joaat("CONSUMABLE_GINSENG_ELIXIER"):
				func_311(270, func_278(1.344431E-31f, 0), 0);
				break;
			case joaat("CONSUMABLE_VALERIAN_ROOT"):
				func_311(271, func_278(-7.101952E+23f, 0), 0);
				break;
			case -1080874779: /* GXTEntry: "Special Health Cure" */
			case joaat("CONSUMABLE_POTENT_MEDICINE"):
			case joaat("CONSUMABLE_MEDICINE"):
			case joaat("CONSUMABLE_MOONSHINE"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_312(685, 1.579975E+31f, 1, 1);
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
					func_312(685, 42.3843f, 1, 1);
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
					func_312(685, 2.097458E+12f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_SPECIAL_TONIC_CRAFTED"):
			case joaat("CONSUMABLE_TONIC"):
			case joaat("CONSUMABLE_POTENT_TONIC"):
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_312(685, -6.137742E-06f, 1, 1);
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
					func_312(686, NaNf, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case -1977068039: /* GXTEntry: "High Quality Beef and Eggs Stew" */
			case -399865011: /* GXTEntry: "Regional Beef and Eggs Stew" */
				if (MISC::GET_GAME_TIMER() >= (Global_1940239.f_11598 + 60000))
				{
					func_312(686, -7.923627E-17f, 1, 1);
					Global_1940239.f_11598 = MISC::GET_GAME_TIMER();
				}
				break;
			case joaat("CONSUMABLE_HAIR_TONIC"):
				func_302(526, 0);
				break;
			case joaat("CONSUMABLE_HAIR_GREASE"):
				func_302(529, 0);
				break;
			case joaat("CONSUMABLE_CIGARETTE_BOX"):
				break;
			case joaat("CONSUMABLE_COFFEE_GNDS_REG"):
				if (func_293(1))
				{
					func_302(522, 0);
				}
				break;
			case joaat("KIT_GUN_OIL"):
				func_302(521, 0);
				break;
			case joaat("UPGRADE_UPG_MORTAR_PESTLE"):
				if (func_27() == -1)
				{
					bParam0 = -7.729678E-14f;
				}
				break;
			case joaat("UPGRADE_UPG_COFFEE_KIT"):
				func_302(534, 0);
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
		func_313(&bVar5);
		if (!func_298(bVar5, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_80(0))
		{
			return 1;
		}
		if (func_179(bParam0) == -42.1084f)
		{
			func_314(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_80(0) && !func_81())
		{
			Var6.f_1 = 10;
			Var6.f_12 = 10;
			MISC::_LOOT_TABLES_GET_INFO(Global_33, false, false, iVar2, &Var6, 0);
			iVar29 = 0;
			while (iVar29 < Var6)
			{
				func_182(Var6.f_1[iVar29], Var6.f_12[iVar29], 0, 0, 0, -4207915f, 0, 0, 0, 0);
				iVar29++;
			}
		}
		else
		{
			func_315(iVar2, 0);
		}
	}
	Var30 = { func_316(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var30))
	{
		STATS::_STAT_ID_INCREMENT_INT(&Var30, iVar0);
	}
	func_317(bParam0);
	if (fParam6 > 0f)
	{
		if (func_76(bParam0, -5.092244E+08f))
		{
			func_318(bParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar32 = iParam5 == 3787186f;
		func_181(bParam0, iVar0, 0, bVar32, 0, 0, 0);
	}
	return 1;
}

int func_183(bool bParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	var uVar5;

	if (!func_319(bParam0, iParam1))
	{
		return 0;
	}
	Var0.f_4 = func_320(iParam1);
	Var0 = { func_321(0) };
	if (!func_267(bParam0, &uVar5, &Var0, iParam2, 6.028273E-12f, 1))
	{
		return 0;
	}
	return 1;
}

struct<5> func_184(bool bParam0, bool bParam1, bool bParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	struct<10> Var28;

	Var0 = { func_321(bParam1) };
	Var0.f_4 = 4.978612f;
	iVar5 = func_179(bParam0);
	switch (iVar5)
	{
		case joaat("CLOTHING"):
			Var0 = { func_322(5.207907E-07f, Var0, 0.08386164f, bParam1) };
			Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			break;
		case joaat("WEAPON"):
			Var0 = { func_323(bParam1) };
			if (bParam2 && func_324(bParam0, 1))
			{
				Var6.f_9 = -5.45926E-19f;
				if (!func_325(bParam0, &Var0, 6.282013E+23f, 0, 0))
				{
					Var0.f_4 = 6.282013E+23f;
				}
				else if (!func_325(bParam0, &Var0, -3.587391E+15f, 0, 0))
				{
					Var0.f_4 = -3.587391E+15f;
				}
				else if (func_326(bParam0, &Var6, 6.282013E+23f))
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
			Var0 = { func_327(bParam1) };
			switch (func_189(bParam0))
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
			if (func_328(bParam0, -2.580501E-27f))
			{
				Var0 = { func_322(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, -7.437896E-28f);
			}
			else if (func_328(bParam0, -4.220332E-15f))
			{
				Var0 = { func_322(5.207907E-07f, Var0, 0.08386164f, bParam1) };
				Var0.f_4 = INVENTORY::_GET_DEFAULT_ITEM_SLOT_INFO(bParam0, 5.207907E-07f);
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -1.856312E-30f))
			{
				Var0 = { func_322(-7.437896E-28f, Var0, 4.978612f, bParam1) };
				Var0.f_4 = -1.856312E-30f;
			}
			else if (INVENTORY::_INVENTORY_FITS_SLOT_ID(bParam0, -6.082892E-09f))
			{
				Var0.f_4 = -6.082892E-09f;
			}
			else if (func_328(bParam0, -3.171238E-21f))
			{
				Var0 = { func_322(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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
				if (!func_329(Var0, &Var28, bParam1, 0, -1))
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
			else if (func_328(bParam0, -3.171238E-21f))
			{
				Var0 = { func_322(2.884954E+11f, Var0, 6.727819E+25f, bParam1) };
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

bool func_185(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, float fParam6)
{
	struct<4> Var0;
	struct<10> Var4;
	int iVar26;
	int iVar27;

	func_330(&bParam0);
	if (!func_25(bParam0, 0) && !func_250(func_168(bParam0), 2))
	{
		return false;
	}
	if (!bParam3 && func_233(bParam0, -3.294982E+22f) == 0)
	{
		bParam3 = true;
	}
	if (func_331(bParam0) && WEAPON::IS_WEAPON_A_GUN(bParam0))
	{
		Var0 = { func_323(0) };
		Var4.f_9 = -5.45926E-19f;
		if (!func_325(bParam0, &Var0, 6.282013E+23f, 0, 0))
		{
			return false;
		}
		else if (func_326(bParam0, &Var4, 6.282013E+23f))
		{
			return false;
		}
		if (func_324(bParam0, 1))
		{
			if (!func_325(bParam0, &Var0, -3.587391E+15f, 0, 0))
			{
				return false;
			}
			else if (func_326(bParam0, &Var4, -3.587391E+15f))
			{
				return false;
			}
		}
		return true;
	}
	iVar26 = iParam5;
	if (iParam5 < 0)
	{
		iVar26 = func_235(bParam0, iParam1, bParam3, bParam4);
	}
	if (iVar26 < 0)
	{
		return false;
	}
	else if (iVar26 == 0)
	{
		return true;
	}
	iVar27 = func_332(bParam0, *iParam1, iParam1->f_4, bParam4, bParam3, fParam6);
	if ((iVar27 + iParam2) > iVar26)
	{
		return true;
	}
	return false;
}

bool func_186(bool bParam0)
{
	return (func_333(bParam0) && func_76(bParam0, 4.31212E+18f));
}

bool func_187(bool bParam0)
{
	if (!func_186(bParam0))
	{
		return false;
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
	return false;
}

bool func_188(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	int iVar35;

	if (!func_334(bParam0, bParam1, &Var0, &iVar31, 0, 1))
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
				if (!bParam4 && !func_335(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else if (Var0[iVar32 /*2*/] == 3.414007E-11f)
			{
				if (!bParam4 && !func_336(Var0[iVar32 /*2*/].f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_236(iVar34, Var0[iVar32 /*2*/]);
				if (iVar33 != 0)
				{
					iVar35 = func_237(Var0[iVar32 /*2*/], iVar33);
				}
				else
				{
					iVar35 = func_138(Var0[iVar32 /*2*/], 0, bParam3, 1);
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

int func_189(bool bParam0)
{
	struct<2> Var0;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_190(bool bParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
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

	if (!func_25(bParam0, 0))
	{
		return -1;
	}
	if (func_179(bParam0) != 5.407193E-38f)
	{
		return -1;
	}
	if (func_81())
	{
		bParam3 = true;
	}
	if (bParam5 == -2.401104E+18f || bParam5 == -982726.7f)
	{
		iVar0 = (func_337(bParam0, bParam5, 1, 0, 1, 3.996812E+36f) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_337(bParam0, bParam5, 1, 0, 1, 3.414007E-11f) * iParam2);
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
	else if (func_149(bParam0, bParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
			if (!func_138(Var2[iVar35 /*2*/], 0, bParam3, 0) >= iVar34)
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
	if (!bParam3 && func_80(0))
	{
		if (iVar0 > 0)
		{
			func_255(3.996812E+36f, iVar0, -5.149929E+33f, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_255(3.414007E-11f, iVar1, -5.149929E+33f, 0, 0);
		}
		else if (func_338(bParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35 /*2*/].f_1 * iParam2);
				func_255(Var2[iVar35 /*2*/], iVar34, -5.149929E+33f, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -5.45926E-19f;
	Var36.f_8 = bParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = bParam5;
	Var36.f_12 = -5.149929E+33f;
	iVar53 = func_339(-2.328868E-12f, &Var36, bParam4);
	if (iVar53 == -1)
	{
	}
	else
	{
		Var54.f_7 = -5.149929E+33f;
		Var54.f_16 = -1;
		StringCopy(&(Var54.f_12), sParam1, 32);
		func_195(iVar53, Var54);
	}
	return iVar53;
}

bool func_191(int* iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7)
{
	float fVar0;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (bParam4 == 0)
	{
		bParam4 = func_341(bParam1, 0, 1, iParam5, bParam6);
	}
	if (!func_342(bParam1, bParam4, iParam5))
	{
		return false;
	}
	iParam2->f_17 = bParam1;
	iParam2->f_8 = bParam1;
	iParam2->f_9 = 1;
	iParam2->f_13 = bParam4;
	iParam2->f_12 = 3787186f;
	fVar0 = 1.704487E-19f;
	if (bParam7)
	{
		fVar0 = -1.82867E-29f;
	}
	if (!func_343(iParam0, iParam2, fVar0, bParam4, bParam3))
	{
		return false;
	}
	return true;
}

bool func_192(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, int iParam11, bool bParam12)
{
	struct<17> Var0;

	if (!func_340(iParam0, 0))
	{
		return false;
	}
	if (!func_344(iParam0, bParam1, Param2, iParam6, bParam10, bParam7, iParam11, bParam12))
	{
		return false;
	}
	Var0 = { func_345(bParam1, Param2, iParam6, bParam7, bParam12) };
	Var0.f_13 = bParam10;
	Var0.f_12 = 3787186f;
	*iParam8 = { Var0 };
	if (!func_346(iParam0, &Var0, 4.059549E+37f, bParam9, iParam11))
	{
		return false;
	}
	return true;
}

int func_193(bool bParam0, bool bParam1)
{
	struct<37> Var0;
	int iVar47;
	int iVar48;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	iVar47 = ITEMDATABASE::_ITEMDATABASE_GET_AWARD_ACQUIRE_COST_TYPE(bParam0);
	if (iVar47 == 0)
	{
		return 0;
	}
	iVar48 = 0;
	while (iVar48 < iVar47)
	{
		if (ITEMDATABASE::_0x1FC25AEB5F76B38D(bParam0, iVar48, &Var0) && Var0 == bParam1)
		{
			return Var0.f_2;
		}
		iVar48++;
	}
	return 0;
}

int func_194(bool bParam0, bool bParam1)
{
	struct<37> Var0;

	if (func_223(bParam0) || func_76(bParam0, 2.791187f))
	{
		return func_193(func_224(bParam0, 1), bParam1);
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		return 0;
	}
	return Var0.f_2;
}

void func_195(int iParam0, struct<17> Param1)
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

void func_196(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_68(iParam0))
	{
		return;
	}
	iVar0 = func_117(iParam0);
	HUD::_UI_PROMPT_RESTART_MODES(Global_1951897[iVar0 /*23*/].f_3);
}

float func_197(var uParam0)
{
	if (!func_96(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_347(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_348() - uParam0->f_1);
}

bool func_198(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_199(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_348() - fParam1);
	func_349(uParam0, 1);
	func_350(uParam0, 2);
	uParam0->f_2 = 0f;
}

var func_200(int iParam0)
{
	var uVar0;

	SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar0, iParam0);
	return uVar0;
}

void func_201(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam15))
	{
		return;
	}
	if (!func_100(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = PLAYER::PLAYER_ID();
	Param1.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	Param1.f_4 = iParam0;
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param1, 14, 13, &uParam15);
}

void func_202(int iParam0, bool bParam1)
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		if ((!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Global_1144511[iVar0 /*83*/].f_38.f_28.f_2) || Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 == iParam0) || bParam1)
		{
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_2 = 255;
			Global_1144511[iVar0 /*83*/].f_38.f_28.f_3 = -1;
		}
	}
}

void func_203(int iParam0, var uParam1)
{
	struct<7> Var0;
	struct<5> Var7;

	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	CLOCK::_GET_POSIX_TIME_STRUCT(&Var0);
	Var7.f_3 = 2;
	Var7.f_4 = 24;
	CLOCK::_ADD_TIME_TO_DATE_TIME(&Var0, &Var7, &Var0);
	Global_1144511[iParam0 /*83*/].f_38.f_28.f_1 = uParam1;
	Global_1147168.f_339.f_1 = uParam1;
	Global_1147168.f_339.f_9 = { Var0 };
}

int func_204(int iParam0)
{
	if (!GANG::NETWORK_IS_GANG_ID_VALID(iParam0))
	{
		return -1;
	}
	if (iParam0 == GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))
	{
		return func_351(PLAYER::PLAYER_ID());
	}
	return func_352(GANG::NETWORK_GET_GANG_LEADER(iParam0));
}

void func_205(int iParam0, var uParam1)
{
	struct<14> Var0;

	Var0.f_8 = iParam0;
	Var0.f_12 = uParam1;
	func_201(17, Var0, func_353(0, 8));
}

void func_206(var uParam0)
{
	struct<14> Var0;

	Var0.f_12 = uParam0;
	func_201(13, Var0, func_200(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()))));
}

struct<2> func_207(bool bParam0)
{
	return func_88(-0.1137347f, bParam0);
}

struct<2> func_208(bool bParam0)
{
	struct<2> Var0;

	if (func_212(bParam0, 0))
	{
		Var0 = { func_88(-1.073421E-07f, -1.100999E-17f) };
	}
	else if (func_212(bParam0, 2))
	{
		Var0 = { func_88(-1.073421E-07f, 6.919076E-28f) };
	}
	else if (func_212(bParam0, 5))
	{
		Var0 = { func_88(-1.073421E-07f, 7.900834E-16f) };
	}
	else if (func_212(bParam0, 1))
	{
		Var0 = { func_88(-1.073421E-07f, -2.364206E+35f) };
	}
	else if (func_212(bParam0, 3))
	{
		Var0 = { func_88(-1.073421E-07f, -5.71431E-39f) };
	}
	else if (func_212(bParam0, 4))
	{
		Var0 = { func_88(-1.073421E-07f, 1.035446E+14f) };
	}
	return Var0;
}

Vector3 func_209(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1144511[func_354() /*83*/].f_38;
	}
	return Global_1144511[iParam0 /*83*/].f_38;
}

int func_210(bool bParam0, var uParam1, int iParam2, var uParam3, bool bParam4, int iParam5, int iParam6, bool bParam7)
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
		func_355(iParam2, -3.005759E+25f);
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
	Var3.f_13 = bParam4;
	Var3.f_16 = iParam5;
	Var3.f_14 = iParam6;
	Var3 = { *iParam2 };
	func_356(uParam1, bParam0, Var3);
	return 1;
}

int func_211(int iParam0, bool bParam1, int iParam2)
{
	if (func_357(255))
	{
		return 1;
	}
	if (!UNLOCK::UNLOCK_IS_UNLOCKED(3.569097E-20f))
	{
		return 0;
	}
	if (!func_358(iParam0))
	{
		return 0;
	}
	if (!func_106(func_359(iParam0), !bParam1, iParam2, 0, 0))
	{
		return 0;
	}
	return 1;
}

bool func_212(bool bParam0, int iParam1)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_179(bParam0);
	switch (iParam1)
	{
		case 1:
			if (((func_76(bParam0, -3.480943E+19f) || func_76(bParam0, -2.518378E+22f)) && !func_76(bParam0, -1.823469E-06f)) && !func_76(bParam0, 2.357825E-34f))
			{
				return true;
			}
			break;
		case 2:
			if (iVar0 == 6.919076E-28f)
			{
				if (func_76(bParam0, -7.272718E-19f))
				{
					return false;
				}
				return true;
			}
			break;
		case 3:
			if (iVar0 == -3.265313E+23f)
			{
				return true;
			}
			else if (iVar0 == 6.919076E-28f)
			{
				if (func_76(bParam0, -7.272718E-19f))
				{
					return true;
				}
			}
			break;
		case 0:
			if ((func_130(bParam0) || func_65(bParam0, -1.29539E-20f) == -4.839888E+13f) || bParam0 == 7.873405E-07f)
			{
				return true;
			}
			break;
		case 4:
			if (func_76(bParam0, 2.357825E-34f))
			{
				return true;
			}
			break;
		case 5:
			if (func_76(bParam0, -1.823469E-06f))
			{
				return true;
			}
			break;
	}
	return false;
}

int func_213(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_360())
	{
		return 0;
	}
	if (!NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return 0;
	}
	if (func_361())
	{
		return 0;
	}
	iVar0 = func_362(iParam0);
	iVar1 = func_363(iVar0, 2);
	if (iVar1 >= 5)
	{
		return 0;
	}
	if (!func_106(func_364(iParam0), 0, 255, 0, 0))
	{
		return 0;
	}
	return 1;
}

void func_214(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	struct<37> Var1;
	int iVar48;

	iVar0 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam1);
	Var1.f_4 = 15;
	Var1.f_36 = 10;
	iVar48 = 0;
	while (iVar48 < iVar0)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam1, iVar48, &Var1))
		{
			if (Var1 != iParam2)
			{
				if ((Var1.f_2 == 5.928634E+20f && (Var1 != -1.926391E+21f && Var1 != -8.816258E-39f)) && (Global_1913621.f_1579 || !func_134(bParam1, Var1, 1)))
				{
					Global_1913621[(uParam0->f_45 - 1) /*9*/].f_7++;
				}
			}
			else
			{
				Global_1913621[(uParam0->f_45 - 1) /*9*/].f_8 = iVar48;
			}
		}
		iVar48++;
	}
}

void func_215(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_65(bParam1, 5.339713E+22f);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, iVar2, 0) };
	if (func_155(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			bVar14 = func_156(iVar13, iVar0);
			if (func_25(bVar14, 0))
			{
				if (Global_1913621.f_1579 || !func_134(bVar14, 6.221388E-29f, 1))
				{
					Global_1913621[(uParam0->f_45 - 1) /*9*/].f_7++;
				}
			}
			iVar13++;
		}
		func_157(iVar0);
	}
}

void func_216(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;

	iVar2 = func_65(bParam1, -1.371654E-28f);
	if (iVar2 == 0)
	{
		return;
	}
	Var3 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar2, 0) };
	if (func_155(Var3, &iVar0, &iVar1, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar1)
		{
			if (uParam0->f_45 >= 175)
			{
			}
			else
			{
				bVar14 = func_156(iVar13, iVar0);
				if (func_25(bVar14, 0) && bVar14 != bParam1)
				{
					func_120(uParam0, bVar14, iParam2);
				}
				iVar13++;
			}
		}
		func_157(iVar0);
	}
}

void func_217(int iParam0)
{
	func_157(*iParam0);
	*iParam0 = -1;
}

void func_218(var uParam0, int iParam1, bool bParam2, bool bParam3)
{
	bool bVar0;
	char cVar1[32];
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bool bVar10;
	char[] cVar11[8];
	int iVar12;
	bool bVar13;
	bool bVar14;
	bool bVar15;
	int iVar16;
	struct<2> Var17;
	struct<2> Var20;
	bool bVar42;
	int iVar43;
	struct<7> Var44;
	int iVar51;

	bVar0 = Global_1913621[iParam1 /*9*/].f_6;
	StringCopy(&cVar1, "r_", 32);
	StringIntConCat(&cVar1, bVar0, 32);
	StringIntConCat(&cVar1, iParam1, 32);
	if (DATABINDING::DATABINDING_IS_ENTRY_VALID(Global_1913621[iParam1 /*9*/].f_1))
	{
		DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(Global_1913621[iParam1 /*9*/].f_1);
	}
	iVar5 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam0->f_30, &cVar1);
	Global_1913621[iParam1 /*9*/].f_1 = iVar5;
	bVar6 = Global_1913621[iParam1 /*9*/].f_5;
	iVar7 = func_140(bVar0, bVar6, bParam3, 0);
	iVar8 = func_138(bVar0, 0, 0, 0);
	iVar9 = func_139(bVar0, 0);
	if (iVar9 != -1)
	{
		iVar9 = (iVar9 - iVar8);
	}
	else
	{
		iVar9 = iVar7;
	}
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "name", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eOutputItem", bVar0);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "eCost", bVar6);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iIndex", iParam1);
	if (!Global_1913621.f_1579 && func_134(bVar0, bVar6, 1))
	{
		bVar10 = true;
		Global_1913621[iParam1 /*9*/].f_7 = 0;
	}
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iCurCostVariant", Global_1913621[iParam1 /*9*/].f_8);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "iNumCostVariants", Global_1913621[iParam1 /*9*/].f_7);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "bFireCrafting", bVar6 == -4.029766E+29f);
	StringIntConCat(&cVar11, func_141(iVar9, iVar7), 8);
	DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "count", &cVar11);
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "visible", false);
	bVar13 = false;
	if (func_31(uParam0, 2))
	{
		iVar12 = func_123(((iVar7 > 0 && func_136(bVar0)) && !bVar10), 1, 0);
	}
	else
	{
		iVar12 = func_123(((iVar9 > 0 && iVar7 > 0) && !bVar10), 1, 0);
	}
	if (iVar12 == 0 && func_219(bVar0))
	{
		if (func_220(bVar0, bVar6, uParam0, bParam3, &bVar14, &bVar15, &iVar16))
		{
			iVar12 = 1;
			bVar13 = true;
			bVar0 = bVar14;
			bVar6 = bVar15;
			DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "name", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eOutputItem", bVar14);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "eCost", bVar15);
			DATABINDING::_DATABINDING_WRITE_DATA_INT_FROM_PARENT(iVar5, "iCurCostVariant", iVar16);
		}
	}
	if (func_221(bVar0, &Var17, 4.975531E-10f, 0, 0, 0))
	{
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "texture", Var17);
		DATABINDING::_DATABINDING_ADD_DATA_STRING(iVar5, "textureDictionary", Var17.f_1);
	}
	if (!func_31(uParam0, 4))
	{
		if ((bVar6 == -1.428267E+31f || bVar6 == 6.221388E-29f) || bVar6 == -4.029766E+29f)
		{
			iVar12 = 0;
		}
	}
	if (iVar12 == 1)
	{
		if (!func_137(2) && func_65(bVar0, -1.29539E-20f) == -4.839888E+13f)
		{
			Global_1913621[iParam1 /*9*/].f_2 = 0;
			iVar12 = 0;
		}
		else
		{
			uParam0->f_47++;
			if (func_212(bVar0, uParam0->f_42))
			{
				uParam0->f_48++;
			}
			Global_1913621[iParam1 /*9*/].f_2 = 1;
		}
	}
	else
	{
		Global_1913621[iParam1 /*9*/].f_2 = 0;
	}
	if (bVar13)
	{
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "lockVisible", bVar10);
	DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "enabled", iVar12);
	Var20.f_1 = 20;
	bVar42 = false;
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "deadeyeDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "healthCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaCoreHorseDurationCategory", 0);
	DATABINDING::_DATABINDING_ADD_DATA_HASH(iVar5, "staminaHorseDurationCategory", 0);
	if (ITEMDATABASE::_ITEMDATABASE_FILLOUT_ITEM_EFFECT_IDS(bVar0, &Var20))
	{
		iVar43 = 0;
		while (iVar43 < Var20)
		{
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_EFFECT_ID_INFO(Var20.f_1[iVar43], &Var44))
			{
				iVar51 = Var44.f_2;
				switch (Var44.f_1)
				{
					case -1104847406:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", iVar51);
						break;
					case 1857353317:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", iVar51);
						break;
					case -826379728:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeyeCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeCoreDurationCategory", Var44.f_6);
						break;
					case 1342237631:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "deadeye", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "deadeyeDurationCategory", Var44.f_6);
						break;
					case -943921969:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", iVar51);
						break;
					case -416929031:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", iVar51);
						break;
					case 1869697234:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "health", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthDurationCategory", Var44.f_6);
						break;
					case 2062242710:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreDurationCategory", Var44.f_6);
						break;
					case 381158954:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", iVar51);
						break;
					case 1681823811:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", iVar51);
						break;
					case -1191740624:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCore", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreDurationCategory", Var44.f_6);
						break;
					case -1240225157:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "stamina", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaDurationCategory", Var44.f_6);
						break;
					case 978049229:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", iVar51);
						break;
					case -778289619:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthHorseDurationCategory", Var44.f_6);
						break;
					case -1918697215:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", iVar51);
						break;
					case 1136630075:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "healthCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "healthCoreHorseDurationCategory", Var44.f_6);
						break;
					case 855745648:
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", iVar51);
						break;
					case 1365603835:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaCoreHorse", 12);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaCoreHorseDurationCategory", Var44.f_6);
						break;
					case 1497139093:
						bVar42 = true;
						DATABINDING::_DATABINDING_ADD_DATA_INT(iVar5, "staminaHorse", 11);
						DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING_FROM_PARENT(iVar5, "staminaHorseDurationCategory", Var44.f_6);
						break;
				}
			}
			iVar43++;
		}
	}
	DATABINDING::_DATABINDING_ADD_DATA_BOOL(iVar5, "overpower", bVar42);
	if (bParam2)
	{
		DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_HASH_ALIAS(uParam0->f_30, -1, -2.238898E-35f, iVar5);
	}
}

bool func_219(bool bParam0)
{
	return true;
}

bool func_220(bool bParam0, bool bParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	int iVar13;
	bool bVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	struct<37> Var18;
	int iVar65;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (!Global_1913621.f_1579 && func_134(bParam0, bParam1, 1))
	{
		return false;
	}
	if (func_31(uParam2, 2) && !func_136(bParam0))
	{
		return false;
	}
	if (bParam1 == -1.428267E+31f || bParam1 == 6.221388E-29f)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_65(bParam0, 5.339713E+22f);
		if (iVar12 == 0)
		{
			return false;
		}
		Var2 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, 6.221388E-29f, 0, -1, iVar12, 0) };
		if (func_155(Var2, &iVar0, &iVar1, 0))
		{
			iVar13 = 0;
			while (iVar13 < iVar1)
			{
				bVar14 = func_156(iVar13, iVar0);
				if (bParam0 == bVar14)
				{
				}
				else if (!Global_1913621.f_1579 && func_134(bVar14, 6.221388E-29f, 1))
				{
				}
				else if (func_85(bVar14, 6.221388E-29f, 0, bParam3, 0) && !func_86(bVar14, 1, 0))
				{
					func_157(iVar0);
					*bParam4 = bVar14;
					*bParam5 = 6.221388E-29f;
					*iParam6 = iVar13;
					if (func_76(*bParam4, 1.337157E+38f))
					{
						*iParam6 = 1;
					}
					else if (func_76(*bParam4, -8.704819E-29f))
					{
						*iParam6 = 2;
					}
					else if (func_76(*bParam4, 2.519492E+32f))
					{
						*iParam6 = 3;
					}
					return true;
				}
				iVar13++;
			}
			func_157(iVar0);
		}
		if (bParam1 == 6.221388E-29f)
		{
			Var2 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, -1.428267E+31f, 0, -1, iVar12, 0) };
			if (func_155(Var2, &iVar0, &iVar1, 0))
			{
				iVar15 = 0;
				while (iVar15 < iVar1)
				{
					bVar16 = func_156(iVar15, iVar0);
					if (bParam0 == bVar16)
					{
					}
					else if (!Global_1913621.f_1579 && func_134(bVar16, -1.428267E+31f, 1))
					{
					}
					else if (func_85(bVar16, -1.428267E+31f, 0, bParam3, 0) && !func_86(bVar16, 1, 0))
					{
						func_157(iVar0);
						*bParam4 = bVar16;
						*bParam5 = -1.428267E+31f;
						*iParam6 = iVar15;
						return true;
					}
					iVar15++;
				}
				func_157(iVar0);
			}
		}
	}
	else
	{
		iVar17 = ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COSTS_COUNT(bParam0);
		Var18.f_4 = 15;
		Var18.f_36 = 10;
		iVar65 = 0;
		while (iVar65 < iVar17)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_ACQUIRE_COST(bParam0, iVar65, &Var18))
			{
				if (Var18.f_2 == 5.928634E+20f)
				{
					if ((Var18 != -1.926391E+21f && Var18 != -8.816258E-39f) && (Global_1913621.f_1579 || !func_134(bParam0, Var18, 1)))
					{
						if (func_85(bParam0, Var18, 0, bParam3, 0) && !func_86(bParam0, 1, 0))
						{
							*bParam4 = bParam0;
							*bParam5 = Var18;
							*iParam6 = iVar65;
							return true;
						}
					}
				}
			}
			iVar65++;
		}
	}
	return false;
}

bool func_221(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_222(bool bParam0, bool bParam1, bool bParam2)
{
	var uVar0[10];
	int iVar11;
	int iVar12;
	int iVar13;

	if (!func_250(bParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_27() == 0) && !UNLOCK::UNLOCK_IS_VISIBLE(bParam0))
	{
		return 1;
	}
	if (!func_365(bParam0, bParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_223(bool bParam0)
{
	if (func_76(bParam0, 2.944387E-36f))
	{
		return true;
	}
	return false;
}

bool func_224(bool bParam0, bool bParam1)
{
	struct<6> Var0;

	if (!func_25(bParam0, 0))
	{
		return func_366(func_168(bParam0), bParam1);
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

bool func_225(bool bParam0, bool bParam1)
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

bool func_226(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_25(bParam0, 0))
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

bool func_227(bool bParam0, bool bParam1, bool bParam2, var uParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7)
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

	if (func_223(bParam0) || func_76(bParam0, 2.791187f))
	{
		return func_188(func_224(bParam0, 1), bParam2, uParam3, 1, 0);
	}
	if (!func_149(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_80(0)) && !func_81());
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
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && (bParam7 || func_335(iVar32)))
			{
				Jump @499; //curOff = 215
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && (bParam7 || func_336(iVar32)))
			{
			}
			else
			{
				iVar36 = func_236(iVar37, Var0[iVar34 /*2*/]);
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_237(Var0[iVar34 /*2*/], iVar36);
				}
				else
				{
					iVar33 = func_138(Var0[iVar34 /*2*/], 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_238(Var0[iVar34 /*2*/]) || func_239(Var0[iVar34 /*2*/]))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_241(7, Var0[iVar34 /*2*/], &iVar38);
						}
						iVar40 = func_240(Var0[iVar34 /*2*/], iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && ENTITY::DOES_ENTITY_EXIST(iVar38))
							{
								*iParam4 = iVar38;
							}
						}
						else
						{
							Jump @483; //curOff = 439
							if (bParam5 && ((iVar33 + func_242(7, Var0[iVar34 /*2*/])) + func_243(Var0[iVar34 /*2*/])) >= iVar32)
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

int func_228()
{
	int iVar0;

	iVar0 = GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID()));
	return func_119(iVar0);
}

int func_229(bool bParam0)
{
	switch (bParam0)
	{
		case -1171462349:
			return 4;
		case 1689071181:
			return 3;
		case -1612693182:
			return 2;
		case 1856073229:
			return 1;
		case 1046181202:
			return 0;
		default:
			break;
	}
	if (func_76(bParam0, -4.733674E-34f))
	{
		return 5;
	}
	return 0;
}

bool func_230(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_231(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_179(bParam0);
	if (iVar0 == -3.265313E+23f && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0);
	}
	else if (iVar0 == 6.919076E-28f && WEAPON::_IS_AMMO_VALID(bParam0))
	{
		return bParam0;
	}
	if (func_76(bParam0, 9.811189E+11f))
	{
		func_367(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return false;
}

int func_232(bool bParam0, bool bParam1)
{
	struct<18> Var0;
	int iVar18;
	int iVar19;

	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_368(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam1)
	{
		func_369(&Var0, func_323(0));
	}
	if (!func_370(&Var0, &iVar18, &iVar19, 0))
	{
		return 0;
	}
	func_371(iVar18);
	return iVar19;
}

int func_233(bool bParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (func_250(func_168(bParam0), 2))
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_ITEM_PATHSET(bParam0, iParam1);
}

struct<4> func_234(bool bParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_184(bParam0, bParam1, 0) };
	return func_322(bParam0, Var0, Var0.f_4, bParam1);
}

int func_235(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_25(bParam0, 0))
	{
		if (func_250(func_168(bParam0), 2))
		{
			return -1;
		}
		return 0;
	}
	if (func_179(bParam0) == 5.407193E-38f)
	{
		return -1;
	}
	if (!bParam2 && func_233(bParam0, -3.294982E+22f) == 0)
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_GET_ITEM_SLOT_MAX_COUNT(bParam0, iParam1->f_4);
	}
	return INVENTORY::_GET_ITEM_ROLE_MAX_LEVEL_COUNT(func_172(bParam3), bParam0);
}

int func_236(int iParam0, bool bParam1)
{
	if (iParam0 == 15 && func_76(bParam1, -1.690907E-35f))
	{
		return 1;
	}
	return 0;
}

int func_237(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_321(0) };
	Var0.f_4 = func_320(iParam1);
	Var5 = { func_322(bParam0, Var0, Var0.f_4, 0) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var5))
	{
		return 0;
	}
	iVar9 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(0), &Var5, false);
	return iVar9;
}

bool func_238(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, -1.051639E+07f))
	{
		return true;
	}
	return func_239(bParam0);
}

bool func_239(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, -5.092244E+08f))
	{
		return true;
	}
	return false;
}

int func_240(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	int iVar13;
	bool bVar14;
	int iVar15;
	int iVar16;
	int iVar17;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (!func_238(bParam0) && !func_239(bParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_65(bParam0, 5.339713E+22f);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar13, 0) };
	if (func_155(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			bVar14 = func_156(iVar15, iVar1);
			if (func_25(bVar14, 0) && bParam0 != bVar14)
			{
				iVar16 = func_372(bVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_237(bVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_374(iVar16, func_373(bVar14), bParam0)));
					}
				}
			}
			iVar15++;
		}
		func_157(iVar1);
	}
	return iVar0;
}

int func_241(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;

	iParam0 = func_251(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	if (!func_375(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
		if (!func_376(iVar28))
		{
		}
		else
		{
			MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = Var3.f_1[iVar29];
				if (iVar30 == bParam1)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(*iParam2))
					{
						*iParam2 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

int func_242(int iParam0, bool bParam1)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_251(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	if (!func_375(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_243(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar1 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_A_PED(iVar1))
		{
			if (bParam0 == ENTITY::_GET_CARRIABLE_FROM_ENTITY(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

bool func_244()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-1.944106E+11f);
}

char* func_245(bool bParam0)
{
	switch (func_229(bParam0))
	{
		case 5:
			return "STEW_TIP_DAILY";
		case 4:
			return "STEW_TIP_BEST";
		case 3:
			return "STEW_TIP_HIGH";
		case 2:
			return "STEW_TIP_MED";
		case 1:
			return "STEW_TIP_LOW";
		default:
			break;
	}
	return "STEW_TIP_LOW";
}

void func_246(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_189((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_247(bool bParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (Global_1940186.f_6)
	{
		return false;
	}
	bVar0 = func_231(bParam0, iParam1);
	Var4.f_9 = -5.45926E-19f;
	if (func_377("ALL WEAPONS", &iVar1, &iVar2, -5.45926E-19f, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_378(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_264(Var4.f_4))
			{
			}
			else if (WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(Var4.f_4) == bVar0)
			{
				func_371(iVar1);
				return true;
			}
			iVar3++;
		}
		func_371(iVar1);
	}
	return false;
}

bool func_248(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_189(bParam0);
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
	iVar1 = func_379(bParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_380(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_381(bParam0);
	iVar2 = func_380(&(Global_17418.f_55.f_664.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return bParam0 == Global_17418.f_55.f_664.f_1354.f_5[iVar2 /*17*/];
}

bool func_249(int iParam0)
{
	return func_112(iParam0, 2);
}

bool func_250(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::_ITEMDATABASE_IS_BUNDLE_VALID(bParam0, iParam1);
}

int func_251(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_38.f_289;
	}
	return iParam0;
}

float func_252(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

void func_253(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	if (func_27() == 0)
	{
		iVar0 = func_382();
		if (iVar0 < iParam0)
		{
			iParam0 = iVar0;
		}
		func_383(iParam0, sParam1, -5.149929E+33f, bParam4);
	}
	else
	{
		func_384(iParam0);
		if (bParam3)
		{
			func_385(iParam0, sParam1, iParam2);
		}
	}
}

int func_254(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<13> Var3;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	bool bVar31;

	iParam0 = func_251(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	if (!func_375(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar1 = ITEMSET::CREATE_ITEMSET(true);
	PED::FIND_ALL_ATTACHED_CARRIABLE_ENTITIES(iVar0, iVar1);
	iVar2 = ITEMSET::GET_ITEMSET_SIZE(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		if (iVar26 >= iParam2)
		{
		}
		else
		{
			iVar28 = MISC::_GET_ENTITY_FROM_ITEM(ITEMSET::GET_INDEXED_ITEM_IN_ITEMSET(iVar27, iVar1));
			if (!func_376(iVar28))
			{
			}
			else
			{
				MISC::_LOOT_TABLES_GET_INFO(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar28), true, true, ENTITY::GET_ENTITY_MODEL(iVar28), &Var3, 0);
				iVar29 = 0;
				while (iVar29 < 10)
				{
					iVar30 = Var3.f_1[iVar29];
					if (iVar30 == bParam1)
					{
						func_298(bParam1, 1, 6.028273E-12f);
						if (ENTITY::DOES_ENTITY_EXIST(iVar28))
						{
							bVar31 = func_386(&iVar28);
							if (!func_25(bVar31, 0))
							{
								bVar31 = func_387(iVar28);
							}
							if (func_25(bVar31, 0))
							{
								func_388(bVar31, 1, iVar0, 1, -5.149929E+33f);
							}
							ENTITY::_DELETE_CARRIABLE(&iVar28);
						}
						iVar26++;
					}
					iVar29++;
				}
			}
			iVar27++;
		}
	}
	if (ITEMSET::IS_ITEMSET_VALID(iVar1))
	{
		ITEMSET::DESTROY_ITEMSET(iVar1);
	}
	return iVar26;
}

bool func_255(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_233(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_389(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_184(bParam0, bParam4, 0) };
	Var6 = { func_322(bParam0, Var1, Var1.f_4, bParam4) };
	return func_390(bParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

void func_256(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<10> Var2;
	int iVar12;
	bool bVar13;
	int iVar14;
	int iVar15;

	if (iParam1 > 0)
	{
		Var2 = -1;
		Var2.f_1 = -1;
		Var2.f_2 = -1;
		Var2.f_3 = -1;
		Var2.f_4 = -1;
		Var2.f_5 = -1;
		Var2.f_6 = -1;
		Var2.f_7 = -1;
		Var2.f_8 = -1;
		iVar12 = func_65(bParam0, 5.339713E+22f);
		if (iVar12 == 0)
		{
			return;
		}
		Var2 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 1.659074E-30f, 0, 0, -1, iVar12, 0) };
		if (func_155(Var2, &iVar0, &iVar1, 0))
		{
			iVar14 = 0;
			while (iVar14 < iVar1)
			{
				if (iParam1 <= 0)
				{
				}
				else
				{
					bVar13 = func_156(iVar14, iVar0);
					if (func_25(bVar13, 0) && bParam0 != bVar13)
					{
						iVar15 = func_138(bVar13, 0, 0, 0);
						while (iVar15 > 0 && iParam1 > 0)
						{
							iParam1 = (iParam1 - func_391(bVar13, bParam0, 0));
							iVar15 = (iVar15 - 1);
						}
					}
					iVar14++;
				}
			}
			func_157(iVar0);
		}
	}
}

bool func_257(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	int iVar4;
	struct<2> Var5;
	struct<5> Var7;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (iParam3 == -5.149929E+33f)
	{
		if (func_392(bParam0))
		{
			iParam3 = 9.275179E-19f;
		}
	}
	bVar0 = iParam3 == 9.275179E-19f;
	bVar1 = iParam3 == 1.994827E+33f;
	bVar2 = iParam3 == -1.202057E-11f;
	bVar3 = func_231(bParam0, 1);
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
			func_181(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return false;
	}
	if (!func_150(bParam0, 1))
	{
		return false;
	}
	Var5 = { func_316(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var5))
	{
		if ((func_138(bParam0, 0, 0, 0) - iParam1) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var5, iParam1);
		}
		else if ((func_138(bParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_257(bParam0, func_138(bParam0, 0, 0, 0), bParam2, iParam3);
			return false;
		}
	}
	if (func_179(bParam0) == -3.265313E+23f)
	{
		if (!func_393(bParam0, iParam1, 0, iParam3))
		{
			return false;
		}
	}
	else if (!func_255(bParam0, iParam1, iParam3, bParam2, 0))
	{
		return false;
	}
	else
	{
		Var7 = { func_184(bParam0, 0, 0) };
		if (func_80(0) && Var7.f_4 == 4.978612f)
		{
			func_394(1, 0, 0);
		}
	}
	if (bParam0 == -2.680077E+18f)
	{
		Global_1940072.f_21 = 0;
	}
	if (!func_80(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 6.236711E+08f)
	{
		func_181(bParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return true;
}

void func_258(bool bParam0)
{
	int iVar0;
	int iVar1;
	var uVar2[10];
	int iVar13;
	int iVar14;
	bool bVar15;

	if (!func_25(bParam0, 0))
	{
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
			if (ENTITY::IS_ENTITY_A_PED(iVar0))
			{
				iVar13 = func_395(iVar1, &uVar2);
				iVar14 = 0;
				while (iVar14 < iVar13)
				{
					if (uVar2[iVar14] == bParam0)
					{
						ENTITY::_DELETE_CARRIABLE(&iVar0);
					}
					else
					{
						iVar14++;
					}
				}
			}
			else if (PED::COMPUTE_SATCHEL_ITEM_FOR_PED_DAMAGE(&bVar15, iVar1, PED::_GET_PED_DAMAGE_CLEANLINESS(iVar1)) && bVar15 == bParam0)
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
		}
	}
}

int func_259(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_251(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	if (!func_375(iParam0))
	{
		return 0;
	}
	iVar0 = func_173(iParam0);
	bVar1 = bParam1;
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar0))
	{
		return 0;
	}
	iVar2 = 0;
	iVar3 = 0;
	while (iVar3 < iParam2)
	{
		if (PED::_GET_PELT_FROM_HORSE(iVar0, iVar3) != bVar1)
		{
		}
		else if (func_396(bParam1, iParam2, 1, -5.149929E+33f))
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_260(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (func_27() == 0)
	{
		return 0;
	}
	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_321(0) };
	Var0.f_4 = func_320(iParam1);
	Var5 = { func_322(bParam0, Var0, Var0.f_4, 0) };
	if (!func_390(bParam0, &Var5, &Var0, iParam2, iParam3, 0, 0))
	{
		return 0;
	}
	return 1;
}

int func_261(bool bParam0)
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

bool func_262(int iParam0)
{
	return !iParam0 <= 0;
}

int func_263(int iParam0)
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

bool func_264(bool bParam0)
{
	return (WEAPON::IS_WEAPON_VALID(bParam0) && bParam0 != -3.273909E-18f);
}

bool func_265(bool bParam0, bool bParam1, float fParam2, var uParam3, var uParam4, bool bParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar5;
	struct<10> Var6;
	struct<4> Var20;
	int iVar34;
	int iVar35;
	int iVar36;
	struct<5> Var37;
	struct<4> Var42;

	if (bParam0 != 0 && bParam1 != 0)
	{
		iVar1 = func_189(bParam1);
		iVar5 = func_397(bParam1);
		iVar0 = 0;
		while (iVar0 < iVar5)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
			{
				if (func_398(bParam0, iVar1, iVar2))
				{
					*uParam4 = { func_184(bParam1, 0, 0) };
					if (iParam6 != 0)
					{
						uParam4->f_4 = iParam6;
					}
					*uParam3 = { func_322(bParam1, *uParam4, uParam4->f_4, 0) };
					*fParam2 = iVar2;
					return true;
				}
			}
			iVar0++;
		}
		if (bParam5)
		{
			Var6.f_9 = -5.45926E-19f;
			Var20.f_9 = -5.45926E-19f;
			iVar34 = func_172(0);
			Var37 = { func_184(bParam1, 0, 0) };
			if (iParam6 != 0)
			{
				Var37.f_4 = iParam6;
			}
			Var42 = { func_322(bParam1, Var37, Var37.f_4, 0) };
			iVar35 = INVENTORY::_INVENTORY_GET_CHILDREN_COUNT(iVar34, &Var42);
			iVar36 = 0;
			while (iVar36 < iVar35)
			{
				if (INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_CHILD(iVar34, &Var42, iVar36, &Var6))
				{
					iVar1 = func_189(Var6.f_4);
					iVar5 = ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar1);
					iVar0 = 0;
					while (iVar0 < iVar5)
					{
						if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar1, iVar0, &iVar2))
						{
							if (func_398(bParam0, iVar1, iVar2))
							{
								if (func_399(Var42, Var6.f_9, &Var20, 0, -1))
								{
									uParam4->f_4 = Var6.f_9;
									*uParam4 = { Var6.f_5 };
									*uParam3 = { Var20 };
									*fParam2 = iVar2;
									return true;
								}
							}
						}
						iVar0++;
					}
				}
				iVar36++;
			}
		}
	}
	*fParam2 = 0;
	return false;
}

struct<4> func_266()
{
	struct<4> Var0;

	Var0 = { func_321(0) };
	return func_322(3.210799E-08f, Var0, -9.692375E+30f, 0);
}

bool func_267(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return false;
	}
	if (func_185(bParam0, iParam2, iParam3, bParam5, 0, -1, 0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_172(0), uParam1, iParam2, bParam0, iParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

bool func_268(bool bParam0, int iParam1)
{
	var uVar0;
	var uVar5;
	float fVar9;
	struct<4> Var10;
	struct<4> Var14;
	bool bVar18;
	bool bVar19;
	bool bVar20;
	bool bVar21;
	bool bVar22;
	bool bVar23;
	bool bVar24;
	bool bVar25;
	bool bVar26;
	bool bVar27;
	bool bVar28;
	bool bVar29;
	bool bVar30;
	bool bVar31;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (!func_265(bParam0, 3.210799E-08f, &fVar9, &uVar5, &uVar0, 1, 0))
	{
		return false;
	}
	Var10 = { func_266() };
	Var14 = { func_322(bParam0, Var10, fVar9, 0) };
	if (func_400(Var14, iParam1, 0))
	{
		if (func_401(bParam0))
		{
			if (func_402(2.842945E-27f, &bVar18))
			{
				if (func_268(bVar18, 0))
				{
				}
			}
		}
		else if (func_403(bParam0))
		{
			if (func_402(2.842945E-27f, &bVar19))
			{
				if (func_268(bVar19, 0))
				{
				}
			}
			if (func_402(-0.0001455402f, &bVar20))
			{
				if (func_268(bVar20, 0))
				{
				}
			}
		}
		else if (func_404(bParam0))
		{
			if (func_402(2.842945E-27f, &bVar21))
			{
				if (func_268(bVar21, 0))
				{
				}
			}
			if (func_402(-0.0001455402f, &bVar22))
			{
				if (func_268(bVar22, 0))
				{
				}
			}
			if (func_402(-1157.516f, &bVar23))
			{
				if (func_268(bVar23, 0))
				{
				}
			}
		}
		else if (func_405(bParam0))
		{
			if (func_402(2.842945E-27f, &bVar24))
			{
				if (func_268(bVar24, 0))
				{
				}
			}
			if (func_402(-0.0001455402f, &bVar25))
			{
				if (func_268(bVar25, 0))
				{
				}
			}
			if (func_402(-1157.516f, &bVar26))
			{
				if (func_268(bVar26, 0))
				{
				}
			}
			if (func_402(0.001620535f, &bVar27))
			{
				if (func_268(bVar27, 0))
				{
				}
			}
			if (func_402(6.295092E+08f, &bVar28))
			{
				if (func_268(bVar28, 0))
				{
				}
			}
		}
		else if (func_269(bParam0))
		{
			if (func_402(2.842945E-27f, &bVar29))
			{
				if (func_268(bVar29, 0))
				{
				}
			}
			if (func_402(0.001620535f, &bVar30))
			{
				if (func_268(bVar30, 0))
				{
				}
			}
			bVar31 = func_270(bParam0);
			if (func_25(bVar31, 0))
			{
				if (func_268(bVar31, 1))
				{
				}
			}
		}
		func_271();
		return true;
	}
	return false;
}

bool func_269(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (func_76(bParam0, -6.446212E+29f))
	{
		return true;
	}
	return false;
}

bool func_270(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("HORSE_EQUIPMENT_WESTERN_01_SPECIAL_NEW_SADDLE_000"):
			return 1.718565E-29f;
		case joaat("HORSE_EQUIPMENT_MOTHERHUBBARD_01_SPECIAL_NEW_SADDLE_000"):
			return -4.05655E+37f;
		case joaat("HORSE_EQUIPMENT_MCCLELLAN_01_SPECIAL_NEW_SADDLE_000"):
			return -1593.584f;
		case joaat("HORSE_EQUIPMENT_WESTERN_03_SPECIAL_NEW_SADDLE_000"):
			return 3.657296E-18f;
		case joaat("HORSE_EQUIPMENT_WESTERN_04_SPECIAL_NEW_SADDLE_000"):
			return 26.6469f;
	}
	return false;
}

int func_271()
{
	struct<5> Var0;
	struct<4> Var5;
	int iVar9;
	int iVar10;
	int iVar11;
	bool bVar14;
	bool bVar15;
	struct<4> Var16;
	int iVar20;
	bool bVar21;

	Var0 = { func_184(3.210799E-08f, 0, 0) };
	Var5 = { func_322(3.210799E-08f, Var0, Var0.f_4, 0) };
	iVar10 = func_189(3.210799E-08f);
	if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, 0, &iVar11))
	{
		bVar14 = func_406(Var5, -8.769617E+23f, 0, -1);
	}
	if (!func_25(bVar14, 0))
	{
		return 0;
	}
	bVar15 = false;
	iVar20 = func_397(3.210799E-08f);
	iVar9 = 0;
	while (iVar9 < iVar20)
	{
		if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar10, iVar9, &iVar11))
		{
			bVar15 = false;
			bVar21 = func_406(Var5, iVar11, 0, -1);
			if (!func_25(bVar21, 0))
			{
				if (iVar11 == 2.842945E-27f)
				{
					if ((((func_269(bVar14) || func_401(bVar14)) || func_403(bVar14)) || func_404(bVar14)) || func_405(bVar14))
					{
					}
					else
					{
						Jump @405; //curOff = 232
						if (iVar11 == -0.0001455402f)
						{
							if ((func_403(bVar14) || func_404(bVar14)) || func_405(bVar14))
							{
							}
							else
							{
								Jump @405; //curOff = 281
								if (iVar11 == -1157.516f)
								{
									if (func_404(bVar14) || func_405(bVar14))
									{
									}
									else
									{
										Jump @405; //curOff = 318
										if (iVar11 == 0.001620535f)
										{
											if (func_269(bVar14) || func_405(bVar14))
											{
											}
											else
											{
												Jump @405; //curOff = 355
												if (iVar11 == -1157.516f)
												{
													if (func_405(bVar14))
													{
													}
													else
													{
														Jump @405; //curOff = 380
														if (iVar11 == 6.295092E+08f)
														{
															if (func_405(bVar14))
															{
															}
															else
															{
																bVar15 = true;
																Jump @445; //curOff = 408
																if (iVar11 == -0.0001455402f)
																{
																	if (!func_269(bVar14) && func_407(bVar21))
																	{
																		bVar15 = true;
																	}
																}
																if (bVar15)
																{
																	if (func_408(iVar11, &Var16, 1))
																	{
																		if (!func_400(Var16, 1, 0))
																		{
																		}
																	}
																}
															}
															iVar9++;
															return 1;
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

bool func_272()
{
	return !Global_1913431;
}

void func_273(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
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

char* func_274(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_275(bool bParam0, int iParam1)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_INVENTORY_ITEM_FLAG_ENABLED(bParam0, iParam1);
}

char* func_276(bool bParam0)
{
	if (func_76(bParam0, -1.80273E-33f))
	{
		return "collectible_arrowheads";
	}
	if (func_76(bParam0, 1894063f))
	{
		return "collectible_liquor_bottles";
	}
	if (func_76(bParam0, 8.310792E-34f))
	{
		return "collectible_coins";
	}
	if (func_76(bParam0, -95782.72f))
	{
		return "colectible_heirlooms";
	}
	if (func_76(bParam0, 7.372995E+17f))
	{
		return "collectible_jewelry";
	}
	if (func_76(bParam0, -2.99103E+33f))
	{
		return "collectible_bird_eggs";
	}
	if (func_76(bParam0, 2.768429E+31f))
	{
		return "collectible_tarot_cards";
	}
	if (func_76(bParam0, 6.482542E-11f))
	{
		return "collectible_flowers";
	}
	if (((func_76(bParam0, -1.58908E+26f) || func_76(bParam0, -3.503386E-34f)) || func_76(bParam0, -1.887503E+19f)) || func_76(bParam0, 1.396434E-14f))
	{
		return "collectible_found_fossil";
	}
	return "";
}

bool func_277(bool bParam0)
{
	if (func_76(bParam0, -1.15596E+32f))
	{
		if (((func_409(bParam0, -9.979451E-09f) || func_409(bParam0, 2.758862E+11f)) || func_409(bParam0, 1.868312E+36f)) || func_409(bParam0, -2.847523E-24f))
		{
			return true;
		}
	}
	if (func_76(bParam0, -6.231785E+11f) || func_76(bParam0, 1.026869E-32f))
	{
		return true;
	}
	return false;
}

bool func_278(bool bParam0, bool bParam1)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_410(bParam0, bParam1);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return bParam0;
}

bool func_279(int iParam0)
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

int func_280(bool bParam0)
{
	struct<19> Var0;
	int iVar35;

	if (!func_25(bParam0, 0))
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

bool func_281(bool bParam0)
{
	int iVar0;
	struct<10> Var1;
	int iVar11;
	int iVar12;
	int iVar13;
	bool bVar14;

	iVar0 = func_411(bParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	Var1 = { func_154(-5.45926E-19f, -5.45926E-19f, 0, 0, 0, 0, -1, iVar0, 0) };
	if (func_155(Var1, &iVar11, &iVar12, 0))
	{
		iVar13 = 0;
		while (iVar13 < iVar12)
		{
			if (ITEMDATABASE::_ITEMDATABASE_GET_COMPONENT_ITEM(iVar11, iVar13, &bVar14) && func_412(bVar14))
			{
				func_157(iVar11);
				return bVar14;
			}
			iVar13++;
		}
		func_157(iVar11);
	}
	return false;
}

bool func_282(bool bParam0, int iParam1)
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

bool func_283(bool bParam0, bool bParam1, int iParam2, bool bParam3)
{
	struct<37> Var0;

	if (!func_25(bParam0, 0) && !func_250(func_168(bParam0), 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_ACQUIRE_COST(bParam0, bParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return false;
	}
	if (!bParam3)
	{
	}
	*iParam2 = Var0.f_1;
	return true;
}

char* func_284(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

int func_285(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_413(bParam0, iParam1);
	if (iVar0 == 0)
	{
		return 0;
	}
	return iVar0;
}

bool func_286(bool bParam0, char* sParam1)
{
	int iVar0;
	char cVar1[128];

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	StringCopy(sParam1, func_414(bParam0), 128);
	iVar0 = HUD::GET_LENGTH_OF_LITERAL_STRING(sParam1);
	if (!func_415(bParam0))
	{
		return false;
	}
	StringCopy(&cVar1, func_416(bParam0), 128);
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

char* func_287(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&cParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&cParam0));
}

char* func_288(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_284(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_289(char* sParam0, char* sParam1, int iParam2, int iParam3, float fParam4, int iParam5, int iParam6, int iParam7, bool bParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	int iVar20;

	Var0 = -2;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = fParam4;
	Var13.f_6 = 0;
	iVar20 = UIFEED::_UI_FEED_POST_SAMPLE_TOAST_RIGHT(&Var0, &Var13, bParam8);
	func_417(sParam0, sParam1, iParam2);
	return iVar20;
}

bool func_290(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_27() == -1)
	{
		if (func_331(bParam0) && func_418(bParam0))
		{
			func_419(bParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_291(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	*iParam1 = iParam2;
	func_420(bParam0, iParam1);
	Var0 = { func_184(bParam0, 0, 1) };
	iVar5 = func_235(bParam0, &Var0, 0, 0);
	iVar6 = func_421(bParam0, 0, 0, 0);
	if (iVar5 > 1 && (iVar6 + iParam2) >= iVar5)
	{
		if (func_76(bParam0, -1.690907E-35f))
		{
			func_302(674, 1);
		}
		else if (func_27() == -1)
		{
			func_302(673, 0);
		}
	}
	if (func_185(bParam0, &Var0, *iParam1, 0, 0, -1, 0))
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

void func_292(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	if (!func_422())
	{
		return;
	}
	switch (func_65(bParam0, -60352.49f))
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

bool func_293(int iParam0)
{
	if (!func_423(iParam0))
	{
		return false;
	}
	return func_424(iParam0);
}

void func_294(int iParam0)
{
	if (!func_423(iParam0))
	{
		return;
	}
	func_425(iParam0);
	func_426(iParam0);
}

void func_295(bool bParam0)
{
	if (func_76(bParam0, -1.640085E-16f))
	{
		func_106(-2.462866E+08f, 0, 255, 0, 0);
	}
	else if (func_76(bParam0, -4.561297E+28f))
	{
		func_106(-4249.272f, 0, 255, 0, 0);
	}
	else if (func_76(bParam0, 2.133228E-14f))
	{
		func_106(-5.046843E+11f, 0, 255, 0, 0);
	}
	else if (func_76(bParam0, 5.050617E+08f))
	{
		func_106(2.629104E-17f, 0, 255, 0, 0);
	}
}

bool func_296(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_184(bParam0, 0, 1) };
		if (func_325(bParam0, &Var0, Var0.f_4, 0, 0))
		{
			Var5.f_9 = -5.45926E-19f;
			if (func_326(bParam0, &Var5, Var0.f_4))
			{
				Var27 = { func_322(bParam0, Var0, Var0.f_4, 0) };
				func_390(bParam0, &Var27, &Var0, 1, -5.149929E+33f, 1, 0);
			}
		}
	}
	if (func_80(0))
	{
		WEAPON::GIVE_WEAPON_TO_PED(Global_33, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
		if (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bParam0, 0, false))
		{
			return false;
		}
		func_297(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0), iParam1, iParam6);
		func_427(bParam0, iParam1);
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

bool func_297(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_300(bParam0))
	{
		return false;
	}
	if (!func_80(0))
	{
		return false;
	}
	WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(Global_33, bParam0, iParam1, iParam2);
	return true;
}

bool func_298(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	struct<4> Var6;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_233(bParam0, -3.294982E+22f);
	if (iVar0 != 0)
	{
		return func_428(bParam0, iParam1, iParam2);
	}
	Var1 = { func_184(bParam0, 0, 1) };
	Var6 = { func_322(bParam0, Var1, Var1.f_4, 0) };
	return func_267(bParam0, &Var6, &Var1, iParam1, iParam2, 0);
}

bool func_299(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	bool bVar7;

	bVar0 = func_177(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_27() == -1)
		{
			func_178(bVar0);
			if (iParam1 == 3787186f)
			{
				func_429(bVar0);
			}
		}
		if (!func_185(bParam0, &uVar1, 1, 0, 0, -1, 0))
		{
			func_419(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_430(bVar0);
			if (WEAPON::_IS_WEAPON_SNIPER(bVar0))
			{
				func_296(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1.197024E-12f || WEAPON::_IS_WEAPON_BINOCULARS(bVar0))
			{
				func_296(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_IS_WEAPON_LASSO(bVar0))
			{
				func_296(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::IS_WEAPON_MELEE_WEAPON(bVar0))
			{
				if (bVar0 == 3.3488E-21f && !func_431())
				{
					return false;
				}
				if (WEAPON::SHOULD_WEAPON_BE_DISCARDED_WHEN_SWAPPED(bParam0))
				{
				}
				else if (!func_432(bVar0))
				{
					func_296(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_296(bVar0, WEAPON::GET_WEAPON_CLIP_SIZE(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_IS_WEAPON_ONE_HANDED(bVar0))
			{
				bVar7 = func_433(Global_33, 2, 0, 1);
				if ((((func_264(bVar7) && !Global_26688) && bVar7 != bVar0) && !func_150(-0.0002099206f, 1)) && bParam4)
				{
					WEAPON::_SEND_WEAPON_TO_INVENTORY(Global_33, bVar7);
				}
				if (func_264(bVar7) && func_150(-0.0002099206f, 1))
				{
					if (!func_296(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_296(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_296(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_302(515, 1);
	}
	return true;
}

bool func_300(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(bParam0);
}

bool func_301(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;

	if (!func_300(bParam0))
	{
		return false;
	}
	bVar4 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	if (func_264(bVar4))
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
		func_311(func_434(bParam0), func_278(bParam0, 0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_80(0))
	{
		if (func_297(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_298(bParam0, *iParam1, iParam2);
	}
	return false;
}

void func_302(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_435(iParam0, &iVar0, &iVar1);
	if (!func_436(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_437(iVar0, iVar1);
}

bool func_303()
{
	return false;
}

int func_304(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (func_27() == 0)
	{
		func_315(iParam0, 0);
		return 0;
	}
	iVar0 = func_438(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_439(iVar0, sParam4, iParam5, 0);
	}
	func_440(iVar0, bParam1, fParam2, iParam3);
	return iVar0;
}

void func_305(bool bParam0)
{
}

void func_306(bool bParam0)
{
}

void func_307(bool bParam0)
{
}

void func_308(bool bParam0)
{
}

void func_309()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-9.596595E-08f) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-9.596595E-08f, -3.936833E-09f, 1);
	}
}

void func_310(bool bParam0, int iParam1)
{
	var uVar0;

	func_367(bParam0, iParam1, &uVar0);
}

void func_311(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	func_435(iParam0, &iVar0, &iVar1);
	if (!func_436(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_441(iParam0, 1024))
	{
		return;
	}
	func_437(iVar0, iVar1);
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/] = bParam1;
	Global_1904398.f_33[iParam0 /*9*/].f_3[0 /*2*/].f_1 = 2;
}

void func_312(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;

	func_435(iParam0, &iVar0, &iVar1);
	if (!func_436(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_441(iParam0, 1024))
	{
		return;
	}
	func_437(iVar0, iVar1);
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

void func_313(bool bParam0)
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

void func_314(bool bParam0)
{
	if (func_27() != -1)
	{
		return;
	}
}

int func_315(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;

	if (0 == iParam0)
	{
		return 0;
	}
	Var4.f_1 = 10;
	func_442(&Var4, 2.95884E+10f);
	return func_443(iParam0, &Var4, &uVar0, iParam1, 0);
}

struct<2> func_316(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;

	if (!func_25(bParam0, 0))
	{
		return Var0;
	}
	if (func_76(bParam0, -8.087424E+27f))
	{
		if (func_27() == -1)
		{
			if (func_76(bParam0, -3.480943E+19f))
			{
				return func_444(4.052717E-32f);
			}
			else
			{
				return func_444(9918.3f);
			}
		}
	}
	else if (func_76(bParam0, -3.480943E+19f))
	{
		return func_444(-18395.16f);
	}
	if (func_76(bParam0, 4.091206E+36f))
	{
		return func_444(3.674458E+22f);
	}
	return Var2;
}

void func_317(bool bParam0)
{
	switch (bParam0)
	{
		case joaat("PROVISION_BIRD_FEATHER_FLIGHT"):
			break;
	}
}

void func_318(bool bParam0, char* sParam1)
{
	char* sVar0;

	sVar0 = func_445(Global_1902818.f_37);
	func_289(MISC::VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_446(bParam0), 0, 4.808429E-35f, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

bool func_319(bool bParam0, int iParam1)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	Var0.f_4 = func_320(iParam1);
	if (!func_447(bParam0, Var0.f_4))
	{
		return false;
	}
	iVar5 = func_235(bParam0, &Var0, 0, 0);
	iVar6 = func_421(bParam0, 0, 0, 0);
	if (iVar5 >= 0 && iVar6 > iVar5)
	{
		return false;
	}
	return true;
}

float func_320(int iParam0)
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

struct<4> func_321(bool bParam0)
{
	int iVar0;

	if (Global_1572887.f_14 == 0)
	{
		iVar0 = func_172(bParam0);
		if (iVar0 == 2)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Global_1292096))
			{
				Global_1292096 = { func_322(2.982335E+09f, func_448(), -5.45926E-19f, bParam0) };
			}
			return Global_1292096;
		}
		else if (iVar0 == 3)
		{
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_12)))
			{
				Global_1292096.f_12 = { func_322(2.982335E+09f, func_448(), -5.45926E-19f, 0) };
			}
			return Global_1292096.f_12;
		}
	}
	return func_322(2.982335E+09f, func_448(), -5.45926E-19f, bParam0);
}

struct<4> func_322(bool bParam0, var uParam1, float fParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;

	if (!func_25(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(func_172(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

struct<4> func_323(bool bParam0)
{
	int iVar0;

	iVar0 = func_172(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_4)))
		{
			Global_1292096.f_4 = { func_322(8.681942E-06f, func_321(bParam0), -1.942248E+12f, bParam0) };
		}
		return Global_1292096.f_4;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_16)))
		{
			Global_1292096.f_16 = { func_322(8.681942E-06f, func_321(bParam0), -1.942248E+12f, 0) };
		}
		return Global_1292096.f_16;
	}
	return func_322(8.681942E-06f, func_321(bParam0), -1.942248E+12f, 0);
}

bool func_324(bool bParam0, bool bParam1)
{
	if (func_189(bParam0) == 4.161967E+25f)
	{
		return false;
	}
	if (WEAPON::_IS_WEAPON_ONE_HANDED(bParam0))
	{
		if (bParam1)
		{
			return func_449();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_325(bool bParam0, var uParam1, float fParam2, bool bParam3, float fParam4)
{
	return func_332(bParam0, *uParam1, fParam2, bParam3, 1, fParam4) > 0;
}

bool func_326(bool bParam0, int iParam1, float fParam2)
{
	var uVar0;

	if (func_450(bParam0, &uVar0, iParam1, fParam2))
	{
		return iParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_327(bool bParam0)
{
	int iVar0;

	iVar0 = func_172(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(Global_1292096.f_8)))
		{
			Global_1292096.f_8 = { func_322(3.507197E-29f, func_321(bParam0), 12999093, 0) };
		}
		return Global_1292096.f_8;
	}
	return func_322(3.507197E-29f, func_321(bParam0), 12999093, 0);
}

bool func_328(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	if (bParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_189(bParam0);
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
			if (func_398(bParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

bool func_329(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_451(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_330(bool bParam0)
{
	if (!func_25(*bParam0, 0))
	{
		return 0;
	}
	if (!func_452(*bParam0))
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

bool func_331(bool bParam0)
{
	return func_179(bParam0) == -3.265313E+23f;
}

int func_332(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7, bool bParam8)
{
	int iVar0;
	struct<4> Var1;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_233(bParam0, -3.294982E+22f) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_322(bParam0, Param1, fParam5, bParam6) };
		if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var1))
		{
			return 0;
		}
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(func_172(bParam6), &Var1, bParam8);
	}
	else
	{
		iVar0 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam6), bParam0, bParam8);
	}
	return iVar0;
}

bool func_333(bool bParam0)
{
	return func_189(bParam0) == 6.698816E+28f;
}

bool func_334(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_453(bParam0))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1);
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
		if (!ITEMDATABASE::_0xF27F01BBF5ACD3F3(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_454(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_335(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_27() == 0)
	{
		return func_455(iParam0);
	}
	return iParam0 <= func_382();
}

bool func_336(int iParam0)
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

int func_337(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if ((bParam4 && bParam1 == -982726.7f) && func_456(bParam0, 8.497754E-37f))
	{
		bParam1 = 8.497754E-37f;
	}
	if (func_223(bParam0) || func_76(bParam0, 2.791187f))
	{
		return func_457(func_224(bParam0, 0), bParam1, bParam3, 1);
	}
	if (!func_149(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_338(bool bParam0)
{
	switch (bParam0)
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

int func_339(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_458(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_460(func_459(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 17), iVar0, iParam1);
	}
	return -1;
}

bool func_340(int* iParam0, bool bParam1)
{
	if (!bParam1)
	{
		if (func_462(iParam0))
		{
			return false;
		}
	}
	if (func_463(&(iParam0->f_6)))
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

int func_341(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	float fVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;

	if (!func_453(bParam0))
	{
		return 0;
	}
	bVar1 = func_113(iParam3, 2);
	bVar2 = func_464(bParam0, -2.401104E+18f, bVar1);
	bVar3 = func_464(bParam0, -982726.7f, bVar1);
	if (func_464(bParam0, 0.003804697f, bVar1))
	{
		iParam1 = 0.003804697f;
	}
	else if (bParam4 && (func_465(bParam0, &fVar0) || func_466(bParam0, &fVar0)))
	{
		iParam1 = fVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -2.401104E+18f;
	}
	else if (bVar2 && bVar3)
	{
		if (func_467())
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
	else if (func_468(15) && func_464(bParam0, 1.109321E-25f, bVar1))
	{
		iParam1 = 1.109321E-25f;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -982726.7f;
	}
	return iParam1;
}

int func_342(bool bParam0, bool bParam1, int iParam2)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (!func_464(bParam0, bParam1, 0))
	{
		return 0;
	}
	if (func_113(iParam2, 2))
	{
		if (func_225(bParam0, bParam1))
		{
			return 0;
		}
	}
	if (NETWORK::NETWORK_AWARD_HAS_REACHED_MAXCLAIM(bParam0))
	{
		return 0;
	}
	if (func_113(iParam2, 8))
	{
		return func_469(bParam0, bParam1);
	}
	return 1;
}

bool func_343(int* iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_334(iParam1->f_17, bParam3, &uVar0, &iVar31, 0, 1))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_470(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 2:
			return func_471(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 3:
			return func_472(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 4:
			return func_473(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 5:
			return func_474(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 6:
			return func_475(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 7:
			return func_476(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 8:
			return func_477(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 9:
			return func_478(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 10:
			return func_479(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 11:
			return func_480(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 12:
			return func_481(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 13:
			return func_482(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 14:
			return func_483(iParam0, iParam1, iParam2, &uVar0, bParam4);
		case 15:
			return func_484(iParam0, iParam1, iParam2, &uVar0, bParam4);
		default:
			break;
	}
	return false;
}

int func_344(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, int iParam9, bool bParam10)
{
	bool bVar0;

	if (func_485(bParam1))
	{
		bVar0 = func_168(bParam1);
		return func_486(iParam0, bVar0, bParam7, bParam8, iParam9);
	}
	if (func_113(iParam9, 32))
	{
		if (!func_487(bParam1, Param2, iParam6))
		{
			return 0;
		}
	}
	if (!func_488(bParam1, bParam7, iParam9))
	{
		return 0;
	}
	if (func_113(iParam9, 4))
	{
		if (!func_489(iParam0, bParam1, Param2, iParam6, bParam7, bParam8, 0, bParam10))
		{
			return 0;
		}
	}
	if (func_113(iParam9, 8))
	{
		return func_490(iParam0, bParam1, bParam7, bParam8);
	}
	return 1;
}

struct<17> func_345(bool bParam0, struct<4> Param1, float fParam5, bool bParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_322(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = bParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_233(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_448() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

bool func_346(int* iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;
	int iVar31;

	uVar0 = 15;
	if (!func_149(iParam1->f_8, iParam1->f_13, &uVar0, &iVar31, 1, 0))
	{
		return false;
	}
	switch (iVar31)
	{
		case 1:
			return func_491(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 2:
			return func_492(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 3:
			return func_493(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 4:
			return func_494(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 5:
			return func_495(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 6:
			return func_496(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 7:
			return func_497(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 8:
			return func_498(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 9:
			return func_499(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 10:
			return func_500(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 11:
			return func_501(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 12:
			return func_502(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 13:
			return func_503(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 14:
			return func_504(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		case 15:
			return func_505(iParam0, iParam1, iParam2, &uVar0, bParam3, iParam4);
		default:
			break;
	}
	return false;
}

bool func_347(var uParam0)
{
	return func_198(*uParam0, 2);
}

float func_348()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_349(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_350(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_351(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return Global_1144511[iVar0 /*83*/].f_38.f_3;
	}
	return -1;
}

int func_352(int iParam0)
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

var func_353(int iParam0, int iParam1)
{
	return func_506(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

int func_354()
{
	return Global_1102813.f_3672;
}

void func_355(int iParam0, int iParam1)
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

void func_356(var uParam0, bool bParam1, struct<17> Param2)
{
	int iVar0;
	struct<24> Var1;

	if (!func_463(uParam0))
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

bool func_357(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_507(36, iParam0);
}

bool func_358(int iParam0)
{
	if (iParam0 >= 1 && iParam0 <= 184)
	{
		return true;
	}
	return false;
}

bool func_359(int iParam0)
{
	if (!func_358(iParam0))
	{
		return false;
	}
	return Global_1149417.f_11[iParam0 /*3*/].f_2;
}

bool func_360()
{
	return (func_508(0) && func_508(1));
}

bool func_361()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_362(int iParam0)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

int func_363(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_509(1);
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

bool func_364(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -6.540436E+35f;
		case 2:
			return -4.457409E-26f;
		case 3:
			return -3.5234E+17f;
		case 4:
			return 7.563374E+19f;
		case 5:
			return -7.734187E-14f;
		case 6:
			return -1.069422E-30f;
		case 7:
			return -1.520188E-37f;
		case 8:
			return -3.718011E+10f;
		case 9:
			return NaNf;
		case 10:
			return -2.229862E+25f;
		case 11:
			return -8.310997E-25f;
		case 12:
			return -3.184342E-29f;
		case 13:
			return 3.415157E-19f;
		case 14:
			return NaNf;
		case 15:
			return 6.999613E-32f;
		case 16:
			return 4.078473E-38f;
		case 17:
			return 1.579125E+34f;
		case 24:
			return 8.032001E-30f;
		case 25:
			return -1.747018E-22f;
		case 26:
			return -3.256739E+21f;
		case 27:
			return -2.499351E+23f;
		case 28:
			return 1.233249E-36f;
		case 35:
			return -1.231178E-15f;
		case 36:
			return 1.51159E+21f;
		case 37:
			return 0.6481152f;
		case 38:
			return 1.535398E+36f;
		case 39:
			return 43.34694f;
		case 40:
			return 5.975331E-24f;
		case 41:
			return 2.911409E+38f;
		case 42:
			return -3.584324E-31f;
		case 43:
			return -2.024568E+12f;
		case 55:
			return 1.962766E+36f;
		default:
			break;
	}
	return false;
}

bool func_365(bool bParam0, bool bParam1, var uParam2, int iParam3)
{
	struct<37> Var0;
	int iVar47;

	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_250(bParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_510(bParam0, bParam1, &Var0))
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

bool func_366(bool bParam0, bool bParam1)
{
	bool bVar0;

	if (!func_250(bParam0, 2))
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

void func_367(bool bParam0, int iParam1, var uParam2)
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

struct<18> func_368(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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

void func_369(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

bool func_370(var uParam0, int iParam1, int* iParam2, bool bParam3)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION_WITH_FILTER(func_172(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

int func_371(int iParam0)
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

int func_372(bool bParam0)
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

int func_373(bool bParam0)
{
	if (func_76(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_76(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_76(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

int func_374(int iParam0, int iParam1, bool bParam2)
{
	var uVar0[15];
	int iVar16;
	int iVar17;

	PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
	iVar16 = 0;
	iVar17 = 0;
	while (iVar17 < 15)
	{
		if (func_25(uVar0[iVar17], 0) && bParam2 == uVar0[iVar17])
		{
			iVar16++;
		}
		iVar17++;
	}
	return iVar16;
}

bool func_375(int iParam0)
{
	iParam0 = func_251(iParam0);
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

bool func_376(int iParam0)
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
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (!ENTITY::GET_IS_ANIMAL(iVar0))
	{
		return false;
	}
	if (FLOCK::_GET_ANIMAL_RARITY(iVar0) == 2)
	{
		return false;
	}
	if (ENTITY::_IS_ENTITY_FULLY_LOOTED(iParam0))
	{
		return false;
	}
	if (FIRE::_IS_ENTITY_CONSUMED_BY_FIRE(iParam0))
	{
		return false;
	}
	return true;
}

bool func_377(char* sParam0, int iParam1, int* iParam2, int iParam3, bool bParam4)
{
	*iParam1 = INVENTORY::_INVENTORY_CREATE_ITEM_COLLECTION(func_172(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_378(int iParam0, int iParam1, int iParam2, int iParam3)
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

int func_379(bool bParam0)
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

int func_380(var uParam0, int iParam1)
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

int func_381(bool bParam0)
{
	int iVar0;

	iVar0 = func_189(bParam0);
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

int func_382()
{
	if (func_27() == 0)
	{
		return MONEY::_NETWORK_GET_CASH_BALANCE();
	}
	return MONEY::_MONEY_GET_CASH_BALANCE();
}

int func_383(int iParam0, char* sParam1, float fParam2, bool bParam3)
{
	int iVar0;
	struct<5> Var1;
	struct<17> Var6;
	struct<17> Var23;

	iVar0 = -1;
	Var1 = { func_184(3.996812E+36f, 1, 0) };
	Var6 = { func_511(3.996812E+36f, Var1, Var1.f_4, iParam0, 1) };
	Var6.f_12 = fParam2;
	iVar0 = func_339(7.184882E+22f, &Var6, bParam3);
	if (iVar0 == -1)
	{
	}
	else
	{
		Var23.f_7 = -5.149929E+33f;
		Var23.f_16 = -1;
		StringCopy(&(Var23.f_12), sParam1, 32);
		func_195(iVar0, Var23);
	}
	return iVar0;
}

void func_384(int iParam0)
{
	struct<2> Var0;

	if (iParam0 <= 0)
	{
		return;
	}
	if (func_382() < iParam0)
	{
		iParam0 = func_382();
	}
	MONEY::_MONEY_DECREMENT_CASH_BALANCE(iParam0);
	Var0 = { func_444(6.480143E+20f) };
	STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam0);
}

void func_385(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_289(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 1, 4.465091E-08f, 0, 0, 0, 1);
}

float func_386(int iParam0)
{
	int iVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*iParam0);
	return func_512(iVar0);
}

int func_387(int iParam0)
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
			iVar0 = func_512(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0));
		}
	}
	return iVar0;
}

int func_388(bool bParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iParam1 = func_513(bParam0, iParam1, iParam2, 1, 1, -5.149929E+33f, 0, 1);
	if (iParam1 <= 0)
	{
		return 1;
	}
	return func_514(bParam0, iParam1, bParam3, iParam4);
}

int func_389(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	struct<6> Var1[10];
	int iVar62;
	int iVar63;
	int iVar64;
	struct<17> Var65;
	struct<17> Var82;

	if (func_515(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_233(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_80(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_516(&Var1, &iVar62, bParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -5.45926E-19f;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_517(bParam0, &(Var1[iVar63 /*6*/])) };
			Var65.f_12 = iParam2;
			iVar64 = func_339(7.184882E+22f, &Var65, 1);
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
			func_195(iVar64, Var82);
			return 1;
		}
		return 0;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_ITEMID(func_172(bParam4), bParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

bool func_390(bool bParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<14> Var0;
	int iVar14;
	struct<13> Var15;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return false;
	}
	if (func_515(bParam0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_329(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_80(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_27() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -5.45926E-19f;
			Var15.f_8 = bParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_339(7.184882E+22f, &Var15, 1);
			if (iVar14 != -1)
			{
				Var32.f_7 = -5.149929E+33f;
				Var32.f_16 = -1;
				Var32 = bParam5;
				Var32.f_7 = iParam4;
				func_195(iVar14, Var32);
			}
		}
		return iVar14 != -1;
	}
	if (!INVENTORY::_INVENTORY_REMOVE_INVENTORY_ITEM_WITH_GUID(func_172(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_391(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<5> Var3;
	struct<4> Var8;
	int iVar12;
	struct<17> Var13;

	iVar0 = -1;
	iVar1 = func_373(bParam0);
	iVar2 = func_372(bParam0);
	if (iVar2 != 0)
	{
		if (!func_80(0) || func_81())
		{
			if (bParam2)
			{
				func_89(func_88(1.361312E-33f, -2.56015E-24f), 1);
				return func_518(iVar2, iVar1, bParam0, bParam1);
			}
			Var3 = { func_184(bParam0, 1, 0) };
			Var8 = { func_322(bParam0, Var3, Var3.f_4, 1) };
			iVar12 = func_519(bParam0, &Var8, 1, -5.149929E+33f, 0, 1);
			if (iVar12 != -1)
			{
				Var13.f_7 = -5.149929E+33f;
				Var13.f_16 = -1;
				Var13 = 1;
				Var13.f_3 = 1;
				func_195(iVar12, Var13);
			}
			return 0;
		}
		if (func_257(bParam0, 1, 1, -5.149929E+33f))
		{
			iVar0 = func_518(iVar2, iVar1, bParam0, bParam1);
		}
	}
	return iVar0;
}

bool func_392(bool bParam0)
{
	return func_179(bParam0) == 4.324946E+36f;
}

bool func_393(bool bParam0, int iParam1, bool bParam2, int iParam3)
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
	Var0 = { func_368(bParam0, -5.45926E-19f, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	if (bParam2)
	{
		func_369(&Var0, func_323(0));
	}
	if (!func_370(&Var0, &iVar18, &iVar19, 0))
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
			if (!func_378(&Var20, iVar39, iVar18, iVar19))
			{
			}
			else
			{
				Var34.f_4 = Var20.f_9;
				Var34 = { Var20.f_5 };
				if (func_390(bParam0, &Var20, &Var34, 1, iParam3, 0, 0))
				{
					iVar40++;
				}
			}
			iVar39++;
		}
	}
	func_371(iVar18);
	if (iVar40 < iParam1)
	{
	}
	return true;
}

void func_394(bool bParam0, bool bParam1, int iParam2)
{
	Global_1940239.f_5 = bParam0;
	Global_1940239.f_37 = iParam2;
	if (bParam1 || (func_520() && iParam2 == 0))
	{
		func_521(1);
		func_522(1);
	}
}

int func_395(int iParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::GET_IS_ANIMAL(iParam0) && !ENTITY::_GET_IS_BIRD(iParam0))
	{
		return 0;
	}
	iVar0 = PED::_GET_PED_DAMAGE_CLEANLINESS(iParam0);
	iVar1 = FLOCK::_GET_ANIMAL_RARITY(iParam0);
	if (iVar1 == 2)
	{
		iVar2 = 4;
	}
	else if (iVar1 == 1)
	{
		iVar2 = 3;
	}
	else
	{
		iVar3 = PED::_GET_PED_QUALITY(iParam0);
		switch (iVar3)
		{
			case 0:
				iVar2 = 0;
				break;
			case 1:
				iVar2 = 1;
				break;
			case -1:
			case 2:
				iVar2 = 2;
				break;
		}
	}
	if (Global_17340.f_2 != 3)
	{
		iVar1 = Global_17340.f_2;
	}
	iVar4 = PED::_COMPUTE_SATCHEL_ITEM_FOR_PED_CARCASS(uParam1, iParam0, iVar0, iVar2);
	return iVar4;
}

bool func_396(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_321(0) };
	Var0.f_4 = 5.960322E-13f;
	Var5 = { func_322(bParam0, Var0, Var0.f_4, 0) };
	return func_390(bParam0, &Var5, &Var0, iParam1, iParam3, bParam2, 0);
}

int func_397(bool bParam0)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_189(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_COUNT(iVar0);
}

bool func_398(bool bParam0, int iParam1, int iParam2)
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

bool func_399(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	return func_523(&uParam0, iParam4, iParam5, bParam6, iParam7);
}

bool func_400(struct<4> Param0, bool bParam4, bool bParam5)
{
	struct<11> Var0;

	if (!func_80(0))
	{
		return func_524(&Param0, bParam4, 1) != -1;
	}
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param0))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_329(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == bParam4)
	{
		return true;
	}
	if (!INVENTORY::_INVENTORY_EQUIP_ITEM_WITH_GUID(func_172(bParam5), &Param0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_401(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	if (func_76(bParam0, 4.331964E-33f))
	{
		return true;
	}
	return false;
}

bool func_402(int iParam0, bool bParam1)
{
	struct<4> Var0;

	if (!func_525(3.210799E-08f, iParam0))
	{
		return false;
	}
	Var0 = { func_266() };
	*bParam1 = func_406(Var0, iParam0, 0, -1);
	if (!func_25(*bParam1, 0))
	{
		return false;
	}
	return true;
}

bool func_403(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	return ((bParam0 == 4.758761E+10f || bParam0 == 1.070027E-18f) || bParam0 == -0.02319489f);
}

bool func_404(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	return (bParam0 == 4.819468E+34f || bParam0 == 2.53787E+07f);
}

bool func_405(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	return bParam0 == -5.146762E-24f;
}

int func_406(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_526(&uParam0, iParam4, bParam5, iParam6);
}

bool func_407(bool bParam0)
{
	if ((((bParam0 == 1.718565E-29f || bParam0 == -4.05655E+37f) || bParam0 == -1593.584f) || bParam0 == 3.657296E-18f) || bParam0 == 26.6469f)
	{
		return true;
	}
	return false;
}

bool func_408(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	struct<18> Var2;
	struct<4> Var20;
	int iVar34;

	if (iParam0 == 0)
	{
		return false;
	}
	Var2 = { func_368(0, iParam0, -5.45926E-19f, -5.45926E-19f, 0, 0, 0) };
	func_369(&Var2, func_266());
	if (func_370(&Var2, &iVar0, &iVar1, 0))
	{
		Var20.f_9 = -5.45926E-19f;
		iVar34 = 0;
		while (iVar34 < iVar1)
		{
			if (func_378(&Var20, iVar34, iVar0, iVar1))
			{
				if (func_25(Var20.f_4, 0) && !Var20.f_10)
				{
					if (bParam2 && func_407(Var20.f_4))
					{
					}
					else
					{
						*uParam1 = { Var20 };
						func_371(iVar0);
						return true;
					}
				}
			}
			iVar34++;
		}
		func_371(iVar0);
	}
	return false;
}

int func_409(bool bParam0, int iParam1)
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

int func_410(bool bParam0, bool bParam1)
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

int func_411(bool bParam0)
{
	var uVar0[5];
	int iVar6;

	if (!func_25(bParam0, 0))
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

bool func_412(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	if (func_76(bParam0, -5.542951E+24f))
	{
		return true;
	}
	return false;
}

int func_413(bool bParam0, int iParam1)
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

char* func_414(bool bParam0)
{
	bool bVar0;

	if (!func_25(bParam0, 0))
	{
		return "";
	}
	bVar0 = func_278(bParam0, 0);
	if (bVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(bVar0);
}

bool func_415(bool bParam0)
{
	if (func_189(bParam0) == -1.955052E+34f || func_189(bParam0) == 4.029065E+31f)
	{
		return true;
	}
	return false;
}

char* func_416(bool bParam0)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return "";
	}
	iVar0 = func_280(bParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return HUD::GET_STRING_FROM_HASH_KEY(iVar0);
}

void func_417(char* sParam0, char* sParam1, int iParam2)
{
	COMPAPP::_0x74BCCEB233AD95B2(-1.304703E+22f, MISC::GET_HASH_KEY(sParam0));
	COMPAPP::_0x74BCCEB233AD95B2(2.767241E+29f, MISC::GET_HASH_KEY(sParam1));
	COMPAPP::_0x74BCCEB233AD95B2(-1.523167E+09f, iParam2);
}

bool func_418(bool bParam0)
{
	var uVar0;

	if (func_27() != -1)
	{
		return false;
	}
	if (func_275(bParam0, 1048576))
	{
		return false;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_185(bParam0, &uVar0, 1, 0, 0, -1, 0);
	}
	return func_150(bParam0, 1);
}

void func_419(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	bool bVar0;

	if (func_179(bParam0) != -3.265313E+23f)
	{
		return;
	}
	bVar0 = func_177(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(bVar0))
	{
		return;
	}
	if (bParam2 || !func_171(bVar0))
	{
		if (bParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_33, bVar0, 0, false) && func_138(bParam0, 0, 0, 0) == 0))
		{
			if (func_27() == -1)
			{
				func_178(bVar0);
			}
			if (!*bParam3 && !iParam4 == 3787186f)
			{
				func_181(bParam0, iParam1, 0, 0, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_420(bool bParam0, int iParam1)
{
	if (func_76(bParam0, 7.644572E-37f))
	{
		func_283(bParam0, -982726.7f, iParam1, 1);
	}
}

int func_421(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_300(bParam0) && !bParam2)
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_33, bParam0);
	}
	return INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_ITEMID(func_172(bParam1), bParam0, bParam3);
}

bool func_422()
{
	if (((((!ANIMSCENE::IS_ENTITY_PLAYING_ANIM_SCENE(Global_33, -1) && !PED::IS_PED_USING_ANY_SCENARIO(Global_33)) && !func_527(Global_33, 8.330918E+10f)) && !func_527(Global_33, 2.446422E-13f)) && !TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33)) && !PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	return false;
}

bool func_423(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_424(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

void func_425(int iParam0)
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

void func_426(int iParam0)
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
			func_528(1);
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
			func_529(1);
			break;
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_529(2);
			break;
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_529(3);
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
			func_530(1);
			break;
		case 33:
			func_531(1);
			break;
		case 34:
			func_532(1);
			break;
		case 35:
			break;
		case 36:
			func_533(0);
			break;
		case 37:
			func_534(0);
			break;
		case 38:
			func_535(0);
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
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 2);
			func_302(677, 0);
			break;
		case 3:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 3);
			func_302(678, 0);
			break;
		case 4:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 4);
			func_302(679, 0);
			break;
		case 5:
			if (func_536() && PLAYER::_IS_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_537("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 2.48646E-06f, 1.70228E+32f, 8000, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 1, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 2, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 3, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 4, false);
			PLAYER::_SET_DEADEYE_ABILITY_LOCKED(PLAYER::GET_PLAYER_INDEX(), 5, false);
			PLAYER::_SET_DEADEYE_ABILITY_LEVEL(PLAYER::GET_PLAYER_INDEX(), 5);
			func_302(680, 0);
			break;
		case 23:
			UNLOCK::UNLOCK_SET_UNLOCKED(-4.628467E+31f, true);
			UNLOCK::UNLOCK_SET_VISIBLE(-4.628467E+31f, true);
			WEAPON::_SET_ALLOW_DUAL_WIELD(PLAYER::PLAYER_PED_ID(), true);
			break;
		case 47:
			if (func_27() == -1)
			{
				if (!func_150(0.01458261f, 1))
				{
					func_298(0.01458261f, 1, 6.028273E-12f);
				}
			}
			break;
		case 49:
			if (func_27() == -1)
			{
				if (!func_150(0.01458261f, 1))
				{
					func_298(0.01458261f, 1, 6.028273E-12f);
				}
				if (!func_150(7.734759E-34f, 1))
				{
					func_298(7.734759E-34f, 1, 6.028273E-12f);
				}
			}
			break;
		case 48:
			if (func_27() == -1)
			{
				if (!func_150(1.044822E-10f, 1))
				{
					func_298(1.044822E-10f, 1, 6.028273E-12f);
				}
			}
			break;
		case 50:
			if (func_27() == -1)
			{
				if (!func_150(1.044822E-10f, 1))
				{
					func_298(1.044822E-10f, 1, 6.028273E-12f);
				}
				if (!func_150(-1.840652E+20f, 1))
				{
					func_298(-1.840652E+20f, 1, 6.028273E-12f);
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

void func_427(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;

	if ((WEAPON::GET_AMMO_IN_CLIP(Global_33, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::GET_WEAPON_CLIP_SIZE(bParam0))
	{
		fVar2 = func_141(WEAPON::GET_WEAPON_CLIP_SIZE(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_33, bParam0, fVar2);
		if (WEAPON::GET_MAX_AMMO(Global_33, &iVar1, bParam0) && WEAPON::GET_AMMO_IN_PED_WEAPON(Global_33, bParam0) > iVar1)
		{
			WEAPON::SET_PED_AMMO(Global_33, bParam0, iVar1);
		}
	}
}

int func_428(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	struct<5> Var1;
	var uVar6;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_233(bParam0, -3.294982E+22f);
	if (iVar0 == 0)
	{
		return 0;
	}
	Var1 = { func_184(bParam0, 0, 0) };
	if (func_185(bParam0, &Var1, iParam1, 0, 0, -1, 0))
	{
		return 0;
	}
	if (!func_80(0))
	{
		return 0;
	}
	if (!INVENTORY::_INVENTORY_ADD_ITEM_WITH_GUID(func_172(0), &uVar6, &Var1, bParam0, Var1.f_4, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

void func_429(bool bParam0)
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
	iVar2 = func_538();
	func_539(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_33, sVar1, iVar2);
}

int func_430(bool bParam0)
{
	int iVar0;
	int iVar1;

	if (func_26(bParam0))
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

bool func_431()
{
	return false;
}

bool func_432(bool bParam0)
{
	return WEAPON::_IS_AMMO_VALID(WEAPON::_GET_AMMO_TYPE_FOR_WEAPON(bParam0));
}

int func_433(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_434(bool bParam0)
{
	int iVar0;

	iVar0 = WEAPON::_GET_WEAPON_TYPE_FROM_AMMO_TYPE(bParam0);
	if (WEAPON::IS_WEAPON_A_GUN(iVar0))
	{
		if (WEAPON::_IS_WEAPON_TWO_HANDED(iVar0))
		{
			if (!func_293(49))
			{
				if (!func_293(47))
				{
					return 149;
				}
				return 151;
			}
		}
		else if (WEAPON::_IS_WEAPON_ONE_HANDED(iVar0))
		{
			if (!func_293(50))
			{
				if (!func_293(48))
				{
					return 150;
				}
				return 152;
			}
		}
	}
	return 153;
}

void func_435(int iParam0, int iParam1, int iParam2)
{
	int iVar0;

	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_436(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_540(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_541(iParam0))
	{
		return false;
	}
	if (func_542(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_441(iParam0, 1)) || func_543(32768))
	{
		if (!func_441(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_544())
	{
		return false;
	}
	return true;
}

void func_437(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

int func_438(int iParam0, bool bParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;

	if (func_27() == 0)
	{
		return 0;
	}
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_150(6.217872E+26f, 1))
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
			if (func_25(bVar25, 0) && func_76(bVar25, -7.721469E-31f))
			{
				return BUILTIN::CEIL((IntToFloat(Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_439(int iParam0, char* sParam1, int iParam2, bool bParam3)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		if (bParam3)
		{
			func_545(iParam0, 1000);
			return;
		}
		sParam1 = "FEED_MONEY_EARN";
	}
	func_289(MISC::VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
}

void func_440(int iParam0, bool bParam1, float fParam2, int iParam3)
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
		if (func_546() || func_547())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 1036831949));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_289(MISC::VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -3.959475E-32f, 0, 4.808429E-35f, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
		}
		func_289(MISC::VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 3.428622E+27f, 0, 4.808429E-35f, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, 6.028273E-12f);
		func_89(func_444(6.480143E+20f), iVar1);
	}
}

bool func_441(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

void func_442(var uParam0, int iParam1)
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

int func_443(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)
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
	func_548(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_3.f_1 = 10;
	Var1 = iParam3;
	Var1.f_3 = { *uParam1 };
	Var1.f_2 = iParam4;
	func_549(uParam2, iParam0, Var1);
	return 1;
}

struct<2> func_444(float fParam0)
{
	struct<2> Var0;

	Var0 = fParam0;
	return Var0;
}

char* func_445(int iParam0)
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

float func_446(bool bParam0)
{
	var uVar0;

	if (!func_151(bParam0, &uVar0, 4.975531E-10f, 0, 0, -2.889029E+24f))
	{
		return -0.1987056f;
	}
	return uVar0;
}

bool func_447(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;

	if (bParam0 != 0)
	{
		iVar3 = func_189(bParam0);
		if (iVar3 != 0)
		{
			iVar4 = func_550(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar4)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_INFO(iVar3, iVar0, &iVar1))
				{
					iVar2 = iVar1;
					if (iVar2 == iParam1)
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

struct<4> func_448()
{
	struct<4> Var0;

	return Var0;
}

int func_449()
{
	if (func_421(-0.0002099206f, 0, 0, 0) == 0)
	{
		return 0;
	}
	return 1;
}

bool func_450(bool bParam0, int iParam1, int iParam2, float fParam3)
{
	int iVar0;

	iVar0 = func_172(0);
	*iParam1 = { func_322(bParam0, func_323(0), fParam3, 0) };
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

bool func_451(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_172(bParam2);
	}
	if (!INVENTORY::INVENTORY_GET_INVENTORY_ITEM(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_452(bool bParam0)
{
	return func_76(bParam0, 5.168749E+07f);
}

bool func_453(bool bParam0)
{
	if (bParam0 == 0)
	{
		return false;
	}
	return ITEMDATABASE::ITEMDATABASE_IS_BUYABLE_AWARD_VALID(bParam0);
}

void func_454(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_189((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_455(int iParam0)
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

bool func_456(bool bParam0, bool bParam1)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	if (func_223(bParam0) || func_76(bParam0, 2.791187f))
	{
		return func_464(func_224(bParam0, 0), bParam1, 0);
	}
	return ITEMDATABASE::_0xDEE7B3C76ED664BE(bParam0, bParam1) > 0;
}

int func_457(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;

	if (!func_334(bParam0, bParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_458(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_VALIDATE_ITEM(iParam0, iParam1);
	if (iParam0 == 7.184882E+22f)
	{
		if ((func_551(iParam1->f_8, iParam0, iVar0, 2048) || func_551(iParam1->f_8, iParam0, iVar0, 32768)) || func_551(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 5112.871f)
	{
		if (((func_551(iParam1->f_8, iParam0, iVar0, 4) || func_551(iParam1->f_8, iParam0, iVar0, 256)) || func_551(iParam1->f_8, iParam0, iVar0, 65536)) || func_551(iParam1->f_8, iParam0, iVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -2.328868E-12f)
	{
		if (((func_551(iParam1->f_8, iParam0, iVar0, 1) || func_551(iParam1->f_8, iParam0, iVar0, 8)) || func_551(iParam1->f_8, iParam0, iVar0, 65536)) || func_551(iParam1->f_8, iParam0, iVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -3.415538E-09f)
	{
		if (((func_551(iParam1->f_8, iParam0, iVar0, 1) || func_551(iParam1->f_8, iParam0, iVar0, 16)) || func_551(iParam1->f_8, iParam0, iVar0, 2)) || func_551(iParam1->f_8, iParam0, iVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_551(iParam1->f_8, iParam0, iVar0, 8) || func_551(iParam1->f_8, iParam0, iVar0, 4096)) || func_551(iParam1->f_8, iParam0, iVar0, 256)) || func_551(iParam1->f_8, iParam0, iVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_459(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam2, 0);
}

int func_460(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(iParam1))
		{
			func_552(iParam1, 1, 0, 0);
			return iParam1;
		}
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	else if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(iParam1) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(iParam1);
	}
	func_552(iParam1, 2, 0, 0);
	return -1;
}

int func_461(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		func_552(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_462(int* iParam0)
{
	int iVar0;

	if (iParam0->f_1 == -1)
	{
		return false;
	}
	iVar0 = func_553(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

bool func_463(var uParam0)
{
	if (((*uParam0 == 0 && (uParam0->f_1 == 0 || uParam0->f_1 == -8349055f)) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_464(bool bParam0, bool bParam1, bool bParam2)
{
	if (!func_453(bParam0))
	{
		return false;
	}
	if (ITEMDATABASE::_0xF540239F9937033B(bParam0, bParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_225(bParam0, bParam1);
	}
	return true;
}

bool func_465(bool bParam0, float fParam1)
{
	*fParam1 = func_554(bParam0, 1);
	return *fParam1 != 0;
}

bool func_466(bool bParam0, float fParam1)
{
	*fParam1 = func_555(bParam0, 1, 0);
	return *fParam1 != 0;
}

bool func_467()
{
	return Global_1915643.f_22477;
}

bool func_468(int iParam0)
{
	if (iParam0 == 34 && Global_1915643.f_22504.f_1)
	{
		return true;
	}
	if (func_3(1))
	{
		if (Global_1915643.f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_469(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	var uVar2;

	if (bParam1 == -2.401104E+18f)
	{
		iVar0 = func_457(bParam0, -2.401104E+18f, 0, 1);
		if (iVar0 == 0)
		{
		}
		if (!func_336(iVar0))
		{
			if (Global_1915643.f_20644)
			{
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_556(iVar0)));
			}
			return 0;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		iVar1 = func_457(bParam0, -982726.7f, 0, 1);
		if (iVar1 == 0)
		{
		}
		if (!func_335(iVar1))
		{
			if (Global_1915643.f_20644)
			{
				func_557("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return 1;
	}
	if (!func_188(bParam0, bParam1, &uVar2, 1, 0))
	{
		return 0;
	}
	return 1;
}

bool func_470(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_471(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_472(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_473(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_474(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_475(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_476(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_477(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_478(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_479(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_480(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_481(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_482(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_483(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_484(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_558(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4);
}

bool func_485(bool bParam0)
{
	bool bVar0;

	bVar0 = func_168(bParam0);
	if (func_250(bVar0, 2))
	{
		return true;
	}
	return false;
}

int func_486(int* iParam0, bool bParam1, bool bParam2, bool bParam3, int iParam4)
{
	int iVar0;
	var uVar1;
	var uVar2;
	int iVar4;
	struct<5> Var5[16];
	bool bVar86;
	struct<4> Var87;
	int iVar91;

	if (!func_250(bParam1, 2))
	{
		return 0;
	}
	uVar2 = 1;
	func_559(bParam1, &uVar2, &uVar1, &Var5, &iVar0);
	if (func_113(iParam4, 8) && !func_560(bParam1, bParam2, bParam3))
	{
		return 0;
	}
	iVar4 = 0;
	while (iVar4 < iVar0)
	{
		if (Var5[iVar4 /*5*/].f_1 == -5.45926E-19f)
		{
			bVar86 = Var5[iVar4 /*5*/];
			if (func_113(iParam4, 4))
			{
				if (!func_489(iParam0, bVar86, Var87, iVar91, bParam2, (bParam3 * Var5[iVar4 /*5*/].f_4), 1, 1))
				{
					return 0;
				}
			}
		}
		iVar4++;
	}
	return 1;
}

bool func_487(bool bParam0, struct<4> Param1, int iParam5)
{
	struct<10> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Param1))
	{
		return false;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_329(Param1, &Var0, 1, 0, -1))
	{
		return false;
	}
	if (!func_398(bParam0, func_189(Var0.f_4), iParam5))
	{
		return false;
	}
	return true;
}

bool func_488(bool bParam0, bool bParam1, int iParam2)
{
	if (func_113(iParam2, 1))
	{
		if (!func_561(bParam0))
		{
			return false;
		}
	}
	if (func_113(iParam2, 2))
	{
		if (func_134(bParam0, bParam1, 1))
		{
			return false;
		}
	}
	return true;
}

bool func_489(int* iParam0, bool bParam1, struct<4> Param2, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	struct<4> Var0;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;

	if (!bParam10 && !INVENTORY::_INVENTORY_IS_GUID_VALID(&Param2))
	{
		return false;
	}
	Var0.f_4 = iParam6;
	Var0 = { Param2 };
	iVar5 = func_332(bParam1, Param2, iParam6, 1, !bParam10, 0);
	iVar6 = func_235(bParam1, &Var0, !bParam10, 1);
	if (bParam9)
	{
		iVar7 = 1;
	}
	else if (func_283(bParam1, bParam7, &iVar7, 0))
	{
	}
	iVar8 = (func_562(iParam0, bParam1) * iVar7);
	if (iVar8 > 0)
	{
	}
	if (iVar6 >= 0)
	{
		iVar9 = (iVar6 - (iVar5 + iVar8));
		iVar10 = (bParam8 * iVar7);
		if (iVar10 > iVar6)
		{
			iVar10 = iVar6;
		}
		if (iVar9 <= 0)
		{
			return false;
		}
		else if ((iVar10 - iVar9) >= iVar7)
		{
			return false;
		}
	}
	return true;
}

int func_490(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	var uVar6;

	if (func_563(bParam1, 1) && !func_564(bParam1, 1))
	{
		if (Global_1915643.f_20644)
		{
			func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_TOKEN"));
		}
		return 0;
	}
	if (bParam2 == -2.401104E+18f)
	{
		iVar0 = func_337(bParam1, -2.401104E+18f, 1, 0, 1, 0);
		if (iVar0 == 0)
		{
		}
		iVar1 = (iVar0 * bParam3);
		if (!func_336((iVar1 + func_565(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", (iVar1 / 100)));
			}
			return 0;
		}
	}
	else if (bParam2 == -982726.7f)
	{
		iVar2 = func_337(bParam1, -982726.7f, 1, 0, 1, 0);
		if (iVar2 == 0)
		{
		}
		iVar3 = (iVar2 * bParam3);
		if (!func_335((iVar3 + func_565(iParam0, bParam2))))
		{
			if (Global_1915643.f_20644)
			{
				func_557("SHOP_H_TOO_POOR");
			}
			return 0;
		}
	}
	else if (bParam2 == 0.003804697f)
	{
		return 1;
	}
	if (func_250(func_168(bParam1), 2))
	{
		if (!func_566(func_168(bParam1), bParam3, bParam2, &uVar4, 1))
		{
			return 0;
		}
	}
	else if (func_25(bParam1, 0))
	{
		if (!func_227(bParam1, bParam3, bParam2, &uVar4, &uVar6, 0, 1, 0))
		{
			return 0;
		}
	}
	return 1;
}

bool func_491(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 1;
	Var0.f_1.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_492(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 2;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_493(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 3;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_494(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 4;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_495(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 5;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_496(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 6;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_497(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 7;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_498(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 8;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_499(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 9;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_500(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 10;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_501(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 11;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_502(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 12;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_503(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 13;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_504(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 14;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

bool func_505(int* iParam0, int iParam1, int iParam2, var uParam3, bool bParam4, int iParam5)
{
	struct<2> Var0;

	Var0 = 15;
	Var0.f_1.f_1 = 10;
	Var0.f_1.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	Var0.f_1.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_42.f_1 = 10;
	return func_567(iParam0, iParam1, iParam2, uParam3, Var0, &Var0, bParam4, iParam5);
}

var func_506(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_568() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_569());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_569());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_569());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_570(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_357(iVar2))
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
				if (iVar9 & 8192 != 0 && func_571(iVar2) != 1)
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
					if (!func_572(iVar10))
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

bool func_507(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_573(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_354())
	{
		return func_573(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_573(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_508(int iParam0)
{
	return func_573(&(Global_1956862.f_1565), iParam0, 1);
}

int func_509(int iParam0)
{
	return func_574(func_508(iParam0));
}

bool func_510(bool bParam0, bool bParam1, var uParam2)
{
	int iVar0;
	int iVar1;

	iVar1 = ITEMDATABASE::_0x7A35A72A692BE9DB(bParam0);
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (ITEMDATABASE::_0x3A0B667ABFF87F6E(bParam0, iVar0, uParam2) && *uParam2 == bParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

struct<17> func_511(bool bParam0, struct<4> Param1, float fParam5, int iParam6, bool bParam7)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0.f_4 = { Param1 };
	Var0 = { func_322(bParam0, Var0.f_4, fParam5, 1) };
	Var0.f_8 = bParam0;
	Var0.f_9 = iParam6;
	Var0.f_11 = fParam5;
	if (bParam7)
	{
		Var0.f_15 = func_233(bParam0, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_448() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

float func_512(int iParam0)
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
	iVar2 = func_575(iVar0);
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
			iVar6 = func_576(iVar5);
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

int func_513(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, int iParam6, int iParam7)
{
	int iVar0;

	if (ENTITY::DOES_ENTITY_EXIST(iParam2))
	{
		iVar0 = func_577(iParam2, bParam0);
		if (iVar0 > 0)
		{
			if (iParam1 < iVar0)
			{
				iVar0 = iParam1;
			}
			iParam1 = (iParam1 - iVar0);
			func_578(&iParam2, bParam0, &iVar0, bParam4, iParam5, iParam6);
			iParam1 = (iParam1 + iVar0);
		}
	}
	iParam1 = func_579(PLAYER::PLAYER_PED_ID(), bParam0, iParam1, bParam3, iParam6);
	if (iParam1 <= 0)
	{
		return iParam1;
	}
	return iParam1;
}

int func_514(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_138(bParam0, 0, 0, 0);
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
		if (!func_257(bParam0, iVar1, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_580(bParam0, iVar1, 0);
		}
	}
	if (iVar2 > 0)
	{
		if (!func_581(bParam0, iVar2, bParam2, iParam3))
		{
			return 0;
		}
		else
		{
			func_580(bParam0, iVar1, 0);
		}
		if (!bParam2)
		{
			func_582("SHOP_SELL_HORSE_SATCHEL", 10000, 0, 0, 0, 1);
		}
	}
	return 1;
}

bool func_515(bool bParam0)
{
	if (ITEMDATABASE::_ITEMDATABASE_IS_INTRINSIC_ITEM(bParam0))
	{
		return true;
	}
	return false;
}

bool func_516(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5)
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
		iParam3 = func_233(bParam2, -3.294982E+22f);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!NETSHOPPING::_0xD1555FBC96C88444(bParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_583(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<17> func_517(bool bParam0, var uParam1)
{
	struct<17> Var0;

	Var0.f_9 = 1;
	Var0.f_11 = -5.45926E-19f;
	Var0 = { func_322(bParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = bParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

int func_518(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	struct<2> Var1;
	var uVar13[15];
	int iVar29;
	int iVar30;

	if (!func_80(0) || func_81())
	{
		iVar0 = iParam0;
		Var1.f_1 = 10;
		func_585(iParam1, func_584(bParam2), &Var1, 1);
		if (func_586(iVar0, &Var1, 0, 0))
		{
		}
		func_302(501, 0);
		return 0;
	}
	PED::_0xB29C553BA582D09E(&uVar13, iParam0, iParam1, func_584(bParam2));
	iVar29 = 0;
	while (iVar29 < 15)
	{
		if ((func_25(uVar13[iVar29], 0) && !func_76(uVar13[iVar29], 9.077182E+07f)) && !uVar13[iVar29] == bParam2)
		{
			func_182(uVar13[iVar29], 1, 0, 0, 0, 6.028273E-12f, 0, 0, 0, 0);
			if (bParam3 != 0)
			{
				if (bParam3 == uVar13[iVar29])
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
	func_394(func_80(0), 0, 0);
	return iVar30;
}

int func_519(bool bParam0, int iParam1, int iParam2, float fParam3, bool bParam4, bool bParam5)
{
	struct<14> Var0;
	struct<17> Var14;
	int iVar31;
	struct<17> Var32;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam1))
	{
		return -1;
	}
	if (func_515(bParam0))
	{
		return -1;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_329(*iParam1, &Var0, 1, 0, -1))
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
	Var14 = { func_587(&Var0, 0) };
	Var14.f_9 = iParam2;
	Var14.f_12 = fParam3;
	iVar31 = -1;
	iVar31 = func_339(7.184882E+22f, &Var14, bParam5);
	if (bParam4 && iVar31 != -1)
	{
		Var32.f_7 = -5.149929E+33f;
		Var32.f_16 = -1;
		Var32 = 1;
		func_195(iVar31, Var32);
	}
	return iVar31;
}

bool func_520()
{
	if ((Global_1940239.f_11596 != (Global_1940239.f_41.f_203 - 1) || func_589(func_588(0), Global_1940239.f_11588, 0, 1, 1) > 0) || Global_1940239.f_11596 == 15)
	{
		return true;
	}
	func_590(0);
	if (Global_1940239.f_7)
	{
		return true;
	}
	return false;
}

void func_521(int iParam0)
{
	Global_1940239.f_11 = iParam0;
}

void func_522(int iParam0)
{
	Global_1940239.f_10 = iParam0;
}

bool func_523(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	var uVar0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_172(bParam3);
	}
	if (!INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_EQUIPPED_IN_SLOT_BY_REF(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_451(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_524(int iParam0, bool bParam1, bool bParam2)
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
	if (!func_329(*iParam0, &Var1, 1, 0, -1))
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
	iVar15 = func_179(Var1.f_4);
	if (iVar15 == -6.742753E-26f)
	{
		Var16 = { func_591(*iParam0, 1, 0) };
		Var16.f_10 = bParam1;
		iVar0 = func_592(-4.99669E-06f, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2.839425E-36f)
	{
		Var45 = { func_593(*iParam0, 1, 0) };
		Var45.f_10 = bParam1;
		iVar0 = func_594(-4.99669E-06f, &Var45, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -42.1084f)
	{
		Var71 = { func_595(*iParam0, 1, 0) };
		Var71.f_10 = bParam1;
		iVar0 = func_596(-4.99669E-06f, &Var71, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var89 = { func_587(&Var1, 0) };
		Var89.f_10 = bParam1;
		iVar0 = func_339(-4.99669E-06f, &Var89, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

bool func_525(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar4;
	int iVar5;
	int iVar6;

	if (bParam0 != 0)
	{
		iVar5 = func_189(bParam0);
		if (iVar5 != 0)
		{
			iVar6 = func_397(bParam0);
			iVar0 = 0;
			while (iVar0 < iVar6)
			{
				if (ITEMDATABASE::_ITEMDATABASE_GET_HAS_SLOT_INFO(iVar5, iVar0, &iVar1))
				{
					iVar4 = iVar1;
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

int func_526(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<10> Var0;

	Var0.f_9 = -5.45926E-19f;
	if (func_523(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_527(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, true);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return true;
	}
	return false;
}

void func_528(bool bParam0)
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

void func_529(int iParam0)
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

void func_530(bool bParam0)
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

void func_531(bool bParam0)
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

void func_532(bool bParam0)
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

void func_533(bool bParam0)
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

void func_534(bool bParam0)
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

void func_535(bool bParam0)
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

bool func_536()
{
	return true;
	if (Global_1572887.f_14 == 0)
	{
		return true;
	}
	return Global_38.f_1;
}

int func_537(char* sParam0, char* sParam1, float fParam2, float fParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9, bool bParam10)
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

int func_538()
{
	return Global_1902565;
}

void func_539(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;

	iVar0 = func_597(*iParam0);
	iVar1 = func_598(*iParam0);
	iVar2 = func_599(*iParam0);
	iVar3 = func_600(*iParam0);
	iVar4 = func_601(*iParam0);
	iVar5 = func_602(*iParam0);
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
	iVar6 = func_603(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_603(iVar1, iVar0);
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
	func_604(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

bool func_540(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_541(int iParam0)
{
	if (func_441(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_542(int iParam0)
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

bool func_543(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_544()
{
	if (!func_605())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

void func_545(int iParam0, int iParam1)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (func_606())
	{
		Global_1913431.f_125 = MISC::GET_GAME_TIMER();
		Global_1913431.f_126 = iParam1;
	}
	Global_1913431.f_127 = (Global_1913431.f_127 + iParam0);
}

bool func_546()
{
	return UNLOCK::UNLOCK_IS_UNLOCKED(-3.159453E+34f);
}

bool func_547()
{
	return DLC::IS_DLC_PRESENT(-1.05615E-37f);
}

void func_548(var uParam0)
{
	func_442(uParam0, 8.505438E-34f);
	if (func_607() == 3.272964E+34f)
	{
		func_442(uParam0, 8.967694E-17f);
	}
	else
	{
		func_442(uParam0, 1.721179E-28f);
	}
}

void func_549(var uParam0, int iParam1, struct<15> Param2)
{
	int iVar0;
	struct<22> Var1;

	if (!func_463(uParam0))
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

int func_550(bool bParam0)
{
	int iVar0;

	if (!func_25(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_189(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEMDATABASE_GET_FITS_SLOT_COUNT(iVar0);
}

int func_551(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_230(iParam2, iParam3))
	{
		return 1;
	}
	return 0;
}

void func_552(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_608(iParam0, iParam1, iParam2, iParam3);
}

int func_553(int* iParam0)
{
	return func_609(iParam0->f_1);
}

bool func_554(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2[15];
	bool bVar33;
	int iVar34;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		bVar33 = func_610(iVar0, 1, 0);
		if (!func_334(bParam0, bVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_611(Var2[iVar34 /*2*/]))
				{
					if (!bParam1 || func_138(Var2[iVar34 /*2*/], 0, 1, 1) > 0)
					{
						return bVar33;
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
	return false;
}

bool func_555(bool bParam0, bool bParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	int iVar7;
	bool bVar8;
	struct<2> Var9[15];
	bool bVar40;
	int iVar41;

	iVar0 = 0;
	while (iVar0 < 5)
	{
		bVar40 = func_610(iVar0, 0, 1);
		if (!func_334(bParam0, bVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			bVar5 = false;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_612(Var9[iVar41 /*2*/]))
				{
					if (!bParam1 || func_138(Var9[iVar41 /*2*/], 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (Var9[iVar41 /*2*/] == 3.996812E+36f || Var9[iVar41 /*2*/] == 3.414007E-11f)
				{
					if ((bParam2 && Var9[iVar41 /*2*/] == 3.996812E+36f) || (!bParam2 && Var9[iVar41 /*2*/] == 3.414007E-11f))
					{
						if (bVar4 == 0 || (bVar6 && Var9[iVar41 /*2*/].f_1 < iVar2))
						{
							bVar5 = bVar40;
							iVar3 = Var9[iVar41 /*2*/].f_1;
							iVar7 = 1;
						}
					}
					else if (bVar4 == 0 || Var9[iVar41 /*2*/].f_1 < iVar2)
					{
						bVar5 = bVar40;
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
			if (bVar8 && bVar5 != 0)
			{
				bVar4 = bVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return bVar4;
}

int func_556(int iParam0)
{
	return (iParam0 / 100);
}

void func_557(char* sParam0)
{
	Global_1915643.f_22470 = func_582(sParam0, 10000, 0, 0, 0, 1);
}

bool func_558(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @101; //curOff = 54
		}
		else if (!func_613((*uParam3)[iVar0 /*2*/], (uParam3[iVar0 /*2*/])->f_1, iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_614(iParam0, iParam1, iParam5, iParam2, bParam6);
}

int func_559(bool bParam0, var uParam1, var uParam2, var uParam3, int iParam4)
{
	struct<5> Var0;
	bool bVar5;
	int iVar12;
	int iVar13;
	int iVar14;

	if (!func_250(bParam0, 2))
	{
		return 0;
	}
	if (*uParam2 > *uParam1)
	{
		return 0;
	}
	iVar12 = 0;
	while (iVar12 < *uParam1)
	{
		iVar12++;
	}
	iVar14 = ITEMDATABASE::_0x799FCD53358ED5FA(bParam0, uParam1);
	iVar13 = 0;
	while (iVar13 < iVar14)
	{
		if (ITEMDATABASE::_0xC4146375D8A0B374(bParam0, uParam1, iVar13, &Var0))
		{
			if ((*uParam1)[0] == 0)
			{
				(*uParam1)[0] = Var0;
			}
			else
			{
				*uParam2++;
				(*uParam1)[*uParam2] = Var0;
			}
			if (ITEMDATABASE::ITEMDATABASE_FILLOUT_ITEM_INFO(Var0, &bVar5))
			{
				if (func_25(bVar5, 0))
				{
					if (*iParam4 >= 0 && *iParam4 < *uParam3)
					{
						*(uParam3[*iParam4 /*5*/]) = { Var0 };
						*iParam4++;
					}
					else
					{
						return 0;
					}
				}
			}
			(*uParam1)[*uParam2] = 0;
			if (*uParam2 > 0)
			{
				*uParam2 = (*uParam2 - 1);
			}
		}
		iVar13++;
	}
	return 1;
}

bool func_560(bool bParam0, bool bParam1, bool bParam2)
{
	struct<37> Var0;
	var uVar47;

	Var0.f_4 = 15;
	Var0.f_36 = 10;
	func_510(bParam0, bParam1, &Var0);
	if (bParam1 == -2.401104E+18f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_336((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_557(MISC::VAR_STRING(2, "SHOP_H_TOO_POOR_GOLD", func_556((Var0.f_3 * bParam2))));
			}
			return false;
		}
	}
	else if (bParam1 == -982726.7f)
	{
		if (Var0.f_3 == 0)
		{
		}
		if (!func_335((Var0.f_3 * bParam2)))
		{
			if (Global_1915643.f_20644)
			{
				func_557("SHOP_H_TOO_POOR");
			}
			return false;
		}
	}
	else if (bParam1 == 0.003804697f)
	{
		return true;
	}
	if (!func_566(bParam0, bParam2, bParam1, &uVar47, 1))
	{
		return false;
	}
	return true;
}

bool func_561(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_27() == -1)
	{
		if (func_331(bParam0))
		{
			iVar1 = WEAPON::_GET_WEAPON_UNLOCK(bParam0);
			bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(iVar1);
		}
		else
		{
			return true;
		}
	}
	else
	{
		bVar0 = UNLOCK::UNLOCK_IS_VISIBLE(bParam0);
	}
	return bVar0;
}

int func_562(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<12> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (Var3.f_8 != bParam1)
			{
			}
			else
			{
				iVar0 = (iVar0 + Var3.f_9);
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_563(bool bParam0, bool bParam1)
{
	if (!func_76(bParam0, 5.908991E-05f))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_76(bParam0, -0.4876374f))
		{
			return func_224(bParam0, 1) != 0;
		}
		if ((func_134(bParam0, -982726.7f, 0) || func_134(bParam0, 2.273041E-17f, 0)) || func_134(bParam0, -2.401104E+18f, 0))
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

bool func_564(bool bParam0, bool bParam1)
{
	bool bVar0;
	var uVar1;

	bVar0 = func_615(bParam0, 1);
	if (bVar0 == 0)
	{
		return false;
	}
	if (func_225(bVar0, -8.816258E-39f))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_188(bVar0, -8.816258E-39f, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

int func_565(int* iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<14> Var3;

	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		iVar2 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0);
		Var3.f_9 = 1;
		Var3.f_11 = -5.45926E-19f;
		iVar1 = 0;
		while (iVar1 < iVar2)
		{
			if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ITEM_INFO(*iParam0, iVar1, &Var3))
			{
			}
			else if (bParam1 != Var3.f_13)
			{
			}
			else
			{
				iVar0 = (iVar0 + (func_337(Var3.f_8, bParam1, 1, 0, 1, 0) * Var3.f_9));
			}
			iVar1++;
		}
	}
	return iVar0;
}

bool func_566(bool bParam0, bool bParam1, bool bParam2, var uParam3, bool bParam4)
{
	struct<2> Var0[15];
	int iVar31;
	int iVar32;
	int iVar33;
	int iVar34;
	bool bVar35;

	if (!func_616(bParam0, bParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam4 && func_80(0)) && !func_81());
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (Var0[iVar34 /*2*/] == 0 || Var0[iVar34 /*2*/] == 3.078375E+12f)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34 /*2*/].f_1 * bParam1);
			if (Var0[iVar34 /*2*/] == 3.996812E+36f && func_335(iVar32))
			{
				Jump @217; //curOff = 139
			}
			else if (Var0[iVar34 /*2*/] == 3.414007E-11f && func_336(iVar32))
			{
			}
			else
			{
				iVar33 = func_138(Var0[iVar34 /*2*/], 0, !bVar35, 0);
				if (iVar33 >= iVar32)
				{
				}
				else
				{
					*uParam3 = { Var0[iVar34 /*2*/] };
					return false;
				}
			}
			iVar34++;
		}
	}
	return true;
}

bool func_567(int* iParam0, int iParam1, int iParam2, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;

	if (*iParam5 < iParam4)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iParam4)
	{
		if ((*uParam3)[iVar0 /*2*/] == 0 || (uParam3[iVar0 /*2*/])->f_1 == 0)
		{
			Jump @106; //curOff = 54
		}
		else if (!func_613((*uParam3)[iVar0 /*2*/], ((uParam3[iVar0 /*2*/])->f_1 * iParam1->f_9), iParam5[iVar0 /*42*/]))
		{
			return false;
		}
		iVar0++;
	}
	return func_617(iParam0, iParam1, iParam5, iParam2, bParam6, iParam7);
}

int func_568()
{
	return Global_1051645.f_12;
}

char* func_569()
{
	return "unnamed";
}

int func_570(int iParam0)
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

int func_571(int iParam0)
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

bool func_572(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_618(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_619(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

bool func_573(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_574(bool bParam0)
{
	if (bParam0)
	{
		return 1;
	}
	return 0;
}

int func_575(int iParam0)
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

int func_576(int iParam0)
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

int func_577(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (func_620(bParam1))
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
	return func_621(iParam0, bParam1);
}

int func_578(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4, int iParam5)
{
	struct<2> Var0;
	int iVar2;

	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		return 0;
	}
	if (func_622(*iParam0, bParam1, *iParam2, bParam3, iParam4))
	{
		Var0 = { func_316(bParam1) };
		if (STATS::STAT_ID_IS_VALID(&Var0))
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var0, *iParam2);
		}
		*iParam2 = func_579(*iParam0, bParam1, *iParam2, 1, iParam5);
		if (*iParam2 > 0)
		{
			if (func_623(bParam1))
			{
				if (!func_624(0, bParam1, *iParam2))
				{
				}
				if (func_625(PLAYER::PLAYER_ID(), 1, 0))
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, true);
				}
				else
				{
					ENTITY::_SET_ENTITY_CARRYING_FLAG(*iParam0, 32, false);
				}
				*iParam2 = func_626(*iParam0, bParam1, *iParam2);
			}
		}
		if (*iParam2 > 0)
		{
			iVar2 = func_627(*iParam0, bParam1);
			if (*iParam2 > iVar2)
			{
				*iParam2 = iVar2;
			}
		}
		func_394(1, 0, 0);
		return 1;
	}
	return 0;
}

int func_579(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
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
				bVar0 = func_628(iVar2);
				if (!func_629(bVar0, &uVar102))
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
										func_630(&Var6, &(Global_1903834.f_113[iVar5 /*96*/]));
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
										if (func_76(bVar0, -6.231785E+11f) || func_76(bVar0, 1.026869E-32f))
										{
											PED::_SET_PED_DAMAGE_CLEANLINESS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2), 2);
										}
										STATS::_STAT_CARRIED_SATCHEL_ITEM_FROM_PED(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2));
									}
									if (iParam0 == PLAYER::PLAYER_PED_ID())
									{
										func_181(bVar0, -1, 0, 1, 0, 0, 0);
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

void func_580(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;

	if (Global_1915643.f_20637)
	{
		if (Global_1915643.f_20241 == 29)
		{
			if (func_631(bParam0))
			{
				iVar1 = 0;
				if (bParam2)
				{
					switch (func_632(bParam0))
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
					STATS::_STAT_DONATE_INCREMENT_ITEM(func_633(bParam0), iVar1, func_76(bParam0, 0.9368603f), 0);
					iVar0++;
				}
			}
		}
	}
}

bool func_581(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<2> Var0;

	Var0 = { func_316(bParam0) };
	if (STATS::STAT_ID_IS_VALID(&Var0))
	{
		STATS::_STAT_ID_DECREMENT_INT(&Var0, iParam1);
	}
	func_634(bParam0, iParam1);
	return func_396(bParam0, iParam1, bParam2, iParam3);
}

int func_582(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_583(var uParam0, int iParam1, int iParam2, bool bParam3)
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
		else if (func_635(uParam0[iVar0 /*6*/]))
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
				*(uParam0[iVar0 /*6*/]) = { func_448() };
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

int func_584(bool bParam0)
{
	if (func_76(bParam0, 0.9368603f))
	{
		return 2;
	}
	else if (func_76(bParam0, -1.311326E-05f))
	{
		return 1;
	}
	else if (func_76(bParam0, 3.750005E+29f))
	{
		return 0;
	}
	return 1;
}

struct<12> func_585(int iParam0, int iParam1, var uParam2, bool bParam3)
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
		func_442(uParam2, 4.150592E+16f);
	}
	else
	{
		func_442(uParam2, 2.575707E+29f);
	}
	func_442(uParam2, iVar0);
	return *uParam2;
}

int func_586(int iParam0, var uParam1, int iParam2, int iParam3)
{
	var uVar0;

	if (0 == iParam0)
	{
		return 0;
	}
	return func_443(iParam0, uParam1, &uVar0, iParam2, iParam3);
}

struct<17> func_587(var uParam0, bool bParam1)
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
		Var0.f_15 = func_233(uParam0->f_4, -3.294982E+22f);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_448() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

int func_588(int iParam0)
{
	return PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::GET_PLAYER_INDEX());
}

int func_589(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_138(bParam1, bParam2, 0, 0);
	iVar0 = (iVar0 + func_621(iParam0, bParam1));
	if (bParam3)
	{
		iVar0 = (iVar0 + func_636(bParam1, bParam4));
	}
	return iVar0;
}

void func_590(int iParam0)
{
	if (!func_25(Global_1940239.f_11588, 0))
	{
		Global_1940239.f_7 = iParam0;
	}
	else if ((((func_65(Global_1940239.f_11588, 512441.5f) != 0 && Global_1940239.f_11587 != 0) && Global_1940239.f_11587 != -2.509875E-36f) && !Global_1915643.f_20638) && !Global_1915643.f_22504.f_1)
	{
		Global_1940239.f_7 = 1;
	}
	else
	{
		Global_1940239.f_7 = 0;
	}
}

struct<29> func_591(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &Var29, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_587(&Var29, bParam5) };
	Var0.f_17 = { Var29.f_16 };
	Var0.f_25 = Var29.f_25;
	Var0.f_26 = Var29.f_27;
	Var0.f_27 = Var29.f_28;
	Var0.f_28 = Var29.f_24;
	return Var0;
}

int func_592(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_458(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_460(func_637(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 29), iVar0, iParam1);
	}
	return -1;
}

struct<26> func_593(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &Var26, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_587(&Var26, bParam5) };
	Var0.f_17 = { Var26.f_15 };
	Var0.f_25 = Var26.f_23;
	return Var0;
}

int func_594(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_460(func_638(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 26), iVar0, iParam1);
	}
	return -1;
}

struct<18> func_595(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
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
	if (!INVENTORY::_INVENTORY_GET_FULL_INVENTORY_ITEM_DATA(func_172(bParam4), &uParam0, &Var18, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_587(&Var18, bParam5) };
	Var0.f_17 = Var18.f_14;
	return Var0;
}

int func_596(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_458(iParam0, iParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(&iVar0, 2.249603E-13f, iParam0))
		{
			return func_460(func_639(iVar0, iParam0, iParam1), iVar0, iParam1);
		}
	}
	else
	{
		return func_461(NETSHOPPING::_CASHINVENTORY_TRANSACTION_FIRE_AND_FORGET_ITEM(iParam0, &iVar0, iParam1, 18), iVar0, iParam1);
	}
	return -1;
}

int func_597(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_123(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_598(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_599(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_600(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_601(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_602(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_603(int iParam0, int iParam1)
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

void func_604(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_640(iParam0, iParam6);
	func_641(iParam0, iParam5);
	func_642(iParam0, iParam4);
	func_643(iParam0, iParam3);
	func_644(iParam0, iParam2);
	func_645(iParam0, iParam1);
}

bool func_605()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_606()
{
	return Global_1913431.f_127 == 0;
}

int func_607()
{
	return Global_1953279.f_1;
}

void func_608(int iParam0, int iParam1, int iParam2, int iParam3)
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
	func_646(&(Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/]));
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/] = iParam0;
	Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_1 = iParam1;
	if (iParam2 != 0 && iParam3 != 0)
	{
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_2 = iParam2;
		Global_1292096.f_20.f_1[(Global_1292096.f_20 - 1) /*21*/].f_3 = iParam3;
	}
}

int func_609(int iParam0)
{
	int iVar0;
	int iVar1;

	iVar0 = func_101(iParam0);
	if ((iVar0 == 0 || iVar0 == 1) || iVar0 == 5)
	{
		if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT_STATUS(iParam0, &iVar1))
		{
			if ((iVar1 == 4 || iVar1 == 2) || (iVar0 == 0 && iVar1 != 0))
			{
				func_552(iParam0, iVar1, 0, 0);
				iVar0 = iVar1;
			}
		}
		else if (iVar0 == 1 || iVar0 == 5)
		{
			func_552(iParam0, 4, 0, 0);
		}
	}
	return iVar0;
}

int func_610(int iParam0, bool bParam1, bool bParam2)
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

bool func_611(bool bParam0)
{
	return func_189(bParam0) == 4.029065E+31f;
}

bool func_612(bool bParam0)
{
	return func_189(bParam0) == -1.955052E+34f;
}

bool func_613(bool bParam0, int iParam1, var uParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	struct<6> Var7[10];
	int iVar68;
	int iVar69;

	*uParam2 = bParam0;
	if (func_3(0))
	{
		iVar5 = func_236(func_647(), bParam0);
		if (iVar5 != 0)
		{
			Var0 = { func_321(1) };
			Var0.f_4 = func_320(iVar5);
			uParam2->f_1[0 /*4*/] = { func_322(bParam0, Var0, Var0.f_4, 1) };
			if (INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
			{
				return true;
			}
		}
	}
	iVar6 = func_233(bParam0, -3.294982E+22f);
	if (iVar6 != 0)
	{
		if (!func_516(&Var7, &iVar68, bParam0, iVar6, iParam1, 1) || iVar68 < 1)
		{
			return false;
		}
		iVar69 = 0;
		while (iVar69 < iVar68)
		{
			uParam2->f_1[iVar69 /*4*/] = { func_322(bParam0, Var7[iVar69 /*6*/], Var7[iVar69 /*6*/].f_4, 1) };
			if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[iVar69 /*4*/])))
			{
				return false;
			}
			iVar69++;
		}
		return true;
	}
	Var0 = { func_184(bParam0, 1, 0) };
	uParam2->f_1[0 /*4*/] = { func_322(bParam0, Var0, Var0.f_4, 1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&(uParam2->f_1[0 /*4*/])))
	{
		return false;
	}
	return true;
}

bool func_614(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam3 != 1.704487E-19f && iParam3 != -1.82867E-29f)
	{
		return false;
	}
	if (!func_648(*iParam1))
	{
		return false;
	}
	if (!func_649(iParam0, iParam3))
	{
		return false;
	}
	if (NETSHOPPING::_0xA3B8D31C13CB4239(*iParam0, 1.704487E-19f, iParam1, 18, iParam2, *iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_650(iParam0, bParam4);
}

bool func_615(bool bParam0, bool bParam1)
{
	if (!func_563(bParam0, bParam1))
	{
		return false;
	}
	if (bParam0 == 5.725531E+31f)
	{
		return func_224(1.90694E+21f, 1);
	}
	else if (bParam0 == 3.260984E-38f)
	{
		return func_224(0.0002301198f, 1);
	}
	else if (bParam0 == 1.541746E-27f)
	{
		return func_224(-1.766809E-31f, 1);
	}
	else if (bParam0 == -1.84846E-25f)
	{
		return func_224(-3.589852E-30f, 1);
	}
	else if (bParam0 == 1.806564E-25f)
	{
		return func_224(-6.181976E+29f, 1);
	}
	else if (bParam0 == -6.888817E-09f)
	{
		return func_224(-7.708751E+16f, 1);
	}
	return func_224(bParam0, 1);
}

bool func_616(bool bParam0, bool bParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	int iVar0;

	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_250(bParam0, 2))
	{
		return false;
	}
	*iParam3 = ITEMDATABASE::_0x388088BFF3681189(bParam0, bParam1);
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
		if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_BUNDLE(bParam0, bParam1, iVar0, uParam2[iVar0 /*2*/]))
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
		func_651(bParam0, bParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_617(int* iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, int iParam5)
{
	if ((iParam3 != 4.059549E+37f && iParam3 != -3.415538E-09f) && iParam3 != 7.184882E+22f)
	{
		return false;
	}
	if (!func_652(iParam3, iParam1, iParam5))
	{
		return false;
	}
	if (!func_649(iParam0, iParam3))
	{
		return false;
	}
	if (func_653(*iParam0, iParam3, iParam1, iParam2))
	{
	}
	else
	{
		return false;
	}
	return func_650(iParam0, bParam4);
}

bool func_618(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

void func_619(int iParam0)
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
		func_654(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_655(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

bool func_620(bool bParam0)
{
	if (!func_282(bParam0, 9.300934E+31f))
	{
		return false;
	}
	if (!func_656(bParam0, 1))
	{
		return false;
	}
	return true;
}

int func_621(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_620(bParam1))
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
			return func_657(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1);
		}
	}
	return 0;
}

int func_622(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_658(INVENTORY::_INVENTORY_GET_INVENTORY_ID_FROM_PED(iParam0), bParam1, iParam2, bParam3, iParam4);
}

bool func_623(bool bParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!func_659(bParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 77)
	{
		iVar1 = func_660(iVar0, 1);
		iVar2 = iVar1;
		if (bParam0 == iVar2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_624(int iParam0, bool bParam1, int iParam2)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iParam0 = func_251(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	bVar0 = func_661(bParam1);
	if (bVar0 != 0)
	{
		iVar1 = func_662(bVar0, 1);
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
				if (!func_663(iVar3, 0))
				{
				}
				Global_1903834.f_402[iVar1] = (Global_1903834.f_402[iVar1] - iVar3);
				return true;
			}
		}
	}
	return false;
}

bool func_625(int iParam0, int iParam1, bool bParam2)
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
	return func_664(iVar0, bParam2) >= func_665(bParam2);
}

int func_626(int iParam0, bool bParam1, int iParam2)
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

int func_627(int iParam0, bool bParam1)
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
		if ((ENTITY::DOES_ENTITY_EXIST(iVar4) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4)) && bParam1 == func_628(iVar4))
		{
			iVar0++;
		}
		iVar3++;
	}
	ITEMSET::DESTROY_ITEMSET(iVar1);
	return iVar0;
}

bool func_628(int iParam0)
{
	bool bVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (ENTITY::GET_IS_ANIMAL(iParam0) || ENTITY::_GET_IS_BIRD(iParam0))
	{
		bVar0 = func_386(&iParam0);
		if (!func_25(bVar0, 0))
		{
			bVar0 = func_387(iParam0);
		}
	}
	else
	{
		bVar0 = func_387(iParam0);
	}
	return bVar0;
}

bool func_629(bool bParam0, bool bParam1)
{
	*bParam1 = func_666(bParam0);
	return *bParam1 != 0;
}

void func_630(bool bParam0, bool bParam1)
{
	MISC::COPY_SCRIPT_STRUCT(bParam1, bParam0, 96);
}

bool func_631(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
	}
	if (func_76(bParam0, 9.077182E+07f))
	{
		return true;
	}
	return false;
}

int func_632(bool bParam0)
{
	int iVar0;
	bool bVar1;

	if (func_629(bParam0, &bVar1))
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

float func_633(bool bParam0)
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

void func_634(bool bParam0, int iParam1)
{
	int iVar0;

	if (func_27() == -1)
	{
		iVar0 = func_173(7);
	}
	else
	{
		iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	}
	func_626(iVar0, bParam0, iParam1);
}

bool func_635(var uParam0)
{
	if (!func_667(uParam0))
	{
		return false;
	}
	return INVENTORY::_INVENTORY_IS_ITEM_EXPIRED(uParam0);
}

int func_636(bool bParam0, bool bParam1)
{
	if (!bParam1 || func_668())
	{
		return func_332(bParam0, func_321(1), -3.233114E-34f, 1, 1, 0);
	}
	return 0;
}

bool func_637(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 29, iParam2, 0);
}

bool func_638(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 26, iParam2, 0);
}

bool func_639(int iParam0, int iParam1, int iParam2)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 18, iParam2, 0);
}

void func_640(int iParam0, int iParam1)
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

void func_641(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_642(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_598(*iParam0);
	iVar1 = func_597(*iParam0);
	if (iParam1 < 1 || iParam1 > func_603(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_643(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_644(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_645(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_646(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	func_669(&(uParam0->f_4));
}

int func_647()
{
	return Global_1915643.f_20241;
}

bool func_648(struct<18> Param0)
{
	if (!func_453(Param0.f_17))
	{
		return false;
	}
	return true;
}

bool func_649(int* iParam0, int iParam1)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		if (!func_670(iParam0, iParam1))
		{
			return false;
		}
	}
	iVar0 = NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_ACTION(*iParam0);
	if (iVar0 != iParam1 || NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) >= 50)
	{
		if (!func_671(iParam0))
		{
			return false;
		}
		if (!func_670(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_650(int* iParam0, bool bParam1)
{
	iParam0->f_2++;
	if (bParam1)
	{
		return func_671(iParam0);
	}
	return true;
}

void func_651(bool bParam0, bool bParam1, var uParam2, int iParam3)
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
	if (!ITEMDATABASE::_0xA97EE5E4589FCF5A(bParam0, &Var7) || Var7 == 0)
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
			if ((uParam2[iVar0 /*2*/])->f_1 == 0 && func_189((*uParam2)[iVar0 /*2*/]) != -1.223348E+09f)
			{
				(uParam2[iVar0 /*2*/])->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_652(int iParam0, int iParam1, int iParam2)
{
	if (iParam1->f_9 < 1)
	{
		return false;
	}
	if (!func_25(iParam1->f_8, 0) && !func_250(func_168(iParam1->f_8), 2))
	{
		return false;
	}
	if (func_113(iParam2, 128))
	{
		if (!func_250(func_168(iParam1->f_8), 2))
		{
			if (func_189(iParam1->f_8) == 0)
			{
				return false;
			}
		}
	}
	if (func_113(iParam2, 16))
	{
		if (!func_458(iParam0, iParam1))
		{
			return false;
		}
	}
	return true;
}

bool func_653(int iParam0, int iParam1, int iParam2, int iParam3)
{
	return NETSHOPPING::_0xA3B8D31C13CB4239(iParam0, iParam1, iParam2, 17, iParam3, *iParam3);
}

void func_654(int iParam0)
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
	func_655(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_655(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_656(bool bParam0, int iParam1)
{
	int iVar0;

	iVar0 = func_672(bParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return iVar0 > iParam1;
}

int func_657(int iParam0, bool bParam1)
{
	struct<4> Var0;
	int iVar4;

	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	Var0 = { func_673(iParam0, bParam1) };
	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(&Var0))
	{
		return 0;
	}
	iVar4 = INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_COUNT_WITH_GUID(iParam0, &Var0, false);
	return iVar4;
}

int func_658(int iParam0, bool bParam1, int iParam2, bool bParam3, int iParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	struct<2> Var3;

	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	bVar0 = iParam4 == 9.275179E-19f;
	bVar1 = iParam4 == 1.994827E+33f;
	bVar2 = iParam4 == -1.202057E-11f;
	if (!func_674(iParam0, bParam1, 1))
	{
		return 0;
	}
	Var3 = { func_316(bParam1) };
	if (STATS::STAT_ID_IS_VALID(&Var3))
	{
		if ((func_657(iParam0, bParam1) - iParam2) >= 0)
		{
			STATS::_STAT_ID_DECREMENT_INT(&Var3, iParam2);
		}
		else if ((func_657(iParam0, bParam1) - iParam2) < 0)
		{
			func_658(iParam0, bParam1, func_138(bParam1, 0, 0, 0), bParam3, iParam4);
			return 0;
		}
	}
	if (!func_675(iParam0, bParam1, iParam2, iParam4, bParam3))
	{
		return 0;
	}
	if (!bParam3 && bParam1 != 6.236711E+08f)
	{
		func_181(bParam1, -iParam2, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

bool func_659(bool bParam0)
{
	if (!func_25(bParam0, 0))
	{
		return false;
	}
	return (func_76(bParam0, 2.062334E+22f) || INVENTORY::_INVENTORY_GET_INVENTORY_ITEM_IS_ANIMAL_PELT(bParam0));
}

int func_660(int iParam0, int iParam1)
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

bool func_661(bool bParam0)
{
	if (!func_623(bParam0))
	{
		return false;
	}
	return bParam0;
}

int func_662(bool bParam0, int iParam1)
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

bool func_663(int iParam0, bool bParam1)
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
	if (func_664(iVar1, bParam1) == 0)
	{
		return false;
	}
	iVar2 = iParam0;
	if (iVar2 > func_664(iVar1, bParam1))
	{
		iVar2 = func_664(iVar1, bParam1);
	}
	if (!bParam1)
	{
		Global_1289628[iVar1 /*19*/] = (Global_1289628[iVar1 /*19*/] - iVar2);
	}
	else
	{
		Global_1289628[iVar1 /*19*/].f_1 = (Global_1289628[iVar1 /*19*/].f_1 - iVar2);
	}
	if (func_664(iVar1, bParam1) < 0)
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
	else if (func_664(iVar1, bParam1) > func_665(bParam1))
	{
		if (!bParam1)
		{
			Global_1289628[iVar1 /*19*/] = func_665(bParam1);
		}
		else
		{
			Global_1289628[iVar1 /*19*/].f_1 = func_665(bParam1);
		}
	}
	return true;
}

int func_664(int iParam0, bool bParam1)
{
	return func_123(bParam1, Global_1289628[iParam0 /*19*/].f_1, Global_1289628[iParam0 /*19*/]);
}

int func_665(bool bParam0)
{
	return func_123(bParam0, Global_1901671.f_698.f_30, Global_1901671.f_698.f_29);
}

int func_666(bool bParam0)
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

bool func_667(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

bool func_668()
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
	if (!func_676(iVar0))
	{
		return false;
	}
	return true;
}

void func_669(var uParam0)
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

bool func_670(int* iParam0, int iParam1)
{
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_START(iParam0, 2.249603E-13f, iParam1))
	{
		return false;
	}
	return true;
}

bool func_671(int* iParam0)
{
	int iVar0;

	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_BASKET_IS_VALID(*iParam0))
	{
		func_552(*iParam0, 0, 0, 0);
		return true;
	}
	if (NETSHOPPING::_CASHINVENTORY_TRANSACTION_GET_NUM_OF_ITEMS(*iParam0) == 0)
	{
		NETSHOPPING::_CASHINVENTORY_TRANSACTION_DELETE(*iParam0);
		func_552(*iParam0, 4, 0, 0);
		return true;
	}
	if (!NETSHOPPING::_CASHINVENTORY_TRANSACTION_CHECKOUT(*iParam0))
	{
		func_552(*iParam0, 2, 0, 0);
		return false;
	}
	func_552(*iParam0, 1, 0, 0);
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

int func_672(bool bParam0)
{
	var uVar0;

	if (!ITEMDATABASE::_ITEMDATABASE_FILLOUT_SATCHEL_DATA(bParam0, &uVar0))
	{
		return -1;
	}
	return uVar0;
}

struct<4> func_673(int iParam0, bool bParam1)
{
	struct<5> Var0;

	Var0 = { func_677(iParam0) };
	return func_678(iParam0, bParam1, Var0, Var0.f_4);
}

bool func_674(int iParam0, bool bParam1, int iParam2)
{
	if (!func_25(bParam1, 0))
	{
		return false;
	}
	return func_657(iParam0, bParam1) >= iParam2;
}

int func_675(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;

	if (!func_25(bParam1, 0))
	{
		return 0;
	}
	if (iParam2 < 1)
	{
		return 0;
	}
	Var0 = { func_677(iParam0) };
	Var5 = { func_678(iParam0, bParam1, Var0, Var0.f_4) };
	return func_679(iParam0, bParam1, &Var5, iParam2, iParam3, bParam4);
}

bool func_676(int iParam0)
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

struct<5> func_677(int iParam0)
{
	struct<5> Var0;

	Var0 = { func_678(iParam0, 2.982335E+09f, func_448(), -5.45926E-19f) };
	Var0.f_4 = 4.978612f;
	return Var0;
}

struct<4> func_678(int iParam0, bool bParam1, var uParam2, float fParam3, var uParam4, var uParam5, int iParam6)
{
	struct<4> Var0;

	if (!func_25(bParam1, 0))
	{
		return Var0;
	}
	INVENTORY::INVENTORY_GET_GUID_FROM_ITEMID(iParam0, &uParam2, bParam1, iParam6, &Var0);
	return Var0;
}

int func_679(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	struct<12> Var0;

	if (!INVENTORY::_INVENTORY_IS_GUID_VALID(iParam2))
	{
		return 0;
	}
	if (func_515(bParam1))
	{
		return 0;
	}
	Var0.f_9 = -5.45926E-19f;
	if (!func_680(iParam0, *iParam2, &Var0, 0))
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

bool func_680(int iParam0, var uParam1, var uParam2, int iParam3, var uParam4, int iParam5, bool bParam6)
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

