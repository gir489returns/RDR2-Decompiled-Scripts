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
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	float fLocal_17 = 0f;
	float fLocal_18 = 0f;
	struct<98> Local_19 = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0 } ;
	struct<5> ScriptParam_0 = { 0, 0, 0, 0, 0 } ;
#endregion

void __EntryFunction__()
{
	fLocal_17 = 1f;
	fLocal_18 = 1f;
	func_1(ScriptParam_0);
	while (!func_2(0, 0) && !func_3())
	{
		func_4();
		BUILTIN::WAIT(0);
	}
	func_5();
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_1(vector3 vParam0, var uParam3, var uParam4)
{
	MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	Local_19.f_1 = vParam0.z;
	func_6(64);
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

bool func_3()
{
	int iVar0;

	if (Local_19 == 34)
	{
		return true;
	}
	if (!MISC::IS_BIT_SET(Global_1297182.f_201, 0))
	{
		return true;
	}
	iVar0 = func_7(Global_1297182.f_200, 1);
	if (((Local_19.f_1 != iVar0 && iVar0 != -1) && Local_19 < 25) && !func_8())
	{
		return true;
	}
	if (((!func_9(Local_19.f_13[3 /*3*/]) && Local_19 == 25) && BUILTIN::VDIST(Local_19.f_13[3 /*3*/], ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false)) > Global_1901671.f_812.f_10) && !func_10(6, 255))
	{
		return true;
	}
	return false;
}

void func_4()
{
	func_11();
	func_12();
	func_13(8.303282E-20f);
	if (func_14(64))
	{
		if (Local_19 < 33)
		{
			func_15(33);
		}
	}
	else if (func_14(128))
	{
		if (Local_19 > 3)
		{
			if (Global_1297182.f_1 == 4)
			{
				if (Local_19 < 21)
				{
					func_15(21);
				}
				else if (func_16(Local_19.f_1) < 1117782016)
				{
					func_6(128);
				}
			}
			else if (Local_19 < 25)
			{
				func_15(25);
			}
			else if (func_16(Local_19.f_1) < 1117782016)
			{
				func_6(128);
			}
		}
	}
	func_17(&(Local_19.f_87));
	switch (Local_19)
	{
		case 0:
			func_18();
			func_15(1);
			break;
		case 1:
			if (func_19())
			{
				func_15(2);
			}
			break;
		case 2:
			if (func_20())
			{
				func_15(3);
			}
			break;
		case 3:
			if (func_14(128))
			{
				if (Global_1297182.f_1 == 4)
				{
					func_15(21);
				}
				else
				{
					func_15(25);
				}
				return;
			}
			if (Global_1297182.f_1 == 4)
			{
				func_15(21);
				return;
			}
			if (!func_21(PLAYER::PLAYER_ID(), 16) && (Global_1297182.f_1 == 3 || Global_1297182.f_1 == 2))
			{
				if (func_22())
				{
					if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
					{
						func_24(8192, 0);
					}
					return;
				}
				func_15(10);
			}
			else
			{
				func_15(8);
			}
			break;
		case 8:
			if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_NETWORK_IS_IN_MY_GANG(Local_19.f_85))
			{
				func_15(33);
			}
			func_25(0);
			if (Global_1297182.f_1 == 2 && !func_22())
			{
				func_15(10);
				return;
			}
			if (func_26(0))
			{
				if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
				{
					func_24(8192, 0);
				}
				func_27(0);
				return;
			}
			else
			{
				func_27(1);
			}
			func_28();
			func_29();
			if (func_30())
			{
				func_31();
				func_27(0);
				func_32(Local_19.f_1);
				func_33(16384);
				func_15(5);
			}
			break;
		case 5:
			func_31();
			if (!func_21(PLAYER::PLAYER_ID(), 128))
			{
			}
			else
			{
				if (func_34())
				{
					func_15(4);
				}
				Jump @2130; //curOff = 762
				func_31();
				if (func_35())
				{
					func_36();
					NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
					func_37(1, 1);
					func_15(6);
				}
				Jump @2130; //curOff = 797
				func_31();
				if (func_38())
				{
					func_15(7);
				}
				Jump @2130; //curOff = 816
				func_31();
				if (func_39())
				{
					func_40();
					func_41();
					func_15(9);
				}
				Jump @2130; //curOff = 844
				func_31();
				func_42();
				if (func_43())
				{
					func_44();
					func_15(30);
					return;
				}
				if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
				{
					func_45(0);
					func_44();
					func_27(1);
					func_46();
					NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
					func_37(1, 0);
					func_47();
					func_15(25);
				}
				Jump @2130; //curOff = 951
				if (func_48())
				{
					func_27(0);
					func_33(16384);
					if (Global_1297182.f_1 == 2)
					{
						func_15(11);
					}
					else
					{
						func_15(12);
					}
				}
				Jump @2130; //curOff = 998
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				if (func_51())
				{
					func_52();
					func_15(13);
				}
				Jump @2130; //curOff = 1040
				if (!func_49())
				{
					func_50(1);
					func_15(33);
					return;
				}
				func_53();
				func_15(13);
				Jump @2130; //curOff = 1075
				func_31();
				if (!func_49())
				{
					func_15(33);
					func_50(1);
					return;
				}
				if (func_39())
				{
					if (func_54())
					{
						func_36();
						func_32(Local_19.f_1);
						func_15(15);
					}
					else
					{
						func_32(Local_19.f_1);
						func_15(19);
					}
				}
				Jump @2130; //curOff = 1153
				func_31();
				if (!func_21(PLAYER::PLAYER_ID(), 128) && !func_55())
				{
				}
				else
				{
					if (func_34())
					{
						func_15(14);
					}
					Jump @2130; //curOff = 1200
					func_31();
					if (func_35())
					{
						NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
						func_37(1, 1);
						func_15(16);
					}
					Jump @2130; //curOff = 1232
					func_31();
					if (func_38())
					{
						func_15(17);
					}
					Jump @2130; //curOff = 1252
					func_31();
					func_40();
					func_41();
					func_15(18);
					Jump @2130; //curOff = 1273
					func_31();
					func_42();
					if (func_43())
					{
						func_44();
						func_15(30);
						return;
					}
					if ((ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_19.f_6, false)) && Local_19.f_4 == 5)
					{
						func_45(0);
						func_44();
						func_27(1);
						func_46();
						NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
						func_37(1, 0);
						func_47();
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1384
					if (!func_49())
					{
						func_15(33);
						func_50(1);
						func_45(0);
						return;
					}
					if (func_57(0))
					{
						func_27(1);
						func_58(0);
						func_47();
						func_15(20);
					}
					Jump @2130; //curOff = 1442
					if (func_59())
					{
						func_37(1, 0);
						func_45(0);
						func_56();
						func_15(25);
					}
					Jump @2130; //curOff = 1474
					if (func_48())
					{
						func_33(16384);
						Local_19.f_2 = 2;
						func_15(23);
					}
					Jump @2130; //curOff = 1502
					if (func_57(1))
					{
						func_37(1, 0);
						func_32(Local_19.f_1);
						func_47();
						func_15(22);
					}
					Jump @2130; //curOff = 1538
					if (func_60())
					{
						func_15(24);
					}
					Jump @2130; //curOff = 1554
					if (func_21(PLAYER::PLAYER_ID(), 64) && func_61())
					{
						func_62(32768);
						func_15(25);
					}
					Jump @2130; //curOff = 1593
					func_25(0);
					if (func_43())
					{
						func_15(30);
						return;
					}
					if (func_26(1))
					{
						func_27(0);
						return;
					}
					else
					{
						func_27(1);
					}
					if (func_30())
					{
						func_63(2048);
						func_27(0);
						func_15(26);
					}
					Jump @2130; //curOff = 1666
					if (func_34())
					{
						func_15(27);
					}
					Jump @2130; //curOff = 1682
					if (func_35())
					{
						func_15(28);
					}
					Jump @2130; //curOff = 1698
					func_40();
					func_64(2);
					NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(false);
					func_37(1, 1);
					func_15(29);
					Jump @2130; //curOff = 1728
					func_65();
					if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6) && ANIMSCENE::IS_ANIM_SCENE_FINISHED(Local_19.f_6, false))
					{
						func_44();
						func_46();
						func_66();
						NETWORK::_SET_NETWORK_RESPOT_TIMER(PLAYER::PLAYER_PED_ID(), 1000, true);
						func_33(32768);
						func_15(32);
					}
					Jump @2130; //curOff = 1798
					if (func_67())
					{
						func_33(32768);
						func_58(1);
						func_68(1);
						func_66();
						func_15(31);
					}
					Jump @2130; //curOff = 1836
					if (func_69())
					{
						func_15(32);
					}
					Jump @2130; //curOff = 1852
					NETWORK::NETWORK_ALLOW_ALL_ENTITY_FADING_FOR_INSTANCES(true);
					func_37(0, 0);
					func_70(0);
					func_45(0);
					if (Global_1297182.f_1 == 4)
					{
						func_50(1);
						func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
						func_64(32);
						func_64(64);
					}
					else if (Global_1297182.f_1 == 2)
					{
						func_50(1);
					}
					else if (Global_1297182.f_1 == 3)
					{
						func_50(1);
						func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
						func_62(128);
					}
					func_15(33);
					Jump @2130; //curOff = 1984
					func_72();
					func_73();
					if (func_14(64))
					{
						if (Global_1297182.f_1 == 4)
						{
							func_50(1);
							func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
						}
						func_6(64);
					}
					func_64(2048);
					if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(Local_19.f_85) || !GANG::_NETWORK_IS_IN_MY_GANG(Local_19.f_85))
					{
						func_15(34);
					}
					else if (func_74(128))
					{
						func_15(34);
					}
					else if (Local_19.f_3 != 0)
					{
						func_15(34);
					}
					else
					{
						func_15(0);
					}
				}
			}
			default:
				break;
	}
}

void func_5()
{
	int iVar0;

	func_72();
	func_25(1);
	func_58(1);
	func_68(1);
	if (Global_1297182.f_1 == 4)
	{
		if (func_74(32768))
		{
			func_50(1);
			func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		}
	}
	else if (Global_1297182.f_1 == 3)
	{
		if (!func_14(8))
		{
			func_50(1);
			func_71(GANG::NETWORK_GET_GANG_LEADER(GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID())));
		}
		else
		{
			func_6(8);
		}
	}
	func_70(0);
	func_64(2);
	func_64(32);
	func_64(8);
	func_64(64);
	func_64(2048);
	func_33(32768);
	func_45(0);
	if (func_14(128))
	{
		func_6(128);
	}
	if (func_74(1024))
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_STOP();
		}
		func_75(1024);
	}
	if ((Local_19.f_4 == 1 || Local_19.f_4 == 2) || Local_19.f_4 == 4)
	{
		if (!CAM::IS_SCREEN_FADED_IN() && !CAM::IS_SCREEN_FADING_IN())
		{
			CAM::DO_SCREEN_FADE_IN(250);
		}
	}
	func_76(&(Local_19.f_87));
	HUD::_TEXT_BLOCK_DELETE("MSMP");
	func_37(0, 0);
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_19.f_94[iVar0]))
		{
			VOLUME::DELETE_VOLUME(Local_19.f_94[iVar0]);
		}
		iVar0++;
	}
	if (func_77(2, 8))
	{
		func_78(2, 8, 0);
	}
}

void func_6(int iParam0)
{
	func_79(&(Global_1297394.f_157), iParam0);
}

int func_7(int iParam0, bool bParam1)
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

bool func_8()
{
	if ((Local_19 == 9 || Local_19 == 18) || Local_19 == 20)
	{
		return true;
	}
	return false;
}

bool func_9(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

bool func_10(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_80(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_81())
	{
		return func_80(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_80(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

void func_11()
{
	if (func_82(888))
	{
		return;
	}
	if (func_21(PLAYER::PLAYER_ID(), 1))
	{
		return;
	}
	if (Local_19 != 8)
	{
		return;
	}
	if ((Local_19.f_85 != PLAYER::PLAYER_ID() || CAM::IS_SCREEN_FADED_OUT()) || CAM::IS_SCREEN_FADING_OUT())
	{
		return;
	}
	if (!MAP::DOES_BLIP_EXIST(Global_1297394.f_128))
	{
		return;
	}
	if (func_16(Local_19.f_1) < (1117782016 * 1056964608))
	{
		func_83(888, 0);
	}
}

void func_12()
{
	switch (Local_19.f_97)
	{
		case 0:
			if (func_77(2, 8))
			{
				func_84(1);
			}
			else if (func_85())
			{
			}
			else if (Global_1048584)
			{
			}
			else if (func_87(func_86()))
			{
			}
			else if (!func_88(8.303282E-20f))
			{
			}
			else
			{
				func_89(2, 8);
				func_84(1);
				Jump @246; //curOff = 113
				if (!func_77(2, 8))
				{
					func_84(0);
				}
				else if (!func_88(2.603607E+21f))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_87(func_86()))
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (Global_1048584)
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else if (func_85())
				{
					func_78(2, 8, 0);
					func_84(0);
				}
				else
				{
					Jump @246; //curOff = 237
				}
			}
			default:
				break;
	}
}

void func_13(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	vector3 vVar5;
	bool bVar8;
	int iVar9;
	vector3 vVar10;

	iVar0 = Local_19.f_94[func_90(iParam0)];
	if (!VOLUME::DOES_VOLUME_EXIST(iVar0))
	{
		return;
	}
	if (func_91(&(Local_19.f_91)))
	{
		if (!func_92(&(Local_19.f_91), 2f))
		{
			return;
		}
	}
	vVar2 = { VOLUME::GET_VOLUME_COORDS(iVar0) };
	vVar5 = { VOLUME::GET_VOLUME_SCALE(iVar0) };
	fVar1 = func_93(vVar5.x, vVar5.y);
	fVar1 = func_93(fVar1, vVar5.z);
	bVar8 = false;
	if (FIRE::_IS_EXPLOSION_IN_VOLUME(-1, iVar0))
	{
		bVar8 = true;
	}
	if (!bVar8)
	{
		iVar9 = FIRE::GET_NUMBER_OF_FIRES_IN_RANGE(vVar2, fVar1);
		if (iVar9 > 0)
		{
			if (FIRE::GET_CLOSEST_FIRE_POS(&vVar10, vVar2))
			{
				if (VOLUME::IS_POINT_IN_VOLUME(iVar0, vVar10))
				{
					bVar8 = true;
				}
			}
		}
	}
	if (bVar8)
	{
		MISC::_CLEAR_VOLUME_AREA(iVar0, 589824);
		func_94(&(Local_19.f_91));
	}
}

bool func_14(int iParam0)
{
	return func_95(Global_1297394.f_157, iParam0);
}

void func_15(int iParam0)
{
	Local_19 = iParam0;
}

float func_16(int iParam0)
{
	return Global_1297394.f_6.f_17[iParam0];
}

void func_17(int* iParam0)
{
	switch (iParam0->f_3)
	{
		case 0:
			if (Local_19 <= 9)
			{
				if (func_97(func_96(), 1))
				{
					if (func_98())
					{
						iParam0->f_2 = -1.644664E+16f;
					}
				}
				if (iParam0->f_2 != 0)
				{
					STREAMING::REQUEST_MODEL(iParam0->f_2, false);
					iParam0->f_3 = 1;
				}
			}
			break;
		case 1:
			if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iParam0->f_1))
				{
					*iParam0 = OBJECT::CREATE_OBJECT(iParam0->f_2, ENTITY::GET_ENTITY_COORDS(iParam0->f_1, true, false) + Vector(1092616192, 0f, 0f), false, true, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
					{
						ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, true);
						ENTITY::SET_ENTITY_COLLISION(*iParam0, false, false);
						ENTITY::ATTACH_ENTITY_TO_ENTITY(*iParam0, iParam0->f_1, 0, 0.55f, 0f, 2f, 0f, 0f, 0f, false, false, false, false, 2, true, false, false);
						iParam0->f_3 = 2;
					}
				}
				else if (func_99(Local_19.f_1))
				{
					iParam0->f_1 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
				}
			}
			break;
		case 2:
			if ((Local_19 > 9 || !ENTITY::DOES_ENTITY_EXIST(iParam0->f_1)) || !ENTITY::DOES_ENTITY_EXIST(*iParam0))
			{
				func_76(iParam0);
				iParam0->f_3 = 0;
			}
			break;
	}
}

void func_18()
{
	func_102();
	Local_19.f_85 = func_96();
	Local_19.f_86 = GANG::NETWORK_GET_GANG_ID(Local_19.f_85);
	if (GANG::NETWORK_GET_GANG_LEADER(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_62(131072);
	}
	else if (Local_19.f_86 != Global_1295619.f_10)
	{
		func_62(262144);
	}
	func_103();
	func_64(2048);
}

bool func_19()
{
	int iVar0;
	char* sVar1;

	iVar0 = 1;
	sVar1 = "MSMP";
	HUD::TEXT_BLOCK_REQUEST(sVar1);
	if (!HUD::TEXT_BLOCK_IS_LOADED(sVar1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_20()
{
	vector3 vVar0[4];
	vector3 vVar13[4];
	bool bVar26;
	int iVar27;

	if (!func_104(Local_19.f_1, &vVar0, &vVar13))
	{
		return false;
	}
	bVar26 = (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()) && GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10) > 1);
	iVar27 = 0;
	while (iVar27 < 4)
	{
		if (!VOLUME::DOES_VOLUME_EXIST(Local_19.f_35[iVar27 /*4*/].f_2))
		{
			Local_19.f_35[iVar27 /*4*/].f_2 = VOLUME::CREATE_VOLUME_CYLINDER(vVar0[iVar27 /*3*/], 0f, 0f, 0f, vVar13[iVar27 /*3*/]);
		}
		if (!func_105(Local_19.f_35[iVar27 /*4*/]))
		{
			Local_19.f_35[iVar27 /*4*/] = func_107(func_106(iVar27, 0), -1.068381E+13f, Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
		}
		if ((iVar27 == 0 || iVar27 == 1) && !func_105(Local_19.f_35[iVar27 /*4*/].f_1))
		{
			Local_19.f_35[iVar27 /*4*/].f_1 = func_107(func_106(iVar27, 1), 0.00251415f, Local_19.f_35[iVar27 /*4*/].f_2, 3, 0, 0, 5, 570, 4000, 10, 2f, 0, 8.750548E+22f, 0);
			if (!bVar26)
			{
				func_108(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0);
				func_109(Local_19.f_35[iVar27 /*4*/].f_1, 0, 0, 1);
			}
		}
		if (iVar27 == 0)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = -3.82087E-37f;
		}
		else if (iVar27 == 1)
		{
			Local_19.f_35[iVar27 /*4*/].f_3 = 4.099206E-28f;
		}
		iVar27++;
	}
	func_62(256);
	return true;
}

bool func_21(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_95(Global_1297553[iVar0 /*87*/].f_86, iParam1);
	}
	return false;
}

bool func_22()
{
	int iVar0;

	if (Global_1297394.f_156 == 0)
	{
		Global_1297394.f_156 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Global_1297394.f_156) > 1000)
	{
		Global_1297394.f_156 = MISC::GET_SYSTEM_TIME();
	}
	else
	{
		return func_95(Global_1297394.f_157, 256);
	}
	if (func_110())
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_23(PLAYER::PLAYER_ID(), 1, 0, 1))
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (!Global_1297015.f_44)
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_87(func_112(0)))
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_113(0))
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	iVar0 = func_114(1.038497E+13f, PLAYER::PLAYER_ID(), 0, 1);
	if (func_115(iVar0))
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	if (func_116())
	{
		func_111(&(Global_1297394.f_157), 256);
		return true;
	}
	func_79(&(Global_1297394.f_157), 256);
	return false;
}

bool func_23(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;

	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_117(bParam1, bParam2, bParam3);
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

void func_24(int iParam0, int iParam1)
{
	int iVar0;

	if (iParam1 == -1)
	{
		return;
	}
	if (func_74(iParam0))
	{
		return;
	}
	if (func_118() || func_119())
	{
		return;
	}
	switch (iParam1)
	{
		case 0:
			iVar0 = 0;
			while (iVar0 < 4)
			{
				if (!VOLUME::DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
				{
				}
				else if (!func_105(Local_19.f_35[iVar0 /*4*/]))
				{
				}
				else if (!func_120(Global_33, Local_19.f_35[iVar0 /*4*/].f_2, 1, 0))
				{
				}
				else if (func_121(MISC::VAR_STRING(2, "MS_WARN_WANTED_NO_ENTRY"), 10000, 0, 0, 0, 1) != 0)
				{
					func_62(iParam0);
				}
				iVar0++;
			}
			break;
	}
}

void func_25(bool bParam0)
{
	bool bVar0;
	int iVar1;

	if (bParam0)
	{
		if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}
	else
	{
		iVar1 = 0;
		while (iVar1 < 4)
		{
			if (func_105(Local_19.f_35[iVar1 /*4*/]) && func_122(Local_19.f_35[iVar1 /*4*/], 1))
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
			if (!func_74(64))
			{
				SCRIPTS::_0x76CBCD9EADC00955();
				func_62(64);
			}
		}
		else if (func_74(64))
		{
			SCRIPTS::_0xF9E951A1E5517C06();
			func_75(64);
		}
	}
}

bool func_26(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (Global_1297015.f_42)
		{
			return true;
		}
		return false;
	}
	if (Global_1297394.f_131.f_4)
	{
		return true;
	}
	if (func_123(512))
	{
		return true;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_INCAPACITATED(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_ON_VEHICLE(Global_33, false) || PED::IS_PED_IN_ANY_VEHICLE(Global_33, false))
	{
		return true;
	}
	if (PED::IS_PED_RAGDOLL(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_LASSOED(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_BEING_HOGTIED(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_HOGTYING(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		return true;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		return true;
	}
	if (PED::IS_PED_CLIMBING(Global_33))
	{
		return true;
	}
	if (TASK::IS_PED_RUNNING_INSPECTION_TASK(Global_33))
	{
		return true;
	}
	if (func_124())
	{
		return true;
	}
	if (CAM::IS_AIM_CAM_ACTIVE())
	{
		return true;
	}
	iVar0 = PED::_GET_LAST_LED_MOUNT(Global_33);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return true;
	}
	if (func_22())
	{
		return true;
	}
	return false;
}

void func_27(bool bParam0)
{
	int iVar0;

	if (bParam0)
	{
		if (func_74(256))
		{
			return;
		}
	}
	else if (!func_74(256))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(Local_19.f_35[iVar0 /*4*/]))
		{
			func_108(Local_19.f_35[iVar0 /*4*/], bParam0, 0);
			func_109(Local_19.f_35[iVar0 /*4*/], bParam0, 0, 1);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_108(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0);
			func_109(Local_19.f_35[iVar0 /*4*/].f_1, bParam0, 0, 1);
		}
		iVar0++;
	}
	if (bParam0)
	{
		func_62(256);
	}
	else
	{
		func_75(256);
	}
}

void func_28()
{
	bool bVar0;
	int iVar1;
	struct<2> Var2[7];
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;

	if (!func_74(256))
	{
		return;
	}
	bVar0 = false;
	iVar1 = 0;
	if (GANG::NETWORK_IS_GANG_LEADER(PLAYER::PLAYER_ID()))
	{
		iVar1 = GANG::_NETWORK_GET_GANG_MEMBERS(Global_1295619.f_10, &Var2);
		if (iVar1 > 1)
		{
			iVar18 = iVar1;
			iVar17 = 0;
			while (iVar17 <= (iVar1 - 1))
			{
				if (func_125(Var2[iVar17 /*2*/]))
				{
					iVar19 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var2[iVar17 /*2*/]));
					if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar19))
					{
						if (func_21(iVar19, 1))
						{
							iVar18 = (iVar18 - 1);
						}
						else if (func_126(1048576, iVar19))
						{
							iVar18 = (iVar18 - 1);
						}
						else
						{
							iVar17++;
						}
						if (iVar18 > 1)
						{
							bVar0 = true;
						}
						iVar20 = 0;
						while (iVar20 <= 1)
						{
							if (func_105(Local_19.f_35[iVar20 /*4*/].f_1))
							{
								if (bVar0)
								{
									if (!func_127(Local_19.f_35[iVar20 /*4*/].f_1, 0))
									{
										func_109(Local_19.f_35[iVar20 /*4*/].f_1, 1, 0, 1);
										func_108(Local_19.f_35[iVar20 /*4*/].f_1, 1, 1);
									}
								}
								else if (func_127(Local_19.f_35[iVar20 /*4*/].f_1, 0))
								{
									func_109(Local_19.f_35[iVar20 /*4*/].f_1, 0, 0, 1);
									func_108(Local_19.f_35[iVar20 /*4*/].f_1, 0, 1);
								}
							}
							iVar20++;
						}
					}
				}
			}
		}
	}
}

void func_29()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (iVar0 == 0 || iVar0 == 1)
		{
			if (func_127(Local_19.f_35[iVar0 /*4*/], 0))
			{
				iVar1 = func_96();
				if (NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iVar1))
				{
					HUD::_0x8B55B324A9123F6B(Local_19.f_35[iVar0 /*4*/].f_3, Local_19.f_35[iVar0 /*4*/].f_2, MISC::VAR_STRING(10, "MS_ENTER_PROMPT_GROUP", func_129(PLAYER::GET_PLAYER_NAME(iVar1), func_128(iVar1, 1, -1, 0))), 3, 1, 0);
					HUD::_UI_PROMPT_SET_GROUP(func_130(Local_19.f_35[iVar0 /*4*/]), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					if (func_127(Local_19.f_35[iVar0 /*4*/].f_1, 0))
					{
						HUD::_UI_PROMPT_SET_GROUP(func_130(Local_19.f_35[iVar0 /*4*/].f_1), Local_19.f_35[iVar0 /*4*/].f_3, 0);
					}
				}
			}
		}
		iVar0++;
	}
}

bool func_30()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_105(Local_19.f_35[iVar0 /*4*/]) && func_131(Local_19.f_35[iVar0 /*4*/], 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			if (iVar0 == 0 || iVar0 == 1)
			{
				func_62(8);
			}
			else
			{
				func_62(32);
			}
			return true;
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1) && func_131(Local_19.f_35[iVar0 /*4*/].f_1, 1))
		{
			Local_19.f_2 = func_132(iVar0);
			func_133(Local_19.f_2);
			func_62(16);
			func_63(2);
			func_134();
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_31()
{
	func_135();
	func_136(0);
	if (func_137())
	{
		func_138();
	}
	PAD::DISABLE_CONTROL_ACTION(0, -2.076617E+31f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.896624E-12f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -1.888856E+09f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 3.101619E+21f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.925685E-38f, false);
	PAD::DISABLE_CONTROL_ACTION(0, 2.144376E-20f, false);
	PAD::DISABLE_CONTROL_ACTION(0, -2.127106E+09f, false);
	PED::SET_PED_RESET_FLAG(Global_33, 168, true);
	PED::SET_PED_RESET_FLAG(Global_33, 108, true);
	func_45(1);
}

void func_32(var uParam0)
{
	Global_1297394.f_131 = uParam0;
	func_33(16);
	func_63(1);
}

void func_33(int iParam0)
{
	func_111(&(Global_1297394.f_157), iParam0);
}

bool func_34()
{
	float fVar0;
	vector3 vVar1;
	int iVar4;
	int iVar5;

	if ((!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33)) || func_139(255))
	{
		return false;
	}
	if (!func_74(1024) && STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		STREAMING::LOAD_SCENE_STOP();
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		return true;
	}
	if (Local_19.f_2 == 2 || Local_19.f_2 == 3)
	{
		fVar0 = 1109393408; /* Float: 40f */
	}
	else
	{
		fVar0 = 1128792064; /* Float: 200f */
	}
	vVar1 = { func_140(Local_19.f_29[Local_19.f_2]) };
	if (!func_74(1024))
	{
		if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			Local_19.f_11 = MISC::GET_SYSTEM_TIME();
			STREAMING::LOAD_SCENE_START(Local_19.f_13[Local_19.f_2 /*3*/], vVar1, fVar0, 0);
			func_62(1024);
		}
		else
		{
			STREAMING::LOAD_SCENE_STOP();
		}
	}
	else if (!STREAMING::IS_LOAD_SCENE_ACTIVE())
	{
		iVar4 = 1;
	}
	else if (STREAMING::IS_LOAD_SCENE_LOADED())
	{
		iVar4 = 1;
	}
	else
	{
		iVar5 = Global_1901671.f_812.f_11;
		if (Local_19.f_11 == 0)
		{
			Local_19.f_11 = MISC::GET_SYSTEM_TIME();
		}
		else if ((MISC::GET_SYSTEM_TIME() - Local_19.f_11) > iVar5)
		{
			iVar4 = 1;
		}
	}
	return iVar4;
}

bool func_35()
{
	char* sVar0;
	char* sVar1;
	bool bVar2;

	sVar0 = func_141();
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return true;
	}
	sVar1 = func_143(func_142());
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		return true;
	}
	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		Local_19.f_6 = ANIMSCENE::_CREATE_ANIM_SCENE(sVar0, 0, sVar1, false, true);
	}
	bVar2 = true;
	if (!ANIMSCENE::IS_ANIM_SCENE_LOADED(Local_19.f_6, true, false))
	{
		bVar2 = false;
	}
	if (!bVar2 && !ANIMSCENE::_IS_ANIM_SCENE_LOADING(Local_19.f_6, true))
	{
		ANIMSCENE::LOAD_ANIM_SCENE(Local_19.f_6);
		return false;
	}
	if (bVar2)
	{
		return true;
	}
	return false;
}

void func_36()
{
	struct<2> Var0[7];
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	bool bVar19;

	if (Local_19.f_9 <= 0)
	{
		if (func_74(16) || Global_1297182.f_1 == 2)
		{
			Local_19.f_9 = GANG::NETWORK_GET_NUM_GANG_MEMBERS(Global_1295619.f_10);
			GANG::_NETWORK_GET_GANG_MEMBERS(Global_1295619.f_10, &Var0);
			iVar18 = -1;
			iVar17 = 0;
			while (iVar17 <= (Local_19.f_9 - 1))
			{
				iVar15 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Var0[iVar17 /*2*/]));
				if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar15))
				{
					bVar19 = GANG::NETWORK_IS_GANG_LEADER(iVar15);
					if (bVar19 || func_21(iVar15, 1) == 0)
					{
						if (func_21(iVar15, 512))
						{
							Local_19.f_52[iVar17 /*4*/] = iVar15;
							if (bVar19)
							{
								iVar18 = iVar17;
								iVar16 = iVar15;
							}
							Local_19.f_52[iVar17 /*4*/].f_3 = 1;
						}
						else
						{
							Local_19.f_52[iVar17 /*4*/].f_3 = 0;
						}
					}
					else
					{
						Local_19.f_52[iVar17 /*4*/].f_3 = 0;
					}
				}
				iVar17++;
			}
			if (iVar18 != -1)
			{
				Local_19.f_52[iVar18 /*4*/] = Local_19.f_52[0 /*4*/];
				Local_19.f_52[iVar18 /*4*/].f_3 = Local_19.f_52[0 /*4*/].f_3;
				Local_19.f_52[0 /*4*/] = iVar16;
				Local_19.f_52[0 /*4*/].f_3 = 1;
			}
		}
		else if (func_74(8))
		{
			Local_19.f_9 = 1;
			Local_19.f_52[0 /*4*/] = PLAYER::PLAYER_ID();
		}
	}
}

int func_37(bool bParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	if (bParam0 || bParam1)
	{
		if (bParam1)
		{
			if (func_14(2))
			{
				func_6(2);
			}
			if (!func_21(PLAYER::PLAYER_ID(), 256))
			{
				func_63(256);
			}
			if (!func_14(4))
			{
				iVar0 = func_144(Global_1297182.f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(4);
			}
		}
		else
		{
			if (func_14(4))
			{
				func_6(4);
			}
			if (func_21(PLAYER::PLAYER_ID(), 256))
			{
				func_64(256);
			}
			if (!func_14(2))
			{
				iVar0 = func_144(Global_1297182.f_200, 1);
				if (iVar0 == -1)
				{
					return 0;
				}
				func_33(2);
			}
		}
		iVar1 = iVar0;
		Global_1297553[Global_1295619 /*87*/].f_3 = iVar0;
		NETWORK::SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(true, true, iVar1);
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(true, false, iVar1, false);
	}
	else if (func_14(2) || func_14(4))
	{
		NETWORK::NETWORK_SET_IN_MP_CUTSCENE(false, false, 32, true);
		Global_1297553[Global_1295619 /*87*/].f_3 = -1;
		func_6(2);
		func_6(4);
		if (func_21(PLAYER::PLAYER_ID(), 256))
		{
			func_64(256);
		}
	}
	return 1;
}

bool func_38()
{
	int iVar0;

	if (Local_19.f_8 < 7)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
		{
			Local_19.f_8++;
		}
		else if (Local_19.f_52[Local_19.f_8 /*4*/].f_3 == 0)
		{
			Local_19.f_8++;
		}
		else if (PLAYER::PLAYER_ID() == Local_19.f_52[Local_19.f_8 /*4*/])
		{
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = Global_33;
			Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(Global_33);
			Local_19.f_8++;
			return false;
		}
		else
		{
			iVar0 = PLAYER::GET_PLAYER_PED(Local_19.f_52[Local_19.f_8 /*4*/]);
			if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Local_19.f_8++;
				return false;
			}
			Local_19.f_52[Local_19.f_8 /*4*/].f_1 = PED::CLONE_PED(iVar0, false, true, true);
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[Local_19.f_8 /*4*/].f_1))
			{
				ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false);
				ENTITY::SET_ENTITY_COLLISION(Local_19.f_52[Local_19.f_8 /*4*/].f_1, false, false);
				Local_19.f_52[Local_19.f_8 /*4*/].f_2 = PED::IS_PED_MALE(iVar0);
				Local_19.f_8++;
				return false;
			}
		}
	}
	return Local_19.f_8 >= Local_19.f_9;
}

bool func_39()
{
	int iVar0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (!func_145(Global_33))
		{
			if (func_146(iVar0))
			{
				ENTITY::_DELETE_CARRIABLE(&iVar0);
			}
			else
			{
				TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_33, iVar0, 0f, 0f, 0f, 2f, 9);
			}
		}
		return false;
	}
	return true;
}

void func_40()
{
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 2, 0), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 3, 0), 0, 0);
			break;
		default:
			Local_19.f_83 = func_101(func_100(Local_19.f_1, 0, 1), 0, 0);
			Local_19.f_84 = func_101(func_100(Local_19.f_1, 1, 1), 0, 0);
			break;
	}
}

void func_41()
{
	int iVar0;

	if (FIRE::IS_ENTITY_ON_FIRE(Global_33))
	{
		FIRE::STOP_ENTITY_FIRE(Global_33, 0);
	}
	iVar0 = PLAYER::GET_MOUNT_OWNED_BY_PLAYER(PLAYER::PLAYER_ID());
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_62(65536);
	}
	iVar0 = PED::_GET_LAST_LED_MOUNT(Global_33);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
	if (PED::IS_PED_ON_MOUNT(Global_33))
	{
		func_62(65536);
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, true, true);
	}
	if (PED::IS_PED_HOGTIED(Global_33) || PED::IS_PED_BEING_HOGTIED(Global_33))
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(Global_33, false, true);
	}
}

void func_42()
{
	int iVar0;
	float fVar1;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_139(255))
	{
		return;
	}
	if (!func_39())
	{
		return;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(Global_33, true))
	{
		PED::_WARP_PED_OUT_OF_VEHICLE(Global_33);
		return;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_19.f_6, false) && !func_74(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_147(), func_148(), 2);
		ANIMSCENE::SET_ANIM_SCENE_INT(Local_19.f_6, "CameraIndex", func_149(), false);
		if (func_74(8) && ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			if (PED::IS_PED_MALE(Global_33))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_33, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_33, 0);
			}
		}
		if (Local_19.f_2 == 2)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 3)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (!func_74(8))
		{
			iVar0 = 0;
			while (iVar0 <= (Local_19.f_9 - 1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1))
				{
					ENTITY::SET_ENTITY_VISIBLE(Local_19.f_52[iVar0 /*4*/].f_1, true);
					ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, func_150(iVar0, Local_19.f_52[iVar0 /*4*/].f_2), Local_19.f_52[iVar0 /*4*/].f_1, 0);
				}
				iVar0++;
			}
		}
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_62(1);
		func_75(16);
		func_75(8);
		func_151(1);
		return;
	}
	fVar1 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_19.f_6);
	if (fVar1 > 1063675494)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			func_152(1);
		}
	}
	else if (fVar1 > 1062836634)
	{
		if (!func_74(4096))
		{
			func_62(4096);
			func_58(0);
		}
	}
	switch (Local_19.f_4)
	{
		case 1:
			if (!CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_OUT(0);
			}
			func_151(2);
			break;
		case 2:
			if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6) || !ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_19.f_6, false))
			{
			}
			else
			{
				if (!func_14(9.403955E-38f))
				{
					CAM::DO_SCREEN_FADE_IN(250);
				}
				func_151(3);
				Jump @716; //curOff = 623
				if (CAM::IS_GAMEPLAY_CAM_RENDERING())
				{
					CAM::DO_SCREEN_FADE_OUT(0);
					Local_19.f_11 = MISC::GET_SYSTEM_TIME();
					func_151(4);
				}
				Jump @716; //curOff = 651
				if (STREAMING::IS_LOAD_SCENE_LOADED() || (MISC::GET_SYSTEM_TIME() - Local_19.f_11) > Global_1901671.f_812.f_11)
				{
					if (!func_14(9.403955E-38f))
					{
						CAM::DO_SCREEN_FADE_IN(250);
					}
					func_151(5);
				}
			}
			default:
				break;
	}
}

bool func_43()
{
	int iVar0;
	int iVar1;

	if (Global_1297394.f_131.f_3)
	{
		return true;
	}
	if (func_123(512))
	{
		Local_19.f_3 = 1;
		return true;
	}
	iVar0 = Local_19.f_85;
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar0))
	{
		Local_19.f_3 = 1;
		return true;
	}
	if (Global_1295619.f_10 != Local_19.f_86 && !func_74(262144))
	{
		if (func_74(131072) && GANG::NETWORK_GET_GANG_LEADER(Global_1295619.f_10) == PLAYER::PLAYER_ID())
		{
			func_153();
		}
		else
		{
			return true;
		}
	}
	if (GANG::NETWORK_GET_GANG_ID(iVar0) != Global_1295619.f_10)
	{
		if (func_7(iVar0, 1) != Local_19.f_1)
		{
			return true;
		}
		if (func_144(iVar0, 1) != Global_1297553[Global_1295619 /*87*/].f_3)
		{
			return true;
		}
	}
	if ((iVar0 != PLAYER::PLAYER_ID() && GANG::NETWORK_GET_GANG_ID(iVar0) != Global_1295619.f_10) && (Global_1297182.f_1 == 2 || Global_1297182.f_1 == 1))
	{
		Local_19.f_3 = 3;
		return true;
	}
	iVar1 = func_7(Global_1297182.f_200, 1);
	if (Local_19.f_1 != iVar1)
	{
		Local_19.f_3 = 2;
		return true;
	}
	if (func_154())
	{
		Local_19.f_3 = 4;
		return true;
	}
	return false;
}

void func_44()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 6)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_52[iVar0 /*4*/].f_1) && Local_19.f_52[iVar0 /*4*/].f_1 != Global_33)
		{
			ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_19.f_6, func_150(iVar0, 1), Local_19.f_52[iVar0 /*4*/].f_1);
			PED::DELETE_PED(&(Local_19.f_52[iVar0 /*4*/].f_1));
		}
		iVar0++;
	}
	Local_19.f_83 = 0;
	Local_19.f_84 = 0;
	if (ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		ANIMSCENE::_DELETE_ANIM_SCENE(Local_19.f_6);
	}
	if (func_74(1024))
	{
		if (STREAMING::IS_LOAD_SCENE_ACTIVE())
		{
			STREAMING::LOAD_SCENE_STOP();
		}
		func_75(1024);
	}
	Local_19.f_11 = 0;
	func_75(1);
	Local_19.f_6 = 0;
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(16384))
		{
			PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), true);
			func_62(16384);
		}
	}
	else if (func_74(16384))
	{
		PLAYER::SET_PLAYER_INVINCIBLE(PLAYER::PLAYER_ID(), false);
		func_75(16384);
	}
}

void func_46()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		func_155(func_100(Local_19.f_1, iVar0, 0), 0f, 1);
		iVar0++;
	}
}

void func_47()
{
	func_156();
	func_157();
}

bool func_48()
{
	if (Global_1297394.f_29.f_2 != Local_19.f_1)
	{
		return false;
	}
	if (Global_1297394.f_29.f_3 != 2)
	{
		return false;
	}
	return true;
}

bool func_49()
{
	return (Global_1297182.f_1 != 1 && !func_22());
}

void func_50(int iParam0)
{
	Global_1297182.f_1 = iParam0;
}

bool func_51()
{
	int iVar0;
	var uVar1;
	int iVar3;

	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (Local_19.f_81 == 0)
	{
		if (func_158())
		{
			func_159(1);
			return false;
		}
		else
		{
			iVar0 = GANG::NETWORK_GET_GANG_ID(PLAYER::PLAYER_ID());
			if (GANG::NETWORK_IS_GANG_ID_VALID(iVar0))
			{
				if (GANG::_NETWORK_GET_GANG_LEADER_HANDLE(iVar0, &uVar1))
				{
					iVar3 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&uVar1);
					if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
					{
						Local_19.f_81 = func_121(MISC::VAR_STRING(10, "MS_WARN_MEMBER_JOIN_CARRY", func_129(PLAYER::GET_PLAYER_NAME(iVar3), func_128(iVar3, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
					else
					{
						Local_19.f_81 = func_121(MISC::VAR_STRING(10, "MS_WARN_MEMBER_JOIN", func_129(PLAYER::GET_PLAYER_NAME(iVar3), func_128(iVar3, 1, -1, 0))), 10000, 0, 0, 0, 1);
					}
				}
			}
		}
	}
	if (Local_19.f_10 == 0)
	{
		Local_19.f_10 = MISC::GET_GAME_TIMER();
	}
	else if ((MISC::GET_GAME_TIMER() - Local_19.f_10) >= 11000)
	{
		return true;
	}
	return false;
}

void func_52()
{
	int iVar0;

	iVar0 = Global_1297182.f_200;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		Local_19.f_2 = 2;
		return;
	}
	Local_19.f_2 = Global_1297553[iVar0 /*87*/].f_5.f_13;
}

void func_53()
{
	if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50)
	{
		Local_19.f_2 = 2;
	}
	else
	{
		Local_19.f_2 = 3;
	}
	func_62(8);
}

bool func_54()
{
	float fVar0;

	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		fVar0 = BUILTIN::VDIST(Global_34, func_160(Local_19.f_1));
		if (fVar0 < 1128792064)
		{
			return true;
		}
	}
	return false;
}

bool func_55()
{
	if (Local_19.f_12 == 0)
	{
		Local_19.f_12 = MISC::GET_SYSTEM_TIME();
	}
	else if ((MISC::GET_SYSTEM_TIME() - Local_19.f_12) > 10000)
	{
		return true;
	}
	return false;
}

void func_56()
{
	int iVar0;

	if (PED::IS_PED_CARRYING_SOMETHING(Global_33))
	{
		iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_33);
		if (func_146(iVar0))
		{
			ENTITY::_DELETE_CARRIABLE(&iVar0);
		}
	}
}

bool func_57(bool bParam0)
{
	if ((func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!func_39())
	{
		return false;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::_WARP_PED_OUT_OF_VEHICLE(PLAYER::PLAYER_PED_ID());
		}
		return false;
	}
	if (PED::IS_PED_ON_MOUNT(PLAYER::PLAYER_PED_ID()))
	{
		PED::_REMOVE_PED_FROM_MOUNT(PLAYER::PLAYER_PED_ID(), true, false);
		return false;
	}
	if (Local_19.f_2 == -1)
	{
		func_161(Local_19.f_13[2 /*3*/], Local_19.f_29[2]);
	}
	else
	{
		func_161(Local_19.f_13[Local_19.f_2 /*3*/], Local_19.f_29[Local_19.f_2]);
	}
	if (bParam0)
	{
		func_162(1);
		func_163(1);
	}
	func_164(1);
	func_165(145);
	func_166(1, 1);
	return true;
}

void func_58(bool bParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(Global_33))
	{
		if (bParam0)
		{
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
		else
		{
			WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, true);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 7, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 8, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 9, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 10, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 16, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 17, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 18, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 19, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 20, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 21, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 22, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 23, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 25, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 27, bParam0);
			WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 1, bParam0);
		}
	}
}

bool func_59()
{
	if ((func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	return true;
}

bool func_60()
{
	if (func_139(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!func_74(512))
	{
		if (ENTITY::IS_ENTITY_VISIBLE(Global_33))
		{
			ENTITY::SET_ENTITY_VISIBLE(Global_33, false);
		}
		func_68(0);
		PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), false, 0, false);
		func_37(1, 1);
		func_62(512);
		return true;
	}
	return false;
}

bool func_61()
{
	if (func_139(255))
	{
		return false;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_33) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (func_74(512))
	{
		func_58(0);
		func_68(1);
		func_167(1, 2);
		func_37(1, 0);
		func_75(512);
	}
	return true;
}

void func_62(int iParam0)
{
	func_111(&(Local_19.f_5), iParam0);
}

void func_63(int iParam0)
{
	func_111(&(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_64(int iParam0)
{
	func_79(&(Global_1297553[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*87*/].f_86), iParam0);
}

void func_65()
{
	float fVar0;

	if (!ANIMSCENE::DOES_ANIM_SCENE_EXIST(Local_19.f_6))
	{
		func_15(34);
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_33) || func_139(255))
	{
		return;
	}
	if (!ANIMSCENE::IS_ANIM_SCENE_RUNNING(Local_19.f_6, false) && !func_74(1))
	{
		ANIMSCENE::SET_ANIM_SCENE_ORIGIN(Local_19.f_6, func_147(), func_148(), 2);
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			if (PED::IS_PED_MALE(Global_33))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_MALE_01", Global_33, 0);
			}
			else
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "MP_FEMALE_01", Global_33, 0);
			}
		}
		if (Local_19.f_2 == 0)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_83))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_FRONT", Local_19.f_83, 0);
			}
		}
		else if (Local_19.f_2 == 1)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_84))
			{
				ANIMSCENE::SET_ANIM_SCENE_ENTITY(Local_19.f_6, "p_doorsgl01x_SIDE", Local_19.f_84, 0);
			}
		}
		if (TASK::IS_PED_RUNNING_TASK_ITEM_INTERACTION(Global_33))
		{
			TASK::CLEAR_PED_SECONDARY_TASK(Global_33);
		}
		TASK::_0xFDECCA06E8B81346(Global_33);
		ANIMSCENE::START_ANIM_SCENE(Local_19.f_6);
		func_62(1);
		func_75(32);
		return;
	}
	fVar0 = ANIMSCENE::GET_ANIM_SCENE_PHASE(Local_19.f_6);
	if (fVar0 > 1063675494)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_33))
		{
			func_152(0);
		}
	}
	else if (fVar0 > 1062836634)
	{
		if (!func_74(2048))
		{
			func_58(1);
			func_68(1);
			func_62(2048);
		}
	}
}

void func_66()
{
	if (func_74(65536))
	{
		func_168(0, 1);
		func_75(65536);
	}
}

bool func_67()
{
	vector3 vVar0;
	float fVar3;
	float fVar4;
	var uVar5;

	if ((func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	vVar0 = { func_169(Local_19.f_1, 0) };
	fVar3 = func_170(Local_19.f_1, 0);
	fVar4 = Global_1901671.f_812.f_8;
	uVar5 = Global_1901671.f_812.f_9;
	func_164(1);
	func_165(145);
	func_171(vVar0, fVar3, uVar5, fVar4, 1, 1, 1);
	return true;
}

void func_68(bool bParam0)
{
	if (!bParam0)
	{
		WEAPON::_HOLSTER_PED_WEAPONS(Global_33, false, false, false, true);
	}
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 2, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 3, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 4, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 5, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 6, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 11, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 12, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 13, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 24, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 14, bParam0);
	WEAPON::_SET_PED_WEAPON_ATTACH_POINT_VISIBILITY(Global_33, 15, bParam0);
}

bool func_69()
{
	char* sVar0;

	if ((func_139(255) || !ENTITY::DOES_ENTITY_EXIST(Global_33)) || ENTITY::IS_ENTITY_DEAD(Global_33))
	{
		return false;
	}
	if (!CAM::IS_SCREEN_FADED_IN())
	{
		return false;
	}
	switch (Local_19.f_3)
	{
		case 1:
			sVar0 = "MS_WARN_FORCE_OUT_INVALID";
			break;
		case 2:
			sVar0 = "MS_WARN_FORCE_OUT_MOVED";
			break;
		case 3:
			sVar0 = "MS_WARN_FORCE_OUT_DISBANDED";
			break;
	}
	Local_19.f_82 = func_121(sVar0, 10000, 0, 0, 0, 1);
	return true;
}

void func_70(bool bParam0)
{
	func_6(16);
	func_64(1);
	if (Global_1297394.f_158 > -1)
	{
		func_172(Global_1297394.f_158);
		Global_1297394.f_158 = -1;
	}
	if (bParam0)
	{
		func_33(64);
	}
}

void func_71(int iParam0)
{
	Global_1297182.f_200 = iParam0;
}

void func_72()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (VOLUME::DOES_VOLUME_EXIST(Local_19.f_35[iVar0 /*4*/].f_2))
		{
			VOLUME::DELETE_VOLUME(Local_19.f_35[iVar0 /*4*/].f_2);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/]))
		{
			func_173(&(Local_19.f_35[iVar0 /*4*/]), 1, 1);
		}
		if (func_105(Local_19.f_35[iVar0 /*4*/].f_1))
		{
			func_173(&(Local_19.f_35[iVar0 /*4*/].f_1), 1, 1);
		}
		iVar0++;
	}
}

void func_73()
{
	Local_19.f_2 = -1;
	Local_19.f_5 = 0;
	Local_19.f_11 = 0;
	Local_19.f_12 = 0;
	Local_19.f_6 = 0;
	Local_19.f_8 = 0;
	Local_19.f_9 = 0;
	Local_19.f_10 = 0;
	Local_19.f_81 = 0;
	Local_19.f_4 = 0;
}

bool func_74(int iParam0)
{
	return func_95(Local_19.f_5, iParam0);
}

void func_75(int iParam0)
{
	func_79(&(Local_19.f_5), iParam0);
}

void func_76(int* iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		OBJECT::DELETE_OBJECT(iParam0);
	}
	if (iParam0->f_2 != 0)
	{
		if (STREAMING::HAS_MODEL_LOADED(iParam0->f_2))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam0->f_2);
		}
	}
	iParam0->f_1 = 0;
	iParam0->f_3 = 0;
}

bool func_77(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_1072759.f_22475.f_417[iParam0 /*12*/], iParam1);
}

void func_78(int iParam0, int iParam1, bool bParam2)
{
	if (func_77(iParam0, iParam1) && (!bParam2 || Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] == SCRIPTS::GET_ID_OF_THIS_THREAD()))
	{
		MISC::CLEAR_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = 0;
		func_174();
	}
}

void func_79(var uParam0, int iParam1)
{
	func_175(uParam0, iParam1);
}

bool func_80(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_81()
{
	return Global_1102813.f_3672;
}

bool func_82(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_17418.f_2585[iVar1], iVar2);
}

void func_83(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;

	func_176(iParam0, &iVar0, &iVar1);
	if (!func_177(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_178(iVar0, iVar1);
}

void func_84(int iParam0)
{
	Local_19.f_97 = iParam0;
}

bool func_85()
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID());
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return false;
	}
	iVar2 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar2))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iVar2))
	{
		return false;
	}
	iVar1 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar2);
	return PED::IS_PED_A_PLAYER(iVar1);
}

struct<2> func_86()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_112(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_112(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_87(struct<2> Param0)
{
	if (!func_179(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_180(Param0))
	{
		return false;
	}
	return true;
}

bool func_88(int iParam0)
{
	return func_120(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), Local_19.f_94[func_90(iParam0)], 1, 0);
}

void func_89(int iParam0, int iParam1)
{
	if (!func_77(iParam0, iParam1))
	{
		MISC::SET_BIT(&(Global_1072759.f_22475.f_417[iParam0 /*12*/]), iParam1);
		Global_1072759.f_22475.f_417[iParam0 /*12*/].f_1[iParam1] = SCRIPTS::GET_ID_OF_THIS_THREAD();
		func_174();
	}
}

int func_90(int iParam0)
{
	switch (iParam0)
	{
		case joaat("GHOSTING_VOLUME"):
			return 0;
		case joaat("UNGHOSTING_VOLUME"):
			return 1;
		default:
			break;
	}
	return -1;
}

bool func_91(var uParam0)
{
	return func_181(*uParam0, 1);
}

bool func_92(var uParam0, float fParam1)
{
	if (func_182(uParam0, fParam1))
	{
		func_183(uParam0);
		return true;
	}
	return false;
}

float func_93(float fParam0, float fParam1)
{
	if (fParam0 > fParam1)
	{
		return fParam0;
	}
	return fParam1;
}

void func_94(var uParam0)
{
	func_184(uParam0, 0f);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_96()
{
	return Global_1297182.f_200;
}

bool func_97(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0) || !NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if (!func_185(Global_1297553[iVar0 /*87*/]))
	{
		return false;
	}
	if (Global_1297553[iVar0 /*87*/].f_5.f_12 == -1)
	{
		return false;
	}
	return true;
}

bool func_98()
{
	if (!func_186())
	{
		return false;
	}
	return func_95(Global_1901671.f_45.f_5, 8);
}

bool func_99(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 5);
}

int func_100(int iParam0, int iParam1, bool bParam2)
{
	float fVar0;

	if (!bParam2)
	{
		fVar0 = Global_1297394.f_78[iParam0 /*6*/][iParam1];
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				switch (iParam1)
				{
					case 0:
						fVar0 = -3.066195E+07f;
						break;
					case 1:
						fVar0 = 7.375169E-19f;
						break;
					case 2:
						fVar0 = -5.610095E+35f;
						break;
					case 3:
						fVar0 = 4.912076E-26f;
						break;
				}
				break;
			case 1:
				switch (iParam1)
				{
					case 0:
						fVar0 = -1.267669E-20f;
						break;
					case 1:
						fVar0 = -3.938826E+25f;
						break;
					case 2:
						fVar0 = -5.610095E+35f;
						break;
					case 3:
						fVar0 = 4.912076E-26f;
						break;
				}
				break;
			case 2:
				switch (iParam1)
				{
					case 0:
						fVar0 = 8.051546E+31f;
						break;
					case 1:
						fVar0 = -71.70045f;
						break;
					case 2:
						fVar0 = -5.610095E+35f;
						break;
					case 3:
						fVar0 = 4.912076E-26f;
						break;
				}
				break;
			case 3:
				switch (iParam1)
				{
					case 0:
						fVar0 = 9.452016E-24f;
						break;
					case 1:
						fVar0 = 2.379901E-33f;
						break;
					case 2:
						fVar0 = -5.610095E+35f;
						break;
					case 3:
						fVar0 = 4.912076E-26f;
						break;
				}
				break;
			case 4:
				switch (iParam1)
				{
					case 0:
						fVar0 = -4.807724E+18f;
						break;
					case 1:
						fVar0 = NaNf;
						break;
					case 2:
						fVar0 = -5.610095E+35f;
						break;
					case 3:
						fVar0 = 4.912076E-26f;
						break;
				}
				break;
		}
	}
	return fVar0;
}

int func_101(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	iVar0 = func_187(iParam0, iParam1);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (!ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) && !bParam2)
	{
		return 0;
	}
	return iVar0;
}

void func_102()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 <= 3)
	{
		Local_19.f_13[iVar0 /*3*/] = { func_169(Local_19.f_1, iVar0) };
		Local_19.f_29[iVar0] = func_170(Local_19.f_1, iVar0);
		iVar0++;
	}
}

void func_103()
{
	struct<4> Var0;
	int iVar5;
	var uVar6;
	var uVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	var uVar11;
	vector3 vVar12;
	vector3 vVar15;
	vector3 vVar18;
	int iVar21;
	char cVar22[64];

	if (Global_1297015.f_166)
	{
		func_84(2);
	}
	Var0 = Global_1072759.f_28418[50 /*4*/].f_3;
	Var0.f_2 = -9.95646E-34f;
	Var0.f_3 = func_188(Local_19.f_1);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return;
	}
	uVar6 = Var0.f_1;
	iVar8 = 0;
	while (iVar8 <= 1)
	{
		Var0.f_1 = uVar6;
		iVar5 = func_189(iVar8);
		StringCopy(&cVar22, "volume#", 64);
		StringIntConCat(&cVar22, iVar8, 64);
		Var0.f_2 = -2.644634E-20f;
		Var0.f_3 = iVar5;
		if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
		{
			return;
		}
		uVar7 = Var0.f_1;
		Var0.f_2 = -5.846641E+35f;
		iVar10 = DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
		Local_19.f_94[iVar8] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME(&cVar22);
		iVar9 = 0;
		while (iVar9 <= (iVar10 - 1))
		{
			Var0.f_1 = uVar7;
			Var0.f_2 = -3.407629E+31f;
			Var0.f_3 = iVar9;
			if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
			{
			}
			else
			{
				Var0.f_2 = 9.134039E-14f;
				DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar11, &Var0);
				iVar21 = uVar11;
				Var0.f_2 = -0.8667759f;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar12, &Var0);
				Var0.f_2 = 2.09897E+34f;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar15, &Var0);
				Var0.f_2 = -2.121144E+17f;
				DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar18, &Var0);
				VOLUME::_ADD_VOLUME_TO_VOLUME_AGGREGATE(Local_19.f_94[iVar8], iVar21, vVar12, vVar15, vVar18);
			}
			iVar9++;
		}
		iVar8++;
	}
}

bool func_104(int iParam0, var uParam1, var uParam2)
{
	struct<5> Var0;
	struct<5> Var5;
	struct<5> Var10;
	int iVar15;

	Var0 = Global_1297394.f_1;
	Var0.f_2 = -2.463352E+13f;
	Var0.f_3 = func_188(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	iVar15 = 0;
	while (iVar15 < 4)
	{
		Var5 = { Var0 };
		Var5.f_2 = -5.253917E-15f;
		Var5.f_3 = iVar15;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(uParam1[Var5.f_3 /*3*/], &Var5))
		{
			return false;
		}
		Var10 = { Var0 };
		Var10.f_2 = 0.001210382f;
		Var10.f_3 = iVar15;
		if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(uParam2[Var10.f_3 /*3*/], &Var10))
		{
			return false;
		}
		iVar15++;
	}
	return true;
}

bool func_105(int iParam0)
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

char* func_106(int iParam0, bool bParam1)
{
	char* sVar0;

	sVar0 = "Null";
	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MOONSHINE_ENTER_POSSE";
			}
			else
			{
				sVar0 = "MOONSHINE_ENTER_SOLO";
			}
			break;
		case 2:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
		case 3:
			sVar0 = "MOONSHINE_EXIT_SOLO";
			break;
	}
	return sVar0;
}

int func_107(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, float fParam10, float fParam11, int iParam12, bool bParam13)
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
	if (!VOLUME::DOES_VOLUME_EXIST(iParam2))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (func_190(iVar0, 2))
		{
			if (iParam2 == Global_1951897[iVar0 /*23*/].f_10 && iParam1 == Global_1951897[iVar0 /*23*/].f_4)
			{
				return iVar0;
			}
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_191(iVar1, iParam1, sParam0, 2, iParam3, iParam4, 0f, 0f, 0f, 0f, iParam2, 0, 1, iParam5, iParam6, iParam7, iParam8, iParam9, fParam10, fParam11, 1f, 0, 0, 0, iParam12, bParam13);
		return iVar1;
	}
	return 0;
}

void func_108(int iParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	if (!HUD::_UI_PROMPT_IS_VALID(Global_1951897[iVar0 /*23*/].f_3))
	{
		return;
	}
	HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iVar0 /*23*/].f_3, bParam1);
}

void func_109(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (bParam2 && !func_105(iParam0))
	{
		return;
	}
	iVar0 = func_192(iParam0);
	if (bParam1)
	{
		func_193(iParam0, 4);
		if (bParam3)
		{
			func_194(iVar0, 1);
		}
		func_195(iVar0, 1);
	}
	else
	{
		func_196(iParam0, 4);
		func_195(iVar0, 0);
	}
}

bool func_110()
{
	return (Global_1295611.f_2.f_1 == 2 || Global_1295611.f_2.f_1 == 1);
}

void func_111(var uParam0, int iParam1)
{
	func_197(uParam0, iParam1);
}

struct<2> func_112(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

bool func_113(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915643.f_20638;
	}
	return (Global_1915643.f_20638 || Global_1915643.f_22504.f_1);
}

int func_114(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;

	if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam1))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 12)
	{
		if (Global_1235672[iVar0 /*697*/].f_571 != iParam0)
		{
		}
		else if (bParam2 && !func_198(iVar0, 32, iParam1))
		{
		}
		else if (bParam3 && Global_1225084[iVar0 /*28*/].f_15 != iParam1)
		{
		}
		else
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_115(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_116()
{
	return (Global_1953279.f_1 != 4.387347E-38f && Global_1953279.f_1 != 3.272964E+34f);
}

int func_117(bool bParam0, bool bParam1, bool bParam2)
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

bool func_118()
{
	return func_10(1, 255);
}

bool func_119()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) <= 4);
}

bool func_120(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

int func_121(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
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

bool func_122(int iParam0, bool bParam1)
{
	int iVar0;

	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_192(iParam0);
	return HUD::_UI_PROMPT_IS_ACTIVE(Global_1951897[iVar0 /*23*/].f_3);
}

bool func_123(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return (Global_1207324.f_1 && iParam0) != 0;
}

bool func_124()
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

bool func_125(var uParam0, var uParam1)
{
	return NETWORK::NETWORK_IS_HANDLE_VALID(&uParam0);
}

bool func_126(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102813.f_3 && iParam0) != 0;
	}
	return (Global_1101558[iParam1 /*38*/].f_3 && iParam0) != 0;
}

bool func_127(int iParam0, bool bParam1)
{
	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	return !func_190(iParam0, 4);
}

int func_128(int iParam0, bool bParam1, int iParam2, bool bParam3)
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
	if (func_199(func_112(0)) && func_200(func_112(0)) == 7)
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
			iVar6 = func_201(iParam0);
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
			return func_202(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_95(Global_1072759.f_21353.f_1[iVar2 /*8*/].f_7, 1024))
	{
		return -4.19002E+20f;
	}
	iVar7 = func_203(iParam0, 1);
	if (!bVar0)
	{
		if (func_204(iParam0, bParam1))
		{
			return func_202(iParam0);
		}
		else if (func_205(iParam0, bParam1))
		{
			if (func_206(iParam0, bParam1))
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
		return func_201(iParam0);
	}
	else if (func_204(iParam0, bParam1))
	{
		if (PLAYER::PLAYER_ID() == iParam0)
		{
			return 27.64779f;
		}
		else if (func_208(func_207(func_112(0)), 1) == 9.256025E-25f)
		{
			return func_202(iParam0);
		}
		else
		{
			return func_202(iParam0);
		}
	}
	else if (func_205(iParam0, bParam1))
	{
		return 4.709691E+29f;
	}
	return 3.737303E-09f;
}

char* func_129(char* sParam0, int iParam1)
{
	sParam0 = PLAYER::_FORMAT_PLAYER_NAME_STRING(sParam0);
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "PLAYER_STRING", sParam0);
	}
	return func_209(MISC::VAR_STRING(10, "PLAYER_STRING", sParam0), iParam1);
}

int func_130(int iParam0)
{
	int iVar0;

	iVar0 = func_192(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	return Global_1951897[iVar0 /*23*/].f_3;
}

bool func_131(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;
	int iVar4;

	if (bParam1 && !func_105(iParam0))
	{
		return false;
	}
	iVar0 = func_192(iParam0);
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

int func_132(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 1:
			return 3;
		case 2:
			return 0;
		case 3:
			return 1;
		default:
			break;
	}
	return 4;
}

void func_133(int iParam0)
{
	if (iParam0 == 0 || iParam0 == 1)
	{
		return;
	}
	Global_1297553[Global_1295619 /*87*/].f_5.f_13 = iParam0;
}

void func_134()
{
	struct<20> Var0;

	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 5;
	func_210(&Var0);
}

void func_135()
{
	PAD::DISABLE_CONTROL_ACTION(0, 1.011282E+08f, false);
	func_211(0, 0);
	Global_1940239.f_6 = 1;
}

void func_136(bool bParam0)
{
	if (func_124())
	{
		Global_1958670 = 1;
	}
	if (func_212(-3.294948E+35f))
	{
	}
	if (bParam0 && (Global_1940186.f_38 == -230.1699f || Global_1940186.f_38 == 5.402792E-27f))
	{
		WEAPON::SET_CURRENT_PED_WEAPON(Global_33, -3.273909E-18f, true, 0, false, false);
		Global_1940186.f_38 = -3.273909E-18f;
	}
}

bool func_137()
{
	return Global_1896762.f_352;
}

void func_138()
{
	func_213(0);
}

bool func_139(int iParam0)
{
	return func_10(1, iParam0);
}

Vector3 func_140(float fParam0)
{
	return -BUILTIN::SIN(fParam0), BUILTIN::COS(fParam0), 0f;
}

char* func_141()
{
	char* sVar0;

	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			sVar0 = "script@mp@Moonshiner@Moonshine_Property@exit";
			break;
		case 2:
		case 3:
			sVar0 = "script@mp@moonshiner@moonshine_property@enter";
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_142()
{
	int iVar0;

	switch (Local_19.f_2)
	{
		case 0:
			iVar0 = 3;
			break;
		case 1:
			iVar0 = 4;
			break;
		case 2:
			iVar0 = 1;
			break;
		case 3:
			iVar0 = 2;
			break;
		case 4:
			break;
	}
	return iVar0;
}

char* func_143(int iParam0)
{
	char* sVar0;
	bool bVar1;
	bool bVar2;

	sVar0 = "";
	switch (Local_19.f_2)
	{
		case 0:
		case 1:
			bVar1 = func_214();
			bVar2 = func_215();
			switch (iParam0)
			{
				case 3:
					if (bVar1)
					{
						sVar0 = "s_FRONT_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_FRONT_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_FRONT";
					}
					break;
				case 4:
					if (bVar1)
					{
						sVar0 = "s_SIDE_VERY_DRUNK";
					}
					else if (bVar2)
					{
						sVar0 = "s_SIDE_MODERATELY_DRUNK";
					}
					else
					{
						sVar0 = "s_SIDE";
					}
					break;
			}
			break;
		case 2:
		case 3:
			switch (iParam0)
			{
				case 1:
					sVar0 = "s_FRONT";
					break;
				case 2:
					sVar0 = "s_SIDE";
					break;
			}
			break;
		case 4:
			break;
	}
	return sVar0;
}

int func_144(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!NETWORK::NETWORK_IS_PLAYER_INDEX_VALID(iParam0))
		{
			return -1;
		}
	}
	return Global_1297553[iParam0 /*87*/];
}

bool func_145(int iParam0)
{
	return func_216(iParam0, -1);
}

bool func_146(int iParam0)
{
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		return false;
	}
	if (ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	return true;
}

Vector3 func_147()
{
	vector3 vVar0;
	bool bVar3;
	bool bVar4;

	bVar3 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	bVar4 = Local_19.f_2 == 3;
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar3)
			{
				vVar0 = { 1155503942, -1001639045, 1110730342 /* Float: 45.1f */ };
			}
			else
			{
				vVar0 = { 1155510900, -1001707122, 1128237230 };
			}
			break;
		case 1:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -997699329, 1144113095, 1121258308 };
				}
				else
				{
					vVar0 = { -997699329, 1144113095, 1121284522 };
				}
			}
			else
			{
				vVar0 = { -997681183, 1144053803, 1118197344 };
			}
			break;
		case 2:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -986878083, -985764432, 1096391380 };
				}
				else
				{
					vVar0 = { -986878083, -985764432, 1096601095 };
				}
			}
			else
			{
				vVar0 = { -986860811, -985762206, -1055113032 };
			}
			break;
		case 3:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { 1154196585, 1146034543, 1125333238 };
				}
				else
				{
					vVar0 = { 1154196585, 1146034543, 1125346345 };
				}
			}
			else
			{
				vVar0 = { 1154189382, 1146103215, 1123533010 };
			}
			break;
		case 4:
			if (bVar3)
			{
				if (bVar4)
				{
					vVar0 = { -991363326, -992478343, 1121918111 };
				}
				else
				{
					vVar0 = { -991363326, -992478343, 1121944325 };
				}
			}
			else
			{
				vVar0 = { -991366340, -992443787, 1118855469 };
			}
			break;
	}
	return vVar0;
}

Vector3 func_148()
{
	bool bVar0;
	vector3 vVar1;

	bVar0 = (Local_19.f_2 == 2 || Local_19.f_2 == 3);
	switch (Local_19.f_1)
	{
		case 0:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -1022845256 };
			}
			else
			{
				vVar1 = { 0f, 0f, -1020225126 };
			}
			break;
		case 1:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 1102798389 };
			}
			else
			{
				vVar1 = { 0f, 0f, -1048313856 /* Float: -16.5f */ };
			}
			break;
		case 2:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -1042373673 };
			}
			else
			{
				vVar1 = { 0f, 0f, -1031313818 /* Float: -67.7f */ };
			}
			break;
		case 3:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, -1025340867 };
			}
			else
			{
				vVar1 = { 0f, 0f, -1021758669 };
			}
			break;
		case 4:
			if (bVar0)
			{
				vVar1 = { 0f, 0f, 1114638909 /* Float: 60.01f */ };
			}
			else
			{
				vVar1 = { 0f, 0f, 1101004800 /* Float: 20f */ };
			}
			break;
	}
	return vVar1;
}

int func_149()
{
	int iVar0;

	switch (Local_19.f_1)
	{
		case 0:
			iVar0 = 1;
			break;
		case 1:
			iVar0 = 2;
			break;
		case 2:
			iVar0 = 3;
			break;
		case 3:
			iVar0 = 4;
			break;
		case 4:
			iVar0 = 5;
			break;
		default:
			iVar0 = 1;
			break;
	}
	return iVar0;
}

char* func_150(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 0:
			if (bParam1)
			{
				sVar0 = "MP_Male_01";
			}
			else
			{
				sVar0 = "MP_Female_01";
			}
			break;
		case 1:
			if (bParam1)
			{
				sVar0 = "MP_Male_02";
			}
			else
			{
				sVar0 = "MP_Female_02";
			}
			break;
		case 2:
			if (bParam1)
			{
				sVar0 = "MP_Male_03";
			}
			else
			{
				sVar0 = "MP_Female_03";
			}
			break;
		case 3:
			if (bParam1)
			{
				sVar0 = "MP_Male_04";
			}
			else
			{
				sVar0 = "MP_Female_04";
			}
			break;
		case 4:
			if (bParam1)
			{
				sVar0 = "MP_Male_05";
			}
			else
			{
				sVar0 = "MP_Female_05";
			}
			break;
		case 5:
			if (bParam1)
			{
				sVar0 = "MP_Male_06";
			}
			else
			{
				sVar0 = "MP_Female_06";
			}
			break;
		case 6:
			if (bParam1)
			{
				sVar0 = "MP_Male_07";
			}
			else
			{
				sVar0 = "MP_Female_07";
			}
			break;
	}
	return sVar0;
}

void func_151(int iParam0)
{
	Local_19.f_4 = iParam0;
}

void func_152(bool bParam0)
{
	if (bParam0)
	{
		if (!func_74(2))
		{
			ENTITY::SET_ENTITY_COORDS(Global_33, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
			ENTITY::SET_ENTITY_HEADING(Global_33, Local_19.f_29[Local_19.f_2]);
			func_217(0, 0);
			func_62(2);
		}
	}
	else if (!func_74(4))
	{
		ENTITY::SET_ENTITY_COORDS(Global_33, Local_19.f_13[Local_19.f_2 /*3*/], true, false, true, true);
		ENTITY::SET_ENTITY_HEADING(Global_33, Local_19.f_29[Local_19.f_2]);
		func_217(0, 0);
		func_62(4);
	}
}

void func_153()
{
	Local_19.f_85 = func_96();
	Local_19.f_86 = GANG::NETWORK_GET_GANG_ID(Local_19.f_85);
	if (GANG::NETWORK_GET_GANG_LEADER(Local_19.f_86) == PLAYER::PLAYER_ID())
	{
		func_62(131072);
	}
}

bool func_154()
{
	return Global_1108965.f_775.f_28 != -1;
}

void func_155(int iParam0, float fParam1, bool bParam2)
{
	func_218(iParam0, 0, 0);
	if (func_219(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam2);
	}
}

void func_156()
{
	if (func_220(2, 255))
	{
		return;
	}
	func_221(2);
}

void func_157()
{
	if (func_222(8, 255))
	{
		return;
	}
	func_223(3);
}

bool func_158()
{
	int iVar0;

	iVar0 = UIFEED::UI_FEED_GET_CURRENT_MESSAGE(1);
	return (iVar0 != 0 && UIFEED::_UI_FEED_GET_MESSAGE_STATE(iVar0) == 4);
}

void func_159(bool bParam0)
{
	UIFEED::UI_FEED_CLEAR_CHANNEL(1, bParam0, false);
}

Vector3 func_160(int iParam0)
{
	return Global_1297394.f_6.f_1[iParam0 /*3*/];
}

int func_161(vector3 vParam0, var uParam3)
{
	if (func_9(vParam0))
	{
		return 0;
	}
	if (func_224(255) == 4)
	{
		return 0;
	}
	if (func_10(4, 255))
	{
	}
	func_165(4);
	func_225(&(Global_1102813.f_3869));
	Global_1102813.f_3869.f_6 = { vParam0 };
	Global_1102813.f_3869 = uParam3;
	Global_1102813.f_3869.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_226(Global_1102813.f_3869, 36);
	return 1;
}

void func_162(bool bParam0)
{
	if (!bParam0)
	{
		func_227(18);
	}
	else
	{
		func_165(18);
	}
}

void func_163(bool bParam0)
{
	if (!bParam0)
	{
		func_227(19);
	}
	else
	{
		func_165(19);
	}
}

void func_164(bool bParam0)
{
	if (bParam0)
	{
		func_165(133);
	}
	else
	{
		func_227(133);
	}
}

int func_165(int iParam0)
{
	if (func_228(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_166(bool bParam0, bool bParam1)
{
	if (func_224(255) == 4)
	{
		return;
	}
	if (func_9(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_227(0);
	}
	else
	{
		if (bParam1)
		{
			func_229(0, 0, 0, 1);
		}
		func_165(0);
		func_230(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_231(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_232(Global_1102813.f_3839, 36);
	func_233(Global_1102813.f_3878, 36);
}

void func_167(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;

	if (bParam0)
	{
		func_234(iParam1);
		return;
	}
	if (iParam1 == 2)
	{
		iParam1 = 56;
	}
	iVar0 = iParam1;
	bVar1 = !iVar0 & 4 != false;
	bVar2 = iVar0 & 8 != false;
	bVar3 = iVar0 & 16 != false;
	bVar4 = iVar0 & 32 != false;
	bVar5 = iVar0 & 1024 != false;
	bVar6 = iVar0 & 64 != false;
	func_235(bVar1, bVar2, bVar3, (bVar4 || bVar5), bVar6, 0, bVar5);
}

void func_168(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		func_236(49);
	}
	if (bParam1)
	{
		func_236(51);
	}
	func_237(48);
	func_236(52);
	func_236(3);
}

Vector3 func_169(int iParam0, int iParam1)
{
	vector3 vVar0;

	if (iParam0 == -1)
	{
		return 0f, 0f, 0f;
	}
	if (iParam1 == -1)
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	func_239(1.984824E+07f, func_188(iParam0), func_238(iParam1), 0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(&vVar0, &(Global_1297394.f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

float func_170(int iParam0, int iParam1)
{
	float fVar0;

	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam1 == -1)
	{
		return 0f;
	}
	fVar0 = 0f;
	func_239(-4.956781E+30f, func_188(iParam0), func_238(iParam1), 0);
	if (!DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(&fVar0, &(Global_1297394.f_1)))
	{
		return 0f;
	}
	return fVar0;
}

void func_171(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	float fVar3;

	vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
	fVar3 = fParam3;
	if (!func_240(Global_1295619.f_12, &vVar0, &fVar3))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false, false) };
		fVar3 = fParam3;
	}
	func_241(vParam0, fParam3, vVar0, fVar3, iParam4, iParam5, iParam6, fParam7, fParam8, 1);
}

void func_172(int iParam0)
{
	if (iParam0 == 0)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(-2.381714E+26f);
	}
	else if (iParam0 == 1)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(-0.01190513f);
	}
	else if (iParam0 == 2)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(2.391006E-20f);
	}
	else if (iParam0 == 3)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(NaNf);
	}
	else if (iParam0 == 4)
	{
		MAP::_REMOVE_PROP_FROM_MINIMAP(-3.916272E-28f);
	}
}

void func_173(var uParam0, bool bParam1, bool bParam2)
{
	int iVar0;

	if (bParam1 && !func_105(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_192(*uParam0);
	if (Global_1951897[iVar0 /*23*/].f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_242(iVar0);
	*uParam0 = 0;
}

void func_174()
{
	SCRIPTS::_SET_ALL_PLAYER_BITS(&(Global_1072759.f_21353.f_260));
}

void func_175(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_176(var uParam0, var uParam1, var uParam2)
{
	int iVar0;

	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

bool func_177(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_243(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_244(iParam0))
	{
		return false;
	}
	if (func_245(iParam0))
	{
		return false;
	}
	if ((Global_1900460.f_67 && !func_246(iParam0, 1)) || func_247(32768))
	{
		if (!func_246(iParam0, 262144) || !Global_1904398.f_8866)
		{
			return false;
		}
	}
	if (!func_248())
	{
		return false;
	}
	return true;
}

void func_178(int iParam0, int iParam1)
{
	var uVar0;

	uVar0 = Global_1904398[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	Global_1904398[iParam0] = uVar0;
}

bool func_179(int iParam0)
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

int func_180(int iParam0)
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

bool func_181(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_182(var uParam0, float fParam1)
{
	if (!func_91(uParam0))
	{
		return false;
	}
	if (func_249(uParam0) > fParam1)
	{
		return true;
	}
	return false;
}

void func_183(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

void func_184(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_250() - fParam1);
	func_251(uParam0, 1);
	func_252(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_185(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 32);
}

bool func_186()
{
	int iVar0;

	if (Global_1901671.f_45.f_2 == 9.232306E+25f)
	{
		iVar0 = Global_1295619.f_16;
		if (iVar0 > Global_1901671.f_45.f_3 && iVar0 < Global_1901671.f_45.f_4)
		{
			return true;
		}
	}
	return false;
}

int func_187(int iParam0, int iParam1)
{
	int iVar0;

	func_218(iParam0, 0, 0);
	if (func_219(iParam0))
	{
		iVar0 = ENTITY::_GET_ENTITY_BY_DOORHASH(iParam0, iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			return iVar0;
		}
	}
	return 0;
}

float func_188(int iParam0)
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

int func_189(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 8.303282E-20f;
		case 1:
			return 2.603607E+21f;
		default:
			break;
	}
	return 0;
}

bool func_190(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (Global_1951897[iParam0 /*23*/].f_1 && iParam1) != 0;
}

void func_191(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, float fParam18, float fParam19, float fParam20, bool bParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
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
	func_194(iParam0, 1);
	func_195(iParam0, 1);
	func_196(iParam0, 128);
}

int func_192(int iParam0)
{
	return iParam0;
}

void func_193(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 - (Global_1951897[iParam0 /*23*/].f_1 && iParam1));
}

void func_194(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		if (Global_1951897[iParam0 /*23*/].f_5 == 5 && !func_190(iParam0, 8))
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, false);
		}
		else
		{
			HUD::_UI_PROMPT_SET_VISIBLE(Global_1951897[iParam0 /*23*/].f_3, bParam1);
		}
	}
}

void func_195(int iParam0, bool bParam1)
{
	if (HUD::_UI_PROMPT_IS_VALID(Global_1951897[iParam0 /*23*/].f_3))
	{
		HUD::_UI_PROMPT_SET_ENABLED(Global_1951897[iParam0 /*23*/].f_3, bParam1);
	}
}

void func_196(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	Global_1951897[iParam0 /*23*/].f_1 = (Global_1951897[iParam0 /*23*/].f_1 || iParam1);
}

void func_197(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_198(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
	}
	return (func_253(iParam0) && func_254(Global_1225672[iParam2 /*303*/][iParam0 /*23*/].f_19, iParam1));
}

bool func_199(struct<2> Param0)
{
	int iVar0;

	iVar0 = func_255(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

int func_200(var uParam0, var uParam1)
{
	return uParam0;
}

float func_201(int iParam0)
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

float func_202(int iParam0)
{
	if (GANG::NETWORK_GET_GANG_ID(iParam0) != Global_1295619.f_10 && !func_256())
	{
		return 4.279651E-16f;
	}
	return -18751.78f;
}

int func_203(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	iVar0 = BUILTIN::FLOOR(func_257(iParam0, bParam1));
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

bool func_204(int iParam0, bool bParam1)
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

bool func_205(int iParam0, bool bParam1)
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
	if (func_258(iParam0))
	{
		return true;
	}
	return !func_204(iParam0, 0);
}

bool func_206(int iParam0, bool bParam1)
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
	if (func_259(iParam0))
	{
		return false;
	}
	if (func_258(iParam0))
	{
		return false;
	}
	if (func_260(iParam0))
	{
		return true;
	}
	return func_261(iParam0);
}

int func_207(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_262(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

int func_208(int iParam0, int iParam1)
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

char* func_209(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

void func_210(var uParam0)
{
	var uVar0;

	*uParam0 = 13;
	uParam0->f_1 = PLAYER::GET_PLAYER_INDEX();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	uVar0 = func_263(0, 8);
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 26, 15, &uVar0);
}

void func_211(bool bParam0, int iParam1)
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

bool func_212(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939421.f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(Global_1939421[iVar0 /*16*/].f_10)))
		{
			func_264(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_213(bool bParam0)
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

bool func_214()
{
	return Global_1940013 == 2;
}

bool func_215()
{
	return Global_1940013 == 1;
}

int func_216(int iParam0, int iParam1)
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

void func_217(float fParam0, float fParam1)
{
	CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(fParam0, 1f);
	CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(fParam1, 1f);
}

int func_218(int iParam0, bool bParam1, bool bParam2)
{
	if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0))
	{
		if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
		else
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, false, false, 0, 0, false);
		}
	}
	else if ((NETWORK::NETWORK_IS_IN_SESSION() && SCRIPTS::DOES_THREAD_EXIST(Global_1051645.f_16[0])) && bParam1)
	{
		if (!OBJECT::_IS_DOOR_REGISTERED_WITH_NETWORK(iParam0))
		{
			OBJECT::_ADD_DOOR_TO_SYSTEM_NEW(iParam0, true, true, false, Global_1051645.f_16[0], 0, false);
		}
	}
	if (bParam2)
	{
		OBJECT::_DOOR_SYSTEM_SET_ABLE_TO_CHANGE_OPEN_RATIO_WHILE_LOCKED(iParam0, true);
	}
	return iParam0;
}

bool func_219(int iParam0)
{
	if (func_265(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_220(int iParam0, int iParam1)
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

void func_221(int iParam0)
{
	func_266(3, iParam0);
}

bool func_222(int iParam0, int iParam1)
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

void func_223(int iParam0)
{
	func_266(2, iParam0);
}

int func_224(int iParam0)
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

void func_225(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_226(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

int func_227(int iParam0)
{
	if (func_267(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_228(var uParam0, int iParam1, int iParam2)
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

void func_229(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_268(iParam0);
	if (!func_269(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_270(128) && !func_271(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_272() == 4)
	{
		func_227(18);
	}
	func_273(1024);
}

void func_230(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_231(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_232(struct<29> Param0, var uParam29, int iParam30)
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

void func_233(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

void func_234(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	ENTITY::SET_ENTITY_VISIBLE(iVar1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, true);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, true);
	PED::SET_PED_CAN_RAGDOLL(iVar1, true);
	bVar2 = iParam0 & 256 != false;
	if (bVar2)
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 0, false);
	}
	else
	{
		PLAYER::SET_PLAYER_CONTROL(iVar0, true, 4, false);
	}
	ENTITY::FREEZE_ENTITY_POSITION(iVar1, false);
	if (iParam0 & 512 != 0)
	{
	}
	else
	{
		func_274();
	}
	PLAYER::SET_PLAYER_INVINCIBLE(iVar0, false);
	if (!PED::IS_PED_IN_ANY_VEHICLE(iVar1, false))
	{
		ENTITY::SET_ENTITY_COLLISION(iVar1, true, false);
		ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, true, false);
	}
}

void func_235(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (!bParam0)
	{
	}
	if (bParam1)
	{
	}
	if (bParam2)
	{
	}
	if (bParam3)
	{
	}
	if (bParam6)
	{
	}
	if (bParam4)
	{
	}
	if (bParam5)
	{
	}
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	iVar2 = 0;
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		iVar2 = 4;
	}
	if (bParam4)
	{
		iVar2 |= 256;
	}
	if (bParam5)
	{
		iVar2 |= 2048;
	}
	PLAYER::SET_PLAYER_CONTROL(iVar0, false, iVar2, false);
	ENTITY::SET_ENTITY_VISIBLE(iVar1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 2, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 3, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 11, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 12, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 1, bParam0);
	ENTITY::_SET_ENTITY_CARRYING_FLAG(iVar1, 0, bParam0);
	if (bParam1)
	{
		PLAYER::SET_PLAYER_INVINCIBLE(iVar0, true);
	}
	if ((!PED::IS_PED_IN_ANY_VEHICLE(iVar1, true) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_OBJECT(iVar1)) && !ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(iVar1))
	{
		if (bParam2)
		{
			ENTITY::SET_ENTITY_COLLISION(iVar1, false, false);
			ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(iVar1, false, false);
			ENTITY::FREEZE_ENTITY_POSITION(iVar1, true);
		}
	}
	if (bParam3 && !PED::IS_PED_FATALLY_INJURED(iVar1))
	{
		if (TASK::_0x9FF5F9B24E870748(iVar1))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(iVar1, false, !bParam6);
		}
	}
}

void func_236(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_275(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::SET_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

void func_237(int iParam0)
{
	int iVar0;
	int iVar1;

	if (!func_275(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	MISC::CLEAR_BIT(&(Global_1903834.f_496[iVar0]), iVar1);
}

float func_238(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2.317975E+26f;
		case 1:
			return -2.375644E-23f;
		case 2:
			return -1.95052E+37f;
		case 3:
			return 7.071394E+19f;
		case 4:
			return -9.887349E-38f;
		default:
			break;
	}
	return -7.582641E-32f;
}

void func_239(float fParam0, float fParam1, float fParam2, int iParam3)
{
	func_276();
	Global_1297394.f_1.f_2 = fParam0;
	Global_1297394.f_1.f_3 = fParam1;
	Global_1297394.f_1.f_4 = fParam2;
	Global_1297394.f_1.f_1 = iParam3;
}

bool func_240(vector3 vParam0, Vector3* vParam3, float* fParam4)
{
	var uVar0;
	int iVar1;
	int iVar2;

	uVar0 = Global_1072759.f_23824.f_383[func_277(vParam0) /*272*/];
	iVar1 = func_278(uVar0);
	if (iVar1 <= 0)
	{
		return false;
	}
	else
	{
		iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		if (func_279(uVar0, iVar2, vParam3, fParam4))
		{
			return true;
		}
	}
	return false;
}

void func_241(vector3 vParam0, float fParam3, vector3 vParam4, float fParam7, float fParam8, float fParam9, bool bParam10, float fParam11, float fParam12, int iParam13)
{
	if (func_224(255) == 4)
	{
		return;
	}
	if (func_9(vParam0))
	{
		return;
	}
	if (fParam8 < 0f && fParam9 < 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam8 == 0f && fParam9 == 0f)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (fParam9 < fParam8)
	{
		fParam8 = Global_1901671.f_51;
		fParam9 = Global_1901671.f_51.f_1;
	}
	if (bParam10)
	{
		func_229(0, 0, 0, 1);
	}
	func_165(0);
	func_165(3);
	Global_1102813.f_3909 = fParam11;
	Global_1102813.f_3910 = fParam12;
	Global_1102813.f_3911 = iParam13;
	func_230(&(Global_1102813.f_3839));
	Global_1102813.f_3839 = fParam3;
	Global_1102813.f_3839.f_5 = 1;
	Global_1102813.f_3839.f_17.f_6 = { vParam0 };
	Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
	Global_1102813.f_3839.f_17 = { fParam9, fParam9, fParam9 };
	Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
	if (fParam8 > 1f)
	{
		Global_1102813.f_3839.f_16 = 1;
		Global_1102813.f_3839.f_6.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3839.f_6.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_6 = { fParam8, fParam8, fParam8 };
		Global_1102813.f_3839.f_6.f_9 = -2.19652E+23f;
	}
	func_231(&(Global_1102813.f_3878));
	Global_1102813.f_3878.f_6 = { vParam4 };
	Global_1102813.f_3878 = fParam7;
	Global_1102813.f_3878.f_5 = 1;
	Global_1102813.f_26.f_3341 = 0;
	Global_1102813.f_26.f_3342 = 0;
	func_232(Global_1102813.f_3839, 36);
	func_233(Global_1102813.f_3878, 36);
}

void func_242(int iParam0)
{
	if (!func_280(iParam0))
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

bool func_243(int iParam0, int iParam1)
{
	return MISC::IS_BIT_SET(Global_17418.f_2585[iParam0], iParam1);
}

bool func_244(int iParam0)
{
	if (func_246(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_245(int iParam0)
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

bool func_246(int iParam0, int iParam1)
{
	return (Global_1904398.f_33[iParam0 /*9*/].f_2 && iParam1) != 0;
}

bool func_247(int iParam0)
{
	return (Global_1572864.f_3 && iParam0) != 0;
}

bool func_248()
{
	if (!func_281())
	{
		return false;
	}
	return Global_1904398.f_8864;
}

float func_249(var uParam0)
{
	if (!func_91(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_282(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_250() - uParam0->f_1);
}

float func_250()
{
	int iVar0;

	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1148846080);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1148846080);
}

void func_251(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_252(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_253(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_254(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_255(struct<2> Param0)
{
	int iVar0;

	if (!func_87(Param0))
	{
		return -1;
	}
	iVar0 = func_283(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1072759.f_19487.f_1[iVar0 /*3*/].f_2;
}

bool func_256()
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
	if (!func_87(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

float func_257(int iParam0, bool bParam1)
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

bool func_258(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28303), iParam0))
	{
		return true;
	}
	return false;
}

bool func_259(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28302), iParam0))
	{
		return true;
	}
	return false;
}

bool func_260(int iParam0)
{
	if (SCRIPTS::_IS_PLAYER_BIT_SET_AT_INDEX(&(Global_1072759.f_28301), iParam0))
	{
		return true;
	}
	return false;
}

bool func_261(int iParam0)
{
	if (!NETWORK::NETWORK_IS_PLAYER_ACTIVE(iParam0))
	{
		func_284(iParam0);
		return false;
	}
	if (func_260(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 2)
		{
			func_285(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (NETWORK::_0x862C5040F4888741(Global_1295619.f_5, iParam0) || NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 2);
}

bool func_262(struct<2> Param0, bool bParam2)
{
	if (!func_87(Param0))
	{
		return false;
	}
	func_286(bParam2);
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

var func_263(int iParam0, int iParam1)
{
	return func_287(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 4.795139E-15f, iParam0, iParam1);
}

void func_264(int iParam0)
{
	struct<16> Var0;

	if (iParam0 < 0 || iParam0 >= 10)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1939421[iParam0 /*16*/].f_10)))
	{
		return;
	}
	Global_1939421[iParam0 /*16*/] = { Var0 };
	Global_1939421.f_161 = (Global_1939421.f_161 - 1);
	if (Global_1939421.f_161 < 0)
	{
		Global_1939421.f_161 = 0;
	}
}

bool func_265(int iParam0)
{
	return iParam0 != 0;
}

void func_266(int iParam0, int iParam1)
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

bool func_267(var uParam0, int iParam1, int iParam2)
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

void func_268(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_269(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_270(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_271(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_272()
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

void func_273(int iParam0)
{
	if (func_288(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

void func_274()
{
	if (!Global_1102813.f_16)
	{
		return;
	}
	Global_1072759.f_28644.f_5 = 1;
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_transition_sounds");
	AUDIO::_RELEASE_SOUNDSET("rdro_gamemode_generic_sounds");
}

bool func_275(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

void func_276()
{
	Global_1297394.f_1 = Global_1072759.f_28418[50 /*4*/].f_3;
	Global_1297394.f_1.f_1 = 0;
	Global_1297394.f_1.f_2 = 0;
	Global_1297394.f_1.f_3 = 0;
	Global_1297394.f_1.f_4 = 0;
}

int func_277(vector3 vParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;

	iVar0 = 0;
	iVar1 = -1;
	fVar2 = 0f;
	iVar0 = 0;
	while (iVar0 <= 14)
	{
		fVar3 = BUILTIN::VDIST(vParam0, Global_1072759.f_23824.f_383[iVar0 /*272*/].f_2);
		if (fVar3 < fVar2 || iVar1 == -1)
		{
			iVar1 = iVar0;
			fVar2 = fVar3;
		}
		iVar0++;
	}
	return iVar1;
}

int func_278(var uParam0)
{
	struct<4> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 9.201076E+18f;
	Var0.f_3 = uParam0;
	return DATAFILE::_PARSEDDATA_RQ_GET_NUM_NODES(&Var0);
}

bool func_279(var uParam0, int iParam1, Vector3* vParam2, float* fParam3)
{
	struct<5> Var0;

	Var0 = Global_1072759.f_23824.f_383.f_4085;
	Var0.f_2 = 3.36884E-33f;
	Var0.f_3 = uParam0;
	Var0.f_4 = iParam1;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 2.195196E+18f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam2, &Var0);
		Var0.f_2 = -7.369599E+36f;
		DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam3, &Var0);
		return true;
	}
	return false;
}

bool func_280(int iParam0)
{
	return func_190(iParam0, 2);
}

bool func_281()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_282(var uParam0)
{
	return func_181(*uParam0, 2);
}

int func_283(struct<2> Param0)
{
	vector3 vVar0;
	vector3 vVar3;
	int iVar6;
	int iVar7;
	int iVar8;

	if (Global_1072759.f_19487 <= 0)
	{
		return -1;
	}
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	vVar3.f_1 = -1;
	vVar3.f_2 = -1;
	if (!func_262(Param0, &vVar0))
	{
		return -1;
	}
	iVar6 = 0;
	iVar7 = (Global_1072759.f_19487 - 1);
	while (iVar6 <= iVar7)
	{
		iVar8 = (iVar6 + ((iVar7 - iVar6) / 2));
		func_262(Global_1072759.f_19487.f_1[iVar8 /*3*/], &vVar3);
		if (vVar3.x > vVar0.x)
		{
			iVar7 = (iVar8 - 1);
		}
		else if (vVar3.x < vVar0.x)
		{
			iVar6 = iVar8 + 1;
		}
		else
		{
			return iVar8;
		}
	}
	return -1;
}

void func_284(int iParam0)
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
	func_289(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 0;
}

void func_285(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	var uVar4;
	bool bVar5;
	struct<8> Var6;

	if (Global_1572887.f_17 != 0 || Global_1572887.f_14 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (func_290(iVar0, iParam1, iParam5))
	{
		iVar1 = 1;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] != 2)
	{
		if (!Global_1295619.f_17[iVar0])
		{
			func_284(iParam0);
			return;
		}
		NETWORK::_0x51951DE06C0D1C40(iParam0, 2);
		Global_1072759.f_21353.f_1[iVar0 /*8*/] = 2;
		iVar1 = 1;
	}
	if (iParam2 && iVar1)
	{
		iVar2 = 0;
		while (iVar2 <= 31)
		{
			iVar3 = PLAYER::INT_TO_PLAYERINDEX(iVar2);
			if (iVar2 != Global_1295619 && NETWORK::NETWORK_IS_PLAYER_ACTIVE(iVar3))
			{
				if (GANG::_NETWORK_IS_IN_MY_GANG(iVar3))
				{
					if (bParam3)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
				}
				else if (GANG::NETWORK_IS_IN_SAME_GANG(iVar3, iParam0))
				{
					if (bParam4)
					{
						SCRIPTS::_SET_PLAYER_BIT_AT_INDEX(&uVar4, iVar2);
						bVar5 = true;
					}
					if (iVar2 != iVar0)
					{
						func_285(iVar3, iParam1, 0, 1, 0, 0);
					}
				}
			}
			iVar2++;
		}
		if (bVar5)
		{
			Var6.f_6 = 255;
			Var6.f_4 = 1;
			Var6.f_6 = iParam0;
			Var6.f_7 = iParam1;
			func_291(&Var6, uVar4);
		}
	}
}

void func_286(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

var func_287(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
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
	if (func_292() != 0)
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
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
			case joaat("VOLSPHERE"):
				iVar8 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
			case joaat("VOLBOX"):
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_293());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_294(PLAYER::GET_PLAYER_TEAM(iVar5)));
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
			if (func_295(iVar2))
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
				if (iVar9 & 8192 != 0 && func_224(iVar2) != 1)
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
					if (!func_296(iVar10))
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

bool func_288(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

void func_289(int iParam0)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 != 0)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = 0;
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = 0;
	}
}

bool func_290(int iParam0, int iParam1, int iParam2)
{
	if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 < iParam1)
	{
		if (iParam2 != 0)
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = iParam2;
		}
		else
		{
			Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		}
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 = iParam1;
		return true;
	}
	else if (Global_1072759.f_21353.f_1[iParam0 /*8*/].f_1 == iParam1)
	{
		Global_1072759.f_21353.f_1[iParam0 /*8*/].f_2 = Global_1295619.f_16;
		return true;
	}
	return false;
}

void func_291(var uParam0, var uParam1)
{
	if (!SCRIPTS::_IS_ANY_PLAYER_BIT_SET(&uParam1))
	{
		return;
	}
	*uParam0 = 186;
	uParam0->f_1 = PLAYER::PLAYER_ID();
	uParam0->f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, uParam0, 8, 2, &uParam1);
	func_297(*uParam0);
}

int func_292()
{
	return Global_1051645.f_12;
}

char* func_293()
{
	return "unnamed";
}

int func_294(int iParam0)
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

bool func_295(int iParam0)
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return func_10(36, iParam0);
}

bool func_296(int iParam0)
{
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return false;
	}
	if (func_259(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) != 1)
		{
			func_298(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1295619.f_5, iParam0) == 1;
}

void func_297(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
}

void func_298(int iParam0)
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
		func_284(iParam0);
		return;
	}
	if (Global_1072759.f_21353.f_1[iVar0 /*8*/] == 1)
	{
		return;
	}
	func_289(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1072759.f_21353.f_1[iVar0 /*8*/] = 1;
}

