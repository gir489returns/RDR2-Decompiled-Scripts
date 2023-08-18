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
	struct<28> Local_19 = { 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_47 = 0;
	int iLocal_48 = 0;
	int iLocal_49 = 0;
	int iLocal_50 = 0;
	int iLocal_51 = 0;
	int iLocal_52 = 0;
	int iLocal_53 = 0;
	int iLocal_54 = 0;
	int iLocal_55 = 0;
	int iLocal_56 = 0;
	int iLocal_57 = 0;
	int iLocal_58 = 0;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	int iLocal_64 = 0;
	int iLocal_65 = 0;
	int iLocal_66 = 0;
	int iLocal_67 = 0;
	int iLocal_68 = 0;
	int iLocal_69 = 0;
	int iLocal_70 = 0;
	int iLocal_71 = 0;
	int iLocal_72 = 0;
	int iLocal_73 = 0;
	int iLocal_74 = 0;
	int iLocal_75 = 0;
	int iLocal_76 = 0;
	int iLocal_77 = 0;
	int iLocal_78 = 0;
	int iLocal_79 = 0;
	int iLocal_80 = 0;
	int iLocal_81 = 0;
	int iLocal_82 = 0;
	int iLocal_83 = 0;
	int iLocal_84 = 0;
	int iLocal_85 = 0;
	int iLocal_86 = 0;
	var uLocal_87 = 0;
	int iLocal_88 = 0;
	int iLocal_89 = 0;
	int iLocal_90 = 0;
	int iLocal_91 = 0;
	int iLocal_92[13] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	char* sLocal_106 = NULL;
	int iLocal_107 = 0;
	int iLocal_108 = 0;
	int iLocal_109 = 0;
	int iLocal_110 = 0;
	var uLocal_111 = 0;
	int iLocal_112 = 0;
	int iLocal_113 = 0;
	int iLocal_114 = 0;
	int iLocal_115 = 0;
	int iLocal_116 = 0;
	int iLocal_117 = 0;
	int iLocal_118 = 0;
	int iLocal_119 = 0;
	int iLocal_120 = 0;
	bool bLocal_121 = false;
	int iLocal_122 = 0;
	int iLocal_123 = 0;
	int iLocal_124[7] = { 0, 0, 0, 0, 0, 0, 0 };
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	var uLocal_152 = 0;
	var uLocal_153 = 0;
	var uLocal_154 = 0;
	var uLocal_155 = 0;
	var uLocal_156 = 0;
	var uLocal_157 = 0;
	var uLocal_158 = 0;
	var uLocal_159 = 0;
	var uLocal_160 = 0;
	int iLocal_161[6] = { 0, 0, 0, 0, 0, 0 };
	bool bLocal_168 = false;
	bool bLocal_169 = false;
	int iLocal_170 = 0;
	int iLocal_171 = 0;
	int iLocal_172 = 0;
	int iLocal_173 = 0;
	int iLocal_174 = 0;
	int iLocal_175 = 0;
	int iLocal_176 = 0;
	bool bLocal_177 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;

	fLocal_14 = 1f;
	fLocal_15 = 1f;
	iLocal_120 = -1;
	iLocal_170 = -1;
	iLocal_171 = 1;
	iLocal_172 = 20000;
	iLocal_175 = vScriptParam_0.x;
	iLocal_173 = vScriptParam_0.z;
	bLocal_177 = false;
	if (Global_1901671.f_2.f_26 > 0)
	{
		func_1();
	}
	func_2();
	func_3();
	iLocal_174 = MISC::GET_GAME_TIMER();
	iVar0 = 0;
	while (func_4())
	{
		if (MISC::GET_GAME_TIMER() > iLocal_174)
		{
			iLocal_174 = 0;
			func_5(iLocal_175, &iLocal_173);
			switch (iLocal_173)
			{
				case 0:
					if (Global_1901671.f_2.f_26 > 0)
					{
						iLocal_176 = (MISC::GET_GAME_TIMER() + Global_1901671.f_2.f_26);
						iLocal_173 = 1;
					}
					else
					{
						iLocal_173 = 2;
					}
					break;
				case 1:
					if (!func_1() || iLocal_176 < MISC::GET_GAME_TIMER())
					{
						bLocal_177 = false;
						iLocal_173 = 2;
					}
					break;
				case 2:
					func_6(iLocal_175);
					func_7();
					func_8();
					if (func_10(func_9(iLocal_175)))
					{
						func_11(func_9(iLocal_175), 4);
					}
					LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), func_12(iLocal_175));
					Global_1896644 = -1;
					iLocal_176 = (iLocal_172 + MISC::GET_GAME_TIMER());
					iLocal_173 = 3;
					break;
				case 3:
					if (func_13() || iLocal_176 < MISC::GET_GAME_TIMER())
					{
						func_14(iLocal_175);
						iLocal_176 = (MISC::GET_GAME_TIMER() + iLocal_172);
						iLocal_173 = 4;
					}
					break;
				case 4:
					if (func_15(iLocal_175) || iLocal_176 < MISC::GET_GAME_TIMER())
					{
						func_16(iLocal_175);
						iLocal_176 = (MISC::GET_GAME_TIMER() + iLocal_172);
						iLocal_173 = 5;
					}
					break;
				case 5:
					if (func_17(iLocal_175) || iLocal_176 < MISC::GET_GAME_TIMER())
					{
						func_18(iLocal_175);
						iLocal_176 = (iLocal_172 + MISC::GET_GAME_TIMER());
						iLocal_173 = 7;
					}
					break;
				case 7:
					if (func_10(func_9(iLocal_175)))
					{
						if (func_19(func_9(iLocal_175), 4) && !iLocal_176 < MISC::GET_GAME_TIMER())
						{
						}
						else
						{
							if (func_20(iLocal_175) || iLocal_176 < MISC::GET_GAME_TIMER())
							{
								func_21(iLocal_175, 4);
								iLocal_176 = (MISC::GET_GAME_TIMER() + iLocal_172);
								iLocal_173 = 8;
							}
							Jump @822; //curOff = 538
							func_22(iLocal_175);
							func_23();
							if (!func_24(4105, 0))
							{
								func_25();
							}
							func_26();
							func_27();
							func_28();
							func_29(iLocal_175);
							func_30(iLocal_175);
							func_31();
							func_32();
							iLocal_173 = 9;
							Jump @822; //curOff = 606
							func_33(iLocal_175);
							func_34();
							iLocal_173 = 10;
							Jump @822; //curOff = 623
							func_35(&Global_1896698);
							func_36(iLocal_175, &Global_1896698);
							iLocal_173 = 11;
							Jump @822; //curOff = 648
							func_37(iLocal_175);
							func_21(iLocal_175, 8);
							if (func_38(32))
							{
								if (CAM::IS_SCREEN_FADED_OUT())
								{
									CAM::DO_SCREEN_FADE_IN(500);
								}
								func_39(32);
							}
							iLocal_173 = 12;
							Jump @822; //curOff = 698
							if (func_40(iLocal_175))
							{
								iLocal_174 = MISC::GET_GAME_TIMER() + 1000;
							}
							func_41(&Global_1896698, iLocal_175);
							func_42(iLocal_175);
							func_21(iLocal_175, 8);
							if (func_43())
							{
								PED::_SET_AMBIENT_HUMAN_DENSITY_MULTIPLIER_THIS_FRAME(0f);
							}
							PATHFIND::SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_175 /*36*/].f_11);
							if (Global_1887363[iLocal_175 /*36*/].f_12 > 0f)
							{
								PED::_SET_SCENARIO_PED_RANGE_MULTIPLIER_THIS_FRAME(Global_1887363[iLocal_175 /*36*/].f_12);
							}
							Jump @822; //curOff = 799
							func_8();
							func_44(iVar0);
							iVar0++;
						}
						if (Global_1887363[iLocal_175 /*36*/].f_13 == 0)
						{
						}
						else
						{
							PED::_SET_SCENARIO_PED_DENSITY_THIS_FRAME(Global_1887363[iLocal_175 /*36*/].f_13);
						}
						BUILTIN::WAIT(0);
						iVar0 = 0;
						while (!func_44(iVar0))
						{
							iVar0++;
							BUILTIN::WAIT(0);
						}
						if (func_45() == -1)
						{
						}
						else
						{
							func_46();
						}
						SCRIPTS::TERMINATE_THIS_THREAD();
					}
					default:
						break;
			}
		}
	}
}

bool func_1()
{
	if (!bLocal_177)
	{
		if (Global_1051194)
		{
			bLocal_177 = true;
			return true;
		}
		if (func_47() && func_48())
		{
			bLocal_177 = true;
			return true;
		}
		return false;
	}
	if (Global_1051194)
	{
		return true;
	}
	if (func_48())
	{
		return true;
	}
	bLocal_177 = false;
	return false;
}

void func_2()
{
	int iVar0;

	if (func_45() != -1)
	{
		MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
		MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(true);
	}
	else if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		if (NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
		}
		iVar0 = 0;
		while (!func_44(iVar0))
		{
			iVar0++;
			BUILTIN::WAIT(0);
		}
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

void func_3()
{
}

bool func_4()
{
	if (func_45() != -1)
	{
		return !func_49(1, 1);
	}
	return true;
}

void func_5(int iParam0, int iParam1)
{
	if (!func_38(16))
	{
		return;
	}
	if (Global_1893611.f_7 == 0)
	{
		func_39(16);
		return;
	}
	if (!func_50(iParam0))
	{
		Global_1893611.f_7 = 0;
		func_39(16);
		return;
	}
	if (func_51(8))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 8;
			return;
		}
		else if (*iParam1 != 8)
		{
			func_52(8);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(2))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 4;
			return;
		}
		else if (*iParam1 != 4)
		{
			func_52(2);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(16))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 9;
			return;
		}
		else if (*iParam1 != 9)
		{
			func_52(16);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(4))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 7;
			return;
		}
		else if (*iParam1 != 7)
		{
			func_52(4);
			*iParam1 = 12;
			return;
		}
	}
	if (func_51(1))
	{
		if (*iParam1 == 12)
		{
			*iParam1 = 3;
			return;
		}
		else if (*iParam1 != 3)
		{
			func_52(1);
			*iParam1 = 12;
			return;
		}
	}
}

void func_6(int iParam0)
{
}

void func_7()
{
	if (!Global_1102813.f_3967)
	{
		Global_1102813.f_3967 = 1;
	}
}

void func_8()
{
	if (!Global_1072759.f_23824)
	{
		Global_1072759.f_23824 = 1;
	}
}

int func_9(int iParam0)
{
	if (iParam0 < 0)
	{
		return -1;
	}
	else if (iParam0 <= 10)
	{
		return 0;
	}
	else if (iParam0 <= 30)
	{
		return 1;
	}
	else if (iParam0 <= 34)
	{
		return 2;
	}
	else if (iParam0 <= 38)
	{
		return 3;
	}
	else if (iParam0 <= 41)
	{
		return 4;
	}
	else if (iParam0 <= 52)
	{
		return 7;
	}
	else if (iParam0 <= 61)
	{
		return 6;
	}
	else if (iParam0 <= 66)
	{
		return 8;
	}
	else if (iParam0 <= 81)
	{
		return 9;
	}
	else if (iParam0 <= 98)
	{
		return 10;
	}
	else if (iParam0 <= 112)
	{
		return 11;
	}
	else if (iParam0 <= 119)
	{
		return 12;
	}
	else if (iParam0 <= 122)
	{
		return 13;
	}
	else if (iParam0 <= 126)
	{
		return 14;
	}
	else if (iParam0 <= 134)
	{
		return 15;
	}
	else if (iParam0 <= 138)
	{
		return 16;
	}
	return -1;
}

bool func_10(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

void func_11(int iParam0, int iParam1)
{
	Global_1896646[iParam0 /*2*/] = (Global_1896646[iParam0 /*2*/] || iParam1);
}

float func_12(int iParam0)
{
	float fVar0;

	switch (iParam0)
	{
		case 40:
			fVar0 = -3.898718E+37f;
			break;
		case 87:
			fVar0 = -0.0002522367f;
			break;
		case 74:
			fVar0 = -2.417579E+32f;
			break;
		case 66:
			fVar0 = -1.531462E+25f;
			break;
		case 116:
			fVar0 = 0.0001848368f;
			break;
		case 5:
			fVar0 = -4526542f;
			break;
		case 37:
			fVar0 = 6.821675E-21f;
			break;
		case 111:
			fVar0 = 0.006809331f;
			break;
		case 26:
			fVar0 = -2.420808E-17f;
			break;
		case 81:
			fVar0 = -1.686717E+25f;
			break;
		case 98:
			fVar0 = 1.381067E-28f;
			break;
		case 60:
			fVar0 = 6.533019E+26f;
			break;
		case 83:
			fVar0 = 2.288139E+27f;
			break;
		default:
			fVar0 = 0;
			break;
	}
	return fVar0;
}

bool func_13()
{
	int iVar0;

	iLocal_48 = Global_1887363[5 /*36*/].f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_48, 3);
	func_53(iLocal_48, 0, 0);
	iLocal_49 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2714.648f, -1285.207f, 50.173f, 0f, 0f, 25f, 12.259f, 9.427f, 4.002f, "SDN-m_volGunsmith");
	iLocal_50 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2716.798f, -1284.737f, 49.46929f, 0f, 0f, -155.898f, 3.382181f, 1.741518f, 1.678f, "SDN-m_volGunsmithPrompt");
	iLocal_51 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.924f, -1281.781f, 49.68018f, 0f, 0f, 27.50082f, 2.604466f, 8.359895f, 3.813055f, "SDN-m_volGunsmithPorch");
	iLocal_78 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2713.302f, -1287.348f, 55.73129f, 0f, 0f, -154.72f, 21.799f, 13.459f, 15.193f, "SDN-m_volGunsmithOwned");
	VOLUME::_0xB469CFD9E065EB99(iLocal_49, 10016);
	iLocal_52 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGunsmithOfflimits Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_52, 2716.952f, -1287.544f, 49.46929f, 0f, 0f, -155.898f, 4.360659f, 1.741518f, 1.678f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_52, 2710.5f, -1287.142f, 50.21229f, 0f, 0f, 25f, 3.074021f, 9.427f, 3.163f);
	iLocal_64 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2553.141f, -1164.299f, 55.07949f, 0f, 0f, -90.293f, 18.31693f, 12.58955f, 4.791f, "SDN-m_volTailorOwner");
	iLocal_65 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2554.85f, -1169.459f, 53.92649f, 0f, 0f, 89.804f, 2.031777f, 3.197688f, 2.484f, "SDN-m_volTailorPrompt");
	iLocal_66 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2555.342f, -1166.591f, 53.92649f, 0f, 0f, 89.804f, 1.641972f, 2.211613f, 2.484f, "SDN-m_volTailorOfflimits");
	iLocal_67 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volTailorPARENT");
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_67, iLocal_64);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_67, iLocal_66);
	VOLUME::_0xB469CFD9E065EB99(iLocal_67, 10019);
	iLocal_56 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2826.879f, -1316.782f, 47.5f, 0f, 0f, 49.75f, 17.8f, 7.231f, 6.978f, "SDN-m_volGeneralStore");
	iLocal_57 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2825.75f, -1318.25f, 46.5f, 0f, 0f, 140f, 3f, 1f, 2f, "SDN-m_volGeneralStorePrompt");
	iLocal_59 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2824.25f, -1319.25f, 46.25f, 0f, 0f, 140f, 4f, 1f, 1.25f, "SDN-m_volGeneralStoreOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_56, 10014);
	iLocal_58 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volGeneralStorePorch Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_58, 2831.25f, -1320.236f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 6.642959f, 3.509136f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_58, 2822.573f, -1312.954f, 46.7499f, 0f, 0f, -39.9993f, 3.672313f, 9.205815f, 3.509136f);
	iLocal_61 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.185f, -1180.077f, 54.07192f, 0f, 0f, 0f, 9.196758f, 6.114635f, 3.576711f, "SDN-m_volBarberShop");
	iLocal_62 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2655.359f, -1180.46f, 53.28771f, 0f, 0f, 0f, 6.583728f, 4.267162f, 2.03105f, "SDN-m_volBarberPrompt");
	iLocal_63 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volBarberPorch Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_63, 2661.405f, -1180.077f, 53.38316f, 0f, 0f, 0f, 2.748698f, 7.856023f, 3.576711f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_63, 2648.97f, -1178.597f, 53.38316f, 0f, 0f, 0f, 2.748698f, 9.535893f, 3.576711f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_61, 10006);
	iLocal_81 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeOwner");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_81, 2748.327f, -1397.359f, 46.234f, 0f, 0f, 24.583f, 4.62f, 3.944f, 2.741917f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_81, 2746.954f, -1394.676f, 46.234f, 0f, 0f, 24.583f, 2.197f, 2.146f, 2.742f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_81, 2749.686f, -1400.236f, 46.234f, 0f, 0f, 24.583f, 1.971f, 2.636f, 2.742f);
	iLocal_82 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficePrompt Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_82, 2747.206f, -1395.105f, 46.214f, 0f, 0f, 22.919f, 1.779f, 1.111f, 2.494324f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_82, 2749.444f, -1399.819f, 46.214f, 0f, 0f, 22.919f, 1.767f, 1.472f, 2.494324f);
	iLocal_83 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.29f, -1397.222f, 46.214f, 0f, 0f, 25.95989f, 4.162762f, 3.173493f, 2.117f, "SDN - m_volPostOfficeOFF");
	VOLUME::_0xB469CFD9E065EB99(iLocal_81, 10018);
	iLocal_84 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficeMP");
	iLocal_85 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2748.184f, -1397.076f, 46.146f, 0f, 0f, 22.919f, 3.426f, 7.813f, 4.22f, "SDN - m_volPostOfficePromptMP");
	iLocal_86 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volPostOfficeNoCombat Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_86, 2739.465f, -1399.159f, 45.69f, 0f, 0f, 24.504f, 22.224f, 9.58f, 6.554f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_86, 2737.356f, -1394.378f, 47.02f, 0f, 0f, 24.737f, 5.686f, 1.805f, 3.673f);
	if (func_45() == -1)
	{
		iLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2503.034f, -1450.197f, 48.076f, 0f, 0f, 0f, 6.704965f, 28.73499f, 6.621f, "SDN Horse Shop - m_volHorseShop");
		iLocal_70 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN Horse Shop - m_volHorseShopOutsideDoor Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_70, 2502.26f, -1435.017f, 45.37257f, 0f, 0f, 0f, 3.869675f, 2.62296f, 7.47769f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_70, 2499.42f, -1450.354f, 45.37257f, 0f, 0f, -90f, 3.869675f, 2.62296f, 7.47769f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_70, 2502.348f, -1465.799f, 45.37257f, 0f, 0f, 180f, 3.869675f, 2.62296f, 7.47769f);
		func_54(9, iLocal_70);
		VOLUME::_0xB469CFD9E065EB99(iLocal_69, 10017);
		iLocal_110 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volIndGuardDogOwner");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_110, 2597.014f, -1453.302f, 47.84009f, 0f, 0f, -35.27248f, 13.32053f, 38.94104f, 13.77784f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_110, 2594.038f, -1466.641f, 47.84009f, 0f, 0f, 89.60727f, 12.63065f, 19.94241f, 13.77784f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_110, 2581.743f, -1471.003f, 47.84009f, 0f, 0f, 89.60727f, 3.533205f, 8.003942f, 13.77784f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_110, 2582.623f, -1467.664f, 47.84009f, 0f, 0f, -35.60653f, 6.672962f, 8.003942f, 13.77784f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_110, 2593.001f, -1445.323f, 47.84009f, 0f, 0f, 55.78225f, 7.109884f, 5.264667f, 13.77784f);
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.735f, -1295.139f, 53.79828f, 0f, 0f, 25.62823f, 16.5815f, 20.83208f, 5.240817f, "Saint Denis - m_volBank");
		iLocal_72 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.218f, -1292.576f, 52.36508f, 0f, 0f, 25.62823f, 2.356534f, 1.366835f, 2.623696f, "Saint Denis - m_volBankPrompt");
		iLocal_73 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2645.618f, -1295.548f, 51.55162f, 0f, 0f, 0f, 2.535386f, 2.647964f, 2.654926f, "Saint Denis - m_volBankShopOfflimits Agg");
		iLocal_115 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN - m_volRiverBoatGuardArea");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_115, 2788.009f, -1499.647f, 45.91699f, 0f, 0f, -59.52556f, 28.86597f, 15.03598f, 14.77563f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_115, 2807.164f, -1500.584f, 45.91699f, 0f, 0f, 179.899f, 28.86597f, 15.03598f, 14.77563f);
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		VOLUME::_0xB469CFD9E065EB99(iLocal_71, 10005);
		iLocal_118 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2839.348f, -1229.419f, 47.30768f, 0f, 0f, -26.82762f, 22.30358f, 30.06492f, 16.24477f, "Saint Denis - m_volSlumsMarketHorseAvoidance");
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_118, 393217, 0, 0, -1, -1, 0);
	}
	else
	{
		iLocal_69 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2508.191f, -1449.654f, 48.41523f, 0f, 0f, 0f, 15.82893f, 29.37446f, 6.829615f, "St. Denis - m_volHorseShop");
		VOLUME::_0xB469CFD9E065EB99(iLocal_69, 10017);
		iLocal_71 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2644.397f, -1296.915f, 53.3029f, 0f, 0f, -63.95661f, 18.36461f, 16.07587f, 4.061802f, "BRL_SAINTDENIS - Bank");
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_71, 0, 0, 0, -1, -1, 0);
	}
	iLocal_53 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720.304f, -1230.25f, 51f, 0f, 0f, -90f, 10f, 8.456f, 4f, "SDN - m_volDoctor");
	iLocal_54 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2720f, -1232f, 50f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volDoctorPrompt");
	iLocal_55 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2721.5f, -1233f, 50f, 0f, 0f, 0f, 1f, 3.5f, 3f, "SDN-m_volDoctorOffLimits");
	VOLUME::_0xB469CFD9E065EB99(iLocal_53, 10011);
	iLocal_74 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2767.35f, -1417.88f, 43.96f, 0f, 0f, -35.20718f, 55.10648f, 55.98696f, 21.39363f, "SDN-m_volTrainStation");
	VOLUME::_0xB469CFD9E065EB99(iLocal_74, 10020);
	iLocal_116 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("St. Denis - m_volPhotoStudio-Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_116, 2734.174f, -1119.755f, 50.10792f, 0f, 0f, 0f, 5.762633f, 7.941937f, 4.04453f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_116, 2734.43f, -1119.7f, 40.13f, 0f, 0f, 0f, 5f, 5f, 3f);
	iLocal_117 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2734.174f, -1119.957f, 50.10792f, 0f, 0f, 0f, 5.762633f, 6.069339f, 4.04453f, "St. Denis - m_volPhotoStudioPrompt");
	iLocal_68 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2546.452f, -1301.997f, 51.59172f, 0f, 0f, 0.496382f, 18.19264f, 24.24748f, 8.938443f, "Saint Denis - m_volTheatre");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_68, 10208, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_68, 10208, 0, 0, -1, -1, 0);
	iLocal_119 = VEHICLE::ADD_ROAD_NODE_SPEED_ZONE(1159917978, -996367565, 1112775066 /* Float: 52.9f */, 1133903872 /* Float: 300f */, 3f, 3f, 0, 6f, 10f, 25f, 7.5f);
	iLocal_60 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2857.228f, -1199.688f, 47.8205f, 0f, 0f, 4.503f, 10.98f, 10.95572f, 7.601785f, "SDN - m_volFence");
	iLocal_79 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.36f, -1200.223f, 49.71552f, 0f, 0f, 4.313612f, 2.547739f, 1.659313f, 2.393255f, "SDN - m_volFencePrompt");
	iLocal_80 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2859.542f, -1202.452f, 49.78863f, 0f, 0f, 4.313612f, 2.547739f, 1.326916f, 2.393255f, "SDN - m_volFenceCounterOff");
	VOLUME::_0xB469CFD9E065EB99(iLocal_60, 10013);
	iLocal_75 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-Cemetery-Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2700.761f, -1102.983f, 50.71395f, 0f, 0f, 0.216256f, 56.07924f, 9.712024f, 9.222456f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2763.792f, -1031.355f, 46.77443f, 0f, 0f, -0.624653f, 69.38274f, 16.03568f, 7.964019f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2728.395f, -1068.828f, 46.80749f, 0f, 0f, 179.1824f, 105.5484f, 62.22727f, 8.774147f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2785.364f, -1058.214f, 46.63797f, 0f, 0f, 89.47796f, 34.10864f, 25.3308f, 7.36563f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2783.674f, -1084.674f, 47.11552f, 0f, 0f, -37.88909f, 11.44402f, 18.43804f, 3.770358f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2677.399f, -1052.453f, 45.53098f, 0f, 0f, -33.10271f, 19.00153f, 27.72343f, 8.265499f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_75, 2681.971f, -1079.012f, 45.86315f, 0f, 0f, -77.70405f, 51.40699f, 30.2015f, 14.18493f);
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_75, 2048, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_75, 2048, 0, 0, -1, -1, 0);
	func_55();
	func_56(5);
	iLocal_122 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.495f, -1309.387f, 50.70366f, 0f, 0f, 0f, 17f, 9f, 7f, "sd_police_station");
	iLocal_123 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2502.091f, -1308.705f, 47.9537f, 0f, 0f, 0f, 16.88976f, 16.00587f, 10f, "SDN - m_volLawPoliceStationLoitering");
	VOLUME::_0x3EFABB21E14A6BD1(iLocal_123, 5, 1);
	iLocal_88 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2819.564f, -1331.075f, 46.45f, 0f, 0f, 49.75f, 8.176f, 6.124f, 2.869f, "SDN-m_volButcher");
	iLocal_89 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2817.843f, -1329.871f, 46.45f, 0f, 0f, 49.75f, 2.5f, 1.877f, 2f, "SDN-m_volButcherPrompt");
	VOLUME::_0xB469CFD9E065EB99(iLocal_88, 10008);
	iLocal_90 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2696.853f, -1353.716f, 50.90947f, -0.01f, 7E-06f, 39.03817f, 25f, 9.1f, 9f, "SDN - m_volMagicLanternTheatre");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_90, 10208, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_90, 10208, 0, 0, -1, -1, 0);
	iLocal_112 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2831.335f, -1224.573f, 47.5f, 0f, 0f, 0f, 8.132f, 6.089f, 3.5f, "SDN-m_volTrapper");
	iLocal_113 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(2829.474f, -1223.242f, 46.6557f, 0f, 0f, 0f, 2.428f, 2.686f, 3f, "SDN-m_volTrapperPrompt");
	iLocal_114 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2831.088f, -1222.985f, 47.5f, 0f, 0f, 0f, 6.199f, 2.995f, 3f, "SDN-m_volTrapperOffLimits");
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iLocal_114, 10208, 0, 0, -1, -1, 0);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iLocal_114, 10208, 0, 0, -1, -1, 0);
	iLocal_91 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictLoitering Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2401.805f, -1199.688f, 50.64869f, 0f, 0f, 89.35063f, 118.7466f, 27.85054f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2404.337f, -1183.499f, 50.6487f, 0f, 0f, 89.5351f, 8.550712f, 187.7067f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2461.883f, -1136.172f, 50.64869f, 0f, 0f, 0f, 278.0189f, 27.85054f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2493.894f, -1198.237f, 50.6487f, 0f, 0f, -179.2395f, 22.47914f, 148.257f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2311.967f, -1157.098f, 50.6487f, 0f, 0f, -2.1579f, 20.14263f, 77.43121f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2450.991f, -1255.936f, 50.6487f, 0f, 0f, 74.44216f, 17.99708f, 81.91428f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2404.273f, -1283.045f, 50.6487f, 0f, 0f, 162.6364f, 27.31752f, 67.13039f, 75.92666f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_91, 2432.95f, -1310.865f, 50.6487f, 0f, 0f, 71.7864f, 17.99708f, 81.91428f, 75.92666f);
	iLocal_92[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2427.054f, -1284.265f, 49.2916f, 0f, 0f, -15.29399f, 23.856f, 58.70475f, 12.94626f, "SDN-m_volGardenDistrictTrespassing 0");
	iLocal_92[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 1 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[1], 2448.448f, -1286.899f, 49.2916f, 0f, 0f, -15.29399f, 17.29098f, 48.36654f, 18.53969f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[1], 2456.016f, -1310.996f, 49.2916f, 0f, 0f, -15.29399f, 16.53504f, 5.606594f, 18.53969f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[1], 2455.733f, -1288.545f, 49.2916f, 0f, 0f, -178.5714f, 16.65417f, 45.1132f, 18.53969f);
	iLocal_92[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 2 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[2], 2362.462f, -1272.869f, 49.2916f, 0f, 0f, -19.75965f, 60.68886f, 48.63572f, 18.53969f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[2], 2389.465f, -1278.762f, 49.2916f, 0f, 0f, 164.0191f, 13.08261f, 54.88486f, 18.53969f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[2], 2364.107f, -1246.863f, 49.2916f, 0f, 0f, -89.30434f, 15.33103f, 78.01559f, 18.53969f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[2], 2339.069f, -1267.846f, 49.2916f, 0f, 0f, -0.4259f, 28.2545f, 35.02214f, 18.52822f);
	iLocal_92[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 3 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[3], 2361.655f, -1164.18f, 49.2916f, 0f, 0f, -90.15806f, 27.47045f, 82.17483f, 20.96592f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[3], 2354.933f, -1148.675f, 49.2916f, 0f, 0f, 75.14153f, 13.61488f, 64.51537f, 20.96592f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[3], 2331.474f, -1143.846f, 49.2916f, 0f, 0f, -90.15805f, 27.47045f, 21.4971f, 20.96592f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[3], 2344.552f, -1139.157f, 49.2916f, 0f, 0f, -111.0944f, 3.614755f, 17.73002f, 20.96592f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[3], 2345.342f, -1138.515f, 49.2916f, 0f, 0f, 39.12743f, 3.614755f, 17.73002f, 20.96592f);
	iLocal_92[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 4 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[4], 2400.034f, -1058.885f, 49.2916f, 0f, 0f, 0.018814f, 55.618f, 80.51579f, 18.52822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[4], 2401.558f, -1073.348f, 49.2916f, 0f, 0f, 0.018814f, 52.17577f, 99.82372f, 18.52822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[4], 2401.558f, -1014.455f, 49.2916f, 0f, 0f, 0.018814f, 5.173525f, 9.729424f, 18.52822f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[4], 2401.313f, -1002.282f, 39.19f, 0f, 0f, 0f, 9.068625f, 9.340483f, 18.87085f);
	iLocal_92[5] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2451.604f, -1078.587f, 49.2916f, 0f, 0f, 0.018814f, 47.07628f, 90.20814f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 5");
	iLocal_92[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 6 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[6], 2488.193f, -1058.567f, 49.2916f, 0f, 0f, 0.018814f, 24.72538f, 21.73822f, 18.52822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[6], 2493.978f, -1092.539f, 49.2916f, 0f, 0f, 0.018814f, 37.74252f, 62.8319f, 18.52822f);
	iLocal_92[7] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2539.709f, -1096.017f, 49.2916f, 0f, 0f, 0.018814f, 52.81096f, 55.85768f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 7");
	iLocal_92[8] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2597.531f, -1096.083f, 49.2916f, 0f, 0f, 0.018814f, 30.5856f, 56.0564f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 8");
	iLocal_92[9] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2623.401f, -1074.223f, 49.2916f, 0f, 0f, 0.018814f, 43.08669f, 27.58172f, 18.52822f, "SDN-m_volGardenDistrictTrespassing 9");
	iLocal_92[10] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 10 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[10], 2629.527f, -1105.324f, 49.2916f, 0f, 0f, 0.018814f, 40.67762f, 37.41682f, 18.52822f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[10], 2651.13f, -1110.501f, 49.2916f, 0f, 0f, 0.018814f, 3.892076f, 27.00792f, 18.52822f);
	iLocal_92[11] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2453.628f, -1164.804f, 52.55637f, 0f, 0f, 179.9622f, 72.70865f, 27.57841f, 19.55484f, "SDN-m_volGardenDistrictTrespassing 11");
	iLocal_92[12] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volGardenDistrictTrespassing 12 Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[12], 2479.08f, -1220.485f, 52.55637f, 0f, 0f, -179.7821f, 20.63473f, 59.85671f, 19.55484f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[12], 2471.073f, -1249.139f, 52.55637f, 0f, 0f, -16.01828f, 17.98121f, 4.191609f, 19.55484f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[12], 2465.776f, -1238.28f, 52.55637f, 0f, 0f, -89.74155f, 16.83455f, 6.001091f, 19.55484f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[12], 2468.223f, -1225.058f, 52.55637f, 0f, 0f, -114.8564f, 14.11476f, 6.010783f, 19.55484f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_92[12], 2484.649f, -1251.897f, 52.55637f, 0f, 0f, 178.8598f, 9.602062f, 4.226469f, 19.55484f);
	iVar0 = 0;
	while (iVar0 < iLocal_92)
	{
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_92[iVar0], 2, 1);
		VOLUME::_0x3EFABB21E14A6BD1(iLocal_92[iVar0], 3, 1);
		iVar0++;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iLocal_107 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRegistration Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_107, 2351.493f, -1215.674f, 52.55637f, 0f, 0f, 179.9622f, 103.357f, 46.93462f, 19.55484f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_107, 2289.215f, -1216.538f, 45.98805f, 0f, 0f, 0f, 24.45309f, 6.611898f, 32.63914f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_107, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 17.01238f, 24.97074f, 32.63914f);
		iLocal_109 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedThreat Agg");
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2331.856f, -1216.377f, 44.63484f, 0f, 0f, 0f, 11.67815f, 5.418246f, 2.162155f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2337.601f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2326.144f, -1216.386f, 44.68037f, 0f, 0f, 0f, 1.159829f, 1.789089f, 1f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2379.45f, -1206.713f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2375.269f, -1216.244f, 48.15978f, 0f, 0f, 0f, 38.31001f, 18.0602f, 24.88261f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2379.45f, -1225.62f, 49.77138f, 0f, 0f, 0f, 11.96662f, 3.050557f, 10.67705f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_109, 2364.137f, -1231.286f, 48.31032f, 0f, 0f, 0f, 15.13832f, 2.382603f, 7.528201f);
		iLocal_108 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("SDN-m_volBronteGuardedRestriction Agg");
		VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_108, iLocal_109);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2351.483f, -1228.943f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 20f, 19.55484f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2351.501f, -1203.041f, 52.55637f, 0f, 0f, 179.9622f, 103.2097f, 21.08849f, 19.55484f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2327.945f, -1216.194f, 52.55637f, 0f, 0f, 179.9622f, 56.37261f, 5.997283f, 19.55484f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2289.417f, -1216.377f, 45.98805f, 0f, 0f, 0f, 22.04649f, 5.418246f, 32.63914f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2271.021f, -1217.182f, 45.98805f, 0f, 0f, 0f, 15.4733f, 22.61529f, 32.63914f);
		VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_108, 2398.721f, -1216.24f, 52.55637f, 0f, 0f, 179.9622f, 8.560711f, 5.997283f, 19.55484f);
		sLocal_106 = "BRONTE";
		LAW::_CREATE_GUARD_ZONE(sLocal_106);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_START(sLocal_106, iLocal_107);
		LAW::_SET_GUARD_ZONE_VOLUME_RESTRICTED(sLocal_106, iLocal_108);
		LAW::_SET_GUARD_ZONE_VOLUME_WARNING(sLocal_106, iLocal_108);
		LAW::_SET_GUARD_ZONE_VOLUME_THREAT(sLocal_106, iLocal_109);
		LAW::_SET_GUARD_ZONE_POSITION(sLocal_106, 2376.87f, -1216.214f, 47.3213f);
		LAW::_SET_GUARD_ZONE_VOLUME_REGISTRATION_END(sLocal_106, iLocal_107);
	}
	iLocal_170 = func_57(1160847642, -996561617, 1111139759, 0f, 0f, 0f, 1099956224 /* Float: 18f */, 1099956224 /* Float: 18f */, 1099956224 /* Float: 18f */, 1f);
	return true;
}

void func_14(int iParam0)
{
	iParam0 = iParam0;
}

bool func_15(int iParam0)
{
	iParam0 = iParam0;
	return !STREAMING::IS_LOAD_SCENE_ACTIVE();
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	func_58(0, "", "", "", "", 1160469272, -996264958, 1117736575, "SD_SINGLE_TOLL");
	func_59(9, 0, 0);
	func_59(12, 0, 0);
	func_59(19, 0, 0);
	func_60(-1.179158f, 1, 0);
	func_60(-3.514468E-28f, 1, 0);
}

bool func_17(int iParam0)
{
	int iVar0;
	vector3 vVar1;
	float fVar4;
	int iVar5;

	iVar0 = 1;
	vVar1 = { 0f, 0f, 0f };
	if (func_61(61, &iVar5, &fVar4, &vVar1) && !func_62(vVar1))
	{
		STREAMING::REQUEST_COLLISION_AT_COORD(vVar1);
		if (!ENTITY::HAS_COLLISION_LOADED_AROUND_POSITION(vVar1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_18(int iParam0)
{
	iParam0 = iParam0;
}

bool func_19(int iParam0, int iParam1)
{
	return (Global_1896646[iParam0 /*2*/] && iParam1) != 0;
}

int func_20(int iParam0)
{
	return func_63(iParam0, -1, -1, 0);
}

void func_21(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] || iParam1);
	}
	else
	{
		Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] || iParam1);
	}
}

void func_22(int iParam0)
{
	iParam0 = iParam0;
}

void func_23()
{
}

bool func_24(int iParam0, bool bParam1)
{
	if (func_64(iParam0))
	{
		return true;
	}
	if (!bParam1)
	{
		if (func_65(5000))
		{
			return true;
		}
	}
	switch (func_67(func_66(0)))
	{
		case -1:
			return false;
		case 2:
			if (iParam0 & 1 != 0)
			{
				return true;
			}
			break;
		case 5:
			if (iParam0 & 2 != 0)
			{
				return true;
			}
			break;
		case 3:
			if (iParam0 & 16 != 0)
			{
				return true;
			}
			break;
		case 4:
			if (iParam0 & 32 != 0)
			{
				return true;
			}
			break;
		case 7:
			if (iParam0 & 1024 != 0)
			{
				return true;
			}
			break;
	}
	return false;
}

void func_25()
{
}

void func_26()
{
	if (NETWORK::NETWORK_IS_IN_SESSION())
	{
		if (func_45() == 0)
		{
		}
	}
}

void func_27()
{
	func_68(2, 1160025927, -996583668, 1112638646, iLocal_76, 5);
	func_68(1, 1160692850, -997064416, 1111208493, iLocal_77, 5);
}

void func_28()
{
	func_69(0, 1159651731, -996126608, 1111547694, Global_1289470.f_47[0], 5);
	func_69(1, 1160244427, -995474687, 1111284559, Global_1289470.f_47[1], 5);
}

void func_29(int iParam0)
{
	func_70(0, iLocal_53, iParam0, iLocal_54, iLocal_55, 12, 0, 0, -1f, 0);
	func_71(0, -2.111303E+18f, 0, 0, 0);
	func_71(0, 4.34239E-36f, 0, 0, 0);
	func_71(0, 26.48968f, 0, 0, 0);
	func_71(0, 0.00299324f, 0, 0, 0);
	func_71(0, 5.436434E-36f, 0, 0, 0);
	func_72(0, 0);
	func_70(3, iLocal_56, iParam0, iLocal_57, iLocal_59, 4, 0, 0, -1f, 0);
	func_73(3, 8192);
	func_71(3, -2.487855E+32f, 0, 0, 0);
	func_71(3, 0.3483027f, 0, 0, 0);
	func_71(3, -5.926682E+27f, 0, 0, 0);
	func_71(3, -4.627718E+36f, 0, 0, 0);
	func_72(3, 0);
	func_70(4, iLocal_60, iParam0, iLocal_79, iLocal_80, 44, 0, 0, -1f, 0);
	func_71(4, 2.22878E+22f, 0, 0, 0);
	func_72(4, 0);
	func_70(6, iLocal_49, iParam0, iLocal_50, iLocal_52, 20, 0, 0, -1f, 0);
	func_71(6, 0.5063853f, 0, 0, 0);
	func_71(6, -355.3428f, 0, 0, 0);
	func_71(6, 9.463395E-09f, 0, 0, 0);
	func_72(6, 0);
	func_70(7, iLocal_67, iParam0, iLocal_65, iLocal_66, 4, 0, 0, -1f, 0);
	func_71(7, -2.813948E-22f, 0, 0, 0);
	func_71(7, -1.484233E+19f, 0, 0, 0);
	func_71(7, -3.939322E+08f, 0, 0, 0);
	func_72(7, 0);
	func_70(25, iLocal_122, iParam0, 0, 0, 2, 0, 0, -1f, 0);
	func_73(25, 1);
	func_73(25, 16384);
	func_73(25, 8192);
	func_73(25, 1.084202E-19f);
	func_70(18, iLocal_116, iParam0, iLocal_117, 0, 524290, 0, 0, -1f, 0);
	func_71(18, 1.678735E-34f, 0, 0, 0);
	func_71(18, 3.462305f, 0, 0, 0);
	func_72(18, 0);
	func_70(36, Global_1289470.f_47[Global_1289470.f_45], 5, Global_1289470.f_50[Global_1289470.f_45], 0, 2, 0, 0, -1f, 0);
	func_70(9, iLocal_69, iParam0, 0, 0, 2, 1, 0, -1f, 0);
	func_73(9, 1.084202E-19f);
	func_73(9, 8388608);
	func_73(9, 1);
	func_73(9, 16384);
	func_73(9, 32768);
	func_73(9, 8192);
	func_73(9, 4);
	func_73(9, 2.350989E-38f);
	func_73(9, 1.504633E-36f);
	if (!func_74() && func_75())
	{
		func_71(9, 1.960579E-28f, 0, 0, 0);
		func_71(9, -1.633607E-17f, 0, 0, 0);
		func_71(9, 7.169952E-13f, 0, 0, 0);
		func_71(9, 1.026657E-30f, 0, 0, 0);
		func_71(9, 1271289f, 0, 0, 0);
		func_71(9, 4.096494E+11f, 0, 0, 0);
	}
	else
	{
		func_71(9, 1.960579E-28f, 1f, 1, 1);
		func_71(9, -1.633607E-17f, -1f, 1, 1);
		func_71(9, 7.169952E-13f, -1f, 1, 1);
		func_71(9, 1.026657E-30f, -1f, 1, 1);
		func_71(9, 1271289f, 1f, 1, 1);
		func_71(9, 4.096494E+11f, -1f, 1, 1);
	}
	func_70(10, iLocal_88, iParam0, iLocal_89, 0, 460, 0, 0, -1f, 0);
	func_73(10, 1.084202E-19f);
	func_72(10, 0);
	func_76();
	func_77(54);
	func_77(56);
	func_70(8, iLocal_61, iParam0, iLocal_62, 0, 4098, 0, 0, -1f, 0);
	func_71(8, 2.436581E+12f, 0, 0, 0);
	func_71(8, 1.248278E+23f, 0, 0, 0);
	func_71(8, -1482694f, 0, 0, 0);
	func_71(8, -2.118754E-31f, 0, 0, 0);
	func_71(8, 4.953572E-20f, 0, 0, 0);
	func_71(8, 7.390714E-38f, 0, 0, 0);
	func_72(8, 0);
	func_70(2, iLocal_84, iParam0, iLocal_85, 0, 1277952, 0, 0, -1f, 0);
	func_72(2, 0);
	func_70(15, iLocal_112, iParam0, iLocal_113, iLocal_114, 12, 0, 0, -1f, 0);
	func_73(15, 1.084202E-19f);
	func_72(15, 0);
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_Naturalist_Camp", true, true);
	AUDIO::_SET_AMBIENT_ZONE_POSITION("AZ_Naturalist_Camp", VOLUME::GET_VOLUME_COORDS(iLocal_112), 0f);
	func_78(iParam0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	if (func_45() != -1)
	{
		return;
	}
	func_79(250, iLocal_122, 1);
	func_79(202, iLocal_78, 1);
	func_79(140, iLocal_53, 1);
	func_79(200, iLocal_56, 1);
	func_79(219, iLocal_60, 1);
	func_79(142, iLocal_67, 1);
	func_79(201, iLocal_61, 1);
	func_79(141, iLocal_81, 1);
	func_79(139, iLocal_88, 1);
	func_79(205, iLocal_69, 1);
	func_79(231, iLocal_110, 1);
	func_79(148, iLocal_115, 1);
	VOLUME::_0x4A8FEFC43FD8AC9B(iLocal_115, 3, 1);
}

void func_31()
{
}

void func_32()
{
}

void func_33(int iParam0)
{
	func_80(1f, 0f, 0f, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-0.000127636f, 0, 48, true);
	iLocal_124[0] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionAgriculturalDistrict Agg");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[0], 2434.277f, -864.2632f, 100.0153f, 0f, 0f, 99.80928f, 76.1365f, 77.5857f, 75f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[0], 2711.787f, -748.9066f, 100.009f, 0f, 0f, -19f, 136.4152f, 127.1571f, 75f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[0], 2735.065f, -887.9319f, 99.99515f, 0f, 0f, 110.7696f, 246.8316f, 261.0551f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[0], 2580.572f, -814.5414f, 100.007f, 0f, 0f, -172.8734f, 256.6486f, 158.023f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[0], 2552.832f, -875.643f, 99.99637f, 0f, 0f, 92.39069f, 246.8316f, 169.3834f, 150f);
	iLocal_124[1] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionStFrancesSlums Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[1], 2785.521f, -1056.387f, 100.0029f, 0f, 0f, 4.060894f, 91.00164f, 108.2891f, 150f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[1], 2817.182f, -1129.093f, 100.0028f, 0f, 0f, -7.581066f, 33.52557f, 40.72814f, 75f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[1], 2857.705f, -1075.989f, 100.0023f, 0f, 0f, 13.5399f, 134.8914f, 242.3996f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[1], 2706.777f, -1061.12f, 100.0029f, 0f, 0f, 0.041871f, 83.65329f, 91.41635f, 150f);
	iLocal_124[2] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMarketDistrict Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[2], 2818.136f, -1302.344f, 100.0018f, 0f, 0f, 52.15482f, 136.6019f, 105.5725f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[2], 2891.593f, -1292.117f, 99.99527f, 0f, 0f, 46.92012f, 94.54254f, 89.92535f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[2], 2839.955f, -1372.414f, 99.99564f, 0f, 0f, 46.92012f, 94.54254f, 124.4491f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[2], 2875.316f, -1240.993f, 100.0051f, 0f, 0f, 4.213234f, 159.0249f, 159.6049f, 150f);
	iLocal_124[3] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionWarehouseDistrict Agg");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2366.9f, -1476.441f, 100.0029f, 0f, 0f, -19f, 157.3157f, 152.8212f, 75f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2230.301f, -1436.293f, 100.0025f, 0f, 0f, -19f, 74.26994f, 125.4343f, 75f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2576.589f, -1518.787f, 99.99567f, 0f, 0f, 108.441f, 195.968f, 141.0048f, 150f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2545.769f, -1422.399f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2531.97f, -1414.802f, 99.99918f, 0f, 0f, -163.683f, 153.2008f, 51.76601f, 150f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[3], 2491.278f, -1621.654f, 99.99963f, 0f, 0f, -0.058653f, 90.14611f, 97.88065f, 75f);
	iLocal_124[4] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionCommercialDistrict Agg");
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2742.656f, -1277.652f, 99.99838f, 0f, 0f, 152.9659f, 35.11092f, 35.81115f, 75f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2777.891f, -1452.619f, 100.0045f, 0f, 0f, 47.08032f, 120.0883f, 101.6027f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2718.392f, -1463.461f, 99.99609f, 0f, 0f, 21.14701f, 189.0947f, 206.6733f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2504.361f, -1300.615f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2574.647f, -1299.168f, 100.0019f, 0f, 0f, 1.178798f, 82.72056f, 96.96688f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2666.968f, -1316.806f, 100.0025f, 0f, 0f, 21.48862f, 147.3396f, 167.8958f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[4], 2773.729f, -1523.972f, 99.99609f, 0f, 0f, 21.14701f, 100.9043f, 86.45067f, 150f);
	iLocal_124[5] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionOldQuarter Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2794.772f, -1168.501f, 99.99721f, 0f, 0f, -23.73808f, 40.52186f, 22.18659f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2724.767f, -1177.132f, 99.99606f, 0f, 0f, -0.344003f, 131.9037f, 145.4713f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2648.325f, -1217.937f, 99.99631f, 0f, 0f, 13.19646f, 112.413f, 48.05493f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2638.866f, -1187.82f, 99.99606f, 0f, 0f, -0.344003f, 139.1532f, 82.29633f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2559.47f, -1204.827f, 99.99649f, 0f, 0f, 91.19704f, 111.5756f, 115.1564f, 150f);
	VOLUME::_ADD_CYLINDER_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[5], 2782.788f, -1204.586f, 100.0032f, 0f, 0f, -4.684483f, 40.16883f, 52.17526f, 75f);
	iLocal_124[6] = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("m_volSDNLawRegionMansionDistrict Agg");
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[6], 2274.675f, -1210.538f, 100f, 0f, 0f, -89.39697f, 61.03426f, 73.05703f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[6], 2347.278f, -1207.533f, 100f, 0f, 0f, 0f, 116.7747f, 179.4705f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[6], 2418.939f, -1287.882f, 100f, 0f, 0f, 168.6711f, 109.4838f, 85.72875f, 152.763f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[6], 2485.194f, -1067.418f, 100f, 0f, 0f, 0f, 359.5392f, 180.9321f, 150f);
	VOLUME::_ADD_BOX_VOLUME_TO_VOLUME_AGGREGATE(iLocal_124[6], 2446.779f, -1199.126f, 100f, 0f, 0f, -89.39697f, 124.0142f, 103.0166f, 150f);
}

void func_34()
{
	if (!Global_1893611.f_186)
	{
		VEHICLE::_SET_HORSE_TRAFFIC_GROUPING_DISTRIBUTION(Global_1893611.f_182, Global_1893611.f_183, Global_1893611.f_184, Global_1893611.f_185);
	}
}

void func_35(var uParam0)
{
	int iVar0;

	if (uParam0->f_61 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		(*uParam0)[iVar0 /*3*/] = 0;
		(uParam0[iVar0 /*3*/])->f_1 = 0;
		(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
		iVar0++;
	}
	uParam0->f_61 = 0;
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	func_81(uParam1, iLocal_48, 1);
	func_81(uParam1, iLocal_49, 2);
	func_81(uParam1, iLocal_53, 2);
	func_81(uParam1, iLocal_56, 2);
	func_81(uParam1, iLocal_60, 2);
	func_81(uParam1, iLocal_67, 2);
	func_81(uParam1, iLocal_74, 10);
	func_81(uParam1, iLocal_88, 2);
}

void func_37(int iParam0)
{
	if (!func_82(iParam0))
	{
		return;
	}
	func_83();
	func_84(0, NaNf);
	func_84(2, -2.330288E+26f);
}

bool func_38(int iParam0)
{
	return (Global_1893611 && iParam0) != 0;
}

void func_39(int iParam0)
{
	Global_1893611 = (Global_1893611 - (Global_1893611 && iParam0));
}

bool func_40(int iParam0)
{
	iParam0 = iParam0;
	switch (iLocal_171)
	{
		case 0:
			func_85();
			func_86(1);
			break;
		case 1:
			func_87();
			func_86(0);
			break;
	}
	func_88(52, iLocal_86, &uLocal_87);
	func_89();
	func_90();
	if (func_91(&bLocal_169))
	{
		if (bLocal_169)
		{
			func_92(3.381074E+30f, 1);
			func_93(2.019345E-19f, 1, 0, 0, 0, 0, 0, 0);
			func_93(1.001196E-26f, 1, 0, 0, 0, 0, 0, 0);
			func_93(9.516132E-20f, 1, 0, 0, 0, 0, 0, 0);
			func_93(6.208825E-09f, 1, 0, 0, 0, 0, 0, 0);
			func_93(2.993529E+35f, 1, 0, 0, 0, 0, 0, 0);
			func_93(6.386288E+13f, 1, 0, 0, 0, 0, 0, 0);
			func_93(-1.531461E+09f, 1, 0, 0, 0, 0, 0, 0);
			func_93(1.988354E-16f, 1, 0, 0, 0, 0, 0, 0);
			func_93(-2.867131E+27f, 1, 0, 0, 0, 0, 0, 0);
			func_93(-2.881515E-38f, 1, 0, 0, 0, 0, 0, 0);
			func_94(-2.053811E+20f, 1);
			func_94(-9.369392E+10f, 1);
			func_94(-2.771816E+07f, 1);
			func_94(8.304386E+08f, 1);
			func_92(-1.676034E+38f, 1);
			func_92(2.579091E-33f, 1);
			func_92(1.300704E+08f, 1);
			func_92(5.952956E+18f, 1);
			func_92(8.56203E-07f, 1);
			func_92(220.4443f, 1);
			func_92(-9.065453E+10f, 1);
			func_92(NaNf, 1);
			func_92(3.538515E-06f, 1);
		}
	}
	return false;
}

void func_41(var uParam0, int iParam1)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;

	if ((BUILTIN::VDIST(Global_34, 0f, 0f, 0f) <= 5f || func_95(Global_1940186, 32768)) || func_95(Global_1940186, 2.350989E-38f))
	{
		return;
	}
	if (func_96(uParam0, 1))
	{
		return;
	}
	uParam0->f_63++;
	if (uParam0->f_63 < 10)
	{
		return;
	}
	uParam0->f_63 = 0;
	bVar0 = false;
	bVar1 = ((CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_IN()) || CAM::IS_SCREEN_FADING_OUT());
	bVar2 = func_97();
	iVar3 = 0;
	while (iVar3 < uParam0->f_61)
	{
		switch ((uParam0[iVar3 /*3*/])->f_1)
		{
			case 1:
				if (VOLUME::DOES_VOLUME_EXIST((*uParam0)[iVar3 /*3*/]))
				{
					if (VOLUME::IS_POINT_IN_VOLUME((*uParam0)[iVar3 /*3*/], Global_34))
					{
						if (!bVar1 && !bVar2)
						{
							if ((!func_98(uParam0[iVar3 /*3*/], 1) && func_99(iParam1)) && !func_100(iParam1, 16))
							{
								func_102(iParam1, func_101(), -1, 0, -1, 0);
								func_103(uParam0[iVar3 /*3*/], 1);
							}
							func_104(iParam1, 0);
						}
						bVar0 = true;
					}
				}
				break;
			default:
				break;
		}
		iVar3++;
	}
	func_105(bVar0);
}

int func_42(int iParam0)
{
	iParam0 = iParam0;
	return 1;
}

bool func_43()
{
	int iVar0;
	int iVar1;
	float fVar2;
	int iVar3;

	MISC::GET_CURR_WEATHER_STATE(&iVar0, &iVar1, &fVar2);
	if (fVar2 < 1061158912)
	{
		iVar3 = iVar0;
	}
	else
	{
		iVar3 = iVar1;
	}
	if (func_106(iVar3))
	{
		return true;
	}
	return false;
}

bool func_44(int iParam0)
{
	if (iParam0 == 0)
	{
		func_107();
		LAW::_SET_LAW_RBS_VOLUME(PLAYER::PLAYER_ID(), 0);
		func_21(iLocal_175, 2048);
		if (STATS::CHAL_IS_GOAL_ACTIVE(-1.042271E+15f, 0.4424044f))
		{
			switch (iLocal_175)
			{
				case 3:
				case 5:
				case 26:
				case 40:
				case 45:
				case 81:
				case 83:
				case 98:
				case 111:
				case 121:
				case 127:
				case 136:
					STATS::CHAL_ADD_GOAL_PROGRESS_INT_BY_SCORE_ID(func_108(iLocal_175, 0), 1);
					break;
			}
		}
		if (func_10(func_101()))
		{
			func_11(func_101(), 8);
		}
		func_109(iLocal_175, 4);
		func_109(iLocal_175, 8);
		func_105(0);
		if (func_45() == -1)
		{
			func_110(0);
		}
		func_111(iLocal_175);
		func_34();
		return false;
	}
	else if (func_45() == -1)
	{
		func_112(iLocal_175);
		func_113(iLocal_175);
		if (!func_114(iLocal_175, 0))
		{
			return false;
		}
	}
	else if (!func_115(iLocal_175))
	{
		return false;
	}
	SCRIPTS::TERMINATE_THIS_THREAD();
	return true;
}

int func_45()
{
	return Global_1572887.f_14;
}

void func_46()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

bool func_47()
{
	if (Global_1572887.f_260.f_3 > 0)
	{
		return true;
	}
	if (Global_1572887.f_260.f_4 != 0)
	{
		return true;
	}
	return false;
}

bool func_48()
{
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(8.360127E+26f, -1, false, 0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-4.947796E+13f, -1, false, 0))
	{
		return true;
	}
	if (NETWORK::NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(-4.200036E+09f, -1, false, 0))
	{
		return true;
	}
	return false;
}

bool func_49(bool bParam0, bool bParam1)
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

bool func_50(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 8);
}

bool func_51(int iParam0)
{
	return (Global_1893611.f_7 && iParam0) != 0;
}

void func_52(int iParam0)
{
	Global_1893611.f_7 = (Global_1893611.f_7 - (Global_1893611.f_7 && iParam0));
}

void func_53(int iParam0, int iParam1, bool bParam2)
{
	if (!VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		return;
	}
	POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 2);
	POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(iParam0, iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, 0);
	if (bParam2)
	{
		func_117(&iParam1, 8192);
	}
	POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 64 | 128 | 2 | 4 | 1, 16384, 0, -1, -1, iParam0);
}

void func_54(int iParam0, int iParam1)
{
	Global_1915643.f_3[iParam0 /*447*/].f_32 = iParam1;
}

void func_55()
{
	int iVar0;

	iLocal_76 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("volSaloonFancyInterior");
	iVar0 = VOLUME::CREATE_VOLUME_BOX(2629.396f, -1221.905f, 54.83224f, 0f, 0f, -135.58f, 3.110129f, 1.920147f, 4.694317f);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_76, iVar0);
	iVar0 = VOLUME::CREATE_VOLUME_BOX(2628.751f, -1228.086f, 54.83224f, 0f, 0f, 179.42f, 2.229593f, 11.71116f, 4.694317f);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_76, iVar0);
	iVar0 = VOLUME::CREATE_VOLUME_BOX(2635.506f, -1227.165f, 54.83224f, 0f, 0f, 179.42f, 11.64868f, 13.72192f, 4.694317f);
	VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(iLocal_76, iVar0);
	iLocal_77 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2796.705f, -1167.971f, 48.56161f, 0f, 0f, joaat("VEH_HORSEBACK@AIM@FRONT@SPECIAL@BINOCULARS@FEMALE@SWEEP_CARRY"), 13.49097f, 10.18626f, 3.324371f, "volSaloonSlumInterior");
}

void func_56(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			Global_1289470.f_47[0] = VOLUME::CREATE_VOLUME_AGGREGATE();
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(Global_1289470.f_47[0], VOLUME::CREATE_VOLUME_BOX(2548.06f, -1295.226f, 53f, 0f, 0f, 0f, 30f, 38f, 29.62f));
			VOLUME::_ADD_BOUNDS_TO_AGGREGATE_VOLUME(Global_1289470.f_47[0], VOLUME::CREATE_VOLUME_SPHERE(2538f, -1278f, 51f, 0f, 0f, 0f, 5f, 5f, 5f));
			Global_1289470.f_50[0] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2542.098f, -1282.514f, 48.21795f, 0f, 0f, 0f, 2f, 2f, 3f, "SDN-m_volTheaterStagePrompt");
			Global_1289470.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2689.602f, -1359.844f, 48.57206f, 0f, 0f, 38.71428f, 4.602314f, 8.88861f, 3.333464f, "m_volTheaterMagicInterior");
			Global_1289470.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(2686.8f, -1362.094f, 47.21417f, 0f, 0f, 0f, 2f, 2f, 3f, "m_volTheaterMagicPrompt");
			break;
		case 81:
			Global_1289470.f_47[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-348.075f, 698.609f, 117.637f, 0f, 0f, 15.5f, 7.2f, 13f, 2.973f, "m_volTheaterValentineInterior");
			Global_1289470.f_50[1] = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(-355.272f, 704.9423f, 115.9362f, 0f, 0f, 0f, 4.696677f, 8.721128f, 2.973177f, "m_volTheaterValentineProm");
			break;
	}
}

int func_57(vector3 vParam0, vector3 vParam3, vector3 vParam6, float fParam9)
{
	int iVar0;
	int iVar1;

	if (func_62(vParam0))
	{
		return -1;
	}
	if (func_62(vParam6))
	{
		return -1;
	}
	iVar1 = -1;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!func_118(iVar0))
		{
			iVar1 = iVar0;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 != -1)
	{
		Global_26690[iVar1] = VOLUME::CREATE_VOLUME_CYLINDER(vParam0, vParam3, vParam6);
		Global_26690.f_6[iVar1] = fParam9;
		return iVar1;
	}
	return -1;
}

void func_58(int iParam0, char* sParam1, char* sParam2, char* sParam3, char* sParam4, vector3 vParam5, char* sParam8)
{
	if (func_62(vParam5))
	{
		return;
	}
	Local_19 = iParam0;
	Local_19.f_6 = sParam1;
	Local_19.f_7 = sParam2;
	Local_19.f_8 = sParam3;
	Local_19.f_9 = sParam4;
	Local_19.f_11 = { vParam5 };
	Local_19.f_10 = sParam8;
	Local_19.f_15 = 1;
}

void func_59(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	if (Local_19.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_119(&iVar0, iParam0);
	func_120(&iVar0, iParam1);
	func_121(&iVar0, iParam2);
	func_122(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_19.f_5 - 1))
	{
		func_122(&(Local_19.f_1[iVar1]));
		if (Local_19.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_19.f_1[Local_19.f_5] = iVar0;
	Local_19.f_5++;
	func_123(&(Local_19.f_1), Local_19.f_5);
}

void func_60(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_124(3.417947E+15f);
			func_125(1.394477E+34f);
			func_125(0.01177266f);
			func_125(-6.601343E+20f);
			break;
		case 2016141805:
			func_125(3.417947E+15f);
			func_124(1.394477E+34f);
			func_125(0.01177266f);
			func_125(-6.601343E+20f);
			break;
		case 1010885152:
			func_125(3.417947E+15f);
			func_125(1.394477E+34f);
			func_124(0.01177266f);
			func_125(-6.601343E+20f);
			break;
		case -502324015:
			func_125(3.417947E+15f);
			func_125(1.394477E+34f);
			func_125(0.01177266f);
			func_124(-6.601343E+20f);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_125(-3.245429E+19f);
			func_125(-3.247475E+19f);
			func_125(-8.187954f);
			func_124(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_126();
			func_124(iParam0);
			break;
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_127();
			func_124(iParam0);
			break;
		case 2019386373:
			func_125(-1.021722E+15f);
			func_125(3.245267E+37f);
			func_124(1.796135E+34f);
			break;
		case -664252410:
			func_125(1.796135E+34f);
			func_125(3.245267E+37f);
			func_124(-1.021722E+15f);
			break;
		case 2109952320:
			func_125(1.796135E+34f);
			func_125(-1.021722E+15f);
			func_124(3.245267E+37f);
			break;
		case -1674179981:
			func_125(-9.285142E-28f);
			func_125(-7.477594E-28f);
			func_124(-6.023225E-22f);
			break;
		case -1835851517:
			func_125(-6.023225E-22f);
			func_125(-7.477594E-28f);
			func_124(-9.285142E-28f);
			break;
		case -1838352012:
			func_125(-6.023225E-22f);
			func_125(-9.285142E-28f);
			func_124(-7.477594E-28f);
			break;
		case -1717960576:
			func_125(2.039541E-31f);
			func_124(-1.592343E-23f);
			break;
		case 210001842:
			func_125(-1.592343E-23f);
			func_124(2.039541E-31f);
			break;
		case -150493654:
			func_125(-1.68381E-07f);
			func_125(1.057402E+28f);
			func_125(-0.005638561f);
			func_124(-2.75129E+33f);
			break;
		case -1271608261:
			func_125(-2.75129E+33f);
			func_125(1.057402E+28f);
			func_125(-0.005638561f);
			func_124(-1.68381E-07f);
			break;
		case 1846061697:
			func_125(-2.75129E+33f);
			func_125(-1.68381E-07f);
			func_125(-0.005638561f);
			func_124(1.057402E+28f);
			break;
		case -1145519186:
			func_125(-2.75129E+33f);
			func_125(-1.68381E-07f);
			func_125(1.057402E+28f);
			func_124(-0.005638561f);
			break;
		case 1766284049:
			func_125(7.384705E-29f);
			func_125(8.284682E+30f);
			func_124(1.506289E+25f);
			break;
		case 280705402:
			func_125(1.506289E+25f);
			func_125(8.284682E+30f);
			func_124(7.384705E-29f);
			break;
		case 1926308480:
			func_125(1.506289E+25f);
			func_125(7.384705E-29f);
			func_124(8.284682E+30f);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_125(3.67491E-23f);
				func_124(3.446141E+19f);
			}
			else
			{
				func_125(3.446141E+19f);
				func_125(3.67491E-23f);
			}
			break;
		case 439465264:
			if (func_128(3.446141E+19f))
			{
				if (bParam1)
				{
					func_124(3.67491E-23f);
				}
				else
				{
					func_125(3.67491E-23f);
				}
			}
			break;
		case 1822001510:
			func_125(-9.517253E-20f);
			func_124(1.484916E+27f);
			break;
		case -1612662716:
			func_125(1.484916E+27f);
			func_124(-9.517253E-20f);
			break;
		case 1306158345:
			func_125(7.177147E+31f);
			func_125(-6.897735E+30f);
			func_125(-2.123113E+24f);
			func_125(1.754884E+16f);
			func_124(4.580068E+08f);
			break;
		case 1952610440:
			func_125(4.580068E+08f);
			func_125(-6.897735E+30f);
			func_125(-2.123113E+24f);
			func_125(1.754884E+16f);
			func_124(7.177147E+31f);
			break;
		case -223469678:
			func_125(4.580068E+08f);
			func_125(7.177147E+31f);
			func_125(-2.123113E+24f);
			func_125(1.754884E+16f);
			func_124(-6.897735E+30f);
			break;
		case -404698347:
			func_125(4.580068E+08f);
			func_125(7.177147E+31f);
			func_125(-6.897735E+30f);
			func_125(1.754884E+16f);
			func_124(-2.123113E+24f);
			break;
		case 1517904467:
			func_125(4.580068E+08f);
			func_125(7.177147E+31f);
			func_125(-6.897735E+30f);
			func_125(-2.123113E+24f);
			func_124(1.754884E+16f);
			break;
		case 1376646519:
			func_125(1.619427E-05f);
			func_125(-1.802547E+23f);
			func_125(2.161028E+24f);
			func_125(8.562073E-23f);
			func_124(1.524272E+11f);
			break;
		case 931649776:
			func_125(1.524272E+11f);
			func_125(-1.802547E+23f);
			func_125(2.161028E+24f);
			func_125(8.562073E-23f);
			func_124(1.619427E-05f);
			break;
		case -434590080:
			func_125(1.524272E+11f);
			func_125(1.619427E-05f);
			func_125(2.161028E+24f);
			func_125(8.562073E-23f);
			func_124(-1.802547E+23f);
			break;
		case 1743048395:
			func_125(1.524272E+11f);
			func_125(1.619427E-05f);
			func_125(-1.802547E+23f);
			func_125(8.562073E-23f);
			func_124(2.161028E+24f);
			break;
		case 449774763:
			func_125(1.524272E+11f);
			func_125(1.619427E-05f);
			func_125(-1.802547E+23f);
			func_125(2.161028E+24f);
			func_124(8.562073E-23f);
			break;
		case -1414537028:
			func_125(1.456986E-37f);
			func_125(1.700162E+10f);
			func_125(5.439653E-37f);
			func_124(-1.249687E-12f);
			break;
		case 38162571:
			func_125(-1.249687E-12f);
			func_125(1.700162E+10f);
			func_125(5.439653E-37f);
			func_124(1.456986E-37f);
			break;
		case 1350391819:
			func_125(-1.249687E-12f);
			func_125(1.456986E-37f);
			func_125(5.439653E-37f);
			func_124(1.700162E+10f);
			break;
		case 54073871:
			func_125(-1.249687E-12f);
			func_125(1.456986E-37f);
			func_125(1.700162E+10f);
			func_124(5.439653E-37f);
			break;
		case 198200492:
			func_124(8.023405E-32f);
			func_125(-0.03129486f);
			func_125(4.826337E-37f);
			func_125(-3.517893E+29f);
			break;
		case -1124061431:
			func_125(8.023405E-32f);
			func_124(-0.03129486f);
			func_125(4.826337E-37f);
			func_125(-3.517893E+29f);
			break;
		case 52706132:
			func_125(8.023405E-32f);
			func_125(-0.03129486f);
			func_124(4.826337E-37f);
			func_125(-3.517893E+29f);
			break;
		case -259123672:
			func_125(8.023405E-32f);
			func_125(-0.03129486f);
			func_125(4.826337E-37f);
			func_124(-3.517893E+29f);
			break;
		case -919512195:
			func_124(-726455.8f);
			func_125(-5.628425E-31f);
			func_125(7.6268E-24f);
			func_125(8.041465E+22f);
			break;
		case -1925798111:
			func_124(-5.628425E-31f);
			func_125(-726455.8f);
			func_125(7.6268E-24f);
			func_125(8.041465E+22f);
			break;
		case 420709909:
			func_124(7.6268E-24f);
			func_125(-726455.8f);
			func_125(-5.628425E-31f);
			func_125(8.041465E+22f);
			break;
		case 1703426636:
			func_124(8.041465E+22f);
			func_125(-726455.8f);
			func_125(-5.628425E-31f);
			func_125(7.6268E-24f);
			break;
		case -1223121209:
			func_124(-9.098737E-06f);
			func_125(2.660481E-16f);
			break;
		case 630808005:
			func_124(2.660481E-16f);
			func_125(-9.098737E-06f);
			break;
		case 1453909576:
			func_124(9.28535E+13f);
			func_125(5.679467E+20f);
			break;
		case 1643531967:
			func_124(5.679467E+20f);
			func_125(9.28535E+13f);
			break;
		case 0:
			func_124(0);
			func_125(6.018873E-22f);
			func_125(-2.968788E-24f);
			break;
		case 473295046:
			func_124(6.018873E-22f);
			func_125(0);
			func_125(-2.968788E-24f);
			break;
		case -1738165526:
			func_124(-2.968788E-24f);
			func_125(0);
			func_125(6.018873E-22f);
			break;
		case 932909855:
			func_124(1.848634E-05f);
			func_125(2.652232E+35f);
			break;
		case 2051822093:
			func_124(2.652232E+35f);
			func_125(1.848634E-05f);
			break;
		case 405586984:
			func_124(2.232951E-24f);
			func_125(8.771058E+15f);
			func_125(-26799.71f);
			func_125(-6.010485E-09f);
			break;
		case 1509509592:
			func_124(8.771058E+15f);
			func_125(2.232951E-24f);
			func_125(-26799.71f);
			func_125(-6.010485E-09f);
			break;
		case -959357075:
			func_124(-26799.71f);
			func_125(8.771058E+15f);
			func_125(2.232951E-24f);
			func_125(-6.010485E-09f);
			break;
		case -1311865656:
			func_124(-6.010485E-09f);
			func_125(8.771058E+15f);
			func_125(-26799.71f);
			func_125(2.232951E-24f);
			break;
		case -524145696:
			if (bParam1)
			{
				func_124(-1.119322E+20f);
			}
			else
			{
				func_125(-1.119322E+20f);
			}
			func_125(1.39581E+20f);
			func_125(8.651038E-29f);
			break;
		case 282809459:
			func_124(8.651038E-29f);
			func_125(1.39581E+20f);
			func_125(-1.119322E+20f);
			break;
		case 1626481264:
			func_124(1.39581E+20f);
			func_125(-1.119322E+20f);
			func_125(8.651038E-29f);
			break;
		case 885203519:
			if (bParam1)
			{
				func_124(3.63465E-07f);
			}
			else
			{
				func_125(3.63465E-07f);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_124(-1.179158f);
			}
			else
			{
				func_125(-1.179158f);
			}
			break;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			if (bParam1)
			{
				func_124(-3.218709E+20f);
			}
			else
			{
				func_125(-3.218709E+20f);
				func_129(4.120249E-25f);
				func_129(-5.419063E-05f);
			}
			break;
		default:
			if (bParam1)
			{
				func_124(iParam0);
			}
			else
			{
				func_125(iParam0);
			}
			break;
	}
}

bool func_61(int iParam0, int* iParam1, float* fParam2, Vector3* vParam3)
{
	return func_130(iParam0, "sHash", iParam1, "fHeading", fParam2, "vPos", vParam3);
}

bool func_62(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_63(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return 1;
	}
	if (!func_82(iParam0))
	{
		return 1;
	}
	if (func_116(iParam0, 16))
	{
		return 1;
	}
	if (func_131(iParam0) && !func_132(iParam0))
	{
	}
	if (func_133(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (func_134(iParam1))
		{
			iVar0 = iParam1;
		}
		if (func_134(iParam2))
		{
			iVar1 = iParam2;
		}
		if (Global_1896644 < iVar0 || Global_1896644 > iVar1)
		{
			Global_1896644 = iVar0;
		}
		while (true)
		{
			if ((!func_131(iParam0) || func_132(iParam0)) || func_135(Global_1896644))
			{
				func_136(Global_1896644, 0);
			}
			Global_1896644++;
			iVar2++;
			if (Global_1896644 > iVar1)
			{
				Global_1896644 = -1;
				return 1;
			}
			if (iVar2 >= 10 && !bParam3)
			{
				return 0;
			}
		}
	}
	return 1;
}

bool func_64(int iParam0)
{
	return (Global_1940186 && iParam0) != 0;
}

bool func_65(int iParam0)
{
	return (MISC::GET_GAME_TIMER() - iParam0) < Global_1900595;
}

struct<2> func_66(int iParam0)
{
	return Global_1900460.f_1[iParam0 /*2*/];
}

int func_67(var uParam0, var uParam1)
{
	return uParam0;
}

void func_68(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
	if (func_62(vParam1))
	{
		return;
	}
	func_137(iParam0);
	Global_1939946.f_5[iParam0 /*11*/].f_1 = { vParam1 };
	Global_1939946.f_5[iParam0 /*11*/].f_4 = iParam4;
	Global_1939946.f_5[iParam0 /*11*/].f_5 = iParam5;
	Global_1939946.f_5[iParam0 /*11*/].f_6 = func_138(iParam5, iParam0);
}

void func_69(int iParam0, vector3 vParam1, var uParam4, int iParam5)
{
	if (func_62(vParam1))
	{
		return;
	}
	Global_1289470.f_32[iParam0 /*6*/].f_1 = { vParam1 };
	Global_1289470.f_32[iParam0 /*6*/] = uParam4;
	Global_1289470.f_32[iParam0 /*6*/].f_4 = iParam5;
	Global_1289470.f_32[iParam0 /*6*/].f_5 = func_139(iParam5, iParam0);
}

void func_70(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7, float fParam8, int iParam9)
{
	if (iParam0 == 9 && !(!func_74() && func_140()))
	{
		if (func_141(255))
		{
			if (VOLUME::IS_POINT_IN_VOLUME(iParam1, ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
			{
				func_142(1, 1);
			}
		}
	}
	MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
	func_143(iParam0, 1);
	Global_1051832.f_92[iParam0 /*75*/] = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_18 = func_144(iParam2, iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_24 = iParam1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { VOLUME::GET_VOLUME_COORDS(iParam1) };
	Global_1051832.f_92[iParam0 /*75*/].f_25 = iParam3;
	Global_1051832.f_92[iParam0 /*75*/].f_27 = iParam4;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = iParam2;
	Global_1051832.f_92[iParam0 /*75*/].f_63 = func_145(Global_1051832.f_92[iParam0 /*75*/].f_18);
	Global_1051832.f_92[iParam0 /*75*/].f_72 = iParam9;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	if (fParam8 <= 0f)
	{
		fParam8 = func_146(iParam0);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_10 = fParam8;
	Global_1051832.f_92[iParam0 /*75*/].f_14 = iParam5;
	if (bParam6)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24, 0, 0, 0, -1, -1, 0);
	}
	if (bParam7)
	{
		POPULATION::_ADD_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
		POPULATION::_ADD_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25, 0, 0, 0, -1, -1, 0);
	}
	NETWORK::_NETWORK_SPAWN_CONFIG_ADD_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	func_147(iParam0, 4);
	func_148(iParam0);
}

void func_71(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
	int iVar0;

	iVar0 = func_149(iParam0);
	if (iVar0 < 0 || iVar0 >= 15)
	{
		return;
	}
	Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0] = func_150(iParam1, 0, 0);
	if (func_151(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0]))
	{
		if (!func_152(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0]))
		{
			func_93(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar0], 0, fParam2, bParam3, 1, 0, bParam4, 0);
		}
	}
	Global_1051832.f_92[iParam0 /*75*/].f_47++;
}

int func_72(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;

	if ((func_153(iParam0, 16384) || func_153(iParam0, 32768)) || func_62(Global_1051832.f_92[iParam0 /*75*/].f_3))
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1915643.f_3[iParam0 /*447*/].f_16))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1915643.f_3[iParam0 /*447*/].f_16);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
		Global_1051832.f_92[iParam0 /*75*/].f_8 = 0;
		return 0;
	}
	iVar0 = func_144(func_154(), iParam0);
	if ((!bParam1 && func_61(iVar0, &iVar1, &fVar2, &vVar3)) || (bParam1 && func_155(iVar0, &iVar1, &fVar2, &vVar3)))
	{
		func_156(iParam0, iVar1, vVar3, fVar2, 0);
		Global_1051832.f_92[iParam0 /*75*/].f_3 = { vVar3 };
		Global_1051832.f_92[iParam0 /*75*/].f_8 = iVar1;
	}
	return Global_1051832.f_92[iParam0 /*75*/].f_6;
}

void func_73(int iParam0, int iParam1)
{
	func_157(&(Global_1051832.f_92[iParam0 /*75*/].f_49), iParam1);
}

bool func_74()
{
	if (NETWORK::_NETWORK_HAS_COMPLETED_MP_INTRO_FLOW_ON_CURRENT_SLOT())
	{
		return true;
	}
	return false;
}

bool func_75()
{
	return func_158(func_66(0));
}

void func_76()
{
	int iVar0;
	var uVar1;

	func_159(30);
	func_160(30);
	func_161(30);
	func_162(30);
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[iVar0 /*19*/].f_6);
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_6 = uVar1;
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_13))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_3654[iVar0 /*19*/].f_13);
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_13 = uVar1;
		if (MAP::DOES_BLIP_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_17))
		{
			MAP::REMOVE_BLIP(&(Global_1051832.f_3654[iVar0 /*19*/].f_17));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_8))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_8))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_8, true, true);
			}
			PED::DELETE_PED(&(Global_1051832.f_3654[iVar0 /*19*/].f_8));
		}
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_3654[iVar0 /*19*/].f_15))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_15))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_3654[iVar0 /*19*/].f_15, true, true);
			}
			PED::DELETE_PED(&(Global_1051832.f_3654[iVar0 /*19*/].f_15));
		}
		Global_1051832.f_3654[iVar0 /*19*/].f_1 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_5 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_8 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_15 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_7 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_14 = 0;
		Global_1051832.f_3654[iVar0 /*19*/].f_9 = -1;
		Global_1051832.f_3654[iVar0 /*19*/] = -1;
		iVar0++;
	}
}

void func_77(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	vector3 vVar3;
	int iVar6;
	bool bVar7;

	iVar0 = 0;
	while (iVar0 < 4 && Global_1051832.f_3654[iVar0 /*19*/] != -1)
	{
		iVar0++;
	}
	if (iVar0 == 4)
	{
		return;
	}
	Global_1051832.f_3654[iVar0 /*19*/].f_1 = 0;
	Global_1051832.f_3654[iVar0 /*19*/] = iParam0;
	if (func_61(Global_1051832.f_3654[iVar0 /*19*/], &iVar1, &fVar2, &vVar3))
	{
		Global_1051832.f_3654[iVar0 /*19*/].f_6 = func_163(iVar1, vVar3, fVar2, 0, 0, 0);
		Global_1051832.f_3654[iVar0 /*19*/].f_2 = { vVar3 };
		TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[iVar0 /*19*/].f_6, 0);
		TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[iVar0 /*19*/].f_6, 0);
	}
	iVar6 = func_164(Global_1051832.f_3654[iVar0 /*19*/]);
	bVar7 = iVar6 != -1;
	if (bVar7)
	{
		Global_1051832.f_3654[iVar0 /*19*/].f_9 = iVar6;
		if (func_61(iVar6, &iVar1, &fVar2, &vVar3))
		{
			Global_1051832.f_3654[iVar0 /*19*/].f_13 = func_163(iVar1, vVar3, fVar2, 0, 0, 0);
			Global_1051832.f_3654[iVar0 /*19*/].f_10 = { vVar3 };
			TASK::_0xA7479FB665361EDB(Global_1051832.f_3654[iVar0 /*19*/].f_13, 0);
			TASK::_0xE69FDA40AAC3EFC0(Global_1051832.f_3654[iVar0 /*19*/].f_13, 0);
		}
	}
	Global_1051832.f_3654[iVar0 /*19*/].f_5 = func_145(Global_1051832.f_3654[iVar0 /*19*/]);
	if (!func_165(30, 4))
	{
		func_147(30, 4);
		func_148(30);
	}
}

void func_78(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051832.f_4447[iVar0 /*8*/] = -1;
		Global_1051832.f_4447[iVar0 /*8*/].f_3 = 0;
		Global_1051832.f_4447[iVar0 /*8*/].f_4 = 0;
		iVar0++;
	}
	switch (iParam0)
	{
		case 40:
			func_166(16);
			func_166(17);
			func_166(18);
			func_147(32, 4);
			func_148(32);
			break;
		case 87:
			func_166(132);
			func_147(32, 4);
			func_148(32);
			break;
		case 111:
			func_166(38);
			func_147(32, 4);
			func_148(32);
			break;
		case 5:
			func_166(59);
			func_166(58);
			func_147(32, 4);
			func_148(32);
			break;
		case 26:
			func_166(72);
			func_166(73);
			func_147(32, 4);
			func_148(32);
			break;
	}
}

int func_79(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;

	if (func_45() != -1)
	{
		return 0;
	}
	if (!func_167(iParam0, 0))
	{
		return 0;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return 0;
	}
	iVar0 = func_168(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	VOLUME::SET_VOLUME_OWNER_PERSISTENT_CHARACTER(iParam1, iVar0, bParam2);
	return 1;
}

void func_80(int iParam0, int iParam1, int iParam2, float fParam3)
{
	Global_1893611.f_182 = iParam0;
	Global_1893611.f_183 = iParam1;
	Global_1893611.f_184 = iParam2;
	Global_1893611.f_185 = fParam3;
}

void func_81(var uParam0, int iParam1, int iParam2)
{
	if (uParam0->f_61 >= 20)
	{
		return;
	}
	if (!VOLUME::DOES_VOLUME_EXIST(iParam1))
	{
		return;
	}
	if (!func_169(iParam2))
	{
		return;
	}
	(*uParam0)[uParam0->f_61 /*3*/] = iParam1;
	(uParam0[uParam0->f_61 /*3*/])->f_1 = iParam2;
	(uParam0[uParam0->f_61 /*3*/])->f_2 = 0;
	uParam0->f_61++;
}

bool func_82(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_83()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (func_170(iVar0))
		{
			Global_1900426[iVar0] = -1;
		}
		iVar0++;
	}
}

void func_84(int iParam0, int iParam1)
{
	if (!func_170(iParam0))
	{
		return;
	}
	if (!func_171(iParam1))
	{
		return;
	}
	Global_1900426[iParam0] = iParam1;
}

void func_85()
{
	int iVar0;
	int iVar1;

	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (VOLUME::DOES_VOLUME_EXIST(iLocal_124[iVar0]))
		{
			if (ENTITY::IS_ENTITY_IN_VOLUME(Global_33, iLocal_124[iVar0], false, 0))
			{
				iVar1 = iVar0;
				if (iVar0 == 0)
				{
					bLocal_121 = true;
				}
				else
				{
					bLocal_121 = false;
				}
			}
		}
		iVar0++;
	}
	if (bLocal_121)
	{
		if (func_172() != 7.153792E+09f)
		{
			func_173(7.153792E+09f, -1);
		}
	}
	else if (func_172() != 5.579046E+17f)
	{
		func_173(5.579046E+17f, -1);
	}
	if (iVar1 != iLocal_120)
	{
		iLocal_120 = iVar1;
	}
	if (VOLUME::DOES_VOLUME_EXIST(iLocal_91))
	{
		if (!VOLUME::_0xCA5C90D40665D5CE(iLocal_91, 0) || !VOLUME::_0xCA5C90D40665D5CE(iLocal_91, 1))
		{
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_91, 0, 1);
			VOLUME::_0x3EFABB21E14A6BD1(iLocal_91, 1, 1);
		}
	}
	if (!ENTITY::IS_ENTITY_DEAD(func_174(250)))
	{
		if (!PED::GET_PED_CONFIG_FLAG(func_174(250), 168, true))
		{
			PED::SET_PED_CONFIG_FLAG(func_174(250), 168, true);
		}
	}
}

void func_86(int iParam0)
{
	iLocal_171 = iParam0;
}

void func_87()
{
	float fVar0;

	if (!Local_19.f_15)
	{
		return;
	}
	if (Local_19.f_27 > MISC::GET_GAME_TIMER())
	{
		return;
	}
	if ((!ENTITY::DOES_ENTITY_EXIST(Local_19.f_17) && Local_19.f_14 > 1) && Local_19 != 0)
	{
		if (func_175() && func_176(Global_34, Local_19.f_11) < 1120403456)
		{
			if (Local_19.f_18 == 0)
			{
				Local_19.f_18 = ENTITY::PIN_CLOSEST_MAP_ENTITY(Local_19, Local_19.f_11, 11);
			}
			else if (ENTITY::IS_MAP_ENTITY_PINNED(Local_19.f_18))
			{
				Local_19.f_17 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(ENTITY::_GET_PINNED_MAP_ENTITY(Local_19.f_18));
			}
		}
		Local_19.f_27 = MISC::GET_GAME_TIMER() + 1800;
	}
	switch (Local_19.f_14)
	{
		case 0:
			func_177();
			Local_19.f_14 = 1;
			break;
		case 1:
			if (func_178())
			{
				Local_19.f_14 = 2;
			}
			break;
		case 2:
			if (func_179())
			{
				Local_19.f_14 = 3;
				Local_19.f_24 = 0;
				Local_19.f_21 = 0;
				Local_19.f_22 = func_181(func_180());
				if (Local_19.f_22 > 12)
				{
					Local_19.f_22 = (Local_19.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_19.f_25 = 1;
			if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_17))
			{
				if (ENTITY::DOES_ENTITY_HAVE_DRAWABLE(Local_19.f_17))
				{
					Local_19.f_25 = 0;
					ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_7, Local_19.f_6, 1000f, false, true, false, 0f, 0);
					Local_19.f_14 = 4;
				}
			}
			if (Local_19.f_21 >= Local_19.f_22)
			{
				Local_19.f_14 = 2;
			}
			break;
		case 4:
			if (func_182(Local_19.f_17, Local_19.f_6, Local_19.f_7, 0))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_8, Local_19.f_6, 1000f, true, true, false, 0f, 0);
				Local_19.f_23 = MISC::GET_GAME_TIMER() + 1800;
				Local_19.f_26 = 0;
				Local_19.f_14 = 5;
			}
			break;
		case 5:
			fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(Local_19.f_17, Local_19.f_6, Local_19.f_8);
			if (fVar0 > 1056964608)
			{
				if (Local_19.f_26)
				{
					Local_19.f_21++;
					Local_19.f_26 = 0;
				}
			}
			else if (!Local_19.f_26 && fVar0 > 1028443341)
			{
				Local_19.f_21++;
				Local_19.f_26 = 1;
			}
			if (Local_19.f_21 >= Local_19.f_22 && (func_182(Local_19.f_17, Local_19.f_6, Local_19.f_8, 1017370378 /* Float: 0.02f */) || Local_19.f_26))
			{
				ENTITY::PLAY_ENTITY_ANIM(Local_19.f_17, Local_19.f_9, Local_19.f_6, 8f, false, false, false, 0f, 0);
				Local_19.f_14 = 2;
			}
			break;
	}
	if (Local_19.f_25 && Local_19.f_14 > 2)
	{
		if (AUDIO::_HAS_SOUND_AUDIO_NAME_FINISHED(Local_19.f_10, "CHURCH_BELL_SOUNDS") && Local_19.f_24 < MISC::GET_GAME_TIMER())
		{
			Local_19.f_24 = MISC::GET_GAME_TIMER() + 1800;
			AUDIO::_PLAY_SOUND_FROM_POSITION(Local_19.f_10, Local_19.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_19.f_21++;
		}
	}
}

void func_88(int iParam0, int iParam1, var uParam2)
{
	if (!*uParam2)
	{
		if (func_183(Global_33, iParam1, 1, 0))
		{
			func_185(func_184(iParam0), 1);
			*uParam2 = 1;
		}
	}
	else if (!func_183(Global_33, iParam1, 1, 0))
	{
		*uParam2 = 0;
	}
}

void func_89()
{
	if (func_186(1159497683, -994749718, 1111048328, 1) < 1130430464)
	{
		func_187();
		bLocal_168 = true;
	}
	else if (bLocal_168)
	{
		func_188();
		bLocal_168 = false;
	}
}

void func_90()
{
	func_189(&uLocal_158, &uLocal_160, &uLocal_159, 1160519311, -995196846, 1110759178 /* Float: 45.21f */, 9.739001E+25f, 2.92867E-13f, -1.16714E+20f);
}

bool func_91(bool bParam0)
{
	if (func_190())
	{
		if (!*bParam0)
		{
			*bParam0 = 1;
			return true;
		}
	}
	else if (*bParam0)
	{
		*bParam0 = 0;
		return true;
	}
	return false;
}

void func_92(int iParam0, int iParam1)
{
	func_93(iParam0, 1, 0, 0, 0, 0, 0, 0);
}

void func_93(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam2, bParam6);
		if (fParam5 > 0f)
		{
			OBJECT::DOOR_SYSTEM_SET_AUTOMATIC_RATE(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_191(iParam0, fParam2, 1, bParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_192(iParam0, 1);
			}
			else
			{
				func_193(iParam0, 1);
			}
		}
		else
		{
			func_194(iParam0, 1);
		}
		if (bParam7)
		{
			OBJECT::_DOOR_SYSTEM_FORCE_SHUT(iParam0, true);
		}
	}
	else if (func_195())
	{
	}
	else if (NETWORK::NETWORK_IS_IN_SESSION())
	{
	}
}

void func_94(int iParam0, int iParam1)
{
	func_93(iParam0, 0, 0, 0, 1, 0, 0, 0);
}

bool func_95(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_96(var uParam0, int iParam1)
{
	return (uParam0->f_62 && iParam1) != 0;
}

bool func_97()
{
	return func_95(Global_1940186, 8192);
}

bool func_98(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_99(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return ((Global_1887363[iParam0 /*36*/].f_21 == 1 || Global_1887363[iParam0 /*36*/].f_21 == 2) && !func_196(iParam0));
}

bool func_100(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 150)
	{
		return false;
	}
	return (Global_1887363[iParam0 /*36*/].f_22 && iParam1) != 0;
}

int func_101()
{
	return Global_1896646.f_41;
}

void func_102(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	bool bVar0;
	char* sVar1;
	char* sVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	char[] cVar6[8];
	float fVar7;
	char* sVar8;
	char* sVar9;
	char[] cVar10[8];

	if (!func_197())
	{
		return;
	}
	sVar1 = func_198(iParam0, iParam1, iParam2, iParam4, bParam5, bParam3, &bVar0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		if (bParam3)
		{
			return;
		}
		sVar1 = "DISTRICT_GRIZZLIES";
	}
	if (!func_199(iParam4))
	{
		if (func_82(iParam0))
		{
			iParam4 = func_200(func_9(iParam0));
		}
		else
		{
			iParam4 = func_200(iParam1);
		}
	}
	if (func_199(iParam4))
	{
		iVar3 = func_201(iParam4);
	}
	if (bVar0 && bParam3)
	{
		sVar2 = func_203(func_202(iParam2));
	}
	else if ((func_204(iParam1, 2) || func_205(iParam4, 2)) && !Global_1893611.f_9)
	{
		if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
		{
			if (PED::IS_PED_MALE(PLAYER::PLAYER_PED_ID()))
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_M");
			}
			else
			{
				sVar2 = MISC::VAR_STRING(2, "LAW_UI_FULL_D_OR_A_F");
			}
		}
		Global_1893611.f_9 = 1;
	}
	else if ((func_82(iParam0) && func_116(iParam0, 2.350989E-38f)) && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "LAW_UI_RESTRICTED_AREA");
		Global_1893611.f_9 = 1;
	}
	else if (iVar3 >= 1 && !Global_1893611.f_9)
	{
		sVar2 = MISC::VAR_STRING(2, "REGION_BOUNTY", iVar3);
		Global_1893611.f_9 = 1;
	}
	else
	{
		iVar4 = func_181(func_180());
		iVar5 = func_206(func_180());
		if (iVar5 < 10)
		{
			StringConCat(&cVar6, "0", 8);
		}
		StringIntConCat(&cVar6, iVar5, 8);
		fVar7 = MISC::_GET_TEMPERATURE_AT_COORDS(Global_34);
		if (!MISC::_SHOULD_USE_24_HOUR_CLOCK())
		{
			sVar9 = "AM";
			if (iVar4 >= 12)
			{
				sVar9 = "PM";
				if (iVar4 > 12)
				{
					iVar4 = (iVar4 - 12);
				}
			}
			else if (iVar4 == 0)
			{
				iVar4 = 12;
			}
			sVar8 = "TIME_AND_TEMP_C";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_207(fVar7);
				sVar8 = "TIME_AND_TEMP_F";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(674, sVar8, iVar4, func_208(&cVar6, 4.808429E-35f), sVar9, func_208(&cVar10, 4.808429E-35f));
		}
		else
		{
			sVar8 = "TIME_AND_TEMP_C_24";
			if (!MISC::_SHOULD_USE_METRIC_TEMPERATURE())
			{
				fVar7 = func_207(fVar7);
				sVar8 = "TIME_AND_TEMP_F_24";
			}
			IntToString(&cVar10, BUILTIN::ROUND(fVar7), 8);
			sVar2 = MISC::VAR_STRING(162, sVar8, iVar4, func_208(&cVar6, 4.808429E-35f), func_208(&cVar10, 4.808429E-35f));
		}
		Global_1893611.f_9 = 0;
	}
	Global_1939089.f_145 = func_209(sVar1, sVar2, 4000, 0, 0, 0, 0, 1);
}

void func_103(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_104(int iParam0, bool bParam1)
{
	if (Global_1572887.f_12 && func_45() == 0)
	{
		return;
	}
	if (!func_210(iParam0))
	{
		return;
	}
	if (func_116(iParam0, 32))
	{
		return;
	}
	func_21(iParam0, 32);
	func_211(&Global_1940186, 16384);
	func_185(func_212(-7.103403E-17f, -3.542793E+37f), 1);
	switch (func_9(iParam0))
	{
		case 0:
		case 2:
		case 11:
			func_185(func_212(-7.103403E-17f, 2.866541E-31f), 1);
			break;
		case 1:
		case 5:
		case 6:
		case 7:
		case 12:
			func_185(func_212(-7.103403E-17f, 3.024173E-30f), 1);
			break;
		case 3:
		case 10:
			func_185(func_212(-7.103403E-17f, 1.603649E+10f), 1);
			break;
		case 4:
		case 9:
			func_185(func_212(-7.103403E-17f, 497.0886f), 1);
			break;
		case 8:
			func_185(func_212(-7.103403E-17f, -4.726794E+32f), 1);
			break;
		case 13:
		case 14:
		case 15:
		case 16:
			func_185(func_212(-7.103403E-17f, -1566073f), 1);
			break;
	}
	switch (iParam0)
	{
		case 0:
			MAP::_MAP_DISCOVER_REGION(1.613995E+27f);
			break;
		case 1:
			MAP::_MAP_DISCOVER_REGION(9.619563f);
			break;
		case 2:
			MAP::_MAP_DISCOVER_REGION(2.374228E+28f);
			MAP::_MAP_DISCOVER_REGION(1.333148E+17f);
			break;
		case 6:
			MAP::_MAP_DISCOVER_REGION(-2.183831E+30f);
			break;
		case 7:
			MAP::_MAP_DISCOVER_REGION(5.088825E-29f);
			break;
		case 9:
			MAP::_MAP_DISCOVER_REGION(-1.39551E+26f);
			break;
		case 10:
			MAP::_MAP_DISCOVER_REGION(-1.726599E-10f);
			MAP::_MAP_DISCOVER_REGION(-1.726599E-10f);
			break;
		case 11:
			MAP::_MAP_DISCOVER_REGION(-1.087969E+21f);
			break;
		case 12:
			MAP::_MAP_DISCOVER_REGION(-3.083407E+14f);
			break;
		case 15:
			MAP::_MAP_DISCOVER_REGION(-3.751822E+12f);
			break;
		case 16:
			MAP::_MAP_DISCOVER_REGION(-2.626526E+38f);
			break;
		case 17:
			MAP::_MAP_DISCOVER_REGION(-3.820025E-14f);
			break;
		case 21:
			MAP::_MAP_DISCOVER_REGION(-9.495817E-37f);
			break;
		case 22:
			MAP::_MAP_DISCOVER_REGION(5.617157E-31f);
			break;
		case 24:
			MAP::_MAP_DISCOVER_REGION(5.901232E-31f);
			break;
		case 25:
			MAP::_MAP_DISCOVER_REGION(-3.521766E-15f);
			break;
		case 26:
			MAP::_MAP_DISCOVER_REGION(27.57284f);
			break;
		case 27:
			MAP::_MAP_DISCOVER_REGION(1.68892E-30f);
			break;
		case 28:
			MAP::_MAP_DISCOVER_REGION(-7.041817E-10f);
			break;
		case 30:
			MAP::_MAP_DISCOVER_REGION(-5.950899E-27f);
			break;
		case 31:
			MAP::_MAP_DISCOVER_REGION(-1.524998E-31f);
			break;
		case 32:
			MAP::_MAP_DISCOVER_REGION(0.007551658f);
			break;
		case 128:
			MAP::_MAP_DISCOVER_REGION(1.389935E-05f);
			break;
		case 129:
			MAP::_MAP_DISCOVER_REGION(2.142827E+19f);
			break;
		case 131:
			MAP::_MAP_DISCOVER_REGION(-1.055526E-09f);
			break;
		case 130:
			MAP::_MAP_DISCOVER_REGION(-1.010413E-26f);
			break;
		case 36:
			MAP::_MAP_DISCOVER_REGION(-3.10736E-10f);
			break;
		case 38:
			MAP::_MAP_DISCOVER_REGION(-814929.9f);
			break;
		case 120:
			MAP::_MAP_DISCOVER_REGION(6.327552E+23f);
			break;
		case 39:
			MAP::_MAP_DISCOVER_REGION(-4.580508E+20f);
			break;
		case 42:
			MAP::_MAP_DISCOVER_REGION(2.37012E-22f);
			break;
		case 44:
			MAP::_MAP_DISCOVER_REGION(-6.741661E-24f);
			break;
		case 45:
			MAP::_MAP_DISCOVER_REGION(2.149383E+27f);
			break;
		case 46:
			MAP::_MAP_DISCOVER_REGION(2.101791E+23f);
			break;
		case 47:
			MAP::_MAP_DISCOVER_REGION(-3.817698E+35f);
			break;
		case 58:
			MAP::_MAP_DISCOVER_REGION(7.418907E-07f);
			break;
		case 59:
			MAP::_MAP_DISCOVER_REGION(3.145188E-27f);
			break;
		case 52:
			MAP::_MAP_DISCOVER_REGION(1.722176E-15f);
			break;
		case 67:
			MAP::_MAP_DISCOVER_REGION(5.211075E-24f);
			break;
		case 69:
			MAP::_MAP_DISCOVER_REGION(-8.823569E-28f);
			break;
		case 70:
			MAP::_MAP_DISCOVER_REGION(1.115845E-15f);
			break;
		case 71:
			MAP::_MAP_DISCOVER_REGION(2.619473E-11f);
			break;
		case 73:
			MAP::_MAP_DISCOVER_REGION(-1.080593E-07f);
			break;
		case 76:
			MAP::_MAP_DISCOVER_REGION(-2.361315E+23f);
			break;
		case 77:
			MAP::_MAP_DISCOVER_REGION(-0.2067486f);
			break;
		case 79:
			MAP::_MAP_DISCOVER_REGION(-3.937803E-10f);
			break;
		case 82:
			MAP::_MAP_DISCOVER_REGION(4.232901E+14f);
			break;
		case 84:
			MAP::_MAP_DISCOVER_REGION(-5.358283E-11f);
			break;
		case 68:
			MAP::_MAP_DISCOVER_REGION(-4.222318E+37f);
			break;
		case 85:
			MAP::_MAP_DISCOVER_REGION(1.837754E+19f);
			MAP::_MAP_DISCOVER_REGION(-8.806617E+22f);
			MAP::_MAP_DISCOVER_REGION(-2.216376E+14f);
			break;
		case 87:
			MAP::_MAP_DISCOVER_REGION(1.197407E-33f);
			MAP::_MAP_DISCOVER_REGION(-1.002169E+34f);
			MAP::_MAP_DISCOVER_REGION(3.571017E+34f);
			break;
		case 88:
			MAP::_MAP_DISCOVER_REGION(-1.162533E+33f);
			break;
		case 90:
			MAP::_MAP_DISCOVER_REGION(1.266234E+20f);
			break;
		case 91:
			MAP::_MAP_DISCOVER_REGION(1.380158E-34f);
			break;
		case 92:
			MAP::_MAP_DISCOVER_REGION(1.314074E+29f);
			break;
		case 94:
			MAP::_MAP_DISCOVER_REGION(1.752256E-22f);
			break;
		case 97:
			MAP::_MAP_DISCOVER_REGION(7.032591E-36f);
			break;
		case 102:
			MAP::_MAP_DISCOVER_REGION(-0.003672305f);
			break;
		case 104:
			MAP::_MAP_DISCOVER_REGION(1.103986E-11f);
			break;
		case 105:
			MAP::_MAP_DISCOVER_REGION(6.590472E+35f);
			break;
		case 106:
			MAP::_MAP_DISCOVER_REGION(1.464423E+29f);
			break;
		case 108:
			MAP::_MAP_DISCOVER_REGION(NaNf);
			break;
		case 110:
			MAP::_MAP_DISCOVER_REGION(-4.053854E-20f);
			MAP::_MAP_DISCOVER_REGION(-7.022341E-12f);
			break;
		case 112:
			MAP::_MAP_DISCOVER_REGION(2.479537E+10f);
			break;
		case 113:
			MAP::_MAP_DISCOVER_REGION(-3.241092E-13f);
			break;
		case 115:
			MAP::_MAP_DISCOVER_REGION(1.646843E-09f);
			break;
		case 118:
			MAP::_MAP_DISCOVER_REGION(6.263714E+17f);
			MAP::_MAP_DISCOVER_REGION(-24712.09f);
			break;
	}
	if (bParam1)
	{
		func_21(iParam0, 64);
	}
}

void func_105(bool bParam0)
{
	if (bParam0)
	{
		Global_1893611 |= 1;
	}
	else
	{
		Global_1893611 = (Global_1893611 - Global_1893611 & 1);
	}
}

bool func_106(int iParam0)
{
	switch (iParam0)
	{
		case joaat("DRIZZLE"):
		case joaat("THUNDER"):
		case joaat("SHOWER"):
		case joaat("SLEET"):
		case joaat("HURRICANE"):
		case joaat("RAIN"):
		case joaat("HAIL"):
		case joaat("THUNDERSTORM"):
			return true;
		default:
			break;
	}
	return false;
}

void func_107()
{
	if (func_118(iLocal_170))
	{
		func_213(iLocal_170);
	}
	func_214(5);
}

int func_108(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return NaNf;
		case 1:
			return 1.049338E+18f;
		case 2:
			return 1.498895E-22f;
		case 3:
			return -1.702218E-25f;
		case 4:
			return 2.047014E+29f;
		case 5:
			return 2.102611E-13f;
		case 6:
			return -1.094444E+23f;
		case 7:
			return -8.246098E-11f;
		case 8:
			return 0.0003337624f;
		case 9:
			return -1.945498E-13f;
		case 10:
			return -8.558729E-19f;
		case 11:
			return 2.354955E-38f;
		case 12:
			return 8.457601E+13f;
		case 13:
			return 3.274443E-19f;
		case 14:
			return 0.0005826025f;
		case 15:
			return 6.104771E-23f;
		case 16:
			return -3.247849E-35f;
		case 17:
			return 6.796195E-24f;
		case 18:
			return -4.880347E-24f;
		case 19:
			return 1.469572E+26f;
		case 20:
			return 6.687569E+34f;
		case 21:
			return 2.750939E-11f;
		case 22:
			return -0.1062356f;
		case 24:
			return -1.784405f;
		case 23:
			return -1.21609f;
		case 25:
			return 3.29758E+38f;
		case 26:
			return 14587.68f;
		case 27:
			return 8.223601E-11f;
		case 28:
			return 3197.742f;
		case 30:
			return -5.451207E+32f;
		case 29:
			return 2.46961E+34f;
		case 31:
			return 8.012324E+07f;
		case 32:
			return -6.24719E-28f;
		case 33:
			return 8.781186E-12f;
		case 34:
			return 2.666268E+20f;
		case 35:
			return 5.365568E-25f;
		case 36:
			return 9.694758f;
		case 37:
			return 3.661959E-22f;
		case 38:
			return -8.077674E-12f;
		case 39:
			return -2.423394E+33f;
		case 40:
			return 5.494265E+13f;
		case 41:
			return 1.934011E-33f;
		case 42:
			return 4.019232E+08f;
		case 43:
			return 2.296171f;
		case 53:
			return 6.549141f;
		case 54:
			return -2.545939E-25f;
		case 44:
			return 341095f;
		case 55:
			return -1.732738E-13f;
		case 45:
			return -6.015189E-35f;
		case 56:
			return -2.592482E+17f;
		case 46:
			return 4.27727E-10f;
		case 57:
			return -1.441672E+16f;
		case 47:
			return -15159.68f;
		case 48:
			return 9.085946E-29f;
		case 49:
			return -1.725231E+22f;
		case 50:
			return -2.348099E+36f;
		case 51:
			return -8.518072E-29f;
		case 58:
			return -3.843981E-31f;
		case 59:
			return -6.084368E+13f;
		case 60:
			return -0.003789695f;
		case 52:
			return 2.81243E-25f;
		case 61:
			return -2.810075E+07f;
		case 62:
			return 2.66865E-24f;
		case 63:
			return -2.399166E+33f;
		case 64:
			return -5.385402E-22f;
		case 65:
			return 2.6504E+31f;
		case 66:
			return 1.120495E+28f;
		case 67:
			return 2.302714E-06f;
		case 69:
			return 2.022597E+27f;
		case 70:
			return 8.50011E+35f;
		case 71:
			return -1.834545E+31f;
		case 72:
			return 2.681125E+26f;
		case 73:
			return NaNf;
		case 74:
			return 1.94863E+28f;
		case 75:
			return -2.233904E-18f;
		case 76:
			return 2.177862E+38f;
		case 77:
			return -1.372755E-12f;
		case 78:
			return 3.486547E-10f;
		case 79:
			return 1.805301E+38f;
		case 80:
			return 1.290267E+23f;
		case 81:
			return joaat("REGION_HRT_VALENTINE");
		case 82:
			return 3.541437E+37f;
		case 83:
			return 1.340204E-32f;
		case 84:
			return 12823.88f;
		case 68:
			return 2.498765E-17f;
		case 85:
			return 2.724825E-19f;
		case 86:
			return -4.018006E-17f;
		case 87:
			return -1.794133E-19f;
		case 88:
			return -1.311699E+07f;
		case 89:
			return -7.308199E-13f;
		case 90:
			return 0.01935584f;
		case 91:
			return -4.311316E-05f;
		case 92:
			return -4.75276E-20f;
		case 93:
			return -2.51251E+22f;
		case 94:
			return -504140.1f;
		case 95:
			return -1.291509E+14f;
		case 97:
			return 2.353091E-37f;
		case 98:
			return 1.686618E+10f;
		case 96:
			return 1.087588E-16f;
		case 99:
			return -4.384771E+36f;
		case 100:
			return -6.742055E+12f;
		case 101:
			return -1.641191E+11f;
		case 102:
			return 1.774577E+09f;
		case 103:
			return -1.986649E+22f;
		case 104:
			return -5.46941E-14f;
		case 105:
			return 1.061583E-32f;
		case 106:
			return -3.406536E-22f;
		case 107:
			return 2.459217E-13f;
		case 108:
			return -5.444849E+37f;
		case 109:
			return -1.291923E-23f;
		case 110:
			return -5.755611E+19f;
		case 111:
			return -2.08496E+12f;
		case 112:
			return -4.807343E-05f;
		case 113:
			return -9.123408E-32f;
		case 115:
			return -1.759319E-08f;
		case 116:
			return -3.056887E+17f;
		case 117:
			return 3.529603E-07f;
		case 118:
			return NaNf;
		case 114:
			return -14.87718f;
		case 119:
			return -1.840224E-13f;
		case 135:
			return 8.661269E-15f;
		case 136:
			return 1.384722E-08f;
		case 137:
			return 1.920854E+23f;
		case 138:
			return -2.45758E-18f;
		case 127:
			return 8.848738E+10f;
		case 128:
			return -2.729886E+12f;
		case 129:
			return 1.278004E+19f;
		case 131:
			return -1.288943E+33f;
		case 130:
			return -1.683166E-13f;
		case 132:
			return -1.461573E+35f;
		case 133:
			return 1.183602E-14f;
		case 134:
			return 7.453607E+28f;
		case 120:
			return -8.878077E+35f;
		case 121:
			return 8.947486E-31f;
		case 122:
			return 2.254247E+37f;
		case 123:
			return -2.125533E-11f;
		case 124:
			return -6.859215E-38f;
		case 125:
			return -6.28234E+18f;
		case 126:
			return 7.715836E+17f;
		case 139:
			return 2.629307E-15f;
		default:
			break;
	}
	if (bParam1)
	{
		return 7.087189E+24f;
	}
	return 0;
}

void func_109(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		Global_8130[iParam0 /*11*/] = (Global_8130[iParam0 /*11*/] - (Global_8130[iParam0 /*11*/] && iParam1));
		return;
	}
	Global_1072759.f_19611[iParam0 /*11*/] = (Global_1072759.f_19611[iParam0 /*11*/] - (Global_1072759.f_19611[iParam0 /*11*/] && iParam1));
}

void func_110(bool bParam0)
{
	if (bParam0)
	{
		Global_1893611 |= 2;
	}
	else
	{
		Global_1893611 = (Global_1893611 - Global_1893611 & 2);
	}
}

void func_111(int iParam0)
{
	iParam0 = iParam0;
	func_80(1061578342 /* Float: 0.775f */, 1045220557 /* Float: 0.2f */, 1020054733 /* Float: 0.025f */, 0f);
	FLOCK::SET_SPECIES_TUNING_BOOL_PARAM(-0.000127636f, 0, 48, false);
	TASK::_SET_SCENARIO_GROUP_ENABLED_HASH(1.244194E-23f, false);
	if (HUD::_DOES_TEXT_BLOCK_EXIST("SCSFAUD"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("SCSFAUD"))
		{
			HUD::_TEXT_BLOCK_DELETE("SCSFAUD");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("SCSCAUD"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("SCSCAUD"))
		{
			HUD::_TEXT_BLOCK_DELETE("SCSCAUD");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("STDRGAU"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("STDRGAU"))
		{
			HUD::_TEXT_BLOCK_DELETE("STDRGAU");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("RESAMAU"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("RESAMAU"))
		{
			HUD::_TEXT_BLOCK_DELETE("RESAMAU");
		}
	}
	if (HUD::_DOES_TEXT_BLOCK_EXIST("RERIAUD"))
	{
		if (HUD::TEXT_BLOCK_IS_LOADED("RERIAUD"))
		{
			HUD::_TEXT_BLOCK_DELETE("RERIAUD");
		}
	}
	VEHICLE::REMOVE_ROAD_NODE_SPEED_ZONE(iLocal_119);
	LAW::_REMOVE_GUARD_ZONE(sLocal_106);
	func_215(iLocal_107);
	func_215(iLocal_108);
	func_215(iLocal_109);
	func_216();
	AUDIO::SET_AMBIENT_ZONE_STATE("AZ_Naturalist_Camp", false, true);
}

void func_112(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (Global_1939946.f_5[iVar0 /*11*/].f_5 == iParam0)
		{
			func_137(iVar0);
		}
		iVar0++;
	}
}

void func_113(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (Global_1915643.f_3[iVar0 /*447*/].f_8 == iParam0)
		{
			func_217(iVar0);
		}
		iVar0++;
	}
}

bool func_114(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;

	if (func_45() != -1)
	{
		return true;
	}
	if (!func_82(iParam0))
	{
		return true;
	}
	if (func_133(iParam0, &iVar0, &iVar1, 0, 0))
	{
		if (Global_1896644.f_1 < iVar0 || Global_1896644.f_1 > iVar1)
		{
			Global_1896644.f_1 = iVar0;
		}
		while (true)
		{
			if (!func_218(Global_1896644.f_1, 16))
			{
				func_219(Global_1896644.f_1, 0);
			}
			Global_1896644.f_1++;
			iVar2++;
			if (Global_1896644.f_1 > iVar1)
			{
				Global_1896644.f_1 = -1;
				return true;
			}
			if (iVar2 >= 10 && !bParam1)
			{
				return false;
			}
		}
	}
	return true;
}

bool func_115(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (func_220(iVar0) || func_221(iVar0))
		{
		}
		else
		{
			switch (iVar0)
			{
				case 34:
					break;
				case 30:
					func_76();
					break;
				case 32:
					func_222();
					break;
				default:
					if (Global_1051832.f_92[iVar0 /*75*/].f_2 == iParam0)
					{
						func_143(iVar0, 0);
					}
					break;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_116(int iParam0, int iParam1)
{
	if (Global_1572887.f_14 == -1)
	{
		return (Global_8130[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1072759.f_19611[iParam0 /*11*/] && iParam1) != 0;
}

void func_117(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

bool func_118(int iParam0)
{
	if (iParam0 != -1 && iParam0 < 5)
	{
		return VOLUME::DOES_VOLUME_EXIST(Global_26690[iParam0]);
	}
	return false;
}

void func_119(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_120(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_121(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

void func_122(int iParam0)
{
	int iVar0;

	if (*iParam0 == -15)
	{
		return;
	}
	iVar0 = func_180();
	func_224(iParam0, func_223(iVar0));
	func_226(iParam0, func_225(iVar0));
	func_228(iParam0, func_227(iVar0));
}

void func_123(var uParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	var uVar3;

	if (iParam1 < 2)
	{
		return;
	}
	bVar0 = true;
	iVar1 = 0;
	iVar2 = 0;
	while (bVar0)
	{
		iVar1 = (iParam1 - 1);
		while (iVar1 >= 0)
		{
			bVar0 = false;
			iVar2 = 0;
			while (iVar2 <= (iVar1 - 1))
			{
				if ((*uParam0)[iVar2] > (*uParam0)[iVar2 + 1])
				{
					uVar3 = (*uParam0)[iVar2];
					(*uParam0)[iVar2] = (*uParam0)[iVar2 + 1];
					(*uParam0)[iVar2 + 1] = uVar3;
					bVar0 = true;
				}
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
		}
	}
}

void func_124(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::SET_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_125(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	MISC::CLEAR_BIT(&(Global_38.f_118[iVar1]), iVar2);
	Global_1939583 = 0;
}

void func_126()
{
	func_125(-132684.3f);
	func_125(-0.0001690958f);
	func_125(3.830978E-26f);
	func_125(6.474655E-12f);
	func_125(-4.819223E-35f);
	func_125(2.571264E+29f);
	func_125(1.854668E-22f);
}

void func_127()
{
	func_125(1.158411E-13f);
	func_125(8.415453E-18f);
	func_125(7.67535E+33f);
	func_125(1.00052E+21f);
	func_125(9.229372E-31f);
	func_125(6.4567E-33f);
	func_125(40181.18f);
	func_125(-1.595292E+21f);
	func_125(-8.200105E+15f);
	func_125(-4.520527E+16f);
}

bool func_128(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = func_229(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_230(iVar1))
	{
		if (Global_1072759.f_19585.f_24 && !func_231(iParam0))
		{
			return false;
		}
		return (MISC::IS_BIT_SET(Global_1072759.f_19585[iVar1], iVar2) || MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2));
	}
	return MISC::IS_BIT_SET(Global_38.f_118[iVar1], iVar2);
}

void func_129(int iParam0)
{
	if (func_151(iParam0) && func_232())
	{
		OBJECT::REMOVE_DOOR_FROM_SYSTEM(iParam0);
	}
}

int func_130(int iParam0, char* sParam1, int* iParam2, char* sParam3, float* fParam4, char* sParam5, Vector3* vParam6)
{
	struct<4> Var0;

	Var0 = func_233();
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_234(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return 0;
	}
	Var0.f_2 = -2.130137E-12f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam1);
	DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(iParam2, &Var0);
	Var0.f_2 = 0.6744412f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam3);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_FLOAT(fParam4, &Var0);
	Var0.f_2 = -1.822079E+35f;
	Var0.f_3 = MISC::GET_HASH_KEY(sParam5);
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_VECTOR(vParam6, &Var0);
	return 1;
}

bool func_131(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	return func_116(iParam0, 9.403955E-38f);
}

bool func_132(int iParam0)
{
	if (!func_82(iParam0))
	{
		return false;
	}
	switch (iParam0)
	{
		case 33:
			return true;
		case 37:
			return true;
		case 70:
			return true;
		case 101:
			return true;
	}
	return false;
}

bool func_133(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bool bVar0;

	bVar0 = func_45() != -1;
	switch (iParam0)
	{
		case 81:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 111:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 318;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 66:
			*iParam1 = 374;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 374;
			}
			break;
		case 83:
			*iParam1 = 376;
			*iParam2 = 425;
			if (bVar0)
			{
				*iParam2 = 378;
			}
			break;
		case 98:
			*iParam1 = 437;
			*iParam2 = 465;
			if (bVar0)
			{
				*iParam2 = 437;
			}
			break;
		case 26:
			*iParam1 = 466;
			if (bParam3)
			{
				*iParam2 = 494;
			}
			else
			{
				*iParam2 = 496;
			}
			if (bVar0)
			{
				*iParam2 = 466;
			}
			break;
		case 40:
			*iParam1 = 502;
			*iParam2 = 547;
			if (bVar0)
			{
				*iParam2 = 503;
			}
			break;
		case 73:
			*iParam1 = 548;
			*iParam2 = 559;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 560;
			*iParam2 = 582;
			if (bVar0)
			{
				*iParam2 = 560;
			}
			break;
		case 74:
			*iParam1 = 583;
			if (bParam3)
			{
				*iParam2 = 592;
			}
			else
			{
				*iParam2 = 606;
			}
			if (bVar0)
			{
				*iParam2 = 584;
			}
			break;
		case 80:
			*iParam1 = 497;
			*iParam2 = 500;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 99:
			*iParam1 = 607;
			*iParam2 = 619;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 620;
			*iParam2 = 635;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 103:
			*iParam1 = 636;
			*iParam2 = 637;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 638;
			*iParam2 = 650;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 651;
			*iParam2 = 652;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 33:
			*iParam1 = 319;
			*iParam2 = 338;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 87:
			*iParam1 = 653;
			if (bParam3)
			{
				*iParam2 = 667;
			}
			else
			{
				*iParam2 = 684;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 37:
			*iParam1 = 685;
			*iParam2 = 694;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 60:
			*iParam1 = 695;
			*iParam2 = 702;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 709;
			}
			else
			{
				*iParam1 = 703;
			}
			*iParam2 = 717;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 718;
			*iParam2 = 724;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 69:
			*iParam1 = 730;
			*iParam2 = 734;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 71:
			*iParam1 = 739;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 75:
			*iParam1 = 745;
			*iParam2 = 748;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 725;
			*iParam2 = 726;
			break;
		case 102:
			*iParam1 = 735;
			*iParam2 = 737;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 30:
			*iParam1 = 738;
			*iParam2 = 738;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 106:
			*iParam1 = 749;
			*iParam2 = 757;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 108:
			*iParam1 = 758;
			*iParam2 = 761;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 727;
			*iParam2 = 729;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 131:
			*iParam1 = 785;
			*iParam2 = 787;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 91:
			*iParam1 = 762;
			*iParam2 = 766;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 135:
			*iParam1 = 767;
			*iParam2 = 773;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 127:
			*iParam1 = 426;
			*iParam2 = 436;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 121:
			*iParam1 = 339;
			*iParam2 = 369;
			if (bVar0)
			{
				*iParam2 = 369;
			}
			break;
		case 132:
			*iParam1 = 370;
			*iParam2 = 373;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 122:
			*iParam1 = 777;
			*iParam2 = 784;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 774;
			*iParam2 = 776;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 44:
			*iParam1 = 788;
			*iParam2 = 792;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 94:
			*iParam1 = 793;
			*iParam2 = 794;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 795;
			*iParam2 = 795;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 796;
			*iParam2 = 797;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 107:
			*iParam1 = 798;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 123:
			*iParam1 = 501;
			*iParam2 = 501;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 801;
			*iParam2 = 827;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 139:
			*iParam1 = 828;
			*iParam2 = 851;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

bool func_134(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 948);
}

bool func_135(int iParam0)
{
	switch (iParam0)
	{
		case 64:
			return true;
		case 65:
			return true;
		case 66:
			return true;
		case 67:
			return true;
		case 68:
			return true;
		default:
			break;
	}
	return false;
}

int func_136(int iParam0, bool bParam1)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_218(iParam0, 2))
	{
		return 0;
	}
	if (func_218(iParam0, 32) && !bParam1)
	{
		func_236(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_235(iParam0)));
		if (func_45() == -1)
		{
			if (func_218(iParam0, 2048))
			{
				PERSCHAR::_REVIVE_PERSCHAR(func_168(iParam0));
				func_237(iParam0, 2048);
			}
			PERSCHAR::_0xFCC6DB8DBE709BC8(func_168(iParam0));
		}
		return 0;
	}
	if (!func_238(iParam0) && func_45() == -1)
	{
		return 0;
	}
	if (PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_168(iParam0)))
	{
		func_237(iParam0, 128);
		return 1;
	}
	func_236(iParam0, PERSCHAR::_CREATE_PERSISTENT_CHARACTER(func_235(iParam0)));
	PERSCHAR::_0x4F81EAD1DE8FA19B(func_168(iParam0));
	if (func_218(iParam0, 2048))
	{
		PERSCHAR::_REVIVE_PERSCHAR(func_168(iParam0));
		func_237(iParam0, 2048);
	}
	return 1;
}

void func_137(int iParam0)
{
	func_239(Global_1939946.f_5[iParam0 /*11*/].f_6, 1);
	func_240(Global_1939946.f_5[iParam0 /*11*/].f_6, 0);
	if (VOLUME::_IS_VOLUME_LOCK_REQUEST_VALID_2(Global_1939946.f_5[iParam0 /*11*/].f_8))
	{
		VOLUME::_RELEASE_LOCK_VOLUME(Global_1939946.f_5[iParam0 /*11*/].f_8);
	}
	func_241(iParam0, 8192);
	func_241(iParam0, 32768);
	func_241(iParam0, 524288);
	func_241(iParam0, 1048576);
	Global_1939946.f_5[iParam0 /*11*/].f_10 = 0;
	Global_1939946.f_5[Global_1939946 /*11*/].f_9 = 0;
	Global_1939946.f_5[iParam0 /*11*/] = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_1 = { 0f, 0f, 0f };
	Global_1939946.f_5[iParam0 /*11*/].f_4 = 0;
	Global_1939946.f_5[iParam0 /*11*/].f_5 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_6 = -1;
	Global_1939946.f_5[iParam0 /*11*/].f_7 = 0;
}

int func_138(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 2:
					return 2;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 2:
					return 3;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 0:
					return 5;
				case 1:
					return 6;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 0:
					return 8;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 0:
					return 7;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 0:
					return 4;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 0:
					return 0;
				default:
					break;
			}
			break;
	}
	return -1;
}

int func_139(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 5:
			switch (iParam1)
			{
				case 0:
					return 0;
				case 1:
					return 1;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 1:
					return 2;
				default:
					break;
			}
			break;
	}
	return -1;
}

bool func_140()
{
	return func_242(func_66(0));
}

bool func_141(int iParam0)
{
	return !func_243(iParam0);
}

void func_142(bool bParam0, bool bParam1)
{
	if (func_244(255) == 4)
	{
		return;
	}
	if (func_62(ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_245(0);
	}
	else
	{
		if (bParam1)
		{
			func_246(0, 0, 0, 1);
		}
		func_247(0);
		func_248(&(Global_1102813.f_3839));
		Global_1102813.f_3839 = 0f;
		Global_1102813.f_3839.f_5 = 1;
		Global_1102813.f_3839.f_16 = 0;
		Global_1102813.f_3839.f_17.f_6 = { ENTITY::GET_ENTITY_COORDS(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), false, false) };
		Global_1102813.f_3839.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102813.f_3839.f_17 = { Global_1901671.f_51.f_1, Global_1901671.f_51.f_1, Global_1901671.f_51.f_1 };
		Global_1102813.f_3839.f_17.f_9 = -2.19652E+23f;
		func_249(&(Global_1102813.f_3878));
		Global_1102813.f_3878.f_6 = { Global_1102813.f_3839.f_17.f_6 };
		Global_1102813.f_3878 = Global_1102813.f_3839;
		Global_1102813.f_3878.f_5 = 1;
		if (bParam1)
		{
			Global_1102813.f_26.f_3341 = 0;
			Global_1102813.f_26.f_3342 = 0;
		}
	}
	func_250(Global_1102813.f_3839, 36);
	func_251(Global_1102813.f_3878, 36);
}

void func_143(int iParam0, bool bParam1)
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;

	bVar0 = (func_252(iParam0) && !bParam1);
	if (!bVar0 && !func_153(iParam0, 65536))
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
		{
			if (!ENTITY::_DOES_THREAD_OWN_THIS_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(Global_1051832.f_92[iParam0 /*75*/].f_21, true, true);
			}
			ENTITY::DELETE_ENTITY(&(Global_1051832.f_92[iParam0 /*75*/].f_21));
			Global_1051832.f_92[iParam0 /*75*/].f_21 = 0;
		}
		if (STREAMING::IS_MODEL_VALID(Global_1051832.f_92[iParam0 /*75*/].f_19))
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Global_1051832.f_92[iParam0 /*75*/].f_19);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_19 = 0;
	}
	else if (func_165(iParam0, 1.504633E-36f) && ENTITY::DOES_ENTITY_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_21))
	{
		MISC::UNREGISTER_INTERACTION_LOCKON_PROMPT(Global_1051832.f_92[iParam0 /*75*/].f_21);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24))
	{
		NETWORK::_NETWORK_SPAWN_CONFIG_REMOVE_EXCLUSION_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_24);
		if (func_153(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_25))
	{
		POPULATION::_REMOVE_AMBIENT_SPAWN_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		POPULATION::_REMOVE_AMBIENT_AVOIDANCE_RESTRICTION(Global_1051832.f_92[iParam0 /*75*/].f_25);
		if (func_153(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_25);
		}
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_27))
	{
		if (func_153(iParam0, 524288))
		{
			VOLUME::DELETE_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_27);
		}
	}
	if (func_165(iParam0, 16384) && !bVar0)
	{
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_6))
		{
			iVar1 = TASK::GET_PROP_FOR_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6, "mp001_s_mp_catalogue01x_noanim_PH_R_HAND");
			if (ENTITY::DOES_ENTITY_EXIST(iVar1))
			{
				ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&iVar1);
			}
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_92[iParam0 /*75*/].f_6);
		}
		Global_1051832.f_92[iParam0 /*75*/].f_6 = 0;
		func_253(iParam0, 16384);
	}
	Global_1051832.f_92[iParam0 /*75*/] = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_3 = { 0f, 0f, 0f };
	Global_1051832.f_92[iParam0 /*75*/].f_48 = 0;
	Global_1051832.f_92[iParam0 /*75*/].f_73 = 1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	iVar3 = func_149(iParam0);
	if (iVar3 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar2 = 0;
		while (iVar2 < iVar3)
		{
			func_129(Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2]);
			Global_1051832.f_92[iParam0 /*75*/].f_31[iVar2] = 0;
			iVar2++;
		}
		Global_1051832.f_92[iParam0 /*75*/].f_47 = 0;
	}
	func_254(iParam0);
	if (func_153(iParam0, 262144))
	{
		Global_1051832.f_92[iParam0 /*75*/].f_49 = 262144;
	}
	else
	{
		func_159(iParam0);
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_1051832.f_92[iParam0 /*75*/].f_24) && func_255(iParam0, 2))
	{
		VOLUME::_SET_VOLUME_RELATIONSHIP(Global_1051832.f_92[iParam0 /*75*/].f_24, 1.526336E-16f);
		PATHFIND::_REMOVE_NAVMESH_BLOCKING_VOLUME(Global_1051832.f_92[iParam0 /*75*/].f_24);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_50 &= 8;
	Global_1051832.f_92[iParam0 /*75*/].f_1 &= 2113536;
	func_162(iParam0);
	Global_1051832.f_92[iParam0 /*75*/].f_18 = -1;
	Global_1051832.f_92[iParam0 /*75*/].f_2 = -1;
}

int func_144(int iParam0, int iParam1)
{
	if (iParam1 == 11)
	{
		return 119;
	}
	else if (iParam1 == 27)
	{
		return 133;
	}
	else if (iParam1 == 34)
	{
		return 152;
	}
	else if (iParam1 == 28)
	{
		return 153;
	}
	else if (iParam1 == 29)
	{
		return 154;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	switch (iParam0)
	{
		case 84:
			switch (iParam1)
			{
				case 0:
					return 155;
				case 6:
					return 157;
				case 23:
					return 158;
				case 22:
					return 156;
				case 16:
					return 67;
				default:
					break;
			}
			break;
		case 40:
			switch (iParam1)
			{
				case 12:
					return 5;
				case 30:
					return 10;
				case 25:
					return 122;
				case 26:
					return 123;
				case 3:
					return 6;
				case 8:
					return 8;
				case 10:
					return 9;
				case 9:
					return 13;
				case 2:
					return 14;
				case 1:
					return 15;
				case 7:
					return 19;
				case 18:
					return 12;
				default:
					break;
			}
			break;
		case 104:
			switch (iParam1)
			{
				case 0:
					return 159;
				case 6:
					return 161;
				case 23:
					return 162;
				case 22:
					return 160;
				case 16:
					return 65;
				default:
					break;
			}
			break;
		case 74:
			switch (iParam1)
			{
				case 4:
					return 22;
				case 33:
					return 21;
				case 3:
					return 23;
				case 2:
					return 24;
				case 1:
					return 25;
				case 38:
					return 140;
				default:
					break;
			}
			break;
		case 76:
			switch (iParam1)
			{
				case 0:
					return 164;
				case 6:
					return 166;
				case 23:
					return 167;
				case 22:
					return 165;
				case 16:
					return 64;
				case 38:
					return 141;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 168;
				case 6:
					return 170;
				case 23:
					return 171;
				case 22:
					return 169;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 14:
					return 26;
				case 39:
					return 151;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 12:
					return 42;
				case 8:
					return 43;
				case 30:
					return 54;
				case 25:
					return 124;
				case 10:
					return 44;
				case 26:
					return 125;
				case 0:
					return 45;
				case 4:
					return 46;
				case 33:
					return 20;
				case 3:
					return 48;
				case 6:
					return 49;
				case 9:
					return 50;
				case 2:
					return 51;
				case 1:
					return 52;
				case 7:
					return 53;
				case 15:
					return 63;
				case 18:
					return 60;
				case 36:
					return 61;
				default:
					break;
			}
			break;
		case 111:
			switch (iParam1)
			{
				case 12:
					return 29;
				case 30:
					return 36;
				case 25:
					return 126;
				case 10:
					return 30;
				case 4:
					return 31;
				case 33:
					return 32;
				case 3:
					return 33;
				case 6:
					return 34;
				case 2:
					return 35;
				case 1:
					return 39;
				default:
					break;
			}
			break;
		case 107:
			switch (iParam1)
			{
				case 9:
					return 41;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 15:
					return 3;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam1)
			{
				case 2:
					return 27;
				case 1:
					return 28;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 172;
				case 22:
					return 173;
				case 6:
					return 174;
				case 23:
					return 175;
				case 16:
					return 66;
				default:
					break;
			}
			break;
		case 26:
			switch (iParam1)
			{
				case 25:
					return 127;
				case 30:
					return 75;
				case 10:
					return 68;
				case 3:
					return 69;
				case 17:
					return 70;
				case 9:
					return 71;
				case 2:
					return 74;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 15:
					return 4;
				default:
					break;
			}
			break;
		case 81:
			switch (iParam1)
			{
				case 12:
					return 77;
				case 8:
					return 78;
				case 30:
					return 79;
				case 25:
					return 120;
				case 10:
					return 82;
				case 26:
					return 121;
				case 0:
					return 83;
				case 3:
					return 84;
				case 6:
					return 85;
				case 9:
					return 86;
				case 2:
					return 87;
				case 1:
					return 88;
				case 17:
					return 90;
				case 36:
					return 89;
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 98:
			switch (iParam1)
			{
				case 26:
					return 128;
				case 4:
					return 93;
				case 33:
					return 92;
				case 2:
					return 98;
				case 1:
					return 97;
				case 9:
					return 96;
				default:
					break;
			}
			break;
		case 83:
			switch (iParam1)
			{
				case 25:
					return 129;
				case 6:
					return 0;
				case 2:
					return 1;
				case 1:
					return 2;
				default:
					break;
			}
			break;
		case 95:
		case 139:
			switch (iParam1)
			{
				case 15:
					return 40;
				default:
					break;
			}
			break;
		case 28:
			switch (iParam1)
			{
				case 2:
					return 101;
				case 1:
					return 100;
				case 3:
					return 99;
				default:
					break;
			}
			break;
		case 121:
			switch (iParam1)
			{
				case 30:
					return 105;
				case 3:
					return 102;
				case 6:
					return 103;
				case 9:
					return 107;
				case 10:
					return 104;
				default:
					break;
			}
			break;
		case 127:
			switch (iParam1)
			{
				case 3:
					return 108;
				case 2:
					return 111;
				case 1:
					return 112;
				case 35:
					return 109;
				default:
					break;
			}
			break;
		case 130:
			switch (iParam1)
			{
				case 4:
					return 116;
				default:
					break;
			}
			break;
		case 123:
			switch (iParam1)
			{
				case 2:
					return 117;
				case 1:
					return 118;
				default:
					break;
			}
			break;
		case 119:
			switch (iParam1)
			{
				case 15:
					return 76;
				default:
					break;
			}
			break;
		case 136:
			switch (iParam1)
			{
				case 4:
					return 130;
				default:
					break;
			}
			break;
		case 96:
			switch (iParam1)
			{
				case 35:
					return 113;
				default:
					break;
			}
			break;
		case 29:
			switch (iParam1)
			{
				case 35:
					return 114;
				default:
					break;
			}
			break;
		case 126:
			switch (iParam1)
			{
				case 38:
					return 135;
				default:
					break;
			}
			break;
		case 133:
			switch (iParam1)
			{
				case 38:
					return 136;
				default:
					break;
			}
			break;
		case 137:
			switch (iParam1)
			{
				case 38:
					return 137;
				default:
					break;
			}
			break;
		case 39:
			switch (iParam1)
			{
				case 38:
					return 138;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 38:
					return 139;
				default:
					break;
			}
			break;
		case 61:
			switch (iParam1)
			{
				case 38:
					return 142;
				default:
					break;
			}
			break;
		case 100:
			switch (iParam1)
			{
				case 38:
					return 143;
				default:
					break;
			}
			break;
		case 34:
			switch (iParam1)
			{
				case 38:
					return 144;
				default:
					break;
			}
			break;
		case 43:
			switch (iParam1)
			{
				case 38:
					return 145;
				default:
					break;
			}
			break;
		case 85:
			switch (iParam1)
			{
				case 38:
					return 146;
				default:
					break;
			}
			break;
		case 138:
			switch (iParam1)
			{
				case 39:
					return 149;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam1)
			{
				case 39:
					return 150;
				default:
					break;
			}
			break;
		case 134:
			switch (iParam1)
			{
				case 15:
					return 148;
				default:
					break;
			}
			break;
	}
	if (iParam1 == 38)
	{
		return 147;
	}
	if (iParam1 == 33)
	{
		return 20;
	}
	if (iParam1 == 37)
	{
		return 134;
	}
	return -1;
}

int func_145(int iParam0)
{
	if (!func_256(iParam0))
	{
		return 0;
	}
	if (Global_1051832.f_4492[iParam0] == 0)
	{
		Global_1051832.f_4492[iParam0] = func_257(iParam0);
	}
	return Global_1051832.f_4492[iParam0];
}

int func_146(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return 1112014848 /* Float: 50f */;
		case 9:
			return 1103626240 /* Float: 25f */;
		case 10:
			return 1103626240 /* Float: 25f */;
		case 29:
			return 1103626240 /* Float: 25f */;
		case 38:
			return 1116471296 /* Float: 70f */;
		case 37:
			return 1106247680 /* Float: 30f */;
		case 15:
			return 1103626240 /* Float: 25f */;
		case 39:
			return 1120403456 /* Float: 100f */;
	}
	return 1095237632 /* Float: 12.5f */;
}

void func_147(int iParam0, float fParam1)
{
	if (!func_165(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 || fParam1);
}

void func_148(int iParam0)
{
	Global_1051832[Global_1051832.f_41] = iParam0;
	Global_1051832.f_41++;
	if (Global_1051832.f_41 >= 40)
	{
		Global_1051832.f_41 = (40 - 1);
	}
}

int func_149(int iParam0)
{
	return Global_1051832.f_92[iParam0 /*75*/].f_47;
}

int func_150(int iParam0, bool bParam1, bool bParam2)
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

bool func_151(int iParam0)
{
	if (func_258(iParam0))
	{
		return OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iParam0);
	}
	return false;
}

bool func_152(int iParam0)
{
	func_150(iParam0, 0, 0);
	if (func_151(iParam0))
	{
		return OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) == 0;
	}
	return false;
}

bool func_153(int iParam0, int iParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_49 && iParam1) != 0;
}

int func_154()
{
	return Global_1893611.f_2;
}

int func_155(int iParam0, int* iParam1, float* fParam2, Vector3* vParam3)
{
	return func_130(iParam0, "sClosedHash", iParam1, "fClosedHeading", fParam2, "vClosedPos", vParam3);
}

void func_156(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6)
{
	if (bParam6)
	{
		MISC::GET_GROUND_Z_FOR_3D_COORD(vParam2, &(vParam2.f_2), false);
	}
	Global_1051832.f_92[iParam0 /*75*/].f_6 = func_163(iParam1, vParam2, fParam5, 0, 0, 0);
	Global_1915643.f_3[iParam0 /*447*/].f_16 = Global_1051832.f_92[iParam0 /*75*/].f_6;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_92[iParam0 /*75*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_92[iParam0 /*75*/].f_6, 0);
	func_147(iParam0, 16384);
}

void func_157(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

bool func_158(struct<2> Param0)
{
	return func_259(Param0, 9, 12);
}

void func_159(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_49 = 0;
}

void func_160(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_50 = 0;
}

void func_161(int iParam0)
{
	Global_1051832.f_92[iParam0 /*75*/].f_1 = 0;
}

void func_162(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;

	if (Global_1051832.f_41 < 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1051832.f_41)
	{
		if (iParam0 == Global_1051832[iVar0])
		{
			iVar1 = iVar0;
			bVar2 = true;
		}
		else
		{
			iVar0++;
		}
	}
	if (!bVar2)
	{
		return;
	}
	Global_1051832.f_41 = (Global_1051832.f_41 - 1);
	if (Global_1051832.f_41 < 0)
	{
		Global_1051832.f_41 = 0;
	}
	Global_1051832[iVar1] = Global_1051832[Global_1051832.f_41];
}

int func_163(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6, bool bParam7)
{
	return TASK::CREATE_SCENARIO_POINT_HASH(iParam0, vParam1, fParam4, iParam5, iParam6, bParam7);
}

int func_164(int iParam0)
{
	switch (iParam0)
	{
		case 10:
			return 11;
		case 56:
			return 57;
		case 54:
			return 55;
		case 36:
			return 37;
		case 105:
			return 106;
		case 79:
			return 80;
		case 94:
			return 95;
		default:
			break;
	}
	return -1;
}

bool func_165(int iParam0, float fParam1)
{
	return (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1) != 0;
}

int func_166(int iParam0)
{
	int iVar0;
	float fVar1;
	vector3 vVar2;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;

	vVar2 = { 0f, 0f, 0f };
	if (!func_61(iParam0, &iVar0, &fVar1, &vVar2) || func_62(vVar2))
	{
		return 0;
	}
	iVar6 = 4;
	iVar5 = 0;
	while (iVar5 < 4)
	{
		if (Global_1051832.f_4447[iVar5 /*8*/] == -1)
		{
			iVar6 = iVar5;
		}
		else
		{
			iVar5++;
		}
	}
	if (iVar6 == 4)
	{
		return 0;
	}
	Global_1051832.f_4447[iVar6 /*8*/] = iParam0;
	Global_1051832.f_4447[iVar6 /*8*/].f_6 = func_163(iVar0, vVar2, fVar1, 0, 0, 0);
	Global_1051832.f_4447[iVar6 /*8*/].f_5 = iVar0;
	TASK::_SET_SCENARIO_POINT_FLAG(Global_1051832.f_4447[iVar6 /*8*/].f_6, 23, true);
	TASK::_0xA7479FB665361EDB(Global_1051832.f_4447[iVar6 /*8*/].f_6, 0);
	func_147(32, 16384);
	iVar7 = 0;
	iVar8 = 0;
	if (func_260(iParam0, &iVar7, &iVar8))
	{
		Global_1051832.f_4447[iVar6 /*8*/].f_3 = iVar7;
		Global_1051832.f_4447[iVar6 /*8*/].f_4 = iVar8;
	}
	return 1;
}

bool func_167(int iParam0, bool bParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_168(iParam0)))
	{
		return false;
	}
	if (bParam1 && !ENTITY::DOES_ENTITY_EXIST(func_174(iParam0)))
	{
		return false;
	}
	return !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(func_168(iParam0));
}

int func_168(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/].f_1;
}

bool func_169(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 12);
}

bool func_170(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 16);
}

bool func_171(int iParam0)
{
	return iParam0 != 0;
}

int func_172()
{
	return Global_1939089.f_26;
}

int func_173(int iParam0, int iParam1)
{
	int iVar0;

	if (Global_1939089.f_26 != iParam0)
	{
		Global_1939089.f_26 = iParam0;
		iVar0 = iParam1;
		if (!func_199(iParam1))
		{
			iVar0 = func_261(iParam0);
		}
		if (!func_199(iVar0))
		{
			iVar0 = func_200(func_262(Global_34));
		}
		if (!func_199(iVar0))
		{
			return 0;
		}
		LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1939089.f_26, func_263(iVar0));
		return 1;
	}
	return 0;
}

int func_174(int iParam0)
{
	int iVar0;

	iVar0 = func_168(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
	{
		return 0;
	}
	return PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
}

bool func_175()
{
	if (func_45() == -1)
	{
		return true;
	}
	return NETWORK::CAN_REGISTER_MISSION_OBJECTS(1);
}

float func_176(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST(vParam0, vParam3);
}

void func_177()
{
	if (Local_19 != 0)
	{
		STREAMING::REQUEST_ANIM_DICT(Local_19.f_6);
		STREAMING::REQUEST_MODEL(Local_19, false);
		Local_19.f_16 = 1;
	}
}

bool func_178()
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(Local_19.f_6))
	{
		return STREAMING::HAS_ANIM_DICT_LOADED(Local_19.f_6);
	}
	return true;
}

bool func_179()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;

	if (Local_19.f_5 <= 0)
	{
		return false;
	}
	iVar1 = func_180();
	iVar2 = func_181(iVar1);
	iVar3 = func_206(iVar1);
	iVar0 = 0;
	while (iVar0 <= (Local_19.f_5 - 1))
	{
		iVar4 = func_181(Local_19.f_1[iVar0]);
		iVar5 = func_206(Local_19.f_1[iVar0]);
		if (iVar4 == iVar2 && MISC::ABSI((iVar3 - iVar5)) <= 5)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_180()
{
	return Global_1902565;
}

int func_181(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

bool func_182(int iParam0, char* sParam1, char* sParam2, float fParam3)
{
	float fVar0;

	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, 1))
	{
		return false;
	}
	fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
	return MISC::ABSF(((1f - fVar0) - fParam3)) < 1008981770;
}

bool func_183(int iParam0, int iParam1, bool bParam2, int iParam3)
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

struct<2> func_184(int iParam0)
{
	int iVar0;

	iVar0 = func_264(iParam0);
	return func_212(-7.709348E+28f, iVar0);
}

void func_185(var uParam0, int iParam1, int iParam2)
{
	if (!STATS::STAT_ID_IS_VALID(&uParam0))
	{
		return;
	}
	STATS::_STAT_ID_INCREMENT_INT(&uParam0, iParam2);
}

float func_186(vector3 vParam0, int iParam3)
{
	return func_265(Global_33, vParam0, iParam3);
}

void func_187()
{
	func_266(&(iLocal_161[0]), 3.899542E-10f, 1159497859, -994631156, 1110785655);
	func_266(&(iLocal_161[1]), 3.899542E-10f, 1159479804, -994631156, 1110785655);
	func_266(&(iLocal_161[2]), 3.899542E-10f, 1159476580, -994734547, 1110785655);
	func_266(&(iLocal_161[3]), -2.063339E-36f, 1159476580, -994770649, 1110785655);
	func_266(&(iLocal_161[4]), 3.899542E-10f, 1159479804, -994874835, 1110785655);
	func_266(&(iLocal_161[5]), 3.899542E-10f, 1159481467, -994874835, 1110785655);
}

void func_188()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < iLocal_161)
	{
		func_267(&(iLocal_161[iVar0]));
		iVar0++;
	}
}

int func_189(var uParam0, var uParam1, var uParam2, vector3 vParam3, int iParam6, int iParam7, int iParam8)
{
	int iVar0;

	if (func_268(Global_33, vParam3, 1) > 1147207680)
	{
		return 1;
	}
	if (*uParam0)
	{
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				*uParam0 = 0;
			}
			else
			{
				return 1;
			}
		}
	}
	if (!TASK::DOES_SCENARIO_POINT_EXIST(*uParam2))
	{
		*uParam2 = TASK::FIND_SCENARIO_OF_TYPE_HASH(vParam3, iParam8, 1f, 0, false);
		return 0;
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(*uParam1))
	{
		iVar0 = TASK::GET_PROP_FOR_SCENARIO_POINT(*uParam2, "PrimaryItem");
		*uParam1 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0);
		TXD::REQUEST_STREAMED_TXD(iParam6, false);
		return 0;
	}
	else
	{
		if (!TXD::HAS_STREAMED_TXD_LOADED(iParam6))
		{
			TXD::REQUEST_STREAMED_TXD(iParam6, false);
			return 0;
		}
		if (ENTITY::DOES_ENTITY_EXIST(*uParam1))
		{
			if (!DECORATOR::DECOR_EXIST_ON(*uParam1, "letter_item"))
			{
				DECORATOR::DECOR_SET_INT(*uParam1, "letter_item", iParam7);
				return 0;
			}
			else
			{
				OBJECT::SET_CUSTOM_TEXTURES_ON_OBJECT(*uParam1, iParam6, 0, 0);
				*uParam0 = 1;
				return 1;
			}
		}
	}
	return 0;
}

bool func_190()
{
	if (Global_1572887.f_14 == -1)
	{
		return false;
	}
	return Global_1072759.f_4;
}

void func_191(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
		OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
	}
}

void func_192(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 2 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 2);
		}
	}
}

void func_193(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
		}
	}
}

void func_194(int iParam0, bool bParam1)
{
	if (func_151(iParam0))
	{
		if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 0 || bParam1)
		{
			OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 0);
		}
	}
}

bool func_195()
{
	return true;
}

bool func_196(int iParam0)
{
	if ((iParam0 == 22 || iParam0 == 39) && !func_269())
	{
		return true;
	}
	if (iParam0 == 66)
	{
		return true;
	}
	return false;
}

bool func_197()
{
	if (Global_13)
	{
		return false;
	}
	if (!func_270())
	{
		return false;
	}
	if (DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1939089.f_75.f_55))
	{
		return false;
	}
	if (func_271(-1 ^ 9, 0, 1))
	{
		return false;
	}
	return true;
}

char* func_198(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	char* sVar0;

	if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_1893611.f_162)))
	{
		sVar0 = func_272(Global_1893611.f_162);
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && bParam4)
	{
		sVar0 = func_274(func_273(Global_34));
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		if (!func_275(iParam0) || func_276(44))
		{
			switch (iParam0)
			{
				case 2:
					sVar0 = "LANDMARK_MERKINS_WALLER";
					break;
				case 3:
					sVar0 = "SETTLEMENT_LAGRAS";
					break;
				case 4:
					sVar0 = "HIDEOUT_LAKAY";
					break;
				case 1:
					sVar0 = "LANDMARK_MACOMBS_END";
					break;
				case 6:
					sVar0 = "LANDMARK_HAGEN_ORCHARDS";
					break;
				case 5:
					sVar0 = "TOWN_SAINTDENIS";
					break;
				case 8:
					sVar0 = "SETTLEMENT_GRAND_KORRIGAN";
					break;
				case 9:
					sVar0 = "HIDEOUT_SHADY_BELLE";
					break;
				case 10:
					sVar0 = "LANDMARK_SILTWATER_STRAND";
					break;
				case 11:
					sVar0 = "SETTLEMENT_APPLESEED_TIMBER_CO";
					break;
				case 12:
					sVar0 = "LANDMARK_BERYLS_DREAM";
					break;
				case 15:
					sVar0 = "SETTLEMENT_FORT_RIGGS_HOLDING_CAMP";
					break;
				case 16:
					sVar0 = "HIDEOUT_HANGING_DOG_RANCH";
					break;
				case 17:
					sVar0 = "HOMESTEAD_LONE_MULE_STEAD";
					break;
				case 19:
					sVar0 = "LANDMARK_MONTOS_REST";
					break;
				case 20:
					sVar0 = "LANDMARK_OWANJILA_DAM";
					break;
				case 21:
					sVar0 = "HOMESTEAD_PAINTED_SKY";
					break;
				case 22:
					sVar0 = "SETTLEMENT_PRONGHORN_RANCH";
					break;
				case 23:
					sVar0 = "LANDMARK_RIGGS_STATION";
					break;
				case 25:
					sVar0 = "HOMESTEAD_SHEPHERDS_RISE";
					break;
				case 26:
					sVar0 = "TOWN_STRAWBERRY";
					break;
				case 27:
					sVar0 = "LANDMARK_VALLEY_VIEW";
					break;
				case 28:
					sVar0 = "LANDMARK_WALLACE_STATION";
					break;
				case 30:
					sVar0 = "HOMESTEAD_WATSONS_CABIN";
					break;
				case 31:
					sVar0 = "LANDMARK_CANEBREAK_MANOR";
					break;
				case 32:
					sVar0 = "LANDMARK_COPPERHEAD_LANDING";
					break;
				case 33:
					sVar0 = "SETTLEMENT_SISIKA_PENITENTIARY";
					break;
				case 127:
					sVar0 = "TOWN_ARMADILLO";
					break;
				case 128:
					sVar0 = "SETTLEMENT_COOTS_CHAPEL";
					break;
				case 131:
					sVar0 = "SETTLEMENT_RIDGEWOOD_FARM";
					break;
				case 130:
					sVar0 = "LANDMARK_RILEYS_CHARGE";
					break;
				case 132:
					sVar0 = "HIDEOUT_TWIN_ROCKS";
					break;
				case 35:
					sVar0 = "LANDMARK_BACCHUS_BRIDGE";
					break;
				case 36:
					sVar0 = "HOMESTEAD_FIRWOOD_RISE";
					break;
				case 37:
					sVar0 = "SETTLEMENT_FORT_WALLACE";
					break;
				case 38:
					sVar0 = "HIDEOUT_SIX_POINT_CABIN";
					break;
				case 120:
					sVar0 = "HIDEOUT_GAPTOOTH_BREACH";
					break;
				case 122:
					sVar0 = "SETTLEMENT_RATHSKELLER_FORK";
					break;
				case 121:
					sVar0 = "TOWN_TUMBLEWEED";
					break;
				case 39:
					sVar0 = "SETTLEMENT_BEECHERS_HOPE";
					break;
				case 40:
					sVar0 = "TOWN_BLACKWATER";
					break;
				case 41:
					sVar0 = "LANDMARK_QUAKERS_COVE";
					break;
				case 42:
					sVar0 = "HOMESTEAD_ADLER_RANCH";
					break;
				case 53:
					sVar0 = "LANDMARK_CALUMET_RAVINE";
					break;
				case 44:
					sVar0 = "HOMESTEAD_CHEZ_PORTER";
					break;
				case 45:
					sVar0 = "HIDEOUT_COLTER";
					break;
				case 43:
					sVar0 = "LANDMARK_WINDOW_ROCK";
					break;
				case 47:
					sVar0 = "LANDMARK_MILLESANI_CLAIM";
					break;
				case 51:
					sVar0 = "LANDMARK_TEMPEST_RIM";
					break;
				case 58:
					sVar0 = "LANDMARK_THE_LOFT";
					break;
				case 60:
					sVar0 = "SETTLEMENT_WAPITI";
					break;
				case 52:
					sVar0 = "LANDMARK_EWING_BASIN";
					break;
				case 62:
					sVar0 = "SETTLEMENT_AGUASDULCES";
					break;
				case 64:
					sVar0 = "LANDMARK_CINCO_TORRES";
					break;
				case 65:
					sVar0 = "LANDMARK_LA_CAPILLA";
					break;
				case 66:
					sVar0 = "TOWN_MANICATO";
					break;
				case 135:
					sVar0 = "TOWN_MACFARLANES_RANCH";
					break;
				case 136:
					sVar0 = "SETTLEMENT_THIEVES_LANDING";
					break;
				case 67:
					sVar0 = "LANDMARK_OLD_GREENBANK_MILL";
					break;
				case 69:
					sVar0 = "HOMESTEAD_CARMODY_DELL";
					break;
				case 70:
					sVar0 = "SETTLEMENT_CORNWALL_KEROSENE_TAR";
					break;
				case 71:
					sVar0 = "HOMESTEAD_GUTHRIE_FARM";
					break;
				case 72:
					sVar0 = "LANDMARK_CUMBERLAND_FALLS";
					break;
				case 73:
					sVar0 = "HOMESTEAD_DOWNES_RANCH";
					break;
				case 74:
					sVar0 = "SETTLEMENT_EMERALD_RANCH";
					break;
				case 75:
					sVar0 = "LANDMARK_GRANGERS_HOGGERY";
					break;
				case 77:
					sVar0 = "HOMESTEAD_LARNED_SOD";
					break;
				case 79:
					sVar0 = "LANDMARK_LUCKYS_CABIN";
					break;
				case 80:
					sVar0 = "LANDMARK_FLATNECK_STATION";
					break;
				case 81:
					sVar0 = "TOWN_VALENTINE";
					break;
				case 82:
					sVar0 = "HOMESTEAD_ABERDEEN_PIG_FARM";
					break;
				case 83:
					sVar0 = "TOWN_ANNESBURG";
					break;
				case 84:
					sVar0 = "HIDEOUT_BEAVER_HOLLOW";
					break;
				case 87:
					sVar0 = "SETTLEMENT_BUTCHER_CREEK";
					break;
				case 85:
					sVar0 = "LANDMARK_BLACK_BALSAM_RISE";
					break;
				case 86:
					sVar0 = "LANDMARK_BRANDYWINE_DROP";
					break;
				case 88:
					sVar0 = "HOMESTEAD_DOVERHILL";
					break;
				case 91:
					sVar0 = "HOMESTEAD_MACLEANS_HOUSE";
					break;
				case 92:
					sVar0 = "LANDMARK_MOSSY_FLATS";
					break;
				case 93:
					sVar0 = "LANDMARK_ROANOKE_VALLEY";
					break;
				case 94:
					sVar0 = "HOMESTEAD_WILLARDS_REST";
					break;
				case 98:
					sVar0 = "TOWN_VANHORN";
					break;
				case 123:
					sVar0 = "SETTLEMENT_BENEDICT_POINT";
					break;
				case 124:
					sVar0 = "HIDEOUT_FORT_MERCER";
					break;
				case 125:
					sVar0 = "SETTLEMENT_PLAINVIEW";
					break;
				case 99:
					sVar0 = "SETTLEMENT_BRAITHWAITE_MANOR";
					break;
				case 100:
					sVar0 = "LANDMARK_BOLGER_GLADE";
					break;
				case 101:
					sVar0 = "SETTLEMENT_CALIGA_HALL";
					break;
				case 102:
					sVar0 = "HOMESTEAD_CATFISH_JACKSONS";
					break;
				case 104:
					sVar0 = "HIDEOUT_CLEMENS_POINT";
					break;
				case 105:
					sVar0 = "HOMESTEAD_COMPSONS_STEAD";
					break;
				case 106:
					sVar0 = "HOMESTEAD_HILL_HAVEN_RANCH";
					break;
				case 108:
					sVar0 = "HOMESTEAD_LONNIES_SHACK";
					break;
				case 110:
					sVar0 = "LANDMARK_RADLEYS_PASTURE";
					break;
				case 111:
					sVar0 = "TOWN_RHODES";
					break;
				case 114:
					sVar0 = "LANDMARK_BEAR_CLAW";
					break;
				case 116:
					sVar0 = "SETTLEMENT_MANZANITA_POST";
					break;
				case 117:
					sVar0 = "LANDMARK_PACIFIC_UNION_RAILROAD";
					break;
				case 118:
					sVar0 = "LANDMARK_TANNERS_REACH";
					break;
				case 139:
					sVar0 = "SETTLEMENT_CENTRAL_UNION_RAILROAD_CAMP";
					break;
			}
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0) || bParam5)
	{
		switch (iParam2)
		{
			case joaat("WATER_ARROYO_DE_LA_VIBORA"):
				sVar0 = "WATER_ARROYO_DE_LA_VIBORA";
				*bParam6 = 1;
				break;
			case joaat("WATER_AURORA_BASIN"):
				sVar0 = "WATER_AURORA_BASIN";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAHIA_DE_LA_PAZ"):
				sVar0 = "WATER_BAHIA_DE_LA_PAZ";
				*bParam6 = 1;
				break;
			case joaat("WATER_BARROW_LAGOON"):
				sVar0 = "WATER_BARROW_LAGOON";
				*bParam6 = 1;
				break;
			case joaat("WATER_BAYOU_NWA"):
				sVar0 = "DISTRICT_BAYOU_NWA";
				*bParam6 = 1;
				break;
			case joaat("WATER_CAIRN_LAKE"):
				sVar0 = "WATER_CAIRN_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_CATTIAL_POND"):
				sVar0 = "WATER_CATTAIL_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_DAKOTA_RIVER"):
				sVar0 = "WATER_DAKOTA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_DEADBOOT_CREEK"):
				sVar0 = "WATER_DEADBOOT_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_ELYSIAN_POOL"):
				sVar0 = "WATER_ELYSIAN_POOL";
				*bParam6 = 1;
				break;
			case joaat("WATER_FLAT_IRON_LAKE"):
				sVar0 = "WATER_FLAT_IRON_LAKE";
				*bParam6 = 1;
				break;
			case joaat("WATER_HAWKS_EYE_CREEK"):
				sVar0 = "WATER_HAWKS_EYE_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_HEARTLANDS_OVERFLOW"):
				sVar0 = "LANDMARK_HEARTLAND_OVERFLOW";
				*bParam6 = 1;
				break;
			case joaat("WATER_HOT_SPRINGS"):
				sVar0 = "WATER_COTORRA_SPRINGS";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_DON_JULIO"):
				sVar0 = "WATER_LAKE_DON_JULIO";
				*bParam6 = 1;
				break;
			case joaat("WATER_LAKE_ISABELLA"):
				sVar0 = "WATER_LAKE_ISABELLA";
				*bParam6 = 1;
				break;
			case joaat("WATER_LANNAHECHEE_RIVER"):
				sVar0 = "WATER_LANNAHECHEE_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LITTLE_CREEK_RIVER"):
				sVar0 = "WATER_LITTLE_CREEK_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_LOWER_MONTANA_RIVER"):
				sVar0 = "WATER_LOWER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_MATTLOCK_POND"):
				sVar0 = "WATER_MATTOCK_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_MOONSTONE_POND"):
				sVar0 = "WATER_MOONSTONE_POND";
				*bParam6 = 1;
				break;
			case joaat("WATER_O_CREAGHS_RUN"):
				sVar0 = "WATER_OCREAGHS_RUN";
				*bParam6 = 1;
				break;
			case joaat("WATER_OWANJILA"):
				sVar0 = "WATER_OWANJILA";
				*bParam6 = 1;
				break;
			case joaat("WATER_RINGNECK_CREEK"):
				sVar0 = "WATER_RINGNECK_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_SEA_OF_CORONADO"):
				sVar0 = "WATER_SEA_OF_CORONADO";
				*bParam6 = 1;
				break;
			case joaat("WATER_SOUTHFIELD_FLATS"):
				sVar0 = "WATER_SOUTHFIELD_FLATS";
				*bParam6 = 1;
				break;
			case joaat("WATER_SPIDER_GORGE"):
				sVar0 = "WATER_SPIDER_GORGE";
				*bParam6 = 1;
				break;
			case joaat("WATER_STILLWATER_CREEK"):
				sVar0 = "WATER_STILLWATER_CREEK";
				*bParam6 = 1;
				break;
			case joaat("WATER_UPPER_MONTANA_RIVER"):
				sVar0 = "WATER_UPPER_MONTANA_RIVER";
				*bParam6 = 1;
				break;
			case joaat("WATER_WHINYARD_STRAIT"):
				sVar0 = "WATER_WHINYARD_STRAIT";
				*bParam6 = 1;
				break;
			case joaat("WATER_KAMASSA_RIVER"):
				if (iParam1 == 10)
				{
					sVar0 = "WATER_KAMASSA_RIVER";
				}
				else if (iParam1 == 2)
				{
					sVar0 = "WATER_KAMASSA_RIVER_BLUEWATER_MARSH";
				}
				else
				{
					sVar0 = "WATER_KAMASSA_RIVER_BAYOU_NWA";
				}
				*bParam6 = 1;
				break;
			case joaat("WATER_SAN_LUIS_RIVER"):
				if (iParam1 == 4 || iParam1 == 12)
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_WEST_ELIZABETH";
				}
				else
				{
					sVar0 = "WATER_SAN_LUIS_RIVER_NEW_AUSTIN";
				}
				*bParam6 = 1;
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "DISTRICT_BAYOU_NWA";
				break;
			case 1:
				sVar0 = "DISTRICT_BIG_VALLEY";
				break;
			case 2:
				sVar0 = "DISTRICT_BLUEWATER_MARSH";
				break;
			case 3:
				sVar0 = "DISTRICT_CUMBERLAND_FOREST";
				break;
			case 4:
				sVar0 = "DISTRICT_GREAT_PLAINS";
				break;
			case 6:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 7:
				sVar0 = "DISTRICT_GRIZZLIES";
				break;
			case 8:
				sVar0 = "DISTRICT_GUARMA";
				break;
			case 9:
				sVar0 = "DISTRICT_HEARTLANDS";
				break;
			case 10:
				sVar0 = "DISTRICT_ROANOAKE_RIDGE";
				break;
			case 11:
				sVar0 = "DISTRICT_SCARLETT_MEADOWS";
				break;
			case 12:
				sVar0 = "DISTRICT_TALL_TREES";
				break;
			case 13:
				sVar0 = "DISTRICT_GAPTOOTH_RIDGE";
				break;
			case 14:
				sVar0 = "DISTRICT_RIO_BRAVO";
				break;
			case 15:
				sVar0 = "DISTRICT_CHOLLA_SPRINGS";
				break;
			case 16:
				sVar0 = "DISTRICT_HENNIGANS_STEAD";
				break;
		}
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		switch (iParam3)
		{
			case 0:
				sVar0 = "STATE_AMBARINO";
				break;
			case 2:
				sVar0 = "STATE_LEMOYNE";
				break;
			case 3:
				sVar0 = "STATE_WEST_ELIZABETH";
				break;
			case 4:
				sVar0 = "STATE_NEW_AUSTIN";
				break;
			case 1:
				sVar0 = "STATE_NEW_HANOVER";
				break;
			case 5:
				sVar0 = "STATE_GUARMA";
				break;
		}
	}
	return sVar0;
}

bool func_199(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_200(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 2;
		case 2:
			return 2;
		case 11:
			return 2;
		case 9:
			return 1;
		case 10:
			return 1;
		case 3:
			return 1;
		case 4:
			return 3;
		case 12:
			return 3;
		case 1:
			return 3;
		case 5:
			return 0;
		case 6:
			return 0;
		case 7:
			return 0;
		case 8:
			return 5;
		case 13:
			return 4;
		case 14:
			return 4;
		case 15:
			return 4;
		case 16:
			return 4;
		default:
			break;
	}
	return -1;
}

int func_201(int iParam0)
{
	int iVar0;
	struct<2> Var1;
	var uVar3;

	if (!func_199(iParam0))
	{
		return -1;
	}
	if (Global_1572887.f_14 == -1)
	{
		return Global_38.f_198[iParam0 /*12*/];
	}
	iVar0 = 0;
	Var1 = { func_277(PLAYER::PLAYER_ID()) };
	BOUNTY::BOUNTY_GET_BOUNTY_ON_PLAYER(&Var1, &uVar3);
	iVar0 = 0;
	while (iVar0 < 6)
	{
		Global_1072759.f_21262[iVar0 /*12*/] = uVar3;
		iVar0++;
	}
	return Global_1072759.f_21262[iParam0 /*12*/];
}

int func_202(int iParam0)
{
	switch (iParam0)
	{
		case joaat("WATER_AURORA_BASIN"):
			return 0;
		case joaat("WATER_BARROW_LAGOON"):
			return 0;
		case joaat("WATER_BAYOU_NWA"):
			return 2;
		case joaat("WATER_BEARTOOTH_BECK"):
			return 1;
		case joaat("WATER_CAIRN_LAKE"):
			return 0;
		case joaat("WATER_CALMUT_RAVINE"):
			return 0;
		case joaat("WATER_CATTIAL_POND"):
			return 0;
		case joaat("WATER_DAKOTA_RIVER"):
			return 1;
		case joaat("WATER_DEADBOOT_CREEK"):
			return 1;
		case joaat("WATER_DEWBERRY_CREEK"):
			return 1;
		case joaat("WATER_ELYSIAN_POOL"):
			return 0;
		case joaat("WATER_FLAT_IRON_LAKE"):
			return 0;
		case joaat("WATER_HAWKS_EYE_CREEK"):
			return 1;
		case joaat("WATER_HEARTLANDS_OVERFLOW"):
			return 0;
		case joaat("WATER_HOT_SPRINGS"):
			return 0;
		case joaat("WATER_KAMASSA_RIVER"):
			return 1;
		case joaat("WATER_LAKE_DON_JULIO"):
			return 0;
		case joaat("WATER_LAKE_ISABELLA"):
			return 0;
		case joaat("WATER_LANNAHECHEE_RIVER"):
			return 1;
		case joaat("WATER_LITTLE_CREEK_RIVER"):
			return 1;
		case joaat("WATER_LOWER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_MATTLOCK_POND"):
			return 0;
		case joaat("WATER_MOONSTONE_POND"):
			return 0;
		case joaat("WATER_O_CREAGHS_RUN"):
			return 0;
		case joaat("WATER_OWANJILA"):
			return 0;
		case joaat("WATER_RINGNECK_CREEK"):
			return 1;
		case joaat("WATER_SAN_LUIS_RIVER"):
			return 1;
		case joaat("WATER_SEA_OF_CORONADO"):
			return 1;
		case joaat("WATER_SOUTHFIELD_FLATS"):
			return 0;
		case joaat("WATER_SPIDER_GORGE"):
			return 1;
		case joaat("WATER_STILLWATER_CREEK"):
			return 1;
		case joaat("WATER_UPPER_MONTANA_RIVER"):
			return 1;
		case joaat("WATER_WHINYARD_STRAIT"):
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_203(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "WATER_TYPE_LAKE";
		case 1:
			return "WATER_TYPE_RIVER";
		case 2:
			return "WATER_TYPE_SWAMP";
		default:
			break;
	}
	return "";
}

bool func_204(int iParam0, int iParam1)
{
	if (!func_10(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_271[iParam0] && iParam1) != 0;
	}
	return (Global_1072759.f_21335[iParam0] && iParam1) != 0;
}

bool func_205(int iParam0, int iParam1)
{
	if (!func_199(iParam0))
	{
		return false;
	}
	if (Global_1572887.f_14 == -1)
	{
		return (Global_38.f_198[iParam0 /*12*/].f_5 && iParam1) != 0;
	}
	return (Global_1072759.f_21262[iParam0 /*12*/].f_5 && iParam1) != 0;
}

int func_206(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

float func_207(float fParam0)
{
	return ((fParam0 * 1072064102) + 1107296256);
}

char* func_208(char* sParam0, int iParam1)
{
	if (iParam1 == 4.808429E-35f)
	{
		return MISC::VAR_STRING(10, "LITERAL_STRING", sParam0);
	}
	return func_278(MISC::VAR_STRING(10, "LITERAL_STRING", sParam0), iParam1);
}

int func_209(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	struct<4> Var0;
	vector3 vVar13;
	int iVar16;

	Var0 = -2;
	Var0 = iParam2;
	Var0.f_1 = iParam3;
	Var0.f_2 = iParam4;
	Var0.f_3 = iParam5;
	vVar13.f_1 = sParam0;
	vVar13.f_2 = sParam1;
	iVar16 = UIFEED::_UI_FEED_POST_LOCATION_SHARD(&Var0, &vVar13, bParam6, bParam7);
	return iVar16;
}

bool func_210(int iParam0)
{
	if (func_275(iParam0))
	{
		if (!func_276(44))
		{
			return false;
		}
	}
	return true;
}

void func_211(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

struct<2> func_212(float fParam0, int iParam1)
{
	struct<2> Var0;

	Var0 = fParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_213(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 5)
	{
		return;
	}
	if (!func_118(iParam0))
	{
		return;
	}
	if (VOLUME::DOES_VOLUME_EXIST(Global_26690[iParam0]))
	{
		VOLUME::DELETE_VOLUME(Global_26690[iParam0]);
	}
	if (Global_26690.f_6[iParam0] != 1f)
	{
		Global_26690.f_6[iParam0] = 1f;
	}
}

void func_214(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			VOLUME::DELETE_VOLUME(Global_1289470.f_47[0]);
			VOLUME::DELETE_VOLUME(Global_1289470.f_47[1]);
			VOLUME::DELETE_VOLUME(Global_1289470.f_50[0]);
			VOLUME::DELETE_VOLUME(Global_1289470.f_50[1]);
			break;
		case 81:
			VOLUME::DELETE_VOLUME(Global_1289470.f_47[1]);
			VOLUME::DELETE_VOLUME(Global_1289470.f_50[1]);
			break;
	}
}

void func_215(int iParam0)
{
	if (VOLUME::DOES_VOLUME_EXIST(iParam0))
	{
		VOLUME::DELETE_VOLUME(iParam0);
	}
}

void func_216()
{
	if (ENTITY::DOES_ENTITY_EXIST(Local_19.f_17))
	{
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_7, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_7, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_8, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_8, -1000f);
		}
		if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_9, 1))
		{
			ENTITY::STOP_ENTITY_ANIM(Local_19.f_17, Local_19.f_6, Local_19.f_9, -1000f);
		}
	}
	if (Local_19.f_16)
	{
		if (STREAMING::HAS_ANIM_DICT_LOADED(Local_19.f_6))
		{
			STREAMING::REMOVE_ANIM_DICT(Local_19.f_6);
		}
		Local_19.f_16 = 0;
	}
	if (Local_19.f_18 != 0)
	{
		ENTITY::_UNPIN_MAP_ENTITY(Local_19.f_18);
	}
}

void func_217(int iParam0)
{
	int iVar0;
	int iVar1;

	if (func_134(Global_1915643.f_3[iParam0 /*447*/].f_21) && func_279(Global_1915643.f_3[iParam0 /*447*/].f_21))
	{
		func_280(Global_1915643.f_3[iParam0 /*447*/].f_21, 0, 1, 0, 0);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_10 = { 0f, 0f, 0f };
	Global_1915643.f_3[iParam0 /*447*/].f_21 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_22 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_16 = 0;
	Global_1915643.f_3[iParam0 /*447*/].f_1 = 0;
	if (PED::_IS_SCENARIO_BLOCKING_AREA_VALID(Global_1915643.f_3[iParam0 /*447*/].f_35))
	{
		PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_1915643.f_3[iParam0 /*447*/].f_35, false);
	}
	func_281(Global_1915643.f_3[iParam0 /*447*/].f_9, 0);
	func_282(iParam0, 1.084202E-19f);
	iVar1 = func_283(iParam0);
	if (iVar1 >= 15)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < iVar1)
		{
			func_129(Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/]);
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/] = 0;
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_1 = { 0f, 0f, 0f };
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_4 = 0f;
			Global_1915643.f_3[iParam0 /*447*/].f_318[iVar0 /*6*/].f_5 = 0;
			iVar0++;
		}
		Global_1915643.f_3[iParam0 /*447*/].f_409 = 0;
	}
	if (Global_1915643.f_3[iParam0 /*447*/].f_441 != 0)
	{
		UIFEED::_UI_FEED_CLEAR_HELP_TEXT_FEED(Global_1915643.f_3[iParam0 /*447*/].f_441, false);
	}
	Global_1915643.f_3[iParam0 /*447*/].f_23 = 0;
	func_284(iParam0);
	Global_1915643.f_3[iParam0 /*447*/].f_9 = -1;
	Global_1915643.f_3[iParam0 /*447*/].f_8 = -1;
}

bool func_218(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return false;
	}
	if (!func_134(iParam0))
	{
		return false;
	}
	return (Global_9899[iParam0 /*2*/] && iParam1) != 0;
}

int func_219(int iParam0, bool bParam1)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	if (!func_218(iParam0, 2))
	{
		return 0;
	}
	if (func_235(iParam0) == 0)
	{
		return 1;
	}
	if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(func_168(iParam0)))
	{
		return 1;
	}
	if (func_218(iParam0, 1) && !bParam1)
	{
		func_285(iParam0, 128);
		return 1;
	}
	func_237(iParam0, 129);
	func_286(iParam0);
	PERSCHAR::_DELETE_PERSCHAR(func_168(iParam0));
	func_236(iParam0, 0);
	return 1;
}

int func_220(int iParam0)
{
	switch (iParam0)
	{
		case 27:
		case 28:
		case 29:
			return 1;
		default:
			break;
	}
	return 0;
}

int func_221(int iParam0)
{
	switch (iParam0)
	{
		case 33:
		case 37:
			return 1;
		default:
			break;
	}
	return 0;
}

void func_222()
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 4)
	{
		Global_1051832.f_4447[iVar0 /*8*/] = -1;
		Global_1051832.f_4447[iVar0 /*8*/].f_3 = 0;
		Global_1051832.f_4447[iVar0 /*8*/].f_4 = 0;
		Global_1051832.f_4447[iVar0 /*8*/].f_7 = 0;
		if (TASK::DOES_SCENARIO_POINT_EXIST(Global_1051832.f_4447[iVar0 /*8*/].f_6))
		{
			TASK::_DELETE_SCENARIO_POINT(Global_1051832.f_4447[iVar0 /*8*/].f_6);
		}
		iVar0++;
	}
	func_162(32);
}

int func_223(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

void func_224(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;

	iVar0 = func_225(*iParam0);
	iVar1 = func_227(*iParam0);
	if (iParam1 < 1 || iParam1 > func_287(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

int func_225(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

void func_226(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - (*iParam0 && 1.128475E-36f));
	*iParam0 = (*iParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

int func_227(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_288(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

void func_228(int iParam0, int iParam1)
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

int func_229(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_01"):
			return 521;
		case -2141419899:
			return 404;
		case -2106445152:
			return 277;
		case -2106214197:
			return 102;
		case -2101264851:
			return 192;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_02"):
			return 470;
		case -2073072369:
			return 57;
		case -2069570138:
			return 25;
		case joaat("WS_MP_FETCH_OTH_TALL_TREES"):
			return 394;
		case -2058120606:
			return 194;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_04"):
			return 464;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_UNLOCK"):
			return 338;
		case -2038424081:
			return 49;
		case -2034257789:
			return 90;
		case -2022369555:
			return 251;
		case -2021582629:
			return 110;
		case -2020023971:
			return 263;
		case -1957523409:
			return 205;
		case -1952856164:
			return 163;
		case -1949204933:
			return 261;
		case joaat("WS_MP_CAMP_DEFEND_RADLEYS_PASTURE"):
			return 387;
		case -1939389836:
			return 416;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_04"):
			return 428;
		case -1925798111:
			return 41;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_03"):
			return 439;
		case joaat("WS_MP_TREASURE_MAP_INTRO_VALENTINE_02"):
			return 403;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_03"):
			return 463;
		case joaat("WS_MP_CAMP_DEFEND_ROANOKE_CIRCLE"):
			return 380;
		case -1852605133:
			return 10;
		case joaat("WS_MP_TREASURE_MAP_INTRO_RHODES_03"):
			return 409;
		case -1847672446:
			return 312;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_04"):
			return 504;
		case -1840704908:
			return 274;
		case -1838712533:
			return 26;
		case -1838352012:
			return 55;
		case -1835851517:
			return 54;
		case -1831552326:
			return 121;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_02"):
			return 446;
		case -1825294305:
			return 252;
		case -1824738758:
			return 262;
		case -1818850842:
			return 239;
		case -1808329564:
			return 411;
		case -1799960545:
			return 243;
		case -1764522338:
			return 308;
		case -1763509974:
			return 139;
		case -1753769127:
			return 398;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_03"):
			return 479;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_04"):
			return 524;
		case -1741667789:
			return 62;
		case -1738165526:
			return 3;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_03"):
			return 519;
		case -1718674470:
			return 23;
		case -1717960576:
			return 59;
		case -1711895055:
			return 13;
		case -1706438978:
			return 220;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_01"):
			return 421;
		case -1700452710:
			return 317;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_02"):
			return 466;
		case -1674179981:
			return 53;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_03"):
			return 527;
		case -1666278201:
			return 33;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_02"):
			return 486;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_02"):
			return 438;
		case -1612662716:
			return 198;
		case joaat("WS_MP_HIDEOUT_CUMBERLAND_FALLS"):
			return 354;
		case -1608141409:
			return 538;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK"):
			return 336;
		case -1582926490:
			return 144;
		case -1579419919:
			return 145;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_02"):
			return 434;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_03"):
			return 503;
		case -1558439474:
			return 286;
		case -1556041029:
			return 410;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_02"):
			return 518;
		case -1532284567:
			return 114;
		case -1530132748:
			return 296;
		case -1524512402:
			return 206;
		case -1523910291:
			return 153;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_03"):
			return 523;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_02"):
			return 462;
		case joaat("WS_MP_HIDEOUT_SEA_OF_CORONADO"):
			return 370;
		case -1447311849:
			return 321;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_04"):
			return 528;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_01"):
			return 465;
		case -1436021162:
			return 170;
		case -1433686245:
			return 12;
		case -1425209566:
			return 32;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_04"):
			return 472;
		case -1419919497:
			return 22;
		case -1414537028:
			return 71;
		case -1405998267:
			return 103;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_02"):
			return 478;
		case -1387772214:
			return 407;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_03"):
			return 475;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_03"):
			return 487;
		case -1344601768:
			return 347;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_04"):
			return 476;
		case joaat("WS_MP_HIDEOUT_ROCKY_SEVEN"):
			return 362;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_04"):
			return 532;
		case -1329135070:
			return 138;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_01"):
			return 437;
		case -1311865656:
			return 37;
		case joaat("WS_MP_HIDEOUT_QUAKERS_COVE"):
			return 352;
		case joaat("WS_MP_TREASURE_MAP_DAKOTA_RIVER_BEND_01"):
			return 461;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_02"):
			return 426;
		case joaat("WS_MP_HIDEOUT_THE_LOFT"):
			return 353;
		case -1282804314:
			return 255;
		case -1278074582:
			return 169;
		case -1271608261:
			return 96;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_03"):
			return 423;
		case -1257057567:
			return 21;
		case -1241340344:
			return 285;
		case -1236261996:
			return 222;
		case -1232809834:
			return 111;
		case -1230112817:
			return 168;
		case -1223121209:
			return 124;
		case -1215445344:
			return 129;
		case -1209597203:
			return 365;
		case -1206122982:
			return 154;
		case -1187950766:
			return 45;
		case -1181950077:
			return 400;
		case -1179948750:
			return 134;
		case -1170496998:
			return 46;
		case -1164215952:
			return 221;
		case joaat("WS_MP_CAMP_DEFEND_BLUEWATER_MARSH"):
			return 391;
		case -1151084372:
			return 122;
		case -1145519186:
			return 98;
		case joaat("WS_MP_JAIL_DOORS_BLACKWATER_LOCK"):
			return 339;
		case -1124061431:
			return 229;
		case -1123615607:
			return 29;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_03"):
			return 443;
		case -1095341658:
			return 408;
		case -1080627546:
			return 314;
		case -1077783786:
			return 191;
		case -1063147448:
			return 149;
		case -1062490780:
			return 77;
		case -1060078174:
			return 226;
		case -1056767524:
			return 174;
		case -1053549743:
			return 56;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_RIDGE"):
			return 382;
		case -1029225159:
			return 104;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_03"):
			return 431;
		case -1014145132:
			return 273;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_04"):
			return 460;
		case -978957786:
			return 237;
		case -959357075:
			return 36;
		case -950054349:
			return 150;
		case -947815572:
			return 399;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_03"):
			return 511;
		case -939420910:
			return 44;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_04"):
			return 424;
		case -925071604:
			return 541;
		case -919512195:
			return 40;
		case joaat("WS_MP_HIDEOUT_RATTLESNAKE_HOLLOW"):
			return 368;
		case joaat("WS_MP_HIDEOUT_CUERA_SECO"):
			return 366;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_04"):
			return 500;
		case joaat("WS_MP_FETCH_OTH_SHEPHERDS_RISE"):
			return 393;
		case joaat("WS_MP_CAMP_DEFEND_TALL_TREES"):
			return 389;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_01"):
			return 505;
		case -879507474:
			return 223;
		case -868076593:
			return 82;
		case -857964358:
			return 81;
		case -853383233:
			return 63;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_04"):
			return 432;
		case joaat("WS_MP_HIDEOUT_CHOLLA_SPRINGS"):
			return 371;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_03"):
			return 419;
		case -828139293:
			return 246;
		case -812641169:
			return 534;
		case -811637947:
			return 232;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_01"):
			return 493;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_02"):
			return 514;
		case -796902762:
			return 86;
		case -792853067:
			return 240;
		case -789397228:
			return 248;
		case -785605431:
			return 236;
		case joaat("WS_MP_INTRO_HIDEOUT_RHODES"):
			return 328;
		case -764163380:
			return 215;
		case -748969569:
			return 76;
		case -741351766:
			return 58;
		case -736853952:
			return 302;
		case joaat("WS_MP_HIDEOUT_OLD_BACCHUS_PLACE"):
			return 372;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_02"):
			return 530;
		case -699277634:
			return 4;
		case joaat("WS_MP_HIDEOUT_FORT_RIGGS"):
			return 355;
		case -683458244:
			return 78;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_02"):
			return 458;
		case -666014935:
			return 155;
		case -664512648:
			return 65;
		case -664252410:
			return 188;
		case -644722288:
			return 247;
		case -640663440:
			return 320;
		case -639037538:
			return 183;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_04"):
			return 512;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_UNLOCK"):
			return 342;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_02"):
			return 494;
		case -628542779:
			return 69;
		case -622554983:
			return 306;
		case -618620429:
			return 185;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_03"):
			return 471;
		case joaat("WS_MP_CAMP_DEFEND_GAPTOOTH_BREACH"):
			return 383;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_02"):
			return 506;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_04"):
			return 492;
		case -554519756:
			return 535;
		case -545450213:
			return 313;
		case -538889627:
			return 173;
		case -538880323:
			return 172;
		case -534215902:
			return 128;
		case joaat("WS_MP_CAMP_DEFEND_GREAT_PLAINS_CIRCLE"):
			return 379;
		case -524145696:
			return 115;
		case -523522517:
			return 300;
		case -515561750:
			return 225;
		case joaat("WS_MP_FORT_WALLACE_DOORS_UNLOCK_HOLD_OPEN"):
			return 337;
		case -503955743:
			return 235;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_BLACKWATER"):
			return 326;
		case -502324015:
			return 8;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_03"):
			return 515;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_02"):
			return 418;
		case -491981251:
			return 184;
		case -489737721:
			return 401;
		case -468693731:
			return 109;
		case -464836488:
			return 254;
		case -460024530:
			return 349;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_03"):
			return 531;
		case -441204543:
			return 533;
		case -434590080:
			return 212;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_03"):
			return 459;
		case -404698347:
			return 202;
		case -397760715:
			return 141;
		case -396624371:
			return 373;
		case -389056691:
			return 257;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_03"):
			return 507;
		case joaat("WS_MP_CAMP_DEFEND_HENNIGANS_STEAD"):
			return 388;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_01"):
			return 429;
		case -360036154:
			return 304;
		case -356975260:
			return 101;
		case joaat("WS_MP_HIDEOUT_REPENTANCE"):
			return 369;
		case -350863510:
			return 160;
		case -349064220:
			return 298;
		case -334729750:
			return 67;
		case -333135263:
			return 334;
		case -330120947:
			return 333;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_03"):
			return 491;
		case -311373772:
			return 539;
		case -306246697:
			return 311;
		case -299522880:
			return 319;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_01"):
			return 433;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_LOCK"):
			return 345;
		case -270094635:
			return 253;
		case -261141318:
			return 30;
		case -259123672:
			return 231;
		case -254562075:
			return 130;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_01"):
			return 417;
		case -238080464:
			return 119;
		case -233743613:
			return 258;
		case joaat("WS_MP_TREASURE_MAP_SAN_LUIS_SHORE_02"):
			return 522;
		case -223469678:
			return 201;
		case -220282381:
			return 137;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_04"):
			return 516;
		case joaat("WS_MP_JAIL_DOORS_VALENTINE_UNLOCK"):
			return 344;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_02"):
			return 482;
		case -191424539:
			return 147;
		case -182889087:
			return 175;
		case -154581735:
			return 294;
		case -150493654:
			return 95;
		case -129643890:
			return 11;
		case joaat("WS_MP_TREASURE_MAP_BLUEWATER_MARSH_02"):
			return 430;
		case joaat("WS_MP_HIDEOUT_FARMHOUSE"):
			return 350;
		case -108307814:
			return 28;
		case -102827640:
			return 402;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_02"):
			return 498;
		case -99303535:
			return 165;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_02"):
			return 490;
		case joaat("WS_MP_TREASURE_MAP_BENEDICT_POINT_02"):
			return 422;
		case -86199844:
			return 143;
		case -80522843:
			return 152;
		case -76237062:
			return 309;
		case joaat("WS_MP_TREASURE_MAP_NORTH_MACFARLANES_04"):
			return 508;
		case -75024673:
			return 244;
		case joaat("WS_MP_TREASURE_MAP_BURNT_TOWN_04"):
			return 440;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_04"):
			return 452;
		case -63926460:
			return 87;
		case joaat("WS_MP_HIDEOUT_COLTER"):
			return 357;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_03"):
			return 467;
		case -35658630:
			return 24;
		case -25901845:
			return 275;
		case -9438024:
			return 127;
		case -1:
			return 0;
		case 0:
			return 1;
		case 2639906:
			return 151;
		case 8924991:
			return 282;
		case 16844748:
			return 405;
		case 26054262:
			return 323;
		case 26245360:
			return 224;
		case 38162571:
			return 72;
		case 52706132:
			return 230;
		case 54073871:
			return 74;
		case 61537448:
			return 540;
		case joaat("WS_MP_CAMP_DEFEND_NEW_HANOVER"):
			return 390;
		case joaat("WS_MP_INTRO_HIDEOUT_TUMBLEWEED"):
			return 331;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_01"):
			return 453;
		case joaat("WS_MP_FETCH_OTH_CASTORS"):
			return 395;
		case 94263042:
			return 276;
		case 106479759:
			return 99;
		case 141950038:
			return 112;
		case joaat("WS_MP_TREASURE_MAP_WEST_HILL_HAVEN_01"):
			return 529;
		case 153152452:
			return 84;
		case 168171957:
			return 181;
		case 171499483:
			return 268;
		case 187862543:
			return 16;
		case 192515737:
			return 14;
		case 198200492:
			return 228;
		case 210001842:
			return 60;
		case joaat("WS_MP_TREASURE_MAP_KAMASSA_RIVER_01"):
			return 489;
		case 224551212:
			return 140;
		case 227918160:
			return 180;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_TUMBLEWEED"):
			return 327;
		case 235928616:
			return 271;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_01"):
			return 517;
		case 249726958:
			return 162;
		case 269047710:
			return 52;
		case 273461605:
			return 79;
		case 280705402:
			return 93;
		case 282809459:
			return 117;
		case 299694527:
			return 260;
		case 300221584:
			return 136;
		case 302205488:
			return 322;
		case 311708813:
			return 195;
		case 320943355:
			return 131;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_01"):
			return 509;
		case 330026330:
			return 64;
		case 345808947:
			return 272;
		case 356365161:
			return 47;
		case 371850993:
			return 266;
		case 373691918:
			return 186;
		case 374115931:
			return 88;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_04"):
			return 484;
		case 405586984:
			return 34;
		case 407136781:
			return 171;
		case 409602249:
			return 278;
		case 417081698:
			return 17;
		case 417525590:
			return 288;
		case 420709909:
			return 42;
		case 424920933:
			return 544;
		case 426191476:
			return 15;
		case 434558613:
			return 196;
		case 439465264:
			return 106;
		case 440043364:
			return 31;
		case 442317566:
			return 287;
		case 449774763:
			return 214;
		case 459290420:
			return 316;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_LOCK"):
			return 341;
		case 469053995:
			return 218;
		case 473295046:
			return 2;
		case 476714362:
			return 219;
		case 478884033:
			return 146;
		case 479419429:
			return 290;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_CIRCLE"):
			return 377;
		case 514932331:
			return 233;
		case 522677506:
			return 264;
		case 526003171:
			return 392;
		case 527226204:
			return 157;
		case 544152906:
			return 113;
		case 559573222:
			return 238;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_03"):
			return 455;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_03"):
			return 447;
		case joaat("WS_MP_HIDEOUT_ABANDONED_MINING_STATION"):
			return 358;
		case 588987611:
			return 177;
		case joaat("WS_MP_JAIL_DOORS_SAINT_DENIS_UNLOCK"):
			return 340;
		case 618699440:
			return 75;
		case joaat("WS_MP_HIDEOUT_GAPTOOTH"):
			return 375;
		case 630808005:
			return 126;
		case joaat("WS_MP_TREASURE_MAP_EAST_WATSONS_01"):
			return 469;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_01"):
			return 481;
		case 651395116:
			return 279;
		case 664571177:
			return 297;
		case 665676602:
			return 281;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_03"):
			return 499;
		case 689024866:
			return 132;
		case 689930684:
			return 204;
		case 704802028:
			return 176;
		case joaat("WS_MP_TREASURE_MAP_HAWKSEYE_CREEK_03"):
			return 483;
		case 723021499:
			return 250;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_02"):
			return 474;
		case joaat("WS_MP_CAMP_DEFEND_TWO_ROCKS"):
			return 381;
		case 753127042:
			return 48;
		case 757752139:
			return 107;
		case joaat("WS_MP_HIDEOUT_SHIP_ROCK"):
			return 361;
		case 791041526:
			return 18;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_02"):
			return 454;
		case joaat("WS_MP_TREASURE_MAP_DIABLO_RIDGE_04"):
			return 468;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_02"):
			return 502;
		case 817925178:
			return 227;
		case joaat("WS_MP_TREASURE_MAP_GAPTOOTH_BREACH_01"):
			return 473;
		case 831940854:
			return 406;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_02"):
			return 450;
		case 865557632:
			return 536;
		case 868326136:
			return 270;
		case joaat("WS_MP_CAMP_DEFEND_CHOLLA_SPRINGS"):
			return 384;
		case 885203519:
			return 315;
		case joaat("WS_MP_CAMP_DEFEND_GRIZZLIES_CIRCLE"):
			return 378;
		case joaat("WS_MP_HIDEOUT_CAMP_PIKES"):
			return 374;
		case joaat("WS_MP_TREASURE_MAP_NORTH_RIDGEWOOD_02"):
			return 510;
		case 929582877:
			return 367;
		case 931649776:
			return 211;
		case 932909855:
			return 283;
		case 943561238:
			return 415;
		case 945612176:
			return 234;
		case joaat("WS_MP_JAIL_DOORS_STRAWBERRY_LOCK"):
			return 343;
		case 965986934:
			return 19;
		case 976539083:
			return 295;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_02"):
			return 442;
		case 1010885152:
			return 7;
		case 1015669983:
			return 120;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_01"):
			return 445;
		case joaat("WS_MP_TREASURE_MAP_NORTH_CLINGMAN_01"):
			return 501;
		case 1050128548:
			return 269;
		case 1064154891:
			return 108;
		case 1074873669:
			return 142;
		case 1112996351:
			return 537;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_01"):
			return 485;
		case 1140218954:
			return 27;
		case 1151197909:
			return 242;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_03"):
			return 451;
		case joaat("WS_MP_TREASURE_MAP_NORTH_TUMBLEWEED_01"):
			return 513;
		case joaat("WS_MP_HIDEOUT_TALL_TREES"):
			return 360;
		case 1160698568:
			return 133;
		case 1164928979:
			return 156;
		case joaat("WS_MP_INTRO_HIDEOUT_BLACKWATER"):
			return 330;
		case 1167397384:
			return 292;
		case 1177464213:
			return 38;
		case 1186594126:
			return 217;
		case 1193080109:
			return 182;
		case 1195508693:
			return 542;
		case 1203043430:
			return 259;
		case 1205826474:
			return 83;
		case 1207048789:
			return 167;
		case 1213993593:
			return 158;
		case 1221801385:
			return 310;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_04"):
			return 480;
		case joaat("WS_MP_HIDEOUT_LAKAY"):
			return 346;
		case 1248935549:
			return 414;
		case 1250636944:
			return 245;
		case joaat("WS_MP_TREASURE_MAP_CATTAIL_POND_04"):
			return 448;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_01"):
			return 441;
		case joaat("WS_MP_CAMP_DEFEND_LITTLE_CREEK"):
			return 386;
		case joaat("WS_MP_HIDEOUT_BEAVER_HOLLOW"):
			return 348;
		case 1306158345:
			return 199;
		case joaat("WS_MP_HIDEOUT_STILLWATER_STRANDS"):
			return 356;
		case joaat("WS_MP_TREASURE_MAP_BARDS_CROSSING_04"):
			return 420;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_01"):
			return 525;
		case 1350371763:
			return 20;
		case 1350391819:
			return 73;
		case 1352699670:
			return 256;
		case 1358491857:
			return 249;
		case 1360745816:
			return 80;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_04"):
			return 496;
		case 1376646519:
			return 210;
		case 1399676951:
			return 207;
		case 1410198831:
			return 209;
		case 1421300489:
			return 413;
		case 1433244935:
			return 164;
		case 1441416901:
			return 208;
		case 1453909576:
			return 123;
		case 1466547629:
			return 118;
		case 1478132521:
			return 303;
		case joaat("WS_MP_TREASURE_MAP_CITADEL_ROCK_01"):
			return 449;
		case 1485195808:
			return 50;
		case 1485494263:
			return 100;
		case 1488286867:
			return 280;
		case 1488453464:
			return 318;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_01"):
			return 425;
		case 1497516462:
			return 5;
		case 1500064347:
			return 70;
		case 1509509592:
			return 35;
		case 1512816328:
			return 166;
		case 1517904467:
			return 203;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_03"):
			return 435;
		case joaat("WS_MP_TREASURE_MAP_CUMBERLAND_FOREST_WEST_01"):
			return 457;
		case 1522511407:
			return 265;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_VALENTINE"):
			return 325;
		case 1557082963:
			return 161;
		case joaat("WS_MP_CAMP_DEFEND_RIO_BRAVO"):
			return 385;
		case 1582370975:
			return 332;
		case 1583012985:
			return 289;
		case 1591451572:
			return 301;
		case joaat("WS_MP_TREASURE_MAP_OCREAGHS_RUN_04"):
			return 520;
		case 1607768502:
			return 9;
		case 1609506757:
			return 105;
		case 1626481264:
			return 116;
		case 1643531967:
			return 125;
		case 1649996811:
			return 179;
		case 1660024373:
			return 148;
		case 1665756137:
			return 91;
		case joaat("WS_MP_TREASURE_MAP_SOUTH_ROANOKE_02"):
			return 526;
		case 1691618738:
			return 66;
		case 1698972798:
			return 351;
		case joaat("WS_MP_HIDEOUT_SOLOMONS_FOLLY"):
			return 364;
		case 1703426636:
			return 43;
		case joaat("WS_MP_INTRO_HIDEOUT_VALENTINE"):
			return 329;
		case 1713221411:
			return 135;
		case 1743048395:
			return 213;
		case joaat("WS_MP_CAMP_DEFEND_HEARTLANDS_HILLTOP"):
			return 376;
		case 1766284049:
			return 92;
		case 1774060092:
			return 543;
		case 1776302352:
			return 299;
		case joaat("WS_MP_TREASURE_MAP_CALUMET_RAVINE_04"):
			return 444;
		case joaat("WS_MP_TREASURE_MAP_INTRO_TUMBLEWEED_01"):
			return 397;
		case 1822001510:
			return 197;
		case 1846061697:
			return 97;
		case 1850082804:
			return 193;
		case joaat("WS_MP_TREASURE_MAP_INTRO_BLACKWATER_01"):
			return 412;
		case 1867912207:
			return 68;
		case 1881028477:
			return 363;
		case 1884271742:
			return 51;
		case joaat("WS_MP_TREASURE_MAP_BRANDYWINE_04"):
			return 436;
		case 1908151693:
			return 335;
		case 1926308480:
			return 94;
		case joaat("WS_MP_HIDEOUT_CLEMENS_COVE"):
			return 359;
		case 1944170089:
			return 159;
		case 1947931439:
			return 216;
		case 1952610440:
			return 200;
		case 1954026328:
			return 307;
		case 1982676972:
			return 89;
		case 2008888900:
			return 178;
		case joaat("WS_MP_TREASURE_MAP_HENNIGANS_STEAD_04"):
			return 488;
		case 2016141805:
			return 6;
		case 2019386373:
			return 187;
		case 2024121624:
			return 190;
		case 2024383613:
			return 305;
		case 2024769126:
			return 293;
		case 2037589949:
			return 61;
		case joaat("WS_MP_TREASURE_MAP_LITTLE_CREEK_01"):
			return 497;
		case 2051822093:
			return 284;
		case joaat("WS_MP_TREASURE_MAP_BLACKBONE_FOREST_03"):
			return 427;
		case joaat("WS_MP_TREASURE_MAP_HANGING_ROCK_01"):
			return 477;
		case 2077022393:
			return 291;
		case joaat("WS_MP_TREASURE_MAP_CIVIL_WAR_FIELD_04"):
			return 456;
		case 2080210939:
			return 267;
		case 2091701359:
			return 39;
		case joaat("WS_MP_ASSASSINATION_TRK_GRZ_CAMP"):
			return 396;
		case 2109952320:
			return 189;
		case joaat("WS_MP_INTRO_JESSICA_CAMP_RHODES"):
			return 324;
		case joaat("WS_MP_TREASURE_MAP_LAKE_ISABELLA_03"):
			return 495;
		case 2127577956:
			return 241;
		case 2136753624:
			return 85;
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

bool func_230(int iParam0)
{
	int iVar0;

	iVar0 = func_289(iParam0);
	if (iVar0 < 336)
	{
		return false;
	}
	return true;
}

bool func_231(int iParam0)
{
	if (iParam0 == 1.351745E+31f)
	{
		return true;
	}
	return false;
}

bool func_232()
{
	return true;
}

var func_233()
{
	return Global_1072759.f_28418[48 /*4*/].f_3;
}

int func_234(int iParam0)
{
	switch (iParam0)
	{
		case 132:
			return -6.678279E+09f;
		case 6:
			return 5.092616E-23f;
		case 7:
			return 0.08901188f;
		case 8:
			return -1958.136f;
		case 19:
			return 1.757544E+13f;
		case 13:
			return 3.930592E-06f;
		case 14:
			return 5.223587E-29f;
		case 15:
			return -1.052651E+23f;
		case 12:
			return -5.816004E-34f;
		case 122:
			return 6.001663E+28f;
		case 123:
			return -5.778385E+09f;
		case 5:
			return 7.941624E+18f;
		case 9:
			return -5.145404E-15f;
		case 10:
			return -4.620579E+31f;
		case 11:
			return -2023770f;
		case 16:
			return 2.931569E-07f;
		case 17:
			return 1.092197E+32f;
		case 18:
			return 2.132098E+27f;
		case 23:
			return 2.946846E-31f;
		case 24:
			return 3.221863E-32f;
		case 25:
			return -1.071896E-20f;
		case 22:
			return 2836841f;
		case 26:
			return -1.583762E+32f;
		case 45:
			return -559756.6f;
		case 48:
			return 1.891847E-07f;
		case 46:
			return 3.209415E-27f;
		case 49:
			return -0.001697428f;
		case 42:
			return 3.415819E-32f;
		case 43:
			return 2.619793E-33f;
		case 44:
			return 0.0001756163f;
		case 50:
			return -1.314186E+17f;
		case 51:
			return -13861.96f;
		case 52:
			return 7.656175E-30f;
		case 53:
			return -8.745837E+37f;
		case 63:
			return -1.646639E+21f;
		case 56:
			return 1.11115E+13f;
		case 57:
			return -2.158932E+24f;
		case 60:
			return -2.074173E-38f;
		case 124:
			return 7.61699E+14f;
		case 125:
			return -1.392405E-19f;
		case 54:
			return 6.589171E+22f;
		case 55:
			return 1.156345E-20f;
		case 59:
			return -1.659592E-06f;
		case 58:
			return 3.946506E-35f;
		case 61:
			return -5.605502E-10f;
		case 62:
			return -3.081603E-38f;
		case 27:
			return -1.891411E+11f;
		case 28:
			return -4.238571E-26f;
		case 33:
			return 0.001610436f;
		case 31:
			return 1.055256E-27f;
		case 34:
			return 2.704235E-11f;
		case 35:
			return 1.446313E-28f;
		case 30:
			return 1.328889E-24f;
		case 39:
			return -1.990651E-06f;
		case 126:
			return 2.271166E+18f;
		case 29:
			return -4.124625E-13f;
		case 36:
			return 5.755767E-28f;
		case 37:
			return -6.40899E+13f;
		case 38:
			return -1430.345f;
		case 68:
			return 2.766683E+36f;
		case 69:
			return 7.8227E-06f;
		case 70:
			return 5.290563E+31f;
		case 71:
			return 1.985556E-17f;
		case 74:
			return -6.774944E+25f;
		case 127:
			return -3.091904E+32f;
		case 75:
			return -2.34763E-33f;
		case 72:
			return -9.884961E+18f;
		case 73:
			return 2.526965E+12f;
		case 83:
			return 9.748861E-16f;
		case 84:
			return -1.269082E+11f;
		case 85:
			return 4.319876E+13f;
		case 78:
			return 1.85519E-13f;
		case 87:
			return 1.119544E-12f;
		case 86:
			return 2.286067E-24f;
		case 82:
			return -1.186129E-24f;
		case 88:
			return 3.414019E+18f;
		case 81:
			return 139.4352f;
		case 91:
			return 7.167645E+19f;
		case 90:
			return -9.661501E+22f;
		case 120:
			return 3.526101E+21f;
		case 121:
			return 7.501371E-10f;
		case 77:
			return 2980.293f;
		case 79:
			return -1.801417E+24f;
		case 80:
			return -2.879967E-28f;
		case 89:
			return 1.105674E-10f;
		case 41:
			return 2.930603E+16f;
		case 98:
			return -3.188065E+25f;
		case 97:
			return 7.757542E-31f;
		case 93:
			return 2.462378E+13f;
		case 96:
			return -6.893608E-07f;
		case 94:
			return 3.550023E+16f;
		case 95:
			return 4.790249E-22f;
		case 128:
			return 8.133306E-16f;
		case 129:
			return -3.93835E-33f;
		case 0:
			return 80.73424f;
		case 1:
			return 1.347958E-16f;
		case 2:
			return -2.773782E-31f;
		case 101:
			return 1.558923E-35f;
		case 99:
			return 2.294131E-19f;
		case 100:
			return 1.213295E+29f;
		case 119:
			return -1.091912E-28f;
		case 133:
			return -1.264382f;
		case 152:
			return -3.515305E-20f;
		case 176:
			return 1.64784E+23f;
		case 177:
			return 5.003018f;
		case 178:
			return -2.562252E-20f;
		case 153:
			return 41.27814f;
		case 154:
			return 1.567787E-33f;
		case 147:
			return 4.415405E-32f;
		case 135:
			return 2.550329E+22f;
		case 136:
			return 2.77422E-16f;
		case 137:
			return 5.798392E+08f;
		case 138:
			return -1.004019E-28f;
		case 139:
			return -2.627055E+13f;
		case 140:
			return -4.514173E+36f;
		case 141:
			return -5.76357E-22f;
		case 142:
			return joaat("SHOP_GRZ_TRAVELLING_SALESMAN");
		case 143:
			return -4.480066E+07f;
		case 144:
			return 3.128354E+36f;
		case 145:
			return 4.82799E-20f;
		case 146:
			return 6.391131E+21f;
		case 47:
			return 0.03729688f;
		case 32:
			return 0.03729688f;
		case 21:
			return 0.03729688f;
		case 115:
			return 0.03729688f;
		case 92:
			return 0.03729688f;
		case 131:
			return 0.03729688f;
		case 20:
			return 0.03729688f;
		case 134:
			return -2.455795E+11f;
		case 179:
			return 2766996f;
		case 155:
			return -1.587301E+29f;
		case 156:
			return -4.606836E+28f;
		case 157:
			return 3.452008E-36f;
		case 158:
			return NaNf;
		case 67:
			return 4.921621E+16f;
		case 159:
			return 99.39199f;
		case 160:
			return -6.702547E-32f;
		case 161:
			return 6.240672E+34f;
		case 162:
			return 6.10996E-29f;
		case 65:
			return 4.325683E+11f;
		case 164:
			return 2.713322E+14f;
		case 165:
			return -14.89222f;
		case 166:
			return 9475.513f;
		case 167:
			return 5.074196E+37f;
		case 64:
			return 2.039205E-07f;
		case 168:
			return -3.945631E+20f;
		case 169:
			return -2.244019E+15f;
		case 170:
			return 1.756121E+18f;
		case 171:
			return 4.81626E+24f;
		case 172:
			return -9.719926E-38f;
		case 173:
			return 6.080284E+09f;
		case 174:
			return -2.116756E+30f;
		case 175:
			return 9.219983E-29f;
		case 66:
			return -2.27383E-36f;
		case 163:
			return -2.288724E+21f;
		case 108:
			return -2.075817E-25f;
		case 110:
			return -1.942438E-14f;
		case 109:
			return -4.915344E+09f;
		case 111:
			return 9.586019E+08f;
		case 112:
			return 9.236639E-23f;
		case 113:
			return -6.715591E-15f;
		case 114:
			return -0.01589598f;
		case 102:
			return -1.566179E-15f;
		case 105:
			return -1.044305E-38f;
		case 106:
			return NaNf;
		case 103:
			return -1.510513E-27f;
		case 104:
			return 3.068801E-32f;
		case 107:
			return -1.991238E-18f;
		case 116:
			return 6.552451f;
		case 130:
			return -1.047896E+19f;
		case 117:
			return 4.402083E-23f;
		case 118:
			return 1.206669E+09f;
		case 3:
			return 3.046649E-19f;
		case 4:
			return 3.120933E-30f;
		case 40:
			return -8.109014E+27f;
		case 76:
			return 0.009586659f;
		case 148:
			return 1852492f;
		case 149:
			return 2.747603E+32f;
		case 150:
			return 1.447315E-27f;
		case 151:
			return 6.372948E+12f;
		default:
			break;
	}
	return 0;
}

int func_235(int iParam0)
{
	if (!func_134(iParam0))
	{
		return 0;
	}
	return Global_1893799[iParam0 /*3*/];
}

void func_236(int iParam0, int iParam1)
{
	if (!func_134(iParam0))
	{
		return;
	}
	Global_1893799[iParam0 /*3*/].f_1 = iParam1;
}

void func_237(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] - (Global_9899[iParam0 /*2*/] && iParam1));
}

bool func_238(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	if (!func_218(iParam0, 2))
	{
		return false;
	}
	return true;
}

void func_239(int iParam0, bool bParam1)
{
	char* sVar0;

	switch (iParam0)
	{
		case 5:
			sVar0 = "IZ_val_saloon_int_room_main";
			break;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	AUDIO::SET_AMBIENT_ZONE_STATE_PERSISTENT(sVar0, bParam1, true);
}

void func_240(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 5:
			if (bParam1)
			{
				AUDIO::SET_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR", "VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			else
			{
				AUDIO::REMOVE_PORTAL_SETTINGS_OVERRIDE("VAL_SALOON_SWINGING_DOOR_BARRED");
			}
			break;
	}
}

void func_241(int iParam0, int iParam1)
{
	func_117(&(Global_1939946.f_5[iParam0 /*11*/].f_7), iParam1);
}

bool func_242(struct<2> Param0)
{
	return func_259(Param0, 5, 8);
}

bool func_243(int iParam0)
{
	return func_290(1, iParam0);
}

int func_244(int iParam0)
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

int func_245(int iParam0)
{
	if (func_291(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_246(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_292(iParam0);
	if (!func_293(1))
	{
		return;
	}
	if (bParam1)
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	else if (!func_294(128) && !func_295(19))
	{
		CAM::DO_SCREEN_FADE_OUT(iParam2);
	}
	if (bParam3 && func_296() == 4)
	{
		func_245(18);
	}
	func_297(1024);
}

int func_247(int iParam0)
{
	if (func_298(&(Global_1102813.f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_248(var uParam0)
{
	struct<30> Var0;

	*uParam0 = { Var0 };
}

void func_249(var uParam0)
{
	struct<9> Var0;

	*uParam0 = { Var0 };
}

void func_250(struct<29> Param0, var uParam29, int iParam30)
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

void func_251(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
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

bool func_252(int iParam0)
{
	if (((((iParam0 == 28 || iParam0 == 29) || iParam0 == 38) || iParam0 == 27) || iParam0 == 15) || iParam0 == 39)
	{
		return true;
	}
	if (func_153(iParam0, 65536))
	{
		return true;
	}
	return false;
}

void func_253(int iParam0, float fParam1)
{
	if (func_165(iParam0, fParam1))
	{
	}
	Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
}

void func_254(int iParam0)
{
}

bool func_255(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return false;
	}
	return func_299(Global_1051832.f_92[iParam0 /*75*/].f_50, iParam1);
}

bool func_256(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 180);
}

int func_257(int iParam0)
{
	vector3 vVar0;

	if (DATAFILE::PARSEDDATA_IS_FILE_LOADED(Global_1149417.f_7) && !func_300(12, func_234(iParam0), &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_258(int iParam0)
{
	return iParam0 != 0;
}

bool func_259(struct<2> Param0, int iParam2, int iParam3)
{
	int iVar0;

	if (!func_301(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_302(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

bool func_260(int iParam0, int* iParam1, int* iParam2)
{
	struct<4> Var0;

	Var0 = func_233();
	Var0.f_2 = -2.13205E+12f;
	Var0.f_3 = func_234(iParam0);
	if (!DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(Var0.f_1), &Var0))
	{
		return false;
	}
	Var0.f_2 = 5.578665E-35f;
	Var0.f_3 = MISC::GET_HASH_KEY("startTime");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam1, &Var0);
	Var0.f_2 = 5.578665E-35f;
	Var0.f_3 = MISC::GET_HASH_KEY("endTime");
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(iParam2, &Var0);
	return true;
}

int func_261(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case joaat("LAW_REGION_OCCUPIED_CARAVAN_CAMP"):
			return -1;
		case joaat("LAW_REGION_CUMBERLAND_FOREST"):
		case joaat("LAW_REGION_VALENTINE"):
		case joaat("LAW_REGION_HEARTLANDS"):
		case joaat("LAW_REGION_CORNWALL"):
		case joaat("LAW_REGION_FORT_WALLACE"):
		case joaat("LAW_REGION_VALENTINE_LOCKDOWN"):
		case joaat("LAW_REGION_BUTCHER_CREEK"):
		case joaat("LAW_REGION_ROANOKE_RIDGE"):
		case joaat("LAW_REGION_EMERALD_RANCH"):
		case joaat("LAW_REGION_VAN_HORN"):
		case joaat("LAW_REGION_ANNESBURG"):
		case joaat("LAW_REGION_WAPITI"):
			return 1;
		case joaat("LAW_REGION_BAYOU_NWA"):
		case joaat("LAW_REGION_RHODES"):
		case joaat("LAW_REGION_RHODES_LOCKDOWN"):
		case joaat("LAW_REGION_LAGRAS"):
		case joaat("LAW_REGION_CALIGA_HALL"):
		case joaat("LAW_REGION_BLUEGILL_MARSH"):
		case joaat("LAW_REGION_SISIKA"):
		case joaat("LAW_REGION_BRAITHWAITE_MANOR"):
		case joaat("LAW_REGION_SAINT_DENIS"):
		case joaat("LAW_REGION_SCARLETT_MEADOWS"):
			return 2;
		case joaat("LAW_REGION_GRIZZLIES"):
			return 0;
		case joaat("LAW_REGION_MANICATO"):
		case joaat("LAW_REGION_GUAMA"):
		case joaat("LAW_REGION_AGUASDULCES"):
			return 5;
		case joaat("LAW_REGION_MANZANITA_POST"):
		case joaat("LAW_REGION_GREAT_PLAINS_MAINGAME"):
		case joaat("LAW_REGION_MANZANITA_POST_MAINGAME"):
		case joaat("LAW_REGION_GREAT_PLAINS"):
		case joaat("LAW_REGION_TALL_TREES"):
		case joaat("LAW_REGION_STRAWBERRY"):
		case joaat("LAW_REGION_BEECHERS_HOPE"):
		case joaat("LAW_REGION_TALL_TREES_MAINGAME"):
		case joaat("LAW_REGION_PRONGHORN_RANCH"):
		case joaat("LAW_REGION_BIG_VALLEY"):
		case joaat("LAW_REGION_BLACKWATER"):
		case joaat("LAW_REGION_BLACKWATER_MAINGAME"):
			return 3;
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS_MAINGAME"):
		case joaat("LAW_REGION_OLD_MAP_WILDERNESS"):
		case joaat("LAW_REGION_ARMADILLO"):
		case joaat("LAW_REGION_TUMBLEWEED"):
		case joaat("LAW_REGION_MACFARLANES_RANCH"):
		case joaat("LAW_REGION_THIEVES_LANDING"):
		case joaat("LAW_REGION_THIEVES_LANDING_MAINGAME"):
		case joaat("LAW_REGION_RIDGEWOOD_FARM"):
			return 4;
	}
	return -1;
}

int func_262(vector3 vParam0)
{
	return func_303(ZONE::_GET_MAP_ZONE_AT_COORDS(vParam0, 10));
}

int func_263(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1.068233E-26f;
		case 3:
			return -8.540818E+13f;
		case 1:
			return 11.19643f;
		case 0:
			return 0.004328025f;
		case 4:
			return 15.34966f;
		case 5:
			return -1.716426E-27f;
		default:
			break;
	}
	return 0;
}

int func_264(int iParam0)
{
	int iVar0;

	iVar0 = func_234(iParam0);
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

float func_265(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), vParam1, bParam4);
}

void func_266(var uParam0, int iParam1, vector3 vParam2)
{
	if (*uParam0 == 0)
	{
		if (STREAMING::IS_MODEL_VALID(iParam1))
		{
			*uParam0 = ENTITY::PIN_CLOSEST_MAP_ENTITY(iParam1, vParam2, 7);
		}
	}
}

void func_267(var uParam0)
{
	if (*uParam0 == 0)
	{
		return;
	}
	if (ENTITY::IS_MAP_ENTITY_PINNED(*uParam0))
	{
		ENTITY::_UNPIN_MAP_ENTITY(*uParam0);
	}
}

float func_268(int iParam0, vector3 vParam1, bool bParam4)
{
	vector3 vVar0;

	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
	}
	else
	{
		vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, false, false) };
	}
	if (bParam4)
	{
		return BUILTIN::VDIST2(vVar0, vParam1);
	}
	return func_304(vVar0, vParam1);
}

bool func_269()
{
	return false;
}

bool func_270()
{
	struct<2> Var0;
	struct<2> Var2;

	if (func_45() != 0)
	{
		return true;
	}
	if (func_305())
	{
		return false;
	}
	if (HUD::_0x7EC0D68233E391AC(6) == 1)
	{
		return true;
	}
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_306() };
	if (func_301(Var0))
	{
		return false;
	}
	Var2 = { func_307() };
	if (func_301(Var2))
	{
		return false;
	}
	return true;
}

bool func_271(int iParam0, bool bParam1, bool bParam2)
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
		if (func_305())
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
	if (iParam0 == 0 && func_301(func_66(0)))
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
	switch (func_67(func_66(0)))
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

char* func_272(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	return HUD::_GET_TEXT_SUBSTRING_2(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

int func_273(vector3 vParam0)
{
	int iVar0;

	iVar0 = 0;
	while (iVar0 < 51)
	{
		if (func_308(vParam0, iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

char* func_274(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "LANDMARK_MOUNT_HAGEN";
		case 1:
			return "LANDMARK_SCRATCHING_POST";
		case 2:
			return "LANDMARK_JORGES_GAP";
		case 3:
			return "LANDMARK_MERCER_STATION";
		case 4:
			return "LANDMARK_ODDFELLOWS_REST";
		case 5:
			return "LANDMARK_RATTLESNAKE_HOLLOW";
		case 6:
			return "LANDMARK_SILENT_STEAD";
		case 7:
			return "LANDMARK_THE_HANGING_ROCK";
		case 8:
			return "LANDMARK_THE_OLD_BACCHUS_PLACE";
		case 9:
			return "LANDMARK_TWO_CROWS";
		case 10:
			return "LANDMARK_REPENTANCE";
		case 11:
			return "LANDMARK_BENEDICT_PASS";
		case 12:
			return "WATER_MANTECA_FALLS";
		case 13:
			return "SETTLEMENT_LIMPANY";
		case 14:
			return "WATER_MOUNT_SHANN";
		case 15:
			return "LANDMARK_THREE_SISTERS";
		case 16:
			return "HIDEOUT_PIKES_BASIN";
		case 17:
			return "SETTLEMENT_EL_NIDO";
		case 18:
			return "LANDMARK_BRITTLEBUSH_TRAWL";
		case 19:
			return "LANDMARK_ERIS_FIELD";
		case 20:
			return "LANDMARK_GRANITE_PASS";
		case 21:
			return "LANDMARK_VENTERS_PLACE";
		case 22:
			return "LANDMARK_PLEASANCE_HOUSE";
		case 23:
			return "HOMESTEAD_CHADWICK_FARM";
		case 24:
			return "LANDMARK_BLACK_BONE_FOREST";
		case 25:
			return "LANDMARK_CITADEL_ROCK";
		case 26:
			return "LANDMARK_CUEVA_SECA";
		case 27:
			return "LANDMARK_DEWBERRY_CREEK";
		case 28:
			return "LANDMARK_DIABLO_RIDGE";
		case 29:
			return "LANDMARK_DONNER_FALLS";
		case 31:
			return "HIDEOUT_SOLOMONS_FOLLY";
		case 32:
			return "LANDMARK_FORT_BRENNAND";
		case 33:
			return "LANDMARK_CALIBANS_SEAT";
		case 34:
			return "HIDEOUT_HORSESHOE_OVERLOOK";
		case 35:
			return "LANDMARK_MESCALERO";
		case 36:
			return "LANDMARK_RIO_DEL_LOBO_HOUSE";
		case 37:
			return "LANDMARK_RIO_DEL_LOBO_ROCK";
		case 38:
			return "LANDMARK_BROKEN_TREE";
		case 39:
			return "LANDMARK_BARDS_CROSSING";
		case 40:
			return "LANDMARK_FACE_ROCK";
		case 50:
			return "LANDMARK_NEKOTI_ROCK";
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
			return "";
	}
	return "";
}

bool func_275(int iParam0)
{
	switch (iParam0)
	{
		case 22:
		case 25:
		case 68:
			return true;
	}
	return false;
}

bool func_276(int iParam0)
{
	if (!func_309(iParam0))
	{
		return false;
	}
	return func_310(iParam0);
}

struct<2> func_277(int iParam0)
{
	struct<2> Var0;

	NETWORK::NETWORK_HANDLE_FROM_PLAYER(iParam0, &Var0);
	return Var0;
}

char* func_278(char* sParam0, int iParam1)
{
	return MISC::VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

bool func_279(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	return Global_1893799[iParam0 /*3*/].f_2 == SCRIPTS::GET_ID_OF_THIS_THREAD();
}

void func_280(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;

	if (!func_134(iParam0))
	{
		return;
	}
	if (!func_218(iParam0, 1))
	{
		return;
	}
	if (!func_218(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_279(iParam0)) && func_311(iParam0))
	{
		return;
	}
	func_237(iParam0, 1);
	func_286(iParam0);
	if (func_312(func_235(iParam0)))
	{
		iVar0 = func_168(iParam0);
		if (!PERSCHAR::_IS_PERSISTENT_CHARACTER_VALID(iVar0))
		{
			return;
		}
		PERSCHAR::_0xBB68908CD11AEBDC(iVar0);
		PERSCHAR::_0xB65E7F733956CF25(iVar0);
		if (bParam2 && !PERSCHAR::_IS_PERSISTENT_CHARACTER_DEAD(iVar0))
		{
			PERSCHAR::_RETASK_PERSISTENT_CHARACTER(iVar0);
		}
		iVar1 = PERSCHAR::_GET_PERSCHAR_PED_INDEX(iVar0);
		if (!PED::IS_PED_INJURED(iVar1))
		{
			PED::SET_PED_CONFIG_FLAG(iVar1, 171, false);
		}
		if (bParam1)
		{
			PERSCHAR::_FORCE_DESPAWN_PERSCHAR(iVar0);
		}
		func_237(iParam0, 16);
	}
	if (func_218(iParam0, 128) && !bParam3)
	{
		func_219(iParam0, 0);
	}
}

void func_281(int iParam0, bool bParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (!func_313(iParam0, 1024))
		{
			func_314(iParam0, 1024);
			INVENTORY::_0x9B4E793B1CB6550A();
		}
	}
	else if (func_313(iParam0, 1024))
	{
		func_315(iParam0, 1024);
		INVENTORY::_0x9B4E793B1CB6550A();
	}
	func_316(iParam0);
}

void func_282(int iParam0, float fParam1)
{
	if (!func_317(iParam0))
	{
		return;
	}
	if (func_45() == -1)
	{
		Global_1915643.f_3[iParam0 /*447*/].f_6 = (Global_1915643.f_3[iParam0 /*447*/].f_6 - (Global_1915643.f_3[iParam0 /*447*/].f_6 && fParam1));
	}
	else
	{
		Global_1051832.f_92[iParam0 /*75*/].f_1 = (Global_1051832.f_92[iParam0 /*75*/].f_1 - (Global_1051832.f_92[iParam0 /*75*/].f_1 && fParam1));
	}
}

int func_283(int iParam0)
{
	return Global_1915643.f_3[iParam0 /*447*/].f_409;
}

void func_284(int iParam0)
{
	Global_1915643.f_3[iParam0 /*447*/].f_6 = 0;
}

void func_285(int iParam0, int iParam1)
{
	if (func_45() != -1)
	{
		return;
	}
	if (!func_134(iParam0))
	{
		return;
	}
	Global_9899[iParam0 /*2*/] = (Global_9899[iParam0 /*2*/] || iParam1);
}

void func_286(int iParam0)
{
	int iVar0;

	if (!func_134(iParam0))
	{
		return;
	}
	iVar0 = func_174(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iVar0, false))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iVar0);
		}
	}
	Global_1893799[iParam0 /*3*/].f_2 = 0;
}

int func_287(int iParam0, int iParam1)
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

int func_288(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

int func_289(int iParam0)
{
	return func_318(iParam0) + 30;
}

bool func_290(int iParam0, int iParam1)
{
	int iVar0;

	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_319(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 == func_320())
	{
		return func_319(&(Global_1102813.f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (Global_1295619.f_17[iParam1])
	{
		return func_319(&(Global_1101558[iParam1 /*38*/].f_4), iVar0, 5);
	}
	return false;
}

bool func_291(var uParam0, int iParam1, int iParam2)
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

void func_292(int iParam0)
{
	Global_1102813.f_26.f_12 = iParam0;
}

bool func_293(int iParam0)
{
	return (Global_1102813.f_26.f_7 && iParam0) != 0;
}

bool func_294(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) != 0;
}

bool func_295(int iParam0)
{
	return (Global_1102813.f_4[Global_1106895[iParam0 /*2*/]] && Global_1106895[iParam0 /*2*/].f_1) == Global_1106895[iParam0 /*2*/].f_1;
}

int func_296()
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

void func_297(int iParam0)
{
	if (func_321(iParam0))
	{
		return;
	}
	Global_1102813.f_26.f_9 = (Global_1102813.f_26.f_9 || iParam0);
}

bool func_298(var uParam0, int iParam1, int iParam2)
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

bool func_299(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_300(int iParam0, int iParam1, var uParam2)
{
	var uVar0;

	if (func_322(iParam0, iParam1, &uVar0))
	{
		func_323(&uVar0, iParam0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

bool func_301(struct<2> Param0)
{
	if (!func_324(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_325(Param0))
	{
		return false;
	}
	return true;
}

int func_302(struct<2> Param0)
{
	if (Param0 == 2)
	{
		return func_326(Param0);
	}
	return -1;
}

int func_303(int iParam0)
{
	switch (iParam0)
	{
		case joaat("BAYOUNWA"):
			return 0;
		case joaat("BIGVALLEY"):
			return 1;
		case joaat("BLUEWATERMARSH"):
			return 2;
		case joaat("CUMBERLAND"):
			return 3;
		case joaat("GREATPLAINS"):
			return 4;
		case joaat("GRIZZLIESEAST"):
			return 6;
		case joaat("GRIZZLIESWEST"):
			return 7;
		case joaat("GUARMAD"):
			return 8;
		case joaat("HEARTLANDS"):
			return 9;
		case joaat("ROANOKE"):
			return 10;
		case joaat("SCARLETTMEADOWS"):
			return 11;
		case joaat("TALLTREES"):
			return 12;
		case joaat("GAPTOOTHRIDGE"):
			return 13;
		case joaat("RIOBRAVO"):
			return 14;
		case joaat("CHOLLASPRINGS"):
			return 15;
		case joaat("HENNIGANSSTEAD"):
			return 16;
		default:
			break;
	}
	return -1;
}

float func_304(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

bool func_305()
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
	if (!func_301(Global_1051268) && Global_1572887.f_8 & 1 != 0)
	{
		return true;
	}
	return false;
}

struct<2> func_306()
{
	return Global_1051268;
}

struct<2> func_307()
{
	if (Global_1205789.f_129 <= 0)
	{
		return func_66(0);
	}
	if (Global_1205789.f_130 < 0 || Global_1205789.f_131 == 0)
	{
		return func_66(0);
	}
	return Global_1205789[Global_1205789.f_130 /*4*/].f_1;
}

bool func_308(vector3 vParam0, int iParam3)
{
	vector3 vVar0;
	struct<2> Var3;
	var uVar6;

	func_327(iParam3, &vVar0, &Var3, &uVar6);
	if (func_328(vParam0, vVar0, Var3, Var3.f_1, uVar6))
	{
		return true;
	}
	return false;
}

bool func_309(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_310(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;

	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(Global_38.f_3651[iVar1], iVar2);
}

bool func_311(int iParam0)
{
	if (!func_134(iParam0))
	{
		return false;
	}
	return SCRIPTS::DOES_THREAD_EXIST(Global_1893799[iParam0 /*3*/].f_2);
}

bool func_312(int iParam0)
{
	return iParam0 != 0;
}

bool func_313(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return false;
	}
	return (Global_1915643.f_17884[iParam0] && iParam1) != 0;
}

void func_314(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] || iParam1);
}

void func_315(int iParam0, int iParam1)
{
	if (!func_256(iParam0))
	{
		return;
	}
	Global_1915643.f_17884[iParam0] = (Global_1915643.f_17884[iParam0] - (Global_1915643.f_17884[iParam0] && iParam1));
}

void func_316(int iParam0)
{
	func_330(func_329(iParam0));
}

bool func_317(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 40);
}

int func_318(int iParam0)
{
	return iParam0 * 31;
}

bool func_319(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;

	return MISC::IS_BIT_SET((*uParam0)[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET((*uParam0)[iVar0], iVar1);
}

int func_320()
{
	return Global_1102813.f_3672;
}

bool func_321(int iParam0)
{
	return (Global_1102813.f_26.f_9 && iParam0) == iParam0;
}

bool func_322(int iParam0, int iParam1, bool bParam2)
{
	*bParam2 = Global_1149417.f_7;
	bParam2->f_2 = 1.841357E+10f;
	bParam2->f_3 = func_331(iParam0);
	bParam2->f_4 = iParam1;
	return DATAFILE::PARSEDDATA_RQ_FILLOUT_NODE(&(bParam2->f_1), bParam2);
}

void func_323(bool bParam0, int iParam1, var uParam2)
{
	var uVar0;

	*uParam2 = iParam1;
	bParam0->f_2 = -8.049412E+16f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_INT(&(uParam2->f_1), bParam0);
	bParam0->f_2 = -9.223824E-39f;
	if (DATAFILE::PARSEDDATA_RQ_FILLOUT_HASH(&uVar0, bParam0))
	{
		uParam2->f_2 = uVar0;
	}
	bParam0->f_2 = -9.223824E-39f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_11), bParam0);
	bParam0->f_2 = 1.375422E+08f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_19), bParam0);
	bParam0->f_2 = 1165207f;
	DATAFILE::_PARSEDDATA_RQ_FILLOUT_STRING_63(&(uParam2->f_3), bParam0);
}

bool func_324(int iParam0)
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

int func_325(int iParam0)
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

int func_326(struct<2> Param0)
{
	vector3 vVar0;

	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_332(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_327(int iParam0, var uParam1, var uParam2, var uParam3)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = { -993388388, 1151178457, 1129141371 };
			*uParam2 = { 1125515264 /* Float: 150f */, 1125515264 /* Float: 150f */, 1127743488 /* Float: 184f */ };
			*uParam3 = 0f;
			break;
		case 1:
			*uParam1 = { -977899688, -982930096, -1046164275 /* Float: -20.6f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1108082688 /* Float: 35f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110704128; /* Float: 45f */
			break;
		case 2:
			*uParam1 = { -981334653, -986624348, -1051014988 };
			*uParam2 = { 1110179840 /* Float: 43f */, 1128595456 /* Float: 197f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1108869120; /* Float: 38f */
			break;
		case 3:
			*uParam1 = { -980926749, -985614848, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 4:
			*uParam1 = { -980748745, -987229123, -1051014988 };
			*uParam2 = { 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 5:
			*uParam1 = { -980812104, -989234078, 1102240023 };
			*uParam2 = { 1095761920 /* Float: 13f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1107820544; /* Float: 34f */
			break;
		case 6:
			*uParam1 = { -978479587, -988430561, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1101529088 /* Float: 21f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 7:
			*uParam1 = { -984124346, -988996719, 1088782598 /* Float: 7.172f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1102577664 /* Float: 23f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 0f;
			break;
		case 8:
			*uParam1 = { -994952380, -987279983, 1116893872 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1103626240 /* Float: 25f */, 1111228416 /* Float: 47f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 9:
			*uParam1 = { -982558974, -985918423, -1051014988 };
			*uParam2 = { 1109131264 /* Float: 39f */, 1113063424 /* Float: 54f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1036517376; /* Float: -46f */
			break;
		case 10:
			*uParam1 = { -980237705, -984716046, -1051014988 };
			*uParam2 = { 1120927744 /* Float: 104f */, 1113849856 /* Float: 57f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 11:
			*uParam1 = { -979483224, -985383477, -1051014988 };
			*uParam2 = { 1102577664 /* Float: 23f */, 1104150528 /* Float: 26f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 1110179840; /* Float: 43f */
			break;
		case 12:
			*uParam1 = { -993264640, -986545811, -1076719780 };
			*uParam2 = { 1125449728 /* Float: 149f */, 1115815936 /* Float: 65f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 1109131264; /* Float: 39f */
			break;
		case 13:
			*uParam1 = { -1012010549, -1023166382, -1076719780 };
			*uParam2 = { 1112539136 /* Float: 52f */, 1109393408 /* Float: 40f */, 1125777408 /* Float: 154f */ };
			*uParam3 = 0f;
			break;
		case 14:
			*uParam1 = { -989534208, 1118872142, 1124806099 };
			*uParam2 = { 1135017984 /* Float: 334f */, 1126891520 /* Float: 171f */, 1133150208 /* Float: 277f */ };
			*uParam3 = -1036779520; /* Float: -45f */
			break;
		case 15:
			*uParam1 = { 1153745396, 1150041735, 1128896922 /* Float: 201.6f */ };
			*uParam2 = { 1125318656 /* Float: 147f */, 1128398848 /* Float: 194f */, 1128857600 /* Float: 201f */ };
			*uParam3 = 0f;
			break;
		case 16:
			*uParam1 = { -987014590, -988513235, 1107029918 };
			*uParam2 = { 1118568448 /* Float: 86f */, 1114898432 /* Float: 61f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 1093664768; /* Float: 11f */
			break;
		case 17:
			*uParam1 = { 1155377750, -977616212, 1116689138 };
			*uParam2 = { 1107820544 /* Float: 34f */, 1107820544 /* Float: 34f */, 1120403456 /* Float: 100f */ };
			*uParam3 = -1023934464; /* Float: -124f */
			break;
		case 18:
			*uParam1 = { -990066622, -985792868, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 19:
			*uParam1 = { 1152271745, -1004409078, 1116793078 };
			*uParam2 = { 1100480512 /* Float: 19f */, 1099956224 /* Float: 18f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1109393408; /* Float: 40f */
			break;
		case 20:
			*uParam1 = { -1015917052, 1154157552, 1129637085 };
			*uParam2 = { 1120141312 /* Float: 98f */, 1112539136 /* Float: 52f */, 1123024896 /* Float: 120f */ };
			*uParam3 = 1112276992; /* Float: 51f */
			break;
		case 21:
			*uParam1 = { -983730127, -985825124, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 22:
			*uParam1 = { -980949699, -988300976, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 23:
			*uParam1 = { -1010578686, 1147573649, 1124702880 };
			*uParam2 = { 1106771968 /* Float: 31f */, 1106247680 /* Float: 30f */, 1109393408 /* Float: 40f */ };
			*uParam3 = 0f;
			break;
		case 24:
			*uParam1 = { -987361284, 1125755585, 1128073986 };
			*uParam2 = { 1127284736 /* Float: 177f */, 1123811328 /* Float: 126f */, 1120665600 /* Float: 102f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 25:
			*uParam1 = { 1125915623, 1138026054, 1123024896 /* Float: 120f */ };
			*uParam2 = { 1132003328 /* Float: 249f */, 1121976320 /* Float: 112f */, 1123024896 /* Float: 120f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 26:
			*uParam1 = { -977837056, -986970354, -1051014988 };
			*uParam2 = { 1109393408 /* Float: 40f */, 1109393408 /* Float: 40f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 27:
			*uParam1 = { 1147183186, -1012424638, 1111596204 };
			*uParam2 = { 1113587712 /* Float: 56f */, 1125646336 /* Float: 152f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1039138816; /* Float: -36f */
			break;
		case 28:
			*uParam1 = { -1000440676, -1020568797, 1119163122 };
			*uParam2 = { 1127481344 /* Float: 180f */, 1119748096 /* Float: 95f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1105723392; /* Float: 29f */
			break;
		case 29:
			*uParam1 = { 1141824782, 1156977582, 1123408937 };
			*uParam2 = { 1107296256 /* Float: 32f */, 1111752704 /* Float: 49f */, 1124859904 /* Float: 140f */ };
			*uParam3 = 0f;
			break;
		case 30:
			*uParam1 = { -986899739, -985092137, 1103626240 /* Float: 25f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1110704128 /* Float: 45f */ };
			*uParam3 = 0f;
			break;
		case 31:
			*uParam1 = { -978778042, -983264190, -1050153058 };
			*uParam2 = { 1108344832 /* Float: 36f */, 1106247680 /* Float: 30f */, 1106247680 /* Float: 30f */ };
			*uParam3 = -1044381696; /* Float: -24f */
			break;
		case 32:
			*uParam1 = { 1159287984, 1133598474, 1116420833 };
			*uParam2 = { 1108082688 /* Float: 35f */, 1109917696 /* Float: 42f */, 1100480512 /* Float: 19f */ };
			*uParam3 = -1065353216; /* Float: -4f */
			break;
		case 33:
			*uParam1 = { -1004485968, 1133194740, 1119813632 /* Float: 95.5f */ };
			*uParam2 = { 1116471296 /* Float: 70f */, 1116078080 /* Float: 67f */, 1115815936 /* Float: 65f */ };
			*uParam3 = -1025900544; /* Float: -109f */
			break;
		case 34:
			*uParam1 = { -1024676463, -1043934478, 1119998050 };
			*uParam2 = { 1118306304 /* Float: 84f */, 1116340224 /* Float: 69f */, 1108606976 /* Float: 37f */ };
			*uParam3 = 0f;
			break;
		case 35:
			*uParam1 = { -986515636, -987089883, 1119511511 };
			*uParam2 = { 1128529920 /* Float: 196f */, 1125974016 /* Float: 157f */, 1118437376 /* Float: 85f */ };
			*uParam3 = -1047527424; /* Float: -18f */
			break;
		case 36:
			*uParam1 = { -983970554, -984046047, -1084663792 };
			*uParam2 = { 1094713344 /* Float: 12f */, 1094713344 /* Float: 12f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 37:
			*uParam1 = { -983413248, -983597359, -1084663792 };
			*uParam2 = { 1123811328 /* Float: 126f */, 1118568448 /* Float: 86f */, 1116471296 /* Float: 70f */ };
			*uParam3 = -1061158912; /* Float: -6f */
			break;
		case 38:
			*uParam1 = { -995308995, -995156222, 1113611829 };
			*uParam2 = { 1102053376 /* Float: 22f */, 1107296256 /* Float: 32f */, 1118568448 /* Float: 86f */ };
			*uParam3 = 0f;
			break;
		case 39:
			*uParam1 = { -1003338056, -1006205485, 1114484244 /* Float: 59.42f */ };
			*uParam2 = { 1126170624 /* Float: 160f */, 1102053376 /* Float: 22f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 1104150528; /* Float: 26f */
			break;
		case 40:
			*uParam1 = { 1149727441, -1003659624, 1111596204 };
			*uParam2 = { 1110704128 /* Float: 45f */, 1110966272 /* Float: 46f */, 1116471296 /* Float: 70f */ };
			*uParam3 = 0f;
			break;
		case 41:
			*uParam1 = { -999350452, 1158149026, 1134146388 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 42:
			*uParam1 = { 1152789332, -993720230, 1119800656 };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 43:
			*uParam1 = { 1135492727, -1004059066, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 44:
			*uParam1 = { 1157300650, 1142573548, 1119748096 /* Float: 95f */ };
			*uParam2 = { 1105199104 /* Float: 28f */, 1102577664 /* Float: 23f */, 1120403456 /* Float: 100f */ };
			*uParam3 = 0f;
			break;
		case 45:
			*uParam1 = { 1157840220, -1014136439, 1109917696 /* Float: 42f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1111752704 /* Float: 49f */ };
			*uParam3 = 1112539136; /* Float: 52f */
			break;
		case 46:
			*uParam1 = { -992220692, -1017094537, 1126694912 /* Float: 168f */ };
			*uParam2 = { 1101529088 /* Float: 21f */, 1105723392 /* Float: 29f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1113587712; /* Float: 56f */
			break;
		case 47:
			*uParam1 = { 1158014525, -996113875, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1109393408 /* Float: 40f */, 1116602368 /* Float: 71f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 1116471296; /* Float: 70f */
			break;
		case 48:
			*uParam1 = { 1158697447, -1012169736, 1118437376 /* Float: 85f */ };
			*uParam2 = { 1097859072 /* Float: 15f */, 1097859072 /* Float: 15f */, 1122500608 /* Float: 116f */ };
			*uParam3 = 0f;
			break;
		case 49:
			*uParam1 = { -991763276, -988392997, 1116602368 /* Float: 71f */ };
			*uParam2 = { 1103626240 /* Float: 25f */, 1103626240 /* Float: 25f */, 1112014848 /* Float: 50f */ };
			*uParam3 = 0f;
			break;
		case 50:
			*uParam1 = { -988949578, -997246673, 1129709568 /* Float: 214f */ };
			*uParam2 = { 1108606976 /* Float: 37f */, 1107558400 /* Float: 33f */, 1116209152 /* Float: 68f */ };
			*uParam3 = 0f;
			break;
	}
}

bool func_328(vector3 vParam0, vector3 vParam3, float fParam6, float fParam7, float fParam8)
{
	vector3 vVar0;
	struct<2> Var3;
	float fVar6;

	vVar0 = { vParam0 - vParam3 };
	Var3 = ((vVar0.x * BUILTIN::COS(fParam8)) + (vVar0.y * BUILTIN::SIN(fParam8)));
	Var3.f_1 = ((vVar0.x * BUILTIN::SIN(fParam8)) - (vVar0.y * BUILTIN::COS(fParam8)));
	fVar6 = (((Var3 * Var3) / (fParam6 * fParam6)) + ((Var3.f_1 * Var3.f_1) / (fParam7 * fParam7)));
	return fVar6 <= 1f;
}

int func_329(int iParam0)
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

void func_330(int iParam0)
{
	Global_1915643.f_18247 = iParam0;
}

int func_331(int iParam0)
{
	int iVar0;

	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = -4.585506E-21f;
			break;
		case -3:
			iVar0 = 2.741749E+08f;
			break;
		case 1:
			iVar0 = -6.049365E-28f;
			break;
		case -2:
			iVar0 = 1.540051E+08f;
			break;
		case 2:
			iVar0 = -2.882769E-19f;
			break;
		case 3:
			iVar0 = 3.67675E+19f;
			break;
		case 4:
			iVar0 = 2.694446E+36f;
			break;
		case 5:
			iVar0 = 32.15498f;
			break;
		case 6:
			iVar0 = -8.391956E-09f;
			break;
		case 7:
			iVar0 = 61686.1f;
			break;
		case 8:
			iVar0 = 5.182694E+24f;
			break;
		case 9:
			iVar0 = -5.243371E-15f;
			break;
		case 10:
			iVar0 = 5.863398E+29f;
			break;
		case 11:
			iVar0 = 6.767836E+30f;
			break;
		case 12:
			iVar0 = -1.287736E+17f;
			break;
		case 13:
			iVar0 = 5713673f;
			break;
		case 14:
			iVar0 = -3.715131E-31f;
			break;
		case 15:
			iVar0 = 3.998251E+09f;
			break;
		case 16:
			iVar0 = 2.816196E+24f;
			break;
		case 17:
			iVar0 = 3.266747E+28f;
			break;
		case 18:
			iVar0 = 1347.951f;
			break;
		case 19:
			iVar0 = -4.200322E+27f;
			break;
	}
	return iVar0;
}

bool func_332(struct<2> Param0, bool bParam2)
{
	if (!func_301(Param0))
	{
		return false;
	}
	func_333(bParam2);
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

void func_333(bool bParam0)
{
	*bParam0 = 0;
	bParam0->f_1 = -1;
	bParam0->f_2 = -1;
}

